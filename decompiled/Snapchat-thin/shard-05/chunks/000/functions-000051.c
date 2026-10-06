/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a94a94; end: 103a94b03; -[SCProfile3BridgeWiring .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a94ae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a94ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94a94(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fdeb00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fdeb08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fdeb10));
  if (*(long *)(param_1 + _DAT_112fdeb18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112fdeb18))[1]);
    return;
  }
  return;
}



/* Entry: 103a94b04; end: 103a94b23;  */

void FUN_103a94b04(void)

{
  func_0x000107c61168(&PTR_PTR_11291d670);
  return;
}



/* Entry: 103a94b24; end: 103a94b57;  */

void FUN_103a94b24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103a94b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103a94b58; end: 103a94bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a94b58(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa6b80();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fdeb50) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fdeb58) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a94be0);
  (*pcVar1)();
}



/* Entry: 103a94be0; end: 103a94c3f; -[_TtC37PushActiveUserSessionScopeGraphBridge52PushActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a94be0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PushActiveUserSessionScopeGraphBridge.PushActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a94c0c);
  (*pcVar1)();
}



/* Entry: 103a94c40; end: 103a94c77; -[_TtC37PushActiveUserSessionScopeGraphBridge52PushActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a94c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a94c60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdeb50));
  return;
}



/* Entry: 103a94c78; end: 103a94c9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94c78(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fdeb58),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fdeb50));
  return;
}



/* Entry: 103a94ca0; end: 103a94d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a94ca0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fdf070);
  *(undefined8 *)(unaff_x20 + _DAT_112fdeb88) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fdeb90) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103a94d3c; end: 103a94d9b; -[_TtC37PushActiveUserSessionScopeGraphBridge51SCNativeNotificationHandlingServicesSaberEntryPoint init] */

void FUN_103a94d3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PushActiveUserSessionScopeGraphBridge.SCNativeNotificationHandlingServicesSaberEntryPoint"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a94d68);
  (*pcVar1)();
}



/* Entry: 103a94d9c; end: 103a94e2f; -[_TtC37PushActiveUserSessionScopeGraphBridge51SCNativeNotificationHandlingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94d9c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fdeb88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdeb90));
  return;
}



/* Entry: 103a94e30; end: 103a94e37;  */

undefined8 FUN_103a94e30(void)

{
  return 0;
}



/* Entry: 103a94e38; end: 103a94ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a94e38(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fdf078);
  *(undefined8 *)(unaff_x20 + _DAT_112fdebc0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fdebc8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103a94ed4; end: 103a94f33; -[_TtC37PushActiveUserSessionScopeGraphBridge41SCNotificationDataServicesSaberEntryPoint init] */

void FUN_103a94ed4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PushActiveUserSessionScopeGraphBridge.SCNotificationDataServicesSaberEntryPoint"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a94f00);
  (*pcVar1)();
}



/* Entry: 103a94f34; end: 103a94fc7; -[_TtC37PushActiveUserSessionScopeGraphBridge41SCNotificationDataServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a94f34(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fdebc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdebc8));
  return;
}



/* Entry: 103a94fc8; end: 103a94fcf;  */

undefined8 FUN_103a94fc8(void)

{
  return 0;
}



/* Entry: 103a94fd0; end: 103a9506b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a94fd0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fdf088);
  *(undefined8 *)(unaff_x20 + _DAT_112fdebf8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fdec00) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103a9506c; end: 103a950cb; -[_TtC37PushActiveUserSessionScopeGraphBridge51SCNotificationStartupLoggingServicesSaberEntryPoint init] */

void FUN_103a9506c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PushActiveUserSessionScopeGraphBridge.SCNotificationStartupLoggingServicesSaberEntryPoint"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a95098);
  (*pcVar1)();
}



/* Entry: 103a950cc; end: 103a9515f; -[_TtC37PushActiveUserSessionScopeGraphBridge51SCNotificationStartupLoggingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a950cc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fdebf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdec00));
  return;
}



/* Entry: 103a95160; end: 103a95167;  */

undefined8 FUN_103a95160(void)

{
  return 0;
}



