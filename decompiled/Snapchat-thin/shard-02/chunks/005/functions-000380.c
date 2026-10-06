/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ef07cc; end: 101ef07ef;  */

void FUN_101ef07cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101ef07f0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101ef07f0; end: 101ef0903;  */

undefined *
FUN_101ef07f0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ef0904);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e3c230;
    func_0x0001000285a8(0x112e3c230,&UNK_10da27d38);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_11049a8f8);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x40 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101ef0904; end: 101ef0d5f;  */

void FUN_101ef0904(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  double *pdVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar12 = 0;
    do {
      puVar9 = puStack_58;
      lVar18 = lVar12 + 1;
      lVar22 = lVar18;
      if (lVar18 < lVar10) {
        lVar13 = *param_3;
        lVar22 = lVar13 + lVar18 * 0x40;
        dVar23 = *(double *)(lVar22 + 0x28);
        lVar1 = lVar13 + lVar12 * 0x40;
        dVar29 = *(double *)(lVar1 + 0x28);
        if ((0.0 < dVar23) || (0.0 < dVar29)) {
          bVar6 = false;
          if (!NAN(dVar29) && !NAN(dVar23)) {
            bVar6 = dVar29 < dVar23;
          }
        }
        else {
          bVar6 = *(double *)(lVar1 + 0x20) < *(double *)(lVar22 + 0x20);
        }
        lVar1 = lVar10;
        if (lVar10 <= lVar12 + 2) {
          lVar1 = lVar12 + 2;
        }
        pdVar19 = (double *)(lVar13 + lVar12 * 0x40 + 0xa8);
        do {
          lVar22 = lVar1;
          if ((2 - lVar1) + lVar18 == 1) break;
          dVar23 = *pdVar19;
          dVar29 = pdVar19[-8];
          if ((0.0 < dVar23) || (0.0 < dVar29)) {
            bVar5 = false;
            if (!NAN(dVar29) && !NAN(dVar23)) {
              bVar5 = dVar29 < dVar23;
            }
          }
          else {
            bVar5 = pdVar19[-9] < pdVar19[-1];
          }
          pdVar19 = pdVar19 + 8;
          lVar18 = lVar18 + 1;
          lVar22 = lVar18;
        } while (bVar6 == bVar5);
        if (bVar6 != false) {
          if (lVar22 < lVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d34);
            (*pcVar4)();
          }
          if (lVar12 < lVar22) {
            puVar16 = (undefined8 *)(lVar13 + lVar12 * 0x40);
            lVar18 = lVar22;
            lVar10 = lVar12;
            puVar17 = (undefined8 *)(lVar13 + lVar22 * 0x40);
            do {
              puVar11 = puVar17 + -8;
              lVar18 = lVar18 + -1;
              if (lVar10 != lVar18) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d54);
                  (*pcVar4)();
                }
                uVar24 = puVar16[4];
                uStack_78 = (undefined1)puVar16[5];
                uVar27 = *(undefined8 *)((long)puVar16 + 0x31);
                uVar25 = *(undefined8 *)((long)puVar16 + 0x29);
                uStack_77 = (undefined7)uVar25;
                uVar31 = puVar16[1];
                uVar30 = *puVar16;
                uVar28 = puVar16[3];
                uVar26 = puVar16[2];
                uVar32 = puVar17[-4];
                uVar34 = puVar17[-1];
                uVar33 = puVar17[-2];
                uVar38 = puVar17[-7];
                uVar37 = *puVar11;
                uVar36 = puVar17[-5];
                uVar35 = puVar17[-6];
                puVar16[5] = puVar17[-3];
                puVar16[4] = uVar32;
                puVar16[7] = uVar34;
                puVar16[6] = uVar33;
                puVar16[1] = uVar38;
                *puVar16 = uVar37;
                puVar16[3] = uVar36;
                puVar16[2] = uVar35;
                puVar17[-7] = uVar31;
                *puVar11 = uVar30;
                puVar17[-5] = uVar28;
                puVar17[-6] = uVar26;
                puVar17[-3] = CONCAT71(uStack_77,uStack_78);
                puVar17[-4] = uVar24;
                *(undefined8 *)((long)puVar17 + -0xf) = uVar27;
                *(undefined8 *)((long)puVar17 + -0x17) = uVar25;
              }
              lVar10 = lVar10 + 1;
              puVar16 = puVar16 + 8;
              puVar17 = puVar11;
            } while (lVar10 < lVar18);
            lVar10 = param_3[1];
          }
        }
      }
      lVar18 = lVar22;
      if (lVar22 < lVar10) {
        if (SBORROW8(lVar22,lVar12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d30);
          (*pcVar4)();
        }
        if (lVar22 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d38);
            (*pcVar4)();
          }
          lVar1 = lVar12 + param_4;
          if (lVar10 <= lVar12 + param_4) {
            lVar1 = lVar10;
          }
          if (lVar1 < lVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d3c);
            (*pcVar4)();
          }
          if (lVar22 != lVar1) {
            lVar14 = *param_3;
            puVar16 = (undefined8 *)(lVar14 + lVar22 * 0x40);
            lVar10 = lVar12 - lVar22;
            lVar13 = lVar10;
            puVar17 = puVar16;
LAB_101ef0b00:
            do {
              if ((0.0 < (double)puVar16[5]) || (0.0 < (double)puVar16[-3])) {
                if ((double)puVar16[-3] < (double)puVar16[5]) goto LAB_101ef0b34;
              }
              else if ((double)puVar16[-4] < (double)puVar16[4]) {
LAB_101ef0b34:
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d40);
                  (*pcVar4)();
                }
                puVar11 = puVar16 + -8;
                uVar28 = puVar16[3];
                uVar27 = puVar16[2];
                uVar24 = puVar16[4];
                uStack_78 = (undefined1)puVar16[5];
                uStack_77 = (undefined7)*(undefined8 *)((long)puVar16 + 0x29);
                uVar26 = puVar16[1];
                uVar25 = *puVar16;
                puVar16[1] = puVar16[-7];
                *puVar16 = *puVar11;
                puVar16[3] = puVar16[-5];
                puVar16[2] = puVar16[-6];
                puVar16[5] = puVar16[-3];
                puVar16[4] = puVar16[-4];
                puVar16[7] = puVar16[-1];
                puVar16[6] = puVar16[-2];
                *(undefined8 *)((long)puVar16 + -0xf) = *(undefined8 *)((long)puVar16 + 0x31);
                *(undefined8 *)((long)puVar16 + -0x17) = *(undefined8 *)((long)puVar16 + 0x29);
                puVar16[-5] = uVar28;
                puVar16[-6] = uVar27;
                puVar16[-3] = CONCAT71(uStack_77,uStack_78);
                puVar16[-4] = uVar24;
                puVar16[-7] = uVar26;
                *puVar11 = uVar25;
                bVar6 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                puVar16 = puVar11;
                if (bVar6) goto LAB_101ef0b00;
              }
              lVar22 = lVar22 + 1;
              puVar16 = puVar17 + 8;
              lVar10 = lVar13 + -1;
              lVar18 = lVar1;
              lVar13 = lVar10;
              puVar17 = puVar16;
            } while (lVar22 != lVar1);
          }
        }
      }
      if (lVar18 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d20);
        (*pcVar4)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar21 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar21) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar21 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar21 + 1;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar9 + uVar21 * 0x10 + 0x28) = lVar18;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d58);
        (*pcVar4)();
      }
      FUN_101ef0e2c(&puStack_58,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101ef0cf0;
      lVar10 = param_3[1];
      lVar12 = lVar18;
    } while (lVar18 < lVar10);
  }
  puVar9 = puStack_58;
  lVar10 = *param_1;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d60);
    (*pcVar4)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar20 = (ulong *)(puVar9 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d5c);
      (*pcVar4)();
    }
    plVar2 = (long *)(puVar9 + uVar21 * 0x10);
    lVar18 = *plVar2;
    puVar3 = puVar20 + uVar21 * 2;
    uVar15 = puVar3[1];
    FUN_101ef1094(lVar12 + lVar18 * 0x40,lVar12 + *puVar3 * 0x40,lVar12 + uVar15 * 0x40,lVar10);
    if (unaff_x21 != 0) break;
    if ((long)uVar15 < lVar18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d24);
      (*pcVar4)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d28);
      (*pcVar4)();
    }
    *plVar2 = lVar18;
    plVar2[1] = uVar15;
    uVar15 = *puVar20;
    lVar12 = uVar15 - uVar21;
    if (uVar15 < uVar21) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef0d2c);
      (*pcVar4)();
    }
    uVar21 = uVar15 - 1;
    func_0x000107c610b8(puVar3,puVar3 + 2,lVar12 * 0x10);
    *puVar20 = uVar21;
  }
