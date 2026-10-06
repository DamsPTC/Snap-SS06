/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102495e1c; end: 102495e47;  */

void FUN_102495e1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102495e48; end: 102495e4f;  */

void FUN_102495e48(undefined8 *param_1)

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
  func_0x000107c61428(0x112e9e4f8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9e4f8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110511800;
  func_0x000107c613fc(&UNK_110511800,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102495f3c;
  func_0x00010058fa64(0x102495f3c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102495e50; end: 102495eab;  */

void FUN_102495e50(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9e4f8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9e4f8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102495eac; end: 102495f4f;  */

undefined ** FUN_102495eac(void)

{
  return &PTR_DAT_112fede40;
}



/* Entry: 102495f50; end: 102495f97; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102495f50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9e568;
  func_0x000107c61428(param_1 + _DAT_112e9e568,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102495f98; end: 102495fef; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102495f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9e568;
  func_0x000107c61428(param_1 + _DAT_112e9e568,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102495ff0; end: 102496037; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint sCSettingsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102495ff0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9e570;
  func_0x000107c61428(param_1 + _DAT_112e9e570,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102496038; end: 102496043; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint setSCSettingsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102496038(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9e570;
  func_0x000107c61428(param_1 + _DAT_112e9e570,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102496044; end: 10249608b; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102496044(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9e578;
  func_0x000107c61428(param_1 + _DAT_112e9e578,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10249608c; end: 102496097; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10249608c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9e578;
  func_0x000107c61428(param_1 + _DAT_112e9e578,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102496098; end: 1024960df; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint dSAExplainerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102496098(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9e580;
  func_0x000107c61428(param_1 + _DAT_112e9e580,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024960e0; end: 1024960eb; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint setDSAExplainerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024960e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9e580;
  func_0x000107c61428(param_1 + _DAT_112e9e580,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024960ec; end: 10249614b;  */

void FUN_1024960ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10249614c; end: 102496383;  */

/* WARNING: Possible PIC construction at 0x0001024962b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024962c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024962e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024962f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102496310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102496358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024962f8) */
/* WARNING: Removing unreachable block (ram,0x0001024962e8) */
/* WARNING: Removing unreachable block (ram,0x0001024962cc) */
/* WARNING: Removing unreachable block (ram,0x0001024962bc) */
/* WARNING: Removing unreachable block (ram,0x00010249635c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10249614c(void)

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
  func_0x000107c512b4();
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
      func_0x000107c411d8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_1024955f4();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_10249586c();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102496384);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112e9e488) = lVar5;
        *(long *)(lVar4 + _DAT_112e9e490) = unaff_x20;
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



/* Entry: 102496384; end: 1024963ab; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102496384(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10249614c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024963ac; end: 1024963ef; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint end] */

void FUN_1024963ac(undefined8 param_1)

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



/* Entry: 1024963f0; end: 10249665f;  */

void FUN_1024963f0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0fa21c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f05de40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000017;
        if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ed990)) ||
           (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a68c();
        }
        else {
          uVar2 = 0xd00000000000002b;
          if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0f5d2d0)) &&
             (func_0x000107c605b8(0xd00000000000002b,0x800000010f0a2d30,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "DSAExplainerScopeGraphBridge/SCDSAExplainerScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x50,2,0x38,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102496660);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53dd4();
        }
        goto LAB_10249647c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5885c();
  }
LAB_10249647c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102496660; end: 10249670b; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102496660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1024963f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10249670c; end: 10249678f; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10249670c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9e568,0);
  *(undefined8 *)(param_1 + _DAT_112e9e570) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9e578) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9e580) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9e588) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102496790; end: 1024967c3;  */

void FUN_102496790(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024967c4; end: 10249682b; -[SCDSAExplainerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024967f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102496810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024967f4) */
/* WARNING: Removing unreachable block (ram,0x000102496814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024967c4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9e568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9e570));
  return;
}



/* Entry: 10249682c; end: 10249684b;  */

void FUN_10249682c(void)

{
  func_0x000107c61168(&PTR_PTR_1128461a0);
  return;
}



/* Entry: 10249684c; end: 102496893; -[SCSCDSAExplainerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10249684c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9e5b8;
  func_0x000107c61428(param_1 + _DAT_112e9e5b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102496894; end: 1024968eb; -[SCSCDSAExplainerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102496894(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9e5b8;
  func_0x000107c61428(param_1 + _DAT_112e9e5b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024968ec; end: 1024969c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024968ec(undefined8 param_1,long param_2)

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
    FUN_10249584c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9e4c0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024969c4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9e4c8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9e5c0);
    *(long **)(unaff_x20 + _DAT_112e9e5c0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1024969c4; end: 1024969eb; -[SCSCDSAExplainerScopedServicesSaberEntryPoint begin] */

void FUN_1024969c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024968ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024969ec; end: 102496b63;  */

/* WARNING: Possible PIC construction at 0x000102496a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102496aec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102496a58) */
/* WARNING: Removing unreachable block (ram,0x000102496af0) */
/* WARNING: Removing unreachable block (ram,0x000102496b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024969ec(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9e5c0);
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



/* Entry: 102496b64; end: 102496b6b;  */

void FUN_102496b64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102496b6c; end: 102496b9f; -[SCSCDSAExplainerScopedServicesSaberEntryPoint end] */

void FUN_102496b6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1024969ec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102496ba0; end: 102496cbf;  */

void FUN_102496ba0(long param_1,long param_2,long param_3)

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
                        "DSAExplainerScopeGraphBridge/SCSCDSAExplainerScopedServicesSaberEntryPoint.swift"
                        ,0x50,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102496cc0);
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



/* Entry: 102496cc0; end: 102496d6b; -[SCSCDSAExplainerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102496cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102496ba0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102496d6c; end: 102496dcb; -[SCSCDSAExplainerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102496d6c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9e5b8,0);
  *(undefined8 *)(param_1 + _DAT_112e9e5c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102496dcc; end: 102496dff;  */

void FUN_102496dcc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102496e00; end: 102496e37; -[SCSCDSAExplainerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102496e00(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9e5b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9e5c0));
  return;
}



/* Entry: 102496e38; end: 102496e57;  */

void FUN_102496e38(void)

{
  func_0x000107c61168(&PTR_PTR_112846278);
  return;
}



/* Entry: 102496e58; end: 102496ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102496e58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9e5f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102496ea4; end: 102496ed7;  */

void FUN_102496ea4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102496ed8; end: 102496ee7; -[_TtC30DiscoverFeedPageLauncherPlugin30DiscoverFeedPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102496ed8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9e5f0));
  return;
}



/* Entry: 102496ee8; end: 102496f6f; -[_TtC30DiscoverFeedPageLauncherPlugin30DiscoverFeedPageLauncherPlugin handlers] */

void FUN_102496ee8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f27668();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(long *)(lVar1 + 0x20) = param_1;
  func_0x000107c61174(param_1);
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



/* Entry: 102496f70; end: 102496f73; -[_TtC30DiscoverFeedPageLauncherPlugin30DiscoverFeedPageLauncherPlugin setHandlers:] */

void FUN_102496f70(void)

{
  return;
}



/* Entry: 102496f74; end: 102496f7b; -[_TtC30DiscoverFeedPageLauncherPlugin30DiscoverFeedPageLauncherPlugin screen] */

undefined8 FUN_102496f74(void)

{
  return 2;
}



/* Entry: 102496f7c; end: 102497007; -[_TtC30DiscoverFeedPageLauncherPlugin30DiscoverFeedPageLauncherPlugin launchWithCommand:uiContainer:completion:] */

/* WARNING: Possible PIC construction at 0x000102496fc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102496fc4) */
/* WARNING: Removing unreachable block (ram,0x000102496fc8) */
/* WARNING: Removing unreachable block (ram,0x000102496fe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102496f7c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010451338c();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102497008; end: 102497053;  */

void FUN_102497008(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102497054,param_1);
  return;
}



/* Entry: 102497054; end: 1024970bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102497054(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1024970bc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9e5f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1024970bc; end: 1024970db;  */

void FUN_1024970bc(void)

{
  func_0x000107c61168(&PTR_PTR_112846338);
  return;
}



/* Entry: 1024970dc; end: 1024970eb;  */

undefined1  [16] FUN_1024970dc(void)

{
  return ZEXT816(0x1105118e8);
}



/* Entry: 1024970ec; end: 102497aaf;  */

/* WARNING: Possible PIC construction at 0x0001024976b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024976c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024976d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024976e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024976f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024977a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024977b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024977c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024977d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024977e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024977f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024978a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024978b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024978c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024978d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024978e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024978f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024979a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024979b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024979c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024979d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024979e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024979f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102497a88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102497a7c) */
/* WARNING: Removing unreachable block (ram,0x000102497a6c) */
/* WARNING: Removing unreachable block (ram,0x000102497a5c) */
/* WARNING: Removing unreachable block (ram,0x000102497a4c) */
/* WARNING: Removing unreachable block (ram,0x000102497a3c) */
/* WARNING: Removing unreachable block (ram,0x000102497a2c) */
/* WARNING: Removing unreachable block (ram,0x000102497a1c) */
/* WARNING: Removing unreachable block (ram,0x000102497a0c) */
/* WARNING: Removing unreachable block (ram,0x0001024979fc) */
/* WARNING: Removing unreachable block (ram,0x0001024979ec) */
/* WARNING: Removing unreachable block (ram,0x0001024979dc) */
/* WARNING: Removing unreachable block (ram,0x0001024979cc) */
/* WARNING: Removing unreachable block (ram,0x0001024979bc) */
/* WARNING: Removing unreachable block (ram,0x0001024979ac) */
/* WARNING: Removing unreachable block (ram,0x00010249799c) */
/* WARNING: Removing unreachable block (ram,0x00010249798c) */
/* WARNING: Removing unreachable block (ram,0x00010249797c) */
/* WARNING: Removing unreachable block (ram,0x00010249796c) */
/* WARNING: Removing unreachable block (ram,0x00010249795c) */
/* WARNING: Removing unreachable block (ram,0x00010249794c) */
/* WARNING: Removing unreachable block (ram,0x00010249793c) */
/* WARNING: Removing unreachable block (ram,0x00010249792c) */
/* WARNING: Removing unreachable block (ram,0x00010249791c) */
/* WARNING: Removing unreachable block (ram,0x00010249790c) */
/* WARNING: Removing unreachable block (ram,0x0001024978fc) */
/* WARNING: Removing unreachable block (ram,0x0001024978ec) */
/* WARNING: Removing unreachable block (ram,0x0001024978dc) */
/* WARNING: Removing unreachable block (ram,0x0001024978cc) */
/* WARNING: Removing unreachable block (ram,0x0001024978bc) */
/* WARNING: Removing unreachable block (ram,0x0001024978ac) */
/* WARNING: Removing unreachable block (ram,0x00010249789c) */
/* WARNING: Removing unreachable block (ram,0x00010249788c) */
/* WARNING: Removing unreachable block (ram,0x00010249787c) */
/* WARNING: Removing unreachable block (ram,0x00010249786c) */
/* WARNING: Removing unreachable block (ram,0x00010249785c) */
/* WARNING: Removing unreachable block (ram,0x00010249784c) */
/* WARNING: Removing unreachable block (ram,0x00010249783c) */
/* WARNING: Removing unreachable block (ram,0x00010249782c) */
/* WARNING: Removing unreachable block (ram,0x00010249781c) */
/* WARNING: Removing unreachable block (ram,0x00010249780c) */
/* WARNING: Removing unreachable block (ram,0x0001024977fc) */
/* WARNING: Removing unreachable block (ram,0x0001024977ec) */
/* WARNING: Removing unreachable block (ram,0x0001024977dc) */
/* WARNING: Removing unreachable block (ram,0x0001024977cc) */
/* WARNING: Removing unreachable block (ram,0x0001024977bc) */
/* WARNING: Removing unreachable block (ram,0x0001024977ac) */
/* WARNING: Removing unreachable block (ram,0x00010249779c) */
/* WARNING: Removing unreachable block (ram,0x00010249778c) */
/* WARNING: Removing unreachable block (ram,0x00010249777c) */
/* WARNING: Removing unreachable block (ram,0x00010249776c) */
/* WARNING: Removing unreachable block (ram,0x00010249775c) */
/* WARNING: Removing unreachable block (ram,0x00010249774c) */
/* WARNING: Removing unreachable block (ram,0x00010249773c) */
/* WARNING: Removing unreachable block (ram,0x00010249772c) */
/* WARNING: Removing unreachable block (ram,0x00010249771c) */
/* WARNING: Removing unreachable block (ram,0x00010249770c) */
/* WARNING: Removing unreachable block (ram,0x0001024976fc) */
/* WARNING: Removing unreachable block (ram,0x0001024976ec) */
/* WARNING: Removing unreachable block (ram,0x0001024976dc) */
/* WARNING: Removing unreachable block (ram,0x0001024976cc) */
/* WARNING: Removing unreachable block (ram,0x0001024976bc) */
/* WARNING: Removing unreachable block (ram,0x000102497a8c) */

