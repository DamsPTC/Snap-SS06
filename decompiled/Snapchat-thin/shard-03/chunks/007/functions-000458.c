/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b7e6e4; end: 102b7e817;  */

/* WARNING: Possible PIC construction at 0x000102b7e79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7e7b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7e7d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b7e7a0) */
/* WARNING: Removing unreachable block (ram,0x000102b7e7bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7e6e4(void)

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
  func_0x000107c5b930();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102b7df18();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102b7e190();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7e818);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112efa308) = lVar5;
    *(long *)(lVar4 + _DAT_112efa310) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102b7e818; end: 102b7e83f; -[SCSpotlightQuickCommentScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102b7e818(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b7e6e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b7e840; end: 102b7e883; -[SCSpotlightQuickCommentScopeGraphBridgeSaberEntryPoint end] */

void FUN_102b7e840(undefined8 param_1)

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



/* Entry: 102b7e884; end: 102b7ea1b;  */

void FUN_102b7e884(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0f08580)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000034,0x800000010f0f7a80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SpotlightQuickCommentScopeGraphBridge/SCSpotlightQuickCommentScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x62,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7ea1c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59700();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b7ea1c; end: 102b7eac7; -[SCSpotlightQuickCommentScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102b7ea1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b7e884(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b7eac8; end: 102b7eb33; -[SCSpotlightQuickCommentScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7eac8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efa3d8,0);
  *(undefined8 *)(param_1 + _DAT_112efa3e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112efa3e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b7eb34; end: 102b7eb67;  */

void FUN_102b7eb34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b7eb68; end: 102b7ebaf; -[SCSpotlightQuickCommentScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b7eb94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b7eb98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7eb68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efa3d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efa3e0));
  return;
}



/* Entry: 102b7ebb0; end: 102b7ebcf;  */

void FUN_102b7ebb0(void)

{
  func_0x000107c61168(&PTR_PTR_112890858);
  return;
}



/* Entry: 102b7ebd0; end: 102b7ec17; -[SCSCSpotlightQuickCommentScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7ebd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efa418;
  func_0x000107c61428(param_1 + _DAT_112efa418,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b7ec18; end: 102b7ec6f; -[SCSCSpotlightQuickCommentScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7ec18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efa418;
  func_0x000107c61428(param_1 + _DAT_112efa418,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b7ec70; end: 102b7ed47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7ec70(undefined8 param_1,long param_2)

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
    FUN_102b7e170();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efa340) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b7ed48);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efa348);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efa420);
    *(long **)(unaff_x20 + _DAT_112efa420) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102b7ed48; end: 102b7ed6f; -[SCSCSpotlightQuickCommentScopedServicesSaberEntryPoint begin] */

void FUN_102b7ed48(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b7ec70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b7ed70; end: 102b7eee7;  */

/* WARNING: Possible PIC construction at 0x000102b7edd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7ee70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b7eddc) */
/* WARNING: Removing unreachable block (ram,0x000102b7ee74) */
/* WARNING: Removing unreachable block (ram,0x000102b7ee8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7ed70(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efa420);
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



/* Entry: 102b7eee8; end: 102b7eeef;  */

void FUN_102b7eee8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b7eef0; end: 102b7ef23; -[SCSCSpotlightQuickCommentScopedServicesSaberEntryPoint end] */

void FUN_102b7eef0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b7ed70();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b7ef24; end: 102b7f043;  */

void FUN_102b7ef24(long param_1,long param_2,long param_3)

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
                        "SpotlightQuickCommentScopeGraphBridge/SCSCSpotlightQuickCommentScopedServicesSaberEntryPoint.swift"
                        ,0x62,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b7f044);
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



/* Entry: 102b7f044; end: 102b7f0ef; -[SCSCSpotlightQuickCommentScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102b7f044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b7ef24(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b7f0f0; end: 102b7f14f; -[SCSCSpotlightQuickCommentScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7f0f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efa418,0);
  *(undefined8 *)(param_1 + _DAT_112efa420) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b7f150; end: 102b7f183;  */

void FUN_102b7f150(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b7f184; end: 102b7f1bb; -[SCSCSpotlightQuickCommentScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7f184(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efa418);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efa420));
  return;
}



/* Entry: 102b7f1bc; end: 102b7f1db;  */

void FUN_102b7f1bc(void)

{
  func_0x000107c61168(&PTR_PTR_112890920);
  return;
}



/* Entry: 102b7f1dc; end: 102b7f497;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_102b7f1dc(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  uint uVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar14 = *(long *)(unaff_x20 + 0x48);
    lVar11 = *(long *)(unaff_x20 + 0x50);
    if ((lVar11 == 0) || (lVar12 = *(long *)(unaff_x20 + 0x30), lVar12 == 0)) {
      uVar13 = 0;
    }
    else if ((lVar14 == *(long *)(unaff_x20 + 0x28)) && (lVar11 == lVar12)) {
      uVar13 = 1;
    }
    else {
      lVar2 = lVar14;
      func_0x000107c605b8(lVar14,lVar11,*(long *)(unaff_x20 + 0x28),lVar12,0);
      uVar13 = (uint)lVar2;
    }
    func_0x000107c5fadc(param_1,param_2);
    if (*(long *)(unaff_x20 + 0x20) == 0) {
      uVar3 = 0;
      lVar12 = *(long *)(unaff_x20 + 0x30);
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c5fadc(uVar3);
      lVar12 = *(long *)(unaff_x20 + 0x30);
    }
    if (lVar12 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x000107c5fadc(uVar4);
    }
    if (lVar11 == 0) {
      lVar14 = 0;
      lVar11 = *(long *)(unaff_x20 + 0x60);
    }
    else {
      func_0x000107c5fadc(lVar14,lVar11);
      lVar11 = *(long *)(unaff_x20 + 0x60);
    }
    if (lVar11 == 0) {
      uVar5 = 0;
      lVar11 = *(long *)(unaff_x20 + 0x70);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
      func_0x000107c5fadc(uVar5);
      lVar11 = *(long *)(unaff_x20 + 0x70);
    }
    if (lVar11 == 0) {
      uVar6 = 0;
      lVar11 = *(long *)(unaff_x20 + 0x80);
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
      func_0x000107c5fadc(uVar6);
      lVar11 = *(long *)(unaff_x20 + 0x80);
    }
    if (lVar11 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
      func_0x000107c5fadc(uVar7);
    }
    uVar8 = param_1;
    func_0x00010623bcc4(param_1,uVar3,uVar4,uVar13 & 1,lVar14,uVar5,uVar6,uVar7,0,0,0);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    if (*(long *)(unaff_x20 + 0x40) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
      func_0x000107c5fadc(uVar3);
    }
    puVar9 = &UNK_1105a58a0;
    func_0x000107c613fc(&UNK_1105a58a0,0x20,7);
    *(code **)(puVar9 + 0x10) = param_3;
    *(undefined8 *)(puVar9 + 0x18) = param_4;
    pcStack_70 = FUN_102b7f5c8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_102b7f498;
    puStack_78 = &UNK_1105a58b8;
    ppuVar10 = &puStack_90;
    puStack_68 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_68;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar9);
    func_0x000107c4ebbc(lVar1);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    return;
  }
  (*param_3)();
  return;
}



/* Entry: 102b7f498; end: 102b7f513;  */

