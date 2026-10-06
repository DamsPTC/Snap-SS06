/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016bec50; end: 1016bede7;  */

void FUN_1016bec50(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef1048d30)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000034,0x800000010efb72d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensProcessingPluginsScopeGraphBridge/SCLensProcessingPluginsScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x62,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bede8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55e1c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1016bede8; end: 1016bee93; -[SCLensProcessingPluginsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1016bede8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1016bec50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1016bee94; end: 1016beeff; -[SCLensProcessingPluginsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bee94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dc0ab8,0);
  *(undefined8 *)(param_1 + _DAT_112dc0ac0) = 0;
  *(undefined8 *)(param_1 + _DAT_112dc0ac8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016bef00; end: 1016bef33;  */

void FUN_1016bef00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016bef34; end: 1016bef7b; -[SCLensProcessingPluginsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016bef60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016bef64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bef34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dc0ab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc0ac0));
  return;
}



/* Entry: 1016bef7c; end: 1016bef9b;  */

void FUN_1016bef7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e6af8);
  return;
}



/* Entry: 1016bef9c; end: 1016befe3; -[SCSCLensProcessingPluginsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bef9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dc0af8;
  func_0x000107c61428(param_1 + _DAT_112dc0af8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016befe4; end: 1016bf03b; -[SCSCLensProcessingPluginsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016befe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc0af8;
  func_0x000107c61428(param_1 + _DAT_112dc0af8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1016bf03c; end: 1016bf113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bf03c(undefined8 param_1,long param_2)

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
    FUN_1016be53c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112dc0a20) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bf114);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112dc0a28);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112dc0b00);
    *(long **)(unaff_x20 + _DAT_112dc0b00) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1016bf114; end: 1016bf13b; -[SCSCLensProcessingPluginsScopedServicesSaberEntryPoint begin] */

void FUN_1016bf114(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1016bf03c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016bf13c; end: 1016bf2b3;  */

/* WARNING: Possible PIC construction at 0x0001016bf1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016bf23c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016bf1a8) */
/* WARNING: Removing unreachable block (ram,0x0001016bf240) */
/* WARNING: Removing unreachable block (ram,0x0001016bf258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bf13c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc0b00);
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



/* Entry: 1016bf2b4; end: 1016bf2bb;  */

void FUN_1016bf2b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1016bf2bc; end: 1016bf2ef; -[SCSCLensProcessingPluginsScopedServicesSaberEntryPoint end] */

void FUN_1016bf2bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1016bf13c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016bf2f0; end: 1016bf40f;  */

void FUN_1016bf2f0(long param_1,long param_2,long param_3)

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
                        "LensProcessingPluginsScopeGraphBridge/SCSCLensProcessingPluginsScopedServicesSaberEntryPoint.swift"
                        ,0x62,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bf410);
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



/* Entry: 1016bf410; end: 1016bf4bb; -[SCSCLensProcessingPluginsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1016bf410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1016bf2f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1016bf4bc; end: 1016bf51b; -[SCSCLensProcessingPluginsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bf4bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112dc0af8,0);
  *(undefined8 *)(param_1 + _DAT_112dc0b00) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016bf51c; end: 1016bf54f;  */

void FUN_1016bf51c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016bf550; end: 1016bf587; -[SCSCLensProcessingPluginsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bf550(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112dc0af8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc0b00));
  return;
}



/* Entry: 1016bf588; end: 1016bf5a7;  */

void FUN_1016bf588(void)

{
  func_0x000107c61168(&PTR_PTR_1127e6bc0);
  return;
}



/* Entry: 1016bf5a8; end: 1016bf62b; -[_TtC29SCLensCremaBackdoorEntryPoint34ApiCoverageReportBackdoorProcessor matchWithRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1016bf5a8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar4 = *(undefined ***)(param_3 + _DAT_1138130e8);
  lVar1 = ((long *)(param_3 + _DAT_1138130e8))[1];
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd81d8;
  func_0x000107c5faec();
  if (ppuVar4 == ppuVar3 && lVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(ppuVar4,lVar1,ppuVar3,param_2,0);
    uVar2 = (uint)ppuVar4;
  }
  func_0x000107c6142c(param_2);
  return uVar2 & 1;
}



/* Entry: 1016bf62c; end: 1016bf6bf; -[_TtC29SCLensCremaBackdoorEntryPoint34ApiCoverageReportBackdoorProcessor processWithRequest:error:] */

/* WARNING: Removing unreachable block (ram,0x0001016bf650) */
/* WARNING: Removing unreachable block (ram,0x0001016bf6a0) */
/* WARNING: Removing unreachable block (ram,0x0001016bf654) */

