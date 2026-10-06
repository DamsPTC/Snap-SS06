/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103aab038; end: 103aab0d7;  */

void FUN_103aab038(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aab0d8; end: 103aab0f7;  */

void FUN_103aab0d8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aab0f8; end: 103aab24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aab0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe2c88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2c90) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2c98) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2ca0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2ca8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2cb0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2cb8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2cc0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2cc8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2cd0) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2cd8) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2ce0) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2ce8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2cf0) = param_14;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aab24c; end: 103aab2ab; -[_TtC40SpecengActiveUserSessionScopeGraphBridge48SpecengActiveUserSessionScopeGraphBridgeServices init] */

void FUN_103aab24c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpecengActiveUserSessionScopeGraphBridge.SpecengActiveUserSessionScopeGraphBridgeServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aab278);
  (*pcVar1)();
}



/* Entry: 103aab2ac; end: 103aab3ff; -[_TtC40SpecengActiveUserSessionScopeGraphBridge48SpecengActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aab2c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aab2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aab308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aab328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aab348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aab368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aab388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aab36c) */
/* WARNING: Removing unreachable block (ram,0x000103aab34c) */
/* WARNING: Removing unreachable block (ram,0x000103aab32c) */
/* WARNING: Removing unreachable block (ram,0x000103aab30c) */
/* WARNING: Removing unreachable block (ram,0x000103aab2ec) */
/* WARNING: Removing unreachable block (ram,0x000103aab2cc) */
/* WARNING: Removing unreachable block (ram,0x000103aab38c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aab2ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe2c90));
  return;
}



/* Entry: 103aab400; end: 103aab437;  */

undefined1  [16] FUN_103aab400(void)

{
  return ZEXT816(0x1106c9d50);
}



/* Entry: 103aab438; end: 103aab47b; -[SCSpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103aab438(undefined8 param_1)

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



/* Entry: 103aab47c; end: 103aab4af;  */

void FUN_103aab47c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aab4b0; end: 103aab4f7; -[SCSpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aab4dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aab4e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aab4b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe2d48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2d50));
  return;
}



/* Entry: 103aab4f8; end: 103aab517;  */

void FUN_103aab4f8(void)

{
  func_0x000107c61168(&PTR_PTR_1129205a8);
  return;
}



/* Entry: 103aab518; end: 103aab55b; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint end] */

void FUN_103aab518(undefined8 param_1)

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



/* Entry: 103aab55c; end: 103aab58f;  */

void FUN_103aab55c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aab590; end: 103aab5e7; -[SCSCSpectaclesAppStatusServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aab5cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aab5d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aab590(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe2d88);
  func_0x000107c61610(param_1 + _DAT_112fe2d90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2d98));
  return;
}



/* Entry: 103aab5e8; end: 103aab607;  */

void FUN_103aab5e8(void)

{
  func_0x000107c61168(&PTR_PTR_112920670);
  return;
}



/* Entry: 103aab608; end: 103aab64b; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint end] */

void FUN_103aab608(undefined8 param_1)

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



/* Entry: 103aab64c; end: 103aab67f;  */

void FUN_103aab64c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aab680; end: 103aab6d7; -[SCSCSpectaclesAsyncQueuesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aab6bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aab6c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aab680(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe2dd0);
  func_0x000107c61610(param_1 + _DAT_112fe2dd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2de0));
  return;
}



/* Entry: 103aab6d8; end: 103aab6f7;  */

void FUN_103aab6d8(void)

{
  func_0x000107c61168(&PTR_PTR_112920740);
  return;
}



/* Entry: 103aab6f8; end: 103aab73b; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint end] */

void FUN_103aab6f8(undefined8 param_1)

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



/* Entry: 103aab73c; end: 103aab76f;  */

void FUN_103aab73c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aab770; end: 103aab7c7; -[SCSCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aab7ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aab7b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aab770(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe2e18);
  func_0x000107c61610(param_1 + _DAT_112fe2e20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2e28));
  return;
}



/* Entry: 103aab7c8; end: 103aab7e7;  */

void FUN_103aab7c8(void)

{
  func_0x000107c61168(&PTR_PTR_112920810);
  return;
}



/* Entry: 103aab7e8; end: 103aab82b; -[SCSCSpectaclesContentStatusServicesSaberEntryPoint end] */

void FUN_103aab7e8(undefined8 param_1)

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



/* Entry: 103aab82c; end: 103aab85f;  */