void FUN_1024970ec(undefined8 *param_1)

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
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
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
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined *puVar62;
  undefined8 uVar63;
  code *pcVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  long unaff_x20;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar31 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar63 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar32 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar33 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar34 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar35 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar36 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar37 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar38 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar39 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar40 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar41 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar42 = *(undefined8 *)(unaff_x20 + 200);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar43 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar44 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar45 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar46 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar47 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar48 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar49 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar50 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar51 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar52 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar53 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar54 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar24 = *(undefined8 *)(unaff_x20 + 400);
  uVar55 = *(undefined8 *)(unaff_x20 + 0x198);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar56 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar57 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar27 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uVar58 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uVar28 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar59 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar29 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uVar60 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar30 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uVar61 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uVar65 = *(undefined8 *)(unaff_x20 + 0x200);
  uVar66 = *(undefined8 *)(unaff_x20 + 0x208);
  uVar67 = *(undefined8 *)(unaff_x20 + 0x210);
  uVar68 = *(undefined8 *)(unaff_x20 + 0x218);
  uVar69 = *(undefined8 *)(unaff_x20 + 0x220);
  uVar70 = *(undefined8 *)(unaff_x20 + 0x228);
  uVar71 = *(undefined8 *)(unaff_x20 + 0x230);
  uVar72 = *(undefined8 *)(unaff_x20 + 0x238);
  uVar73 = *(undefined8 *)(unaff_x20 + 0x240);
  uVar74 = *(undefined8 *)(unaff_x20 + 0x248);
  uVar75 = *(undefined8 *)(unaff_x20 + 0x250);
  uVar76 = *(undefined8 *)(unaff_x20 + 600);
  uVar77 = *(undefined8 *)(unaff_x20 + 0x260);
  uVar78 = *(undefined8 *)(unaff_x20 + 0x268);
  uVar79 = *(undefined8 *)(unaff_x20 + 0x270);
  uVar80 = *(undefined8 *)(unaff_x20 + 0x278);
  uVar81 = *(undefined8 *)(unaff_x20 + 0x280);
  uVar82 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar83 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar84 = *(undefined8 *)(unaff_x20 + 0x298);
  uVar85 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uVar86 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uVar87 = *(undefined8 *)(unaff_x20 + 0x2b0);
  uVar88 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uVar89 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uVar90 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uVar91 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uVar92 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uVar93 = *(undefined8 *)(unaff_x20 + 0x2e0);
  uVar94 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uVar95 = *(undefined8 *)(unaff_x20 + 0x2f0);
  uVar96 = *(undefined8 *)(unaff_x20 + 0x2f8);
  uVar108 = *(undefined8 *)(unaff_x20 + 0x300);
  uVar97 = *(undefined8 *)(unaff_x20 + 0x308);
  uVar109 = *(undefined8 *)(unaff_x20 + 0x310);
  uVar98 = *(undefined8 *)(unaff_x20 + 0x318);
  uVar110 = *(undefined8 *)(unaff_x20 + 800);
  uVar99 = *(undefined8 *)(unaff_x20 + 0x328);
  uVar111 = *(undefined8 *)(unaff_x20 + 0x330);
  uVar100 = *(undefined8 *)(unaff_x20 + 0x338);
  uVar112 = *(undefined8 *)(unaff_x20 + 0x340);
  uVar101 = *(undefined8 *)(unaff_x20 + 0x348);
  uVar113 = *(undefined8 *)(unaff_x20 + 0x350);
  uVar102 = *(undefined8 *)(unaff_x20 + 0x358);
  uVar114 = *(undefined8 *)(unaff_x20 + 0x360);
  uVar103 = *(undefined8 *)(unaff_x20 + 0x368);
  uVar115 = *(undefined8 *)(unaff_x20 + 0x370);
  uVar104 = *(undefined8 *)(unaff_x20 + 0x378);
  uVar116 = *(undefined8 *)(unaff_x20 + 0x380);
  uVar105 = *(undefined8 *)(unaff_x20 + 0x388);
  uVar117 = *(undefined8 *)(unaff_x20 + 0x390);
  uVar106 = *(undefined8 *)(unaff_x20 + 0x398);
  uVar107 = *(undefined8 *)(unaff_x20 + 0x3a0);
  uVar124 = *(undefined8 *)(unaff_x20 + 0x3a8);
  uVar123 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uVar122 = *(undefined8 *)(unaff_x20 + 0x3b8);
  uVar121 = *(undefined8 *)(unaff_x20 + 0x3c0);
  uVar120 = *(undefined8 *)(unaff_x20 + 0x3c8);
  uVar119 = *(undefined8 *)(unaff_x20 + 0x3d0);
  uVar118 = *(undefined8 *)(unaff_x20 + 0x3d8);
  uVar126 = *(undefined8 *)(unaff_x20 + 0x3e0);
  uVar125 = *(undefined8 *)(unaff_x20 + 1000);
  puVar62 = &UNK_110511a00;
  func_0x000107c613fc(&UNK_110511a00,0x3f0,7);
  *(undefined8 *)(puVar62 + 0x10) = uVar1;
  *(undefined8 *)(puVar62 + 0x18) = uVar31;
  *(undefined8 *)(puVar62 + 0x20) = uVar63;
  *(undefined8 *)(puVar62 + 0x28) = uVar32;
  *(undefined8 *)(puVar62 + 0x30) = uVar2;
  *(undefined8 *)(puVar62 + 0x38) = uVar33;
  *(undefined8 *)(puVar62 + 0x40) = uVar3;
  *(undefined8 *)(puVar62 + 0x48) = uVar34;
  *(undefined8 *)(puVar62 + 0x50) = uVar4;
  *(undefined8 *)(puVar62 + 0x58) = uVar35;
  *(undefined8 *)(puVar62 + 0x60) = uVar5;
  *(undefined8 *)(puVar62 + 0x68) = uVar36;
  *(undefined8 *)(puVar62 + 0x70) = uVar6;
  *(undefined8 *)(puVar62 + 0x78) = uVar37;
  *(undefined8 *)(puVar62 + 0x80) = uVar7;
  *(undefined8 *)(puVar62 + 0x88) = uVar38;
  *(undefined8 *)(puVar62 + 0x90) = uVar8;
  *(undefined8 *)(puVar62 + 0x98) = uVar39;
  *(undefined8 *)(puVar62 + 0xa0) = uVar9;
  *(undefined8 *)(puVar62 + 0xa8) = uVar40;
  *(undefined8 *)(puVar62 + 0xb0) = uVar10;
  *(undefined8 *)(puVar62 + 0xb8) = uVar41;
  *(undefined8 *)(puVar62 + 0xc0) = uVar11;
  *(undefined8 *)(puVar62 + 200) = uVar42;
  *(undefined8 *)(puVar62 + 0xd0) = uVar12;
  *(undefined8 *)(puVar62 + 0xd8) = uVar43;
  *(undefined8 *)(puVar62 + 0xe0) = uVar13;
  *(undefined8 *)(puVar62 + 0xe8) = uVar44;
  *(undefined8 *)(puVar62 + 0xf0) = uVar14;
  *(undefined8 *)(puVar62 + 0xf8) = uVar45;
  *(undefined8 *)(puVar62 + 0x100) = uVar15;
  *(undefined8 *)(puVar62 + 0x108) = uVar46;
  *(undefined8 *)(puVar62 + 0x110) = uVar16;
  *(undefined8 *)(puVar62 + 0x118) = uVar47;
  *(undefined8 *)(puVar62 + 0x120) = uVar17;
  *(undefined8 *)(puVar62 + 0x128) = uVar48;
  *(undefined8 *)(puVar62 + 0x130) = uVar18;
  *(undefined8 *)(puVar62 + 0x138) = uVar49;
  *(undefined8 *)(puVar62 + 0x140) = uVar19;
  *(undefined8 *)(puVar62 + 0x148) = uVar50;
  *(undefined8 *)(puVar62 + 0x150) = uVar20;
  *(undefined8 *)(puVar62 + 0x158) = uVar51;
  *(undefined8 *)(puVar62 + 0x160) = uVar21;
  *(undefined8 *)(puVar62 + 0x168) = uVar52;
  *(undefined8 *)(puVar62 + 0x170) = uVar22;
  *(undefined8 *)(puVar62 + 0x178) = uVar53;
  *(undefined8 *)(puVar62 + 0x180) = uVar23;
  *(undefined8 *)(puVar62 + 0x188) = uVar54;
  *(undefined8 *)(puVar62 + 400) = uVar24;
  *(undefined8 *)(puVar62 + 0x198) = uVar55;
  *(undefined8 *)(puVar62 + 0x1a0) = uVar25;
  *(undefined8 *)(puVar62 + 0x1a8) = uVar56;
  *(undefined8 *)(puVar62 + 0x1b0) = uVar26;
  *(undefined8 *)(puVar62 + 0x1b8) = uVar57;
  *(undefined8 *)(puVar62 + 0x1c0) = uVar27;
  *(undefined8 *)(puVar62 + 0x1c8) = uVar58;
  *(undefined8 *)(puVar62 + 0x1d0) = uVar28;
  *(undefined8 *)(puVar62 + 0x1d8) = uVar59;
  *(undefined8 *)(puVar62 + 0x1e0) = uVar29;
  *(undefined8 *)(puVar62 + 0x1e8) = uVar60;
  *(undefined8 *)(puVar62 + 0x1f0) = uVar30;
  *(undefined8 *)(puVar62 + 0x1f8) = uVar61;
  *(undefined8 *)(puVar62 + 0x200) = uVar65;
  *(undefined8 *)(puVar62 + 0x208) = uVar66;
  *(undefined8 *)(puVar62 + 0x210) = uVar67;
  *(undefined8 *)(puVar62 + 0x218) = uVar68;
  *(undefined8 *)(puVar62 + 0x220) = uVar69;
  *(undefined8 *)(puVar62 + 0x228) = uVar70;
  *(undefined8 *)(puVar62 + 0x230) = uVar71;
  *(undefined8 *)(puVar62 + 0x238) = uVar72;
  *(undefined8 *)(puVar62 + 0x240) = uVar73;
  *(undefined8 *)(puVar62 + 0x248) = uVar74;
  *(undefined8 *)(puVar62 + 0x250) = uVar75;
  *(undefined8 *)(puVar62 + 600) = uVar76;
  *(undefined8 *)(puVar62 + 0x260) = uVar77;
  *(undefined8 *)(puVar62 + 0x268) = uVar78;
  *(undefined8 *)(puVar62 + 0x270) = uVar79;
  *(undefined8 *)(puVar62 + 0x278) = uVar80;
  *(undefined8 *)(puVar62 + 0x280) = uVar81;
  *(undefined8 *)(puVar62 + 0x288) = uVar82;
  *(undefined8 *)(puVar62 + 0x290) = uVar83;
  *(undefined8 *)(puVar62 + 0x298) = uVar84;
  *(undefined8 *)(puVar62 + 0x2a0) = uVar85;
  *(undefined8 *)(puVar62 + 0x2a8) = uVar86;
  *(undefined8 *)(puVar62 + 0x2b0) = uVar87;
  *(undefined8 *)(puVar62 + 0x2b8) = uVar88;
  *(undefined8 *)(puVar62 + 0x2c0) = uVar89;
  *(undefined8 *)(puVar62 + 0x2c8) = uVar90;
  *(undefined8 *)(puVar62 + 0x2d0) = uVar91;
  *(undefined8 *)(puVar62 + 0x2d8) = uVar92;
  *(undefined8 *)(puVar62 + 0x2e0) = uVar93;
  *(undefined8 *)(puVar62 + 0x2e8) = uVar94;
  *(undefined8 *)(puVar62 + 0x2f0) = uVar95;
  *(undefined8 *)(puVar62 + 0x2f8) = uVar96;
  *(undefined8 *)(puVar62 + 0x300) = uVar108;
  *(undefined8 *)(puVar62 + 0x308) = uVar97;
  *(undefined8 *)(puVar62 + 0x310) = uVar109;
  *(undefined8 *)(puVar62 + 0x318) = uVar98;
  *(undefined8 *)(puVar62 + 800) = uVar110;
  *(undefined8 *)(puVar62 + 0x328) = uVar99;
  *(undefined8 *)(puVar62 + 0x330) = uVar111;
  *(undefined8 *)(puVar62 + 0x338) = uVar100;
  *(undefined8 *)(puVar62 + 0x340) = uVar112;
  *(undefined8 *)(puVar62 + 0x348) = uVar101;
  *(undefined8 *)(puVar62 + 0x350) = uVar113;
  *(undefined8 *)(puVar62 + 0x358) = uVar102;
  *(undefined8 *)(puVar62 + 0x360) = uVar114;
  *(undefined8 *)(puVar62 + 0x368) = uVar103;
  *(undefined8 *)(puVar62 + 0x370) = uVar115;
  *(undefined8 *)(puVar62 + 0x378) = uVar104;
  *(undefined8 *)(puVar62 + 0x380) = uVar116;
  *(undefined8 *)(puVar62 + 0x388) = uVar105;
  *(undefined8 *)(puVar62 + 0x390) = uVar117;
  *(undefined8 *)(puVar62 + 0x398) = uVar106;
  *(undefined8 *)(puVar62 + 0x3a0) = uVar107;
  *(undefined8 *)(puVar62 + 0x3a8) = uVar124;
  *(undefined8 *)(puVar62 + 0x3b0) = uVar123;
  *(undefined8 *)(puVar62 + 0x3b8) = uVar122;
  *(undefined8 *)(puVar62 + 0x3c0) = uVar121;
  *(undefined8 *)(puVar62 + 0x3c8) = uVar120;
  *(undefined8 *)(puVar62 + 0x3d0) = uVar119;
  *(undefined8 *)(puVar62 + 0x3d8) = uVar118;
  *(undefined8 *)(puVar62 + 0x3e0) = uVar126;
  *(undefined8 *)(puVar62 + 1000) = uVar125;
  uVar63 = 0x112e9e628;
  func_0x0001000285a8(0x112e9e628,&UNK_10daae688);
  func_0x000107c613fc();
  pcVar64 = FUN_102497ebc;
  func_0x0001000841fc(FUN_102497ebc,puVar62,uVar63);
  func_0x000100084214(&UNK_10daae650,0x35,2);
  *param_1 = pcVar64;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102497ab0; end: 102497abf;  */

undefined1  [16] FUN_102497ab0(void)

{
  return ZEXT816(0x1105119e0);
}



/* Entry: 102497ac0; end: 102497ebb;  */