void FUN_1016bf62c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1016bf74c();
  uVar1 = param_1;
  func_0x000107c5ee20();
  func_0x00010006c090(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016bf6c0; end: 1016bf6fb; -[_TtC29SCLensCremaBackdoorEntryPoint34ApiCoverageReportBackdoorProcessor init] */

void FUN_1016bf6c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001016bf72c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016bf6fc; end: 1016bf74b;  */

void FUN_1016bf6fc(void)

{
  func_0x0001016bf72c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016bf74c; end: 1016bfda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016bf74c(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  undefined8 unaff_x21;
  long lVar21;
  long lVar22;
  code *pcVar23;
  long lVar24;
  long alStack_f0 [6];
  code *pcStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined **ppuVar12;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pcVar18 = (code *)((long)&pcStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pcStack_a0 = pcVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcVar18 + -extraout_x12;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar22 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar16 = (long)pcVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar24 - extraout_x12_02;
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3ac48();
  func_0x000107c61180();
  puVar9 = puVar5;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar5);
  if (*(long *)(puVar9 + 0x10) == 0) {
    func_0x000107c6142c(puVar9);
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x1016bfda0);
    (*pcVar18)();
  }
  uVar17 = (ulong)*(byte *)(lVar22 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar22 + 0x50) ^ 0xffffffffffffffff);
  pcVar14 = *(code **)(lVar22 + 0x10);
  (*pcVar14)(lVar21,puVar9 + uVar17,lVar3);
  func_0x000107c6142c(puVar9);
  uVar6 = 0xd000000000000019;
  func_0x000107c5ed98(lVar24,0xd000000000000019,0x800000010efb73f0,1);
  func_0x000107c5ed90();
  puVar5 = puVar4;
  func_0x000107c4052c();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = 0;
  pcVar19 = pcVar18;
  if (puVar5 == (undefined *)0x0) {
    uVar7 = uVar6;
    func_0x000107c61174(0);
    func_0x000107c5ed30();
    func_0x000107c61170(uVar7);
    func_0x000107c61654();
    func_0x000107c61170(puVar4);
    func_0x000107c614ac(uVar6);
    pcVar14 = *(code **)(lVar22 + 8);
    (*pcVar14)(lVar24,lVar3);
    (*pcVar14)(lVar21,lVar3);
    lVar15 = 1;
    (**(code **)(lVar22 + 0x38))(pcVar18,1,1,lVar3);
    unaff_x21 = 0;
  }
  else {
    puVar9 = puVar5;
    lStack_a8 = lVar21;
    puStack_98 = puVar4;
    func_0x000107c5fc54(puVar5,lVar3);
    func_0x000107c61174(0);
    func_0x000107c61170(puVar5);
    lVar15 = *(long *)(puVar9 + 0x10);
    if (lVar15 != 0) {
      (*pcVar14)(pcVar18,puVar9 + uVar17,lVar3);
    }
    func_0x000107c6142c(puVar9);
    pcVar20 = *(code **)(lVar22 + 0x38);
    (*pcVar20)(pcVar18,lVar15 == 0,1,lVar3);
    pcVar23 = *(code **)(lVar22 + 0x30);
    pcVar8 = pcVar18;
    lVar15 = lVar3;
    (*pcVar23)(pcVar18,1);
    if ((int)pcVar8 == 1) {
      func_0x000107c61170(puStack_98);
      pcVar14 = *(code **)(lVar22 + 8);
      (*pcVar14)(lVar24,lVar3);
      (*pcVar14)(lStack_a8,lVar3);
      uVar6 = unaff_x21;
    }
    else {
      pcStack_c0 = *(code **)(lVar22 + 0x20);
      lVar15 = lVar16;
      pcStack_b8 = pcVar20;
      (*pcStack_c0)(lVar16,pcVar18,lVar3);
      func_0x000107c5ed90();
      puVar4 = puStack_98;
      puVar5 = puStack_98;
      func_0x000107c4052c();
      func_0x000107c61180();
      func_0x000107c61170(lVar15);
      uVar6 = 0;
      if (puVar5 == (undefined *)0x0) {
        uVar7 = uVar6;
        func_0x000107c61174(0);
        func_0x000107c5ed30();
        func_0x000107c61170(uVar7);
        func_0x000107c61654();
        func_0x000107c61170(puVar4);
        func_0x000107c614ac(uVar6);
        pcVar19 = *(code **)(lVar22 + 8);
        (*pcVar19)(lVar16,lVar3);
        (*pcVar19)(lVar24,lVar3);
        (*pcVar19)(lStack_a8,lVar3);
        pcVar18 = pcStack_a0;
        lVar15 = 1;
        (*pcStack_b8)(pcStack_a0,1,1,lVar3);
        unaff_x21 = 0;
      }
      else {
        puVar4 = puVar5;
        func_0x000107c5fc54(puVar5,lVar3);
        func_0x000107c61174(0);
        func_0x000107c61170(puVar5);
        pcVar18 = pcStack_a0;
        lVar15 = *(long *)(puVar4 + 0x10);
        if (lVar15 != 0) {
          (*pcVar14)(pcStack_a0,puVar4 + uVar17,lVar3);
        }
        func_0x000107c6142c(puVar4);
        (*pcStack_b8)(pcVar18,lVar15 == 0,1,lVar3);
        pcVar19 = pcVar18;
        lVar15 = lVar3;
        (*pcVar23)(pcVar18,1);
        lVar1 = lStack_b0;
        if ((int)pcVar19 != 1) {
          lVar10 = lStack_b0;
          (*pcStack_c0)(lStack_b0,pcVar18,lVar3);
          func_0x000107c5edc4();
          pcVar14 = pcVar18;
          func_0x000107c5fadc();
          func_0x000107c6142c(pcVar18);
          puVar4 = puStack_98;
          puVar5 = puStack_98;
          lVar15 = lVar10;
          func_0x000107c40520();
          func_0x000107c61180();
          func_0x000107c61170(lVar10);
          lVar10 = lStack_a8;
          if (puVar5 == (undefined *)0x0) {
            func_0x000107c61170(puVar4);
            pcVar19 = *(code **)(lVar22 + 8);
            (*pcVar19)(lVar1,lVar3);
            (*pcVar19)(lVar16,lVar3);
            (*pcVar19)(lVar24,lVar3);
            (*pcVar19)(lVar10,lVar3);
            puVar9 = (undefined *)0x0;
            pcVar14 = (code *)0xc000000000000000;
            uVar6 = unaff_x21;
          }
          else {
            puVar9 = puVar5;
            func_0x000107c5ee30(puVar5);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar4);
            pcVar19 = *(code **)(lVar22 + 8);
            (*pcVar19)(lVar1,lVar3);
            (*pcVar19)(lVar16,lVar3);
            (*pcVar19)(lVar24,lVar3);
            (*pcVar19)(lVar10,lVar3);
            uVar6 = unaff_x21;
          }
          goto LAB_1016bfa9c;
        }
        func_0x000107c61170(puStack_98);
        pcVar19 = *(code **)(lVar22 + 8);
        (*pcVar19)(lVar16,lVar3);
        (*pcVar19)(lVar24,lVar3);
        (*pcVar19)(lStack_a8,lVar3);
        uVar6 = unaff_x21;
      }
    }
  }
  func_0x0001000293e4(pcVar18);
  puVar9 = (undefined *)0x0;
  pcVar14 = (code *)0xc000000000000000;
LAB_1016bfa9c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar9;
  }
  func_0x000107c60e78(puVar9);
  *(long *)(lVar21 + -0x30) = lVar3;
  *(undefined8 *)(lVar21 + -0x28) = uVar6;
  *(undefined8 *)(lVar21 + -0x20) = unaff_x21;
  *(code **)(lVar21 + -0x18) = pcVar19;
  *(undefined1 **)(lVar21 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar21 + -8) = FUN_1016bfda4;
  ppuVar12 = *(undefined ***)(lVar15 + _DAT_1138130e8);
  pcVar18 = (code *)((long *)(lVar15 + _DAT_1138130e8))[1];
  ppuVar11 = &PTR____CFConstantStringClassReference_110dd8198;
  func_0x000107c5faec();
  if (ppuVar12 == ppuVar11 && pcVar18 == pcVar14) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(ppuVar12,pcVar18,ppuVar11,pcVar14,0);
    uVar2 = (uint)ppuVar12;
  }
  func_0x000107c6142c(pcVar14);
  return (undefined *)(ulong)(uVar2 & 1);
}



/* Entry: 1016bfda4; end: 1016bfe27; -[_TtC29SCLensCremaBackdoorEntryPoint30LensCoreTraceBackdoorProcessor matchWithRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1016bfda4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar4 = *(undefined ***)(param_3 + _DAT_1138130e8);
  lVar1 = ((long *)(param_3 + _DAT_1138130e8))[1];
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd8198;
  func_0x000107c5faec();
  if (ppuVar4 == ppuVar3 && lVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(ppuVar4,lVar1,ppuVar3,param_2,0);
    uVar2 = (uint)ppuVar4;
  }
  func_0x000107c6142c(param_2);
  return uVar2 & 1;
}



/* Entry: 1016bfe28; end: 1016bfebb; -[_TtC29SCLensCremaBackdoorEntryPoint30LensCoreTraceBackdoorProcessor processWithRequest:error:] */

/* WARNING: Removing unreachable block (ram,0x0001016bfe4c) */
/* WARNING: Removing unreachable block (ram,0x0001016bfe9c) */
/* WARNING: Removing unreachable block (ram,0x0001016bfe50) */

