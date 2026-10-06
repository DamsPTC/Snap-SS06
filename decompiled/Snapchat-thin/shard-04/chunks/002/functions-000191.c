/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032bf420; end: 1032bf56f;  */

undefined8 * FUN_1032bf420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1032bf570; end: 1032bf5f3;  */

undefined8 * FUN_1032bf570(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[9] = param_2[9];
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xc] = param_2[0xc];
  return param_1;
}



/* Entry: 1032bf5f4; end: 1032bf6b7;  */

int FUN_1032bf5f4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032bf6b8; end: 1032bf713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bf6b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f53120);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032bf714; end: 1032bf773; -[SCSpeedTestServices init] */

void FUN_1032bf714(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpeedTestServices.SpeedTestServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032bf740);
  (*pcVar1)();
}



/* Entry: 1032bf774; end: 1032bf783; -[SCSpeedTestServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bf774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f53120));
  return;
}



/* Entry: 1032bf784; end: 1032bf793; -[_TtC22SIGCodematizerServices22SIGCodematizerServices codematizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bf784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f53150));
  return;
}



/* Entry: 1032bf794; end: 1032bf82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bf794(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f53150) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032bf82c; end: 1032bf883; -[_TtC22SIGCodematizerServices22SIGCodematizerServices initWithCodematizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bf82c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f53150) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1032bf884; end: 1032bf8e3; -[_TtC22SIGCodematizerServices22SIGCodematizerServices init] */

void FUN_1032bf884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SIGCodematizerServices.SIGCodematizerServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032bf8b0);
  (*pcVar1)();
}



/* Entry: 1032bf8e4; end: 1032bf8f3; -[_TtC22SIGCodematizerServices22SIGCodematizerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bf8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f53150));
  return;
}



/* Entry: 1032bf8f4; end: 1032bf913;  */

void FUN_1032bf8f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128ca470);
  return;
}



/* Entry: 1032bf914; end: 1032bf97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bf914(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1032bfd08();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f53188) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1032bf980; end: 1032bf9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bf980(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f53188) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032bf9ec; end: 1032bfa4b; -[_TtC49LegacyLiveLensPreviewScopedFactoryServiceProvider37SCLegacyLiveLensPreviewScopedServices init] */

void FUN_1032bf9ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyLiveLensPreviewScopedFactoryServiceProvider.SCLegacyLiveLensPreviewScopedServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032bfa18);
  (*pcVar1)();
}



/* Entry: 1032bfa4c; end: 1032bfa5b; -[_TtC49LegacyLiveLensPreviewScopedFactoryServiceProvider37SCLegacyLiveLensPreviewScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bfa4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f53188));
  return;
}



/* Entry: 1032bfa5c; end: 1032bfac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032bfa5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110636708;
  func_0x000107c613fc(&UNK_110636708,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1032bfda0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1032bfac8; end: 1032bfb63;  */

void FUN_1032bfac8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110636618;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110636618;
  return;
}



/* Entry: 1032bfb64; end: 1032bfb9b;  */

void FUN_1032bfb64(long *param_1)

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



/* Entry: 1032bfb9c; end: 1032bfba3;  */

undefined8 FUN_1032bfb9c(void)

{
  return 0x1b;
}



/* Entry: 1032bfba4; end: 1032bfcd7;  */

