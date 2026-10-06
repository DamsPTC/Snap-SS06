/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103942a74; end: 103942aab;  */

void FUN_103942a74(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103942aac; end: 103942abf;  */

void FUN_103942aac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103942a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103942ac0; end: 103942acf; -[SCShortcutsCarouselConfiguration enableV2UI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103942ac0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb4bc0);
}



/* Entry: 103942ad0; end: 103942adf; -[SCShortcutsCarouselConfiguration enableAllChatsShortcut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103942ad0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb4bc8);
}



/* Entry: 103942ae0; end: 103942aef; -[SCShortcutsCarouselConfiguration enableAllChatsWhenSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103942ae0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb4bd0);
}



/* Entry: 103942af0; end: 103942aff; -[SCShortcutsCarouselConfiguration enableDynamicTypeDownscaling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103942af0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb4bd8);
}



/* Entry: 103942b00; end: 103942b0f; -[SCShortcutsCarouselConfiguration decreaseShortcutPadding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103942b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb4be0));
  return;
}



/* Entry: 103942b10; end: 103942b1f; -[SCShortcutsCarouselConfiguration hideDivider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103942b10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb4be8);
}



/* Entry: 103942b20; end: 103942b2f; -[SCShortcutsCarouselConfiguration disableNewUISubheader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103942b20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb4bf0);
}



/* Entry: 103942b30; end: 103942b3f; -[SCShortcutsCarouselConfiguration forceLoadNewUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103942b30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb4bf8);
}



/* Entry: 103942b40; end: 103942b4f; -[SCShortcutsCarouselConfiguration enableCreateTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103942b40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb4c00);
}



/* Entry: 103942b50; end: 103942b5f; -[SCShortcutsCarouselConfiguration enableBadging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103942b50(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb4c08);
}



/* Entry: 103942b60; end: 103942d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103942b60(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112fb4bc0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112fb4bc8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112fb4bd0) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112fb4bd8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4be0) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112fb4be8) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112fb4bf0) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_112fb4bf8) = param_8;
  *(undefined1 *)(unaff_x20 + _DAT_112fb4c00) = (undefined1)param_9;
  *(undefined1 *)(unaff_x20 + _DAT_112fb4c08) = param_9._1_1_;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103942d60; end: 103942e03; -[SCShortcutsCarouselConfiguration initWithEnableV2UI:enableAllChatsShortcut:enableAllChatsWhenSelected:enableDynamicTypeDownscaling:decreaseShortcutPadding:hideDivider:disableNewUISubheader:forceLoadNewUI:enableCreateTooltip:enableBadging:] */

void FUN_103942d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  func_0x000107c61174(param_7);
  func_0x000103942c60(param_3,param_4,param_5,param_6,param_7,param_8,(undefined1)param_9,
                      param_9._1_1_);
  return;
}



/* Entry: 103942e04; end: 103942f3f;  */

void FUN_103942e04(uint param_1,undefined8 param_2,ulong param_3)

{
  func_0x000107c610f8();
  func_0x000103942e54(param_1 & 0x1010101,param_2,param_3 & 0x101010101);
  return;
}



/* Entry: 103942f40; end: 103942f43; -[SCShortcutsCarouselConfiguration copyWithZone:] */

void FUN_103942f40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103942f44; end: 103942f6b; -[SCShortcutsCarouselConfiguration description] */

void FUN_103942f44(undefined8 param_1,undefined8 param_2)

{
  FUN_103943048();
  func_0x000107c61170(param_2);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103942f6c; end: 103942fbb;  */

uint FUN_103942f6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103943048();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 0x1010101;
}



/* Entry: 103942fbc; end: 103943037; -[SCShortcutsCarouselConfiguration init] */

void FUN_103942fbc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "ShortcutsCarouselScope/ShortcutsCarouselConfigurationWrapper.swift",0x42,2,
                      0x46,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103943004);
  (*pcVar1)();
}



/* Entry: 103943038; end: 103943047; -[SCShortcutsCarouselConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103943038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb4be0));
  return;
}



/* Entry: 103943048; end: 103943157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103943048(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + _DAT_112fb4bc0);
  uVar3 = 0x100;
  if (*(char *)(param_1 + _DAT_112fb4bc8) == '\0') {
    uVar3 = 0;
  }
  uVar2 = 0x10000;
  if (*(char *)(param_1 + _DAT_112fb4bd0) == '\0') {
    uVar2 = 0;
  }
  uVar4 = 0x1000000;
  if (*(char *)(param_1 + _DAT_112fb4bd8) == '\0') {
    uVar4 = 0;
  }
  func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_112fb4be0));
  return uVar3 | bVar1 | uVar2 | uVar4;
}



/* Entry: 103943158; end: 103943177;  */

