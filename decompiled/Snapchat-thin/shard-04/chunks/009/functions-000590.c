/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039a9f18; end: 1039a9f77; -[SCGenAIAISnapsServices init] */

void FUN_1039a9f18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIAISnapsServices.SCGenAIAISnapsServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a9f44);
  (*pcVar1)();
}



/* Entry: 1039a9f78; end: 1039a9f87; -[SCGenAIAISnapsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a9f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbf880));
  return;
}



/* Entry: 1039a9f88; end: 1039aa00f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039a9f88(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a9c6a8();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fbf8b0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fbf8b8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039aa010);
  (*pcVar1)();
}



/* Entry: 1039aa010; end: 1039aa06f; -[_TtC39CameraActiveUserSessionScopeGraphBridge54CameraActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039aa010(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraActiveUserSessionScopeGraphBridge.CameraActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039aa03c);
  (*pcVar1)();
}



/* Entry: 1039aa070; end: 1039aa0a7; -[_TtC39CameraActiveUserSessionScopeGraphBridge54CameraActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039aa08c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039aa090) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aa070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbf8b0));
  return;
}



/* Entry: 1039aa0a8; end: 1039aa0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aa0a8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fbf8b8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fbf8b0));
  return;
}



/* Entry: 1039aa0d0; end: 1039aa133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039aa0d0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbfb68);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039aa134; end: 1039aa13b;  */

void FUN_1039aa134(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039aa13c; end: 1039aa1db;  */

void FUN_1039aa13c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039aa1dc; end: 1039aa1fb;  */

void FUN_1039aa1dc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039aa1fc; end: 1039aa25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039aa1fc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbfb70);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039aa260; end: 1039aa267;  */

