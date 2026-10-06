/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029e73d0; end: 1029e7547;  */

/* WARNING: Possible PIC construction at 0x0001029e7438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e74d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e743c) */
/* WARNING: Removing unreachable block (ram,0x0001029e74d4) */
/* WARNING: Removing unreachable block (ram,0x0001029e74ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e73d0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed5ec0);
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



/* Entry: 1029e7548; end: 1029e754f;  */

void FUN_1029e7548(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029e7550; end: 1029e7583; -[SCSCGenAIDreamsCrossSellScopedServicesSaberEntryPoint end] */

void FUN_1029e7550(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029e73d0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029e7584; end: 1029e76a3;  */

void FUN_1029e7584(long param_1,long param_2,long param_3)

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
                        "GenAIDreamsCrossSellScopeGraphBridge/SCSCGenAIDreamsCrossSellScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e76a4);
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



/* Entry: 1029e76a4; end: 1029e774f; -[SCSCGenAIDreamsCrossSellScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1029e76a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029e7584(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1029e7750; end: 1029e77af; -[SCSCGenAIDreamsCrossSellScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e7750(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed5eb8,0);
  *(undefined8 *)(param_1 + _DAT_112ed5ec0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029e77b0; end: 1029e77e3;  */

void FUN_1029e77b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029e77e4; end: 1029e781b; -[SCSCGenAIDreamsCrossSellScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e77e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed5eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed5ec0));
  return;
}



/* Entry: 1029e781c; end: 1029e783b;  */

void FUN_1029e781c(void)

{
  func_0x000107c61168(&PTR_PTR_11287bd40);
  return;
}



/* Entry: 1029e783c; end: 1029e788b;  */

void FUN_1029e783c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 1029e788c; end: 1029e789b;  */

void FUN_1029e788c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 1029e789c; end: 1029e796b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e789c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR_PTR_1126b1370;
  func_0x000107c610f8();
  func_0x000107c481e4();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x000104513654();
    puVar4 = puVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c445b0(puVar4);
      func_0x000107c615e8(puVar4);
    }
    lVar1 = _DAT_113074ba8;
    lVar5 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c61428(lVar5 + _DAT_113074ba8,auStack_48,0,0);
    lVar5 = lVar5 + lVar1;
    func_0x000107c61618();
    if (lVar5 != 0) {
      func_0x000107c422e4();
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1029e796c; end: 1029e79a7;  */

void FUN_1029e796c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029e79a8; end: 1029e79c7;  */

void FUN_1029e79a8(void)

{
  FUN_1029e789c();
  return;
}



/* Entry: 1029e79c8; end: 1029e79cf;  */

undefined8 FUN_1029e79c8(void)

{
  return 0;
}



/* Entry: 1029e79d0; end: 1029e79ef;  */

void FUN_1029e79d0(void)

{
  func_0x000107c61168(&PTR_PTR_112ed5f30);
  return;
}



/* Entry: 1029e79f0; end: 1029e7a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e79f0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029e7de4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed5fb0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029e7a5c; end: 1029e7ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e7a5c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed5fb0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029e7ac8; end: 1029e7b27; -[_TtC49GenAIDreamsOnboardingScopedFactoryServiceProvider37SCGenAIDreamsOnboardingScopedServices init] */

void FUN_1029e7ac8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsOnboardingScopedFactoryServiceProvider.SCGenAIDreamsOnboardingScopedServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e7af4);
  (*pcVar1)();
}



/* Entry: 1029e7b28; end: 1029e7b37; -[_TtC49GenAIDreamsOnboardingScopedFactoryServiceProvider37SCGenAIDreamsOnboardingScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e7b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed5fb0));
  return;
}



/* Entry: 1029e7b38; end: 1029e7ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e7b38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110581318;
  func_0x000107c613fc(&UNK_110581318,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1029e7e7c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1029e7ba4; end: 1029e7c3f;  */

void FUN_1029e7ba4(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110581228;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110581228;
  return;
}



/* Entry: 1029e7c40; end: 1029e7c77;  */

void FUN_1029e7c40(long *param_1)

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



/* Entry: 1029e7c78; end: 1029e7c7f;  */

undefined8 FUN_1029e7c78(void)

{
  return 0x1b;
}



/* Entry: 1029e7c80; end: 1029e7db3;  */