void FUN_102497ac0(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102497ebc; end: 102498c83;  */

void FUN_102497ebc(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
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
  undefined8 *puVar47;
  undefined8 *puVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  char *pcVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  long unaff_x20;
  undefined8 uVar119;
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  undefined8 uVar127;
  undefined8 auStack_70 [2];
  
  uVar19 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar66 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar53 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar64 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar63 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar25 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar26 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar27 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar28 = *(undefined8 *)(unaff_x20 + 200);
  uVar10 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar29 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar123 = *(undefined8 *)(unaff_x20 + 0x210);
  uVar120 = *(undefined8 *)(unaff_x20 + 0x208);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar30 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar124 = *(undefined8 *)(unaff_x20 + 0x228);
  uVar121 = *(undefined8 *)(unaff_x20 + 0x220);
  uVar127 = *(undefined8 *)(unaff_x20 + 0x368);
  uVar126 = *(undefined8 *)(unaff_x20 + 0x360);
  uVar125 = *(undefined8 *)(unaff_x20 + 0x378);
  uVar122 = *(undefined8 *)(unaff_x20 + 0x370);
  uVar54 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar31 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar32 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar59 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar65 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar68 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar33 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar55 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar34 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar62 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar35 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar36 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar61 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar37 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar60 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar38 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar39 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar58 = *(undefined8 *)(unaff_x20 + 400);
  uVar40 = *(undefined8 *)(unaff_x20 + 0x198);
  uVar57 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uVar41 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar56 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar42 = *(undefined8 *)(unaff_x20 + 0x1b8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uVar43 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar44 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uVar45 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uVar46 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uVar69 = *(undefined8 *)(unaff_x20 + 0x200);
  uVar115 = *(undefined8 *)(unaff_x20 + 0x218);
  uVar117 = *(undefined8 *)(unaff_x20 + 0x230);
  uVar70 = *(undefined8 *)(unaff_x20 + 0x238);
  uVar116 = *(undefined8 *)(unaff_x20 + 600);
  uVar118 = *(undefined8 *)(unaff_x20 + 0x260);
  uVar71 = *(undefined8 *)(unaff_x20 + 0x268);
  uVar72 = *(undefined8 *)(unaff_x20 + 0x270);
  uVar73 = *(undefined8 *)(unaff_x20 + 0x278);
  uVar74 = *(undefined8 *)(unaff_x20 + 0x280);
  uVar75 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar76 = *(undefined8 *)(unaff_x20 + 0x290);
  uVar77 = *(undefined8 *)(unaff_x20 + 0x298);
  uVar78 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uVar79 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uVar80 = *(undefined8 *)(unaff_x20 + 0x2b0);
  uVar81 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uVar82 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uVar83 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uVar84 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uVar85 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uVar86 = *(undefined8 *)(unaff_x20 + 0x2e0);
  uVar87 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uVar88 = *(undefined8 *)(unaff_x20 + 0x2f0);
  uVar89 = *(undefined8 *)(unaff_x20 + 0x2f8);
  uVar90 = *(undefined8 *)(unaff_x20 + 0x300);
  uVar91 = *(undefined8 *)(unaff_x20 + 0x308);
  uVar92 = *(undefined8 *)(unaff_x20 + 0x310);
  uVar93 = *(undefined8 *)(unaff_x20 + 0x318);
  uVar94 = *(undefined8 *)(unaff_x20 + 800);
  uVar95 = *(undefined8 *)(unaff_x20 + 0x328);
  uVar96 = *(undefined8 *)(unaff_x20 + 0x330);
  uVar97 = *(undefined8 *)(unaff_x20 + 0x338);
  uVar98 = *(undefined8 *)(unaff_x20 + 0x340);
  uVar99 = *(undefined8 *)(unaff_x20 + 0x348);
  uVar100 = *(undefined8 *)(unaff_x20 + 0x350);
  uVar101 = *(undefined8 *)(unaff_x20 + 0x358);
  uVar102 = *(undefined8 *)(unaff_x20 + 0x380);
  uVar103 = *(undefined8 *)(unaff_x20 + 0x388);
  uVar104 = *(undefined8 *)(unaff_x20 + 0x390);
  uVar105 = *(undefined8 *)(unaff_x20 + 0x398);
  uVar106 = *(undefined8 *)(unaff_x20 + 0x3a0);
  uVar107 = *(undefined8 *)(unaff_x20 + 0x3a8);
  uVar108 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uVar109 = *(undefined8 *)(unaff_x20 + 0x3b8);
  uVar110 = *(undefined8 *)(unaff_x20 + 0x3c0);
  uVar111 = *(undefined8 *)(unaff_x20 + 0x3c8);
  uVar112 = *(undefined8 *)(unaff_x20 + 0x3d0);
  uVar113 = *(undefined8 *)(unaff_x20 + 0x3d8);
  uVar114 = *(undefined8 *)(unaff_x20 + 0x3e0);
  uVar119 = *param_2;
  func_0x0001000285a8(0x112e9e630,&UNK_10daae690);
  puVar47 = auStack_70;
  auStack_70[0] = uVar119;
  func_0x0001000838ec();
  puVar48 = puVar47;
  FUN_102498c84();
  func_0x000100082720("CollectionViewAutoPlayOperaPluginServiceProvider",0x30,2);
  uVar49 = uVar19;
  FUN_1024acc30(uVar19,uVar66);
  func_0x000100082720("ContentDSAExplainerPluginServiceProvider",0x28,2);
  uVar50 = uVar20;
  FUN_1024aa634(uVar20,uVar1,uVar21,uVar2,uVar22,uVar3,uVar23,uVar4,puVar47);
  func_0x000100082720("ContentDiscoverFeedLoggingOperaPluginServiceProvider",0x34,2);
  uVar51 = uVar21;
  FUN_10249cad0(uVar21,uVar24,uVar5,uVar3,uVar53,uVar64,puVar47);
  func_0x000100082720("ContentDiscoverOperaOnboardingPluginServiceProvider",0x33,2);
  uVar52 = uVar21;
  FUN_1024a5738(uVar21,uVar20,uVar63);
  func_0x000100082720("ContentFavoriteOperaPluginServiceProvider",0x29,2);
  uVar119 = uVar63;
  FUN_1024a9758(uVar63,uVar6,uVar25,uVar21,uVar7,uVar26,uVar8,uVar27,uVar9,uVar28,uVar4,uVar10,
                uVar29,uVar2,uVar11,uVar30,uVar54,uVar31,uVar12,uVar3,uVar1,puVar47);
  func_0x000100082720("ContentLegacyStoriesPlaylistPluginServiceProvider",0x31,2);
  uVar53 = uVar63;
  FUN_1024acde8(uVar63,uVar6,uVar32,uVar25,uVar59,uVar9,uVar20,uVar3,uVar65,uVar68,uVar21,uVar5,
                uVar33,uVar26,uVar10,uVar22,uVar55,uVar34,uVar62,uVar35,uVar13,uVar27,uVar36,uVar1,
                uVar61,uVar37,uVar60,uVar38,uVar14,uVar39,uVar31,uVar58,uVar40,uVar57,uVar23,uVar2,
                uVar41,uVar56,puVar47);
  func_0x000100082720("ContentLongformShowOperaPluginServiceProvider",0x2d,2);
  uVar54 = uVar21;
  FUN_1024aa2d0(uVar21,uVar42,uVar26,puVar47);
  func_0x000100082720("ContentOperaChromePropertiesPluginServiceProvider",0x31,2);
  uVar55 = uVar20;
  FUN_1024aa07c(uVar20,puVar47);
  func_0x000100082720("ContentOperaDebugViewerPluginServiceProvider",0x2c,2);
  uVar56 = uVar63;
  FUN_1024aaf70(uVar63,uVar15);
  func_0x000100082720("ContentOperaOptInDoorbellPluginServiceProvider",0x2e,2);
  uVar57 = uVar21;
  FUN_10249b8d8(uVar21,uVar31,uVar43,uVar64);
  func_0x000100082720("ContentOperaSubtitlesPluginServiceProvider",0x2a,2);
  uVar58 = uVar63;
  FUN_1024ae178(uVar63,uVar65,uVar25,uVar59,uVar16,uVar44,uVar9,uVar20,uVar3,uVar17,uVar68,uVar21,
                uVar5,uVar33,uVar26,uVar10,uVar22,uVar34,uVar13,uVar27,uVar36,uVar1,uVar37,uVar39,
                uVar31,uVar40,uVar45,uVar18,uVar46,uVar69,uVar35,uVar120,uVar123,uVar115,uVar23,
                uVar121,uVar124,uVar117,uVar41,uVar70,uVar15,uVar8,uVar7);
  func_0x000100082720("ContentPublisherOperaPluginServiceProvider",0x2a,2);
  uVar59 = uVar21;
  FUN_10249baf8(uVar21,uVar4,uVar2,uVar69,uVar63,uVar116,puVar47);
  func_0x000100082720("ContentSharedStoryOperaOnboardingPluginServiceProvider",0x36,2);
  uVar60 = uVar21;
  FUN_10249be80(uVar21,uVar63,uVar42,uVar40,uVar118,uVar116,uVar4,uVar71,uVar72,uVar73,uVar16,uVar74
                ,uVar75,uVar76,uVar10,uVar77,uVar30,uVar24,puVar47);
  func_0x000100082720("ContentSnapInsightsOperaPlaylistPluginServiceProvider",0x35,2);
  uVar61 = uVar21;
  FUN_1024990f4(uVar21,uVar23,puVar47);
  func_0x000100082720("ContentSpotlightOperaPluginServiceProvider",0x2a,2);
  uVar62 = uVar63;
  FUN_102499440(uVar63,uVar78,uVar4,uVar79,uVar80,uVar20,uVar21,uVar13,uVar27,uVar14,uVar3,uVar1,
                uVar8,uVar26,uVar68,uVar81,uVar5,uVar46,uVar9,uVar10,uVar37,uVar82,uVar83,uVar2,
                uVar36,uVar29,uVar116,uVar23,uVar22,uVar84,uVar25,uVar28,uVar11,uVar6,uVar12,uVar31,
                uVar85,uVar86,uVar19,uVar66,uVar87,uVar7,uVar88);
  func_0x000100082720("ContentStoriesPlaylistPluginServiceProvider",0x2b,2);
  FUN_1024af614(uVar63,uVar90,uVar4,uVar78,uVar74,uVar75,uVar91,uVar92,uVar93,uVar94,uVar95,uVar6,
                uVar12,uVar2,uVar22,uVar21,uVar77,uVar8,uVar7,uVar84,uVar96,uVar97,uVar87,uVar28,
                uVar98,uVar23,uVar99,uVar15,uVar36,uVar100,uVar101,puVar47,uVar126,uVar127,uVar122,
                uVar125,uVar102,uVar76);
  func_0x000100082720("ContentStoryManagementOperaPluginServiceProvider",0x30,2);
  FUN_1024b0ebc(uVar64,uVar21,uVar89);
  func_0x000100082720("FanPassUpsellFrequencyManagerServiceProvider",0x2c,2);
  FUN_1024a5930(uVar65,uVar45,uVar32,uVar21,uVar31,uVar26,uVar82,uVar36);
  func_0x000100082720("ContentImpalaSnapDocPlaybackPluginProviderServiceProvider",0x39,2);
  uVar66 = uVar89;
  FUN_1024ab0dc(uVar89,uVar103,uVar100);
  pcVar67 = "SCFanPassSubscribeButtonOperaPluginServiceProvider";
  func_0x000100082720("SCFanPassSubscribeButtonOperaPluginServiceProvider",0x32,2);
  FUN_1024b1120();
  func_0x000100082720("SCFanPassUpsellOperaPluginServiceProvider",0x29,2);
  FUN_1024a5f70(uVar68,uVar43);
  func_0x000100082720("ContentMassSnapManagementPluginProviderServiceProvider",0x36,2);
  FUN_10249cf8c(uVar104,uVar105,uVar106,uVar21,puVar48,uVar107,uVar108,uVar109,uVar110,uVar49,uVar50
                ,uVar51,uVar66,pcVar67,uVar52,uVar65,uVar119,uVar53,uVar68,uVar54,uVar55,uVar56,
                uVar57,uVar58,uVar59,uVar60,uVar61,uVar62,uVar63,uVar111,uVar112,uVar89,uVar113,
                uVar20,uVar3,uVar1,uVar64,uVar103,uVar69,uVar99,uVar114,puVar47,uVar23);
  func_0x000107c61574(uVar68);
  func_0x000107c61574(pcVar67);
  func_0x000107c61574(uVar66);
  func_0x000107c61574(uVar65);
  func_0x000107c61574(uVar64);
  func_0x000107c61574(uVar63);
  func_0x000107c61574(uVar62);
  func_0x000107c61574(uVar61);
  func_0x000107c61574(uVar60);
  func_0x000107c61574(uVar59);
  func_0x000107c61574(uVar58);
  func_0x000107c61574(uVar57);
  func_0x000107c61574(uVar56);
  func_0x000107c61574(uVar55);
  func_0x000107c61574(uVar54);
  func_0x000107c61574(uVar53);
  func_0x000107c61574(uVar119);
  func_0x000107c61574(uVar52);
  func_0x000107c61574(uVar51);
  func_0x000107c61574(uVar50);
  func_0x000107c61574(uVar49);
  func_0x000107c61574(puVar48);
  func_0x000107c61574(puVar47);
  func_0x000100082720("ContentOperaPluginCreatorImplementationEntryPointProvider",0x39,2);
  *param_1 = uVar104;
  return;
}



/* Entry: 102498c84; end: 102498d03;  */

void FUN_102498c84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9e638,&UNK_10daae6a0);
  puVar1 = &UNK_110511ad0;
  func_0x000107c613fc(&UNK_110511ad0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102498d04,puVar1);
  return;
}



/* Entry: 102498d04; end: 102498e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102498d04(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [24];
  long alStack_68 [3];
  
  func_0x000100083b20(alStack_68);
  lVar3 = alStack_68[0];
  func_0x000100083b20(alStack_68);
  puVar1 = (undefined8 *)(lVar3 + _DAT_112fb99f8);
  func_0x000107c61428(puVar1,alStack_68,0,0);
  lVar2 = _DAT_112fb9a00;
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar4 = *(undefined8 *)(alStack_68[0] + _DAT_11306e958);
  func_0x000107c61428(lVar3 + _DAT_112fb9a00,auStack_80,0,0);
  uVar5 = *(undefined8 *)(lVar3 + lVar2);
  FUN_1024a5710(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  func_0x0001024a41ec(uVar6,uVar7);
  func_0x000107c61170(alStack_68[0]);
  func_0x000107c61170(lVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 102498e18; end: 102498e2b;  */

undefined1  [16] FUN_102498e18(void)

{
  return ZEXT816(0x110511af8);
}



