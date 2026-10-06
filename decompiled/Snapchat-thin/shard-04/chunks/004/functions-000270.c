/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10342f518; end: 10342f55b; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint end] */

void FUN_10342f518(undefined8 param_1)

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



/* Entry: 10342f55c; end: 10342f75f;  */

void FUN_10342f55c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0ebc230)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000018,0x800000010f143dd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0eb31c0)) &&
           (func_0x000107c605b8(0xd000000000000030,0x800000010f14ce40,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SearchSuggestionsScopeGraphBridge/SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x5a,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10342f760);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58d44();
        goto LAB_10342f5e8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58818();
  }
LAB_10342f5e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10342f760; end: 10342f80b; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_10342f760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10342f55c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10342f80c; end: 10342f883; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f80c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f68570,0);
  *(undefined8 *)(param_1 + _DAT_112f68578) = 0;
  *(undefined8 *)(param_1 + _DAT_112f68580) = 0;
  *(undefined8 *)(param_1 + _DAT_112f68588) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10342f884; end: 10342f8b7;  */

void FUN_10342f884(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10342f8b8; end: 10342f90f; -[SCSearchSuggestionsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010342f8e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342f8e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f8b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f68570);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f68578));
  return;
}



/* Entry: 10342f910; end: 10342f92f;  */

void FUN_10342f910(void)

{
  func_0x000107c61168(&PTR_PTR_1128da070);
  return;
}



/* Entry: 10342f930; end: 10342f977; -[SCSCSearchSuggestionsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f930(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f685b8;
  func_0x000107c61428(param_1 + _DAT_112f685b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10342f978; end: 10342f9cf; -[SCSCSearchSuggestionsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f978(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f685b8;
  func_0x000107c61428(param_1 + _DAT_112f685b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10342f9d0; end: 10342faa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342f9d0(undefined8 param_1,long param_2)

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
    FUN_10342eba8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f684d0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10342faa8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f684d8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f685c0);
    *(long **)(unaff_x20 + _DAT_112f685c0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10342faa8; end: 10342facf; -[SCSCSearchSuggestionsScopedServicesSaberEntryPoint begin] */

void FUN_10342faa8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10342f9d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10342fad0; end: 10342fc47;  */

/* WARNING: Possible PIC construction at 0x00010342fb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010342fbd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010342fb3c) */
/* WARNING: Removing unreachable block (ram,0x00010342fbd4) */
/* WARNING: Removing unreachable block (ram,0x00010342fbec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342fad0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f685c0);
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



/* Entry: 10342fc48; end: 10342fc4f;  */

void FUN_10342fc48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10342fc50; end: 10342fc83; -[SCSCSearchSuggestionsScopedServicesSaberEntryPoint end] */

void FUN_10342fc50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10342fad0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10342fc84; end: 10342fda3;  */

void FUN_10342fc84(long param_1,long param_2,long param_3)

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
                        "SearchSuggestionsScopeGraphBridge/SCSCSearchSuggestionsScopedServicesSaberEntryPoint.swift"
                        ,0x5a,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10342fda4);
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



/* Entry: 10342fda4; end: 10342fe4f; -[SCSCSearchSuggestionsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10342fda4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10342fc84(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10342fe50; end: 10342feaf; -[SCSCSearchSuggestionsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342fe50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f685b8,0);
  *(undefined8 *)(param_1 + _DAT_112f685c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10342feb0; end: 10342fee3;  */

void FUN_10342feb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10342fee4; end: 10342ff1b; -[SCSCSearchSuggestionsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342fee4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f685b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f685c0));
  return;
}



/* Entry: 10342ff1c; end: 10342ff3b;  */

void FUN_10342ff1c(void)

{
  func_0x000107c61168(&PTR_PTR_1128da140);
  return;
}



/* Entry: 10342ff3c; end: 10342ffe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342ff3c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_2;
  func_0x000100083b20(&uStack_48);
  FUN_1034303dc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f685f8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f68600) = uStack_48;
  *(undefined8 *)(lVar3 + _DAT_112f68608) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  plVar4 = &lStack_58;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 10342ffe4; end: 103430057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10342ffe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f685f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f68600) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f68608) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103430058; end: 103430077;  */

void FUN_103430058(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103430078; end: 1034300d7; -[_TtC64SharedStoryProfileSectionSaberPluginScopedFactoryServiceProvider50SharedStoryProfileSectionSaberPluginScopedServices init] */

void FUN_103430078(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SharedStoryProfileSectionSaberPluginScopedFactoryServiceProvider.SharedStoryProfileSectionSaberPluginScopedServices"
                      ,0x73,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034300a4);
  (*pcVar1)();
}



/* Entry: 1034300d8; end: 10343011f; -[_TtC64SharedStoryProfileSectionSaberPluginScopedFactoryServiceProvider50SharedStoryProfileSectionSaberPluginScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001034300f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034300f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034300d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f68600));
  return;
}



/* Entry: 103430120; end: 10343018b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103430120(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110654bd0;
  func_0x000107c613fc(&UNK_110654bd0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_103430474,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10343018c; end: 10343019b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10343018c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f685f8));
  return;
}



/* Entry: 10343019c; end: 103430237;  */

