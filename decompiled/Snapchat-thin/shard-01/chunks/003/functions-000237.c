/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f17ea0; end: 100f17ef3;  */

void FUN_100f17ea0(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0a50);
  return;
}



/* Entry: 100f17ef4; end: 100f17f0f;  */

void FUN_100f17ef4(long param_1,long param_2)

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



/* Entry: 100f17f10; end: 100f17f3f;  */

void FUN_100f17f10(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100f16798(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 100f17f40; end: 100f17feb;  */

void FUN_100f17f40(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f17fec; end: 100f1801b;  */

bool FUN_100f17fec(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f1801c; end: 100f18127;  */

void FUN_100f1801c(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_100f18c44();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112d4b708;
      func_0x0001000285a8(0x112d4b708,&UNK_10d912270);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_100f18128(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_100f18524(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 100f18128; end: 100f18523;  */

void FUN_100f18128(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  long unaff_x21;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar22 = param_3[1];
  if (0 < lVar22) {
    lVar15 = 0;
    do {
      lVar21 = lVar15 + 1;
      if (lVar21 < lVar22) {
        lVar19 = *param_3;
        puVar18 = (ulong *)(lVar19 + lVar21 * 0x20);
        uVar20 = *puVar18;
        puVar23 = (ulong *)(lVar19 + lVar15 * 0x20);
        if (uVar20 == *puVar23 && puVar18[1] == puVar23[1]) {
          uVar20 = 0;
        }
        else {
          func_0x000107c605b8();
        }
        lVar17 = lVar15 + 2;
        lVar21 = lVar17;
        if (lVar17 < lVar22) {
          puVar18 = puVar23 + 5;
          do {
            uVar10 = puVar18[3];
            if (uVar10 == puVar18[-1] && puVar18[4] == *puVar18) {
              if ((uVar20 & 1) != 0) goto LAB_100f18218;
            }
            else {
              func_0x000107c605b8();
              lVar21 = lVar17;
              if ((((uint)uVar20 ^ (uint)uVar10) & 1) != 0) break;
            }
            lVar17 = lVar17 + 1;
            puVar18 = puVar18 + 4;
            lVar21 = lVar22;
          } while (lVar22 != lVar17);
        }
        lVar17 = lVar21;
        if ((uVar20 & 1) != 0) {
LAB_100f18218:
          if (lVar17 < lVar15) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100f184f8);
            (*pcVar8)();
          }
          lVar21 = lVar17;
          if (lVar15 < lVar17) {
            lVar14 = lVar17 << 5;
            lVar16 = lVar15 << 5;
            lVar22 = lVar15;
            do {
              lVar17 = lVar17 + -1;
              if (lVar22 != lVar17) {
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x100f18518);
                  (*pcVar8)();
                }
                puVar1 = (undefined8 *)(lVar19 + lVar16);
                lVar2 = lVar19 + lVar14;
                uVar25 = puVar1[1];
                uVar24 = *puVar1;
                uVar4 = puVar1[2];
                uVar6 = puVar1[3];
                uVar28 = *(undefined8 *)(lVar2 + -0x20);
                uVar27 = *(undefined8 *)(lVar2 + -8);
                uVar26 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -0x18);
                *puVar1 = uVar28;
                puVar1[3] = uVar27;
                puVar1[2] = uVar26;
                *(undefined8 *)(lVar2 + -0x18) = uVar25;
                *(undefined8 *)(lVar2 + -0x20) = uVar24;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar6;
              }
              lVar22 = lVar22 + 1;
              lVar14 = lVar14 + -0x20;
              lVar16 = lVar16 + 0x20;
            } while (lVar22 < lVar17);
          }
        }
      }
      lVar22 = param_3[1];
      lVar19 = lVar21;
      if (lVar21 < lVar22) {
        if (SBORROW8(lVar21,lVar15)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100f184f4);
          (*pcVar8)();
        }
        if (lVar21 - lVar15 < param_4) {
          if (SCARRY8(lVar15,param_4)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100f184fc);
            (*pcVar8)();
          }
          lVar17 = lVar15 + param_4;
          if (lVar22 <= lVar15 + param_4) {
            lVar17 = lVar22;
          }
          if (lVar17 < lVar15) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100f18500);
            (*pcVar8)();
          }
          if (lVar21 != lVar17) {
            lVar16 = *param_3;
            puVar18 = (ulong *)(lVar16 + lVar21 * 0x20 + -0x20);
            lVar22 = lVar15 - lVar21;
            do {
              puVar23 = (ulong *)(lVar16 + lVar21 * 0x20);
              uVar20 = *puVar23;
              uVar10 = puVar23[1];
              lVar19 = lVar22;
              puVar23 = puVar18;
              do {
                if ((uVar20 == *puVar23 && uVar10 == puVar23[1]) ||
                   (func_0x000107c605b8(), (uVar20 & 1) == 0)) break;
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x100f18504);
                  (*pcVar8)();
                }
                uVar20 = puVar23[4];
                uVar10 = puVar23[5];
                uVar5 = puVar23[6];
                uVar7 = puVar23[7];
                puVar23[5] = puVar23[1];
                puVar23[4] = *puVar23;
                puVar23[7] = puVar23[3];
                puVar23[6] = puVar23[2];
                *puVar23 = uVar20;
                puVar23[1] = uVar10;
                puVar23[2] = uVar5;
                puVar23[3] = uVar7;
                puVar23 = puVar23 + -4;
                bVar9 = lVar19 != -1;
                lVar19 = lVar19 + 1;
              } while (bVar9);
              lVar21 = lVar21 + 1;
              puVar18 = puVar18 + 4;
              lVar22 = lVar22 + -1;
              lVar19 = lVar17;
            } while (lVar21 != lVar17);
          }
        }
      }
      puVar13 = puStack_58;
      if (lVar19 < lVar15) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100f184e4);
        (*pcVar8)();
      }
      puVar11 = puStack_58;
      func_0x000107c61558();
      puVar12 = puVar13;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar20 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar20) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        func_0x0001000a91e0(puVar13,uVar20 + 1,1,puVar12);
      }
      *(ulong *)(puVar13 + 0x10) = uVar20 + 1;
      *(long *)(puVar13 + uVar20 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar13 + uVar20 * 0x10 + 0x28) = lVar19;
      puStack_58 = puVar13;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100f1851c);
        (*pcVar8)();
      }
      FUN_100f185f0(&puStack_58,*param_1,param_3);
      puVar13 = puStack_58;
      if (unaff_x21 != 0) goto LAB_100f184b4;
      lVar22 = param_3[1];
      lVar15 = lVar19;
    } while (lVar19 < lVar22);
  }
  puVar13 = puStack_58;
  lVar22 = *param_1;
  if (lVar22 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100f18524);
    (*pcVar8)();
  }
  puVar11 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar11 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar18 = (ulong *)(puVar13 + 0x10);
  uVar20 = *puVar18;
  while (1 < uVar20) {
    lVar15 = *param_3;
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100f18520);
      (*pcVar8)();
    }
    plVar3 = (long *)(puVar13 + uVar20 * 0x10);
    lVar21 = *plVar3;
    puVar23 = puVar18 + uVar20 * 2;
    uVar10 = puVar23[1];
    FUN_100f18858(lVar15 + lVar21 * 0x20,lVar15 + *puVar23 * 0x20,lVar15 + uVar10 * 0x20,lVar22);
    if (unaff_x21 != 0) break;
    if ((long)uVar10 < lVar21) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100f184e8);
      (*pcVar8)();
    }
    if (*puVar18 <= uVar20 - 2) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100f184ec);
      (*pcVar8)();
    }
    *plVar3 = lVar21;
    plVar3[1] = uVar10;
    uVar10 = *puVar18;
    lVar15 = uVar10 - uVar20;
    if (uVar10 < uVar20) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100f184f0);
      (*pcVar8)();
    }
    uVar20 = uVar10 - 1;
    func_0x000107c610b8(puVar23,puVar23 + 2,lVar15 * 0x10);
    *puVar18 = uVar20;
  }