void FUN_102b7f498(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec(param_3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3,uVar3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102b7f514; end: 102b7f587;  */

void FUN_102b7f514(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102b7f588; end: 102b7f5a7;  */

void FUN_102b7f588(void)

{
  FUN_102b7f1dc();
  return;
}



/* Entry: 102b7f5a8; end: 102b7f5c7;  */

void FUN_102b7f5a8(void)

{
  func_0x000107c61168(&PTR_PTR_112efa490);
  return;
}



/* Entry: 102b7f5c8; end: 102b7f5e7;  */

void FUN_102b7f5c8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b7f5e8; end: 102b7f617;  */

void FUN_102b7f5e8(long param_1,long param_2)

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



/* Entry: 102b7f618; end: 102b7f6c3;  */

void FUN_102b7f618(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102b7f6c4; end: 102b7f6c7;  */

void FUN_102b7f6c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efa528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db29e40;
  func_0x000107c61520(&UNK_10db29e40,&UNK_1105a5960);
  puRam0000000112efa528 = puVar1;
  return;
}



/* Entry: 102b7f6c8; end: 102b7f707;  */

void FUN_102b7f6c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efa528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db29e40;
  func_0x000107c61520(&UNK_10db29e40,&UNK_1105a5960);
  puRam0000000112efa528 = puVar1;
  return;
}



/* Entry: 102b7f708; end: 102b7f86b;  */

int FUN_102b7f708(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102b7f784;
        goto LAB_102b7f768;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102b7f768:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102b7f784:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102b7f86c; end: 102b7f99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b7f86c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112efa530;
  lVar2 = *(long *)(unaff_x20 + _DAT_112efa530);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x000102b7f8d0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102b7f99c; end: 102b7fc5f;  */

/* WARNING: Possible PIC construction at 0x000102b7f9cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7fa00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7fa74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7fa94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7fae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7fb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7fb54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7fb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7fbd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b7fbf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b7fbdc) */
/* WARNING: Removing unreachable block (ram,0x000102b7fb78) */
/* WARNING: Removing unreachable block (ram,0x000102b7fc5c) */
/* WARNING: Removing unreachable block (ram,0x000102b7fbac) */
/* WARNING: Removing unreachable block (ram,0x000102b7fb58) */
/* WARNING: Removing unreachable block (ram,0x000102b7fb08) */
/* WARNING: Removing unreachable block (ram,0x000102b7fc58) */
/* WARNING: Removing unreachable block (ram,0x000102b7fb3c) */
/* WARNING: Removing unreachable block (ram,0x000102b7fae8) */
/* WARNING: Removing unreachable block (ram,0x000102b7fa98) */
/* WARNING: Removing unreachable block (ram,0x000102b7fc54) */
/* WARNING: Removing unreachable block (ram,0x000102b7facc) */
/* WARNING: Removing unreachable block (ram,0x000102b7fa78) */
/* WARNING: Removing unreachable block (ram,0x000102b7fa04) */
/* WARNING: Removing unreachable block (ram,0x000102b7fc50) */
/* WARNING: Removing unreachable block (ram,0x000102b7fa5c) */
/* WARNING: Removing unreachable block (ram,0x000102b7f9d0) */
/* WARNING: Removing unreachable block (ram,0x000102b7f9d4) */
/* WARNING: Removing unreachable block (ram,0x000102b7fc4c) */
/* WARNING: Removing unreachable block (ram,0x000102b7f9e8) */
/* WARNING: Removing unreachable block (ram,0x000102b7fbfc) */
/* WARNING: Removing unreachable block (ram,0x000102b7fc34) */

void FUN_102b7f99c(undefined8 param_1)

{
  FUN_102b7f86c();
  func_0x000107c5c42c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b7fc60; end: 102b7fcbb; -[_TtC21SpotlightQuickComment45SpotlightQuickCommentBackgroundViewController viewDidLoad] */

void FUN_102b7fc60(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_102b7f99c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b7fcbc; end: 102b8015f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b7fcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  FUN_102b80160(param_2);
  lVar1 = _DAT_112efa538;
  lVar3 = unaff_x20 + _DAT_112efa538;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c4ff34();
    func_0x000107c61170(lVar3);
  }
  func_0x000107c526c0(0,param_1);
  func_0x000107c5a050(param_1);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b80160);
    (*pcVar2)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  uVar6 = param_1;
  if (param_4 < 2) {
    if (param_4 == 0) {
      uVar11 = param_1;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      uVar10 = param_3;
      func_0x000107c4acb0(param_3);
      func_0x000107c61180();
      uVar4 = uVar11;
      func_0x000107c40284(0xc024000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      func_0x000107c3f764();
      func_0x000107c61180();
      func_0x000107c3f764(param_3);
      uVar11 = 0x4034000000000000;
    }
    else {
      uVar11 = param_1;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar10 = param_3;
      func_0x000107c5cbe4(param_3);
      func_0x000107c61180();
      uVar4 = uVar11;
      func_0x000107c40284(0xc024000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      func_0x000107c3f75c();
      func_0x000107c61180();
      func_0x000107c3f75c(param_3);
      uVar11 = 0x4034000000000000;
    }
  }
  else {
    if (param_4 == 2) {
      uVar11 = param_1;
      func_0x000107c4acb0();
      func_0x000107c61180();
      uVar10 = param_3;
      func_0x000107c5ce8c(param_3);
      func_0x000107c61180();
      uVar4 = uVar11;
      func_0x000107c40284(0x4024000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      func_0x000107c3f764();
      func_0x000107c61180();
      func_0x000107c3f764(param_3);
    }
    else {
      uVar11 = param_1;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uVar10 = param_3;
      func_0x000107c3ec1c(param_3);
      func_0x000107c61180();
      uVar4 = uVar11;
      func_0x000107c40284(0x4024000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      func_0x000107c3f75c();
      func_0x000107c61180();
      func_0x000107c3f75c(param_3);
    }
    uVar11 = 0xc034000000000000;
  }
  func_0x000107c61180();
  uVar10 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_3);
  *(undefined8 *)(lVar3 + 0x28) = uVar10;
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar6 = 0;
  func_0x000100847984(0);
  lVar7 = lVar3;
  func_0x000107c5fc48(lVar3,uVar6);
  func_0x000107c6142c(lVar3);
  func_0x000107c3d048(puVar5);
  func_0x000107c61170(lVar7);
  if (param_4 < 2) {
    if (param_4 == 0) {
LAB_102b8001c:
      uVar10 = 0;
      uVar6 = uVar11;
      goto LAB_102b80028;
    }
  }
  else if (param_4 == 2) goto LAB_102b8001c;
  uVar6 = 0;
  uVar10 = uVar11;
LAB_102b80028:
  func_0x000107c60890(&puStack_a0,uVar6,uVar10);
  FUN_102b7f86c();
  func_0x000107c550d8();
  func_0x000107c61170(lVar7);
  func_0x000107c526c0(0,*(undefined8 *)(unaff_x20 + _DAT_112efa530));
  func_0x000107c5a03c(param_1);
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = &UNK_1105a5a20;
  func_0x000107c613fc(&UNK_1105a5a20,0x20,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  uStack_80 = 0x102b80af8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105a5a38;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar9);
  puVar5 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c3dccc(0x3fc999999999999a,puVar8);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  return;
}



/* Entry: 102b80160; end: 102b804cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b80160(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  lVar1 = _DAT_112efa540;
  if (*(char *)(unaff_x20 + _DAT_112efa540) == '\x01') {
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b804cc);
      (*pcVar2)();
    }
    lVar4 = lVar3;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if ((lVar4 != 0) && (func_0x000107c61170(lVar4), lVar4 == param_1)) {
      return;
    }
  }
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b804b4);
    (*pcVar2)();
  }
  func_0x000107c5a050();
  func_0x000107c61170(lVar3);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b804b8);
    (*pcVar2)();
  }
  func_0x000107c3d89c(param_1);
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b804bc);
    (*pcVar2)();
  }
  lVar5 = lVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = param_1;
  func_0x000107c5cbe4(param_1);
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  *(long *)(lVar3 + 0x20) = lVar6;
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b804c0);
    (*pcVar2)();
  }
  lVar5 = lVar4;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = param_1;
  func_0x000107c3ec1c(param_1);
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  *(long *)(lVar3 + 0x28) = lVar6;
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b804c4);
    (*pcVar2)();
  }
  lVar5 = lVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = param_1;
  func_0x000107c4acb0(param_1);
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  *(long *)(lVar3 + 0x30) = lVar6;
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = lVar4;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c5ce8c(param_1);
    func_0x000107c61180();
    lVar4 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(param_1);
    *(long *)(lVar3 + 0x38) = lVar4;
    uVar8 = 0;
    func_0x000100847984(0);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,uVar8);
    func_0x000107c61574(lVar3);
    func_0x000107c3d048(puVar7);
    func_0x000107c61170(lVar4);
    FUN_102b7f99c();
    FUN_102b7f86c();
    func_0x000107c526c0(0);
    func_0x000107c61170(lVar4);
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112efa530));
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b804c8);
  (*pcVar2)();
}



/* Entry: 102b804cc; end: 102b80533;  */

void FUN_102b804cc(undefined8 param_1,undefined8 param_2)

{
  FUN_102b7f86c();
  func_0x000107c526c0(0x3fe0000000000000);
  func_0x000107c61170(param_1);
  func_0x000107c526c0(0x3ff0000000000000,param_2);
  func_0x000107c5a03c(param_2);
  return;
}



/* Entry: 102b80534; end: 102b806c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b80534(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar6 = _DAT_112efa538;
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  lVar2 = unaff_x20 + _DAT_112efa538;
  func_0x000107c61618();
  func_0x000107c61604(unaff_x20 + lVar6,0);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar4 = &UNK_1105a5980;
  func_0x000107c613fc(&UNK_1105a5980,0x20,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(long *)(puVar4 + 0x18) = lVar2;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x102b80a94;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105a5998;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174();
  lVar6 = lVar2;
  func_0x000107c61174(lVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1105a59d0;
  func_0x000107c613fc(&UNK_1105a59d0,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar2;
  *(long *)(puVar4 + 0x18) = unaff_x20;
  uStack_70 = 0x102b80af0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_1105a59e8;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174(unaff_x20);
  func_0x000107c61174(lVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c3dcd0(0x3fc999999999999a,puVar3);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 102b806c4; end: 102b80787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b806c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c4ff34(param_2);
  func_0x000107c5e37c(param_3);
  lVar2 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b80788);
    (*pcVar1)();
  }
  func_0x000107c4ff34();
  func_0x000107c61170(lVar2);
  lVar2 = param_3;
  func_0x000107c4ff2c(param_3);
  *(undefined1 *)(param_3 + _DAT_112efa540) = 0;
  FUN_102b7f86c();
  func_0x000107c550d8();
  func_0x000107c61170(lVar2);
  param_3 = param_3 + _DAT_112efa548;
  lVar2 = param_3;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_3 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 102b80788; end: 102b807af; -[_TtC21SpotlightQuickComment45SpotlightQuickCommentBackgroundViewController didTapBackground] */

void FUN_102b80788(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b80534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b807b0; end: 102b80893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b807b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112efa530) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112efa538,0);
  *(undefined1 *)(unaff_x20 + _DAT_112efa540) = 0;
  lVar1 = unaff_x20 + _DAT_112efa548;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithNibName_bundle__1125e9850,param_1,
                      param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 102b80894; end: 102b809ab; -[_TtC21SpotlightQuickComment45SpotlightQuickCommentBackgroundViewController initWithNibName:bundle:] */

void FUN_102b80894(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_102b807b0(param_3,param_2,param_4);
  return;
}



/* Entry: 102b809ac; end: 102b809d3; -[_TtC21SpotlightQuickComment45SpotlightQuickCommentBackgroundViewController initWithCoder:] */

void FUN_102b809ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000102b808f4();
  return;
}



/* Entry: 102b809d4; end: 102b80a07;  */

void FUN_102b809d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b80a08; end: 102b80a4f; -[_TtC21SpotlightQuickComment45SpotlightQuickCommentBackgroundViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b80a08(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efa530));
  func_0x000107c61610(param_1 + _DAT_112efa538);
  param_1 = param_1 + _DAT_112efa548;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102b80a50; end: 102b80a6f;  */

void FUN_102b80a50(void)

{
  func_0x000107c61168(&PTR_PTR_1128909e0);
  return;
}



/* Entry: 102b80a70; end: 102b80ad3;  */

undefined8 FUN_102b80a70(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102b80ad4; end: 102b80b0f;  */

void FUN_102b80ad4(long param_1,long param_2)

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



/* Entry: 102b80b10; end: 102b80c03;  */

long FUN_102b80b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x40,0);
  func_0x000107c61614(unaff_x20 + 0x48,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return unaff_x20;
}



/* Entry: 102b80c04; end: 102b80d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b80c04(void)

{
  long lVar1;
  long unaff_x20;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(lVar6 + _DAT_11306eac0);
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar4 = ((undefined8 *)(lVar6 + _DAT_11306ea98))[1];
    if (lVar4 == 0) {
      func_0x000107c61174(lVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar6 + _DAT_11306ea98);
      func_0x000107c61174(lVar1);
      func_0x000107c61434(lVar4);
      func_0x000107c5fadc(uVar3,lVar4);
      func_0x000107c6142c(lVar4);
    }
    lVar4 = ((undefined8 *)(lVar6 + _DAT_11306ea88))[1];
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar6 + _DAT_11306ea88);
      func_0x000107c61434(lVar4);
      func_0x000107c5fadc(uVar5,lVar4);
      func_0x000107c6142c(lVar4);
    }
    puVar2 = PTR_PTR_1126ac048;
    func_0x000107c61168(PTR_PTR_1126ac048);
    func_0x000107c501a4();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar1);
  }
  return puVar2;
}



/* Entry: 102b80d4c; end: 102b81727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b80d4c(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined **ppuVar22;
  undefined8 uVar23;
  ulong uVar24;
  long unaff_x20;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  long lVar30;
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
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [32];
  
  lVar10 = _DAT_11306ea70;
  lVar30 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar30 + _DAT_11306ea70,auStack_b0,0,0);
  uVar8 = lVar30 + lVar10;
  func_0x000107c61618();
  if (uVar8 != 0) {
    uVar9 = uVar8;
    func_0x000107c4f81c();
    func_0x000107c61180();
    lVar10 = 0;
    FUN_102b80a50();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61604(unaff_x20 + 0x40,lVar10);
    func_0x000107c61174();
    func_0x000107c3d614(uVar9);
    uVar23 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fe4228);
    puVar21 = (undefined8 *)(lVar30 + _DAT_11306ea88);
    puVar2 = (undefined8 *)(lVar30 + _DAT_11306ea90);
    puVar3 = (undefined8 *)(lVar30 + _DAT_11306ea98);
    puVar4 = (undefined8 *)(lVar30 + _DAT_11306eaa0);
    puVar5 = (undefined8 *)(lVar30 + _DAT_11306eaa8);
    puVar6 = (undefined8 *)(lVar30 + _DAT_11306eab0);
    uVar13 = *(undefined8 *)(lVar30 + _DAT_11306eab8);
    uVar16 = ((undefined8 *)(lVar30 + _DAT_11306eab8))[1];
    puVar11 = (undefined *)0x0;
    FUN_102b7f5a8();
    puVar12 = puVar11;
    func_0x000107c613fc();
    uVar36 = puVar21[1];
    uVar35 = *puVar21;
    uVar27 = puVar21[1];
    uVar38 = puVar2[1];
    uVar37 = *puVar2;
    uVar31 = puVar2[1];
    uVar40 = puVar3[1];
    uVar39 = *puVar3;
    uVar32 = puVar3[1];
    uVar42 = puVar4[1];
    uVar41 = *puVar4;
    uVar33 = puVar4[1];
    uVar44 = puVar5[1];
    uVar43 = *puVar5;
    uVar34 = puVar5[1];
    uVar46 = puVar6[1];
    uVar45 = *puVar6;
    uVar29 = puVar6[1];
    *(undefined8 *)(puVar12 + 0x10) = uVar23;
    *(undefined8 *)(puVar12 + 0x30) = uVar38;
    *(undefined8 *)(puVar12 + 0x28) = uVar37;
    *(undefined8 *)(puVar12 + 0x20) = uVar36;
    *(undefined8 *)(puVar12 + 0x18) = uVar35;
    *(undefined8 *)(puVar12 + 0x50) = uVar42;
    *(undefined8 *)(puVar12 + 0x48) = uVar41;
    *(undefined8 *)(puVar12 + 0x40) = uVar40;
    *(undefined8 *)(puVar12 + 0x38) = uVar39;
    *(undefined8 *)(puVar12 + 0x70) = uVar46;
    *(undefined8 *)(puVar12 + 0x68) = uVar45;
    *(undefined8 *)(puVar12 + 0x60) = uVar44;
    *(undefined8 *)(puVar12 + 0x58) = uVar43;
    *(undefined8 *)(puVar12 + 0x78) = uVar13;
    *(undefined8 *)(puVar12 + 0x80) = uVar16;
    func_0x000107c61434(uVar16);
    func_0x000107c61174(uVar23);
    func_0x000107c61434(uVar27);
    func_0x000107c61434(uVar31);
    func_0x000107c61434(uVar32);
    func_0x000107c61434(uVar33);
    func_0x000107c61434(uVar34);
    func_0x000107c61434(uVar29);
    uVar24 = uVar8;
    func_0x000107c4f818();
    func_0x000107c61180();
    uVar25 = uVar24;
    func_0x000107c43e88();
    func_0x000107c61180();
    func_0x000107c61170();
    uVar26 = 0;
    if (uVar25 != 0) {
      uVar13 = 0;
      FUN_102b81ab4(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
      uVar24 = uVar25;
      func_0x000107c5fc54(uVar25,uVar13);
      func_0x000107c61170(uVar25);
      if (uVar24 >> 0x3e == 0) {
        uVar25 = *(ulong *)((uVar24 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar25 = uVar24 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar24) {
          uVar25 = uVar24;
        }
        func_0x000107c60480();
      }
      if (uVar25 != 0) {
        uVar28 = 0;
        do {
          if ((uVar24 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar24 & 0xffffffffffffff8) + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x102b81054);
              (*pcVar7)();
            }
            uVar14 = *(ulong *)(uVar24 + uVar28 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar14 = uVar28;
            FUN_102b81870(uVar28,uVar24,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0,0x112daba28
                         );
          }
          uVar1 = uVar28 + 1;
          if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102b81050);
            (*pcVar7)();
          }
          puVar15 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
          func_0x000107c61168(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
          uVar26 = uVar14;
          func_0x000107c6148c(uVar14,puVar15);
          if (uVar26 != 0) {
            func_0x000107c6142c();
            goto LAB_102b81078;
          }
          func_0x000107c61170(uVar14);
          uVar28 = uVar28 + 1;
        } while (uVar1 != uVar25);
      }
      func_0x000107c6142c();
      uVar26 = 0;
    }
LAB_102b81078:
    func_0x00010623bf28();
    func_0x000107c61180();
    if (uVar24 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102b81720);
      (*pcVar7)();
    }
    uVar25 = uVar24;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar24);
    uVar24 = uVar25;
    if (4 < *(ulong *)(uVar25 + 0x10)) {
      func_0x000101994330(uVar25,uVar25 + 0x20,0,9);
      func_0x000107c6142c(uVar25);
    }
    uVar23 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c6157c(puVar12);
    func_0x000107c4d80c();
    func_0x000107c61180();
    uVar27 = *(undefined8 *)(lVar30 + _DAT_11306ea80);
    uVar25 = uVar26;
    func_0x000107c61174();
    uVar16 = uVar27;
    func_0x000107c615f0();
    FUN_102b80c04();
    ppuStack_e8 = &PTR_DAT_1105a5880;
    lVar17 = 0;
    puStack_108 = puVar12;
    puStack_f0 = puVar11;
    FUN_102b84708();
    lVar18 = lVar17;
    func_0x000107c610f8();
    lVar30 = _DAT_112efa650;
    puVar11 = puVar12;
    func_0x000107c6157c();
    func_0x000102b81af4();
    *(undefined **)(lVar18 + lVar30) = puVar11;
    lVar30 = _DAT_112efa658;
    puVar11 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c52b2c();
    func_0x000107c52610(puVar11);
    func_0x000107c59594(0x4020000000000000,puVar11);
    func_0x000107c61174();
    func_0x000107c5a050();
    func_0x000107c55b40(puVar11);
    func_0x000107c55b3c(0,0x4020000000000000,0,0x4020000000000000,puVar11);
    puVar15 = puVar11;
    func_0x000107c61170();
    *(undefined **)(lVar18 + lVar30) = puVar11;
    lVar30 = _DAT_112efa660;
    func_0x000102b81bac();
    *(undefined **)(lVar18 + lVar30) = puVar15;
    *(undefined **)(lVar18 + _DAT_112efa668) = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar21 = (undefined8 *)(lVar18 + _DAT_112efa670);
    *puVar21 = 0;
    *(undefined1 *)(puVar21 + 1) = 1;
    puVar21 = (undefined8 *)(lVar18 + _DAT_112efa678);
    *puVar21 = 0;
    puVar21[1] = 0;
    *(undefined1 *)(puVar21 + 2) = 1;
    *(undefined1 *)(lVar18 + _DAT_112efa680) = 0;
    lVar30 = lVar18 + _DAT_112efa6a0;
    *(undefined8 *)(lVar30 + 8) = 0;
    func_0x000107c61614(lVar30,0);
    *(undefined1 *)(lVar18 + _DAT_112efa6b8) = 0;
    *(ulong *)(lVar18 + _DAT_112efa688) = uVar24;
    FUN_102b81a2c(&puStack_108,lVar18 + _DAT_112efa690);
    *(undefined8 *)(lVar18 + _DAT_112efa698) = uVar23;
    *(undefined ***)(lVar30 + 8) = &PTR_DAT_1105a5b00;
    func_0x000107c61604(lVar30,unaff_x20);
    *(ulong *)(lVar18 + _DAT_112efa6a8) = uVar26;
    *(undefined8 *)(lVar18 + _DAT_112efa6b0) = uVar16;
    puVar11 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_c0 = lVar18;
    lStack_b8 = lVar17;
    func_0x000107c61174();
    func_0x000107c61174(uVar23);
    func_0x000107c615f0(uVar16);
    plVar19 = &lStack_c0;
    func_0x000107c61154(plVar19,puVar11,0,0);
    lVar30 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar30 + 0x18) = 4;
    *(undefined8 *)(lVar30 + 0x10) = 2;
    func_0x000107c61174();
    func_0x000107c61174();
    plVar20 = plVar19;
    func_0x000103bb7e3c();
    puVar21 = (undefined8 *)plVar20[1];
    *(long *)(lVar30 + 0x20) = *plVar20;
    *(undefined8 **)(lVar30 + 0x28) = puVar21;
    func_0x000107c61434();
    func_0x000103bb9f54();
    uVar13 = puVar21[1];
    *(undefined8 *)(lVar30 + 0x30) = *puVar21;
    *(undefined8 *)(lVar30 + 0x38) = uVar13;
    func_0x000107c61434();
    lVar18 = lVar30;
    func_0x000107c5fc48(lVar30,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar30);
    func_0x000107c3d744(uVar27);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar25);
    func_0x000107c615e8(uVar16);
    func_0x000107c615e8(uVar27);
    func_0x000107c61170(plVar19);
    func_0x000107c61170(plVar19);
    func_0x000107c61170(lVar18);
    func_0x000107c61574(puVar12);
    func_0x0001000834e4(&puStack_108);
    func_0x000107c61604(unaff_x20 + 0x48,plVar19);
    func_0x000107c61174();
    func_0x000107c3d614(lVar10);
    lVar30 = lVar10 + _DAT_112efa548;
    *(undefined ***)(lVar30 + 8) = &PTR_DAT_1105a5b10;
    func_0x000107c61604(lVar30,unaff_x20);
    plVar20 = plVar19;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(plVar19);
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102b81724);
      (*pcVar7)();
    }
    uVar26 = uVar9;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (uVar26 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102b81728);
      (*pcVar7)();
    }
    uVar24 = uVar8;
    func_0x000107c4f818(uVar8);
    func_0x000107c61180();
    FUN_102b7fcbc(plVar20,uVar26,uVar24,0);
    func_0x000107c61170(plVar20);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar24);
    func_0x000107c41c30(plVar19);
    func_0x000107c61170(lVar10);
    func_0x000107c41c30(lVar10);
    if ((*(byte *)((long)plVar19 + _DAT_112efa6b8) & 1) == 0) {
      *(undefined1 *)((long)plVar19 + _DAT_112efa6b8) = 1;
      lVar30 = _DAT_112efa668;
      func_0x000107c61428((long)plVar19 + _DAT_112efa668,auStack_d8,0,0);
      uVar26 = *(ulong *)((long)plVar19 + lVar30);
      if (uVar26 >> 0x3e == 0) {
        uVar24 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar24 = uVar26 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar26) {
          uVar24 = uVar26;
        }
        func_0x000107c60480();
      }
      func_0x000107c61434(uVar26);
      if (uVar24 != 0) {
        uVar28 = 0;
        do {
          if ((uVar26 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x102b81704);
              (*pcVar7)();
            }
            uVar14 = *(ulong *)(uVar26 + uVar28 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar14 = uVar28;
            FUN_102b81870(uVar28,uVar26,&PTR__OBJC_CLASS___UILabel_1126aec30,0x112d7b960);
          }
          uVar1 = uVar28 + 1;
          if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102b81700);
            (*pcVar7)();
          }
          puVar15 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
          puVar11 = &UNK_1105a5aa8;
          func_0x000107c613fc(&UNK_1105a5aa8,0x18,7);
          *(ulong *)(puVar11 + 0x10) = uVar14;
          ppuStack_e8 = (undefined **)FUN_102b81a70;
          puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_100 = 0x42000000;
          puStack_f8 = &UNK_1000f6b44;
          puStack_f0 = &UNK_1105a5ac0;
          ppuVar22 = &puStack_108;
          puStack_e0 = puVar11;
          func_0x000107c60bc4(ppuVar22);
          puVar11 = puStack_e0;
          func_0x000107c61174(uVar14);
          func_0x000107c61574(puVar11);
          func_0x000107c3dcd8(0x3fd47ae147ae147b,(double)(long)uVar28 * 0.045 + 0.05,
                              0x3fe199999999999a,0x3fe0000000000000,puVar15);
          func_0x000107c61170(uVar14);
          func_0x000107c60bd0(ppuVar22);
          uVar28 = uVar28 + 1;
        } while (uVar1 != uVar24);
      }
      func_0x000107c6142c(uVar26);
    }
    func_0x000107c61170(lVar10);
    func_0x000107c61574(puVar12);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(uVar8);
    func_0x000107c61170(plVar19);
  }
  return;
}



/* Entry: 102b81728; end: 102b8179b;  */

void FUN_102b81728(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61610(unaff_x20 + 0x40);
  func_0x000107c61610(unaff_x20 + 0x48);
  return;
}



/* Entry: 102b8179c; end: 102b817bb;  */

void FUN_102b8179c(void)

{
  FUN_102b80d4c();
  return;
}



/* Entry: 102b817bc; end: 102b817c3;  */

undefined8 FUN_102b817bc(void)

{
  return 0;
}



/* Entry: 102b817c4; end: 102b817ff;  */

void FUN_102b817c4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x40;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102b80534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102b81800; end: 102b81803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b81800(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61604(unaff_x20 + 0x40,0);
  lVar1 = _DAT_11306ea78;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_11306ea78,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c41ac8();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102b81804; end: 102b8186f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b81804(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61604(unaff_x20 + 0x40,0);
  lVar1 = _DAT_11306ea78;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_11306ea78,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c41ac8();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102b81870; end: 102b81a2b;  */

ulong FUN_102b81870(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b81954);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b81958);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102b81ab4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b81a2c);
  (*pcVar2)();
}



/* Entry: 102b81a2c; end: 102b81a6f;  */

long FUN_102b81a2c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102b81a70; end: 102b81a93;  */

void FUN_102b81a70(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = 0x3ff0000000000000;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x000107c5a03c(*(undefined8 *)(unaff_x20 + 0x10),param_2,&uStack_40);
  return;
}



/* Entry: 102b81a94; end: 102b81ab3;  */

void FUN_102b81a94(void)

{
  func_0x000107c61168(&PTR_PTR_112efa5b8);
  return;
}



/* Entry: 102b81ab4; end: 102b81cb3;  */

void FUN_102b81ab4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b81cb4; end: 102b81cdb; -[_TtC21SpotlightQuickComment35SpotlightQuickCommentViewController initWithCoder:] */

void FUN_102b81cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b84ba4();
  return;
}



/* Entry: 102b81cdc; end: 102b827f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b81cdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLoad_112684cd8);
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b82354);
    (*pcVar2)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(lVar9);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar3);
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b82358);
    (*pcVar2)();
  }
  func_0x000107c5a378();
  func_0x000107c61170(lVar9);
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8235c);
    (*pcVar2)();
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112efa650);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar9);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112efa658);
  func_0x000107c3d89c(uVar10);
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b82360);
    (*pcVar2)();
  }
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112efa660);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar9);
  lVar9 = 0x112d360b8;
  FUN_102b847dc(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 0x17;
  *(undefined8 *)(lVar9 + 0x10) = 0xb;
  uVar4 = uVar10;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b82364);
    (*pcVar2)();
  }
  lVar6 = lVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar9 + 0x20) = uVar7;
  uVar4 = uVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b82368);
    (*pcVar2)();
  }
  lVar6 = lVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar9 + 0x28) = uVar7;
  uVar4 = uVar10;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8236c);
    (*pcVar2)();
  }
  lVar6 = lVar5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar9 + 0x30) = uVar7;
  uVar4 = uVar10;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    uVar7 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar6);
    *(undefined8 *)(lVar9 + 0x38) = uVar7;
    uVar4 = uVar10;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar7 = uVar4;
    func_0x000107c40290(0x404c000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    *(undefined8 *)(lVar9 + 0x40) = uVar7;
    uVar4 = uVar12;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar7 = uVar10;
    func_0x000107c5cbe4(uVar10);
    func_0x000107c61180();
    uVar13 = 0xc020000000000000;
    uVar8 = uVar4;
    func_0x000107c40284();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    *(undefined8 *)(lVar9 + 0x48) = uVar8;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar6 = lVar5;
      func_0x000107c3f75c(lVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      uVar4 = uVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar6);
      *(undefined8 *)(lVar9 + 0x50) = uVar4;
      uVar4 = uVar11;
      func_0x000107c4acb0();
      func_0x000107c61180();
      uVar12 = uVar10;
      func_0x000107c4acb0(uVar10);
      func_0x000107c61180();
      uVar7 = uVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar12);
      *(undefined8 *)(lVar9 + 0x58) = uVar7;
      uVar4 = uVar11;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      uVar12 = uVar10;
      func_0x000107c5ce8c(uVar10);
      func_0x000107c61180();
      uVar7 = uVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar12);
      *(undefined8 *)(lVar9 + 0x60) = uVar7;
      uVar4 = uVar11;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uVar12 = uVar10;
      func_0x000107c5cbe4(uVar10);
      func_0x000107c61180();
      uVar7 = uVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar12);
      *(undefined8 *)(lVar9 + 0x68) = uVar7;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c3ec1c(uVar10);
      func_0x000107c61180();
      uVar4 = uVar11;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar9 + 0x70) = uVar4;
      uVar11 = 0;
      FUN_102b84e50(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar5 = lVar9;
      func_0x000107c5fc48(lVar9,uVar11);
      func_0x000107c61574(lVar9);
      func_0x000107c3d048(puVar3);
      func_0x000107c61170(lVar5);
      func_0x000102b82374();
      lVar9 = *(long *)(unaff_x20 + _DAT_112efa6a8);
      if (lVar9 != 0) {
        func_0x000107c61174();
        func_0x000107c3d8b4();
        func_0x000107c4b8b8(lVar9);
        func_0x000107c61170(lVar9);
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efa678);
        *puVar1 = uVar13;
        puVar1[1] = param_2;
        *(undefined1 *)(puVar1 + 2) = 0;
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b82374);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b82370);
  (*pcVar2)();
}



/* Entry: 102b827f8; end: 102b8281f; -[_TtC21SpotlightQuickComment35SpotlightQuickCommentViewController viewDidLoad] */

void FUN_102b827f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b81cdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b82820; end: 102b82a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b82820(uint param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [24];
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  if ((*(byte *)(unaff_x20 + _DAT_112efa6b8) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112efa6b8) = 1;
    lVar2 = _DAT_112efa668;
    func_0x000107c61428(unaff_x20 + _DAT_112efa668,auStack_b8,0,0);
    uVar8 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar8 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar8 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar8) {
        uVar9 = uVar8;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar8);
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        if ((uVar8 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102b82a3c);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar10;
          func_0x0001013e410c(uVar10,uVar8);
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b82a38);
          (*pcVar3)();
        }
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar6 = &UNK_1105a5d78;
        func_0x000107c613fc(&UNK_1105a5d78,0x18,7);
        *(ulong *)(puVar6 + 0x10) = uVar4;
        pcStack_c8 = FUN_102b84e1c;
        puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_e0 = 0x42000000;
        puStack_d8 = &UNK_1000f6b44;
        puStack_d0 = &UNK_1105a5d90;
        ppuVar7 = &puStack_e8;
        puStack_c0 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_c0;
        func_0x000107c61174(uVar4);
        func_0x000107c61574(puVar6);
        func_0x000107c3dcd8(0x3fd47ae147ae147b,(double)(long)uVar10 * 0.045 + 0.05,
                            0x3fe199999999999a,0x3fe0000000000000,puVar5);
        func_0x000107c61170(uVar4);
        func_0x000107c60bd0(ppuVar7);
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar9);
    }
    func_0x000107c6142c(uVar8);
  }
  return;
}



