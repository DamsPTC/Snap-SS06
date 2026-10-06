/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031be960; end: 1031bea37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031be960(undefined8 param_1,long param_2)

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
    FUN_1031bd368();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f49378) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031bea38);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f49380);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f494b8);
    *(long **)(unaff_x20 + _DAT_112f494b8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1031bea38; end: 1031bea5f; -[SCSCChatInputPluginScopedServicesSaberEntryPoint begin] */

void FUN_1031bea38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031be960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031bea60; end: 1031bebd7;  */

/* WARNING: Possible PIC construction at 0x0001031beac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031beb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031beacc) */
/* WARNING: Removing unreachable block (ram,0x0001031beb64) */
/* WARNING: Removing unreachable block (ram,0x0001031beb7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bea60(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f494b8);
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



/* Entry: 1031bebd8; end: 1031bebdf;  */

void FUN_1031bebd8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031bebe0; end: 1031bec13; -[SCSCChatInputPluginScopedServicesSaberEntryPoint end] */

void FUN_1031bebe0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031bea60();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031bec14; end: 1031bed33;  */

void FUN_1031bec14(long param_1,long param_2,long param_3)

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
                        "SCChatInputPluginScopeGraphBridge/SCSCChatInputPluginScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bed34);
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



/* Entry: 1031bed34; end: 1031beddf; -[SCSCChatInputPluginScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1031bed34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031bec14(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031bede0; end: 1031bee3f; -[SCSCChatInputPluginScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bede0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f494b0,0);
  *(undefined8 *)(param_1 + _DAT_112f494b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031bee40; end: 1031bee73;  */

void FUN_1031bee40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031bee74; end: 1031beeab; -[SCSCChatInputPluginScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bee74(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f494b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f494b8));
  return;
}



/* Entry: 1031beeac; end: 1031beecb;  */

void FUN_1031beeac(void)

{
  func_0x000107c61168(&PTR_PTR_1128bf988);
  return;
}



/* Entry: 1031beecc; end: 1031bf0cb;  */

void FUN_1031beecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  return;
}



/* Entry: 1031bf0cc; end: 1031bf0e7;  */

void FUN_1031bf0cc(long param_1,long param_2)

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



/* Entry: 1031bf0e8; end: 1031bf15b;  */

undefined8 FUN_1031bf0e8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107c4218c();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  }
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fbbc();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000107c3fb00(lVar3);
    func_0x000107c615e8(lVar3);
  }
  return 0;
}



/* Entry: 1031bf15c; end: 1031bf18f;  */

void FUN_1031bf15c(void)

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



/* Entry: 1031bf190; end: 1031bf1d3;  */

void FUN_1031bf190(void)

{
  func_0x0001031bef48();
  return;
}



/* Entry: 1031bf1d4; end: 1031bf1f3;  */

void FUN_1031bf1d4(void)

{
  func_0x000107c61168(&PTR_PTR_112f49528);
  return;
}



/* Entry: 1031bf1f4; end: 1031bf24f;  */

void FUN_1031bf1f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1031bf250; end: 1031bf347;  */

