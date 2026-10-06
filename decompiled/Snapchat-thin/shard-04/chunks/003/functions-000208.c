/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10330d23c; end: 10330d28f;  */

void FUN_10330d23c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10330d290; end: 10330d4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10330d290(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4b0c8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010330c3f4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f584c8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f58570);
      *(long *)(unaff_x20 + _DAT_112f58570) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "LensExplorerInfoCardScopeGraphBridge/SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider.swift"
                      ,0x7f,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330d3bc);
  (*pcVar1)();
}



/* Entry: 10330d4a4; end: 10330d4d7; -[SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider provide] */

void FUN_10330d4a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10330d290();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10330d4d8; end: 10330d50b; -[SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_10330d4d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010330d3bc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10330d50c; end: 10330d54f; -[SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider end] */

void FUN_10330d50c(undefined8 param_1)

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



/* Entry: 10330d550; end: 10330d6e7;  */

void FUN_10330d550(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0ec2080)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f13df80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensExplorerInfoCardScopeGraphBridge/SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider.swift"
                            ,0x7f,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10330d6e8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55d14();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10330d6e8; end: 10330d793; -[SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10330d6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10330d550(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10330d794; end: 10330d807; -[SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d794(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f58560,0);
  func_0x000107c61614(param_1 + _DAT_112f58568,0);
  *(undefined8 *)(param_1 + _DAT_112f58570) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10330d808; end: 10330d83b;  */

void FUN_10330d808(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10330d83c; end: 10330d883; -[SCSCLensExplorerInfoCardScopedLensExplorerSessionLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d83c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f58560);
  func_0x000107c61610(param_1 + _DAT_112f58568);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f58570));
  return;
}



/* Entry: 10330d884; end: 10330d8a3;  */

void FUN_10330d884(void)

{
  func_0x000107c61168(&PTR_PTR_112f585b8);
  return;
}



/* Entry: 10330d8a4; end: 10330d8eb; -[SCSCLensExplorerInfoCardScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d8a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f58620;
  func_0x000107c61428(param_1 + _DAT_112f58620,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10330d8ec; end: 10330d943; -[SCSCLensExplorerInfoCardScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d8ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f58620;
  func_0x000107c61428(param_1 + _DAT_112f58620,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10330d944; end: 10330da1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330d944(undefined8 param_1,long param_2)

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
    FUN_10330c6c8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f58480) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10330da1c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f58488);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f58628);
    *(long **)(unaff_x20 + _DAT_112f58628) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10330da1c; end: 10330da43; -[SCSCLensExplorerInfoCardScopedServicesSaberEntryPoint begin] */

void FUN_10330da1c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10330d944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10330da44; end: 10330dbbb;  */

/* WARNING: Possible PIC construction at 0x00010330daac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010330db44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330dab0) */
/* WARNING: Removing unreachable block (ram,0x00010330db48) */
/* WARNING: Removing unreachable block (ram,0x00010330db60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330da44(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f58628);
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



/* Entry: 10330dbbc; end: 10330dbc3;  */

void FUN_10330dbbc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10330dbc4; end: 10330dbf7; -[SCSCLensExplorerInfoCardScopedServicesSaberEntryPoint end] */

void FUN_10330dbc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10330da44();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10330dbf8; end: 10330dd17;  */

void FUN_10330dbf8(long param_1,long param_2,long param_3)

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
                        "LensExplorerInfoCardScopeGraphBridge/SCSCLensExplorerInfoCardScopedServicesSaberEntryPoint.swift"
                        ,0x60,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10330dd18);
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



/* Entry: 10330dd18; end: 10330ddc3; -[SCSCLensExplorerInfoCardScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_10330dd18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10330dbf8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10330ddc4; end: 10330de23; -[SCSCLensExplorerInfoCardScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330ddc4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f58620,0);
  *(undefined8 *)(param_1 + _DAT_112f58628) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10330de24; end: 10330de57;  */

void FUN_10330de24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10330de58; end: 10330de8f; -[SCSCLensExplorerInfoCardScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330de58(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f58620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58628));
  return;
}



/* Entry: 10330de90; end: 10330deaf;  */

void FUN_10330de90(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd4e0);
  return;
}



/* Entry: 10330deb0; end: 10330df1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330deb0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10330e2a4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f58660) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10330df1c; end: 10330df87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330df1c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f58660) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10330df88; end: 10330dfe7; -[_TtC45LensExplorerStoryScopedFactoryServiceProvider33SCLensExplorerStoryScopedServices init] */