void FUN_1039aa260(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039aa268; end: 1039aa307;  */

void FUN_1039aa268(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039aa308; end: 1039aa327;  */

void FUN_1039aa308(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039aa328; end: 1039aa38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039aa328(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbfb78);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039aa38c; end: 1039aa393;  */

void FUN_1039aa38c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039aa394; end: 1039aa433;  */

void FUN_1039aa394(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039aa434; end: 1039aa453;  */

void FUN_1039aa434(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039aa454; end: 1039aa4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aa454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbfb68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbfb70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbfb78) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039aa4c8; end: 1039aa527; -[_TtC39CameraActiveUserSessionScopeGraphBridge47CameraActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039aa4c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraActiveUserSessionScopeGraphBridge.CameraActiveUserSessionScopeGraphBridgeServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039aa4f4);
  (*pcVar1)();
}



/* Entry: 1039aa528; end: 1039aa5cb; -[_TtC39CameraActiveUserSessionScopeGraphBridge47CameraActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039aa544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039aa548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aa528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbfb68));
  return;
}



/* Entry: 1039aa5cc; end: 1039aa603;  */

undefined1  [16] FUN_1039aa5cc(void)

{
  return ZEXT816(0x1106b7630);
}



/* Entry: 1039aa604; end: 1039aa647; -[SCCameraActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1039aa604(undefined8 param_1)

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



/* Entry: 1039aa648; end: 1039aa67b;  */

void FUN_1039aa648(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039aa67c; end: 1039aa6c3; -[SCCameraActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039aa6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039aa6ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aa67c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbfbd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbfbd8));
  return;
}



/* Entry: 1039aa6c4; end: 1039aa6e3;  */

void FUN_1039aa6c4(void)

{
  func_0x000107c61168(&PTR_PTR_11290d118);
  return;
}



/* Entry: 1039aa6e4; end: 1039aa6ef; -[SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aa6e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbfc10;
  func_0x000107c61428(param_1 + _DAT_112fbfc10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039aa6f0; end: 1039aa6fb; -[SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aa6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbfc10;
  func_0x000107c61428(param_1 + _DAT_112fbfc10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039aa6fc; end: 1039aa707; -[SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider cameraActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aa6fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbfc18;
  func_0x000107c61428(param_1 + _DAT_112fbfc18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039aa708; end: 1039aa74b;  */

void FUN_1039aa708(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039aa74c; end: 1039aa757; -[SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider setCameraActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aa74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbfc18;
  func_0x000107c61428(param_1 + _DAT_112fbfc18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039aa758; end: 1039aa7ab;  */

void FUN_1039aa758(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039aa7ac; end: 1039aa9bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039aa7ac(void)

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
    func_0x000107c3f048();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039aa160();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbfb68);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbfc20);
      *(long *)(unaff_x20 + _DAT_112fbfc20) = lVar4;
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
                      "CameraActiveUserSessionScopeGraphBridge/SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider.swift"
                      ,0x70,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039aa8d8);
  (*pcVar1)();
}



/* Entry: 1039aa9c0; end: 1039aa9f3; -[SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider provide] */

void FUN_1039aa9c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039aa7ac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039aa9f4; end: 1039aaa27; -[SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider __safeProvide] */

void FUN_1039aa9f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039aa8d8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039aaa28; end: 1039aaa6b; -[SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider end] */

void FUN_1039aaa28(undefined8 param_1)

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



/* Entry: 1039aaa6c; end: 1039aac03;  */

void FUN_1039aaa6c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0e7e2a0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f181d60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraActiveUserSessionScopeGraphBridge/SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider.swift"
                            ,0x70,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039aac04);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52fb4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039aac04; end: 1039aacaf; -[SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039aac04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039aaa6c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039aacb0; end: 1039aad23; -[SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aacb0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbfc10,0);
  func_0x000107c61614(param_1 + _DAT_112fbfc18,0);
  *(undefined8 *)(param_1 + _DAT_112fbfc20) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039aad24; end: 1039aad57;  */

void FUN_1039aad24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039aad58; end: 1039aad9f; -[SCLockedCameraCaptureStorageManagementServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aad58(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbfc10);
  func_0x000107c61610(param_1 + _DAT_112fbfc18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbfc20));
  return;
}



/* Entry: 1039aada0; end: 1039aadbf;  */

void FUN_1039aada0(void)

{
  func_0x000107c61168(&PTR_PTR_112fbfc68);
  return;
}



/* Entry: 1039aadc0; end: 1039aadcb; -[SCSCCameraPermissionsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aadc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbfcd0;
  func_0x000107c61428(param_1 + _DAT_112fbfcd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039aadcc; end: 1039aadd7; -[SCSCCameraPermissionsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aadcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbfcd0;
  func_0x000107c61428(param_1 + _DAT_112fbfcd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039aadd8; end: 1039aade3; -[SCSCCameraPermissionsServicesSaberServiceProvider cameraActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aadd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbfcd8;
  func_0x000107c61428(param_1 + _DAT_112fbfcd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039aade4; end: 1039aae27;  */

void FUN_1039aade4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039aae28; end: 1039aae33; -[SCSCCameraPermissionsServicesSaberServiceProvider setCameraActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aae28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbfcd8;
  func_0x000107c61428(param_1 + _DAT_112fbfcd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039aae34; end: 1039aae87;  */

void FUN_1039aae34(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039aae88; end: 1039ab09b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039aae88(void)

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
    func_0x000107c3f048();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039aa28c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbfb70);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbfce0);
      *(long *)(unaff_x20 + _DAT_112fbfce0) = lVar4;
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
                      "CameraActiveUserSessionScopeGraphBridge/SCSCCameraPermissionsServicesSaberServiceProvider.swift"
                      ,0x5f,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039aafb4);
  (*pcVar1)();
}



/* Entry: 1039ab09c; end: 1039ab0cf; -[SCSCCameraPermissionsServicesSaberServiceProvider provide] */

void FUN_1039ab09c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039aae88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039ab0d0; end: 1039ab103; -[SCSCCameraPermissionsServicesSaberServiceProvider __safeProvide] */

void FUN_1039ab0d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039aafb4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039ab104; end: 1039ab147; -[SCSCCameraPermissionsServicesSaberServiceProvider end] */

void FUN_1039ab104(undefined8 param_1)

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



/* Entry: 1039ab148; end: 1039ab2df;  */

