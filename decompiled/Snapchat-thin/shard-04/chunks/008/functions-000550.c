/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103928784; end: 10392882f;  */

void FUN_103928784(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103928830; end: 103928853;  */

void FUN_103928830(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 103928854; end: 103928873; -[_TtC25PlusFullscreenUpsellScope25PlusFullscreenUpsellScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928854(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fb0728));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103928874; end: 103928883; -[_TtC25PlusFullscreenUpsellScope25PlusFullscreenUpsellScope sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103928874(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fb0730);
}



/* Entry: 103928884; end: 103928893; -[_TtC25PlusFullscreenUpsellScope25PlusFullscreenUpsellScope upsellType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103928884(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fb0738);
}



/* Entry: 103928894; end: 1039288db; -[_TtC25PlusFullscreenUpsellScope25PlusFullscreenUpsellScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928894(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb0740;
  func_0x000107c61428(param_1 + _DAT_112fb0740,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039288dc; end: 103928933; -[_TtC25PlusFullscreenUpsellScope25PlusFullscreenUpsellScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039288dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb0740;
  func_0x000107c61428(param_1 + _DAT_112fb0740,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103928934; end: 103928a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103928934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fb0740;
  func_0x000107c61614(unaff_x20 + _DAT_112fb0740,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fb0728) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0730) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0738) = param_3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_4);
  return puVar3;
}



/* Entry: 103928a18; end: 103928ae3; -[_TtC25PlusFullscreenUpsellScope25PlusFullscreenUpsellScope initWithUiContainer:sourceType:upsellType:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928a18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112fb0740;
  func_0x000107c61614(param_1 + _DAT_112fb0740,0);
  *(undefined8 *)(param_1 + _DAT_112fb0728) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fb0730) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fb0738) = param_5;
  func_0x000107c61428(param_1 + lVar2,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_78,puVar1);
  return;
}



/* Entry: 103928ae4; end: 103928b43; -[_TtC25PlusFullscreenUpsellScope25PlusFullscreenUpsellScope init] */

void FUN_103928ae4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusFullscreenUpsellScope.PlusFullscreenUpsellScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103928b10);
  (*pcVar1)();
}



/* Entry: 103928b44; end: 103928b47;  */

void FUN_103928b44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb0748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc24bb0;
  func_0x000107c61520(&UNK_10dc24bb0,&UNK_1106ae070);
  puRam0000000112fb0748 = puVar1;
  return;
}



/* Entry: 103928b48; end: 103928b87;  */

void FUN_103928b48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb0748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc24bb0;
  func_0x000107c61520(&UNK_10dc24bb0,&UNK_1106ae070);
  puRam0000000112fb0748 = puVar1;
  return;
}



/* Entry: 103928b88; end: 103928b97;  */

undefined1  [16] FUN_103928b88(void)

{
  return ZEXT816(0x1106ae070);
}



/* Entry: 103928b98; end: 103928bf3; -[_TtC25PlusFullscreenUpsellScope25PlusFullscreenUpsellScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103928b98(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fb0728));
  param_1 = param_1 + _DAT_112fb0740;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103928bf4; end: 103928c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928bf4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034c678();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fb0780) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103928c60; end: 103928c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928c60(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034c678();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb0780) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103928c68; end: 103928cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928c68(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb0780) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103928cb4; end: 103928d3b; -[_TtC25PlusFullscreenUpsellScope40PlusFullscreenUpsellScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 103928d3c; end: 103928d9b; -[_TtC25PlusFullscreenUpsellScope40PlusFullscreenUpsellScopeFactoryServices init] */

void FUN_103928d3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusFullscreenUpsellScope.PlusFullscreenUpsellScopeFactoryServices",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103928d68);
  (*pcVar1)();
}



/* Entry: 103928d9c; end: 103928dab;  */

undefined1  [16] FUN_103928d9c(void)

{
  return ZEXT816(0x1106ae0f0);
}