void FUN_1016bfe28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1016bff48();
  uVar1 = param_1;
  func_0x000107c5ee20();
  func_0x00010006c090(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016bfebc; end: 1016bfef7; -[_TtC29SCLensCremaBackdoorEntryPoint30LensCoreTraceBackdoorProcessor init] */

void FUN_1016bfebc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001016bff28();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016bfef8; end: 1016bff47;  */

void FUN_1016bfef8(void)

{
  func_0x0001016bff28();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016bff48; end: 1016c01d7;  */

undefined1  [16] FUN_1016bff48(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar2 = puVar6;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5fc54(puVar3,lVar1);
  func_0x000107c61170(puVar3);
  if (*(long *)(puVar2 + 0x10) != 0) {
    (**(code **)(lVar4 + 0x10))
              (lVar7 - extraout_x12_01,
               puVar2 + ((ulong)*(byte *)(lVar4 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    func_0x000107c6142c(puVar2);
    func_0x000107c5ed9c(puVar9,0xd000000000000018,0x800000010efb7410);
    func_0x000107c5ed9c(lVar8,0x726f635f736e656c,0xef65636172745f65);
    pcVar5 = *(code **)(lVar4 + 8);
    (*pcVar5)(puVar9,lVar1);
    func_0x000107c5eda0(lVar7,0x65636172746670,0xe700000000000000);
    lVar4 = lVar1;
    (*pcVar5)(lVar8,lVar1);
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar2 = puVar6;
    func_0x000107c5edc4();
    lVar8 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    puVar3 = puVar6;
    func_0x000107c40520();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      lVar8 = -0x4000000000000000;
    }
    else {
      puVar6 = puVar3;
      func_0x000107c5ee30(puVar3);
      func_0x000107c61170(puVar3);
    }
    (*pcVar5)(lVar7,lVar1);
    (*pcVar5)(lVar7 - extraout_x12_01,lVar1);
    auVar10._8_8_ = lVar8;
    auVar10._0_8_ = puVar6;
    return auVar10;
  }
  func_0x000107c6142c(puVar2);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1016c01d8);
  (*pcVar5)();
}



/* Entry: 1016c01d8; end: 1016c0553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1016c01d8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
             long param_7)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar10 = param_3;
    func_0x000107c4af70();
    func_0x000107c61180();
    lVar9 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
  }
  if (param_5 == 0) {
    lVar10 = 0;
  }
  else {
    lVar7 = param_5;
    func_0x000107c4d034();
    func_0x000107c61180();
    lVar10 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
  }
  if (param_4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar8 = param_4;
    func_0x000107c4b4fc();
    func_0x000107c61180();
    lVar7 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
  }
  if (param_6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_6;
    func_0x000107c4538c();
    func_0x000107c61180();
  }
  if (param_7 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_7;
    func_0x000107c5d2bc();
    func_0x000107c61180();
  }
  lVar1 = 0;
  FUN_1016c0af4();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112dc0c18) = lVar9;
  *(long *)(lVar2 + _DAT_112dc0c20) = lVar10;
  *(long *)(lVar2 + _DAT_112dc0c28) = lVar7;
  *(long *)(lVar2 + _DAT_112dc0c30) = lVar8;
  *(long *)(lVar2 + _DAT_112dc0c38) = lVar5;
  plVar3 = &lStack_70;
  lStack_70 = lVar2;
  lStack_68 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  lVar9 = _DAT_11305d4c0;
  func_0x000107c4fce4(*(undefined8 *)(param_2 + _DAT_11305d4c0));
  uVar6 = *(undefined8 *)(param_2 + lVar9);
  uVar4 = 0;
  func_0x0001016c0ff4(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar6);
  func_0x000107c453e4(uVar4);
  func_0x000107c4fce4(uVar6);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + lVar9);
  uVar4 = 0;
  func_0x0001016c16cc(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar6);
  func_0x000107c453e4(uVar4);
  func_0x000107c4fce4(uVar6);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + lVar9);
  uVar4 = 0;
  func_0x0001016c141c(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar6);
  func_0x000107c453e4(uVar4);
  func_0x000107c4fce4(uVar6);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + lVar9);
  uVar4 = 0;
  func_0x0001016bf72c(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar6);
  func_0x000107c453e4(uVar4);
  func_0x000107c4fce4(uVar6);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + lVar9);
  uVar4 = 0;
  func_0x0001016bff28(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar6);
  func_0x000107c453e4(uVar4);
  func_0x000107c4fce4(uVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(plVar3);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return unaff_x20;
}



/* Entry: 1016c0554; end: 1016c056f;  */

void FUN_1016c0554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016c0570; end: 1016c058f;  */

void FUN_1016c0570(void)

{
  func_0x000107c61168(&PTR_PTR_112dc0bc0);
  return;
}



/* Entry: 1016c0590; end: 1016c0613; -[_TtC29SCLensCremaBackdoorEntryPoint26LensCremaBackdoorProcessor matchWithRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1016c0590(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar4 = *(undefined ***)(param_3 + _DAT_1138130e8);
  lVar1 = ((long *)(param_3 + _DAT_1138130e8))[1];
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd8138;
  func_0x000107c5faec();
  if (ppuVar4 == ppuVar3 && lVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(ppuVar4,lVar1,ppuVar3,param_2,0);
    uVar2 = (uint)ppuVar4;
  }
  func_0x000107c6142c(param_2);
  return uVar2 & 1;
}



/* Entry: 1016c0614; end: 1016c09b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1016c0614(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar7 = *(long *)(param_1 + _DAT_1138130e0);
  uStack_98 = 0xd000000000000011;
  uStack_90 = 0x800000010efb7430;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_88,&uStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_1016c06c0:
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c61434(lVar7);
    puVar3 = auStack_88;
    func_0x000100df95d0(puVar3);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      goto LAB_1016c06c0;
    }
    func_0x0001000bb420(*(long *)(lVar7 + 0x38) + (long)puVar3 * 0x20,&uStack_60);
    func_0x000107c6142c(lVar7);
  }
  func_0x0001007bbff0(auStack_88);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_60);
    goto LAB_1016c0780;
  }
  puVar4 = &uStack_98;
  func_0x000107c6147c(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)puVar4 & 1) == 0) goto LAB_1016c0780;
  uVar5 = uStack_98;
  FUN_1016c0b14(uStack_98,uStack_90);
  if (((uint)uVar5 & 0xff) == 9) goto LAB_1016c0780;
  uVar8 = ((long *)(param_1 + _DAT_1138130f8))[1];
  if (0xe < uVar8 >> 0x3c) goto LAB_1016c0780;
  lVar9 = *(long *)(param_1 + _DAT_1138130f8);
  uVar1 = (uint)uVar5 & 0xff;
  lVar7 = lVar9;
  puVar6 = PTR_PTR_1126ddc88;
  if (uVar1 < 4) {
    if (uVar1 == 1 || (uVar5 & 0xff) == 0) {
      lVar10 = _DAT_112dc0c38;
      if ((uVar5 & 0xff) != 0) goto LAB_1016c0968;
      func_0x000107c61168();
      func_0x00010006c00c(lVar9,uVar8);
      func_0x000107c5a9f0();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016c07e4);
        (*pcVar2)();
      }
    }
    else {
      if (uVar1 != 2) {
        func_0x00010006c00c(lVar9,uVar8);
        FUN_1016c0b78(lVar9,uVar8);
        if (lVar7 == 0) goto LAB_1016c08e8;
        if (*(long *)(unaff_x20 + _DAT_112dc0c30) != 0) {
          func_0x000107c3d76c();
        }
        goto LAB_1016c0998;
      }
      func_0x000107c61168();
      func_0x00010006c00c(lVar9,uVar8);
      func_0x000107c4b6d8();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016c0820);
        (*pcVar2)();
      }
    }
LAB_1016c0928:
    func_0x000107c5ee20(lVar9,uVar8);
    func_0x000107c3d734(puVar6);
    func_0x0001000b44c0(lVar9,uVar8);
    func_0x000107c61170(puVar6);
  }
  else {
    if (uVar1 < 6) {
      lVar10 = _DAT_112dc0c18;
      if (uVar1 == 4) {
        lVar10 = *(long *)(unaff_x20 + _DAT_112dc0c20);
        if (lVar10 == 0) goto LAB_1016c0780;
        func_0x00010006c00c(lVar9,uVar8);
        func_0x000107c5ee20(lVar9,uVar8);
        func_0x000107c3d770(lVar10);
      }
      else {
LAB_1016c0968:
        lVar10 = *(long *)(unaff_x20 + lVar10);
        if (lVar10 == 0) goto LAB_1016c0780;
        func_0x00010006c00c(lVar9,uVar8);
        func_0x000107c5ee20(lVar9,uVar8);
        func_0x000107c3d734(lVar10);
      }
    }
    else {
      if (uVar1 != 6) {
        if (uVar1 == 7) {
          func_0x00010006c00c(lVar9,uVar8);
          func_0x000103178f98(lVar9,uVar8);
LAB_1016c08e8:
          func_0x0001000b44c0(lVar9,uVar8);
          goto LAB_1016c0780;
        }
        func_0x000107c61168();
        func_0x00010006c00c(lVar9,uVar8);
        func_0x000107c5d150();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1016c09b4);
          (*pcVar2)();
        }
        goto LAB_1016c0928;
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_112dc0c28);
      if (lVar10 == 0) goto LAB_1016c0780;
      func_0x00010006c00c(lVar9,uVar8);
      func_0x000107c5ee20(lVar9,uVar8);
      func_0x000107c55dbc(lVar10);
    }
LAB_1016c0998:
    func_0x0001000b44c0(lVar9,uVar8);
  }
  func_0x000107c61170(lVar7);
LAB_1016c0780:
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 1016c09b4; end: 1016c0a2f; -[_TtC29SCLensCremaBackdoorEntryPoint26LensCremaBackdoorProcessor processWithRequest:error:] */

void FUN_1016c09b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1016c0614(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar1 = 0;
  func_0x000107c5ee20(0,0xc000000000000000);
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016c0a30; end: 1016c0a8b; -[_TtC29SCLensCremaBackdoorEntryPoint26LensCremaBackdoorProcessor init] */

void FUN_1016c0a30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCremaBackdoorEntryPoint.LensCremaBackdoorProcessor",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016c0a5c);
  (*pcVar1)();
}



/* Entry: 1016c0a8c; end: 1016c0af3; -[_TtC29SCLensCremaBackdoorEntryPoint26LensCremaBackdoorProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016c0aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016c0ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c0aac) */
/* WARNING: Removing unreachable block (ram,0x0001016c0adc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c0a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dc0c18));
  return;
}



/* Entry: 1016c0af4; end: 1016c0b13;  */

void FUN_1016c0af4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e6e00);
  return;
}



/* Entry: 1016c0b14; end: 1016c0b77;  */

ulong FUN_1016c0b14(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (8 < uVar1) {
    uVar1 = 9;
  }
  return uVar1;
}



/* Entry: 1016c0b78; end: 1016c0caf;  */

/* WARNING: Removing unreachable block (ram,0x0001016c0bd8) */

undefined8 FUN_1016c0b78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000107c610f8(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
  func_0x00010006c00c(param_1,param_2);
  lVar1 = param_1;
  func_0x00010130c4a4(param_1,param_2);
  func_0x00010006c090(param_1,param_2);
  if (lVar1 != 0) {
    func_0x000107c57e2c(lVar1);
    lVar2 = lVar1;
    func_0x000107c41478();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c60234(&uStack_90);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar1);
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      uVar3 = 0;
      FUN_1016c0cb0(0);
      puVar4 = &uStack_98;
      func_0x000107c6147c(puVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if ((int)puVar4 != 0) {
        return uStack_98;
      }
      return 0;
    }
    func_0x00010006e7f4(&uStack_70);
  }
  return 0;
}



