/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023f104c; end: 1023f15cf;  */

void FUN_1023f104c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar12 = 0;
    do {
      lVar19 = lVar12 + 1;
      if (lVar19 < lVar18) {
        uVar3 = *(ulong *)(*param_3 + lVar19 * 8);
        puVar14 = (undefined8 *)(*param_3 + lVar12 * 8);
        puVar16 = puVar14 + 2;
        uVar20 = *puVar14;
        func_0x000107c61174();
        func_0x000107c61174(uVar20);
        uVar7 = uVar3;
        FUN_1023f09a8(uVar3,uVar20);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar20);
        lVar15 = lVar12 + 2;
        do {
          lVar11 = lVar15;
          lVar19 = lVar18;
          if (lVar18 == lVar11) break;
          uVar3 = puVar16[-1];
          uVar21 = *puVar16;
          func_0x000107c61174();
          func_0x000107c61174();
          uVar4 = uVar21;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f15b4);
            (*pcVar1)();
          }
          uVar5 = uVar4;
          func_0x000107c44430();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          if (uVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f15bc);
            (*pcVar1)();
          }
          uVar4 = uVar5;
          func_0x000107c5bbe8();
          func_0x000107c61170(uVar5);
          uVar5 = uVar3;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (uVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f15c0);
            (*pcVar1)();
          }
          uVar6 = uVar5;
          func_0x000107c44430();
          func_0x000107c61180();
          func_0x000107c61170(uVar5);
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f15b8);
            (*pcVar1)();
          }
          uVar5 = uVar6;
          func_0x000107c5bbe8();
          func_0x000107c61170(uVar21);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar6);
          puVar16 = puVar16 + 1;
          lVar15 = lVar11 + 1;
          lVar19 = lVar11;
        } while ((((uint)uVar7 ^ (uint)(uVar5 <= uVar4)) & 1) != 0);
        if ((uVar7 & 1) != 0) {
          if (lVar19 < lVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1584);
            (*pcVar1)();
          }
          if (lVar12 < lVar19) {
            lVar11 = *param_3;
            puVar13 = (undefined8 *)(lVar11 + lVar19 * 8);
            puVar14 = (undefined8 *)(lVar11 + lVar12 * 8);
            lVar15 = lVar19;
            lVar18 = lVar12;
            do {
              puVar13 = puVar13 + -1;
              lVar15 = lVar15 + -1;
              if (lVar18 != lVar15) {
                if (lVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f15c4);
                  (*pcVar1)();
                }
                uVar20 = *puVar14;
                *puVar14 = *puVar13;
                *puVar13 = uVar20;
              }
              lVar18 = lVar18 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar18 < lVar15);
          }
        }
      }
      lVar18 = param_3[1];
      lVar15 = lVar19;
      if (lVar19 < lVar18) {
        if (SBORROW8(lVar19,lVar12)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1580);
          (*pcVar1)();
        }
        if (lVar19 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1588);
            (*pcVar1)();
          }
          lVar11 = lVar12 + param_4;
          if (lVar18 <= lVar12 + param_4) {
            lVar11 = lVar18;
          }
          if (lVar11 < lVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f158c);
            (*pcVar1)();
          }
          if (lVar19 != lVar11) {
            lVar18 = *param_3;
            puVar16 = (ulong *)(lVar18 + lVar19 * 8 + -8);
            lVar22 = lVar12 - lVar19;
            do {
              uVar7 = *(ulong *)(lVar18 + lVar19 * 8);
              puVar17 = puVar16;
              lVar15 = lVar22;
              do {
                uVar21 = *puVar17;
                func_0x000107c61174();
                func_0x000107c61174();
                uVar3 = uVar7;
                func_0x000107c4f4ec();
                func_0x000107c61180();
                if (uVar3 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f159c);
                  (*pcVar1)();
                }
                uVar4 = uVar3;
                func_0x000107c44430();
                func_0x000107c61180();
                func_0x000107c61170(uVar3);
                if (uVar4 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1594);
                  (*pcVar1)();
                }
                uVar3 = uVar4;
                func_0x000107c5bbe8();
                func_0x000107c61170(uVar4);
                uVar4 = uVar21;
                func_0x000107c4f4ec();
                func_0x000107c61180();
                if (uVar4 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1590);
                  (*pcVar1)();
                }
                uVar5 = uVar4;
                func_0x000107c44430();
                func_0x000107c61180();
                func_0x000107c61170(uVar4);
                if (uVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1598);
                  (*pcVar1)();
                }
                uVar4 = uVar5;
                func_0x000107c5bbe8();
                func_0x000107c61170(uVar7);
                func_0x000107c61170(uVar21);
                func_0x000107c61170(uVar5);
                if (uVar4 <= uVar3) break;
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f15a0);
                  (*pcVar1)();
                }
                uVar3 = *puVar17;
                uVar7 = puVar17[1];
                *puVar17 = uVar7;
                puVar17[1] = uVar3;
                bVar2 = lVar15 != -1;
                lVar15 = lVar15 + 1;
                puVar17 = puVar17 + -1;
              } while (bVar2);
              lVar19 = lVar19 + 1;
              puVar16 = puVar16 + 1;
              lVar22 = lVar22 + -1;
              lVar15 = lVar11;
            } while (lVar19 != lVar11);
          }
        }
      }
      puVar10 = puStack_58;
      if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1574);
        (*pcVar1)();
      }
      puVar8 = puStack_58;
      func_0x000107c61558();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar7 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        func_0x0001000a91e0(puVar10,uVar7 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar7 + 1;
      *(long *)(puVar10 + uVar7 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar10 + uVar7 * 0x10 + 0x28) = lVar15;
      puStack_58 = puVar10;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f15c8);
        (*pcVar1)();
      }
      FUN_1023f174c(&puStack_58,*param_1,param_3);
      puVar10 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1023f1544;
      lVar18 = param_3[1];
      lVar12 = lVar15;
    } while (lVar15 < lVar18);
  }
  puVar10 = puStack_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f15d0);
    (*pcVar1)();
  }
  puVar8 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar8 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar7 = *(ulong *)(puVar10 + 0x10);
  while (puStack_58 = puVar10, 1 < uVar7) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f15cc);
      (*pcVar1)();
    }
    lVar11 = uVar7 - 1;
    lVar15 = *(long *)(puVar10 + uVar7 * 0x10);
    lVar19 = *(long *)(puVar10 + lVar11 * 0x10 + 0x28);
    FUN_1023f19b4(lVar12 + lVar15 * 8,lVar12 + *(long *)(puVar10 + lVar11 * 0x10 + 0x20) * 8,
                  lVar12 + lVar19 * 8,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar19 < lVar15) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1578);
      (*pcVar1)();
    }
    puVar8 = puVar10;
    func_0x000107c61558();
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar10 + 0x10) <= uVar7 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f157c);
      (*pcVar1)();
    }
    *(long *)(puVar10 + uVar7 * 0x10) = lVar15;
    *(long *)((long)(puVar10 + uVar7 * 0x10) + 8) = lVar19;
    puStack_58 = puVar10;
    func_0x0001000a97cc(lVar11);
    puVar10 = puStack_58;
    uVar7 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1023f1544:
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 1023f15d0; end: 1023f174b;  */

void FUN_1023f15d0(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_3 != param_2) {
    lVar11 = *param_4;
    puVar7 = (ulong *)(lVar11 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      uVar3 = *(ulong *)(lVar11 + param_3 * 8);
      puVar8 = puVar7;
      lVar9 = param_1;
      do {
        uVar10 = *puVar8;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1740);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c44430();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1748);
          (*pcVar1)();
        }
        uVar4 = uVar5;
        func_0x000107c5bbe8();
        func_0x000107c61170(uVar5);
        uVar5 = uVar10;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1744);
          (*pcVar1)();
        }
        uVar6 = uVar5;
        func_0x000107c44430();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f173c);
          (*pcVar1)();
        }
        uVar5 = uVar6;
        func_0x000107c5bbe8();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar6);
        if (uVar5 <= uVar4) break;
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f174c);
          (*pcVar1)();
        }
        uVar4 = *puVar8;
        uVar3 = puVar8[1];
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        bVar2 = lVar9 != -1;
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1023f174c; end: 1023f19b3;  */

undefined8 FUN_1023f174c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1023f1820;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f199c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1023f1884:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f198c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f1994);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f1974);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f1978);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f1980);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f1988);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1023f1820:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f197c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f1984);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f1990);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f1998);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1023f1884;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f19a0);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f1968);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f19b4);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1023f19b4(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f196c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f1970);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1023f19b4; end: 1023f1dcf;  */