LAB_100f184b4:
  func_0x000107c6142c(puVar13);
  return;
}



/* Entry: 100f18524; end: 100f185ef;  */

void FUN_100f18524(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    puVar8 = (ulong *)(lVar7 + param_3 * 0x20 + -0x20);
    param_1 = param_1 - param_3;
    do {
      puVar10 = (ulong *)(lVar7 + param_3 * 0x20);
      uVar5 = *puVar10;
      uVar6 = puVar10[1];
      lVar9 = param_1;
      puVar10 = puVar8;
      do {
        if ((uVar5 == *puVar10 && uVar6 == puVar10[1]) || (func_0x000107c605b8(), (uVar5 & 1) == 0))
        break;
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f185f0);
          (*pcVar3)();
        }
        uVar5 = puVar10[4];
        uVar6 = puVar10[5];
        uVar1 = puVar10[6];
        uVar2 = puVar10[7];
        puVar10[5] = puVar10[1];
        puVar10[4] = *puVar10;
        puVar10[7] = puVar10[3];
        puVar10[6] = puVar10[2];
        *puVar10 = uVar5;
        puVar10[1] = uVar6;
        puVar10[2] = uVar1;
        puVar10[3] = uVar2;
        puVar10 = puVar10 + -4;
        bVar4 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar4);
      param_3 = param_3 + 1;
      puVar8 = puVar8 + 4;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 100f185f0; end: 100f18857;  */

