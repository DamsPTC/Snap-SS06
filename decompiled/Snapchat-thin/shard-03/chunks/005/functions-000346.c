/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029940e8; end: 10299411b; -[SCSCFamilyCenterInvitePromptScopedServicesSaberEntryPoint end] */

void FUN_1029940e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102993f68();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10299411c; end: 10299423b;  */

void FUN_10299411c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "FamilyCenterInvitePromptScopeGraphBridge/SCSCFamilyCenterInvitePromptScopedServicesSaberEntryPoint.swift"
                        ,0x68,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10299423c);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10299423c; end: 1029942e7; -[SCSCFamilyCenterInvitePromptScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10299423c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10299411c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029942e8; end: 102994347; -[SCSCFamilyCenterInvitePromptScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029942e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed1dc0,0);
  *(undefined8 *)(param_1 + _DAT_112ed1dc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102994348; end: 10299437b;  */

void FUN_102994348(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10299437c; end: 1029943b3; -[SCSCFamilyCenterInvitePromptScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299437c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed1dc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed1dc8));
  return;
}



/* Entry: 1029943b4; end: 1029943d3;  */

void FUN_1029943b4(void)

{
  func_0x000107c61168(&PTR_PTR_112875f90);
  return;
}



/* Entry: 1029943d4; end: 1029943f3; -[_TtC31SCFamilyCenterInvitePromptScope31SCFamilyCenterInvitePromptScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029943d4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed1df8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029943f4; end: 102994403; -[_TtC31SCFamilyCenterInvitePromptScope31SCFamilyCenterInvitePromptScope inviteSenderSnapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029943f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ed1e00));
  return;
}



/* Entry: 102994404; end: 10299444f; -[_TtC31SCFamilyCenterInvitePromptScope31SCFamilyCenterInvitePromptScope messageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102994404(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ed1e08);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ed1e08))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102994450; end: 102994497; -[_TtC31SCFamilyCenterInvitePromptScope31SCFamilyCenterInvitePromptScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102994450(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed1e10;
  func_0x000107c61428(param_1 + _DAT_112ed1e10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102994498; end: 1029944ef; -[_TtC31SCFamilyCenterInvitePromptScope31SCFamilyCenterInvitePromptScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102994498(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed1e10;
  func_0x000107c61428(param_1 + _DAT_112ed1e10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029944f0; end: 10299456f; -[_TtC31SCFamilyCenterInvitePromptScope31SCFamilyCenterInvitePromptScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1029944f0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed1df8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed1e00));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ed1e08 + 8));
  param_1 = param_1 + _DAT_112ed1e10;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102994570; end: 1029945d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102994570(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010036bcb8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed1e20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029945d8; end: 102994623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029945d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed1e20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102994624; end: 102994753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102994624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x00010036ba2c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112ed1e10;
  func_0x000107c61614(lVar5 + _DAT_112ed1e10,0);
  *(long *)(lVar5 + _DAT_112ed1df8) = param_1;
  *(undefined8 *)(lVar5 + _DAT_112ed1e00) = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ed1e08);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61428(lVar5 + lVar3,auStack_78,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_5);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_4);
  plVar6 = &lStack_88;
  func_0x000107c61154(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 102994754; end: 102994813; -[_TtC31SCFamilyCenterInvitePromptScope39SCFamilyCenterInvitePromptScopeServices buildWithUiContainer:inviteSenderSnapchatter:messageId:delegate:] */

void FUN_102994754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102994624(param_3,param_4,param_5,param_2,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102994814; end: 102994817;  */

void FUN_102994814(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102994818; end: 10299484b;  */

void FUN_102994818(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10299484c; end: 10299487f; -[_TtC31SCFamilyCenterInvitePromptScope39SCFamilyCenterInvitePromptScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299484c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed1e20));
  return;
}



/* Entry: 102994880; end: 1029949f7;  */

void FUN_102994880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_110577888;
  func_0x000107c613fc(&UNK_110577888,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x102994918,puVar1);
  return;
}



/* Entry: 1029949f8; end: 102994a07;  */

undefined1  [16] FUN_1029949f8(void)

{
  return ZEXT816(0x1105778b0);
}



/* Entry: 102994a08; end: 102994a67; -[_TtC44FamilyCenterPageLauncherPluginImplementation29FamilyCenterPageLaunchHandler init] */

void FUN_102994a08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterPageLauncherPluginImplementation.FamilyCenterPageLaunchHandler",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102994a34);
  (*pcVar1)();
}



