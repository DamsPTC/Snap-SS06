/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10035a4d8; end: 10035a73b;  */

void FUN_10035a4d8(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112dd8638;
  FUN_1000285a8(0x112dd8638,&UNK_10d99bec0);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10035a708:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10035a738);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_10035a708;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10035a73c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 10035a73c; end: 10035a7f3; -[_TtC26SCCaptureDeviceManagerImpl30CaptureDeviceFormatHandlerImpl activeFormatForDeviceAtPosition:] */

void FUN_10035a73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x00010035a778(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10035a7f4; end: 10035a817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035a7f4(void)

{
  long unaff_x20;
  
  func_0x000107c3d11c(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10035a818; end: 10035a95b; -[_TtC26SCCaptureDeviceManagerImpl30CaptureDeviceFormatHandlerImpl activeMinFrameRateForDeviceAtPosition:] */

undefined8 FUN_10035a818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x00010035a854(param_3);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 10035a95c; end: 10035a97b;  */

void FUN_10035a95c(void)

{
  func_0x000107c61168(&PTR_PTR_1129c6cc0);
  return;
}



/* Entry: 10035a97c; end: 10035a98f;  */

void FUN_10035a97c(long param_1,long param_2)

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



/* Entry: 10035a990; end: 10035a9ef; -[SCManagedCaptureSessionImpl performConfiguration:] */

void FUN_10035a990(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    func_0x000107c3e76c(*(undefined8 *)(param_1 + 8));
    (**(code **)(param_3 + 0x10))(param_3);
    func_0x000107c3fe5c(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10035a9f0; end: 10035a9ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035a9f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  bool bVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x20;
  undefined **ppuVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *puStack_80;
  long lStack_78;
  
  lVar10 = _DAT_112dd8908;
  lVar9 = _DAT_112dd8900;
  lVar8 = _DAT_112dd88e8;
  lVar7 = _DAT_112dd88e0;
  lVar6 = _DAT_112dd88d0;
  lVar25 = *(long *)(unaff_x20 + 0x10);
  ppuVar3 = *(undefined ***)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if ((lVar25 != 0) && (lVar24 = *(long *)(lVar25 + 0x10), lVar24 != 0)) {
    uVar26 = *(undefined8 *)(lVar2 + _DAT_112dd8918);
    ppuVar18 = ppuVar3;
    plVar23 = (long *)(lVar25 + 0x20);
    do {
      lVar25 = *plVar23;
      if ((ppuVar3[2] != (undefined *)0x0) &&
         (lVar13 = lVar25, FUN_10035a314(), ((ulong)ppuVar18 & 1) != 0)) {
        uVar20 = *(undefined8 *)(ppuVar3[7] + lVar13 * 8);
        ppuVar22 = *(undefined ***)(lVar2 + lVar8);
        puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c46ed0();
        if (((ulong)ppuVar22 & 0xc000000000000001) == 0) {
          if (ppuVar22[2] == (undefined *)0x0) {
LAB_10035abb4:
            lStack_78 = 0;
            goto LAB_10035abb8;
          }
          func_0x000107c61434(ppuVar22);
          puVar16 = puVar14;
          FUN_100121450();
          if (((ulong)ppuVar18 & 1) == 0) {
            func_0x000107c6142c(ppuVar22);
            goto LAB_10035abb4;
          }
          lStack_78 = *(long *)(ppuVar22[7] + (long)puVar16 * 8);
          func_0x000107c61174();
          func_0x000107c61170(puVar14);
          func_0x000107c6142c(ppuVar22);
          lVar13 = lStack_78;
        }
        else {
          ppuVar18 = (undefined **)0x0;
          if ((undefined **)0x7fffffffffffffff < ppuVar22) {
            ppuVar18 = ppuVar22;
          }
          puVar16 = puVar14;
          func_0x000107c6043c();
          if (puVar16 == (undefined *)0x0) goto LAB_10035abb4;
          uVar15 = 0;
          puStack_80 = puVar16;
          FUN_1001262e4(0,0x112da0578,&PTR_PTR_1126b7120);
          ppuVar18 = &puStack_80;
          func_0x000107c6147c(&lStack_78,ppuVar18,PTR___syXlN_11034f1a0 + 8,uVar15,7);
LAB_10035abb8:
          func_0x000107c61170(puVar14);
          lVar13 = lStack_78;
        }
        lStack_78 = lVar13;
        if (lVar13 == 0) {
          func_0x000107c61170(uVar20);
        }
        else {
          uVar15 = uVar26;
          func_0x000107c418e8(uVar26);
          func_0x000107c61180();
          lVar19 = lVar13;
          func_0x000107c4390c();
          func_0x000107c61180();
          if (lVar19 == 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10035ae84);
            (*pcVar11)();
          }
          func_0x000107c4cecc();
          func_0x000107c61170(lVar19);
          lVar19 = lVar13;
          func_0x000107c4390c();
          func_0x000107c61180();
          if (lVar19 == 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10035ae80);
            (*pcVar11)();
          }
          func_0x000107c4c804();
          func_0x000107c61170(lVar19);
          func_0x000107c5d460(uVar15);
          func_0x000107c615e8(uVar15);
          lVar19 = lVar2 + lVar6;
          func_0x000107c61618();
          if (lVar19 != 0) {
            lVar17 = lVar19;
            func_0x000107c5bcc0();
            func_0x000107c61180();
            func_0x000107c615e8(lVar19);
            iVar5 = *(int *)(lVar17 + _DAT_113075bb0);
            func_0x000107c61170(lVar17);
            if (iVar5 == (int)lVar25) {
              lVar19 = lVar13;
              func_0x000107c4390c();
              func_0x000107c61180();
              if (lVar19 == 0) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10035ae8c);
                (*pcVar11)();
              }
              lVar17 = lVar19;
              func_0x000107c4c804();
              func_0x000107c61170(lVar19);
              if (lVar4 == 0) {
                lVar19 = 0;
LAB_10035ad04:
                bVar12 = lVar17 != lVar19;
              }
              else {
                lVar19 = *(long *)(lVar4 + _DAT_113075b88);
                if (-1 < lVar19) goto LAB_10035ad04;
                bVar12 = true;
              }
              *(bool *)(lVar2 + lVar7) = bVar12;
              lVar19 = lVar13;
              func_0x000107c4390c();
              func_0x000107c61180();
              if (lVar19 == 0) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10035ae88);
                (*pcVar11)();
              }
              lVar17 = lVar19;
              func_0x000107c4c804();
              func_0x000107c61170(lVar19);
              if (lVar17 < 0) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10035ae7c);
                (*pcVar11)();
              }
              func_0x0001002e9544(lVar17);
              func_0x000107c61170();
              uVar15 = uVar20;
              func_0x000107c43878(uVar20);
              func_0x000107c61180();
              ppuVar18 = (undefined **)0x1;
              func_0x000107c60a6c();
              func_0x000107c61170(uVar15);
              func_0x00010038143c(param_1,param_2,1);
            }
          }
          uVar15 = uVar26;
          func_0x000107c4c008(uVar26);
          func_0x000107c61180();
          lVar19 = *(long *)(lVar2 + lVar10);
          if ((*(long *)(lVar19 + 0x10) == 0) || (FUN_10035a314(), ((ulong)ppuVar18 & 1) == 0)) {
            uVar21 = 0;
            ppuVar22 = (undefined **)0xe000000000000000;
          }
          else {
            puVar1 = (undefined8 *)(*(long *)(lVar19 + 0x38) + lVar25 * 0x10);
            uVar21 = *puVar1;
            ppuVar22 = (undefined **)puVar1[1];
            func_0x000107c61434(ppuVar22);
          }
          ppuVar18 = ppuVar22;
          func_0x000107c5fadc(uVar21);
          func_0x000107c6142c(ppuVar22);
          func_0x000107c4ba50(uVar15);
          func_0x000107c615e8(uVar15);
          func_0x000107c61170(uVar21);
          if (*(char *)(lVar2 + lVar9) == '\x01') {
            uVar15 = uVar26;
            func_0x000107c4b404(uVar26);
            func_0x000107c61180();
            func_0x000107c42684();
            func_0x000107c615e8(uVar15);
          }
          func_0x000107c61170(lVar13);
          func_0x000107c61170(uVar20);
        }
      }
      lVar24 = lVar24 + -1;
      plVar23 = plVar23 + 1;
    } while (lVar24 != 0);
  }
  return;
}



