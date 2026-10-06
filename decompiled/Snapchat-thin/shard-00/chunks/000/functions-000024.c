/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000a8d7c; end: 1000a91df;  */

void FUN_1000a8d7c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long unaff_x21;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  long lVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar20 = param_3[1];
  if (0 < lVar20) {
    lVar11 = 0;
    do {
      lVar18 = lVar11 + 1;
      if (lVar18 < lVar20) {
        plVar16 = (long *)(*param_3 + lVar18 * 0x40);
        plVar17 = (long *)(*param_3 + lVar11 * 0x40);
        if (*plVar16 == *plVar17) {
          uVar23 = plVar16[1];
          if (uVar23 == plVar17[1] && plVar16[2] == plVar17[2]) {
            uVar23 = 0;
          }
          else {
            func_0x000107c605b8();
          }
        }
        else {
          uVar23 = (ulong)(*plVar16 < *plVar17);
        }
        lVar18 = lVar11 + 2;
        lVar6 = lVar18;
        if (lVar18 < lVar20) {
          plVar16 = plVar17 + 9;
          do {
            lVar6 = plVar16[8];
            if (plVar16[7] == plVar16[-1]) {
              if (lVar6 != *plVar16 || plVar16[9] != plVar16[1]) {
                func_0x000107c605b8();
                uVar5 = (uint)lVar6;
                goto joined_r0x0001000a8e98;
              }
              if ((uVar23 & 1) != 0) goto LAB_1000a8eac;
            }
            else {
              uVar5 = (uint)(plVar16[7] < plVar16[-1]);
joined_r0x0001000a8e98:
              lVar6 = lVar18;
              if ((((uint)uVar23 ^ uVar5) & 1) != 0) break;
            }
            lVar18 = lVar18 + 1;
            plVar16 = plVar16 + 8;
            lVar6 = lVar20;
          } while (lVar20 != lVar18);
        }
        lVar18 = lVar6;
        if ((uVar23 & 1) != 0) {
LAB_1000a8eac:
          if (lVar18 < lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91b4);
            (*pcVar3)();
          }
          if (lVar11 < lVar18) {
            lVar10 = *param_3;
            puVar14 = (undefined8 *)(lVar10 + lVar11 * 0x40);
            lVar6 = lVar18;
            lVar20 = lVar11;
            puVar2 = (undefined8 *)(lVar10 + lVar18 * 0x40);
            do {
              puVar12 = puVar2 + -8;
              lVar6 = lVar6 + -1;
              if (lVar20 != lVar6) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91d4);
                  (*pcVar3)();
                }
                uVar27 = puVar14[5];
                uVar26 = puVar14[4];
                uVar25 = puVar14[7];
                uVar24 = puVar14[6];
                uVar33 = puVar14[1];
                uVar31 = *puVar14;
                uVar29 = puVar14[3];
                uVar28 = puVar14[2];
                uVar35 = puVar2[-4];
                uVar40 = puVar2[-1];
                uVar38 = puVar2[-2];
                uVar45 = puVar2[-7];
                uVar44 = *puVar12;
                uVar43 = puVar2[-5];
                uVar42 = puVar2[-6];
                puVar14[5] = puVar2[-3];
                puVar14[4] = uVar35;
                puVar14[7] = uVar40;
                puVar14[6] = uVar38;
                puVar14[1] = uVar45;
                *puVar14 = uVar44;
                puVar14[3] = uVar43;
                puVar14[2] = uVar42;
                puVar2[-7] = uVar33;
                *puVar12 = uVar31;
                puVar2[-5] = uVar29;
                puVar2[-6] = uVar28;
                puVar2[-3] = uVar27;
                puVar2[-4] = uVar26;
                puVar2[-1] = uVar25;
                puVar2[-2] = uVar24;
              }
              lVar20 = lVar20 + 1;
              puVar14 = puVar14 + 8;
              puVar2 = puVar12;
            } while (lVar20 < lVar6);
          }
        }
      }
      lVar20 = param_3[1];
      lVar6 = lVar18;
      if (lVar18 < lVar20) {
        if (SBORROW8(lVar18,lVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91b0);
          (*pcVar3)();
        }
        if (lVar18 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91b8);
            (*pcVar3)();
          }
          lVar10 = lVar11 + param_4;
          if (lVar20 <= lVar11 + param_4) {
            lVar10 = lVar20;
          }
          if (lVar10 < lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91bc);
            (*pcVar3)();
          }
          if (lVar18 != lVar10) {
            lVar21 = *param_3;
            plVar16 = (long *)(lVar21 + lVar18 * 0x40 + -0x40);
            lVar20 = lVar11 - lVar18;
            lVar19 = lVar20;
            plVar17 = plVar16;
LAB_1000a8f90:
            do {
              plVar15 = plVar16 + 8;
              if (*plVar15 == *plVar16) {
                uVar23 = plVar16[9];
                if ((uVar23 != plVar16[1] || plVar16[10] != plVar16[2]) &&
                   (func_0x000107c605b8(), (uVar23 & 1) != 0)) {
LAB_1000a8fcc:
                  if (lVar21 == 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91c0);
                    (*pcVar3)();
                  }
                  lVar37 = plVar16[1];
                  lVar36 = *plVar16;
                  lVar41 = plVar16[3];
                  lVar39 = plVar16[2];
                  plVar16[1] = plVar16[9];
                  *plVar16 = *plVar15;
                  plVar16[3] = plVar16[0xb];
                  plVar16[2] = plVar16[10];
                  lVar30 = plVar16[5];
                  lVar6 = plVar16[4];
                  lVar34 = plVar16[7];
                  lVar32 = plVar16[6];
                  plVar16[5] = plVar16[0xd];
                  plVar16[4] = plVar16[0xc];
                  plVar16[7] = plVar16[0xf];
                  plVar16[6] = plVar16[0xe];
                  plVar16[9] = lVar37;
                  *plVar15 = lVar36;
                  plVar16[0xb] = lVar41;
                  plVar16[10] = lVar39;
                  plVar16[0xd] = lVar30;
                  plVar16[0xc] = lVar6;
                  plVar16[0xf] = lVar34;
                  plVar16[0xe] = lVar32;
                  bVar4 = lVar20 != -1;
                  lVar20 = lVar20 + 1;
                  plVar16 = plVar16 + -8;
                  if (bVar4) goto LAB_1000a8f90;
                }
              }
              else if (*plVar15 < *plVar16) goto LAB_1000a8fcc;
              lVar18 = lVar18 + 1;
              plVar16 = plVar17 + 8;
              lVar20 = lVar19 + -1;
              lVar6 = lVar10;
              lVar19 = lVar20;
              plVar17 = plVar16;
            } while (lVar18 != lVar10);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar6 < lVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91a0);
        (*pcVar3)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_1000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar23 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar23) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_1000a91e0(puVar9,uVar23 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar23 + 1;
      *(long *)(puVar9 + uVar23 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar23 * 0x10 + 0x28) = lVar6;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91d8);
        (*pcVar3)();
      }
      FUN_1000a92e0(&puStack_58,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1000a9170;
      lVar20 = param_3[1];
      lVar11 = lVar6;
    } while (lVar6 < lVar20);
  }
  puVar9 = puStack_58;
  lVar20 = *param_1;
  if (lVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91e0);
    (*pcVar3)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar22 = (ulong *)(puVar9 + 0x10);
  uVar23 = *puVar22;
  while (1 < uVar23) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91dc);
      (*pcVar3)();
    }
    plVar16 = (long *)(puVar9 + uVar23 * 0x10);
    lVar18 = *plVar16;
    puVar1 = puVar22 + uVar23 * 2;
    uVar13 = puVar1[1];
    FUN_1000a9548(lVar11 + lVar18 * 0x40,lVar11 + *puVar1 * 0x40,lVar11 + uVar13 * 0x40,lVar20);
    if (unaff_x21 != 0) break;
    if ((long)uVar13 < lVar18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91a4);
      (*pcVar3)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91a8);
      (*pcVar3)();
    }
    *plVar16 = lVar18;
    plVar16[1] = uVar13;
    uVar13 = *puVar22;
    lVar11 = uVar13 - uVar23;
    if (uVar13 < uVar23) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a91ac);
      (*pcVar3)();
    }
    uVar23 = uVar13 - 1;
    func_0x000107c610b8(puVar1,puVar1 + 2,lVar11 * 0x10);
    *puVar22 = uVar23;
  }