LAB_101ef0cf0:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 101ef0d60; end: 101ef0e2b;  */

void FUN_101ef0d60(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    puVar6 = (undefined8 *)(lVar3 + param_3 * 0x40);
    param_1 = param_1 - param_3;
    lVar5 = param_1;
    puVar4 = puVar6;
LAB_101ef0da0:
    do {
      if ((0.0 < (double)puVar6[5]) || (0.0 < (double)puVar6[-3])) {
        if ((double)puVar6[-3] < (double)puVar6[5]) goto LAB_101ef0dd4;
      }
      else if ((double)puVar6[-4] < (double)puVar6[4]) {
LAB_101ef0dd4:
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef0e2c);
          (*pcVar1)();
        }
        puVar7 = puVar6 + -8;
        uVar12 = puVar6[3];
        uVar11 = puVar6[2];
        uVar8 = puVar6[4];
        uStack_18 = (undefined1)puVar6[5];
        uStack_17 = (undefined7)*(undefined8 *)((long)puVar6 + 0x29);
        uVar10 = puVar6[1];
        uVar9 = *puVar6;
        puVar6[1] = puVar6[-7];
        *puVar6 = *puVar7;
        puVar6[3] = puVar6[-5];
        puVar6[2] = puVar6[-6];
        puVar6[5] = puVar6[-3];
        puVar6[4] = puVar6[-4];
        puVar6[7] = puVar6[-1];
        puVar6[6] = puVar6[-2];
        *(undefined8 *)((long)puVar6 + -0xf) = *(undefined8 *)((long)puVar6 + 0x31);
        *(undefined8 *)((long)puVar6 + -0x17) = *(undefined8 *)((long)puVar6 + 0x29);
        puVar6[-5] = uVar12;
        puVar6[-6] = uVar11;
        puVar6[-3] = CONCAT71(uStack_17,uStack_18);
        puVar6[-4] = uVar8;
        puVar6[-7] = uVar10;
        *puVar7 = uVar9;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar6 = puVar7;
        if (bVar2) goto LAB_101ef0da0;
      }
      param_3 = param_3 + 1;
      puVar6 = puVar4 + 8;
      param_1 = lVar5 + -1;
      lVar5 = param_1;
      puVar4 = puVar6;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101ef0e2c; end: 101ef1093;  */

undefined8 FUN_101ef0e2c(ulong *param_1,undefined8 param_2,long *param_3)

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
          goto LAB_101ef0f00;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef107c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_101ef0f64:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef106c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1074);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1054);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1058);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1060);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1068);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_101ef0f00:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef105c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1064);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1070);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1078);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_101ef0f64;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1080);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1048);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1094);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_101ef1094(lVar9 + lVar12 * 0x40,lVar9 + *plVar1 * 0x40,lVar9 + lVar7 * 0x40,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef104c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1050);
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



/* Entry: 101ef1094; end: 101ef12e7;  */

undefined8
FUN_101ef1094(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar7;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar4 = lVar10 + 0x3f;
  if (-1 < lVar10) {
    lVar4 = lVar10;
  }
  lVar4 = lVar4 >> 6;
  lVar11 = (long)param_3 - (long)param_2;
  lVar8 = lVar11 + 0x3f;
  if (-1 < lVar11) {
    lVar8 = lVar11;
  }
  lVar8 = lVar8 >> 6;
  if (lVar4 < lVar8) {
    if ((param_4 != param_1) || (param_1 + lVar4 * 8 <= param_4)) {
      func_0x000107c610b8(param_4,param_1,lVar4 * 0x40);
    }
    puVar7 = param_4 + lVar4 * 8;
    puVar9 = param_1;
    if (0x3f < lVar10) {
      do {
        if (param_3 <= param_2) break;
        if ((0.0 < (double)param_2[5]) || (0.0 < (double)param_4[5])) {
          if ((double)param_4[5] < (double)param_2[5]) goto LAB_101ef112c;
LAB_101ef1194:
          puVar2 = param_2;
          puVar3 = param_4 + 8;
          puVar5 = param_4;
        }
        else {
          if ((double)param_2[4] <= (double)param_4[4]) goto LAB_101ef1194;
LAB_101ef112c:
          puVar2 = param_2 + 8;
          puVar3 = param_4;
          puVar5 = param_2;
        }
        param_4 = puVar3;
        param_2 = puVar2;
        if (puVar9 != puVar5) {
          uVar13 = puVar5[1];
          uVar12 = *puVar5;
          uVar15 = puVar5[3];
          uVar14 = puVar5[2];
          uVar16 = puVar5[4];
          uVar18 = puVar5[7];
          uVar17 = puVar5[6];
          puVar9[5] = puVar5[5];
          puVar9[4] = uVar16;
          puVar9[7] = uVar18;
          puVar9[6] = uVar17;
          puVar9[1] = uVar13;
          *puVar9 = uVar12;
          puVar9[3] = uVar15;
          puVar9[2] = uVar14;
        }
        puVar9 = puVar9 + 8;
      } while (param_4 < puVar7);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar8 * 8 <= param_4)) {
      func_0x000107c610b8(param_4,param_2,lVar8 * 0x40);
    }
    puVar5 = param_4 + lVar8 * 8;
    puVar7 = puVar5;
    puVar9 = param_2;
    if ((param_1 < param_2) && (0x3f < lVar11)) {
      do {
        while( true ) {
          if ((0.0 < (double)puVar5[-3]) || (0.0 < (double)param_2[-3])) break;
          if ((double)puVar5[-4] <= (double)param_2[-4]) goto LAB_101ef1238;
LAB_101ef1258:
          puVar9 = param_2 + -8;
          if (param_3 != param_2) {
            uVar13 = param_2[-7];
            uVar12 = *puVar9;
            uVar15 = param_2[-5];
            uVar14 = param_2[-6];
            uVar16 = param_2[-4];
            uVar18 = param_2[-1];
            uVar17 = param_2[-2];
            param_3[-3] = param_2[-3];
            param_3[-4] = uVar16;
            param_3[-1] = uVar18;
            param_3[-2] = uVar17;
            param_3[-7] = uVar13;
            param_3[-8] = uVar12;
            param_3[-5] = uVar15;
            param_3[-6] = uVar14;
          }
          puVar7 = puVar5;
          if ((puVar9 <= param_1) || (param_3 = param_3 + -8, param_2 = puVar9, puVar5 <= param_4))
          goto LAB_101ef1294;
        }
        if ((double)param_2[-3] < (double)puVar5[-3]) goto LAB_101ef1258;
LAB_101ef1238:
        puVar7 = puVar5 + -8;
        if (puVar5 != param_3) {
          uVar13 = puVar5[-7];
          uVar12 = *puVar7;
          uVar15 = puVar5[-5];
          uVar14 = puVar5[-6];
          uVar16 = puVar5[-4];
          uVar18 = puVar5[-1];
          uVar17 = puVar5[-2];
          param_3[-3] = puVar5[-3];
          param_3[-4] = uVar16;
          param_3[-1] = uVar18;
          param_3[-2] = uVar17;
          param_3[-7] = uVar13;
          param_3[-8] = uVar12;
          param_3[-5] = uVar15;
          param_3[-6] = uVar14;
        }
        puVar5 = puVar7;
        param_3 = param_3 + -8;
        puVar9 = param_2;
      } while (param_4 < puVar7);
    }
  }
LAB_101ef1294:
  uVar6 = (long)puVar7 - (long)param_4;
  uVar1 = uVar6 + 0x3f;
  if (-1 < (long)uVar6) {
    uVar1 = uVar6;
  }
  if ((puVar9 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xffffffffffffffc0)) <= puVar9)) {
    func_0x000107c610b8(puVar9,param_4);
  }
  return 1;
}



/* Entry: 101ef12e8; end: 101ef143f;  */

ulong FUN_101ef12e8(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef1440);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef1434);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_101ef28f0(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef1438);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef143c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_101ef05a8(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101ef1440; end: 101ef1513;  */

undefined * FUN_101ef1440(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef1514);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112e3c230;
      func_0x0001000285a8(0x112e3c230,&UNK_10da27d38);
      func_0x000107c613fc();
      puVar5 = puVar4;
      func_0x000107c610a4();
      puVar1 = puVar5 + 0x1f;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 6) << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef1510);
      (*pcVar3)();
    }
    func_0x000107c6140c(puVar4 + 0x20,param_2 + param_3 * 0x40,lVar2,&UNK_11049a8f8);
  }
  return puVar4;
}



/* Entry: 101ef1514; end: 101ef156b;  */

void FUN_101ef1514(long param_1)

{
  FUN_101ef07f0(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_release_11034f4c0);
  return;
}