/* Entry: 10035aa00; end: 10035ae8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035aa00(undefined8 param_1,undefined8 param_2,long param_3,undefined **param_4,
                  long param_5,long param_6)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puStack_80;
  long lStack_78;
  
  lVar7 = _DAT_112dd8908;
  lVar6 = _DAT_112dd8900;
  lVar5 = _DAT_112dd88e8;
  lVar4 = _DAT_112dd88e0;
  lVar3 = _DAT_112dd88d0;
  if ((param_3 != 0) && (lVar21 = *(long *)(param_3 + 0x10), lVar21 != 0)) {
    uVar23 = *(undefined8 *)(param_5 + _DAT_112dd8918);
    ppuVar15 = param_4;
    plVar20 = (long *)(param_3 + 0x20);
    do {
      lVar22 = *plVar20;
      if ((param_4[2] != (undefined *)0x0) &&
         (lVar10 = lVar22, FUN_10035a314(), ((ulong)ppuVar15 & 1) != 0)) {
        uVar17 = *(undefined8 *)(param_4[7] + lVar10 * 8);
        ppuVar19 = *(undefined ***)(param_5 + lVar5);
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c46ed0();
        if (((ulong)ppuVar19 & 0xc000000000000001) == 0) {
          if (ppuVar19[2] == (undefined *)0x0) {
LAB_10035abb4:
            lStack_78 = 0;
            goto LAB_10035abb8;
          }
          func_0x000107c61434(ppuVar19);
          puVar13 = puVar11;
          FUN_100121450();
          if (((ulong)ppuVar15 & 1) == 0) {
            func_0x000107c6142c(ppuVar19);
            goto LAB_10035abb4;
          }
          lStack_78 = *(long *)(ppuVar19[7] + (long)puVar13 * 8);
          func_0x000107c61174();
          func_0x000107c61170(puVar11);
          func_0x000107c6142c(ppuVar19);
          lVar10 = lStack_78;
        }
        else {
          ppuVar15 = (undefined **)0x0;
          if ((undefined **)0x7fffffffffffffff < ppuVar19) {
            ppuVar15 = ppuVar19;
          }
          puVar13 = puVar11;
          func_0x000107c6043c();
          if (puVar13 == (undefined *)0x0) goto LAB_10035abb4;
          uVar12 = 0;
          puStack_80 = puVar13;
          FUN_1001262e4(0,0x112da0578,&PTR_PTR_1126b7120);
          ppuVar15 = &puStack_80;
          func_0x000107c6147c(&lStack_78,ppuVar15,PTR___syXlN_11034f1a0 + 8,uVar12,7);
LAB_10035abb8:
          func_0x000107c61170(puVar11);
          lVar10 = lStack_78;
        }
        lStack_78 = lVar10;
        if (lVar10 == 0) {
          func_0x000107c61170(uVar17);
        }
        else {
          uVar12 = uVar23;
          func_0x000107c418e8(uVar23);
          func_0x000107c61180();
          lVar16 = lVar10;
          func_0x000107c4390c();
          func_0x000107c61180();
          if (lVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10035ae84);
            (*pcVar8)();
          }
          func_0x000107c4cecc();
          func_0x000107c61170(lVar16);
          lVar16 = lVar10;
          func_0x000107c4390c();
          func_0x000107c61180();
          if (lVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10035ae80);
            (*pcVar8)();
          }
          func_0x000107c4c804();
          func_0x000107c61170(lVar16);
          func_0x000107c5d460(uVar12);
          func_0x000107c615e8(uVar12);
          lVar16 = param_5 + lVar3;
          func_0x000107c61618();
          if (lVar16 != 0) {
            lVar14 = lVar16;
            func_0x000107c5bcc0();
            func_0x000107c61180();
            func_0x000107c615e8(lVar16);
            iVar2 = *(int *)(lVar14 + _DAT_113075bb0);
            func_0x000107c61170(lVar14);
            if (iVar2 == (int)lVar22) {
              lVar16 = lVar10;
              func_0x000107c4390c();
              func_0x000107c61180();
              if (lVar16 == 0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10035ae8c);
                (*pcVar8)();
              }
              lVar14 = lVar16;
              func_0x000107c4c804();
              func_0x000107c61170(lVar16);
              if (param_6 == 0) {
                lVar16 = 0;
LAB_10035ad04:
                bVar9 = lVar14 != lVar16;
              }
              else {
                lVar16 = *(long *)(param_6 + _DAT_113075b88);
                if (-1 < lVar16) goto LAB_10035ad04;
                bVar9 = true;
              }
              *(bool *)(param_5 + lVar4) = bVar9;
              lVar16 = lVar10;
              func_0x000107c4390c();
              func_0x000107c61180();
              if (lVar16 == 0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10035ae88);
                (*pcVar8)();
              }
              lVar14 = lVar16;
              func_0x000107c4c804();
              func_0x000107c61170(lVar16);
              if (lVar14 < 0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10035ae7c);
                (*pcVar8)();
              }
              func_0x0001002e9544(lVar14);
              func_0x000107c61170();
              uVar12 = uVar17;
              func_0x000107c43878(uVar17);
              func_0x000107c61180();
              ppuVar15 = (undefined **)0x1;
              func_0x000107c60a6c();
              func_0x000107c61170(uVar12);
              func_0x00010038143c(param_1,param_2,1);
            }
          }
          uVar12 = uVar23;
          func_0x000107c4c008(uVar23);
          func_0x000107c61180();
          lVar16 = *(long *)(param_5 + lVar7);
          if ((*(long *)(lVar16 + 0x10) == 0) || (FUN_10035a314(), ((ulong)ppuVar15 & 1) == 0)) {
            uVar18 = 0;
            ppuVar19 = (undefined **)0xe000000000000000;
          }
          else {
            puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar22 * 0x10);
            uVar18 = *puVar1;
            ppuVar19 = (undefined **)puVar1[1];
            func_0x000107c61434(ppuVar19);
          }
          ppuVar15 = ppuVar19;
          func_0x000107c5fadc(uVar18);
          func_0x000107c6142c(ppuVar19);
          func_0x000107c4ba50(uVar12);
          func_0x000107c615e8(uVar12);
          func_0x000107c61170(uVar18);
          if (*(char *)(param_5 + lVar6) == '\x01') {
            uVar12 = uVar23;
            func_0x000107c4b404(uVar23);
            func_0x000107c61180();
            func_0x000107c42684();
            func_0x000107c615e8(uVar12);
          }
          func_0x000107c61170(lVar10);
          func_0x000107c61170(uVar17);
        }
      }
      lVar21 = lVar21 + -1;
      plVar20 = plVar20 + 1;
    } while (lVar21 != 0);
  }
  return;
}



/* Entry: 10035ae8c; end: 10035af07; -[_TtC26SCCaptureDeviceManagerImpl30CaptureDeviceFormatHandlerImpl updateDeviceFormat:minFrameRate:maxFrameRate:overrideActiveMaxExposureDuration:forDeviceAtPosition:] */

/* WARNING: Possible PIC construction at 0x00010035aeec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010035aef0) */

void FUN_10035ae8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10035af08(param_3,param_4,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10035af08; end: 10035b05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035af08(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_58;
  
  lVar6 = param_2;
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da0a50));
  FUN_100083b20(&lStack_58);
  lVar3 = lStack_58;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  func_0x000107c615e8(lStack_58);
  if ((lVar3 == 0) ||
     (cVar2 = *(char *)(lVar3 + _DAT_113075bf8), func_0x000107c61170(lVar3), cVar2 != '\x01')) {
    uVar7 = 2;
    if (param_5 != 1) {
      uVar7 = (uint)(param_5 == 0);
    }
    uVar4 = (ulong)uVar7;
    FUN_1002a1e70();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c614f0();
      (**(code **)(lVar6 + 0x1a8))(param_1,param_2,param_3,param_4 & 1,uVar5,lVar6);
      func_0x000107c615e8(uVar4);
    }
  }
  else {
    lVar3 = _DAT_112da0a70;
    if (((int)param_5 == 1) || (lVar3 = _DAT_112da0a68, (int)param_5 == 0)) {
      puVar1 = (undefined8 *)(unaff_x20 + lVar3);
      uVar8 = *puVar1;
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      func_0x000107c61174(param_1);
      func_0x000107c61170(uVar8);
    }
  }
  return;
}



