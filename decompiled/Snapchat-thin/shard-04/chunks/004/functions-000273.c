/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10343c310; end: 10343c343;  */

void FUN_10343c310(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10343c344; end: 10343c39b; -[SCShoppingLensLauncherScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010343c370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010343c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343c344(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f68f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f68f40));
  return;
}



/* Entry: 10343c39c; end: 10343c3bb;  */

void FUN_10343c39c(void)

{
  func_0x000107c61168(&PTR_PTR_1128dac00);
  return;
}



/* Entry: 10343c3bc; end: 10343c403; -[SCSCShoppingLensLauncherScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343c3bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f68f80;
  func_0x000107c61428(param_1 + _DAT_112f68f80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10343c404; end: 10343c45b; -[SCSCShoppingLensLauncherScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343c404(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f68f80;
  func_0x000107c61428(param_1 + _DAT_112f68f80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10343c45c; end: 10343c533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343c45c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_10343b634();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f68e98) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10343c534);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f68ea0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f68f88);
    *(long **)(unaff_x20 + _DAT_112f68f88) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10343c534; end: 10343c55b; -[SCSCShoppingLensLauncherScopedServicesSaberEntryPoint begin] */

void FUN_10343c534(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10343c45c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10343c55c; end: 10343c6d3;  */

/* WARNING: Possible PIC construction at 0x00010343c5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010343c65c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010343c5c8) */
/* WARNING: Removing unreachable block (ram,0x00010343c660) */
/* WARNING: Removing unreachable block (ram,0x00010343c678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343c55c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f68f88);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10343c6d4; end: 10343c6db;  */

void FUN_10343c6d4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10343c6dc; end: 10343c70f; -[SCSCShoppingLensLauncherScopedServicesSaberEntryPoint end] */

void FUN_10343c6dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10343c55c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10343c710; end: 10343c82f;  */

void FUN_10343c710(long param_1,long param_2,long param_3)

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
                        "ShoppingLensLauncherScopeGraphBridge/SCSCShoppingLensLauncherScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10343c830);
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



/* Entry: 10343c830; end: 10343c8db; -[SCSCShoppingLensLauncherScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10343c830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10343c710(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10343c8dc; end: 10343c93b; -[SCSCShoppingLensLauncherScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343c8dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f68f80,0);
  *(undefined8 *)(param_1 + _DAT_112f68f88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10343c93c; end: 10343c96f;  */

void FUN_10343c93c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10343c970; end: 10343c9a7; -[SCSCShoppingLensLauncherScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343c970(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f68f80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f68f88));
  return;
}



/* Entry: 10343c9a8; end: 10343c9c7;  */

void FUN_10343c9a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128dacd0);
  return;
}



/* Entry: 10343c9c8; end: 10343ca33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343c9c8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10343cdbc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f68fc0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10343ca34; end: 10343ca9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343ca34(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68fc0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10343caa0; end: 10343caff; -[_TtC38SnapEditorScopedFactoryServiceProvider26SCSnapEditorScopedServices init] */

void FUN_10343caa0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorScopedFactoryServiceProvider.SCSnapEditorScopedServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10343cacc);
  (*pcVar1)();
}



/* Entry: 10343cb00; end: 10343cb0f; -[_TtC38SnapEditorScopedFactoryServiceProvider26SCSnapEditorScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343cb00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f68fc0));
  return;
}



/* Entry: 10343cb10; end: 10343cb7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343cb10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110656338;
  func_0x000107c613fc(&UNK_110656338,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10343ce54,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10343cb7c; end: 10343cc17;  */

void FUN_10343cb7c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110656248;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110656248;
  return;
}



/* Entry: 10343cc18; end: 10343cc4f;  */

void FUN_10343cc18(long *param_1)

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



/* Entry: 10343cc50; end: 10343cc57;  */

undefined8 FUN_10343cc50(void)

{
  return 0x1b;
}



/* Entry: 10343cc58; end: 10343cd8b;  */

