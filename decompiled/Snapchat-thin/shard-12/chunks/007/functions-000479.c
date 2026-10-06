/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10968d990; end: 10968db83;  */

void FUN_10968d990(long param_1,int *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  int *piVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  int iVar17;
  
  uVar1 = *param_4;
  uVar13 = (ulong)uVar1;
  piVar10 = *(int **)(param_2 + 2);
  iVar9 = 1;
  piVar15 = piVar10;
  if (0 < (int)uVar1) {
    do {
      iVar9 = *piVar15 * iVar9;
      uVar13 = uVar13 - 1;
      piVar15 = piVar15 + 1;
    } while (uVar13 != 0);
  }
  if ((int)(uVar1 + 1) < *param_2) {
    iVar12 = ~uVar1 + *param_2;
    uVar13 = 1;
    piVar15 = piVar10 + (int)(uVar1 + 1);
    do {
      uVar13 = (ulong)(uint)(*piVar15 * (int)uVar13);
      iVar12 = iVar12 + -1;
      piVar15 = piVar15 + 1;
    } while (iVar12 != 0);
  }
  else {
    uVar13 = 1;
  }
  iVar12 = piVar10[(int)uVar1];
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + (long)(int)uVar1 * 4);
  lVar14 = *(long *)(param_2 + 4);
  lVar16 = *(long *)(param_3 + 4);
  iVar17 = (int)uVar13;
  if (iVar17 == 1) {
    if (0 < iVar9) {
      iVar17 = 0;
      uVar2 = 0;
      if (*param_3 != 1) {
        uVar2 = uVar1;
      }
      do {
        if (0 < (int)uVar1) {
          uVar13 = 0;
          do {
            puVar5[uVar13] = *(undefined8 *)(lVar14 + (long)*(int *)(lVar16 + uVar13 * 4) * 8);
            uVar13 = uVar13 + 1;
          } while (uVar1 != uVar13);
        }
        lVar14 = lVar14 + (long)iVar12 * 8;
        iVar17 = iVar17 + 1;
        puVar5 = puVar5 + (int)uVar1;
        lVar16 = lVar16 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
      } while (iVar17 != iVar9);
    }
  }
  else {
    uVar2 = iVar12 * iVar17;
    if (*param_3 == 1) {
      if (0 < iVar9) {
        iVar12 = 0;
        do {
          puVar11 = puVar5;
          if (0 < (int)uVar1) {
            uVar3 = 0;
            do {
              if (0 < iVar17) {
                lVar6 = (long)(*(int *)(lVar16 + uVar3 * 4) * iVar17) << 3;
                lVar7 = (long)iVar17;
                puVar8 = puVar5;
                do {
                  *puVar8 = *(undefined8 *)(lVar14 + lVar6);
                  lVar6 = lVar6 + 8;
                  lVar7 = lVar7 + -1;
                  puVar8 = puVar8 + 1;
                } while (lVar7 != 0);
              }
              puVar11 = puVar11 + iVar17;
              uVar3 = uVar3 + 1;
              puVar5 = (undefined8 *)
                       ((long)puVar5 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
            } while (uVar3 != uVar1);
          }
          iVar12 = iVar12 + 1;
          lVar14 = lVar14 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
          puVar5 = puVar11;
        } while (iVar12 != iVar9);
      }
    }
    else if (0 < iVar9) {
      iVar12 = 0;
      do {
        if (0 < (int)uVar1) {
          uVar4 = 0;
          do {
            if (0 < iVar17) {
              uVar3 = 0;
              do {
                puVar5[uVar3] =
                     *(undefined8 *)
                      (lVar14 + (uVar3 + (long)*(int *)(lVar16 + uVar3 * 4) * (long)iVar17) * 8);
                uVar3 = uVar3 + 1;
              } while (uVar13 != uVar3);
            }
            puVar5 = (undefined8 *)
                     ((long)puVar5 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
            lVar16 = lVar16 + (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2);
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar1);
        }
        lVar14 = lVar14 + (long)(int)uVar2 * 8;
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar9);
    }
  }
  return;
}



/* Entry: 10968db84; end: 10968dc4b;  */

void FUN_10968db84(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 auStack_b8 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  long lStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x12;
  uStack_40 = 0x2800000028;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  FUN_109522b28(&lStack_58,&uStack_40,auStack_30,4);
  plVar4 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_58,FUN_10968dc4c);
  lVar3 = lStack_58;
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  pcStack_68 = FUN_10968dc4c;
  lVar3 = *plVar4;
  lVar2 = plVar4[1];
  lVar1 = plVar4[2];
  uStack_78 = *(undefined8 *)(lVar3 + 8);
  lStack_80 = *(long *)(lVar3 + 0x10);
  auStack_88[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_80) >> 2);
  uStack_90 = *(undefined8 *)(lVar2 + 8);
  lStack_98 = *(long *)(lVar2 + 0x10);
  auStack_a0[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_98) >> 2);
  uStack_a8 = *(undefined8 *)(lVar1 + 8);
  lStack_b0 = *(long *)(lVar1 + 0x10);
  auStack_b8[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_b0) >> 2);
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10968d990(auStack_88,auStack_a0,auStack_b8,*(undefined8 *)(plVar4[3] + 0x10));
  return;
}



/* Entry: 10968dc4c; end: 10968dcc7;  */

void FUN_10968dc4c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar3 = param_2[1];
  lVar2 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar3 + 8);
  lStack_38 = *(long *)(lVar3 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_38) >> 2);
  uStack_48 = *(undefined8 *)(lVar2 + 8);
  lStack_50 = *(long *)(lVar2 + 0x10);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_50) >> 2);
  FUN_10968d990(auStack_28,auStack_40,auStack_58,*(undefined8 *)(param_2[3] + 0x10));
  return;
}



/* Entry: 10968dcc8; end: 10968dd43;  */

void FUN_10968dcc8(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = *(int **)(param_2 + 2);
  iVar2 = *param_2;
  lVar3 = (long)iVar2;
  piVar5 = *(int **)(param_2 + 6);
  piVar6 = *(int **)(param_2 + 10);
  FUN_10925b8c4(param_1,lVar3);
  if (0 < iVar2) {
    piVar1 = (int *)*param_1;
    do {
      iVar2 = *piVar4;
      if (iVar2 != -1) {
        iVar2 = *piVar5 + iVar2 + *piVar6;
      }
      *piVar1 = iVar2;
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
      lVar3 = lVar3 + -1;
      piVar1 = piVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10968dd44; end: 10968dd93;  */

void FUN_10968dd44(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  long in_x6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_2[2];
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  uStack_40 = param_1[2];
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  FUN_10968de68(**(undefined4 **)(in_x6 + 0x10),&uStack_30,&uStack_50,param_3);
  return;
}



/* Entry: 10968dd94; end: 10968de67;  */

void FUN_10968dd94(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 uVar20;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_c8;
  long lStack_c0;
  int *piStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = 0x18;
  uStack_38 = 0;
  uStack_40 = 0x1800000018;
  uStack_30 = 0x18;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  piStack_58 = (int *)0x0;
  FUN_109522b28(&piStack_58,&uStack_40,auStack_2c,5);
  pcVar9 = FUN_10968e1c8;
  puVar7 = (uint *)0x0;
  FUN_109680a78(param_1,0,&piStack_58);
  piVar6 = piStack_58;
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  __Unwind_Resume();
  uVar3 = *puVar7;
  uVar18 = (ulong)(int)uVar3;
  if (uVar3 != 0) {
    piVar19 = *(int **)(puVar7 + 2);
    lVar12 = uVar18 << 2;
    iVar16 = 1;
    piVar15 = piVar19;
    do {
      iVar16 = *piVar15 * iVar16;
      lVar12 = lVar12 + -4;
      piVar15 = piVar15 + 1;
    } while (lVar12 != 0);
    if (iVar16 != 1) {
      FUN_10925b8c4(&lStack_c8,uVar18);
      lVar12 = lStack_c8;
      if ((0 < (int)uVar3) && (*(undefined4 *)(lStack_c8 + uVar18 * 4 + -4) = 1, uVar3 != 1)) {
        iVar16 = *(int *)(lStack_c8 + uVar18 * 4 + -4);
        do {
          iVar16 = piVar19[uVar18 - 1] * iVar16;
          *(int *)(lStack_c8 + -8 + uVar18 * 4) = iVar16;
          bVar1 = 2 < uVar18;
          uVar18 = uVar18 - 1;
        } while (bVar1);
      }
      lVar10 = *(long *)(piVar6 + 2);
      iVar16 = (int)*(undefined8 *)piVar6;
      FUN_10925b8c4(&lStack_e0,(long)iVar16);
      if (1 < iVar16) {
        lVar13 = (ulong)(iVar16 - 2) << 2;
        iVar16 = *(int *)(lStack_e0 + (ulong)(iVar16 - 2) * 4 + 4);
        do {
          iVar16 = iVar16 + (*(int *)(lVar10 + lVar13) + -1) * *(int *)(lVar12 + lVar13);
          *(int *)(lStack_e0 + lVar13) = iVar16;
          lVar13 = lVar13 + -4;
        } while (lVar13 != -4);
      }
      puVar14 = *(undefined4 **)(puVar7 + 4);
      uVar3 = *puVar7;
      puVar11 = puVar14;
      if (0 < (int)uVar3) {
        lVar12 = 0;
        do {
          iVar16 = *(int *)(pcVar9 + lVar12);
          if (iVar16 < 0) {
            iVar16 = *(int *)(*(long *)(puVar7 + 2) + lVar12) + iVar16;
          }
          puVar11 = puVar11 + *(int *)(lStack_c8 + lVar12) * iVar16;
          lVar12 = lVar12 + 4;
        } while ((ulong)uVar3 * 4 - lVar12 != 0);
      }
      if (0 < (int)((ulong)((long)puVar11 - (long)puVar14) >> 2)) {
        lVar12 = ((long)puVar11 - (long)puVar14) * 0x40000000 >> 0x20;
        do {
          *puVar14 = uVar20;
          lVar12 = lVar12 + -1;
          puVar14 = puVar14 + 1;
        } while (lVar12 != 0);
      }
      FUN_10925b8c4(&lStack_f8,(long)(int)(uVar3 - 1));
      if (*piVar6 == 0) {
        uVar18 = 1;
      }
      else {
        uVar18 = (ulong)*(uint *)(*(long *)(piVar6 + 2) + (long)*piVar6 * 4 + -4);
      }
      lVar12 = *(long *)(piVar6 + 4);
      iVar16 = (int)uVar18;
      lVar10 = (long)iVar16;
      puVar14 = puVar11;
      while( true ) {
        if (0 < iVar16) {
          lVar13 = 0;
          puVar8 = puVar14;
          do {
            *puVar8 = *(undefined4 *)(lVar12 + lVar13 * 4);
            lVar13 = lVar13 + 1;
            puVar8 = puVar8 + 1;
          } while (lVar10 != lVar13);
        }
        puVar8 = puVar11;
        if ((int)((ulong)(lStack_f0 - lStack_f8) >> 2) < 1) break;
        lVar13 = *(long *)(piVar6 + 2);
        uVar5 = (ulong)(lStack_f0 - lStack_f8) >> 2 & 0x7fffffff;
        while( true ) {
          uVar17 = uVar5 - 1;
          iVar2 = *(int *)(lStack_f8 + uVar17 * 4) + 1;
          puVar8 = puVar14;
          if (iVar2 < *(int *)(lVar13 + uVar17 * 4)) break;
          *(undefined4 *)(lStack_f8 + uVar17 * 4) = 0;
          bVar1 = uVar5 < 2;
          uVar5 = uVar17;
          if (bVar1) goto LAB_10968e0f4;
        }
        *(int *)(lStack_f8 + uVar17 * 4) = iVar2;
        if ((long)uVar5 < 1) break;
        iVar2 = *(int *)(lStack_c8 + (uVar17 & 0xffffffff) * 4) -
                *(int *)(lStack_e0 + (uVar5 & 0xffffffff) * 4);
        iVar4 = iVar2 - iVar16;
        if (0 < iVar4) {
          lVar13 = (long)iVar4;
          puVar8 = puVar14 + lVar10;
          do {
            *puVar8 = uVar20;
            lVar13 = lVar13 + -1;
            puVar8 = puVar8 + 1;
          } while (lVar13 != 0);
        }
        puVar14 = puVar14 + iVar2;
        lVar12 = lVar12 + (-(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2);
      }
LAB_10968e0f4:
      if (*puVar7 == 0) {
        lVar12 = 1;
      }
      else {
        lVar13 = (long)(int)*puVar7 << 2;
        lVar12 = 1;
        piVar6 = *(int **)(puVar7 + 2);
        do {
          lVar12 = (long)*piVar6 * (long)(int)lVar12;
          lVar13 = lVar13 + -4;
          piVar6 = piVar6 + 1;
        } while (lVar13 != 0);
      }
      uVar18 = (*(long *)(puVar7 + 4) + lVar12 * 4) - (long)(puVar8 + lVar10);
      if (0 < (int)(uVar18 >> 2)) {
        lVar12 = (long)(uVar18 * 0x40000000) >> 0x20;
        puVar11 = puVar8 + lVar10;
        do {
          *puVar11 = uVar20;
          lVar12 = lVar12 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar12 != 0);
      }
      if (lStack_f8 != 0) {
        lStack_f0 = lStack_f8;
        __ZdlPv();
      }
      if (lStack_e0 != 0) {
        lStack_d8 = lStack_e0;
        __ZdlPv();
      }
      if (lStack_c8 == 0) {
        return;
      }
      lStack_c0 = lStack_c8;
      __ZdlPv();
      return;
    }
  }
  **(undefined4 **)(puVar7 + 4) = **(undefined4 **)(piVar6 + 4);
  return;
}



/* Entry: 10968de68; end: 10968e1c7;  */

void FUN_10968de68(undefined4 param_1,int *param_2,uint *param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  long lStack_60;
  
  uVar3 = *param_3;
  uVar15 = (ulong)(int)uVar3;
  if (uVar3 != 0) {
    piVar16 = *(int **)(param_3 + 2);
    lVar9 = uVar15 << 2;
    iVar13 = 1;
    piVar12 = piVar16;
    do {
      iVar13 = *piVar12 * iVar13;
      lVar9 = lVar9 + -4;
      piVar12 = piVar12 + 1;
    } while (lVar9 != 0);
    if (iVar13 != 1) {
      FUN_10925b8c4(&lStack_68,uVar15);
      lVar9 = lStack_68;
      if ((0 < (int)uVar3) && (*(undefined4 *)(lStack_68 + uVar15 * 4 + -4) = 1, uVar3 != 1)) {
        iVar13 = *(int *)(lStack_68 + uVar15 * 4 + -4);
        do {
          iVar13 = piVar16[uVar15 - 1] * iVar13;
          *(int *)(lStack_68 + -8 + uVar15 * 4) = iVar13;
          bVar1 = 2 < uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar1);
      }
      lVar7 = *(long *)(param_2 + 2);
      iVar13 = (int)*(undefined8 *)param_2;
      FUN_10925b8c4(&lStack_80,(long)iVar13);
      if (1 < iVar13) {
        lVar10 = (ulong)(iVar13 - 2) << 2;
        iVar13 = *(int *)(lStack_80 + (ulong)(iVar13 - 2) * 4 + 4);
        do {
          iVar13 = iVar13 + (*(int *)(lVar7 + lVar10) + -1) * *(int *)(lVar9 + lVar10);
          *(int *)(lStack_80 + lVar10) = iVar13;
          lVar10 = lVar10 + -4;
        } while (lVar10 != -4);
      }
      puVar11 = *(undefined4 **)(param_3 + 4);
      uVar3 = *param_3;
      puVar8 = puVar11;
      if (0 < (int)uVar3) {
        lVar9 = 0;
        do {
          iVar13 = *(int *)(param_5 + lVar9);
          if (iVar13 < 0) {
            iVar13 = *(int *)(*(long *)(param_3 + 2) + lVar9) + iVar13;
          }
          puVar8 = puVar8 + *(int *)(lStack_68 + lVar9) * iVar13;
          lVar9 = lVar9 + 4;
        } while ((ulong)uVar3 * 4 - lVar9 != 0);
      }
      if (0 < (int)((ulong)((long)puVar8 - (long)puVar11) >> 2)) {
        lVar9 = ((long)puVar8 - (long)puVar11) * 0x40000000 >> 0x20;
        do {
          *puVar11 = param_1;
          lVar9 = lVar9 + -1;
          puVar11 = puVar11 + 1;
        } while (lVar9 != 0);
      }
      FUN_10925b8c4(&lStack_98,(long)(int)(uVar3 - 1));
      if (*param_2 == 0) {
        uVar15 = 1;
      }
      else {
        uVar15 = (ulong)*(uint *)(*(long *)(param_2 + 2) + (long)*param_2 * 4 + -4);
      }
      lVar9 = *(long *)(param_2 + 4);
      iVar13 = (int)uVar15;
      lVar7 = (long)iVar13;
      puVar11 = puVar8;
      while( true ) {
        if (0 < iVar13) {
          lVar10 = 0;
          puVar6 = puVar11;
          do {
            *puVar6 = *(undefined4 *)(lVar9 + lVar10 * 4);
            lVar10 = lVar10 + 1;
            puVar6 = puVar6 + 1;
          } while (lVar7 != lVar10);
        }
        puVar6 = puVar8;
        if ((int)((ulong)(lStack_90 - lStack_98) >> 2) < 1) break;
        lVar10 = *(long *)(param_2 + 2);
        uVar5 = (ulong)(lStack_90 - lStack_98) >> 2 & 0x7fffffff;
        while( true ) {
          uVar14 = uVar5 - 1;
          iVar2 = *(int *)(lStack_98 + uVar14 * 4) + 1;
          puVar6 = puVar11;
          if (iVar2 < *(int *)(lVar10 + uVar14 * 4)) break;
          *(undefined4 *)(lStack_98 + uVar14 * 4) = 0;
          bVar1 = uVar5 < 2;
          uVar5 = uVar14;
          if (bVar1) goto LAB_10968e0f4;
        }
        *(int *)(lStack_98 + uVar14 * 4) = iVar2;
        if ((long)uVar5 < 1) break;
        iVar2 = *(int *)(lStack_68 + (uVar14 & 0xffffffff) * 4) -
                *(int *)(lStack_80 + (uVar5 & 0xffffffff) * 4);
        iVar4 = iVar2 - iVar13;
        if (0 < iVar4) {
          lVar10 = (long)iVar4;
          puVar6 = puVar11 + lVar7;
          do {
            *puVar6 = param_1;
            lVar10 = lVar10 + -1;
            puVar6 = puVar6 + 1;
          } while (lVar10 != 0);
        }
        puVar11 = puVar11 + iVar2;
        lVar9 = lVar9 + (-(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2);
      }
LAB_10968e0f4:
      if (*param_3 == 0) {
        lVar9 = 1;
      }
      else {
        lVar10 = (long)(int)*param_3 << 2;
        lVar9 = 1;
        piVar12 = *(int **)(param_3 + 2);
        do {
          lVar9 = (long)*piVar12 * (long)(int)lVar9;
          lVar10 = lVar10 + -4;
          piVar12 = piVar12 + 1;
        } while (lVar10 != 0);
      }
      uVar15 = (*(long *)(param_3 + 4) + lVar9 * 4) - (long)(puVar6 + lVar7);
      if (0 < (int)(uVar15 >> 2)) {
        lVar9 = (long)(uVar15 * 0x40000000) >> 0x20;
        puVar8 = puVar6 + lVar7;
        do {
          *puVar8 = param_1;
          lVar9 = lVar9 + -1;
          puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
      }
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv();
      }
      if (lStack_80 != 0) {
        lStack_78 = lStack_80;
        __ZdlPv();
      }
      if (lStack_68 == 0) {
        return;
      }
      lStack_60 = lStack_68;
      __ZdlPv();
      return;
    }
  }
  **(undefined4 **)(param_3 + 4) = **(undefined4 **)(param_2 + 4);
  return;
}



/* Entry: 10968e1c8; end: 10968e23b;  */

void FUN_10968e1c8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_30 = *(undefined8 *)(lVar1 + 8);
  lStack_38 = *(long *)(lVar1 + 0x10);
  uStack_18 = *(undefined8 *)(lVar2 + 8);
  lStack_20 = *(long *)(lVar2 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_38) >> 2);
  FUN_10968de68(**(undefined4 **)(param_2[4] + 8),auStack_28,auStack_40,
                (ulong)(*(long *)(param_2[2] + 0x18) - *(long *)(param_2[2] + 0x10)) >> 2 &
                0xffffffff);
  return;
}



/* Entry: 10968e23c; end: 10968e287;  */

void FUN_10968e23c(void)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  uint *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  int iVar18;
  long lStack_e8;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  int *piStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdac7b,FUN_10968e288);
  FUN_10968e344(&UNK_10dfdac7b,FUN_10968e2fc);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0;
  uStack_40 = 0x2800000028;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  piStack_58 = (int *)0x0;
  FUN_109522b28(&piStack_58,&uStack_40,auStack_30,4);
  pcVar7 = FUN_10968ead4;
  puVar6 = (uint *)0x0;
  FUN_109680a78(&UNK_10dfdac7b,0,&piStack_58);
  piVar5 = piStack_58;
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  __Unwind_Resume();
  uVar3 = *puVar6;
  uVar15 = (ulong)(int)uVar3;
  if (uVar3 != 0) {
    piVar17 = *(int **)(puVar6 + 2);
    lVar9 = uVar15 << 2;
    iVar18 = 1;
    piVar11 = piVar17;
    do {
      iVar18 = *piVar11 * iVar18;
      lVar9 = lVar9 + -4;
      piVar11 = piVar11 + 1;
    } while (lVar9 != 0);
    if (iVar18 != 1) {
      FUN_10925b8c4(&lStack_b8,uVar15);
      lVar9 = lStack_b8;
      if ((0 < (int)uVar3) && (*(undefined4 *)(lStack_b8 + uVar15 * 4 + -4) = 1, uVar3 != 1)) {
        iVar18 = *(int *)(lStack_b8 + uVar15 * 4 + -4);
        do {
          iVar18 = piVar17[uVar15 - 1] * iVar18;
          *(int *)(lStack_b8 + -8 + uVar15 * 4) = iVar18;
          bVar1 = 2 < uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar1);
      }
      lVar2 = *(long *)(piVar5 + 2);
      iVar18 = (int)*(undefined8 *)piVar5;
      FUN_10925b8c4(&lStack_d0,(long)iVar18);
      if (1 < iVar18) {
        lVar10 = (ulong)(iVar18 - 2) << 2;
        iVar18 = *(int *)(lStack_d0 + (ulong)(iVar18 - 2) * 4 + 4);
        do {
          iVar18 = iVar18 + (*(int *)(lVar2 + lVar10) + -1) * *(int *)(lVar9 + lVar10);
          *(int *)(lStack_d0 + lVar10) = iVar18;
          lVar10 = lVar10 + -4;
        } while (lVar10 != -4);
      }
      puVar16 = *(undefined8 **)(puVar6 + 4);
      uVar3 = *puVar6;
      if (0 < (int)uVar3) {
        lVar9 = 0;
        do {
          iVar18 = *(int *)(pcVar7 + lVar9);
          if (iVar18 < 0) {
            iVar18 = *(int *)(*(long *)(puVar6 + 2) + lVar9) + iVar18;
          }
          puVar16 = puVar16 + *(int *)(lStack_b8 + lVar9) * iVar18;
          lVar9 = lVar9 + 4;
        } while ((ulong)uVar3 * 4 - lVar9 != 0);
      }
      FUN_10925b8c4(&lStack_e8,(long)(int)(uVar3 - 1));
      if (*piVar5 == 0) {
        uVar15 = 1;
      }
      else {
        uVar15 = (ulong)*(uint *)(*(long *)(piVar5 + 2) + (long)*piVar5 * 4 + -4);
      }
      puVar8 = *(undefined8 **)(piVar5 + 4);
      while( true ) {
        puVar13 = puVar16;
        lVar9 = (long)(int)uVar15;
        puVar14 = puVar8;
        if (0 < (int)uVar15) {
          do {
            *puVar14 = *puVar13;
            lVar9 = lVar9 + -1;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar9 != 0);
        }
        if ((int)((ulong)(lStack_e0 - lStack_e8) >> 2) < 1) break;
        lVar9 = *(long *)(piVar5 + 2);
        uVar4 = (ulong)(lStack_e0 - lStack_e8) >> 2 & 0x7fffffff;
        while( true ) {
          uVar12 = uVar4 - 1;
          iVar18 = *(int *)(lStack_e8 + uVar12 * 4) + 1;
          if (iVar18 < *(int *)(lVar9 + uVar12 * 4)) break;
          *(undefined4 *)(lStack_e8 + uVar12 * 4) = 0;
          bVar1 = uVar4 < 2;
          uVar4 = uVar12;
          if (bVar1) goto LAB_10968ea60;
        }
        *(int *)(lStack_e8 + uVar12 * 4) = iVar18;
        if ((long)uVar4 < 1) goto LAB_10968ea60;
        puVar16 = puVar16 + (*(int *)(lStack_b8 + (uVar12 & 0xffffffff) * 4) -
                            *(int *)(lStack_d0 + (uVar4 & 0xffffffff) * 4));
        puVar8 = (undefined8 *)
                 ((long)puVar8 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
      }
      if (lStack_e8 == 0) goto LAB_10968ea68;
LAB_10968ea60:
      lStack_e0 = lStack_e8;
      __ZdlPv();
LAB_10968ea68:
      if (lStack_d0 != 0) {
        lStack_c8 = lStack_d0;
        __ZdlPv();
      }
      if (lStack_b8 == 0) {
        return;
      }
      lStack_b0 = lStack_b8;
      __ZdlPv();
      return;
    }
  }
  **(undefined8 **)(piVar5 + 4) = **(undefined8 **)(puVar6 + 4);
  return;
}



/* Entry: 10968e288; end: 10968e2fb;  */

void FUN_10968e288(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = *param_2;
  lVar3 = (long)iVar2;
  piVar4 = *(int **)(param_2 + 6);
  piVar5 = *(int **)(param_2 + 10);
  FUN_10925b8c4(param_1,lVar3);
  if (0 < iVar2) {
    piVar1 = (int *)*param_1;
    do {
      iVar2 = *piVar4;
      if ((iVar2 != -1) && (iVar2 = *piVar5 - iVar2, *piVar5 == -1)) {
        iVar2 = -1;
      }
      *piVar1 = iVar2;
      piVar5 = piVar5 + 1;
      lVar3 = lVar3 + -1;
      piVar1 = piVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10968e2fc; end: 10968e343;  */

void FUN_10968e2fc(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = param_1[2];
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_40 = param_2[2];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  FUN_10968e40c(&uStack_30,&uStack_50,param_3);
  return;
}



/* Entry: 10968e344; end: 10968e40b;  */

void FUN_10968e344(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  uint *puVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  long lStack_e8;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  int *piStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0;
  uStack_40 = 0x1800000018;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  piStack_58 = (int *)0x0;
  FUN_109522b28(&piStack_58,&uStack_40,auStack_30,4);
  pcVar7 = FUN_10968e6b4;
  puVar6 = (uint *)0x0;
  FUN_109680a78(param_1,0,&piStack_58);
  piVar5 = piStack_58;
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  __Unwind_Resume();
  uVar3 = *puVar6;
  uVar15 = (ulong)(int)uVar3;
  if (uVar3 != 0) {
    piVar17 = *(int **)(puVar6 + 2);
    lVar9 = uVar15 << 2;
    iVar18 = 1;
    piVar11 = piVar17;
    do {
      iVar18 = *piVar11 * iVar18;
      lVar9 = lVar9 + -4;
      piVar11 = piVar11 + 1;
    } while (lVar9 != 0);
    if (iVar18 != 1) {
      FUN_10925b8c4(&lStack_b8,uVar15);
      lVar9 = lStack_b8;
      if ((0 < (int)uVar3) && (*(undefined4 *)(lStack_b8 + uVar15 * 4 + -4) = 1, uVar3 != 1)) {
        iVar18 = *(int *)(lStack_b8 + uVar15 * 4 + -4);
        do {
          iVar18 = piVar17[uVar15 - 1] * iVar18;
          *(int *)(lStack_b8 + -8 + uVar15 * 4) = iVar18;
          bVar1 = 2 < uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar1);
      }
      lVar2 = *(long *)(piVar5 + 2);
      iVar18 = (int)*(undefined8 *)piVar5;
      FUN_10925b8c4(&lStack_d0,(long)iVar18);
      if (1 < iVar18) {
        lVar10 = (ulong)(iVar18 - 2) << 2;
        iVar18 = *(int *)(lStack_d0 + (ulong)(iVar18 - 2) * 4 + 4);
        do {
          iVar18 = iVar18 + (*(int *)(lVar2 + lVar10) + -1) * *(int *)(lVar9 + lVar10);
          *(int *)(lStack_d0 + lVar10) = iVar18;
          lVar10 = lVar10 + -4;
        } while (lVar10 != -4);
      }
      puVar16 = *(undefined4 **)(puVar6 + 4);
      uVar3 = *puVar6;
      if (0 < (int)uVar3) {
        lVar9 = 0;
        do {
          iVar18 = *(int *)(pcVar7 + lVar9);
          if (iVar18 < 0) {
            iVar18 = *(int *)(*(long *)(puVar6 + 2) + lVar9) + iVar18;
          }
          puVar16 = puVar16 + *(int *)(lStack_b8 + lVar9) * iVar18;
          lVar9 = lVar9 + 4;
        } while ((ulong)uVar3 * 4 - lVar9 != 0);
      }
      FUN_10925b8c4(&lStack_e8,(long)(int)(uVar3 - 1));
      if (*piVar5 == 0) {
        uVar15 = 1;
      }
      else {
        uVar15 = (ulong)*(uint *)(*(long *)(piVar5 + 2) + (long)*piVar5 * 4 + -4);
      }
      puVar8 = *(undefined4 **)(piVar5 + 4);
      while( true ) {
        puVar13 = puVar16;
        lVar9 = (long)(int)uVar15;
        puVar14 = puVar8;
        if (0 < (int)uVar15) {
          do {
            *puVar14 = *puVar13;
            lVar9 = lVar9 + -1;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar9 != 0);
        }
        if ((int)((ulong)(lStack_e0 - lStack_e8) >> 2) < 1) break;
        lVar9 = *(long *)(piVar5 + 2);
        uVar4 = (ulong)(lStack_e0 - lStack_e8) >> 2 & 0x7fffffff;
        while( true ) {
          uVar12 = uVar4 - 1;
          iVar18 = *(int *)(lStack_e8 + uVar12 * 4) + 1;
          if (iVar18 < *(int *)(lVar9 + uVar12 * 4)) break;
          *(undefined4 *)(lStack_e8 + uVar12 * 4) = 0;
          bVar1 = uVar4 < 2;
          uVar4 = uVar12;
          if (bVar1) goto LAB_10968e640;
        }
        *(int *)(lStack_e8 + uVar12 * 4) = iVar18;
        if ((long)uVar4 < 1) goto LAB_10968e640;
        puVar16 = puVar16 + (*(int *)(lStack_b8 + (uVar12 & 0xffffffff) * 4) -
                            *(int *)(lStack_d0 + (uVar4 & 0xffffffff) * 4));
        puVar8 = (undefined4 *)
                 ((long)puVar8 + (-(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2));
      }
      if (lStack_e8 == 0) goto LAB_10968e648;
LAB_10968e640:
      lStack_e0 = lStack_e8;
      __ZdlPv();
LAB_10968e648:
      if (lStack_d0 != 0) {
        lStack_c8 = lStack_d0;
        __ZdlPv();
      }
      if (lStack_b8 == 0) {
        return;
      }
      lStack_b0 = lStack_b8;
      __ZdlPv();
      return;
    }
  }
  **(undefined4 **)(piVar5 + 4) = **(undefined4 **)(puVar6 + 4);
  return;
}



/* Entry: 10968e40c; end: 10968e6b3;  */

void FUN_10968e40c(int *param_1,uint *param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  
  uVar3 = *param_2;
  uVar12 = (ulong)(int)uVar3;
  if (uVar3 != 0) {
    piVar14 = *(int **)(param_2 + 2);
    lVar6 = uVar12 << 2;
    iVar15 = 1;
    piVar8 = piVar14;
    do {
      iVar15 = *piVar8 * iVar15;
      lVar6 = lVar6 + -4;
      piVar8 = piVar8 + 1;
    } while (lVar6 != 0);
    if (iVar15 != 1) {
      FUN_10925b8c4(&lStack_58,uVar12);
      lVar6 = lStack_58;
      if ((0 < (int)uVar3) && (*(undefined4 *)(lStack_58 + uVar12 * 4 + -4) = 1, uVar3 != 1)) {
        iVar15 = *(int *)(lStack_58 + uVar12 * 4 + -4);
        do {
          iVar15 = piVar14[uVar12 - 1] * iVar15;
          *(int *)(lStack_58 + -8 + uVar12 * 4) = iVar15;
          bVar1 = 2 < uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar1);
      }
      lVar2 = *(long *)(param_1 + 2);
      iVar15 = (int)*(undefined8 *)param_1;
      FUN_10925b8c4(&lStack_70,(long)iVar15);
      if (1 < iVar15) {
        lVar7 = (ulong)(iVar15 - 2) << 2;
        iVar15 = *(int *)(lStack_70 + (ulong)(iVar15 - 2) * 4 + 4);
        do {
          iVar15 = iVar15 + (*(int *)(lVar2 + lVar7) + -1) * *(int *)(lVar6 + lVar7);
          *(int *)(lStack_70 + lVar7) = iVar15;
          lVar7 = lVar7 + -4;
        } while (lVar7 != -4);
      }
      puVar13 = *(undefined4 **)(param_2 + 4);
      uVar3 = *param_2;
      if (0 < (int)uVar3) {
        lVar6 = 0;
        do {
          iVar15 = *(int *)(param_4 + lVar6);
          if (iVar15 < 0) {
            iVar15 = *(int *)(*(long *)(param_2 + 2) + lVar6) + iVar15;
          }
          puVar13 = puVar13 + *(int *)(lStack_58 + lVar6) * iVar15;
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar3 * 4 - lVar6 != 0);
      }
      FUN_10925b8c4(&lStack_88,(long)(int)(uVar3 - 1));
      if (*param_1 == 0) {
        uVar12 = 1;
      }
      else {
        uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 2) + (long)*param_1 * 4 + -4);
      }
      puVar5 = *(undefined4 **)(param_1 + 4);
      while( true ) {
        puVar10 = puVar13;
        lVar6 = (long)(int)uVar12;
        puVar11 = puVar5;
        if (0 < (int)uVar12) {
          do {
            *puVar11 = *puVar10;
            lVar6 = lVar6 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar6 != 0);
        }
        if ((int)((ulong)(lStack_80 - lStack_88) >> 2) < 1) break;
        lVar6 = *(long *)(param_1 + 2);
        uVar4 = (ulong)(lStack_80 - lStack_88) >> 2 & 0x7fffffff;
        while( true ) {
          uVar9 = uVar4 - 1;
          iVar15 = *(int *)(lStack_88 + uVar9 * 4) + 1;
          if (iVar15 < *(int *)(lVar6 + uVar9 * 4)) break;
          *(undefined4 *)(lStack_88 + uVar9 * 4) = 0;
          bVar1 = uVar4 < 2;
          uVar4 = uVar9;
          if (bVar1) goto LAB_10968e640;
        }
        *(int *)(lStack_88 + uVar9 * 4) = iVar15;
        if ((long)uVar4 < 1) goto LAB_10968e640;
        puVar13 = puVar13 + (*(int *)(lStack_58 + (uVar9 & 0xffffffff) * 4) -
                            *(int *)(lStack_70 + (uVar4 & 0xffffffff) * 4));
        puVar5 = (undefined4 *)
                 ((long)puVar5 + (-(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2));
      }
      if (lStack_88 == 0) goto LAB_10968e648;
LAB_10968e640:
      lStack_80 = lStack_88;
      __ZdlPv();
LAB_10968e648:
      if (lStack_70 != 0) {
        lStack_68 = lStack_70;
        __ZdlPv();
      }
      if (lStack_58 == 0) {
        return;
      }
      lStack_50 = lStack_58;
      __ZdlPv();
      return;
    }
  }
  **(undefined4 **)(param_1 + 4) = **(undefined4 **)(param_2 + 4);
  return;
}



/* Entry: 10968e6b4; end: 10968e763;  */

void FUN_10968e6b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  FUN_10968e40c(auStack_28,auStack_40,
                (ulong)(*(long *)(param_2[2] + 0x18) - *(long *)(param_2[2] + 0x10)) >> 2 &
                0xffffffff);
  return;
}



/* Entry: 10968e764; end: 10968e82b;  */

void FUN_10968e764(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  uint *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  int iVar18;
  long lStack_e8;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  int *piStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0;
  uStack_40 = 0x2800000028;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  piStack_58 = (int *)0x0;
  FUN_109522b28(&piStack_58,&uStack_40,auStack_30,4);
  pcVar7 = FUN_10968ead4;
  puVar6 = (uint *)0x0;
  FUN_109680a78(param_1,0,&piStack_58);
  piVar5 = piStack_58;
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (piStack_58 != (int *)0x0) {
    piStack_50 = piStack_58;
    __ZdlPv();
  }
  __Unwind_Resume();
  uVar3 = *puVar6;
  uVar15 = (ulong)(int)uVar3;
  if (uVar3 != 0) {
    piVar17 = *(int **)(puVar6 + 2);
    lVar9 = uVar15 << 2;
    iVar18 = 1;
    piVar11 = piVar17;
    do {
      iVar18 = *piVar11 * iVar18;
      lVar9 = lVar9 + -4;
      piVar11 = piVar11 + 1;
    } while (lVar9 != 0);
    if (iVar18 != 1) {
      FUN_10925b8c4(&lStack_b8,uVar15);
      lVar9 = lStack_b8;
      if ((0 < (int)uVar3) && (*(undefined4 *)(lStack_b8 + uVar15 * 4 + -4) = 1, uVar3 != 1)) {
        iVar18 = *(int *)(lStack_b8 + uVar15 * 4 + -4);
        do {
          iVar18 = piVar17[uVar15 - 1] * iVar18;
          *(int *)(lStack_b8 + -8 + uVar15 * 4) = iVar18;
          bVar1 = 2 < uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar1);
      }
      lVar2 = *(long *)(piVar5 + 2);
      iVar18 = (int)*(undefined8 *)piVar5;
      FUN_10925b8c4(&lStack_d0,(long)iVar18);
      if (1 < iVar18) {
        lVar10 = (ulong)(iVar18 - 2) << 2;
        iVar18 = *(int *)(lStack_d0 + (ulong)(iVar18 - 2) * 4 + 4);
        do {
          iVar18 = iVar18 + (*(int *)(lVar2 + lVar10) + -1) * *(int *)(lVar9 + lVar10);
          *(int *)(lStack_d0 + lVar10) = iVar18;
          lVar10 = lVar10 + -4;
        } while (lVar10 != -4);
      }
      puVar16 = *(undefined8 **)(puVar6 + 4);
      uVar3 = *puVar6;
      if (0 < (int)uVar3) {
        lVar9 = 0;
        do {
          iVar18 = *(int *)(pcVar7 + lVar9);
          if (iVar18 < 0) {
            iVar18 = *(int *)(*(long *)(puVar6 + 2) + lVar9) + iVar18;
          }
          puVar16 = puVar16 + *(int *)(lStack_b8 + lVar9) * iVar18;
          lVar9 = lVar9 + 4;
        } while ((ulong)uVar3 * 4 - lVar9 != 0);
      }
      FUN_10925b8c4(&lStack_e8,(long)(int)(uVar3 - 1));
      if (*piVar5 == 0) {
        uVar15 = 1;
      }
      else {
        uVar15 = (ulong)*(uint *)(*(long *)(piVar5 + 2) + (long)*piVar5 * 4 + -4);
      }
      puVar8 = *(undefined8 **)(piVar5 + 4);
      while( true ) {
        puVar13 = puVar16;
        lVar9 = (long)(int)uVar15;
        puVar14 = puVar8;
        if (0 < (int)uVar15) {
          do {
            *puVar14 = *puVar13;
            lVar9 = lVar9 + -1;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar9 != 0);
        }
        if ((int)((ulong)(lStack_e0 - lStack_e8) >> 2) < 1) break;
        lVar9 = *(long *)(piVar5 + 2);
        uVar4 = (ulong)(lStack_e0 - lStack_e8) >> 2 & 0x7fffffff;
        while( true ) {
          uVar12 = uVar4 - 1;
          iVar18 = *(int *)(lStack_e8 + uVar12 * 4) + 1;
          if (iVar18 < *(int *)(lVar9 + uVar12 * 4)) break;
          *(undefined4 *)(lStack_e8 + uVar12 * 4) = 0;
          bVar1 = uVar4 < 2;
          uVar4 = uVar12;
          if (bVar1) goto LAB_10968ea60;
        }
        *(int *)(lStack_e8 + uVar12 * 4) = iVar18;
        if ((long)uVar4 < 1) goto LAB_10968ea60;
        puVar16 = puVar16 + (*(int *)(lStack_b8 + (uVar12 & 0xffffffff) * 4) -
                            *(int *)(lStack_d0 + (uVar4 & 0xffffffff) * 4));
        puVar8 = (undefined8 *)
                 ((long)puVar8 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
      }
      if (lStack_e8 == 0) goto LAB_10968ea68;
LAB_10968ea60:
      lStack_e0 = lStack_e8;
      __ZdlPv();
LAB_10968ea68:
      if (lStack_d0 != 0) {
        lStack_c8 = lStack_d0;
        __ZdlPv();
      }
      if (lStack_b8 == 0) {
        return;
      }
      lStack_b0 = lStack_b8;
      __ZdlPv();
      return;
    }
  }
  **(undefined8 **)(piVar5 + 4) = **(undefined8 **)(puVar6 + 4);
  return;
}



/* Entry: 10968e82c; end: 10968ead3;  */

void FUN_10968e82c(int *param_1,uint *param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int *piVar14;
  int iVar15;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  
  uVar3 = *param_2;
  uVar12 = (ulong)(int)uVar3;
  if (uVar3 != 0) {
    piVar14 = *(int **)(param_2 + 2);
    lVar6 = uVar12 << 2;
    iVar15 = 1;
    piVar8 = piVar14;
    do {
      iVar15 = *piVar8 * iVar15;
      lVar6 = lVar6 + -4;
      piVar8 = piVar8 + 1;
    } while (lVar6 != 0);
    if (iVar15 != 1) {
      FUN_10925b8c4(&lStack_58,uVar12);
      lVar6 = lStack_58;
      if ((0 < (int)uVar3) && (*(undefined4 *)(lStack_58 + uVar12 * 4 + -4) = 1, uVar3 != 1)) {
        iVar15 = *(int *)(lStack_58 + uVar12 * 4 + -4);
        do {
          iVar15 = piVar14[uVar12 - 1] * iVar15;
          *(int *)(lStack_58 + -8 + uVar12 * 4) = iVar15;
          bVar1 = 2 < uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar1);
      }
      lVar2 = *(long *)(param_1 + 2);
      iVar15 = (int)*(undefined8 *)param_1;
      FUN_10925b8c4(&lStack_70,(long)iVar15);
      if (1 < iVar15) {
        lVar7 = (ulong)(iVar15 - 2) << 2;
        iVar15 = *(int *)(lStack_70 + (ulong)(iVar15 - 2) * 4 + 4);
        do {
          iVar15 = iVar15 + (*(int *)(lVar2 + lVar7) + -1) * *(int *)(lVar6 + lVar7);
          *(int *)(lStack_70 + lVar7) = iVar15;
          lVar7 = lVar7 + -4;
        } while (lVar7 != -4);
      }
      puVar13 = *(undefined8 **)(param_2 + 4);
      uVar3 = *param_2;
      if (0 < (int)uVar3) {
        lVar6 = 0;
        do {
          iVar15 = *(int *)(param_4 + lVar6);
          if (iVar15 < 0) {
            iVar15 = *(int *)(*(long *)(param_2 + 2) + lVar6) + iVar15;
          }
          puVar13 = puVar13 + *(int *)(lStack_58 + lVar6) * iVar15;
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar3 * 4 - lVar6 != 0);
      }
      FUN_10925b8c4(&lStack_88,(long)(int)(uVar3 - 1));
      if (*param_1 == 0) {
        uVar12 = 1;
      }
      else {
        uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 2) + (long)*param_1 * 4 + -4);
      }
      puVar5 = *(undefined8 **)(param_1 + 4);
      while( true ) {
        puVar10 = puVar13;
        lVar6 = (long)(int)uVar12;
        puVar11 = puVar5;
        if (0 < (int)uVar12) {
          do {
            *puVar11 = *puVar10;
            lVar6 = lVar6 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar6 != 0);
        }
        if ((int)((ulong)(lStack_80 - lStack_88) >> 2) < 1) break;
        lVar6 = *(long *)(param_1 + 2);
        uVar4 = (ulong)(lStack_80 - lStack_88) >> 2 & 0x7fffffff;
        while( true ) {
          uVar9 = uVar4 - 1;
          iVar15 = *(int *)(lStack_88 + uVar9 * 4) + 1;
          if (iVar15 < *(int *)(lVar6 + uVar9 * 4)) break;
          *(undefined4 *)(lStack_88 + uVar9 * 4) = 0;
          bVar1 = uVar4 < 2;
          uVar4 = uVar9;
          if (bVar1) goto LAB_10968ea60;
        }
        *(int *)(lStack_88 + uVar9 * 4) = iVar15;
        if ((long)uVar4 < 1) goto LAB_10968ea60;
        puVar13 = puVar13 + (*(int *)(lStack_58 + (uVar9 & 0xffffffff) * 4) -
                            *(int *)(lStack_70 + (uVar4 & 0xffffffff) * 4));
        puVar5 = (undefined8 *)
                 ((long)puVar5 + (-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3));
      }
      if (lStack_88 == 0) goto LAB_10968ea68;
LAB_10968ea60:
      lStack_80 = lStack_88;
      __ZdlPv();
LAB_10968ea68:
      if (lStack_70 != 0) {
        lStack_68 = lStack_70;
        __ZdlPv();
      }
      if (lStack_58 == 0) {
        return;
      }
      lStack_50 = lStack_58;
      __ZdlPv();
      return;
    }
  }
  **(undefined8 **)(param_1 + 4) = **(undefined8 **)(param_2 + 4);
  return;
}



/* Entry: 10968ead4; end: 10968eb3b;  */

void FUN_10968ead4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  FUN_10968e82c(auStack_28,auStack_40,
                (ulong)(*(long *)(param_2[2] + 0x18) - *(long *)(param_2[2] + 0x10)) >> 2 &
                0xffffffff);
  return;
}



/* Entry: 10968eb3c; end: 10968ebaf;  */

void FUN_10968eb3c(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_2 + 2);
  iVar2 = *param_2;
  lVar3 = (long)iVar2;
  piVar5 = *(int **)(param_2 + 6);
  FUN_10925b8c4(param_1,lVar3);
  if (0 < iVar2) {
    piVar1 = (int *)*param_1;
    do {
      iVar2 = *piVar4;
      if ((iVar2 != -1) && (iVar2 = *piVar5 * iVar2, *piVar5 == -1)) {
        iVar2 = -1;
      }
      *piVar1 = iVar2;
      piVar5 = piVar5 + 1;
      lVar3 = lVar3 + -1;
      piVar1 = piVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 10968ebb0; end: 10968ef8b;  */

void FUN_10968ebb0(int *param_1,int *param_2,undefined8 param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined4 uVar17;
  long lStack_b8;
  long lStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  int iStack_88;
  undefined4 uStack_84;
  long lStack_80;
  int *piStack_70;
  int *piStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  iVar7 = *param_2;
  if (iVar7 != 0) {
    lVar13 = (long)iVar7 << 2;
    iVar8 = 1;
    piVar11 = *(int **)(param_2 + 2);
    do {
      iVar8 = *piVar11 * iVar8;
      lVar13 = lVar13 + -4;
      piVar11 = piVar11 + 1;
    } while (lVar13 != 0);
    if (iVar8 != 1) {
      lStack_58 = 0;
      lStack_50 = 0;
      uStack_48 = 0;
      piStack_70 = (int *)0x0;
      piStack_68 = (int *)0x0;
      uStack_60 = 0;
      if (0 < iVar7) {
        lVar13 = 0;
        do {
          if (1 < *param_4) {
            iStack_88 = (int)((ulong)(lStack_50 - lStack_58) >> 2);
            FUN_1092d7128(&piStack_70,&iStack_88);
            FUN_10923b3a0(&lStack_58,param_4);
          }
          iVar7 = *(int *)(*(long *)(param_2 + 2) + lVar13 * 4);
          if (1 < iVar7) {
            iStack_88 = iVar7;
            FUN_1092d7128(&lStack_58,&iStack_88);
          }
          lVar13 = lVar13 + 1;
          param_4 = param_4 + 1;
        } while (lVar13 < *param_2);
      }
      lVar13 = lStack_58;
      piVar4 = piStack_68;
      piVar11 = piStack_70;
      uVar16 = lStack_50 - lStack_58;
      uStack_a0 = 0xffffffff;
      FUN_1092cd11c(&iStack_88,(long)(uVar16 * 0x40000000) >> 0x20,&uStack_a0);
      lVar5 = lStack_58;
      uVar9 = ((long)piVar4 - (long)piVar11) * 0x40000000 & 0xffffffff00000000;
      if (uVar9 != 0) {
        lVar12 = (long)uVar9 >> 0x1e;
        do {
          *(undefined4 *)(CONCAT44(uStack_84,iStack_88) + (long)*piVar11 * 4) = 0;
          lVar12 = lVar12 + -4;
          piVar11 = piVar11 + 1;
        } while (lVar12 != 0);
      }
      lVar12 = CONCAT44(uStack_84,iStack_88);
      if (0 < (int)(uVar16 >> 2)) {
        iVar7 = 1;
        uVar9 = uVar16 >> 2 & 0x7fffffff;
        do {
          uVar16 = uVar9 - 1;
          if (*(int *)(lVar12 + uVar16 * 4) != 0) {
            *(int *)(lVar12 + uVar16 * 4) = iVar7;
            iVar7 = *(int *)(lVar13 + uVar16 * 4) * iVar7;
          }
          bVar1 = 1 < uVar9;
          uVar9 = uVar16;
        } while (bVar1);
      }
      iVar7 = *(int *)(lStack_80 + -4);
      uVar9 = lStack_50 - lStack_58;
      FUN_10925b8c4(&uStack_a0,(long)(uVar9 * 0x40000000) >> 0x20);
      iVar8 = (int)(uVar9 >> 2);
      if (1 < iVar8) {
        uVar9 = (ulong)(iVar8 - 2);
        lVar13 = uVar9 << 2;
        iVar8 = *(int *)(CONCAT44(uStack_9c,uStack_a0) + uVar9 * 4 + 4);
        do {
          iVar8 = iVar8 + (*(int *)(lVar5 + lVar13) + -1) * *(int *)(lVar12 + lVar13);
          *(int *)(CONCAT44(uStack_9c,uStack_a0) + lVar13) = iVar8;
          lVar13 = lVar13 + -4;
        } while (lVar13 != -4);
      }
      FUN_10925b8c4(&lStack_b8,(lStack_50 - lStack_58 >> 2) + -1);
      puVar10 = *(undefined4 **)(param_2 + 4);
      iVar8 = *(int *)(lStack_50 + -4);
      lVar13 = (long)iVar8;
      puVar14 = *(undefined4 **)(param_1 + 4);
      while( true ) {
        if (iVar7 == 0) {
          if (0 < iVar8) {
            uVar17 = *puVar10;
            puVar6 = puVar14;
            lVar5 = lVar13;
            do {
              *puVar6 = uVar17;
              lVar5 = lVar5 + -1;
              puVar6 = puVar6 + 1;
            } while (lVar5 != 0);
          }
        }
        else {
          lVar5 = lVar13;
          puVar6 = puVar14;
          puVar15 = puVar10;
          if (0 < iVar8) {
            do {
              *puVar6 = *puVar15;
              lVar5 = lVar5 + -1;
              puVar6 = puVar6 + 1;
              puVar15 = puVar15 + 1;
            } while (lVar5 != 0);
          }
        }
        uVar9 = (ulong)(lStack_b0 - lStack_b8) >> 2 & 0x7fffffff;
        if ((int)((ulong)(lStack_b0 - lStack_b8) >> 2) < 1) break;
        while( true ) {
          uVar16 = uVar9 - 1;
          iVar2 = *(int *)(lStack_b8 + uVar16 * 4) + 1;
          if (iVar2 < *(int *)(lStack_58 + uVar16 * 4)) break;
          *(undefined4 *)(lStack_b8 + uVar16 * 4) = 0;
          bVar1 = uVar9 < 2;
          uVar9 = uVar16;
          if (bVar1) goto LAB_10968eec4;
        }
        *(int *)(lStack_b8 + uVar16 * 4) = iVar2;
        if ((long)uVar9 < 1) goto LAB_10968eec4;
        puVar10 = puVar10 + (*(int *)(CONCAT44(uStack_84,iStack_88) + (uVar16 & 0xffffffff) * 4) -
                            *(int *)(CONCAT44(uStack_9c,uStack_a0) + (uVar9 & 0xffffffff) * 4));
        puVar14 = puVar14 + lVar13;
      }
      if (lStack_b8 == 0) goto LAB_10968eecc;
LAB_10968eec4:
      lStack_b0 = lStack_b8;
      __ZdlPv();
LAB_10968eecc:
      if (CONCAT44(uStack_9c,uStack_a0) != 0) {
        lStack_98 = CONCAT44(uStack_9c,uStack_a0);
        __ZdlPv();
      }
      if (CONCAT44(uStack_84,iStack_88) != 0) {
        lStack_80 = CONCAT44(uStack_84,iStack_88);
        __ZdlPv();
      }
      if (piStack_70 != (int *)0x0) {
        piStack_68 = piStack_70;
        __ZdlPv();
      }
      if (lStack_58 == 0) {
        return;
      }
      lStack_50 = lStack_58;
      __ZdlPv();
      return;
    }
  }
  if (*param_1 == 0) {
    uVar9 = 1;
  }
  else {
    lVar13 = (long)*param_1 << 2;
    uVar9 = 1;
    piVar11 = *(int **)(param_1 + 2);
    do {
      uVar3 = *piVar11 * (int)uVar9;
      uVar9 = (ulong)uVar3;
      lVar13 = lVar13 + -4;
      piVar11 = piVar11 + 1;
    } while (lVar13 != 0);
    if ((int)uVar3 < 1) {
      return;
    }
  }
  uVar17 = **(undefined4 **)(param_2 + 4);
  puVar10 = *(undefined4 **)(param_1 + 4);
  do {
    *puVar10 = uVar17;
    uVar9 = uVar9 - 1;
    puVar10 = puVar10 + 1;
  } while (uVar9 != 0);
  return;
}



/* Entry: 10968ef8c; end: 10968f053;  */

void FUN_10968ef8c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 auStack_90 [2];
  long lStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968f054);
  lVar2 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  pcStack_58 = FUN_10968f054;
  lVar2 = *plVar3;
  lVar1 = plVar3[1];
  uStack_68 = *(undefined8 *)(lVar2 + 8);
  lStack_70 = *(long *)(lVar2 + 0x10);
  auStack_78[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_70) >> 2);
  uStack_80 = *(undefined8 *)(lVar1 + 8);
  lStack_88 = *(long *)(lVar1 + 0x10);
  auStack_90[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_88) >> 2);
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10968ebb0(auStack_78,auStack_90,
                (ulong)(*(long *)(plVar3[2] + 0x18) - *(long *)(plVar3[2] + 0x10)) >> 2 & 0xffffffff
               );
  return;
}



