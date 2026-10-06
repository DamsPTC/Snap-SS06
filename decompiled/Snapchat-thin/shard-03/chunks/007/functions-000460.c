/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b882f4; end: 102b8833b; -[SCSCSpotlightQuickShareScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b882f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efaaa8;
  func_0x000107c61428(param_1 + _DAT_112efaaa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b8833c; end: 102b88393; -[SCSCSpotlightQuickShareScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8833c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efaaa8;
  func_0x000107c61428(param_1 + _DAT_112efaaa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b88394; end: 102b8846b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b88394(undefined8 param_1,long param_2)

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
    FUN_102b8756c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efa9c0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8846c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efa9c8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efaab0);
    *(long **)(unaff_x20 + _DAT_112efaab0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102b8846c; end: 102b88493; -[SCSCSpotlightQuickShareScopedServicesSaberEntryPoint begin] */

void FUN_102b8846c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b88394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b88494; end: 102b8860b;  */

/* WARNING: Possible PIC construction at 0x000102b884fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b88594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b88500) */
/* WARNING: Removing unreachable block (ram,0x000102b88598) */
/* WARNING: Removing unreachable block (ram,0x000102b885b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b88494(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efaab0);
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



/* Entry: 102b8860c; end: 102b88613;  */

void FUN_102b8860c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b88614; end: 102b88647; -[SCSCSpotlightQuickShareScopedServicesSaberEntryPoint end] */

void FUN_102b88614(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b88494();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b88648; end: 102b88767;  */

void FUN_102b88648(long param_1,long param_2,long param_3)

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
                        "SpotlightQuickShareScopeGraphBridge/SCSCSpotlightQuickShareScopedServicesSaberEntryPoint.swift"
                        ,0x5e,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b88768);
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



/* Entry: 102b88768; end: 102b88813; -[SCSCSpotlightQuickShareScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102b88768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b88648(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b88814; end: 102b88873; -[SCSCSpotlightQuickShareScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b88814(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efaaa8,0);
  *(undefined8 *)(param_1 + _DAT_112efaab0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b88874; end: 102b888a7;  */

void FUN_102b88874(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b888a8; end: 102b888df; -[SCSCSpotlightQuickShareScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b888a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efaaa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efaab0));
  return;
}



/* Entry: 102b888e0; end: 102b888ff;  */

void FUN_102b888e0(void)

{
  func_0x000107c61168(&PTR_PTR_112891218);
  return;
}



/* Entry: 102b88900; end: 102b892a7;  */

undefined * FUN_102b88900(undefined *param_1)

{
  long lVar1;
  ulong *puVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_68;
  
  puVar12 = param_1;
  func_0x000107c4e04c();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar14 = puVar12;
  func_0x000107c3e15c();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  puVar12 = PTR___sypN_11034f1a8 + 8;
  puVar6 = puVar14;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar14);
  puVar14 = puVar6;
  FUN_102b8cb38();
  func_0x000107c6142c(puVar6);
  if (puVar14 == (undefined *)0x0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102b95864();
  puVar18 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
  if ((ulong)puVar14 >> 0x3e == 0) {
    puVar7 = *(undefined **)(puVar18 + 0x10);
  }
  else {
    puVar7 = puVar14;
    if (-1 < (long)puVar14) {
      puVar7 = puVar18;
    }
    func_0x000107c60480();
  }
  if (puVar7 != (undefined *)0x0) {
    lVar21 = 4;
    do {
      uVar17 = lVar21 - 4;
      if (((ulong)puVar14 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar18 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b89220);
          (*pcVar4)();
        }
        uVar19 = *(ulong *)(puVar14 + lVar21 * 8);
        func_0x000107c61174();
        puVar22 = puVar12;
      }
      else {
        uVar19 = uVar17;
        puVar22 = puVar14;
        FUN_102b8c8f4();
      }
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b89210);
        (*pcVar4)();
      }
      puVar20 = (undefined *)(lVar21 + -3);
      uVar17 = uVar19;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar15 = uVar17;
      func_0x000107c5faec();
      func_0x000107c61170(uVar17);
      func_0x000107c61174();
      puVar13 = puVar6;
      func_0x000107c61558();
      uVar17 = uVar15;
      puVar10 = puVar22;
      puStack_b0 = puVar6;
      func_0x000100029284();
      uVar16 = (ulong)~(uint)puVar10 & 1;
      lVar1 = *(long *)(puVar6 + 0x10) + uVar16;
      if (SCARRY8(*(long *)(puVar6 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b89214);
        (*pcVar4)();
      }
      if (*(long *)(puVar6 + 0x18) < lVar1) {
        FUN_102b95120(lVar1,puVar13);
        uVar17 = uVar15;
        puVar12 = puVar22;
        func_0x000100029284();
        if (((uint)puVar10 & 1) != ((uint)puVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b892a8);
          (*pcVar4)();
        }
LAB_102b88aec:
        if (((ulong)puVar10 & 1) == 0) goto LAB_102b88af4;
LAB_102b889c4:
        puVar6 = puStack_b0;
        uVar8 = *(undefined8 *)(*(long *)(puStack_b0 + 0x38) + uVar17 * 8);
        *(ulong *)(*(long *)(puStack_b0 + 0x38) + uVar17 * 8) = uVar19;
        func_0x000107c61170(uVar19);
        func_0x000107c6142c(puVar22);
        func_0x000107c61170(uVar8);
      }
      else {
        puVar12 = puVar10;
        if (((ulong)puVar13 & 1) != 0) goto LAB_102b88aec;
        func_0x000102b94fb0();
        if (((ulong)puVar10 & 1) != 0) goto LAB_102b889c4;
LAB_102b88af4:
        puVar6 = puStack_b0;
        *(ulong *)(puStack_b0 + (uVar17 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_b0 + (uVar17 >> 6) * 8 + 0x40) | 1L << (uVar17 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puStack_b0 + 0x30) + uVar17 * 0x10);
        *puVar2 = uVar15;
        puVar2[1] = (ulong)puVar22;
        *(ulong *)(*(long *)(puStack_b0 + 0x38) + uVar17 * 8) = uVar19;
        func_0x000107c61170(uVar19);
        if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b8921c);
          (*pcVar4)();
        }
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      }
      lVar21 = lVar21 + 1;
    } while (puVar20 != puVar7);
  }
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c4aa44();
  func_0x000107c61180();
  puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar13 = param_1;
    func_0x000107c3e15c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar12 = PTR___sypN_11034f1a8 + 8;
    puVar10 = puVar13;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar13);
    puVar13 = puVar10;
    func_0x000101158fcc();
    func_0x000107c6142c(puVar10);
    if (puVar13 != (undefined *)0x0) {
      puVar22 = puVar13;
    }
  }
  uVar17 = *(ulong *)(puVar22 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar17 != 0) {
    uVar19 = 0;
    do {
      if (*(ulong *)(puVar22 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b8920c);
        (*pcVar4)();
      }
      if (*(long *)(puVar6 + 0x10) != 0) {
        puVar10 = *(undefined **)(puVar22 + uVar19 * 0x10 + 0x20);
        puVar20 = *(undefined **)((long)(puVar22 + uVar19 * 0x10 + 0x20) + 8);
        func_0x000107c61434(puVar20);
        func_0x000107c61434(puVar6);
        puVar23 = puVar10;
        puVar12 = puVar20;
        func_0x000100029284();
        if (((ulong)puVar12 & 1) == 0) {
          func_0x000107c6142c(puVar6);
          func_0x000107c6142c(puVar20);
        }
        else {
          uVar8 = *(undefined8 *)(*(long *)(puVar6 + 0x38) + (long)puVar23 * 8);
          func_0x000107c61174();
          func_0x000107c6142c(puVar6);
          puVar23 = puStack_68;
          if (*(long *)(puStack_68 + 0x10) != 0) {
            func_0x000107c6068c(&puStack_b0,*(undefined8 *)(puStack_68 + 0x28));
            ppuVar9 = &puStack_b0;
            func_0x000107c5fb58(ppuVar9,puVar10,puVar20);
            func_0x000107c606a8();
            uVar15 = -1L << ((ulong)(byte)puVar23[0x20] & 0x3f);
            uVar16 = (ulong)ppuVar9 & (uVar15 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar23 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
              do {
                plVar3 = (long *)(*(long *)(puVar23 + 0x30) + uVar16 * 0x10);
                puVar24 = (undefined *)*plVar3;
                puVar12 = (undefined *)plVar3[1];
                if ((puVar24 == puVar10 && puVar12 == puVar20) ||
                   (func_0x000107c605b8(puVar24,puVar12,puVar10,puVar20,0),
                   ((ulong)puVar24 & 1) != 0)) {
                  func_0x000107c61170(uVar8);
                  func_0x000107c6142c(puVar20);
                  goto LAB_102b88c1c;
                }
                uVar16 = uVar16 + 1 & ~uVar15;
              } while ((*(ulong *)(puVar23 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0)
              ;
            }
          }
          func_0x000107c61174();
          puVar12 = puVar13;
          func_0x000107c61550();
          if ((((int)puVar12 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar13 >> 0x3e == 0) {
              puVar12 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar13) {
                puVar12 = puVar13;
              }
              func_0x000107c60480(puVar12);
            }
            puVar23 = (undefined *)0x0;
            FUN_102b94b04(0,puVar12 + 1,1,puVar13);
            puVar13 = puVar23;
          }
          uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
          uVar15 = *(ulong *)(uVar16 + 0x10);
          puVar23 = puVar13;
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar15) {
            puVar23 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
            FUN_102b94b04(puVar23,uVar15 + 1,1,puVar13);
            uVar16 = (ulong)puVar23 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar16 + 0x10) = uVar15 + 1;
          *(undefined8 *)(uVar16 + uVar15 * 8 + 0x20) = uVar8;
          func_0x000100403b00(&puStack_b0,puVar10,puVar20);
          func_0x000107c61170(uVar8);
          func_0x000107c6142c(uStack_a8);
          puVar12 = puVar10;
          puVar13 = puVar23;
        }
      }
LAB_102b88c1c:
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar17);
  }
  func_0x000107c6142c(puVar22);
  if (puVar7 != (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    do {
      if (((ulong)puVar14 & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar18 + 0x10) <= puVar22) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b89224);
          (*pcVar4)();
        }
        puVar10 = *(undefined **)(puVar14 + (long)puVar22 * 8 + 0x20);
        func_0x000107c61174();
        puVar20 = puVar12;
      }
      else {
        puVar10 = puVar22;
        puVar20 = puVar14;
        FUN_102b8c8f4();
      }
      puVar23 = puStack_68;
      bVar5 = SCARRY8((long)puVar22,1);
      puVar22 = puVar22 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b89218);
        (*pcVar4)();
      }
      puVar24 = puVar10;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar11 = puVar24;
      func_0x000107c5faec();
      puVar12 = puVar20;
      func_0x000107c61170(puVar24);
      if (*(long *)(puVar23 + 0x10) != 0) {
        func_0x000107c6068c(&puStack_b0,*(undefined8 *)(puVar23 + 0x28));
        ppuVar9 = &puStack_b0;
        puVar12 = puVar11;
        func_0x000107c5fb58(ppuVar9,puVar11,puVar20);
        func_0x000107c606a8();
        uVar17 = -1L << ((ulong)(byte)puVar23[0x20] & 0x3f);
        uVar19 = (ulong)ppuVar9 & (uVar17 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar23 + (uVar19 >> 6) * 8 + 0x38) >> (uVar19 & 0x3f) & 1) != 0) {
          do {
            plVar3 = (long *)(*(long *)(puVar23 + 0x30) + uVar19 * 0x10);
            puVar24 = (undefined *)*plVar3;
            puVar12 = (undefined *)plVar3[1];
            if ((puVar24 == puVar11 && puVar12 == puVar20) ||
               (func_0x000107c605b8(puVar24,puVar12,puVar11,puVar20,0), ((ulong)puVar24 & 1) != 0))
            {
              func_0x000107c6142c(puVar20);
              func_0x000107c61170(puVar10);
              goto LAB_102b88e50;
            }
            uVar19 = uVar19 + 1 & ~uVar17;
          } while ((*(ulong *)(puVar23 + (uVar19 >> 6) * 8 + 0x38) >> (uVar19 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c(puVar20);
      func_0x000107c61174();
      puVar20 = puVar13;
      func_0x000107c61550();
      if ((((int)puVar20 == 0) || ((long)puVar13 < 0)) ||
         (puVar20 = puVar12, puVar12 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar20 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar20 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar20 = puVar13;
          }
          func_0x000107c60480(puVar20);
        }
        puVar20 = puVar20 + 1;
        puVar12 = (undefined *)0x0;
        FUN_102b94b04(0,puVar20,1,puVar13);
      }
      uVar19 = (ulong)puVar12 & 0xffffffffffffff8;
      uVar17 = *(ulong *)(uVar19 + 0x10);
      puVar23 = (undefined *)(uVar17 + 1);
      puVar13 = puVar12;
      if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar17) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
        puVar20 = puVar23;
        FUN_102b94b04(puVar13,puVar23,1,puVar12);
        uVar19 = (ulong)puVar13 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar19 + 0x10) = puVar23;
      *(undefined **)(uVar19 + uVar17 * 8 + 0x20) = puVar10;
      puVar23 = puVar10;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar12 = puVar23;
      func_0x000107c5faec();
      func_0x000107c61170(puVar23);
      func_0x000100403b00(&puStack_b0,puVar12,puVar20);
      func_0x000107c61170(puVar10);
      func_0x000107c6142c(uStack_a8);
LAB_102b88e50:
    } while (puVar22 != puVar7);
  }
  func_0x000107c6142c(puVar14);
  if ((ulong)puVar13 >> 0x3e == 0) {
    puVar12 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar13) {
      puVar12 = puVar13;
    }
    func_0x000107c60480();
  }
  if (puVar12 == (undefined *)0x0) {
    func_0x000107c6142c(puVar13);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar14 = (undefined *)((ulong)puVar12 & ((long)puVar12 >> 0x3f ^ 0xffffffffffffffffU));
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001020b1288(0,puVar14,0);
    if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102b89298);
      (*pcVar4)();
    }
    puVar18 = (undefined *)0x0;
    do {
      puVar7 = puStack_b0;
      if (((ulong)puVar13 & 0xc000000000000001) == 0) {
        puVar22 = *(undefined **)(puVar13 + (long)puVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar22 = puVar18;
        puVar14 = puVar13;
        FUN_102b8c8f4();
      }
      puVar10 = puVar22;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar20 = puVar14;
      if (puVar10 == (undefined *)0x0) {
        func_0x000107c5faec();
        puVar20 = puVar14;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar14);
      }
      puVar23 = puVar22;
      func_0x000107c3e978();
      func_0x000107c61180();
      if (puVar23 == (undefined *)0x0) {
        puVar24 = (undefined *)0x0;
        puVar23 = (undefined *)0x0;
        puVar14 = puVar20;
      }
      else {
        puVar24 = puVar23;
        func_0x000107c5faec();
        puVar14 = puVar20;
        func_0x000107c61170(puVar23);
        puVar23 = puVar20;
      }
      puVar20 = puVar22;
      func_0x000107c3fdb8(puVar22);
      func_0x000107c61180();
      if (puVar23 == (undefined *)0x0) {
        puVar24 = (undefined *)0x0;
      }
      else {
        puVar14 = puVar23;
        func_0x000107c5fadc(puVar24);
        func_0x000107c6142c(puVar23);
      }
      puVar23 = PTR_PTR_1126b5978;
      func_0x000107c610f8();
      func_0x000107c491dc();
      func_0x000107c61170(puVar22);
      func_0x000107c61170(puVar20);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar24);
      uVar17 = *(ulong *)(puVar7 + 0x10);
      puVar22 = (undefined *)(uVar17 + 1);
      puStack_b0 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar17) {
        puVar14 = puVar22;
        func_0x0001020b1288(1 < *(ulong *)(puVar7 + 0x18),puVar22,1);
      }
      puVar7 = puStack_b0;
      puVar18 = puVar18 + 1;
      *(undefined **)(puStack_b0 + 0x10) = puVar22;
      *(undefined **)(puStack_b0 + uVar17 * 8 + 0x20) = puVar23;
    } while (puVar12 != puVar18);
    func_0x000107c6142c(puVar13);
  }
  puVar12 = puStack_68;
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(puVar12);
  return puVar7;
}