undefined8 FUN_1023f19b4(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong *puVar15;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar7 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar7 = lVar10;
  }
  lVar7 = lVar7 >> 3;
  lVar14 = (long)param_3 - (long)param_2;
  lVar8 = lVar14 + 7;
  if (-1 < lVar14) {
    lVar8 = lVar14;
  }
  lVar8 = lVar8 >> 3;
  if (lVar7 < lVar8) {
    if (((param_4 < param_1) || (param_1 + lVar7 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar7 << 3);
    }
    puVar13 = param_4 + lVar7;
    puVar6 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        uVar2 = *param_2;
        uVar11 = *param_4;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar3 = uVar2;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1dbc);
          (*pcVar1)();
        }
        uVar4 = uVar3;
        func_0x000107c44430();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1dc0);
          (*pcVar1)();
        }
        uVar3 = uVar4;
        func_0x000107c5bbe8();
        func_0x000107c61170(uVar4);
        uVar4 = uVar11;
        func_0x000107c4f4ec();
        func_0x000107c61180();
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1db4);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c44430();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1db8);
          (*pcVar1)();
        }
        uVar4 = uVar5;
        func_0x000107c5bbe8();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar5);
        if (uVar3 < uVar4) {
          puVar15 = param_4;
          puVar9 = param_2 + 1;
          puVar12 = param_2;
        }
        else {
          puVar15 = param_4 + 1;
          puVar9 = param_2;
          puVar12 = param_4;
        }
        param_2 = puVar9;
        param_4 = puVar15;
        if (puVar6 != puVar12) {
          *puVar6 = *puVar12;
        }
        puVar6 = puVar6 + 1;
      } while (param_4 < puVar13);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar8 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar8 << 3);
    }
    puVar12 = param_4 + lVar8;
    puVar6 = param_2;
    puVar13 = puVar12;
    if ((param_1 < param_2) && (7 < lVar14)) {
      do {
        puVar9 = param_2 + -1;
        puVar15 = param_3;
        while( true ) {
          param_3 = puVar15 + -1;
          puVar13 = puVar12 + -1;
          uVar2 = *puVar13;
          uVar11 = *puVar9;
          func_0x000107c61174();
          func_0x000107c61174();
          uVar3 = uVar2;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1dcc);
            (*pcVar1)();
          }
          uVar4 = uVar3;
          func_0x000107c44430();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1dd0);
            (*pcVar1)();
          }
          uVar3 = uVar4;
          func_0x000107c5bbe8();
          func_0x000107c61170(uVar4);
          uVar4 = uVar11;
          func_0x000107c4f4ec();
          func_0x000107c61180();
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1dc4);
            (*pcVar1)();
          }
          uVar5 = uVar4;
          func_0x000107c44430();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          if (uVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f1dc8);
            (*pcVar1)();
          }
          uVar4 = uVar5;
          func_0x000107c5bbe8();
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(uVar5);
          if (uVar3 < uVar4) break;
          if (puVar15 != puVar12) {
            *param_3 = *puVar13;
          }
          puVar6 = param_2;
          puVar12 = puVar13;
          puVar15 = param_3;
          if (puVar13 <= param_4) goto LAB_1023f1d4c;
        }
        if (puVar15 != param_2) {
          *param_3 = *puVar9;
        }
        puVar6 = puVar9;
        puVar13 = puVar12;
      } while ((param_1 < puVar9) && (param_2 = puVar9, param_4 < puVar12));
    }
  }
LAB_1023f1d4c:
  uVar2 = (long)puVar13 - (long)param_4;
  uVar3 = uVar2 + 7;
  if (-1 < (long)uVar2) {
    uVar3 = uVar2;
  }
  if ((puVar6 != param_4) || ((ulong *)((long)param_4 + (uVar3 & 0xfffffffffffffff8)) <= puVar6)) {
    func_0x000107c610b8(puVar6,param_4,((long)uVar3 >> 3) << 3);
  }
  return 1;
}



/* Entry: 1023f1dd0; end: 1023f1e0f;  */

void FUN_1023f1dd0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1023f1e34();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1023f1e10; end: 1023f1e33;  */

bool FUN_1023f1e10(long param_1)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_100 [4];
  int iStack_fc;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined8 auStack_a8 [3];
  long lStack_90;
  undefined1 auStack_88 [40];
  
  iVar1 = *(int *)(unaff_x20 + 0x10);
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c40c84();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023efda0);
    (*pcVar3)();
  }
  lVar5 = param_1;
  lStack_f8 = lVar11;
  func_0x000107c42ebc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar5 != 0) {
    iStack_fc = iVar1;
    func_0x000107c600f4(puVar10);
    func_0x000100e15a08();
    func_0x000107c601c0(auStack_a8,lVar4,param_1);
    puVar2 = PTR___sypN_11034f1a8;
    do {
      if (lStack_90 == 0) {
        func_0x000107c61170(lVar5);
        (**(code **)(lStack_f8 + 8))(puVar10,lVar4);
        return false;
      }
      func_0x000100102924(auStack_a8,auStack_c8);
      func_0x0001000bb420(auStack_c8,auStack_e8);
      uVar6 = 0;
      FUN_1023f20c0(0,0x112e94db0,&PTR_PTR_1126bce90);
      puVar7 = &uStack_f0;
      func_0x000107c6147c(puVar7,auStack_e8,puVar2 + 8,uVar6,6);
      uVar9 = uStack_f0;
      if ((int)puVar7 != 0) {
        uVar8 = uStack_f0;
        func_0x000107c40c8c();
        func_0x000107c61170(uVar9);
        if ((int)uVar8 == 5) {
          func_0x000107c61170(lVar5);
          (**(code **)(lStack_f8 + 8))(puVar10,lVar4);
          func_0x000100102924(auStack_c8,auStack_88);
          puVar7 = auStack_a8;
          func_0x000107c6147c(puVar7,auStack_88,puVar2 + 8,uVar6,6);
          if (((ulong)puVar7 & 1) == 0) {
            return false;
          }
          uVar9 = auStack_a8[0];
          func_0x000107c5c6ac(auStack_a8[0]);
          func_0x000107c61170(auStack_a8[0]);
          return (int)uVar9 == iStack_fc;
        }
      }
      func_0x000100183ab8(auStack_c8);
      func_0x000107c601c0(auStack_a8,lVar4,param_1);
    } while( true );
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1023efda4);
  (*pcVar3)();
}



/* Entry: 1023f1e34; end: 1023f1f6f;  */