void FUN_1031bf250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_40 = FUN_1031bf348;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1031bf3ac;
  puStack_48 = &UNK_11061ce20;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1031bf89c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  puVar3 = puVar1;
  func_0x0001031bf788();
  func_0x000107c42c20(uVar4,param_2,puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1031bf348; end: 1031bf3e3;  */

long FUN_1031bf348(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  func_0x0001031bf70c();
  func_0x000107c613fc();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  return lVar1;
}



/* Entry: 1031bf3e4; end: 1031bf3ff;  */

void FUN_1031bf3e4(long param_1,long param_2)

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



/* Entry: 1031bf400; end: 1031bf423;  */

void FUN_1031bf400(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031bf424; end: 1031bf443;  */

void FUN_1031bf424(void)

{
  FUN_1031bf250();
  return;
}



/* Entry: 1031bf444; end: 1031bf44b;  */

undefined8 FUN_1031bf444(void)

{
  return 0;
}



/* Entry: 1031bf44c; end: 1031bf46b;  */

void FUN_1031bf44c(void)

{
  func_0x000107c61168(&PTR_PTR_112f495d8);
  return;
}



/* Entry: 1031bf46c; end: 1031bf533; -[_TtC39SCAIStoryReplyLoggingHelperServicesImpl27SCAIStoryReplyLoggingHelper generatedAIReplyWithSnapId:] */

void FUN_1031bf46c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  func_0x00010006c804();
  func_0x000107c61428(param_1 + 0x10,auStack_58,0x20,0);
  lVar1 = param_2;
  func_0x000101515f6c(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x000107c614a8(auStack_58);
  func_0x000100070bfc();
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1031bf534; end: 1031bf60f; -[_TtC39SCAIStoryReplyLoggingHelperServicesImpl27SCAIStoryReplyLoggingHelper setGeneratedAIReply:snapId:] */

void FUN_1031bf534(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  func_0x000107c5faec(param_4);
  func_0x000107c6157c(param_1);
  func_0x00010006c804();
  func_0x000107c61428(param_1 + 0x10,auStack_58,0x21,0);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(param_2);
  func_0x000102bf39ac(param_3,uVar1,param_4,param_2);
  func_0x000107c614a8(auStack_58);
  func_0x000100070bfc();
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1031bf610; end: 1031bf6df; -[_TtC39SCAIStoryReplyLoggingHelperServicesImpl27SCAIStoryReplyLoggingHelper isTextCountedAsAIReplyWithInitiallyGeneratedText:finalText:] */

bool FUN_1031bf610(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  lVar2 = param_3;
  func_0x000107c5fb5c(param_3,param_2);
  if ((lVar2 < 1) || (lVar2 = param_4, func_0x000107c5fb5c(param_4,uVar3), lVar2 < 1)) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x000107c5fb5c(param_3,param_2);
    FUN_1031bff60(param_3,param_2,param_4,uVar3);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    bVar1 = (double)param_3 <= (double)lVar2 / 4.0;
  }
  return bVar1;
}



/* Entry: 1031bf6e0; end: 1031bf72b;  */

void FUN_1031bf6e0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031bf72c; end: 1031bf73b; -[SCAIStoryReplyLoggingHelperServices loggingHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bf72c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f496e0));
  return;
}



/* Entry: 1031bf73c; end: 1031bf7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bf73c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f496e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031bf7d4; end: 1031bf82b; -[SCAIStoryReplyLoggingHelperServices initWithLoggingHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bf7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f496e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1031bf82c; end: 1031bf88b; -[SCAIStoryReplyLoggingHelperServices init] */

void FUN_1031bf82c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAIStoryReplyLoggingHelperServices.SCAIStoryReplyLoggingHelperServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031bf858);
  (*pcVar1)();
}



/* Entry: 1031bf88c; end: 1031bf89b; -[SCAIStoryReplyLoggingHelperServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bf88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f496e0));
  return;
}



/* Entry: 1031bf89c; end: 1031bf8bb;  */

void FUN_1031bf89c(void)

{
  func_0x000107c61168(&PTR_PTR_1128bfa48);
  return;
}



/* Entry: 1031bf8bc; end: 1031bf8df;  */

undefined4 FUN_1031bf8bc(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_1 - 1U < 6) {
    lVar2 = *(long *)(&UNK_10db97028 + (param_1 - 1U) * 8);
  }
  else {
    lVar2 = 0;
  }
  uVar1 = (int)(lVar2 - 1U);
  if (2 < lVar2 - 1U) {
    uVar1 = 0xfbadbeef;
  }
  return uVar1;
}



/* Entry: 1031bf8e0; end: 1031bf903; +[_TtC19GenerativeAIHelpers38SCBloopsGenericUserPolicyTypeConverter convertToCameosFriendsPolicy:] */

undefined4 FUN_1031bf8e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_3 - 1U < 6) {
    lVar2 = *(long *)(&UNK_10db97028 + (param_3 - 1U) * 8);
  }
  else {
    lVar2 = 0;
  }
  uVar1 = (int)(lVar2 - 1U);
  if (2 < lVar2 - 1U) {
    uVar1 = 0xfbadbeef;
  }
  return uVar1;
}



/* Entry: 1031bf904; end: 1031bf93f; +[_TtC19GenerativeAIHelpers38SCBloopsGenericUserPolicyTypeConverter convertFromCameosFriendsPolicy:] */