/* Entry: 103a95168; end: 103a951cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a95168(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdf050);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a951cc; end: 103a951d3;  */

void FUN_103a951cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a951d4; end: 103a95273;  */

void FUN_103a951d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a95274; end: 103a95293;  */

void FUN_103a95274(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a95294; end: 103a952f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a95294(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdf058);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a952f8; end: 103a952ff;  */

void FUN_103a952f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a95300; end: 103a9539f;  */

void FUN_103a95300(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a953a0; end: 103a953bf;  */

void FUN_103a953a0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a953c0; end: 103a95423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a953c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdf060);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a95424; end: 103a9542b;  */

void FUN_103a95424(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a9542c; end: 103a954cb;  */

void FUN_103a9542c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a954cc; end: 103a954eb;  */

void FUN_103a954cc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a954ec; end: 103a9554f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a954ec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdf068);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a95550; end: 103a95557;  */

void FUN_103a95550(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a95558; end: 103a955f7;  */

void FUN_103a95558(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a955f8; end: 103a95617;  */

void FUN_103a955f8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a95618; end: 103a9567b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a95618(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdf080);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a9567c; end: 103a95683;  */

void FUN_103a9567c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a95684; end: 103a95723;  */

void FUN_103a95684(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a95724; end: 103a95743;  */

void FUN_103a95724(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a95744; end: 103a9581f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a95744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdf050) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fdf058) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fdf060) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fdf068) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fdf070) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fdf078) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fdf080) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fdf088) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a95820; end: 103a9587f; -[_TtC37PushActiveUserSessionScopeGraphBridge45PushActiveUserSessionScopeGraphBridgeServices init] */

void FUN_103a95820(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PushActiveUserSessionScopeGraphBridge.PushActiveUserSessionScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a9584c);
  (*pcVar1)();
}



/* Entry: 103a95880; end: 103a95973; -[_TtC37PushActiveUserSessionScopeGraphBridge45PushActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a9589c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a958bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a958dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a958fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a958e0) */
/* WARNING: Removing unreachable block (ram,0x000103a958c0) */
/* WARNING: Removing unreachable block (ram,0x000103a958a0) */
/* WARNING: Removing unreachable block (ram,0x000103a95900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a95880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdf070));
  return;
}



/* Entry: 103a95974; end: 103a959ab;  */

undefined1  [16] FUN_103a95974(void)

{
  return ZEXT816(0x1106c83f8);
}



/* Entry: 103a959ac; end: 103a959ef; -[SCPushActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103a959ac(undefined8 param_1)

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



/* Entry: 103a959f0; end: 103a95a23;  */

void FUN_103a959f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a95a24; end: 103a95a6b; -[SCPushActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a95a50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a95a54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a95a24(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdf0e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdf0e8));
  return;
}



/* Entry: 103a95a6c; end: 103a95a8b;  */

void FUN_103a95a6c(void)

{
  func_0x000107c61168(&PTR_PTR_11291db68);
  return;
}



/* Entry: 103a95a8c; end: 103a95acf; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint end] */

void FUN_103a95a8c(undefined8 param_1)

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



/* Entry: 103a95ad0; end: 103a95b03;  */

void FUN_103a95ad0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a95b04; end: 103a95b5b; -[SCSCNativeNotificationHandlingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a95b40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a95b44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a95b04(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdf120);
  func_0x000107c61610(param_1 + _DAT_112fdf128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdf130));
  return;
}



/* Entry: 103a95b5c; end: 103a95b7b;  */

void FUN_103a95b5c(void)

{
  func_0x000107c61168(&PTR_PTR_11291dc30);
  return;
}



/* Entry: 103a95b7c; end: 103a95bbf; -[SCSCNotificationDataServicesSaberEntryPoint end] */

void FUN_103a95b7c(undefined8 param_1)

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



/* Entry: 103a95bc0; end: 103a95bf3;  */

void FUN_103a95bc0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a95bf4; end: 103a95c4b; -[SCSCNotificationDataServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a95c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a95c34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a95bf4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdf168);
  func_0x000107c61610(param_1 + _DAT_112fdf170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdf178));
  return;
}