/* Entry: 1016c0cb0; end: 1016c0cf3;  */

void FUN_1016c0cb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc0c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c8b58;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dc0c68 = puVar1;
  return;
}



/* Entry: 1016c0cf4; end: 1016c0dcb;  */

undefined8 FUN_1016c0cf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001009a56cc(param_1,param_2);
  return unaff_x20;
}



/* Entry: 1016c0dcc; end: 1016c0dd3;  */

long FUN_1016c0dcc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3f770();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c41574(lVar1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lVar1);
  }
  return lVar3;
}



/* Entry: 1016c0dd4; end: 1016c0e0b;  */

void FUN_1016c0dd4(long param_1)

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



/* Entry: 1016c0e0c; end: 1016c0e6f;  */

void FUN_1016c0e0c(long param_1,long param_2)

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



/* Entry: 1016c0e70; end: 1016c0ef3; -[_TtC29SCLensCremaBackdoorEntryPoint32LensReportCremaBackdoorProcessor matchWithRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1016c0e70(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar4 = *(undefined ***)(param_3 + _DAT_1138130e8);
  lVar1 = ((long *)(param_3 + _DAT_1138130e8))[1];
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd8178;
  func_0x000107c5faec();
  if (ppuVar4 == ppuVar3 && lVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(ppuVar4,lVar1,ppuVar3,param_2,0);
    uVar2 = (uint)ppuVar4;
  }
  func_0x000107c6142c(param_2);
  return uVar2 & 1;
}



/* Entry: 1016c0ef4; end: 1016c0f87; -[_TtC29SCLensCremaBackdoorEntryPoint32LensReportCremaBackdoorProcessor processWithRequest:error:] */

/* WARNING: Removing unreachable block (ram,0x0001016c0f18) */
/* WARNING: Removing unreachable block (ram,0x0001016c0f68) */
/* WARNING: Removing unreachable block (ram,0x0001016c0f1c) */