/* Entry: 102b82a54; end: 102b82a83; -[_TtC21SpotlightQuickComment35SpotlightQuickCommentViewController viewDidAppear:] */

void FUN_102b82a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102b82820(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b82a84; end: 102b82ab3;  */

void FUN_102b82a84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = 0x3ff0000000000000;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x000107c5a03c(param_1,param_2,&uStack_40);
  return;
}



/* Entry: 102b82ab4; end: 102b82cf3;  */

/* WARNING: Possible PIC construction at 0x000102b82c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b82c84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b82c6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b82ab4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c61168(PTR__OBJC_CLASS___UILabel_1126aec30);
  uVar5 = param_1;
  func_0x000107c6148c(param_1,puVar3);
  lVar1 = _DAT_112efa668;
  if (uVar5 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112efa668,auStack_68,0,0);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61434(uVar9);
    uVar7 = uVar9;
    FUN_102b82cf4();
    func_0x000107c6142c(uVar9);
    if (((uint)uVar7 & 0xff) != 1) {
      uVar8 = *(ulong *)(unaff_x20 + lVar1);
      if (uVar8 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar4 = uVar8;
        }
        func_0x000107c60480();
      }
      if ((long)uVar5 < (long)uVar4) {
        func_0x000107c61428(unaff_x20 + lVar1,&puStack_98,0x20,0);
        uVar8 = *(ulong *)(unaff_x20 + lVar1);
        if ((uVar8 & 0xc000000000000001) == 0) {
          if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102b82cf0);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102b82cf4);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar8 + uVar5 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          func_0x0001013e410c();
        }
        func_0x000107c614a8(&puStack_98);
        puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar3 = &UNK_1105a5d28;
        func_0x000107c613fc(&UNK_1105a5d28,0x20,7);
        *(ulong *)(puVar3 + 0x10) = uVar5;
        *(undefined8 *)(puVar3 + 0x18) = 0x3ff4000000000000;
        uStack_78 = 0x102b84ef0;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_1000f6b44;
        puStack_80 = &UNK_1105a5d40;
        puStack_70 = puVar3;
        func_0x000107c60bc4(&puStack_98);
        puVar3 = puStack_70;
        func_0x000107c61174(uVar5);
        func_0x000107c61574(puVar3);
        func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar6);
        param_1 = uVar5;
      }
      else {
        func_0x000102b82e04(uVar5,5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b82cf4; end: 102b8300b;  */