/* Entry: 10035b060; end: 10035b063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035b060(undefined8 param_1,undefined *param_2,undefined *param_3,uint param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 auStack_b8 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar7 = _DAT_112da1100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61428(unaff_x20 + _DAT_112da1100,auStack_80,1,0);
  *(undefined **)(unaff_x20 + lVar7) = param_2;
  lVar7 = _DAT_112da10f8;
  func_0x000107c61428(unaff_x20 + _DAT_112da10f8,auStack_98,1,0);
  *(undefined **)(unaff_x20 + lVar7) = param_3;
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
  uStack_a8 = 0;
  uStack_a0 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(0xd000000000000014,0x800000010ef834f0);
  func_0x000107c6142c(uStack_a0);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112da1120);
  uStack_a8 = 0;
  uVar14 = uVar12;
  func_0x000107c4b948();
  uVar13 = uStack_a8;
  if ((int)uVar14 == 0) {
    uVar14 = uStack_a8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar14);
    func_0x000107c61654();
    uStack_a8 = 0;
    uStack_a0 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    param_3 = (undefined *)0x112d393f0;
    auStack_b8[0] = uVar13;
    FUN_1000285a8(0x112d393f0,&UNK_10d903bb0);
    param_2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    puVar11 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    func_0x000107c603d0(auStack_b8,&uStack_a8);
    func_0x000107c614ac(uVar13);
    func_0x000107c6142c(uStack_a0);
  }
  else {
    func_0x000107c61174();
    puVar11 = (undefined *)(ulong)(param_4 & 1);
    FUN_10035b2b0(uVar12,param_1);
    func_0x000107c5d284(uVar12);
  }
  uVar3 = 0;
  uVar8 = 0;
  FUN_10035cb28(*(undefined8 *)(unaff_x20 + _DAT_112da10c8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  uVar4 = uVar3;
  func_0x000107c3d11c();
  func_0x000107c61180();
  FUN_1002507d4(0,0x112da0aa0,&PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
  uVar5 = uVar4;
  func_0x000107c60118(uVar4,uVar8);
  func_0x000107c61170(uVar4);
  if ((uVar5 & 1) == 0) {
    uVar4 = uVar3;
    func_0x000107c43890(uVar3);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar4);
    FUN_10035b798(uVar8,uVar5);
    func_0x000107c6142c(uVar5);
    if ((uVar8 & 1) != 0) {
      func_0x000107c521f0(uVar3);
    }
    uVar8 = uVar3;
    func_0x000107c4a010();
    if ((int)uVar8 != 0) {
      func_0x000107c52aa8(uVar3);
    }
  }
  if ((ulong)param_3 >> 0x1f == 0) {
    func_0x000107c60a40(&puStack_148,1,param_3);
    uVar4 = uStack_138;
    uVar8 = uStack_140;
    puVar10 = puStack_148;
    if ((ulong)param_2 >> 0x1f == 0) {
      func_0x000107c60a40(&puStack_148,1,param_2);
      uVar1 = uStack_138;
      uVar5 = uStack_140;
      puVar9 = puStack_148;
      func_0x000107c3d1d4(&puStack_148,uVar3);
      puVar6 = puVar10;
      func_0x000107c600b0(puVar10,uVar8,uVar4,puStack_148,uStack_140,uStack_138);
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000107c5223c(uVar3);
        puStack_148 = puVar9;
        uStack_140 = uVar5;
        uStack_138 = uVar1;
        func_0x000107c52238(uVar3);
      }
      else {
        func_0x000107c52238(uVar3);
        puStack_148 = puVar10;
        uStack_140 = uVar8;
        uStack_138 = uVar4;
        func_0x000107c5223c(uVar3);
      }
      if (((ulong)puVar11 & 1) == 0) {
        puStack_148 = *(undefined **)PTR__kCMTimeInvalid_110348648;
        uStack_138 = *(undefined8 *)((long)PTR__kCMTimeInvalid_110348648 + 0x10);
        uStack_140 = *(undefined8 *)((long)PTR__kCMTimeInvalid_110348648 + 8);
        func_0x000107c52204(uVar3);
        uVar14 = 0x65736c6166;
        uVar13 = 0xe500000000000000;
      }
      else {
        uVar8 = uVar3;
        func_0x000107c3d11c(uVar3);
        func_0x000107c61180();
        func_0x000107c4c830(&puStack_148);
        func_0x000107c61170(uVar8);
        uStack_150 = uStack_138;
        puStack_160 = puStack_148;
        uStack_158 = uStack_140;
        func_0x000107c60a4c(&uStack_178,&puStack_148,&puStack_160);
        puStack_148 = (undefined *)uStack_178;
        uStack_140 = uStack_170;
        uStack_138 = uStack_168;
        func_0x000107c52204(uVar3);
        uVar13 = 0xe400000000000000;
        uVar14 = 0x65757274;
      }
      puStack_148 = (undefined *)0x0;
      uStack_140 = 0xe000000000000000;
      func_0x000107c602fc(0x33);
      uVar12 = 0x800000010ef83740;
      func_0x000107c5fb78(0xd000000000000031,0x800000010ef83740);
      uVar8 = uVar3;
      func_0x000107c4b86c(uVar3);
      func_0x000107c61180();
      uVar4 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      func_0x000107c5fb78(uVar4,uVar12);
      func_0x000107c6142c(uVar12);
      func_0x000107c6142c(uStack_140);
      puStack_148 = (undefined *)0x0;
      uStack_140 = 0xe000000000000000;
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(uStack_140);
      puVar10 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      puVar11 = PTR___sSuN_11034e220;
      puStack_148 = (undefined *)0x646e695773706620;
      uStack_140 = 0xec0000005b3d776f;
      puVar9 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      puStack_160 = param_2;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar9);
      func_0x000107c5fb78(0x202c,0xe200000000000000);
      puStack_160 = param_3;
      func_0x000107c6057c(puVar11,puVar10);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar10);
      func_0x000107c5fb78(0x5d,0xe100000000000000);
      func_0x000107c6142c(uStack_140);
      puStack_148 = (undefined *)0x0;
      uStack_140 = 0xe000000000000000;
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(uStack_140);
      puStack_148 = (undefined *)0xd000000000000011;
      uStack_140 = 0x800000010ef83780;
      func_0x000107c5fb78(uVar14,uVar13);
      func_0x000107c6142c(uVar13);
      func_0x000107c6142c(uStack_140);
      lVar7 = 0x112d36008;
      FUN_1000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      func_0x000107c3d154(&puStack_148,uVar3);
      uVar3 = uStack_140;
      func_0x000107c60a3c(&puStack_148);
      puVar11 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar7 + 0x38) = PTR___sSdN_11034dd90;
      *(undefined **)(lVar7 + 0x40) = puVar11;
      *(ulong *)(lVar7 + 0x20) = uVar3;
      uVar13 = 0x800000010ef837a0;
      func_0x000107c5fb00(0xd000000000000020,0x800000010ef837a0,lVar7);
      func_0x000107c6142c(uVar13);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10035b798);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10035b794);
  (*pcVar2)();
}



/* Entry: 10035b064; end: 10035b2af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035b064(undefined8 param_1,undefined *param_2,undefined *param_3,uint param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 auStack_b8 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar7 = _DAT_112da1100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61428(unaff_x20 + _DAT_112da1100,auStack_80,1,0);
  *(undefined **)(unaff_x20 + lVar7) = param_2;
  lVar7 = _DAT_112da10f8;
  func_0x000107c61428(unaff_x20 + _DAT_112da10f8,auStack_98,1,0);
  *(undefined **)(unaff_x20 + lVar7) = param_3;
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
  uStack_a8 = 0;
  uStack_a0 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(0xd000000000000014,0x800000010ef834f0);
  func_0x000107c6142c(uStack_a0);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112da1120);
  uStack_a8 = 0;
  uVar14 = uVar12;
  func_0x000107c4b948();
  uVar13 = uStack_a8;
  if ((int)uVar14 == 0) {
    uVar14 = uStack_a8;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar14);
    func_0x000107c61654();
    uStack_a8 = 0;
    uStack_a0 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    param_3 = (undefined *)0x112d393f0;
    auStack_b8[0] = uVar13;
    FUN_1000285a8(0x112d393f0,&UNK_10d903bb0);
    param_2 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    puVar11 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    func_0x000107c603d0(auStack_b8,&uStack_a8);
    func_0x000107c614ac(uVar13);
    func_0x000107c6142c(uStack_a0);
  }
  else {
    func_0x000107c61174();
    puVar11 = (undefined *)(ulong)(param_4 & 1);
    FUN_10035b2b0(uVar12,param_1);
    func_0x000107c5d284(uVar12);
  }
  uVar3 = 0;
  uVar8 = 0;
  FUN_10035cb28(*(undefined8 *)(unaff_x20 + _DAT_112da10c8));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  uVar4 = uVar3;
  func_0x000107c3d11c();
  func_0x000107c61180();
  FUN_1002507d4(0,0x112da0aa0,&PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
  uVar5 = uVar4;
  func_0x000107c60118(uVar4,uVar8);
  func_0x000107c61170(uVar4);
  if ((uVar5 & 1) == 0) {
    uVar4 = uVar3;
    func_0x000107c43890(uVar3);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar4);
    FUN_10035b798(uVar8,uVar5);
    func_0x000107c6142c(uVar5);
    if ((uVar8 & 1) != 0) {
      func_0x000107c521f0(uVar3);
    }
    uVar8 = uVar3;
    func_0x000107c4a010();
    if ((int)uVar8 != 0) {
      func_0x000107c52aa8(uVar3);
    }
  }
  if ((ulong)param_3 >> 0x1f == 0) {
    func_0x000107c60a40(&puStack_148,1,param_3);
    uVar4 = uStack_138;
    uVar8 = uStack_140;
    puVar10 = puStack_148;
    if ((ulong)param_2 >> 0x1f == 0) {
      func_0x000107c60a40(&puStack_148,1,param_2);
      uVar1 = uStack_138;
      uVar5 = uStack_140;
      puVar9 = puStack_148;
      func_0x000107c3d1d4(&puStack_148,uVar3);
      puVar6 = puVar10;
      func_0x000107c600b0(puVar10,uVar8,uVar4,puStack_148,uStack_140,uStack_138);
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000107c5223c(uVar3);
        puStack_148 = puVar9;
        uStack_140 = uVar5;
        uStack_138 = uVar1;
        func_0x000107c52238(uVar3);
      }
      else {
        func_0x000107c52238(uVar3);
        puStack_148 = puVar10;
        uStack_140 = uVar8;
        uStack_138 = uVar4;
        func_0x000107c5223c(uVar3);
      }
      if (((ulong)puVar11 & 1) == 0) {
        puStack_148 = *(undefined **)PTR__kCMTimeInvalid_110348648;
        uStack_138 = *(undefined8 *)((long)PTR__kCMTimeInvalid_110348648 + 0x10);
        uStack_140 = *(undefined8 *)((long)PTR__kCMTimeInvalid_110348648 + 8);
        func_0x000107c52204(uVar3);
        uVar14 = 0x65736c6166;
        uVar13 = 0xe500000000000000;
      }
      else {
        uVar8 = uVar3;
        func_0x000107c3d11c(uVar3);
        func_0x000107c61180();
        func_0x000107c4c830(&puStack_148);
        func_0x000107c61170(uVar8);
        uStack_150 = uStack_138;
        puStack_160 = puStack_148;
        uStack_158 = uStack_140;
        func_0x000107c60a4c(&uStack_178,&puStack_148,&puStack_160);
        puStack_148 = (undefined *)uStack_178;
        uStack_140 = uStack_170;
        uStack_138 = uStack_168;
        func_0x000107c52204(uVar3);
        uVar13 = 0xe400000000000000;
        uVar14 = 0x65757274;
      }
      puStack_148 = (undefined *)0x0;
      uStack_140 = 0xe000000000000000;
      func_0x000107c602fc(0x33);
      uVar12 = 0x800000010ef83740;
      func_0x000107c5fb78(0xd000000000000031,0x800000010ef83740);
      uVar8 = uVar3;
      func_0x000107c4b86c(uVar3);
      func_0x000107c61180();
      uVar4 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      func_0x000107c5fb78(uVar4,uVar12);
      func_0x000107c6142c(uVar12);
      func_0x000107c6142c(uStack_140);
      puStack_148 = (undefined *)0x0;
      uStack_140 = 0xe000000000000000;
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(uStack_140);
      puVar10 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      puVar11 = PTR___sSuN_11034e220;
      puStack_148 = (undefined *)0x646e695773706620;
      uStack_140 = 0xec0000005b3d776f;
      puVar9 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      puStack_160 = param_2;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar9);
      func_0x000107c5fb78(0x202c,0xe200000000000000);
      puStack_160 = param_3;
      func_0x000107c6057c(puVar11,puVar10);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar10);
      func_0x000107c5fb78(0x5d,0xe100000000000000);
      func_0x000107c6142c(uStack_140);
      puStack_148 = (undefined *)0x0;
      uStack_140 = 0xe000000000000000;
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(uStack_140);
      puStack_148 = (undefined *)0xd000000000000011;
      uStack_140 = 0x800000010ef83780;
      func_0x000107c5fb78(uVar14,uVar13);
      func_0x000107c6142c(uVar13);
      func_0x000107c6142c(uStack_140);
      lVar7 = 0x112d36008;
      FUN_1000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      func_0x000107c3d154(&puStack_148,uVar3);
      uVar3 = uStack_140;
      func_0x000107c60a3c(&puStack_148);
      puVar11 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar7 + 0x38) = PTR___sSdN_11034dd90;
      *(undefined **)(lVar7 + 0x40) = puVar11;
      *(ulong *)(lVar7 + 0x20) = uVar3;
      uVar13 = 0x800000010ef837a0;
      func_0x000107c5fb00(0xd000000000000020,0x800000010ef837a0,lVar7);
      func_0x000107c6142c(uVar13);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10035b798);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10035b794);
  (*pcVar2)();
}



/* Entry: 10035b2b0; end: 10035b797;  */