/* Entry: 10968f054; end: 10968f0bb;  */

void FUN_10968f054(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  FUN_10968ebb0(auStack_28,auStack_40,
                (ulong)(*(long *)(param_2[2] + 0x18) - *(long *)(param_2[2] + 0x10)) >> 2 &
                0xffffffff);
  return;
}



/* Entry: 10968f0bc; end: 10968f1c3;  */

void FUN_10968f0bc(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdace0,FUN_10968f1c4);
  FUN_10968f3ac(&UNK_10dfdace0,FUN_10968f2a0);
  FUN_10968098c(&UNK_10dfdacf2,FUN_10968f508);
  FUN_10968f808(&UNK_10dfdacf2,FUN_10968f5b8);
  FUN_10968098c(&UNK_10dfdad06,FUN_10968f9c4);
  FUN_10968fba4(&UNK_10dfdad06,FUN_10968fa10);
  FUN_10968098c(&UNK_10dfdacf6,FUN_10968fce8);
  FUN_10968fdfc(&UNK_10dfdacf6,FUN_10968fd34);
  FUN_10968098c(&UNK_10dfdaa1e,0x10968ff40);
  FUN_10969002c(&UNK_10dfdaa1e,FUN_10968ffb0);
  FUN_109690148();
  FUN_10968098c(&UNK_10dfdad1b,FUN_1096904b4);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar4 = (long *)0x0;
  FUN_109680a78(&UNK_10dfdad1b,0,&lStack_50,FUN_109690650);
  lVar3 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  puVar7 = *(uint **)(plVar4[1] + 0x10);
  uVar1 = *puVar7;
  if (0 < (int)uVar1) {
    uVar5 = 0;
    puVar6 = *(undefined4 **)(*plVar4 + 8);
    uVar2 = puVar7[1];
    puVar8 = *(undefined4 **)(plVar4[1] + 8);
    do {
      puVar9 = puVar8;
      puVar10 = puVar6;
      uVar11 = uVar2;
      if (0 < (int)uVar2) {
        do {
          puVar8 = puVar9 + 1;
          *puVar10 = *puVar9;
          puVar10 = puVar10 + uVar1;
          uVar11 = uVar11 - 1;
          puVar9 = puVar8;
        } while (uVar11 != 0);
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != uVar1);
  }
  return;
}



/* Entry: 10968f1c4; end: 10968f29f;  */

void FUN_10968f1c4(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar7 = *(undefined4 **)(param_2 + 2);
  iVar1 = *param_2;
  puVar6 = *(undefined4 **)(param_2 + 6);
  iVar2 = param_2[4];
  if (param_2[8] != 0) {
    puStack_58 = &UNK_10f57bc50;
    puStack_50 = &UNK_10f57bc60;
    uStack_48 = 0x4f;
    FUN_109699380(&puStack_58);
  }
  FUN_10925b8c4(param_1,(long)(iVar2 + iVar1 + 1));
  puVar3 = (undefined4 *)*param_1;
  lVar4 = (long)iVar1;
  puVar5 = puVar3;
  if (0 < iVar1) {
    do {
      *puVar5 = *puVar7;
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar4 != 0);
  }
  if (0 < iVar2) {
    lVar4 = (long)iVar2;
    puVar7 = puVar3 + iVar1;
    do {
      *puVar7 = *puVar6;
      lVar4 = lVar4 + -1;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1[1] + -4) = 2;
  return;
}



/* Entry: 10968f2a0; end: 10968f3ab;  */

void FUN_10968f2a0(long param_1,int *param_2,int *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  if (*param_2 == 0) {
    iVar1 = 1;
  }
  else {
    lVar4 = (long)*param_2 << 2;
    iVar1 = 1;
    piVar3 = *(int **)(param_2 + 2);
    do {
      iVar1 = *piVar3 * iVar1;
      lVar4 = lVar4 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar4 != 0);
  }
  if (*param_3 == 0) {
    iVar2 = 1;
  }
  else {
    lVar4 = (long)*param_3 << 2;
    iVar2 = 1;
    piVar3 = *(int **)(param_3 + 2);
    do {
      iVar2 = *piVar3 * iVar2;
      lVar4 = lVar4 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar4 != 0);
  }
  puVar6 = *(undefined4 **)(param_1 + 0x10);
  puVar5 = *(undefined4 **)(param_2 + 4);
  if (**(char **)(param_4 + 0x10) == '\0') {
    if (0 < iVar1) {
      iVar7 = 0;
      puVar8 = *(undefined4 **)(param_3 + 4);
      do {
        puVar10 = puVar8;
        iVar9 = iVar2;
        if (0 < iVar2) {
          do {
            *puVar6 = *puVar5;
            puVar6[1] = *puVar10;
            puVar6 = puVar6 + 2;
            iVar9 = iVar9 + -1;
            puVar10 = puVar10 + 1;
          } while (iVar9 != 0);
        }
        puVar5 = puVar5 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 != iVar1);
    }
  }
  else if (0 < iVar1) {
    iVar7 = 0;
    puVar8 = *(undefined4 **)(param_3 + 4);
    do {
      puVar10 = puVar8;
      iVar9 = iVar2;
      if (0 < iVar2) {
        do {
          *puVar6 = *puVar10;
          puVar6[1] = *puVar5;
          puVar6 = puVar6 + 2;
          iVar9 = iVar9 + -1;
          puVar10 = puVar10 + 1;
        } while (iVar9 != 0);
      }
      puVar5 = puVar5 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar1);
  }
  return;
}



/* Entry: 10968f3ac; end: 10968f473;  */

void FUN_10968f3ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 auStack_d0 [2];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  long lStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1400000018;
  uStack_40 = 0x1800000018;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  FUN_109522b28(&lStack_58,&uStack_40,auStack_30,4);
  plVar5 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_58,FUN_10968f474);
  lVar4 = lStack_58;
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  __Unwind_Resume(lVar4);
  pcStack_68 = FUN_10968f474;
  lVar4 = *plVar5;
  lVar2 = plVar5[1];
  lVar1 = plVar5[2];
  lVar3 = plVar5[3];
  uStack_78 = *(undefined8 *)(lVar4 + 8);
  lStack_80 = *(long *)(lVar4 + 0x10);
  auStack_88[0] = (undefined4)((ulong)(*(long *)(lVar4 + 0x18) - lStack_80) >> 2);
  uStack_90 = *(undefined8 *)(lVar2 + 8);
  lStack_98 = *(long *)(lVar2 + 0x10);
  auStack_a0[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_98) >> 2);
  uStack_a8 = *(undefined8 *)(lVar1 + 8);
  lStack_b0 = *(long *)(lVar1 + 0x10);
  auStack_b8[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_b0) >> 2);
  uStack_c0 = *(undefined8 *)(lVar3 + 8);
  lStack_c8 = *(long *)(lVar3 + 0x10);
  auStack_d0[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_c8) >> 2);
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10968f2a0(auStack_88,auStack_a0,auStack_b8,auStack_d0);
  return;
}



/* Entry: 10968f474; end: 10968f507;  */

void FUN_10968f474(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 auStack_70 [2];
  long lStack_68;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar3 = param_2[1];
  lVar2 = param_2[2];
  lVar4 = param_2[3];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar3 + 8);
  lStack_38 = *(long *)(lVar3 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_38) >> 2);
  uStack_48 = *(undefined8 *)(lVar2 + 8);
  lStack_50 = *(long *)(lVar2 + 0x10);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_50) >> 2);
  uStack_60 = *(undefined8 *)(lVar4 + 8);
  lStack_68 = *(long *)(lVar4 + 0x10);
  auStack_70[0] = (undefined4)((ulong)(*(long *)(lVar4 + 0x18) - lStack_68) >> 2);
  FUN_10968f2a0(auStack_28,auStack_40,auStack_58,auStack_70);
  return;
}



/* Entry: 10968f508; end: 10968f5b7;  */

void FUN_10968f508(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  
  puVar8 = *(undefined4 **)(param_2 + 2);
  uVar1 = *param_2;
  lVar7 = *(long *)(param_2 + 6);
  uVar2 = param_2[4];
  FUN_10925b8c4(param_1,(long)(int)(uVar2 + uVar1 + -2));
  puVar4 = (undefined4 *)*param_1;
  if (1 < (int)uVar1) {
    lVar5 = (long)(((ulong)uVar1 << 0x20) + -0x100000000) >> 0x20;
    puVar6 = puVar4;
    do {
      *puVar6 = *puVar8;
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar5 != 0);
  }
  if (1 < (int)uVar2) {
    lVar5 = -((long)(((ulong)uVar2 << 0x20) + -0x100000000) >> 0x20);
    puVar8 = (undefined4 *)((long)puVar4 + ((long)((ulong)uVar1 << 0x20) >> 0x1e) + -4);
    do {
      *puVar8 = *(undefined4 *)(lVar7 + ((long)((ulong)uVar2 << 0x20) >> 0x1e) + lVar5 * 4);
      bVar3 = lVar5 != -1;
      lVar5 = lVar5 + 1;
      puVar8 = puVar8 + 1;
    } while (bVar3);
  }
  return;
}



/* Entry: 10968f5b8; end: 10968f807;  */