void FUN_103943158(void)

{
  func_0x000107c61168(&PTR_PTR_1129046f0);
  return;
}



/* Entry: 103943178; end: 1039431e3;  */

void FUN_103943178(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106b0190;
  if (lRam0000000112fb4c38 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112fb4c38 = param_1;
  }
  return;
}



/* Entry: 1039431e4; end: 10394322f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039431e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb4c50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103943230; end: 1039432f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103943230(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  func_0x000107c61614(auStack_68,0);
  auStack_98[0] = param_1;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  func_0x000107c61604(auStack_68,param_7);
  func_0x000107c61174(param_2);
  func_0x00010008a7c8(&uStack_a0,auStack_98);
  func_0x000100083b20(&uStack_a8);
  func_0x000107c61574(uStack_a0);
  func_0x0001029d76cc(auStack_98);
  return uStack_a8;
}



/* Entry: 1039432f8; end: 1039433a7; -[_TtC25ShareUpsellPresenterScope33ShareUpsellPresenterScopeServices buildWithUpsellType:shareSheetConfiguration:shareSource:shareUIType:autoDismissDelayMS:showFriendSection:delegate:] */

void FUN_1039432f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_9);
  func_0x000107c61174(param_1);
  FUN_103943230(param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_9);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1039433a8; end: 103943407; -[_TtC25ShareUpsellPresenterScope33ShareUpsellPresenterScopeServices init] */

void FUN_1039433a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShareUpsellPresenterScope.ShareUpsellPresenterScopeServices",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039433d4);
  (*pcVar1)();
}



/* Entry: 103943408; end: 1039434b7;  */

long FUN_103943408(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1039434b8; end: 10394352f;  */

undefined4 * FUN_1039434b8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  func_0x000107c61608(param_1 + 0xc,param_2 + 0xc);
  return param_1;
}



/* Entry: 103943530; end: 1039435e3;  */

undefined4 * FUN_103943530(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  func_0x000107c61620(param_1 + 0xc,param_2 + 0xc);
  return param_1;
}



/* Entry: 1039435e4; end: 103943687;  */

int FUN_1039435e4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103943688; end: 103943697; -[_TtC25ShareUpsellPresenterScope33ShareUpsellPresenterScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103943688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb4c50));
  return;
}



/* Entry: 103943698; end: 10394371f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103943698(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100addc74();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fb4c80) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fb4c88) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103943720);
  (*pcVar1)();
}



/* Entry: 103943720; end: 10394377f; -[_TtC33ShuUserNavigationScopeGraphBridge48ShuUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_103943720(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShuUserNavigationScopeGraphBridge.ShuUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10394374c);
  (*pcVar1)();
}



/* Entry: 103943780; end: 1039437b7; -[_TtC33ShuUserNavigationScopeGraphBridge48ShuUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010394379c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039437a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103943780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb4c80));
  return;
}



/* Entry: 1039437b8; end: 1039437df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039437b8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fb4c88),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fb4c80));
  return;
}



/* Entry: 1039437e0; end: 10394387b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039437e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fb50e8);
  *(undefined8 *)(unaff_x20 + _DAT_112fb4cb8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4cc0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10394387c; end: 1039438db; -[_TtC33ShuUserNavigationScopeGraphBridge51LegacyContainerViewControllerServiceSaberEntryPoint init] */

void FUN_10394387c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShuUserNavigationScopeGraphBridge.LegacyContainerViewControllerServiceSaberEntryPoint"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039438a8);
  (*pcVar1)();
}



/* Entry: 1039438dc; end: 10394396f; -[_TtC33ShuUserNavigationScopeGraphBridge51LegacyContainerViewControllerServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039438dc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fb4cb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb4cc0));
  return;
}



/* Entry: 103943970; end: 103943977;  */

undefined8 FUN_103943970(void)

{
  return 0;
}



/* Entry: 103943978; end: 103943a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103943978(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fb50f0);
  *(undefined8 *)(unaff_x20 + _DAT_112fb4cf0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4cf8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103943a14; end: 103943a73; -[_TtC33ShuUserNavigationScopeGraphBridge48LegacyNavigationControllerServiceSaberEntryPoint init] */