undefined *
FUN_1023f1e34(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023f1f70);
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
    puVar3 = (undefined *)0x112e95138;
    func_0x0001000285a8(0x112e95138,&UNK_10daa03c8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e95140;
    func_0x0001000285a8(0x112e95140,&UNK_10daa03d0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1023f1f70; end: 1023f209f;  */

undefined * FUN_1023f1f70(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1023f20a0);
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
    puVar3 = (undefined *)0x112e95148;
    func_0x0001000285a8(0x112e95148,&UNK_10daa03d8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e95150;
    func_0x0001000285a8(0x112e95150,&UNK_10daa03e0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1023f20a0; end: 1023f20bf;  */

void FUN_1023f20a0(void)

{
  func_0x000107c61168(&PTR_PTR_112e95090);
  return;
}



/* Entry: 1023f20c0; end: 1023f20ff;  */

void FUN_1023f20c0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023f2100; end: 1023f2107;  */

void FUN_1023f2100(long param_1,long param_2)

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



/* Entry: 1023f2108; end: 1023f21a3;  */

/* WARNING: Possible PIC construction at 0x0001023f2134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f2180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023f2138) */
/* WARNING: Removing unreachable block (ram,0x0001023f2184) */

void FUN_1023f2108(long param_1)

{
  undefined *puVar1;
  
  func_0x000107c42a28();
  func_0x000107c61180();
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c5ed90();
    func_0x000107c46114(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1023f21a4; end: 1023f21c3;  */

/* WARNING: Possible PIC construction at 0x0001023f2134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f2180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023f2138) */
/* WARNING: Removing unreachable block (ram,0x0001023f2184) */

void FUN_1023f21a4(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c42a28(lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)));
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c5ed90();
    func_0x000107c46114(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1023f21c4; end: 1023f223f; +[_TtC19TextToSpeechHelpers28TextToSpeechObjcAssetHelpers dataFor:temporaryFileWriter:completion:] */

/* WARNING: Possible PIC construction at 0x0001023f2228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023f222c) */

void FUN_1023f21c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  FUN_1023f282c(param_3,param_4,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1023f2240; end: 1023f225f;  */

void FUN_1023f2240(void)

{
  func_0x000107c61168(&PTR_PTR_11283bc18);
  return;
}



/* Entry: 1023f2260; end: 1023f229b; -[_TtC19TextToSpeechHelpers28TextToSpeechObjcAssetHelpers init] */

void FUN_1023f2260(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1023f2240();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023f229c; end: 1023f22cb;  */

void FUN_1023f229c(void)

{
  FUN_1023f2240();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023f22cc; end: 1023f243f;  */

/* WARNING: Possible PIC construction at 0x0001023f23d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f241c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023f23d4) */

void FUN_1023f22cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1023f2bb8();
  if (lVar1 == 0) {
    func_0x000107c602fc(0x22);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5edf8(param_1,param_2);
    func_0x000107c5fb78();
    func_0x000107c6142c(param_2);
    lVar1 = 0x737474;
    func_0x000107c5fadc(0x737474,0xe300000000000000);
    func_0x000107c5fadc(0xd000000000000020,0x800000010f097af0);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
  }
  else {
    FUN_1023f3958(0);
    FUN_1023f30a0(lVar1,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1023f2440; end: 1023f2443;  */

undefined * FUN_1023f2440(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [104];
  
  uVar1 = *(undefined8 *)PTR__kUTTypeWaveformAudio_11034b218;
  uVar6 = param_2;
  func_0x000107c5faec(uVar1);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  puVar7 = auStack_a8;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__AVURLAssetPreferPreciseDurationAndTimingKey_1103480f8;
  func_0x000107c5faec();
  uStack_b8 = uVar3;
  puStack_b0 = puVar7;
  func_0x000107c61434(puVar7);
  func_0x000107c602d4(lVar2 + 0x20,&uStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar2 + 0x60) = PTR___sSbN_11034dd40;
  func_0x000107c6142c(puVar7);
  *(undefined1 *)(lVar2 + 0x48) = 1;
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  func_0x000107c5ee20(param_1,param_2);
  func_0x000107c5fadc(uVar1,uVar6);
  func_0x000107c6142c(uVar6);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  func_0x000107c46364(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 1023f2444; end: 1023f27ab;  */

undefined *
FUN_1023f2444(double param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4,ulong param_5
             ,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined *puStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  ulong uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
  puVar5 = param_3;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar14 = *(undefined8 **)PTR__AVMediaTypeAudio_110348070;
  puVar12 = puVar14;
  puStack_100 = puVar9;
  func_0x000107c3d780();
  func_0x000107c61180();
  puVar7 = puStack_100;
  if (puVar9 == (undefined *)0x0) {
LAB_1023f26bc:
    func_0x000107c61170(puVar7);
  }
  else {
    FUN_1023f2bb8();
    if (param_2 == (undefined *)0x0) {
      func_0x000107c61170(puVar9);
      puVar7 = puStack_100;
      puVar5 = param_3;
      goto LAB_1023f26bc;
    }
    func_0x000107c61174();
    puVar7 = param_2;
    func_0x000107c5ce80();
    func_0x000107c61180();
    puVar5 = (undefined8 *)0x0;
    func_0x000102159a9c();
    puVar6 = puVar7;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar7);
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar7 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      puVar12 = puVar14;
    }
    else {
      puVar7 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar7 = puVar6;
      }
      func_0x000107c60480();
      puVar12 = puVar14;
    }
    if (puVar7 == (undefined *)0x0) {
      func_0x000107c6142c(puVar6);
      func_0x000107c61170(puStack_100);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(param_2);
      puVar7 = param_2;
      goto LAB_1023f26bc;
    }
    uStack_110 = param_4;
    uStack_108 = param_6;
    if (((ulong)puVar6 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f27a8);
        (*pcVar4)();
      }
      uVar8 = *(undefined8 *)(puVar6 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar8 = 0;
      func_0x000100f95fe8(0,puVar6);
    }
    uStack_128 = param_5 >> 0x20;
    uStack_118 = uVar8;
    func_0x000107c6142c(puVar6);
    uVar15 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar1 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar2 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    uVar13 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    func_0x000107c42378(&uStack_f0,param_2);
    uVar8 = uStack_f0;
    func_0x000107c61170(param_2);
    uStack_b0 = uStack_e0;
    uStack_c0 = uVar8;
    uStack_b8 = uStack_e8;
    uStack_a8 = uVar15;
    uStack_a0 = uVar1;
    uStack_9c = uVar2;
    uStack_98 = uVar13;
    func_0x000107c60a58(&uStack_f0,&uStack_a8,&uStack_c0);
    uVar3 = uStack_c8;
    uVar10 = uStack_d8;
    uVar11 = uStack_f0;
    uStack_c0 = uStack_110;
    uStack_b8 = CONCAT44((int)uStack_128,(int)param_5);
    uStack_b0 = uStack_108;
    puVar5 = &uStack_c0;
    puStack_120 = param_2;
    uStack_a8 = uVar15;
    uStack_a0 = uVar1;
    uStack_9c = uVar2;
    uStack_98 = uVar13;
    func_0x000107c60a58(&uStack_f0,&uStack_a8);
    uVar8 = uStack_118;
    uStack_110 = uStack_d8;
    uStack_108 = uStack_f0;
    uStack_128 = uStack_c8;
    uStack_c0 = 0;
    puVar12 = &uStack_f0;
    puVar7 = puVar9;
    uStack_f0 = uVar11;
    uStack_d8 = uVar10;
    uStack_c8 = uVar3;
    uStack_a8 = uVar15;
    uStack_a0 = uVar1;
    uStack_9c = uVar2;
    uStack_98 = uVar13;
    func_0x000107c49790();
    uVar11 = uStack_c0;
    if ((int)puVar7 != 0) {
      func_0x000107c61174(uStack_c0);
      uStack_f0 = uStack_108;
      uStack_d8 = uStack_110;
      uStack_c8 = uStack_128;
      puVar12 = &uStack_f0;
      func_0x000107c49724(puVar9);
      func_0x000107c61170(puStack_120);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(puVar9);
      puVar9 = puStack_100;
      goto LAB_1023f26c4;
    }
    uVar10 = uStack_c0;
    func_0x000107c61174(uStack_c0);
    func_0x000107c5ed30(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61654();
    func_0x000107c61170(puStack_120);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puStack_100);
    func_0x000107c61170(puVar9);
    func_0x000107c614ac(uVar11);
  }
  puVar9 = (undefined *)0x0;
LAB_1023f26c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar9;
  }
  func_0x000107c60e78();
  pcStack_138 = FUN_1023f27ac;
  uStack_150 = SUB84(puVar5,0);
  uStack_14c = (undefined4)((ulong)puVar5 >> 0x20);
  puStack_158 = puVar9;
  puStack_148 = puVar12;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000107c60a3c(&puStack_158);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f2824);
    (*pcVar4)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f2828);
    (*pcVar4)();
  }
  if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1023f282c);
    (*pcVar4)();
  }
  return (undefined *)(long)param_1;
}



/* Entry: 1023f27ac; end: 1023f282b;  */

long FUN_1023f27ac(double param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c60a3c(&uStack_28);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f2824);
    (*pcVar1)();
  }
  if (-1.0 < param_1) {
    if (param_1 < 1.8446744073709552e+19) {
      return (long)param_1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f282c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f2828);
  (*pcVar1)();
}



/* Entry: 1023f282c; end: 1023f2bb7;  */

/* WARNING: Possible PIC construction at 0x0001023f2924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f2980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f2998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f2a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f2adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f2af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f2b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f2b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023f2b1c) */
/* WARNING: Removing unreachable block (ram,0x0001023f2afc) */
/* WARNING: Removing unreachable block (ram,0x0001023f2ae0) */
/* WARNING: Removing unreachable block (ram,0x0001023f2a04) */
/* WARNING: Removing unreachable block (ram,0x0001023f299c) */
/* WARNING: Removing unreachable block (ram,0x0001023f2b74) */
/* WARNING: Removing unreachable block (ram,0x0001023f29c4) */
/* WARNING: Removing unreachable block (ram,0x0001023f2984) */
/* WARNING: Removing unreachable block (ram,0x0001023f2928) */
/* WARNING: Removing unreachable block (ram,0x0001023f2b94) */

void FUN_1023f282c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x12;
  long lVar3;
  long lVar4;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = &UNK_110501178;
  func_0x000107c613fc(&UNK_110501178,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  if (param_1 == 0) {
    func_0x000107c60bc4(param_3);
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    func_0x000107c60bc4(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_2 != 0) {
      puStack_a8 = auStack_b0 + (-extraout_x12 - (lVar3 + 0xfU & 0xfffffffffffffff0));
      lStack_a0 = lVar4;
      lStack_98 = lVar1;
      func_0x00010011df08();
      func_0x000107c61180();
      func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1023f2bb8; end: 1023f2d43;  */

undefined * FUN_1023f2bb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [104];
  
  uVar1 = *(undefined8 *)PTR__kUTTypeWaveformAudio_11034b218;
  uVar6 = param_2;
  func_0x000107c5faec(uVar1);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  puVar7 = auStack_a8;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__AVURLAssetPreferPreciseDurationAndTimingKey_1103480f8;
  func_0x000107c5faec();
  uStack_b8 = uVar3;
  puStack_b0 = puVar7;
  func_0x000107c61434(puVar7);
  func_0x000107c602d4(lVar2 + 0x20,&uStack_b8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar2 + 0x60) = PTR___sSbN_11034dd40;
  func_0x000107c6142c(puVar7);
  *(undefined1 *)(lVar2 + 0x48) = 1;
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  func_0x000107c5ee20(param_1,param_2);
  func_0x000107c5fadc(uVar1,uVar6);
  func_0x000107c6142c(uVar6);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  func_0x000107c46364(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 1023f2d44; end: 1023f2d63;  */

undefined1  [16] FUN_1023f2d44(void)

{
  return ZEXT816(0x110501158);
}



/* Entry: 1023f2d64; end: 1023f2dd7;  */

void FUN_1023f2d64(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023f2dd8; end: 1023f2e0b;  */

/* WARNING: Possible PIC construction at 0x0001023f2134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023f2180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023f2138) */
/* WARNING: Removing unreachable block (ram,0x0001023f2184) */

void FUN_1023f2dd8(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c42a28(lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)));
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c5ed90();
    func_0x000107c46114(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1023f2e0c; end: 1023f2e27;  */

void FUN_1023f2e0c(long param_1,long param_2)

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



/* Entry: 1023f2e28; end: 1023f2ec3;  */

long FUN_1023f2e28(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x000107c44a6c();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f2ec0);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c448c8();
    func_0x000107c61170(lVar2);
    if ((int)lVar3 != 0) {
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c44430();
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        return lVar2;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f2ec4);
      (*pcVar1)();
    }
  }
  return 0;
}



/* Entry: 1023f2ec4; end: 1023f2f73;  */

void FUN_1023f2ec4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1023f2bb8();
  if (param_1 != 0) {
    FUN_1023f3958(0);
    puVar1 = &UNK_110501210;
    func_0x000107c613fc(&UNK_110501210,0x28,7);
    *(code **)(puVar1 + 0x10) = param_4;
    *(undefined8 *)(puVar1 + 0x18) = param_5;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    func_0x000107c6157c(param_5);
    FUN_1023f30a0(param_1,FUN_1023f3084,puVar1);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  (*param_4)();
  return;
}



/* Entry: 1023f2f74; end: 1023f3083;  */

void FUN_1023f2f74(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,code *param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  if (param_5 == 0) {
    puVar2 = PTR_PTR_1126afff0;
    func_0x000107c610f8(PTR_PTR_1126afff0);
    func_0x000107c453e4();
    func_0x000107c597e0();
    uStack_60 = (undefined4)param_3;
    uStack_5c = (undefined4)((ulong)param_3 >> 0x20);
    uStack_68 = param_2;
    uStack_58 = param_4;
    func_0x000107c60a3c(&uStack_68);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f307c);
      (*pcVar1)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f3080);
      (*pcVar1)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f3084);
      (*pcVar1)();
    }
    func_0x000107c54358(puVar2);
    puVar3 = puVar2;
    func_0x000107c61174(puVar2);
    (*param_6)(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
  }
  else {
    (*param_6)(0);
  }
  return;
}



/* Entry: 1023f3084; end: 1023f309f;  */

void FUN_1023f3084(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_5 == 0) {
    puVar2 = PTR_PTR_1126afff0;
    func_0x000107c610f8(PTR_PTR_1126afff0);
    func_0x000107c453e4();
    func_0x000107c597e0();
    uStack_60 = (undefined4)param_3;
    uStack_5c = (undefined4)((ulong)param_3 >> 0x20);
    uStack_68 = param_2;
    uStack_58 = param_4;
    func_0x000107c60a3c(&uStack_68);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f307c);
      (*pcVar1)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f3080);
      (*pcVar1)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f3084);
      (*pcVar1)();
    }
    func_0x000107c54358(puVar2);
    puVar3 = puVar2;
    func_0x000107c61174(puVar2);
    (*pcVar1)(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar3);
  }
  else {
    (*pcVar1)(0);
  }
  return;
}