void FUN_103aab82c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aab860; end: 103aab8b7; -[SCSCSpectaclesContentStatusServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aab89c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aab8a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aab860(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe2e60);
  func_0x000107c61610(param_1 + _DAT_112fe2e68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2e70));
  return;
}



/* Entry: 103aab8b8; end: 103aab8d7;  */

void FUN_103aab8b8(void)

{
  func_0x000107c61168(&PTR_PTR_1129208e0);
  return;
}



/* Entry: 103aab8d8; end: 103aab91b; -[SCSCSpectaclesNetworkConnectivityServicesSaberEntryPoint end] */

void FUN_103aab8d8(undefined8 param_1)

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



/* Entry: 103aab91c; end: 103aab94f;  */

void FUN_103aab91c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aab950; end: 103aab9a7; -[SCSCSpectaclesNetworkConnectivityServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aab98c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aab990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aab950(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe2ea8);
  func_0x000107c61610(param_1 + _DAT_112fe2eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2eb8));
  return;
}



/* Entry: 103aab9a8; end: 103aab9c7;  */

void FUN_103aab9a8(void)

{
  func_0x000107c61168(&PTR_PTR_1129209b0);
  return;
}



/* Entry: 103aab9c8; end: 103aaba0b; -[SCSCSpectaclesNotificationsServicesSaberEntryPoint end] */

void FUN_103aab9c8(undefined8 param_1)

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



/* Entry: 103aaba0c; end: 103aaba3f;  */

void FUN_103aaba0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aaba40; end: 103aaba97; -[SCSCSpectaclesNotificationsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aaba7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aaba80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaba40(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe2ef0);
  func_0x000107c61610(param_1 + _DAT_112fe2ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2f00));
  return;
}



/* Entry: 103aaba98; end: 103aabab7;  */

void FUN_103aaba98(void)

{
  func_0x000107c61168(&PTR_PTR_112920a80);
  return;
}



/* Entry: 103aabab8; end: 103aabafb; -[SCSCSpectaclesServicesSaberEntryPoint end] */

void FUN_103aabab8(undefined8 param_1)

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



/* Entry: 103aabafc; end: 103aabb2f;  */

void FUN_103aabafc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aabb30; end: 103aabb87; -[SCSCSpectaclesServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aabb6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aabb70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aabb30(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe2f38);
  func_0x000107c61610(param_1 + _DAT_112fe2f40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2f48));
  return;
}



/* Entry: 103aabb88; end: 103aabba7;  */

void FUN_103aabb88(void)

{
  func_0x000107c61168(&PTR_PTR_112920b50);
  return;
}



/* Entry: 103aabba8; end: 103aabbeb; -[SCSCSpectaclesUIAutomationServicesSaberEntryPoint end] */

void FUN_103aabba8(undefined8 param_1)

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



/* Entry: 103aabbec; end: 103aabc1f;  */

void FUN_103aabbec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aabc20; end: 103aabc77; -[SCSCSpectaclesUIAutomationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aabc5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aabc60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aabc20(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe2f80);
  func_0x000107c61610(param_1 + _DAT_112fe2f88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2f90));
  return;
}



/* Entry: 103aabc78; end: 103aabc97;  */

void FUN_103aabc78(void)

{
  func_0x000107c61168(&PTR_PTR_112920c20);
  return;
}



/* Entry: 103aabc98; end: 103aabca3; -[SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aabc98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2fc8;
  func_0x000107c61428(param_1 + _DAT_112fe2fc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aabca4; end: 103aabcaf; -[SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aabca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2fc8;
  func_0x000107c61428(param_1 + _DAT_112fe2fc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aabcb0; end: 103aabcbb; -[SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider specengActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aabcb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe2fd0;
  func_0x000107c61428(param_1 + _DAT_112fe2fd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aabcbc; end: 103aabcff;  */

void FUN_103aabcbc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103aabd00; end: 103aabd0b; -[SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider setSpecengActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aabd00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe2fd0;
  func_0x000107c61428(param_1 + _DAT_112fe2fd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aabd0c; end: 103aabd5f;  */

void FUN_103aabd0c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aabd60; end: 103aabf73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103aabd60(void)

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
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103aaaafc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe2c88);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe2fd8);
      *(long *)(unaff_x20 + _DAT_112fe2fd8) = lVar4;
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
                      "SpecengActiveUserSessionScopeGraphBridge/SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider.swift"
                      ,0x67,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aabe8c);
  (*pcVar1)();
}