/* Entry: 101ef156c; end: 101ef187b;  */

undefined * FUN_101ef156c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e3c248,&UNK_10da27d48);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef1668);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101ef166c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101ef187c; end: 101ef1b5f;  */

/* WARNING: Removing unreachable block (ram,0x000101ef1b54) */

undefined1  [16] FUN_101ef187c(double param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_f0 [64];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  if (SUB168(SEXT816(param_3) * SEXT816(0x18),8) != param_3 * 0x18 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef1b4c);
    (*pcVar3)();
  }
  if (SUB168(SEXT816(param_3 * 0x18) * SEXT816(0x3c),8) == param_3 * 0x5a0 >> 0x3f) {
    if (SUB168(SEXT816(param_3 * 0x5a0) * SEXT816(0x3c),8) == param_3 * 0x15180 >> 0x3f) {
      func_0x000107c5eea0(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      (**(code **)(lVar10 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5);
      lStack_b0 = param_2;
      func_0x000107c61434(param_2);
      FUN_101eefba0(&lStack_b0,FUN_101ef1514);
      lVar10 = lStack_b0;
      puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
      lVar5 = *(long *)(lStack_b0 + 0x10);
      if (lVar5 == 0) {
        func_0x000107c61574(lStack_b0);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        param_1 = param_1 - (double)(param_3 * 0x15180);
        lVar12 = 0x20;
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while( true ) {
          lVar5 = lVar5 + -1;
          plVar1 = (long *)(lVar10 + lVar12);
          lStack_a8 = plVar1[1];
          lStack_b0 = *plVar1;
          lStack_98 = plVar1[3];
          lStack_a0 = plVar1[2];
          dVar14 = (double)plVar1[5];
          lStack_90 = plVar1[4];
          uStack_7f = *(undefined8 *)((long)plVar1 + 0x31);
          uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)plVar1 + 0x29) >> 0x38);
          uStack_88 = SUB81(dVar14,0);
          uStack_87 = (undefined7)((ulong)dVar14 >> 8);
          bVar4 = false;
          if ((0.0 < dVar14) && (bVar4 = false, !NAN(param_1) && !NAN(dVar14))) {
            bVar4 = param_1 < dVar14;
          }
          if (bVar4) {
            func_0x000101ef28b4(&lStack_b0,auStack_f0);
            func_0x000101ef28b4(&lStack_b0,auStack_f0);
            puVar6 = puVar9;
            func_0x000107c61558();
            puVar7 = puVar9;
            if (((ulong)puVar6 & 1) == 0) {
              puVar7 = (undefined *)0x0;
              FUN_101ef07f0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9,puVar2);
            }
            uVar13 = *(ulong *)(puVar7 + 0x10);
            lVar11 = uVar13 + 1;
            puVar9 = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar13) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
              FUN_101ef07f0(puVar9,lVar11,1,puVar7,puVar2);
              puVar7 = puVar9;
            }
          }
          else {
            func_0x000101ef28b4(&lStack_b0,auStack_f0);
            func_0x000101ef28b4(&lStack_b0,auStack_f0);
            puVar6 = puVar8;
            func_0x000107c61558();
            puVar7 = puVar8;
            if (((ulong)puVar6 & 1) == 0) {
              puVar7 = (undefined *)0x0;
              FUN_101ef07f0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8,puVar2);
            }
            uVar13 = *(ulong *)(puVar7 + 0x10);
            lVar11 = uVar13 + 1;
            puVar8 = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar13) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
              FUN_101ef07f0(puVar8,lVar11,1,puVar7,puVar2);
              puVar7 = puVar8;
            }
          }
          *(long *)(puVar7 + 0x10) = lVar11;
          *(undefined8 *)(puVar7 + uVar13 * 0x40 + 0x51) = uStack_7f;
          *(ulong *)(puVar7 + uVar13 * 0x40 + 0x49) = CONCAT17(uStack_80,uStack_87);
          *(long *)(puVar7 + uVar13 * 0x40 + 0x38) = lStack_98;
          *(long *)(puVar7 + uVar13 * 0x40 + 0x30) = lStack_a0;
          *(ulong *)(puVar7 + uVar13 * 0x40 + 0x48) = CONCAT71(uStack_87,uStack_88);
          *(long *)(puVar7 + uVar13 * 0x40 + 0x40) = lStack_90;
          *(long *)(puVar7 + uVar13 * 0x40 + 0x28) = lStack_a8;
          *(long *)(puVar7 + uVar13 * 0x40 + 0x20) = lStack_b0;
          func_0x000101eed728(&lStack_b0);
          if (lVar5 == 0) break;
          lVar12 = lVar12 + 0x40;
        }
        func_0x000107c61574(lVar10);
      }
      auVar15._8_8_ = puVar8;
      auVar15._0_8_ = puVar9;
      return auVar15;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef1b54);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef1b50);
  (*pcVar3)();
}



/* Entry: 101ef1b60; end: 101ef287f;  */

/* WARNING: Removing unreachable block (ram,0x000101ef26fc) */

