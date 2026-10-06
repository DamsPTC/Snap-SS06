/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10336461c; end: 10336464f;  */

void FUN_10336461c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103364650; end: 1033646a7; -[SCLensesCollectionModularCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010336467c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103364680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364650(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5c368);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5c370));
  return;
}



/* Entry: 1033646a8; end: 1033646c7;  */

void FUN_1033646a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0988);
  return;
}



/* Entry: 1033646c8; end: 10336470f; -[SCSCLensesCollectionModularCameraScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033646c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5c3b0;
  func_0x000107c61428(param_1 + _DAT_112f5c3b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103364710; end: 103364767; -[SCSCLensesCollectionModularCameraScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364710(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5c3b0;
  func_0x000107c61428(param_1 + _DAT_112f5c3b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103364768; end: 10336483f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364768(undefined8 param_1,long param_2)

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
    FUN_103363940();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f5c2c8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103364840);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f5c2d0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f5c3b8);
    *(long **)(unaff_x20 + _DAT_112f5c3b8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103364840; end: 103364867; -[SCSCLensesCollectionModularCameraScopedServicesSaberEntryPoint begin] */

void FUN_103364840(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103364768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103364868; end: 1033649df;  */

/* WARNING: Possible PIC construction at 0x0001033648d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103364968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033648d4) */
/* WARNING: Removing unreachable block (ram,0x00010336496c) */
/* WARNING: Removing unreachable block (ram,0x000103364984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364868(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f5c3b8);
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



/* Entry: 1033649e0; end: 1033649e7;  */

void FUN_1033649e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1033649e8; end: 103364a1b; -[SCSCLensesCollectionModularCameraScopedServicesSaberEntryPoint end] */

void FUN_1033649e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103364868();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103364a1c; end: 103364b3b;  */

void FUN_103364a1c(long param_1,long param_2,long param_3)

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
                        "LensesCollectionModularCameraScopeGraphBridge/SCSCLensesCollectionModularCameraScopedServicesSaberEntryPoint.swift"
                        ,0x72,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103364b3c);
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



/* Entry: 103364b3c; end: 103364be7; -[SCSCLensesCollectionModularCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103364b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103364a1c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103364be8; end: 103364c47; -[SCSCLensesCollectionModularCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364be8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f5c3b0,0);
  *(undefined8 *)(param_1 + _DAT_112f5c3b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103364c48; end: 103364c7b;  */

void FUN_103364c48(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103364c7c; end: 103364cb3; -[SCSCLensesCollectionModularCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364c7c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5c3b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f5c3b8));
  return;
}



/* Entry: 103364cb4; end: 103364cd3;  */

void FUN_103364cb4(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0a58);
  return;
}



/* Entry: 103364cd4; end: 103364d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364cd4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1033650c8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f5c3f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103364d40; end: 103364dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364d40(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5c3f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103364dac; end: 103364e0b; -[_TtC47LensesModularCameraScopedFactoryServiceProvider35SCLensesModularCameraScopedServices init] */

void FUN_103364dac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensesModularCameraScopedFactoryServiceProvider.SCLensesModularCameraScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103364dd8);
  (*pcVar1)();
}



/* Entry: 103364e0c; end: 103364e1b; -[_TtC47LensesModularCameraScopedFactoryServiceProvider35SCLensesModularCameraScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5c3f0));
  return;
}



/* Entry: 103364e1c; end: 103364e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103364e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110643e40;
  func_0x000107c613fc(&UNK_110643e40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103365160,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103364e88; end: 103364f23;  */

void FUN_103364e88(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110643d50;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110643d50;
  return;
}



/* Entry: 103364f24; end: 103364f5b;  */

void FUN_103364f24(long *param_1)

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



/* Entry: 103364f5c; end: 103364f63;  */

undefined8 FUN_103364f5c(void)

{
  return 0x1b;
}



/* Entry: 103364f64; end: 103365097;  */

void FUN_103364f64(undefined8 *param_1)

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
  puVar1 = &UNK_110643e68;
  func_0x000107c613fc(&UNK_110643e68,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103365138;
  func_0x00010058fa64(FUN_103365138,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103365098; end: 1033650c7;  */

undefined ** FUN_103365098(void)

{
  return &PTR_DAT_113066c70;
}



/* Entry: 1033650c8; end: 1033650e7;  */

void FUN_1033650c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0b18);
  return;
}



/* Entry: 1033650e8; end: 103365137;  */

undefined1  [16] FUN_1033650e8(void)