undefined8 FUN_100f185f0(ulong *param_1,undefined8 param_2,long *param_3)

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
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_100f186c4;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18840);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_100f18728:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18830);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18838);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18818);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f1881c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18824);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f1882c);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_100f186c4:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18820);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18828);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18834);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100f1883c);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_100f18728;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18844);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f1880c);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18858);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_100f18858(lVar9 + lVar12 * 0x20,lVar9 + *plVar1 * 0x20,lVar9 + lVar7 * 0x20,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18810);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f18814);
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



/* Entry: 100f18858; end: 100f18a93;  */

undefined8 FUN_100f18858(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar1 = lVar8 + 0x1f;
  if (-1 < lVar8) {
    lVar1 = lVar8;
  }
  lVar1 = lVar1 >> 5;
  lVar10 = (long)param_3 - (long)param_2;
  lVar3 = lVar10 + 0x1f;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 5;
  if (lVar1 < lVar3) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 4 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 << 5);
    }
    puVar7 = param_4 + lVar1 * 4;
    puVar4 = param_1;
    if (0x1f < lVar8) {
      do {
        if (param_3 <= param_2) break;
        uVar11 = *param_2;
        if ((uVar11 == *param_4 && param_2[1] == param_4[1]) ||
           (func_0x000107c605b8(), (uVar11 & 1) == 0)) {
          puVar5 = param_4 + 4;
          puVar6 = param_4;
        }
        else {
          puVar5 = param_4;
          puVar6 = param_2;
          param_2 = param_2 + 4;
        }
        param_4 = puVar5;
        if (puVar4 != puVar6) {
          uVar11 = *puVar6;
          uVar12 = puVar6[3];
          uVar2 = puVar6[2];
          puVar4[1] = puVar6[1];
          *puVar4 = uVar11;
          puVar4[3] = uVar12;
          puVar4[2] = uVar2;
        }
        puVar4 = puVar4 + 4;
      } while (param_4 < puVar7);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar3 * 4 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar3 << 5);
    }
    puVar6 = param_4 + lVar3 * 4;
    puVar4 = param_2;
    puVar7 = puVar6;
    if ((param_1 < param_2) && (0x1f < lVar10)) {
      do {
        puVar9 = param_2 + -4;
        puVar5 = param_3;
        while( true ) {
          param_3 = puVar5 + -4;
          puVar7 = puVar6 + -4;
          uVar11 = *puVar7;
          if ((uVar11 != param_2[-4] || puVar6[-3] != param_2[-3]) &&
             (func_0x000107c605b8(), (uVar11 & 1) != 0)) break;
          if (puVar5 != puVar6) {
            uVar11 = *puVar7;
            uVar12 = puVar6[-1];
            uVar2 = puVar6[-2];
            puVar5[-3] = puVar6[-3];
            *param_3 = uVar11;
            puVar5[-1] = uVar12;
            puVar5[-2] = uVar2;
          }
          puVar4 = param_2;
          puVar6 = puVar7;
          puVar5 = param_3;
          if (puVar7 <= param_4) goto LAB_100f18a38;
        }
        if (puVar5 != param_2) {
          uVar11 = *puVar9;
          uVar12 = param_2[-1];
          uVar2 = param_2[-2];
          puVar5[-3] = param_2[-3];
          *param_3 = uVar11;
          puVar5[-1] = uVar12;
          puVar5[-2] = uVar2;
        }
        puVar4 = puVar9;
        puVar7 = puVar6;
      } while ((param_1 < puVar9) && (param_2 = puVar9, param_4 < puVar6));
    }
  }
LAB_100f18a38:
  uVar2 = (long)puVar7 - (long)param_4;
  uVar11 = uVar2 + 0x1f;
  if (-1 < (long)uVar2) {
    uVar11 = uVar2;
  }
  if ((puVar4 != param_4) || ((ulong *)((long)param_4 + (uVar11 & 0xffffffffffffffe0)) <= puVar4)) {
    func_0x000107c610b8(puVar4,param_4,((long)uVar11 >> 5) << 5);
  }
  return 1;
}



/* Entry: 100f18a94; end: 100f18bc3;  */

undefined * FUN_100f18a94(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f18bc4);
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
    puVar3 = (undefined *)0x112d4b710;
    func_0x0001000285a8(0x112d4b710,&UNK_10d912280);
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
    uVar5 = 0x112d4b708;
    func_0x0001000285a8(0x112d4b708,&UNK_10d912270);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100f18bc4; end: 100f18c43;  */

undefined * FUN_100f18bc4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d4b710;
    func_0x0001000285a8(0x112d4b710,&UNK_10d912280);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  return puVar2;
}



/* Entry: 100f18c44; end: 100f18c57;  */