void FUN_10968f5b8(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined1 auStack_a8 [88];
  
  puVar3 = *(undefined4 **)(param_3 + 2);
  uStack_154 = *puVar3;
  uVar1 = *param_3 - 1;
  uStack_f8 = uStack_154;
  if (uVar1 == 0) {
    if (*param_1 == 0) {
      iVar6 = 1;
    }
    else {
      lVar4 = (long)*param_1 << 2;
      iVar6 = 1;
      piVar5 = *(int **)(param_1 + 2);
      do {
        iVar6 = *piVar5 * iVar6;
        lVar4 = lVar4 + -4;
        piVar5 = piVar5 + 1;
      } while (lVar4 != 0);
    }
    uStack_f4 = 0;
    uStack_ec = 0;
    uStack_100 = 2;
    iStack_fc = iVar6;
    FUN_109c0ffb0(auStack_a8,&uStack_100,*(undefined8 *)(param_2 + 4),0);
    iStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_158 = 1;
    FUN_109c0ffb0(&uStack_100,&uStack_158,*(undefined8 *)(param_3 + 4),0);
    iStack_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_170 = 1;
    iStack_16c = iVar6;
    FUN_109c0ffb0(&uStack_158,&uStack_170,*(undefined8 *)(param_1 + 4),0);
    FUN_10968f8d4(auStack_a8,&uStack_100,&uStack_158);
  }
  else {
    uVar2 = *param_2 - 1;
    if (uVar2 == 0) {
      iVar6 = 1;
    }
    else {
      piVar5 = *(int **)(param_2 + 2);
      iVar6 = *piVar5;
      if (uVar2 != 1) {
        lVar4 = (ulong)uVar2 - 1;
        do {
          piVar5 = piVar5 + 1;
          iVar6 = *piVar5 * iVar6;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    iVar7 = puVar3[1];
    if (uVar1 != 1) {
      lVar4 = (ulong)uVar1 - 1;
      piVar5 = puVar3 + 2;
      do {
        iVar7 = *piVar5 * iVar7;
        lVar4 = lVar4 + -1;
        piVar5 = piVar5 + 1;
      } while (lVar4 != 0);
    }
    uStack_f4 = 0;
    uStack_ec = 0;
    uStack_100 = 2;
    iStack_fc = iVar6;
    FUN_109c0ffb0(auStack_a8,&uStack_100,*(undefined8 *)(param_2 + 4),0);
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_158 = 2;
    iStack_150 = iVar7;
    FUN_109c0ffb0(&uStack_100,&uStack_158,*(undefined8 *)(param_3 + 4),0);
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_170 = 2;
    iStack_16c = iVar6;
    iStack_168 = iVar7;
    FUN_109c0ffb0(&uStack_158,&uStack_170,*(undefined8 *)(param_1 + 4),0);
    FUN_109591cd0(0x3f800000,0,auStack_a8,&uStack_100,0x65,0x6f,0x6f,&uStack_158);
  }
  FUN_109c10e9c(&uStack_158);
  FUN_109c10e9c(&uStack_100);
  FUN_109c10e9c(auStack_a8);
  return;
}



/* Entry: 10968f808; end: 10968f8d3;  */

void FUN_10968f808(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  plVar4 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  lVar2 = 0;
  FUN_109680a78(param_1,0,&lStack_50,0x10968f94c);
  lVar1 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (*(int *)(lVar1 + 8) < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(lVar1 + 0xc);
    if (*(int *)(lVar1 + 8) != 1) {
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      goto LAB_10968f900;
    }
  }
  uVar5 = 0xffffffff;
LAB_10968f900:
  _cblas_sgemv(0x3f800000,0,0x65,0x6f,uVar3,uVar5,*(undefined8 *)(lVar1 + 0x40),uVar5,
               *(undefined8 *)(lVar2 + 0x40),1,*(undefined8 *)((long)plVar4 + 0x40),1);
  return;
}



/* Entry: 10968f8d4; end: 10968f9c3;  */

void FUN_10968f8d4(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    if (*(int *)(param_1 + 8) != 1) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      goto LAB_10968f900;
    }
  }
  uVar2 = 0xffffffff;
LAB_10968f900:
  _cblas_sgemv(0x3f800000,0,0x65,0x6f,uVar1,uVar2,*(undefined8 *)(param_1 + 0x40),uVar2,
               *(undefined8 *)(param_2 + 0x40),1,*(undefined8 *)(param_3 + 0x40),1);
  return;
}



/* Entry: 10968f9c4; end: 10968fa0f;  */

void FUN_10968f9c4(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1092d1c20(param_1,lVar2,lVar2 + (((long)iVar1 << 0x20) >> 0x1e));
  *(undefined4 *)*param_1 = *(undefined4 *)(lVar3 + 4);
  return;
}



/* Entry: 10968fa10; end: 10968fba3;  */

void FUN_10968fa10(int *param_1,long param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  float *pfVar16;
  int iVar17;
  ulong uVar18;
  float fVar19;
  
  pfVar8 = *(float **)(param_2 + 0x10);
  iVar2 = *(int *)(*(long *)(param_2 + 8) + 4);
  puVar12 = *(uint **)(param_3 + 2);
  lVar9 = *(long *)(param_3 + 4);
  uVar1 = *puVar12;
  piVar10 = *(int **)(param_1 + 2);
  iVar17 = *param_1;
  if (iVar17 == 0) {
    uVar13 = 1;
  }
  else {
    lVar14 = (long)iVar17 << 2;
    uVar13 = 1;
    piVar6 = piVar10;
    do {
      uVar11 = *piVar6 * (int)uVar13;
      uVar13 = (ulong)uVar11;
      lVar14 = lVar14 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar14 != 0);
    if ((int)uVar11 < 1) goto LAB_10968fa68;
  }
  puVar15 = *(undefined4 **)(param_1 + 4);
  do {
    *puVar15 = 0;
    uVar13 = uVar13 - 1;
    puVar15 = puVar15 + 1;
  } while (uVar13 != 0);
LAB_10968fa68:
  uVar11 = *param_3 - 1;
  if (uVar11 == 0) {
    if (0 < (int)uVar1) {
      uVar13 = 0;
      do {
        fVar19 = *(float *)(lVar9 + uVar13 * 4);
        pfVar16 = *(float **)(param_1 + 4);
        uVar18 = 1;
        lVar14 = (long)iVar17 << 2;
        piVar6 = piVar10;
        if (iVar17 == 0) {
LAB_10968fab8:
          uVar4 = 0;
          pfVar5 = pfVar16;
          do {
            *pfVar5 = pfVar16[uVar4] + fVar19 * pfVar8[uVar4];
            uVar4 = uVar4 + 1;
            pfVar5 = pfVar5 + 1;
          } while (uVar18 != uVar4);
        }
        else {
          do {
            uVar11 = *piVar6 * (int)uVar18;
            uVar18 = (ulong)uVar11;
            lVar14 = lVar14 + -4;
            piVar6 = piVar6 + 1;
          } while (lVar14 != 0);
          if (0 < (int)uVar11) goto LAB_10968fab8;
        }
        uVar13 = uVar13 + 1;
        pfVar8 = pfVar8 + iVar2;
      } while (uVar13 != uVar1);
    }
  }
  else {
    uVar13 = (ulong)puVar12[1];
    if (uVar11 != 1) {
      lVar14 = (ulong)uVar11 - 1;
      puVar12 = puVar12 + 2;
      do {
        uVar13 = (ulong)(*puVar12 * (int)uVar13);
        lVar14 = lVar14 + -1;
        puVar12 = puVar12 + 1;
      } while (lVar14 != 0);
    }
    if (0 < (int)uVar1) {
      uVar11 = 0;
      pfVar16 = *(float **)(param_1 + 4);
      uVar18 = -(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
      do {
        if (0 < iVar2) {
          iVar17 = 0;
          pfVar3 = pfVar16;
          pfVar5 = pfVar16;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              fVar19 = *pfVar8;
              pfVar7 = pfVar5;
              do {
                *pfVar7 = pfVar3[lVar14] + fVar19 * *(float *)(lVar9 + lVar14 * 4);
                lVar14 = lVar14 + 1;
                pfVar7 = pfVar7 + 1;
              } while ((int)uVar13 != lVar14);
            }
            pfVar8 = pfVar8 + 1;
            iVar17 = iVar17 + 1;
            pfVar5 = (float *)((long)pfVar5 + uVar18);
            pfVar3 = (float *)((long)pfVar3 + uVar18);
          } while (iVar17 != iVar2);
        }
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + uVar18;
      } while (uVar11 != uVar1);
    }
  }
  return;
}



/* Entry: 10968fba4; end: 10968fc6f;  */

void FUN_10968fba4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 auStack_a8 [2];
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 auStack_90 [2];
  long lStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968fc70);
  lVar2 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  pcStack_58 = FUN_10968fc70;
  lVar2 = *plVar3;
  lVar1 = plVar3[1];
  lVar4 = plVar3[2];
  uStack_68 = *(undefined8 *)(lVar2 + 8);
  lStack_70 = *(long *)(lVar2 + 0x10);
  auStack_78[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_70) >> 2);
  uStack_80 = *(undefined8 *)(lVar1 + 8);
  lStack_88 = *(long *)(lVar1 + 0x10);
  auStack_90[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_88) >> 2);
  uStack_98 = *(undefined8 *)(lVar4 + 8);
  lStack_a0 = *(long *)(lVar4 + 0x10);
  auStack_a8[0] = (undefined4)((ulong)(*(long *)(lVar4 + 0x18) - lStack_a0) >> 2);
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10968fa10(auStack_78,auStack_90,auStack_a8);
  return;
}



/* Entry: 10968fc70; end: 10968fce7;  */

void FUN_10968fc70(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_10968fa10(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 10968fce8; end: 10968fd33;  */

void FUN_10968fce8(undefined8 *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = *(long *)(param_2 + 2);
  iVar1 = *param_2;
  puVar3 = *(undefined4 **)(param_2 + 6);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1092d1c20(param_1,lVar2,lVar2 + (((long)iVar1 << 0x20) >> 0x1e));
  *(undefined4 *)(param_1[1] + -4) = *puVar3;
  return;
}



/* Entry: 10968fd34; end: 10968fdfb;  */

void FUN_10968fd34(long param_1,int *param_2,long param_3)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  
  iVar6 = *param_2;
  uVar3 = iVar6 - 1;
  if (uVar3 != 0) {
    piVar9 = *(int **)(param_2 + 2);
    iVar6 = *piVar9;
    if (uVar3 != 1) {
      lVar8 = (ulong)uVar3 - 1;
      do {
        piVar9 = piVar9 + 1;
        iVar6 = *piVar9 * iVar6;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (iVar6 < 1) {
      return;
    }
  }
  iVar7 = 0;
  pfVar10 = *(float **)(param_2 + 4);
  pfVar11 = *(float **)(param_1 + 0x10);
  pfVar2 = *(float **)(param_3 + 0x10);
  iVar1 = **(int **)(param_3 + 8);
  uVar3 = (*(int **)(param_3 + 8))[1];
  do {
    if (0 < iVar1) {
      iVar13 = 0;
      pfVar4 = pfVar2;
      pfVar12 = pfVar11;
      do {
        fVar14 = *pfVar10 * *pfVar4;
        if (1 < uVar3) {
          uVar5 = 1;
          do {
            fVar14 = fVar14 + pfVar10[uVar5] * pfVar4[uVar5];
            uVar5 = uVar5 + 1;
          } while (uVar3 != uVar5);
        }
        pfVar11 = pfVar12 + 1;
        *pfVar12 = fVar14;
        pfVar4 = pfVar4 + uVar3;
        iVar13 = iVar13 + 1;
        pfVar12 = pfVar11;
      } while (iVar13 != iVar1);
    }
    pfVar10 = pfVar10 + (int)uVar3;
    iVar7 = iVar7 + 1;
  } while (iVar7 != iVar6);
  return;
}



/* Entry: 10968fdfc; end: 10968fec7;  */

void FUN_10968fdfc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 auStack_a8 [2];
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 auStack_90 [2];
  long lStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0x18;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_10968fec8);
  lVar2 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  pcStack_58 = FUN_10968fec8;
  lVar2 = *plVar3;
  lVar1 = plVar3[1];
  lVar4 = plVar3[2];
  uStack_68 = *(undefined8 *)(lVar2 + 8);
  lStack_70 = *(long *)(lVar2 + 0x10);
  auStack_78[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_70) >> 2);
  uStack_80 = *(undefined8 *)(lVar1 + 8);
  lStack_88 = *(long *)(lVar1 + 0x10);
  auStack_90[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_88) >> 2);
  uStack_98 = *(undefined8 *)(lVar4 + 8);
  lStack_a0 = *(long *)(lVar4 + 0x10);
  auStack_a8[0] = (undefined4)((ulong)(*(long *)(lVar4 + 0x18) - lStack_a0) >> 2);
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10968fd34(auStack_78,auStack_90,auStack_a8);
  return;
}



/* Entry: 10968fec8; end: 10968ffaf;  */

void FUN_10968fec8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  uStack_48 = *(undefined8 *)(lVar3 + 8);
  lStack_50 = *(long *)(lVar3 + 0x10);
  auStack_58[0] = (undefined4)((ulong)(*(long *)(lVar3 + 0x18) - lStack_50) >> 2);
  FUN_10968fd34(auStack_28,auStack_40,auStack_58);
  return;
}



/* Entry: 10968ffb0; end: 10969002b;  */

void FUN_10968ffb0(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  uint *puVar7;
  
  puVar2 = *(uint **)(param_1 + 2);
  if (*param_1 == 0) {
    uVar3 = 1;
  }
  else {
    lVar5 = (long)*param_1 << 2;
    uVar3 = 1;
    puVar7 = puVar2;
    do {
      uVar1 = *puVar7 * (int)uVar3;
      uVar3 = (ulong)uVar1;
      lVar5 = lVar5 + -4;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
    if ((int)uVar1 < 1) goto LAB_10968fff8;
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
  do {
    *puVar6 = 0;
    uVar3 = uVar3 - 1;
    puVar6 = puVar6 + 1;
  } while (uVar3 != 0);
LAB_10968fff8:
  uVar3 = (ulong)*puVar2;
  if (0 < (int)*puVar2) {
    iVar4 = 0;
    lVar5 = *(long *)(param_1 + 4);
    uVar1 = puVar2[1];
    do {
      *(undefined4 *)(lVar5 + (long)iVar4 * 4) = 0x3f800000;
      iVar4 = iVar4 + uVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10969002c; end: 1096900ef;  */

void FUN_10969002c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 auStack_90 [2];
  long lStack_88;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 0x1800000018;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  FUN_109522b28(&lStack_48,&uStack_30,&lStack_28,2);
  plVar3 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_48,FUN_1096900f0);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  __Unwind_Resume(lVar2);
  pcStack_58 = FUN_1096900f0;
  lVar2 = *plVar3;
  lVar1 = plVar3[1];
  uStack_68 = *(undefined8 *)(lVar2 + 8);
  lStack_70 = *(long *)(lVar2 + 0x10);
  auStack_78[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_70) >> 2);
  uStack_80 = *(undefined8 *)(lVar1 + 8);
  lStack_88 = *(long *)(lVar1 + 0x10);
  auStack_90[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_88) >> 2);
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10968ffb0(auStack_78,auStack_90);
  return;
}



/* Entry: 1096900f0; end: 109690147;  */

void FUN_1096900f0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  undefined4 auStack_28 [2];
  long lStack_20;
  undefined8 uStack_18;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_18 = *(undefined8 *)(lVar1 + 8);
  lStack_20 = *(long *)(lVar1 + 0x10);
  auStack_28[0] = (undefined4)((ulong)(*(long *)(lVar1 + 0x18) - lStack_20) >> 2);
  uStack_30 = *(undefined8 *)(lVar2 + 8);
  lStack_38 = *(long *)(lVar2 + 0x10);
  auStack_40[0] = (undefined4)((ulong)(*(long *)(lVar2 + 0x18) - lStack_38) >> 2);
  FUN_10968ffb0(auStack_28,auStack_40);
  return;
}



/* Entry: 109690148; end: 109690193;  */

void FUN_109690148(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  FUN_10968098c(&UNK_10dfdad16,FUN_109690194);
  FUN_109690204(&UNK_10dfdad16,0x1096901b4);
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x28;
  uStack_30 = 0x28;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar2 = (long *)0x0;
  FUN_109680a78(&UNK_10dfdad16,0,&lStack_50,FUN_109690454);
  lVar4 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar4);
  lVar4 = *plVar2;
  uVar5 = *(long *)(lVar4 + 0x18) - (long)*(int **)(lVar4 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar7 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar6 = *(int **)(lVar4 + 0x10);
    do {
      uVar1 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar7 = lVar7 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar7 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  uVar8 = **(undefined8 **)(plVar2[2] + 8);
  puVar3 = *(undefined8 **)(lVar4 + 8);
  do {
    *puVar3 = uVar8;
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109690194; end: 109690203;  */

void FUN_109690194(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 2);
  lVar3 = (long)*param_2;
  puVar1 = (undefined4 *)((long)puVar2 + ((lVar3 << 0x20) >> 0x1e));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (lVar3 != 0) {
    FUN_10925b938(param_1,lVar3);
    puVar4 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar4 = *puVar2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
  }
  return;
}



/* Entry: 109690204; end: 1096902d3;  */

void FUN_109690204(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined4 uVar8;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x18;
  uStack_30 = 0x18;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar2 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_1096902d4);
  lVar4 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar4);
  lVar4 = *plVar2;
  uVar5 = *(long *)(lVar4 + 0x18) - (long)*(int **)(lVar4 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar7 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar6 = *(int **)(lVar4 + 0x10);
    do {
      uVar1 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar7 = lVar7 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar7 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  uVar8 = **(undefined4 **)(plVar2[2] + 8);
  puVar3 = *(undefined4 **)(lVar4 + 8);
  do {
    *puVar3 = uVar8;
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 1096902d4; end: 109690383;  */

void FUN_1096902d4(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined4 uVar7;
  
  lVar3 = *param_2;
  uVar4 = *(long *)(lVar3 + 0x18) - (long)*(int **)(lVar3 + 0x10);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 1;
  }
  else {
    lVar6 = ((long)(uVar4 * 0x40000000) >> 0x20) << 2;
    uVar4 = 1;
    piVar5 = *(int **)(lVar3 + 0x10);
    do {
      uVar1 = *piVar5 * (int)uVar4;
      uVar4 = (ulong)uVar1;
      lVar6 = lVar6 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar6 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  uVar7 = **(undefined4 **)(param_2[2] + 8);
  puVar2 = *(undefined4 **)(lVar3 + 8);
  do {
    *puVar2 = uVar7;
    uVar4 = uVar4 - 1;
    puVar2 = puVar2 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 109690384; end: 109690453;  */

void FUN_109690384(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x28;
  uStack_30 = 0x28;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar2 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_109690454);
  lVar4 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar4);
  lVar4 = *plVar2;
  uVar5 = *(long *)(lVar4 + 0x18) - (long)*(int **)(lVar4 + 0x10);
  if ((uVar5 & 0x3fffffffc) == 0) {
    uVar5 = 1;
  }
  else {
    lVar7 = ((long)(uVar5 * 0x40000000) >> 0x20) << 2;
    uVar5 = 1;
    piVar6 = *(int **)(lVar4 + 0x10);
    do {
      uVar1 = *piVar6 * (int)uVar5;
      uVar5 = (ulong)uVar1;
      lVar7 = lVar7 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar7 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  uVar8 = **(undefined8 **)(plVar2[2] + 8);
  puVar3 = *(undefined8 **)(lVar4 + 8);
  do {
    *puVar3 = uVar8;
    uVar5 = uVar5 - 1;
    puVar3 = puVar3 + 1;
  } while (uVar5 != 0);
  return;
}



/* Entry: 109690454; end: 1096904b3;  */

void FUN_109690454(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar3 = *param_2;
  uVar4 = *(long *)(lVar3 + 0x18) - (long)*(int **)(lVar3 + 0x10);
  if ((uVar4 & 0x3fffffffc) == 0) {
    uVar4 = 1;
  }
  else {
    lVar6 = ((long)(uVar4 * 0x40000000) >> 0x20) << 2;
    uVar4 = 1;
    piVar5 = *(int **)(lVar3 + 0x10);
    do {
      uVar1 = *piVar5 * (int)uVar4;
      uVar4 = (ulong)uVar1;
      lVar6 = lVar6 + -4;
      piVar5 = piVar5 + 1;
    } while (lVar6 != 0);
    if ((int)uVar1 < 1) {
      return;
    }
  }
  uVar7 = **(undefined8 **)(param_2[2] + 8);
  puVar2 = *(undefined8 **)(lVar3 + 8);
  do {
    *puVar2 = uVar7;
    uVar4 = uVar4 - 1;
    puVar2 = puVar2 + 1;
  } while (uVar4 != 0);
  return;
}



/* Entry: 1096904b4; end: 10969052b;  */

void FUN_1096904b4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long lStack_18;
  
  puVar6 = &uStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = (*(undefined4 **)(param_2 + 8))[1];
  uStack_1c = **(undefined4 **)(param_2 + 8);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1092d1c20(param_1,&uStack_20,&lStack_18,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = **(uint **)((long)puVar6 + 8);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    uVar2 = (*(uint **)((long)puVar6 + 8))[1];
    puVar4 = *(undefined4 **)((long)puVar6 + 0x10);
    puVar6 = (undefined4 *)param_1[2];
    do {
      puVar5 = puVar4;
      puVar7 = puVar6;
      uVar8 = uVar2;
      if (0 < (int)uVar2) {
        do {
          puVar4 = puVar5 + 1;
          *puVar7 = *puVar5;
          puVar7 = puVar7 + uVar1;
          uVar8 = uVar8 - 1;
          puVar5 = puVar4;
        } while (uVar8 != 0);
      }
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar3 != uVar1);
  }
  return;
}



/* Entry: 10969052c; end: 109690587;  */

void FUN_10969052c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar1 = **(uint **)(param_2 + 8);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    uVar2 = (*(uint **)(param_2 + 8))[1];
    puVar4 = *(undefined4 **)(param_2 + 0x10);
    puVar6 = *(undefined4 **)(param_1 + 0x10);
    do {
      puVar5 = puVar4;
      puVar7 = puVar6;
      uVar8 = uVar2;
      if (0 < (int)uVar2) {
        do {
          puVar4 = puVar5 + 1;
          *puVar7 = *puVar5;
          puVar7 = puVar7 + uVar1;
          uVar8 = uVar8 - 1;
          puVar5 = puVar4;
        } while (uVar8 != 0);
      }
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar3 != uVar1);
  }
  return;
}



/* Entry: 109690588; end: 10969064f;  */

void FUN_109690588(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0x1800000018;
  uStack_30 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  FUN_109522b28(&lStack_50,&uStack_38,auStack_2c,3);
  plVar4 = (long *)0x0;
  FUN_109680a78(param_1,0,&lStack_50,FUN_109690650);
  lVar3 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  __Unwind_Resume(lVar3);
  puVar7 = *(uint **)(plVar4[1] + 0x10);
  uVar1 = *puVar7;
  if (0 < (int)uVar1) {
    uVar5 = 0;
    puVar6 = *(undefined4 **)(*plVar4 + 8);
    uVar2 = puVar7[1];
    puVar8 = *(undefined4 **)(plVar4[1] + 8);
    do {
      puVar9 = puVar8;
      puVar10 = puVar6;
      uVar11 = uVar2;
      if (0 < (int)uVar2) {
        do {
          puVar8 = puVar9 + 1;
          *puVar10 = *puVar9;
          puVar10 = puVar10 + uVar1;
          uVar11 = uVar11 - 1;
          puVar9 = puVar8;
        } while (uVar11 != 0);
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != uVar1);
  }
  return;
}



/* Entry: 109690650; end: 1096906b3;  */

void FUN_109690650(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  puVar5 = *(uint **)(param_2[1] + 0x10);
  uVar1 = *puVar5;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    puVar4 = *(undefined4 **)(*param_2 + 8);
    uVar2 = puVar5[1];
    puVar6 = *(undefined4 **)(param_2[1] + 8);
    do {
      puVar7 = puVar6;
      puVar8 = puVar4;
      uVar9 = uVar2;
      if (0 < (int)uVar2) {
        do {
          puVar6 = puVar7 + 1;
          *puVar8 = *puVar7;
          puVar8 = puVar8 + uVar1;
          uVar9 = uVar9 - 1;
          puVar7 = puVar6;
        } while (uVar9 != 0);
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != uVar1);
  }
  return;
}



/* Entry: 1096906b4; end: 10969075f;  */

undefined8 * FUN_1096906b4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  lVar3 = param_2;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00ce0;
  param_1[1] = puVar1;
  FUN_109690760(param_1);
  lVar2 = *(long *)(param_2 + 8) + 8;
  *(long *)(param_1[1] + 8) = lVar2;
  FUN_109681968();
  lVar4 = param_1[1];
  *(long *)(lVar4 + 0x14) = lVar2;
  *(long *)(lVar4 + 0x1c) = lVar3;
  FUN_1096908b8(param_1);
  return param_1;
}



/* Entry: 109690760; end: 1096908b7;  */

void FUN_109690760(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  
  func_0x000107c2acd0(param_1,0x98);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  do {
    uVar1 = uRam000000011382ab20 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x11382ab20,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      uRam000000011382ab20 = uVar1;
    }
  } while (cVar2 != '\0');
  param_1[0xc] = 0;
  *(uint *)((long)param_1 + 0x14) = (uint)((ulong)uVar1 * 0x9fa8f307 >> 0x20) ^ 0x72ae73bc;
  *(uint *)(param_1 + 3) = (uint)((ulong)uVar1 * 0x51493ecf >> 0x20) ^ 0xcecadc9f;
  *(uint *)((long)param_1 + 0x1c) = (uint)((ulong)uVar1 * 0x7b846ea4 >> 0x20) ^ 0xfe76aebc;
  *(uint *)(param_1 + 4) = (uint)((ulong)uVar1 * 0xb66a8f59 >> 0x20) ^ 0xb4cc676a;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = param_1 + 0xc;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar4 = param_1;
  func_0x000107c2acdc();
  param_1[0x11] = &PTR_FUN_110b01d60;
  uVar6 = *puVar4;
  param_1[0x12] = puVar4[1];
  param_1[0x11] = uVar6;
  if (param_1[0x12] != 0) {
    piVar5 = (int *)(param_1[0x12] + -8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x11] = &PTR_FUN_110b00e00;
  *param_1 = &PTR_FUN_110b00d78;
  return;
}



/* Entry: 1096908b8; end: 1096909cb;  */

void FUN_1096908b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(lVar1 + 8);
  if (*(int *)(lVar1 + 0x10) != (int)((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8)) >> 6))
  {
    FUN_109692c74(lVar1 + 0x28,
                  (long)((int)((ulong)(*(long *)(lVar6 + 0x28) - *(long *)(lVar6 + 0x20)) >> 3) *
                        -0x49249249));
    FUN_109692db4(*(long *)(param_1 + 8) + 0x40,
                  (long)((int)((ulong)(*(long *)(lVar6 + 0x28) - *(long *)(lVar6 + 0x20)) >> 3) *
                        -0x49249249));
    lVar4 = *(long *)(param_1 + 8);
    lVar1 = (long)*(int *)(lVar4 + 0x10);
    lVar3 = *(long *)(lVar6 + 8);
    lVar2 = *(long *)(lVar6 + 0x10);
    iVar5 = (int)((ulong)(lVar2 - lVar3) >> 6);
    if (*(int *)(lVar4 + 0x10) < iVar5) {
      lVar4 = lVar1 << 6;
      do {
        if (*(byte *)(lVar3 + lVar4) - 1 < 2) {
          iVar5 = **(int **)(lVar3 + lVar4 + 0x28);
          FUN_10969284c(*(long *)(*(long *)(param_1 + 8) + 0x28) + (long)iVar5 * 0x18,1,
                        *(long *)(lVar6 + 0x20) + (long)iVar5 * 0x38);
          lVar3 = *(long *)(lVar6 + 8);
          lVar2 = *(long *)(lVar6 + 0x10);
        }
        lVar1 = lVar1 + 1;
        lVar4 = lVar4 + 0x40;
        iVar5 = (int)((ulong)(lVar2 - lVar3) >> 6);
      } while (lVar1 < iVar5);
      lVar4 = *(long *)(param_1 + 8);
    }
    *(int *)(lVar4 + 0x10) = iVar5;
  }
  return;
}



/* Entry: 1096909cc; end: 109690a4b;  */

void FUN_1096909cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [24];
  undefined1 *puStack_38;
  
  FUN_109693100(auStack_50,1,param_4);
  FUN_109690a4c(param_1,param_2,param_3,auStack_50);
  puStack_38 = auStack_50;
  FUN_109682a18(&puStack_38);
  return;
}



/* Entry: 109690a4c; end: 109690be3;  */

undefined1  [16] FUN_109690a4c(long param_1,int *param_2,int param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined *puStack_88;
  undefined *puStack_80;
  long *plStack_78;
  
  piVar3 = param_2;
  FUN_1096908b8();
  piVar14 = (int *)*param_4;
  piVar1 = (int *)param_4[1];
  if (piVar14 != piVar1) {
    do {
      iVar10 = **(int **)(*(long *)(param_2 + 2) + (long)param_3 * 0x40 + 0x28);
      lVar12 = *(long *)(param_2 + 8);
      if (*(int *)(lVar12 + (long)iVar10 * 0x38) != *piVar14) {
        puStack_88 = &UNK_10f57bcfb;
        puStack_80 = &UNK_10f57bd1f;
        plStack_78 = (long *)0x4c;
        FUN_109699380(&puStack_88);
        iVar10 = **(int **)(*(long *)(param_2 + 2) + (long)param_3 * 0x40 + 0x28);
        lVar12 = *(long *)(param_2 + 8);
      }
      piVar3 = piVar14 + 4;
      uVar8 = lVar12 + (long)iVar10 * 0x38 + 0x10;
      func_0x000109681484(uVar8,piVar3);
      if ((uVar8 & 1) == 0) {
        puStack_88 = &UNK_10f57bdb4;
        puStack_80 = &UNK_10f57bd1f;
        plStack_78 = (long *)0x4f;
        FUN_109699380(&puStack_88);
      }
      piVar14 = piVar14 + 0xe;
    } while (piVar14 != piVar1);
  }
  auVar15._0_8_ =
       (long *)(*(long *)(*(long *)(param_1 + 8) + 0x28) +
               (long)**(int **)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 8) +
                                (long)param_3 * 0x40 + 0x28) * 0x18);
  if (auVar15._0_8_ == param_4) {
    auVar15._8_8_ = piVar3;
    return auVar15;
  }
  plVar5 = (long *)*param_4;
  plVar6 = (long *)param_4[1];
  lVar12 = (long)plVar6 - (long)plVar5 >> 3;
  uVar8 = lVar12 * 0x6db6db6db6db6db7;
  plVar9 = (long *)*auVar15._0_8_;
  plVar2 = auVar15._0_8_;
  if ((ulong)((auVar15._0_8_[2] - (long)plVar9 >> 3) * 0x6db6db6db6db6db7) < uVar8) {
    plVar4 = plVar5;
    plVar7 = plVar6;
    FUN_1096833dc(auVar15._0_8_);
    if (0x492492492492492 < uVar8) {
      FUN_109682680();
      auVar15._0_8_[1] = uVar8;
      __Unwind_Resume();
      if (plVar4 != plVar7) {
        plVar2 = plVar4 + 2;
        puStack_80 = (undefined *)uVar8;
        plStack_78 = plVar5;
        do {
          lVar12 = plVar2[-2];
          plVar9[1] = plVar2[-1];
          *plVar9 = lVar12;
          if (plVar9 != plVar2 + -2) {
            FUN_10928555c(plVar9 + 2,*plVar2,plVar2[1],plVar2[1] - *plVar2 >> 2);
          }
          FUN_1096822fc(plVar9 + 5,plVar2 + 3);
          plVar9 = plVar9 + 7;
          plVar5 = plVar2 + 5;
          plVar4 = plVar7;
          plVar2 = plVar2 + 7;
        } while (plVar5 != plVar7);
      }
      auVar17._8_8_ = plVar9;
      auVar17._0_8_ = plVar4;
      return auVar17;
    }
    lVar11 = auVar15._0_8_[2] - *auVar15._0_8_ >> 3;
    uVar13 = lVar11 * -0x2492492492492492;
    if (uVar13 < uVar8 || uVar13 + lVar12 * -0x6db6db6db6db6db7 == 0) {
      uVar13 = uVar8;
    }
    if (0x249249249249248 < (ulong)(lVar11 * 0x6db6db6db6db6db7)) {
      uVar13 = 0x492492492492492;
    }
    FUN_1096828dc(auVar15._0_8_,uVar13);
    FUN_109682928(auVar15._0_8_,plVar5,plVar6,auVar15._0_8_[1]);
  }
  else {
    lVar12 = auVar15._0_8_[1] - (long)plVar9;
    if (uVar8 <= (ulong)((lVar12 >> 3) * 0x6db6db6db6db6db7)) {
      plVar2 = (long *)&stack0xffffffffffffffbf;
      FUN_109693320(plVar2,plVar5,plVar6);
      plVar9 = (long *)auVar15._0_8_[1];
      plVar6 = plVar5;
      while (plVar9 != plVar5) {
        plVar9 = plVar9 + -7;
        plVar2 = plVar9;
        func_0x000109682760(plVar9);
      }
      auVar15._0_8_[1] = (long)plVar5;
      goto LAB_1096932f8;
    }
    FUN_109693320(&stack0xffffffffffffffbe,plVar5,(long)plVar5 + lVar12);
    plVar5 = (long *)((long)plVar5 + lVar12);
    FUN_109682928(auVar15._0_8_,plVar5,plVar6,auVar15._0_8_[1]);
  }
  auVar15._0_8_[1] = (long)plVar2;
  plVar6 = plVar5;
LAB_1096932f8:
  auVar16._8_8_ = plVar6;
  auVar16._0_8_ = plVar2;
  return auVar16;
}