LAB_1000a9170:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 1000a91e0; end: 1000a92df;  */

undefined * FUN_1000a91e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000a92e0);
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
    puVar3 = (undefined *)0x112d382c0;
    FUN_1000285a8(0x112d382c0,&UNK_10d91c600);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1000a92e0; end: 1000a9547;  */

undefined8 FUN_1000a92e0(ulong *param_1,undefined8 param_2,long *param_3)

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
          goto LAB_1000a93b4;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9530);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1000a9418:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9520);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9528);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9508);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a950c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9514);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a951c);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1000a93b4:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9510);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9518);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9524);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a952c);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1000a9418;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9534);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a94fc);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9548);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1000a9548(lVar9 + lVar12 * 0x40,lVar9 + *plVar1 * 0x40,lVar9 + lVar7 * 0x40,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9500);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a9504);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_1000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1000a9548; end: 1000a97cb;  */

undefined8 FUN_1000a9548(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar2 = lVar9 + 0x3f;
  if (-1 < lVar9) {
    lVar2 = lVar9;
  }
  lVar2 = lVar2 >> 6;
  lVar11 = (long)param_3 - (long)param_2;
  lVar4 = lVar11 + 0x3f;
  if (-1 < lVar11) {
    lVar4 = lVar11;
  }
  lVar4 = lVar4 >> 6;
  if (lVar2 < lVar4) {
    if (((param_4 < param_1) || (param_1 + lVar2 * 8 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 6);
    }
    plVar8 = param_4 + lVar2 * 8;
    plVar5 = param_1;
    if (0x3f < lVar9) {
      do {
        if (param_3 <= param_2) break;
        if (*param_2 == *param_4) {
          uVar1 = param_2[1];
          if ((uVar1 != param_4[1] || param_2[2] != param_4[2]) &&
             (func_0x000107c605b8(), (uVar1 & 1) != 0)) goto LAB_1000a9680;
LAB_1000a9614:
          plVar6 = param_2;
          plVar10 = param_4 + 8;
          plVar7 = param_4;
        }
        else {
          if (*param_4 <= *param_2) goto LAB_1000a9614;
LAB_1000a9680:
          plVar6 = param_2 + 8;
          plVar10 = param_4;
          plVar7 = param_2;
        }
        param_4 = plVar10;
        param_2 = plVar6;
        if (plVar5 != plVar7) {
          lVar9 = plVar7[1];
          lVar2 = *plVar7;
          lVar11 = plVar7[3];
          lVar4 = plVar7[2];
          lVar12 = plVar7[4];
          lVar14 = plVar7[7];
          lVar13 = plVar7[6];
          plVar5[5] = plVar7[5];
          plVar5[4] = lVar12;
          plVar5[7] = lVar14;
          plVar5[6] = lVar13;
          plVar5[1] = lVar9;
          *plVar5 = lVar2;
          plVar5[3] = lVar11;
          plVar5[2] = lVar4;
        }
        plVar5 = plVar5 + 8;
      } while (param_4 < plVar8);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar4 * 8 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar4 << 6);
    }
    plVar7 = param_4 + lVar4 * 8;
    plVar5 = param_2;
    plVar8 = plVar7;
    if ((param_1 < param_2) && (0x3f < lVar11)) {
LAB_1000a96bc:
      plVar10 = param_2 + -8;
      plVar6 = param_3;
      do {
        param_3 = plVar6 + -8;
        plVar8 = plVar7 + -8;
        if (*plVar8 == param_2[-8]) {
          uVar1 = plVar7[-7];
          if ((uVar1 != param_2[-7] || plVar7[-6] != param_2[-6]) &&
             (func_0x000107c605b8(), (uVar1 & 1) != 0)) goto LAB_1000a9734;
        }
        else if (*plVar8 < param_2[-8]) goto LAB_1000a9734;
        if (plVar6 != plVar7) {
          lVar9 = plVar7[-7];
          lVar2 = *plVar8;
          lVar11 = plVar7[-5];
          lVar4 = plVar7[-6];
          lVar12 = plVar7[-4];
          lVar14 = plVar7[-1];
          lVar13 = plVar7[-2];
          plVar6[-3] = plVar7[-3];
          plVar6[-4] = lVar12;
          plVar6[-1] = lVar14;
          plVar6[-2] = lVar13;
          plVar6[-7] = lVar9;
          *param_3 = lVar2;
          plVar6[-5] = lVar11;
          plVar6[-6] = lVar4;
        }
        plVar5 = param_2;
        plVar7 = plVar8;
        plVar6 = param_3;
        if (plVar8 <= param_4) break;
      } while( true );
    }
  }
LAB_1000a9770:
  uVar3 = (long)plVar8 - (long)param_4;
  uVar1 = uVar3 + 0x3f;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  if ((plVar5 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xffffffffffffffc0)) <= plVar5)) {
    func_0x000107c610b8(plVar5,param_4,((long)uVar1 >> 6) << 6);
  }
  return 1;
LAB_1000a9734:
  if (plVar6 != param_2) {
    lVar9 = param_2[-7];
    lVar2 = *plVar10;
    lVar11 = param_2[-5];
    lVar4 = param_2[-6];
    lVar12 = param_2[-4];
    lVar14 = param_2[-1];
    lVar13 = param_2[-2];
    plVar6[-3] = param_2[-3];
    plVar6[-4] = lVar12;
    plVar6[-1] = lVar14;
    plVar6[-2] = lVar13;
    plVar6[-7] = lVar9;
    *param_3 = lVar2;
    plVar6[-5] = lVar11;
    plVar6[-6] = lVar4;
  }
  plVar5 = plVar10;
  plVar8 = plVar7;
  if ((plVar10 <= param_1) || (param_2 = plVar10, plVar7 <= param_4)) goto LAB_1000a9770;
  goto LAB_1000a96bc;
}



/* Entry: 1000a97cc; end: 1000a9853;  */

