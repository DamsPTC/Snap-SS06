/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032c1c7c; end: 1032c1d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c1c7c(undefined8 param_1,long param_2)

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
    FUN_1032c0e54();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f53338) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1032c1d54);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f53340);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f53428);
    *(long **)(unaff_x20 + _DAT_112f53428) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1032c1d54; end: 1032c1d7b; -[SCSCLegacyLiveLensPreviewScopedServicesSaberEntryPoint begin] */

void FUN_1032c1d54(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032c1c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032c1d7c; end: 1032c1ef3;  */

/* WARNING: Possible PIC construction at 0x0001032c1de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c1e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032c1de8) */
/* WARNING: Removing unreachable block (ram,0x0001032c1e80) */
/* WARNING: Removing unreachable block (ram,0x0001032c1e98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c1d7c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f53428);
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



/* Entry: 1032c1ef4; end: 1032c1efb;  */

void FUN_1032c1ef4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032c1efc; end: 1032c1f2f; -[SCSCLegacyLiveLensPreviewScopedServicesSaberEntryPoint end] */

void FUN_1032c1efc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1032c1d7c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1032c1f30; end: 1032c204f;  */

void FUN_1032c1f30(long param_1,long param_2,long param_3)

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
                        "LegacyLiveLensPreviewScopeGraphBridge/SCSCLegacyLiveLensPreviewScopedServicesSaberEntryPoint.swift"
                        ,0x62,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c2050);
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



/* Entry: 1032c2050; end: 1032c20fb; -[SCSCLegacyLiveLensPreviewScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1032c2050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032c1f30(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032c20fc; end: 1032c215b; -[SCSCLegacyLiveLensPreviewScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c20fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f53420,0);
  *(undefined8 *)(param_1 + _DAT_112f53428) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032c215c; end: 1032c218f;  */

void FUN_1032c215c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032c2190; end: 1032c21c7; -[SCSCLegacyLiveLensPreviewScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c2190(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f53420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f53428));
  return;
}



/* Entry: 1032c21c8; end: 1032c21e7;  */

void FUN_1032c21c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ca910);
  return;
}



/* Entry: 1032c21e8; end: 1032c2253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c21e8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032c25dc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f53460) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1032c2254; end: 1032c22bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c2254(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f53460) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032c22c0; end: 1032c231f; -[_TtC40LensCarouselScopedFactoryServiceProvider28SCLensCarouselScopedServices init] */

void FUN_1032c22c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselScopedFactoryServiceProvider.SCLensCarouselScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c22ec);
  (*pcVar1)();
}



/* Entry: 1032c2320; end: 1032c232f; -[_TtC40LensCarouselScopedFactoryServiceProvider28SCLensCarouselScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c2320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f53460));
  return;
}



/* Entry: 1032c2330; end: 1032c239b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c2330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110636d30;
  func_0x000107c613fc(&UNK_110636d30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032c2674,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032c239c; end: 1032c2437;  */

void FUN_1032c239c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110636c40;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110636c40;
  return;
}



/* Entry: 1032c2438; end: 1032c246f;  */

void FUN_1032c2438(long *param_1)

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



/* Entry: 1032c2470; end: 1032c2477;  */

undefined8 FUN_1032c2470(void)

{
  return 0x1b;
}



/* Entry: 1032c2478; end: 1032c25ab;  */

void FUN_1032c2478(undefined8 *param_1)

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
  puVar1 = &UNK_110636d58;
  func_0x000107c613fc(&UNK_110636d58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032c264c;
  func_0x00010058fa64(FUN_1032c264c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032c25ac; end: 1032c25db;  */

undefined ** FUN_1032c25ac(void)

{
  return &PTR_DAT_113081d48;
}



/* Entry: 1032c25dc; end: 1032c25fb;  */

void FUN_1032c25dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128ca9d0);
  return;
}



/* Entry: 1032c25fc; end: 1032c264b;  */

undefined1  [16] FUN_1032c25fc(void)

{
  return ZEXT816(0x110636c90);
}