/* Entry: 103a95c4c; end: 103a95c6b;  */

void FUN_103a95c4c(void)

{
  func_0x000107c61168(&PTR_PTR_11291dd00);
  return;
}



/* Entry: 103a95c6c; end: 103a95caf; -[SCSCNotificationStartupLoggingServicesSaberEntryPoint end] */

void FUN_103a95c6c(undefined8 param_1)

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



/* Entry: 103a95cb0; end: 103a95ce3;  */

void FUN_103a95cb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a95ce4; end: 103a95d3b; -[SCSCNotificationStartupLoggingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a95d20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a95d24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a95ce4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdf1b0);
  func_0x000107c61610(param_1 + _DAT_112fdf1b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdf1c0));
  return;
}



/* Entry: 103a95d3c; end: 103a95d5b;  */

void FUN_103a95d3c(void)

{
  func_0x000107c61168(&PTR_PTR_11291ddd0);
  return;
}



/* Entry: 103a95d5c; end: 103a95d67; -[SCBillboardLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a95d5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf1f8;
  func_0x000107c61428(param_1 + _DAT_112fdf1f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a95d68; end: 103a95d73; -[SCBillboardLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a95d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf1f8;
  func_0x000107c61428(param_1 + _DAT_112fdf1f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a95d74; end: 103a95d7f; -[SCBillboardLoggingServicesSaberServiceProvider pushActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a95d74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf200;
  func_0x000107c61428(param_1 + _DAT_112fdf200,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a95d80; end: 103a95dc3;  */

void FUN_103a95d80(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a95dc4; end: 103a95dcf; -[SCBillboardLoggingServicesSaberServiceProvider setPushActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a95dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf200;
  func_0x000107c61428(param_1 + _DAT_112fdf200,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a95dd0; end: 103a95e23;  */

void FUN_103a95dd0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a95e24; end: 103a96037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a95e24(void)

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
    func_0x000107c4f6b8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a951f8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdf050);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdf208);
      *(long *)(unaff_x20 + _DAT_112fdf208) = lVar4;
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
                      "PushActiveUserSessionScopeGraphBridge/SCBillboardLoggingServicesSaberServiceProvider.swift"
                      ,0x5a,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a95f50);
  (*pcVar1)();
}



/* Entry: 103a96038; end: 103a9606b; -[SCBillboardLoggingServicesSaberServiceProvider provide] */

void FUN_103a96038(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a95e24();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a9606c; end: 103a9609f; -[SCBillboardLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_103a9606c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a95f50();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a960a0; end: 103a960e3; -[SCBillboardLoggingServicesSaberServiceProvider end] */

void FUN_103a960a0(undefined8 param_1)

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



/* Entry: 103a960e4; end: 103a9627b;  */

void FUN_103a960e4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e6af80)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f195080,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PushActiveUserSessionScopeGraphBridge/SCBillboardLoggingServicesSaberServiceProvider.swift"
                            ,0x5a,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a9627c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a9627c; end: 103a96327; -[SCBillboardLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a9627c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a960e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a96328; end: 103a9639b; -[SCBillboardLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a96328(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdf1f8,0);
  func_0x000107c61614(param_1 + _DAT_112fdf200,0);
  *(undefined8 *)(param_1 + _DAT_112fdf208) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a9639c; end: 103a963cf;  */

void FUN_103a9639c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a963d0; end: 103a96417; -[SCBillboardLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a963d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdf1f8);
  func_0x000107c61610(param_1 + _DAT_112fdf200);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdf208));
  return;
}



/* Entry: 103a96418; end: 103a96437;  */

void FUN_103a96418(void)

{
  func_0x000107c61168(&PTR_PTR_112fdf250);
  return;
}



/* Entry: 103a96438; end: 103a96443; -[SCIntentDonatingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a96438(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf2b8;
  func_0x000107c61428(param_1 + _DAT_112fdf2b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a96444; end: 103a9644f; -[SCIntentDonatingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a96444(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf2b8;
  func_0x000107c61428(param_1 + _DAT_112fdf2b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a96450; end: 103a9645b; -[SCIntentDonatingServicesSaberServiceProvider pushActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a96450(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf2c0;
  func_0x000107c61428(param_1 + _DAT_112fdf2c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a9645c; end: 103a9649f;  */