/* Entry: 103928dac; end: 103928dbb; -[_TtC25PlusFullscreenUpsellScope40PlusFullscreenUpsellScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928dac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb0780));
  return;
}



/* Entry: 103928dbc; end: 103928dcb; -[_TtC29SCPlusImmediateLaunchServices29SCPlusImmediateLaunchServices plusManagementScopeLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb07b0));
  return;
}



/* Entry: 103928dcc; end: 103928ddb; -[_TtC29SCPlusImmediateLaunchServices29SCPlusImmediateLaunchServices myFriendsScopeLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb07b8));
  return;
}



/* Entry: 103928ddc; end: 103928deb; -[_TtC29SCPlusImmediateLaunchServices29SCPlusImmediateLaunchServices dreamsCrossSellScopeLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb07c0));
  return;
}



/* Entry: 103928dec; end: 103928dfb; -[_TtC29SCPlusImmediateLaunchServices29SCPlusImmediateLaunchServices dreamsCrossSellScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928dec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb07c8));
  return;
}



/* Entry: 103928dfc; end: 103928e0b; -[_TtC29SCPlusImmediateLaunchServices29SCPlusImmediateLaunchServices chatScopeLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb07d0));
  return;
}



/* Entry: 103928e0c; end: 103928e1b; -[_TtC29SCPlusImmediateLaunchServices29SCPlusImmediateLaunchServices sendToScopeLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb07d8));
  return;
}



/* Entry: 103928e1c; end: 103928ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb07b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb07b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fb07c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fb07c8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fb07d0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fb07d8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103928ed0; end: 103928fb7; -[_TtC29SCPlusImmediateLaunchServices29SCPlusImmediateLaunchServices initWithPlusManagementScopeLauncher:myFriendsScopeLauncher:dreamsCrossSellScopeLauncher:dreamsCrossSellScopeServices:chatScopeLauncher:sendToScopeLauncher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928ed0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb07b0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fb07b8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fb07c0) = param_5;
  *(undefined8 *)(param_1 + _DAT_112fb07c8) = param_6;
  *(undefined8 *)(param_1 + _DAT_112fb07d0) = param_7;
  *(undefined8 *)(param_1 + _DAT_112fb07d8) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61154(&lStack_60,puVar1);
  return;
}



/* Entry: 103928fb8; end: 103928feb;  */

void FUN_103928fb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103928fec; end: 10392913f; -[_TtC29SCPlusImmediateLaunchServices29SCPlusImmediateLaunchServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103929008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103929028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103929048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010392902c) */
/* WARNING: Removing unreachable block (ram,0x00010392900c) */
/* WARNING: Removing unreachable block (ram,0x00010392904c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103928fec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb07b0));
  return;
}



/* Entry: 103929140; end: 103929163;  */

undefined1  [16] FUN_103929140(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103929164; end: 1039291a3;  */

void FUN_103929164(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb0808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc24d40;
  func_0x000107c61520(&UNK_10dc24d40,&UNK_1106ae238);
  puRam0000000112fb0808 = puVar1;
  return;
}



/* Entry: 1039291a4; end: 1039291a7;  */

void FUN_1039291a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb0810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc24de0;
  func_0x000107c61520(&UNK_10dc24de0,&UNK_1106ae258);
  puRam0000000112fb0810 = puVar1;
  return;
}



/* Entry: 1039291a8; end: 1039291e7;  */

void FUN_1039291a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb0810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc24de0;
  func_0x000107c61520(&UNK_10dc24de0,&UNK_1106ae258);
  puRam0000000112fb0810 = puVar1;
  return;
}



/* Entry: 1039291e8; end: 10392922f;  */

undefined1  [16] FUN_1039291e8(void)

{
  return ZEXT816(0x1106ae238);
}



/* Entry: 103929230; end: 10392924f; -[_TtC19PlusManagementScope19PlusManagementScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103929230(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fb0818));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103929250; end: 10392925f; -[_TtC19PlusManagementScope19PlusManagementScope loggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103929250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb0820));
  return;
}



/* Entry: 103929260; end: 10392926f; -[_TtC19PlusManagementScope19PlusManagementScope funnelLoggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103929260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb0828));
  return;
}



/* Entry: 103929270; end: 1039292b7; -[_TtC19PlusManagementScope19PlusManagementScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103929270(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb0830;
  func_0x000107c61428(param_1 + _DAT_112fb0830,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039292b8; end: 10392930f; -[_TtC19PlusManagementScope19PlusManagementScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039292b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb0830;
  func_0x000107c61428(param_1 + _DAT_112fb0830,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103929310; end: 10392931f; -[_TtC19PlusManagementScope19PlusManagementScope didSubscribe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103929310(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fb0838);
}



/* Entry: 103929320; end: 10392932f; -[_TtC19PlusManagementScope19PlusManagementScope presentationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103929320(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fb0840);
}



/* Entry: 103929330; end: 10392933f; -[_TtC19PlusManagementScope19PlusManagementScope deeplinkType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103929330(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fb0848);
}



/* Entry: 103929340; end: 10392934f; -[_TtC19PlusManagementScope19PlusManagementScope upgradeTier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103929340(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fb0850);
}



/* Entry: 103929350; end: 103929497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103929350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fb0830;
  func_0x000107c61614(unaff_x20 + _DAT_112fb0830,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fb0818) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0820) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined1 *)(unaff_x20 + _DAT_112fb0838) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0840) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0828) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0848) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0850) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  puVar3 = auStack_88;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar3;
}



/* Entry: 103929498; end: 1039294e7;  */

