/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10409af78; end: 10409b033; -[SCFideliusClientInitInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409af78(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  FUN_10409a93c(auStack_a8,*(undefined8 *)(param_1 + _DAT_11305b228));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11305b230);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(uStack_a0);
  func_0x0001000b44c0(uStack_98,uStack_90);
  func_0x0001000b44c0(uStack_88,uStack_80);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uStack_70);
  _swift_bridgeObjectRelease(uStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409b034; end: 10409b0af; -[SCFideliusClientInitInfo init] */

void FUN_10409b034(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCFideliusClientInitServices/SCFideliusClientInitInfoWrapper.swift",0x42,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409b07c);
  (*pcVar1)();
}



/* Entry: 10409b0b0; end: 10409b0e7; -[SCFideliusClientInitInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409b0b0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305b228));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11305b230));
  return;
}



/* Entry: 10409b0e8; end: 10409b2a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409b0e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  uVar6 = param_1[8];
  uStack_a8 = param_1[10];
  uStack_b0 = param_1[9];
  lVar3 = 0;
  FUN_10409aa28();
  lVar4 = lVar3;
  _objc_allocWithZone();
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  puVar1 = (undefined8 *)(lVar4 + _DAT_11305b1d0);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11305b1d8);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  puVar1 = (undefined8 *)(lVar4 + _DAT_11305b1e0);
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  uVar7 = param_1[6];
  puVar1 = (undefined8 *)(lVar4 + _DAT_11305b1e8);
  puVar1[1] = param_1[7];
  *puVar1 = uVar7;
  *(undefined8 *)(lVar4 + _DAT_11305b1f0) = uVar6;
  uVar6 = param_1[9];
  puVar1 = (undefined8 *)(lVar4 + _DAT_11305b1f8);
  puVar1[1] = param_1[10];
  *puVar1 = uVar6;
  FUN_10409b2f8(&uStack_70,auStack_c0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10409b2f8(&uStack_80,auStack_c0,0x112d56fe0,&UNK_10d91dda0);
  FUN_10409b2f8(&uStack_90,auStack_c0,0x112d56fe0,&UNK_10d91dda0);
  FUN_10409b2f8(&uStack_a0,auStack_c0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10409b2f8(&uStack_b0,auStack_c0,0x112d35ff8,&UNK_10d900cd0);
  plVar5 = &lStack_d0;
  lStack_d0 = lVar4;
  lStack_c8 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_11305b228) = plVar5;
  *(undefined8 *)(unaff_x20 + _DAT_11305b230) = param_1[0xb];
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain();
  _objc_msgSendSuper2(&stack0xffffffffffffff20,puVar2);
  return;
}



/* Entry: 10409b2a4; end: 10409b2d7;  */

undefined8 FUN_10409b2a4(undefined8 param_1)

{
  (*(code *)(undefined *)0x104098f00)();
  return param_1;
}



/* Entry: 10409b2d8; end: 10409b2f7;  */

void FUN_10409b2d8(void)

{
  _objc_opt_self(&PTR_PTR_1129899c0);
  return;
}



/* Entry: 10409b2f8; end: 10409b33f;  */

undefined8 FUN_10409b2f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10409b340; end: 10409b3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10409b340(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a23868();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11305b260) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11305b268) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409b3c8);
  (*pcVar1)();
}



/* Entry: 10409b3c8; end: 10409b427; -[_TtC26PushSystemScopeGraphBridge41PushSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_10409b3c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PushSystemScopeGraphBridge.PushSystemScopeGraphBridgeSaberEntryPoint",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409b3f4);
  (*pcVar1)();
}



/* Entry: 10409b428; end: 10409b45f; -[_TtC26PushSystemScopeGraphBridge41PushSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409b428(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305b260));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b268));
  return;
}



/* Entry: 10409b460; end: 10409b487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409b460(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11305b268),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11305b260));
  return;
}



/* Entry: 10409b488; end: 10409b523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10409b488(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11305b5c8);
  *(undefined8 *)(unaff_x20 + _DAT_11305b298) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11305b2a0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 10409b524; end: 10409b583; -[_TtC26PushSystemScopeGraphBridge44SCNotificationDisplayServicesSaberEntryPoint init] */

void FUN_10409b524(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PushSystemScopeGraphBridge.SCNotificationDisplayServicesSaberEntryPoint",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409b550);
  (*pcVar1)();
}