void FUN_10035b2b0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar7 = param_1;
  func_0x000107c3d11c();
  func_0x000107c61180();
  FUN_1002507d4(0,0x112da0aa0,&PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
  uVar8 = uVar7;
  func_0x000107c60118(uVar7,param_2);
  func_0x000107c61170(uVar7);
  if ((uVar8 & 1) == 0) {
    uVar7 = param_1;
    func_0x000107c43890(param_1);
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar7);
    FUN_10035b798(param_2,uVar8);
    func_0x000107c6142c(uVar8);
    if ((param_2 & 1) != 0) {
      func_0x000107c521f0(param_1);
    }
    uVar7 = param_1;
    func_0x000107c4a010();
    if ((int)uVar7 != 0) {
      func_0x000107c52aa8(param_1);
    }
  }
  if (param_3 >> 0x1f == 0) {
    func_0x000107c60a40(&uStack_88,1,param_3);
    uVar4 = uStack_78;
    uVar8 = uStack_80;
    uVar7 = uStack_88;
    if (param_4 >> 0x1f == 0) {
      func_0x000107c60a40(&uStack_88,1,param_4);
      uVar5 = uStack_78;
      uVar3 = uStack_80;
      uVar2 = uStack_88;
      func_0x000107c3d1d4(&uStack_88,param_1);
      uVar9 = uVar7;
      func_0x000107c600b0(uVar7,uVar8,uVar4,uStack_88,uStack_80,uStack_78);
      if ((uVar9 & 1) == 0) {
        func_0x000107c5223c(param_1);
        uStack_88 = uVar2;
        uStack_80 = uVar3;
        uStack_78 = uVar5;
        func_0x000107c52238(param_1);
      }
      else {
        func_0x000107c52238(param_1);
        uStack_88 = uVar7;
        uStack_80 = uVar8;
        uStack_78 = uVar4;
        func_0x000107c5223c(param_1);
      }
      if ((param_5 & 1) == 0) {
        uStack_88 = *(ulong *)PTR__kCMTimeInvalid_110348648;
        uStack_78 = *(ulong *)((long)PTR__kCMTimeInvalid_110348648 + 0x10);
        uStack_80 = *(ulong *)((long)PTR__kCMTimeInvalid_110348648 + 8);
        func_0x000107c52204(param_1);
        uVar15 = 0x65736c6166;
        uVar14 = 0xe500000000000000;
      }
      else {
        uVar7 = param_1;
        func_0x000107c3d11c(param_1);
        func_0x000107c61180();
        func_0x000107c4c830(&uStack_88);
        func_0x000107c61170(uVar7);
        uStack_90 = uStack_78;
        uStack_a0 = uStack_88;
        uStack_98 = uStack_80;
        func_0x000107c60a4c(&uStack_b8,&uStack_88,&uStack_a0);
        uStack_88 = uStack_b8;
        uStack_80 = uStack_b0;
        uStack_78 = uStack_a8;
        func_0x000107c52204(param_1);
        uVar14 = 0xe400000000000000;
        uVar15 = 0x65757274;
      }
      uStack_88 = 0;
      uStack_80 = 0xe000000000000000;
      func_0x000107c602fc(0x33);
      uVar11 = 0x800000010ef83740;
      func_0x000107c5fb78(0xd000000000000031,0x800000010ef83740);
      uVar7 = param_1;
      func_0x000107c4b86c(param_1);
      func_0x000107c61180();
      uVar8 = uVar7;
      func_0x000107c5faec();
      func_0x000107c61170(uVar7);
      func_0x000107c5fb78(uVar8,uVar11);
      func_0x000107c6142c(uVar11);
      func_0x000107c6142c(uStack_80);
      uStack_88 = 0;
      uStack_80 = 0xe000000000000000;
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(uStack_80);
      puVar13 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      puVar1 = PTR___sSuN_11034e220;
      uStack_88 = 0x646e695773706620;
      uStack_80 = 0xec0000005b3d776f;
      puVar12 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
      uStack_a0 = param_4;
      func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar12);
      func_0x000107c5fb78(0x202c,0xe200000000000000);
      uStack_a0 = param_3;
      func_0x000107c6057c(puVar1,puVar13);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar13);
      func_0x000107c5fb78(0x5d,0xe100000000000000);
      func_0x000107c6142c(uStack_80);
      uStack_88 = 0;
      uStack_80 = 0xe000000000000000;
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(uStack_80);
      uStack_88 = 0xd000000000000011;
      uStack_80 = 0x800000010ef83780;
      func_0x000107c5fb78(uVar15,uVar14);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(uStack_80);
      lVar10 = 0x112d36008;
      FUN_1000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar10 + 0x18) = 2;
      *(undefined8 *)(lVar10 + 0x10) = 1;
      func_0x000107c3d154(&uStack_88,param_1);
      uVar7 = uStack_80;
      func_0x000107c60a3c(&uStack_88);
      puVar1 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar10 + 0x38) = PTR___sSdN_11034dd90;
      *(undefined **)(lVar10 + 0x40) = puVar1;
      *(ulong *)(lVar10 + 0x20) = uVar7;
      uVar14 = 0x800000010ef837a0;
      func_0x000107c5fb00(0xd000000000000020,0x800000010ef837a0,lVar10);
      func_0x000107c6142c(uVar14);
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10035b798);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10035b794);
  (*pcVar6)();
}