void FUN_1016c0ef4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1016c1014();
  uVar1 = param_1;
  func_0x000107c5ee20();
  func_0x00010006c090(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016c0f88; end: 1016c0fc3; -[_TtC29SCLensCremaBackdoorEntryPoint32LensReportCremaBackdoorProcessor init] */

void FUN_1016c0f88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001016c0ff4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016c0fc4; end: 1016c1013;  */

void FUN_1016c0fc4(void)

{
  func_0x0001016c0ff4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016c1014; end: 1016c1297;  */

undefined1  [16] FUN_1016c1014(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar2 = puVar6;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5fc54(puVar3,lVar1);
  func_0x000107c61170(puVar3);
  if (*(long *)(puVar2 + 0x10) != 0) {
    (**(code **)(lVar4 + 0x10))
              (lVar7 - extraout_x12_01,
               puVar2 + ((ulong)*(byte *)(lVar4 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    func_0x000107c6142c(puVar2);
    func_0x000107c5ed9c(puVar9,0xd000000000000018,0x800000010efb7410);
    func_0x000107c5ed9c(lVar8,0x7065725f736e656c,0xeb0000000074726f);
    pcVar5 = *(code **)(lVar4 + 8);
    (*pcVar5)(puVar9,lVar1);
    func_0x000107c5eda0(lVar7,0x6e6f736a,0xe400000000000000);
    lVar4 = lVar1;
    (*pcVar5)(lVar8,lVar1);
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar2 = puVar6;
    func_0x000107c5edc4();
    lVar8 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    puVar3 = puVar6;
    func_0x000107c40520();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      lVar8 = -0x4000000000000000;
    }
    else {
      puVar6 = puVar3;
      func_0x000107c5ee30(puVar3);
      func_0x000107c61170(puVar3);
    }
    (*pcVar5)(lVar7,lVar1);
    (*pcVar5)(lVar7 - extraout_x12_01,lVar1);
    auVar10._8_8_ = lVar8;
    auVar10._0_8_ = puVar6;
    return auVar10;
  }
  func_0x000107c6142c(puVar2);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1016c1298);
  (*pcVar5)();
}



/* Entry: 1016c1298; end: 1016c131b; -[_TtC29SCLensCremaBackdoorEntryPoint35LensTestVideoCremaBackdoorProcessor matchWithRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1016c1298(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar4 = *(undefined ***)(param_3 + _DAT_1138130e8);
  lVar1 = ((long *)(param_3 + _DAT_1138130e8))[1];
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd81b8;
  func_0x000107c5faec();
  if (ppuVar4 == ppuVar3 && lVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(ppuVar4,lVar1,ppuVar3,param_2,0);
    uVar2 = (uint)ppuVar4;
  }
  func_0x000107c6142c(param_2);
  return uVar2 & 1;
}



/* Entry: 1016c131c; end: 1016c13af; -[_TtC29SCLensCremaBackdoorEntryPoint35LensTestVideoCremaBackdoorProcessor processWithRequest:error:] */

/* WARNING: Removing unreachable block (ram,0x0001016c1340) */
/* WARNING: Removing unreachable block (ram,0x0001016c1390) */
/* WARNING: Removing unreachable block (ram,0x0001016c1344) */

void FUN_1016c131c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1016c143c();
  uVar1 = param_1;
  func_0x000107c5ee20();
  func_0x00010006c090(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016c13b0; end: 1016c13eb; -[_TtC29SCLensCremaBackdoorEntryPoint35LensTestVideoCremaBackdoorProcessor init] */

void FUN_1016c13b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001016c141c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016c13ec; end: 1016c143b;  */

void FUN_1016c13ec(void)

{
  func_0x0001016c141c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016c143c; end: 1016c1547;  */

undefined1  [16] FUN_1016c143c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar4 = 0;
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168();
  func_0x000107c5ba34();
  func_0x000107c61180();
  uVar2 = 0x6956747365544955;
  func_0x000107c5fadc(0x6956747365544955,0xeb000000006f6564);
  puVar3 = puVar1;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,puVar3);
    func_0x000107c615e8(puVar3);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    func_0x000107c6147c(&uStack_80,&uStack_50,PTR___sypN_11034f1a8 + 8,
                        PTR___s10Foundation4DataVN_110350ae0,6);
    if ((uVar4 & 1) != 0) goto LAB_1016c1530;
  }
  uStack_80 = 0;
  uStack_78 = 0xc000000000000000;
LAB_1016c1530:
  auVar5._8_8_ = uStack_78;
  auVar5._0_8_ = uStack_80;
  return auVar5;
}



/* Entry: 1016c1548; end: 1016c15cb; -[_TtC29SCLensCremaBackdoorEntryPoint35UCOLensReportCremaBackdoorProcessor matchWithRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1016c1548(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar4 = *(undefined ***)(param_3 + _DAT_1138130e8);
  lVar1 = ((long *)(param_3 + _DAT_1138130e8))[1];
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd8158;
  func_0x000107c5faec();
  if (ppuVar4 == ppuVar3 && lVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(ppuVar4,lVar1,ppuVar3,param_2,0);
    uVar2 = (uint)ppuVar4;
  }
  func_0x000107c6142c(param_2);
  return uVar2 & 1;
}



/* Entry: 1016c15cc; end: 1016c165f; -[_TtC29SCLensCremaBackdoorEntryPoint35UCOLensReportCremaBackdoorProcessor processWithRequest:error:] */

/* WARNING: Removing unreachable block (ram,0x0001016c15f0) */
/* WARNING: Removing unreachable block (ram,0x0001016c1640) */
/* WARNING: Removing unreachable block (ram,0x0001016c15f4) */

void FUN_1016c15cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1016c16ec();
  uVar1 = param_1;
  func_0x000107c5ee20();
  func_0x00010006c090(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016c1660; end: 1016c169b; -[_TtC29SCLensCremaBackdoorEntryPoint35UCOLensReportCremaBackdoorProcessor init] */

void FUN_1016c1660(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001016c16cc();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016c169c; end: 1016c16eb;  */

void FUN_1016c169c(void)

{
  func_0x0001016c16cc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016c16ec; end: 1016c1973;  */

undefined1  [16] FUN_1016c16ec(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  puVar2 = puVar6;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5fc54(puVar3,lVar1);
  func_0x000107c61170(puVar3);
  if (*(long *)(puVar2 + 0x10) != 0) {
    (**(code **)(lVar4 + 0x10))
              (lVar7 - extraout_x12_01,
               puVar2 + ((ulong)*(byte *)(lVar4 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    func_0x000107c6142c(puVar2);
    func_0x000107c5ed9c(puVar9,0xd000000000000018,0x800000010efb7410);
    func_0x000107c5ed9c(lVar8,0x736e656c5f6f6375,0xef74726f7065725f);
    pcVar5 = *(code **)(lVar4 + 8);
    (*pcVar5)(puVar9,lVar1);
    func_0x000107c5eda0(lVar7,0x6e6f736a,0xe400000000000000);
    lVar4 = lVar1;
    (*pcVar5)(lVar8,lVar1);
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar2 = puVar6;
    func_0x000107c5ed70();
    lVar8 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    puVar3 = puVar6;
    func_0x000107c40520();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      lVar8 = -0x4000000000000000;
    }
    else {
      puVar6 = puVar3;
      func_0x000107c5ee30(puVar3);
      func_0x000107c61170(puVar3);
    }
    (*pcVar5)(lVar7,lVar1);
    (*pcVar5)(lVar7 - extraout_x12_01,lVar1);
    auVar10._8_8_ = lVar8;
    auVar10._0_8_ = puVar6;
    return auVar10;
  }
  func_0x000107c6142c(puVar2);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1016c1974);
  (*pcVar5)();
}



/* Entry: 1016c1974; end: 1016c198f;  */

void FUN_1016c1974(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016c1990,0,0);
  return;
}



/* Entry: 1016c1990; end: 1016c1aef;  */

void FUN_1016c1990(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0xa8) = lVar4;
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1016c1af0;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    func_0x000107c5fadc(uVar5,uVar1);
    func_0x000107c4b288(lVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    puVar3 = &UNK_1103f88b0;
    func_0x000107c613fc(&UNK_1103f88b0,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    *(code **)(unaff_x22 + 0x70) = FUN_1016c1eac;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1016c1d3c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1103f88c8;
    lVar2 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar2);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5dc64(lVar4);
    func_0x000107c60bd0(lVar2);
    func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001016c1aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 1016c1af0; end: 1016c1b63;  */

void FUN_1016c1af0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1016c1b30,0,0);
  return;
}



/* Entry: 1016c1b64; end: 1016c1cd7;  */

void FUN_1016c1b64(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_1 == 0) {
    uVar7 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &UNK_1103f8900;
    func_0x000107c613fc(&UNK_1103f8900,0x18,7);
    *(undefined8 **)(puVar6 + 0x10) = &uStack_60;
    puVar2 = &UNK_1103f8928;
    func_0x000107c613fc(&UNK_1103f8928,0x20,7);
    uVar7 = 0x1016c1ee0;
    *(undefined8 *)(puVar2 + 0x10) = 0x1016c1ee0;
    *(undefined **)(puVar2 + 0x18) = puVar6;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_1016c1ee8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100fe2610;
    puStack_78 = &UNK_1103f8940;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    pcStack_70 = FUN_1016c1d38;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100fe2654;
    puStack_78 = &UNK_1103f8968;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4c744(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
  }
  puVar5 = *(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28);
  *puVar5 = uStack_60;
  puVar5[1] = uStack_58;
  func_0x000107c61434();
  func_0x000107c6144c(param_3);
  func_0x000107c6142c(uStack_58);
  func_0x0001016c1ed0(uVar7,puVar6);
  return;
}



/* Entry: 1016c1cd8; end: 1016c1d37;  */

void FUN_1016c1cd8(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    param_2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar1 = param_3[1];
  *param_3 = lVar2;
  param_3[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 1016c1d38; end: 1016c1d3b;  */

void FUN_1016c1d38(void)

{
  return;
}



/* Entry: 1016c1d3c; end: 1016c1db3;  */

/* WARNING: Possible PIC construction at 0x0001016c1d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c1d9c) */

void FUN_1016c1d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1016c1db4; end: 1016c1ddf;  */

void FUN_1016c1db4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016c1de0; end: 1016c1e3f;  */

void FUN_1016c1de0(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016c1e40;
  plVar1[0x13] = param_2;
  plVar1[0x14] = lVar2;
  plVar1[0x12] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016c1990,0,0);
  return;
}



/* Entry: 1016c1e40; end: 1016c1e8b;  */

void FUN_1016c1e40(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016c1e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 1016c1e8c; end: 1016c1eab;  */

void FUN_1016c1e8c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc0f08);
  return;
}



/* Entry: 1016c1eac; end: 1016c1ee7;  */

void FUN_1016c1eac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_1 == 0) {
    uVar8 = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = &UNK_1103f8900;
    func_0x000107c613fc(&UNK_1103f8900,0x18,7);
    *(undefined8 **)(puVar7 + 0x10) = &uStack_60;
    puVar2 = &UNK_1103f8928;
    func_0x000107c613fc(&UNK_1103f8928,0x20,7);
    uVar8 = 0x1016c1ee0;
    *(undefined8 *)(puVar2 + 0x10) = 0x1016c1ee0;
    *(undefined **)(puVar2 + 0x18) = puVar7;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_1016c1ee8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100fe2610;
    puStack_78 = &UNK_1103f8940;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    pcStack_70 = FUN_1016c1d38;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100fe2654;
    puStack_78 = &UNK_1103f8968;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4c744(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
  }
  puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x40) + 0x28);
  *puVar6 = uStack_60;
  puVar6[1] = uStack_58;
  func_0x000107c61434();
  func_0x000107c6144c(lVar5);
  func_0x000107c6142c(uStack_58);
  func_0x0001016c1ed0(uVar8,puVar7);
  return;
}



/* Entry: 1016c1ee8; end: 1016c1f07;  */

void FUN_1016c1ee8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1016c1f08; end: 1016c1f37;  */

bool FUN_1016c1f08(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1016c1f38; end: 1016c1f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c1f38(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc0f70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dc0f78) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016c1f9c; end: 1016c21db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c1f9c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9,byte param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte bStack_e8;
  byte bStack_e7;
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
  
  func_0x000107c61428(param_2 + 0x10,auStack_130,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    bStack_e8 = param_9 & 1;
    bStack_e7 = param_10 & 1;
    uStack_e0 = param_12;
    uStack_d8 = param_13;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_b8 = param_14;
    uStack_b0 = param_15;
    uStack_a8 = param_16;
    uStack_a0 = param_17;
    uStack_98 = param_18;
    uStack_90 = param_19;
    uStack_88 = param_20;
    uStack_80 = param_21;
    uStack_158 = 0;
    uStack_150 = 0xe000000000000000;
    uStack_118 = param_3;
    uStack_110 = param_4;
    uStack_108 = param_5;
    uStack_100 = param_6;
    uStack_f8 = param_7;
    uStack_f0 = param_8;
    uStack_c0 = param_1;
    func_0x000107c61434();
    func_0x000107c61434(param_21);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c61434(param_8);
    func_0x000107c61434(param_13);
    func_0x000107c61434(param_15);
    func_0x000107c61434(param_17);
    func_0x000107c602fc(0x21);
    func_0x000107c6142c(uStack_150);
    uStack_158 = 0xd000000000000015;
    uStack_150 = 0x800000010efb7530;
    func_0x000107c5fb78(param_3,param_4);
    func_0x000107c5fb78(0x3d74706d6f727020,0xe800000000000000);
    func_0x000107c5fb78(param_7,param_8);
    uVar2 = uStack_150;
    uVar1 = uStack_158;
    lVar3 = param_2;
    func_0x000107c61174();
    func_0x0001007d6c8c(0,uVar1,uVar2,param_2,param_22,&PTR_DAT_1103f89c0);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(lVar3);
    func_0x0001000d224c(&uStack_158);
    func_0x0001000a8868(&uStack_158,uStack_140);
    (**(code **)(lStack_138 + 8))(&uStack_118,uStack_140,lStack_138);
    func_0x000107c61170(lVar3);
    FUN_1016c2a94(&uStack_118);
    func_0x0001000834e4(&uStack_158);
  }
  return;
}



/* Entry: 1016c21dc; end: 1016c230b; -[_TtC31FriendsGameActivityServicesImpl27FriendsGameActivityObserver contextPostSnapDidStorePromptLensAction:conversationId:messageId:senderUserId:contextSessionId:isFromSendSide:isGroupConversation:lensPromptId:viewedAtTimestamp:] */

/* WARNING: Possible PIC construction at 0x0001016c22d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016c22e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c22d4) */
/* WARNING: Removing unreachable block (ram,0x0001016c22e4) */

void FUN_1016c21dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined4 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_5);
  uVar1 = param_3;
  func_0x000107c5faec(param_6);
  if (param_7 == 0) {
    param_7 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5faec(param_7);
  }
  func_0x000107c5faec();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_1016c25dc(param_1,param_4,param_5,param_3,param_6,uVar1,param_7,uVar2,param_9,param_10);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1016c230c; end: 1016c2403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c230c(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar1 = param_4 & 0xffffffffffff;
      if ((param_5 & 0x2000000000000000) != 0) {
        uVar1 = param_5 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x0001000d224c(auStack_90);
        func_0x0001000a8868(auStack_90,uStack_78);
        (**(code **)(lStack_70 + 0x10))(param_2,param_3,param_4,param_5,uStack_78,lStack_70);
        func_0x000107c61170(param_1);
        func_0x0001000834e4(auStack_90);
        return;
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1016c2404; end: 1016c251f; -[_TtC31FriendsGameActivityServicesImpl27FriendsGameActivityObserver contextPostSnapDidClearPromptLensAction:lensPromptId:] */

/* WARNING: Possible PIC construction at 0x0001016c24fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c2500) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c2404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112dc0f78);
  func_0x000107c614f0(uVar4);
  puVar1 = &UNK_1103f89a8;
  func_0x000107c613fc(&UNK_1103f89a8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1103f89f0;
  func_0x000107c613fc(&UNK_1103f89f0,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_2);
  func_0x000107c61434(uVar3);
  func_0x00010090569c(FUN_1016c2ac8,puVar2,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1016c2520; end: 1016c257f; -[_TtC31FriendsGameActivityServicesImpl27FriendsGameActivityObserver init] */

void FUN_1016c2520(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsGameActivityServicesImpl.FriendsGameActivityObserver",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016c254c);
  (*pcVar1)();
}



/* Entry: 1016c2580; end: 1016c25b7; -[_TtC31FriendsGameActivityServicesImpl27FriendsGameActivityObserver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c2580(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dc0f70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dc0f78));
  return;
}



/* Entry: 1016c25b8; end: 1016c25db;  */

void FUN_1016c25b8(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001016c25c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1016c25dc; end: 1016c29bf;  */

/* WARNING: Possible PIC construction at 0x0001016c2820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016c2884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016c298c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c2888) */
/* WARNING: Removing unreachable block (ram,0x0001016c2824) */
/* WARNING: Removing unreachable block (ram,0x0001016c2990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c25dc(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,byte param_9,
                  byte param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uStack_c8;
  ulong uStack_c0;
  
  lVar4 = unaff_x20;
  uVar8 = param_3;
  func_0x000107c614f0();
  uVar5 = param_2;
  func_0x000107c4f710();
  if ((int)uVar5 != 3) {
    return;
  }
  uVar5 = param_2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (uVar5 == 0) {
    return;
  }
  uVar6 = uVar5;
  func_0x000107c5faec();
  uVar11 = uVar8;
  func_0x000107c61170(uVar5);
  uVar5 = uVar6 & 0xffffffffffff;
  if ((uVar8 & 0x2000000000000000) != 0) {
    uVar5 = uVar8 >> 0x38 & 0xf;
  }
  if (uVar5 == 0) goto code_r0x000107c6142c;
  uVar5 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar5 = param_4 >> 0x38 & 0xf;
  }
  if (uVar5 == 0) goto code_r0x000107c6142c;
  uVar5 = param_2;
  func_0x000107c427d4();
  func_0x000107c61180();
  if (uVar5 == 0) {
LAB_1016c27c0:
    uStack_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    uVar7 = uVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar5);
    uVar1 = (uint)(uVar11 >> 0x20);
    uVar12 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar12 != 0) {
        lVar13 = (long)(int)uVar7;
        lVar14 = (long)uVar7 >> 0x20;
        goto LAB_1016c2770;
      }
      bVar3 = (uVar11 & 0xff000000000000) == 0;
    }
    else {
      if (uVar12 != 2) {
        func_0x00010006c090(uVar7,uVar11);
        goto LAB_1016c27c0;
      }
      lVar13 = *(long *)(uVar7 + 0x10);
      lVar14 = *(long *)(uVar7 + 0x18);
LAB_1016c2770:
      bVar3 = lVar13 == lVar14;
    }
    if (bVar3) {
      func_0x00010006c090(uVar7,uVar11);
      uStack_c8 = 0;
      uStack_c0 = 0;
    }
    else {
      uStack_c8 = 0;
      uStack_c0 = uVar7;
      func_0x000107c5ee24(0,uVar7,uVar11);
      func_0x00010006c090(uVar7,uVar11);
    }
  }
  uVar5 = param_2;
  func_0x000107c44a5c();
  if ((int)uVar5 == 0) {
    uVar5 = param_2;
    func_0x000107c44a68();
    if ((int)uVar5 == 0) {
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112dc0f78);
      func_0x000107c614f0();
      puVar9 = &UNK_1103f89a8;
      func_0x000107c613fc(&UNK_1103f89a8,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      puVar10 = &UNK_1103f8a18;
      func_0x000107c613fc(&UNK_1103f8a18,0xb0,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      *(ulong *)(puVar10 + 0x18) = param_3;
      *(ulong *)(puVar10 + 0x20) = param_4;
      *(ulong *)(puVar10 + 0x28) = uVar6;
      *(ulong *)(puVar10 + 0x30) = uVar8;
      *(undefined8 *)(puVar10 + 0x38) = param_12;
      *(undefined8 *)(puVar10 + 0x40) = param_13;
      puVar10[0x48] = param_10 & 1;
      puVar10[0x49] = param_9 & 1;
      *(undefined8 *)(puVar10 + 0x50) = param_7;
      *(undefined8 *)(puVar10 + 0x58) = param_8;
      *(undefined8 *)(puVar10 + 0x60) = param_1;
      *(undefined8 *)(puVar10 + 0x68) = uStack_c8;
      *(ulong *)(puVar10 + 0x70) = uStack_c0;
      *(undefined8 *)(puVar10 + 0x78) = 0;
      *(undefined8 *)(puVar10 + 0x80) = 0;
      *(undefined8 *)(puVar10 + 0x88) = 0;
      *(undefined8 *)(puVar10 + 0x90) = 0;
      *(undefined8 *)(puVar10 + 0x98) = param_5;
      *(undefined8 *)(puVar10 + 0xa0) = param_6;
      *(long *)(puVar10 + 0xa8) = lVar4;
      func_0x000107c61434(param_8);
      func_0x000107c61434(param_6);
      func_0x000107c6157c(puVar9);
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_13);
      func_0x00010090569c(FUN_1016c2a28,puVar10,uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar9);
      return;
    }
    func_0x000107c4f4c0();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016c29c0);
      (*pcVar2)();
    }
    func_0x000107c44e64();
    uVar8 = param_2;
    func_0x000107c4c0fc();
    func_0x000103ee3894();
    func_0x000107c5fb1c();
    func_0x000107c61170(param_2);
  }
  else {
    func_0x000107c4f480();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016c29bc);
      (*pcVar2)();
    }
    func_0x000107c44e64();
    uVar8 = param_2;
    func_0x000107c4c0fc();
    func_0x000103ee3894();
    func_0x000107c5fb1c();
    func_0x000107c61170(param_2);
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8);
  return;
}



/* Entry: 1016c29c0; end: 1016c29c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c29c0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(ulong *)(unaff_x20 + 0x28);
  uVar6 = *(ulong *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar1 = uVar4 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar1 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x0001000d224c(auStack_90);
        func_0x0001000a8868(auStack_90,uStack_78);
        (**(code **)(lStack_70 + 0x10))(uVar3,uVar2,uVar4,uVar6,uStack_78,lStack_70);
        func_0x000107c61170(lVar5);
        func_0x0001000834e4(auStack_90);
        return;
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1016c29c4; end: 1016c2a17;  */

void FUN_1016c29c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e7130);
  return;
}



/* Entry: 1016c2a18; end: 1016c2a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c2a18(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(ulong *)(unaff_x20 + 0x28);
  uVar6 = *(ulong *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar1 = uVar4 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar1 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x0001000d224c(auStack_90);
        func_0x0001000a8868(auStack_90,uStack_78);
        (**(code **)(lStack_70 + 0x10))(uVar3,uVar2,uVar4,uVar6,uStack_78,lStack_70);
        func_0x000107c61170(lVar5);
        func_0x0001000834e4(auStack_90);
        return;
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1016c2a28; end: 1016c2a93;  */

void FUN_1016c2a28(void)

{
  long unaff_x20;
  
  FUN_1016c1f9c(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined1 *)(unaff_x20 + 0x48),*(undefined1 *)(unaff_x20 + 0x49));
  return;
}