/* Entry: 103aabf74; end: 103aabfa7; -[SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider provide] */

void FUN_103aabf74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103aabd60();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aabfa8; end: 103aabfdb; -[SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider __safeProvide] */

void FUN_103aabfa8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103aabe8c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aabfdc; end: 103aac01f; -[SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider end] */

void FUN_103aabfdc(undefined8 param_1)

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



/* Entry: 103aac020; end: 103aac1b7;  */

void FUN_103aac020(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e68410)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f197bf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpecengActiveUserSessionScopeGraphBridge/SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider.swift"
                            ,0x67,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103aac1b8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103aac1b8; end: 103aac263; -[SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103aac1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103aac020(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103aac264; end: 103aac2d7; -[SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aac264(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe2fc8,0);
  func_0x000107c61614(param_1 + _DAT_112fe2fd0,0);
  *(undefined8 *)(param_1 + _DAT_112fe2fd8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aac2d8; end: 103aac30b;  */

void FUN_103aac2d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aac30c; end: 103aac353; -[SCSCLegacySpectaclesTooltipsServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aac30c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe2fc8);
  func_0x000107c61610(param_1 + _DAT_112fe2fd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe2fd8));
  return;
}



/* Entry: 103aac354; end: 103aac373;  */

void FUN_103aac354(void)

{
  func_0x000107c61168(&PTR_PTR_112fe3020);
  return;
}



/* Entry: 103aac374; end: 103aac37f; -[SCSCSpectaclesAuthorizationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aac374(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3088;
  func_0x000107c61428(param_1 + _DAT_112fe3088,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aac380; end: 103aac38b; -[SCSCSpectaclesAuthorizationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aac380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3088;
  func_0x000107c61428(param_1 + _DAT_112fe3088,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aac38c; end: 103aac397; -[SCSCSpectaclesAuthorizationServicesSaberServiceProvider specengActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aac38c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3090;
  func_0x000107c61428(param_1 + _DAT_112fe3090,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aac398; end: 103aac3db;  */

void FUN_103aac398(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103aac3dc; end: 103aac3e7; -[SCSCSpectaclesAuthorizationServicesSaberServiceProvider setSpecengActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aac3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3090;
  func_0x000107c61428(param_1 + _DAT_112fe3090,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aac3e8; end: 103aac43b;  */

void FUN_103aac3e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aac43c; end: 103aac64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103aac43c(void)

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
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103aaac28();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe2ca0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe3098);
      *(long *)(unaff_x20 + _DAT_112fe3098) = lVar4;
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
                      "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesAuthorizationServicesSaberServiceProvider.swift"
                      ,0x66,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aac568);
  (*pcVar1)();
}



/* Entry: 103aac650; end: 103aac683; -[SCSCSpectaclesAuthorizationServicesSaberServiceProvider provide] */

void FUN_103aac650(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103aac43c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aac684; end: 103aac6b7; -[SCSCSpectaclesAuthorizationServicesSaberServiceProvider __safeProvide] */

void FUN_103aac684(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103aac568();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aac6b8; end: 103aac6fb; -[SCSCSpectaclesAuthorizationServicesSaberServiceProvider end] */

void FUN_103aac6b8(undefined8 param_1)

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



/* Entry: 103aac6fc; end: 103aac893;  */

void FUN_103aac6fc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e68410)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f197bf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesAuthorizationServicesSaberServiceProvider.swift"
                            ,0x66,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103aac894);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103aac894; end: 103aac93f; -[SCSCSpectaclesAuthorizationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103aac894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103aac6fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103aac940; end: 103aac9b3; -[SCSCSpectaclesAuthorizationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aac940(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe3088,0);
  func_0x000107c61614(param_1 + _DAT_112fe3090,0);
  *(undefined8 *)(param_1 + _DAT_112fe3098) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aac9b4; end: 103aac9e7;  */

void FUN_103aac9b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aac9e8; end: 103aaca2f; -[SCSCSpectaclesAuthorizationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aac9e8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe3088);
  func_0x000107c61610(param_1 + _DAT_112fe3090);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe3098));
  return;
}



/* Entry: 103aaca30; end: 103aaca4f;  */

void FUN_103aaca30(void)

{
  func_0x000107c61168(&PTR_PTR_112fe30e0);
  return;
}



/* Entry: 103aaca50; end: 103aaca5b; -[SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaca50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3148;
  func_0x000107c61428(param_1 + _DAT_112fe3148,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aaca5c; end: 103aaca67; -[SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaca5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3148;
  func_0x000107c61428(param_1 + _DAT_112fe3148,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aaca68; end: 103aaca73; -[SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider specengActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaca68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe3150;
  func_0x000107c61428(param_1 + _DAT_112fe3150,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aaca74; end: 103aacab7;  */

void FUN_103aaca74(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103aacab8; end: 103aacac3; -[SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider setSpecengActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aacab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe3150;
  func_0x000107c61428(param_1 + _DAT_112fe3150,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aacac4; end: 103aacb17;  */

void FUN_103aacac4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aacb18; end: 103aacd2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103aacb18(void)

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
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103aaad54();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe2ca8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe3158);
      *(long *)(unaff_x20 + _DAT_112fe3158) = lVar4;
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
                      "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider.swift"
                      ,0x69,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aacc44);
  (*pcVar1)();
}



/* Entry: 103aacd2c; end: 103aacd5f; -[SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider provide] */

void FUN_103aacd2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103aacb18();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aacd60; end: 103aacd93; -[SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider __safeProvide] */

void FUN_103aacd60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103aacc44();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aacd94; end: 103aacdd7; -[SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider end] */

void FUN_103aacd94(undefined8 param_1)

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



/* Entry: 103aacdd8; end: 103aacf6f;  */

void FUN_103aacdd8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e68410)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f197bf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider.swift"
                            ,0x69,2,0x3e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103aacf70);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103aacf70; end: 103aad01b; -[SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103aacf70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103aacdd8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103aad01c; end: 103aad08f; -[SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aad01c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe3148,0);
  func_0x000107c61614(param_1 + _DAT_112fe3150,0);
  *(undefined8 *)(param_1 + _DAT_112fe3158) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aad090; end: 103aad0c3;  */

void FUN_103aad090(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aad0c4; end: 103aad10b; -[SCSCSpectaclesAuxiliaryContentServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aad0c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe3148);
  func_0x000107c61610(param_1 + _DAT_112fe3150);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe3158));
  return;
}