/* Entry: 102994a68; end: 102994aaf; -[_TtC44FamilyCenterPageLauncherPluginImplementation29FamilyCenterPageLaunchHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102994a94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102994a98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102994a68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed1e98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed1ea0));
  return;
}



/* Entry: 102994ab0; end: 102994acf;  */

void FUN_102994ab0(void)

{
  func_0x000107c61168(&PTR_PTR_1128761e8);
  return;
}



/* Entry: 102994ad0; end: 102994ad7; -[_TtC44FamilyCenterPageLauncherPluginImplementation29FamilyCenterPageLaunchHandler screen] */

undefined8 FUN_102994ad0(void)

{
  return 0x12;
}



/* Entry: 102994ad8; end: 102994b6b; -[_TtC44FamilyCenterPageLauncherPluginImplementation29FamilyCenterPageLaunchHandler launchWithCommand:uiContainer:completion:] */

/* WARNING: Possible PIC construction at 0x000102994b4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102994b50) */

void FUN_102994ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102994bc8(param_3,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102994b6c; end: 102994bc7; -[_TtC44FamilyCenterPageLauncherPluginImplementation29FamilyCenterPageLaunchHandler dismissFamilyCenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102994b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed1ea0);
  func_0x000107c61174();
  func_0x000107c4ffec(uVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102994bc8; end: 102995053;  */

/* WARNING: Possible PIC construction at 0x000102994c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102994c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102994c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102994ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102994d70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102994ce8) */
/* WARNING: Removing unreachable block (ram,0x000102994c9c) */
/* WARNING: Removing unreachable block (ram,0x000102994c80) */
/* WARNING: Removing unreachable block (ram,0x000102994cb8) */
/* WARNING: Removing unreachable block (ram,0x000102994c84) */
/* WARNING: Removing unreachable block (ram,0x000102994c50) */
/* WARNING: Removing unreachable block (ram,0x000102994df8) */
/* WARNING: Removing unreachable block (ram,0x000102994c64) */
/* WARNING: Removing unreachable block (ram,0x000102994d74) */
/* WARNING: Removing unreachable block (ram,0x000102994d78) */
/* WARNING: Removing unreachable block (ram,0x000102994dbc) */
/* WARNING: Removing unreachable block (ram,0x000102994d94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102994bc8(long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (param_2 == 0) {
    param_1 = param_3 + _DAT_112ed1e98;
    func_0x000107c61618();
    if (param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102994de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_4 + 0x10))(param_4,0);
      return;
    }
    func_0x000107c5c734();
    func_0x000107c61180();
  }
  else {
    func_0x000107c615f0(param_2);
    func_0x000107c615f0(param_2);
    func_0x000107aebacc(param_1);
    func_0x000107c42d94();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c60bd0(param_4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102994df8);
      (*pcVar1)();
    }
    func_0x000107c435fc();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102995054; end: 1029950b3; -[_TtC44FamilyCenterPageLauncherPluginImplementation30FamilyCenterPageLauncherPlugin init] */

void FUN_102995054(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterPageLauncherPluginImplementation.FamilyCenterPageLauncherPlugin",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102995080);
  (*pcVar1)();
}



/* Entry: 1029950b4; end: 1029950c3; -[_TtC44FamilyCenterPageLauncherPluginImplementation30FamilyCenterPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029950b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed1ed8));
  return;
}



/* Entry: 1029950c4; end: 102995153; -[_TtC44FamilyCenterPageLauncherPluginImplementation30FamilyCenterPageLauncherPlugin handlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029950c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f27668();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ed1ed8);
  func_0x000107c61174();
  uVar2 = 0x112d4c360;
  func_0x0001000285a8(0x112d4c360,&UNK_10d912dc0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102995154; end: 102995157; -[_TtC44FamilyCenterPageLauncherPluginImplementation30FamilyCenterPageLauncherPlugin setHandlers:] */

void FUN_102995154(void)

{
  return;
}



/* Entry: 102995158; end: 102995177;  */

void FUN_102995158(void)

{
  func_0x000107c61168(&PTR_PTR_1128762b8);
  return;
}



/* Entry: 102995178; end: 1029951e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102995178(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10299556c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed1f10) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029951e4; end: 10299524f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029951e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed1f10) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102995250; end: 1029952af; -[_TtC46FamilyCenterRouterScopedFactoryServiceProvider32FamilyCenterRouterScopedServices init] */

void FUN_102995250(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterRouterScopedFactoryServiceProvider.FamilyCenterRouterScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299527c);
  (*pcVar1)();
}



/* Entry: 1029952b0; end: 1029952bf; -[_TtC46FamilyCenterRouterScopedFactoryServiceProvider32FamilyCenterRouterScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029952b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed1f10));
  return;
}



/* Entry: 1029952c0; end: 10299532b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029952c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110577b10;
  func_0x000107c613fc(&UNK_110577b10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102995604,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10299532c; end: 1029953c7;  */

void FUN_10299532c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110577a20;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110577a20;
  return;
}