void FUN_103a9645c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a964a0; end: 103a964ab; -[SCIntentDonatingServicesSaberServiceProvider setPushActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a964a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf2c0;
  func_0x000107c61428(param_1 + _DAT_112fdf2c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a964ac; end: 103a964ff;  */

void FUN_103a964ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a96500; end: 103a96713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a96500(void)

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
    func_0x000107c4f6b8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a95324();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdf058);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdf2c8);
      *(long *)(unaff_x20 + _DAT_112fdf2c8) = lVar4;
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
                      "PushActiveUserSessionScopeGraphBridge/SCIntentDonatingServicesSaberServiceProvider.swift"
                      ,0x58,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a9662c);
  (*pcVar1)();
}



/* Entry: 103a96714; end: 103a96747; -[SCIntentDonatingServicesSaberServiceProvider provide] */

void FUN_103a96714(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a96500();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a96748; end: 103a9677b; -[SCIntentDonatingServicesSaberServiceProvider __safeProvide] */

void FUN_103a96748(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a9662c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a9677c; end: 103a967bf; -[SCIntentDonatingServicesSaberServiceProvider end] */

void FUN_103a9677c(undefined8 param_1)

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



/* Entry: 103a967c0; end: 103a96957;  */

void FUN_103a967c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e6af80)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f195080,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PushActiveUserSessionScopeGraphBridge/SCIntentDonatingServicesSaberServiceProvider.swift"
                            ,0x58,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a96958);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a96958; end: 103a96a03; -[SCIntentDonatingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a96958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103a967c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a96a04; end: 103a96a77; -[SCIntentDonatingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a96a04(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdf2b8,0);
  func_0x000107c61614(param_1 + _DAT_112fdf2c0,0);
  *(undefined8 *)(param_1 + _DAT_112fdf2c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a96a78; end: 103a96aab;  */

void FUN_103a96a78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a96aac; end: 103a96af3; -[SCIntentDonatingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a96aac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdf2b8);
  func_0x000107c61610(param_1 + _DAT_112fdf2c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdf2c8));
  return;
}



/* Entry: 103a96af4; end: 103a96b13;  */

void FUN_103a96af4(void)

{
  func_0x000107c61168(&PTR_PTR_112fdf310);
  return;
}



/* Entry: 103a96b14; end: 103a96b1f; -[SCNotificationCenterButtonProvidingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a96b14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf378;
  func_0x000107c61428(param_1 + _DAT_112fdf378,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a96b20; end: 103a96b2b; -[SCNotificationCenterButtonProvidingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a96b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf378;
  func_0x000107c61428(param_1 + _DAT_112fdf378,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a96b2c; end: 103a96b37; -[SCNotificationCenterButtonProvidingServicesSaberServiceProvider pushActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a96b2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf380;
  func_0x000107c61428(param_1 + _DAT_112fdf380,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a96b38; end: 103a96b7b;  */

void FUN_103a96b38(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103a96b7c; end: 103a96b87; -[SCNotificationCenterButtonProvidingServicesSaberServiceProvider setPushActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a96b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf380;
  func_0x000107c61428(param_1 + _DAT_112fdf380,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a96b88; end: 103a96bdb;  */

void FUN_103a96b88(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a96bdc; end: 103a96def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a96bdc(void)

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
    func_0x000107c4f6b8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a95450();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdf060);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdf388);
      *(long *)(unaff_x20 + _DAT_112fdf388) = lVar4;
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
                      "PushActiveUserSessionScopeGraphBridge/SCNotificationCenterButtonProvidingServicesSaberServiceProvider.swift"
                      ,0x6b,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a96d08);
  (*pcVar1)();
}



/* Entry: 103a96df0; end: 103a96e23; -[SCNotificationCenterButtonProvidingServicesSaberServiceProvider provide] */

void FUN_103a96df0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a96bdc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a96e24; end: 103a96e57; -[SCNotificationCenterButtonProvidingServicesSaberServiceProvider __safeProvide] */

void FUN_103a96e24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a96d08();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


