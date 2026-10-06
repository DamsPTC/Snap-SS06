/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039a53d0; end: 1039a5457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039a53d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a9ba18();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fbea20) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fbea28) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a5458);
  (*pcVar1)();
}



/* Entry: 1039a5458; end: 1039a54b7; -[_TtC35BmActiveUserSessionScopeGraphBridge50BmActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039a5458(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BmActiveUserSessionScopeGraphBridge.BmActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a5484);
  (*pcVar1)();
}



/* Entry: 1039a54b8; end: 1039a54ef; -[_TtC35BmActiveUserSessionScopeGraphBridge50BmActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a54d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a54d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a54b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbea20));
  return;
}



/* Entry: 1039a54f0; end: 1039a5517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a54f0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fbea28),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fbea20));
  return;
}



/* Entry: 1039a5518; end: 1039a55b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039a5518(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fbec80);
  *(undefined8 *)(unaff_x20 + _DAT_112fbea58) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbea60) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1039a55b4; end: 1039a5613; -[_TtC35BmActiveUserSessionScopeGraphBridge40SCBitmojiDeepLinkServicesSaberEntryPoint init] */

void FUN_1039a55b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BmActiveUserSessionScopeGraphBridge.SCBitmojiDeepLinkServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a55e0);
  (*pcVar1)();
}



/* Entry: 1039a5614; end: 1039a56a7; -[_TtC35BmActiveUserSessionScopeGraphBridge40SCBitmojiDeepLinkServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5614(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbea58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbea60));
  return;
}



/* Entry: 1039a56a8; end: 1039a56af;  */

undefined8 FUN_1039a56a8(void)

{
  return 0;
}



/* Entry: 1039a56b0; end: 1039a574b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039a56b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fbec88);
  *(undefined8 *)(unaff_x20 + _DAT_112fbea90) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbea98) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1039a574c; end: 1039a57ab; -[_TtC35BmActiveUserSessionScopeGraphBridge39SCBitmojiStickerServicesSaberEntryPoint init] */

void FUN_1039a574c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BmActiveUserSessionScopeGraphBridge.SCBitmojiStickerServicesSaberEntryPoint",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a5778);
  (*pcVar1)();
}



/* Entry: 1039a57ac; end: 1039a583f; -[_TtC35BmActiveUserSessionScopeGraphBridge39SCBitmojiStickerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a57ac(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fbea90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbea98));
  return;
}



/* Entry: 1039a5840; end: 1039a5847;  */

undefined8 FUN_1039a5840(void)

{
  return 0;
}



/* Entry: 1039a5848; end: 1039a58ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039a5848(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbec78);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039a58ac; end: 1039a58b3;  */

void FUN_1039a58ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039a58b4; end: 1039a5953;  */

void FUN_1039a58b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039a5954; end: 1039a5973;  */

void FUN_1039a5954(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039a5974; end: 1039a59d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039a5974(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbec90);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039a59d8; end: 1039a59df;  */

void FUN_1039a59d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039a59e0; end: 1039a5a7f;  */

void FUN_1039a59e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039a5a80; end: 1039a5a9f;  */

void FUN_1039a5a80(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039a5aa0; end: 1039a5b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbec78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbec80) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbec88) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbec90) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a5b2c; end: 1039a5b8b; -[_TtC35BmActiveUserSessionScopeGraphBridge43BmActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039a5b2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BmActiveUserSessionScopeGraphBridge.BmActiveUserSessionScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a5b58);
  (*pcVar1)();
}



/* Entry: 1039a5b8c; end: 1039a5c3f; -[_TtC35BmActiveUserSessionScopeGraphBridge43BmActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a5ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039a5bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a5bac) */
/* WARNING: Removing unreachable block (ram,0x0001039a5bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbec80));
  return;
}



/* Entry: 1039a5c40; end: 1039a5c77;  */

undefined1  [16] FUN_1039a5c40(void)

{
  return ZEXT816(0x1106b70a8);
}



/* Entry: 1039a5c78; end: 1039a5cbb; -[SCBmActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1039a5c78(undefined8 param_1)

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



/* Entry: 1039a5cbc; end: 1039a5cef;  */

void FUN_1039a5cbc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a5cf0; end: 1039a5d37; -[SCBmActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a5d1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a5d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5cf0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbece8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbecf0));
  return;
}



/* Entry: 1039a5d38; end: 1039a5d57;  */

void FUN_1039a5d38(void)

{
  func_0x000107c61168(&PTR_PTR_11290c660);
  return;
}



/* Entry: 1039a5d58; end: 1039a5d9b; -[SCSCBitmojiDeepLinkServicesSaberEntryPoint end] */

void FUN_1039a5d58(undefined8 param_1)

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



/* Entry: 1039a5d9c; end: 1039a5dcf;  */