/* Entry: 1023f30a0; end: 1023f314b;  */

/* WARNING: Possible PIC construction at 0x0001023f3130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023f3134) */

void FUN_1023f30a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105012f8;
  func_0x000107c613fc(&UNK_1105012f8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001001ca524(0,3,0x50,4,0,0,&UNK_10daa0498,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1023f314c; end: 1023f3167;  */

void FUN_1023f314c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1023f3168,0,0);
  return;
}



/* Entry: 1023f3168; end: 1023f325f;  */

void FUN_1023f3168(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = 0x112d56380;
  func_0x0001000285a8(0x112d56380,&UNK_10d91d070);
  func_0x000107c5f060();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlFTu_11034d5c0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1023f3260;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlF_11034d5b8
    )(plVar3,unaff_x22 + 0x60,uVar2,0,0);
    return;
  }
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1023f32f4;
                    /* WARNING: Could not recover jumptable at 0x0001023f325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_10104184c)(uVar2,0,0);
  return;
}



/* Entry: 1023f3260; end: 1023f32f3;  */

void FUN_1023f3260(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x40));
  uVar2 = *(undefined8 *)(lVar3 + 0x38);
  if (unaff_x20 == 0) {
    func_0x000107c61574(uVar2);
    uVar2 = NEON_rev64(*(undefined8 *)(lVar3 + 0x68),4);
    *(undefined8 *)(lVar3 + 0x90) = uVar2;
    *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar3 + 0x70);
    *(undefined8 *)(lVar3 + 0x58) = *(undefined8 *)(lVar3 + 0x60);
    pcVar1 = FUN_1023f3390;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c61574(uVar2);
    pcVar1 = FUN_1023f3568;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1023f32f4; end: 1023f338f;  */