/* Entry: 102b892a8; end: 102b892b7;  */

void FUN_102b892a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102b892b8; end: 102b892e3;  */

undefined1  [16] FUN_102b892b8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102b892e4; end: 102b892ef;  */

void FUN_102b892e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE13failureReasonSSSgvg_1103506b8)();
  return;
}



/* Entry: 102b892f0; end: 102b89d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b892f0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8,code *param_9,
                  undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  puVar1 = (undefined8 *)(param_3 + 0x10);
  func_0x000107c61648();
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  if (param_1 == 0) {
    puVar6 = puVar1;
    func_0x000102b8a00c();
    puVar10 = &UNK_1105a6858;
    func_0x000107c613f8(&UNK_1105a6858,puVar6,0,0);
    *puVar6 = 0xd00000000000001a;
    puVar6[1] = 0x800000010f0f83b0;
    (*param_9)();
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + _DAT_11307fc80);
    uVar2 = 0;
    func_0x0001044c309c(0);
    func_0x000107c61434(uVar12);
    func_0x000107c61174();
    uVar13 = uVar12;
    func_0x000107c5fc48(uVar12,uVar2);
    func_0x000107c6142c(uVar12);
    uVar2 = uVar13;
    func_0x0001086063d8(uVar13,1);
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    puVar10 = PTR_PTR_1126b1a40;
    func_0x000107c61168(PTR_PTR_1126b1a40);
    func_0x000107c4e85c();
    func_0x000107c61180();
    puVar3 = puVar10;
    func_0x000107c5e500();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    puVar4 = puVar3;
    func_0x000107c3ecc8(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if ((param_4 == 0) || (lVar5 = param_4, func_0x00010853b70c(), (int)lVar5 == 0)) {
      if ((param_7 & 1) == 0) {
        func_0x000102b898ac(param_1,param_4,puVar4,param_5,param_6,param_9,param_10);
        func_0x000107c61574(puVar1);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar2);
        return;
      }
      puVar6 = (undefined8 *)puVar1[3];
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar6 != (undefined8 *)0x0) {
        func_0x000103b5fb18(0);
        func_0x000107c610f8();
        func_0x000107c61434(param_6);
        func_0x000103b5f574(param_5,param_6,0,0,0,0,0,0,0);
        uVar13 = *(undefined8 *)(param_1 + _DAT_11307fc78);
        func_0x000107c61174();
        func_0x000107c5fc48(uVar13,PTR___sSSN_11034da80);
        puVar10 = &UNK_1105a66a8;
        func_0x000107c613fc(&UNK_1105a66a8,0x20,7);
        *(code **)(puVar10 + 0x10) = param_9;
        *(undefined8 *)(puVar10 + 0x18) = param_10;
        pcStack_88 = FUN_102b8a04c;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_101cbfc4c;
        puStack_90 = &UNK_1105a66c0;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar10;
        func_0x000107c60bc4(ppuVar9);
        puVar10 = puStack_80;
        func_0x000107c6157c(param_10);
        func_0x000107c61574(puVar10);
        func_0x000107c51e20(puVar6);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar4);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61574(puVar1);
        func_0x000107c615e8(puVar6);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_5);
        func_0x000107c61170(uVar13);
        return;
      }
      pcVar11 = "sortedConversations is nil";
      func_0x000102b8a00c();
      puVar10 = &UNK_1105a6858;
      func_0x000107c613f8(&UNK_1105a6858,puVar6,0,0);
      uVar13 = 0xd000000000000022;
    }
    else {
      puVar6 = (undefined8 *)puVar1[2];
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar6 != (undefined8 *)0x0) {
        puVar7 = puVar6;
        func_0x000103b694f0();
        uVar13 = *puVar7;
        uVar12 = puVar7[1];
        func_0x000103b6a284(0);
        func_0x000107c610f8();
        func_0x000107c61434(uVar12);
        func_0x000107c61434(param_6);
        func_0x000103b69fa8(param_5,param_6,uVar13,uVar12,0,0);
        uVar13 = *(undefined8 *)(param_1 + _DAT_11307fc78);
        func_0x000107c61174();
        func_0x000107c5fc48(uVar13,PTR___sSSN_11034da80);
        pcVar11 = 
        "shareSpotlight(sortedConversations:platformAnalytics:compositeStoryId:completion:)";
        func_0x0001000c10c0(
                           "shareSpotlight(sortedConversations:platformAnalytics:compositeStoryId:completion:)"
                           );
        func_0x000107c61180();
        pcVar8 = pcVar11;
        func_0x000107c4f7c0();
        func_0x000107c61180();
        func_0x000107c615e8(pcVar11);
        puVar10 = &UNK_1105a66f8;
        func_0x000107c613fc(&UNK_1105a66f8,0x20,7);
        *(code **)(puVar10 + 0x10) = param_9;
        *(undefined8 *)(puVar10 + 0x18) = param_10;
        pcStack_88 = (code *)0x102b8a070;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_101cbfc4c;
        puStack_90 = &UNK_1105a6710;
        ppuVar9 = &puStack_a8;
        puStack_80 = puVar10;
        func_0x000107c60bc4(ppuVar9);
        puVar10 = puStack_80;
        func_0x000107c6157c(param_10);
        func_0x000107c61574(puVar10);
        func_0x000107c51e54(puVar6);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar4);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61574(puVar1);
        func_0x000107c615e8(puVar6);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_5);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(pcVar8);
        return;
      }
      pcVar11 = "Story Share Sender";
      func_0x000102b8a00c();
      puVar10 = &UNK_1105a6858;
      func_0x000107c613f8(&UNK_1105a6858,puVar6,0,0);
      uVar13 = 0xd00000000000001e;
    }
    *puVar6 = uVar13;
    puVar6[1] = (ulong)pcVar11 | 0x8000000000000000;
    (*param_9)();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c614ac(puVar10);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102b89d80; end: 102b89faf;  */

void FUN_102b89d80(undefined8 *param_1,code *param_2)

{
  undefined *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    func_0x000102b8a00c();
    puVar1 = &UNK_1105a6858;
    func_0x000107c613f8(&UNK_1105a6858,param_1,0,0);
    *param_1 = 0xd000000000000018;
    param_1[1] = 0x800000010f0f8480;
    (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
    return;
  }
  (*param_2)(0,0);
  return;
}



/* Entry: 102b89fb0; end: 102b8a04b;  */

void FUN_102b89fb0(void)

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



/* Entry: 102b8a04c; end: 102b8a08f;  */

