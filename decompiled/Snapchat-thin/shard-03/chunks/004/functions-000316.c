/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028fff4c; end: 1028fffcf;  */

void FUN_1028fff4c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102900090,param_2,FUN_102900094,param_2,FUN_1029000bc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028fffd0; end: 10290001f;  */

undefined8 FUN_1028fffd0(void)

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



/* Entry: 102900020; end: 10290004f;  */

undefined ** FUN_102900020(void)

{
  return &PTR_DAT_112ecc6d0;
}



/* Entry: 102900050; end: 10290006f;  */

void FUN_102900050(void)

{
  func_0x000107c61168(&PTR_PTR_112ecc4a0);
  return;
}



/* Entry: 102900070; end: 102900093;  */

undefined1  [16] FUN_102900070(void)

{
  return ZEXT816(0x110569b78);
}



/* Entry: 102900094; end: 1029000bb;  */

void FUN_102900094(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1029000bc; end: 1029000c3;  */

undefined8 FUN_1029000bc(void)

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



/* Entry: 1029000c4; end: 1029000ff;  */

void FUN_1029000c4(undefined8 *param_1,undefined8 param_2)

{
  FUN_102900100();
  func_0x0001000a7f38("SCScanResultsScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102900100; end: 1029002eb;  */

void FUN_102900100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110569f90;
  ppuVar4 = &PTR_DAT_112ecc6d0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ecc538;
  func_0x0001000285a8(0x112ecc538,&UNK_10daf05e0);
  func_0x0001000a6ee8(&UNK_110569b78,"SCScanResultsEntryPointWrapperScopeInitializationPluginKey",
                      0x3a,2,FUN_102900360,param_1,uVar2,&UNK_110569b78,&PTR_DAT_112ecc438);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110569bc8;
  func_0x000107c613fc(&UNK_110569bc8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110569998,"SCScanResultsScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_102900410,puVar3,uVar2,&UNK_110569998,&PTR_DAT_112ecc3a8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110569bf0;
  func_0x000107c613fc(&UNK_110569bf0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110569e68,"ScanResultsScopeGraphBridgeScopeInitializationPluginKey",0x37,
                      2,FUN_102900418,puVar3,uVar2,&UNK_110569e68,&PTR_DAT_112ecc5e0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ecc540;
  func_0x0001000285a8(0x112ecc540,&UNK_10daf05e8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1029002ec; end: 10290035f;  */

void FUN_1029002ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10290048c;
  func_0x0001000823a8(0x10290048c,param_3);
  func_0x000100082720("SCScanResultsEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102900360; end: 102900367;  */

void FUN_102900360(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10290048c;
  func_0x0001000823a8();
  func_0x000100082720("SCScanResultsEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102900368; end: 10290040f;  */

void FUN_102900368(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110569c18;
  func_0x000107c613fc(&UNK_110569c18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102900484;
  func_0x0001000823a8(FUN_102900484,puVar1);
  func_0x000100082720("SCScanResultsScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102900410; end: 102900417;  */

void FUN_102900410(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110569c18;
  func_0x000107c613fc(&UNK_110569c18,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102900484;
  func_0x0001000823a8(FUN_102900484,puVar3);
  func_0x000100082720("SCScanResultsScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102900418; end: 102900457;  */

void FUN_102900418(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102900e6c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ScanResultsScopeGraphBridgeScopeInitializationPluginProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102900458; end: 102900483;  */

void FUN_102900458(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102900484; end: 102900493;  */

void FUN_102900484(undefined8 *param_1)

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
  puVar1 = &UNK_110569a20;
  func_0x000107c613fc(&UNK_110569a20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028fed9c;
  func_0x00010058fa64(FUN_1028fed9c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102900494; end: 1029005ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102900494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_102900928();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_2;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uVar1 = uStack_68;
    uStack_70 = param_3;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_68);
    uStack_70 = param_4;
    func_0x000100087c34(&uStack_70);
    func_0x000107c61574(uStack_68);
    *(long *)(unaff_x20 + _DAT_112ecc548) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ecc550) = param_5;
    func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029005f0);
  (*pcVar2)();
}



/* Entry: 1029005f0; end: 10290064f; -[_TtC27ScanResultsScopeGraphBridge42ScanResultsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1029005f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScanResultsScopeGraphBridge.ScanResultsScopeGraphBridgeSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10290061c);
  (*pcVar1)();
}



/* Entry: 102900650; end: 102900687; -[_TtC27ScanResultsScopeGraphBridge42ScanResultsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010290066c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102900670) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102900650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc548));
  return;
}



/* Entry: 102900688; end: 1029006af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102900688(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ecc550),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ecc548));
  return;
}



/* Entry: 1029006b0; end: 1029006cf;  */

void FUN_1029006b0(void)

{
  func_0x000107c61168(&PTR_PTR_11286ede0);
  return;
}



/* Entry: 1029006d0; end: 102900757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029006d0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc580) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ecc588);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102900758);
  (*pcVar2)();
}



/* Entry: 102900758; end: 10290083f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102900758(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ecc580);
  *(undefined **)(unaff_x20 + _DAT_112ecc580) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ecc588);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ecc588))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110569ce0;
  func_0x000107c613fc(&UNK_110569ce0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102900844,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102900840; end: 10290084b;  */

void FUN_102900840(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10290084c; end: 1029008ab; -[_TtC27ScanResultsScopeGraphBridge42SCScanResultsScopedServicesSaberEntryPoint init] */

void FUN_10290084c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScanResultsScopeGraphBridge.SCScanResultsScopedServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102900878);
  (*pcVar1)();
}



/* Entry: 1029008ac; end: 1029008e3; -[_TtC27ScanResultsScopeGraphBridge42SCScanResultsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029008ac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecc588));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc580));
  return;
}



/* Entry: 1029008e4; end: 1029008e7;  */

void FUN_1029008e4(void)

{
  return;
}



/* Entry: 1029008e8; end: 102900907;  */

void FUN_1029008e8(void)

{
  FUN_102900758();
  return;
}



/* Entry: 102900908; end: 102900927;  */

void FUN_102900908(void)

{
  func_0x000107c61168(&PTR_PTR_11286eea8);
  return;
}



/* Entry: 102900928; end: 1029009f7;  */

undefined8 FUN_102900928(void)

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
  
  func_0x000107c61428(0x112ecc5b8,&uStack_40,0x20,0);
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
    FUN_1029009f8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1029009f8; end: 102900a17;  */

void FUN_1029009f8(void)

{
  func_0x000107c61168(&PTR_PTR_11286ef70);
  return;
}



/* Entry: 102900a18; end: 102900b53;  */

void FUN_102900a18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecc5c0,&UNK_10daf0698);
  puVar1 = &UNK_110569d28;
  func_0x000107c613fc(&UNK_110569d28,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102900b54,puVar1);
  return;
}



/* Entry: 102900b54; end: 102900b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102900b54(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_1029009f8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112ecc5c8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ecc5d0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ecc5d8) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102900b60; end: 102900bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102900b60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc5c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc5d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc5d8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102900bd4; end: 102900c33; -[_TtC27ScanResultsScopeGraphBridge35ScanResultsScopeGraphBridgeServices init] */

void FUN_102900bd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScanResultsScopeGraphBridge.ScanResultsScopeGraphBridgeServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102900c00);
  (*pcVar1)();
}



/* Entry: 102900c34; end: 102900cbb; -[_TtC27ScanResultsScopeGraphBridge35ScanResultsScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102900c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102900c54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102900c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecc5d0));
  return;
}



/* Entry: 102900cbc; end: 102900cd7;  */

void FUN_102900cbc(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102901100,param_1);
  return;
}



/* Entry: 102900cd8; end: 102900d17;  */

void FUN_102900cd8(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10290110c,0);
  return;
}



/* Entry: 102900d18; end: 102900d33;  */

void FUN_102900d18(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102900d34,param_1);
  return;
}



/* Entry: 102900d34; end: 102900da7;  */

void FUN_102900d34(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102900da8; end: 102900dbb;  */

void FUN_102900da8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102900dbc; end: 102900df7;  */

void FUN_102900dbc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  func_0x00010008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102900df8; end: 102900e13;  */

void FUN_102900df8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e910,&UNK_10d93ef88);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x102901104,param_1);
  return;
}



/* Entry: 102900e14; end: 102900e63;  */

void FUN_102900e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102900e64; end: 102900e6b;  */

undefined8 FUN_102900e64(void)

{
  return 0x1b;
}



/* Entry: 102900e6c; end: 102900fe3;  */

void FUN_102900e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110569d50;
  func_0x000107c613fc(&UNK_110569d50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102900fe4,puVar1);
  return;
}



/* Entry: 102900fe4; end: 102900feb;  */

void FUN_102900fe4(undefined8 *param_1)

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
  func_0x000107c61428(0x112ecc5b8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ecc5b8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110569ea8;
  func_0x000107c613fc(&UNK_110569ea8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029010f8;
  func_0x00010058fa64(0x1029010f8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102900fec; end: 102901047;  */

void FUN_102900fec(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ecc5b8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ecc5b8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102901048; end: 10290110f;  */

undefined ** FUN_102901048(void)

{
  return &PTR_DAT_112ecc6d0;
}



/* Entry: 102901110; end: 102901157; -[SCScanResultsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901110(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc630;
  func_0x000107c61428(param_1 + _DAT_112ecc630,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102901158; end: 1029011af; -[SCScanResultsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901158(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc630;
  func_0x000107c61428(param_1 + _DAT_112ecc630,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029011b0; end: 1029011f7; -[SCScanResultsScopeGraphBridgeSaberEntryPoint sCUnifiedPublicProfilesPresenterScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029011b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc638;
  func_0x000107c61428(param_1 + _DAT_112ecc638,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029011f8; end: 102901203; -[SCScanResultsScopeGraphBridgeSaberEntryPoint setSCUnifiedPublicProfilesPresenterScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029011f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc638;
  func_0x000107c61428(param_1 + _DAT_112ecc638,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102901204; end: 10290124b; -[SCScanResultsScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901204(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc640;
  func_0x000107c61428(param_1 + _DAT_112ecc640,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10290124c; end: 102901257; -[SCScanResultsScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10290124c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc640;
  func_0x000107c61428(param_1 + _DAT_112ecc640,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102901258; end: 10290129f; -[SCScanResultsScopeGraphBridgeSaberEntryPoint sCScanResultsViewModelProviderScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901258(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc648;
  func_0x000107c61428(param_1 + _DAT_112ecc648,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029012a0; end: 1029012ab; -[SCScanResultsScopeGraphBridgeSaberEntryPoint setSCScanResultsViewModelProviderScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029012a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc648;
  func_0x000107c61428(param_1 + _DAT_112ecc648,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029012ac; end: 1029012f3; -[SCScanResultsScopeGraphBridgeSaberEntryPoint scanResultsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029012ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc650;
  func_0x000107c61428(param_1 + _DAT_112ecc650,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029012f4; end: 1029012ff; -[SCScanResultsScopeGraphBridgeSaberEntryPoint setScanResultsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029012f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc650;
  func_0x000107c61428(param_1 + _DAT_112ecc650,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102901300; end: 10290135f;  */

void FUN_102901300(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102901360; end: 102901623;  */

/* WARNING: Possible PIC construction at 0x000102901528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102901538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290155c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290156c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010290157c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029015e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029015f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029015d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029015fc) */
/* WARNING: Removing unreachable block (ram,0x0001029015ec) */
/* WARNING: Removing unreachable block (ram,0x000102901580) */
/* WARNING: Removing unreachable block (ram,0x000102901570) */
/* WARNING: Removing unreachable block (ram,0x000102901560) */
/* WARNING: Removing unreachable block (ram,0x00010290153c) */
/* WARNING: Removing unreachable block (ram,0x00010290152c) */
/* WARNING: Removing unreachable block (ram,0x0001029015dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901360(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c514dc();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c5e1d0();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c51260();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        func_0x000107c51884();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar6 = 0;
          FUN_1029006b0();
          lVar4 = lVar6;
          func_0x000107c610f8();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          lVar5 = lVar3;
          FUN_102900928();
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102901624);
            (*pcVar2)();
          }
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          uVar1 = uStack_68;
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uVar1);
          func_0x000100083b20(&uStack_68);
          func_0x000100087c34(auStack_70);
          func_0x000107c61574(uStack_68);
          *(long *)(lVar4 + _DAT_112ecc548) = lVar5;
          *(long *)(lVar4 + _DAT_112ecc550) = unaff_x20;
          lStack_80 = lVar4;
          lStack_78 = lVar6;
          func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 102901624; end: 10290164b; -[SCScanResultsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102901624(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102901360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10290164c; end: 10290168f; -[SCScanResultsScopeGraphBridgeSaberEntryPoint end] */

void FUN_10290164c(undefined8 param_1)

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



/* Entry: 102901690; end: 10290196b;  */

void FUN_102901690(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffd4) && (param_3 == -0x7ffffffef0f88d30)) ||
       (func_0x000107c605b8(0xd00000000000002c,0x800000010f0772d0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58a84();
    }
    else {
      uVar2 = 0xd000000000000017;
      if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ed990)) ||
         (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a68c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0f34c00)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000002a,0x800000010f0cb400,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0f34bd0)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd00000000000002a,0x800000010f0cb430,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "ScanResultsScopeGraphBridge/SCScanResultsScopeGraphBridgeSaberEntryPoint.swift"
                                    ,0x4e,2,0x44,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10290196c);
                (*pcVar1)();
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58c18();
            goto LAB_10290171c;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58808();
      }
    }
  }
LAB_10290171c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10290196c; end: 102901a17; -[SCScanResultsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10290196c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102901690(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102901a18; end: 102901aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901a18(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ecc630,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ecc638) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc640) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc648) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc650) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecc658) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102901aa8; end: 102901ac7; -[SCScanResultsScopeGraphBridgeSaberEntryPoint init] */

void FUN_102901aa8(void)

{
  FUN_102901a18();
  return;
}



/* Entry: 102901ac8; end: 102901afb;  */

void FUN_102901ac8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102901afc; end: 102901b73; -[SCScanResultsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102901b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102901b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102901b2c) */
/* WARNING: Removing unreachable block (ram,0x000102901b4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901afc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecc630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc638));
  return;
}



/* Entry: 102901b74; end: 102901b93;  */

void FUN_102901b74(void)

{
  func_0x000107c61168(&PTR_PTR_11286f040);
  return;
}



/* Entry: 102901b94; end: 102901bdb; -[SCSCScanResultsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901b94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc688;
  func_0x000107c61428(param_1 + _DAT_112ecc688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102901bdc; end: 102901c33; -[SCSCScanResultsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc688;
  func_0x000107c61428(param_1 + _DAT_112ecc688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102901c34; end: 102901d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901c34(undefined8 param_1,long param_2)

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
    FUN_102900908();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ecc580) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102901d0c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ecc588);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ecc690);
    *(long **)(unaff_x20 + _DAT_112ecc690) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102901d0c; end: 102901d33; -[SCSCScanResultsScopedServicesSaberEntryPoint begin] */

void FUN_102901d0c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102901c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102901d34; end: 102901eab;  */

/* WARNING: Possible PIC construction at 0x000102901d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102901e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102901da0) */
/* WARNING: Removing unreachable block (ram,0x000102901e38) */
/* WARNING: Removing unreachable block (ram,0x000102901e50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102901d34(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecc690);
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



/* Entry: 102901eac; end: 102901eb3;  */

void FUN_102901eac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102901eb4; end: 102901ee7; -[SCSCScanResultsScopedServicesSaberEntryPoint end] */

void FUN_102901eb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102901d34();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102901ee8; end: 102902007;  */

void FUN_102901ee8(long param_1,long param_2,long param_3)

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
                        "ScanResultsScopeGraphBridge/SCSCScanResultsScopedServicesSaberEntryPoint.swift"
                        ,0x4e,2,0x34,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102902008);
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