/* Entry: 102498e2c; end: 1024990af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102498e2c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 != 0) {
    uVar2 = 0;
    func_0x0001047c6864(0);
    func_0x000107c61480(param_1,uVar2);
    if (param_1 != 0) {
      uVar8 = ((undefined8 *)(param_1 + _DAT_11308f290))[1];
      if (uVar8 >> 0x3c < 0xf) {
        uVar9 = *(undefined8 *)(param_1 + _DAT_11308f290);
        lVar3 = 0;
        FUN_1024990b0();
        func_0x000107c614e8();
        func_0x00010006c00c(uVar9,uVar8);
        uVar2 = uVar9;
        func_0x000107c5ee20(uVar9,uVar8);
        func_0x000107c4e380();
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        uVar2 = 0;
        if (lVar3 == 0) {
          uVar6 = uVar2;
          func_0x000107c61174();
          func_0x000107c5ed30(0);
          func_0x000107c61170(uVar6);
          func_0x000107c61654();
          func_0x0001000b44c0(uVar9,uVar8);
          func_0x000107c614ac(uVar2);
        }
        else {
          func_0x000107c61174();
          lVar4 = lVar3;
          func_0x000107c447c0();
          if ((int)lVar4 != 0) {
            lVar4 = lVar3;
            func_0x000107c40134();
            func_0x000107c61180();
            if (lVar4 == 0) goto LAB_102499098;
            lVar5 = lVar4;
            func_0x000107c44a58();
            func_0x000107c61170(lVar4);
            if ((int)lVar5 != 0) {
              lVar4 = lVar3;
              func_0x000107c40134();
              func_0x000107c61180();
              if (lVar4 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1024990a0);
                (*pcVar1)();
              }
              lVar5 = lVar4;
              func_0x000107c4f458();
              func_0x000107c61180();
              func_0x000107c61170(lVar4);
              if (lVar5 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1024990a4);
                (*pcVar1)();
              }
              lVar4 = lVar5;
              func_0x000107c44748();
              func_0x000107c61170(lVar5);
              if ((int)lVar4 != 0) {
                lVar4 = lVar3;
                func_0x000107c40134();
                func_0x000107c61180();
                if (lVar4 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024990a8);
                  (*pcVar1)();
                }
                lVar5 = lVar4;
                func_0x000107c4f458();
                func_0x000107c61180();
                func_0x000107c61170(lVar4);
                if (lVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024990ac);
                  (*pcVar1)();
                }
                lVar4 = lVar5;
                func_0x000107c3e4d8();
                func_0x000107c61180();
                func_0x000107c61170(lVar5);
                if (lVar4 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024990b0);
                  (*pcVar1)();
                }
                func_0x000107c5dc0c(lVar4);
                func_0x0001000b44c0(uVar9,uVar8);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar3);
                goto LAB_102499064;
              }
            }
          }
          func_0x000107c61170(lVar3);
          func_0x0001000b44c0(uVar9,uVar8);
        }
      }
    }
  }
LAB_102499064:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  func_0x000107c60e78();
LAB_102499098:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10249909c);
  (*pcVar1)();
}



/* Entry: 1024990b0; end: 1024990f3;  */

void FUN_1024990b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9e640 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aa900;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e9e640 = puVar1;
  return;
}



/* Entry: 1024990f4; end: 10249926b;  */

void FUN_1024990f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9e648,&UNK_10daae6f0);
  puVar1 = &UNK_110511bc0;
  func_0x000107c613fc(&UNK_110511bc0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x10249918c,puVar1);
  return;
}



/* Entry: 10249926c; end: 10249927b;  */

undefined1  [16] FUN_10249926c(void)

{
  return ZEXT816(0x110511be8);
}



/* Entry: 10249927c; end: 102499393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10249927c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar1 = _DAT_11302e640;
  lVar8 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(lVar8 + _DAT_11302e640);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar3;
    func_0x000107c5b8bc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar8 + lVar1);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126cc5b0;
  func_0x000107c610f8();
  func_0x000107c45954();
  func_0x000107c615e8(lVar7);
  func_0x000107c615e8(uVar4);
  func_0x000107c615e8(uVar5);
  if (puVar6 != (undefined *)0x0) {
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102499394);
  (*pcVar2)();
}



/* Entry: 102499394; end: 1024993eb; -[_TtC27ContentSpotlightOperaPluginP33_A2DC34CE4C40835277F4EA555000F28433ContentSpotlightPluginCreatorImpl createPluginWithShowTimestamp:showPayToPromoteButton:ngsV2ResponsiveLayoutEnabled:] */

void FUN_102499394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c6157c();
  FUN_10249927c(param_3,param_4,param_5);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1024993ec; end: 10249943f;  */

void FUN_1024993ec(void)

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



/* Entry: 102499440; end: 10249b83b;  */

void FUN_102499440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9e708,&UNK_10daae7a0);
  puVar1 = &UNK_110511cb8;
  func_0x000107c613fc(&UNK_110511cb8,400,7);
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
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  *(undefined8 *)(puVar1 + 0x148) = param_40;
  *(undefined8 *)(puVar1 + 0x150) = param_41;
  *(undefined8 *)(puVar1 + 0x158) = param_42;
  *(undefined8 *)(puVar1 + 0x160) = param_43;
  *(undefined8 *)(puVar1 + 0x168) = param_44;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_45;
  func_0x000107c6157c();
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
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_45);
  func_0x0001000823a8(FUN_10249b83c,puVar1);
  return;
}



/* Entry: 10249b83c; end: 10249b8c7;  */

void FUN_10249b83c(void)

{
  long unaff_x20;
  
  func_0x000102499800(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188));
  return;
}



/* Entry: 10249b8c8; end: 10249b8d7;  */

undefined1  [16] FUN_10249b8c8(void)

{
  return ZEXT816(0x110511ce0);
}



/* Entry: 10249b8d8; end: 10249b97b;  */

void FUN_10249b8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9e710,&UNK_10daae800);
  puVar1 = &UNK_110511da8;
  func_0x000107c613fc(&UNK_110511da8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10249b97c,puVar1);
  return;
}



/* Entry: 10249b97c; end: 10249bae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10249b97c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar5 = lVar2;
  func_0x000107c45064(lVar2);
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar9 = *(undefined8 *)(lVar3 + _DAT_11307d3e0);
  func_0x000107c615f0(uVar9);
  lVar5 = lVar1;
  func_0x000107c3fa04(lVar1);
  func_0x000107c61180();
  lVar7 = lStack_68;
  func_0x000107c4ec80(lStack_68);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126cc578;
  func_0x000107c610f8();
  func_0x000107c46df4();
  func_0x000107c61170(lVar7);
  func_0x000107c615e8(lVar5);
  func_0x000107c615e8(uVar9);
  func_0x000107c615e8(lVar6);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(lStack_68);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
    *param_1 = puVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10249bae8);
  (*pcVar4)();
}



/* Entry: 10249bae8; end: 10249baf7;  */

undefined1  [16] FUN_10249bae8(void)

{
  return ZEXT816(0x110511dd0);
}



/* Entry: 10249baf8; end: 10249be6f;  */

void FUN_10249baf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9e718,&UNK_10daae860);
  puVar1 = &UNK_110511e98;
  func_0x000107c613fc(&UNK_110511e98,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x10249bbd8,puVar1);
  return;
}



/* Entry: 10249be70; end: 10249be7f;  */

undefined1  [16] FUN_10249be70(void)

{
  return ZEXT816(0x110511ec0);
}



/* Entry: 10249be80; end: 10249c02f;  */

void FUN_10249be80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9e720,&UNK_10daae8e0);
  puVar1 = &UNK_110511f90;
  func_0x000107c613fc(&UNK_110511f90,0xa8,7);
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
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
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
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x0001000823a8(FUN_10249c030,puVar1);
  return;
}



/* Entry: 10249c030; end: 10249c8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10249c030(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  long lVar37;
  undefined *puVar38;
  undefined **ppuVar39;
  long lVar40;
  bool bVar41;
  code *pcStack_1d8;
  undefined *puStack_c0;
  long lStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000100083b20(&puStack_c0);
  puVar1 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar2 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar3 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar4 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar5 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar19 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar6 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar7 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar8 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar9 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar10 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar36 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar35 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar34 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar11 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar33 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar12 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar13 = puStack_c0;
  func_0x000100083b20(&puStack_c0);
  puVar14 = puStack_c0;
  lVar18 = _DAT_112fb9960;
  func_0x000107c61428(puStack_c0 + _DAT_112fb9960,auStack_90,0,0);
  lVar40 = *(long *)(puStack_c0 + lVar18);
  puVar16 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar17 = &UNK_110511fd8;
  func_0x000107c613fc(&UNK_110511fd8,0x18,7);
  *(undefined **)(puVar17 + 0x10) = puVar19;
  pcStack_a0 = FUN_10249c8fc;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_b8 = 0x42000000;
  pcStack_b0 = FUN_10249c918;
  puStack_a8 = &UNK_110511ff0;
  ppuVar39 = &puStack_c0;
  puStack_98 = puVar17;
  func_0x000107c60bc4(ppuVar39);
  puVar17 = puStack_98;
  lVar18 = lVar40;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61574(puVar17);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar39);
  puVar17 = puVar3;
  func_0x000107c5db24();
  func_0x000107c61180();
  puVar20 = puVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar17);
  if (puVar20 == (undefined *)0x0) {
LAB_10249c348:
    lVar37 = -0x2000000000000000;
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = puVar20;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(puVar20);
    if (puVar17 == (undefined *)0x0) goto LAB_10249c348;
    puStack_c0 = (undefined *)0x0;
    lStack_b8 = 0;
    func_0x000107c5fae8(puVar17,&puStack_c0);
    func_0x000107c61170(puVar17);
    lVar37 = lStack_b8;
    puVar17 = puStack_c0;
    if (lStack_b8 == 0) goto LAB_10249c348;
  }
  uVar21 = *(undefined8 *)(puVar2 + _DAT_113091ad8);
  func_0x000107c61174();
  puVar20 = puVar13;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10249c8e4);
    (*pcVar15)();
  }
  puVar22 = puVar4;
  func_0x000107c4ad7c();
  func_0x000107c61180();
  uVar23 = *(undefined8 *)(puVar5 + _DAT_11307fc48);
  func_0x000107c61174();
  puVar24 = puVar6;
  func_0x000107c410f8();
  func_0x000107c61180();
  if (puVar24 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10249c8e8);
    (*pcVar15)();
  }
  uVar25 = *(undefined8 *)(puVar7 + _DAT_112ff6288);
  func_0x000107c61174();
  puVar26 = puVar8;
  func_0x000107c4e6e8();
  func_0x000107c61180();
  puVar27 = puVar9;
  func_0x000107c3e5d8();
  func_0x000107c61180();
  uVar28 = *(undefined8 *)(puVar10 + _DAT_113016c48);
  func_0x000107c61174();
  puVar29 = puVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (puVar29 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10249c8ec);
    (*pcVar15)();
  }
  puVar30 = puVar11;
  func_0x000107c4dad8();
  func_0x000107c61180();
  if (lVar40 != 0) {
    lVar31 = lVar18;
    func_0x000107c4fb68();
    func_0x000107c61180();
    if (lVar31 != 0) {
      puVar38 = &UNK_1105120a0;
      func_0x000107c613fc(&UNK_1105120a0,0x18,7);
      bVar41 = false;
      *(long *)(puVar38 + 0x10) = lVar31;
      pcStack_1d8 = (code *)0x10249cacc;
      goto LAB_10249c4c0;
    }
  }
  pcStack_1d8 = (code *)0x0;
  puVar38 = (undefined *)0x0;
  bVar41 = true;
LAB_10249c4c0:
  puVar32 = puVar12;
  func_0x000107c5a958();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(puVar17,lVar37);
  func_0x000107c6142c(lVar37);
  if (bVar41) {
    ppuVar39 = (undefined **)0x0;
  }
  else {
    pcStack_a0 = pcStack_1d8;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_b8 = 0x42000000;
    pcStack_b0 = (code *)&UNK_101bff540;
    puStack_a8 = &UNK_110512068;
    ppuVar39 = &puStack_c0;
    puStack_98 = puVar38;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_98);
  }
  puVar38 = PTR_PTR_1126cc5a0;
  func_0x000107c610f8();
  func_0x000107c49340();
  func_0x000107c60bd0(ppuVar39);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar32);
  func_0x000107c61170(puVar33);
  func_0x000107c61170(puVar30);
  func_0x000107c615e8(puVar29);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(puVar35);
  func_0x000107c61170(puVar36);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(puVar27);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(uVar21);
  if (lVar40 != 0) {
    lVar37 = lVar18;
    func_0x000107c4fb68();
    func_0x000107c61180();
    if (lVar37 != 0) {
      puVar17 = &UNK_110512050;
      func_0x000107c613fc(&UNK_110512050,0x18,7);
      *(long *)(puVar17 + 0x10) = lVar37;
    }
    lVar37 = lVar18;
    func_0x000107c4dd74();
    func_0x000107c61180();
    if (lVar37 != 0) {
      puVar17 = &UNK_110512028;
      func_0x000107c613fc(&UNK_110512028,0x18,7);
      *(long *)(puVar17 + 0x10) = lVar37;
    }
  }
  func_0x000107c610f8(PTR_PTR_1126cc5a8);
  func_0x000107c61174();
  puVar17 = puVar38;
  FUN_10249c96c();
  func_0x000107c61170(puVar38);
  func_0x000107c61428(puVar14 + _DAT_112fb9950,&puStack_c0,0,0);
  func_0x000107c556e4(puVar17);
  if (lVar40 != 0) {
    lVar40 = lVar18;
    func_0x000107c5ae84();
    func_0x000107c61180();
    if (lVar40 != 0) {
      func_0x000107c3ebcc();
      func_0x000107c61170(lVar40);
    }
  }
  func_0x000107c59220(puVar17);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar36);
  func_0x000107c61170(puVar35);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(puVar33);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(puVar38);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar14);
  *param_1 = puVar17;
  return;
}



/* Entry: 10249c8ec; end: 10249c8fb;  */

undefined1  [16] FUN_10249c8ec(void)

{
  return ZEXT816(0x110511fb8);
}



/* Entry: 10249c8fc; end: 10249c917;  */

void FUN_10249c8fc(void)

{
  long unaff_x20;
  
  func_0x000107c3eabc(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10249c918; end: 10249c94f;  */

void FUN_10249c918(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10249c950; end: 10249c96b;  */

void FUN_10249c950(long param_1,long param_2)

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



/* Entry: 10249c96c; end: 10249ca6b;  */

undefined8
FUN_10249c96c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar3 = &puStack_80;
  if (param_2 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101bff540;
    puStack_68 = &UNK_1105120e0;
    lStack_60 = param_2;
    uStack_58 = param_3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(uStack_58);
  }
  if (param_4 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101bff540;
    puStack_68 = &UNK_1105120b8;
    lStack_60 = param_4;
    uStack_58 = param_5;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(uStack_58);
  }
  func_0x000107c454f8(param_6);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  return param_6;
}



/* Entry: 10249ca6c; end: 10249ca6f;  */

void FUN_10249ca6c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10249ca70; end: 10249caaf;  */

void FUN_10249ca70(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10249cab0; end: 10249cacf;  */

void FUN_10249cab0(long param_1,long param_2)

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



/* Entry: 10249cad0; end: 10249cea7;  */

void FUN_10249cad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9e728,&UNK_10daae960);
  puVar1 = &UNK_1105121c0;
  func_0x000107c613fc(&UNK_1105121c0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x10249cbb0,puVar1);
  return;
}



/* Entry: 10249cea8; end: 10249ceb7;  */

undefined1  [16] FUN_10249cea8(void)

{
  return ZEXT816(0x1105121e8);
}



/* Entry: 10249ceb8; end: 10249cf37;  */

undefined * FUN_10249ceb8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ec80(uVar3);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126c2290;
    func_0x000107c610f8(PTR_PTR_1126c2290);
    func_0x000107c46894();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10249cf38);
  (*pcVar1)();
}