void FUN_102b8a04c(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 != (undefined8 *)0x0) {
    func_0x000102b8a00c();
    puVar2 = &UNK_1105a6858;
    func_0x000107c613f8(&UNK_1105a6858,param_1,0,0);
    *param_1 = 0xd00000000000001d;
    param_1[1] = 0x800000010f0f84a0;
    (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
    return;
  }
  (*pcVar1)(0,0,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102b8a090; end: 102b8a0ff;  */

undefined8 * FUN_102b8a090(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102b8a100; end: 102b8a1db;  */

int FUN_102b8a100(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102b8a1dc; end: 102b8a287;  */

void FUN_102b8a1dc(void)

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



/* Entry: 102b8a288; end: 102b8a28b;  */

void FUN_102b8a288(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efaba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db2a9a0;
  func_0x000107c61520(&UNK_10db2a9a0,&UNK_1105a6940);
  puRam0000000112efaba0 = puVar1;
  return;
}



/* Entry: 102b8a28c; end: 102b8a2cb;  */

void FUN_102b8a28c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112efaba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db2a9a0;
  func_0x000107c61520(&UNK_10db2a9a0,&UNK_1105a6940);
  puRam0000000112efaba0 = puVar1;
  return;
}



/* Entry: 102b8a2cc; end: 102b8a42f;  */

int FUN_102b8a2cc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102b8a348;
        goto LAB_102b8a32c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102b8a32c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102b8a348:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102b8a430; end: 102b8a55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b8a430(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112efaba8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112efaba8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x000102b8a494();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102b8a560; end: 102b8a823;  */

/* WARNING: Possible PIC construction at 0x000102b8a590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8a5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8a638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8a658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8a6a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8a6c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8a718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8a738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8a79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8a7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b8a7a0) */
/* WARNING: Removing unreachable block (ram,0x000102b8a73c) */
/* WARNING: Removing unreachable block (ram,0x000102b8a820) */
/* WARNING: Removing unreachable block (ram,0x000102b8a770) */
/* WARNING: Removing unreachable block (ram,0x000102b8a71c) */
/* WARNING: Removing unreachable block (ram,0x000102b8a6cc) */
/* WARNING: Removing unreachable block (ram,0x000102b8a81c) */
/* WARNING: Removing unreachable block (ram,0x000102b8a700) */
/* WARNING: Removing unreachable block (ram,0x000102b8a6ac) */
/* WARNING: Removing unreachable block (ram,0x000102b8a65c) */
/* WARNING: Removing unreachable block (ram,0x000102b8a818) */
/* WARNING: Removing unreachable block (ram,0x000102b8a690) */
/* WARNING: Removing unreachable block (ram,0x000102b8a63c) */
/* WARNING: Removing unreachable block (ram,0x000102b8a5c8) */
/* WARNING: Removing unreachable block (ram,0x000102b8a814) */
/* WARNING: Removing unreachable block (ram,0x000102b8a620) */
/* WARNING: Removing unreachable block (ram,0x000102b8a594) */
/* WARNING: Removing unreachable block (ram,0x000102b8a598) */
/* WARNING: Removing unreachable block (ram,0x000102b8a810) */
/* WARNING: Removing unreachable block (ram,0x000102b8a5ac) */
/* WARNING: Removing unreachable block (ram,0x000102b8a7c0) */
/* WARNING: Removing unreachable block (ram,0x000102b8a7f8) */

void FUN_102b8a560(undefined8 param_1)

{
  FUN_102b8a430();
  func_0x000107c5c42c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b8a824; end: 102b8a87f; -[_TtC19SpotlightQuickShare43SpotlightQuickShareBackgroundViewController viewDidLoad] */

void FUN_102b8a824(undefined8 param_1)

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
  FUN_102b8a560();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b8a880; end: 102b8ad23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8a880(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

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
  
  FUN_102b8ad24(param_2);
  lVar1 = _DAT_112efabb0;
  lVar3 = unaff_x20 + _DAT_112efabb0;
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8ad24);
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
LAB_102b8abe0:
      uVar10 = 0;
      uVar6 = uVar11;
      goto LAB_102b8abec;
    }
  }
  else if (param_4 == 2) goto LAB_102b8abe0;
  uVar6 = 0;
  uVar10 = uVar11;
LAB_102b8abec:
  func_0x000107c60890(&puStack_a0,uVar6,uVar10);
  FUN_102b8a430();
  func_0x000107c550d8();
  func_0x000107c61170(lVar7);
  func_0x000107c526c0(0,*(undefined8 *)(unaff_x20 + _DAT_112efaba8));
  func_0x000107c5a03c(param_1);
  puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = &UNK_1105a6a00;
  func_0x000107c613fc(&UNK_1105a6a00,0x20,7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  uStack_80 = 0x102b8b6bc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105a6a18;
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



/* Entry: 102b8ad24; end: 102b8b08f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8ad24(long param_1)

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
  
  lVar1 = _DAT_112efabb8;
  if (*(char *)(unaff_x20 + _DAT_112efabb8) == '\x01') {
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8b090);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8b078);
    (*pcVar2)();
  }
  func_0x000107c5a050();
  func_0x000107c61170(lVar3);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8b07c);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8b080);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8b084);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8b088);
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
    FUN_102b8a560();
    FUN_102b8a430();
    func_0x000107c526c0(0);
    func_0x000107c61170(lVar4);
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112efaba8));
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8b08c);
  (*pcVar2)();
}



/* Entry: 102b8b090; end: 102b8b0f7;  */

void FUN_102b8b090(undefined8 param_1,undefined8 param_2)

{
  FUN_102b8a430();
  func_0x000107c526c0(0x3fe0000000000000);
  func_0x000107c61170(param_1);
  func_0x000107c526c0(0x3ff0000000000000,param_2);
  func_0x000107c5a03c(param_2);
  return;
}



/* Entry: 102b8b0f8; end: 102b8b287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8b0f8(void)

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
  
  lVar6 = _DAT_112efabb0;
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  lVar2 = unaff_x20 + _DAT_112efabb0;
  func_0x000107c61618();
  func_0x000107c61604(unaff_x20 + lVar6,0);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar4 = &UNK_1105a6960;
  func_0x000107c613fc(&UNK_1105a6960,0x20,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(long *)(puVar4 + 0x18) = lVar2;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x102b8b658;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105a6978;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174();
  lVar6 = lVar2;
  func_0x000107c61174(lVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1105a69b0;
  func_0x000107c613fc(&UNK_1105a69b0,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar2;
  *(long *)(puVar4 + 0x18) = unaff_x20;
  uStack_70 = 0x102b8b6b4;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_1105a69c8;
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



/* Entry: 102b8b288; end: 102b8b34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8b288(undefined8 param_1,undefined8 param_2,long param_3)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b8b34c);
    (*pcVar1)();
  }
  func_0x000107c4ff34();
  func_0x000107c61170(lVar2);
  lVar2 = param_3;
  func_0x000107c4ff2c(param_3);
  *(undefined1 *)(param_3 + _DAT_112efabb8) = 0;
  FUN_102b8a430();
  func_0x000107c550d8();
  func_0x000107c61170(lVar2);
  param_3 = param_3 + _DAT_112efabc0;
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



/* Entry: 102b8b34c; end: 102b8b373; -[_TtC19SpotlightQuickShare43SpotlightQuickShareBackgroundViewController didTapBackground] */

void FUN_102b8b34c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b8b0f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b8b374; end: 102b8b457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b8b374(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112efaba8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112efabb0,0);
  *(undefined1 *)(unaff_x20 + _DAT_112efabb8) = 0;
  lVar1 = unaff_x20 + _DAT_112efabc0;
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



/* Entry: 102b8b458; end: 102b8b56f; -[_TtC19SpotlightQuickShare43SpotlightQuickShareBackgroundViewController initWithNibName:bundle:] */

void FUN_102b8b458(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_102b8b374(param_3,param_2,param_4);
  return;
}



/* Entry: 102b8b570; end: 102b8b597; -[_TtC19SpotlightQuickShare43SpotlightQuickShareBackgroundViewController initWithCoder:] */

void FUN_102b8b570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000102b8b4b8();
  return;
}



/* Entry: 102b8b598; end: 102b8b5cb;  */

void FUN_102b8b598(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b8b5cc; end: 102b8b613; -[_TtC19SpotlightQuickShare43SpotlightQuickShareBackgroundViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b8b5cc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112efaba8));
  func_0x000107c61610(param_1 + _DAT_112efabb0);
  param_1 = param_1 + _DAT_112efabc0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102b8b614; end: 102b8b633;  */

void FUN_102b8b614(void)

{
  func_0x000107c61168(&PTR_PTR_1128912d8);
  return;
}



/* Entry: 102b8b634; end: 102b8b697;  */

undefined8 FUN_102b8b634(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102b8b698; end: 102b8b6d3;  */

void FUN_102b8b698(long param_1,long param_2)

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



/* Entry: 102b8b6d4; end: 102b8c68f;  */

long FUN_102b8b6d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x88,0);
  func_0x000107c61614(unaff_x20 + 0x90,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_15;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_14;
  return unaff_x20;
}



/* Entry: 102b8c690; end: 102b8c74b;  */

void FUN_102b8c690(void)

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
  func_0x000107c61610(unaff_x20 + 0x88);
  func_0x000107c61610(unaff_x20 + 0x90);
  return;
}



/* Entry: 102b8c74c; end: 102b8c76b;  */

void FUN_102b8c74c(void)

{
  func_0x000102b8b858();
  return;
}



/* Entry: 102b8c76c; end: 102b8c777;  */

undefined8 FUN_102b8c76c(void)

{
  return 0;
}



/* Entry: 102b8c778; end: 102b8c83f;  */

/* WARNING: Possible PIC construction at 0x000102b8c7d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8c80c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b8c7ec) */
/* WARNING: Removing unreachable block (ram,0x000102b8c7d8) */
/* WARNING: Removing unreachable block (ram,0x000102b8c83c) */
/* WARNING: Removing unreachable block (ram,0x000102b8c7dc) */
/* WARNING: Removing unreachable block (ram,0x000102b8c810) */

void FUN_102b8c778(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x90;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20 + 0x88;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61174(lVar1);
    func_0x000107c5e37c();
    func_0x000107c5de64(lVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102b8c840; end: 102b8c843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8c840(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61604(unaff_x20 + 0x88,0);
  lVar1 = _DAT_11306ee18;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_11306ee18,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c41acc();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102b8c844; end: 102b8c8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8c844(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61604(unaff_x20 + 0x88,0);
  lVar1 = _DAT_11306ee18;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + _DAT_11306ee18,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c41acc();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102b8c8f4; end: 102b8c91b;  */

ulong FUN_102b8c8f4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8ca00);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8ca04);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126dc748;
    func_0x000107c61168(PTR_PTR_1126dc748);
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
    puVar4 = PTR_PTR_1126dc748;
    func_0x000107c61168(PTR_PTR_1126dc748);
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
  FUN_102b8caf8(0,0x112efad10,&PTR_PTR_1126dc748);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8cad8);
  (*pcVar2)();
}



/* Entry: 102b8c91c; end: 102b8cad7;  */

ulong FUN_102b8c91c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8ca00);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8ca04);
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
  FUN_102b8caf8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8cad8);
  (*pcVar2)();
}



/* Entry: 102b8cad8; end: 102b8caf7;  */

void FUN_102b8cad8(void)

{
  func_0x000107c61168(&PTR_PTR_112efac30);
  return;
}



/* Entry: 102b8caf8; end: 102b8cb37;  */

void FUN_102b8caf8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b8cb38; end: 102b8cc6b;  */

undefined * FUN_102b8cb38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102b953bc(0,lVar5,0);
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = puStack_68;
  while( true ) {
    if (lVar5 == 0) {
      return puVar1;
    }
    param_1 = param_1 + 0x20;
    puStack_68 = puVar1;
    func_0x0001000bb420(param_1,auStack_88);
    func_0x000100102924(auStack_88,auStack_a8);
    uVar3 = 0;
    FUN_102b97258(0,0x112efad10,&PTR_PTR_1126dc748);
    uVar4 = 0;
    func_0x000107c6147c(&uStack_b0,auStack_a8,puVar2 + 8,uVar3,6);
    uVar3 = uStack_b0;
    if ((uVar4 & 1) == 0) break;
    uVar4 = *(ulong *)(puVar1 + 0x10);
    puStack_68 = puVar1;
    if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
      FUN_102b953bc(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
    }
    *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
    *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar3;
    lVar5 = lVar5 + -1;
    puVar1 = puStack_68;
  }
  func_0x000107c61574(puVar1);
  return (undefined *)0x0;
}



/* Entry: 102b8cc6c; end: 102b8cd47;  */

undefined1  [16] FUN_102b8cc6c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (((uint)param_2 & 0xff) == 1) {
    uVar1 = param_1;
    func_0x000107c44520();
    func_0x000107c61180();
    uVar2 = param_2;
    if (uVar1 != 0) {
      uVar3 = uVar1;
      func_0x000107c5faec();
      uVar2 = param_2;
      func_0x000107c61170(uVar1);
      uVar1 = uVar3 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar1 = param_2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) goto LAB_102b8cd30;
      func_0x000107c6142c(param_2);
    }
    func_0x000107c5cab0();
    func_0x000107c61180();
    uVar1 = param_1;
    param_2 = uVar2;
joined_r0x000102b8cd08:
    if (uVar1 == 0) {
      uVar3 = 0;
      param_2 = 0;
      goto LAB_102b8cd30;
    }
  }
  else {
    uVar1 = param_1;
    func_0x000107c42120();
    func_0x000107c61180();
    if (uVar1 == 0) {
      func_0x000107c5db08();
      func_0x000107c61180();
      uVar1 = param_1;
      goto joined_r0x000102b8cd08;
    }
  }
  uVar3 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
LAB_102b8cd30:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 102b8cd48; end: 102b8d003;  */