undefined1  [16] FUN_1000a97cc(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  func_0x000107c61558();
  if ((uVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    func_0x000107c610b8(pauVar5,lVar1 + 0x30,(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a9854);
  (*pcVar3)();
}



/* Entry: 1000a9854; end: 1000a98a3;  */

undefined8 FUN_1000a9854(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x11300bcc0;
  FUN_1000285a8(0x11300bcc0,&UNK_10dc94330);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000a98a4; end: 1000a9a17;  */

void FUN_1000a98a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [72];
  long lStack_58;
  
  puVar1 = param_2;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  uStack_c0 = 0;
  uStack_b8 = 0xe000000000000000;
  func_0x000107c61174(uVar2);
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(uStack_b8);
  uStack_c0 = 0xd000000000000010;
  uStack_b8 = 0x800000010f1b9360;
  func_0x000107c5fb78(param_2[1],param_2[2]);
  uVar4 = uStack_b8;
  uVar3 = uStack_c0;
  FUN_1000a9a18(uStack_c0,uStack_b8);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar4);
  FUN_1000a9a8c(&lStack_58,param_2 + 3);
  if (lStack_58 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_100083b20(&uStack_c0);
    func_0x000107c61574(lStack_58);
    uVar2 = uStack_b8;
    uVar4 = uStack_c0;
    FUN_1000a9854(param_2,&uStack_c0);
    *param_1 = uStack_b8;
    param_1[1] = uStack_b0;
    param_1[3] = uVar2;
    param_1[2] = uVar4;
    func_0x0001000834e4(auStack_a8);
  }
  func_0x000107c61428(puVar1,&uStack_c0,0,0);
  uVar4 = *puVar1;
  func_0x000107c61174(uVar4);
  FUN_1000aa0a8(uVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1000a9a18; end: 1000a9a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a9a18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_11309bf58;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c3e814(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1000a9a8c; end: 1000a9d8f;  */

void FUN_1000a9a8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  code **ppcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *unaff_x20;
  code *pcVar13;
  ulong uVar14;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [24];
  code **appcStack_a8 [3];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  uVar11 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  lVar6 = 0;
  func_0x000107c614b8(0,uVar1,uVar11,&UNK_10e81e58c,&UNK_10e81e594);
  lStack_e8 = lVar6;
  FUN_1000a9d90(&pcStack_100);
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))();
  ppcVar7 = &pcStack_100;
  FUN_1000a9dcc(ppcVar7,lStack_e8);
  func_0x000107c614c0();
  func_0x0001000a9df0(&pcStack_100);
  uVar14 = unaff_x20[4];
  uVar8 = 0xff;
  appcStack_a8[0] = ppcVar7;
  func_0x000107c614b8(0xff,uVar1,uVar11,&UNK_10e81e58c,&UNK_10e81e59c);
  uVar9 = 0x4000001;
  func_0x000107c614d8(0x4000001,lVar6,uVar8);
  func_0x000107c5fa40(&pcStack_100,appcStack_a8,uVar14,PTR___sSON_11034d8b8,uVar9,
                      PTR___sSOSHsWP_11034d8c0);
  if (pcStack_100 != (code *)0x0) {
    lVar6 = unaff_x20[3];
    if (*(long *)(lVar6 + 0x10) == 0) {
      FUN_1000a9fdc(pcStack_100,uStack_f8);
    }
    else {
      FUN_1000a7158();
      if ((uVar14 & 1) != 0) {
        puVar12 = (undefined8 *)(*(long *)(lVar6 + 0x38) + (long)ppcVar7 * 0x18);
        uVar9 = *puVar12;
        uVar2 = puVar12[1];
        uVar4 = *(undefined1 *)(puVar12 + 2);
        func_0x000107c61428(unaff_x20 + 5,auStack_80,0,0);
        if (*(char *)((long)unaff_x20 + 0x39) != '\x01') {
          lVar6 = unaff_x20[5];
          lVar3 = unaff_x20[6];
          lVar5 = unaff_x20[7];
          func_0x000107c61428(0x1138153c0,auStack_c0,0,0);
          FUN_10008a8e8(0x1138153c0,&pcStack_100);
          if (lStack_e8 != 0) {
            func_0x000104857124(&pcStack_100,appcStack_a8);
            FUN_1000a9dcc(appcStack_a8,uStack_90);
            pcStack_e0 = pcStack_100;
            uStack_d8 = uStack_f8;
            pcVar13 = *(code **)(lStack_88 + 0x30);
            lVar10 = 0;
            uStack_f0 = uVar11;
            lStack_e8 = uVar1;
            uStack_d0 = param_2;
            func_0x000107c6143c(0,uVar8);
            (*pcVar13)(param_1,lVar6,lVar3,(char)lVar5,uVar9,uVar2,uVar4,&UNK_1048576dc,&pcStack_100
                       ,lVar10,uStack_90,lStack_88);
            FUN_1000a9fdc(pcStack_100,uStack_f8);
            (**(code **)(*(long *)(lVar10 + -8) + 0x38))(param_1,0,1,lVar10);
            func_0x0001000a9df0(appcStack_a8);
            return;
          }
          func_0x00010008a938(&pcStack_100);
        }
        (*pcStack_100)(param_1,param_2);
        FUN_1000a9fdc(pcStack_100,uStack_f8);
        lVar6 = 0;
        func_0x000107c6143c(0,uVar8);
        pcVar13 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
        uVar11 = 0;
        goto LAB_1000a9d1c;
      }
      FUN_1000a9fdc(pcStack_100,uStack_f8);
    }
  }
  lVar6 = 0;
  func_0x000107c6143c(0,uVar8);
  pcVar13 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  uVar11 = 1;
LAB_1000a9d1c:
  (*pcVar13)(param_1,uVar11,1,lVar6);
  return;
}



/* Entry: 1000a9d90; end: 1000a9dcb;  */

long * FUN_1000a9d90(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_1[3];
  plVar1 = param_1;
  if ((*(byte *)(*(long *)(lVar2 + -8) + 0x52) >> 1 & 1) != 0) {
    plVar1 = param_2;
    func_0x000107c613f4();
    *param_1 = lVar2;
  }
  return plVar1;
}



/* Entry: 1000a9dcc; end: 1000a9e1f;  */

long * FUN_1000a9dcc(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 1000a9e20; end: 1000a9f53;  */

void FUN_1000a9e20(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c614b4(param_7,param_6,param_5,&UNK_10e81e5c0,&UNK_10e81e5c8);
  uVar1 = 0;
  func_0x000107c614b8(0,param_7,param_5,&UNK_10e81e58c,&UNK_10e81e594);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8_00 + 0x10))((long)puVar2 - extraout_x12,param_2,uVar1);
  func_0x000107c6147c(puVar2,(long)puVar2 - extraout_x12,uVar1,param_6,7);
  (*param_3)(param_1,puVar2);
  (**(code **)(lVar3 + 8))(puVar2,param_6);
  return;
}



/* Entry: 1000a9f54; end: 1000a9f5f;  */

undefined ** FUN_1000a9f54(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1000a9f60; end: 1000a9fdb;  */

void FUN_1000a9f60(void)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  FUN_1000823a8(FUN_1000aa00c,0);
  return;
}



/* Entry: 1000a9fdc; end: 1000a9feb;  */

void FUN_1000a9fdc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1000a9fec; end: 1000aa00b;  */

void FUN_1000a9fec(void)

{
  func_0x000107c61168(&PTR_PTR_11307ca60);
  return;
}



/* Entry: 1000aa00c; end: 1000aa067;  */

void FUN_1000aa00c(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  FUN_1000a9fec();
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c6106c();
  lRam00000001138136c8 = lVar2;
  FUN_1000aa068();
  if (-1 < lVar2) {
    lRam00000001138136d0 = lVar2;
    *param_1 = param_2;
    param_1[1] = (long)&PTR_DAT_1107754d0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000aa068);
  (*pcVar1)();
}



/* Entry: 1000aa068; end: 1000aa06f;  */

ulong FUN_1000aa068(void)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0xc;
  func_0x000107c60f0c();
  if (-1 < (long)uVar2) {
    return uVar2 / 1000;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000aa0a8);
  (*pcVar1)();
}



/* Entry: 1000aa070; end: 1000aa0a7;  */

ulong FUN_1000aa070(ulong param_1)

{
  code *pcVar1;
  
  func_0x000107c60f0c();
  if (-1 < (long)param_1) {
    return param_1 / 1000;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000aa0a8);
  (*pcVar1)();
}



/* Entry: 1000aa0a8; end: 1000aa13f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aa0a8(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (param_1 != 0) {
    lVar1 = unaff_x20 + _DAT_11309bf58;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1000aa140; end: 1000aa26f;  */

