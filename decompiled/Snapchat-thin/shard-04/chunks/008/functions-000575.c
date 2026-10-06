/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103972be0; end: 103972e17;  */

/* WARNING: Possible PIC construction at 0x000103972d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103972d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103972d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103972d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103972da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103972dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103972d8c) */
/* WARNING: Removing unreachable block (ram,0x000103972d7c) */
/* WARNING: Removing unreachable block (ram,0x000103972d60) */
/* WARNING: Removing unreachable block (ram,0x000103972d50) */
/* WARNING: Removing unreachable block (ram,0x000103972df0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103972be0(void)

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
  func_0x000107c5e234();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c5e248();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c5e1b4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_103972088();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_103972300();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103972e18);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112fba698) = lVar5;
        *(long *)(lVar4 + _DAT_112fba6a0) = unaff_x20;
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



/* Entry: 103972e18; end: 103972e3f; -[SCWebBrowserScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103972e18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103972be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103972e40; end: 103972e83; -[SCWebBrowserScopeGraphBridgeSaberEntryPoint end] */

void FUN_103972e40(undefined8 param_1)

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



/* Entry: 103972e84; end: 1039730f3;  */

void FUN_103972e84(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd8) && (param_3 == -0x7ffffffef0e82140)) ||
       (func_0x000107c605b8(0xd000000000000028,0x800000010f17dec0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a6cc();
    }
    else {
      if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e82110)) {
        uVar2 = 0xd000000000000023;
        func_0x000107c605b8(0xd000000000000023,0x800000010f17def0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd000000000000029;
          if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e820e0)) &&
             (func_0x000107c605b8(0xd000000000000029,0x800000010f17df20,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "WebBrowserScopeGraphBridge/SCWebBrowserScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x4c,2,0x4b,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1039730f4);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a678();
          goto LAB_103972f10;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a6d8();
    }
  }