void FUN_10343019c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_110654ac8;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110654ad8;
  return;
}



/* Entry: 103430238; end: 10343026f;  */

void FUN_103430238(long *param_1)

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



/* Entry: 103430270; end: 103430277;  */

undefined8 FUN_103430270(void)

{
  return 0x1b;
}



/* Entry: 103430278; end: 1034303ab;  */

void FUN_103430278(undefined8 *param_1)

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
  puVar1 = &UNK_110654bf8;
  func_0x000107c613fc(&UNK_110654bf8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10343044c;
  func_0x00010058fa64(FUN_10343044c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1034303ac; end: 1034303db;  */

undefined ** FUN_1034303ac(void)

{
  return &PTR_DAT_113067108;
}



/* Entry: 1034303dc; end: 1034303fb;  */

void FUN_1034303dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128da200);
  return;
}



/* Entry: 1034303fc; end: 10343044b;  */

undefined1  [16] FUN_1034303fc(void)

{
  return ZEXT816(0x110654b30);
}



/* Entry: 10343044c; end: 103430473;  */

void FUN_10343044c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103430474; end: 103430477;  */

void FUN_103430474(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103430478; end: 1034306cf;  */

/* WARNING: Possible PIC construction at 0x0001034305f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103430600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103430610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103430620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103430630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103430640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103430650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103430660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103430670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103430680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103430690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034306a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103430694) */
/* WARNING: Removing unreachable block (ram,0x000103430684) */
/* WARNING: Removing unreachable block (ram,0x000103430674) */
/* WARNING: Removing unreachable block (ram,0x000103430664) */
/* WARNING: Removing unreachable block (ram,0x000103430654) */
/* WARNING: Removing unreachable block (ram,0x000103430644) */
/* WARNING: Removing unreachable block (ram,0x000103430634) */
/* WARNING: Removing unreachable block (ram,0x000103430624) */
/* WARNING: Removing unreachable block (ram,0x000103430614) */
/* WARNING: Removing unreachable block (ram,0x000103430604) */
/* WARNING: Removing unreachable block (ram,0x0001034305f4) */
/* WARNING: Removing unreachable block (ram,0x0001034306a4) */

void FUN_103430478(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110654c88;
  func_0x000107c613fc(&UNK_110654c88,0xd8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  uVar2 = 0x112f68680;
  func_0x0001000285a8(0x112f68680,&UNK_10dbc4958);
  func_0x000107c613fc();
  uVar3 = 0x103431380;
  func_0x0001000841fc(0x103431380,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbc4910,0x40,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1034306d0; end: 103430723;  */

void FUN_1034306d0(void)

{
  long unaff_x20;
  
  FUN_103430478(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Entry: 103430724; end: 103430733;  */

undefined1  [16] FUN_103430724(void)

{
  return ZEXT816(0x110654c68);
}



/* Entry: 103430734; end: 10343129b;  */

void FUN_103430734(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  code *pcVar26;
  undefined8 *puVar27;
  code *pcVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  code *pcVar31;
  undefined8 *puVar32;
  undefined *puVar33;
  code *pcVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 auStack_70 [2];
  
  uVar36 = *param_2;
  func_0x0001000285a8(0x112f68688,&UNK_10dbc4960);
  puVar1 = auStack_70;
  auStack_70[0] = uVar36;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x00010343653c();
  pcVar3 = "SCAddToStoryCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCAddToStoryCameraScopeExposerSubjectServiceProvider",0x34,2);
  FUN_103436588();
  pcVar4 = "SCBitmojiAvatarScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBitmojiAvatarScopeExposerSubjectServiceProvider",0x31,2);
  FUN_1034365d4();
  pcVar5 = "SCBloopsReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBloopsReportScopeExposerSubjectServiceProvider",0x30,2);
  FUN_103436620();
  pcVar6 = "SCContentProductPlaybackScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContentProductPlaybackScopeExposerSubjectServiceProvider",0x3a,2);
  FUN_10343666c();
  pcVar7 = "SCCustomStoryMembersScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCustomStoryMembersScopeExposerSubjectServiceProvider",0x36,2);
  FUN_1034366b8();
  pcVar8 = "SCDeleteStorySnapScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDeleteStorySnapScopeExposerSubjectServiceProvider",0x33,2);
  FUN_103436704();
  pcVar9 = "SCFriendProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendProfileScopeExposerSubjectServiceProvider",0x31,2);
  FUN_103436750();
  pcVar10 = "SCGroupAvatarScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCGroupAvatarScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_10343679c();
  pcVar11 = "SCOperaSessionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCOperaSessionScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1034367e8();
  pcVar12 = "SCSafetyReportScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSafetyReportScopeExposerSubjectServiceProvider",0x30,2);
  FUN_103436834();
  pcVar13 = "SCSaveStoryScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSaveStoryScopeExposerSubjectServiceProvider",0x2d,2);
  FUN_103436880();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar14 = puVar2;
  FUN_10343657c();
  func_0x000100082720("SCAddToStoryCameraScopeExposerObservableServiceProvider",0x37,2);
  pcVar15 = pcVar3;
  FUN_1034365c8();
  func_0x000100082720("SCBitmojiAvatarScopeExposerObservableServiceProvider",0x34,2);
  pcVar16 = pcVar4;
  FUN_103436614();
  func_0x000100082720("SCBloopsReportScopeExposerObservableServiceProvider",0x33,2);
  pcVar17 = pcVar5;
  FUN_103436660();
  func_0x000100082720("SCContentProductPlaybackScopeExposerObservableServiceProvider",0x3d,2);
  pcVar18 = pcVar6;
  FUN_1034366ac();
  func_0x000100082720("SCCustomStoryMembersScopeExposerObservableServiceProvider",0x39,2);
  pcVar19 = pcVar7;
  FUN_1034366f8();
  func_0x000100082720("SCDeleteStorySnapScopeExposerObservableServiceProvider",0x36,2);
  pcVar20 = pcVar8;
  FUN_103436744();
  func_0x000100082720("SCFriendProfileScopeExposerObservableServiceProvider",0x34,2);
  pcVar21 = pcVar9;
  FUN_103436790();
  func_0x000100082720("SCGroupAvatarScopeExposerObservableServiceProvider",0x32,2);
  pcVar22 = pcVar10;
  FUN_1034367dc();
  func_0x000100082720("SCOperaSessionScopeExposerObservableServiceProvider",0x33,2);
  pcVar23 = pcVar11;
  FUN_103436828();
  func_0x000100082720("SCSafetyReportScopeExposerObservableServiceProvider",0x33,2);
  pcVar24 = pcVar12;
  FUN_103436874();
  func_0x000100082720("SCSaveStoryScopeExposerObservableServiceProvider",0x30,2);
  pcVar25 = pcVar13;
  FUN_10343690c();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar26 = FUN_103430238;
  func_0x0001000823a8(FUN_103430238,0);
  func_0x000100082720("SharedStoryProfileSectionSaberPluginScopedServicesCleanupRelayServiceProvider"
                      ,0x4d,2);
  puVar27 = puVar2;
  FUN_103435fcc(puVar2,pcVar3,pcVar4,pcVar5,pcVar6,pcVar7,pcVar8,pcVar9,pcVar10,pcVar11,pcVar12,
                pcVar13);
  func_0x000100082720("SharedStoryProfileSectionSaberPluginScopeGraphBridgeServicesServiceProvider",
                      0x4b,2);
  func_0x0001000285a8(0x112f68690,&UNK_10dbc4970);
  puVar33 = &UNK_110654cb0;
  func_0x000107c613fc(&UNK_110654cb0,0xf8,7);
  *(undefined8 **)(puVar33 + 0x10) = puVar1;
  *(undefined8 *)(puVar33 + 0x18) = param_3;
  *(undefined8 *)(puVar33 + 0x20) = param_4;
  *(undefined8 *)(puVar33 + 0x28) = param_5;
  *(undefined8 *)(puVar33 + 0x30) = param_6;
  *(undefined8 *)(puVar33 + 0x38) = param_7;
  *(undefined8 *)(puVar33 + 0x40) = param_8;
  *(undefined8 *)(puVar33 + 0x48) = param_9;
  *(undefined8 *)(puVar33 + 0x50) = param_10;
  *(undefined8 *)(puVar33 + 0x58) = param_11;
  *(undefined8 *)(puVar33 + 0x60) = param_12;
  *(undefined8 *)(puVar33 + 0x68) = param_13;
  *(undefined8 *)(puVar33 + 0x70) = param_14;
  *(undefined8 *)(puVar33 + 0x78) = param_15;
  *(undefined8 *)(puVar33 + 0x80) = param_16;
  *(undefined8 *)(puVar33 + 0x88) = param_17;
  *(undefined8 *)(puVar33 + 0x90) = param_18;
  *(undefined8 *)(puVar33 + 0x98) = param_19;
  *(undefined8 *)(puVar33 + 0xa0) = param_20;
  *(undefined8 *)(puVar33 + 0xa8) = param_21;
  *(undefined8 **)(puVar33 + 0xb0) = puVar14;
  *(char **)(puVar33 + 0xb8) = pcVar25;
  *(char **)(puVar33 + 0xc0) = pcVar23;
  *(char **)(puVar33 + 200) = pcVar22;
  *(char **)(puVar33 + 0xd0) = pcVar16;
  *(char **)(puVar33 + 0xd8) = pcVar18;
  *(char **)(puVar33 + 0xe0) = pcVar19;
  *(char **)(puVar33 + 0xe8) = pcVar24;
  *(char **)(puVar33 + 0xf0) = pcVar17;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(puVar14);
  func_0x000107c6157c(pcVar25);
  func_0x000107c6157c(pcVar23);
  func_0x000107c6157c(pcVar22);
  func_0x000107c6157c(pcVar16);
  func_0x000107c6157c(pcVar18);
  func_0x000107c6157c(pcVar19);
  func_0x000107c6157c(pcVar24);
  func_0x000107c6157c(pcVar17);
  uVar36 = 0x1034313e4;
  func_0x0001000823a8(0x1034313e4,puVar33);
  func_0x000100082720("SCSharedStoryProfileServicesEntryPointWrapperServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f68698,&UNK_10dbc4978);
  puVar33 = &UNK_110654cd8;
  func_0x000107c613fc(&UNK_110654cd8,0x30,7);
  *(undefined8 *)(puVar33 + 0x10) = uVar36;
  *(undefined8 **)(puVar33 + 0x18) = puVar1;
  *(undefined8 **)(puVar33 + 0x20) = puVar27;
  *(code **)(puVar33 + 0x28) = pcVar26;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar36);
  func_0x000107c6157c(puVar27);
  func_0x000107c6157c(pcVar26);
  pcVar28 = FUN_103431440;
  func_0x0001000823a8(FUN_103431440,puVar33);
  func_0x000100082720("SharedStoryProfileSectionSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x54,2);
  func_0x0001000285a8(0x112f68618,&UNK_10dbc4640);
  func_0x000107c6157c(pcVar28);
  uVar29 = 0x10343144c;
  func_0x0001000823a8(0x10343144c,pcVar28);
  func_0x000100082720("SharedStoryProfileSectionSaberPluginScopeInitializationServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112f686a0,&UNK_10dbc4988);
  func_0x000107c6157c(uVar36);
  uVar30 = 0x103431454;
  func_0x0001000823a8(0x103431454,uVar36);
  func_0x000100082720("SCSharedStoryProfileServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112f686a8,&UNK_10dbc4990);
  puVar33 = &UNK_110654d00;
  func_0x000107c613fc(&UNK_110654d00,0xa8,7);
  *(undefined8 **)(puVar33 + 0x10) = puVar1;
  *(undefined8 *)(puVar33 + 0x18) = param_22;
  *(undefined8 *)(puVar33 + 0x20) = param_23;
  *(undefined8 *)(puVar33 + 0x28) = uVar30;
  *(undefined8 *)(puVar33 + 0x30) = param_7;
  *(undefined8 *)(puVar33 + 0x38) = param_8;
  *(undefined8 *)(puVar33 + 0x40) = param_9;
  *(undefined8 *)(puVar33 + 0x48) = param_26;
  *(undefined8 *)(puVar33 + 0x50) = param_10;
  *(undefined8 *)(puVar33 + 0x58) = param_27;
  *(undefined8 *)(puVar33 + 0x60) = param_12;
  *(char **)(puVar33 + 0x68) = pcVar21;
  *(undefined8 *)(puVar33 + 0x70) = param_24;
  *(undefined8 *)(puVar33 + 0x78) = param_11;
  *(undefined8 *)(puVar33 + 0x80) = param_25;
  *(char **)(puVar33 + 0x88) = pcVar15;
  *(char **)(puVar33 + 0x90) = pcVar18;
  *(char **)(puVar33 + 0x98) = pcVar20;
  *(char **)(puVar33 + 0xa0) = pcVar24;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(pcVar18);
  func_0x000107c6157c(pcVar24);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(uVar30);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(pcVar21);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(pcVar15);
  func_0x000107c6157c(pcVar20);
  pcVar31 = FUN_10343145c;
  func_0x0001000823a8(FUN_10343145c,puVar33);
  func_0x000100082720("SharedStoryProfileSectionSaberPluginRegistryServiceProvider",0x3b,2);
  puVar32 = puVar1;
  FUN_103438c84(puVar1,pcVar31);
  func_0x000100082720("SharedStoryProfileSectionPluginCollectionServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f685f0,&UNK_10dbc4630);
  puVar33 = &UNK_110654d28;
  func_0x000107c613fc(&UNK_110654d28,0x28,7);
  *(undefined8 **)(puVar33 + 0x10) = puVar32;
  *(undefined8 *)(puVar33 + 0x18) = uVar29;
  *(undefined8 *)(puVar33 + 0x20) = uVar30;
  func_0x000107c6157c(uVar30);
  func_0x000107c6157c(puVar32);
  func_0x000107c6157c(uVar29);
  pcVar34 = FUN_1034314a8;
  func_0x0001000823a8(FUN_1034314a8,puVar33);
  func_0x000100082720("SharedStoryProfileSectionSaberPluginScopedServicesServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f68610,&UNK_10dbc49a0);
  puVar33 = &UNK_110654d50;
  func_0x000107c613fc(&UNK_110654d50,0x20,7);
  *(code **)(puVar33 + 0x10) = pcVar34;
  *(code **)(puVar33 + 0x18) = pcVar26;
  func_0x000107c6157c(pcVar26);
  uVar35 = 0x1034314b4;
  func_0x0001000823a8(0x1034314b4,puVar33);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(puVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(pcVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(pcVar26);
  func_0x000107c61574(puVar27);
  func_0x000107c61574(uVar36);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar30);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(puVar32);
  func_0x000100082720("SharedStoryProfileSectionSaberPluginScopeEntryPointProvider",0x3b,2);
  *param_1 = uVar35;
  return;
}



/* Entry: 10343129c; end: 10343143f;  */

void FUN_10343129c(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103431440; end: 10343145b;  */

void FUN_103431440(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10343410c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SharedStoryProfileSectionSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x54,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10343145c; end: 1034314a7;  */

void FUN_10343145c(void)

{
  long unaff_x20;
  
  FUN_103433d54(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1034314a8; end: 1034314bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034314a8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = lVar1;
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1034303dc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(long *)(lVar4 + _DAT_112f685f8) = lVar1;
  *(undefined8 *)(lVar4 + _DAT_112f68600) = uStack_48;
  *(undefined8 *)(lVar4 + _DAT_112f68608) = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_58 = lVar4;
  lStack_50 = lVar3;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar6);
  plVar5 = &lStack_58;
  func_0x000107c61154(plVar5,puVar2);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1034314bc; end: 103433a43;  */

void FUN_1034314bc(long *param_1,long param_2)

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
  undefined *puVar10;
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
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  FUN_103433cd0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x68) = uStack_78;
  *(undefined8 *)(param_2 + 0x70) = uStack_80;
  *(undefined8 *)(param_2 + 0x78) = uStack_88;
  *(undefined8 *)(param_2 + 0x80) = uStack_90;
  *(undefined8 *)(param_2 + 0x88) = uStack_98;
  *(undefined8 *)(param_2 + 0x90) = uStack_a0;
  *(undefined8 *)(param_2 + 0x98) = uStack_a8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_b0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_b8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_c0;
  *(undefined8 *)(param_2 + 0xb8) = uStack_c8;
  *(undefined8 *)(param_2 + 0xc0) = uStack_d0;
  *(undefined8 *)(param_2 + 200) = uStack_d8;
  *(undefined8 *)(param_2 + 0xd0) = uStack_e0;
  *(undefined8 *)(param_2 + 0xd8) = uStack_e8;
  *(undefined8 *)(param_2 + 0xe0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xe8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xf0) = uStack_100;
  *(undefined8 *)(param_2 + 0xf8) = uStack_108;
  func_0x0001000285a8(0x112e4d1d0,&UNK_10dbc49b0);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar14 = uStack_b8;
  func_0x000107c61174();
  uVar15 = uStack_c0;
  func_0x000107c61174();
  uVar16 = uStack_c8;
  func_0x000107c61174();
  uVar17 = uStack_d0;
  func_0x000107c61174();
  uVar18 = uStack_d8;
  func_0x000107c61174();
  uVar19 = uStack_e0;
  func_0x000107c61174();
  uVar20 = uStack_e8;
  func_0x000107c61174();
  uVar21 = uStack_f0;
  func_0x000107c61174();
  uVar22 = uStack_f8;
  func_0x000107c61174();
  uVar23 = uStack_100;
  func_0x000107c61174();
  uVar24 = uStack_108;
  func_0x000107c61174();
  uVar12 = uStack_110;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x18) = puVar10;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar12 = uStack_118;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x20) = puVar10;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar12 = uStack_120;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x28) = puVar10;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  uVar12 = uStack_128;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x30) = puVar10;
  func_0x0001000285a8(0x112e51df8,&UNK_10daafe60);
  func_0x000107c610f8();
  uVar12 = uStack_130;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x38) = puVar10;
  func_0x0001000285a8(0x112e4f090,&UNK_10dbc4da0);
  func_0x000107c610f8();
  uVar12 = uStack_138;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x40) = puVar10;
  func_0x0001000285a8(0x112e9edf8,&UNK_10dabb450);
  func_0x000107c610f8();
  uVar12 = uStack_140;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x48) = puVar10;
  func_0x0001000285a8(0x112e9ee00,&UNK_10daaf8c0);
  func_0x000107c610f8();
  uVar12 = uStack_148;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar10 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x50) = puVar10;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  uVar12 = uStack_150;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(param_2 + 0x58) = puVar10;
  puVar10 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x60) = puVar10;
  puVar10 = PTR_PTR_1126ad258;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f14d290);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0583b0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef35720);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef32690);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f05c010);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar12);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd000000000000012;
  uVar12 = uVar26;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4520);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar13);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar22);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f01aaa0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar26);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f051710);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f14d2b0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar26);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar26 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0523a0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar26);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar13);
  uVar26 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar26);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar26);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar26);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f05c900);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar26);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f055830);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar26);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ad7f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar26);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21c40);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar26);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  uVar26 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174(uVar13);
  func_0x000107c61174();
  uVar12 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef32810);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar25 = *(long *)(param_2 + 0x60);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar25 != 0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61574(uStack_110);
    func_0x000107c61574(uStack_118);
    func_0x000107c61574(uStack_120);
    func_0x000107c61574(uStack_128);
    func_0x000107c61574(uStack_130);
    func_0x000107c61574(uStack_138);
    func_0x000107c61574(uStack_140);
    func_0x000107c61574(uStack_148);
    func_0x000107c61574(uStack_150);
    *(long *)(param_2 + 0x100) = lVar25;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034328d0);
  (*pcVar1)();
}