/* Entry: 10249cf38; end: 10249cf6f;  */

void FUN_10249cf38(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10249cf70; end: 10249cf8b;  */

void FUN_10249cf70(long param_1,long param_2)

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



/* Entry: 10249cf8c; end: 10249d853;  */

void FUN_10249cf8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9e730,&UNK_10daae9e0);
  puVar1 = &UNK_110512300;
  func_0x000107c613fc(&UNK_110512300,400,7);
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
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  *(undefined8 *)(puVar1 + 0x148) = param_40;
  *(undefined8 *)(puVar1 + 0x150) = param_41;
  *(undefined8 *)(puVar1 + 0x158) = param_42;
  *(undefined8 *)(puVar1 + 0x160) = param_43;
  *(undefined8 *)(puVar1 + 0x168) = param_44;
  *(undefined8 *)(puVar1 + 0x170) = param_45;
  *(undefined8 *)(puVar1 + 0x178) = param_46;
  *(undefined8 *)(puVar1 + 0x180) = param_47;
  *(undefined8 *)(puVar1 + 0x188) = param_48;
  func_0x000107c6157c();
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
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x0001000823a8(FUN_10249d854,puVar1);
  return;
}



/* Entry: 10249d854; end: 10249d8df;  */

void FUN_10249d854(void)

{
  long unaff_x20;
  
  func_0x00010249d34c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                      *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188));
  return;
}



/* Entry: 10249d8e0; end: 10249db2f;  */

void FUN_10249d8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0xd0) = param_1;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x20 + 0x120) = param_43;
  *(undefined8 *)(unaff_x20 + 0x128) = param_2;
  *(undefined8 *)(unaff_x20 + 0x130) = param_4;
  *(undefined8 *)(unaff_x20 + 0x138) = param_48;
  *(undefined8 *)(unaff_x20 + 0x90) = param_5;
  *(undefined8 *)(unaff_x20 + 0x98) = param_16;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_6;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_46;
  *(undefined8 *)(unaff_x20 + 0x150) = param_8;
  *(undefined8 *)(unaff_x20 + 0x158) = param_7;
  *(undefined8 *)(unaff_x20 + 0x110) = param_39;
  *(undefined8 *)(unaff_x20 + 0x118) = param_9;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x30) = param_15;
  *(undefined8 *)(unaff_x20 + 0x38) = param_12;
  *(undefined1 *)(unaff_x20 + 0x188) = 2;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_14;
  *(undefined8 *)(unaff_x20 + 0x40) = param_22;
  *(undefined8 *)(unaff_x20 + 0x48) = param_20;
  *(undefined8 *)(unaff_x20 + 0x60) = param_21;
  *(undefined8 *)(unaff_x20 + 0x68) = param_24;
  *(undefined8 *)(unaff_x20 + 0x20) = param_23;
  *(undefined8 *)(unaff_x20 + 0x28) = param_25;
  *(undefined8 *)(unaff_x20 + 0x80) = param_17;
  *(undefined8 *)(unaff_x20 + 0x88) = param_26;
  *(undefined8 *)(unaff_x20 + 0x70) = param_18;
  *(undefined8 *)(unaff_x20 + 0x78) = param_28;
  *(undefined8 *)(unaff_x20 + 0x10) = param_27;
  *(undefined8 *)(unaff_x20 + 0x18) = param_29;
  *(undefined8 *)(unaff_x20 + 0x180) = param_31;
  *(undefined8 *)(unaff_x20 + 0x100) = param_35;
  *(undefined8 *)(unaff_x20 + 0x108) = param_34;
  *(undefined8 *)(unaff_x20 + 0x140) = param_32;
  *(undefined8 *)(unaff_x20 + 0x148) = param_38;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_30;
  *(undefined8 *)(unaff_x20 + 200) = param_40;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_13;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_41;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = param_42;
  *(undefined8 *)(unaff_x20 + 0x160) = param_33;
  *(undefined8 *)(unaff_x20 + 0x168) = param_44;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_45;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_36;
  *(undefined8 *)(unaff_x20 + 0x170) = param_47;
  *(undefined8 *)(unaff_x20 + 0x178) = param_37;
  return;
}



/* Entry: 10249db30; end: 10249df0b;  */

uint FUN_10249db30(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)(unaff_x20 + 0x188);
  if (*(byte *)(unaff_x20 + 0x188) == 2) {
    lVar2 = *(long *)(unaff_x20 + 0x130);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10249dbc8);
      (*pcVar1)();
    }
    uVar3 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f0a33b0);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    uVar5 = (uint)lVar4;
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    *(char *)(unaff_x20 + 0x188) = (char)lVar4;
  }
  return uVar5 & 1;
}



/* Entry: 10249df0c; end: 10249e18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10249df0c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  undefined8 auStack_60 [3];
  ulong uStack_48;
  
  func_0x000100083b20(auStack_60);
  uVar1 = auStack_60[0];
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar2 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480(puVar2);
  }
  uVar3 = 0;
  func_0x0001024a29a8(0,puVar2 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar9 = uVar3 & 0xffffffffffffff8;
  uVar7 = *(ulong *)(uVar9 + 0x10);
  uVar6 = uVar3;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar7) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    func_0x0001024a29a8(uVar6,uVar7 + 1,1,uVar3);
    uVar9 = uVar6 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar9 + 0x10) = uVar7 + 1;
  *(undefined8 *)(uVar9 + uVar7 * 8 + 0x20) = uVar1;
  func_0x000100083b20(auStack_60);
  uVar7 = uVar6;
  if (uVar6 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar6) {
      uVar9 = uVar6;
    }
    uStack_48 = uVar6;
    func_0x000107c60480(uVar9);
    uVar7 = 0;
    func_0x0001024a29a8(0,uVar9 + 1,1,uVar6);
    uVar9 = uVar7 & 0xffffffffffffff8;
  }
  uVar6 = *(ulong *)(uVar9 + 0x10);
  uVar3 = uVar7;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    uStack_48 = uVar7;
    func_0x0001024a29a8(uVar3,uVar6 + 1,1,uVar7);
    uVar9 = uVar3 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar9 + uVar6 * 8 + 0x20) = auStack_60[0];
  lVar5 = _DAT_112fb98d8;
  lVar8 = *(long *)(unaff_x20 + 0x1b8);
  lVar4 = lVar8 + _DAT_112fb98d8;
  uStack_48 = uVar3;
  func_0x000107c61428(lVar4,auStack_60,0,0);
  if (*(int *)(lVar8 + lVar5) != 0x62) {
    func_0x00010249dcfc();
    lVar5 = *(long *)(lVar4 + _DAT_112ff26f8);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    lVar4 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar4 != 0) {
      uStack_48 = uVar3;
      func_0x000107c615f0(lVar4);
      uVar7 = uVar3;
      if (uVar3 >> 0x3e != 0) {
        if (0x7fffffffffffffff < uVar3) {
          uVar9 = uVar3;
        }
        func_0x000107c60480(uVar9);
        uVar7 = 0;
        func_0x0001024a29a8(0,uVar9 + 1,1,uVar3);
        uVar9 = uVar7 & 0xffffffffffffff8;
        uStack_48 = uVar7;
      }
      uVar6 = *(ulong *)(uVar9 + 0x10);
      uVar3 = uVar7;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        func_0x0001024a29a8(uVar3,uVar6 + 1,1,uVar7);
        uVar9 = uVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
      *(long *)(uVar9 + uVar6 * 8 + 0x20) = lVar4;
      func_0x000107c615e8(lVar4);
      uStack_48 = uVar3;
    }
  }
  FUN_10249e18c();
  FUN_10249f3c8();
  return uStack_48;
}



/* Entry: 10249e18c; end: 10249f3c7;  */