undefined * FUN_102b8cd48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1,param_2,0);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x403c000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 102b8d004; end: 102b8d03b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102b8d004(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  
  lVar1 = _DAT_112efad68;
  puVar2 = &DAT_112efad68;
  uVar5 = (uint)*(byte *)(unaff_x20 + _DAT_112efad68);
  if (*(byte *)(unaff_x20 + _DAT_112efad68) != 2) goto LAB_102b8d0c4;
  (*(code *)&UNK_108f55408)();
  if (puVar2 == (undefined *)0x1) {
    uVar5 = 1;
  }
  else {
    if (puVar2 != (undefined *)0x2) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112efae10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        (*(code *)&UNK_103eeecd8)();
        lVar4 = lVar3;
        func_0x000107c3ebc0();
        uVar5 = (uint)lVar4;
        func_0x000107c615e8(lVar3);
        goto LAB_102b8d0c0;
      }
    }
    uVar5 = 0;
  }
LAB_102b8d0c0:
  *(char *)(unaff_x20 + lVar1) = (char)uVar5;
LAB_102b8d0c4:
  return uVar5 & 1;
}



/* Entry: 102b8d03c; end: 102b8d0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102b8d03c(long *param_1,code *param_2,code *param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar5 = *param_1;
  bVar1 = *(byte *)(unaff_x20 + lVar5);
  uVar4 = (uint)bVar1;
  if (bVar1 != 2) goto LAB_102b8d0c4;
  (*param_2)();
  if (param_1 == (long *)0x1) {
    uVar4 = 1;
  }
  else {
    if (param_1 != (long *)0x2) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112efae10);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        (*param_3)();
        lVar3 = lVar2;
        func_0x000107c3ebc0();
        uVar4 = (uint)lVar3;
        func_0x000107c615e8(lVar2);
        goto LAB_102b8d0c0;
      }
    }
    uVar4 = 0;
  }
LAB_102b8d0c0:
  *(char *)(unaff_x20 + lVar5) = (char)uVar4;
LAB_102b8d0c4:
  return uVar4 & 1;
}



/* Entry: 102b8d0d8; end: 102b8d0ff; -[_TtC19SpotlightQuickShare33SpotlightQuickShareViewController initWithCoder:] */

void FUN_102b8d0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b95964();
  return;
}



/* Entry: 102b8d100; end: 102b8d85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8d100(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x000102b93e5c();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLoad_112684cd8);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8d83c);
    (*pcVar2)();
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar4);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8d840);
    (*pcVar2)();
  }
  func_0x000107c5a378();
  func_0x000107c61170(lVar3);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8d844);
    (*pcVar2)();
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112efad20);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar3);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112efad28);
  func_0x000107c3d89c(uVar9);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112efad38);
  func_0x000107c3d89c(uVar9);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8d848);
    (*pcVar2)();
  }
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112efad40);
  func_0x000107c3d89c();
  func_0x000107c61170(lVar3);
  FUN_102b8d004();
  func_0x000107c550d8(uVar12);
  lVar3 = 0x112d360b8;
  FUN_102b949fc(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 0x1b;
  *(undefined8 *)(lVar3 + 0x10) = 0xd;
  uVar5 = uVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8d84c);
    (*pcVar2)();
  }
  lVar7 = lVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar13 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar3 + 0x20) = uVar13;
  uVar5 = uVar9;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8d850);
    (*pcVar2)();
  }
  lVar7 = lVar6;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar13 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar3 + 0x28) = uVar13;
  uVar5 = uVar9;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8d854);
    (*pcVar2)();
  }
  lVar7 = lVar6;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar13 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(lVar3 + 0x30) = uVar13;
  uVar5 = uVar9;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    uVar13 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar3 + 0x38) = uVar13;
    uVar5 = uVar9;
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar13 = uVar5;
    func_0x000107c40290(0x404c000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    *(undefined8 *)(lVar3 + 0x40) = uVar13;
    uVar5 = uVar12;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar13 = uVar9;
    func_0x000107c5cbe4(uVar9);
    func_0x000107c61180();
    uVar8 = uVar5;
    func_0x000107c40284(0xc020000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar13);
    *(undefined8 *)(lVar3 + 0x48) = uVar8;
    func_0x000107c3f75c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar7 = lVar6;
      func_0x000107c3f75c(lVar6);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      uVar5 = uVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar7);
      *(undefined8 *)(lVar3 + 0x50) = uVar5;
      uVar12 = uVar11;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar5 = uVar9;
      func_0x000107c5cbe4(uVar9);
      func_0x000107c61180();
      uVar13 = uVar12;
      func_0x000107c40284(0xc020000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar5);
      *(undefined8 *)(lVar3 + 0x58) = uVar13;
      func_0x000107c5e308();
      func_0x000107c61180();
      uVar13 = 0x4069000000000000;
      uVar12 = uVar11;
      func_0x000107c402b0();
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      *(undefined8 *)(lVar3 + 0x60) = uVar12;
      uVar12 = uVar10;
      func_0x000107c4acb0();
      func_0x000107c61180();
      uVar5 = uVar9;
      func_0x000107c4acb0(uVar9);
      func_0x000107c61180();
      uVar11 = uVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar5);
      *(undefined8 *)(lVar3 + 0x68) = uVar11;
      uVar12 = uVar10;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      uVar5 = uVar9;
      func_0x000107c5ce8c(uVar9);
      func_0x000107c61180();
      uVar11 = uVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar5);
      *(undefined8 *)(lVar3 + 0x70) = uVar11;
      uVar12 = uVar10;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uVar5 = uVar9;
      func_0x000107c5cbe4(uVar9);
      func_0x000107c61180();
      uVar11 = uVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar5);
      *(undefined8 *)(lVar3 + 0x78) = uVar11;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c3ec1c(uVar9);
      func_0x000107c61180();
      uVar12 = uVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar9);
      *(undefined8 *)(lVar3 + 0x80) = uVar12;
      uVar12 = 0;
      FUN_102b97258(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar6 = lVar3;
      func_0x000107c5fc48(lVar3,uVar12);
      func_0x000107c61574(lVar3);
      func_0x000107c3d048(puVar4);
      func_0x000107c61170(lVar6);
      FUN_102b8ec3c();
      FUN_102b8d884();
      if ((*(byte *)(unaff_x20 + _DAT_112efad68) & 1) != 0) {
        lVar3 = unaff_x20 + _DAT_112efae30;
        func_0x000107c61618();
        if (lVar3 != 0) {
          func_0x000107c3d8b4();
          func_0x000107c4b8b8(lVar3);
          func_0x000107c61170(lVar3);
          puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efad58);
          *puVar1 = uVar13;
          puVar1[1] = param_2;
          *(undefined1 *)(puVar1 + 2) = 0;
        }
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8d85c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8d858);
  (*pcVar2)();
}



/* Entry: 102b8d85c; end: 102b8d883; -[_TtC19SpotlightQuickShare33SpotlightQuickShareViewController viewDidLoad] */

void FUN_102b8d85c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b8d100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b8d884; end: 102b8d913;  */

/* WARNING: Possible PIC construction at 0x000102b8d8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8d8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8dba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b8d8f4) */
/* WARNING: Removing unreachable block (ram,0x000102b8d914) */
/* WARNING: Removing unreachable block (ram,0x000102b8dbf0) */
/* WARNING: Removing unreachable block (ram,0x000102b8d960) */
/* WARNING: Removing unreachable block (ram,0x000102b8d8d0) */
/* WARNING: Removing unreachable block (ram,0x000102b8d8d4) */
/* WARNING: Removing unreachable block (ram,0x000102b8d8f0) */
/* WARNING: Removing unreachable block (ram,0x000102b8dbac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8d884(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112efae10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(unaff_x20 + _DAT_112efadf0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar1 == 0) {
      ppuVar5 = &puStack_60;
      lVar3 = unaff_x20;
      func_0x000107c614f0(unaff_x20);
      uVar6 = 0;
      func_0x000107c60714();
      puVar4 = &UNK_1105a6b68;
      func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,unaff_x20);
      pcStack_40 = FUN_102b97138;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_1105a6fe0;
      puStack_38 = puVar4;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      func_0x000107c5fb28(lVar3,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x000100162d98(lVar3 + 0x20,ppuVar5);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61574(lVar3);
      return;
    }
    uVar2 = uVar1;
    func_0x000107c3e880();
    if (uVar2 == 0) {
      FUN_102b8e5a8(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    else {
      FUN_102b8e0b0(uVar2 < 4);
    }
  }
  else {
    func_0x000103eeeaa0();
    func_0x000107c3ebc0(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102b8d914; end: 102b8dc13;  */

/* WARNING: Possible PIC construction at 0x000102b8dba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b8dbac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8d914(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112efae08);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar3 == 0) {
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112efadf0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar3 == 0) {
      puVar10 = &stack0xffffffffffffffa0;
      lVar2 = unaff_x20;
      func_0x000107c614f0(unaff_x20);
      uVar11 = 0;
      func_0x000107c60714();
      puVar9 = &UNK_1105a6b68;
      func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,unaff_x20);
      func_0x000107c60bc4(&stack0xffffffffffffffa0);
      func_0x000107c61574(puVar9);
      func_0x000107c5fb28(lVar2,uVar11);
      func_0x000107c6142c(uVar11);
      func_0x000100162d98(lVar2 + 0x20,puVar10);
      func_0x000107c60bd0(puVar10);
      func_0x000107c61574(lVar2);
      return;
    }
    uVar8 = uVar3;
    func_0x000107c3e880();
    if (uVar8 == 0) {
      FUN_102b8e5a8(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    else {
      FUN_102b8e0b0(uVar8 < 4);
    }
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112efae20);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efae20))[1];
    func_0x000103aa7ef0(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar1);
    func_0x000103aa7c30(2,0,0,uVar11,uVar1,PTR___swiftEmptyArrayStorage_11034f1c8,
                        PTR___swiftEmptyArrayStorage_11034f1c8,0x1a);
    uVar8 = uVar3;
    func_0x000107c4f8ac(uVar3);
    func_0x000107c61180();
    puVar9 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c4c188();
    func_0x000107c61180();
    func_0x000107c4da84(uVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    puVar9 = &UNK_1105a6b68;
    puVar4 = puVar9;
    func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1105a7158;
    func_0x000107c613fc(&UNK_1105a7158,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x102b9718c;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_102b97194;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_102b8dcfc;
    puStack_88 = &UNK_1105a7170;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_78);
    uVar7 = uVar8;
    func_0x000107c4c280(uVar8);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar8);
    uVar8 = uVar7;
    func_0x000107c5c6c0(uVar7);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
    func_0x000107c61614(puVar9 + 0x10);
    puVar5 = &UNK_1105a71a8;
    func_0x000107c613fc(&UNK_1105a71a8,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar9;
    *(long *)(puVar5 + 0x18) = lVar2;
    pcStack_80 = FUN_102b971dc;
    puStack_a0 = puVar4;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1008561f0;
    puStack_88 = &UNK_1105a71c0;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_78);
    func_0x000107c5c320(uVar8);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c3e924(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 102b8dc14; end: 102b8dcfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8dc14(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [24];
  
  puVar5 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar5,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c453e4();
  }
  else {
    lVar3 = param_1;
    func_0x000107c4f8cc();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar4 = 0;
      puVar5 = (undefined1 *)0x0;
    }
    else {
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    plVar1 = (long *)(param_2 + _DAT_112efae28);
    lVar3 = plVar1[1];
    *plVar1 = lVar4;
    plVar1[1] = (long)puVar5;
    func_0x000107c6142c(lVar3);
    func_0x000107c4fa70();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b8dcfc);
      (*pcVar2)();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b8dcfc; end: 102b8dd7f;  */