void FUN_1039a5d9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a5dd0; end: 1039a5e27; -[SCSCBitmojiDeepLinkServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a5e0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a5e10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5dd0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbed28);
  func_0x000107c61610(param_1 + _DAT_112fbed30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbed38));
  return;
}



/* Entry: 1039a5e28; end: 1039a5e47;  */

void FUN_1039a5e28(void)

{
  func_0x000107c61168(&PTR_PTR_11290c728);
  return;
}



/* Entry: 1039a5e48; end: 1039a5e8b; -[SCSCBitmojiStickerServicesSaberEntryPoint end] */

void FUN_1039a5e48(undefined8 param_1)

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



/* Entry: 1039a5e8c; end: 1039a5ebf;  */

void FUN_1039a5e8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a5ec0; end: 1039a5f17; -[SCSCBitmojiStickerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a5efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a5f00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5ec0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbed70);
  func_0x000107c61610(param_1 + _DAT_112fbed78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbed80));
  return;
}



/* Entry: 1039a5f18; end: 1039a5f37;  */

void FUN_1039a5f18(void)

{
  func_0x000107c61168(&PTR_PTR_11290c7f8);
  return;
}



/* Entry: 1039a5f38; end: 1039a5f43; -[SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5f38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbedb8;
  func_0x000107c61428(param_1 + _DAT_112fbedb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a5f44; end: 1039a5f4f; -[SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbedb8;
  func_0x000107c61428(param_1 + _DAT_112fbedb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a5f50; end: 1039a5f5b; -[SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider bmActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5f50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbedc0;
  func_0x000107c61428(param_1 + _DAT_112fbedc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a5f5c; end: 1039a5f9f;  */

void FUN_1039a5f5c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039a5fa0; end: 1039a5fab; -[SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider setBmActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a5fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbedc0;
  func_0x000107c61428(param_1 + _DAT_112fbedc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a5fac; end: 1039a5fff;  */

void FUN_1039a5fac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a6000; end: 1039a6213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039a6000(void)

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
    func_0x000107c3eb68();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039a58d8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbec78);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbedc8);
      *(long *)(unaff_x20 + _DAT_112fbedc8) = lVar4;
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
                      "BmActiveUserSessionScopeGraphBridge/SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider.swift"
                      ,0x68,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a612c);
  (*pcVar1)();
}



/* Entry: 1039a6214; end: 1039a6247; -[SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider provide] */