/* Entry: 10035b798; end: 10035b89f;  */

bool FUN_10035b798(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar5 = uVar6;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60480();
  }
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if (uVar5 == uVar4) break;
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10035b88c);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_2 + uVar4 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = uVar4;
      FUN_10035b8a0(uVar4,param_2);
    }
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10035b888);
      (*pcVar1)();
    }
    FUN_1002507d4(0,0x112da0aa0,&PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
    uVar3 = uVar2;
    func_0x000107c60118(uVar2,param_1);
    func_0x000107c61170(uVar2);
    uVar2 = uVar4 + 1;
  } while ((uVar3 & 1) == 0);
  return uVar5 != uVar4;
}



/* Entry: 10035b8a0; end: 10035ba63;  */

ulong FUN_10035b8a0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10035b984);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10035b988);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8;
    func_0x000107c61168(PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
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
    puVar4 = PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8;
    func_0x000107c61168(PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
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
  FUN_1002507d4(0,0x112da0aa0,&PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10035ba64);
  (*pcVar2)();
}



/* Entry: 10035ba64; end: 10035baaf;  */

void FUN_10035ba64(undefined8 param_1)

{
  FUN_1000285a8(0x112ff21e8,&UNK_10dc5d420);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103b95af0,param_1);
  return;
}



/* Entry: 10035bab0; end: 10035bacf;  */

void FUN_10035bab0(void)

{
  func_0x000107c61168(&PTR_PTR_112939e10);
  return;
}



/* Entry: 10035bad0; end: 10035bcb3;  */

void FUN_10035bad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f22b20,&UNK_10db5cd90);
  puVar1 = &UNK_1105de250;
  func_0x000107c613fc(&UNK_1105de250,0xc0,7);
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
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  FUN_1000823a8(&UNK_102e6f69c,puVar1);
  return;
}



/* Entry: 10035bcb4; end: 10035bd9f;  */

void FUN_10035bcb4(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035bda0; end: 10035bdbb;  */

void FUN_10035bda0(undefined8 param_1)

{
  FUN_1000285a8(0x112f22b28,&UNK_10db5cda0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102e703dc,param_1);
  return;
}



/* Entry: 10035bdbc; end: 10035be0b;  */

void FUN_10035bdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035be0c; end: 10035bea3;  */

void FUN_10035be0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f2d0e8,&UNK_10db714f0);
  puVar1 = &UNK_1105f5900;
  func_0x000107c613fc(&UNK_1105f5900,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_102fabb10,puVar1);
  return;
}



/* Entry: 10035bea4; end: 10035bef7;  */

void FUN_10035bea4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035bef8; end: 10035bf13;  */

void FUN_10035bef8(undefined8 param_1)

{
  FUN_1000285a8(0x112f2d0f8,&UNK_10db71500);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102fabe1c,param_1);
  return;
}



/* Entry: 10035bf14; end: 10035bf63;  */

void FUN_10035bf14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035bf64; end: 10035bfaf;  */

void FUN_10035bf64(undefined8 param_1)

{
  FUN_1000285a8(0x112ff1a48,&UNK_10dc5c6e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103b8bfc0,param_1);
  return;
}



/* Entry: 10035bfb0; end: 10035bfcf;  */

void FUN_10035bfb0(void)

{
  func_0x000107c61168(&PTR_PTR_112938460);
  return;
}



/* Entry: 10035bfd0; end: 10035bfeb;  */

void FUN_10035bfd0(undefined8 param_1)

{
  FUN_1000285a8(0x112d6af80,&UNK_10d92e460);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100add6a0,param_1);
  return;
}



/* Entry: 10035bfec; end: 10035c03b;  */

void FUN_10035bfec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035c03c; end: 10035c087;  */

void FUN_10035c03c(undefined8 param_1)

{
  FUN_1000285a8(0x11306f250,&UNK_10dcebb60);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1043348a0,param_1);
  return;
}



/* Entry: 10035c088; end: 10035c0a7;  */

void FUN_10035c088(void)

{
  func_0x000107c61168(&PTR_PTR_11299dbd8);
  return;
}



/* Entry: 10035c0a8; end: 10035c0f3;  */

void FUN_10035c0a8(undefined8 param_1)

{
  FUN_1000285a8(0x112ff1bd0,&UNK_10dc5c8e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103b8d2f0,param_1);
  return;
}



/* Entry: 10035c0f4; end: 10035c113;  */

void FUN_10035c0f4(void)