void FUN_1029e7c80(undefined8 *param_1)

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
  puVar1 = &UNK_110581340;
  func_0x000107c613fc(&UNK_110581340,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029e7e54;
  func_0x00010058fa64(FUN_1029e7e54,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029e7db4; end: 1029e7de3;  */

undefined ** FUN_1029e7db4(void)

{
  return &PTR_DAT_113066b68;
}



/* Entry: 1029e7de4; end: 1029e7e03;  */

void FUN_1029e7de4(void)

{
  func_0x000107c61168(&PTR_PTR_11287be00);
  return;
}



/* Entry: 1029e7e04; end: 1029e7e53;  */

undefined1  [16] FUN_1029e7e04(void)

{
  return ZEXT816(0x110581278);
}



/* Entry: 1029e7e54; end: 1029e7e7b;  */

void FUN_1029e7e54(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1029e7e7c; end: 1029e7e7f;  */

void FUN_1029e7e7c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029e7e80; end: 1029e7f6f;  */

/* WARNING: Possible PIC construction at 0x0001029e7f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e7f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e7f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e7f44) */
/* WARNING: Removing unreachable block (ram,0x0001029e7f34) */
/* WARNING: Removing unreachable block (ram,0x0001029e7f54) */

void FUN_1029e7e80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1105813c8;
  func_0x000107c613fc(&UNK_1105813c8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112ed6020;
  func_0x0001000285a8(0x112ed6020,&UNK_10db003a8);
  func_0x000107c613fc();
  pcVar3 = FUN_1029e8404;
  func_0x0001000841fc(FUN_1029e8404,puVar1,uVar2);
  func_0x000100084214(&UNK_10db00370,0x33,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1029e7f70; end: 1029e7f8f;  */

/* WARNING: Possible PIC construction at 0x0001029e7f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e7f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e7f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e7f44) */
/* WARNING: Removing unreachable block (ram,0x0001029e7f34) */
/* WARNING: Removing unreachable block (ram,0x0001029e7f54) */

void FUN_1029e7f70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_1105813c8;
  func_0x000107c613fc(&UNK_1105813c8,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112ed6020;
  func_0x0001000285a8(0x112ed6020,&UNK_10db003a8);
  func_0x000107c613fc();
  pcVar8 = FUN_1029e8404;
  func_0x0001000841fc(FUN_1029e8404,puVar6,uVar7);
  func_0x000100084214(&UNK_10db00370,0x33,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029e7f90; end: 1029e83b7;  */

void FUN_1029e7f90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112ed6028,&UNK_10db003b0);
  puVar1 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001029e96b4();
  pcVar3 = "SCGenerativeAIOnboardingScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCGenerativeAIOnboardingScopeExposerSubjectServiceProvider",0x3a,2);
  FUN_1029e9700();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar4 = puVar2;
  FUN_1029e96f4();
  func_0x000100082720("SCGenerativeAIOnboardingScopeExposerObservableServiceProvider",0x3d,2);
  pcVar5 = pcVar3;
  FUN_1029e978c();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1029e7c40;
  func_0x0001000823a8(FUN_1029e7c40,0);
  func_0x000100082720("SCGenAIDreamsOnboardingScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ed6030,&UNK_10db003c0);
  puVar7 = &UNK_1105813f0;
  func_0x000107c613fc(&UNK_1105813f0,0x58,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined8 *)(puVar7 + 0x20) = param_4;
  *(undefined8 *)(puVar7 + 0x28) = param_5;
  *(undefined8 *)(puVar7 + 0x30) = param_6;
  *(undefined8 *)(puVar7 + 0x38) = param_7;
  *(undefined8 *)(puVar7 + 0x40) = param_8;
  *(undefined8 **)(puVar7 + 0x48) = puVar4;
  *(char **)(puVar7 + 0x50) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar5);
  pcVar8 = FUN_1029e8414;
  func_0x0001000823a8(FUN_1029e8414,puVar7);
  func_0x000100082720("GenAIDreamsOnboardingScopeEntryPointWrapperServiceProvider",0x3a,2);
  puVar9 = puVar2;
  FUN_1029e9508(puVar2,pcVar3);
  func_0x000100082720("GenAIDreamsOnboardingScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ed6038,&UNK_10db003c8);
  puVar7 = &UNK_110581418;
  func_0x000107c613fc(&UNK_110581418,0x30,7);
  *(code **)(puVar7 + 0x10) = pcVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar1;
  *(undefined8 **)(puVar7 + 0x20) = puVar9;
  *(code **)(puVar7 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(pcVar6);
  pcVar10 = FUN_1029e8448;
  func_0x0001000823a8(FUN_1029e8448,puVar7);
  func_0x000100082720("SCGenAIDreamsOnboardingScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112ed5fb8,&UNK_10db00100);
  func_0x000107c6157c(pcVar10);
  uVar12 = 0x1029e8454;
  func_0x0001000823a8(0x1029e8454,pcVar10);
  func_0x000100082720("SCGenAIDreamsOnboardingScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ed5fa8,&UNK_10db000f0);
  func_0x000107c6157c(uVar12);
  uVar11 = 0x1029e845c;
  func_0x0001000823a8(0x1029e845c,uVar12);
  func_0x000100082720("SCGenAIDreamsOnboardingScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_110581440;
  func_0x000107c613fc(&UNK_110581440,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar11;
  *(code **)(puVar7 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x1029e8464;
  func_0x0001000823a8(0x1029e8464,puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCGenAIDreamsOnboardingScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 1029e83b8; end: 1029e8403;  */

void FUN_1029e83b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029e8404; end: 1029e8413;  */

void FUN_1029e8404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  code *pcVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar17 = *param_2;
  func_0x0001000285a8(0x112ed6028,&UNK_10db003b0);
  puVar5 = &uStack_68;
  uStack_68 = uVar17;
  func_0x0001000838ec();
  puVar6 = puVar5;
  func_0x0001029e96b4();
  pcVar7 = "SCGenerativeAIOnboardingScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCGenerativeAIOnboardingScopeExposerSubjectServiceProvider",0x3a,2);
  FUN_1029e9700();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar8 = puVar6;
  FUN_1029e96f4();
  func_0x000100082720("SCGenerativeAIOnboardingScopeExposerObservableServiceProvider",0x3d,2);
  pcVar9 = pcVar7;
  FUN_1029e978c();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_1029e7c40;
  func_0x0001000823a8(FUN_1029e7c40,0);
  func_0x000100082720("SCGenAIDreamsOnboardingScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ed6030,&UNK_10db003c0);
  puVar11 = &UNK_1105813f0;
  func_0x000107c613fc(&UNK_1105813f0,0x58,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar5;
  *(undefined8 *)(puVar11 + 0x18) = uVar15;
  *(undefined8 *)(puVar11 + 0x20) = uVar2;
  *(undefined8 *)(puVar11 + 0x28) = uVar16;
  *(undefined8 *)(puVar11 + 0x30) = uVar3;
  *(undefined8 *)(puVar11 + 0x38) = uVar1;
  *(undefined8 *)(puVar11 + 0x40) = uVar4;
  *(undefined8 **)(puVar11 + 0x48) = puVar8;
  *(char **)(puVar11 + 0x50) = pcVar9;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar16);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(puVar8);
  func_0x000107c6157c(pcVar9);
  pcVar12 = FUN_1029e8414;
  func_0x0001000823a8(FUN_1029e8414,puVar11);
  func_0x000100082720("GenAIDreamsOnboardingScopeEntryPointWrapperServiceProvider",0x3a,2);
  puVar13 = puVar6;
  FUN_1029e9508(puVar6,pcVar7);
  func_0x000100082720("GenAIDreamsOnboardingScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ed6038,&UNK_10db003c8);
  puVar11 = &UNK_110581418;
  func_0x000107c613fc(&UNK_110581418,0x30,7);
  *(code **)(puVar11 + 0x10) = pcVar12;
  *(undefined8 **)(puVar11 + 0x18) = puVar5;
  *(undefined8 **)(puVar11 + 0x20) = puVar13;
  *(code **)(puVar11 + 0x28) = pcVar10;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(puVar13);
  func_0x000107c6157c(pcVar10);
  pcVar14 = FUN_1029e8448;
  func_0x0001000823a8(FUN_1029e8448,puVar11);
  func_0x000100082720("SCGenAIDreamsOnboardingScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112ed5fb8,&UNK_10db00100);
  func_0x000107c6157c(pcVar14);
  uVar15 = 0x1029e8454;
  func_0x0001000823a8(0x1029e8454,pcVar14);
  func_0x000100082720("SCGenAIDreamsOnboardingScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ed5fa8,&UNK_10db000f0);
  func_0x000107c6157c(uVar15);
  uVar16 = 0x1029e845c;
  func_0x0001000823a8(0x1029e845c,uVar15);
  func_0x000100082720("SCGenAIDreamsOnboardingScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar11 = &UNK_110581440;
  func_0x000107c613fc(&UNK_110581440,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar16;
  *(code **)(puVar11 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  uVar16 = 0x1029e8464;
  func_0x0001000823a8(0x1029e8464,puVar11);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar15);
  func_0x000100082720("SCGenAIDreamsOnboardingScopeEntryPointProvider",0x2e,2);
  *param_1 = uVar16;
  return;
}



/* Entry: 1029e8414; end: 1029e8447;  */

void FUN_1029e8414(void)

{
  long unaff_x20;
  
  FUN_1029e846c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1029e8448; end: 1029e846b;  */

void FUN_1029e8448(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029e8c34(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCGenAIDreamsOnboardingScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e846c; end: 1029e8a03;  */

void FUN_1029e846c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
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
  FUN_1029e8b84();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  func_0x0001000285a8(0x112e78408,&UNK_10da81bc0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar8;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar7 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x20) = puVar9;
  FUN_1029ec5ac(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar7 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar10 = uVar7;
  func_0x0001029ebf30(uVar7,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,puVar8,puVar9);
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  func_0x000107c6157c();
  FUN_1029ec450();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(uStack_a8);
  func_0x000107c61574(uStack_b0);
  func_0x000107c61574(uVar10);
  *param_1 = param_2;
  return;
}



/* Entry: 1029e8a04; end: 1029e8a7f;  */

void FUN_1029e8a04(void)

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
  return;
}



/* Entry: 1029e8a80; end: 1029e8a87;  */

undefined8 FUN_1029e8a80(void)

{
  return 0x1b;
}



/* Entry: 1029e8a88; end: 1029e8b0b;  */

void FUN_1029e8a88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1029e8bc4,param_2,FUN_1029e8bc8,param_2,FUN_1029e8bf0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1029e8b0c; end: 1029e8b53;  */

undefined8 FUN_1029e8b0c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1029ec48c();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1029e8b54; end: 1029e8b83;  */

undefined ** FUN_1029e8b54(void)

{
  return &PTR_DAT_113066b68;
}



/* Entry: 1029e8b84; end: 1029e8ba3;  */

void FUN_1029e8b84(void)

{
  func_0x000107c61168(&PTR_PTR_112ed60a8);
  return;
}



/* Entry: 1029e8ba4; end: 1029e8bc7;  */

undefined1  [16] FUN_1029e8ba4(void)

{
  return ZEXT816(0x110581498);
}



/* Entry: 1029e8bc8; end: 1029e8bef;  */

void FUN_1029e8bc8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1029e8bf0; end: 1029e8bf7;  */

undefined8 FUN_1029e8bf0(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1029ec48c();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1029e8bf8; end: 1029e8c33;  */

void FUN_1029e8bf8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1029e8c34();
  func_0x0001000a7f38("SCGenAIDreamsOnboardingScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1029e8c34; end: 1029e8e1f;  */

void FUN_1029e8c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d578;
  ppuVar4 = &PTR_DAT_113066b68;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ed6148;
  func_0x0001000285a8(0x112ed6148,&UNK_10db00550);
  func_0x0001000a6ee8(&UNK_110581498,
                      "GenAIDreamsOnboardingScopeEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,FUN_1029e8e94,param_1,uVar2,&UNK_110581498,&PTR_DAT_112ed6040);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_1105814e8;
  func_0x000107c613fc(&UNK_1105814e8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105817a0,
                      "GenAIDreamsOnboardingScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_1029e8e9c,puVar3,uVar2,&UNK_1105817a0,&PTR_DAT_112ed61e8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110581510;
  func_0x000107c613fc(&UNK_110581510,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105812b8,
                      "SCGenAIDreamsOnboardingScopedServicesScopeInitializationPluginKey",0x41,2,
                      FUN_1029e8f84,puVar3,uVar2,&UNK_1105812b8,&PTR_DAT_112ed5fc0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ed6150;
  func_0x0001000285a8(0x112ed6150,&UNK_10db00558);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1029e8e20; end: 1029e8e93;  */

void FUN_1029e8e20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1029e8fc0;
  func_0x0001000823a8(0x1029e8fc0,param_3);
  func_0x000100082720("GenAIDreamsOnboardingScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e8e94; end: 1029e8e9b;  */

void FUN_1029e8e94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1029e8fc0;
  func_0x0001000823a8();
  func_0x000100082720("GenAIDreamsOnboardingScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e8e9c; end: 1029e8edb;  */

void FUN_1029e8e9c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001029e982c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("GenAIDreamsOnboardingScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029e8edc; end: 1029e8f83;  */

void FUN_1029e8edc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110581538;
  func_0x000107c613fc(&UNK_110581538,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1029e8fb8;
  func_0x0001000823a8(FUN_1029e8fb8,puVar1);
  func_0x000100082720("SCGenAIDreamsOnboardingScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1029e8f84; end: 1029e8f8b;  */

void FUN_1029e8f84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110581538;
  func_0x000107c613fc(&UNK_110581538,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1029e8fb8;
  func_0x0001000823a8(FUN_1029e8fb8,puVar3);
  func_0x000100082720("SCGenAIDreamsOnboardingScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1029e8f8c; end: 1029e8fb7;  */

void FUN_1029e8f8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029e8fb8; end: 1029e8fc7;  */

void FUN_1029e8fb8(undefined8 *param_1)

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
  puVar1 = &UNK_110581340;
  func_0x000107c613fc(&UNK_110581340,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029e7e54;
  func_0x00010058fa64(FUN_1029e7e54,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029e8fc8; end: 1029e90df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1029e8fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1029e9418();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ed6158) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ed6160) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e90e0);
  (*pcVar2)();
}



/* Entry: 1029e90e0; end: 1029e913f; -[_TtC37GenAIDreamsOnboardingScopeGraphBridge52GenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint init] */

void FUN_1029e90e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsOnboardingScopeGraphBridge.GenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e910c);
  (*pcVar1)();
}



/* Entry: 1029e9140; end: 1029e9177; -[_TtC37GenAIDreamsOnboardingScopeGraphBridge52GenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029e915c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e9160) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed6158));
  return;
}



/* Entry: 1029e9178; end: 1029e919f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9178(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed6160),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed6158));
  return;
}



/* Entry: 1029e91a0; end: 1029e91bf;  */

void FUN_1029e91a0(void)

{
  func_0x000107c61168(&PTR_PTR_11287bec0);
  return;
}



/* Entry: 1029e91c0; end: 1029e9247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1029e91c0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed6190) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed6198);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e9248);
  (*pcVar2)();
}



/* Entry: 1029e9248; end: 1029e932f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029e9248(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed6190);
  *(undefined **)(unaff_x20 + _DAT_112ed6190) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed6198);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed6198))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110581658;
  func_0x000107c613fc(&UNK_110581658,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1029e9334,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1029e9330; end: 1029e933b;  */

void FUN_1029e9330(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1029e933c; end: 1029e939b; -[_TtC37GenAIDreamsOnboardingScopeGraphBridge52SCGenAIDreamsOnboardingScopedServicesSaberEntryPoint init] */

void FUN_1029e933c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsOnboardingScopeGraphBridge.SCGenAIDreamsOnboardingScopedServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e9368);
  (*pcVar1)();
}



/* Entry: 1029e939c; end: 1029e93d3; -[_TtC37GenAIDreamsOnboardingScopeGraphBridge52SCGenAIDreamsOnboardingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e939c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed6198));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed6190));
  return;
}



/* Entry: 1029e93d4; end: 1029e93d7;  */

void FUN_1029e93d4(void)

{
  return;
}



/* Entry: 1029e93d8; end: 1029e93f7;  */

void FUN_1029e93d8(void)

{
  FUN_1029e9248();
  return;
}



/* Entry: 1029e93f8; end: 1029e9417;  */

void FUN_1029e93f8(void)

{
  func_0x000107c61168(&PTR_PTR_11287bf88);
  return;
}



/* Entry: 1029e9418; end: 1029e94e7;  */

undefined8 FUN_1029e9418(void)

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
  
  func_0x000107c61428(0x112ed61c8,&uStack_40,0x20,0);
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
    FUN_1029e94e8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1029e94e8; end: 1029e9507;  */

void FUN_1029e94e8(void)

{
  func_0x000107c61168(&PTR_PTR_11287c050);
  return;
}



/* Entry: 1029e9508; end: 1029e952b;  */

void FUN_1029e9508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105816a0;
  func_0x0001000285a8(0x112ed61d0,&UNK_10db00628);
  func_0x000107c613fc(&UNK_1105816a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029e95b0,puVar1);
  return;
}



/* Entry: 1029e952c; end: 1029e95af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e952c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1029e94e8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed61d8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ed61e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1029e95b0; end: 1029e95b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e95b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1029e94e8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112ed61d8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ed61e0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1029e95b8; end: 1029e961b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e95b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed61d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed61e0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029e961c; end: 1029e967b; -[_TtC37GenAIDreamsOnboardingScopeGraphBridge45GenAIDreamsOnboardingScopeGraphBridgeServices init] */

void FUN_1029e961c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GenAIDreamsOnboardingScopeGraphBridge.GenAIDreamsOnboardingScopeGraphBridgeServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029e9648);
  (*pcVar1)();
}



/* Entry: 1029e967c; end: 1029e96f3; -[_TtC37GenAIDreamsOnboardingScopeGraphBridge45GenAIDreamsOnboardingScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029e9698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e969c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e967c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed61d8));
  return;
}



/* Entry: 1029e96f4; end: 1029e96ff;  */

void FUN_1029e96f4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1029e9af0,param_1);
  return;
}



/* Entry: 1029e9700; end: 1029e978b;  */

void FUN_1029e9700(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1029e9af8,0);
  return;
}



/* Entry: 1029e978c; end: 1029e9797;  */

void FUN_1029e978c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029e97f0,param_1);
  return;
}



/* Entry: 1029e9798; end: 1029e97ef;  */

void FUN_1029e9798(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1029e97f0; end: 1029e9823;  */

void FUN_1029e97f0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1029e9824; end: 1029e984f;  */

undefined8 FUN_1029e9824(void)

{
  return 0x1b;
}



/* Entry: 1029e9850; end: 1029e98cf;  */

void FUN_1029e9850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 1029e98d0; end: 1029e99c7;  */

void FUN_1029e98d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ed61c8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed61c8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105817e0;
  func_0x000107c613fc(&UNK_1105817e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029e9ae8;
  func_0x00010058fa64(0x1029e9ae8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029e99c8; end: 1029e99f3;  */

void FUN_1029e99c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029e99f4; end: 1029e99fb;  */

void FUN_1029e99f4(undefined8 *param_1)

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
  func_0x000107c61428(0x112ed61c8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed61c8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105817e0;
  func_0x000107c613fc(&UNK_1105817e0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1029e9ae8;
  func_0x00010058fa64(0x1029e9ae8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029e99fc; end: 1029e9a57;  */

void FUN_1029e99fc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed61c8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed61c8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1029e9a58; end: 1029e9afb;  */

undefined ** FUN_1029e9a58(void)

{
  return &PTR_DAT_113066b68;
}



/* Entry: 1029e9afc; end: 1029e9b43; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9afc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed6238;
  func_0x000107c61428(param_1 + _DAT_112ed6238,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029e9b44; end: 1029e9b9b; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9b44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed6238;
  func_0x000107c61428(param_1 + _DAT_112ed6238,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029e9b9c; end: 1029e9be3; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint sCGenerativeAIOnboardingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9b9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed6240;
  func_0x000107c61428(param_1 + _DAT_112ed6240,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029e9be4; end: 1029e9bef; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint setSCGenerativeAIOnboardingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed6240;
  func_0x000107c61428(param_1 + _DAT_112ed6240,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029e9bf0; end: 1029e9c37; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9bf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed6248;
  func_0x000107c61428(param_1 + _DAT_112ed6248,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029e9c38; end: 1029e9c43; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed6248;
  func_0x000107c61428(param_1 + _DAT_112ed6248,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029e9c44; end: 1029e9c8b; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint genAIDreamsOnboardingScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9c44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed6250;
  func_0x000107c61428(param_1 + _DAT_112ed6250,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1029e9c8c; end: 1029e9c97; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint setGenAIDreamsOnboardingScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed6250;
  func_0x000107c61428(param_1 + _DAT_112ed6250,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1029e9c98; end: 1029e9cf7;  */

void FUN_1029e9c98(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1029e9cf8; end: 1029e9f2f;  */

/* WARNING: Possible PIC construction at 0x0001029e9e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e9e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e9e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e9ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e9ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029e9f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029e9ea4) */
/* WARNING: Removing unreachable block (ram,0x0001029e9e94) */
/* WARNING: Removing unreachable block (ram,0x0001029e9e78) */
/* WARNING: Removing unreachable block (ram,0x0001029e9e68) */
/* WARNING: Removing unreachable block (ram,0x0001029e9f08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029e9cf8(void)

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
  func_0x000107c50dc8();
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
      func_0x000107c43d3c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_1029e91a0();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_1029e9418();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1029e9f30);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112ed6158) = lVar5;
        *(long *)(lVar4 + _DAT_112ed6160) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1029e9f30; end: 1029e9f57; -[SCGenAIDreamsOnboardingScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1029e9f30(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029e9cf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