void FUN_1039a6214(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039a6000();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a6248; end: 1039a627b; -[SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider __safeProvide] */

void FUN_1039a6248(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039a612c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a627c; end: 1039a62bf; -[SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider end] */

void FUN_1039a627c(undefined8 param_1)

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



/* Entry: 1039a62c0; end: 1039a6457;  */

void FUN_1039a62c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e7ee00)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f181200,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BmActiveUserSessionScopeGraphBridge/SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider.swift"
                            ,0x68,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a6458);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52db4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039a6458; end: 1039a6503; -[SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039a6458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039a62c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039a6504; end: 1039a6577; -[SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a6504(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbedb8,0);
  func_0x000107c61614(param_1 + _DAT_112fbedc0,0);
  *(undefined8 *)(param_1 + _DAT_112fbedc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a6578; end: 1039a65ab;  */

void FUN_1039a6578(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a65ac; end: 1039a65f3; -[SCSCBitmojiAvatarBuilderPresentingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a65ac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbedb8);
  func_0x000107c61610(param_1 + _DAT_112fbedc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbedc8));
  return;
}



/* Entry: 1039a65f4; end: 1039a6613;  */

void FUN_1039a65f4(void)

{
  func_0x000107c61168(&PTR_PTR_112fbee10);
  return;
}



/* Entry: 1039a6614; end: 1039a661f; -[SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a6614(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbee78;
  func_0x000107c61428(param_1 + _DAT_112fbee78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a6620; end: 1039a662b; -[SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a6620(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbee78;
  func_0x000107c61428(param_1 + _DAT_112fbee78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a662c; end: 1039a6637; -[SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider bmActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a662c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbee80;
  func_0x000107c61428(param_1 + _DAT_112fbee80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039a6638; end: 1039a667b;  */

void FUN_1039a6638(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039a667c; end: 1039a6687; -[SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider setBmActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a667c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbee80;
  func_0x000107c61428(param_1 + _DAT_112fbee80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a6688; end: 1039a66db;  */

void FUN_1039a6688(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039a66dc; end: 1039a68ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039a66dc(void)

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
    func_0x000107c3eb68();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039a5a04();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fbec90);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fbee88);
      *(long *)(unaff_x20 + _DAT_112fbee88) = lVar4;
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
                      "BmActiveUserSessionScopeGraphBridge/SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider.swift"
                      ,0x66,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a6808);
  (*pcVar1)();
}



/* Entry: 1039a68f0; end: 1039a6923; -[SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider provide] */

void FUN_1039a68f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039a66dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a6924; end: 1039a6957; -[SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider __safeProvide] */

void FUN_1039a6924(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039a6808();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039a6958; end: 1039a699b; -[SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider end] */

void FUN_1039a6958(undefined8 param_1)

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



/* Entry: 1039a699c; end: 1039a6b33;  */

void FUN_1039a699c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e7ee00)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f181200,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BmActiveUserSessionScopeGraphBridge/SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider.swift"
                            ,0x66,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a6b34);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52db4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039a6b34; end: 1039a6bdf; -[SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039a6b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039a699c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039a6be0; end: 1039a6c53; -[SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a6be0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fbee78,0);
  func_0x000107c61614(param_1 + _DAT_112fbee80,0);
  *(undefined8 *)(param_1 + _DAT_112fbee88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a6c54; end: 1039a6c87;  */

void FUN_1039a6c54(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a6c88; end: 1039a6ccf; -[SCSCComposerBitmojiAvatarBuilderServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a6c88(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbee78);
  func_0x000107c61610(param_1 + _DAT_112fbee80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbee88));
  return;
}



/* Entry: 1039a6cd0; end: 1039a6cef;  */

void FUN_1039a6cd0(void)

{
  func_0x000107c61168(&PTR_PTR_112fbeed0);
  return;
}



/* Entry: 1039a6cf0; end: 1039a6d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039a6cf0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a9c060();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fbef38) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fbef40) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a6d78);
  (*pcVar1)();
}



/* Entry: 1039a6d78; end: 1039a6dd7; -[_TtC38CameoActiveUserSessionScopeGraphBridge53CameoActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039a6d78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameoActiveUserSessionScopeGraphBridge.CameoActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a6da4);
  (*pcVar1)();
}



/* Entry: 1039a6dd8; end: 1039a6e0f; -[_TtC38CameoActiveUserSessionScopeGraphBridge53CameoActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a6df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a6df8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a6dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbef38));
  return;
}



/* Entry: 1039a6e10; end: 1039a6e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a6e10(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fbef40),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fbef38));
  return;
}



/* Entry: 1039a6e38; end: 1039a6e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039a6e38(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbf390);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039a6e9c; end: 1039a6ea3;  */

void FUN_1039a6e9c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039a6ea4; end: 1039a6f43;  */

void FUN_1039a6ea4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039a6f44; end: 1039a6f63;  */

void FUN_1039a6f44(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039a6f64; end: 1039a6fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039a6f64(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbf398);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039a6fc8; end: 1039a6fcf;  */

void FUN_1039a6fc8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039a6fd0; end: 1039a706f;  */

void FUN_1039a6fd0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039a7070; end: 1039a708f;  */

void FUN_1039a7070(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039a7090; end: 1039a70f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039a7090(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbf3a0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039a70f4; end: 1039a70fb;  */

void FUN_1039a70f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039a70fc; end: 1039a719b;  */

void FUN_1039a70fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039a719c; end: 1039a71bb;  */

void FUN_1039a719c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039a71bc; end: 1039a721f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039a71bc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbf3a8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039a7220; end: 1039a7227;  */

void FUN_1039a7220(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039a7228; end: 1039a72c7;  */

void FUN_1039a7228(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039a72c8; end: 1039a72e7;  */

void FUN_1039a72c8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039a72e8; end: 1039a734b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039a72e8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fbf3b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039a734c; end: 1039a7353;  */

void FUN_1039a734c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039a7354; end: 1039a73f3;  */

void FUN_1039a7354(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039a73f4; end: 1039a7413;  */

void FUN_1039a73f4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039a7414; end: 1039a74af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a7414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbf390) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbf398) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbf3a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fbf3a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fbf3b0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039a74b0; end: 1039a750f; -[_TtC38CameoActiveUserSessionScopeGraphBridge46CameoActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039a74b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameoActiveUserSessionScopeGraphBridge.CameoActiveUserSessionScopeGraphBridgeServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039a74dc);
  (*pcVar1)();
}



/* Entry: 1039a7510; end: 1039a75d3; -[_TtC38CameoActiveUserSessionScopeGraphBridge46CameoActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a752c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039a754c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a7530) */
/* WARNING: Removing unreachable block (ram,0x0001039a7550) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a7510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbf390));
  return;
}



/* Entry: 1039a75d4; end: 1039a760b;  */

undefined1  [16] FUN_1039a75d4(void)

{
  return ZEXT816(0x1106b72c0);
}



/* Entry: 1039a760c; end: 1039a764f; -[SCCameoActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1039a760c(undefined8 param_1)

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



/* Entry: 1039a7650; end: 1039a7683;  */

void FUN_1039a7650(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039a7684; end: 1039a76cb; -[SCCameoActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039a76b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a76b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a7684(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fbf408);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbf410));
  return;
}



/* Entry: 1039a76cc; end: 1039a76eb;  */

void FUN_1039a76cc(void)

{
  func_0x000107c61168(&PTR_PTR_11290cb00);
  return;
}