void FUN_103943a14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShuUserNavigationScopeGraphBridge.LegacyNavigationControllerServiceSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103943a40);
  (*pcVar1)();
}



/* Entry: 103943a74; end: 103943b07; -[_TtC33ShuUserNavigationScopeGraphBridge48LegacyNavigationControllerServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103943a74(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fb4cf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb4cf8));
  return;
}



/* Entry: 103943b08; end: 103943b0f;  */

undefined8 FUN_103943b08(void)

{
  return 0;
}



/* Entry: 103943b10; end: 103943bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103943b10(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fb5108);
  *(undefined8 *)(unaff_x20 + _DAT_112fb4d28) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4d30) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103943bac; end: 103943c0b; -[_TtC33ShuUserNavigationScopeGraphBridge42SCMainTabNavigationServicesSaberEntryPoint init] */

void FUN_103943bac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShuUserNavigationScopeGraphBridge.SCMainTabNavigationServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103943bd8);
  (*pcVar1)();
}



/* Entry: 103943c0c; end: 103943c9f; -[_TtC33ShuUserNavigationScopeGraphBridge42SCMainTabNavigationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103943c0c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fb4d28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb4d30));
  return;
}



/* Entry: 103943ca0; end: 103943ca7;  */

undefined8 FUN_103943ca0(void)

{
  return 0;
}



/* Entry: 103943ca8; end: 103943d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103943ca8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fb5118);
  *(undefined8 *)(unaff_x20 + _DAT_112fb4d60) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fb4d68) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103943d44; end: 103943da3; -[_TtC33ShuUserNavigationScopeGraphBridge35SCNavigationServicesSaberEntryPoint init] */

void FUN_103943d44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShuUserNavigationScopeGraphBridge.SCNavigationServicesSaberEntryPoint",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103943d70);
  (*pcVar1)();
}



/* Entry: 103943da4; end: 103943e37; -[_TtC33ShuUserNavigationScopeGraphBridge35SCNavigationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103943da4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fb4d60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb4d68));
  return;
}



/* Entry: 103943e38; end: 103943e3f;  */

undefined8 FUN_103943e38(void)

{
  return 0;
}



/* Entry: 103943e40; end: 103943ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103943e40(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb50f8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103943ea4; end: 103943eab;  */

void FUN_103943ea4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103943eac; end: 103943f4b;  */

void FUN_103943eac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103943f4c; end: 103943f6b;  */

void FUN_103943f4c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103943f6c; end: 103943fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103943f6c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb5100);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103943fd0; end: 103943fd7;  */

void FUN_103943fd0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103943fd8; end: 103944077;  */

void FUN_103943fd8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103944078; end: 103944097;  */

void FUN_103944078(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103944098; end: 1039440fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103944098(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb5110);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039440fc; end: 103944103;  */

void FUN_1039440fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103944104; end: 1039441a3;  */

void FUN_103944104(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039441a4; end: 1039441c3;  */

void FUN_1039441a4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039441c4; end: 103944227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039441c4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb5120);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103944228; end: 10394422f;  */

void FUN_103944228(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103944230; end: 1039442cf;  */

void FUN_103944230(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039442d0; end: 1039442ef;  */

void FUN_1039442d0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039442f0; end: 1039443cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039442f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb50e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb50f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fb50f8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fb5100) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fb5108) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fb5110) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fb5118) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fb5120) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039443cc; end: 10394442b; -[_TtC33ShuUserNavigationScopeGraphBridge41ShuUserNavigationScopeGraphBridgeServices init] */

void FUN_1039443cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShuUserNavigationScopeGraphBridge.ShuUserNavigationScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039443f8);
  (*pcVar1)();
}



/* Entry: 10394442c; end: 10394451f; -[_TtC33ShuUserNavigationScopeGraphBridge41ShuUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103944448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103944468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103944488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039444a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010394448c) */
/* WARNING: Removing unreachable block (ram,0x00010394446c) */
/* WARNING: Removing unreachable block (ram,0x00010394444c) */
/* WARNING: Removing unreachable block (ram,0x0001039444ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10394442c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb50e8));
  return;
}



/* Entry: 103944520; end: 103944557;  */

undefined1  [16] FUN_103944520(void)

{
  return ZEXT816(0x1106b04a0);
}



/* Entry: 103944558; end: 10394459b; -[SCShuUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_103944558(undefined8 param_1)

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



/* Entry: 10394459c; end: 1039445cf;  */