/* Entry: 102902008; end: 1029020b3; -[SCSCScanResultsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102902008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102901ee8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029020b4; end: 102902113; -[SCSCScanResultsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029020b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecc688,0);
  *(undefined8 *)(param_1 + _DAT_112ecc690) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102902114; end: 102902147;  */

void FUN_102902114(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102902148; end: 10290217f; -[SCSCScanResultsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102902148(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecc688);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc690));
  return;
}



/* Entry: 102902180; end: 10290219f;  */

void FUN_102902180(void)

{
  func_0x000107c61168(&PTR_PTR_11286f120);
  return;
}



/* Entry: 1029021a0; end: 1029021eb;  */

void FUN_1029021a0(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecc6c0,&UNK_10daf09d0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029021ec,param_1);
  return;
}



/* Entry: 1029021ec; end: 102902253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029021ec(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102902468();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ecc6c8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102902254; end: 10290229f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102902254(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc6c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029022a0; end: 102902383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1029022a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126ab898;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c48f88();
  func_0x000107c61170(param_3);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(apuStack_78[0]);
  return puVar1;
}



/* Entry: 102902384; end: 102902467; -[_TtC23SCScanResultsScopeProxy26SCScanResultsScopeServices buildWithUIContainer:scanAnalysisObservables:scanSessionId:scanActionRouter:scanSource:scanResultsDelegate:] */