/* WARNING: Removing unreachable block (ram,0x000100f18ab4) */
/* WARNING: Removing unreachable block (ram,0x000100f18ac4) */
/* WARNING: Removing unreachable block (ram,0x000100f18bc0) */
/* WARNING: Removing unreachable block (ram,0x000100f18ad0) */
/* WARNING: Removing unreachable block (ram,0x000100f18ad8) */
/* WARNING: Removing unreachable block (ram,0x000100f18b50) */
/* WARNING: Removing unreachable block (ram,0x000100f18b58) */
/* WARNING: Removing unreachable block (ram,0x000100f18b5c) */
/* WARNING: Removing unreachable block (ram,0x000100f18b60) */
/* WARNING: Removing unreachable block (ram,0x000100f18b70) */

undefined * FUN_100f18c44(long param_1)

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
    puVar3 = (undefined *)0x112d4b710;
    func_0x0001000285a8(0x112d4b710,&UNK_10d912280);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 5) << 1;
  }
  uVar5 = 0x112d4b708;
  func_0x0001000285a8(0x112d4b708,&UNK_10d912270);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 100f18c58; end: 100f18ddf;  */

long FUN_100f18c58(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar13 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar13 = uVar13 & *puVar11;
  if (param_2 == (undefined8 *)0x0) {
    lVar15 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar15 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100f18de0);
      (*pcVar6)();
    }
    lVar8 = 0;
    lVar14 = 0;
    uVar12 = 0x3f - uVar10 >> 6;
    lVar15 = lVar8;
    while( true ) {
      while (uVar13 == 0) {
        bVar7 = SCARRY8(lVar15,1);
        lVar15 = lVar15 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100f18ddc);
          (*pcVar6)();
        }
        if ((long)uVar12 <= lVar15) {
          uVar13 = 0;
          if ((long)uVar12 <= lVar8 + 1) {
            uVar12 = lVar8 + 1;
          }
          lVar15 = uVar12 - 1;
          param_3 = lVar14;
          goto LAB_100f18d90;
        }
        uVar13 = puVar11[lVar15];
      }
      lVar14 = lVar14 + 1;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      uVar9 = lVar15 << 10 | LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar9);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar9);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      *param_2 = *puVar1;
      param_2[1] = uVar4;
      param_2[2] = uVar3;
      param_2[3] = uVar5;
      if (lVar14 == param_3) break;
      param_2 = param_2 + 4;
      func_0x000107c61434();
      func_0x000107c61434(uVar5);
      lVar8 = lVar15;
    }
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
  }
LAB_100f18d90:
  *param_1 = param_4;
  param_1[1] = (long)puVar11;
  param_1[2] = ~uVar10;
  param_1[3] = lVar15;
  param_1[4] = uVar13;
  return param_3;
}



/* Entry: 100f18de0; end: 100f18de7;  */

void FUN_100f18de0(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 100f18de8; end: 100f18e23;  */

void FUN_100f18de8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100f1721c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 100f18e24; end: 100f18e5b;  */

void FUN_100f18e24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_100f17724(uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 100f18e5c; end: 100f18e9f;  */

void FUN_100f18e5c(long param_1,long *param_2,long param_3)

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



/* Entry: 100f18ea0; end: 100f18ea3;  */

void FUN_100f18ea0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d4b770 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100f18e48(0xff);
  puVar2 = &UNK_10d9122e8;
  func_0x000107c61520(&UNK_10d9122e8,uVar1);
  puRam0000000112d4b770 = puVar2;
  return;
}



/* Entry: 100f18ea4; end: 100f18ee7;  */

void FUN_100f18ea4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d4b770 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100f18e48(0xff);
  puVar2 = &UNK_10d9122e8;
  func_0x000107c61520(&UNK_10d9122e8,uVar1);
  puRam0000000112d4b770 = puVar2;
  return;
}



/* Entry: 100f18ee8; end: 100f18f17;  */

void FUN_100f18ee8(long param_1,long param_2)

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



/* Entry: 100f18f18; end: 100f19053;  */

long FUN_100f18f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_110369178;
  func_0x000107c613fc(&UNK_110369178,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  pcStack_60 = FUN_100f19124;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100f19134;
  puStack_68 = &UNK_110369190;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 100f19054; end: 100f19123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19054(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c400d0();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_3 + _DAT_1130343d8);
  lVar3 = 0;
  FUN_100f17ea0();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d4b688) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112d4b690) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112d4b698);
  *puVar1 = 0x100f19130;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112d4b6a0) = uVar5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 100f19124; end: 100f19133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19124(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c400d0();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(lVar6 + _DAT_1130343d8);
  lVar5 = 0;
  FUN_100f17ea0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d4b688) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112d4b690) = uVar4;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d4b698);
  *puVar1 = 0x100f19130;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + _DAT_112d4b6a0) = uVar7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar6;
  lStack_38 = lVar5;
  func_0x000107c61174(uVar7);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 100f19134; end: 100f1916b;  */

void FUN_100f19134(long param_1)

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



/* Entry: 100f1916c; end: 100f19187;  */

void FUN_100f1916c(long param_1,long param_2)

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