undefined8 FUN_103929498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103929a3c();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 1039294e8; end: 1039295ab; -[_TtC19PlusManagementScope19PlusManagementScope initWithUIContainer:loggingContext:delegate:didSubscribe:presentationType:funnelLoggingContext:deeplinkType:upgradeTier:] */

undefined8
FUN_1039294e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_8);
  uVar1 = param_3;
  FUN_103929a3c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  return uVar1;
}



/* Entry: 1039295ac; end: 10392964f;  */

undefined8
FUN_1039295ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c48f6c();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 103929650; end: 103929673; -[_TtC19PlusManagementScope19PlusManagementScope initWithUIContainer:loggingContext:delegate:didSubscribe:presentationType:funnelLoggingContext:deeplinkType:] */

void FUN_103929650(void)

{
  func_0x000107c48f6c();
  return;
}



/* Entry: 103929674; end: 103929713;  */

undefined8
FUN_103929674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c48f68();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 103929714; end: 103929733; -[_TtC19PlusManagementScope19PlusManagementScope initWithUIContainer:loggingContext:delegate:didSubscribe:presentationType:funnelLoggingContext:] */

void FUN_103929714(void)

{
  func_0x000107c48f68();
  return;
}



/* Entry: 103929734; end: 1039297bf;  */

undefined8 FUN_103929734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c48f68();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return unaff_x20;
}



/* Entry: 1039297c0; end: 1039297ef; -[_TtC19PlusManagementScope19PlusManagementScope initWithUIContainer:loggingContext:delegate:presentationType:deeplinkType:] */

void FUN_1039297c0(void)

{
  func_0x000107c48f68();
  return;
}



/* Entry: 1039297f0; end: 103929877;  */

undefined8 FUN_1039297f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c610f8();
  func_0x000107c48f68();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return unaff_x20;
}



/* Entry: 103929878; end: 10392989f; -[_TtC19PlusManagementScope19PlusManagementScope initWithUIContainer:loggingContext:delegate:didSubscribe:] */

void FUN_103929878(void)

{
  func_0x000107c48f68();
  return;
}



/* Entry: 1039298a0; end: 1039298cb; -[_TtC19PlusManagementScope19PlusManagementScope initWithUIContainer:loggingContext:delegate:] */

void FUN_1039298a0(void)

{
  func_0x000107c48f68();
  return;
}



/* Entry: 1039298cc; end: 103929983; -[_TtC19PlusManagementScope19PlusManagementScope initWithUIContainer:sourcePageType:delegate:] */

undefined8
FUN_1039298cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x00010439c014(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x00010439b9d8(param_4,0,0,0xffffffffffffffff,0,0,0xffffffffffffffff,0);
  func_0x000107c48f64(param_1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_4);
  return param_1;
}



/* Entry: 103929984; end: 1039299e3; -[_TtC19PlusManagementScope19PlusManagementScope init] */

void FUN_103929984(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusManagementScope.PlusManagementScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039299b0);
  (*pcVar1)();
}



/* Entry: 1039299e4; end: 103929a3b; -[_TtC19PlusManagementScope19PlusManagementScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039299e4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fb0818));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fb0820));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fb0828));
  param_1 = param_1 + _DAT_112fb0830;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103929a3c; end: 103929b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103929a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112fb0830;
  func_0x000107c61614(unaff_x20 + _DAT_112fb0830,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fb0818) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0820) = param_2;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_3);
  *(undefined1 *)(unaff_x20 + _DAT_112fb0838) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0840) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0828) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0848) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0850) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 103929b5c; end: 103929b7f;  */

undefined8 FUN_103929b5c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103929b80; end: 103929b9f;  */

void FUN_103929b80(void)

{
  func_0x000107c61168(&PTR_PTR_112901ad8);
  return;
}