{
  return ZEXT816(0x110643da0);
}



/* Entry: 103365138; end: 10336515f;  */

void FUN_103365138(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103365160; end: 103365173;  */

void FUN_103365160(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103365174; end: 103365c97;  */

void FUN_103365174(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  code *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  undefined8 uVar26;
  code *pcVar27;
  code *pcVar28;
  undefined8 uVar29;
  code *pcVar30;
  undefined8 uVar31;
  undefined8 auStack_70 [2];
  
  uVar31 = *param_2;
  func_0x0001000285a8(0x112f5c468,&UNK_10dbb5400);
  puVar1 = auStack_70;
  auStack_70[0] = uVar31;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f5c470,&UNK_10dbb5b60);
  puVar2 = &UNK_110643f18;
  func_0x000107c613fc(&UNK_110643f18,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  pcVar3 = FUN_103365cd8;
  func_0x0001000823a8(FUN_103365cd8,puVar2);
  pcVar4 = "LensFullScreenUXLensesModularCameraScopeEntryPointWrapperServiceProvider";
  func_0x000100082720("LensFullScreenUXLensesModularCameraScopeEntryPointWrapperServiceProvider",
                      0x48,2);
  func_0x00010337004c();
  pcVar5 = "SCCameraUIScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  FUN_1033700bc();
  func_0x000100082720("SCARBarPluginScopeExposerSubjectServiceProvider",0x2f,2);
  pcVar6 = pcVar4;
  func_0x0001033700a0();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_103364f24;
  func_0x0001000823a8(FUN_103364f24,0);
  func_0x000100082720("SCLensesModularCameraScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f5c478,&UNK_10dbb5cf0);
  puVar2 = &UNK_110643f40;
  func_0x000107c613fc(&UNK_110643f40,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(char **)(puVar2 + 0x20) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(pcVar6);
  uVar31 = 0x103365ce0;
  func_0x0001000823a8(0x103365ce0,puVar2);
  func_0x000100082720("LensesModularCameraUIEntryPointWrapperServiceProvider",0x35,2);
  pcVar8 = pcVar5;
  FUN_10337014c();
  func_0x000100082720("SCARBarPluginScopeExposerObservableServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f5c480,&UNK_10dbb5410);
  func_0x000107c6157c(uVar31);
  uVar9 = 0x103365cec;
  func_0x0001000823a8(0x103365cec,uVar31);
  func_0x000100082720("LensesModularCameraCameraUIServiceServiceProvider",0x31,2);
  uVar10 = uVar9;
  FUN_1033697d4();
  func_0x000100082720("SCLensesModularCameraScopedARBarTabInfoProvidingServicesServiceProvider",0x47
                      ,2);
  uVar11 = uVar9;
  FUN_1033688ec();
  func_0x000100082720("SCLensesModularCameraScopedCameraFeatureServicesServiceProvider",0x3f,2);
  uVar12 = uVar9;
  FUN_103368808();
  func_0x000100082720("SCLensesModularCameraScopedCameraUIServicesServiceProvider",0x3a,2);
  uVar13 = uVar9;
  func_0x0001033696f0();
  func_0x000100082720("SCLensesModularCameraScopedLensCarouselDataProvidingServicesServiceProvider",
                      0x4b,2);
  uVar14 = uVar9;
  FUN_10336953c();
  func_0x000100082720("SCLensesModularCameraScopedLensCarouselFeatureServicesServiceProvider",0x45,2
                     );
  uVar15 = uVar9;
  FUN_10336973c();
  func_0x000100082720("SCLensesModularCameraScopedLensCarouselResetServicesServiceProvider",0x43,2);
  uVar16 = uVar9;
  FUN_103369788();
  func_0x000100082720("SCLensesModularCameraScopedLensCarouselSessionServicesServiceProvider",0x45,2
                     );
  uVar17 = uVar9;
  FUN_103368854();
  func_0x000100082720("SCLensesModularCameraScopedMiniCameraActivationStateServicesServiceProvider",
                      0x4b,2);
  uVar18 = uVar9;
  FUN_1033688a0();
  func_0x000100082720("SCLensesModularCameraScopedMiniCameraTrayNavigationServicesServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112f5c488,&UNK_10dbb5620);
  puVar2 = &UNK_110643f68;
  func_0x000107c613fc(&UNK_110643f68,0x60,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar11;
  *(undefined8 *)(puVar2 + 0x20) = uVar12;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = uVar15;
  *(undefined8 *)(puVar2 + 0x50) = uVar14;
  *(char **)(puVar2 + 0x58) = pcVar8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(pcVar8);
  uVar19 = 0x103365cf4;
  func_0x0001000823a8(0x103365cf4,puVar2);
  func_0x000100082720("ARBarModularCameraIntegrationEntryPointWrapperServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f5c490,&UNK_10dbb5420);
  puVar2 = &UNK_110643f90;
  func_0x000107c613fc(&UNK_110643f90,0x50,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar12;
  *(undefined8 *)(puVar2 + 0x20) = uVar14;
  *(undefined8 *)(puVar2 + 0x28) = uVar17;
  *(undefined8 *)(puVar2 + 0x30) = param_9;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  *(undefined8 *)(puVar2 + 0x48) = param_10;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  uVar20 = 0x103365d00;
  func_0x0001000823a8(0x103365d00,puVar2);
  func_0x000100082720("ARBarModularMiniCameraLensIconEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f5c498,&UNK_10dbb5428);
  func_0x000107c6157c(uVar19);
  uVar21 = 0x103365d14;
  func_0x0001000823a8(0x103365d14,uVar19);
  func_0x000100082720("SCLensesModularCameraScopedARBarReplyIntegrationServicesServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f5c4a0,&UNK_10dbb5430);
  func_0x000107c6157c(uVar19);
  uVar22 = 0x103365d1c;
  func_0x0001000823a8(0x103365d1c,uVar19);
  func_0x000100082720("SCLensesModularCameraScopedARBarReplyServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f5c4a8,&UNK_10dbb5460);
  puVar2 = &UNK_110643fb8;
  func_0x000107c613fc(&UNK_110643fb8,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar22;
  *(undefined8 *)(puVar2 + 0x20) = param_11;
  *(undefined8 *)(puVar2 + 0x28) = uVar21;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  func_0x000107c6157c();
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(uVar21);
  uVar23 = 0x103365d24;
  func_0x0001000823a8(0x103365d24,puVar2);
  func_0x000100082720("ARBarModularCameraAdapterEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f5c4b0,&UNK_10dbb5440);
  puVar2 = &UNK_110643fe0;
  func_0x000107c613fc(&UNK_110643fe0,0x60,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar22;
  *(undefined8 *)(puVar2 + 0x20) = param_12;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_13;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_14;
  *(undefined8 *)(puVar2 + 0x50) = uVar16;
  *(undefined8 *)(puVar2 + 0x58) = uVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar10);
  pcVar24 = FUN_103365da0;
  func_0x0001000823a8(FUN_103365da0,puVar2);
  func_0x000100082720("ARBarModularCameraLoggingEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f5c4b8,&UNK_10dbb5448);
  func_0x000107c6157c(uVar23);
  pcVar25 = FUN_103365de4;
  func_0x0001000823a8(FUN_103365de4,uVar23);
  func_0x000100082720("SCLensesModularCameraScopedARBarReplyAdapterServicesServiceProvider",0x43,2);
  uVar26 = uVar9;
  FUN_10336fbd8(uVar9,pcVar5,pcVar4,pcVar25,uVar21,uVar22,uVar13,uVar14,uVar18);
  func_0x000100082720("LensesModularCameraScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f5c4c0,&UNK_10dbb5450);
  puVar2 = &UNK_110644008;
  func_0x000107c613fc(&UNK_110644008,0x58,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar23;
  *(undefined8 *)(puVar2 + 0x18) = uVar19;
  *(code **)(puVar2 + 0x20) = pcVar24;
  *(undefined8 *)(puVar2 + 0x28) = uVar20;
  *(code **)(puVar2 + 0x30) = pcVar3;
  *(undefined8 **)(puVar2 + 0x38) = puVar1;
  *(undefined8 *)(puVar2 + 0x40) = uVar26;
  *(undefined8 *)(puVar2 + 0x48) = uVar31;
  *(code **)(puVar2 + 0x50) = pcVar7;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar31);
  func_0x000107c6157c(uVar19);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(pcVar24);
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar26);
  func_0x000107c6157c(pcVar7);
  pcVar27 = FUN_103365dec;
  func_0x0001000823a8(FUN_103365dec,puVar2);
  func_0x000100082720("SCLensesModularCameraScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f5c3f8,&UNK_10dbb5190);
  func_0x000107c6157c(pcVar27);
  pcVar28 = FUN_103365e20;
  func_0x0001000823a8(FUN_103365e20,pcVar27);
  func_0x000100082720("SCLensesModularCameraScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f5c3e8,&UNK_10dbb5180);
  func_0x000107c6157c(pcVar28);
  uVar29 = 0x103365e28;
  func_0x0001000823a8(0x103365e28,pcVar28);
  func_0x000100082720("SCLensesModularCameraScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110644030;
  func_0x000107c613fc(&UNK_110644030,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar29;
  *(code **)(puVar2 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  pcVar30 = FUN_103365e5c;
  func_0x0001000823a8(FUN_103365e5c,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar31);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(pcVar28);
  func_0x000100082720("SCLensesModularCameraScopeEntryPointProvider",0x2c,2);
  *param_1 = pcVar30;
  return;
}



/* Entry: 103365c98; end: 103365cd7;  */

void FUN_103365c98(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103365174(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 103365cd8; end: 103365d33;  */

void FUN_103365cd8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  FUN_1033679cc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_1033757b4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  func_0x000103375430(uStack_48,uStack_50);
  *(undefined8 *)(lVar1 + 0x10) = uStack_48;
  *param_1 = lVar1;
  return;
}



/* Entry: 103365d34; end: 103365d9f;  */

void FUN_103365d34(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103365da0; end: 103365dab;  */

void FUN_103365da0(void)

{
  long unaff_x20;
  
  FUN_103366bec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 103365dac; end: 103365de3;  */

void FUN_103365dac(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 103365de4; end: 103365deb;  */

void FUN_103365de4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103365dec; end: 103365e1f;  */

void FUN_103365dec(void)

{
  long unaff_x20;
  
  FUN_103367e9c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 103365e20; end: 103365e2f;  */

void FUN_103365e20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112f5c450,&UNK_10dbb53a8);
  uVar1 = 0;
  func_0x000100370df8();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103365e30; end: 103365e5b;  */

void FUN_103365e30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103365e5c; end: 103365e63;  */

void FUN_103365e5c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110643d50;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110643d50;
  return;
}



/* Entry: 103365e64; end: 10336605b;  */

/* WARNING: Possible PIC construction at 0x000103365f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103365f34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103365f20) */
/* WARNING: Removing unreachable block (ram,0x000103365f38) */

void FUN_103365e64(long param_1)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000100083b20(auStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_1033661b8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = uStack_60;
  *(undefined8 *)(param_1 + 0x20) = uStack_68;
  *(undefined8 *)(param_1 + 0x28) = uStack_70;
  *(undefined8 *)(param_1 + 0x30) = uStack_78;
  FUN_10383509c(0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uStack_60);
  return;
}



/* Entry: 10336605c; end: 1033660a7;  */

void FUN_10336605c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033660a8; end: 1033660fb;  */

void FUN_1033660a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1033660fc; end: 103366103;  */

undefined8 FUN_1033660fc(void)

{
  return 0x1b;
}



/* Entry: 103366104; end: 103366187;  */

void FUN_103366104(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103366208,param_2,FUN_10336620c,param_2,0x103366234,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103366188; end: 1033661b7;  */

undefined ** FUN_103366188(void)

{
  return &PTR_DAT_113066c70;
}



/* Entry: 1033661b8; end: 1033661d7;  */

void FUN_1033661b8(void)

{
  func_0x000107c61168(&PTR_PTR_112f5c530);
  return;
}



/* Entry: 1033661d8; end: 10336620b;  */

undefined1  [16] FUN_1033661d8(void)

{
  return ZEXT816(0x110644088);
}



/* Entry: 10336620c; end: 10336625f;  */

void FUN_10336620c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103366260; end: 10336692b;  */

void FUN_103366260(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
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
  FUN_103366b34();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  func_0x0001000285a8(0x112e4b708,&UNK_10da44ae8);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010025a71c();
  puVar11 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x18) = puVar11;
  puVar12 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar12;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar13;
  FUN_103835580();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = uVar10;
  func_0x0001038352ac(uVar10,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,puVar12,puVar13,puVar11
                     );
  *(undefined8 *)(param_2 + 0x10) = uVar14;
  func_0x000107c6157c();
  func_0x000103835510();
  func_0x000107c61574(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103366624);
    (*pcVar1)();
  }
  *(undefined **)(param_2 + 0x70) = puVar12;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar13 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61574(uStack_b8);
    *(undefined **)(param_2 + 0x78) = puVar13;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103366628);
  (*pcVar1)();
}



/* Entry: 10336692c; end: 1033669cf;  */

void FUN_10336692c(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1033669d0; end: 103366a77;  */

void FUN_1033669d0(undefined8 *param_1)

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



/* Entry: 103366a78; end: 103366a7f;  */

undefined8 FUN_103366a78(void)

{
  return 0x1b;
}



/* Entry: 103366a80; end: 103366b03;  */

void FUN_103366a80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103366b94,param_2,FUN_103366b98,param_2,0x103366bc0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103366b04; end: 103366b33;  */

undefined ** FUN_103366b04(void)

{
  return &PTR_DAT_113066c70;
}



/* Entry: 103366b34; end: 103366b53;  */

void FUN_103366b34(void)

{
  func_0x000107c61168(&PTR_PTR_112f5c620);
  return;
}



/* Entry: 103366b54; end: 103366b97;  */

undefined1  [16] FUN_103366b54(void)

{
  return ZEXT816(0x110644128);
}



/* Entry: 103366b98; end: 103366beb;  */

void FUN_103366b98(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103366bec; end: 103367127;  */

void FUN_103366bec(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
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
  FUN_103367268();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  FUN_10383831c();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = auStack_70[0];
  func_0x000107c61174();
  uVar11 = uVar10;
  func_0x000103837918();
  *(undefined8 *)(param_2 + 0x10) = uVar11;
  func_0x000107c6157c();
  FUN_103838250();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uVar11);
  *param_1 = param_2;
  return;
}



/* Entry: 103367128; end: 1033671ab;  */

void FUN_103367128(void)

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
  return;
}



/* Entry: 1033671ac; end: 1033671b3;  */

undefined8 FUN_1033671ac(void)

{
  return 0x1b;
}



/* Entry: 1033671b4; end: 103367237;  */

void FUN_1033671b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1033672a8,param_2,FUN_1033672ac,param_2,0x1033672d4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103367238; end: 103367267;  */

undefined ** FUN_103367238(void)

{
  return &PTR_DAT_113066c70;
}



/* Entry: 103367268; end: 103367287;  */

void FUN_103367268(void)

{
  func_0x000107c61168(&PTR_PTR_112f5c750);
  return;
}



/* Entry: 103367288; end: 1033672ab;  */

undefined1  [16] FUN_103367288(void)

{
  return ZEXT816(0x1106441e8);
}



/* Entry: 1033672ac; end: 1033672ff;  */

void FUN_1033672ac(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103367300; end: 1033675b7;  */

void FUN_103367300(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_1033676e8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  FUN_103839a30(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uStack_a0);
  func_0x000103839238(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uStack_a0);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 1033675b8; end: 10336762b;  */

void FUN_1033675b8(void)

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
  return;
}



/* Entry: 10336762c; end: 103367633;  */

undefined8 FUN_10336762c(void)

{
  return 0x1b;
}



/* Entry: 103367634; end: 1033676b7;  */

void FUN_103367634(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103367728,param_2,FUN_10336772c,param_2,0x103367754,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1033676b8; end: 1033676e7;  */

undefined ** FUN_1033676b8(void)

{
  return &PTR_DAT_113066c70;
}



/* Entry: 1033676e8; end: 103367707;  */

void FUN_1033676e8(void)

{
  func_0x000107c61168(&PTR_PTR_112f5c860);
  return;
}



/* Entry: 103367708; end: 10336772b;  */

undefined1  [16] FUN_103367708(void)

{
  return ZEXT816(0x110644268);
}



/* Entry: 10336772c; end: 10336777f;  */

void FUN_10336772c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103367780; end: 103367827;  */

void FUN_103367780(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1033679cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1033757b4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  func_0x000103375430(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 103367828; end: 10336789b;  */

long FUN_103367828(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_1033757b4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000103375430(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10336789c; end: 1033678c7;  */

void FUN_10336789c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033678c8; end: 1033678cf;  */

undefined8 FUN_1033678c8(void)

{
  return 0x1b;
}



/* Entry: 1033678d0; end: 103367953;  */

void FUN_1033678d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103367a0c,param_2,FUN_103367a10,param_2,FUN_103367a38,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103367954; end: 10336799b;  */

undefined8 FUN_103367954(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000103375474();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 10336799c; end: 1033679cb;  */

undefined ** FUN_10336799c(void)

{
  return &PTR_DAT_113066c70;
}



/* Entry: 1033679cc; end: 1033679eb;  */

void FUN_1033679cc(void)

{
  func_0x000107c61168(&PTR_PTR_112f5c960);
  return;
}



/* Entry: 1033679ec; end: 103367a0f;  */

undefined1  [16] FUN_1033679ec(void)

{
  return ZEXT816(0x1106442e8);
}



/* Entry: 103367a10; end: 103367a37;  */

void FUN_103367a10(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103367a38; end: 103367a3f;  */

undefined8 FUN_103367a38(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000103375474();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 103367a40; end: 103367aef;  */

void FUN_103367a40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_103367df4();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_103367c98(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 103367af0; end: 103367b5f;  */

undefined8 FUN_103367af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103367c98(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 103367b60; end: 103367ba3;  */

void FUN_103367b60(void)

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



/* Entry: 103367ba4; end: 103367bf7;  */

void FUN_103367ba4(undefined8 *param_1)

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



/* Entry: 103367bf8; end: 103367bff;  */

undefined8 FUN_103367bf8(void)

{
  return 0x1b;
}



/* Entry: 103367c00; end: 103367c83;  */

void FUN_103367c00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103367e44,param_2,FUN_103367e48,param_2,0x103367e70,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103367c84; end: 103367c97;  */

void FUN_103367c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110644328;
  return;
}



/* Entry: 103367c98; end: 103367dd7;  */

void FUN_103367c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  func_0x0001000285a8(0x112e4bb30,&UNK_10da45170);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_103374b64(0);
  func_0x000107c613fc();
  uVar3 = param_1;
  FUN_103374928(param_1,param_2,puVar2,uVar5);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(uVar3);
  FUN_103374938();
  func_0x000107c61574(uVar3);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103367dd8);
  (*pcVar1)();
}



/* Entry: 103367dd8; end: 103367df3;  */

undefined ** FUN_103367dd8(void)

{
  return &PTR_DAT_113066c70;
}



/* Entry: 103367df4; end: 103367e13;  */

void FUN_103367df4(void)

{
  func_0x000107c61168(&PTR_PTR_112f5ca30);
  return;
}



/* Entry: 103367e14; end: 103367e47;  */

undefined1  [16] FUN_103367e14(void)

{
  return ZEXT816(0x110644368);
}



/* Entry: 103367e48; end: 103367e9b;  */

void FUN_103367e48(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103367e9c; end: 103368267;  */

void FUN_103367e9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d730;
  ppuVar4 = &PTR_DAT_113066c70;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112f5cab0;
  func_0x0001000285a8(0x112f5cab0,&UNK_10dbb5e88);
  func_0x0001000a6ee8(&UNK_1106440a8,
                      "ARBarModularCameraAdapterEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,FUN_103368268,param_2,uVar2,&UNK_1106440a8,&PTR_DAT_112f5c4c8);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110644168,
                      "ARBarModularCameraIntegrationEntryPointWrapperScopeInitializationPluginKey",
                      0x4a,2,0x103368294,param_3,uVar2,&UNK_110644168,&PTR_DAT_112f5c5b8);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106441e8,
                      "ARBarModularCameraLoggingEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,0x1033682c0,param_4,uVar2,&UNK_1106441e8,&PTR_DAT_112f5c6e8);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110644268,
                      "ARBarModularMiniCameraLensIconEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,0x1033682ec,param_5,uVar2,&UNK_110644268,&PTR_DAT_112f5c7f8);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1106442e8,
                      "LensFullScreenUXLensesModularCameraScopeEntryPointWrapperScopeInitializationPluginKey"
                      ,0x55,2,0x103368318,param_6,uVar2,&UNK_1106442e8,&PTR_DAT_112f5c8f8);
  func_0x000107c61574(param_6);
  puVar3 = &UNK_1106443d8;
  func_0x000107c613fc(&UNK_1106443d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_110645f90,
                      "LensesModularCameraScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_103368344,puVar3,uVar2,&UNK_110645f90,&PTR_DAT_112f5d510);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_110644388,
                      "LensesModularCameraUIEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_103368408,param_9,uVar2,&UNK_110644388,&PTR_DAT_112f5c9c8);
  func_0x000107c61574(param_9);
  puVar3 = &UNK_110644400;
  func_0x000107c613fc(&UNK_110644400,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  *(undefined8 *)(puVar3 + 0x18) = param_10;
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_110643de0,
                      "SCLensesModularCameraScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_1033684dc,puVar3,uVar2,&UNK_110643de0,&PTR_DAT_112f5c400);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f5cab8;
  func_0x0001000285a8(0x112f5cab8,&UNK_10dbb5e90);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCLensesModularCameraScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = puVar1;
  return;
}



/* Entry: 103368268; end: 103368343;  */

void FUN_103368268(void)

{
  FUN_103368384();
  return;
}


