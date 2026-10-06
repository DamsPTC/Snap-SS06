/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c58ba0; end: 101c58ba7;  */

void FUN_101c58ba0(undefined8 *param_1)

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
  func_0x000107c61428(0x112e0c248,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e0c248,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11045de98;
  func_0x000107c613fc(&UNK_11045de98,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101c58c54;
  func_0x00010058fa64(0x101c58c54,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101c58ba8; end: 101c58c03;  */

void FUN_101c58ba8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e0c248,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e0c248,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101c58c04; end: 101c58c5b;  */

undefined ** FUN_101c58c04(void)

{
  return &PTR_DAT_112fec080;
}



/* Entry: 101c58c5c; end: 101c58ca3; -[SCSendToRankingPreloadScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c58c5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0c2a8;
  func_0x000107c61428(param_1 + _DAT_112e0c2a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c58ca4; end: 101c58cfb; -[SCSendToRankingPreloadScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c58ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0c2a8;
  func_0x000107c61428(param_1 + _DAT_112e0c2a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101c58cfc; end: 101c58d43; -[SCSendToRankingPreloadScopeGraphBridgeSaberEntryPoint sendToRankingPreloadScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c58cfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0c2b0;
  func_0x000107c61428(param_1 + _DAT_112e0c2b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101c58d44; end: 101c58da7; -[SCSendToRankingPreloadScopeGraphBridgeSaberEntryPoint setSendToRankingPreloadScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c58d44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0c2b0;
  func_0x000107c61428(param_1 + _DAT_112e0c2b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101c58da8; end: 101c58edb;  */

/* WARNING: Possible PIC construction at 0x000101c58e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c58e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c58e98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c58e64) */
/* WARNING: Removing unreachable block (ram,0x000101c58e80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c58da8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c51e9c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101c585dc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101c58854();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c58edc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e0c1d8) = lVar5;
    *(long *)(lVar4 + _DAT_112e0c1e0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101c58edc; end: 101c58f03; -[SCSendToRankingPreloadScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101c58edc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101c58da8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c58f04; end: 101c58f47; -[SCSendToRankingPreloadScopeGraphBridgeSaberEntryPoint end] */

void FUN_101c58f04(undefined8 param_1)

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



/* Entry: 101c58f48; end: 101c590df;  */

void FUN_101c58f48(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcd) || (param_3 != -0x7ffffffef0ffa760)) {
      uVar2 = 0xd000000000000033;
      func_0x000107c605b8(0xd000000000000033,0x800000010f0058a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SendToRankingPreloadScopeGraphBridge/SCSendToRankingPreloadScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x60,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c590e0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58ee8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101c590e0; end: 101c5918b; -[SCSendToRankingPreloadScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101c590e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101c58f48(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101c5918c; end: 101c591f7; -[SCSendToRankingPreloadScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5918c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e0c2a8,0);
  *(undefined8 *)(param_1 + _DAT_112e0c2b0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e0c2b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c591f8; end: 101c5922b;  */

void FUN_101c591f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c5922c; end: 101c59273; -[SCSendToRankingPreloadScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c59258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5925c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5922c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e0c2a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0c2b0));
  return;
}



/* Entry: 101c59274; end: 101c59293;  */

void FUN_101c59274(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd398);
  return;
}



/* Entry: 101c59294; end: 101c592db; -[SCSCSendToRankingPreloadScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c59294(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0c2e8;
  func_0x000107c61428(param_1 + _DAT_112e0c2e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c592dc; end: 101c59333; -[SCSCSendToRankingPreloadScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c592dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0c2e8;
  func_0x000107c61428(param_1 + _DAT_112e0c2e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101c59334; end: 101c5940b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c59334(undefined8 param_1,long param_2)

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
    FUN_101c58834();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e0c210) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c5940c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e0c218);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0c2f0);
    *(long **)(unaff_x20 + _DAT_112e0c2f0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101c5940c; end: 101c59433; -[SCSCSendToRankingPreloadScopedServicesSaberEntryPoint begin] */

void FUN_101c5940c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101c59334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c59434; end: 101c595ab;  */

/* WARNING: Possible PIC construction at 0x000101c5949c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c59534: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c594a0) */
/* WARNING: Removing unreachable block (ram,0x000101c59538) */
/* WARNING: Removing unreachable block (ram,0x000101c59550) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c59434(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e0c2f0);
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



/* Entry: 101c595ac; end: 101c595b3;  */

void FUN_101c595ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101c595b4; end: 101c595e7; -[SCSCSendToRankingPreloadScopedServicesSaberEntryPoint end] */

void FUN_101c595b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101c59434();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c595e8; end: 101c59707;  */

void FUN_101c595e8(long param_1,long param_2,long param_3)

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
                        "SendToRankingPreloadScopeGraphBridge/SCSCSendToRankingPreloadScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c59708);
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



/* Entry: 101c59708; end: 101c597b3; -[SCSCSendToRankingPreloadScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101c59708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101c595e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101c597b4; end: 101c59813; -[SCSCSendToRankingPreloadScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c597b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e0c2e8,0);
  *(undefined8 *)(param_1 + _DAT_112e0c2f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c59814; end: 101c59847;  */

void FUN_101c59814(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c59848; end: 101c5987f; -[SCSCSendToRankingPreloadScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c59848(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e0c2e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0c2f0));
  return;
}



/* Entry: 101c59880; end: 101c5989f;  */

void FUN_101c59880(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd460);
  return;
}



/* Entry: 101c598a0; end: 101c5990b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c598a0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101c59c94();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e0c328) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101c5990c; end: 101c59977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5990c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0c328) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c59978; end: 101c599d7; -[_TtC46ExternalShareSheetScopedFactoryServiceProvider34SCExternalShareSheetScopedServices init] */

void FUN_101c59978(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalShareSheetScopedFactoryServiceProvider.SCExternalShareSheetScopedServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c599a4);
  (*pcVar1)();
}



/* Entry: 101c599d8; end: 101c599e7; -[_TtC46ExternalShareSheetScopedFactoryServiceProvider34SCExternalShareSheetScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c599d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0c328));
  return;
}



/* Entry: 101c599e8; end: 101c59a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c599e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11045e0b0;
  func_0x000107c613fc(&UNK_11045e0b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101c59d70,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101c59a54; end: 101c59aef;  */

void FUN_101c59a54(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11045dfc0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11045dfc0;
  return;
}



/* Entry: 101c59af0; end: 101c59b27;  */

void FUN_101c59af0(long *param_1)

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



/* Entry: 101c59b28; end: 101c59b2f;  */

undefined8 FUN_101c59b28(void)

{
  return 0x1b;
}



/* Entry: 101c59b30; end: 101c59c63;  */

void FUN_101c59b30(undefined8 *param_1)

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
  puVar1 = &UNK_11045e0d8;
  func_0x000107c613fc(&UNK_11045e0d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101c59d48;
  func_0x00010058fa64(FUN_101c59d48,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101c59c64; end: 101c59c93;  */

undefined ** FUN_101c59c64(void)

{
  return &PTR_DAT_112e0c8a0;
}



/* Entry: 101c59c94; end: 101c59cb3;  */

void FUN_101c59c94(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd520);
  return;
}



/* Entry: 101c59cb4; end: 101c59d03;  */

undefined1  [16] FUN_101c59cb4(void)

{
  return ZEXT816(0x11045e010);
}



/* Entry: 101c59d04; end: 101c59d47;  */

void FUN_101c59d04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0c390 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8cb0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e0c390 = puVar1;
  return;
}



/* Entry: 101c59d48; end: 101c59d6f;  */

void FUN_101c59d48(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101c59d70; end: 101c59d73;  */

void FUN_101c59d70(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101c59d74; end: 101c59e63;  */

/* WARNING: Possible PIC construction at 0x000101c59e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c59e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c59e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c59e38) */
/* WARNING: Removing unreachable block (ram,0x000101c59e28) */
/* WARNING: Removing unreachable block (ram,0x000101c59e48) */

void FUN_101c59d74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11045e160;
  func_0x000107c613fc(&UNK_11045e160,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  uVar2 = 0x112e0c3a0;
  func_0x0001000285a8(0x112e0c3a0,&UNK_10d9e6278);
  func_0x000107c613fc();
  pcVar3 = FUN_101c5a2a8;
  func_0x0001000841fc(FUN_101c5a2a8,puVar1,uVar2);
  func_0x000100084214(&UNK_10d9e6240,0x30,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c59e64; end: 101c59e7f;  */

/* WARNING: Possible PIC construction at 0x000101c59e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c59e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c59e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c59e38) */
/* WARNING: Removing unreachable block (ram,0x000101c59e28) */
/* WARNING: Removing unreachable block (ram,0x000101c59e48) */

void FUN_101c59e64(undefined8 *param_1)

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
  puVar6 = &UNK_11045e160;
  func_0x000107c613fc(&UNK_11045e160,0x40,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  uVar7 = 0x112e0c3a0;
  func_0x0001000285a8(0x112e0c3a0,&UNK_10d9e6278);
  func_0x000107c613fc();
  pcVar8 = FUN_101c5a2a8;
  func_0x0001000841fc(FUN_101c5a2a8,puVar6,uVar7);
  func_0x000100084214(&UNK_10d9e6240,0x30,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c59e80; end: 101c5a2a7;  */

void FUN_101c59e80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e0c3a8,&UNK_10d9e6280);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e0c3b0,&UNK_10d9e6400);
  puVar2 = &UNK_11045e188;
  func_0x000107c613fc(&UNK_11045e188,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar10 = 0x101c5a2b8;
  func_0x0001000823a8(0x101c5a2b8,puVar2);
  func_0x000100082720("SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceProviderWrapperServiceProvider"
                      ,0x62,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_101c59af0;
  func_0x0001000823a8(FUN_101c59af0,0);
  func_0x000100082720("SCExternalShareSheetScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e0c3b8,&UNK_10d9e6288);
  func_0x000107c6157c(uVar10);
  uVar4 = 0x101c5a2c4;
  func_0x0001000823a8(0x101c5a2c4,uVar10);
  func_0x000100082720("SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceServiceProvider"
                      ,0x53,2);
  uVar5 = uVar4;
  FUN_101c5bb64();
  func_0x000100082720("ExternalShareSheetScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e0c3c0,&UNK_10d9e6290);
  puVar2 = &UNK_11045e1b0;
  func_0x000107c613fc(&UNK_11045e1b0,0x40,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_7;
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(param_8);
  pcVar6 = FUN_101c5a318;
  func_0x0001000823a8(FUN_101c5a318,puVar2);
  func_0x000100082720("SCExternalShareSheetEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e0c3c8,&UNK_10d9e6298);
  puVar2 = &UNK_11045e1d8;
  func_0x000107c613fc(&UNK_11045e1d8,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  *(code **)(puVar2 + 0x20) = pcVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar10;
  *(code **)(puVar2 + 0x30) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar6);
  func_0x000107c6157c(pcVar3);
  uVar7 = 0x101c5a338;
  func_0x0001000823a8(0x101c5a338,puVar2);
  func_0x000100082720("SCExternalShareSheetScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e0c330,&UNK_10d9e6010);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x101c5a348;
  func_0x0001000823a8(0x101c5a348,uVar7);
  func_0x000100082720("SCExternalShareSheetScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e0c320,&UNK_10d9e6000);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101c5a350;
  func_0x0001000823a8(0x101c5a350,uVar8);
  func_0x000100082720("SCExternalShareSheetScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11045e200;
  func_0x000107c613fc(&UNK_11045e200,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(code **)(puVar2 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar9 = 0x101c5a358;
  func_0x0001000823a8(0x101c5a358,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCExternalShareSheetScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 101c5a2a8; end: 101c5a2cb;  */

void FUN_101c5a2a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112e0c3a8,&UNK_10d9e6280);
  puVar2 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e0c3b0,&UNK_10d9e6400);
  puVar3 = &UNK_11045e188;
  func_0x000107c613fc(&UNK_11045e188,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  uVar4 = 0x101c5a2b8;
  func_0x0001000823a8(0x101c5a2b8,puVar3);
  func_0x000100082720("SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceProviderWrapperServiceProvider"
                      ,0x62,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_101c59af0;
  func_0x0001000823a8(FUN_101c59af0,0);
  func_0x000100082720("SCExternalShareSheetScopedServicesCleanupRelayServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e0c3b8,&UNK_10d9e6288);
  func_0x000107c6157c(uVar4);
  uVar6 = 0x101c5a2c4;
  func_0x0001000823a8(0x101c5a2c4,uVar4);
  func_0x000100082720("SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceServiceProvider"
                      ,0x53,2);
  uVar11 = uVar6;
  FUN_101c5bb64();
  func_0x000100082720("ExternalShareSheetScopeGraphBridgeServicesServiceProvider",0x39,2);
  func_0x0001000285a8(0x112e0c3c0,&UNK_10d9e6290);
  puVar3 = &UNK_11045e1b0;
  func_0x000107c613fc(&UNK_11045e1b0,0x40,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar10;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  *(undefined8 *)(puVar3 + 0x30) = uVar6;
  *(undefined8 *)(puVar3 + 0x38) = uVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar1);
  pcVar7 = FUN_101c5a318;
  func_0x0001000823a8(FUN_101c5a318,puVar3);
  func_0x000100082720("SCExternalShareSheetEntryPointWrapperServiceProvider",0x34,2);
  func_0x0001000285a8(0x112e0c3c8,&UNK_10d9e6298);
  puVar3 = &UNK_11045e1d8;
  func_0x000107c613fc(&UNK_11045e1d8,0x38,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar11;
  *(code **)(puVar3 + 0x20) = pcVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar4;
  *(code **)(puVar3 + 0x30) = pcVar5;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x101c5a338;
  func_0x0001000823a8(0x101c5a338,puVar3);
  func_0x000100082720("SCExternalShareSheetScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e0c330,&UNK_10d9e6010);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101c5a348;
  func_0x0001000823a8(0x101c5a348,uVar8);
  func_0x000100082720("SCExternalShareSheetScopeInitializationServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e0c320,&UNK_10d9e6000);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x101c5a350;
  func_0x0001000823a8(0x101c5a350,uVar9);
  func_0x000100082720("SCExternalShareSheetScopedServicesServiceProvider",0x31,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11045e200;
  func_0x000107c613fc(&UNK_11045e200,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar10 = 0x101c5a358;
  func_0x0001000823a8(0x101c5a358,puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCExternalShareSheetScopeEntryPointProvider",0x2b,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 101c5a2cc; end: 101c5a317;  */

void FUN_101c5a2cc(void)

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



/* Entry: 101c5a318; end: 101c5a35f;  */

void FUN_101c5a318(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
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
  FUN_101c5abb4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  puVar2 = PTR_PTR_1126a8cb8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f005cb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar9 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000042;
  func_0x000107c5fadc(0xd000000000000042,0x800000010f005cd0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *param_1 = lVar1;
  return;
}



/* Entry: 101c5a360; end: 101c5aa5b;  */

void FUN_101c5a360(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  FUN_101c5abb4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126a8cb8;
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
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f005cb0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar8 = 0x6553726567676f6c;
  func_0x000107c5fadc(0x6553726567676f6c,0xee00736563697672);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000042;
  func_0x000107c5fadc(0xd000000000000042,0x800000010f005cd0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 101c5aa5c; end: 101c5aaa7;  */

void FUN_101c5aa5c(void)

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



/* Entry: 101c5aaa8; end: 101c5aaaf;  */

undefined8 FUN_101c5aaa8(void)

{
  return 0x1b;
}



/* Entry: 101c5aab0; end: 101c5ab33;  */

void FUN_101c5aab0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101c5abf4,param_2,FUN_101c5abf8,param_2,FUN_101c5ac20,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101c5ab34; end: 101c5ab83;  */

undefined8 FUN_101c5ab34(void)

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



/* Entry: 101c5ab84; end: 101c5abb3;  */

void FUN_101c5ab84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11045e218;
  return;
}



/* Entry: 101c5abb4; end: 101c5abd3;  */

void FUN_101c5abb4(void)

{
  func_0x000107c61168(&PTR_PTR_112e0c438);
  return;
}



/* Entry: 101c5abd4; end: 101c5abf7;  */

undefined1  [16] FUN_101c5abd4(void)

{
  return ZEXT816(0x11045e258);
}



/* Entry: 101c5abf8; end: 101c5ac1f;  */

void FUN_101c5abf8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c5ac20; end: 101c5ac27;  */

undefined8 FUN_101c5ac20(void)

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



/* Entry: 101c5ac28; end: 101c5acbb;  */

void FUN_101c5ac28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_101c5b08c();
  func_0x000107c613fc();
  FUN_101c5ad10(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101c5acbc; end: 101c5ad0f;  */

undefined8 FUN_101c5acbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101c5ad10(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101c5ad10; end: 101c5aeef;  */

void FUN_101c5ad10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a8cc0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f005cb0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101c5aef0; end: 101c5af2b;  */

void FUN_101c5aef0(void)

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



/* Entry: 101c5af2c; end: 101c5af7f;  */

void FUN_101c5af2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c5af80; end: 101c5af87;  */

undefined8 FUN_101c5af80(void)

{
  return 0x1b;
}



/* Entry: 101c5af88; end: 101c5b00b;  */

void FUN_101c5af88(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x101c5b0dc,param_2,FUN_101c5b0e0,param_2,FUN_101c5b108,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101c5b00c; end: 101c5b05b;  */

undefined8 FUN_101c5b00c(void)

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



/* Entry: 101c5b05c; end: 101c5b08b;  */

undefined ** FUN_101c5b05c(void)

{
  return &PTR_DAT_112e0c8a0;
}



/* Entry: 101c5b08c; end: 101c5b0ab;  */

void FUN_101c5b08c(void)

{
  func_0x000107c61168(&PTR_PTR_112e0c528);
  return;
}



/* Entry: 101c5b0ac; end: 101c5b0df;  */

undefined1  [16] FUN_101c5b0ac(void)

{
  return ZEXT816(0x11045e2d8);
}



/* Entry: 101c5b0e0; end: 101c5b107;  */

void FUN_101c5b0e0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c5b108; end: 101c5b10f;  */

undefined8 FUN_101c5b108(void)

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



/* Entry: 101c5b110; end: 101c5b377;  */

void FUN_101c5b110(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11045e690;
  ppuVar4 = &PTR_DAT_112e0c8a0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11045e348;
  func_0x000107c613fc(&UNK_11045e348,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  uVar3 = 0x112e0c5a0;
  func_0x0001000285a8(0x112e0c5a0,&UNK_10d9e6668);
  func_0x0001000a6ee8(&UNK_11045e540,
                      "ExternalShareSheetScopeGraphBridgeScopeInitializationPluginKey",0x3e,2,
                      FUN_101c5b378,puVar2,uVar3,&UNK_11045e540,&PTR_DAT_112e0c708);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11045e258,
                      "SCExternalShareSheetEntryPointWrapperScopeInitializationPluginKey",0x41,2,
                      FUN_101c5b3b8,param_4,uVar3,&UNK_11045e258,&PTR_DAT_112e0c3d0);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_11045e2f8,
                      "SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x6f,2,FUN_101c5b468,param_5,uVar3,&UNK_11045e2f8,&PTR_DAT_112e0c4c0);
  func_0x000107c61574(param_5);
  puVar2 = &UNK_11045e370;
  func_0x000107c613fc(&UNK_11045e370,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_11045e050,
                      "SCExternalShareSheetScopedServicesScopeInitializationPluginKey",0x3e,2,
                      FUN_101c5b53c,puVar2,uVar3,&UNK_11045e050,&PTR_DAT_112e0c338);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e0c5a8;
  func_0x0001000285a8(0x112e0c5a8,&UNK_10d9e6670);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCExternalShareSheetScopeInitializationPluginRegistryServiceProvider",0x44,2)
  ;
  *param_1 = puVar1;
  return;
}



/* Entry: 101c5b378; end: 101c5b3b7;  */

void FUN_101c5b378(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101c5bce8(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ExternalShareSheetScopeGraphBridgeScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c5b3b8; end: 101c5b3e3;  */

void FUN_101c5b3b8(void)

{
  FUN_101c5b3e4();
  return;
}



/* Entry: 101c5b3e4; end: 101c5b467;  */

void FUN_101c5b3e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 101c5b468; end: 101c5b493;  */

void FUN_101c5b468(void)

{
  FUN_101c5b3e4();
  return;
}



/* Entry: 101c5b494; end: 101c5b53b;  */

void FUN_101c5b494(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11045e398;
  func_0x000107c613fc(&UNK_11045e398,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101c5b570;
  func_0x0001000823a8(FUN_101c5b570,puVar1);
  func_0x000100082720("SCExternalShareSheetScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101c5b53c; end: 101c5b543;  */

void FUN_101c5b53c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11045e398;
  func_0x000107c613fc(&UNK_11045e398,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101c5b570;
  func_0x0001000823a8(FUN_101c5b570,puVar3);
  func_0x000100082720("SCExternalShareSheetScopedServicesScopeInitializationPluginProvider",0x43,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101c5b544; end: 101c5b56f;  */

void FUN_101c5b544(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c5b570; end: 101c5b587;  */

void FUN_101c5b570(undefined8 *param_1)

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
  puVar1 = &UNK_11045e0d8;
  func_0x000107c613fc(&UNK_11045e0d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101c59d48;
  func_0x00010058fa64(FUN_101c59d48,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101c5b588; end: 101c5b60f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c5b588(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101c5ba74();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e0c5b0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e0c5b8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5b610);
  (*pcVar1)();
}



/* Entry: 101c5b610; end: 101c5b66f; -[_TtC34ExternalShareSheetScopeGraphBridge49ExternalShareSheetScopeGraphBridgeSaberEntryPoint init] */

void FUN_101c5b610(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalShareSheetScopeGraphBridge.ExternalShareSheetScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5b63c);
  (*pcVar1)();
}



/* Entry: 101c5b670; end: 101c5b6a7; -[_TtC34ExternalShareSheetScopeGraphBridge49ExternalShareSheetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c5b68c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5b690) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5b670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0c5b0));
  return;
}



/* Entry: 101c5b6a8; end: 101c5b6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5b6a8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e0c5b8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e0c5b0));
  return;
}



/* Entry: 101c5b6d0; end: 101c5b6ef;  */

void FUN_101c5b6d0(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd5e0);
  return;
}



/* Entry: 101c5b6f0; end: 101c5b753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101c5b6f0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e0c700);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101c5b754; end: 101c5b75b;  */

void FUN_101c5b754(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c5b75c; end: 101c5b7fb;  */

void FUN_101c5b75c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c5b7fc; end: 101c5b81b;  */

void FUN_101c5b7fc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101c5b81c; end: 101c5b8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c5b81c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0c6b8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e0c6c0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c5b8a4);
  (*pcVar2)();
}



/* Entry: 101c5b8a4; end: 101c5b98b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c5b8a4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0c6b8);
  *(undefined **)(unaff_x20 + _DAT_112e0c6b8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e0c6c0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e0c6c0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11045e4a0;
  func_0x000107c613fc(&UNK_11045e4a0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101c5b990,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101c5b98c; end: 101c5b997;  */

void FUN_101c5b98c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101c5b998; end: 101c5b9f7; -[_TtC34ExternalShareSheetScopeGraphBridge49SCExternalShareSheetScopedServicesSaberEntryPoint init] */

void FUN_101c5b998(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalShareSheetScopeGraphBridge.SCExternalShareSheetScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5b9c4);
  (*pcVar1)();
}



/* Entry: 101c5b9f8; end: 101c5ba2f; -[_TtC34ExternalShareSheetScopeGraphBridge49SCExternalShareSheetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5b9f8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e0c6c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0c6b8));
  return;
}



/* Entry: 101c5ba30; end: 101c5ba33;  */

void FUN_101c5ba30(void)

{
  return;
}



/* Entry: 101c5ba34; end: 101c5ba53;  */

void FUN_101c5ba34(void)

{
  FUN_101c5b8a4();
  return;
}



/* Entry: 101c5ba54; end: 101c5ba73;  */

void FUN_101c5ba54(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd6a8);
  return;
}



/* Entry: 101c5ba74; end: 101c5bb43;  */

undefined8 FUN_101c5ba74(void)

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
  
  func_0x000107c61428(0x112e0c6f0,&uStack_40,0x20,0);
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
    FUN_101c5bb44();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}