{
  func_0x000107c61168(&PTR_PTR_1129388a8);
  return;
}



/* Entry: 10035c114; end: 10035c247;  */

void FUN_10035c114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ecd7e0,&UNK_10daf2ea0);
  puVar1 = &UNK_11056d9a8;
  func_0x000107c613fc(&UNK_11056d9a8,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_10;
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  *(undefined8 *)(puVar1 + 0x50) = param_6;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_9;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(&UNK_102926820,puVar1);
  return;
}



/* Entry: 10035c248; end: 10035c24b;  */

void FUN_10035c248(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035c24c; end: 10035c26b;  */

void FUN_10035c24c(void)

{
  func_0x000107c61168(&PTR_PTR_112901408);
  return;
}



/* Entry: 10035c26c; end: 10035c3d7;  */

void FUN_10035c26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ea5078,&UNK_10dab8310);
  puVar1 = &UNK_11051f840;
  func_0x000107c613fc(&UNK_11051f840,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_16;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_8;
  *(undefined8 *)(puVar1 + 0x38) = param_11;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_15;
  *(undefined8 *)(puVar1 + 0x58) = param_13;
  *(undefined8 *)(puVar1 + 0x60) = param_6;
  *(undefined8 *)(puVar1 + 0x68) = param_14;
  *(undefined8 *)(puVar1 + 0x70) = param_12;
  *(undefined8 *)(puVar1 + 0x78) = param_10;
  *(undefined8 *)(puVar1 + 0x80) = param_1;
  *(undefined8 *)(puVar1 + 0x88) = param_9;
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(&UNK_102552d24,puVar1);
  return;
}



/* Entry: 10035c3d8; end: 10035c3db;  */

void FUN_10035c3d8(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035c3dc; end: 10035c3eb;  */

undefined1  [16] FUN_10035c3dc(void)

{
  return ZEXT816(0x1106a3360);
}



/* Entry: 10035c3ec; end: 10035c68f;  */

void FUN_10035c3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e5d860,&UNK_10da644e0);
  puVar1 = &UNK_1104d5608;
  func_0x000107c613fc(&UNK_1104d5608,0x108,7);
  *(undefined8 *)(puVar1 + 0x10) = param_29;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_17;
  *(undefined8 *)(puVar1 + 0x30) = param_30;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_28;
  *(undefined8 *)(puVar1 + 0x48) = param_10;
  *(undefined8 *)(puVar1 + 0x50) = param_1;
  *(undefined8 *)(puVar1 + 0x58) = param_26;
  *(undefined8 *)(puVar1 + 0x60) = param_7;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_24;
  *(undefined8 *)(puVar1 + 0x78) = param_25;
  *(undefined8 *)(puVar1 + 0x80) = param_31;
  *(undefined8 *)(puVar1 + 0x88) = param_4;
  *(undefined8 *)(puVar1 + 0x90) = param_27;
  *(undefined8 *)(puVar1 + 0x98) = param_23;
  *(undefined8 *)(puVar1 + 0xa0) = param_11;
  *(undefined8 *)(puVar1 + 0xa8) = param_14;
  *(undefined8 *)(puVar1 + 0xb0) = param_16;
  *(undefined8 *)(puVar1 + 0xb8) = param_15;
  *(undefined8 *)(puVar1 + 0xc0) = param_20;
  *(undefined8 *)(puVar1 + 200) = param_8;
  *(undefined8 *)(puVar1 + 0xd0) = param_21;
  *(undefined8 *)(puVar1 + 0xd8) = param_19;
  *(undefined8 *)(puVar1 + 0xe0) = param_18;
  *(undefined8 *)(puVar1 + 0xe8) = param_22;
  *(undefined8 *)(puVar1 + 0xf0) = param_9;
  *(undefined8 *)(puVar1 + 0xf8) = param_13;
  *(undefined8 *)(puVar1 + 0x100) = param_3;
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10216eb90,puVar1);
  return;
}



/* Entry: 10035c690; end: 10035c693;  */

void FUN_10035c690(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035c694; end: 10035c77f;  */

void FUN_10035c694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f88a48,&UNK_10dbfcd10);
  puVar1 = &UNK_110683a08;
  func_0x000107c613fc(&UNK_110683a08,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  *(undefined8 *)(puVar1 + 0x48) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_1036ea654,puVar1);
  return;
}



/* Entry: 10035c780; end: 10035c783;  */

void FUN_10035c780(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035c784; end: 10035c83f;  */

void FUN_10035c784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fb3038,&UNK_10dc26958);
  puVar1 = &UNK_1106af2f0;
  func_0x000107c613fc(&UNK_1106af2f0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_100933d20,puVar1);
  return;
}



/* Entry: 10035c840; end: 10035c85f;  */

void FUN_10035c840(void)

{
  func_0x000107c61168(&PTR_PTR_1129032d8);
  return;
}



/* Entry: 10035c860; end: 10035c94b;  */

void FUN_10035c860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112fb50e0,&UNK_10dc27cd8);
  puVar1 = &UNK_1106b0440;
  func_0x000107c613fc(&UNK_1106b0440,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(FUN_100934584,puVar1);
  return;
}



/* Entry: 10035c94c; end: 10035c96b;  */

void FUN_10035c94c(void)

{
  func_0x000107c61168(&PTR_PTR_112904ca8);
  return;
}



/* Entry: 10035c96c; end: 10035c98f;  */

void FUN_10035c96c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106b0708;
  FUN_1000285a8(0x112fb57b8,&UNK_10dc28238);
  func_0x000107c613fc(&UNK_1106b0708,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100935920,puVar1);
  return;
}



/* Entry: 10035c990; end: 10035ca0f;  */

void FUN_10035c990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 10035ca10; end: 10035ca2f;  */

void FUN_10035ca10(void)

{
  func_0x000107c61168(&PTR_PTR_112905390);
  return;
}



/* Entry: 10035ca30; end: 10035ca4b;  */

void FUN_10035ca30(undefined8 param_1)

{
  FUN_1000285a8(0x112f0b680,&UNK_10db3ea88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10071a114,param_1);
  return;
}



/* Entry: 10035ca4c; end: 10035ca9b;  */

void FUN_10035ca4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035ca9c; end: 10035cabb;  */

void FUN_10035ca9c(void)

{
  func_0x000107c61168(&PTR_PTR_1128ebc80);
  return;
}



/* Entry: 10035cabc; end: 10035cb07;  */

void FUN_10035cabc(undefined8 param_1)

{
  FUN_1000285a8(0x112fae088,&UNK_10dc225a0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x100687efc,param_1);
  return;
}



/* Entry: 10035cb08; end: 10035cb27;  */

void FUN_10035cb08(void)

{
  func_0x000107c61168(&PTR_PTR_1128ff5b0);
  return;
}