void FUN_1023f32f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  uVar2 = *(undefined8 *)(lVar3 + 0x38);
  if (unaff_x20 == 0) {
    func_0x000107c61574(uVar2);
    *(int *)(lVar3 + 0x90) = (int)((ulong)param_2 >> 0x20);
    *(int *)(lVar3 + 0x94) = (int)param_2;
    *(undefined8 *)(lVar3 + 0x50) = param_3;
    *(undefined8 *)(lVar3 + 0x58) = param_1;
    pcVar1 = FUN_1023f3390;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c61574(uVar2);
    pcVar1 = FUN_1023f3568;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1023f3390; end: 1023f3567;  */

void FUN_1023f3390(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x58);
  uVar5 = CONCAT44(*(undefined4 *)(unaff_x22 + 0x90),*(undefined4 *)(unaff_x22 + 0x94));
  func_0x000107c5f978(uVar2,uVar5,*(undefined8 *)(unaff_x22 + 0x50));
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(unaff_x22 + 0x58);
    func_0x000107c5f97c(uVar2,uVar5,*(undefined8 *)(unaff_x22 + 0x50));
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(unaff_x22 + 0x58);
      func_0x000107c5f984(uVar2,uVar5,*(undefined8 *)(unaff_x22 + 0x50));
      if ((uVar2 & 1) == 0) {
        uVar2 = *(ulong *)(unaff_x22 + 0x58);
        func_0x000107c5f980(uVar2,uVar5,*(undefined8 *)(unaff_x22 + 0x50));
        if ((uVar2 & 1) == 0) {
          (**(code **)(unaff_x22 + 0x28))
                    (*(undefined8 *)(unaff_x22 + 0x58),uVar5,*(undefined8 *)(unaff_x22 + 0x50),0);
          goto LAB_1023f352c;
        }
      }
    }
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  pcVar1 = *(code **)(unaff_x22 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c602fc(0x1d);
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0xe000000000000000;
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f097b40);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar6;
  uVar6 = NEON_rev64(uVar7,4);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
  uVar5 = 0;
  func_0x000100f6e404(0);
  func_0x000107c603d0(unaff_x22 + 0x78,unaff_x22 + 0x10,uVar5,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar7 = 0x6f69647561;
  func_0x000107c5fadc(0x6f69647561,0xe500000000000000);
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar4 = puVar3;
  func_0x000107c61174(puVar3);
  (*pcVar1)(uVar5,uVar6,uVar7,puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
LAB_1023f352c:
                    /* WARNING: Could not recover jumptable at 0x0001023f354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1023f3568; end: 1023f365b;  */

void FUN_1023f3568(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(unaff_x22 + 0x28);
  uVar2 = 0x6f69647561;
  func_0x000107c5fadc(0x6f69647561,0xe500000000000000);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f097b20);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar3 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar5 = puVar4;
  func_0x000107c61174(puVar4);
  (*pcVar1)(uVar2,uVar3,uVar6,puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x0001023f3658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1023f365c; end: 1023f36bb;  */

void FUN_1023f365c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1023f3b8c;
  plVar3[5] = lVar2;
  plVar3[6] = lVar4;
  plVar3[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1023f3168,0,0);
  return;
}



/* Entry: 1023f36bc; end: 1023f37a7; +[SCAudioEffectsAssetHelpers durationFor:completion:] */

/* WARNING: Possible PIC construction at 0x0001023f377c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023f3780) */

void FUN_1023f36bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110501320;
  func_0x000107c613fc(&UNK_110501320,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_110501348;
  func_0x000107c613fc(&UNK_110501348,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(code **)(puVar2 + 0x18) = FUN_1023f39e4;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(puVar1);
  func_0x0001001ca524(0,3,0x50,4,0,0,&UNK_10daa04e8,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1023f37a8; end: 1023f382b;  */

void FUN_1023f37a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5ed2c(param_4);
  }
  uStack_50 = (undefined4)param_2;
  uStack_4c = (undefined4)((ulong)param_2 >> 0x20);
  uStack_58 = param_1;
  uStack_48 = param_3;
  (**(code **)(param_5 + 0x10))(param_5,&uStack_58,param_4);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1023f382c; end: 1023f3957; +[SCAudioEffectsAssetHelpers avAssetWithData:] */

void FUN_1023f382c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  
  lVar2 = 0;
  func_0x000107c5f11c();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c5ee30(param_3);
  uVar6 = param_2;
  func_0x000107c61170(uVar3);
  func_0x000107c5f100(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5f0f0();
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  puVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8();
  uVar5 = param_3;
  func_0x000107c5ee20(param_3,param_2);
  func_0x000107c5fadc(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c46360();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  if (puVar4 != (undefined *)0x0) {
    func_0x00010006c090(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023f3958);
  (*pcVar1)();
}



/* Entry: 1023f3958; end: 1023f3977;  */

void FUN_1023f3958(void)

{
  func_0x000107c61168(&PTR_PTR_11283bcc8);
  return;
}



/* Entry: 1023f3978; end: 1023f39b3; -[SCAudioEffectsAssetHelpers init] */

void FUN_1023f3978(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_1023f3958();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023f39b4; end: 1023f39e3;  */

void FUN_1023f39b4(void)

{
  FUN_1023f3958();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023f39e4; end: 1023f39eb;  */

void FUN_1023f39e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5ed2c(param_4);
  }
  uStack_50 = (undefined4)param_2;
  uStack_4c = (undefined4)((ulong)param_2 >> 0x20);
  uStack_58 = param_1;
  uStack_48 = param_3;
  (**(code **)(lVar1 + 0x10))(lVar1,&uStack_58,param_4);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1023f39ec; end: 1023f3a17;  */

void FUN_1023f39ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1023f3a18; end: 1023f3a77;  */

void FUN_1023f3a18(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1023f3a78;
  plVar3[5] = lVar2;
  plVar3[6] = lVar4;
  plVar3[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1023f3168,0,0);
  return;
}



/* Entry: 1023f3a78; end: 1023f3aef;  */

void FUN_1023f3a78(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001023f3ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1023f3af0; end: 1023f3b8b;  */

/* WARNING: Removing unreachable block (ram,0x0001023f3b44) */

void FUN_1023f3af0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  iVar1 = *(int *)(unaff_x22 + 0xb8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  if (iVar1 == 0) {
    func_0x000101041ad4();
    *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
    *(int *)(unaff_x22 + 0x58) = (int)param_2;
    *(int *)(unaff_x22 + 0x5c) = (int)((ulong)param_2 >> 0x20);
  }
  else {
    func_0x000107c60098(unaff_x22 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x0001023f3b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1023f3b8c; end: 1023f3ba3;  */

void FUN_1023f3b8c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001023f3ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1023f3ba4; end: 1023f3c4f;  */

void FUN_1023f3ba4(void)

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



/* Entry: 1023f3c50; end: 1023f3c5f;  */

void FUN_1023f3c50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1023f3c60; end: 1023f3dc3;  */

undefined8 FUN_1023f3c60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112dc2ae8,&UNK_10daa04f0);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = &UNK_110501448;
  func_0x000107c613fc(&UNK_110501448,0x38,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c();
  func_0x000107c61174(param_1);
  func_0x0001001ca524(param_3,0,0x2c,3,0,0,&UNK_10daa0500,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_3);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar1);
  uVar3 = 0;
  func_0x0001023f597c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = 0;
  func_0x000100775264(0,1,FUN_1023f3dc4,0,uVar3);
  func_0x000107c61574(uVar5);
  func_0x00010488b12c();
  func_0x000107c61574(uVar4);
  return uVar5;
}



/* Entry: 1023f3dc4; end: 1023f3e1b;  */

void FUN_1023f3dc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  func_0x0001023f597c(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5fc48(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1023f3e1c; end: 1023f3e87; -[_TtC22ContentRecognitionImpl30ContentRecognitionProviderImpl foregroundInstancesWithImage:instanceType:attributedPage:] */

void FUN_1023f3e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_1023f3c60(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023f3e88; end: 1023f3ef7;  */

void FUN_1023f3e88(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1023f3ef8;
  plVar1[5] = param_6;
  plVar1[6] = param_3;
  plVar1[3] = param_4;
  plVar1[4] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1023f40b4,0,0);
  return;
}



/* Entry: 1023f3ef8; end: 1023f3f63;  */

void FUN_1023f3ef8(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x50) = param_1;
    pcVar1 = FUN_1023f3f64;
  }
  else {
    pcVar1 = FUN_1023f3fa8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1023f3f64; end: 1023f3fa7;  */

void FUN_1023f3f64(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  func_0x000100b60084();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001023f3fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1023f3fa8; end: 1023f4017;  */

void FUN_1023f3fa8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c614cc(uVar2,unaff_x22 + 0x28,unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x18),uVar1);
  func_0x000107c6142c(uVar1);
  func_0x00010488ade0(uVar2);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001023f4014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1023f4018; end: 1023f4097;  */

void FUN_1023f4018(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1023f5ba4;
  plVar6[7] = lVar1;
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  plVar6[8] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_1023f3ef8;
  plVar5[5] = lVar7;
  plVar5[6] = lVar3;
  plVar5[3] = lVar2;
  plVar5[4] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1023f40b4,0,0);
  return;
}



/* Entry: 1023f4098; end: 1023f40b3;  */

void FUN_1023f4098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1023f40b4,0,0);
  return;
}



/* Entry: 1023f40b4; end: 1023f41c7;  */

void FUN_1023f40b4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar2 = &UNK_110501470;
  func_0x000107c613fc(&UNK_110501470,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  func_0x000107c6157c(uVar6);
  func_0x000107c61174(uVar3);
  uVar3 = 0x112dc2af0;
  func_0x0001000285a8(0x112dc2af0,&UNK_10d97f948);
  func_0x000100859150(uVar4,0,0x2c,3,0,0,&UNK_10daa0520,puVar2,uVar3);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
  func_0x000107c61574(puVar2);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1023f41c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (unaff_x22 + 0x10,uVar4,uVar3,uVar6,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 1023f41c8; end: 1023f428b;  */

void FUN_1023f41c8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    uVar1 = 0x1023f4224;
  }
  else {
    uVar1 = 0x1023f4258;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 1023f428c; end: 1023f42a7;  */

void FUN_1023f428c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1023f42a8,0,0);
  return;
}



/* Entry: 1023f42a8; end: 1023f436b;  */

/* WARNING: Removing unreachable block (ram,0x0001023f42fc) */

void FUN_1023f42a8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x20);
  if (lVar2 == 2) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    FUN_1023f55ac();
  }
  else if (lVar2 == 1) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    FUN_1023f539c();
  }
  else {
    if (lVar2 != 0) {
      *(long *)(unaff_x22 + 0x10) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                (&UNK_1105059f8,(long *)(unaff_x22 + 0x10),&UNK_1105059f8,PTR___sSiN_11034deb0);
      return;
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    FUN_1023f50a8();
  }
  **(undefined8 **)(unaff_x22 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001023f4338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1023f436c; end: 1023f43d7;  */

void FUN_1023f436c(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1023f43d8;
  plVar2[4] = lVar1;
  plVar2[5] = lVar3;
  plVar2[3] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1023f42a8,0,0);
  return;
}



/* Entry: 1023f43d8; end: 1023f4413;  */

void FUN_1023f43d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001023f4410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1023f4414; end: 1023f4423;  */

void FUN_1023f4414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023f4424; end: 1023f4533;  */

undefined8 FUN_1023f4424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112dc2ae8,&UNK_10daa04f0);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = &UNK_1105014b0;
  func_0x000107c613fc(&UNK_1105014b0,0x38,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c();
  func_0x000107c61174(param_1);
  func_0x0001001ca524(param_3,0,0x2c,3,0,0,&UNK_10daa0580,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_3);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(lVar1);
  return uVar3;
}



/* Entry: 1023f4534; end: 1023f4597;  */

void FUN_1023f4534(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1023f4598;
  plVar1[5] = param_3;
  plVar1[6] = unaff_x20;
  plVar1[3] = param_1;
  plVar1[4] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1023f40b4,0,0);
  return;
}



/* Entry: 1023f4598; end: 1023f45df;  */

void FUN_1023f4598(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001023f45dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1023f45e0; end: 1023f468f;  */

undefined * FUN_1023f45e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x000107c610f8(PTR__OBJC_CLASS___CIImage_1126b3128);
  func_0x000107c45b18();
  puVar2 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c42c78(puVar1);
  puVar3 = puVar2;
  func_0x000107c4094c(puVar2,param_2,puVar1);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c45b00();
  }
  else {
    func_0x000107c45af0();
    func_0x000107c61170(puVar1);
    puVar1 = puVar3;
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 1023f4690; end: 1023f46e3;  */

void FUN_1023f4690(void)

{
  func_0x000107c61168(&PTR_PTR_112e951e8);
  return;
}



/* Entry: 1023f46e4; end: 1023f4763;  */

void FUN_1023f46e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1023f4764;
  plVar6[7] = lVar1;
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  plVar6[8] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_1023f3ef8;
  plVar5[5] = lVar7;
  plVar5[6] = lVar3;
  plVar5[3] = lVar2;
  plVar5[4] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1023f40b4,0,0);
  return;
}



/* Entry: 1023f4764; end: 1023f479f;  */

void FUN_1023f4764(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001023f479c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1023f47a0; end: 1023f49db;  */

void FUN_1023f47a0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001023f597c(0,param_1,param_2);
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



/* Entry: 1023f49dc; end: 1023f4c33;  */

undefined1 * FUN_1023f49dc(undefined1 *param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar15;
  long extraout_x12;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long alStack_180 [8];
  long alStack_140 [2];
  code *pcStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 auStack_d8 [4];
  long lStack_b8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = 0x112d79948;
  FUN_1023f47a0(0x112d79948,&PTR__OBJC_CLASS___VNRequest_1126a6c80,0x112d79940,&UNK_10daa0590);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 3;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined1 **)(lVar7 + 0x20) = param_1;
  puVar3 = (undefined1 *)0x0;
  func_0x0001023f597c(0,0x112d79948,&PTR__OBJC_CLASS___VNRequest_1126a6c80);
  func_0x000107c61174();
  lVar8 = lVar7;
  func_0x000107c5fc48();
  func_0x000107c61574(lVar7);
  puStack_50 = (undefined1 *)0x0;
  func_0x000107c4e5b0();
  func_0x000107c61170(lVar8);
  if (param_2 == 0) {
    puVar5 = puStack_50;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
  }
  else {
    func_0x000107c61174();
    func_0x000107c50700();
    func_0x000107c61180();
    puVar3 = param_1;
    if (param_1 != (undefined1 *)0x0) {
      uVar4 = 0;
      func_0x0001023f597c(0,0x112e95260,&PTR__OBJC_CLASS___VNObservation_1126aa788);
      func_0x000107c5fc54(param_1,uVar4);
      func_0x000107c61170(param_1);
      if ((ulong)puVar3 >> 0x3e == 0) {
        puVar5 = *(undefined1 **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined1 *)((ulong)puVar3 & 0xffffffffffffff8);
        if ((undefined1 *)0x7fffffffffffffff < puVar3) {
          puVar5 = puVar3;
        }
        func_0x000107c60480();
      }
      if (puVar5 == (undefined1 *)0x0) {
        func_0x000107c6142c();
      }
      else {
        if (((ulong)puVar3 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1023f4c30);
            (*pcVar2)();
          }
          puVar6 = *(undefined1 **)(puVar3 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar6 = (undefined1 *)0x0;
          func_0x0001023f4818(0,puVar3);
        }
        func_0x000107c6142c(puVar3);
        puVar3 = PTR__OBJC_CLASS___VNInstanceMaskObservation_1126aa790;
        func_0x000107c61168();
        puVar5 = puVar6;
        func_0x000107c6148c();
        if (puVar5 != (undefined1 *)0x0) goto LAB_1023f4be8;
        func_0x000107c61170();
        puVar3 = puVar6;
      }
    }
    FUN_1023f58f4();
    puVar5 = &UNK_110501548;
    func_0x000107c613f8(&UNK_110501548,puVar3,0,0);
    *puVar3 = 0;
  }
  func_0x000107c61654();
LAB_1023f4be8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  func_0x000107c60e78();
  pcStack_58 = FUN_1023f4c34;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = 0;
  puStack_120 = puVar3;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107c5ef68();
  lStack_110 = *(long *)(lVar7 + -8);
  lStack_108 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_110 + 0x40));
  lVar19 = (long)alStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  lStack_118 = lVar19;
  func_0x000107c5ef8c();
  puVar3 = PTR___s10Foundation8IndexSetVMa_110350e28;
  uVar18 = *(ulong *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar18 + 0x40));
  lVar19 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar19 - extraout_x12;
  lVar7 = 0x112e95248;
  func_0x0001000285a8(0x112e95248,&UNK_10daa0588);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar16 - extraout_x8_01;
  puStack_128 = puVar5;
  func_0x000107c3db58(puVar5);
  func_0x000107c61180();
  func_0x000107c5ef74(lVar16);
  func_0x000107c61170(puVar5);
  func_0x000107c5ef6c(lVar20);
  pcStack_130 = *(code **)(uVar18 + 8);
  (*pcStack_130)(lVar16,lVar8);
  lVar7 = (long)*(int *)(lVar7 + 0x24);
  uVar4 = 0x112e95250;
  FUN_1023f5b64(0x112e95250,puVar3,PTR___s10Foundation8IndexSetVSlAAMc_110350e38);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  alStack_140[1] = lVar7;
  while( true ) {
    lVar16 = lStack_118;
    func_0x000107c5fe94(lStack_118,lVar8,uVar4);
    uVar17 = 0x112e95258;
    FUN_1023f5b64(0x112e95258,PTR___s10Foundation8IndexSetV0B0VMa_110350dd8,
                  PTR___s10Foundation8IndexSetV0B0VSQAAMc_110350de0);
    lVar1 = lStack_108;
    uVar15 = lVar20 + lVar7;
    func_0x000107c5fab8(uVar15,lVar16,lStack_108,uVar17);
    (**(code **)(lStack_110 + 8))(lVar16,lVar1);
    if ((uVar15 & 1) != 0) break;
    pcVar2 = (code *)auStack_d8;
    puVar14 = (undefined8 *)(lVar20 + lVar7);
    func_0x000107c5fed0(pcVar2,puVar14,lVar8,uVar4);
    uVar17 = *puVar14;
    (*pcVar2)(auStack_d8,0);
    func_0x000107c5fe98(lVar20 + lVar7,lVar8,uVar4);
    func_0x000107c5ef80(lVar19,uVar17);
    func_0x000107c5ef70();
    auStack_d8[0] = 0;
    puVar5 = puStack_128;
    func_0x000107c43ddc();
    func_0x000107c61170(uVar17);
    uVar17 = auStack_d8[0];
    if (puVar5 == (undefined1 *)0x0) {
      uVar9 = auStack_d8[0];
      func_0x000107c61174(auStack_d8[0]);
      func_0x000107c5ed30(uVar17);
      func_0x000107c61170(uVar9);
      func_0x000107c61654();
      func_0x000107c614cc(uVar17,auStack_e8,auStack_100);
      uVar9 = uStack_f0;
      func_0x000107c60640(uStack_f8,uStack_f0);
      func_0x000107c614ac(uVar17);
      func_0x000107c6142c(uVar9);
    }
    else {
      puVar12 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x000107c610f8(PTR__OBJC_CLASS___CIImage_1126b3128);
      func_0x000107c61174(uVar17);
      func_0x000107c45b18(puVar12);
      puVar11 = PTR__OBJC_CLASS___CIContext_1126b3120;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c42c78(puVar12);
      puVar13 = puVar11;
      func_0x000107c4094c();
      puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      if (puVar13 == (undefined *)0x0) {
        func_0x000107c45b00();
      }
      else {
        func_0x000107c45af0();
        func_0x000107c61170(puVar12);
        puVar12 = puVar13;
      }
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar12);
      puVar12 = puVar3;
      func_0x000107c61550();
      if ((((int)puVar12 == 0) || ((long)puVar3 < 0)) ||
         (lVar7 = alStack_140[1], puVar12 = puVar3, ((ulong)puVar3 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar11 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar11 = puVar3;
          }
          func_0x000107c60480(puVar11);
        }
        lVar7 = alStack_140[1];
        puVar12 = (undefined *)0x0;
        func_0x0001013420bc(0,puVar11 + 1,1,puVar3);
      }
      uVar15 = (ulong)puVar12 & 0xffffffffffffff8;
      uVar18 = *(ulong *)(uVar15 + 0x10);
      puVar3 = puVar12;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar18) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        func_0x0001013420bc(puVar3,uVar18 + 1,1,puVar12);
        uVar15 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar15 + 0x10) = uVar18 + 1;
      *(undefined **)(uVar15 + uVar18 * 8 + 0x20) = puVar10;
      func_0x000107c61170(puVar5);
    }
    (*pcStack_130)(lVar19,lVar8);
  }
  func_0x0001023f5934(lVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
    func_0x000107c60e78();
    *(long *)(lVar20 + -0x40) = lVar19;
    *(ulong *)(lVar20 + -0x30) = uVar18;
    *(long *)(lVar20 + -0x28) = lVar16;
    *(ulong *)(lVar20 + -0x20) = uVar15;
    *(undefined8 *)(lVar20 + -0x18) = uVar4;
    *(undefined1 ***)(lVar20 + -0x10) = &puStack_60;
    *(code **)(lVar20 + -8) = FUN_1023f50a8;
    puVar3 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c610f8();
    func_0x000107c46db4();
    if (puVar3 == (undefined1 *)0x0) {
      FUN_1023f58f4();
      puVar12 = &UNK_110501548;
      func_0x000107c613f8(&UNK_110501548,puVar3,0,0);
      *puVar3 = 1;
      func_0x000107c61654();
    }
    else {
      func_0x000107c61174();
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001013b9140(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar11 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
      func_0x000107c610f8(PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0);
      uVar17 = 0;
      func_0x0001013ae418(0);
      uVar4 = 0x112d797d8;
      FUN_1023f5b64(0x112d797d8,&SUB_1013ae418,&UNK_10da15a00);
      puVar13 = puVar12;
      func_0x000107c5f9dc(puVar12,uVar17,PTR___sypN_11034f1a8 + 8,uVar4);
      func_0x000107c6142c(puVar12);
      func_0x000107c45b04(puVar11);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar13);
      puVar12 = PTR__OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest_1126aa780;
      func_0x000107c610f8(PTR__OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest_1126aa780);
      func_0x000107c453e4();
      puVar13 = puVar12;
      FUN_1023f49dc();
      if (lVar1 == 0) {
        func_0x000107c61170(puVar12);
        puVar12 = puVar13;
        FUN_1023f4c34(puVar13,puVar11);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar13);
      }
      else {
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar12);
      }
    }
    return puVar12;
  }
  return puVar3;
}