/* WARNING: Removing unreachable block (ram,0x00010249f3bc) */
/* WARNING: Removing unreachable block (ram,0x00010249f3b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10249e18c(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 auStack_98 [3];
  long alStack_80 [4];
  
  lVar23 = *(long *)(unaff_x20 + 0x130);
  lVar5 = lVar23;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10249f3b8);
    (*pcVar3)();
  }
  lVar6 = lVar5;
  func_0x000108f49578();
  func_0x000107c615e8(lVar5);
  puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((int)lVar6 != 0) {
    lVar5 = lVar23;
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10249f3c4);
      (*pcVar3)();
    }
    lVar6 = lVar5;
    func_0x000108f49528();
    func_0x000107c615e8(lVar5);
    puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((int)lVar6 != 0) {
      func_0x000100083b20(alStack_80);
      lVar7 = alStack_80[0];
      lVar5 = _DAT_112fb98d8;
      lVar14 = *(long *)(unaff_x20 + 0x1b8);
      func_0x000107c61428(lVar14 + _DAT_112fb98d8,auStack_d0,0,0);
      lVar6 = _DAT_112fef500;
      uVar15 = *(undefined8 *)(lVar14 + lVar5);
      func_0x000107c61428(lVar7 + _DAT_112fef500,auStack_e8,1,0);
      *(undefined8 *)(lVar7 + lVar6) = uVar15;
      lVar5 = _DAT_112fef510;
      uVar15 = *(undefined8 *)(unaff_x20 + 0x148);
      func_0x000107c61428(lVar7 + _DAT_112fef510,auStack_100,1,0);
      uVar20 = *(undefined8 *)(lVar7 + lVar5);
      *(undefined8 *)(lVar7 + lVar5) = uVar15;
      func_0x000107c61174(uVar15);
      func_0x000107c61170(uVar20);
      lVar5 = _DAT_112fef518;
      uVar15 = *(undefined8 *)(unaff_x20 + 0x150);
      func_0x000107c61428(lVar7 + _DAT_112fef518,auStack_118,1,0);
      uVar20 = *(undefined8 *)(lVar7 + lVar5);
      *(undefined8 *)(lVar7 + lVar5) = uVar15;
      func_0x000107c61174(uVar15);
      func_0x000107c61170(uVar20);
      func_0x000100083b20(alStack_80);
      lVar5 = alStack_80[0];
      puVar8 = PTR_PTR_1126c2d68;
      func_0x000107c61168(PTR_PTR_1126c2d68);
      lVar6 = lVar5;
      func_0x000107c6148c(lVar5,puVar8);
      if (lVar6 == 0) {
        func_0x000107c615e8(lVar5);
      }
      uVar16 = *(undefined8 *)(*(long *)(unaff_x20 + 0x168) + _DAT_11307edb0);
      puVar8 = &UNK_110512348;
      func_0x000107c613fc(&UNK_110512348,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,lVar6);
      puVar9 = &UNK_110512370;
      func_0x000107c613fc(&UNK_110512370,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = uVar16;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      puVar1 = (undefined8 *)(lVar7 + _DAT_112fef4f8);
      func_0x000107c61428(puVar1,auStack_130,1,0);
      uVar15 = *puVar1;
      uVar20 = puVar1[1];
      *puVar1 = 0x1024a2fb8;
      puVar1[1] = puVar9;
      func_0x000107c61174(uVar16);
      func_0x000107c61174();
      func_0x000107c6157c(puVar8);
      func_0x0001010398f0(uVar15,uVar20);
      func_0x000107c61574(puVar8);
      lVar5 = lVar23;
      func_0x000107c3fa04();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10249f3c8);
        (*pcVar3)();
      }
      lVar14 = lVar5;
      func_0x000108f4958c();
      func_0x000107c615e8(lVar5);
      if ((int)lVar14 != 0) {
        func_0x000100083b20(alStack_80);
        lVar5 = alStack_80[0];
        if (alStack_80[0] == 0) {
          puVar8 = PTR_PTR_1126c1088;
          func_0x000107c610f8(PTR_PTR_1126c1088);
          func_0x000107c453e4();
          uVar15 = 0x61665f7265626173;
          func_0x000107c5fadc(0x61665f7265626173,0xee006b6361626c6c);
          func_0x00010852ff84(puVar8,uVar15,1);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(uVar15);
          lVar14 = *(long *)(unaff_x20 + 0x170);
          func_0x000107c4ec80();
          func_0x000107c61180();
          lVar5 = lVar14;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170();
          iVar4 = (int)lVar14;
          func_0x000108f49cd0();
          if ((iVar4 != 0) && (lVar5 != 0)) {
            lVar14 = lVar5;
            func_0x000107c61174(lVar5);
            puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
            puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
            FUN_1024a2fc0(PTR___swiftEmptyArrayStorage_11034f1c8);
            func_0x000103b65358();
            func_0x000107c61170(lVar14);
            func_0x000107c6142c(puVar9);
            func_0x000107c61174(lVar14);
            func_0x000103b65750(puVar8);
            func_0x000107c61170(lVar14);
          }
          func_0x000107c3fa04(lVar23);
          func_0x000107c61180();
          uVar21 = *(undefined8 *)(*(long *)(unaff_x20 + 0x140) + _DAT_113041e48);
          uVar15 = uVar21;
          func_0x000107c615f0(uVar21);
          func_0x000108f49cd8();
          uVar20 = 0;
          func_0x000103b61cf8(0);
          func_0x000107c610f8();
          func_0x000103b60420(lVar5,lVar23,uVar21,uVar15,uVar20);
        }
        lVar23 = _DAT_112fef508;
        func_0x000107c61428(lVar7 + _DAT_112fef508,auStack_148,1,0);
        uVar15 = *(undefined8 *)(lVar7 + lVar23);
        *(long *)(lVar7 + lVar23) = lVar5;
        func_0x000107c61174(lVar5);
        func_0x000107c61170(uVar15);
        if (lVar6 != 0) {
          func_0x000107c548b0(lVar6);
        }
        func_0x000107c61170(lVar5);
      }
      func_0x000107c61174();
      if ((ulong)puVar25 >> 0x3e == 0) {
        puVar8 = *(undefined **)(((ulong)puVar25 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar25) {
          puVar8 = puVar25;
        }
        func_0x000107c60480(puVar8);
      }
      puVar9 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar8 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar13 + 0x10);
      puVar25 = puVar9;
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar2) {
        puVar25 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        func_0x0001024a29a8(puVar25,uVar2 + 1,1,puVar9);
        uVar13 = (ulong)puVar25 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar13 + 0x10) = uVar2 + 1;
      *(long *)(uVar13 + uVar2 * 8 + 0x20) = lVar7;
      func_0x000107c61170(uVar16);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
    }
  }
  func_0x000100083b20(alStack_80);
  lVar5 = alStack_80[0];
  puVar8 = puVar25;
  func_0x000107c61550();
  if ((((int)puVar8 == 0) || ((long)puVar25 < 0)) || (((ulong)puVar25 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar25 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puVar25 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar25) {
        puVar9 = puVar25;
      }
      func_0x000107c60480(puVar9);
    }
    puVar8 = (undefined *)0x0;
    func_0x0001024a29a8(0,puVar9 + 1,1,puVar25);
    puVar25 = puVar8;
  }
  puVar9 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
  uVar2 = *(ulong *)(puVar9 + 0x10);
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    func_0x0001024a29a8(puVar8,uVar2 + 1,1,puVar25);
    puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    puVar25 = puVar8;
  }
  *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
  *(long *)(puVar9 + uVar2 * 8 + 0x20) = lVar5;
  func_0x000100083b20(alStack_80);
  lVar5 = alStack_80[0];
  if ((ulong)puVar25 >> 0x3e != 0) {
    if ((undefined *)0x7fffffffffffffff < puVar25) {
      puVar9 = puVar25;
    }
    func_0x000107c60480(puVar9);
    puVar8 = (undefined *)0x0;
    func_0x0001024a29a8(0,puVar9 + 1,1,puVar25);
    puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    puVar25 = puVar8;
  }
  uVar2 = *(ulong *)(puVar9 + 0x10);
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    func_0x0001024a29a8(puVar8,uVar2 + 1,1,puVar25);
    puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    puVar25 = puVar8;
  }
  *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
  *(long *)(puVar9 + uVar2 * 8 + 0x20) = lVar5;
  func_0x000100083b20(alStack_80);
  if ((ulong)puVar25 >> 0x3e != 0) {
    if ((undefined *)0x7fffffffffffffff < puVar25) {
      puVar9 = puVar25;
    }
    func_0x000107c60480(puVar9);
    puVar8 = (undefined *)0x0;
    func_0x0001024a29a8(0,puVar9 + 1,1,puVar25);
    puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    puVar25 = puVar8;
  }
  uVar2 = *(ulong *)(puVar9 + 0x10);
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
    func_0x0001024a29a8(puVar8,uVar2 + 1,1,puVar25);
    puVar9 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    puVar25 = puVar8;
  }
  *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
  *(long *)(puVar9 + uVar2 * 8 + 0x20) = alStack_80[0];
  FUN_1024a2064();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c615f0();
    puVar11 = puVar25;
    if ((ulong)puVar25 >> 0x3e != 0) {
      if ((undefined *)0x7fffffffffffffff < puVar25) {
        puVar9 = puVar25;
      }
      func_0x000107c60480(puVar9);
      puVar11 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar9 + 1,1,puVar25);
      puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    }
    uVar2 = *(ulong *)(puVar9 + 0x10);
    puVar25 = puVar11;
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
      puVar25 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
      func_0x0001024a29a8(puVar25,uVar2 + 1,1,puVar11);
      puVar9 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
    }
    *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
    *(undefined **)(puVar9 + uVar2 * 8 + 0x20) = puVar8;
    func_0x000107c615e8();
  }
  FUN_1024a239c();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c615f0();
    puVar9 = puVar25;
    if ((ulong)puVar25 >> 0x3e != 0) {
      puVar11 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar25) {
        puVar11 = puVar25;
      }
      func_0x000107c60480(puVar11);
      puVar9 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar11 + 1,1,puVar25);
    }
    uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar13 + 0x10);
    puVar25 = puVar9;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar2) {
      puVar25 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
      func_0x0001024a29a8(puVar25,uVar2 + 1,1,puVar9);
      uVar13 = (ulong)puVar25 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar2 + 1;
    *(undefined **)(uVar13 + uVar2 * 8 + 0x20) = puVar8;
    func_0x000107c615e8();
  }
  FUN_1024a126c();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c615f0();
    puVar9 = puVar25;
    if ((ulong)puVar25 >> 0x3e != 0) {
      puVar11 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar25) {
        puVar11 = puVar25;
      }
      func_0x000107c60480(puVar11);
      puVar9 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar11 + 1,1,puVar25);
    }
    uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar13 + 0x10);
    puVar25 = puVar9;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar2) {
      puVar25 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
      func_0x0001024a29a8(puVar25,uVar2 + 1,1,puVar9);
      uVar13 = (ulong)puVar25 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar2 + 1;
    *(undefined **)(uVar13 + uVar2 * 8 + 0x20) = puVar8;
    func_0x000107c615e8();
  }
  func_0x00010249dc60();
  lVar5 = _DAT_112fb98e0;
  lVar23 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar23 + _DAT_112fb98e0,alStack_80,0,0);
  puVar9 = (undefined *)(lVar23 + lVar5);
  func_0x000107c61618();
  puVar11 = puVar8;
  func_0x000107c4098c();
  func_0x000107c61180();
  func_0x000107c615e8(puVar8);
  func_0x000107c615e8();
  if (puVar11 != (undefined *)0x0) {
    func_0x000107c615f0(puVar11);
    puVar8 = puVar25;
    if ((ulong)puVar25 >> 0x3e != 0) {
      puVar9 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar25) {
        puVar9 = puVar25;
      }
      func_0x000107c60480(puVar9);
      puVar8 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar9 + 1,1,puVar25);
    }
    uVar13 = (ulong)puVar8 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar13 + 0x10);
    puVar25 = puVar8;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar2) {
      puVar25 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
      func_0x0001024a29a8(puVar25,uVar2 + 1,1,puVar8);
      uVar13 = (ulong)puVar25 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar2 + 1;
    *(undefined **)(uVar13 + uVar2 * 8 + 0x20) = puVar11;
    func_0x000107c615e8();
    puVar9 = puVar11;
  }
  FUN_10249fc34();
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c615f0();
    puVar8 = puVar25;
    if ((ulong)puVar25 >> 0x3e != 0) {
      puVar11 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar25) {
        puVar11 = puVar25;
      }
      func_0x000107c60480(puVar11);
      puVar8 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar11 + 1,1,puVar25);
    }
    uVar13 = (ulong)puVar8 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar13 + 0x10);
    puVar25 = puVar8;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar2) {
      puVar25 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
      func_0x0001024a29a8(puVar25,uVar2 + 1,1,puVar8);
      uVar13 = (ulong)puVar25 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar2 + 1;
    *(undefined **)(uVar13 + uVar2 * 8 + 0x20) = puVar9;
    func_0x000107c615e8();
  }
  func_0x000100083b20(auStack_98);
  uVar15 = auStack_98[0];
  if ((ulong)puVar25 >> 0x3e != 0) {
    puVar8 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar25) {
      puVar8 = puVar25;
    }
    func_0x000107c60480(puVar8);
    puVar9 = (undefined *)0x0;
    func_0x0001024a29a8(0,puVar8 + 1,1,puVar25);
    puVar25 = puVar9;
  }
  puVar8 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
  uVar2 = *(ulong *)(puVar8 + 0x10);
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x0001024a29a8(puVar9,uVar2 + 1,1,puVar25);
    puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    puVar25 = puVar9;
  }
  *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puVar8 + uVar2 * 8 + 0x20) = uVar15;
  FUN_10249fccc();
  if (puVar9 == (undefined *)0x0) {
    FUN_10249ffc0();
    if (((ulong)puVar9 & 1) != 0) {
      puVar9 = *(undefined **)(*(long *)(unaff_x20 + 0x128) + _DAT_113010c28);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar9 != (undefined *)0x0) {
        func_0x000107c4b9cc();
        goto LAB_10249e924;
      }
    }
  }
  else {
    func_0x000107c615f0();
    puVar11 = puVar25;
    if ((ulong)puVar25 >> 0x3e != 0) {
      if ((undefined *)0x7fffffffffffffff < puVar25) {
        puVar8 = puVar25;
      }
      func_0x000107c60480(puVar8);
      puVar11 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar8 + 1,1,puVar25);
      puVar8 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    }
    uVar2 = *(ulong *)(puVar8 + 0x10);
    puVar25 = puVar11;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
      puVar25 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      func_0x0001024a29a8(puVar25,uVar2 + 1,1,puVar11);
      puVar8 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
    }
    *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
    *(undefined **)(puVar8 + uVar2 * 8 + 0x20) = puVar9;
LAB_10249e924:
    func_0x000107c615e8();
  }
  FUN_1024a24c4();
  if (puVar9 == (undefined *)0x0) {
    FUN_10249ffc0();
    if (((ulong)puVar9 & 1) != 0) {
      puVar9 = *(undefined **)(*(long *)(unaff_x20 + 0x128) + _DAT_113010c28);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar9 != (undefined *)0x0) {
        func_0x000107c4b9cc();
        goto LAB_10249e9b0;
      }
    }
  }
  else {
    func_0x000107c615f0();
    puVar8 = puVar25;
    if ((ulong)puVar25 >> 0x3e != 0) {
      puVar11 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar25) {
        puVar11 = puVar25;
      }
      func_0x000107c60480(puVar11);
      puVar8 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar11 + 1,1,puVar25);
    }
    uVar13 = (ulong)puVar8 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar13 + 0x10);
    puVar25 = puVar8;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar2) {
      puVar25 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
      func_0x0001024a29a8(puVar25,uVar2 + 1,1,puVar8);
      uVar13 = (ulong)puVar25 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar2 + 1;
    *(undefined **)(uVar13 + uVar2 * 8 + 0x20) = puVar9;
LAB_10249e9b0:
    func_0x000107c615e8();
  }
  func_0x000100083b20(auStack_98);
  uVar15 = auStack_98[0];
  if ((ulong)puVar25 >> 0x3e != 0) {
    puVar8 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar25) {
      puVar8 = puVar25;
    }
    func_0x000107c60480(puVar8);
    puVar9 = (undefined *)0x0;
    func_0x0001024a29a8(0,puVar8 + 1,1,puVar25);
    puVar25 = puVar9;
  }
  puVar8 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
  uVar2 = *(ulong *)(puVar8 + 0x10);
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x0001024a29a8(puVar9,uVar2 + 1,1,puVar25);
    puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    puVar25 = puVar9;
  }
  *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puVar8 + uVar2 * 8 + 0x20) = uVar15;
  func_0x000100083b20(auStack_98);
  uVar15 = auStack_98[0];
  if ((ulong)puVar25 >> 0x3e != 0) {
    if ((undefined *)0x7fffffffffffffff < puVar25) {
      puVar8 = puVar25;
    }
    func_0x000107c60480(puVar8);
    puVar9 = (undefined *)0x0;
    func_0x0001024a29a8(0,puVar8 + 1,1,puVar25);
    puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    puVar25 = puVar9;
  }
  uVar2 = *(ulong *)(puVar8 + 0x10);
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x0001024a29a8(puVar9,uVar2 + 1,1,puVar25);
    puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    puVar25 = puVar9;
  }
  *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puVar8 + uVar2 * 8 + 0x20) = uVar15;
  func_0x000100083b20(auStack_98);
  if ((ulong)puVar25 >> 0x3e != 0) {
    if ((undefined *)0x7fffffffffffffff < puVar25) {
      puVar8 = puVar25;
    }
    func_0x000107c60480(puVar8);
    puVar9 = (undefined *)0x0;
    func_0x0001024a29a8(0,puVar8 + 1,1,puVar25);
    puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    puVar25 = puVar9;
  }
  uVar2 = *(ulong *)(puVar8 + 0x10);
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x0001024a29a8(puVar9,uVar2 + 1,1,puVar25);
    puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    puVar25 = puVar9;
  }
  *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puVar8 + uVar2 * 8 + 0x20) = auStack_98[0];
  func_0x00010249ddb4();
  func_0x000107c61428(lVar23 + _DAT_112fb9938,auStack_98,0,0);
  puVar11 = puVar9;
  func_0x000107c5dc9c();
  func_0x000107c61180();
  func_0x000107c615e8();
  if (puVar11 != (undefined *)0x0) {
    func_0x000107c615f0(puVar11);
    puVar9 = puVar25;
    if ((ulong)puVar25 >> 0x3e != 0) {
      if ((undefined *)0x7fffffffffffffff < puVar25) {
        puVar8 = puVar25;
      }
      func_0x000107c60480(puVar8);
      puVar9 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar8 + 1,1,puVar25);
      puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    }
    uVar2 = *(ulong *)(puVar8 + 0x10);
    puVar25 = puVar9;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
      puVar25 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      func_0x0001024a29a8(puVar25,uVar2 + 1,1,puVar9);
      puVar8 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
    }
    *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
    *(undefined **)(puVar8 + uVar2 * 8 + 0x20) = puVar11;
    func_0x000107c615e8();
    puVar9 = puVar11;
  }
  func_0x00010249de60();
  puVar8 = puVar9;
  func_0x000107c5dca4();
  func_0x000107c61180();
  func_0x000107c615e8(puVar9);
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c615f0(puVar8);
    puVar9 = puVar25;
    if ((ulong)puVar25 >> 0x3e != 0) {
      puVar11 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar25) {
        puVar11 = puVar25;
      }
      func_0x000107c60480(puVar11);
      puVar9 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar11 + 1,1,puVar25);
    }
    uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar13 + 0x10);
    puVar25 = puVar9;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar2) {
      puVar25 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
      func_0x0001024a29a8(puVar25,uVar2 + 1,1,puVar9);
      uVar13 = (ulong)puVar25 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar13 + 0x10) = uVar2 + 1;
    *(undefined **)(uVar13 + uVar2 * 8 + 0x20) = puVar8;
    func_0x000107c615e8(puVar8);
  }
  lVar5 = _DAT_112fb9898;
  puVar17 = auStack_b0;
  func_0x000107c61428(lVar23 + _DAT_112fb9898,puVar17,0,0);
  ppuVar10 = *(undefined ***)(lVar23 + lVar5);
  puVar12 = puVar17;
  if (ppuVar10 == (undefined **)0x0) {
LAB_10249ebd8:
    ppuVar19 = (undefined **)0x0;
    puVar17 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c51b70();
    func_0x000107c61180();
    puVar12 = puVar17;
    if (ppuVar10 == (undefined **)0x0) goto LAB_10249ebd8;
    ppuVar19 = ppuVar10;
    func_0x000107c5faec();
    puVar12 = puVar17;
    func_0x000107c61170(ppuVar10);
  }
  ppuVar22 = &PTR____CFConstantStringClassReference_110eb5758;
  ppuVar10 = ppuVar22;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110eb5758);
  func_0x000107c5faec();
  puVar18 = puVar12;
  func_0x000107c61170(ppuVar10);
  if (puVar17 == (undefined1 *)0x0) {
    ppuVar19 = (undefined **)0x0;
  }
  else {
    if ((ppuVar19 == ppuVar22) && (puVar17 == puVar12)) {
      ppuVar19 = (undefined **)0x1;
    }
    else {
      puVar18 = puVar17;
      func_0x000107c605b8(ppuVar19,puVar17,ppuVar22,puVar12,0);
    }
    func_0x000107c6142c(puVar17);
  }
  func_0x000107c6142c(puVar12);
  ppuVar10 = *(undefined ***)(lVar23 + lVar5);
  puVar17 = puVar18;
  if (ppuVar10 != (undefined **)0x0) {
    func_0x000107c51b70();
    func_0x000107c61180();
    puVar17 = puVar18;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar22 = ppuVar10;
      func_0x000107c5faec();
      puVar17 = puVar18;
      func_0x000107c61170(ppuVar10);
      goto LAB_10249eca0;
    }
  }
  ppuVar22 = (undefined **)0x0;
  puVar18 = (undefined1 *)0x0;
LAB_10249eca0:
  ppuVar24 = &PTR____CFConstantStringClassReference_110f4b318;
  ppuVar10 = ppuVar24;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f4b318);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar10);
  if (puVar18 == (undefined1 *)0x0) {
    func_0x000107c6142c(puVar17);
    if (((ulong)ppuVar19 & 1) == 0) {
      return puVar25;
    }
  }
  else if ((ppuVar22 == ppuVar24) && (puVar18 == puVar17)) {
    func_0x000107c6142c(puVar18);
    func_0x000107c6142c(puVar17);
  }
  else {
    func_0x000107c605b8(ppuVar22,puVar18,ppuVar24,puVar17,0);
    func_0x000107c6142c(puVar18);
    func_0x000107c6142c(puVar17);
    if ((((uint)ppuVar19 | (uint)ppuVar22) & 1) == 0) {
      return puVar25;
    }
  }
  func_0x000100083b20(&uStack_b8);
  uVar15 = uStack_b8;
  uVar20 = uStack_b8;
  func_0x000107c40ad8();
  func_0x000107c61180();
  func_0x000107c615e8(uVar15);
  puVar8 = puVar25;
  if ((ulong)puVar25 >> 0x3e != 0) {
    puVar9 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar25) {
      puVar9 = puVar25;
    }
    func_0x000107c60480(puVar9);
    puVar8 = (undefined *)0x0;
    func_0x0001024a29a8(0,puVar9 + 1,1,puVar25);
  }
  puVar25 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
  uVar2 = *(ulong *)(puVar25 + 0x10);
  puVar9 = puVar8;
  if (*(ulong *)(puVar25 + 0x18) >> 1 <= uVar2) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar25 + 0x18));
    func_0x0001024a29a8(puVar9,uVar2 + 1,1,puVar8);
    puVar25 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
  }
  *(ulong *)(puVar25 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puVar25 + uVar2 * 8 + 0x20) = uVar20;
  if (((ulong)ppuVar19 & 1) != 0) {
    func_0x000100083b20(&uStack_b8);
    puVar8 = puVar9;
    if ((ulong)puVar9 >> 0x3e != 0) {
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar25 = puVar9;
      }
      func_0x000107c60480(puVar25);
      puVar8 = (undefined *)0x0;
      func_0x0001024a29a8(0,puVar25 + 1,1,puVar9);
      puVar25 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    }
    uVar2 = *(ulong *)(puVar25 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(puVar25 + 0x18) >> 1 <= uVar2) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar25 + 0x18));
      func_0x0001024a29a8(puVar9,uVar2 + 1,1,puVar8);
      puVar25 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    }
    *(ulong *)(puVar25 + 0x10) = uVar2 + 1;
    *(undefined8 *)(puVar25 + uVar2 * 8 + 0x20) = uStack_b8;
  }
  return puVar9;
}



/* Entry: 10249f3c8; end: 10249f4b3;  */