/* Entry: 1016c2a94; end: 1016c2ac7;  */

undefined8 FUN_1016c2a94(undefined8 param_1)

{
  (*(code *)&DAT_103734ff8)();
  return param_1;
}



/* Entry: 1016c2ac8; end: 1016c2acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c2ac8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = *(ulong *)(unaff_x20 + 0x28);
  uVar6 = *(ulong *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar1 = uVar4 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar1 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x0001000d224c(auStack_90);
        func_0x0001000a8868(auStack_90,uStack_78);
        (**(code **)(lStack_70 + 0x10))(uVar3,uVar2,uVar4,uVar6,uStack_78,lStack_70);
        func_0x000107c61170(lVar5);
        func_0x0001000834e4(auStack_90);
        return;
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1016c2acc; end: 1016c2cf7;  */

void FUN_1016c2acc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  
  func_0x0001000285a8(0x112d53a98,&UNK_10d91a6a0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar1 = FUN_1016c2dc8;
  func_0x0001000bdd8c(FUN_1016c2dc8,param_2);
  puVar2 = &UNK_1103f8a90;
  func_0x000107c613fc(&UNK_1103f8a90,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  func_0x0001000285a8(0x112dc0fb0,&UNK_10d97db00);
  func_0x000107c613fc();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  pcVar3 = FUN_1016c2f68;
  func_0x0001000bdd8c(FUN_1016c2f68,puVar2);
  func_0x0001000285a8(0x112dc0fb8,&UNK_10d97db08);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar3);
  uVar4 = 0x1016c2f74;
  func_0x0001000bdd8c(0x1016c2f74,pcVar3);
  func_0x0001000285a8(0x112dc0fc0,&UNK_10d97db10);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar3);
  uVar5 = 0x1016c2f80;
  func_0x0001000bdd8c(0x1016c2f80,pcVar3);
  func_0x0001000285a8(0x112dc0fc8,&UNK_10d97db18);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar3);
  uVar6 = 0x1016c2f8c;
  func_0x0001000bdd8c(0x1016c2f8c,pcVar3);
  func_0x0001000285a8(0x112dc0fd0,&UNK_10d97db20);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  pcVar7 = FUN_1016c3040;
  func_0x0001000bdd8c(FUN_1016c3040,pcVar1);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(pcVar3);
  lVar8 = 0;
  func_0x000100235c44();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar4;
  *(undefined8 *)(lVar8 + 0x18) = uVar5;
  *(undefined8 *)(lVar8 + 0x20) = uVar6;
  *(code **)(lVar8 + 0x28) = pcVar7;
  *param_1 = lVar8;
  return;
}