undefined1  [16] FUN_102b82cf4(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar8 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar7 = uVar8;
    if (0x7fffffffffffffff < param_2) {
      uVar7 = param_2;
    }
    func_0x000107c60480();
  }
  uVar6 = 0;
  do {
    if (uVar7 == uVar6) {
      uVar6 = 0;
      uVar5 = 1;
LAB_102b82dc8:
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = uVar6;
      return auVar9;
    }
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b82dec);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_2 + uVar6 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar6;
      func_0x0001013e410c(uVar6,param_2);
    }
    FUN_102b84e50(0,0x112d7b960,&PTR__OBJC_CLASS___UILabel_1126aec30);
    uVar4 = uVar3;
    func_0x000107c60118(uVar3,param_1);
    func_0x000107c61170(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar5 = 0;
      goto LAB_102b82dc8;
    }
    bVar2 = SCARRY8(uVar6,1);
    uVar6 = uVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b82df0);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 102b8300c; end: 102b8305b; -[_TtC21SpotlightQuickComment35SpotlightQuickCommentViewController handleTap:] */

/* WARNING: Possible PIC construction at 0x000102b83044: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b83048) */

void FUN_102b8300c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102b82ab4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b8305c; end: 102b83517;  */

/* WARNING: Removing unreachable block (ram,0x000102b83510) */
/* WARNING: Removing unreachable block (ram,0x000102b83508) */
/* WARNING: Removing unreachable block (ram,0x000102b83500) */
/* WARNING: Removing unreachable block (ram,0x000102b834f8) */
/* WARNING: Removing unreachable block (ram,0x000102b834fc) */
/* WARNING: Removing unreachable block (ram,0x000102b83504) */
/* WARNING: Removing unreachable block (ram,0x000102b8350c) */
/* WARNING: Removing unreachable block (ram,0x000102b83514) */
/* WARNING: Removing unreachable block (ram,0x000102b834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b8305c(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long lVar18;
  long unaff_x20;
  long lVar19;
  undefined **appuStack_318 [87];
  
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 0x12;
  *(undefined8 *)(lVar2 + 0x10) = 9;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f41cd8;
  func_0x000107c61174();
  uVar4 = 0;
  appuStack_318[0] = ppuVar3;
  FUN_102b84e50(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar4;
  func_0x000101fd99f8();
  func_0x000107c61174();
  func_0x000107c602d4(lVar2 + 0x20,appuStack_318,uVar4,uVar5);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  uVar7 = 0;
  FUN_102b84e50(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar2 + 0x60) = uVar7;
  *(undefined **)(lVar2 + 0x48) = puVar6;
  ppuVar8 = &PTR____CFConstantStringClassReference_110f41cf8;
  func_0x000107c61174();
  appuStack_318[0] = ppuVar8;
  func_0x000107c61174();
  func_0x000107c602d4(lVar2 + 0x68,appuStack_318,uVar4,uVar5);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *(undefined8 *)(lVar2 + 0xa8) = uVar7;
  *(undefined **)(lVar2 + 0x90) = puVar6;
  ppuVar9 = &PTR____CFConstantStringClassReference_110ed79b8;
  func_0x000107c61174();
  appuStack_318[0] = ppuVar9;
  func_0x000107c61174();
  func_0x000107c602d4(lVar2 + 0xb0,appuStack_318,uVar4,uVar5);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *(undefined8 *)(lVar2 + 0xf0) = uVar7;
  *(undefined **)(lVar2 + 0xd8) = puVar6;
  ppuVar10 = &PTR____CFConstantStringClassReference_110f43598;
  func_0x000107c61174();
  appuStack_318[0] = ppuVar10;
  func_0x000107c61174();
  func_0x000107c602d4(lVar2 + 0xf8,appuStack_318,uVar4,uVar5);
  lVar18 = *(long *)(unaff_x20 + _DAT_112efa688);
  *(undefined **)(lVar2 + 0x138) = PTR___sSSN_11034da80;
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b834f0);
    (*pcVar1)();
  }
  if (param_1 < *(ulong *)(lVar18 + 0x10)) {
    lVar18 = lVar18 + param_1 * 0x10;
    uVar17 = *(undefined8 *)(lVar18 + 0x28);
    *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)(lVar18 + 0x20);
    *(undefined8 *)(lVar2 + 0x128) = uVar17;
    ppuVar11 = &PTR____CFConstantStringClassReference_110f435b8;
    func_0x000107c61174();
    appuStack_318[0] = ppuVar11;
    func_0x000107c61434(uVar17);
    func_0x000107c61174();
    func_0x000107c602d4(lVar2 + 0x140,appuStack_318,uVar4,uVar5);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    *(undefined8 *)(lVar2 + 0x180) = uVar7;
    *(undefined **)(lVar2 + 0x168) = puVar6;
    ppuVar12 = &PTR____CFConstantStringClassReference_110f435d8;
    func_0x000107c61174();
    appuStack_318[0] = ppuVar12;
    func_0x000107c61174();
    func_0x000107c602d4(lVar2 + 0x188,appuStack_318,uVar4,uVar5);
    lVar18 = 0x112d64d38;
    func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
    uVar17 = 0x30;
    func_0x000107c613fc();
    *(undefined8 *)(lVar18 + 0x18) = 2;
    *(undefined8 *)(lVar18 + 0x10) = 1;
    lVar13 = 1;
    func_0x000107c31134();
    func_0x000107c61180();
    if (lVar13 == 0) {
      lVar19 = 0;
      uVar17 = 0;
    }
    else {
      lVar19 = lVar13;
      func_0x000107c5faec();
      func_0x000107c61170(lVar13);
    }
    *(long *)(lVar18 + 0x20) = lVar19;
    *(undefined8 *)(lVar18 + 0x28) = uVar17;
    uVar17 = 0x112efa6e8;
    func_0x0001000285a8(0x112efa6e8,&UNK_10db2a048);
    *(undefined8 *)(lVar2 + 0x1c8) = uVar17;
    *(long *)(lVar2 + 0x1b0) = lVar18;
    ppuVar14 = &PTR____CFConstantStringClassReference_110f431b8;
    func_0x000107c61174();
    appuStack_318[0] = ppuVar14;
    func_0x000107c61174();
    func_0x000107c602d4(lVar2 + 0x1d0,appuStack_318,uVar4,uVar5);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    *(undefined8 *)(lVar2 + 0x210) = uVar7;
    *(undefined **)(lVar2 + 0x1f8) = puVar6;
    ppuVar15 = &PTR____CFConstantStringClassReference_110f43038;
    func_0x000107c61174();
    appuStack_318[0] = ppuVar15;
    func_0x000107c61174();
    func_0x000107c602d4(lVar2 + 0x218,appuStack_318,uVar4,uVar5);
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar17 = 0;
    FUN_102b84e50(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
    *(undefined8 *)(lVar2 + 600) = uVar17;
    *(undefined **)(lVar2 + 0x240) = puVar6;
    ppuVar16 = &PTR____CFConstantStringClassReference_110f430b8;
    func_0x000107c61174();
    appuStack_318[0] = ppuVar16;
    func_0x000107c61174();
    func_0x000107c602d4(lVar2 + 0x260,appuStack_318,uVar4,uVar5);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    *(undefined8 *)(lVar2 + 0x2a0) = uVar7;
    func_0x000107c61170(ppuVar10);
    func_0x000107c61170(ppuVar11);
    func_0x000107c61170(ppuVar12);
    func_0x000107c61170(ppuVar14);
    func_0x000107c61170(ppuVar15);
    *(undefined **)(lVar2 + 0x288) = puVar6;
    func_0x000107c61170(ppuVar16);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(ppuVar8);
    func_0x000107c61170(ppuVar9);
    lVar18 = lVar2;
    func_0x000100dfa3f0(lVar2);
    func_0x000107c61588(lVar2);
    uVar5 = 0x112d377a0;
    func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
    func_0x000107c61408(lVar2 + 0x20,9,uVar5);
    return lVar18;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b834f4);
  (*pcVar1)();
}



/* Entry: 102b83518; end: 102b835cb;  */