undefined1  [16]
FUN_101ef1b60(ulong param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,long param_8,ulong param_9,
             ulong param_10)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  undefined *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uStack_a8 = param_7[1];
  puStack_b0 = (undefined *)*param_7;
  uStack_98 = param_7[3];
  uStack_a0 = param_7[2];
  uStack_90 = param_7[4];
  uStack_88 = (undefined1)param_7[5];
  uStack_7f = *(undefined8 *)((long)param_7 + 0x31);
  uStack_87 = (undefined7)*(undefined8 *)((long)param_7 + 0x29);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_7 + 0x29) >> 0x38);
  if (param_1 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar17 = param_1;
    }
    func_0x000107c60480();
  }
  if (SBORROW8(param_8,uVar17)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef25f4);
    (*pcVar3)();
  }
  uVar19 = param_8 - uVar17;
  puStack_150 = param_3;
  func_0x000107c61438(param_3,2);
  func_0x000107c61438(param_5,2);
  FUN_101eef7f8(param_5);
  puVar10 = puStack_150;
  func_0x000107c61434(puStack_150);
  FUN_101eefba0(&puStack_150,FUN_101ef1514);
  uVar20 = uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU);
  func_0x000107c6142c(puVar10);
  puVar10 = puStack_150;
  uVar15 = *(ulong *)(puStack_150 + 0x10);
  if (uVar20 <= *(ulong *)(puStack_150 + 0x10)) {
    uVar15 = uVar20;
  }
  uVar16 = 1;
  if (0 < (long)uVar19) {
    uVar16 = uVar15 * 2 + 1;
  }
  uVar4 = 0;
  func_0x000107c605fc(0);
  puVar18 = puVar10;
  func_0x000107c61580(puVar10,3);
  func_0x000107c61480();
  if (puVar18 == (undefined *)0x0) {
    func_0x000107c615e8(puVar10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar15 = *(ulong *)(puVar18 + 0x10);
  func_0x000107c61574();
  if (uVar15 == uVar16 >> 1) {
    puVar5 = puVar10;
    func_0x000107c61480(puVar10,uVar4);
    func_0x000107c615e8(puVar10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 == (undefined *)0x0) goto LAB_101ef1cc0;
  }
  else {
    func_0x000107c615e8();
    puVar18 = puVar10;
    FUN_101ef1440(puVar10,puVar10 + 0x20,0,uVar16);
LAB_101ef1cc0:
    func_0x000107c615e8(puVar10);
    puVar5 = puVar18;
  }
  uVar16 = *(ulong *)(puVar10 + 0x10);
  uVar15 = uVar16;
  if (uVar20 <= uVar16) {
    uVar15 = uVar20;
  }
  uVar12 = 0;
  if (0 < (long)uVar19) {
    uVar12 = uVar15;
  }
  puVar18 = puVar10;
  func_0x000107c615f4(puVar10,2);
  func_0x000107c61480();
  if (puVar18 == (undefined *)0x0) {
    func_0x000107c615e8(puVar10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  lVar13 = *(long *)(puVar18 + 0x10);
  func_0x000107c61574();
  if (lVar13 == uVar16 - uVar12) {
    puVar9 = puVar10;
    func_0x000107c61480(puVar10,uVar4);
    func_0x000107c615e8(puVar10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar9 == (undefined *)0x0) goto LAB_101ef1f70;
    uVar15 = *(ulong *)(puVar9 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c615e8(puVar10);
    puVar18 = puVar10;
    FUN_101ef1440(puVar10,puVar10 + 0x20,uVar12,uVar16 << 1 | 1);
LAB_101ef1f70:
    func_0x000107c615e8(puVar10);
    uVar15 = *(ulong *)(puVar18 + 0x10);
    puVar9 = puVar18;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar18 = puVar10;
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar15 != 0) {
    uVar16 = 0;
    do {
      puVar11 = (undefined8 *)(puVar9 + uVar16 * 0x40 + 0x20);
      uVar12 = uVar16;
      while( true ) {
        if (*(ulong *)(puVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef25bc);
          (*pcVar3)();
        }
        uStack_148 = puVar11[1];
        puStack_150 = (undefined *)*puVar11;
        uStack_138 = puVar11[3];
        uStack_140 = puVar11[2];
        uStack_130 = puVar11[4];
        uVar21 = *(undefined8 *)((long)puVar11 + 0x31);
        uStack_120 = (undefined1)((ulong)*(undefined8 *)((long)puVar11 + 0x29) >> 0x38);
        uStack_128 = (undefined1)puVar11[5];
        uStack_127 = (undefined7)((ulong)puVar11[5] >> 8);
        uVar16 = uVar12 + 1;
        uStack_11f._7_1_ = (char)((ulong)uVar21 >> 0x38);
        uStack_11f = uVar21;
        if (uStack_11f._7_1_ == '\0') break;
        puVar11 = puVar11 + 8;
        uVar12 = uVar16;
        if (uVar15 == uVar16) goto LAB_101ef1e5c;
      }
      func_0x000101ef28b4(&puStack_150,&uStack_100);
      puVar18 = puVar10;
      func_0x000107c61558();
      puStack_190 = puVar10;
      if (((ulong)puVar18 & 1) == 0) {
        FUN_101ef07cc(0,*(long *)(puVar10 + 0x10) + 1,1);
      }
      uVar14 = *(ulong *)(puStack_190 + 0x10);
      if (*(ulong *)(puStack_190 + 0x18) >> 1 <= uVar14) {
        FUN_101ef07cc(1 < *(ulong *)(puStack_190 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puStack_190 + 0x10) = uVar14 + 1;
      *(undefined8 *)(puStack_190 + uVar14 * 0x40 + 0x51) = uStack_11f;
      *(ulong *)(puStack_190 + uVar14 * 0x40 + 0x49) = CONCAT17(uStack_120,uStack_127);
      *(undefined8 *)(puStack_190 + uVar14 * 0x40 + 0x38) = uStack_138;
      *(undefined8 *)(puStack_190 + uVar14 * 0x40 + 0x30) = uStack_140;
      *(ulong *)(puStack_190 + uVar14 * 0x40 + 0x48) = CONCAT71(uStack_127,uStack_128);
      *(undefined8 *)(puStack_190 + uVar14 * 0x40 + 0x40) = uStack_130;
      *(undefined8 *)(puStack_190 + uVar14 * 0x40 + 0x28) = uStack_148;
      *(undefined **)(puStack_190 + uVar14 * 0x40 + 0x20) = puStack_150;
      puVar10 = puStack_190;
    } while (uVar15 - 1 != uVar12);
LAB_101ef1e5c:
    uVar15 = *(ulong *)(puVar9 + 0x10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        puVar11 = (undefined8 *)(puVar9 + uVar16 * 0x40 + 0x20);
        uVar12 = uVar16;
        while( true ) {
          if (*(ulong *)(puVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef25c4);
            (*pcVar3)();
          }
          uStack_148 = puVar11[1];
          puStack_150 = (undefined *)*puVar11;
          uStack_138 = puVar11[3];
          uStack_140 = puVar11[2];
          uStack_130 = puVar11[4];
          uVar21 = *(undefined8 *)((long)puVar11 + 0x31);
          uStack_120 = (undefined1)((ulong)*(undefined8 *)((long)puVar11 + 0x29) >> 0x38);
          uStack_128 = (undefined1)puVar11[5];
          uStack_127 = (undefined7)((ulong)puVar11[5] >> 8);
          uVar16 = uVar12 + 1;
          uStack_11f._7_1_ = (char)((ulong)uVar21 >> 0x38);
          uStack_11f = uVar21;
          if (uStack_11f._7_1_ == '\x01') break;
          puVar11 = puVar11 + 8;
          uVar12 = uVar16;
          if (uVar15 == uVar16) goto LAB_101ef1f9c;
        }
        func_0x000101ef28b4(&puStack_150,&uStack_100);
        puVar6 = puVar18;
        func_0x000107c61558();
        puStack_190 = puVar18;
        if (((ulong)puVar6 & 1) == 0) {
          FUN_101ef07cc(0,*(long *)(puVar18 + 0x10) + 1,1);
        }
        uVar14 = *(ulong *)(puStack_190 + 0x10);
        if (*(ulong *)(puStack_190 + 0x18) >> 1 <= uVar14) {
          FUN_101ef07cc(1 < *(ulong *)(puStack_190 + 0x18),uVar14 + 1,1);
        }
        *(ulong *)(puStack_190 + 0x10) = uVar14 + 1;
        *(undefined8 *)(puStack_190 + uVar14 * 0x40 + 0x51) = uStack_11f;
        *(ulong *)(puStack_190 + uVar14 * 0x40 + 0x49) = CONCAT17(uStack_120,uStack_127);
        *(undefined8 *)(puStack_190 + uVar14 * 0x40 + 0x38) = uStack_138;
        *(undefined8 *)(puStack_190 + uVar14 * 0x40 + 0x30) = uStack_140;
        *(ulong *)(puStack_190 + uVar14 * 0x40 + 0x48) = CONCAT71(uStack_127,uStack_128);
        *(undefined8 *)(puStack_190 + uVar14 * 0x40 + 0x40) = uStack_130;
        *(undefined8 *)(puStack_190 + uVar14 * 0x40 + 0x28) = uStack_148;
        *(undefined **)(puStack_190 + uVar14 * 0x40 + 0x20) = puStack_150;
        puVar18 = puStack_190;
      } while (uVar15 - 1 != uVar12);
    }
  }
LAB_101ef1f9c:
  func_0x000107c61574(puVar9);
  if ((long)param_9 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef2644);
    (*pcVar3)();
  }
  uVar15 = *(ulong *)(puVar10 + 0x10);
  if (param_9 <= *(ulong *)(puVar10 + 0x10)) {
    uVar15 = param_9;
  }
  uVar16 = 1;
  if (param_9 != 0) {
    uVar16 = uVar15 * 2 + 1;
  }
  puVar9 = puVar10;
  func_0x000107c615f4(puVar10,2);
  func_0x000107c61480();
  if (puVar9 == (undefined *)0x0) {
    func_0x000107c615e8(puVar10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar15 = *(ulong *)(puVar9 + 0x10);
  func_0x000107c61574();
  if (uVar15 == uVar16 >> 1) {
    puVar6 = puVar10;
    func_0x000107c61480(puVar10,uVar4);
    func_0x000107c615e8(puVar10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar6 == (undefined *)0x0) goto LAB_101ef2028;
  }
  else {
    func_0x000107c615e8();
    puVar9 = puVar10;
    FUN_101ef1440(puVar10,puVar10 + 0x20,0,uVar16);
LAB_101ef2028:
    func_0x000107c615e8(puVar10);
    puVar6 = puVar9;
  }
  if ((long)param_10 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef2668);
    (*pcVar3)();
  }
  uVar15 = *(ulong *)(puVar18 + 0x10);
  if (param_10 <= *(ulong *)(puVar18 + 0x10)) {
    uVar15 = param_10;
  }
  uVar16 = 1;
  if (param_10 != 0) {
    uVar16 = uVar15 * 2 + 1;
  }
  puVar10 = puVar18;
  func_0x000107c615f4(puVar18,2);
  func_0x000107c61480();
  if (puVar10 == (undefined *)0x0) {
    func_0x000107c615e8(puVar18);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar15 = *(ulong *)(puVar10 + 0x10);
  func_0x000107c61574();
  if (uVar15 == uVar16 >> 1) {
    puVar9 = puVar18;
    func_0x000107c61480(puVar18,uVar4);
    func_0x000107c615e8(puVar18);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar9 != (undefined *)0x0) goto LAB_101ef20bc;
  }
  else {
    func_0x000107c615e8();
    puVar10 = puVar18;
    FUN_101ef1440(puVar18,puVar18 + 0x20,0,uVar16);
  }
  func_0x000107c615e8(puVar18);
  puVar9 = puVar10;
LAB_101ef20bc:
  puStack_150 = puVar5;
  func_0x000107c6157c(puVar5);
  FUN_101eef7f8(puVar6);
  FUN_101eef7f8(puVar9);
  puStack_b8 = puStack_150;
  uVar15 = *(ulong *)(puVar5 + 0x10);
  func_0x000107c61574(puVar5);
  if ((long)uVar15 < (long)uVar19) {
    puStack_150 = param_4;
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    FUN_101eef7f8();
    puVar10 = puStack_150;
    func_0x000107c61434(puStack_150);
    FUN_101eefba0(&puStack_150,FUN_101ef1514);
    uVar19 = uVar20 - uVar15;
    func_0x000107c6142c(puVar10);
    if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef26fc);
      (*pcVar3)();
    }
    uVar16 = *(ulong *)(puStack_150 + 0x10);
    if (uVar19 <= *(ulong *)(puStack_150 + 0x10)) {
      uVar16 = uVar19;
    }
    lVar13 = 1;
    if (uVar20 != uVar15) {
      lVar13 = uVar16 * 2 + 1;
    }
    FUN_101eef694(puStack_150,puStack_150 + 0x20,0,lVar13);
  }
  FUN_101eefba0(&puStack_b8,0x101ef1540);
  puVar10 = puStack_b8;
  lVar13 = *(long *)(puStack_b8 + 0x10);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar13 != 0) {
    puStack_150 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar13,0);
    puVar11 = (undefined8 *)(puVar10 + 0x28);
    puVar18 = puStack_150;
    do {
      uVar4 = puVar11[-1];
      uVar21 = *puVar11;
      uVar15 = *(ulong *)(puVar18 + 0x10);
      uVar19 = *(ulong *)(puVar18 + 0x18);
      puStack_150 = puVar18;
      func_0x000107c61434(uVar21);
      if (uVar19 >> 1 <= uVar15) {
        func_0x000100403514(1 < uVar19,uVar15 + 1,1);
        puVar18 = puStack_150;
      }
      puVar11 = puVar11 + 8;
      *(ulong *)(puVar18 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar18 + uVar15 * 0x10 + 0x20) = uVar4;
      *(undefined8 *)(puVar18 + uVar15 * 0x10 + 0x28) = uVar21;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  puVar5 = puVar18;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar18);
  puStack_150 = param_3;
  FUN_101eef7f8(param_5);
  func_0x000107c61434(param_4);
  FUN_101eef7f8();
  func_0x000107c61434(param_6);
  FUN_101eef7f8();
  puVar18 = puStack_150;
  uVar15 = *(ulong *)(puStack_150 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar19 = 0;
    do {
      if (*(ulong *)(puVar18 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef25c0);
        (*pcVar3)();
      }
      puVar1 = (ulong *)(puVar18 + uVar19 * 0x40 + 0x20);
      uVar16 = puVar1[1];
      uVar20 = *puVar1;
      uStack_e8 = puVar1[3];
      uStack_f0 = puVar1[2];
      uStack_e0 = puVar1[4];
      uStack_cf = *(undefined8 *)((long)puVar1 + 0x31);
      uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x29) >> 0x38);
      uStack_d8 = (undefined1)puVar1[5];
      uStack_d7 = (undefined7)(puVar1[5] >> 8);
      uVar19 = uVar19 + 1;
      uStack_100 = uVar20;
      uStack_f8 = uVar16;
      if (*(long *)(puVar5 + 0x10) == 0) {
        func_0x000101ef28b4(&uStack_100,&puStack_150);
      }
      else {
        func_0x000107c6068c(&puStack_150,*(undefined8 *)(puVar5 + 0x28));
        func_0x000101ef28b4(&uStack_100,&puStack_190);
        ppuVar7 = &puStack_150;
        func_0x000107c5fb58(ppuVar7,uVar20,uVar16);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar14 = (ulong)ppuVar7 & (uVar12 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar5 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar14 * 0x10);
            uVar8 = *puVar1;
            uVar2 = puVar1[1];
            if ((uVar8 == uVar20 && uVar2 == uVar16) ||
               (func_0x000107c605b8(uVar8,uVar2,uVar20,uVar16,0), (uVar8 & 1) != 0)) {
              func_0x000101eed728(&uStack_100);
              goto LAB_101ef22b4;
            }
            uVar14 = uVar14 + 1 & ~uVar12;
          } while ((*(ulong *)(puVar5 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0);
        }
      }
      puVar6 = puVar9;
      func_0x000107c61558();
      puStack_108 = puVar9;
      if (((ulong)puVar6 & 1) == 0) {
        FUN_101ef07cc(0,*(long *)(puVar9 + 0x10) + 1,1);
      }
      uVar20 = *(ulong *)(puStack_108 + 0x10);
      if (*(ulong *)(puStack_108 + 0x18) >> 1 <= uVar20) {
        FUN_101ef07cc(1 < *(ulong *)(puStack_108 + 0x18),uVar20 + 1,1);
      }
      *(ulong *)(puStack_108 + 0x10) = uVar20 + 1;
      *(undefined8 *)(puStack_108 + uVar20 * 0x40 + 0x51) = uStack_cf;
      *(ulong *)(puStack_108 + uVar20 * 0x40 + 0x49) = CONCAT17(uStack_d0,uStack_d7);
      *(ulong *)(puStack_108 + uVar20 * 0x40 + 0x38) = uStack_e8;
      *(ulong *)(puStack_108 + uVar20 * 0x40 + 0x30) = uStack_f0;
      *(ulong *)(puStack_108 + uVar20 * 0x40 + 0x48) = CONCAT71(uStack_d7,uStack_d8);
      *(ulong *)(puStack_108 + uVar20 * 0x40 + 0x40) = uStack_e0;
      *(ulong *)(puStack_108 + uVar20 * 0x40 + 0x28) = uStack_f8;
      *(ulong *)(puStack_108 + uVar20 * 0x40 + 0x20) = uStack_100;
      puVar9 = puStack_108;
LAB_101ef22b4:
    } while (uVar19 != uVar15);
  }
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(puVar18);
  puStack_150 = puVar9;
  func_0x000107c6157c(puVar9);
  FUN_101eefba0(&puStack_150,FUN_101ef1514);
  func_0x000107c61574(puVar9);
  puVar18 = puStack_150;
  lVar13 = param_7[1];
  if (lVar13 != 0) {
    uVar4 = *param_7;
    uStack_188 = param_7[3];
    puStack_190 = (undefined *)param_7[2];
    uStack_180 = param_7[4];
    uStack_178 = (undefined1)param_7[5];
    uStack_16f = *(undefined8 *)((long)param_7 + 0x31);
    uStack_177 = (undefined7)*(undefined8 *)((long)param_7 + 0x29);
    uStack_170 = (undefined1)((ulong)*(undefined8 *)((long)param_7 + 0x29) >> 0x38);
    uStack_148 = uStack_a8;
    puStack_150 = puStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_11f = uStack_7f;
    uStack_127 = uStack_87;
    uStack_120 = uStack_80;
    func_0x000101ef28b4(&puStack_150,&uStack_100);
    puVar5 = puVar10;
    func_0x000107c61558();
    puVar9 = puVar10;
    if (((ulong)puVar5 & 1) == 0) {
      puVar9 = (undefined *)0x0;
      FUN_101ef07f0(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10,
                    PTR__swift_bridgeObjectRelease_11034f258);
    }
    uVar15 = *(ulong *)(puVar9 + 0x10);
    puVar10 = puVar9;
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar15) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
      FUN_101ef07f0(puVar10,uVar15 + 1,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
    }
    *(ulong *)(puVar10 + 0x10) = uVar15 + 1;
    *(undefined8 *)(puVar10 + uVar15 * 0x40 + 0x20) = uVar4;
    *(long *)(puVar10 + uVar15 * 0x40 + 0x28) = lVar13;
    *(undefined8 *)(puVar10 + uVar15 * 0x40 + 0x51) = uStack_16f;
    *(ulong *)(puVar10 + uVar15 * 0x40 + 0x49) = CONCAT17(uStack_170,uStack_177);
    *(undefined8 *)(puVar10 + uVar15 * 0x40 + 0x38) = uStack_188;
    *(undefined **)(puVar10 + uVar15 * 0x40 + 0x30) = puStack_190;
    *(ulong *)(puVar10 + uVar15 * 0x40 + 0x48) = CONCAT71(uStack_177,uStack_178);
    *(undefined8 *)(puVar10 + uVar15 * 0x40 + 0x40) = uStack_180;
    puStack_b8 = puVar10;
  }
  FUN_101eefba0(&puStack_b8,0x101ef1540);
  puVar10 = puStack_b8;
  puVar5 = puStack_b8;
  FUN_101eef8f8(puStack_b8,param_2);
  puVar9 = puVar18;
  FUN_101eef8f8(puVar18,param_2);
  func_0x000107c61574(puVar18);
  func_0x000107c61434(param_1);
  func_0x000107c61434(puVar5);
  FUN_101eef5a8();
  FUN_101eef5a8(puVar9);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar18 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar18 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar18 = puVar5;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(puVar5);
  if (SCARRY8(uVar17,(long)puVar18)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ef26a8);
    (*pcVar3)();
  }
  auVar22._8_8_ = puVar18 + uVar17;
  auVar22._0_8_ = param_1;
  return auVar22;
}