LAB_103972f10:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039730f4; end: 10397319f; -[SCWebBrowserScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1039730f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103972e84(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039731a0; end: 103973223; -[SCWebBrowserScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039731a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fba778,0);
  *(undefined8 *)(param_1 + _DAT_112fba780) = 0;
  *(undefined8 *)(param_1 + _DAT_112fba788) = 0;
  *(undefined8 *)(param_1 + _DAT_112fba790) = 0;
  *(undefined8 *)(param_1 + _DAT_112fba798) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103973224; end: 103973257;  */

void FUN_103973224(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103973258; end: 1039732bf; -[SCWebBrowserScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103973284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039732a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103973288) */
/* WARNING: Removing unreachable block (ram,0x0001039732a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973258(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fba778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fba780));
  return;
}



/* Entry: 1039732c0; end: 1039732df;  */

void FUN_1039732c0(void)

{
  func_0x000107c61168(&PTR_PTR_1129085b0);
  return;
}



/* Entry: 1039732e0; end: 103973327; -[SCWebBrowserScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039732e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fba7c8;
  func_0x000107c61428(param_1 + _DAT_112fba7c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103973328; end: 10397337f; -[SCWebBrowserScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973328(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fba7c8;
  func_0x000107c61428(param_1 + _DAT_112fba7c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103973380; end: 103973457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973380(undefined8 param_1,long param_2)

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
    FUN_1039722e0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112fba6d0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103973458);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112fba6d8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112fba7d0);
    *(long **)(unaff_x20 + _DAT_112fba7d0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 103973458; end: 10397347f; -[SCWebBrowserScopedServicesSaberEntryPoint begin] */

void FUN_103973458(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103973380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103973480; end: 1039735f7;  */

/* WARNING: Possible PIC construction at 0x0001039734e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103973580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039734ec) */
/* WARNING: Removing unreachable block (ram,0x000103973584) */
/* WARNING: Removing unreachable block (ram,0x00010397359c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973480(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112fba7d0);
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



/* Entry: 1039735f8; end: 1039735ff;  */

void FUN_1039735f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103973600; end: 103973633; -[SCWebBrowserScopedServicesSaberEntryPoint end] */

void FUN_103973600(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103973480();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103973634; end: 103973753;  */

void FUN_103973634(long param_1,long param_2,long param_3)

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
                        "WebBrowserScopeGraphBridge/SCWebBrowserScopedServicesSaberEntryPoint.swift"
                        ,0x4a,2,0x3f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103973754);
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



/* Entry: 103973754; end: 1039737ff; -[SCWebBrowserScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103973754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103973634(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103973800; end: 10397385f; -[SCWebBrowserScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973800(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fba7c8,0);
  *(undefined8 *)(param_1 + _DAT_112fba7d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103973860; end: 103973893;  */

void FUN_103973860(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103973894; end: 1039738cb; -[SCWebBrowserScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973894(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fba7c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fba7d0));
  return;
}



/* Entry: 1039738cc; end: 1039738eb;  */

void FUN_1039738cc(void)

{
  func_0x000107c61168(&PTR_PTR_112908688);
  return;
}



/* Entry: 1039738ec; end: 103973953; -[_TtC10WebBrowser33AdWebBrowserPrivacyConsentManager getPrivacyConsentValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039738ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c44204(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103973954; end: 1039739bb; -[_TtC10WebBrowser33AdWebBrowserPrivacyConsentManager updatePrivacyConsentWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_38);
  func_0x000107c5d5b4(uStack_38,param_2,param_3);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1039739bc; end: 103973a47; -[_TtC10WebBrowser33AdWebBrowserPrivacyConsentManager shouldPresentPrivacyPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1039739bc(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5ac98();
  func_0x000107c615e8(uStack_38);
  if ((int)uVar1 == 0) {
    func_0x000107c61170(param_1);
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + _DAT_112fba808);
    func_0x000107c61170(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2 & 1;
}



/* Entry: 103973a48; end: 103973aa7; -[_TtC10WebBrowser33AdWebBrowserPrivacyConsentManager init] */

void FUN_103973a48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowser.AdWebBrowserPrivacyConsentManager",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103973a74);
  (*pcVar1)();
}



/* Entry: 103973aa8; end: 103973ab7; -[_TtC10WebBrowser33AdWebBrowserPrivacyConsentManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973aa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fba800));
  return;
}



/* Entry: 103973ab8; end: 103973ad7;  */

void FUN_103973ab8(void)

{
  func_0x000107c61168(&PTR_PTR_112908748);
  return;
}



/* Entry: 103973ad8; end: 103973b0f;  */

void FUN_103973ad8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103973b10; end: 103973b53;  */

void FUN_103973b10(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103973b54; end: 103973b5b;  */

bool FUN_103973b54(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103973b5c; end: 103973bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103973b5c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = _DAT_112fba848;
  func_0x000107c61614(unaff_x20 + _DAT_112fba848,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103973bd8; end: 103973caf; -[_TtC10WebBrowser39NavigationPluginViewControllerPresenter present:] */

/* WARNING: Possible PIC construction at 0x000103973c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103973c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103973c48) */
/* WARNING: Removing unreachable block (ram,0x000103973c60) */
/* WARNING: Removing unreachable block (ram,0x000103973c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973bd8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_112fba848;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  lVar2 = lVar1;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c4f018(lVar1,param_2,param_3,1,0);
    lVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 103973cb0; end: 103973d0f; -[_TtC10WebBrowser39NavigationPluginViewControllerPresenter init] */

void FUN_103973cb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowser.NavigationPluginViewControllerPresenter",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103973cdc);
  (*pcVar1)();
}



/* Entry: 103973d10; end: 103973d1f; -[_TtC10WebBrowser39NavigationPluginViewControllerPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112fba848);
  return;
}



/* Entry: 103973d20; end: 103973d3f;  */

void FUN_103973d20(void)

{
  func_0x000107c61168(&PTR_PTR_112908810);
  return;
}



/* Entry: 103973d40; end: 103974c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103973d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112fba878;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112fba880) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112fba888,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fba890) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fba898) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8a0) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8b8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8c0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8c8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8d0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8d8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8e0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8e8) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8f0) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112fba8f8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112fba900) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112fba908) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112fba910) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112fba918) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112fba920) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112fba928) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112fba930) = param_19;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103974c4c; end: 103974d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103974c4c(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_68 [24];
  
  lVar10 = *param_2;
  uVar6 = *(undefined8 *)(lVar10 + _DAT_11308b508);
  uVar3 = ((undefined8 *)(lVar10 + _DAT_11308b508))[1];
  uVar11 = *(undefined8 *)(lVar10 + _DAT_11308b500);
  uVar4 = ((undefined8 *)(lVar10 + _DAT_11308b500))[1];
  puVar1 = (undefined8 *)(*(long *)(param_3 + _DAT_112fba890) + _DAT_112ff0ba0);
  func_0x000107c61428(puVar1,auStack_68,0,0);
  uVar8 = *(undefined8 *)(lVar10 + _DAT_11308b530);
  uVar9 = *(undefined8 *)(lVar10 + _DAT_11308b518);
  uVar2 = *(undefined8 *)(lVar10 + _DAT_11308b528);
  uVar5 = ((undefined8 *)(lVar10 + _DAT_11308b528))[1];
  uVar7 = *(undefined8 *)(lVar10 + _DAT_11308b520);
  *param_1 = uVar6;
  param_1[1] = uVar3;
  param_1[2] = uVar11;
  param_1[3] = uVar4;
  uVar6 = puVar1[1];
  uVar11 = *puVar1;
  param_1[5] = puVar1[1];
  param_1[4] = uVar11;
  param_1[6] = uVar2;
  param_1[7] = uVar5;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar7;
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return;
}



/* Entry: 103974d6c; end: 103974fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103974d6c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long extraout_x12;
  long unaff_x20;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar9 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = 0;
  lStack_98 = lVar9;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  lVar14 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = auStack_b0 + -(lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar13 - extraout_x12;
  pcVar10 = *(code **)(lVar12 + 0x10);
  (*pcVar10)(lVar9,*(long *)(unaff_x20 + _DAT_112fba890) + _DAT_11380cde8,lVar1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puStack_a0 = puVar2;
  func_0x000107c5ed90();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_a8 = puVar2;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar4 = 0;
  func_0x000100dfa6ec(0);
  uVar5 = 0x112d377a8;
  FUN_103976f54(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
  puVar6 = puVar3;
  func_0x000107c5f9dc(puVar3,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
  func_0x000107c6142c(puVar3);
  puVar2 = &UNK_1106b3808;
  func_0x000107c613fc(&UNK_1106b3808,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  (*pcVar10)(puVar13,lVar9,lVar1);
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar11 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar15 = lVar14 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_1106b38f0;
  func_0x000107c613fc(&UNK_1106b38f0,uVar15 + 0x10,uVar8 | 7);
  (**(code **)(lVar12 + 0x20))(puVar3 + uVar11,puVar13,lVar1);
  *(undefined **)(puVar3 + uVar15) = puVar2;
  *(long *)(puVar3 + uVar15 + 8) = lStack_98;
  pcStack_70 = FUN_103976d18;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100ab47f8;
  puStack_78 = &UNK_1106b3908;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_68);
  puVar3 = puStack_a0;
  puVar2 = puStack_a8;
  func_0x000107c4de70(puStack_a0);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  (**(code **)(lVar12 + 8))(lVar9,lVar1);
  return;
}



/* Entry: 103974fe0; end: 10397516b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103974fe0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar2 = PTR__OBJC_CLASS___SFSafariViewControllerConfiguration_1126d6d20;
  func_0x000107c610f8(PTR__OBJC_CLASS___SFSafariViewControllerConfiguration_1126d6d20);
  func_0x000107c453e4();
  func_0x000107c52bd8();
  lVar5 = *(long *)(unaff_x20 + _DAT_112fba890);
  (**(code **)(lVar6 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             lVar5 + _DAT_11380cde8,lVar1);
  puVar3 = PTR__OBJC_CLASS___SFSafariViewController_1126d6d00;
  func_0x000107c610f8(PTR__OBJC_CLASS___SFSafariViewController_1126d6d00);
  func_0x000107c61174(puVar2);
  puVar4 = puVar2;
  func_0x000107c5ed90();
  func_0x000107c48fcc(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c541ec(puVar3);
  func_0x000107c61174(puVar3);
  func_0x000107c56784();
  func_0x000107c5677c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c53fcc(puVar3);
  lVar1 = *(long *)(lVar5 + _DAT_112ff0bb8);
  if (lVar1 != 0) {
    func_0x000107c615f0(lVar1);
    func_0x000107c3e2c0();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10397516c; end: 103975c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397516c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  long *plVar10;
  long extraout_x8;
  long lVar11;
  uint uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  uint uStack_3cc;
  long lStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  uint uStack_3a4;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 auStack_1f8 [3];
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 auStack_1d0 [3];
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined *puStack_130;
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
  undefined8 uStack_70;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lStack_310 = (long)&uStack_3e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_300 = *(long *)(unaff_x20 + _DAT_112fba880);
  if (lStack_300 != 0) {
    lVar11 = lStack_300;
    uStack_378 = param_2;
    uStack_370 = param_3;
    func_0x000107c615f0();
    FUN_103975ed8();
    lVar13 = *(long *)(unaff_x20 + _DAT_112fba890);
    pcStack_390 = *(code **)(lVar16 + 0x10);
    lStack_2d8 = lVar11;
    (*pcStack_390)(lStack_310,lVar13 + _DAT_11380cde8,lVar5);
    lVar11 = _DAT_112ff0b70;
    func_0x000107c61428(lVar13 + _DAT_112ff0b70,auStack_148,0,0);
    lStack_308 = lVar5;
    if (*(long *)(lVar13 + lVar11) == 0) {
      func_0x000101424ef0(&puStack_130);
    }
    else {
      func_0x000107c61174();
      func_0x000104657bfc(&puStack_2c0);
      func_0x000101424fac(&puStack_2c0);
      uStack_88 = uStack_218;
      uStack_90 = uStack_220;
      uStack_78 = uStack_208;
      uStack_80 = uStack_210;
      uStack_70 = uStack_200;
      uStack_c8 = uStack_258;
      uStack_d0 = uStack_260;
      uStack_b8 = uStack_248;
      uStack_c0 = uStack_250;
      uStack_a8 = uStack_238;
      uStack_b0 = uStack_240;
      uStack_98 = uStack_228;
      uStack_a0 = uStack_230;
      uStack_108 = uStack_298;
      uStack_110 = uStack_2a0;
      uStack_f8 = uStack_288;
      uStack_100 = uStack_290;
      uStack_e8 = uStack_278;
      uStack_f0 = uStack_280;
      uStack_d8 = uStack_268;
      uStack_e0 = uStack_270;
      uStack_128 = uStack_2b8;
      puStack_130 = puStack_2c0;
      uStack_118 = uStack_2a8;
      uStack_120 = uStack_2b0;
    }
    lVar11 = _DAT_112ff0b90;
    uStack_398 = *(undefined8 *)(lVar13 + _DAT_112ff0bb0);
    func_0x000107c61428(lVar13 + _DAT_112ff0b90,auStack_160,0,0);
    lVar5 = _DAT_11380cdf8;
    uStack_3a4 = (uint)*(byte *)(lVar13 + lVar11);
    func_0x000107c61428(lVar13 + _DAT_11380cdf8,auStack_178,0,0);
    lVar5 = lVar13 + lVar5;
    func_0x000107c61618();
    uStack_380 = *(undefined8 *)(unaff_x20 + _DAT_112fba898);
    uStack_3c0 = *(undefined8 *)(unaff_x20 + _DAT_112fba928);
    uStack_388 = *(undefined8 *)(unaff_x20 + _DAT_112fba8a0);
    uStack_3b0 = *(undefined8 *)(unaff_x20 + _DAT_112fba930);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112fba8b0);
    lStack_318 = lVar5;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    uVar15 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112fba8b8) + _DAT_113011780);
    uVar17 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112fba8c0) + _DAT_11308d048);
    uStack_3a0 = *(undefined8 *)(unaff_x20 + _DAT_112fba8c8);
    uStack_358 = *(undefined8 *)(unaff_x20 + _DAT_112fba8e8);
    uStack_348 = uVar6;
    func_0x0001000285a8(0x112d65c48,&UNK_10d92a7e0);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112fba8a8);
    uStack_328 = uVar15;
    func_0x000107c6157c(uVar15);
    uStack_330 = uVar17;
    func_0x000107c6157c(uVar17);
    func_0x000107c4141c();
    func_0x000107c61180();
    uVar6 = uVar14;
    func_0x000107c41414();
    func_0x000107c61180();
    func_0x000107c615e8(uVar14);
    uVar14 = uVar6;
    func_0x0001000bda74();
    uStack_2e0 = uVar14;
    func_0x000107c61170(uVar6);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112fba8d0) + _DAT_113091988);
    func_0x0001000285a8(0x112fba970,&UNK_10dc2bec0);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112fba8d8);
    uStack_338 = uVar6;
    func_0x000107c6157c(uVar6);
    uVar6 = uVar15;
    func_0x000107c3cfe0();
    func_0x000107c61180();
    uVar14 = uVar6;
    func_0x0001000bda74();
    uStack_2e8 = uVar14;
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112e10cc8,&UNK_10d9ebe60);
    uVar6 = uVar15;
    func_0x000107c3dae4();
    func_0x000107c61180();
    uVar14 = uVar6;
    func_0x0001000bda74();
    uStack_2f0 = uVar14;
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112fba978,&UNK_10dc2bed0);
    func_0x000107c4d814();
    func_0x000107c61180();
    uVar6 = uVar15;
    func_0x0001000bda74();
    uStack_340 = uVar6;
    func_0x000107c61170(uVar15);
    func_0x0001000285a8(0x112d6e3a8,&UNK_10d930310);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112fba8e0);
    func_0x000107c4ec80();
    func_0x000107c61180();
    uVar6 = uVar14;
    func_0x0001000bda74();
    uStack_2f8 = uVar6;
    func_0x000107c61170(uVar14);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112fba8f8) + _DAT_113011748);
    func_0x0001000285a8(0x112fba980,&UNK_10dc2bee0);
    uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112fba920);
    uStack_350 = uVar6;
    func_0x000107c6157c(uVar6);
    func_0x000107c515b4();
    func_0x000107c61180();
    uVar6 = uVar14;
    func_0x0001000bda74();
    uStack_360 = uVar6;
    func_0x000107c61170(uVar14);
    lVar11 = _DAT_11380ce00;
    func_0x000107c61428(lVar13 + _DAT_11380ce00,auStack_190,0,0);
    lVar5 = _DAT_112ff0b80;
    lVar11 = *(long *)(lVar13 + lVar11);
    if (lVar11 == 0) {
      uStack_3cc = 2;
    }
    else {
      uVar12 = 0x100;
      if (*(char *)(lVar11 + _DAT_11308b4c8) == '\0') {
        uVar12 = 0;
      }
      uStack_3cc = 0x10000;
      if (*(char *)(lVar11 + _DAT_11308b4d0) == '\0') {
        uStack_3cc = 0;
      }
      uStack_3cc = uVar12 | *(byte *)(lVar11 + _DAT_11308b4c0) | uStack_3cc;
    }
    lStack_3c8 = lVar13;
    lStack_368 = lVar16;
    uStack_320 = param_1;
    func_0x000107c61428(lVar13 + _DAT_112ff0b80,auStack_1a8,0,0);
    uVar17 = *(undefined8 *)(lVar13 + lVar5);
    lVar13 = 0;
    uStack_3e0 = uVar17;
    FUN_10397c7bc();
    lStack_3b8 = lVar13;
    func_0x000107c610f8();
    uVar14 = 0;
    func_0x00010033c9bc();
    uVar6 = uStack_3c0;
    ppuStack_1b0 = &PTR_DAT_1106b43d8;
    auStack_1d0[0] = uStack_3c0;
    uVar15 = 0;
    uStack_1b8 = uVar14;
    func_0x00010033ca28();
    uVar14 = uStack_3b0;
    ppuStack_1d8 = &PTR_DAT_1106b46d8;
    auStack_1f8[0] = uStack_3b0;
    *(undefined8 *)(lVar13 + _DAT_112fbaa10) = 0;
    lVar16 = _DAT_112fbaa30;
    uStack_1e0 = uVar15;
    func_0x000107c61614(lVar13 + _DAT_112fbaa30,0);
    lVar5 = lVar13 + _DAT_112fbaa00;
    *(undefined8 *)(lVar5 + 8) = 0;
    func_0x000107c61614(lVar5,0);
    *(undefined8 *)(lVar13 + _DAT_112fbaa28) = 0;
    lVar11 = _DAT_112fbaa58;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c61174();
    uStack_3d8 = uVar17;
    func_0x000107c615f0(lStack_300);
    func_0x000107c615f0(lStack_2d8);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uVar14);
    func_0x000107c46ecc();
    puStack_2c0 = puVar7;
    func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
    func_0x000107c613fc();
    ppuVar8 = &puStack_2c0;
    func_0x00010042e6a0();
    *(undefined ***)(lVar13 + lVar11) = ppuVar8;
    *(undefined8 *)(lVar13 + _DAT_112fbaa98) = 0;
    *(undefined8 *)(lVar13 + _DAT_112fbaa18) = uStack_348;
    *(undefined8 *)(lVar13 + _DAT_112fba9a8) = uStack_320;
    (*pcStack_390)(lVar13 + _DAT_112fba988,lStack_310,lStack_308);
    *(char *)(lVar13 + _DAT_112fbaa70) = (char)uStack_3a4;
    func_0x000107c61604(lVar13 + lVar16,lStack_318);
    lVar16 = lStack_2d8;
    uVar4 = uStack_328;
    uVar3 = uStack_330;
    uVar17 = uStack_338;
    uVar15 = uStack_350;
    uVar6 = uStack_3a0;
    *(undefined8 *)(lVar13 + _DAT_112fba9f8) = uStack_328;
    *(undefined8 *)(lVar13 + _DAT_112fbaa78) = uStack_330;
    *(undefined8 *)(lVar13 + _DAT_112fbaa40) = uStack_3a0;
    *(undefined8 *)(lVar13 + _DAT_112fba9b8) = uStack_358;
    *(undefined8 *)(lVar13 + _DAT_112fba9d0) = uStack_2e0;
    *(undefined8 *)(lVar13 + _DAT_112fbaa80) = uStack_338;
    *(undefined8 *)(lVar13 + _DAT_112fbaa48) = uStack_2e8;
    *(undefined8 *)(lVar13 + _DAT_112fba9b0) = uStack_2f0;
    *(undefined8 *)(lVar13 + _DAT_112fbaa50) = uStack_340;
    *(undefined8 *)(lVar13 + _DAT_112fba9c0) = uStack_2f8;
    *(long *)(lVar13 + _DAT_112fbaa68) = lStack_2d8;
    *(undefined8 *)(lVar13 + _DAT_112fbaa60) = uStack_350;
    *(undefined ***)(lVar5 + 8) = &PTR_DAT_1106b38d8;
    func_0x000107c61604(lVar5);
    uVar14 = uStack_360;
    puVar1 = (undefined8 *)(lVar13 + _DAT_112fba990);
    puVar1[1] = uStack_128;
    *puVar1 = puStack_130;
    puVar1[7] = uStack_f8;
    puVar1[6] = uStack_100;
    puVar1[9] = uStack_e8;
    puVar1[8] = uStack_f0;
    puVar1[3] = uStack_118;
    puVar1[2] = uStack_120;
    puVar1[5] = uStack_108;
    puVar1[4] = uStack_110;
    puVar1[0xf] = uStack_b8;
    puVar1[0xe] = uStack_c0;
    puVar1[0x11] = uStack_a8;
    puVar1[0x10] = uStack_b0;
    puVar1[0xb] = uStack_d8;
    puVar1[10] = uStack_e0;
    puVar1[0xd] = uStack_c8;
    puVar1[0xc] = uStack_d0;
    puVar1[0x18] = uStack_70;
    puVar1[0x15] = uStack_88;
    puVar1[0x14] = uStack_90;
    puVar1[0x17] = uStack_78;
    puVar1[0x16] = uStack_80;
    puVar1[0x13] = uStack_98;
    puVar1[0x12] = uStack_a0;
    *(undefined8 *)(lVar13 + _DAT_112fba9a0) = uStack_398;
    *(long *)(lVar13 + _DAT_112fba9c8) = lStack_300;
    *(undefined8 *)(lVar13 + _DAT_112fbaa20) = uStack_360;
    puVar2 = (undefined2 *)(lVar13 + _DAT_112fbaa38);
    *(char *)(puVar2 + 1) = (char)(uStack_3cc >> 0x10);
    *puVar2 = (short)uStack_3cc;
    *(undefined8 *)(lVar13 + _DAT_112fbaa88) = uStack_3e0;
    func_0x000107c615f0();
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar17);
    func_0x000107c6157c(uVar15);
    func_0x000107c615f0(lVar16);
    uVar15 = uStack_3d8;
    func_0x000107c61174();
    pcStack_390 = (code *)uVar15;
    func_0x000107c61174();
    func_0x000107c615f0(uStack_320);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(uStack_358);
    func_0x000107c6157c(uStack_2e0);
    func_0x000107c6157c(uStack_2e8);
    func_0x000107c6157c(uStack_2f0);
    uVar17 = uStack_340;
    func_0x000107c6157c(uStack_340);
    func_0x000107c6157c(uStack_2f8);
    func_0x000107c6157c(uVar14);
    ppuVar8 = &puStack_130;
    func_0x000103976d74(ppuVar8,&puStack_2c0,0x112d7e768,&UNK_10d93c7c0);
    func_0x00010b8373e4();
    func_0x000107c61180();
    uVar15 = uStack_370;
    uVar14 = uStack_380;
    *(undefined ***)(lVar13 + _DAT_112fbaa90) = ppuVar8;
    puVar1 = (undefined8 *)(lVar13 + _DAT_112fba998);
    *puVar1 = uStack_378;
    puVar1[1] = uStack_370;
    *(undefined8 *)(lVar13 + _DAT_112fba9d8) = uStack_380;
    func_0x000103976dbc(auStack_1d0,lVar13 + _DAT_112fba9e0);
    uVar6 = uStack_388;
    *(undefined8 *)(lVar13 + _DAT_112fba9e8) = uStack_388;
    func_0x000103976dbc(auStack_1f8,lVar13 + _DAT_112fba9f0);
    puVar7 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_2c8 = lStack_3b8;
    lStack_2d0 = lVar13;
    func_0x000107c61434(uVar15);
    func_0x000107c61174(uVar14);
    func_0x000107c61174(uVar6);
    plVar9 = &lStack_2d0;
    func_0x000107c61154(plVar9,puVar7,0,0);
    lVar5 = _DAT_112fbaa90;
    uVar6 = *(undefined8 *)((long)plVar9 + _DAT_112fbaa90);
    plVar10 = plVar9;
    func_0x000107c61174();
    func_0x000107c53224(uVar6);
    func_0x000107c54b74(0x3ff0000000000000,*(undefined8 *)((long)plVar9 + lVar5));
    lVar5 = lStack_300;
    func_0x000107c5a048(plVar10);
    func_0x000107c5677c(plVar10);
    func_0x000107c615e8(lVar5);
    func_0x000107c61574(uStack_360);
    func_0x000107c61170(pcStack_390);
    func_0x000107c61170(plVar10);
    func_0x000107c615e8(lStack_318);
    FUN_103976960(&puStack_130,0x112d7e768,&UNK_10d93c7c0);
    func_0x000107c61170(uStack_348);
    func_0x000107c61574(uStack_328);
    func_0x000107c61574(uStack_330);
    func_0x000107c61574(uStack_2e0);
    func_0x000107c61574(uStack_338);
    func_0x000107c61574(uStack_2e8);
    func_0x000107c61574(uStack_2f0);
    func_0x000107c61574(uVar17);
    func_0x000107c61574(uStack_2f8);
    func_0x000107c615e8(lStack_2d8);
    func_0x000107c61574(uStack_350);
    (**(code **)(lStack_368 + 8))(lStack_310,lStack_308);
    func_0x0001000834e4(auStack_1f8);
    func_0x0001000834e4(auStack_1d0);
    func_0x000107c61604(unaff_x20 + _DAT_112fba888,plVar10);
    lVar16 = *(long *)(lStack_3c8 + _DAT_112ff0bb8);
    if (lVar16 != 0) {
      func_0x000107c615f0(lVar16);
      func_0x000107c3e2c0();
      func_0x000107c615e8(lVar16);
    }
    func_0x000107c61170(plVar10);
    func_0x000107c615e8(lVar5);
    func_0x000107c615e8(lStack_2d8);
  }
  return;
}



/* Entry: 103975c74; end: 103975d5f;  */

/* WARNING: Possible PIC construction at 0x000103975d40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103975d44) */

void FUN_103975c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1106b3940;
  func_0x000107c613fc(&UNK_1106b3940,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  puVar2 = &UNK_1106b3968;
  func_0x000107c613fc(&UNK_1106b3968,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dc2bef8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_1);
  func_0x000107c61434(param_4);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2bf08,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 103975d60; end: 103975d6b;  */

/* WARNING: Possible PIC construction at 0x000103975d40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103975d44) */

void FUN_103975d60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1106b3940;
  func_0x000107c613fc(&UNK_1106b3940,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  puVar3 = &UNK_1106b3968;
  func_0x000107c613fc(&UNK_1106b3968,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10dc2bef8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(param_1);
  func_0x000107c61434(uVar5);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2bf08,puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 103975d6c; end: 103975dff;  */

void FUN_103975d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = 0x112d45220;
  FUN_103976f54(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103975e00,uVar2,uVar3);
  return;
}



/* Entry: 103975e00; end: 103975e77;  */

void FUN_103975e00(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10397516c(*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),
                  *(undefined8 *)(unaff_x22 + 0x40));
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000103975e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 103975e78; end: 103975ebb;  */

void FUN_103975e78(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000103975eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 103975ebc; end: 103975ed7;  */

void FUN_103975ebc(long param_1,long param_2)

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



/* Entry: 103975ed8; end: 103975fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103975ed8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112fba900) + _DAT_11307fc48);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fba908);
  func_0x000107c61174(uVar1);
  func_0x000107c5c894(uVar4);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fba910);
  func_0x000107c4d80c(uVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bdb48;
  func_0x000107c610f8(PTR_PTR_1126bdb48);
  func_0x000107c46e24();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  return puVar3;
}



/* Entry: 103975fa4; end: 103976193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103975fa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112fba890);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_112ff0b88;
    func_0x000107c61428(lVar2 + _DAT_112ff0b88,auStack_80,0,0);
    lVar1 = lVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c5ed90();
      func_0x000107c5e18c(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61428(param_3 + 0x10,auStack_98,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112fba890);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_112ff0b88;
    func_0x000107c61428(lVar2 + _DAT_112ff0b88,auStack_b0,0,0);
    lVar1 = lVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c41c44(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  func_0x000107c61428(param_3 + 0x10,auStack_c8,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar2 = *(long *)(param_3 + _DAT_112fba890);
    func_0x000107c61174();
    func_0x000107c61170(param_3);
    lVar1 = _DAT_11380cdf0;
    func_0x000107c61428(lVar2 + _DAT_11380cdf0,auStack_e0,0,0);
    lVar1 = lVar2 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c5e1ac(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 103976194; end: 1039761f3; -[_TtC10WebBrowser20WebBrowserEntryPoint init] */

void FUN_103976194(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowser.WebBrowserEntryPoint",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039761c0);
  (*pcVar1)();
}



/* Entry: 1039761f4; end: 1039763bb; -[_TtC10WebBrowser20WebBrowserEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039761f4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba890));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba898));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba8f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba900));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba908));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba910));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba918));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba920));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba928));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fba930));
  FUN_103976960(param_1 + _DAT_112fba878,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fba880));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112fba888);
  return;
}



/* Entry: 1039763bc; end: 1039763c3;  */

undefined8 FUN_1039763bc(void)

{
  return 0;
}



/* Entry: 1039763c4; end: 10397644f; -[_TtC10WebBrowser20WebBrowserEntryPoint safariViewControllerDidFinish:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039763c4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380cdf0;
  lVar2 = *(long *)(param_1 + _DAT_112fba890);
  func_0x000107c61428(lVar2 + _DAT_11380cdf0,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c5e1ac(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 103976450; end: 10397695f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103976450(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar11 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar7 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = _DAT_112ff0b70;
  lVar10 = lVar7 - extraout_x12_00;
  lVar8 = *(long *)(unaff_x20 + _DAT_112fba890);
  func_0x000107c61428(lVar8 + _DAT_112ff0b70,auStack_90,0,0);
  if ((*(long *)(lVar8 + lVar6) != 0) &&
     (*(char *)(*(long *)(lVar8 + lVar6) + _DAT_11308b580) == '\x01')) {
    lVar6 = unaff_x20 + _DAT_112fba888;
    func_0x000107c61618();
    if (lVar6 != 0) {
      lVar2 = lVar6;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x103976960);
        (*pcVar9)();
      }
      lVar6 = lVar2;
      func_0x000107c5e3f8();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar6 != 0) {
        lVar2 = lVar6;
        func_0x000107c5e400();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        if (lVar2 != 0) {
          func_0x000107c61168(PTR__OBJC_CLASS___SKOverlay_1126b9488);
          func_0x000107c42070();
          func_0x000107c61170(lVar2);
        }
      }
    }
  }
  lVar6 = _DAT_112ff0b88;
  func_0x000107c61428(lVar8 + _DAT_112ff0b88,auStack_a8,0,0);
  lVar6 = lVar8 + lVar6;
  func_0x000107c61618();
  lVar2 = _DAT_11380cdf0;
  if (lVar6 == 0) {
    lVar6 = *(long *)(lVar8 + _DAT_112ff0bb8);
    if (lVar6 != 0) {
      puVar3 = &UNK_1106b3808;
      func_0x000107c613fc(&UNK_1106b3808,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      pcStack_e8 = FUN_103976a50;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      param_1 = 0x42000000;
      uStack_100 = 0x42000000;
      puStack_f8 = &UNK_1000b0c7c;
      puStack_f0 = &UNK_1106b3870;
      ppuVar4 = &puStack_108;
      puStack_e0 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_e0;
      func_0x000107c615f0(lVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c41864(lVar6);
      goto LAB_103976754;
    }
    func_0x000107c61428(lVar8 + _DAT_11380cdf0,&puStack_108,0,0);
    lVar6 = lVar8 + lVar2;
    func_0x000107c61618();
    if (lVar6 == 0) goto LAB_103976764;
    func_0x000107c5e1ac();
  }
  else {
    puVar3 = &UNK_1106b3808;
    func_0x000107c613fc(&UNK_1106b3808,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_e8 = (code *)0x103976fac;
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 0x42000000;
    uStack_100 = 0x42000000;
    puStack_f8 = &UNK_1000f6b44;
    puStack_f0 = &UNK_1106b3898;
    ppuVar4 = &puStack_108;
    puStack_e0 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_e0);
    func_0x000107c5e198(lVar6);
LAB_103976754:
    func_0x000107c60bd0(ppuVar4);
  }
  func_0x000107c615e8(lVar6);
LAB_103976764:
  lVar6 = _DAT_112fba878;
  func_0x000107c61428(unaff_x20 + _DAT_112fba878,auStack_c0,0,0);
  func_0x000103976d74(unaff_x20 + lVar6,lVar11,0x112d373d8,&UNK_10d9014c0);
  lVar2 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar1);
  if ((int)lVar2 == 1) {
    FUN_103976960(lVar11,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar10,lVar11,lVar1);
    puVar3 = PTR_PTR_1126a6d58;
    func_0x000107c610f8(PTR_PTR_1126a6d58);
    func_0x000107c453e4();
    uVar5 = *(undefined8 *)(lVar8 + _DAT_112ff0bb0);
    func_0x000104645890(uVar5);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar11);
    func_0x000107c5eea0(lVar7);
    func_0x000107c5ee68(lVar10);
    pcVar9 = *(code **)(lVar12 + 8);
    (*pcVar9)(lVar7,lVar1);
    func_0x000107bc0950(param_1,puVar3,uVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar5);
    (*pcVar9)(lVar10,lVar1);
    lVar11 = lStack_110;
    (**(code **)(lVar12 + 0x38))(lStack_110,1,1,lVar1);
    func_0x000107c61428(unaff_x20 + lVar6,auStack_d8,0x21,0);
    func_0x000100ed9cbc(lVar11,unaff_x20 + lVar6);
    func_0x000107c614a8(auStack_d8);
  }
  puVar3 = PTR_PTR_1126d6d78;
  func_0x000107c610f8(PTR_PTR_1126d6d78);
  func_0x000107c45528();
  lVar6 = *(long *)(unaff_x20 + _DAT_112fba880);
  if (lVar6 != 0) {
    func_0x000107c615f0(lVar6);
    func_0x000107c4b9c4();
    func_0x000107c615e8(lVar6);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 103976960; end: 103976a4f;  */

undefined8 FUN_103976960(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103976a50; end: 103976a67;  */

void FUN_103976a50(void)

{
  func_0x0001039769a0();
  return;
}



/* Entry: 103976a68; end: 103976a8f; -[_TtC10WebBrowser20WebBrowserEntryPoint dismissWebBrowser] */

void FUN_103976a68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103976450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103976a90; end: 103976b8f; -[_TtC10WebBrowser20WebBrowserEntryPoint didOpenDeepLinkWithUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103976a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c5edb4(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  lVar2 = _DAT_112ff0b88;
  lVar3 = *(long *)(param_1 + _DAT_112fba890);
  func_0x000107c61428(lVar3 + _DAT_112ff0b88,auStack_58,0,0);
  lVar3 = lVar3 + lVar2;
  func_0x000107c61618();
  func_0x000107c61174(param_1);
  if (lVar3 != 0) {
    lVar2 = param_1;
    func_0x000107c5ed90();
    func_0x000107c5e18c(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar2);
  }
  (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103976b90; end: 103976b97;  */

void FUN_103976b90(void)

{
  if (lRam0000000112fba960 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7933f0);
  return;
}



/* Entry: 103976b98; end: 103976bcf;  */

void FUN_103976b98(undefined8 param_1)

{
  if (lRam0000000112fba960 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7933f0);
  return;
}



/* Entry: 103976bd0; end: 103976c83;  */

void FUN_103976bd0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_e0 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  puStack_d8 = puStack_e0;
  puStack_d0 = puStack_e0;
  puStack_c8 = puStack_e0;
  puStack_c0 = puStack_e0;
  puStack_b8 = puStack_e0;
  puStack_b0 = puStack_e0;
  puStack_a8 = puStack_e0;
  puStack_a0 = puStack_e0;
  puStack_98 = puStack_e0;
  puStack_90 = puStack_e0;
  puStack_88 = puStack_e0;
  puStack_80 = puStack_e0;
  puStack_78 = puStack_e0;
  puStack_70 = puStack_e0;
  puStack_68 = puStack_e0;
  puStack_60 = puStack_e0;
  puStack_58 = puStack_e0;
  puStack_50 = puStack_e0;
  puStack_48 = puStack_e0;
  puStack_40 = puStack_e0;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dc2be88;
    puStack_28 = &UNK_10dc2bea0;
    func_0x000107c61630(param_1,0x100,0x18,&puStack_e0,param_1 + 0x50);
  }
  return;
}



/* Entry: 103976c84; end: 103976d17; -[_TtC10WebBrowser20WebBrowserEntryPoint didReceiveContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103976c84(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff0b88;
  lVar2 = *(long *)(param_1 + _DAT_112fba890);
  func_0x000107c61428(lVar2 + _DAT_112ff0b88,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c5e194(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 103976d18; end: 103976dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103976d18(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar1 + -8) + 0x40) +
                    (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8));
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar1 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112fba890);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_112ff0b88;
    func_0x000107c61428(lVar3 + _DAT_112ff0b88,auStack_80,0,0);
    lVar1 = lVar3 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      func_0x000107c5ed90();
      func_0x000107c5e18c(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar3);
    }
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_98,0,0);
  lVar1 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_112fba890);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_112ff0b88;
    func_0x000107c61428(lVar3 + _DAT_112ff0b88,auStack_b0,0,0);
    lVar1 = lVar3 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      func_0x000107c41c44(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  func_0x000107c61428(lVar2 + 0x10,auStack_c8,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112fba890);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    lVar1 = _DAT_11380cdf0;
    func_0x000107c61428(lVar3 + _DAT_11380cdf0,auStack_e0,0,0);
    lVar1 = lVar3 + lVar1;
    func_0x000107c61618();
    func_0x000107c61170(lVar3);
    if (lVar1 != 0) {
      func_0x000107c5e1ac(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 103976e00; end: 103976e63;  */

void FUN_103976e00(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103976e64;
  plVar7[7] = lVar4;
  plVar7[8] = lVar2;
  plVar7[5] = lVar5;
  plVar7[6] = lVar1;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar7[9] = lVar5;
  uVar6 = 0x112d45220;
  FUN_103976f54(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar4,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103975e00,lVar4,uVar6);
  return;
}



/* Entry: 103976e64; end: 103976ea7;  */

void FUN_103976e64(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103976ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 103976ea8; end: 103976f17;  */

void FUN_103976ea8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103976f18;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103976f18; end: 103976f53;  */

void FUN_103976f18(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103976f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103976f54; end: 103976f93;  */

void FUN_103976f54(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103976f94; end: 103976faf;  */

void FUN_103976f94(long param_1,long param_2)

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



/* Entry: 103976fb0; end: 10397721b;  */

undefined8
FUN_103976fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,long param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
             undefined8 param_26,undefined8 param_27,uint param_28,undefined4 param_29,
             undefined8 param_30,undefined8 param_31)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_9;
  func_0x0001000c6518(param_9,*(undefined8 *)(param_9 + 0x18));
  lVar2 = param_11;
  func_0x0001000c6518(param_11,*(undefined8 *)(param_11 + 0x18));
  func_0x00010397c4ec(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,param_10
                      ,lVar2,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19
                      ,param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,
                      param_28 & 0xffffff);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_10);
  func_0x000107c615e8(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61574(param_14);
  func_0x000107c61574(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61574(param_18);
  func_0x000107c61574(param_19);
  func_0x000107c61574(param_20);
  func_0x000107c61574(param_21);
  func_0x000107c61574(param_22);
  func_0x000107c61574(param_23);
  func_0x000107c61574(param_25);
  func_0x000107c615e8(param_26);
  func_0x000107c61574(param_27);
  func_0x000107c615e8(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c615e8(param_24);
  FUN_10397cc24(param_2,0x112d7e768,&UNK_10d93c7c0);
  func_0x0001000834e4(param_11);
  func_0x0001000834e4(param_9);
  return param_1;
}



/* Entry: 10397721c; end: 1039772c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10397721c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112fbaa98;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112fbaa98);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c610f8();
    func_0x000107c48c2c();
    func_0x000107c61180();
    func_0x000107c5317c();
    func_0x000107c53fcc(puVar3);
    func_0x000107c61170(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1039772c4; end: 1039772eb; -[_TtC10WebBrowser24WebBrowserViewController initWithCoder:] */

void FUN_1039772c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x00010397c910();
  return;
}



/* Entry: 1039772ec; end: 103978373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039772ec(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  ulong **ppuVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  uint uVar21;
  long lVar22;
  undefined1 *puVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 auStack_b40 [2];
  undefined2 uStack_b30;
  undefined1 auStack_b2e [6];
  undefined8 auStack_b28 [4];
  undefined1 auStack_b08 [8];
  undefined8 uStack_b00;
  undefined1 auStack_af8 [8];
  undefined8 uStack_af0;
  undefined1 auStack_ae8 [8];
  undefined8 uStack_ae0;
  undefined1 auStack_ad8 [8];
  undefined8 uStack_ad0;
  undefined1 auStack_ac8 [8];
  undefined8 uStack_ac0;
  undefined1 auStack_ab8 [8];
  undefined8 auStack_ab0 [2];
  undefined1 auStack_aa0 [8];
  undefined8 uStack_a98;
  undefined4 auStack_a90 [4];
  undefined1 auStack_a80 [8];
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  code *pcStack_a68;
  code *pcStack_a60;
  long lStack_a58;
  long lStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  ulong *puStack_a10;
  long lStack_a08;
  long lStack_a00;
  long *plStack_9f8;
  undefined1 *puStack_9f0;
  undefined8 uStack_9e8;
  long lStack_9e0;
  undefined1 auStack_9d8 [200];
  ulong *puStack_910;
  long lStack_908;
  long lStack_900;
  long lStack_8f8;
  long lStack_8f0;
  long lStack_8e8;
  long lStack_8e0;
  long lStack_8d8;
  long lStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  long lStack_8a8;
  long lStack_8a0;
  long lStack_898;
  long lStack_890;
  ulong uStack_888;
  long lStack_880;
  long lStack_878;
  long lStack_870;
  long lStack_868;
  long lStack_860;
  long lStack_858;
  long lStack_850;
  ulong *puStack_840;
  long lStack_838;
  long lStack_830;
  long lStack_828;
  long lStack_820;
  long lStack_818;
  long lStack_810;
  long lStack_808;
  long lStack_800;
  long lStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  long lStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  long lStack_7c0;
  ulong uStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  long lStack_798;
  long lStack_790;
  long lStack_788;
  long lStack_780;
  long lStack_770;
  long lStack_768;
  ulong *puStack_760;
  long lStack_758;
  long lStack_750;
  long lStack_748;
  long lStack_740;
  long lStack_738;
  long lStack_730;
  long lStack_728;
  long lStack_720;
  long lStack_718;
  long lStack_710;
  long lStack_708;
  long lStack_700;
  long lStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  ulong uStack_6d8;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  ulong *puStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  ulong uStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  ulong *puStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  ulong uStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  ulong *puStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  ulong uStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  undefined1 auStack_368 [40];
  undefined1 auStack_340 [40];
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  ulong *puStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  ulong *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  func_0x000107c614f0();
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  puStack_9f0 = auStack_a80 + -extraout_x8;
  func_0x000107c5ede0();
  lVar22 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar25 = (long)(auStack_a80 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61154(&stack0xfffffffffffffce8,PTR_s_viewDidLoad_112684cd8);
  pcStack_a60 = *(code **)(lVar22 + 0x10);
  lStack_a08 = lVar25;
  lStack_a00 = lVar22;
  lStack_9e0 = lVar6;
  (*pcStack_a60)(lVar25,unaff_x20 + _DAT_112fba988,lVar6);
  plVar10 = (long *)(unaff_x20 + _DAT_112fba990);
  uStack_b8 = plVar10[0x11];
  lStack_c0 = plVar10[0x10];
  lStack_a8 = plVar10[0x13];
  lStack_b0 = plVar10[0x12];
  lStack_98 = plVar10[0x15];
  lStack_a0 = plVar10[0x14];
  lStack_88 = plVar10[0x17];
  lStack_90 = plVar10[0x16];
  lStack_f8 = plVar10[9];
  lStack_100 = plVar10[8];
  lStack_e8 = plVar10[0xb];
  lStack_f0 = plVar10[10];
  lStack_d8 = plVar10[0xd];
  lStack_e0 = plVar10[0xc];
  lStack_c8 = plVar10[0xf];
  lStack_d0 = plVar10[0xe];
  lStack_138 = plVar10[1];
  puStack_140 = (ulong *)*plVar10;
  lStack_128 = plVar10[3];
  lStack_130 = plVar10[2];
  lStack_118 = plVar10[5];
  lStack_120 = plVar10[4];
  lStack_108 = plVar10[7];
  lStack_110 = plVar10[6];
  lStack_80 = plVar10[0x18];
  uStack_a28 = *(undefined8 *)(unaff_x20 + _DAT_112fba998);
  uStack_a30 = ((undefined8 *)(unaff_x20 + _DAT_112fba998))[1];
  uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112fba9a0);
  uStack_9e8 = *(undefined8 *)(unaff_x20 + _DAT_112fba9a8);
  uStack_a38 = *(undefined8 *)(unaff_x20 + _DAT_112fba9b0);
  uStack_a48 = *(undefined8 *)(unaff_x20 + _DAT_112fba9b8);
  uStack_a40 = *(undefined8 *)(unaff_x20 + _DAT_112fba9c0);
  uStack_a18 = *(undefined8 *)(unaff_x20 + _DAT_112fba9c8);
  func_0x0001000d224c(&puStack_5d0);
  if (puStack_5d0 == (ulong *)0x0) {
LAB_103977514:
    puStack_a10 = (ulong *)0x0;
  }
  else {
    puVar7 = puStack_5d0;
    func_0x000107c409cc();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_5d0);
    if (puVar7 == (ulong *)0x0) goto LAB_103977514;
    puVar8 = puVar7;
    func_0x000107c40978();
    func_0x000107c61180();
    puStack_a10 = puVar8;
    func_0x000107c615e8(puVar7);
  }
  uStack_a78 = *(undefined8 *)(unaff_x20 + _DAT_112fba9d8);
  FUN_10397c71c(unaff_x20 + _DAT_112fba9e0,auStack_340);
  uStack_a20 = *(undefined8 *)(unaff_x20 + _DAT_112fba9e8);
  FUN_10397c71c(unaff_x20 + _DAT_112fba9f0,auStack_368);
  uStack_a70 = *(undefined8 *)(unaff_x20 + _DAT_112fba9f8);
  lVar9 = 0;
  FUN_103973d20();
  lVar22 = lVar9;
  func_0x000107c610f8();
  lVar6 = _DAT_112fba848;
  func_0x000107c61614(lVar22 + _DAT_112fba848,0);
  func_0x000107c61604(lVar22 + lVar6);
  plVar10 = &lStack_378;
  lStack_378 = lVar22;
  lStack_370 = lVar9;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  lVar6 = unaff_x20 + _DAT_112fbaa00;
  plStack_9f8 = plVar10;
  func_0x000107c61618();
  lVar11 = 0;
  FUN_103985278();
  lStack_a58 = lVar11;
  func_0x000107c610f8();
  lVar22 = _DAT_112fbaae8;
  func_0x000107c61614(lVar11 + _DAT_112fbaae8,0);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar11 + _DAT_112fbaaf0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar11 + _DAT_112fbaaf8) = puVar12;
  lVar9 = _DAT_112fbab00;
  puVar12 = PTR__OBJC_CLASS___UIRefreshControl_1126d6e28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar11 + lVar9) = puVar12;
  *(undefined1 *)(lVar11 + _DAT_112fbab08) = 0;
  *(undefined8 *)(lVar11 + _DAT_112fbab10) = 0;
  *(undefined8 *)(lVar11 + _DAT_112fbab18) = 0;
  pcStack_a68 = *(code **)(lStack_a00 + 0x38);
  (*pcStack_a68)(lVar11 + _DAT_11380c040,1,1,lStack_9e0);
  puVar1 = (undefined8 *)(lVar11 + _DAT_112fbab20);
  *(undefined4 *)(lVar25 + -0x10) = 1;
  *(undefined8 *)(lVar25 + -0x18) = 0;
  *(undefined1 *)(lVar25 + -0x20) = 1;
  *(undefined8 *)(lVar25 + -0x28) = 0;
  *(undefined8 *)(lVar25 + -0x30) = 0;
  *(undefined1 *)(lVar25 + -0x38) = 1;
  *(undefined8 *)(lVar25 + -0x40) = 0;
  *(undefined1 *)(lVar25 + -0x48) = 1;
  *(undefined8 *)(lVar25 + -0x50) = 0;
  *(undefined1 *)(lVar25 + -0x58) = 1;
  *(undefined8 *)(lVar25 + -0x60) = 0;
  *(undefined1 *)(lVar25 + -0x68) = 1;
  *(undefined8 *)(lVar25 + -0x70) = 0;
  *(undefined1 *)(lVar25 + -0x78) = 1;
  *(undefined8 *)(lVar25 + -0x80) = 0;
  *(undefined1 *)(lVar25 + -0x88) = 1;
  *(undefined8 *)(lVar25 + -0x90) = 0;
  *(undefined8 *)(lVar25 + -0x98) = 0;
  *(undefined8 *)(lVar25 + -0xa0) = 0;
  *(undefined8 *)(lVar25 + -0xa8) = 0;
  *(undefined1 *)(lVar25 + -0xae) = 2;
  *(undefined2 *)(lVar25 + -0xb0) = 0x201;
  *(undefined8 *)(lVar25 + -0xb8) = 0;
  *(undefined8 *)(lVar25 + -0xc0) = 0;
  func_0x000104642684(&uStack_308,2,0,0,0,0,0,1,0);
  puVar7 = puStack_a10;
  uVar17 = uStack_a78;
  puVar1[0x19] = uStack_240;
  puVar1[0x18] = uStack_248;
  puVar1[0x1b] = uStack_230;
  puVar1[0x1a] = uStack_238;
  puVar1[0x1d] = uStack_220;
  puVar1[0x1c] = uStack_228;
  *(undefined4 *)(puVar1 + 0x1e) = uStack_218;
  puVar1[0x11] = uStack_280;
  puVar1[0x10] = uStack_288;
  puVar1[0x13] = uStack_270;
  puVar1[0x12] = uStack_278;
  puVar1[0x15] = uStack_260;
  puVar1[0x14] = uStack_268;
  puVar1[0x17] = uStack_250;
  puVar1[0x16] = uStack_258;
  puVar1[9] = uStack_2c0;
  puVar1[8] = uStack_2c8;
  puVar1[0xb] = uStack_2b0;
  puVar1[10] = uStack_2b8;
  puVar1[0xd] = uStack_2a0;
  puVar1[0xc] = uStack_2a8;
  puVar1[0xf] = uStack_290;
  puVar1[0xe] = uStack_298;
  puVar1[1] = uStack_300;
  *puVar1 = uStack_308;
  puVar1[3] = uStack_2f0;
  puVar1[2] = uStack_2f8;
  puVar1[5] = uStack_2e0;
  puVar1[4] = uStack_2e8;
  puVar1[7] = uStack_2d0;
  puVar1[6] = uStack_2d8;
  *(undefined8 *)(lVar11 + _DAT_112fbab28) = 0;
  plVar10 = (long *)(lVar11 + _DAT_112fbab30);
  plVar10[1] = lStack_138;
  *plVar10 = (long)puStack_140;
  plVar10[7] = lStack_108;
  plVar10[6] = lStack_110;
  plVar10[9] = lStack_f8;
  plVar10[8] = lStack_100;
  plVar10[3] = lStack_128;
  plVar10[2] = lStack_130;
  plVar10[5] = lStack_118;
  plVar10[4] = lStack_120;
  plVar10[0xf] = lStack_c8;
  plVar10[0xe] = lStack_d0;
  plVar10[0x11] = uStack_b8;
  plVar10[0x10] = lStack_c0;
  plVar10[0xb] = lStack_e8;
  plVar10[10] = lStack_f0;
  plVar10[0xd] = lStack_d8;
  plVar10[0xc] = lStack_e0;
  plVar10[0x18] = lStack_80;
  plVar10[0x15] = lStack_98;
  plVar10[0x14] = lStack_a0;
  plVar10[0x17] = lStack_88;
  plVar10[0x16] = lStack_90;
  plVar10[0x13] = lStack_a8;
  plVar10[0x12] = lStack_b0;
  *(undefined8 *)(lVar11 + _DAT_112fbab38) = uVar27;
  *(undefined8 *)(lVar11 + _DAT_112fbab40) = uStack_9e8;
  *(undefined8 *)(lVar11 + _DAT_112fbab48) = uStack_a18;
  *(ulong **)(lVar11 + _DAT_112fbab50) = puStack_a10;
  *(undefined8 *)(lVar11 + _DAT_112fbab58) = uStack_a78;
  FUN_10397c71c(auStack_340,lVar11 + _DAT_112fbab60);
  *(undefined8 *)(lVar11 + _DAT_112fbab68) = uStack_a20;
  FUN_10397c71c(auStack_368,lVar11 + _DAT_112fbab70);
  *(long **)(lVar11 + _DAT_112fbab78) = plStack_9f8;
  lStack_a50 = lVar6;
  func_0x000107c61604(lVar11 + lVar22,lVar6);
  uVar27 = uStack_a70;
  *(undefined8 *)(lVar11 + _DAT_112fbab80) = uStack_a70;
  func_0x000101424ef0(&puStack_440);
  iVar5 = (int)&puStack_508;
  lStack_528 = lStack_98;
  lStack_530 = lStack_a0;
  lStack_518 = lStack_88;
  lStack_520 = lStack_90;
  lStack_568 = lStack_d8;
  lStack_570 = lStack_e0;
  lStack_558 = lStack_c8;
  lStack_560 = lStack_d0;
  uStack_548 = uStack_b8;
  lStack_550 = lStack_c0;
  lStack_538 = lStack_a8;
  lStack_540 = lStack_b0;
  lStack_5a8 = lStack_118;
  lStack_5b0 = lStack_120;
  lStack_598 = lStack_108;
  lStack_5a0 = lStack_110;
  lStack_588 = lStack_f8;
  lStack_590 = lStack_100;
  lStack_578 = lStack_e8;
  lStack_580 = lStack_f0;
  lStack_5c8 = lStack_138;
  puStack_5d0 = puStack_140;
  lStack_5b8 = lStack_128;
  lStack_5c0 = lStack_130;
  lStack_460 = lStack_398;
  lStack_468 = lStack_3a0;
  lStack_450 = lStack_388;
  lStack_458 = lStack_390;
  lStack_4a0 = lStack_3d8;
  lStack_4a8 = lStack_3e0;
  lStack_490 = lStack_3c8;
  lStack_498 = lStack_3d0;
  uStack_480 = uStack_3b8;
  lStack_488 = lStack_3c0;
  lStack_470 = lStack_3a8;
  lStack_478 = lStack_3b0;
  lStack_4c0 = lStack_3f8;
  lStack_4c8 = lStack_400;
  lStack_4b0 = lStack_3e8;
  lStack_4b8 = lStack_3f0;
  lStack_4f0 = lStack_428;
  lStack_4f8 = lStack_430;
  lStack_4e0 = lStack_418;
  lStack_4e8 = lStack_420;
  lStack_4d0 = lStack_408;
  lStack_4d8 = lStack_410;
  lStack_510 = lStack_80;
  lStack_448 = lStack_380;
  lStack_500 = lStack_438;
  puStack_508 = puStack_440;
  iVar4 = (int)&puStack_5d0;
  func_0x000101424a7c();
  if (iVar4 == 1) {
    func_0x000101424a7c();
    if (iVar5 == 1) {
      lStack_6b8 = lStack_528;
      lStack_6c0 = lStack_530;
      lStack_6a8 = lStack_518;
      lStack_6b0 = lStack_520;
      lStack_6a0 = lStack_510;
      lStack_6f8 = lStack_568;
      lStack_700 = lStack_570;
      lStack_6e8 = lStack_558;
      lStack_6f0 = lStack_560;
      uStack_6d8 = uStack_548;
      lStack_6e0 = lStack_550;
      lStack_6c8 = lStack_538;
      lStack_6d0 = lStack_540;
      lStack_738 = lStack_5a8;
      lStack_740 = lStack_5b0;
      lStack_728 = lStack_598;
      lStack_730 = lStack_5a0;
      lStack_718 = lStack_588;
      lStack_720 = lStack_590;
      lStack_708 = lStack_578;
      lStack_710 = lStack_580;
      lStack_758 = lStack_5c8;
      puStack_760 = puStack_5d0;
      lStack_748 = lStack_5b8;
      lStack_750 = lStack_5c0;
      func_0x000101424f14(&puStack_140,&puStack_210);
      func_0x000101424f14(&puStack_140,&puStack_210);
      func_0x000107c615f0(puVar7);
      func_0x000107c61174(uVar17);
      func_0x000107c61174(uStack_a20);
      plVar10 = plStack_9f8;
      func_0x000107c61174(plStack_9f8);
      func_0x000107c6157c(uVar27);
      func_0x000107c615f0(uStack_9e8);
      func_0x000107c615f0(uStack_a18);
      FUN_10397cc24(&puStack_760,0x112d7e768,&UNK_10d93c7c0);
      uVar21 = 0;
      goto LAB_103977c80;
    }
  }
  else {
    lStack_798 = lStack_528;
    lStack_7a0 = lStack_530;
    lStack_788 = lStack_518;
    lStack_790 = lStack_520;
    lStack_780 = lStack_510;
    lStack_7d8 = lStack_568;
    lStack_7e0 = lStack_570;
    lStack_7c8 = lStack_558;
    lStack_7d0 = lStack_560;
    uStack_7b8 = uStack_548;
    lStack_7c0 = lStack_550;
    lStack_7a8 = lStack_538;
    lStack_7b0 = lStack_540;
    lStack_818 = lStack_5a8;
    lStack_820 = lStack_5b0;
    lStack_808 = lStack_598;
    lStack_810 = lStack_5a0;
    lStack_7f8 = lStack_588;
    lStack_800 = lStack_590;
    lStack_7e8 = lStack_578;
    lStack_7f0 = lStack_580;
    lStack_838 = lStack_5c8;
    puStack_840 = puStack_5d0;
    lStack_828 = lStack_5b8;
    lStack_830 = lStack_5c0;
    func_0x000101424a7c();
    if (iVar5 != 1) {
      lStack_868 = lStack_460;
      lStack_870 = lStack_468;
      lStack_858 = lStack_450;
      lStack_860 = lStack_458;
      lStack_8a8 = lStack_4a0;
      lStack_8b0 = lStack_4a8;
      lStack_898 = lStack_490;
      lStack_8a0 = lStack_498;
      uStack_888 = uStack_480;
      lStack_890 = lStack_488;
      lStack_878 = lStack_470;
      lStack_880 = lStack_478;
      lStack_8e8 = lStack_4e0;
      lStack_8f0 = lStack_4e8;
      lStack_8d8 = lStack_4d0;
      lStack_8e0 = lStack_4d8;
      lStack_8c8 = lStack_4c0;
      lStack_8d0 = lStack_4c8;
      lStack_8b8 = lStack_4b0;
      lStack_8c0 = lStack_4b8;
      lStack_908 = lStack_500;
      puStack_910 = puStack_508;
      lStack_8f8 = lStack_4f0;
      lStack_900 = lStack_4f8;
      lStack_6b8 = lStack_460;
      lStack_6c0 = lStack_468;
      lStack_6a8 = lStack_450;
      lStack_6b0 = lStack_458;
      lStack_6f8 = lStack_4a0;
      lStack_700 = lStack_4a8;
      lStack_6e8 = lStack_490;
      lStack_6f0 = lStack_498;
      uStack_6d8 = uStack_480;
      lStack_6e0 = lStack_488;
      lStack_6c8 = lStack_470;
      lStack_6d0 = lStack_478;
      lStack_738 = lStack_4e0;
      lStack_740 = lStack_4e8;
      lStack_728 = lStack_4d0;
      lStack_730 = lStack_4d8;
      lStack_718 = lStack_4c0;
      lStack_720 = lStack_4c8;
      lStack_708 = lStack_4b0;
      lStack_710 = lStack_4b8;
      lStack_758 = lStack_500;
      puStack_760 = puStack_508;
      lStack_748 = lStack_4f0;
      lStack_750 = lStack_4f8;
      lStack_178 = lStack_7a8;
      lStack_180 = lStack_7b0;
      lStack_168 = lStack_798;
      lStack_170 = lStack_7a0;
      lStack_158 = lStack_788;
      lStack_160 = lStack_790;
      lStack_1b8 = lStack_7e8;
      lStack_1c0 = lStack_7f0;
      lStack_1a8 = lStack_7d8;
      lStack_1b0 = lStack_7e0;
      lStack_850 = lStack_448;
      lStack_6a0 = lStack_448;
      lStack_150 = lStack_780;
      lStack_198 = lStack_7c8;
      lStack_1a0 = lStack_7d0;
      uStack_188 = uStack_7b8;
      lStack_190 = lStack_7c0;
      lStack_1e8 = lStack_818;
      lStack_1f0 = lStack_820;
      lStack_1d8 = lStack_808;
      lStack_1e0 = lStack_810;
      lStack_1c8 = lStack_7f8;
      lStack_1d0 = lStack_800;
      lStack_208 = lStack_838;
      puStack_210 = puStack_840;
      lStack_1f8 = lStack_828;
      lStack_200 = lStack_830;
      func_0x000101424f14(&puStack_140,auStack_9d8);
      func_0x000101424f14(&puStack_140,auStack_9d8);
      func_0x000107c615f0(puVar7);
      func_0x000107c61174(uVar17);
      func_0x000107c61174(uStack_a20);
      plVar10 = plStack_9f8;
      func_0x000107c61174(plStack_9f8);
      func_0x000107c6157c(uVar27);
      func_0x000107c615f0(uStack_9e8);
      func_0x000107c615f0(uStack_a18);
      ppuVar13 = &puStack_210;
      func_0x000104641a24(ppuVar13,&puStack_760);
      FUN_10397cc24(&puStack_910,0x112d7e768,&UNK_10d93c7c0);
      FUN_10397cc24(&puStack_5d0,0x112d7e768,&UNK_10d93c7c0);
      uVar21 = (uint)ppuVar13 ^ 1;
      goto LAB_103977c80;
    }
  }
  func_0x000107c610b4(&puStack_760,&puStack_5d0,400);
  func_0x000101424f14(&puStack_140,&puStack_210);
  func_0x000101424f14(&puStack_140,&puStack_210);
  func_0x000107c615f0(puVar7);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uStack_a20);
  plVar10 = plStack_9f8;
  func_0x000107c61174(plStack_9f8);
  func_0x000107c6157c(uVar27);
  func_0x000107c615f0(uStack_9e8);
  func_0x000107c615f0(uStack_a18);
  FUN_10397cc24(&puStack_760,0x112fbaa08,&UNK_10dc2bf10);
  uVar21 = 1;
LAB_103977c80:
  lVar6 = lStack_9e0;
  puVar23 = puStack_9f0;
  (*pcStack_a60)(puStack_9f0,lStack_a08,lStack_9e0);
  (*pcStack_a68)(puVar23,0,1,lVar6);
  uVar26 = uStack_b8;
  iVar5 = (int)&puStack_140;
  func_0x000101424a7c();
  if ((iVar5 == 1) || ((uVar26 & 1) == 0)) {
    func_0x000103c56918(0);
    uVar26 = (ulong)(uVar21 & 1);
    puVar23 = puStack_9f0;
    func_0x000103c55984(uVar26);
  }
  else {
    uVar26 = 0;
    puVar23 = (undefined1 *)0x0;
  }
  func_0x0001000d224c(&puStack_840);
  puVar7 = puStack_840;
  uVar27 = uStack_a28;
  func_0x000107c5fadc(uStack_a28,uStack_a30);
  if (puVar23 == (undefined1 *)0x0) {
    uVar24 = 0;
  }
  else {
    func_0x000107c61434(puVar23);
    uVar24 = uVar26;
    func_0x000107c5fadc(uVar26,puVar23);
    func_0x000107c6142c(puVar23);
  }
  puVar8 = puVar7;
  func_0x000107c443b8();
  func_0x000107c61180();
  func_0x000107c615e8(puVar7);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar24);
  puVar14 = (ulong *)0x0;
  func_0x000103c43334();
  puVar7 = puVar8;
  func_0x000107c61480(puVar8,puVar14);
  if (puVar7 == (ulong *)0x0) {
    func_0x000107c61170(puVar8);
    uVar27 = 0;
    func_0x000103c56918(0);
    func_0x000103c558f8();
    if (puVar23 == (undefined1 *)0x0) {
      uVar26 = 0;
    }
    else {
      func_0x000107c5fadc(uVar26,puVar23);
      func_0x000107c6142c(puVar23);
    }
    func_0x000107c5284c(uVar27);
    func_0x000107c61170(uVar26);
    func_0x000107c610f8();
    func_0x000107c469b0(0,0,0,0);
    pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar14) + 0x88);
    func_0x000107c61174();
    uVar17 = uStack_a30;
    func_0x000107c61434(uStack_a30);
    (*pcVar3)(uStack_a28,uVar17);
    func_0x000107c61170(puVar14);
    func_0x000103c55a80(puVar14);
    func_0x000107c61170(uVar27);
    FUN_10397cc24(puStack_9f0,0x112d36580,&UNK_10d9016d0);
    plVar10 = plStack_9f8;
  }
  else {
    FUN_10397cc24(puStack_9f0,0x112d36580,&UNK_10d9016d0);
    func_0x000107c6142c(puVar23);
    puVar14 = puVar7;
  }
  *(ulong **)(lVar11 + _DAT_112fbab88) = puVar14;
  func_0x000103c483bc(0);
  func_0x000107c610f8();
  uVar2 = uStack_9e8;
  func_0x000107c615f0(uStack_9e8);
  func_0x000107c61174();
  uVar17 = uStack_a38;
  func_0x000107c6157c(uStack_a38);
  uVar15 = uStack_a48;
  func_0x000107c61174(uStack_a48);
  uVar27 = uStack_a40;
  func_0x000107c6157c(uStack_a40);
  func_0x000103c45ff8(puVar14,uVar17,uVar2,uVar15,uVar27);
  *(ulong **)(lVar11 + _DAT_112fbab90) = puVar14;
  lStack_768 = lStack_a58;
  plVar16 = &lStack_770;
  lStack_770 = lVar11;
  func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
  func_0x000107c61180();
  FUN_10397defc();
  func_0x000107c61170(plVar10);
  func_0x000107c615e8(lStack_a50);
  func_0x000107c61170(plVar16);
  func_0x000107c615e8(puStack_a10);
  func_0x0001000834e4(auStack_368);
  func_0x0001000834e4(auStack_340);
  (**(code **)(lStack_a00 + 8))(lStack_a08,lStack_9e0);
  lVar6 = _DAT_112fbaa10;
  func_0x000107c61428(unaff_x20 + _DAT_112fbaa10,&puStack_840,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + lVar6);
  *(long **)(unaff_x20 + lVar6) = plVar16;
  func_0x000107c61170(uVar17);
  FUN_103979940();
  uVar27 = uVar17;
  FUN_103979aec();
  puVar12 = PTR_PTR_1126ad820;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar27);
  func_0x000107c61174();
  uVar27 = 0x65775f617265706f;
  func_0x000107c5fadc(0x65775f617265706f,0xee00776569765f62);
  func_0x000107c520f4(puVar12);
  func_0x000107c61170(uVar27);
  func_0x000107c5a050(puVar12);
  lVar22 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar22 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103978364);
    (*pcVar3)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar22);
  lVar22 = 0x112d360b8;
  FUN_10397bf00(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar22 + 0x18) = 9;
  *(undefined8 *)(lVar22 + 0x10) = 4;
  puVar18 = puVar12;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar25 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar25 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103978368);
    (*pcVar3)();
  }
  lVar9 = lVar25;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar25);
  puVar19 = puVar18;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar18);
  func_0x000107c61170(lVar9);
  *(undefined **)(lVar22 + 0x20) = puVar19;
  puVar18 = puVar12;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar25 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar25 != 0) {
    lVar9 = lVar25;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar25);
    puVar19 = puVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    func_0x000107c61170(lVar9);
    *(undefined **)(lVar22 + 0x28) = puVar19;
    puVar18 = puVar12;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar25 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar25 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103978370);
      (*pcVar3)();
    }
    lVar9 = lVar25;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar25);
    puVar19 = puVar18;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    func_0x000107c61170(lVar9);
    *(undefined **)(lVar22 + 0x30) = puVar19;
    puVar18 = puVar12;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    lVar25 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar25 != 0) {
      puVar19 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar9 = lVar25;
      func_0x000107c5ce8c(lVar25);
      func_0x000107c61180();
      func_0x000107c61170(lVar25);
      puVar20 = puVar18;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar18);
      func_0x000107c61170(lVar9);
      *(undefined **)(lVar22 + 0x38) = puVar20;
      uVar27 = 0;
      FUN_10397cb5c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar25 = lVar22;
      func_0x000107c5fc48(lVar22,uVar27);
      func_0x000107c61574(lVar22);
      func_0x000107c3d048(puVar19);
      func_0x000107c61170(lVar25);
      if (*(long *)(unaff_x20 + lVar6) != 0) {
        uVar17 = *(undefined8 *)(*(long *)(unaff_x20 + lVar6) + _DAT_112fbab88);
        func_0x000107c61174(uVar17);
        uVar27 = uVar17;
        FUN_10397721c();
        func_0x000107c3d6fc(uVar17);
        func_0x000107c61170(uVar17);
        func_0x000107c61170(uVar27);
      }
      FUN_103978374();
      FUN_103978524();
      func_0x000107c61170(puVar12);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103978374);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10397836c);
  (*pcVar3)();
}



/* Entry: 103978374; end: 103978523;  */

/* WARNING: Possible PIC construction at 0x00010397841c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039784f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103978420) */
/* WARNING: Removing unreachable block (ram,0x0001039784f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103978374(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(unaff_x20 + _DAT_112fbaa88) == 0) {
    if (*(char *)(unaff_x20 + _DAT_112fbaa70) != '\x01') {
      lVar2 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
      puVar7 = auStack_68 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar9 = (long)puVar7 - extraout_x12;
      lVar2 = 0;
      func_0x000107c5ede0();
      lVar11 = *(long *)(lVar2 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
      lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      uVar6 = lVar8 - extraout_x12_00;
      uVar3 = uVar6;
      (**(code **)(lVar11 + 0x10))(uVar6,unaff_x20 + _DAT_112fba988,lVar2);
      FUN_10397ba40();
      if ((uVar3 & 1) != 0) {
        func_0x000103c524b0(lVar9);
        func_0x0001001021cc(lVar9,puVar7);
        pcVar10 = *(code **)(lVar11 + 0x30);
        puVar4 = puVar7;
        (*pcVar10)(puVar7,1,lVar2);
        if ((int)puVar4 == 1) {
          pcVar5 = *(code **)(lVar11 + 0x20);
          (*pcVar5)(lVar8,uVar6,lVar2);
          puVar4 = puVar7;
          (*pcVar10)(puVar7,1,lVar2);
          if ((int)puVar4 != 1) {
            FUN_10397cc24(puVar7,0x112d36580,&UNK_10d9016d0);
          }
        }
        else {
          (**(code **)(lVar11 + 8))(uVar6,lVar2);
          pcVar5 = *(code **)(lVar11 + 0x20);
          (*pcVar5)(lVar8,puVar7,lVar2);
        }
        (*pcVar5)(uVar6,lVar8,lVar2);
      }
      lVar8 = _DAT_112fbaa10;
      func_0x000107c61428(unaff_x20 + _DAT_112fbaa10,auStack_68,0x20,0);
      lVar8 = *(long *)(unaff_x20 + lVar8);
      if (lVar8 == 0) {
        (**(code **)(lVar11 + 8))(uVar6,lVar2);
        func_0x000107c614a8(auStack_68);
      }
      else {
        func_0x000107c614a8(auStack_68);
        func_0x000107c61174(lVar8);
        FUN_10397d968(uVar6);
        func_0x000107c61170(lVar8);
        (**(code **)(lVar11 + 8))(uVar6,lVar2);
      }
      return;
    }
    puVar1 = &UNK_1106b3c70;
    func_0x000107c613fc(&UNK_1106b3c70,0x18,7);
    *(long *)(puVar1 + 0x10) = unaff_x20;
    func_0x000107c61174();
    puStack_70 = PTR___sytN_11034f1b0 + 8;
    func_0x0001001ca524(6,0,8,3,0,0,&UNK_10dc2c080,puVar1);
  }
  else {
    func_0x000107c61174();
    func_0x000107c43bf4();
    func_0x000107c61180();
    puVar1 = &UNK_1106b39c8;
    func_0x000107c613fc(&UNK_1106b39c8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    func_0x000107c60bc4(&puStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103978524; end: 103978773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103978524(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_438 [248];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uVar1 = 2;
  uVar4 = 0;
  func_0x000104642684(&uStack_248,2,0,0,0,0,0,1,0,0,0,0x201);
  uStack_148 = uStack_238;
  uStack_150 = uStack_240;
  uStack_278 = uStack_180;
  uStack_280 = uStack_188;
  uStack_268 = uStack_170;
  uStack_270 = uStack_178;
  uStack_258 = uStack_160;
  uStack_260 = uStack_168;
  uStack_250 = uStack_158;
  uStack_2b8 = uStack_1c0;
  uStack_2c0 = uStack_1c8;
  uStack_2a8 = uStack_1b0;
  uStack_2b0 = uStack_1b8;
  uStack_298 = uStack_1a0;
  uStack_2a0 = uStack_1a8;
  uStack_288 = uStack_190;
  uStack_290 = uStack_198;
  uStack_2f8 = uStack_200;
  uStack_300 = uStack_208;
  uStack_2e8 = uStack_1f0;
  uStack_2f0 = uStack_1f8;
  uStack_2d8 = uStack_1e0;
  uStack_2e0 = uStack_1e8;
  uStack_2c8 = uStack_1d0;
  uStack_2d0 = uStack_1d8;
  uStack_338 = uStack_240;
  uStack_340 = uStack_248;
  uStack_328 = uStack_230;
  uStack_330 = uStack_238;
  uStack_318 = uStack_220;
  uStack_320 = uStack_228;
  uStack_308 = uStack_210;
  uStack_310 = uStack_218;
  func_0x000107c5ed70(_DAT_112fba988);
  FUN_10397cc24(&uStack_150,0x112d35ff8,&UNK_10d900cd0);
  lVar2 = unaff_x20 + _DAT_112fbaa00;
  uStack_338 = uVar1;
  uStack_330 = uVar4;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uStack_78 = uStack_278;
    uStack_80 = uStack_280;
    uStack_68 = uStack_268;
    uStack_70 = uStack_270;
    uStack_58 = uStack_258;
    uStack_60 = uStack_260;
    uStack_50 = uStack_250;
    uStack_b8 = uStack_2b8;
    uStack_c0 = uStack_2c0;
    uStack_a8 = uStack_2a8;
    uStack_b0 = uStack_2b0;
    uStack_98 = uStack_298;
    uStack_a0 = uStack_2a0;
    uStack_88 = uStack_288;
    uStack_90 = uStack_290;
    uStack_f8 = uStack_2f8;
    uStack_100 = uStack_300;
    uStack_e8 = uStack_2e8;
    uStack_f0 = uStack_2f0;
    uStack_d8 = uStack_2d8;
    uStack_e0 = uStack_2e0;
    uStack_c8 = uStack_2c8;
    uStack_d0 = uStack_2d0;
    uStack_138 = uStack_338;
    uStack_140 = uStack_340;
    uStack_128 = uStack_328;
    uStack_130 = uStack_330;
    uStack_118 = uStack_318;
    uStack_120 = uStack_320;
    uStack_108 = uStack_308;
    uStack_110 = uStack_310;
    func_0x00010465c0fc(0);
    func_0x000107c610f8();
    FUN_1037b0db4(&uStack_140,auStack_438);
    puVar3 = &uStack_140;
    func_0x000104658cf4(puVar3);
    func_0x000107c41c74(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
  }
  func_0x0001037b0e30(&uStack_340);
  return;
}



/* Entry: 103978774; end: 10397879b; -[_TtC10WebBrowser24WebBrowserViewController viewDidLoad] */

void FUN_103978774(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1039772ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10397879c; end: 103978883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397879c(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined *puStack_38;
  
  lVar1 = param_3;
  func_0x000107c5bcc0();
  if (lVar1 != 2) {
    return;
  }
  func_0x000107c5cf78(param_3,param_4,0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (5.0 <= param_2) {
    func_0x000107c610f8();
  }
  else {
    if (-5.0 < param_2) goto LAB_103978840;
    func_0x000107c610f8();
  }
  func_0x000107c46ecc();
  puStack_38 = puVar2;
  func_0x0001007d6d78(&puStack_38);
  func_0x000107c61170(puVar2);
LAB_103978840:
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c5a054(0,0,param_3,param_4,unaff_x20);
  func_0x000107c61170(unaff_x20);
  return;
}



/* Entry: 103978884; end: 1039788d3; -[_TtC10WebBrowser24WebBrowserViewController handlePanGesture:] */

/* WARNING: Possible PIC construction at 0x0001039788bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039788c0) */

void FUN_103978884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10397879c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1039788d4; end: 103978933; -[_TtC10WebBrowser24WebBrowserViewController initWithNibName:bundle:] */

void FUN_1039788d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebBrowser.WebBrowserViewController",0x23,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103978900);
  (*pcVar1)();
}



/* Entry: 103978934; end: 103978b63; -[_TtC10WebBrowser24WebBrowserViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103978950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039789c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103978a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103978ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103978b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103978b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103978b0c) */
/* WARNING: Removing unreachable block (ram,0x000103978ac8) */
/* WARNING: Removing unreachable block (ram,0x000103978a08) */
/* WARNING: Removing unreachable block (ram,0x0001039789c8) */
/* WARNING: Removing unreachable block (ram,0x000103978954) */
/* WARNING: Removing unreachable block (ram,0x000103978b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103978934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbaa10));
  return;
}



/* Entry: 103978b64; end: 103978bc3; -[_TtC10WebBrowser24WebBrowserViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

bool FUN_103978b64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  FUN_10397721c();
  func_0x000107c61170();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return param_3 == lVar1;
}



/* Entry: 103978bc4; end: 103978c37;  */

void FUN_103978bc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103978c38,uVar1,uVar2);
  return;
}



/* Entry: 103978c38; end: 103978ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103978c38(long param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x98) = *(long *)(unaff_x22 + 0x50);
  if (*(long *)(unaff_x22 + 0x50) != 0) {
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0xa0) = param_1;
    if (param_1 == 0) {
      param_1 = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
      func_0x000107c614f0();
      func_0x000107c5fca8();
    }
    *(long *)(unaff_x22 + 0xa8) = param_1;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103978cec,param_1);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000103978cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,1);
  return;
}



/* Entry: 103978cec; end: 103978d47;  */

void FUN_103978cec(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103978d48;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_103978e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103978d48; end: 103978dff;  */

void FUN_103978d48(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x103978d84,*(undefined8 *)(*unaff_x22 + 0xa8),*(undefined8 *)(*unaff_x22 + 0xb0));
  return;
}



/* Entry: 103978e00; end: 103978f33;  */

void FUN_103978e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  uVar2 = param_1;
  func_0x000107c5ed90();
  puVar3 = &UNK_1106b3d38;
  func_0x000107c613fc(&UNK_1106b3d38,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x10397cd28;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_103978f34;
  puStack_68 = &UNK_1106b3d50;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  puVar3 = &UNK_1106b3d88;
  func_0x000107c613fc(&UNK_1106b3d88,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uStack_60 = 0x10397cd44;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_100ff4e14;
  puStack_68 = &UNK_1106b3da0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c3f9a4(param_2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103978f34; end: 103978f97;  */

void FUN_103978f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103978f98; end: 103979383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103978f98(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  puVar2 = PTR_PTR_1126c3e80;
  func_0x000107c610f8();
  func_0x000107c464f0();
  if (puVar2 != (undefined *)0x0) {
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112fbaa28);
    *(undefined **)(unaff_x20 + _DAT_112fbaa28) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    func_0x000107c61174();
    func_0x000107c5a050();
    func_0x000107c526c0(0,puVar2);
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103979374);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170(lVar3);
    lVar3 = 0x112d360b8;
    FUN_10397bf00(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 9;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103979378);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar6 = puVar2;
    func_0x000107c5cbe4(puVar2);
    func_0x000107c61180();
    lVar4 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar6);
    *(long *)(lVar3 + 0x20) = lVar4;
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10397937c);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar6 = puVar2;
    func_0x000107c3ec1c(puVar2);
    func_0x000107c61180();
    lVar4 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar6);
    *(long *)(lVar3 + 0x28) = lVar4;
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103979380);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar6 = puVar2;
    func_0x000107c4ace0(puVar2);
    func_0x000107c61180();
    lVar4 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar6);
    *(long *)(lVar3 + 0x30) = lVar4;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103979384);
      (*pcVar1)();
    }
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = unaff_x20;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    puVar7 = puVar2;
    func_0x000107c50890(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar5 = lVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(puVar7);
    *(long *)(lVar3 + 0x38) = lVar5;
    uVar9 = 0;
    FUN_10397cb5c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,uVar9);
    func_0x000107c61574(lVar3);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar4);
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_1106b3ce8;
    func_0x000107c613fc(&UNK_1106b3ce8,0x18,7);
    *(undefined **)(puVar6 + 0x10) = puVar2;
    pcStack_60 = FUN_10397cd1c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1106b3d00;
    puStack_58 = puVar6;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000107c61174(puVar2);
    func_0x000107c61574(puVar6);
    func_0x000107c3dccc(0x3fd3333333333333,puVar7);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 103979384; end: 1039793c7; -[_TtC10WebBrowser24WebBrowserViewController goBackFromSafeBrowsing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103979384(long param_1)

{
  param_1 = param_1 + _DAT_112fbaa00;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c420b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1039793c8; end: 10397960f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039793c8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  long alStack_68 [3];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar6 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar4 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(alStack_68);
  if (alStack_68[0] == 0) {
    (**(code **)(lVar7 + 0x38))(lVar5,1,1,lVar1);
  }
  else {
    lVar2 = alStack_68[0];
    func_0x000107c4acc0();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_68[0]);
    if (lVar2 != 0) {
      func_0x000107c5edb4(puVar6,lVar2);
      func_0x000107c61170(lVar2);
    }
    (**(code **)(lVar7 + 0x38))(puVar6,lVar2 == 0,1,lVar1);
    func_0x0001001021cc(puVar6,lVar5);
    lVar2 = lVar5;
    (**(code **)(lVar7 + 0x30))(lVar5,1,lVar1);
    if ((int)lVar2 != 1) {
      (**(code **)(lVar7 + 0x20))(lVar4,lVar5,lVar1);
      lVar5 = _DAT_112fbaa28;
      uVar3 = 0;
      if (*(long *)(unaff_x20 + _DAT_112fbaa28) != 0) {
        func_0x000107c4ff34();
        uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
      }
      *(undefined8 *)(unaff_x20 + lVar5) = 0;
      func_0x000107c61170(uVar3);
      lVar5 = _DAT_112fbaa10;
      func_0x000107c61428(unaff_x20 + _DAT_112fbaa10,alStack_68,0x20,0);
      lVar5 = *(long *)(unaff_x20 + lVar5);
      if (lVar5 != 0) {
        func_0x000107c614a8(alStack_68);
        func_0x000107c61174(lVar5);
        FUN_10397d968(lVar4);
        func_0x000107c61170(lVar5);
        (**(code **)(lVar7 + 8))(lVar4,lVar1);
        return;
      }
      (**(code **)(lVar7 + 8))(lVar4,lVar1);
      func_0x000107c614a8(alStack_68);
      return;
    }
  }
  FUN_10397cc24(lVar5,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 103979610; end: 103979637; -[_TtC10WebBrowser24WebBrowserViewController learnMoreFromSafeBrowsing] */

void FUN_103979610(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1039793c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103979638; end: 1039796d7;  */

/* WARNING: Possible PIC construction at 0x000103979688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039796c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010397968c) */
/* WARNING: Removing unreachable block (ram,0x0001039796c4) */

void FUN_103979638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6d78;
  func_0x000107c610f8(PTR_PTR_1126d6d78);
  func_0x000107c45528();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5a26c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1039796d8; end: 10397989b; -[_TtC10WebBrowser24WebBrowserViewController didSendWithUrl:] */

void FUN_1039796d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_103979638(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10397989c; end: 103979907;  */

void FUN_10397989c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103979908,uVar1,uVar2);
  return;
}



/* Entry: 103979908; end: 10397993f;  */

void FUN_103979908(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010397993c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103979940; end: 103979aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103979940(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126ad828;
  func_0x000107c610f8(PTR_PTR_1126ad828);
  func_0x000107c453e4();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c5a148(puVar2,param_2,puVar3);
  func_0x000107c61170(puVar3);
  lVar4 = unaff_x20 + _DAT_112fba990;
  bVar1 = *(byte *)(lVar4 + 0x5b);
  func_0x000101424a7c();
  if (((int)lVar4 != 1) && ((bVar1 & 1) != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c54ae8(puVar2,param_2,puVar3);
    func_0x000107c61170(puVar3);
  }
  lVar4 = unaff_x20 + _DAT_112fbaa30;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c42694();
    func_0x000107c615e8(lVar4);
    if ((int)lVar5 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x000107c54ae8(puVar2,param_2,puVar3);
      func_0x000107c61170(puVar3);
    }
  }
  if ((*(uint3 *)(unaff_x20 + _DAT_112fbaa38) & 0xff) != 2) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c54160(puVar2,param_2,puVar3);
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c541e8(puVar2,param_2,puVar3);
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c52178(puVar2,param_2,puVar3);
    func_0x000107c61170(puVar3);
  }
  return puVar2;
}



/* Entry: 103979aec; end: 10397a1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103979aec(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR_PTR_1126ad830;
  func_0x000107c610f8(PTR_PTR_1126ad830);
  func_0x000107c453e4();
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112fbaa40) + _DAT_112fbabe0);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c53548(puVar2);
  func_0x000107c615e8(uVar3);
  puVar4 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  func_0x0001000d224c(&puStack_a0);
  puVar12 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = puStack_a0;
    func_0x000107c4c1e0(puStack_a0);
    func_0x000107c61180();
    func_0x000107c615e8(puVar12);
  }
  func_0x000107c525f4(puVar2);
  func_0x000107c615e8(puVar11);
  func_0x0001000d224c(&puStack_a0);
  puVar12 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = puStack_a0;
    func_0x000107c4c1ec(puStack_a0);
    func_0x000107c61180();
    func_0x000107c615e8(puVar12);
  }
  func_0x000107c52188(puVar2);
  func_0x000107c615e8(puVar11);
  func_0x0001000d224c(&puStack_a0);
  puVar12 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = puStack_a0;
    func_0x000107c4c1dc(puStack_a0);
    func_0x000107c61180();
    func_0x000107c615e8(puVar12);
  }
  func_0x000107c56b20(puVar2);
  func_0x000107c615e8(puVar11);
  func_0x0001000d224c(&puStack_a0);
  puVar12 = puStack_a0;
  if (puStack_a0 != (undefined *)0x0) {
    puVar11 = puStack_a0;
    func_0x000107c409cc();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_a0);
    if (puVar11 == (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = puVar11;
      func_0x000107c40978(puVar11);
      func_0x000107c61180();
      func_0x000107c615e8(puVar11);
    }
  }
  func_0x000107c53e94(puVar2);
  func_0x000107c615e8(puVar12);
  func_0x00010109e534();
  func_0x0001000c2068();
  puVar11 = puVar12;
  func_0x0001004575f0();
  func_0x000107c61574(puVar12);
  puVar12 = puVar11;
  func_0x000107c5cb24(puVar11);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c55088(puVar2);
  func_0x000107c61170(puVar12);
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10397a1fc;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1021f7414;
  puStack_88 = &UNK_1106b3990;
  ppuVar5 = &puStack_a0;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c53ec0(puVar2);
  func_0x000107c60bd0(ppuVar5);
  puVar12 = &UNK_1106b39c8;
  puVar6 = puVar12;
  func_0x000107c613fc(&UNK_1106b39c8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_80 = (code *)0x10397c77c;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1106b39e0;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_78);
  func_0x000107c541e0(puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61428(unaff_x20 + _DAT_112fbaa10,auStack_b8,0,0);
  func_0x000107c5a6c0(puVar2);
  func_0x000107c560d0(puVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fbaa60);
  lVar10 = unaff_x20 + _DAT_112fba990;
  bVar1 = *(byte *)(lVar10 + 0x58);
  func_0x000101424a7c();
  lVar7 = 0;
  FUN_103973ab8();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112fba800) = uVar3;
  *(byte *)(lVar8 + _DAT_112fba808) = (int)lVar10 != 1 & bVar1;
  puVar6 = PTR_s_init_1125d9248;
  lStack_c8 = lVar8;
  lStack_c0 = lVar7;
  func_0x000107c6157c(uVar3);
  plVar9 = &lStack_c8;
  func_0x000107c61154(plVar9,puVar6);
  func_0x000107c57854(puVar2);
  func_0x000107c61170(plVar9);
  puVar6 = puVar12;
  func_0x000107c613fc(&UNK_1106b39c8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_80 = (code *)0x10397c784;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e46924;
  puStack_88 = &UNK_1106b3a08;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_78);
  func_0x000107c533ec(puVar2);
  func_0x000107c60bd0(ppuVar5);
  puVar6 = puVar12;
  func_0x000107c613fc(&UNK_1106b39c8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_80 = (code *)0x10397c78c;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x1030a48b0;
  puStack_88 = &UNK_1106b3a30;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61574(puStack_78);
  func_0x000107c54e8c(puVar2);
  func_0x000107c60bd0(ppuVar5);
  puVar6 = puVar12;
  func_0x000107c613fc(&UNK_1106b39c8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_80 = (code *)0x10397c794;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1106b3a58;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c59058(puVar2);
  func_0x000107c60bd0(ppuVar5);
  puVar6 = puVar12;
  func_0x000107c613fc(&UNK_1106b39c8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcStack_80 = (code *)0x10397c79c;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1106b3a80;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c539b8(puVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c613fc(&UNK_1106b39c8,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  pcStack_80 = (code *)0x10397c7a4;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1106b3aa8;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar12;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  func_0x000107c569c4(puVar2);
  func_0x000107c60bd0(ppuVar5);
  lVar10 = *(long *)(unaff_x20 + _DAT_112fbaa68);
  if (lVar10 == 0) {
    func_0x000107c61170(puVar4);
  }
  else {
    puVar12 = &UNK_1106b39c8;
    func_0x000107c613fc(&UNK_1106b39c8,0x18,7);
    func_0x000107c61614(puVar12 + 0x10);
    puVar6 = &UNK_1106b3ae0;
    func_0x000107c613fc(&UNK_1106b3ae0,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar12;
    *(long *)(puVar6 + 0x18) = lVar10;
    pcStack_80 = (code *)0x10397c7ac;
    puStack_a0 = puVar11;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1106b3af8;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar5);
    puVar12 = puStack_78;
    func_0x000107c615f4(lVar10,2);
    func_0x000107c61574(puVar12);
    func_0x000107c58e90(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar10);
  }
  return puVar2;
}



/* Entry: 10397a1fc; end: 10397a3af;  */

undefined1  [16] FUN_10397a1fc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  undefined1 auVar3 [16];
  
  lVar2 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  func_0x000107c5fb04(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5faf0(param_1,param_2,
                      &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_1;
  }
  lVar2 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar2 = param_2;
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10397a3b0; end: 10397a427;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10397a3b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112fbaa00;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      func_0x000107c420b4(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10397a428; end: 10397a597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10397a428(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  ppuVar3 = &puStack_90;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    FUN_10397cb5c();
    uVar4 = 0;
    func_0x000107c6010c(0);
    func_0x000107c43b74(puVar1);
  }
  else {
    func_0x0001000d224c(&uStack_60);
    uVar4 = uStack_60;
    func_0x000107c3e4a0(uStack_60);
    func_0x000107c61180();
    func_0x000107c615e8(uStack_60);
    puVar2 = &UNK_1106b3c20;
    func_0x000107c613fc(&UNK_1106b3c20,0x18,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    pcStack_70 = FUN_10397cc14;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101286f34;
    puStack_78 = &UNK_1106b3c38;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c5dc64(uVar4);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar3);
  }
  func_0x000107c61170(uVar4);
  return puVar1;
}