/* Entry: 10035cb28; end: 10035ce3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035cb28(double param_1,ulong param_2,byte param_3)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  double dVar7;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c602fc(0x4f);
  uStack_a0 = uStack_88;
  uStack_98 = uStack_80;
  uVar6 = 0x800000010ef83bd0;
  func_0x000107c5fb78(0xd000000000000026,0x800000010ef83bd0);
  dVar7 = param_1;
  func_0x000107c5fdd8(param_1);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar6);
  func_0x000107c5fb78(0x74616d696e61202c,0xec000000203a6465);
  bVar2 = (param_2 & 1) == 0;
  uVar6 = 0x65757274;
  if (bVar2) {
    uVar6 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000017,0x800000010ef83c00);
  lVar3 = _DAT_112da10b8;
  func_0x000107c61428(unaff_x20 + _DAT_112da10b8,&uStack_88,0,0);
  bVar2 = *(char *)(unaff_x20 + lVar3) == '\0';
  uVar6 = 0x65757274;
  if (bVar2) {
    uVar6 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  uVar6 = uStack_98;
  func_0x000107c6142c(uStack_98);
  if (*(char *)(unaff_x20 + lVar3) == '\x01') {
    if ((param_1 <= 8.0) && (1.0 <= param_1)) {
      *(double *)(unaff_x20 + _DAT_112da10c0) = param_1;
    }
    FUN_10035d104();
  }
  else if ((param_2 & 1) == 0) {
    FUN_10035ce64(param_1);
    lVar3 = _DAT_112da10e0;
    if (((param_3 & 1) != 0) &&
       (func_0x000107c61428(unaff_x20 + _DAT_112da10e0,&uStack_a0,0,0),
       *(char *)(unaff_x20 + lVar3) == '\x01')) {
      FUN_100083b20(&lStack_a8);
      lVar3 = lStack_a8;
      func_0x000107c41948();
      func_0x000107c61180();
      func_0x000107c615e8(lStack_a8);
      if (lVar3 != 0) {
        func_0x000107c41a8c((float)param_1,lVar3);
        func_0x000107c615e8(lVar3);
      }
    }
  }
  else {
    func_0x00010146fccc();
    if (*(char *)(unaff_x20 + lVar3) == '\x01') {
      dVar7 = *(double *)(unaff_x20 + _DAT_112da10c0);
    }
    else {
      func_0x000107c5de60(*(undefined8 *)(unaff_x20 + _DAT_112da1120));
    }
    puVar4 = &UNK_1103c2370;
    func_0x000107c613fc(&UNK_1103c2370,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1103c25c8;
    func_0x000107c613fc(&UNK_1103c25c8,0x28,7);
    puVar5[0x10] = param_3 & 1;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    *(double *)(puVar5 + 0x20) = param_1;
    func_0x000107c6157c(puVar4);
    func_0x00010146f360(dVar7,param_1,0x3fc999999999999a,&UNK_10147399c,puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 10035ce40; end: 10035ce63;  */

void FUN_10035ce40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035ce64; end: 10035d097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035ce64(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 auStack_78 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar4 = param_1;
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da1130));
  uStack_68 = 0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x40);
  func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
  func_0x000107c5fb78(0x6d6f6f7a20746553,0xef726f7463616620);
  func_0x000107c6142c(uStack_60);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112da1120);
  uStack_68 = 0;
  uVar1 = uVar3;
  func_0x000107c4b948();
  uVar2 = uStack_68;
  if ((int)uVar1 == 0) {
    uVar1 = uStack_68;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar1);
    func_0x000107c61654();
    uStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    func_0x000107c602fc(0x41);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
    uVar1 = 0x112d393f0;
    auStack_78[0] = uVar2;
    FUN_1000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(auStack_78,&uStack_68,uVar1,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_60);
    func_0x000107c614ac(uVar2);
  }
  else {
    func_0x000107c61174();
    uVar2 = uVar3;
    func_0x000107c3d11c(uVar3);
    func_0x000107c61180();
    func_0x000107c5ddc8();
    func_0x000107c61170(uVar2);
    dVar5 = 1.0;
    if (((1.0 <= param_1) && (param_1 <= dVar4)) && (func_0x000107c5de60(uVar3), param_1 != dVar5))
    {
      func_0x000107c5a564(param_1,uVar3);
    }
    func_0x000107c5d284(uVar3);
    uVar2 = uVar3;
  }
  *(double *)(unaff_x20 + _DAT_112da10c8) = param_1;
  FUN_10035d104();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  FUN_1000285a8(0x112fb0638,&UNK_10dc249d0);
  func_0x000107c6157c(uVar2);
  FUN_1000823a8(&UNK_103927c18,uVar2);
  return;
}



/* Entry: 10035d098; end: 10035d0e3;  */

void FUN_10035d098(undefined8 param_1)

{
  FUN_1000285a8(0x112fb0638,&UNK_10dc249d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103927c18,param_1);
  return;
}



/* Entry: 10035d0e4; end: 10035d103;  */

void FUN_10035d0e4(void)

{
  func_0x000107c61168(&PTR_PTR_1129014f0);
  return;
}



/* Entry: 10035d104; end: 10035d2b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035d104(double param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar3 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168();
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4a758();
  func_0x000107c61170(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112da1120);
    func_0x000107c3d11c(uVar8);
    func_0x000107c61180();
    func_0x000107c5dda0();
    dVar6 = param_1;
    func_0x000107c61170(uVar8);
    dVar7 = (double)SUB84(param_1,0);
  }
  else {
    dVar7 = 67.5642166;
    dVar6 = param_1;
  }
  lVar2 = _DAT_112da10d0;
  func_0x000107c61428(unaff_x20 + _DAT_112da10d0,auStack_58,1,0);
  *(double *)(unaff_x20 + lVar2) = dVar7;
  lVar1 = _DAT_112da10b8;
  lVar5 = unaff_x20 + _DAT_112da10b8;
  func_0x000107c61428(lVar5,auStack_70,0,0);
  if (*(char *)(unaff_x20 + lVar1) == '\x01') {
    dVar6 = *(double *)(unaff_x20 + _DAT_112da10c0);
  }
  else {
    lVar5 = *(long *)(unaff_x20 + _DAT_112da1120);
    func_0x000107c5de60(lVar5);
  }
  if (1.0 < dVar6) {
    dVar6 = *(double *)(unaff_x20 + lVar2);
    dVar7 = dVar6 * 0.5;
    if (*(char *)(unaff_x20 + lVar1) == '\x01') {
      dVar6 = *(double *)(unaff_x20 + _DAT_112da10c0);
    }
    else {
      lVar5 = *(long *)(unaff_x20 + _DAT_112da1120);
      func_0x000107c5de60(lVar5);
    }
    dVar7 = dVar7 * 0.017453292519943295;
    func_0x000107c61670();
    dVar7 = dVar7 / dVar6;
    func_0x000107c60ed0();
    *(double *)(unaff_x20 + lVar2) = dVar7 * 57.29577951308232 + dVar7 * 57.29577951308232;
  }
  FUN_10035d2b4();
  uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(uVar8);
  func_0x000107c4d664(lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 10035d2b4; end: 10035d31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10035d2b4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da10d8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112da10d8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10035d320; end: 10035d373; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl loggingHandler] */

void FUN_10035d320(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  puVar1 = &DAT_112da0d70;
  FUN_1002e9854(&DAT_112da0d70,FUN_10035d374,&DAT_112da0aa8,&DAT_112da0ab0);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10035d374; end: 10035d393;  */

void FUN_10035d374(void)

{
  func_0x000107c61168(&PTR_PTR_1127d83a0);
  return;
}



/* Entry: 10035d394; end: 10035d4cb; -[_TtC26SCCaptureDeviceManagerImpl31CaptureDeviceLoggingHandlerImpl logCameraDecisionEventForDeviceAtPosition:featureNames:format:] */

void FUN_10035d394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x00010035d41c(param_3,param_4,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10035d4cc; end: 10035d4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035d4cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  if (*(long *)(unaff_x20 + _DAT_112da1148) != 0) {
    FUN_100083b20(&uStack_48);
    func_0x000107c5fadc(param_1,param_2);
    lVar1 = param_3;
    if (param_3 == 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112da1120);
      func_0x000107c3d11c(lVar1);
      func_0x000107c61180();
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112da1120);
    func_0x000107c61174(param_3);
    uVar2 = uVar3;
    func_0x000107c41970(uVar3);
    func_0x000107c61180();
    func_0x000107c4eb70(uVar3);
    func_0x000107c4ba54(uStack_48);
    func_0x000107c615e8(uStack_48);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10035d4d0; end: 10035d5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035d4d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  if (*(long *)(unaff_x20 + _DAT_112da1148) != 0) {
    FUN_100083b20(&uStack_48);
    func_0x000107c5fadc(param_1,param_2);
    lVar1 = param_3;
    if (param_3 == 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112da1120);
      func_0x000107c3d11c(lVar1);
      func_0x000107c61180();
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112da1120);
    func_0x000107c61174(param_3);
    uVar2 = uVar3;
    func_0x000107c41970(uVar3);
    func_0x000107c61180();
    func_0x000107c4eb70(uVar3);
    func_0x000107c4ba54(uStack_48);
    func_0x000107c615e8(uStack_48);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10035d5c8; end: 10035d68f;  */

void FUN_10035d5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f2ec28,&UNK_10db73600);
  puVar1 = &UNK_1105f78c0;
  func_0x000107c613fc(&UNK_1105f78c0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(&UNK_102fc1d38,puVar1);
  return;
}



/* Entry: 10035d690; end: 10035d6fb;  */

void FUN_10035d690(void)

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



/* Entry: 10035d6fc; end: 10035d873; -[SCManagedCaptureDeviceLogger logCameraDecisionEventWithFeatureNames:format:deviceType:devicePosition:] */

/* WARNING: Possible PIC construction at 0x00010035d764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010035d7c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010035d80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010035d830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010035d840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010035d850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010035d834) */
/* WARNING: Removing unreachable block (ram,0x00010035d810) */
/* WARNING: Removing unreachable block (ram,0x00010035d7c8) */
/* WARNING: Removing unreachable block (ram,0x00010035d768) */
/* WARNING: Removing unreachable block (ram,0x00010035d844) */
/* WARNING: Removing unreachable block (ram,0x00010035d76c) */
/* WARNING: Removing unreachable block (ram,0x00010035d854) */

void FUN_10035d6fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5acc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10035d874; end: 10035d8e7; -[SCCameraCaptureFormatSelectionFrameworkConfigurationImpl shouldReportCameraDecisionEvent] */

undefined1 FUN_10035d874(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10035d8e8;
  puStack_20 = &UNK_110842e18;
  if (lRam00000001136ba320 != -1) {
    uStack_18 = param_1;
    FUN_10002a2fc(0x1136ba320,&puStack_38);
  }
  return uRam00000001136ba30a;
}



/* Entry: 10035d8e8; end: 10035d943;  */

void FUN_10035d8e8(long param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 uVar2;
  double dVar3;
  
  fVar1 = 0.01;
  uVar2 = 0;
  func_0x000107c436e4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,
                      &PTR____CFConstantStringClassReference_110dd0f98,0);
  dVar3 = (double)fVar1;
  func_0x000107c61698(0);
  func_0x000107c613b0();
  func_0x000107c60fa0();
  uRam00000001136ba30a = (double)CONCAT44(uVar2,fVar1) < dVar3;
  return;
}