void FUN_102902384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_5);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1029022a0(param_3,param_4,param_5,param_2,param_6,param_7,param_8);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102902468; end: 1029024b7;  */

void FUN_102902468(void)

{
  func_0x000107c61168(&PTR_PTR_11286f1e0);
  return;
}



/* Entry: 1029024b8; end: 1029024e7; -[_TtC23SCScanResultsScopeProxy26SCScanResultsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029024b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecc6c8));
  return;
}



/* Entry: 1029024e8; end: 102902553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029024e8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100342b88();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ecc718) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102902554; end: 10290255b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102902554(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100342b88();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ecc718) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10290255c; end: 1029025a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10290255c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc718) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029025a8; end: 1029027a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029025a8(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x0001048575f8();
  func_0x000107c61574(lVar1);
  puVar3 = &UNK_10daf0ac8;
  func_0x000107c614e0(&UNK_10daf0ac8);
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar10 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar10;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102902754);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c6157c(uVar9);
        }
        else {
          uVar9 = uVar8;
          FUN_102902b74(uVar8,param_1);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102902750);
          (*pcVar2)();
        }
        uVar11 = uVar8 + 1;
        uStack_70 = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c614bc(&lStack_68,&uStack_70,puVar3);
        func_0x000107c61578(uVar9,2);
        lVar1 = lStack_68;
        if (lStack_68 == 0) break;
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          FUN_102902894(0,puVar4 + 1,1,puVar6);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar9 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_102902894(puVar6,uVar8 + 1,1,puVar5);
          uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
        *(long *)(uVar9 + uVar8 * 8 + 0x20) = lVar1;
        uVar8 = uVar11;
        if (uVar11 == uVar7) goto LAB_102902770;
      }
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar7);
  }
LAB_102902770:
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(param_1);
  return puVar6;
}



/* Entry: 1029027a4; end: 1029027c3;  */