/* Entry: 1023f4c34; end: 1023f50a7;  */

undefined * FUN_1023f4c34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar13;
  long extraout_x12;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long alStack_130 [8];
  long alStack_f0 [2];
  code *pcStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 auStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  uStack_d0 = param_2;
  func_0x000107c5ef68();
  lStack_c0 = *(long *)(lVar2 + -8);
  lStack_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c0 + 0x40));
  lVar17 = (long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_c8 = lVar17;
  func_0x000107c5ef8c();
  puVar10 = PTR___s10Foundation8IndexSetVMa_110350e28;
  uVar16 = *(ulong *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar16 + 0x40));
  lVar17 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar17 - extraout_x12;
  lVar2 = 0x112e95248;
  func_0x0001000285a8(0x112e95248,&UNK_10daa0588);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar14 - extraout_x8_01;
  lStack_d8 = param_1;
  func_0x000107c3db58(param_1);
  func_0x000107c61180();
  func_0x000107c5ef74(lVar14);
  func_0x000107c61170(param_1);
  func_0x000107c5ef6c(lVar18);
  pcStack_e0 = *(code **)(uVar16 + 8);
  (*pcStack_e0)(lVar14,lVar3);
  lVar2 = (long)*(int *)(lVar2 + 0x24);
  uVar4 = 0x112e95250;
  FUN_1023f5b64(0x112e95250,puVar10,PTR___s10Foundation8IndexSetVSlAAMc_110350e38);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  alStack_f0[1] = lVar2;
  while( true ) {
    lVar14 = lStack_c8;
    func_0x000107c5fe94(lStack_c8,lVar3,uVar4);
    uVar15 = 0x112e95258;
    FUN_1023f5b64(0x112e95258,PTR___s10Foundation8IndexSetV0B0VMa_110350dd8,
                  PTR___s10Foundation8IndexSetV0B0VSQAAMc_110350de0);
    lVar1 = lStack_b8;
    uVar13 = lVar18 + lVar2;
    func_0x000107c5fab8(uVar13,lVar14,lStack_b8,uVar15);
    (**(code **)(lStack_c0 + 8))(lVar14,lVar1);
    if ((uVar13 & 1) != 0) break;
    pcVar6 = (code *)auStack_88;
    puVar12 = (undefined8 *)(lVar18 + lVar2);
    func_0x000107c5fed0(pcVar6,puVar12,lVar3,uVar4);
    uVar15 = *puVar12;
    (*pcVar6)(auStack_88,0);
    func_0x000107c5fe98(lVar18 + lVar2,lVar3,uVar4);
    func_0x000107c5ef80(lVar17,uVar15);
    func_0x000107c5ef70();
    auStack_88[0] = 0;
    lVar14 = lStack_d8;
    func_0x000107c43ddc();
    func_0x000107c61170(uVar15);
    uVar15 = auStack_88[0];
    if (lVar14 == 0) {
      uVar5 = auStack_88[0];
      func_0x000107c61174(auStack_88[0]);
      func_0x000107c5ed30(uVar15);
      func_0x000107c61170(uVar5);
      func_0x000107c61654();
      func_0x000107c614cc(uVar15,auStack_98,auStack_b0);
      uVar5 = uStack_a0;
      func_0x000107c60640(uStack_a8,uStack_a0);
      func_0x000107c614ac(uVar15);
      func_0x000107c6142c(uVar5);
    }
    else {
      puVar9 = PTR__OBJC_CLASS___CIImage_1126b3128;
      func_0x000107c610f8(PTR__OBJC_CLASS___CIImage_1126b3128);
      func_0x000107c61174(uVar15);
      func_0x000107c45b18(puVar9);
      puVar8 = PTR__OBJC_CLASS___CIContext_1126b3120;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c42c78(puVar9);
      puVar11 = puVar8;
      func_0x000107c4094c();
      puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      if (puVar11 == (undefined *)0x0) {
        func_0x000107c45b00();
      }
      else {
        func_0x000107c45af0();
        func_0x000107c61170(puVar9);
        puVar9 = puVar11;
      }
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar9);
      puVar9 = puVar10;
      func_0x000107c61550();
      if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
         (lVar2 = alStack_f0[1], puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar10) {
            puVar8 = puVar10;
          }
          func_0x000107c60480(puVar8);
        }
        lVar2 = alStack_f0[1];
        puVar9 = (undefined *)0x0;
        func_0x0001013420bc(0,puVar8 + 1,1,puVar10);
      }
      uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
      uVar16 = *(ulong *)(uVar13 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar16) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
        func_0x0001013420bc(puVar10,uVar16 + 1,1,puVar9);
        uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar13 + 0x10) = uVar16 + 1;
      *(undefined **)(uVar13 + uVar16 * 8 + 0x20) = puVar7;
      func_0x000107c61170(lVar14);
    }
    (*pcStack_e0)(lVar17,lVar3);
  }
  FUN_1023f5934(lVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(long *)(lVar18 + -0x40) = lVar17;
    *(ulong *)(lVar18 + -0x30) = uVar16;
    *(long *)(lVar18 + -0x28) = lVar14;
    *(ulong *)(lVar18 + -0x20) = uVar13;
    *(undefined8 *)(lVar18 + -0x18) = uVar4;
    *(undefined1 **)(lVar18 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar18 + -8) = FUN_1023f50a8;
    puVar10 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c610f8();
    func_0x000107c46db4();
    if (puVar10 == (undefined1 *)0x0) {
      FUN_1023f58f4();
      puVar9 = &UNK_110501548;
      func_0x000107c613f8(&UNK_110501548,puVar10,0,0);
      *puVar10 = 1;
      func_0x000107c61654();
    }
    else {
      func_0x000107c61174();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001013b9140(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar8 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
      func_0x000107c610f8(PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0);
      uVar15 = 0;
      func_0x0001013ae418(0);
      uVar4 = 0x112d797d8;
      FUN_1023f5b64(0x112d797d8,&SUB_1013ae418,&UNK_10da15a00);
      puVar11 = puVar9;
      func_0x000107c5f9dc(puVar9,uVar15,PTR___sypN_11034f1a8 + 8,uVar4);
      func_0x000107c6142c(puVar9);
      func_0x000107c45b04(puVar8);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar11);
      puVar9 = PTR__OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest_1126aa780;
      func_0x000107c610f8(PTR__OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest_1126aa780);
      func_0x000107c453e4();
      puVar11 = puVar9;
      FUN_1023f49dc();
      if (lVar1 == 0) {
        func_0x000107c61170(puVar9);
        puVar9 = puVar11;
        FUN_1023f4c34(puVar11,puVar8);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar11);
      }
      else {
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
      }
    }
    return puVar9;
  }
  return puVar10;
}



