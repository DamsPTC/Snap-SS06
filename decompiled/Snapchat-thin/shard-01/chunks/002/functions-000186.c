/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e484dc; end: 100e484f3;  */

void FUN_100e484dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e484f4; end: 100e48553;  */

void FUN_100e484f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61434(param_2);
  func_0x000104041fd0(param_1,param_2);
  func_0x000107c61434(param_4);
  func_0x000104041ffc(param_3,param_4);
  return;
}



/* Entry: 100e48554; end: 100e48593;  */

void FUN_100e48554(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000100e6cac4(param_1,*unaff_x20,&PTR_DAT_110359418);
  return;
}



/* Entry: 100e48594; end: 100e485d3;  */

undefined8 FUN_100e48594(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100e485d4; end: 100e485ff; -[_TtC25AdOverridesImplementation30AdOverridesSettingsRowProvider init] */

void FUN_100e485d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOverridesImplementation.AdOverridesSettingsRowProvider",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e48600);
  (*pcVar1)();
}



/* Entry: 100e48600; end: 100e48603;  */

void FUN_100e48600(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e48604; end: 100e4863b; -[_TtC25AdOverridesImplementation30AdOverridesSettingsRowProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e48604(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d3c0d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d3c0d8));
  return;
}



/* Entry: 100e4863c; end: 100e4865b;  */

void FUN_100e4863c(void)

{
  func_0x000107c61168(&PTR_PTR_11279baf0);
  return;
}



/* Entry: 100e4865c; end: 100e4869f; -[_TtC25AdOverridesImplementationP33_DC9CE3D56F4AF5DF32C92E526653144834AdOverridesContainerViewController initWithValdiView:] */

void FUN_100e4865c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 100e486a0; end: 100e486f7; -[_TtC25AdOverridesImplementationP33_DC9CE3D56F4AF5DF32C92E526653144834AdOverridesContainerViewController initWithCoder:] */

void FUN_100e486a0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AdOverridesImplementation/AdOverridesEditorsSettingsRowProvider.swift",0x45,2
                      ,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e486f8);
  (*pcVar1)();
}



/* Entry: 100e486f8; end: 100e486ff; -[_TtC25AdOverridesImplementationP33_DC9CE3D56F4AF5DF32C92E526653144834AdOverridesContainerViewController pageViewName] */

undefined8 FUN_100e486f8(void)

{
  return 0x10d;
}



/* Entry: 100e48700; end: 100e48743;  */