void FUN_1029027a4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1029027c4; end: 102902823; -[_TtC44SCScanResultsViewModelProviderPluginRegistry51SCScanResultsViewModelProviderPluginFactoryServices buildSaberPlugins] */

void FUN_1029027c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029025a8();
  func_0x000107c61170(param_1);
  uVar2 = 0x112ecc748;
  func_0x0001000285a8(0x112ecc748,&UNK_10daf0bb8);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102902824; end: 102902883; -[_TtC44SCScanResultsViewModelProviderPluginRegistry51SCScanResultsViewModelProviderPluginFactoryServices init] */

void FUN_102902824(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCScanResultsViewModelProviderPluginRegistry.SCScanResultsViewModelProviderPluginFactoryServices"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102902850);
  (*pcVar1)();
}



/* Entry: 102902884; end: 102902893; -[_TtC44SCScanResultsViewModelProviderPluginRegistry51SCScanResultsViewModelProviderPluginFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102902884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecc718));
  return;
}



/* Entry: 102902894; end: 1029029bb;  */

ulong FUN_102902894(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029029bc);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1029029bc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029029b8);
      (*pcVar1)();
    }
    FUN_102902a3c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1029029bc; end: 102902a3b;  */

undefined * FUN_1029029bc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_102902b60();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}