void FUN_102b83518(uint param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  if (((param_1 & 1) != 0) && (param_2 != 0)) {
    func_0x000107c5f9dc(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c4bb34(param_2);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    FUN_102b835cc(param_1 & 1);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 102b835cc; end: 102b8381f;  */

void FUN_102b835cc(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  func_0x000107c614f0();
  if ((param_1 & 1) == 0) {
    lVar2 = unaff_x20;
    func_0x000106261e48();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b83820);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar4 = PTR_PTR_1126afde0;
    func_0x000107c61168();
    func_0x000107c5fadc(lVar3,param_2);
    func_0x000107c6142c(param_2);
    uVar8 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010f0f7be0);
    func_0x000107c409d8();
  }
  else {
    lVar2 = unaff_x20;
    func_0x000106261f08();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b8381c);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    puVar4 = PTR_PTR_1126afde0;
    func_0x000107c61168();
    func_0x000107c5fadc(lVar3,param_2);
    func_0x000107c6142c(param_2);
    uVar8 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f0f7c10);
    func_0x000107c40930();
  }
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar8);
  uVar8 = 0;
  func_0x000107c60714(unaff_x20,0);
  puVar5 = &UNK_1105a5c88;
  func_0x000107c613fc(&UNK_1105a5c88,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1105a5cd8;
  func_0x000107c613fc(&UNK_1105a5cd8,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  uStack_50 = 0x102b84e14;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105a5cf0;
  puStack_48 = puVar6;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c61174(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c5fb28(unaff_x20,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000100162d98(unaff_x20 + 0x20,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(unaff_x20);
  return;
}



/* Entry: 102b83820; end: 102b838e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b83820(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112efa698);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5c2e0();
      func_0x000107c615e8(lVar1);
    }
    lVar1 = param_1 + _DAT_112efa6a0;
    lVar2 = lVar1;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar1 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar1 + 8))();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b838e4; end: 102b83e57;  */

/* WARNING: Possible PIC construction at 0x000102b83b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b83b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b838e4(double param_1,double param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  double *pdVar2;
  char cVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  double dVar13;
  double dVar14;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  lVar11 = _DAT_112efa668;
  if (*(long *)(*(long *)(unaff_x20 + _DAT_112efa688) + 0x10) == 0) {
    return;
  }
  if (3 < (long)param_3) {
    if (1 < param_3 - 4) {
      return;
    }
    puVar1 = (ulong *)(unaff_x20 + _DAT_112efa670);
    if ((char)puVar1[1] != '\x01') {
      uVar10 = *puVar1;
      func_0x000107c61428(unaff_x20 + _DAT_112efa668,&uStack_78,0,0);
      uVar12 = *(ulong *)(unaff_x20 + lVar11);
      if (uVar12 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar12) {
          uVar9 = uVar12;
        }
        func_0x000107c60480();
      }
      if ((long)uVar10 < (long)uVar9) {
        uVar12 = *(ulong *)(unaff_x20 + lVar11);
        if (uVar12 >> 0x3e == 0) {
          uVar9 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar9 = uVar12 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar12) {
            uVar9 = uVar12;
          }
          func_0x000107c60480();
        }
        if ((long)uVar10 < (long)uVar9) {
          func_0x000107c61428(unaff_x20 + lVar11,&puStack_a8,0x20,0);
          uVar12 = *(ulong *)(unaff_x20 + lVar11);
          if ((uVar12 & 0xc000000000000001) == 0) {
            if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102b83e50);
              (*pcVar4)();
            }
            if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x102b83e58);
              (*pcVar4)();
            }
            uVar10 = *(ulong *)(uVar12 + uVar10 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            func_0x0001013e410c();
          }
          func_0x000107c614a8(&puStack_a8);
          puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
          puVar6 = &UNK_1105a5b48;
          func_0x000107c613fc(&UNK_1105a5b48,0x20,7);
          *(ulong *)(puVar6 + 0x10) = uVar10;
          *(undefined8 *)(puVar6 + 0x18) = 0x3ff0000000000000;
          pcStack_88 = FUN_102b84de0;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_1105a5b60;
          ppuVar7 = &puStack_a8;
          puStack_80 = puVar6;
          func_0x000107c60bc4(ppuVar7);
          puVar6 = puStack_80;
          func_0x000107c61174(uVar10);
          func_0x000107c61574(puVar6);
          func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar5);
          func_0x000107c61170(uVar10);
          func_0x000107c60bd0(ppuVar7);
        }
      }
    }
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    lVar11 = unaff_x20 + _DAT_112efa6a0;
    lVar8 = lVar11;
    func_0x000107c61618();
    if (lVar8 == 0) {
      return;
    }
    lVar11 = *(long *)(lVar11 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar11 + 8))();
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar8);
    return;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      FUN_102b83ed0();
      pdVar2 = (double *)(unaff_x20 + _DAT_112efa678);
      if (*(char *)(pdVar2 + 2) == '\x01') {
        *pdVar2 = param_1;
        pdVar2[1] = param_2;
        *(undefined1 *)(pdVar2 + 2) = 0;
        dVar13 = param_1;
        dVar14 = param_2;
      }
      else {
        dVar13 = *pdVar2;
        dVar14 = pdVar2[1];
      }
      if (*(char *)(unaff_x20 + _DAT_112efa670 + 8) == '\x01') {
        param_1 = param_1 - dVar13;
        func_0x000107c61038(param_1,param_2 - dVar14);
        if (param_1 <= 10.0) {
          return;
        }
      }
      *(undefined1 *)(unaff_x20 + _DAT_112efa680) = 1;
      return;
    }
    if (param_3 != 3) {
      return;
    }
    puVar1 = (ulong *)(unaff_x20 + _DAT_112efa670);
    if ((char)puVar1[1] != '\x01') {
      uVar12 = *puVar1;
      func_0x000107c61428(unaff_x20 + _DAT_112efa668,&uStack_78,0,0);
      uVar10 = *(ulong *)(unaff_x20 + lVar11);
      if (uVar10 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar10 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar10) {
          uVar9 = uVar10;
        }
        func_0x000107c60480();
      }
      if ((long)uVar12 < (long)uVar9) {
        func_0x000107c61428(unaff_x20 + lVar11,&puStack_a8,0x20,0);
        uVar10 = *(ulong *)(unaff_x20 + lVar11);
        if ((uVar10 & 0xc000000000000001) == 0) {
          if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b83e4c);
            (*pcVar4)();
          }
          if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b83e54);
            (*pcVar4)();
          }
          uVar10 = *(ulong *)(uVar10 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar10 = uVar12;
          func_0x0001013e410c();
        }
        func_0x000107c614a8(&puStack_a8);
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar6 = &UNK_1105a5b98;
        func_0x000107c613fc(&UNK_1105a5b98,0x20,7);
        *(ulong *)(puVar6 + 0x10) = uVar10;
        *(undefined8 *)(puVar6 + 0x18) = 0x3ff4000000000000;
        pcStack_88 = (code *)0x102b84ee4;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1105a5bb0;
        ppuVar7 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_80;
        func_0x000107c61174(uVar10);
        func_0x000107c61574(puVar6);
        func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar5);
        func_0x000107c61170(uVar10);
        func_0x000107c60bd0(ppuVar7);
      }
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      func_0x000102b82e04(uVar12,0x18);
      return;
    }
    cVar3 = *(char *)(unaff_x20 + _DAT_112efa680);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    if (cVar3 != '\x01') {
      return;
    }
    lVar11 = unaff_x20 + _DAT_112efa6a0;
    lVar8 = lVar11;
    func_0x000107c61618();
    if (lVar8 == 0) {
      return;
    }
    lVar11 = *(long *)(lVar11 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar11 + 8))();
    goto code_r0x000107c615e8;
  }
  pdVar2 = (double *)(unaff_x20 + _DAT_112efa678);
  *pdVar2 = param_1;
  pdVar2[1] = param_2;
  *(undefined1 *)(pdVar2 + 2) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112efa680) = 0;
  FUN_102b842c0();
  puVar1 = (ulong *)(unaff_x20 + _DAT_112efa670);
  uVar10 = *puVar1;
  cVar3 = (char)puVar1[1];
  if ((param_4 & 0xff) == 1) {
    if (cVar3 == '\x01') {
      return;
    }
    *puVar1 = param_3;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  else {
    if (cVar3 != '\x01' && param_3 == uVar10) {
      return;
    }
    *puVar1 = param_3;
    *(char *)(puVar1 + 1) = (char)param_4;
    if (cVar3 == '\x01') goto LAB_102b840b4;
  }
  lVar11 = _DAT_112efa668;
  func_0x000107c61428(unaff_x20 + _DAT_112efa668,auStack_b0,0,0);
  uVar12 = *(ulong *)(unaff_x20 + lVar11);
  if (uVar12 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar9 = uVar12;
    }
    func_0x000107c60480();
  }
  if ((long)uVar10 < (long)uVar9) {
    uVar12 = *(ulong *)(unaff_x20 + lVar11);
    if (uVar12 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar12 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar12) {
        uVar9 = uVar12;
      }
      func_0x000107c60480();
    }
    if ((long)uVar10 < (long)uVar9) {
      func_0x000107c61428(unaff_x20 + lVar11,&puStack_98,0x20,0);
      uVar12 = *(ulong *)(unaff_x20 + lVar11);
      if ((uVar12 & 0xc000000000000001) == 0) {
        if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b842b8);
          (*pcVar4)();
        }
        if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b842bc);
          (*pcVar4)();
        }
        uVar10 = *(ulong *)(uVar12 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        func_0x0001013e410c();
      }
      func_0x000107c614a8(&puStack_98);
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar6 = &UNK_1105a5c38;
      func_0x000107c613fc(&UNK_1105a5c38,0x20,7);
      *(ulong *)(puVar6 + 0x10) = uVar10;
      *(undefined8 *)(puVar6 + 0x18) = 0x3ff0000000000000;
      uStack_78 = 0x102b84eec;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_90 = (undefined *)0x42000000;
      pcStack_88 = (code *)&UNK_1000f6b44;
      puStack_80 = &UNK_1105a5c50;
      ppuVar7 = &puStack_98;
      puStack_70 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_70;
      func_0x000107c61174(uVar10);
      func_0x000107c61574(puVar6);
      func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar5);
      func_0x000107c61170(uVar10);
      func_0x000107c60bd0(ppuVar7);
    }
  }
  if ((param_4 & 0xff) == 1) {
    return;
  }
LAB_102b840b4:
  lVar11 = _DAT_112efa668;
  func_0x000107c61428(unaff_x20 + _DAT_112efa668,auStack_68,0,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar11);
  if (uVar10 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar12 = uVar10;
    }
    func_0x000107c60480();
  }
  if ((long)param_3 < (long)uVar12) {
    func_0x000107c61428(unaff_x20 + lVar11,&puStack_98,0x20,0);
    uVar10 = *(ulong *)(unaff_x20 + lVar11);
    if ((uVar10 & 0xc000000000000001) == 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b842a4);
        (*pcVar4)();
      }
      if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b842a8);
        (*pcVar4)();
      }
      param_3 = *(ulong *)(uVar10 + param_3 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x0001013e410c();
    }
    func_0x000107c614a8(&puStack_98);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_1105a5be8;
    func_0x000107c613fc(&UNK_1105a5be8,0x20,7);
    *(ulong *)(puVar6 + 0x10) = param_3;
    *(undefined8 *)(puVar6 + 0x18) = 0x3ff4000000000000;
    uStack_78 = 0x102b84ee8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = (undefined *)0x42000000;
    pcStack_88 = (code *)&UNK_1000f6b44;
    puStack_80 = &UNK_1105a5c00;
    ppuVar7 = &puStack_98;
    puStack_70 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_70;
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar6);
    func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar5);
    func_0x000107c61170(param_3);
    func_0x000107c60bd0(ppuVar7);
  }
  puVar6 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c4e57c();
    func_0x000107c61170(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102b842c0);
  (*pcVar4)();
}



/* Entry: 102b83e58; end: 102b83ecf; -[_TtC21SpotlightQuickComment35SpotlightQuickCommentViewController handleTriggeringLongPress:] */

/* WARNING: Possible PIC construction at 0x000102b83eb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b83eb8) */

void FUN_102b83e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c4b8b8(param_5,param_4,0);
  func_0x000107c5bcc0(param_5);
  FUN_102b838e4(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 102b83ed0; end: 102b842bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b83ed0(ulong param_1,uint param_2)

{
  ulong *puVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  FUN_102b842c0();
  puVar1 = (ulong *)(unaff_x20 + _DAT_112efa670);
  uVar10 = *puVar1;
  cVar2 = (char)puVar1[1];
  if ((param_2 & 0xff) == 1) {
    if (cVar2 == '\x01') {
      return;
    }
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  else {
    if (cVar2 != '\x01' && param_1 == uVar10) {
      return;
    }
    *puVar1 = param_1;
    *(char *)(puVar1 + 1) = (char)param_2;
    if (cVar2 == '\x01') goto LAB_102b840b4;
  }
  lVar3 = _DAT_112efa668;
  func_0x000107c61428(unaff_x20 + _DAT_112efa668,auStack_b0,0,0);
  uVar9 = *(ulong *)(unaff_x20 + lVar3);
  if (uVar9 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar5 = uVar9;
    }
    func_0x000107c60480();
  }
  if ((long)uVar10 < (long)uVar5) {
    uVar9 = *(ulong *)(unaff_x20 + lVar3);
    if (uVar9 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar5 = uVar9;
      }
      func_0x000107c60480();
    }
    if ((long)uVar10 < (long)uVar5) {
      func_0x000107c61428(unaff_x20 + lVar3,&puStack_98,0x20,0);
      uVar9 = *(ulong *)(unaff_x20 + lVar3);
      if ((uVar9 & 0xc000000000000001) == 0) {
        if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b842b8);
          (*pcVar4)();
        }
        if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b842bc);
          (*pcVar4)();
        }
        uVar10 = *(ulong *)(uVar9 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        func_0x0001013e410c();
      }
      func_0x000107c614a8(&puStack_98);
      puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar7 = &UNK_1105a5c38;
      func_0x000107c613fc(&UNK_1105a5c38,0x20,7);
      *(ulong *)(puVar7 + 0x10) = uVar10;
      *(undefined8 *)(puVar7 + 0x18) = 0x3ff0000000000000;
      uStack_78 = 0x102b84eec;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_1105a5c50;
      ppuVar8 = &puStack_98;
      puStack_70 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar7 = puStack_70;
      func_0x000107c61174(uVar10);
      func_0x000107c61574(puVar7);
      func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar6);
      func_0x000107c61170(uVar10);
      func_0x000107c60bd0(ppuVar8);
    }
  }
  if ((param_2 & 0xff) == 1) {
    return;
  }
LAB_102b840b4:
  lVar3 = _DAT_112efa668;
  func_0x000107c61428(unaff_x20 + _DAT_112efa668,auStack_68,0,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar3);
  if (uVar10 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar9 = uVar10;
    }
    func_0x000107c60480();
  }
  if ((long)param_1 < (long)uVar9) {
    func_0x000107c61428(unaff_x20 + lVar3,&puStack_98,0x20,0);
    uVar10 = *(ulong *)(unaff_x20 + lVar3);
    if ((uVar10 & 0xc000000000000001) == 0) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b842a4);
        (*pcVar4)();
      }
      if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b842a8);
        (*pcVar4)();
      }
      param_1 = *(ulong *)(uVar10 + param_1 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x0001013e410c();
    }
    func_0x000107c614a8(&puStack_98);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_1105a5be8;
    func_0x000107c613fc(&UNK_1105a5be8,0x20,7);
    *(ulong *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = 0x3ff4000000000000;
    uStack_78 = 0x102b84ee8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_1105a5c00;
    ppuVar8 = &puStack_98;
    puStack_70 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_70;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar7);
    func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar6);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar8);
  }
  puVar7 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c4e57c();
    func_0x000107c61170(puVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102b842c0);
  (*pcVar4)();
}