/* Entry: 109690be4; end: 10969219b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109690be4(undefined *******param_1,undefined ********param_2,undefined ********param_3,
                  int param_4,undefined ********param_5)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined ********ppppppppuVar6;
  undefined ******ppppppuVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined *puVar11;
  bool bVar12;
  ulong uVar13;
  undefined ***pppuVar14;
  undefined *******pppppppuVar15;
  undefined *******pppppppuVar16;
  undefined ********ppppppppuVar17;
  undefined ********ppppppppuVar18;
  int iVar19;
  undefined *******pppppppuVar20;
  undefined ****ppppuVar21;
  undefined *****pppppuVar22;
  int *piVar23;
  undefined ***pppuVar24;
  undefined *******pppppppuVar25;
  long lVar26;
  undefined ********ppppppppuVar27;
  undefined4 uVar28;
  ulong uVar29;
  undefined *****pppppuVar30;
  ulong uVar31;
  undefined *****pppppuVar32;
  long *plVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined ******ppppppuVar37;
  uint uVar38;
  undefined ********unaff_x20;
  undefined ******ppppppuVar39;
  int iVar40;
  uint uVar41;
  undefined ********unaff_x21;
  long lVar42;
  code *pcVar43;
  ulong unaff_x23;
  undefined ****ppppuVar44;
  undefined ********ppppppppuVar45;
  undefined *******unaff_x25;
  undefined *******unaff_x26;
  undefined8 unaff_x27;
  long lVar46;
  undefined ********unaff_x28;
  undefined1 auVar47 [16];
  long alStack_548 [3];
  undefined1 uStack_529;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  int *piStack_510;
  int *piStack_508;
  undefined8 uStack_500;
  long alStack_4f8 [3];
  undefined8 uStack_4e0;
  undefined ********ppppppppuStack_4d8;
  undefined ********ppppppppuStack_4d0;
  undefined *******pppppppuStack_4c8;
  undefined1 ****ppppuStack_4c0;
  code *pcStack_4b8;
  undefined *******pppppppuStack_4b0;
  undefined *******pppppppuStack_4a8;
  undefined ********ppppppppuStack_4a0;
  ulong uStack_498;
  undefined *******pppppppuStack_490;
  undefined *******pppppppuStack_488;
  undefined *******pppppppuStack_480;
  undefined *******pppppppuStack_478;
  undefined1 ***pppuStack_470;
  code *pcStack_468;
  undefined ******ppppppuStack_460;
  long lStack_458;
  long *plStack_450;
  undefined ******ppppppuStack_448;
  undefined ******ppppppuStack_440;
  undefined *******pppppppuStack_438;
  char cStack_430;
  undefined4 uStack_428;
  uint uStack_424;
  int iStack_420;
  uint uStack_41c;
  undefined *******pppppppuStack_418;
  undefined *******pppppppuStack_410;
  undefined *******pppppppuStack_408;
  undefined *******pppppppuStack_400;
  undefined *******pppppppuStack_3f8;
  undefined *******pppppppuStack_3f0;
  undefined *******pppppppuStack_3e8;
  undefined *******pppppppuStack_3e0;
  uint uStack_3d8;
  uint uStack_3d4;
  undefined ******ppppppuStack_3d0;
  undefined ****ppppuStack_3c8;
  undefined ******ppppppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *******apppppppuStack_390 [5];
  undefined *******pppppppuStack_368;
  undefined *******pppppppuStack_360;
  undefined *******pppppppuStack_358;
  int iStack_350;
  long lStack_328;
  undefined ********ppppppppuStack_310;
  undefined8 uStack_308;
  undefined *******pppppppuStack_300;
  undefined *******pppppppuStack_2f8;
  undefined ********ppppppppuStack_2f0;
  ulong uStack_2e8;
  undefined *******pppppppuStack_2e0;
  undefined *******pppppppuStack_2d8;
  undefined *******pppppppuStack_2d0;
  undefined *******pppppppuStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined ******ppppppuStack_2a8;
  undefined ******ppppppuStack_2a0;
  undefined ******ppppppuStack_298;
  undefined ******ppppppuStack_290;
  undefined *******pppppppuStack_288;
  undefined ********ppppppppuStack_280;
  ulong uStack_278;
  undefined *******pppppppuStack_270;
  undefined ********ppppppppuStack_268;
  undefined ********ppppppppuStack_260;
  undefined *******pppppppuStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined ******ppppppuStack_238;
  int iStack_22c;
  undefined *****pppppuStack_228;
  int iStack_21c;
  ulong uStack_218;
  undefined ********ppppppppuStack_210;
  undefined *****pppppuStack_208;
  int iStack_1fc;
  undefined ********ppppppppuStack_1f8;
  undefined ********ppppppppuStack_1f0;
  ulong uStack_1e8;
  undefined ********ppppppppuStack_1e0;
  undefined ********ppppppppuStack_1d8;
  undefined ********ppppppppuStack_1d0;
  undefined ********ppppppppuStack_1c8;
  undefined ********ppppppppuStack_1c0;
  undefined *******pppppppuStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  uint uStack_19c;
  undefined *******pppppppuStack_198;
  undefined ********ppppppppuStack_190;
  undefined *****pppppuStack_188;
  undefined *******pppppppuStack_180;
  long *plStack_178;
  int *piStack_170;
  long alStack_168 [3];
  int iStack_14c;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined *******pppppppuStack_130;
  undefined *******pppppppuStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined ********ppppppppuStack_f8;
  undefined ********ppppppppuStack_f0;
  uint uStack_e8;
  undefined1 auStack_e4 [4];
  undefined ********appppppppuStack_e0 [13];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar37 = param_1[1];
  pppppuStack_208 = ppppppuVar37[1];
  pppppppuStack_130 = (undefined *******)0x0;
  pppppppuStack_128 = (undefined *******)0x0;
  uStack_120 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_138 = 0;
  pppppppuVar20 = param_5[1];
  ppppppppuVar18 = param_3;
  iStack_22c = param_4;
  ppppppppuStack_210 = param_5;
  ppppppppuStack_1d8 = param_2;
  if (((undefined *******)0x1 < pppppppuVar20) &&
     (appppppppuStack_e0[0] =
           (undefined ********)((ulong)appppppppuStack_e0[0] & 0xffffffff00000000),
     0 < (int)pppppppuVar20)) {
    iVar19 = 0;
    do {
      if (((ulong)(*ppppppppuStack_210)[(ulong)(long)iVar19 >> 6] >> ((long)iVar19 & 0x3fU) & 1) !=
          0) {
        FUN_10923b3a0(&lStack_148,appppppppuStack_e0);
        pppppppuVar20 = ppppppppuStack_210[1];
        iVar19 = (int)appppppppuStack_e0[0];
      }
      iVar19 = iVar19 + 1;
      appppppppuStack_e0[0] = (undefined ********)CONCAT44(appppppppuStack_e0[0]._4_4_,iVar19);
    } while (iVar19 < (int)pppppppuVar20);
  }
  ppppppppuStack_1f0 = (undefined ********)(ppppppuVar37 + 5);
  iStack_14c = 0;
  pppppppuStack_180 = (undefined *******)&pppppppuStack_130;
  pppppuStack_188 = pppppuStack_208;
  plStack_178 = &lStack_148;
  piStack_170 = &iStack_14c;
  ppppppppuVar17 = ppppppppuStack_210;
  ppppppuStack_238 = ppppppuVar37;
  pppppppuStack_198 = param_1;
  ppppppppuStack_190 = ppppppppuStack_1f0;
  func_0x000105007b50(alStack_168);
  uStack_19c = (uint)param_3;
  if (iStack_22c <= (int)uStack_19c) {
LAB_109692000:
    FUN_109692328(&pppppppuStack_198);
    if (alStack_168[0] != 0) {
      __ZdlPv();
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    pppppppuVar20 = pppppppuStack_130;
    if (pppppppuStack_130 != (undefined *******)0x0) {
      pppppppuStack_128 = pppppppuStack_130;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    if (alStack_168[0] != 0) {
      __ZdlPv();
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    if (pppppppuStack_130 != (undefined *******)0x0) {
      pppppppuStack_128 = pppppppuStack_130;
      __ZdlPv();
    }
    pppppppuVar25 = pppppppuVar20;
    __Unwind_Resume();
    ppppppppuStack_280 = param_3;
    uStack_278 = unaff_x23;
    pppppppuStack_270 = param_1;
    ppppppppuStack_268 = unaff_x21;
    ppppppppuStack_260 = unaff_x20;
    pppppppuStack_258 = pppppppuVar20;
    puStack_250 = &stack0xfffffffffffffff0;
    pcStack_248 = FUN_10969219c;
    ppppppuVar37 = pppppppuVar25[1];
    if (ppppppuVar37 < pppppppuVar25[2]) {
      *ppppppuVar37 = (undefined *****)0x0;
      ppppppuVar37[1] = (undefined *****)0x0;
      ppppppuVar37[2] = (undefined *****)0x0;
      FUN_109682858(ppppppuVar37,*ppppppppuVar17,ppppppppuVar17[1],
                    ((long)ppppppppuVar17[1] - (long)*ppppppppuVar17 >> 3) * 0x6db6db6db6db6db7);
      ppppppuVar37 = ppppppuVar37 + 3;
      pppppppuVar25[1] = ppppppuVar37;
    }
    else {
      pcVar43 = (code *)((long)ppppppuVar37 - (long)*pppppppuVar25);
      pppppuVar32 = (undefined *****)(((long)pcVar43 >> 3) * -0x5555555555555555 + 1);
      if ((undefined *****)0xaaaaaaaaaaaaaaa < pppppuVar32) {
        pppppppuVar20 = pppppppuVar25;
        FUN_1096933f8();
        func_0x0001096934cc(&ppppppuStack_2a8);
        pppppppuVar15 = pppppppuVar20;
        __Unwind_Resume();
        pcStack_2b8 = FUN_109692328;
        lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppppppuVar37 = pppppppuVar15[3];
        pppppppuVar16 = pppppppuVar15;
        ppppppppuStack_310 = unaff_x28;
        uStack_308 = unaff_x27;
        pppppppuStack_300 = unaff_x26;
        pppppppuStack_2f8 = unaff_x25;
        ppppppppuStack_2f0 = param_3;
        uStack_2e8 = unaff_x23;
        pppppppuStack_2e0 = param_1;
        pppppppuStack_2d8 = (undefined *******)pcVar43;
        pppppppuStack_2d0 = pppppppuVar20;
        pppppppuStack_2c8 = pppppppuVar25;
        ppuStack_2c0 = &puStack_250;
        if (*ppppppuVar37 != ppppppuVar37[1]) {
          ppppppuVar39 = *pppppppuVar15;
          if ((pppppppuVar15[7] == (undefined ******)0x1) &&
             (ppppppppuVar17 = (undefined ********)(long)*(int *)pppppppuVar15[5],
             (int)((ulong)((long)pppppppuVar15[4][1] - (long)*pppppppuVar15[4]) >> 2) <
             *(int *)pppppppuVar15[5])) {
            func_0x000107c27e9c();
            iVar19 = (int)((ulong)((long)pppppppuVar15[4][1] - (long)*pppppppuVar15[4]) >> 2);
            apppppppuStack_390[0] = (undefined *******)CONCAT44(apppppppuStack_390[0]._4_4_,iVar19);
            if (iVar19 < *(int *)pppppppuVar15[5]) {
              do {
                ppppppppuVar17 = apppppppuStack_390;
                FUN_10923b3a0(pppppppuVar15[4]);
                iVar19 = (int)apppppppuStack_390[0] + 1;
                apppppppuStack_390[0] =
                     (undefined *******)CONCAT44(apppppppuStack_390[0]._4_4_,iVar19);
              } while (iVar19 < *(int *)pppppppuVar15[5]);
            }
            ppppppuVar37 = pppppppuVar15[3];
          }
          ppppppuStack_440 = pppppppuVar15[4];
          param_1 = (undefined *******)*ppppppuStack_440;
          pppppuVar32 = ppppppuStack_440[1];
          auVar47 = NEON_ext(*(undefined1 (*) [16])(pppppppuVar15 + 1),
                             *(undefined1 (*) [16])(pppppppuVar15 + 1),8,1);
          plStack_450 = auVar47._8_8_;
          lStack_458 = auVar47._0_8_;
          ppppppuStack_460 = ppppppuVar39;
          ppppppuStack_448 = ppppppuVar37;
          if (ppppppuVar39[1][0x12] == (undefined ****)0x0) {
            ppppppppuVar17 = (undefined ********)0x1;
            FUN_1096c6f08(&ppppppuStack_3d0);
          }
          else {
            ppppuStack_3c8 = ppppppuVar39[1][0x12];
            if (ppppuStack_3c8 != (undefined ****)0x0) {
              ppppuVar44 = ppppuStack_3c8 + -1;
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(ppppuVar44,0x10);
                if (bVar12) {
                  *(int *)ppppuVar44 = *(int *)ppppuVar44 + 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            ppppppuStack_3d0 = (undefined ******)&PTR_FUN_110b00e00;
          }
          pcVar43 = (code *)((ulong)((long)pppppuVar32 - (long)param_1) >> 2);
          pppppppuVar20 =
               (undefined *******)
               ((ulong)((long)ppppuStack_3c8[0x12] - (long)ppppuStack_3c8[0x11]) >> 3);
          uVar38 = (uint)pppppppuVar20;
          uVar41 = (uint)pcVar43;
          if (uVar38 == 1) {
            if (uVar41 != 0) {
              pppppppuVar20 = (undefined *******)0x0;
              pcVar43 = (code *)((ulong)((long)pppppuVar32 - (long)param_1) >> 2 & 0xffffffff);
              param_1 = (undefined *******)0x18;
              unaff_x23 = 0x38;
              param_3 = apppppppuStack_390;
              do {
                ppppppuVar37 = ppppppuStack_460;
                unaff_x26 = (undefined *******)ppppppuStack_448[1];
                for (unaff_x25 = (undefined *******)*ppppppuStack_448; unaff_x25 != unaff_x26;
                    unaff_x25 = (undefined *******)((long)unaff_x25 + 4)) {
                  ppppppppuVar17 = (undefined ********)(long)*(int *)unaff_x25;
                  lVar42 = *(long *)(lStack_458 + 8) + (long)ppppppppuVar17 * 0x40;
                  lVar46 = *(long *)(lVar42 + 0x28);
                  if (0 < (int)((ulong)(*(long *)(lVar42 + 0x30) - lVar46) >> 2)) {
                    lVar26 = 0;
                    iVar19 = *(int *)((long)*ppppppuStack_440 + (long)pppppppuVar20 * 4);
                    do {
                      plVar33 = (long *)(*plStack_450 + (long)*(int *)(lVar46 + lVar26 * 4) * 0x18);
                      lVar5 = *plVar33;
                      lVar46 = 0;
                      if (plVar33[1] - lVar5 != 0x38) {
                        lVar46 = (long)iVar19;
                      }
                      param_3[lVar26] = (undefined *******)(lVar5 + lVar46 * 0x38);
                      lVar26 = lVar26 + 1;
                      lVar46 = *(long *)(lVar42 + 0x28);
                    } while (lVar26 < (int)((ulong)(*(long *)(lVar42 + 0x30) - lVar46) >> 2));
                  }
                  ppppppppuVar18 = (undefined ********)((long)ppppppuVar37[1] + 0x14);
                  FUN_109681724();
                }
                pppppppuVar20 = (undefined *******)((long)pppppppuVar20 + 1);
              } while (pppppppuVar20 != (undefined *******)pcVar43);
            }
          }
          else if (uVar41 != 0) {
            uVar3 = uVar38;
            if (uVar41 <= uVar38) {
              uVar3 = uVar41;
            }
            unaff_x23 = (ulong)uVar3;
            pppppppuVar20 = (undefined *******)0x58;
            uStack_3d8 = uVar3;
            uStack_3d4 = uVar3;
            __Znwm();
            pppppppuVar25 = pppppppuVar20 + 1;
            *pppppppuVar25 = (undefined ******)0x0;
            pppppppuVar20[2] = (undefined ******)0x0;
            *pppppppuVar20 = (undefined ******)&PTR_FUN_110b00d28;
            pppppppuStack_418 = pppppppuVar20 + 3;
            *pppppppuStack_418 = (undefined ******)0x32aaaba7;
            pppppppuVar20[5] = (undefined ******)0x0;
            pppppppuVar20[4] = (undefined ******)0x0;
            pppppppuVar20[7] = (undefined ******)0x0;
            pppppppuVar20[6] = (undefined ******)0x0;
            pppppppuVar20[9] = (undefined ******)0x0;
            pppppppuVar20[8] = (undefined ******)0x0;
            pppppppuVar20[10] = (undefined ******)0x0;
            uStack_41c = 0;
            if (uVar3 << 5 != 0) {
              uStack_41c = (uVar41 - 1) / (uVar3 << 5);
            }
            uStack_41c = uStack_41c + 1;
            uStack_3b0 = 0;
            uStack_3b8 = 0;
            uStack_3a0 = 0;
            uStack_3a8 = 0;
            ppppppuStack_3c0 = (undefined ******)0x3cb0b1bb;
            uStack_398 = 0;
            uStack_428 = 0;
            uVar10 = 0;
            if (uStack_41c != 0) {
              uVar10 = (uVar41 - 1) / uStack_41c;
            }
            iStack_420 = uVar10 + 1;
            param_3 = (undefined ********)&uStack_428;
            do {
              cVar8 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(pppppppuVar25,0x10);
              if (bVar12) {
                *pppppppuVar25 = (undefined ******)((long)*pppppppuVar25 + 1);
                cVar8 = ExclusiveMonitorsStatus();
              }
              puVar11 = PTR___ZSt7nothrow_1103469d8;
            } while (cVar8 != '\0');
            pppppppuStack_400 = (undefined *******)&uStack_3d4;
            pppppppuStack_3f8 = (undefined *******)&uStack_3d8;
            pppppppuStack_3f0 = &ppppppuStack_3c0;
            uStack_424 = uVar41;
            pppppppuStack_410 = pppppppuVar20;
            pppppppuStack_408 = &ppppppuStack_460;
            pppppppuStack_3e8 = pppppppuStack_418;
            pppppppuStack_3e0 = pppppppuVar20;
            if (uVar38 != 0) {
              unaff_x26 = (undefined *******)0x0;
              unaff_x25 = (undefined *******)apppppppuStack_390;
              pcVar43 = FUN_109693638;
              pppppppuStack_408 = &ppppppuStack_460;
              do {
                param_1 = pppppppuStack_410;
                pppppppuVar20 = pppppppuStack_418;
                apppppppuStack_390[0] = (undefined *******)CONCAT44(uStack_424,uStack_428);
                apppppppuStack_390[1] = (undefined *******)CONCAT44(uStack_41c,iStack_420);
                apppppppuStack_390[2] = pppppppuStack_418;
                apppppppuStack_390[3] = pppppppuStack_410;
                if (pppppppuStack_410 != (undefined *******)0x0) {
                  pppppppuVar25 = pppppppuStack_410 + 1;
                  do {
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(pppppppuVar25,0x10);
                    if (bVar12) {
                      *pppppppuVar25 = (undefined ******)((long)*pppppppuVar25 + 1);
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                }
                pppppppuStack_368 = pppppppuStack_400;
                apppppppuStack_390[4] = pppppppuStack_408;
                pppppppuStack_358 = pppppppuStack_3f0;
                pppppppuStack_360 = pppppppuStack_3f8;
                iVar19 = (int)unaff_x26;
                ppppppppuVar18 = (undefined ********)0x48;
                iStack_350 = iVar19;
                __ZnwmRKSt9nothrow_t(0x48,puVar11);
                if (ppppppppuVar18 != (undefined ********)0x0) {
                  ppppppppuVar18[1] = (undefined *******)CONCAT44(uStack_41c,iStack_420);
                  *ppppppppuVar18 = (undefined *******)CONCAT44(uStack_424,uStack_428);
                  ppppppppuVar18[2] = pppppppuVar20;
                  ppppppppuVar18[3] = param_1;
                  apppppppuStack_390[2] = (undefined *******)0x0;
                  apppppppuStack_390[3] = (undefined *******)0x0;
                  ppppppppuVar18[5] = pppppppuStack_400;
                  ppppppppuVar18[4] = pppppppuStack_408;
                  ppppppppuVar18[7] = pppppppuStack_3f0;
                  ppppppppuVar18[6] = pppppppuStack_3f8;
                  *(int *)(ppppppppuVar18 + 8) = iVar19;
                  param_1 = (undefined *******)0x0;
                }
                ppppppppuVar17 = (undefined ********)pcVar43;
                FUN_1096c71f0(&ppppppuStack_3d0);
                if (param_1 != (undefined *******)0x0) {
                  pppppppuVar20 = param_1 + 1;
                  do {
                    ppppppuVar37 = *pppppppuVar20;
                    cVar8 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(pppppppuVar20,0x10);
                    if (bVar12) {
                      *pppppppuVar20 = (undefined ******)((long)ppppppuVar37 + -1);
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (ppppppuVar37 == (undefined ******)0x0) {
                    (*(code *)(*param_1)[2])(param_1);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
                  }
                }
                unaff_x26 = (undefined *******)(ulong)(iVar19 + 1U);
              } while (iVar19 + 1U != uVar3);
            }
            cStack_430 = '\x01';
            pppppppuStack_438 = pppppppuStack_3e8;
            __ZNSt3__15mutex4lockEv();
            while (uStack_3d8 != 0) {
              ppppppppuVar17 = &pppppppuStack_438;
              __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(&ppppppuStack_3c0);
            }
            if (cStack_430 == '\x01') {
              __ZNSt3__15mutex6unlockEv(pppppppuStack_438);
            }
            pppppppuVar20 = pppppppuStack_410;
            if (pppppppuStack_410 != (undefined *******)0x0) {
              pppppppuVar25 = pppppppuStack_410 + 1;
              do {
                ppppppuVar37 = *pppppppuVar25;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppppppuVar25,0x10);
                if (bVar12) {
                  *pppppppuVar25 = (undefined ******)((long)ppppppuVar37 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar37 == (undefined ******)0x0) {
                (*(code *)(*pppppppuStack_410)[2])(pppppppuStack_410);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar20);
              }
            }
            __ZNSt3__118condition_variableD1Ev(&ppppppuStack_3c0);
            pppppppuVar20 = pppppppuStack_3e0;
            if (pppppppuStack_3e0 != (undefined *******)0x0) {
              pppppppuVar25 = pppppppuStack_3e0 + 1;
              do {
                ppppppuVar37 = *pppppppuVar25;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppppppuVar25,0x10);
                if (bVar12) {
                  *pppppppuVar25 = (undefined ******)((long)ppppppuVar37 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar37 == (undefined ******)0x0) {
                (*(code *)(*pppppppuStack_3e0)[2])(pppppppuStack_3e0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar20);
              }
            }
          }
          ppppppuStack_3d0 = (undefined ******)&PTR_FUN_110b01d60;
          pppppppuVar16 = &ppppppuStack_3d0;
          func_0x000107c2acd4();
          pppppppuVar15[3][1] = *pppppppuVar15[3];
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
          ___stack_chk_fail();
          FUN_109693808(param_3 + 2);
          __ZNSt3__118condition_variableD1Ev(&ppppppuStack_3c0);
          FUN_109693808(&pppppppuStack_3e8);
          FUN_109696618(&ppppppuStack_3d0);
          pppppppuVar25 = pppppppuVar16;
          __Unwind_Resume();
          pcStack_468 = FUN_10969284c;
          ppppppuVar37 = *pppppppuVar25;
          pppppppuStack_4b0 = unaff_x26;
          pppppppuStack_4a8 = unaff_x25;
          ppppppppuStack_4a0 = param_3;
          uStack_498 = unaff_x23;
          pppppppuStack_490 = param_1;
          pppppppuStack_488 = (undefined *******)pcVar43;
          pppppppuStack_480 = pppppppuVar20;
          pppppppuStack_478 = pppppppuVar16;
          pppuStack_470 = &ppuStack_2c0;
          if ((undefined ********)
              (((long)pppppppuVar25[2] - (long)ppppppuVar37 >> 3) * 0x6db6db6db6db6db7) <
              ppppppppuVar17) {
            pppppppuVar20 = pppppppuVar25;
            ppppppppuVar27 = ppppppppuVar17;
            FUN_1096833dc();
            if ((undefined ********)0x492492492492492 < ppppppppuVar17) {
              FUN_109682680();
              pppppppuVar25[1] = (undefined ******)0x6db6db6db6db6db7;
              __Unwind_Resume();
              uStack_4e0 = 0x6db6db6db6db6db7;
              pcStack_4b8 = FUN_109692a10;
              ppppppppuStack_4d8 = ppppppppuVar17;
              ppppppppuStack_4d0 = ppppppppuVar18;
              pppppppuStack_4c8 = pppppppuVar25;
              ppppuStack_4c0 = &pppuStack_470;
              FUN_1096908b8();
              func_0x00010737fadc(alStack_4f8,(long)*(int *)(pppppppuVar20[1] + 2));
              piStack_510 = (int *)0x0;
              piStack_508 = (int *)0x0;
              uStack_500 = 0;
              pppppppuVar25 = *ppppppppuVar27;
              pppppppuVar16 = ppppppppuVar27[1];
              if (pppppppuVar25 != pppppppuVar16) {
                do {
                  iVar19 = *(int *)(pppppppuVar25 + 1);
                  if (iVar19 != -1) {
                    uVar29 = (ulong)(long)iVar19 >> 3 & 0x1ffffffffffffff8;
                    *(ulong *)(alStack_4f8[0] + uVar29) =
                         *(ulong *)(alStack_4f8[0] + uVar29) | 1L << ((long)iVar19 & 0x3fU);
                    uStack_528 = CONCAT44(uStack_528._4_4_,iVar19);
                    FUN_1092d7128(&piStack_510,&uStack_528);
                  }
                  pppppppuVar25 = pppppppuVar25 + 2;
                } while (pppppppuVar25 != pppppppuVar16);
                piVar23 = piStack_510;
                if (piStack_510 != piStack_508) {
                  do {
                    piStack_508 = piStack_508 + -1;
                    pppuVar24 = pppppppuVar20[1][1][1][(long)*piStack_508 * 8 + 3];
                    for (pppuVar14 = pppppppuVar20[1][1][1][(long)*piStack_508 * 8 + 2];
                        pppuVar14 != pppuVar24; pppuVar14 = (undefined ***)((long)pppuVar14 + 4)) {
                      iVar19 = *(int *)pppuVar14;
                      uStack_528._4_4_ = (undefined4)((ulong)uStack_528 >> 0x20);
                      uStack_528 = CONCAT44(uStack_528._4_4_,iVar19);
                      uVar29 = (ulong)(long)iVar19 >> 6;
                      uVar31 = 1L << ((long)iVar19 & 0x3fU);
                      uVar34 = *(ulong *)(alStack_4f8[0] + uVar29 * 8);
                      if ((uVar31 & uVar34) == 0) {
                        *(ulong *)(alStack_4f8[0] + uVar29 * 8) = uVar34 | uVar31;
                        FUN_10923b3a0(&piStack_510,&uStack_528);
                      }
                      piVar23 = piStack_510;
                    }
                  } while (piVar23 != piStack_508);
                }
              }
              pppppuVar32 = pppppppuVar20[1][5];
              pppppuVar30 = pppppppuVar20[1][6];
              uStack_529 = 1;
              lVar42 = 8;
              __Znwm();
              uStack_518 = 1;
              uStack_520 = 0;
              uStack_528 = lVar42;
              func_0x0001077df0d0(&uStack_528,&uStack_529,&uStack_528,1);
              uVar28 = *(undefined4 *)(pppppppuVar20[1] + 2);
              func_0x000105007b50(alStack_548,&uStack_528);
              FUN_109690be4(pppppppuVar20,alStack_4f8,0,uVar28,alStack_548);
              if (alStack_548[0] != 0) {
                __ZdlPv();
              }
              FUN_109692c74(pppppppuVar20[1] + 5,
                            ((long)pppppuVar30 - (long)pppppuVar32 >> 3) * -0x5555555555555555);
              ppppppuVar37 = pppppppuVar20[1];
              ppppppuVar39 = ppppppuVar37 + 0xc;
              func_0x000109693af8(ppppppuVar37 + 0xb,*ppppppuVar39);
              *ppppppuVar39 = (undefined *****)0x0;
              ppppppuVar37[0xd] = (undefined *****)0x0;
              ppppppuVar37[0xb] = (undefined *****)ppppppuVar39;
              func_0x000109692d08(pppppppuVar20[1] + 0xe);
              if (uStack_528 != 0) {
                __ZdlPv();
              }
              if (piStack_510 != (int *)0x0) {
                piStack_508 = piStack_510;
                __ZdlPv();
              }
              if (alStack_4f8[0] != 0) {
                __ZdlPv();
              }
              return;
            }
            lVar42 = (long)pppppppuVar25[2] - (long)*pppppppuVar25 >> 3;
            ppppppppuVar27 = (undefined ********)(lVar42 * -0x2492492492492492);
            if (ppppppppuVar27 < ppppppppuVar17 || (long)ppppppppuVar27 - (long)ppppppppuVar17 == 0)
            {
              ppppppppuVar27 = ppppppppuVar17;
            }
            if (0x249249249249248 < (ulong)(lVar42 * 0x6db6db6db6db6db7)) {
              ppppppppuVar27 = (undefined ********)0x492492492492492;
            }
            FUN_1096828dc(pppppppuVar25,ppppppppuVar27);
            ppppppuVar39 = pppppppuVar25[1];
            lVar42 = (long)ppppppppuVar17 * 0x38;
            ppppppuVar37 = ppppppuVar39 + (long)ppppppppuVar17 * 7;
            do {
              FUN_109682614(ppppppuVar39,ppppppppuVar18);
              ppppppuVar39 = ppppppuVar39 + 7;
              lVar42 = lVar42 + -0x38;
            } while (lVar42 != 0);
          }
          else {
            lVar42 = (long)pppppppuVar25[1] - (long)ppppppuVar37 >> 3;
            ppppppppuVar45 = (undefined ********)(lVar42 * 0x6db6db6db6db6db7);
            ppppppppuVar27 = ppppppppuVar45;
            if (ppppppppuVar17 <= ppppppppuVar45) {
              ppppppppuVar27 = ppppppppuVar17;
            }
            if (ppppppppuVar27 != (undefined ********)0x0) {
              ppppppuVar37 = ppppppuVar37 + 2;
              do {
                pppppppuVar20 = *ppppppppuVar18;
                ppppppuVar37[-1] = (undefined *****)ppppppppuVar18[1];
                ppppppuVar37[-2] = (undefined *****)pppppppuVar20;
                if ((undefined ********)(ppppppuVar37 + -2) != ppppppppuVar18) {
                  FUN_10928555c(ppppppuVar37,ppppppppuVar18[2],ppppppppuVar18[3],
                                (long)ppppppppuVar18[3] - (long)ppppppppuVar18[2] >> 2);
                }
                FUN_1096822fc(ppppppuVar37 + 3,ppppppppuVar18 + 5);
                ppppppuVar37 = ppppppuVar37 + 7;
                ppppppppuVar27 = (undefined ********)((long)ppppppppuVar27 + -1);
              } while (ppppppppuVar27 != (undefined ********)0x0);
            }
            pcVar43 = (code *)((long)ppppppppuVar17 + lVar42 * -0x6db6db6db6db6db7);
            if (ppppppppuVar45 <= ppppppppuVar17 && pcVar43 != (code *)0x0) {
              ppppppuVar37 = pppppppuVar25[1];
              ppppppuVar39 = ppppppuVar37 + (long)pcVar43 * 7;
              lVar42 = (long)ppppppppuVar17 * 0x38 + lVar42 * -8;
              do {
                FUN_109682614(ppppppuVar37,ppppppppuVar18);
                ppppppuVar37 = ppppppuVar37 + 7;
                lVar42 = lVar42 + -0x38;
              } while (lVar42 != 0);
              pppppppuVar25[1] = ppppppuVar39;
              return;
            }
            ppppppuVar39 = pppppppuVar25[1];
            ppppppuVar37 = *pppppppuVar25 + (long)ppppppppuVar17 * 7;
            while (ppppppuVar39 != ppppppuVar37) {
              ppppppuVar39 = ppppppuVar39 + -7;
              func_0x000109682760(ppppppuVar39);
            }
          }
          pppppppuVar25[1] = ppppppuVar37;
          return;
        }
        return;
      }
      lVar42 = (long)pppppppuVar25[2] - (long)*pppppppuVar25 >> 3;
      pppppuVar30 = (undefined *****)(lVar42 * 0x5555555555555556);
      if (pppppuVar30 < pppppuVar32 || (long)pppppuVar30 - (long)pppppuVar32 == 0) {
        pppppuVar30 = pppppuVar32;
      }
      if (0x555555555555554 < (ulong)(lVar42 * -0x5555555555555555)) {
        pppppuVar30 = (undefined *****)0xaaaaaaaaaaaaaaa;
      }
      pppppppuStack_288 = pppppppuVar25;
      if (pppppuVar30 == (undefined *****)0x0) {
        ppppppppuVar18 = (undefined ********)0x0;
      }
      else {
        ppppppppuVar18 = ppppppppuVar17;
        FUN_10969340c();
      }
      pcVar43 = (code *)((long)pppppuVar30 + (long)pcVar43);
      ppppppuStack_2a8 = (undefined ******)pppppuVar30;
      ppppppuStack_2a0 = (undefined ******)pcVar43;
      ppppppuStack_298 = (undefined ******)pcVar43;
      ppppppuStack_290 = (undefined ******)(pppppuVar30 + (long)ppppppppuVar18 * 3);
      *(undefined8 *)(pcVar43 + 8) = 0;
      *(undefined8 *)(pcVar43 + 0x10) = 0;
      *(undefined8 *)pcVar43 = 0;
      FUN_109682858(pcVar43,*ppppppppuVar17,ppppppppuVar17[1],
                    ((long)ppppppppuVar17[1] - (long)*ppppppppuVar17 >> 3) * 0x6db6db6db6db6db7);
      ppppppuVar37 = (undefined ******)(pcVar43 + 0x18);
      ppppppuVar39 = *pppppppuVar25;
      ppppppuVar7 = pppppppuVar25[1];
      func_0x000109693450(ppppppuVar39,ppppppuVar7,
                          pcVar43 + ((long)ppppppuVar39 - (long)ppppppuVar7));
      ppppppuStack_2a8 = *pppppppuVar25;
      *pppppppuVar25 = (undefined ******)(pcVar43 + ((long)ppppppuVar39 - (long)ppppppuVar7));
      pppppppuVar25[1] = ppppppuVar37;
      ppppppuStack_290 = pppppppuVar25[2];
      pppppppuVar25[2] = (undefined ******)(pppppuVar30 + (long)ppppppppuVar18 * 3);
      ppppppuStack_2a0 = ppppppuStack_2a8;
      ppppppuStack_298 = ppppppuStack_2a8;
      func_0x0001096934cc(&ppppppuStack_2a8);
    }
    pppppppuVar25[1] = ppppppuVar37;
    return;
  }
LAB_109690d0c:
  uVar29 = (ulong)(int)param_3;
  ppppuVar44 = pppppuStack_208[1] + uVar29 * 8;
  uVar38 = (uint)*(byte *)ppppuVar44;
  if (((ulong)(*ppppppppuStack_1d8)[uVar29 >> 6] >> (uVar29 & 0x3f) & 1) == 0) {
    if (uVar38 != 5) goto LAB_109691fc4;
LAB_109690e6c:
    FUN_109692328(&pppppppuStack_198);
    uVar41 = uStack_19c;
    unaff_x20 = (undefined ********)(long)(int)uStack_19c;
    ppppppppuVar17 = ppppppppuStack_210;
    func_0x000105007b50(&pppppppuStack_1b8);
    pppppuVar32 = param_1[1][1];
    unaff_x21 = (undefined ********)(pppppuVar32[1] + (long)unaff_x20 * 8);
    pppppppuVar20 = unaff_x21[2];
    auStack_e4 = *(undefined1 (*) [4])pppppppuVar20;
    ppppppppuStack_1f8 = (undefined ********)(long)(int)auStack_e4;
    uVar38 = *(uint *)(pppppppuVar20 + 2);
    uStack_1e8 = (ulong)uVar38;
    uVar29 = (ulong)unaff_x20 >> 6;
    if ((int)uVar41 < 0) {
      uVar29 = -(ulong)(0x3f - uVar41 >> 6);
    }
    pppppppuVar25 = *ppppppppuStack_1d8 + uVar29;
    uVar34 = (ulong)unaff_x20 & 0x3f;
    ppppppppuStack_1c0 = (undefined ********)(long)(int)uVar38;
    uVar31 = (ulong)ppppppppuStack_1c0 >> 6;
    if ((int)uVar38 < 0) {
      uVar31 = -(ulong)(0x3f - uVar38 >> 6);
    }
    uVar35 = (ulong)ppppppppuStack_1c0 & 0x3f;
    uVar36 = (uVar35 - uVar34) + (uVar31 - uVar29) * 0x40;
    if ((uVar41 & 0x3f) == 0) {
joined_r0x000109691298:
      for (; 0x3f < uVar36; uVar36 = uVar36 - 0x40) {
        ppppppuVar37 = *pppppppuVar25;
        if (ppppppuVar37 != (undefined ******)0x0) {
          uVar29 = ((ulong)ppppppuVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((ulong)ppppppuVar37 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = uVar29 >> 0x20 | uVar29 << 0x20;
          goto LAB_109691444;
        }
        pppppppuVar25 = pppppppuVar25 + 1;
      }
      if (uVar36 != 0) {
        uVar29 = (ulong)*pppppppuVar25 & 0xffffffffffffffffU >> (-uVar36 & 0x3f);
        uVar34 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
        uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 | (uVar34 & 0x3333333333333333) << 2;
        uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
        uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
        if (uVar29 != 0) {
          uVar36 = LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20);
        }
      }
    }
    else {
      uVar13 = 0x40 - uVar34;
      uVar4 = uVar13;
      if (uVar36 <= uVar13) {
        uVar4 = uVar36;
      }
      ppppppppuVar17 = (undefined ********)(0xffffffffffffffff >> (uVar13 - uVar4 & 0x3f));
      ppppppppuVar18 = (undefined ********)*pppppppuVar25;
      uVar34 = (ulong)ppppppppuVar17 & -1L << uVar34 & (ulong)ppppppppuVar18;
      if (uVar34 == 0) {
        if (uVar13 < uVar36) {
          uVar36 = uVar36 - uVar4;
          pppppppuVar25 = pppppppuVar25 + 1;
          goto joined_r0x000109691298;
        }
        pppppppuVar25 = pppppppuVar25 + (uVar31 - uVar29 & 0x3ffffffffffffff);
        uVar36 = uVar35;
      }
      else {
        uVar29 = (uVar34 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar34 & 0x5555555555555555) << 1;
        uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
        uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
        uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
        uVar29 = uVar29 >> 0x20 | uVar29 << 0x20;
LAB_109691444:
        uVar36 = LZCOUNT(uVar29);
      }
    }
    iStack_1fc = *(int *)((long)pppppppuVar20 + 4);
    ppppppppuStack_1c8 = (undefined ********)(ulong)*(uint *)(pppppppuVar20 + 1);
    ppppppppuStack_1e0 = (undefined ********)(long)*(int *)((long)pppppppuVar20 + 0xc);
    if ((*ppppppppuStack_1d8 + uVar31 != pppppppuVar25) || (uVar36 != uVar35)) {
      uStack_e8 = 0;
      if ((int)*(uint *)(pppppppuVar20 + 1) < 1) {
        ppppppuVar37 = param_1[1] + 0xb;
        FUN_109693bb8(ppppppuVar37,ppppppppuStack_1f8,auStack_e4);
        uStack_e8 = *(uint *)((long)ppppppuVar37[6] + -4);
        ppppppuVar37 = param_1[1] + 0xb;
        ppppppppuVar18 = (undefined ********)auStack_e4;
        ppppppppuVar17 = ppppppppuStack_1f8;
        FUN_109693bb8();
        ppppppuVar37[6] = (undefined *****)((long)ppppppuVar37[6] + -4);
        pppppppuVar20 = unaff_x21[2];
      }
      pppppppuVar25 = unaff_x21[3];
      if (7 < (int)((ulong)((long)pppppppuVar25 - (long)pppppppuVar20) >> 2)) {
        lVar42 = 0;
        do {
          iVar19 = *(int *)((long)pppppppuVar20 + (lVar42 + 6) * 4);
          iVar40 = *(int *)((long)pppppppuVar20 + (lVar42 + 7) * 4);
          if (iVar40 != -1 && iVar19 != -1) {
            iVar2 = iVar40;
            if (0 < (int)ppppppppuStack_1c8) {
              iVar2 = *(int *)((long)pppppppuVar20 + (lVar42 + 5) * 4);
              iVar19 = iVar40;
            }
            iVar40 = *(int *)pppppuVar32[1][(long)iVar2 * 8 + 5];
            iVar19 = *(int *)pppppuVar32[1][(long)iVar19 * 8 + 5];
            if (iVar19 != iVar40) {
              pppppuVar30 = param_1[1][5] + (long)iVar40 * 3;
              ppppppppuVar17 = (undefined ********)*pppppuVar30;
              ppppppppuVar18 = (undefined ********)pppppuVar30[1];
              FUN_1096931a8(param_1[1][5] + (long)iVar19 * 3,ppppppppuVar17,ppppppppuVar18,
                            ((long)ppppppppuVar18 - (long)ppppppppuVar17 >> 3) * 0x6db6db6db6db6db7)
              ;
              pppppppuVar20 = unaff_x21[2];
              pppppppuVar25 = unaff_x21[3];
            }
          }
          lVar42 = lVar42 + 3;
        } while ((int)lVar42 + 7 < (int)((ulong)((long)pppppppuVar25 - (long)pppppppuVar20) >> 2));
      }
      uStack_218 = (long)ppppppppuStack_1e0 << 6 | 0x28;
      iStack_21c = (int)uStack_1e8 - (int)ppppppppuStack_1e0;
      ppppppppuStack_1d0 = unaff_x21;
      do {
        unaff_x21 = ppppppppuStack_1d0;
        if (7 < (int)((ulong)((long)pppppppuVar25 - (long)pppppppuVar20) >> 2)) {
          lVar42 = 0;
          do {
            iVar19 = *(int *)((long)pppppppuVar20 + (lVar42 + 6) * 4);
            iVar40 = *(int *)((long)pppppppuVar20 + (lVar42 + 7) * 4);
            if (iVar19 != -1 && iVar40 != -1) {
              iVar2 = iVar19;
              if (0 < (int)ppppppppuStack_1c8) {
                iVar2 = iVar40;
                iVar40 = iVar19;
              }
              iVar19 = *(int *)pppppuVar32[1][(long)iVar2 * 8 + 5];
              iVar40 = *(int *)pppppuVar32[1][(long)iVar40 * 8 + 5];
              if (iVar40 != iVar19) {
                pppppuVar30 = param_1[1][5] + (long)iVar19 * 3;
                ppppppppuVar17 = (undefined ********)*pppppuVar30;
                ppppppppuVar18 = (undefined ********)pppppuVar30[1];
                FUN_1096931a8(param_1[1][5] + (long)iVar40 * 3,ppppppppuVar17,ppppppppuVar18,
                              ((long)ppppppppuVar18 - (long)ppppppppuVar17 >> 3) *
                              0x6db6db6db6db6db7);
                pppppppuVar20 = unaff_x21[2];
                pppppppuVar25 = unaff_x21[3];
              }
            }
            lVar42 = lVar42 + 3;
          } while ((int)lVar42 + 7 < (int)((ulong)((long)pppppppuVar25 - (long)pppppppuVar20) >> 2))
          ;
        }
        if ((int)ppppppppuStack_1c8 < 1) {
          uVar38 = uStack_e8 - 1;
          unaff_x20 = (undefined ********)(ulong)uVar38;
          if ((int)uStack_e8 < 1) break;
          pppppuVar30 = param_1[1][0xf];
          if (pppppppuStack_1b8 != (undefined *******)0x0) {
            __ZdlPv();
          }
          ppppppppuVar18 = ppppppppuStack_1f8;
          pppppppuStack_1b8 = (undefined *******)pppppuVar30[-3];
          uStack_1a8 = SUB168(*(undefined1 (*) [16])(pppppuVar30 + -2),8);
          uStack_1b0 = SUB168(*(undefined1 (*) [16])(pppppuVar30 + -2),0);
          pppppuVar30[-3] = (undefined ****)0x0;
          pppppuVar30[-2] = (undefined ****)0x0;
          pppppuVar30[-1] = (undefined ****)0x0;
          ppppppuVar37 = param_1[1];
          pppppuVar30 = ppppppuVar37[0xf] + -3;
          if (*pppppuVar30 != (undefined ****)0x0) {
            __ZdlPv();
          }
          ppppppuVar37[0xf] = pppppuVar30;
          iVar19 = *(int *)((long)pppppuVar32[1][(long)ppppppppuVar18 * 8 + 2] + 0xc);
          iVar40 = *(int *)(pppppuVar32[1][(long)ppppppppuVar18 * 8 + 2] + 2);
          uStack_e8 = uVar38;
          if (iVar19 < iVar40) {
            uVar29 = (long)iVar19 << 6 | 0x28;
            iVar40 = iVar40 - iVar19;
            do {
              lVar42 = (long)**(int **)((long)pppppuVar32[1] + uVar29);
              ppppuVar44 = param_1[1][8][lVar42 * 3 + 1];
              unaff_x28 = (undefined ********)(param_1[1][5] + lVar42 * 3);
              FUN_1096833dc(unaff_x28);
              pppppppuVar20 = (undefined *******)ppppuVar44[-3];
              unaff_x28[1] = (undefined *******)ppppuVar44[-2];
              *unaff_x28 = pppppppuVar20;
              unaff_x28[2] = (undefined *******)ppppuVar44[-1];
              ppppuVar44[-3] = (undefined ***)0x0;
              ppppuVar44[-2] = (undefined ***)0x0;
              ppppuVar44[-1] = (undefined ***)0x0;
              pppppuVar30 = param_1[1][8];
              ppppppppuVar18 = (undefined ********)(pppppuVar30[lVar42 * 3 + 1] + -3);
              appppppppuStack_e0[0] = ppppppppuVar18;
              FUN_109682a18(appppppppuStack_e0);
              pppppuVar30[lVar42 * 3 + 1] = (undefined ****)ppppppppuVar18;
              uVar29 = uVar29 + 0x40;
              iVar40 = iVar40 + -1;
            } while (iVar40 != 0);
          }
        }
        else {
          func_0x000105007b50(&pcStack_100,&pppppppuStack_1b8);
          FUN_109690be4(param_1,ppppppppuStack_1d8,iStack_1fc,ppppppppuStack_1e0,&pcStack_100);
          unaff_x20 = (undefined ********)0x18;
          unaff_x21 = (undefined ********)0x6db6db6db6db6db7;
          if (pcStack_100 != (code *)0x0) {
            __ZdlPv();
          }
          pppppuVar30 = param_1[1][5] +
                        (long)*(int *)pppppuVar32[1][(long)ppppppppuStack_1c8 * 8 + 5] * 3;
          unaff_x28 = (undefined ********)*pppppuVar30;
          ppppuVar44 = pppppuVar30[1];
          uVar29 = ((long)ppppuVar44 - (long)unaff_x28 >> 3) * 0x6db6db6db6db6db7;
          if (uStack_1b0 < uVar29) {
            func_0x000104bec9f0(&pppppppuStack_1b8,uVar29,1);
            unaff_x28 = (undefined ********)*pppppuVar30;
            ppppuVar44 = pppppuVar30[1];
          }
          if ((long)ppppuVar44 - (long)unaff_x28 == 0x38) {
            appppppppuStack_e0[0] = (undefined ********)*unaff_x28;
            appppppppuStack_e0[1] = (undefined ********)unaff_x28[1];
            appppppppuStack_e0[3] = (undefined ********)0x0;
            appppppppuStack_e0[4] = (undefined ********)0x0;
            appppppppuStack_e0[2] = (undefined ********)0x0;
            FUN_109285684(appppppppuStack_e0 + 2,unaff_x28[2],unaff_x28[3],
                          (long)unaff_x28[3] - (long)unaff_x28[2] >> 2);
            ppppppppuVar18 = unaff_x28 + 6;
            pauVar1 = (undefined1 (*) [16])(unaff_x28 + 5);
            unaff_x28 = SUB168(*pauVar1,8);
            appppppppuStack_e0[5] = SUB168(*pauVar1,0);
            if (*ppppppppuVar18 != (undefined *******)0x0) {
              pppppppuVar20 = *ppppppppuVar18 + 1;
              do {
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(pppppppuVar20,0x10);
                if (bVar12) {
                  *pppppppuVar20 = (undefined ******)((long)*pppppppuVar20 + 1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            if ((int)appppppppuStack_e0[0] == 0x18) {
              bVar12 = false;
              if (!NAN(*(float *)appppppppuStack_e0[1])) {
                bVar12 = *(float *)appppppppuStack_e0[1] == 0.0;
              }
LAB_1096919b8:
              unaff_x20 = (undefined ********)(ulong)!bVar12;
            }
            else {
              if ((int)appppppppuStack_e0[0] == 0x12) {
                bVar12 = *(int *)appppppppuStack_e0[1] == 0;
                goto LAB_1096919b8;
              }
              unaff_x20 = (undefined ********)0x0;
            }
            appppppppuStack_e0[6] = unaff_x28;
            if (unaff_x28 != (undefined ********)0x0) {
              ppppppppuVar18 = unaff_x28 + 1;
              do {
                pppppppuVar20 = *ppppppppuVar18;
                cVar8 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(ppppppppuVar18,0x10);
                if (bVar12) {
                  *ppppppppuVar18 = (undefined *******)((long)pppppppuVar20 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (pppppppuVar20 == (undefined *******)0x0) {
                (*(code *)(*unaff_x28)[2])(unaff_x28);
                __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x28);
              }
            }
            if (appppppppuStack_e0[2] != (undefined ********)0x0) {
              appppppppuStack_e0[3] = appppppppuStack_e0[2];
              __ZdlPv();
            }
            pppppppuVar20 = pppppppuStack_1b8;
            uVar29 = uStack_1b0;
            if ((int)unaff_x20 == 0) {
              appppppppuStack_e0[0] =
                   (undefined ********)((ulong)appppppppuStack_e0[0] & 0xffffffffffffff00);
              func_0x000108adee10(&pppppppuStack_1b8,uStack_1b0,appppppppuStack_e0);
              pppppppuVar20 = pppppppuStack_1b8;
              uVar29 = uStack_1b0;
            }
          }
          else {
            pppppppuVar20 = pppppppuStack_1b8;
            uVar29 = uStack_1b0;
            if (0 < (int)((ulong)((long)ppppuVar44 - (long)unaff_x28) >> 3) * -0x49249249) {
              unaff_x21 = (undefined ********)0x0;
              pppppppuVar25 = pppppppuStack_1b8;
              do {
                pppppppuVar20 = pppppppuVar25 + ((ulong)unaff_x21 >> 6);
                unaff_x20 = (undefined ********)(1L << ((ulong)unaff_x21 & 0x3f));
                ppppppuVar37 = *pppppppuVar20;
                if (((ulong)unaff_x20 & (ulong)ppppppuVar37) == 0) {
LAB_10969197c:
                  ppppppuVar37 = (undefined ******)
                                 ((ulong)ppppppuVar37 & ((ulong)unaff_x20 ^ 0xffffffffffffffff));
                }
                else {
                  ppppppppuVar18 = unaff_x28 + (long)unaff_x21 * 7;
                  appppppppuStack_e0[0] = (undefined ********)*ppppppppuVar18;
                  appppppppuStack_e0[1] = (undefined ********)ppppppppuVar18[1];
                  appppppppuStack_e0[3] = (undefined ********)0x0;
                  appppppppuStack_e0[4] = (undefined ********)0x0;
                  appppppppuStack_e0[2] = (undefined ********)0x0;
                  FUN_109285684(appppppppuStack_e0 + 2,ppppppppuVar18[2],ppppppppuVar18[3],
                                (long)ppppppppuVar18[3] - (long)ppppppppuVar18[2] >> 2);
                  ppppppppuVar17 = SUB168(*(undefined1 (*) [16])(ppppppppuVar18 + 5),8);
                  appppppppuStack_e0[5] = SUB168(*(undefined1 (*) [16])(ppppppppuVar18 + 5),0);
                  if (ppppppppuVar18[6] != (undefined *******)0x0) {
                    pppppppuVar20 = ppppppppuVar18[6] + 1;
                    do {
                      cVar8 = '\x01';
                      bVar12 = (bool)ExclusiveMonitorPass(pppppppuVar20,0x10);
                      if (bVar12) {
                        *pppppppuVar20 = (undefined ******)((long)*pppppppuVar20 + 1);
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                  }
                  if ((int)appppppppuStack_e0[0] == 0x18) {
                    bVar12 = false;
                    if (!NAN(*(float *)appppppppuStack_e0[1])) {
                      bVar12 = *(float *)appppppppuStack_e0[1] == 0.0;
                    }
LAB_109691910:
                    bVar12 = !bVar12;
                  }
                  else {
                    if ((int)appppppppuStack_e0[0] == 0x12) {
                      bVar12 = *(int *)appppppppuStack_e0[1] == 0;
                      goto LAB_109691910;
                    }
                    bVar12 = false;
                  }
                  appppppppuStack_e0[6] = ppppppppuVar17;
                  if (ppppppppuVar17 != (undefined ********)0x0) {
                    ppppppppuVar18 = ppppppppuVar17 + 1;
                    do {
                      pppppppuVar20 = *ppppppppuVar18;
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(ppppppppuVar18,0x10);
                      if (bVar9) {
                        *ppppppppuVar18 = (undefined *******)((long)pppppppuVar20 + -1);
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (pppppppuVar20 == (undefined *******)0x0) {
                      (*(code *)(*ppppppppuVar17)[2])(ppppppppuVar17);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar17);
                    }
                  }
                  if (appppppppuStack_e0[2] != (undefined ********)0x0) {
                    appppppppuStack_e0[3] = appppppppuStack_e0[2];
                    __ZdlPv();
                  }
                  pppppppuVar20 = pppppppuStack_1b8 + ((ulong)unaff_x21 >> 6);
                  ppppppuVar37 = *pppppppuVar20;
                  pppppppuVar25 = pppppppuStack_1b8;
                  if (!bVar12) goto LAB_10969197c;
                  ppppppuVar37 = (undefined ******)((ulong)ppppppuVar37 | (ulong)unaff_x20);
                }
                *pppppppuVar20 = ppppppuVar37;
                unaff_x21 = (undefined ********)((long)unaff_x21 + 1);
                unaff_x28 = (undefined ********)*pppppuVar30;
                pppppppuVar20 = pppppppuStack_1b8;
                uVar29 = uStack_1b0;
              } while ((long)unaff_x21 <
                       (long)((int)((ulong)((long)pppppuVar30[1] - (long)unaff_x28) >> 3) *
                             -0x49249249));
            }
          }
          for (; 0x3f < uVar29; uVar29 = uVar29 - 0x40) {
            ppppppuVar37 = *pppppppuVar20;
            if (ppppppuVar37 != (undefined ******)0x0) {
              uVar29 = ((ulong)ppppppuVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       ((ulong)ppppppuVar37 & 0x5555555555555555) << 1;
              uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
              uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
              uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
              uVar29 = LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20);
              goto LAB_109691a80;
            }
            pppppppuVar20 = pppppppuVar20 + 1;
          }
          if (uVar29 != 0) {
            uVar31 = (ulong)*pppppppuVar20 & 0xffffffffffffffffU >> (-uVar29 & 0x3f);
            uVar34 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar34 = (uVar34 & 0xcccccccccccccccc) >> 2 | (uVar34 & 0x3333333333333333) << 2;
            uVar34 = (uVar34 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar34 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar34 = (uVar34 & 0xff00ff00ff00ff00) >> 8 | (uVar34 & 0xff00ff00ff00ff) << 8;
            uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
            if (uVar31 != 0) {
              uVar29 = LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20);
            }
          }
LAB_109691a80:
          if (pppppppuVar20 == pppppppuStack_1b8 + (uStack_1b0 >> 6) &&
              ((uint)uStack_1b0 & 0x3f) == (uint)uVar29) goto LAB_109691f74;
        }
        ppppppppuVar18 = ppppppppuStack_1e0;
        if ((int)ppppppppuStack_1e0 < (int)uStack_1e8) {
          do {
            if ((*(char *)(pppppuVar32[1] + (long)(int)ppppppppuVar18 * 8) == '\0') &&
               (((ulong)(*ppppppppuStack_1d8)[(ulong)ppppppppuVar18 >> 6] >>
                 ((ulong)ppppppppuVar18 & 0x3f) & 1) != 0)) {
              iVar19 = *(int *)pppppuVar32[1][(long)(int)ppppppppuVar18 * 8 + 5];
              pppppuVar30 = param_1[1][5] + (long)iVar19 * 3;
              ppppuVar44 = *pppppuVar30;
              ppppuVar21 = pppppuVar30[1];
              uVar29 = (long)ppppuVar21 - (long)ppppuVar44;
              if (0 < (int)(uVar29 >> 3) * -0x49249249) {
                uVar31 = 0;
                do {
                  if (((uVar29 == 0x38) || (uStack_1b0 == 1)) ||
                     (((ulong)pppppppuStack_1b8[uVar31 >> 6] >> (uVar31 & 0x3f) & 1) != 0)) {
                    appppppppuStack_e0[0] =
                         (undefined ********)CONCAT44(appppppppuStack_e0[0]._4_4_,0xffffffff);
                    appppppppuStack_e0[6] = (undefined ********)0x0;
                    appppppppuStack_e0[5] = (undefined ********)0x0;
                    appppppppuStack_e0[4] = (undefined ********)0x0;
                    appppppppuStack_e0[3] = (undefined ********)0x0;
                    appppppppuStack_e0[2] = (undefined ********)0x0;
                    appppppppuStack_e0[1] = (undefined ********)0x0;
                    ppppuVar44 = param_1[1][5][(long)iVar19 * 3] + uVar31 * 7;
                    ppppuVar44[1] = (undefined ***)0x0;
                    *ppppuVar44 = (undefined ***)appppppppuStack_e0[0];
                    pppuVar14 = ppppuVar44[2];
                    if (pppuVar14 != (undefined ***)0x0) {
                      ppppuVar44[3] = pppuVar14;
                      __ZdlPv();
                      ppppuVar44[2] = (undefined ***)0x0;
                      ppppuVar44[3] = (undefined ***)0x0;
                      ppppuVar44[4] = (undefined ***)0x0;
                    }
                    ppppuVar44[3] = (undefined ***)appppppppuStack_e0[3];
                    ppppuVar44[2] = (undefined ***)appppppppuStack_e0[2];
                    ppppuVar44[4] = (undefined ***)appppppppuStack_e0[4];
                    appppppppuStack_e0[2] = (undefined ********)0x0;
                    appppppppuStack_e0[3] = (undefined ********)0x0;
                    appppppppuStack_e0[4] = (undefined ********)0x0;
                    FUN_10967fda4(ppppuVar44 + 5,appppppppuStack_e0 + 5);
                    unaff_x28 = appppppppuStack_e0[6];
                    if (appppppppuStack_e0[6] != (undefined ********)0x0) {
                      ppppppppuVar17 = appppppppuStack_e0[6] + 1;
                      do {
                        pppppppuVar20 = *ppppppppuVar17;
                        cVar8 = '\x01';
                        bVar12 = (bool)ExclusiveMonitorPass(ppppppppuVar17,0x10);
                        if (bVar12) {
                          *ppppppppuVar17 = (undefined *******)((long)pppppppuVar20 + -1);
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (pppppppuVar20 == (undefined *******)0x0) {
                        (*(code *)(*appppppppuStack_e0[6])[2])(appppppppuStack_e0[6]);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x28);
                      }
                    }
                    if (appppppppuStack_e0[2] != (undefined ********)0x0) {
                      appppppppuStack_e0[3] = appppppppuStack_e0[2];
                      __ZdlPv();
                    }
                    ppppuVar44 = *pppppuVar30;
                    ppppuVar21 = pppppuVar30[1];
                  }
                  uVar31 = uVar31 + 1;
                  uVar29 = (long)ppppuVar21 - (long)ppppuVar44;
                } while ((long)uVar31 < (long)((int)(uVar29 >> 3) * -0x49249249));
              }
            }
            ppppppppuVar18 = (undefined ********)((long)ppppppppuVar18 + 1);
          } while (ppppppppuVar18 != ppppppppuStack_1c0);
        }
        ppppppppuVar17 = ppppppppuStack_1d0;
        ppppppppuVar18 = ppppppppuStack_1f8;
        pppppppuVar20 = ppppppppuStack_1d0[2];
        iVar19 = (int)((ulong)((long)ppppppppuStack_1d0[3] - (long)pppppppuVar20) >> 2);
        if ((int)ppppppppuStack_1c8 < 1) {
          if (7 < iVar19) {
            lVar42 = 6;
            do {
              lVar46 = (long)*(int *)pppppuVar32[1]
                                     [(long)*(int *)((long)pppppuVar32[1]
                                                           [(long)ppppppppuVar18 * 8 + 2] +
                                                    lVar42 * 4) * 8 + 5];
              ppppuVar44 = param_1[1][8][lVar46 * 3 + 1];
              unaff_x28 = (undefined ********)(param_1[1][5] + lVar46 * 3);
              FUN_1096833dc(unaff_x28);
              pppppppuVar20 = (undefined *******)ppppuVar44[-3];
              unaff_x28[1] = (undefined *******)ppppuVar44[-2];
              *unaff_x28 = pppppppuVar20;
              unaff_x28[2] = (undefined *******)ppppuVar44[-1];
              ppppuVar44[-3] = (undefined ***)0x0;
              ppppuVar44[-2] = (undefined ***)0x0;
              ppppuVar44[-1] = (undefined ***)0x0;
              pppppuVar30 = param_1[1][8];
              ppppppppuVar17 = (undefined ********)(pppppuVar30[lVar46 * 3 + 1] + -3);
              appppppppuStack_e0[0] = ppppppppuVar17;
              FUN_109682a18(appppppppuStack_e0);
              pppppuVar30[lVar46 * 3 + 1] = (undefined ****)ppppppppuVar17;
              lVar42 = lVar42 + 3;
            } while ((int)lVar42 + 1 <
                     (int)((ulong)((long)ppppppppuStack_1d0[3] - (long)ppppppppuStack_1d0[2]) >> 2))
            ;
          }
        }
        else if (7 < iVar19) {
          lVar42 = 6;
          do {
            FUN_10969219c(param_1[1][8] +
                          (long)*(int *)pppppuVar32[1]
                                        [(long)*(int *)((long)pppppppuVar20 + lVar42 * 4) * 8 + 5] *
                          3,param_1[1][5] +
                            (long)*(int *)pppppuVar32[1]
                                          [(long)*(int *)((long)pppppppuVar20 + lVar42 * 4) * 8 + 5]
                            * 3);
            pppppppuVar20 = ppppppppuVar17[2];
            lVar42 = lVar42 + 3;
          } while ((int)lVar42 + 1 <
                   (int)((ulong)((long)ppppppppuVar17[3] - (long)pppppppuVar20) >> 2));
        }
        func_0x000105007b50(&uStack_118,&pppppppuStack_1b8);
        ppppppppuVar17 = ppppppppuStack_1d8;
        ppppppppuVar18 = ppppppppuStack_1e0;
        FUN_109690be4(param_1,ppppppppuStack_1d8,ppppppppuStack_1e0,uStack_1e8,&uStack_118);
        if (CONCAT44(uStack_114,uStack_118) != 0) {
          __ZdlPv();
        }
        if (0 < (int)ppppppppuStack_1c8) {
          uStack_e8 = uStack_e8 + 1;
          ppppppuVar37 = param_1[1];
          unaff_x28 = (undefined ********)ppppppuVar37[0xf];
          if (unaff_x28 < ppppppuVar37[0x10]) {
            ppppppppuVar17 = &pppppppuStack_1b8;
            func_0x000105007b50(unaff_x28);
            ppppppppuVar27 = unaff_x28 + 3;
            ppppppuVar37[0xf] = (undefined *****)ppppppppuVar27;
          }
          else {
            ppppppuVar39 = ppppppuVar37 + 0xe;
            lVar42 = (long)unaff_x28 - (long)*ppppppuVar39;
            uVar29 = (lVar42 >> 3) * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar29) {
              FUN_109693528();
              goto LAB_109692088;
            }
            lVar46 = (long)ppppppuVar37[0x10] - (long)*ppppppuVar39 >> 3;
            uVar31 = lVar46 * 0x5555555555555556;
            if (uVar31 < uVar29 || uVar31 - uVar29 == 0) {
              uVar31 = uVar29;
            }
            if (0x555555555555554 < (ulong)(lVar46 * -0x5555555555555555)) {
              uVar31 = 0xaaaaaaaaaaaaaaa;
            }
            appppppppuStack_e0[4] = (undefined ********)ppppppuVar39;
            if (uVar31 == 0) {
              pppppppuVar20 = (undefined *******)0x0;
            }
            else {
              if (0xaaaaaaaaaaaaaaa < uVar31) {
                func_0x000104c4f740();
                goto LAB_109692088;
              }
              pppppppuVar20 = (undefined *******)(uVar31 * 0x18);
              __Znwm();
            }
            unaff_x28 = (undefined ********)((long)pppppppuVar20 + lVar42);
            ppppppppuVar17 = &pppppppuStack_1b8;
            appppppppuStack_e0[0] = (undefined ********)pppppppuVar20;
            appppppppuStack_e0[1] = unaff_x28;
            appppppppuStack_e0[2] = unaff_x28;
            appppppppuStack_e0[3] = (undefined ********)(pppppppuVar20 + uVar31 * 3);
            func_0x000105007b50(unaff_x28);
            ppppppppuVar45 = (undefined ********)ppppppuVar37[0xe];
            ppppppppuVar6 = (undefined ********)ppppppuVar37[0xf];
            pppppuVar30 = (undefined *****)
                          ((long)unaff_x28 + ((long)ppppppppuVar45 - (long)ppppppppuVar6));
            pppppuVar22 = pppppuVar30;
            ppppppppuVar27 = ppppppppuVar45;
            if (ppppppppuVar6 != ppppppppuVar45) {
              do {
                *pppppuVar22 = (undefined ****)*ppppppppuVar27;
                pppppppuVar25 = ppppppppuVar27[1];
                pppppuVar22[2] = (undefined ****)ppppppppuVar27[2];
                pppppuVar22[1] = (undefined ****)pppppppuVar25;
                *ppppppppuVar27 = (undefined *******)0x0;
                ppppppppuVar27[1] = (undefined *******)0x0;
                ppppppppuVar27[2] = (undefined *******)0x0;
                ppppppppuVar27 = ppppppppuVar27 + 3;
                pppppuVar22 = pppppuVar22 + 3;
                pppppuStack_228 = pppppuVar30;
              } while (ppppppppuVar27 != ppppppppuVar6);
              do {
                if (*ppppppppuVar45 != (undefined *******)0x0) {
                  __ZdlPv();
                }
                ppppppppuVar45 = ppppppppuVar45 + 3;
              } while (ppppppppuVar45 != ppppppppuVar6);
              ppppppppuVar45 = (undefined ********)*ppppppuVar39;
              pppppuVar30 = pppppuStack_228;
            }
            ppppppppuVar27 = unaff_x28 + 3;
            ppppppuVar37[0xe] = pppppuVar30;
            ppppppuVar37[0xf] = (undefined *****)ppppppppuVar27;
            appppppppuStack_e0[3] = (undefined ********)ppppppuVar37[0x10];
            ppppppuVar37[0x10] = (undefined *****)(pppppppuVar20 + uVar31 * 3);
            appppppppuStack_e0[0] = ppppppppuVar45;
            appppppppuStack_e0[1] = ppppppppuVar45;
            appppppppuStack_e0[2] = ppppppppuVar45;
            FUN_10969353c(appppppppuStack_e0);
          }
          ppppppuVar37[0xf] = (undefined *****)ppppppppuVar27;
          uVar29 = uStack_218;
          iVar19 = iStack_21c;
          if ((int)ppppppppuStack_1e0 < (int)uStack_1e8) {
            do {
              ppppppppuVar17 =
                   (undefined ********)
                   (param_1[1][5] + (long)**(int **)((long)pppppuVar32[1] + uVar29) * 3);
              FUN_10969219c(param_1[1][8] + (long)**(int **)((long)pppppuVar32[1] + uVar29) * 3);
              uVar29 = uVar29 + 0x40;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
          }
        }
        pppppppuVar20 = ppppppppuStack_1d0[2];
        pppppppuVar25 = ppppppppuStack_1d0[3];
      } while( true );
    }
    goto LAB_109691fb0;
  }
  if (uVar38 - 7 < 2) {
    FUN_109692328(&pppppppuStack_198);
    ppppppppuVar18 = ppppppppuStack_1f0;
    ppppppppuStack_1c0 = (undefined ********)(long)*(int *)ppppuVar44[5];
    iVar19 = *(int *)((long)ppppuVar44[5] + 4);
    if (*(byte *)ppppuVar44 == 8) {
      pppppppuVar20 = *ppppppppuStack_1f0 + (long)iVar19 * 3;
      unaff_x28 = (undefined ********)*pppppppuVar20;
      if (1 < (ulong)(((long)pppppppuVar20[1] - (long)unaff_x28 >> 3) * 0x6db6db6db6db6db7)) {
        lVar42 = 0;
        uVar29 = 1;
        do {
          ppppppppuStack_f0 = (undefined ********)unaff_x28[1];
          ppppppppuStack_f8 = (undefined ********)unaff_x28[2];
          uStack_108 = *(undefined8 *)((long)unaff_x28 + lVar42 + 0x40);
          lStack_110 = *(long *)((long)unaff_x28 + lVar42 + 0x48);
          uVar28 = (undefined4)((ulong)((long)unaff_x28[3] - (long)ppppppppuStack_f8) >> 2);
          appppppppuStack_e0[0] = (undefined ********)CONCAT44(appppppppuStack_e0[0]._4_4_,uVar28);
          pcStack_100 = (code *)CONCAT44(pcStack_100._4_4_,uVar28);
          uStack_118 = (undefined4)
                       ((ulong)(*(long *)((long)unaff_x28 + lVar42 + 0x50) - lStack_110) >> 2);
          appppppppuStack_e0[1] = ppppppppuStack_f8;
          appppppppuStack_e0[2] = ppppppppuStack_f0;
          FUN_109684a0c(appppppppuStack_e0,&pcStack_100,&uStack_118);
          uVar29 = uVar29 + 1;
          unaff_x28 = (undefined ********)*pppppppuVar20;
          lVar42 = lVar42 + 0x38;
        } while (uVar29 < (ulong)(((long)pppppppuVar20[1] - (long)unaff_x28 >> 3) *
                                 0x6db6db6db6db6db7));
      }
      ppppppppuStack_f8 = (undefined ********)0x0;
      ppppppppuStack_f0 = (undefined ********)0x0;
      pcStack_100 = (code *)0x0;
      ppppppppuVar18 = (undefined ********)unaff_x28[3];
      FUN_109285684(&pcStack_100,unaff_x28[2],ppppppppuVar18,
                    (long)ppppppppuVar18 - (long)unaff_x28[2] >> 2);
      pcVar43 = pcStack_100;
      iVar19 = *(int *)pcStack_100;
      uVar38 = *(uint *)unaff_x28;
      unaff_x20 = (undefined ********)((long)ppppppppuStack_f8 - (long)(pcStack_100 + 4));
      if (unaff_x20 != (undefined ********)0x0) {
        ppppppppuVar18 = unaff_x20;
        _memmove(pcStack_100);
      }
      ppppppppuStack_f8 = (undefined ********)(pcVar43 + (long)unaff_x20);
      ppppppppuVar17 = (undefined ********)(long)iVar19;
      func_0x000109681b04(*ppppppppuStack_1f0 + (long)(int)ppppppppuStack_1c0 * 3);
      if (0 < iVar19) {
        unaff_x20 = (undefined ********)0x0;
        do {
          appppppppuStack_e0[0] = (undefined ********)CONCAT44(appppppppuStack_e0[0]._4_4_,uVar38);
          appppppppuStack_e0[2] = (undefined ********)0x0;
          appppppppuStack_e0[1] = (undefined ********)0x0;
          appppppppuStack_e0[4] = (undefined ********)0x0;
          appppppppuStack_e0[3] = (undefined ********)0x0;
          FUN_109285684(appppppppuStack_e0 + 2,pcStack_100,ppppppppuStack_f8,
                        (long)ppppppppuStack_f8 - (long)pcStack_100 >> 2);
          appppppppuStack_e0[5] = (undefined ********)0x0;
          appppppppuStack_e0[6] = (undefined ********)0x0;
          FUN_10967fc88(appppppppuStack_e0);
          iVar40 = (int)appppppppuStack_e0;
          FUN_10967fc04();
          ppppppppuVar18 = (undefined ********)(long)iVar40;
          _memcpy(appppppppuStack_e0[1],
                  (undefined *)((long)unaff_x28[1] + (long)(iVar40 * (int)unaff_x20)));
          ppppppppuVar27 =
               (undefined ********)
               ((*ppppppppuStack_1f0)[(long)(int)ppppppppuStack_1c0 * 3] + (long)unaff_x20 * 7);
          ppppppppuVar27[1] = (undefined *******)appppppppuStack_e0[1];
          *ppppppppuVar27 = (undefined *******)appppppppuStack_e0[0];
          if ((undefined *********)ppppppppuVar27 != appppppppuStack_e0) {
            ppppppppuVar18 = appppppppuStack_e0[3];
            FUN_10928555c(ppppppppuVar27 + 2,appppppppuStack_e0[2],appppppppuStack_e0[3],
                          (long)appppppppuStack_e0[3] - (long)appppppppuStack_e0[2] >> 2);
          }
          ppppppppuVar17 = (undefined ********)(appppppppuStack_e0 + 5);
          FUN_1096822fc(ppppppppuVar27 + 5);
          ppppppppuVar27 = appppppppuStack_e0[6];
          if (appppppppuStack_e0[6] != (undefined ********)0x0) {
            ppppppppuVar45 = appppppppuStack_e0[6] + 1;
            do {
              pppppppuVar20 = *ppppppppuVar45;
              cVar8 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(ppppppppuVar45,0x10);
              if (bVar12) {
                *ppppppppuVar45 = (undefined *******)((long)pppppppuVar20 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (pppppppuVar20 == (undefined *******)0x0) {
              (*(code *)(*appppppppuStack_e0[6])[2])(appppppppuStack_e0[6]);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar27);
            }
          }
          if (appppppppuStack_e0[2] != (undefined ********)0x0) {
            appppppppuStack_e0[3] = appppppppuStack_e0[2];
            __ZdlPv();
          }
          unaff_x20 = (undefined ********)((long)unaff_x20 + 1);
        } while (unaff_x20 != (undefined ********)(long)iVar19);
      }
      unaff_x21 = (undefined ********)(ulong)uVar38;
      if (pcStack_100 != (code *)0x0) {
        ppppppppuStack_f8 = (undefined ********)pcStack_100;
        __ZdlPv();
      }
      goto LAB_109691fc4;
    }
    ppppppppuStack_f8 = (undefined ********)0x0;
    ppppppppuStack_f0 = (undefined ********)0x0;
    pcStack_100 = (code *)0x0;
    pppppuVar32 = (*ppppppppuStack_1f0)[(long)iVar19 * 3][2];
    pppppuVar30 = (*ppppppppuStack_1f0)[(long)iVar19 * 3][3];
    FUN_109285684(&pcStack_100,pppppuVar32,pppppuVar30,(long)pppppuVar30 - (long)pppppuVar32 >> 2);
    appppppppuStack_e0[0]._0_4_ =
         (int)((ulong)((long)(*ppppppppuVar18 + (long)iVar19 * 3)[1] -
                      (long)(*ppppppppuVar18)[(long)iVar19 * 3]) >> 3) * -0x49249249;
    func_0x0001078db2bc(&pcStack_100,pcStack_100,appppppppuStack_e0);
    appppppppuStack_e0[0] =
         (undefined ********)
         CONCAT44(appppppppuStack_e0[0]._4_4_,*(undefined4 *)(*ppppppppuVar18)[(long)iVar19 * 3]);
    appppppppuStack_e0[2] = (undefined ********)0x0;
    appppppppuStack_e0[1] = (undefined ********)0x0;
    appppppppuStack_e0[4] = (undefined ********)0x0;
    appppppppuStack_e0[3] = (undefined ********)0x0;
    FUN_109285684(appppppppuStack_e0 + 2,pcStack_100,ppppppppuStack_f8,
                  (long)ppppppppuStack_f8 - (long)pcStack_100 >> 2);
    appppppppuStack_e0[5] = (undefined ********)0x0;
    appppppppuStack_e0[6] = (undefined ********)0x0;
    FUN_10967fc88(appppppppuStack_e0);
    unaff_x20 = (undefined ********)*ppppppppuVar18;
    pppppppuVar20 = unaff_x20[(long)iVar19 * 3];
    pppppppuVar25 = pppppppuVar20;
    FUN_10967fc04();
    ppppppppuVar18 = ppppppppuStack_1f0;
    unaff_x21 = (undefined ********)(long)iVar19;
    if (0 < (int)((ulong)((long)(unaff_x20 + (long)iVar19 * 3)[1] - (long)pppppppuVar20) >> 3) *
            -0x49249249) {
      lVar26 = 0;
      lVar42 = 0;
      unaff_x21 = (undefined ********)(long)(int)pppppppuVar25;
      lVar46 = 8;
      ppppppppuStack_1c8 = (undefined ********)(long)iVar19;
      do {
        _memcpy((code *)((long)appppppppuStack_e0[1] + lVar26),
                *(undefined8 *)((long)pppppppuVar20 + lVar46),unaff_x21);
        lVar42 = lVar42 + 1;
        unaff_x20 = (undefined ********)*ppppppppuVar18;
        pppppppuVar20 = unaff_x20[(long)(int)ppppppppuStack_1c8 * 3];
        lVar46 = lVar46 + 0x38;
        lVar26 = lVar26 + (long)unaff_x21;
        unaff_x28 = ppppppppuVar18;
      } while (lVar42 < (int)((ulong)((long)(unaff_x20 + (long)(int)ppppppppuStack_1c8 * 3)[1] -
                                     (long)pppppppuVar20) >> 3) * -0x49249249);
    }
    ppppppppuVar18 = (undefined ********)appppppppuStack_e0;
    ppppppppuVar17 = (undefined ********)0x1;
    FUN_10969284c(unaff_x20 + (long)(int)ppppppppuStack_1c0 * 3);
    ppppppppuVar27 = appppppppuStack_e0[6];
    if (appppppppuStack_e0[6] != (undefined ********)0x0) {
      ppppppppuVar45 = appppppppuStack_e0[6] + 1;
      do {
        pppppppuVar20 = *ppppppppuVar45;
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ppppppppuVar45,0x10);
        if (bVar12) {
          *ppppppppuVar45 = (undefined *******)((long)pppppppuVar20 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (pppppppuVar20 == (undefined *******)0x0) {
        (*(code *)(*appppppppuStack_e0[6])[2])(appppppppuStack_e0[6]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppppuVar27);
      }
    }
    if (appppppppuStack_e0[2] != (undefined ********)0x0) {
      appppppppuStack_e0[3] = appppppppuStack_e0[2];
      __ZdlPv();
    }
    if (pcStack_100 == (code *)0x0) goto LAB_109691fc4;
    ppppppppuStack_f8 = (undefined ********)pcStack_100;
    goto LAB_109691fc0;
  }
  if (uVar38 == 5) goto LAB_109690e6c;
  if (uVar38 == 0) {
    if (ppppuVar44[2] == ppppuVar44[3]) {
      unaff_x28 = (undefined ********)0x1;
    }
    else {
      unaff_x28 = (undefined ********)0x1;
      pppuVar14 = ppppuVar44[2];
      do {
        pppuVar24 = (undefined ***)((long)pppuVar14 + 4);
        uVar41 = (int)((ulong)((long)(*ppppppppuStack_1f0 +
                                     (long)*(int *)pppppuStack_208[1]
                                                   [(long)*(int *)pppuVar14 * 8 + 5] * 3)[1] -
                              (long)(*ppppppppuStack_1f0)
                                    [(long)*(int *)pppppuStack_208[1]
                                                   [(long)*(int *)pppuVar14 * 8 + 5] * 3]) >> 3) *
                 -0x49249249;
        uVar38 = (uint)unaff_x28;
        if ((int)(uint)unaff_x28 <= (int)uVar41) {
          uVar38 = uVar41;
        }
        unaff_x28 = (undefined ********)(ulong)uVar38;
        pppuVar14 = pppuVar24;
      } while (pppuVar24 != ppppuVar44[3]);
    }
    iVar19 = (int)unaff_x28;
    if (iStack_14c <= iVar19) {
      iStack_14c = iVar19;
    }
    if (*(int *)(ppppuVar44[1][2] + 1) != 2) {
      uVar38 = *(uint *)ppppuVar44[5];
      if (((int)uVar38 < 0) ||
         ((int)((ulong)((long)ppppppuStack_238[6] - (long)ppppppuStack_238[5]) >> 3) * -0x55555555
          <= (int)uVar38)) {
        func_0x000105688514(&UNK_10f57bded);
LAB_109692088:
                    /* WARNING: Does not return */
        pcVar43 = (code *)SoftwareBreakpoint(1,0x10969208c);
        (*pcVar43)();
      }
      ppppppppuVar17 = unaff_x28;
      func_0x000109681b04(ppppppuStack_238[5] + (ulong)uVar38 * 3);
    }
    if ((param_1[1][0x12] == (undefined *****)0x0) ||
       ((int)((ulong)((long)(*ppppppppuStack_1f0 + (long)*(int *)ppppuVar44[5] * 3)[1] -
                     (long)(*ppppppppuStack_1f0)[(long)*(int *)ppppuVar44[5] * 3]) >> 3) *
        -0x49249249 == 1)) {
      FUN_109692328(&pppppppuStack_198);
      unaff_x20 = (undefined ********)0x0;
      do {
        if (((iVar19 == 1) || (ppppppppuStack_210[1] < (undefined *******)0x2)) ||
           (((ulong)(*ppppppppuStack_210)[(ulong)unaff_x20 >> 6] >> ((ulong)unaff_x20 & 0x3f) & 1)
            != 0)) {
          pppuVar14 = ppppuVar44[5];
          if (0 < (int)((ulong)((long)ppppuVar44[6] - (long)pppuVar14) >> 2)) {
            lVar42 = 0;
            pppppppuVar20 = *ppppppppuStack_1f0;
            do {
              ppppppuVar37 = pppppppuVar20[(long)*(int *)((long)pppuVar14 + lVar42 * 4) * 3];
              ppppppppuVar18 = (undefined ********)0x0;
              if ((long)(pppppppuVar20 + (long)*(int *)((long)pppuVar14 + lVar42 * 4) * 3)[1] -
                  (long)ppppppuVar37 != 0x38) {
                ppppppppuVar18 = unaff_x20;
              }
              appppppppuStack_e0[lVar42] =
                   (undefined ********)(ppppppuVar37 + (long)ppppppppuVar18 * 7);
              lVar42 = lVar42 + 1;
              pppuVar14 = ppppuVar44[5];
            } while (lVar42 < (int)((ulong)((long)ppppuVar44[6] - (long)pppuVar14) >> 2));
          }
          ppppppppuVar17 = (undefined ********)(ulong)uStack_19c;
          ppppppppuVar18 = (undefined ********)((long)param_1[1] + 0x14);
          FUN_109681724(pppppuStack_208,ppppppppuVar17,ppppppppuVar18,appppppppuStack_e0);
        }
        unaff_x20 = (undefined ********)((long)unaff_x20 + 1);
        unaff_x21 = unaff_x28;
      } while (unaff_x20 != unaff_x28);
    }
    else {
      ppppppppuVar17 = (undefined ********)&uStack_19c;
      FUN_10923b3a0(&pppppppuStack_130);
    }
  }
  goto LAB_109691fc4;