/* Entry: 1029953c8; end: 1029953ff;  */

void FUN_1029953c8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102995400; end: 102995407;  */

undefined8 FUN_102995400(void)

{
  return 0x1b;
}



/* Entry: 102995408; end: 10299553b;  */

void FUN_102995408(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110577b38;
  func_0x000107c613fc(&UNK_110577b38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029955dc;
  func_0x00010058fa64(FUN_1029955dc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10299553c; end: 10299556b;  */

undefined ** FUN_10299553c(void)

{
  return &PTR_DAT_112ed2260;
}



/* Entry: 10299556c; end: 10299558b;  */

void FUN_10299556c(void)

{
  func_0x000107c61168(&PTR_PTR_112876378);
  return;
}



/* Entry: 10299558c; end: 1029955db;  */

undefined1  [16] FUN_10299558c(void)

{
  return ZEXT816(0x110577a70);
}



/* Entry: 1029955dc; end: 102995603;  */

void FUN_1029955dc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102995604; end: 102995607;  */

void FUN_102995604(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102995608; end: 102995683;  */

void FUN_102995608(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112ed1f80,&UNK_10daf9600);
  func_0x000107c613fc();
  pcVar1 = FUN_102995a04;
  func_0x0001000841fc(FUN_102995a04,param_2);
  func_0x000100084214(&UNK_10daf95d0,0x2e,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102995684; end: 10299569b;  */

void FUN_102995684(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112ed1f80,&UNK_10daf9600);
  func_0x000107c613fc();
  pcVar1 = FUN_102995a04;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10daf95d0,0x2e,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10299569c; end: 102995a03;  */

void FUN_10299569c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed1f88,&UNK_10daf9608);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1029967f8();
  func_0x000100082720("FamilyCenterScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_102996884();
  func_0x000100082720("FamilyCenterScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029953c8;
  func_0x0001000823a8(FUN_1029953c8,0);
  func_0x000100082720("FamilyCenterRouterScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112ed1f90,&UNK_10daf9620);
  puVar5 = &UNK_110577b98;
  func_0x000107c613fc(&UNK_110577b98,0x28,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 **)(puVar5 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x102995a0c;
  func_0x0001000823a8(0x102995a0c,puVar5);
  func_0x000100082720("FamilyCenterRouterEntryPointWrapperServiceProvider",0x32,2);
  puVar6 = puVar2;
  FUN_1029966ac();
  func_0x000100082720("FamilyCenterRouterScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ed1f98,&UNK_10daf9610);
  puVar5 = &UNK_110577bc0;
  func_0x000107c613fc(&UNK_110577bc0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102995a18;
  func_0x0001000823a8(0x102995a18,puVar5);
  func_0x000100082720("FamilyCenterRouterScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112ed1f18,&UNK_10daf93b0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102995a24;
  func_0x0001000823a8(0x102995a24,uVar7);
  func_0x000100082720("FamilyCenterRouterScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ed1f08,&UNK_10daf93a0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102995a2c;
  func_0x0001000823a8(0x102995a2c,uVar8);
  func_0x000100082720("FamilyCenterRouterScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110577be8;
  func_0x000107c613fc(&UNK_110577be8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102995a34;
  func_0x0001000823a8(0x102995a34,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("FamilyCenterRouterScopeEntryPointProvider",0x29,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102995a04; end: 102995a3b;  */

void FUN_102995a04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed1f88,&UNK_10daf9608);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1029967f8();
  func_0x000100082720("FamilyCenterScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_102996884();
  func_0x000100082720("FamilyCenterScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029953c8;
  func_0x0001000823a8(FUN_1029953c8,0);
  func_0x000100082720("FamilyCenterRouterScopedServicesCleanupRelayServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112ed1f90,&UNK_10daf9620);
  puVar5 = &UNK_110577b98;
  func_0x000107c613fc(&UNK_110577b98,0x28,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar5 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x102995a0c;
  func_0x0001000823a8(0x102995a0c,puVar5);
  func_0x000100082720("FamilyCenterRouterEntryPointWrapperServiceProvider",0x32,2);
  puVar6 = puVar2;
  FUN_1029966ac();
  func_0x000100082720("FamilyCenterRouterScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ed1f98,&UNK_10daf9610);
  puVar5 = &UNK_110577bc0;
  func_0x000107c613fc(&UNK_110577bc0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102995a18;
  func_0x0001000823a8(0x102995a18,puVar5);
  func_0x000100082720("FamilyCenterRouterScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112ed1f18,&UNK_10daf93b0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102995a24;
  func_0x0001000823a8(0x102995a24,uVar7);
  func_0x000100082720("FamilyCenterRouterScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112ed1f08,&UNK_10daf93a0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102995a2c;
  func_0x0001000823a8(0x102995a2c,uVar8);
  func_0x000100082720("FamilyCenterRouterScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_110577be8;
  func_0x000107c613fc(&UNK_110577be8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102995a34;
  func_0x0001000823a8(0x102995a34,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("FamilyCenterRouterScopeEntryPointProvider",0x29,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102995a3c; end: 102995aeb;  */

void FUN_102995a3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102995d40();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102995c30(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102995aec; end: 102995b5b;  */

undefined8 FUN_102995aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102995c30(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 102995b5c; end: 102995b8f;  */

void FUN_102995b5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102995b90; end: 102995b97;  */

undefined8 FUN_102995b90(void)

{
  return 0x1b;
}



/* Entry: 102995b98; end: 102995c1b;  */

void FUN_102995b98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102995d80,param_2,FUN_102995d84,param_2,0x102995dac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102995c1c; end: 102995c2f;  */

void FUN_102995c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110577c00;
  return;
}



/* Entry: 102995c30; end: 102995d23;  */

void FUN_102995c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112ed2078,&UNK_10daf9758);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  FUN_102997f7c(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  func_0x000107c61174();
  func_0x0001029979a4();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
  FUN_102997a18();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102995d24; end: 102995d3f;  */

undefined ** FUN_102995d24(void)

{
  return &PTR_DAT_112ed2260;
}



/* Entry: 102995d40; end: 102995d5f;  */

void FUN_102995d40(void)

{
  func_0x000107c61168(&PTR_PTR_112ed2008);
  return;
}



/* Entry: 102995d60; end: 102995d83;  */

undefined1  [16] FUN_102995d60(void)

{
  return ZEXT816(0x110577c40);
}



/* Entry: 102995d84; end: 102995dd7;  */

void FUN_102995d84(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102995dd8; end: 102995e13;  */

void FUN_102995dd8(undefined8 *param_1,undefined8 param_2)

{
  FUN_102995e14();
  func_0x0001000a7f38("FamilyCenterRouterScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102995e14; end: 102995fff;  */

void FUN_102995e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110578160;
  ppuVar4 = &PTR_DAT_112ed2260;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ed2080;
  func_0x0001000285a8(0x112ed2080,&UNK_10daf9760);
  func_0x0001000a6ee8(&UNK_110577c40,
                      "FamilyCenterRouterEntryPointWrapperScopeInitializationPluginKey",0x3f,2,
                      FUN_102996074,param_1,uVar2,&UNK_110577c40,&PTR_DAT_112ed1fa0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110577c90;
  func_0x000107c613fc(&UNK_110577c90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110577e88,
                      "FamilyCenterRouterScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_10299607c,puVar3,uVar2,&UNK_110577e88,&PTR_DAT_112ed2118);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110577cb8;
  func_0x000107c613fc(&UNK_110577cb8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110577ab0,"FamilyCenterRouterScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_102996164,puVar3,uVar2,&UNK_110577ab0,&PTR_DAT_112ed1f20);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ed2088;
  func_0x0001000285a8(0x112ed2088,&UNK_10daf9768);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102996000; end: 102996073;  */

void FUN_102996000(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1029961a0;
  func_0x0001000823a8(0x1029961a0,param_3);
  func_0x000100082720("FamilyCenterRouterEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 102996074; end: 10299607b;  */

void FUN_102996074(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1029961a0;
  func_0x0001000823a8();
  func_0x000100082720("FamilyCenterRouterEntryPointWrapperScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 10299607c; end: 1029960bb;  */

void FUN_10299607c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10299692c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FamilyCenterRouterScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029960bc; end: 102996163;  */

void FUN_1029960bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110577ce0;
  func_0x000107c613fc(&UNK_110577ce0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102996198;
  func_0x0001000823a8(FUN_102996198,puVar1);
  func_0x000100082720("FamilyCenterRouterScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102996164; end: 10299616b;  */

void FUN_102996164(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110577ce0;
  func_0x000107c613fc(&UNK_110577ce0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102996198;
  func_0x0001000823a8(FUN_102996198,puVar3);
  func_0x000100082720("FamilyCenterRouterScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10299616c; end: 102996197;  */

void FUN_10299616c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102996198; end: 1029961a7;  */

void FUN_102996198(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110577b38;
  func_0x000107c613fc(&UNK_110577b38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029955dc;
  func_0x00010058fa64(FUN_1029955dc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029961a8; end: 102996283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029961a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1029965bc();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ed2090) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ed2098) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102996284);
  (*pcVar1)();
}



/* Entry: 102996284; end: 1029962e3; -[_TtC34FamilyCenterRouterScopeGraphBridge49FamilyCenterRouterScopeGraphBridgeSaberEntryPoint init] */

void FUN_102996284(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterRouterScopeGraphBridge.FamilyCenterRouterScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029962b0);
  (*pcVar1)();
}



/* Entry: 1029962e4; end: 10299631b; -[_TtC34FamilyCenterRouterScopeGraphBridge49FamilyCenterRouterScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102996300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102996304) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029962e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed2090));
  return;
}



/* Entry: 10299631c; end: 102996343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299631c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed2098),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed2090));
  return;
}



/* Entry: 102996344; end: 102996363;  */

void FUN_102996344(void)

{
  func_0x000107c61168(&PTR_PTR_112876438);
  return;
}



/* Entry: 102996364; end: 1029963eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102996364(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed20c8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed20d0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029963ec);
  (*pcVar2)();
}



/* Entry: 1029963ec; end: 1029964d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029963ec(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed20c8);
  *(undefined **)(unaff_x20 + _DAT_112ed20c8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed20d0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed20d0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110577da8;
  func_0x000107c613fc(&UNK_110577da8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1029964d8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1029964d4; end: 1029964df;  */

void FUN_1029964d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029964e0; end: 10299653f; -[_TtC34FamilyCenterRouterScopeGraphBridge47FamilyCenterRouterScopedServicesSaberEntryPoint init] */

void FUN_1029964e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterRouterScopeGraphBridge.FamilyCenterRouterScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10299650c);
  (*pcVar1)();
}



/* Entry: 102996540; end: 102996577; -[_TtC34FamilyCenterRouterScopeGraphBridge47FamilyCenterRouterScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102996540(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed20d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed20c8));
  return;
}



/* Entry: 102996578; end: 10299657b;  */

void FUN_102996578(void)

{
  return;
}



/* Entry: 10299657c; end: 10299659b;  */

void FUN_10299657c(void)

{
  FUN_1029963ec();
  return;
}



/* Entry: 10299659c; end: 1029965bb;  */

void FUN_10299659c(void)

{
  func_0x000107c61168(&PTR_PTR_112876500);
  return;
}



/* Entry: 1029965bc; end: 10299668b;  */

undefined8 FUN_1029965bc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ed2100,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10299668c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10299668c; end: 1029966ab;  */

void FUN_10299668c(void)

{
  func_0x000107c61168(&PTR_PTR_1128765c8);
  return;
}



/* Entry: 1029966ac; end: 1029966c7;  */

void FUN_1029966ac(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed2108,&UNK_10daf9838);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102996734,param_1);
  return;
}



/* Entry: 1029966c8; end: 102996733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029966c8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10299668c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed2110) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102996734; end: 10299673b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102996734(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10299668c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed2110) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10299673c; end: 102996787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299673c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed2110) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102996788; end: 1029967e7; -[_TtC34FamilyCenterRouterScopeGraphBridge42FamilyCenterRouterScopeGraphBridgeServices init] */

void FUN_102996788(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterRouterScopeGraphBridge.FamilyCenterRouterScopeGraphBridgeServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029967b4);
  (*pcVar1)();
}



/* Entry: 1029967e8; end: 1029967f7; -[_TtC34FamilyCenterRouterScopeGraphBridge42FamilyCenterRouterScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029967e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed2110));
  return;
}



/* Entry: 1029967f8; end: 102996883;  */

void FUN_1029967f8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102996838,0);
  return;
}



/* Entry: 102996884; end: 10299689f;  */

void FUN_102996884(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029968f0,param_1);
  return;
}



/* Entry: 1029968a0; end: 1029968ef;  */

void FUN_1029968a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1029968f0; end: 102996923;  */

void FUN_1029968f0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102996924; end: 10299692b;  */

undefined8 FUN_102996924(void)

{
  return 0x1b;
}



/* Entry: 10299692c; end: 102996aa3;  */

void FUN_10299692c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110577df0;
  func_0x000107c613fc(&UNK_110577df0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102996aa4,puVar1);
  return;
}



/* Entry: 102996aa4; end: 102996aab;  */

void FUN_102996aa4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ed2100,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed2100,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110577ec8;
  func_0x000107c613fc(&UNK_110577ec8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102996b78;
  func_0x00010058fa64(0x102996b78,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