undefined8 FUN_1031bf904(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000108e9a174();
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10db97058 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1031bf940; end: 1031bf963; +[_TtC19GenerativeAIHelpers38SCBloopsGenericUserPolicyTypeConverter convertToBloopsUserPolicy:] */

undefined8 FUN_1031bf940(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return *(undefined8 *)(&UNK_10db97028 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1031bf964; end: 1031bf987; +[_TtC19GenerativeAIHelpers38SCBloopsGenericUserPolicyTypeConverter convertFromBloopsUserPolicy:] */

undefined8 FUN_1031bf964(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10db97058 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1031bf988; end: 1031bf9ab; +[_TtC19GenerativeAIHelpers38SCBloopsGenericUserPolicyTypeConverter convertToPBDreamsGenerationPolicy:] */

undefined4 FUN_1031bf988(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 2U < 5) {
    return *(undefined4 *)(&UNK_10db97070 + (param_3 - 2U) * 4);
  }
  return 0;
}



/* Entry: 1031bf9ac; end: 1031bf9cb;  */

void FUN_1031bf9ac(void)

{
  func_0x000107c61168(&PTR_PTR_1128bfb08);
  return;
}



/* Entry: 1031bf9cc; end: 1031bfa07; -[_TtC19GenerativeAIHelpers38SCBloopsGenericUserPolicyTypeConverter init] */

void FUN_1031bf9cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1031bf9ac();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031bfa08; end: 1031bfa37;  */

void FUN_1031bfa08(void)

{
  FUN_1031bf9ac();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031bfa38; end: 1031bfb9f;  */

undefined * FUN_1031bfa38(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    FUN_1031bfba0(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031bfba0);
      (*pcVar2)();
    }
    uVar7 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar7;
        FUN_1031bfd5c(uVar7,param_1);
      }
      puVar4 = PTR_PTR_1126e2c68;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c4aae8(uVar3);
      func_0x000107c55acc(puVar4);
      uVar5 = uVar3;
      func_0x000107c5bd50();
      if (uVar5 < 4) {
        func_0x000107c59874(puVar4);
      }
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        FUN_1031bfba0(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined **)(puVar1 + uVar3 * 8 + 0x20) = puVar4;
    } while (uVar6 != uVar7);
  }
  return puVar1;
}



/* Entry: 1031bfba0; end: 1031bfbbb;  */

void FUN_1031bfba0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1031bfbbc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1031bfbbc; end: 1031bfcef;  */

undefined * FUN_1031bfbbc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031bfcf0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1031bfcf0();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1031bff20(0,0x112e12a40,&PTR_PTR_1126e2c68);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1031bfcf0; end: 1031bfd5b;  */

void FUN_1031bfcf0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1031bff20(0,0x112e12a40,&PTR_PTR_1126e2c68);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f49738;
  plVar5 = (long *)&UNK_10db97088;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1031bfd5c; end: 1031bff1f;  */

ulong FUN_1031bfd5c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031bfe40);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031bfe44);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a7e90;
    func_0x000107c61168(PTR_PTR_1126a7e90);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a7e90;
    func_0x000107c61168(PTR_PTR_1126a7e90);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1031bff20(0,0x112dd7968,&PTR_PTR_1126a7e90);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031bff20);
  (*pcVar2)();
}



/* Entry: 1031bff20; end: 1031bff5f;  */