LAB_109691f74:
  ppppppuVar37 = param_1[1] + 0xb;
  ppppppppuVar18 = (undefined ********)auStack_e4;
  FUN_109693bb8(ppppppuVar37,ppppppppuStack_1f8);
  ppppppppuVar17 = (undefined ********)&uStack_e8;
  FUN_10923b3a0(ppppppuVar37 + 5);
LAB_109691fb0:
  uStack_19c = (uint)uStack_1e8;
  if (pppppppuStack_1b8 != (undefined *******)0x0) {
LAB_109691fc0:
    __ZdlPv();
  }
LAB_109691fc4:
  unaff_x27 = 0xb6db6db7;
  unaff_x26 = (undefined *******)0x6db6db6db6db6db7;
  unaff_x25 = (undefined *******)0x38;
  unaff_x23 = 0x18;
  uStack_19c = uStack_19c + 1;
  param_3 = (undefined ********)(ulong)uStack_19c;
  if (iStack_22c <= (int)uStack_19c) goto LAB_109692000;
  goto LAB_109690d0c;
}



/* Entry: 10969219c; end: 109692327;  */

void FUN_10969219c(undefined ***param_1,undefined ****param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  int *piVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  int *piVar7;
  undefined *puVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ****ppppuVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  undefined ***pppuVar20;
  undefined **ppuVar21;
  ulong uVar22;
  undefined **ppuVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  code *pcVar30;
  undefined ***unaff_x22;
  ulong unaff_x23;
  undefined ****ppppuVar31;
  undefined ****unaff_x24;
  undefined ****unaff_x25;
  undefined ****unaff_x26;
  undefined1 auVar32 [16];
  long alStack_308 [3];
  undefined1 uStack_2e9;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  int *piStack_2d0;
  int *piStack_2c8;
  undefined8 uStack_2c0;
  long alStack_2b8 [3];
  undefined8 uStack_2a0;
  undefined ****ppppuStack_298;
  undefined **ppuStack_290;
  undefined ***pppuStack_288;
  undefined1 ***pppuStack_280;
  code *pcStack_278;
  undefined ****ppppuStack_270;
  undefined ****ppppuStack_268;
  undefined ****ppppuStack_260;
  ulong uStack_258;
  undefined ***pppuStack_250;
  undefined ***pppuStack_248;
  undefined ***pppuStack_240;
  undefined ***pppuStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  undefined **ppuStack_220;
  long lStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined ***pppuStack_1f8;
  char cStack_1f0;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  int iStack_1e0;
  uint uStack_1dc;
  undefined ***pppuStack_1d8;
  undefined ***pppuStack_1d0;
  undefined1 *puStack_1c8;
  uint *puStack_1c0;
  uint *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined ***pppuStack_1a8;
  undefined ***pppuStack_1a0;
  uint uStack_198;
  uint uStack_194;
  undefined **ppuStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined ***apppuStack_150 [5];
  uint *puStack_128;
  uint *puStack_120;
  undefined8 *puStack_118;
  int iStack_110;
  long lStack_e8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined ***pppuStack_48;
  
  ppuVar23 = param_1[1];
  if (ppuVar23 < param_1[2]) {
    *ppuVar23 = (undefined *)0x0;
    ppuVar23[1] = (undefined *)0x0;
    ppuVar23[2] = (undefined *)0x0;
    FUN_109682858(ppuVar23,*param_2,param_2[1],
                  ((long)param_2[1] - (long)*param_2 >> 3) * 0x6db6db6db6db6db7);
    ppuVar23 = ppuVar23 + 3;
    param_1[1] = ppuVar23;
  }
  else {
    pcVar30 = (code *)((long)ppuVar23 - (long)*param_1);
    ppuVar23 = (undefined **)(((long)pcVar30 >> 3) * -0x5555555555555555 + 1);
    if ((undefined **)0xaaaaaaaaaaaaaaa < ppuVar23) {
      FUN_1096933f8();
      func_0x0001096934cc(&ppuStack_68);
      pppuVar13 = param_1;
      __Unwind_Resume();
      pcStack_78 = FUN_109692328;
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar23 = pppuVar13[3];
      pppuVar14 = pppuVar13;
      puStack_80 = &stack0xfffffffffffffff0;
      if (*ppuVar23 != ppuVar23[1]) {
        ppuVar21 = *pppuVar13;
        if ((pppuVar13[7] == (undefined **)0x1) &&
           (param_2 = (undefined ****)(long)*(int *)pppuVar13[5],
           (int)((ulong)((long)pppuVar13[4][1] - (long)*pppuVar13[4]) >> 2) < *(int *)pppuVar13[5]))
        {
          func_0x000107c27e9c();
          iVar16 = (int)((ulong)((long)pppuVar13[4][1] - (long)*pppuVar13[4]) >> 2);
          apppuStack_150[0] = (undefined ***)CONCAT44(apppuStack_150[0]._4_4_,iVar16);
          if (iVar16 < *(int *)pppuVar13[5]) {
            do {
              param_2 = apppuStack_150;
              FUN_10923b3a0(pppuVar13[4]);
              iVar16 = (int)apppuStack_150[0] + 1;
              apppuStack_150[0] = (undefined ***)CONCAT44(apppuStack_150[0]._4_4_,iVar16);
            } while (iVar16 < *(int *)pppuVar13[5]);
          }
          ppuVar23 = pppuVar13[3];
        }
        ppuStack_200 = pppuVar13[4];
        unaff_x22 = (undefined ***)*ppuStack_200;
        puVar6 = ppuStack_200[1];
        auVar32 = NEON_ext(*(undefined1 (*) [16])(pppuVar13 + 1),
                           *(undefined1 (*) [16])(pppuVar13 + 1),8,1);
        plStack_210 = auVar32._8_8_;
        lStack_218 = auVar32._0_8_;
        ppuStack_220 = ppuVar21;
        ppuStack_208 = ppuVar23;
        if (*(long *)(ppuVar21[1] + 0x90) == 0) {
          param_2 = (undefined ****)0x1;
          FUN_1096c6f08(&ppuStack_190);
        }
        else {
          lStack_188 = *(long *)(ppuVar21[1] + 0x90);
          if (lStack_188 != 0) {
            piVar17 = (int *)(lStack_188 + -8);
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar11) {
                *piVar17 = *piVar17 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          ppuStack_190 = &PTR_FUN_110b00e00;
        }
        pcVar30 = (code *)((ulong)((long)puVar6 - (long)unaff_x22) >> 2);
        param_1 = (undefined ***)
                  ((ulong)(*(long *)(lStack_188 + 0x90) - *(long *)(lStack_188 + 0x88)) >> 3);
        uVar28 = (uint)param_1;
        uVar29 = (uint)pcVar30;
        if (uVar28 == 1) {
          if (uVar29 != 0) {
            param_1 = (undefined ***)0x0;
            pcVar30 = (code *)((ulong)((long)puVar6 - (long)unaff_x22) >> 2 & 0xffffffff);
            unaff_x22 = (undefined ***)0x18;
            unaff_x23 = 0x38;
            unaff_x24 = apppuStack_150;
            do {
              ppuVar23 = ppuStack_220;
              unaff_x26 = (undefined ****)ppuStack_208[1];
              for (unaff_x25 = (undefined ****)*ppuStack_208; unaff_x25 != unaff_x26;
                  unaff_x25 = (undefined ****)((long)unaff_x25 + 4)) {
                param_2 = (undefined ****)(long)*(int *)unaff_x25;
                lVar18 = *(long *)(lStack_218 + 8) + (long)param_2 * 0x40;
                lVar24 = *(long *)(lVar18 + 0x28);
                if (0 < (int)((ulong)(*(long *)(lVar18 + 0x30) - lVar24) >> 2)) {
                  lVar19 = 0;
                  iVar16 = *(int *)(*ppuStack_200 + (long)param_1 * 4);
                  do {
                    plVar25 = (long *)(*plStack_210 + (long)*(int *)(lVar24 + lVar19 * 4) * 0x18);
                    lVar3 = *plVar25;
                    lVar24 = 0;
                    if (plVar25[1] - lVar3 != 0x38) {
                      lVar24 = (long)iVar16;
                    }
                    unaff_x24[lVar19] = (undefined ***)(lVar3 + lVar24 * 0x38);
                    lVar19 = lVar19 + 1;
                    lVar24 = *(long *)(lVar18 + 0x28);
                  } while (lVar19 < (int)((ulong)(*(long *)(lVar18 + 0x30) - lVar24) >> 2));
                }
                param_3 = (undefined **)(ppuVar23[1] + 0x14);
                FUN_109681724();
              }
              param_1 = (undefined ***)((long)param_1 + 1);
            } while (param_1 != (undefined ***)pcVar30);
          }
        }
        else if (uVar29 != 0) {
          uVar1 = uVar28;
          if (uVar29 <= uVar28) {
            uVar1 = uVar29;
          }
          unaff_x23 = (ulong)uVar1;
          pppuVar14 = (undefined ***)0x58;
          uStack_198 = uVar1;
          uStack_194 = uVar1;
          __Znwm();
          pppuVar20 = pppuVar14 + 1;
          *pppuVar20 = (undefined **)0x0;
          pppuVar14[2] = (undefined **)0x0;
          *pppuVar14 = &PTR_FUN_110b00d28;
          pppuStack_1d8 = pppuVar14 + 3;
          *pppuStack_1d8 = (undefined **)0x32aaaba7;
          pppuVar14[5] = (undefined **)0x0;
          pppuVar14[4] = (undefined **)0x0;
          pppuVar14[7] = (undefined **)0x0;
          pppuVar14[6] = (undefined **)0x0;
          pppuVar14[9] = (undefined **)0x0;
          pppuVar14[8] = (undefined **)0x0;
          pppuVar14[10] = (undefined **)0x0;
          uStack_1dc = 0;
          if (uVar1 << 5 != 0) {
            uStack_1dc = (uVar29 - 1) / (uVar1 << 5);
          }
          uStack_1dc = uStack_1dc + 1;
          uStack_170 = 0;
          uStack_178 = 0;
          uStack_160 = 0;
          uStack_168 = 0;
          uStack_180 = 0x3cb0b1bb;
          uStack_158 = 0;
          uStack_1e8 = 0;
          uVar12 = 0;
          if (uStack_1dc != 0) {
            uVar12 = (uVar29 - 1) / uStack_1dc;
          }
          iStack_1e0 = uVar12 + 1;
          unaff_x24 = (undefined ****)&uStack_1e8;
          do {
            cVar10 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
            if (bVar11) {
              *pppuVar20 = (undefined **)((long)*pppuVar20 + 1);
              cVar10 = ExclusiveMonitorsStatus();
            }
            puVar6 = PTR___ZSt7nothrow_1103469d8;
          } while (cVar10 != '\0');
          puStack_1c0 = &uStack_194;
          puStack_1b8 = &uStack_198;
          puStack_1b0 = &uStack_180;
          uStack_1e4 = uVar29;
          pppuStack_1d0 = pppuVar14;
          puStack_1c8 = (undefined1 *)&ppuStack_220;
          pppuStack_1a8 = pppuStack_1d8;
          pppuStack_1a0 = pppuVar14;
          if (uVar28 != 0) {
            unaff_x26 = (undefined ****)0x0;
            unaff_x25 = apppuStack_150;
            pcVar30 = FUN_109693638;
            puStack_1c8 = (undefined1 *)&ppuStack_220;
            do {
              unaff_x22 = pppuStack_1d0;
              pppuVar14 = pppuStack_1d8;
              apppuStack_150[0] = (undefined ***)CONCAT44(uStack_1e4,uStack_1e8);
              apppuStack_150[1] = (undefined ***)CONCAT44(uStack_1dc,iStack_1e0);
              apppuStack_150[2] = pppuStack_1d8;
              apppuStack_150[3] = pppuStack_1d0;
              if (pppuStack_1d0 != (undefined ***)0x0) {
                pppuVar20 = pppuStack_1d0 + 1;
                do {
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
                  if (bVar11) {
                    *pppuVar20 = (undefined **)((long)*pppuVar20 + 1);
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
              }
              puStack_128 = puStack_1c0;
              apppuStack_150[4] = (undefined ***)puStack_1c8;
              puStack_118 = puStack_1b0;
              puStack_120 = puStack_1b8;
              iVar16 = (int)unaff_x26;
              param_3 = (undefined **)0x48;
              iStack_110 = iVar16;
              __ZnwmRKSt9nothrow_t(0x48,puVar6);
              if (param_3 != (undefined **)0x0) {
                param_3[1] = (undefined *)CONCAT44(uStack_1dc,iStack_1e0);
                *param_3 = (undefined *)CONCAT44(uStack_1e4,uStack_1e8);
                param_3[2] = (undefined *)pppuVar14;
                param_3[3] = (undefined *)unaff_x22;
                apppuStack_150[2] = (undefined ***)0x0;
                apppuStack_150[3] = (undefined ***)0x0;
                param_3[5] = (undefined *)puStack_1c0;
                param_3[4] = puStack_1c8;
                param_3[7] = (undefined *)puStack_1b0;
                param_3[6] = (undefined *)puStack_1b8;
                *(int *)(param_3 + 8) = iVar16;
                unaff_x22 = (undefined ***)0x0;
              }
              param_2 = (undefined ****)pcVar30;
              FUN_1096c71f0(&ppuStack_190);
              if (unaff_x22 != (undefined ***)0x0) {
                pppuVar14 = unaff_x22 + 1;
                do {
                  ppuVar23 = *pppuVar14;
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
                  if (bVar11) {
                    *pppuVar14 = (undefined **)((long)ppuVar23 + -1);
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                if (ppuVar23 == (undefined **)0x0) {
                  (*(code *)(*unaff_x22)[2])(unaff_x22);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
                }
              }
              unaff_x26 = (undefined ****)(ulong)(iVar16 + 1U);
            } while (iVar16 + 1U != uVar1);
          }
          cStack_1f0 = '\x01';
          pppuStack_1f8 = pppuStack_1a8;
          __ZNSt3__15mutex4lockEv();
          while (uStack_198 != 0) {
            param_2 = &pppuStack_1f8;
            __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(&uStack_180);
          }
          if (cStack_1f0 == '\x01') {
            __ZNSt3__15mutex6unlockEv(pppuStack_1f8);
          }
          pppuVar14 = pppuStack_1d0;
          if (pppuStack_1d0 != (undefined ***)0x0) {
            pppuVar20 = pppuStack_1d0 + 1;
            do {
              ppuVar23 = *pppuVar20;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
              if (bVar11) {
                *pppuVar20 = (undefined **)((long)ppuVar23 + -1);
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (ppuVar23 == (undefined **)0x0) {
              (*(code *)(*pppuStack_1d0)[2])(pppuStack_1d0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar14);
            }
          }
          __ZNSt3__118condition_variableD1Ev(&uStack_180);
          param_1 = pppuStack_1a0;
          if (pppuStack_1a0 != (undefined ***)0x0) {
            pppuVar14 = pppuStack_1a0 + 1;
            do {
              ppuVar23 = *pppuVar14;
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
              if (bVar11) {
                *pppuVar14 = (undefined **)((long)ppuVar23 + -1);
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (ppuVar23 == (undefined **)0x0) {
              (*(code *)(*pppuStack_1a0)[2])(pppuStack_1a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
            }
          }
        }
        ppuStack_190 = &PTR_FUN_110b01d60;
        pppuVar14 = &ppuStack_190;
        func_0x000107c2acd4();
        pppuVar13[3][1] = *pppuVar13[3];
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
        ___stack_chk_fail();
        FUN_109693808(unaff_x24 + 2);
        __ZNSt3__118condition_variableD1Ev(&uStack_180);
        FUN_109693808(&pppuStack_1a8);
        FUN_109696618(&ppuStack_190);
        pppuVar13 = pppuVar14;
        __Unwind_Resume();
        pcStack_228 = FUN_10969284c;
        ppuVar23 = *pppuVar13;
        ppppuStack_270 = unaff_x26;
        ppppuStack_268 = unaff_x25;
        ppppuStack_260 = unaff_x24;
        uStack_258 = unaff_x23;
        pppuStack_250 = unaff_x22;
        pppuStack_248 = (undefined ***)pcVar30;
        pppuStack_240 = param_1;
        pppuStack_238 = pppuVar14;
        ppuStack_230 = &puStack_80;
        if ((undefined ****)(((long)pppuVar13[2] - (long)ppuVar23 >> 3) * 0x6db6db6db6db6db7) <
            param_2) {
          pppuVar14 = pppuVar13;
          ppppuVar15 = param_2;
          FUN_1096833dc();
          if ((undefined ****)0x492492492492492 < param_2) {
            FUN_109682680();
            pppuVar13[1] = (undefined **)0x6db6db6db6db6db7;
            __Unwind_Resume();
            uStack_2a0 = 0x6db6db6db6db6db7;
            pcStack_278 = FUN_109692a10;
            ppppuStack_298 = param_2;
            ppuStack_290 = param_3;
            pppuStack_288 = pppuVar13;
            pppuStack_280 = &ppuStack_230;
            FUN_1096908b8();
            func_0x00010737fadc(alStack_2b8,(long)*(int *)(pppuVar14[1] + 2));
            piStack_2d0 = (int *)0x0;
            piStack_2c8 = (int *)0x0;
            uStack_2c0 = 0;
            pppuVar13 = *ppppuVar15;
            pppuVar20 = ppppuVar15[1];
            if (pppuVar13 != pppuVar20) {
              do {
                iVar16 = *(int *)(pppuVar13 + 1);
                if (iVar16 != -1) {
                  uVar26 = (ulong)(long)iVar16 >> 3 & 0x1ffffffffffffff8;
                  *(ulong *)(alStack_2b8[0] + uVar26) =
                       *(ulong *)(alStack_2b8[0] + uVar26) | 1L << ((long)iVar16 & 0x3fU);
                  uStack_2e8 = CONCAT44(uStack_2e8._4_4_,iVar16);
                  FUN_1092d7128(&piStack_2d0,&uStack_2e8);
                }
                pppuVar13 = pppuVar13 + 2;
              } while (pppuVar13 != pppuVar20);
              piVar17 = piStack_2d0;
              if (piStack_2d0 != piStack_2c8) {
                do {
                  piStack_2c8 = piStack_2c8 + -1;
                  lVar18 = *(long *)(pppuVar14[1][1] + 8) + (long)*piStack_2c8 * 0x40;
                  piVar7 = *(int **)(lVar18 + 0x18);
                  for (piVar4 = *(int **)(lVar18 + 0x10); piVar4 != piVar7; piVar4 = piVar4 + 1) {
                    iVar16 = *piVar4;
                    uStack_2e8._4_4_ = (undefined4)((ulong)uStack_2e8 >> 0x20);
                    uStack_2e8 = CONCAT44(uStack_2e8._4_4_,iVar16);
                    uVar26 = (ulong)(long)iVar16 >> 6;
                    uVar22 = 1L << ((long)iVar16 & 0x3fU);
                    uVar27 = *(ulong *)(alStack_2b8[0] + uVar26 * 8);
                    if ((uVar22 & uVar27) == 0) {
                      *(ulong *)(alStack_2b8[0] + uVar26 * 8) = uVar27 | uVar22;
                      FUN_10923b3a0(&piStack_2d0,&uStack_2e8);
                    }
                    piVar17 = piStack_2d0;
                  }
                } while (piVar17 != piStack_2c8);
              }
            }
            puVar6 = pppuVar14[1][5];
            puVar8 = pppuVar14[1][6];
            uStack_2e9 = 1;
            lVar18 = 8;
            __Znwm();
            uStack_2d8 = 1;
            uStack_2e0 = 0;
            uStack_2e8 = lVar18;
            func_0x0001077df0d0(&uStack_2e8,&uStack_2e9,&uStack_2e8,1);
            uVar9 = *(undefined4 *)(pppuVar14[1] + 2);
            func_0x000105007b50(alStack_308,&uStack_2e8);
            FUN_109690be4(pppuVar14,alStack_2b8,0,uVar9,alStack_308);
            if (alStack_308[0] != 0) {
              __ZdlPv();
            }
            FUN_109692c74(pppuVar14[1] + 5,((long)puVar8 - (long)puVar6 >> 3) * -0x5555555555555555)
            ;
            ppuVar23 = pppuVar14[1];
            ppuVar21 = ppuVar23 + 0xc;
            func_0x000109693af8(ppuVar23 + 0xb,*ppuVar21);
            *ppuVar21 = (undefined *)0x0;
            ppuVar23[0xd] = (undefined *)0x0;
            ppuVar23[0xb] = (undefined *)ppuVar21;
            func_0x000109692d08(pppuVar14[1] + 0xe);
            if (uStack_2e8 != 0) {
              __ZdlPv();
            }
            if (piStack_2d0 != (int *)0x0) {
              piStack_2c8 = piStack_2d0;
              __ZdlPv();
            }
            if (alStack_2b8[0] != 0) {
              __ZdlPv();
            }
            return;
          }
          lVar18 = (long)pppuVar13[2] - (long)*pppuVar13 >> 3;
          ppppuVar15 = (undefined ****)(lVar18 * -0x2492492492492492);
          if (ppppuVar15 < param_2 || (long)ppppuVar15 - (long)param_2 == 0) {
            ppppuVar15 = param_2;
          }
          if (0x249249249249248 < (ulong)(lVar18 * 0x6db6db6db6db6db7)) {
            ppppuVar15 = (undefined ****)0x492492492492492;
          }
          FUN_1096828dc(pppuVar13,ppppuVar15);
          ppuVar21 = pppuVar13[1];
          lVar18 = (long)param_2 * 0x38;
          ppuVar23 = ppuVar21 + (long)param_2 * 7;
          do {
            FUN_109682614(ppuVar21,param_3);
            ppuVar21 = ppuVar21 + 7;
            lVar18 = lVar18 + -0x38;
          } while (lVar18 != 0);
        }
        else {
          lVar18 = (long)pppuVar13[1] - (long)ppuVar23 >> 3;
          ppppuVar31 = (undefined ****)(lVar18 * 0x6db6db6db6db6db7);
          ppppuVar15 = ppppuVar31;
          if (param_2 <= ppppuVar31) {
            ppppuVar15 = param_2;
          }
          if (ppppuVar15 != (undefined ****)0x0) {
            ppuVar23 = ppuVar23 + 2;
            do {
              puVar6 = *param_3;
              ppuVar23[-1] = param_3[1];
              ppuVar23[-2] = puVar6;
              if (ppuVar23 + -2 != param_3) {
                FUN_10928555c(ppuVar23,param_3[2],param_3[3],
                              (long)param_3[3] - (long)param_3[2] >> 2);
              }
              FUN_1096822fc(ppuVar23 + 3,param_3 + 5);
              ppuVar23 = ppuVar23 + 7;
              ppppuVar15 = (undefined ****)((long)ppppuVar15 + -1);
            } while (ppppuVar15 != (undefined ****)0x0);
          }
          pcVar30 = (code *)((long)param_2 + lVar18 * -0x6db6db6db6db6db7);
          if (ppppuVar31 <= param_2 && pcVar30 != (code *)0x0) {
            ppuVar23 = pppuVar13[1];
            ppuVar21 = ppuVar23 + (long)pcVar30 * 7;
            lVar18 = (long)param_2 * 0x38 + lVar18 * -8;
            do {
              FUN_109682614(ppuVar23,param_3);
              ppuVar23 = ppuVar23 + 7;
              lVar18 = lVar18 + -0x38;
            } while (lVar18 != 0);
            pppuVar13[1] = ppuVar21;
            return;
          }
          ppuVar21 = pppuVar13[1];
          ppuVar23 = *pppuVar13 + (long)param_2 * 7;
          while (ppuVar21 != ppuVar23) {
            ppuVar21 = ppuVar21 + -7;
            func_0x000109682760(ppuVar21);
          }
        }
        pppuVar13[1] = ppuVar23;
        return;
      }
      return;
    }
    lVar18 = (long)param_1[2] - (long)*param_1 >> 3;
    ppuVar21 = (undefined **)(lVar18 * 0x5555555555555556);
    if (ppuVar21 < ppuVar23 || (long)ppuVar21 - (long)ppuVar23 == 0) {
      ppuVar21 = ppuVar23;
    }
    if (0x555555555555554 < (ulong)(lVar18 * -0x5555555555555555)) {
      ppuVar21 = (undefined **)0xaaaaaaaaaaaaaaa;
    }
    pppuStack_48 = param_1;
    if (ppuVar21 == (undefined **)0x0) {
      ppppuVar15 = (undefined ****)0x0;
    }
    else {
      ppppuVar15 = param_2;
      FUN_10969340c();
    }
    pcVar30 = (code *)((long)ppuVar21 + (long)pcVar30);
    *(undefined8 *)(pcVar30 + 8) = 0;
    *(undefined8 *)(pcVar30 + 0x10) = 0;
    *(undefined8 *)pcVar30 = 0;
    ppuStack_68 = ppuVar21;
    ppuStack_60 = (undefined **)pcVar30;
    ppuStack_58 = (undefined **)pcVar30;
    ppuStack_50 = ppuVar21 + (long)ppppuVar15 * 3;
    FUN_109682858(pcVar30,*param_2,param_2[1],
                  ((long)param_2[1] - (long)*param_2 >> 3) * 0x6db6db6db6db6db7);
    ppuVar23 = (undefined **)(pcVar30 + 0x18);
    ppuVar2 = *param_1;
    ppuVar5 = param_1[1];
    func_0x000109693450(ppuVar2,ppuVar5,pcVar30 + ((long)ppuVar2 - (long)ppuVar5));
    ppuStack_68 = *param_1;
    *param_1 = (undefined **)(pcVar30 + ((long)ppuVar2 - (long)ppuVar5));
    param_1[1] = ppuVar23;
    ppuStack_50 = param_1[2];
    param_1[2] = ppuVar21 + (long)ppppuVar15 * 3;
    ppuStack_60 = ppuStack_68;
    ppuStack_58 = ppuStack_68;
    func_0x0001096934cc(&ppuStack_68);
  }
  param_1[1] = ppuVar23;
  return;
}



/* Entry: 109692328; end: 10969284b;  */

void FUN_109692328(undefined ***param_1,code **param_2,undefined **param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined *puVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  code *pcVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  int iVar14;
  undefined **ppuVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  code **ppcVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  code *unaff_x20;
  undefined **ppuVar27;
  uint uVar28;
  code *unaff_x21;
  code *unaff_x22;
  ulong unaff_x23;
  code **ppcVar29;
  code **unaff_x24;
  code **unaff_x25;
  code **unaff_x26;
  undefined1 auVar30 [16];
  long alStack_298 [3];
  undefined1 uStack_279;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  int *piStack_260;
  int *piStack_258;
  undefined8 uStack_250;
  long alStack_248 [3];
  undefined8 uStack_230;
  code **ppcStack_228;
  undefined **ppuStack_220;
  undefined ***pppuStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  code **ppcStack_200;
  code **ppcStack_1f8;
  code **ppcStack_1f0;
  ulong uStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  code *pcStack_1d0;
  undefined ***pppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  code *pcStack_188;
  char cStack_180;
  undefined4 uStack_178;
  uint uStack_174;
  int iStack_170;
  uint uStack_16c;
  code *pcStack_168;
  code *pcStack_160;
  undefined1 *puStack_158;
  uint *puStack_150;
  uint *puStack_148;
  undefined8 *puStack_140;
  code *pcStack_138;
  code *pcStack_130;
  uint uStack_128;
  uint uStack_124;
  undefined **ppuStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *apcStack_e0 [5];
  uint *puStack_b8;
  uint *puStack_b0;
  undefined8 *puStack_a8;
  int iStack_a0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = param_1[3];
  pppuVar12 = param_1;
  if (*ppuVar15 != ppuVar15[1]) {
    ppuVar27 = *param_1;
    if ((param_1[7] == (undefined **)0x1) &&
       (param_2 = (code **)(long)*(int *)param_1[5],
       (int)((ulong)((long)param_1[4][1] - (long)*param_1[4]) >> 2) < *(int *)param_1[5])) {
      func_0x000107c27e9c();
      iVar14 = (int)((ulong)((long)param_1[4][1] - (long)*param_1[4]) >> 2);
      apcStack_e0[0] = (code *)CONCAT44(apcStack_e0[0]._4_4_,iVar14);
      if (iVar14 < *(int *)param_1[5]) {
        do {
          param_2 = apcStack_e0;
          FUN_10923b3a0(param_1[4]);
          iVar14 = (int)apcStack_e0[0] + 1;
          apcStack_e0[0] = (code *)CONCAT44(apcStack_e0[0]._4_4_,iVar14);
        } while (iVar14 < *(int *)param_1[5]);
      }
      ppuVar15 = param_1[3];
    }
    ppuStack_190 = param_1[4];
    unaff_x22 = (code *)*ppuStack_190;
    puVar4 = ppuStack_190[1];
    auVar30 = NEON_ext(*(undefined1 (*) [16])(param_1 + 1),*(undefined1 (*) [16])(param_1 + 1),8,1);
    plStack_1a0 = auVar30._8_8_;
    lStack_1a8 = auVar30._0_8_;
    ppuStack_1b0 = ppuVar27;
    ppuStack_198 = ppuVar15;
    if (*(long *)(ppuVar27[1] + 0x90) == 0) {
      param_2 = (code **)0x1;
      FUN_1096c6f08(&ppuStack_120);
    }
    else {
      lStack_118 = *(long *)(ppuVar27[1] + 0x90);
      if (lStack_118 != 0) {
        piVar16 = (int *)(lStack_118 + -8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar9) {
            *piVar16 = *piVar16 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      ppuStack_120 = &PTR_FUN_110b00e00;
    }
    unaff_x21 = (code *)((ulong)((long)puVar4 - (long)unaff_x22) >> 2);
    unaff_x20 = (code *)((ulong)(*(long *)(lStack_118 + 0x90) - *(long *)(lStack_118 + 0x88)) >> 3);
    uVar26 = (uint)unaff_x20;
    uVar28 = (uint)unaff_x21;
    if (uVar26 == 1) {
      if (uVar28 != 0) {
        unaff_x20 = (code *)0x0;
        unaff_x21 = (code *)((ulong)((long)puVar4 - (long)unaff_x22) >> 2 & 0xffffffff);
        unaff_x22 = (code *)0x18;
        unaff_x23 = 0x38;
        unaff_x24 = apcStack_e0;
        do {
          ppuVar15 = ppuStack_1b0;
          unaff_x26 = (code **)ppuStack_198[1];
          for (unaff_x25 = (code **)*ppuStack_198; unaff_x25 != unaff_x26;
              unaff_x25 = (code **)((long)unaff_x25 + 4)) {
            param_2 = (code **)(long)*(int *)unaff_x25;
            lVar17 = *(long *)(lStack_1a8 + 8) + (long)param_2 * 0x40;
            lVar22 = *(long *)(lVar17 + 0x28);
            if (0 < (int)((ulong)(*(long *)(lVar17 + 0x30) - lVar22) >> 2)) {
              lVar18 = 0;
              iVar14 = *(int *)(*ppuStack_190 + (long)unaff_x20 * 4);
              do {
                plVar23 = (long *)(*plStack_1a0 + (long)*(int *)(lVar22 + lVar18 * 4) * 0x18);
                lVar2 = *plVar23;
                lVar22 = 0;
                if (plVar23[1] - lVar2 != 0x38) {
                  lVar22 = (long)iVar14;
                }
                unaff_x24[lVar18] = (code *)(lVar2 + lVar22 * 0x38);
                lVar18 = lVar18 + 1;
                lVar22 = *(long *)(lVar17 + 0x28);
              } while (lVar18 < (int)((ulong)(*(long *)(lVar17 + 0x30) - lVar22) >> 2));
            }
            param_3 = (undefined **)(ppuVar15[1] + 0x14);
            FUN_109681724();
          }
          unaff_x20 = unaff_x20 + 1;
        } while (unaff_x20 != unaff_x21);
      }
    }
    else if (uVar28 != 0) {
      uVar1 = uVar26;
      if (uVar28 <= uVar26) {
        uVar1 = uVar28;
      }
      unaff_x23 = (ulong)uVar1;
      pcVar11 = (code *)0x58;
      uStack_128 = uVar1;
      uStack_124 = uVar1;
      __Znwm();
      pcVar19 = pcVar11 + 8;
      *(long *)pcVar19 = 0;
      *(undefined8 *)(pcVar11 + 0x10) = 0;
      *(undefined ***)pcVar11 = &PTR_FUN_110b00d28;
      pcStack_168 = pcVar11 + 0x18;
      *(undefined8 *)pcStack_168 = 0x32aaaba7;
      *(undefined8 *)(pcVar11 + 0x28) = 0;
      *(undefined8 *)(pcVar11 + 0x20) = 0;
      *(undefined8 *)(pcVar11 + 0x38) = 0;
      *(undefined8 *)(pcVar11 + 0x30) = 0;
      *(undefined8 *)(pcVar11 + 0x48) = 0;
      *(undefined8 *)(pcVar11 + 0x40) = 0;
      *(undefined8 *)(pcVar11 + 0x50) = 0;
      uStack_16c = 0;
      if (uVar1 << 5 != 0) {
        uStack_16c = (uVar28 - 1) / (uVar1 << 5);
      }
      uStack_16c = uStack_16c + 1;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_110 = 0x3cb0b1bb;
      uStack_e8 = 0;
      uStack_178 = 0;
      uVar10 = 0;
      if (uStack_16c != 0) {
        uVar10 = (uVar28 - 1) / uStack_16c;
      }
      iStack_170 = uVar10 + 1;
      unaff_x24 = (code **)&uStack_178;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcVar19,0x10);
        if (bVar9) {
          *(long *)pcVar19 = *(long *)pcVar19 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        puVar4 = PTR___ZSt7nothrow_1103469d8;
      } while (cVar8 != '\0');
      puStack_150 = &uStack_124;
      puStack_148 = &uStack_128;
      puStack_140 = &uStack_110;
      uStack_174 = uVar28;
      pcStack_160 = pcVar11;
      puStack_158 = (undefined1 *)&ppuStack_1b0;
      pcStack_138 = pcStack_168;
      pcStack_130 = pcVar11;
      if (uVar26 != 0) {
        unaff_x26 = (code **)0x0;
        unaff_x25 = apcStack_e0;
        unaff_x21 = FUN_109693638;
        puStack_158 = (undefined1 *)&ppuStack_1b0;
        do {
          unaff_x22 = pcStack_160;
          pcVar11 = pcStack_168;
          apcStack_e0[0] = (code *)CONCAT44(uStack_174,uStack_178);
          apcStack_e0[1] = (code *)CONCAT44(uStack_16c,iStack_170);
          apcStack_e0[2] = pcStack_168;
          apcStack_e0[3] = pcStack_160;
          if (pcStack_160 != (code *)0x0) {
            pcVar19 = pcStack_160 + 8;
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pcVar19,0x10);
              if (bVar9) {
                *(long *)pcVar19 = *(long *)pcVar19 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          puStack_b8 = puStack_150;
          apcStack_e0[4] = (code *)puStack_158;
          puStack_a8 = puStack_140;
          puStack_b0 = puStack_148;
          iVar14 = (int)unaff_x26;
          param_3 = (undefined **)0x48;
          iStack_a0 = iVar14;
          __ZnwmRKSt9nothrow_t(0x48,puVar4);
          if (param_3 != (undefined **)0x0) {
            param_3[1] = (undefined *)CONCAT44(uStack_16c,iStack_170);
            *param_3 = (undefined *)CONCAT44(uStack_174,uStack_178);
            param_3[2] = pcVar11;
            param_3[3] = unaff_x22;
            apcStack_e0[2] = (code *)0x0;
            apcStack_e0[3] = (code *)0x0;
            param_3[5] = (undefined *)puStack_150;
            param_3[4] = puStack_158;
            param_3[7] = (undefined *)puStack_140;
            param_3[6] = (undefined *)puStack_148;
            *(int *)(param_3 + 8) = iVar14;
            unaff_x22 = (code *)0x0;
          }
          param_2 = (code **)unaff_x21;
          FUN_1096c71f0(&ppuStack_120);
          if (unaff_x22 != (code *)0x0) {
            pcVar11 = unaff_x22 + 8;
            do {
              lVar17 = *(long *)pcVar11;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
              if (bVar9) {
                *(long *)pcVar11 = lVar17 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar17 == 0) {
              (**(code **)(*(long *)unaff_x22 + 0x10))(unaff_x22);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
            }
          }
          unaff_x26 = (code **)(ulong)(iVar14 + 1U);
        } while (iVar14 + 1U != uVar1);
      }
      cStack_180 = '\x01';
      pcStack_188 = pcStack_138;
      __ZNSt3__15mutex4lockEv();
      while (uStack_128 != 0) {
        param_2 = &pcStack_188;
        __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(&uStack_110);
      }
      if (cStack_180 == '\x01') {
        __ZNSt3__15mutex6unlockEv(pcStack_188);
      }
      pcVar11 = pcStack_160;
      if (pcStack_160 != (code *)0x0) {
        pcVar19 = pcStack_160 + 8;
        do {
          lVar17 = *(long *)pcVar19;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pcVar19,0x10);
          if (bVar9) {
            *(long *)pcVar19 = lVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*(long *)pcStack_160 + 0x10))(pcStack_160);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar11);
        }
      }
      __ZNSt3__118condition_variableD1Ev(&uStack_110);
      unaff_x20 = pcStack_130;
      if (pcStack_130 != (code *)0x0) {
        pcVar11 = pcStack_130 + 8;
        do {
          lVar17 = *(long *)pcVar11;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar9) {
            *(long *)pcVar11 = lVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*(long *)pcStack_130 + 0x10))(pcStack_130);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
    }
    ppuStack_120 = &PTR_FUN_110b01d60;
    pppuVar12 = &ppuStack_120;
    func_0x000107c2acd4();
    param_1[3][1] = *param_1[3];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    FUN_109693808(unaff_x24 + 2);
    __ZNSt3__118condition_variableD1Ev(&uStack_110);
    FUN_109693808(&pcStack_138);
    FUN_109696618(&ppuStack_120);
    pppuVar13 = pppuVar12;
    __Unwind_Resume();
    pcStack_1b8 = FUN_10969284c;
    ppuVar15 = *pppuVar13;
    ppcStack_200 = unaff_x26;
    ppcStack_1f8 = unaff_x25;
    ppcStack_1f0 = unaff_x24;
    uStack_1e8 = unaff_x23;
    pcStack_1e0 = unaff_x22;
    pcStack_1d8 = unaff_x21;
    pcStack_1d0 = unaff_x20;
    pppuStack_1c8 = pppuVar12;
    puStack_1c0 = &stack0xfffffffffffffff0;
    if ((code **)(((long)pppuVar13[2] - (long)ppuVar15 >> 3) * 0x6db6db6db6db6db7) < param_2) {
      pppuVar12 = pppuVar13;
      ppcVar20 = param_2;
      FUN_1096833dc();
      if ((code **)0x492492492492492 < param_2) {
        FUN_109682680();
        pppuVar13[1] = (undefined **)0x6db6db6db6db6db7;
        __Unwind_Resume();
        uStack_230 = 0x6db6db6db6db6db7;
        pcStack_208 = FUN_109692a10;
        ppcStack_228 = param_2;
        ppuStack_220 = param_3;
        pppuStack_218 = pppuVar13;
        ppuStack_210 = &puStack_1c0;
        FUN_1096908b8();
        func_0x00010737fadc(alStack_248,(long)*(int *)(pppuVar12[1] + 2));
        piStack_260 = (int *)0x0;
        piStack_258 = (int *)0x0;
        uStack_250 = 0;
        pcVar11 = *ppcVar20;
        pcVar19 = ppcVar20[1];
        if (pcVar11 != pcVar19) {
          do {
            iVar14 = *(int *)(pcVar11 + 8);
            if (iVar14 != -1) {
              uVar24 = (ulong)(long)iVar14 >> 3 & 0x1ffffffffffffff8;
              *(ulong *)(alStack_248[0] + uVar24) =
                   *(ulong *)(alStack_248[0] + uVar24) | 1L << ((long)iVar14 & 0x3fU);
              uStack_278 = CONCAT44(uStack_278._4_4_,iVar14);
              FUN_1092d7128(&piStack_260,&uStack_278);
            }
            pcVar11 = pcVar11 + 0x10;
          } while (pcVar11 != pcVar19);
          piVar16 = piStack_260;
          if (piStack_260 != piStack_258) {
            do {
              piStack_258 = piStack_258 + -1;
              lVar17 = *(long *)(pppuVar12[1][1] + 8) + (long)*piStack_258 * 0x40;
              piVar5 = *(int **)(lVar17 + 0x18);
              for (piVar3 = *(int **)(lVar17 + 0x10); piVar3 != piVar5; piVar3 = piVar3 + 1) {
                iVar14 = *piVar3;
                uStack_278._4_4_ = (undefined4)((ulong)uStack_278 >> 0x20);
                uStack_278 = CONCAT44(uStack_278._4_4_,iVar14);
                uVar24 = (ulong)(long)iVar14 >> 6;
                uVar21 = 1L << ((long)iVar14 & 0x3fU);
                uVar25 = *(ulong *)(alStack_248[0] + uVar24 * 8);
                if ((uVar21 & uVar25) == 0) {
                  *(ulong *)(alStack_248[0] + uVar24 * 8) = uVar25 | uVar21;
                  FUN_10923b3a0(&piStack_260,&uStack_278);
                }
                piVar16 = piStack_260;
              }
            } while (piVar16 != piStack_258);
          }
        }
        puVar4 = pppuVar12[1][5];
        puVar6 = pppuVar12[1][6];
        uStack_279 = 1;
        lVar17 = 8;
        __Znwm();
        uStack_268 = 1;
        uStack_270 = 0;
        uStack_278 = lVar17;
        func_0x0001077df0d0(&uStack_278,&uStack_279,&uStack_278,1);
        uVar7 = *(undefined4 *)(pppuVar12[1] + 2);
        func_0x000105007b50(alStack_298,&uStack_278);
        FUN_109690be4(pppuVar12,alStack_248,0,uVar7,alStack_298);
        if (alStack_298[0] != 0) {
          __ZdlPv();
        }
        FUN_109692c74(pppuVar12[1] + 5,((long)puVar6 - (long)puVar4 >> 3) * -0x5555555555555555);
        ppuVar15 = pppuVar12[1];
        ppuVar27 = ppuVar15 + 0xc;
        func_0x000109693af8(ppuVar15 + 0xb,*ppuVar27);
        *ppuVar27 = (undefined *)0x0;
        ppuVar15[0xd] = (undefined *)0x0;
        ppuVar15[0xb] = (undefined *)ppuVar27;
        func_0x000109692d08(pppuVar12[1] + 0xe);
        if (uStack_278 != 0) {
          __ZdlPv();
        }
        if (piStack_260 != (int *)0x0) {
          piStack_258 = piStack_260;
          __ZdlPv();
        }
        if (alStack_248[0] != 0) {
          __ZdlPv();
        }
        return;
      }
      lVar17 = (long)pppuVar13[2] - (long)*pppuVar13 >> 3;
      ppcVar20 = (code **)(lVar17 * -0x2492492492492492);
      if (ppcVar20 < param_2 || (long)ppcVar20 - (long)param_2 == 0) {
        ppcVar20 = param_2;
      }
      if (0x249249249249248 < (ulong)(lVar17 * 0x6db6db6db6db6db7)) {
        ppcVar20 = (code **)0x492492492492492;
      }
      FUN_1096828dc(pppuVar13,ppcVar20);
      ppuVar27 = pppuVar13[1];
      lVar17 = (long)param_2 * 0x38;
      ppuVar15 = ppuVar27 + (long)param_2 * 7;
      do {
        FUN_109682614(ppuVar27,param_3);
        ppuVar27 = ppuVar27 + 7;
        lVar17 = lVar17 + -0x38;
      } while (lVar17 != 0);
    }
    else {
      lVar17 = (long)pppuVar13[1] - (long)ppuVar15 >> 3;
      ppcVar29 = (code **)(lVar17 * 0x6db6db6db6db6db7);
      ppcVar20 = ppcVar29;
      if (param_2 <= ppcVar29) {
        ppcVar20 = param_2;
      }
      if (ppcVar20 != (code **)0x0) {
        ppuVar15 = ppuVar15 + 2;
        do {
          puVar4 = *param_3;
          ppuVar15[-1] = param_3[1];
          ppuVar15[-2] = puVar4;
          if (ppuVar15 + -2 != param_3) {
            FUN_10928555c(ppuVar15,param_3[2],param_3[3],(long)param_3[3] - (long)param_3[2] >> 2);
          }
          FUN_1096822fc(ppuVar15 + 3,param_3 + 5);
          ppuVar15 = ppuVar15 + 7;
          ppcVar20 = (code **)((long)ppcVar20 + -1);
        } while (ppcVar20 != (code **)0x0);
      }
      pcVar11 = (code *)((long)param_2 + lVar17 * -0x6db6db6db6db6db7);
      if (ppcVar29 <= param_2 && pcVar11 != (code *)0x0) {
        ppuVar15 = pppuVar13[1];
        ppuVar27 = ppuVar15 + (long)pcVar11 * 7;
        lVar17 = (long)param_2 * 0x38 + lVar17 * -8;
        do {
          FUN_109682614(ppuVar15,param_3);
          ppuVar15 = ppuVar15 + 7;
          lVar17 = lVar17 + -0x38;
        } while (lVar17 != 0);
        pppuVar13[1] = ppuVar27;
        return;
      }
      ppuVar27 = pppuVar13[1];
      ppuVar15 = *pppuVar13 + (long)param_2 * 7;
      while (ppuVar27 != ppuVar15) {
        ppuVar27 = ppuVar27 + -7;
        func_0x000109682760(ppuVar27);
      }
    }
    pppuVar13[1] = ppuVar15;
    return;
  }
  return;
}



/* Entry: 10969284c; end: 109692a0f;  */

void FUN_10969284c(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long alStack_e8 [3];
  undefined1 uStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  undefined8 uStack_a0;
  long alStack_98 [3];
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  lVar6 = *param_1;
  if ((long *)((param_1[2] - lVar6 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    plVar8 = param_1;
    plVar14 = param_2;
    FUN_1096833dc();
    if ((long *)0x492492492492492 < param_2) {
      FUN_109682680();
      param_1[1] = 0x6db6db6db6db6db7;
      __Unwind_Resume();
      uStack_80 = 0x6db6db6db6db6db7;
      pcStack_58 = FUN_109692a10;
      plStack_78 = param_2;
      puStack_70 = param_3;
      plStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_1096908b8();
      func_0x00010737fadc(alStack_98,(long)*(int *)(plVar8[1] + 0x10));
      piStack_b0 = (int *)0x0;
      piStack_a8 = (int *)0x0;
      uStack_a0 = 0;
      lVar6 = *plVar14;
      lVar13 = plVar14[1];
      if (lVar6 != lVar13) {
        do {
          iVar3 = *(int *)(lVar6 + 8);
          if (iVar3 != -1) {
            uVar10 = (ulong)(long)iVar3 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(alStack_98[0] + uVar10) =
                 *(ulong *)(alStack_98[0] + uVar10) | 1L << ((long)iVar3 & 0x3fU);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,iVar3);
            FUN_1092d7128(&piStack_b0,&uStack_c8);
          }
          lVar6 = lVar6 + 0x10;
        } while (lVar6 != lVar13);
        piVar7 = piStack_b0;
        if (piStack_b0 != piStack_a8) {
          do {
            piStack_a8 = piStack_a8 + -1;
            lVar6 = *(long *)(*(long *)(plVar8[1] + 8) + 8) + (long)*piStack_a8 * 0x40;
            piVar2 = *(int **)(lVar6 + 0x18);
            for (piVar1 = *(int **)(lVar6 + 0x10); piVar1 != piVar2; piVar1 = piVar1 + 1) {
              iVar3 = *piVar1;
              uStack_c8._4_4_ = (undefined4)((ulong)uStack_c8 >> 0x20);
              uStack_c8 = CONCAT44(uStack_c8._4_4_,iVar3);
              uVar10 = (ulong)(long)iVar3 >> 6;
              uVar9 = 1L << ((long)iVar3 & 0x3fU);
              uVar11 = *(ulong *)(alStack_98[0] + uVar10 * 8);
              if ((uVar9 & uVar11) == 0) {
                *(ulong *)(alStack_98[0] + uVar10 * 8) = uVar11 | uVar9;
                FUN_10923b3a0(&piStack_b0,&uStack_c8);
              }
              piVar7 = piStack_b0;
            }
          } while (piVar7 != piStack_a8);
        }
      }
      lVar6 = *(long *)(plVar8[1] + 0x28);
      lVar13 = *(long *)(plVar8[1] + 0x30);
      uStack_c9 = 1;
      lVar5 = 8;
      __Znwm();
      uStack_b8 = 1;
      uStack_c0 = 0;
      uStack_c8 = lVar5;
      func_0x0001077df0d0(&uStack_c8,&uStack_c9,&uStack_c8,1);
      uVar4 = *(undefined4 *)(plVar8[1] + 0x10);
      func_0x000105007b50(alStack_e8,&uStack_c8);
      FUN_109690be4(plVar8,alStack_98,0,uVar4,alStack_e8);
      if (alStack_e8[0] != 0) {
        __ZdlPv();
      }
      FUN_109692c74(plVar8[1] + 0x28,(lVar13 - lVar6 >> 3) * -0x5555555555555555);
      lVar6 = plVar8[1];
      puVar12 = (undefined8 *)(lVar6 + 0x60);
      func_0x000109693af8(lVar6 + 0x58,*puVar12);
      *puVar12 = 0;
      *(undefined8 *)(lVar6 + 0x68) = 0;
      *(undefined8 **)(lVar6 + 0x58) = puVar12;
      func_0x000109692d08(plVar8[1] + 0x70);
      if (uStack_c8 != 0) {
        __ZdlPv();
      }
      if (piStack_b0 != (int *)0x0) {
        piStack_a8 = piStack_b0;
        __ZdlPv();
      }
      if (alStack_98[0] != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    plVar8 = (long *)(lVar6 * -0x2492492492492492);
    if (plVar8 < param_2 || (long)plVar8 - (long)param_2 == 0) {
      plVar8 = param_2;
    }
    if (0x249249249249248 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
      plVar8 = (long *)0x492492492492492;
    }
    FUN_1096828dc(param_1,plVar8);
    lVar13 = param_1[1];
    lVar5 = (long)param_2 * 0x38;
    lVar6 = lVar13 + lVar5;
    do {
      FUN_109682614(lVar13,param_3);
      lVar13 = lVar13 + 0x38;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
  }
  else {
    lVar13 = param_1[1] - lVar6 >> 3;
    plVar14 = (long *)(lVar13 * 0x6db6db6db6db6db7);
    plVar8 = plVar14;
    if (param_2 <= plVar14) {
      plVar8 = param_2;
    }
    if (plVar8 != (long *)0x0) {
      lVar6 = lVar6 + 0x10;
      do {
        uVar16 = *param_3;
        *(undefined8 *)(lVar6 + -8) = param_3[1];
        *(undefined8 *)(lVar6 + -0x10) = uVar16;
        if ((undefined8 *)(lVar6 + -0x10) != param_3) {
          FUN_10928555c(lVar6,param_3[2],param_3[3],(long)(param_3[3] - param_3[2]) >> 2);
        }
        FUN_1096822fc(lVar6 + 0x18,param_3 + 5);
        lVar6 = lVar6 + 0x38;
        plVar8 = (long *)((long)plVar8 + -1);
      } while (plVar8 != (long *)0x0);
    }
    lVar6 = (long)param_2 + lVar13 * -0x6db6db6db6db6db7;
    if (plVar14 <= param_2 && lVar6 != 0) {
      lVar5 = param_1[1];
      lVar15 = lVar5 + lVar6 * 0x38;
      lVar6 = (long)param_2 * 0x38 + lVar13 * -8;
      do {
        FUN_109682614(lVar5,param_3);
        lVar5 = lVar5 + 0x38;
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
      param_1[1] = lVar15;
      return;
    }
    lVar13 = param_1[1];
    lVar6 = *param_1 + (long)param_2 * 0x38;
    while (lVar13 != lVar6) {
      lVar13 = lVar13 + -0x38;
      func_0x000109682760(lVar13);
    }
  }
  param_1[1] = lVar6;
  return;
}



/* Entry: 109692a10; end: 109692c73;  */

void FUN_109692a10(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long alStack_98 [3];
  undefined1 uStack_79;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int *piStack_60;
  int *piStack_58;
  undefined8 uStack_50;
  long alStack_48 [3];
  
  FUN_1096908b8();
  func_0x00010737fadc(alStack_48,(long)*(int *)(*(long *)(param_1 + 8) + 0x10));
  piStack_60 = (int *)0x0;
  piStack_58 = (int *)0x0;
  uStack_50 = 0;
  lVar11 = *param_2;
  lVar2 = param_2[1];
  if (lVar11 != lVar2) {
    do {
      iVar4 = *(int *)(lVar11 + 8);
      if (iVar4 != -1) {
        uVar9 = (ulong)(long)iVar4 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(alStack_48[0] + uVar9) =
             *(ulong *)(alStack_48[0] + uVar9) | 1L << ((long)iVar4 & 0x3fU);
        uStack_78 = CONCAT44(uStack_78._4_4_,iVar4);
        FUN_1092d7128(&piStack_60,&uStack_78);
      }
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != lVar2);
    piVar7 = piStack_60;
    if (piStack_60 != piStack_58) {
      do {
        piStack_58 = piStack_58 + -1;
        lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 8) + (long)*piStack_58 * 0x40;
        piVar3 = *(int **)(lVar11 + 0x18);
        for (piVar1 = *(int **)(lVar11 + 0x10); piVar1 != piVar3; piVar1 = piVar1 + 1) {
          iVar4 = *piVar1;
          uStack_78._4_4_ = (undefined4)((ulong)uStack_78 >> 0x20);
          uStack_78 = CONCAT44(uStack_78._4_4_,iVar4);
          uVar9 = (ulong)(long)iVar4 >> 6;
          uVar8 = 1L << ((long)iVar4 & 0x3fU);
          uVar10 = *(ulong *)(alStack_48[0] + uVar9 * 8);
          if ((uVar8 & uVar10) == 0) {
            *(ulong *)(alStack_48[0] + uVar9 * 8) = uVar10 | uVar8;
            FUN_10923b3a0(&piStack_60,&uStack_78);
          }
          piVar7 = piStack_60;
        }
      } while (piVar7 != piStack_58);
    }
  }
  lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x28);
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x30);
  uStack_79 = 1;
  lVar6 = 8;
  __Znwm();
  uStack_68 = 1;
  uStack_70 = 0;
  uStack_78 = lVar6;
  func_0x0001077df0d0(&uStack_78,&uStack_79,&uStack_78,1);
  uVar5 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
  func_0x000105007b50(alStack_98,&uStack_78);
  FUN_109690be4(param_1,alStack_48,0,uVar5,alStack_98);
  if (alStack_98[0] != 0) {
    __ZdlPv();
  }
  FUN_109692c74(*(long *)(param_1 + 8) + 0x28,(lVar2 - lVar11 >> 3) * -0x5555555555555555);
  lVar11 = *(long *)(param_1 + 8);
  puVar12 = (undefined8 *)(lVar11 + 0x60);
  func_0x000109693af8(lVar11 + 0x58,*puVar12);
  *puVar12 = 0;
  *(undefined8 *)(lVar11 + 0x68) = 0;
  *(undefined8 **)(lVar11 + 0x58) = puVar12;
  func_0x000109692d08(*(long *)(param_1 + 8) + 0x70);
  if (uStack_78 != 0) {
    __ZdlPv();
  }
  if (piStack_60 != (int *)0x0) {
    piStack_58 = piStack_60;
    __ZdlPv();
  }
  if (alStack_48[0] != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 109692c74; end: 109692d4b;  */

long * FUN_109692c74(long *param_1,ulong param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar9 = param_1[1];
  lVar4 = lVar9 - *param_1 >> 3;
  bVar1 = param_2 < (ulong)(lVar4 * -0x5555555555555555);
  uVar5 = param_2 + lVar4 * 0x5555555555555555;
  if (bVar1 || uVar5 == 0) {
    plVar2 = param_1;
    if (bVar1) {
      lVar4 = *param_1 + param_2 * 0x18;
      for (; lVar9 != lVar4; lVar9 = lVar9 + -0x18) {
        plVar2 = (long *)&stack0xffffffffffffffc8;
        FUN_109682a18(plVar2);
      }
      param_1[1] = lVar4;
    }
    return plVar2;
  }
  plVar2 = (long *)param_1[1];
  if ((ulong)((param_1[2] - (long)plVar2 >> 3) * -0x5555555555555555) < uVar5) {
    lVar9 = (long)plVar2 - *param_1;
    uVar6 = uVar5 + (lVar9 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      plVar2 = param_1;
      FUN_1096933f8();
      pcStack_78 = FUN_1096939c0;
      plVar2[0x11] = (long)&PTR_FUN_110b01d60;
      uStack_90 = uVar5;
      plStack_88 = param_1;
      puStack_80 = &stack0xfffffffffffffff0;
      func_0x000107c2acd4();
      plStack_98 = plVar2 + 0xe;
      FUN_109693ab8(&plStack_98);
      func_0x000109693af8(plVar2 + 0xb,plVar2[0xc]);
      plStack_98 = plVar2 + 8;
      FUN_109693b48(&plStack_98);
      plStack_98 = plVar2 + 5;
      FUN_109693034(&plStack_98);
      return plVar2;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar4 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar7 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar5;
      FUN_10969340c();
    }
    lVar9 = uVar7 + lVar9;
    lVar8 = ((uVar5 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar9,lVar8);
    lVar4 = lVar9 + (*param_1 - param_1[1]);
    func_0x000109693450(*param_1,param_1[1],lVar4);
    lStack_68 = *param_1;
    *param_1 = lVar4;
    param_1[1] = lVar9 + lVar8;
    lStack_50 = param_1[2];
    param_1[2] = uVar7 + uVar6 * 0x18;
    plVar3 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x0001096934cc(plVar3);
  }
  else {
    plVar3 = param_1;
    if (uVar5 != 0) {
      uVar5 = (uVar5 * 0x18 - 0x18) / 0x18;
      plVar3 = plVar2;
      _bzero(plVar2,uVar5 * 0x18 + 0x18);
      plVar2 = plVar2 + uVar5 * 3 + 3;
    }
    param_1[1] = (long)plVar2;
  }
  return plVar3;
}



/* Entry: 109692d4c; end: 109692d7f;  */

undefined8 * FUN_109692d4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 109692d80; end: 109692db3;  */

void FUN_109692d80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109692db4; end: 109692e47;  */

void FUN_109692db4(long *param_1,ulong param_2)

{
  undefined1 **ppuVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  
  lVar15 = param_1[1];
  lVar5 = lVar15 - *param_1 >> 3;
  bVar2 = param_2 < (ulong)(lVar5 * -0x5555555555555555);
  uVar8 = param_2 + lVar5 * 0x5555555555555555;
  if (bVar2 || uVar8 == 0) {
    if (bVar2) {
      lVar5 = *param_1 + param_2 * 0x18;
      for (; lVar15 != lVar5; lVar15 = lVar15 + -0x18) {
        FUN_109693034(&stack0xffffffffffffffc8);
      }
      param_1[1] = lVar5;
    }
    return;
  }
  puVar11 = (undefined8 *)param_1[1];
  lVar15 = param_1[2];
  if ((ulong)((lVar15 - (long)puVar11 >> 3) * -0x5555555555555555) < uVar8) {
    puVar14 = (undefined8 *)*param_1;
    uVar7 = uVar8 + ((long)puVar11 - (long)puVar14 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
      FUN_109693020();
LAB_10969301c:
      func_0x000104c4f740();
      pcStack_98 = FUN_109693020;
      plVar4 = (long *)&DAT_10f62a4d8;
      puStack_a0 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_a8 = FUN_109693034;
      plVar12 = (long *)*plVar4;
      lVar15 = *plVar12;
      if (lVar15 != 0) {
        lVar13 = plVar12[1];
        lVar5 = lVar15;
        uStack_d0 = uVar8;
        puStack_c0 = puVar11;
        plStack_b8 = param_1;
        puStack_b0 = (undefined1 *)&puStack_a0;
        ppuVar1 = &puStack_a0;
        if (lVar13 != lVar15) {
          do {
            lVar13 = lVar13 + -0x18;
            lStack_d8 = lVar13;
            FUN_109682a18(&lStack_d8);
          } while (lVar13 != lVar15);
          lVar5 = *(long *)*plVar4;
          ppuVar1 = (undefined1 **)puStack_b0;
        }
        puStack_b0 = (undefined1 *)ppuVar1;
        plVar12[1] = lVar15;
        __ZdlPv(lVar5);
      }
      return;
    }
    lVar5 = lVar15 - (long)puVar14 >> 3;
    uVar10 = lVar5 * 0x5555555555555556;
    if (uVar10 < uVar7 || uVar10 - uVar7 == 0) {
      uVar10 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_70 = param_1;
    if (uVar10 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar10) goto LAB_10969301c;
      puVar3 = (undefined8 *)(uVar10 * 0x18);
      __Znwm();
    }
    lVar5 = (long)puVar3 + ((long)puVar11 - (long)puVar14);
    lVar13 = ((uVar8 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    puStack_78 = puVar3 + uVar10 * 3;
    _bzero(lVar5,lVar13);
    puStack_80 = (undefined8 *)(lVar5 + lVar13);
    puVar6 = puVar3;
    puVar9 = puVar14;
    puVar16 = puVar3 + uVar10 * 3;
    if (puVar14 != puVar11) {
      do {
        uVar17 = *puVar9;
        puVar6[1] = puVar9[1];
        *puVar6 = uVar17;
        puVar6[2] = puVar9[2];
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9 = puVar9 + 3;
        puVar6 = puVar6 + 3;
      } while (puVar9 != puVar11);
      do {
        puStack_68 = puVar14;
        FUN_109693034(&puStack_68);
        puVar14 = puVar14 + 3;
      } while (puVar14 != puVar11);
      puVar14 = (undefined8 *)*param_1;
      lVar15 = param_1[2];
      puVar16 = puStack_78;
    }
    *param_1 = (long)puVar3;
    param_1[1] = (long)puStack_80;
    param_1[2] = (long)puVar16;
    puStack_90 = puVar14;
    puStack_88 = puVar14;
    puStack_80 = puVar14;
    puStack_78 = (undefined8 *)lVar15;
    FUN_1096930a4(&puStack_90);
  }
  else {
    if (uVar8 != 0) {
      uVar8 = (uVar8 * 0x18 - 0x18) / 0x18;
      _bzero(puVar11,uVar8 * 0x18 + 0x18);
      puVar11 = puVar11 + uVar8 * 3 + 3;
    }
    param_1[1] = (long)puVar11;
  }
  return;
}



/* Entry: 109692e48; end: 10969301f;  */

void FUN_109692e48(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined8 *puStack_68;
  
  puVar8 = (undefined8 *)param_1[1];
  lVar12 = param_1[2];
  if ((ulong)((lVar12 - (long)puVar8 >> 3) * -0x5555555555555555) < param_2) {
    puVar11 = (undefined8 *)*param_1;
    uVar4 = param_2 + ((long)puVar8 - (long)puVar11 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
      FUN_109693020();
LAB_10969301c:
      func_0x000104c4f740();
      plVar2 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      plVar9 = (long *)*plVar2;
      lVar12 = *plVar9;
      if (lVar12 != 0) {
        lVar10 = plVar9[1];
        lVar6 = lVar12;
        uStack_d0 = param_2;
        if (lVar10 != lVar12) {
          do {
            lVar10 = lVar10 + -0x18;
            lStack_d8 = lVar10;
            FUN_109682a18(&lStack_d8);
          } while (lVar10 != lVar12);
          lVar6 = *(long *)*plVar2;
        }
        plVar9[1] = lVar12;
        __ZdlPv(lVar6);
      }
      return;
    }
    lVar6 = lVar12 - (long)puVar11 >> 3;
    uVar7 = lVar6 * 0x5555555555555556;
    if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
      uVar7 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_70 = param_1;
    if (uVar7 == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar7) goto LAB_10969301c;
      puVar1 = (undefined8 *)(uVar7 * 0x18);
      __Znwm();
    }
    lVar6 = (long)puVar1 + ((long)puVar8 - (long)puVar11);
    lVar10 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    puStack_78 = puVar1 + uVar7 * 3;
    _bzero(lVar6,lVar10);
    puStack_80 = (undefined8 *)(lVar6 + lVar10);
    puVar3 = puVar1;
    puVar5 = puVar11;
    puVar13 = puVar1 + uVar7 * 3;
    if (puVar11 != puVar8) {
      do {
        uVar14 = *puVar5;
        puVar3[1] = puVar5[1];
        *puVar3 = uVar14;
        puVar3[2] = puVar5[2];
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5 = puVar5 + 3;
        puVar3 = puVar3 + 3;
      } while (puVar5 != puVar8);
      do {
        puStack_68 = puVar11;
        FUN_109693034(&puStack_68);
        puVar11 = puVar11 + 3;
      } while (puVar11 != puVar8);
      puVar11 = (undefined8 *)*param_1;
      lVar12 = param_1[2];
      puVar13 = puStack_78;
    }
    *param_1 = (long)puVar1;
    param_1[1] = (long)puStack_80;
    param_1[2] = (long)puVar13;
    puStack_90 = puVar11;
    puStack_88 = puVar11;
    puStack_80 = puVar11;
    puStack_78 = (undefined8 *)lVar12;
    FUN_1096930a4(&puStack_90);
  }
  else {
    if (param_2 != 0) {
      uVar4 = (param_2 * 0x18 - 0x18) / 0x18;
      _bzero(puVar8,uVar4 * 0x18 + 0x18);
      puVar8 = puVar8 + uVar4 * 3 + 3;
    }
    param_1[1] = (long)puVar8;
  }
  return;
}



/* Entry: 109693020; end: 109693033;  */

void FUN_109693020(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lStack_48;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar3 = (long *)*plVar1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar5 = plVar3[1];
    lVar2 = lVar4;
    if (lVar5 != lVar4) {
      do {
        lVar5 = lVar5 + -0x18;
        lStack_48 = lVar5;
        FUN_109682a18(&lStack_48);
      } while (lVar5 != lVar4);
      lVar2 = *(long *)*plVar1;
    }
    plVar3[1] = lVar4;
    __ZdlPv(lVar2);
  }
  return;
}



/* Entry: 109693034; end: 1096930a3;  */

void FUN_109693034(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = plVar2[1];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_38 = lVar4;
        FUN_109682a18(&lStack_38);
      } while (lVar4 != lVar3);
      lVar1 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 1096930a4; end: 1096930ff;  */

long * FUN_1096930a4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    lStack_28 = lVar2 + -0x18;
    param_1[2] = lStack_28;
    FUN_109693034(&lStack_28);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109693100; end: 1096931a7;  */

undefined8 * FUN_109693100(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1096828dc(param_1);
    lVar2 = param_1[1];
    param_2 = param_2 * 0x38;
    lVar1 = lVar2 + param_2;
    do {
      FUN_109682614(lVar2,param_3);
      lVar2 = lVar2 + 0x38;
      param_2 = param_2 + -0x38;
    } while (param_2 != 0);
    param_1[1] = lVar1;
  }
  return param_1;
}



/* Entry: 1096931a8; end: 10969331f;  */

undefined1  [16] FUN_1096931a8(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_42 [2];
  
  plVar5 = (long *)*param_1;
  plVar2 = param_1;
  if ((ulong)((param_1[2] - (long)plVar5 >> 3) * 0x6db6db6db6db6db7) < param_4) {
    plVar3 = param_2;
    plVar4 = param_3;
    FUN_1096833dc(param_1);
    if (0x492492492492492 < param_4) {
      FUN_109682680();
      param_1[1] = param_4;
      __Unwind_Resume();
      if (plVar3 != plVar4) {
        plVar2 = plVar3 + 2;
        do {
          lVar6 = plVar2[-2];
          plVar5[1] = plVar2[-1];
          *plVar5 = lVar6;
          if (plVar5 != plVar2 + -2) {
            FUN_10928555c(plVar5 + 2,*plVar2,plVar2[1],plVar2[1] - *plVar2 >> 2);
          }
          FUN_1096822fc(plVar5 + 5,plVar2 + 3);
          plVar5 = plVar5 + 7;
          plVar1 = plVar2 + 5;
          plVar3 = plVar4;
          plVar2 = plVar2 + 7;
        } while (plVar1 != plVar4);
      }
      auVar9._8_8_ = plVar5;
      auVar9._0_8_ = plVar3;
      return auVar9;
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar6 * -0x2492492492492492;
    if (uVar7 < param_4 || uVar7 - param_4 == 0) {
      uVar7 = param_4;
    }
    if (0x249249249249248 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
      uVar7 = 0x492492492492492;
    }
    FUN_1096828dc(param_1,uVar7);
    FUN_109682928(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar6 = param_1[1] - (long)plVar5;
    if (param_4 <= (ulong)((lVar6 >> 3) * 0x6db6db6db6db6db7)) {
      plVar2 = (long *)(auStack_42 + 1);
      FUN_109693320(plVar2,param_2,param_3);
      plVar5 = (long *)param_1[1];
      plVar3 = param_2;
      while (plVar5 != param_2) {
        plVar5 = plVar5 + -7;
        plVar2 = plVar5;
        func_0x000109682760(plVar5);
      }
      param_1[1] = (long)param_2;
      goto LAB_1096932f8;
    }
    FUN_109693320(auStack_42,param_2,(long)param_2 + lVar6);
    param_2 = (long *)((long)param_2 + lVar6);
    FUN_109682928(param_1,param_2,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar2;
  plVar3 = param_2;
LAB_1096932f8:
  auVar8._8_8_ = plVar3;
  auVar8._0_8_ = plVar2;
  return auVar8;
}



/* Entry: 109693320; end: 1096933ab;  */

undefined1  [16] FUN_109693320(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (param_2 != param_3) {
    plVar2 = param_2 + 2;
    do {
      lVar3 = plVar2[-2];
      param_4[1] = plVar2[-1];
      *param_4 = lVar3;
      if (param_4 != plVar2 + -2) {
        FUN_10928555c(param_4 + 2,*plVar2,plVar2[1],plVar2[1] - *plVar2 >> 2);
      }
      FUN_1096822fc(param_4 + 5,plVar2 + 3);
      param_4 = param_4 + 7;
      plVar1 = plVar2 + 5;
      param_2 = param_3;
      plVar2 = plVar2 + 7;
    } while (plVar1 != param_3);
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = param_2;
  return auVar4;
}



/* Entry: 1096933ac; end: 1096933f7;  */

void FUN_1096933ac(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 1096933f8; end: 10969340b;  */

void FUN_1096933f8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puStack_58;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar1) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        uVar3 = *puVar2;
        param_3[1] = puVar2[1];
        *param_3 = uVar3;
        param_3[2] = puVar2[2];
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2 = puVar2 + 3;
        param_3 = param_3 + 3;
      } while (puVar2 != param_2);
      do {
        puStack_58 = puVar1;
        FUN_109682a18(&puStack_58);
        puVar1 = puVar1 + 3;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x18);
  return;
}



/* Entry: 10969340c; end: 109693527;  */

void FUN_10969340c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        uVar2 = *puVar1;
        param_3[1] = puVar1[1];
        *param_3 = uVar2;
        param_3[2] = puVar1[2];
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1 = puVar1 + 3;
        param_3 = param_3 + 3;
      } while (puVar1 != param_2);
      do {
        puStack_48 = param_1;
        FUN_109682a18(&puStack_48);
        param_1 = param_1 + 3;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x18);
  return;
}



/* Entry: 109693528; end: 10969353b;  */

long * FUN_109693528(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar1 = (long *)plVar2[1];
  plVar4 = (long *)plVar2[2];
  while (plVar4 != plVar1) {
    plVar4 = plVar4 + -3;
    lVar3 = *plVar4;
    plVar2[2] = (long)plVar4;
    if (lVar3 != 0) {
      __ZdlPv();
      plVar4 = (long *)plVar2[2];
    }
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10969353c; end: 10969358b;  */

long * FUN_10969353c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[1];
  plVar3 = (long *)param_1[2];
  while (plVar3 != plVar1) {
    plVar3 = plVar3 + -3;
    lVar2 = *plVar3;
    param_1[2] = (long)plVar3;
    if (lVar2 != 0) {
      __ZdlPv();
      plVar3 = (long *)param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10969358c; end: 1096935bf;  */

undefined8 * FUN_10969358c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096935c0; end: 1096935f3;  */

void FUN_1096935c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096935f4; end: 109693607;  */

void FUN_1096935f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b00d28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109693608; end: 10969362b;  */

void FUN_109693608(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b00d28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10969362c; end: 109693637;  */

void FUN_10969362c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 109693638; end: 109693807;  */

int * FUN_109693638(int *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long alStack_d0 [13];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_1[0x10];
  if (uVar11 < (uint)param_1[2]) {
    do {
      uVar5 = param_1[3];
      iVar7 = *param_1 + uVar5 * uVar11;
      iVar2 = iVar7 + uVar5;
      if ((uint)(param_1[1] - iVar7) <= uVar5) {
        iVar2 = param_1[1];
      }
      if (iVar7 != iVar2) {
        lVar18 = (long)iVar7;
        do {
          plVar19 = *(long **)(param_1 + 8);
          piVar12 = *(int **)plVar19[3];
          piVar4 = (int *)((long *)plVar19[3])[1];
          if (piVar12 != piVar4) {
            lVar20 = *plVar19;
            do {
              iVar7 = *piVar12;
              lVar10 = plVar19[1];
              lVar1 = *(long *)(lVar10 + 8) + (long)iVar7 * 0x40;
              lVar15 = *(long *)(lVar1 + 0x28);
              if (0 < (int)((ulong)(*(long *)(lVar1 + 0x30) - lVar15) >> 2)) {
                lVar10 = 0;
                iVar6 = *(int *)(*(long *)plVar19[4] + lVar18 * 4);
                plVar14 = (long *)plVar19[2];
                do {
                  plVar16 = (long *)(*plVar14 + (long)*(int *)(lVar15 + lVar10 * 4) * 0x18);
                  lVar3 = *plVar16;
                  lVar15 = 0;
                  if (plVar16[1] - lVar3 != 0x38) {
                    lVar15 = (long)iVar6;
                  }
                  alStack_d0[lVar10] = lVar3 + lVar15 * 0x38;
                  lVar10 = lVar10 + 1;
                  lVar15 = *(long *)(lVar1 + 0x28);
                } while (lVar10 < (int)((ulong)(*(long *)(lVar1 + 0x30) - lVar15) >> 2));
                lVar10 = plVar19[1];
              }
              FUN_109681724(lVar10,(long)iVar7,*(long *)(lVar20 + 8) + 0x14,alStack_d0);
              piVar12 = piVar12 + 1;
            } while (piVar12 != piVar4);
          }
          lVar18 = lVar18 + 1;
        } while (iVar2 != (int)lVar18);
      }
      puVar13 = *(uint **)(param_1 + 10);
      do {
        uVar11 = *puVar13;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar9) {
          *puVar13 = uVar11 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    } while (uVar11 < (uint)param_1[2]);
  }
  piVar12 = *(int **)(param_1 + 0xc);
  do {
    iVar2 = *piVar12;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar12,0x10);
    if (bVar9) {
      *piVar12 = iVar2 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar2 + -1 == 0) {
    uVar17 = *(undefined8 *)(param_1 + 4);
    __ZNSt3__15mutex4lockEv(uVar17);
    __ZNSt3__118condition_variable10notify_oneEv(*(undefined8 *)(param_1 + 0xe));
    __ZNSt3__15mutex6unlockEv(uVar17);
  }
  FUN_109693808(param_1 + 4);
  __ZdlPv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    plVar19 = *(long **)(param_1 + 2);
    if (plVar19 != (long *)0x0) {
      plVar14 = plVar19 + 1;
      do {
        lVar18 = *plVar14;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *plVar14 = lVar18 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 109693808; end: 10969385f;  */

long FUN_109693808(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 109693860; end: 1096939bf;  */

long * FUN_109693860(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar2 = (long *)param_1[1];
  if ((ulong)((param_1[2] - (long)plVar2 >> 3) * -0x5555555555555555) < param_2) {
    lVar7 = (long)plVar2 - *param_1;
    uVar4 = param_2 + (lVar7 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
      plVar2 = param_1;
      FUN_1096933f8();
      pcStack_78 = FUN_1096939c0;
      plVar2[0x11] = (long)&PTR_FUN_110b01d60;
      uStack_90 = param_2;
      plStack_88 = param_1;
      puStack_80 = &stack0xfffffffffffffff0;
      func_0x000107c2acd4();
      plStack_98 = plVar2 + 0xe;
      FUN_109693ab8(&plStack_98);
      func_0x000109693af8(plVar2 + 0xb,plVar2[0xc]);
      plStack_98 = plVar2 + 8;
      FUN_109693b48(&plStack_98);
      plStack_98 = plVar2 + 5;
      FUN_109693034(&plStack_98);
      return plVar2;
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_2;
      FUN_10969340c();
    }
    lVar7 = uVar5 + lVar7;
    lVar6 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar7,lVar6);
    lVar3 = lVar7 + (*param_1 - param_1[1]);
    func_0x000109693450(*param_1,param_1[1],lVar3);
    lStack_68 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar7 + lVar6;
    lStack_50 = param_1[2];
    param_1[2] = uVar5 + uVar4 * 0x18;
    plVar1 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x0001096934cc(plVar1);
  }
  else {
    plVar1 = param_1;
    if (param_2 != 0) {
      uVar4 = (param_2 * 0x18 - 0x18) / 0x18;
      plVar1 = plVar2;
      _bzero(plVar2,uVar4 * 0x18 + 0x18);
      plVar2 = plVar2 + uVar4 * 3 + 3;
    }
    param_1[1] = (long)plVar2;
  }
  return plVar1;
}



/* Entry: 1096939c0; end: 109693a37;  */

long FUN_1096939c0(long param_1)

{
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x88) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lStack_28 = param_1 + 0x70;
  FUN_109693ab8(&lStack_28);
  func_0x000109693af8(param_1 + 0x58,*(undefined8 *)(param_1 + 0x60));
  lStack_28 = param_1 + 0x40;
  FUN_109693b48(&lStack_28);
  lStack_28 = param_1 + 0x28;
  FUN_109693034(&lStack_28);
  return param_1;
}



/* Entry: 109693a38; end: 109693ab3;  */

void FUN_109693a38(long param_1)

{
  long lStack_28;
  
  *(undefined ***)(param_1 + 0x88) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  lStack_28 = param_1 + 0x70;
  FUN_109693ab8(&lStack_28);
  func_0x000109693af8(param_1 + 0x58,*(undefined8 *)(param_1 + 0x60));
  lStack_28 = param_1 + 0x40;
  FUN_109693b48(&lStack_28);
  lStack_28 = param_1 + 0x28;
  FUN_109693034(&lStack_28);
  __ZdlPv(param_1);
  return;
}



/* Entry: 109693ab4; end: 109693ab7;  */

void FUN_109693ab4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109693ab8; end: 109693b47;  */

void FUN_109693ab8(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x000109692d08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109693b48; end: 109693bb7;  */

void FUN_109693b48(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = plVar2[1];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_38 = lVar4;
        FUN_109693034(&lStack_38);
      } while (lVar4 != lVar3);
      lVar1 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 109693bb8; end: 109693c8b;  */

long * FUN_109693bb8(long *param_1,int param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
  do {
    plVar3 = plVar1;
    if (plVar2 == (long *)0x0) {
LAB_109693c1c:
      plVar2 = (long *)0x40;
      __Znwm();
      *(undefined4 *)(plVar2 + 4) = *param_3;
      plVar2[6] = 0;
      plVar2[7] = 0;
      plVar2[5] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar1;
      *plVar3 = (long)plVar2;
      plVar1 = plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar1 = (long *)*plVar3;
      }
      func_0x000107c27d40(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar2;
    }
    while (plVar1 = plVar2, (int)plVar1[4] <= param_2) {
      if (param_2 <= (int)plVar1[4]) {
        return plVar1;
      }
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar3 = plVar1 + 1;
        goto LAB_109693c1c;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 109693c8c; end: 109693d2b;  */

void FUN_109693c8c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  FUN_1096978cc();
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 109693d2c; end: 109693dab;  */

void FUN_109693d2c(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 == 0) || (puVar2 = *(undefined8 **)(lVar1 + 8), puVar2 == (undefined8 *)0x0)) {
    param_2 = (undefined8 *)*param_2;
    lVar1 = *(long *)(param_1 + 8) + -0x20;
    puVar2 = param_2;
    (**(code **)*param_2)();
    FUN_109696718(lVar1,param_2);
    *(undefined8 **)(lVar1 + 8) = puVar2;
  }
  *(undefined1 *)puVar2 = *param_3;
  return;
}



/* Entry: 109693dac; end: 109693ddf;  */

undefined8 * FUN_109693dac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 109693de0; end: 109693e13;  */

void FUN_109693de0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109693e14; end: 109693e83;  */

void FUN_109693e14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 109693e84; end: 109693edb;  */

void FUN_109693e84(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b00e38;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 109693edc; end: 109693ee3;  */

void FUN_109693edc(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 109693ee4; end: 109693f13;  */

bool FUN_109693ee4(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b00e38,0);
  return param_1 != 0;
}



/* Entry: 109693f14; end: 109693f1f;  */

void FUN_109693f14(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = *param_1;
  return;
}