void FUN_10249f3c8(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_1024a28f8(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1024a2e18(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10249f4b0);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10249f4b4);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10249f4ac);
  (*pcVar1)();
}



/* Entry: 10249f4b4; end: 10249f4bf; -[_TtC40ContentOperaPluginServicesImplementation39ContentOperaPluginCreatorImplementation discoverFeedStoryPlugins] */

void FUN_10249f4b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_10249df0c();
  func_0x000107c61574(param_1);
  uVar2 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10249f4c0; end: 10249fc33;  */

/* WARNING: Removing unreachable block (ram,0x00010249fc30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10249f4c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uStack_88;
  undefined8 auStack_80 [3];
  undefined8 auStack_68 [3];
  
  func_0x000100083b20(auStack_68);
  uVar2 = auStack_68[0];
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar3 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar3 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480(puVar3);
  }
  uVar4 = 0;
  func_0x0001024a29a8(0,puVar3 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar14 = uVar4 & 0xffffffffffffff8;
  uVar15 = *(ulong *)(uVar14 + 0x10);
  uVar7 = uVar4;
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar15) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    func_0x0001024a29a8(uVar7,uVar15 + 1,1,uVar4);
    uVar14 = uVar7 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar14 + 0x10) = uVar15 + 1;
  *(undefined8 *)(uVar14 + uVar15 * 8 + 0x20) = uVar2;
  uVar15 = uVar7;
  func_0x000100083b20(auStack_68);
  uVar2 = auStack_68[0];
  if (uVar7 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar7) {
      uVar14 = uVar7;
    }
    func_0x000107c60480(uVar14);
    uVar15 = 0;
    func_0x0001024a29a8(0,uVar14 + 1,1,uVar7);
    uVar14 = uVar15 & 0xffffffffffffff8;
    uVar7 = uVar15;
  }
  uVar4 = *(ulong *)(uVar14 + 0x10);
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar4) {
    uVar15 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    func_0x0001024a29a8(uVar15,uVar4 + 1,1,uVar7);
    uVar14 = uVar15 & 0xffffffffffffff8;
    uVar7 = uVar15;
  }
  *(ulong *)(uVar14 + 0x10) = uVar4 + 1;
  *(undefined8 *)(uVar14 + uVar4 * 8 + 0x20) = uVar2;
  func_0x000100083b20(auStack_68);
  if (uVar7 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar7) {
      uVar14 = uVar7;
    }
    func_0x000107c60480(uVar14);
    uVar15 = 0;
    func_0x0001024a29a8(0,uVar14 + 1,1,uVar7);
    uVar14 = uVar15 & 0xffffffffffffff8;
    uVar7 = uVar15;
  }
  uVar4 = *(ulong *)(uVar14 + 0x10);
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar4) {
    uVar15 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    func_0x0001024a29a8(uVar15,uVar4 + 1,1,uVar7);
    uVar14 = uVar15 & 0xffffffffffffff8;
    uVar7 = uVar15;
  }
  *(ulong *)(uVar14 + 0x10) = uVar4 + 1;
  *(undefined8 *)(uVar14 + uVar4 * 8 + 0x20) = auStack_68[0];
  func_0x00010249dc60();
  lVar1 = _DAT_112fb98e0;
  lVar13 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar13 + _DAT_112fb98e0,auStack_68,0,0);
  uVar4 = lVar13 + lVar1;
  func_0x000107c61618();
  uVar9 = uVar15;
  func_0x000107c4098c();
  func_0x000107c61180();
  func_0x000107c615e8(uVar15);
  func_0x000107c615e8();
  if (uVar9 != 0) {
    func_0x000107c615f0(uVar9);
    uVar15 = uVar7;
    if (uVar7 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar7) {
        uVar14 = uVar7;
      }
      func_0x000107c60480(uVar14);
      uVar15 = 0;
      func_0x0001024a29a8(0,uVar14 + 1,1,uVar7);
      uVar14 = uVar15 & 0xffffffffffffff8;
    }
    uVar4 = *(ulong *)(uVar14 + 0x10);
    uVar7 = uVar15;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar4) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x0001024a29a8(uVar7,uVar4 + 1,1,uVar15);
      uVar14 = uVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar4 + 1;
    *(ulong *)(uVar14 + uVar4 * 8 + 0x20) = uVar9;
    func_0x000107c615e8();
    uVar4 = uVar9;
  }
  FUN_10249fc34();
  if (uVar4 != 0) {
    func_0x000107c615f0();
    uVar14 = uVar7;
    if (uVar7 >> 0x3e != 0) {
      uVar15 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar15 = uVar7;
      }
      func_0x000107c60480(uVar15);
      uVar14 = 0;
      func_0x0001024a29a8(0,uVar15 + 1,1,uVar7);
    }
    uVar9 = uVar14 & 0xffffffffffffff8;
    uVar15 = *(ulong *)(uVar9 + 0x10);
    uVar7 = uVar14;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar15) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      func_0x0001024a29a8(uVar7,uVar15 + 1,1,uVar14);
      uVar9 = uVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar9 + 0x10) = uVar15 + 1;
    *(ulong *)(uVar9 + uVar15 * 8 + 0x20) = uVar4;
    func_0x000107c615e8();
  }
  func_0x000100083b20(auStack_80);
  uVar2 = auStack_80[0];
  if (uVar7 >> 0x3e != 0) {
    uVar14 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar14 = uVar7;
    }
    func_0x000107c60480(uVar14);
    uVar4 = 0;
    func_0x0001024a29a8(0,uVar14 + 1,1,uVar7);
    uVar7 = uVar4;
  }
  uVar14 = uVar7 & 0xffffffffffffff8;
  uVar15 = *(ulong *)(uVar14 + 0x10);
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar15) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    func_0x0001024a29a8(uVar4,uVar15 + 1,1,uVar7);
    uVar14 = uVar4 & 0xffffffffffffff8;
    uVar7 = uVar4;
  }
  *(ulong *)(uVar14 + 0x10) = uVar15 + 1;
  *(undefined8 *)(uVar14 + uVar15 * 8 + 0x20) = uVar2;
  FUN_10249fccc();
  if (uVar4 == 0) {
    FUN_10249ffc0();
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(*(long *)(unaff_x20 + 0x128) + _DAT_113010c28);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar4 != 0) {
        func_0x000107c4b9cc();
        goto LAB_10249f6fc;
      }
    }
  }
  else {
    func_0x000107c615f0();
    uVar15 = uVar7;
    if (uVar7 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar7) {
        uVar14 = uVar7;
      }
      func_0x000107c60480(uVar14);
      uVar15 = 0;
      func_0x0001024a29a8(0,uVar14 + 1,1,uVar7);
      uVar14 = uVar15 & 0xffffffffffffff8;
    }
    uVar9 = *(ulong *)(uVar14 + 0x10);
    uVar7 = uVar15;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar9) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x0001024a29a8(uVar7,uVar9 + 1,1,uVar15);
      uVar14 = uVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar9 + 1;
    *(ulong *)(uVar14 + uVar9 * 8 + 0x20) = uVar4;
LAB_10249f6fc:
    func_0x000107c615e8(uVar4);
  }
  func_0x000100083b20(auStack_80);
  uVar14 = uVar7;
  if (uVar7 >> 0x3e != 0) {
    uVar15 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar15 = uVar7;
    }
    func_0x000107c60480(uVar15);
    uVar14 = 0;
    func_0x0001024a29a8(0,uVar15 + 1,1,uVar7);
  }
  uVar15 = uVar14 & 0xffffffffffffff8;
  uVar7 = *(ulong *)(uVar15 + 0x10);
  uVar4 = uVar14;
  if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar7) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
    func_0x0001024a29a8(uVar4,uVar7 + 1,1,uVar14);
    uVar15 = uVar4 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar15 + 0x10) = uVar7 + 1;
  *(undefined8 *)(uVar15 + uVar7 * 8 + 0x20) = auStack_80[0];
  lVar1 = _DAT_112fb9898;
  puVar10 = auStack_80;
  func_0x000107c61428(lVar13 + _DAT_112fb9898,puVar10,0,0);
  ppuVar5 = *(undefined ***)(lVar13 + lVar1);
  puVar8 = puVar10;
  if (ppuVar5 != (undefined **)0x0) {
    func_0x000107c51b70();
    func_0x000107c61180();
    puVar8 = puVar10;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar11 = ppuVar5;
      func_0x000107c5faec();
      puVar8 = puVar10;
      func_0x000107c61170(ppuVar5);
      goto LAB_10249f7e0;
    }
  }
  ppuVar11 = (undefined **)0x0;
  puVar10 = (undefined8 *)0x0;
LAB_10249f7e0:
  ppuVar12 = &PTR____CFConstantStringClassReference_110eb5758;
  ppuVar5 = ppuVar12;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110eb5758);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar5);
  if (puVar10 == (undefined8 *)0x0) {
    func_0x000107c6142c(puVar8);
  }
  else {
    if ((ppuVar11 == ppuVar12) && (puVar10 == puVar8)) {
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar8);
    }
    else {
      func_0x000107c605b8(ppuVar11,puVar10,ppuVar12,puVar8,0);
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar8);
      if (((ulong)ppuVar11 & 1) == 0) {
        return uVar4;
      }
    }
    func_0x000100083b20(&uStack_88);
    uVar2 = uStack_88;
    uVar6 = uStack_88;
    func_0x000107c40ad8();
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    uVar14 = uVar4;
    if (uVar4 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar4) {
        uVar15 = uVar4;
      }
      func_0x000107c60480(uVar15);
      uVar14 = 0;
      func_0x0001024a29a8(0,uVar15 + 1,1,uVar4);
      uVar15 = uVar14 & 0xffffffffffffff8;
    }
    uVar7 = *(ulong *)(uVar15 + 0x10);
    uVar4 = uVar14;
    if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar7) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
      func_0x0001024a29a8(uVar4,uVar7 + 1,1,uVar14);
      uVar15 = uVar4 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar15 + 0x10) = uVar7 + 1;
    *(undefined8 *)(uVar15 + uVar7 * 8 + 0x20) = uVar6;
    func_0x000100083b20(&uStack_88);
    uVar14 = uVar4;
    if (uVar4 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar4) {
        uVar15 = uVar4;
      }
      func_0x000107c60480(uVar15);
      uVar14 = 0;
      func_0x0001024a29a8(0,uVar15 + 1,1,uVar4);
      uVar15 = uVar14 & 0xffffffffffffff8;
    }
    uVar7 = *(ulong *)(uVar15 + 0x10);
    uVar4 = uVar14;
    if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar7) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
      func_0x0001024a29a8(uVar4,uVar7 + 1,1,uVar14);
      uVar15 = uVar4 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar15 + 0x10) = uVar7 + 1;
    *(undefined8 *)(uVar15 + uVar7 * 8 + 0x20) = uStack_88;
  }
  return uVar4;
}



/* Entry: 10249fc34; end: 10249fccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10249fc34(void)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = *(long *)(lStack_28 + _DAT_112f9bd80);
  func_0x000107c61174();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c40ad4(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
  }
  return lVar1;
}



/* Entry: 10249fccc; end: 10249ffbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10249fccc(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  char acStack_98 [24];
  ulong auStack_80 [2];
  char *pcStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112fb9968;
  acStack_98[0] = '\0';
  lVar7 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar7 + _DAT_112fb9968,auStack_68,0,0);
  lVar1 = *(long *)(lVar7 + lVar1);
  if (lVar1 != 0) {
    pcStack_70 = acStack_98;
    func_0x000107c61174();
    func_0x000104321844(FUN_1024a26d4,0,0x1024a26d8,0,0x1024a26dc,0,0x1024a26e0,0,0x1024a26e4,0,
                        0x1024a26e8,0,0x1024a26ec,0,0x1024a26f0,0,0x1024a3118,auStack_80,0x1024a26f4
                        ,0,0x1024a26f8,0,0x1024a26fc,0,0x1024a2700,0,0x1024a2704,0);
    func_0x000107c61170(lVar1);
    if (acStack_98[0] == '\x01') {
      return 0;
    }
  }
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + _DAT_113043d30);
  func_0x000107c6157c(uVar5);
  func_0x0001000d224c(auStack_80);
  func_0x000107c61574(uVar5);
  uVar2 = auStack_80[0];
  func_0x000107c42550();
  func_0x000107c615e8(auStack_80[0]);
  lVar1 = _DAT_112fb98e8;
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  lVar3 = lVar7 + _DAT_112fb98e8;
  func_0x000107c61428(lVar3,auStack_80,0,0);
  lVar1 = *(long *)(lVar7 + lVar1);
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x0001047c0984(0);
    lVar6 = lVar1;
    func_0x000107c615f0();
    func_0x000107c61480();
    lVar3 = lVar6;
    if (lVar6 == 0) {
      func_0x000107c615e8(lVar1);
      lVar3 = lVar1;
    }
  }
  func_0x00010249dbc8();
  func_0x000107c61428(lVar7 + _DAT_112fb98d8,acStack_98,0,0);
  func_0x000107c61428(lVar7 + _DAT_112fb98b8,auStack_b0,0,0);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  lVar7 = lVar7 + _DAT_112fb98a0;
  func_0x000107c61428(lVar7,auStack_c8,0,0);
  func_0x00010249dcfc();
  uVar5 = *(undefined8 *)(lVar7 + _DAT_112ff26f0);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(lVar7);
  lVar7 = lVar3;
  func_0x000107c409ec(lVar3);
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  return lVar7;
}



/* Entry: 10249ffc0; end: 1024a013b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10249ffc0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack_70 [2];
  byte *pbStack_60;
  undefined1 auStack_50 [31];
  byte bStack_31;
  
  lVar1 = _DAT_112fb9968;
  bStack_31 = 0;
  lVar2 = *(long *)(unaff_x20 + 0x1b8);
  func_0x000107c61428(lVar2 + _DAT_112fb9968,auStack_50,0,0);
  lVar1 = *(long *)(lVar2 + lVar1);
  if (lVar1 != 0) {
    pbStack_60 = &bStack_31;
    func_0x000107c61174();
    func_0x000104321844(FUN_1024a26d4,0,0x1024a26d8,0,0x1024a26dc,0,0x1024a26e0,0,0x1024a26e4,0,
                        0x1024a26e8,0,0x1024a26ec,0,0x1024a26f0,0,FUN_1024a2fac,auStack_70,
                        0x1024a26f4,0,0x1024a26f8,0,0x1024a26fc,0,0x1024a2700,0,0x1024a2704,0);
    func_0x000107c61170(lVar1);
    if ((bStack_31 & 1) != 0) {
      return 0;
    }
  }
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + _DAT_113043d30);
  func_0x000107c6157c(uVar3);
  func_0x0001000d224c(auStack_70);
  func_0x000107c61574(uVar3);
  uVar3 = auStack_70[0];
  func_0x000107c42550(auStack_70[0]);
  func_0x000107c615e8(auStack_70[0]);
  return (uint)uVar3 ^ 1;
}



/* Entry: 1024a013c; end: 1024a0147; -[_TtC40ContentOperaPluginServicesImplementation39ContentOperaPluginCreatorImplementation spotlightStoryCommonPlugins] */