/* Entry: 1023f50a8; end: 1023f523f;  */

void FUN_1023f50a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x21;
  
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x000107c610f8();
  func_0x000107c46db4();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_1023f58f4();
    func_0x000107c613f8(&UNK_110501548,puVar1,0,0);
    *puVar1 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001013b9140(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar3 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
    func_0x000107c610f8(PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0);
    uVar4 = 0;
    func_0x0001013ae418(0);
    uVar5 = 0x112d797d8;
    FUN_1023f5b64(0x112d797d8,&SUB_1013ae418,&UNK_10da15a00);
    puVar6 = puVar2;
    func_0x000107c5f9dc(puVar2,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
    func_0x000107c6142c(puVar2);
    func_0x000107c45b04(puVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar6);
    puVar2 = PTR__OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest_1126aa780;
    func_0x000107c610f8(PTR__OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest_1126aa780);
    func_0x000107c453e4();
    puVar6 = puVar2;
    FUN_1023f49dc();
    if (unaff_x21 == 0) {
      func_0x000107c61170(puVar2);
      FUN_1023f4c34(puVar6,puVar3);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar6);
    }
    else {
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 1023f5240; end: 1023f539b;  */

/* WARNING: Removing unreachable block (ram,0x0001023f5504) */

undefined * FUN_1023f5240(undefined *param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined *unaff_x21;
  long lVar10;
  long alStack_a0 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5ef8c();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = param_1;
  func_0x000107c3db58();
  func_0x000107c61180();
  func_0x000107c5ef74((long)&puStack_60 + lVar1);
  func_0x000107c61170();
  func_0x000107c5ef70();
  (**(code **)(lVar10 + 8))((long)&puStack_60 + lVar1,lVar2);
  puStack_60 = (undefined *)0x0;
  puVar4 = param_1;
  func_0x000107c43ddc();
  func_0x000107c61170(puVar3);
  puVar5 = puStack_60;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = puStack_60;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(puVar4);
    func_0x000107c61654();
  }
  else {
    param_2 = puStack_60;
    func_0x000107c61174();
    FUN_1023f45e0();
    func_0x000107c61170(puVar4);
    puVar5 = unaff_x21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    *(undefined **)((long)alStack_a0 + lVar1) = puVar3;
    *(long *)((long)alStack_a0 + lVar1 + 8) = lVar2;
    *(undefined **)((long)alStack_a0 + lVar1 + 0x10) = param_1;
    *(undefined **)((long)alStack_a0 + lVar1 + 0x18) = param_2;
    *(undefined **)((long)alStack_a0 + lVar1 + 0x20) = puVar4;
    *(undefined **)((long)alStack_a0 + lVar1 + 0x28) = puVar5;
    *(undefined1 **)((long)alStack_a0 + lVar1 + 0x30) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_a0 + lVar1 + 0x38) = FUN_1023f539c;
    puVar3 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c610f8();
    func_0x000107c46db4();
    if (puVar3 == (undefined1 *)0x0) {
      FUN_1023f58f4();
      puVar4 = &UNK_110501548;
      func_0x000107c613f8(&UNK_110501548,puVar3,0,0);
      *puVar3 = 1;
      func_0x000107c61654();
    }
    else {
      func_0x000107c61174();
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001013b9140(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar6 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
      func_0x000107c610f8(PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0);
      uVar7 = 0;
      func_0x0001013ae418(0);
      uVar8 = 0x112d797d8;
      FUN_1023f5b64(0x112d797d8,&SUB_1013ae418,&UNK_10da15a00);
      puVar9 = puVar4;
      func_0x000107c5f9dc(puVar4,uVar7,PTR___sypN_11034f1a8 + 8,uVar8);
      func_0x000107c6142c(puVar4);
      func_0x000107c45b04(puVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar9);
      puVar4 = PTR__OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest_1126aa780;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar9 = puVar4;
      FUN_1023f49dc();
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c61170(puVar4);
        puVar5 = puVar9;
        FUN_1023f5240(puVar9,puVar6);
        puVar4 = (undefined *)0x112d36850;
        FUN_1023f47a0(0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,0x112d502b0,&UNK_10d9169a0);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar6);
        func_0x000107c613fc(puVar4,((ulong)*(uint *)(puVar4 + 0x30) + 7 & 0x1fffffff8) + 8,
                            *(ushort *)(puVar4 + 0x34) | 7);
        *(undefined8 *)(puVar4 + 0x18) = 3;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined **)(puVar4 + 0x20) = puVar5;
      }
      else {
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar4);
      }
    }
    return puVar4;
  }
  return param_2;
}