/* Entry: 102b842c0; end: 102b8457f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102b842c0(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_a8 [24];
  
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b84580);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = _DAT_112efa668;
  if (lVar4 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112efa668,auStack_a8,0,0);
    uVar8 = *(ulong *)(unaff_x20 + lVar3);
    if (uVar8 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar8 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar8) {
        uVar5 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112efa658);
      lVar6 = lVar4;
      func_0x000107c40784(lVar4);
      func_0x000107c61180();
      func_0x000107c40718(uVar9);
      dVar12 = param_1;
      dVar13 = param_2;
      func_0x000107c615e8(lVar6);
      func_0x000107c3ec60(uVar9);
      dVar11 = dVar12;
      func_0x000107c609c8();
      if (dVar11 + -24.0 <= param_2) {
        func_0x000107c609b8(dVar12,dVar13,param_3,param_4);
        uVar9 = 0x4038000000000000;
        dVar12 = dVar12 + 24.0;
        if (param_2 <= dVar12) {
          uVar8 = *(ulong *)(unaff_x20 + lVar3);
          if (uVar8 >> 0x3e == 0) {
            uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar5 = uVar8 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar8) {
              uVar5 = uVar8;
            }
            func_0x000107c60480();
          }
          func_0x000107c61434(uVar8);
          if (uVar5 != 0) {
            uVar10 = 0;
            do {
              if ((uVar8 & 0xc000000000000001) == 0) {
                if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8454c);
                  (*pcVar2)();
                }
                uVar7 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
                func_0x000107c61174(uVar7);
                dVar11 = dVar12;
                uVar14 = uVar9;
                uVar15 = param_3;
                uVar16 = param_4;
              }
              else {
                uVar7 = uVar10;
                func_0x0001013e410c(uVar10,uVar8);
                dVar11 = dVar12;
                uVar14 = uVar9;
                uVar15 = param_3;
                uVar16 = param_4;
              }
              uVar1 = uVar10 + 1;
              if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102b84548);
                (*pcVar2)();
              }
              func_0x000107c3ec60(uVar7);
              func_0x000107c4073c(uVar7);
              func_0x000107c609d0();
              dVar12 = dVar11;
              uVar9 = uVar14;
              param_3 = uVar15;
              param_4 = uVar16;
              func_0x000107c609c4();
              if (param_1 < dVar12) {
                func_0x000107c61170(uVar7);
              }
              else {
                func_0x000107c609b4(dVar11,uVar14,uVar15,uVar16);
                dVar12 = dVar11;
                func_0x000107c61170(uVar7);
                uVar9 = uVar14;
                param_3 = uVar15;
                param_4 = uVar16;
                if (param_1 <= dVar11) {
                  func_0x000107c61170(lVar4);
                  func_0x000107c6142c(uVar8);
                  uVar9 = 0;
                  goto LAB_102b84404;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar1 != uVar5);
          }
          func_0x000107c61170(lVar4);
          func_0x000107c6142c(uVar8);
          goto LAB_102b843fc;
        }
      }
    }
    func_0x000107c61170(lVar4);
  }
LAB_102b843fc:
  uVar10 = 0;
  uVar9 = 1;
LAB_102b84404:
  auVar17._8_8_ = uVar9;
  auVar17._0_8_ = uVar10;
  return auVar17;
}



/* Entry: 102b84580; end: 102b845ef;  */