/* Entry: 101ef2880; end: 101ef28ef;  */

undefined8 FUN_101ef2880(undefined8 param_1)

{
  (*(code *)(undefined *)0x101eed400)();
  return param_1;
}



/* Entry: 101ef28f0; end: 101ef2967;  */

void FUN_101ef28f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e3c238 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c51c8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e3c238 = puVar1;
  return;
}



/* Entry: 101ef2968; end: 101ef299f;  */

void FUN_101ef2968(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ef29a0; end: 101ef29bb;  */

void FUN_101ef29a0(long param_1,long param_2)

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



/* Entry: 101ef29bc; end: 101ef29df;  */

void FUN_101ef29bc(void)

{
  FUN_101eee7e0();
  return;
}



/* Entry: 101ef29e0; end: 101ef29ff;  */

void FUN_101ef29e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ef2a00; end: 101ef2a43;  */

void FUN_101ef2a00(void)

{
  FUN_101eeeac8();
  return;
}



/* Entry: 101ef2a44; end: 101ef2a83;  */

void FUN_101ef2a44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ef2a84; end: 101ef2abf;  */

void FUN_101ef2a84(void)

{
  FUN_101eeee10();
  return;
}



/* Entry: 101ef2ac0; end: 101ef2af7;  */

void FUN_101ef2ac0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ef2af8; end: 101ef2b1f;  */

void FUN_101ef2af8(void)

{
  FUN_101eef2fc();
  return;
}



/* Entry: 101ef2b20; end: 101ef2bc7;  */

void FUN_101ef2b20(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101ef2bc8; end: 101ef2be7;  */

void FUN_101ef2bc8(long param_1,long param_2)

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



/* Entry: 101ef2be8; end: 101ef2c5b;  */

void FUN_101ef2be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101ef2c5c; end: 101ef2d5b;  */

undefined * FUN_101ef2c5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_11049ae00;
  func_0x000107c613fc(&UNK_11049ae00,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  pcStack_50 = FUN_101ef2e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101ef2e20;
  puStack_58 = &UNK_11049ae18;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar4 = PTR_PTR_1126a98b8;
  func_0x000107c610f8(PTR_PTR_1126a98b8);
  func_0x000107c45f48();
  func_0x000107c61170(puVar3);
  return puVar4;
}



/* Entry: 101ef2d5c; end: 101ef2e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ef2d5c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long *plVar6;
  long lStack_40;
  long lStack_38;
  long lVar5;
  
  plVar6 = &lStack_40;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = 0;
    FUN_101ef30c4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(long *)(lVar4 + _DAT_112e3c328) = param_1;
    *(undefined8 *)(lVar4 + _DAT_112e3c330) = param_2;
    func_0x000107c61174(param_2);
    lVar5 = param_1;
    func_0x000107c615f0();
    uVar2 = (undefined1)lVar5;
    func_0x000108c7c620();
    *(undefined1 *)(lVar4 + _DAT_112e3c338) = uVar2;
    lStack_40 = lVar4;
    lStack_38 = lVar3;
    func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    func_0x000107c615e8(param_1);
    return (undefined1 *)plVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef2e18);
  (*pcVar1)();
}



/* Entry: 101ef2e18; end: 101ef2e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ef2e18(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar8;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  long lVar7;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar8 = &lStack_40;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = 0;
    FUN_101ef30c4();
    lVar6 = lVar5;
    func_0x000107c610f8();
    *(long *)(lVar6 + _DAT_112e3c328) = lVar4;
    *(undefined8 *)(lVar6 + _DAT_112e3c330) = uVar1;
    func_0x000107c61174(uVar1);
    lVar7 = lVar4;
    func_0x000107c615f0();
    uVar3 = (undefined1)lVar7;
    func_0x000108c7c620();
    *(undefined1 *)(lVar6 + _DAT_112e3c338) = uVar3;
    lStack_40 = lVar6;
    lStack_38 = lVar5;
    func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    func_0x000107c615e8(lVar4);
    return (undefined1 *)plVar8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ef2e18);
  (*pcVar2)();
}



/* Entry: 101ef2e20; end: 101ef2e57;  */

void FUN_101ef2e20(long param_1)

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



/* Entry: 101ef2e58; end: 101ef2e73;  */

void FUN_101ef2e58(long param_1,long param_2)

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



/* Entry: 101ef2e74; end: 101ef2e8f;  */

/* WARNING: Possible PIC construction at 0x000101ef2e80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ef2e84) */

void FUN_101ef2e74(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ef2e90; end: 101ef2edb;  */

void FUN_101ef2e90(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ef2edc; end: 101ef2f57;  */

void FUN_101ef2edc(undefined8 param_1)

{
  if (lRam0000000112e3c278 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e699eac);
  return;
}



/* Entry: 101ef2f58; end: 101ef2f7b;  */

void FUN_101ef2f58(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ef2c5c();
  *param_1 = param_2;
  return;
}



/* Entry: 101ef2f7c; end: 101ef2f8b; -[_TtC41SCSharingExperimentServicesImplementation26SharingFeatureSettingsImpl isUserEligibleForSmsInviteSyncWithSmsInviteFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101ef2f7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e3c338);
}



/* Entry: 101ef2f8c; end: 101ef302b; -[_TtC41SCSharingExperimentServicesImplementation26SharingFeatureSettingsImpl isUserEligibleForSmsInviteWithSmsInviteFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ef2f8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  uVar3 = (ulong)*(byte *)(param_1 + _DAT_112e3c338);
  func_0x000107c61174(param_1);
  func_0x000107c5fca0(uVar3);
  func_0x000107c4a8a4(puVar1,param_2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar2 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101ef302c; end: 101ef308b; -[_TtC41SCSharingExperimentServicesImplementation26SharingFeatureSettingsImpl init] */

void FUN_101ef302c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSharingExperimentServicesImplementation.SharingFeatureSettingsImpl",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef3058);
  (*pcVar1)();
}



/* Entry: 101ef308c; end: 101ef30c3; -[_TtC41SCSharingExperimentServicesImplementation26SharingFeatureSettingsImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ef308c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e3c328));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e3c330));
  return;
}



/* Entry: 101ef30c4; end: 101ef30e3;  */

void FUN_101ef30c4(void)

{
  func_0x000107c61168(&PTR_PTR_112809130);
  return;
}



/* Entry: 101ef30e4; end: 101ef3327;  */

void FUN_101ef30e4(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar2 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar5 - extraout_x12_00;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar4 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    pcVar6 = *(code **)(lVar7 + 0x38);
    (*pcVar6)(lVar3,1,1,lVar1);
  }
  else {
    func_0x000107c5d7e8();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5edb4(lVar5);
      func_0x000107c61170(param_1);
    }
    pcVar6 = *(code **)(lVar7 + 0x38);
    (*pcVar6)(lVar5,param_1 == 0,1,lVar1);
    func_0x0001001021cc(lVar5,lVar3);
    lVar5 = lVar3;
    (**(code **)(lVar7 + 0x30))(lVar3,1,lVar1);
    if ((int)lVar5 != 1) {
      (**(code **)(lVar7 + 0x20))(lVar4,lVar3,lVar1);
      (**(code **)(lVar7 + 0x10))(puVar2,lVar4,lVar1);
      (*pcVar6)(puVar2,0,1,lVar1);
      (*param_3)(puVar2);
      FUN_101ef3d54(puVar2,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar7 + 8))(lVar4,lVar1);
      return;
    }
  }
  FUN_101ef3d54(lVar3,0x112d36580,&UNK_10d9016d0);
  (*pcVar6)(puVar2,1,1,lVar1);
  (*param_3)(puVar2);
  FUN_101ef3d54(puVar2,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 101ef3328; end: 101ef3397;  */

void FUN_101ef3328(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101ef3398; end: 101ef348f; -[_TtC38SCVideoWatermarkServicesImplementation25VideoWatermarkServiceImpl addWithWatermarkProfile:videoUrl:completion:] */

void FUN_101ef3398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4(param_5);
  func_0x000107c5edb4(puVar2,param_4);
  func_0x000107c60bc4(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101ef3a08(param_3,puVar2,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 101ef3490; end: 101ef356b;  */

void FUN_101ef3490(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000100029394(param_1,puVar3);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
    puVar4 = puVar2;
  }
  (**(code **)(param_2 + 0x10))(param_2,puVar4);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101ef356c; end: 101ef3953;  */

/* WARNING: Possible PIC construction at 0x000101ef3888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ef388c) */

void FUN_101ef356c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long alStack_b0 [2];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  uStack_88 = param_1;
  func_0x000107c5ede0();
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar9 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = 0x112e3c3a0;
  puVar4 = &UNK_10da27e30;
  lStack_a0 = lVar9 - extraout_x12;
  func_0x0001000285a8(0x112e3c3a0,&UNK_10da27e30);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (lVar9 - extraout_x12) - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5f11c();
  lVar10 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar12 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar12 - extraout_x12_00;
  func_0x000107c5ed6c();
  puVar5 = puVar4;
  func_0x000107c5fb1c();
  func_0x000107c6142c(puVar4);
  func_0x000107c5f104(uVar12);
  func_0x000107c5f0f8(lVar13,lVar3,puVar5,uVar12);
  lVar3 = lVar13;
  (**(code **)(lVar10 + 0x30))(lVar13,1,lVar2);
  if ((int)lVar3 == 1) {
    lVar2 = 0x112e3c3a0;
    FUN_101ef3d54(lVar13,0x112e3c3a0,&UNK_10da27e30);
LAB_101ef3700:
    lVar10 = lStack_90;
    func_0x000107c5eda8(lVar9);
    func_0x000107c5ed88();
    lStack_78 = lVar13;
    lStack_70 = lVar2;
    func_0x000107c61434(lVar2);
    func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
    func_0x000107c6142c(lVar2);
    lVar3 = lStack_70;
    lVar2 = lStack_a0;
    func_0x000107c5ed9c(lStack_a0,lStack_78,lStack_70);
    func_0x000107c6142c(lVar3);
    lVar3 = lStack_98;
    (**(code **)(lStack_98 + 8))(lVar9,lVar10);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5ed90();
    puVar6 = puVar5;
    func_0x000107c5ed90();
    lStack_78 = 0;
    puVar7 = puVar4;
    func_0x000107c4d13c();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    lVar13 = lStack_78;
    if (((int)puVar7 == 0) ||
       ((**(code **)(lVar3 + 0x20))(uStack_88,lVar2,lVar10),
       *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(lVar13);
      return;
    }
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar11,lVar13,lVar2);
    func_0x000107c5f110(uVar12);
    uVar8 = uVar12;
    func_0x000107c5f118();
    pcVar1 = *(code **)(lVar10 + 8);
    (*pcVar1)(uVar12,lVar2);
    if ((uVar8 & 1) == 0) {
      func_0x000107c5f114(uVar12);
      uVar8 = uVar12;
      func_0x000107c5f118();
      (*pcVar1)(uVar12,lVar2);
      lVar13 = lVar11;
      (*pcVar1)();
      if ((uVar8 & 1) == 0) goto LAB_101ef3700;
    }
    else {
      (*pcVar1)(lVar11,lVar2);
    }
    (**(code **)(lStack_98 + 0x10))(uStack_88,param_2,lStack_90);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  func_0x000107c60e78();
  *(undefined1 **)(lVar11 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar11 + -8) = FUN_101ef3954;
  func_0x000107c60eb0("SCVideoWatermarkServicesImplementation.VideoWatermarkServiceImpl",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef3980);
  (*pcVar1)();
}



/* Entry: 101ef3954; end: 101ef39af; -[_TtC38SCVideoWatermarkServicesImplementation25VideoWatermarkServiceImpl init] */

void FUN_101ef3954(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCVideoWatermarkServicesImplementation.VideoWatermarkServiceImpl",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef3980);
  (*pcVar1)();
}



/* Entry: 101ef39b0; end: 101ef39e7; -[_TtC38SCVideoWatermarkServicesImplementation25VideoWatermarkServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ef39cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ef39d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ef39b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e3c368));
  return;
}



/* Entry: 101ef39e8; end: 101ef3a07;  */

void FUN_101ef39e8(void)

{
  func_0x000107c61168(&PTR_PTR_112809200);
  return;
}



/* Entry: 101ef3a08; end: 101ef3d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ef3a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d36580;
  uStack_a0 = param_2;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar13 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar13 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_11049af10;
  func_0x000107c613fc(&UNK_11049af10,0x18,7);
  *(long *)(puVar2 + 0x10) = param_4;
  puStack_98 = puVar2;
  func_0x000107c60bc4(param_4);
  func_0x0001000d224c(&puStack_90);
  puVar2 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    puVar3 = puStack_90;
    uStack_a8 = param_1;
    func_0x000107c40b94();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      uVar4 = uStack_a0;
      FUN_101ef356c(lVar10,uStack_a0);
      func_0x0001000d224c(&puStack_90);
      func_0x000107c5ed90();
      puVar5 = puStack_90;
      func_0x000107c5dde4(puStack_90);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_90);
      func_0x000107c61170(uVar4);
      func_0x000107c5a534(puVar3);
      func_0x000107c5a658(puVar3);
      func_0x000107c5513c(puVar3);
      func_0x000107c58bec(puVar3);
      func_0x000107c529f4(puVar3);
      puVar6 = &UNK_11049af38;
      func_0x000107c613fc(&UNK_11049af38,0x20,7);
      puVar12 = puStack_98;
      *(code **)(puVar6 + 0x10) = FUN_101ef3d4c;
      *(undefined **)(puVar6 + 0x18) = puStack_98;
      pcStack_70 = FUN_101ef3d94;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_101ef3328;
      puStack_78 = &UNK_11049af50;
      ppuVar7 = &puStack_90;
      puStack_68 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_68;
      func_0x000107c6157c(puVar12);
      func_0x000107c61574(puVar6);
      func_0x000107c434fc(puVar3);
      func_0x000107c615e8(puVar5);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(puVar2);
      func_0x000107c615e8(puVar3);
      (**(code **)(lVar8 + 8))(lVar10,lVar1);
      goto LAB_101ef3d24;
    }
    func_0x000107c615e8(puVar2);
  }
  (**(code **)(lVar8 + 0x38))(lVar11,1,1,lVar1);
  func_0x000100029394(lVar11,puVar13);
  puVar9 = puVar13;
  (**(code **)(lVar8 + 0x30))(puVar13,1,lVar1);
  if ((int)puVar9 == 1) {
    puVar9 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar8 + 8))(puVar13,lVar1);
  }
  (**(code **)(param_4 + 0x10))(param_4,puVar9);
  func_0x000107c61170(puVar9);
  FUN_101ef3d54(lVar11,0x112d36580,&UNK_10d9016d0);
  puVar12 = puStack_98;
LAB_101ef3d24:
  func_0x000107c61574(puVar12);
  return;
}



/* Entry: 101ef3d4c; end: 101ef3d53;  */

void FUN_101ef3d4c(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000100029394(param_1,puVar4);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
    puVar5 = puVar2;
  }
  (**(code **)(lVar3 + 0x10))(lVar3,puVar5);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101ef3d54; end: 101ef3d93;  */

undefined8 FUN_101ef3d54(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101ef3d94; end: 101ef3db7;  */

void FUN_101ef3d94(long param_1)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar3 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar6 - extraout_x12_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    pcVar7 = *(code **)(lVar8 + 0x38);
    (*pcVar7)(lVar4,1,1,lVar2);
  }
  else {
    func_0x000107c5d7e8();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5edb4(lVar6);
      func_0x000107c61170(param_1);
    }
    pcVar7 = *(code **)(lVar8 + 0x38);
    (*pcVar7)(lVar6,param_1 == 0,1,lVar2);
    func_0x0001001021cc(lVar6,lVar4);
    lVar6 = lVar4;
    (**(code **)(lVar8 + 0x30))(lVar4,1,lVar2);
    if ((int)lVar6 != 1) {
      (**(code **)(lVar8 + 0x20))(lVar5,lVar4,lVar2);
      (**(code **)(lVar8 + 0x10))(puVar3,lVar5,lVar2);
      (*pcVar7)(puVar3,0,1,lVar2);
      (*pcVar1)(puVar3);
      FUN_101ef3d54(puVar3,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar8 + 8))(lVar5,lVar2);
      return;
    }
  }
  FUN_101ef3d54(lVar4,0x112d36580,&UNK_10d9016d0);
  (*pcVar7)(puVar3,1,1,lVar2);
  (*pcVar1)(puVar3);
  FUN_101ef3d54(puVar3,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 101ef3db8; end: 101ef3e07;  */

void FUN_101ef3db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 101ef3e08; end: 101ef3e37;  */

void FUN_101ef3e08(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4f1c8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ef3e38; end: 101ef3ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ef3e38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_101ef39e8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e3c368) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e3c370) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101ef3ec0; end: 101ef3ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ef3ec0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = 0;
  FUN_101ef39e8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e3c368) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112e3c370) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 101ef3ec8; end: 101ef3ef3;  */

/* WARNING: Possible PIC construction at 0x000101ef3ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ef3ee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ef3ed8) */
/* WARNING: Removing unreachable block (ram,0x000101ef3ee8) */

void FUN_101ef3ec8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101ef3ef4; end: 101ef3f73;  */

void FUN_101ef3ef4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ef3f74; end: 101ef3fbf;  */

undefined8 FUN_101ef3f74(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001007908d8(param_1,param_2);
  return unaff_x20;
}



/* Entry: 101ef3fc0; end: 101ef3ff3;  */

void FUN_101ef3fc0(void)

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



/* Entry: 101ef3ff4; end: 101ef4043;  */

undefined8 FUN_101ef3ff4(void)

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



/* Entry: 101ef4044; end: 101ef4087;  */

undefined1  [16] FUN_101ef4044(void)

{
  return ZEXT816(0x11049b0d8);
}



/* Entry: 101ef4088; end: 101ef40af;  */

void FUN_101ef4088(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ef40b0; end: 101ef40b7;  */

undefined8 FUN_101ef40b0(void)

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



/* Entry: 101ef40b8; end: 101ef4103;  */

undefined8 FUN_101ef40b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001004effe0(param_1,param_2);
  return unaff_x20;
}



/* Entry: 101ef4104; end: 101ef4137;  */

void FUN_101ef4104(void)

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



/* Entry: 101ef4138; end: 101ef4187;  */

undefined8 FUN_101ef4138(void)

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



/* Entry: 101ef4188; end: 101ef41cb;  */

undefined1  [16] FUN_101ef4188(void)

{
  return ZEXT816(0x11049b1a0);
}



/* Entry: 101ef41cc; end: 101ef41f3;  */

void FUN_101ef41cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ef41f4; end: 101ef41fb;  */

undefined8 FUN_101ef41f4(void)

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



/* Entry: 101ef41fc; end: 101ef46e7;  */

long FUN_101ef41fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  puVar1 = PTR_PTR_1126a98d0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x53534664756f6c63;
  func_0x000107c5fadc(0x53534664756f6c63,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00d310);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00aca0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  *(undefined **)(unaff_x20 + 0x58) = puVar3;
  return unaff_x20;
}