void FUN_1024a013c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_10249f4c0();
  func_0x000107c61574(param_1);
  uVar2 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1024a0148; end: 1024a0767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1024a0148(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 auStack_98 [3];
  undefined8 auStack_80 [3];
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  
  func_0x000100083b20(auStack_80);
  uVar2 = auStack_80[0];
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar4 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480(puVar4);
  }
  uVar5 = 0;
  func_0x0001024a29a8(0,puVar4 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar13 = uVar5 & 0xffffffffffffff8;
  uVar10 = *(ulong *)(uVar13 + 0x10);
  uVar9 = uVar5;
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar10) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
    func_0x0001024a29a8(uVar9,uVar10 + 1,1,uVar5);
    uVar13 = uVar9 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar13 + 0x10) = uVar10 + 1;
  *(undefined8 *)(uVar13 + uVar10 * 8 + 0x20) = uVar2;
  func_0x000100083b20(auStack_80);
  uVar2 = auStack_80[0];
  uVar10 = uVar9;
  if (uVar9 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar9) {
      uVar13 = uVar9;
    }
    uStack_58 = uVar9;
    func_0x000107c60480(uVar13);
    uVar10 = 0;
    func_0x0001024a29a8(0,uVar13 + 1,1,uVar9);
    uVar13 = uVar10 & 0xffffffffffffff8;
  }
  uVar9 = *(ulong *)(uVar13 + 0x10);
  uVar5 = uVar10;
  uStack_58 = uVar10;
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar9) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
    func_0x0001024a29a8(uVar5,uVar9 + 1,1,uVar10);
    uVar13 = uVar5 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar13 + 0x10) = uVar9 + 1;
  *(undefined8 *)(uVar13 + uVar9 * 8 + 0x20) = uVar2;
  func_0x000100083b20(auStack_80);
  uVar10 = uVar5;
  if (uVar5 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar5) {
      uVar13 = uVar5;
    }
    uStack_58 = uVar5;
    func_0x000107c60480(uVar13);
    uVar10 = 0;
    func_0x0001024a29a8(0,uVar13 + 1,1,uVar5);
    uVar13 = uVar10 & 0xffffffffffffff8;
  }
  uVar9 = *(ulong *)(uVar13 + 0x10);
  uStack_58 = uVar10;
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar9) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
    func_0x0001024a29a8(uVar5,uVar9 + 1,1,uVar10);
    uVar13 = uVar5 & 0xffffffffffffff8;
    uStack_58 = uVar5;
  }
  uVar10 = uStack_58;
  *(ulong *)(uVar13 + 0x10) = uVar9 + 1;
  *(undefined8 *)(uVar13 + uVar9 * 8 + 0x20) = auStack_80[0];
  uVar2 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x160);
  lVar6 = 0;
  FUN_1024a3d50();
  lVar7 = lVar6;
  func_0x000107c610f8();
  func_0x000107c61614(lVar7 + _DAT_112e9e9b0,0);
  *(undefined8 *)(lVar7 + _DAT_112e9e9b8) = 0;
  *(undefined1 *)(lVar7 + _DAT_112e9e9c0) = 0;
  puVar1 = (undefined8 *)(lVar7 + _DAT_112e9e9c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _DAT_112e9e998) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112e9e9a0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112e9e9a8) = uVar11;
  puVar4 = PTR_s_init_1125d9248;
  lStack_68 = lVar7;
  lStack_60 = lVar6;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar11);
  plVar8 = &lStack_68;
  func_0x000107c61154(plVar8,puVar4);
  uVar9 = uVar10;
  if (uVar10 >> 0x3e != 0) {
    if (0x7fffffffffffffff < uVar10) {
      uVar13 = uVar10;
    }
    func_0x000107c60480(uVar13);
    uVar9 = 0;
    func_0x0001024a29a8(0,uVar13 + 1,1,uVar10);
    uVar13 = uVar9 & 0xffffffffffffff8;
  }
  uVar10 = *(ulong *)(uVar13 + 0x10);
  uVar5 = uVar9;
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar10) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
    func_0x0001024a29a8(uVar5,uVar10 + 1,1,uVar9);
    uVar13 = uVar5 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar13 + 0x10) = uVar10 + 1;
  *(long **)(uVar13 + uVar10 * 8 + 0x20) = plVar8;
  lVar6 = _DAT_112fb98d8;
  lVar12 = *(long *)(unaff_x20 + 0x1b8);
  lVar7 = lVar12 + _DAT_112fb98d8;
  func_0x000107c61428(lVar7,auStack_80,0,0);
  if (*(int *)(lVar12 + lVar6) != 0x62) {
    func_0x00010249dcfc();
    lVar6 = *(long *)(lVar7 + _DAT_112ff26f8);
    func_0x000107c61174();
    func_0x000107c61170(lVar7);
    lVar7 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar7 != 0) {
      uStack_58 = uVar5;
      func_0x000107c615f0(lVar7);
      uVar10 = uVar5;
      if (uVar5 >> 0x3e != 0) {
        if (0x7fffffffffffffff < uVar5) {
          uVar13 = uVar5;
        }
        func_0x000107c60480(uVar13);
        uVar10 = 0;
        func_0x0001024a29a8(0,uVar13 + 1,1,uVar5);
        uVar13 = uVar10 & 0xffffffffffffff8;
        uStack_58 = uVar10;
      }
      uVar9 = *(ulong *)(uVar13 + 0x10);
      uVar5 = uVar10;
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar9) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
        func_0x0001024a29a8(uVar5,uVar9 + 1,1,uVar10);
        uVar13 = uVar5 & 0xffffffffffffff8;
        uStack_58 = uVar5;
      }
      *(ulong *)(uVar13 + 0x10) = uVar9 + 1;
      *(long *)(uVar13 + uVar9 * 8 + 0x20) = lVar7;
      func_0x000107c615e8(lVar7);
    }
  }
  func_0x000100083b20(auStack_98);
  uVar13 = uVar5;
  if (uVar5 >> 0x3e != 0) {
    uVar10 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar10 = uVar5;
    }
    uStack_58 = uVar5;
    func_0x000107c60480(uVar10);
    uVar13 = 0;
    func_0x0001024a29a8(0,uVar10 + 1,1,uVar5);
  }
  uVar5 = uVar13 & 0xffffffffffffff8;
  uVar10 = *(ulong *)(uVar5 + 0x10);
  uVar9 = uVar13;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    uStack_58 = uVar13;
    func_0x0001024a29a8(uVar9,uVar10 + 1,1,uVar13);
    uVar5 = uVar9 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar5 + 0x10) = uVar10 + 1;
  *(undefined8 *)(uVar5 + uVar10 * 8 + 0x20) = auStack_98[0];
  uStack_58 = uVar9;
  FUN_10249e18c();
  FUN_10249f3c8();
  lVar7 = _DAT_112fb9960;
  func_0x000107c61428(lVar12 + _DAT_112fb9960,auStack_98,0,0);
  uVar13 = *(ulong *)(lVar12 + lVar7);
  if (uVar13 != 0) {
    func_0x000107c5ae84();
    func_0x000107c61180();
    if (uVar13 != 0) {
      uVar10 = uVar13;
      func_0x000107c3ebcc();
      func_0x000107c61170(uVar13);
      goto LAB_1024a0464;
    }
  }
  uVar10 = 0;
LAB_1024a0464:
  lVar7 = _DAT_112fb9948;
  func_0x000107c61428(lVar12 + _DAT_112fb9948,auStack_b0,0,0);
  if (((*(byte *)(lVar12 + lVar7) & 1) != 0) || ((uVar10 & 1) != 0)) {
    func_0x000100083b20(&uStack_b8);
    uVar13 = uStack_58;
    func_0x000107c615f0(uStack_b8);
    uVar10 = uVar13;
    func_0x000107c61550();
    if (((int)uVar10 == 0) || (((long)uVar13 < 0 || (uVar10 = uVar13, (uVar13 >> 0x3e & 1) != 0))))
    {
      if (uVar13 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar9 = uVar13;
        }
        func_0x000107c60480(uVar9);
      }
      uVar10 = 0;
      func_0x0001024a29a8(0,uVar9 + 1,1,uVar13);
    }
    uVar5 = uVar10 & 0xffffffffffffff8;
    uVar13 = *(ulong *)(uVar5 + 0x10);
    uVar9 = uVar10;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      func_0x0001024a29a8(uVar9,uVar13 + 1,1,uVar10);
      uVar5 = uVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar5 + 0x10) = uVar13 + 1;
    *(undefined8 *)(uVar5 + uVar13 * 8 + 0x20) = uStack_b8;
    func_0x000107c615e8(uStack_b8);
    uStack_58 = uVar9;
  }
  return uStack_58;
}



/* Entry: 1024a0768; end: 1024a0773; -[_TtC40ContentOperaPluginServicesImplementation39ContentOperaPluginCreatorImplementation friendAutoAdvanceActionHandlerCommonPlugins] */

void FUN_1024a0768(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1024a0148();
  func_0x000107c61574(param_1);
  uVar2 = 0x112e9e980;
  func_0x0001000285a8(0x112e9e980,&UNK_10daca810);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1024a0774; end: 1024a07b3; -[_TtC40ContentOperaPluginServicesImplementation39ContentOperaPluginCreatorImplementation defaultPublisherOperaPlugin] */

void FUN_1024a0774(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}



/* Entry: 1024a07b4; end: 1024a07f3; -[_TtC40ContentOperaPluginServicesImplementation39ContentOperaPluginCreatorImplementation discoverFeedLoggingPlugin] */

void FUN_1024a07b4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000107c6157c();
  func_0x000100083b20(&uStack_28);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_28);
  return;
}