/* Entry: 103aad10c; end: 103aad12b;  */

void FUN_103aad10c(void)

{
  func_0x000107c61168(&PTR_PTR_112fe31a0);
  return;
}



/* Entry: 103aad12c; end: 103aad257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103aad12c(void)

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
    func_0x000107c5b6c4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000100c506e0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe2cc0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe3218);
      *(long *)(unaff_x20 + _DAT_112fe3218) = lVar4;
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
                      "SpecengActiveUserSessionScopeGraphBridge/SCSCSpectaclesMemoriesContentServicesSaberServiceProvider.swift"
                      ,0x68,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aad258);
  (*pcVar1)();
}



/* Entry: 103aad258; end: 103aad28b; -[SCSCSpectaclesMemoriesContentServicesSaberServiceProvider provide] */

void FUN_103aad258(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103aad12c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aad28c; end: 103aad2cf; -[SCSCSpectaclesMemoriesContentServicesSaberServiceProvider end] */

void FUN_103aad28c(undefined8 param_1)

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



/* Entry: 103aad2d0; end: 103aad303;  */

void FUN_103aad2d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aad304; end: 103aad34b; -[SCSCSpectaclesMemoriesContentServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aad304(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe3208);
  func_0x000107c61610(param_1 + _DAT_112fe3210);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe3218));
  return;
}



/* Entry: 103aad34c; end: 103aad36b;  */

void FUN_103aad34c(void)

{
  func_0x000107c61168(&PTR_PTR_112fe3260);
  return;
}



/* Entry: 103aad36c; end: 103aad377; -[SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aad36c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe32c8;
  func_0x000107c61428(param_1 + _DAT_112fe32c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aad378; end: 103aad383; -[SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aad378(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe32c8;
  func_0x000107c61428(param_1 + _DAT_112fe32c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aad384; end: 103aad38f; -[SCSCSpectaclesOnDemandResourcesServicesSaberServiceProvider specengActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aad384(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe32d0;
  func_0x000107c61428(param_1 + _DAT_112fe32d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aad390; end: 103aad3d3;  */

void FUN_103aad390(long param_1,undefined8 param_2,long *param_3)

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