void FUN_1031bff20(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1031bff60; end: 1031c031b;  */

ulong FUN_1031bff60(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar4 = param_1;
  func_0x000107c5fb5c();
  uVar11 = param_3;
  func_0x000107c5fb5c(param_3,param_4);
  if (((long)uVar4 < 1) || ((long)uVar11 < 1)) {
    if ((long)uVar11 <= (long)uVar4) {
      uVar11 = uVar4;
    }
  }
  else {
    uVar5 = uVar11 + 1;
    if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02f4);
      (*pcVar2)();
    }
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02f8);
      (*pcVar2)();
    }
    uVar10 = uVar5;
    func_0x000107c5fc70(uVar5,PTR___sSiN_11034deb0);
    *(ulong *)(uVar10 + 0x10) = uVar5;
    func_0x000107c60ee4(uVar10 + 0x20,uVar11 * 8 + 8);
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02fc);
      (*pcVar2)();
    }
    uVar5 = uVar10;
    FUN_1031c0460(uVar10,uVar4 + 1);
    func_0x000107c6142c(uVar10);
    uVar10 = uVar5;
    func_0x000107c61558();
    if ((uVar10 & 1) == 0) {
      FUN_1031c031c();
      lVar7 = *(long *)(uVar5 + 0x10);
    }
    else {
      lVar7 = *(long *)(uVar5 + 0x10);
    }
    if (lVar7 == 0) {
LAB_1031c0310:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c0314);
      (*pcVar2)();
    }
    uVar10 = 0;
    puVar1 = (ulong *)(uVar5 + 0x20);
    while( true ) {
      lVar7 = uVar5 + uVar10 * 8;
      uVar12 = *(ulong *)(lVar7 + 0x20);
      uVar13 = uVar12;
      func_0x000107c61558();
      *(ulong *)(lVar7 + 0x20) = uVar12;
      if ((uVar13 & 1) == 0) {
        func_0x000102108400();
        *(ulong *)(lVar7 + 0x20) = uVar12;
        lVar7 = *(long *)(uVar12 + 0x10);
      }
      else {
        lVar7 = *(long *)(uVar12 + 0x10);
      }
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c0080);
        (*pcVar2)();
      }
      *(ulong *)(uVar12 + 0x20) = uVar10;
      if (uVar4 == uVar10) break;
      uVar10 = uVar10 + 1;
      if (*(ulong *)(uVar5 + 0x10) <= uVar10) goto LAB_1031c0310;
    }
    if (*(long *)(uVar5 + 0x10) == 0) goto LAB_1031c02e8;
    uVar10 = 0;
    while( true ) {
      uVar13 = *puVar1;
      uVar12 = uVar13;
      func_0x000107c61558();
      *puVar1 = uVar13;
      if ((uVar12 & 1) == 0) {
        func_0x000102108400();
        *puVar1 = uVar13;
      }
      if (*(ulong *)(uVar13 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02f0);
        (*pcVar2)();
      }
      *(ulong *)(uVar13 + uVar10 * 8 + 0x20) = uVar10;
      if (uVar11 == uVar10) break;
      uVar10 = uVar10 + 1;
      if (*(long *)(uVar5 + 0x10) == 0) {
LAB_1031c02e8:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02ec);
        (*pcVar2)();
      }
    }
    uVar10 = 1;
    do {
      uVar12 = 0;
      do {
        lVar6 = 0xf;
        func_0x000107c5fb6c(0xf,uVar10 - 1,param_1,param_2);
        uVar13 = param_1;
        func_0x000107c5fbcc();
        lVar7 = 0xf;
        func_0x000107c5fb6c(0xf,uVar12,param_3,param_4);
        uVar14 = param_3;
        func_0x000107c5fbcc();
        if (lVar6 == lVar7 && uVar13 == uVar14) {
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(uVar14);
          uVar13 = 0;
        }
        else {
          func_0x000107c605b8(lVar6,uVar13,lVar7,uVar14,0);
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(uVar14);
          uVar13 = (ulong)~(uint)lVar6 & 1;
        }
        if (*(ulong *)(uVar5 + 0x10) < uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02cc);
          (*pcVar2)();
        }
        if (*(ulong *)(puVar1[uVar10 - 1] + 0x10) <= uVar12 + 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02d0);
          (*pcVar2)();
        }
        lVar6 = puVar1[uVar10 - 1] + uVar12 * 8;
        lVar8 = *(long *)(lVar6 + 0x28);
        lVar7 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02d4);
          (*pcVar2)();
        }
        if (*(ulong *)(uVar5 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02d8);
          (*pcVar2)();
        }
        uVar14 = puVar1[uVar10];
        if (*(ulong *)(uVar14 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02dc);
          (*pcVar2)();
        }
        lVar9 = *(long *)(uVar14 + uVar12 * 8 + 0x20);
        lVar8 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02e0);
          (*pcVar2)();
        }
        lVar9 = *(long *)(lVar6 + 0x20);
        lVar6 = lVar9 + uVar13;
        if (SCARRY8(lVar9,uVar13)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02e4);
          (*pcVar2)();
        }
        if (lVar7 <= lVar8) {
          lVar8 = lVar7;
        }
        if (lVar8 <= lVar6) {
          lVar6 = lVar8;
        }
        uVar13 = uVar14;
        func_0x000107c61558();
        puVar1[uVar10] = uVar14;
        if ((uVar13 & 1) == 0) {
          func_0x000102108400();
          puVar1[uVar10] = uVar14;
        }
        if (*(ulong *)(uVar14 + 0x10) <= uVar12 + 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c02e8);
          (*pcVar2)();
        }
        *(long *)(uVar14 + uVar12 * 8 + 0x28) = lVar6;
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
      bVar3 = uVar10 != uVar4;
      uVar10 = uVar10 + 1;
    } while (bVar3);
    if (*(ulong *)(uVar5 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c0318);
      (*pcVar2)();
    }
    if (*(ulong *)(puVar1[uVar4] + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c031c);
      (*pcVar2)();
    }
    uVar11 = *(ulong *)(puVar1[uVar4] + uVar11 * 8 + 0x20);
    func_0x000107c6142c(uVar5);
  }
  return uVar11;
}