/* Entry: 10035d944; end: 10035d99b; -[SCCircumstanceEngineConfigProvider floatValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8 FUN_10035d944(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3cda0();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c436dc(param_2);
    param_1 = uVar1;
  }
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10035d99c; end: 10035da3f;  */

void FUN_10035d99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f12860,&UNK_10db469d0);
  puVar1 = &UNK_1105cab00;
  func_0x000107c613fc(&UNK_1105cab00,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1006ec0b0,puVar1);
  return;
}



/* Entry: 10035da40; end: 10035da5f;  */

void FUN_10035da40(void)

{
  func_0x000107c61168(&PTR_PTR_112f128e0);
  return;
}



/* Entry: 10035da60; end: 10035daaf; -[SCSnapTokenMetricsInfo setKeychainLatency:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035da60(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307e050;
  func_0x000107c61428(param_2 + _DAT_11307e050,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 10035dab0; end: 10035db03; -[SCSnapTokenAccessTokenFetchOperation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010035dac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010035dae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010035dacc) */
/* WARNING: Removing unreachable block (ram,0x00010035dae4) */

void FUN_10035dab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 10035db04; end: 10035db67; -[SCSnapTokenMetricsInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035db04(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_11307e068 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_11307e070 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_11307e078 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307e080));
  return;
}



/* Entry: 10035db68; end: 10035dc33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035db68(float param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_3 + 8);
  if (*(long *)(param_3 + 0x10) != 0) {
    FUN_10010cd00(param_2,*(long *)(param_3 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                  *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_2 + 0x40);
  *(float *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_1;
  if (param_1 == 0.0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_10035dc08;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_10035dc08:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_100109ff0:
  do {
    lVar11 = *(long *)(param_2 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_2 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar11,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar6 + 0x10) != 0) {
      FUN_10010cd00(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                    *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_2, func_0x000107c4adac(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_2 == 0) goto LAB_100109f84;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_2);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_2 = 0;
        uVar8 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
        param_2 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
    param_2 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    func_0x00010029a5f8(uVar9);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
  param_2 = lVar11;
  if (uVar9 == 0) goto FUN_100109ff0;
  lVar10 = lVar6;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar9);
  param_2 = lVar11;
  goto FUN_100109ff0;
}



/* Entry: 10035dc34; end: 10035dc4f;  */

void FUN_10035dc34(undefined8 param_1)

{
  FUN_1000285a8(0x112f12870,&UNK_10db469e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006ec054,param_1);
  return;
}



/* Entry: 10035dc50; end: 10035dc9f;  */

void FUN_10035dc50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035dca0; end: 10035dd7f;  */

void FUN_10035dca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f12c40,&UNK_10db46fc0);
  puVar1 = &UNK_1105cad58;
  func_0x000107c613fc(&UNK_1105cad58,0x48,7);
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
  FUN_1000823a8(&UNK_102d65054,puVar1);
  return;
}



/* Entry: 10035dd80; end: 10035ddf3;  */

void FUN_10035dd80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035ddf4; end: 10035de03;  */

ulong FUN_10035ddf4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar3 = *(long *)(uVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_2 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto LAB_10035de48;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_10035de48:
      func_0x000107c4163c(uVar2);
      return uVar2 & 0xffffffff;
    }
  }
  return (ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 10035de04; end: 10035de63;  */

ulong FUN_10035de04(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_10035de48;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_10035de48:
      func_0x000107c4163c(param_2);
      return param_2 & 0xffffffff;
    }
  }
  return (ulong)*(uint *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
}



/* Entry: 10035de64; end: 10035de8f;  */

undefined ** FUN_10035de64(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de54d8;
  if (param_1 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de54f8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ee6f38;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10035de90; end: 10035dec3; -[SCACameraDecisionEvent setDecisionName:] */

void FUN_10035de90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fba398,3,param_3,0);
  return;
}



/* Entry: 10035dec4; end: 10035df13;  */

void FUN_10035dec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035df14; end: 10035dfcf;  */

void FUN_10035df14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f2ff28,&UNK_10db74dc0);
  puVar1 = &UNK_1105f9338;
  func_0x000107c613fc(&UNK_1105f9338,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1006fa2c4,puVar1);
  return;
}



/* Entry: 10035dfd0; end: 10035dfef;  */

void FUN_10035dfd0(void)

{
  func_0x000107c61168(&PTR_PTR_112f2ffa8);
  return;
}



/* Entry: 10035dff0; end: 10035e00b;  */

void FUN_10035dff0(undefined8 param_1)

{
  FUN_1000285a8(0x112f2ff38,&UNK_10db74dd0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006fa268,param_1);
  return;
}



/* Entry: 10035e00c; end: 10035e05b;  */

void FUN_10035e00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035e05c; end: 10035e07b; -[SCACameraDecisionEvent setDecisionResult:] */

void FUN_10035e05c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fba3b8,4,param_3,0);
  return;
}



/* Entry: 10035e07c; end: 10035e0f3;  */

void FUN_10035e07c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x0001000ad7c4();
  uVar2 = param_2;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a7098;
  func_0x000107c610f8();
  func_0x000107c48208();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  if (puVar3 != (undefined *)0x0) {
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10035e0f4);
  (*pcVar1)();
}



/* Entry: 10035e0f4; end: 10035e197; -[SCCameraSystemBlizzardLogger initWithQueue:systemBlizzard:] */

undefined1 *
FUN_10035e0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e89e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10035e198; end: 10035e1c3;  */

void FUN_10035e198(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035e1c4; end: 10035e2eb;  */

void FUN_10035e1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f1f488,&UNK_10db57e60);
  puVar1 = &UNK_1105db5b0;
  func_0x000107c613fc(&UNK_1105db5b0,0x68,7);
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
  FUN_1000823a8(FUN_1006f97f4,puVar1);
  return;
}



/* Entry: 10035e2ec; end: 10035e3e3; -[SCCameraSystemBlizzardLogger logUserExternallyTrackedEvent:] */

void FUN_10035e2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c5099c(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10035e3e4; end: 10035e403;  */

void FUN_10035e3e4(void)

{
  func_0x000107c61168(&PTR_PTR_112f1f500);
  return;
}