/* Entry: 101ef46e8; end: 101ef476b;  */

void FUN_101ef46e8(void)

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
  return;
}



/* Entry: 101ef476c; end: 101ef47bb;  */

undefined8 FUN_101ef476c(void)

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



/* Entry: 101ef47bc; end: 101ef47ff;  */

undefined1  [16] FUN_101ef47bc(void)

{
  return ZEXT816(0x11049b268);
}



/* Entry: 101ef4800; end: 101ef4827;  */

void FUN_101ef4800(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ef4828; end: 101ef482f;  */

undefined8 FUN_101ef4828(void)

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



/* Entry: 101ef4830; end: 101ef5b3b;  */

long FUN_101ef4830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  *(undefined8 *)(unaff_x20 + 0x70) = param_3;
  *(undefined8 *)(unaff_x20 + 0x78) = param_4;
  *(undefined8 *)(unaff_x20 + 0x80) = param_5;
  *(undefined8 *)(unaff_x20 + 0x88) = param_6;
  *(undefined8 *)(unaff_x20 + 0x90) = param_7;
  *(undefined8 *)(unaff_x20 + 0x98) = param_8;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_9;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_10;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_11;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_12;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_13;
  *(undefined8 *)(unaff_x20 + 200) = param_14;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_15;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_16;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_20;
  *(undefined8 *)(unaff_x20 + 0x100) = param_21;
  *(undefined8 *)(unaff_x20 + 0x108) = param_22;
  *(undefined8 *)(unaff_x20 + 0x110) = param_23;
  *(undefined8 *)(unaff_x20 + 0x118) = param_24;
  *(undefined8 *)(unaff_x20 + 0x120) = param_25;
  func_0x0001000285a8(0x112e3c7a0,&UNK_10da28488);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = param_26;
  func_0x000107c6157c(param_26);
  func_0x0001003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112e3c7a8,&UNK_10da28490);
  func_0x000107c610f8();
  uVar8 = param_27;
  func_0x000107c6157c(param_27);
  func_0x0001003b3b80();
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar4 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  puVar5 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  puVar6 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x38) = puVar6;
  puVar7 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x40) = puVar7;
  puVar10 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x48) = puVar10;
  puVar11 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x50) = puVar11;
  puVar12 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x58) = puVar12;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x60) = puVar13;
  puVar9 = PTR_PTR_1126a98d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar9;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0x6553726579616c70;
  func_0x000107c5fadc(0x6553726579616c70,0xee00736563697672);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f019f20);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f019f40);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f019f70);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f019f90);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f019fb0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f019fd0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar9);
  func_0x000107c61174();
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar9);
  func_0x000107c61174();
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f019ff0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f01a010);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a030);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f01a050);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a070);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f01a090);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar8 = 0xd000000000000030;
  func_0x000107c5fadc(0xd000000000000030,0x800000010f01a0c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f01a100);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar3);
  uVar8 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f01a130);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(puVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef5b20);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x128) = puVar4;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef5b24);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x130) = puVar5;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef5b28);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x138) = puVar6;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef5b2c);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x140) = puVar7;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef5b30);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x148) = puVar10;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef5b34);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x150) = puVar11;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef5b38);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x158) = puVar12;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar13 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_25);
    func_0x000107c61574(param_26);
    func_0x000107c61574(param_27);
    *(undefined **)(unaff_x20 + 0x160) = puVar13;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ef5b3c);
  (*pcVar1)();
}