/* Entry: 100f19188; end: 100f191bb;  */

void FUN_100f19188(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f191bc; end: 100f191c3;  */

void FUN_100f191bc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100f191c4; end: 100f191e7;  */

void FUN_100f191c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f191e8; end: 100f1921f;  */

void FUN_100f191e8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a5f20;
  func_0x000107c610f8();
  func_0x000107c45984();
  *param_1 = puVar1;
  return;
}



/* Entry: 100f19220; end: 100f1947b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f19220(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c40434();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c436b0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c3ea5c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = 0;
        func_0x000100bda5a8();
        func_0x000107c613fc();
        puVar6 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        puVar7 = &UNK_1103691e0;
        func_0x000107c613fc(&UNK_1103691e0,0x28,7);
        *(long *)(puVar7 + 0x10) = lVar2;
        *(long *)(puVar7 + 0x18) = lVar3;
        *(long *)(puVar7 + 0x20) = lVar4;
        pcStack_60 = FUN_100f1947c;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        pcStack_70 = FUN_100f19134;
        puStack_68 = &UNK_1103691f8;
        ppuVar8 = &puStack_80;
        puStack_58 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        puVar7 = puStack_58;
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c61174(lVar4);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c61174(lVar4);
        func_0x000107c61574(puVar7);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c60bd0(ppuVar8);
        *(undefined **)(lVar5 + 0x10) = puVar6;
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d4b868);
        *(long *)(unaff_x20 + _DAT_112d4b868) = lVar5;
        func_0x000107c6157c(lVar5);
        func_0x000107c61574(uVar9);
        puVar7 = PTR_PTR_1126a5f20;
        func_0x000107c610f8(PTR_PTR_1126a5f20);
        func_0x000107c45984();
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c61574(lVar5);
        return puVar7;
      }
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SCBitmoji3DPreviewServicesImplementation/SCBitmoji3DPreviewServiceProvider.swift"
                      ,0x50,2,0x1b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1947c);
  (*pcVar1)();
}



/* Entry: 100f1947c; end: 100f1948f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1947c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c400d0();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(lVar6 + _DAT_1130343d8);
  lVar5 = 0;
  FUN_100f17ea0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d4b688) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112d4b690) = uVar4;
  puVar1 = (undefined8 *)(lVar6 + _DAT_112d4b698);
  *puVar1 = 0x100f19130;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + _DAT_112d4b6a0) = uVar7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar6;
  lStack_38 = lVar5;
  func_0x000107c61174(uVar7);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 100f19490; end: 100f194c3;  */

void FUN_100f19490(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f194c4; end: 100f194f7; -[SCBitmoji3DPreviewServiceProvider provide] */

void FUN_100f194c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100f19220();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f194f8; end: 100f1953b; -[SCBitmoji3DPreviewServiceProvider end] */

void FUN_100f194f8(undefined8 param_1)

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



/* Entry: 100f1953c; end: 100f1956f;  */

void FUN_100f1953c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f19570; end: 100f195c7; -[SCBitmoji3DPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19570(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4b850);
  func_0x000107c61610(param_1 + _DAT_112d4b858);
  func_0x000107c61610(param_1 + _DAT_112d4b860);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4b868));
  return;
}



/* Entry: 100f195c8; end: 100f195e7;  */

void FUN_100f195c8(void)

{
  func_0x000107c61168(&PTR_PTR_112d4b8b0);
  return;
}



/* Entry: 100f195e8; end: 100f195ef;  */

void FUN_100f195e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100f195f0; end: 100f195f7; -[_TtC46SCBitmojiAppUpsellBillboardEligibilityProvider44BitmojiAppUpsellBillboardEligibilityProvider preCheckSource] */

undefined8 FUN_100f195f0(void)

{
  return 0x25;
}



/* Entry: 100f195f8; end: 100f196af; -[_TtC46SCBitmojiAppUpsellBillboardEligibilityProvider44BitmojiAppUpsellBillboardEligibilityProvider eligibleWithRequestor:campaignName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f195f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112d4b920);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c49ab4();
    func_0x000107c615e8(lVar3);
  }
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100f196b0; end: 100f1970f; -[_TtC46SCBitmojiAppUpsellBillboardEligibilityProvider44BitmojiAppUpsellBillboardEligibilityProvider init] */

void FUN_100f196b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiAppUpsellBillboardEligibilityProvider.BitmojiAppUpsellBillboardEligibilityProvider"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f196dc);
  (*pcVar1)();
}



/* Entry: 100f19710; end: 100f1971f; -[_TtC46SCBitmojiAppUpsellBillboardEligibilityProvider44BitmojiAppUpsellBillboardEligibilityProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4b920));
  return;
}



/* Entry: 100f19720; end: 100f1973f;  */

void FUN_100f19720(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0b70);
  return;
}