undefined * FUN_1000aa140(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000aa270);
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
    puVar3 = (undefined *)0x11300bd48;
    FUN_1000285a8(0x11300bd48,&UNK_10dc943b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x11300bcb8;
    FUN_1000285a8(0x11300bcb8,&UNK_10dc94328);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1000aa270; end: 1000aa27b;  */

undefined ** FUN_1000aa270(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1000aa27c; end: 1000aa307;  */

void FUN_1000aa27c(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1000aa308,param_1);
  return;
}



/* Entry: 1000aa308; end: 1000aa30f;  */

void FUN_1000aa308(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_1000aa310();
  func_0x000107c613fc();
  func_0x000107c6157c();
  FUN_1000aa384();
  *param_1 = unaff_x20;
  param_1[1] = &PTR_DAT_1103c67b0;
  return;
}



/* Entry: 1000aa310; end: 1000aa32f;  */

void FUN_1000aa310(void)

{
  func_0x000107c61168(&PTR_PTR_112da2770);
  return;
}



/* Entry: 1000aa330; end: 1000aa383;  */

void FUN_1000aa330(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1000aa310();
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  FUN_1000aa384();
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103c67b0;
  return;
}



/* Entry: 1000aa384; end: 1000aa5eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aa384(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lStack_68;
  
  FUN_100083b20(&lStack_68);
  uVar7 = *(undefined8 *)(lStack_68 + _DAT_113092298);
  func_0x000107c615f0(uVar7);
  func_0x000107c61170(lStack_68);
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef84a60);
  uVar2 = uVar7;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000107c615e8(uVar7);
  }
  else {
    uVar2 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010ef84a80);
    uVar1 = uVar7;
    func_0x000107c3ebd4(uVar7);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010ef84ab0);
    uVar3 = uVar7;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000023;
    func_0x000107c5fadc(0xd000000000000023,0x800000010ef84ad0);
    uVar4 = uVar7;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010ef84b00);
    uVar5 = uVar7;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    puVar6 = (undefined8 *)0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010ef84b30);
    uVar2 = uVar7;
    func_0x000107c4980c();
    func_0x000107c61170();
    func_0x00010148f328();
    uVar9 = *puVar6;
    iVar8 = (int)uVar3;
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    iVar10 = (int)uVar4;
    if (iVar10 < 2) {
      iVar10 = 1;
    }
    iVar11 = (int)uVar5;
    if (iVar11 < 1) {
      iVar11 = 0x20;
    }
    iVar12 = (int)uVar2;
    if (iVar12 < 2) {
      iVar12 = 1;
    }
    func_0x000107c6157c(uVar9);
    func_0x00010148f9bc(uVar1,iVar8,iVar10,iVar11,iVar12);
    func_0x000107c615e8(uVar7);
    func_0x000107c61574(uVar9);
  }
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1000aa5ec; end: 1000aa5f3;  */

void FUN_1000aa5ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = 0;
  FUN_10009306c(0);
  func_0x000107c610f8();
  FUN_1000aa70c(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1000aa5f4; end: 1000aa647;  */

void FUN_1000aa5f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = 0;
  FUN_10009306c(0);
  func_0x000107c610f8();
  FUN_1000aa70c(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1000aa648; end: 1000aa70b;  */

void FUN_1000aa648(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [48];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd000000000000018;
  FUN_1000a9a18(0xd000000000000018,0x800000010ef86ee0);
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126e1960;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  *param_1 = puVar3;
  func_0x000107c61428(param_2,auStack_60,0,0);
  uVar1 = *param_2;
  func_0x000107c61174(uVar1);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1000aa70c; end: 1000aa757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aa70c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113092298) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000aa758; end: 1000aa763;  */

undefined ** FUN_1000aa758(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 1000aa764; end: 1000aa897;  */

void FUN_1000aa764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103cd9e0;
  func_0x000107c613fc(&UNK_1103cd9e0,0x70,7);
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
  FUN_1000823a8(FUN_1000aa8fc,puVar1);
  return;
}



/* Entry: 1000aa898; end: 1000aa8fb;  */

void FUN_1000aa898(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000aa764(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68));
  FUN_100082720("SystemServicePrewarmerScopeInitializationPluginPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1000aa8fc; end: 1000aacfb;  */

void FUN_1000aa8fc(long *param_1,long param_2)

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
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  FUN_100083b20(&uStack_68);
  FUN_1000aacfc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  *(undefined8 *)(param_2 + 0x18) = uVar7;
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  *(undefined8 *)(param_2 + 0x28) = uVar8;
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  *(undefined8 *)(param_2 + 0x38) = uVar9;
  *(undefined8 *)(param_2 + 0x40) = uVar4;
  *(undefined8 *)(param_2 + 0x48) = uVar10;
  *(undefined8 *)(param_2 + 0x58) = uStack_68;
  *(undefined8 *)(param_2 + 0x60) = uVar11;
  *(undefined8 *)(param_2 + 0x68) = uVar6;
  *(undefined8 *)(param_2 + 0x50) = uVar5;
  func_0x0001000aad1c();
  func_0x000107c61580(uVar1,2);
  func_0x000107c61580(uVar7,2);
  func_0x000107c61580(uVar2,2);
  func_0x000107c61580(uVar8,2);
  func_0x000107c61580(uVar3,2);
  func_0x000107c61580(uVar9,2);
  func_0x000107c61580(uVar4,2);
  func_0x000107c61580(uVar10,2);
  func_0x000107c61580(uVar5,2);
  func_0x000107c61580(uVar11,2);
  func_0x000107c61580(uVar6,2);
  uVar12 = uStack_68;
  func_0x000107c61174();
  uVar13 = uVar12;
  FUN_1000aad3c();
  FUN_1000aad90();
  FUN_1000ad550(uVar13);
  FUN_1000b6fc0(uVar13);
  func_0x0001000ab060(0);
  FUN_100079360(0);
  uVar14 = 0;
  FUN_1000ac07c(0);
  func_0x0001000b73ac();
  uVar15 = uVar14;
  FUN_1000ac118();
  func_0x000107c61170(uVar14);
  func_0x000107c6157c(uVar9);
  FUN_1000ab368(uVar15,0,0,0,FUN_1000ee718,uVar9);
  func_0x000107c615e8();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar15);
  func_0x0001000b73b4();
  uVar14 = uVar15;
  FUN_1000ac118();
  func_0x000107c61170(uVar15);
  FUN_1000ab368(uVar14,0,0,0,FUN_1000f5f74,0);
  func_0x000107c615e8();
  func_0x000107c61170(uVar14);
  uVar14 = 0;
  FUN_1000b73bc(0);
  FUN_1000b73dc();
  uVar15 = uVar14;
  FUN_1000b7430();
  func_0x000107c61170(uVar14);
  func_0x000107c6157c(uVar3);
  FUN_1000ab368(uVar15,0,0,0,FUN_1000f6a30,uVar3);
  func_0x000107c615e8();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar15);
  FUN_1000b7698();
  uVar14 = uVar15;
  FUN_1000ac118();
  func_0x000107c61170(uVar15);
  FUN_1000ab368(uVar14,0,0,0,FUN_1000f6a5c,0);
  func_0x000107c615e8();
  func_0x000107c61170(uVar14);
  uVar14 = 0;
  FUN_1000b76a0(0);
  FUN_1000b76c0();
  uVar15 = uVar14;
  FUN_1000b7760();
  func_0x000107c61170(uVar14);
  func_0x000107c6157c(uVar4);
  FUN_1000ab368(uVar15,uVar13,0,0,0x1000b9d60,uVar4);
  func_0x000107c615e8();
  func_0x000107c61578(uVar4,2);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1103cda08;
  return;
}



/* Entry: 1000aacfc; end: 1000aad3b;  */

void FUN_1000aacfc(void)

{
  func_0x000107c61168(&PTR_PTR_112da9360);
  return;
}



/* Entry: 1000aad3c; end: 1000aad43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aad3c(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_113096e78) = 3;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000aad44; end: 1000aad8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aad44(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_113096e78) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000aad90; end: 1000aaf9b;  */

void FUN_1000aad90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  
  FUN_100083b20(auStack_78);
  func_0x0001000834e4(auStack_78);
  func_0x0001000ab060(0);
  FUN_100079360(0);
  uVar1 = 0;
  func_0x0001000ab080(0);
  FUN_1000ab0a0();
  uVar2 = uVar1;
  FUN_1000ab100();
  func_0x000107c61170(uVar1);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c6157c(uVar5);
  uVar1 = uVar2;
  FUN_1000ab368(uVar2,param_1,0,0,FUN_1000b0e74,uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c615e8(uVar1);
  uVar1 = 0;
  FUN_1000ac07c(0);
  FUN_1000ac09c();
  uVar2 = uVar1;
  FUN_1000ac118();
  func_0x000107c61170(uVar1);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(uVar5);
  uVar1 = uVar2;
  FUN_1000ab368(uVar2,param_1,0,0,FUN_1000b1e9c,uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c615e8(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4a28c();
  func_0x000107c61170(puVar3);
  uVar1 = 0;
  FUN_1000ad274(0);
  FUN_1000ad294();
  uVar2 = uVar1;
  FUN_1000ad2e8();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1103cdab8;
  func_0x000107c613fc(&UNK_1103cdab8,0x19,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  puVar3[0x18] = (char)puVar4;
  func_0x000107c6157c(uVar1);
  FUN_1000ab368(uVar2,param_1,0,0,0x1000b1f60,puVar3);
  func_0x000107c615e8();
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1000aaf9c; end: 1000aafbb;  */

void FUN_1000aaf9c(void)

{
  func_0x000107c61168(&PTR_PTR_112da9ab0);
  return;
}



/* Entry: 1000aafbc; end: 1000ab00f;  */

void FUN_1000aafbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_1000aaf9c();
  uVar2 = uVar1;
  func_0x000107c613fc();
  FUN_1000ab010();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1103ce948;
  *param_1 = uVar2;
  return;
}



/* Entry: 1000ab010; end: 1000ab09f;  */

void FUN_1000ab010(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c4a02c();
  if ((int)puVar2 != 0) {
    func_0x000107c61294();
    *(undefined **)(unaff_x20 + 0x10) = puVar2;
    return;
  }
  func_0x0001048d9980(0xd00000000000005a,0x800000010ef867d0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000ab060);
  (*pcVar1)();
}



/* Entry: 1000ab0a0; end: 1000ab0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ab0a0(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309abe8) = 3;
  *(undefined8 *)(unaff_x20 + _DAT_11309abf0) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000ab0a8; end: 1000ab0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ab0a8(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309abe8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309abf0) = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000ab100; end: 1000ab103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ab100(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 5;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(long *)(lVar3 + _DAT_11309ac88) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1000ab104; end: 1000ab367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ab104(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 5;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(long *)(lVar3 + _DAT_11309ac88) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1000ab368; end: 1000ab36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1000ab368(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_113096e78);
  }
  puVar13 = param_3;
  func_0x000107c61174();
  puVar5 = param_1;
  FUN_10007c020();
  lVar12 = param_4;
  if (param_4 == 0) {
    lVar11 = param_2;
    puVar6 = puVar13;
    func_0x000107c61174();
    FUN_10007c020();
    param_3 = param_1;
    lVar12 = lVar11;
    FUN_10007c170();
    FUN_10007d980(param_1,lVar11,puVar6);
  }
  puVar6 = &UNK_1107acf20;
  func_0x000107c613fc(&UNK_1107acf20,0x40,7);
  puVar6[0x10] = (char)uVar14;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(long *)(puVar6 + 0x20) = param_2;
  uVar1 = SUB81(puVar13,0);
  puVar6[0x28] = uVar1;
  *(undefined8 *)(puVar6 + 0x30) = param_5;
  *(undefined8 *)(puVar6 + 0x38) = param_6;
  puVar7 = &UNK_1107acf48;
  func_0x000107c613fc(&UNK_1107acf48,0x48,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(long *)(puVar7 + 0x18) = param_2;
  puVar7[0x20] = uVar1;
  *(undefined **)(puVar7 + 0x28) = param_3;
  *(long *)(puVar7 + 0x30) = lVar12;
  *(undefined **)(puVar7 + 0x38) = &UNK_10dd3d180;
  *(undefined **)(puVar7 + 0x40) = puVar6;
  puVar8 = &UNK_1107acf70;
  func_0x000107c613fc(&UNK_1107acf70,0x38,7);
  *(undefined **)(puVar8 + 0x10) = puVar5;
  *(long *)(puVar8 + 0x18) = param_2;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_10dd3d188;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  FUN_1000ab9d4(puVar5,param_2,puVar13);
  FUN_1000ab9d4(puVar5,param_2,puVar13);
  FUN_1000ab9d4(puVar5,param_2,puVar13);
  lVar11 = lRam0000000113097070;
  func_0x000107c61434(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c61434(lVar12);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar7);
  if (lVar11 != -1) {
    func_0x000107c61568(0x113097070,FUN_1000ab9ec);
  }
  uVar2 = uRam0000000113097078;
  pcStack_88 = (code *)((ulong)puVar13 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd000000000000037;
  puStack_78 = (undefined *)0x800000010f212fd0;
  puStack_98 = puVar5;
  lStack_90 = param_2;
  FUN_1000ab9d4(puVar5,param_2,puVar13);
  uVar9 = 0x1130970b8;
  FUN_1000285a8(0x1130970b8,&UNK_10dd3d148);
  func_0x000107c615d4(uVar2,&puStack_98,uVar9);
  FUN_1000aba5c(uVar14,&UNK_10dd3d190,puVar8);
  func_0x000107c615d0();
  func_0x000107c6142c(lVar12);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar7);
  FUN_10007d980(puVar5,param_2,puVar13);
  puVar5 = PTR_PTR_1126afd78;
  func_0x000107c610f8();
  puStack_78 = &UNK_104892ecc;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_90 = 0x42000000;
  pcStack_88 = FUN_1000f6b44;
  puStack_80 = &UNK_1107acf88;
  ppuVar10 = &puStack_98;
  uStack_70 = uVar14;
  func_0x000107c60bc4(ppuVar10);
  uVar3 = uStack_70;
  func_0x000107c6157c(uVar14);
  func_0x000107c61574(uVar3);
  func_0x000107c45b74();
  func_0x000107c60bd0(ppuVar10);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61574(uVar14);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000ab694);
  (*pcVar4)();
}



/* Entry: 1000ab36c; end: 1000ab693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1000ab36c(undefined *param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  
  if (param_2 == 0) {
    uVar14 = 4;
  }
  else {
    uVar14 = (ulong)*(byte *)(param_2 + _DAT_113096e78);
  }
  puVar13 = param_3;
  func_0x000107c61174();
  puVar5 = param_1;
  FUN_10007c020();
  lVar12 = param_4;
  if (param_4 == 0) {
    lVar11 = param_2;
    puVar6 = puVar13;
    func_0x000107c61174();
    FUN_10007c020();
    param_3 = param_1;
    lVar12 = lVar11;
    FUN_10007c170();
    FUN_10007d980(param_1,lVar11,puVar6);
  }
  puVar6 = &UNK_1107acf20;
  func_0x000107c613fc(&UNK_1107acf20,0x40,7);
  puVar6[0x10] = (char)uVar14;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(long *)(puVar6 + 0x20) = param_2;
  uVar1 = SUB81(puVar13,0);
  puVar6[0x28] = uVar1;
  *(undefined8 *)(puVar6 + 0x30) = param_5;
  *(undefined8 *)(puVar6 + 0x38) = param_6;
  puVar7 = &UNK_1107acf48;
  func_0x000107c613fc(&UNK_1107acf48,0x48,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(long *)(puVar7 + 0x18) = param_2;
  puVar7[0x20] = uVar1;
  *(undefined **)(puVar7 + 0x28) = param_3;
  *(long *)(puVar7 + 0x30) = lVar12;
  *(undefined **)(puVar7 + 0x38) = &UNK_10dd3d180;
  *(undefined **)(puVar7 + 0x40) = puVar6;
  puVar8 = &UNK_1107acf70;
  func_0x000107c613fc(&UNK_1107acf70,0x38,7);
  *(undefined **)(puVar8 + 0x10) = puVar5;
  *(long *)(puVar8 + 0x18) = param_2;
  puVar8[0x20] = uVar1;
  puVar8[0x21] = (char)uVar14;
  *(undefined **)(puVar8 + 0x28) = &UNK_10dd3d188;
  *(undefined **)(puVar8 + 0x30) = puVar7;
  FUN_1000ab9d4(puVar5,param_2,puVar13);
  FUN_1000ab9d4(puVar5,param_2,puVar13);
  FUN_1000ab9d4(puVar5,param_2,puVar13);
  lVar11 = lRam0000000113097070;
  func_0x000107c61434(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c61434(lVar12);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(puVar7);
  if (lVar11 != -1) {
    func_0x000107c61568(0x113097070,FUN_1000ab9ec);
  }
  uVar2 = uRam0000000113097078;
  pcStack_88 = (code *)((ulong)puVar13 & 0xff | uVar14 << 8);
  puStack_80 = (undefined *)0xd000000000000037;
  puStack_78 = (undefined *)0x800000010f212fd0;
  puStack_98 = puVar5;
  lStack_90 = param_2;
  FUN_1000ab9d4(puVar5,param_2,puVar13);
  uVar9 = 0x1130970b8;
  FUN_1000285a8(0x1130970b8,&UNK_10dd3d148);
  func_0x000107c615d4(uVar2,&puStack_98,uVar9);
  FUN_1000aba5c(uVar14,&UNK_10dd3d190,puVar8);
  func_0x000107c615d0();
  func_0x000107c6142c(lVar12);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar7);
  FUN_10007d980(puVar5,param_2,puVar13);
  puVar5 = PTR_PTR_1126afd78;
  func_0x000107c610f8();
  puStack_78 = &UNK_104892ecc;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_90 = 0x42000000;
  pcStack_88 = FUN_1000f6b44;
  puStack_80 = &UNK_1107acf88;
  ppuVar10 = &puStack_98;
  uStack_70 = uVar14;
  func_0x000107c60bc4(ppuVar10);
  uVar3 = uStack_70;
  func_0x000107c6157c(uVar14);
  func_0x000107c61574(uVar3);
  func_0x000107c45b74();
  func_0x000107c60bd0(ppuVar10);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61574(uVar14);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000ab694);
  (*pcVar4)();
}



/* Entry: 1000ab694; end: 1000ab71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1000ab694(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309abe8);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar3 = 9;
    }
    else {
      uVar3 = 10;
    }
  }
  else if (bVar1 == 2) {
    if (*(long *)(param_1 + _DAT_11309abf0) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ab71c);
      (*pcVar2)();
    }
    uVar3 = *(undefined1 *)(*(long *)(param_1 + _DAT_11309abf0) + _DAT_11309abe0);
  }
  else if (bVar1 == 3) {
    uVar3 = 0xb;
  }
  else {
    uVar3 = 0xc;
  }
  func_0x000107c61170();
  return uVar3;
}



/* Entry: 1000ab71c; end: 1000ab9d3;  */

undefined1  [16] FUN_1000ab71c(byte param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_1 < 0xb) {
    if (param_1 == 9) {
      auVar11._8_8_ = 0xee00707574726174;
      auVar11._0_8_ = 0x5374736f50523243;
      return auVar11;
    }
    if (param_1 == 10) {
      auVar9._8_8_ = 0x800000010f215360;
      auVar9._0_8_ = 0xd000000000000017;
      return auVar9;
    }
  }
  else {
    if (param_1 == 0xb) {
      auVar12._8_8_ = 0x800000010f215340;
      auVar12._0_8_ = 0xd000000000000013;
      return auVar12;
    }
    if (param_1 == 0xc) {
      auVar10._8_8_ = 0xee00636e79536e65;
      auVar10._0_8_ = 0x6b6f546563617254;
      return auVar10;
    }
  }
  lVar1 = 0x112d38280;
  FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0x523253;
  *(undefined8 *)(lVar1 + 0x28) = 0xe300000000000000;
  if (param_1 < 4) {
    if (1 < param_1) {
      uVar8 = 0xd000000000000010;
      if (param_1 == 2) {
        pcVar7 = "lastPageProvider";
      }
      else {
        pcVar7 = "metaInfoProvider";
      }
      uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
      goto LAB_1000ab964;
    }
    if (param_1 != 0) {
      uVar6 = 0xea0000000000746e;
      uVar8 = 0x657645656b616873;
      goto LAB_1000ab964;
    }
    pcVar7 = "startupCompleteTimeProvider";
    uVar8 = 0xb;
  }
  else {
    if (5 < param_1) {
      if (param_1 == 6) {
        uVar6 = 0x800000010f215280;
        uVar8 = 0xd000000000000014;
      }
      else if (param_1 == 7) {
        uVar6 = 0x800000010f215260;
        uVar8 = 0xd000000000000016;
      }
      else {
        uVar6 = 0x800000010f215240;
        uVar8 = 0xd000000000000017;
      }
      goto LAB_1000ab964;
    }
    if (param_1 != 4) {
      uVar6 = 0x800000010f2152a0;
      uVar8 = 0xd000000000000013;
      goto LAB_1000ab964;
    }
    pcVar7 = "extensionInfoProvider";
    uVar8 = 5;
  }
  uVar6 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
  uVar8 = uVar8 | 0xd000000000000010;
LAB_1000ab964:
  *(ulong *)(lVar1 + 0x30) = uVar8;
  *(ulong *)(lVar1 + 0x38) = uVar6;
  uVar2 = 0x112d38270;
  FUN_1000285a8(0x112d38270,&UNK_10d905a20);
  uVar3 = uVar2;
  FUN_10011d734();
  uVar4 = 0x23;
  uVar5 = 0xe100000000000000;
  func_0x000107c5fa80(0x23,0xe100000000000000,uVar2,uVar3);
  func_0x000107c61574(lVar1);
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = uVar4;
  return auVar13;
}



/* Entry: 1000ab9d4; end: 1000ab9eb;  */

void FUN_1000ab9d4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 0xfc) != 0x6c) {
    return;
  }
  if ((param_3 & 3) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 1000ab9ec; end: 1000aba4b;  */

void FUN_1000ab9ec(void)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = &uStack_50;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_1000285a8(0x113097080,&UNK_10dd3cfd0);
  func_0x000107c613fc();
  func_0x000107c6070c();
  puRam0000000113097078 = (undefined1 *)puVar1;
  return;
}



/* Entry: 1000aba4c; end: 1000aba5b;  */

undefined1  [16] FUN_1000aba4c(void)

{
  return ZEXT816(0x1107aca28);
}



/* Entry: 1000aba5c; end: 1000abba3;  */

void FUN_1000aba5c(byte param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  if (param_1 < 2) {
    if (param_1 == 0) {
      func_0x000107c5fcf8(puVar4);
    }
    else {
      func_0x000107c5fd04(puVar4,0x15);
    }
  }
  else if (param_1 == 2) {
    func_0x000107c5fcfc(puVar4);
  }
  else {
    if (param_1 != 3) {
      lVar1 = 0;
      func_0x000107c5fd0c();
      uVar3 = 1;
      goto LAB_1000abb30;
    }
    func_0x000107c5fcf4(puVar4);
  }
  lVar1 = 0;
  func_0x000107c5fd0c();
  uVar3 = 0;
LAB_1000abb30:
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,uVar3,1);
  puVar2 = &UNK_1107acfc0;
  func_0x000107c613fc(&UNK_1107acfc0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x000107c6157c(param_3);
  FUN_1000abba4(0,0,puVar4,&UNK_10dd3d198,puVar2);
  return;
}



/* Entry: 1000abba4; end: 1000abdff;  */

void FUN_1000abba4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_c0 + -extraout_x8;
  FUN_1000abe04(param_3,puVar5);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
  uVar7 = param_5;
  func_0x000107c6157c(param_5);
  if ((int)puVar2 == 1) {
    func_0x0001000abe54(puVar5);
    uVar7 = 0x1c00;
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    uVar7 = uVar7 & 0xff | 0x1c00;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x18);
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(param_5);
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = lVar1;
    func_0x000107c614f0();
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  if (param_2 == 0) {
    func_0x0001000abe54(param_3);
    puVar3 = &UNK_1103a5760;
    func_0x000107c613fc(&UNK_1103a5760,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    if (lVar8 == 0 && lVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puVar4 = &uStack_80;
      lStack_70 = lVar6;
      lStack_68 = lVar8;
    }
    func_0x000107c615bc(uVar7,puVar4,PTR___sytN_11034f1b0 + 8,&UNK_10d9353a0,puVar3);
  }
  else {
    func_0x000107c5fb28(param_1,param_2);
    func_0x000107c6142c(param_2);
    puVar3 = &UNK_1103a5788;
    func_0x000107c613fc(&UNK_1103a5788,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    func_0x000107c6157c(param_5);
    if (lVar8 == 0 && lVar6 == 0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &uStack_a0;
      lStack_90 = lVar6;
      lStack_88 = lVar8;
    }
    uStack_b8 = 7;
    lStack_a8 = param_1 + 0x20;
    func_0x000107c615bc(uVar7,&uStack_b8,PTR___sytN_11034f1b0 + 8,&UNK_10d9353a8,puVar3);
    func_0x000107c61574(param_1);
    func_0x0001000abe54(param_3);
    func_0x000107c61574(param_5);
  }
  return;
}



/* Entry: 1000abe00; end: 1000abe03;  */

void FUN_1000abe00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000abe04; end: 1000abe9b;  */

undefined8 FUN_1000abe04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000abe9c; end: 1000abee3;  */

int FUN_1000abe9c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1000abee4; end: 1000abf4b;  */

undefined8 * FUN_1000abee4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1000ab9d4(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1000abf4c; end: 1000abf93;  */

void FUN_1000abf4c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      param_1[4] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 1000abf94; end: 1000abfc3;  */

void FUN_1000abf94(undefined8 *param_1)

{
  FUN_10007d980(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[4]);
  return;
}



/* Entry: 1000abfc4; end: 1000abfdb;  */

void FUN_1000abfc4(long param_1,long param_2)

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



/* Entry: 1000abfdc; end: 1000ac053; -[SCCallbackCancelable initWithCallbackBlock:] */

undefined1 * FUN_1000abfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270e408;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000ac054; end: 1000ac063; -[SCAttributedAppInsightsTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309abf0));
  return;
}



/* Entry: 1000ac064; end: 1000ac07b; -[SCCallbackCancelable .cxx_destruct] */

void FUN_1000ac064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1000ac07c; end: 1000ac09b;  */

void FUN_1000ac07c(void)

{
  func_0x000107c61168(&PTR_PTR_1129e3540);
  return;
}



/* Entry: 1000ac09c; end: 1000ac0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac09c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309bdb0) = 8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309bdc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000ac0a4; end: 1000ac117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac0a4(undefined1 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309bdb0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309bdb8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11309bdc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000ac118; end: 1000ac11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac118(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x20;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(long *)(lVar3 + _DAT_11309ad60) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1000ac11c; end: 1000ac37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac11c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x20;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(long *)(lVar3 + _DAT_11309ad60) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1000ac380; end: 1000ac4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1000ac380(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + _DAT_11309bdb0)) {
  case 0:
    if (*(char *)((undefined8 *)(param_1 + _DAT_11309bdb8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000ac4c8);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11309bdb8);
    break;
  case 1:
    lVar2 = ((undefined8 *)(param_1 + _DAT_11309bdc0))[1];
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000ac4c4);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11309bdc0);
    func_0x000107c61434(lVar2);
    break;
  case 3:
    uVar3 = 1;
    break;
  case 4:
    uVar3 = 2;
    break;
  case 5:
    uVar3 = 3;
    break;
  case 6:
    uVar3 = 4;
    break;
  case 7:
    uVar3 = 5;
    break;
  case 8:
    uVar3 = 6;
    break;
  case 9:
    uVar3 = 7;
    break;
  case 10:
    uVar3 = 8;
    break;
  case 0xb:
    uVar3 = 9;
  }
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 1000ac4c8; end: 1000ac4f7;  */

void FUN_1000ac4c8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x14,0x1000ac4c8);
  (*pcVar1)();
}