/* Entry: 10409b584; end: 10409b617; -[_TtC26PushSystemScopeGraphBridge44SCNotificationDisplayServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409b584(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305b298));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b2a0));
  return;
}



/* Entry: 10409b618; end: 10409b61f;  */

undefined8 FUN_10409b618(void)

{
  return 0;
}



/* Entry: 10409b620; end: 10409b6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10409b620(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11305b5d0);
  *(undefined8 *)(unaff_x20 + _DAT_11305b2d0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11305b2d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 10409b6bc; end: 10409b71b; -[_TtC26PushSystemScopeGraphBridge47SCNotificationPermissionServicesSaberEntryPoint init] */

void FUN_10409b6bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PushSystemScopeGraphBridge.SCNotificationPermissionServicesSaberEntryPoint",0x4a,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409b6e8);
  (*pcVar1)();
}



/* Entry: 10409b71c; end: 10409b7af; -[_TtC26PushSystemScopeGraphBridge47SCNotificationPermissionServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409b71c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305b2d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b2d8));
  return;
}



/* Entry: 10409b7b0; end: 10409b7b7;  */

undefined8 FUN_10409b7b0(void)

{
  return 0;
}



/* Entry: 10409b7b8; end: 10409b853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10409b7b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11305b5e0);
  *(undefined8 *)(unaff_x20 + _DAT_11305b308) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11305b310) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 10409b854; end: 10409b8b3; -[_TtC26PushSystemScopeGraphBridge38SCNotificationsServicesSaberEntryPoint init] */

void FUN_10409b854(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PushSystemScopeGraphBridge.SCNotificationsServicesSaberEntryPoint",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409b880);
  (*pcVar1)();
}



/* Entry: 10409b8b4; end: 10409b947; -[_TtC26PushSystemScopeGraphBridge38SCNotificationsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409b8b4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305b308));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b310));
  return;
}



/* Entry: 10409b948; end: 10409b94f;  */

undefined8 FUN_10409b948(void)

{
  return 0;
}



/* Entry: 10409b950; end: 10409b9b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10409b950(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305b5c0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10409b9b4; end: 10409b9bb;  */

void FUN_10409b9b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10409b9bc; end: 10409ba5b;  */

void FUN_10409b9bc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10409ba5c; end: 10409ba7b;  */

void FUN_10409ba5c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10409ba7c; end: 10409badf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10409ba7c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305b5d8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10409bae0; end: 10409bae7;  */

void FUN_10409bae0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10409bae8; end: 10409bb87;  */

void FUN_10409bae8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10409bb88; end: 10409bba7;  */

void FUN_10409bb88(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10409bba8; end: 10409bc0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10409bba8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305b5e8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10409bc0c; end: 10409bc13;  */

void FUN_10409bc0c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10409bc14; end: 10409bcb3;  */

void FUN_10409bc14(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10409bcb4; end: 10409bcd3;  */

void FUN_10409bcb4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10409bcd4; end: 10409bd87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409bcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305b5c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11305b5c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11305b5d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11305b5d8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11305b5e0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11305b5e8) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409bd88; end: 10409bde7; -[_TtC26PushSystemScopeGraphBridge34PushSystemScopeGraphBridgeServices init] */

void FUN_10409bd88(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PushSystemScopeGraphBridge.PushSystemScopeGraphBridgeServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409bdb4);
  (*pcVar1)();
}



/* Entry: 10409bde8; end: 10409bebb; -[_TtC26PushSystemScopeGraphBridge34PushSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409bde8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305b5c8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305b5d0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305b5e0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305b5c0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305b5d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305b5e8));
  return;
}



/* Entry: 10409bebc; end: 10409bef3;  */

undefined1  [16] FUN_10409bebc(void)

{
  return ZEXT816(0x1107409c0);
}



/* Entry: 10409bef4; end: 10409bf37; -[SCPushSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_10409bef4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409bf38; end: 10409bf6b;  */

void FUN_10409bf38(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409bf6c; end: 10409bfb3; -[SCPushSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409bf6c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b640);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305b648));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b650));
  return;
}



/* Entry: 10409bfb4; end: 10409bfd3;  */

void FUN_10409bfb4(void)

{
  _objc_opt_self(&PTR_PTR_112989ea0);
  return;
}



/* Entry: 10409bfd4; end: 10409c017; -[SCSCNotificationDisplayServicesSaberEntryPoint end] */

void FUN_10409bfd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409c018; end: 10409c04b;  */

void FUN_10409c018(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409c04c; end: 10409c0a3; -[SCSCNotificationDisplayServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c04c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b680);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b688);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305b690));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b698));
  return;
}