/* Entry: 101ef5b3c; end: 101ef5cc7;  */

void FUN_101ef5b3c(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  return;
}



/* Entry: 101ef5cc8; end: 101ef5d17;  */

undefined8 FUN_101ef5cc8(void)

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



/* Entry: 101ef5d18; end: 101ef5dcb;  */

undefined1  [16] FUN_101ef5d18(void)

{
  return ZEXT816(0x11049b330);
}



/* Entry: 101ef5dcc; end: 101ef5df3;  */

void FUN_101ef5dcc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ef5df4; end: 101ef5dfb;  */

undefined8 FUN_101ef5df4(void)

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



/* Entry: 101ef5dfc; end: 101ef5e8f;  */

void FUN_101ef5dfc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002b9750();
  func_0x000107c613fc();
  FUN_101ef5ef0(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101ef5e90; end: 101ef5e9b;  */

void FUN_101ef5e90(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002b9750();
  func_0x000107c613fc();
  FUN_101ef5ef0(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ef5e9c; end: 101ef5eef;  */

undefined8 FUN_101ef5e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101ef5ef0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101ef5ef0; end: 101ef60cb;  */

void FUN_101ef5ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a98e0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc6ab0);
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



/* Entry: 101ef60cc; end: 101ef6107;  */

void FUN_101ef60cc(void)

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



/* Entry: 101ef6108; end: 101ef615b;  */

void FUN_101ef6108(undefined8 *param_1)

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



/* Entry: 101ef615c; end: 101ef6163;  */

void FUN_101ef615c(undefined8 *param_1)

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



/* Entry: 101ef6164; end: 101ef61b3;  */

undefined8 FUN_101ef6164(void)

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



/* Entry: 101ef61b4; end: 101ef61f7;  */

undefined1  [16] FUN_101ef61b4(void)

{
  return ZEXT816(0x11049b4d8);
}



/* Entry: 101ef61f8; end: 101ef621f;  */

void FUN_101ef61f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ef6220; end: 101ef6227;  */

undefined8 FUN_101ef6220(void)

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



/* Entry: 101ef6228; end: 101ef6bf3;  */

void FUN_101ef6228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  puVar1 = PTR_PTR_1126a98e8;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174();
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f006f60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef384c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f00d930);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efe1e40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f019ff0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f01a160);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2a290);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e710);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_17);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_18);
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef29390);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc30d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  *(undefined **)(unaff_x20 + 0xa8) = puVar3;
  return;
}



/* Entry: 101ef6bf4; end: 101ef6cc7;  */

void FUN_101ef6bf4(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 101ef6cc8; end: 101ef6d17;  */

undefined8 FUN_101ef6cc8(void)

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



/* Entry: 101ef6d18; end: 101ef6d5b;  */

undefined1  [16] FUN_101ef6d18(void)

{
  return ZEXT816(0x11049b5a0);
}



/* Entry: 101ef6d5c; end: 101ef6d83;  */

void FUN_101ef6d5c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ef6d84; end: 101ef6d8b;  */

undefined8 FUN_101ef6d84(void)

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



/* Entry: 101ef6d8c; end: 101ef6def;  */

undefined8
FUN_101ef6d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101ef6df0(param_1,param_2,param_3,param_4);
  return unaff_x20;
}