/* Entry: 100f19740; end: 100f19813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f19740(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c3ddcc();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_100f19720();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d4b920) = uVar1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  uVar1 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 100f19814; end: 100f1982f;  */

void FUN_100f19814(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f19830; end: 100f1984f;  */

void FUN_100f19830(void)

{
  func_0x000107c61168(&PTR_PTR_112d4b990);
  return;
}



/* Entry: 100f19850; end: 100f1985b; -[SCBitmojiAppUpsellBillboardEligibilityProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19850(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b9e8;
  func_0x000107c61428(param_1 + _DAT_112d4b9e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1985c; end: 100f19867; -[SCBitmojiAppUpsellBillboardEligibilityProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1985c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b9e8;
  func_0x000107c61428(param_1 + _DAT_112d4b9e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f19868; end: 100f19873; -[SCBitmojiAppUpsellBillboardEligibilityProviderEntryPoint bitmojiAppServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19868(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b9f0;
  func_0x000107c61428(param_1 + _DAT_112d4b9f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f19874; end: 100f198b7;  */

void FUN_100f19874(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f198b8; end: 100f198c3; -[SCBitmojiAppUpsellBillboardEligibilityProviderEntryPoint setBitmojiAppServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f198b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b9f0;
  func_0x000107c61428(param_1 + _DAT_112d4b9f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f198c4; end: 100f19917;  */

void FUN_100f198c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f19918; end: 100f19a5b; -[SCBitmojiAppUpsellBillboardEligibilityProviderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100f199e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f199f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f19a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f19a3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f199f8) */
/* WARNING: Removing unreachable block (ram,0x000100f199e8) */
/* WARNING: Removing unreachable block (ram,0x000100f19a18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19918(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar4 = param_1;
  if (lVar1 != 0) {
    func_0x000107c3e95c();
    func_0x000107c61180();
    lVar4 = lVar1;
    if (param_1 != 0) {
      FUN_100f19830(0);
      func_0x000107c613fc();
      func_0x000107c3ddcc();
      func_0x000107c61180();
      lVar2 = 0;
      FUN_100f19720();
      lVar3 = lVar2;
      func_0x000107c610f8();
      *(long *)(lVar3 + _DAT_112d4b920) = param_1;
      lStack_50 = lVar3;
      lStack_48 = lVar2;
      func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
      func_0x000107c4e9e4(lVar1);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 100f19a5c; end: 100f19a9f; -[SCBitmojiAppUpsellBillboardEligibilityProviderEntryPoint end] */

void FUN_100f19a5c(undefined8 param_1)

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



/* Entry: 100f19aa0; end: 100f19c37;  */

void FUN_100f19aa0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10e5d30)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef1a2d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCBitmojiAppUpsellBillboardEligibilityProvider/SCBitmojiAppUpsellBillboardEligibilityProviderEntryPoint.swift"
                            ,0x6d,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f19c38);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c90();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f19c38; end: 100f19ce3; -[SCBitmojiAppUpsellBillboardEligibilityProviderEntryPoint setValue:forIvarName:] */

void FUN_100f19c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f19aa0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f19ce4; end: 100f19d57; -[SCBitmojiAppUpsellBillboardEligibilityProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19ce4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4b9e8,0);
  func_0x000107c61614(param_1 + _DAT_112d4b9f0,0);
  *(undefined8 *)(param_1 + _DAT_112d4b9f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f19d58; end: 100f19d8b;  */

void FUN_100f19d58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f19d8c; end: 100f19dd3; -[SCBitmojiAppUpsellBillboardEligibilityProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19d8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4b9e8);
  func_0x000107c61610(param_1 + _DAT_112d4b9f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4b9f8));
  return;
}



/* Entry: 100f19dd4; end: 100f19df3;  */

void FUN_100f19dd4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0c30);
  return;
}



/* Entry: 100f19df4; end: 100f19eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f19df4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e024e8);
  func_0x000107c61174(uVar1);
  uVar2 = param_2;
  func_0x000107c3e6fc(param_2);
  func_0x000107c61180();
  uVar3 = 0;
  func_0x000101b30c0c(0);
  func_0x000107c610f8();
  func_0x000101b30bd0(uVar2,uVar3);
  func_0x000107c4fba8(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return unaff_x20;
}



/* Entry: 100f19eb4; end: 100f19ecf;  */

void FUN_100f19eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f19ed0; end: 100f19eef;  */

void FUN_100f19ed0(void)

{
  func_0x000107c61168(&PTR_PTR_112d4ba68);
  return;
}



/* Entry: 100f19ef0; end: 100f19efb; -[SCBitmojiPosePickerServiceEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19ef0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bac0;
  func_0x000107c61428(param_1 + _DAT_112d4bac0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f19efc; end: 100f19f07; -[SCBitmojiPosePickerServiceEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19efc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bac0;
  func_0x000107c61428(param_1 + _DAT_112d4bac0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f19f08; end: 100f19f13; -[SCBitmojiPosePickerServiceEntryPoint flatlandContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19f08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bac8;
  func_0x000107c61428(param_1 + _DAT_112d4bac8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f19f14; end: 100f19f57;  */