/* Entry: 1000ac4f8; end: 1000ac757;  */

undefined1  [16] FUN_1000ac4f8(long param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_3 == '\0') {
    auVar7._8_8_ = 0xec000000676e6974;
    auVar7._0_8_ = 0x726f706552583247;
    return auVar7;
  }
  if (param_3 == '\x01') {
    lVar1 = 0x112d38280;
    FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 4;
    *(undefined8 *)(lVar1 + 0x10) = 2;
    *(undefined8 *)(lVar1 + 0x20) = 0x4370757472617453;
    *(undefined8 *)(lVar1 + 0x28) = 0xee00646e616d6d6f;
    *(long *)(lVar1 + 0x30) = param_1;
    *(undefined8 *)(lVar1 + 0x38) = param_2;
    func_0x000107c61434(param_2);
    uVar2 = 0x112d38270;
    FUN_1000285a8(0x112d38270,&UNK_10d905a20);
    uVar3 = uVar2;
    FUN_10011d734();
    uVar4 = 0x23;
    uVar5 = 0xe100000000000000;
    func_0x000107c5fa80(0x23,0xe100000000000000,uVar2,uVar3);
    func_0x000107c61574(lVar1);
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = uVar4;
    return auVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000ac624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dd41810)[param_1] * 4 + 0x1000ac628))();
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1000ac758; end: 1000ac787;  */