void FUN_10394459c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039445d0; end: 103944617; -[SCShuUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039445fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103944600) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039445d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb5178);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb5180));
  return;
}



/* Entry: 103944618; end: 103944637;  */

void FUN_103944618(void)

{
  func_0x000107c61168(&PTR_PTR_112904da0);
  return;
}



/* Entry: 103944638; end: 10394467b; -[SCLegacyContainerViewControllerServiceSaberEntryPoint end] */

void FUN_103944638(undefined8 param_1)

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



/* Entry: 10394467c; end: 1039446af;  */

void FUN_10394467c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039446b0; end: 103944707; -[SCLegacyContainerViewControllerServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039446ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039446f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039446b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb51b8);
  func_0x000107c61610(param_1 + _DAT_112fb51c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb51c8));
  return;
}



/* Entry: 103944708; end: 103944727;  */

void FUN_103944708(void)

{
  func_0x000107c61168(&PTR_PTR_112904e68);
  return;
}



/* Entry: 103944728; end: 10394476b; -[SCLegacyNavigationControllerServiceSaberEntryPoint end] */

void FUN_103944728(undefined8 param_1)

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



/* Entry: 10394476c; end: 10394479f;  */

void FUN_10394476c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039447a0; end: 1039447f7; -[SCLegacyNavigationControllerServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039447dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039447e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039447a0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb5200);
  func_0x000107c61610(param_1 + _DAT_112fb5208);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb5210));
  return;
}



/* Entry: 1039447f8; end: 103944817;  */

void FUN_1039447f8(void)

{
  func_0x000107c61168(&PTR_PTR_112904f38);
  return;
}



/* Entry: 103944818; end: 10394485b; -[SCSCMainTabNavigationServicesSaberEntryPoint end] */

void FUN_103944818(undefined8 param_1)

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



/* Entry: 10394485c; end: 10394488f;  */

void FUN_10394485c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103944890; end: 1039448e7; -[SCSCMainTabNavigationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039448cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039448d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103944890(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb5248);
  func_0x000107c61610(param_1 + _DAT_112fb5250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb5258));
  return;
}



/* Entry: 1039448e8; end: 103944907;  */

void FUN_1039448e8(void)

{
  func_0x000107c61168(&PTR_PTR_112905008);
  return;
}



/* Entry: 103944908; end: 10394494b; -[SCSCNavigationServicesSaberEntryPoint end] */

void FUN_103944908(undefined8 param_1)

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



/* Entry: 10394494c; end: 10394497f;  */

void FUN_10394494c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103944980; end: 1039449d7; -[SCSCNavigationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039449bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039449c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103944980(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb5290);
  func_0x000107c61610(param_1 + _DAT_112fb5298);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb52a0));
  return;
}



/* Entry: 1039449d8; end: 1039449f7;  */

void FUN_1039449d8(void)

{
  func_0x000107c61168(&PTR_PTR_1129050d8);
  return;
}



/* Entry: 1039449f8; end: 103944a03; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039449f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb52d8;
  func_0x000107c61428(param_1 + _DAT_112fb52d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103944a04; end: 103944a0f; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103944a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb52d8;
  func_0x000107c61428(param_1 + _DAT_112fb52d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103944a10; end: 103944a1b; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopeServicesSaberServiceProvider shuUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103944a10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb52e0;
  func_0x000107c61428(param_1 + _DAT_112fb52e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103944a1c; end: 103944a5f;  */

void FUN_103944a1c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103944a60; end: 103944a6b; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopeServicesSaberServiceProvider setShuUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103944a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb52e0;
  func_0x000107c61428(param_1 + _DAT_112fb52e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103944a6c; end: 103944abf;  */

void FUN_103944a6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103944ac0; end: 103944cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103944ac0(void)

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
    func_0x000107c5af3c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103943ed0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fb50f8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fb52e8);
      *(long *)(unaff_x20 + _DAT_112fb52e8) = lVar4;
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
                      "ShuUserNavigationScopeGraphBridge/SCSCDeepLinkHandlingProcedureAuthenticatedScopeServicesSaberServiceProvider.swift"
                      ,0x73,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103944bec);
  (*pcVar1)();
}



/* Entry: 103944cd4; end: 103944d07; -[SCSCDeepLinkHandlingProcedureAuthenticatedScopeServicesSaberServiceProvider provide] */

void FUN_103944cd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103944ac0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