/* Entry: 103929ba0; end: 103929c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103929ba0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100ad5bec();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fb0880) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fb0888) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103929c28);
  (*pcVar1)();
}



/* Entry: 103929c28; end: 103929c87; -[_TtC37PreviewUserNavigationScopeGraphBridge52PreviewUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_103929c28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewUserNavigationScopeGraphBridge.PreviewUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103929c54);
  (*pcVar1)();
}



/* Entry: 103929c88; end: 103929cbf; -[_TtC37PreviewUserNavigationScopeGraphBridge52PreviewUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103929ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103929ca8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103929c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb0880));
  return;
}



/* Entry: 103929cc0; end: 103929ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103929cc0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fb0888),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fb0880));
  return;
}



/* Entry: 103929ce8; end: 103929d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103929ce8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb0cd8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103929d4c; end: 103929d53;  */

void FUN_103929d4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103929d54; end: 103929df3;  */

void FUN_103929d54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103929df4; end: 103929e13;  */

void FUN_103929df4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103929e14; end: 103929e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103929e14(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb0ce0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103929e78; end: 103929e7f;  */

void FUN_103929e78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103929e80; end: 103929f1f;  */

void FUN_103929e80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103929f20; end: 103929f3f;  */

void FUN_103929f20(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103929f40; end: 103929fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103929f40(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb0ce8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103929fa4; end: 103929fab;  */

void FUN_103929fa4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103929fac; end: 10392a04b;  */

void FUN_103929fac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10392a04c; end: 10392a06b;  */

void FUN_10392a04c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10392a06c; end: 10392a0cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10392a06c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb0cf0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10392a0d0; end: 10392a0d7;  */

void FUN_10392a0d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10392a0d8; end: 10392a177;  */

void FUN_10392a0d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10392a178; end: 10392a197;  */

void FUN_10392a178(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10392a198; end: 10392a1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10392a198(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fb0cf8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10392a1fc; end: 10392a203;  */

void FUN_10392a1fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10392a204; end: 10392a2a3;  */

void FUN_10392a204(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10392a2a4; end: 10392a2c3;  */

void FUN_10392a2a4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10392a2c4; end: 10392a35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392a2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb0cd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0ce0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0ce8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0cf0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fb0cf8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10392a360; end: 10392a3bf; -[_TtC37PreviewUserNavigationScopeGraphBridge45PreviewUserNavigationScopeGraphBridgeServices init] */

void FUN_10392a360(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewUserNavigationScopeGraphBridge.PreviewUserNavigationScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10392a38c);
  (*pcVar1)();
}



/* Entry: 10392a3c0; end: 10392a483; -[_TtC37PreviewUserNavigationScopeGraphBridge45PreviewUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010392a3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010392a3fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010392a3e0) */
/* WARNING: Removing unreachable block (ram,0x00010392a400) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392a3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fb0cd8));
  return;
}



/* Entry: 10392a484; end: 10392a4bb;  */

undefined1  [16] FUN_10392a484(void)

{
  return ZEXT816(0x1106ae4a0);
}



/* Entry: 10392a4bc; end: 10392a4ff; -[SCPreviewUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_10392a4bc(undefined8 param_1)

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



/* Entry: 10392a500; end: 10392a533;  */

void FUN_10392a500(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10392a534; end: 10392a57b; -[SCPreviewUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010392a560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010392a564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392a534(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fb0d50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb0d58));
  return;
}



/* Entry: 10392a57c; end: 10392a59b;  */

void FUN_10392a57c(void)

{
  func_0x000107c61168(&PTR_PTR_112901d78);
  return;
}



/* Entry: 10392a59c; end: 10392a5a7; -[SCPreviewQuotaCheckerServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392a59c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb0d90;
  func_0x000107c61428(param_1 + _DAT_112fb0d90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10392a5a8; end: 10392a5b3; -[SCPreviewQuotaCheckerServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392a5a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb0d90;
  func_0x000107c61428(param_1 + _DAT_112fb0d90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10392a5b4; end: 10392a5bf; -[SCPreviewQuotaCheckerServiceSaberServiceProvider previewUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392a5b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fb0d98;
  func_0x000107c61428(param_1 + _DAT_112fb0d98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10392a5c0; end: 10392a603;  */

void FUN_10392a5c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10392a604; end: 10392a60f; -[SCPreviewQuotaCheckerServiceSaberServiceProvider setPreviewUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10392a604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fb0d98;
  func_0x000107c61428(param_1 + _DAT_112fb0d98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