void FUN_1000ac758(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1000ac788; end: 1000ac79b; -[SCAttributedStartupTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ac788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11309bdc0 + 8))
  ;
  return;
}



/* Entry: 1000ac79c; end: 1000ac80b;  */

void FUN_1000ac79c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1000dabd8;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar4[2] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)FUN_1000dab98;
                    /* WARNING: Could not recover jumptable at 0x0001000ac86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar5,param_1);
  return;
}



/* Entry: 1000ac80c; end: 1000ac86f;  */

void FUN_1000ac80c(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000dab98;
                    /* WARNING: Could not recover jumptable at 0x0001000ac86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 1000ac870; end: 1000ac8f3;  */

void FUN_1000ac870(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1000dab94;
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar6,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  plVar5[2] = (long)plVar6;
  *plVar6 = (long)plVar5;
  plVar6[1] = 0x1000dab54;
                    /* WARNING: Could not recover jumptable at 0x0001000ac954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar6,param_1);
  return;
}



/* Entry: 1000ac8f4; end: 1000ac957;  */

void FUN_1000ac8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1000dab54;
                    /* WARNING: Could not recover jumptable at 0x0001000ac954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1);
  return;
}



/* Entry: 1000ac958; end: 1000ac9e7;  */

void FUN_1000ac958(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x80;
  uVar4 = *(undefined1 *)(unaff_x20 + 0x21);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1000dab50;
  plVar6[8] = lVar1;
  plVar6[9] = lVar3;
  *(undefined1 *)((long)plVar6 + 0x71) = uVar4;
  *(undefined1 *)(plVar6 + 0xe) = uVar5;
  plVar6[6] = lVar7;
  plVar6[7] = lVar2;
  plVar6[5] = param_1;
  lVar7 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[10] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000aca9c,0,0);
  return;
}



/* Entry: 1000ac9e8; end: 1000aca9b;  */

void FUN_1000ac9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined1 *)(unaff_x22 + 0x71) = param_5;
  *(undefined1 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000aca9c,0,0);
  return;
}