/* Entry: 103433a44; end: 103433b6f;  */

void FUN_103433a44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  return;
}



/* Entry: 103433b70; end: 103433bc3;  */

void FUN_103433b70(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x100);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103433bc4; end: 103433bcb;  */

undefined8 FUN_103433bc4(void)

{
  return 0x1b;
}



/* Entry: 103433bcc; end: 103433c4f;  */

void FUN_103433bcc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103433d20,param_2,FUN_103433d24,param_2,FUN_103433d4c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103433c50; end: 103433c9f;  */

undefined8 FUN_103433c50(void)

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



/* Entry: 103433ca0; end: 103433ccf;  */

undefined ** FUN_103433ca0(void)

{
  return &PTR_DAT_113067108;
}



/* Entry: 103433cd0; end: 103433cef;  */

void FUN_103433cd0(void)

{
  func_0x000107c61168(&PTR_PTR_112f68718);
  return;
}



/* Entry: 103433cf0; end: 103433d23;  */

undefined1  [16] FUN_103433cf0(void)

{
  return ZEXT816(0x110654da8);
}



/* Entry: 103433d24; end: 103433d4b;  */

void FUN_103433d24(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103433d4c; end: 103433d53;  */

undefined8 FUN_103433d4c(void)

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



/* Entry: 103433d54; end: 103433f3b;  */

/* WARNING: Possible PIC construction at 0x000103433e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103433e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103433eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103433ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103433ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103433edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103433eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103433efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103433f0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103433f00) */
/* WARNING: Removing unreachable block (ram,0x000103433ef0) */
/* WARNING: Removing unreachable block (ram,0x000103433ee0) */
/* WARNING: Removing unreachable block (ram,0x000103433ed0) */
/* WARNING: Removing unreachable block (ram,0x000103433ec0) */
/* WARNING: Removing unreachable block (ram,0x000103433eb0) */
/* WARNING: Removing unreachable block (ram,0x000103433ea0) */
/* WARNING: Removing unreachable block (ram,0x000103433e90) */
/* WARNING: Removing unreachable block (ram,0x000103433f10) */

void FUN_103433d54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110654e18;
  func_0x000107c613fc(&UNK_110654e18,0xa8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  uVar2 = 0x112f68868;
  func_0x0001000285a8(0x112f68868,&UNK_10dbc4c20);
  func_0x000107c613fc();
  pcVar3 = FUN_10343407c;
  func_0x0001000841fc(FUN_10343407c,puVar1,uVar2);
  func_0x000100084214("SharedStoryProfileSectionSaberPluginRegistryServiceProvider",0x3b,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103433f3c; end: 10343407b;  */

void FUN_103433f3c(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_1034344a0(param_3,param_4);
      pcVar2 = "SCSharedStoryProfileFooterSectionSaberPluginProvider";
      uVar3 = 0x34;
    }
    else {
      FUN_1034345d0(param_3,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                    param_13,param_14);
      pcVar2 = "SCSharedStoryProfileHeaderSectionSaberPluginProvider";
      uVar3 = 0x34;
    }
  }
  else if (bVar1 == 2) {
    FUN_103434bd0(param_3,param_5,param_6,param_7,param_8,param_15,param_16,param_17,param_18,
                  param_19,param_20);
    pcVar2 = "SCSharedStoryProfileMembersSectionSaberPluginProvider";
    uVar3 = 0x35;
  }
  else {
    FUN_103435108(param_3,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_16,
                  param_12,param_13,param_21);
    pcVar2 = "SCSharedStoryProfileStorySectionSaberPluginProvider";
    uVar3 = 0x33;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_3;
  return;
}



/* Entry: 10343407c; end: 1034340cf;  */

void FUN_10343407c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103433f3c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1034340d0; end: 10343410b;  */

void FUN_1034340d0(undefined8 *param_1,undefined8 param_2)

{
  FUN_10343410c();
  func_0x0001000a7f38("SharedStoryProfileSectionSaberPluginScopeInitializationPluginRegistryServiceProvider"
                      ,0x54,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10343410c; end: 1034342f7;  */

void FUN_10343410c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074ded8;
  ppuVar4 = &PTR_DAT_113067108;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f68870;
  func_0x0001000285a8(0x112f68870,&UNK_10dbc4c28);
  func_0x0001000a6ee8(&UNK_110654dc8,
                      "SCSharedStoryProfileServicesEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,FUN_10343436c,param_1,uVar2,&UNK_110654dc8,&PTR_DAT_112f686b0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_110654e40;
  func_0x000107c613fc(&UNK_110654e40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1106556b0,
                      "SharedStoryProfileSectionSaberPluginScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x50,2,FUN_103434374,puVar3,uVar2,&UNK_1106556b0,&PTR_DAT_112f68968);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110654e68;
  func_0x000107c613fc(&UNK_110654e68,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110654b70,
                      "SharedStoryProfileSectionSaberPluginScopedServicesScopeInitializationPluginKey"
                      ,0x4e,2,FUN_10343445c,puVar3,uVar2,&UNK_110654b70,&PTR_DAT_112f68620);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f68878;
  func_0x0001000285a8(0x112f68878,&UNK_10dbc4c30);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1034342f8; end: 10343436b;  */

void FUN_1034342f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x103434498;
  func_0x0001000823a8(0x103434498,param_3);
  func_0x000100082720("SCSharedStoryProfileServicesEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10343436c; end: 103434373;  */

void FUN_10343436c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x103434498;
  func_0x0001000823a8();
  func_0x000100082720("SCSharedStoryProfileServicesEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103434374; end: 1034343b3;  */

void FUN_103434374(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1034369ac(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SharedStoryProfileSectionSaberPluginScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x55,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1034343b4; end: 10343445b;  */

void FUN_1034343b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110654e90;
  func_0x000107c613fc(&UNK_110654e90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103434490;
  func_0x0001000823a8(FUN_103434490,puVar1);
  func_0x000100082720("SharedStoryProfileSectionSaberPluginScopedServicesScopeInitializationPluginProvider"
                      ,0x53,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10343445c; end: 103434463;  */

void FUN_10343445c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110654e90;
  func_0x000107c613fc(&UNK_110654e90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103434490;
  func_0x0001000823a8(FUN_103434490,puVar3);
  func_0x000100082720("SharedStoryProfileSectionSaberPluginScopedServicesScopeInitializationPluginProvider"
                      ,0x53,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103434464; end: 10343448f;  */

void FUN_103434464(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103434490; end: 10343449f;  */

void FUN_103434490(undefined8 *param_1)

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
  puVar1 = &UNK_110654bf8;
  func_0x000107c613fc(&UNK_110654bf8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10343044c;
  func_0x00010058fa64(FUN_10343044c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1034344a0; end: 1034345bf;  */

void FUN_1034344a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f68880,&UNK_10dbc4c40);
  puVar1 = &UNK_110654f38;
  func_0x000107c613fc(&UNK_110654f38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x103434520,puVar1);
  return;
}



/* Entry: 1034345c0; end: 1034345cf;  */

undefined1  [16] FUN_1034345c0(void)

{
  return ZEXT816(0x110654f60);
}



/* Entry: 1034345d0; end: 103434bbf;  */

void FUN_1034345d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f68880,&UNK_10dbc4c40);
  puVar1 = &UNK_110655008;
  func_0x000107c613fc(&UNK_110655008,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_11;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  *(undefined8 *)(puVar1 + 0x60) = param_10;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(0x1034346f4,puVar1);
  return;
}



/* Entry: 103434bc0; end: 103434bcf;  */

undefined1  [16] FUN_103434bc0(void)

{
  return ZEXT816(0x110655030);
}



/* Entry: 103434bd0; end: 1034350f7;  */

void FUN_103434bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f68880,&UNK_10dbc4c40);
  puVar1 = &UNK_1106550d8;
  func_0x000107c613fc(&UNK_1106550d8,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  *(undefined8 *)(puVar1 + 0x18) = param_10;
  *(undefined8 *)(puVar1 + 0x20) = param_11;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  *(undefined8 *)(puVar1 + 0x60) = param_7;
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x103434cf4,puVar1);
  return;
}



/* Entry: 1034350f8; end: 103435107;  */

undefined1  [16] FUN_1034350f8(void)

{
  return ZEXT816(0x110655100);
}



/* Entry: 103435108; end: 1034357df;  */

void FUN_103435108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f68880,&UNK_10dbc4c40);
  puVar1 = &UNK_1106551a8;
  func_0x000107c613fc(&UNK_1106551a8,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_9;
  *(undefined8 *)(puVar1 + 0x60) = param_10;
  *(undefined8 *)(puVar1 + 0x68) = param_11;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(0x103435234,puVar1);
  return;
}



/* Entry: 1034357e0; end: 1034357ef;  */

undefined1  [16] FUN_1034357e0(void)

{
  return ZEXT816(0x1106551d0);
}



/* Entry: 1034357f0; end: 103435ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1034357f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_103435edc();
  if (lVar3 != 0) {
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_2;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_3;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_4;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_5;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_6;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_7;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_8;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_9;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_10;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_11;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uVar1 = auStack_70[0];
    uStack_78 = param_12;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(auStack_70);
    uStack_78 = param_13;
    func_0x000100087c34(&uStack_78);
    func_0x000107c61574(auStack_70[0]);
    *(long *)(unaff_x20 + _DAT_112f68888) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112f68890) = param_14;
    puVar4 = auStack_88;
    func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103435ba4);
  (*pcVar2)();
}



/* Entry: 103435ba4; end: 103435c03; -[_TtC52SharedStoryProfileSectionSaberPluginScopeGraphBridge67SharedStoryProfileSectionSaberPluginScopeGraphBridgeSaberEntryPoint init] */

void FUN_103435ba4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SharedStoryProfileSectionSaberPluginScopeGraphBridge.SharedStoryProfileSectionSaberPluginScopeGraphBridgeSaberEntryPoint"
                      ,0x78,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103435bd0);
  (*pcVar1)();
}



/* Entry: 103435c04; end: 103435c3b; -[_TtC52SharedStoryProfileSectionSaberPluginScopeGraphBridge67SharedStoryProfileSectionSaberPluginScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103435c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103435c24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103435c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f68888));
  return;
}



/* Entry: 103435c3c; end: 103435c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103435c3c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f68890),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f68888));
  return;
}



/* Entry: 103435c64; end: 103435c83;  */

void FUN_103435c64(void)

{
  func_0x000107c61168(&PTR_PTR_1128da2d0);
  return;
}



/* Entry: 103435c84; end: 103435d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103435c84(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f688c0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f688c8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103435d0c);
  (*pcVar2)();
}



/* Entry: 103435d0c; end: 103435df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103435d0c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f688c0);
  *(undefined **)(unaff_x20 + _DAT_112f688c0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f688c8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f688c8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1106552e8;
  func_0x000107c613fc(&UNK_1106552e8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103435df8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103435df4; end: 103435dff;  */

void FUN_103435df4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103435e00; end: 103435e5f; -[_TtC52SharedStoryProfileSectionSaberPluginScopeGraphBridge65SharedStoryProfileSectionSaberPluginScopedServicesSaberEntryPoint init] */

void FUN_103435e00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SharedStoryProfileSectionSaberPluginScopeGraphBridge.SharedStoryProfileSectionSaberPluginScopedServicesSaberEntryPoint"
                      ,0x76,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103435e2c);
  (*pcVar1)();
}



/* Entry: 103435e60; end: 103435e97; -[_TtC52SharedStoryProfileSectionSaberPluginScopeGraphBridge65SharedStoryProfileSectionSaberPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103435e60(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f688c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f688c0));
  return;
}



/* Entry: 103435e98; end: 103435e9b;  */

void FUN_103435e98(void)

{
  return;
}



/* Entry: 103435e9c; end: 103435ebb;  */

void FUN_103435e9c(void)

{
  FUN_103435d0c();
  return;
}



/* Entry: 103435ebc; end: 103435edb;  */

void FUN_103435ebc(void)

{
  func_0x000107c61168(&PTR_PTR_1128da398);
  return;
}



/* Entry: 103435edc; end: 103435fab;  */

undefined8 FUN_103435edc(void)

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
  
  func_0x000107c61428(0x112f688f8,&uStack_40,0x20,0);
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
    FUN_103435fac();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103435fac; end: 103435fcb;  */

void FUN_103435fac(void)

{
  func_0x000107c61168(&PTR_PTR_1128da460);
  return;
}



/* Entry: 103435fcc; end: 10343629f;  */

void FUN_103435fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f68900,&UNK_10dbc4f18);
  puVar1 = &UNK_110655330;
  func_0x000107c613fc(&UNK_110655330,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_1034362a0,puVar1);
  return;
}



/* Entry: 1034362a0; end: 1034362db;  */

void FUN_1034362a0(void)

{
  long unaff_x20;
  
  func_0x000103436100(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1034362dc; end: 103436403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034362dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f68908) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f68910) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f68918) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f68920) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f68928) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f68930) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f68938) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f68940) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f68948) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f68950) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f68958) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f68960) = param_12;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103436404; end: 103436463; -[_TtC52SharedStoryProfileSectionSaberPluginScopeGraphBridge60SharedStoryProfileSectionSaberPluginScopeGraphBridgeServices init] */