/* Entry: 1032c264c; end: 1032c2673;  */

void FUN_1032c264c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032c2674; end: 1032c2687;  */

void FUN_1032c2674(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032c2688; end: 1032c35cf;  */

void FUN_1032c2688(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  code *pcVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  code *pcVar31;
  undefined8 uVar32;
  code *pcVar33;
  code *pcVar34;
  undefined8 uVar35;
  code *pcVar36;
  undefined8 uVar37;
  undefined8 auStack_70 [2];
  
  uVar37 = *param_2;
  func_0x0001000285a8(0x112f534d8,&UNK_10dbaa818);
  puVar1 = auStack_70;
  auStack_70[0] = uVar37;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f534e0,&UNK_10dbaa820);
  puVar2 = &UNK_110636e08;
  func_0x000107c613fc(&UNK_110636e08,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar3 = FUN_1032c363c;
  func_0x0001000823a8(FUN_1032c363c,puVar2);
  func_0x000100082720("LensLoggerPageTrackingEntryPointWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f534e8,&UNK_10dbab210);
  func_0x000107c6157c(puVar1);
  uVar37 = 0x1032c3648;
  func_0x0001000823a8(0x1032c3648,puVar1);
  func_0x000100082720("SCLensCarouselCTAHandlingServiceProviderWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f534f0,&UNK_10dbaa830);
  func_0x000107c6157c(puVar1);
  uVar4 = 0x1032c3650;
  func_0x0001000823a8(0x1032c3650,puVar1);
  func_0x000100082720("SCLensCarouselScopedCameraUIContainerServiceProviderWrapperServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112f534f8,&UNK_10dbaa838);
  func_0x000107c6157c(uVar4);
  uVar5 = 0x1032c3658;
  func_0x0001000823a8(0x1032c3658,uVar4);
  func_0x000100082720("SCLensCarouselScopedCameraUIContainerServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f53500,&UNK_10dbaa840);
  func_0x000107c6157c(puVar1);
  uVar6 = 0x1032c3660;
  func_0x0001000823a8(0x1032c3660,puVar1);
  func_0x000100082720("SCLensCarouselScopedImagineLensServiceProviderWrapperServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112f53508,&UNK_10dbaa848);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1032c3668;
  func_0x0001000823a8(0x1032c3668,uVar6);
  func_0x000100082720("SCLensCarouselScopedImagineLensServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112f53510,&UNK_10dbaa850);
  func_0x000107c6157c(uVar37);
  uVar8 = 0x1032c3670;
  func_0x0001000823a8(0x1032c3670,uVar37);
  func_0x000100082720("SCLensCarouselScopedLensCTAHandlingServicesServiceProvider",0x3a,2);
  puVar9 = puVar1;
  func_0x000103692bfc();
  func_0x000100082720("SCLensCarouselScopedLensCarouselDataProviderControllingServiceProvider",0x46,
                      2);
  puVar10 = puVar1;
  FUN_1036928e0();
  func_0x000100082720("SCLensCarouselScopedLensCarouselDataProvidingServiceProvider",0x3c,2);
  puVar11 = puVar1;
  func_0x000103692a6c();
  func_0x000100082720("SCLensCarouselScopedLensCarouselEventsHandlingServiceProvider",0x3d,2);
  puVar12 = puVar1;
  func_0x000103692d8c();
  func_0x000100082720("SCLensCarouselScopedLensCarouselInScopeActivatorDependenciesServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112f53518,&UNK_10dbab740);
  func_0x000107c6157c(puVar1);
  uVar13 = 0x1032c3678;
  func_0x0001000823a8(0x1032c3678,puVar1);
  func_0x000100082720("SCLensCarouselScopedLensCarouselManagementServiceProviderWrapperServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112f53520,&UNK_10dbaa860);
  func_0x000107c6157c(uVar13);
  uVar14 = 0x1032c3680;
  func_0x0001000823a8(0x1032c3680,uVar13);
  func_0x000100082720("SCLensCarouselScopedLensCarouselManagementServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f53528,&UNK_10dbab940);
  func_0x000107c6157c(puVar1);
  uVar15 = 0x1032c3688;
  func_0x0001000823a8(0x1032c3688,puVar1);
  func_0x000100082720("SCLensCarouselSettingsCoalescingServiceProviderWrapperServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112f53530,&UNK_10dbaa870);
  func_0x000107c6157c(puVar1);
  uVar16 = 0x1032c3690;
  func_0x0001000823a8(0x1032c3690,puVar1);
  func_0x000100082720("SCLensFeaturesVisibilityCoalescingServiceProviderWrapperServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f53538,&UNK_10dbabce0);
  puVar2 = &UNK_110636e30;
  func_0x000107c613fc(&UNK_110636e30,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  uVar17 = 0x1032c3698;
  func_0x0001000823a8(0x1032c3698,puVar2);
  func_0x000100082720("SCLensFetchTypeUpdatingEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f53540,&UNK_10dbaa880);
  puVar2 = &UNK_110636e58;
  func_0x000107c613fc(&UNK_110636e58,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar18 = 0x1032c36a0;
  func_0x0001000823a8(0x1032c36a0,puVar2);
  func_0x000100082720("SCLensNavigationLoggingWorkflowEntryPointWrapperServiceProvider",0x3f,2);
  FUN_1032e3f24(param_8,param_9,param_10,uVar14);
  func_0x000100082720("SCLensCarouselFeaturesScopedFactoryServiceProvider",0x32,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar19 = FUN_1032c2438;
  func_0x0001000823a8(FUN_1032c2438,0);
  func_0x000100082720("SCLensCarouselScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f53548,&UNK_10dbaa890);
  puVar2 = &UNK_110636e80;
  func_0x000107c613fc(&UNK_110636e80,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar14;
  *(undefined8 *)(puVar2 + 0x20) = param_11;
  *(undefined8 *)(puVar2 + 0x28) = param_12;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  uVar20 = 0x1032c36ac;
  func_0x0001000823a8(0x1032c36ac,puVar2);
  func_0x000100082720("LensPlusFreemiumSessionEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112f53550,&UNK_10dbaae90);
  puVar2 = &UNK_110636ea8;
  func_0x000107c613fc(&UNK_110636ea8,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_13;
  *(undefined8 *)(puVar2 + 0x20) = uVar14;
  *(undefined8 *)(puVar2 + 0x28) = param_14;
  *(undefined8 *)(puVar2 + 0x30) = param_11;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  pcVar21 = FUN_1032c36fc;
  func_0x0001000823a8(FUN_1032c36fc,puVar2);
  func_0x000100082720("LensPlusLastActiveExclusiveLensTrackerServiceProviderWrapperServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112f53558,&UNK_10dbaa8a0);
  puVar2 = &UNK_110636ed0;
  func_0x000107c613fc(&UNK_110636ed0,0x30,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_9;
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  *(undefined8 *)(puVar2 + 0x28) = param_15;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(param_15);
  pcVar22 = FUN_1032c3758;
  func_0x0001000823a8(FUN_1032c3758,puVar2);
  func_0x000100082720("SCLensCTACarouselEntryPointWrapperServiceProvider",0x31,2);
  func_0x0001000285a8(0x112f53560,&UNK_10dbaa8a8);
  func_0x000107c6157c(pcVar22);
  uVar23 = 0x1032c3764;
  func_0x0001000823a8(0x1032c3764,pcVar22);
  func_0x000100082720("SCLensCTACarouselServicesServiceProvider",0x28,2);
  uVar24 = param_8;
  FUN_10348477c();
  func_0x000100082720("SCLensCarouselFeaturesScopeServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f53568,&UNK_10dbaa8b0);
  func_0x000107c6157c(uVar15);
  uVar25 = 0x1032c376c;
  func_0x0001000823a8(0x1032c376c,uVar15);
  func_0x000100082720("SCLensCarouselScopedLensCarouselSettingsServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112f53570,&UNK_10dbaa8b8);
  func_0x000107c6157c(uVar16);
  uVar26 = 0x1032c3774;
  func_0x0001000823a8(0x1032c3774,uVar16);
  func_0x000100082720("SCLensCarouselScopedLensFeaturesVisibilityControllerServicesServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112f53578,&UNK_10dbaa8c0);
  func_0x000107c6157c(pcVar21);
  uVar27 = 0x1032c377c;
  func_0x0001000823a8(0x1032c377c,pcVar21);
  func_0x000100082720("SCLensPlusLastActiveExclusiveLensServicesServiceProvider",0x38,2);
  FUN_1032f22f8(param_16,param_17,param_18,param_19,param_9,param_20,param_21,param_22,param_23,
                param_10,uVar5,uVar7,uVar14,uVar26,param_7,param_11,param_24,param_25,param_26,
                param_27,param_28);
  func_0x000100082720("SingleLensFeatureScopedFactoryServiceProvider",0x2d,2);
  uVar28 = param_16;
  func_0x00010437ac5c();
  func_0x000100082720("SingleLensFeatureScopeSaberServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f53580,&UNK_10dbaa8f0);
  puVar2 = &UNK_110636ef8;
  func_0x000107c613fc(&UNK_110636ef8,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar26;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar26);
  uVar29 = 0x1032c3784;
  func_0x0001000823a8(0x1032c3784,puVar2);
  func_0x000100082720("LensFullScreenServiceProviderWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f53588,&UNK_10dbaa8d0);
  func_0x000107c6157c(uVar29);
  uVar30 = 0x1032c378c;
  func_0x0001000823a8(0x1032c378c,uVar29);
  func_0x000100082720("LensFullScreenServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112f53590,&UNK_10dbaad00);
  puVar2 = &UNK_110636f20;
  func_0x000107c613fc(&UNK_110636f20,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar27;
  *(undefined8 *)(puVar2 + 0x20) = param_14;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(uVar27);
  pcVar31 = FUN_1032c37c8;
  func_0x0001000823a8(FUN_1032c37c8,puVar2);
  func_0x000100082720("LensPlusLastActiveExclusiveLensTrackerEntryPointWrapperServiceProvider",0x46,
                      2);
  uVar32 = uVar30;
  FUN_1032c8fdc(uVar30,uVar23,uVar24,uVar8,puVar9,puVar10,puVar11,puVar12,uVar14,uVar25,uVar26,
                uVar28);
  func_0x000100082720("LensCarouselScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f53598,&UNK_10dbaa8e0);
  puVar2 = &UNK_110636f48;
  func_0x000107c613fc(&UNK_110636f48,0x98,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar32;
  *(undefined8 *)(puVar2 + 0x20) = uVar29;
  *(code **)(puVar2 + 0x28) = pcVar3;
  *(undefined8 *)(puVar2 + 0x30) = uVar20;
  *(code **)(puVar2 + 0x38) = pcVar31;
  *(code **)(puVar2 + 0x40) = pcVar21;
  *(code **)(puVar2 + 0x48) = pcVar22;
  *(undefined8 *)(puVar2 + 0x50) = uVar37;
  *(undefined8 *)(puVar2 + 0x58) = uVar4;
  *(undefined8 *)(puVar2 + 0x60) = uVar6;
  *(undefined8 *)(puVar2 + 0x68) = uVar13;
  *(code **)(puVar2 + 0x70) = pcVar19;
  *(undefined8 *)(puVar2 + 0x78) = uVar15;
  *(undefined8 *)(puVar2 + 0x80) = uVar16;
  *(undefined8 *)(puVar2 + 0x88) = uVar17;
  *(undefined8 *)(puVar2 + 0x90) = uVar18;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar37);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(pcVar22);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(pcVar21);
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(uVar32);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(pcVar31);
  func_0x000107c6157c(pcVar19);
  func_0x000107c6157c(uVar17);
  func_0x000107c6157c(uVar18);
  pcVar33 = FUN_1032c37d4;
  func_0x0001000823a8(FUN_1032c37d4,puVar2);
  func_0x000100082720("SCLensCarouselScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f53468,&UNK_10dbaa5e0);
  func_0x000107c6157c(pcVar33);
  pcVar34 = FUN_1032c3818;
  func_0x0001000823a8(FUN_1032c3818,pcVar33);
  func_0x000100082720("SCLensCarouselScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112f53458,&UNK_10dbaa5d0);
  func_0x000107c6157c(pcVar34);
  uVar35 = 0x1032c3820;
  func_0x0001000823a8(0x1032c3820,pcVar34);
  func_0x000100082720("SCLensCarouselScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110636f70;
  func_0x000107c613fc(&UNK_110636f70,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar35;
  *(code **)(puVar2 + 0x18) = pcVar19;
  func_0x000107c6157c(pcVar19);
  pcVar36 = FUN_1032c3854;
  func_0x0001000823a8(FUN_1032c3854,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar37);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar15);
  func_0x000107c61574(uVar16);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(param_8);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(pcVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(uVar25);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(uVar27);
  func_0x000107c61574(param_16);
  func_0x000107c61574(uVar28);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar30);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(uVar32);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(pcVar34);
  func_0x000100082720("SCLensCarouselScopeEntryPointProvider",0x25,2);
  *param_1 = pcVar36;
  return;
}



/* Entry: 1032c35d0; end: 1032c363b;  */

void FUN_1032c35d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1032c2688(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8));
  return;
}



/* Entry: 1032c363c; end: 1032c36b7;  */

void FUN_1032c363c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1032c3ed8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_10347d9d0(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_10347d810();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_10347d960();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1032c36b8; end: 1032c36fb;  */

void FUN_1032c36b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032c36fc; end: 1032c371b;  */

void FUN_1032c36fc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_1032c4a84();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  func_0x0001032e2e98(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  func_0x0001032e2bec(uStack_58,uVar2,uVar3,uVar4,uStack_78);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  FUN_1032e2e64();
  *(undefined8 *)(lVar1 + 0x38) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 1032c371c; end: 1032c3757;  */

void FUN_1032c371c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032c3758; end: 1032c3793;  */

void FUN_1032c3758(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_1032c50d4();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1032c4e14(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032c3794; end: 1032c37c7;  */

void FUN_1032c3794(void)

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



/* Entry: 1032c37c8; end: 1032c37d3;  */

void FUN_1032c37c8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1032c4694();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_1032e267c(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x0001032e2544();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c6157c();
  func_0x0001032e2578();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 1032c37d4; end: 1032c3817;  */

void FUN_1032c37d4(void)

{
  long unaff_x20;
  
  FUN_1032c716c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1032c3818; end: 1032c3827;  */

void FUN_1032c3818(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112f534c0,&UNK_10dbaa7c8);
  uVar1 = 0;
  func_0x0001003511c8();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032c3828; end: 1032c3853;  */

void FUN_1032c3828(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032c3854; end: 1032c385b;  */

void FUN_1032c3854(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110636c40;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110636c40;
  return;
}



/* Entry: 1032c385c; end: 1032c39f7;  */

void FUN_1032c385c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1032c3b3c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1032cf958(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x0001032cf704();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  func_0x0001032cf774();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1032c39f8; end: 1032c3a2b;  */

void FUN_1032c39f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c3a2c; end: 1032c3a7f;  */

void FUN_1032c3a2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032c3a80; end: 1032c3a87;  */

undefined8 FUN_1032c3a80(void)

{
  return 0x1b;
}



/* Entry: 1032c3a88; end: 1032c3b0b;  */

void FUN_1032c3a88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1032c3b8c,param_2,FUN_1032c3b90,param_2,0x1032c3bb8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032c3b0c; end: 1032c3b3b;  */

undefined ** FUN_1032c3b0c(void)

{
  return &PTR_DAT_113081d48;
}



/* Entry: 1032c3b3c; end: 1032c3b5b;  */

void FUN_1032c3b3c(void)

{
  func_0x000107c61168(&PTR_PTR_112f53608);
  return;
}



/* Entry: 1032c3b5c; end: 1032c3b8f;  */

undefined1  [16] FUN_1032c3b5c(void)

{
  return ZEXT816(0x110636fc8);
}



/* Entry: 1032c3b90; end: 1032c3be3;  */

void FUN_1032c3b90(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032c3be4; end: 1032c3d07;  */

void FUN_1032c3be4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1032c3ed8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_10347d9d0(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_10347d810();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  FUN_10347d960();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1032c3d08; end: 1032c3de7;  */

long FUN_1032c3d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10347d9d0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10347d810();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  FUN_10347d960();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 1032c3de8; end: 1032c3e1b;  */

void FUN_1032c3de8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c3e1c; end: 1032c3e23;  */

undefined8 FUN_1032c3e1c(void)

{
  return 0x1b;
}



/* Entry: 1032c3e24; end: 1032c3ea7;  */

void FUN_1032c3e24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032c3f18,param_2,FUN_1032c3f1c,param_2,0x1032c3f44,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032c3ea8; end: 1032c3ed7;  */

undefined ** FUN_1032c3ea8(void)

{
  return &PTR_DAT_113081d48;
}



/* Entry: 1032c3ed8; end: 1032c3ef7;  */

void FUN_1032c3ed8(void)

{
  func_0x000107c61168(&PTR_PTR_112f536e0);
  return;
}



/* Entry: 1032c3ef8; end: 1032c3f1b;  */

undefined1  [16] FUN_1032c3ef8(void)

{
  return ZEXT816(0x110637068);
}



/* Entry: 1032c3f1c; end: 1032c3f6f;  */

void FUN_1032c3f1c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032c3f70; end: 1032c41eb;  */

void FUN_1032c3f70(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_1032c432c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1032e35c0(0);
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
  func_0x0001032e320c();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_1032e3438();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 1032c41ec; end: 1032c4227;  */

void FUN_1032c41ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c4228; end: 1032c422f;  */

undefined8 FUN_1032c4228(void)

{
  return 0x1b;
}



/* Entry: 1032c4230; end: 1032c42b3;  */

void FUN_1032c4230(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032c436c,param_2,FUN_1032c4370,param_2,FUN_1032c4398,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032c42b4; end: 1032c42fb;  */

undefined8 FUN_1032c42b4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1032e3474();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1032c42fc; end: 1032c432b;  */

undefined ** FUN_1032c42fc(void)

{
  return &PTR_DAT_113081d48;
}



/* Entry: 1032c432c; end: 1032c434b;  */

void FUN_1032c432c(void)

{
  func_0x000107c61168(&PTR_PTR_112f537b8);
  return;
}



/* Entry: 1032c434c; end: 1032c436f;  */

undefined1  [16] FUN_1032c434c(void)

{
  return ZEXT816(0x1106370e8);
}



/* Entry: 1032c4370; end: 1032c4397;  */

void FUN_1032c4370(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032c4398; end: 1032c439f;  */

undefined8 FUN_1032c4398(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1032e3474();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1032c43a0; end: 1032c44c3;  */

void FUN_1032c43a0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1032c4694();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_1032e267c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001032e2544();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  func_0x0001032e2578();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 1032c44c4; end: 1032c45a3;  */

long FUN_1032c44c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_1032e267c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001032e2544();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x0001032e2578();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 1032c45a4; end: 1032c45d7;  */

void FUN_1032c45a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032c45d8; end: 1032c45df;  */

undefined8 FUN_1032c45d8(void)

{
  return 0x1b;
}



/* Entry: 1032c45e0; end: 1032c4663;  */

void FUN_1032c45e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032c46d4,param_2,FUN_1032c46d8,param_2,0x1032c4700,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032c4664; end: 1032c4693;  */

undefined ** FUN_1032c4664(void)

{
  return &PTR_DAT_113081d48;
}



/* Entry: 1032c4694; end: 1032c46b3;  */

void FUN_1032c4694(void)

{
  func_0x000107c61168(&PTR_PTR_112f53898);
  return;
}



/* Entry: 1032c46b4; end: 1032c46d7;  */

undefined1  [16] FUN_1032c46b4(void)

{
  return ZEXT816(0x110637168);
}



/* Entry: 1032c46d8; end: 1032c472b;  */

void FUN_1032c46d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032c472c; end: 1032c4927;  */

void FUN_1032c472c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_1032c4a84();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  func_0x0001032e2e98(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uStack_78);
  func_0x0001032e2bec(uStack_58,uVar1,uVar2,uVar3,uStack_78);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_1032e2e64();
  *(undefined8 *)(param_2 + 0x38) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 1032c4928; end: 1032c4973;  */

void FUN_1032c4928(void)

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



/* Entry: 1032c4974; end: 1032c49c7;  */

void FUN_1032c4974(undefined8 *param_1)

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



/* Entry: 1032c49c8; end: 1032c49cf;  */

undefined8 FUN_1032c49c8(void)

{
  return 0x1b;
}



/* Entry: 1032c49d0; end: 1032c4a53;  */

void FUN_1032c49d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1032c4ad4,param_2,FUN_1032c4ad8,param_2,0x1032c4b00,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032c4a54; end: 1032c4a83;  */

undefined ** FUN_1032c4a54(void)

{
  return &PTR_DAT_113081d48;
}



/* Entry: 1032c4a84; end: 1032c4aa3;  */

void FUN_1032c4a84(void)

{
  func_0x000107c61168(&PTR_PTR_112f53970);
  return;
}



/* Entry: 1032c4aa4; end: 1032c4ad7;  */

undefined1  [16] FUN_1032c4aa4(void)

{
  return ZEXT816(0x1106371e8);
}



/* Entry: 1032c4ad8; end: 1032c4b2b;  */

void FUN_1032c4ad8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032c4b2c; end: 1032c4c83;  */

void FUN_1032c4b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_1032c50d4();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1032c4e14(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032c4c84; end: 1032c4ccf;  */

void FUN_1032c4c84(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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



/* Entry: 1032c4cd0; end: 1032c4d23;  */

void FUN_1032c4cd0(undefined8 *param_1)

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



/* Entry: 1032c4d24; end: 1032c4d2b;  */

undefined8 FUN_1032c4d24(void)

{
  return 0x1b;
}



/* Entry: 1032c4d2c; end: 1032c4daf;  */

void FUN_1032c4d2c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032c5124,param_2,FUN_1032c5128,param_2,FUN_1032c5150,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032c4db0; end: 1032c4dff;  */

undefined8 FUN_1032c4db0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1032c4e00; end: 1032c4e13;  */

void FUN_1032c4e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110637248;
  return;
}



/* Entry: 1032c4e14; end: 1032c50b7;  */

void FUN_1032c4e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ad020;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f139a30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef13380);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f03eba0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f139a50);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c50b8);
  (*pcVar1)();
}



/* Entry: 1032c50b8; end: 1032c50d3;  */

undefined ** FUN_1032c50b8(void)

{
  return &PTR_DAT_113081d48;
}



/* Entry: 1032c50d4; end: 1032c50f3;  */

void FUN_1032c50d4(void)

{
  func_0x000107c61168(&PTR_PTR_112f53a60);
  return;
}



/* Entry: 1032c50f4; end: 1032c5127;  */

undefined1  [16] FUN_1032c50f4(void)

{
  return ZEXT816(0x110637288);
}



/* Entry: 1032c5128; end: 1032c514f;  */

void FUN_1032c5128(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032c5150; end: 1032c5157;  */

undefined8 FUN_1032c5150(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1032c5158; end: 1032c51b7;  */

void FUN_1032c5158(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032c5448();
  func_0x000107c613fc();
  FUN_1032c51f4(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1032c51b8; end: 1032c51f3;  */

undefined8 FUN_1032c51b8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1032c51f4(param_1);
  return unaff_x20;
}



/* Entry: 1032c51f4; end: 1032c52bb;  */

void FUN_1032c51f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126ad028;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f139a30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  return;
}