/* Entry: 1016c2cf8; end: 1016c2d13;  */

void FUN_1016c2cf8(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000285a8(0x112d53a98,&UNK_10d91a6a0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  pcVar2 = FUN_1016c2dc8;
  func_0x0001000bdd8c(FUN_1016c2dc8,uVar5);
  puVar3 = &UNK_1103f8a90;
  func_0x000107c613fc(&UNK_1103f8a90,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  func_0x0001000285a8(0x112dc0fb0,&UNK_10d97db00);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar1);
  pcVar4 = FUN_1016c2f68;
  func_0x0001000bdd8c(FUN_1016c2f68,puVar3);
  func_0x0001000285a8(0x112dc0fb8,&UNK_10d97db08);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1016c2f74;
  func_0x0001000bdd8c(0x1016c2f74,pcVar4);
  func_0x0001000285a8(0x112dc0fc0,&UNK_10d97db10);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar4);
  uVar6 = 0x1016c2f80;
  func_0x0001000bdd8c(0x1016c2f80,pcVar4);
  func_0x0001000285a8(0x112dc0fc8,&UNK_10d97db18);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1016c2f8c;
  func_0x0001000bdd8c(0x1016c2f8c,pcVar4);
  func_0x0001000285a8(0x112dc0fd0,&UNK_10d97db20);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  pcVar8 = FUN_1016c3040;
  func_0x0001000bdd8c(FUN_1016c3040,pcVar2);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar4);
  lVar9 = 0;
  func_0x000100235c44();
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x10) = uVar5;
  *(undefined8 *)(lVar9 + 0x18) = uVar6;
  *(undefined8 *)(lVar9 + 0x20) = uVar7;
  *(code **)(lVar9 + 0x28) = pcVar8;
  *param_1 = lVar9;
  return;
}