void FUN_1039ab148(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0e7e2a0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f181d60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraActiveUserSessionScopeGraphBridge/SCSCCameraPermissionsServicesSaberServiceProvider.swift"
                            ,0x5f,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ab2e0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52fb4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039ab2e0; end: 1039ab38b; -[SCSCCameraPermissionsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039ab2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039ab148(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039ab38c; end: 1039ab3ff; -[SCSCCameraPermissionsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ab38c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbfcd0,0);
  func_0x000107c61614(param_1 + _DAT_112fbfcd8,0);
  *(undefined8 *)(param_1 + _DAT_112fbfce0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039ab400; end: 1039ab433;  */

void FUN_1039ab400(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039ab434; end: 1039ab47b; -[SCSCCameraPermissionsServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ab434(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbfcd0);
  func_0x000107c61610(param_1 + _DAT_112fbfcd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbfce0));
  return;
}



/* Entry: 1039ab47c; end: 1039ab49b;  */

void FUN_1039ab47c(void)

{
  func_0x000107c61168(&PTR_PTR_112fbfd28);
  return;
}



/* Entry: 1039ab49c; end: 1039ab4a7; -[SCSCCameraUserStatusServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ab49c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbfd90;
  func_0x000107c61428(param_1 + _DAT_112fbfd90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039ab4a8; end: 1039ab4b3; -[SCSCCameraUserStatusServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ab4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbfd90;
  func_0x000107c61428(param_1 + _DAT_112fbfd90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ab4b4; end: 1039ab4bf; -[SCSCCameraUserStatusServicesSaberServiceProvider cameraActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ab4b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbfd98;
  func_0x000107c61428(param_1 + _DAT_112fbfd98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039ab4c0; end: 1039ab503;  */

void FUN_1039ab4c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039ab504; end: 1039ab50f; -[SCSCCameraUserStatusServicesSaberServiceProvider setCameraActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ab504(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbfd98;
  func_0x000107c61428(param_1 + _DAT_112fbfd98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ab510; end: 1039ab563;  */

void FUN_1039ab510(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ab564; end: 1039ab777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039ab564(void)

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
    func_0x000107c3f048();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039aa3b8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbfb78);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbfda0);
      *(long *)(unaff_x20 + _DAT_112fbfda0) = lVar4;
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
                      "CameraActiveUserSessionScopeGraphBridge/SCSCCameraUserStatusServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ab690);
  (*pcVar1)();
}



/* Entry: 1039ab778; end: 1039ab7ab; -[SCSCCameraUserStatusServicesSaberServiceProvider provide] */

void FUN_1039ab778(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039ab564();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039ab7ac; end: 1039ab7df; -[SCSCCameraUserStatusServicesSaberServiceProvider __safeProvide] */

void FUN_1039ab7ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039ab690();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039ab7e0; end: 1039ab823; -[SCSCCameraUserStatusServicesSaberServiceProvider end] */

void FUN_1039ab7e0(undefined8 param_1)

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



/* Entry: 1039ab824; end: 1039ab9bb;  */

void FUN_1039ab824(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0e7e2a0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f181d60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraActiveUserSessionScopeGraphBridge/SCSCCameraUserStatusServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ab9bc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52fb4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039ab9bc; end: 1039aba67; -[SCSCCameraUserStatusServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039ab9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039ab824(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039aba68; end: 1039abadb; -[SCSCCameraUserStatusServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039aba68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbfd90,0);
  func_0x000107c61614(param_1 + _DAT_112fbfd98,0);
  *(undefined8 *)(param_1 + _DAT_112fbfda0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039abadc; end: 1039abb0f;  */

void FUN_1039abadc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039abb10; end: 1039abb57; -[SCSCCameraUserStatusServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039abb10(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbfd90);
  func_0x000107c61610(param_1 + _DAT_112fbfd98);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbfda0));
  return;
}



/* Entry: 1039abb58; end: 1039abb77;  */

void FUN_1039abb58(void)

{
  func_0x000107c61168(&PTR_PTR_112fbfde8);
  return;
}



/* Entry: 1039abb78; end: 1039abbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039abb78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbfe50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039abbc4; end: 1039abc1b; -[_TtC44LockedCameraCaptureStorageManagementServices44LockedCameraCaptureStorageManagementServices initWithLockedCameraCaptureStorageManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039abbc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fbfe50) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1039abc1c; end: 1039abc7b; -[_TtC44LockedCameraCaptureStorageManagementServices44LockedCameraCaptureStorageManagementServices init] */

void FUN_1039abc1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedCameraCaptureStorageManagementServices.LockedCameraCaptureStorageManagementServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039abc48);
  (*pcVar1)();
}



/* Entry: 1039abc7c; end: 1039abc8b; -[_TtC44LockedCameraCaptureStorageManagementServices44LockedCameraCaptureStorageManagementServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039abc7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbfe50));
  return;
}



/* Entry: 1039abc8c; end: 1039abd23; -[SCLockedCameraCapturedMediaData url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039abc8c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_11380c068,lVar1);
  func_0x000107c5ed90();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1039abd24; end: 1039abd33; -[SCLockedCameraCapturedMediaData isImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1039abd24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11380c070);
}



/* Entry: 1039abd34; end: 1039abde3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039abd34(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar1 = _DAT_11380c068;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  *(undefined1 *)(unaff_x20 + _DAT_11380c070) = param_2;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_1,lVar2);
  return puVar3;
}



/* Entry: 1039abde4; end: 1039abe87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039abde4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  
  lVar1 = _DAT_11380c068;
  puVar3 = &stack0xffffffffffffffb0;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  *(undefined1 *)(unaff_x20 + _DAT_11380c070) = param_2;
  FUN_1039abe88();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_1,lVar2);
  return puVar3;
}



/* Entry: 1039abe88; end: 1039abebf;  */

void FUN_1039abe88(undefined8 param_1)

{
  if (lRam0000000112fbfea8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7963e8);
  return;
}



/* Entry: 1039abec0; end: 1039abf9b; -[SCLockedCameraCapturedMediaData initWithUrl:isImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1039abec0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(lVar4,param_3);
  (**(code **)(lVar5 + 0x10))(param_1 + _DAT_11380c068,lVar4,lVar1);
  *(undefined1 *)(param_1 + _DAT_11380c070) = param_4;
  uVar2 = 0;
  FUN_1039abe88();
  plVar3 = &lStack_50;
  lStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(lVar4,lVar1);
  return plVar3;
}



/* Entry: 1039abf9c; end: 1039abffb; -[SCLockedCameraCapturedMediaData init] */

void FUN_1039abf9c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LockedCameraCaptureStorageManagementServices.LockedCameraCapturedMediaData",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039abfc8);
  (*pcVar1)();
}



/* Entry: 1039abffc; end: 1039ac037; -[SCLockedCameraCapturedMediaData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039abffc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_11380c068;
  lVar2 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001039ac034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 1039ac038; end: 1039ac03f;  */

void FUN_1039ac038(void)

{
  if (lRam0000000112fbfea8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7963e8);
  return;
}



/* Entry: 1039ac040; end: 1039ac0b3;  */

void FUN_1039ac040(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dc30480;
    func_0x000107c61630(param_1,0x100,2,&lStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 1039ac0b4; end: 1039ac13b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039ac0b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a9ccf0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fbfeb8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fbfec0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ac13c);
  (*pcVar1)();
}



/* Entry: 1039ac13c; end: 1039ac19b; -[_TtC42ClientresActiveUserSessionScopeGraphBridge57ClientresActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039ac13c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ClientresActiveUserSessionScopeGraphBridge.ClientresActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,100,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ac168);
  (*pcVar1)();
}



/* Entry: 1039ac19c; end: 1039ac1d3; -[_TtC42ClientresActiveUserSessionScopeGraphBridge57ClientresActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039ac1b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039ac1bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ac19c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbfeb8));
  return;
}



/* Entry: 1039ac1d4; end: 1039ac1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ac1d4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fbfec0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fbfeb8));
  return;
}



/* Entry: 1039ac1fc; end: 1039ac25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039ac1fc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbffd0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039ac260; end: 1039ac267;  */

void FUN_1039ac260(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039ac268; end: 1039ac307;  */

void FUN_1039ac268(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039ac308; end: 1039ac373;  */

void FUN_1039ac308(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039ac374; end: 1039ac3d3; -[_TtC42ClientresActiveUserSessionScopeGraphBridge50ClientresActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039ac374(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ClientresActiveUserSessionScopeGraphBridge.ClientresActiveUserSessionScopeGraphBridgeServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ac3a0);
  (*pcVar1)();
}



/* Entry: 1039ac3d4; end: 1039ac3e3; -[_TtC42ClientresActiveUserSessionScopeGraphBridge50ClientresActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ac3d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbffd0));
  return;
}



/* Entry: 1039ac3e4; end: 1039ac43f;  */

void FUN_1039ac3e4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fbffc0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112fbffc0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1039ac440; end: 1039ac477;  */

undefined1  [16] FUN_1039ac440(void)

{
  return ZEXT816(0x1106b7860);
}