/* Entry: 1031c031c; end: 1031c032f;  */

/* WARNING: Removing unreachable block (ram,0x0001031c0350) */
/* WARNING: Removing unreachable block (ram,0x0001031c0360) */
/* WARNING: Removing unreachable block (ram,0x0001031c045c) */
/* WARNING: Removing unreachable block (ram,0x0001031c036c) */
/* WARNING: Removing unreachable block (ram,0x0001031c0374) */
/* WARNING: Removing unreachable block (ram,0x0001031c03ec) */
/* WARNING: Removing unreachable block (ram,0x0001031c03f4) */
/* WARNING: Removing unreachable block (ram,0x0001031c03f8) */
/* WARNING: Removing unreachable block (ram,0x0001031c03fc) */
/* WARNING: Removing unreachable block (ram,0x0001031c040c) */

undefined * FUN_1031c031c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112f49740;
    func_0x0001000285a8(0x112f49740,&UNK_10db97090);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1;
  }
  uVar5 = 0x112d4b170;
  func_0x0001000285a8(0x112d4b170,&UNK_10d911a80);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 1031c0330; end: 1031c045f;  */

undefined * FUN_1031c0330(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c0460);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f49740;
    func_0x0001000285a8(0x112f49740,&UNK_10db97090);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d4b170;
    func_0x0001000285a8(0x112d4b170,&UNK_10d911a80);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1031c0460; end: 1031c055b;  */

undefined * FUN_1031c0460(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c04f8);
    (*pcVar1)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    uVar2 = 0x112d4b170;
    func_0x0001000285a8(0x112d4b170,&UNK_10d911a80);
    puVar3 = param_2;
    func_0x000107c5fc70(param_2,uVar2);
    *(undefined **)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    param_2 = param_2 + -1;
    if (param_2 != (undefined *)0x0) {
      puVar4 = (undefined8 *)(puVar3 + 0x28);
      do {
        *puVar4 = param_1;
        func_0x000107c61434(param_1);
        param_2 = param_2 + -1;
        puVar4 = puVar4 + 1;
      } while (param_2 != (undefined *)0x0);
    }
    func_0x000107c61434(param_1);
  }
  return puVar3;
}



/* Entry: 1031c055c; end: 1031c06cf;  */

void FUN_1031c055c(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char *pcVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puVar2;
  
  lVar9 = *(long *)(param_4 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)&puStack_80 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar2;
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    pcVar3 = "executingOnMain(_:)";
    func_0x0001000c10c0("executingOnMain(_:)");
    func_0x000107c61180();
    (**(code **)(lVar9 + 0x10))(lVar6,param_1,param_4);
    uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
    uVar8 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
    puVar2 = &UNK_11061cfa8;
    func_0x000107c613fc(&UNK_11061cfa8,uVar8 + lVar7,uVar5 | 7);
    *(long *)(puVar2 + 0x10) = param_4;
    *(code **)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    (**(code **)(lVar9 + 0x20))(puVar2 + uVar8,lVar6,param_4);
    pcStack_60 = FUN_1031c082c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11061cfc0;
    ppuVar4 = &puStack_80;
    puStack_58 = puVar2;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_58;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(pcVar3);
  }
  else {
    (*param_2)(param_1);
  }
  return;
}



/* Entry: 1031c06d0; end: 1031c06db;  */