void FUN_10343cc58(undefined8 *param_1)

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
  puVar1 = &UNK_110656360;
  func_0x000107c613fc(&UNK_110656360,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10343ce2c;
  func_0x00010058fa64(FUN_10343ce2c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10343cd8c; end: 10343cdbb;  */

undefined ** FUN_10343cd8c(void)

{
  return &PTR_DAT_11302bca8;
}



/* Entry: 10343cdbc; end: 10343cddb;  */

void FUN_10343cdbc(void)

{
  func_0x000107c61168(&PTR_PTR_1128dad90);
  return;
}



/* Entry: 10343cddc; end: 10343ce2b;  */

undefined1  [16] FUN_10343cddc(void)

{
  return ZEXT816(0x110656298);
}



/* Entry: 10343ce2c; end: 10343ce53;  */

void FUN_10343ce2c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10343ce54; end: 10343ce67;  */

void FUN_10343ce54(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10343ce68; end: 10343f0fb;  */

void FUN_10343ce68(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  code *pcVar29;
  code *pcVar30;
  code *pcVar31;
  code *pcVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  code *pcVar51;
  code *pcVar52;
  code *pcVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined *puVar60;
  code *pcVar61;
  code *pcVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  char *pcVar66;
  code *pcVar67;
  code *pcVar68;
  undefined8 uVar69;
  code *pcVar70;
  undefined8 uVar71;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 auStack_70 [2];
  
  uVar71 = *param_2;
  func_0x0001000285a8(0x112f69038,&UNK_10dbc6528);
  puVar1 = auStack_70;
  auStack_70[0] = uVar71;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f69040,&UNK_10dbc6530);
  func_0x000107c6157c(puVar1);
  pcVar2 = FUN_10343f268;
  func_0x0001000823a8(FUN_10343f268,puVar1);
  func_0x000100082720("LensCarouselLayoutSnapEditorServiceProviderWrapperServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f69048,&UNK_10dbc6880);
  func_0x000107c6157c(puVar1);
  uVar71 = 0x10343f270;
  func_0x0001000823a8(0x10343f270,puVar1);
  func_0x000100082720("LensCarouselSnapEditorActivatorDependenciesServiceProviderWrapperServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x112f69050,&UNK_10dbc6540);
  func_0x000107c6157c(puVar1);
  uVar3 = 0x10343f278;
  func_0x0001000823a8(0x10343f278,puVar1);
  pcVar4 = 
  "LensCarouselSnapEditorLensFeaturesVisibilityControllerServiceProviderWrapperServiceProvider";
  func_0x000100082720("LensCarouselSnapEditorLensFeaturesVisibilityControllerServiceProviderWrapperServiceProvider"
                      ,0x5b,2);
  FUN_10344ce40();
  pcVar5 = "AdAttachmentHandlerScopeExposerSubjectServiceProvider";
  func_0x000100082720("AdAttachmentHandlerScopeExposerSubjectServiceProvider",0x35,2);
  FUN_10344ce8c();
  pcVar6 = "PlusSubscribeScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusSubscribeScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_10344ced8();
  pcVar7 = "SCAdReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCAdReportScopeExposerSubjectServiceProvider",0x2c,2);
  func_0x00010344cf58();
  pcVar8 = "SCLensCarouselScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensCarouselScopeExposerSubjectServiceProvider",0x30,2);
  FUN_10344cfa4();
  func_0x000100082720("SCMemoriesPickerV2ScopeExposerSubjectServiceProvider",0x34,2);
  func_0x0001000285a8(0x112f69058,&UNK_10dbc7490);
  puVar60 = &UNK_110656410;
  func_0x000107c613fc(&UNK_110656410,0x40,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_3;
  *(undefined8 *)(puVar60 + 0x20) = param_4;
  *(undefined8 *)(puVar60 + 0x28) = param_5;
  *(undefined8 *)(puVar60 + 0x30) = param_6;
  *(undefined8 *)(puVar60 + 0x38) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar9 = 0x10343f280;
  func_0x0001000823a8(0x10343f280,puVar60);
  func_0x000100082720("SCLensProcessingSnapEditorIntegrationEntryPointWrapperServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f69060,&UNK_10dbc6550);
  func_0x000107c6157c(puVar1);
  uVar10 = 0x10343f28c;
  func_0x0001000823a8(0x10343f28c,puVar1);
  func_0x000100082720("SCLensUIUpdateOnSnapEditorServiceProviderWrapperServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f69068,&UNK_10dbc77e0);
  puVar60 = &UNK_110656438;
  func_0x000107c613fc(&UNK_110656438,0x40,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_6;
  *(undefined8 *)(puVar60 + 0x20) = param_8;
  *(undefined8 *)(puVar60 + 0x28) = param_9;
  *(undefined8 *)(puVar60 + 0x30) = param_10;
  *(undefined8 *)(puVar60 + 0x38) = param_11;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  uVar11 = 0x10343f294;
  func_0x0001000823a8(0x10343f294,puVar60);
  func_0x000100082720("SCSnapEditorFilterDataServiceProviderWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f69070,&UNK_10dbc6560);
  func_0x000107c6157c(uVar71);
  uVar12 = 0x10343f2a0;
  func_0x0001000823a8(0x10343f2a0,uVar71);
  func_0x000100082720("SCSnapEditorScopedLensCarouselInScopeActivatorDependenciesServicesServiceProvider"
                      ,0x51,2);
  func_0x0001000285a8(0x112f69078,&UNK_10dbc6568);
  func_0x000107c6157c(pcVar2);
  uVar13 = 0x10343f2a8;
  func_0x0001000823a8(0x10343f2a8,pcVar2);
  func_0x000100082720("SCSnapEditorScopedLensCarouselLayoutServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f69080,&UNK_10dbc6570);
  func_0x000107c6157c(uVar3);
  uVar14 = 0x10343f2b0;
  func_0x0001000823a8(0x10343f2b0,uVar3);
  func_0x000100082720("SCSnapEditorScopedLensFeaturesVisibilityControllerServicesServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112f69088,&UNK_10dbc6578);
  func_0x000107c6157c(uVar10);
  uVar15 = 0x10343f2b8;
  func_0x0001000823a8(0x10343f2b8,uVar10);
  func_0x000100082720("SCSnapEditorScopedLensUIUpdateServicesServiceProvider",0x35,2);
  pcVar16 = pcVar4;
  FUN_10344ce80();
  func_0x000100082720("AdAttachmentHandlerScopeExposerObservableServiceProvider",0x38,2);
  pcVar17 = pcVar5;
  FUN_10344cecc();
  func_0x000100082720("PlusSubscribeScopeExposerObservableServiceProvider",0x32,2);
  pcVar18 = pcVar6;
  FUN_10344cf18();
  func_0x000100082720("SCAdReportScopeExposerObservableServiceProvider",0x2f,2);
  pcVar19 = pcVar7;
  FUN_10344cf98();
  func_0x000100082720("SCLensCarouselScopeExposerObservableServiceProvider",0x33,2);
  pcVar20 = pcVar8;
  FUN_10344d030();
  func_0x000100082720("SCMemoriesPickerV2ScopeExposerObservableServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar21 = FUN_10343cc18;
  func_0x0001000823a8(FUN_10343cc18,0);
  func_0x000100082720("SCSnapEditorScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f69090,&UNK_10dbc7d20);
  puVar60 = &UNK_110656460;
  func_0x000107c613fc(&UNK_110656460,0x20,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_12;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_12);
  uVar22 = 0x10343f2c0;
  func_0x0001000823a8(0x10343f2c0,puVar60);
  func_0x000100082720("SnapEditorCTLensToolSessionManagerServiceProviderWrapperServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f69098,&UNK_10dbc6580);
  func_0x000107c6157c(uVar22);
  uVar23 = 0x10343f2c8;
  func_0x0001000823a8(0x10343f2c8,uVar22);
  func_0x000100082720("SnapEditorCTLensToolSessionManagerServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f690a0,&UNK_10dbc7ef0);
  puVar60 = &UNK_110656488;
  func_0x000107c613fc(&UNK_110656488,0x20,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = uVar23;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar23);
  uVar24 = 0x10343f2d0;
  func_0x0001000823a8(0x10343f2d0,puVar60);
  func_0x000100082720("SnapEditorCTLensToolSessionResetEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f690a8,&UNK_10dbc6590);
  puVar60 = &UNK_1106564b0;
  func_0x000107c613fc(&UNK_1106564b0,0x40,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_13;
  *(undefined8 *)(puVar60 + 0x20) = param_14;
  *(undefined8 *)(puVar60 + 0x28) = param_15;
  *(undefined8 *)(puVar60 + 0x30) = param_11;
  *(undefined8 *)(puVar60 + 0x38) = uVar13;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(uVar13);
  uVar25 = 0x10343f2d8;
  func_0x0001000823a8(0x10343f2d8,puVar60);
  func_0x000100082720("SnapEditorFilterIconServiceProviderWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f690b0,&UNK_10dbc8230);
  puVar60 = &UNK_1106564d8;
  func_0x000107c613fc(&UNK_1106564d8,0x20,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_16;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_16);
  uVar26 = 0x10343f2e4;
  func_0x0001000823a8(0x10343f2e4,puVar60);
  func_0x000100082720("SnapEditorLensCarouselSchedulerServiceProviderWrapperServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f690b8,&UNK_10dbc65a0);
  puVar60 = &UNK_110656500;
  func_0x000107c613fc(&UNK_110656500,0x20,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  uVar27 = 0x10343f2ec;
  func_0x0001000823a8(0x10343f2ec,puVar60);
  func_0x000100082720("SnapEditorMemoriesLensWorkflowEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f690c0,&UNK_10dbc8f30);
  puVar60 = &UNK_110656528;
  func_0x000107c613fc(&UNK_110656528,0x20,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_17;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_17);
  uVar28 = 0x10343f2f4;
  func_0x0001000823a8(0x10343f2f4,puVar60);
  func_0x000100082720("SnapEditorScopedLensCarouselSettingsServiceProviderWrapperServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112f690c8,&UNK_10dbc65b0);
  puVar60 = &UNK_110656550;
  func_0x000107c613fc(&UNK_110656550,0x58,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_18;
  *(undefined8 *)(puVar60 + 0x20) = param_19;
  *(undefined8 *)(puVar60 + 0x28) = param_20;
  *(undefined8 *)(puVar60 + 0x30) = param_21;
  *(undefined8 *)(puVar60 + 0x38) = param_22;
  *(undefined8 *)(puVar60 + 0x40) = param_3;
  *(undefined8 *)(puVar60 + 0x48) = param_23;
  *(char **)(puVar60 + 0x50) = pcVar17;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(pcVar17);
  pcVar29 = FUN_10343f2fc;
  func_0x0001000823a8(FUN_10343f2fc,puVar60);
  func_0x000100082720("SnapEditorScopedLensPlusPaywallPresentationServiceProviderWrapperServiceProvider"
                      ,0x50,2);
  func_0x0001000285a8(0x112f690d0,&UNK_10dbc9570);
  puVar60 = &UNK_110656578;
  func_0x000107c613fc(&UNK_110656578,0x40,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_24;
  *(undefined8 *)(puVar60 + 0x20) = param_25;
  *(undefined8 *)(puVar60 + 0x28) = param_26;
  *(undefined8 *)(puVar60 + 0x30) = param_27;
  *(char **)(puVar60 + 0x38) = pcVar18;
  func_0x000107c6157c();
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(pcVar18);
  pcVar30 = FUN_10343f37c;
  func_0x0001000823a8(FUN_10343f37c,puVar60);
  func_0x000100082720("SnapEditorScopedSponsoredLensInfoActionSheetNavigationServiceProviderWrapperServiceProvider"
                      ,0x5b,2);
  func_0x0001000285a8(0x112f690d8,&UNK_10dbc65c0);
  puVar60 = &UNK_1106565a0;
  func_0x000107c613fc(&UNK_1106565a0,0x60,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_3;
  *(undefined8 *)(puVar60 + 0x20) = param_25;
  *(undefined8 *)(puVar60 + 0x28) = param_28;
  *(undefined8 *)(puVar60 + 0x30) = param_29;
  *(undefined8 *)(puVar60 + 0x38) = param_26;
  *(undefined8 *)(puVar60 + 0x40) = param_30;
  *(undefined8 *)(puVar60 + 0x48) = param_31;
  *(undefined8 *)(puVar60 + 0x50) = param_32;
  *(char **)(puVar60 + 0x58) = pcVar16;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(pcVar16);
  pcVar31 = FUN_10343f39c;
  func_0x0001000823a8(FUN_10343f39c,puVar60);
  func_0x000100082720("SponsoredLensSnapEditorCTAImplEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f690e0,&UNK_10dbc65c8);
  func_0x000107c6157c(uVar11);
  pcVar32 = FUN_10343f3d0;
  func_0x0001000823a8(FUN_10343f3d0,uVar11);
  func_0x000100082720("SCSnapEditorFilterDataProviderServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f690e8,&UNK_10dbc65d0);
  func_0x000107c6157c(pcVar31);
  uVar33 = 0x10343f3d8;
  func_0x0001000823a8(0x10343f3d8,pcVar31);
  func_0x000100082720("SCSnapEditorScopedLensCTAHandlingServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f690f0,&UNK_10dbc65d8);
  func_0x000107c6157c(uVar26);
  uVar34 = 0x10343f3e0;
  func_0x0001000823a8(0x10343f3e0,uVar26);
  func_0x000100082720("SCSnapEditorScopedLensCarouselSchedulerServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f690f8,&UNK_10dbc65e0);
  func_0x000107c6157c(uVar28);
  uVar35 = 0x10343f3e8;
  func_0x0001000823a8(0x10343f3e8,uVar28);
  func_0x000100082720("SCSnapEditorScopedLensCarouselSettingsServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f69100,&UNK_10dbc65e8);
  func_0x000107c6157c(pcVar29);
  uVar36 = 0x10343f3f0;
  func_0x0001000823a8(0x10343f3f0,pcVar29);
  func_0x000100082720("SCSnapEditorScopedLensPlusPaywallPresentationServicesServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f69108,&UNK_10dbc65f0);
  func_0x000107c6157c(uVar25);
  uVar37 = 0x10343f3f8;
  func_0x0001000823a8(0x10343f3f8,uVar25);
  func_0x000100082720("SCSnapEditorScopedPreviewFilterIconProviderServiceServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f69110,&UNK_10dbc65f8);
  func_0x000107c6157c(pcVar30);
  uVar38 = 0x10343f400;
  func_0x0001000823a8(0x10343f400,pcVar30);
  func_0x000100082720("SCSnapEditorScopedSponsoredLensInfoActionSheetNavigationServicesServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112f69118,&UNK_10dbc6600);
  puVar60 = &UNK_1106565c8;
  func_0x000107c613fc(&UNK_1106565c8,0x38,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_21;
  *(undefined8 *)(puVar60 + 0x20) = uVar36;
  *(undefined8 *)(puVar60 + 0x28) = param_33;
  *(undefined8 *)(puVar60 + 0x30) = param_19;
  func_0x000107c6157c();
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(uVar36);
  func_0x000107c6157c(param_33);
  uVar39 = 0x10343f408;
  func_0x0001000823a8(0x10343f408,puVar60);
  func_0x000100082720("SnapEditorLensPlusPreviewServicesServiceProviderWrapperServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f69120,&UNK_10dbc8930);
  puVar60 = &UNK_1106565f0;
  func_0x000107c613fc(&UNK_1106565f0,0x28,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_16;
  *(undefined8 *)(puVar60 + 0x20) = uVar35;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(uVar35);
  uVar40 = 0x10343f418;
  func_0x0001000823a8(0x10343f418,puVar60);
  func_0x000100082720("SnapEditorScopedLensCarouselPerformanceLoggerServiceProviderWrapperServiceProvider"
                      ,0x52,2);
  func_0x0001000285a8(0x112f69128,&UNK_10dbc6610);
  puVar60 = &UNK_110656618;
  func_0x000107c613fc(&UNK_110656618,0x28,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = uVar35;
  *(undefined8 *)(puVar60 + 0x20) = param_34;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar35);
  func_0x000107c6157c(param_34);
  uVar41 = 0x10343f424;
  func_0x0001000823a8(0x10343f424,puVar60);
  func_0x000100082720("SnapEditorScopedLensCarouselSessionServiceProviderWrapperServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112f69130,&UNK_10dbc9350);
  puVar60 = &UNK_110656640;
  func_0x000107c613fc(&UNK_110656640,0x30,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_24;
  *(undefined8 *)(puVar60 + 0x20) = uVar33;
  *(undefined8 *)(puVar60 + 0x28) = param_11;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(uVar33);
  uVar42 = 0x10343f430;
  func_0x0001000823a8(0x10343f430,puVar60);
  func_0x000100082720("SnapEditorScopedSponsoredLensCTAPresentingServiceProviderWrapperServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112f69138,&UNK_10dbc6620);
  func_0x000107c6157c(uVar40);
  uVar43 = 0x10343f43c;
  func_0x0001000823a8(0x10343f43c,uVar40);
  func_0x000100082720("SCSnapEditorScopedLensCarouselPerformanceLoggerServicesServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f69140,&UNK_10dbc6628);
  func_0x000107c6157c(uVar41);
  uVar44 = 0x10343f444;
  func_0x0001000823a8(0x10343f444,uVar41);
  func_0x000100082720("SCSnapEditorScopedLensCarouselSessionServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f69148,&UNK_10dbc6630);
  func_0x000107c6157c(uVar39);
  uVar45 = 0x10343f44c;
  func_0x0001000823a8(0x10343f44c,uVar39);
  func_0x000100082720("SCSnapEditorScopedLensPlusPreviewServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f69150,&UNK_10dbc6638);
  func_0x000107c6157c(uVar42);
  uVar46 = 0x10343f454;
  func_0x0001000823a8(0x10343f454,uVar42);
  func_0x000100082720("SCSnapEditorScopedSponsoredLensCTAPresentingServicesServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f69158,&UNK_10dbc6640);
  puVar60 = &UNK_110656668;
  func_0x000107c613fc(&UNK_110656668,0x48,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_35;
  *(undefined8 *)(puVar60 + 0x20) = param_36;
  *(undefined8 *)(puVar60 + 0x28) = uVar46;
  *(undefined8 *)(puVar60 + 0x30) = uVar38;
  *(undefined8 *)(puVar60 + 0x38) = uVar45;
  *(undefined8 *)(puVar60 + 0x40) = param_24;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(uVar46);
  func_0x000107c6157c(uVar38);
  func_0x000107c6157c(uVar45);
  uVar47 = 0x10343f45c;
  func_0x0001000823a8(0x10343f45c,puVar60);
  func_0x000100082720("SCSnapEditorUCOViewServiceProviderWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f69160,&UNK_10dbc6648);
  func_0x000107c6157c(uVar47);
  uVar48 = 0x10343f470;
  func_0x0001000823a8(0x10343f470,uVar47);
  func_0x000100082720("SCSnapEditorUCOViewServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112f69168,&UNK_10dbc6650);
  puVar60 = &UNK_110656690;
  func_0x000107c613fc(&UNK_110656690,0x20,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = uVar44;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar44);
  uVar49 = 0x10343f478;
  func_0x0001000823a8(0x10343f478,puVar60);
  func_0x000100082720("SnapEditorScopedLensCarouselEventsHandlingServiceProviderWrapperServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112f69170,&UNK_10dbc6658);
  func_0x000107c6157c(uVar49);
  uVar50 = 0x10343f480;
  func_0x0001000823a8(0x10343f480,uVar49);
  func_0x000100082720("SCSnapEditorScopedLensCarouselEventsHandlingServicesServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f69178,&UNK_10dbc6660);
  puVar60 = &UNK_1106566b8;
  func_0x000107c613fc(&UNK_1106566b8,0x68,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = param_37;
  *(undefined8 *)(puVar60 + 0x20) = param_36;
  *(undefined8 *)(puVar60 + 0x28) = param_25;
  *(undefined8 *)(puVar60 + 0x30) = param_4;
  *(undefined8 *)(puVar60 + 0x38) = param_13;
  *(undefined8 *)(puVar60 + 0x40) = param_38;
  *(undefined8 *)(puVar60 + 0x48) = param_24;
  *(undefined8 *)(puVar60 + 0x50) = param_39;
  *(undefined8 *)(puVar60 + 0x58) = uVar48;
  *(code **)(puVar60 + 0x60) = pcVar32;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(uVar48);
  func_0x000107c6157c(pcVar32);
  pcVar51 = FUN_10343f488;
  func_0x0001000823a8(FUN_10343f488,puVar60);
  func_0x000100082720("SCSnapEditorSwipeFiltersServicesProviderWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f69180,&UNK_10dbc6668);
  func_0x000107c6157c(pcVar51);
  pcVar52 = FUN_10343f4c4;
  func_0x0001000823a8(FUN_10343f4c4,pcVar51);
  func_0x000100082720("SCSnapEditorSwipeFiltersServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112f69188,&UNK_10dbc6670);
  puVar60 = &UNK_1106566e0;
  func_0x000107c613fc(&UNK_1106566e0,0x28,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(code **)(puVar60 + 0x18) = pcVar52;
  *(undefined8 *)(puVar60 + 0x20) = uVar13;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(pcVar52);
  pcVar53 = FUN_10343f500;
  func_0x0001000823a8(FUN_10343f500,puVar60);
  func_0x000100082720("SnapEditorScopedLensCarouselPreviewDependencyServiceProviderWrapperServiceProvider"
                      ,0x52,2);
  func_0x0001000285a8(0x112f69190,&UNK_10dbc6aa0);
  puVar60 = &UNK_110656708;
  func_0x000107c613fc(&UNK_110656708,0x30,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(code **)(puVar60 + 0x18) = pcVar52;
  *(undefined8 *)(puVar60 + 0x20) = param_40;
  *(undefined8 *)(puVar60 + 0x28) = uVar37;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar52);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(uVar37);
  uVar54 = 0x10343f50c;
  func_0x0001000823a8(0x10343f50c,puVar60);
  func_0x000100082720("LensCarouselSnapEditorDataProviderControllingServiceProviderWrapperServiceProvider"
                      ,0x52,2);
  func_0x0001000285a8(0x112f69198,&UNK_10dbc6680);
  func_0x000107c6157c(uVar54);
  uVar55 = 0x10343f518;
  func_0x0001000823a8(0x10343f518,uVar54);
  func_0x000100082720("SCSnapEditorScopedLensCarouselDataProviderControllingServicesServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112f691a0,&UNK_10dbc6688);
  func_0x000107c6157c(pcVar53);
  uVar56 = 0x10343f520;
  func_0x0001000823a8(0x10343f520,pcVar53);
  func_0x000100082720("SCSnapEditorScopedLensCarouselPreviewDependencyServicesServiceProvider",0x46,
                      2);
  uVar57 = uVar50;
  func_0x000103692408(uVar50,uVar55,uVar12);
  func_0x000100082720("OpaqueSnapEditorScopedLensCarouselServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f691a8,&UNK_10dbc6690);
  puVar60 = &UNK_110656730;
  func_0x000107c613fc(&UNK_110656730,0x70,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = uVar56;
  *(undefined8 *)(puVar60 + 0x20) = param_16;
  *(undefined8 *)(puVar60 + 0x28) = uVar34;
  *(undefined8 *)(puVar60 + 0x30) = uVar35;
  *(undefined8 *)(puVar60 + 0x38) = uVar14;
  *(undefined8 *)(puVar60 + 0x40) = uVar13;
  *(undefined8 *)(puVar60 + 0x48) = uVar43;
  *(undefined8 *)(puVar60 + 0x50) = uVar33;
  *(undefined8 *)(puVar60 + 0x58) = param_41;
  *(undefined8 *)(puVar60 + 0x60) = uVar57;
  *(char **)(puVar60 + 0x68) = pcVar19;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(uVar35);
  func_0x000107c6157c(uVar33);
  func_0x000107c6157c(uVar56);
  func_0x000107c6157c(uVar34);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar43);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(uVar57);
  func_0x000107c6157c(pcVar19);
  uVar58 = 0x10343f528;
  func_0x0001000823a8(0x10343f528,puVar60);
  func_0x000100082720("SCLensInSnapEditorScopeEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f691b0,&UNK_10dbc6698);
  func_0x000107c6157c(uVar58);
  uVar59 = 0x10343f534;
  func_0x0001000823a8(0x10343f534,uVar58);
  func_0x000100082720("SCSnapEditorScopedLensCarouselManagementServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f691b8,&UNK_10dbc66a0);
  puVar60 = &UNK_110656758;
  func_0x000107c613fc(&UNK_110656758,0x70,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = uVar59;
  *(undefined8 *)(puVar60 + 0x20) = uVar44;
  *(undefined8 *)(puVar60 + 0x28) = uVar14;
  *(undefined8 *)(puVar60 + 0x30) = uVar56;
  *(code **)(puVar60 + 0x38) = pcVar52;
  *(undefined8 *)(puVar60 + 0x40) = param_13;
  *(undefined8 *)(puVar60 + 0x48) = uVar37;
  *(undefined8 *)(puVar60 + 0x50) = param_40;
  *(undefined8 *)(puVar60 + 0x58) = param_25;
  *(undefined8 *)(puVar60 + 0x60) = param_16;
  *(undefined8 *)(puVar60 + 0x68) = param_42;
  func_0x000107c6157c();
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(uVar44);
  func_0x000107c6157c(pcVar52);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(uVar37);
  func_0x000107c6157c(uVar56);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar59);
  func_0x000107c6157c(param_42);
  pcVar61 = FUN_10343f5b8;
  func_0x0001000823a8(FUN_10343f5b8,puVar60);
  func_0x000100082720("LensCarouselSnapEditorServicesEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f691c0,&UNK_10dbc70c0);
  puVar60 = &UNK_110656780;
  func_0x000107c613fc(&UNK_110656780,0x30,7);
  *(undefined8 **)(puVar60 + 0x10) = puVar1;
  *(undefined8 *)(puVar60 + 0x18) = uVar59;
  *(undefined8 *)(puVar60 + 0x20) = param_21;
  *(undefined8 *)(puVar60 + 0x28) = uVar36;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(uVar36);
  func_0x000107c6157c(uVar59);
  pcVar62 = FUN_10343f640;
  func_0x0001000823a8(FUN_10343f640,puVar60);
  func_0x000100082720("LensPreviewSnapEditorActionInterceptionServiceProviderWrapperServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112f691c8,&UNK_10dbc66b0);
  func_0x000107c6157c(pcVar61);
  uVar63 = 0x10343f64c;
  func_0x0001000823a8(0x10343f64c,pcVar61);
  func_0x000100082720("SCSnapEditorCarouselServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112e7d1a8,&UNK_10da879f8);
  func_0x000107c6157c(pcVar62);
  uVar64 = 0x10343f654;
  func_0x0001000823a8(0x10343f654,pcVar62);
  func_0x000100082720("LensPreviewActionInterceptionServicesServiceProvider",0x34,2);
  FUN_1036a3a54(param_43,param_44,uVar64,param_45,param_46,param_23,param_47,param_11,param_48,
                param_49,param_50,param_51,param_52,param_53,param_54,param_55,param_14,param_33,
                param_56,param_21,param_4,param_57,param_58,param_59,param_60,param_61,param_62,
                param_19,param_36,param_63,param_64,param_65,puVar1,param_66,param_67,param_68,
                param_69,param_25,param_70,pcVar17,pcVar20,param_71,in_stack_000001f0,uVar23,
                param_12,in_stack_000001f8,in_stack_00000200);
  func_0x000100082720("SnapEditorSaberPluginScopedFactoryServiceProvider",0x31,2);
  uVar65 = param_43;
  func_0x000103eca150();
  func_0x000100082720("SCSnapEditorPluginSaberServiceServiceProvider",0x2d,2);
  pcVar66 = pcVar4;
  FUN_10344c3b8(pcVar4,uVar57,pcVar5,pcVar6,pcVar7,pcVar8,uVar63,pcVar32,uVar65,uVar33,uVar55,uVar50
                ,uVar12,uVar13,uVar59,uVar56,uVar44,uVar35,uVar14,uVar15,uVar37,uVar46,pcVar52,
                uVar48,uVar23);
  func_0x000100082720("SnapEditorScopeGraphBridgeServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f691d0,&UNK_10dbc66c0);
  puVar60 = &UNK_1106567a8;
  func_0x000107c613fc(&UNK_1106567a8,0x100,7);
  *(code **)(puVar60 + 0x10) = pcVar2;
  *(undefined8 *)(puVar60 + 0x18) = uVar71;
  *(undefined8 *)(puVar60 + 0x20) = uVar54;
  *(undefined8 *)(puVar60 + 0x28) = uVar3;
  *(code **)(puVar60 + 0x30) = pcVar61;
  *(code **)(puVar60 + 0x38) = pcVar62;
  *(undefined8 *)(puVar60 + 0x40) = uVar58;
  *(undefined8 *)(puVar60 + 0x48) = uVar9;
  *(undefined8 *)(puVar60 + 0x50) = uVar10;
  *(undefined8 *)(puVar60 + 0x58) = uVar11;
  *(undefined8 **)(puVar60 + 0x60) = puVar1;
  *(code **)(puVar60 + 0x68) = pcVar21;
  *(code **)(puVar60 + 0x70) = pcVar51;
  *(undefined8 *)(puVar60 + 0x78) = uVar47;
  *(undefined8 *)(puVar60 + 0x80) = uVar22;
  *(undefined8 *)(puVar60 + 0x88) = uVar24;
  *(undefined8 *)(puVar60 + 0x90) = uVar25;
  *(undefined8 *)(puVar60 + 0x98) = uVar26;
  *(undefined8 *)(puVar60 + 0xa0) = uVar39;
  *(undefined8 *)(puVar60 + 0xa8) = uVar27;
  *(char **)(puVar60 + 0xb0) = pcVar66;
  *(undefined8 *)(puVar60 + 0xb8) = uVar49;
  *(undefined8 *)(puVar60 + 0xc0) = uVar40;
  *(code **)(puVar60 + 200) = pcVar53;
  *(undefined8 *)(puVar60 + 0xd0) = uVar41;
  *(undefined8 *)(puVar60 + 0xd8) = uVar28;
  *(code **)(puVar60 + 0xe0) = pcVar29;
  *(undefined8 *)(puVar60 + 0xe8) = uVar42;
  *(code **)(puVar60 + 0xf0) = pcVar30;
  *(code **)(puVar60 + 0xf8) = pcVar31;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar71);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(pcVar31);
  func_0x000107c6157c(uVar26);
  func_0x000107c6157c(uVar28);
  func_0x000107c6157c(pcVar29);
  func_0x000107c6157c(uVar25);
  func_0x000107c6157c(pcVar30);
  func_0x000107c6157c(uVar40);
  func_0x000107c6157c(uVar41);
  func_0x000107c6157c(uVar39);
  func_0x000107c6157c(uVar42);
  func_0x000107c6157c(uVar47);
  func_0x000107c6157c(uVar49);
  func_0x000107c6157c(pcVar51);
  func_0x000107c6157c(uVar54);
  func_0x000107c6157c(pcVar53);
  func_0x000107c6157c(uVar58);
  func_0x000107c6157c(pcVar61);
  func_0x000107c6157c(pcVar62);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar21);
  func_0x000107c6157c(uVar24);
  func_0x000107c6157c(uVar27);
  func_0x000107c6157c(pcVar66);
  pcVar67 = FUN_10343f65c;
  func_0x0001000823a8(FUN_10343f65c,puVar60);
  func_0x000100082720("SCSnapEditorScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f68fc8,&UNK_10dbc62f0);
  func_0x000107c6157c(pcVar67);
  pcVar68 = FUN_10343f6b8;
  func_0x0001000823a8(FUN_10343f6b8,pcVar67);
  func_0x000100082720("SCSnapEditorScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112f68fb8,&UNK_10dbc62e0);
  func_0x000107c6157c(pcVar68);
  uVar69 = 0x10343f6c0;
  func_0x0001000823a8(0x10343f6c0,pcVar68);
  func_0x000100082720("SCSnapEditorScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar60 = &UNK_1106567d0;
  func_0x000107c613fc(&UNK_1106567d0,0x20,7);
  *(undefined8 *)(puVar60 + 0x10) = uVar69;
  *(code **)(puVar60 + 0x18) = pcVar21;
  func_0x000107c6157c(pcVar21);
  pcVar70 = FUN_10343f6f4;
  func_0x0001000823a8(FUN_10343f6f4,puVar60);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar71);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(pcVar21);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(uVar25);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(uVar27);
  func_0x000107c61574(uVar28);
  func_0x000107c61574(pcVar29);
  func_0x000107c61574(pcVar30);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(pcVar32);
  func_0x000107c61574(uVar33);
  func_0x000107c61574(uVar34);
  func_0x000107c61574(uVar35);
  func_0x000107c61574(uVar36);
  func_0x000107c61574(uVar37);
  func_0x000107c61574(uVar38);
  func_0x000107c61574(uVar39);
  func_0x000107c61574(uVar40);
  func_0x000107c61574(uVar41);
  func_0x000107c61574(uVar42);
  func_0x000107c61574(uVar43);
  func_0x000107c61574(uVar44);
  func_0x000107c61574(uVar45);
  func_0x000107c61574(uVar46);
  func_0x000107c61574(uVar47);
  func_0x000107c61574(uVar48);
  func_0x000107c61574(uVar49);
  func_0x000107c61574(uVar50);
  func_0x000107c61574(pcVar51);
  func_0x000107c61574(pcVar52);
  func_0x000107c61574(pcVar53);
  func_0x000107c61574(uVar54);
  func_0x000107c61574(uVar55);
  func_0x000107c61574(uVar56);
  func_0x000107c61574(uVar57);
  func_0x000107c61574(uVar58);
  func_0x000107c61574(uVar59);
  func_0x000107c61574(pcVar61);
  func_0x000107c61574(pcVar62);
  func_0x000107c61574(uVar63);
  func_0x000107c61574(uVar64);
  func_0x000107c61574(param_43);
  func_0x000107c61574(uVar65);
  func_0x000107c61574(pcVar66);
  func_0x000107c61574(pcVar67);
  func_0x000107c61574(pcVar68);
  func_0x000100082720("SCSnapEditorScopeEntryPointProvider",0x23,2);
  *param_1 = pcVar70;
  return;
}



/* Entry: 10343f0fc; end: 10343f267;  */

void FUN_10343f0fc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10343ce68(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 10343f268; end: 10343f2fb;  */

void FUN_10343f268(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_10343f93c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10368f234();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10368f100();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10343f2fc; end: 10343f37b;  */

void FUN_10343f2fc(void)

{
  long unaff_x20;
  
  FUN_103447838(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10343f37c; end: 10343f39b;  */

void FUN_10343f37c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_103448988();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_70;
  *(undefined8 *)(lVar1 + 0x28) = uStack_78;
  *(undefined8 *)(lVar1 + 0x30) = uStack_80;
  *(undefined8 *)(lVar1 + 0x38) = uStack_88;
  func_0x0001000285a8(0x112e4cd30,&UNK_10da47080);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x18) = puVar7;
  FUN_10349d20c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar6;
  FUN_10349ce74();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_10349ce88();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_90);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 10343f39c; end: 10343f3cf;  */

void FUN_10343f39c(void)

{
  long unaff_x20;
  
  FUN_103448a30(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10343f3d0; end: 10343f487;  */

void FUN_10343f3d0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10343f488; end: 10343f4c3;  */

void FUN_10343f488(void)

{
  long unaff_x20;
  
  FUN_103443684(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 10343f4c4; end: 10343f4cb;  */

void FUN_10343f4c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10343f4cc; end: 10343f4ff;  */

void FUN_10343f4cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10343f500; end: 10343f53b;  */

void FUN_10343f500(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_103447050();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_58;
  FUN_1034604bc(0);
  func_0x000107c613fc();
  uVar2 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  func_0x000103460198(uStack_48,uVar2,uStack_58);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  FUN_1034602b0();
  *(undefined8 *)(lVar1 + 0x28) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 10343f53c; end: 10343f5b7;  */

void FUN_10343f53c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10343f5b8; end: 10343f5c3;  */

void FUN_10343f5b8(void)

{
  long unaff_x20;
  
  FUN_10344041c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 10343f5c4; end: 10343f63f;  */

void FUN_10343f5c4(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 10343f640; end: 10343f65b;  */

void FUN_10343f640(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_103440e6c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10345e50c(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x00010345e018();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10345e144();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10343f65c; end: 10343f6b7;  */

void FUN_10343f65c(void)

{
  long unaff_x20;
  
  FUN_1034492a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8));
  return;
}



/* Entry: 10343f6b8; end: 10343f6c7;  */

void FUN_10343f6b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112f69020,&UNK_10dbc64d0);
  uVar1 = 0;
  func_0x00010036d104();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10343f6c8; end: 10343f6f3;  */

void FUN_10343f6c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10343f6f4; end: 10343f6fb;  */

void FUN_10343f6f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110656248;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110656248;
  return;
}



/* Entry: 10343f6fc; end: 10343f793;  */

void FUN_10343f6fc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_10343f93c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10368f234();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10368f100();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10343f794; end: 10343f7ff;  */

long FUN_10343f794(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10368f234();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  FUN_10368f100();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 10343f800; end: 10343f82b;  */

void FUN_10343f800(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10343f82c; end: 10343f87f;  */

void FUN_10343f82c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10343f880; end: 10343f887;  */

undefined8 FUN_10343f880(void)

{
  return 0x1b;
}



/* Entry: 10343f888; end: 10343f90b;  */

void FUN_10343f888(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x10343f98c,param_2,FUN_10343f990,param_2,0x10343f9b8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10343f90c; end: 10343f93b;  */

undefined ** FUN_10343f90c(void)

{
  return &PTR_DAT_11302bca8;
}



/* Entry: 10343f93c; end: 10343f95b;  */

void FUN_10343f93c(void)

{
  func_0x000107c61168(&PTR_PTR_112f69240);
  return;
}



/* Entry: 10343f95c; end: 10343f98f;  */

undefined1  [16] FUN_10343f95c(void)

{
  return ZEXT816(0x110656828);
}



/* Entry: 10343f990; end: 10343f9e3;  */

void FUN_10343f990(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10343f9e4; end: 10343fad7;  */

void FUN_10343f9e4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10343fc14();
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010345ba98(0);
  func_0x000107c613fc();
  func_0x00010345b934(uStack_38,uVar1);
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  func_0x00010345ba64();
  *(undefined8 *)(param_2 + 0x18) = uStack_38;
  *param_1 = param_2;
  return;
}



/* Entry: 10343fad8; end: 10343fb03;  */

void FUN_10343fad8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10343fb04; end: 10343fb57;  */

void FUN_10343fb04(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10343fb58; end: 10343fb5f;  */

undefined8 FUN_10343fb58(void)

{
  return 0x1b;
}



/* Entry: 10343fb60; end: 10343fbe3;  */

void FUN_10343fb60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x10343fc64,param_2,FUN_10343fc68,param_2,0x10343fc90,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10343fbe4; end: 10343fc13;  */

undefined ** FUN_10343fbe4(void)

{
  return &PTR_DAT_11302bca8;
}



/* Entry: 10343fc14; end: 10343fc33;  */

void FUN_10343fc14(void)

{
  func_0x000107c61168(&PTR_PTR_112f69310);
  return;
}



/* Entry: 10343fc34; end: 10343fc67;  */

undefined1  [16] FUN_10343fc34(void)

{
  return ZEXT816(0x1106568c8);
}



/* Entry: 10343fc68; end: 10343fcbb;  */

void FUN_10343fc68(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10343fcbc; end: 10343ff47;  */

void FUN_10343fcbc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_10344009c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  func_0x00010345c1b8(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x00010345bd84();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_10345bff0();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10343ff48; end: 10343ff8b;  */

void FUN_10343ff48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10343ff8c; end: 10343ffdf;  */

void FUN_10343ff8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10343ffe0; end: 10343ffe7;  */

undefined8 FUN_10343ffe0(void)

{
  return 0x1b;
}



/* Entry: 10343ffe8; end: 10344006b;  */

void FUN_10343ffe8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1034400ec,param_2,FUN_1034400f0,param_2,0x103440118,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10344006c; end: 10344009b;  */

undefined ** FUN_10344006c(void)

{
  return &PTR_DAT_11302bca8;
}



/* Entry: 10344009c; end: 1034400bb;  */

void FUN_10344009c(void)

{
  func_0x000107c61168(&PTR_PTR_112f693e0);
  return;
}



/* Entry: 1034400bc; end: 1034400ef;  */

undefined1  [16] FUN_1034400bc(void)

{
  return ZEXT816(0x110656968);
}



/* Entry: 1034400f0; end: 103440143;  */

void FUN_1034400f0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103440144; end: 103440237;  */

void FUN_103440144(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103440374();
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010345c734(0);
  func_0x000107c613fc();
  func_0x00010345c578(uStack_38,uVar1);
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  func_0x00010345c700();
  *(undefined8 *)(param_2 + 0x18) = uStack_38;
  *param_1 = param_2;
  return;
}



/* Entry: 103440238; end: 103440263;  */

void FUN_103440238(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103440264; end: 1034402b7;  */

void FUN_103440264(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1034402b8; end: 1034402bf;  */

undefined8 FUN_1034402b8(void)

{
  return 0x1b;
}



/* Entry: 1034402c0; end: 103440343;  */

void FUN_1034402c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1034403c4,param_2,FUN_1034403c8,param_2,0x1034403f0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103440344; end: 103440373;  */

undefined ** FUN_103440344(void)

{
  return &PTR_DAT_11302bca8;
}



/* Entry: 103440374; end: 103440393;  */

void FUN_103440374(void)

{
  func_0x000107c61168(&PTR_PTR_112f694c8);
  return;
}



/* Entry: 103440394; end: 1034403c7;  */

undefined1  [16] FUN_103440394(void)

{
  return ZEXT816(0x110656a08);
}



/* Entry: 1034403c8; end: 10344041b;  */

void FUN_1034403c8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10344041c; end: 103440813;  */

/* WARNING: Possible PIC construction at 0x0001034405b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034405d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034405e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103440600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103440618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103440630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010344061c) */
/* WARNING: Removing unreachable block (ram,0x000103440604) */
/* WARNING: Removing unreachable block (ram,0x0001034405ec) */
/* WARNING: Removing unreachable block (ram,0x0001034405d4) */
/* WARNING: Removing unreachable block (ram,0x0001034405bc) */
/* WARNING: Removing unreachable block (ram,0x000103440634) */

void FUN_10344041c(long param_1)

{
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  FUN_103440a08();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = uStack_78;
  *(undefined8 *)(param_1 + 0x20) = uStack_80;
  *(undefined8 *)(param_1 + 0x28) = uStack_88;
  *(undefined8 *)(param_1 + 0x30) = uStack_90;
  *(undefined8 *)(param_1 + 0x38) = uStack_98;
  *(undefined8 *)(param_1 + 0x40) = uStack_a0;
  *(undefined8 *)(param_1 + 0x48) = uStack_a8;
  *(undefined8 *)(param_1 + 0x50) = uStack_b0;
  *(undefined8 *)(param_1 + 0x58) = uStack_b8;
  *(undefined8 *)(param_1 + 0x60) = uStack_c0;
  *(undefined8 *)(param_1 + 0x68) = uStack_c8;
  FUN_10345da28();
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uStack_78);
  return;
}



/* Entry: 103440814; end: 1034408af;  */

void FUN_103440814(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1034408b0; end: 103440903;  */

void FUN_1034408b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103440904; end: 10344090b;  */

undefined8 FUN_103440904(void)

{
  return 0x1b;
}



/* Entry: 10344090c; end: 10344098f;  */

void FUN_10344090c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103440a58,param_2,FUN_103440a5c,param_2,FUN_103440a84,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103440990; end: 1034409d7;  */

undefined8 FUN_103440990(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_10345d744();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1034409d8; end: 103440a07;  */

undefined ** FUN_1034409d8(void)

{
  return &PTR_DAT_11302bca8;
}



/* Entry: 103440a08; end: 103440a27;  */

void FUN_103440a08(void)

{
  func_0x000107c61168(&PTR_PTR_112f69598);
  return;
}



/* Entry: 103440a28; end: 103440a5b;  */

undefined1  [16] FUN_103440a28(void)

{
  return ZEXT816(0x110656aa8);
}



/* Entry: 103440a5c; end: 103440a83;  */

void FUN_103440a5c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103440a84; end: 103440a8b;  */

undefined8 FUN_103440a84(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_10345d744();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 103440a8c; end: 103440d17;  */

void FUN_103440a8c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_103440e6c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10345e50c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x00010345e018();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_10345e144();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 103440d18; end: 103440d5b;  */

void FUN_103440d18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103440d5c; end: 103440daf;  */

void FUN_103440d5c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