void FUN_102b8dcfc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x000102b97234(auStack_50,uStack_38);
  func_0x000107c605b0();
  FUN_102b972bc(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102b8dd80; end: 102b8e037;  */

void FUN_102b8dd80(undefined *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 auStack_a0 [32];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c615f0(param_1);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar6 = param_1;
    func_0x000107c6148c(param_1,puVar5);
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c615e8(param_1);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    puVar7 = puVar6;
    func_0x000107c40808();
    puVar5 = PTR___sypN_11034f1a8;
    if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b8e038);
      (*pcVar3)();
    }
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar14 = (undefined *)0x0;
      do {
        puVar9 = puVar6;
        func_0x000107c4d9a0(puVar6);
        func_0x000107c61180();
        func_0x000107c60234(auStack_a0);
        func_0x000107c615e8(puVar9);
        uVar10 = 0;
        FUN_102b97258(0,0x112d726d8,&PTR_PTR_1126b5438);
        plVar11 = &lStack_80;
        func_0x000107c6147c(plVar11,auStack_a0,puVar5 + 8,uVar10,6);
        lVar2 = lStack_80;
        uVar4 = (uint)plVar11;
        if ((((ulong)plVar11 & 1) != 0) && (lStack_80 != 0)) {
          puVar9 = puVar13;
          func_0x000107c61550();
          if (((int)puVar9 == 0) || (((long)puVar13 < 0 || (((ulong)puVar13 >> 0x3e & 1) != 0)))) {
            if ((ulong)puVar13 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar13) {
                puVar8 = puVar13;
              }
              func_0x000107c60480(puVar8);
            }
            puVar9 = (undefined *)0x0;
            FUN_102b94b28(0,puVar8 + 1,1,puVar13,0x112d726d8,&PTR_PTR_1126b5438,0x112efaf38,
                          &UNK_10db2acc0);
            puVar13 = puVar9;
          }
          uVar12 = (ulong)puVar13 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar12 + 0x10);
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_102b94b28(puVar9,uVar1 + 1,1,puVar13,0x112d726d8,&PTR_PTR_1126b5438,0x112efaf38,
                          &UNK_10db2acc0);
            uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
            puVar13 = puVar9;
          }
          uVar4 = (uint)puVar9;
          *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
          *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar2;
        }
        puVar14 = puVar14 + 1;
      } while (puVar7 != puVar14);
    }
    func_0x000102b8d020();
    puVar5 = puVar13;
    FUN_102b95eec(puVar13,uVar4 & 1);
    func_0x000107c6142c(puVar13);
    if (*(ulong *)(puVar5 + 0x10) == 0) {
      func_0x000107c6142c(puVar5);
      FUN_102b8e038();
      func_0x000107c61170(param_2);
    }
    else {
      if (3 < *(ulong *)(puVar5 + 0x10)) {
        FUN_102b8f070(puVar5);
        func_0x000102b8f430();
        FUN_102b90028();
        func_0x000107c61170(param_2);
        func_0x000107c61170(puVar6);
        func_0x000107c6142c(puVar5);
        return;
      }
      FUN_102b8e5a8();
      func_0x000107c61170(param_2);
      func_0x000107c6142c(puVar5);
    }
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 102b8e038; end: 102b8e0af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8e038(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112efadf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c3e880();
    if (uVar2 == 0) {
      FUN_102b8e5a8(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    else {
      FUN_102b8e0b0(uVar2 < 4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  ppuVar5 = &puStack_60;
  lVar3 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  uVar6 = 0;
  func_0x000107c60714();
  puVar4 = &UNK_1105a6b68;
  func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  pcStack_40 = FUN_102b97138;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105a6fe0;
  puStack_38 = puVar4;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5fb28(lVar3,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000100162d98(lVar3 + 0x20,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(lVar3);
  return;
}



/* Entry: 102b8e0b0; end: 102b8e1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8e0b0(byte param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efadf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar4 = &UNK_1105a6b68;
    func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar3 = &UNK_1105a70b8;
    func_0x000107c613fc(&UNK_1105a70b8,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar4;
    puVar3[0x18] = param_1 & 1;
    *(long *)(puVar3 + 0x20) = lVar1;
    puStack_50 = (undefined *)0x102b9716c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100f6151c;
    puStack_58 = &UNK_1105a70d0;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c4f8a4(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
    return;
  }
  ppuVar5 = &puStack_60;
  lVar1 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  uVar6 = 0;
  func_0x000107c60714();
  puVar4 = &UNK_1105a6b68;
  func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_58 = (undefined *)0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105a6fe0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puVar4);
  func_0x000107c5fb28(lVar1,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000100162d98(lVar1 + 0x20,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 102b8e1e8; end: 102b8e343;  */

void FUN_102b8e1e8(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar4 = 0;
  func_0x000107c60714(param_5,0);
  puVar1 = &UNK_1105a6b68;
  func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar2 = &UNK_1105a7108;
  func_0x000107c613fc(&UNK_1105a7108,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar2[0x20] = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  uStack_78 = 0x102b9717c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1105a7120;
  ppuVar3 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_70;
  func_0x000107c614b0(param_2);
  func_0x000107c61434(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c5fb28(param_5,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000100162d98(param_5 + 0x20,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_5);
  return;
}



/* Entry: 102b8e344; end: 102b8e5a7;  */

void FUN_102b8e344(long param_1,long param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    if ((param_3 & 1) == 0) {
      FUN_102b8eac8();
    }
    else {
      FUN_102b8e5a8(PTR___swiftEmptyArrayStorage_11034f1c8);
    }
    func_0x000107c614ac(param_2);
    goto LAB_102b8e57c;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  if ((ulong)puVar1 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
    if (puVar8 != (undefined *)0x0) goto LAB_102b8e3e0;
LAB_102b8e518:
    func_0x000107c61434(param_4);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar1) {
      puVar8 = puVar1;
    }
    func_0x000107c60480();
    if (puVar8 == (undefined *)0x0) goto LAB_102b8e518;
LAB_102b8e3e0:
    func_0x000107c61434(param_4);
    func_0x000102b953f8(0,(ulong)puVar8 & ((long)puVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102b8e5a8);
      (*pcVar5)();
    }
    if (((ulong)puVar1 & 0xc000000000000001) == 0) {
      puVar10 = (undefined8 *)(puVar1 + 0x20);
      do {
        uVar7 = *puVar10;
        uVar2 = *(ulong *)(puVar4 + 0x10);
        uVar3 = *(ulong *)(puVar4 + 0x18);
        func_0x000107c61174();
        if (uVar3 >> 1 <= uVar2) {
          func_0x000102b953f8(1 < uVar3,uVar2 + 1,1);
        }
        *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar7;
        puVar4[uVar2 * 0x10 + 0x28] = 0;
        puVar8 = puVar8 + -1;
        puVar10 = puVar10 + 1;
      } while (puVar8 != (undefined *)0x0);
    }
    else {
      puVar9 = (undefined *)0x0;
      do {
        puVar6 = puVar9;
        func_0x00010103193c(puVar9,puVar1);
        uVar2 = *(ulong *)(puVar4 + 0x10);
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
          func_0x000102b953f8(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
        }
        puVar9 = puVar9 + 1;
        *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
        *(undefined **)(puVar4 + uVar2 * 0x10 + 0x20) = puVar6;
        puVar4[uVar2 * 0x10 + 0x28] = 0;
      } while (puVar8 != puVar9);
    }
  }
  func_0x000107c6142c(puVar1);
  if ((param_3 & 1) != 0) {
    FUN_102b8e5a8(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar4);
    return;
  }
  if (*(long *)(puVar4 + 0x10) == 0) {
    FUN_102b8eac8();
  }
  else {
    FUN_102b8f070(puVar4);
    func_0x000102b8f430();
    FUN_102b90028();
  }
  func_0x000107c6142c(puVar4);
LAB_102b8e57c:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b8e5a8; end: 102b8e6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8e5a8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efadf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar4 = &UNK_1105a6b68;
    func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar3 = &UNK_1105a7018;
    func_0x000107c613fc(&UNK_1105a7018,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar4;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(long *)(puVar3 + 0x20) = lVar1;
    puStack_50 = (undefined *)0x102b97140;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100f6151c;
    puStack_58 = &UNK_1105a7030;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar4);
    func_0x000107c4d320(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
    return;
  }
  ppuVar5 = &puStack_60;
  lVar1 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  uVar6 = 0;
  func_0x000107c60714();
  puVar4 = &UNK_1105a6b68;
  func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_58 = (undefined *)0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105a6fe0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puVar4);
  func_0x000107c5fb28(lVar1,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000100162d98(lVar1 + 0x20,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 102b8e6ec; end: 102b8e853;  */

void FUN_102b8e6ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar5 = 0;
  lVar1 = param_5;
  func_0x000107c60714(param_5,0);
  puVar2 = &UNK_1105a6b68;
  func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar3 = &UNK_1105a7068;
  func_0x000107c613fc(&UNK_1105a7068,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(long *)(puVar3 + 0x30) = param_5;
  uStack_78 = 0x102b9714c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1105a7080;
  ppuVar4 = &puStack_98;
  puStack_70 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_70;
  func_0x000107c614b0(param_2);
  func_0x000107c61434(param_1);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c5fb28(lVar1,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000100162d98(lVar1 + 0x20,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 102b8e854; end: 102b8eac7;  */

void FUN_102b8e854(long param_1,long param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    lVar7 = *(long *)(param_3 + 0x10);
    func_0x000107c614b0(param_2);
    if (lVar7 == 0) {
      FUN_102b8eac8();
    }
    else {
      FUN_102b8f070(param_3);
      func_0x000102b8f430();
      FUN_102b90028();
    }
    func_0x000107c614ac(param_2);
    goto LAB_102b8ea9c;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  if ((ulong)puVar1 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
    if (puVar9 != (undefined *)0x0) goto LAB_102b8e8f8;
LAB_102b8ea3c:
    func_0x000107c61434(param_4);
    func_0x000107c6142c(puVar1);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar9 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar1) {
      puVar9 = puVar1;
    }
    func_0x000107c60480();
    if (puVar9 == (undefined *)0x0) goto LAB_102b8ea3c;
LAB_102b8e8f8:
    func_0x000107c61434(param_4);
    func_0x000102b953f8(0,(ulong)puVar9 & ((long)puVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102b8eac8);
      (*pcVar4)();
    }
    if (((ulong)puVar1 & 0xc000000000000001) == 0) {
      puVar11 = (undefined8 *)(puVar1 + 0x20);
      do {
        uVar6 = *puVar11;
        uVar2 = *(ulong *)(puVar8 + 0x10);
        uVar3 = *(ulong *)(puVar8 + 0x18);
        func_0x000107c61174();
        if (uVar3 >> 1 <= uVar2) {
          func_0x000102b953f8(1 < uVar3,uVar2 + 1,1);
        }
        *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar8 + uVar2 * 0x10 + 0x20) = uVar6;
        puVar8[uVar2 * 0x10 + 0x28] = 0;
        puVar9 = puVar9 + -1;
        puVar11 = puVar11 + 1;
      } while (puVar9 != (undefined *)0x0);
    }
    else {
      puVar10 = (undefined *)0x0;
      do {
        puVar5 = puVar10;
        func_0x00010103193c(puVar10,puVar1);
        uVar2 = *(ulong *)(puVar8 + 0x10);
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
          func_0x000102b953f8(1 < *(ulong *)(puVar8 + 0x18),uVar2 + 1,1);
        }
        puVar10 = puVar10 + 1;
        *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
        *(undefined **)(puVar8 + uVar2 * 0x10 + 0x20) = puVar5;
        puVar8[uVar2 * 0x10 + 0x28] = 0;
      } while (puVar9 != puVar10);
    }
    func_0x000107c6142c(puVar1);
  }
  FUN_102b96654(param_3,puVar8);
  func_0x000107c6142c(puVar8);
  if (*(long *)(param_3 + 0x10) == 0) {
    FUN_102b8eac8();
  }
  else {
    FUN_102b8f070(param_3);
    func_0x000102b8f430();
    FUN_102b90028();
  }
  func_0x000107c6142c(param_3);
LAB_102b8ea9c:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b8eac8; end: 102b8ec3b;  */

void FUN_102b8eac8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c614f0();
  uVar3 = 0;
  func_0x000107c60714();
  puVar1 = &UNK_1105a6b68;
  func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_102b97138;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105a6fe0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5fb28(unaff_x20,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000100162d98(unaff_x20 + 0x20,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(unaff_x20);
  return;
}



/* Entry: 102b8ec3c; end: 102b8eee7;  */

/* WARNING: Possible PIC construction at 0x000102b8ed44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b8ed48) */
/* WARNING: Removing unreachable block (ram,0x000102b8ee68) */
/* WARNING: Removing unreachable block (ram,0x000102b8ed94) */
/* WARNING: Removing unreachable block (ram,0x000102b8ee88) */
/* WARNING: Removing unreachable block (ram,0x000102b8edc8) */
/* WARNING: Removing unreachable block (ram,0x000102b8eea8) */
/* WARNING: Removing unreachable block (ram,0x000102b8edfc) */
/* WARNING: Removing unreachable block (ram,0x000102b8eec8) */
/* WARNING: Removing unreachable block (ram,0x000102b8ee30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8ec3c(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112efad28);
  func_0x000107c3e158();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_102b97258(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar4 = uVar2;
  func_0x000107c5fc54(uVar2,uVar3);
  func_0x000107c61170(uVar2);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b8ed28);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar6;
        func_0x000100f040d0(uVar6,uVar4);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b8ed24);
        (*pcVar1)();
      }
      uVar7 = uVar6 + 1;
      func_0x000107c4ff34();
      func_0x000107c61170(uVar5);
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 102b8eee8; end: 102b8f06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8eee8(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_102b95cd8();
  func_0x000107c5a378();
  func_0x000107c61174();
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0f86f0);
  func_0x000107c520f4(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  uVar4 = 0x800000010f0f8720;
  uVar1 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0f8720);
  func_0x000107c520fc(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c526c0(0x3fe199999999999a,param_2);
  lVar2 = param_2;
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
  }
  lVar3 = lVar2;
  func_0x000108ffe710(lVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar1 = 1;
  func_0x000108ffef38(1,lVar3,1);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c55258(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c3d5b4(*(undefined8 *)(param_3 + _DAT_112efad28));
  *param_1 = param_2;
  return;
}



/* Entry: 102b8f070; end: 102b8fda7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8f070(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x12;
  ulong uVar16;
  long unaff_x20;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lStack_90;
  undefined8 uStack_88;
  
  lVar6 = 0;
  FUN_102b9480c();
  lVar14 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar18 = (undefined8 *)((long)&lStack_90 + lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (undefined8 *)((long)puVar18 - extraout_x12);
  lVar7 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar21 = (long)puVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar16 = *(ulong *)(param_1 + 0x10);
  if (uVar16 < 5) {
    func_0x000107c61434();
  }
  else {
    lVar8 = param_1;
    func_0x000107c61434();
    func_0x000102b95790();
    func_0x000107c6142c(param_1);
    uVar16 = *(ulong *)(lVar8 + 0x10);
    param_1 = lVar8;
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 == 1) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112efada8);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar8 != 0) {
      if (((undefined8 *)(unaff_x20 + _DAT_112efadd0))[1] == 0) {
        func_0x000107c615e8(lVar8);
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112efadd0);
        func_0x000107c5fadc(uVar9);
        lVar10 = lVar8;
        func_0x000107c43dd0(lVar8);
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c5edb4(lVar21,lVar10);
        func_0x000107c61170(lVar10);
        iVar3 = *(int *)(lVar6 + 0x18);
        (**(code **)(lVar15 + 0x10))((long)puVar20 + (long)iVar3,lVar21,lVar7);
        (**(code **)(lVar15 + 0x38))((long)puVar20 + (long)iVar3,0,1,lVar7);
        *puVar20 = 0;
        *(undefined2 *)(puVar20 + 1) = 0x1ff;
        *(undefined8 *)((long)puVar20 + (long)*(int *)(lVar6 + 0x1c)) = 0;
        puVar11 = (undefined *)0x0;
        FUN_102b94c88(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar16 = *(ulong *)(puVar11 + 0x10);
        lVar10 = uVar16 + 1;
        puVar13 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar16) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          uStack_88 = lVar10;
          FUN_102b94c88(puVar13,lVar10,1,puVar11);
          lVar10 = uStack_88;
        }
        *(long *)(puVar13 + 0x10) = lVar10;
        FUN_102b97064(puVar20,puVar13 + *(long *)(lVar14 + 0x48) * uVar16 +
                                        ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                                        ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)));
        func_0x000107c615e8(lVar8);
        (**(code **)(lVar15 + 8))(lVar21,lVar7);
      }
    }
  }
  uVar16 = *(ulong *)(param_1 + 0x10);
  func_0x000107c61434(param_1);
  if (uVar16 != 0) {
    uVar17 = 0;
    puVar19 = (undefined1 *)(param_1 + 0x28);
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102b8f408);
        (*pcVar5)();
      }
      uVar2 = *puVar19;
      uVar9 = *(undefined8 *)(puVar19 + -8);
      (**(code **)(lVar15 + 0x38))((long)puVar18 + (long)*(int *)(lVar6 + 0x18),1,1,lVar7);
      lVar21 = *(long *)(puVar13 + 0x10);
      *puVar18 = uVar9;
      *(undefined1 *)((long)&uStack_88 + lVar4) = uVar2;
      *(undefined1 *)((long)&uStack_88 + lVar4 + 1) = 0;
      *(long *)((long)puVar18 + (long)*(int *)(lVar6 + 0x1c)) = lVar21;
      func_0x000107c61174(uVar9);
      func_0x000107c61174();
      puVar11 = puVar13;
      func_0x000107c61558();
      puVar12 = puVar13;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        FUN_102b94c88(0,lVar21 + 1,1,puVar13);
      }
      uVar1 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_102b94c88(puVar13,uVar1 + 1,1,puVar12);
      }
      uVar17 = uVar17 + 1;
      *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
      FUN_102b97064(puVar18,puVar13 + *(long *)(lVar14 + 0x48) * uVar1 +
                                      ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)));
      func_0x000107c61170(uVar9);
      puVar19 = puVar19 + 0x10;
    } while (uVar16 != uVar17);
  }
  func_0x000107c61430(param_1,2);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112efadb8);
  *(undefined **)(unaff_x20 + _DAT_112efadb8) = puVar13;
  func_0x000107c6142c(uVar9);
  return;
}



/* Entry: 102b8fda8; end: 102b8fddb;  */

void FUN_102b8fda8(void)

{
  func_0x000102b8fc78();
  func_0x000102b93e5c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b8fddc; end: 102b8fe1f; -[_TtC19SpotlightQuickShare33SpotlightQuickShareViewController dealloc] */

void FUN_102b8fddc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b8fc78();
  func_0x000102b93e5c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b8fe20; end: 102b90027; -[_TtC19SpotlightQuickShare33SpotlightQuickShareViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b8fe3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8fe6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8fe8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8febc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8fedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8fefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8ff2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8ff64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8ff84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8ffa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b8ffc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b9000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b8ffc8) */
/* WARNING: Removing unreachable block (ram,0x000102b8ffa8) */
/* WARNING: Removing unreachable block (ram,0x000102b8ff88) */
/* WARNING: Removing unreachable block (ram,0x000102b8ff68) */
/* WARNING: Removing unreachable block (ram,0x000102b8ff30) */
/* WARNING: Removing unreachable block (ram,0x000102b8ff00) */
/* WARNING: Removing unreachable block (ram,0x000102b8fee0) */
/* WARNING: Removing unreachable block (ram,0x000102b8fec0) */
/* WARNING: Removing unreachable block (ram,0x000102b8fe90) */
/* WARNING: Removing unreachable block (ram,0x000102b8fe70) */
/* WARNING: Removing unreachable block (ram,0x000102b8fe40) */
/* WARNING: Removing unreachable block (ram,0x000102b90010) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b8fe20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efad20));
  return;
}



/* Entry: 102b90028; end: 102b90627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b90028(void)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar4 = 0;
  FUN_102b9480c();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112efaf10;
  func_0x0001000285a8(0x112efaf10,&UNK_10db2ac80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112efadb8);
  uVar9 = *(ulong *)(lVar6 + 0x10);
  func_0x000107c61434(lVar6);
  if (uVar9 != 0) {
    uVar7 = 0;
    do {
      if (*(ulong *)(lVar6 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b90164);
        (*pcVar3)();
      }
      uVar1 = uVar7 + 1;
      iVar2 = *(int *)(lVar4 + 0x30);
      FUN_102b96eec(lVar6 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar8 + 0x48) * uVar7,puVar5 + (iVar2 - extraout_x8_00));
      FUN_102b97064(puVar5 + (iVar2 - extraout_x8_00),puVar5);
      func_0x000102b90164(puVar5,uVar7);
      func_0x000102b96f30(puVar5);
      uVar7 = uVar1;
    } while (uVar9 != uVar1);
  }
  func_0x000107c6142c(lVar6);
  return;
}



/* Entry: 102b90628; end: 102b906b7;  */

void FUN_102b90628(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((param_1 & 1) == 0) {
      FUN_102b906b8(param_6,param_4,param_5,param_3);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b906b8; end: 102b90a3b;  */

/* WARNING: Possible PIC construction at 0x000102b9074c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b90780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b907d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b907f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b90820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b90840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b90858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b90870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b909d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b909e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b909d8) */
/* WARNING: Removing unreachable block (ram,0x000102b90874) */
/* WARNING: Removing unreachable block (ram,0x000102b90a34) */
/* WARNING: Removing unreachable block (ram,0x000102b90890) */
/* WARNING: Removing unreachable block (ram,0x000102b9085c) */
/* WARNING: Removing unreachable block (ram,0x000102b90844) */
/* WARNING: Removing unreachable block (ram,0x000102b90824) */
/* WARNING: Removing unreachable block (ram,0x000102b907fc) */
/* WARNING: Removing unreachable block (ram,0x000102b907d4) */
/* WARNING: Removing unreachable block (ram,0x000102b90784) */
/* WARNING: Removing unreachable block (ram,0x000102b90788) */
/* WARNING: Removing unreachable block (ram,0x000102b90750) */
/* WARNING: Removing unreachable block (ram,0x000102b90754) */
/* WARNING: Removing unreachable block (ram,0x000102b90a10) */
/* WARNING: Removing unreachable block (ram,0x000102b90a14) */
/* WARNING: Removing unreachable block (ram,0x000102b90768) */
/* WARNING: Removing unreachable block (ram,0x000102b909e8) */

void FUN_102b906b8(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c3e978();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102b90a3c; end: 102b90ad7;  */

void FUN_102b90a3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_102b90c40();
      func_0x000107c61170(param_4);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102b90ad8; end: 102b90c3f;  */

void FUN_102b90ad8(long param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_78 [24];
  
  lVar1 = param_1;
  pcVar4 = param_2;
  func_0x000107c44314();
  if (lVar1 == 0) {
    func_0x000107c30a1c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x000107c5ee30();
      func_0x000107c61170(param_1);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x00010006c00c(lVar1,pcVar4);
      lVar3 = lVar1;
      func_0x000107c5ee20(lVar1,pcVar4);
      func_0x000107c4635c();
      func_0x000107c61170(lVar3);
      func_0x00010006c090(lVar1,pcVar4);
      if (puVar2 != (undefined *)0x0) {
        func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
        param_4 = param_4 + 0x10;
        func_0x000107c61618();
        if (param_4 != 0) {
          FUN_102b90c40(puVar2,param_5,param_6,param_7);
          func_0x000107c61170(param_4);
        }
        (*param_2)(1);
        func_0x000107c61170(puVar2);
        func_0x00010006c090(lVar1,pcVar4);
        return;
      }
      func_0x00010006c090(lVar1,pcVar4);
    }
  }
  (*param_2)(0);
  return;
}



/* Entry: 102b90c40; end: 102b90d7b;  */

void FUN_102b90c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c614f0();
  uVar4 = 0;
  func_0x000107c60714();
  puVar1 = &UNK_1105a6b68;
  func_0x000107c613fc(&UNK_1105a6b68,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105a6ed8;
  func_0x000107c613fc(&UNK_1105a6ed8,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  pcStack_60 = FUN_102b96ff8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105a6ef0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c5fb28(unaff_x20,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000100162d98(unaff_x20 + 0x20,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(unaff_x20);
  return;
}



/* Entry: 102b90d7c; end: 102b90ffb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b90d7c(long param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uStack_80;
  char acStack_78 [24];
  
  lVar3 = 0;
  FUN_102b9480c();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)((long)&uStack_80 + lVar3);
  func_0x000107c61428(param_1 + 0x10,acStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + _DAT_112efadb8) + 0x10) <= (long)param_2) goto LAB_102b90fb0;
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b90f80);
    (*pcVar2)();
  }
  puVar5 = puVar9;
  FUN_102b96eec(*(long *)(param_1 + _DAT_112efadb8) +
                ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)) +
                *(long *)(lVar7 + 0x48) * param_2);
  cVar1 = acStack_78[lVar3];
  if ((cVar1 == '\x01') || (cVar1 == -1)) {
    func_0x000107c61170(param_1);
    func_0x000102b96f30(puVar9);
    return;
  }
  uVar8 = *puVar9;
  uVar6 = uVar8;
  func_0x000107c61174();
  func_0x000102b96f30(puVar9);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (uVar6 == 0) {
LAB_102b90ee4:
    func_0x000102b96e3c(uVar8,cVar1);
  }
  else {
    uVar4 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    if (uVar4 == param_3 && puVar5 == param_4) {
      func_0x000107c6142c(puVar5);
    }
    else {
      func_0x000107c605b8(uVar4,puVar5,param_3,param_4,0);
      func_0x000107c6142c(puVar5);
      if ((uVar4 & 1) == 0) goto LAB_102b90ee4;
    }
    lVar3 = _DAT_112efad30;
    uVar6 = *(ulong *)(param_1 + _DAT_112efad30);
    if (uVar6 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar4 = uVar6;
      }
      func_0x000107c60480();
    }
    if ((long)param_2 < (long)uVar4) {
      uVar6 = *(ulong *)(param_1 + lVar3);
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= param_2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b90ffc);
          (*pcVar2)();
        }
        param_2 = *(ulong *)(uVar6 + param_2 * 8 + 0x20);
        func_0x000107c61174(param_2);
      }
      else {
        func_0x000107c61434(uVar6);
        func_0x0001020b13f8(param_2,uVar6);
        func_0x000107c6142c(uVar6);
      }
      func_0x000107c55258(param_2);
      func_0x000102b96e3c(uVar8,cVar1);
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000102b96e3c(uVar8,cVar1);
    }
  }
LAB_102b90fb0:
  func_0x000107c61170();
  return;
}



/* Entry: 102b90ffc; end: 102b9121b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b90ffc(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar3 = PTR_PTR_1126affa8;
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b9121c);
      (*pcVar2)();
    }
    func_0x000107c4e57c();
    func_0x000107c61170(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar3 = &UNK_1105a6de8;
    func_0x000107c613fc(&UNK_1105a6de8,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_102b96fb4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105a6e00;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1105a6e38;
    func_0x000107c613fc(&UNK_1105a6e38,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    pcStack_70 = (code *)0x102b96fbc;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_1105a6e50;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c3dcd4(0x3fb47ae147ae147b,0,puVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112efad28);
    func_0x000107c3e158();
    func_0x000107c61180();
    uVar8 = 0;
    FUN_102b97258(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar9 = uVar7;
    func_0x000107c5fc54(uVar7,uVar8);
    func_0x000107c61170(uVar7);
    lVar10 = param_1;
    uVar7 = uVar9;
    FUN_1023b4a20(param_1);
    func_0x000107c6142c(uVar9);
    if (((uint)uVar7 & 0xff) != 1) {
      FUN_102b91394(lVar10);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b9121c; end: 102b9126f;  */

void FUN_102b9121c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_50 [48];
  
  func_0x000107c6088c(auStack_50,0x3feccccccccccccd,0x3feccccccccccccd);
  func_0x000107c5a03c(param_1,param_2,auStack_50);
  return;
}



/* Entry: 102b91270; end: 102b91343;  */

void FUN_102b91270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = &UNK_1105a6e88;
  func_0x000107c613fc(&UNK_1105a6e88,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  pcStack_40 = FUN_102b96fc4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105a6ea0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3dcd4(0x3fb47ae147ae147b,0,puVar1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102b91344; end: 102b91393; -[_TtC19SpotlightQuickShare33SpotlightQuickShareViewController handleTap:] */

/* WARNING: Possible PIC construction at 0x000102b9137c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b91380) */

void FUN_102b91344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102b90ffc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b91394; end: 102b91807;  */

/* WARNING: Removing unreachable block (ram,0x000102b91800) */
/* WARNING: Removing unreachable block (ram,0x000102b917fc) */
/* WARNING: Removing unreachable block (ram,0x000102b91804) */
/* WARNING: Removing unreachable block (ram,0x000102b917f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b91394(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long extraout_x8;
  undefined8 *puVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [144];
  undefined *puStack_70;
  
  lVar4 = 0;
  FUN_102b9480c();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)&puStack_120 + lVar2);
  lVar11 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b917f8);
    (*pcVar3)();
  }
  func_0x000107c5a378();
  func_0x000107c61170(lVar11);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b917f0);
    (*pcVar3)();
  }
  if (*(ulong *)(*(long *)(unaff_x20 + _DAT_112efadb8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b917f4);
    (*pcVar3)();
  }
  FUN_102b96eec(*(long *)(unaff_x20 + _DAT_112efadb8) +
                ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)) +
                *(long *)(lVar12 + 0x48) * param_1,puVar10);
  if (*(char *)((long)&uStack_118 + lVar2 + 1) == '\x01') {
    FUN_102b92ca4((long)puVar10 + (long)*(int *)(lVar4 + 0x18));
  }
  else {
    puVar5 = (undefined *)0x112e9e1e8;
    func_0x0001000285a8(0x112e9e1e8,&UNK_10daadee0);
    func_0x000107c61534();
    *(undefined8 *)(puVar5 + 0x18) = 4;
    *(undefined8 *)(puVar5 + 0x10) = 2;
    *(undefined ***)(puVar5 + 0x20) = &PTR____CFConstantStringClassReference_110f41cd8;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61174();
    func_0x000107c610f8();
    func_0x000107c46ed0();
    puVar7 = (undefined *)0x0;
    FUN_102b97258(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined **)(puVar5 + 0x40) = puVar7;
    *(undefined **)(puVar5 + 0x28) = puVar6;
    *(undefined ***)(puVar5 + 0x48) = &PTR____CFConstantStringClassReference_110f41cf8;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61174();
    func_0x000107c610f8();
    func_0x000107c46ed0();
    *(undefined **)(puVar5 + 0x68) = puVar7;
    *(undefined **)(puVar5 + 0x50) = puVar6;
    puVar6 = puVar5;
    FUN_1024932ac();
    func_0x000107c61588(puVar5);
    uVar8 = 0x112e9e1f0;
    func_0x0001000285a8(0x112e9e1f0,&UNK_10db2b4f0);
    func_0x000107c61408(puVar5 + 0x20,2,uVar8);
    ppuVar9 = &PTR____CFConstantStringClassReference_110f43578;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112efae28);
    lVar11 = puVar1[1];
    puStack_70 = puVar6;
    func_0x000107c61174();
    if (lVar11 == 0) {
      puStack_108 = (undefined *)0x0;
      uStack_110 = 0;
      uStack_118 = 0;
      puStack_120 = (undefined *)0x0;
      func_0x000102b970f8(&puStack_120,0x112d387f8,&UNK_10d902650);
      func_0x000102492ad0(auStack_100,ppuVar9);
      func_0x000107c61170(ppuVar9);
      func_0x000102b970f8(auStack_100,0x112d387f8,&UNK_10d902650);
    }
    else {
      puStack_120 = (undefined *)*puVar1;
      uStack_110 = 0;
      puStack_108 = PTR___sSSN_11034da80;
      uStack_118 = lVar11;
      func_0x000100102924(&puStack_120,auStack_100);
      func_0x000107c61434(lVar11);
      puVar5 = puVar6;
      func_0x000107c61558(puVar6);
      puStack_120 = puVar6;
      func_0x000102492b94(auStack_100,ppuVar9,puVar5);
      func_0x000107c61170(ppuVar9);
      puStack_70 = puStack_120;
    }
    if (*(char *)(unaff_x20 + _DAT_112efade8) == '\x01') {
      ppuVar9 = &PTR____CFConstantStringClassReference_110f42338;
      func_0x000107c61174();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c45a48();
      puStack_120 = puVar5;
      puStack_108 = puVar7;
      if (puVar7 == (undefined *)0x0) {
        func_0x000102b970f8(&puStack_120,0x112d387f8,&UNK_10d902650);
        func_0x000102492ad0(auStack_100,ppuVar9);
        func_0x000107c61170(ppuVar9);
        func_0x000102b970f8(auStack_100,0x112d387f8,&UNK_10d902650);
      }
      else {
        func_0x000100102924(&puStack_120,auStack_100);
        puVar5 = puStack_70;
        puVar6 = puStack_70;
        func_0x000107c61558(puStack_70);
        puStack_120 = puVar5;
        func_0x000102492b94(auStack_100,ppuVar9,puVar6);
        func_0x000107c61170(ppuVar9);
        puStack_70 = puStack_120;
      }
    }
    lVar11 = *(long *)(unaff_x20 + _DAT_112efae18);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar5 = puStack_70;
    if (lVar11 != 0) {
      puVar6 = puStack_70;
      FUN_1024925ac(puStack_70);
      puVar7 = puVar6;
      func_0x000107c5f9dc();
      func_0x000107c6142c(puVar6);
      func_0x000107c4bea8(lVar11);
      func_0x000107c615e8(lVar11);
      func_0x000107c61170(puVar7);
    }
    FUN_102b92e2c(*puVar10,*(undefined1 *)((long)&uStack_118 + lVar2));
    func_0x000107c6142c(puVar5);
  }
  func_0x000102b96f30(puVar10);
  return;
}



/* Entry: 102b91808; end: 102b9187f; -[_TtC19SpotlightQuickShare33SpotlightQuickShareViewController handleTriggeringLongPress:] */

/* WARNING: Possible PIC construction at 0x000102b91864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b91868) */

void FUN_102b91808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c4b8b8(param_5,param_4,0);
  func_0x000107c5bcc0(param_5);
  FUN_102b91880(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 102b91880; end: 102b91bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b91880(double param_1,double param_2,ulong param_3,uint param_4)

{
  double *pdVar1;
  ulong *puVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x20;
  double dVar16;
  double dVar17;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar9 = &puStack_80;
  uVar11 = param_3;
  FUN_102b8d004();
  lVar13 = _DAT_112efad30;
  if ((uVar11 & 1) == 0) {
    return;
  }
  if (*(long *)(*(long *)(unaff_x20 + _DAT_112efadb8) + 0x10) == 0) {
    return;
  }
  if (3 < (long)param_3) {
    if (1 < param_3 - 4) {
      return;
    }
    FUN_102b92a00(1);
LAB_102b91930:
    lVar13 = unaff_x20 + _DAT_112efada0;
    lVar5 = lVar13;
    func_0x000107c61618();
    if (lVar5 == 0) {
      return;
    }
    lVar13 = *(long *)(lVar13 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar13 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
    return;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      FUN_102b91bcc(param_1,param_2);
      pdVar1 = (double *)(unaff_x20 + _DAT_112efad58);
      if (*(char *)(pdVar1 + 2) == '\x01') {
        *pdVar1 = param_1;
        pdVar1[1] = param_2;
        *(undefined1 *)(pdVar1 + 2) = 0;
        dVar16 = param_1;
        dVar17 = param_2;
      }
      else {
        dVar16 = *pdVar1;
        dVar17 = pdVar1[1];
      }
      if (*(char *)(unaff_x20 + _DAT_112efad48 + 8) == '\x01') {
        param_1 = param_1 - dVar16;
        func_0x000107c61038(param_1,param_2 - dVar17);
        if (param_1 <= 10.0) {
          return;
        }
      }
      *(undefined1 *)(unaff_x20 + _DAT_112efad60) = 1;
      return;
    }
    if (param_3 != 3) {
      return;
    }
    if ((char)((ulong *)(unaff_x20 + _DAT_112efad48))[1] != '\x01') {
      uVar14 = *(ulong *)(unaff_x20 + _DAT_112efad48);
      uVar11 = *(ulong *)(unaff_x20 + _DAT_112efad30);
      if (uVar11 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar11 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uVar6 = uVar11;
        }
        func_0x000107c60480();
      }
      if ((long)uVar14 < (long)uVar6) {
        uVar11 = *(ulong *)(unaff_x20 + lVar13);
        if ((uVar11 & 0xc000000000000001) == 0) {
          if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b91bc8);
            (*pcVar4)();
          }
          if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b91bcc);
            (*pcVar4)();
          }
          uVar6 = *(ulong *)(uVar11 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          func_0x000107c61434(uVar11);
          uVar6 = uVar14;
          func_0x0001020b13f8(uVar14,uVar11);
          func_0x000107c6142c(uVar11);
        }
        puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar8 = &UNK_1105a6d98;
        func_0x000107c613fc(&UNK_1105a6d98,0x20,7);
        *(ulong *)(puVar8 + 0x10) = uVar6;
        *(undefined8 *)(puVar8 + 0x18) = 0x3ff4000000000000;
        uStack_60 = 0x102b9738c;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_1105a6db0;
        puStack_58 = puVar8;
        func_0x000107c60bc4(&puStack_80);
        puVar8 = puStack_58;
        func_0x000107c61174(uVar6);
        func_0x000107c61574(puVar8);
        func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar7);
        func_0x000107c61170(uVar6);
        func_0x000107c60bd0(ppuVar9);
      }
      FUN_102b92a00(0);
      FUN_102b91394(uVar14);
      return;
    }
    cVar3 = *(char *)(unaff_x20 + _DAT_112efad60);
    FUN_102b92a00(1);
    if (cVar3 != '\x01') {
      return;
    }
    goto LAB_102b91930;
  }
  pdVar1 = (double *)(unaff_x20 + _DAT_112efad58);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  *(undefined1 *)(pdVar1 + 2) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112efad60) = 0;
  ppuVar9 = &puStack_80;
  ppuVar10 = &puStack_80;
  FUN_102b92018(param_1,param_2);
  puVar2 = (ulong *)(unaff_x20 + _DAT_112efad48);
  uVar14 = *puVar2;
  cVar3 = (char)puVar2[1];
  if ((param_4 & 0xff) == 1) {
    if (cVar3 == '\x01') {
      return;
    }
    *puVar2 = uVar11;
    *(undefined1 *)(puVar2 + 1) = 1;
  }
  else {
    if (cVar3 != '\x01' && uVar11 == uVar14) {
      return;
    }
    *puVar2 = uVar11;
    *(char *)(puVar2 + 1) = (char)param_4;
    if (cVar3 == '\x01') goto LAB_102b91db0;
  }
  lVar13 = _DAT_112efad30;
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112efad30);
  if (uVar6 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar12 = uVar6;
    }
    func_0x000107c60480();
  }
  if ((long)uVar14 < (long)uVar12) {
    uVar6 = *(ulong *)(unaff_x20 + lVar13);
    if (uVar6 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar12 = uVar6;
      }
      func_0x000107c60480();
    }
    if ((long)uVar14 < (long)uVar12) {
      uVar6 = *(ulong *)(unaff_x20 + lVar13);
      if ((uVar6 & 0xc000000000000001) == 0) {
        if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b92010);
          (*pcVar4)();
        }
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b92014);
          (*pcVar4)();
        }
        uVar14 = *(ulong *)(uVar6 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61434(uVar6);
        func_0x0001020b13f8(uVar14,uVar6);
        func_0x000107c6142c(uVar6);
      }
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar8 = &UNK_1105a6d48;
      func_0x000107c613fc(&UNK_1105a6d48,0x20,7);
      *(ulong *)(puVar8 + 0x10) = uVar14;
      *(undefined8 *)(puVar8 + 0x18) = 0x3ff0000000000000;
      uStack_60 = 0x102b97388;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1105a6d60;
      puStack_58 = puVar8;
      func_0x000107c60bc4(&puStack_80);
      puVar8 = puStack_58;
      func_0x000107c61174(uVar14);
      func_0x000107c61574(puVar8);
      func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar7);
      func_0x000107c61170(uVar14);
      func_0x000107c60bd0(ppuVar9);
    }
  }
  if ((param_4 & 0xff) == 1) {
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112efad40);
    func_0x000107c550d8(uVar15);
    func_0x000107c59c6c(uVar15);
    return;
  }
LAB_102b91db0:
  lVar13 = _DAT_112efad30;
  uVar14 = *(ulong *)(unaff_x20 + _DAT_112efad30);
  if (uVar14 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar6 = uVar14;
    }
    func_0x000107c60480();
  }
  if ((long)uVar11 < (long)uVar6) {
    uVar14 = *(ulong *)(unaff_x20 + lVar13);
    if ((uVar14 & 0xc000000000000001) == 0) {
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b91fdc);
        (*pcVar4)();
      }
      if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b91fe0);
        (*pcVar4)();
      }
      uVar11 = *(ulong *)(uVar14 + uVar11 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x000107c61434(uVar14);
      func_0x0001020b13f8(uVar11,uVar14);
      func_0x000107c6142c(uVar14);
    }
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar8 = &UNK_1105a6cf8;
    func_0x000107c613fc(&UNK_1105a6cf8,0x20,7);
    *(ulong *)(puVar8 + 0x10) = uVar11;
    *(undefined8 *)(puVar8 + 0x18) = 0x3ff4000000000000;
    uStack_60 = 0x102b97384;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105a6d10;
    puStack_58 = puVar8;
    func_0x000107c60bc4(&puStack_80);
    puVar8 = puStack_58;
    func_0x000107c61174(uVar11);
    func_0x000107c61574(puVar8);
    func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar7);
    func_0x000107c61170(uVar11);
    func_0x000107c60bd0(ppuVar10);
  }
  FUN_102b9232c();
  puVar8 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c4e57c();
    func_0x000107c61170(puVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102b92018);
  (*pcVar4)();
}



/* Entry: 102b91bcc; end: 102b92017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b91bcc(ulong param_1,uint param_2)

{
  ulong *puVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  ppuVar8 = &puStack_80;
  FUN_102b92018();
  puVar1 = (ulong *)(unaff_x20 + _DAT_112efad48);
  uVar11 = *puVar1;
  cVar2 = (char)puVar1[1];
  if ((param_2 & 0xff) == 1) {
    if (cVar2 == '\x01') {
      return;
    }
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  else {
    if (cVar2 != '\x01' && param_1 == uVar11) {
      return;
    }
    *puVar1 = param_1;
    *(char *)(puVar1 + 1) = (char)param_2;
    if (cVar2 == '\x01') goto LAB_102b91db0;
  }
  lVar3 = _DAT_112efad30;
  uVar9 = *(ulong *)(unaff_x20 + _DAT_112efad30);
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
  }
  if ((long)uVar11 < (long)uVar10) {
    uVar9 = *(ulong *)(unaff_x20 + lVar3);
    if (uVar9 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar10 = uVar9;
      }
      func_0x000107c60480();
    }
    if ((long)uVar11 < (long)uVar10) {
      uVar9 = *(ulong *)(unaff_x20 + lVar3);
      if ((uVar9 & 0xc000000000000001) == 0) {
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b92010);
          (*pcVar4)();
        }
        if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102b92014);
          (*pcVar4)();
        }
        uVar11 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61434(uVar9);
        func_0x0001020b13f8(uVar11,uVar9);
        func_0x000107c6142c(uVar9);
      }
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar6 = &UNK_1105a6d48;
      func_0x000107c613fc(&UNK_1105a6d48,0x20,7);
      *(ulong *)(puVar6 + 0x10) = uVar11;
      *(undefined8 *)(puVar6 + 0x18) = 0x3ff0000000000000;
      uStack_60 = 0x102b97388;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_1105a6d60;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar6 = puStack_58;
      func_0x000107c61174(uVar11);
      func_0x000107c61574(puVar6);
      func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar5);
      func_0x000107c61170(uVar11);
      func_0x000107c60bd0(ppuVar7);
    }
  }
  if ((param_2 & 0xff) == 1) {
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112efad40);
    func_0x000107c550d8(uVar12);
    func_0x000107c59c6c(uVar12);
    return;
  }
LAB_102b91db0:
  lVar3 = _DAT_112efad30;
  uVar11 = *(ulong *)(unaff_x20 + _DAT_112efad30);
  if (uVar11 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar9 = uVar11;
    }
    func_0x000107c60480();
  }
  if ((long)param_1 < (long)uVar9) {
    uVar11 = *(ulong *)(unaff_x20 + lVar3);
    if ((uVar11 & 0xc000000000000001) == 0) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b91fdc);
        (*pcVar4)();
      }
      if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b91fe0);
        (*pcVar4)();
      }
      param_1 = *(ulong *)(uVar11 + param_1 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      func_0x000107c61434(uVar11);
      func_0x0001020b13f8(param_1,uVar11);
      func_0x000107c6142c(uVar11);
    }
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_1105a6cf8;
    func_0x000107c613fc(&UNK_1105a6cf8,0x20,7);
    *(ulong *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = 0x3ff4000000000000;
    uStack_60 = 0x102b97384;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1105a6d10;
    puStack_58 = puVar6;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar6);
    func_0x000107c3dcd4(0x3fbeb851eb851eb8,0,puVar5);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar8);
  }
  FUN_102b9232c();
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
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102b92018);
  (*pcVar4)();
}



/* Entry: 102b92018; end: 102b922bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102b92018(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

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
  
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b922bc);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = _DAT_112efad30;
  if (lVar4 != 0) {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_112efad30);
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
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112efad28);
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
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b92288);
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
                func_0x0001020b13f8(uVar10,uVar8);
                dVar11 = dVar12;
                uVar14 = uVar9;
                uVar15 = param_3;
                uVar16 = param_4;
              }
              uVar1 = uVar10 + 1;
              if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102b92284);
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
                  goto LAB_102b92144;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar1 != uVar5);
          }
          func_0x000107c61170(lVar4);
          func_0x000107c6142c(uVar8);
          goto LAB_102b9213c;
        }
      }
    }
    func_0x000107c61170(lVar4);
  }
LAB_102b9213c:
  uVar10 = 0;
  uVar9 = 1;
LAB_102b92144:
  auVar17._8_8_ = uVar9;
  auVar17._0_8_ = uVar10;
  return auVar17;
}



/* Entry: 102b922bc; end: 102b9232b;  */

void FUN_102b922bc(double param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 102b9232c; end: 102b92617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b9232c(ulong param_1)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  char acStack_88 [8];
  undefined8 uStack_80;
  char cStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  func_0x000107c614f0();
  lVar3 = 0;
  FUN_102b9480c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)&uStack_90 + lVar3);
  if (*(long *)(*(long *)(unaff_x20 + _DAT_112efadb8) + 0x10) <= (long)param_1) {
    return;
  }
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102b925e4);
    (*pcVar2)();
  }
  FUN_102b96eec(*(long *)(unaff_x20 + _DAT_112efadb8) +
                ((ulong)*(byte *)(extraout_x12 + 0x50) + 0x20 &
                ((ulong)*(byte *)(extraout_x12 + 0x50) ^ 0xffffffffffffffff)) +
                *(long *)(extraout_x12 + 0x48) * param_1,puVar5);
  if (((acStack_88[lVar3 + 1] & 1U) == 0) && (cVar1 = acStack_88[lVar3], cVar1 != -1)) {
    uVar6 = *puVar5;
    uStack_80 = uVar6;
    cStack_78 = cVar1;
    func_0x000107c61174(uVar6);
    FUN_102b92618(&uStack_70,&uStack_80);
    func_0x000102b96e3c(uVar6,cVar1);
    if (uStack_68 != 0) {
      uVar7 = uStack_70 & 0xffffffffffff;
      if ((uStack_68 & 0x2000000000000000) != 0) {
        uVar7 = uStack_68 >> 0x38 & 0xf;
      }
      if (uVar7 != 0) {
        uVar7 = *(ulong *)(unaff_x20 + _DAT_112efad30);
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102b92614);
            (*pcVar2)();
          }
          param_1 = *(ulong *)(uVar7 + param_1 * 8 + 0x20);
          func_0x000107c61434(uStack_68);
          func_0x000107c61174(param_1);
        }
        else {
          func_0x000107c61434(uStack_68);
          func_0x000107c61434(uVar7);
          func_0x0001020b13f8(param_1,uVar7);
          func_0x000107c6142c(uVar7);
        }
        lVar3 = _DAT_112efad50;
        if (*(long *)(unaff_x20 + _DAT_112efad50) != 0) {
          func_0x000107c521e8();
        }
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efad40);
        uVar6 = uVar8;
        func_0x000107c3f75c();
        func_0x000107c61180();
        uVar7 = param_1;
        func_0x000107c3f75c(param_1);
        func_0x000107c61180();
        uVar4 = uVar6;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c521e8(uVar4);
        uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
        *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
        func_0x000107c61174(uVar4);
        func_0x000107c61170(uVar6);
        uVar7 = uStack_70;
        func_0x000107c5fadc(uStack_70,uStack_68);
        func_0x000107c6142c(uStack_68);
        func_0x000107c59c6c(uVar8);
        func_0x000107c61170(uVar7);
        func_0x000107c550d8(uVar8);
        func_0x000107c5de64();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b92618);
          (*pcVar2)();
        }
        func_0x000107c4abfc();
        func_0x000107c6142c(uStack_68);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(unaff_x20);
        goto LAB_102b925b8;
      }
      func_0x000107c6142c(uStack_68);
    }
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112efad40);
  func_0x000107c550d8(uVar6);
  func_0x000107c59c6c(uVar6);
LAB_102b925b8:
  func_0x000102b96f30(puVar5);
  return;
}