void FUN_1031c06d0(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar12 = *(long *)(lVar1 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&puStack_80 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar3 = (int)puVar4;
  func_0x000107c4a02c();
  if (iVar3 == 0) {
    pcVar5 = "executingOnMain(_:)";
    func_0x0001000c10c0("executingOnMain(_:)");
    func_0x000107c61180();
    (**(code **)(lVar12 + 0x10))(lVar9,param_1,lVar1);
    uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar11 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
    puVar4 = &UNK_11061cfa8;
    func_0x000107c613fc(&UNK_11061cfa8,uVar11 + lVar10,uVar8 | 7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(code **)(puVar4 + 0x18) = pcVar2;
    *(undefined8 *)(puVar4 + 0x20) = uVar7;
    (**(code **)(lVar12 + 0x20))(puVar4 + uVar11,lVar9,lVar1);
    pcStack_60 = FUN_1031c082c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11061cfc0;
    ppuVar6 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_58;
    func_0x000107c6157c(uVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar5);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(pcVar5);
  }
  else {
    (*pcVar2)(param_1);
  }
  return;
}



/* Entry: 1031c06dc; end: 1031c0807;  */

undefined1  [16] FUN_1031c06dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &UNK_11061cf58;
  func_0x000107c613fc(&UNK_11061cf58,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_1031c0808;
  return auVar2;
}



/* Entry: 1031c0808; end: 1031c082b;  */

void FUN_1031c0808(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  undefined *puVar5;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar7 = &puStack_60;
  puVar5 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar4 = (int)puVar5;
  func_0x000107c4a02c();
  if (iVar4 == 0) {
    pcVar6 = "executingOnMain(_:)";
    func_0x0001000c10c0("executingOnMain(_:)");
    func_0x000107c61180();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_11061cf70;
    pcStack_40 = pcVar1;
    uStack_38 = uVar2;
    func_0x000107c60bc4(&puStack_60);
    uVar3 = uStack_38;
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(uVar3);
    func_0x000107c4e524(pcVar6);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(pcVar6);
  }
  else {
    (*pcVar1)();
  }
  return;
}



/* Entry: 1031c082c; end: 1031c0867;  */

void FUN_1031c082c(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x20),
             unaff_x20 + (uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 1031c0868; end: 1031c086f;  */

void FUN_1031c0868(long param_1,long param_2)

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



/* Entry: 1031c0870; end: 1031c08db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c0870(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1031c0c64();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f49750) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1031c08dc; end: 1031c0947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c08dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f49750) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031c0948; end: 1031c09a7; -[_TtC44ChatMediaPreviewScopedFactoryServiceProvider30ChatMediaPreviewScopedServices init] */

void FUN_1031c0948(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatMediaPreviewScopedFactoryServiceProvider.ChatMediaPreviewScopedServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c0974);
  (*pcVar1)();
}



/* Entry: 1031c09a8; end: 1031c09b7; -[_TtC44ChatMediaPreviewScopedFactoryServiceProvider30ChatMediaPreviewScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c09a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f49750));
  return;
}



/* Entry: 1031c09b8; end: 1031c0a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c09b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11061d1b0;
  func_0x000107c613fc(&UNK_11061d1b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1031c0cfc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031c0a24; end: 1031c0abf;  */

void FUN_1031c0a24(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061d0c0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061d0c0;
  return;
}



/* Entry: 1031c0ac0; end: 1031c0af7;  */

void FUN_1031c0ac0(long *param_1)

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



/* Entry: 1031c0af8; end: 1031c0aff;  */

undefined8 FUN_1031c0af8(void)

{
  return 0x1b;
}



/* Entry: 1031c0b00; end: 1031c0c33;  */

void FUN_1031c0b00(undefined8 *param_1)

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
  puVar1 = &UNK_11061d1d8;
  func_0x000107c613fc(&UNK_11061d1d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031c0cd4;
  func_0x00010058fa64(FUN_1031c0cd4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031c0c34; end: 1031c0c63;  */

undefined ** FUN_1031c0c34(void)

{
  return &PTR_DAT_113066598;
}



/* Entry: 1031c0c64; end: 1031c0c83;  */

void FUN_1031c0c64(void)

{
  func_0x000107c61168(&PTR_PTR_1128bfbb8);
  return;
}



/* Entry: 1031c0c84; end: 1031c0cd3;  */

undefined1  [16] FUN_1031c0c84(void)

{
  return ZEXT816(0x11061d110);
}



/* Entry: 1031c0cd4; end: 1031c0cfb;  */

void FUN_1031c0cd4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1031c0cfc; end: 1031c0cff;  */

void FUN_1031c0cfc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031c0d00; end: 1031c0d7b;  */

void FUN_1031c0d00(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f497c0,&UNK_10db972e0);
  func_0x000107c613fc();
  pcVar1 = FUN_1031c1090;
  func_0x0001000841fc(FUN_1031c1090,param_2);
  func_0x000100084214(&UNK_10db972b0,0x2c,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1031c0d7c; end: 1031c0d93;  */

void FUN_1031c0d7c(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112f497c0,&UNK_10db972e0);
  func_0x000107c613fc();
  pcVar1 = FUN_1031c1090;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10db972b0,0x2c,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1031c0d94; end: 1031c108f;  */

void FUN_1031c0d94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f497c8,&UNK_10db972e8);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f497d0,&UNK_10db972f0);
  puVar2 = &UNK_11061d238;
  func_0x000107c613fc(&UNK_11061d238,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x1031c1098;
  func_0x0001000823a8(0x1031c1098,puVar2);
  pcVar3 = "ChatMediaPreviewEntryPointWrapperServiceProvider";
  func_0x000100082720("ChatMediaPreviewEntryPointWrapperServiceProvider",0x30,2);
  FUN_1031c1ca4();
  func_0x000100082720("ChatMediaPreviewScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1031c0ac0;
  func_0x0001000823a8(FUN_1031c0ac0,0);
  func_0x000100082720("ChatMediaPreviewScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f497d8,&UNK_10db97300);
  puVar2 = &UNK_11061d260;
  func_0x000107c613fc(&UNK_11061d260,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1031c10a0;
  func_0x0001000823a8(0x1031c10a0,puVar2);
  func_0x000100082720("ChatMediaPreviewScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f49758,&UNK_10db970b0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1031c10ac;
  func_0x0001000823a8(0x1031c10ac,uVar5);
  func_0x000100082720("ChatMediaPreviewScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f49748,&UNK_10db970a0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1031c10b4;
  func_0x0001000823a8(0x1031c10b4,uVar6);
  func_0x000100082720("ChatMediaPreviewScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11061d288;
  func_0x000107c613fc(&UNK_11061d288,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1031c10e8;
  func_0x0001000823a8(FUN_1031c10e8,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("ChatMediaPreviewScopeEntryPointProvider",0x27,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1031c1090; end: 1031c10bb;  */

void FUN_1031c1090(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f497c8,&UNK_10db972e8);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112f497d0,&UNK_10db972f0);
  puVar2 = &UNK_11061d238;
  func_0x000107c613fc(&UNK_11061d238,0x20,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x1031c1098;
  func_0x0001000823a8(0x1031c1098,puVar2);
  pcVar3 = "ChatMediaPreviewEntryPointWrapperServiceProvider";
  func_0x000100082720("ChatMediaPreviewEntryPointWrapperServiceProvider",0x30,2);
  FUN_1031c1ca4();
  func_0x000100082720("ChatMediaPreviewScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1031c0ac0;
  func_0x0001000823a8(FUN_1031c0ac0,0);
  func_0x000100082720("ChatMediaPreviewScopedServicesCleanupRelayServiceProvider",0x39,2);
  func_0x0001000285a8(0x112f497d8,&UNK_10db97300);
  puVar2 = &UNK_11061d260;
  func_0x000107c613fc(&UNK_11061d260,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 **)(puVar2 + 0x18) = puVar1;
  *(char **)(puVar2 + 0x20) = pcVar3;
  *(code **)(puVar2 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1031c10a0;
  func_0x0001000823a8(0x1031c10a0,puVar2);
  func_0x000100082720("ChatMediaPreviewScopeInitializationPluginRegistryServiceProvider",0x40,2);
  func_0x0001000285a8(0x112f49758,&UNK_10db970b0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1031c10ac;
  func_0x0001000823a8(0x1031c10ac,uVar5);
  func_0x000100082720("ChatMediaPreviewScopeInitializationServiceProvider",0x32,2);
  func_0x0001000285a8(0x112f49748,&UNK_10db970a0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1031c10b4;
  func_0x0001000823a8(0x1031c10b4,uVar6);
  func_0x000100082720("ChatMediaPreviewScopedServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_11061d288;
  func_0x000107c613fc(&UNK_11061d288,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(code **)(puVar2 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1031c10e8;
  func_0x0001000823a8(FUN_1031c10e8,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("ChatMediaPreviewScopeEntryPointProvider",0x27,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1031c10bc; end: 1031c10e7;  */

void FUN_1031c10bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031c10e8; end: 1031c10ef;  */

void FUN_1031c10e8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061d0c0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061d0c0;
  return;
}



/* Entry: 1031c10f0; end: 1031c11cf;  */

void FUN_1031c10f0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1031c13b0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x0001031c4628(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1031c3eac(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  func_0x000107c6157c(uVar1);
  FUN_1031c3eb8();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1031c11d0; end: 1031c127f;  */

long FUN_1031c11d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001031c4628(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1031c3eac(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_1031c3eb8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 1031c1280; end: 1031c12ab;  */

void FUN_1031c1280(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031c12ac; end: 1031c12b3;  */

undefined8 FUN_1031c12ac(void)

{
  return 0x1b;
}



/* Entry: 1031c12b4; end: 1031c1337;  */

void FUN_1031c12b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1031c13f0,param_2,FUN_1031c13f4,param_2,FUN_1031c141c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1031c1338; end: 1031c137f;  */

undefined8 FUN_1031c1338(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1031c4240();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1031c1380; end: 1031c13af;  */

undefined ** FUN_1031c1380(void)

{
  return &PTR_DAT_113066598;
}



/* Entry: 1031c13b0; end: 1031c13cf;  */

void FUN_1031c13b0(void)

{
  func_0x000107c61168(&PTR_PTR_112f49848);
  return;
}



/* Entry: 1031c13d0; end: 1031c13f3;  */

undefined1  [16] FUN_1031c13d0(void)

{
  return ZEXT816(0x11061d2e0);
}



/* Entry: 1031c13f4; end: 1031c141b;  */

void FUN_1031c13f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1031c141c; end: 1031c1423;  */

undefined8 FUN_1031c141c(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1031c4240();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1031c1424; end: 1031c145f;  */

void FUN_1031c1424(undefined8 *param_1,undefined8 param_2)

{
  FUN_1031c1460();
  func_0x0001000a7f38("ChatMediaPreviewScopeInitializationPluginRegistryServiceProvider",0x40,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1031c1460; end: 1031c164b;  */

void FUN_1031c1460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cbc8;
  ppuVar4 = &PTR_DAT_113066598;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f498b0;
  func_0x0001000285a8(0x112f498b0,&UNK_10db97438);
  func_0x0001000a6ee8(&UNK_11061d2e0,"ChatMediaPreviewEntryPointWrapperScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1031c16c0,param_1,uVar2,&UNK_11061d2e0,&PTR_DAT_112f497e0);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11061d330;
  func_0x000107c613fc(&UNK_11061d330,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11061d540,"ChatMediaPreviewScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_1031c16c8,puVar3,uVar2,&UNK_11061d540,&PTR_DAT_112f49940);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11061d358;
  func_0x000107c613fc(&UNK_11061d358,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11061d150,"ChatMediaPreviewScopedServicesScopeInitializationPluginKey",
                      0x3a,2,FUN_1031c17b0,puVar3,uVar2,&UNK_11061d150,&PTR_DAT_112f49760);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f498b8;
  func_0x0001000285a8(0x112f498b8,&UNK_10db97440);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1031c164c; end: 1031c16bf;  */

void FUN_1031c164c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1031c17ec;
  func_0x0001000823a8(0x1031c17ec,param_3);
  func_0x000100082720("ChatMediaPreviewEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c16c0; end: 1031c16c7;  */

void FUN_1031c16c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1031c17ec;
  func_0x0001000823a8();
  func_0x000100082720("ChatMediaPreviewEntryPointWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c16c8; end: 1031c1707;  */

void FUN_1031c16c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1031c1d88(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ChatMediaPreviewScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031c1708; end: 1031c17af;  */

void FUN_1031c1708(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061d380;
  func_0x000107c613fc(&UNK_11061d380,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1031c17e4;
  func_0x0001000823a8(FUN_1031c17e4,puVar1);
  func_0x000100082720("ChatMediaPreviewScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1031c17b0; end: 1031c17b7;  */

void FUN_1031c17b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11061d380;
  func_0x000107c613fc(&UNK_11061d380,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1031c17e4;
  func_0x0001000823a8(FUN_1031c17e4,puVar3);
  func_0x000100082720("ChatMediaPreviewScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1031c17b8; end: 1031c17e3;  */

void FUN_1031c17b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031c17e4; end: 1031c17f3;  */

void FUN_1031c17e4(undefined8 *param_1)

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
  puVar1 = &UNK_11061d1d8;
  func_0x000107c613fc(&UNK_11061d1d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031c0cd4;
  func_0x00010058fa64(FUN_1031c0cd4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