void FUN_102b84580(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 == 1.0) {
    uStack_38 = 0x3ff0000000000000;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0x3ff0000000000000;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x000107c6088c(&uStack_50,param_1,param_1);
  }
  func_0x000107c5a03c(param_2,param_3,&uStack_50);
  return;
}



/* Entry: 102b845f0; end: 102b8464f; -[_TtC21SpotlightQuickComment35SpotlightQuickCommentViewController initWithNibName:bundle:] */

void FUN_102b845f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightQuickComment.SpotlightQuickCommentViewController",0x39,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b8461c);
  (*pcVar1)();
}



/* Entry: 102b84650; end: 102b84707; -[_TtC21SpotlightQuickComment35SpotlightQuickCommentViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b84650(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efa650));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efa658));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efa660));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112efa668));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112efa688));
  func_0x0001000834e4(param_1 + _DAT_112efa690);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efa698));
  func_0x000102b84e90(param_1 + _DAT_112efa6a0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efa6a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112efa6b0));
  return;
}



/* Entry: 102b84708; end: 102b84727;  */

void FUN_102b84708(void)

{
  func_0x000107c61168(&PTR_PTR_112890ab0);
  return;
}



/* Entry: 102b84728; end: 102b847db; -[_TtC21SpotlightQuickComment35SpotlightQuickCommentViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102b847c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b847c4) */