/* Entry: 1016c2d14; end: 1016c2dc7;  */

void FUN_1016c2d14(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c3f770();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c41574();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1016c2dc8; end: 1016c2dcf;  */

void FUN_1016c2dc8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c3f770();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c41574();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1016c2dd0; end: 1016c2f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c2dd0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar3 = *(long *)(lStack_68 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
    dVar7 = 259200.0;
  }
  else {
    lVar3 = lVar4;
    func_0x000107c43d0c(lVar4);
    func_0x000107c615e8(lVar4);
    dVar7 = (double)lVar3;
  }
  func_0x0001000285a8(0x112dc0fd8,&UNK_10d97e7f0);
  lVar4 = lVar1;
  func_0x000107c5cec4();
  func_0x000107c61180();
  lVar3 = lVar4;
  func_0x0001000bda74();
  func_0x000107c61170(lVar4);
  uVar6 = *(undefined8 *)(lVar2 + _DAT_11305e778);
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c6157c(uVar6);
  func_0x000107c453e4(puVar5);
  lVar4 = lVar3;
  FUN_1016c3048(dVar7,lVar3,uVar6,puVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(puVar5);
  *param_1 = lVar4;
  return;
}



/* Entry: 1016c2f68; end: 1016c2f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c2f68(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  double dVar7;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  func_0x000100083b20(&lStack_68);
  lVar3 = *(long *)(lStack_68 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
    dVar7 = 259200.0;
  }
  else {
    lVar3 = lVar4;
    func_0x000107c43d0c(lVar4);
    func_0x000107c615e8(lVar4);
    dVar7 = (double)lVar3;
  }
  func_0x0001000285a8(0x112dc0fd8,&UNK_10d97e7f0);
  lVar4 = lVar1;
  func_0x000107c5cec4();
  func_0x000107c61180();
  lVar3 = lVar4;
  func_0x0001000bda74();
  func_0x000107c61170(lVar4);
  uVar6 = *(undefined8 *)(lVar2 + _DAT_11305e778);
  puVar5 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c6157c(uVar6);
  func_0x000107c453e4(puVar5);
  lVar4 = lVar3;
  FUN_1016c3048(dVar7,lVar3,uVar6,puVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(puVar5);
  *param_1 = lVar4;
  return;
}



/* Entry: 1016c2f98; end: 1016c303f;  */

void FUN_1016c2f98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = 0;
  FUN_1016c5d28();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uStack_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  (*(code *)&SUB_100075034)(param_1,&UNK_1000ca6b0,auStack_50);
  return;
}



/* Entry: 1016c3040; end: 1016c3047;  */

void FUN_1016c3040(long *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  FUN_1016c1e8c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  pcVar3 = "FriendsGameActivityLensNameResolver";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined8 *)(lVar2 + 0x10) = unaff_x20;
  *(char **)(lVar2 + 0x18) = pcVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1103f8890;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016c3048; end: 1016c31e7;  */

long FUN_1016c3048(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  FUN_1016c5d28();
  func_0x000107c613fc();
  pcVar2 = "FriendsGameActivityServices";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar1 + 0x28) = pcVar2;
  func_0x0001000285a8(0x112dc0ec0,&UNK_10d97da00);
  func_0x000107c613fc();
  uVar3 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  *(undefined8 *)(lVar1 + 0x48) = 1;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  if (param_1 <= 0.0) {
    param_1 = 259200.0;
  }
  *(double *)(lVar1 + 0x30) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_4);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  uVar5 = 2;
  func_0x000100774b74(2,0x2d,1,uStack_60,uStack_58,puVar4);
  *(undefined8 *)(lVar1 + 0x18) = uVar5;
  func_0x0001000834e4(auStack_78);
  puVar6 = &UNK_1103f8ab8;
  func_0x000107c613fc(&UNK_1103f8ab8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,lVar1);
  uVar3 = 0;
  func_0x000100964acc(0);
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(puVar6);
  func_0x00010090569c(FUN_1016c31e8,puVar6,uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61578(puVar6,2);
  return lVar1;
}



/* Entry: 1016c31e8; end: 1016c3203;  */

void FUN_1016c31e8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1016c34a4();
    FUN_1016c36e8();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1016c3204; end: 1016c32a3;  */

void FUN_1016c3204(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}