/* Entry: 10409c0a4; end: 10409c0c3;  */

void FUN_10409c0a4(void)

{
  _objc_opt_self(&PTR_PTR_112989f68);
  return;
}



/* Entry: 10409c0c4; end: 10409c107; -[SCSCNotificationPermissionServicesSaberEntryPoint end] */

void FUN_10409c0c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409c108; end: 10409c13b;  */

void FUN_10409c108(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409c13c; end: 10409c193; -[SCSCNotificationPermissionServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c13c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b6c8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b6d0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305b6d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b6e0));
  return;
}



/* Entry: 10409c194; end: 10409c1b3;  */

void FUN_10409c194(void)

{
  _objc_opt_self(&PTR_PTR_11298a038);
  return;
}



/* Entry: 10409c1b4; end: 10409c1f7; -[SCSCNotificationsServicesSaberEntryPoint end] */

void FUN_10409c1b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409c1f8; end: 10409c22b;  */

void FUN_10409c1f8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409c22c; end: 10409c283; -[SCSCNotificationsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c22c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b710);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b718);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305b720));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b728));
  return;
}



/* Entry: 10409c284; end: 10409c2a3;  */

void FUN_10409c284(void)

{
  _objc_opt_self(&PTR_PTR_11298a108);
  return;
}



/* Entry: 10409c2a4; end: 10409c2af; -[SCSCLocalNotificationSchedulingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c2a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b758;
  _swift_beginAccess(param_1 + _DAT_11305b758,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409c2b0; end: 10409c2bb; -[SCSCLocalNotificationSchedulingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c2b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b758;
  _swift_beginAccess(param_1 + _DAT_11305b758,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409c2bc; end: 10409c2c7; -[SCSCLocalNotificationSchedulingServicesSaberServiceProvider pushSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c2bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b760;
  _swift_beginAccess(param_1 + _DAT_11305b760,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409c2c8; end: 10409c30b;  */

void FUN_10409c2c8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409c30c; end: 10409c317; -[SCSCLocalNotificationSchedulingServicesSaberServiceProvider setPushSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c30c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b760;
  _swift_beginAccess(param_1 + _DAT_11305b760,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409c318; end: 10409c36b;  */

void FUN_10409c318(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409c36c; end: 10409c57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10409c36c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f6d0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010409b9e0();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305b5c0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305b768);
      *(long *)(unaff_x20 + _DAT_11305b768) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "PushSystemScopeGraphBridge/SCSCLocalNotificationSchedulingServicesSaberServiceProvider.swift"
             ,0x5c,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409c498);
  (*pcVar1)();
}



/* Entry: 10409c580; end: 10409c5b3; -[SCSCLocalNotificationSchedulingServicesSaberServiceProvider provide] */

void FUN_10409c580(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10409c36c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409c5b4; end: 10409c5e7; -[SCSCLocalNotificationSchedulingServicesSaberServiceProvider __safeProvide] */

void FUN_10409c5b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010409c498();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409c5e8; end: 10409c62b; -[SCSCLocalNotificationSchedulingServicesSaberServiceProvider end] */

void FUN_10409c5e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409c62c; end: 10409c7c3;  */

void FUN_10409c62c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e155b0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1eaa50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "PushSystemScopeGraphBridge/SCSCLocalNotificationSchedulingServicesSaberServiceProvider.swift"
                   ,0x5c,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10409c7c4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c57a50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10409c7c4; end: 10409c86f; -[SCSCLocalNotificationSchedulingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10409c7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_10409c62c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10409c870; end: 10409c8e3; -[SCSCLocalNotificationSchedulingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c870(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305b758,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305b760,0);
  *(undefined8 *)(param_1 + _DAT_11305b768) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409c8e4; end: 10409c917;  */

void FUN_10409c8e4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409c918; end: 10409c95f; -[SCSCLocalNotificationSchedulingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c918(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b758);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b760);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305b768));
  return;
}



/* Entry: 10409c960; end: 10409c97f;  */

void FUN_10409c960(void)

{
  _objc_opt_self(&PTR_PTR_11305b7b0);
  return;
}



/* Entry: 10409c980; end: 10409c98b; -[SCSCNotificationReportingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c980(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b818;
  _swift_beginAccess(param_1 + _DAT_11305b818,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409c98c; end: 10409c997; -[SCSCNotificationReportingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b818;
  _swift_beginAccess(param_1 + _DAT_11305b818,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409c998; end: 10409c9a3; -[SCSCNotificationReportingServicesSaberServiceProvider pushSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c998(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b820;
  _swift_beginAccess(param_1 + _DAT_11305b820,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409c9a4; end: 10409c9e7;  */