void FUN_100e48700(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fc98();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e48744; end: 100e487c3; -[_TtC25AdOverridesImplementationP33_DC9CE3D56F4AF5DF32C92E526653144834AdOverridesContainerViewController initWithNibName:bundle:] */

void FUN_100e48744(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOverridesImplementation.AdOverridesContainerViewController",0x3c,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e48770);
  (*pcVar1)();
}



/* Entry: 100e487c4; end: 100e487ef; -[_TtC25AdOverridesImplementation30AdOverridesSettingsRowProvider sectionRow] */

void FUN_100e487c4(void)

{
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c3d014();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e487f0; end: 100e48bf7; -[_TtC25AdOverridesImplementation30AdOverridesSettingsRowProvider rowViewModel] */

void FUN_100e487f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = PTR_PTR_1126aeaf0;
  func_0x000107c610f8(PTR_PTR_1126aeaf0);
  uVar7 = 0x727265764f206441;
  uVar3 = uVar7;
  func_0x000107c5fadc(0x727265764f206441,0xec00000073656469);
  uVar4 = 0x616e7265746e495b;
  func_0x000107c5fadc(0x616e7265746e495b,0xef5d796c6e4f206c);
  uVar5 = uVar7;
  func_0x000107c5fadc(0x727265764f206441,0xec00000073656469);
  func_0x000107c5fadc(0x727265764f206441,0xec00000073656469);
  func_0x000107c48db4(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  puVar6 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4e01c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c4a8a4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100e48bf8; end: 100e48cbb;  */

void FUN_100e48bf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_110359498;
  func_0x000107c613fc(&UNK_110359498,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  uStack_50 = 0x100e48d6c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1103594b0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100e48cbc; end: 100e48d0f; -[_TtC25AdOverridesImplementation30AdOverridesSettingsRowProvider handleWithContext:] */

/* WARNING: Possible PIC construction at 0x000100e48cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e48cfc) */

void FUN_100e48cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e48950(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100e48d10; end: 100e48d8f;  */

void FUN_100e48d10(void)

{
  long unaff_x20;
  
  FUN_100e48bf8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100e48d90; end: 100e48dab;  */

void FUN_100e48d90(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100e48dac; end: 100e48daf; -[_TtC25AdOverridesImplementationP33_DC9CE3D56F4AF5DF32C92E526653144834AdOverridesContainerViewController defaultProjectNameV3] */

void FUN_100e48dac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fc98();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e48db0; end: 100e48db7; -[_TtC25AdOverridesImplementationP33_DC9CE3D56F4AF5DF32C92E526653144834AdOverridesContainerViewController defaultProjectNameV2] */

void FUN_100e48db0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fc98();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100e48db8; end: 100e48df3;  */

void FUN_100e48db8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 100e48df4; end: 100e48e1f;  */

void FUN_100e48df4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e48e20; end: 100e48e2b;  */

void FUN_100e48e20(void)

{
  return;
}



/* Entry: 100e48e2c; end: 100e48e4b;  */

void FUN_100e48e2c(void)

{
  func_0x000107c61168(&PTR_PTR_112d3c178);
  return;
}



/* Entry: 100e48e4c; end: 100e48e57; -[SCAdOverridesEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e48e4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3c1e0;
  func_0x000107c61428(param_1 + _DAT_112d3c1e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e48e58; end: 100e48e63; -[SCAdOverridesEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e48e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3c1e0;
  func_0x000107c61428(param_1 + _DAT_112d3c1e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e48e64; end: 100e48e6f; -[SCAdOverridesEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e48e64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3c1e8;
  func_0x000107c61428(param_1 + _DAT_112d3c1e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e48e70; end: 100e48eb3;  */

void FUN_100e48e70(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100e48eb4; end: 100e48ebf; -[SCAdOverridesEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e48eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3c1e8;
  func_0x000107c61428(param_1 + _DAT_112d3c1e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e48ec0; end: 100e48fb3;  */

void FUN_100e48ec0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e48fb4; end: 100e48fdb; -[SCAdOverridesEntryPoint begin] */

void FUN_100e48fb4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000100e48f14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e48fdc; end: 100e4901f; -[SCAdOverridesEntryPoint end] */

void FUN_100e48fdc(undefined8 param_1)

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



/* Entry: 100e49020; end: 100e491b7;  */

void FUN_100e49020(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdOverridesImplementation/SCAdOverridesEntryPoint.swift",0x37,2,0x27,0)
        ;
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100e491b8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e491b8; end: 100e49263; -[SCAdOverridesEntryPoint setValue:forIvarName:] */

void FUN_100e491b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100e49020(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e49264; end: 100e492d7; -[SCAdOverridesEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e49264(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d3c1e0,0);
  func_0x000107c61614(param_1 + _DAT_112d3c1e8,0);
  *(undefined8 *)(param_1 + _DAT_112d3c1f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e492d8; end: 100e4930b;  */

void FUN_100e492d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e4930c; end: 100e49353; -[SCAdOverridesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e4930c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3c1e0);
  func_0x000107c61610(param_1 + _DAT_112d3c1e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3c1f0));
  return;
}



/* Entry: 100e49354; end: 100e49373;  */

void FUN_100e49354(void)

{
  func_0x000107c61168(&PTR_PTR_11279bc68);
  return;
}



/* Entry: 100e49374; end: 100e4939b;  */

void FUN_100e49374(void)

{
  func_0x000100e4ada0();
  func_0x000100e4aef4();
  FUN_100e4939c();
  return;
}



/* Entry: 100e4939c; end: 100e4945f;  */

void FUN_100e4939c(uint param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x23;
  
  func_0x000100e4af40();
  func_0x000100e4add0();
  func_0x000100e4adfc();
  func_0x000100e4ad2c();
  if ((param_1 & 1) == 0) {
    func_0x000100e4ae24();
    func_0x000100e4adb8();
    func_0x000100e4ad0c();
  }
  else {
    func_0x000100e4ae68();
    func_0x000103c31f74();
    func_0x000100e4ae10();
    func_0x000100e494a0();
    func_0x000100e4af20();
    func_0x000100e4af30();
    FUN_100e496b4();
    func_0x000100e4ad68();
    func_0x000100e4af28();
    func_0x000100e4af38();
    func_0x000100e4af18();
    func_0x000100e4af74();
    func_0x000100e4aeb8();
    if (unaff_x21 == 0) {
      FUN_100e4ae84();
      *(code **)(unaff_x19 + 0x10) = FUN_100e4973c;
      *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
      goto LAB_100e49440;
    }
    func_0x000100e4aee4();
  }
  func_0x000100e4aeec();
  func_0x000100e494a0();
  func_0x000100e4ade8();
LAB_100e49440:
  func_0x000100e4af80();
  return;
}



/* Entry: 100e49460; end: 100e494bf;  */

void FUN_100e49460(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d3c278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68c80;
  func_0x000107c61520(&UNK_10dc68c80,&UNK_1106ed6c0);
  puRam0000000112d3c278 = puVar1;
  return;
}



/* Entry: 100e494c0; end: 100e494d7;  */

undefined1  [16] FUN_100e494c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef13770;
  auVar1._0_8_ = 0xd00000000000002d;
  return auVar1;
}



/* Entry: 100e494d8; end: 100e494f3;  */

void FUN_100e494d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e494f4; end: 100e496b3;  */

/* WARNING: Removing unreachable block (ram,0x000100e49648) */
/* WARNING: Removing unreachable block (ram,0x000100e49668) */

long * FUN_100e494f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x21;
  code *pcVar4;
  long *plStack_58;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0x138))(param_1);
  if (unaff_x21 == 0) {
    (**(code **)(*plVar1 + 0x100))(param_2,param_3);
    (**(code **)(*plVar1 + 0x4d0))(param_4);
    plVar2 = plVar1;
    (**(code **)(*param_5 + 0x70))(plVar1,1);
    if (((ulong)plVar2 & 1) != 0) {
      pcVar4 = *(code **)(*plVar1 + 0x1e8);
      uVar3 = 0x112d3c7f8;
      func_0x0001000285a8(0x112d3c7f8,&UNK_10d905500);
      (*pcVar4)(&plStack_58,0xffffffffffffffff,uVar3);
      (**(code **)(*plVar1 + 0xa0))();
      func_0x000107c61574(plVar1);
      return plStack_58;
    }
    (**(code **)(*plVar1 + 0xa0))();
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar2,0,0);
    plVar2[1] = -0x16ffffffffffff95;
    *plVar2 = 0x636f6c426c6c6163;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *(undefined1 *)(plVar2 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return param_5;
}



/* Entry: 100e496b4; end: 100e4973b;  */

void FUN_100e496b4(long param_1)

{
  ulong unaff_x22;
  
  FUN_100e779e8();
  func_0x000100e4ad4c();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  func_0x000100e4af0c("f(r:\'[0]\', t, r?:\'[1]\'): g<c>:\'[2]\'<t>");
  func_0x000100e4aec4();
  func_0x000100e4af5c(0x19,0x800000010ef13d10,0xd000000000000026,unaff_x22 | 0x8000000000000000);
  func_0x000100e4ae50();
  func_0x000107c61538();
  func_0x000100e4aed8();
  func_0x000100e4ae78();
  func_0x000100e4ae38();
  return;
}



/* Entry: 100e4973c; end: 100e49753;  */

void FUN_100e4973c(void)

{
  FUN_100e494f4();
  return;
}



/* Entry: 100e49754; end: 100e49803;  */

void FUN_100e49754(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  func_0x000103c31f74();
  plVar1 = (long *)*param_1;
  pcVar2 = *(code **)(*plVar1 + 0xa8);
  func_0x000107c6157c(plVar1);
  (*pcVar2)(0xd000000000000026,0x800000010ef13d60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar1);
  return;
}



/* Entry: 100e49804; end: 100e49813;  */

undefined1  [16] FUN_100e49804(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000100e4af04(0x112d3c220,auStack_38,0);
  func_0x000100e4af64();
  auVar1._8_8_ = &PTR_DAT_112d3c228;
  auVar1._0_8_ = 0x112d3c220;
  return auVar1;
}



/* Entry: 100e49814; end: 100e4982f;  */

undefined8 FUN_100e49814(void)

{
  FUN_100e494c0();
  return 0xd00000000000002d;
}



/* Entry: 100e49830; end: 100e49837;  */

undefined8 FUN_100e49830(void)

{
  return 0;
}



/* Entry: 100e49838; end: 100e4985f;  */

void FUN_100e49838(void)

{
  func_0x000100e4ada0();
  func_0x000100e4aef4();
  FUN_100e49860();
  return;
}



/* Entry: 100e49860; end: 100e49923;  */

void FUN_100e49860(uint param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x23;
  
  func_0x000100e4af40();
  func_0x000100e4add0();
  func_0x000100e4adfc();
  func_0x000100e4ad2c();
  if ((param_1 & 1) == 0) {
    func_0x000100e4ae24();
    func_0x000100e4adb8();
    func_0x000100e4ad0c();
  }
  else {
    func_0x000100e4ae68();
    func_0x000103c31f74();
    func_0x000100e4ae10();
    FUN_100e49924();
    func_0x000100e4af20();
    func_0x000100e4af30();
    FUN_100e49a9c();
    func_0x000100e4ad68();
    func_0x000100e4af28();
    func_0x000100e4af38();
    func_0x000100e4af18();
    func_0x000100e4af74();
    func_0x000100e4aeb8();
    if (unaff_x21 == 0) {
      FUN_100e4ae84();
      *(code **)(unaff_x19 + 0x10) = FUN_100e49b2c;
      *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
      goto LAB_100e49904;
    }
    func_0x000100e4aee4();
  }
  func_0x000100e4aeec();
  FUN_100e49924();
  func_0x000100e4ade8();
LAB_100e49904:
  func_0x000100e4af80();
  return;
}



/* Entry: 100e49924; end: 100e49943;  */

void FUN_100e49924(void)

{
  func_0x000107c61168(&PTR_PTR_112d3c368);
  return;
}



/* Entry: 100e49944; end: 100e4995b;  */

undefined1  [16] FUN_100e49944(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef137a0;
  auVar1._0_8_ = 0xd00000000000002e;
  return auVar1;
}



/* Entry: 100e4995c; end: 100e49977;  */

void FUN_100e4995c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e49978; end: 100e49a9b;  */

/* WARNING: Removing unreachable block (ram,0x000100e49a18) */

long * FUN_100e49978(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  plVar2 = plVar1;
  (**(code **)(*param_1 + 0x70))();
  if (((ulong)plVar2 & 1) == 0) {
    (**(code **)(*plVar1 + 0xa0))();
    if (unaff_x21 == 0) {
      FUN_100e49460();
      func_0x000107c613f8(&UNK_1106ed6c0,plVar2,0,0);
      plVar2[1] = -0x16ffffffffffff95;
      *plVar2 = 0x636f6c426c6c6163;
      plVar2[2] = 0;
      plVar2[3] = 0;
      *(undefined1 *)(plVar2 + 4) = 1;
      func_0x000107c61654();
    }
  }
  else {
    plVar2 = (long *)0xffffffffffffffff;
    (**(code **)(*plVar1 + 0x1c0))(0xffffffffffffffff,PTR___sSSN_11034da80);
    if (unaff_x21 == 0) {
      (**(code **)(*plVar1 + 0xa0))();
      func_0x000107c61574(plVar1);
      return plVar2;
    }
  }
  func_0x000107c61574(plVar1);
  return param_1;
}



/* Entry: 100e49a9c; end: 100e49b2b;  */

void FUN_100e49a9c(long param_1)

{
  undefined8 uVar1;
  ulong unaff_x21;
  
  FUN_100e779e8();
  func_0x000100e4ad4c();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  func_0x000100e4afa0("getLocalRulesDescription");
  func_0x000100e4aec4();
  uVar1 = 0xd000000000000018;
  func_0x000103c31710(0xd000000000000018,unaff_x21 | 0x8000000000000000,0x733c70203a292866,
                      0xe90000000000003e);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  func_0x000103c31b98(0);
  func_0x000100e4ae78();
  func_0x000103c31164(param_1,0,2);
  return;
}



/* Entry: 100e49b2c; end: 100e49b43;  */

void FUN_100e49b2c(void)

{
  FUN_100e49978();
  return;
}



/* Entry: 100e49b44; end: 100e49b53;  */

undefined1  [16] FUN_100e49b44(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000100e4af04(0x112d3c230,auStack_38,0);
  func_0x000100e4af64();
  auVar1._8_8_ = &PTR_DAT_112d3c238;
  auVar1._0_8_ = 0x112d3c230;
  return auVar1;
}



/* Entry: 100e49b54; end: 100e49b6f;  */

undefined8 FUN_100e49b54(void)

{
  FUN_100e49944();
  return 0xd00000000000002e;
}



/* Entry: 100e49b70; end: 100e49b77;  */

undefined8 FUN_100e49b70(void)

{
  return 0;
}



/* Entry: 100e49b78; end: 100e49b9f;  */

void FUN_100e49b78(void)

{
  func_0x000100e4ada0();
  func_0x000100e4aef4();
  FUN_100e49ba0();
  return;
}



/* Entry: 100e49ba0; end: 100e49c63;  */

void FUN_100e49ba0(uint param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x23;
  
  func_0x000100e4af40();
  func_0x000100e4add0();
  func_0x000100e4adfc();
  func_0x000100e4ad2c();
  if ((param_1 & 1) == 0) {
    func_0x000100e4ae24();
    func_0x000100e4adb8();
    func_0x000100e4ad0c();
  }
  else {
    func_0x000100e4ae68();
    func_0x000103c31f74();
    func_0x000100e4ae10();
    FUN_100e49c64();
    func_0x000100e4af20();
    func_0x000100e4af30();
    FUN_100e49dfc();
    func_0x000100e4ad68();
    func_0x000100e4af28();
    func_0x000100e4af38();
    func_0x000100e4af18();
    func_0x000100e4af74();
    func_0x000100e4aeb8();
    if (unaff_x21 == 0) {
      FUN_100e4ae84();
      *(code **)(unaff_x19 + 0x10) = FUN_100e49e84;
      *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
      goto LAB_100e49c44;
    }
    func_0x000100e4aee4();
  }
  func_0x000100e4aeec();
  FUN_100e49c64();
  func_0x000100e4ade8();
LAB_100e49c44:
  func_0x000100e4af80();
  return;
}



/* Entry: 100e49c64; end: 100e49c83;  */

void FUN_100e49c64(void)

{
  func_0x000107c61168(&PTR_PTR_112d3c410);
  return;
}



/* Entry: 100e49c84; end: 100e49c9b;  */

undefined1  [16] FUN_100e49c84(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef137d0;
  auVar1._0_8_ = 0xd000000000000042;
  return auVar1;
}



/* Entry: 100e49c9c; end: 100e49cbb;  */

void FUN_100e49c9c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e49cbc; end: 100e49dfb;  */

/* WARNING: Removing unreachable block (ram,0x000100e49d68) */

long * FUN_100e49cbc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x21;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  plVar2 = plVar1;
  (**(code **)(*param_1 + 0x70))();
  if (((ulong)plVar2 & 1) == 0) {
    (**(code **)(*plVar1 + 0xa0))();
    if (unaff_x21 == 0) {
      FUN_100e49460();
      func_0x000107c613f8(&UNK_1106ed6c0,plVar2,0,0);
      plVar2[1] = -0x16ffffffffffff95;
      *plVar2 = 0x636f6c426c6c6163;
      plVar2[2] = 0;
      plVar2[3] = 0;
      *(undefined1 *)(plVar2 + 4) = 1;
      func_0x000107c61654();
    }
  }
  else {
    FUN_100e728a0(0);
    func_0x000107c613fc();
    plVar2 = plVar1;
    func_0x000107c6157c(plVar1);
    FUN_100e727f4();
    if (unaff_x21 == 0) {
      (**(code **)(*plVar1 + 0xa0))();
      func_0x000107c61574(plVar1);
      return plVar2;
    }
  }
  func_0x000107c61574(plVar1);
  return param_1;
}



/* Entry: 100e49dfc; end: 100e49e83;  */

void FUN_100e49dfc(long param_1)

{
  ulong unaff_x21;
  
  FUN_100e779e8();
  func_0x000100e4ad4c();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  func_0x000100e4afa0("makeMultiSegmentSessionManager");
  func_0x000100e4aec4();
  func_0x000100e4af5c(0x1e,unaff_x21 | 0x8000000000000000,0x273a72203a292866,0xec000000275d305b);
  func_0x000100e4ae50();
  func_0x000107c61538();
  func_0x000100e4aed8();
  func_0x000100e4ae78();
  func_0x000100e4ae38();
  return;
}



/* Entry: 100e49e84; end: 100e49e9b;  */

void FUN_100e49e84(void)

{
  FUN_100e49cbc();
  return;
}



/* Entry: 100e49e9c; end: 100e49eab;  */

undefined1  [16] FUN_100e49e9c(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000100e4af04(0x112d3c240,auStack_38,0);
  func_0x000100e4af64();
  auVar1._8_8_ = &PTR_DAT_112d3c248;
  auVar1._0_8_ = 0x112d3c240;
  return auVar1;
}



/* Entry: 100e49eac; end: 100e49ec7;  */

undefined8 FUN_100e49eac(void)

{
  FUN_100e49c84();
  return 0xd000000000000042;
}



/* Entry: 100e49ec8; end: 100e49ecf;  */

undefined8 FUN_100e49ec8(void)

{
  return 0;
}



/* Entry: 100e49ed0; end: 100e49ef7;  */

void FUN_100e49ed0(void)

{
  func_0x000100e4ada0();
  func_0x000100e4aef4();
  FUN_100e49ef8();
  return;
}



/* Entry: 100e49ef8; end: 100e49fbb;  */

void FUN_100e49ef8(uint param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x23;
  
  func_0x000100e4af40();
  func_0x000100e4add0();
  func_0x000100e4adfc();
  func_0x000100e4ad2c();
  if ((param_1 & 1) == 0) {
    func_0x000100e4ae24();
    func_0x000100e4adb8();
    func_0x000100e4ad0c();
  }
  else {
    func_0x000100e4ae68();
    func_0x000103c31f74();
    func_0x000100e4ae10();
    FUN_100e49fbc();
    func_0x000100e4af20();
    func_0x000100e4af30();
    FUN_100e4a1e8();
    func_0x000100e4ad68();
    func_0x000100e4af28();
    func_0x000100e4af38();
    func_0x000100e4af18();
    func_0x000100e4af74();
    func_0x000100e4aeb8();
    if (unaff_x21 == 0) {
      FUN_100e4ae84();
      *(code **)(unaff_x19 + 0x10) = FUN_100e4a270;
      *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
      goto LAB_100e49f9c;
    }
    func_0x000100e4aee4();
  }
  func_0x000100e4aeec();
  FUN_100e49fbc();
  func_0x000100e4ade8();
LAB_100e49f9c:
  func_0x000100e4af80();
  return;
}



/* Entry: 100e49fbc; end: 100e49fdb;  */

void FUN_100e49fbc(void)

{
  func_0x000107c61168(&PTR_PTR_112d3c4b8);
  return;
}



/* Entry: 100e49fdc; end: 100e49ff3;  */

undefined1  [16] FUN_100e49fdc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef13820;
  auVar1._0_8_ = 0xd000000000000044;
  return auVar1;
}



/* Entry: 100e49ff4; end: 100e4a00f;  */

void FUN_100e49ff4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e4a010; end: 100e4a1e7;  */

/* WARNING: Removing unreachable block (ram,0x000100e4a17c) */
/* WARNING: Removing unreachable block (ram,0x000100e4a19c) */

long * FUN_100e4a010(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                    long *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  plVar1 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar1 + 0x100))(param_1,param_2);
  puStack_60 = &UNK_11035aed0;
  func_0x000100e4abd4();
  uStack_78 = param_3;
  uStack_58 = param_1;
  (**(code **)(*plVar1 + 0x120))(&uStack_78);
  FUN_100e4ac14(&uStack_78);
  (**(code **)(*plVar1 + 0x130))(param_4,&PTR_DAT_110359e58);
  if (unaff_x21 == 0) {
    plVar2 = plVar1;
    (**(code **)(*param_5 + 0x70))(plVar1,1);
    if (((ulong)plVar2 & 1) != 0) {
      pcVar4 = *(code **)(*plVar1 + 0x1e8);
      uVar3 = 0x112d3c7f8;
      func_0x0001000285a8(0x112d3c7f8,&UNK_10d905500);
      (*pcVar4)(&uStack_78,0xffffffffffffffff,uVar3);
      plVar2 = (long *)CONCAT71(uStack_77,uStack_78);
      (**(code **)(*plVar1 + 0xa0))();
      func_0x000107c61574(plVar1);
      return plVar2;
    }
    (**(code **)(*plVar1 + 0xa0))();
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar2,0,0);
    plVar2[1] = -0x16ffffffffffff95;
    *plVar2 = 0x636f6c426c6c6163;
    plVar2[2] = 0;
    plVar2[3] = 0;
    *(undefined1 *)(plVar2 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar1);
  return param_5;
}



/* Entry: 100e4a1e8; end: 100e4a26f;  */

void FUN_100e4a1e8(long param_1)

{
  ulong unaff_x22;
  
  FUN_100e779e8();
  func_0x000100e4ad4c();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  func_0x000100e4af0c("f(t, r:\'[0]\', r:\'[1]\'): g<c>:\'[2]\'<t>");
  func_0x000100e4aec4();
  func_0x000100e4af5c(0x10,0x800000010ef13c00,0xd000000000000025,unaff_x22 | 0x8000000000000000);
  func_0x000100e4ae50();
  func_0x000107c61538();
  func_0x000100e4aed8();
  func_0x000100e4ae78();
  func_0x000100e4ae38();
  return;
}



/* Entry: 100e4a270; end: 100e4a2ab;  */

void FUN_100e4a270(void)

{
  FUN_100e4a010();
  return;
}



/* Entry: 100e4a2ac; end: 100e4a2bb;  */

undefined1  [16] FUN_100e4a2ac(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000100e4af04(0x112d3c250,auStack_38,0);
  func_0x000100e4af64();
  auVar1._8_8_ = &PTR_DAT_112d3c258;
  auVar1._0_8_ = 0x112d3c250;
  return auVar1;
}



/* Entry: 100e4a2bc; end: 100e4a2d7;  */

undefined8 FUN_100e4a2bc(void)

{
  FUN_100e49fdc();
  return 0xd000000000000044;
}



/* Entry: 100e4a2d8; end: 100e4a2df;  */

undefined8 FUN_100e4a2d8(void)

{
  return 0;
}



/* Entry: 100e4a2e0; end: 100e4a307;  */

void FUN_100e4a2e0(void)

{
  func_0x000100e4ada0();
  func_0x000100e4aef4();
  FUN_100e4a308();
  return;
}



/* Entry: 100e4a308; end: 100e4a3cb;  */

void FUN_100e4a308(uint param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x23;
  
  func_0x000100e4af40();
  func_0x000100e4add0();
  func_0x000100e4adfc();
  func_0x000100e4ad2c();
  if ((param_1 & 1) == 0) {
    func_0x000100e4ae24();
    func_0x000100e4adb8();
    func_0x000100e4ad0c();
  }
  else {
    func_0x000100e4ae68();
    func_0x000103c31f74();
    func_0x000100e4ae10();
    FUN_100e4a3cc();
    func_0x000100e4af20();
    func_0x000100e4af30();
    FUN_100e4a5f8();
    func_0x000100e4ad68();
    func_0x000100e4af28();
    func_0x000100e4af38();
    func_0x000100e4af18();
    func_0x000100e4af74();
    func_0x000100e4aeb8();
    if (unaff_x21 == 0) {
      FUN_100e4ae84();
      *(code **)(unaff_x19 + 0x10) = FUN_100e4a680;
      *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
      goto LAB_100e4a3ac;
    }
    func_0x000100e4aee4();
  }
  func_0x000100e4aeec();
  FUN_100e4a3cc();
  func_0x000100e4ade8();
LAB_100e4a3ac:
  func_0x000100e4af80();
  return;
}



/* Entry: 100e4a3cc; end: 100e4a3eb;  */

void FUN_100e4a3cc(void)

{
  func_0x000107c61168(&PTR_PTR_112d3c560);
  return;
}



/* Entry: 100e4a3ec; end: 100e4a403;  */

undefined1  [16] FUN_100e4a3ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef13870;
  auVar1._0_8_ = 0xd000000000000031;
  return auVar1;
}



/* Entry: 100e4a404; end: 100e4a423;  */

void FUN_100e4a404(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e4a424; end: 100e4a5f7;  */

/* WARNING: Removing unreachable block (ram,0x000100e4a57c) */
/* WARNING: Removing unreachable block (ram,0x000100e4a5a0) */

undefined1  [16]
FUN_100e4a424(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x21;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  plVar2 = (long *)0x0;
  func_0x000103c332cc();
  func_0x000107c613fc();
  func_0x000103c33294();
  (**(code **)(*plVar2 + 0x100))(param_1,param_2);
  pcVar6 = *(code **)(*plVar2 + 0x390);
  uVar3 = 0;
  func_0x000100e72a10(0);
  (*pcVar6)(param_3,0x100e4abac,plVar2,uVar3);
  if (unaff_x21 == 0) {
    ppuVar1 = (undefined **)0x0;
    if (param_4 != 0) {
      ppuVar1 = &PTR_DAT_110359fa8;
    }
    (**(code **)(*plVar2 + 0x498))(param_4,ppuVar1);
    lVar5 = 1;
    plVar4 = plVar2;
    (**(code **)(*param_5 + 0x70))(plVar2,1);
    if (((ulong)plVar4 & 1) != 0) {
      param_5 = (long *)0xffffffffffffffff;
      (**(code **)(*plVar2 + 0x1a8))(0xffffffffffffffff);
      (**(code **)(*plVar2 + 0xa0))();
      func_0x000107c61574(plVar2);
      goto LAB_100e4a4f8;
    }
    (**(code **)(*plVar2 + 0xa0))();
    FUN_100e49460();
    func_0x000107c613f8(&UNK_1106ed6c0,plVar4,0,0);
    plVar4[1] = -0x16ffffffffffff95;
    *plVar4 = 0x636f6c426c6c6163;
    plVar4[2] = 0;
    plVar4[3] = 0;
    *(undefined1 *)(plVar4 + 4) = 1;
    func_0x000107c61654();
  }
  func_0x000107c61574(plVar2);
  lVar5 = param_4;
LAB_100e4a4f8:
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = param_5;
  return auVar7;
}



/* Entry: 100e4a5f8; end: 100e4a67f;  */

void FUN_100e4a5f8(long param_1)

{
  ulong unaff_x22;
  
  FUN_100e779e8();
  func_0x000100e4ad4c();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  func_0x000100e4af0c("f(t, a<r:\'[0]\'>, r?:\'[1]\'): t");
  func_0x000100e4aec4();
  func_0x000100e4af5c(0x1a,0x800000010ef13b80,0xd00000000000001d,unaff_x22 | 0x8000000000000000);
  func_0x000100e4ae50();
  func_0x000107c61538();
  func_0x000100e4aed8();
  func_0x000100e4ae78();
  func_0x000100e4ae38();
  return;
}



/* Entry: 100e4a680; end: 100e4a697;  */

void FUN_100e4a680(void)

{
  FUN_100e4a424();
  return;
}



/* Entry: 100e4a698; end: 100e4a6a7;  */

undefined1  [16] FUN_100e4a698(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000100e4af04(0x112d3c260,auStack_38,0);
  func_0x000100e4af64();
  auVar1._8_8_ = &PTR_DAT_112d3c268;
  auVar1._0_8_ = 0x112d3c260;
  return auVar1;
}



/* Entry: 100e4a6a8; end: 100e4a6e3;  */

undefined1  [16]
FUN_100e4a6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000100e4af04(param_3,auStack_38,0);
  func_0x000100e4af64();
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 100e4a6e4; end: 100e4a6ff;  */

undefined8 FUN_100e4a6e4(void)

{
  FUN_100e4a3ec();
  return 0xd000000000000031;
}



/* Entry: 100e4a700; end: 100e4a71f;  */

undefined8 FUN_100e4a700(void)

{
  return 0;
}



/* Entry: 100e4a720; end: 100e4a73f; +[_TtC17SCCAdFormat_Swift22AdLocalEditorsMainPage componentPath] */

void FUN_100e4a720(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000004e;
  (*(code *)0x100e4a708)();
  func_0x000107c5fadc(0xd00000000000004e);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e4a740; end: 100e4a75f;  */

void FUN_100e4a740(void)

{
  func_0x000107c61168(&PTR_PTR_11279bd30);
  return;
}



/* Entry: 100e4a760; end: 100e4a777;  */

undefined1  [16] FUN_100e4a760(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010ef13900;
  auVar1._0_8_ = 0xd00000000000003e;
  return auVar1;
}



/* Entry: 100e4a778; end: 100e4a797; +[_TtC17SCCAdFormat_Swift19DynamicAboutAdsView componentPath] */

void FUN_100e4a778(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000003e;
  FUN_100e4a760();
  func_0x000107c5fadc(0xd00000000000003e);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