/* Entry: 1023f539c; end: 1023f55ab;  */

/* WARNING: Removing unreachable block (ram,0x0001023f5504) */

void FUN_1023f539c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x21;
  
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x000107c610f8();
  func_0x000107c46db4();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_1023f58f4();
    func_0x000107c613f8(&UNK_110501548,puVar1,0,0);
    *puVar1 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001013b9140(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar3 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
    func_0x000107c610f8(PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0);
    uVar4 = 0;
    func_0x0001013ae418(0);
    uVar5 = 0x112d797d8;
    FUN_1023f5b64(0x112d797d8,&SUB_1013ae418,&UNK_10da15a00);
    puVar6 = puVar2;
    func_0x000107c5f9dc(puVar2,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
    func_0x000107c6142c(puVar2);
    func_0x000107c45b04(puVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar6);
    puVar2 = PTR__OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest_1126aa780;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar6 = puVar2;
    FUN_1023f49dc();
    if (unaff_x21 == 0) {
      func_0x000107c61170(puVar2);
      puVar2 = puVar6;
      FUN_1023f5240(puVar6,puVar3);
      lVar7 = 0x112d36850;
      FUN_1023f47a0(0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,0x112d502b0,&UNK_10d9169a0);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c613fc(lVar7,((ulong)*(uint *)(lVar7 + 0x30) + 7 & 0x1fffffff8) + 8,
                          *(ushort *)(lVar7 + 0x34) | 7);
      *(undefined8 *)(lVar7 + 0x18) = 3;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      *(undefined **)(lVar7 + 0x20) = puVar2;
    }
    else {
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 1023f55ac; end: 1023f58f3;  */

/* WARNING: Removing unreachable block (ram,0x0001023f57b0) */

undefined * FUN_1023f55ac(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  long unaff_x21;
  undefined *unaff_x24;
  long lVar12;
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  func_0x000107c5ef8c();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar3 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x000107c610f8();
  func_0x000107c46db4();
  if (puVar3 == (undefined1 *)0x0) {
    FUN_1023f58f4();
    func_0x000107c613f8(&UNK_110501548,puVar3,0,0);
    *puVar3 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001013b9140(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar5 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
    func_0x000107c610f8(PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0);
    uVar6 = 0;
    func_0x0001013ae418(0);
    uVar7 = 0x112d797d8;
    FUN_1023f5b64(0x112d797d8,&SUB_1013ae418,&UNK_10da15a00);
    puVar8 = puVar4;
    func_0x000107c5f9dc(puVar4,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar4);
    func_0x000107c45b04(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar8);
    unaff_x24 = PTR__OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest_1126aa780;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = unaff_x24;
    FUN_1023f49dc();
    if (unaff_x21 == 0) {
      func_0x000107c61170(unaff_x24);
      unaff_x24 = puVar4;
      FUN_1023f4c34(puVar4,puVar5);
      puVar8 = puVar4;
      func_0x000107c3db58();
      func_0x000107c61180();
      func_0x000107c5ef74(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c61170();
      func_0x000107c5ef78();
      (**(code **)(lVar12 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      if ((long)puVar8 < 2) {
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        puVar5 = puVar3;
      }
      else {
        puVar8 = puVar4;
        FUN_1023f5240(puVar4,puVar5);
        func_0x000107c61174();
        puVar10 = unaff_x24;
        func_0x000107c61550();
        if (((((ulong)puVar10 & 1) == 0) || ((long)unaff_x24 < 0)) ||
           (puVar10 = unaff_x24, ((ulong)unaff_x24 >> 0x3e & 1) != 0)) {
          if ((ulong)unaff_x24 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)unaff_x24 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)unaff_x24 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < unaff_x24) {
              puVar9 = unaff_x24;
            }
            func_0x000107c60480(puVar9);
          }
          puVar10 = (undefined *)0x0;
          func_0x0001013420bc(0,puVar9 + 1,1,unaff_x24);
        }
        uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar11 + 0x10);
        unaff_x24 = puVar10;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
          unaff_x24 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          func_0x0001013420bc(unaff_x24,uVar1 + 1,1,puVar10);
          uVar11 = (ulong)unaff_x24 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
        *(undefined **)(uVar11 + uVar1 * 8 + 0x20) = puVar8;
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
      }
      func_0x000107c61170(puVar5);
    }
    else {
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(unaff_x24);
    }
  }
  return unaff_x24;
}



/* Entry: 1023f58f4; end: 1023f5933;  */

void FUN_1023f58f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e95240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daa06b0;
  func_0x000107c61520(&UNK_10daa06b0,&UNK_110501548);
  puRam0000000112e95240 = puVar1;
  return;
}



/* Entry: 1023f5934; end: 1023f59bb;  */

undefined8 FUN_1023f5934(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e95248;
  func_0x0001000285a8(0x112e95248,&UNK_10daa0588);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1023f59bc; end: 1023f5b23;  */

int FUN_1023f59bc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1023f5a38;
        goto LAB_1023f5a1c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1023f5a1c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1023f5a38:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1023f5b24; end: 1023f5b63;  */

void FUN_1023f5b24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e95268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daa05f8;
  func_0x000107c61520(&UNK_10daa05f8,&UNK_110501548);
  puRam0000000112e95268 = puVar1;
  return;
}



/* Entry: 1023f5b64; end: 1023f5ba3;  */

void FUN_1023f5b64(long *param_1,code *param_2,long param_3)

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



/* Entry: 1023f5ba4; end: 1023f5ba7;  */

void FUN_1023f5ba4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001023f479c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1023f5ba8; end: 1023f5bc7;  */

void FUN_1023f5ba8(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 1023f5bc8; end: 1023f5c03;  */

void FUN_1023f5bc8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1023f4690();
  func_0x000107c613fc();
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110501488;
  return;
}



/* Entry: 1023f5c04; end: 1023f5c13;  */

void FUN_1023f5c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023f5c14; end: 1023f5c7f;  */

void FUN_1023f5c14(undefined8 param_1)

{
  if (lRam0000000112e952a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6d4bac);
  return;
}



/* Entry: 1023f5c80; end: 1023f5d27;  */

void FUN_1023f5c80(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112e95270,&UNK_10daa06f0);
  func_0x000107c613fc();
  pcVar1 = FUN_1023f5bc8;
  func_0x0001000bdd8c(FUN_1023f5bc8,0);
  FUN_102428598(0);
  func_0x000107c610f8();
  pcVar2 = pcVar1;
  func_0x000107c6157c();
  func_0x0001024284dc();
  uVar3 = 0;
  FUN_102428728(0);
  func_0x000107c610f8();
  func_0x000102428614(pcVar2,uVar3);
  func_0x000107c61574(pcVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1023f5d28; end: 1023f5d57;  */

void FUN_1023f5d28(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1023f5d58; end: 1023f5d63;  */

void FUN_1023f5d58(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1023f5d64; end: 1023f5e3b;  */

undefined8 FUN_1023f5d64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112e95270,&UNK_10daa06f0);
  func_0x000107c613fc();
  uVar1 = 0x1023f5e00;
  func_0x0001000bdd8c(0x1023f5e00,0);
  FUN_102428598(0);
  func_0x000107c610f8();
  uVar2 = uVar1;
  func_0x000107c6157c(uVar1);
  func_0x0001024284dc();
  uVar3 = 0;
  FUN_1024288b8(0);
  func_0x000107c610f8();
  func_0x0001024287a4(uVar2,uVar3);
  func_0x000107c61574(uVar1);
  return uVar2;
}



/* Entry: 1023f5e3c; end: 1023f5e43;  */

void FUN_1023f5e3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1023f5e44; end: 1023f5ee3;  */

void FUN_1023f5e44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023f5ee4; end: 1023f5f8b;  */

void FUN_1023f5ee4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112e95270,&UNK_10daa06f0);
  func_0x000107c613fc();
  uVar1 = 0x1023f5e00;
  func_0x0001000bdd8c(0x1023f5e00,0);
  FUN_102428598(0);
  func_0x000107c610f8();
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001024284dc();
  uVar3 = 0;
  FUN_1024288b8(0);
  func_0x000107c610f8();
  func_0x0001024287a4(uVar2,uVar3);
  func_0x000107c61574(uVar1);
  *param_1 = uVar2;
  return;
}