void FUN_103436404(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SharedStoryProfileSectionSaberPluginScopeGraphBridge.SharedStoryProfileSectionSaberPluginScopeGraphBridgeServices"
                      ,0x71,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103436430);
  (*pcVar1)();
}



/* Entry: 103436464; end: 10343657b; -[_TtC52SharedStoryProfileSectionSaberPluginScopeGraphBridge60SharedStoryProfileSectionSaberPluginScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103436480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034364a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034364c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034364e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103436500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103436520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103436504) */
/* WARNING: Removing unreachable block (ram,0x0001034364e4) */
/* WARNING: Removing unreachable block (ram,0x0001034364c4) */
/* WARNING: Removing unreachable block (ram,0x0001034364a4) */
/* WARNING: Removing unreachable block (ram,0x000103436484) */
/* WARNING: Removing unreachable block (ram,0x000103436524) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103436464(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f68908));
  return;
}



/* Entry: 10343657c; end: 103436587;  */

void FUN_10343657c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103436d60,param_1);
  return;
}



/* Entry: 103436588; end: 1034365c7;  */

void FUN_103436588(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x103436d90,0);
  return;
}



/* Entry: 1034365c8; end: 1034365d3;  */

void FUN_1034365c8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103436d64,param_1);
  return;
}



/* Entry: 1034365d4; end: 103436613;  */

void FUN_1034365d4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x103436d94,0);
  return;
}



/* Entry: 103436614; end: 10343661f;  */

void FUN_103436614(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x103436d78,param_1);
  return;
}