void FUN_100f19f14(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f19f58; end: 100f19f63; -[SCBitmojiPosePickerServiceEntryPoint setFlatlandContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bac8;
  func_0x000107c61428(param_1 + _DAT_112d4bac8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f19f64; end: 100f19fb7;  */

void FUN_100f19f64(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f19fb8; end: 100f1a0df;  */

/* WARNING: Possible PIC construction at 0x000100f1a074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1a084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1a078) */
/* WARNING: Removing unreachable block (ram,0x000100f1a088) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f19fb8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c436b0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    FUN_100f19ed0(0);
    func_0x000107c613fc();
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e024e8);
    func_0x000107c61174(uVar2);
    func_0x000107c3e6fc(unaff_x20);
    func_0x000107c61180();
    uVar3 = 0;
    func_0x000101b30c0c(0);
    func_0x000107c610f8();
    func_0x000101b30bd0(unaff_x20,uVar3);
    func_0x000107c4fba8(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100f1a0e0; end: 100f1a107; -[SCBitmojiPosePickerServiceEntryPoint begin] */

void FUN_100f1a0e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f19fb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f1a108; end: 100f1a14b; -[SCBitmojiPosePickerServiceEntryPoint end] */

void FUN_100f1a108(undefined8 param_1)

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



/* Entry: 100f1a14c; end: 100f1a2e3;  */

void FUN_100f1a14c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10e5dd0)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef1a230,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCBitmojiPosePickerServiceProvider/SCBitmojiPosePickerServiceEntryPoint.swift"
                            ,0x4d,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1a2e4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54a74();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f1a2e4; end: 100f1a38f; -[SCBitmojiPosePickerServiceEntryPoint setValue:forIvarName:] */

void FUN_100f1a2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f1a14c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f1a390; end: 100f1a403; -[SCBitmojiPosePickerServiceEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1a390(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4bac0,0);
  func_0x000107c61614(param_1 + _DAT_112d4bac8,0);
  *(undefined8 *)(param_1 + _DAT_112d4bad0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f1a404; end: 100f1a437;  */

void FUN_100f1a404(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f1a438; end: 100f1a47f; -[SCBitmojiPosePickerServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1a438(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4bac0);
  func_0x000107c61610(param_1 + _DAT_112d4bac8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4bad0));
  return;
}



/* Entry: 100f1a480; end: 100f1a49f;  */

void FUN_100f1a480(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0cf8);
  return;
}



/* Entry: 100f1a4a0; end: 100f1a5a3;  */

void FUN_100f1a4a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 100f1a5a4; end: 100f1a5cf;  */

void FUN_100f1a5a4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f1a5d0; end: 100f1a5ef;  */

void FUN_100f1a5d0(void)

{
  func_0x000100f1a4dc();
  return;
}



/* Entry: 100f1a5f0; end: 100f1a5f7;  */

undefined8 FUN_100f1a5f0(void)

{
  return 0;
}



/* Entry: 100f1a5f8; end: 100f1a617;  */

void FUN_100f1a5f8(void)

{
  func_0x000107c61168(&PTR_PTR_112d4bb40);
  return;
}



/* Entry: 100f1a618; end: 100f1a623; -[SCContentPostSendUpsellSGEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1a618(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bba8;
  func_0x000107c61428(param_1 + _DAT_112d4bba8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1a624; end: 100f1a62f; -[SCContentPostSendUpsellSGEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1a624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bba8;
  func_0x000107c61428(param_1 + _DAT_112d4bba8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1a630; end: 100f1a63b; -[SCContentPostSendUpsellSGEntryPoint services] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1a630(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4bbb0;
  func_0x000107c61428(param_1 + _DAT_112d4bbb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1a63c; end: 100f1a67f;  */

void FUN_100f1a63c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f1a680; end: 100f1a68b; -[SCContentPostSendUpsellSGEntryPoint setServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1a680(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4bbb0;
  func_0x000107c61428(param_1 + _DAT_112d4bbb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1a68c; end: 100f1a6df;  */

void FUN_100f1a68c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f1a6e0; end: 100f1a863;  */

/* WARNING: Possible PIC construction at 0x000100f1a7f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f1a82c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1a7f8) */
/* WARNING: Removing unreachable block (ram,0x000100f1a830) */
/* WARNING: Removing unreachable block (ram,0x000100f1a838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1a6e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c52018();
  func_0x000107c61180();
  lVar3 = lVar2;
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100f1a5f8();
    func_0x000107c613fc();
    *(long *)(lVar3 + 0x10) = lVar2;
    *(long *)(lVar3 + 0x18) = unaff_x20;
    lVar4 = *(long *)(unaff_x20 + _DAT_112fae090);
    func_0x000107c61174(unaff_x20);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar1 = _DAT_112f307a8;
    lVar3 = unaff_x20;
    if (lVar4 != 0) {
      func_0x000107c61428(lVar2 + _DAT_112f307a8,auStack_58,0,0);
      lVar2 = lVar2 + lVar1;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c53fcc(lVar4);
        func_0x000107c615e8(lVar2);
      }
      func_0x000107c5bc28(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100f1a864; end: 100f1a88b; -[SCContentPostSendUpsellSGEntryPoint begin] */

void FUN_100f1a864(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f1a6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f1a88c; end: 100f1a8cf; -[SCContentPostSendUpsellSGEntryPoint end] */

void FUN_100f1a88c(undefined8 param_1)

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



/* Entry: 100f1a8d0; end: 100f1aa5f;  */

void FUN_100f1a8d0(long param_1,long param_2,long param_3)

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
    uVar2 = 0x7365636976726573;
    if (((param_2 != 0x7365636976726573) || (param_3 != -0x1800000000000000)) &&
       (func_0x000107c605b8(0x7365636976726573,0xe800000000000000,param_2,param_3,0),
       (uVar2 & 1) == 0)) {
      func_0x000107c602fc(0x15);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c5fb78(param_2,param_3);
      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                          "ContentPostSendUpsellSGImplementation/SCContentPostSendUpsellSGEntryPoint.swift"
                          ,0x4f,2,0x26,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f1aa60);
      (*pcVar1)();
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58fb0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f1aa60; end: 100f1ab0b; -[SCContentPostSendUpsellSGEntryPoint setValue:forIvarName:] */

void FUN_100f1aa60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100f1a8d0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f1ab0c; end: 100f1ab7f; -[SCContentPostSendUpsellSGEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1ab0c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4bba8,0);
  func_0x000107c61614(param_1 + _DAT_112d4bbb0,0);
  *(undefined8 *)(param_1 + _DAT_112d4bbb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f1ab80; end: 100f1abb3;  */

void FUN_100f1ab80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f1abb4; end: 100f1abfb; -[SCContentPostSendUpsellSGEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f1abb4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4bba8);
  func_0x000107c61610(param_1 + _DAT_112d4bbb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4bbb8));
  return;
}



/* Entry: 100f1abfc; end: 100f1ac1b;  */

void FUN_100f1abfc(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0dc0);
  return;
}



/* Entry: 100f1ac1c; end: 100f1af63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f1ac1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d4bbe8) = param_1;
  func_0x000107c61174();
  uVar3 = param_1;
  func_0x00010451338c();
  func_0x0001000285a8(0x112d4bbf0,&UNK_10d9125f0);
  puVar4 = auStack_70;
  auStack_70[0] = param_2;
  func_0x0001000838ec();
  lVar5 = 0;
  FUN_100f1ba74();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar2 = _DAT_112d4bc48;
  func_0x000107c61614(lVar6 + _DAT_112d4bc48,0);
  *(undefined8 *)(lVar6 + _DAT_112d4bc50) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d4bc58) = 0;
  *(undefined8 *)(lVar6 + _DAT_112d4bc60) = 0;
  func_0x000107c61604(lVar6 + lVar2,uVar3);
  *(undefined8 **)(lVar6 + _DAT_112d4bc68) = puVar4;
  *(undefined8 *)(lVar6 + _DAT_112d4bc70) = param_5;
  *(undefined8 *)(lVar6 + _DAT_112d4bc78) = param_6;
  *(undefined8 *)(lVar6 + _DAT_112d4bc80) = param_7;
  *(undefined8 *)(lVar6 + _DAT_112d4bc88) = param_8;
  *(undefined8 *)(lVar6 + _DAT_112d4bc90) = param_9;
  *(undefined8 *)(lVar6 + _DAT_112d4bc98) = param_10;
  *(undefined8 *)(lVar6 + _DAT_112d4bca0) = param_11;
  *(undefined8 *)(lVar6 + _DAT_112d4bca8) = param_12;
  *(undefined8 *)(lVar6 + _DAT_112d4bcb0) = param_13;
  *(undefined8 *)(lVar6 + _DAT_112d4bcb8) = param_14;
  *(undefined8 *)(lVar6 + _DAT_112d4bcc0) = param_15;
  puVar1 = PTR_s_init_1125d9248;
  lStack_80 = lVar6;
  lStack_78 = lVar5;
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
  func_0x000107c61174(param_15);
  plVar7 = &lStack_80;
  func_0x000107c61154(plVar7,puVar1);
  func_0x000107c61170(uVar3);
  *(long **)(unaff_x20 + _DAT_112d4bbf8) = plVar7;
  puVar8 = auStack_90;
  func_0x000107c61154(puVar8,PTR_s_init_1125d9248);
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
  return puVar8;
}