void FUN_1032bfba4(undefined8 *param_1)

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
  puVar1 = &UNK_110636730;
  func_0x000107c613fc(&UNK_110636730,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032bfd78;
  func_0x00010058fa64(FUN_1032bfd78,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032bfcd8; end: 1032bfd07;  */

undefined ** FUN_1032bfcd8(void)

{
  return &PTR_DAT_113066be0;
}



/* Entry: 1032bfd08; end: 1032bfd27;  */

void FUN_1032bfd08(void)

{
  func_0x000107c61168(&PTR_PTR_1128ca530);
  return;
}



/* Entry: 1032bfd28; end: 1032bfd77;  */

undefined1  [16] FUN_1032bfd28(void)

{
  return ZEXT816(0x110636668);
}



/* Entry: 1032bfd78; end: 1032bfd9f;  */

void FUN_1032bfd78(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1032bfda0; end: 1032bfda3;  */

void FUN_1032bfda0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032bfda4; end: 1032bfe1f;  */

void FUN_1032bfda4(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f531f8,&UNK_10dbaa158);
  func_0x000107c613fc();
  pcVar1 = FUN_1032c01a0;
  func_0x0001000841fc(FUN_1032c01a0,param_2);
  func_0x000100084214(&UNK_10dbaa120,0x33,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1032bfe20; end: 1032bfe37;  */

void FUN_1032bfe20(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f531f8,&UNK_10dbaa158);
  func_0x000107c613fc();
  pcVar1 = FUN_1032c01a0;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10dbaa120,0x33,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1032bfe38; end: 1032c019f;  */

void FUN_1032bfe38(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f53200,&UNK_10dbaa160);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1032c10b0();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_1032c113c();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1032bfb64;
  func_0x0001000823a8(FUN_1032bfb64,0);
  func_0x000100082720("SCLegacyLiveLensPreviewScopedServicesCleanupRelayServiceProvider",0x40,2);
  puVar5 = puVar2;
  FUN_1032c0f64();
  func_0x000100082720("LegacyLiveLensPreviewScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f53208,&UNK_10dbaa170);
  puVar6 = &UNK_110636790;
  func_0x000107c613fc(&UNK_110636790,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1032c01a8;
  func_0x0001000823a8(0x1032c01a8,puVar6);
  func_0x000100082720("SCLegacyLiveLensPreviewUIEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f53210,&UNK_10dbaa178);
  puVar6 = &UNK_1106367b8;
  func_0x000107c613fc(&UNK_1106367b8,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar10);
  uVar7 = 0x1032c01b4;
  func_0x0001000823a8(0x1032c01b4,puVar6);
  func_0x000100082720("SCLegacyLiveLensPreviewScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f53190,&UNK_10dba9eb0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1032c01c0;
  func_0x0001000823a8(0x1032c01c0,uVar7);
  func_0x000100082720("SCLegacyLiveLensPreviewScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f53180,&UNK_10dba9ea0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1032c01c8;
  func_0x0001000823a8(0x1032c01c8,uVar8);
  func_0x000100082720("SCLegacyLiveLensPreviewScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1106367e0;
  func_0x000107c613fc(&UNK_1106367e0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1032c01d0;
  func_0x0001000823a8(0x1032c01d0,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLegacyLiveLensPreviewScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1032c01a0; end: 1032c01d7;  */

void FUN_1032c01a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f53200,&UNK_10dbaa160);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1032c10b0();
  func_0x000100082720("SCCameraUIScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_1032c113c();
  func_0x000100082720("SCCameraUIScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1032bfb64;
  func_0x0001000823a8(FUN_1032bfb64,0);
  func_0x000100082720("SCLegacyLiveLensPreviewScopedServicesCleanupRelayServiceProvider",0x40,2);
  puVar5 = puVar2;
  FUN_1032c0f64();
  func_0x000100082720("LegacyLiveLensPreviewScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f53208,&UNK_10dbaa170);
  puVar6 = &UNK_110636790;
  func_0x000107c613fc(&UNK_110636790,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1032c01a8;
  func_0x0001000823a8(0x1032c01a8,puVar6);
  func_0x000100082720("SCLegacyLiveLensPreviewUIEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f53210,&UNK_10dbaa178);
  puVar6 = &UNK_1106367b8;
  func_0x000107c613fc(&UNK_1106367b8,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar10);
  uVar7 = 0x1032c01b4;
  func_0x0001000823a8(0x1032c01b4,puVar6);
  func_0x000100082720("SCLegacyLiveLensPreviewScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112f53190,&UNK_10dba9eb0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1032c01c0;
  func_0x0001000823a8(0x1032c01c0,uVar7);
  func_0x000100082720("SCLegacyLiveLensPreviewScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f53180,&UNK_10dba9ea0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1032c01c8;
  func_0x0001000823a8(0x1032c01c8,uVar8);
  func_0x000100082720("SCLegacyLiveLensPreviewScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1106367e0;
  func_0x000107c613fc(&UNK_1106367e0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1032c01d0;
  func_0x0001000823a8(0x1032c01d0,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLegacyLiveLensPreviewScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1032c01d8; end: 1032c0287;  */

void FUN_1032c01d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1032c061c();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1032c041c(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032c0288; end: 1032c02f7;  */

undefined8 FUN_1032c0288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1032c041c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 1032c02f8; end: 1032c032b;  */

void FUN_1032c02f8(void)

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



/* Entry: 1032c032c; end: 1032c0333;  */

undefined8 FUN_1032c032c(void)

{
  return 0x1b;
}



/* Entry: 1032c0334; end: 1032c03b7;  */

void FUN_1032c0334(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1032c065c,param_2,FUN_1032c0660,param_2,FUN_1032c0688,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1032c03b8; end: 1032c0407;  */

undefined8 FUN_1032c03b8(void)

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



/* Entry: 1032c0408; end: 1032c041b;  */

void FUN_1032c0408(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1106367f8;
  return;
}



/* Entry: 1032c041c; end: 1032c05ff;  */

void FUN_1032c041c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112e4bb30,&UNK_10da45170);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ad018;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536172656d6163;
  func_0x000107c5fadc(0x63536172656d6163,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0714b0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0714d0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1032c0600; end: 1032c061b;  */

undefined ** FUN_1032c0600(void)

{
  return &PTR_DAT_113066be0;
}



/* Entry: 1032c061c; end: 1032c063b;  */

void FUN_1032c061c(void)

{
  func_0x000107c61168(&PTR_PTR_112f53280);
  return;
}



/* Entry: 1032c063c; end: 1032c065f;  */

undefined1  [16] FUN_1032c063c(void)

{
  return ZEXT816(0x110636838);
}



/* Entry: 1032c0660; end: 1032c0687;  */

void FUN_1032c0660(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1032c0688; end: 1032c068f;  */

undefined8 FUN_1032c0688(void)

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



/* Entry: 1032c0690; end: 1032c06cb;  */

void FUN_1032c0690(undefined8 *param_1,undefined8 param_2)

{
  FUN_1032c06cc();
  func_0x0001000a7f38("SCLegacyLiveLensPreviewScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1032c06cc; end: 1032c08b7;  */

void FUN_1032c06cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d640;
  ppuVar4 = &PTR_DAT_113066be0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110636888;
  func_0x000107c613fc(&UNK_110636888,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f532f0;
  func_0x0001000285a8(0x112f532f0,&UNK_10dbaa2d0);
  func_0x0001000a6ee8(&UNK_110636ad8,
                      "LegacyLiveLensPreviewScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_1032c08b8,puVar2,uVar3,&UNK_110636ad8,&PTR_DAT_112f53388);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1106368b0;
  func_0x000107c613fc(&UNK_1106368b0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106366a8,
                      "SCLegacyLiveLensPreviewScopedServicesScopeInitializationPluginKey",0x41,2,
                      FUN_1032c09a0,puVar2,uVar3,&UNK_1106366a8,&PTR_DAT_112f53198);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110636838,
                      "SCLegacyLiveLensPreviewUIEntryPointWrapperScopeInitializationPluginKey",0x46,
                      2,FUN_1032c0a1c,param_4,uVar3,&UNK_110636838,&PTR_DAT_112f53218);
  func_0x000107c61574(param_4);
  uVar3 = 0x112f532f8;
  func_0x0001000285a8(0x112f532f8,&UNK_10dbaa2d8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1032c08b8; end: 1032c08f7;  */

void FUN_1032c08b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1032c11e4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LegacyLiveLensPreviewScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032c08f8; end: 1032c099f;  */

void FUN_1032c08f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1106368d8;
  func_0x000107c613fc(&UNK_1106368d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1032c0a58;
  func_0x0001000823a8(FUN_1032c0a58,puVar1);
  func_0x000100082720("SCLegacyLiveLensPreviewScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1032c09a0; end: 1032c09a7;  */

void FUN_1032c09a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1106368d8;
  func_0x000107c613fc(&UNK_1106368d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1032c0a58;
  func_0x0001000823a8(FUN_1032c0a58,puVar3);
  func_0x000100082720("SCLegacyLiveLensPreviewScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1032c09a8; end: 1032c0a1b;  */

void FUN_1032c09a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1032c0a24;
  func_0x0001000823a8(0x1032c0a24,param_3);
  func_0x000100082720("SCLegacyLiveLensPreviewUIEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032c0a1c; end: 1032c0a2b;  */

void FUN_1032c0a1c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1032c0a24;
  func_0x0001000823a8();
  func_0x000100082720("SCLegacyLiveLensPreviewUIEntryPointWrapperScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1032c0a2c; end: 1032c0a57;  */

void FUN_1032c0a2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1032c0a58; end: 1032c0a5f;  */

void FUN_1032c0a58(undefined8 *param_1)

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
  puVar1 = &UNK_110636730;
  func_0x000107c613fc(&UNK_110636730,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1032bfd78;
  func_0x00010058fa64(FUN_1032bfd78,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032c0a60; end: 1032c0b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032c0a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1032c0e74();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f53300) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f53308) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c0b3c);
  (*pcVar1)();
}



/* Entry: 1032c0b3c; end: 1032c0b9b; -[_TtC37LegacyLiveLensPreviewScopeGraphBridge52LegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint init] */

void FUN_1032c0b3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyLiveLensPreviewScopeGraphBridge.LegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c0b68);
  (*pcVar1)();
}



/* Entry: 1032c0b9c; end: 1032c0bd3; -[_TtC37LegacyLiveLensPreviewScopeGraphBridge52LegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032c0bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032c0bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c0b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f53300));
  return;
}



/* Entry: 1032c0bd4; end: 1032c0bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c0bd4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f53308),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f53300));
  return;
}



/* Entry: 1032c0bfc; end: 1032c0c1b;  */

void FUN_1032c0bfc(void)

{
  func_0x000107c61168(&PTR_PTR_1128ca5f0);
  return;
}



/* Entry: 1032c0c1c; end: 1032c0ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1032c0c1c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f53338) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f53340);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032c0ca4);
  (*pcVar2)();
}



/* Entry: 1032c0ca4; end: 1032c0d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032c0ca4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f53338);
  *(undefined **)(unaff_x20 + _DAT_112f53338) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f53340);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f53340))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106369f8;
  func_0x000107c613fc(&UNK_1106369f8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1032c0d90,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1032c0d8c; end: 1032c0d97;  */

void FUN_1032c0d8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1032c0d98; end: 1032c0df7; -[_TtC37LegacyLiveLensPreviewScopeGraphBridge52SCLegacyLiveLensPreviewScopedServicesSaberEntryPoint init] */

void FUN_1032c0d98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyLiveLensPreviewScopeGraphBridge.SCLegacyLiveLensPreviewScopedServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c0dc4);
  (*pcVar1)();
}



/* Entry: 1032c0df8; end: 1032c0e2f; -[_TtC37LegacyLiveLensPreviewScopeGraphBridge52SCLegacyLiveLensPreviewScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c0df8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f53340));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f53338));
  return;
}



/* Entry: 1032c0e30; end: 1032c0e33;  */

void FUN_1032c0e30(void)

{
  return;
}



/* Entry: 1032c0e34; end: 1032c0e53;  */

void FUN_1032c0e34(void)

{
  FUN_1032c0ca4();
  return;
}



/* Entry: 1032c0e54; end: 1032c0e73;  */

void FUN_1032c0e54(void)

{
  func_0x000107c61168(&PTR_PTR_1128ca6b8);
  return;
}



/* Entry: 1032c0e74; end: 1032c0f43;  */

undefined8 FUN_1032c0e74(void)

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
  
  func_0x000107c61428(0x112f53370,&uStack_40,0x20,0);
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
    FUN_1032c0f44();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1032c0f44; end: 1032c0f63;  */

void FUN_1032c0f44(void)

{
  func_0x000107c61168(&PTR_PTR_1128ca780);
  return;
}



/* Entry: 1032c0f64; end: 1032c0f7f;  */

void FUN_1032c0f64(undefined8 param_1)

{
  func_0x0001000285a8(0x112f53378,&UNK_10dbaa3a8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1032c0fec,param_1);
  return;
}



/* Entry: 1032c0f80; end: 1032c0feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c0f80(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1032c0f44();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f53380) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1032c0fec; end: 1032c0ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c0fec(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1032c0f44();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f53380) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1032c0ff4; end: 1032c103f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c0ff4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f53380) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032c1040; end: 1032c109f; -[_TtC37LegacyLiveLensPreviewScopeGraphBridge45LegacyLiveLensPreviewScopeGraphBridgeServices init] */

void FUN_1032c1040(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyLiveLensPreviewScopeGraphBridge.LegacyLiveLensPreviewScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c106c);
  (*pcVar1)();
}



/* Entry: 1032c10a0; end: 1032c10af; -[_TtC37LegacyLiveLensPreviewScopeGraphBridge45LegacyLiveLensPreviewScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c10a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f53380));
  return;
}



/* Entry: 1032c10b0; end: 1032c113b;  */

void FUN_1032c10b0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1032c10f0,0);
  return;
}



/* Entry: 1032c113c; end: 1032c1157;  */

void FUN_1032c113c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1032c11a8,param_1);
  return;
}



/* Entry: 1032c1158; end: 1032c11a7;  */

void FUN_1032c1158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1032c11a8; end: 1032c11db;  */

void FUN_1032c11a8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1032c11dc; end: 1032c11e3;  */

undefined8 FUN_1032c11dc(void)

{
  return 0x1b;
}



/* Entry: 1032c11e4; end: 1032c135b;  */

void FUN_1032c11e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110636a40;
  func_0x000107c613fc(&UNK_110636a40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1032c135c,puVar1);
  return;
}



/* Entry: 1032c135c; end: 1032c1363;  */

void FUN_1032c135c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f53370,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f53370,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110636b18;
  func_0x000107c613fc(&UNK_110636b18,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1032c1430;
  func_0x00010058fa64(0x1032c1430,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1032c1364; end: 1032c13bf;  */

void FUN_1032c1364(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f53370,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f53370,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1032c13c0; end: 1032c1437;  */

undefined ** FUN_1032c13c0(void)

{
  return &PTR_DAT_113066be0;
}



/* Entry: 1032c1438; end: 1032c147f; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c1438(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f533d8;
  func_0x000107c61428(param_1 + _DAT_112f533d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032c1480; end: 1032c14d7; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c1480(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f533d8;
  func_0x000107c61428(param_1 + _DAT_112f533d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1032c14d8; end: 1032c151f; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c14d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f533e0;
  func_0x000107c61428(param_1 + _DAT_112f533e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032c1520; end: 1032c152b; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c1520(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f533e0;
  func_0x000107c61428(param_1 + _DAT_112f533e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032c152c; end: 1032c1573; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint legacyLiveLensPreviewScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c152c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f533e8;
  func_0x000107c61428(param_1 + _DAT_112f533e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1032c1574; end: 1032c157f; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint setLegacyLiveLensPreviewScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c1574(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f533e8;
  func_0x000107c61428(param_1 + _DAT_112f533e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1032c1580; end: 1032c15df;  */

void FUN_1032c1580(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1032c15e0; end: 1032c179b;  */

/* WARNING: Possible PIC construction at 0x0001032c16f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c171c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c172c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032c1770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032c1730) */
/* WARNING: Removing unreachable block (ram,0x0001032c1720) */
/* WARNING: Removing unreachable block (ram,0x0001032c16fc) */
/* WARNING: Removing unreachable block (ram,0x0001032c1774) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c15e0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50b40();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4ad48();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1032c0bfc();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1032c0e74();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c179c);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112f53300) = lVar5;
      *(long *)(lVar3 + _DAT_112f53308) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1032c179c; end: 1032c17c3; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1032c179c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1032c15e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032c17c4; end: 1032c1807; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint end] */

void FUN_1032c17c4(undefined8 param_1)

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



/* Entry: 1032c1808; end: 1032c1a0b;  */

void FUN_1032c1808(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0faf8f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f050710,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0ec70e0)) &&
           (func_0x000107c605b8(0xd000000000000034,0x800000010f138f20,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "LegacyLiveLensPreviewScopeGraphBridge/SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x62,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1032c1a0c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55ba0();
        goto LAB_1032c1894;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580e8();
  }
LAB_1032c1894:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1032c1a0c; end: 1032c1ab7; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1032c1a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1032c1808(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1032c1ab8; end: 1032c1b2f; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c1ab8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f533d8,0);
  *(undefined8 *)(param_1 + _DAT_112f533e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f533e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112f533f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1032c1b30; end: 1032c1b63;  */

void FUN_1032c1b30(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032c1b64; end: 1032c1bbb; -[SCLegacyLiveLensPreviewScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032c1b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032c1b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c1b64(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f533d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f533e0));
  return;
}



/* Entry: 1032c1bbc; end: 1032c1bdb;  */

void FUN_1032c1bbc(void)

{
  func_0x000107c61168(&PTR_PTR_1128ca840);
  return;
}



/* Entry: 1032c1bdc; end: 1032c1c23; -[SCSCLegacyLiveLensPreviewScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c1bdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f53420;
  func_0x000107c61428(param_1 + _DAT_112f53420,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1032c1c24; end: 1032c1c7b; -[SCSCLegacyLiveLensPreviewScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032c1c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f53420;
  func_0x000107c61428(param_1 + _DAT_112f53420,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