void FUN_10409c9a4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409c9e8; end: 10409c9f3; -[SCSCNotificationReportingServicesSaberServiceProvider setPushSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409c9e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b820;
  _swift_beginAccess(param_1 + _DAT_11305b820,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409c9f4; end: 10409ca47;  */

void FUN_10409c9f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409ca48; end: 10409cc5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10409ca48(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f6d0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010409bb0c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305b5d8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305b828);
      *(long *)(unaff_x20 + _DAT_11305b828) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "PushSystemScopeGraphBridge/SCSCNotificationReportingServicesSaberServiceProvider.swift"
             ,0x56,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409cb74);
  (*pcVar1)();
}



/* Entry: 10409cc5c; end: 10409cc8f; -[SCSCNotificationReportingServicesSaberServiceProvider provide] */

void FUN_10409cc5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10409ca48();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409cc90; end: 10409ccc3; -[SCSCNotificationReportingServicesSaberServiceProvider __safeProvide] */

void FUN_10409cc90(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010409cb74();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409ccc4; end: 10409cd07; -[SCSCNotificationReportingServicesSaberServiceProvider end] */

void FUN_10409ccc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409cd08; end: 10409ce9f;  */

void FUN_10409cd08(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e155b0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1eaa50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "PushSystemScopeGraphBridge/SCSCNotificationReportingServicesSaberServiceProvider.swift"
                   ,0x56,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10409cea0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c57a50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10409cea0; end: 10409cf4b; -[SCSCNotificationReportingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10409cea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_10409cd08(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10409cf4c; end: 10409cfbf; -[SCSCNotificationReportingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409cf4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305b818,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305b820,0);
  *(undefined8 *)(param_1 + _DAT_11305b828) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409cfc0; end: 10409cff3;  */

void FUN_10409cfc0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409cff4; end: 10409d03b; -[SCSCNotificationReportingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409cff4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b818);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b820);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305b828));
  return;
}



/* Entry: 10409d03c; end: 10409d05b;  */

void FUN_10409d03c(void)

{
  _objc_opt_self(&PTR_PTR_11305b870);
  return;
}



/* Entry: 10409d05c; end: 10409d067; -[SCSIGNotificationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409d05c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b8d8;
  _swift_beginAccess(param_1 + _DAT_11305b8d8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409d068; end: 10409d073; -[SCSIGNotificationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409d068(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b8d8;
  _swift_beginAccess(param_1 + _DAT_11305b8d8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409d074; end: 10409d07f; -[SCSIGNotificationServicesSaberServiceProvider pushSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409d074(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b8e0;
  _swift_beginAccess(param_1 + _DAT_11305b8e0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409d080; end: 10409d0c3;  */

void FUN_10409d080(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409d0c4; end: 10409d0cf; -[SCSIGNotificationServicesSaberServiceProvider setPushSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409d0c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b8e0;
  _swift_beginAccess(param_1 + _DAT_11305b8e0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409d0d0; end: 10409d123;  */

void FUN_10409d0d0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409d124; end: 10409d337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10409d124(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f6d0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010409bc38();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305b5e8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305b8e8);
      *(long *)(unaff_x20 + _DAT_11305b8e8) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "PushSystemScopeGraphBridge/SCSIGNotificationServicesSaberServiceProvider.swift",0x4e,2
             ,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409d250);
  (*pcVar1)();
}



/* Entry: 10409d338; end: 10409d36b; -[SCSIGNotificationServicesSaberServiceProvider provide] */

void FUN_10409d338(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10409d124();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409d36c; end: 10409d39f; -[SCSIGNotificationServicesSaberServiceProvider __safeProvide] */

void FUN_10409d36c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010409d250();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409d3a0; end: 10409d3e3; -[SCSIGNotificationServicesSaberServiceProvider end] */

void FUN_10409d3a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409d3e4; end: 10409d57b;  */

void FUN_10409d3e4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e155b0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1eaa50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "PushSystemScopeGraphBridge/SCSIGNotificationServicesSaberServiceProvider.swift",
                   0x4e,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10409d57c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c57a50();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10409d57c; end: 10409d627; -[SCSIGNotificationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10409d57c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_10409d3e4(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10409d628; end: 10409d69b; -[SCSIGNotificationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409d628(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305b8d8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305b8e0,0);
  *(undefined8 *)(param_1 + _DAT_11305b8e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}