/* Entry: 1000aca9c; end: 1000acbe3;  */

void FUN_1000aca9c(long *param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  bVar2 = *(byte *)(unaff_x22 + 0x71);
  func_0x0001000aca5c();
  func_0x000107c61428();
  param_1 = (long *)*param_1;
  *(long **)(unaff_x22 + 0x58) = param_1;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      func_0x000107c6157c(param_1);
      func_0x000107c5fcf8(uVar7);
    }
    else {
      func_0x000107c6157c(param_1);
      func_0x000107c5fd04(uVar7,0x15);
    }
  }
  else if (bVar2 == 2) {
    func_0x000107c6157c(param_1);
    func_0x000107c5fcfc(uVar7);
  }
  else {
    if (bVar2 != 3) {
      lVar4 = 0;
      func_0x000107c5fd0c();
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar7,1,1,lVar4);
      func_0x000107c6157c(param_1);
      goto LAB_1000acb9c;
    }
    func_0x000107c6157c(param_1);
    func_0x000107c5fcf4(uVar7);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar7,0,1,lVar4);
LAB_1000acb9c:
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1000afe20;
  lVar4 = *(long *)(unaff_x22 + 0x30);
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x70);
  plVar5[0xc] = *(long *)(unaff_x22 + 0x50);
  plVar5[0xd] = (long)param_1;
  *(undefined1 *)(plVar5 + 0x10) = uVar3;
  plVar5[10] = lVar4;
  plVar5[0xb] = lVar1;
  plVar6 = (long *)0x130;
  func_0x000107c615b8();
  plVar5[0xe] = (long)plVar6;
  *plVar6 = (long)plVar5;
  plVar6[1] = (long)FUN_1000afc54;
  plVar6[0x1c] = lVar1;
  plVar6[0x1d] = (long)param_1;
  *(undefined1 *)((long)plVar6 + 0x129) = uVar3;
  plVar6[0x1b] = lVar4;
  plVar6[0x1e] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000acd38,0,0);
  return;
}



/* Entry: 1000acbe4; end: 1000acc03;  */

void FUN_1000acbe4(void)

{
  func_0x000107c61168(&PTR_PTR_113097218);
  return;
}



/* Entry: 1000acc04; end: 1000acc7f;  */

void FUN_1000acc04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_1000acbe4();
  func_0x000107c613fc();
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + 0x10) = puVar1;
  FUN_1000acc80();
  puVar2 = puVar1;
  func_0x000107c613fc();
  *(undefined **)(param_1 + 0x30) = puVar1;
  *(undefined ***)(param_1 + 0x38) = &PTR_DAT_1107ad518;
  *(undefined **)(param_1 + 0x18) = puVar2;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x48) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lRam0000000113815510 = param_1;
  return;
}



/* Entry: 1000acc80; end: 1000acc9f;  */

void FUN_1000acc80(void)

{
  func_0x000107c61168(&PTR_PTR_1130972d0);
  return;
}



/* Entry: 1000acca0; end: 1000acd0f;  */

void FUN_1000acca0(long param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(long **)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x80) = param_3;
  *(long *)(unaff_x22 + 0x50) = param_1;
  *(long *)(unaff_x22 + 0x58) = param_2;
  plVar1 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000afc54;
  plVar1[0x1c] = param_2;
  plVar1[0x1d] = (long)unaff_x20;
  *(undefined1 *)((long)plVar1 + 0x129) = param_3;
  plVar1[0x1b] = param_1;
  plVar1[0x1e] = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000acd38,0,0);
  return;
}