void FUN_10330df88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerStoryScopedFactoryServiceProvider.SCLensExplorerStoryScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330dfb4);
  (*pcVar1)();
}



/* Entry: 10330dfe8; end: 10330dff7; -[_TtC45LensExplorerStoryScopedFactoryServiceProvider33SCLensExplorerStoryScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330dfe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f58660));
  return;
}



/* Entry: 10330dff8; end: 10330e063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330dff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11063cd48;
  func_0x000107c613fc(&UNK_11063cd48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10330e33c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10330e064; end: 10330e0ff;  */

void FUN_10330e064(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11063cc58;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11063cc58;
  return;
}



/* Entry: 10330e100; end: 10330e137;  */

void FUN_10330e100(long *param_1)

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



/* Entry: 10330e138; end: 10330e13f;  */

undefined8 FUN_10330e138(void)

{
  return 0x1b;
}



/* Entry: 10330e140; end: 10330e273;  */

void FUN_10330e140(undefined8 *param_1)

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
  puVar1 = &UNK_11063cd70;
  func_0x000107c613fc(&UNK_11063cd70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10330e314;
  func_0x00010058fa64(FUN_10330e314,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10330e274; end: 10330e2a3;  */

undefined ** FUN_10330e274(void)

{
  return &PTR_DAT_113066c40;
}



/* Entry: 10330e2a4; end: 10330e2c3;  */

void FUN_10330e2a4(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd5a0);
  return;
}



/* Entry: 10330e2c4; end: 10330e313;  */

undefined1  [16] FUN_10330e2c4(void)

{
  return ZEXT816(0x11063cca8);
}



/* Entry: 10330e314; end: 10330e33b;  */

void FUN_10330e314(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10330e33c; end: 10330e33f;  */

void FUN_10330e33c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10330e340; end: 10330e3e7;  */

/* WARNING: Possible PIC construction at 0x00010330e3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330e3d4) */

void FUN_10330e340(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11063cdf8;
  func_0x000107c613fc(&UNK_11063cdf8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112f586d0;
  func_0x0001000285a8(0x112f586d0,&UNK_10dbb0330);
  func_0x000107c613fc();
  pcVar3 = FUN_10330e774;
  func_0x0001000841fc(FUN_10330e774,puVar1,uVar2);
  func_0x000100084214(&UNK_10dbb0300,0x2f,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10330e3e8; end: 10330e3ff;  */

/* WARNING: Possible PIC construction at 0x00010330e3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330e3d4) */

void FUN_10330e3e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_11063cdf8;
  func_0x000107c613fc(&UNK_11063cdf8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112f586d0;
  func_0x0001000285a8(0x112f586d0,&UNK_10dbb0330);
  func_0x000107c613fc();
  pcVar4 = FUN_10330e774;
  func_0x0001000841fc(FUN_10330e774,puVar2,uVar3);
  func_0x000100084214(&UNK_10dbb0300,0x2f,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10330e400; end: 10330e773;  */

void FUN_10330e400(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  
  uVar11 = *param_2;
  func_0x0001000285a8(0x112f586d8,&UNK_10dbb0338);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10330f79c();
  func_0x000100082720("SCContentProductPlaybackScopeExposerSubjectServiceProvider",0x3a,2);
  puVar3 = puVar2;
  FUN_10330f828();
  func_0x000100082720("SCContentProductPlaybackScopeExposerObservableServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10330e100;
  func_0x0001000823a8(FUN_10330e100,0);
  func_0x000100082720("SCLensExplorerStoryScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar5 = puVar2;
  FUN_10330f650();
  func_0x000100082720("LensExplorerStoryScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f586e0,&UNK_10dbb0350);
  puVar6 = &UNK_11063ce20;
  func_0x000107c613fc(&UNK_11063ce20,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 **)(puVar6 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar3);
  uVar11 = 0x10330e77c;
  func_0x0001000823a8(0x10330e77c,puVar6);
  func_0x000100082720("SCLensExplorerStoryPlaybackEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f586e8,&UNK_10dbb0340);
  puVar6 = &UNK_11063ce48;
  func_0x000107c613fc(&UNK_11063ce48,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_10330e7c4;
  func_0x0001000823a8(FUN_10330e7c4,puVar6);
  func_0x000100082720("SCLensExplorerStoryScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f58668,&UNK_10dbb00d0);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x10330e7d0;
  func_0x0001000823a8(0x10330e7d0,pcVar7);
  func_0x000100082720("SCLensExplorerStoryScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f58658,&UNK_10dbb00c0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x10330e7d8;
  func_0x0001000823a8(0x10330e7d8,uVar8);
  func_0x000100082720("SCLensExplorerStoryScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11063ce70;
  func_0x000107c613fc(&UNK_11063ce70,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_10330e80c;
  func_0x0001000823a8(FUN_10330e80c,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCLensExplorerStoryScopeEntryPointProvider",0x2a,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 10330e774; end: 10330e787;  */

void FUN_10330e774(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112f586d8,&UNK_10dbb0338);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10330f79c();
  func_0x000100082720("SCContentProductPlaybackScopeExposerSubjectServiceProvider",0x3a,2);
  puVar3 = puVar2;
  FUN_10330f828();
  func_0x000100082720("SCContentProductPlaybackScopeExposerObservableServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_10330e100;
  func_0x0001000823a8(FUN_10330e100,0);
  func_0x000100082720("SCLensExplorerStoryScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar5 = puVar2;
  FUN_10330f650();
  func_0x000100082720("LensExplorerStoryScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f586e0,&UNK_10dbb0350);
  puVar6 = &UNK_11063ce20;
  func_0x000107c613fc(&UNK_11063ce20,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  *(undefined8 **)(puVar6 + 0x28) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar7 = 0x10330e77c;
  func_0x0001000823a8(0x10330e77c,puVar6);
  func_0x000100082720("SCLensExplorerStoryPlaybackEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f586e8,&UNK_10dbb0340);
  puVar6 = &UNK_11063ce48;
  func_0x000107c613fc(&UNK_11063ce48,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_10330e7c4;
  func_0x0001000823a8(FUN_10330e7c4,puVar6);
  func_0x000100082720("SCLensExplorerStoryScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112f58668,&UNK_10dbb00d0);
  func_0x000107c6157c(pcVar8);
  uVar9 = 0x10330e7d0;
  func_0x0001000823a8(0x10330e7d0,pcVar8);
  func_0x000100082720("SCLensExplorerStoryScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f58658,&UNK_10dbb00c0);
  func_0x000107c6157c(uVar9);
  uVar11 = 0x10330e7d8;
  func_0x0001000823a8(0x10330e7d8,uVar9);
  func_0x000100082720("SCLensExplorerStoryScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11063ce70;
  func_0x000107c613fc(&UNK_11063ce70,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar11;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar10 = FUN_10330e80c;
  func_0x0001000823a8(FUN_10330e80c,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCLensExplorerStoryScopeEntryPointProvider",0x2a,2);
  *param_1 = pcVar10;
  return;
}



/* Entry: 10330e788; end: 10330e7c3;  */

void FUN_10330e788(void)

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



/* Entry: 10330e7c4; end: 10330e7df;  */

void FUN_10330e7c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10330edb8(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCLensExplorerStoryScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10330e7e0; end: 10330e80b;  */

void FUN_10330e7e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10330e80c; end: 10330e813;  */

void FUN_10330e80c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11063cc58;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11063cc58;
  return;
}



/* Entry: 10330e814; end: 10330e96b;  */

void FUN_10330e814(undefined8 *param_1)

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
  FUN_10330ed08();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10330ea98(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 10330e96c; end: 10330e9a7;  */

void FUN_10330e96c(void)

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



/* Entry: 10330e9a8; end: 10330e9af;  */

undefined8 FUN_10330e9a8(void)

{
  return 0x1b;
}



/* Entry: 10330e9b0; end: 10330ea33;  */

void FUN_10330e9b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10330ed48,param_2,FUN_10330ed4c,param_2,FUN_10330ed74,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10330ea34; end: 10330ea83;  */

undefined8 FUN_10330ea34(void)

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



/* Entry: 10330ea84; end: 10330ea97;  */

void FUN_10330ea84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11063ce88;
  return;
}



/* Entry: 10330ea98; end: 10330eceb;  */

void FUN_10330ea98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_4);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ad0a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f13e230);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar4);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar4 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f051710);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef32810);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10330ecec; end: 10330ed07;  */

undefined ** FUN_10330ecec(void)

{
  return &PTR_DAT_113066c40;
}



/* Entry: 10330ed08; end: 10330ed27;  */

void FUN_10330ed08(void)

{
  func_0x000107c61168(&PTR_PTR_112f58758);
  return;
}



/* Entry: 10330ed28; end: 10330ed4b;  */

undefined1  [16] FUN_10330ed28(void)

{
  return ZEXT816(0x11063cec8);
}



/* Entry: 10330ed4c; end: 10330ed73;  */

void FUN_10330ed4c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10330ed74; end: 10330ed7b;  */

undefined8 FUN_10330ed74(void)

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



/* Entry: 10330ed7c; end: 10330edb7;  */

void FUN_10330ed7c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10330edb8();
  func_0x0001000a7f38("SCLensExplorerStoryScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10330edb8; end: 10330efa3;  */

void FUN_10330edb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d6e0;
  ppuVar4 = &PTR_DAT_113066c40;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11063cf18;
  func_0x000107c613fc(&UNK_11063cf18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f587d0;
  func_0x0001000285a8(0x112f587d0,&UNK_10dbb04b0);
  func_0x0001000a6ee8(&UNK_11063d168,"LensExplorerStoryScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_10330efa4,puVar2,uVar3,&UNK_11063d168,&PTR_DAT_112f58868);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11063cec8,
                      "SCLensExplorerStoryPlaybackEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_10330f058,param_3,uVar3,&UNK_11063cec8,&PTR_DAT_112f586f0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11063cf40;
  func_0x000107c613fc(&UNK_11063cf40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11063cce8,"SCLensExplorerStoryScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_10330f108,puVar2,uVar3,&UNK_11063cce8,&PTR_DAT_112f58670);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f587d8;
  func_0x0001000285a8(0x112f587d8,&UNK_10dbb04b8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10330efa4; end: 10330efe3;  */

void FUN_10330efa4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10330f8d0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensExplorerStoryScopeGraphBridgeScopeInitializationPluginProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10330efe4; end: 10330f057;  */

void FUN_10330efe4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x10330f144;
  func_0x0001000823a8(0x10330f144,param_3);
  func_0x000100082720("SCLensExplorerStoryPlaybackEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10330f058; end: 10330f05f;  */

void FUN_10330f058(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x10330f144;
  func_0x0001000823a8();
  func_0x000100082720("SCLensExplorerStoryPlaybackEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10330f060; end: 10330f107;  */

void FUN_10330f060(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11063cf68;
  func_0x000107c613fc(&UNK_11063cf68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10330f13c;
  func_0x0001000823a8(FUN_10330f13c,puVar1);
  func_0x000100082720("SCLensExplorerStoryScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10330f108; end: 10330f10f;  */

void FUN_10330f108(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11063cf68;
  func_0x000107c613fc(&UNK_11063cf68,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10330f13c;
  func_0x0001000823a8(FUN_10330f13c,puVar3);
  func_0x000100082720("SCLensExplorerStoryScopedServicesScopeInitializationPluginProvider",0x42,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10330f110; end: 10330f13b;  */

void FUN_10330f110(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10330f13c; end: 10330f14b;  */

void FUN_10330f13c(undefined8 *param_1)

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
  puVar1 = &UNK_11063cd70;
  func_0x000107c613fc(&UNK_11063cd70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10330e314;
  func_0x00010058fa64(FUN_10330e314,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10330f14c; end: 10330f227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10330f14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_10330f560();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f587e0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f587e8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330f228);
  (*pcVar1)();
}



/* Entry: 10330f228; end: 10330f287; -[_TtC33LensExplorerStoryScopeGraphBridge48LensExplorerStoryScopeGraphBridgeSaberEntryPoint init] */

void FUN_10330f228(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerStoryScopeGraphBridge.LensExplorerStoryScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330f254);
  (*pcVar1)();
}



/* Entry: 10330f288; end: 10330f2bf; -[_TtC33LensExplorerStoryScopeGraphBridge48LensExplorerStoryScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010330f2a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010330f2a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330f288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f587e0));
  return;
}



/* Entry: 10330f2c0; end: 10330f2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330f2c0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f587e8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f587e0));
  return;
}



/* Entry: 10330f2e8; end: 10330f307;  */

void FUN_10330f2e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd660);
  return;
}



/* Entry: 10330f308; end: 10330f38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10330f308(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f58818) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f58820);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10330f390);
  (*pcVar2)();
}



/* Entry: 10330f390; end: 10330f477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10330f390(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f58818);
  *(undefined **)(unaff_x20 + _DAT_112f58818) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f58820);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f58820))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11063d088;
  func_0x000107c613fc(&UNK_11063d088,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10330f47c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10330f478; end: 10330f483;  */

void FUN_10330f478(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10330f484; end: 10330f4e3; -[_TtC33LensExplorerStoryScopeGraphBridge48SCLensExplorerStoryScopedServicesSaberEntryPoint init] */

void FUN_10330f484(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerStoryScopeGraphBridge.SCLensExplorerStoryScopedServicesSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330f4b0);
  (*pcVar1)();
}



/* Entry: 10330f4e4; end: 10330f51b; -[_TtC33LensExplorerStoryScopeGraphBridge48SCLensExplorerStoryScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330f4e4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f58820));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f58818));
  return;
}



/* Entry: 10330f51c; end: 10330f51f;  */

void FUN_10330f51c(void)

{
  return;
}



/* Entry: 10330f520; end: 10330f53f;  */

void FUN_10330f520(void)

{
  FUN_10330f390();
  return;
}



/* Entry: 10330f540; end: 10330f55f;  */

void FUN_10330f540(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd728);
  return;
}



/* Entry: 10330f560; end: 10330f62f;  */

undefined8 FUN_10330f560(void)

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
  
  func_0x000107c61428(0x112f58850,&uStack_40,0x20,0);
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
    FUN_10330f630();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10330f630; end: 10330f64f;  */

void FUN_10330f630(void)

{
  func_0x000107c61168(&PTR_PTR_1128cd7f0);
  return;
}



/* Entry: 10330f650; end: 10330f66b;  */

void FUN_10330f650(undefined8 param_1)

{
  func_0x0001000285a8(0x112f58858,&UNK_10dbb0588);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10330f6d8,param_1);
  return;
}



/* Entry: 10330f66c; end: 10330f6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330f66c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10330f630();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f58860) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10330f6d8; end: 10330f6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330f6d8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10330f630();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112f58860) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10330f6e0; end: 10330f72b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330f6e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f58860) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10330f72c; end: 10330f78b; -[_TtC33LensExplorerStoryScopeGraphBridge41LensExplorerStoryScopeGraphBridgeServices init] */

void FUN_10330f72c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensExplorerStoryScopeGraphBridge.LensExplorerStoryScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10330f758);
  (*pcVar1)();
}



/* Entry: 10330f78c; end: 10330f79b; -[_TtC33LensExplorerStoryScopeGraphBridge41LensExplorerStoryScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330f78c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f58860));
  return;
}



/* Entry: 10330f79c; end: 10330f827;  */

void FUN_10330f79c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x10330f7dc,0);
  return;
}



/* Entry: 10330f828; end: 10330f843;  */

void FUN_10330f828(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10330f894,param_1);
  return;
}



/* Entry: 10330f844; end: 10330f893;  */

void FUN_10330f844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 10330f894; end: 10330f8c7;  */

void FUN_10330f894(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10330f8c8; end: 10330f8cf;  */

undefined8 FUN_10330f8c8(void)

{
  return 0x1b;
}



/* Entry: 10330f8d0; end: 10330fa47;  */

void FUN_10330f8d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11063d0d0;
  func_0x000107c613fc(&UNK_11063d0d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10330fa48,puVar1);
  return;
}



/* Entry: 10330fa48; end: 10330fa4f;  */

void FUN_10330fa48(undefined8 *param_1)

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
  func_0x000107c61428(0x112f58850,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f58850,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11063d1a8;
  func_0x000107c613fc(&UNK_11063d1a8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10330fb1c;
  func_0x00010058fa64(0x10330fb1c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10330fa50; end: 10330faab;  */

void FUN_10330fa50(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f58850,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f58850,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10330faac; end: 10330fb23;  */

undefined ** FUN_10330faac(void)

{
  return &PTR_DAT_113066c40;
}



/* Entry: 10330fb24; end: 10330fb6b; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330fb24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f588b8;
  func_0x000107c61428(param_1 + _DAT_112f588b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10330fb6c; end: 10330fbc3; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330fb6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f588b8;
  func_0x000107c61428(param_1 + _DAT_112f588b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10330fbc4; end: 10330fc0b; -[SCLensExplorerStoryScopeGraphBridgeSaberEntryPoint sCContentProductPlaybackScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10330fbc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f588c0;
  func_0x000107c61428(param_1 + _DAT_112f588c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}