void FUN_102b84728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000102b84d14(param_3,param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102b847dc; end: 102b84853;  */

void FUN_102b847dc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102b84e50(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102b84854; end: 102b848c3;  */

void FUN_102b84854(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_102b848c4(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 102b848c4; end: 102b849eb;  */

ulong FUN_102b848c4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b849ec);
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
  FUN_102b849ec(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b849e8);
      (*pcVar1)();
    }
    FUN_102b84a8c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102b849ec; end: 102b84a8b;  */

undefined * FUN_102b849ec(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d7b960;
    FUN_102b847dc(0x112d7b960,&PTR__OBJC_CLASS___UILabel_1126aec30,0x112d7d390,&UNK_10db2a050);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102b84a8c; end: 102b84ba3;  */

long FUN_102b84a8c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b84ba0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b84ba4);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102b84e50(0,0x112d7b960,&PTR__OBJC_CLASS___UILabel_1126aec30);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102b84e50(0,0x112d7b960,&PTR__OBJC_CLASS___UILabel_1126aec30);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b84b9c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102b84ba4; end: 102b84ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b84ba4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar2 = _DAT_112efa650;
  func_0x000102b81af4();
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  lVar2 = _DAT_112efa658;
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c52610(puVar4);
  func_0x000107c59594(0x4020000000000000,puVar4);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c55b40(puVar4);
  func_0x000107c55b3c(0,0x4020000000000000,0,0x4020000000000000,puVar4);
  puVar5 = puVar4;
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112efa660;
  func_0x000102b81bac();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined **)(unaff_x20 + _DAT_112efa668) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efa670);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efa678);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112efa680) = 0;
  lVar2 = unaff_x20 + _DAT_112efa6a0;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined1 *)(unaff_x20 + _DAT_112efa6b8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "SpotlightQuickComment/SpotlightQuickCommentViewController.swift",0x3f,2,0x6c,
                      0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102b84d14);
  (*pcVar3)();
}



/* Entry: 102b84de0; end: 102b84e1b;  */

void FUN_102b84de0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  double dVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  dVar2 = *(double *)(unaff_x20 + 0x18);
  if (dVar2 == 1.0) {
    uStack_38 = 0x3ff0000000000000;
    uStack_40 = 0;
    uStack_48 = 0;
    uStack_50 = 0x3ff0000000000000;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x000107c6088c(&uStack_50,dVar2,dVar2,uVar1);
  }
  func_0x000107c5a03c(uVar1,param_2,&uStack_50);
  return;
}



/* Entry: 102b84e1c; end: 102b84e4f;  */

void FUN_102b84e1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = 0x3ff0000000000000;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  uStack_18 = 0;
  func_0x000107c5a03c(*(undefined8 *)(unaff_x20 + 0x10),param_2,&uStack_40);
  return;
}



/* Entry: 102b84e50; end: 102b84eb3;  */

void FUN_102b84e50(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b84eb4; end: 102b84ef3;  */

void FUN_102b84eb4(long param_1,long param_2)

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



/* Entry: 102b84ef4; end: 102b84f3b; -[_TtC33SpotlightCommentsStickerPickerAPI35SpotlightCommentsStickerPickerScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b84ef4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efa6f8;
  func_0x000107c61428(param_1 + _DAT_112efa6f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b84f3c; end: 102b84f93; -[_TtC33SpotlightCommentsStickerPickerAPI35SpotlightCommentsStickerPickerScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b84f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efa6f8;
  func_0x000107c61428(param_1 + _DAT_112efa6f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b84f94; end: 102b85037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b84f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112efa6f8,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efa700);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112efa6f0) = param_1;
  func_0x000107c61428(puVar1,auStack_58,1,0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b85038; end: 102b850ff; -[_TtC33SpotlightCommentsStickerPickerAPI35SpotlightCommentsStickerPickerScope initWithUiContainer:creatorBitmojiAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b85038(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61614(param_1 + _DAT_112efa6f8,0);
  plVar1 = (long *)(param_1 + _DAT_112efa700);
  *plVar1 = 0;
  plVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112efa6f0) = param_3;
  func_0x000107c61428(plVar1,auStack_58,1,0);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar2);
  return;
}