/* Entry: 1000acd10; end: 1000acd37;  */

void FUN_1000acd10(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
  *(undefined8 **)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x129) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xf0) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000acd38,0,0);
  return;
}



/* Entry: 1000acd38; end: 1000ad07b;  */

void FUN_1000acd38(byte *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  
  FUN_100028eb0();
  if ((*param_1 & 1) == 0) {
    FUN_1000ad07c();
    if (((*param_1 & 1) != 0) || (cRam0000000113815518 == '\x01')) {
      lVar14 = *(long *)(unaff_x22 + 0xe8);
      uVar15 = *(undefined8 *)(lVar14 + 0x10);
      func_0x000107c4b940(uVar15);
      bVar2 = *(byte *)(lVar14 + 0x40);
      func_0x000107c5d278(uVar15);
      if ((bVar2 & 1) == 0) {
        uVar12 = 0x113060260;
        FUN_1000285a8(0x113060260,&UNK_10dcd57f0);
        func_0x000107c61538();
        FUN_1000ad194();
        uVar5 = uVar12;
        FUN_1000ade28();
        func_0x000107c6142c(uVar12);
        if ((uVar5 & 1) == 0) {
          uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
          uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
          uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
          uVar3 = *(undefined1 *)(unaff_x22 + 0x129);
          lVar14 = 0;
          func_0x000107c5eec8();
          *(long *)(unaff_x22 + 0xf8) = lVar14;
          lVar14 = *(long *)(lVar14 + -8);
          *(long *)(unaff_x22 + 0x100) = lVar14;
          puVar6 = (undefined8 *)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
          func_0x000107c615b8();
          *(undefined8 **)(unaff_x22 + 0x108) = puVar6;
          puVar7 = puVar6;
          func_0x000107c5eec4(puVar6);
          FUN_1000298f0();
          *(undefined8 **)(unaff_x22 + 0x110) = puVar7;
          func_0x000107c61428();
          uVar8 = *puVar7;
          func_0x000107c61174(uVar8);
          func_0x000107c602fc(0x1b);
          func_0x000107c6142c(0xe000000000000000);
          FUN_10007c170(uVar9,uVar13,uVar3);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar13);
          uVar9 = 0xd000000000000019;
          func_0x000100029b28(0xd000000000000019,0x800000010f213160);
          *(undefined8 *)(unaff_x22 + 0x118) = uVar9;
          func_0x000107c6142c(0x800000010f213160);
          func_0x000107c61170(uVar8);
          *(undefined8 *)(unaff_x22 + 0x60) = uVar15;
          *(undefined8 **)(unaff_x22 + 0x68) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
          iVar4 = 2;
          FUN_100029b9c(2,0x12,0,0);
          if (iVar4 != 0) {
            plVar10 = (long *)(ulong)*(uint *)(
                                              PTR___ss23withCheckedContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5NeverOGXEtYalFTu_11034ffd0
                                              + 4);
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x120) = plVar10;
            *plVar10 = unaff_x22;
            plVar10[1] = (long)FUN_1000d9b54;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss23withCheckedContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5NeverOGXEtYalF_11034ffc8
            )(plVar10,unaff_x22 + 0x128,0,0,0xd00000000000001f,0x800000010f213180,FUN_1000d6928,
              unaff_x22 + 0x50,PTR___sSbN_11034dd40);
            return;
          }
          uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x128;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(undefined **)(unaff_x22 + 0x18) = &UNK_1048950f0;
          lVar14 = unaff_x22 + 0x10;
          func_0x000107c61448(lVar14,0);
          lVar11 = 0x1130971c8;
          FUN_1000285a8(0x1130971c8,&UNK_10dd3d3b0);
          lVar16 = *(long *)(lVar11 + -8);
          uVar12 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8(uVar12);
          func_0x000107c5fcac(uVar12,lVar14,0xd00000000000001f,0x800000010f213180,
                              PTR___sSbN_11034dd40,PTR___ss5NeverON_11034ee88,
                              PTR___ss5NeverOs5ErrorsWP_11034ee90);
          FUN_1000d6934(uVar12,uVar15,puVar6,uVar9);
          (**(code **)(lVar16 + 8))(uVar12,lVar11);
          func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001000ace14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000ad07c; end: 1000ad0bb;  */

undefined8 FUN_1000ad07c(void)

{
  if (lRam000000011368aea8 != -1) {
    func_0x000107c61568(0x11368aea8,FUN_1000ad0bc);
  }
  return 0x113815529;
}



/* Entry: 1000ad0bc; end: 1000ad0db;  */

void FUN_1000ad0bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  
  bVar3 = 0x69;
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3e148();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c5fc54(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61170(puVar2);
  FUN_100077018(0x7473655449557369,0xe800000000000000,puVar1);
  func_0x000107c6142c(puVar1);
  bRam0000000113815529 = bVar3 & 1;
  return;
}



/* Entry: 1000ad0dc; end: 1000ad183;  */

void FUN_1000ad0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3e148();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = puVar2;
  func_0x000107c5fc54(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61170(puVar2);
  FUN_100077018(param_2,param_3,puVar1);
  func_0x000107c6142c(puVar1);
  *param_4 = (byte)param_2 & 1;
  return;
}



/* Entry: 1000ad184; end: 1000ad193;  */

undefined1  [16] FUN_1000ad184(void)

{
  return ZEXT816(0x1107ad680);
}



/* Entry: 1000ad194; end: 1000ad273;  */

undefined * FUN_1000ad194(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 auStack_88 [72];
  
  puVar5 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar5 != (undefined *)0x0) {
    FUN_1000285a8(0x112da15a8,&UNK_10d9448b0);
    puVar2 = puVar5;
    func_0x000107c602e8();
    do {
      func_0x000107c6068c(auStack_88,*(undefined8 *)(puVar2 + 0x28));
      uVar3 = 0;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar3 = uVar3 & (-1L << ((ulong)(byte)puVar2[0x20] & 0x3f) ^ 0xffffffffffffffffU);
      uVar4 = uVar3 >> 6;
      uVar3 = 1L << (uVar3 & 0x3f);
      if ((uVar3 & *(ulong *)(puVar2 + uVar4 * 8 + 0x38)) == 0) {
        *(ulong *)(puVar2 + uVar4 * 8 + 0x38) = uVar3 | *(ulong *)(puVar2 + uVar4 * 8 + 0x38);
        if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000ad274);
          (*pcVar1)();
        }
        *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      }
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined *)0x0);
  }
  return puVar2;
}



/* Entry: 1000ad274; end: 1000ad293;  */

void FUN_1000ad274(void)

{
  func_0x000107c61168(&PTR_PTR_1129e23a8);
  return;
}



/* Entry: 1000ad294; end: 1000ad29b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ad294(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b850) = 3;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000ad29c; end: 1000ad2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ad29c(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b850) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000ad2e8; end: 1000ad2eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ad2e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x17;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(long *)(lVar3 + _DAT_11309ad18) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1000ad2ec; end: 1000ad54f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ad2ec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 0x17;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(long *)(lVar3 + _DAT_11309ad18) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1000ad550; end: 1000ad64f;  */

void FUN_1000ad550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x000107c61170(uStack_48);
  func_0x0001000ab060(0);
  FUN_100079360(0);
  uVar1 = 0;
  FUN_1000ac07c(0);
  FUN_1000b6fb8();
  uVar2 = uVar1;
  FUN_1000ac118();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar3 = &UNK_1103cda90;
  func_0x000107c613fc(&UNK_1103cda90,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  uVar1 = uVar2;
  FUN_1000ab368(uVar2,param_1,0,0,FUN_1000b7f30,puVar3);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 1000ad650; end: 1000ad657;  */

void FUN_1000ad650(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uStack_48;
  FUN_100083b20(&uStack_48);
  FUN_1000a0ea8(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uStack_48);
  uVar3 = uVar2;
  FUN_1000b6214(uVar2,uStack_48);
  func_0x0001000b625c(0);
  func_0x000107c438e4(uVar2);
  func_0x000107c61180();
  FUN_1000b62a4();
  uVar1 = uRam0000000113813758;
  uRam0000000113813758 = uVar3;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(uVar1);
  *param_1 = uVar3;
  return;
}


