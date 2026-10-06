/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081cde00; end: 1081cdee3;  */

void FUN_1081cde00(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (*param_2 != 0) {
    return;
  }
  plVar1 = param_1;
  (**(code **)param_1[1])(param_1,0,0x118);
  *(undefined4 *)((long)plVar1 + 0x114) = 0;
  *param_2 = (long)plVar1;
  lVar9 = param_3[1];
  lVar7 = *param_3;
  *(char *)(plVar1 + 2) = (char)param_3[2];
  plVar1[1] = lVar9;
  *plVar1 = lVar7;
  uVar10 = *(undefined8 *)((long)param_3 + 9);
  uVar8 = *(undefined8 *)((long)param_3 + 1);
  bVar4 = (byte)((ulong)uVar10 >> 0x28);
  bVar3 = (byte)((ulong)uVar8 >> 8);
  bVar5 = (byte)((ulong)uVar8 >> 0x28);
  uVar6 = ((CONCAT12(bVar3,(short)uVar8) & 0xff00ff) & 0xffff) + (uint)(byte)uVar10 +
          (CONCAT12(bVar5,(ushort)(byte)((ulong)uVar8 >> 0x20)) & 0xffff) +
          (CONCAT12(bVar4,(ushort)(byte)((ulong)uVar10 >> 0x20)) & 0xffff) +
          (uint)bVar3 + (uint)(byte)((ulong)uVar10 >> 8) + (uint)bVar5 + (uint)bVar4 +
          (uint)(byte)((ulong)uVar8 >> 0x10) + (uint)(byte)((ulong)uVar10 >> 0x10) +
          (uint)(byte)((ulong)uVar8 >> 0x30) + (uint)(byte)((ulong)uVar10 >> 0x30) +
          (uint)(byte)((ulong)uVar8 >> 0x18) + (uint)(byte)((ulong)uVar10 >> 0x18) +
          (uint)(byte)((ulong)uVar8 >> 0x38) + (uint)(byte)((ulong)uVar10 >> 0x38);
  if (uVar6 - 0x101 < 0xffffff00) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 8;
    (*(code *)*puVar2)(param_1);
  }
  _memcpy(*param_2 + 0x11,param_4,uVar6);
  _bzero(*param_2 + (ulong)uVar6 + 0x11,(long)(int)(0x100 - uVar6));
  *(undefined4 *)(*param_2 + 0x114) = 0;
  return;
}



/* Entry: 1081cdee4; end: 1081ce217;  */

void FUN_1081cdee4(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 *puVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  uint *puVar20;
  
  lVar18 = param_1[0x48];
  if (*(int *)(lVar18 + 0x24) == 0) {
    plVar3 = param_1;
    (**(code **)(param_1[0x49] + 8))();
    if ((int)plVar3 == 2) {
      *(undefined4 *)(lVar18 + 0x24) = 1;
      if (*(int *)(lVar18 + 0x28) == 0) {
        if (*(int *)((long)param_1 + 0xac) < *(int *)((long)param_1 + 0xb4)) {
          *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xac);
        }
      }
      else if (*(int *)(param_1[0x49] + 0x1c) != 0) {
        puVar7 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar7 + 5) = 0x3b;
        (*(code *)*puVar7)(param_1);
      }
    }
    else if ((int)plVar3 == 1) {
      if (*(int *)(lVar18 + 0x28) == 0) {
        if (*(int *)(lVar18 + 0x20) == 0) {
          puVar7 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar7 + 5) = 0x23;
          (*(code *)*puVar7)(param_1);
        }
        FUN_1081ce270(param_1);
      }
      else {
        if ((0xffdc < *(uint *)((long)param_1 + 0x34)) || (0xffdc < *(uint *)(param_1 + 6))) {
          *(undefined8 *)(*param_1 + 0x28) = 0xffdc00000029;
          (**(code **)*param_1)(param_1);
        }
        lVar5 = param_1[0x25];
        if ((int)lVar5 != 8) {
          lVar9 = *param_1;
          *(undefined4 *)(lVar9 + 0x28) = 0xf;
          *(int *)(lVar9 + 0x2c) = (int)lVar5;
          (**(code **)*param_1)(param_1);
        }
        iVar11 = (int)param_1[7];
        if (10 < iVar11) {
          lVar5 = *param_1;
          *(undefined4 *)(lVar5 + 0x28) = 0x1a;
          *(int *)(lVar5 + 0x2c) = iVar11;
          *(undefined4 *)(*param_1 + 0x30) = 10;
          (**(code **)*param_1)(param_1);
          iVar11 = (int)param_1[7];
        }
        param_1[0x33] = 0x100000001;
        if (iVar11 < 1) {
          *(undefined4 *)(param_1 + 0x34) = 8;
          uVar14 = (ulong)*(uint *)((long)param_1 + 0x34);
          uVar4 = 1;
        }
        else {
          iVar19 = 0;
          puVar20 = (uint *)(param_1[0x26] + 0xc);
          uVar6 = 1;
          uVar10 = 1;
          do {
            uVar4 = (uint)uVar6;
            uVar8 = (uint)uVar10;
            uVar12 = puVar20[-1];
            if ((uVar12 - 5 < 0xfffffffc) || (uVar13 = *puVar20, uVar13 - 5 < 0xfffffffc)) {
              puVar7 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar7 + 5) = 0x12;
              (*(code *)*puVar7)(param_1);
              uVar8 = *(uint *)(param_1 + 0x33);
              uVar12 = puVar20[-1];
              uVar13 = *puVar20;
              uVar4 = *(uint *)((long)param_1 + 0x19c);
              iVar11 = (int)param_1[7];
            }
            if ((int)uVar8 <= (int)uVar12) {
              uVar8 = uVar12;
            }
            uVar10 = (ulong)uVar8;
            *(uint *)(param_1 + 0x33) = uVar8;
            if ((int)uVar4 <= (int)uVar13) {
              uVar4 = uVar13;
            }
            uVar6 = (ulong)uVar4;
            *(uint *)((long)param_1 + 0x19c) = uVar4;
            iVar19 = iVar19 + 1;
            puVar20 = puVar20 + 0x18;
          } while (iVar19 < iVar11);
          *(undefined4 *)(param_1 + 0x34) = 8;
          uVar14 = (ulong)*(uint *)((long)param_1 + 0x34);
          if (0 < iVar11) {
            lVar5 = 0;
            uVar17 = (ulong)*(uint *)(param_1 + 6);
            puVar16 = (undefined4 *)(param_1[0x26] + 0x28);
            piVar15 = (int *)(param_1[0x44] + 0x44);
            do {
              iVar11 = (int)uVar10 << 3;
              uVar1 = 0;
              if ((long)iVar11 != 0) {
                uVar1 = (undefined4)
                        ((long)((long)(int)puVar16[-8] * uVar17 + (long)iVar11 + -1) / (long)iVar11)
                ;
              }
              iVar11 = (int)uVar6 << 3;
              uVar2 = 0;
              if ((long)iVar11 != 0) {
                uVar2 = (undefined4)
                        ((long)((long)(int)puVar16[-7] * uVar14 + (long)iVar11 + -1) / (long)iVar11)
                ;
              }
              puVar16[-3] = uVar1;
              puVar16[-2] = uVar2;
              puVar16[-1] = 8;
              piVar15[-10] = 0;
              *piVar15 = puVar16[-3] + -1;
              uVar10 = (ulong)(int)param_1[0x33];
              uVar17 = (ulong)*(uint *)(param_1 + 6);
              uVar14 = (ulong)*(uint *)((long)param_1 + 0x34);
              uVar1 = 0;
              if (uVar10 != 0) {
                uVar1 = (undefined4)
                        ((long)(uVar10 + (long)(int)puVar16[-8] * uVar17 + -1) / (long)uVar10);
              }
              uVar4 = *(uint *)((long)param_1 + 0x19c);
              uVar6 = (ulong)(int)uVar4;
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = (undefined4)
                        ((long)(uVar6 + (long)(int)puVar16[-7] * uVar14 + -1) / (long)uVar6);
              }
              *puVar16 = uVar1;
              puVar16[1] = uVar2;
              puVar16[2] = 1;
              *(undefined8 *)(puVar16 + 10) = 0;
              lVar5 = lVar5 + 1;
              iVar11 = (int)param_1[7];
              puVar16 = puVar16 + 0x18;
              piVar15 = piVar15 + 1;
            } while (lVar5 < iVar11);
          }
        }
        iVar19 = uVar4 << 3;
        uVar1 = 0;
        if ((long)iVar19 != 0) {
          uVar1 = (undefined4)((long)(uVar14 + (long)iVar19 + -1) / (long)iVar19);
        }
        *(undefined4 *)((long)param_1 + 0x1a4) = uVar1;
        if ((int)param_1[0x36] < iVar11) {
          uVar4 = 1;
        }
        else {
          uVar4 = (uint)((int)param_1[0x27] != 0);
        }
        *(uint *)(param_1[0x48] + 0x20) = uVar4;
        *(undefined4 *)(lVar18 + 0x28) = 0;
      }
    }
  }
  return;
}



/* Entry: 1081ce218; end: 1081ce26f;  */

void FUN_1081ce218(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x48];
  *puVar1 = FUN_1081cdee4;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  (**(code **)(*param_1 + 0x20))();
  (**(code **)param_1[0x49])(param_1);
  param_1[0x18] = 0;
  return;
}



/* Entry: 1081ce270; end: 1081ce4fb;  */

void FUN_1081ce270(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  iVar5 = (int)param_1[0x36];
  if (iVar5 == 1) {
    lVar11 = param_1[0x37];
    uVar1 = *(uint *)(lVar11 + 0x20);
    param_1[0x3b] = *(long *)(lVar11 + 0x1c);
    *(undefined8 *)(lVar11 + 0x34) = 0x100000001;
    uVar7 = 1;
    *(undefined4 *)(lVar11 + 0x3c) = 1;
    *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(lVar11 + 0x24);
    uVar6 = *(uint *)(lVar11 + 0xc);
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar1 / uVar6;
    }
    uVar1 = uVar1 - uVar3 * uVar6;
    if (uVar1 != 0) {
      uVar6 = uVar1;
    }
    *(undefined4 *)(lVar11 + 0x44) = 1;
    *(uint *)(lVar11 + 0x48) = uVar6;
    param_1[0x3c] = 1;
  }
  else {
    if (iVar5 - 5U < 0xfffffffc) {
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + 0x28) = 0x1a;
      *(int *)(lVar11 + 0x2c) = iVar5;
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
      iVar5 = (int)param_1[0x36];
    }
    lVar11 = (long)(int)param_1[0x33] << 3;
    uVar2 = 0;
    if (lVar11 != 0) {
      uVar2 = (undefined4)
              ((long)((ulong)*(uint *)(param_1 + 6) + (long)(int)param_1[0x33] * 8 + -1) / lVar11);
    }
    *(undefined4 *)(param_1 + 0x3b) = uVar2;
    lVar11 = (long)*(int *)((long)param_1 + 0x19c) << 3;
    uVar2 = 0;
    if (lVar11 != 0) {
      uVar2 = (undefined4)
              ((long)((ulong)*(uint *)((long)param_1 + 0x34) +
                      (long)*(int *)((long)param_1 + 0x19c) * 8 + -1) / lVar11);
    }
    *(undefined4 *)((long)param_1 + 0x1dc) = uVar2;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (iVar5 < 1) goto LAB_1081ce4b8;
    lVar11 = 0;
    do {
      lVar12 = param_1[lVar11 + 0x37];
      uVar6 = *(uint *)(lVar12 + 8);
      uVar1 = *(uint *)(lVar12 + 0xc);
      iVar5 = uVar1 * uVar6;
      *(int *)(lVar12 + 0x3c) = iVar5;
      *(uint *)(lVar12 + 0x40) = *(int *)(lVar12 + 0x24) * uVar6;
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = *(uint *)(lVar12 + 0x1c) / uVar6;
      }
      uVar3 = *(uint *)(lVar12 + 0x1c) - uVar3 * uVar6;
      *(uint *)(lVar12 + 0x34) = uVar6;
      *(uint *)(lVar12 + 0x38) = uVar1;
      if (uVar3 != 0) {
        uVar6 = uVar3;
      }
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = *(uint *)(lVar12 + 0x20) / uVar1;
      }
      uVar3 = *(uint *)(lVar12 + 0x20) - uVar3 * uVar1;
      if (uVar3 != 0) {
        uVar1 = uVar3;
      }
      *(uint *)(lVar12 + 0x44) = uVar6;
      *(uint *)(lVar12 + 0x48) = uVar1;
      if (10 < (int)param_1[0x3c] + iVar5) {
        puVar8 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar8 + 5) = 0xd;
        (*(code *)*puVar8)(param_1);
      }
      if (0 < iVar5) {
        uVar6 = iVar5 + 1;
        do {
          lVar12 = param_1[0x3c];
          *(int *)(param_1 + 0x3c) = (int)lVar12 + 1;
          *(int *)((long)param_1 + (long)(int)lVar12 * 4 + 0x1e4) = (int)lVar11;
          uVar6 = uVar6 - 1;
        } while (1 < uVar6);
      }
      lVar11 = lVar11 + 1;
      uVar7 = (ulong)(int)param_1[0x36];
    } while (lVar11 < (long)uVar7);
    if ((int)param_1[0x36] < 1) goto LAB_1081ce4b8;
  }
  lVar11 = 0;
  do {
    lVar12 = param_1[lVar11 + 0x37];
    if (*(long *)(lVar12 + 0x50) == 0) {
      uVar6 = *(uint *)(lVar12 + 0x10);
      if ((3 < uVar6) || (param_1[(ulong)uVar6 + 0x19] == 0)) {
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 0x34;
        *(uint *)(lVar9 + 0x2c) = uVar6;
        (**(code **)*param_1)(param_1);
      }
      plVar4 = param_1;
      (**(code **)param_1[1])(param_1,1,0x84);
      plVar10 = (long *)param_1[(long)(int)uVar6 + 0x19];
      lVar9 = *plVar10;
      plVar4[1] = plVar10[1];
      *plVar4 = lVar9;
      lVar13 = plVar10[3];
      lVar9 = plVar10[2];
      lVar15 = plVar10[5];
      lVar14 = plVar10[4];
      lVar16 = plVar10[6];
      lVar18 = plVar10[9];
      lVar17 = plVar10[8];
      plVar4[7] = plVar10[7];
      plVar4[6] = lVar16;
      plVar4[9] = lVar18;
      plVar4[8] = lVar17;
      plVar4[3] = lVar13;
      plVar4[2] = lVar9;
      plVar4[5] = lVar15;
      plVar4[4] = lVar14;
      lVar13 = plVar10[0xb];
      lVar9 = plVar10[10];
      lVar15 = plVar10[0xd];
      lVar14 = plVar10[0xc];
      lVar17 = plVar10[0xf];
      lVar16 = plVar10[0xe];
      *(int *)(plVar4 + 0x10) = (int)plVar10[0x10];
      plVar4[0xd] = lVar15;
      plVar4[0xc] = lVar14;
      plVar4[0xf] = lVar17;
      plVar4[0xe] = lVar16;
      plVar4[0xb] = lVar13;
      plVar4[10] = lVar9;
      *(long **)(lVar12 + 0x50) = plVar4;
      uVar7 = (ulong)*(uint *)(param_1 + 0x36);
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 < (int)uVar7);
LAB_1081ce4b8:
  (**(code **)param_1[0x4a])(param_1);
  (**(code **)param_1[0x46])(param_1);
  *(undefined8 *)param_1[0x48] = *(undefined8 *)(param_1[0x46] + 8);
  return;
}



/* Entry: 1081ce4fc; end: 1081ce50f;  */

void FUN_1081ce4fc(long param_1)

{
  **(undefined8 **)(param_1 + 0x240) = FUN_1081cdee4;
  return;
}



/* Entry: 1081ce510; end: 1081ce6cf;  */

void FUN_1081ce510(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  
  plVar2 = param_1;
  (**(code **)param_1[1])(param_1,1,0x88);
  param_1[0x45] = (long)plVar2;
  *plVar2 = (long)FUN_1081ce6d0;
  if (param_2 != 0) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 4;
    (*(code *)*puVar5)(param_1);
  }
  iVar6 = (int)param_1[0x34];
  if (*(int *)(param_1[0x4c] + 0x10) == 0) {
    iVar4 = (int)param_1[7];
  }
  else {
    if (iVar6 < 2) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x2f;
      (*(code *)*puVar5)(param_1);
      iVar6 = (int)param_1[0x34];
    }
    lVar7 = param_1[0x45];
    plVar3 = param_1;
    (**(code **)param_1[1])(param_1,1,(long)(int)param_1[7] << 4);
    iVar4 = (int)param_1[7];
    *(long **)(lVar7 + 0x68) = plVar3;
    *(long **)(lVar7 + 0x70) = plVar3 + iVar4;
    if (0 < iVar4) {
      lVar8 = 0;
      piVar9 = (int *)(param_1[0x26] + 0x24);
      do {
        iVar4 = 0;
        if ((int)param_1[0x34] != 0) {
          iVar4 = (*piVar9 * piVar9[-6]) / (int)param_1[0x34];
        }
        uVar1 = iVar4 * (iVar6 + 4);
        plVar3 = param_1;
        (**(code **)param_1[1])
                  (param_1,1,
                   -(ulong)((uVar1 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                   (ulong)(uVar1 * 2) << 3);
        *(long **)(*(long *)(lVar7 + 0x68) + lVar8 * 8) = plVar3 + iVar4;
        *(long **)(*(long *)(lVar7 + 0x70) + lVar8 * 8) = plVar3 + iVar4 + (int)uVar1;
        lVar8 = lVar8 + 1;
        iVar4 = (int)param_1[7];
        piVar9 = piVar9 + 0x18;
      } while (lVar8 < iVar4);
    }
    iVar6 = (int)param_1[0x34] + 2;
  }
  if (0 < iVar4) {
    lVar7 = 0;
    piVar9 = (int *)(param_1[0x26] + 0x1c);
    do {
      iVar4 = 0;
      if ((int)param_1[0x34] != 0) {
        iVar4 = (piVar9[2] * piVar9[-4]) / (int)param_1[0x34];
      }
      plVar3 = param_1;
      (**(code **)(param_1[1] + 0x10))(param_1,1,*piVar9 * piVar9[2],iVar4 * iVar6);
      plVar2[lVar7 + 2] = (long)plVar3;
      lVar7 = lVar7 + 1;
      piVar9 = piVar9 + 0x18;
    } while (lVar7 < (int)param_1[7]);
  }
  return;
}



/* Entry: 1081ce6d0; end: 1081ce80f;  */

void FUN_1081ce6d0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  
  lVar15 = param_1[0x45];
  if (param_2 == 2) {
    *(code **)(lVar15 + 8) = FUN_1081ceb68;
    return;
  }
  if (param_2 != 0) {
    param_1 = (undefined8 *)*param_1;
    *(undefined4 *)(param_1 + 5) = 4;
                    /* WARNING: Could not recover jumptable at 0x0001081ce7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)();
    return;
  }
  if (*(int *)(param_1[0x4c] + 0x10) == 0) {
    *(undefined8 *)(lVar15 + 8) = 0x1081ceac8;
  }
  else {
    *(code **)(lVar15 + 8) = FUN_1081ce810;
    uVar1 = *(uint *)(param_1 + 7);
    if (0 < (int)uVar1) {
      iVar2 = *(int *)(param_1 + 0x34);
      lVar16 = param_1[0x26];
      uVar17 = 0;
      do {
        uVar5 = 0;
        if (iVar2 != 0) {
          uVar5 = (*(int *)(lVar16 + 0x24) * *(int *)(lVar16 + 0xc)) / iVar2;
        }
        puVar18 = *(undefined8 **)(*(long *)(lVar15 + 0x68) + uVar17 * 8);
        puVar8 = *(undefined8 **)(*(long *)(lVar15 + 0x70) + uVar17 * 8);
        puVar9 = *(undefined8 **)(lVar15 + 0x10 + uVar17 * 8);
        uVar3 = uVar5 * (iVar2 + 2);
        uVar10 = (ulong)uVar3;
        puVar11 = puVar9;
        puVar12 = puVar8;
        puVar13 = puVar18;
        if (0 < (int)uVar3) {
          do {
            uVar14 = *puVar11;
            *puVar12 = uVar14;
            *puVar13 = uVar14;
            uVar10 = uVar10 - 1;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar10 != 0);
        }
        if (0 < (int)uVar5) {
          uVar3 = uVar5 * 2;
          iVar4 = uVar5 * (iVar2 + -2);
          if ((int)uVar3 < 2) {
            uVar3 = 1;
          }
          uVar10 = (ulong)uVar3;
          do {
            puVar8[iVar4] = puVar9[(int)(uVar5 * iVar2)];
            puVar8[(int)(uVar5 * iVar2)] = puVar9[iVar4];
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          uVar14 = *puVar18;
          lVar7 = -(ulong)uVar5;
          do {
            puVar18[lVar7] = uVar14;
            bVar6 = lVar7 != -1;
            lVar7 = lVar7 + 1;
          } while (bVar6);
        }
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 0x60;
      } while (uVar17 != uVar1);
    }
    *(undefined8 *)(lVar15 + 0x78) = 0;
    *(undefined4 *)(lVar15 + 0x84) = 0;
  }
  *(undefined8 *)(lVar15 + 0x60) = 0;
  return;
}



/* Entry: 1081ce810; end: 1081ceb67;  */

void FUN_1081ce810(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  
  lVar17 = *(long *)(param_1 + 0x228);
  if (*(int *)(lVar17 + 0x60) == 0) {
    lVar9 = param_1;
    (**(code **)(*(long *)(param_1 + 0x230) + 0x18))
              (param_1,*(undefined8 *)(lVar17 + (long)*(int *)(lVar17 + 0x78) * 8 + 0x68));
    if ((int)lVar9 == 0) {
      return;
    }
    *(undefined4 *)(lVar17 + 0x60) = 1;
    *(int *)(lVar17 + 0x84) = *(int *)(lVar17 + 0x84) + 1;
  }
  iVar1 = *(int *)(lVar17 + 0x7c);
  if (iVar1 != 0) {
    if (iVar1 == 1) goto LAB_1081ce99c;
    if (iVar1 != 2) {
      return;
    }
    (**(code **)(*(long *)(param_1 + 0x238) + 8))
              (param_1,*(undefined8 *)(lVar17 + (long)*(int *)(lVar17 + 0x78) * 8 + 0x68),
               lVar17 + 100,*(undefined4 *)(lVar17 + 0x80),param_2,param_3,param_4);
    if (*(uint *)(lVar17 + 100) < *(uint *)(lVar17 + 0x80)) {
      return;
    }
    *(undefined4 *)(lVar17 + 0x7c) = 0;
    if ((uint)param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(lVar17 + 100) = 0;
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(int *)(lVar17 + 0x80) = iVar1 + -1;
  if ((*(int *)(lVar17 + 0x84) == *(int *)(param_1 + 0x1a4)) &&
     (uVar2 = *(uint *)(param_1 + 0x38), 0 < (int)uVar2)) {
    uVar8 = 0;
    lVar9 = *(long *)(param_1 + 0x130);
    lVar10 = *(long *)(param_1 + 0x228);
    iVar3 = *(int *)(lVar10 + 0x78);
    do {
      uVar4 = *(int *)(lVar9 + 0x24) * *(int *)(lVar9 + 0xc);
      iVar5 = 0;
      if (iVar1 != 0) {
        iVar5 = (int)uVar4 / iVar1;
      }
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = *(uint *)(lVar9 + 0x2c) / uVar4;
      }
      uVar7 = *(uint *)(lVar9 + 0x2c) - uVar7 * uVar4;
      if (uVar7 != 0) {
        uVar4 = uVar7;
      }
      if (uVar8 == 0) {
        iVar6 = 0;
        if (iVar5 != 0) {
          iVar6 = (int)(uVar4 - 1) / iVar5;
        }
        *(int *)(lVar10 + 0x80) = iVar6 + 1;
      }
      if (0 < iVar5) {
        uVar7 = iVar5 * 2;
        if ((int)uVar7 < 2) {
          uVar7 = 1;
        }
        uVar11 = (ulong)uVar7;
        puVar13 = (undefined8 *)
                  (*(long *)(*(long *)(lVar10 + 0x68 + (long)iVar3 * 8) + uVar8 * 8) +
                  (long)(int)uVar4 * 8);
        uVar15 = puVar13[-1];
        do {
          *puVar13 = uVar15;
          uVar11 = uVar11 - 1;
          puVar13 = puVar13 + 1;
        } while (uVar11 != 0);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x60;
    } while (uVar8 != uVar2);
  }
  *(undefined4 *)(lVar17 + 0x7c) = 1;
LAB_1081ce99c:
  (**(code **)(*(long *)(param_1 + 0x238) + 8))
            (param_1,*(undefined8 *)(lVar17 + (long)*(int *)(lVar17 + 0x78) * 8 + 0x68),lVar17 + 100
             ,*(undefined4 *)(lVar17 + 0x80),param_2,param_3,param_4);
  if (*(uint *)(lVar17 + 0x80) <= *(uint *)(lVar17 + 100)) {
    iVar1 = *(int *)(param_1 + 0x1a0);
    if ((*(int *)(lVar17 + 0x84) == 1) && (uVar2 = *(uint *)(param_1 + 0x38), 0 < (int)uVar2)) {
      uVar8 = 0;
      lVar9 = *(long *)(param_1 + 0x130);
      lVar10 = *(long *)(param_1 + 0x228);
      do {
        uVar4 = 0;
        if (iVar1 != 0) {
          uVar4 = (*(int *)(lVar9 + 0x24) * *(int *)(lVar9 + 0xc)) / iVar1;
        }
        if (0 < (int)uVar4) {
          lVar12 = 0;
          lVar14 = *(long *)(*(long *)(lVar10 + 0x68) + uVar8 * 8);
          lVar16 = *(long *)(*(long *)(lVar10 + 0x70) + uVar8 * 8);
          iVar3 = uVar4 * (iVar1 + 1);
          iVar5 = uVar4 * (iVar1 + 2);
          do {
            *(undefined8 *)(lVar14 + (ulong)uVar4 * -8 + lVar12) =
                 *(undefined8 *)(lVar14 + (long)iVar3 * 8 + lVar12);
            *(undefined8 *)(lVar16 + (ulong)uVar4 * -8 + lVar12) =
                 *(undefined8 *)(lVar16 + (long)iVar3 * 8 + lVar12);
            *(undefined8 *)(lVar14 + (long)iVar5 * 8 + lVar12) = *(undefined8 *)(lVar14 + lVar12);
            *(undefined8 *)(lVar16 + (long)iVar5 * 8 + lVar12) = *(undefined8 *)(lVar16 + lVar12);
            lVar12 = lVar12 + 8;
          } while ((ulong)uVar4 << 3 != lVar12);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x60;
      } while (uVar8 != uVar2);
    }
    *(undefined4 *)(lVar17 + 0x60) = 0;
    *(int *)(lVar17 + 100) = iVar1 + 1;
    *(uint *)(lVar17 + 0x78) = *(uint *)(lVar17 + 0x78) ^ 1;
    *(undefined4 *)(lVar17 + 0x7c) = 2;
    *(int *)(lVar17 + 0x80) = iVar1 + 2;
  }
  return;
}



/* Entry: 1081ceb68; end: 1081ceb8b;  */

void FUN_1081ceb68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001081ceb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x238) + 8))(param_1,0,0,0,param_2,param_3,param_4);
  return;
}



/* Entry: 1081ceb8c; end: 1081cecff;  */

undefined8 FUN_1081ceb8c(long *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((long)param_1 + 0x21c);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x28) = 0x79;
  *(uint *)(lVar2 + 0x2c) = uVar3;
  *(int *)(*param_1 + 0x30) = param_2;
  (**(code **)(*param_1 + 8))(param_1,0xffffffff);
  do {
    if (0xbf < (int)uVar3) {
      if (((uVar3 - 0xd8 < 0xfffffff8) || (uVar3 == (param_2 + 1U & 7 | 0xd0))) ||
         (uVar3 == (param_2 + 2U & 7 | 0xd0))) {
        lVar2 = *param_1;
        *(undefined4 *)(lVar2 + 0x28) = 0x61;
        *(uint *)(lVar2 + 0x2c) = uVar3;
        *(undefined4 *)(*param_1 + 0x30) = 3;
        (**(code **)(*param_1 + 8))(param_1,4);
        return 1;
      }
      if ((uVar3 != (param_2 - 1U & 7 | 0xd0)) && (uVar3 != (param_2 + 6U & 7 | 0xd0))) {
        lVar2 = *param_1;
        *(undefined4 *)(lVar2 + 0x28) = 0x61;
        *(uint *)(lVar2 + 0x2c) = uVar3;
        *(undefined4 *)(*param_1 + 0x30) = 1;
        (**(code **)(*param_1 + 8))(param_1,4);
        *(undefined4 *)((long)param_1 + 0x21c) = 0;
        return 1;
      }
    }
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x61;
    *(uint *)(lVar2 + 0x2c) = uVar3;
    *(undefined4 *)(*param_1 + 0x30) = 2;
    (**(code **)(*param_1 + 8))(param_1,4);
    plVar1 = param_1;
    FUN_1081ced00();
    if ((int)plVar1 == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0x21c);
  } while( true );
}



/* Entry: 1081ced00; end: 1081cedfb;  */

void FUN_1081ced00(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar8;
  long lVar9;
  byte *pbVar7;
  
  puVar5 = (undefined8 *)param_1[5];
  lVar9 = puVar5[1];
  pbVar7 = (byte *)*puVar5;
  do {
    if (lVar9 == 0) {
      plVar2 = param_1;
      (*(code *)puVar5[3])();
      if ((int)plVar2 == 0) {
        return;
      }
      pbVar7 = (byte *)*puVar5;
      lVar9 = puVar5[1];
    }
    pbVar6 = pbVar7 + 1;
    lVar9 = lVar9 + -1;
    pbVar8 = pbVar6;
    if (*pbVar7 == 0xff) {
      do {
        if (lVar9 == 0) {
          plVar2 = param_1;
          (*(code *)puVar5[3])();
          if ((int)plVar2 == 0) {
            return;
          }
          pbVar8 = (byte *)*puVar5;
          lVar9 = puVar5[1];
        }
        lVar9 = lVar9 + -1;
        pbVar6 = pbVar8 + 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar6;
      } while (bVar1 == 0xff);
      if (bVar1 != 0) {
        iVar4 = *(int *)(param_1[0x49] + 0x24);
        if (iVar4 != 0) {
          lVar3 = *param_1;
          *(undefined4 *)(lVar3 + 0x28) = 0x74;
          *(int *)(lVar3 + 0x2c) = iVar4;
          *(uint *)(*param_1 + 0x30) = (uint)bVar1;
          (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          *(undefined4 *)(param_1[0x49] + 0x24) = 0;
        }
        *(uint *)((long)param_1 + 0x21c) = (uint)bVar1;
        *puVar5 = pbVar6;
        puVar5[1] = lVar9;
        return;
      }
      lVar3 = param_1[0x49];
      iVar4 = *(int *)(lVar3 + 0x24) + 2;
    }
    else {
      lVar3 = param_1[0x49];
      iVar4 = *(int *)(lVar3 + 0x24) + 1;
    }
    *(int *)(lVar3 + 0x24) = iVar4;
    *puVar5 = pbVar6;
    puVar5[1] = lVar9;
    pbVar7 = pbVar6;
  } while( true );
}



/* Entry: 1081cedfc; end: 1081ceeb7;  */

void FUN_1081cedfc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  (**(code **)param_1[1])(param_1,0,0x108);
  param_1[0x49] = puVar1;
  *puVar1 = FUN_1081ceeb8;
  puVar1[1] = FUN_1081ceed8;
  puVar1[2] = FUN_1081cfd10;
  puVar1[5] = FUN_1081cfdac;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  _memset_pattern16(puVar1 + 6,&PTR_FUN_110a2f070,0x80);
  *(undefined8 *)((long)puVar1 + 0xec) = 0;
  *(undefined8 *)((long)puVar1 + 0xe4) = 0;
  *(undefined8 *)((long)puVar1 + 0xdc) = 0;
  *(undefined8 *)((long)puVar1 + 0xd4) = 0;
  *(undefined8 *)((long)puVar1 + 0xcc) = 0;
  *(undefined8 *)((long)puVar1 + 0xc4) = 0;
  *(undefined8 *)((long)puVar1 + 0xbc) = 0;
  *(undefined8 *)((long)puVar1 + 0xb4) = 0;
  puVar1[6] = 0x1081cfe94;
  puVar1[0x14] = 0x1081cfe94;
  lVar2 = param_1[0x49];
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  return;
}



/* Entry: 1081ceeb8; end: 1081ceed7;  */

void FUN_1081ceeb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x24) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  return;
}



/* Entry: 1081ceed8; end: 1081cfd0f;  */

/* WARNING: Removing unreachable block (ram,0x0001081cf7e4) */

long * FUN_1081ceed8(long *param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  long lVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  byte *pbVar29;
  uint *puVar30;
  undefined1 uVar31;
  long lVar32;
  long lVar33;
  undefined8 uStack_181;
  undefined8 uStack_179;
  undefined8 uStack_171;
  undefined8 uStack_169;
  undefined8 uStack_161;
  undefined8 uStack_159;
  undefined8 uStack_151;
  undefined8 uStack_149;
  undefined8 uStack_141;
  undefined8 uStack_139;
  undefined8 uStack_131;
  undefined8 uStack_129;
  undefined8 uStack_121;
  undefined8 uStack_119;
  undefined8 uStack_111;
  undefined8 uStack_109;
  undefined8 uStack_101;
  undefined8 uStack_f9;
  undefined8 uStack_f1;
  undefined8 uStack_e9;
  undefined8 uStack_e1;
  undefined8 uStack_d9;
  undefined8 uStack_d1;
  undefined8 uStack_c9;
  undefined8 uStack_c1;
  undefined8 uStack_b9;
  undefined8 uStack_b1;
  undefined8 uStack_a9;
  undefined8 uStack_a1;
  undefined8 uStack_99;
  undefined8 uStack_91;
  undefined8 uStack_89;
  byte bStack_81;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = *(uint *)((long)param_1 + 0x21c);
  if (uVar20 != 0) goto LAB_1081ceff8;
  do {
    if (*(int *)(param_1[0x49] + 0x18) == 0) {
      puVar24 = (undefined8 *)param_1[5];
      lVar13 = puVar24[1];
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        lVar13 = puVar24[1];
      }
      pbVar23 = (byte *)*puVar24 + 1;
      bVar2 = *(byte *)*puVar24;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        pbVar23 = (byte *)*puVar24;
        lVar13 = puVar24[1];
      }
      uVar20 = (uint)*pbVar23;
      uVar28 = (uint)bVar2;
      if ((uVar28 != 0xff) || (uVar20 != 0xd8)) {
        lVar12 = *param_1;
        *(undefined4 *)(lVar12 + 0x28) = 0x35;
        *(uint *)(lVar12 + 0x2c) = uVar28;
        *(uint *)(*param_1 + 0x30) = uVar20;
        (**(code **)*param_1)(param_1);
      }
      *(uint *)((long)param_1 + 0x21c) = uVar20;
      *puVar24 = pbVar23 + 1;
      puVar24[1] = lVar13 + -1;
    }
    else {
      plVar8 = param_1;
      FUN_1081ced00();
      if ((int)plVar8 == 0) goto LAB_1081cfccc;
      uVar20 = *(uint *)((long)param_1 + 0x21c);
    }
LAB_1081ceff8:
    switch(uVar20) {
    case 0xc0:
    case 0xc1:
      uVar9 = 0;
      goto code_r0x0001081cf3e4;
    case 0xc2:
      uVar9 = 1;
code_r0x0001081cf3e4:
      uVar10 = 0;
code_r0x0001081cf7d0:
      plVar8 = param_1;
      FUN_1081d0354(param_1,uVar9,uVar10);
      iVar7 = (int)plVar8;
joined_r0x0001081cf93c:
      if (iVar7 == 0) goto LAB_1081cfccc;
      break;
    case 0xc3:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xcb:
    case 0xcd:
    case 0xce:
    case 0xcf:
      lVar13 = *param_1;
      uVar18 = 0x3c;
      goto LAB_1081cf03c;
    case 0xc4:
      puVar24 = (undefined8 *)param_1[5];
      lVar13 = puVar24[1];
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        lVar13 = puVar24[1];
      }
      puVar26 = (undefined1 *)*puVar24 + 1;
      uVar31 = *(undefined1 *)*puVar24;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        puVar26 = (undefined1 *)*puVar24;
        lVar13 = puVar24[1];
      }
      lVar13 = lVar13 + -1;
      pbVar23 = puVar26 + 1;
      uVar16 = (ulong)CONCAT11(uVar31,*puVar26);
      lVar12 = uVar16 - 2;
      if (0x12 < uVar16) {
        do {
          if (lVar13 == 0) {
            plVar8 = param_1;
            (*(code *)puVar24[3])();
            if ((int)plVar8 == 0) goto LAB_1081cfccc;
            pbVar23 = (byte *)*puVar24;
            lVar13 = puVar24[1];
          }
          bVar2 = *pbVar23;
          lVar19 = *param_1;
          *(undefined4 *)(lVar19 + 0x28) = 0x50;
          *(uint *)(lVar19 + 0x2c) = (uint)bVar2;
          (**(code **)(*param_1 + 8))(param_1,1);
          uVar16 = 0;
          bStack_81 = 0;
          lVar13 = lVar13 + -1;
          lVar19 = 1;
          pbVar29 = pbVar23 + 1;
          do {
            if (lVar13 == 0) {
              plVar8 = param_1;
              (*(code *)puVar24[3])();
              if ((int)plVar8 == 0) goto LAB_1081cfccc;
              pbVar29 = (byte *)*puVar24;
              lVar13 = puVar24[1];
            }
            pbVar23 = pbVar29 + 1;
            bVar4 = *pbVar29;
            (&bStack_81)[lVar19] = bVar4;
            uVar20 = (int)uVar16 + (uint)bVar4;
            uVar16 = (ulong)uVar20;
            lVar19 = lVar19 + 1;
            lVar13 = lVar13 + -1;
            pbVar29 = pbVar23;
          } while (lVar19 != 0x11);
          lVar19 = *param_1;
          uVar31 = (undefined1)(uStack_80 >> 8);
          *(ulong *)(lVar19 + 0x34) =
               (ulong)(CONCAT14((char)(uStack_80 >> 0x18),uStack_80 >> 0x10) & 0xff000000ff);
          *(ulong *)(lVar19 + 0x2c) =
               (ulong)((uint6)CONCAT14(uVar31,(uint)CONCAT12(uVar31,(ushort)(byte)uStack_80)) &
                      0xffff0000ffff);
          uVar31 = (undefined1)(uStack_7c >> 8);
          *(ulong *)(lVar19 + 0x44) =
               (ulong)(CONCAT14((char)(uStack_7c >> 0x18),uStack_7c >> 0x10) & 0xff000000ff);
          *(ulong *)(lVar19 + 0x3c) =
               (ulong)((uint6)CONCAT14(uVar31,(uint)CONCAT12(uVar31,(ushort)(byte)uStack_7c)) &
                      0xffff0000ffff);
          *(undefined4 *)(lVar19 + 0x28) = 0x56;
          (**(code **)(lVar19 + 8))(param_1,2);
          lVar19 = *param_1;
          uVar31 = (undefined1)(uStack_78 >> 8);
          *(ulong *)(lVar19 + 0x34) =
               (ulong)(CONCAT14((char)(uStack_78 >> 0x18),uStack_78 >> 0x10) & 0xff000000ff);
          *(ulong *)(lVar19 + 0x2c) =
               (ulong)((uint6)CONCAT14(uVar31,(uint)CONCAT12(uVar31,(ushort)(byte)uStack_78)) &
                      0xffff0000ffff);
          uVar31 = (undefined1)(uStack_74 >> 8);
          *(ulong *)(lVar19 + 0x44) =
               (ulong)(CONCAT14((char)(uStack_74 >> 0x18),uStack_74 >> 0x10) & 0xff000000ff);
          *(ulong *)(lVar19 + 0x3c) =
               (ulong)((uint6)CONCAT14(uVar31,(uint)CONCAT12(uVar31,(ushort)(byte)uStack_74)) &
                      0xffff0000ffff);
          *(undefined4 *)(lVar19 + 0x28) = 0x56;
          (**(code **)(lVar19 + 8))(param_1,2);
          if ((0x100 < uVar20) || (lVar12 + -0x11 < (long)uVar16)) {
            puVar14 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar14 + 5) = 8;
            (*(code *)*puVar14)(param_1);
          }
          if (uVar20 != 0) {
            pbVar25 = (byte *)&uStack_181;
            uVar17 = uVar16;
            do {
              if (lVar13 == 0) {
                plVar8 = param_1;
                (*(code *)puVar24[3])();
                if ((int)plVar8 == 0) goto LAB_1081cfccc;
                pbVar29 = (byte *)*puVar24;
                lVar13 = puVar24[1];
              }
              lVar13 = lVar13 + -1;
              pbVar23 = pbVar29 + 1;
              *pbVar25 = *pbVar29;
              uVar17 = uVar17 - 1;
              pbVar25 = pbVar25 + 1;
              pbVar29 = pbVar23;
            } while (uVar17 != 0);
          }
          _bzero((long)&uStack_181 + uVar16,(long)(int)(0x100 - uVar20));
          uVar20 = (uint)bVar2;
          if ((bVar2 >> 4 & 1) == 0) {
            if (3 < uVar20) {
              lVar19 = *param_1;
              *(undefined4 *)(lVar19 + 0x28) = 0x1e;
              *(uint *)(lVar19 + 0x2c) = uVar20;
              (**(code **)*param_1)(param_1);
            }
            lVar19 = (ulong)bVar2 + 0x1d;
          }
          else {
            if (0x13 < uVar20) {
              lVar19 = *param_1;
              *(undefined4 *)(lVar19 + 0x28) = 0x1e;
              *(uint *)(lVar19 + 0x2c) = uVar20 - 0x10;
              (**(code **)*param_1)(param_1);
            }
            lVar19 = (ulong)(uVar20 - 0x10) + 0x21;
          }
          plVar22 = param_1 + lVar19;
          plVar8 = (long *)*plVar22;
          if (plVar8 == (long *)0x0) {
            plVar8 = param_1;
            (**(code **)param_1[1])(param_1,0,0x118);
            *(undefined4 *)((long)plVar8 + 0x114) = 0;
            *plVar22 = (long)plVar8;
          }
          *(undefined1 *)(plVar8 + 2) = uStack_74._3_1_;
          plVar8[1] = CONCAT35((undefined3)uStack_74,CONCAT41(uStack_78,uStack_7c._3_1_));
          *plVar8 = CONCAT35((undefined3)uStack_7c,CONCAT41(uStack_80,bStack_81));
          lVar19 = *plVar22;
          *(undefined8 *)(lVar19 + 0xd9) = uStack_b9;
          *(undefined8 *)(lVar19 + 0xd1) = uStack_c1;
          *(undefined8 *)(lVar19 + 0xe9) = uStack_a9;
          *(undefined8 *)(lVar19 + 0xe1) = uStack_b1;
          *(undefined8 *)(lVar19 + 0xf9) = uStack_99;
          *(undefined8 *)(lVar19 + 0xf1) = uStack_a1;
          *(undefined8 *)(lVar19 + 0x99) = uStack_f9;
          *(undefined8 *)(lVar19 + 0x91) = uStack_101;
          *(undefined8 *)(lVar19 + 0xa9) = uStack_e9;
          *(undefined8 *)(lVar19 + 0xa1) = uStack_f1;
          *(undefined8 *)(lVar19 + 0xb9) = uStack_d9;
          *(undefined8 *)(lVar19 + 0xb1) = uStack_e1;
          *(undefined8 *)(lVar19 + 0xc9) = uStack_c9;
          *(undefined8 *)(lVar19 + 0xc1) = uStack_d1;
          *(undefined8 *)(lVar19 + 0x59) = uStack_139;
          *(undefined8 *)(lVar19 + 0x51) = uStack_141;
          *(undefined8 *)(lVar19 + 0x69) = uStack_129;
          *(undefined8 *)(lVar19 + 0x61) = uStack_131;
          *(undefined8 *)(lVar19 + 0x79) = uStack_119;
          *(undefined8 *)(lVar19 + 0x71) = uStack_121;
          *(undefined8 *)(lVar19 + 0x89) = uStack_109;
          *(undefined8 *)(lVar19 + 0x81) = uStack_111;
          *(undefined8 *)(lVar19 + 0x19) = uStack_179;
          *(undefined8 *)(lVar19 + 0x11) = uStack_181;
          *(undefined8 *)(lVar19 + 0x29) = uStack_169;
          *(undefined8 *)(lVar19 + 0x21) = uStack_171;
          *(undefined8 *)(lVar19 + 0x39) = uStack_159;
          *(undefined8 *)(lVar19 + 0x31) = uStack_161;
          *(undefined8 *)(lVar19 + 0x49) = uStack_149;
          *(undefined8 *)(lVar19 + 0x41) = uStack_151;
          lVar12 = (lVar12 + -0x11) - uVar16;
          *(undefined8 *)(lVar19 + 0x109) = uStack_89;
          *(undefined8 *)(lVar19 + 0x101) = uStack_91;
        } while (0x10 < lVar12);
      }
      if (lVar12 != 0) {
        puVar14 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar14 + 5) = 0xb;
        (*(code *)*puVar14)(param_1);
      }
      *puVar24 = pbVar23;
      puVar24[1] = lVar13;
      break;
    case 0xc9:
      uVar9 = 0;
      goto code_r0x0001081cf7cc;
    case 0xca:
      uVar9 = 1;
code_r0x0001081cf7cc:
      uVar10 = 1;
      goto code_r0x0001081cf7d0;
    case 0xcc:
      plVar22 = (long *)param_1[5];
      lVar13 = plVar22[1];
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)plVar22[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        lVar13 = plVar22[1];
      }
      puVar26 = (undefined1 *)*plVar22 + 1;
      uVar31 = *(undefined1 *)*plVar22;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)plVar22[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        puVar26 = (undefined1 *)*plVar22;
        lVar13 = plVar22[1];
      }
      pbVar23 = puVar26 + 1;
      uVar16 = (ulong)CONCAT11(uVar31,*puVar26);
      lVar13 = lVar13 + -1;
      if (uVar16 < 3) {
        lVar12 = uVar16 - 2;
      }
      else {
        do {
          if (lVar13 == 0) {
            plVar8 = param_1;
            (*(code *)plVar22[3])();
            if ((int)plVar8 == 0) goto LAB_1081cfccc;
            pbVar23 = (byte *)*plVar22;
            lVar13 = plVar22[1];
          }
          pbVar29 = pbVar23 + 1;
          bVar2 = *pbVar23;
          lVar13 = lVar13 + -1;
          if (lVar13 == 0) {
            plVar8 = param_1;
            (*(code *)plVar22[3])();
            if ((int)plVar8 == 0) goto LAB_1081cfccc;
            pbVar29 = (byte *)*plVar22;
            lVar13 = plVar22[1];
          }
          bVar4 = *pbVar29;
          lVar12 = *param_1;
          *(undefined4 *)(lVar12 + 0x28) = 0x4f;
          *(uint *)(lVar12 + 0x2c) = (uint)bVar2;
          *(uint *)(*param_1 + 0x30) = (uint)bVar4;
          (**(code **)(*param_1 + 8))(param_1,1);
          uVar20 = (uint)bVar2;
          if (bVar2 < 0x20) {
            if (0xf < uVar20) goto code_r0x0001081cf8d8;
            uVar28 = bVar4 & 0xf;
            *(char *)((long)(param_1 + 0x28) + (ulong)uVar20) = (char)uVar28;
            *(byte *)((long)(param_1 + 0x2a) + (ulong)(uint)bVar2) = bVar4 >> 4;
            if (bVar4 >> 4 < uVar28) {
              lVar12 = *param_1;
              *(undefined4 *)(lVar12 + 0x28) = 0x1d;
              *(uint *)(lVar12 + 0x2c) = (uint)bVar4;
              (**(code **)*param_1)(param_1);
            }
          }
          else {
            lVar12 = *param_1;
            *(undefined4 *)(lVar12 + 0x28) = 0x1c;
            *(uint *)(lVar12 + 0x2c) = (uint)bVar2;
            (**(code **)*param_1)(param_1);
code_r0x0001081cf8d8:
            *(byte *)((long)(param_1 + 0x2c) + (ulong)(uVar20 - 0x10)) = bVar4;
          }
          pbVar23 = pbVar29 + 1;
          lVar13 = lVar13 + -1;
          uVar17 = uVar16 - 2;
          lVar12 = uVar16 - 4;
          uVar16 = uVar17;
        } while (1 < uVar17 && lVar12 != 0);
      }
      if (lVar12 != 0) {
        puVar24 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar24 + 5) = 0xb;
        (*(code *)*puVar24)(param_1);
      }
      *plVar22 = (long)pbVar23;
      plVar22[1] = lVar13;
      break;
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
      goto code_r0x0001081cf068;
    case 0xd8:
      lVar13 = *param_1;
      *(undefined4 *)(lVar13 + 0x28) = 0x66;
      (**(code **)(lVar13 + 8))(param_1,1);
      lVar13 = param_1[0x49];
      if (*(int *)(lVar13 + 0x18) != 0) {
        puVar24 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar24 + 5) = 0x3d;
        (*(code *)*puVar24)(param_1);
        lVar13 = param_1[0x49];
      }
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      param_1[0x2a] = 0x101010101010101;
      param_1[0x2b] = 0x101010101010101;
      param_1[0x2c] = 0x505050505050505;
      param_1[0x2d] = 0x505050505050505;
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x31) = 0;
      param_1[0x2e] = 0;
      *(undefined2 *)(param_1 + 0x2f) = 0x101;
      *(undefined1 *)((long)param_1 + 0x17a) = 0;
      *(undefined8 *)((long)param_1 + 0x17c) = 0x10001;
      *(undefined1 *)((long)param_1 + 0x184) = 0;
      *(undefined4 *)(lVar13 + 0x18) = 1;
      break;
    case 0xd9:
      lVar13 = *param_1;
      *(undefined4 *)(lVar13 + 0x28) = 0x55;
      plVar8 = param_1;
      (**(code **)(lVar13 + 8))(param_1,1);
      *(undefined4 *)((long)param_1 + 0x21c) = 0;
      plVar22 = (long *)0x2;
      goto code_r0x0001081cfcd0;
    case 0xda:
      puVar24 = (undefined8 *)param_1[5];
      puVar26 = (undefined1 *)*puVar24;
      lVar13 = puVar24[1];
      if (*(int *)(param_1[0x49] + 0x1c) == 0) {
        puVar14 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar14 + 5) = 0x3e;
        (*(code *)*puVar14)(param_1);
      }
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        puVar26 = (undefined1 *)*puVar24;
        lVar13 = puVar24[1];
      }
      puVar27 = puVar26 + 1;
      uVar31 = *puVar26;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        puVar27 = (undefined1 *)*puVar24;
        lVar13 = puVar24[1];
      }
      pbVar23 = puVar27 + 1;
      uVar3 = *puVar27;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        pbVar23 = (byte *)*puVar24;
        lVar13 = puVar24[1];
      }
      bVar2 = *pbVar23;
      lVar12 = *param_1;
      *(undefined4 *)(lVar12 + 0x28) = 0x67;
      *(uint *)(lVar12 + 0x2c) = (uint)bVar2;
      (**(code **)(*param_1 + 8))(param_1,1);
      uVar20 = (uint)bVar2;
      if ((ulong)CONCAT11(uVar31,uVar3) == (ulong)bVar2 * 2 + 6 && 0xfffffffb < bVar2 - 5) {
        *(uint *)(param_1 + 0x36) = uVar20;
        param_1[0x38] = 0;
        param_1[0x37] = 0;
        param_1[0x3a] = 0;
        param_1[0x39] = 0;
      }
      else {
        puVar14 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar14 + 5) = 0xb;
        (*(code *)*puVar14)(param_1);
        *(uint *)(param_1 + 0x36) = uVar20;
        param_1[0x38] = 0;
        param_1[0x37] = 0;
        param_1[0x3a] = 0;
        param_1[0x39] = 0;
        pbVar29 = pbVar23 + 1;
        lVar12 = lVar13 + -1;
        if (uVar20 == 0) goto code_r0x0001081cfbf4;
      }
      pbVar29 = pbVar23 + 1;
      lVar12 = lVar13 + -1;
      uVar16 = 0;
      goto code_r0x0001081cfac4;
    case 0xdb:
      plVar22 = (long *)param_1[5];
      lVar13 = plVar22[1];
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)plVar22[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        lVar13 = plVar22[1];
      }
      puVar26 = (undefined1 *)*plVar22 + 1;
      uVar31 = *(undefined1 *)*plVar22;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)plVar22[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        puVar26 = (undefined1 *)*plVar22;
        lVar13 = plVar22[1];
      }
      lVar13 = lVar13 + -1;
      pbVar23 = puVar26 + 1;
      uVar16 = (ulong)CONCAT11(uVar31,*puVar26);
      lVar12 = uVar16 - 2;
      if (2 < uVar16) {
        do {
          if (lVar13 == 0) {
            plVar8 = param_1;
            (*(code *)plVar22[3])();
            if ((int)plVar8 == 0) goto LAB_1081cfccc;
            pbVar23 = (byte *)*plVar22;
            lVar13 = plVar22[1];
          }
          bVar2 = *pbVar23;
          uVar16 = (ulong)bVar2 & 0xf;
          lVar19 = *param_1;
          uVar20 = (uint)uVar16;
          *(undefined4 *)(lVar19 + 0x28) = 0x51;
          *(uint *)(lVar19 + 0x2c) = uVar20;
          *(uint *)(*param_1 + 0x30) = (uint)(bVar2 >> 4);
          (**(code **)(*param_1 + 8))(param_1,1);
          if (3 < uVar20) {
            lVar19 = *param_1;
            *(undefined4 *)(lVar19 + 0x28) = 0x1f;
            *(uint *)(lVar19 + 0x2c) = uVar20;
            (**(code **)*param_1)(param_1);
          }
          plVar21 = (long *)param_1[uVar16 + 0x19];
          if (plVar21 == (long *)0x0) {
            plVar21 = param_1;
            (**(code **)param_1[1])(param_1,0,0x84);
            *(undefined4 *)(plVar21 + 0x10) = 0;
            param_1[uVar16 + 0x19] = (long)plVar21;
          }
          lVar19 = 0;
          lVar13 = lVar13 + -1;
          pbVar23 = pbVar23 + 1;
          do {
            if (bVar2 < 0x10) {
              pbVar29 = pbVar23;
              if (lVar13 == 0) {
                plVar8 = param_1;
                (*(code *)plVar22[3])();
                if ((int)plVar8 == 0) goto LAB_1081cfccc;
                pbVar29 = (byte *)*plVar22;
                lVar13 = plVar22[1];
              }
              uVar11 = (ushort)*pbVar29;
            }
            else {
              if (lVar13 == 0) {
                plVar8 = param_1;
                (*(code *)plVar22[3])();
                if ((int)plVar8 == 0) goto LAB_1081cfccc;
                pbVar23 = (byte *)*plVar22;
                lVar13 = plVar22[1];
              }
              pbVar29 = pbVar23 + 1;
              bVar4 = *pbVar23;
              lVar13 = lVar13 + -1;
              if (lVar13 == 0) {
                plVar8 = param_1;
                (*(code *)plVar22[3])();
                if ((int)plVar8 == 0) goto LAB_1081cfccc;
                pbVar29 = (byte *)*plVar22;
                lVar13 = plVar22[1];
              }
              uVar11 = CONCAT11(bVar4,*pbVar29);
            }
            *(ushort *)((long)plVar21 + (long)*(int *)(&UNK_10df094f8 + lVar19) * 2) = uVar11;
            lVar13 = lVar13 + -1;
            pbVar23 = pbVar29 + 1;
            lVar19 = lVar19 + 4;
          } while (lVar19 != 0x100);
          if (1 < *(int *)(*param_1 + 0x7c)) {
            plVar21 = plVar21 + 1;
            uVar16 = 0xfffffffffffffff8;
            do {
              lVar19 = *param_1;
              lVar32 = plVar21[-1];
              lVar33 = *plVar21;
              *(ulong *)(lVar19 + 0x34) =
                   (ulong)CONCAT24((short)((ulong)lVar32 >> 0x30),
                                   (uint)(ushort)((ulong)lVar32 >> 0x20));
              *(ulong *)(lVar19 + 0x2c) =
                   (ulong)(CONCAT24((short)((ulong)lVar32 >> 0x10),(int)lVar32) & 0xffff0000ffff);
              *(ulong *)(lVar19 + 0x44) =
                   (ulong)CONCAT24((short)((ulong)lVar33 >> 0x30),
                                   (uint)(ushort)((ulong)lVar33 >> 0x20));
              *(ulong *)(lVar19 + 0x3c) =
                   (ulong)(CONCAT24((short)((ulong)lVar33 >> 0x10),(int)lVar33) & 0xffff0000ffff);
              *(undefined4 *)(lVar19 + 0x28) = 0x5d;
              (**(code **)(lVar19 + 8))(param_1,2);
              uVar16 = uVar16 + 8;
              plVar21 = plVar21 + 2;
            } while (uVar16 < 0x38);
          }
          lVar19 = -0x41;
          if (0xf < bVar2) {
            lVar19 = -0x81;
          }
          bVar6 = SCARRY8(lVar19,lVar12);
          lVar12 = lVar19 + lVar12;
        } while (lVar12 != 0 && lVar12 < 0 == bVar6);
      }
      if (lVar12 != 0) {
        puVar24 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar24 + 5) = 0xb;
        (*(code *)*puVar24)(param_1);
      }
      *plVar22 = (long)pbVar23;
      plVar22[1] = lVar13;
      break;
    case 0xdc:
      plVar8 = param_1;
      FUN_1081cfdac();
      iVar7 = (int)plVar8;
      goto joined_r0x0001081cf93c;
    case 0xdd:
      puVar24 = (undefined8 *)param_1[5];
      lVar13 = puVar24[1];
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        lVar13 = puVar24[1];
      }
      puVar26 = (undefined1 *)*puVar24 + 1;
      uVar31 = *(undefined1 *)*puVar24;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        puVar26 = (undefined1 *)*puVar24;
        lVar13 = puVar24[1];
      }
      puVar27 = puVar26 + 1;
      if (CONCAT11(uVar31,*puVar26) != 4) {
        puVar14 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar14 + 5) = 0xb;
        (*(code *)*puVar14)(param_1);
      }
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        puVar27 = (undefined1 *)*puVar24;
        lVar13 = puVar24[1];
      }
      puVar26 = puVar27 + 1;
      uVar31 = *puVar27;
      lVar13 = lVar13 + -1;
      if (lVar13 == 0) {
        plVar8 = param_1;
        (*(code *)puVar24[3])();
        if ((int)plVar8 == 0) goto LAB_1081cfccc;
        puVar26 = (undefined1 *)*puVar24;
        lVar13 = puVar24[1];
      }
      uVar3 = *puVar26;
      lVar12 = *param_1;
      *(undefined4 *)(lVar12 + 0x28) = 0x52;
      *(uint *)(lVar12 + 0x2c) = (uint)CONCAT11(uVar31,uVar3);
      (**(code **)(*param_1 + 8))(param_1,1);
      *(uint *)(param_1 + 0x2e) = (uint)CONCAT11(uVar31,uVar3);
      *puVar24 = puVar26 + 1;
      puVar24[1] = lVar13 + -1;
      break;
    case 0xde:
    case 0xdf:
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf6:
    case 0xf7:
    case 0xf8:
    case 0xf9:
    case 0xfa:
    case 0xfb:
    case 0xfc:
    case 0xfd:
LAB_1081cf08c:
      lVar13 = *param_1;
      uVar18 = 0x44;
LAB_1081cf03c:
      *(undefined4 *)(lVar13 + 0x28) = uVar18;
      *(uint *)(lVar13 + 0x2c) = uVar20;
      (**(code **)*param_1)(param_1);
      break;
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
      pcVar15 = *(code **)(param_1[0x49] + (ulong)(uVar20 - 0xe0) * 8 + 0x30);
      goto code_r0x0001081cf024;
    case 0xfe:
      pcVar15 = *(code **)(param_1[0x49] + 0x28);
code_r0x0001081cf024:
      plVar8 = param_1;
      (*pcVar15)();
      iVar7 = (int)plVar8;
      goto joined_r0x0001081cf93c;
    default:
      if (uVar20 != 1) goto LAB_1081cf08c;
code_r0x0001081cf068:
      lVar13 = *param_1;
      *(undefined4 *)(lVar13 + 0x28) = 0x5c;
      *(uint *)(lVar13 + 0x2c) = uVar20;
      (**(code **)(*param_1 + 8))(param_1,1);
    }
    *(undefined4 *)((long)param_1 + 0x21c) = 0;
  } while( true );
code_r0x0001081cfac4:
  do {
    if (lVar12 == 0) {
      plVar8 = param_1;
      (*(code *)puVar24[3])();
      if ((int)plVar8 == 0) goto LAB_1081cfccc;
      pbVar29 = (byte *)*puVar24;
      lVar12 = puVar24[1];
    }
    pbVar23 = pbVar29 + 1;
    bVar4 = *pbVar29;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      plVar8 = param_1;
      (*(code *)puVar24[3])();
      if ((int)plVar8 == 0) goto LAB_1081cfccc;
      pbVar23 = (byte *)*puVar24;
      lVar12 = puVar24[1];
    }
    bVar5 = *pbVar23;
    puVar30 = (uint *)param_1[0x26];
    uVar20 = (int)param_1[7] - 1;
    uVar28 = (uint)bVar4;
    if (0 < (int)param_1[7]) {
      if (2 < uVar20) {
        uVar20 = 3;
      }
      uVar17 = (ulong)(uVar20 + 1);
      plVar8 = param_1 + 0x37;
      do {
        if ((*puVar30 == uVar28) && (*plVar8 == 0)) goto code_r0x0001081cfb60;
        puVar30 = puVar30 + 0x18;
        plVar8 = plVar8 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    lVar13 = *param_1;
    *(undefined4 *)(lVar13 + 0x28) = 5;
    *(uint *)(lVar13 + 0x2c) = uVar28;
    (**(code **)*param_1)(param_1);
code_r0x0001081cfb60:
    (param_1 + 0x37)[uVar16] = (long)puVar30;
    puVar30[5] = (uint)(bVar5 >> 4);
    puVar30[6] = bVar5 & 0xf;
    lVar13 = *param_1;
    *(uint *)(lVar13 + 0x2c) = uVar28;
    *(uint *)(lVar13 + 0x30) = puVar30[5];
    *(uint *)(lVar13 + 0x34) = puVar30[6];
    *(undefined4 *)(lVar13 + 0x28) = 0x68;
    (**(code **)(lVar13 + 8))(param_1,1);
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if ((uint *)param_1[uVar17 + 0x37] == puVar30) {
          lVar13 = *param_1;
          *(undefined4 *)(lVar13 + 0x28) = 5;
          *(uint *)(lVar13 + 0x2c) = uVar28;
          (**(code **)*param_1)(param_1);
        }
        uVar17 = uVar17 + 1;
      } while (uVar16 != uVar17);
    }
    uVar16 = uVar16 + 1;
    pbVar29 = pbVar23 + 1;
    lVar12 = lVar12 + -1;
  } while (uVar16 != bVar2);
code_r0x0001081cfbf4:
  if (lVar12 == 0) {
    plVar8 = param_1;
    (*(code *)puVar24[3])();
    if ((int)plVar8 != 0) {
      pbVar29 = (byte *)*puVar24;
      lVar12 = puVar24[1];
      goto code_r0x0001081cfc0c;
    }
LAB_1081cfccc:
    plVar22 = (long *)0x0;
  }
  else {
code_r0x0001081cfc0c:
    pbVar23 = pbVar29 + 1;
    *(uint *)((long)param_1 + 0x20c) = (uint)*pbVar29;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      plVar8 = param_1;
      (*(code *)puVar24[3])();
      if ((int)plVar8 == 0) goto LAB_1081cfccc;
      pbVar23 = (byte *)*puVar24;
      lVar12 = puVar24[1];
    }
    pbVar29 = pbVar23 + 1;
    *(uint *)(param_1 + 0x42) = (uint)*pbVar23;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      plVar8 = param_1;
      (*(code *)puVar24[3])();
      if ((int)plVar8 == 0) goto LAB_1081cfccc;
      pbVar29 = (byte *)*puVar24;
      lVar12 = puVar24[1];
    }
    bVar2 = *pbVar29;
    *(uint *)((long)param_1 + 0x214) = (uint)(bVar2 >> 4);
    *(uint *)(param_1 + 0x43) = bVar2 & 0xf;
    lVar13 = *param_1;
    *(undefined4 *)(lVar13 + 0x2c) = *(undefined4 *)((long)param_1 + 0x20c);
    *(int *)(lVar13 + 0x30) = (int)param_1[0x42];
    *(undefined4 *)(lVar13 + 0x34) = *(undefined4 *)((long)param_1 + 0x214);
    *(int *)(lVar13 + 0x38) = (int)param_1[0x43];
    *(undefined4 *)(lVar13 + 0x28) = 0x69;
    plVar22 = (long *)0x1;
    plVar8 = param_1;
    (**(code **)(lVar13 + 8))(param_1,1);
    *(undefined4 *)(param_1[0x49] + 0x20) = 0;
    *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
    *puVar24 = pbVar29 + 1;
    puVar24[1] = lVar12 + -1;
    *(undefined4 *)((long)param_1 + 0x21c) = 0;
  }
code_r0x0001081cfcd0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar22;
  }
  ___stack_chk_fail();
  iVar7 = *(int *)((long)plVar8 + 0x21c);
  if (iVar7 == 0) {
    plVar22 = plVar8;
    FUN_1081ced00();
    if ((int)plVar22 == 0) {
      return plVar22;
    }
    iVar7 = *(int *)((long)plVar8 + 0x21c);
  }
  iVar1 = *(int *)(plVar8[0x49] + 0x20);
  if (iVar7 == iVar1 + 0xd0) {
    lVar13 = *plVar8;
    *(undefined4 *)(lVar13 + 0x28) = 0x62;
    *(int *)(lVar13 + 0x2c) = iVar1;
    (**(code **)(*plVar8 + 8))(plVar8,3);
    *(undefined4 *)((long)plVar8 + 0x21c) = 0;
  }
  else {
    plVar22 = plVar8;
    (**(code **)(plVar8[5] + 0x28))();
    if ((int)plVar22 == 0) {
      return plVar22;
    }
  }
  *(uint *)(plVar8[0x49] + 0x20) = *(int *)(plVar8[0x49] + 0x20) + 1U & 7;
  return (long *)0x1;
}



/* Entry: 1081cfd10; end: 1081cfdab;  */

void FUN_1081cfd10(long *param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)((long)param_1 + 0x21c);
  if (iVar3 == 0) {
    plVar2 = param_1;
    FUN_1081ced00();
    if ((int)plVar2 == 0) {
      return;
    }
    iVar3 = *(int *)((long)param_1 + 0x21c);
  }
  iVar1 = *(int *)(param_1[0x49] + 0x20);
  if (iVar3 == iVar1 + 0xd0) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x62;
    *(int *)(lVar4 + 0x2c) = iVar1;
    (**(code **)(*param_1 + 8))(param_1,3);
    *(undefined4 *)((long)param_1 + 0x21c) = 0;
  }
  else {
    plVar2 = param_1;
    (**(code **)(param_1[5] + 0x28))();
    if ((int)plVar2 == 0) {
      return;
    }
  }
  *(uint *)(param_1[0x49] + 0x20) = *(int *)(param_1[0x49] + 0x20) + 1U & 7;
  return;
}



/* Entry: 1081cfdac; end: 1081d002f;  */

undefined8 FUN_1081cfdac(long *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  
  puVar8 = (undefined8 *)param_1[5];
  lVar4 = puVar8[1];
  if (lVar4 == 0) {
    plVar3 = param_1;
    (*(code *)puVar8[3])();
    if ((int)plVar3 != 0) {
      lVar4 = puVar8[1];
      goto LAB_1081cfde8;
    }
LAB_1081cfe74:
    uVar7 = 0;
  }
  else {
LAB_1081cfde8:
    puVar9 = (undefined1 *)*puVar8 + 1;
    uVar2 = *(undefined1 *)*puVar8;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      plVar3 = param_1;
      (*(code *)puVar8[3])();
      if ((int)plVar3 == 0) goto LAB_1081cfe74;
      puVar9 = (undefined1 *)*puVar8;
      lVar4 = puVar8[1];
    }
    uVar10 = (ulong)CONCAT11(uVar2,*puVar9);
    lVar6 = uVar10 - 2;
    lVar5 = *param_1;
    uVar1 = *(undefined4 *)((long)param_1 + 0x21c);
    *(undefined4 *)(lVar5 + 0x28) = 0x5b;
    *(undefined4 *)(lVar5 + 0x2c) = uVar1;
    *(int *)(*param_1 + 0x30) = (int)lVar6;
    uVar7 = 1;
    (**(code **)(*param_1 + 8))(param_1,1);
    *puVar8 = puVar9 + 1;
    puVar8[1] = lVar4 + -1;
    if (2 < uVar10) {
      (**(code **)(param_1[5] + 0x20))(param_1,lVar6);
    }
  }
  return uVar7;
}



/* Entry: 1081d0030; end: 1081d00ff;  */

void FUN_1081d0030(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  code *pcVar5;
  
  lVar1 = param_1[0x49];
  uVar3 = *(long *)(param_1[1] + 0x60) - 0x20;
  if ((long)(ulong)param_3 <= (long)uVar3) {
    uVar3 = (ulong)param_3;
  }
  uVar2 = (uint)uVar3;
  if (uVar2 == 0) {
    pcVar5 = (code *)0x1081cfe94;
    if (param_2 != 0xee && param_2 != 0xe0) {
      pcVar5 = FUN_1081cfdac;
    }
  }
  else {
    if ((param_2 == 0xe0) && (uVar2 < 0xe)) {
      pcVar5 = FUN_1081d0100;
      uVar2 = 0xe;
      goto LAB_1081d00d0;
    }
    uVar4 = uVar2;
    if (uVar2 < 0xd) {
      uVar4 = 0xc;
    }
    if (param_2 != 0xee) {
      uVar4 = uVar2;
    }
    pcVar5 = FUN_1081d0100;
    uVar2 = uVar4;
  }
  if (param_2 == 0xfe) {
    *(code **)(lVar1 + 0x28) = pcVar5;
    *(uint *)(lVar1 + 0xb0) = uVar2;
    return;
  }
  if ((param_2 & 0xfffffff0) != 0xe0) {
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x28) = 0x44;
    *(uint *)(lVar1 + 0x2c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001081d00fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
LAB_1081d00d0:
  *(code **)(lVar1 + (ulong)(param_2 - 0xe0) * 8 + 0x30) = pcVar5;
  *(uint *)(lVar1 + (ulong)(param_2 - 0xe0) * 4 + 0xb4) = uVar2;
  return;
}



/* Entry: 1081d0100; end: 1081d0353;  */

void FUN_1081d0100(long *param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  lVar15 = param_1[0x49];
  plVar9 = *(long **)(lVar15 + 0xf8);
  plVar12 = (long *)param_1[5];
  puVar14 = (undefined1 *)*plVar12;
  lVar16 = plVar12[1];
  if (plVar9 == (long *)0x0) {
    if (lVar16 == 0) {
      plVar9 = param_1;
      (*(code *)plVar12[3])();
      if ((int)plVar9 == 0) {
        return;
      }
      puVar14 = (undefined1 *)*plVar12;
      lVar16 = plVar12[1];
    }
    puVar13 = puVar14 + 1;
    uVar2 = *puVar14;
    lVar16 = lVar16 + -1;
    if (lVar16 == 0) {
      plVar9 = param_1;
      (*(code *)plVar12[3])();
      if ((int)plVar9 == 0) {
        return;
      }
      puVar13 = (undefined1 *)*plVar12;
      lVar16 = plVar12[1];
    }
    lVar16 = lVar16 + -1;
    puVar14 = puVar13 + 1;
    uVar17 = (ulong)CONCAT11(uVar2,*puVar13) - 2;
    if ((ulong)CONCAT11(uVar2,*puVar13) < 2) {
      uVar8 = 0;
      lVar5 = 0;
      goto LAB_1081d029c;
    }
    puVar1 = (uint *)(lVar15 + 0xb0);
    if (*(int *)((long)param_1 + 0x21c) != 0xfe) {
      puVar1 = (uint *)(lVar15 + (long)*(int *)((long)param_1 + 0x21c) * 4 + -0x2cc);
    }
    uVar10 = (uint)uVar17;
    uVar7 = *puVar1;
    if (uVar10 <= *puVar1) {
      uVar7 = uVar10;
    }
    uVar8 = (ulong)uVar7;
    plVar9 = param_1;
    (**(code **)(param_1[1] + 8))(param_1,1,uVar8 + 0x20);
    uVar17 = 0;
    *plVar9 = 0;
    *(char *)(plVar9 + 1) = (char)*(undefined4 *)((long)param_1 + 0x21c);
    *(uint *)((long)plVar9 + 0xc) = uVar10;
    *(uint *)(plVar9 + 2) = uVar7;
    plVar11 = plVar9 + 4;
    plVar9[3] = (long)plVar11;
    *(long **)(lVar15 + 0xf8) = plVar9;
    *(undefined4 *)(lVar15 + 0x100) = 0;
  }
  else {
    uVar17 = (ulong)*(uint *)(lVar15 + 0x100);
    uVar8 = (ulong)*(uint *)(plVar9 + 2);
    plVar11 = (long *)(plVar9[3] + uVar17);
  }
  while( true ) {
    uVar7 = (uint)uVar8;
    uVar10 = (uint)uVar17;
    if (uVar7 <= uVar10) break;
    *plVar12 = (long)puVar14;
    plVar12[1] = lVar16;
    *(uint *)(lVar15 + 0x100) = uVar10;
    if (lVar16 == 0) {
      plVar4 = param_1;
      (*(code *)plVar12[3])();
      if ((int)plVar4 == 0) {
        return;
      }
      puVar14 = (undefined1 *)*plVar12;
      lVar16 = plVar12[1];
    }
    if ((uVar10 < uVar7) && (lVar16 != 0)) {
      lVar5 = 0;
      do {
        *(undefined1 *)((long)plVar11 + lVar5) = puVar14[lVar5];
        iVar6 = (int)lVar5;
        bVar3 = lVar16 + -1 != lVar5;
        lVar5 = lVar5 + 1;
      } while (uVar10 + iVar6 + 1 < uVar7 && bVar3);
      lVar16 = lVar16 - lVar5;
      puVar14 = puVar14 + lVar5;
      plVar11 = (long *)((long)plVar11 + lVar5);
      uVar17 = (ulong)(uVar10 + (int)lVar5);
    }
  }
  plVar11 = (long *)param_1[0x32];
  if ((long *)param_1[0x32] == (long *)0x0) {
    plVar4 = param_1 + 0x32;
  }
  else {
    do {
      plVar4 = plVar11;
      plVar11 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  *plVar4 = (long)plVar9;
  lVar5 = plVar9[3];
  uVar17 = (ulong)(*(int *)((long)plVar9 + 0xc) - uVar7);
LAB_1081d029c:
  *(undefined8 *)(lVar15 + 0xf8) = 0;
  iVar6 = *(int *)((long)param_1 + 0x21c);
  if (iVar6 == 0xee) {
    func_0x0001081d0908(param_1,lVar5,uVar8,uVar17);
  }
  else if (iVar6 == 0xe0) {
    FUN_1081d06a8(param_1,lVar5,uVar8,uVar17);
  }
  else {
    lVar15 = *param_1;
    *(undefined4 *)(lVar15 + 0x28) = 0x5b;
    *(int *)(lVar15 + 0x2c) = iVar6;
    *(int *)(*param_1 + 0x30) = (int)uVar8 + (int)uVar17;
    (**(code **)(*param_1 + 8))(param_1,1);
  }
  *plVar12 = (long)puVar14;
  plVar12[1] = lVar16;
  if (0 < (long)uVar17) {
    (**(code **)(param_1[5] + 0x20))(param_1,uVar17);
  }
  return;
}



/* Entry: 1081d0354; end: 1081d06a7;  */

void FUN_1081d0354(long *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  undefined1 *puVar11;
  byte *pbVar13;
  byte *pbVar14;
  uint *puVar15;
  byte *pbVar16;
  undefined1 *puVar12;
  
  plVar9 = (long *)param_1[5];
  puVar12 = (undefined1 *)*plVar9;
  lVar7 = plVar9[1];
  *(undefined4 *)(param_1 + 0x27) = param_2;
  *(undefined4 *)((long)param_1 + 0x13c) = param_3;
  if (lVar7 == 0) {
    plVar4 = param_1;
    (*(code *)plVar9[3])();
    if ((int)plVar4 == 0) {
      return;
    }
    puVar12 = (undefined1 *)*plVar9;
    lVar7 = plVar9[1];
  }
  puVar11 = puVar12 + 1;
  uVar1 = *puVar12;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    plVar4 = param_1;
    (*(code *)plVar9[3])();
    if ((int)plVar4 == 0) {
      return;
    }
    puVar11 = (undefined1 *)*plVar9;
    lVar7 = plVar9[1];
  }
  pbVar13 = puVar11 + 1;
  uVar2 = *puVar11;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    plVar4 = param_1;
    (*(code *)plVar9[3])();
    if ((int)plVar4 == 0) {
      return;
    }
    pbVar13 = (byte *)*plVar9;
    lVar7 = plVar9[1];
  }
  pbVar14 = pbVar13 + 1;
  *(uint *)(param_1 + 0x25) = (uint)*pbVar13;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    plVar4 = param_1;
    (*(code *)plVar9[3])();
    if ((int)plVar4 == 0) {
      return;
    }
    pbVar14 = (byte *)*plVar9;
    lVar7 = plVar9[1];
  }
  pbVar13 = pbVar14 + 1;
  iVar8 = (uint)*pbVar14 << 8;
  *(int *)((long)param_1 + 0x34) = iVar8;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    plVar4 = param_1;
    (*(code *)plVar9[3])();
    if ((int)plVar4 == 0) {
      return;
    }
    pbVar13 = (byte *)*plVar9;
    lVar7 = plVar9[1];
    iVar8 = *(int *)((long)param_1 + 0x34);
  }
  pbVar14 = pbVar13 + 1;
  *(uint *)((long)param_1 + 0x34) = iVar8 + (uint)*pbVar13;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    plVar4 = param_1;
    (*(code *)plVar9[3])();
    if ((int)plVar4 == 0) {
      return;
    }
    pbVar14 = (byte *)*plVar9;
    lVar7 = plVar9[1];
  }
  pbVar13 = pbVar14 + 1;
  iVar8 = (uint)*pbVar14 << 8;
  *(int *)(param_1 + 6) = iVar8;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    plVar4 = param_1;
    (*(code *)plVar9[3])();
    if ((int)plVar4 == 0) {
      return;
    }
    pbVar13 = (byte *)*plVar9;
    lVar7 = plVar9[1];
    iVar8 = (int)param_1[6];
  }
  pbVar14 = pbVar13 + 1;
  *(uint *)(param_1 + 6) = iVar8 + (uint)*pbVar13;
  lVar7 = lVar7 + -1;
  if (lVar7 == 0) {
    plVar4 = param_1;
    (*(code *)plVar9[3])();
    if ((int)plVar4 == 0) {
      return;
    }
    pbVar14 = (byte *)*plVar9;
    lVar7 = plVar9[1];
  }
  *(uint *)(param_1 + 7) = (uint)*pbVar14;
  lVar5 = *param_1;
  *(undefined4 *)(lVar5 + 0x2c) = *(undefined4 *)((long)param_1 + 0x21c);
  *(int *)(lVar5 + 0x30) = (int)param_1[6];
  *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)((long)param_1 + 0x34);
  *(int *)(lVar5 + 0x38) = (int)param_1[7];
  *(undefined4 *)(lVar5 + 0x28) = 100;
  (**(code **)(lVar5 + 8))(param_1,1);
  if (*(int *)(param_1[0x49] + 0x1c) != 0) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x3a;
    (*(code *)*puVar6)(param_1);
  }
  if (((*(int *)((long)param_1 + 0x34) == 0) || ((int)param_1[6] == 0)) ||
     (iVar8 = (int)param_1[7], iVar8 < 1)) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x20;
    (*(code *)*puVar6)(param_1);
    iVar8 = (int)param_1[7];
  }
  if ((ulong)CONCAT11(uVar1,uVar2) - 8 != (long)(iVar8 * 3)) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0xb;
    (*(code *)*puVar6)(param_1);
    iVar8 = (int)param_1[7];
  }
  plVar4 = (long *)param_1[0x26];
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1;
    (**(code **)param_1[1])(param_1,1,(long)iVar8 * 0x60);
    param_1[0x26] = (long)plVar4;
    iVar8 = (int)param_1[7];
  }
  pbVar14 = pbVar14 + 1;
  lVar7 = lVar7 + -1;
  if (0 < iVar8) {
    uVar10 = 0;
    puVar15 = (uint *)(plVar4 + 2);
    do {
      puVar15[-3] = uVar10;
      if (lVar7 == 0) {
        plVar4 = param_1;
        (*(code *)plVar9[3])();
        if ((int)plVar4 == 0) {
          return;
        }
        pbVar14 = (byte *)*plVar9;
        lVar7 = plVar9[1];
      }
      pbVar13 = pbVar14 + 1;
      puVar15[-4] = (uint)*pbVar14;
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) {
        plVar4 = param_1;
        (*(code *)plVar9[3])();
        if ((int)plVar4 == 0) {
          return;
        }
        pbVar13 = (byte *)*plVar9;
        lVar7 = plVar9[1];
      }
      pbVar16 = pbVar13 + 1;
      bVar3 = *pbVar13;
      puVar15[-2] = (uint)(bVar3 >> 4);
      puVar15[-1] = bVar3 & 0xf;
      lVar7 = lVar7 + -1;
      if (lVar7 == 0) {
        plVar4 = param_1;
        (*(code *)plVar9[3])();
        if ((int)plVar4 == 0) {
          return;
        }
        pbVar16 = (byte *)*plVar9;
        lVar7 = plVar9[1];
      }
      pbVar14 = pbVar16 + 1;
      *puVar15 = (uint)*pbVar16;
      lVar5 = *param_1;
      *(uint *)(lVar5 + 0x2c) = puVar15[-4];
      *(uint *)(lVar5 + 0x30) = puVar15[-2];
      *(uint *)(lVar5 + 0x34) = puVar15[-1];
      *(uint *)(lVar5 + 0x38) = *puVar15;
      *(undefined4 *)(lVar5 + 0x28) = 0x65;
      (**(code **)(lVar5 + 8))(param_1,1);
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + -1;
      puVar15 = puVar15 + 0x18;
    } while ((int)uVar10 < (int)param_1[7]);
  }
  *(undefined4 *)(param_1[0x49] + 0x1c) = 1;
  *plVar9 = (long)pbVar14;
  plVar9[1] = lVar7;
  return;
}



/* Entry: 1081d06a8; end: 1081d09eb;  */

void FUN_1081d06a8(long *param_1,char *param_2,uint param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined4 uVar13;
  
  uVar13 = (undefined4)(param_4 + (ulong)param_3);
  if (param_3 < 0xe) {
    if (((5 < param_3) && (*param_2 == 'J')) && (param_2[1] == 'F')) goto LAB_1081d0778;
LAB_1081d0798:
    lVar12 = *param_1;
    uVar9 = 0x4d;
  }
  else {
    if ((*param_2 != 'J') || (param_2[1] != 'F')) goto LAB_1081d0798;
    if ((param_2[2] == 'I') && ((param_2[3] == 'F' && (param_2[4] == '\0')))) {
      uVar7 = 1;
      *(undefined4 *)((long)param_1 + 0x174) = 1;
      bVar1 = param_2[5];
      *(byte *)(param_1 + 0x2f) = bVar1;
      bVar2 = param_2[6];
      *(byte *)((long)param_1 + 0x179) = bVar2;
      bVar3 = param_2[7];
      *(byte *)((long)param_1 + 0x17a) = bVar3;
      uVar5 = *(ushort *)(param_2 + 8);
      *(ushort *)((long)param_1 + 0x17c) = uVar5 >> 8 | (ushort)((uVar5 & 0xff00ff) << 8);
      uVar6 = *(ushort *)(param_2 + 10);
      *(ushort *)((long)param_1 + 0x17e) = uVar6 >> 8 | (ushort)((uVar6 & 0xff00ff) << 8);
      if (bVar1 == 1) {
        uVar10 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
        uVar11 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
      }
      else {
        lVar12 = *param_1;
        *(undefined4 *)(lVar12 + 0x28) = 0x77;
        *(uint *)(lVar12 + 0x2c) = (uint)bVar1;
        *(uint *)(*param_1 + 0x30) = (uint)*(byte *)((long)param_1 + 0x179);
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        uVar7 = (uint)*(byte *)(param_1 + 0x2f);
        bVar2 = *(byte *)((long)param_1 + 0x179);
        uVar10 = (uint)*(ushort *)((long)param_1 + 0x17c);
        uVar11 = (uint)*(ushort *)((long)param_1 + 0x17e);
        bVar3 = *(byte *)((long)param_1 + 0x17a);
      }
      lVar12 = *param_1;
      *(uint *)(lVar12 + 0x30) = (uint)bVar2;
      *(uint *)(lVar12 + 0x34) = uVar10;
      *(uint *)(lVar12 + 0x38) = uVar11;
      *(uint *)(lVar12 + 0x3c) = (uint)bVar3;
      *(undefined4 *)(lVar12 + 0x28) = 0x57;
      *(uint *)(lVar12 + 0x2c) = uVar7;
      (**(code **)(lVar12 + 8))(param_1,1);
      bVar1 = param_2[0xc];
      bVar2 = param_2[0xd];
      if (bVar2 != 0 || bVar1 != 0) {
        lVar12 = *param_1;
        *(undefined4 *)(lVar12 + 0x28) = 0x5a;
        *(uint *)(lVar12 + 0x2c) = (uint)(byte)param_2[0xc];
        *(uint *)(*param_1 + 0x30) = (uint)(byte)param_2[0xd];
        (**(code **)(*param_1 + 8))(param_1,1);
        bVar1 = param_2[0xc];
        bVar2 = param_2[0xd];
      }
      lVar12 = param_4 + (ulong)param_3 + -0xe;
      if (lVar12 == (ulong)bVar2 * (ulong)bVar1 * 2 + (ulong)bVar2 * (ulong)bVar1) {
        return;
      }
      lVar8 = *param_1;
      *(undefined4 *)(lVar8 + 0x28) = 0x58;
      *(int *)(lVar8 + 0x2c) = (int)lVar12;
      goto LAB_1081d07a4;
    }
LAB_1081d0778:
    if ((param_2[2] != 'X') || ((param_2[3] != 'X' || (param_2[4] != '\0')))) goto LAB_1081d0798;
    cVar4 = param_2[5];
    lVar12 = *param_1;
    if (cVar4 == '\x13') {
      uVar9 = 0x6e;
    }
    else if (cVar4 == '\x11') {
      uVar9 = 0x6d;
    }
    else {
      if (cVar4 != '\x10') {
        *(undefined4 *)(lVar12 + 0x28) = 0x59;
        *(uint *)(lVar12 + 0x2c) = (uint)(byte)param_2[5];
        *(undefined4 *)(*param_1 + 0x30) = uVar13;
        goto LAB_1081d07a4;
      }
      uVar9 = 0x6c;
    }
  }
  *(undefined4 *)(lVar12 + 0x28) = uVar9;
  *(undefined4 *)(lVar12 + 0x2c) = uVar13;
LAB_1081d07a4:
                    /* WARNING: Could not recover jumptable at 0x0001081d07c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}



/* Entry: 1081d09ec; end: 1081d0e5b;  */

void FUN_1081d09ec(long *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  long *plVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  undefined4 *puVar17;
  uint *puVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  
  iVar16 = *(int *)((long)param_1 + 0x24);
  if (iVar16 != 0xca) {
    lVar12 = *param_1;
    *(undefined4 *)(lVar12 + 0x28) = 0x14;
    *(int *)(lVar12 + 0x2c) = iVar16;
    (**(code **)*param_1)(param_1);
  }
  uVar21 = *(uint *)(param_1 + 9);
  uVar2 = *(int *)((long)param_1 + 0x44) << 3;
  if (uVar2 <= uVar21) {
    uVar14 = (ulong)*(uint *)(param_1 + 6);
    uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
    *(int *)(param_1 + 0x11) = (int)(uVar14 + 7 >> 3);
    *(int *)((long)param_1 + 0x8c) = (int)(uVar15 + 7 >> 3);
    bVar8 = true;
    *(undefined4 *)(param_1 + 0x34) = 1;
    uVar11 = 1;
    goto LAB_1081d0c18;
  }
  if (uVar21 * 2 < uVar2) {
    if (uVar21 * 3 < uVar2) {
      if (uVar21 * 4 < uVar2) {
        if (uVar21 * 5 < uVar2) {
          if (uVar21 * 6 < uVar2) {
            if (uVar21 * 7 < uVar2) {
              if (uVar2 <= uVar21 * 8) {
                uVar14 = (ulong)*(uint *)(param_1 + 6);
                uVar21 = *(uint *)((long)param_1 + 0x34);
                *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 6);
                *(uint *)((long)param_1 + 0x8c) = uVar21;
                uVar11 = 8;
LAB_1081d0d74:
                uVar15 = (ulong)uVar21;
                bVar8 = false;
                *(uint *)(param_1 + 0x34) = uVar11;
                goto LAB_1081d0c18;
              }
              if (uVar2 <= uVar21 * 9) {
                bVar8 = false;
                uVar14 = (ulong)*(uint *)(param_1 + 6);
                uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
                *(int *)(param_1 + 0x11) = (int)(uVar14 * 9 + 7 >> 3);
                *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 9 + 7 >> 3);
                uVar11 = 9;
                *(undefined4 *)(param_1 + 0x34) = 9;
                goto LAB_1081d0c18;
              }
              if (uVar21 * 10 < uVar2) {
                uVar11 = 0xb;
                if (uVar2 <= uVar21 * 0xb) {
LAB_1081d0ddc:
                  bVar8 = false;
                  uVar14 = (ulong)*(uint *)(param_1 + 6);
                  uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
                  *(int *)(param_1 + 0x11) = (int)(uVar14 * uVar11 + 7 >> 3);
                  *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * uVar11 + 7 >> 3);
                  *(uint *)(param_1 + 0x34) = uVar11;
                  goto LAB_1081d0c18;
                }
                if (uVar21 * 0xc < uVar2) {
                  uVar11 = 0xd;
                  if (uVar2 <= uVar21 * 0xd) goto LAB_1081d0ddc;
                  if (uVar21 * 0xe < uVar2) {
                    uVar14 = (ulong)*(uint *)(param_1 + 6);
                    if (uVar2 <= uVar21 * 0xf) {
                      bVar8 = false;
                      uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
                      *(int *)(param_1 + 0x11) = (int)(uVar14 * 0xf + 7 >> 3);
                      *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 0xf + 7 >> 3);
                      uVar11 = 0xf;
                      *(undefined4 *)(param_1 + 0x34) = 0xf;
                      goto LAB_1081d0c18;
                    }
                    uVar21 = *(uint *)((long)param_1 + 0x34);
                    *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 6) << 1;
                    *(uint *)((long)param_1 + 0x8c) = uVar21 << 1;
                    uVar11 = 0x10;
                    goto LAB_1081d0d74;
                  }
                  uVar11 = 0xe;
                }
                else {
                  uVar11 = 0xc;
                }
              }
              else {
                uVar11 = 10;
              }
              bVar8 = false;
              uVar14 = (ulong)*(uint *)(param_1 + 6);
              uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
              *(int *)(param_1 + 0x11) = (int)(uVar14 * uVar11 + 7 >> 3);
              *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * uVar11 + 7 >> 3);
              *(uint *)(param_1 + 0x34) = uVar11;
              goto LAB_1081d0c18;
            }
            uVar14 = (ulong)*(uint *)(param_1 + 6);
            uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
            *(int *)(param_1 + 0x11) = (int)(uVar14 * 7 + 7 >> 3);
            *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 7 + 7 >> 3);
            uVar11 = 7;
          }
          else {
            uVar11 = 6;
            uVar14 = (ulong)*(uint *)(param_1 + 6);
            uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
            *(int *)(param_1 + 0x11) = (int)(uVar14 * 6 + 7 >> 3);
            *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 6 + 7 >> 3);
          }
        }
        else {
          uVar14 = (ulong)*(uint *)(param_1 + 6);
          uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
          *(int *)(param_1 + 0x11) = (int)(uVar14 * 5 + 7 >> 3);
          *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 5 + 7 >> 3);
          uVar11 = 5;
        }
      }
      else {
        uVar14 = (ulong)*(uint *)(param_1 + 6);
        uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
        *(int *)(param_1 + 0x11) = (int)(uVar14 * 4 + 7 >> 3);
        *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 4 + 7 >> 3);
        uVar11 = 4;
      }
    }
    else {
      uVar14 = (ulong)*(uint *)(param_1 + 6);
      uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
      *(int *)(param_1 + 0x11) = (int)(uVar14 * 3 + 7 >> 3);
      *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 3 + 7 >> 3);
      uVar11 = 3;
    }
  }
  else {
    uVar14 = (ulong)*(uint *)(param_1 + 6);
    uVar15 = (ulong)*(uint *)((long)param_1 + 0x34);
    *(int *)(param_1 + 0x11) = (int)(uVar14 * 2 + 7 >> 3);
    *(int *)((long)param_1 + 0x8c) = (int)(uVar15 * 2 + 7 >> 3);
    uVar11 = 2;
  }
  *(uint *)(param_1 + 0x34) = uVar11;
  bVar8 = true;
LAB_1081d0c18:
  iVar16 = (int)param_1[7];
  if (0 < iVar16) {
    lVar12 = param_1[0x26];
    puVar18 = (uint *)(lVar12 + 0x24);
    iVar20 = iVar16;
    do {
      *puVar18 = uVar11;
      iVar20 = iVar20 + -1;
      puVar18 = puVar18 + 0x18;
    } while (iVar20 != 0);
    iVar20 = 0;
    lVar13 = lVar12;
    do {
      uVar21 = uVar11;
      if (bVar8) {
        iVar3 = (int)param_1[0x33] * uVar11;
        while( true ) {
          iVar4 = *(int *)(lVar13 + 8) * 2 * uVar21;
          iVar5 = 0;
          if (iVar4 != 0) {
            iVar5 = iVar3 / iVar4;
          }
          if (iVar3 - iVar5 * iVar4 != 0) break;
          iVar4 = *(int *)((long)param_1 + 0x19c) * uVar11;
          uVar2 = uVar21 * 2;
          iVar5 = *(int *)(lVar13 + 0xc) * uVar2;
          iVar6 = 0;
          if (iVar5 != 0) {
            iVar6 = iVar4 / iVar5;
          }
          if ((iVar4 - iVar6 * iVar5 != 0) || (bVar1 = 3 < (int)uVar21, uVar21 = uVar2, bVar1))
          break;
        }
      }
      *(uint *)(lVar13 + 0x24) = uVar21;
      iVar20 = iVar20 + 1;
      lVar13 = lVar13 + 0x60;
    } while (iVar20 != iVar16);
    lVar13 = (long)(int)param_1[0x33] * 8;
    lVar19 = (long)*(int *)((long)param_1 + 0x19c) * 8;
    puVar17 = (undefined4 *)(lVar12 + 0x2c);
    iVar20 = iVar16;
    do {
      uVar10 = 0;
      if (lVar13 != 0) {
        uVar10 = (undefined4)
                 ((long)(lVar13 + -1 + (long)(int)puVar17[-2] * (long)(int)puVar17[-9] * uVar14) /
                 lVar13);
      }
      uVar7 = 0;
      if (lVar19 != 0) {
        uVar7 = (undefined4)
                ((long)(lVar19 + -1 + (long)(int)puVar17[-8] * (long)(int)puVar17[-2] * uVar15) /
                lVar19);
      }
      puVar17[-1] = uVar10;
      *puVar17 = uVar7;
      puVar17 = puVar17 + 0x18;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  uVar21 = (int)param_1[8] - 1;
  if (uVar21 < 0x10) {
    iVar16 = *(int *)(&UNK_10df08fc4 + (ulong)uVar21 * 4);
  }
  iVar20 = iVar16;
  if (*(int *)((long)param_1 + 0x6c) != 0) {
    iVar20 = 1;
  }
  *(int *)(param_1 + 0x12) = iVar16;
  *(int *)((long)param_1 + 0x94) = iVar20;
  plVar9 = param_1;
  FUN_1081d0e5c();
  if ((int)plVar9 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = *(undefined4 *)((long)param_1 + 0x19c);
  }
  *(undefined4 *)(param_1 + 0x13) = uVar10;
  return;
}



/* Entry: 1081d0e5c; end: 1081d0f43;  */

bool FUN_1081d0e5c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if ((((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 0x188) == 0)) &&
      (*(int *)(param_1 + 0x3c) == 3)) && (*(int *)(param_1 + 0x38) == 3)) {
    uVar1 = *(uint *)(param_1 + 0x40);
    if (uVar1 - 6 < 10 || uVar1 == 2) {
      if (*(int *)(param_1 + 0x90) != *(int *)(&UNK_10df08f80 + (ulong)uVar1 * 4)) {
        return false;
      }
    }
    else {
      if (uVar1 != 0x10) {
        return false;
      }
      if (*(int *)(param_1 + 0x90) != 3) {
        return false;
      }
    }
    lVar3 = *(long *)(param_1 + 0x130);
    if (((((*(int *)(lVar3 + 8) == 2) && (*(int *)(lVar3 + 0x68) == 1)) &&
         ((*(int *)(lVar3 + 200) == 1 &&
          ((*(int *)(lVar3 + 0xc) < 3 && (*(int *)(lVar3 + 0x6c) == 1)))))) &&
        (*(int *)(lVar3 + 0xcc) == 1)) &&
       ((iVar2 = *(int *)(lVar3 + 0x24), iVar2 == *(int *)(param_1 + 0x1a0) &&
        (*(int *)(lVar3 + 0x84) == iVar2)))) {
      return *(int *)(lVar3 + 0xe4) == iVar2;
    }
  }
  return false;
}



/* Entry: 1081d0f44; end: 1081d14cb;  */

void FUN_1081d0f44(long *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar10 = (undefined8 *)param_1[0x44];
  *puVar10 = 0x1081d130c;
  puVar10[1] = 0x1081d14cc;
  *(undefined4 *)(puVar10 + 2) = 0;
  *(undefined4 *)((long)puVar10 + 0x6c) = 0;
  FUN_1081d09ec();
  plVar4 = param_1;
  (**(code **)param_1[1])(param_1,1,0x580);
  lVar5 = 0;
  uVar12 = 0xf0e0d0c0b0a0908;
  uVar11 = 0x706050403020100;
  param_1[0x35] = (long)(plVar4 + 0x20);
  plVar4[1] = 0;
  *plVar4 = 0;
  plVar4[3] = 0;
  plVar4[2] = 0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0x13] = 0;
  plVar4[0x12] = 0;
  plVar4[0x15] = 0;
  plVar4[0x14] = 0;
  plVar4[0x17] = 0;
  plVar4[0x16] = 0;
  plVar4[0x19] = 0;
  plVar4[0x18] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  do {
    puVar7 = (undefined8 *)((long)(plVar4 + 0x20) + lVar5);
    puVar7[1] = uVar12;
    *puVar7 = uVar11;
    lVar5 = lVar5 + 0x10;
    uVar11 = CONCAT17((char)((ulong)uVar11 >> 0x38) + '\x10',
                      CONCAT16((char)((ulong)uVar11 >> 0x30) + '\x10',
                               CONCAT15((char)((ulong)uVar11 >> 0x28) + '\x10',
                                        CONCAT14((char)((ulong)uVar11 >> 0x20) + '\x10',
                                                 CONCAT13((char)((ulong)uVar11 >> 0x18) + '\x10',
                                                          CONCAT12((char)((ulong)uVar11 >> 0x10) +
                                                                   '\x10',CONCAT11((char)((ulong)
                                                  uVar11 >> 8) + '\x10',(char)uVar11 + '\x10')))))))
    ;
    uVar12 = CONCAT17((char)((ulong)uVar12 >> 0x38) + '\x10',
                      CONCAT16((char)((ulong)uVar12 >> 0x30) + '\x10',
                               CONCAT15((char)((ulong)uVar12 >> 0x28) + '\x10',
                                        CONCAT14((char)((ulong)uVar12 >> 0x20) + '\x10',
                                                 CONCAT13((char)((ulong)uVar12 >> 0x18) + '\x10',
                                                          CONCAT12((char)((ulong)uVar12 >> 0x10) +
                                                                   '\x10',CONCAT11((char)((ulong)
                                                  uVar12 >> 8) + '\x10',(char)uVar12 + '\x10')))))))
    ;
  } while (lVar5 != 0x100);
  plVar4[0x6d] = -1;
  plVar4[0x6c] = -1;
  plVar4[0x6f] = -1;
  plVar4[0x6e] = -1;
  plVar4[0x69] = -1;
  plVar4[0x68] = -1;
  plVar4[0x6b] = -1;
  plVar4[0x6a] = -1;
  plVar4[0x65] = -1;
  plVar4[100] = -1;
  plVar4[0x67] = -1;
  plVar4[0x66] = -1;
  plVar4[0x61] = -1;
  plVar4[0x60] = -1;
  plVar4[99] = -1;
  plVar4[0x62] = -1;
  plVar4[0x5d] = -1;
  plVar4[0x5c] = -1;
  plVar4[0x5f] = -1;
  plVar4[0x5e] = -1;
  plVar4[0x59] = -1;
  plVar4[0x58] = -1;
  plVar4[0x5b] = -1;
  plVar4[0x5a] = -1;
  plVar4[0x55] = -1;
  plVar4[0x54] = -1;
  plVar4[0x57] = -1;
  plVar4[0x56] = -1;
  plVar4[0x51] = -1;
  plVar4[0x50] = -1;
  plVar4[0x53] = -1;
  plVar4[0x52] = -1;
  plVar4[0x4d] = -1;
  plVar4[0x4c] = -1;
  plVar4[0x4f] = -1;
  plVar4[0x4e] = -1;
  plVar4[0x49] = -1;
  plVar4[0x48] = -1;
  plVar4[0x4b] = -1;
  plVar4[0x4a] = -1;
  plVar4[0x45] = -1;
  plVar4[0x44] = -1;
  plVar4[0x47] = -1;
  plVar4[0x46] = -1;
  plVar4[0x41] = -1;
  plVar4[0x40] = -1;
  plVar4[0x43] = -1;
  plVar4[0x42] = -1;
  plVar4[0x9f] = 0;
  plVar4[0x9e] = 0;
  plVar4[0x9d] = 0;
  plVar4[0x9c] = 0;
  plVar4[0x9b] = 0;
  plVar4[0x9a] = 0;
  plVar4[0x99] = 0;
  plVar4[0x98] = 0;
  plVar4[0x97] = 0;
  plVar4[0x96] = 0;
  plVar4[0x95] = 0;
  plVar4[0x94] = 0;
  plVar4[0x93] = 0;
  plVar4[0x92] = 0;
  plVar4[0x91] = 0;
  plVar4[0x90] = 0;
  plVar4[0x8f] = 0;
  plVar4[0x8e] = 0;
  plVar4[0x8d] = 0;
  plVar4[0x8c] = 0;
  plVar4[0x8b] = 0;
  plVar4[0x8a] = 0;
  plVar4[0x89] = 0;
  plVar4[0x88] = 0;
  plVar4[0x87] = 0;
  plVar4[0x86] = 0;
  plVar4[0x85] = 0;
  plVar4[0x84] = 0;
  plVar4[0x83] = 0;
  plVar4[0x82] = 0;
  plVar4[0x7f] = 0;
  plVar4[0x7e] = 0;
  plVar4[0x81] = 0;
  plVar4[0x80] = 0;
  plVar4[0x7b] = 0;
  plVar4[0x7a] = 0;
  plVar4[0x7d] = 0;
  plVar4[0x7c] = 0;
  plVar4[0x77] = 0;
  plVar4[0x76] = 0;
  plVar4[0x79] = 0;
  plVar4[0x78] = 0;
  plVar4[0x73] = 0;
  plVar4[0x72] = 0;
  plVar4[0x75] = 0;
  plVar4[0x74] = 0;
  plVar4[0x71] = 0;
  plVar4[0x70] = 0;
  plVar6 = (long *)param_1[0x35];
  lVar8 = plVar6[1];
  lVar5 = *plVar6;
  lVar14 = plVar6[3];
  lVar13 = plVar6[2];
  lVar16 = plVar6[5];
  lVar15 = plVar6[4];
  lVar17 = plVar6[6];
  plVar4[0xa7] = plVar6[7];
  plVar4[0xa6] = lVar17;
  plVar4[0xa5] = lVar16;
  plVar4[0xa4] = lVar15;
  plVar4[0xa3] = lVar14;
  plVar4[0xa2] = lVar13;
  plVar4[0xa1] = lVar8;
  plVar4[0xa0] = lVar5;
  lVar8 = plVar6[9];
  lVar5 = plVar6[8];
  lVar14 = plVar6[0xb];
  lVar13 = plVar6[10];
  lVar16 = plVar6[0xd];
  lVar15 = plVar6[0xc];
  lVar17 = plVar6[0xe];
  plVar4[0xaf] = plVar6[0xf];
  plVar4[0xae] = lVar17;
  plVar4[0xad] = lVar16;
  plVar4[0xac] = lVar15;
  plVar4[0xab] = lVar14;
  plVar4[0xaa] = lVar13;
  plVar4[0xa9] = lVar8;
  plVar4[0xa8] = lVar5;
  if ((long)(int)param_1[0x12] * (ulong)*(uint *)(param_1 + 0x11) >> 0x20 != 0) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x46;
    (*(code *)*puVar7)(param_1);
  }
  *(undefined4 *)(puVar10 + 0xf) = 0;
  plVar4 = param_1;
  FUN_1081d0e5c();
  puVar10[0x10] = 0;
  *(int *)((long)puVar10 + 0x7c) = (int)plVar4;
  puVar10[0x11] = 0;
  if (*(int *)((long)param_1 + 0x6c) == 0) {
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
  }
  else {
    if ((int)param_1[0xb] == 0) {
      param_1[0x10] = 0;
      *(undefined4 *)((long)param_1 + 0x7c) = 0;
    }
    if (*(int *)((long)param_1 + 0x5c) != 0) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 0x2f;
      (*(code *)*puVar7)(param_1);
    }
    if ((int)param_1[0x12] == 3) {
      if (param_1[0x14] == 0) {
        if (*(int *)((long)param_1 + 0x74) == 0) {
          *(undefined4 *)((long)param_1 + 0x7c) = 1;
        }
        else {
          *(undefined4 *)((long)param_1 + 0x84) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
    }
    else {
      *(undefined8 *)((long)param_1 + 0x7c) = 1;
      *(undefined4 *)((long)param_1 + 0x84) = 0;
      param_1[0x14] = 0;
    }
    if (*(int *)((long)param_1 + 0x7c) != 0) {
      func_0x0001081daf6c(param_1);
      puVar10[0x10] = param_1[0x4e];
    }
    if ((*(int *)((long)param_1 + 0x84) != 0) || ((int)param_1[0x10] != 0)) {
      FUN_1081dbba4(param_1);
      puVar10[0x11] = param_1[0x4e];
    }
  }
  if (*(int *)((long)param_1 + 0x5c) == 0) {
    if (*(int *)((long)puVar10 + 0x7c) == 0) {
      FUN_1081ca5ac(param_1);
      FUN_1081d4754(param_1);
    }
    else {
      func_0x0001081d1508(param_1);
    }
    FUN_1081d432c(param_1,*(undefined4 *)((long)param_1 + 0x84));
  }
  FUN_1081cc0e4(param_1);
  if (*(int *)((long)param_1 + 0x13c) == 0) {
    if ((int)param_1[0x27] == 0) {
      FUN_1081ccb60(param_1);
    }
    else {
      FUN_1081d34c0(param_1);
    }
  }
  else {
    FUN_1081c764c(param_1);
  }
  if (*(int *)(param_1[0x48] + 0x20) == 0) {
    bVar3 = (int)param_1[0xb] != 0;
  }
  else {
    bVar3 = true;
  }
  FUN_1081c8cec(param_1,bVar3);
  if (*(int *)((long)param_1 + 0x5c) == 0) {
    FUN_1081ce510(param_1,0);
  }
  (**(code **)(param_1[1] + 0x30))(param_1);
  (**(code **)(param_1[0x48] + 0x10))(param_1);
  lVar8 = param_1[0x44];
  lVar5 = param_1[0x3b];
  *(undefined4 *)(lVar8 + 0x14) = 0;
  *(int *)(lVar8 + 0x18) = (int)lVar5 + -1;
  *(undefined4 *)(lVar8 + 0x70) = 0;
  lVar5 = param_1[2];
  if (((lVar5 != 0) && ((int)param_1[0xb] == 0)) && (*(int *)(param_1[0x48] + 0x20) != 0)) {
    iVar1 = (int)param_1[7];
    if ((int)param_1[0x27] != 0) {
      iVar1 = (int)param_1[7] * 3 + 2;
    }
    uVar2 = *(uint *)((long)param_1 + 0x1a4);
    *(undefined8 *)(lVar5 + 8) = 0;
    *(ulong *)(lVar5 + 0x10) = (long)iVar1 * (ulong)uVar2;
    uVar9 = 2;
    if (*(int *)((long)param_1 + 0x84) != 0) {
      uVar9 = 3;
    }
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(undefined4 *)(lVar5 + 0x1c) = uVar9;
    *(int *)(puVar10 + 0xf) = *(int *)(puVar10 + 0xf) + 1;
  }
  return;
}



/* Entry: 1081d14cc; end: 1081d1743;  */

void FUN_1081d14cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x220);
  if (*(int *)(param_1 + 0x6c) != 0) {
    (**(code **)(*(long *)(param_1 + 0x270) + 0x10))();
  }
  *(int *)(lVar1 + 0x78) = *(int *)(lVar1 + 0x78) + 1;
  return;
}



/* Entry: 1081d1744; end: 1081d1757;  */

void FUN_1081d1744(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x260);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_1 + 0x8c);
  return;
}



/* Entry: 1081d1758; end: 1081d187f;  */

void FUN_1081d1758(long param_1,long *param_2,uint *param_3,undefined8 *param_4,long param_5,
                  uint *param_6,int param_7)

{
  undefined1 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *(long *)(param_1 + 0x260);
  if (*(int *)(lVar20 + 0x48) == 0) {
    uVar3 = *param_6;
    uVar21 = *(uint *)(lVar20 + 0x50);
    if (param_7 - uVar3 <= *(uint *)(lVar20 + 0x50)) {
      uVar21 = param_7 - uVar3;
    }
    uStack_48 = *(undefined8 *)(param_5 + (ulong)uVar3 * 8);
    if (uVar21 < 2) {
      uStack_40 = *(undefined8 *)(lVar20 + 0x40);
      *(undefined4 *)(lVar20 + 0x48) = 1;
    }
    else {
      uVar21 = 2;
      uStack_40 = *(undefined8 *)(param_5 + (ulong)(uVar3 + 1) * 8);
    }
    uVar3 = *param_3;
    param_4 = &uStack_48;
    (**(code **)(lVar20 + 0x18))();
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0x10) {
      uVar3 = *(int *)(param_1 + 0x88) << 1;
    }
    else {
      uVar3 = *(uint *)(lVar20 + 0x4c);
    }
    param_2 = *(long **)(lVar20 + 0x40);
    param_1 = *(long *)(param_5 + (ulong)*param_6 * 8);
    _memcpy();
    *(undefined4 *)(lVar20 + 0x48) = 0;
    uVar21 = 1;
  }
  *param_6 = *param_6 + uVar21;
  *(uint *)(lVar20 + 0x50) = *(int *)(lVar20 + 0x50) - uVar21;
  if (*(int *)(lVar20 + 0x48) == 0) {
    *param_3 = *param_3 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 6:
    lVar13 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar20 = *(long *)(lVar13 + 0x20);
    lVar11 = *(long *)(lVar13 + 0x28);
    lVar14 = *(long *)(lVar13 + 0x30);
    lVar13 = *(long *)(lVar13 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(uVar3 << 1) * 8);
    pbVar18 = *(byte **)(*param_2 + (ulong)(uVar3 << 1 | 1) * 8);
    pbVar16 = *(byte **)(param_2[1] + (ulong)uVar3 * 8);
    pbVar17 = *(byte **)(param_2[2] + (ulong)uVar3 * 8);
    puVar15 = (undefined1 *)*param_4;
    puVar12 = (undefined1 *)param_4[1];
    uVar21 = *(uint *)(param_1 + 0x88);
    if (uVar21 < 2) goto LAB_1081d244c;
    lVar2 = 0;
    do {
      lVar7 = (long)*(int *)(lVar20 + (ulong)pbVar17[lVar2] * 4);
      lVar8 = *(long *)(lVar13 + (ulong)pbVar16[lVar2] * 8);
      lVar6 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
      uVar9 = (ulong)*pbVar5;
      lVar19 = (long)*(int *)(lVar11 + (ulong)pbVar16[lVar2] * 4);
      *puVar15 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
      puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar15[2] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      uVar9 = (ulong)pbVar5[1];
      puVar15[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      puVar15[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar15[5] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      uVar9 = (ulong)*pbVar18;
      *puVar12 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      puVar12[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar12[2] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      uVar9 = (ulong)pbVar18[1];
      puVar12[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      pbVar5 = pbVar5 + 2;
      pbVar18 = pbVar18 + 2;
      puVar12[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar15 = puVar15 + 6;
      puVar12[5] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      puVar12 = puVar12 + 6;
      lVar2 = lVar2 + 1;
    } while (uVar21 >> 1 != (uint)lVar2);
    break;
  case 7:
  case 0xc:
    lVar13 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar20 = *(long *)(lVar13 + 0x20);
    lVar11 = *(long *)(lVar13 + 0x28);
    lVar14 = *(long *)(lVar13 + 0x30);
    lVar13 = *(long *)(lVar13 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(uVar3 << 1) * 8);
    pbVar18 = *(byte **)(*param_2 + (ulong)(uVar3 << 1 | 1) * 8);
    pbVar16 = *(byte **)(param_2[1] + (ulong)uVar3 * 8);
    pbVar17 = *(byte **)(param_2[2] + (ulong)uVar3 * 8);
    puVar15 = (undefined1 *)*param_4;
    puVar12 = (undefined1 *)param_4[1];
    uVar21 = *(uint *)(param_1 + 0x88);
    if (1 < uVar21) {
      lVar2 = 0;
      do {
        lVar7 = (long)*(int *)(lVar20 + (ulong)pbVar17[lVar2] * 4);
        lVar8 = *(long *)(lVar13 + (ulong)pbVar16[lVar2] * 8);
        lVar6 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
        uVar9 = (ulong)*pbVar5;
        lVar19 = (long)*(int *)(lVar11 + (ulong)pbVar16[lVar2] * 4);
        *puVar15 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
        puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar15[2] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar15[3] = 0xff;
        uVar9 = (ulong)pbVar5[1];
        puVar15[4] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar15[5] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        uVar1 = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar15[7] = 0xff;
        puVar15[6] = uVar1;
        uVar9 = (ulong)*pbVar18;
        *puVar12 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar12[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar12[2] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar12[3] = 0xff;
        uVar9 = (ulong)pbVar18[1];
        pbVar5 = pbVar5 + 2;
        puVar12[4] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar15 = puVar15 + 8;
        pbVar18 = pbVar18 + 2;
        puVar12[5] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar12[6] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar12[7] = 0xff;
        puVar12 = puVar12 + 8;
        lVar2 = lVar2 + 1;
      } while (uVar21 >> 1 != (uint)lVar2);
      uVar21 = *(uint *)(param_1 + 0x88);
      pbVar17 = pbVar17 + lVar2;
      pbVar16 = pbVar16 + lVar2;
    }
    if ((uVar21 & 1) == 0) {
      return;
    }
    lVar2 = (long)*(int *)(lVar20 + (ulong)*pbVar17 * 4);
    lVar13 = *(long *)(lVar13 + (ulong)*pbVar16 * 8);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar20 = (long)*(int *)(lVar11 + (ulong)*pbVar16 * 4);
    uVar9 = (ulong)*pbVar5;
    *puVar15 = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar14 + lVar13) >> 0x10);
    puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar15[2] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
    puVar15[3] = 0xff;
    uVar9 = (ulong)*pbVar18;
    *puVar12 = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar12[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar12[2] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
    goto code_r0x0001081d1e34;
  case 8:
    lVar13 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar20 = *(long *)(lVar13 + 0x20);
    lVar11 = *(long *)(lVar13 + 0x28);
    lVar14 = *(long *)(lVar13 + 0x30);
    lVar13 = *(long *)(lVar13 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(uVar3 << 1) * 8);
    pbVar18 = *(byte **)(*param_2 + (ulong)(uVar3 << 1 | 1) * 8);
    pbVar16 = *(byte **)(param_2[1] + (ulong)uVar3 * 8);
    pbVar17 = *(byte **)(param_2[2] + (ulong)uVar3 * 8);
    puVar15 = (undefined1 *)*param_4;
    puVar12 = (undefined1 *)param_4[1];
    uVar21 = *(uint *)(param_1 + 0x88);
    if (1 < uVar21) {
      lVar2 = 0;
      do {
        lVar7 = (long)*(int *)(lVar20 + (ulong)pbVar17[lVar2] * 4);
        lVar8 = *(long *)(lVar13 + (ulong)pbVar16[lVar2] * 8);
        lVar6 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
        uVar9 = (ulong)*pbVar5;
        lVar19 = (long)*(int *)(lVar11 + (ulong)pbVar16[lVar2] * 4);
        puVar15[2] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
        puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        *puVar15 = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        uVar9 = (ulong)pbVar5[1];
        puVar15[5] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar15[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar15[3] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        uVar9 = (ulong)*pbVar18;
        puVar12[2] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar12[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        *puVar12 = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        uVar9 = (ulong)pbVar18[1];
        puVar12[5] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        pbVar5 = pbVar5 + 2;
        pbVar18 = pbVar18 + 2;
        puVar12[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar15 = puVar15 + 6;
        puVar12[3] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar12 = puVar12 + 6;
        lVar2 = lVar2 + 1;
      } while (uVar21 >> 1 != (uint)lVar2);
      uVar21 = *(uint *)(param_1 + 0x88);
      pbVar17 = pbVar17 + lVar2;
      pbVar16 = pbVar16 + lVar2;
    }
    if ((uVar21 & 1) == 0) {
      return;
    }
    lVar2 = (long)*(int *)(lVar20 + (ulong)*pbVar17 * 4);
    lVar13 = *(long *)(lVar13 + (ulong)*pbVar16 * 8);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar20 = (long)*(int *)(lVar11 + (ulong)*pbVar16 * 4);
    uVar9 = (ulong)*pbVar5;
    puVar15[2] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar14 + lVar13) >> 0x10);
    puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    *puVar15 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
    uVar9 = (ulong)*pbVar18;
    puVar12[2] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar12[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    *puVar12 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
    return;
  case 9:
  case 0xd:
    lVar13 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar20 = *(long *)(lVar13 + 0x20);
    lVar11 = *(long *)(lVar13 + 0x28);
    lVar14 = *(long *)(lVar13 + 0x30);
    lVar13 = *(long *)(lVar13 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(uVar3 << 1) * 8);
    pbVar18 = *(byte **)(*param_2 + (ulong)(uVar3 << 1 | 1) * 8);
    pbVar16 = *(byte **)(param_2[1] + (ulong)uVar3 * 8);
    pbVar17 = *(byte **)(param_2[2] + (ulong)uVar3 * 8);
    puVar15 = (undefined1 *)*param_4;
    puVar12 = (undefined1 *)param_4[1];
    uVar21 = *(uint *)(param_1 + 0x88);
    if (1 < uVar21) {
      lVar2 = 0;
      do {
        lVar7 = (long)*(int *)(lVar20 + (ulong)pbVar17[lVar2] * 4);
        lVar8 = *(long *)(lVar13 + (ulong)pbVar16[lVar2] * 8);
        lVar6 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
        uVar9 = (ulong)*pbVar5;
        lVar19 = (long)*(int *)(lVar11 + (ulong)pbVar16[lVar2] * 4);
        puVar15[2] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
        puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        *puVar15 = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar15[3] = 0xff;
        uVar9 = (ulong)pbVar5[1];
        puVar15[6] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar15[5] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        uVar1 = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar15[7] = 0xff;
        puVar15[4] = uVar1;
        uVar9 = (ulong)*pbVar18;
        puVar12[2] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar12[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        *puVar12 = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar12[3] = 0xff;
        uVar9 = (ulong)pbVar18[1];
        pbVar5 = pbVar5 + 2;
        puVar12[6] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar15 = puVar15 + 8;
        pbVar18 = pbVar18 + 2;
        puVar12[5] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar12[4] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar12[7] = 0xff;
        puVar12 = puVar12 + 8;
        lVar2 = lVar2 + 1;
      } while (uVar21 >> 1 != (uint)lVar2);
      uVar21 = *(uint *)(param_1 + 0x88);
      pbVar17 = pbVar17 + lVar2;
      pbVar16 = pbVar16 + lVar2;
    }
    if ((uVar21 & 1) == 0) {
      return;
    }
    lVar2 = (long)*(int *)(lVar20 + (ulong)*pbVar17 * 4);
    lVar13 = *(long *)(lVar13 + (ulong)*pbVar16 * 8);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar20 = (long)*(int *)(lVar11 + (ulong)*pbVar16 * 4);
    uVar9 = (ulong)*pbVar5;
    puVar15[2] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar14 + lVar13) >> 0x10);
    puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    *puVar15 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
    puVar15[3] = 0xff;
    uVar9 = (ulong)*pbVar18;
    puVar12[2] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar12[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    *puVar12 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
code_r0x0001081d1e34:
    puVar12[3] = 0xff;
    return;
  case 10:
  case 0xe:
    lVar13 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar20 = *(long *)(lVar13 + 0x20);
    lVar11 = *(long *)(lVar13 + 0x28);
    lVar14 = *(long *)(lVar13 + 0x30);
    lVar13 = *(long *)(lVar13 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(uVar3 << 1) * 8);
    pbVar18 = *(byte **)(*param_2 + (ulong)(uVar3 << 1 | 1) * 8);
    pbVar16 = *(byte **)(param_2[1] + (ulong)uVar3 * 8);
    pbVar17 = *(byte **)(param_2[2] + (ulong)uVar3 * 8);
    puVar15 = (undefined1 *)*param_4;
    puVar12 = (undefined1 *)param_4[1];
    uVar21 = *(uint *)(param_1 + 0x88);
    if (1 < uVar21) {
      lVar2 = 0;
      do {
        lVar7 = (long)*(int *)(lVar20 + (ulong)pbVar17[lVar2] * 4);
        lVar8 = *(long *)(lVar13 + (ulong)pbVar16[lVar2] * 8);
        lVar6 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
        uVar9 = (ulong)*pbVar5;
        lVar19 = (long)*(int *)(lVar11 + (ulong)pbVar16[lVar2] * 4);
        puVar15[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
        puVar15[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar15[1] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        *puVar15 = 0xff;
        uVar9 = (ulong)pbVar5[1];
        puVar15[7] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar15[6] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        uVar1 = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar15[4] = 0xff;
        puVar15[5] = uVar1;
        uVar9 = (ulong)*pbVar18;
        puVar12[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar12[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar12[1] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        *puVar12 = 0xff;
        uVar9 = (ulong)pbVar18[1];
        pbVar5 = pbVar5 + 2;
        puVar12[7] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar15 = puVar15 + 8;
        pbVar18 = pbVar18 + 2;
        puVar12[6] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar12[5] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar12[4] = 0xff;
        puVar12 = puVar12 + 8;
        lVar2 = lVar2 + 1;
      } while (uVar21 >> 1 != (uint)lVar2);
      uVar21 = *(uint *)(param_1 + 0x88);
      pbVar17 = pbVar17 + lVar2;
      pbVar16 = pbVar16 + lVar2;
    }
    if ((uVar21 & 1) == 0) {
      return;
    }
    lVar2 = (long)*(int *)(lVar20 + (ulong)*pbVar17 * 4);
    lVar13 = *(long *)(lVar13 + (ulong)*pbVar16 * 8);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar20 = (long)*(int *)(lVar11 + (ulong)*pbVar16 * 4);
    uVar9 = (ulong)*pbVar5;
    puVar15[3] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar14 + lVar13) >> 0x10);
    puVar15[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar15[1] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
    *puVar15 = 0xff;
    uVar9 = (ulong)*pbVar18;
    puVar12[3] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar12[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar12[1] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
    goto code_r0x0001081d2010;
  case 0xb:
  case 0xf:
    lVar13 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar20 = *(long *)(lVar13 + 0x20);
    lVar11 = *(long *)(lVar13 + 0x28);
    lVar14 = *(long *)(lVar13 + 0x30);
    lVar13 = *(long *)(lVar13 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(uVar3 << 1) * 8);
    pbVar18 = *(byte **)(*param_2 + (ulong)(uVar3 << 1 | 1) * 8);
    pbVar16 = *(byte **)(param_2[1] + (ulong)uVar3 * 8);
    pbVar17 = *(byte **)(param_2[2] + (ulong)uVar3 * 8);
    puVar15 = (undefined1 *)*param_4;
    puVar12 = (undefined1 *)param_4[1];
    uVar21 = *(uint *)(param_1 + 0x88);
    if (1 < uVar21) {
      lVar2 = 0;
      do {
        lVar7 = (long)*(int *)(lVar20 + (ulong)pbVar17[lVar2] * 4);
        lVar8 = *(long *)(lVar13 + (ulong)pbVar16[lVar2] * 8);
        lVar6 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
        uVar9 = (ulong)*pbVar5;
        lVar19 = (long)*(int *)(lVar11 + (ulong)pbVar16[lVar2] * 4);
        puVar15[1] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
        puVar15[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar15[3] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        *puVar15 = 0xff;
        uVar9 = (ulong)pbVar5[1];
        puVar15[5] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar15[6] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        uVar1 = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar15[4] = 0xff;
        puVar15[7] = uVar1;
        uVar9 = (ulong)*pbVar18;
        puVar12[1] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar12[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar12[3] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        *puVar12 = 0xff;
        uVar9 = (ulong)pbVar18[1];
        pbVar5 = pbVar5 + 2;
        puVar12[5] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar15 = puVar15 + 8;
        pbVar18 = pbVar18 + 2;
        puVar12[6] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar12[7] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
        puVar12[4] = 0xff;
        puVar12 = puVar12 + 8;
        lVar2 = lVar2 + 1;
      } while (uVar21 >> 1 != (uint)lVar2);
      uVar21 = *(uint *)(param_1 + 0x88);
      pbVar17 = pbVar17 + lVar2;
      pbVar16 = pbVar16 + lVar2;
    }
    if ((uVar21 & 1) == 0) {
      return;
    }
    lVar2 = (long)*(int *)(lVar20 + (ulong)*pbVar17 * 4);
    lVar13 = *(long *)(lVar13 + (ulong)*pbVar16 * 8);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar20 = (long)*(int *)(lVar11 + (ulong)*pbVar16 * 4);
    uVar9 = (ulong)*pbVar5;
    puVar15[1] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar14 + lVar13) >> 0x10);
    puVar15[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar15[3] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
    *puVar15 = 0xff;
    uVar9 = (ulong)*pbVar18;
    puVar12[1] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar12[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar12[3] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
code_r0x0001081d2010:
    *puVar12 = 0xff;
    return;
  default:
    lVar13 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar20 = *(long *)(lVar13 + 0x20);
    lVar11 = *(long *)(lVar13 + 0x28);
    lVar14 = *(long *)(lVar13 + 0x30);
    lVar13 = *(long *)(lVar13 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(uVar3 << 1) * 8);
    pbVar18 = *(byte **)(*param_2 + (ulong)(uVar3 << 1 | 1) * 8);
    pbVar16 = *(byte **)(param_2[1] + (ulong)uVar3 * 8);
    pbVar17 = *(byte **)(param_2[2] + (ulong)uVar3 * 8);
    puVar15 = (undefined1 *)*param_4;
    puVar12 = (undefined1 *)param_4[1];
    uVar21 = *(uint *)(param_1 + 0x88);
    if (uVar21 < 2) goto LAB_1081d244c;
    lVar2 = 0;
    do {
      lVar7 = (long)*(int *)(lVar20 + (ulong)pbVar17[lVar2] * 4);
      lVar8 = *(long *)(lVar13 + (ulong)pbVar16[lVar2] * 8);
      lVar6 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
      uVar9 = (ulong)*pbVar5;
      lVar19 = (long)*(int *)(lVar11 + (ulong)pbVar16[lVar2] * 4);
      *puVar15 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
      puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar15[2] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      uVar9 = (ulong)pbVar5[1];
      puVar15[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      puVar15[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar15[5] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      uVar9 = (ulong)*pbVar18;
      *puVar12 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      puVar12[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar12[2] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      uVar9 = (ulong)pbVar18[1];
      puVar12[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      pbVar5 = pbVar5 + 2;
      pbVar18 = pbVar18 + 2;
      puVar12[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar15 = puVar15 + 6;
      puVar12[5] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      puVar12 = puVar12 + 6;
      lVar2 = lVar2 + 1;
    } while (uVar21 >> 1 != (uint)lVar2);
  }
  uVar21 = *(uint *)(param_1 + 0x88);
  pbVar17 = pbVar17 + lVar2;
  pbVar16 = pbVar16 + lVar2;
LAB_1081d244c:
  if ((uVar21 & 1) != 0) {
    lVar2 = (long)*(int *)(lVar20 + (ulong)*pbVar17 * 4);
    lVar13 = *(long *)(lVar13 + (ulong)*pbVar16 * 8);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar20 = (long)*(int *)(lVar11 + (ulong)*pbVar16 * 4);
    uVar9 = (ulong)*pbVar5;
    *puVar15 = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar14 + lVar13) >> 0x10);
    puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar15[2] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
    uVar9 = (ulong)*pbVar18;
    *puVar12 = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar12[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar12[2] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
  }
  return;
}



/* Entry: 1081d1880; end: 1081d24cb;  */

void FUN_1081d1880(long param_1,long *param_2,uint param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 6:
    lVar14 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar12 = *(long *)(lVar14 + 0x20);
    lVar11 = *(long *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
    lVar14 = *(long *)(lVar14 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
    pbVar19 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
    pbVar17 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
    pbVar18 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
    puVar16 = (undefined1 *)*param_4;
    puVar13 = (undefined1 *)param_4[1];
    uVar3 = *(uint *)(param_1 + 0x88);
    if (uVar3 < 2) goto LAB_1081d244c;
    lVar2 = 0;
    do {
      lVar7 = (long)*(int *)(lVar12 + (ulong)pbVar18[lVar2] * 4);
      lVar8 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
      lVar6 = *(long *)(lVar15 + (ulong)pbVar18[lVar2] * 8);
      uVar9 = (ulong)*pbVar5;
      lVar20 = (long)*(int *)(lVar11 + (ulong)pbVar17[lVar2] * 4);
      *puVar16 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
      puVar16[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar16[2] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
      uVar9 = (ulong)pbVar5[1];
      puVar16[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      puVar16[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar16[5] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
      uVar9 = (ulong)*pbVar19;
      *puVar13 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar13[2] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
      uVar9 = (ulong)pbVar19[1];
      puVar13[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      pbVar5 = pbVar5 + 2;
      pbVar19 = pbVar19 + 2;
      puVar13[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar16 = puVar16 + 6;
      puVar13[5] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
      puVar13 = puVar13 + 6;
      lVar2 = lVar2 + 1;
    } while (uVar3 >> 1 != (uint)lVar2);
    break;
  case 7:
  case 0xc:
    lVar14 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar12 = *(long *)(lVar14 + 0x20);
    lVar11 = *(long *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
    lVar14 = *(long *)(lVar14 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
    pbVar19 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
    pbVar17 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
    pbVar18 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
    puVar16 = (undefined1 *)*param_4;
    puVar13 = (undefined1 *)param_4[1];
    uVar3 = *(uint *)(param_1 + 0x88);
    if (1 < uVar3) {
      lVar2 = 0;
      do {
        lVar7 = (long)*(int *)(lVar12 + (ulong)pbVar18[lVar2] * 4);
        lVar8 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
        lVar6 = *(long *)(lVar15 + (ulong)pbVar18[lVar2] * 8);
        uVar9 = (ulong)*pbVar5;
        lVar20 = (long)*(int *)(lVar11 + (ulong)pbVar17[lVar2] * 4);
        *puVar16 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
        puVar16[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar16[2] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar16[3] = 0xff;
        uVar9 = (ulong)pbVar5[1];
        puVar16[4] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar16[5] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        uVar1 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar16[7] = 0xff;
        puVar16[6] = uVar1;
        uVar9 = (ulong)*pbVar19;
        *puVar13 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar13[2] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar13[3] = 0xff;
        uVar9 = (ulong)pbVar19[1];
        pbVar5 = pbVar5 + 2;
        puVar13[4] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar16 = puVar16 + 8;
        pbVar19 = pbVar19 + 2;
        puVar13[5] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar13[6] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar13[7] = 0xff;
        puVar13 = puVar13 + 8;
        lVar2 = lVar2 + 1;
      } while (uVar3 >> 1 != (uint)lVar2);
      uVar3 = *(uint *)(param_1 + 0x88);
      pbVar18 = pbVar18 + lVar2;
      pbVar17 = pbVar17 + lVar2;
    }
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar2 = (long)*(int *)(lVar12 + (ulong)*pbVar18 * 4);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar15 = *(long *)(lVar15 + (ulong)*pbVar18 * 8);
    lVar12 = (long)*(int *)(lVar11 + (ulong)*pbVar17 * 4);
    uVar9 = (ulong)*pbVar5;
    *puVar16 = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar15 + lVar14) >> 0x10);
    puVar16[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar16[2] = *(undefined1 *)(lVar10 + lVar12 + uVar9);
    puVar16[3] = 0xff;
    uVar9 = (ulong)*pbVar19;
    *puVar13 = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar13[2] = *(undefined1 *)(lVar10 + lVar12 + uVar9);
    goto code_r0x0001081d1e34;
  case 8:
    lVar14 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar12 = *(long *)(lVar14 + 0x20);
    lVar11 = *(long *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
    lVar14 = *(long *)(lVar14 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
    pbVar19 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
    pbVar17 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
    pbVar18 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
    puVar16 = (undefined1 *)*param_4;
    puVar13 = (undefined1 *)param_4[1];
    uVar3 = *(uint *)(param_1 + 0x88);
    if (1 < uVar3) {
      lVar2 = 0;
      do {
        lVar7 = (long)*(int *)(lVar12 + (ulong)pbVar18[lVar2] * 4);
        lVar8 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
        lVar6 = *(long *)(lVar15 + (ulong)pbVar18[lVar2] * 8);
        uVar9 = (ulong)*pbVar5;
        lVar20 = (long)*(int *)(lVar11 + (ulong)pbVar17[lVar2] * 4);
        puVar16[2] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
        puVar16[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        *puVar16 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        uVar9 = (ulong)pbVar5[1];
        puVar16[5] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar16[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar16[3] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        uVar9 = (ulong)*pbVar19;
        puVar13[2] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        *puVar13 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        uVar9 = (ulong)pbVar19[1];
        puVar13[5] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        pbVar5 = pbVar5 + 2;
        pbVar19 = pbVar19 + 2;
        puVar13[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar16 = puVar16 + 6;
        puVar13[3] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar13 = puVar13 + 6;
        lVar2 = lVar2 + 1;
      } while (uVar3 >> 1 != (uint)lVar2);
      uVar3 = *(uint *)(param_1 + 0x88);
      pbVar18 = pbVar18 + lVar2;
      pbVar17 = pbVar17 + lVar2;
    }
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar2 = (long)*(int *)(lVar12 + (ulong)*pbVar18 * 4);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar15 = *(long *)(lVar15 + (ulong)*pbVar18 * 8);
    lVar12 = (long)*(int *)(lVar11 + (ulong)*pbVar17 * 4);
    uVar9 = (ulong)*pbVar5;
    puVar16[2] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar15 + lVar14) >> 0x10);
    puVar16[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    *puVar16 = *(undefined1 *)(lVar10 + lVar12 + uVar9);
    uVar9 = (ulong)*pbVar19;
    puVar13[2] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    *puVar13 = *(undefined1 *)(lVar10 + lVar12 + uVar9);
    return;
  case 9:
  case 0xd:
    lVar14 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar12 = *(long *)(lVar14 + 0x20);
    lVar11 = *(long *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
    lVar14 = *(long *)(lVar14 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
    pbVar19 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
    pbVar17 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
    pbVar18 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
    puVar16 = (undefined1 *)*param_4;
    puVar13 = (undefined1 *)param_4[1];
    uVar3 = *(uint *)(param_1 + 0x88);
    if (1 < uVar3) {
      lVar2 = 0;
      do {
        lVar7 = (long)*(int *)(lVar12 + (ulong)pbVar18[lVar2] * 4);
        lVar8 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
        lVar6 = *(long *)(lVar15 + (ulong)pbVar18[lVar2] * 8);
        uVar9 = (ulong)*pbVar5;
        lVar20 = (long)*(int *)(lVar11 + (ulong)pbVar17[lVar2] * 4);
        puVar16[2] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
        puVar16[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        *puVar16 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar16[3] = 0xff;
        uVar9 = (ulong)pbVar5[1];
        puVar16[6] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar16[5] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        uVar1 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar16[7] = 0xff;
        puVar16[4] = uVar1;
        uVar9 = (ulong)*pbVar19;
        puVar13[2] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        *puVar13 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar13[3] = 0xff;
        uVar9 = (ulong)pbVar19[1];
        pbVar5 = pbVar5 + 2;
        puVar13[6] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar16 = puVar16 + 8;
        pbVar19 = pbVar19 + 2;
        puVar13[5] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar13[4] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar13[7] = 0xff;
        puVar13 = puVar13 + 8;
        lVar2 = lVar2 + 1;
      } while (uVar3 >> 1 != (uint)lVar2);
      uVar3 = *(uint *)(param_1 + 0x88);
      pbVar18 = pbVar18 + lVar2;
      pbVar17 = pbVar17 + lVar2;
    }
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar2 = (long)*(int *)(lVar12 + (ulong)*pbVar18 * 4);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar15 = *(long *)(lVar15 + (ulong)*pbVar18 * 8);
    lVar12 = (long)*(int *)(lVar11 + (ulong)*pbVar17 * 4);
    uVar9 = (ulong)*pbVar5;
    puVar16[2] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar15 + lVar14) >> 0x10);
    puVar16[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    *puVar16 = *(undefined1 *)(lVar10 + lVar12 + uVar9);
    puVar16[3] = 0xff;
    uVar9 = (ulong)*pbVar19;
    puVar13[2] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    *puVar13 = *(undefined1 *)(lVar10 + lVar12 + uVar9);
code_r0x0001081d1e34:
    puVar13[3] = 0xff;
    return;
  case 10:
  case 0xe:
    lVar14 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar12 = *(long *)(lVar14 + 0x20);
    lVar11 = *(long *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
    lVar14 = *(long *)(lVar14 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
    pbVar19 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
    pbVar17 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
    pbVar18 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
    puVar16 = (undefined1 *)*param_4;
    puVar13 = (undefined1 *)param_4[1];
    uVar3 = *(uint *)(param_1 + 0x88);
    if (1 < uVar3) {
      lVar2 = 0;
      do {
        lVar7 = (long)*(int *)(lVar12 + (ulong)pbVar18[lVar2] * 4);
        lVar8 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
        lVar6 = *(long *)(lVar15 + (ulong)pbVar18[lVar2] * 8);
        uVar9 = (ulong)*pbVar5;
        lVar20 = (long)*(int *)(lVar11 + (ulong)pbVar17[lVar2] * 4);
        puVar16[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
        puVar16[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar16[1] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        *puVar16 = 0xff;
        uVar9 = (ulong)pbVar5[1];
        puVar16[7] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar16[6] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        uVar1 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar16[4] = 0xff;
        puVar16[5] = uVar1;
        uVar9 = (ulong)*pbVar19;
        puVar13[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar13[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar13[1] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        *puVar13 = 0xff;
        uVar9 = (ulong)pbVar19[1];
        pbVar5 = pbVar5 + 2;
        puVar13[7] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar16 = puVar16 + 8;
        pbVar19 = pbVar19 + 2;
        puVar13[6] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar13[5] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar13[4] = 0xff;
        puVar13 = puVar13 + 8;
        lVar2 = lVar2 + 1;
      } while (uVar3 >> 1 != (uint)lVar2);
      uVar3 = *(uint *)(param_1 + 0x88);
      pbVar18 = pbVar18 + lVar2;
      pbVar17 = pbVar17 + lVar2;
    }
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar2 = (long)*(int *)(lVar12 + (ulong)*pbVar18 * 4);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar15 = *(long *)(lVar15 + (ulong)*pbVar18 * 8);
    lVar12 = (long)*(int *)(lVar11 + (ulong)*pbVar17 * 4);
    uVar9 = (ulong)*pbVar5;
    puVar16[3] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar15 + lVar14) >> 0x10);
    puVar16[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar16[1] = *(undefined1 *)(lVar10 + lVar12 + uVar9);
    *puVar16 = 0xff;
    uVar9 = (ulong)*pbVar19;
    puVar13[3] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar13[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar13[1] = *(undefined1 *)(lVar10 + lVar12 + uVar9);
    goto code_r0x0001081d2010;
  case 0xb:
  case 0xf:
    lVar14 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar12 = *(long *)(lVar14 + 0x20);
    lVar11 = *(long *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
    lVar14 = *(long *)(lVar14 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
    pbVar19 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
    pbVar17 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
    pbVar18 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
    puVar16 = (undefined1 *)*param_4;
    puVar13 = (undefined1 *)param_4[1];
    uVar3 = *(uint *)(param_1 + 0x88);
    if (1 < uVar3) {
      lVar2 = 0;
      do {
        lVar7 = (long)*(int *)(lVar12 + (ulong)pbVar18[lVar2] * 4);
        lVar8 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
        lVar6 = *(long *)(lVar15 + (ulong)pbVar18[lVar2] * 8);
        uVar9 = (ulong)*pbVar5;
        lVar20 = (long)*(int *)(lVar11 + (ulong)pbVar17[lVar2] * 4);
        puVar16[1] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
        puVar16[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar16[3] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        *puVar16 = 0xff;
        uVar9 = (ulong)pbVar5[1];
        puVar16[5] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar16[6] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        uVar1 = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar16[4] = 0xff;
        puVar16[7] = uVar1;
        uVar9 = (ulong)*pbVar19;
        puVar13[1] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar13[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar13[3] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        *puVar13 = 0xff;
        uVar9 = (ulong)pbVar19[1];
        pbVar5 = pbVar5 + 2;
        puVar13[5] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
        puVar16 = puVar16 + 8;
        pbVar19 = pbVar19 + 2;
        puVar13[6] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
        puVar13[7] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
        puVar13[4] = 0xff;
        puVar13 = puVar13 + 8;
        lVar2 = lVar2 + 1;
      } while (uVar3 >> 1 != (uint)lVar2);
      uVar3 = *(uint *)(param_1 + 0x88);
      pbVar18 = pbVar18 + lVar2;
      pbVar17 = pbVar17 + lVar2;
    }
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar2 = (long)*(int *)(lVar12 + (ulong)*pbVar18 * 4);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar15 = *(long *)(lVar15 + (ulong)*pbVar18 * 8);
    lVar12 = (long)*(int *)(lVar11 + (ulong)*pbVar17 * 4);
    uVar9 = (ulong)*pbVar5;
    puVar16[1] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar15 + lVar14) >> 0x10);
    puVar16[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar16[3] = *(undefined1 *)(lVar10 + lVar12 + uVar9);
    *puVar16 = 0xff;
    uVar9 = (ulong)*pbVar19;
    puVar13[1] = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar13[2] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar13[3] = *(undefined1 *)(lVar10 + lVar12 + uVar9);
code_r0x0001081d2010:
    *puVar13 = 0xff;
    return;
  default:
    lVar14 = *(long *)(param_1 + 0x260);
    lVar10 = *(long *)(param_1 + 0x1a8);
    lVar12 = *(long *)(lVar14 + 0x20);
    lVar11 = *(long *)(lVar14 + 0x28);
    lVar15 = *(long *)(lVar14 + 0x30);
    lVar14 = *(long *)(lVar14 + 0x38);
    pbVar5 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
    pbVar19 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
    pbVar17 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
    pbVar18 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
    puVar16 = (undefined1 *)*param_4;
    puVar13 = (undefined1 *)param_4[1];
    uVar3 = *(uint *)(param_1 + 0x88);
    if (uVar3 < 2) goto LAB_1081d244c;
    lVar2 = 0;
    do {
      lVar7 = (long)*(int *)(lVar12 + (ulong)pbVar18[lVar2] * 4);
      lVar8 = *(long *)(lVar14 + (ulong)pbVar17[lVar2] * 8);
      lVar6 = *(long *)(lVar15 + (ulong)pbVar18[lVar2] * 8);
      uVar9 = (ulong)*pbVar5;
      lVar20 = (long)*(int *)(lVar11 + (ulong)pbVar17[lVar2] * 4);
      *puVar16 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
      puVar16[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar16[2] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
      uVar9 = (ulong)pbVar5[1];
      puVar16[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      puVar16[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar16[5] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
      uVar9 = (ulong)*pbVar19;
      *puVar13 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar13[2] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
      uVar9 = (ulong)pbVar19[1];
      puVar13[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      pbVar5 = pbVar5 + 2;
      pbVar19 = pbVar19 + 2;
      puVar13[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar16 = puVar16 + 6;
      puVar13[5] = *(undefined1 *)(lVar10 + lVar20 + uVar9);
      puVar13 = puVar13 + 6;
      lVar2 = lVar2 + 1;
    } while (uVar3 >> 1 != (uint)lVar2);
  }
  uVar3 = *(uint *)(param_1 + 0x88);
  pbVar18 = pbVar18 + lVar2;
  pbVar17 = pbVar17 + lVar2;
LAB_1081d244c:
  if ((uVar3 & 1) != 0) {
    lVar2 = (long)*(int *)(lVar12 + (ulong)*pbVar18 * 4);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar15 = *(long *)(lVar15 + (ulong)*pbVar18 * 8);
    lVar12 = (long)*(int *)(lVar11 + (ulong)*pbVar17 * 4);
    uVar9 = (ulong)*pbVar5;
    *puVar16 = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    iVar4 = (int)((ulong)(lVar15 + lVar14) >> 0x10);
    puVar16[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar16[2] = *(undefined1 *)(lVar10 + lVar12 + uVar9);
    uVar9 = (ulong)*pbVar19;
    *puVar13 = *(undefined1 *)(lVar10 + lVar2 + uVar9);
    puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar13[2] = *(undefined1 *)(lVar10 + lVar12 + uVar9);
  }
  return;
}



/* Entry: 1081d24cc; end: 1081d27df;  */

void FUN_1081d24cc(long param_1,long *param_2,uint param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ushort *puVar20;
  long lVar21;
  byte *pbVar22;
  ulong uVar23;
  byte *pbVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ushort *puVar30;
  
  uVar23 = *(ulong *)(&UNK_10df09030 + ((ulong)*(uint *)(param_1 + 0xa8) & 3) * 8);
  uVar18 = *(ulong *)(&UNK_10df09030 + (ulong)(*(uint *)(param_1 + 0xa8) + 1 & 3) * 8);
  lVar19 = *(long *)(param_1 + 0x260);
  pbVar24 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
  lVar17 = *(long *)(param_1 + 0x1a8);
  pbVar22 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
  lVar3 = *(long *)(lVar19 + 0x20);
  lVar21 = *(long *)(lVar19 + 0x28);
  lVar4 = *(long *)(lVar19 + 0x30);
  lVar19 = *(long *)(lVar19 + 0x38);
  pbVar13 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
  pbVar9 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
  puVar20 = (ushort *)*param_4;
  puVar30 = (ushort *)param_4[1];
  uVar5 = *(uint *)(param_1 + 0x88);
  if (1 < uVar5) {
    lVar11 = 0;
    lVar12 = 0;
    uVar15 = uVar5 >> 1;
    pbVar10 = pbVar9;
    pbVar14 = pbVar13;
    do {
      pbVar13 = pbVar14 + 1;
      pbVar9 = pbVar10 + 1;
      lVar26 = (long)*(int *)(lVar3 + (ulong)*pbVar10 * 4);
      lVar16 = (long)*(int *)(lVar21 + (ulong)*pbVar14 * 4);
      uVar28 = (ulong)pbVar24[lVar12];
      lVar1 = lVar17 + (uVar23 & 0xff);
      uVar29 = uVar23 & 0xff;
      iVar25 = (int)((ulong)(*(long *)(lVar4 + (ulong)*pbVar10 * 8) +
                            *(long *)(lVar19 + (ulong)*pbVar14 * 8)) >> 0x10);
      uVar27 = (ulong)(pbVar24 + lVar12)[1];
      bVar6 = *(byte *)(lVar17 + ((uVar23 >> 8 & 0xff) >> 1) + uVar27 + (long)iVar25);
      lVar2 = lVar17 + (uVar23 >> 8 & 0xff);
      bVar7 = *(byte *)(lVar2 + lVar26 + uVar27);
      bVar8 = *(byte *)(lVar2 + lVar16 + uVar27);
      uVar23 = (uVar23 >> 8 & 0xffff00 | (uVar23 & 0xff) << 0x18) >> 8 |
               (uVar23 >> 8 & 0xff) << 0x18;
      puVar20[lVar12] =
           (*(byte *)(lVar1 + lVar26 + uVar28) & 0xf8) << 8 |
           (ushort)(*(byte *)(lVar17 + (uVar29 >> 1) + uVar28 + (long)iVar25) >> 2) << 5 |
           (ushort)(*(byte *)(lVar1 + lVar16 + uVar28) >> 3);
      (puVar20 + lVar12)[1] = (bVar7 & 0xf8) << 8 | (ushort)(bVar6 >> 2) << 5 | (ushort)(bVar8 >> 3)
      ;
      uVar28 = (ulong)pbVar22[lVar12];
      uVar27 = uVar18 & 0xff;
      lVar1 = lVar17 + (uVar18 & 0xff);
      uVar29 = (ulong)(pbVar22 + lVar12)[1];
      lVar2 = lVar17 + (uVar18 >> 8 & 0xff);
      bVar6 = *(byte *)(lVar2 + lVar26 + uVar29);
      bVar7 = *(byte *)(lVar17 + ((uVar18 >> 8 & 0xff) >> 1) + uVar29 + (long)iVar25);
      bVar8 = *(byte *)(lVar2 + lVar16 + uVar29);
      uVar18 = (uVar18 >> 8 & 0xffff00 | (uVar18 & 0xff) << 0x18) >> 8 |
               (uVar18 >> 8 & 0xff) << 0x18;
      puVar30[lVar12] =
           (*(byte *)(lVar1 + lVar26 + uVar28) & 0xf8) << 8 |
           (ushort)(*(byte *)(lVar17 + (uVar27 >> 1) + uVar28 + (long)iVar25) >> 2) << 5 |
           (ushort)(*(byte *)(lVar1 + lVar16 + uVar28) >> 3);
      (puVar30 + lVar12)[1] = (bVar6 & 0xf8) << 8 | (ushort)(bVar7 >> 2) << 5 | (ushort)(bVar8 >> 3)
      ;
      lVar12 = lVar12 + 2;
      lVar11 = lVar11 + -4;
      uVar15 = uVar15 - 1;
      pbVar10 = pbVar9;
      pbVar14 = pbVar13;
    } while (uVar15 != 0);
    pbVar22 = pbVar22 + lVar12;
    pbVar24 = pbVar24 + lVar12;
    puVar30 = (ushort *)((long)puVar30 - lVar11);
    puVar20 = (ushort *)((long)puVar20 - lVar11);
  }
  if ((uVar5 & 1) != 0) {
    lVar12 = (long)*(int *)(lVar3 + (ulong)*pbVar9 * 4);
    lVar21 = (long)*(int *)(lVar21 + (ulong)*pbVar13 * 4);
    uVar27 = (ulong)*pbVar24;
    lVar3 = lVar17 + (uVar23 & 0xff);
    iVar25 = (int)((ulong)(*(long *)(lVar4 + (ulong)*pbVar9 * 8) +
                          *(long *)(lVar19 + (ulong)*pbVar13 * 8)) >> 0x10);
    *puVar20 = (*(byte *)(lVar3 + lVar12 + uVar27) & 0xf8) << 8 |
               (ushort)(*(byte *)(lVar17 + ((uVar23 & 0xff) >> 1) + uVar27 + (long)iVar25) >> 2) <<
               5 | (ushort)(*(byte *)(lVar3 + lVar21 + uVar27) >> 3);
    uVar23 = (ulong)*pbVar22;
    lVar3 = lVar17 + (uVar18 & 0xff);
    *puVar30 = (*(byte *)(lVar3 + lVar12 + uVar23) & 0xf8) << 8 |
               (ushort)(*(byte *)(lVar17 + ((uVar18 & 0xff) >> 1) + uVar23 + (long)iVar25) >> 2) <<
               5 | (ushort)(*(byte *)(lVar3 + lVar21 + uVar23) >> 3);
  }
  return;
}



/* Entry: 1081d27e0; end: 1081d2a07;  */

void FUN_1081d27e0(long param_1,long *param_2,uint param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ushort *puVar15;
  byte *pbVar16;
  ushort *puVar17;
  byte *pbVar18;
  long lVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  
  lVar14 = *(long *)(param_1 + 0x260);
  pbVar18 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
  lVar13 = *(long *)(param_1 + 0x1a8);
  pbVar16 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
  lVar19 = *(long *)(lVar14 + 0x20);
  lVar2 = *(long *)(lVar14 + 0x28);
  lVar1 = *(long *)(lVar14 + 0x30);
  lVar14 = *(long *)(lVar14 + 0x38);
  pbVar21 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
  pbVar7 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
  puVar17 = (ushort *)*param_4;
  puVar15 = (ushort *)param_4[1];
  uVar3 = *(uint *)(param_1 + 0x88);
  if (1 < uVar3) {
    lVar9 = 0;
    lVar10 = 0;
    uVar11 = uVar3 >> 1;
    pbVar8 = pbVar7;
    pbVar22 = pbVar21;
    do {
      pbVar21 = pbVar22 + 1;
      pbVar7 = pbVar8 + 1;
      lVar12 = (long)*(int *)(lVar19 + (ulong)*pbVar8 * 4);
      lVar23 = (long)*(int *)(lVar2 + (ulong)*pbVar22 * 4);
      uVar25 = (ulong)pbVar18[lVar10];
      iVar20 = (int)((ulong)(*(long *)(lVar1 + (ulong)*pbVar8 * 8) +
                            *(long *)(lVar14 + (ulong)*pbVar22 * 8)) >> 0x10);
      uVar24 = (ulong)(pbVar18 + lVar10)[1];
      bVar4 = *(byte *)(lVar13 + lVar12 + uVar24);
      bVar5 = *(byte *)(lVar13 + uVar24 + (long)iVar20);
      bVar6 = *(byte *)(lVar13 + lVar23 + uVar24);
      puVar17[lVar10] =
           (*(byte *)(lVar13 + lVar12 + uVar25) & 0xf8) << 8 |
           (ushort)(*(byte *)(lVar13 + uVar25 + (long)iVar20) >> 2) << 5 |
           (ushort)(*(byte *)(lVar13 + lVar23 + uVar25) >> 3);
      (puVar17 + lVar10)[1] = (bVar4 & 0xf8) << 8 | (ushort)(bVar5 >> 2) << 5 | (ushort)(bVar6 >> 3)
      ;
      uVar25 = (ulong)pbVar16[lVar10];
      uVar24 = (ulong)(pbVar16 + lVar10)[1];
      bVar4 = *(byte *)(lVar13 + lVar12 + uVar24);
      bVar5 = *(byte *)(lVar13 + uVar24 + (long)iVar20);
      bVar6 = *(byte *)(lVar13 + lVar23 + uVar24);
      puVar15[lVar10] =
           (*(byte *)(lVar13 + lVar12 + uVar25) & 0xf8) << 8 |
           (ushort)(*(byte *)(lVar13 + uVar25 + (long)iVar20) >> 2) << 5 |
           (ushort)(*(byte *)(lVar13 + lVar23 + uVar25) >> 3);
      (puVar15 + lVar10)[1] = (bVar4 & 0xf8) << 8 | (ushort)(bVar5 >> 2) << 5 | (ushort)(bVar6 >> 3)
      ;
      lVar10 = lVar10 + 2;
      lVar9 = lVar9 + -4;
      uVar11 = uVar11 - 1;
      pbVar8 = pbVar7;
      pbVar22 = pbVar21;
    } while (uVar11 != 0);
    pbVar16 = pbVar16 + lVar10;
    pbVar18 = pbVar18 + lVar10;
    puVar15 = (ushort *)((long)puVar15 - lVar9);
    puVar17 = (ushort *)((long)puVar17 - lVar9);
  }
  if ((uVar3 & 1) != 0) {
    lVar10 = (long)*(int *)(lVar19 + (ulong)*pbVar7 * 4);
    lVar19 = (long)*(int *)(lVar2 + (ulong)*pbVar21 * 4);
    uVar24 = (ulong)*pbVar18;
    iVar20 = (int)((ulong)(*(long *)(lVar1 + (ulong)*pbVar7 * 8) +
                          *(long *)(lVar14 + (ulong)*pbVar21 * 8)) >> 0x10);
    *puVar17 = (*(byte *)(lVar13 + lVar10 + uVar24) & 0xf8) << 8 |
               (ushort)(*(byte *)(lVar13 + uVar24 + (long)iVar20) >> 2) << 5 |
               (ushort)(*(byte *)(lVar13 + lVar19 + uVar24) >> 3);
    uVar24 = (ulong)*pbVar16;
    *puVar15 = (*(byte *)(lVar13 + lVar10 + uVar24) & 0xf8) << 8 |
               (ushort)(*(byte *)(lVar13 + uVar24 + (long)iVar20) >> 2) << 5 |
               (ushort)(*(byte *)(lVar13 + lVar19 + uVar24) >> 3);
  }
  return;
}



/* Entry: 1081d2a08; end: 1081d2a57;  */

void FUN_1081d2a08(long param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
                  uint *param_6)

{
  (**(code **)(*(long *)(param_1 + 0x260) + 0x18))
            (param_1,param_2,*param_3,param_5 + (ulong)*param_6 * 8);
  *param_6 = *param_6 + 1;
  *param_3 = *param_3 + 1;
  return;
}



/* Entry: 1081d2a58; end: 1081d31fb;  */

void FUN_1081d2a58(long param_1,long *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 6:
    lVar10 = *(long *)(param_1 + 0x260);
    lVar7 = *(long *)(param_1 + 0x1a8);
    lVar9 = *(long *)(lVar10 + 0x20);
    lVar8 = *(long *)(lVar10 + 0x28);
    lVar12 = *(long *)(lVar10 + 0x30);
    lVar10 = *(long *)(lVar10 + 0x38);
    pbVar18 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
    pbVar14 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
    pbVar16 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
    puVar11 = (undefined1 *)*param_4;
    uVar19 = *(uint *)(param_1 + 0x88);
    if (1 < uVar19) {
      uVar19 = uVar19 >> 1;
      pbVar13 = pbVar14;
      pbVar15 = pbVar16;
      pbVar17 = pbVar18;
      do {
        pbVar14 = pbVar13 + 1;
        pbVar16 = pbVar15 + 1;
        lVar4 = (long)*(int *)(lVar9 + (ulong)*pbVar15 * 4);
        lVar5 = *(long *)(lVar10 + (ulong)*pbVar13 * 8);
        lVar3 = *(long *)(lVar12 + (ulong)*pbVar15 * 8);
        lVar6 = (long)*(int *)(lVar8 + (ulong)*pbVar13 * 4);
        uVar1 = (ulong)*pbVar17;
        *puVar11 = *(undefined1 *)(lVar7 + lVar4 + uVar1);
        iVar2 = (int)((ulong)(lVar3 + lVar5) >> 0x10);
        puVar11[1] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        puVar11[2] = *(undefined1 *)(lVar7 + lVar6 + uVar1);
        pbVar18 = pbVar17 + 2;
        uVar1 = (ulong)pbVar17[1];
        puVar11[3] = *(undefined1 *)(lVar7 + lVar4 + uVar1);
        puVar11[4] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        puVar11[5] = *(undefined1 *)(lVar7 + lVar6 + uVar1);
        puVar11 = puVar11 + 6;
        uVar19 = uVar19 - 1;
        pbVar13 = pbVar14;
        pbVar15 = pbVar16;
        pbVar17 = pbVar18;
      } while (uVar19 != 0);
code_r0x0001081d31a0:
      uVar19 = *(uint *)(param_1 + 0x88);
    }
    goto LAB_1081d31a8;
  case 7:
  case 0xc:
    lVar10 = *(long *)(param_1 + 0x260);
    lVar7 = *(long *)(param_1 + 0x1a8);
    lVar9 = *(long *)(lVar10 + 0x20);
    lVar8 = *(long *)(lVar10 + 0x28);
    lVar12 = *(long *)(lVar10 + 0x30);
    lVar10 = *(long *)(lVar10 + 0x38);
    pbVar18 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
    pbVar14 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
    pbVar16 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
    puVar11 = (undefined1 *)*param_4;
    uVar19 = *(uint *)(param_1 + 0x88);
    if (1 < uVar19) {
      uVar19 = uVar19 >> 1;
      pbVar13 = pbVar14;
      pbVar15 = pbVar16;
      do {
        pbVar14 = pbVar13 + 1;
        pbVar16 = pbVar15 + 1;
        lVar5 = (long)*(int *)(lVar9 + (ulong)*pbVar15 * 4);
        lVar6 = *(long *)(lVar10 + (ulong)*pbVar13 * 8);
        lVar4 = *(long *)(lVar12 + (ulong)*pbVar15 * 8);
        lVar3 = (long)*(int *)(lVar8 + (ulong)*pbVar13 * 4);
        uVar1 = (ulong)*pbVar18;
        *puVar11 = *(undefined1 *)(lVar7 + lVar5 + uVar1);
        iVar2 = (int)((ulong)(lVar4 + lVar6) >> 0x10);
        puVar11[1] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        puVar11[2] = *(undefined1 *)(lVar7 + lVar3 + uVar1);
        puVar11[3] = 0xff;
        uVar1 = (ulong)pbVar18[1];
        puVar11[4] = *(undefined1 *)(lVar7 + lVar5 + uVar1);
        puVar11[5] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        pbVar18 = pbVar18 + 2;
        puVar11[6] = *(undefined1 *)(lVar7 + lVar3 + uVar1);
        puVar11[7] = 0xff;
        puVar11 = puVar11 + 8;
        uVar19 = uVar19 - 1;
        pbVar13 = pbVar14;
        pbVar15 = pbVar16;
      } while (uVar19 != 0);
      uVar19 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar19 & 1) != 0) {
      lVar10 = *(long *)(lVar10 + (ulong)*pbVar14 * 8);
      lVar12 = *(long *)(lVar12 + (ulong)*pbVar16 * 8);
      iVar2 = *(int *)(lVar8 + (ulong)*pbVar14 * 4);
      uVar1 = (ulong)*pbVar18;
      *puVar11 = *(undefined1 *)(lVar7 + (long)*(int *)(lVar9 + (ulong)*pbVar16 * 4) + uVar1);
      puVar11[1] = *(undefined1 *)(lVar7 + uVar1 + (long)(int)((ulong)(lVar12 + lVar10) >> 0x10));
      puVar11[2] = *(undefined1 *)(lVar7 + (long)iVar2 + uVar1);
code_r0x0001081d2ddc:
      puVar11[3] = 0xff;
      return;
    }
    break;
  case 8:
    lVar10 = *(long *)(param_1 + 0x260);
    lVar7 = *(long *)(param_1 + 0x1a8);
    lVar9 = *(long *)(lVar10 + 0x20);
    lVar8 = *(long *)(lVar10 + 0x28);
    lVar12 = *(long *)(lVar10 + 0x30);
    lVar10 = *(long *)(lVar10 + 0x38);
    pbVar18 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
    pbVar14 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
    pbVar16 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
    puVar11 = (undefined1 *)*param_4;
    uVar19 = *(uint *)(param_1 + 0x88);
    if (1 < uVar19) {
      uVar19 = uVar19 >> 1;
      pbVar13 = pbVar14;
      pbVar15 = pbVar16;
      pbVar17 = pbVar18;
      do {
        pbVar14 = pbVar13 + 1;
        pbVar16 = pbVar15 + 1;
        lVar4 = (long)*(int *)(lVar9 + (ulong)*pbVar15 * 4);
        lVar5 = *(long *)(lVar10 + (ulong)*pbVar13 * 8);
        lVar3 = *(long *)(lVar12 + (ulong)*pbVar15 * 8);
        lVar6 = (long)*(int *)(lVar8 + (ulong)*pbVar13 * 4);
        uVar1 = (ulong)*pbVar17;
        puVar11[2] = *(undefined1 *)(lVar7 + lVar4 + uVar1);
        iVar2 = (int)((ulong)(lVar3 + lVar5) >> 0x10);
        puVar11[1] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        *puVar11 = *(undefined1 *)(lVar7 + lVar6 + uVar1);
        pbVar18 = pbVar17 + 2;
        uVar1 = (ulong)pbVar17[1];
        puVar11[5] = *(undefined1 *)(lVar7 + lVar4 + uVar1);
        puVar11[4] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        puVar11[3] = *(undefined1 *)(lVar7 + lVar6 + uVar1);
        puVar11 = puVar11 + 6;
        uVar19 = uVar19 - 1;
        pbVar13 = pbVar14;
        pbVar15 = pbVar16;
        pbVar17 = pbVar18;
      } while (uVar19 != 0);
      uVar19 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar19 & 1) != 0) {
      lVar10 = *(long *)(lVar10 + (ulong)*pbVar14 * 8);
      lVar12 = *(long *)(lVar12 + (ulong)*pbVar16 * 8);
      iVar2 = *(int *)(lVar8 + (ulong)*pbVar14 * 4);
      uVar1 = (ulong)*pbVar18;
      puVar11[2] = *(undefined1 *)(lVar7 + (long)*(int *)(lVar9 + (ulong)*pbVar16 * 4) + uVar1);
      puVar11[1] = *(undefined1 *)(lVar7 + uVar1 + (long)(int)((ulong)(lVar12 + lVar10) >> 0x10));
      *puVar11 = *(undefined1 *)(lVar7 + (long)iVar2 + uVar1);
      return;
    }
    break;
  case 9:
  case 0xd:
    lVar10 = *(long *)(param_1 + 0x260);
    lVar7 = *(long *)(param_1 + 0x1a8);
    lVar9 = *(long *)(lVar10 + 0x20);
    lVar8 = *(long *)(lVar10 + 0x28);
    lVar12 = *(long *)(lVar10 + 0x30);
    lVar10 = *(long *)(lVar10 + 0x38);
    pbVar18 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
    pbVar14 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
    pbVar16 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
    puVar11 = (undefined1 *)*param_4;
    uVar19 = *(uint *)(param_1 + 0x88);
    if (1 < uVar19) {
      uVar19 = uVar19 >> 1;
      pbVar13 = pbVar14;
      pbVar15 = pbVar16;
      do {
        pbVar14 = pbVar13 + 1;
        pbVar16 = pbVar15 + 1;
        lVar5 = (long)*(int *)(lVar9 + (ulong)*pbVar15 * 4);
        lVar6 = *(long *)(lVar10 + (ulong)*pbVar13 * 8);
        lVar4 = *(long *)(lVar12 + (ulong)*pbVar15 * 8);
        lVar3 = (long)*(int *)(lVar8 + (ulong)*pbVar13 * 4);
        uVar1 = (ulong)*pbVar18;
        puVar11[2] = *(undefined1 *)(lVar7 + lVar5 + uVar1);
        iVar2 = (int)((ulong)(lVar4 + lVar6) >> 0x10);
        puVar11[1] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        *puVar11 = *(undefined1 *)(lVar7 + lVar3 + uVar1);
        puVar11[3] = 0xff;
        uVar1 = (ulong)pbVar18[1];
        puVar11[6] = *(undefined1 *)(lVar7 + lVar5 + uVar1);
        puVar11[5] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        pbVar18 = pbVar18 + 2;
        puVar11[4] = *(undefined1 *)(lVar7 + lVar3 + uVar1);
        puVar11[7] = 0xff;
        puVar11 = puVar11 + 8;
        uVar19 = uVar19 - 1;
        pbVar13 = pbVar14;
        pbVar15 = pbVar16;
      } while (uVar19 != 0);
      uVar19 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar19 & 1) != 0) {
      lVar10 = *(long *)(lVar10 + (ulong)*pbVar14 * 8);
      lVar12 = *(long *)(lVar12 + (ulong)*pbVar16 * 8);
      iVar2 = *(int *)(lVar8 + (ulong)*pbVar14 * 4);
      uVar1 = (ulong)*pbVar18;
      puVar11[2] = *(undefined1 *)(lVar7 + (long)*(int *)(lVar9 + (ulong)*pbVar16 * 4) + uVar1);
      puVar11[1] = *(undefined1 *)(lVar7 + uVar1 + (long)(int)((ulong)(lVar12 + lVar10) >> 0x10));
      *puVar11 = *(undefined1 *)(lVar7 + (long)iVar2 + uVar1);
      goto code_r0x0001081d2ddc;
    }
    break;
  case 10:
  case 0xe:
    lVar10 = *(long *)(param_1 + 0x260);
    lVar7 = *(long *)(param_1 + 0x1a8);
    lVar9 = *(long *)(lVar10 + 0x20);
    lVar8 = *(long *)(lVar10 + 0x28);
    lVar12 = *(long *)(lVar10 + 0x30);
    lVar10 = *(long *)(lVar10 + 0x38);
    pbVar18 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
    pbVar14 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
    pbVar16 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
    puVar11 = (undefined1 *)*param_4;
    uVar19 = *(uint *)(param_1 + 0x88);
    if (1 < uVar19) {
      uVar19 = uVar19 >> 1;
      pbVar13 = pbVar14;
      pbVar15 = pbVar16;
      do {
        pbVar14 = pbVar13 + 1;
        pbVar16 = pbVar15 + 1;
        lVar5 = (long)*(int *)(lVar9 + (ulong)*pbVar15 * 4);
        lVar6 = *(long *)(lVar10 + (ulong)*pbVar13 * 8);
        lVar4 = *(long *)(lVar12 + (ulong)*pbVar15 * 8);
        lVar3 = (long)*(int *)(lVar8 + (ulong)*pbVar13 * 4);
        uVar1 = (ulong)*pbVar18;
        puVar11[3] = *(undefined1 *)(lVar7 + lVar5 + uVar1);
        iVar2 = (int)((ulong)(lVar4 + lVar6) >> 0x10);
        puVar11[2] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        puVar11[1] = *(undefined1 *)(lVar7 + lVar3 + uVar1);
        *puVar11 = 0xff;
        uVar1 = (ulong)pbVar18[1];
        puVar11[7] = *(undefined1 *)(lVar7 + lVar5 + uVar1);
        puVar11[6] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        pbVar18 = pbVar18 + 2;
        puVar11[5] = *(undefined1 *)(lVar7 + lVar3 + uVar1);
        puVar11[4] = 0xff;
        puVar11 = puVar11 + 8;
        uVar19 = uVar19 - 1;
        pbVar13 = pbVar14;
        pbVar15 = pbVar16;
      } while (uVar19 != 0);
      uVar19 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar19 & 1) != 0) {
      lVar10 = *(long *)(lVar10 + (ulong)*pbVar14 * 8);
      lVar12 = *(long *)(lVar12 + (ulong)*pbVar16 * 8);
      iVar2 = *(int *)(lVar8 + (ulong)*pbVar14 * 4);
      uVar1 = (ulong)*pbVar18;
      puVar11[3] = *(undefined1 *)(lVar7 + (long)*(int *)(lVar9 + (ulong)*pbVar16 * 4) + uVar1);
      puVar11[2] = *(undefined1 *)(lVar7 + uVar1 + (long)(int)((ulong)(lVar12 + lVar10) >> 0x10));
      puVar11[1] = *(undefined1 *)(lVar7 + (long)iVar2 + uVar1);
code_r0x0001081d2f04:
      *puVar11 = 0xff;
      return;
    }
    break;
  case 0xb:
  case 0xf:
    lVar10 = *(long *)(param_1 + 0x260);
    lVar7 = *(long *)(param_1 + 0x1a8);
    lVar9 = *(long *)(lVar10 + 0x20);
    lVar8 = *(long *)(lVar10 + 0x28);
    lVar12 = *(long *)(lVar10 + 0x30);
    lVar10 = *(long *)(lVar10 + 0x38);
    pbVar18 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
    pbVar14 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
    pbVar16 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
    puVar11 = (undefined1 *)*param_4;
    uVar19 = *(uint *)(param_1 + 0x88);
    if (1 < uVar19) {
      uVar19 = uVar19 >> 1;
      pbVar13 = pbVar14;
      pbVar15 = pbVar16;
      do {
        pbVar14 = pbVar13 + 1;
        pbVar16 = pbVar15 + 1;
        lVar5 = (long)*(int *)(lVar9 + (ulong)*pbVar15 * 4);
        lVar6 = *(long *)(lVar10 + (ulong)*pbVar13 * 8);
        lVar4 = *(long *)(lVar12 + (ulong)*pbVar15 * 8);
        lVar3 = (long)*(int *)(lVar8 + (ulong)*pbVar13 * 4);
        uVar1 = (ulong)*pbVar18;
        puVar11[1] = *(undefined1 *)(lVar7 + lVar5 + uVar1);
        iVar2 = (int)((ulong)(lVar4 + lVar6) >> 0x10);
        puVar11[2] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        puVar11[3] = *(undefined1 *)(lVar7 + lVar3 + uVar1);
        *puVar11 = 0xff;
        uVar1 = (ulong)pbVar18[1];
        puVar11[5] = *(undefined1 *)(lVar7 + lVar5 + uVar1);
        puVar11[6] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        pbVar18 = pbVar18 + 2;
        puVar11[7] = *(undefined1 *)(lVar7 + lVar3 + uVar1);
        puVar11[4] = 0xff;
        puVar11 = puVar11 + 8;
        uVar19 = uVar19 - 1;
        pbVar13 = pbVar14;
        pbVar15 = pbVar16;
      } while (uVar19 != 0);
      uVar19 = *(uint *)(param_1 + 0x88);
    }
    if ((uVar19 & 1) != 0) {
      lVar10 = *(long *)(lVar10 + (ulong)*pbVar14 * 8);
      lVar12 = *(long *)(lVar12 + (ulong)*pbVar16 * 8);
      iVar2 = *(int *)(lVar8 + (ulong)*pbVar14 * 4);
      uVar1 = (ulong)*pbVar18;
      puVar11[1] = *(undefined1 *)(lVar7 + (long)*(int *)(lVar9 + (ulong)*pbVar16 * 4) + uVar1);
      puVar11[2] = *(undefined1 *)(lVar7 + uVar1 + (long)(int)((ulong)(lVar12 + lVar10) >> 0x10));
      puVar11[3] = *(undefined1 *)(lVar7 + (long)iVar2 + uVar1);
      goto code_r0x0001081d2f04;
    }
    break;
  default:
    lVar10 = *(long *)(param_1 + 0x260);
    lVar7 = *(long *)(param_1 + 0x1a8);
    lVar9 = *(long *)(lVar10 + 0x20);
    lVar8 = *(long *)(lVar10 + 0x28);
    lVar12 = *(long *)(lVar10 + 0x30);
    lVar10 = *(long *)(lVar10 + 0x38);
    pbVar18 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
    pbVar14 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
    pbVar16 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
    puVar11 = (undefined1 *)*param_4;
    uVar19 = *(uint *)(param_1 + 0x88);
    if (1 < uVar19) {
      uVar19 = uVar19 >> 1;
      pbVar13 = pbVar14;
      pbVar15 = pbVar16;
      pbVar17 = pbVar18;
      do {
        pbVar14 = pbVar13 + 1;
        pbVar16 = pbVar15 + 1;
        lVar4 = (long)*(int *)(lVar9 + (ulong)*pbVar15 * 4);
        lVar5 = *(long *)(lVar10 + (ulong)*pbVar13 * 8);
        lVar3 = *(long *)(lVar12 + (ulong)*pbVar15 * 8);
        lVar6 = (long)*(int *)(lVar8 + (ulong)*pbVar13 * 4);
        uVar1 = (ulong)*pbVar17;
        *puVar11 = *(undefined1 *)(lVar7 + lVar4 + uVar1);
        iVar2 = (int)((ulong)(lVar3 + lVar5) >> 0x10);
        puVar11[1] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        puVar11[2] = *(undefined1 *)(lVar7 + lVar6 + uVar1);
        pbVar18 = pbVar17 + 2;
        uVar1 = (ulong)pbVar17[1];
        puVar11[3] = *(undefined1 *)(lVar7 + lVar4 + uVar1);
        puVar11[4] = *(undefined1 *)(lVar7 + uVar1 + (long)iVar2);
        puVar11[5] = *(undefined1 *)(lVar7 + lVar6 + uVar1);
        puVar11 = puVar11 + 6;
        uVar19 = uVar19 - 1;
        pbVar13 = pbVar14;
        pbVar15 = pbVar16;
        pbVar17 = pbVar18;
      } while (uVar19 != 0);
      goto code_r0x0001081d31a0;
    }
LAB_1081d31a8:
    if ((uVar19 & 1) != 0) {
      lVar10 = *(long *)(lVar10 + (ulong)*pbVar14 * 8);
      lVar12 = *(long *)(lVar12 + (ulong)*pbVar16 * 8);
      iVar2 = *(int *)(lVar8 + (ulong)*pbVar14 * 4);
      uVar1 = (ulong)*pbVar18;
      *puVar11 = *(undefined1 *)(lVar7 + (long)*(int *)(lVar9 + (ulong)*pbVar16 * 4) + uVar1);
      puVar11[1] = *(undefined1 *)(lVar7 + uVar1 + (long)(int)((ulong)(lVar12 + lVar10) >> 0x10));
      puVar11[2] = *(undefined1 *)(lVar7 + (long)iVar2 + uVar1);
      return;
    }
  }
  return;
}



/* Entry: 1081d31fc; end: 1081d3383;  */

void FUN_1081d31fc(long param_1,long *param_2,ulong param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ushort *puVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  ulong uVar26;
  
  lVar19 = *(long *)(param_1 + 0x260);
  lVar18 = *(long *)(param_1 + 0x1a8);
  lVar3 = *(long *)(lVar19 + 0x20);
  lVar5 = *(long *)(lVar19 + 0x28);
  lVar4 = *(long *)(lVar19 + 0x30);
  lVar19 = *(long *)(lVar19 + 0x38);
  uVar21 = *(ulong *)(&UNK_10df09030 + ((ulong)*(uint *)(param_1 + 0xa8) & 3) * 8);
  pbVar14 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
  pbVar22 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
  pbVar24 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
  puVar20 = (ushort *)*param_4;
  uVar6 = *(uint *)(param_1 + 0x88);
  if (1 < uVar6) {
    uVar10 = uVar6 >> 1;
    pbVar15 = pbVar14;
    pbVar23 = pbVar22;
    pbVar25 = pbVar24;
    do {
      pbVar22 = pbVar23 + 1;
      pbVar24 = pbVar25 + 1;
      lVar13 = (long)*(int *)(lVar3 + (ulong)*pbVar25 * 4);
      lVar17 = (long)*(int *)(lVar5 + (ulong)*pbVar23 * 4);
      uVar11 = (ulong)*pbVar15;
      lVar1 = lVar18 + (uVar21 & 0xff);
      uVar26 = uVar21 & 0xff;
      iVar12 = (int)((ulong)(*(long *)(lVar4 + (ulong)*pbVar25 * 8) +
                            *(long *)(lVar19 + (ulong)*pbVar23 * 8)) >> 0x10);
      pbVar14 = pbVar15 + 2;
      uVar16 = (ulong)pbVar15[1];
      lVar2 = lVar18 + (uVar21 >> 8 & 0xff);
      bVar7 = *(byte *)(lVar2 + lVar13 + uVar16);
      bVar8 = *(byte *)(lVar18 + ((uVar21 >> 8 & 0xff) >> 1) + uVar16 + (long)iVar12);
      bVar9 = *(byte *)(lVar2 + lVar17 + uVar16);
      uVar21 = (uVar21 >> 8 & 0xffff00 | (uVar21 & 0xff) << 0x18) >> 8 |
               (uVar21 >> 8 & 0xff) << 0x18;
      *puVar20 = (*(byte *)(lVar1 + lVar13 + uVar11) & 0xf8) << 8 |
                 (ushort)(*(byte *)(lVar18 + (uVar26 >> 1) + uVar11 + (long)iVar12) >> 2) << 5 |
                 (ushort)(*(byte *)(lVar1 + lVar17 + uVar11) >> 3);
      puVar20[1] = (bVar7 & 0xf8) << 8 | (ushort)(bVar8 >> 2) << 5 | (ushort)(bVar9 >> 3);
      puVar20 = puVar20 + 2;
      uVar10 = uVar10 - 1;
      pbVar15 = pbVar14;
      pbVar23 = pbVar22;
      pbVar25 = pbVar24;
    } while (uVar10 != 0);
  }
  if ((uVar6 & 1) != 0) {
    uVar11 = (ulong)*pbVar14;
    lVar1 = lVar18 + (uVar21 & 0xff);
    *puVar20 = (*(byte *)(lVar1 + (long)*(int *)(lVar3 + (ulong)*pbVar24 * 4) + uVar11) & 0xf8) << 8
               | (ushort)(*(byte *)(lVar18 + ((uVar21 & 0xff) >> 1) +
                                   uVar11 + (long)(int)((ulong)(*(long *)(lVar4 + (ulong)*pbVar24 *
                                                                                  8) +
                                                               *(long *)(lVar19 + (ulong)*pbVar22 *
                                                                                  8)) >> 0x10)) >> 2
                         ) << 5 |
               (ushort)(*(byte *)(lVar1 + (long)*(int *)(lVar5 + (ulong)*pbVar22 * 4) + uVar11) >> 3
                       );
  }
  return;
}



/* Entry: 1081d3384; end: 1081d34bf;  */

void FUN_1081d3384(long param_1,long *param_2,ulong param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ushort *puVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  
  lVar13 = *(long *)(param_1 + 0x260);
  lVar12 = *(long *)(param_1 + 0x1a8);
  lVar1 = *(long *)(lVar13 + 0x20);
  lVar3 = *(long *)(lVar13 + 0x28);
  lVar2 = *(long *)(lVar13 + 0x30);
  lVar13 = *(long *)(lVar13 + 0x38);
  pbVar20 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
  pbVar16 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
  pbVar18 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
  puVar14 = (ushort *)*param_4;
  uVar4 = *(uint *)(param_1 + 0x88);
  if (1 < uVar4) {
    uVar8 = uVar4 >> 1;
    pbVar17 = pbVar16;
    pbVar19 = pbVar18;
    pbVar21 = pbVar20;
    do {
      pbVar16 = pbVar17 + 1;
      pbVar18 = pbVar19 + 1;
      lVar10 = (long)*(int *)(lVar1 + (ulong)*pbVar19 * 4);
      lVar11 = (long)*(int *)(lVar3 + (ulong)*pbVar17 * 4);
      uVar15 = (ulong)*pbVar21;
      iVar9 = (int)((ulong)(*(long *)(lVar2 + (ulong)*pbVar19 * 8) +
                           *(long *)(lVar13 + (ulong)*pbVar17 * 8)) >> 0x10);
      pbVar20 = pbVar21 + 2;
      uVar22 = (ulong)pbVar21[1];
      bVar5 = *(byte *)(lVar12 + lVar10 + uVar22);
      bVar6 = *(byte *)(lVar12 + uVar22 + (long)iVar9);
      bVar7 = *(byte *)(lVar12 + lVar11 + uVar22);
      *puVar14 = (*(byte *)(lVar12 + lVar10 + uVar15) & 0xf8) << 8 |
                 (ushort)(*(byte *)(lVar12 + uVar15 + (long)iVar9) >> 2) << 5 |
                 (ushort)(*(byte *)(lVar12 + lVar11 + uVar15) >> 3);
      puVar14[1] = (bVar5 & 0xf8) << 8 | (ushort)(bVar6 >> 2) << 5 | (ushort)(bVar7 >> 3);
      puVar14 = puVar14 + 2;
      uVar8 = uVar8 - 1;
      pbVar17 = pbVar16;
      pbVar19 = pbVar18;
      pbVar21 = pbVar20;
    } while (uVar8 != 0);
  }
  if ((uVar4 & 1) != 0) {
    uVar15 = (ulong)*pbVar20;
    *puVar14 = (*(byte *)(lVar12 + (long)*(int *)(lVar1 + (ulong)*pbVar18 * 4) + uVar15) & 0xf8) <<
               8 | (ushort)(*(byte *)(lVar12 + uVar15 + (long)(int)((ulong)(*(long *)(lVar2 + (ulong
                                                  )*pbVar18 * 8) +
                                                  *(long *)(lVar13 + (ulong)*pbVar16 * 8)) >> 0x10))
                           >> 2) << 5 |
               (ushort)(*(byte *)(lVar12 + (long)*(int *)(lVar3 + (ulong)*pbVar16 * 4) + uVar15) >>
                       3);
    return;
  }
  return;
}



/* Entry: 1081d34c0; end: 1081d356b;  */

void FUN_1081d34c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  (**(code **)param_1[1])(param_1,1,0x68);
  param_1[0x4a] = puVar1;
  *puVar1 = FUN_1081d356c;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1 = param_1;
  (**(code **)param_1[1])(param_1,1,(long)*(int *)(param_1 + 7) << 9);
  param_1[0x18] = puVar1;
  if (0 < *(int *)(param_1 + 7)) {
    iVar2 = 0;
    do {
      puVar1[0x1d] = 0xffffffffffffffff;
      puVar1[0x1c] = 0xffffffffffffffff;
      puVar1[0x1f] = 0xffffffffffffffff;
      puVar1[0x1e] = 0xffffffffffffffff;
      puVar1[0x19] = 0xffffffffffffffff;
      puVar1[0x18] = 0xffffffffffffffff;
      puVar1[0x1b] = 0xffffffffffffffff;
      puVar1[0x1a] = 0xffffffffffffffff;
      puVar1[0x15] = 0xffffffffffffffff;
      puVar1[0x14] = 0xffffffffffffffff;
      puVar1[0x17] = 0xffffffffffffffff;
      puVar1[0x16] = 0xffffffffffffffff;
      puVar1[0x11] = 0xffffffffffffffff;
      puVar1[0x10] = 0xffffffffffffffff;
      puVar1[0x13] = 0xffffffffffffffff;
      puVar1[0x12] = 0xffffffffffffffff;
      puVar1[0xd] = 0xffffffffffffffff;
      puVar1[0xc] = 0xffffffffffffffff;
      puVar1[0xf] = 0xffffffffffffffff;
      puVar1[0xe] = 0xffffffffffffffff;
      puVar1[9] = 0xffffffffffffffff;
      puVar1[8] = 0xffffffffffffffff;
      puVar1[0xb] = 0xffffffffffffffff;
      puVar1[10] = 0xffffffffffffffff;
      puVar1[5] = 0xffffffffffffffff;
      puVar1[4] = 0xffffffffffffffff;
      puVar1[7] = 0xffffffffffffffff;
      puVar1[6] = 0xffffffffffffffff;
      puVar1[1] = 0xffffffffffffffff;
      *puVar1 = 0xffffffffffffffff;
      puVar1[3] = 0xffffffffffffffff;
      puVar1[2] = 0xffffffffffffffff;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 7));
  }
  return;
}



/* Entry: 1081d356c; end: 1081d3d53;  */

void FUN_1081d356c(long *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  
  iVar6 = *(int *)((long)param_1 + 0x20c);
  iVar7 = (int)param_1[0x42];
  if (iVar6 == 0) {
    bVar9 = iVar7 == 0;
  }
  else {
    bVar9 = (iVar6 <= iVar7 && iVar7 < 0x40) && (int)param_1[0x36] == 1;
  }
  lVar14 = param_1[0x4a];
  if (((0xd < (int)param_1[0x43]) ||
      ((int)param_1[0x43] != *(int *)((long)param_1 + 0x214) + -1 &&
       *(int *)((long)param_1 + 0x214) != 0)) || (!bVar9)) {
    lVar10 = *param_1;
    *(undefined4 *)(lVar10 + 0x28) = 0x10;
    *(int *)(lVar10 + 0x2c) = iVar6;
    *(int *)(*param_1 + 0x30) = (int)param_1[0x42];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x214);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x43];
    (**(code **)*param_1)(param_1);
  }
  if ((int)param_1[0x36] < 1) {
    pcVar4 = (code *)0x1081d389c;
    if (iVar6 != 0) {
      pcVar4 = (code *)0x1081d3b1c;
    }
    pcVar5 = FUN_1081d3d54;
    if (iVar6 != 0) {
      pcVar5 = FUN_1081d3e58;
    }
    if (*(int *)((long)param_1 + 0x214) != 0) {
      pcVar4 = pcVar5;
    }
    *(code **)(lVar14 + 8) = pcVar4;
  }
  else {
    lVar10 = 0;
    do {
      iVar7 = *(int *)(param_1[lVar10 + 0x37] + 4);
      lVar15 = param_1[0x18];
      piVar1 = (int *)(lVar15 + (long)iVar7 * 0x100);
      lVar13 = param_1[7];
      if ((iVar6 != 0) && (*piVar1 < 0)) {
        lVar11 = *param_1;
        *(undefined4 *)(lVar11 + 0x28) = 0x73;
        *(int *)(lVar11 + 0x2c) = iVar7;
        *(undefined4 *)(*param_1 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
      }
      iVar12 = *(int *)((long)param_1 + 0x20c);
      if (0 < iVar12) {
        iVar12 = 1;
      }
      lVar11 = (long)iVar12;
      do {
        if (*(int *)((long)param_1 + 0xac) < 2) {
          iVar12 = 0;
        }
        else {
          iVar12 = piVar1[lVar11];
        }
        *(int *)(lVar15 + (long)((int)lVar13 + iVar7) * 0x100 + lVar11 * 4) = iVar12;
        uVar8 = *(uint *)(param_1 + 0x42);
        uVar3 = uVar8;
        if ((int)uVar8 < 10) {
          uVar3 = 9;
        }
        bVar9 = lVar11 < (long)(ulong)uVar3;
        lVar11 = lVar11 + 1;
      } while (bVar9);
      iVar12 = *(int *)((long)param_1 + 0x20c);
      if (iVar12 <= (int)uVar8) {
        lVar13 = (long)iVar12 + -1;
        puVar16 = (uint *)(lVar15 + (long)iVar7 * 0x100 + (long)iVar12 * 4);
        do {
          if (*(uint *)((long)param_1 + 0x214) != (*puVar16 & ((int)*puVar16 >> 0x1f ^ 0xffffffffU))
             ) {
            lVar15 = *param_1;
            *(undefined4 *)(lVar15 + 0x28) = 0x73;
            *(int *)(lVar15 + 0x2c) = iVar7;
            *(int *)(*param_1 + 0x30) = iVar12;
            (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          }
          *puVar16 = *(uint *)(param_1 + 0x43);
          lVar13 = lVar13 + 1;
          iVar12 = iVar12 + 1;
          puVar16 = puVar16 + 1;
        } while (lVar13 < (int)param_1[0x42]);
      }
      lVar10 = lVar10 + 1;
      lVar13 = param_1[0x36];
    } while (lVar10 < (int)lVar13);
    pcVar4 = FUN_1081d3d54;
    pcVar5 = (code *)0x1081d389c;
    if (iVar6 != 0) {
      pcVar4 = FUN_1081d3e58;
      pcVar5 = (code *)0x1081d3b1c;
    }
    if (*(int *)((long)param_1 + 0x214) != 0) {
      pcVar5 = pcVar4;
    }
    *(code **)(lVar14 + 8) = pcVar5;
    if (0 < (int)lVar13) {
      lVar10 = 0;
      do {
        if (iVar6 == 0) {
          if (*(int *)((long)param_1 + 0x214) == 0) {
            lVar13 = (long)*(int *)(param_1[lVar10 + 0x37] + 0x14);
            func_0x0001081cc5e0(param_1,1,lVar13,lVar14 + 0x40 + lVar13 * 8);
          }
        }
        else {
          lVar13 = (long)*(int *)(param_1[lVar10 + 0x37] + 0x18);
          puVar2 = (undefined8 *)(lVar14 + 0x40 + lVar13 * 8);
          func_0x0001081cc5e0(param_1,0,lVar13,puVar2);
          *(undefined8 *)(lVar14 + 0x60) = *puVar2;
        }
        *(undefined4 *)(lVar14 + 0x2c + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_1[0x36]);
    }
  }
  *(undefined4 *)(lVar14 + 0x20) = 0;
  *(undefined8 *)(lVar14 + 0x18) = 0;
  *(undefined4 *)(lVar14 + 0x10) = 0;
  *(undefined4 *)(lVar14 + 0x28) = 0;
  *(int *)(lVar14 + 0x3c) = (int)param_1[0x2e];
  return;
}



/* Entry: 1081d3d54; end: 1081d3e57;  */

void FUN_1081d3d54(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ushort *puVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  int iStack_50;
  long lStack_48;
  
  lVar8 = *(long *)(param_1 + 0x250);
  uVar1 = *(uint *)(param_1 + 0x218);
  if (((*(int *)(param_1 + 0x170) == 0) || (*(int *)(lVar8 + 0x3c) != 0)) ||
     (lVar9 = param_1, FUN_1081d4298(), (int)lVar9 != 0)) {
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    uStack_68 = *puVar7;
    uStack_60 = puVar7[1];
    uVar3 = *(ulong *)(lVar8 + 0x18);
    uVar5 = *(uint *)(lVar8 + 0x20);
    uVar6 = (ulong)uVar5;
    if (0 < *(int *)(param_1 + 0x1e0)) {
      lVar9 = 0;
      lStack_48 = param_1;
      do {
        puVar10 = *(ushort **)(param_2 + lVar9 * 8);
        iVar4 = (int)uVar6;
        if ((int)uVar6 < 1) {
          iVar2 = (int)&uStack_68;
          FUN_1081cc8fc();
          uVar3 = uStack_58;
          iVar4 = iStack_50;
          if (iVar2 == 0) {
            return;
          }
        }
        uVar5 = iVar4 - 1;
        uVar6 = (ulong)uVar5;
        if ((uVar3 >> (uVar6 & 0x3f) & 1) != 0) {
          *puVar10 = *puVar10 | (ushort)(1 << (ulong)(uVar1 & 0x1f));
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x1e0));
      puVar7 = *(undefined8 **)(param_1 + 0x28);
    }
    *puVar7 = uStack_68;
    puVar7[1] = uStack_60;
    *(ulong *)(lVar8 + 0x18) = uVar3;
    *(uint *)(lVar8 + 0x20) = uVar5;
    if (*(int *)(param_1 + 0x170) != 0) {
      *(int *)(lVar8 + 0x3c) = *(int *)(lVar8 + 0x3c) + -1;
    }
  }
  return;
}



/* Entry: 1081d3e58; end: 1081d4297;  */

void FUN_1081d3e58(long *param_1,long *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  uint uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  uint uStack_180;
  long *plStack_178;
  int aiStack_170 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = param_1[0x4a];
  iVar16 = (int)param_1[0x42];
  uVar19 = *(uint *)(param_1 + 0x43);
  if ((((int)param_1[0x2e] == 0) || (*(int *)(lVar17 + 0x3c) != 0)) ||
     (plVar4 = param_1, FUN_1081d4298(), (int)plVar4 != 0)) {
    if (*(int *)(lVar17 + 0x10) == 0) {
      uVar2 = 1 << (ulong)(uVar19 & 0x1f);
      uVar3 = -1 << (ulong)(uVar19 & 0x1f);
      uStack_198 = *(undefined8 *)param_1[5];
      uStack_190 = ((undefined8 *)param_1[5])[1];
      uVar10 = *(ulong *)(lVar17 + 0x18);
      uVar19 = *(uint *)(lVar17 + 0x20);
      uVar6 = (ulong)uVar19;
      iVar22 = *(int *)(lVar17 + 0x28);
      lVar21 = *param_2;
      iVar11 = *(int *)((long)param_1 + 0x20c);
      plStack_178 = param_1;
      if ((iVar22 == 0) && (iVar11 <= iVar16)) {
        uStack_1a0 = 0;
        lVar7 = *(long *)(lVar17 + 0x60);
        do {
          if ((int)uVar6 < 8) {
            puVar9 = &uStack_198;
            FUN_1081cc8fc(puVar9,uVar10,uVar6,0);
            if ((int)puVar9 == 0) goto LAB_1081d4258;
            uVar6 = (ulong)uStack_180;
            uVar10 = uStack_188;
            if (7 < (int)uStack_180) goto LAB_1081d3f58;
            iVar22 = 1;
LAB_1081d3f84:
            puVar9 = &uStack_198;
            FUN_1081cca3c(puVar9,uVar10,uVar6,lVar7,iVar22);
            uVar10 = uStack_188;
            uVar19 = uStack_180;
            if ((int)puVar9 < 0) goto LAB_1081d4258;
          }
          else {
LAB_1081d3f58:
            uVar19 = *(uint *)(lVar7 + 0x128 +
                              (uVar10 >> ((ulong)((int)uVar6 - 8) & 0x3f) & 0xff) * 4);
            iVar22 = (int)uVar19 >> 8;
            if (8 < iVar22) goto LAB_1081d3f84;
            puVar9 = (undefined8 *)(ulong)(uVar19 & 0xff);
            uVar19 = (int)uVar6 - iVar22;
          }
          uVar6 = (ulong)uVar19;
          uVar18 = (ulong)puVar9 >> 4 & 0xfffffff;
          if (((ulong)puVar9 & 0xf) == 0) {
            uVar14 = (uint)uVar18;
            if (uVar14 != 0xf) {
              iVar22 = 1 << (ulong)(uVar14 & 0x1f);
              if ((uint)puVar9 < 0x10) goto LAB_1081d410c;
              if ((int)uVar19 < (int)uVar14) {
                puVar9 = &uStack_198;
                FUN_1081cc8fc(puVar9,uVar10,uVar6,uVar18);
                uVar10 = uStack_188;
                uVar19 = uStack_180;
                if ((int)puVar9 == 0) goto LAB_1081d4258;
              }
              uVar6 = (ulong)(uVar19 - uVar14);
              iVar22 = (iVar22 - 1U & (uint)(uVar10 >> (uVar6 & 0x3f))) + iVar22;
              goto LAB_1081d410c;
            }
            uVar14 = 0;
          }
          else {
            if (((uint)puVar9 & 0xf) != 1) {
              lVar8 = *param_1;
              *(undefined4 *)(lVar8 + 0x28) = 0x76;
              (**(code **)(lVar8 + 8))(param_1,0xffffffff);
            }
            if ((int)uVar19 < 1) {
              puVar9 = &uStack_198;
              FUN_1081cc8fc(puVar9,uVar10,uVar6,1);
              uVar10 = uStack_188;
              uVar19 = uStack_180;
              if ((int)puVar9 == 0) goto LAB_1081d4258;
            }
            uVar6 = (ulong)(uVar19 - 1);
            uVar14 = uVar3;
            if ((uVar10 >> (uVar6 & 0x3f) & 1) != 0) {
              uVar14 = uVar2;
            }
          }
          iVar22 = iVar11;
          if (iVar11 <= iVar16) {
            iVar22 = iVar16;
          }
          lVar8 = ((long)iVar22 - (long)iVar11) + 1;
          piVar13 = (int *)(&UNK_10df094f8 + (long)iVar11 * 4);
          do {
            lVar20 = (long)*piVar13;
            if (*(short *)(lVar21 + lVar20 * 2) == 0) {
              iVar15 = (int)uVar18;
              uVar18 = (ulong)(iVar15 - 1);
              iVar12 = iVar11;
              if (iVar15 < 1) break;
            }
            else {
              uVar19 = (uint)uVar6;
              if ((int)(uint)uVar6 < 1) {
                puVar9 = &uStack_198;
                FUN_1081cc8fc(puVar9,uVar10,uVar6,1);
                uVar10 = uStack_188;
                uVar19 = uStack_180;
                if ((int)puVar9 == 0) goto LAB_1081d4258;
              }
              uVar6 = (ulong)(uVar19 - 1);
              if (((uVar10 >> (uVar6 & 0x3f) & 1) != 0) &&
                 (sVar1 = *(short *)(lVar21 + lVar20 * 2), (uVar2 & (int)sVar1) == 0)) {
                uVar19 = uVar3;
                if (-1 < sVar1) {
                  uVar19 = uVar2;
                }
                *(short *)(lVar21 + lVar20 * 2) = sVar1 + (short)uVar19;
              }
            }
            iVar11 = iVar11 + 1;
            lVar8 = lVar8 + -1;
            piVar13 = piVar13 + 1;
            iVar12 = iVar22 + 1;
          } while (lVar8 != 0);
          uVar19 = (uint)uVar6;
          if (uVar14 != 0) {
            iVar11 = *(int *)(&UNK_10df094f8 + (long)iVar12 * 4);
            *(short *)(lVar21 + (long)iVar11 * 2) = (short)uVar14;
            aiStack_170[(int)uStack_1a0] = iVar11;
            uStack_1a0 = uStack_1a0 + 1;
          }
          iVar11 = iVar12 + 1;
        } while (iVar12 < iVar16);
        iVar12 = 0;
      }
      else {
        uStack_1a0 = 0;
        iVar12 = 0;
        if (iVar22 != 0) {
LAB_1081d410c:
          uVar19 = (uint)uVar6;
          if (iVar11 <= iVar16) {
            iVar16 = (iVar16 - iVar11) + 1;
            piVar13 = (int *)(&UNK_10df094f8 + (long)iVar11 * 4);
            do {
              lVar7 = (long)*piVar13;
              if (*(short *)(lVar21 + lVar7 * 2) != 0) {
                uVar19 = (uint)uVar6;
                if ((int)(uint)uVar6 < 1) {
                  puVar9 = &uStack_198;
                  FUN_1081cc8fc(puVar9,uVar10,uVar6,1);
                  uVar10 = uStack_188;
                  uVar19 = uStack_180;
                  if ((int)puVar9 == 0) goto LAB_1081d4258;
                }
                uVar6 = (ulong)(uVar19 - 1);
                if (((uVar10 >> (uVar6 & 0x3f) & 1) != 0) &&
                   (sVar1 = *(short *)(lVar21 + lVar7 * 2), (uVar2 & (int)sVar1) == 0)) {
                  uVar19 = uVar3;
                  if (-1 < sVar1) {
                    uVar19 = uVar2;
                  }
                  *(short *)(lVar21 + lVar7 * 2) = sVar1 + (short)uVar19;
                }
              }
              uVar19 = (uint)uVar6;
              iVar16 = iVar16 + -1;
              piVar13 = piVar13 + 1;
            } while (iVar16 != 0);
          }
          iVar12 = iVar22 + -1;
        }
      }
      puVar9 = (undefined8 *)param_1[5];
      *puVar9 = uStack_198;
      puVar9[1] = uStack_190;
      *(ulong *)(lVar17 + 0x18) = uVar10;
      *(uint *)(lVar17 + 0x20) = uVar19;
      *(int *)(lVar17 + 0x28) = iVar12;
    }
    if ((int)param_1[0x2e] != 0) {
      *(int *)(lVar17 + 0x3c) = *(int *)(lVar17 + 0x3c) + -1;
    }
    plVar4 = (long *)0x1;
  }
LAB_1081d41c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar17 = plVar4[0x4a];
    iVar11 = *(int *)(lVar17 + 0x20);
    iVar16 = iVar11 + 7;
    if (-1 < iVar11) {
      iVar16 = iVar11;
    }
    lVar21 = plVar4[0x49];
    *(int *)(lVar21 + 0x24) = *(int *)(lVar21 + 0x24) + (iVar16 >> 3);
    *(undefined4 *)(lVar17 + 0x20) = 0;
    plVar5 = plVar4;
    (**(code **)(lVar21 + 0x10))();
    if ((int)plVar5 != 0) {
      if (0 < (int)plVar4[0x36]) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar17 + 0x2c + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)plVar4[0x36]);
      }
      *(undefined4 *)(lVar17 + 0x28) = 0;
      *(int *)(lVar17 + 0x3c) = (int)plVar4[0x2e];
      if (*(int *)((long)plVar4 + 0x21c) == 0) {
        *(undefined4 *)(lVar17 + 0x10) = 0;
      }
    }
    return;
  }
  return;
LAB_1081d4258:
  if (0 < (int)uStack_1a0) {
    uVar10 = (ulong)uStack_1a0 + 1;
    piVar13 = aiStack_170 + uStack_1a0;
    do {
      piVar13 = piVar13 + -1;
      *(undefined2 *)(lVar21 + (long)*piVar13 * 2) = 0;
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
  }
  plVar4 = (long *)0x0;
  goto LAB_1081d41c8;
}



/* Entry: 1081d4298; end: 1081d432b;  */

void FUN_1081d4298(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x250);
  iVar2 = *(int *)(lVar5 + 0x20);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  lVar4 = *(long *)(param_1 + 0x248);
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + (iVar1 >> 3);
  *(undefined4 *)(lVar5 + 0x20) = 0;
  lVar3 = param_1;
  (**(code **)(lVar4 + 0x10))();
  if ((int)lVar3 != 0) {
    if (0 < *(int *)(param_1 + 0x1b0)) {
      lVar3 = 0;
      do {
        *(undefined4 *)(lVar5 + 0x2c + lVar3 * 4) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x1b0));
    }
    *(undefined4 *)(lVar5 + 0x28) = 0;
    *(undefined4 *)(lVar5 + 0x3c) = *(undefined4 *)(param_1 + 0x170);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined4 *)(lVar5 + 0x10) = 0;
    }
  }
  return;
}



/* Entry: 1081d432c; end: 1081d43f7;  */

void FUN_1081d432c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = param_1;
  (**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x47] = puVar3;
  *puVar3 = FUN_1081d43f8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  if (*(int *)((long)param_1 + 0x6c) != 0) {
    uVar1 = *(uint *)((long)param_1 + 0x19c);
    uVar4 = (ulong)uVar1;
    *(uint *)(puVar3 + 4) = uVar1;
    if (param_2 == 0) {
      (**(code **)(param_1[1] + 0x10))
                (param_1,1,*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),uVar4);
      puVar3[3] = param_1;
    }
    else {
      iVar2 = 0;
      if (uVar4 != 0) {
        iVar2 = (int)((long)(uVar4 + *(uint *)((long)param_1 + 0x8c) + -1) / (long)uVar4);
      }
      (**(code **)(param_1[1] + 0x20))
                (param_1,1,0,*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),iVar2 * uVar1);
      puVar3[2] = param_1;
    }
  }
  return;
}



/* Entry: 1081d43f8; end: 1081d44df;  */

void FUN_1081d43f8(long *param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = param_1[0x47];
  if (param_2 == 3) {
    if (*(long *)(lVar3 + 0x10) == 0) {
      puVar1 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar1 + 5) = 4;
      (*(code *)*puVar1)();
    }
    pcVar2 = FUN_1081d4574;
  }
  else if (param_2 == 2) {
    if (*(long *)(lVar3 + 0x10) == 0) {
      puVar1 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar1 + 5) = 4;
      (*(code *)*puVar1)();
    }
    pcVar2 = FUN_1081d4670;
  }
  else {
    if (param_2 != 0) {
      puVar1 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar1 + 5) = 4;
      (*(code *)*puVar1)();
      goto LAB_1081d44d0;
    }
    if (*(int *)((long)param_1 + 0x6c) != 0) {
      *(code **)(lVar3 + 8) = FUN_1081d44e0;
      if (*(long *)(lVar3 + 0x18) == 0) {
        (**(code **)(param_1[1] + 0x38))
                  (param_1,*(undefined8 *)(lVar3 + 0x10),0,*(undefined4 *)(lVar3 + 0x20),1);
        *(long **)(lVar3 + 0x18) = param_1;
      }
      goto LAB_1081d44d0;
    }
    pcVar2 = *(code **)(param_1[0x4c] + 8);
  }
  *(code **)(lVar3 + 8) = pcVar2;
LAB_1081d44d0:
  *(undefined4 *)(lVar3 + 0x24) = 0;
  *(undefined4 *)(lVar3 + 0x28) = 0;
  return;
}



/* Entry: 1081d44e0; end: 1081d4573;  */

void FUN_1081d44e0(long param_1)

{
  long in_x4;
  uint *in_x5;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x238);
  (**(code **)(*(long *)(param_1 + 0x260) + 8))();
  (**(code **)(*(long *)(param_1 + 0x270) + 8))
            (param_1,*(undefined8 *)(lVar1 + 0x18),in_x4 + (ulong)*in_x5 * 8,0);
  *in_x5 = *in_x5;
  return;
}



/* Entry: 1081d4574; end: 1081d466f;  */

void FUN_1081d4574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0x238);
  uVar5 = *(uint *)(lVar4 + 0x28);
  if (uVar5 == 0) {
    lVar2 = param_1;
    (**(code **)(*(long *)(param_1 + 8) + 0x38))
              (param_1,*(undefined8 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x24),
               *(undefined4 *)(lVar4 + 0x20),1);
    *(long *)(lVar4 + 0x18) = lVar2;
    uVar5 = *(uint *)(lVar4 + 0x28);
  }
  else {
    lVar2 = *(long *)(lVar4 + 0x18);
  }
  (**(code **)(*(long *)(param_1 + 0x260) + 8))
            (param_1,param_2,param_3,param_4,lVar2,(uint *)(lVar4 + 0x28),
             *(undefined4 *)(lVar4 + 0x20));
  uVar3 = *(uint *)(lVar4 + 0x28);
  iVar1 = uVar3 - uVar5;
  if (uVar5 <= uVar3 && iVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x270) + 8))
              (param_1,*(long *)(lVar4 + 0x18) + (ulong)uVar5 * 8,0,iVar1);
    *param_6 = *param_6 + iVar1;
    uVar3 = *(uint *)(lVar4 + 0x28);
  }
  if (*(uint *)(lVar4 + 0x20) <= uVar3) {
    *(uint *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + *(uint *)(lVar4 + 0x20);
    *(undefined4 *)(lVar4 + 0x28) = 0;
  }
  return;
}



/* Entry: 1081d4670; end: 1081d4753;  */

void FUN_1081d4670(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_x4;
  uint *in_x5;
  int in_w6;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x238);
  uVar1 = *(uint *)(lVar5 + 0x28);
  if (uVar1 == 0) {
    lVar4 = param_1;
    (**(code **)(*(long *)(param_1 + 8) + 0x38))
              (param_1,*(undefined8 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x24),
               *(undefined4 *)(lVar5 + 0x20),0);
    *(long *)(lVar5 + 0x18) = lVar4;
    uVar1 = *(uint *)(lVar5 + 0x28);
  }
  else {
    lVar4 = *(long *)(lVar5 + 0x18);
  }
  uVar2 = *(int *)(lVar5 + 0x20) - uVar1;
  uVar3 = in_w6 - *in_x5;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  uVar3 = *(int *)(param_1 + 0x8c) - *(int *)(lVar5 + 0x24);
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  (**(code **)(*(long *)(param_1 + 0x270) + 8))
            (param_1,lVar4 + (ulong)uVar1 * 8,in_x4 + (ulong)*in_x5 * 8,uVar2);
  *in_x5 = *in_x5 + uVar2;
  uVar2 = *(int *)(lVar5 + 0x28) + uVar2;
  *(uint *)(lVar5 + 0x28) = uVar2;
  if (*(uint *)(lVar5 + 0x20) <= uVar2) {
    *(uint *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + *(uint *)(lVar5 + 0x20);
    *(undefined4 *)(lVar5 + 0x28) = 0;
  }
  return;
}



/* Entry: 1081d4754; end: 1081d4a7b;  */

void FUN_1081d4754(code *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  int *piVar17;
  
  if (*(int *)(*(long *)(param_1 + 0x220) + 0x6c) == 0) {
    pcVar15 = param_1;
    (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x100);
    *(code **)(param_1 + 0x260) = pcVar15;
    *(code **)pcVar15 = FUN_1081d4a7c;
    *(code **)(pcVar15 + 8) = FUN_1081d4a90;
    *(undefined4 *)(pcVar15 + 0x10) = 0;
  }
  else {
    pcVar15 = *(code **)(param_1 + 0x260);
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    puVar10 = *(undefined8 **)param_1;
    *(undefined4 *)(puVar10 + 5) = 0x19;
    (*(code *)*puVar10)(param_1);
  }
  if (*(int *)(param_1 + 100) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 1 < *(int *)(param_1 + 0x1a0);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar16 = 0;
    piVar17 = (int *)(*(long *)(param_1 + 0x130) + 0x24);
    do {
      iVar3 = *piVar17;
      iVar4 = *(int *)(param_1 + 0x1a0);
      iVar2 = piVar17[-7];
      iVar7 = 0;
      if (iVar4 != 0) {
        iVar7 = (piVar17[-6] * iVar3) / iVar4;
      }
      iVar5 = *(int *)(param_1 + 0x198);
      iVar6 = *(int *)(param_1 + 0x19c);
      *(int *)(pcVar15 + lVar16 * 4 + 0xc0) = iVar7;
      pcVar9 = FUN_1081d4bd4;
      pcVar12 = pcVar15 + 0x68;
      if (piVar17[3] == 0) {
LAB_1081d4a24:
        *(code **)(pcVar12 + lVar16 * 8) = pcVar9;
      }
      else {
        iVar8 = 0;
        if (iVar4 != 0) {
          iVar8 = (iVar3 * iVar2) / iVar4;
        }
        if ((iVar8 == iVar5) && (pcVar9 = (code *)0x1081d4bdc, iVar7 == iVar6)) goto LAB_1081d4a24;
        if (iVar8 << 1 == iVar5 && iVar7 == iVar6) {
          if ((bVar1) && (2 < (uint)piVar17[1])) {
            FUN_1081afe00();
            pcVar9 = pcVar15 + lVar16 * 8;
            if (((byte)uRam00000001132547e0 >> 4 & 1) == 0) {
              pcVar12 = (code *)0x1081d4be4;
            }
            else {
              pcVar12 = (code *)0x1081b00a0;
            }
          }
          else {
            FUN_1081afe00();
            pcVar9 = pcVar15 + lVar16 * 8;
            if (((byte)uRam00000001132547e0 >> 4 & 1) == 0) {
              pcVar12 = (code *)0x1081d4ca4;
            }
            else {
              pcVar12 = (code *)0x1081b0038;
            }
          }
LAB_1081d49e0:
          *(code **)(pcVar9 + 0x68) = pcVar12;
        }
        else {
          if ((bool)((iVar8 == iVar5 && iVar7 << 1 == iVar6) & bVar1)) {
            FUN_1081afe00();
            uVar11 = 0x1081b00ac;
            uVar13 = 0x1081d4cf8;
          }
          else {
            if (iVar8 << 1 != iVar5 || iVar7 << 1 != iVar6) {
              iVar2 = 0;
              if (iVar8 != 0) {
                iVar2 = iVar5 / iVar8;
              }
              if (iVar5 == iVar2 * iVar8) {
                iVar3 = 0;
                if (iVar7 != 0) {
                  iVar3 = iVar6 / iVar7;
                }
                if (iVar6 == iVar3 * iVar7) {
                  *(code **)(pcVar15 + (lVar16 + 0xd) * 8) = FUN_1081d4f74;
                  pcVar15[lVar16 + 0xe8] = SUB41(iVar2,0);
                  pcVar15[lVar16 + 0xf2] = SUB41(iVar3,0);
                  goto LAB_1081d49e4;
                }
              }
              puVar10 = *(undefined8 **)param_1;
              *(undefined4 *)(puVar10 + 5) = 0x26;
              (*(code *)*puVar10)(param_1);
              goto LAB_1081d49e4;
            }
            if ((!bVar1) || ((uint)piVar17[1] < 3)) {
              FUN_1081afe00();
              pcVar9 = pcVar15 + lVar16 * 8;
              if (((byte)uRam00000001132547e0 >> 4 & 1) == 0) {
                pcVar12 = FUN_1081d4ed0;
              }
              else {
                pcVar12 = (code *)0x1081b0028;
              }
              goto LAB_1081d49e0;
            }
            FUN_1081afe00();
            uVar11 = 0x1081b0094;
            uVar13 = 0x1081d4da8;
          }
          if ((uRam00000001132547e0 & 0x10) != 0) {
            uVar13 = uVar11;
          }
          *(undefined8 *)(pcVar15 + (lVar16 + 0xd) * 8) = uVar13;
          *(undefined4 *)(pcVar15 + 0x10) = 1;
        }
LAB_1081d49e4:
        if (*(int *)(*(long *)(param_1 + 0x220) + 0x6c) == 0) {
          lVar14 = (long)*(int *)(param_1 + 0x198);
          iVar2 = 0;
          if (lVar14 != 0) {
            iVar2 = (int)((long)((ulong)*(uint *)(param_1 + 0x88) + lVar14 + -1) / lVar14);
          }
          pcVar9 = param_1;
          (**(code **)(*(long *)(param_1 + 8) + 0x10))
                    (param_1,1,iVar2 * *(int *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
          pcVar12 = pcVar15 + 0x18;
          goto LAB_1081d4a24;
        }
      }
      piVar17 = piVar17 + 0x18;
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x38));
  }
  return;
}



/* Entry: 1081d4a7c; end: 1081d4a8f;  */

void FUN_1081d4a7c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x260);
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(lVar2 + 0xbc) = uVar1;
  return;
}



/* Entry: 1081d4a90; end: 1081d4bd3;  */

void FUN_1081d4a90(long param_1,long param_2,int *param_3,undefined8 param_4,long param_5,
                  uint *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar6 = *(long *)(param_1 + 0x260);
  iVar3 = *(int *)(lVar6 + 0xb8);
  iVar4 = *(int *)(param_1 + 0x19c);
  if (iVar4 <= iVar3) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar7 = 0;
      lVar5 = *(long *)(param_1 + 0x130);
      puVar8 = (undefined8 *)(lVar6 + 0x68);
      do {
        (*(code *)*puVar8)(param_1,lVar5,
                           *(long *)(param_2 + lVar7 * 8) +
                           (ulong)(uint)(*(int *)(lVar6 + 0xc0 + lVar7 * 4) * *param_3) * 8,
                           puVar8 + -10);
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + 0x60;
        puVar8 = puVar8 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x38));
      iVar4 = *(int *)(param_1 + 0x19c);
    }
    iVar3 = 0;
    *(undefined4 *)(lVar6 + 0xb8) = 0;
  }
  uVar1 = iVar4 - iVar3;
  if (*(uint *)(lVar6 + 0xbc) <= (uint)(iVar4 - iVar3)) {
    uVar1 = *(uint *)(lVar6 + 0xbc);
  }
  uVar2 = param_7 - *param_6;
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  (**(code **)(*(long *)(param_1 + 0x268) + 8))
            (param_1,lVar6 + 0x18,iVar3,param_5 + (ulong)*param_6 * 8,uVar1);
  *param_6 = *param_6 + uVar1;
  iVar3 = *(int *)(lVar6 + 0xb8) + uVar1;
  *(int *)(lVar6 + 0xb8) = iVar3;
  *(uint *)(lVar6 + 0xbc) = *(int *)(lVar6 + 0xbc) - uVar1;
  if (*(int *)(param_1 + 0x19c) <= iVar3) {
    *param_3 = *param_3 + 1;
  }
  return;
}



/* Entry: 1081d4bd4; end: 1081d4ecf;  */

void FUN_1081d4bd4(void)

{
  undefined8 *in_x3;
  
  *in_x3 = 0;
  return;
}



/* Entry: 1081d4ed0; end: 1081d4f73;  */

void FUN_1081d4ed0(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (0 < *(int *)(param_1 + 0x19c)) {
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = *param_4;
    do {
      if (*(uint *)(param_1 + 0x88) == 0) {
        uVar4 = 0;
      }
      else {
        puVar6 = *(undefined1 **)(lVar9 + lVar8 * 8);
        puVar1 = puVar6 + *(uint *)(param_1 + 0x88);
        puVar5 = *(undefined1 **)(param_3 + lVar7 * 8);
        do {
          uVar3 = *puVar5;
          *puVar6 = uVar3;
          puVar6[1] = uVar3;
          puVar6 = puVar6 + 2;
          puVar5 = puVar5 + 1;
        } while (puVar6 < puVar1);
        uVar4 = *(undefined4 *)(param_1 + 0x88);
      }
      puVar2 = (undefined8 *)(lVar9 + ((lVar8 << 0x20) >> 0x1d));
      _memcpy(puVar2[1],*puVar2,uVar4);
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 2;
    } while ((int)lVar8 < *(int *)(param_1 + 0x19c));
  }
  return;
}



/* Entry: 1081d4f74; end: 1081d508b;  */

void FUN_1081d4f74(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  if (0 < *(int *)(param_1 + 0x19c)) {
    lVar11 = 0;
    lVar12 = 0;
    lVar7 = *param_4;
    lVar1 = *(long *)(param_1 + 0x260) + (long)*(int *)(param_2 + 4);
    bVar4 = *(byte *)(lVar1 + 0xf2);
    bVar5 = *(byte *)(lVar1 + 0xe8);
    do {
      if (*(uint *)(param_1 + 0x88) != 0) {
        uVar10 = *(ulong *)(lVar7 + lVar12 * 8);
        uVar2 = uVar10 + *(uint *)(param_1 + 0x88);
        puVar8 = *(undefined1 **)(param_3 + lVar11 * 8);
        do {
          if (bVar5 != 0) {
            _memset(uVar10,*puVar8,bVar5);
            uVar10 = uVar10 + (bVar5 - 1) + 1;
          }
          puVar8 = puVar8 + 1;
        } while (uVar10 < uVar2);
      }
      if (1 < bVar4) {
        uVar3 = *(undefined4 *)(param_1 + 0x88);
        puVar9 = (undefined8 *)(lVar7 + ((lVar12 << 0x20) + 0x100000000 >> 0x1d));
        puVar13 = (undefined8 *)(lVar7 + ((lVar12 << 0x20) >> 0x1d));
        uVar10 = (ulong)bVar4;
        do {
          uVar6 = (int)uVar10 - 1;
          uVar10 = (ulong)uVar6;
          _memcpy(*puVar9,*puVar13,uVar3);
          puVar9 = puVar9 + 1;
          puVar13 = puVar13 + 1;
        } while (1 < uVar6);
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + (ulong)bVar4;
    } while ((int)lVar12 < *(int *)(param_1 + 0x19c));
  }
  return;
}



/* Entry: 1081d508c; end: 1081d50e3;  */

void FUN_1081d508c(undefined8 *param_1)

{
  *param_1 = &UNK_10bdb18a0;
  param_1[1] = FUN_1081d50e4;
  param_1[2] = 0x1081d5148;
  param_1[3] = FUN_1081d51c4;
  param_1[4] = FUN_1081d5294;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = &PTR_DAT_110a2f080;
  *(undefined4 *)(param_1 + 0x12) = 0x80;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}



/* Entry: 1081d50e4; end: 1081d51c3;  */

void FUN_1081d50e4(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (param_2 < 0) {
    lVar1 = *(long *)(lVar2 + 0x80);
    if ((lVar1 == 0) || (2 < *(int *)(lVar2 + 0x7c))) {
      (**(code **)(lVar2 + 0x10))();
      lVar1 = *(long *)(lVar2 + 0x80);
    }
    *(long *)(lVar2 + 0x80) = lVar1 + 1;
  }
  else if (param_2 <= *(int *)(lVar2 + 0x7c)) {
                    /* WARNING: Could not recover jumptable at 0x0001081d5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))();
    return;
  }
  return;
}



/* Entry: 1081d51c4; end: 1081d5293;  */

void FUN_1081d51c4(long *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *param_1;
  uVar1 = *(uint *)(lVar4 + 0x28);
  if (((int)uVar1 < 1) || (*(int *)(lVar4 + 0x90) < (int)uVar1)) {
    if ((*(long *)(lVar4 + 0x98) != 0) &&
       ((*(int *)(lVar4 + 0xa0) <= (int)uVar1 && ((int)uVar1 <= *(int *)(lVar4 + 0xa4))))) {
      puVar5 = (undefined8 *)
               (*(long *)(lVar4 + 0x98) + (long)(int)(uVar1 - *(int *)(lVar4 + 0xa0)) * 8);
      goto LAB_1081d5220;
    }
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(lVar4 + 0x88) + (ulong)uVar1 * 8);
LAB_1081d5220:
    pcVar3 = (char *)*puVar5;
    if (pcVar3 != (char *)0x0) goto LAB_1081d5238;
  }
  *(uint *)(lVar4 + 0x2c) = uVar1;
  pcVar3 = (char *)**(undefined8 **)(lVar4 + 0x88);
LAB_1081d5238:
  do {
    cVar2 = *pcVar3;
    if (cVar2 == '\0') break;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '%');
  _sprintf(param_2);
  return;
}



/* Entry: 1081d5294; end: 1081d556f;  */

void FUN_1081d5294(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 1081d5570; end: 1081d5a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1081d5570(short *param_1)

{
  short *psVar1;
  undefined1 (*pauVar2) [12];
  short *psVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  undefined1 auVar38 [16];
  ulong uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  undefined2 uVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  undefined1 auVar52 [16];
  short sVar60;
  undefined1 auVar53 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  short sVar63;
  short sVar66;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar73;
  undefined1 auVar64 [16];
  short sVar67;
  short sVar72;
  short sVar74;
  short sVar75;
  short sVar76;
  undefined1 auVar65 [16];
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  int iVar81;
  int iVar84;
  uint uVar85;
  undefined1 auVar82 [16];
  uint uVar86;
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  short sVar89;
  short sVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  short sVar96;
  int iVar97;
  int iVar102;
  uint uVar103;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  uint uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  short sVar107;
  short sVar109;
  short sVar110;
  short sVar111;
  short sVar112;
  short sVar113;
  short sVar114;
  undefined1 auVar108 [16];
  short sVar115;
  short sVar116;
  short sVar118;
  short sVar119;
  short sVar120;
  short sVar121;
  short sVar122;
  short sVar123;
  undefined1 auVar117 [16];
  short sVar124;
  short sVar125;
  short sVar126;
  short sVar127;
  short sVar128;
  short sVar129;
  undefined2 uVar130;
  short sVar131;
  undefined2 uVar132;
  short sVar133;
  undefined2 uVar134;
  short sVar135;
  short sVar136;
  short sVar139;
  short sVar140;
  short sVar141;
  short sVar142;
  short sVar143;
  short sVar144;
  undefined1 auVar137 [16];
  short sVar145;
  undefined1 auVar138 [16];
  
  psVar1 = param_1 + 0x30;
  uVar4 = *(undefined8 *)(param_1 + 0x34);
  uVar47 = (undefined2)((ulong)uVar4 >> 0x10);
  sVar95 = (short)((ulong)uVar4 >> 0x20);
  sVar133 = (short)((ulong)uVar4 >> 0x30);
  sVar67 = (short)((ulong)*(undefined8 *)psVar1 >> 0x30);
  auVar24 = *(undefined1 (*) [16])(param_1 + 0x38);
  pauVar2 = (undefined1 (*) [12])(param_1 + 0x20);
  uVar105 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20);
  psVar3 = param_1 + 0x28;
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  sVar42 = (short)((ulong)uVar4 >> 0x10);
  uVar106 = (undefined4)((ulong)uVar4 >> 0x20);
  auVar25 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x18);
  uVar23 = *(undefined8 *)(param_1 + 4);
  uVar130 = (undefined2)((ulong)uVar23 >> 0x10);
  uVar132 = (undefined2)((ulong)uVar23 >> 0x20);
  uVar134 = (undefined2)((ulong)uVar23 >> 0x30);
  sVar125 = (short)*(undefined8 *)param_1;
  sVar89 = (short)((ulong)*(undefined8 *)param_1 >> 0x10);
  auVar137 = *(undefined1 (*) [16])(param_1 + 8);
  auVar26._10_2_ = uVar47;
  auVar26._0_10_ = *(unkbyte10 *)psVar1;
  auVar26._12_2_ = sVar95;
  auVar26._14_2_ = sVar133;
  auVar26 = a64_TBL(ZEXT816(0),auVar26,auVar24,_UNK_10df09050);
  auVar88._12_4_ = uVar105;
  auVar88._0_12_ = *pauVar2;
  auVar101._10_2_ = sVar42;
  auVar101._0_10_ = *(unkbyte10 *)psVar3;
  auVar101._12_4_ = uVar106;
  auVar28 = a64_TBL(ZEXT816(0),auVar88,auVar101,_UNK_10df09060);
  auVar29 = a64_TBL(ZEXT816(0),auVar25,auVar27,_UNK_10df09070);
  auVar38._10_2_ = uVar47;
  auVar38._0_10_ = *(unkbyte10 *)psVar1;
  auVar38._12_2_ = sVar95;
  auVar38._14_2_ = sVar133;
  auVar38 = a64_TBL(ZEXT816(0),auVar38,auVar24,_UNK_10df09080);
  auVar98._12_4_ = uVar105;
  auVar98._0_12_ = *pauVar2;
  auVar5._10_2_ = sVar42;
  auVar5._0_10_ = *(unkbyte10 *)psVar3;
  auVar5._12_4_ = uVar106;
  auVar40 = a64_TBL(ZEXT816(0),auVar98,auVar5,_UNK_10df09090);
  sVar71 = (short)((unkuint10)*(unkbyte10 *)psVar3 >> 0x20);
  auVar41._10_2_ = uVar47;
  auVar41._0_10_ = *(unkbyte10 *)psVar1;
  auVar41._12_2_ = sVar95;
  auVar41._14_2_ = sVar133;
  auVar41 = a64_TBL(ZEXT816(0),auVar41,auVar24,_UNK_10df090a0);
  auVar13._10_2_ = uVar130;
  auVar13._0_10_ = *(unkbyte10 *)param_1;
  auVar13._12_2_ = uVar132;
  auVar13._14_2_ = uVar134;
  auVar64 = a64_TBL(ZEXT816(0),auVar13,auVar137,_UNK_10df090b0);
  auVar99._12_4_ = uVar105;
  auVar99._0_12_ = *pauVar2;
  auVar6._10_2_ = sVar42;
  auVar6._0_10_ = *(unkbyte10 *)psVar3;
  auVar6._12_4_ = uVar106;
  auVar11._10_2_ = 0x1716;
  auVar11._0_10_ = _UNK_10df090c0;
  auVar11._12_2_ = 0xfffe;
  auVar11._14_2_ = 0xfffe;
  auVar98 = a64_TBL(ZEXT816(0),auVar99,auVar6,auVar11);
  auVar14._10_2_ = uVar130;
  auVar14._0_10_ = *(unkbyte10 *)param_1;
  auVar14._12_2_ = uVar132;
  auVar14._14_2_ = uVar134;
  auVar61 = a64_TBL(ZEXT816(0),auVar14,auVar137,_UNK_10df090d0);
  auVar52._10_2_ = uVar47;
  auVar52._0_10_ = *(unkbyte10 *)psVar1;
  auVar52._12_2_ = sVar95;
  auVar52._14_2_ = sVar133;
  auVar99 = a64_TBL(ZEXT816(0),auVar52,auVar24,_UNK_10df090e0);
  auVar100 = a64_TBL(ZEXT816(0),auVar25,auVar27,_UNK_10df090f0);
  auVar82._10_2_ = uVar47;
  auVar82._0_10_ = *(unkbyte10 *)psVar1;
  auVar82._12_2_ = sVar95;
  auVar82._14_2_ = sVar133;
  auVar101 = a64_TBL(ZEXT816(0),auVar82,auVar24,_UNK_10df09100);
  auVar15._10_2_ = uVar130;
  auVar15._0_10_ = *(unkbyte10 *)param_1;
  auVar15._12_2_ = uVar132;
  auVar15._14_2_ = uVar134;
  auVar82 = a64_TBL(ZEXT816(0),auVar15,auVar137,_UNK_10df09110);
  sVar93 = (short)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20);
  sVar94 = (short)((ulong)uVar4 >> 0x20);
  auVar87 = a64_TBL(ZEXT816(0),auVar25,auVar27,_UNK_10df09120);
  auVar16._10_2_ = uVar130;
  auVar16._0_10_ = *(unkbyte10 *)param_1;
  auVar16._12_2_ = uVar132;
  auVar16._14_2_ = uVar134;
  auVar88 = a64_TBL(ZEXT816(0),auVar16,auVar137,_UNK_10df09130);
  auVar108._12_4_ = uVar105;
  auVar108._0_12_ = *pauVar2;
  auVar7._10_2_ = sVar42;
  auVar7._0_10_ = *(unkbyte10 *)psVar3;
  auVar7._12_4_ = uVar106;
  auVar9._10_2_ = 0x1f1e;
  auVar9._0_10_ = _UNK_10df09140;
  auVar9._12_2_ = 0xfffe;
  auVar9._14_2_ = 0xfffe;
  auVar52 = a64_TBL(ZEXT816(0),auVar108,auVar7,auVar9);
  auVar8._10_2_ = 0xfffe;
  auVar8._0_10_ = _UNK_10df09150;
  auVar8._12_4_ = 0xfffefffe;
  auVar108 = a64_TBL(ZEXT816(0),auVar25,auVar27,auVar8);
  auVar117._12_4_ = 0xfffefffe;
  auVar117._0_12_ = _UNK_10df09160;
  auVar17._10_2_ = uVar130;
  auVar17._0_10_ = *(unkbyte10 *)param_1;
  auVar17._12_2_ = uVar132;
  auVar17._14_2_ = uVar134;
  auVar117 = a64_TBL(ZEXT816(0),auVar17,auVar137,auVar117);
  sVar107 = auVar117._0_2_ + sVar125;
  sVar109 = auVar117._2_2_ + auVar137._0_2_;
  sVar110 = auVar108._4_2_ + auVar29._4_2_;
  sVar111 = auVar108._6_2_ + auVar29._6_2_;
  sVar112 = auVar52._8_2_ + auVar28._8_2_;
  sVar113 = auVar52._10_2_ + auVar28._10_2_;
  sVar114 = sVar133 + auVar26._12_2_;
  sVar115 = auVar24._14_2_ + auVar26._14_2_;
  sVar125 = sVar125 - auVar117._0_2_;
  sVar126 = auVar137._0_2_ - auVar117._2_2_;
  sVar127 = auVar29._4_2_ - auVar108._4_2_;
  sVar128 = auVar29._6_2_ - auVar108._6_2_;
  sVar129 = auVar28._8_2_ - auVar52._8_2_;
  sVar131 = auVar28._10_2_ - auVar52._10_2_;
  sVar133 = auVar26._12_2_ - sVar133;
  sVar135 = auVar26._14_2_ - auVar24._14_2_;
  sVar30 = auVar88._0_2_ + sVar89;
  sVar31 = auVar88._2_2_ + auVar137._2_2_;
  sVar32 = auVar87._4_2_ + auVar25._2_2_;
  sVar33 = auVar87._6_2_ + auVar27._2_2_;
  sVar34 = sVar93 + auVar40._8_2_;
  sVar35 = sVar94 + auVar40._10_2_;
  sVar36 = sVar95 + auVar38._12_2_;
  sVar37 = auVar24._12_2_ + auVar38._14_2_;
  sVar89 = sVar89 - auVar88._0_2_;
  sVar90 = auVar137._2_2_ - auVar88._2_2_;
  sVar91 = auVar25._2_2_ - auVar87._4_2_;
  sVar92 = auVar27._2_2_ - auVar87._6_2_;
  sVar93 = auVar40._8_2_ - sVar93;
  sVar94 = auVar40._10_2_ - sVar94;
  sVar95 = auVar38._12_2_ - sVar95;
  sVar96 = auVar38._14_2_ - auVar24._12_2_;
  sVar116 = auVar82._0_2_ + auVar64._0_2_;
  sVar118 = auVar82._2_2_ + auVar64._2_2_;
  sVar119 = auVar25._10_2_ + auVar25._4_2_;
  sVar120 = auVar27._10_2_ + auVar27._4_2_;
  sVar121 = SUB122(*pauVar2,10) + SUB122(*pauVar2,4);
  sVar122 = sVar42 + sVar71;
  sVar123 = auVar101._12_2_ + auVar41._12_2_;
  sVar124 = auVar101._14_2_ + auVar41._14_2_;
  sVar63 = auVar64._0_2_ - auVar82._0_2_;
  sVar66 = auVar64._2_2_ - auVar82._2_2_;
  sVar68 = auVar25._4_2_ - auVar25._10_2_;
  sVar69 = auVar27._4_2_ - auVar27._10_2_;
  sVar70 = SUB122(*pauVar2,4) - SUB122(*pauVar2,10);
  sVar71 = sVar71 - sVar42;
  sVar73 = auVar41._12_2_ - auVar101._12_2_;
  sVar75 = auVar41._14_2_ - auVar101._14_2_;
  sVar42 = (short)uVar23 + auVar61._0_2_;
  sVar43 = auVar137._8_2_ + auVar61._2_2_;
  sVar44 = auVar100._4_2_ + auVar25._6_2_;
  sVar45 = auVar100._6_2_ + auVar27._6_2_;
  sVar46 = param_1[0x24] + auVar98._8_2_;
  sVar48 = (short)uVar4 + auVar98._10_2_;
  sVar49 = auVar99._12_2_ + sVar67;
  sVar50 = auVar99._14_2_ + auVar24._6_2_;
  sVar136 = sVar42 + sVar107;
  sVar139 = sVar43 + sVar109;
  sVar140 = sVar44 + sVar110;
  sVar141 = sVar45 + sVar111;
  sVar142 = sVar46 + sVar112;
  sVar143 = sVar48 + sVar113;
  sVar144 = sVar49 + sVar114;
  sVar145 = sVar50 + sVar115;
  sVar107 = sVar107 - sVar42;
  sVar109 = sVar109 - sVar43;
  sVar110 = sVar110 - sVar44;
  sVar111 = sVar111 - sVar45;
  sVar112 = sVar112 - sVar46;
  sVar113 = sVar113 - sVar48;
  sVar114 = sVar114 - sVar49;
  sVar115 = sVar115 - sVar50;
  sVar51 = sVar116 + sVar30;
  sVar54 = sVar118 + sVar31;
  sVar55 = sVar119 + sVar32;
  sVar56 = sVar120 + sVar33;
  sVar57 = sVar121 + sVar34;
  sVar58 = sVar122 + sVar35;
  sVar59 = sVar123 + sVar36;
  sVar60 = sVar124 + sVar37;
  sVar30 = (short)((uint)(((int)sVar107 + (int)(short)(sVar30 - sVar116)) * 0xb500) >> 0x10);
  sVar42 = (short)((uint)(((int)sVar109 + (int)(short)(sVar31 - sVar118)) * 0xb500) >> 0x10);
  sVar43 = (short)((uint)(((int)sVar110 + (int)(short)(sVar32 - sVar119)) * 0xb500) >> 0x10);
  sVar49 = (short)((uint)(((int)sVar111 + (int)(short)(sVar33 - sVar120)) * 0xb500) >> 0x10);
  sVar118 = (short)((uint)(((int)sVar112 + (int)(short)(sVar34 - sVar121)) * 0xb500) >> 0x10);
  sVar119 = (short)((uint)(((int)sVar113 + (int)(short)(sVar35 - sVar122)) * 0xb500) >> 0x10);
  sVar120 = (short)((uint)(((int)sVar114 + (int)(short)(sVar36 - sVar123)) * 0xb500) >> 0x10);
  sVar121 = (short)((uint)(((int)sVar115 + (int)(short)(sVar37 - sVar124)) * 0xb500) >> 0x10);
  sVar32 = (sVar63 + auVar61._0_2_) - (short)uVar23;
  sVar35 = (sVar66 + auVar61._2_2_) - auVar137._8_2_;
  sVar36 = (sVar68 + auVar25._6_2_) - auVar100._4_2_;
  sVar37 = (sVar69 + auVar27._6_2_) - auVar100._6_2_;
  sVar48 = (sVar70 + auVar98._8_2_) - param_1[0x24];
  sVar116 = (sVar71 + auVar98._10_2_) - (short)uVar4;
  sVar122 = (sVar73 + sVar67) - auVar99._12_2_;
  sVar123 = (sVar75 + auVar24._6_2_) - auVar99._14_2_;
  sVar34 = sVar89 + sVar125;
  sVar67 = sVar90 + sVar126;
  sVar45 = sVar91 + sVar127;
  sVar46 = sVar92 + sVar128;
  sVar124 = sVar93 + sVar129;
  sVar72 = sVar94 + sVar131;
  sVar74 = sVar95 + sVar133;
  sVar76 = sVar96 + sVar135;
  sVar31 = (short)((uint)((short)(sVar63 + sVar89) * 0xb500) >> 0x10);
  sVar33 = (short)((uint)((short)(sVar66 + sVar90) * 0xb500) >> 0x10);
  sVar44 = (short)((uint)((short)(sVar68 + sVar91) * 0xb500) >> 0x10);
  sVar50 = (short)((uint)((short)(sVar69 + sVar92) * 0xb500) >> 0x10);
  sVar68 = (short)((uint)((short)(sVar70 + sVar93) * 0xb500) >> 0x10);
  sVar69 = (short)((uint)((short)(sVar71 + sVar94) * 0xb500) >> 0x10);
  sVar70 = (short)((uint)((short)(sVar73 + sVar95) * 0xb500) >> 0x10);
  sVar73 = (short)((uint)((short)(sVar75 + sVar96) * 0xb500) >> 0x10);
  iVar81 = ((int)sVar32 - (int)sVar34) * 0x6200;
  iVar84 = ((int)sVar35 - (int)sVar67) * 0x6200;
  uVar85 = ((int)sVar36 - (int)sVar45) * 0x6200;
  uVar86 = ((int)sVar37 - (int)sVar46) * 0x6200;
  sVar93 = (short)(iVar81 + (sVar34 * 0x14e00 & 0xffff01ffU) >> 0x10);
  sVar34 = (short)(iVar84 + (sVar67 * 0x14e00 & 0xffff01ffU) >> 0x10);
  sVar67 = (short)(uVar85 + (sVar45 * 0x14e00 & 0xffff01ffU) >> 0x10);
  sVar95 = (short)(uVar86 + (sVar46 * 0x14e00 & 0xffff01ffU) >> 0x10);
  uVar39 = CONCAT44(iVar84,iVar81) & 0xffff01ffffff01ff;
  sVar71 = (short)((uint)((int)uVar39 + sVar32 * 0x8b00) >> 0x10);
  sVar35 = (short)((uint)((int)(uVar39 >> 0x20) + sVar35 * 0x8b00) >> 0x10);
  sVar45 = (short)((uVar85 & 0xffff01ff) + sVar36 * 0x8b00 >> 0x10);
  sVar63 = (short)((uVar86 & 0xffff01ff) + sVar37 * 0x8b00 >> 0x10);
  iVar81 = ((int)sVar48 - (int)sVar124) * 0x6200;
  iVar84 = ((int)sVar116 - (int)sVar72) * 0x6200;
  uVar85 = ((int)sVar122 - (int)sVar74) * 0x6200;
  uVar86 = ((int)sVar123 - (int)sVar76) * 0x6200;
  sVar94 = (short)(iVar81 + (sVar124 * 0x14e00 & 0xffff01ffU) >> 0x10);
  sVar36 = (short)(iVar84 + (sVar72 * 0x14e00 & 0xffff01ffU) >> 0x10);
  sVar46 = (short)(uVar85 + (sVar74 * 0x14e00 & 0xffff01ffU) >> 0x10);
  sVar66 = (short)(uVar86 + (sVar76 * 0x14e00 & 0xffff01ffU) >> 0x10);
  uVar39 = CONCAT44(iVar84,iVar81) & 0xffff01ffffff01ff;
  sVar32 = (short)((uint)((int)uVar39 + sVar48 * 0x8b00) >> 0x10);
  sVar37 = (short)((uint)((int)(uVar39 >> 0x20) + sVar116 * 0x8b00) >> 0x10);
  sVar48 = (short)((uVar85 & 0xffff01ff) + sVar122 * 0x8b00 >> 0x10);
  sVar116 = (short)((uVar86 & 0xffff01ff) + sVar123 * 0x8b00 >> 0x10);
  sVar91 = sVar136 - sVar51;
  sVar92 = sVar139 - sVar54;
  sVar96 = sVar140 - sVar55;
  sVar77 = sVar141 - sVar56;
  sVar90 = sVar142 - sVar57;
  sVar78 = sVar143 - sVar58;
  sVar79 = sVar144 - sVar59;
  sVar80 = sVar145 - sVar60;
  sVar122 = sVar125 - sVar31;
  sVar123 = sVar126 - sVar33;
  sVar124 = sVar127 - sVar44;
  sVar72 = sVar128 - sVar50;
  sVar74 = sVar129 - sVar68;
  sVar75 = sVar131 - sVar69;
  sVar76 = sVar133 - sVar70;
  sVar89 = sVar135 - sVar73;
  auVar83._0_2_ = sVar122 + sVar71;
  auVar83._2_2_ = sVar123 + sVar35;
  auVar83._4_2_ = sVar124 + sVar45;
  auVar83._6_2_ = sVar72 + sVar63;
  auVar83._8_2_ = sVar74 + sVar32;
  auVar83._10_2_ = sVar75 + sVar37;
  auVar83._12_2_ = sVar76 + sVar48;
  auVar83._14_2_ = sVar89 + sVar116;
  auVar62._0_2_ = sVar107 + sVar30;
  auVar62._2_2_ = sVar109 + sVar42;
  auVar62._4_2_ = sVar110 + sVar43;
  auVar62._6_2_ = sVar111 + sVar49;
  auVar62._8_2_ = sVar112 + sVar118;
  auVar62._10_2_ = sVar113 + sVar119;
  auVar62._12_2_ = sVar114 + sVar120;
  auVar62._14_2_ = sVar115 + sVar121;
  auVar65._0_2_ = sVar122 - sVar71;
  auVar65._2_2_ = sVar123 - sVar35;
  auVar65._4_2_ = sVar124 - sVar45;
  auVar65._6_2_ = sVar72 - sVar63;
  auVar65._8_2_ = sVar74 - sVar32;
  auVar65._10_2_ = sVar75 - sVar37;
  auVar65._12_2_ = sVar76 - sVar48;
  auVar65._14_2_ = sVar89 - sVar116;
  sVar125 = sVar125 + sVar31;
  sVar126 = sVar126 + sVar33;
  sVar127 = sVar127 + sVar44;
  sVar128 = sVar128 + sVar50;
  sVar129 = sVar129 + sVar68;
  sVar131 = sVar131 + sVar69;
  sVar133 = sVar133 + sVar70;
  sVar135 = sVar135 + sVar73;
  sVar136 = sVar136 + sVar51;
  sVar139 = sVar139 + sVar54;
  sVar140 = sVar140 + sVar55;
  sVar141 = sVar141 + sVar56;
  sVar142 = sVar142 + sVar57;
  sVar143 = sVar143 + sVar58;
  sVar144 = sVar144 + sVar59;
  sVar145 = sVar145 + sVar60;
  auVar138._0_2_ = sVar125 + sVar93;
  auVar138._2_2_ = sVar126 + sVar34;
  auVar138._4_2_ = sVar127 + sVar67;
  auVar138._6_2_ = sVar128 + sVar95;
  auVar138._8_2_ = sVar129 + sVar94;
  auVar138._10_2_ = sVar131 + sVar36;
  auVar138._12_2_ = sVar133 + sVar46;
  auVar138._14_2_ = sVar135 + sVar66;
  sVar107 = sVar107 - sVar30;
  sVar109 = sVar109 - sVar42;
  sVar110 = sVar110 - sVar43;
  sVar111 = sVar111 - sVar49;
  sVar112 = sVar112 - sVar118;
  sVar113 = sVar113 - sVar119;
  sVar114 = sVar114 - sVar120;
  sVar115 = sVar115 - sVar121;
  auVar53._0_2_ = sVar125 - sVar93;
  auVar53._2_2_ = sVar126 - sVar34;
  auVar53._4_2_ = sVar127 - sVar67;
  auVar53._6_2_ = sVar128 - sVar95;
  auVar53._8_2_ = sVar129 - sVar94;
  auVar53._10_2_ = sVar131 - sVar36;
  auVar53._12_2_ = sVar133 - sVar46;
  auVar53._14_2_ = sVar135 - sVar66;
  auVar18._2_2_ = sVar139;
  auVar18._0_2_ = sVar136;
  auVar18._4_2_ = sVar140;
  auVar18._6_2_ = sVar141;
  auVar18._8_2_ = sVar142;
  auVar18._10_2_ = sVar143;
  auVar18._12_2_ = sVar144;
  auVar18._14_2_ = sVar145;
  auVar108 = a64_TBL(ZEXT816(0),auVar18,auVar138,_UNK_10df090d0);
  auVar40._2_2_ = sVar92;
  auVar40._0_2_ = sVar91;
  auVar40._4_2_ = sVar96;
  auVar40._6_2_ = sVar77;
  auVar40._8_2_ = sVar90;
  auVar40._10_2_ = sVar78;
  auVar40._12_2_ = sVar79;
  auVar40._14_2_ = sVar80;
  auVar12._10_2_ = 0x1716;
  auVar12._0_10_ = _UNK_10df090c0;
  auVar12._12_2_ = 0xfffe;
  auVar12._14_2_ = 0xfffe;
  auVar40 = a64_TBL(ZEXT816(0),auVar40,auVar83,auVar12);
  auVar24._2_2_ = sVar109;
  auVar24._0_2_ = sVar107;
  auVar24._4_2_ = sVar110;
  auVar24._6_2_ = sVar111;
  auVar24._8_2_ = sVar112;
  auVar24._10_2_ = sVar113;
  auVar24._12_2_ = sVar114;
  auVar24._14_2_ = sVar115;
  auVar26 = a64_TBL(ZEXT816(0),auVar24,auVar53,_UNK_10df090e0);
  auVar38 = a64_TBL(ZEXT816(0),auVar62,auVar65,_UNK_10df090f0);
  auVar25._2_2_ = sVar109;
  auVar25._0_2_ = sVar107;
  auVar25._4_2_ = sVar110;
  auVar25._6_2_ = sVar111;
  auVar25._8_2_ = sVar112;
  auVar25._10_2_ = sVar113;
  auVar25._12_2_ = sVar114;
  auVar25._14_2_ = sVar115;
  auVar41 = a64_TBL(ZEXT816(0),auVar25,auVar53,_UNK_10df090a0);
  auVar19._2_2_ = sVar139;
  auVar19._0_2_ = sVar136;
  auVar19._4_2_ = sVar140;
  auVar19._6_2_ = sVar141;
  auVar19._8_2_ = sVar142;
  auVar19._10_2_ = sVar143;
  auVar19._12_2_ = sVar144;
  auVar19._14_2_ = sVar145;
  auVar88 = a64_TBL(ZEXT816(0),auVar19,auVar138,_UNK_10df090b0);
  auVar27._2_2_ = sVar109;
  auVar27._0_2_ = sVar107;
  auVar27._4_2_ = sVar110;
  auVar27._6_2_ = sVar111;
  auVar27._8_2_ = sVar112;
  auVar27._10_2_ = sVar113;
  auVar27._12_2_ = sVar114;
  auVar27._14_2_ = sVar115;
  auVar52 = a64_TBL(ZEXT816(0),auVar27,auVar53,_UNK_10df09100);
  auVar20._2_2_ = sVar139;
  auVar20._0_2_ = sVar136;
  auVar20._4_2_ = sVar140;
  auVar20._6_2_ = sVar141;
  auVar20._8_2_ = sVar142;
  auVar20._10_2_ = sVar143;
  auVar20._12_2_ = sVar144;
  auVar20._14_2_ = sVar145;
  auVar98 = a64_TBL(ZEXT816(0),auVar20,auVar138,_UNK_10df09110);
  auVar28._2_2_ = sVar109;
  auVar28._0_2_ = sVar107;
  auVar28._4_2_ = sVar110;
  auVar28._6_2_ = sVar111;
  auVar28._8_2_ = sVar112;
  auVar28._10_2_ = sVar113;
  auVar28._12_2_ = sVar114;
  auVar28._14_2_ = sVar115;
  auVar82 = a64_TBL(ZEXT816(0),auVar28,auVar53,_UNK_10df09080);
  auVar61._2_2_ = sVar92;
  auVar61._0_2_ = sVar91;
  auVar61._4_2_ = sVar96;
  auVar61._6_2_ = sVar77;
  auVar61._8_2_ = sVar90;
  auVar61._10_2_ = sVar78;
  auVar61._12_2_ = sVar79;
  auVar61._14_2_ = sVar80;
  auVar27 = a64_TBL(ZEXT816(0),auVar61,auVar83,_UNK_10df09090);
  auVar64._2_2_ = sVar92;
  auVar64._0_2_ = sVar91;
  auVar64._4_2_ = sVar96;
  auVar64._6_2_ = sVar77;
  auVar64._8_2_ = sVar90;
  auVar64._10_2_ = sVar78;
  auVar64._12_2_ = sVar79;
  auVar64._14_2_ = sVar80;
  auVar24 = a64_TBL(ZEXT816(0),auVar64,auVar83,_UNK_10df09060);
  auVar87._2_2_ = sVar92;
  auVar87._0_2_ = sVar91;
  auVar87._4_2_ = sVar96;
  auVar87._6_2_ = sVar77;
  auVar87._8_2_ = sVar90;
  auVar87._10_2_ = sVar78;
  auVar87._12_2_ = sVar79;
  auVar87._14_2_ = sVar80;
  auVar10._10_2_ = 0x1f1e;
  auVar10._0_10_ = _UNK_10df09140;
  auVar10._12_2_ = 0xfffe;
  auVar10._14_2_ = 0xfffe;
  auVar28 = a64_TBL(ZEXT816(0),auVar87,auVar83,auVar10);
  auVar64 = a64_TBL(ZEXT816(0),auVar62,auVar65,_UNK_10df09120);
  auVar21._2_2_ = sVar139;
  auVar21._0_2_ = sVar136;
  auVar21._4_2_ = sVar140;
  auVar21._6_2_ = sVar141;
  auVar21._8_2_ = sVar142;
  auVar21._10_2_ = sVar143;
  auVar21._12_2_ = sVar144;
  auVar21._14_2_ = sVar145;
  auVar99 = a64_TBL(ZEXT816(0),auVar21,auVar138,_UNK_10df09130);
  auVar29._2_2_ = sVar109;
  auVar29._0_2_ = sVar107;
  auVar29._4_2_ = sVar110;
  auVar29._6_2_ = sVar111;
  auVar29._8_2_ = sVar112;
  auVar29._10_2_ = sVar113;
  auVar29._12_2_ = sVar114;
  auVar29._14_2_ = sVar115;
  auVar29 = a64_TBL(ZEXT816(0),auVar29,auVar53,_UNK_10df09050);
  auVar61 = a64_TBL(ZEXT816(0),auVar62,auVar65,_UNK_10df09070);
  auVar137._10_2_ = 0xfffe;
  auVar137._0_10_ = _UNK_10df09150;
  auVar137._12_4_ = 0xfffefffe;
  auVar87 = a64_TBL(ZEXT816(0),auVar62,auVar65,auVar137);
  auVar100._12_4_ = 0xfffefffe;
  auVar100._0_12_ = _UNK_10df09160;
  auVar22._2_2_ = sVar139;
  auVar22._0_2_ = sVar136;
  auVar22._4_2_ = sVar140;
  auVar22._6_2_ = sVar141;
  auVar22._8_2_ = sVar142;
  auVar22._10_2_ = sVar143;
  auVar22._12_2_ = sVar144;
  auVar22._14_2_ = sVar145;
  auVar25 = a64_TBL(ZEXT816(0),auVar22,auVar138,auVar100);
  sVar125 = auVar25._0_2_ + sVar136;
  sVar126 = auVar25._2_2_ + auVar138._0_2_;
  sVar127 = auVar87._4_2_ + auVar61._4_2_;
  sVar128 = auVar87._6_2_ + auVar61._6_2_;
  sVar129 = auVar28._8_2_ + auVar24._8_2_;
  sVar131 = auVar28._10_2_ + auVar24._10_2_;
  sVar133 = sVar115 + auVar29._12_2_;
  sVar135 = auVar53._14_2_ + auVar29._14_2_;
  sVar136 = sVar136 - auVar25._0_2_;
  sVar69 = auVar138._0_2_ - auVar25._2_2_;
  sVar120 = auVar61._4_2_ - auVar87._4_2_;
  sVar70 = auVar61._6_2_ - auVar87._6_2_;
  sVar121 = auVar24._8_2_ - auVar28._8_2_;
  sVar73 = auVar24._10_2_ - auVar28._10_2_;
  sVar115 = auVar29._12_2_ - sVar115;
  sVar122 = auVar29._14_2_ - auVar53._14_2_;
  sVar94 = auVar99._0_2_ + sVar139;
  sVar32 = auVar99._2_2_ + auVar138._2_2_;
  sVar42 = auVar64._4_2_ + auVar62._2_2_;
  sVar33 = auVar64._6_2_ + auVar65._2_2_;
  sVar34 = sVar79 + auVar27._8_2_;
  sVar35 = auVar83._12_2_ + auVar27._10_2_;
  sVar37 = sVar114 + auVar82._12_2_;
  sVar43 = auVar53._12_2_ + auVar82._14_2_;
  sVar139 = sVar139 - auVar99._0_2_;
  sVar112 = auVar138._2_2_ - auVar99._2_2_;
  sVar113 = auVar62._2_2_ - auVar64._4_2_;
  sVar91 = auVar65._2_2_ - auVar64._6_2_;
  sVar79 = auVar27._8_2_ - sVar79;
  sVar92 = auVar27._10_2_ - auVar83._12_2_;
  sVar114 = auVar82._12_2_ - sVar114;
  sVar80 = auVar82._14_2_ - auVar53._12_2_;
  sVar30 = auVar98._0_2_ + auVar88._0_2_;
  sVar31 = auVar98._2_2_ + auVar88._2_2_;
  sVar93 = auVar52._12_2_ + auVar41._12_2_;
  sVar71 = auVar52._14_2_ + auVar41._14_2_;
  sVar63 = auVar88._0_2_ - auVar98._0_2_;
  sVar116 = auVar88._2_2_ - auVar98._2_2_;
  sVar68 = auVar41._12_2_ - auVar52._12_2_;
  sVar119 = auVar41._14_2_ - auVar52._14_2_;
  sVar36 = sVar142 + auVar108._0_2_;
  sVar44 = auVar138._8_2_ + auVar108._2_2_;
  sVar67 = auVar38._4_2_ + auVar62._6_2_;
  sVar45 = auVar38._6_2_ + auVar65._6_2_;
  sVar46 = sVar90 + auVar40._8_2_;
  sVar48 = auVar83._8_2_ + auVar40._10_2_;
  sVar49 = auVar26._12_2_ + sVar111;
  sVar50 = auVar26._14_2_ + auVar53._6_2_;
  sVar51 = sVar36 + sVar125;
  sVar54 = sVar44 + sVar126;
  sVar55 = sVar67 + sVar127;
  sVar56 = sVar45 + sVar128;
  sVar57 = sVar46 + sVar129;
  sVar58 = sVar48 + sVar131;
  sVar59 = sVar49 + sVar133;
  sVar60 = sVar50 + sVar135;
  sVar125 = sVar125 - sVar36;
  sVar126 = sVar126 - sVar44;
  sVar127 = sVar127 - sVar67;
  sVar128 = sVar128 - sVar45;
  sVar129 = sVar129 - sVar46;
  sVar131 = sVar131 - sVar48;
  sVar133 = sVar133 - sVar49;
  sVar135 = sVar135 - sVar50;
  sVar123 = sVar30 + sVar94;
  sVar124 = sVar31 + sVar32;
  sVar72 = auVar62._10_2_ + auVar62._4_2_ + sVar42;
  sVar74 = auVar65._10_2_ + auVar65._4_2_ + sVar33;
  sVar75 = sVar78 + sVar96 + sVar34;
  sVar76 = auVar83._10_2_ + auVar83._4_2_ + sVar35;
  sVar89 = sVar93 + sVar37;
  sVar107 = sVar71 + sVar43;
  sVar30 = (short)((uint)(((int)sVar125 + (int)(short)(sVar94 - sVar30)) * 0xb500) >> 0x10);
  sVar32 = (short)((uint)(((int)sVar126 + (int)(short)(sVar32 - sVar31)) * 0xb500) >> 0x10);
  sVar36 = (short)((uint)(((int)sVar127 + (int)(short)(sVar42 - (auVar62._10_2_ + auVar62._4_2_))) *
                         0xb500) >> 0x10);
  sVar45 = (short)((uint)(((int)sVar128 + (int)(short)(sVar33 - (auVar65._10_2_ + auVar65._4_2_))) *
                         0xb500) >> 0x10);
  sVar95 = (short)((uint)(((int)sVar129 + (int)(short)(sVar34 - (sVar78 + sVar96))) * 0xb500) >>
                  0x10);
  sVar66 = (short)((uint)(((int)sVar131 + (int)(short)(sVar35 - (auVar83._10_2_ + auVar83._4_2_))) *
                         0xb500) >> 0x10);
  sVar118 = (short)((uint)(((int)sVar133 + (int)(short)(sVar37 - sVar93)) * 0xb500) >> 0x10);
  sVar109 = (short)((uint)(((int)sVar135 + (int)(short)(sVar43 - sVar71)) * 0xb500) >> 0x10);
  sVar142 = (sVar63 + auVar108._0_2_) - sVar142;
  sVar71 = (sVar116 + auVar108._2_2_) - auVar138._8_2_;
  sVar94 = ((auVar62._4_2_ - auVar62._10_2_) + auVar62._6_2_) - auVar38._4_2_;
  sVar34 = ((auVar65._4_2_ - auVar65._10_2_) + auVar65._6_2_) - auVar38._6_2_;
  sVar90 = ((sVar96 - sVar78) + auVar40._8_2_) - sVar90;
  sVar35 = ((auVar83._4_2_ - auVar83._10_2_) + auVar40._10_2_) - auVar83._8_2_;
  sVar67 = (sVar68 + sVar111) - auVar26._12_2_;
  sVar50 = (sVar119 + auVar53._6_2_) - auVar26._14_2_;
  sVar31 = sVar139 + sVar136;
  sVar93 = sVar112 + sVar69;
  sVar33 = sVar113 + sVar120;
  sVar43 = sVar91 + sVar70;
  sVar44 = sVar79 + sVar121;
  sVar49 = sVar92 + sVar73;
  sVar77 = sVar114 + sVar115;
  sVar140 = sVar80 + sVar122;
  iVar81 = ((int)sVar142 - (int)sVar31) * 0x6200;
  iVar84 = ((int)sVar71 - (int)sVar93) * 0x6200;
  uVar85 = ((int)sVar94 - (int)sVar33) * 0x6200;
  uVar86 = ((int)sVar34 - (int)sVar43) * 0x6200;
  iVar97 = ((int)sVar90 - (int)sVar44) * 0x6200;
  iVar102 = ((int)sVar35 - (int)sVar49) * 0x6200;
  uVar103 = ((int)sVar67 - (int)sVar77) * 0x6200;
  uVar104 = ((int)sVar50 - (int)sVar140) * 0x6200;
  sVar110 = (short)((uint)((short)(sVar63 + sVar139) * 0xb500) >> 0x10);
  sVar111 = (short)((uint)((short)(sVar116 + sVar112) * 0xb500) >> 0x10);
  sVar112 = (short)((uint)((short)((auVar62._4_2_ - auVar62._10_2_) + sVar113) * 0xb500) >> 0x10);
  sVar113 = (short)((uint)((short)((auVar65._4_2_ - auVar65._10_2_) + sVar91) * 0xb500) >> 0x10);
  sVar63 = (short)((uint)((short)((sVar96 - sVar78) + sVar79) * 0xb500) >> 0x10);
  sVar116 = (short)((uint)((short)((auVar83._4_2_ - auVar83._10_2_) + sVar92) * 0xb500) >> 0x10);
  sVar68 = (short)((uint)((short)(sVar68 + sVar114) * 0xb500) >> 0x10);
  sVar119 = (short)((uint)((short)(sVar119 + sVar80) * 0xb500) >> 0x10);
  uVar39 = CONCAT44(sVar93 * 0x14e00,sVar31 * 0x14e00) & 0xffff01ffffff01ff;
  sVar31 = (short)((uint)(iVar81 + (int)uVar39) >> 0x10);
  sVar42 = (short)((uint)(iVar84 + (int)(uVar39 >> 0x20)) >> 0x10);
  sVar37 = (short)(uVar85 + (sVar33 * 0x14e00 & 0xffff01ffU) >> 0x10);
  sVar46 = (short)(uVar86 + (sVar43 * 0x14e00 & 0xffff01ffU) >> 0x10);
  uVar39 = CONCAT44(iVar84,iVar81) & 0xffff01ffffff01ff;
  sVar93 = (short)((uint)((int)uVar39 + sVar142 * 0x8b00) >> 0x10);
  sVar33 = (short)((uint)((int)(uVar39 >> 0x20) + sVar71 * 0x8b00) >> 0x10);
  sVar43 = (short)((uVar85 & 0xffff01ff) + sVar94 * 0x8b00 >> 0x10);
  sVar48 = (short)((uVar86 & 0xffff01ff) + sVar34 * 0x8b00 >> 0x10);
  sVar71 = (short)(iVar97 + (sVar44 * 0x14e00 & 0xffff01ffU) >> 0x10);
  sVar34 = (short)(iVar102 + (sVar49 * 0x14e00 & 0xffff01ffU) >> 0x10);
  sVar44 = (short)(uVar103 + (sVar77 * 0x14e00 & 0xffff01ffU) >> 0x10);
  sVar49 = (short)(uVar104 + (sVar140 * 0x14e00 & 0xffff01ffU) >> 0x10);
  uVar39 = CONCAT44(iVar102,iVar97) & 0xffff01ffffff01ff;
  sVar94 = (short)((uint)((int)uVar39 + sVar90 * 0x8b00) >> 0x10);
  sVar35 = (short)((uint)((int)(uVar39 >> 0x20) + sVar35 * 0x8b00) >> 0x10);
  sVar67 = (short)((uVar103 & 0xffff01ff) + sVar67 * 0x8b00 >> 0x10);
  sVar50 = (short)((uVar104 & 0xffff01ff) + sVar50 * 0x8b00 >> 0x10);
  sVar142 = sVar136 - sVar110;
  sVar90 = sVar69 - sVar111;
  sVar114 = sVar120 - sVar112;
  sVar91 = sVar70 - sVar113;
  sVar92 = sVar121 - sVar63;
  sVar96 = sVar73 - sVar116;
  sVar77 = sVar115 - sVar68;
  sVar78 = sVar122 - sVar119;
  param_1[0x24] = sVar57 - sVar75;
  param_1[0x25] = sVar58 - sVar76;
  param_1[0x26] = sVar59 - sVar89;
  param_1[0x27] = sVar60 - sVar107;
  param_1[0x20] = sVar51 - sVar123;
  param_1[0x21] = sVar54 - sVar124;
  param_1[0x22] = sVar55 - sVar72;
  param_1[0x23] = sVar56 - sVar74;
  param_1[0x2c] = sVar92 + sVar94;
  param_1[0x2d] = sVar96 + sVar35;
  param_1[0x2e] = sVar77 + sVar67;
  param_1[0x2f] = sVar78 + sVar50;
  param_1[0x28] = sVar142 + sVar93;
  param_1[0x29] = sVar90 + sVar33;
  param_1[0x2a] = sVar114 + sVar43;
  param_1[0x2b] = sVar91 + sVar48;
  sVar136 = sVar136 + sVar110;
  sVar69 = sVar69 + sVar111;
  sVar120 = sVar120 + sVar112;
  sVar70 = sVar70 + sVar113;
  sVar121 = sVar121 + sVar63;
  sVar73 = sVar73 + sVar116;
  sVar115 = sVar115 + sVar68;
  sVar122 = sVar122 + sVar119;
  param_1[0x14] = sVar129 + sVar95;
  param_1[0x15] = sVar131 + sVar66;
  param_1[0x16] = sVar133 + sVar118;
  param_1[0x17] = sVar135 + sVar109;
  param_1[0x10] = sVar125 + sVar30;
  param_1[0x11] = sVar126 + sVar32;
  param_1[0x12] = sVar127 + sVar36;
  param_1[0x13] = sVar128 + sVar45;
  param_1[0x1c] = sVar92 - sVar94;
  param_1[0x1d] = sVar96 - sVar35;
  param_1[0x1e] = sVar77 - sVar67;
  param_1[0x1f] = sVar78 - sVar50;
  param_1[0x18] = sVar142 - sVar93;
  param_1[0x19] = sVar90 - sVar33;
  param_1[0x1a] = sVar114 - sVar43;
  param_1[0x1b] = sVar91 - sVar48;
  param_1[4] = sVar57 + sVar75;
  param_1[5] = sVar58 + sVar76;
  param_1[6] = sVar59 + sVar89;
  param_1[7] = sVar60 + sVar107;
  *param_1 = sVar51 + sVar123;
  param_1[1] = sVar54 + sVar124;
  param_1[2] = sVar55 + sVar72;
  param_1[3] = sVar56 + sVar74;
  param_1[0xc] = sVar121 + sVar71;
  param_1[0xd] = sVar73 + sVar34;
  param_1[0xe] = sVar115 + sVar44;
  param_1[0xf] = sVar122 + sVar49;
  param_1[8] = sVar136 + sVar31;
  param_1[9] = sVar69 + sVar42;
  param_1[10] = sVar120 + sVar37;
  param_1[0xb] = sVar70 + sVar46;
  param_1[0x34] = sVar129 - sVar95;
  param_1[0x35] = sVar131 - sVar66;
  param_1[0x36] = sVar133 - sVar118;
  param_1[0x37] = sVar135 - sVar109;
  param_1[0x30] = sVar125 - sVar30;
  param_1[0x31] = sVar126 - sVar32;
  param_1[0x32] = sVar127 - sVar36;
  param_1[0x33] = sVar128 - sVar45;
  param_1[0x3c] = sVar121 - sVar71;
  param_1[0x3d] = sVar73 - sVar34;
  param_1[0x3e] = sVar115 - sVar44;
  param_1[0x3f] = sVar122 - sVar49;
  param_1[0x38] = sVar136 - sVar31;
  param_1[0x39] = sVar69 - sVar42;
  param_1[0x3a] = sVar120 - sVar37;
  param_1[0x3b] = sVar70 - sVar46;
  return;
}



/* Entry: 1081d5a0c; end: 1081d5d97;  */

void FUN_1081d5a0c(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  long lVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar14;
  int iVar12;
  short sVar15;
  undefined8 uVar13;
  short sVar17;
  int iVar16;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  int iVar28;
  short sVar31;
  int iVar29;
  short sVar32;
  undefined8 uVar30;
  short sVar34;
  int iVar33;
  int iVar35;
  undefined8 uVar36;
  int iVar37;
  int iVar38;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  
  lVar5 = 0;
  do {
    psVar3 = (short *)((long)param_1 + lVar5);
    iVar1 = (int)psVar3[7] + (int)*psVar3;
    iVar60 = (int)*psVar3 - (int)psVar3[7];
    iVar2 = (int)psVar3[6] + (int)psVar3[1];
    iVar61 = (int)psVar3[1] - (int)psVar3[6];
    iVar85 = (int)psVar3[5] + (int)psVar3[2];
    iVar12 = (int)psVar3[2] - (int)psVar3[5];
    iVar87 = (int)psVar3[4] + (int)psVar3[3];
    iVar16 = (int)psVar3[3] - (int)psVar3[4];
    sVar6 = (short)iVar87 + (short)iVar1;
    iVar1 = iVar1 - iVar87;
    sVar7 = (short)iVar85 + (short)iVar2;
    iVar2 = iVar2 - iVar85;
    *psVar3 = (sVar6 + sVar7) * 4;
    psVar3[4] = (sVar6 - sVar7) * 4;
    iVar85 = (iVar1 + iVar2) * 0x1151 + 0x400;
    psVar3[2] = (short)((uint)(iVar85 + iVar1 * 0x187e) >> 0xb);
    psVar3[6] = (short)((uint)(iVar85 + iVar2 * 0x7ffc4df) >> 0xb);
    iVar2 = (iVar16 + iVar61 + iVar12 + iVar60) * 0x25a1;
    iVar1 = iVar2 + (iVar16 + iVar61) * -0x3ec5;
    iVar2 = iVar2 + (iVar12 + iVar60) * -0xc7c;
    iVar85 = (iVar16 + iVar60) * -0x1ccd + 0x400;
    psVar3[7] = (short)((uint)(iVar85 + iVar16 * 0x98e + iVar1) >> 0xb);
    iVar87 = (iVar12 + iVar61) * -0x5203 + 0x400;
    psVar3[5] = (short)((uint)(iVar87 + iVar12 * 0x41b3 + iVar2) >> 0xb);
    psVar3[3] = (short)((uint)(iVar87 + iVar61 * 0x6254 + iVar1) >> 0xb);
    psVar3[1] = (short)((uint)(iVar85 + iVar60 * 0x300b + iVar2) >> 0xb);
    lVar5 = lVar5 + 0x10;
  } while ((int)lVar5 != 0x80);
  uVar19 = param_1[1];
  uVar13 = *param_1;
  uVar27 = param_1[3];
  uVar24 = param_1[2];
  uVar36 = param_1[0xf];
  uVar30 = param_1[0xe];
  sVar6 = (short)((ulong)uVar36 >> 0x10);
  sVar7 = (short)((ulong)uVar36 >> 0x20);
  sVar8 = (short)((ulong)uVar36 >> 0x30);
  sVar9 = (short)((ulong)uVar19 >> 0x10);
  sVar10 = (short)((ulong)uVar19 >> 0x20);
  sVar11 = (short)((ulong)uVar19 >> 0x30);
  iVar53 = (int)(short)uVar36 + (int)(short)uVar19;
  iVar57 = (int)sVar6 + (int)sVar9;
  iVar58 = (int)sVar7 + (int)sVar10;
  iVar59 = (int)sVar8 + (int)sVar11;
  sVar31 = (short)((ulong)uVar30 >> 0x10);
  sVar32 = (short)((ulong)uVar30 >> 0x20);
  sVar34 = (short)((ulong)uVar30 >> 0x30);
  sVar14 = (short)((ulong)uVar13 >> 0x10);
  sVar15 = (short)((ulong)uVar13 >> 0x20);
  sVar17 = (short)((ulong)uVar13 >> 0x30);
  iVar62 = (int)(short)uVar30 + (int)(short)uVar13;
  iVar63 = (int)sVar31 + (int)sVar14;
  iVar64 = (int)sVar32 + (int)sVar15;
  iVar65 = (int)sVar34 + (int)sVar17;
  iVar1 = (int)(short)uVar13 - (int)(short)uVar30;
  iVar2 = (int)sVar14 - (int)sVar31;
  iVar21 = (int)sVar15 - (int)sVar32;
  iVar22 = (int)sVar17 - (int)sVar34;
  iVar12 = (int)(short)uVar19 - (int)(short)uVar36;
  iVar16 = (int)sVar9 - (int)sVar6;
  iVar18 = (int)sVar10 - (int)sVar7;
  iVar20 = (int)sVar11 - (int)sVar8;
  sVar6 = (short)((ulong)uVar27 >> 0x10);
  sVar7 = (short)((ulong)uVar27 >> 0x20);
  sVar8 = (short)((ulong)uVar27 >> 0x30);
  iVar85 = (int)*(short *)(param_1 + 0xd) + (int)(short)uVar27;
  iVar87 = (int)*(short *)((long)param_1 + 0x6a) + (int)sVar6;
  iVar74 = (int)*(short *)((long)param_1 + 0x6c) + (int)sVar7;
  iVar75 = (int)*(short *)((long)param_1 + 0x6e) + (int)sVar8;
  sVar9 = (short)((ulong)uVar24 >> 0x10);
  sVar10 = (short)((ulong)uVar24 >> 0x20);
  sVar11 = (short)((ulong)uVar24 >> 0x30);
  iVar76 = (int)*(short *)(param_1 + 0xc) + (int)(short)uVar24;
  iVar77 = (int)*(short *)((long)param_1 + 0x62) + (int)sVar9;
  iVar78 = (int)*(short *)((long)param_1 + 100) + (int)sVar10;
  iVar79 = (int)*(short *)((long)param_1 + 0x66) + (int)sVar11;
  iVar29 = (int)(short)uVar24 - (int)*(short *)(param_1 + 0xc);
  iVar33 = (int)sVar9 - (int)*(short *)((long)param_1 + 0x62);
  iVar35 = (int)sVar10 - (int)*(short *)((long)param_1 + 100);
  iVar37 = (int)sVar11 - (int)*(short *)((long)param_1 + 0x66);
  iVar23 = (int)(short)uVar27 - (int)*(short *)(param_1 + 0xd);
  iVar25 = (int)sVar6 - (int)*(short *)((long)param_1 + 0x6a);
  iVar26 = (int)sVar7 - (int)*(short *)((long)param_1 + 0x6c);
  iVar28 = (int)sVar8 - (int)*(short *)((long)param_1 + 0x6e);
  uVar27 = param_1[7];
  uVar24 = param_1[6];
  uVar36 = param_1[9];
  uVar30 = param_1[8];
  uVar19 = param_1[0xb];
  uVar13 = param_1[10];
  sVar6 = (short)((ulong)uVar19 >> 0x10);
  sVar7 = (short)((ulong)uVar19 >> 0x20);
  sVar8 = (short)((ulong)uVar19 >> 0x30);
  iVar84 = (int)(short)uVar19 + (int)*(short *)(param_1 + 5);
  iVar86 = (int)sVar6 + (int)*(short *)((long)param_1 + 0x2a);
  iVar88 = (int)sVar7 + (int)*(short *)((long)param_1 + 0x2c);
  iVar89 = (int)sVar8 + (int)*(short *)((long)param_1 + 0x2e);
  sVar9 = (short)((ulong)uVar13 >> 0x10);
  sVar10 = (short)((ulong)uVar13 >> 0x20);
  sVar11 = (short)((ulong)uVar13 >> 0x30);
  iVar60 = (int)(short)uVar13 + (int)*(short *)(param_1 + 4);
  iVar61 = (int)sVar9 + (int)*(short *)((long)param_1 + 0x22);
  iVar90 = (int)sVar10 + (int)*(short *)((long)param_1 + 0x24);
  iVar91 = (int)sVar11 + (int)*(short *)((long)param_1 + 0x26);
  iVar49 = (int)*(short *)(param_1 + 4) - (int)(short)uVar13;
  iVar50 = (int)*(short *)((long)param_1 + 0x22) - (int)sVar9;
  iVar51 = (int)*(short *)((long)param_1 + 0x24) - (int)sVar10;
  iVar52 = (int)*(short *)((long)param_1 + 0x26) - (int)sVar11;
  iVar45 = (int)*(short *)(param_1 + 5) - (int)(short)uVar19;
  iVar46 = (int)*(short *)((long)param_1 + 0x2a) - (int)sVar6;
  iVar47 = (int)*(short *)((long)param_1 + 0x2c) - (int)sVar7;
  iVar48 = (int)*(short *)((long)param_1 + 0x2e) - (int)sVar8;
  sVar6 = (short)((ulong)uVar36 >> 0x10);
  sVar7 = (short)((ulong)uVar36 >> 0x20);
  sVar8 = (short)((ulong)uVar36 >> 0x30);
  sVar9 = (short)((ulong)uVar27 >> 0x10);
  sVar10 = (short)((ulong)uVar27 >> 0x20);
  sVar11 = (short)((ulong)uVar27 >> 0x30);
  iVar38 = (int)(short)uVar36 + (int)(short)uVar27;
  iVar42 = (int)sVar6 + (int)sVar9;
  iVar43 = (int)sVar7 + (int)sVar10;
  iVar44 = (int)sVar8 + (int)sVar11;
  sVar31 = (short)((ulong)uVar30 >> 0x10);
  sVar32 = (short)((ulong)uVar30 >> 0x20);
  sVar34 = (short)((ulong)uVar30 >> 0x30);
  sVar14 = (short)((ulong)uVar24 >> 0x10);
  sVar15 = (short)((ulong)uVar24 >> 0x20);
  sVar17 = (short)((ulong)uVar24 >> 0x30);
  iVar92 = (int)(short)uVar30 + (int)(short)uVar24;
  iVar93 = (int)sVar31 + (int)sVar14;
  iVar94 = (int)sVar32 + (int)sVar15;
  iVar95 = (int)sVar34 + (int)sVar17;
  iVar70 = (int)(short)uVar24 - (int)(short)uVar30;
  iVar71 = (int)sVar14 - (int)sVar31;
  iVar72 = (int)sVar15 - (int)sVar32;
  iVar73 = (int)sVar17 - (int)sVar34;
  iVar66 = (int)(short)uVar27 - (int)(short)uVar36;
  iVar67 = (int)sVar9 - (int)sVar6;
  iVar68 = (int)sVar10 - (int)sVar7;
  iVar69 = (int)sVar11 - (int)sVar8;
  iVar80 = iVar92 + iVar62;
  iVar81 = iVar93 + iVar63;
  iVar82 = iVar94 + iVar64;
  iVar83 = iVar95 + iVar65;
  iVar96 = iVar38 + iVar53;
  iVar97 = iVar42 + iVar57;
  iVar98 = iVar43 + iVar58;
  iVar99 = iVar44 + iVar59;
  iVar53 = iVar53 - iVar38;
  iVar57 = iVar57 - iVar42;
  iVar58 = iVar58 - iVar43;
  iVar59 = iVar59 - iVar44;
  iVar62 = iVar62 - iVar92;
  iVar63 = iVar63 - iVar93;
  iVar64 = iVar64 - iVar94;
  iVar65 = iVar65 - iVar95;
  iVar38 = iVar60 + iVar76;
  iVar42 = iVar61 + iVar77;
  iVar43 = iVar90 + iVar78;
  iVar44 = iVar91 + iVar79;
  iVar92 = iVar84 + iVar85;
  iVar93 = iVar86 + iVar87;
  iVar94 = iVar88 + iVar74;
  iVar95 = iVar89 + iVar75;
  iVar85 = iVar85 - iVar84;
  iVar87 = iVar87 - iVar86;
  iVar74 = iVar74 - iVar88;
  iVar75 = iVar75 - iVar89;
  iVar76 = iVar76 - iVar60;
  iVar77 = iVar77 - iVar61;
  iVar78 = iVar78 - iVar90;
  iVar79 = iVar79 - iVar91;
  iVar60 = iVar93 + iVar97;
  auVar39._0_8_ = CONCAT44(iVar42 + iVar81,iVar38 + iVar80);
  auVar39._8_4_ = iVar43 + iVar82;
  auVar39._12_4_ = iVar44 + iVar83;
  auVar40._8_8_ = auVar39._8_8_;
  auVar40._0_8_ = NEON_rshrn(auVar39._0_8_,auVar39,2,4);
  auVar41._4_2_ = (short)iVar60;
  auVar41._0_4_ = iVar92 + iVar96;
  auVar41._6_2_ = (short)((uint)iVar60 >> 0x10);
  auVar41._8_4_ = iVar94 + iVar98;
  auVar41._12_4_ = iVar95 + iVar99;
  auVar41 = NEON_rshrn2(auVar40,auVar41,2,4);
  auVar54._0_8_ = CONCAT44(iVar81 - iVar42,iVar80 - iVar38);
  auVar54._8_4_ = iVar82 - iVar43;
  auVar54._12_4_ = iVar83 - iVar44;
  auVar55._8_8_ = auVar54._8_8_;
  auVar55._0_8_ = NEON_rshrn(auVar54._0_8_,auVar54,2,4);
  auVar56._4_4_ = iVar97 - iVar93;
  auVar56._0_4_ = iVar96 - iVar92;
  auVar56._8_4_ = iVar98 - iVar94;
  auVar56._12_4_ = iVar99 - iVar95;
  auVar56 = NEON_rshrn2(auVar55,auVar56,2,4);
  iVar96 = (iVar62 + iVar76) * 0x1151 + 0x4000;
  iVar97 = (iVar63 + iVar77) * 0x1151 + 0x4000;
  iVar98 = (iVar64 + iVar78) * 0x1151 + 0x4000;
  iVar99 = (iVar65 + iVar79) * 0x1151 + 0x4000;
  iVar43 = (iVar53 + iVar85) * 0x1151 + 0x4000;
  iVar44 = (iVar57 + iVar87) * 0x1151 + 0x4000;
  iVar102 = (iVar58 + iVar74) * 0x1151 + 0x4000;
  iVar104 = (iVar59 + iVar75) * 0x1151 + 0x4000;
  uVar4 = CONCAT22((short)((uint)(iVar44 + iVar57 * 0x187e) >> 0xf),
                   (short)((uint)(iVar43 + iVar53 * 0x187e) >> 0xf));
  iVar94 = (iVar66 + iVar23 + iVar45 + iVar12) * 0x25a1;
  iVar95 = (iVar67 + iVar25 + iVar46 + iVar16) * 0x25a1;
  iVar80 = (iVar68 + iVar26 + iVar47 + iVar18) * 0x25a1;
  iVar81 = (iVar69 + iVar28 + iVar48 + iVar20) * 0x25a1;
  iVar82 = (iVar70 + iVar29 + iVar49 + iVar1) * 0x25a1;
  iVar83 = (iVar71 + iVar33 + iVar50 + iVar2) * 0x25a1;
  iVar84 = (iVar72 + iVar35 + iVar51 + iVar21) * 0x25a1;
  iVar86 = (iVar73 + iVar37 + iVar52 + iVar22) * 0x25a1;
  iVar106 = iVar82 + (iVar70 + iVar29) * -0x3ec5;
  iVar107 = iVar83 + (iVar71 + iVar33) * -0x3ec5;
  iVar108 = iVar84 + (iVar72 + iVar35) * -0x3ec5;
  iVar109 = iVar86 + (iVar73 + iVar37) * -0x3ec5;
  iVar100 = iVar94 + (iVar66 + iVar23) * -0x3ec5;
  iVar101 = iVar95 + (iVar67 + iVar25) * -0x3ec5;
  iVar103 = iVar80 + (iVar68 + iVar26) * -0x3ec5;
  iVar105 = iVar81 + (iVar69 + iVar28) * -0x3ec5;
  iVar82 = iVar82 + (iVar49 + iVar1) * -0xc7c;
  iVar83 = iVar83 + (iVar50 + iVar2) * -0xc7c;
  iVar84 = iVar84 + (iVar51 + iVar21) * -0xc7c;
  iVar86 = iVar86 + (iVar52 + iVar22) * -0xc7c;
  iVar94 = iVar94 + (iVar45 + iVar12) * -0xc7c;
  iVar95 = iVar95 + (iVar46 + iVar16) * -0xc7c;
  iVar80 = iVar80 + (iVar47 + iVar18) * -0xc7c;
  iVar81 = iVar81 + (iVar48 + iVar20) * -0xc7c;
  iVar60 = (iVar66 + iVar12) * -0x1ccd + 0x4000;
  iVar61 = (iVar67 + iVar16) * -0x1ccd + 0x4000;
  iVar38 = (iVar68 + iVar18) * -0x1ccd + 0x4000;
  iVar42 = (iVar69 + iVar20) * -0x1ccd + 0x4000;
  iVar88 = (iVar70 + iVar1) * -0x1ccd + 0x4000;
  iVar89 = (iVar71 + iVar2) * -0x1ccd + 0x4000;
  iVar90 = (iVar72 + iVar21) * -0x1ccd + 0x4000;
  iVar91 = (iVar73 + iVar22) * -0x1ccd + 0x4000;
  param_1[0xd] = CONCAT26((short)((uint)(iVar104 + iVar75 * 0x7fffc4df) >> 0xf),
                          CONCAT24((short)((uint)(iVar102 + iVar74 * 0x7fffc4df) >> 0xf),
                                   CONCAT22((short)((uint)(iVar44 + iVar87 * 0x7fffc4df) >> 0xf),
                                            (short)((uint)(iVar43 + iVar85 * 0x7fffc4df) >> 0xf))));
  param_1[0xc] = CONCAT26((short)((uint)(iVar99 + iVar79 * 0x7fffc4df) >> 0xf),
                          CONCAT24((short)((uint)(iVar98 + iVar78 * 0x7fffc4df) >> 0xf),
                                   CONCAT22((short)((uint)(iVar97 + iVar77 * 0x7fffc4df) >> 0xf),
                                            (short)((uint)(iVar96 + iVar76 * 0x7fffc4df) >> 0xf))));
  param_1[0xf] = CONCAT26((short)((uint)(iVar42 + iVar69 * 0x98e + iVar105) >> 0xf),
                          CONCAT24((short)((uint)(iVar38 + iVar68 * 0x98e + iVar103) >> 0xf),
                                   CONCAT22((short)((uint)(iVar61 + iVar67 * 0x98e + iVar101) >> 0xf
                                                   ),(short)((uint)(iVar60 + iVar66 * 0x98e +
                                                                   iVar100) >> 0xf))));
  param_1[0xe] = CONCAT26((short)((uint)(iVar91 + iVar73 * 0x98e + iVar109) >> 0xf),
                          CONCAT24((short)((uint)(iVar90 + iVar72 * 0x98e + iVar108) >> 0xf),
                                   CONCAT22((short)((uint)(iVar89 + iVar71 * 0x98e + iVar107) >> 0xf
                                                   ),(short)((uint)(iVar88 + iVar70 * 0x98e +
                                                                   iVar106) >> 0xf))));
  iVar53 = (iVar45 + iVar23) * -0x5203 + 0x4000;
  iVar57 = (iVar46 + iVar25) * -0x5203 + 0x4000;
  iVar92 = (iVar47 + iVar26) * -0x5203 + 0x4000;
  iVar93 = (iVar48 + iVar28) * -0x5203 + 0x4000;
  iVar85 = (iVar49 + iVar29) * -0x5203 + 0x4000;
  iVar87 = (iVar50 + iVar33) * -0x5203 + 0x4000;
  iVar43 = (iVar51 + iVar35) * -0x5203 + 0x4000;
  iVar44 = (iVar52 + iVar37) * -0x5203 + 0x4000;
  param_1[9] = auVar56._8_8_;
  param_1[8] = auVar56._0_8_;
  param_1[0xb] = CONCAT26((short)((uint)(iVar93 + iVar48 * 0x41b3 + iVar81) >> 0xf),
                          CONCAT24((short)((uint)(iVar92 + iVar47 * 0x41b3 + iVar80) >> 0xf),
                                   CONCAT22((short)((uint)(iVar57 + iVar46 * 0x41b3 + iVar95) >> 0xf
                                                   ),(short)((uint)(iVar53 + iVar45 * 0x41b3 +
                                                                   iVar94) >> 0xf))));
  param_1[10] = CONCAT26((short)((uint)(iVar44 + iVar52 * 0x41b3 + iVar86) >> 0xf),
                         CONCAT24((short)((uint)(iVar43 + iVar51 * 0x41b3 + iVar84) >> 0xf),
                                  CONCAT22((short)((uint)(iVar87 + iVar50 * 0x41b3 + iVar83) >> 0xf)
                                           ,(short)((uint)(iVar85 + iVar49 * 0x41b3 + iVar82) >> 0xf
                                                   ))));
  param_1[5] = CONCAT44((int)(CONCAT26((short)((uint)(iVar104 + iVar59 * 0x187e) >> 0xf),
                                       CONCAT24((short)((uint)(iVar102 + iVar58 * 0x187e) >> 0xf),
                                                uVar4)) >> 0x20),uVar4);
  param_1[4] = CONCAT26((short)((uint)(iVar99 + iVar65 * 0x187e) >> 0xf),
                        CONCAT24((short)((uint)(iVar98 + iVar64 * 0x187e) >> 0xf),
                                 CONCAT22((short)((uint)(iVar97 + iVar63 * 0x187e) >> 0xf),
                                          (short)((uint)(iVar96 + iVar62 * 0x187e) >> 0xf))));
  param_1[7] = CONCAT26((short)((uint)(iVar93 + iVar28 * 0x6254 + iVar105) >> 0xf),
                        CONCAT24((short)((uint)(iVar92 + iVar26 * 0x6254 + iVar103) >> 0xf),
                                 CONCAT22((short)((uint)(iVar57 + iVar25 * 0x6254 + iVar101) >> 0xf)
                                          ,(short)((uint)(iVar53 + iVar23 * 0x6254 + iVar100) >> 0xf
                                                  ))));
  param_1[6] = CONCAT26((short)((uint)(iVar44 + iVar37 * 0x6254 + iVar109) >> 0xf),
                        CONCAT24((short)((uint)(iVar43 + iVar35 * 0x6254 + iVar108) >> 0xf),
                                 CONCAT22((short)((uint)(iVar87 + iVar33 * 0x6254 + iVar107) >> 0xf)
                                          ,(short)((uint)(iVar85 + iVar29 * 0x6254 + iVar106) >> 0xf
                                                  ))));
  param_1[1] = auVar41._8_8_;
  *param_1 = auVar41._0_8_;
  param_1[3] = CONCAT26((short)((uint)(iVar42 + iVar20 * 0x300b + iVar81) >> 0xf),
                        CONCAT24((short)((uint)(iVar38 + iVar18 * 0x300b + iVar80) >> 0xf),
                                 CONCAT22((short)((uint)(iVar61 + iVar16 * 0x300b + iVar95) >> 0xf),
                                          (short)((uint)(iVar60 + iVar12 * 0x300b + iVar94) >> 0xf))
                                ));
  param_1[2] = CONCAT26((short)((uint)(iVar91 + iVar22 * 0x300b + iVar86) >> 0xf),
                        CONCAT24((short)((uint)(iVar90 + iVar21 * 0x300b + iVar84) >> 0xf),
                                 CONCAT22((short)((uint)(iVar89 + iVar2 * 0x300b + iVar83) >> 0xf),
                                          (short)((uint)(iVar88 + iVar1 * 0x300b + iVar82) >> 0xf)))
                       );
  return;
}



/* Entry: 1081d5d98; end: 1081d6137;  */

void FUN_1081d5d98(long param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  bool bVar37;
  bool bVar38;
  long lVar39;
  ulong uVar40;
  byte *pbVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  short *psVar45;
  ushort *puVar46;
  long *plVar47;
  long *plVar48;
  uint uVar49;
  ulong uVar50;
  long lVar51;
  float *pfVar52;
  long lVar53;
  uint *puVar54;
  float *pfVar55;
  uint uVar56;
  int iVar57;
  long lVar58;
  short *psVar59;
  short sVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  undefined1 uVar64;
  uint uVar65;
  long lVar66;
  int *piVar67;
  long lVar68;
  int iVar69;
  ulong uVar70;
  short sVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  int iVar76;
  ulong unaff_x24;
  long lVar77;
  int iVar78;
  ulong unaff_x25;
  long lVar79;
  long lVar80;
  long lVar81;
  ulong unaff_x26;
  long lVar82;
  int iVar83;
  ulong unaff_x27;
  ulong unaff_x28;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  int aiStack_1978 [8];
  uint auStack_1958 [16];
  long lStack_1918;
  ulong uStack_1910;
  ulong uStack_1908;
  ulong uStack_1900;
  int *piStack_18f8;
  undefined8 ****ppppuStack_18f0;
  code *pcStack_18e8;
  uint auStack_18d8 [32];
  long lStack_1858;
  ulong uStack_1850;
  ulong uStack_1848;
  ulong uStack_1840;
  ulong uStack_1838;
  ulong uStack_1830;
  ulong uStack_1828;
  ulong uStack_1820;
  undefined8 uStack_1818;
  undefined8 ****ppppuStack_1810;
  code *pcStack_1808;
  long lStack_1800;
  undefined4 uStack_17f4;
  ulong uStack_17f0;
  long lStack_17e8;
  ulong uStack_17e0;
  long lStack_17d8;
  int aiStack_17d0 [128];
  long lStack_15d0;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  ulong uStack_15a0;
  ulong uStack_1598;
  undefined8 uStack_1590;
  ulong uStack_1588;
  ulong uStack_1580;
  ulong uStack_1578;
  undefined8 ****ppppuStack_1570;
  undefined8 uStack_1568;
  long lStack_1558;
  undefined4 uStack_154c;
  ulong uStack_1548;
  long lStack_1540;
  ulong uStack_1538;
  uint auStack_1530 [120];
  long lStack_1350;
  ulong uStack_1340;
  ulong uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  long lStack_1300;
  ulong uStack_12f8;
  undefined8 ****ppppuStack_12f0;
  undefined8 uStack_12e8;
  long lStack_12d8;
  undefined4 uStack_12cc;
  long lStack_12c8;
  uint auStack_12c0 [112];
  long lStack_1100;
  undefined8 uStack_10f0;
  ulong uStack_10e8;
  ulong uStack_10e0;
  ulong uStack_10d8;
  ulong uStack_10d0;
  undefined8 uStack_10c8;
  ulong uStack_10c0;
  undefined8 uStack_10b8;
  ulong uStack_10b0;
  ulong uStack_10a8;
  undefined8 ****ppppuStack_10a0;
  undefined8 uStack_1098;
  long lStack_1088;
  undefined4 uStack_107c;
  ulong uStack_1078;
  int aiStack_1070 [104];
  long lStack_ed0;
  ulong uStack_ec0;
  ulong uStack_eb8;
  undefined1 *puStack_eb0;
  ulong uStack_ea8;
  ulong uStack_ea0;
  ulong uStack_e98;
  ulong uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 ****ppppuStack_e70;
  undefined8 uStack_e68;
  long lStack_e58;
  uint uStack_e4c;
  ulong uStack_e48;
  uint auStack_e40 [96];
  long lStack_cc0;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  long *plStack_c70;
  ulong uStack_c68;
  undefined8 ****ppppuStack_c60;
  undefined8 uStack_c58;
  long lStack_c48;
  undefined4 uStack_c3c;
  long *plStack_c38;
  int aiStack_c30 [88];
  long lStack_ad0;
  ulong uStack_ac0;
  ulong uStack_ab8;
  ulong uStack_ab0;
  ulong uStack_aa8;
  ulong uStack_aa0;
  ulong uStack_a98;
  ulong uStack_a90;
  undefined1 *puStack_a88;
  ulong uStack_a80;
  undefined8 uStack_a78;
  undefined8 ****ppppuStack_a70;
  undefined8 uStack_a68;
  long lStack_a60;
  undefined4 uStack_a54;
  uint auStack_a50 [80];
  long lStack_910;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  undefined8 uStack_8c0;
  ulong uStack_8b8;
  undefined8 ****ppppuStack_8b0;
  undefined8 uStack_8a8;
  long lStack_8a0;
  uint uStack_894;
  int aiStack_890 [72];
  long lStack_770;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  long lStack_738;
  long lStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  undefined8 ****ppppuStack_710;
  code *pcStack_708;
  int aiStack_6fc [9];
  long lStack_6d8;
  undefined8 ****ppppuStack_6d0;
  code *pcStack_6c8;
  int aiStack_6bc [10];
  undefined4 auStack_694 [5];
  undefined4 auStack_680 [5];
  undefined4 auStack_66c [5];
  long lStack_658;
  long lStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  undefined8 ****ppppuStack_630;
  code *pcStack_628;
  int aiStack_618 [12];
  undefined4 auStack_5e8 [6];
  undefined4 auStack_5d0 [6];
  int aiStack_5b8 [6];
  undefined4 auStack_5a0 [6];
  long lStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  undefined1 *puStack_558;
  undefined1 ****ppppuStack_550;
  code *pcStack_548;
  long lStack_540;
  undefined4 uStack_538;
  int aiStack_534 [14];
  undefined4 auStack_4fc [7];
  undefined4 auStack_4e0 [7];
  undefined4 auStack_4c4 [7];
  undefined4 auStack_4a8 [7];
  undefined4 auStack_48c [7];
  long lStack_470;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  long lStack_420;
  ulong uStack_418;
  undefined1 ***pppuStack_410;
  undefined8 uStack_408;
  long lStack_400;
  uint uStack_3f4;
  int aiStack_3f0 [64];
  long lStack_2f0;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  uint auStack_278 [64];
  long lStack_178;
  undefined1 *puStack_140;
  code *pcStack_138;
  float afStack_128 [64];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar51 = *(long *)(param_1 + 0x1a8);
  pfVar52 = *(float **)(param_2 + 0x58);
  psVar45 = (short *)(param_3 + 0x40);
  pfVar55 = afStack_128;
  uVar56 = 9;
  do {
    sVar60 = psVar45[-8];
    if (psVar45[-0x18] == 0 && psVar45[-0x10] == 0) {
      fVar88 = 0.0;
      if (sVar60 != 0) goto LAB_1081d5e44;
      if ((((*psVar45 != 0) || (psVar45[8] != 0)) || (psVar45[0x10] != 0)) || (psVar45[0x18] != 0))
      {
        sVar60 = 0;
        goto LAB_1081d5e44;
      }
      fVar92 = *pfVar52 * 0.125 * (float)(int)psVar45[-0x20];
      *pfVar55 = fVar92;
      pfVar55[8] = fVar92;
      pfVar55[0x10] = fVar92;
      pfVar55[0x18] = fVar92;
      pfVar55[0x20] = fVar92;
      pfVar55[0x28] = fVar92;
      pfVar55[0x30] = fVar92;
      lVar58 = 0xe0;
    }
    else {
      fVar88 = (float)(int)psVar45[-0x10];
LAB_1081d5e44:
      fVar89 = *pfVar52 * 0.125 * (float)(int)psVar45[-0x20];
      fVar88 = pfVar52[0x10] * 0.125 * fVar88;
      fVar90 = pfVar52[0x20] * 0.125 * (float)(int)*psVar45;
      fVar91 = pfVar52[0x30] * 0.125 * (float)(int)psVar45[0x10];
      fVar92 = fVar89 + fVar90;
      fVar89 = fVar89 - fVar90;
      fVar90 = fVar88 + fVar91;
      fVar88 = (fVar88 - fVar91) * 1.4142135 - fVar90;
      fVar91 = fVar92 + fVar90;
      fVar92 = fVar92 - fVar90;
      fVar90 = fVar89 + fVar88;
      fVar89 = fVar89 - fVar88;
      fVar88 = pfVar52[8] * 0.125 * (float)(int)psVar45[-0x18];
      fVar93 = pfVar52[0x18] * 0.125 * (float)(int)sVar60;
      fVar94 = pfVar52[0x28] * 0.125 * (float)(int)psVar45[8];
      fVar96 = pfVar52[0x38] * 0.125 * (float)(int)psVar45[0x18];
      fVar97 = fVar93 + fVar94;
      fVar94 = fVar94 - fVar93;
      fVar95 = fVar88 + fVar96;
      fVar88 = fVar88 - fVar96;
      fVar96 = fVar97 + fVar95;
      fVar98 = (fVar94 + fVar88) * 1.847759;
      fVar93 = (fVar98 + fVar94 * -2.613126) - fVar96;
      fVar94 = (fVar95 - fVar97) * 1.4142135 - fVar93;
      fVar88 = (fVar98 + fVar88 * -1.0823922) - fVar94;
      *pfVar55 = fVar91 + fVar96;
      pfVar55[0x38] = fVar91 - fVar96;
      pfVar55[8] = fVar90 + fVar93;
      pfVar55[0x30] = fVar90 - fVar93;
      pfVar55[0x10] = fVar89 + fVar94;
      pfVar55[0x28] = fVar89 - fVar94;
      pfVar55[0x18] = fVar92 + fVar88;
      fVar92 = fVar92 - fVar88;
      lVar58 = 0x80;
    }
    *(float *)((long)pfVar55 + lVar58) = fVar92;
    pfVar55 = pfVar55 + 1;
    pfVar52 = pfVar52 + 1;
    uVar56 = uVar56 - 1;
    psVar45 = psVar45 + 1;
  } while (1 < uVar56);
  lVar58 = 0;
  do {
    puVar2 = (undefined1 *)(*(long *)((long)param_4 + lVar58) + (param_5 & 0xffffffff));
    fVar88 = afStack_128[lVar58] + 128.5 + afStack_128[lVar58 + 4];
    fVar89 = afStack_128[lVar58 + 2] + afStack_128[lVar58 + 6];
    fVar92 = (afStack_128[lVar58] + 128.5) - afStack_128[lVar58 + 4];
    fVar93 = (afStack_128[lVar58 + 2] - afStack_128[lVar58 + 6]) * 1.4142135 - fVar89;
    fVar95 = afStack_128[lVar58 + 5] + afStack_128[lVar58 + 3];
    fVar90 = afStack_128[lVar58 + 5] - afStack_128[lVar58 + 3];
    fVar94 = fVar88 + fVar89;
    fVar88 = fVar88 - fVar89;
    fVar91 = afStack_128[lVar58 + 1] + afStack_128[lVar58 + 7];
    fVar89 = afStack_128[lVar58 + 1] - afStack_128[lVar58 + 7];
    fVar97 = fVar95 + fVar91;
    fVar96 = fVar92 + fVar93;
    fVar92 = fVar92 - fVar93;
    fVar93 = (fVar90 + fVar89) * 1.847759;
    fVar90 = (fVar93 + fVar90 * -2.613126) - fVar97;
    fVar91 = (fVar91 - fVar95) * 1.4142135 - fVar90;
    *puVar2 = *(undefined1 *)(lVar51 + ((ulong)(uint)(int)(fVar94 + fVar97) & 0x3ff));
    puVar2[7] = *(undefined1 *)(lVar51 + ((ulong)(uint)(int)(fVar94 - fVar97) & 0x3ff));
    puVar2[1] = *(undefined1 *)(lVar51 + ((ulong)(uint)(int)(fVar96 + fVar90) & 0x3ff));
    puVar2[6] = *(undefined1 *)(lVar51 + ((ulong)(uint)(int)(fVar96 - fVar90) & 0x3ff));
    puVar2[2] = *(undefined1 *)(lVar51 + ((ulong)(uint)(int)(fVar92 + fVar91) & 0x3ff));
    fVar89 = (fVar93 + fVar89 * -1.0823922) - fVar91;
    puVar2[5] = *(undefined1 *)(lVar51 + ((ulong)(uint)(int)(fVar92 - fVar91) & 0x3ff));
    puVar2[3] = *(undefined1 *)(lVar51 + ((ulong)(uint)(int)(fVar88 + fVar89) & 0x3ff));
    puVar2[4] = *(undefined1 *)(lVar51 + ((ulong)(uint)(int)(fVar88 - fVar89) & 0x3ff));
    lVar58 = lVar58 + 8;
  } while (lVar58 != 0x40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puStack_140 = &stack0xfffffffffffffff0;
  pcStack_138 = FUN_1081d6138;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar51 = *(long *)(param_1 + 0x1a8);
  psVar59 = *(short **)(param_2 + 0x58);
  psVar45 = (short *)(param_3 + 0x40);
  puVar54 = auStack_278;
  uVar56 = 9;
  do {
    sVar60 = psVar45[-0x10];
    sVar71 = psVar45[-8];
    if (psVar45[-0x18] == 0 && sVar60 == 0) {
      if (sVar71 != 0) {
LAB_1081d61d4:
        sVar60 = 0;
        goto LAB_1081d61e0;
      }
      if (((*psVar45 != 0) || (psVar45[8] != 0)) || ((psVar45[0x10] != 0 || (psVar45[0x18] != 0))))
      {
        sVar71 = 0;
        goto LAB_1081d61d4;
      }
      uVar65 = (int)*psVar59 * (int)psVar45[-0x20];
      *puVar54 = uVar65;
      puVar54[8] = uVar65;
      puVar54[0x10] = uVar65;
      puVar54[0x18] = uVar65;
      puVar54[0x20] = uVar65;
      puVar54[0x28] = uVar65;
      puVar54[0x30] = uVar65;
      lVar58 = 0xe0;
    }
    else {
LAB_1081d61e0:
      sVar13 = psVar59[8] * psVar45[-0x18];
      sVar12 = psVar59[0x28] * psVar45[8] + psVar59[0x18] * sVar71;
      sVar31 = psVar59[0x28] * psVar45[8] - psVar59[0x18] * sVar71;
      sVar71 = psVar59[0x38] * psVar45[0x18] + sVar13;
      iVar69 = (int)(short)(sVar13 - psVar59[0x38] * psVar45[0x18]);
      uVar65 = (iVar69 + sVar31) * 0x1d900 & 0xffff0000;
      sVar13 = sVar71 + sVar12;
      sVar36 = (short)(uVar65 + sVar31 * -0x29d00 >> 0x10) - sVar13;
      sVar35 = (short)((uint)(((int)sVar71 - (int)sVar12) * 0x16a00) >> 0x10) - sVar36;
      sVar31 = sVar35 + (short)(iVar69 * 0x11500 - uVar65 >> 0x10);
      sVar71 = psVar59[0x20] * *psVar45 + *psVar59 * psVar45[-0x20];
      sVar12 = psVar59[0x30] * psVar45[0x10] + psVar59[0x10] * sVar60;
      sVar32 = sVar12 + sVar71;
      sVar34 = *psVar59 * psVar45[-0x20] - psVar59[0x20] * *psVar45;
      sVar33 = (short)((uint)(((int)(short)(psVar59[0x10] * sVar60) -
                              (int)(short)(psVar59[0x30] * psVar45[0x10])) * 0x16a00) >> 0x10) -
               sVar12;
      sVar60 = sVar33 + sVar34;
      sVar34 = sVar34 - sVar33;
      sVar71 = sVar71 - sVar12;
      *puVar54 = (int)sVar13 + (int)sVar32;
      puVar54[0x38] = (int)sVar32 - (int)sVar13;
      puVar54[8] = (int)sVar36 + (int)sVar60;
      puVar54[0x30] = (int)sVar60 - (int)sVar36;
      puVar54[0x10] = (int)sVar35 + (int)sVar34;
      puVar54[0x28] = (int)sVar34 - (int)sVar35;
      puVar54[0x20] = (int)sVar31 + (int)sVar71;
      uVar65 = (int)sVar71 - (int)sVar31;
      lVar58 = 0x60;
    }
    *(uint *)((long)puVar54 + lVar58) = uVar65;
    puVar54 = puVar54 + 1;
    psVar59 = psVar59 + 1;
    uVar56 = uVar56 - 1;
    psVar45 = psVar45 + 1;
  } while (1 < uVar56);
  lVar58 = 0;
  lVar51 = lVar51 + 0x80;
  do {
    plVar48 = param_4 + 1;
    puVar3 = (undefined4 *)(*param_4 + (param_5 & 0xffffffff));
    iVar69 = *(int *)((long)auStack_278 + lVar58 + 4);
    iVar57 = *(int *)((long)auStack_278 + lVar58 + 8);
    iVar76 = *(int *)((long)auStack_278 + lVar58 + 0xc);
    if (iVar69 == 0 && iVar57 == 0) {
      if (iVar76 != 0) {
LAB_1081d63c4:
        iVar57 = 0;
        goto LAB_1081d63c8;
      }
      if (((*(int *)((long)auStack_278 + lVar58 + 0x10) != 0) ||
          (*(int *)((long)auStack_278 + lVar58 + 0x14) != 0)) ||
         ((*(int *)((long)auStack_278 + lVar58 + 0x18) != 0 ||
          (*(int *)((long)auStack_278 + lVar58 + 0x1c) != 0)))) {
        iVar76 = 0;
        goto LAB_1081d63c4;
      }
      uVar64 = *(undefined1 *)
                (lVar51 + ((ulong)(*(uint *)((long)auStack_278 + lVar58) >> 5) & 0x3ff));
      *puVar3 = CONCAT13(uVar64,CONCAT12(uVar64,CONCAT11(uVar64,uVar64)));
      *(undefined1 *)(puVar3 + 1) = uVar64;
      *(undefined1 *)((long)puVar3 + 5) = uVar64;
      *(undefined1 *)((long)puVar3 + 6) = uVar64;
      lVar39 = 7;
      uVar56 = 0;
      uVar26 = 0;
      uVar40 = 0;
    }
    else {
LAB_1081d63c8:
      uVar56 = *(uint *)((long)auStack_278 + lVar58);
      iVar4 = *(int *)((long)auStack_278 + lVar58 + 0x10);
      iVar6 = *(int *)((long)auStack_278 + lVar58 + 0x14);
      iVar78 = iVar4 + uVar56;
      iVar4 = uVar56 - iVar4;
      iVar5 = *(int *)((long)auStack_278 + lVar58 + 0x18);
      iVar7 = *(int *)((long)auStack_278 + lVar58 + 0x1c);
      iVar83 = iVar5 + iVar57;
      iVar1 = iVar83 + iVar78;
      iVar78 = iVar78 - iVar83;
      iVar57 = ((int)(short)iVar57 - (int)(short)iVar5) * 0x16a00 + iVar83 * -0x10000 >> 0x10;
      iVar83 = iVar4 + iVar57;
      uVar26 = iVar4 - iVar57;
      iVar57 = iVar76 + iVar6;
      sVar60 = (short)iVar6 - (short)iVar76;
      iVar76 = iVar7 + iVar69;
      iVar4 = iVar76 + iVar57;
      iVar5 = (int)(short)((short)iVar69 - (short)iVar7);
      uVar65 = (iVar5 + sVar60) * 0x1d900 & 0xffff0000;
      uVar56 = sVar60 * -0x29d00 + iVar4 * -0x10000 + uVar65;
      *(undefined1 *)puVar3 =
           *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar4 + iVar1) >> 5) & 0x3ff));
      *(undefined1 *)((long)puVar3 + 7) =
           *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar1 - iVar4) >> 5) & 0x3ff));
      iVar69 = (int)uVar56 >> 0x10;
      *(undefined1 *)((long)puVar3 + 1) =
           *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar83 + iVar69) >> 5) & 0x3ff));
      uVar56 = ((int)(short)iVar76 - (int)(short)iVar57) * 0x16a00 - (uVar56 & 0xffff0000);
      *(undefined1 *)((long)puVar3 + 6) =
           *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar83 - iVar69) >> 5) & 0x3ff));
      *(undefined1 *)((long)puVar3 + 2) =
           *(undefined1 *)(lVar51 + ((ulong)(uVar26 + ((int)uVar56 >> 0x10) >> 5) & 0x3ff));
      *(undefined1 *)((long)puVar3 + 5) =
           *(undefined1 *)(lVar51 + ((ulong)(uVar26 - ((int)uVar56 >> 0x10) >> 5) & 0x3ff));
      iVar69 = (int)((iVar5 * 0x11500 - uVar65) + (uVar56 & 0xffff0000)) >> 0x10;
      bVar9 = *(byte *)(lVar51 + ((ulong)((uint)(iVar78 + iVar69) >> 5) & 0x3ff));
      uVar40 = (ulong)bVar9;
      *(byte *)(puVar3 + 1) = bVar9;
      uVar64 = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar78 - iVar69) >> 5) & 0x3ff));
      lVar39 = 3;
    }
    uVar42 = (ulong)uVar26;
    *(undefined1 *)((long)puVar3 + lVar39) = uVar64;
    lVar58 = lVar58 + 0x20;
    param_4 = plVar48;
  } while (lVar58 != 0x100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_290 = &puStack_140;
  pcStack_288 = FUN_1081d6548;
  uStack_3f4 = uVar56;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_400 = *(long *)(lVar39 + 0x1a8);
  psVar45 = (short *)(uVar42 + 0x40);
  piVar67 = aiStack_3f0;
  uVar65 = 9;
  psVar59 = *(short **)(uVar40 + 0x58);
  do {
    sVar60 = psVar45[-0x18];
    sVar71 = psVar45[-8];
    if (sVar60 == 0 && psVar45[-0x10] == 0) {
      if (sVar71 != 0) {
LAB_1081d65f4:
        iVar69 = 0;
        goto LAB_1081d6600;
      }
      if ((((*psVar45 != 0) || (psVar45[8] != 0)) || (psVar45[0x10] != 0)) || (psVar45[0x18] != 0))
      {
        sVar71 = 0;
        goto LAB_1081d65f4;
      }
      iVar69 = (int)psVar45[-0x20] * (int)*psVar59 * 4;
      *piVar67 = iVar69;
      piVar67[8] = iVar69;
      piVar67[0x10] = iVar69;
      piVar67[0x18] = iVar69;
      piVar67[0x20] = iVar69;
      piVar67[0x28] = iVar69;
      piVar67[0x30] = iVar69;
      lVar51 = 0xe0;
    }
    else {
      iVar69 = (int)psVar45[-0x10];
LAB_1081d6600:
      lVar51 = ((long)iVar69 * (long)(int)psVar59[0x10] +
               (long)(int)psVar59[0x30] * (long)(int)psVar45[0x10]) * 0x1151;
      lVar74 = lVar51 + (long)((int)psVar59[0x30] * (int)psVar45[0x10]) * -0x3b21;
      unaff_x25 = lVar51 + (long)(int)((long)iVar69 * (long)(int)psVar59[0x10]) * 0x187e;
      unaff_x27 = (long)(int)*psVar59 * (long)(int)psVar45[-0x20] +
                  (long)(int)psVar59[0x20] * (long)(int)*psVar45;
      unaff_x26 = (long)(int)*psVar59 * (long)(int)psVar45[-0x20] -
                  (long)(int)psVar59[0x20] * (long)(int)*psVar45;
      unaff_x24 = unaff_x26 * 0x2000 - lVar74;
      unaff_x28 = (long)(int)psVar59[0x38] * (long)(int)psVar45[0x18];
      lVar51 = (long)(int)psVar59[0x28] * (long)(int)psVar45[8];
      sVar12 = psVar59[0x18];
      sVar13 = psVar59[8];
      lVar39 = unaff_x28 + (long)(int)sVar12 * (long)(int)sVar71;
      lVar58 = lVar51 + (long)(int)sVar13 * (long)(int)sVar60;
      lVar68 = (lVar58 + lVar39) * 0x25a1;
      lVar62 = (unaff_x28 + (long)(int)sVar13 * (long)(int)sVar60) * -0x1ccd;
      lVar63 = (lVar51 + (long)(int)sVar12 * (long)(int)sVar71) * -0x5203;
      lVar72 = lVar68 + lVar39 * -0x3ec5;
      lVar68 = lVar68 + lVar58 * -0xc7c;
      lVar58 = lVar62 + (long)(int)unaff_x28 * 0x98e + lVar72;
      lVar39 = lVar63 + (long)(int)lVar51 * 0x41b3 + lVar68;
      lVar72 = lVar63 + (long)((int)sVar12 * (int)sVar71) * 0x6254 + lVar72;
      lVar68 = lVar62 + (long)((int)sVar13 * (int)sVar60) * 0x300b + lVar68;
      lVar51 = unaff_x25 + unaff_x27 * 0x2000 + 0x400;
      *piVar67 = (int)((ulong)(lVar68 + lVar51) >> 0xb);
      piVar67[0x38] = (int)((ulong)(lVar51 - lVar68) >> 0xb);
      lVar51 = lVar74 + unaff_x26 * 0x2000 + 0x400;
      piVar67[8] = (int)((ulong)(lVar72 + lVar51) >> 0xb);
      piVar67[0x30] = (int)((ulong)(lVar51 - lVar72) >> 0xb);
      piVar67[0x10] = (int)(lVar39 + unaff_x24 + 0x400 >> 0xb);
      piVar67[0x28] = (int)((unaff_x24 + 0x400) - lVar39 >> 0xb);
      lVar51 = (unaff_x27 * 0x2000 - unaff_x25) + 0x400;
      piVar67[0x18] = (int)((ulong)(lVar58 + lVar51) >> 0xb);
      iVar69 = (int)((ulong)(lVar51 - lVar58) >> 0xb);
      lVar51 = 0x80;
    }
    *(int *)((long)piVar67 + lVar51) = iVar69;
    piVar67 = piVar67 + 1;
    psVar59 = psVar59 + 1;
    uVar65 = uVar65 - 1;
    psVar45 = psVar45 + 1;
  } while (1 < uVar65);
  lVar58 = 0;
  lVar51 = lStack_400 + 0x80;
  lVar39 = 0x300b;
  lVar72 = 0xffffe333;
  lVar68 = 0xffffadfd;
  uVar40 = (ulong)uVar56;
  do {
    plVar47 = plVar48 + 1;
    pbVar41 = (byte *)(*plVar48 + uVar40);
    iVar69 = *(int *)((long)aiStack_3f0 + lVar58 + 4);
    iVar57 = *(int *)((long)aiStack_3f0 + lVar58 + 8);
    iVar76 = *(int *)((long)aiStack_3f0 + lVar58 + 0xc);
    if (iVar69 == 0 && iVar57 == 0) {
      if (iVar76 != 0) {
LAB_1081d6824:
        iVar57 = 0;
        goto LAB_1081d6828;
      }
      if (((*(int *)((long)aiStack_3f0 + lVar58 + 0x10) != 0) ||
          (*(int *)((long)aiStack_3f0 + lVar58 + 0x14) != 0)) ||
         ((*(int *)((long)aiStack_3f0 + lVar58 + 0x18) != 0 ||
          (*(int *)((long)aiStack_3f0 + lVar58 + 0x1c) != 0)))) {
        iVar76 = 0;
        goto LAB_1081d6824;
      }
      bVar9 = *(byte *)(lVar51 + ((ulong)(*(int *)((long)aiStack_3f0 + lVar58) + 0x10U >> 5) & 0x3ff
                                 ));
      pbVar41[4] = bVar9;
      *(uint *)pbVar41 = CONCAT13(bVar9,CONCAT12(bVar9,CONCAT11(bVar9,bVar9)));
      pbVar41[5] = bVar9;
      pbVar41[6] = bVar9;
      lVar62 = 7;
      uVar26 = 0;
      uVar42 = 0;
      uVar70 = 0;
    }
    else {
LAB_1081d6828:
      iVar78 = *(int *)((long)aiStack_3f0 + lVar58 + 0x18);
      iVar1 = *(int *)((long)aiStack_3f0 + lVar58 + 0x1c);
      iVar4 = (iVar57 + iVar78) * 0x1151;
      uVar26 = iVar4 + iVar78 * -0x3b21;
      iVar4 = iVar4 + iVar57 * 0x187e;
      iVar78 = *(int *)((long)aiStack_3f0 + lVar58);
      iVar57 = *(int *)((long)aiStack_3f0 + lVar58 + 0x10);
      uVar65 = *(uint *)((long)aiStack_3f0 + lVar58 + 0x14);
      unaff_x27 = (ulong)uVar65;
      uVar56 = iVar57 + iVar78;
      unaff_x28 = (ulong)uVar56;
      uVar27 = iVar78 - iVar57;
      unaff_x25 = (ulong)uVar27;
      uVar49 = uVar27 * 0x2000 - uVar26;
      unaff_x26 = (ulong)uVar49;
      iVar78 = (iVar76 + iVar1 + uVar65 + iVar69) * 0x25a1;
      iVar5 = (iVar1 + iVar69) * -0x1ccd;
      iVar57 = (iVar76 + uVar65) * -0x5203;
      iVar83 = iVar78 + (iVar76 + iVar1) * -0x3ec5;
      iVar78 = iVar78 + (uVar65 + iVar69) * -0xc7c;
      uVar65 = iVar57 + uVar65 * 0x41b3;
      unaff_x24 = (ulong)uVar65;
      iVar57 = iVar57 + iVar76 * 0x6254 + iVar83;
      iVar76 = iVar5 + iVar69 * 0x300b + iVar78;
      iVar69 = iVar4 + uVar56 * 0x2000 + 0x20000;
      bVar9 = *(byte *)(lVar51 + ((ulong)((uint)(iVar76 + iVar69) >> 0x12) & 0x3ff));
      uVar42 = (ulong)bVar9;
      *pbVar41 = bVar9;
      pbVar41[7] = *(byte *)(lVar51 + ((ulong)((uint)(iVar69 - iVar76) >> 0x12) & 0x3ff));
      iVar69 = uVar26 + uVar27 * 0x2000 + 0x20000;
      bVar9 = *(byte *)(lVar51 + ((ulong)((uint)(iVar57 + iVar69) >> 0x12) & 0x3ff));
      uVar70 = (ulong)bVar9;
      iVar78 = uVar65 + iVar78;
      pbVar41[1] = bVar9;
      pbVar41[6] = *(byte *)(lVar51 + ((ulong)((uint)(iVar69 - iVar57) >> 0x12) & 0x3ff));
      iVar69 = uVar49 + 0x20000;
      iVar83 = iVar5 + iVar1 * 0x98e + iVar83;
      pbVar41[2] = *(byte *)(lVar51 + ((ulong)((uint)(iVar78 + iVar69) >> 0x12) & 0x3ff));
      pbVar41[5] = *(byte *)(lVar51 + ((ulong)((uint)(iVar69 - iVar78) >> 0x12) & 0x3ff));
      iVar69 = (uVar56 * 0x2000 - iVar4) + 0x20000;
      pbVar41[3] = *(byte *)(lVar51 + ((ulong)((uint)(iVar83 + iVar69) >> 0x12) & 0x3ff));
      bVar9 = *(byte *)(lVar51 + ((ulong)((uint)(iVar69 - iVar83) >> 0x12) & 0x3ff));
      lVar62 = 4;
    }
    pbVar41[lVar62] = bVar9;
    lVar58 = lVar58 + 0x20;
    plVar48 = plVar47;
  } while (lVar58 != 0x100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return;
  }
  ___stack_chk_fail();
  uStack_460 = unaff_x28;
  uStack_458 = unaff_x27;
  uStack_450 = unaff_x26;
  uStack_448 = unaff_x25;
  uStack_440 = unaff_x24;
  uStack_438 = (ulong)uVar26;
  uStack_430 = uVar42;
  uStack_428 = uVar70;
  lStack_420 = lVar62;
  uStack_418 = (ulong)bVar9;
  pppuStack_410 = &ppuStack_290;
  uStack_408 = 0x1081d69c8;
  uStack_538 = (int)uVar40;
  lVar51 = 0;
  lStack_470 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_540 = *(long *)(lVar39 + 0x1a8);
  lVar58 = *(long *)(lVar72 + 0x58);
  do {
    psVar45 = (short *)(lVar58 + lVar51 * 2);
    psVar59 = (short *)(lVar68 + lVar51 * 2);
    uVar42 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    lVar63 = (long)(int)psVar45[0x10] * (long)(int)psVar59[0x10];
    lVar84 = (long)(int)psVar45[0x20] * (long)(int)psVar59[0x20];
    sVar60 = psVar59[0x30];
    sVar71 = psVar45[0x30];
    lVar72 = (lVar84 - (long)(int)sVar71 * (long)(int)sVar60) * 0x1c37;
    lVar74 = (lVar63 - (long)(int)psVar45[0x20] * (long)(int)psVar59[0x20]) * 0xa12;
    lVar39 = uVar42 + (long)(int)lVar84 * -0x3aeb + lVar74 + lVar72;
    lVar53 = lVar63 + (long)(int)sVar71 * (long)(int)sVar60;
    lVar62 = uVar42 + lVar53 * 0x28c6;
    lVar72 = lVar72 + (long)((int)sVar71 * (int)sVar60) * -0x27d + lVar62;
    lVar62 = lVar74 + (long)(int)lVar63 * -0x4f0f + lVar62;
    lVar77 = (long)(int)psVar45[8] * (long)(int)psVar59[8];
    sVar60 = psVar59[0x18];
    sVar71 = psVar45[0x18];
    sVar12 = psVar59[0x28];
    sVar13 = psVar45[0x28];
    lVar74 = (lVar77 + (long)(int)sVar71 * (long)(int)sVar60) * 0x1def;
    lVar79 = lVar77 - (long)(int)sVar71 * (long)(int)sVar60;
    lVar80 = ((long)(int)sVar71 * (long)(int)sVar60 + (long)(int)sVar13 * (long)(int)sVar12) *
             -0x2c1f;
    lVar63 = lVar74 + lVar79 * 0x573 + lVar80;
    lVar77 = (lVar77 + (long)(int)sVar13 * (long)(int)sVar12) * 0x13a3;
    lVar74 = lVar77 + lVar74 + lVar79 * -0x573;
    lVar80 = lVar77 + (long)((int)sVar13 * (int)sVar12) * 0x3bde + lVar80;
    aiStack_534[lVar51] = (int)((ulong)(lVar74 + lVar72) >> 0xb);
    auStack_48c[lVar51] = (int)((ulong)(lVar72 - lVar74) >> 0xb);
    aiStack_534[lVar51 + 7] = (int)((ulong)(lVar63 + lVar39) >> 0xb);
    auStack_4a8[lVar51] = (int)((ulong)(lVar39 - lVar63) >> 0xb);
    auStack_4fc[lVar51] = (int)((ulong)(lVar80 + lVar62) >> 0xb);
    auStack_4c4[lVar51] = (int)((ulong)(lVar62 - lVar80) >> 0xb);
    auStack_4e0[lVar51] = (int)(uVar42 + (lVar84 - lVar53) * 0x2d41 >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 7);
  lVar58 = 0;
  lVar51 = lStack_540 + 0x80;
  lVar39 = 0x1def;
  lVar72 = 0x573;
  lVar68 = 0xffffd3e1;
  uVar40 = uVar40 & 0xffffffff;
  do {
    plVar48 = plVar47 + 1;
    iVar83 = *(int *)((long)aiStack_534 + lVar58 + 4);
    iVar69 = *(int *)((long)aiStack_534 + lVar58) * 0x2000 + 0x20000;
    iVar76 = *(int *)((long)aiStack_534 + lVar58 + 0x14);
    iVar1 = *(int *)((long)aiStack_534 + lVar58 + 0x18);
    uVar49 = *(uint *)((long)aiStack_534 + lVar58 + 0x10);
    iVar5 = (uVar49 - iVar1) * 0x1c37;
    iVar78 = *(int *)((long)aiStack_534 + lVar58 + 8);
    iVar4 = *(int *)((long)aiStack_534 + lVar58 + 0xc);
    iVar6 = (iVar78 - uVar49) * 0xa12;
    iVar7 = (iVar4 + iVar83) * 0x1def;
    uVar14 = iVar6 + iVar78 * -0x4f0f;
    uVar15 = iVar69 + (iVar1 + iVar78) * 0x28c6;
    iVar57 = iVar5 + iVar1 * -0x27d + uVar15;
    iVar18 = (iVar76 + iVar83) * 0x13a3;
    uVar56 = iVar7 + (iVar83 - iVar4) * -0x573 + iVar18;
    uVar16 = iVar18 + iVar76 * 0x3bde;
    uVar65 = iVar69 + uVar49 * -0x3aeb + iVar6 + iVar5;
    puVar2 = (undefined1 *)(*plVar47 + uVar40);
    *puVar2 = *(undefined1 *)(lVar51 + ((ulong)(uVar56 + iVar57 >> 0x12) & 0x3ff));
    iVar5 = (iVar76 + iVar4) * -0x2c1f;
    iVar76 = iVar7 + (iVar83 - iVar4) * 0x573 + iVar5;
    uVar26 = uVar14 + uVar15;
    puVar2[6] = *(undefined1 *)(lVar51 + ((ulong)(iVar57 - uVar56 >> 0x12) & 0x3ff));
    bVar9 = *(byte *)(lVar51 + ((ulong)(iVar76 + uVar65 >> 0x12) & 0x3ff));
    uVar27 = uVar16 + iVar5;
    puVar2[1] = bVar9;
    puVar2[5] = *(undefined1 *)(lVar51 + ((ulong)(uVar65 - iVar76 >> 0x12) & 0x3ff));
    puVar2[2] = *(undefined1 *)(lVar51 + ((ulong)(uVar27 + uVar26 >> 0x12) & 0x3ff));
    puVar2[4] = *(undefined1 *)(lVar51 + ((ulong)(uVar26 - uVar27 >> 0x12) & 0x3ff));
    puVar2[3] = *(undefined1 *)
                 (lVar51 + ((ulong)(iVar69 + (uVar49 - (iVar1 + iVar78)) * 0x2d41 >> 0x12) & 0x3ff))
    ;
    lVar58 = lVar58 + 0x1c;
    plVar47 = plVar48;
  } while (lVar58 != 0xc4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_470) {
    return;
  }
  ___stack_chk_fail();
  uStack_580 = (ulong)uVar26;
  uStack_578 = (ulong)uVar49;
  uStack_570 = (ulong)bVar9;
  uStack_568 = (ulong)uVar16;
  uStack_560 = (ulong)uVar27;
  puStack_558 = puVar2;
  ppppuStack_550 = &pppuStack_410;
  pcStack_548 = FUN_1081d6d0c;
  lVar51 = 0;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar58 = *(long *)(lVar39 + 0x1a8);
  lVar39 = *(long *)(lVar72 + 0x58);
  do {
    psVar45 = (short *)(lVar39 + lVar51 * 2);
    psVar59 = (short *)(lVar68 + lVar51 * 2);
    uVar42 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    sVar60 = psVar59[0x20];
    sVar71 = psVar45[0x20];
    lVar63 = uVar42 + (long)((int)sVar71 * (int)sVar60) * 0x16a1;
    lVar80 = lVar63 + (long)((int)psVar59[0x10] * (int)psVar45[0x10]) * 0x2731;
    lVar63 = lVar63 + (long)((int)psVar59[0x10] * (int)psVar45[0x10]) * -0x2731;
    lVar74 = (long)(int)psVar45[8] * (long)(int)psVar59[8];
    sVar12 = psVar59[0x18];
    sVar13 = psVar45[0x18];
    lStack_650 = (long)(int)sVar13 * (long)(int)sVar12;
    lStack_738 = (long)(int)psVar45[0x28] * (long)(int)psVar59[0x28];
    lVar62 = (lVar74 + (long)(int)psVar45[0x28] * (long)(int)psVar59[0x28]) * 0xbb6;
    lVar72 = lVar62 + (lVar74 + (long)(int)sVar13 * (long)(int)sVar12) * 0x2000;
    lVar62 = lVar62 + (lStack_738 - (long)(int)sVar13 * (long)(int)sVar12) * 0x2000;
    iVar69 = (int)lVar74 - ((int)lStack_650 + (int)lStack_738);
    aiStack_618[lVar51] = (int)((ulong)(lVar72 + lVar80) >> 0xb);
    auStack_5a0[lVar51] = (int)((ulong)(lVar80 - lVar72) >> 0xb);
    iVar57 = (int)(uVar42 + (long)((int)sVar71 * (int)sVar60) * -0x2d42 >> 0xb);
    aiStack_618[lVar51 + 6] = iVar57 + iVar69 * 4;
    aiStack_5b8[lVar51] = iVar57 + iVar69 * -4;
    auStack_5e8[lVar51] = (int)((ulong)(lVar62 + lVar63) >> 0xb);
    auStack_5d0[lVar51] = (int)((ulong)(lVar63 - lVar62) >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 6);
  lVar51 = 0;
  lVar58 = lVar58 + 0x80;
  do {
    plVar47 = plVar48 + 1;
    puVar2 = (undefined1 *)(*plVar48 + (uVar40 & 0xffffffff));
    iVar83 = *(int *)((long)aiStack_618 + lVar51 + 4);
    iVar76 = *(int *)((long)aiStack_618 + lVar51 + 0x10);
    iVar1 = *(int *)((long)aiStack_618 + lVar51 + 0x14);
    iVar69 = *(int *)((long)aiStack_618 + lVar51) * 0x2000 + 0x20000;
    iVar5 = iVar69 + iVar76 * 0x16a1;
    iVar78 = *(int *)((long)aiStack_618 + lVar51 + 8);
    iVar4 = *(int *)((long)aiStack_618 + lVar51 + 0xc);
    iVar57 = iVar5 + iVar78 * 0x2731;
    uVar16 = (iVar1 + iVar83) * 0xbb6;
    uVar27 = uVar16 + (iVar4 + iVar83) * 0x2000;
    iVar83 = iVar83 - (iVar4 + iVar1);
    iVar69 = iVar69 + iVar76 * -0x2d42;
    *puVar2 = *(undefined1 *)(lVar58 + ((ulong)(uVar27 + iVar57 >> 0x12) & 0x3ff));
    uVar49 = uVar16 + (iVar1 - iVar4) * 0x2000;
    uVar43 = (ulong)uVar49;
    puVar2[5] = *(undefined1 *)(lVar58 + ((ulong)(iVar57 - uVar27 >> 0x12) & 0x3ff));
    bVar9 = *(byte *)(lVar58 + ((ulong)((uint)(iVar69 + iVar83 * 0x2000) >> 0x12) & 0x3ff));
    uVar70 = (ulong)bVar9;
    uVar28 = iVar5 + iVar78 * -0x2731;
    uVar50 = (ulong)uVar28;
    puVar2[1] = bVar9;
    puVar2[4] = *(undefined1 *)
                 (lVar58 + ((ulong)((uint)(iVar69 + iVar83 * -0x2000) >> 0x12) & 0x3ff));
    uVar42 = (ulong)(uVar28 - uVar49);
    puVar2[2] = *(undefined1 *)(lVar58 + ((ulong)(uVar49 + uVar28 >> 0x12) & 0x3ff));
    puVar2[3] = *(undefined1 *)(lVar58 + ((ulong)(uVar28 - uVar49 >> 0x12) & 0x3ff));
    lVar51 = lVar51 + 0x18;
    plVar48 = plVar47;
  } while (lVar51 != 0x90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
    return;
  }
  ___stack_chk_fail();
  uStack_648 = (ulong)(uint)(iVar1 - iVar4);
  uStack_640 = (ulong)uVar27;
  uStack_638 = (ulong)uVar16;
  ppppuStack_630 = &ppppuStack_550;
  pcStack_628 = FUN_1081d6f44;
  lVar51 = 0;
  lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar58 = *(long *)(uVar42 + 0x1a8);
  lVar39 = *(long *)(uVar70 + 0x58);
  do {
    psVar45 = (short *)(lVar39 + lVar51 * 2);
    psVar59 = (short *)(uVar43 + lVar51 * 2);
    uVar40 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    lVar68 = (long)(int)psVar45[0x10] * (long)(int)psVar59[0x10] +
             (long)(int)psVar45[0x20] * (long)(int)psVar59[0x20];
    lVar63 = (long)(int)psVar45[0x10] * (long)(int)psVar59[0x10] -
             (long)(int)psVar45[0x20] * (long)(int)psVar59[0x20];
    lVar74 = uVar40 + lVar63 * 0xb50;
    lVar72 = lVar74 + lVar68 * 0x194c;
    lVar74 = lVar74 + lVar68 * -0x194c;
    lStack_730 = (long)(int)psVar45[0x18] * (long)(int)psVar59[0x18];
    lVar68 = ((long)(int)psVar45[8] * (long)(int)psVar59[8] +
             (long)(int)psVar45[0x18] * (long)(int)psVar59[0x18]) * 0x1a9a;
    lVar62 = lVar68 + (long)(int)((long)(int)psVar45[8] * (long)(int)psVar59[8]) * 0x1071;
    lVar68 = lVar68 + (long)(int)lStack_730 * -0x45a4;
    aiStack_6bc[lVar51] = (int)((ulong)(lVar62 + lVar72) >> 0xb);
    auStack_66c[lVar51] = (int)((ulong)(lVar72 - lVar62) >> 0xb);
    aiStack_6bc[lVar51 + 5] = (int)((ulong)(lVar68 + lVar74) >> 0xb);
    auStack_680[lVar51] = (int)((ulong)(lVar74 - lVar68) >> 0xb);
    auStack_694[lVar51] = (int)(uVar40 + lVar63 * 0x7ffffffd2c0 >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 5);
  lVar51 = 0;
  lVar58 = lVar58 + 0x80;
  do {
    plVar48 = plVar47 + 1;
    iVar78 = *(int *)((long)aiStack_6bc + lVar51 + 4);
    pbVar41 = (byte *)(*plVar47 + (uVar50 & 0xffffffff));
    iVar1 = *(int *)((long)aiStack_6bc + lVar51 + 8);
    iVar76 = *(int *)((long)aiStack_6bc + lVar51 + 0xc);
    iVar83 = *(int *)((long)aiStack_6bc + lVar51 + 0x10);
    iVar57 = iVar83 + iVar1;
    iVar69 = *(int *)((long)aiStack_6bc + lVar51) * 0x2000 + 0x20000;
    iVar1 = iVar1 - iVar83;
    iVar83 = iVar69 + iVar1 * 0xb50;
    uVar16 = (iVar76 + iVar78) * 0x1a9a;
    uVar27 = iVar83 + iVar57 * 0x194c;
    iVar78 = uVar16 + iVar78 * 0x1071;
    bVar9 = *(byte *)(lVar58 + ((ulong)(iVar78 + uVar27 >> 0x12) & 0x3ff));
    iVar76 = uVar16 + iVar76 * -0x45a4;
    *pbVar41 = bVar9;
    iVar83 = iVar83 + iVar57 * -0x194c;
    pbVar41[4] = *(byte *)(lVar58 + ((ulong)(uVar27 - iVar78 >> 0x12) & 0x3ff));
    bVar10 = *(byte *)(lVar58 + ((ulong)((uint)(iVar76 + iVar83) >> 0x12) & 0x3ff));
    uVar70 = (ulong)bVar10;
    uVar49 = iVar69 + iVar1 * 0xfffd2c0;
    uVar42 = (ulong)uVar49;
    pbVar41[1] = bVar10;
    pbVar41[3] = *(byte *)(lVar58 + ((ulong)((uint)(iVar83 - iVar76) >> 0x12) & 0x3ff));
    bVar10 = *(byte *)(lVar58 + ((ulong)(uVar49 >> 0x12) & 0x3ff));
    uVar40 = (ulong)bVar10;
    pbVar41[2] = bVar10;
    lVar51 = lVar51 + 0x14;
    plVar47 = plVar48;
  } while (lVar51 != 100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
    return;
  }
  ___stack_chk_fail();
  uVar49 = (uint)uVar70;
  ppppuStack_6d0 = &ppppuStack_630;
  pcStack_6c8 = FUN_1081d7150;
  lVar51 = 0;
  lStack_6d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar58 = *(long *)(uVar40 + 0x1a8);
  lVar39 = *(long *)(pbVar41 + 0x58);
  do {
    psVar45 = (short *)(lVar39 + lVar51 * 2);
    psVar59 = (short *)(uVar42 + lVar51 * 2);
    uVar40 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    sVar60 = psVar59[0x10];
    sVar71 = psVar45[0x10];
    lVar72 = uVar40 + (long)(int)((long)(int)sVar71 * (long)(int)sVar60) * 0x16a1;
    sVar12 = psVar59[8];
    sVar13 = psVar45[8];
    aiStack_6fc[lVar51] = (int)((ulong)(lVar72 + (long)((int)sVar12 * (int)sVar13) * 0x2731) >> 0xb)
    ;
    aiStack_6fc[lVar51 + 6] =
         (int)((ulong)(lVar72 + (long)((int)sVar12 * (int)sVar13) * -0x2731) >> 0xb);
    aiStack_6fc[lVar51 + 3] =
         (int)(uVar40 + (long)(int)sVar71 * (long)(int)sVar60 * 0x7ffffffd2be >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 3);
  lVar51 = 0;
  lVar58 = lVar58 + 0x80;
  do {
    plVar47 = plVar48 + 1;
    pbVar41 = (byte *)(*plVar48 + (uVar70 & 0xffffffff));
    iVar57 = *(int *)((long)aiStack_6fc + lVar51 + 4);
    iVar69 = *(int *)((long)aiStack_6fc + lVar51) * 0x2000 + 0x20000;
    iVar76 = *(int *)((long)aiStack_6fc + lVar51 + 8);
    uVar28 = iVar69 + iVar76 * 0x16a1;
    uVar43 = (ulong)uVar28;
    bVar10 = *(byte *)(lVar58 + ((ulong)(uVar28 + iVar57 * 0x2731 >> 0x12) & 0x3ff));
    uVar40 = (ulong)bVar10;
    *pbVar41 = bVar10;
    pbVar41[2] = *(byte *)(lVar58 + ((ulong)(uVar28 + iVar57 * -0x2731 >> 0x12) & 0x3ff));
    pbVar41[1] = *(byte *)(lVar58 + ((ulong)((uint)(iVar69 + iVar76 * 0xfffd2be) >> 0x12) & 0x3ff));
    lVar51 = lVar51 + 0xc;
    plVar48 = plVar47;
  } while (lVar51 != 0x24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6d8) {
    return;
  }
  ___stack_chk_fail();
  uStack_760 = (ulong)uVar65;
  uStack_758 = (ulong)uVar56;
  pcStack_708 = FUN_1081d72a0;
  lVar51 = 0;
  lStack_770 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_8a0 = *(long *)(uVar40 + 0x1a8);
  lVar58 = *(long *)(uVar43 + 0x58);
  uStack_750 = (ulong)uVar14;
  uStack_748 = (ulong)uVar15;
  uStack_740 = (ulong)uVar26;
  uStack_728 = (ulong)bVar9;
  uStack_720 = (ulong)uVar27;
  uStack_718 = (ulong)uVar16;
  ppppuStack_710 = &ppppuStack_6d0;
  do {
    psVar45 = (short *)(lVar58 + lVar51 * 2);
    psVar59 = (short *)(uVar42 + lVar51 * 2);
    lVar80 = (long)(int)psVar45[0x10] * (long)(int)psVar59[0x10];
    uVar40 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    sVar60 = psVar59[0x20];
    sVar71 = psVar45[0x20];
    iVar69 = (int)sVar71 * (int)sVar60;
    lVar62 = (long)(int)psVar45[8] * (long)(int)psVar59[8];
    sVar12 = psVar59[0x28];
    sVar13 = psVar45[0x28];
    sVar31 = psVar59[0x38];
    sVar32 = psVar45[0x38];
    lVar74 = (long)(int)sVar13 * (long)(int)sVar12 - (long)(int)sVar32 * (long)(int)sVar31;
    lVar63 = (lVar62 - (long)(int)sVar13 * (long)(int)sVar12) -
             (long)(int)sVar32 * (long)(int)sVar31;
    lVar84 = uVar40 + (long)((int)psVar45[0x30] * (int)psVar59[0x30]) * 0x16a1;
    lVar53 = uVar40 + (long)((int)psVar45[0x30] * (int)psVar59[0x30]) * -0x2d42;
    lVar79 = lVar80 - (long)(int)sVar71 * (long)(int)sVar60;
    lVar77 = lVar80 + (long)(int)sVar71 * (long)(int)sVar60;
    iVar57 = (int)psVar59[0x18] * (int)psVar45[0x18];
    lVar68 = (lVar62 + (long)(int)sVar13 * (long)(int)sVar12) * 0x1d17;
    lVar39 = (long)iVar57 * -0x2731 + lVar74 * -0x2c91 + lVar68;
    lVar72 = lVar84 + lVar77 * 0x2a87 + (long)iVar69 * -0x7dc;
    lVar62 = (lVar62 + (long)(int)sVar32 * (long)(int)sVar31) * 0xf7a;
    lVar68 = lVar62 + lVar68 + (long)iVar57 * 0x2731;
    lVar62 = lVar74 * 0x2c91 + (long)iVar57 * -0x2731 + lVar62;
    aiStack_890[lVar51] = (int)((ulong)(lVar68 + lVar72) >> 0xb);
    lVar74 = lVar53 + lVar79 * 0x16a1;
    aiStack_890[lVar51 + 0x40] = (int)((ulong)(lVar72 - lVar68) >> 0xb);
    aiStack_890[lVar51 + 8] = (int)((ulong)(lVar63 * 0x2731 + lVar74) >> 0xb);
    lVar72 = lVar84 + lVar77 * -0x2a87 + (long)(int)lVar80 * 0x22ab;
    aiStack_890[lVar51 + 0x38] = (int)((ulong)(lVar74 + lVar63 * -0x2731) >> 0xb);
    aiStack_890[lVar51 + 0x10] = (int)((ulong)(lVar39 + lVar72) >> 0xb);
    aiStack_890[lVar51 + 0x30] = (int)((ulong)(lVar72 - lVar39) >> 0xb);
    lVar39 = lVar84 + (long)(int)lVar80 * -0x22ab + (long)iVar69 * 0x7dc;
    aiStack_890[lVar51 + 0x18] = (int)((ulong)(lVar62 + lVar39) >> 0xb);
    aiStack_890[lVar51 + 0x28] = (int)((ulong)(lVar39 - lVar62) >> 0xb);
    aiStack_890[lVar51 + 0x20] = (int)((ulong)(lVar53 + lVar79 * 0x7ffffffd2be) >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 8);
  lVar58 = 0;
  lVar51 = lStack_8a0 + 0x80;
  lVar39 = 0x1d17;
  lVar72 = 0xf7a;
  lVar68 = 0x2c91;
  uVar40 = (ulong)uVar49;
  do {
    puVar2 = (undefined1 *)(*(long *)((long)plVar47 + lVar58) + uVar40);
    iVar1 = aiStack_890[lVar58 + 1];
    iVar69 = aiStack_890[lVar58] * 0x2000 + 0x20000;
    iVar78 = aiStack_890[lVar58 + 2];
    iVar4 = aiStack_890[lVar58 + 7];
    uVar26 = iVar69 + aiStack_890[lVar58 + 6] * 0x16a1;
    iVar83 = aiStack_890[lVar58 + 4];
    iVar5 = aiStack_890[lVar58 + 5];
    uVar27 = iVar69 + aiStack_890[lVar58 + 6] * -0x2d42;
    iVar7 = aiStack_890[lVar58 + 3] * -0x2731;
    iVar6 = uVar27 + (iVar78 - iVar83) * 0x16a1;
    iVar18 = (iVar5 + iVar1) * 0x1d17;
    iVar76 = (iVar4 + iVar1) * 0xf7a;
    iVar69 = (iVar83 + iVar78) * 0x2a87 + iVar83 * -0x7dc + uVar26;
    uVar14 = iVar7 + (iVar5 - iVar4) * -0x2c91;
    iVar57 = iVar18 + aiStack_890[lVar58 + 3] * 0x2731 + iVar76;
    uVar15 = uVar26 + (iVar83 + iVar78) * -0x2a87;
    iVar1 = iVar1 - (iVar5 + iVar4);
    *puVar2 = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar57 + iVar69) >> 0x12) & 0x3ff));
    uVar56 = uVar14 + iVar18;
    puVar2[8] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar69 - iVar57) >> 0x12) & 0x3ff));
    bVar9 = *(byte *)(lVar51 + ((ulong)((uint)(iVar1 * 0x2731 + iVar6) >> 0x12) & 0x3ff));
    uVar65 = uVar15 + iVar78 * 0x22ab;
    puVar2[1] = bVar9;
    uVar16 = uVar26 + iVar78 * -0x22ab;
    puVar2[7] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar6 + iVar1 * -0x2731) >> 0x12) & 0x3ff))
    ;
    iVar76 = (iVar5 - iVar4) * 0x2c91 + iVar7 + iVar76;
    puVar2[2] = *(undefined1 *)(lVar51 + ((ulong)(uVar56 + uVar65 >> 0x12) & 0x3ff));
    iVar69 = uVar16 + iVar83 * 0x7dc;
    puVar2[6] = *(undefined1 *)(lVar51 + ((ulong)(uVar65 - uVar56 >> 0x12) & 0x3ff));
    puVar2[3] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar76 + iVar69) >> 0x12) & 0x3ff));
    puVar2[5] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar69 - iVar76) >> 0x12) & 0x3ff));
    puVar2[4] = *(undefined1 *)
                 (lVar51 + ((ulong)(uVar27 + (iVar78 - iVar83) * 0xfffd2be >> 0x12) & 0x3ff));
    lVar58 = lVar58 + 8;
  } while (lVar58 != 0x48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_770) {
    return;
  }
  uStack_894 = uVar49;
  ___stack_chk_fail();
  uStack_900 = (ulong)uVar15;
  uStack_8f8 = (ulong)uVar14;
  uStack_8c0 = 0xfffd2be;
  uStack_8a8 = 0x1081d7634;
  uStack_a54 = (int)uVar40;
  lVar51 = 0;
  lStack_910 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a60 = *(long *)(lVar39 + 0x1a8);
  lVar58 = *(long *)(lVar72 + 0x58);
  uStack_8f0 = (ulong)uVar65;
  uStack_8e8 = (ulong)uVar26;
  uStack_8e0 = (ulong)uVar56;
  uStack_8d8 = (ulong)(uint)(iVar78 * 0x22ab);
  uStack_8d0 = (ulong)bVar9;
  uStack_8c8 = (ulong)uVar16;
  uStack_8b8 = (ulong)uVar27;
  ppppuStack_8b0 = &ppppuStack_710;
  do {
    psVar45 = (short *)(lVar58 + lVar51 * 2);
    psVar59 = (short *)(lVar68 + lVar51 * 2);
    uVar42 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    iVar76 = (int)psVar45[0x20] * (int)psVar59[0x20];
    lVar77 = uVar42 + (long)iVar76 * 0x249d;
    lVar79 = uVar42 + (long)iVar76 * -0xdfc;
    lVar62 = ((long)(int)psVar45[0x10] * (long)(int)psVar59[0x10] +
             (long)(int)psVar45[0x30] * (long)(int)psVar59[0x30]) * 0x1a9a;
    lVar72 = lVar62 + (long)(int)((long)(int)psVar45[0x10] * (long)(int)psVar59[0x10]) * 0x1071;
    lVar62 = lVar62 + (long)((int)psVar45[0x30] * (int)psVar59[0x30]) * -0x45a4;
    lVar39 = lVar72 + lVar77;
    lVar77 = lVar77 - lVar72;
    lVar72 = lVar62 + lVar79;
    lVar79 = lVar79 - lVar62;
    iVar57 = (int)psVar45[8] * (int)psVar59[8];
    lVar53 = (long)(int)psVar45[0x28] * (long)(int)psVar59[0x28];
    lVar84 = (long)(int)psVar45[0x18] * (long)(int)psVar59[0x18] +
             (long)(int)psVar45[0x38] * (long)(int)psVar59[0x38];
    lVar80 = (long)(int)psVar45[0x18] * (long)(int)psVar59[0x18] -
             (long)(int)psVar45[0x38] * (long)(int)psVar59[0x38];
    lVar63 = lVar80 * 0x9e3 + lVar53 * 0x2000;
    lVar62 = lVar84 * 0x1e6f + (long)iVar57 * 0x2cb3 + lVar63;
    lVar63 = (long)iVar57 * 0x714 + lVar84 * -0x1e6f + lVar63;
    lVar74 = lVar80 * -0x19e3 + lVar53 * 0x2000;
    iVar69 = (iVar57 - (int)lVar53) - (int)lVar80;
    lVar80 = ((long)iVar57 * 0x2853 + lVar84 * -0x12cf) - lVar74;
    lVar74 = (long)iVar57 * 0x148c + lVar84 * -0x12cf + lVar74;
    auStack_a50[lVar51] = (uint)((ulong)(lVar62 + lVar39) >> 0xb);
    auStack_a50[lVar51 + 0x48] = (uint)((ulong)(lVar39 - lVar62) >> 0xb);
    auStack_a50[lVar51 + 8] = (uint)((ulong)(lVar80 + lVar72) >> 0xb);
    auStack_a50[lVar51 + 0x40] = (uint)((ulong)(lVar72 - lVar80) >> 0xb);
    iVar57 = (int)(uVar42 + (long)iVar76 * -0x2d42 >> 0xb);
    auStack_a50[lVar51 + 0x10] = iVar57 + iVar69 * 4;
    auStack_a50[lVar51 + 0x38] = iVar57 + iVar69 * -4;
    auStack_a50[lVar51 + 0x18] = (uint)((ulong)(lVar74 + lVar79) >> 0xb);
    auStack_a50[lVar51 + 0x30] = (uint)((ulong)(lVar79 - lVar74) >> 0xb);
    auStack_a50[lVar51 + 0x20] = (uint)((ulong)(lVar63 + lVar77) >> 0xb);
    auStack_a50[lVar51 + 0x28] = (uint)((ulong)(lVar77 - lVar63) >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 8);
  lVar58 = 0;
  lVar51 = lStack_a60 + 0x80;
  lVar39 = 0x1e6f;
  lVar72 = 0x2cb3;
  lVar68 = 0x714;
  uVar40 = uVar40 & 0xffffffff;
  do {
    uVar26 = auStack_a50[lVar58 + 1];
    uVar56 = auStack_a50[lVar58 + 4];
    uVar27 = auStack_a50[lVar58 + 5];
    iVar69 = auStack_a50[lVar58] * 0x2000 + 0x20000;
    iVar57 = iVar69 + uVar56 * 0x249d;
    iVar76 = iVar69 + uVar56 * -0xdfc;
    uVar49 = iVar69 + uVar56 * -0x2d42;
    iVar83 = (auStack_a50[lVar58 + 6] + auStack_a50[lVar58 + 2]) * 0x1a9a;
    iVar78 = iVar83 + auStack_a50[lVar58 + 2] * 0x1071;
    iVar83 = iVar83 + auStack_a50[lVar58 + 6] * -0x45a4;
    iVar69 = iVar78 + iVar57;
    uVar15 = iVar57 - iVar78;
    uVar56 = iVar83 + iVar76;
    iVar57 = auStack_a50[lVar58 + 7] + auStack_a50[lVar58 + 3];
    iVar1 = auStack_a50[lVar58 + 3] - auStack_a50[lVar58 + 7];
    uVar16 = iVar76 - iVar83;
    iVar76 = iVar1 * 0x9e3 + uVar27 * 0x2000;
    iVar78 = iVar57 * 0x1e6f + uVar26 * 0x2cb3 + iVar76;
    puVar2 = (undefined1 *)(*(long *)((long)plVar47 + lVar58) + uVar40);
    uVar65 = iVar57 * -0x1e6f + uVar26 * 0x714 + iVar76;
    iVar76 = iVar1 * -0x19e3 + uVar27 * 0x2000;
    *puVar2 = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar78 + iVar69) >> 0x12) & 0x3ff));
    uVar14 = uVar26 * 0x2853 - (iVar57 * 0x12cf + iVar76);
    puVar2[9] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar69 - iVar78) >> 0x12) & 0x3ff));
    iVar1 = (uVar26 - uVar27) - iVar1;
    puVar2[1] = *(undefined1 *)(lVar51 + ((ulong)(uVar14 + uVar56 >> 0x12) & 0x3ff));
    puVar2[8] = *(undefined1 *)(lVar51 + ((ulong)(uVar56 - uVar14 >> 0x12) & 0x3ff));
    puVar2[2] = *(undefined1 *)(lVar51 + ((ulong)(uVar49 + iVar1 * 0x2000 >> 0x12) & 0x3ff));
    iVar76 = iVar57 * -0x12cf + uVar26 * 0x148c + iVar76;
    puVar2[7] = *(undefined1 *)(lVar51 + ((ulong)(uVar49 + iVar1 * -0x2000 >> 0x12) & 0x3ff));
    puVar2[3] = *(undefined1 *)(lVar51 + ((ulong)(iVar76 + uVar16 >> 0x12) & 0x3ff));
    puVar2[6] = *(undefined1 *)(lVar51 + ((ulong)(uVar16 - iVar76 >> 0x12) & 0x3ff));
    puVar2[4] = *(undefined1 *)(lVar51 + ((ulong)(uVar65 + uVar15 >> 0x12) & 0x3ff));
    puVar2[5] = *(undefined1 *)(lVar51 + ((ulong)(uVar15 - uVar65 >> 0x12) & 0x3ff));
    lVar58 = lVar58 + 8;
  } while (lVar58 != 0x50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_910) {
    return;
  }
  ___stack_chk_fail();
  uStack_ac0 = (ulong)uVar56;
  uStack_ab8 = (ulong)uVar14;
  uStack_ab0 = (ulong)(uVar26 - uVar27);
  uStack_aa8 = (ulong)uVar16;
  uStack_aa0 = (ulong)uVar65;
  uStack_a98 = (ulong)uVar49;
  uStack_a90 = (ulong)uVar26;
  puStack_a88 = puVar2;
  uStack_a80 = (ulong)uVar15;
  uStack_a78 = 0x148c;
  ppppuStack_a70 = &ppppuStack_8b0;
  uStack_a68 = 0x1081d7a08;
  uStack_c3c = (int)uVar40;
  plStack_c38 = plVar47;
  lVar51 = 0;
  lStack_ad0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c48 = *(long *)(lVar39 + 0x1a8);
  lVar58 = *(long *)(lVar72 + 0x58);
  do {
    psVar45 = (short *)(lVar58 + lVar51 * 2);
    psVar59 = (short *)(lVar68 + lVar51 * 2);
    sVar60 = psVar59[0x10];
    sVar71 = psVar45[0x10];
    lVar79 = (long)(int)sVar71 * (long)(int)sVar60;
    lVar84 = (long)(int)psVar45[0x20] * (long)(int)psVar59[0x20];
    sVar12 = psVar59[0x30];
    sVar13 = psVar45[0x30];
    iVar57 = (int)sVar13 * (int)sVar12;
    lVar77 = (long)(int)psVar45[8] * (long)(int)psVar59[8];
    lVar75 = (long)(int)psVar45[0x18] * (long)(int)psVar59[0x18];
    lVar66 = lVar79 + (long)(int)sVar13 * (long)(int)sVar12;
    sVar31 = psVar59[0x28];
    sVar32 = psVar45[0x28];
    iVar76 = (int)sVar32 * (int)sVar31;
    sVar34 = psVar59[0x38];
    sVar33 = psVar45[0x38];
    lVar61 = lVar66 - (long)(int)psVar45[0x20] * (long)(int)psVar59[0x20];
    iVar69 = (int)sVar33 * (int)sVar34;
    lVar39 = lVar77 + (long)(int)psVar45[0x18] * (long)(int)psVar59[0x18];
    lVar62 = lVar39 * 0x1c6a;
    lVar73 = (lVar77 + (long)(int)sVar32 * (long)(int)sVar31) * 0x1574;
    lVar80 = (lVar39 + (long)(int)sVar32 * (long)(int)sVar31 + (long)(int)sVar33 * (long)(int)sVar34
             ) * 0xcc0;
    lVar72 = lVar80 + (lVar75 + (long)(int)sVar32 * (long)(int)sVar31) * -0x2537;
    lVar74 = (lVar75 + (long)(int)sVar33 * (long)(int)sVar34) * -0x398b;
    lVar39 = lVar73 + (long)iVar76 * -0x2626 + lVar72;
    lVar72 = lVar62 + (long)(int)lVar75 * 0x4258 + lVar74 + lVar72;
    uVar42 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    lVar53 = (lVar84 - (long)(int)sVar13 * (long)(int)sVar12) * 0x517e;
    lVar63 = lVar80 + (lVar77 + (long)(int)sVar33 * (long)(int)sVar34) * 3000;
    lVar62 = lVar62 + (long)(int)lVar77 * -0x1d8a + lVar73 + lVar63;
    lVar63 = lVar74 + (long)iVar69 * 0x4347 + lVar63;
    lVar73 = uVar42 + lVar61 * 0x2b6c;
    lVar74 = lVar53 + (long)iVar57 * 0x43b5 + lVar73;
    lVar80 = (long)(int)lVar75 * -0x2ef3 + (long)iVar76 * 0x200b + (long)iVar69 * -0x35ea + lVar80;
    aiStack_c30[lVar51] = (int)((ulong)(lVar62 + lVar74) >> 0xb);
    lVar77 = lVar73 + (lVar84 - (long)(int)sVar71 * (long)(int)sVar60) * 0xdc9;
    lVar53 = lVar53 + (long)(int)lVar84 * -0x3a4c + lVar77;
    aiStack_c30[lVar51 + 0x50] = (int)((ulong)(lVar74 - lVar62) >> 0xb);
    lVar73 = lVar73 + lVar66 * -0x24fb;
    aiStack_c30[lVar51 + 8] = (int)((ulong)(lVar72 + lVar53) >> 0xb);
    iVar69 = (int)lVar79;
    lVar62 = (long)iVar69 * -0x2c83 + (long)(int)lVar84 * 0x3e39 + lVar73;
    lVar73 = lVar73 + (long)iVar57 * -0x193d;
    aiStack_c30[lVar51 + 0x48] = (int)((ulong)(lVar53 - lVar72) >> 0xb);
    aiStack_c30[lVar51 + 0x10] = (int)((ulong)(lVar39 + lVar73) >> 0xb);
    aiStack_c30[lVar51 + 0x40] = (int)((ulong)(lVar73 - lVar39) >> 0xb);
    lVar77 = lVar77 + (long)iVar69 * -0x306f;
    aiStack_c30[lVar51 + 0x18] = (int)((ulong)(lVar63 + lVar77) >> 0xb);
    aiStack_c30[lVar51 + 0x38] = (int)((ulong)(lVar77 - lVar63) >> 0xb);
    aiStack_c30[lVar51 + 0x20] = (int)((ulong)(lVar80 + lVar62) >> 0xb);
    aiStack_c30[lVar51 + 0x30] = (int)((ulong)(lVar62 - lVar80) >> 0xb);
    aiStack_c30[lVar51 + 0x28] = (int)(uVar42 + lVar61 * 0x7ffffffd2bf >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 8);
  lVar58 = 0;
  lVar51 = lStack_c48 + 0x80;
  do {
    puVar2 = (undefined1 *)(*(long *)((long)plVar47 + lVar58) + (uVar40 & 0xffffffff));
    iVar6 = aiStack_c30[lVar58 + 1];
    iVar83 = aiStack_c30[lVar58 + 4];
    iVar7 = aiStack_c30[lVar58 + 5];
    iVar4 = aiStack_c30[lVar58 + 6];
    iVar18 = aiStack_c30[lVar58 + 7];
    iVar69 = aiStack_c30[lVar58] * 0x2000 + 0x20000;
    iVar76 = (iVar83 - iVar4) * 0x517e;
    iVar5 = aiStack_c30[lVar58 + 2];
    iVar8 = aiStack_c30[lVar58 + 3];
    iVar1 = (iVar4 + iVar5) - iVar83;
    iVar78 = iVar69 + iVar1 * 0x2b6c;
    iVar17 = iVar78 + (iVar83 - iVar5) * 0xdc9;
    iVar57 = iVar76 + iVar4 * 0x43b5 + iVar78;
    iVar76 = iVar76 + iVar83 * -0x3a4c + iVar17;
    iVar78 = iVar78 + (iVar4 + iVar5) * -0x24fb;
    uVar27 = iVar69 + iVar1 * 0xfffd2bf;
    uVar50 = (ulong)uVar27;
    iVar17 = iVar17 + iVar5 * -0x306f;
    iVar1 = (iVar8 + iVar6 + iVar7 + iVar18) * 0xcc0;
    iVar19 = (iVar8 + iVar6) * 0x1c6a;
    uVar49 = iVar78 + iVar4 * -0x193d;
    uVar42 = (ulong)uVar49;
    iVar20 = (iVar7 + iVar6) * 0x1574;
    iVar4 = iVar1 + (iVar18 + iVar6) * 3000;
    uVar56 = iVar19 + iVar6 * -0x1d8a + iVar20;
    iVar78 = iVar5 * -0x2c83 + iVar83 * 0x3e39 + iVar78;
    iVar69 = uVar56 + iVar4;
    *puVar2 = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar69 + iVar57) >> 0x12) & 0x3ff));
    iVar5 = (iVar18 + iVar8) * -0x398b;
    iVar83 = iVar1 + (iVar7 + iVar8) * -0x2537;
    uVar65 = iVar20 + iVar7 * -0x2626 + iVar83;
    iVar83 = iVar19 + iVar8 * 0x4258 + iVar5 + iVar83;
    puVar2[10] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar57 - iVar69) >> 0x12) & 0x3ff));
    bVar9 = *(byte *)(lVar51 + ((ulong)((uint)(iVar83 + iVar76) >> 0x12) & 0x3ff));
    uVar43 = (ulong)bVar9;
    puVar2[1] = bVar9;
    uVar26 = iVar5 + iVar18 * 0x4347 + iVar4;
    uVar70 = (ulong)uVar26;
    puVar2[9] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar76 - iVar83) >> 0x12) & 0x3ff));
    puVar2[2] = *(undefined1 *)(lVar51 + ((ulong)(uVar65 + uVar49 >> 0x12) & 0x3ff));
    puVar2[8] = *(undefined1 *)(lVar51 + ((ulong)(uVar49 - uVar65 >> 0x12) & 0x3ff));
    puVar2[3] = *(undefined1 *)(lVar51 + ((ulong)(uVar26 + iVar17 >> 0x12) & 0x3ff));
    iVar1 = iVar8 * -0x2ef3 + iVar7 * 0x200b + iVar18 * -0x35ea + iVar1;
    puVar2[7] = *(undefined1 *)(lVar51 + ((ulong)(iVar17 - uVar26 >> 0x12) & 0x3ff));
    puVar2[4] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar1 + iVar78) >> 0x12) & 0x3ff));
    puVar2[6] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar78 - iVar1) >> 0x12) & 0x3ff));
    puVar2[5] = *(undefined1 *)(lVar51 + ((ulong)(uVar27 >> 0x12) & 0x3ff));
    lVar58 = lVar58 + 8;
  } while (lVar58 != 0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ad0) {
    return;
  }
  ___stack_chk_fail();
  uStack_cb0 = 0xffffca16;
  uStack_ca8 = 0x200b;
  uStack_ca0 = 0xffffd10d;
  uStack_c98 = 0x4347;
  uStack_c90 = 0xffffc675;
  uStack_c88 = 0xffffd9da;
  uStack_c80 = 0x4258;
  uStack_c78 = 0xffffdac9;
  plStack_c70 = plVar47;
  uStack_c68 = (ulong)uVar56;
  ppppuStack_c60 = &ppppuStack_a70;
  uStack_c58 = 0x1081d7eb8;
  uStack_e4c = uVar65;
  uStack_e48 = uVar50;
  lVar51 = 0;
  lStack_cc0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_e58 = *(long *)(uVar42 + 0x1a8);
  lVar58 = *(long *)(uVar70 + 0x58);
  do {
    psVar45 = (short *)(lVar58 + lVar51 * 2);
    psVar59 = (short *)(uVar43 + lVar51 * 2);
    uVar40 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    lVar61 = uVar40 + (long)((int)psVar59[0x20] * (int)psVar45[0x20]) * 0x2731;
    lVar79 = uVar40 + (long)((int)psVar59[0x20] * (int)psVar45[0x20]) * -0x2731;
    iVar69 = (int)((long)(int)psVar45[0x10] * (long)(int)psVar59[0x10]);
    lVar62 = (long)(int)psVar45[0x30] * (long)(int)psVar59[0x30];
    lVar72 = (long)(int)psVar45[0x10] * (long)(int)psVar59[0x10] -
             (long)(int)psVar45[0x30] * (long)(int)psVar59[0x30];
    lVar39 = uVar40 + lVar72 * 0x2000;
    lVar66 = uVar40 + lVar72 * -0x2000;
    lVar72 = (long)iVar69 * 0x2bb6 + lVar62 * 0x2000;
    lVar68 = lVar72 + lVar61;
    lVar61 = lVar61 - lVar72;
    lVar62 = (long)iVar69 * 0xbb6 + lVar62 * -0x2000;
    lVar72 = lVar62 + lVar79;
    lVar79 = lVar79 - lVar62;
    lVar77 = (long)(int)psVar45[8] * (long)(int)psVar59[8];
    sVar60 = psVar59[0x28];
    sVar71 = psVar45[0x28];
    lVar74 = (long)(int)sVar71 * (long)(int)sVar60;
    sVar12 = psVar59[0x38];
    sVar13 = psVar45[0x38];
    iVar69 = (int)sVar13 * (int)sVar12;
    iVar57 = (int)((long)(int)psVar45[0x18] * (long)(int)psVar59[0x18]);
    lVar62 = lVar77 + (long)(int)sVar71 * (long)(int)sVar60;
    lVar80 = (lVar62 + (long)(int)sVar13 * (long)(int)sVar12) * 0x1b8d;
    lVar63 = lVar80 + lVar62 * 0x85b;
    lVar62 = (long)(int)lVar77 * 0x8f7 + (long)iVar57 * 0x29cf + lVar63;
    lVar73 = (lVar74 + (long)(int)sVar13 * (long)(int)sVar12) * -0x2175;
    lVar63 = (long)iVar57 * -0x1151 + (long)(int)lVar74 * -0x2f50 + lVar73 + lVar63;
    lVar53 = lVar77 - (long)(int)sVar13 * (long)(int)sVar12;
    lVar84 = (long)(int)psVar45[0x18] * (long)(int)psVar59[0x18] -
             (long)(int)sVar71 * (long)(int)sVar60;
    lVar74 = (long)iVar69 * 0x32c6 + (long)iVar57 * -0x29cf + lVar73 + lVar80;
    lVar80 = (long)(int)lVar77 * -0x15a4 + (long)iVar57 * -0x1151 + (long)iVar69 * -0x3f74 + lVar80;
    auStack_e40[lVar51] = (uint)((ulong)(lVar62 + lVar68) >> 0xb);
    lVar77 = (lVar53 + lVar84) * 0x1151;
    lVar53 = lVar77 + lVar53 * 0x187e;
    auStack_e40[lVar51 + 0x58] = (uint)((ulong)(lVar68 - lVar62) >> 0xb);
    auStack_e40[lVar51 + 8] = (uint)((ulong)(lVar53 + lVar39) >> 0xb);
    auStack_e40[lVar51 + 0x50] = (uint)((ulong)(lVar39 - lVar53) >> 0xb);
    auStack_e40[lVar51 + 0x10] = (uint)((ulong)(lVar63 + lVar72) >> 0xb);
    auStack_e40[lVar51 + 0x48] = (uint)((ulong)(lVar72 - lVar63) >> 0xb);
    auStack_e40[lVar51 + 0x18] = (uint)((ulong)(lVar74 + lVar79) >> 0xb);
    auStack_e40[lVar51 + 0x40] = (uint)((ulong)(lVar79 - lVar74) >> 0xb);
    lVar77 = lVar77 + lVar84 * -0x3b21;
    auStack_e40[lVar51 + 0x20] = (uint)((ulong)(lVar77 + lVar66) >> 0xb);
    auStack_e40[lVar51 + 0x38] = (uint)((ulong)(lVar66 - lVar77) >> 0xb);
    auStack_e40[lVar51 + 0x28] = (uint)((ulong)(lVar80 + lVar61) >> 0xb);
    auStack_e40[lVar51 + 0x30] = (uint)((ulong)(lVar61 - lVar80) >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 8);
  lVar58 = 0;
  lVar51 = lStack_e58 + 0x80;
  lVar39 = 0xffffd0b0;
  uVar40 = (ulong)uVar65;
  do {
    uVar26 = auStack_e40[lVar58 + 1];
    uVar27 = auStack_e40[lVar58 + 5];
    iVar69 = auStack_e40[lVar58] * 0x2000 + 0x20000;
    iVar57 = iVar69 + auStack_e40[lVar58 + 4] * 0x2731;
    uVar56 = auStack_e40[lVar58 + 2];
    uVar49 = auStack_e40[lVar58 + 3];
    uVar65 = auStack_e40[lVar58 + 6];
    uVar14 = auStack_e40[lVar58 + 7];
    iVar1 = iVar69 + auStack_e40[lVar58 + 4] * -0x2731;
    iVar76 = iVar69 + (uVar56 - uVar65) * 0x2000;
    uVar15 = iVar69 + (uVar56 - uVar65) * -0x2000;
    iVar69 = uVar56 * 0x2bb6 + uVar65 * 0x2000;
    iVar78 = iVar69 + iVar57;
    uVar16 = iVar57 - iVar69;
    iVar57 = uVar56 * 0xbb6 + uVar65 * -0x2000;
    iVar69 = iVar57 + iVar1;
    uVar56 = (uVar27 + uVar26 + uVar14) * 0x1b8d;
    iVar83 = uVar56 + (uVar27 + uVar26) * 0x85b;
    uVar65 = iVar1 - iVar57;
    iVar57 = uVar49 * 0x29cf + uVar26 * 0x8f7 + iVar83;
    iVar5 = (uVar14 + uVar27) * -0x2175;
    iVar83 = uVar49 * -0x1151 + uVar27 * -0x2f50 + iVar5 + iVar83;
    lVar72 = *(long *)(uVar50 + lVar58);
    uVar27 = uVar49 - uVar27;
    uVar42 = (ulong)uVar27;
    puVar2 = (undefined1 *)(lVar72 + uVar40);
    *puVar2 = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar57 + iVar78) >> 0x12) & 0x3ff));
    iVar4 = ((uVar26 - uVar14) + uVar27) * 0x1151;
    iVar1 = iVar4 + (uVar26 - uVar14) * 0x187e;
    puVar2[0xb] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar78 - iVar57) >> 0x12) & 0x3ff));
    puVar2[1] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar1 + iVar76) >> 0x12) & 0x3ff));
    iVar57 = uVar49 * -0x29cf + uVar14 * 0x32c6 + uVar56 + iVar5;
    puVar2[10] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar76 - iVar1) >> 0x12) & 0x3ff));
    puVar2[2] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar83 + iVar69) >> 0x12) & 0x3ff));
    puVar2[9] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar69 - iVar83) >> 0x12) & 0x3ff));
    iVar69 = uVar49 * -0x1151 + uVar26 * -0x15a4 + uVar14 * -0x3f74 + uVar56;
    puVar2[3] = *(undefined1 *)(lVar51 + ((ulong)(iVar57 + uVar65 >> 0x12) & 0x3ff));
    iVar4 = iVar4 + uVar27 * -0x3b21;
    puVar2[8] = *(undefined1 *)(lVar51 + ((ulong)(uVar65 - iVar57 >> 0x12) & 0x3ff));
    puVar2[4] = *(undefined1 *)(lVar51 + ((ulong)(iVar4 + uVar15 >> 0x12) & 0x3ff));
    puVar2[7] = *(undefined1 *)(lVar51 + ((ulong)(uVar15 - iVar4 >> 0x12) & 0x3ff));
    puVar2[5] = *(undefined1 *)(lVar51 + ((ulong)(iVar69 + uVar16 >> 0x12) & 0x3ff));
    puVar2[6] = *(undefined1 *)(lVar51 + ((ulong)(uVar16 - iVar69 >> 0x12) & 0x3ff));
    lVar58 = lVar58 + 8;
  } while (lVar58 != 0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_cc0) {
    return;
  }
  uVar70 = uStack_e48;
  ___stack_chk_fail();
  uStack_ec0 = (ulong)uVar65;
  uStack_eb8 = (ulong)uVar56;
  puStack_eb0 = puVar2;
  uStack_ea8 = (ulong)uVar14;
  uStack_ea0 = (ulong)uVar26;
  uStack_e98 = (ulong)uVar15;
  uStack_e90 = (ulong)uVar16;
  uStack_e88 = 0xffffc4df;
  uStack_e80 = 0x187e;
  uStack_e78 = 0x1151;
  ppppuStack_e70 = &ppppuStack_c60;
  uStack_e68 = 0x1081d831c;
  uStack_107c = (int)uVar40;
  uStack_1078 = uVar42;
  lVar51 = 0;
  lStack_ed0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1088 = *(long *)(lVar72 + 0x1a8);
  lVar58 = *(long *)(uVar70 + 0x58);
  do {
    psVar45 = (short *)(lVar58 + lVar51 * 2);
    psVar59 = (short *)(lVar39 + lVar51 * 2);
    sVar60 = psVar59[0x10];
    sVar71 = psVar45[0x10];
    iVar69 = (int)sVar71 * (int)sVar60;
    uVar70 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    lVar53 = (long)(int)psVar45[0x20] * (long)(int)psVar59[0x20] +
             (long)(int)psVar45[0x30] * (long)(int)psVar59[0x30];
    lVar75 = (long)(int)psVar45[0x20] * (long)(int)psVar59[0x20] -
             (long)(int)psVar45[0x30] * (long)(int)psVar59[0x30];
    lVar68 = uVar70 + lVar75 * 0x319;
    lVar72 = lVar53 * 0x24f9 + (long)iVar69 * 0x2bf1 + lVar68;
    lVar68 = (long)iVar69 * 0x100c + lVar53 * -0x24f9 + lVar68;
    lVar63 = uVar70 + lVar75 * 0xf95;
    lVar62 = (long)iVar69 * 0x21e0 + lVar53 * -0xa20 + lVar63;
    lVar63 = lVar53 * 0xa20 + (long)iVar69 * -0x2812 + lVar63;
    lVar80 = uVar70 + lVar75 * -0x1dfe;
    lVar74 = (long)iVar69 * -0x574 + lVar53 * -0xdf2 + lVar80;
    lVar80 = lVar53 * 0xdf2 + (long)iVar69 * -0x19b5 + lVar80;
    lVar66 = (long)(int)psVar45[8] * (long)(int)psVar59[8];
    sVar12 = psVar59[0x18];
    sVar13 = psVar45[0x18];
    lVar81 = (long)(int)sVar13 * (long)(int)sVar12;
    sVar31 = psVar59[0x28];
    sVar32 = psVar45[0x28];
    lVar85 = (long)(int)sVar32 * (long)(int)sVar31;
    sVar34 = psVar59[0x38];
    sVar33 = psVar45[0x38];
    lVar77 = (lVar66 + (long)(int)sVar13 * (long)(int)sVar12) * 0x2a50;
    lVar79 = (lVar66 + (long)(int)sVar32 * (long)(int)sVar31) * 0x253e;
    lVar73 = lVar66 + (long)(int)sVar33 * (long)(int)sVar34;
    lVar84 = lVar73 * 0x1e02;
    lVar53 = lVar77 + (long)(int)lVar66 * -0x40a5 + lVar79 + lVar84;
    lVar61 = (lVar81 + (long)(int)sVar32 * (long)(int)sVar31) * -0xad5;
    lVar82 = (lVar81 + (long)(int)sVar33 * (long)(int)sVar34) * -0x253e;
    lVar77 = lVar77 + (long)(int)lVar81 * 0x1acb + lVar61 + lVar82;
    lVar86 = (lVar85 + (long)(int)sVar33 * (long)(int)sVar34) * -0x1508;
    lVar79 = lVar61 + (long)(int)lVar85 * -0x324f + lVar79 + lVar86;
    iVar69 = (int)sVar33 * (int)sVar34;
    lVar84 = lVar82 + (long)iVar69 * 0x4694 + lVar84 + lVar86;
    lVar61 = (lVar85 - (long)(int)sVar13 * (long)(int)sVar12) * 0x1e02 + lVar73 * 0xad5;
    lVar73 = (long)(int)lVar66 * 0xa33 + (long)(int)lVar81 * -0xeea + lVar61;
    lVar61 = (long)(int)lVar85 * 0xc4e + (long)iVar69 * -0x37c1 + lVar61;
    aiStack_1070[lVar51] = (int)((ulong)(lVar53 + lVar72) >> 0xb);
    aiStack_1070[lVar51 + 0x60] = (int)((ulong)(lVar72 - lVar53) >> 0xb);
    aiStack_1070[lVar51 + 8] = (int)((ulong)(lVar77 + lVar62) >> 0xb);
    aiStack_1070[lVar51 + 0x58] = (int)((ulong)(lVar62 - lVar77) >> 0xb);
    aiStack_1070[lVar51 + 0x10] = (int)((ulong)(lVar79 + lVar68) >> 0xb);
    aiStack_1070[lVar51 + 0x50] = (int)((ulong)(lVar68 - lVar79) >> 0xb);
    aiStack_1070[lVar51 + 0x18] = (int)((ulong)(lVar84 + lVar74) >> 0xb);
    aiStack_1070[lVar51 + 0x48] = (int)((ulong)(lVar74 - lVar84) >> 0xb);
    aiStack_1070[lVar51 + 0x20] = (int)((ulong)(lVar73 + lVar80) >> 0xb);
    aiStack_1070[lVar51 + 0x40] = (int)((ulong)(lVar80 - lVar73) >> 0xb);
    aiStack_1070[lVar51 + 0x28] = (int)((ulong)(lVar61 + lVar63) >> 0xb);
    aiStack_1070[lVar51 + 0x38] = (int)((ulong)(lVar63 - lVar61) >> 0xb);
    aiStack_1070[lVar51 + 0x30] =
         (int)(uVar70 + (lVar75 - (long)(int)sVar71 * (long)(int)sVar60) * 0x2d41 >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 8);
  lVar58 = 0;
  lVar51 = lStack_1088 + 0x80;
  lVar39 = 0xfffff116;
  do {
    iVar6 = aiStack_1070[lVar58 + 1];
    iVar69 = aiStack_1070[lVar58] * 0x2000 + 0x20000;
    iVar7 = aiStack_1070[lVar58 + 5];
    iVar18 = aiStack_1070[lVar58 + 7];
    iVar57 = aiStack_1070[lVar58 + 6] + aiStack_1070[lVar58 + 4];
    iVar29 = aiStack_1070[lVar58 + 4] - aiStack_1070[lVar58 + 6];
    iVar78 = iVar69 + iVar29 * 0x319;
    iVar5 = aiStack_1070[lVar58 + 2];
    iVar8 = aiStack_1070[lVar58 + 3];
    iVar83 = iVar69 + iVar29 * 0xf95;
    uVar56 = iVar57 * 0x24f9 + iVar5 * 0x2bf1 + iVar78;
    iVar4 = iVar69 + iVar29 * -0x1dfe;
    iVar76 = iVar57 * 0xa20 + iVar5 * -0x2812 + iVar83;
    uVar65 = iVar57 * 0xdf2 + iVar5 * -0x19b5 + iVar4;
    uVar43 = (ulong)uVar65;
    iVar17 = (iVar8 + iVar6) * 0x2a50;
    iVar78 = iVar57 * -0x24f9 + iVar5 * 0x100c + iVar78;
    iVar19 = (iVar7 + iVar6) * 0x253e;
    iVar20 = (iVar18 + iVar6) * 0x1e02;
    iVar83 = iVar57 * -0xa20 + iVar5 * 0x21e0 + iVar83;
    iVar1 = iVar17 + iVar6 * -0x40a5 + iVar19 + iVar20;
    iVar21 = (iVar7 + iVar8) * -0xad5;
    iVar4 = iVar57 * -0xdf2 + iVar5 * -0x574 + iVar4;
    iVar22 = (iVar18 + iVar8) * -0x253e;
    uVar26 = iVar17 + iVar8 * 0x1acb + iVar21 + iVar22;
    iVar17 = (iVar18 + iVar7) * -0x1508;
    iVar57 = iVar21 + iVar7 * -0x324f + iVar19 + iVar17;
    uVar27 = iVar22 + iVar18 * 0x4694 + iVar20 + iVar17;
    bVar9 = *(byte *)(lVar51 + ((ulong)(iVar1 + uVar56 >> 0x12) & 0x3ff));
    pbVar41 = (byte *)(*(long *)(uVar42 + lVar58) + (uVar40 & 0xffffffff));
    *pbVar41 = bVar9;
    pbVar41[0xc] = *(byte *)(lVar51 + ((ulong)(uVar56 - iVar1 >> 0x12) & 0x3ff));
    pbVar41[1] = *(byte *)(lVar51 + ((ulong)(uVar26 + iVar83 >> 0x12) & 0x3ff));
    uVar15 = (iVar7 - iVar8) * 0x1e02;
    uVar14 = uVar15 + (iVar18 + iVar6) * 0xad5;
    pbVar41[0xb] = *(byte *)(lVar51 + ((ulong)(iVar83 - uVar26 >> 0x12) & 0x3ff));
    bVar10 = *(byte *)(lVar51 + ((ulong)((uint)(iVar57 + iVar78) >> 0x12) & 0x3ff));
    pbVar41[2] = bVar10;
    pbVar41[10] = *(byte *)(lVar51 + ((ulong)((uint)(iVar78 - iVar57) >> 0x12) & 0x3ff));
    pbVar41[3] = *(byte *)(lVar51 + ((ulong)(uVar27 + iVar4 >> 0x12) & 0x3ff));
    uVar49 = iVar6 * 0xa33 + iVar8 * -0xeea + uVar14;
    uVar70 = (ulong)uVar49;
    pbVar41[9] = *(byte *)(lVar51 + ((ulong)(iVar4 - uVar27 >> 0x12) & 0x3ff));
    bVar11 = *(byte *)(lVar51 + ((ulong)(uVar49 + uVar65 >> 0x12) & 0x3ff));
    uVar50 = (ulong)bVar11;
    pbVar41[4] = bVar11;
    iVar57 = iVar7 * 0xc4e + iVar18 * -0x37c1 + uVar14;
    pbVar41[8] = *(byte *)(lVar51 + ((ulong)(uVar65 - uVar49 >> 0x12) & 0x3ff));
    pbVar41[5] = *(byte *)(lVar51 + ((ulong)((uint)(iVar57 + iVar76) >> 0x12) & 0x3ff));
    pbVar41[7] = *(byte *)(lVar51 + ((ulong)((uint)(iVar76 - iVar57) >> 0x12) & 0x3ff));
    pbVar41[6] = *(byte *)(lVar51 + ((ulong)((uint)(iVar69 + (iVar29 - iVar5) * 0x2d41) >> 0x12) &
                                    0x3ff));
    lVar58 = lVar58 + 8;
  } while (lVar58 != 0x68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ed0) {
    return;
  }
  ___stack_chk_fail();
  uStack_10f0 = 0xffffeaf8;
  uStack_10e8 = (ulong)bVar9;
  uStack_10e0 = (ulong)uVar26;
  uStack_10d8 = (ulong)uVar27;
  uStack_10d0 = (ulong)uVar56;
  uStack_10c8 = 0xad5;
  uStack_10c0 = (ulong)uVar15;
  uStack_10b8 = 0x1e02;
  uStack_10b0 = (ulong)bVar10;
  uStack_10a8 = (ulong)uVar14;
  ppppuStack_10a0 = &ppppuStack_e70;
  uStack_1098 = 0x1081d8880;
  uStack_12cc = (int)pbVar41;
  lStack_12c8 = lVar39;
  lVar51 = 0;
  lStack_1100 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_12d8 = *(long *)(uVar70 + 0x1a8);
  lVar58 = *(long *)(uVar43 + 0x58);
  do {
    psVar45 = (short *)(lVar58 + lVar51 * 2);
    psVar59 = (short *)(uVar50 + lVar51 * 2);
    iVar57 = (int)psVar45[0x20] * (int)psVar59[0x20];
    uVar40 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    lVar84 = uVar40 + (long)iVar57 * 0x28c6;
    lVar73 = uVar40 + (long)iVar57 * 0xa12;
    lVar61 = uVar40 + (long)iVar57 * -0x1c37;
    iVar69 = (int)psVar45[0x30] * (int)psVar59[0x30];
    lVar62 = ((long)(int)psVar45[0x10] * (long)(int)psVar59[0x10] +
             (long)(int)psVar45[0x30] * (long)(int)psVar59[0x30]) * 0x2362;
    iVar76 = (int)((long)(int)psVar45[0x10] * (long)(int)psVar59[0x10]);
    lVar68 = lVar62 + (long)iVar76 * 0x8bd;
    lVar62 = lVar62 + (long)iVar69 * -0x3704;
    lVar63 = (long)iVar76 * 0x13a3 + (long)iVar69 * -0x2c1f;
    lVar72 = lVar68 + lVar84;
    lVar84 = lVar84 - lVar68;
    lVar68 = lVar62 + lVar73;
    lVar73 = lVar73 - lVar62;
    lVar62 = lVar63 + lVar61;
    lVar61 = lVar61 - lVar63;
    lVar77 = (long)(int)psVar45[8] * (long)(int)psVar59[8];
    sVar60 = psVar59[0x18];
    sVar71 = psVar45[0x18];
    lVar63 = (long)(int)sVar71 * (long)(int)sVar60;
    sVar12 = psVar59[0x28];
    sVar13 = psVar45[0x28];
    lVar80 = (long)(int)sVar13 * (long)(int)sVar12;
    lVar82 = (long)(int)psVar45[0x38] * (long)(int)psVar59[0x38];
    lVar66 = lVar77 + (long)(int)sVar13 * (long)(int)sVar12;
    lVar75 = (lVar77 + (long)(int)sVar71 * (long)(int)sVar60) * 0x2ab7;
    lVar85 = lVar66 * 0x2652;
    lVar74 = (lVar63 + (long)(int)sVar13 * (long)(int)sVar12) * -0x511 + lVar82 * -0x2000;
    iVar69 = (int)lVar63;
    lVar63 = lVar75 + (long)iVar69 * -0xd92 + lVar74;
    iVar76 = (int)lVar80;
    lVar74 = lVar85 + (long)iVar76 * -0x4bf7 + lVar74;
    lVar66 = lVar66 * 0x1814;
    lVar81 = lVar77 - (long)(int)sVar71 * (long)(int)sVar60;
    lVar79 = (lVar80 - (long)(int)sVar71 * (long)(int)sVar60) * 0x2cf8;
    lVar53 = lVar81 * 0xef2 + lVar82 * -0x2000;
    lVar80 = lVar66 + (long)(int)lVar77 * -0x21f5 + lVar53;
    lVar53 = lVar79 + (long)iVar69 * 0x1599 + lVar53;
    lVar77 = lVar75 + (long)(int)lVar77 * -0x2410 + lVar85 + lVar82 * 0x2000;
    lVar79 = lVar79 + (long)iVar76 * -0x361a + lVar66 + lVar82 * 0x2000;
    iVar69 = ((int)lVar81 - iVar76) + (int)lVar82;
    auStack_12c0[lVar51] = (uint)((ulong)(lVar77 + lVar72) >> 0xb);
    auStack_12c0[lVar51 + 0x68] = (uint)((ulong)(lVar72 - lVar77) >> 0xb);
    auStack_12c0[lVar51 + 8] = (uint)((ulong)(lVar63 + lVar68) >> 0xb);
    auStack_12c0[lVar51 + 0x60] = (uint)((ulong)(lVar68 - lVar63) >> 0xb);
    auStack_12c0[lVar51 + 0x10] = (uint)((ulong)(lVar74 + lVar62) >> 0xb);
    auStack_12c0[lVar51 + 0x58] = (uint)((ulong)(lVar62 - lVar74) >> 0xb);
    iVar57 = (int)(uVar40 + (long)iVar57 * -0x2d42 >> 0xb);
    auStack_12c0[lVar51 + 0x18] = iVar57 + iVar69 * 4;
    auStack_12c0[lVar51 + 0x50] = iVar57 + iVar69 * -4;
    auStack_12c0[lVar51 + 0x20] = (uint)((ulong)(lVar79 + lVar61) >> 0xb);
    auStack_12c0[lVar51 + 0x48] = (uint)((ulong)(lVar61 - lVar79) >> 0xb);
    auStack_12c0[lVar51 + 0x28] = (uint)((ulong)(lVar53 + lVar73) >> 0xb);
    auStack_12c0[lVar51 + 0x40] = (uint)((ulong)(lVar73 - lVar53) >> 0xb);
    auStack_12c0[lVar51 + 0x30] = (uint)((ulong)(lVar80 + lVar84) >> 0xb);
    auStack_12c0[lVar51 + 0x38] = (uint)((ulong)(lVar84 - lVar80) >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 8);
  lVar58 = 0;
  lVar51 = lStack_12d8 + 0x80;
  uVar40 = (ulong)pbVar41 & 0xffffffff;
  do {
    uVar49 = auStack_12c0[lVar58 + 1];
    iVar69 = auStack_12c0[lVar58] * 0x2000 + 0x20000;
    uVar56 = auStack_12c0[lVar58 + 4];
    uVar14 = auStack_12c0[lVar58 + 5];
    iVar76 = iVar69 + uVar56 * 0x28c6;
    iVar5 = iVar69 + uVar56 * 0xa12;
    iVar78 = iVar69 + uVar56 * -0x1c37;
    uVar65 = auStack_12c0[lVar58 + 2];
    uVar15 = auStack_12c0[lVar58 + 3];
    uVar27 = auStack_12c0[lVar58 + 6];
    uVar26 = auStack_12c0[lVar58 + 7];
    iVar69 = iVar69 + uVar56 * -0x2d42;
    iVar1 = (uVar27 + uVar65) * 0x2362;
    iVar83 = iVar1 + uVar65 * 0x8bd;
    iVar1 = iVar1 + uVar27 * -0x3704;
    iVar4 = uVar65 * 0x13a3 + uVar27 * -0x2c1f;
    iVar57 = iVar83 + iVar76;
    uVar27 = iVar76 - iVar83;
    iVar76 = iVar4 + iVar78;
    uVar16 = iVar78 - iVar4;
    uVar50 = (ulong)uVar16;
    uVar56 = iVar1 + iVar5;
    uVar43 = (ulong)uVar56;
    iVar83 = (uVar15 + uVar49) * 0x2ab7;
    iVar4 = (uVar14 + uVar49) * 0x2652;
    iVar78 = iVar83 + uVar49 * -0x2410 + iVar4 + uVar26 * 0x2000;
    iVar5 = iVar5 - iVar1;
    iVar1 = (uVar14 + uVar15) * -0x511 + uVar26 * -0x2000;
    iVar83 = iVar83 + uVar15 * -0xd92 + iVar1;
    iVar1 = iVar4 + uVar14 * -0x4bf7 + iVar1;
    uVar65 = uVar14 * -0x361a + uVar26 * 0x2000;
    iVar4 = (uVar49 - uVar15) * 0xef2 + uVar26 * -0x2000;
    uVar26 = ((uVar49 - uVar15) - uVar14) + uVar26;
    uVar42 = (ulong)uVar26;
    puVar2 = (undefined1 *)(*(long *)(lVar39 + lVar58) + uVar40);
    *puVar2 = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar78 + iVar57) >> 0x12) & 0x3ff));
    puVar2[0xd] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar57 - iVar78) >> 0x12) & 0x3ff));
    bVar9 = *(byte *)(lVar51 + ((ulong)(iVar83 + uVar56 >> 0x12) & 0x3ff));
    uVar70 = (ulong)bVar9;
    puVar2[1] = bVar9;
    puVar2[0xc] = *(undefined1 *)(lVar51 + ((ulong)(uVar56 - iVar83 >> 0x12) & 0x3ff));
    puVar2[2] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar1 + iVar76) >> 0x12) & 0x3ff));
    iVar78 = (uVar14 + uVar49) * 0x1814;
    iVar83 = (uVar14 - uVar15) * 0x2cf8;
    puVar2[0xb] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar76 - iVar1) >> 0x12) & 0x3ff));
    iVar57 = uVar65 + iVar83 + iVar78;
    puVar2[3] = *(undefined1 *)(lVar51 + ((ulong)(iVar69 + uVar26 * 0x2000 >> 0x12) & 0x3ff));
    puVar2[10] = *(undefined1 *)(lVar51 + ((ulong)(iVar69 + uVar26 * -0x2000 >> 0x12) & 0x3ff));
    puVar2[4] = *(undefined1 *)(lVar51 + ((ulong)(iVar57 + uVar16 >> 0x12) & 0x3ff));
    iVar69 = iVar78 + uVar49 * -0x21f5 + iVar4;
    iVar4 = iVar83 + uVar15 * 0x1599 + iVar4;
    puVar2[9] = *(undefined1 *)(lVar51 + ((ulong)(uVar16 - iVar57 >> 0x12) & 0x3ff));
    puVar2[5] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar4 + iVar5) >> 0x12) & 0x3ff));
    puVar2[8] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar5 - iVar4) >> 0x12) & 0x3ff));
    puVar2[6] = *(undefined1 *)(lVar51 + ((ulong)(iVar69 + uVar27 >> 0x12) & 0x3ff));
    puVar2[7] = *(undefined1 *)(lVar51 + ((ulong)(uVar27 - iVar69 >> 0x12) & 0x3ff));
    lVar58 = lVar58 + 8;
  } while (lVar58 != 0x70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1100) {
    return;
  }
  ___stack_chk_fail();
  uStack_1340 = (ulong)uVar15;
  uStack_1338 = (ulong)uVar27;
  uStack_1330 = 0x1599;
  uStack_1328 = 0xffffc9e6;
  uStack_1320 = 0x2cf8;
  uStack_1318 = 0xffffb409;
  uStack_1310 = 0xfffff26e;
  uStack_1308 = 0xfffffaef;
  lStack_1300 = lVar39;
  uStack_12f8 = (ulong)uVar65;
  ppppuStack_12f0 = &ppppuStack_10a0;
  uStack_12e8 = 0x1081d8d6c;
  uStack_154c = (int)uVar40;
  uStack_1548 = uVar50;
  uStack_1538 = uVar43;
  lVar51 = 0;
  lStack_1350 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1558 = *(long *)(uVar42 + 0x1a8);
  lStack_1540 = *(long *)(uVar70 + 0x58);
  do {
    psVar45 = (short *)(lStack_1540 + lVar51 * 2);
    psVar59 = (short *)(uVar43 + lVar51 * 2);
    lVar68 = (long)(int)psVar45[0x10] * (long)(int)psVar59[0x10];
    uVar42 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    iVar57 = (int)psVar45[0x30] * (int)psVar59[0x30];
    lVar62 = uVar42 + (long)iVar57 * -0xdfc;
    lVar63 = uVar42 + (long)iVar57 * 0x249d;
    lVar79 = lVar68 - (long)(int)psVar45[0x20] * (long)(int)psVar59[0x20];
    lVar74 = lVar68 + (long)(int)psVar45[0x20] * (long)(int)psVar59[0x20];
    lVar58 = lVar79 * 0x176 + lVar74 * 0x2ace + lVar63;
    lVar39 = (long)(int)lVar68 * 0x2e13 + lVar74 * -0x2ace + lVar79 * 0x176 + lVar62;
    lVar72 = lVar63 + lVar79 * -0xcc7 + lVar74 * -0x1182;
    lVar68 = lVar74 * 0x1182 + (long)(int)lVar68 * -0x2e13 + lVar79 * -0xcc7 + lVar62;
    lVar62 = lVar79 * 0xb50 + lVar74 * 0x194c + lVar62;
    lVar63 = lVar63 + lVar74 * -0x194c + lVar79 * 0xb50;
    sVar60 = psVar59[8];
    sVar71 = psVar45[8];
    lVar53 = (long)(int)sVar71 * (long)(int)sVar60;
    sVar12 = psVar59[0x28];
    sVar13 = psVar45[0x28];
    iVar83 = (int)sVar13 * (int)sVar12;
    sVar31 = psVar59[0x38];
    sVar32 = psVar45[0x38];
    iVar69 = (int)sVar32 * (int)sVar31;
    lVar84 = lVar53 - (long)(int)sVar32 * (long)(int)sVar31;
    lVar80 = lVar84 * 0x2d02 + (long)iVar83 * 0x2731;
    iVar78 = (int)((long)(int)psVar45[0x18] * (long)(int)psVar59[0x18]);
    lVar74 = lVar80 + (long)iVar69 * 0x4ea3 + (long)iVar78 * 0x2b0a;
    iVar76 = (int)lVar53;
    lVar80 = (long)iVar76 * -0x2399 + (long)iVar78 * -0x1a9a + lVar80;
    lVar73 = (long)(int)psVar45[0x18] * (long)(int)psVar59[0x18] -
             (long)(int)sVar32 * (long)(int)sVar31;
    lVar77 = (lVar53 + (long)(int)sVar32 * (long)(int)sVar31) * 0x1268;
    lVar53 = (long)iVar76 * 0xf39 + (long)iVar78 * -0x1a9a + (long)iVar83 * -0x2731 + lVar77;
    lVar77 = (long)iVar78 * -0x2b0a + (long)iVar83 * 0x2731 + (long)iVar69 * -0x1bd1 + lVar77;
    auStack_1530[lVar51] = (uint)((ulong)(lVar74 + lVar58) >> 0xb);
    auStack_1530[lVar51 + 0x70] = (uint)((ulong)(lVar58 - lVar74) >> 0xb);
    lVar74 = (lVar73 + (long)(int)sVar71 * (long)(int)sVar60) * 0x1a9a;
    lVar58 = lVar74 + (long)iVar76 * 0x1071;
    auStack_1530[lVar51 + 8] = (uint)((ulong)(lVar58 + lVar62) >> 0xb);
    auStack_1530[lVar51 + 0x68] = (uint)((ulong)(lVar62 - lVar58) >> 0xb);
    lVar62 = uVar42 + (long)iVar57 * -0x2d42;
    lVar84 = lVar84 - (long)(int)sVar13 * (long)(int)sVar12;
    lVar58 = lVar62 + lVar79 * 0x16a0;
    auStack_1530[lVar51 + 0x10] = (uint)((ulong)(lVar84 * 0x2731 + lVar58) >> 0xb);
    auStack_1530[lVar51 + 0x60] = (uint)((ulong)(lVar58 + lVar84 * -0x2731) >> 0xb);
    auStack_1530[lVar51 + 0x18] = (uint)((ulong)(lVar53 + lVar39) >> 0xb);
    auStack_1530[lVar51 + 0x58] = (uint)((ulong)(lVar39 - lVar53) >> 0xb);
    lVar74 = lVar74 + lVar73 * -0x45a4;
    auStack_1530[lVar51 + 0x20] = (uint)((ulong)(lVar74 + lVar63) >> 0xb);
    auStack_1530[lVar51 + 0x50] = (uint)((ulong)(lVar63 - lVar74) >> 0xb);
    auStack_1530[lVar51 + 0x28] = (uint)((ulong)(lVar77 + lVar72) >> 0xb);
    auStack_1530[lVar51 + 0x48] = (uint)((ulong)(lVar72 - lVar77) >> 0xb);
    auStack_1530[lVar51 + 0x30] = (uint)((ulong)(lVar80 + lVar68) >> 0xb);
    auStack_1530[lVar51 + 0x40] = (uint)((ulong)(lVar68 - lVar80) >> 0xb);
    auStack_1530[lVar51 + 0x38] = (uint)((ulong)(lVar62 + lVar79 * 0x7ffffffd2c0) >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 8);
  lVar58 = 0;
  lVar51 = lStack_1558 + 0x80;
  uVar40 = uVar40 & 0xffffffff;
  do {
    uVar27 = auStack_1530[lVar58 + 1];
    uVar42 = (ulong)uVar27;
    puVar2 = (undefined1 *)(*(long *)(uVar50 + lVar58) + uVar40);
    iVar69 = auStack_1530[lVar58] * 0x2000 + 0x20000;
    uVar56 = auStack_1530[lVar58 + 6];
    uVar49 = auStack_1530[lVar58 + 7];
    iVar4 = iVar69 + uVar56 * -0xdfc;
    iVar6 = iVar69 + uVar56 * 0x249d;
    uVar65 = auStack_1530[lVar58 + 2];
    uVar14 = auStack_1530[lVar58 + 3];
    uVar26 = auStack_1530[lVar58 + 5];
    iVar69 = iVar69 + uVar56 * -0x2d42;
    iVar18 = uVar65 - auStack_1530[lVar58 + 4];
    iVar57 = auStack_1530[lVar58 + 4] + uVar65;
    iVar76 = iVar18 * 0x176 + iVar57 * 0x2ace + iVar6;
    iVar78 = iVar18 * -0xcc7 + iVar57 * -0x1182 + iVar6;
    iVar83 = uVar65 * 0x2e13 + iVar57 * -0x2ace + iVar18 * 0x176 + iVar4;
    iVar1 = iVar18 * 0xb50 + iVar57 * 0x194c + iVar4;
    iVar7 = iVar69 + iVar18 * 0x16a0;
    iVar4 = iVar57 * 0x1182 + uVar65 * -0x2e13 + iVar18 * -0xcc7 + iVar4;
    iVar5 = uVar26 * 0x2731 + (uVar27 - uVar49) * 0x2d02;
    uVar56 = iVar6 + iVar57 * -0x194c + iVar18 * 0xb50;
    uVar43 = (ulong)uVar56;
    iVar57 = iVar5 + uVar14 * 0x2b0a + uVar49 * 0x4ea3;
    iVar6 = (uVar27 - uVar49) - uVar26;
    uVar28 = ((uVar14 - uVar49) + uVar27) * 0x1a9a;
    *puVar2 = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar57 + iVar76) >> 0x12) & 0x3ff));
    uVar15 = uVar28 + uVar27 * 0x1071;
    puVar2[0xe] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar76 - iVar57) >> 0x12) & 0x3ff));
    puVar2[1] = *(undefined1 *)(lVar51 + ((ulong)(uVar15 + iVar1 >> 0x12) & 0x3ff));
    puVar2[0xd] = *(undefined1 *)(lVar51 + ((ulong)(iVar1 - uVar15 >> 0x12) & 0x3ff));
    puVar2[2] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar6 * 0x2731 + iVar7) >> 0x12) & 0x3ff));
    uVar23 = (uVar49 + uVar27) * 0x1268;
    uVar65 = uVar14 * -0x1a9a + uVar27 * 0xf39 + uVar26 * -0x2731 + uVar23;
    puVar2[0xc] = *(undefined1 *)
                   (lVar51 + ((ulong)((uint)(iVar7 + iVar6 * -0x2731) >> 0x12) & 0x3ff));
    uVar16 = uVar28 + (uVar14 - uVar49) * -0x45a4;
    uVar44 = (ulong)uVar16;
    puVar2[3] = *(undefined1 *)(lVar51 + ((ulong)(uVar65 + iVar83 >> 0x12) & 0x3ff));
    uVar26 = uVar26 * 0x2731 + uVar14 * -0x2b0a;
    uVar70 = (ulong)uVar26;
    puVar2[0xb] = *(undefined1 *)(lVar51 + ((ulong)(iVar83 - uVar65 >> 0x12) & 0x3ff));
    puVar2[4] = *(undefined1 *)(lVar51 + ((ulong)(uVar16 + uVar56 >> 0x12) & 0x3ff));
    iVar57 = uVar26 + uVar49 * -0x1bd1 + uVar23;
    puVar2[10] = *(undefined1 *)(lVar51 + ((ulong)(uVar56 - uVar16 >> 0x12) & 0x3ff));
    puVar2[5] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar57 + iVar78) >> 0x12) & 0x3ff));
    iVar5 = uVar14 * -0x1a9a + uVar27 * -0x2399 + iVar5;
    puVar2[9] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar78 - iVar57) >> 0x12) & 0x3ff));
    puVar2[6] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar5 + iVar4) >> 0x12) & 0x3ff));
    puVar2[8] = *(undefined1 *)(lVar51 + ((ulong)((uint)(iVar4 - iVar5) >> 0x12) & 0x3ff));
    puVar2[7] = *(undefined1 *)
                 (lVar51 + ((ulong)((uint)(iVar69 + iVar18 * 0xfffd2c0) >> 0x12) & 0x3ff));
    lVar58 = lVar58 + 8;
  } while (lVar58 != 0x78);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1350) {
    return;
  }
  ___stack_chk_fail();
  uStack_15c0 = 0xf39;
  uStack_15b8 = 0x1268;
  uStack_15b0 = 0xffffdc67;
  uStack_15a8 = 0x1a9a;
  uStack_15a0 = uVar50;
  uStack_1598 = (ulong)uVar15;
  uStack_1590 = 0xffffba5c;
  uStack_1588 = (ulong)uVar28;
  uStack_1580 = (ulong)uVar23;
  uStack_1578 = (ulong)uVar65;
  ppppuStack_1570 = &ppppuStack_12f0;
  uStack_1568 = 0x1081d92d8;
  uStack_17f4 = (int)uVar40;
  uStack_17f0 = uVar42;
  uStack_17e0 = uVar44;
  lVar51 = 0;
  lStack_15d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1800 = *(long *)(uVar70 + 0x1a8);
  lStack_17e8 = *(long *)(uVar43 + 0x58);
  do {
    psVar45 = (short *)(lStack_17e8 + lVar51 * 2);
    psVar59 = (short *)(uVar44 + lVar51 * 2);
    iVar69 = (int)psVar45[0x20] * (int)psVar59[0x20];
    uVar70 = (long)(int)*psVar59 * (long)(int)*psVar45 * 0x2000 | 0x400;
    lStack_17d8 = uVar70 + (long)iVar69 * 0x29cf;
    lVar61 = uVar70 + (long)iVar69 * -0x29cf;
    lVar66 = uVar70 + (long)iVar69 * 0x1151;
    lVar73 = uVar70 + (long)iVar69 * -0x1151;
    iVar57 = (int)psVar45[0x30] * (int)psVar59[0x30];
    lVar68 = (long)(int)psVar45[0x10] * (long)(int)psVar59[0x10] -
             (long)(int)psVar45[0x30] * (long)(int)psVar59[0x30];
    lVar62 = lVar68 * 0x8d4;
    lVar68 = lVar68 * 0x2c63;
    lVar39 = lVar68 + (long)iVar57 * 0x5203;
    iVar69 = (int)((long)(int)psVar45[0x10] * (long)(int)psVar59[0x10]);
    lVar72 = lVar62 + (long)iVar69 * 0x1ccd;
    lVar68 = lVar68 + (long)iVar69 * -0x133e;
    lVar62 = lVar62 + (long)iVar57 * -0x1050;
    lVar58 = lVar39 + lStack_17d8;
    lStack_17d8 = lStack_17d8 - lVar39;
    lVar39 = lVar72 + lVar66;
    lVar66 = lVar66 - lVar72;
    lVar72 = lVar68 + lVar73;
    lVar73 = lVar73 - lVar68;
    lVar68 = lVar62 + lVar61;
    lVar61 = lVar61 - lVar62;
    lVar63 = (long)(int)psVar45[8] * (long)(int)psVar59[8];
    sVar60 = psVar59[0x18];
    sVar71 = psVar45[0x18];
    lVar85 = (long)(int)sVar71 * (long)(int)sVar60;
    sVar12 = psVar59[0x28];
    sVar13 = psVar45[0x28];
    sVar31 = psVar59[0x38];
    sVar32 = psVar45[0x38];
    lVar75 = lVar63 + (long)(int)sVar13 * (long)(int)sVar12;
    lVar74 = (lVar63 + (long)(int)sVar71 * (long)(int)sVar60) * 0x2b4e;
    lVar87 = lVar75 * 0x27e9;
    lVar77 = (lVar63 + (long)(int)sVar32 * (long)(int)sVar31) * 0x22fc;
    lVar81 = (lVar63 - (long)(int)sVar32 * (long)(int)sVar31) * 0x1cb6;
    lVar75 = lVar75 * 0x1555;
    lVar80 = (lVar63 - (long)(int)sVar71 * (long)(int)sVar60) * 0xd23;
    lVar62 = lVar74 + (long)(int)lVar63 * -0x492a + lVar87 + lVar77;
    lVar63 = lVar80 + (long)(int)lVar63 * -0x3abe + lVar75 + lVar81;
    lVar53 = (lVar85 + (long)(int)sVar13 * (long)(int)sVar12) * 0x470;
    iVar76 = (int)sVar32;
    iVar57 = (int)sVar31;
    lVar79 = lVar85 + (long)iVar76 * (long)iVar57;
    lVar82 = lVar79 * -0x1555;
    lVar74 = lVar74 + (long)(int)lVar85 * 0x24d + lVar53 + lVar82;
    lVar86 = (long)(int)sVar13 * (long)(int)sVar12;
    lVar84 = (lVar86 - (long)(int)sVar71 * (long)(int)sVar60) * 0x2d09;
    lVar79 = lVar79 * -0x27e9;
    lVar80 = lVar80 + (long)(int)lVar85 * 0x3f1a + lVar84 + lVar79;
    lVar85 = (lVar86 + (long)iVar76 * (long)iVar57) * -0x2b4e;
    lVar53 = lVar53 + (long)(int)lVar86 * -0x2406 + lVar87 + lVar85;
    iVar69 = (int)((long)iVar76 * (long)iVar57);
    lVar77 = lVar82 + (long)iVar69 * 0x2218 + lVar77 + lVar85;
    lVar82 = ((long)iVar76 * (long)iVar57 - (long)(int)sVar13 * (long)(int)sVar12) * 0xd23;
    lVar79 = lVar79 + (long)iVar69 * 0x6485 + lVar81 + lVar82;
    lVar84 = lVar84 + (long)(int)lVar86 * -0x1886 + lVar75 + lVar82;
    aiStack_17d0[lVar51] = (int)((ulong)(lVar62 + lVar58) >> 0xb);
    aiStack_17d0[lVar51 + 0x78] = (int)((ulong)(lVar58 - lVar62) >> 0xb);
    aiStack_17d0[lVar51 + 8] = (int)((ulong)(lVar74 + lVar39) >> 0xb);
    aiStack_17d0[lVar51 + 0x70] = (int)((ulong)(lVar39 - lVar74) >> 0xb);
    aiStack_17d0[lVar51 + 0x10] = (int)((ulong)(lVar53 + lVar72) >> 0xb);
    aiStack_17d0[lVar51 + 0x68] = (int)((ulong)(lVar72 - lVar53) >> 0xb);
    aiStack_17d0[lVar51 + 0x18] = (int)((ulong)(lVar77 + lVar68) >> 0xb);
    aiStack_17d0[lVar51 + 0x60] = (int)((ulong)(lVar68 - lVar77) >> 0xb);
    aiStack_17d0[lVar51 + 0x20] = (int)((ulong)(lVar79 + lVar61) >> 0xb);
    aiStack_17d0[lVar51 + 0x58] = (int)((ulong)(lVar61 - lVar79) >> 0xb);
    aiStack_17d0[lVar51 + 0x28] = (int)((ulong)(lVar84 + lVar73) >> 0xb);
    aiStack_17d0[lVar51 + 0x50] = (int)((ulong)(lVar73 - lVar84) >> 0xb);
    aiStack_17d0[lVar51 + 0x30] = (int)((ulong)(lVar80 + lVar66) >> 0xb);
    aiStack_17d0[lVar51 + 0x48] = (int)((ulong)(lVar66 - lVar80) >> 0xb);
    aiStack_17d0[lVar51 + 0x38] = (int)((ulong)(lVar63 + lStack_17d8) >> 0xb);
    aiStack_17d0[lVar51 + 0x40] = (int)((ulong)(lStack_17d8 - lVar63) >> 0xb);
    lVar51 = lVar51 + 1;
  } while ((int)lVar51 != 8);
  lVar58 = 0;
  lVar51 = lStack_1800 + 0x80;
  do {
    iVar6 = aiStack_17d0[lVar58 + 1];
    iVar78 = aiStack_17d0[lVar58 + 4];
    iVar8 = aiStack_17d0[lVar58 + 5];
    iVar69 = aiStack_17d0[lVar58] * 0x2000 + 0x20000;
    iVar57 = iVar69 + iVar78 * 0x29cf;
    iVar30 = iVar69 + iVar78 * -0x29cf;
    iVar83 = aiStack_17d0[lVar58 + 2];
    iVar17 = aiStack_17d0[lVar58 + 3];
    iVar76 = iVar69 + iVar78 * 0x1151;
    iVar1 = aiStack_17d0[lVar58 + 6];
    iVar19 = aiStack_17d0[lVar58 + 7];
    iVar18 = (iVar83 - iVar1) * 0x8d4;
    iVar69 = iVar69 + iVar78 * -0x1151;
    iVar7 = (iVar83 - iVar1) * 0x2c63;
    iVar4 = iVar7 + iVar1 * 0x5203;
    iVar5 = iVar18 + iVar83 * 0x1ccd;
    iVar7 = iVar7 + iVar83 * -0x133e;
    iVar18 = iVar18 + iVar1 * -0x1050;
    iVar78 = iVar4 + iVar57;
    iVar57 = iVar57 - iVar4;
    iVar83 = iVar5 + iVar76;
    iVar76 = iVar76 - iVar5;
    iVar1 = iVar7 + iVar69;
    iVar69 = iVar69 - iVar7;
    iVar7 = (iVar17 + iVar6) * 0x2b4e;
    iVar20 = (iVar8 + iVar6) * 0x27e9;
    iVar21 = (iVar19 + iVar6) * 0x22fc;
    iVar4 = iVar18 + iVar30;
    iVar22 = (iVar6 - iVar19) * 0x1cb6;
    uVar49 = (iVar8 + iVar6) * 0x1555;
    iVar29 = (iVar6 - iVar17) * 0xd23;
    iVar30 = iVar30 - iVar18;
    iVar5 = iVar7 + iVar6 * -0x492a + iVar20 + iVar21;
    iVar6 = iVar29 + iVar6 * -0x3abe + uVar49 + iVar22;
    iVar18 = (iVar8 + iVar17) * 0x470;
    iVar24 = (iVar19 + iVar17) * -0x1555;
    iVar7 = iVar7 + iVar17 * 0x24d + iVar18 + iVar24;
    iVar25 = (iVar19 + iVar8) * -0x2b4e;
    uVar56 = iVar18 + iVar8 * -0x2406 + iVar20 + iVar25;
    iVar18 = iVar24 + iVar19 * 0x2218 + iVar21 + iVar25;
    pbVar41 = (byte *)(*(long *)(uVar42 + lVar58) + (uVar40 & 0xffffffff));
    bVar9 = *(byte *)(lVar51 + ((ulong)((uint)(iVar5 + iVar78) >> 0x12) & 0x3ff));
    *pbVar41 = bVar9;
    pbVar41[0xf] = *(byte *)(lVar51 + ((ulong)((uint)(iVar78 - iVar5) >> 0x12) & 0x3ff));
    pbVar41[1] = *(byte *)(lVar51 + ((ulong)((uint)(iVar7 + iVar83) >> 0x12) & 0x3ff));
    uVar14 = (iVar19 + iVar17) * -0x27e9;
    plVar48 = (long *)0x6485;
    uVar26 = uVar14 + iVar19 * 0x6485;
    iVar78 = (iVar19 - iVar8) * 0xd23;
    uVar65 = uVar26 + iVar22 + iVar78;
    uVar43 = (ulong)uVar65;
    pbVar41[0xe] = *(byte *)(lVar51 + ((ulong)((uint)(iVar83 - iVar7) >> 0x12) & 0x3ff));
    bVar10 = *(byte *)(lVar51 + ((ulong)(uVar56 + iVar1 >> 0x12) & 0x3ff));
    pbVar41[2] = bVar10;
    pbVar41[0xd] = *(byte *)(lVar51 + ((ulong)(iVar1 - uVar56 >> 0x12) & 0x3ff));
    pbVar41[3] = *(byte *)(lVar51 + ((ulong)((uint)(iVar18 + iVar4) >> 0x12) & 0x3ff));
    pbVar41[0xc] = *(byte *)(lVar51 + ((ulong)((uint)(iVar4 - iVar18) >> 0x12) & 0x3ff));
    pbVar41[4] = *(byte *)(lVar51 + ((ulong)(uVar65 + iVar30 >> 0x12) & 0x3ff));
    uVar27 = iVar29 + iVar17 * 0x3f1a;
    uVar70 = (ulong)uVar27;
    iVar83 = (iVar8 - iVar17) * 0x2d09;
    lVar39 = 0xffffe77a;
    iVar78 = iVar83 + iVar8 * -0x1886 + uVar49 + iVar78;
    pbVar41[0xb] = *(byte *)(lVar51 + ((ulong)(iVar30 - uVar65 >> 0x12) & 0x3ff));
    pbVar41[5] = *(byte *)(lVar51 + ((ulong)((uint)(iVar78 + iVar69) >> 0x12) & 0x3ff));
    iVar83 = uVar27 + iVar83 + uVar14;
    pbVar41[10] = *(byte *)(lVar51 + ((ulong)((uint)(iVar69 - iVar78) >> 0x12) & 0x3ff));
    pbVar41[6] = *(byte *)(lVar51 + ((ulong)((uint)(iVar83 + iVar76) >> 0x12) & 0x3ff));
    pbVar41[9] = *(byte *)(lVar51 + ((ulong)((uint)(iVar76 - iVar83) >> 0x12) & 0x3ff));
    pbVar41[7] = *(byte *)(lVar51 + ((ulong)((uint)(iVar6 + iVar57) >> 0x12) & 0x3ff));
    pbVar41[8] = *(byte *)(lVar51 + ((ulong)((uint)(iVar57 - iVar6) >> 0x12) & 0x3ff));
    lVar58 = lVar58 + 8;
  } while (lVar58 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_15d0) {
    return;
  }
  uVar40 = uStack_17f0;
  ___stack_chk_fail();
  uStack_1850 = (ulong)uVar56;
  uStack_1848 = (ulong)bVar9;
  uStack_1840 = (ulong)uVar26;
  uStack_1838 = (ulong)uVar14;
  uStack_1830 = uVar43;
  uStack_1828 = (ulong)bVar10;
  uStack_1820 = (ulong)uVar49;
  uStack_1818 = 0xd23;
  ppppuStack_1810 = &ppppuStack_1570;
  pcStack_1808 = FUN_1081d98e8;
  lStack_1858 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar51 = *(long *)(uVar70 + 0x1a8);
  psVar45 = (short *)(lVar39 + 0x70);
  puVar54 = auStack_18d8;
  uVar56 = 9;
  psVar59 = *(short **)(pbVar41 + 0x58);
  do {
    if (uVar56 != 5) {
      sVar60 = psVar45[-0x20];
      if (psVar45[-0x30] == 0 && psVar45[-0x28] == 0) {
        if (sVar60 != 0) {
LAB_1081d9990:
          iVar69 = 0;
          goto LAB_1081d99a0;
        }
        if (((psVar45[-0x10] != 0) || (psVar45[-8] != 0)) || (*psVar45 != 0)) {
          sVar60 = 0;
          goto LAB_1081d9990;
        }
        uVar65 = (int)psVar45[-0x38] * (int)*psVar59 * 4;
        *puVar54 = uVar65;
        puVar54[8] = uVar65;
        puVar54[0x10] = uVar65;
        lVar58 = 0x60;
      }
      else {
        iVar69 = psVar45[-0x28] * 0x3b21;
LAB_1081d99a0:
        lVar58 = (long)iVar69 * (long)(int)psVar59[0x10] +
                 (long)((int)psVar45[-8] * (int)psVar59[0x30]) * -0x187e;
        uVar43 = (long)(int)psVar45[-0x38] * (long)(int)*psVar59 * 0x4000 - lVar58;
        iVar69 = (int)psVar59[8] * (int)psVar45[-0x30];
        lVar72 = (long)((int)psVar59[0x38] * (int)*psVar45) * -0x6c2 +
                 (long)((int)psVar59[0x28] * (int)psVar45[-0x10]) * 0x2e75 +
                 (long)((int)psVar59[0x18] * (int)sVar60) * -0x4587 + (long)iVar69 * 0x21f9;
        lVar39 = (long)((int)psVar59[0x38] * (int)*psVar45) * -0x1050 +
                 (long)((int)psVar59[0x28] * (int)psVar45[-0x10]) * -0x133e +
                 (long)((int)psVar59[0x18] * (int)sVar60) * 0x1ccd + (long)iVar69 * 0x5203;
        lVar58 = lVar58 + (long)(int)psVar45[-0x38] * (long)(int)*psVar59 * 0x4000 + 0x800;
        *puVar54 = (uint)((ulong)(lVar39 + lVar58) >> 0xc);
        puVar54[0x18] = (uint)((ulong)(lVar58 - lVar39) >> 0xc);
        puVar54[8] = (uint)(lVar72 + uVar43 + 0x800 >> 0xc);
        uVar65 = (uint)((uVar43 + 0x800) - lVar72 >> 0xc);
        lVar58 = 0x40;
      }
      *(uint *)((long)puVar54 + lVar58) = uVar65;
    }
    psVar59 = psVar59 + 1;
    puVar54 = puVar54 + 1;
    uVar56 = uVar56 - 1;
    psVar45 = psVar45 + 1;
  } while (1 < uVar56);
  lVar58 = 0;
  lVar51 = lVar51 + 0x80;
  lVar39 = 0x1ccd;
  lVar72 = 0x5203;
  psVar45 = (short *)0x3b21;
  uVar40 = uVar40 & 0xffffffff;
  do {
    plVar47 = plVar48 + 1;
    piVar67 = (int *)((long)auStack_18d8 + lVar58);
    pbVar41 = (byte *)(*plVar48 + uVar40);
    iVar69 = *(int *)((long)auStack_18d8 + lVar58 + 4);
    iVar57 = *(int *)((long)auStack_18d8 + lVar58 + 8);
    iVar76 = *(int *)((long)auStack_18d8 + lVar58 + 0xc);
    if (iVar69 == 0 && iVar57 == 0) {
      if (iVar76 != 0) {
LAB_1081d9b14:
        iVar57 = 0;
        goto LAB_1081d9b20;
      }
      if (((*(int *)((long)auStack_18d8 + lVar58 + 0x14) != 0) ||
          (*(int *)((long)auStack_18d8 + lVar58 + 0x18) != 0)) ||
         (*(int *)((long)auStack_18d8 + lVar58 + 0x1c) != 0)) {
        iVar76 = 0;
        goto LAB_1081d9b14;
      }
      bVar9 = *(byte *)(lVar51 + ((ulong)(*piVar67 + 0x10U >> 5) & 0x3ff));
      *pbVar41 = bVar9;
      pbVar41[1] = bVar9;
      pbVar41[2] = bVar9;
      lVar68 = 3;
      uVar56 = 0;
      uVar42 = 0;
    }
    else {
      iVar57 = iVar57 * 0x3b21;
LAB_1081d9b20:
      uVar56 = *(uint *)((long)auStack_18d8 + lVar58);
      iVar78 = *(int *)((long)auStack_18d8 + lVar58 + 0x14);
      iVar57 = iVar57 + *(int *)((long)auStack_18d8 + lVar58 + 0x18) * -0x187e;
      uVar65 = uVar56 * 0x4000 - iVar57;
      uVar43 = (ulong)uVar65;
      iVar83 = *(int *)((long)auStack_18d8 + lVar58 + 0x1c);
      iVar1 = iVar69 * 0x5203 + iVar83 * -0x1050 + iVar78 * -0x133e + iVar76 * 0x1ccd;
      iVar57 = iVar57 + uVar56 * 0x4000 + 0x40000;
      bVar9 = *(byte *)(lVar51 + ((ulong)((uint)(iVar1 + iVar57) >> 0x13) & 0x3ff));
      uVar42 = (ulong)bVar9;
      iVar76 = iVar69 * 0x21f9 + iVar83 * -0x6c2 + iVar78 * 0x2e75 + iVar76 * -0x4587;
      *pbVar41 = bVar9;
      pbVar41[3] = *(byte *)(lVar51 + ((ulong)((uint)(iVar57 - iVar1) >> 0x13) & 0x3ff));
      iVar69 = uVar65 + 0x40000;
      bVar9 = *(byte *)(lVar51 + ((ulong)((uint)(iVar76 + iVar69) >> 0x13) & 0x3ff));
      piVar67 = (int *)(ulong)bVar9;
      pbVar41[1] = bVar9;
      bVar9 = *(byte *)(lVar51 + ((ulong)((uint)(iVar69 - iVar76) >> 0x13) & 0x3ff));
      lVar68 = 2;
    }
    pbVar41[lVar68] = bVar9;
    lVar58 = lVar58 + 0x20;
    plVar48 = plVar47;
  } while (lVar58 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1858) {
    return;
  }
  ___stack_chk_fail();
  uStack_1910 = uVar43;
  uStack_1908 = (ulong)uVar56;
  uStack_1900 = uVar42;
  piStack_18f8 = piVar67;
  ppppuStack_18f0 = &ppppuStack_1810;
  pcStack_18e8 = FUN_1081d9c18;
  lStack_1918 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar58 = *(long *)(lVar39 + 0x1a8);
  uVar56 = 9;
  psVar59 = *(short **)(lVar72 + 0x58);
  lVar51 = 0x20;
  do {
    bVar38 = uVar56 != 3;
    uVar56 = uVar56 - 1;
    if ((bVar38) && ((uVar56 & 0x7ffffffd) != 4)) {
      sVar60 = psVar45[0x28];
      if (psVar45[8] == 0 && psVar45[0x18] == 0) {
        if (sVar60 != 0) {
LAB_1081d9cb0:
          iVar69 = 0;
          goto LAB_1081d9cc0;
        }
        if (psVar45[0x38] != 0) {
          sVar60 = 0;
          goto LAB_1081d9cb0;
        }
        iVar69 = (int)*psVar45 * (int)*psVar59 * 4;
        *(int *)((long)aiStack_1978 + lVar51) = iVar69;
      }
      else {
        iVar69 = psVar45[0x18] * -0x28ba;
LAB_1081d9cc0:
        lVar39 = (long)((int)psVar45[0x38] * (int)psVar59[0x38]) * -0x1712 +
                 (long)((int)sVar60 * (int)psVar59[0x28]) * 0x1b37 +
                 (long)iVar69 * (long)(int)psVar59[0x18] +
                 (long)((int)psVar45[8] * (int)psVar59[8]) * 0x73fc;
        uVar42 = (long)(int)*psVar45 * (long)(int)*psVar59 * 0x8000 | 0x1000;
        *(int *)((long)aiStack_1978 + lVar51) = (int)(lVar39 + uVar42 >> 0xd);
        iVar69 = (int)(uVar42 - lVar39 >> 0xd);
      }
      *(int *)((long)auStack_1958 + lVar51) = iVar69;
    }
    psVar45 = psVar45 + 1;
    psVar59 = psVar59 + 1;
    lVar51 = lVar51 + 4;
  } while (1 < uVar56);
  lVar51 = 0;
  lVar58 = lVar58 + 0x80;
  puVar54 = auStack_1958;
  uVar42 = uVar40 & 0xffffffff;
  bVar38 = true;
  do {
    pbVar41 = (byte *)(plVar47[lVar51] + uVar42);
    uVar56 = puVar54[3];
    uVar70 = (ulong)uVar56;
    uVar65 = puVar54[5];
    if (puVar54[1] == 0 && uVar56 == 0) {
      if (uVar65 != 0) {
LAB_1081d9da0:
        iVar69 = 0;
        goto LAB_1081d9dac;
      }
      if (puVar54[7] != 0) {
        uVar65 = 0;
        goto LAB_1081d9da0;
      }
      bVar9 = *(byte *)(lVar58 + ((ulong)(*puVar54 + 0x10 >> 5) & 0x3ff));
      *pbVar41 = bVar9;
      uVar56 = 0;
    }
    else {
      iVar69 = uVar56 * -0x28ba;
LAB_1081d9dac:
      uVar56 = *puVar54;
      uVar40 = (ulong)puVar54[7];
      iVar57 = iVar69 + puVar54[1] * 0x73fc + puVar54[7] * -0x1712 + uVar65 * 0x1b37;
      iVar69 = uVar56 * 0x8000 + 0x80000;
      bVar9 = *(byte *)(lVar58 + ((ulong)((uint)(iVar57 + iVar69) >> 0x14) & 0x3ff));
      uVar70 = (ulong)bVar9;
      *pbVar41 = bVar9;
      bVar9 = *(byte *)(lVar58 + ((ulong)((uint)(iVar69 - iVar57) >> 0x14) & 0x3ff));
    }
    uVar43 = (ulong)bVar9;
    puVar46 = (ushort *)(ulong)uVar56;
    pbVar41[1] = bVar9;
    puVar54 = puVar54 + 8;
    lVar51 = 1;
    bVar37 = !bVar38;
    bVar38 = false;
    if (bVar37) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1918) {
        ___stack_chk_fail();
        *(undefined1 *)(*plVar47 + (uVar40 & 0xffffffff)) =
             *(undefined1 *)
              (*(long *)(uVar43 + 0x1a8) +
               ((ulong)((uint)**(ushort **)(uVar70 + 0x58) * (uint)*puVar46 + 4 >> 3) & 0x3ff) +
              0x80);
        return;
      }
      return;
    }
  } while( true );
}



/* Entry: 1081d6138; end: 1081d6547;  */

void FUN_1081d6138(long param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  bool bVar37;
  bool bVar38;
  short sVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  byte *pbVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  short *psVar47;
  ushort *puVar48;
  long *plVar49;
  long *plVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint *puVar54;
  long lVar55;
  int iVar56;
  short *psVar57;
  long lVar58;
  long lVar59;
  uint uVar60;
  long lVar61;
  undefined1 uVar62;
  uint uVar63;
  long lVar64;
  int *piVar65;
  long lVar66;
  int iVar67;
  ulong uVar68;
  short sVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  int iVar74;
  ulong unaff_x24;
  long lVar75;
  int iVar76;
  ulong unaff_x25;
  long lVar77;
  long lVar78;
  long lVar79;
  ulong unaff_x26;
  long lVar80;
  int iVar81;
  ulong unaff_x27;
  ulong unaff_x28;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  int aiStack_1848 [8];
  uint auStack_1828 [16];
  long lStack_17e8;
  ulong uStack_17e0;
  ulong uStack_17d8;
  ulong uStack_17d0;
  int *piStack_17c8;
  undefined8 ****ppppuStack_17c0;
  code *pcStack_17b8;
  uint auStack_17a8 [32];
  long lStack_1728;
  ulong uStack_1720;
  ulong uStack_1718;
  ulong uStack_1710;
  ulong uStack_1708;
  ulong uStack_1700;
  ulong uStack_16f8;
  ulong uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 ****ppppuStack_16e0;
  code *pcStack_16d8;
  long lStack_16d0;
  undefined4 uStack_16c4;
  ulong uStack_16c0;
  long lStack_16b8;
  ulong uStack_16b0;
  long lStack_16a8;
  int aiStack_16a0 [128];
  long lStack_14a0;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  ulong uStack_1470;
  ulong uStack_1468;
  undefined8 uStack_1460;
  ulong uStack_1458;
  ulong uStack_1450;
  ulong uStack_1448;
  undefined8 ****ppppuStack_1440;
  undefined8 uStack_1438;
  long lStack_1428;
  undefined4 uStack_141c;
  ulong uStack_1418;
  long lStack_1410;
  ulong uStack_1408;
  uint auStack_1400 [120];
  long lStack_1220;
  ulong uStack_1210;
  ulong uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  long lStack_11d0;
  ulong uStack_11c8;
  undefined8 ****ppppuStack_11c0;
  undefined8 uStack_11b8;
  long lStack_11a8;
  undefined4 uStack_119c;
  long lStack_1198;
  uint auStack_1190 [112];
  long lStack_fd0;
  undefined8 uStack_fc0;
  ulong uStack_fb8;
  ulong uStack_fb0;
  ulong uStack_fa8;
  ulong uStack_fa0;
  undefined8 uStack_f98;
  ulong uStack_f90;
  undefined8 uStack_f88;
  ulong uStack_f80;
  ulong uStack_f78;
  undefined8 ****ppppuStack_f70;
  undefined8 uStack_f68;
  long lStack_f58;
  undefined4 uStack_f4c;
  ulong uStack_f48;
  int aiStack_f40 [104];
  long lStack_da0;
  ulong uStack_d90;
  ulong uStack_d88;
  undefined1 *puStack_d80;
  ulong uStack_d78;
  ulong uStack_d70;
  ulong uStack_d68;
  ulong uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 ****ppppuStack_d40;
  undefined8 uStack_d38;
  long lStack_d28;
  uint uStack_d1c;
  ulong uStack_d18;
  uint auStack_d10 [96];
  long lStack_b90;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  long *plStack_b40;
  ulong uStack_b38;
  undefined8 ****ppppuStack_b30;
  undefined8 uStack_b28;
  long lStack_b18;
  undefined4 uStack_b0c;
  long *plStack_b08;
  int aiStack_b00 [88];
  long lStack_9a0;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  undefined1 *puStack_958;
  ulong uStack_950;
  undefined8 uStack_948;
  undefined8 ****ppppuStack_940;
  undefined8 uStack_938;
  long lStack_930;
  undefined4 uStack_924;
  uint auStack_920 [80];
  long lStack_7e0;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  undefined8 uStack_790;
  ulong uStack_788;
  undefined8 ****ppppuStack_780;
  undefined8 uStack_778;
  long lStack_770;
  uint uStack_764;
  int aiStack_760 [72];
  long lStack_640;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  long lStack_608;
  long lStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  undefined8 ****ppppuStack_5e0;
  code *pcStack_5d8;
  int aiStack_5cc [9];
  long lStack_5a8;
  undefined8 ****ppppuStack_5a0;
  code *pcStack_598;
  int aiStack_58c [10];
  undefined4 auStack_564 [5];
  undefined4 auStack_550 [5];
  undefined4 auStack_53c [5];
  long lStack_528;
  long lStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  undefined1 ****ppppuStack_500;
  code *pcStack_4f8;
  int aiStack_4e8 [12];
  undefined4 auStack_4b8 [6];
  undefined4 auStack_4a0 [6];
  int aiStack_488 [6];
  undefined4 auStack_470 [6];
  long lStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  undefined1 *puStack_428;
  undefined1 ***pppuStack_420;
  code *pcStack_418;
  long lStack_410;
  undefined4 uStack_408;
  int aiStack_404 [14];
  undefined4 auStack_3cc [7];
  undefined4 auStack_3b0 [7];
  undefined4 auStack_394 [7];
  undefined4 auStack_378 [7];
  undefined4 auStack_35c [7];
  long lStack_340;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  ulong uStack_2e8;
  undefined1 **ppuStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  uint uStack_2c4;
  int aiStack_2c0 [64];
  long lStack_1c0;
  undefined1 *puStack_160;
  code *pcStack_158;
  uint auStack_148 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar55 = *(long *)(param_1 + 0x1a8);
  psVar57 = *(short **)(param_2 + 0x58);
  psVar47 = (short *)(param_3 + 0x40);
  puVar54 = auStack_148;
  uVar60 = 9;
  do {
    sVar39 = psVar47[-0x10];
    sVar69 = psVar47[-8];
    if (psVar47[-0x18] == 0 && sVar39 == 0) {
      if (sVar69 != 0) {
LAB_1081d61d4:
        sVar39 = 0;
        goto LAB_1081d61e0;
      }
      if ((((*psVar47 != 0) || (psVar47[8] != 0)) || (psVar47[0x10] != 0)) || (psVar47[0x18] != 0))
      {
        sVar69 = 0;
        goto LAB_1081d61d4;
      }
      uVar63 = (int)*psVar57 * (int)psVar47[-0x20];
      *puVar54 = uVar63;
      puVar54[8] = uVar63;
      puVar54[0x10] = uVar63;
      puVar54[0x18] = uVar63;
      puVar54[0x20] = uVar63;
      puVar54[0x28] = uVar63;
      puVar54[0x30] = uVar63;
      lVar40 = 0xe0;
    }
    else {
LAB_1081d61e0:
      sVar13 = psVar57[8] * psVar47[-0x18];
      sVar12 = psVar57[0x28] * psVar47[8] + psVar57[0x18] * sVar69;
      sVar31 = psVar57[0x28] * psVar47[8] - psVar57[0x18] * sVar69;
      sVar69 = psVar57[0x38] * psVar47[0x18] + sVar13;
      iVar67 = (int)(short)(sVar13 - psVar57[0x38] * psVar47[0x18]);
      uVar63 = (iVar67 + sVar31) * 0x1d900 & 0xffff0000;
      sVar13 = sVar69 + sVar12;
      sVar36 = (short)(uVar63 + sVar31 * -0x29d00 >> 0x10) - sVar13;
      sVar35 = (short)((uint)(((int)sVar69 - (int)sVar12) * 0x16a00) >> 0x10) - sVar36;
      sVar31 = sVar35 + (short)(iVar67 * 0x11500 - uVar63 >> 0x10);
      sVar69 = psVar57[0x20] * *psVar47 + *psVar57 * psVar47[-0x20];
      sVar12 = psVar57[0x30] * psVar47[0x10] + psVar57[0x10] * sVar39;
      sVar32 = sVar12 + sVar69;
      sVar34 = *psVar57 * psVar47[-0x20] - psVar57[0x20] * *psVar47;
      sVar33 = (short)((uint)(((int)(short)(psVar57[0x10] * sVar39) -
                              (int)(short)(psVar57[0x30] * psVar47[0x10])) * 0x16a00) >> 0x10) -
               sVar12;
      sVar39 = sVar33 + sVar34;
      sVar34 = sVar34 - sVar33;
      sVar69 = sVar69 - sVar12;
      *puVar54 = (int)sVar13 + (int)sVar32;
      puVar54[0x38] = (int)sVar32 - (int)sVar13;
      puVar54[8] = (int)sVar36 + (int)sVar39;
      puVar54[0x30] = (int)sVar39 - (int)sVar36;
      puVar54[0x10] = (int)sVar35 + (int)sVar34;
      puVar54[0x28] = (int)sVar34 - (int)sVar35;
      puVar54[0x20] = (int)sVar31 + (int)sVar69;
      uVar63 = (int)sVar69 - (int)sVar31;
      lVar40 = 0x60;
    }
    *(uint *)((long)puVar54 + lVar40) = uVar63;
    puVar54 = puVar54 + 1;
    psVar57 = psVar57 + 1;
    uVar60 = uVar60 - 1;
    psVar47 = psVar47 + 1;
  } while (1 < uVar60);
  lVar40 = 0;
  lVar55 = lVar55 + 0x80;
  do {
    plVar50 = param_4 + 1;
    puVar2 = (undefined4 *)(*param_4 + (param_5 & 0xffffffff));
    iVar67 = *(int *)((long)auStack_148 + lVar40 + 4);
    iVar56 = *(int *)((long)auStack_148 + lVar40 + 8);
    iVar74 = *(int *)((long)auStack_148 + lVar40 + 0xc);
    if (iVar67 == 0 && iVar56 == 0) {
      if (iVar74 != 0) {
LAB_1081d63c4:
        iVar56 = 0;
        goto LAB_1081d63c8;
      }
      if (((*(int *)((long)auStack_148 + lVar40 + 0x10) != 0) ||
          (*(int *)((long)auStack_148 + lVar40 + 0x14) != 0)) ||
         ((*(int *)((long)auStack_148 + lVar40 + 0x18) != 0 ||
          (*(int *)((long)auStack_148 + lVar40 + 0x1c) != 0)))) {
        iVar74 = 0;
        goto LAB_1081d63c4;
      }
      uVar62 = *(undefined1 *)
                (lVar55 + ((ulong)(*(uint *)((long)auStack_148 + lVar40) >> 5) & 0x3ff));
      *puVar2 = CONCAT13(uVar62,CONCAT12(uVar62,CONCAT11(uVar62,uVar62)));
      *(undefined1 *)(puVar2 + 1) = uVar62;
      *(undefined1 *)((long)puVar2 + 5) = uVar62;
      *(undefined1 *)((long)puVar2 + 6) = uVar62;
      lVar41 = 7;
      uVar60 = 0;
      uVar26 = 0;
      uVar42 = 0;
    }
    else {
LAB_1081d63c8:
      uVar60 = *(uint *)((long)auStack_148 + lVar40);
      iVar4 = *(int *)((long)auStack_148 + lVar40 + 0x10);
      iVar6 = *(int *)((long)auStack_148 + lVar40 + 0x14);
      iVar76 = iVar4 + uVar60;
      iVar4 = uVar60 - iVar4;
      iVar5 = *(int *)((long)auStack_148 + lVar40 + 0x18);
      iVar7 = *(int *)((long)auStack_148 + lVar40 + 0x1c);
      iVar81 = iVar5 + iVar56;
      iVar1 = iVar81 + iVar76;
      iVar76 = iVar76 - iVar81;
      iVar56 = ((int)(short)iVar56 - (int)(short)iVar5) * 0x16a00 + iVar81 * -0x10000 >> 0x10;
      iVar81 = iVar4 + iVar56;
      uVar26 = iVar4 - iVar56;
      iVar56 = iVar74 + iVar6;
      sVar39 = (short)iVar6 - (short)iVar74;
      iVar74 = iVar7 + iVar67;
      iVar4 = iVar74 + iVar56;
      iVar5 = (int)(short)((short)iVar67 - (short)iVar7);
      uVar63 = (iVar5 + sVar39) * 0x1d900 & 0xffff0000;
      uVar60 = sVar39 * -0x29d00 + iVar4 * -0x10000 + uVar63;
      *(undefined1 *)puVar2 =
           *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar4 + iVar1) >> 5) & 0x3ff));
      *(undefined1 *)((long)puVar2 + 7) =
           *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar1 - iVar4) >> 5) & 0x3ff));
      iVar67 = (int)uVar60 >> 0x10;
      *(undefined1 *)((long)puVar2 + 1) =
           *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar81 + iVar67) >> 5) & 0x3ff));
      uVar60 = ((int)(short)iVar74 - (int)(short)iVar56) * 0x16a00 - (uVar60 & 0xffff0000);
      *(undefined1 *)((long)puVar2 + 6) =
           *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar81 - iVar67) >> 5) & 0x3ff));
      *(undefined1 *)((long)puVar2 + 2) =
           *(undefined1 *)(lVar55 + ((ulong)(uVar26 + ((int)uVar60 >> 0x10) >> 5) & 0x3ff));
      *(undefined1 *)((long)puVar2 + 5) =
           *(undefined1 *)(lVar55 + ((ulong)(uVar26 - ((int)uVar60 >> 0x10) >> 5) & 0x3ff));
      iVar67 = (int)((iVar5 * 0x11500 - uVar63) + (uVar60 & 0xffff0000)) >> 0x10;
      bVar9 = *(byte *)(lVar55 + ((ulong)((uint)(iVar76 + iVar67) >> 5) & 0x3ff));
      uVar42 = (ulong)bVar9;
      *(byte *)(puVar2 + 1) = bVar9;
      uVar62 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar76 - iVar67) >> 5) & 0x3ff));
      lVar41 = 3;
    }
    uVar44 = (ulong)uVar26;
    *(undefined1 *)((long)puVar2 + lVar41) = uVar62;
    lVar40 = lVar40 + 0x20;
    param_4 = plVar50;
  } while (lVar40 != 0x100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puStack_160 = &stack0xfffffffffffffff0;
  pcStack_158 = FUN_1081d6548;
  uStack_2c4 = uVar60;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2d0 = *(long *)(lVar41 + 0x1a8);
  psVar47 = (short *)(uVar44 + 0x40);
  piVar65 = aiStack_2c0;
  uVar63 = 9;
  psVar57 = *(short **)(uVar42 + 0x58);
  do {
    sVar39 = psVar47[-0x18];
    sVar69 = psVar47[-8];
    if (sVar39 == 0 && psVar47[-0x10] == 0) {
      if (sVar69 != 0) {
LAB_1081d65f4:
        iVar67 = 0;
        goto LAB_1081d6600;
      }
      if (((*psVar47 != 0) || (psVar47[8] != 0)) || ((psVar47[0x10] != 0 || (psVar47[0x18] != 0))))
      {
        sVar69 = 0;
        goto LAB_1081d65f4;
      }
      iVar67 = (int)psVar47[-0x20] * (int)*psVar57 * 4;
      *piVar65 = iVar67;
      piVar65[8] = iVar67;
      piVar65[0x10] = iVar67;
      piVar65[0x18] = iVar67;
      piVar65[0x20] = iVar67;
      piVar65[0x28] = iVar67;
      piVar65[0x30] = iVar67;
      lVar55 = 0xe0;
    }
    else {
      iVar67 = (int)psVar47[-0x10];
LAB_1081d6600:
      lVar55 = ((long)iVar67 * (long)(int)psVar57[0x10] +
               (long)(int)psVar57[0x30] * (long)(int)psVar47[0x10]) * 0x1151;
      lVar72 = lVar55 + (long)((int)psVar57[0x30] * (int)psVar47[0x10]) * -0x3b21;
      unaff_x25 = lVar55 + (long)(int)((long)iVar67 * (long)(int)psVar57[0x10]) * 0x187e;
      unaff_x27 = (long)(int)*psVar57 * (long)(int)psVar47[-0x20] +
                  (long)(int)psVar57[0x20] * (long)(int)*psVar47;
      unaff_x26 = (long)(int)*psVar57 * (long)(int)psVar47[-0x20] -
                  (long)(int)psVar57[0x20] * (long)(int)*psVar47;
      unaff_x24 = unaff_x26 * 0x2000 - lVar72;
      unaff_x28 = (long)(int)psVar57[0x38] * (long)(int)psVar47[0x18];
      lVar55 = (long)(int)psVar57[0x28] * (long)(int)psVar47[8];
      sVar12 = psVar57[0x18];
      sVar13 = psVar57[8];
      lVar41 = unaff_x28 + (long)(int)sVar12 * (long)(int)sVar69;
      lVar40 = lVar55 + (long)(int)sVar13 * (long)(int)sVar39;
      lVar66 = (lVar40 + lVar41) * 0x25a1;
      lVar59 = (unaff_x28 + (long)(int)sVar13 * (long)(int)sVar39) * -0x1ccd;
      lVar61 = (lVar55 + (long)(int)sVar12 * (long)(int)sVar69) * -0x5203;
      lVar70 = lVar66 + lVar41 * -0x3ec5;
      lVar66 = lVar66 + lVar40 * -0xc7c;
      lVar40 = lVar59 + (long)(int)unaff_x28 * 0x98e + lVar70;
      lVar41 = lVar61 + (long)(int)lVar55 * 0x41b3 + lVar66;
      lVar70 = lVar61 + (long)((int)sVar12 * (int)sVar69) * 0x6254 + lVar70;
      lVar66 = lVar59 + (long)((int)sVar13 * (int)sVar39) * 0x300b + lVar66;
      lVar55 = unaff_x25 + unaff_x27 * 0x2000 + 0x400;
      *piVar65 = (int)((ulong)(lVar66 + lVar55) >> 0xb);
      piVar65[0x38] = (int)((ulong)(lVar55 - lVar66) >> 0xb);
      lVar55 = lVar72 + unaff_x26 * 0x2000 + 0x400;
      piVar65[8] = (int)((ulong)(lVar70 + lVar55) >> 0xb);
      piVar65[0x30] = (int)((ulong)(lVar55 - lVar70) >> 0xb);
      piVar65[0x10] = (int)(lVar41 + unaff_x24 + 0x400 >> 0xb);
      piVar65[0x28] = (int)((unaff_x24 + 0x400) - lVar41 >> 0xb);
      lVar55 = (unaff_x27 * 0x2000 - unaff_x25) + 0x400;
      piVar65[0x18] = (int)((ulong)(lVar40 + lVar55) >> 0xb);
      iVar67 = (int)((ulong)(lVar55 - lVar40) >> 0xb);
      lVar55 = 0x80;
    }
    *(int *)((long)piVar65 + lVar55) = iVar67;
    piVar65 = piVar65 + 1;
    psVar57 = psVar57 + 1;
    uVar63 = uVar63 - 1;
    psVar47 = psVar47 + 1;
  } while (1 < uVar63);
  lVar40 = 0;
  lVar55 = lStack_2d0 + 0x80;
  lVar41 = 0x300b;
  lVar70 = 0xffffe333;
  lVar66 = 0xffffadfd;
  uVar42 = (ulong)uVar60;
  do {
    plVar49 = plVar50 + 1;
    pbVar43 = (byte *)(*plVar50 + uVar42);
    iVar67 = *(int *)((long)aiStack_2c0 + lVar40 + 4);
    iVar56 = *(int *)((long)aiStack_2c0 + lVar40 + 8);
    iVar74 = *(int *)((long)aiStack_2c0 + lVar40 + 0xc);
    if (iVar67 == 0 && iVar56 == 0) {
      if (iVar74 != 0) {
LAB_1081d6824:
        iVar56 = 0;
        goto LAB_1081d6828;
      }
      if ((((*(int *)((long)aiStack_2c0 + lVar40 + 0x10) != 0) ||
           (*(int *)((long)aiStack_2c0 + lVar40 + 0x14) != 0)) ||
          (*(int *)((long)aiStack_2c0 + lVar40 + 0x18) != 0)) ||
         (*(int *)((long)aiStack_2c0 + lVar40 + 0x1c) != 0)) {
        iVar74 = 0;
        goto LAB_1081d6824;
      }
      bVar9 = *(byte *)(lVar55 + ((ulong)(*(int *)((long)aiStack_2c0 + lVar40) + 0x10U >> 5) & 0x3ff
                                 ));
      pbVar43[4] = bVar9;
      *(uint *)pbVar43 = CONCAT13(bVar9,CONCAT12(bVar9,CONCAT11(bVar9,bVar9)));
      pbVar43[5] = bVar9;
      pbVar43[6] = bVar9;
      lVar59 = 7;
      uVar26 = 0;
      uVar44 = 0;
      uVar68 = 0;
    }
    else {
LAB_1081d6828:
      iVar76 = *(int *)((long)aiStack_2c0 + lVar40 + 0x18);
      iVar1 = *(int *)((long)aiStack_2c0 + lVar40 + 0x1c);
      iVar4 = (iVar56 + iVar76) * 0x1151;
      uVar26 = iVar4 + iVar76 * -0x3b21;
      iVar4 = iVar4 + iVar56 * 0x187e;
      iVar76 = *(int *)((long)aiStack_2c0 + lVar40);
      iVar56 = *(int *)((long)aiStack_2c0 + lVar40 + 0x10);
      uVar63 = *(uint *)((long)aiStack_2c0 + lVar40 + 0x14);
      unaff_x27 = (ulong)uVar63;
      uVar60 = iVar56 + iVar76;
      unaff_x28 = (ulong)uVar60;
      uVar27 = iVar76 - iVar56;
      unaff_x25 = (ulong)uVar27;
      uVar51 = uVar27 * 0x2000 - uVar26;
      unaff_x26 = (ulong)uVar51;
      iVar76 = (iVar74 + iVar1 + uVar63 + iVar67) * 0x25a1;
      iVar5 = (iVar1 + iVar67) * -0x1ccd;
      iVar56 = (iVar74 + uVar63) * -0x5203;
      iVar81 = iVar76 + (iVar74 + iVar1) * -0x3ec5;
      iVar76 = iVar76 + (uVar63 + iVar67) * -0xc7c;
      uVar63 = iVar56 + uVar63 * 0x41b3;
      unaff_x24 = (ulong)uVar63;
      iVar56 = iVar56 + iVar74 * 0x6254 + iVar81;
      iVar74 = iVar5 + iVar67 * 0x300b + iVar76;
      iVar67 = iVar4 + uVar60 * 0x2000 + 0x20000;
      bVar9 = *(byte *)(lVar55 + ((ulong)((uint)(iVar74 + iVar67) >> 0x12) & 0x3ff));
      uVar44 = (ulong)bVar9;
      *pbVar43 = bVar9;
      pbVar43[7] = *(byte *)(lVar55 + ((ulong)((uint)(iVar67 - iVar74) >> 0x12) & 0x3ff));
      iVar67 = uVar26 + uVar27 * 0x2000 + 0x20000;
      bVar9 = *(byte *)(lVar55 + ((ulong)((uint)(iVar56 + iVar67) >> 0x12) & 0x3ff));
      uVar68 = (ulong)bVar9;
      iVar76 = uVar63 + iVar76;
      pbVar43[1] = bVar9;
      pbVar43[6] = *(byte *)(lVar55 + ((ulong)((uint)(iVar67 - iVar56) >> 0x12) & 0x3ff));
      iVar67 = uVar51 + 0x20000;
      iVar81 = iVar5 + iVar1 * 0x98e + iVar81;
      pbVar43[2] = *(byte *)(lVar55 + ((ulong)((uint)(iVar76 + iVar67) >> 0x12) & 0x3ff));
      pbVar43[5] = *(byte *)(lVar55 + ((ulong)((uint)(iVar67 - iVar76) >> 0x12) & 0x3ff));
      iVar67 = (uVar60 * 0x2000 - iVar4) + 0x20000;
      pbVar43[3] = *(byte *)(lVar55 + ((ulong)((uint)(iVar81 + iVar67) >> 0x12) & 0x3ff));
      bVar9 = *(byte *)(lVar55 + ((ulong)((uint)(iVar67 - iVar81) >> 0x12) & 0x3ff));
      lVar59 = 4;
    }
    pbVar43[lVar59] = bVar9;
    lVar40 = lVar40 + 0x20;
    plVar50 = plVar49;
  } while (lVar40 != 0x100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  uStack_330 = unaff_x28;
  uStack_328 = unaff_x27;
  uStack_320 = unaff_x26;
  uStack_318 = unaff_x25;
  uStack_310 = unaff_x24;
  uStack_308 = (ulong)uVar26;
  uStack_300 = uVar44;
  uStack_2f8 = uVar68;
  lStack_2f0 = lVar59;
  uStack_2e8 = (ulong)bVar9;
  ppuStack_2e0 = &puStack_160;
  uStack_2d8 = 0x1081d69c8;
  uStack_408 = (int)uVar42;
  lVar55 = 0;
  lStack_340 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_410 = *(long *)(lVar41 + 0x1a8);
  lVar40 = *(long *)(lVar70 + 0x58);
  do {
    psVar47 = (short *)(lVar40 + lVar55 * 2);
    psVar57 = (short *)(lVar66 + lVar55 * 2);
    uVar44 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    lVar61 = (long)(int)psVar47[0x10] * (long)(int)psVar57[0x10];
    lVar82 = (long)(int)psVar47[0x20] * (long)(int)psVar57[0x20];
    sVar39 = psVar57[0x30];
    sVar69 = psVar47[0x30];
    lVar70 = (lVar82 - (long)(int)sVar69 * (long)(int)sVar39) * 0x1c37;
    lVar72 = (lVar61 - (long)(int)psVar47[0x20] * (long)(int)psVar57[0x20]) * 0xa12;
    lVar41 = uVar44 + (long)(int)lVar82 * -0x3aeb + lVar72 + lVar70;
    lVar53 = lVar61 + (long)(int)sVar69 * (long)(int)sVar39;
    lVar59 = uVar44 + lVar53 * 0x28c6;
    lVar70 = lVar70 + (long)((int)sVar69 * (int)sVar39) * -0x27d + lVar59;
    lVar59 = lVar72 + (long)(int)lVar61 * -0x4f0f + lVar59;
    lVar75 = (long)(int)psVar47[8] * (long)(int)psVar57[8];
    sVar39 = psVar57[0x18];
    sVar69 = psVar47[0x18];
    sVar12 = psVar57[0x28];
    sVar13 = psVar47[0x28];
    lVar72 = (lVar75 + (long)(int)sVar69 * (long)(int)sVar39) * 0x1def;
    lVar77 = lVar75 - (long)(int)sVar69 * (long)(int)sVar39;
    lVar78 = ((long)(int)sVar69 * (long)(int)sVar39 + (long)(int)sVar13 * (long)(int)sVar12) *
             -0x2c1f;
    lVar61 = lVar72 + lVar77 * 0x573 + lVar78;
    lVar75 = (lVar75 + (long)(int)sVar13 * (long)(int)sVar12) * 0x13a3;
    lVar72 = lVar75 + lVar72 + lVar77 * -0x573;
    lVar78 = lVar75 + (long)((int)sVar13 * (int)sVar12) * 0x3bde + lVar78;
    aiStack_404[lVar55] = (int)((ulong)(lVar72 + lVar70) >> 0xb);
    auStack_35c[lVar55] = (int)((ulong)(lVar70 - lVar72) >> 0xb);
    aiStack_404[lVar55 + 7] = (int)((ulong)(lVar61 + lVar41) >> 0xb);
    auStack_378[lVar55] = (int)((ulong)(lVar41 - lVar61) >> 0xb);
    auStack_3cc[lVar55] = (int)((ulong)(lVar78 + lVar59) >> 0xb);
    auStack_394[lVar55] = (int)((ulong)(lVar59 - lVar78) >> 0xb);
    auStack_3b0[lVar55] = (int)(uVar44 + (lVar82 - lVar53) * 0x2d41 >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 7);
  lVar40 = 0;
  lVar55 = lStack_410 + 0x80;
  lVar41 = 0x1def;
  lVar70 = 0x573;
  lVar66 = 0xffffd3e1;
  uVar42 = uVar42 & 0xffffffff;
  do {
    plVar50 = plVar49 + 1;
    iVar81 = *(int *)((long)aiStack_404 + lVar40 + 4);
    iVar67 = *(int *)((long)aiStack_404 + lVar40) * 0x2000 + 0x20000;
    iVar74 = *(int *)((long)aiStack_404 + lVar40 + 0x14);
    iVar1 = *(int *)((long)aiStack_404 + lVar40 + 0x18);
    uVar51 = *(uint *)((long)aiStack_404 + lVar40 + 0x10);
    iVar5 = (uVar51 - iVar1) * 0x1c37;
    iVar76 = *(int *)((long)aiStack_404 + lVar40 + 8);
    iVar4 = *(int *)((long)aiStack_404 + lVar40 + 0xc);
    iVar6 = (iVar76 - uVar51) * 0xa12;
    iVar7 = (iVar4 + iVar81) * 0x1def;
    uVar14 = iVar6 + iVar76 * -0x4f0f;
    uVar15 = iVar67 + (iVar1 + iVar76) * 0x28c6;
    iVar56 = iVar5 + iVar1 * -0x27d + uVar15;
    iVar18 = (iVar74 + iVar81) * 0x13a3;
    uVar60 = iVar7 + (iVar81 - iVar4) * -0x573 + iVar18;
    uVar16 = iVar18 + iVar74 * 0x3bde;
    uVar63 = iVar67 + uVar51 * -0x3aeb + iVar6 + iVar5;
    puVar3 = (undefined1 *)(*plVar49 + uVar42);
    *puVar3 = *(undefined1 *)(lVar55 + ((ulong)(uVar60 + iVar56 >> 0x12) & 0x3ff));
    iVar5 = (iVar74 + iVar4) * -0x2c1f;
    iVar74 = iVar7 + (iVar81 - iVar4) * 0x573 + iVar5;
    uVar26 = uVar14 + uVar15;
    puVar3[6] = *(undefined1 *)(lVar55 + ((ulong)(iVar56 - uVar60 >> 0x12) & 0x3ff));
    bVar9 = *(byte *)(lVar55 + ((ulong)(iVar74 + uVar63 >> 0x12) & 0x3ff));
    uVar27 = uVar16 + iVar5;
    puVar3[1] = bVar9;
    puVar3[5] = *(undefined1 *)(lVar55 + ((ulong)(uVar63 - iVar74 >> 0x12) & 0x3ff));
    puVar3[2] = *(undefined1 *)(lVar55 + ((ulong)(uVar27 + uVar26 >> 0x12) & 0x3ff));
    puVar3[4] = *(undefined1 *)(lVar55 + ((ulong)(uVar26 - uVar27 >> 0x12) & 0x3ff));
    puVar3[3] = *(undefined1 *)
                 (lVar55 + ((ulong)(iVar67 + (uVar51 - (iVar1 + iVar76)) * 0x2d41 >> 0x12) & 0x3ff))
    ;
    lVar40 = lVar40 + 0x1c;
    plVar49 = plVar50;
  } while (lVar40 != 0xc4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_340) {
    return;
  }
  ___stack_chk_fail();
  uStack_450 = (ulong)uVar26;
  uStack_448 = (ulong)uVar51;
  uStack_440 = (ulong)bVar9;
  uStack_438 = (ulong)uVar16;
  uStack_430 = (ulong)uVar27;
  puStack_428 = puVar3;
  pppuStack_420 = &ppuStack_2e0;
  pcStack_418 = FUN_1081d6d0c;
  lVar55 = 0;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar40 = *(long *)(lVar41 + 0x1a8);
  lVar41 = *(long *)(lVar70 + 0x58);
  do {
    psVar47 = (short *)(lVar41 + lVar55 * 2);
    psVar57 = (short *)(lVar66 + lVar55 * 2);
    uVar44 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    sVar39 = psVar57[0x20];
    sVar69 = psVar47[0x20];
    lVar61 = uVar44 + (long)((int)sVar69 * (int)sVar39) * 0x16a1;
    lVar78 = lVar61 + (long)((int)psVar57[0x10] * (int)psVar47[0x10]) * 0x2731;
    lVar61 = lVar61 + (long)((int)psVar57[0x10] * (int)psVar47[0x10]) * -0x2731;
    lVar72 = (long)(int)psVar47[8] * (long)(int)psVar57[8];
    sVar12 = psVar57[0x18];
    sVar13 = psVar47[0x18];
    lStack_520 = (long)(int)sVar13 * (long)(int)sVar12;
    lStack_608 = (long)(int)psVar47[0x28] * (long)(int)psVar57[0x28];
    lVar59 = (lVar72 + (long)(int)psVar47[0x28] * (long)(int)psVar57[0x28]) * 0xbb6;
    lVar70 = lVar59 + (lVar72 + (long)(int)sVar13 * (long)(int)sVar12) * 0x2000;
    lVar59 = lVar59 + (lStack_608 - (long)(int)sVar13 * (long)(int)sVar12) * 0x2000;
    iVar67 = (int)lVar72 - ((int)lStack_520 + (int)lStack_608);
    aiStack_4e8[lVar55] = (int)((ulong)(lVar70 + lVar78) >> 0xb);
    auStack_470[lVar55] = (int)((ulong)(lVar78 - lVar70) >> 0xb);
    iVar56 = (int)(uVar44 + (long)((int)sVar69 * (int)sVar39) * -0x2d42 >> 0xb);
    aiStack_4e8[lVar55 + 6] = iVar56 + iVar67 * 4;
    aiStack_488[lVar55] = iVar56 + iVar67 * -4;
    auStack_4b8[lVar55] = (int)((ulong)(lVar59 + lVar61) >> 0xb);
    auStack_4a0[lVar55] = (int)((ulong)(lVar61 - lVar59) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 6);
  lVar55 = 0;
  lVar40 = lVar40 + 0x80;
  do {
    plVar49 = plVar50 + 1;
    puVar3 = (undefined1 *)(*plVar50 + (uVar42 & 0xffffffff));
    iVar81 = *(int *)((long)aiStack_4e8 + lVar55 + 4);
    iVar74 = *(int *)((long)aiStack_4e8 + lVar55 + 0x10);
    iVar1 = *(int *)((long)aiStack_4e8 + lVar55 + 0x14);
    iVar67 = *(int *)((long)aiStack_4e8 + lVar55) * 0x2000 + 0x20000;
    iVar5 = iVar67 + iVar74 * 0x16a1;
    iVar76 = *(int *)((long)aiStack_4e8 + lVar55 + 8);
    iVar4 = *(int *)((long)aiStack_4e8 + lVar55 + 0xc);
    iVar56 = iVar5 + iVar76 * 0x2731;
    uVar16 = (iVar1 + iVar81) * 0xbb6;
    uVar27 = uVar16 + (iVar4 + iVar81) * 0x2000;
    iVar81 = iVar81 - (iVar4 + iVar1);
    iVar67 = iVar67 + iVar74 * -0x2d42;
    *puVar3 = *(undefined1 *)(lVar40 + ((ulong)(uVar27 + iVar56 >> 0x12) & 0x3ff));
    uVar51 = uVar16 + (iVar1 - iVar4) * 0x2000;
    uVar45 = (ulong)uVar51;
    puVar3[5] = *(undefined1 *)(lVar40 + ((ulong)(iVar56 - uVar27 >> 0x12) & 0x3ff));
    bVar9 = *(byte *)(lVar40 + ((ulong)((uint)(iVar67 + iVar81 * 0x2000) >> 0x12) & 0x3ff));
    uVar68 = (ulong)bVar9;
    uVar28 = iVar5 + iVar76 * -0x2731;
    uVar52 = (ulong)uVar28;
    puVar3[1] = bVar9;
    puVar3[4] = *(undefined1 *)
                 (lVar40 + ((ulong)((uint)(iVar67 + iVar81 * -0x2000) >> 0x12) & 0x3ff));
    uVar44 = (ulong)(uVar28 - uVar51);
    puVar3[2] = *(undefined1 *)(lVar40 + ((ulong)(uVar51 + uVar28 >> 0x12) & 0x3ff));
    puVar3[3] = *(undefined1 *)(lVar40 + ((ulong)(uVar28 - uVar51 >> 0x12) & 0x3ff));
    lVar55 = lVar55 + 0x18;
    plVar50 = plVar49;
  } while (lVar55 != 0x90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
    return;
  }
  ___stack_chk_fail();
  uStack_518 = (ulong)(uint)(iVar1 - iVar4);
  uStack_510 = (ulong)uVar27;
  uStack_508 = (ulong)uVar16;
  ppppuStack_500 = &pppuStack_420;
  pcStack_4f8 = FUN_1081d6f44;
  lVar55 = 0;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar40 = *(long *)(uVar44 + 0x1a8);
  lVar41 = *(long *)(uVar68 + 0x58);
  do {
    psVar47 = (short *)(lVar41 + lVar55 * 2);
    psVar57 = (short *)(uVar45 + lVar55 * 2);
    uVar42 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    lVar66 = (long)(int)psVar47[0x10] * (long)(int)psVar57[0x10] +
             (long)(int)psVar47[0x20] * (long)(int)psVar57[0x20];
    lVar61 = (long)(int)psVar47[0x10] * (long)(int)psVar57[0x10] -
             (long)(int)psVar47[0x20] * (long)(int)psVar57[0x20];
    lVar72 = uVar42 + lVar61 * 0xb50;
    lVar70 = lVar72 + lVar66 * 0x194c;
    lVar72 = lVar72 + lVar66 * -0x194c;
    lStack_600 = (long)(int)psVar47[0x18] * (long)(int)psVar57[0x18];
    lVar66 = ((long)(int)psVar47[8] * (long)(int)psVar57[8] +
             (long)(int)psVar47[0x18] * (long)(int)psVar57[0x18]) * 0x1a9a;
    lVar59 = lVar66 + (long)(int)((long)(int)psVar47[8] * (long)(int)psVar57[8]) * 0x1071;
    lVar66 = lVar66 + (long)(int)lStack_600 * -0x45a4;
    aiStack_58c[lVar55] = (int)((ulong)(lVar59 + lVar70) >> 0xb);
    auStack_53c[lVar55] = (int)((ulong)(lVar70 - lVar59) >> 0xb);
    aiStack_58c[lVar55 + 5] = (int)((ulong)(lVar66 + lVar72) >> 0xb);
    auStack_550[lVar55] = (int)((ulong)(lVar72 - lVar66) >> 0xb);
    auStack_564[lVar55] = (int)(uVar42 + lVar61 * 0x7ffffffd2c0 >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 5);
  lVar55 = 0;
  lVar40 = lVar40 + 0x80;
  do {
    plVar50 = plVar49 + 1;
    iVar76 = *(int *)((long)aiStack_58c + lVar55 + 4);
    pbVar43 = (byte *)(*plVar49 + (uVar52 & 0xffffffff));
    iVar1 = *(int *)((long)aiStack_58c + lVar55 + 8);
    iVar74 = *(int *)((long)aiStack_58c + lVar55 + 0xc);
    iVar81 = *(int *)((long)aiStack_58c + lVar55 + 0x10);
    iVar56 = iVar81 + iVar1;
    iVar67 = *(int *)((long)aiStack_58c + lVar55) * 0x2000 + 0x20000;
    iVar1 = iVar1 - iVar81;
    iVar81 = iVar67 + iVar1 * 0xb50;
    uVar16 = (iVar74 + iVar76) * 0x1a9a;
    uVar27 = iVar81 + iVar56 * 0x194c;
    iVar76 = uVar16 + iVar76 * 0x1071;
    bVar9 = *(byte *)(lVar40 + ((ulong)(iVar76 + uVar27 >> 0x12) & 0x3ff));
    iVar74 = uVar16 + iVar74 * -0x45a4;
    *pbVar43 = bVar9;
    iVar81 = iVar81 + iVar56 * -0x194c;
    pbVar43[4] = *(byte *)(lVar40 + ((ulong)(uVar27 - iVar76 >> 0x12) & 0x3ff));
    bVar10 = *(byte *)(lVar40 + ((ulong)((uint)(iVar74 + iVar81) >> 0x12) & 0x3ff));
    uVar68 = (ulong)bVar10;
    uVar51 = iVar67 + iVar1 * 0xfffd2c0;
    uVar44 = (ulong)uVar51;
    pbVar43[1] = bVar10;
    pbVar43[3] = *(byte *)(lVar40 + ((ulong)((uint)(iVar81 - iVar74) >> 0x12) & 0x3ff));
    bVar10 = *(byte *)(lVar40 + ((ulong)(uVar51 >> 0x12) & 0x3ff));
    uVar42 = (ulong)bVar10;
    pbVar43[2] = bVar10;
    lVar55 = lVar55 + 0x14;
    plVar49 = plVar50;
  } while (lVar55 != 100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  uVar51 = (uint)uVar68;
  ppppuStack_5a0 = &ppppuStack_500;
  pcStack_598 = FUN_1081d7150;
  lVar55 = 0;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar40 = *(long *)(uVar42 + 0x1a8);
  lVar41 = *(long *)(pbVar43 + 0x58);
  do {
    psVar47 = (short *)(lVar41 + lVar55 * 2);
    psVar57 = (short *)(uVar44 + lVar55 * 2);
    uVar42 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    sVar39 = psVar57[0x10];
    sVar69 = psVar47[0x10];
    lVar70 = uVar42 + (long)(int)((long)(int)sVar69 * (long)(int)sVar39) * 0x16a1;
    sVar12 = psVar57[8];
    sVar13 = psVar47[8];
    aiStack_5cc[lVar55] = (int)((ulong)(lVar70 + (long)((int)sVar12 * (int)sVar13) * 0x2731) >> 0xb)
    ;
    aiStack_5cc[lVar55 + 6] =
         (int)((ulong)(lVar70 + (long)((int)sVar12 * (int)sVar13) * -0x2731) >> 0xb);
    aiStack_5cc[lVar55 + 3] =
         (int)(uVar42 + (long)(int)sVar69 * (long)(int)sVar39 * 0x7ffffffd2be >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 3);
  lVar55 = 0;
  lVar40 = lVar40 + 0x80;
  do {
    plVar49 = plVar50 + 1;
    pbVar43 = (byte *)(*plVar50 + (uVar68 & 0xffffffff));
    iVar56 = *(int *)((long)aiStack_5cc + lVar55 + 4);
    iVar67 = *(int *)((long)aiStack_5cc + lVar55) * 0x2000 + 0x20000;
    iVar74 = *(int *)((long)aiStack_5cc + lVar55 + 8);
    uVar28 = iVar67 + iVar74 * 0x16a1;
    uVar45 = (ulong)uVar28;
    bVar10 = *(byte *)(lVar40 + ((ulong)(uVar28 + iVar56 * 0x2731 >> 0x12) & 0x3ff));
    uVar42 = (ulong)bVar10;
    *pbVar43 = bVar10;
    pbVar43[2] = *(byte *)(lVar40 + ((ulong)(uVar28 + iVar56 * -0x2731 >> 0x12) & 0x3ff));
    pbVar43[1] = *(byte *)(lVar40 + ((ulong)((uint)(iVar67 + iVar74 * 0xfffd2be) >> 0x12) & 0x3ff));
    lVar55 = lVar55 + 0xc;
    plVar50 = plVar49;
  } while (lVar55 != 0x24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_630 = (ulong)uVar63;
  uStack_628 = (ulong)uVar60;
  pcStack_5d8 = FUN_1081d72a0;
  lVar55 = 0;
  lStack_640 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_770 = *(long *)(uVar42 + 0x1a8);
  lVar40 = *(long *)(uVar45 + 0x58);
  uStack_620 = (ulong)uVar14;
  uStack_618 = (ulong)uVar15;
  uStack_610 = (ulong)uVar26;
  uStack_5f8 = (ulong)bVar9;
  uStack_5f0 = (ulong)uVar27;
  uStack_5e8 = (ulong)uVar16;
  ppppuStack_5e0 = &ppppuStack_5a0;
  do {
    psVar47 = (short *)(lVar40 + lVar55 * 2);
    psVar57 = (short *)(uVar44 + lVar55 * 2);
    lVar78 = (long)(int)psVar47[0x10] * (long)(int)psVar57[0x10];
    uVar42 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    sVar39 = psVar57[0x20];
    sVar69 = psVar47[0x20];
    iVar67 = (int)sVar69 * (int)sVar39;
    lVar59 = (long)(int)psVar47[8] * (long)(int)psVar57[8];
    sVar12 = psVar57[0x28];
    sVar13 = psVar47[0x28];
    sVar31 = psVar57[0x38];
    sVar32 = psVar47[0x38];
    lVar72 = (long)(int)sVar13 * (long)(int)sVar12 - (long)(int)sVar32 * (long)(int)sVar31;
    lVar61 = (lVar59 - (long)(int)sVar13 * (long)(int)sVar12) -
             (long)(int)sVar32 * (long)(int)sVar31;
    lVar82 = uVar42 + (long)((int)psVar47[0x30] * (int)psVar57[0x30]) * 0x16a1;
    lVar53 = uVar42 + (long)((int)psVar47[0x30] * (int)psVar57[0x30]) * -0x2d42;
    lVar77 = lVar78 - (long)(int)sVar69 * (long)(int)sVar39;
    lVar75 = lVar78 + (long)(int)sVar69 * (long)(int)sVar39;
    iVar56 = (int)psVar57[0x18] * (int)psVar47[0x18];
    lVar66 = (lVar59 + (long)(int)sVar13 * (long)(int)sVar12) * 0x1d17;
    lVar41 = (long)iVar56 * -0x2731 + lVar72 * -0x2c91 + lVar66;
    lVar70 = lVar82 + lVar75 * 0x2a87 + (long)iVar67 * -0x7dc;
    lVar59 = (lVar59 + (long)(int)sVar32 * (long)(int)sVar31) * 0xf7a;
    lVar66 = lVar59 + lVar66 + (long)iVar56 * 0x2731;
    lVar59 = lVar72 * 0x2c91 + (long)iVar56 * -0x2731 + lVar59;
    aiStack_760[lVar55] = (int)((ulong)(lVar66 + lVar70) >> 0xb);
    lVar72 = lVar53 + lVar77 * 0x16a1;
    aiStack_760[lVar55 + 0x40] = (int)((ulong)(lVar70 - lVar66) >> 0xb);
    aiStack_760[lVar55 + 8] = (int)((ulong)(lVar61 * 0x2731 + lVar72) >> 0xb);
    lVar70 = lVar82 + lVar75 * -0x2a87 + (long)(int)lVar78 * 0x22ab;
    aiStack_760[lVar55 + 0x38] = (int)((ulong)(lVar72 + lVar61 * -0x2731) >> 0xb);
    aiStack_760[lVar55 + 0x10] = (int)((ulong)(lVar41 + lVar70) >> 0xb);
    aiStack_760[lVar55 + 0x30] = (int)((ulong)(lVar70 - lVar41) >> 0xb);
    lVar41 = lVar82 + (long)(int)lVar78 * -0x22ab + (long)iVar67 * 0x7dc;
    aiStack_760[lVar55 + 0x18] = (int)((ulong)(lVar59 + lVar41) >> 0xb);
    aiStack_760[lVar55 + 0x28] = (int)((ulong)(lVar41 - lVar59) >> 0xb);
    aiStack_760[lVar55 + 0x20] = (int)((ulong)(lVar53 + lVar77 * 0x7ffffffd2be) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar40 = 0;
  lVar55 = lStack_770 + 0x80;
  lVar41 = 0x1d17;
  lVar70 = 0xf7a;
  lVar66 = 0x2c91;
  uVar42 = (ulong)uVar51;
  do {
    puVar3 = (undefined1 *)(*(long *)((long)plVar49 + lVar40) + uVar42);
    iVar1 = aiStack_760[lVar40 + 1];
    iVar67 = aiStack_760[lVar40] * 0x2000 + 0x20000;
    iVar76 = aiStack_760[lVar40 + 2];
    iVar4 = aiStack_760[lVar40 + 7];
    uVar26 = iVar67 + aiStack_760[lVar40 + 6] * 0x16a1;
    iVar81 = aiStack_760[lVar40 + 4];
    iVar5 = aiStack_760[lVar40 + 5];
    uVar27 = iVar67 + aiStack_760[lVar40 + 6] * -0x2d42;
    iVar7 = aiStack_760[lVar40 + 3] * -0x2731;
    iVar6 = uVar27 + (iVar76 - iVar81) * 0x16a1;
    iVar18 = (iVar5 + iVar1) * 0x1d17;
    iVar74 = (iVar4 + iVar1) * 0xf7a;
    iVar67 = (iVar81 + iVar76) * 0x2a87 + iVar81 * -0x7dc + uVar26;
    uVar14 = iVar7 + (iVar5 - iVar4) * -0x2c91;
    iVar56 = iVar18 + aiStack_760[lVar40 + 3] * 0x2731 + iVar74;
    uVar15 = uVar26 + (iVar81 + iVar76) * -0x2a87;
    iVar1 = iVar1 - (iVar5 + iVar4);
    *puVar3 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar56 + iVar67) >> 0x12) & 0x3ff));
    uVar60 = uVar14 + iVar18;
    puVar3[8] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar67 - iVar56) >> 0x12) & 0x3ff));
    bVar9 = *(byte *)(lVar55 + ((ulong)((uint)(iVar1 * 0x2731 + iVar6) >> 0x12) & 0x3ff));
    uVar63 = uVar15 + iVar76 * 0x22ab;
    puVar3[1] = bVar9;
    uVar16 = uVar26 + iVar76 * -0x22ab;
    puVar3[7] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar6 + iVar1 * -0x2731) >> 0x12) & 0x3ff))
    ;
    iVar74 = (iVar5 - iVar4) * 0x2c91 + iVar7 + iVar74;
    puVar3[2] = *(undefined1 *)(lVar55 + ((ulong)(uVar60 + uVar63 >> 0x12) & 0x3ff));
    iVar67 = uVar16 + iVar81 * 0x7dc;
    puVar3[6] = *(undefined1 *)(lVar55 + ((ulong)(uVar63 - uVar60 >> 0x12) & 0x3ff));
    puVar3[3] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar74 + iVar67) >> 0x12) & 0x3ff));
    puVar3[5] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar67 - iVar74) >> 0x12) & 0x3ff));
    puVar3[4] = *(undefined1 *)
                 (lVar55 + ((ulong)(uVar27 + (iVar76 - iVar81) * 0xfffd2be >> 0x12) & 0x3ff));
    lVar40 = lVar40 + 8;
  } while (lVar40 != 0x48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_640) {
    return;
  }
  uStack_764 = uVar51;
  ___stack_chk_fail();
  uStack_7d0 = (ulong)uVar15;
  uStack_7c8 = (ulong)uVar14;
  uStack_790 = 0xfffd2be;
  uStack_778 = 0x1081d7634;
  uStack_924 = (int)uVar42;
  lVar55 = 0;
  lStack_7e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_930 = *(long *)(lVar41 + 0x1a8);
  lVar40 = *(long *)(lVar70 + 0x58);
  uStack_7c0 = (ulong)uVar63;
  uStack_7b8 = (ulong)uVar26;
  uStack_7b0 = (ulong)uVar60;
  uStack_7a8 = (ulong)(uint)(iVar76 * 0x22ab);
  uStack_7a0 = (ulong)bVar9;
  uStack_798 = (ulong)uVar16;
  uStack_788 = (ulong)uVar27;
  ppppuStack_780 = &ppppuStack_5e0;
  do {
    psVar47 = (short *)(lVar40 + lVar55 * 2);
    psVar57 = (short *)(lVar66 + lVar55 * 2);
    uVar44 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    iVar74 = (int)psVar47[0x20] * (int)psVar57[0x20];
    lVar75 = uVar44 + (long)iVar74 * 0x249d;
    lVar77 = uVar44 + (long)iVar74 * -0xdfc;
    lVar59 = ((long)(int)psVar47[0x10] * (long)(int)psVar57[0x10] +
             (long)(int)psVar47[0x30] * (long)(int)psVar57[0x30]) * 0x1a9a;
    lVar70 = lVar59 + (long)(int)((long)(int)psVar47[0x10] * (long)(int)psVar57[0x10]) * 0x1071;
    lVar59 = lVar59 + (long)((int)psVar47[0x30] * (int)psVar57[0x30]) * -0x45a4;
    lVar41 = lVar70 + lVar75;
    lVar75 = lVar75 - lVar70;
    lVar70 = lVar59 + lVar77;
    lVar77 = lVar77 - lVar59;
    iVar56 = (int)psVar47[8] * (int)psVar57[8];
    lVar53 = (long)(int)psVar47[0x28] * (long)(int)psVar57[0x28];
    lVar82 = (long)(int)psVar47[0x18] * (long)(int)psVar57[0x18] +
             (long)(int)psVar47[0x38] * (long)(int)psVar57[0x38];
    lVar78 = (long)(int)psVar47[0x18] * (long)(int)psVar57[0x18] -
             (long)(int)psVar47[0x38] * (long)(int)psVar57[0x38];
    lVar61 = lVar78 * 0x9e3 + lVar53 * 0x2000;
    lVar59 = lVar82 * 0x1e6f + (long)iVar56 * 0x2cb3 + lVar61;
    lVar61 = (long)iVar56 * 0x714 + lVar82 * -0x1e6f + lVar61;
    lVar72 = lVar78 * -0x19e3 + lVar53 * 0x2000;
    iVar67 = (iVar56 - (int)lVar53) - (int)lVar78;
    lVar78 = ((long)iVar56 * 0x2853 + lVar82 * -0x12cf) - lVar72;
    lVar72 = (long)iVar56 * 0x148c + lVar82 * -0x12cf + lVar72;
    auStack_920[lVar55] = (uint)((ulong)(lVar59 + lVar41) >> 0xb);
    auStack_920[lVar55 + 0x48] = (uint)((ulong)(lVar41 - lVar59) >> 0xb);
    auStack_920[lVar55 + 8] = (uint)((ulong)(lVar78 + lVar70) >> 0xb);
    auStack_920[lVar55 + 0x40] = (uint)((ulong)(lVar70 - lVar78) >> 0xb);
    iVar56 = (int)(uVar44 + (long)iVar74 * -0x2d42 >> 0xb);
    auStack_920[lVar55 + 0x10] = iVar56 + iVar67 * 4;
    auStack_920[lVar55 + 0x38] = iVar56 + iVar67 * -4;
    auStack_920[lVar55 + 0x18] = (uint)((ulong)(lVar72 + lVar77) >> 0xb);
    auStack_920[lVar55 + 0x30] = (uint)((ulong)(lVar77 - lVar72) >> 0xb);
    auStack_920[lVar55 + 0x20] = (uint)((ulong)(lVar61 + lVar75) >> 0xb);
    auStack_920[lVar55 + 0x28] = (uint)((ulong)(lVar75 - lVar61) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar40 = 0;
  lVar55 = lStack_930 + 0x80;
  lVar41 = 0x1e6f;
  lVar70 = 0x2cb3;
  lVar66 = 0x714;
  uVar42 = uVar42 & 0xffffffff;
  do {
    uVar26 = auStack_920[lVar40 + 1];
    uVar60 = auStack_920[lVar40 + 4];
    uVar27 = auStack_920[lVar40 + 5];
    iVar67 = auStack_920[lVar40] * 0x2000 + 0x20000;
    iVar56 = iVar67 + uVar60 * 0x249d;
    iVar74 = iVar67 + uVar60 * -0xdfc;
    uVar51 = iVar67 + uVar60 * -0x2d42;
    iVar81 = (auStack_920[lVar40 + 6] + auStack_920[lVar40 + 2]) * 0x1a9a;
    iVar76 = iVar81 + auStack_920[lVar40 + 2] * 0x1071;
    iVar81 = iVar81 + auStack_920[lVar40 + 6] * -0x45a4;
    iVar67 = iVar76 + iVar56;
    uVar15 = iVar56 - iVar76;
    uVar60 = iVar81 + iVar74;
    iVar56 = auStack_920[lVar40 + 7] + auStack_920[lVar40 + 3];
    iVar1 = auStack_920[lVar40 + 3] - auStack_920[lVar40 + 7];
    uVar16 = iVar74 - iVar81;
    iVar74 = iVar1 * 0x9e3 + uVar27 * 0x2000;
    iVar76 = iVar56 * 0x1e6f + uVar26 * 0x2cb3 + iVar74;
    puVar3 = (undefined1 *)(*(long *)((long)plVar49 + lVar40) + uVar42);
    uVar63 = iVar56 * -0x1e6f + uVar26 * 0x714 + iVar74;
    iVar74 = iVar1 * -0x19e3 + uVar27 * 0x2000;
    *puVar3 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar76 + iVar67) >> 0x12) & 0x3ff));
    uVar14 = uVar26 * 0x2853 - (iVar56 * 0x12cf + iVar74);
    puVar3[9] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar67 - iVar76) >> 0x12) & 0x3ff));
    iVar1 = (uVar26 - uVar27) - iVar1;
    puVar3[1] = *(undefined1 *)(lVar55 + ((ulong)(uVar14 + uVar60 >> 0x12) & 0x3ff));
    puVar3[8] = *(undefined1 *)(lVar55 + ((ulong)(uVar60 - uVar14 >> 0x12) & 0x3ff));
    puVar3[2] = *(undefined1 *)(lVar55 + ((ulong)(uVar51 + iVar1 * 0x2000 >> 0x12) & 0x3ff));
    iVar74 = iVar56 * -0x12cf + uVar26 * 0x148c + iVar74;
    puVar3[7] = *(undefined1 *)(lVar55 + ((ulong)(uVar51 + iVar1 * -0x2000 >> 0x12) & 0x3ff));
    puVar3[3] = *(undefined1 *)(lVar55 + ((ulong)(iVar74 + uVar16 >> 0x12) & 0x3ff));
    puVar3[6] = *(undefined1 *)(lVar55 + ((ulong)(uVar16 - iVar74 >> 0x12) & 0x3ff));
    puVar3[4] = *(undefined1 *)(lVar55 + ((ulong)(uVar63 + uVar15 >> 0x12) & 0x3ff));
    puVar3[5] = *(undefined1 *)(lVar55 + ((ulong)(uVar15 - uVar63 >> 0x12) & 0x3ff));
    lVar40 = lVar40 + 8;
  } while (lVar40 != 0x50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7e0) {
    return;
  }
  ___stack_chk_fail();
  uStack_990 = (ulong)uVar60;
  uStack_988 = (ulong)uVar14;
  uStack_980 = (ulong)(uVar26 - uVar27);
  uStack_978 = (ulong)uVar16;
  uStack_970 = (ulong)uVar63;
  uStack_968 = (ulong)uVar51;
  uStack_960 = (ulong)uVar26;
  puStack_958 = puVar3;
  uStack_950 = (ulong)uVar15;
  uStack_948 = 0x148c;
  ppppuStack_940 = &ppppuStack_780;
  uStack_938 = 0x1081d7a08;
  uStack_b0c = (int)uVar42;
  plStack_b08 = plVar49;
  lVar55 = 0;
  lStack_9a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_b18 = *(long *)(lVar41 + 0x1a8);
  lVar40 = *(long *)(lVar70 + 0x58);
  do {
    psVar47 = (short *)(lVar40 + lVar55 * 2);
    psVar57 = (short *)(lVar66 + lVar55 * 2);
    sVar39 = psVar57[0x10];
    sVar69 = psVar47[0x10];
    lVar77 = (long)(int)sVar69 * (long)(int)sVar39;
    lVar82 = (long)(int)psVar47[0x20] * (long)(int)psVar57[0x20];
    sVar12 = psVar57[0x30];
    sVar13 = psVar47[0x30];
    iVar56 = (int)sVar13 * (int)sVar12;
    lVar75 = (long)(int)psVar47[8] * (long)(int)psVar57[8];
    lVar73 = (long)(int)psVar47[0x18] * (long)(int)psVar57[0x18];
    lVar64 = lVar77 + (long)(int)sVar13 * (long)(int)sVar12;
    sVar31 = psVar57[0x28];
    sVar32 = psVar47[0x28];
    iVar74 = (int)sVar32 * (int)sVar31;
    sVar34 = psVar57[0x38];
    sVar33 = psVar47[0x38];
    lVar58 = lVar64 - (long)(int)psVar47[0x20] * (long)(int)psVar57[0x20];
    iVar67 = (int)sVar33 * (int)sVar34;
    lVar41 = lVar75 + (long)(int)psVar47[0x18] * (long)(int)psVar57[0x18];
    lVar59 = lVar41 * 0x1c6a;
    lVar71 = (lVar75 + (long)(int)sVar32 * (long)(int)sVar31) * 0x1574;
    lVar78 = (lVar41 + (long)(int)sVar32 * (long)(int)sVar31 + (long)(int)sVar33 * (long)(int)sVar34
             ) * 0xcc0;
    lVar70 = lVar78 + (lVar73 + (long)(int)sVar32 * (long)(int)sVar31) * -0x2537;
    lVar72 = (lVar73 + (long)(int)sVar33 * (long)(int)sVar34) * -0x398b;
    lVar41 = lVar71 + (long)iVar74 * -0x2626 + lVar70;
    lVar70 = lVar59 + (long)(int)lVar73 * 0x4258 + lVar72 + lVar70;
    uVar44 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    lVar53 = (lVar82 - (long)(int)sVar13 * (long)(int)sVar12) * 0x517e;
    lVar61 = lVar78 + (lVar75 + (long)(int)sVar33 * (long)(int)sVar34) * 3000;
    lVar59 = lVar59 + (long)(int)lVar75 * -0x1d8a + lVar71 + lVar61;
    lVar61 = lVar72 + (long)iVar67 * 0x4347 + lVar61;
    lVar71 = uVar44 + lVar58 * 0x2b6c;
    lVar72 = lVar53 + (long)iVar56 * 0x43b5 + lVar71;
    lVar78 = (long)(int)lVar73 * -0x2ef3 + (long)iVar74 * 0x200b + (long)iVar67 * -0x35ea + lVar78;
    aiStack_b00[lVar55] = (int)((ulong)(lVar59 + lVar72) >> 0xb);
    lVar75 = lVar71 + (lVar82 - (long)(int)sVar69 * (long)(int)sVar39) * 0xdc9;
    lVar53 = lVar53 + (long)(int)lVar82 * -0x3a4c + lVar75;
    aiStack_b00[lVar55 + 0x50] = (int)((ulong)(lVar72 - lVar59) >> 0xb);
    lVar71 = lVar71 + lVar64 * -0x24fb;
    aiStack_b00[lVar55 + 8] = (int)((ulong)(lVar70 + lVar53) >> 0xb);
    iVar67 = (int)lVar77;
    lVar59 = (long)iVar67 * -0x2c83 + (long)(int)lVar82 * 0x3e39 + lVar71;
    lVar71 = lVar71 + (long)iVar56 * -0x193d;
    aiStack_b00[lVar55 + 0x48] = (int)((ulong)(lVar53 - lVar70) >> 0xb);
    aiStack_b00[lVar55 + 0x10] = (int)((ulong)(lVar41 + lVar71) >> 0xb);
    aiStack_b00[lVar55 + 0x40] = (int)((ulong)(lVar71 - lVar41) >> 0xb);
    lVar75 = lVar75 + (long)iVar67 * -0x306f;
    aiStack_b00[lVar55 + 0x18] = (int)((ulong)(lVar61 + lVar75) >> 0xb);
    aiStack_b00[lVar55 + 0x38] = (int)((ulong)(lVar75 - lVar61) >> 0xb);
    aiStack_b00[lVar55 + 0x20] = (int)((ulong)(lVar78 + lVar59) >> 0xb);
    aiStack_b00[lVar55 + 0x30] = (int)((ulong)(lVar59 - lVar78) >> 0xb);
    aiStack_b00[lVar55 + 0x28] = (int)(uVar44 + lVar58 * 0x7ffffffd2bf >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar40 = 0;
  lVar55 = lStack_b18 + 0x80;
  do {
    puVar3 = (undefined1 *)(*(long *)((long)plVar49 + lVar40) + (uVar42 & 0xffffffff));
    iVar6 = aiStack_b00[lVar40 + 1];
    iVar81 = aiStack_b00[lVar40 + 4];
    iVar7 = aiStack_b00[lVar40 + 5];
    iVar4 = aiStack_b00[lVar40 + 6];
    iVar18 = aiStack_b00[lVar40 + 7];
    iVar67 = aiStack_b00[lVar40] * 0x2000 + 0x20000;
    iVar74 = (iVar81 - iVar4) * 0x517e;
    iVar5 = aiStack_b00[lVar40 + 2];
    iVar8 = aiStack_b00[lVar40 + 3];
    iVar1 = (iVar4 + iVar5) - iVar81;
    iVar76 = iVar67 + iVar1 * 0x2b6c;
    iVar17 = iVar76 + (iVar81 - iVar5) * 0xdc9;
    iVar56 = iVar74 + iVar4 * 0x43b5 + iVar76;
    iVar74 = iVar74 + iVar81 * -0x3a4c + iVar17;
    iVar76 = iVar76 + (iVar4 + iVar5) * -0x24fb;
    uVar27 = iVar67 + iVar1 * 0xfffd2bf;
    uVar52 = (ulong)uVar27;
    iVar17 = iVar17 + iVar5 * -0x306f;
    iVar1 = (iVar8 + iVar6 + iVar7 + iVar18) * 0xcc0;
    iVar19 = (iVar8 + iVar6) * 0x1c6a;
    uVar51 = iVar76 + iVar4 * -0x193d;
    uVar44 = (ulong)uVar51;
    iVar20 = (iVar7 + iVar6) * 0x1574;
    iVar4 = iVar1 + (iVar18 + iVar6) * 3000;
    uVar60 = iVar19 + iVar6 * -0x1d8a + iVar20;
    iVar76 = iVar5 * -0x2c83 + iVar81 * 0x3e39 + iVar76;
    iVar67 = uVar60 + iVar4;
    *puVar3 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar67 + iVar56) >> 0x12) & 0x3ff));
    iVar5 = (iVar18 + iVar8) * -0x398b;
    iVar81 = iVar1 + (iVar7 + iVar8) * -0x2537;
    uVar63 = iVar20 + iVar7 * -0x2626 + iVar81;
    iVar81 = iVar19 + iVar8 * 0x4258 + iVar5 + iVar81;
    puVar3[10] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar56 - iVar67) >> 0x12) & 0x3ff));
    bVar9 = *(byte *)(lVar55 + ((ulong)((uint)(iVar81 + iVar74) >> 0x12) & 0x3ff));
    uVar45 = (ulong)bVar9;
    puVar3[1] = bVar9;
    uVar26 = iVar5 + iVar18 * 0x4347 + iVar4;
    uVar68 = (ulong)uVar26;
    puVar3[9] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar74 - iVar81) >> 0x12) & 0x3ff));
    puVar3[2] = *(undefined1 *)(lVar55 + ((ulong)(uVar63 + uVar51 >> 0x12) & 0x3ff));
    puVar3[8] = *(undefined1 *)(lVar55 + ((ulong)(uVar51 - uVar63 >> 0x12) & 0x3ff));
    puVar3[3] = *(undefined1 *)(lVar55 + ((ulong)(uVar26 + iVar17 >> 0x12) & 0x3ff));
    iVar1 = iVar8 * -0x2ef3 + iVar7 * 0x200b + iVar18 * -0x35ea + iVar1;
    puVar3[7] = *(undefined1 *)(lVar55 + ((ulong)(iVar17 - uVar26 >> 0x12) & 0x3ff));
    puVar3[4] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar1 + iVar76) >> 0x12) & 0x3ff));
    puVar3[6] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar76 - iVar1) >> 0x12) & 0x3ff));
    puVar3[5] = *(undefined1 *)(lVar55 + ((ulong)(uVar27 >> 0x12) & 0x3ff));
    lVar40 = lVar40 + 8;
  } while (lVar40 != 0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9a0) {
    return;
  }
  ___stack_chk_fail();
  uStack_b80 = 0xffffca16;
  uStack_b78 = 0x200b;
  uStack_b70 = 0xffffd10d;
  uStack_b68 = 0x4347;
  uStack_b60 = 0xffffc675;
  uStack_b58 = 0xffffd9da;
  uStack_b50 = 0x4258;
  uStack_b48 = 0xffffdac9;
  plStack_b40 = plVar49;
  uStack_b38 = (ulong)uVar60;
  ppppuStack_b30 = &ppppuStack_940;
  uStack_b28 = 0x1081d7eb8;
  uStack_d1c = uVar63;
  uStack_d18 = uVar52;
  lVar55 = 0;
  lStack_b90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_d28 = *(long *)(uVar44 + 0x1a8);
  lVar40 = *(long *)(uVar68 + 0x58);
  do {
    psVar47 = (short *)(lVar40 + lVar55 * 2);
    psVar57 = (short *)(uVar45 + lVar55 * 2);
    uVar42 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    lVar58 = uVar42 + (long)((int)psVar57[0x20] * (int)psVar47[0x20]) * 0x2731;
    lVar77 = uVar42 + (long)((int)psVar57[0x20] * (int)psVar47[0x20]) * -0x2731;
    iVar67 = (int)((long)(int)psVar47[0x10] * (long)(int)psVar57[0x10]);
    lVar59 = (long)(int)psVar47[0x30] * (long)(int)psVar57[0x30];
    lVar70 = (long)(int)psVar47[0x10] * (long)(int)psVar57[0x10] -
             (long)(int)psVar47[0x30] * (long)(int)psVar57[0x30];
    lVar41 = uVar42 + lVar70 * 0x2000;
    lVar64 = uVar42 + lVar70 * -0x2000;
    lVar70 = (long)iVar67 * 0x2bb6 + lVar59 * 0x2000;
    lVar66 = lVar70 + lVar58;
    lVar58 = lVar58 - lVar70;
    lVar59 = (long)iVar67 * 0xbb6 + lVar59 * -0x2000;
    lVar70 = lVar59 + lVar77;
    lVar77 = lVar77 - lVar59;
    lVar75 = (long)(int)psVar47[8] * (long)(int)psVar57[8];
    sVar39 = psVar57[0x28];
    sVar69 = psVar47[0x28];
    lVar72 = (long)(int)sVar69 * (long)(int)sVar39;
    sVar12 = psVar57[0x38];
    sVar13 = psVar47[0x38];
    iVar67 = (int)sVar13 * (int)sVar12;
    iVar56 = (int)((long)(int)psVar47[0x18] * (long)(int)psVar57[0x18]);
    lVar59 = lVar75 + (long)(int)sVar69 * (long)(int)sVar39;
    lVar78 = (lVar59 + (long)(int)sVar13 * (long)(int)sVar12) * 0x1b8d;
    lVar61 = lVar78 + lVar59 * 0x85b;
    lVar59 = (long)(int)lVar75 * 0x8f7 + (long)iVar56 * 0x29cf + lVar61;
    lVar71 = (lVar72 + (long)(int)sVar13 * (long)(int)sVar12) * -0x2175;
    lVar61 = (long)iVar56 * -0x1151 + (long)(int)lVar72 * -0x2f50 + lVar71 + lVar61;
    lVar53 = lVar75 - (long)(int)sVar13 * (long)(int)sVar12;
    lVar82 = (long)(int)psVar47[0x18] * (long)(int)psVar57[0x18] -
             (long)(int)sVar69 * (long)(int)sVar39;
    lVar72 = (long)iVar67 * 0x32c6 + (long)iVar56 * -0x29cf + lVar71 + lVar78;
    lVar78 = (long)(int)lVar75 * -0x15a4 + (long)iVar56 * -0x1151 + (long)iVar67 * -0x3f74 + lVar78;
    auStack_d10[lVar55] = (uint)((ulong)(lVar59 + lVar66) >> 0xb);
    lVar75 = (lVar53 + lVar82) * 0x1151;
    lVar53 = lVar75 + lVar53 * 0x187e;
    auStack_d10[lVar55 + 0x58] = (uint)((ulong)(lVar66 - lVar59) >> 0xb);
    auStack_d10[lVar55 + 8] = (uint)((ulong)(lVar53 + lVar41) >> 0xb);
    auStack_d10[lVar55 + 0x50] = (uint)((ulong)(lVar41 - lVar53) >> 0xb);
    auStack_d10[lVar55 + 0x10] = (uint)((ulong)(lVar61 + lVar70) >> 0xb);
    auStack_d10[lVar55 + 0x48] = (uint)((ulong)(lVar70 - lVar61) >> 0xb);
    auStack_d10[lVar55 + 0x18] = (uint)((ulong)(lVar72 + lVar77) >> 0xb);
    auStack_d10[lVar55 + 0x40] = (uint)((ulong)(lVar77 - lVar72) >> 0xb);
    lVar75 = lVar75 + lVar82 * -0x3b21;
    auStack_d10[lVar55 + 0x20] = (uint)((ulong)(lVar75 + lVar64) >> 0xb);
    auStack_d10[lVar55 + 0x38] = (uint)((ulong)(lVar64 - lVar75) >> 0xb);
    auStack_d10[lVar55 + 0x28] = (uint)((ulong)(lVar78 + lVar58) >> 0xb);
    auStack_d10[lVar55 + 0x30] = (uint)((ulong)(lVar58 - lVar78) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar40 = 0;
  lVar55 = lStack_d28 + 0x80;
  lVar41 = 0xffffd0b0;
  uVar42 = (ulong)uVar63;
  do {
    uVar26 = auStack_d10[lVar40 + 1];
    uVar27 = auStack_d10[lVar40 + 5];
    iVar67 = auStack_d10[lVar40] * 0x2000 + 0x20000;
    iVar56 = iVar67 + auStack_d10[lVar40 + 4] * 0x2731;
    uVar60 = auStack_d10[lVar40 + 2];
    uVar51 = auStack_d10[lVar40 + 3];
    uVar63 = auStack_d10[lVar40 + 6];
    uVar14 = auStack_d10[lVar40 + 7];
    iVar1 = iVar67 + auStack_d10[lVar40 + 4] * -0x2731;
    iVar74 = iVar67 + (uVar60 - uVar63) * 0x2000;
    uVar15 = iVar67 + (uVar60 - uVar63) * -0x2000;
    iVar67 = uVar60 * 0x2bb6 + uVar63 * 0x2000;
    iVar76 = iVar67 + iVar56;
    uVar16 = iVar56 - iVar67;
    iVar56 = uVar60 * 0xbb6 + uVar63 * -0x2000;
    iVar67 = iVar56 + iVar1;
    uVar60 = (uVar27 + uVar26 + uVar14) * 0x1b8d;
    iVar81 = uVar60 + (uVar27 + uVar26) * 0x85b;
    uVar63 = iVar1 - iVar56;
    iVar56 = uVar51 * 0x29cf + uVar26 * 0x8f7 + iVar81;
    iVar5 = (uVar14 + uVar27) * -0x2175;
    iVar81 = uVar51 * -0x1151 + uVar27 * -0x2f50 + iVar5 + iVar81;
    lVar70 = *(long *)(uVar52 + lVar40);
    uVar27 = uVar51 - uVar27;
    uVar44 = (ulong)uVar27;
    puVar3 = (undefined1 *)(lVar70 + uVar42);
    *puVar3 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar56 + iVar76) >> 0x12) & 0x3ff));
    iVar4 = ((uVar26 - uVar14) + uVar27) * 0x1151;
    iVar1 = iVar4 + (uVar26 - uVar14) * 0x187e;
    puVar3[0xb] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar76 - iVar56) >> 0x12) & 0x3ff));
    puVar3[1] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar1 + iVar74) >> 0x12) & 0x3ff));
    iVar56 = uVar51 * -0x29cf + uVar14 * 0x32c6 + uVar60 + iVar5;
    puVar3[10] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar74 - iVar1) >> 0x12) & 0x3ff));
    puVar3[2] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar81 + iVar67) >> 0x12) & 0x3ff));
    puVar3[9] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar67 - iVar81) >> 0x12) & 0x3ff));
    iVar67 = uVar51 * -0x1151 + uVar26 * -0x15a4 + uVar14 * -0x3f74 + uVar60;
    puVar3[3] = *(undefined1 *)(lVar55 + ((ulong)(iVar56 + uVar63 >> 0x12) & 0x3ff));
    iVar4 = iVar4 + uVar27 * -0x3b21;
    puVar3[8] = *(undefined1 *)(lVar55 + ((ulong)(uVar63 - iVar56 >> 0x12) & 0x3ff));
    puVar3[4] = *(undefined1 *)(lVar55 + ((ulong)(iVar4 + uVar15 >> 0x12) & 0x3ff));
    puVar3[7] = *(undefined1 *)(lVar55 + ((ulong)(uVar15 - iVar4 >> 0x12) & 0x3ff));
    puVar3[5] = *(undefined1 *)(lVar55 + ((ulong)(iVar67 + uVar16 >> 0x12) & 0x3ff));
    puVar3[6] = *(undefined1 *)(lVar55 + ((ulong)(uVar16 - iVar67 >> 0x12) & 0x3ff));
    lVar40 = lVar40 + 8;
  } while (lVar40 != 0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b90) {
    return;
  }
  uVar68 = uStack_d18;
  ___stack_chk_fail();
  uStack_d90 = (ulong)uVar63;
  uStack_d88 = (ulong)uVar60;
  puStack_d80 = puVar3;
  uStack_d78 = (ulong)uVar14;
  uStack_d70 = (ulong)uVar26;
  uStack_d68 = (ulong)uVar15;
  uStack_d60 = (ulong)uVar16;
  uStack_d58 = 0xffffc4df;
  uStack_d50 = 0x187e;
  uStack_d48 = 0x1151;
  ppppuStack_d40 = &ppppuStack_b30;
  uStack_d38 = 0x1081d831c;
  uStack_f4c = (int)uVar42;
  uStack_f48 = uVar44;
  lVar55 = 0;
  lStack_da0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_f58 = *(long *)(lVar70 + 0x1a8);
  lVar40 = *(long *)(uVar68 + 0x58);
  do {
    psVar47 = (short *)(lVar40 + lVar55 * 2);
    psVar57 = (short *)(lVar41 + lVar55 * 2);
    sVar39 = psVar57[0x10];
    sVar69 = psVar47[0x10];
    iVar67 = (int)sVar69 * (int)sVar39;
    uVar68 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    lVar53 = (long)(int)psVar47[0x20] * (long)(int)psVar57[0x20] +
             (long)(int)psVar47[0x30] * (long)(int)psVar57[0x30];
    lVar73 = (long)(int)psVar47[0x20] * (long)(int)psVar57[0x20] -
             (long)(int)psVar47[0x30] * (long)(int)psVar57[0x30];
    lVar66 = uVar68 + lVar73 * 0x319;
    lVar70 = lVar53 * 0x24f9 + (long)iVar67 * 0x2bf1 + lVar66;
    lVar66 = (long)iVar67 * 0x100c + lVar53 * -0x24f9 + lVar66;
    lVar61 = uVar68 + lVar73 * 0xf95;
    lVar59 = (long)iVar67 * 0x21e0 + lVar53 * -0xa20 + lVar61;
    lVar61 = lVar53 * 0xa20 + (long)iVar67 * -0x2812 + lVar61;
    lVar78 = uVar68 + lVar73 * -0x1dfe;
    lVar72 = (long)iVar67 * -0x574 + lVar53 * -0xdf2 + lVar78;
    lVar78 = lVar53 * 0xdf2 + (long)iVar67 * -0x19b5 + lVar78;
    lVar64 = (long)(int)psVar47[8] * (long)(int)psVar57[8];
    sVar12 = psVar57[0x18];
    sVar13 = psVar47[0x18];
    lVar79 = (long)(int)sVar13 * (long)(int)sVar12;
    sVar31 = psVar57[0x28];
    sVar32 = psVar47[0x28];
    lVar83 = (long)(int)sVar32 * (long)(int)sVar31;
    sVar34 = psVar57[0x38];
    sVar33 = psVar47[0x38];
    lVar75 = (lVar64 + (long)(int)sVar13 * (long)(int)sVar12) * 0x2a50;
    lVar77 = (lVar64 + (long)(int)sVar32 * (long)(int)sVar31) * 0x253e;
    lVar71 = lVar64 + (long)(int)sVar33 * (long)(int)sVar34;
    lVar82 = lVar71 * 0x1e02;
    lVar53 = lVar75 + (long)(int)lVar64 * -0x40a5 + lVar77 + lVar82;
    lVar58 = (lVar79 + (long)(int)sVar32 * (long)(int)sVar31) * -0xad5;
    lVar80 = (lVar79 + (long)(int)sVar33 * (long)(int)sVar34) * -0x253e;
    lVar75 = lVar75 + (long)(int)lVar79 * 0x1acb + lVar58 + lVar80;
    lVar84 = (lVar83 + (long)(int)sVar33 * (long)(int)sVar34) * -0x1508;
    lVar77 = lVar58 + (long)(int)lVar83 * -0x324f + lVar77 + lVar84;
    iVar67 = (int)sVar33 * (int)sVar34;
    lVar82 = lVar80 + (long)iVar67 * 0x4694 + lVar82 + lVar84;
    lVar58 = (lVar83 - (long)(int)sVar13 * (long)(int)sVar12) * 0x1e02 + lVar71 * 0xad5;
    lVar71 = (long)(int)lVar64 * 0xa33 + (long)(int)lVar79 * -0xeea + lVar58;
    lVar58 = (long)(int)lVar83 * 0xc4e + (long)iVar67 * -0x37c1 + lVar58;
    aiStack_f40[lVar55] = (int)((ulong)(lVar53 + lVar70) >> 0xb);
    aiStack_f40[lVar55 + 0x60] = (int)((ulong)(lVar70 - lVar53) >> 0xb);
    aiStack_f40[lVar55 + 8] = (int)((ulong)(lVar75 + lVar59) >> 0xb);
    aiStack_f40[lVar55 + 0x58] = (int)((ulong)(lVar59 - lVar75) >> 0xb);
    aiStack_f40[lVar55 + 0x10] = (int)((ulong)(lVar77 + lVar66) >> 0xb);
    aiStack_f40[lVar55 + 0x50] = (int)((ulong)(lVar66 - lVar77) >> 0xb);
    aiStack_f40[lVar55 + 0x18] = (int)((ulong)(lVar82 + lVar72) >> 0xb);
    aiStack_f40[lVar55 + 0x48] = (int)((ulong)(lVar72 - lVar82) >> 0xb);
    aiStack_f40[lVar55 + 0x20] = (int)((ulong)(lVar71 + lVar78) >> 0xb);
    aiStack_f40[lVar55 + 0x40] = (int)((ulong)(lVar78 - lVar71) >> 0xb);
    aiStack_f40[lVar55 + 0x28] = (int)((ulong)(lVar58 + lVar61) >> 0xb);
    aiStack_f40[lVar55 + 0x38] = (int)((ulong)(lVar61 - lVar58) >> 0xb);
    aiStack_f40[lVar55 + 0x30] =
         (int)(uVar68 + (lVar73 - (long)(int)sVar69 * (long)(int)sVar39) * 0x2d41 >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar40 = 0;
  lVar55 = lStack_f58 + 0x80;
  lVar41 = 0xfffff116;
  do {
    iVar6 = aiStack_f40[lVar40 + 1];
    iVar67 = aiStack_f40[lVar40] * 0x2000 + 0x20000;
    iVar7 = aiStack_f40[lVar40 + 5];
    iVar18 = aiStack_f40[lVar40 + 7];
    iVar56 = aiStack_f40[lVar40 + 6] + aiStack_f40[lVar40 + 4];
    iVar29 = aiStack_f40[lVar40 + 4] - aiStack_f40[lVar40 + 6];
    iVar76 = iVar67 + iVar29 * 0x319;
    iVar5 = aiStack_f40[lVar40 + 2];
    iVar8 = aiStack_f40[lVar40 + 3];
    iVar81 = iVar67 + iVar29 * 0xf95;
    uVar60 = iVar56 * 0x24f9 + iVar5 * 0x2bf1 + iVar76;
    iVar4 = iVar67 + iVar29 * -0x1dfe;
    iVar74 = iVar56 * 0xa20 + iVar5 * -0x2812 + iVar81;
    uVar63 = iVar56 * 0xdf2 + iVar5 * -0x19b5 + iVar4;
    uVar45 = (ulong)uVar63;
    iVar17 = (iVar8 + iVar6) * 0x2a50;
    iVar76 = iVar56 * -0x24f9 + iVar5 * 0x100c + iVar76;
    iVar19 = (iVar7 + iVar6) * 0x253e;
    iVar20 = (iVar18 + iVar6) * 0x1e02;
    iVar81 = iVar56 * -0xa20 + iVar5 * 0x21e0 + iVar81;
    iVar1 = iVar17 + iVar6 * -0x40a5 + iVar19 + iVar20;
    iVar21 = (iVar7 + iVar8) * -0xad5;
    iVar4 = iVar56 * -0xdf2 + iVar5 * -0x574 + iVar4;
    iVar22 = (iVar18 + iVar8) * -0x253e;
    uVar26 = iVar17 + iVar8 * 0x1acb + iVar21 + iVar22;
    iVar17 = (iVar18 + iVar7) * -0x1508;
    iVar56 = iVar21 + iVar7 * -0x324f + iVar19 + iVar17;
    uVar27 = iVar22 + iVar18 * 0x4694 + iVar20 + iVar17;
    bVar9 = *(byte *)(lVar55 + ((ulong)(iVar1 + uVar60 >> 0x12) & 0x3ff));
    pbVar43 = (byte *)(*(long *)(uVar44 + lVar40) + (uVar42 & 0xffffffff));
    *pbVar43 = bVar9;
    pbVar43[0xc] = *(byte *)(lVar55 + ((ulong)(uVar60 - iVar1 >> 0x12) & 0x3ff));
    pbVar43[1] = *(byte *)(lVar55 + ((ulong)(uVar26 + iVar81 >> 0x12) & 0x3ff));
    uVar15 = (iVar7 - iVar8) * 0x1e02;
    uVar14 = uVar15 + (iVar18 + iVar6) * 0xad5;
    pbVar43[0xb] = *(byte *)(lVar55 + ((ulong)(iVar81 - uVar26 >> 0x12) & 0x3ff));
    bVar10 = *(byte *)(lVar55 + ((ulong)((uint)(iVar56 + iVar76) >> 0x12) & 0x3ff));
    pbVar43[2] = bVar10;
    pbVar43[10] = *(byte *)(lVar55 + ((ulong)((uint)(iVar76 - iVar56) >> 0x12) & 0x3ff));
    pbVar43[3] = *(byte *)(lVar55 + ((ulong)(uVar27 + iVar4 >> 0x12) & 0x3ff));
    uVar51 = iVar6 * 0xa33 + iVar8 * -0xeea + uVar14;
    uVar68 = (ulong)uVar51;
    pbVar43[9] = *(byte *)(lVar55 + ((ulong)(iVar4 - uVar27 >> 0x12) & 0x3ff));
    bVar11 = *(byte *)(lVar55 + ((ulong)(uVar51 + uVar63 >> 0x12) & 0x3ff));
    uVar52 = (ulong)bVar11;
    pbVar43[4] = bVar11;
    iVar56 = iVar7 * 0xc4e + iVar18 * -0x37c1 + uVar14;
    pbVar43[8] = *(byte *)(lVar55 + ((ulong)(uVar63 - uVar51 >> 0x12) & 0x3ff));
    pbVar43[5] = *(byte *)(lVar55 + ((ulong)((uint)(iVar56 + iVar74) >> 0x12) & 0x3ff));
    pbVar43[7] = *(byte *)(lVar55 + ((ulong)((uint)(iVar74 - iVar56) >> 0x12) & 0x3ff));
    pbVar43[6] = *(byte *)(lVar55 + ((ulong)((uint)(iVar67 + (iVar29 - iVar5) * 0x2d41) >> 0x12) &
                                    0x3ff));
    lVar40 = lVar40 + 8;
  } while (lVar40 != 0x68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_da0) {
    return;
  }
  ___stack_chk_fail();
  uStack_fc0 = 0xffffeaf8;
  uStack_fb8 = (ulong)bVar9;
  uStack_fb0 = (ulong)uVar26;
  uStack_fa8 = (ulong)uVar27;
  uStack_fa0 = (ulong)uVar60;
  uStack_f98 = 0xad5;
  uStack_f90 = (ulong)uVar15;
  uStack_f88 = 0x1e02;
  uStack_f80 = (ulong)bVar10;
  uStack_f78 = (ulong)uVar14;
  ppppuStack_f70 = &ppppuStack_d40;
  uStack_f68 = 0x1081d8880;
  uStack_119c = (int)pbVar43;
  lStack_1198 = lVar41;
  lVar55 = 0;
  lStack_fd0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_11a8 = *(long *)(uVar68 + 0x1a8);
  lVar40 = *(long *)(uVar45 + 0x58);
  do {
    psVar47 = (short *)(lVar40 + lVar55 * 2);
    psVar57 = (short *)(uVar52 + lVar55 * 2);
    iVar56 = (int)psVar47[0x20] * (int)psVar57[0x20];
    uVar42 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    lVar82 = uVar42 + (long)iVar56 * 0x28c6;
    lVar71 = uVar42 + (long)iVar56 * 0xa12;
    lVar58 = uVar42 + (long)iVar56 * -0x1c37;
    iVar67 = (int)psVar47[0x30] * (int)psVar57[0x30];
    lVar59 = ((long)(int)psVar47[0x10] * (long)(int)psVar57[0x10] +
             (long)(int)psVar47[0x30] * (long)(int)psVar57[0x30]) * 0x2362;
    iVar74 = (int)((long)(int)psVar47[0x10] * (long)(int)psVar57[0x10]);
    lVar66 = lVar59 + (long)iVar74 * 0x8bd;
    lVar59 = lVar59 + (long)iVar67 * -0x3704;
    lVar61 = (long)iVar74 * 0x13a3 + (long)iVar67 * -0x2c1f;
    lVar70 = lVar66 + lVar82;
    lVar82 = lVar82 - lVar66;
    lVar66 = lVar59 + lVar71;
    lVar71 = lVar71 - lVar59;
    lVar59 = lVar61 + lVar58;
    lVar58 = lVar58 - lVar61;
    lVar75 = (long)(int)psVar47[8] * (long)(int)psVar57[8];
    sVar39 = psVar57[0x18];
    sVar69 = psVar47[0x18];
    lVar61 = (long)(int)sVar69 * (long)(int)sVar39;
    sVar12 = psVar57[0x28];
    sVar13 = psVar47[0x28];
    lVar78 = (long)(int)sVar13 * (long)(int)sVar12;
    lVar80 = (long)(int)psVar47[0x38] * (long)(int)psVar57[0x38];
    lVar64 = lVar75 + (long)(int)sVar13 * (long)(int)sVar12;
    lVar73 = (lVar75 + (long)(int)sVar69 * (long)(int)sVar39) * 0x2ab7;
    lVar83 = lVar64 * 0x2652;
    lVar72 = (lVar61 + (long)(int)sVar13 * (long)(int)sVar12) * -0x511 + lVar80 * -0x2000;
    iVar67 = (int)lVar61;
    lVar61 = lVar73 + (long)iVar67 * -0xd92 + lVar72;
    iVar74 = (int)lVar78;
    lVar72 = lVar83 + (long)iVar74 * -0x4bf7 + lVar72;
    lVar64 = lVar64 * 0x1814;
    lVar79 = lVar75 - (long)(int)sVar69 * (long)(int)sVar39;
    lVar77 = (lVar78 - (long)(int)sVar69 * (long)(int)sVar39) * 0x2cf8;
    lVar53 = lVar79 * 0xef2 + lVar80 * -0x2000;
    lVar78 = lVar64 + (long)(int)lVar75 * -0x21f5 + lVar53;
    lVar53 = lVar77 + (long)iVar67 * 0x1599 + lVar53;
    lVar75 = lVar73 + (long)(int)lVar75 * -0x2410 + lVar83 + lVar80 * 0x2000;
    lVar77 = lVar77 + (long)iVar74 * -0x361a + lVar64 + lVar80 * 0x2000;
    iVar67 = ((int)lVar79 - iVar74) + (int)lVar80;
    auStack_1190[lVar55] = (uint)((ulong)(lVar75 + lVar70) >> 0xb);
    auStack_1190[lVar55 + 0x68] = (uint)((ulong)(lVar70 - lVar75) >> 0xb);
    auStack_1190[lVar55 + 8] = (uint)((ulong)(lVar61 + lVar66) >> 0xb);
    auStack_1190[lVar55 + 0x60] = (uint)((ulong)(lVar66 - lVar61) >> 0xb);
    auStack_1190[lVar55 + 0x10] = (uint)((ulong)(lVar72 + lVar59) >> 0xb);
    auStack_1190[lVar55 + 0x58] = (uint)((ulong)(lVar59 - lVar72) >> 0xb);
    iVar56 = (int)(uVar42 + (long)iVar56 * -0x2d42 >> 0xb);
    auStack_1190[lVar55 + 0x18] = iVar56 + iVar67 * 4;
    auStack_1190[lVar55 + 0x50] = iVar56 + iVar67 * -4;
    auStack_1190[lVar55 + 0x20] = (uint)((ulong)(lVar77 + lVar58) >> 0xb);
    auStack_1190[lVar55 + 0x48] = (uint)((ulong)(lVar58 - lVar77) >> 0xb);
    auStack_1190[lVar55 + 0x28] = (uint)((ulong)(lVar53 + lVar71) >> 0xb);
    auStack_1190[lVar55 + 0x40] = (uint)((ulong)(lVar71 - lVar53) >> 0xb);
    auStack_1190[lVar55 + 0x30] = (uint)((ulong)(lVar78 + lVar82) >> 0xb);
    auStack_1190[lVar55 + 0x38] = (uint)((ulong)(lVar82 - lVar78) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar40 = 0;
  lVar55 = lStack_11a8 + 0x80;
  uVar42 = (ulong)pbVar43 & 0xffffffff;
  do {
    uVar51 = auStack_1190[lVar40 + 1];
    iVar67 = auStack_1190[lVar40] * 0x2000 + 0x20000;
    uVar60 = auStack_1190[lVar40 + 4];
    uVar14 = auStack_1190[lVar40 + 5];
    iVar74 = iVar67 + uVar60 * 0x28c6;
    iVar5 = iVar67 + uVar60 * 0xa12;
    iVar76 = iVar67 + uVar60 * -0x1c37;
    uVar63 = auStack_1190[lVar40 + 2];
    uVar15 = auStack_1190[lVar40 + 3];
    uVar27 = auStack_1190[lVar40 + 6];
    uVar26 = auStack_1190[lVar40 + 7];
    iVar67 = iVar67 + uVar60 * -0x2d42;
    iVar1 = (uVar27 + uVar63) * 0x2362;
    iVar81 = iVar1 + uVar63 * 0x8bd;
    iVar1 = iVar1 + uVar27 * -0x3704;
    iVar4 = uVar63 * 0x13a3 + uVar27 * -0x2c1f;
    iVar56 = iVar81 + iVar74;
    uVar27 = iVar74 - iVar81;
    iVar74 = iVar4 + iVar76;
    uVar16 = iVar76 - iVar4;
    uVar52 = (ulong)uVar16;
    uVar60 = iVar1 + iVar5;
    uVar45 = (ulong)uVar60;
    iVar81 = (uVar15 + uVar51) * 0x2ab7;
    iVar4 = (uVar14 + uVar51) * 0x2652;
    iVar76 = iVar81 + uVar51 * -0x2410 + iVar4 + uVar26 * 0x2000;
    iVar5 = iVar5 - iVar1;
    iVar1 = (uVar14 + uVar15) * -0x511 + uVar26 * -0x2000;
    iVar81 = iVar81 + uVar15 * -0xd92 + iVar1;
    iVar1 = iVar4 + uVar14 * -0x4bf7 + iVar1;
    uVar63 = uVar14 * -0x361a + uVar26 * 0x2000;
    iVar4 = (uVar51 - uVar15) * 0xef2 + uVar26 * -0x2000;
    uVar26 = ((uVar51 - uVar15) - uVar14) + uVar26;
    uVar44 = (ulong)uVar26;
    puVar3 = (undefined1 *)(*(long *)(lVar41 + lVar40) + uVar42);
    *puVar3 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar76 + iVar56) >> 0x12) & 0x3ff));
    puVar3[0xd] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar56 - iVar76) >> 0x12) & 0x3ff));
    bVar9 = *(byte *)(lVar55 + ((ulong)(iVar81 + uVar60 >> 0x12) & 0x3ff));
    uVar68 = (ulong)bVar9;
    puVar3[1] = bVar9;
    puVar3[0xc] = *(undefined1 *)(lVar55 + ((ulong)(uVar60 - iVar81 >> 0x12) & 0x3ff));
    puVar3[2] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar1 + iVar74) >> 0x12) & 0x3ff));
    iVar76 = (uVar14 + uVar51) * 0x1814;
    iVar81 = (uVar14 - uVar15) * 0x2cf8;
    puVar3[0xb] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar74 - iVar1) >> 0x12) & 0x3ff));
    iVar56 = uVar63 + iVar81 + iVar76;
    puVar3[3] = *(undefined1 *)(lVar55 + ((ulong)(iVar67 + uVar26 * 0x2000 >> 0x12) & 0x3ff));
    puVar3[10] = *(undefined1 *)(lVar55 + ((ulong)(iVar67 + uVar26 * -0x2000 >> 0x12) & 0x3ff));
    puVar3[4] = *(undefined1 *)(lVar55 + ((ulong)(iVar56 + uVar16 >> 0x12) & 0x3ff));
    iVar67 = iVar76 + uVar51 * -0x21f5 + iVar4;
    iVar4 = iVar81 + uVar15 * 0x1599 + iVar4;
    puVar3[9] = *(undefined1 *)(lVar55 + ((ulong)(uVar16 - iVar56 >> 0x12) & 0x3ff));
    puVar3[5] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar4 + iVar5) >> 0x12) & 0x3ff));
    puVar3[8] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar5 - iVar4) >> 0x12) & 0x3ff));
    puVar3[6] = *(undefined1 *)(lVar55 + ((ulong)(iVar67 + uVar27 >> 0x12) & 0x3ff));
    puVar3[7] = *(undefined1 *)(lVar55 + ((ulong)(uVar27 - iVar67 >> 0x12) & 0x3ff));
    lVar40 = lVar40 + 8;
  } while (lVar40 != 0x70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_fd0) {
    return;
  }
  ___stack_chk_fail();
  uStack_1210 = (ulong)uVar15;
  uStack_1208 = (ulong)uVar27;
  uStack_1200 = 0x1599;
  uStack_11f8 = 0xffffc9e6;
  uStack_11f0 = 0x2cf8;
  uStack_11e8 = 0xffffb409;
  uStack_11e0 = 0xfffff26e;
  uStack_11d8 = 0xfffffaef;
  lStack_11d0 = lVar41;
  uStack_11c8 = (ulong)uVar63;
  ppppuStack_11c0 = &ppppuStack_f70;
  uStack_11b8 = 0x1081d8d6c;
  uStack_141c = (int)uVar42;
  uStack_1418 = uVar52;
  uStack_1408 = uVar45;
  lVar55 = 0;
  lStack_1220 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1428 = *(long *)(uVar44 + 0x1a8);
  lStack_1410 = *(long *)(uVar68 + 0x58);
  do {
    psVar47 = (short *)(lStack_1410 + lVar55 * 2);
    psVar57 = (short *)(uVar45 + lVar55 * 2);
    lVar66 = (long)(int)psVar47[0x10] * (long)(int)psVar57[0x10];
    uVar44 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    iVar56 = (int)psVar47[0x30] * (int)psVar57[0x30];
    lVar59 = uVar44 + (long)iVar56 * -0xdfc;
    lVar61 = uVar44 + (long)iVar56 * 0x249d;
    lVar77 = lVar66 - (long)(int)psVar47[0x20] * (long)(int)psVar57[0x20];
    lVar72 = lVar66 + (long)(int)psVar47[0x20] * (long)(int)psVar57[0x20];
    lVar40 = lVar77 * 0x176 + lVar72 * 0x2ace + lVar61;
    lVar41 = (long)(int)lVar66 * 0x2e13 + lVar72 * -0x2ace + lVar77 * 0x176 + lVar59;
    lVar70 = lVar61 + lVar77 * -0xcc7 + lVar72 * -0x1182;
    lVar66 = lVar72 * 0x1182 + (long)(int)lVar66 * -0x2e13 + lVar77 * -0xcc7 + lVar59;
    lVar59 = lVar77 * 0xb50 + lVar72 * 0x194c + lVar59;
    lVar61 = lVar61 + lVar72 * -0x194c + lVar77 * 0xb50;
    sVar39 = psVar57[8];
    sVar69 = psVar47[8];
    lVar53 = (long)(int)sVar69 * (long)(int)sVar39;
    sVar12 = psVar57[0x28];
    sVar13 = psVar47[0x28];
    iVar81 = (int)sVar13 * (int)sVar12;
    sVar31 = psVar57[0x38];
    sVar32 = psVar47[0x38];
    iVar67 = (int)sVar32 * (int)sVar31;
    lVar82 = lVar53 - (long)(int)sVar32 * (long)(int)sVar31;
    lVar78 = lVar82 * 0x2d02 + (long)iVar81 * 0x2731;
    iVar76 = (int)((long)(int)psVar47[0x18] * (long)(int)psVar57[0x18]);
    lVar72 = lVar78 + (long)iVar67 * 0x4ea3 + (long)iVar76 * 0x2b0a;
    iVar74 = (int)lVar53;
    lVar78 = (long)iVar74 * -0x2399 + (long)iVar76 * -0x1a9a + lVar78;
    lVar71 = (long)(int)psVar47[0x18] * (long)(int)psVar57[0x18] -
             (long)(int)sVar32 * (long)(int)sVar31;
    lVar75 = (lVar53 + (long)(int)sVar32 * (long)(int)sVar31) * 0x1268;
    lVar53 = (long)iVar74 * 0xf39 + (long)iVar76 * -0x1a9a + (long)iVar81 * -0x2731 + lVar75;
    lVar75 = (long)iVar76 * -0x2b0a + (long)iVar81 * 0x2731 + (long)iVar67 * -0x1bd1 + lVar75;
    auStack_1400[lVar55] = (uint)((ulong)(lVar72 + lVar40) >> 0xb);
    auStack_1400[lVar55 + 0x70] = (uint)((ulong)(lVar40 - lVar72) >> 0xb);
    lVar72 = (lVar71 + (long)(int)sVar69 * (long)(int)sVar39) * 0x1a9a;
    lVar40 = lVar72 + (long)iVar74 * 0x1071;
    auStack_1400[lVar55 + 8] = (uint)((ulong)(lVar40 + lVar59) >> 0xb);
    auStack_1400[lVar55 + 0x68] = (uint)((ulong)(lVar59 - lVar40) >> 0xb);
    lVar59 = uVar44 + (long)iVar56 * -0x2d42;
    lVar82 = lVar82 - (long)(int)sVar13 * (long)(int)sVar12;
    lVar40 = lVar59 + lVar77 * 0x16a0;
    auStack_1400[lVar55 + 0x10] = (uint)((ulong)(lVar82 * 0x2731 + lVar40) >> 0xb);
    auStack_1400[lVar55 + 0x60] = (uint)((ulong)(lVar40 + lVar82 * -0x2731) >> 0xb);
    auStack_1400[lVar55 + 0x18] = (uint)((ulong)(lVar53 + lVar41) >> 0xb);
    auStack_1400[lVar55 + 0x58] = (uint)((ulong)(lVar41 - lVar53) >> 0xb);
    lVar72 = lVar72 + lVar71 * -0x45a4;
    auStack_1400[lVar55 + 0x20] = (uint)((ulong)(lVar72 + lVar61) >> 0xb);
    auStack_1400[lVar55 + 0x50] = (uint)((ulong)(lVar61 - lVar72) >> 0xb);
    auStack_1400[lVar55 + 0x28] = (uint)((ulong)(lVar75 + lVar70) >> 0xb);
    auStack_1400[lVar55 + 0x48] = (uint)((ulong)(lVar70 - lVar75) >> 0xb);
    auStack_1400[lVar55 + 0x30] = (uint)((ulong)(lVar78 + lVar66) >> 0xb);
    auStack_1400[lVar55 + 0x40] = (uint)((ulong)(lVar66 - lVar78) >> 0xb);
    auStack_1400[lVar55 + 0x38] = (uint)((ulong)(lVar59 + lVar77 * 0x7ffffffd2c0) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar40 = 0;
  lVar55 = lStack_1428 + 0x80;
  uVar42 = uVar42 & 0xffffffff;
  do {
    uVar27 = auStack_1400[lVar40 + 1];
    uVar44 = (ulong)uVar27;
    puVar3 = (undefined1 *)(*(long *)(uVar52 + lVar40) + uVar42);
    iVar67 = auStack_1400[lVar40] * 0x2000 + 0x20000;
    uVar60 = auStack_1400[lVar40 + 6];
    uVar51 = auStack_1400[lVar40 + 7];
    iVar4 = iVar67 + uVar60 * -0xdfc;
    iVar6 = iVar67 + uVar60 * 0x249d;
    uVar63 = auStack_1400[lVar40 + 2];
    uVar14 = auStack_1400[lVar40 + 3];
    uVar26 = auStack_1400[lVar40 + 5];
    iVar67 = iVar67 + uVar60 * -0x2d42;
    iVar18 = uVar63 - auStack_1400[lVar40 + 4];
    iVar56 = auStack_1400[lVar40 + 4] + uVar63;
    iVar74 = iVar18 * 0x176 + iVar56 * 0x2ace + iVar6;
    iVar76 = iVar18 * -0xcc7 + iVar56 * -0x1182 + iVar6;
    iVar81 = uVar63 * 0x2e13 + iVar56 * -0x2ace + iVar18 * 0x176 + iVar4;
    iVar1 = iVar18 * 0xb50 + iVar56 * 0x194c + iVar4;
    iVar7 = iVar67 + iVar18 * 0x16a0;
    iVar4 = iVar56 * 0x1182 + uVar63 * -0x2e13 + iVar18 * -0xcc7 + iVar4;
    iVar5 = uVar26 * 0x2731 + (uVar27 - uVar51) * 0x2d02;
    uVar60 = iVar6 + iVar56 * -0x194c + iVar18 * 0xb50;
    uVar45 = (ulong)uVar60;
    iVar56 = iVar5 + uVar14 * 0x2b0a + uVar51 * 0x4ea3;
    iVar6 = (uVar27 - uVar51) - uVar26;
    uVar28 = ((uVar14 - uVar51) + uVar27) * 0x1a9a;
    *puVar3 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar56 + iVar74) >> 0x12) & 0x3ff));
    uVar15 = uVar28 + uVar27 * 0x1071;
    puVar3[0xe] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar74 - iVar56) >> 0x12) & 0x3ff));
    puVar3[1] = *(undefined1 *)(lVar55 + ((ulong)(uVar15 + iVar1 >> 0x12) & 0x3ff));
    puVar3[0xd] = *(undefined1 *)(lVar55 + ((ulong)(iVar1 - uVar15 >> 0x12) & 0x3ff));
    puVar3[2] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar6 * 0x2731 + iVar7) >> 0x12) & 0x3ff));
    uVar23 = (uVar51 + uVar27) * 0x1268;
    uVar63 = uVar14 * -0x1a9a + uVar27 * 0xf39 + uVar26 * -0x2731 + uVar23;
    puVar3[0xc] = *(undefined1 *)
                   (lVar55 + ((ulong)((uint)(iVar7 + iVar6 * -0x2731) >> 0x12) & 0x3ff));
    uVar16 = uVar28 + (uVar14 - uVar51) * -0x45a4;
    uVar46 = (ulong)uVar16;
    puVar3[3] = *(undefined1 *)(lVar55 + ((ulong)(uVar63 + iVar81 >> 0x12) & 0x3ff));
    uVar26 = uVar26 * 0x2731 + uVar14 * -0x2b0a;
    uVar68 = (ulong)uVar26;
    puVar3[0xb] = *(undefined1 *)(lVar55 + ((ulong)(iVar81 - uVar63 >> 0x12) & 0x3ff));
    puVar3[4] = *(undefined1 *)(lVar55 + ((ulong)(uVar16 + uVar60 >> 0x12) & 0x3ff));
    iVar56 = uVar26 + uVar51 * -0x1bd1 + uVar23;
    puVar3[10] = *(undefined1 *)(lVar55 + ((ulong)(uVar60 - uVar16 >> 0x12) & 0x3ff));
    puVar3[5] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar56 + iVar76) >> 0x12) & 0x3ff));
    iVar5 = uVar14 * -0x1a9a + uVar27 * -0x2399 + iVar5;
    puVar3[9] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar76 - iVar56) >> 0x12) & 0x3ff));
    puVar3[6] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar5 + iVar4) >> 0x12) & 0x3ff));
    puVar3[8] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar4 - iVar5) >> 0x12) & 0x3ff));
    puVar3[7] = *(undefined1 *)
                 (lVar55 + ((ulong)((uint)(iVar67 + iVar18 * 0xfffd2c0) >> 0x12) & 0x3ff));
    lVar40 = lVar40 + 8;
  } while (lVar40 != 0x78);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1220) {
    return;
  }
  ___stack_chk_fail();
  uStack_1490 = 0xf39;
  uStack_1488 = 0x1268;
  uStack_1480 = 0xffffdc67;
  uStack_1478 = 0x1a9a;
  uStack_1470 = uVar52;
  uStack_1468 = (ulong)uVar15;
  uStack_1460 = 0xffffba5c;
  uStack_1458 = (ulong)uVar28;
  uStack_1450 = (ulong)uVar23;
  uStack_1448 = (ulong)uVar63;
  ppppuStack_1440 = &ppppuStack_11c0;
  uStack_1438 = 0x1081d92d8;
  uStack_16c4 = (int)uVar42;
  uStack_16c0 = uVar44;
  uStack_16b0 = uVar46;
  lVar55 = 0;
  lStack_14a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_16d0 = *(long *)(uVar68 + 0x1a8);
  lStack_16b8 = *(long *)(uVar45 + 0x58);
  do {
    psVar47 = (short *)(lStack_16b8 + lVar55 * 2);
    psVar57 = (short *)(uVar46 + lVar55 * 2);
    iVar67 = (int)psVar47[0x20] * (int)psVar57[0x20];
    uVar68 = (long)(int)*psVar57 * (long)(int)*psVar47 * 0x2000 | 0x400;
    lStack_16a8 = uVar68 + (long)iVar67 * 0x29cf;
    lVar58 = uVar68 + (long)iVar67 * -0x29cf;
    lVar64 = uVar68 + (long)iVar67 * 0x1151;
    lVar71 = uVar68 + (long)iVar67 * -0x1151;
    iVar56 = (int)psVar47[0x30] * (int)psVar57[0x30];
    lVar66 = (long)(int)psVar47[0x10] * (long)(int)psVar57[0x10] -
             (long)(int)psVar47[0x30] * (long)(int)psVar57[0x30];
    lVar59 = lVar66 * 0x8d4;
    lVar66 = lVar66 * 0x2c63;
    lVar41 = lVar66 + (long)iVar56 * 0x5203;
    iVar67 = (int)((long)(int)psVar47[0x10] * (long)(int)psVar57[0x10]);
    lVar70 = lVar59 + (long)iVar67 * 0x1ccd;
    lVar66 = lVar66 + (long)iVar67 * -0x133e;
    lVar59 = lVar59 + (long)iVar56 * -0x1050;
    lVar40 = lVar41 + lStack_16a8;
    lStack_16a8 = lStack_16a8 - lVar41;
    lVar41 = lVar70 + lVar64;
    lVar64 = lVar64 - lVar70;
    lVar70 = lVar66 + lVar71;
    lVar71 = lVar71 - lVar66;
    lVar66 = lVar59 + lVar58;
    lVar58 = lVar58 - lVar59;
    lVar61 = (long)(int)psVar47[8] * (long)(int)psVar57[8];
    sVar39 = psVar57[0x18];
    sVar69 = psVar47[0x18];
    lVar83 = (long)(int)sVar69 * (long)(int)sVar39;
    sVar12 = psVar57[0x28];
    sVar13 = psVar47[0x28];
    sVar31 = psVar57[0x38];
    sVar32 = psVar47[0x38];
    lVar73 = lVar61 + (long)(int)sVar13 * (long)(int)sVar12;
    lVar72 = (lVar61 + (long)(int)sVar69 * (long)(int)sVar39) * 0x2b4e;
    lVar85 = lVar73 * 0x27e9;
    lVar75 = (lVar61 + (long)(int)sVar32 * (long)(int)sVar31) * 0x22fc;
    lVar79 = (lVar61 - (long)(int)sVar32 * (long)(int)sVar31) * 0x1cb6;
    lVar73 = lVar73 * 0x1555;
    lVar78 = (lVar61 - (long)(int)sVar69 * (long)(int)sVar39) * 0xd23;
    lVar59 = lVar72 + (long)(int)lVar61 * -0x492a + lVar85 + lVar75;
    lVar61 = lVar78 + (long)(int)lVar61 * -0x3abe + lVar73 + lVar79;
    lVar53 = (lVar83 + (long)(int)sVar13 * (long)(int)sVar12) * 0x470;
    iVar74 = (int)sVar32;
    iVar56 = (int)sVar31;
    lVar77 = lVar83 + (long)iVar74 * (long)iVar56;
    lVar80 = lVar77 * -0x1555;
    lVar72 = lVar72 + (long)(int)lVar83 * 0x24d + lVar53 + lVar80;
    lVar84 = (long)(int)sVar13 * (long)(int)sVar12;
    lVar82 = (lVar84 - (long)(int)sVar69 * (long)(int)sVar39) * 0x2d09;
    lVar77 = lVar77 * -0x27e9;
    lVar78 = lVar78 + (long)(int)lVar83 * 0x3f1a + lVar82 + lVar77;
    lVar83 = (lVar84 + (long)iVar74 * (long)iVar56) * -0x2b4e;
    lVar53 = lVar53 + (long)(int)lVar84 * -0x2406 + lVar85 + lVar83;
    iVar67 = (int)((long)iVar74 * (long)iVar56);
    lVar75 = lVar80 + (long)iVar67 * 0x2218 + lVar75 + lVar83;
    lVar80 = ((long)iVar74 * (long)iVar56 - (long)(int)sVar13 * (long)(int)sVar12) * 0xd23;
    lVar77 = lVar77 + (long)iVar67 * 0x6485 + lVar79 + lVar80;
    lVar82 = lVar82 + (long)(int)lVar84 * -0x1886 + lVar73 + lVar80;
    aiStack_16a0[lVar55] = (int)((ulong)(lVar59 + lVar40) >> 0xb);
    aiStack_16a0[lVar55 + 0x78] = (int)((ulong)(lVar40 - lVar59) >> 0xb);
    aiStack_16a0[lVar55 + 8] = (int)((ulong)(lVar72 + lVar41) >> 0xb);
    aiStack_16a0[lVar55 + 0x70] = (int)((ulong)(lVar41 - lVar72) >> 0xb);
    aiStack_16a0[lVar55 + 0x10] = (int)((ulong)(lVar53 + lVar70) >> 0xb);
    aiStack_16a0[lVar55 + 0x68] = (int)((ulong)(lVar70 - lVar53) >> 0xb);
    aiStack_16a0[lVar55 + 0x18] = (int)((ulong)(lVar75 + lVar66) >> 0xb);
    aiStack_16a0[lVar55 + 0x60] = (int)((ulong)(lVar66 - lVar75) >> 0xb);
    aiStack_16a0[lVar55 + 0x20] = (int)((ulong)(lVar77 + lVar58) >> 0xb);
    aiStack_16a0[lVar55 + 0x58] = (int)((ulong)(lVar58 - lVar77) >> 0xb);
    aiStack_16a0[lVar55 + 0x28] = (int)((ulong)(lVar82 + lVar71) >> 0xb);
    aiStack_16a0[lVar55 + 0x50] = (int)((ulong)(lVar71 - lVar82) >> 0xb);
    aiStack_16a0[lVar55 + 0x30] = (int)((ulong)(lVar78 + lVar64) >> 0xb);
    aiStack_16a0[lVar55 + 0x48] = (int)((ulong)(lVar64 - lVar78) >> 0xb);
    aiStack_16a0[lVar55 + 0x38] = (int)((ulong)(lVar61 + lStack_16a8) >> 0xb);
    aiStack_16a0[lVar55 + 0x40] = (int)((ulong)(lStack_16a8 - lVar61) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar40 = 0;
  lVar55 = lStack_16d0 + 0x80;
  do {
    iVar6 = aiStack_16a0[lVar40 + 1];
    iVar76 = aiStack_16a0[lVar40 + 4];
    iVar8 = aiStack_16a0[lVar40 + 5];
    iVar67 = aiStack_16a0[lVar40] * 0x2000 + 0x20000;
    iVar56 = iVar67 + iVar76 * 0x29cf;
    iVar30 = iVar67 + iVar76 * -0x29cf;
    iVar81 = aiStack_16a0[lVar40 + 2];
    iVar17 = aiStack_16a0[lVar40 + 3];
    iVar74 = iVar67 + iVar76 * 0x1151;
    iVar1 = aiStack_16a0[lVar40 + 6];
    iVar19 = aiStack_16a0[lVar40 + 7];
    iVar18 = (iVar81 - iVar1) * 0x8d4;
    iVar67 = iVar67 + iVar76 * -0x1151;
    iVar7 = (iVar81 - iVar1) * 0x2c63;
    iVar4 = iVar7 + iVar1 * 0x5203;
    iVar5 = iVar18 + iVar81 * 0x1ccd;
    iVar7 = iVar7 + iVar81 * -0x133e;
    iVar18 = iVar18 + iVar1 * -0x1050;
    iVar76 = iVar4 + iVar56;
    iVar56 = iVar56 - iVar4;
    iVar81 = iVar5 + iVar74;
    iVar74 = iVar74 - iVar5;
    iVar1 = iVar7 + iVar67;
    iVar67 = iVar67 - iVar7;
    iVar7 = (iVar17 + iVar6) * 0x2b4e;
    iVar20 = (iVar8 + iVar6) * 0x27e9;
    iVar21 = (iVar19 + iVar6) * 0x22fc;
    iVar4 = iVar18 + iVar30;
    iVar22 = (iVar6 - iVar19) * 0x1cb6;
    uVar51 = (iVar8 + iVar6) * 0x1555;
    iVar29 = (iVar6 - iVar17) * 0xd23;
    iVar30 = iVar30 - iVar18;
    iVar5 = iVar7 + iVar6 * -0x492a + iVar20 + iVar21;
    iVar6 = iVar29 + iVar6 * -0x3abe + uVar51 + iVar22;
    iVar18 = (iVar8 + iVar17) * 0x470;
    iVar24 = (iVar19 + iVar17) * -0x1555;
    iVar7 = iVar7 + iVar17 * 0x24d + iVar18 + iVar24;
    iVar25 = (iVar19 + iVar8) * -0x2b4e;
    uVar60 = iVar18 + iVar8 * -0x2406 + iVar20 + iVar25;
    iVar18 = iVar24 + iVar19 * 0x2218 + iVar21 + iVar25;
    pbVar43 = (byte *)(*(long *)(uVar44 + lVar40) + (uVar42 & 0xffffffff));
    bVar9 = *(byte *)(lVar55 + ((ulong)((uint)(iVar5 + iVar76) >> 0x12) & 0x3ff));
    *pbVar43 = bVar9;
    pbVar43[0xf] = *(byte *)(lVar55 + ((ulong)((uint)(iVar76 - iVar5) >> 0x12) & 0x3ff));
    pbVar43[1] = *(byte *)(lVar55 + ((ulong)((uint)(iVar7 + iVar81) >> 0x12) & 0x3ff));
    uVar14 = (iVar19 + iVar17) * -0x27e9;
    plVar50 = (long *)0x6485;
    uVar26 = uVar14 + iVar19 * 0x6485;
    iVar76 = (iVar19 - iVar8) * 0xd23;
    uVar63 = uVar26 + iVar22 + iVar76;
    uVar45 = (ulong)uVar63;
    pbVar43[0xe] = *(byte *)(lVar55 + ((ulong)((uint)(iVar81 - iVar7) >> 0x12) & 0x3ff));
    bVar10 = *(byte *)(lVar55 + ((ulong)(uVar60 + iVar1 >> 0x12) & 0x3ff));
    pbVar43[2] = bVar10;
    pbVar43[0xd] = *(byte *)(lVar55 + ((ulong)(iVar1 - uVar60 >> 0x12) & 0x3ff));
    pbVar43[3] = *(byte *)(lVar55 + ((ulong)((uint)(iVar18 + iVar4) >> 0x12) & 0x3ff));
    pbVar43[0xc] = *(byte *)(lVar55 + ((ulong)((uint)(iVar4 - iVar18) >> 0x12) & 0x3ff));
    pbVar43[4] = *(byte *)(lVar55 + ((ulong)(uVar63 + iVar30 >> 0x12) & 0x3ff));
    uVar27 = iVar29 + iVar17 * 0x3f1a;
    uVar68 = (ulong)uVar27;
    iVar81 = (iVar8 - iVar17) * 0x2d09;
    lVar41 = 0xffffe77a;
    iVar76 = iVar81 + iVar8 * -0x1886 + uVar51 + iVar76;
    pbVar43[0xb] = *(byte *)(lVar55 + ((ulong)(iVar30 - uVar63 >> 0x12) & 0x3ff));
    pbVar43[5] = *(byte *)(lVar55 + ((ulong)((uint)(iVar76 + iVar67) >> 0x12) & 0x3ff));
    iVar81 = uVar27 + iVar81 + uVar14;
    pbVar43[10] = *(byte *)(lVar55 + ((ulong)((uint)(iVar67 - iVar76) >> 0x12) & 0x3ff));
    pbVar43[6] = *(byte *)(lVar55 + ((ulong)((uint)(iVar81 + iVar74) >> 0x12) & 0x3ff));
    pbVar43[9] = *(byte *)(lVar55 + ((ulong)((uint)(iVar74 - iVar81) >> 0x12) & 0x3ff));
    pbVar43[7] = *(byte *)(lVar55 + ((ulong)((uint)(iVar6 + iVar56) >> 0x12) & 0x3ff));
    pbVar43[8] = *(byte *)(lVar55 + ((ulong)((uint)(iVar56 - iVar6) >> 0x12) & 0x3ff));
    lVar40 = lVar40 + 8;
  } while (lVar40 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_14a0) {
    return;
  }
  uVar42 = uStack_16c0;
  ___stack_chk_fail();
  uStack_1720 = (ulong)uVar60;
  uStack_1718 = (ulong)bVar9;
  uStack_1710 = (ulong)uVar26;
  uStack_1708 = (ulong)uVar14;
  uStack_1700 = uVar45;
  uStack_16f8 = (ulong)bVar10;
  uStack_16f0 = (ulong)uVar51;
  uStack_16e8 = 0xd23;
  ppppuStack_16e0 = &ppppuStack_1440;
  pcStack_16d8 = FUN_1081d98e8;
  lStack_1728 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar55 = *(long *)(uVar68 + 0x1a8);
  psVar47 = (short *)(lVar41 + 0x70);
  puVar54 = auStack_17a8;
  uVar60 = 9;
  psVar57 = *(short **)(pbVar43 + 0x58);
  do {
    if (uVar60 != 5) {
      sVar39 = psVar47[-0x20];
      if (psVar47[-0x30] == 0 && psVar47[-0x28] == 0) {
        if (sVar39 != 0) {
LAB_1081d9990:
          iVar67 = 0;
          goto LAB_1081d99a0;
        }
        if (((psVar47[-0x10] != 0) || (psVar47[-8] != 0)) || (*psVar47 != 0)) {
          sVar39 = 0;
          goto LAB_1081d9990;
        }
        uVar63 = (int)psVar47[-0x38] * (int)*psVar57 * 4;
        *puVar54 = uVar63;
        puVar54[8] = uVar63;
        puVar54[0x10] = uVar63;
        lVar40 = 0x60;
      }
      else {
        iVar67 = psVar47[-0x28] * 0x3b21;
LAB_1081d99a0:
        lVar40 = (long)iVar67 * (long)(int)psVar57[0x10] +
                 (long)((int)psVar47[-8] * (int)psVar57[0x30]) * -0x187e;
        uVar45 = (long)(int)psVar47[-0x38] * (long)(int)*psVar57 * 0x4000 - lVar40;
        iVar67 = (int)psVar57[8] * (int)psVar47[-0x30];
        lVar70 = (long)((int)psVar57[0x38] * (int)*psVar47) * -0x6c2 +
                 (long)((int)psVar57[0x28] * (int)psVar47[-0x10]) * 0x2e75 +
                 (long)((int)psVar57[0x18] * (int)sVar39) * -0x4587 + (long)iVar67 * 0x21f9;
        lVar41 = (long)((int)psVar57[0x38] * (int)*psVar47) * -0x1050 +
                 (long)((int)psVar57[0x28] * (int)psVar47[-0x10]) * -0x133e +
                 (long)((int)psVar57[0x18] * (int)sVar39) * 0x1ccd + (long)iVar67 * 0x5203;
        lVar40 = lVar40 + (long)(int)psVar47[-0x38] * (long)(int)*psVar57 * 0x4000 + 0x800;
        *puVar54 = (uint)((ulong)(lVar41 + lVar40) >> 0xc);
        puVar54[0x18] = (uint)((ulong)(lVar40 - lVar41) >> 0xc);
        puVar54[8] = (uint)(lVar70 + uVar45 + 0x800 >> 0xc);
        uVar63 = (uint)((uVar45 + 0x800) - lVar70 >> 0xc);
        lVar40 = 0x40;
      }
      *(uint *)((long)puVar54 + lVar40) = uVar63;
    }
    psVar57 = psVar57 + 1;
    puVar54 = puVar54 + 1;
    uVar60 = uVar60 - 1;
    psVar47 = psVar47 + 1;
  } while (1 < uVar60);
  lVar40 = 0;
  lVar55 = lVar55 + 0x80;
  lVar41 = 0x1ccd;
  lVar70 = 0x5203;
  psVar47 = (short *)0x3b21;
  uVar42 = uVar42 & 0xffffffff;
  do {
    plVar49 = plVar50 + 1;
    piVar65 = (int *)((long)auStack_17a8 + lVar40);
    pbVar43 = (byte *)(*plVar50 + uVar42);
    iVar67 = *(int *)((long)auStack_17a8 + lVar40 + 4);
    iVar56 = *(int *)((long)auStack_17a8 + lVar40 + 8);
    iVar74 = *(int *)((long)auStack_17a8 + lVar40 + 0xc);
    if (iVar67 == 0 && iVar56 == 0) {
      if (iVar74 != 0) {
LAB_1081d9b14:
        iVar56 = 0;
        goto LAB_1081d9b20;
      }
      if (((*(int *)((long)auStack_17a8 + lVar40 + 0x14) != 0) ||
          (*(int *)((long)auStack_17a8 + lVar40 + 0x18) != 0)) ||
         (*(int *)((long)auStack_17a8 + lVar40 + 0x1c) != 0)) {
        iVar74 = 0;
        goto LAB_1081d9b14;
      }
      bVar9 = *(byte *)(lVar55 + ((ulong)(*piVar65 + 0x10U >> 5) & 0x3ff));
      *pbVar43 = bVar9;
      pbVar43[1] = bVar9;
      pbVar43[2] = bVar9;
      lVar66 = 3;
      uVar60 = 0;
      uVar44 = 0;
    }
    else {
      iVar56 = iVar56 * 0x3b21;
LAB_1081d9b20:
      uVar60 = *(uint *)((long)auStack_17a8 + lVar40);
      iVar76 = *(int *)((long)auStack_17a8 + lVar40 + 0x14);
      iVar56 = iVar56 + *(int *)((long)auStack_17a8 + lVar40 + 0x18) * -0x187e;
      uVar63 = uVar60 * 0x4000 - iVar56;
      uVar45 = (ulong)uVar63;
      iVar81 = *(int *)((long)auStack_17a8 + lVar40 + 0x1c);
      iVar1 = iVar67 * 0x5203 + iVar81 * -0x1050 + iVar76 * -0x133e + iVar74 * 0x1ccd;
      iVar56 = iVar56 + uVar60 * 0x4000 + 0x40000;
      bVar9 = *(byte *)(lVar55 + ((ulong)((uint)(iVar1 + iVar56) >> 0x13) & 0x3ff));
      uVar44 = (ulong)bVar9;
      iVar74 = iVar67 * 0x21f9 + iVar81 * -0x6c2 + iVar76 * 0x2e75 + iVar74 * -0x4587;
      *pbVar43 = bVar9;
      pbVar43[3] = *(byte *)(lVar55 + ((ulong)((uint)(iVar56 - iVar1) >> 0x13) & 0x3ff));
      iVar67 = uVar63 + 0x40000;
      bVar9 = *(byte *)(lVar55 + ((ulong)((uint)(iVar74 + iVar67) >> 0x13) & 0x3ff));
      piVar65 = (int *)(ulong)bVar9;
      pbVar43[1] = bVar9;
      bVar9 = *(byte *)(lVar55 + ((ulong)((uint)(iVar67 - iVar74) >> 0x13) & 0x3ff));
      lVar66 = 2;
    }
    pbVar43[lVar66] = bVar9;
    lVar40 = lVar40 + 0x20;
    plVar50 = plVar49;
  } while (lVar40 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1728) {
    return;
  }
  ___stack_chk_fail();
  uStack_17e0 = uVar45;
  uStack_17d8 = (ulong)uVar60;
  uStack_17d0 = uVar44;
  piStack_17c8 = piVar65;
  ppppuStack_17c0 = &ppppuStack_16e0;
  pcStack_17b8 = FUN_1081d9c18;
  lStack_17e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar40 = *(long *)(lVar41 + 0x1a8);
  uVar60 = 9;
  psVar57 = *(short **)(lVar70 + 0x58);
  lVar55 = 0x20;
  do {
    bVar38 = uVar60 != 3;
    uVar60 = uVar60 - 1;
    if ((bVar38) && ((uVar60 & 0x7ffffffd) != 4)) {
      sVar39 = psVar47[0x28];
      if (psVar47[8] == 0 && psVar47[0x18] == 0) {
        if (sVar39 != 0) {
LAB_1081d9cb0:
          iVar67 = 0;
          goto LAB_1081d9cc0;
        }
        if (psVar47[0x38] != 0) {
          sVar39 = 0;
          goto LAB_1081d9cb0;
        }
        iVar67 = (int)*psVar47 * (int)*psVar57 * 4;
        *(int *)((long)aiStack_1848 + lVar55) = iVar67;
      }
      else {
        iVar67 = psVar47[0x18] * -0x28ba;
LAB_1081d9cc0:
        lVar41 = (long)((int)psVar47[0x38] * (int)psVar57[0x38]) * -0x1712 +
                 (long)((int)sVar39 * (int)psVar57[0x28]) * 0x1b37 +
                 (long)iVar67 * (long)(int)psVar57[0x18] +
                 (long)((int)psVar47[8] * (int)psVar57[8]) * 0x73fc;
        uVar44 = (long)(int)*psVar47 * (long)(int)*psVar57 * 0x8000 | 0x1000;
        *(int *)((long)aiStack_1848 + lVar55) = (int)(lVar41 + uVar44 >> 0xd);
        iVar67 = (int)(uVar44 - lVar41 >> 0xd);
      }
      *(int *)((long)auStack_1828 + lVar55) = iVar67;
    }
    psVar47 = psVar47 + 1;
    psVar57 = psVar57 + 1;
    lVar55 = lVar55 + 4;
  } while (1 < uVar60);
  lVar55 = 0;
  lVar40 = lVar40 + 0x80;
  puVar54 = auStack_1828;
  uVar44 = uVar42 & 0xffffffff;
  bVar38 = true;
  do {
    pbVar43 = (byte *)(plVar49[lVar55] + uVar44);
    uVar60 = puVar54[3];
    uVar68 = (ulong)uVar60;
    uVar63 = puVar54[5];
    if (puVar54[1] == 0 && uVar60 == 0) {
      if (uVar63 != 0) {
LAB_1081d9da0:
        iVar67 = 0;
        goto LAB_1081d9dac;
      }
      if (puVar54[7] != 0) {
        uVar63 = 0;
        goto LAB_1081d9da0;
      }
      bVar9 = *(byte *)(lVar40 + ((ulong)(*puVar54 + 0x10 >> 5) & 0x3ff));
      *pbVar43 = bVar9;
      uVar60 = 0;
    }
    else {
      iVar67 = uVar60 * -0x28ba;
LAB_1081d9dac:
      uVar60 = *puVar54;
      uVar42 = (ulong)puVar54[7];
      iVar56 = iVar67 + puVar54[1] * 0x73fc + puVar54[7] * -0x1712 + uVar63 * 0x1b37;
      iVar67 = uVar60 * 0x8000 + 0x80000;
      bVar9 = *(byte *)(lVar40 + ((ulong)((uint)(iVar56 + iVar67) >> 0x14) & 0x3ff));
      uVar68 = (ulong)bVar9;
      *pbVar43 = bVar9;
      bVar9 = *(byte *)(lVar40 + ((ulong)((uint)(iVar67 - iVar56) >> 0x14) & 0x3ff));
    }
    uVar45 = (ulong)bVar9;
    puVar48 = (ushort *)(ulong)uVar60;
    pbVar43[1] = bVar9;
    puVar54 = puVar54 + 8;
    lVar55 = 1;
    bVar37 = !bVar38;
    bVar38 = false;
    if (bVar37) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_17e8) {
        ___stack_chk_fail();
        *(undefined1 *)(*plVar49 + (uVar42 & 0xffffffff)) =
             *(undefined1 *)
              (*(long *)(uVar45 + 0x1a8) +
               ((ulong)((uint)**(ushort **)(uVar68 + 0x58) * (uint)*puVar48 + 4 >> 3) & 0x3ff) +
              0x80);
        return;
      }
      return;
    }
  } while( true );
}



/* Entry: 1081d6548; end: 1081d6d0b;  */

void FUN_1081d6548(long param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  bool bVar34;
  bool bVar35;
  byte *pbVar36;
  ulong uVar37;
  ulong uVar38;
  short *psVar39;
  ushort *puVar40;
  long *plVar41;
  long *plVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  uint uVar46;
  long lVar47;
  uint *puVar48;
  uint uVar49;
  short *psVar50;
  int iVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  short sVar57;
  int *piVar58;
  long lVar59;
  int iVar60;
  ulong uVar61;
  short sVar62;
  long lVar63;
  long lVar64;
  ulong uVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  int iVar69;
  ulong unaff_x24;
  long lVar70;
  long lVar71;
  int iVar72;
  ulong unaff_x25;
  long lVar73;
  long lVar74;
  long lVar75;
  ulong unaff_x26;
  long lVar76;
  int iVar77;
  ulong unaff_x27;
  ulong unaff_x28;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  int aiStack_16f8 [8];
  uint auStack_16d8 [16];
  long lStack_1698;
  ulong uStack_1690;
  ulong uStack_1688;
  ulong uStack_1680;
  int *piStack_1678;
  undefined8 ****ppppuStack_1670;
  code *pcStack_1668;
  uint auStack_1658 [32];
  long lStack_15d8;
  ulong uStack_15d0;
  ulong uStack_15c8;
  ulong uStack_15c0;
  ulong uStack_15b8;
  ulong uStack_15b0;
  ulong uStack_15a8;
  ulong uStack_15a0;
  undefined8 uStack_1598;
  undefined8 ****ppppuStack_1590;
  code *pcStack_1588;
  long lStack_1580;
  undefined4 uStack_1574;
  ulong uStack_1570;
  long lStack_1568;
  ulong uStack_1560;
  long lStack_1558;
  int aiStack_1550 [128];
  long lStack_1350;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  ulong uStack_1320;
  ulong uStack_1318;
  undefined8 uStack_1310;
  ulong uStack_1308;
  ulong uStack_1300;
  ulong uStack_12f8;
  undefined8 ****ppppuStack_12f0;
  undefined8 uStack_12e8;
  long lStack_12d8;
  undefined4 uStack_12cc;
  ulong uStack_12c8;
  long lStack_12c0;
  ulong uStack_12b8;
  uint auStack_12b0 [120];
  long lStack_10d0;
  ulong uStack_10c0;
  ulong uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  long lStack_1080;
  ulong uStack_1078;
  undefined8 ****ppppuStack_1070;
  undefined8 uStack_1068;
  long lStack_1058;
  undefined4 uStack_104c;
  long lStack_1048;
  uint auStack_1040 [112];
  long lStack_e80;
  undefined8 uStack_e70;
  ulong uStack_e68;
  ulong uStack_e60;
  ulong uStack_e58;
  ulong uStack_e50;
  undefined8 uStack_e48;
  ulong uStack_e40;
  undefined8 uStack_e38;
  ulong uStack_e30;
  ulong uStack_e28;
  undefined8 ****ppppuStack_e20;
  undefined8 uStack_e18;
  long lStack_e08;
  undefined4 uStack_dfc;
  ulong uStack_df8;
  int aiStack_df0 [104];
  long lStack_c50;
  ulong uStack_c40;
  ulong uStack_c38;
  undefined1 *puStack_c30;
  ulong uStack_c28;
  ulong uStack_c20;
  ulong uStack_c18;
  ulong uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 ****ppppuStack_bf0;
  undefined8 uStack_be8;
  long lStack_bd8;
  uint uStack_bcc;
  ulong uStack_bc8;
  uint auStack_bc0 [96];
  long lStack_a40;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  long *plStack_9f0;
  ulong uStack_9e8;
  undefined8 ****ppppuStack_9e0;
  undefined8 uStack_9d8;
  long lStack_9c8;
  undefined4 uStack_9bc;
  long *plStack_9b8;
  int aiStack_9b0 [88];
  long lStack_850;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  undefined1 *puStack_808;
  ulong uStack_800;
  undefined8 uStack_7f8;
  undefined8 ****ppppuStack_7f0;
  undefined8 uStack_7e8;
  long lStack_7e0;
  undefined4 uStack_7d4;
  uint auStack_7d0 [80];
  long lStack_690;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  undefined8 uStack_640;
  ulong uStack_638;
  undefined8 ****ppppuStack_630;
  undefined8 uStack_628;
  long lStack_620;
  uint uStack_614;
  int aiStack_610 [72];
  long lStack_4f0;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  undefined8 ****ppppuStack_490;
  code *pcStack_488;
  int aiStack_47c [9];
  long lStack_458;
  undefined1 ****ppppuStack_450;
  code *pcStack_448;
  int aiStack_43c [10];
  undefined4 auStack_414 [5];
  undefined4 auStack_400 [5];
  undefined4 auStack_3ec [5];
  long lStack_3d8;
  long lStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  int aiStack_398 [12];
  undefined4 auStack_368 [6];
  undefined4 auStack_350 [6];
  int aiStack_338 [6];
  undefined4 auStack_320 [6];
  long lStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 **ppuStack_2d0;
  code *pcStack_2c8;
  long lStack_2c0;
  undefined4 uStack_2b8;
  int aiStack_2b4 [14];
  undefined4 auStack_27c [7];
  undefined4 auStack_260 [7];
  undefined4 auStack_244 [7];
  undefined4 auStack_228 [7];
  undefined4 auStack_20c [7];
  long lStack_1f0;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  long lStack_180;
  uint uStack_174;
  int aiStack_170 [64];
  long lStack_70;
  
  uStack_174 = param_5;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_180 = *(long *)(param_1 + 0x1a8);
  psVar39 = (short *)(param_3 + 0x40);
  piVar58 = aiStack_170;
  uVar49 = 9;
  psVar50 = *(short **)(param_2 + 0x58);
  do {
    sVar57 = psVar39[-0x18];
    sVar62 = psVar39[-8];
    if (sVar57 == 0 && psVar39[-0x10] == 0) {
      if (sVar62 != 0) {
LAB_1081d65f4:
        iVar60 = 0;
        goto LAB_1081d6600;
      }
      if ((((*psVar39 != 0) || (psVar39[8] != 0)) || (psVar39[0x10] != 0)) || (psVar39[0x18] != 0))
      {
        sVar62 = 0;
        goto LAB_1081d65f4;
      }
      iVar60 = (int)psVar39[-0x20] * (int)*psVar50 * 4;
      *piVar58 = iVar60;
      piVar58[8] = iVar60;
      piVar58[0x10] = iVar60;
      piVar58[0x18] = iVar60;
      piVar58[0x20] = iVar60;
      piVar58[0x28] = iVar60;
      piVar58[0x30] = iVar60;
      lVar70 = 0xe0;
    }
    else {
      iVar60 = (int)psVar39[-0x10];
LAB_1081d6600:
      lVar70 = ((long)iVar60 * (long)(int)psVar50[0x10] +
               (long)(int)psVar50[0x30] * (long)(int)psVar39[0x10]) * 0x1151;
      lVar67 = lVar70 + (long)((int)psVar50[0x30] * (int)psVar39[0x10]) * -0x3b21;
      unaff_x25 = lVar70 + (long)(int)((long)iVar60 * (long)(int)psVar50[0x10]) * 0x187e;
      unaff_x27 = (long)(int)*psVar50 * (long)(int)psVar39[-0x20] +
                  (long)(int)psVar50[0x20] * (long)(int)*psVar39;
      unaff_x26 = (long)(int)*psVar50 * (long)(int)psVar39[-0x20] -
                  (long)(int)psVar50[0x20] * (long)(int)*psVar39;
      unaff_x24 = unaff_x26 * 0x2000 - lVar67;
      unaff_x28 = (long)(int)psVar50[0x38] * (long)(int)psVar39[0x18];
      lVar70 = (long)(int)psVar50[0x28] * (long)(int)psVar39[8];
      sVar8 = psVar50[0x18];
      sVar9 = psVar50[8];
      lVar63 = unaff_x28 + (long)(int)sVar8 * (long)(int)sVar62;
      lVar52 = lVar70 + (long)(int)sVar9 * (long)(int)sVar57;
      lVar59 = (lVar52 + lVar63) * 0x25a1;
      lVar54 = (unaff_x28 + (long)(int)sVar9 * (long)(int)sVar57) * -0x1ccd;
      lVar55 = (lVar70 + (long)(int)sVar8 * (long)(int)sVar62) * -0x5203;
      lVar64 = lVar59 + lVar63 * -0x3ec5;
      lVar59 = lVar59 + lVar52 * -0xc7c;
      lVar52 = lVar54 + (long)(int)unaff_x28 * 0x98e + lVar64;
      lVar63 = lVar55 + (long)(int)lVar70 * 0x41b3 + lVar59;
      lVar64 = lVar55 + (long)((int)sVar8 * (int)sVar62) * 0x6254 + lVar64;
      lVar59 = lVar54 + (long)((int)sVar9 * (int)sVar57) * 0x300b + lVar59;
      lVar70 = unaff_x25 + unaff_x27 * 0x2000 + 0x400;
      *piVar58 = (int)((ulong)(lVar59 + lVar70) >> 0xb);
      piVar58[0x38] = (int)((ulong)(lVar70 - lVar59) >> 0xb);
      lVar70 = lVar67 + unaff_x26 * 0x2000 + 0x400;
      piVar58[8] = (int)((ulong)(lVar64 + lVar70) >> 0xb);
      piVar58[0x30] = (int)((ulong)(lVar70 - lVar64) >> 0xb);
      piVar58[0x10] = (int)(lVar63 + unaff_x24 + 0x400 >> 0xb);
      piVar58[0x28] = (int)((unaff_x24 + 0x400) - lVar63 >> 0xb);
      lVar70 = (unaff_x27 * 0x2000 - unaff_x25) + 0x400;
      piVar58[0x18] = (int)((ulong)(lVar52 + lVar70) >> 0xb);
      iVar60 = (int)((ulong)(lVar70 - lVar52) >> 0xb);
      lVar70 = 0x80;
    }
    *(int *)((long)piVar58 + lVar70) = iVar60;
    piVar58 = piVar58 + 1;
    psVar50 = psVar50 + 1;
    uVar49 = uVar49 - 1;
    psVar39 = psVar39 + 1;
  } while (1 < uVar49);
  lVar52 = 0;
  lVar70 = lStack_180 + 0x80;
  lVar63 = 0x300b;
  lVar64 = 0xffffe333;
  lVar59 = 0xffffadfd;
  uVar44 = (ulong)param_5;
  do {
    plVar42 = param_4 + 1;
    pbVar36 = (byte *)(*param_4 + uVar44);
    iVar60 = *(int *)((long)aiStack_170 + lVar52 + 4);
    iVar51 = *(int *)((long)aiStack_170 + lVar52 + 8);
    iVar69 = *(int *)((long)aiStack_170 + lVar52 + 0xc);
    if (iVar60 == 0 && iVar51 == 0) {
      if (iVar69 != 0) {
LAB_1081d6824:
        iVar51 = 0;
        goto LAB_1081d6828;
      }
      if (((*(int *)((long)aiStack_170 + lVar52 + 0x10) != 0) ||
          (*(int *)((long)aiStack_170 + lVar52 + 0x14) != 0)) ||
         ((*(int *)((long)aiStack_170 + lVar52 + 0x18) != 0 ||
          (*(int *)((long)aiStack_170 + lVar52 + 0x1c) != 0)))) {
        iVar69 = 0;
        goto LAB_1081d6824;
      }
      bVar5 = *(byte *)(lVar70 + ((ulong)(*(int *)((long)aiStack_170 + lVar52) + 0x10U >> 5) & 0x3ff
                                 ));
      pbVar36[4] = bVar5;
      *(uint *)pbVar36 = CONCAT13(bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5)));
      pbVar36[5] = bVar5;
      pbVar36[6] = bVar5;
      lVar54 = 7;
      uVar49 = 0;
      uVar65 = 0;
      uVar61 = 0;
    }
    else {
LAB_1081d6828:
      iVar72 = *(int *)((long)aiStack_170 + lVar52 + 0x18);
      iVar2 = *(int *)((long)aiStack_170 + lVar52 + 0x1c);
      iVar18 = (iVar51 + iVar72) * 0x1151;
      uVar49 = iVar18 + iVar72 * -0x3b21;
      iVar18 = iVar18 + iVar51 * 0x187e;
      iVar72 = *(int *)((long)aiStack_170 + lVar52);
      iVar51 = *(int *)((long)aiStack_170 + lVar52 + 0x10);
      uVar3 = *(uint *)((long)aiStack_170 + lVar52 + 0x14);
      unaff_x27 = (ulong)uVar3;
      uVar46 = iVar51 + iVar72;
      unaff_x28 = (ulong)uVar46;
      uVar30 = iVar72 - iVar51;
      unaff_x25 = (ulong)uVar30;
      uVar43 = uVar30 * 0x2000 - uVar49;
      unaff_x26 = (ulong)uVar43;
      iVar72 = (iVar69 + iVar2 + uVar3 + iVar60) * 0x25a1;
      iVar19 = (iVar2 + iVar60) * -0x1ccd;
      iVar51 = (iVar69 + uVar3) * -0x5203;
      iVar77 = iVar72 + (iVar69 + iVar2) * -0x3ec5;
      iVar72 = iVar72 + (uVar3 + iVar60) * -0xc7c;
      uVar3 = iVar51 + uVar3 * 0x41b3;
      unaff_x24 = (ulong)uVar3;
      iVar51 = iVar51 + iVar69 * 0x6254 + iVar77;
      iVar69 = iVar19 + iVar60 * 0x300b + iVar72;
      iVar60 = iVar18 + uVar46 * 0x2000 + 0x20000;
      bVar5 = *(byte *)(lVar70 + ((ulong)((uint)(iVar69 + iVar60) >> 0x12) & 0x3ff));
      uVar65 = (ulong)bVar5;
      *pbVar36 = bVar5;
      pbVar36[7] = *(byte *)(lVar70 + ((ulong)((uint)(iVar60 - iVar69) >> 0x12) & 0x3ff));
      iVar60 = uVar49 + uVar30 * 0x2000 + 0x20000;
      bVar5 = *(byte *)(lVar70 + ((ulong)((uint)(iVar51 + iVar60) >> 0x12) & 0x3ff));
      uVar61 = (ulong)bVar5;
      iVar72 = uVar3 + iVar72;
      pbVar36[1] = bVar5;
      pbVar36[6] = *(byte *)(lVar70 + ((ulong)((uint)(iVar60 - iVar51) >> 0x12) & 0x3ff));
      iVar60 = uVar43 + 0x20000;
      iVar77 = iVar19 + iVar2 * 0x98e + iVar77;
      pbVar36[2] = *(byte *)(lVar70 + ((ulong)((uint)(iVar72 + iVar60) >> 0x12) & 0x3ff));
      pbVar36[5] = *(byte *)(lVar70 + ((ulong)((uint)(iVar60 - iVar72) >> 0x12) & 0x3ff));
      iVar60 = (uVar46 * 0x2000 - iVar18) + 0x20000;
      pbVar36[3] = *(byte *)(lVar70 + ((ulong)((uint)(iVar77 + iVar60) >> 0x12) & 0x3ff));
      bVar5 = *(byte *)(lVar70 + ((ulong)((uint)(iVar60 - iVar77) >> 0x12) & 0x3ff));
      lVar54 = 4;
    }
    pbVar36[lVar54] = bVar5;
    lVar52 = lVar52 + 0x20;
    param_4 = plVar42;
  } while (lVar52 != 0x100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_1e0 = unaff_x28;
  uStack_1d8 = unaff_x27;
  uStack_1d0 = unaff_x26;
  uStack_1c8 = unaff_x25;
  uStack_1c0 = unaff_x24;
  uStack_1b8 = (ulong)uVar49;
  uStack_1b0 = uVar65;
  uStack_1a8 = uVar61;
  lStack_1a0 = lVar54;
  uStack_198 = (ulong)bVar5;
  puStack_190 = &stack0xfffffffffffffff0;
  uStack_188 = 0x1081d69c8;
  uStack_2b8 = (int)uVar44;
  lVar70 = 0;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2c0 = *(long *)(lVar63 + 0x1a8);
  lVar52 = *(long *)(lVar64 + 0x58);
  do {
    psVar39 = (short *)(lVar52 + lVar70 * 2);
    psVar50 = (short *)(lVar59 + lVar70 * 2);
    uVar65 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    lVar55 = (long)(int)psVar39[0x10] * (long)(int)psVar50[0x10];
    lVar78 = (long)(int)psVar39[0x20] * (long)(int)psVar50[0x20];
    sVar57 = psVar50[0x30];
    sVar62 = psVar39[0x30];
    lVar64 = (lVar78 - (long)(int)sVar62 * (long)(int)sVar57) * 0x1c37;
    lVar67 = (lVar55 - (long)(int)psVar39[0x20] * (long)(int)psVar50[0x20]) * 0xa12;
    lVar63 = uVar65 + (long)(int)lVar78 * -0x3aeb + lVar67 + lVar64;
    lVar47 = lVar55 + (long)(int)sVar62 * (long)(int)sVar57;
    lVar54 = uVar65 + lVar47 * 0x28c6;
    lVar64 = lVar64 + (long)((int)sVar62 * (int)sVar57) * -0x27d + lVar54;
    lVar54 = lVar67 + (long)(int)lVar55 * -0x4f0f + lVar54;
    lVar71 = (long)(int)psVar39[8] * (long)(int)psVar50[8];
    sVar57 = psVar50[0x18];
    sVar62 = psVar39[0x18];
    sVar8 = psVar50[0x28];
    sVar9 = psVar39[0x28];
    lVar67 = (lVar71 + (long)(int)sVar62 * (long)(int)sVar57) * 0x1def;
    lVar73 = lVar71 - (long)(int)sVar62 * (long)(int)sVar57;
    lVar74 = ((long)(int)sVar62 * (long)(int)sVar57 + (long)(int)sVar9 * (long)(int)sVar8) * -0x2c1f
    ;
    lVar55 = lVar67 + lVar73 * 0x573 + lVar74;
    lVar71 = (lVar71 + (long)(int)sVar9 * (long)(int)sVar8) * 0x13a3;
    lVar67 = lVar71 + lVar67 + lVar73 * -0x573;
    lVar74 = lVar71 + (long)((int)sVar9 * (int)sVar8) * 0x3bde + lVar74;
    aiStack_2b4[lVar70] = (int)((ulong)(lVar67 + lVar64) >> 0xb);
    auStack_20c[lVar70] = (int)((ulong)(lVar64 - lVar67) >> 0xb);
    aiStack_2b4[lVar70 + 7] = (int)((ulong)(lVar55 + lVar63) >> 0xb);
    auStack_228[lVar70] = (int)((ulong)(lVar63 - lVar55) >> 0xb);
    auStack_27c[lVar70] = (int)((ulong)(lVar74 + lVar54) >> 0xb);
    auStack_244[lVar70] = (int)((ulong)(lVar54 - lVar74) >> 0xb);
    auStack_260[lVar70] = (int)(uVar65 + (lVar78 - lVar47) * 0x2d41 >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 7);
  lVar52 = 0;
  lVar70 = lStack_2c0 + 0x80;
  lVar63 = 0x1def;
  lVar64 = 0x573;
  lVar59 = 0xffffd3e1;
  uVar44 = uVar44 & 0xffffffff;
  do {
    plVar41 = plVar42 + 1;
    iVar77 = *(int *)((long)aiStack_2b4 + lVar52 + 4);
    iVar60 = *(int *)((long)aiStack_2b4 + lVar52) * 0x2000 + 0x20000;
    iVar69 = *(int *)((long)aiStack_2b4 + lVar52 + 0x14);
    iVar2 = *(int *)((long)aiStack_2b4 + lVar52 + 0x18);
    uVar43 = *(uint *)((long)aiStack_2b4 + lVar52 + 0x10);
    iVar19 = (uVar43 - iVar2) * 0x1c37;
    iVar72 = *(int *)((long)aiStack_2b4 + lVar52 + 8);
    iVar18 = *(int *)((long)aiStack_2b4 + lVar52 + 0xc);
    iVar20 = (iVar72 - uVar43) * 0xa12;
    iVar21 = (iVar18 + iVar77) * 0x1def;
    uVar14 = iVar20 + iVar72 * -0x4f0f;
    uVar15 = iVar60 + (iVar2 + iVar72) * 0x28c6;
    iVar51 = iVar19 + iVar2 * -0x27d + uVar15;
    iVar22 = (iVar69 + iVar77) * 0x13a3;
    uVar49 = iVar21 + (iVar77 - iVar18) * -0x573 + iVar22;
    uVar16 = iVar22 + iVar69 * 0x3bde;
    uVar46 = iVar60 + uVar43 * -0x3aeb + iVar20 + iVar19;
    puVar1 = (undefined1 *)(*plVar42 + uVar44);
    *puVar1 = *(undefined1 *)(lVar70 + ((ulong)(uVar49 + iVar51 >> 0x12) & 0x3ff));
    iVar19 = (iVar69 + iVar18) * -0x2c1f;
    iVar69 = iVar21 + (iVar77 - iVar18) * 0x573 + iVar19;
    uVar3 = uVar14 + uVar15;
    puVar1[6] = *(undefined1 *)(lVar70 + ((ulong)(iVar51 - uVar49 >> 0x12) & 0x3ff));
    bVar5 = *(byte *)(lVar70 + ((ulong)(iVar69 + uVar46 >> 0x12) & 0x3ff));
    uVar30 = uVar16 + iVar19;
    puVar1[1] = bVar5;
    puVar1[5] = *(undefined1 *)(lVar70 + ((ulong)(uVar46 - iVar69 >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar70 + ((ulong)(uVar30 + uVar3 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar70 + ((ulong)(uVar3 - uVar30 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)
                 (lVar70 + ((ulong)(iVar60 + (uVar43 - (iVar2 + iVar72)) * 0x2d41 >> 0x12) & 0x3ff))
    ;
    lVar52 = lVar52 + 0x1c;
    plVar42 = plVar41;
  } while (lVar52 != 0xc4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
  ___stack_chk_fail();
  uStack_300 = (ulong)uVar3;
  uStack_2f8 = (ulong)uVar43;
  uStack_2f0 = (ulong)bVar5;
  uStack_2e8 = (ulong)uVar16;
  uStack_2e0 = (ulong)uVar30;
  puStack_2d8 = puVar1;
  ppuStack_2d0 = &puStack_190;
  pcStack_2c8 = FUN_1081d6d0c;
  lVar70 = 0;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar52 = *(long *)(lVar63 + 0x1a8);
  lVar63 = *(long *)(lVar64 + 0x58);
  do {
    psVar39 = (short *)(lVar63 + lVar70 * 2);
    psVar50 = (short *)(lVar59 + lVar70 * 2);
    uVar65 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    sVar57 = psVar50[0x20];
    sVar62 = psVar39[0x20];
    lVar55 = uVar65 + (long)((int)sVar62 * (int)sVar57) * 0x16a1;
    lVar74 = lVar55 + (long)((int)psVar50[0x10] * (int)psVar39[0x10]) * 0x2731;
    lVar55 = lVar55 + (long)((int)psVar50[0x10] * (int)psVar39[0x10]) * -0x2731;
    lVar67 = (long)(int)psVar39[8] * (long)(int)psVar50[8];
    sVar8 = psVar50[0x18];
    sVar9 = psVar39[0x18];
    lStack_3d0 = (long)(int)sVar9 * (long)(int)sVar8;
    lStack_4b8 = (long)(int)psVar39[0x28] * (long)(int)psVar50[0x28];
    lVar54 = (lVar67 + (long)(int)psVar39[0x28] * (long)(int)psVar50[0x28]) * 0xbb6;
    lVar64 = lVar54 + (lVar67 + (long)(int)sVar9 * (long)(int)sVar8) * 0x2000;
    lVar54 = lVar54 + (lStack_4b8 - (long)(int)sVar9 * (long)(int)sVar8) * 0x2000;
    iVar60 = (int)lVar67 - ((int)lStack_3d0 + (int)lStack_4b8);
    aiStack_398[lVar70] = (int)((ulong)(lVar64 + lVar74) >> 0xb);
    auStack_320[lVar70] = (int)((ulong)(lVar74 - lVar64) >> 0xb);
    iVar51 = (int)(uVar65 + (long)((int)sVar62 * (int)sVar57) * -0x2d42 >> 0xb);
    aiStack_398[lVar70 + 6] = iVar51 + iVar60 * 4;
    aiStack_338[lVar70] = iVar51 + iVar60 * -4;
    auStack_368[lVar70] = (int)((ulong)(lVar54 + lVar55) >> 0xb);
    auStack_350[lVar70] = (int)((ulong)(lVar55 - lVar54) >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 6);
  lVar70 = 0;
  lVar52 = lVar52 + 0x80;
  do {
    plVar42 = plVar41 + 1;
    puVar1 = (undefined1 *)(*plVar41 + (uVar44 & 0xffffffff));
    iVar77 = *(int *)((long)aiStack_398 + lVar70 + 4);
    iVar69 = *(int *)((long)aiStack_398 + lVar70 + 0x10);
    iVar2 = *(int *)((long)aiStack_398 + lVar70 + 0x14);
    iVar60 = *(int *)((long)aiStack_398 + lVar70) * 0x2000 + 0x20000;
    iVar19 = iVar60 + iVar69 * 0x16a1;
    iVar72 = *(int *)((long)aiStack_398 + lVar70 + 8);
    iVar18 = *(int *)((long)aiStack_398 + lVar70 + 0xc);
    iVar51 = iVar19 + iVar72 * 0x2731;
    uVar16 = (iVar2 + iVar77) * 0xbb6;
    uVar30 = uVar16 + (iVar18 + iVar77) * 0x2000;
    iVar77 = iVar77 - (iVar18 + iVar2);
    iVar60 = iVar60 + iVar69 * -0x2d42;
    *puVar1 = *(undefined1 *)(lVar52 + ((ulong)(uVar30 + iVar51 >> 0x12) & 0x3ff));
    uVar43 = uVar16 + (iVar2 - iVar18) * 0x2000;
    uVar37 = (ulong)uVar43;
    puVar1[5] = *(undefined1 *)(lVar52 + ((ulong)(iVar51 - uVar30 >> 0x12) & 0x3ff));
    bVar5 = *(byte *)(lVar52 + ((ulong)((uint)(iVar60 + iVar77 * 0x2000) >> 0x12) & 0x3ff));
    uVar61 = (ulong)bVar5;
    uVar31 = iVar19 + iVar72 * -0x2731;
    uVar45 = (ulong)uVar31;
    puVar1[1] = bVar5;
    puVar1[4] = *(undefined1 *)
                 (lVar52 + ((ulong)((uint)(iVar60 + iVar77 * -0x2000) >> 0x12) & 0x3ff));
    uVar65 = (ulong)(uVar31 - uVar43);
    puVar1[2] = *(undefined1 *)(lVar52 + ((ulong)(uVar43 + uVar31 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)(lVar52 + ((ulong)(uVar31 - uVar43 >> 0x12) & 0x3ff));
    lVar70 = lVar70 + 0x18;
    plVar41 = plVar42;
  } while (lVar70 != 0x90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  uStack_3c8 = (ulong)(uint)(iVar2 - iVar18);
  uStack_3c0 = (ulong)uVar30;
  uStack_3b8 = (ulong)uVar16;
  pppuStack_3b0 = &ppuStack_2d0;
  pcStack_3a8 = FUN_1081d6f44;
  lVar70 = 0;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar52 = *(long *)(uVar65 + 0x1a8);
  lVar63 = *(long *)(uVar61 + 0x58);
  do {
    psVar39 = (short *)(lVar63 + lVar70 * 2);
    psVar50 = (short *)(uVar37 + lVar70 * 2);
    uVar44 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    lVar59 = (long)(int)psVar39[0x10] * (long)(int)psVar50[0x10] +
             (long)(int)psVar39[0x20] * (long)(int)psVar50[0x20];
    lVar55 = (long)(int)psVar39[0x10] * (long)(int)psVar50[0x10] -
             (long)(int)psVar39[0x20] * (long)(int)psVar50[0x20];
    lVar67 = uVar44 + lVar55 * 0xb50;
    lVar64 = lVar67 + lVar59 * 0x194c;
    lVar67 = lVar67 + lVar59 * -0x194c;
    lStack_4b0 = (long)(int)psVar39[0x18] * (long)(int)psVar50[0x18];
    lVar59 = ((long)(int)psVar39[8] * (long)(int)psVar50[8] +
             (long)(int)psVar39[0x18] * (long)(int)psVar50[0x18]) * 0x1a9a;
    lVar54 = lVar59 + (long)(int)((long)(int)psVar39[8] * (long)(int)psVar50[8]) * 0x1071;
    lVar59 = lVar59 + (long)(int)lStack_4b0 * -0x45a4;
    aiStack_43c[lVar70] = (int)((ulong)(lVar54 + lVar64) >> 0xb);
    auStack_3ec[lVar70] = (int)((ulong)(lVar64 - lVar54) >> 0xb);
    aiStack_43c[lVar70 + 5] = (int)((ulong)(lVar59 + lVar67) >> 0xb);
    auStack_400[lVar70] = (int)((ulong)(lVar67 - lVar59) >> 0xb);
    auStack_414[lVar70] = (int)(uVar44 + lVar55 * 0x7ffffffd2c0 >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 5);
  lVar70 = 0;
  lVar52 = lVar52 + 0x80;
  do {
    plVar41 = plVar42 + 1;
    iVar72 = *(int *)((long)aiStack_43c + lVar70 + 4);
    pbVar36 = (byte *)(*plVar42 + (uVar45 & 0xffffffff));
    iVar2 = *(int *)((long)aiStack_43c + lVar70 + 8);
    iVar69 = *(int *)((long)aiStack_43c + lVar70 + 0xc);
    iVar77 = *(int *)((long)aiStack_43c + lVar70 + 0x10);
    iVar51 = iVar77 + iVar2;
    iVar60 = *(int *)((long)aiStack_43c + lVar70) * 0x2000 + 0x20000;
    iVar2 = iVar2 - iVar77;
    iVar77 = iVar60 + iVar2 * 0xb50;
    uVar16 = (iVar69 + iVar72) * 0x1a9a;
    uVar30 = iVar77 + iVar51 * 0x194c;
    iVar72 = uVar16 + iVar72 * 0x1071;
    bVar5 = *(byte *)(lVar52 + ((ulong)(iVar72 + uVar30 >> 0x12) & 0x3ff));
    iVar69 = uVar16 + iVar69 * -0x45a4;
    *pbVar36 = bVar5;
    iVar77 = iVar77 + iVar51 * -0x194c;
    pbVar36[4] = *(byte *)(lVar52 + ((ulong)(uVar30 - iVar72 >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar52 + ((ulong)((uint)(iVar69 + iVar77) >> 0x12) & 0x3ff));
    uVar61 = (ulong)bVar6;
    uVar43 = iVar60 + iVar2 * 0xfffd2c0;
    uVar65 = (ulong)uVar43;
    pbVar36[1] = bVar6;
    pbVar36[3] = *(byte *)(lVar52 + ((ulong)((uint)(iVar77 - iVar69) >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar52 + ((ulong)(uVar43 >> 0x12) & 0x3ff));
    uVar44 = (ulong)bVar6;
    pbVar36[2] = bVar6;
    lVar70 = lVar70 + 0x14;
    plVar42 = plVar41;
  } while (lVar70 != 100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return;
  }
  ___stack_chk_fail();
  uVar43 = (uint)uVar61;
  ppppuStack_450 = &pppuStack_3b0;
  pcStack_448 = FUN_1081d7150;
  lVar70 = 0;
  lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar52 = *(long *)(uVar44 + 0x1a8);
  lVar63 = *(long *)(pbVar36 + 0x58);
  do {
    psVar39 = (short *)(lVar63 + lVar70 * 2);
    psVar50 = (short *)(uVar65 + lVar70 * 2);
    uVar44 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    sVar57 = psVar50[0x10];
    sVar62 = psVar39[0x10];
    lVar64 = uVar44 + (long)(int)((long)(int)sVar62 * (long)(int)sVar57) * 0x16a1;
    sVar8 = psVar50[8];
    sVar9 = psVar39[8];
    aiStack_47c[lVar70] = (int)((ulong)(lVar64 + (long)((int)sVar8 * (int)sVar9) * 0x2731) >> 0xb);
    aiStack_47c[lVar70 + 6] =
         (int)((ulong)(lVar64 + (long)((int)sVar8 * (int)sVar9) * -0x2731) >> 0xb);
    aiStack_47c[lVar70 + 3] =
         (int)(uVar44 + (long)(int)sVar62 * (long)(int)sVar57 * 0x7ffffffd2be >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 3);
  lVar70 = 0;
  lVar52 = lVar52 + 0x80;
  do {
    plVar42 = plVar41 + 1;
    pbVar36 = (byte *)(*plVar41 + (uVar61 & 0xffffffff));
    iVar51 = *(int *)((long)aiStack_47c + lVar70 + 4);
    iVar60 = *(int *)((long)aiStack_47c + lVar70) * 0x2000 + 0x20000;
    iVar69 = *(int *)((long)aiStack_47c + lVar70 + 8);
    uVar31 = iVar60 + iVar69 * 0x16a1;
    uVar37 = (ulong)uVar31;
    bVar6 = *(byte *)(lVar52 + ((ulong)(uVar31 + iVar51 * 0x2731 >> 0x12) & 0x3ff));
    uVar44 = (ulong)bVar6;
    *pbVar36 = bVar6;
    pbVar36[2] = *(byte *)(lVar52 + ((ulong)(uVar31 + iVar51 * -0x2731 >> 0x12) & 0x3ff));
    pbVar36[1] = *(byte *)(lVar52 + ((ulong)((uint)(iVar60 + iVar69 * 0xfffd2be) >> 0x12) & 0x3ff));
    lVar70 = lVar70 + 0xc;
    plVar41 = plVar42;
  } while (lVar70 != 0x24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
    return;
  }
  ___stack_chk_fail();
  uStack_4e0 = (ulong)uVar46;
  uStack_4d8 = (ulong)uVar49;
  pcStack_488 = FUN_1081d72a0;
  lVar70 = 0;
  lStack_4f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_620 = *(long *)(uVar44 + 0x1a8);
  lVar52 = *(long *)(uVar37 + 0x58);
  uStack_4d0 = (ulong)uVar14;
  uStack_4c8 = (ulong)uVar15;
  uStack_4c0 = (ulong)uVar3;
  uStack_4a8 = (ulong)bVar5;
  uStack_4a0 = (ulong)uVar30;
  uStack_498 = (ulong)uVar16;
  ppppuStack_490 = &ppppuStack_450;
  do {
    psVar39 = (short *)(lVar52 + lVar70 * 2);
    psVar50 = (short *)(uVar65 + lVar70 * 2);
    lVar74 = (long)(int)psVar39[0x10] * (long)(int)psVar50[0x10];
    uVar44 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    sVar57 = psVar50[0x20];
    sVar62 = psVar39[0x20];
    iVar60 = (int)sVar62 * (int)sVar57;
    lVar54 = (long)(int)psVar39[8] * (long)(int)psVar50[8];
    sVar8 = psVar50[0x28];
    sVar9 = psVar39[0x28];
    sVar10 = psVar50[0x38];
    sVar11 = psVar39[0x38];
    lVar67 = (long)(int)sVar9 * (long)(int)sVar8 - (long)(int)sVar11 * (long)(int)sVar10;
    lVar55 = (lVar54 - (long)(int)sVar9 * (long)(int)sVar8) - (long)(int)sVar11 * (long)(int)sVar10;
    lVar78 = uVar44 + (long)((int)psVar39[0x30] * (int)psVar50[0x30]) * 0x16a1;
    lVar47 = uVar44 + (long)((int)psVar39[0x30] * (int)psVar50[0x30]) * -0x2d42;
    lVar73 = lVar74 - (long)(int)sVar62 * (long)(int)sVar57;
    lVar71 = lVar74 + (long)(int)sVar62 * (long)(int)sVar57;
    iVar51 = (int)psVar50[0x18] * (int)psVar39[0x18];
    lVar59 = (lVar54 + (long)(int)sVar9 * (long)(int)sVar8) * 0x1d17;
    lVar63 = (long)iVar51 * -0x2731 + lVar67 * -0x2c91 + lVar59;
    lVar64 = lVar78 + lVar71 * 0x2a87 + (long)iVar60 * -0x7dc;
    lVar54 = (lVar54 + (long)(int)sVar11 * (long)(int)sVar10) * 0xf7a;
    lVar59 = lVar54 + lVar59 + (long)iVar51 * 0x2731;
    lVar54 = lVar67 * 0x2c91 + (long)iVar51 * -0x2731 + lVar54;
    aiStack_610[lVar70] = (int)((ulong)(lVar59 + lVar64) >> 0xb);
    lVar67 = lVar47 + lVar73 * 0x16a1;
    aiStack_610[lVar70 + 0x40] = (int)((ulong)(lVar64 - lVar59) >> 0xb);
    aiStack_610[lVar70 + 8] = (int)((ulong)(lVar55 * 0x2731 + lVar67) >> 0xb);
    lVar64 = lVar78 + lVar71 * -0x2a87 + (long)(int)lVar74 * 0x22ab;
    aiStack_610[lVar70 + 0x38] = (int)((ulong)(lVar67 + lVar55 * -0x2731) >> 0xb);
    aiStack_610[lVar70 + 0x10] = (int)((ulong)(lVar63 + lVar64) >> 0xb);
    aiStack_610[lVar70 + 0x30] = (int)((ulong)(lVar64 - lVar63) >> 0xb);
    lVar63 = lVar78 + (long)(int)lVar74 * -0x22ab + (long)iVar60 * 0x7dc;
    aiStack_610[lVar70 + 0x18] = (int)((ulong)(lVar54 + lVar63) >> 0xb);
    aiStack_610[lVar70 + 0x28] = (int)((ulong)(lVar63 - lVar54) >> 0xb);
    aiStack_610[lVar70 + 0x20] = (int)((ulong)(lVar47 + lVar73 * 0x7ffffffd2be) >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 8);
  lVar52 = 0;
  lVar70 = lStack_620 + 0x80;
  lVar63 = 0x1d17;
  lVar64 = 0xf7a;
  lVar59 = 0x2c91;
  uVar44 = (ulong)uVar43;
  do {
    puVar1 = (undefined1 *)(*(long *)((long)plVar42 + lVar52) + uVar44);
    iVar2 = aiStack_610[lVar52 + 1];
    iVar60 = aiStack_610[lVar52] * 0x2000 + 0x20000;
    iVar72 = aiStack_610[lVar52 + 2];
    iVar18 = aiStack_610[lVar52 + 7];
    uVar3 = iVar60 + aiStack_610[lVar52 + 6] * 0x16a1;
    iVar77 = aiStack_610[lVar52 + 4];
    iVar19 = aiStack_610[lVar52 + 5];
    uVar30 = iVar60 + aiStack_610[lVar52 + 6] * -0x2d42;
    iVar21 = aiStack_610[lVar52 + 3] * -0x2731;
    iVar20 = uVar30 + (iVar72 - iVar77) * 0x16a1;
    iVar22 = (iVar19 + iVar2) * 0x1d17;
    iVar69 = (iVar18 + iVar2) * 0xf7a;
    iVar60 = (iVar77 + iVar72) * 0x2a87 + iVar77 * -0x7dc + uVar3;
    uVar14 = iVar21 + (iVar19 - iVar18) * -0x2c91;
    iVar51 = iVar22 + aiStack_610[lVar52 + 3] * 0x2731 + iVar69;
    uVar15 = uVar3 + (iVar77 + iVar72) * -0x2a87;
    iVar2 = iVar2 - (iVar19 + iVar18);
    *puVar1 = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar51 + iVar60) >> 0x12) & 0x3ff));
    uVar49 = uVar14 + iVar22;
    puVar1[8] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar60 - iVar51) >> 0x12) & 0x3ff));
    bVar5 = *(byte *)(lVar70 + ((ulong)((uint)(iVar2 * 0x2731 + iVar20) >> 0x12) & 0x3ff));
    uVar46 = uVar15 + iVar72 * 0x22ab;
    puVar1[1] = bVar5;
    uVar16 = uVar3 + iVar72 * -0x22ab;
    puVar1[7] = *(undefined1 *)
                 (lVar70 + ((ulong)((uint)(iVar20 + iVar2 * -0x2731) >> 0x12) & 0x3ff));
    iVar69 = (iVar19 - iVar18) * 0x2c91 + iVar21 + iVar69;
    puVar1[2] = *(undefined1 *)(lVar70 + ((ulong)(uVar49 + uVar46 >> 0x12) & 0x3ff));
    iVar60 = uVar16 + iVar77 * 0x7dc;
    puVar1[6] = *(undefined1 *)(lVar70 + ((ulong)(uVar46 - uVar49 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar69 + iVar60) >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar60 - iVar69) >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)
                 (lVar70 + ((ulong)(uVar30 + (iVar72 - iVar77) * 0xfffd2be >> 0x12) & 0x3ff));
    lVar52 = lVar52 + 8;
  } while (lVar52 != 0x48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f0) {
    return;
  }
  uStack_614 = uVar43;
  ___stack_chk_fail();
  uStack_680 = (ulong)uVar15;
  uStack_678 = (ulong)uVar14;
  uStack_640 = 0xfffd2be;
  uStack_628 = 0x1081d7634;
  uStack_7d4 = (int)uVar44;
  lVar70 = 0;
  lStack_690 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_7e0 = *(long *)(lVar63 + 0x1a8);
  lVar52 = *(long *)(lVar64 + 0x58);
  uStack_670 = (ulong)uVar46;
  uStack_668 = (ulong)uVar3;
  uStack_660 = (ulong)uVar49;
  uStack_658 = (ulong)(uint)(iVar72 * 0x22ab);
  uStack_650 = (ulong)bVar5;
  uStack_648 = (ulong)uVar16;
  uStack_638 = (ulong)uVar30;
  ppppuStack_630 = &ppppuStack_490;
  do {
    psVar39 = (short *)(lVar52 + lVar70 * 2);
    psVar50 = (short *)(lVar59 + lVar70 * 2);
    uVar65 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    iVar69 = (int)psVar39[0x20] * (int)psVar50[0x20];
    lVar71 = uVar65 + (long)iVar69 * 0x249d;
    lVar73 = uVar65 + (long)iVar69 * -0xdfc;
    lVar54 = ((long)(int)psVar39[0x10] * (long)(int)psVar50[0x10] +
             (long)(int)psVar39[0x30] * (long)(int)psVar50[0x30]) * 0x1a9a;
    lVar64 = lVar54 + (long)(int)((long)(int)psVar39[0x10] * (long)(int)psVar50[0x10]) * 0x1071;
    lVar54 = lVar54 + (long)((int)psVar39[0x30] * (int)psVar50[0x30]) * -0x45a4;
    lVar63 = lVar64 + lVar71;
    lVar71 = lVar71 - lVar64;
    lVar64 = lVar54 + lVar73;
    lVar73 = lVar73 - lVar54;
    iVar51 = (int)psVar39[8] * (int)psVar50[8];
    lVar47 = (long)(int)psVar39[0x28] * (long)(int)psVar50[0x28];
    lVar78 = (long)(int)psVar39[0x18] * (long)(int)psVar50[0x18] +
             (long)(int)psVar39[0x38] * (long)(int)psVar50[0x38];
    lVar74 = (long)(int)psVar39[0x18] * (long)(int)psVar50[0x18] -
             (long)(int)psVar39[0x38] * (long)(int)psVar50[0x38];
    lVar55 = lVar74 * 0x9e3 + lVar47 * 0x2000;
    lVar54 = lVar78 * 0x1e6f + (long)iVar51 * 0x2cb3 + lVar55;
    lVar55 = (long)iVar51 * 0x714 + lVar78 * -0x1e6f + lVar55;
    lVar67 = lVar74 * -0x19e3 + lVar47 * 0x2000;
    iVar60 = (iVar51 - (int)lVar47) - (int)lVar74;
    lVar74 = ((long)iVar51 * 0x2853 + lVar78 * -0x12cf) - lVar67;
    lVar67 = (long)iVar51 * 0x148c + lVar78 * -0x12cf + lVar67;
    auStack_7d0[lVar70] = (uint)((ulong)(lVar54 + lVar63) >> 0xb);
    auStack_7d0[lVar70 + 0x48] = (uint)((ulong)(lVar63 - lVar54) >> 0xb);
    auStack_7d0[lVar70 + 8] = (uint)((ulong)(lVar74 + lVar64) >> 0xb);
    auStack_7d0[lVar70 + 0x40] = (uint)((ulong)(lVar64 - lVar74) >> 0xb);
    iVar51 = (int)(uVar65 + (long)iVar69 * -0x2d42 >> 0xb);
    auStack_7d0[lVar70 + 0x10] = iVar51 + iVar60 * 4;
    auStack_7d0[lVar70 + 0x38] = iVar51 + iVar60 * -4;
    auStack_7d0[lVar70 + 0x18] = (uint)((ulong)(lVar67 + lVar73) >> 0xb);
    auStack_7d0[lVar70 + 0x30] = (uint)((ulong)(lVar73 - lVar67) >> 0xb);
    auStack_7d0[lVar70 + 0x20] = (uint)((ulong)(lVar55 + lVar71) >> 0xb);
    auStack_7d0[lVar70 + 0x28] = (uint)((ulong)(lVar71 - lVar55) >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 8);
  lVar52 = 0;
  lVar70 = lStack_7e0 + 0x80;
  lVar63 = 0x1e6f;
  lVar64 = 0x2cb3;
  lVar59 = 0x714;
  uVar44 = uVar44 & 0xffffffff;
  do {
    uVar3 = auStack_7d0[lVar52 + 1];
    uVar49 = auStack_7d0[lVar52 + 4];
    uVar30 = auStack_7d0[lVar52 + 5];
    iVar60 = auStack_7d0[lVar52] * 0x2000 + 0x20000;
    iVar51 = iVar60 + uVar49 * 0x249d;
    iVar69 = iVar60 + uVar49 * -0xdfc;
    uVar43 = iVar60 + uVar49 * -0x2d42;
    iVar77 = (auStack_7d0[lVar52 + 6] + auStack_7d0[lVar52 + 2]) * 0x1a9a;
    iVar72 = iVar77 + auStack_7d0[lVar52 + 2] * 0x1071;
    iVar77 = iVar77 + auStack_7d0[lVar52 + 6] * -0x45a4;
    iVar60 = iVar72 + iVar51;
    uVar15 = iVar51 - iVar72;
    uVar49 = iVar77 + iVar69;
    iVar51 = auStack_7d0[lVar52 + 7] + auStack_7d0[lVar52 + 3];
    iVar2 = auStack_7d0[lVar52 + 3] - auStack_7d0[lVar52 + 7];
    uVar16 = iVar69 - iVar77;
    iVar69 = iVar2 * 0x9e3 + uVar30 * 0x2000;
    iVar72 = iVar51 * 0x1e6f + uVar3 * 0x2cb3 + iVar69;
    puVar1 = (undefined1 *)(*(long *)((long)plVar42 + lVar52) + uVar44);
    uVar46 = iVar51 * -0x1e6f + uVar3 * 0x714 + iVar69;
    iVar69 = iVar2 * -0x19e3 + uVar30 * 0x2000;
    *puVar1 = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar72 + iVar60) >> 0x12) & 0x3ff));
    uVar14 = uVar3 * 0x2853 - (iVar51 * 0x12cf + iVar69);
    puVar1[9] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar60 - iVar72) >> 0x12) & 0x3ff));
    iVar2 = (uVar3 - uVar30) - iVar2;
    puVar1[1] = *(undefined1 *)(lVar70 + ((ulong)(uVar14 + uVar49 >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar70 + ((ulong)(uVar49 - uVar14 >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar70 + ((ulong)(uVar43 + iVar2 * 0x2000 >> 0x12) & 0x3ff));
    iVar69 = iVar51 * -0x12cf + uVar3 * 0x148c + iVar69;
    puVar1[7] = *(undefined1 *)(lVar70 + ((ulong)(uVar43 + iVar2 * -0x2000 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)(lVar70 + ((ulong)(iVar69 + uVar16 >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar70 + ((ulong)(uVar16 - iVar69 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar70 + ((ulong)(uVar46 + uVar15 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar70 + ((ulong)(uVar15 - uVar46 >> 0x12) & 0x3ff));
    lVar52 = lVar52 + 8;
  } while (lVar52 != 0x50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_690) {
    return;
  }
  ___stack_chk_fail();
  uStack_840 = (ulong)uVar49;
  uStack_838 = (ulong)uVar14;
  uStack_830 = (ulong)(uVar3 - uVar30);
  uStack_828 = (ulong)uVar16;
  uStack_820 = (ulong)uVar46;
  uStack_818 = (ulong)uVar43;
  uStack_810 = (ulong)uVar3;
  puStack_808 = puVar1;
  uStack_800 = (ulong)uVar15;
  uStack_7f8 = 0x148c;
  ppppuStack_7f0 = &ppppuStack_630;
  uStack_7e8 = 0x1081d7a08;
  uStack_9bc = (int)uVar44;
  plStack_9b8 = plVar42;
  lVar70 = 0;
  lStack_850 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_9c8 = *(long *)(lVar63 + 0x1a8);
  lVar52 = *(long *)(lVar64 + 0x58);
  do {
    psVar39 = (short *)(lVar52 + lVar70 * 2);
    psVar50 = (short *)(lVar59 + lVar70 * 2);
    sVar57 = psVar50[0x10];
    sVar62 = psVar39[0x10];
    lVar73 = (long)(int)sVar62 * (long)(int)sVar57;
    lVar78 = (long)(int)psVar39[0x20] * (long)(int)psVar50[0x20];
    sVar8 = psVar50[0x30];
    sVar9 = psVar39[0x30];
    iVar51 = (int)sVar9 * (int)sVar8;
    lVar71 = (long)(int)psVar39[8] * (long)(int)psVar50[8];
    lVar68 = (long)(int)psVar39[0x18] * (long)(int)psVar50[0x18];
    lVar56 = lVar73 + (long)(int)sVar9 * (long)(int)sVar8;
    sVar10 = psVar50[0x28];
    sVar11 = psVar39[0x28];
    iVar69 = (int)sVar11 * (int)sVar10;
    sVar12 = psVar50[0x38];
    sVar13 = psVar39[0x38];
    lVar53 = lVar56 - (long)(int)psVar39[0x20] * (long)(int)psVar50[0x20];
    iVar60 = (int)sVar13 * (int)sVar12;
    lVar63 = lVar71 + (long)(int)psVar39[0x18] * (long)(int)psVar50[0x18];
    lVar54 = lVar63 * 0x1c6a;
    lVar66 = (lVar71 + (long)(int)sVar11 * (long)(int)sVar10) * 0x1574;
    lVar74 = (lVar63 + (long)(int)sVar11 * (long)(int)sVar10 + (long)(int)sVar13 * (long)(int)sVar12
             ) * 0xcc0;
    lVar64 = lVar74 + (lVar68 + (long)(int)sVar11 * (long)(int)sVar10) * -0x2537;
    lVar67 = (lVar68 + (long)(int)sVar13 * (long)(int)sVar12) * -0x398b;
    lVar63 = lVar66 + (long)iVar69 * -0x2626 + lVar64;
    lVar64 = lVar54 + (long)(int)lVar68 * 0x4258 + lVar67 + lVar64;
    uVar65 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    lVar47 = (lVar78 - (long)(int)sVar9 * (long)(int)sVar8) * 0x517e;
    lVar55 = lVar74 + (lVar71 + (long)(int)sVar13 * (long)(int)sVar12) * 3000;
    lVar54 = lVar54 + (long)(int)lVar71 * -0x1d8a + lVar66 + lVar55;
    lVar55 = lVar67 + (long)iVar60 * 0x4347 + lVar55;
    lVar66 = uVar65 + lVar53 * 0x2b6c;
    lVar67 = lVar47 + (long)iVar51 * 0x43b5 + lVar66;
    lVar74 = (long)(int)lVar68 * -0x2ef3 + (long)iVar69 * 0x200b + (long)iVar60 * -0x35ea + lVar74;
    aiStack_9b0[lVar70] = (int)((ulong)(lVar54 + lVar67) >> 0xb);
    lVar71 = lVar66 + (lVar78 - (long)(int)sVar62 * (long)(int)sVar57) * 0xdc9;
    lVar47 = lVar47 + (long)(int)lVar78 * -0x3a4c + lVar71;
    aiStack_9b0[lVar70 + 0x50] = (int)((ulong)(lVar67 - lVar54) >> 0xb);
    lVar66 = lVar66 + lVar56 * -0x24fb;
    aiStack_9b0[lVar70 + 8] = (int)((ulong)(lVar64 + lVar47) >> 0xb);
    iVar60 = (int)lVar73;
    lVar54 = (long)iVar60 * -0x2c83 + (long)(int)lVar78 * 0x3e39 + lVar66;
    lVar66 = lVar66 + (long)iVar51 * -0x193d;
    aiStack_9b0[lVar70 + 0x48] = (int)((ulong)(lVar47 - lVar64) >> 0xb);
    aiStack_9b0[lVar70 + 0x10] = (int)((ulong)(lVar63 + lVar66) >> 0xb);
    aiStack_9b0[lVar70 + 0x40] = (int)((ulong)(lVar66 - lVar63) >> 0xb);
    lVar71 = lVar71 + (long)iVar60 * -0x306f;
    aiStack_9b0[lVar70 + 0x18] = (int)((ulong)(lVar55 + lVar71) >> 0xb);
    aiStack_9b0[lVar70 + 0x38] = (int)((ulong)(lVar71 - lVar55) >> 0xb);
    aiStack_9b0[lVar70 + 0x20] = (int)((ulong)(lVar74 + lVar54) >> 0xb);
    aiStack_9b0[lVar70 + 0x30] = (int)((ulong)(lVar54 - lVar74) >> 0xb);
    aiStack_9b0[lVar70 + 0x28] = (int)(uVar65 + lVar53 * 0x7ffffffd2bf >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 8);
  lVar52 = 0;
  lVar70 = lStack_9c8 + 0x80;
  do {
    puVar1 = (undefined1 *)(*(long *)((long)plVar42 + lVar52) + (uVar44 & 0xffffffff));
    iVar20 = aiStack_9b0[lVar52 + 1];
    iVar77 = aiStack_9b0[lVar52 + 4];
    iVar21 = aiStack_9b0[lVar52 + 5];
    iVar18 = aiStack_9b0[lVar52 + 6];
    iVar22 = aiStack_9b0[lVar52 + 7];
    iVar60 = aiStack_9b0[lVar52] * 0x2000 + 0x20000;
    iVar69 = (iVar77 - iVar18) * 0x517e;
    iVar19 = aiStack_9b0[lVar52 + 2];
    iVar4 = aiStack_9b0[lVar52 + 3];
    iVar2 = (iVar18 + iVar19) - iVar77;
    iVar72 = iVar60 + iVar2 * 0x2b6c;
    iVar17 = iVar72 + (iVar77 - iVar19) * 0xdc9;
    iVar51 = iVar69 + iVar18 * 0x43b5 + iVar72;
    iVar69 = iVar69 + iVar77 * -0x3a4c + iVar17;
    iVar72 = iVar72 + (iVar18 + iVar19) * -0x24fb;
    uVar30 = iVar60 + iVar2 * 0xfffd2bf;
    uVar45 = (ulong)uVar30;
    iVar17 = iVar17 + iVar19 * -0x306f;
    iVar2 = (iVar4 + iVar20 + iVar21 + iVar22) * 0xcc0;
    iVar23 = (iVar4 + iVar20) * 0x1c6a;
    uVar43 = iVar72 + iVar18 * -0x193d;
    uVar65 = (ulong)uVar43;
    iVar24 = (iVar21 + iVar20) * 0x1574;
    iVar18 = iVar2 + (iVar22 + iVar20) * 3000;
    uVar49 = iVar23 + iVar20 * -0x1d8a + iVar24;
    iVar72 = iVar19 * -0x2c83 + iVar77 * 0x3e39 + iVar72;
    iVar60 = uVar49 + iVar18;
    *puVar1 = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar60 + iVar51) >> 0x12) & 0x3ff));
    iVar19 = (iVar22 + iVar4) * -0x398b;
    iVar77 = iVar2 + (iVar21 + iVar4) * -0x2537;
    uVar46 = iVar24 + iVar21 * -0x2626 + iVar77;
    iVar77 = iVar23 + iVar4 * 0x4258 + iVar19 + iVar77;
    puVar1[10] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar51 - iVar60) >> 0x12) & 0x3ff));
    bVar5 = *(byte *)(lVar70 + ((ulong)((uint)(iVar77 + iVar69) >> 0x12) & 0x3ff));
    uVar37 = (ulong)bVar5;
    puVar1[1] = bVar5;
    uVar3 = iVar19 + iVar22 * 0x4347 + iVar18;
    uVar61 = (ulong)uVar3;
    puVar1[9] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar69 - iVar77) >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar70 + ((ulong)(uVar46 + uVar43 >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar70 + ((ulong)(uVar43 - uVar46 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)(lVar70 + ((ulong)(uVar3 + iVar17 >> 0x12) & 0x3ff));
    iVar2 = iVar4 * -0x2ef3 + iVar21 * 0x200b + iVar22 * -0x35ea + iVar2;
    puVar1[7] = *(undefined1 *)(lVar70 + ((ulong)(iVar17 - uVar3 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar2 + iVar72) >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar72 - iVar2) >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar70 + ((ulong)(uVar30 >> 0x12) & 0x3ff));
    lVar52 = lVar52 + 8;
  } while (lVar52 != 0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_850) {
    return;
  }
  ___stack_chk_fail();
  uStack_a30 = 0xffffca16;
  uStack_a28 = 0x200b;
  uStack_a20 = 0xffffd10d;
  uStack_a18 = 0x4347;
  uStack_a10 = 0xffffc675;
  uStack_a08 = 0xffffd9da;
  uStack_a00 = 0x4258;
  uStack_9f8 = 0xffffdac9;
  plStack_9f0 = plVar42;
  uStack_9e8 = (ulong)uVar49;
  ppppuStack_9e0 = &ppppuStack_7f0;
  uStack_9d8 = 0x1081d7eb8;
  uStack_bcc = uVar46;
  uStack_bc8 = uVar45;
  lVar70 = 0;
  lStack_a40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_bd8 = *(long *)(uVar65 + 0x1a8);
  lVar52 = *(long *)(uVar61 + 0x58);
  do {
    psVar39 = (short *)(lVar52 + lVar70 * 2);
    psVar50 = (short *)(uVar37 + lVar70 * 2);
    uVar44 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    lVar53 = uVar44 + (long)((int)psVar50[0x20] * (int)psVar39[0x20]) * 0x2731;
    lVar73 = uVar44 + (long)((int)psVar50[0x20] * (int)psVar39[0x20]) * -0x2731;
    iVar60 = (int)((long)(int)psVar39[0x10] * (long)(int)psVar50[0x10]);
    lVar54 = (long)(int)psVar39[0x30] * (long)(int)psVar50[0x30];
    lVar64 = (long)(int)psVar39[0x10] * (long)(int)psVar50[0x10] -
             (long)(int)psVar39[0x30] * (long)(int)psVar50[0x30];
    lVar63 = uVar44 + lVar64 * 0x2000;
    lVar56 = uVar44 + lVar64 * -0x2000;
    lVar64 = (long)iVar60 * 0x2bb6 + lVar54 * 0x2000;
    lVar59 = lVar64 + lVar53;
    lVar53 = lVar53 - lVar64;
    lVar54 = (long)iVar60 * 0xbb6 + lVar54 * -0x2000;
    lVar64 = lVar54 + lVar73;
    lVar73 = lVar73 - lVar54;
    lVar71 = (long)(int)psVar39[8] * (long)(int)psVar50[8];
    sVar57 = psVar50[0x28];
    sVar62 = psVar39[0x28];
    lVar67 = (long)(int)sVar62 * (long)(int)sVar57;
    sVar8 = psVar50[0x38];
    sVar9 = psVar39[0x38];
    iVar60 = (int)sVar9 * (int)sVar8;
    iVar51 = (int)((long)(int)psVar39[0x18] * (long)(int)psVar50[0x18]);
    lVar54 = lVar71 + (long)(int)sVar62 * (long)(int)sVar57;
    lVar74 = (lVar54 + (long)(int)sVar9 * (long)(int)sVar8) * 0x1b8d;
    lVar55 = lVar74 + lVar54 * 0x85b;
    lVar54 = (long)(int)lVar71 * 0x8f7 + (long)iVar51 * 0x29cf + lVar55;
    lVar66 = (lVar67 + (long)(int)sVar9 * (long)(int)sVar8) * -0x2175;
    lVar55 = (long)iVar51 * -0x1151 + (long)(int)lVar67 * -0x2f50 + lVar66 + lVar55;
    lVar47 = lVar71 - (long)(int)sVar9 * (long)(int)sVar8;
    lVar78 = (long)(int)psVar39[0x18] * (long)(int)psVar50[0x18] -
             (long)(int)sVar62 * (long)(int)sVar57;
    lVar67 = (long)iVar60 * 0x32c6 + (long)iVar51 * -0x29cf + lVar66 + lVar74;
    lVar74 = (long)(int)lVar71 * -0x15a4 + (long)iVar51 * -0x1151 + (long)iVar60 * -0x3f74 + lVar74;
    auStack_bc0[lVar70] = (uint)((ulong)(lVar54 + lVar59) >> 0xb);
    lVar71 = (lVar47 + lVar78) * 0x1151;
    lVar47 = lVar71 + lVar47 * 0x187e;
    auStack_bc0[lVar70 + 0x58] = (uint)((ulong)(lVar59 - lVar54) >> 0xb);
    auStack_bc0[lVar70 + 8] = (uint)((ulong)(lVar47 + lVar63) >> 0xb);
    auStack_bc0[lVar70 + 0x50] = (uint)((ulong)(lVar63 - lVar47) >> 0xb);
    auStack_bc0[lVar70 + 0x10] = (uint)((ulong)(lVar55 + lVar64) >> 0xb);
    auStack_bc0[lVar70 + 0x48] = (uint)((ulong)(lVar64 - lVar55) >> 0xb);
    auStack_bc0[lVar70 + 0x18] = (uint)((ulong)(lVar67 + lVar73) >> 0xb);
    auStack_bc0[lVar70 + 0x40] = (uint)((ulong)(lVar73 - lVar67) >> 0xb);
    lVar71 = lVar71 + lVar78 * -0x3b21;
    auStack_bc0[lVar70 + 0x20] = (uint)((ulong)(lVar71 + lVar56) >> 0xb);
    auStack_bc0[lVar70 + 0x38] = (uint)((ulong)(lVar56 - lVar71) >> 0xb);
    auStack_bc0[lVar70 + 0x28] = (uint)((ulong)(lVar74 + lVar53) >> 0xb);
    auStack_bc0[lVar70 + 0x30] = (uint)((ulong)(lVar53 - lVar74) >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 8);
  lVar52 = 0;
  lVar70 = lStack_bd8 + 0x80;
  lVar63 = 0xffffd0b0;
  uVar44 = (ulong)uVar46;
  do {
    uVar3 = auStack_bc0[lVar52 + 1];
    uVar30 = auStack_bc0[lVar52 + 5];
    iVar60 = auStack_bc0[lVar52] * 0x2000 + 0x20000;
    iVar51 = iVar60 + auStack_bc0[lVar52 + 4] * 0x2731;
    uVar49 = auStack_bc0[lVar52 + 2];
    uVar43 = auStack_bc0[lVar52 + 3];
    uVar46 = auStack_bc0[lVar52 + 6];
    uVar14 = auStack_bc0[lVar52 + 7];
    iVar2 = iVar60 + auStack_bc0[lVar52 + 4] * -0x2731;
    iVar69 = iVar60 + (uVar49 - uVar46) * 0x2000;
    uVar15 = iVar60 + (uVar49 - uVar46) * -0x2000;
    iVar60 = uVar49 * 0x2bb6 + uVar46 * 0x2000;
    iVar72 = iVar60 + iVar51;
    uVar16 = iVar51 - iVar60;
    iVar51 = uVar49 * 0xbb6 + uVar46 * -0x2000;
    iVar60 = iVar51 + iVar2;
    uVar49 = (uVar30 + uVar3 + uVar14) * 0x1b8d;
    iVar77 = uVar49 + (uVar30 + uVar3) * 0x85b;
    uVar46 = iVar2 - iVar51;
    iVar51 = uVar43 * 0x29cf + uVar3 * 0x8f7 + iVar77;
    iVar19 = (uVar14 + uVar30) * -0x2175;
    iVar77 = uVar43 * -0x1151 + uVar30 * -0x2f50 + iVar19 + iVar77;
    lVar64 = *(long *)(uVar45 + lVar52);
    uVar30 = uVar43 - uVar30;
    uVar65 = (ulong)uVar30;
    puVar1 = (undefined1 *)(lVar64 + uVar44);
    *puVar1 = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar51 + iVar72) >> 0x12) & 0x3ff));
    iVar18 = ((uVar3 - uVar14) + uVar30) * 0x1151;
    iVar2 = iVar18 + (uVar3 - uVar14) * 0x187e;
    puVar1[0xb] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar72 - iVar51) >> 0x12) & 0x3ff));
    puVar1[1] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar2 + iVar69) >> 0x12) & 0x3ff));
    iVar51 = uVar43 * -0x29cf + uVar14 * 0x32c6 + uVar49 + iVar19;
    puVar1[10] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar69 - iVar2) >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar77 + iVar60) >> 0x12) & 0x3ff));
    puVar1[9] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar60 - iVar77) >> 0x12) & 0x3ff));
    iVar60 = uVar43 * -0x1151 + uVar3 * -0x15a4 + uVar14 * -0x3f74 + uVar49;
    puVar1[3] = *(undefined1 *)(lVar70 + ((ulong)(iVar51 + uVar46 >> 0x12) & 0x3ff));
    iVar18 = iVar18 + uVar30 * -0x3b21;
    puVar1[8] = *(undefined1 *)(lVar70 + ((ulong)(uVar46 - iVar51 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar70 + ((ulong)(iVar18 + uVar15 >> 0x12) & 0x3ff));
    puVar1[7] = *(undefined1 *)(lVar70 + ((ulong)(uVar15 - iVar18 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar70 + ((ulong)(iVar60 + uVar16 >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar70 + ((ulong)(uVar16 - iVar60 >> 0x12) & 0x3ff));
    lVar52 = lVar52 + 8;
  } while (lVar52 != 0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a40) {
    return;
  }
  uVar61 = uStack_bc8;
  ___stack_chk_fail();
  uStack_c40 = (ulong)uVar46;
  uStack_c38 = (ulong)uVar49;
  puStack_c30 = puVar1;
  uStack_c28 = (ulong)uVar14;
  uStack_c20 = (ulong)uVar3;
  uStack_c18 = (ulong)uVar15;
  uStack_c10 = (ulong)uVar16;
  uStack_c08 = 0xffffc4df;
  uStack_c00 = 0x187e;
  uStack_bf8 = 0x1151;
  ppppuStack_bf0 = &ppppuStack_9e0;
  uStack_be8 = 0x1081d831c;
  uStack_dfc = (int)uVar44;
  uStack_df8 = uVar65;
  lVar70 = 0;
  lStack_c50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_e08 = *(long *)(lVar64 + 0x1a8);
  lVar52 = *(long *)(uVar61 + 0x58);
  do {
    psVar39 = (short *)(lVar52 + lVar70 * 2);
    psVar50 = (short *)(lVar63 + lVar70 * 2);
    sVar57 = psVar50[0x10];
    sVar62 = psVar39[0x10];
    iVar60 = (int)sVar62 * (int)sVar57;
    uVar61 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    lVar47 = (long)(int)psVar39[0x20] * (long)(int)psVar50[0x20] +
             (long)(int)psVar39[0x30] * (long)(int)psVar50[0x30];
    lVar68 = (long)(int)psVar39[0x20] * (long)(int)psVar50[0x20] -
             (long)(int)psVar39[0x30] * (long)(int)psVar50[0x30];
    lVar59 = uVar61 + lVar68 * 0x319;
    lVar64 = lVar47 * 0x24f9 + (long)iVar60 * 0x2bf1 + lVar59;
    lVar59 = (long)iVar60 * 0x100c + lVar47 * -0x24f9 + lVar59;
    lVar55 = uVar61 + lVar68 * 0xf95;
    lVar54 = (long)iVar60 * 0x21e0 + lVar47 * -0xa20 + lVar55;
    lVar55 = lVar47 * 0xa20 + (long)iVar60 * -0x2812 + lVar55;
    lVar74 = uVar61 + lVar68 * -0x1dfe;
    lVar67 = (long)iVar60 * -0x574 + lVar47 * -0xdf2 + lVar74;
    lVar74 = lVar47 * 0xdf2 + (long)iVar60 * -0x19b5 + lVar74;
    lVar56 = (long)(int)psVar39[8] * (long)(int)psVar50[8];
    sVar8 = psVar50[0x18];
    sVar9 = psVar39[0x18];
    lVar75 = (long)(int)sVar9 * (long)(int)sVar8;
    sVar10 = psVar50[0x28];
    sVar11 = psVar39[0x28];
    lVar79 = (long)(int)sVar11 * (long)(int)sVar10;
    sVar12 = psVar50[0x38];
    sVar13 = psVar39[0x38];
    lVar71 = (lVar56 + (long)(int)sVar9 * (long)(int)sVar8) * 0x2a50;
    lVar73 = (lVar56 + (long)(int)sVar11 * (long)(int)sVar10) * 0x253e;
    lVar66 = lVar56 + (long)(int)sVar13 * (long)(int)sVar12;
    lVar78 = lVar66 * 0x1e02;
    lVar47 = lVar71 + (long)(int)lVar56 * -0x40a5 + lVar73 + lVar78;
    lVar53 = (lVar75 + (long)(int)sVar11 * (long)(int)sVar10) * -0xad5;
    lVar76 = (lVar75 + (long)(int)sVar13 * (long)(int)sVar12) * -0x253e;
    lVar71 = lVar71 + (long)(int)lVar75 * 0x1acb + lVar53 + lVar76;
    lVar80 = (lVar79 + (long)(int)sVar13 * (long)(int)sVar12) * -0x1508;
    lVar73 = lVar53 + (long)(int)lVar79 * -0x324f + lVar73 + lVar80;
    iVar60 = (int)sVar13 * (int)sVar12;
    lVar78 = lVar76 + (long)iVar60 * 0x4694 + lVar78 + lVar80;
    lVar53 = (lVar79 - (long)(int)sVar9 * (long)(int)sVar8) * 0x1e02 + lVar66 * 0xad5;
    lVar66 = (long)(int)lVar56 * 0xa33 + (long)(int)lVar75 * -0xeea + lVar53;
    lVar53 = (long)(int)lVar79 * 0xc4e + (long)iVar60 * -0x37c1 + lVar53;
    aiStack_df0[lVar70] = (int)((ulong)(lVar47 + lVar64) >> 0xb);
    aiStack_df0[lVar70 + 0x60] = (int)((ulong)(lVar64 - lVar47) >> 0xb);
    aiStack_df0[lVar70 + 8] = (int)((ulong)(lVar71 + lVar54) >> 0xb);
    aiStack_df0[lVar70 + 0x58] = (int)((ulong)(lVar54 - lVar71) >> 0xb);
    aiStack_df0[lVar70 + 0x10] = (int)((ulong)(lVar73 + lVar59) >> 0xb);
    aiStack_df0[lVar70 + 0x50] = (int)((ulong)(lVar59 - lVar73) >> 0xb);
    aiStack_df0[lVar70 + 0x18] = (int)((ulong)(lVar78 + lVar67) >> 0xb);
    aiStack_df0[lVar70 + 0x48] = (int)((ulong)(lVar67 - lVar78) >> 0xb);
    aiStack_df0[lVar70 + 0x20] = (int)((ulong)(lVar66 + lVar74) >> 0xb);
    aiStack_df0[lVar70 + 0x40] = (int)((ulong)(lVar74 - lVar66) >> 0xb);
    aiStack_df0[lVar70 + 0x28] = (int)((ulong)(lVar53 + lVar55) >> 0xb);
    aiStack_df0[lVar70 + 0x38] = (int)((ulong)(lVar55 - lVar53) >> 0xb);
    aiStack_df0[lVar70 + 0x30] =
         (int)(uVar61 + (lVar68 - (long)(int)sVar62 * (long)(int)sVar57) * 0x2d41 >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 8);
  lVar52 = 0;
  lVar70 = lStack_e08 + 0x80;
  lVar63 = 0xfffff116;
  do {
    iVar20 = aiStack_df0[lVar52 + 1];
    iVar60 = aiStack_df0[lVar52] * 0x2000 + 0x20000;
    iVar21 = aiStack_df0[lVar52 + 5];
    iVar22 = aiStack_df0[lVar52 + 7];
    iVar51 = aiStack_df0[lVar52 + 6] + aiStack_df0[lVar52 + 4];
    iVar32 = aiStack_df0[lVar52 + 4] - aiStack_df0[lVar52 + 6];
    iVar72 = iVar60 + iVar32 * 0x319;
    iVar19 = aiStack_df0[lVar52 + 2];
    iVar4 = aiStack_df0[lVar52 + 3];
    iVar77 = iVar60 + iVar32 * 0xf95;
    uVar49 = iVar51 * 0x24f9 + iVar19 * 0x2bf1 + iVar72;
    iVar18 = iVar60 + iVar32 * -0x1dfe;
    iVar69 = iVar51 * 0xa20 + iVar19 * -0x2812 + iVar77;
    uVar46 = iVar51 * 0xdf2 + iVar19 * -0x19b5 + iVar18;
    uVar37 = (ulong)uVar46;
    iVar17 = (iVar4 + iVar20) * 0x2a50;
    iVar72 = iVar51 * -0x24f9 + iVar19 * 0x100c + iVar72;
    iVar23 = (iVar21 + iVar20) * 0x253e;
    iVar24 = (iVar22 + iVar20) * 0x1e02;
    iVar77 = iVar51 * -0xa20 + iVar19 * 0x21e0 + iVar77;
    iVar2 = iVar17 + iVar20 * -0x40a5 + iVar23 + iVar24;
    iVar25 = (iVar21 + iVar4) * -0xad5;
    iVar18 = iVar51 * -0xdf2 + iVar19 * -0x574 + iVar18;
    iVar26 = (iVar22 + iVar4) * -0x253e;
    uVar3 = iVar17 + iVar4 * 0x1acb + iVar25 + iVar26;
    iVar17 = (iVar22 + iVar21) * -0x1508;
    iVar51 = iVar25 + iVar21 * -0x324f + iVar23 + iVar17;
    uVar30 = iVar26 + iVar22 * 0x4694 + iVar24 + iVar17;
    bVar5 = *(byte *)(lVar70 + ((ulong)(iVar2 + uVar49 >> 0x12) & 0x3ff));
    pbVar36 = (byte *)(*(long *)(uVar65 + lVar52) + (uVar44 & 0xffffffff));
    *pbVar36 = bVar5;
    pbVar36[0xc] = *(byte *)(lVar70 + ((ulong)(uVar49 - iVar2 >> 0x12) & 0x3ff));
    pbVar36[1] = *(byte *)(lVar70 + ((ulong)(uVar3 + iVar77 >> 0x12) & 0x3ff));
    uVar15 = (iVar21 - iVar4) * 0x1e02;
    uVar14 = uVar15 + (iVar22 + iVar20) * 0xad5;
    pbVar36[0xb] = *(byte *)(lVar70 + ((ulong)(iVar77 - uVar3 >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar70 + ((ulong)((uint)(iVar51 + iVar72) >> 0x12) & 0x3ff));
    pbVar36[2] = bVar6;
    pbVar36[10] = *(byte *)(lVar70 + ((ulong)((uint)(iVar72 - iVar51) >> 0x12) & 0x3ff));
    pbVar36[3] = *(byte *)(lVar70 + ((ulong)(uVar30 + iVar18 >> 0x12) & 0x3ff));
    uVar43 = iVar20 * 0xa33 + iVar4 * -0xeea + uVar14;
    uVar61 = (ulong)uVar43;
    pbVar36[9] = *(byte *)(lVar70 + ((ulong)(iVar18 - uVar30 >> 0x12) & 0x3ff));
    bVar7 = *(byte *)(lVar70 + ((ulong)(uVar43 + uVar46 >> 0x12) & 0x3ff));
    uVar45 = (ulong)bVar7;
    pbVar36[4] = bVar7;
    iVar51 = iVar21 * 0xc4e + iVar22 * -0x37c1 + uVar14;
    pbVar36[8] = *(byte *)(lVar70 + ((ulong)(uVar46 - uVar43 >> 0x12) & 0x3ff));
    pbVar36[5] = *(byte *)(lVar70 + ((ulong)((uint)(iVar51 + iVar69) >> 0x12) & 0x3ff));
    pbVar36[7] = *(byte *)(lVar70 + ((ulong)((uint)(iVar69 - iVar51) >> 0x12) & 0x3ff));
    pbVar36[6] = *(byte *)(lVar70 + ((ulong)((uint)(iVar60 + (iVar32 - iVar19) * 0x2d41) >> 0x12) &
                                    0x3ff));
    lVar52 = lVar52 + 8;
  } while (lVar52 != 0x68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c50) {
    return;
  }
  ___stack_chk_fail();
  uStack_e70 = 0xffffeaf8;
  uStack_e68 = (ulong)bVar5;
  uStack_e60 = (ulong)uVar3;
  uStack_e58 = (ulong)uVar30;
  uStack_e50 = (ulong)uVar49;
  uStack_e48 = 0xad5;
  uStack_e40 = (ulong)uVar15;
  uStack_e38 = 0x1e02;
  uStack_e30 = (ulong)bVar6;
  uStack_e28 = (ulong)uVar14;
  ppppuStack_e20 = &ppppuStack_bf0;
  uStack_e18 = 0x1081d8880;
  uStack_104c = (int)pbVar36;
  lStack_1048 = lVar63;
  lVar70 = 0;
  lStack_e80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1058 = *(long *)(uVar61 + 0x1a8);
  lVar52 = *(long *)(uVar37 + 0x58);
  do {
    psVar39 = (short *)(lVar52 + lVar70 * 2);
    psVar50 = (short *)(uVar45 + lVar70 * 2);
    iVar51 = (int)psVar39[0x20] * (int)psVar50[0x20];
    uVar44 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    lVar78 = uVar44 + (long)iVar51 * 0x28c6;
    lVar66 = uVar44 + (long)iVar51 * 0xa12;
    lVar53 = uVar44 + (long)iVar51 * -0x1c37;
    iVar60 = (int)psVar39[0x30] * (int)psVar50[0x30];
    lVar54 = ((long)(int)psVar39[0x10] * (long)(int)psVar50[0x10] +
             (long)(int)psVar39[0x30] * (long)(int)psVar50[0x30]) * 0x2362;
    iVar69 = (int)((long)(int)psVar39[0x10] * (long)(int)psVar50[0x10]);
    lVar59 = lVar54 + (long)iVar69 * 0x8bd;
    lVar54 = lVar54 + (long)iVar60 * -0x3704;
    lVar55 = (long)iVar69 * 0x13a3 + (long)iVar60 * -0x2c1f;
    lVar64 = lVar59 + lVar78;
    lVar78 = lVar78 - lVar59;
    lVar59 = lVar54 + lVar66;
    lVar66 = lVar66 - lVar54;
    lVar54 = lVar55 + lVar53;
    lVar53 = lVar53 - lVar55;
    lVar71 = (long)(int)psVar39[8] * (long)(int)psVar50[8];
    sVar57 = psVar50[0x18];
    sVar62 = psVar39[0x18];
    lVar55 = (long)(int)sVar62 * (long)(int)sVar57;
    sVar8 = psVar50[0x28];
    sVar9 = psVar39[0x28];
    lVar74 = (long)(int)sVar9 * (long)(int)sVar8;
    lVar76 = (long)(int)psVar39[0x38] * (long)(int)psVar50[0x38];
    lVar56 = lVar71 + (long)(int)sVar9 * (long)(int)sVar8;
    lVar68 = (lVar71 + (long)(int)sVar62 * (long)(int)sVar57) * 0x2ab7;
    lVar79 = lVar56 * 0x2652;
    lVar67 = (lVar55 + (long)(int)sVar9 * (long)(int)sVar8) * -0x511 + lVar76 * -0x2000;
    iVar60 = (int)lVar55;
    lVar55 = lVar68 + (long)iVar60 * -0xd92 + lVar67;
    iVar69 = (int)lVar74;
    lVar67 = lVar79 + (long)iVar69 * -0x4bf7 + lVar67;
    lVar56 = lVar56 * 0x1814;
    lVar75 = lVar71 - (long)(int)sVar62 * (long)(int)sVar57;
    lVar73 = (lVar74 - (long)(int)sVar62 * (long)(int)sVar57) * 0x2cf8;
    lVar47 = lVar75 * 0xef2 + lVar76 * -0x2000;
    lVar74 = lVar56 + (long)(int)lVar71 * -0x21f5 + lVar47;
    lVar47 = lVar73 + (long)iVar60 * 0x1599 + lVar47;
    lVar71 = lVar68 + (long)(int)lVar71 * -0x2410 + lVar79 + lVar76 * 0x2000;
    lVar73 = lVar73 + (long)iVar69 * -0x361a + lVar56 + lVar76 * 0x2000;
    iVar60 = ((int)lVar75 - iVar69) + (int)lVar76;
    auStack_1040[lVar70] = (uint)((ulong)(lVar71 + lVar64) >> 0xb);
    auStack_1040[lVar70 + 0x68] = (uint)((ulong)(lVar64 - lVar71) >> 0xb);
    auStack_1040[lVar70 + 8] = (uint)((ulong)(lVar55 + lVar59) >> 0xb);
    auStack_1040[lVar70 + 0x60] = (uint)((ulong)(lVar59 - lVar55) >> 0xb);
    auStack_1040[lVar70 + 0x10] = (uint)((ulong)(lVar67 + lVar54) >> 0xb);
    auStack_1040[lVar70 + 0x58] = (uint)((ulong)(lVar54 - lVar67) >> 0xb);
    iVar51 = (int)(uVar44 + (long)iVar51 * -0x2d42 >> 0xb);
    auStack_1040[lVar70 + 0x18] = iVar51 + iVar60 * 4;
    auStack_1040[lVar70 + 0x50] = iVar51 + iVar60 * -4;
    auStack_1040[lVar70 + 0x20] = (uint)((ulong)(lVar73 + lVar53) >> 0xb);
    auStack_1040[lVar70 + 0x48] = (uint)((ulong)(lVar53 - lVar73) >> 0xb);
    auStack_1040[lVar70 + 0x28] = (uint)((ulong)(lVar47 + lVar66) >> 0xb);
    auStack_1040[lVar70 + 0x40] = (uint)((ulong)(lVar66 - lVar47) >> 0xb);
    auStack_1040[lVar70 + 0x30] = (uint)((ulong)(lVar74 + lVar78) >> 0xb);
    auStack_1040[lVar70 + 0x38] = (uint)((ulong)(lVar78 - lVar74) >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 8);
  lVar52 = 0;
  lVar70 = lStack_1058 + 0x80;
  uVar44 = (ulong)pbVar36 & 0xffffffff;
  do {
    uVar43 = auStack_1040[lVar52 + 1];
    iVar60 = auStack_1040[lVar52] * 0x2000 + 0x20000;
    uVar49 = auStack_1040[lVar52 + 4];
    uVar14 = auStack_1040[lVar52 + 5];
    iVar69 = iVar60 + uVar49 * 0x28c6;
    iVar19 = iVar60 + uVar49 * 0xa12;
    iVar72 = iVar60 + uVar49 * -0x1c37;
    uVar46 = auStack_1040[lVar52 + 2];
    uVar15 = auStack_1040[lVar52 + 3];
    uVar30 = auStack_1040[lVar52 + 6];
    uVar3 = auStack_1040[lVar52 + 7];
    iVar60 = iVar60 + uVar49 * -0x2d42;
    iVar2 = (uVar30 + uVar46) * 0x2362;
    iVar77 = iVar2 + uVar46 * 0x8bd;
    iVar2 = iVar2 + uVar30 * -0x3704;
    iVar18 = uVar46 * 0x13a3 + uVar30 * -0x2c1f;
    iVar51 = iVar77 + iVar69;
    uVar30 = iVar69 - iVar77;
    iVar69 = iVar18 + iVar72;
    uVar16 = iVar72 - iVar18;
    uVar45 = (ulong)uVar16;
    uVar49 = iVar2 + iVar19;
    uVar37 = (ulong)uVar49;
    iVar77 = (uVar15 + uVar43) * 0x2ab7;
    iVar18 = (uVar14 + uVar43) * 0x2652;
    iVar72 = iVar77 + uVar43 * -0x2410 + iVar18 + uVar3 * 0x2000;
    iVar19 = iVar19 - iVar2;
    iVar2 = (uVar14 + uVar15) * -0x511 + uVar3 * -0x2000;
    iVar77 = iVar77 + uVar15 * -0xd92 + iVar2;
    iVar2 = iVar18 + uVar14 * -0x4bf7 + iVar2;
    uVar46 = uVar14 * -0x361a + uVar3 * 0x2000;
    iVar18 = (uVar43 - uVar15) * 0xef2 + uVar3 * -0x2000;
    uVar3 = ((uVar43 - uVar15) - uVar14) + uVar3;
    uVar65 = (ulong)uVar3;
    puVar1 = (undefined1 *)(*(long *)(lVar63 + lVar52) + uVar44);
    *puVar1 = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar72 + iVar51) >> 0x12) & 0x3ff));
    puVar1[0xd] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar51 - iVar72) >> 0x12) & 0x3ff));
    bVar5 = *(byte *)(lVar70 + ((ulong)(iVar77 + uVar49 >> 0x12) & 0x3ff));
    uVar61 = (ulong)bVar5;
    puVar1[1] = bVar5;
    puVar1[0xc] = *(undefined1 *)(lVar70 + ((ulong)(uVar49 - iVar77 >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar2 + iVar69) >> 0x12) & 0x3ff));
    iVar72 = (uVar14 + uVar43) * 0x1814;
    iVar77 = (uVar14 - uVar15) * 0x2cf8;
    puVar1[0xb] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar69 - iVar2) >> 0x12) & 0x3ff));
    iVar51 = uVar46 + iVar77 + iVar72;
    puVar1[3] = *(undefined1 *)(lVar70 + ((ulong)(iVar60 + uVar3 * 0x2000 >> 0x12) & 0x3ff));
    puVar1[10] = *(undefined1 *)(lVar70 + ((ulong)(iVar60 + uVar3 * -0x2000 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar70 + ((ulong)(iVar51 + uVar16 >> 0x12) & 0x3ff));
    iVar60 = iVar72 + uVar43 * -0x21f5 + iVar18;
    iVar18 = iVar77 + uVar15 * 0x1599 + iVar18;
    puVar1[9] = *(undefined1 *)(lVar70 + ((ulong)(uVar16 - iVar51 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar18 + iVar19) >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar19 - iVar18) >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar70 + ((ulong)(iVar60 + uVar30 >> 0x12) & 0x3ff));
    puVar1[7] = *(undefined1 *)(lVar70 + ((ulong)(uVar30 - iVar60 >> 0x12) & 0x3ff));
    lVar52 = lVar52 + 8;
  } while (lVar52 != 0x70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e80) {
    return;
  }
  ___stack_chk_fail();
  uStack_10c0 = (ulong)uVar15;
  uStack_10b8 = (ulong)uVar30;
  uStack_10b0 = 0x1599;
  uStack_10a8 = 0xffffc9e6;
  uStack_10a0 = 0x2cf8;
  uStack_1098 = 0xffffb409;
  uStack_1090 = 0xfffff26e;
  uStack_1088 = 0xfffffaef;
  lStack_1080 = lVar63;
  uStack_1078 = (ulong)uVar46;
  ppppuStack_1070 = &ppppuStack_e20;
  uStack_1068 = 0x1081d8d6c;
  uStack_12cc = (int)uVar44;
  uStack_12c8 = uVar45;
  uStack_12b8 = uVar37;
  lVar70 = 0;
  lStack_10d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_12d8 = *(long *)(uVar65 + 0x1a8);
  lStack_12c0 = *(long *)(uVar61 + 0x58);
  do {
    psVar39 = (short *)(lStack_12c0 + lVar70 * 2);
    psVar50 = (short *)(uVar37 + lVar70 * 2);
    lVar59 = (long)(int)psVar39[0x10] * (long)(int)psVar50[0x10];
    uVar65 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    iVar51 = (int)psVar39[0x30] * (int)psVar50[0x30];
    lVar54 = uVar65 + (long)iVar51 * -0xdfc;
    lVar55 = uVar65 + (long)iVar51 * 0x249d;
    lVar73 = lVar59 - (long)(int)psVar39[0x20] * (long)(int)psVar50[0x20];
    lVar67 = lVar59 + (long)(int)psVar39[0x20] * (long)(int)psVar50[0x20];
    lVar52 = lVar73 * 0x176 + lVar67 * 0x2ace + lVar55;
    lVar63 = (long)(int)lVar59 * 0x2e13 + lVar67 * -0x2ace + lVar73 * 0x176 + lVar54;
    lVar64 = lVar55 + lVar73 * -0xcc7 + lVar67 * -0x1182;
    lVar59 = lVar67 * 0x1182 + (long)(int)lVar59 * -0x2e13 + lVar73 * -0xcc7 + lVar54;
    lVar54 = lVar73 * 0xb50 + lVar67 * 0x194c + lVar54;
    lVar55 = lVar55 + lVar67 * -0x194c + lVar73 * 0xb50;
    sVar57 = psVar50[8];
    sVar62 = psVar39[8];
    lVar47 = (long)(int)sVar62 * (long)(int)sVar57;
    sVar8 = psVar50[0x28];
    sVar9 = psVar39[0x28];
    iVar77 = (int)sVar9 * (int)sVar8;
    sVar10 = psVar50[0x38];
    sVar11 = psVar39[0x38];
    iVar60 = (int)sVar11 * (int)sVar10;
    lVar78 = lVar47 - (long)(int)sVar11 * (long)(int)sVar10;
    lVar74 = lVar78 * 0x2d02 + (long)iVar77 * 0x2731;
    iVar72 = (int)((long)(int)psVar39[0x18] * (long)(int)psVar50[0x18]);
    lVar67 = lVar74 + (long)iVar60 * 0x4ea3 + (long)iVar72 * 0x2b0a;
    iVar69 = (int)lVar47;
    lVar74 = (long)iVar69 * -0x2399 + (long)iVar72 * -0x1a9a + lVar74;
    lVar66 = (long)(int)psVar39[0x18] * (long)(int)psVar50[0x18] -
             (long)(int)sVar11 * (long)(int)sVar10;
    lVar71 = (lVar47 + (long)(int)sVar11 * (long)(int)sVar10) * 0x1268;
    lVar47 = (long)iVar69 * 0xf39 + (long)iVar72 * -0x1a9a + (long)iVar77 * -0x2731 + lVar71;
    lVar71 = (long)iVar72 * -0x2b0a + (long)iVar77 * 0x2731 + (long)iVar60 * -0x1bd1 + lVar71;
    auStack_12b0[lVar70] = (uint)((ulong)(lVar67 + lVar52) >> 0xb);
    auStack_12b0[lVar70 + 0x70] = (uint)((ulong)(lVar52 - lVar67) >> 0xb);
    lVar67 = (lVar66 + (long)(int)sVar62 * (long)(int)sVar57) * 0x1a9a;
    lVar52 = lVar67 + (long)iVar69 * 0x1071;
    auStack_12b0[lVar70 + 8] = (uint)((ulong)(lVar52 + lVar54) >> 0xb);
    auStack_12b0[lVar70 + 0x68] = (uint)((ulong)(lVar54 - lVar52) >> 0xb);
    lVar54 = uVar65 + (long)iVar51 * -0x2d42;
    lVar78 = lVar78 - (long)(int)sVar9 * (long)(int)sVar8;
    lVar52 = lVar54 + lVar73 * 0x16a0;
    auStack_12b0[lVar70 + 0x10] = (uint)((ulong)(lVar78 * 0x2731 + lVar52) >> 0xb);
    auStack_12b0[lVar70 + 0x60] = (uint)((ulong)(lVar52 + lVar78 * -0x2731) >> 0xb);
    auStack_12b0[lVar70 + 0x18] = (uint)((ulong)(lVar47 + lVar63) >> 0xb);
    auStack_12b0[lVar70 + 0x58] = (uint)((ulong)(lVar63 - lVar47) >> 0xb);
    lVar67 = lVar67 + lVar66 * -0x45a4;
    auStack_12b0[lVar70 + 0x20] = (uint)((ulong)(lVar67 + lVar55) >> 0xb);
    auStack_12b0[lVar70 + 0x50] = (uint)((ulong)(lVar55 - lVar67) >> 0xb);
    auStack_12b0[lVar70 + 0x28] = (uint)((ulong)(lVar71 + lVar64) >> 0xb);
    auStack_12b0[lVar70 + 0x48] = (uint)((ulong)(lVar64 - lVar71) >> 0xb);
    auStack_12b0[lVar70 + 0x30] = (uint)((ulong)(lVar74 + lVar59) >> 0xb);
    auStack_12b0[lVar70 + 0x40] = (uint)((ulong)(lVar59 - lVar74) >> 0xb);
    auStack_12b0[lVar70 + 0x38] = (uint)((ulong)(lVar54 + lVar73 * 0x7ffffffd2c0) >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 8);
  lVar52 = 0;
  lVar70 = lStack_12d8 + 0x80;
  uVar44 = uVar44 & 0xffffffff;
  do {
    uVar30 = auStack_12b0[lVar52 + 1];
    uVar65 = (ulong)uVar30;
    puVar1 = (undefined1 *)(*(long *)(uVar45 + lVar52) + uVar44);
    iVar60 = auStack_12b0[lVar52] * 0x2000 + 0x20000;
    uVar49 = auStack_12b0[lVar52 + 6];
    uVar43 = auStack_12b0[lVar52 + 7];
    iVar18 = iVar60 + uVar49 * -0xdfc;
    iVar20 = iVar60 + uVar49 * 0x249d;
    uVar46 = auStack_12b0[lVar52 + 2];
    uVar14 = auStack_12b0[lVar52 + 3];
    uVar3 = auStack_12b0[lVar52 + 5];
    iVar60 = iVar60 + uVar49 * -0x2d42;
    iVar22 = uVar46 - auStack_12b0[lVar52 + 4];
    iVar51 = auStack_12b0[lVar52 + 4] + uVar46;
    iVar69 = iVar22 * 0x176 + iVar51 * 0x2ace + iVar20;
    iVar72 = iVar22 * -0xcc7 + iVar51 * -0x1182 + iVar20;
    iVar77 = uVar46 * 0x2e13 + iVar51 * -0x2ace + iVar22 * 0x176 + iVar18;
    iVar2 = iVar22 * 0xb50 + iVar51 * 0x194c + iVar18;
    iVar21 = iVar60 + iVar22 * 0x16a0;
    iVar18 = iVar51 * 0x1182 + uVar46 * -0x2e13 + iVar22 * -0xcc7 + iVar18;
    iVar19 = uVar3 * 0x2731 + (uVar30 - uVar43) * 0x2d02;
    uVar49 = iVar20 + iVar51 * -0x194c + iVar22 * 0xb50;
    uVar37 = (ulong)uVar49;
    iVar51 = iVar19 + uVar14 * 0x2b0a + uVar43 * 0x4ea3;
    iVar20 = (uVar30 - uVar43) - uVar3;
    uVar31 = ((uVar14 - uVar43) + uVar30) * 0x1a9a;
    *puVar1 = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar51 + iVar69) >> 0x12) & 0x3ff));
    uVar15 = uVar31 + uVar30 * 0x1071;
    puVar1[0xe] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar69 - iVar51) >> 0x12) & 0x3ff));
    puVar1[1] = *(undefined1 *)(lVar70 + ((ulong)(uVar15 + iVar2 >> 0x12) & 0x3ff));
    puVar1[0xd] = *(undefined1 *)(lVar70 + ((ulong)(iVar2 - uVar15 >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)
                 (lVar70 + ((ulong)((uint)(iVar20 * 0x2731 + iVar21) >> 0x12) & 0x3ff));
    uVar27 = (uVar43 + uVar30) * 0x1268;
    uVar46 = uVar14 * -0x1a9a + uVar30 * 0xf39 + uVar3 * -0x2731 + uVar27;
    puVar1[0xc] = *(undefined1 *)
                   (lVar70 + ((ulong)((uint)(iVar21 + iVar20 * -0x2731) >> 0x12) & 0x3ff));
    uVar16 = uVar31 + (uVar14 - uVar43) * -0x45a4;
    uVar38 = (ulong)uVar16;
    puVar1[3] = *(undefined1 *)(lVar70 + ((ulong)(uVar46 + iVar77 >> 0x12) & 0x3ff));
    uVar3 = uVar3 * 0x2731 + uVar14 * -0x2b0a;
    uVar61 = (ulong)uVar3;
    puVar1[0xb] = *(undefined1 *)(lVar70 + ((ulong)(iVar77 - uVar46 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar70 + ((ulong)(uVar16 + uVar49 >> 0x12) & 0x3ff));
    iVar51 = uVar3 + uVar43 * -0x1bd1 + uVar27;
    puVar1[10] = *(undefined1 *)(lVar70 + ((ulong)(uVar49 - uVar16 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar51 + iVar72) >> 0x12) & 0x3ff));
    iVar19 = uVar14 * -0x1a9a + uVar30 * -0x2399 + iVar19;
    puVar1[9] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar72 - iVar51) >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar19 + iVar18) >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar70 + ((ulong)((uint)(iVar18 - iVar19) >> 0x12) & 0x3ff));
    puVar1[7] = *(undefined1 *)
                 (lVar70 + ((ulong)((uint)(iVar60 + iVar22 * 0xfffd2c0) >> 0x12) & 0x3ff));
    lVar52 = lVar52 + 8;
  } while (lVar52 != 0x78);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_10d0) {
    return;
  }
  ___stack_chk_fail();
  uStack_1340 = 0xf39;
  uStack_1338 = 0x1268;
  uStack_1330 = 0xffffdc67;
  uStack_1328 = 0x1a9a;
  uStack_1320 = uVar45;
  uStack_1318 = (ulong)uVar15;
  uStack_1310 = 0xffffba5c;
  uStack_1308 = (ulong)uVar31;
  uStack_1300 = (ulong)uVar27;
  uStack_12f8 = (ulong)uVar46;
  ppppuStack_12f0 = &ppppuStack_1070;
  uStack_12e8 = 0x1081d92d8;
  uStack_1574 = (int)uVar44;
  uStack_1570 = uVar65;
  uStack_1560 = uVar38;
  lVar70 = 0;
  lStack_1350 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1580 = *(long *)(uVar61 + 0x1a8);
  lStack_1568 = *(long *)(uVar37 + 0x58);
  do {
    psVar39 = (short *)(lStack_1568 + lVar70 * 2);
    psVar50 = (short *)(uVar38 + lVar70 * 2);
    iVar60 = (int)psVar39[0x20] * (int)psVar50[0x20];
    uVar61 = (long)(int)*psVar50 * (long)(int)*psVar39 * 0x2000 | 0x400;
    lStack_1558 = uVar61 + (long)iVar60 * 0x29cf;
    lVar53 = uVar61 + (long)iVar60 * -0x29cf;
    lVar56 = uVar61 + (long)iVar60 * 0x1151;
    lVar66 = uVar61 + (long)iVar60 * -0x1151;
    iVar51 = (int)psVar39[0x30] * (int)psVar50[0x30];
    lVar59 = (long)(int)psVar39[0x10] * (long)(int)psVar50[0x10] -
             (long)(int)psVar39[0x30] * (long)(int)psVar50[0x30];
    lVar54 = lVar59 * 0x8d4;
    lVar59 = lVar59 * 0x2c63;
    lVar63 = lVar59 + (long)iVar51 * 0x5203;
    iVar60 = (int)((long)(int)psVar39[0x10] * (long)(int)psVar50[0x10]);
    lVar64 = lVar54 + (long)iVar60 * 0x1ccd;
    lVar59 = lVar59 + (long)iVar60 * -0x133e;
    lVar54 = lVar54 + (long)iVar51 * -0x1050;
    lVar52 = lVar63 + lStack_1558;
    lStack_1558 = lStack_1558 - lVar63;
    lVar63 = lVar64 + lVar56;
    lVar56 = lVar56 - lVar64;
    lVar64 = lVar59 + lVar66;
    lVar66 = lVar66 - lVar59;
    lVar59 = lVar54 + lVar53;
    lVar53 = lVar53 - lVar54;
    lVar55 = (long)(int)psVar39[8] * (long)(int)psVar50[8];
    sVar57 = psVar50[0x18];
    sVar62 = psVar39[0x18];
    lVar79 = (long)(int)sVar62 * (long)(int)sVar57;
    sVar8 = psVar50[0x28];
    sVar9 = psVar39[0x28];
    sVar10 = psVar50[0x38];
    sVar11 = psVar39[0x38];
    lVar68 = lVar55 + (long)(int)sVar9 * (long)(int)sVar8;
    lVar67 = (lVar55 + (long)(int)sVar62 * (long)(int)sVar57) * 0x2b4e;
    lVar81 = lVar68 * 0x27e9;
    lVar71 = (lVar55 + (long)(int)sVar11 * (long)(int)sVar10) * 0x22fc;
    lVar75 = (lVar55 - (long)(int)sVar11 * (long)(int)sVar10) * 0x1cb6;
    lVar68 = lVar68 * 0x1555;
    lVar74 = (lVar55 - (long)(int)sVar62 * (long)(int)sVar57) * 0xd23;
    lVar54 = lVar67 + (long)(int)lVar55 * -0x492a + lVar81 + lVar71;
    lVar55 = lVar74 + (long)(int)lVar55 * -0x3abe + lVar68 + lVar75;
    lVar47 = (lVar79 + (long)(int)sVar9 * (long)(int)sVar8) * 0x470;
    iVar69 = (int)sVar11;
    iVar51 = (int)sVar10;
    lVar73 = lVar79 + (long)iVar69 * (long)iVar51;
    lVar76 = lVar73 * -0x1555;
    lVar67 = lVar67 + (long)(int)lVar79 * 0x24d + lVar47 + lVar76;
    lVar80 = (long)(int)sVar9 * (long)(int)sVar8;
    lVar78 = (lVar80 - (long)(int)sVar62 * (long)(int)sVar57) * 0x2d09;
    lVar73 = lVar73 * -0x27e9;
    lVar74 = lVar74 + (long)(int)lVar79 * 0x3f1a + lVar78 + lVar73;
    lVar79 = (lVar80 + (long)iVar69 * (long)iVar51) * -0x2b4e;
    lVar47 = lVar47 + (long)(int)lVar80 * -0x2406 + lVar81 + lVar79;
    iVar60 = (int)((long)iVar69 * (long)iVar51);
    lVar71 = lVar76 + (long)iVar60 * 0x2218 + lVar71 + lVar79;
    lVar76 = ((long)iVar69 * (long)iVar51 - (long)(int)sVar9 * (long)(int)sVar8) * 0xd23;
    lVar73 = lVar73 + (long)iVar60 * 0x6485 + lVar75 + lVar76;
    lVar78 = lVar78 + (long)(int)lVar80 * -0x1886 + lVar68 + lVar76;
    aiStack_1550[lVar70] = (int)((ulong)(lVar54 + lVar52) >> 0xb);
    aiStack_1550[lVar70 + 0x78] = (int)((ulong)(lVar52 - lVar54) >> 0xb);
    aiStack_1550[lVar70 + 8] = (int)((ulong)(lVar67 + lVar63) >> 0xb);
    aiStack_1550[lVar70 + 0x70] = (int)((ulong)(lVar63 - lVar67) >> 0xb);
    aiStack_1550[lVar70 + 0x10] = (int)((ulong)(lVar47 + lVar64) >> 0xb);
    aiStack_1550[lVar70 + 0x68] = (int)((ulong)(lVar64 - lVar47) >> 0xb);
    aiStack_1550[lVar70 + 0x18] = (int)((ulong)(lVar71 + lVar59) >> 0xb);
    aiStack_1550[lVar70 + 0x60] = (int)((ulong)(lVar59 - lVar71) >> 0xb);
    aiStack_1550[lVar70 + 0x20] = (int)((ulong)(lVar73 + lVar53) >> 0xb);
    aiStack_1550[lVar70 + 0x58] = (int)((ulong)(lVar53 - lVar73) >> 0xb);
    aiStack_1550[lVar70 + 0x28] = (int)((ulong)(lVar78 + lVar66) >> 0xb);
    aiStack_1550[lVar70 + 0x50] = (int)((ulong)(lVar66 - lVar78) >> 0xb);
    aiStack_1550[lVar70 + 0x30] = (int)((ulong)(lVar74 + lVar56) >> 0xb);
    aiStack_1550[lVar70 + 0x48] = (int)((ulong)(lVar56 - lVar74) >> 0xb);
    aiStack_1550[lVar70 + 0x38] = (int)((ulong)(lVar55 + lStack_1558) >> 0xb);
    aiStack_1550[lVar70 + 0x40] = (int)((ulong)(lStack_1558 - lVar55) >> 0xb);
    lVar70 = lVar70 + 1;
  } while ((int)lVar70 != 8);
  lVar52 = 0;
  lVar70 = lStack_1580 + 0x80;
  do {
    iVar20 = aiStack_1550[lVar52 + 1];
    iVar72 = aiStack_1550[lVar52 + 4];
    iVar4 = aiStack_1550[lVar52 + 5];
    iVar60 = aiStack_1550[lVar52] * 0x2000 + 0x20000;
    iVar51 = iVar60 + iVar72 * 0x29cf;
    iVar33 = iVar60 + iVar72 * -0x29cf;
    iVar77 = aiStack_1550[lVar52 + 2];
    iVar17 = aiStack_1550[lVar52 + 3];
    iVar69 = iVar60 + iVar72 * 0x1151;
    iVar2 = aiStack_1550[lVar52 + 6];
    iVar23 = aiStack_1550[lVar52 + 7];
    iVar22 = (iVar77 - iVar2) * 0x8d4;
    iVar60 = iVar60 + iVar72 * -0x1151;
    iVar21 = (iVar77 - iVar2) * 0x2c63;
    iVar18 = iVar21 + iVar2 * 0x5203;
    iVar19 = iVar22 + iVar77 * 0x1ccd;
    iVar21 = iVar21 + iVar77 * -0x133e;
    iVar22 = iVar22 + iVar2 * -0x1050;
    iVar72 = iVar18 + iVar51;
    iVar51 = iVar51 - iVar18;
    iVar77 = iVar19 + iVar69;
    iVar69 = iVar69 - iVar19;
    iVar2 = iVar21 + iVar60;
    iVar60 = iVar60 - iVar21;
    iVar21 = (iVar17 + iVar20) * 0x2b4e;
    iVar24 = (iVar4 + iVar20) * 0x27e9;
    iVar25 = (iVar23 + iVar20) * 0x22fc;
    iVar18 = iVar22 + iVar33;
    iVar26 = (iVar20 - iVar23) * 0x1cb6;
    uVar43 = (iVar4 + iVar20) * 0x1555;
    iVar32 = (iVar20 - iVar17) * 0xd23;
    iVar33 = iVar33 - iVar22;
    iVar19 = iVar21 + iVar20 * -0x492a + iVar24 + iVar25;
    iVar20 = iVar32 + iVar20 * -0x3abe + uVar43 + iVar26;
    iVar22 = (iVar4 + iVar17) * 0x470;
    iVar28 = (iVar23 + iVar17) * -0x1555;
    iVar21 = iVar21 + iVar17 * 0x24d + iVar22 + iVar28;
    iVar29 = (iVar23 + iVar4) * -0x2b4e;
    uVar49 = iVar22 + iVar4 * -0x2406 + iVar24 + iVar29;
    iVar22 = iVar28 + iVar23 * 0x2218 + iVar25 + iVar29;
    pbVar36 = (byte *)(*(long *)(uVar65 + lVar52) + (uVar44 & 0xffffffff));
    bVar5 = *(byte *)(lVar70 + ((ulong)((uint)(iVar19 + iVar72) >> 0x12) & 0x3ff));
    *pbVar36 = bVar5;
    pbVar36[0xf] = *(byte *)(lVar70 + ((ulong)((uint)(iVar72 - iVar19) >> 0x12) & 0x3ff));
    pbVar36[1] = *(byte *)(lVar70 + ((ulong)((uint)(iVar21 + iVar77) >> 0x12) & 0x3ff));
    uVar14 = (iVar23 + iVar17) * -0x27e9;
    plVar42 = (long *)0x6485;
    uVar3 = uVar14 + iVar23 * 0x6485;
    iVar72 = (iVar23 - iVar4) * 0xd23;
    uVar46 = uVar3 + iVar26 + iVar72;
    uVar37 = (ulong)uVar46;
    pbVar36[0xe] = *(byte *)(lVar70 + ((ulong)((uint)(iVar77 - iVar21) >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar70 + ((ulong)(uVar49 + iVar2 >> 0x12) & 0x3ff));
    pbVar36[2] = bVar6;
    pbVar36[0xd] = *(byte *)(lVar70 + ((ulong)(iVar2 - uVar49 >> 0x12) & 0x3ff));
    pbVar36[3] = *(byte *)(lVar70 + ((ulong)((uint)(iVar22 + iVar18) >> 0x12) & 0x3ff));
    pbVar36[0xc] = *(byte *)(lVar70 + ((ulong)((uint)(iVar18 - iVar22) >> 0x12) & 0x3ff));
    pbVar36[4] = *(byte *)(lVar70 + ((ulong)(uVar46 + iVar33 >> 0x12) & 0x3ff));
    uVar30 = iVar32 + iVar17 * 0x3f1a;
    uVar61 = (ulong)uVar30;
    iVar77 = (iVar4 - iVar17) * 0x2d09;
    lVar63 = 0xffffe77a;
    iVar72 = iVar77 + iVar4 * -0x1886 + uVar43 + iVar72;
    pbVar36[0xb] = *(byte *)(lVar70 + ((ulong)(iVar33 - uVar46 >> 0x12) & 0x3ff));
    pbVar36[5] = *(byte *)(lVar70 + ((ulong)((uint)(iVar72 + iVar60) >> 0x12) & 0x3ff));
    iVar77 = uVar30 + iVar77 + uVar14;
    pbVar36[10] = *(byte *)(lVar70 + ((ulong)((uint)(iVar60 - iVar72) >> 0x12) & 0x3ff));
    pbVar36[6] = *(byte *)(lVar70 + ((ulong)((uint)(iVar77 + iVar69) >> 0x12) & 0x3ff));
    pbVar36[9] = *(byte *)(lVar70 + ((ulong)((uint)(iVar69 - iVar77) >> 0x12) & 0x3ff));
    pbVar36[7] = *(byte *)(lVar70 + ((ulong)((uint)(iVar20 + iVar51) >> 0x12) & 0x3ff));
    pbVar36[8] = *(byte *)(lVar70 + ((ulong)((uint)(iVar51 - iVar20) >> 0x12) & 0x3ff));
    lVar52 = lVar52 + 8;
  } while (lVar52 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1350) {
    return;
  }
  uVar44 = uStack_1570;
  ___stack_chk_fail();
  uStack_15d0 = (ulong)uVar49;
  uStack_15c8 = (ulong)bVar5;
  uStack_15c0 = (ulong)uVar3;
  uStack_15b8 = (ulong)uVar14;
  uStack_15b0 = uVar37;
  uStack_15a8 = (ulong)bVar6;
  uStack_15a0 = (ulong)uVar43;
  uStack_1598 = 0xd23;
  ppppuStack_1590 = &ppppuStack_12f0;
  pcStack_1588 = FUN_1081d98e8;
  lStack_15d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar70 = *(long *)(uVar61 + 0x1a8);
  psVar39 = (short *)(lVar63 + 0x70);
  puVar48 = auStack_1658;
  uVar49 = 9;
  psVar50 = *(short **)(pbVar36 + 0x58);
  do {
    if (uVar49 != 5) {
      sVar57 = psVar39[-0x20];
      if (psVar39[-0x30] == 0 && psVar39[-0x28] == 0) {
        if (sVar57 != 0) {
LAB_1081d9990:
          iVar60 = 0;
          goto LAB_1081d99a0;
        }
        if (((psVar39[-0x10] != 0) || (psVar39[-8] != 0)) || (*psVar39 != 0)) {
          sVar57 = 0;
          goto LAB_1081d9990;
        }
        uVar46 = (int)psVar39[-0x38] * (int)*psVar50 * 4;
        *puVar48 = uVar46;
        puVar48[8] = uVar46;
        puVar48[0x10] = uVar46;
        lVar52 = 0x60;
      }
      else {
        iVar60 = psVar39[-0x28] * 0x3b21;
LAB_1081d99a0:
        lVar52 = (long)iVar60 * (long)(int)psVar50[0x10] +
                 (long)((int)psVar39[-8] * (int)psVar50[0x30]) * -0x187e;
        uVar37 = (long)(int)psVar39[-0x38] * (long)(int)*psVar50 * 0x4000 - lVar52;
        iVar60 = (int)psVar50[8] * (int)psVar39[-0x30];
        lVar64 = (long)((int)psVar50[0x38] * (int)*psVar39) * -0x6c2 +
                 (long)((int)psVar50[0x28] * (int)psVar39[-0x10]) * 0x2e75 +
                 (long)((int)psVar50[0x18] * (int)sVar57) * -0x4587 + (long)iVar60 * 0x21f9;
        lVar63 = (long)((int)psVar50[0x38] * (int)*psVar39) * -0x1050 +
                 (long)((int)psVar50[0x28] * (int)psVar39[-0x10]) * -0x133e +
                 (long)((int)psVar50[0x18] * (int)sVar57) * 0x1ccd + (long)iVar60 * 0x5203;
        lVar52 = lVar52 + (long)(int)psVar39[-0x38] * (long)(int)*psVar50 * 0x4000 + 0x800;
        *puVar48 = (uint)((ulong)(lVar63 + lVar52) >> 0xc);
        puVar48[0x18] = (uint)((ulong)(lVar52 - lVar63) >> 0xc);
        puVar48[8] = (uint)(lVar64 + uVar37 + 0x800 >> 0xc);
        uVar46 = (uint)((uVar37 + 0x800) - lVar64 >> 0xc);
        lVar52 = 0x40;
      }
      *(uint *)((long)puVar48 + lVar52) = uVar46;
    }
    psVar50 = psVar50 + 1;
    puVar48 = puVar48 + 1;
    uVar49 = uVar49 - 1;
    psVar39 = psVar39 + 1;
  } while (1 < uVar49);
  lVar52 = 0;
  lVar70 = lVar70 + 0x80;
  lVar63 = 0x1ccd;
  lVar64 = 0x5203;
  psVar39 = (short *)0x3b21;
  uVar44 = uVar44 & 0xffffffff;
  do {
    plVar41 = plVar42 + 1;
    piVar58 = (int *)((long)auStack_1658 + lVar52);
    pbVar36 = (byte *)(*plVar42 + uVar44);
    iVar60 = *(int *)((long)auStack_1658 + lVar52 + 4);
    iVar51 = *(int *)((long)auStack_1658 + lVar52 + 8);
    iVar69 = *(int *)((long)auStack_1658 + lVar52 + 0xc);
    if (iVar60 == 0 && iVar51 == 0) {
      if (iVar69 != 0) {
LAB_1081d9b14:
        iVar51 = 0;
        goto LAB_1081d9b20;
      }
      if (((*(int *)((long)auStack_1658 + lVar52 + 0x14) != 0) ||
          (*(int *)((long)auStack_1658 + lVar52 + 0x18) != 0)) ||
         (*(int *)((long)auStack_1658 + lVar52 + 0x1c) != 0)) {
        iVar69 = 0;
        goto LAB_1081d9b14;
      }
      bVar5 = *(byte *)(lVar70 + ((ulong)(*piVar58 + 0x10U >> 5) & 0x3ff));
      *pbVar36 = bVar5;
      pbVar36[1] = bVar5;
      pbVar36[2] = bVar5;
      lVar59 = 3;
      uVar49 = 0;
      uVar65 = 0;
    }
    else {
      iVar51 = iVar51 * 0x3b21;
LAB_1081d9b20:
      uVar49 = *(uint *)((long)auStack_1658 + lVar52);
      iVar72 = *(int *)((long)auStack_1658 + lVar52 + 0x14);
      iVar51 = iVar51 + *(int *)((long)auStack_1658 + lVar52 + 0x18) * -0x187e;
      uVar46 = uVar49 * 0x4000 - iVar51;
      uVar37 = (ulong)uVar46;
      iVar77 = *(int *)((long)auStack_1658 + lVar52 + 0x1c);
      iVar2 = iVar60 * 0x5203 + iVar77 * -0x1050 + iVar72 * -0x133e + iVar69 * 0x1ccd;
      iVar51 = iVar51 + uVar49 * 0x4000 + 0x40000;
      bVar5 = *(byte *)(lVar70 + ((ulong)((uint)(iVar2 + iVar51) >> 0x13) & 0x3ff));
      uVar65 = (ulong)bVar5;
      iVar69 = iVar60 * 0x21f9 + iVar77 * -0x6c2 + iVar72 * 0x2e75 + iVar69 * -0x4587;
      *pbVar36 = bVar5;
      pbVar36[3] = *(byte *)(lVar70 + ((ulong)((uint)(iVar51 - iVar2) >> 0x13) & 0x3ff));
      iVar60 = uVar46 + 0x40000;
      bVar5 = *(byte *)(lVar70 + ((ulong)((uint)(iVar69 + iVar60) >> 0x13) & 0x3ff));
      piVar58 = (int *)(ulong)bVar5;
      pbVar36[1] = bVar5;
      bVar5 = *(byte *)(lVar70 + ((ulong)((uint)(iVar60 - iVar69) >> 0x13) & 0x3ff));
      lVar59 = 2;
    }
    pbVar36[lVar59] = bVar5;
    lVar52 = lVar52 + 0x20;
    plVar42 = plVar41;
  } while (lVar52 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_15d8) {
    return;
  }
  ___stack_chk_fail();
  uStack_1690 = uVar37;
  uStack_1688 = (ulong)uVar49;
  uStack_1680 = uVar65;
  piStack_1678 = piVar58;
  ppppuStack_1670 = &ppppuStack_1590;
  pcStack_1668 = FUN_1081d9c18;
  lStack_1698 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar52 = *(long *)(lVar63 + 0x1a8);
  uVar49 = 9;
  psVar50 = *(short **)(lVar64 + 0x58);
  lVar70 = 0x20;
  do {
    bVar35 = uVar49 != 3;
    uVar49 = uVar49 - 1;
    if ((bVar35) && ((uVar49 & 0x7ffffffd) != 4)) {
      sVar57 = psVar39[0x28];
      if (psVar39[8] == 0 && psVar39[0x18] == 0) {
        if (sVar57 != 0) {
LAB_1081d9cb0:
          iVar60 = 0;
          goto LAB_1081d9cc0;
        }
        if (psVar39[0x38] != 0) {
          sVar57 = 0;
          goto LAB_1081d9cb0;
        }
        iVar60 = (int)*psVar39 * (int)*psVar50 * 4;
        *(int *)((long)aiStack_16f8 + lVar70) = iVar60;
      }
      else {
        iVar60 = psVar39[0x18] * -0x28ba;
LAB_1081d9cc0:
        lVar63 = (long)((int)psVar39[0x38] * (int)psVar50[0x38]) * -0x1712 +
                 (long)((int)sVar57 * (int)psVar50[0x28]) * 0x1b37 +
                 (long)iVar60 * (long)(int)psVar50[0x18] +
                 (long)((int)psVar39[8] * (int)psVar50[8]) * 0x73fc;
        uVar65 = (long)(int)*psVar39 * (long)(int)*psVar50 * 0x8000 | 0x1000;
        *(int *)((long)aiStack_16f8 + lVar70) = (int)(lVar63 + uVar65 >> 0xd);
        iVar60 = (int)(uVar65 - lVar63 >> 0xd);
      }
      *(int *)((long)auStack_16d8 + lVar70) = iVar60;
    }
    psVar39 = psVar39 + 1;
    psVar50 = psVar50 + 1;
    lVar70 = lVar70 + 4;
  } while (1 < uVar49);
  lVar70 = 0;
  lVar52 = lVar52 + 0x80;
  puVar48 = auStack_16d8;
  uVar65 = uVar44 & 0xffffffff;
  bVar35 = true;
  do {
    pbVar36 = (byte *)(plVar41[lVar70] + uVar65);
    uVar49 = puVar48[3];
    uVar61 = (ulong)uVar49;
    uVar46 = puVar48[5];
    if (puVar48[1] == 0 && uVar49 == 0) {
      if (uVar46 != 0) {
LAB_1081d9da0:
        iVar60 = 0;
        goto LAB_1081d9dac;
      }
      if (puVar48[7] != 0) {
        uVar46 = 0;
        goto LAB_1081d9da0;
      }
      bVar5 = *(byte *)(lVar52 + ((ulong)(*puVar48 + 0x10 >> 5) & 0x3ff));
      *pbVar36 = bVar5;
      uVar49 = 0;
    }
    else {
      iVar60 = uVar49 * -0x28ba;
LAB_1081d9dac:
      uVar49 = *puVar48;
      uVar44 = (ulong)puVar48[7];
      iVar51 = iVar60 + puVar48[1] * 0x73fc + puVar48[7] * -0x1712 + uVar46 * 0x1b37;
      iVar60 = uVar49 * 0x8000 + 0x80000;
      bVar5 = *(byte *)(lVar52 + ((ulong)((uint)(iVar51 + iVar60) >> 0x14) & 0x3ff));
      uVar61 = (ulong)bVar5;
      *pbVar36 = bVar5;
      bVar5 = *(byte *)(lVar52 + ((ulong)((uint)(iVar60 - iVar51) >> 0x14) & 0x3ff));
    }
    uVar37 = (ulong)bVar5;
    puVar40 = (ushort *)(ulong)uVar49;
    pbVar36[1] = bVar5;
    puVar48 = puVar48 + 8;
    lVar70 = 1;
    bVar34 = !bVar35;
    bVar35 = false;
    if (bVar34) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1698) {
        return;
      }
      ___stack_chk_fail();
      *(undefined1 *)(*plVar41 + (uVar44 & 0xffffffff)) =
           *(undefined1 *)
            (*(long *)(uVar37 + 0x1a8) +
             ((ulong)((uint)**(ushort **)(uVar61 + 0x58) * (uint)*puVar40 + 4 >> 3) & 0x3ff) + 0x80)
      ;
      return;
    }
  } while( true );
}



/* Entry: 1081d6d0c; end: 1081d6f43;  */

void FUN_1081d6d0c(long param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  bool bVar36;
  long lVar37;
  ulong uVar38;
  undefined1 *puVar39;
  byte *pbVar40;
  ulong uVar41;
  ulong uVar42;
  short *psVar43;
  ushort *puVar44;
  long *plVar45;
  ulong uVar46;
  long *plVar47;
  uint uVar48;
  ulong uVar49;
  ulong uVar50;
  long lVar51;
  uint uVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  uint *puVar57;
  long lVar58;
  short *psVar59;
  int iVar60;
  long lVar61;
  long lVar62;
  short sVar63;
  long lVar64;
  int *piVar65;
  int iVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  int iVar70;
  int iVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  int iVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  int aiStack_1438 [8];
  uint auStack_1418 [16];
  long lStack_13d8;
  ulong uStack_13d0;
  ulong uStack_13c8;
  ulong uStack_13c0;
  int *piStack_13b8;
  undefined8 ****ppppuStack_13b0;
  code *pcStack_13a8;
  uint auStack_1398 [32];
  long lStack_1318;
  ulong uStack_1310;
  ulong uStack_1308;
  ulong uStack_1300;
  ulong uStack_12f8;
  ulong uStack_12f0;
  ulong uStack_12e8;
  ulong uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 ****ppppuStack_12d0;
  code *pcStack_12c8;
  long lStack_12c0;
  undefined4 uStack_12b4;
  ulong uStack_12b0;
  long lStack_12a8;
  ulong uStack_12a0;
  long lStack_1298;
  int aiStack_1290 [128];
  long lStack_1090;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  ulong uStack_1060;
  ulong uStack_1058;
  undefined8 uStack_1050;
  ulong uStack_1048;
  ulong uStack_1040;
  ulong uStack_1038;
  undefined8 ****ppppuStack_1030;
  undefined8 uStack_1028;
  long lStack_1018;
  undefined4 uStack_100c;
  ulong uStack_1008;
  long lStack_1000;
  ulong uStack_ff8;
  uint auStack_ff0 [120];
  long lStack_e10;
  ulong uStack_e00;
  ulong uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  long lStack_dc0;
  ulong uStack_db8;
  undefined8 ****ppppuStack_db0;
  undefined8 uStack_da8;
  long lStack_d98;
  undefined4 uStack_d8c;
  long lStack_d88;
  uint auStack_d80 [112];
  long lStack_bc0;
  undefined8 uStack_bb0;
  ulong uStack_ba8;
  ulong uStack_ba0;
  ulong uStack_b98;
  ulong uStack_b90;
  undefined8 uStack_b88;
  ulong uStack_b80;
  undefined8 uStack_b78;
  ulong uStack_b70;
  ulong uStack_b68;
  undefined8 ****ppppuStack_b60;
  undefined8 uStack_b58;
  long lStack_b48;
  undefined4 uStack_b3c;
  ulong uStack_b38;
  int aiStack_b30 [104];
  long lStack_990;
  ulong uStack_980;
  ulong uStack_978;
  undefined1 *puStack_970;
  ulong uStack_968;
  ulong uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 ****ppppuStack_930;
  undefined8 uStack_928;
  long lStack_918;
  uint uStack_90c;
  ulong uStack_908;
  uint auStack_900 [96];
  long lStack_780;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long *plStack_730;
  ulong uStack_728;
  undefined8 ****ppppuStack_720;
  undefined8 uStack_718;
  long lStack_708;
  undefined4 uStack_6fc;
  long *plStack_6f8;
  int aiStack_6f0 [88];
  long lStack_590;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  undefined1 *puStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined8 ****ppppuStack_530;
  undefined8 uStack_528;
  long lStack_520;
  undefined4 uStack_514;
  uint auStack_510 [80];
  long lStack_3d0;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  undefined8 uStack_380;
  ulong uStack_378;
  undefined1 ****ppppuStack_370;
  undefined8 uStack_368;
  long lStack_360;
  uint uStack_354;
  int aiStack_350 [72];
  long lStack_230;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  int aiStack_1bc [9];
  long lStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  int aiStack_17c [10];
  undefined4 auStack_154 [5];
  undefined4 auStack_140 [5];
  undefined4 auStack_12c [5];
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  int aiStack_d8 [12];
  undefined4 auStack_a8 [6];
  undefined4 auStack_90 [6];
  int aiStack_78 [6];
  undefined4 auStack_60 [6];
  long lStack_48;
  
  lVar55 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar56 = *(long *)(param_1 + 0x1a8);
  lVar58 = *(long *)(param_2 + 0x58);
  do {
    psVar43 = (short *)(lVar58 + lVar55 * 2);
    psVar59 = (short *)(param_3 + lVar55 * 2);
    uVar50 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    sVar63 = psVar59[0x20];
    sVar7 = psVar43[0x20];
    lVar53 = uVar50 + (long)((int)sVar7 * (int)sVar63) * 0x16a1;
    lVar64 = lVar53 + (long)((int)psVar59[0x10] * (int)psVar43[0x10]) * 0x2731;
    lVar53 = lVar53 + (long)((int)psVar59[0x10] * (int)psVar43[0x10]) * -0x2731;
    lVar54 = (long)(int)psVar43[8] * (long)(int)psVar59[8];
    sVar8 = psVar59[0x18];
    sVar9 = psVar43[0x18];
    lStack_110 = (long)(int)sVar9 * (long)(int)sVar8;
    lVar68 = (long)(int)psVar43[0x28] * (long)(int)psVar59[0x28];
    lVar37 = (lVar54 + (long)(int)psVar43[0x28] * (long)(int)psVar59[0x28]) * 0xbb6;
    lVar51 = lVar37 + (lVar54 + (long)(int)sVar9 * (long)(int)sVar8) * 0x2000;
    lVar37 = lVar37 + (lVar68 - (long)(int)sVar9 * (long)(int)sVar8) * 0x2000;
    iVar66 = (int)lVar54 - ((int)lStack_110 + (int)lVar68);
    aiStack_d8[lVar55] = (int)((ulong)(lVar51 + lVar64) >> 0xb);
    auStack_60[lVar55] = (int)((ulong)(lVar64 - lVar51) >> 0xb);
    iVar60 = (int)(uVar50 + (long)((int)sVar7 * (int)sVar63) * -0x2d42 >> 0xb);
    aiStack_d8[lVar55 + 6] = iVar60 + iVar66 * 4;
    aiStack_78[lVar55] = iVar60 + iVar66 * -4;
    auStack_a8[lVar55] = (int)((ulong)(lVar37 + lVar53) >> 0xb);
    auStack_90[lVar55] = (int)((ulong)(lVar53 - lVar37) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 6);
  lVar55 = 0;
  lVar56 = lVar56 + 0x80;
  do {
    plVar47 = param_4 + 1;
    puVar39 = (undefined1 *)(*param_4 + (param_5 & 0xffffffff));
    iVar76 = *(int *)((long)aiStack_d8 + lVar55 + 4);
    iVar70 = *(int *)((long)aiStack_d8 + lVar55 + 0x10);
    iVar1 = *(int *)((long)aiStack_d8 + lVar55 + 0x14);
    iVar66 = *(int *)((long)aiStack_d8 + lVar55) * 0x2000 + 0x20000;
    iVar14 = iVar66 + iVar70 * 0x16a1;
    iVar71 = *(int *)((long)aiStack_d8 + lVar55 + 8);
    iVar2 = *(int *)((long)aiStack_d8 + lVar55 + 0xc);
    iVar60 = iVar14 + iVar71 * 0x2731;
    uVar18 = (iVar1 + iVar76) * 0xbb6;
    uVar48 = uVar18 + (iVar2 + iVar76) * 0x2000;
    iVar76 = iVar76 - (iVar2 + iVar1);
    iVar66 = iVar66 + iVar70 * -0x2d42;
    *puVar39 = *(undefined1 *)(lVar56 + ((ulong)(uVar48 + iVar60 >> 0x12) & 0x3ff));
    uVar52 = uVar18 + (iVar1 - iVar2) * 0x2000;
    uVar41 = (ulong)uVar52;
    puVar39[5] = *(undefined1 *)(lVar56 + ((ulong)(iVar60 - uVar48 >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar56 + ((ulong)((uint)(iVar66 + iVar76 * 0x2000) >> 0x12) & 0x3ff));
    uVar38 = (ulong)bVar4;
    uVar29 = iVar14 + iVar71 * -0x2731;
    uVar49 = (ulong)uVar29;
    puVar39[1] = bVar4;
    puVar39[4] = *(undefined1 *)
                  (lVar56 + ((ulong)((uint)(iVar66 + iVar76 * -0x2000) >> 0x12) & 0x3ff));
    uVar50 = (ulong)(uVar29 - uVar52);
    puVar39[2] = *(undefined1 *)(lVar56 + ((ulong)(uVar52 + uVar29 >> 0x12) & 0x3ff));
    puVar39[3] = *(undefined1 *)(lVar56 + ((ulong)(uVar29 - uVar52 >> 0x12) & 0x3ff));
    lVar55 = lVar55 + 0x18;
    param_4 = plVar47;
  } while (lVar55 != 0x90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uStack_108 = (ulong)(uint)(iVar1 - iVar2);
  uStack_100 = (ulong)uVar48;
  uStack_f8 = (ulong)uVar18;
  puStack_f0 = &stack0xfffffffffffffff0;
  pcStack_e8 = FUN_1081d6f44;
  lVar55 = 0;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar56 = *(long *)(uVar50 + 0x1a8);
  lVar58 = *(long *)(uVar38 + 0x58);
  do {
    psVar43 = (short *)(lVar58 + lVar55 * 2);
    psVar59 = (short *)(uVar41 + lVar55 * 2);
    uVar50 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    lVar37 = (long)(int)psVar43[0x10] * (long)(int)psVar59[0x10] +
             (long)(int)psVar43[0x20] * (long)(int)psVar59[0x20];
    lVar54 = (long)(int)psVar43[0x10] * (long)(int)psVar59[0x10] -
             (long)(int)psVar43[0x20] * (long)(int)psVar59[0x20];
    lVar64 = uVar50 + lVar54 * 0xb50;
    lVar51 = lVar64 + lVar37 * 0x194c;
    lVar64 = lVar64 + lVar37 * -0x194c;
    lVar37 = ((long)(int)psVar43[8] * (long)(int)psVar59[8] +
             (long)(int)psVar43[0x18] * (long)(int)psVar59[0x18]) * 0x1a9a;
    lVar53 = lVar37 + (long)(int)((long)(int)psVar43[8] * (long)(int)psVar59[8]) * 0x1071;
    lVar37 = lVar37 + (long)((int)psVar43[0x18] * (int)psVar59[0x18]) * -0x45a4;
    aiStack_17c[lVar55] = (int)((ulong)(lVar53 + lVar51) >> 0xb);
    auStack_12c[lVar55] = (int)((ulong)(lVar51 - lVar53) >> 0xb);
    aiStack_17c[lVar55 + 5] = (int)((ulong)(lVar37 + lVar64) >> 0xb);
    auStack_140[lVar55] = (int)((ulong)(lVar64 - lVar37) >> 0xb);
    auStack_154[lVar55] = (int)(uVar50 + lVar54 * 0x7ffffffd2c0 >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 5);
  lVar55 = 0;
  lVar56 = lVar56 + 0x80;
  do {
    plVar45 = plVar47 + 1;
    iVar76 = *(int *)((long)aiStack_17c + lVar55 + 4);
    puVar39 = (undefined1 *)(*plVar47 + (uVar49 & 0xffffffff));
    iVar1 = *(int *)((long)aiStack_17c + lVar55 + 8);
    iVar71 = *(int *)((long)aiStack_17c + lVar55 + 0xc);
    iVar70 = *(int *)((long)aiStack_17c + lVar55 + 0x10);
    iVar60 = iVar70 + iVar1;
    iVar66 = *(int *)((long)aiStack_17c + lVar55) * 0x2000 + 0x20000;
    iVar1 = iVar1 - iVar70;
    iVar2 = iVar66 + iVar1 * 0xb50;
    iVar14 = (iVar71 + iVar76) * 0x1a9a;
    iVar70 = iVar2 + iVar60 * 0x194c;
    iVar76 = iVar14 + iVar76 * 0x1071;
    iVar14 = iVar14 + iVar71 * -0x45a4;
    *puVar39 = *(undefined1 *)(lVar56 + ((ulong)((uint)(iVar76 + iVar70) >> 0x12) & 0x3ff));
    iVar2 = iVar2 + iVar60 * -0x194c;
    puVar39[4] = *(undefined1 *)(lVar56 + ((ulong)((uint)(iVar70 - iVar76) >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar56 + ((ulong)((uint)(iVar14 + iVar2) >> 0x12) & 0x3ff));
    uVar41 = (ulong)bVar4;
    uVar48 = iVar66 + iVar1 * 0xfffd2c0;
    uVar38 = (ulong)uVar48;
    puVar39[1] = bVar4;
    puVar39[3] = *(undefined1 *)(lVar56 + ((ulong)((uint)(iVar2 - iVar14) >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar56 + ((ulong)(uVar48 >> 0x12) & 0x3ff));
    uVar50 = (ulong)bVar4;
    puVar39[2] = bVar4;
    lVar55 = lVar55 + 0x14;
    plVar47 = plVar45;
  } while (lVar55 != 100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  uVar48 = (uint)uVar41;
  ppuStack_190 = &puStack_f0;
  pcStack_188 = FUN_1081d7150;
  lVar55 = 0;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar56 = *(long *)(uVar50 + 0x1a8);
  lVar58 = *(long *)(puVar39 + 0x58);
  do {
    psVar43 = (short *)(lVar58 + lVar55 * 2);
    psVar59 = (short *)(uVar38 + lVar55 * 2);
    uVar50 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    sVar63 = psVar59[0x10];
    sVar7 = psVar43[0x10];
    lVar51 = uVar50 + (long)(int)((long)(int)sVar7 * (long)(int)sVar63) * 0x16a1;
    sVar8 = psVar59[8];
    sVar9 = psVar43[8];
    aiStack_1bc[lVar55] = (int)((ulong)(lVar51 + (long)((int)sVar8 * (int)sVar9) * 0x2731) >> 0xb);
    aiStack_1bc[lVar55 + 6] =
         (int)((ulong)(lVar51 + (long)((int)sVar8 * (int)sVar9) * -0x2731) >> 0xb);
    aiStack_1bc[lVar55 + 3] =
         (int)(uVar50 + (long)(int)sVar7 * (long)(int)sVar63 * 0x7ffffffd2be >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 3);
  lVar55 = 0;
  lVar56 = lVar56 + 0x80;
  do {
    plVar47 = plVar45 + 1;
    pbVar40 = (byte *)(*plVar45 + (uVar41 & 0xffffffff));
    iVar60 = *(int *)((long)aiStack_1bc + lVar55 + 4);
    iVar66 = *(int *)((long)aiStack_1bc + lVar55) * 0x2000 + 0x20000;
    iVar70 = *(int *)((long)aiStack_1bc + lVar55 + 8);
    uVar52 = iVar66 + iVar70 * 0x16a1;
    uVar49 = (ulong)uVar52;
    bVar4 = *(byte *)(lVar56 + ((ulong)(uVar52 + iVar60 * 0x2731 >> 0x12) & 0x3ff));
    uVar50 = (ulong)bVar4;
    *pbVar40 = bVar4;
    pbVar40[2] = *(byte *)(lVar56 + ((ulong)(uVar52 + iVar60 * -0x2731 >> 0x12) & 0x3ff));
    pbVar40[1] = *(byte *)(lVar56 + ((ulong)((uint)(iVar66 + iVar70 * 0xfffd2be) >> 0x12) & 0x3ff));
    lVar55 = lVar55 + 0xc;
    plVar45 = plVar47;
  } while (lVar55 != 0x24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_1081d72a0;
  lVar55 = 0;
  lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_360 = *(long *)(uVar50 + 0x1a8);
  lVar56 = *(long *)(uVar49 + 0x58);
  pppuStack_1d0 = &ppuStack_190;
  do {
    psVar43 = (short *)(lVar56 + lVar55 * 2);
    psVar59 = (short *)(uVar38 + lVar55 * 2);
    lVar68 = (long)(int)psVar43[0x10] * (long)(int)psVar59[0x10];
    uVar50 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    sVar63 = psVar59[0x20];
    sVar7 = psVar43[0x20];
    iVar66 = (int)sVar7 * (int)sVar63;
    lVar53 = (long)(int)psVar43[8] * (long)(int)psVar59[8];
    sVar8 = psVar59[0x28];
    sVar9 = psVar43[0x28];
    sVar10 = psVar59[0x38];
    sVar11 = psVar43[0x38];
    lVar64 = (long)(int)sVar9 * (long)(int)sVar8 - (long)(int)sVar11 * (long)(int)sVar10;
    lVar54 = (lVar53 - (long)(int)sVar9 * (long)(int)sVar8) - (long)(int)sVar11 * (long)(int)sVar10;
    lVar79 = uVar50 + (long)((int)psVar43[0x30] * (int)psVar59[0x30]) * 0x16a1;
    lVar72 = uVar50 + (long)((int)psVar43[0x30] * (int)psVar59[0x30]) * -0x2d42;
    lVar77 = lVar68 - (long)(int)sVar7 * (long)(int)sVar63;
    lVar74 = lVar68 + (long)(int)sVar7 * (long)(int)sVar63;
    iVar60 = (int)psVar59[0x18] * (int)psVar43[0x18];
    lVar37 = (lVar53 + (long)(int)sVar9 * (long)(int)sVar8) * 0x1d17;
    lVar58 = (long)iVar60 * -0x2731 + lVar64 * -0x2c91 + lVar37;
    lVar51 = lVar79 + lVar74 * 0x2a87 + (long)iVar66 * -0x7dc;
    lVar53 = (lVar53 + (long)(int)sVar11 * (long)(int)sVar10) * 0xf7a;
    lVar37 = lVar53 + lVar37 + (long)iVar60 * 0x2731;
    lVar53 = lVar64 * 0x2c91 + (long)iVar60 * -0x2731 + lVar53;
    aiStack_350[lVar55] = (int)((ulong)(lVar37 + lVar51) >> 0xb);
    lVar64 = lVar72 + lVar77 * 0x16a1;
    aiStack_350[lVar55 + 0x40] = (int)((ulong)(lVar51 - lVar37) >> 0xb);
    aiStack_350[lVar55 + 8] = (int)((ulong)(lVar54 * 0x2731 + lVar64) >> 0xb);
    lVar51 = lVar79 + lVar74 * -0x2a87 + (long)(int)lVar68 * 0x22ab;
    aiStack_350[lVar55 + 0x38] = (int)((ulong)(lVar64 + lVar54 * -0x2731) >> 0xb);
    aiStack_350[lVar55 + 0x10] = (int)((ulong)(lVar58 + lVar51) >> 0xb);
    aiStack_350[lVar55 + 0x30] = (int)((ulong)(lVar51 - lVar58) >> 0xb);
    lVar58 = lVar79 + (long)(int)lVar68 * -0x22ab + (long)iVar66 * 0x7dc;
    aiStack_350[lVar55 + 0x18] = (int)((ulong)(lVar53 + lVar58) >> 0xb);
    aiStack_350[lVar55 + 0x28] = (int)((ulong)(lVar58 - lVar53) >> 0xb);
    aiStack_350[lVar55 + 0x20] = (int)((ulong)(lVar72 + lVar77 * 0x7ffffffd2be) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar56 = 0;
  lVar55 = lStack_360 + 0x80;
  lVar58 = 0x1d17;
  lVar51 = 0xf7a;
  lVar37 = 0x2c91;
  uVar50 = (ulong)uVar48;
  do {
    puVar39 = (undefined1 *)(*(long *)((long)plVar47 + lVar56) + uVar50);
    iVar1 = aiStack_350[lVar56 + 1];
    iVar66 = aiStack_350[lVar56] * 0x2000 + 0x20000;
    iVar71 = aiStack_350[lVar56 + 2];
    iVar2 = aiStack_350[lVar56 + 7];
    uVar29 = iVar66 + aiStack_350[lVar56 + 6] * 0x16a1;
    iVar76 = aiStack_350[lVar56 + 4];
    iVar14 = aiStack_350[lVar56 + 5];
    uVar15 = iVar66 + aiStack_350[lVar56 + 6] * -0x2d42;
    iVar19 = aiStack_350[lVar56 + 3] * -0x2731;
    iVar16 = uVar15 + (iVar71 - iVar76) * 0x16a1;
    iVar20 = (iVar14 + iVar1) * 0x1d17;
    iVar70 = (iVar2 + iVar1) * 0xf7a;
    iVar66 = (iVar76 + iVar71) * 0x2a87 + iVar76 * -0x7dc + uVar29;
    uVar30 = iVar19 + (iVar14 - iVar2) * -0x2c91;
    iVar60 = iVar20 + aiStack_350[lVar56 + 3] * 0x2731 + iVar70;
    uVar31 = uVar29 + (iVar76 + iVar71) * -0x2a87;
    iVar1 = iVar1 - (iVar14 + iVar2);
    *puVar39 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar60 + iVar66) >> 0x12) & 0x3ff));
    uVar52 = uVar30 + iVar20;
    puVar39[8] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar66 - iVar60) >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar55 + ((ulong)((uint)(iVar1 * 0x2731 + iVar16) >> 0x12) & 0x3ff));
    uVar18 = uVar31 + iVar71 * 0x22ab;
    puVar39[1] = bVar4;
    uVar32 = uVar29 + iVar71 * -0x22ab;
    puVar39[7] = *(undefined1 *)
                  (lVar55 + ((ulong)((uint)(iVar16 + iVar1 * -0x2731) >> 0x12) & 0x3ff));
    iVar70 = (iVar14 - iVar2) * 0x2c91 + iVar19 + iVar70;
    puVar39[2] = *(undefined1 *)(lVar55 + ((ulong)(uVar52 + uVar18 >> 0x12) & 0x3ff));
    iVar66 = uVar32 + iVar76 * 0x7dc;
    puVar39[6] = *(undefined1 *)(lVar55 + ((ulong)(uVar18 - uVar52 >> 0x12) & 0x3ff));
    puVar39[3] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar70 + iVar66) >> 0x12) & 0x3ff));
    puVar39[5] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar66 - iVar70) >> 0x12) & 0x3ff));
    puVar39[4] = *(undefined1 *)
                  (lVar55 + ((ulong)(uVar15 + (iVar71 - iVar76) * 0xfffd2be >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_230) {
    return;
  }
  uStack_354 = uVar48;
  ___stack_chk_fail();
  uStack_3c0 = (ulong)uVar31;
  uStack_3b8 = (ulong)uVar30;
  uStack_380 = 0xfffd2be;
  uStack_368 = 0x1081d7634;
  uStack_514 = (int)uVar50;
  lVar55 = 0;
  lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_520 = *(long *)(lVar58 + 0x1a8);
  lVar56 = *(long *)(lVar51 + 0x58);
  uStack_3b0 = (ulong)uVar18;
  uStack_3a8 = (ulong)uVar29;
  uStack_3a0 = (ulong)uVar52;
  uStack_398 = (ulong)(uint)(iVar71 * 0x22ab);
  uStack_390 = (ulong)bVar4;
  uStack_388 = (ulong)uVar32;
  uStack_378 = (ulong)uVar15;
  ppppuStack_370 = &pppuStack_1d0;
  do {
    psVar43 = (short *)(lVar56 + lVar55 * 2);
    psVar59 = (short *)(lVar37 + lVar55 * 2);
    uVar38 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    iVar70 = (int)psVar43[0x20] * (int)psVar59[0x20];
    lVar74 = uVar38 + (long)iVar70 * 0x249d;
    lVar77 = uVar38 + (long)iVar70 * -0xdfc;
    lVar53 = ((long)(int)psVar43[0x10] * (long)(int)psVar59[0x10] +
             (long)(int)psVar43[0x30] * (long)(int)psVar59[0x30]) * 0x1a9a;
    lVar51 = lVar53 + (long)(int)((long)(int)psVar43[0x10] * (long)(int)psVar59[0x10]) * 0x1071;
    lVar53 = lVar53 + (long)((int)psVar43[0x30] * (int)psVar59[0x30]) * -0x45a4;
    lVar58 = lVar51 + lVar74;
    lVar74 = lVar74 - lVar51;
    lVar51 = lVar53 + lVar77;
    lVar77 = lVar77 - lVar53;
    iVar60 = (int)psVar43[8] * (int)psVar59[8];
    lVar72 = (long)(int)psVar43[0x28] * (long)(int)psVar59[0x28];
    lVar79 = (long)(int)psVar43[0x18] * (long)(int)psVar59[0x18] +
             (long)(int)psVar43[0x38] * (long)(int)psVar59[0x38];
    lVar68 = (long)(int)psVar43[0x18] * (long)(int)psVar59[0x18] -
             (long)(int)psVar43[0x38] * (long)(int)psVar59[0x38];
    lVar54 = lVar68 * 0x9e3 + lVar72 * 0x2000;
    lVar53 = lVar79 * 0x1e6f + (long)iVar60 * 0x2cb3 + lVar54;
    lVar54 = (long)iVar60 * 0x714 + lVar79 * -0x1e6f + lVar54;
    lVar64 = lVar68 * -0x19e3 + lVar72 * 0x2000;
    iVar66 = (iVar60 - (int)lVar72) - (int)lVar68;
    lVar68 = ((long)iVar60 * 0x2853 + lVar79 * -0x12cf) - lVar64;
    lVar64 = (long)iVar60 * 0x148c + lVar79 * -0x12cf + lVar64;
    auStack_510[lVar55] = (uint)((ulong)(lVar53 + lVar58) >> 0xb);
    auStack_510[lVar55 + 0x48] = (uint)((ulong)(lVar58 - lVar53) >> 0xb);
    auStack_510[lVar55 + 8] = (uint)((ulong)(lVar68 + lVar51) >> 0xb);
    auStack_510[lVar55 + 0x40] = (uint)((ulong)(lVar51 - lVar68) >> 0xb);
    iVar60 = (int)(uVar38 + (long)iVar70 * -0x2d42 >> 0xb);
    auStack_510[lVar55 + 0x10] = iVar60 + iVar66 * 4;
    auStack_510[lVar55 + 0x38] = iVar60 + iVar66 * -4;
    auStack_510[lVar55 + 0x18] = (uint)((ulong)(lVar64 + lVar77) >> 0xb);
    auStack_510[lVar55 + 0x30] = (uint)((ulong)(lVar77 - lVar64) >> 0xb);
    auStack_510[lVar55 + 0x20] = (uint)((ulong)(lVar54 + lVar74) >> 0xb);
    auStack_510[lVar55 + 0x28] = (uint)((ulong)(lVar74 - lVar54) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar56 = 0;
  lVar55 = lStack_520 + 0x80;
  lVar58 = 0x1e6f;
  lVar51 = 0x2cb3;
  lVar37 = 0x714;
  uVar50 = uVar50 & 0xffffffff;
  do {
    uVar18 = auStack_510[lVar56 + 1];
    uVar48 = auStack_510[lVar56 + 4];
    uVar29 = auStack_510[lVar56 + 5];
    iVar66 = auStack_510[lVar56] * 0x2000 + 0x20000;
    iVar60 = iVar66 + uVar48 * 0x249d;
    iVar70 = iVar66 + uVar48 * -0xdfc;
    uVar15 = iVar66 + uVar48 * -0x2d42;
    iVar76 = (auStack_510[lVar56 + 6] + auStack_510[lVar56 + 2]) * 0x1a9a;
    iVar71 = iVar76 + auStack_510[lVar56 + 2] * 0x1071;
    iVar76 = iVar76 + auStack_510[lVar56 + 6] * -0x45a4;
    iVar66 = iVar71 + iVar60;
    uVar31 = iVar60 - iVar71;
    uVar48 = iVar76 + iVar70;
    iVar60 = auStack_510[lVar56 + 7] + auStack_510[lVar56 + 3];
    iVar1 = auStack_510[lVar56 + 3] - auStack_510[lVar56 + 7];
    uVar32 = iVar70 - iVar76;
    iVar70 = iVar1 * 0x9e3 + uVar29 * 0x2000;
    iVar71 = iVar60 * 0x1e6f + uVar18 * 0x2cb3 + iVar70;
    puVar39 = (undefined1 *)(*(long *)((long)plVar47 + lVar56) + uVar50);
    uVar52 = iVar60 * -0x1e6f + uVar18 * 0x714 + iVar70;
    iVar70 = iVar1 * -0x19e3 + uVar29 * 0x2000;
    *puVar39 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar71 + iVar66) >> 0x12) & 0x3ff));
    uVar30 = uVar18 * 0x2853 - (iVar60 * 0x12cf + iVar70);
    puVar39[9] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar66 - iVar71) >> 0x12) & 0x3ff));
    iVar1 = (uVar18 - uVar29) - iVar1;
    puVar39[1] = *(undefined1 *)(lVar55 + ((ulong)(uVar30 + uVar48 >> 0x12) & 0x3ff));
    puVar39[8] = *(undefined1 *)(lVar55 + ((ulong)(uVar48 - uVar30 >> 0x12) & 0x3ff));
    puVar39[2] = *(undefined1 *)(lVar55 + ((ulong)(uVar15 + iVar1 * 0x2000 >> 0x12) & 0x3ff));
    iVar70 = iVar60 * -0x12cf + uVar18 * 0x148c + iVar70;
    puVar39[7] = *(undefined1 *)(lVar55 + ((ulong)(uVar15 + iVar1 * -0x2000 >> 0x12) & 0x3ff));
    puVar39[3] = *(undefined1 *)(lVar55 + ((ulong)(iVar70 + uVar32 >> 0x12) & 0x3ff));
    puVar39[6] = *(undefined1 *)(lVar55 + ((ulong)(uVar32 - iVar70 >> 0x12) & 0x3ff));
    puVar39[4] = *(undefined1 *)(lVar55 + ((ulong)(uVar52 + uVar31 >> 0x12) & 0x3ff));
    puVar39[5] = *(undefined1 *)(lVar55 + ((ulong)(uVar31 - uVar52 >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d0) {
    return;
  }
  ___stack_chk_fail();
  uStack_580 = (ulong)uVar48;
  uStack_578 = (ulong)uVar30;
  uStack_570 = (ulong)(uVar18 - uVar29);
  uStack_568 = (ulong)uVar32;
  uStack_560 = (ulong)uVar52;
  uStack_558 = (ulong)uVar15;
  uStack_550 = (ulong)uVar18;
  puStack_548 = puVar39;
  uStack_540 = (ulong)uVar31;
  uStack_538 = 0x148c;
  ppppuStack_530 = &ppppuStack_370;
  uStack_528 = 0x1081d7a08;
  uStack_6fc = (int)uVar50;
  plStack_6f8 = plVar47;
  lVar55 = 0;
  lStack_590 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_708 = *(long *)(lVar58 + 0x1a8);
  lVar56 = *(long *)(lVar51 + 0x58);
  do {
    psVar43 = (short *)(lVar56 + lVar55 * 2);
    psVar59 = (short *)(lVar37 + lVar55 * 2);
    sVar63 = psVar59[0x10];
    sVar7 = psVar43[0x10];
    lVar77 = (long)(int)sVar7 * (long)(int)sVar63;
    lVar79 = (long)(int)psVar43[0x20] * (long)(int)psVar59[0x20];
    sVar8 = psVar59[0x30];
    sVar9 = psVar43[0x30];
    iVar60 = (int)sVar9 * (int)sVar8;
    lVar74 = (long)(int)psVar43[8] * (long)(int)psVar59[8];
    lVar69 = (long)(int)psVar43[0x18] * (long)(int)psVar59[0x18];
    lVar62 = lVar77 + (long)(int)sVar9 * (long)(int)sVar8;
    sVar10 = psVar59[0x28];
    sVar11 = psVar43[0x28];
    iVar70 = (int)sVar11 * (int)sVar10;
    sVar12 = psVar59[0x38];
    sVar13 = psVar43[0x38];
    lVar61 = lVar62 - (long)(int)psVar43[0x20] * (long)(int)psVar59[0x20];
    iVar66 = (int)sVar13 * (int)sVar12;
    lVar58 = lVar74 + (long)(int)psVar43[0x18] * (long)(int)psVar59[0x18];
    lVar53 = lVar58 * 0x1c6a;
    lVar67 = (lVar74 + (long)(int)sVar11 * (long)(int)sVar10) * 0x1574;
    lVar68 = (lVar58 + (long)(int)sVar11 * (long)(int)sVar10 + (long)(int)sVar13 * (long)(int)sVar12
             ) * 0xcc0;
    lVar51 = lVar68 + (lVar69 + (long)(int)sVar11 * (long)(int)sVar10) * -0x2537;
    lVar64 = (lVar69 + (long)(int)sVar13 * (long)(int)sVar12) * -0x398b;
    lVar58 = lVar67 + (long)iVar70 * -0x2626 + lVar51;
    lVar51 = lVar53 + (long)(int)lVar69 * 0x4258 + lVar64 + lVar51;
    uVar38 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    lVar72 = (lVar79 - (long)(int)sVar9 * (long)(int)sVar8) * 0x517e;
    lVar54 = lVar68 + (lVar74 + (long)(int)sVar13 * (long)(int)sVar12) * 3000;
    lVar53 = lVar53 + (long)(int)lVar74 * -0x1d8a + lVar67 + lVar54;
    lVar54 = lVar64 + (long)iVar66 * 0x4347 + lVar54;
    lVar67 = uVar38 + lVar61 * 0x2b6c;
    lVar64 = lVar72 + (long)iVar60 * 0x43b5 + lVar67;
    lVar68 = (long)(int)lVar69 * -0x2ef3 + (long)iVar70 * 0x200b + (long)iVar66 * -0x35ea + lVar68;
    aiStack_6f0[lVar55] = (int)((ulong)(lVar53 + lVar64) >> 0xb);
    lVar74 = lVar67 + (lVar79 - (long)(int)sVar7 * (long)(int)sVar63) * 0xdc9;
    lVar72 = lVar72 + (long)(int)lVar79 * -0x3a4c + lVar74;
    aiStack_6f0[lVar55 + 0x50] = (int)((ulong)(lVar64 - lVar53) >> 0xb);
    lVar67 = lVar67 + lVar62 * -0x24fb;
    aiStack_6f0[lVar55 + 8] = (int)((ulong)(lVar51 + lVar72) >> 0xb);
    iVar66 = (int)lVar77;
    lVar53 = (long)iVar66 * -0x2c83 + (long)(int)lVar79 * 0x3e39 + lVar67;
    lVar67 = lVar67 + (long)iVar60 * -0x193d;
    aiStack_6f0[lVar55 + 0x48] = (int)((ulong)(lVar72 - lVar51) >> 0xb);
    aiStack_6f0[lVar55 + 0x10] = (int)((ulong)(lVar58 + lVar67) >> 0xb);
    aiStack_6f0[lVar55 + 0x40] = (int)((ulong)(lVar67 - lVar58) >> 0xb);
    lVar74 = lVar74 + (long)iVar66 * -0x306f;
    aiStack_6f0[lVar55 + 0x18] = (int)((ulong)(lVar54 + lVar74) >> 0xb);
    aiStack_6f0[lVar55 + 0x38] = (int)((ulong)(lVar74 - lVar54) >> 0xb);
    aiStack_6f0[lVar55 + 0x20] = (int)((ulong)(lVar68 + lVar53) >> 0xb);
    aiStack_6f0[lVar55 + 0x30] = (int)((ulong)(lVar53 - lVar68) >> 0xb);
    aiStack_6f0[lVar55 + 0x28] = (int)(uVar38 + lVar61 * 0x7ffffffd2bf >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar56 = 0;
  lVar55 = lStack_708 + 0x80;
  do {
    puVar39 = (undefined1 *)(*(long *)((long)plVar47 + lVar56) + (uVar50 & 0xffffffff));
    iVar16 = aiStack_6f0[lVar56 + 1];
    iVar76 = aiStack_6f0[lVar56 + 4];
    iVar19 = aiStack_6f0[lVar56 + 5];
    iVar2 = aiStack_6f0[lVar56 + 6];
    iVar20 = aiStack_6f0[lVar56 + 7];
    iVar66 = aiStack_6f0[lVar56] * 0x2000 + 0x20000;
    iVar70 = (iVar76 - iVar2) * 0x517e;
    iVar14 = aiStack_6f0[lVar56 + 2];
    iVar3 = aiStack_6f0[lVar56 + 3];
    iVar1 = (iVar2 + iVar14) - iVar76;
    iVar71 = iVar66 + iVar1 * 0x2b6c;
    iVar17 = iVar71 + (iVar76 - iVar14) * 0xdc9;
    iVar60 = iVar70 + iVar2 * 0x43b5 + iVar71;
    iVar70 = iVar70 + iVar76 * -0x3a4c + iVar17;
    iVar71 = iVar71 + (iVar2 + iVar14) * -0x24fb;
    uVar29 = iVar66 + iVar1 * 0xfffd2bf;
    uVar46 = (ulong)uVar29;
    iVar17 = iVar17 + iVar14 * -0x306f;
    iVar1 = (iVar3 + iVar16 + iVar19 + iVar20) * 0xcc0;
    iVar21 = (iVar3 + iVar16) * 0x1c6a;
    uVar15 = iVar71 + iVar2 * -0x193d;
    uVar38 = (ulong)uVar15;
    iVar22 = (iVar19 + iVar16) * 0x1574;
    iVar2 = iVar1 + (iVar20 + iVar16) * 3000;
    uVar48 = iVar21 + iVar16 * -0x1d8a + iVar22;
    iVar71 = iVar14 * -0x2c83 + iVar76 * 0x3e39 + iVar71;
    iVar66 = uVar48 + iVar2;
    *puVar39 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar66 + iVar60) >> 0x12) & 0x3ff));
    iVar14 = (iVar20 + iVar3) * -0x398b;
    iVar76 = iVar1 + (iVar19 + iVar3) * -0x2537;
    uVar52 = iVar22 + iVar19 * -0x2626 + iVar76;
    iVar76 = iVar21 + iVar3 * 0x4258 + iVar14 + iVar76;
    puVar39[10] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar60 - iVar66) >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar55 + ((ulong)((uint)(iVar76 + iVar70) >> 0x12) & 0x3ff));
    uVar49 = (ulong)bVar4;
    puVar39[1] = bVar4;
    uVar18 = iVar14 + iVar20 * 0x4347 + iVar2;
    uVar41 = (ulong)uVar18;
    puVar39[9] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar70 - iVar76) >> 0x12) & 0x3ff));
    puVar39[2] = *(undefined1 *)(lVar55 + ((ulong)(uVar52 + uVar15 >> 0x12) & 0x3ff));
    puVar39[8] = *(undefined1 *)(lVar55 + ((ulong)(uVar15 - uVar52 >> 0x12) & 0x3ff));
    puVar39[3] = *(undefined1 *)(lVar55 + ((ulong)(uVar18 + iVar17 >> 0x12) & 0x3ff));
    iVar1 = iVar3 * -0x2ef3 + iVar19 * 0x200b + iVar20 * -0x35ea + iVar1;
    puVar39[7] = *(undefined1 *)(lVar55 + ((ulong)(iVar17 - uVar18 >> 0x12) & 0x3ff));
    puVar39[4] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar1 + iVar71) >> 0x12) & 0x3ff));
    puVar39[6] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar71 - iVar1) >> 0x12) & 0x3ff));
    puVar39[5] = *(undefined1 *)(lVar55 + ((ulong)(uVar29 >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_590) {
    return;
  }
  ___stack_chk_fail();
  uStack_770 = 0xffffca16;
  uStack_768 = 0x200b;
  uStack_760 = 0xffffd10d;
  uStack_758 = 0x4347;
  uStack_750 = 0xffffc675;
  uStack_748 = 0xffffd9da;
  uStack_740 = 0x4258;
  uStack_738 = 0xffffdac9;
  plStack_730 = plVar47;
  uStack_728 = (ulong)uVar48;
  ppppuStack_720 = &ppppuStack_530;
  uStack_718 = 0x1081d7eb8;
  uStack_90c = uVar52;
  uStack_908 = uVar46;
  lVar55 = 0;
  lStack_780 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_918 = *(long *)(uVar38 + 0x1a8);
  lVar56 = *(long *)(uVar41 + 0x58);
  do {
    psVar43 = (short *)(lVar56 + lVar55 * 2);
    psVar59 = (short *)(uVar49 + lVar55 * 2);
    uVar50 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    lVar61 = uVar50 + (long)((int)psVar59[0x20] * (int)psVar43[0x20]) * 0x2731;
    lVar77 = uVar50 + (long)((int)psVar59[0x20] * (int)psVar43[0x20]) * -0x2731;
    iVar66 = (int)((long)(int)psVar43[0x10] * (long)(int)psVar59[0x10]);
    lVar53 = (long)(int)psVar43[0x30] * (long)(int)psVar59[0x30];
    lVar51 = (long)(int)psVar43[0x10] * (long)(int)psVar59[0x10] -
             (long)(int)psVar43[0x30] * (long)(int)psVar59[0x30];
    lVar58 = uVar50 + lVar51 * 0x2000;
    lVar62 = uVar50 + lVar51 * -0x2000;
    lVar51 = (long)iVar66 * 0x2bb6 + lVar53 * 0x2000;
    lVar37 = lVar51 + lVar61;
    lVar61 = lVar61 - lVar51;
    lVar53 = (long)iVar66 * 0xbb6 + lVar53 * -0x2000;
    lVar51 = lVar53 + lVar77;
    lVar77 = lVar77 - lVar53;
    lVar74 = (long)(int)psVar43[8] * (long)(int)psVar59[8];
    sVar63 = psVar59[0x28];
    sVar7 = psVar43[0x28];
    lVar64 = (long)(int)sVar7 * (long)(int)sVar63;
    sVar8 = psVar59[0x38];
    sVar9 = psVar43[0x38];
    iVar66 = (int)sVar9 * (int)sVar8;
    iVar60 = (int)((long)(int)psVar43[0x18] * (long)(int)psVar59[0x18]);
    lVar53 = lVar74 + (long)(int)sVar7 * (long)(int)sVar63;
    lVar68 = (lVar53 + (long)(int)sVar9 * (long)(int)sVar8) * 0x1b8d;
    lVar54 = lVar68 + lVar53 * 0x85b;
    lVar53 = (long)(int)lVar74 * 0x8f7 + (long)iVar60 * 0x29cf + lVar54;
    lVar67 = (lVar64 + (long)(int)sVar9 * (long)(int)sVar8) * -0x2175;
    lVar54 = (long)iVar60 * -0x1151 + (long)(int)lVar64 * -0x2f50 + lVar67 + lVar54;
    lVar72 = lVar74 - (long)(int)sVar9 * (long)(int)sVar8;
    lVar79 = (long)(int)psVar43[0x18] * (long)(int)psVar59[0x18] -
             (long)(int)sVar7 * (long)(int)sVar63;
    lVar64 = (long)iVar66 * 0x32c6 + (long)iVar60 * -0x29cf + lVar67 + lVar68;
    lVar68 = (long)(int)lVar74 * -0x15a4 + (long)iVar60 * -0x1151 + (long)iVar66 * -0x3f74 + lVar68;
    auStack_900[lVar55] = (uint)((ulong)(lVar53 + lVar37) >> 0xb);
    lVar74 = (lVar72 + lVar79) * 0x1151;
    lVar72 = lVar74 + lVar72 * 0x187e;
    auStack_900[lVar55 + 0x58] = (uint)((ulong)(lVar37 - lVar53) >> 0xb);
    auStack_900[lVar55 + 8] = (uint)((ulong)(lVar72 + lVar58) >> 0xb);
    auStack_900[lVar55 + 0x50] = (uint)((ulong)(lVar58 - lVar72) >> 0xb);
    auStack_900[lVar55 + 0x10] = (uint)((ulong)(lVar54 + lVar51) >> 0xb);
    auStack_900[lVar55 + 0x48] = (uint)((ulong)(lVar51 - lVar54) >> 0xb);
    auStack_900[lVar55 + 0x18] = (uint)((ulong)(lVar64 + lVar77) >> 0xb);
    auStack_900[lVar55 + 0x40] = (uint)((ulong)(lVar77 - lVar64) >> 0xb);
    lVar74 = lVar74 + lVar79 * -0x3b21;
    auStack_900[lVar55 + 0x20] = (uint)((ulong)(lVar74 + lVar62) >> 0xb);
    auStack_900[lVar55 + 0x38] = (uint)((ulong)(lVar62 - lVar74) >> 0xb);
    auStack_900[lVar55 + 0x28] = (uint)((ulong)(lVar68 + lVar61) >> 0xb);
    auStack_900[lVar55 + 0x30] = (uint)((ulong)(lVar61 - lVar68) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar56 = 0;
  lVar55 = lStack_918 + 0x80;
  lVar58 = 0xffffd0b0;
  uVar50 = (ulong)uVar52;
  do {
    uVar18 = auStack_900[lVar56 + 1];
    uVar29 = auStack_900[lVar56 + 5];
    iVar66 = auStack_900[lVar56] * 0x2000 + 0x20000;
    iVar60 = iVar66 + auStack_900[lVar56 + 4] * 0x2731;
    uVar48 = auStack_900[lVar56 + 2];
    uVar15 = auStack_900[lVar56 + 3];
    uVar52 = auStack_900[lVar56 + 6];
    uVar30 = auStack_900[lVar56 + 7];
    iVar1 = iVar66 + auStack_900[lVar56 + 4] * -0x2731;
    iVar70 = iVar66 + (uVar48 - uVar52) * 0x2000;
    uVar31 = iVar66 + (uVar48 - uVar52) * -0x2000;
    iVar66 = uVar48 * 0x2bb6 + uVar52 * 0x2000;
    iVar71 = iVar66 + iVar60;
    uVar32 = iVar60 - iVar66;
    iVar60 = uVar48 * 0xbb6 + uVar52 * -0x2000;
    iVar66 = iVar60 + iVar1;
    uVar48 = (uVar29 + uVar18 + uVar30) * 0x1b8d;
    iVar76 = uVar48 + (uVar29 + uVar18) * 0x85b;
    uVar52 = iVar1 - iVar60;
    iVar60 = uVar15 * 0x29cf + uVar18 * 0x8f7 + iVar76;
    iVar14 = (uVar30 + uVar29) * -0x2175;
    iVar76 = uVar15 * -0x1151 + uVar29 * -0x2f50 + iVar14 + iVar76;
    lVar51 = *(long *)(uVar46 + lVar56);
    uVar29 = uVar15 - uVar29;
    uVar38 = (ulong)uVar29;
    puVar39 = (undefined1 *)(lVar51 + uVar50);
    *puVar39 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar60 + iVar71) >> 0x12) & 0x3ff));
    iVar2 = ((uVar18 - uVar30) + uVar29) * 0x1151;
    iVar1 = iVar2 + (uVar18 - uVar30) * 0x187e;
    puVar39[0xb] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar71 - iVar60) >> 0x12) & 0x3ff));
    puVar39[1] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar1 + iVar70) >> 0x12) & 0x3ff));
    iVar60 = uVar15 * -0x29cf + uVar30 * 0x32c6 + uVar48 + iVar14;
    puVar39[10] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar70 - iVar1) >> 0x12) & 0x3ff));
    puVar39[2] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar76 + iVar66) >> 0x12) & 0x3ff));
    puVar39[9] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar66 - iVar76) >> 0x12) & 0x3ff));
    iVar66 = uVar15 * -0x1151 + uVar18 * -0x15a4 + uVar30 * -0x3f74 + uVar48;
    puVar39[3] = *(undefined1 *)(lVar55 + ((ulong)(iVar60 + uVar52 >> 0x12) & 0x3ff));
    iVar2 = iVar2 + uVar29 * -0x3b21;
    puVar39[8] = *(undefined1 *)(lVar55 + ((ulong)(uVar52 - iVar60 >> 0x12) & 0x3ff));
    puVar39[4] = *(undefined1 *)(lVar55 + ((ulong)(iVar2 + uVar31 >> 0x12) & 0x3ff));
    puVar39[7] = *(undefined1 *)(lVar55 + ((ulong)(uVar31 - iVar2 >> 0x12) & 0x3ff));
    puVar39[5] = *(undefined1 *)(lVar55 + ((ulong)(iVar66 + uVar32 >> 0x12) & 0x3ff));
    puVar39[6] = *(undefined1 *)(lVar55 + ((ulong)(uVar32 - iVar66 >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_780) {
    return;
  }
  uVar41 = uStack_908;
  ___stack_chk_fail();
  uStack_980 = (ulong)uVar52;
  uStack_978 = (ulong)uVar48;
  puStack_970 = puVar39;
  uStack_968 = (ulong)uVar30;
  uStack_960 = (ulong)uVar18;
  uStack_958 = (ulong)uVar31;
  uStack_950 = (ulong)uVar32;
  uStack_948 = 0xffffc4df;
  uStack_940 = 0x187e;
  uStack_938 = 0x1151;
  ppppuStack_930 = &ppppuStack_720;
  uStack_928 = 0x1081d831c;
  uStack_b3c = (int)uVar50;
  uStack_b38 = uVar38;
  lVar55 = 0;
  lStack_990 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_b48 = *(long *)(lVar51 + 0x1a8);
  lVar56 = *(long *)(uVar41 + 0x58);
  do {
    psVar43 = (short *)(lVar56 + lVar55 * 2);
    psVar59 = (short *)(lVar58 + lVar55 * 2);
    sVar63 = psVar59[0x10];
    sVar7 = psVar43[0x10];
    iVar66 = (int)sVar7 * (int)sVar63;
    uVar41 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    lVar72 = (long)(int)psVar43[0x20] * (long)(int)psVar59[0x20] +
             (long)(int)psVar43[0x30] * (long)(int)psVar59[0x30];
    lVar69 = (long)(int)psVar43[0x20] * (long)(int)psVar59[0x20] -
             (long)(int)psVar43[0x30] * (long)(int)psVar59[0x30];
    lVar37 = uVar41 + lVar69 * 0x319;
    lVar51 = lVar72 * 0x24f9 + (long)iVar66 * 0x2bf1 + lVar37;
    lVar37 = (long)iVar66 * 0x100c + lVar72 * -0x24f9 + lVar37;
    lVar54 = uVar41 + lVar69 * 0xf95;
    lVar53 = (long)iVar66 * 0x21e0 + lVar72 * -0xa20 + lVar54;
    lVar54 = lVar72 * 0xa20 + (long)iVar66 * -0x2812 + lVar54;
    lVar68 = uVar41 + lVar69 * -0x1dfe;
    lVar64 = (long)iVar66 * -0x574 + lVar72 * -0xdf2 + lVar68;
    lVar68 = lVar72 * 0xdf2 + (long)iVar66 * -0x19b5 + lVar68;
    lVar62 = (long)(int)psVar43[8] * (long)(int)psVar59[8];
    sVar8 = psVar59[0x18];
    sVar9 = psVar43[0x18];
    lVar73 = (long)(int)sVar9 * (long)(int)sVar8;
    sVar10 = psVar59[0x28];
    sVar11 = psVar43[0x28];
    lVar78 = (long)(int)sVar11 * (long)(int)sVar10;
    sVar12 = psVar59[0x38];
    sVar13 = psVar43[0x38];
    lVar74 = (lVar62 + (long)(int)sVar9 * (long)(int)sVar8) * 0x2a50;
    lVar77 = (lVar62 + (long)(int)sVar11 * (long)(int)sVar10) * 0x253e;
    lVar67 = lVar62 + (long)(int)sVar13 * (long)(int)sVar12;
    lVar79 = lVar67 * 0x1e02;
    lVar72 = lVar74 + (long)(int)lVar62 * -0x40a5 + lVar77 + lVar79;
    lVar61 = (lVar73 + (long)(int)sVar11 * (long)(int)sVar10) * -0xad5;
    lVar75 = (lVar73 + (long)(int)sVar13 * (long)(int)sVar12) * -0x253e;
    lVar74 = lVar74 + (long)(int)lVar73 * 0x1acb + lVar61 + lVar75;
    lVar80 = (lVar78 + (long)(int)sVar13 * (long)(int)sVar12) * -0x1508;
    lVar77 = lVar61 + (long)(int)lVar78 * -0x324f + lVar77 + lVar80;
    iVar66 = (int)sVar13 * (int)sVar12;
    lVar79 = lVar75 + (long)iVar66 * 0x4694 + lVar79 + lVar80;
    lVar61 = (lVar78 - (long)(int)sVar9 * (long)(int)sVar8) * 0x1e02 + lVar67 * 0xad5;
    lVar67 = (long)(int)lVar62 * 0xa33 + (long)(int)lVar73 * -0xeea + lVar61;
    lVar61 = (long)(int)lVar78 * 0xc4e + (long)iVar66 * -0x37c1 + lVar61;
    aiStack_b30[lVar55] = (int)((ulong)(lVar72 + lVar51) >> 0xb);
    aiStack_b30[lVar55 + 0x60] = (int)((ulong)(lVar51 - lVar72) >> 0xb);
    aiStack_b30[lVar55 + 8] = (int)((ulong)(lVar74 + lVar53) >> 0xb);
    aiStack_b30[lVar55 + 0x58] = (int)((ulong)(lVar53 - lVar74) >> 0xb);
    aiStack_b30[lVar55 + 0x10] = (int)((ulong)(lVar77 + lVar37) >> 0xb);
    aiStack_b30[lVar55 + 0x50] = (int)((ulong)(lVar37 - lVar77) >> 0xb);
    aiStack_b30[lVar55 + 0x18] = (int)((ulong)(lVar79 + lVar64) >> 0xb);
    aiStack_b30[lVar55 + 0x48] = (int)((ulong)(lVar64 - lVar79) >> 0xb);
    aiStack_b30[lVar55 + 0x20] = (int)((ulong)(lVar67 + lVar68) >> 0xb);
    aiStack_b30[lVar55 + 0x40] = (int)((ulong)(lVar68 - lVar67) >> 0xb);
    aiStack_b30[lVar55 + 0x28] = (int)((ulong)(lVar61 + lVar54) >> 0xb);
    aiStack_b30[lVar55 + 0x38] = (int)((ulong)(lVar54 - lVar61) >> 0xb);
    aiStack_b30[lVar55 + 0x30] =
         (int)(uVar41 + (lVar69 - (long)(int)sVar7 * (long)(int)sVar63) * 0x2d41 >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar56 = 0;
  lVar55 = lStack_b48 + 0x80;
  lVar58 = 0xfffff116;
  do {
    iVar16 = aiStack_b30[lVar56 + 1];
    iVar66 = aiStack_b30[lVar56] * 0x2000 + 0x20000;
    iVar19 = aiStack_b30[lVar56 + 5];
    iVar20 = aiStack_b30[lVar56 + 7];
    iVar60 = aiStack_b30[lVar56 + 6] + aiStack_b30[lVar56 + 4];
    iVar33 = aiStack_b30[lVar56 + 4] - aiStack_b30[lVar56 + 6];
    iVar71 = iVar66 + iVar33 * 0x319;
    iVar14 = aiStack_b30[lVar56 + 2];
    iVar3 = aiStack_b30[lVar56 + 3];
    iVar76 = iVar66 + iVar33 * 0xf95;
    uVar48 = iVar60 * 0x24f9 + iVar14 * 0x2bf1 + iVar71;
    iVar2 = iVar66 + iVar33 * -0x1dfe;
    iVar70 = iVar60 * 0xa20 + iVar14 * -0x2812 + iVar76;
    uVar52 = iVar60 * 0xdf2 + iVar14 * -0x19b5 + iVar2;
    uVar49 = (ulong)uVar52;
    iVar17 = (iVar3 + iVar16) * 0x2a50;
    iVar71 = iVar60 * -0x24f9 + iVar14 * 0x100c + iVar71;
    iVar21 = (iVar19 + iVar16) * 0x253e;
    iVar22 = (iVar20 + iVar16) * 0x1e02;
    iVar76 = iVar60 * -0xa20 + iVar14 * 0x21e0 + iVar76;
    iVar1 = iVar17 + iVar16 * -0x40a5 + iVar21 + iVar22;
    iVar23 = (iVar19 + iVar3) * -0xad5;
    iVar2 = iVar60 * -0xdf2 + iVar14 * -0x574 + iVar2;
    iVar24 = (iVar20 + iVar3) * -0x253e;
    uVar18 = iVar17 + iVar3 * 0x1acb + iVar23 + iVar24;
    iVar17 = (iVar20 + iVar19) * -0x1508;
    iVar60 = iVar23 + iVar19 * -0x324f + iVar21 + iVar17;
    uVar29 = iVar24 + iVar20 * 0x4694 + iVar22 + iVar17;
    bVar4 = *(byte *)(lVar55 + ((ulong)(iVar1 + uVar48 >> 0x12) & 0x3ff));
    pbVar40 = (byte *)(*(long *)(uVar38 + lVar56) + (uVar50 & 0xffffffff));
    *pbVar40 = bVar4;
    pbVar40[0xc] = *(byte *)(lVar55 + ((ulong)(uVar48 - iVar1 >> 0x12) & 0x3ff));
    pbVar40[1] = *(byte *)(lVar55 + ((ulong)(uVar18 + iVar76 >> 0x12) & 0x3ff));
    uVar31 = (iVar19 - iVar3) * 0x1e02;
    uVar30 = uVar31 + (iVar20 + iVar16) * 0xad5;
    pbVar40[0xb] = *(byte *)(lVar55 + ((ulong)(iVar76 - uVar18 >> 0x12) & 0x3ff));
    bVar5 = *(byte *)(lVar55 + ((ulong)((uint)(iVar60 + iVar71) >> 0x12) & 0x3ff));
    pbVar40[2] = bVar5;
    pbVar40[10] = *(byte *)(lVar55 + ((ulong)((uint)(iVar71 - iVar60) >> 0x12) & 0x3ff));
    pbVar40[3] = *(byte *)(lVar55 + ((ulong)(uVar29 + iVar2 >> 0x12) & 0x3ff));
    uVar15 = iVar16 * 0xa33 + iVar3 * -0xeea + uVar30;
    uVar41 = (ulong)uVar15;
    pbVar40[9] = *(byte *)(lVar55 + ((ulong)(iVar2 - uVar29 >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar55 + ((ulong)(uVar15 + uVar52 >> 0x12) & 0x3ff));
    uVar46 = (ulong)bVar6;
    pbVar40[4] = bVar6;
    iVar60 = iVar19 * 0xc4e + iVar20 * -0x37c1 + uVar30;
    pbVar40[8] = *(byte *)(lVar55 + ((ulong)(uVar52 - uVar15 >> 0x12) & 0x3ff));
    pbVar40[5] = *(byte *)(lVar55 + ((ulong)((uint)(iVar60 + iVar70) >> 0x12) & 0x3ff));
    pbVar40[7] = *(byte *)(lVar55 + ((ulong)((uint)(iVar70 - iVar60) >> 0x12) & 0x3ff));
    pbVar40[6] = *(byte *)(lVar55 + ((ulong)((uint)(iVar66 + (iVar33 - iVar14) * 0x2d41) >> 0x12) &
                                    0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_990) {
    return;
  }
  ___stack_chk_fail();
  uStack_bb0 = 0xffffeaf8;
  uStack_ba8 = (ulong)bVar4;
  uStack_ba0 = (ulong)uVar18;
  uStack_b98 = (ulong)uVar29;
  uStack_b90 = (ulong)uVar48;
  uStack_b88 = 0xad5;
  uStack_b80 = (ulong)uVar31;
  uStack_b78 = 0x1e02;
  uStack_b70 = (ulong)bVar5;
  uStack_b68 = (ulong)uVar30;
  ppppuStack_b60 = &ppppuStack_930;
  uStack_b58 = 0x1081d8880;
  uStack_d8c = (int)pbVar40;
  lStack_d88 = lVar58;
  lVar55 = 0;
  lStack_bc0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_d98 = *(long *)(uVar41 + 0x1a8);
  lVar56 = *(long *)(uVar49 + 0x58);
  do {
    psVar43 = (short *)(lVar56 + lVar55 * 2);
    psVar59 = (short *)(uVar46 + lVar55 * 2);
    iVar60 = (int)psVar43[0x20] * (int)psVar59[0x20];
    uVar50 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    lVar79 = uVar50 + (long)iVar60 * 0x28c6;
    lVar67 = uVar50 + (long)iVar60 * 0xa12;
    lVar61 = uVar50 + (long)iVar60 * -0x1c37;
    iVar66 = (int)psVar43[0x30] * (int)psVar59[0x30];
    lVar53 = ((long)(int)psVar43[0x10] * (long)(int)psVar59[0x10] +
             (long)(int)psVar43[0x30] * (long)(int)psVar59[0x30]) * 0x2362;
    iVar70 = (int)((long)(int)psVar43[0x10] * (long)(int)psVar59[0x10]);
    lVar37 = lVar53 + (long)iVar70 * 0x8bd;
    lVar53 = lVar53 + (long)iVar66 * -0x3704;
    lVar54 = (long)iVar70 * 0x13a3 + (long)iVar66 * -0x2c1f;
    lVar51 = lVar37 + lVar79;
    lVar79 = lVar79 - lVar37;
    lVar37 = lVar53 + lVar67;
    lVar67 = lVar67 - lVar53;
    lVar53 = lVar54 + lVar61;
    lVar61 = lVar61 - lVar54;
    lVar74 = (long)(int)psVar43[8] * (long)(int)psVar59[8];
    sVar63 = psVar59[0x18];
    sVar7 = psVar43[0x18];
    lVar54 = (long)(int)sVar7 * (long)(int)sVar63;
    sVar8 = psVar59[0x28];
    sVar9 = psVar43[0x28];
    lVar68 = (long)(int)sVar9 * (long)(int)sVar8;
    lVar75 = (long)(int)psVar43[0x38] * (long)(int)psVar59[0x38];
    lVar62 = lVar74 + (long)(int)sVar9 * (long)(int)sVar8;
    lVar69 = (lVar74 + (long)(int)sVar7 * (long)(int)sVar63) * 0x2ab7;
    lVar78 = lVar62 * 0x2652;
    lVar64 = (lVar54 + (long)(int)sVar9 * (long)(int)sVar8) * -0x511 + lVar75 * -0x2000;
    iVar66 = (int)lVar54;
    lVar54 = lVar69 + (long)iVar66 * -0xd92 + lVar64;
    iVar70 = (int)lVar68;
    lVar64 = lVar78 + (long)iVar70 * -0x4bf7 + lVar64;
    lVar62 = lVar62 * 0x1814;
    lVar73 = lVar74 - (long)(int)sVar7 * (long)(int)sVar63;
    lVar77 = (lVar68 - (long)(int)sVar7 * (long)(int)sVar63) * 0x2cf8;
    lVar72 = lVar73 * 0xef2 + lVar75 * -0x2000;
    lVar68 = lVar62 + (long)(int)lVar74 * -0x21f5 + lVar72;
    lVar72 = lVar77 + (long)iVar66 * 0x1599 + lVar72;
    lVar74 = lVar69 + (long)(int)lVar74 * -0x2410 + lVar78 + lVar75 * 0x2000;
    lVar77 = lVar77 + (long)iVar70 * -0x361a + lVar62 + lVar75 * 0x2000;
    iVar66 = ((int)lVar73 - iVar70) + (int)lVar75;
    auStack_d80[lVar55] = (uint)((ulong)(lVar74 + lVar51) >> 0xb);
    auStack_d80[lVar55 + 0x68] = (uint)((ulong)(lVar51 - lVar74) >> 0xb);
    auStack_d80[lVar55 + 8] = (uint)((ulong)(lVar54 + lVar37) >> 0xb);
    auStack_d80[lVar55 + 0x60] = (uint)((ulong)(lVar37 - lVar54) >> 0xb);
    auStack_d80[lVar55 + 0x10] = (uint)((ulong)(lVar64 + lVar53) >> 0xb);
    auStack_d80[lVar55 + 0x58] = (uint)((ulong)(lVar53 - lVar64) >> 0xb);
    iVar60 = (int)(uVar50 + (long)iVar60 * -0x2d42 >> 0xb);
    auStack_d80[lVar55 + 0x18] = iVar60 + iVar66 * 4;
    auStack_d80[lVar55 + 0x50] = iVar60 + iVar66 * -4;
    auStack_d80[lVar55 + 0x20] = (uint)((ulong)(lVar77 + lVar61) >> 0xb);
    auStack_d80[lVar55 + 0x48] = (uint)((ulong)(lVar61 - lVar77) >> 0xb);
    auStack_d80[lVar55 + 0x28] = (uint)((ulong)(lVar72 + lVar67) >> 0xb);
    auStack_d80[lVar55 + 0x40] = (uint)((ulong)(lVar67 - lVar72) >> 0xb);
    auStack_d80[lVar55 + 0x30] = (uint)((ulong)(lVar68 + lVar79) >> 0xb);
    auStack_d80[lVar55 + 0x38] = (uint)((ulong)(lVar79 - lVar68) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar56 = 0;
  lVar55 = lStack_d98 + 0x80;
  uVar50 = (ulong)pbVar40 & 0xffffffff;
  do {
    uVar15 = auStack_d80[lVar56 + 1];
    iVar66 = auStack_d80[lVar56] * 0x2000 + 0x20000;
    uVar48 = auStack_d80[lVar56 + 4];
    uVar30 = auStack_d80[lVar56 + 5];
    iVar70 = iVar66 + uVar48 * 0x28c6;
    iVar14 = iVar66 + uVar48 * 0xa12;
    iVar71 = iVar66 + uVar48 * -0x1c37;
    uVar52 = auStack_d80[lVar56 + 2];
    uVar31 = auStack_d80[lVar56 + 3];
    uVar29 = auStack_d80[lVar56 + 6];
    uVar18 = auStack_d80[lVar56 + 7];
    iVar66 = iVar66 + uVar48 * -0x2d42;
    iVar1 = (uVar29 + uVar52) * 0x2362;
    iVar76 = iVar1 + uVar52 * 0x8bd;
    iVar1 = iVar1 + uVar29 * -0x3704;
    iVar2 = uVar52 * 0x13a3 + uVar29 * -0x2c1f;
    iVar60 = iVar76 + iVar70;
    uVar29 = iVar70 - iVar76;
    iVar70 = iVar2 + iVar71;
    uVar32 = iVar71 - iVar2;
    uVar46 = (ulong)uVar32;
    uVar48 = iVar1 + iVar14;
    uVar49 = (ulong)uVar48;
    iVar76 = (uVar31 + uVar15) * 0x2ab7;
    iVar2 = (uVar30 + uVar15) * 0x2652;
    iVar71 = iVar76 + uVar15 * -0x2410 + iVar2 + uVar18 * 0x2000;
    iVar14 = iVar14 - iVar1;
    iVar1 = (uVar30 + uVar31) * -0x511 + uVar18 * -0x2000;
    iVar76 = iVar76 + uVar31 * -0xd92 + iVar1;
    iVar1 = iVar2 + uVar30 * -0x4bf7 + iVar1;
    uVar52 = uVar30 * -0x361a + uVar18 * 0x2000;
    iVar2 = (uVar15 - uVar31) * 0xef2 + uVar18 * -0x2000;
    uVar18 = ((uVar15 - uVar31) - uVar30) + uVar18;
    uVar38 = (ulong)uVar18;
    puVar39 = (undefined1 *)(*(long *)(lVar58 + lVar56) + uVar50);
    *puVar39 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar71 + iVar60) >> 0x12) & 0x3ff));
    puVar39[0xd] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar60 - iVar71) >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar55 + ((ulong)(iVar76 + uVar48 >> 0x12) & 0x3ff));
    uVar41 = (ulong)bVar4;
    puVar39[1] = bVar4;
    puVar39[0xc] = *(undefined1 *)(lVar55 + ((ulong)(uVar48 - iVar76 >> 0x12) & 0x3ff));
    puVar39[2] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar1 + iVar70) >> 0x12) & 0x3ff));
    iVar71 = (uVar30 + uVar15) * 0x1814;
    iVar76 = (uVar30 - uVar31) * 0x2cf8;
    puVar39[0xb] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar70 - iVar1) >> 0x12) & 0x3ff));
    iVar60 = uVar52 + iVar76 + iVar71;
    puVar39[3] = *(undefined1 *)(lVar55 + ((ulong)(iVar66 + uVar18 * 0x2000 >> 0x12) & 0x3ff));
    puVar39[10] = *(undefined1 *)(lVar55 + ((ulong)(iVar66 + uVar18 * -0x2000 >> 0x12) & 0x3ff));
    puVar39[4] = *(undefined1 *)(lVar55 + ((ulong)(iVar60 + uVar32 >> 0x12) & 0x3ff));
    iVar66 = iVar71 + uVar15 * -0x21f5 + iVar2;
    iVar2 = iVar76 + uVar31 * 0x1599 + iVar2;
    puVar39[9] = *(undefined1 *)(lVar55 + ((ulong)(uVar32 - iVar60 >> 0x12) & 0x3ff));
    puVar39[5] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar2 + iVar14) >> 0x12) & 0x3ff));
    puVar39[8] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar14 - iVar2) >> 0x12) & 0x3ff));
    puVar39[6] = *(undefined1 *)(lVar55 + ((ulong)(iVar66 + uVar29 >> 0x12) & 0x3ff));
    puVar39[7] = *(undefined1 *)(lVar55 + ((ulong)(uVar29 - iVar66 >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_bc0) {
    return;
  }
  ___stack_chk_fail();
  uStack_e00 = (ulong)uVar31;
  uStack_df8 = (ulong)uVar29;
  uStack_df0 = 0x1599;
  uStack_de8 = 0xffffc9e6;
  uStack_de0 = 0x2cf8;
  uStack_dd8 = 0xffffb409;
  uStack_dd0 = 0xfffff26e;
  uStack_dc8 = 0xfffffaef;
  lStack_dc0 = lVar58;
  uStack_db8 = (ulong)uVar52;
  ppppuStack_db0 = &ppppuStack_b60;
  uStack_da8 = 0x1081d8d6c;
  uStack_100c = (int)uVar50;
  uStack_1008 = uVar46;
  uStack_ff8 = uVar49;
  lVar55 = 0;
  lStack_e10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1018 = *(long *)(uVar38 + 0x1a8);
  lStack_1000 = *(long *)(uVar41 + 0x58);
  do {
    psVar43 = (short *)(lStack_1000 + lVar55 * 2);
    psVar59 = (short *)(uVar49 + lVar55 * 2);
    lVar37 = (long)(int)psVar43[0x10] * (long)(int)psVar59[0x10];
    uVar38 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    iVar60 = (int)psVar43[0x30] * (int)psVar59[0x30];
    lVar53 = uVar38 + (long)iVar60 * -0xdfc;
    lVar54 = uVar38 + (long)iVar60 * 0x249d;
    lVar77 = lVar37 - (long)(int)psVar43[0x20] * (long)(int)psVar59[0x20];
    lVar64 = lVar37 + (long)(int)psVar43[0x20] * (long)(int)psVar59[0x20];
    lVar56 = lVar77 * 0x176 + lVar64 * 0x2ace + lVar54;
    lVar58 = (long)(int)lVar37 * 0x2e13 + lVar64 * -0x2ace + lVar77 * 0x176 + lVar53;
    lVar51 = lVar54 + lVar77 * -0xcc7 + lVar64 * -0x1182;
    lVar37 = lVar64 * 0x1182 + (long)(int)lVar37 * -0x2e13 + lVar77 * -0xcc7 + lVar53;
    lVar53 = lVar77 * 0xb50 + lVar64 * 0x194c + lVar53;
    lVar54 = lVar54 + lVar64 * -0x194c + lVar77 * 0xb50;
    sVar63 = psVar59[8];
    sVar7 = psVar43[8];
    lVar72 = (long)(int)sVar7 * (long)(int)sVar63;
    sVar8 = psVar59[0x28];
    sVar9 = psVar43[0x28];
    iVar76 = (int)sVar9 * (int)sVar8;
    sVar10 = psVar59[0x38];
    sVar11 = psVar43[0x38];
    iVar66 = (int)sVar11 * (int)sVar10;
    lVar79 = lVar72 - (long)(int)sVar11 * (long)(int)sVar10;
    lVar68 = lVar79 * 0x2d02 + (long)iVar76 * 0x2731;
    iVar71 = (int)((long)(int)psVar43[0x18] * (long)(int)psVar59[0x18]);
    lVar64 = lVar68 + (long)iVar66 * 0x4ea3 + (long)iVar71 * 0x2b0a;
    iVar70 = (int)lVar72;
    lVar68 = (long)iVar70 * -0x2399 + (long)iVar71 * -0x1a9a + lVar68;
    lVar67 = (long)(int)psVar43[0x18] * (long)(int)psVar59[0x18] -
             (long)(int)sVar11 * (long)(int)sVar10;
    lVar74 = (lVar72 + (long)(int)sVar11 * (long)(int)sVar10) * 0x1268;
    lVar72 = (long)iVar70 * 0xf39 + (long)iVar71 * -0x1a9a + (long)iVar76 * -0x2731 + lVar74;
    lVar74 = (long)iVar71 * -0x2b0a + (long)iVar76 * 0x2731 + (long)iVar66 * -0x1bd1 + lVar74;
    auStack_ff0[lVar55] = (uint)((ulong)(lVar64 + lVar56) >> 0xb);
    auStack_ff0[lVar55 + 0x70] = (uint)((ulong)(lVar56 - lVar64) >> 0xb);
    lVar64 = (lVar67 + (long)(int)sVar7 * (long)(int)sVar63) * 0x1a9a;
    lVar56 = lVar64 + (long)iVar70 * 0x1071;
    auStack_ff0[lVar55 + 8] = (uint)((ulong)(lVar56 + lVar53) >> 0xb);
    auStack_ff0[lVar55 + 0x68] = (uint)((ulong)(lVar53 - lVar56) >> 0xb);
    lVar53 = uVar38 + (long)iVar60 * -0x2d42;
    lVar79 = lVar79 - (long)(int)sVar9 * (long)(int)sVar8;
    lVar56 = lVar53 + lVar77 * 0x16a0;
    auStack_ff0[lVar55 + 0x10] = (uint)((ulong)(lVar79 * 0x2731 + lVar56) >> 0xb);
    auStack_ff0[lVar55 + 0x60] = (uint)((ulong)(lVar56 + lVar79 * -0x2731) >> 0xb);
    auStack_ff0[lVar55 + 0x18] = (uint)((ulong)(lVar72 + lVar58) >> 0xb);
    auStack_ff0[lVar55 + 0x58] = (uint)((ulong)(lVar58 - lVar72) >> 0xb);
    lVar64 = lVar64 + lVar67 * -0x45a4;
    auStack_ff0[lVar55 + 0x20] = (uint)((ulong)(lVar64 + lVar54) >> 0xb);
    auStack_ff0[lVar55 + 0x50] = (uint)((ulong)(lVar54 - lVar64) >> 0xb);
    auStack_ff0[lVar55 + 0x28] = (uint)((ulong)(lVar74 + lVar51) >> 0xb);
    auStack_ff0[lVar55 + 0x48] = (uint)((ulong)(lVar51 - lVar74) >> 0xb);
    auStack_ff0[lVar55 + 0x30] = (uint)((ulong)(lVar68 + lVar37) >> 0xb);
    auStack_ff0[lVar55 + 0x40] = (uint)((ulong)(lVar37 - lVar68) >> 0xb);
    auStack_ff0[lVar55 + 0x38] = (uint)((ulong)(lVar53 + lVar77 * 0x7ffffffd2c0) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar56 = 0;
  lVar55 = lStack_1018 + 0x80;
  uVar50 = uVar50 & 0xffffffff;
  do {
    uVar29 = auStack_ff0[lVar56 + 1];
    uVar38 = (ulong)uVar29;
    puVar39 = (undefined1 *)(*(long *)(uVar46 + lVar56) + uVar50);
    iVar66 = auStack_ff0[lVar56] * 0x2000 + 0x20000;
    uVar48 = auStack_ff0[lVar56 + 6];
    uVar15 = auStack_ff0[lVar56 + 7];
    iVar2 = iVar66 + uVar48 * -0xdfc;
    iVar16 = iVar66 + uVar48 * 0x249d;
    uVar52 = auStack_ff0[lVar56 + 2];
    uVar30 = auStack_ff0[lVar56 + 3];
    uVar18 = auStack_ff0[lVar56 + 5];
    iVar66 = iVar66 + uVar48 * -0x2d42;
    iVar20 = uVar52 - auStack_ff0[lVar56 + 4];
    iVar60 = auStack_ff0[lVar56 + 4] + uVar52;
    iVar70 = iVar20 * 0x176 + iVar60 * 0x2ace + iVar16;
    iVar71 = iVar20 * -0xcc7 + iVar60 * -0x1182 + iVar16;
    iVar76 = uVar52 * 0x2e13 + iVar60 * -0x2ace + iVar20 * 0x176 + iVar2;
    iVar1 = iVar20 * 0xb50 + iVar60 * 0x194c + iVar2;
    iVar19 = iVar66 + iVar20 * 0x16a0;
    iVar2 = iVar60 * 0x1182 + uVar52 * -0x2e13 + iVar20 * -0xcc7 + iVar2;
    iVar14 = uVar18 * 0x2731 + (uVar29 - uVar15) * 0x2d02;
    uVar48 = iVar16 + iVar60 * -0x194c + iVar20 * 0xb50;
    uVar49 = (ulong)uVar48;
    iVar60 = iVar14 + uVar30 * 0x2b0a + uVar15 * 0x4ea3;
    iVar16 = (uVar29 - uVar15) - uVar18;
    uVar25 = ((uVar30 - uVar15) + uVar29) * 0x1a9a;
    *puVar39 = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar60 + iVar70) >> 0x12) & 0x3ff));
    uVar31 = uVar25 + uVar29 * 0x1071;
    puVar39[0xe] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar70 - iVar60) >> 0x12) & 0x3ff));
    puVar39[1] = *(undefined1 *)(lVar55 + ((ulong)(uVar31 + iVar1 >> 0x12) & 0x3ff));
    puVar39[0xd] = *(undefined1 *)(lVar55 + ((ulong)(iVar1 - uVar31 >> 0x12) & 0x3ff));
    puVar39[2] = *(undefined1 *)
                  (lVar55 + ((ulong)((uint)(iVar16 * 0x2731 + iVar19) >> 0x12) & 0x3ff));
    uVar26 = (uVar15 + uVar29) * 0x1268;
    uVar52 = uVar30 * -0x1a9a + uVar29 * 0xf39 + uVar18 * -0x2731 + uVar26;
    puVar39[0xc] = *(undefined1 *)
                    (lVar55 + ((ulong)((uint)(iVar19 + iVar16 * -0x2731) >> 0x12) & 0x3ff));
    uVar32 = uVar25 + (uVar30 - uVar15) * -0x45a4;
    uVar42 = (ulong)uVar32;
    puVar39[3] = *(undefined1 *)(lVar55 + ((ulong)(uVar52 + iVar76 >> 0x12) & 0x3ff));
    uVar18 = uVar18 * 0x2731 + uVar30 * -0x2b0a;
    uVar41 = (ulong)uVar18;
    puVar39[0xb] = *(undefined1 *)(lVar55 + ((ulong)(iVar76 - uVar52 >> 0x12) & 0x3ff));
    puVar39[4] = *(undefined1 *)(lVar55 + ((ulong)(uVar32 + uVar48 >> 0x12) & 0x3ff));
    iVar60 = uVar18 + uVar15 * -0x1bd1 + uVar26;
    puVar39[10] = *(undefined1 *)(lVar55 + ((ulong)(uVar48 - uVar32 >> 0x12) & 0x3ff));
    puVar39[5] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar60 + iVar71) >> 0x12) & 0x3ff));
    iVar14 = uVar30 * -0x1a9a + uVar29 * -0x2399 + iVar14;
    puVar39[9] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar71 - iVar60) >> 0x12) & 0x3ff));
    puVar39[6] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar14 + iVar2) >> 0x12) & 0x3ff));
    puVar39[8] = *(undefined1 *)(lVar55 + ((ulong)((uint)(iVar2 - iVar14) >> 0x12) & 0x3ff));
    puVar39[7] = *(undefined1 *)
                  (lVar55 + ((ulong)((uint)(iVar66 + iVar20 * 0xfffd2c0) >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x78);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e10) {
    return;
  }
  ___stack_chk_fail();
  uStack_1080 = 0xf39;
  uStack_1078 = 0x1268;
  uStack_1070 = 0xffffdc67;
  uStack_1068 = 0x1a9a;
  uStack_1060 = uVar46;
  uStack_1058 = (ulong)uVar31;
  uStack_1050 = 0xffffba5c;
  uStack_1048 = (ulong)uVar25;
  uStack_1040 = (ulong)uVar26;
  uStack_1038 = (ulong)uVar52;
  ppppuStack_1030 = &ppppuStack_db0;
  uStack_1028 = 0x1081d92d8;
  uStack_12b4 = (int)uVar50;
  uStack_12b0 = uVar38;
  uStack_12a0 = uVar42;
  lVar55 = 0;
  lStack_1090 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_12c0 = *(long *)(uVar41 + 0x1a8);
  lStack_12a8 = *(long *)(uVar49 + 0x58);
  do {
    psVar43 = (short *)(lStack_12a8 + lVar55 * 2);
    psVar59 = (short *)(uVar42 + lVar55 * 2);
    iVar66 = (int)psVar43[0x20] * (int)psVar59[0x20];
    uVar41 = (long)(int)*psVar59 * (long)(int)*psVar43 * 0x2000 | 0x400;
    lStack_1298 = uVar41 + (long)iVar66 * 0x29cf;
    lVar61 = uVar41 + (long)iVar66 * -0x29cf;
    lVar62 = uVar41 + (long)iVar66 * 0x1151;
    lVar67 = uVar41 + (long)iVar66 * -0x1151;
    iVar60 = (int)psVar43[0x30] * (int)psVar59[0x30];
    lVar37 = (long)(int)psVar43[0x10] * (long)(int)psVar59[0x10] -
             (long)(int)psVar43[0x30] * (long)(int)psVar59[0x30];
    lVar53 = lVar37 * 0x8d4;
    lVar37 = lVar37 * 0x2c63;
    lVar58 = lVar37 + (long)iVar60 * 0x5203;
    iVar66 = (int)((long)(int)psVar43[0x10] * (long)(int)psVar59[0x10]);
    lVar51 = lVar53 + (long)iVar66 * 0x1ccd;
    lVar37 = lVar37 + (long)iVar66 * -0x133e;
    lVar53 = lVar53 + (long)iVar60 * -0x1050;
    lVar56 = lVar58 + lStack_1298;
    lStack_1298 = lStack_1298 - lVar58;
    lVar58 = lVar51 + lVar62;
    lVar62 = lVar62 - lVar51;
    lVar51 = lVar37 + lVar67;
    lVar67 = lVar67 - lVar37;
    lVar37 = lVar53 + lVar61;
    lVar61 = lVar61 - lVar53;
    lVar54 = (long)(int)psVar43[8] * (long)(int)psVar59[8];
    sVar63 = psVar59[0x18];
    sVar7 = psVar43[0x18];
    lVar78 = (long)(int)sVar7 * (long)(int)sVar63;
    sVar8 = psVar59[0x28];
    sVar9 = psVar43[0x28];
    sVar10 = psVar59[0x38];
    sVar11 = psVar43[0x38];
    lVar69 = lVar54 + (long)(int)sVar9 * (long)(int)sVar8;
    lVar64 = (lVar54 + (long)(int)sVar7 * (long)(int)sVar63) * 0x2b4e;
    lVar81 = lVar69 * 0x27e9;
    lVar74 = (lVar54 + (long)(int)sVar11 * (long)(int)sVar10) * 0x22fc;
    lVar73 = (lVar54 - (long)(int)sVar11 * (long)(int)sVar10) * 0x1cb6;
    lVar69 = lVar69 * 0x1555;
    lVar68 = (lVar54 - (long)(int)sVar7 * (long)(int)sVar63) * 0xd23;
    lVar53 = lVar64 + (long)(int)lVar54 * -0x492a + lVar81 + lVar74;
    lVar54 = lVar68 + (long)(int)lVar54 * -0x3abe + lVar69 + lVar73;
    lVar72 = (lVar78 + (long)(int)sVar9 * (long)(int)sVar8) * 0x470;
    iVar70 = (int)sVar11;
    iVar60 = (int)sVar10;
    lVar77 = lVar78 + (long)iVar70 * (long)iVar60;
    lVar75 = lVar77 * -0x1555;
    lVar64 = lVar64 + (long)(int)lVar78 * 0x24d + lVar72 + lVar75;
    lVar80 = (long)(int)sVar9 * (long)(int)sVar8;
    lVar79 = (lVar80 - (long)(int)sVar7 * (long)(int)sVar63) * 0x2d09;
    lVar77 = lVar77 * -0x27e9;
    lVar68 = lVar68 + (long)(int)lVar78 * 0x3f1a + lVar79 + lVar77;
    lVar78 = (lVar80 + (long)iVar70 * (long)iVar60) * -0x2b4e;
    lVar72 = lVar72 + (long)(int)lVar80 * -0x2406 + lVar81 + lVar78;
    iVar66 = (int)((long)iVar70 * (long)iVar60);
    lVar74 = lVar75 + (long)iVar66 * 0x2218 + lVar74 + lVar78;
    lVar75 = ((long)iVar70 * (long)iVar60 - (long)(int)sVar9 * (long)(int)sVar8) * 0xd23;
    lVar77 = lVar77 + (long)iVar66 * 0x6485 + lVar73 + lVar75;
    lVar79 = lVar79 + (long)(int)lVar80 * -0x1886 + lVar69 + lVar75;
    aiStack_1290[lVar55] = (int)((ulong)(lVar53 + lVar56) >> 0xb);
    aiStack_1290[lVar55 + 0x78] = (int)((ulong)(lVar56 - lVar53) >> 0xb);
    aiStack_1290[lVar55 + 8] = (int)((ulong)(lVar64 + lVar58) >> 0xb);
    aiStack_1290[lVar55 + 0x70] = (int)((ulong)(lVar58 - lVar64) >> 0xb);
    aiStack_1290[lVar55 + 0x10] = (int)((ulong)(lVar72 + lVar51) >> 0xb);
    aiStack_1290[lVar55 + 0x68] = (int)((ulong)(lVar51 - lVar72) >> 0xb);
    aiStack_1290[lVar55 + 0x18] = (int)((ulong)(lVar74 + lVar37) >> 0xb);
    aiStack_1290[lVar55 + 0x60] = (int)((ulong)(lVar37 - lVar74) >> 0xb);
    aiStack_1290[lVar55 + 0x20] = (int)((ulong)(lVar77 + lVar61) >> 0xb);
    aiStack_1290[lVar55 + 0x58] = (int)((ulong)(lVar61 - lVar77) >> 0xb);
    aiStack_1290[lVar55 + 0x28] = (int)((ulong)(lVar79 + lVar67) >> 0xb);
    aiStack_1290[lVar55 + 0x50] = (int)((ulong)(lVar67 - lVar79) >> 0xb);
    aiStack_1290[lVar55 + 0x30] = (int)((ulong)(lVar68 + lVar62) >> 0xb);
    aiStack_1290[lVar55 + 0x48] = (int)((ulong)(lVar62 - lVar68) >> 0xb);
    aiStack_1290[lVar55 + 0x38] = (int)((ulong)(lVar54 + lStack_1298) >> 0xb);
    aiStack_1290[lVar55 + 0x40] = (int)((ulong)(lStack_1298 - lVar54) >> 0xb);
    lVar55 = lVar55 + 1;
  } while ((int)lVar55 != 8);
  lVar56 = 0;
  lVar55 = lStack_12c0 + 0x80;
  do {
    iVar16 = aiStack_1290[lVar56 + 1];
    iVar71 = aiStack_1290[lVar56 + 4];
    iVar3 = aiStack_1290[lVar56 + 5];
    iVar66 = aiStack_1290[lVar56] * 0x2000 + 0x20000;
    iVar60 = iVar66 + iVar71 * 0x29cf;
    iVar34 = iVar66 + iVar71 * -0x29cf;
    iVar76 = aiStack_1290[lVar56 + 2];
    iVar17 = aiStack_1290[lVar56 + 3];
    iVar70 = iVar66 + iVar71 * 0x1151;
    iVar1 = aiStack_1290[lVar56 + 6];
    iVar21 = aiStack_1290[lVar56 + 7];
    iVar20 = (iVar76 - iVar1) * 0x8d4;
    iVar66 = iVar66 + iVar71 * -0x1151;
    iVar19 = (iVar76 - iVar1) * 0x2c63;
    iVar2 = iVar19 + iVar1 * 0x5203;
    iVar14 = iVar20 + iVar76 * 0x1ccd;
    iVar19 = iVar19 + iVar76 * -0x133e;
    iVar20 = iVar20 + iVar1 * -0x1050;
    iVar71 = iVar2 + iVar60;
    iVar60 = iVar60 - iVar2;
    iVar76 = iVar14 + iVar70;
    iVar70 = iVar70 - iVar14;
    iVar1 = iVar19 + iVar66;
    iVar66 = iVar66 - iVar19;
    iVar19 = (iVar17 + iVar16) * 0x2b4e;
    iVar22 = (iVar3 + iVar16) * 0x27e9;
    iVar23 = (iVar21 + iVar16) * 0x22fc;
    iVar2 = iVar20 + iVar34;
    iVar24 = (iVar16 - iVar21) * 0x1cb6;
    uVar15 = (iVar3 + iVar16) * 0x1555;
    iVar33 = (iVar16 - iVar17) * 0xd23;
    iVar34 = iVar34 - iVar20;
    iVar14 = iVar19 + iVar16 * -0x492a + iVar22 + iVar23;
    iVar16 = iVar33 + iVar16 * -0x3abe + uVar15 + iVar24;
    iVar20 = (iVar3 + iVar17) * 0x470;
    iVar27 = (iVar21 + iVar17) * -0x1555;
    iVar19 = iVar19 + iVar17 * 0x24d + iVar20 + iVar27;
    iVar28 = (iVar21 + iVar3) * -0x2b4e;
    uVar48 = iVar20 + iVar3 * -0x2406 + iVar22 + iVar28;
    iVar20 = iVar27 + iVar21 * 0x2218 + iVar23 + iVar28;
    pbVar40 = (byte *)(*(long *)(uVar38 + lVar56) + (uVar50 & 0xffffffff));
    bVar4 = *(byte *)(lVar55 + ((ulong)((uint)(iVar14 + iVar71) >> 0x12) & 0x3ff));
    *pbVar40 = bVar4;
    pbVar40[0xf] = *(byte *)(lVar55 + ((ulong)((uint)(iVar71 - iVar14) >> 0x12) & 0x3ff));
    pbVar40[1] = *(byte *)(lVar55 + ((ulong)((uint)(iVar19 + iVar76) >> 0x12) & 0x3ff));
    uVar30 = (iVar21 + iVar17) * -0x27e9;
    plVar47 = (long *)0x6485;
    uVar18 = uVar30 + iVar21 * 0x6485;
    iVar71 = (iVar21 - iVar3) * 0xd23;
    uVar52 = uVar18 + iVar24 + iVar71;
    uVar49 = (ulong)uVar52;
    pbVar40[0xe] = *(byte *)(lVar55 + ((ulong)((uint)(iVar76 - iVar19) >> 0x12) & 0x3ff));
    bVar5 = *(byte *)(lVar55 + ((ulong)(uVar48 + iVar1 >> 0x12) & 0x3ff));
    pbVar40[2] = bVar5;
    pbVar40[0xd] = *(byte *)(lVar55 + ((ulong)(iVar1 - uVar48 >> 0x12) & 0x3ff));
    pbVar40[3] = *(byte *)(lVar55 + ((ulong)((uint)(iVar20 + iVar2) >> 0x12) & 0x3ff));
    pbVar40[0xc] = *(byte *)(lVar55 + ((ulong)((uint)(iVar2 - iVar20) >> 0x12) & 0x3ff));
    pbVar40[4] = *(byte *)(lVar55 + ((ulong)(uVar52 + iVar34 >> 0x12) & 0x3ff));
    uVar29 = iVar33 + iVar17 * 0x3f1a;
    uVar41 = (ulong)uVar29;
    iVar76 = (iVar3 - iVar17) * 0x2d09;
    lVar58 = 0xffffe77a;
    iVar71 = iVar76 + iVar3 * -0x1886 + uVar15 + iVar71;
    pbVar40[0xb] = *(byte *)(lVar55 + ((ulong)(iVar34 - uVar52 >> 0x12) & 0x3ff));
    pbVar40[5] = *(byte *)(lVar55 + ((ulong)((uint)(iVar71 + iVar66) >> 0x12) & 0x3ff));
    iVar76 = uVar29 + iVar76 + uVar30;
    pbVar40[10] = *(byte *)(lVar55 + ((ulong)((uint)(iVar66 - iVar71) >> 0x12) & 0x3ff));
    pbVar40[6] = *(byte *)(lVar55 + ((ulong)((uint)(iVar76 + iVar70) >> 0x12) & 0x3ff));
    pbVar40[9] = *(byte *)(lVar55 + ((ulong)((uint)(iVar70 - iVar76) >> 0x12) & 0x3ff));
    pbVar40[7] = *(byte *)(lVar55 + ((ulong)((uint)(iVar16 + iVar60) >> 0x12) & 0x3ff));
    pbVar40[8] = *(byte *)(lVar55 + ((ulong)((uint)(iVar60 - iVar16) >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1090) {
    return;
  }
  uVar50 = uStack_12b0;
  ___stack_chk_fail();
  uStack_1310 = (ulong)uVar48;
  uStack_1308 = (ulong)bVar4;
  uStack_1300 = (ulong)uVar18;
  uStack_12f8 = (ulong)uVar30;
  uStack_12f0 = uVar49;
  uStack_12e8 = (ulong)bVar5;
  uStack_12e0 = (ulong)uVar15;
  uStack_12d8 = 0xd23;
  ppppuStack_12d0 = &ppppuStack_1030;
  pcStack_12c8 = FUN_1081d98e8;
  lStack_1318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar55 = *(long *)(uVar41 + 0x1a8);
  psVar43 = (short *)(lVar58 + 0x70);
  puVar57 = auStack_1398;
  uVar48 = 9;
  psVar59 = *(short **)(pbVar40 + 0x58);
  do {
    if (uVar48 != 5) {
      sVar63 = psVar43[-0x20];
      if (psVar43[-0x30] == 0 && psVar43[-0x28] == 0) {
        if (sVar63 != 0) {
LAB_1081d9990:
          iVar66 = 0;
          goto LAB_1081d99a0;
        }
        if (((psVar43[-0x10] != 0) || (psVar43[-8] != 0)) || (*psVar43 != 0)) {
          sVar63 = 0;
          goto LAB_1081d9990;
        }
        uVar52 = (int)psVar43[-0x38] * (int)*psVar59 * 4;
        *puVar57 = uVar52;
        puVar57[8] = uVar52;
        puVar57[0x10] = uVar52;
        lVar56 = 0x60;
      }
      else {
        iVar66 = psVar43[-0x28] * 0x3b21;
LAB_1081d99a0:
        lVar56 = (long)iVar66 * (long)(int)psVar59[0x10] +
                 (long)((int)psVar43[-8] * (int)psVar59[0x30]) * -0x187e;
        uVar49 = (long)(int)psVar43[-0x38] * (long)(int)*psVar59 * 0x4000 - lVar56;
        iVar66 = (int)psVar59[8] * (int)psVar43[-0x30];
        lVar51 = (long)((int)psVar59[0x38] * (int)*psVar43) * -0x6c2 +
                 (long)((int)psVar59[0x28] * (int)psVar43[-0x10]) * 0x2e75 +
                 (long)((int)psVar59[0x18] * (int)sVar63) * -0x4587 + (long)iVar66 * 0x21f9;
        lVar58 = (long)((int)psVar59[0x38] * (int)*psVar43) * -0x1050 +
                 (long)((int)psVar59[0x28] * (int)psVar43[-0x10]) * -0x133e +
                 (long)((int)psVar59[0x18] * (int)sVar63) * 0x1ccd + (long)iVar66 * 0x5203;
        lVar56 = lVar56 + (long)(int)psVar43[-0x38] * (long)(int)*psVar59 * 0x4000 + 0x800;
        *puVar57 = (uint)((ulong)(lVar58 + lVar56) >> 0xc);
        puVar57[0x18] = (uint)((ulong)(lVar56 - lVar58) >> 0xc);
        puVar57[8] = (uint)(lVar51 + uVar49 + 0x800 >> 0xc);
        uVar52 = (uint)((uVar49 + 0x800) - lVar51 >> 0xc);
        lVar56 = 0x40;
      }
      *(uint *)((long)puVar57 + lVar56) = uVar52;
    }
    psVar59 = psVar59 + 1;
    puVar57 = puVar57 + 1;
    uVar48 = uVar48 - 1;
    psVar43 = psVar43 + 1;
  } while (1 < uVar48);
  lVar56 = 0;
  lVar55 = lVar55 + 0x80;
  lVar58 = 0x1ccd;
  lVar51 = 0x5203;
  psVar43 = (short *)0x3b21;
  uVar50 = uVar50 & 0xffffffff;
  do {
    plVar45 = plVar47 + 1;
    piVar65 = (int *)((long)auStack_1398 + lVar56);
    pbVar40 = (byte *)(*plVar47 + uVar50);
    iVar66 = *(int *)((long)auStack_1398 + lVar56 + 4);
    iVar60 = *(int *)((long)auStack_1398 + lVar56 + 8);
    iVar70 = *(int *)((long)auStack_1398 + lVar56 + 0xc);
    if (iVar66 == 0 && iVar60 == 0) {
      if (iVar70 != 0) {
LAB_1081d9b14:
        iVar60 = 0;
        goto LAB_1081d9b20;
      }
      if (((*(int *)((long)auStack_1398 + lVar56 + 0x14) != 0) ||
          (*(int *)((long)auStack_1398 + lVar56 + 0x18) != 0)) ||
         (*(int *)((long)auStack_1398 + lVar56 + 0x1c) != 0)) {
        iVar70 = 0;
        goto LAB_1081d9b14;
      }
      bVar4 = *(byte *)(lVar55 + ((ulong)(*piVar65 + 0x10U >> 5) & 0x3ff));
      *pbVar40 = bVar4;
      pbVar40[1] = bVar4;
      pbVar40[2] = bVar4;
      lVar37 = 3;
      uVar48 = 0;
      uVar38 = 0;
    }
    else {
      iVar60 = iVar60 * 0x3b21;
LAB_1081d9b20:
      uVar48 = *(uint *)((long)auStack_1398 + lVar56);
      iVar71 = *(int *)((long)auStack_1398 + lVar56 + 0x14);
      iVar60 = iVar60 + *(int *)((long)auStack_1398 + lVar56 + 0x18) * -0x187e;
      uVar52 = uVar48 * 0x4000 - iVar60;
      uVar49 = (ulong)uVar52;
      iVar76 = *(int *)((long)auStack_1398 + lVar56 + 0x1c);
      iVar1 = iVar66 * 0x5203 + iVar76 * -0x1050 + iVar71 * -0x133e + iVar70 * 0x1ccd;
      iVar60 = iVar60 + uVar48 * 0x4000 + 0x40000;
      bVar4 = *(byte *)(lVar55 + ((ulong)((uint)(iVar1 + iVar60) >> 0x13) & 0x3ff));
      uVar38 = (ulong)bVar4;
      iVar70 = iVar66 * 0x21f9 + iVar76 * -0x6c2 + iVar71 * 0x2e75 + iVar70 * -0x4587;
      *pbVar40 = bVar4;
      pbVar40[3] = *(byte *)(lVar55 + ((ulong)((uint)(iVar60 - iVar1) >> 0x13) & 0x3ff));
      iVar66 = uVar52 + 0x40000;
      bVar4 = *(byte *)(lVar55 + ((ulong)((uint)(iVar70 + iVar66) >> 0x13) & 0x3ff));
      piVar65 = (int *)(ulong)bVar4;
      pbVar40[1] = bVar4;
      bVar4 = *(byte *)(lVar55 + ((ulong)((uint)(iVar66 - iVar70) >> 0x13) & 0x3ff));
      lVar37 = 2;
    }
    pbVar40[lVar37] = bVar4;
    lVar56 = lVar56 + 0x20;
    plVar47 = plVar45;
  } while (lVar56 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1318) {
    return;
  }
  ___stack_chk_fail();
  uStack_13d0 = uVar49;
  uStack_13c8 = (ulong)uVar48;
  uStack_13c0 = uVar38;
  piStack_13b8 = piVar65;
  ppppuStack_13b0 = &ppppuStack_12d0;
  pcStack_13a8 = FUN_1081d9c18;
  lStack_13d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar56 = *(long *)(lVar58 + 0x1a8);
  uVar48 = 9;
  psVar59 = *(short **)(lVar51 + 0x58);
  lVar55 = 0x20;
  do {
    bVar36 = uVar48 != 3;
    uVar48 = uVar48 - 1;
    if ((bVar36) && ((uVar48 & 0x7ffffffd) != 4)) {
      sVar63 = psVar43[0x28];
      if (psVar43[8] == 0 && psVar43[0x18] == 0) {
        if (sVar63 != 0) {
LAB_1081d9cb0:
          iVar66 = 0;
          goto LAB_1081d9cc0;
        }
        if (psVar43[0x38] != 0) {
          sVar63 = 0;
          goto LAB_1081d9cb0;
        }
        iVar66 = (int)*psVar43 * (int)*psVar59 * 4;
        *(int *)((long)aiStack_1438 + lVar55) = iVar66;
      }
      else {
        iVar66 = psVar43[0x18] * -0x28ba;
LAB_1081d9cc0:
        lVar58 = (long)((int)psVar43[0x38] * (int)psVar59[0x38]) * -0x1712 +
                 (long)((int)sVar63 * (int)psVar59[0x28]) * 0x1b37 +
                 (long)iVar66 * (long)(int)psVar59[0x18] +
                 (long)((int)psVar43[8] * (int)psVar59[8]) * 0x73fc;
        uVar38 = (long)(int)*psVar43 * (long)(int)*psVar59 * 0x8000 | 0x1000;
        *(int *)((long)aiStack_1438 + lVar55) = (int)(lVar58 + uVar38 >> 0xd);
        iVar66 = (int)(uVar38 - lVar58 >> 0xd);
      }
      *(int *)((long)auStack_1418 + lVar55) = iVar66;
    }
    psVar43 = psVar43 + 1;
    psVar59 = psVar59 + 1;
    lVar55 = lVar55 + 4;
  } while (1 < uVar48);
  lVar55 = 0;
  lVar56 = lVar56 + 0x80;
  puVar57 = auStack_1418;
  uVar38 = uVar50 & 0xffffffff;
  bVar36 = true;
  do {
    pbVar40 = (byte *)(plVar45[lVar55] + uVar38);
    uVar48 = puVar57[3];
    uVar41 = (ulong)uVar48;
    uVar52 = puVar57[5];
    if (puVar57[1] == 0 && uVar48 == 0) {
      if (uVar52 != 0) {
LAB_1081d9da0:
        iVar66 = 0;
        goto LAB_1081d9dac;
      }
      if (puVar57[7] != 0) {
        uVar52 = 0;
        goto LAB_1081d9da0;
      }
      bVar4 = *(byte *)(lVar56 + ((ulong)(*puVar57 + 0x10 >> 5) & 0x3ff));
      *pbVar40 = bVar4;
      uVar48 = 0;
    }
    else {
      iVar66 = uVar48 * -0x28ba;
LAB_1081d9dac:
      uVar48 = *puVar57;
      uVar50 = (ulong)puVar57[7];
      iVar60 = iVar66 + puVar57[1] * 0x73fc + puVar57[7] * -0x1712 + uVar52 * 0x1b37;
      iVar66 = uVar48 * 0x8000 + 0x80000;
      bVar4 = *(byte *)(lVar56 + ((ulong)((uint)(iVar60 + iVar66) >> 0x14) & 0x3ff));
      uVar41 = (ulong)bVar4;
      *pbVar40 = bVar4;
      bVar4 = *(byte *)(lVar56 + ((ulong)((uint)(iVar66 - iVar60) >> 0x14) & 0x3ff));
    }
    uVar49 = (ulong)bVar4;
    puVar44 = (ushort *)(ulong)uVar48;
    pbVar40[1] = bVar4;
    puVar57 = puVar57 + 8;
    lVar55 = 1;
    bVar35 = !bVar36;
    bVar36 = false;
    if (bVar35) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_13d8) {
        return;
      }
      ___stack_chk_fail();
      *(undefined1 *)(*plVar45 + (uVar50 & 0xffffffff)) =
           *(undefined1 *)
            (*(long *)(uVar49 + 0x1a8) +
             ((ulong)((uint)**(ushort **)(uVar41 + 0x58) * (uint)*puVar44 + 4 >> 3) & 0x3ff) + 0x80)
      ;
      return;
    }
  } while( true );
}



/* Entry: 1081d6f44; end: 1081d714f;  */

void FUN_1081d6f44(long param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  bool bVar36;
  undefined1 *puVar37;
  ulong uVar38;
  byte *pbVar39;
  ulong uVar40;
  ulong uVar41;
  short *psVar42;
  ushort *puVar43;
  long *plVar44;
  ulong uVar45;
  long *plVar46;
  uint uVar47;
  ulong uVar48;
  long lVar49;
  long lVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  uint *puVar55;
  long lVar56;
  short *psVar57;
  int iVar58;
  long lVar59;
  long lVar60;
  short sVar61;
  long lVar62;
  int *piVar63;
  long lVar64;
  long lVar65;
  int iVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  int iVar70;
  int iVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  int iVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  int aiStack_1358 [8];
  uint auStack_1338 [16];
  long lStack_12f8;
  ulong uStack_12f0;
  ulong uStack_12e8;
  ulong uStack_12e0;
  int *piStack_12d8;
  undefined8 ****ppppuStack_12d0;
  code *pcStack_12c8;
  uint auStack_12b8 [32];
  long lStack_1238;
  ulong uStack_1230;
  ulong uStack_1228;
  ulong uStack_1220;
  ulong uStack_1218;
  ulong uStack_1210;
  ulong uStack_1208;
  ulong uStack_1200;
  undefined8 uStack_11f8;
  undefined8 ****ppppuStack_11f0;
  code *pcStack_11e8;
  long lStack_11e0;
  undefined4 uStack_11d4;
  ulong uStack_11d0;
  long lStack_11c8;
  ulong uStack_11c0;
  long lStack_11b8;
  int aiStack_11b0 [128];
  long lStack_fb0;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  ulong uStack_f80;
  ulong uStack_f78;
  undefined8 uStack_f70;
  ulong uStack_f68;
  ulong uStack_f60;
  ulong uStack_f58;
  undefined8 ****ppppuStack_f50;
  undefined8 uStack_f48;
  long lStack_f38;
  undefined4 uStack_f2c;
  ulong uStack_f28;
  long lStack_f20;
  ulong uStack_f18;
  uint auStack_f10 [120];
  long lStack_d30;
  ulong uStack_d20;
  ulong uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  long lStack_ce0;
  ulong uStack_cd8;
  undefined8 ****ppppuStack_cd0;
  undefined8 uStack_cc8;
  long lStack_cb8;
  undefined4 uStack_cac;
  long lStack_ca8;
  uint auStack_ca0 [112];
  long lStack_ae0;
  undefined8 uStack_ad0;
  ulong uStack_ac8;
  ulong uStack_ac0;
  ulong uStack_ab8;
  ulong uStack_ab0;
  undefined8 uStack_aa8;
  ulong uStack_aa0;
  undefined8 uStack_a98;
  ulong uStack_a90;
  ulong uStack_a88;
  undefined8 ****ppppuStack_a80;
  undefined8 uStack_a78;
  long lStack_a68;
  undefined4 uStack_a5c;
  ulong uStack_a58;
  int aiStack_a50 [104];
  long lStack_8b0;
  ulong uStack_8a0;
  ulong uStack_898;
  undefined1 *puStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 ****ppppuStack_850;
  undefined8 uStack_848;
  long lStack_838;
  uint uStack_82c;
  ulong uStack_828;
  uint auStack_820 [96];
  long lStack_6a0;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long *plStack_650;
  ulong uStack_648;
  undefined8 ****ppppuStack_640;
  undefined8 uStack_638;
  long lStack_628;
  undefined4 uStack_61c;
  long *plStack_618;
  int aiStack_610 [88];
  long lStack_4b0;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  undefined1 *puStack_468;
  ulong uStack_460;
  undefined8 uStack_458;
  undefined1 ****ppppuStack_450;
  undefined8 uStack_448;
  long lStack_440;
  undefined4 uStack_434;
  uint auStack_430 [80];
  long lStack_2f0;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  undefined1 ***pppuStack_290;
  undefined8 uStack_288;
  long lStack_280;
  uint uStack_274;
  int aiStack_270 [72];
  long lStack_150;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  int aiStack_dc [9];
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  int aiStack_9c [10];
  undefined4 auStack_74 [5];
  undefined4 auStack_60 [5];
  undefined4 auStack_4c [5];
  long lStack_38;
  
  lVar53 = 0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar54 = *(long *)(param_1 + 0x1a8);
  lVar56 = *(long *)(param_2 + 0x58);
  do {
    psVar42 = (short *)(lVar56 + lVar53 * 2);
    psVar57 = (short *)(param_3 + lVar53 * 2);
    uVar52 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lVar67 = (long)(int)psVar42[0x10] * (long)(int)psVar57[0x10] +
             (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20];
    lVar62 = (long)(int)psVar42[0x10] * (long)(int)psVar57[0x10] -
             (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20];
    lVar64 = uVar52 + lVar62 * 0xb50;
    lVar50 = lVar64 + lVar67 * 0x194c;
    lVar64 = lVar64 + lVar67 * -0x194c;
    lVar67 = ((long)(int)psVar42[8] * (long)(int)psVar57[8] +
             (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18]) * 0x1a9a;
    lVar49 = lVar67 + (long)(int)((long)(int)psVar42[8] * (long)(int)psVar57[8]) * 0x1071;
    lVar67 = lVar67 + (long)((int)psVar42[0x18] * (int)psVar57[0x18]) * -0x45a4;
    aiStack_9c[lVar53] = (int)((ulong)(lVar49 + lVar50) >> 0xb);
    auStack_4c[lVar53] = (int)((ulong)(lVar50 - lVar49) >> 0xb);
    aiStack_9c[lVar53 + 5] = (int)((ulong)(lVar67 + lVar64) >> 0xb);
    auStack_60[lVar53] = (int)((ulong)(lVar64 - lVar67) >> 0xb);
    auStack_74[lVar53] = (int)(uVar52 + lVar62 * 0x7ffffffd2c0 >> 0xb);
    lVar53 = lVar53 + 1;
  } while ((int)lVar53 != 5);
  lVar53 = 0;
  lVar54 = lVar54 + 0x80;
  do {
    plVar46 = param_4 + 1;
    iVar76 = *(int *)((long)aiStack_9c + lVar53 + 4);
    puVar37 = (undefined1 *)(*param_4 + (param_5 & 0xffffffff));
    iVar3 = *(int *)((long)aiStack_9c + lVar53 + 8);
    iVar71 = *(int *)((long)aiStack_9c + lVar53 + 0xc);
    iVar70 = *(int *)((long)aiStack_9c + lVar53 + 0x10);
    iVar58 = iVar70 + iVar3;
    iVar66 = *(int *)((long)aiStack_9c + lVar53) * 0x2000 + 0x20000;
    iVar3 = iVar3 - iVar70;
    iVar14 = iVar66 + iVar3 * 0xb50;
    iVar19 = (iVar71 + iVar76) * 0x1a9a;
    iVar70 = iVar14 + iVar58 * 0x194c;
    iVar76 = iVar19 + iVar76 * 0x1071;
    iVar19 = iVar19 + iVar71 * -0x45a4;
    *puVar37 = *(undefined1 *)(lVar54 + ((ulong)((uint)(iVar76 + iVar70) >> 0x12) & 0x3ff));
    iVar14 = iVar14 + iVar58 * -0x194c;
    puVar37[4] = *(undefined1 *)(lVar54 + ((ulong)((uint)(iVar70 - iVar76) >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar54 + ((ulong)((uint)(iVar19 + iVar14) >> 0x12) & 0x3ff));
    uVar48 = (ulong)bVar4;
    uVar47 = iVar66 + iVar3 * 0xfffd2c0;
    uVar40 = (ulong)uVar47;
    puVar37[1] = bVar4;
    puVar37[3] = *(undefined1 *)(lVar54 + ((ulong)((uint)(iVar14 - iVar19) >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar54 + ((ulong)(uVar47 >> 0x12) & 0x3ff));
    uVar52 = (ulong)bVar4;
    puVar37[2] = bVar4;
    lVar53 = lVar53 + 0x14;
    param_4 = plVar46;
  } while (lVar53 != 100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar47 = (uint)uVar48;
  puStack_b0 = &stack0xfffffffffffffff0;
  pcStack_a8 = FUN_1081d7150;
  lVar53 = 0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar54 = *(long *)(uVar52 + 0x1a8);
  lVar56 = *(long *)(puVar37 + 0x58);
  do {
    psVar42 = (short *)(lVar56 + lVar53 * 2);
    psVar57 = (short *)(uVar40 + lVar53 * 2);
    uVar52 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    sVar61 = psVar57[0x10];
    sVar7 = psVar42[0x10];
    lVar50 = uVar52 + (long)(int)((long)(int)sVar7 * (long)(int)sVar61) * 0x16a1;
    sVar8 = psVar57[8];
    sVar9 = psVar42[8];
    aiStack_dc[lVar53] = (int)((ulong)(lVar50 + (long)((int)sVar8 * (int)sVar9) * 0x2731) >> 0xb);
    aiStack_dc[lVar53 + 6] =
         (int)((ulong)(lVar50 + (long)((int)sVar8 * (int)sVar9) * -0x2731) >> 0xb);
    aiStack_dc[lVar53 + 3] =
         (int)(uVar52 + (long)(int)sVar7 * (long)(int)sVar61 * 0x7ffffffd2be >> 0xb);
    lVar53 = lVar53 + 1;
  } while ((int)lVar53 != 3);
  lVar53 = 0;
  lVar54 = lVar54 + 0x80;
  do {
    plVar44 = plVar46 + 1;
    pbVar39 = (byte *)(*plVar46 + (uVar48 & 0xffffffff));
    iVar58 = *(int *)((long)aiStack_dc + lVar53 + 4);
    iVar66 = *(int *)((long)aiStack_dc + lVar53) * 0x2000 + 0x20000;
    iVar70 = *(int *)((long)aiStack_dc + lVar53 + 8);
    uVar51 = iVar66 + iVar70 * 0x16a1;
    uVar38 = (ulong)uVar51;
    bVar4 = *(byte *)(lVar54 + ((ulong)(uVar51 + iVar58 * 0x2731 >> 0x12) & 0x3ff));
    uVar52 = (ulong)bVar4;
    *pbVar39 = bVar4;
    pbVar39[2] = *(byte *)(lVar54 + ((ulong)(uVar51 + iVar58 * -0x2731 >> 0x12) & 0x3ff));
    pbVar39[1] = *(byte *)(lVar54 + ((ulong)((uint)(iVar66 + iVar70 * 0xfffd2be) >> 0x12) & 0x3ff));
    lVar53 = lVar53 + 0xc;
    plVar46 = plVar44;
  } while (lVar53 != 0x24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_1081d72a0;
  lVar53 = 0;
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_280 = *(long *)(uVar52 + 0x1a8);
  lVar54 = *(long *)(uVar38 + 0x58);
  ppuStack_f0 = &puStack_b0;
  do {
    psVar42 = (short *)(lVar54 + lVar53 * 2);
    psVar57 = (short *)(uVar40 + lVar53 * 2);
    lVar65 = (long)(int)psVar42[0x10] * (long)(int)psVar57[0x10];
    uVar52 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    sVar61 = psVar57[0x20];
    sVar7 = psVar42[0x20];
    iVar66 = (int)sVar7 * (int)sVar61;
    lVar49 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    sVar8 = psVar57[0x28];
    sVar9 = psVar42[0x28];
    sVar10 = psVar57[0x38];
    sVar11 = psVar42[0x38];
    lVar64 = (long)(int)sVar9 * (long)(int)sVar8 - (long)(int)sVar11 * (long)(int)sVar10;
    lVar62 = (lVar49 - (long)(int)sVar9 * (long)(int)sVar8) - (long)(int)sVar11 * (long)(int)sVar10;
    lVar79 = uVar52 + (long)((int)psVar42[0x30] * (int)psVar57[0x30]) * 0x16a1;
    lVar72 = uVar52 + (long)((int)psVar42[0x30] * (int)psVar57[0x30]) * -0x2d42;
    lVar77 = lVar65 - (long)(int)sVar7 * (long)(int)sVar61;
    lVar74 = lVar65 + (long)(int)sVar7 * (long)(int)sVar61;
    iVar58 = (int)psVar57[0x18] * (int)psVar42[0x18];
    lVar67 = (lVar49 + (long)(int)sVar9 * (long)(int)sVar8) * 0x1d17;
    lVar56 = (long)iVar58 * -0x2731 + lVar64 * -0x2c91 + lVar67;
    lVar50 = lVar79 + lVar74 * 0x2a87 + (long)iVar66 * -0x7dc;
    lVar49 = (lVar49 + (long)(int)sVar11 * (long)(int)sVar10) * 0xf7a;
    lVar67 = lVar49 + lVar67 + (long)iVar58 * 0x2731;
    lVar49 = lVar64 * 0x2c91 + (long)iVar58 * -0x2731 + lVar49;
    aiStack_270[lVar53] = (int)((ulong)(lVar67 + lVar50) >> 0xb);
    lVar64 = lVar72 + lVar77 * 0x16a1;
    aiStack_270[lVar53 + 0x40] = (int)((ulong)(lVar50 - lVar67) >> 0xb);
    aiStack_270[lVar53 + 8] = (int)((ulong)(lVar62 * 0x2731 + lVar64) >> 0xb);
    lVar50 = lVar79 + lVar74 * -0x2a87 + (long)(int)lVar65 * 0x22ab;
    aiStack_270[lVar53 + 0x38] = (int)((ulong)(lVar64 + lVar62 * -0x2731) >> 0xb);
    aiStack_270[lVar53 + 0x10] = (int)((ulong)(lVar56 + lVar50) >> 0xb);
    aiStack_270[lVar53 + 0x30] = (int)((ulong)(lVar50 - lVar56) >> 0xb);
    lVar56 = lVar79 + (long)(int)lVar65 * -0x22ab + (long)iVar66 * 0x7dc;
    aiStack_270[lVar53 + 0x18] = (int)((ulong)(lVar49 + lVar56) >> 0xb);
    aiStack_270[lVar53 + 0x28] = (int)((ulong)(lVar56 - lVar49) >> 0xb);
    aiStack_270[lVar53 + 0x20] = (int)((ulong)(lVar72 + lVar77 * 0x7ffffffd2be) >> 0xb);
    lVar53 = lVar53 + 1;
  } while ((int)lVar53 != 8);
  lVar54 = 0;
  lVar53 = lStack_280 + 0x80;
  lVar56 = 0x1d17;
  lVar50 = 0xf7a;
  lVar67 = 0x2c91;
  uVar52 = (ulong)uVar47;
  do {
    puVar37 = (undefined1 *)(*(long *)((long)plVar44 + lVar54) + uVar52);
    iVar3 = aiStack_270[lVar54 + 1];
    iVar66 = aiStack_270[lVar54] * 0x2000 + 0x20000;
    iVar71 = aiStack_270[lVar54 + 2];
    iVar14 = aiStack_270[lVar54 + 7];
    uVar15 = iVar66 + aiStack_270[lVar54 + 6] * 0x16a1;
    iVar76 = aiStack_270[lVar54 + 4];
    iVar19 = aiStack_270[lVar54 + 5];
    uVar16 = iVar66 + aiStack_270[lVar54 + 6] * -0x2d42;
    iVar20 = aiStack_270[lVar54 + 3] * -0x2731;
    iVar17 = uVar16 + (iVar71 - iVar76) * 0x16a1;
    iVar21 = (iVar19 + iVar3) * 0x1d17;
    iVar70 = (iVar14 + iVar3) * 0xf7a;
    iVar66 = (iVar76 + iVar71) * 0x2a87 + iVar76 * -0x7dc + uVar15;
    uVar30 = iVar20 + (iVar19 - iVar14) * -0x2c91;
    iVar58 = iVar21 + aiStack_270[lVar54 + 3] * 0x2731 + iVar70;
    uVar31 = uVar15 + (iVar76 + iVar71) * -0x2a87;
    iVar3 = iVar3 - (iVar19 + iVar14);
    *puVar37 = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar58 + iVar66) >> 0x12) & 0x3ff));
    uVar51 = uVar30 + iVar21;
    puVar37[8] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar66 - iVar58) >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar53 + ((ulong)((uint)(iVar3 * 0x2731 + iVar17) >> 0x12) & 0x3ff));
    uVar1 = uVar31 + iVar71 * 0x22ab;
    puVar37[1] = bVar4;
    uVar32 = uVar15 + iVar71 * -0x22ab;
    puVar37[7] = *(undefined1 *)
                  (lVar53 + ((ulong)((uint)(iVar17 + iVar3 * -0x2731) >> 0x12) & 0x3ff));
    iVar70 = (iVar19 - iVar14) * 0x2c91 + iVar20 + iVar70;
    puVar37[2] = *(undefined1 *)(lVar53 + ((ulong)(uVar51 + uVar1 >> 0x12) & 0x3ff));
    iVar66 = uVar32 + iVar76 * 0x7dc;
    puVar37[6] = *(undefined1 *)(lVar53 + ((ulong)(uVar1 - uVar51 >> 0x12) & 0x3ff));
    puVar37[3] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar70 + iVar66) >> 0x12) & 0x3ff));
    puVar37[5] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar66 - iVar70) >> 0x12) & 0x3ff));
    puVar37[4] = *(undefined1 *)
                  (lVar53 + ((ulong)(uVar16 + (iVar71 - iVar76) * 0xfffd2be >> 0x12) & 0x3ff));
    lVar54 = lVar54 + 8;
  } while (lVar54 != 0x48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return;
  }
  uStack_274 = uVar47;
  ___stack_chk_fail();
  uStack_2e0 = (ulong)uVar31;
  uStack_2d8 = (ulong)uVar30;
  uStack_2a0 = 0xfffd2be;
  uStack_288 = 0x1081d7634;
  uStack_434 = (int)uVar52;
  lVar53 = 0;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_440 = *(long *)(lVar56 + 0x1a8);
  lVar54 = *(long *)(lVar50 + 0x58);
  uStack_2d0 = (ulong)uVar1;
  uStack_2c8 = (ulong)uVar15;
  uStack_2c0 = (ulong)uVar51;
  uStack_2b8 = (ulong)(uint)(iVar71 * 0x22ab);
  uStack_2b0 = (ulong)bVar4;
  uStack_2a8 = (ulong)uVar32;
  uStack_298 = (ulong)uVar16;
  pppuStack_290 = &ppuStack_f0;
  do {
    psVar42 = (short *)(lVar54 + lVar53 * 2);
    psVar57 = (short *)(lVar67 + lVar53 * 2);
    uVar40 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    iVar70 = (int)psVar42[0x20] * (int)psVar57[0x20];
    lVar74 = uVar40 + (long)iVar70 * 0x249d;
    lVar77 = uVar40 + (long)iVar70 * -0xdfc;
    lVar49 = ((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10] +
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30]) * 0x1a9a;
    lVar50 = lVar49 + (long)(int)((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10]) * 0x1071;
    lVar49 = lVar49 + (long)((int)psVar42[0x30] * (int)psVar57[0x30]) * -0x45a4;
    lVar56 = lVar50 + lVar74;
    lVar74 = lVar74 - lVar50;
    lVar50 = lVar49 + lVar77;
    lVar77 = lVar77 - lVar49;
    iVar58 = (int)psVar42[8] * (int)psVar57[8];
    lVar72 = (long)(int)psVar42[0x28] * (long)(int)psVar57[0x28];
    lVar79 = (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18] +
             (long)(int)psVar42[0x38] * (long)(int)psVar57[0x38];
    lVar65 = (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18] -
             (long)(int)psVar42[0x38] * (long)(int)psVar57[0x38];
    lVar62 = lVar65 * 0x9e3 + lVar72 * 0x2000;
    lVar49 = lVar79 * 0x1e6f + (long)iVar58 * 0x2cb3 + lVar62;
    lVar62 = (long)iVar58 * 0x714 + lVar79 * -0x1e6f + lVar62;
    lVar64 = lVar65 * -0x19e3 + lVar72 * 0x2000;
    iVar66 = (iVar58 - (int)lVar72) - (int)lVar65;
    lVar65 = ((long)iVar58 * 0x2853 + lVar79 * -0x12cf) - lVar64;
    lVar64 = (long)iVar58 * 0x148c + lVar79 * -0x12cf + lVar64;
    auStack_430[lVar53] = (uint)((ulong)(lVar49 + lVar56) >> 0xb);
    auStack_430[lVar53 + 0x48] = (uint)((ulong)(lVar56 - lVar49) >> 0xb);
    auStack_430[lVar53 + 8] = (uint)((ulong)(lVar65 + lVar50) >> 0xb);
    auStack_430[lVar53 + 0x40] = (uint)((ulong)(lVar50 - lVar65) >> 0xb);
    iVar58 = (int)(uVar40 + (long)iVar70 * -0x2d42 >> 0xb);
    auStack_430[lVar53 + 0x10] = iVar58 + iVar66 * 4;
    auStack_430[lVar53 + 0x38] = iVar58 + iVar66 * -4;
    auStack_430[lVar53 + 0x18] = (uint)((ulong)(lVar64 + lVar77) >> 0xb);
    auStack_430[lVar53 + 0x30] = (uint)((ulong)(lVar77 - lVar64) >> 0xb);
    auStack_430[lVar53 + 0x20] = (uint)((ulong)(lVar62 + lVar74) >> 0xb);
    auStack_430[lVar53 + 0x28] = (uint)((ulong)(lVar74 - lVar62) >> 0xb);
    lVar53 = lVar53 + 1;
  } while ((int)lVar53 != 8);
  lVar54 = 0;
  lVar53 = lStack_440 + 0x80;
  lVar56 = 0x1e6f;
  lVar50 = 0x2cb3;
  lVar67 = 0x714;
  uVar52 = uVar52 & 0xffffffff;
  do {
    uVar1 = auStack_430[lVar54 + 1];
    uVar47 = auStack_430[lVar54 + 4];
    uVar15 = auStack_430[lVar54 + 5];
    iVar66 = auStack_430[lVar54] * 0x2000 + 0x20000;
    iVar58 = iVar66 + uVar47 * 0x249d;
    iVar70 = iVar66 + uVar47 * -0xdfc;
    uVar16 = iVar66 + uVar47 * -0x2d42;
    iVar76 = (auStack_430[lVar54 + 6] + auStack_430[lVar54 + 2]) * 0x1a9a;
    iVar71 = iVar76 + auStack_430[lVar54 + 2] * 0x1071;
    iVar76 = iVar76 + auStack_430[lVar54 + 6] * -0x45a4;
    iVar66 = iVar71 + iVar58;
    uVar31 = iVar58 - iVar71;
    uVar47 = iVar76 + iVar70;
    iVar58 = auStack_430[lVar54 + 7] + auStack_430[lVar54 + 3];
    iVar3 = auStack_430[lVar54 + 3] - auStack_430[lVar54 + 7];
    uVar32 = iVar70 - iVar76;
    iVar70 = iVar3 * 0x9e3 + uVar15 * 0x2000;
    iVar71 = iVar58 * 0x1e6f + uVar1 * 0x2cb3 + iVar70;
    puVar37 = (undefined1 *)(*(long *)((long)plVar44 + lVar54) + uVar52);
    uVar51 = iVar58 * -0x1e6f + uVar1 * 0x714 + iVar70;
    iVar70 = iVar3 * -0x19e3 + uVar15 * 0x2000;
    *puVar37 = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar71 + iVar66) >> 0x12) & 0x3ff));
    uVar30 = uVar1 * 0x2853 - (iVar58 * 0x12cf + iVar70);
    puVar37[9] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar66 - iVar71) >> 0x12) & 0x3ff));
    iVar3 = (uVar1 - uVar15) - iVar3;
    puVar37[1] = *(undefined1 *)(lVar53 + ((ulong)(uVar30 + uVar47 >> 0x12) & 0x3ff));
    puVar37[8] = *(undefined1 *)(lVar53 + ((ulong)(uVar47 - uVar30 >> 0x12) & 0x3ff));
    puVar37[2] = *(undefined1 *)(lVar53 + ((ulong)(uVar16 + iVar3 * 0x2000 >> 0x12) & 0x3ff));
    iVar70 = iVar58 * -0x12cf + uVar1 * 0x148c + iVar70;
    puVar37[7] = *(undefined1 *)(lVar53 + ((ulong)(uVar16 + iVar3 * -0x2000 >> 0x12) & 0x3ff));
    puVar37[3] = *(undefined1 *)(lVar53 + ((ulong)(iVar70 + uVar32 >> 0x12) & 0x3ff));
    puVar37[6] = *(undefined1 *)(lVar53 + ((ulong)(uVar32 - iVar70 >> 0x12) & 0x3ff));
    puVar37[4] = *(undefined1 *)(lVar53 + ((ulong)(uVar51 + uVar31 >> 0x12) & 0x3ff));
    puVar37[5] = *(undefined1 *)(lVar53 + ((ulong)(uVar31 - uVar51 >> 0x12) & 0x3ff));
    lVar54 = lVar54 + 8;
  } while (lVar54 != 0x50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return;
  }
  ___stack_chk_fail();
  uStack_4a0 = (ulong)uVar47;
  uStack_498 = (ulong)uVar30;
  uStack_490 = (ulong)(uVar1 - uVar15);
  uStack_488 = (ulong)uVar32;
  uStack_480 = (ulong)uVar51;
  uStack_478 = (ulong)uVar16;
  uStack_470 = (ulong)uVar1;
  puStack_468 = puVar37;
  uStack_460 = (ulong)uVar31;
  uStack_458 = 0x148c;
  ppppuStack_450 = &pppuStack_290;
  uStack_448 = 0x1081d7a08;
  uStack_61c = (int)uVar52;
  plStack_618 = plVar44;
  lVar53 = 0;
  lStack_4b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_628 = *(long *)(lVar56 + 0x1a8);
  lVar54 = *(long *)(lVar50 + 0x58);
  do {
    psVar42 = (short *)(lVar54 + lVar53 * 2);
    psVar57 = (short *)(lVar67 + lVar53 * 2);
    sVar61 = psVar57[0x10];
    sVar7 = psVar42[0x10];
    lVar77 = (long)(int)sVar7 * (long)(int)sVar61;
    lVar79 = (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20];
    sVar8 = psVar57[0x30];
    sVar9 = psVar42[0x30];
    iVar58 = (int)sVar9 * (int)sVar8;
    lVar74 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    lVar69 = (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18];
    lVar60 = lVar77 + (long)(int)sVar9 * (long)(int)sVar8;
    sVar10 = psVar57[0x28];
    sVar11 = psVar42[0x28];
    iVar70 = (int)sVar11 * (int)sVar10;
    sVar12 = psVar57[0x38];
    sVar13 = psVar42[0x38];
    lVar59 = lVar60 - (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20];
    iVar66 = (int)sVar13 * (int)sVar12;
    lVar56 = lVar74 + (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18];
    lVar49 = lVar56 * 0x1c6a;
    lVar68 = (lVar74 + (long)(int)sVar11 * (long)(int)sVar10) * 0x1574;
    lVar65 = (lVar56 + (long)(int)sVar11 * (long)(int)sVar10 + (long)(int)sVar13 * (long)(int)sVar12
             ) * 0xcc0;
    lVar50 = lVar65 + (lVar69 + (long)(int)sVar11 * (long)(int)sVar10) * -0x2537;
    lVar64 = (lVar69 + (long)(int)sVar13 * (long)(int)sVar12) * -0x398b;
    lVar56 = lVar68 + (long)iVar70 * -0x2626 + lVar50;
    lVar50 = lVar49 + (long)(int)lVar69 * 0x4258 + lVar64 + lVar50;
    uVar40 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lVar72 = (lVar79 - (long)(int)sVar9 * (long)(int)sVar8) * 0x517e;
    lVar62 = lVar65 + (lVar74 + (long)(int)sVar13 * (long)(int)sVar12) * 3000;
    lVar49 = lVar49 + (long)(int)lVar74 * -0x1d8a + lVar68 + lVar62;
    lVar62 = lVar64 + (long)iVar66 * 0x4347 + lVar62;
    lVar68 = uVar40 + lVar59 * 0x2b6c;
    lVar64 = lVar72 + (long)iVar58 * 0x43b5 + lVar68;
    lVar65 = (long)(int)lVar69 * -0x2ef3 + (long)iVar70 * 0x200b + (long)iVar66 * -0x35ea + lVar65;
    aiStack_610[lVar53] = (int)((ulong)(lVar49 + lVar64) >> 0xb);
    lVar74 = lVar68 + (lVar79 - (long)(int)sVar7 * (long)(int)sVar61) * 0xdc9;
    lVar72 = lVar72 + (long)(int)lVar79 * -0x3a4c + lVar74;
    aiStack_610[lVar53 + 0x50] = (int)((ulong)(lVar64 - lVar49) >> 0xb);
    lVar68 = lVar68 + lVar60 * -0x24fb;
    aiStack_610[lVar53 + 8] = (int)((ulong)(lVar50 + lVar72) >> 0xb);
    iVar66 = (int)lVar77;
    lVar49 = (long)iVar66 * -0x2c83 + (long)(int)lVar79 * 0x3e39 + lVar68;
    lVar68 = lVar68 + (long)iVar58 * -0x193d;
    aiStack_610[lVar53 + 0x48] = (int)((ulong)(lVar72 - lVar50) >> 0xb);
    aiStack_610[lVar53 + 0x10] = (int)((ulong)(lVar56 + lVar68) >> 0xb);
    aiStack_610[lVar53 + 0x40] = (int)((ulong)(lVar68 - lVar56) >> 0xb);
    lVar74 = lVar74 + (long)iVar66 * -0x306f;
    aiStack_610[lVar53 + 0x18] = (int)((ulong)(lVar62 + lVar74) >> 0xb);
    aiStack_610[lVar53 + 0x38] = (int)((ulong)(lVar74 - lVar62) >> 0xb);
    aiStack_610[lVar53 + 0x20] = (int)((ulong)(lVar65 + lVar49) >> 0xb);
    aiStack_610[lVar53 + 0x30] = (int)((ulong)(lVar49 - lVar65) >> 0xb);
    aiStack_610[lVar53 + 0x28] = (int)(uVar40 + lVar59 * 0x7ffffffd2bf >> 0xb);
    lVar53 = lVar53 + 1;
  } while ((int)lVar53 != 8);
  lVar54 = 0;
  lVar53 = lStack_628 + 0x80;
  do {
    puVar37 = (undefined1 *)(*(long *)((long)plVar44 + lVar54) + (uVar52 & 0xffffffff));
    iVar17 = aiStack_610[lVar54 + 1];
    iVar76 = aiStack_610[lVar54 + 4];
    iVar20 = aiStack_610[lVar54 + 5];
    iVar14 = aiStack_610[lVar54 + 6];
    iVar21 = aiStack_610[lVar54 + 7];
    iVar66 = aiStack_610[lVar54] * 0x2000 + 0x20000;
    iVar70 = (iVar76 - iVar14) * 0x517e;
    iVar19 = aiStack_610[lVar54 + 2];
    iVar2 = aiStack_610[lVar54 + 3];
    iVar3 = (iVar14 + iVar19) - iVar76;
    iVar71 = iVar66 + iVar3 * 0x2b6c;
    iVar18 = iVar71 + (iVar76 - iVar19) * 0xdc9;
    iVar58 = iVar70 + iVar14 * 0x43b5 + iVar71;
    iVar70 = iVar70 + iVar76 * -0x3a4c + iVar18;
    iVar71 = iVar71 + (iVar14 + iVar19) * -0x24fb;
    uVar15 = iVar66 + iVar3 * 0xfffd2bf;
    uVar45 = (ulong)uVar15;
    iVar18 = iVar18 + iVar19 * -0x306f;
    iVar3 = (iVar2 + iVar17 + iVar20 + iVar21) * 0xcc0;
    iVar22 = (iVar2 + iVar17) * 0x1c6a;
    uVar16 = iVar71 + iVar14 * -0x193d;
    uVar40 = (ulong)uVar16;
    iVar23 = (iVar20 + iVar17) * 0x1574;
    iVar14 = iVar3 + (iVar21 + iVar17) * 3000;
    uVar47 = iVar22 + iVar17 * -0x1d8a + iVar23;
    iVar71 = iVar19 * -0x2c83 + iVar76 * 0x3e39 + iVar71;
    iVar66 = uVar47 + iVar14;
    *puVar37 = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar66 + iVar58) >> 0x12) & 0x3ff));
    iVar19 = (iVar21 + iVar2) * -0x398b;
    iVar76 = iVar3 + (iVar20 + iVar2) * -0x2537;
    uVar51 = iVar23 + iVar20 * -0x2626 + iVar76;
    iVar76 = iVar22 + iVar2 * 0x4258 + iVar19 + iVar76;
    puVar37[10] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar58 - iVar66) >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar53 + ((ulong)((uint)(iVar76 + iVar70) >> 0x12) & 0x3ff));
    uVar38 = (ulong)bVar4;
    puVar37[1] = bVar4;
    uVar1 = iVar19 + iVar21 * 0x4347 + iVar14;
    uVar48 = (ulong)uVar1;
    puVar37[9] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar70 - iVar76) >> 0x12) & 0x3ff));
    puVar37[2] = *(undefined1 *)(lVar53 + ((ulong)(uVar51 + uVar16 >> 0x12) & 0x3ff));
    puVar37[8] = *(undefined1 *)(lVar53 + ((ulong)(uVar16 - uVar51 >> 0x12) & 0x3ff));
    puVar37[3] = *(undefined1 *)(lVar53 + ((ulong)(uVar1 + iVar18 >> 0x12) & 0x3ff));
    iVar3 = iVar2 * -0x2ef3 + iVar20 * 0x200b + iVar21 * -0x35ea + iVar3;
    puVar37[7] = *(undefined1 *)(lVar53 + ((ulong)(iVar18 - uVar1 >> 0x12) & 0x3ff));
    puVar37[4] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar3 + iVar71) >> 0x12) & 0x3ff));
    puVar37[6] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar71 - iVar3) >> 0x12) & 0x3ff));
    puVar37[5] = *(undefined1 *)(lVar53 + ((ulong)(uVar15 >> 0x12) & 0x3ff));
    lVar54 = lVar54 + 8;
  } while (lVar54 != 0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b0) {
    return;
  }
  ___stack_chk_fail();
  uStack_690 = 0xffffca16;
  uStack_688 = 0x200b;
  uStack_680 = 0xffffd10d;
  uStack_678 = 0x4347;
  uStack_670 = 0xffffc675;
  uStack_668 = 0xffffd9da;
  uStack_660 = 0x4258;
  uStack_658 = 0xffffdac9;
  plStack_650 = plVar44;
  uStack_648 = (ulong)uVar47;
  ppppuStack_640 = &ppppuStack_450;
  uStack_638 = 0x1081d7eb8;
  uStack_82c = uVar51;
  uStack_828 = uVar45;
  lVar53 = 0;
  lStack_6a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_838 = *(long *)(uVar40 + 0x1a8);
  lVar54 = *(long *)(uVar48 + 0x58);
  do {
    psVar42 = (short *)(lVar54 + lVar53 * 2);
    psVar57 = (short *)(uVar38 + lVar53 * 2);
    uVar52 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lVar59 = uVar52 + (long)((int)psVar57[0x20] * (int)psVar42[0x20]) * 0x2731;
    lVar77 = uVar52 + (long)((int)psVar57[0x20] * (int)psVar42[0x20]) * -0x2731;
    iVar66 = (int)((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10]);
    lVar49 = (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30];
    lVar50 = (long)(int)psVar42[0x10] * (long)(int)psVar57[0x10] -
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30];
    lVar56 = uVar52 + lVar50 * 0x2000;
    lVar60 = uVar52 + lVar50 * -0x2000;
    lVar50 = (long)iVar66 * 0x2bb6 + lVar49 * 0x2000;
    lVar67 = lVar50 + lVar59;
    lVar59 = lVar59 - lVar50;
    lVar49 = (long)iVar66 * 0xbb6 + lVar49 * -0x2000;
    lVar50 = lVar49 + lVar77;
    lVar77 = lVar77 - lVar49;
    lVar74 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    sVar61 = psVar57[0x28];
    sVar7 = psVar42[0x28];
    lVar64 = (long)(int)sVar7 * (long)(int)sVar61;
    sVar8 = psVar57[0x38];
    sVar9 = psVar42[0x38];
    iVar66 = (int)sVar9 * (int)sVar8;
    iVar58 = (int)((long)(int)psVar42[0x18] * (long)(int)psVar57[0x18]);
    lVar49 = lVar74 + (long)(int)sVar7 * (long)(int)sVar61;
    lVar65 = (lVar49 + (long)(int)sVar9 * (long)(int)sVar8) * 0x1b8d;
    lVar62 = lVar65 + lVar49 * 0x85b;
    lVar49 = (long)(int)lVar74 * 0x8f7 + (long)iVar58 * 0x29cf + lVar62;
    lVar68 = (lVar64 + (long)(int)sVar9 * (long)(int)sVar8) * -0x2175;
    lVar62 = (long)iVar58 * -0x1151 + (long)(int)lVar64 * -0x2f50 + lVar68 + lVar62;
    lVar72 = lVar74 - (long)(int)sVar9 * (long)(int)sVar8;
    lVar79 = (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18] -
             (long)(int)sVar7 * (long)(int)sVar61;
    lVar64 = (long)iVar66 * 0x32c6 + (long)iVar58 * -0x29cf + lVar68 + lVar65;
    lVar65 = (long)(int)lVar74 * -0x15a4 + (long)iVar58 * -0x1151 + (long)iVar66 * -0x3f74 + lVar65;
    auStack_820[lVar53] = (uint)((ulong)(lVar49 + lVar67) >> 0xb);
    lVar74 = (lVar72 + lVar79) * 0x1151;
    lVar72 = lVar74 + lVar72 * 0x187e;
    auStack_820[lVar53 + 0x58] = (uint)((ulong)(lVar67 - lVar49) >> 0xb);
    auStack_820[lVar53 + 8] = (uint)((ulong)(lVar72 + lVar56) >> 0xb);
    auStack_820[lVar53 + 0x50] = (uint)((ulong)(lVar56 - lVar72) >> 0xb);
    auStack_820[lVar53 + 0x10] = (uint)((ulong)(lVar62 + lVar50) >> 0xb);
    auStack_820[lVar53 + 0x48] = (uint)((ulong)(lVar50 - lVar62) >> 0xb);
    auStack_820[lVar53 + 0x18] = (uint)((ulong)(lVar64 + lVar77) >> 0xb);
    auStack_820[lVar53 + 0x40] = (uint)((ulong)(lVar77 - lVar64) >> 0xb);
    lVar74 = lVar74 + lVar79 * -0x3b21;
    auStack_820[lVar53 + 0x20] = (uint)((ulong)(lVar74 + lVar60) >> 0xb);
    auStack_820[lVar53 + 0x38] = (uint)((ulong)(lVar60 - lVar74) >> 0xb);
    auStack_820[lVar53 + 0x28] = (uint)((ulong)(lVar65 + lVar59) >> 0xb);
    auStack_820[lVar53 + 0x30] = (uint)((ulong)(lVar59 - lVar65) >> 0xb);
    lVar53 = lVar53 + 1;
  } while ((int)lVar53 != 8);
  lVar54 = 0;
  lVar53 = lStack_838 + 0x80;
  lVar56 = 0xffffd0b0;
  uVar52 = (ulong)uVar51;
  do {
    uVar1 = auStack_820[lVar54 + 1];
    uVar15 = auStack_820[lVar54 + 5];
    iVar66 = auStack_820[lVar54] * 0x2000 + 0x20000;
    iVar58 = iVar66 + auStack_820[lVar54 + 4] * 0x2731;
    uVar47 = auStack_820[lVar54 + 2];
    uVar16 = auStack_820[lVar54 + 3];
    uVar51 = auStack_820[lVar54 + 6];
    uVar30 = auStack_820[lVar54 + 7];
    iVar3 = iVar66 + auStack_820[lVar54 + 4] * -0x2731;
    iVar70 = iVar66 + (uVar47 - uVar51) * 0x2000;
    uVar31 = iVar66 + (uVar47 - uVar51) * -0x2000;
    iVar66 = uVar47 * 0x2bb6 + uVar51 * 0x2000;
    iVar71 = iVar66 + iVar58;
    uVar32 = iVar58 - iVar66;
    iVar58 = uVar47 * 0xbb6 + uVar51 * -0x2000;
    iVar66 = iVar58 + iVar3;
    uVar47 = (uVar15 + uVar1 + uVar30) * 0x1b8d;
    iVar76 = uVar47 + (uVar15 + uVar1) * 0x85b;
    uVar51 = iVar3 - iVar58;
    iVar58 = uVar16 * 0x29cf + uVar1 * 0x8f7 + iVar76;
    iVar19 = (uVar30 + uVar15) * -0x2175;
    iVar76 = uVar16 * -0x1151 + uVar15 * -0x2f50 + iVar19 + iVar76;
    lVar50 = *(long *)(uVar45 + lVar54);
    uVar15 = uVar16 - uVar15;
    uVar40 = (ulong)uVar15;
    puVar37 = (undefined1 *)(lVar50 + uVar52);
    *puVar37 = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar58 + iVar71) >> 0x12) & 0x3ff));
    iVar14 = ((uVar1 - uVar30) + uVar15) * 0x1151;
    iVar3 = iVar14 + (uVar1 - uVar30) * 0x187e;
    puVar37[0xb] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar71 - iVar58) >> 0x12) & 0x3ff));
    puVar37[1] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar3 + iVar70) >> 0x12) & 0x3ff));
    iVar58 = uVar16 * -0x29cf + uVar30 * 0x32c6 + uVar47 + iVar19;
    puVar37[10] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar70 - iVar3) >> 0x12) & 0x3ff));
    puVar37[2] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar76 + iVar66) >> 0x12) & 0x3ff));
    puVar37[9] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar66 - iVar76) >> 0x12) & 0x3ff));
    iVar66 = uVar16 * -0x1151 + uVar1 * -0x15a4 + uVar30 * -0x3f74 + uVar47;
    puVar37[3] = *(undefined1 *)(lVar53 + ((ulong)(iVar58 + uVar51 >> 0x12) & 0x3ff));
    iVar14 = iVar14 + uVar15 * -0x3b21;
    puVar37[8] = *(undefined1 *)(lVar53 + ((ulong)(uVar51 - iVar58 >> 0x12) & 0x3ff));
    puVar37[4] = *(undefined1 *)(lVar53 + ((ulong)(iVar14 + uVar31 >> 0x12) & 0x3ff));
    puVar37[7] = *(undefined1 *)(lVar53 + ((ulong)(uVar31 - iVar14 >> 0x12) & 0x3ff));
    puVar37[5] = *(undefined1 *)(lVar53 + ((ulong)(iVar66 + uVar32 >> 0x12) & 0x3ff));
    puVar37[6] = *(undefined1 *)(lVar53 + ((ulong)(uVar32 - iVar66 >> 0x12) & 0x3ff));
    lVar54 = lVar54 + 8;
  } while (lVar54 != 0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6a0) {
    return;
  }
  uVar48 = uStack_828;
  ___stack_chk_fail();
  uStack_8a0 = (ulong)uVar51;
  uStack_898 = (ulong)uVar47;
  puStack_890 = puVar37;
  uStack_888 = (ulong)uVar30;
  uStack_880 = (ulong)uVar1;
  uStack_878 = (ulong)uVar31;
  uStack_870 = (ulong)uVar32;
  uStack_868 = 0xffffc4df;
  uStack_860 = 0x187e;
  uStack_858 = 0x1151;
  ppppuStack_850 = &ppppuStack_640;
  uStack_848 = 0x1081d831c;
  uStack_a5c = (int)uVar52;
  uStack_a58 = uVar40;
  lVar53 = 0;
  lStack_8b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a68 = *(long *)(lVar50 + 0x1a8);
  lVar54 = *(long *)(uVar48 + 0x58);
  do {
    psVar42 = (short *)(lVar54 + lVar53 * 2);
    psVar57 = (short *)(lVar56 + lVar53 * 2);
    sVar61 = psVar57[0x10];
    sVar7 = psVar42[0x10];
    iVar66 = (int)sVar7 * (int)sVar61;
    uVar48 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lVar72 = (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20] +
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30];
    lVar69 = (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20] -
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30];
    lVar67 = uVar48 + lVar69 * 0x319;
    lVar50 = lVar72 * 0x24f9 + (long)iVar66 * 0x2bf1 + lVar67;
    lVar67 = (long)iVar66 * 0x100c + lVar72 * -0x24f9 + lVar67;
    lVar62 = uVar48 + lVar69 * 0xf95;
    lVar49 = (long)iVar66 * 0x21e0 + lVar72 * -0xa20 + lVar62;
    lVar62 = lVar72 * 0xa20 + (long)iVar66 * -0x2812 + lVar62;
    lVar65 = uVar48 + lVar69 * -0x1dfe;
    lVar64 = (long)iVar66 * -0x574 + lVar72 * -0xdf2 + lVar65;
    lVar65 = lVar72 * 0xdf2 + (long)iVar66 * -0x19b5 + lVar65;
    lVar60 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    sVar8 = psVar57[0x18];
    sVar9 = psVar42[0x18];
    lVar73 = (long)(int)sVar9 * (long)(int)sVar8;
    sVar10 = psVar57[0x28];
    sVar11 = psVar42[0x28];
    lVar78 = (long)(int)sVar11 * (long)(int)sVar10;
    sVar12 = psVar57[0x38];
    sVar13 = psVar42[0x38];
    lVar74 = (lVar60 + (long)(int)sVar9 * (long)(int)sVar8) * 0x2a50;
    lVar77 = (lVar60 + (long)(int)sVar11 * (long)(int)sVar10) * 0x253e;
    lVar68 = lVar60 + (long)(int)sVar13 * (long)(int)sVar12;
    lVar79 = lVar68 * 0x1e02;
    lVar72 = lVar74 + (long)(int)lVar60 * -0x40a5 + lVar77 + lVar79;
    lVar59 = (lVar73 + (long)(int)sVar11 * (long)(int)sVar10) * -0xad5;
    lVar75 = (lVar73 + (long)(int)sVar13 * (long)(int)sVar12) * -0x253e;
    lVar74 = lVar74 + (long)(int)lVar73 * 0x1acb + lVar59 + lVar75;
    lVar80 = (lVar78 + (long)(int)sVar13 * (long)(int)sVar12) * -0x1508;
    lVar77 = lVar59 + (long)(int)lVar78 * -0x324f + lVar77 + lVar80;
    iVar66 = (int)sVar13 * (int)sVar12;
    lVar79 = lVar75 + (long)iVar66 * 0x4694 + lVar79 + lVar80;
    lVar59 = (lVar78 - (long)(int)sVar9 * (long)(int)sVar8) * 0x1e02 + lVar68 * 0xad5;
    lVar68 = (long)(int)lVar60 * 0xa33 + (long)(int)lVar73 * -0xeea + lVar59;
    lVar59 = (long)(int)lVar78 * 0xc4e + (long)iVar66 * -0x37c1 + lVar59;
    aiStack_a50[lVar53] = (int)((ulong)(lVar72 + lVar50) >> 0xb);
    aiStack_a50[lVar53 + 0x60] = (int)((ulong)(lVar50 - lVar72) >> 0xb);
    aiStack_a50[lVar53 + 8] = (int)((ulong)(lVar74 + lVar49) >> 0xb);
    aiStack_a50[lVar53 + 0x58] = (int)((ulong)(lVar49 - lVar74) >> 0xb);
    aiStack_a50[lVar53 + 0x10] = (int)((ulong)(lVar77 + lVar67) >> 0xb);
    aiStack_a50[lVar53 + 0x50] = (int)((ulong)(lVar67 - lVar77) >> 0xb);
    aiStack_a50[lVar53 + 0x18] = (int)((ulong)(lVar79 + lVar64) >> 0xb);
    aiStack_a50[lVar53 + 0x48] = (int)((ulong)(lVar64 - lVar79) >> 0xb);
    aiStack_a50[lVar53 + 0x20] = (int)((ulong)(lVar68 + lVar65) >> 0xb);
    aiStack_a50[lVar53 + 0x40] = (int)((ulong)(lVar65 - lVar68) >> 0xb);
    aiStack_a50[lVar53 + 0x28] = (int)((ulong)(lVar59 + lVar62) >> 0xb);
    aiStack_a50[lVar53 + 0x38] = (int)((ulong)(lVar62 - lVar59) >> 0xb);
    aiStack_a50[lVar53 + 0x30] =
         (int)(uVar48 + (lVar69 - (long)(int)sVar7 * (long)(int)sVar61) * 0x2d41 >> 0xb);
    lVar53 = lVar53 + 1;
  } while ((int)lVar53 != 8);
  lVar54 = 0;
  lVar53 = lStack_a68 + 0x80;
  lVar56 = 0xfffff116;
  do {
    iVar17 = aiStack_a50[lVar54 + 1];
    iVar66 = aiStack_a50[lVar54] * 0x2000 + 0x20000;
    iVar20 = aiStack_a50[lVar54 + 5];
    iVar21 = aiStack_a50[lVar54 + 7];
    iVar58 = aiStack_a50[lVar54 + 6] + aiStack_a50[lVar54 + 4];
    iVar33 = aiStack_a50[lVar54 + 4] - aiStack_a50[lVar54 + 6];
    iVar71 = iVar66 + iVar33 * 0x319;
    iVar19 = aiStack_a50[lVar54 + 2];
    iVar2 = aiStack_a50[lVar54 + 3];
    iVar76 = iVar66 + iVar33 * 0xf95;
    uVar47 = iVar58 * 0x24f9 + iVar19 * 0x2bf1 + iVar71;
    iVar14 = iVar66 + iVar33 * -0x1dfe;
    iVar70 = iVar58 * 0xa20 + iVar19 * -0x2812 + iVar76;
    uVar51 = iVar58 * 0xdf2 + iVar19 * -0x19b5 + iVar14;
    uVar38 = (ulong)uVar51;
    iVar18 = (iVar2 + iVar17) * 0x2a50;
    iVar71 = iVar58 * -0x24f9 + iVar19 * 0x100c + iVar71;
    iVar22 = (iVar20 + iVar17) * 0x253e;
    iVar23 = (iVar21 + iVar17) * 0x1e02;
    iVar76 = iVar58 * -0xa20 + iVar19 * 0x21e0 + iVar76;
    iVar3 = iVar18 + iVar17 * -0x40a5 + iVar22 + iVar23;
    iVar24 = (iVar20 + iVar2) * -0xad5;
    iVar14 = iVar58 * -0xdf2 + iVar19 * -0x574 + iVar14;
    iVar25 = (iVar21 + iVar2) * -0x253e;
    uVar1 = iVar18 + iVar2 * 0x1acb + iVar24 + iVar25;
    iVar18 = (iVar21 + iVar20) * -0x1508;
    iVar58 = iVar24 + iVar20 * -0x324f + iVar22 + iVar18;
    uVar15 = iVar25 + iVar21 * 0x4694 + iVar23 + iVar18;
    bVar4 = *(byte *)(lVar53 + ((ulong)(iVar3 + uVar47 >> 0x12) & 0x3ff));
    pbVar39 = (byte *)(*(long *)(uVar40 + lVar54) + (uVar52 & 0xffffffff));
    *pbVar39 = bVar4;
    pbVar39[0xc] = *(byte *)(lVar53 + ((ulong)(uVar47 - iVar3 >> 0x12) & 0x3ff));
    pbVar39[1] = *(byte *)(lVar53 + ((ulong)(uVar1 + iVar76 >> 0x12) & 0x3ff));
    uVar31 = (iVar20 - iVar2) * 0x1e02;
    uVar30 = uVar31 + (iVar21 + iVar17) * 0xad5;
    pbVar39[0xb] = *(byte *)(lVar53 + ((ulong)(iVar76 - uVar1 >> 0x12) & 0x3ff));
    bVar5 = *(byte *)(lVar53 + ((ulong)((uint)(iVar58 + iVar71) >> 0x12) & 0x3ff));
    pbVar39[2] = bVar5;
    pbVar39[10] = *(byte *)(lVar53 + ((ulong)((uint)(iVar71 - iVar58) >> 0x12) & 0x3ff));
    pbVar39[3] = *(byte *)(lVar53 + ((ulong)(uVar15 + iVar14 >> 0x12) & 0x3ff));
    uVar16 = iVar17 * 0xa33 + iVar2 * -0xeea + uVar30;
    uVar48 = (ulong)uVar16;
    pbVar39[9] = *(byte *)(lVar53 + ((ulong)(iVar14 - uVar15 >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar53 + ((ulong)(uVar16 + uVar51 >> 0x12) & 0x3ff));
    uVar45 = (ulong)bVar6;
    pbVar39[4] = bVar6;
    iVar58 = iVar20 * 0xc4e + iVar21 * -0x37c1 + uVar30;
    pbVar39[8] = *(byte *)(lVar53 + ((ulong)(uVar51 - uVar16 >> 0x12) & 0x3ff));
    pbVar39[5] = *(byte *)(lVar53 + ((ulong)((uint)(iVar58 + iVar70) >> 0x12) & 0x3ff));
    pbVar39[7] = *(byte *)(lVar53 + ((ulong)((uint)(iVar70 - iVar58) >> 0x12) & 0x3ff));
    pbVar39[6] = *(byte *)(lVar53 + ((ulong)((uint)(iVar66 + (iVar33 - iVar19) * 0x2d41) >> 0x12) &
                                    0x3ff));
    lVar54 = lVar54 + 8;
  } while (lVar54 != 0x68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8b0) {
    return;
  }
  ___stack_chk_fail();
  uStack_ad0 = 0xffffeaf8;
  uStack_ac8 = (ulong)bVar4;
  uStack_ac0 = (ulong)uVar1;
  uStack_ab8 = (ulong)uVar15;
  uStack_ab0 = (ulong)uVar47;
  uStack_aa8 = 0xad5;
  uStack_aa0 = (ulong)uVar31;
  uStack_a98 = 0x1e02;
  uStack_a90 = (ulong)bVar5;
  uStack_a88 = (ulong)uVar30;
  ppppuStack_a80 = &ppppuStack_850;
  uStack_a78 = 0x1081d8880;
  uStack_cac = (int)pbVar39;
  lStack_ca8 = lVar56;
  lVar53 = 0;
  lStack_ae0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_cb8 = *(long *)(uVar48 + 0x1a8);
  lVar54 = *(long *)(uVar38 + 0x58);
  do {
    psVar42 = (short *)(lVar54 + lVar53 * 2);
    psVar57 = (short *)(uVar45 + lVar53 * 2);
    iVar58 = (int)psVar42[0x20] * (int)psVar57[0x20];
    uVar52 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lVar79 = uVar52 + (long)iVar58 * 0x28c6;
    lVar68 = uVar52 + (long)iVar58 * 0xa12;
    lVar59 = uVar52 + (long)iVar58 * -0x1c37;
    iVar66 = (int)psVar42[0x30] * (int)psVar57[0x30];
    lVar49 = ((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10] +
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30]) * 0x2362;
    iVar70 = (int)((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10]);
    lVar67 = lVar49 + (long)iVar70 * 0x8bd;
    lVar49 = lVar49 + (long)iVar66 * -0x3704;
    lVar62 = (long)iVar70 * 0x13a3 + (long)iVar66 * -0x2c1f;
    lVar50 = lVar67 + lVar79;
    lVar79 = lVar79 - lVar67;
    lVar67 = lVar49 + lVar68;
    lVar68 = lVar68 - lVar49;
    lVar49 = lVar62 + lVar59;
    lVar59 = lVar59 - lVar62;
    lVar74 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    sVar61 = psVar57[0x18];
    sVar7 = psVar42[0x18];
    lVar62 = (long)(int)sVar7 * (long)(int)sVar61;
    sVar8 = psVar57[0x28];
    sVar9 = psVar42[0x28];
    lVar65 = (long)(int)sVar9 * (long)(int)sVar8;
    lVar75 = (long)(int)psVar42[0x38] * (long)(int)psVar57[0x38];
    lVar60 = lVar74 + (long)(int)sVar9 * (long)(int)sVar8;
    lVar69 = (lVar74 + (long)(int)sVar7 * (long)(int)sVar61) * 0x2ab7;
    lVar78 = lVar60 * 0x2652;
    lVar64 = (lVar62 + (long)(int)sVar9 * (long)(int)sVar8) * -0x511 + lVar75 * -0x2000;
    iVar66 = (int)lVar62;
    lVar62 = lVar69 + (long)iVar66 * -0xd92 + lVar64;
    iVar70 = (int)lVar65;
    lVar64 = lVar78 + (long)iVar70 * -0x4bf7 + lVar64;
    lVar60 = lVar60 * 0x1814;
    lVar73 = lVar74 - (long)(int)sVar7 * (long)(int)sVar61;
    lVar77 = (lVar65 - (long)(int)sVar7 * (long)(int)sVar61) * 0x2cf8;
    lVar72 = lVar73 * 0xef2 + lVar75 * -0x2000;
    lVar65 = lVar60 + (long)(int)lVar74 * -0x21f5 + lVar72;
    lVar72 = lVar77 + (long)iVar66 * 0x1599 + lVar72;
    lVar74 = lVar69 + (long)(int)lVar74 * -0x2410 + lVar78 + lVar75 * 0x2000;
    lVar77 = lVar77 + (long)iVar70 * -0x361a + lVar60 + lVar75 * 0x2000;
    iVar66 = ((int)lVar73 - iVar70) + (int)lVar75;
    auStack_ca0[lVar53] = (uint)((ulong)(lVar74 + lVar50) >> 0xb);
    auStack_ca0[lVar53 + 0x68] = (uint)((ulong)(lVar50 - lVar74) >> 0xb);
    auStack_ca0[lVar53 + 8] = (uint)((ulong)(lVar62 + lVar67) >> 0xb);
    auStack_ca0[lVar53 + 0x60] = (uint)((ulong)(lVar67 - lVar62) >> 0xb);
    auStack_ca0[lVar53 + 0x10] = (uint)((ulong)(lVar64 + lVar49) >> 0xb);
    auStack_ca0[lVar53 + 0x58] = (uint)((ulong)(lVar49 - lVar64) >> 0xb);
    iVar58 = (int)(uVar52 + (long)iVar58 * -0x2d42 >> 0xb);
    auStack_ca0[lVar53 + 0x18] = iVar58 + iVar66 * 4;
    auStack_ca0[lVar53 + 0x50] = iVar58 + iVar66 * -4;
    auStack_ca0[lVar53 + 0x20] = (uint)((ulong)(lVar77 + lVar59) >> 0xb);
    auStack_ca0[lVar53 + 0x48] = (uint)((ulong)(lVar59 - lVar77) >> 0xb);
    auStack_ca0[lVar53 + 0x28] = (uint)((ulong)(lVar72 + lVar68) >> 0xb);
    auStack_ca0[lVar53 + 0x40] = (uint)((ulong)(lVar68 - lVar72) >> 0xb);
    auStack_ca0[lVar53 + 0x30] = (uint)((ulong)(lVar65 + lVar79) >> 0xb);
    auStack_ca0[lVar53 + 0x38] = (uint)((ulong)(lVar79 - lVar65) >> 0xb);
    lVar53 = lVar53 + 1;
  } while ((int)lVar53 != 8);
  lVar54 = 0;
  lVar53 = lStack_cb8 + 0x80;
  uVar52 = (ulong)pbVar39 & 0xffffffff;
  do {
    uVar16 = auStack_ca0[lVar54 + 1];
    iVar66 = auStack_ca0[lVar54] * 0x2000 + 0x20000;
    uVar47 = auStack_ca0[lVar54 + 4];
    uVar30 = auStack_ca0[lVar54 + 5];
    iVar70 = iVar66 + uVar47 * 0x28c6;
    iVar19 = iVar66 + uVar47 * 0xa12;
    iVar71 = iVar66 + uVar47 * -0x1c37;
    uVar51 = auStack_ca0[lVar54 + 2];
    uVar31 = auStack_ca0[lVar54 + 3];
    uVar15 = auStack_ca0[lVar54 + 6];
    uVar1 = auStack_ca0[lVar54 + 7];
    iVar66 = iVar66 + uVar47 * -0x2d42;
    iVar3 = (uVar15 + uVar51) * 0x2362;
    iVar76 = iVar3 + uVar51 * 0x8bd;
    iVar3 = iVar3 + uVar15 * -0x3704;
    iVar14 = uVar51 * 0x13a3 + uVar15 * -0x2c1f;
    iVar58 = iVar76 + iVar70;
    uVar15 = iVar70 - iVar76;
    iVar70 = iVar14 + iVar71;
    uVar32 = iVar71 - iVar14;
    uVar45 = (ulong)uVar32;
    uVar47 = iVar3 + iVar19;
    uVar38 = (ulong)uVar47;
    iVar76 = (uVar31 + uVar16) * 0x2ab7;
    iVar14 = (uVar30 + uVar16) * 0x2652;
    iVar71 = iVar76 + uVar16 * -0x2410 + iVar14 + uVar1 * 0x2000;
    iVar19 = iVar19 - iVar3;
    iVar3 = (uVar30 + uVar31) * -0x511 + uVar1 * -0x2000;
    iVar76 = iVar76 + uVar31 * -0xd92 + iVar3;
    iVar3 = iVar14 + uVar30 * -0x4bf7 + iVar3;
    uVar51 = uVar30 * -0x361a + uVar1 * 0x2000;
    iVar14 = (uVar16 - uVar31) * 0xef2 + uVar1 * -0x2000;
    uVar1 = ((uVar16 - uVar31) - uVar30) + uVar1;
    uVar40 = (ulong)uVar1;
    puVar37 = (undefined1 *)(*(long *)(lVar56 + lVar54) + uVar52);
    *puVar37 = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar71 + iVar58) >> 0x12) & 0x3ff));
    puVar37[0xd] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar58 - iVar71) >> 0x12) & 0x3ff));
    bVar4 = *(byte *)(lVar53 + ((ulong)(iVar76 + uVar47 >> 0x12) & 0x3ff));
    uVar48 = (ulong)bVar4;
    puVar37[1] = bVar4;
    puVar37[0xc] = *(undefined1 *)(lVar53 + ((ulong)(uVar47 - iVar76 >> 0x12) & 0x3ff));
    puVar37[2] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar3 + iVar70) >> 0x12) & 0x3ff));
    iVar71 = (uVar30 + uVar16) * 0x1814;
    iVar76 = (uVar30 - uVar31) * 0x2cf8;
    puVar37[0xb] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar70 - iVar3) >> 0x12) & 0x3ff));
    iVar58 = uVar51 + iVar76 + iVar71;
    puVar37[3] = *(undefined1 *)(lVar53 + ((ulong)(iVar66 + uVar1 * 0x2000 >> 0x12) & 0x3ff));
    puVar37[10] = *(undefined1 *)(lVar53 + ((ulong)(iVar66 + uVar1 * -0x2000 >> 0x12) & 0x3ff));
    puVar37[4] = *(undefined1 *)(lVar53 + ((ulong)(iVar58 + uVar32 >> 0x12) & 0x3ff));
    iVar66 = iVar71 + uVar16 * -0x21f5 + iVar14;
    iVar14 = iVar76 + uVar31 * 0x1599 + iVar14;
    puVar37[9] = *(undefined1 *)(lVar53 + ((ulong)(uVar32 - iVar58 >> 0x12) & 0x3ff));
    puVar37[5] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar14 + iVar19) >> 0x12) & 0x3ff));
    puVar37[8] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar19 - iVar14) >> 0x12) & 0x3ff));
    puVar37[6] = *(undefined1 *)(lVar53 + ((ulong)(iVar66 + uVar15 >> 0x12) & 0x3ff));
    puVar37[7] = *(undefined1 *)(lVar53 + ((ulong)(uVar15 - iVar66 >> 0x12) & 0x3ff));
    lVar54 = lVar54 + 8;
  } while (lVar54 != 0x70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ae0) {
    return;
  }
  ___stack_chk_fail();
  uStack_d20 = (ulong)uVar31;
  uStack_d18 = (ulong)uVar15;
  uStack_d10 = 0x1599;
  uStack_d08 = 0xffffc9e6;
  uStack_d00 = 0x2cf8;
  uStack_cf8 = 0xffffb409;
  uStack_cf0 = 0xfffff26e;
  uStack_ce8 = 0xfffffaef;
  lStack_ce0 = lVar56;
  uStack_cd8 = (ulong)uVar51;
  ppppuStack_cd0 = &ppppuStack_a80;
  uStack_cc8 = 0x1081d8d6c;
  uStack_f2c = (int)uVar52;
  uStack_f28 = uVar45;
  uStack_f18 = uVar38;
  lVar53 = 0;
  lStack_d30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_f38 = *(long *)(uVar40 + 0x1a8);
  lStack_f20 = *(long *)(uVar48 + 0x58);
  do {
    psVar42 = (short *)(lStack_f20 + lVar53 * 2);
    psVar57 = (short *)(uVar38 + lVar53 * 2);
    lVar67 = (long)(int)psVar42[0x10] * (long)(int)psVar57[0x10];
    uVar40 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    iVar58 = (int)psVar42[0x30] * (int)psVar57[0x30];
    lVar49 = uVar40 + (long)iVar58 * -0xdfc;
    lVar62 = uVar40 + (long)iVar58 * 0x249d;
    lVar77 = lVar67 - (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20];
    lVar64 = lVar67 + (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20];
    lVar54 = lVar77 * 0x176 + lVar64 * 0x2ace + lVar62;
    lVar56 = (long)(int)lVar67 * 0x2e13 + lVar64 * -0x2ace + lVar77 * 0x176 + lVar49;
    lVar50 = lVar62 + lVar77 * -0xcc7 + lVar64 * -0x1182;
    lVar67 = lVar64 * 0x1182 + (long)(int)lVar67 * -0x2e13 + lVar77 * -0xcc7 + lVar49;
    lVar49 = lVar77 * 0xb50 + lVar64 * 0x194c + lVar49;
    lVar62 = lVar62 + lVar64 * -0x194c + lVar77 * 0xb50;
    sVar61 = psVar57[8];
    sVar7 = psVar42[8];
    lVar72 = (long)(int)sVar7 * (long)(int)sVar61;
    sVar8 = psVar57[0x28];
    sVar9 = psVar42[0x28];
    iVar76 = (int)sVar9 * (int)sVar8;
    sVar10 = psVar57[0x38];
    sVar11 = psVar42[0x38];
    iVar66 = (int)sVar11 * (int)sVar10;
    lVar79 = lVar72 - (long)(int)sVar11 * (long)(int)sVar10;
    lVar65 = lVar79 * 0x2d02 + (long)iVar76 * 0x2731;
    iVar71 = (int)((long)(int)psVar42[0x18] * (long)(int)psVar57[0x18]);
    lVar64 = lVar65 + (long)iVar66 * 0x4ea3 + (long)iVar71 * 0x2b0a;
    iVar70 = (int)lVar72;
    lVar65 = (long)iVar70 * -0x2399 + (long)iVar71 * -0x1a9a + lVar65;
    lVar68 = (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18] -
             (long)(int)sVar11 * (long)(int)sVar10;
    lVar74 = (lVar72 + (long)(int)sVar11 * (long)(int)sVar10) * 0x1268;
    lVar72 = (long)iVar70 * 0xf39 + (long)iVar71 * -0x1a9a + (long)iVar76 * -0x2731 + lVar74;
    lVar74 = (long)iVar71 * -0x2b0a + (long)iVar76 * 0x2731 + (long)iVar66 * -0x1bd1 + lVar74;
    auStack_f10[lVar53] = (uint)((ulong)(lVar64 + lVar54) >> 0xb);
    auStack_f10[lVar53 + 0x70] = (uint)((ulong)(lVar54 - lVar64) >> 0xb);
    lVar64 = (lVar68 + (long)(int)sVar7 * (long)(int)sVar61) * 0x1a9a;
    lVar54 = lVar64 + (long)iVar70 * 0x1071;
    auStack_f10[lVar53 + 8] = (uint)((ulong)(lVar54 + lVar49) >> 0xb);
    auStack_f10[lVar53 + 0x68] = (uint)((ulong)(lVar49 - lVar54) >> 0xb);
    lVar49 = uVar40 + (long)iVar58 * -0x2d42;
    lVar79 = lVar79 - (long)(int)sVar9 * (long)(int)sVar8;
    lVar54 = lVar49 + lVar77 * 0x16a0;
    auStack_f10[lVar53 + 0x10] = (uint)((ulong)(lVar79 * 0x2731 + lVar54) >> 0xb);
    auStack_f10[lVar53 + 0x60] = (uint)((ulong)(lVar54 + lVar79 * -0x2731) >> 0xb);
    auStack_f10[lVar53 + 0x18] = (uint)((ulong)(lVar72 + lVar56) >> 0xb);
    auStack_f10[lVar53 + 0x58] = (uint)((ulong)(lVar56 - lVar72) >> 0xb);
    lVar64 = lVar64 + lVar68 * -0x45a4;
    auStack_f10[lVar53 + 0x20] = (uint)((ulong)(lVar64 + lVar62) >> 0xb);
    auStack_f10[lVar53 + 0x50] = (uint)((ulong)(lVar62 - lVar64) >> 0xb);
    auStack_f10[lVar53 + 0x28] = (uint)((ulong)(lVar74 + lVar50) >> 0xb);
    auStack_f10[lVar53 + 0x48] = (uint)((ulong)(lVar50 - lVar74) >> 0xb);
    auStack_f10[lVar53 + 0x30] = (uint)((ulong)(lVar65 + lVar67) >> 0xb);
    auStack_f10[lVar53 + 0x40] = (uint)((ulong)(lVar67 - lVar65) >> 0xb);
    auStack_f10[lVar53 + 0x38] = (uint)((ulong)(lVar49 + lVar77 * 0x7ffffffd2c0) >> 0xb);
    lVar53 = lVar53 + 1;
  } while ((int)lVar53 != 8);
  lVar54 = 0;
  lVar53 = lStack_f38 + 0x80;
  uVar52 = uVar52 & 0xffffffff;
  do {
    uVar15 = auStack_f10[lVar54 + 1];
    uVar40 = (ulong)uVar15;
    puVar37 = (undefined1 *)(*(long *)(uVar45 + lVar54) + uVar52);
    iVar66 = auStack_f10[lVar54] * 0x2000 + 0x20000;
    uVar47 = auStack_f10[lVar54 + 6];
    uVar16 = auStack_f10[lVar54 + 7];
    iVar14 = iVar66 + uVar47 * -0xdfc;
    iVar17 = iVar66 + uVar47 * 0x249d;
    uVar51 = auStack_f10[lVar54 + 2];
    uVar30 = auStack_f10[lVar54 + 3];
    uVar1 = auStack_f10[lVar54 + 5];
    iVar66 = iVar66 + uVar47 * -0x2d42;
    iVar21 = uVar51 - auStack_f10[lVar54 + 4];
    iVar58 = auStack_f10[lVar54 + 4] + uVar51;
    iVar70 = iVar21 * 0x176 + iVar58 * 0x2ace + iVar17;
    iVar71 = iVar21 * -0xcc7 + iVar58 * -0x1182 + iVar17;
    iVar76 = uVar51 * 0x2e13 + iVar58 * -0x2ace + iVar21 * 0x176 + iVar14;
    iVar3 = iVar21 * 0xb50 + iVar58 * 0x194c + iVar14;
    iVar20 = iVar66 + iVar21 * 0x16a0;
    iVar14 = iVar58 * 0x1182 + uVar51 * -0x2e13 + iVar21 * -0xcc7 + iVar14;
    iVar19 = uVar1 * 0x2731 + (uVar15 - uVar16) * 0x2d02;
    uVar47 = iVar17 + iVar58 * -0x194c + iVar21 * 0xb50;
    uVar38 = (ulong)uVar47;
    iVar58 = iVar19 + uVar30 * 0x2b0a + uVar16 * 0x4ea3;
    iVar17 = (uVar15 - uVar16) - uVar1;
    uVar26 = ((uVar30 - uVar16) + uVar15) * 0x1a9a;
    *puVar37 = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar58 + iVar70) >> 0x12) & 0x3ff));
    uVar31 = uVar26 + uVar15 * 0x1071;
    puVar37[0xe] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar70 - iVar58) >> 0x12) & 0x3ff));
    puVar37[1] = *(undefined1 *)(lVar53 + ((ulong)(uVar31 + iVar3 >> 0x12) & 0x3ff));
    puVar37[0xd] = *(undefined1 *)(lVar53 + ((ulong)(iVar3 - uVar31 >> 0x12) & 0x3ff));
    puVar37[2] = *(undefined1 *)
                  (lVar53 + ((ulong)((uint)(iVar17 * 0x2731 + iVar20) >> 0x12) & 0x3ff));
    uVar27 = (uVar16 + uVar15) * 0x1268;
    uVar51 = uVar30 * -0x1a9a + uVar15 * 0xf39 + uVar1 * -0x2731 + uVar27;
    puVar37[0xc] = *(undefined1 *)
                    (lVar53 + ((ulong)((uint)(iVar20 + iVar17 * -0x2731) >> 0x12) & 0x3ff));
    uVar32 = uVar26 + (uVar30 - uVar16) * -0x45a4;
    uVar41 = (ulong)uVar32;
    puVar37[3] = *(undefined1 *)(lVar53 + ((ulong)(uVar51 + iVar76 >> 0x12) & 0x3ff));
    uVar1 = uVar1 * 0x2731 + uVar30 * -0x2b0a;
    uVar48 = (ulong)uVar1;
    puVar37[0xb] = *(undefined1 *)(lVar53 + ((ulong)(iVar76 - uVar51 >> 0x12) & 0x3ff));
    puVar37[4] = *(undefined1 *)(lVar53 + ((ulong)(uVar32 + uVar47 >> 0x12) & 0x3ff));
    iVar58 = uVar1 + uVar16 * -0x1bd1 + uVar27;
    puVar37[10] = *(undefined1 *)(lVar53 + ((ulong)(uVar47 - uVar32 >> 0x12) & 0x3ff));
    puVar37[5] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar58 + iVar71) >> 0x12) & 0x3ff));
    iVar19 = uVar30 * -0x1a9a + uVar15 * -0x2399 + iVar19;
    puVar37[9] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar71 - iVar58) >> 0x12) & 0x3ff));
    puVar37[6] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar19 + iVar14) >> 0x12) & 0x3ff));
    puVar37[8] = *(undefined1 *)(lVar53 + ((ulong)((uint)(iVar14 - iVar19) >> 0x12) & 0x3ff));
    puVar37[7] = *(undefined1 *)
                  (lVar53 + ((ulong)((uint)(iVar66 + iVar21 * 0xfffd2c0) >> 0x12) & 0x3ff));
    lVar54 = lVar54 + 8;
  } while (lVar54 != 0x78);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d30) {
    return;
  }
  ___stack_chk_fail();
  uStack_fa0 = 0xf39;
  uStack_f98 = 0x1268;
  uStack_f90 = 0xffffdc67;
  uStack_f88 = 0x1a9a;
  uStack_f80 = uVar45;
  uStack_f78 = (ulong)uVar31;
  uStack_f70 = 0xffffba5c;
  uStack_f68 = (ulong)uVar26;
  uStack_f60 = (ulong)uVar27;
  uStack_f58 = (ulong)uVar51;
  ppppuStack_f50 = &ppppuStack_cd0;
  uStack_f48 = 0x1081d92d8;
  uStack_11d4 = (int)uVar52;
  uStack_11d0 = uVar40;
  uStack_11c0 = uVar41;
  lVar53 = 0;
  lStack_fb0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_11e0 = *(long *)(uVar48 + 0x1a8);
  lStack_11c8 = *(long *)(uVar38 + 0x58);
  do {
    psVar42 = (short *)(lStack_11c8 + lVar53 * 2);
    psVar57 = (short *)(uVar41 + lVar53 * 2);
    iVar66 = (int)psVar42[0x20] * (int)psVar57[0x20];
    uVar48 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lStack_11b8 = uVar48 + (long)iVar66 * 0x29cf;
    lVar59 = uVar48 + (long)iVar66 * -0x29cf;
    lVar60 = uVar48 + (long)iVar66 * 0x1151;
    lVar68 = uVar48 + (long)iVar66 * -0x1151;
    iVar58 = (int)psVar42[0x30] * (int)psVar57[0x30];
    lVar67 = (long)(int)psVar42[0x10] * (long)(int)psVar57[0x10] -
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30];
    lVar49 = lVar67 * 0x8d4;
    lVar67 = lVar67 * 0x2c63;
    lVar56 = lVar67 + (long)iVar58 * 0x5203;
    iVar66 = (int)((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10]);
    lVar50 = lVar49 + (long)iVar66 * 0x1ccd;
    lVar67 = lVar67 + (long)iVar66 * -0x133e;
    lVar49 = lVar49 + (long)iVar58 * -0x1050;
    lVar54 = lVar56 + lStack_11b8;
    lStack_11b8 = lStack_11b8 - lVar56;
    lVar56 = lVar50 + lVar60;
    lVar60 = lVar60 - lVar50;
    lVar50 = lVar67 + lVar68;
    lVar68 = lVar68 - lVar67;
    lVar67 = lVar49 + lVar59;
    lVar59 = lVar59 - lVar49;
    lVar62 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    sVar61 = psVar57[0x18];
    sVar7 = psVar42[0x18];
    lVar78 = (long)(int)sVar7 * (long)(int)sVar61;
    sVar8 = psVar57[0x28];
    sVar9 = psVar42[0x28];
    sVar10 = psVar57[0x38];
    sVar11 = psVar42[0x38];
    lVar69 = lVar62 + (long)(int)sVar9 * (long)(int)sVar8;
    lVar64 = (lVar62 + (long)(int)sVar7 * (long)(int)sVar61) * 0x2b4e;
    lVar81 = lVar69 * 0x27e9;
    lVar74 = (lVar62 + (long)(int)sVar11 * (long)(int)sVar10) * 0x22fc;
    lVar73 = (lVar62 - (long)(int)sVar11 * (long)(int)sVar10) * 0x1cb6;
    lVar69 = lVar69 * 0x1555;
    lVar65 = (lVar62 - (long)(int)sVar7 * (long)(int)sVar61) * 0xd23;
    lVar49 = lVar64 + (long)(int)lVar62 * -0x492a + lVar81 + lVar74;
    lVar62 = lVar65 + (long)(int)lVar62 * -0x3abe + lVar69 + lVar73;
    lVar72 = (lVar78 + (long)(int)sVar9 * (long)(int)sVar8) * 0x470;
    iVar70 = (int)sVar11;
    iVar58 = (int)sVar10;
    lVar77 = lVar78 + (long)iVar70 * (long)iVar58;
    lVar75 = lVar77 * -0x1555;
    lVar64 = lVar64 + (long)(int)lVar78 * 0x24d + lVar72 + lVar75;
    lVar80 = (long)(int)sVar9 * (long)(int)sVar8;
    lVar79 = (lVar80 - (long)(int)sVar7 * (long)(int)sVar61) * 0x2d09;
    lVar77 = lVar77 * -0x27e9;
    lVar65 = lVar65 + (long)(int)lVar78 * 0x3f1a + lVar79 + lVar77;
    lVar78 = (lVar80 + (long)iVar70 * (long)iVar58) * -0x2b4e;
    lVar72 = lVar72 + (long)(int)lVar80 * -0x2406 + lVar81 + lVar78;
    iVar66 = (int)((long)iVar70 * (long)iVar58);
    lVar74 = lVar75 + (long)iVar66 * 0x2218 + lVar74 + lVar78;
    lVar75 = ((long)iVar70 * (long)iVar58 - (long)(int)sVar9 * (long)(int)sVar8) * 0xd23;
    lVar77 = lVar77 + (long)iVar66 * 0x6485 + lVar73 + lVar75;
    lVar79 = lVar79 + (long)(int)lVar80 * -0x1886 + lVar69 + lVar75;
    aiStack_11b0[lVar53] = (int)((ulong)(lVar49 + lVar54) >> 0xb);
    aiStack_11b0[lVar53 + 0x78] = (int)((ulong)(lVar54 - lVar49) >> 0xb);
    aiStack_11b0[lVar53 + 8] = (int)((ulong)(lVar64 + lVar56) >> 0xb);
    aiStack_11b0[lVar53 + 0x70] = (int)((ulong)(lVar56 - lVar64) >> 0xb);
    aiStack_11b0[lVar53 + 0x10] = (int)((ulong)(lVar72 + lVar50) >> 0xb);
    aiStack_11b0[lVar53 + 0x68] = (int)((ulong)(lVar50 - lVar72) >> 0xb);
    aiStack_11b0[lVar53 + 0x18] = (int)((ulong)(lVar74 + lVar67) >> 0xb);
    aiStack_11b0[lVar53 + 0x60] = (int)((ulong)(lVar67 - lVar74) >> 0xb);
    aiStack_11b0[lVar53 + 0x20] = (int)((ulong)(lVar77 + lVar59) >> 0xb);
    aiStack_11b0[lVar53 + 0x58] = (int)((ulong)(lVar59 - lVar77) >> 0xb);
    aiStack_11b0[lVar53 + 0x28] = (int)((ulong)(lVar79 + lVar68) >> 0xb);
    aiStack_11b0[lVar53 + 0x50] = (int)((ulong)(lVar68 - lVar79) >> 0xb);
    aiStack_11b0[lVar53 + 0x30] = (int)((ulong)(lVar65 + lVar60) >> 0xb);
    aiStack_11b0[lVar53 + 0x48] = (int)((ulong)(lVar60 - lVar65) >> 0xb);
    aiStack_11b0[lVar53 + 0x38] = (int)((ulong)(lVar62 + lStack_11b8) >> 0xb);
    aiStack_11b0[lVar53 + 0x40] = (int)((ulong)(lStack_11b8 - lVar62) >> 0xb);
    lVar53 = lVar53 + 1;
  } while ((int)lVar53 != 8);
  lVar54 = 0;
  lVar53 = lStack_11e0 + 0x80;
  do {
    iVar17 = aiStack_11b0[lVar54 + 1];
    iVar71 = aiStack_11b0[lVar54 + 4];
    iVar2 = aiStack_11b0[lVar54 + 5];
    iVar66 = aiStack_11b0[lVar54] * 0x2000 + 0x20000;
    iVar58 = iVar66 + iVar71 * 0x29cf;
    iVar34 = iVar66 + iVar71 * -0x29cf;
    iVar76 = aiStack_11b0[lVar54 + 2];
    iVar18 = aiStack_11b0[lVar54 + 3];
    iVar70 = iVar66 + iVar71 * 0x1151;
    iVar3 = aiStack_11b0[lVar54 + 6];
    iVar22 = aiStack_11b0[lVar54 + 7];
    iVar21 = (iVar76 - iVar3) * 0x8d4;
    iVar66 = iVar66 + iVar71 * -0x1151;
    iVar20 = (iVar76 - iVar3) * 0x2c63;
    iVar14 = iVar20 + iVar3 * 0x5203;
    iVar19 = iVar21 + iVar76 * 0x1ccd;
    iVar20 = iVar20 + iVar76 * -0x133e;
    iVar21 = iVar21 + iVar3 * -0x1050;
    iVar71 = iVar14 + iVar58;
    iVar58 = iVar58 - iVar14;
    iVar76 = iVar19 + iVar70;
    iVar70 = iVar70 - iVar19;
    iVar3 = iVar20 + iVar66;
    iVar66 = iVar66 - iVar20;
    iVar20 = (iVar18 + iVar17) * 0x2b4e;
    iVar23 = (iVar2 + iVar17) * 0x27e9;
    iVar24 = (iVar22 + iVar17) * 0x22fc;
    iVar14 = iVar21 + iVar34;
    iVar25 = (iVar17 - iVar22) * 0x1cb6;
    uVar16 = (iVar2 + iVar17) * 0x1555;
    iVar33 = (iVar17 - iVar18) * 0xd23;
    iVar34 = iVar34 - iVar21;
    iVar19 = iVar20 + iVar17 * -0x492a + iVar23 + iVar24;
    iVar17 = iVar33 + iVar17 * -0x3abe + uVar16 + iVar25;
    iVar21 = (iVar2 + iVar18) * 0x470;
    iVar28 = (iVar22 + iVar18) * -0x1555;
    iVar20 = iVar20 + iVar18 * 0x24d + iVar21 + iVar28;
    iVar29 = (iVar22 + iVar2) * -0x2b4e;
    uVar47 = iVar21 + iVar2 * -0x2406 + iVar23 + iVar29;
    iVar21 = iVar28 + iVar22 * 0x2218 + iVar24 + iVar29;
    pbVar39 = (byte *)(*(long *)(uVar40 + lVar54) + (uVar52 & 0xffffffff));
    bVar4 = *(byte *)(lVar53 + ((ulong)((uint)(iVar19 + iVar71) >> 0x12) & 0x3ff));
    *pbVar39 = bVar4;
    pbVar39[0xf] = *(byte *)(lVar53 + ((ulong)((uint)(iVar71 - iVar19) >> 0x12) & 0x3ff));
    pbVar39[1] = *(byte *)(lVar53 + ((ulong)((uint)(iVar20 + iVar76) >> 0x12) & 0x3ff));
    uVar30 = (iVar22 + iVar18) * -0x27e9;
    plVar46 = (long *)0x6485;
    uVar1 = uVar30 + iVar22 * 0x6485;
    iVar71 = (iVar22 - iVar2) * 0xd23;
    uVar51 = uVar1 + iVar25 + iVar71;
    uVar38 = (ulong)uVar51;
    pbVar39[0xe] = *(byte *)(lVar53 + ((ulong)((uint)(iVar76 - iVar20) >> 0x12) & 0x3ff));
    bVar5 = *(byte *)(lVar53 + ((ulong)(uVar47 + iVar3 >> 0x12) & 0x3ff));
    pbVar39[2] = bVar5;
    pbVar39[0xd] = *(byte *)(lVar53 + ((ulong)(iVar3 - uVar47 >> 0x12) & 0x3ff));
    pbVar39[3] = *(byte *)(lVar53 + ((ulong)((uint)(iVar21 + iVar14) >> 0x12) & 0x3ff));
    pbVar39[0xc] = *(byte *)(lVar53 + ((ulong)((uint)(iVar14 - iVar21) >> 0x12) & 0x3ff));
    pbVar39[4] = *(byte *)(lVar53 + ((ulong)(uVar51 + iVar34 >> 0x12) & 0x3ff));
    uVar15 = iVar33 + iVar18 * 0x3f1a;
    uVar48 = (ulong)uVar15;
    iVar76 = (iVar2 - iVar18) * 0x2d09;
    lVar56 = 0xffffe77a;
    iVar71 = iVar76 + iVar2 * -0x1886 + uVar16 + iVar71;
    pbVar39[0xb] = *(byte *)(lVar53 + ((ulong)(iVar34 - uVar51 >> 0x12) & 0x3ff));
    pbVar39[5] = *(byte *)(lVar53 + ((ulong)((uint)(iVar71 + iVar66) >> 0x12) & 0x3ff));
    iVar76 = uVar15 + iVar76 + uVar30;
    pbVar39[10] = *(byte *)(lVar53 + ((ulong)((uint)(iVar66 - iVar71) >> 0x12) & 0x3ff));
    pbVar39[6] = *(byte *)(lVar53 + ((ulong)((uint)(iVar76 + iVar70) >> 0x12) & 0x3ff));
    pbVar39[9] = *(byte *)(lVar53 + ((ulong)((uint)(iVar70 - iVar76) >> 0x12) & 0x3ff));
    pbVar39[7] = *(byte *)(lVar53 + ((ulong)((uint)(iVar17 + iVar58) >> 0x12) & 0x3ff));
    pbVar39[8] = *(byte *)(lVar53 + ((ulong)((uint)(iVar58 - iVar17) >> 0x12) & 0x3ff));
    lVar54 = lVar54 + 8;
  } while (lVar54 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_fb0) {
    return;
  }
  uVar52 = uStack_11d0;
  ___stack_chk_fail();
  uStack_1230 = (ulong)uVar47;
  uStack_1228 = (ulong)bVar4;
  uStack_1220 = (ulong)uVar1;
  uStack_1218 = (ulong)uVar30;
  uStack_1210 = uVar38;
  uStack_1208 = (ulong)bVar5;
  uStack_1200 = (ulong)uVar16;
  uStack_11f8 = 0xd23;
  ppppuStack_11f0 = &ppppuStack_f50;
  pcStack_11e8 = FUN_1081d98e8;
  lStack_1238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar53 = *(long *)(uVar48 + 0x1a8);
  psVar42 = (short *)(lVar56 + 0x70);
  puVar55 = auStack_12b8;
  uVar47 = 9;
  psVar57 = *(short **)(pbVar39 + 0x58);
  do {
    if (uVar47 != 5) {
      sVar61 = psVar42[-0x20];
      if (psVar42[-0x30] == 0 && psVar42[-0x28] == 0) {
        if (sVar61 != 0) {
LAB_1081d9990:
          iVar66 = 0;
          goto LAB_1081d99a0;
        }
        if (((psVar42[-0x10] != 0) || (psVar42[-8] != 0)) || (*psVar42 != 0)) {
          sVar61 = 0;
          goto LAB_1081d9990;
        }
        uVar51 = (int)psVar42[-0x38] * (int)*psVar57 * 4;
        *puVar55 = uVar51;
        puVar55[8] = uVar51;
        puVar55[0x10] = uVar51;
        lVar54 = 0x60;
      }
      else {
        iVar66 = psVar42[-0x28] * 0x3b21;
LAB_1081d99a0:
        lVar54 = (long)iVar66 * (long)(int)psVar57[0x10] +
                 (long)((int)psVar42[-8] * (int)psVar57[0x30]) * -0x187e;
        uVar38 = (long)(int)psVar42[-0x38] * (long)(int)*psVar57 * 0x4000 - lVar54;
        iVar66 = (int)psVar57[8] * (int)psVar42[-0x30];
        lVar50 = (long)((int)psVar57[0x38] * (int)*psVar42) * -0x6c2 +
                 (long)((int)psVar57[0x28] * (int)psVar42[-0x10]) * 0x2e75 +
                 (long)((int)psVar57[0x18] * (int)sVar61) * -0x4587 + (long)iVar66 * 0x21f9;
        lVar56 = (long)((int)psVar57[0x38] * (int)*psVar42) * -0x1050 +
                 (long)((int)psVar57[0x28] * (int)psVar42[-0x10]) * -0x133e +
                 (long)((int)psVar57[0x18] * (int)sVar61) * 0x1ccd + (long)iVar66 * 0x5203;
        lVar54 = lVar54 + (long)(int)psVar42[-0x38] * (long)(int)*psVar57 * 0x4000 + 0x800;
        *puVar55 = (uint)((ulong)(lVar56 + lVar54) >> 0xc);
        puVar55[0x18] = (uint)((ulong)(lVar54 - lVar56) >> 0xc);
        puVar55[8] = (uint)(lVar50 + uVar38 + 0x800 >> 0xc);
        uVar51 = (uint)((uVar38 + 0x800) - lVar50 >> 0xc);
        lVar54 = 0x40;
      }
      *(uint *)((long)puVar55 + lVar54) = uVar51;
    }
    psVar57 = psVar57 + 1;
    puVar55 = puVar55 + 1;
    uVar47 = uVar47 - 1;
    psVar42 = psVar42 + 1;
  } while (1 < uVar47);
  lVar54 = 0;
  lVar53 = lVar53 + 0x80;
  lVar56 = 0x1ccd;
  lVar50 = 0x5203;
  psVar42 = (short *)0x3b21;
  uVar52 = uVar52 & 0xffffffff;
  do {
    plVar44 = plVar46 + 1;
    piVar63 = (int *)((long)auStack_12b8 + lVar54);
    pbVar39 = (byte *)(*plVar46 + uVar52);
    iVar66 = *(int *)((long)auStack_12b8 + lVar54 + 4);
    iVar58 = *(int *)((long)auStack_12b8 + lVar54 + 8);
    iVar70 = *(int *)((long)auStack_12b8 + lVar54 + 0xc);
    if (iVar66 == 0 && iVar58 == 0) {
      if (iVar70 != 0) {
LAB_1081d9b14:
        iVar58 = 0;
        goto LAB_1081d9b20;
      }
      if (((*(int *)((long)auStack_12b8 + lVar54 + 0x14) != 0) ||
          (*(int *)((long)auStack_12b8 + lVar54 + 0x18) != 0)) ||
         (*(int *)((long)auStack_12b8 + lVar54 + 0x1c) != 0)) {
        iVar70 = 0;
        goto LAB_1081d9b14;
      }
      bVar4 = *(byte *)(lVar53 + ((ulong)(*piVar63 + 0x10U >> 5) & 0x3ff));
      *pbVar39 = bVar4;
      pbVar39[1] = bVar4;
      pbVar39[2] = bVar4;
      lVar67 = 3;
      uVar47 = 0;
      uVar40 = 0;
    }
    else {
      iVar58 = iVar58 * 0x3b21;
LAB_1081d9b20:
      uVar47 = *(uint *)((long)auStack_12b8 + lVar54);
      iVar71 = *(int *)((long)auStack_12b8 + lVar54 + 0x14);
      iVar58 = iVar58 + *(int *)((long)auStack_12b8 + lVar54 + 0x18) * -0x187e;
      uVar51 = uVar47 * 0x4000 - iVar58;
      uVar38 = (ulong)uVar51;
      iVar76 = *(int *)((long)auStack_12b8 + lVar54 + 0x1c);
      iVar3 = iVar66 * 0x5203 + iVar76 * -0x1050 + iVar71 * -0x133e + iVar70 * 0x1ccd;
      iVar58 = iVar58 + uVar47 * 0x4000 + 0x40000;
      bVar4 = *(byte *)(lVar53 + ((ulong)((uint)(iVar3 + iVar58) >> 0x13) & 0x3ff));
      uVar40 = (ulong)bVar4;
      iVar70 = iVar66 * 0x21f9 + iVar76 * -0x6c2 + iVar71 * 0x2e75 + iVar70 * -0x4587;
      *pbVar39 = bVar4;
      pbVar39[3] = *(byte *)(lVar53 + ((ulong)((uint)(iVar58 - iVar3) >> 0x13) & 0x3ff));
      iVar66 = uVar51 + 0x40000;
      bVar4 = *(byte *)(lVar53 + ((ulong)((uint)(iVar70 + iVar66) >> 0x13) & 0x3ff));
      piVar63 = (int *)(ulong)bVar4;
      pbVar39[1] = bVar4;
      bVar4 = *(byte *)(lVar53 + ((ulong)((uint)(iVar66 - iVar70) >> 0x13) & 0x3ff));
      lVar67 = 2;
    }
    pbVar39[lVar67] = bVar4;
    lVar54 = lVar54 + 0x20;
    plVar46 = plVar44;
  } while (lVar54 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1238) {
    return;
  }
  ___stack_chk_fail();
  uStack_12f0 = uVar38;
  uStack_12e8 = (ulong)uVar47;
  uStack_12e0 = uVar40;
  piStack_12d8 = piVar63;
  ppppuStack_12d0 = &ppppuStack_11f0;
  pcStack_12c8 = FUN_1081d9c18;
  lStack_12f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar54 = *(long *)(lVar56 + 0x1a8);
  uVar47 = 9;
  psVar57 = *(short **)(lVar50 + 0x58);
  lVar53 = 0x20;
  do {
    bVar36 = uVar47 != 3;
    uVar47 = uVar47 - 1;
    if ((bVar36) && ((uVar47 & 0x7ffffffd) != 4)) {
      sVar61 = psVar42[0x28];
      if (psVar42[8] == 0 && psVar42[0x18] == 0) {
        if (sVar61 != 0) {
LAB_1081d9cb0:
          iVar66 = 0;
          goto LAB_1081d9cc0;
        }
        if (psVar42[0x38] != 0) {
          sVar61 = 0;
          goto LAB_1081d9cb0;
        }
        iVar66 = (int)*psVar42 * (int)*psVar57 * 4;
        *(int *)((long)aiStack_1358 + lVar53) = iVar66;
      }
      else {
        iVar66 = psVar42[0x18] * -0x28ba;
LAB_1081d9cc0:
        lVar56 = (long)((int)psVar42[0x38] * (int)psVar57[0x38]) * -0x1712 +
                 (long)((int)sVar61 * (int)psVar57[0x28]) * 0x1b37 +
                 (long)iVar66 * (long)(int)psVar57[0x18] +
                 (long)((int)psVar42[8] * (int)psVar57[8]) * 0x73fc;
        uVar40 = (long)(int)*psVar42 * (long)(int)*psVar57 * 0x8000 | 0x1000;
        *(int *)((long)aiStack_1358 + lVar53) = (int)(lVar56 + uVar40 >> 0xd);
        iVar66 = (int)(uVar40 - lVar56 >> 0xd);
      }
      *(int *)((long)auStack_1338 + lVar53) = iVar66;
    }
    psVar42 = psVar42 + 1;
    psVar57 = psVar57 + 1;
    lVar53 = lVar53 + 4;
  } while (1 < uVar47);
  lVar53 = 0;
  lVar54 = lVar54 + 0x80;
  puVar55 = auStack_1338;
  uVar40 = uVar52 & 0xffffffff;
  bVar36 = true;
  do {
    pbVar39 = (byte *)(plVar44[lVar53] + uVar40);
    uVar47 = puVar55[3];
    uVar48 = (ulong)uVar47;
    uVar51 = puVar55[5];
    if (puVar55[1] == 0 && uVar47 == 0) {
      if (uVar51 != 0) {
LAB_1081d9da0:
        iVar66 = 0;
        goto LAB_1081d9dac;
      }
      if (puVar55[7] != 0) {
        uVar51 = 0;
        goto LAB_1081d9da0;
      }
      bVar4 = *(byte *)(lVar54 + ((ulong)(*puVar55 + 0x10 >> 5) & 0x3ff));
      *pbVar39 = bVar4;
      uVar47 = 0;
    }
    else {
      iVar66 = uVar47 * -0x28ba;
LAB_1081d9dac:
      uVar47 = *puVar55;
      uVar52 = (ulong)puVar55[7];
      iVar58 = iVar66 + puVar55[1] * 0x73fc + puVar55[7] * -0x1712 + uVar51 * 0x1b37;
      iVar66 = uVar47 * 0x8000 + 0x80000;
      bVar4 = *(byte *)(lVar54 + ((ulong)((uint)(iVar58 + iVar66) >> 0x14) & 0x3ff));
      uVar48 = (ulong)bVar4;
      *pbVar39 = bVar4;
      bVar4 = *(byte *)(lVar54 + ((ulong)((uint)(iVar66 - iVar58) >> 0x14) & 0x3ff));
    }
    uVar38 = (ulong)bVar4;
    puVar43 = (ushort *)(ulong)uVar47;
    pbVar39[1] = bVar4;
    puVar55 = puVar55 + 8;
    lVar53 = 1;
    bVar35 = !bVar36;
    bVar36 = false;
    if (bVar35) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_12f8) {
        return;
      }
      ___stack_chk_fail();
      *(undefined1 *)(*plVar44 + (uVar52 & 0xffffffff)) =
           *(undefined1 *)
            (*(long *)(uVar38 + 0x1a8) +
             ((ulong)((uint)**(ushort **)(uVar48 + 0x58) * (uint)*puVar43 + 4 >> 3) & 0x3ff) + 0x80)
      ;
      return;
    }
  } while( true );
}



/* Entry: 1081d7150; end: 1081d729f;  */

void FUN_1081d7150(long param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  bool bVar36;
  bool bVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  byte *pbVar41;
  ulong uVar42;
  ulong uVar43;
  short *psVar44;
  ushort *puVar45;
  ulong uVar46;
  long *plVar47;
  long *plVar48;
  long lVar49;
  long lVar50;
  uint uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  uint *puVar55;
  long lVar56;
  uint uVar57;
  long lVar58;
  short *psVar59;
  int iVar60;
  long lVar61;
  long lVar62;
  short sVar63;
  int *piVar64;
  long lVar65;
  int iVar66;
  long lVar67;
  long lVar68;
  int iVar69;
  int iVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  int iVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  int aiStack_12b8 [8];
  uint auStack_1298 [16];
  long lStack_1258;
  ulong uStack_1250;
  ulong uStack_1248;
  ulong uStack_1240;
  int *piStack_1238;
  undefined8 ****ppppuStack_1230;
  code *pcStack_1228;
  uint auStack_1218 [32];
  long lStack_1198;
  ulong uStack_1190;
  ulong uStack_1188;
  ulong uStack_1180;
  ulong uStack_1178;
  ulong uStack_1170;
  ulong uStack_1168;
  ulong uStack_1160;
  undefined8 uStack_1158;
  undefined8 ****ppppuStack_1150;
  code *pcStack_1148;
  long lStack_1140;
  undefined4 uStack_1134;
  ulong uStack_1130;
  long lStack_1128;
  ulong uStack_1120;
  long lStack_1118;
  int aiStack_1110 [128];
  long lStack_f10;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  ulong uStack_ee0;
  ulong uStack_ed8;
  undefined8 uStack_ed0;
  ulong uStack_ec8;
  ulong uStack_ec0;
  ulong uStack_eb8;
  undefined8 ****ppppuStack_eb0;
  undefined8 uStack_ea8;
  long lStack_e98;
  undefined4 uStack_e8c;
  ulong uStack_e88;
  long lStack_e80;
  ulong uStack_e78;
  uint auStack_e70 [120];
  long lStack_c90;
  ulong uStack_c80;
  ulong uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  long lStack_c40;
  ulong uStack_c38;
  undefined8 ****ppppuStack_c30;
  undefined8 uStack_c28;
  long lStack_c18;
  undefined4 uStack_c0c;
  long lStack_c08;
  uint auStack_c00 [112];
  long lStack_a40;
  undefined8 uStack_a30;
  ulong uStack_a28;
  ulong uStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  undefined8 uStack_a08;
  ulong uStack_a00;
  undefined8 uStack_9f8;
  ulong uStack_9f0;
  ulong uStack_9e8;
  undefined8 ****ppppuStack_9e0;
  undefined8 uStack_9d8;
  long lStack_9c8;
  undefined4 uStack_9bc;
  ulong uStack_9b8;
  int aiStack_9b0 [104];
  long lStack_810;
  ulong uStack_800;
  ulong uStack_7f8;
  undefined1 *puStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 ****ppppuStack_7b0;
  undefined8 uStack_7a8;
  long lStack_798;
  uint uStack_78c;
  ulong uStack_788;
  uint auStack_780 [96];
  long lStack_600;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long *plStack_5b0;
  ulong uStack_5a8;
  undefined1 ****ppppuStack_5a0;
  undefined8 uStack_598;
  long lStack_588;
  undefined4 uStack_57c;
  long *plStack_578;
  int aiStack_570 [88];
  long lStack_410;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  undefined1 *puStack_3c8;
  ulong uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 ***pppuStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  undefined4 uStack_394;
  uint auStack_390 [80];
  long lStack_250;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined1 **ppuStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  uint uStack_1d4;
  int aiStack_1d0 [72];
  long lStack_b0;
  undefined1 *puStack_50;
  code *pcStack_48;
  int aiStack_3c [9];
  long lStack_18;
  
  puStack_50 = &stack0xfffffffffffffff0;
  lVar52 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar53 = *(long *)(param_1 + 0x1a8);
  lVar58 = *(long *)(param_2 + 0x58);
  do {
    psVar44 = (short *)(lVar58 + lVar52 * 2);
    psVar59 = (short *)(param_3 + lVar52 * 2);
    uVar38 = (long)(int)*psVar59 * (long)(int)*psVar44 * 0x2000 | 0x400;
    sVar63 = psVar59[0x10];
    sVar9 = psVar44[0x10];
    lVar50 = uVar38 + (long)(int)((long)(int)sVar9 * (long)(int)sVar63) * 0x16a1;
    sVar10 = psVar59[8];
    sVar11 = psVar44[8];
    aiStack_3c[lVar52] = (int)((ulong)(lVar50 + (long)((int)sVar10 * (int)sVar11) * 0x2731) >> 0xb);
    aiStack_3c[lVar52 + 6] =
         (int)((ulong)(lVar50 + (long)((int)sVar10 * (int)sVar11) * -0x2731) >> 0xb);
    aiStack_3c[lVar52 + 3] =
         (int)(uVar38 + (long)(int)sVar9 * (long)(int)sVar63 * 0x7ffffffd2be >> 0xb);
    lVar52 = lVar52 + 1;
  } while ((int)lVar52 != 3);
  lVar52 = 0;
  lVar53 = lVar53 + 0x80;
  do {
    plVar47 = param_4 + 1;
    pbVar41 = (byte *)(*param_4 + (ulong)param_5);
    iVar60 = *(int *)((long)aiStack_3c + lVar52 + 4);
    iVar66 = *(int *)((long)aiStack_3c + lVar52) * 0x2000 + 0x20000;
    iVar69 = *(int *)((long)aiStack_3c + lVar52 + 8);
    uVar57 = iVar66 + iVar69 * 0x16a1;
    uVar39 = (ulong)uVar57;
    bVar6 = *(byte *)(lVar53 + ((ulong)(uVar57 + iVar60 * 0x2731 >> 0x12) & 0x3ff));
    uVar38 = (ulong)bVar6;
    *pbVar41 = bVar6;
    pbVar41[2] = *(byte *)(lVar53 + ((ulong)(uVar57 + iVar60 * -0x2731 >> 0x12) & 0x3ff));
    pbVar41[1] = *(byte *)(lVar53 + ((ulong)((uint)(iVar66 + iVar69 * 0xfffd2be) >> 0x12) & 0x3ff));
    lVar52 = lVar52 + 0xc;
    param_4 = plVar47;
  } while (lVar52 != 0x24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  uStack_1d4 = param_5;
  ___stack_chk_fail();
  pcStack_48 = FUN_1081d72a0;
  lVar52 = 0;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1e0 = *(long *)(uVar38 + 0x1a8);
  lVar53 = *(long *)(uVar39 + 0x58);
  do {
    psVar44 = (short *)(lVar53 + lVar52 * 2);
    psVar59 = (short *)(param_3 + lVar52 * 2);
    lVar65 = (long)(int)psVar44[0x10] * (long)(int)psVar59[0x10];
    uVar38 = (long)(int)*psVar59 * (long)(int)*psVar44 * 0x2000 | 0x400;
    sVar63 = psVar59[0x20];
    sVar9 = psVar44[0x20];
    iVar66 = (int)sVar9 * (int)sVar63;
    lVar76 = (long)(int)psVar44[8] * (long)(int)psVar59[8];
    sVar10 = psVar59[0x28];
    sVar11 = psVar44[0x28];
    sVar12 = psVar59[0x38];
    sVar13 = psVar44[0x38];
    lVar54 = (long)(int)sVar11 * (long)(int)sVar10 - (long)(int)sVar13 * (long)(int)sVar12;
    lVar49 = (lVar76 - (long)(int)sVar11 * (long)(int)sVar10) -
             (long)(int)sVar13 * (long)(int)sVar12;
    lVar79 = uVar38 + (long)((int)psVar44[0x30] * (int)psVar59[0x30]) * 0x16a1;
    lVar71 = uVar38 + (long)((int)psVar44[0x30] * (int)psVar59[0x30]) * -0x2d42;
    lVar77 = lVar65 - (long)(int)sVar9 * (long)(int)sVar63;
    lVar73 = lVar65 + (long)(int)sVar9 * (long)(int)sVar63;
    iVar60 = (int)psVar59[0x18] * (int)psVar44[0x18];
    lVar56 = (lVar76 + (long)(int)sVar11 * (long)(int)sVar10) * 0x1d17;
    lVar58 = (long)iVar60 * -0x2731 + lVar54 * -0x2c91 + lVar56;
    lVar50 = lVar79 + lVar73 * 0x2a87 + (long)iVar66 * -0x7dc;
    lVar76 = (lVar76 + (long)(int)sVar13 * (long)(int)sVar12) * 0xf7a;
    lVar56 = lVar76 + lVar56 + (long)iVar60 * 0x2731;
    lVar76 = lVar54 * 0x2c91 + (long)iVar60 * -0x2731 + lVar76;
    aiStack_1d0[lVar52] = (int)((ulong)(lVar56 + lVar50) >> 0xb);
    lVar54 = lVar71 + lVar77 * 0x16a1;
    aiStack_1d0[lVar52 + 0x40] = (int)((ulong)(lVar50 - lVar56) >> 0xb);
    aiStack_1d0[lVar52 + 8] = (int)((ulong)(lVar49 * 0x2731 + lVar54) >> 0xb);
    lVar50 = lVar79 + lVar73 * -0x2a87 + (long)(int)lVar65 * 0x22ab;
    aiStack_1d0[lVar52 + 0x38] = (int)((ulong)(lVar54 + lVar49 * -0x2731) >> 0xb);
    aiStack_1d0[lVar52 + 0x10] = (int)((ulong)(lVar58 + lVar50) >> 0xb);
    aiStack_1d0[lVar52 + 0x30] = (int)((ulong)(lVar50 - lVar58) >> 0xb);
    lVar58 = lVar79 + (long)(int)lVar65 * -0x22ab + (long)iVar66 * 0x7dc;
    aiStack_1d0[lVar52 + 0x18] = (int)((ulong)(lVar76 + lVar58) >> 0xb);
    aiStack_1d0[lVar52 + 0x28] = (int)((ulong)(lVar58 - lVar76) >> 0xb);
    aiStack_1d0[lVar52 + 0x20] = (int)((ulong)(lVar71 + lVar77 * 0x7ffffffd2be) >> 0xb);
    lVar52 = lVar52 + 1;
  } while ((int)lVar52 != 8);
  lVar53 = 0;
  lVar52 = lStack_1e0 + 0x80;
  lVar58 = 0x1d17;
  lVar50 = 0xf7a;
  lVar56 = 0x2c91;
  uVar38 = (ulong)uStack_1d4;
  do {
    puVar1 = (undefined1 *)(*(long *)((long)plVar47 + lVar53) + uVar38);
    iVar2 = aiStack_1d0[lVar53 + 1];
    iVar66 = aiStack_1d0[lVar53] * 0x2000 + 0x20000;
    iVar70 = aiStack_1d0[lVar53 + 2];
    iVar3 = aiStack_1d0[lVar53 + 7];
    uVar16 = iVar66 + aiStack_1d0[lVar53 + 6] * 0x16a1;
    iVar75 = aiStack_1d0[lVar53 + 4];
    iVar4 = aiStack_1d0[lVar53 + 5];
    uVar17 = iVar66 + aiStack_1d0[lVar53 + 6] * -0x2d42;
    iVar20 = aiStack_1d0[lVar53 + 3] * -0x2731;
    iVar18 = uVar17 + (iVar70 - iVar75) * 0x16a1;
    iVar21 = (iVar4 + iVar2) * 0x1d17;
    iVar69 = (iVar3 + iVar2) * 0xf7a;
    iVar66 = (iVar75 + iVar70) * 0x2a87 + iVar75 * -0x7dc + uVar16;
    uVar30 = iVar20 + (iVar4 - iVar3) * -0x2c91;
    iVar60 = iVar21 + aiStack_1d0[lVar53 + 3] * 0x2731 + iVar69;
    uVar31 = uVar16 + (iVar75 + iVar70) * -0x2a87;
    iVar2 = iVar2 - (iVar4 + iVar3);
    *puVar1 = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar60 + iVar66) >> 0x12) & 0x3ff));
    uVar57 = uVar30 + iVar21;
    puVar1[8] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar66 - iVar60) >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar52 + ((ulong)((uint)(iVar2 * 0x2731 + iVar18) >> 0x12) & 0x3ff));
    uVar51 = uVar31 + iVar70 * 0x22ab;
    puVar1[1] = bVar6;
    uVar32 = uVar16 + iVar70 * -0x22ab;
    puVar1[7] = *(undefined1 *)
                 (lVar52 + ((ulong)((uint)(iVar18 + iVar2 * -0x2731) >> 0x12) & 0x3ff));
    iVar69 = (iVar4 - iVar3) * 0x2c91 + iVar20 + iVar69;
    puVar1[2] = *(undefined1 *)(lVar52 + ((ulong)(uVar57 + uVar51 >> 0x12) & 0x3ff));
    iVar66 = uVar32 + iVar75 * 0x7dc;
    puVar1[6] = *(undefined1 *)(lVar52 + ((ulong)(uVar51 - uVar57 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar69 + iVar66) >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar66 - iVar69) >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)
                 (lVar52 + ((ulong)(uVar17 + (iVar70 - iVar75) * 0xfffd2be >> 0x12) & 0x3ff));
    lVar53 = lVar53 + 8;
  } while (lVar53 != 0x48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  uStack_240 = (ulong)uVar31;
  uStack_238 = (ulong)uVar30;
  uStack_200 = 0xfffd2be;
  uStack_1e8 = 0x1081d7634;
  uStack_394 = (int)uVar38;
  lVar52 = 0;
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_3a0 = *(long *)(lVar58 + 0x1a8);
  lVar53 = *(long *)(lVar50 + 0x58);
  uStack_230 = (ulong)uVar51;
  uStack_228 = (ulong)uVar16;
  uStack_220 = (ulong)uVar57;
  uStack_218 = (ulong)(uint)(iVar70 * 0x22ab);
  uStack_210 = (ulong)bVar6;
  uStack_208 = (ulong)uVar32;
  uStack_1f8 = (ulong)uVar17;
  ppuStack_1f0 = &puStack_50;
  do {
    psVar44 = (short *)(lVar53 + lVar52 * 2);
    psVar59 = (short *)(lVar56 + lVar52 * 2);
    uVar39 = (long)(int)*psVar59 * (long)(int)*psVar44 * 0x2000 | 0x400;
    iVar69 = (int)psVar44[0x20] * (int)psVar59[0x20];
    lVar73 = uVar39 + (long)iVar69 * 0x249d;
    lVar77 = uVar39 + (long)iVar69 * -0xdfc;
    lVar76 = ((long)(int)psVar44[0x10] * (long)(int)psVar59[0x10] +
             (long)(int)psVar44[0x30] * (long)(int)psVar59[0x30]) * 0x1a9a;
    lVar50 = lVar76 + (long)(int)((long)(int)psVar44[0x10] * (long)(int)psVar59[0x10]) * 0x1071;
    lVar76 = lVar76 + (long)((int)psVar44[0x30] * (int)psVar59[0x30]) * -0x45a4;
    lVar58 = lVar50 + lVar73;
    lVar73 = lVar73 - lVar50;
    lVar50 = lVar76 + lVar77;
    lVar77 = lVar77 - lVar76;
    iVar60 = (int)psVar44[8] * (int)psVar59[8];
    lVar71 = (long)(int)psVar44[0x28] * (long)(int)psVar59[0x28];
    lVar79 = (long)(int)psVar44[0x18] * (long)(int)psVar59[0x18] +
             (long)(int)psVar44[0x38] * (long)(int)psVar59[0x38];
    lVar65 = (long)(int)psVar44[0x18] * (long)(int)psVar59[0x18] -
             (long)(int)psVar44[0x38] * (long)(int)psVar59[0x38];
    lVar49 = lVar65 * 0x9e3 + lVar71 * 0x2000;
    lVar76 = lVar79 * 0x1e6f + (long)iVar60 * 0x2cb3 + lVar49;
    lVar49 = (long)iVar60 * 0x714 + lVar79 * -0x1e6f + lVar49;
    lVar54 = lVar65 * -0x19e3 + lVar71 * 0x2000;
    iVar66 = (iVar60 - (int)lVar71) - (int)lVar65;
    lVar65 = ((long)iVar60 * 0x2853 + lVar79 * -0x12cf) - lVar54;
    lVar54 = (long)iVar60 * 0x148c + lVar79 * -0x12cf + lVar54;
    auStack_390[lVar52] = (uint)((ulong)(lVar76 + lVar58) >> 0xb);
    auStack_390[lVar52 + 0x48] = (uint)((ulong)(lVar58 - lVar76) >> 0xb);
    auStack_390[lVar52 + 8] = (uint)((ulong)(lVar65 + lVar50) >> 0xb);
    auStack_390[lVar52 + 0x40] = (uint)((ulong)(lVar50 - lVar65) >> 0xb);
    iVar60 = (int)(uVar39 + (long)iVar69 * -0x2d42 >> 0xb);
    auStack_390[lVar52 + 0x10] = iVar60 + iVar66 * 4;
    auStack_390[lVar52 + 0x38] = iVar60 + iVar66 * -4;
    auStack_390[lVar52 + 0x18] = (uint)((ulong)(lVar54 + lVar77) >> 0xb);
    auStack_390[lVar52 + 0x30] = (uint)((ulong)(lVar77 - lVar54) >> 0xb);
    auStack_390[lVar52 + 0x20] = (uint)((ulong)(lVar49 + lVar73) >> 0xb);
    auStack_390[lVar52 + 0x28] = (uint)((ulong)(lVar73 - lVar49) >> 0xb);
    lVar52 = lVar52 + 1;
  } while ((int)lVar52 != 8);
  lVar53 = 0;
  lVar52 = lStack_3a0 + 0x80;
  lVar58 = 0x1e6f;
  lVar50 = 0x2cb3;
  lVar56 = 0x714;
  uVar38 = uVar38 & 0xffffffff;
  do {
    uVar16 = auStack_390[lVar53 + 1];
    uVar57 = auStack_390[lVar53 + 4];
    uVar17 = auStack_390[lVar53 + 5];
    iVar66 = auStack_390[lVar53] * 0x2000 + 0x20000;
    iVar60 = iVar66 + uVar57 * 0x249d;
    iVar69 = iVar66 + uVar57 * -0xdfc;
    uVar30 = iVar66 + uVar57 * -0x2d42;
    iVar75 = (auStack_390[lVar53 + 6] + auStack_390[lVar53 + 2]) * 0x1a9a;
    iVar70 = iVar75 + auStack_390[lVar53 + 2] * 0x1071;
    iVar75 = iVar75 + auStack_390[lVar53 + 6] * -0x45a4;
    iVar66 = iVar70 + iVar60;
    uVar32 = iVar60 - iVar70;
    uVar57 = iVar75 + iVar69;
    iVar60 = auStack_390[lVar53 + 7] + auStack_390[lVar53 + 3];
    iVar2 = auStack_390[lVar53 + 3] - auStack_390[lVar53 + 7];
    uVar33 = iVar69 - iVar75;
    iVar69 = iVar2 * 0x9e3 + uVar17 * 0x2000;
    iVar70 = iVar60 * 0x1e6f + uVar16 * 0x2cb3 + iVar69;
    puVar1 = (undefined1 *)(*(long *)((long)plVar47 + lVar53) + uVar38);
    uVar51 = iVar60 * -0x1e6f + uVar16 * 0x714 + iVar69;
    iVar69 = iVar2 * -0x19e3 + uVar17 * 0x2000;
    *puVar1 = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar70 + iVar66) >> 0x12) & 0x3ff));
    uVar31 = uVar16 * 0x2853 - (iVar60 * 0x12cf + iVar69);
    puVar1[9] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar66 - iVar70) >> 0x12) & 0x3ff));
    iVar2 = (uVar16 - uVar17) - iVar2;
    puVar1[1] = *(undefined1 *)(lVar52 + ((ulong)(uVar31 + uVar57 >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar52 + ((ulong)(uVar57 - uVar31 >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar52 + ((ulong)(uVar30 + iVar2 * 0x2000 >> 0x12) & 0x3ff));
    iVar69 = iVar60 * -0x12cf + uVar16 * 0x148c + iVar69;
    puVar1[7] = *(undefined1 *)(lVar52 + ((ulong)(uVar30 + iVar2 * -0x2000 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)(lVar52 + ((ulong)(iVar69 + uVar33 >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar52 + ((ulong)(uVar33 - iVar69 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar52 + ((ulong)(uVar51 + uVar32 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar52 + ((ulong)(uVar32 - uVar51 >> 0x12) & 0x3ff));
    lVar53 = lVar53 + 8;
  } while (lVar53 != 0x50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
    return;
  }
  ___stack_chk_fail();
  uStack_400 = (ulong)uVar57;
  uStack_3f8 = (ulong)uVar31;
  uStack_3f0 = (ulong)(uVar16 - uVar17);
  uStack_3e8 = (ulong)uVar33;
  uStack_3e0 = (ulong)uVar51;
  uStack_3d8 = (ulong)uVar30;
  uStack_3d0 = (ulong)uVar16;
  puStack_3c8 = puVar1;
  uStack_3c0 = (ulong)uVar32;
  uStack_3b8 = 0x148c;
  pppuStack_3b0 = &ppuStack_1f0;
  uStack_3a8 = 0x1081d7a08;
  uStack_57c = (int)uVar38;
  plStack_578 = plVar47;
  lVar52 = 0;
  lStack_410 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_588 = *(long *)(lVar58 + 0x1a8);
  lVar53 = *(long *)(lVar50 + 0x58);
  do {
    psVar44 = (short *)(lVar53 + lVar52 * 2);
    psVar59 = (short *)(lVar56 + lVar52 * 2);
    sVar63 = psVar59[0x10];
    sVar9 = psVar44[0x10];
    lVar77 = (long)(int)sVar9 * (long)(int)sVar63;
    lVar79 = (long)(int)psVar44[0x20] * (long)(int)psVar59[0x20];
    sVar10 = psVar59[0x30];
    sVar11 = psVar44[0x30];
    iVar60 = (int)sVar11 * (int)sVar10;
    lVar73 = (long)(int)psVar44[8] * (long)(int)psVar59[8];
    lVar68 = (long)(int)psVar44[0x18] * (long)(int)psVar59[0x18];
    lVar62 = lVar77 + (long)(int)sVar11 * (long)(int)sVar10;
    sVar12 = psVar59[0x28];
    sVar13 = psVar44[0x28];
    iVar69 = (int)sVar13 * (int)sVar12;
    sVar14 = psVar59[0x38];
    sVar15 = psVar44[0x38];
    lVar61 = lVar62 - (long)(int)psVar44[0x20] * (long)(int)psVar59[0x20];
    iVar66 = (int)sVar15 * (int)sVar14;
    lVar58 = lVar73 + (long)(int)psVar44[0x18] * (long)(int)psVar59[0x18];
    lVar76 = lVar58 * 0x1c6a;
    lVar67 = (lVar73 + (long)(int)sVar13 * (long)(int)sVar12) * 0x1574;
    lVar65 = (lVar58 + (long)(int)sVar13 * (long)(int)sVar12 + (long)(int)sVar15 * (long)(int)sVar14
             ) * 0xcc0;
    lVar50 = lVar65 + (lVar68 + (long)(int)sVar13 * (long)(int)sVar12) * -0x2537;
    lVar54 = (lVar68 + (long)(int)sVar15 * (long)(int)sVar14) * -0x398b;
    lVar58 = lVar67 + (long)iVar69 * -0x2626 + lVar50;
    lVar50 = lVar76 + (long)(int)lVar68 * 0x4258 + lVar54 + lVar50;
    uVar39 = (long)(int)*psVar59 * (long)(int)*psVar44 * 0x2000 | 0x400;
    lVar71 = (lVar79 - (long)(int)sVar11 * (long)(int)sVar10) * 0x517e;
    lVar49 = lVar65 + (lVar73 + (long)(int)sVar15 * (long)(int)sVar14) * 3000;
    lVar76 = lVar76 + (long)(int)lVar73 * -0x1d8a + lVar67 + lVar49;
    lVar49 = lVar54 + (long)iVar66 * 0x4347 + lVar49;
    lVar67 = uVar39 + lVar61 * 0x2b6c;
    lVar54 = lVar71 + (long)iVar60 * 0x43b5 + lVar67;
    lVar65 = (long)(int)lVar68 * -0x2ef3 + (long)iVar69 * 0x200b + (long)iVar66 * -0x35ea + lVar65;
    aiStack_570[lVar52] = (int)((ulong)(lVar76 + lVar54) >> 0xb);
    lVar73 = lVar67 + (lVar79 - (long)(int)sVar9 * (long)(int)sVar63) * 0xdc9;
    lVar71 = lVar71 + (long)(int)lVar79 * -0x3a4c + lVar73;
    aiStack_570[lVar52 + 0x50] = (int)((ulong)(lVar54 - lVar76) >> 0xb);
    lVar67 = lVar67 + lVar62 * -0x24fb;
    aiStack_570[lVar52 + 8] = (int)((ulong)(lVar50 + lVar71) >> 0xb);
    iVar66 = (int)lVar77;
    lVar76 = (long)iVar66 * -0x2c83 + (long)(int)lVar79 * 0x3e39 + lVar67;
    lVar67 = lVar67 + (long)iVar60 * -0x193d;
    aiStack_570[lVar52 + 0x48] = (int)((ulong)(lVar71 - lVar50) >> 0xb);
    aiStack_570[lVar52 + 0x10] = (int)((ulong)(lVar58 + lVar67) >> 0xb);
    aiStack_570[lVar52 + 0x40] = (int)((ulong)(lVar67 - lVar58) >> 0xb);
    lVar73 = lVar73 + (long)iVar66 * -0x306f;
    aiStack_570[lVar52 + 0x18] = (int)((ulong)(lVar49 + lVar73) >> 0xb);
    aiStack_570[lVar52 + 0x38] = (int)((ulong)(lVar73 - lVar49) >> 0xb);
    aiStack_570[lVar52 + 0x20] = (int)((ulong)(lVar65 + lVar76) >> 0xb);
    aiStack_570[lVar52 + 0x30] = (int)((ulong)(lVar76 - lVar65) >> 0xb);
    aiStack_570[lVar52 + 0x28] = (int)(uVar39 + lVar61 * 0x7ffffffd2bf >> 0xb);
    lVar52 = lVar52 + 1;
  } while ((int)lVar52 != 8);
  lVar53 = 0;
  lVar52 = lStack_588 + 0x80;
  do {
    puVar1 = (undefined1 *)(*(long *)((long)plVar47 + lVar53) + (uVar38 & 0xffffffff));
    iVar18 = aiStack_570[lVar53 + 1];
    iVar75 = aiStack_570[lVar53 + 4];
    iVar20 = aiStack_570[lVar53 + 5];
    iVar3 = aiStack_570[lVar53 + 6];
    iVar21 = aiStack_570[lVar53 + 7];
    iVar66 = aiStack_570[lVar53] * 0x2000 + 0x20000;
    iVar69 = (iVar75 - iVar3) * 0x517e;
    iVar4 = aiStack_570[lVar53 + 2];
    iVar5 = aiStack_570[lVar53 + 3];
    iVar2 = (iVar3 + iVar4) - iVar75;
    iVar70 = iVar66 + iVar2 * 0x2b6c;
    iVar19 = iVar70 + (iVar75 - iVar4) * 0xdc9;
    iVar60 = iVar69 + iVar3 * 0x43b5 + iVar70;
    iVar69 = iVar69 + iVar75 * -0x3a4c + iVar19;
    iVar70 = iVar70 + (iVar3 + iVar4) * -0x24fb;
    uVar17 = iVar66 + iVar2 * 0xfffd2bf;
    uVar46 = (ulong)uVar17;
    iVar19 = iVar19 + iVar4 * -0x306f;
    iVar2 = (iVar5 + iVar18 + iVar20 + iVar21) * 0xcc0;
    iVar22 = (iVar5 + iVar18) * 0x1c6a;
    uVar30 = iVar70 + iVar3 * -0x193d;
    uVar39 = (ulong)uVar30;
    iVar23 = (iVar20 + iVar18) * 0x1574;
    iVar3 = iVar2 + (iVar21 + iVar18) * 3000;
    uVar57 = iVar22 + iVar18 * -0x1d8a + iVar23;
    iVar70 = iVar4 * -0x2c83 + iVar75 * 0x3e39 + iVar70;
    iVar66 = uVar57 + iVar3;
    *puVar1 = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar66 + iVar60) >> 0x12) & 0x3ff));
    iVar4 = (iVar21 + iVar5) * -0x398b;
    iVar75 = iVar2 + (iVar20 + iVar5) * -0x2537;
    uVar51 = iVar23 + iVar20 * -0x2626 + iVar75;
    iVar75 = iVar22 + iVar5 * 0x4258 + iVar4 + iVar75;
    puVar1[10] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar60 - iVar66) >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar52 + ((ulong)((uint)(iVar75 + iVar69) >> 0x12) & 0x3ff));
    uVar42 = (ulong)bVar6;
    puVar1[1] = bVar6;
    uVar16 = iVar4 + iVar21 * 0x4347 + iVar3;
    uVar40 = (ulong)uVar16;
    puVar1[9] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar69 - iVar75) >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar52 + ((ulong)(uVar51 + uVar30 >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar52 + ((ulong)(uVar30 - uVar51 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)(lVar52 + ((ulong)(uVar16 + iVar19 >> 0x12) & 0x3ff));
    iVar2 = iVar5 * -0x2ef3 + iVar20 * 0x200b + iVar21 * -0x35ea + iVar2;
    puVar1[7] = *(undefined1 *)(lVar52 + ((ulong)(iVar19 - uVar16 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar2 + iVar70) >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar70 - iVar2) >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar52 + ((ulong)(uVar17 >> 0x12) & 0x3ff));
    lVar53 = lVar53 + 8;
  } while (lVar53 != 0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_410) {
    return;
  }
  ___stack_chk_fail();
  uStack_5f0 = 0xffffca16;
  uStack_5e8 = 0x200b;
  uStack_5e0 = 0xffffd10d;
  uStack_5d8 = 0x4347;
  uStack_5d0 = 0xffffc675;
  uStack_5c8 = 0xffffd9da;
  uStack_5c0 = 0x4258;
  uStack_5b8 = 0xffffdac9;
  plStack_5b0 = plVar47;
  uStack_5a8 = (ulong)uVar57;
  ppppuStack_5a0 = &pppuStack_3b0;
  uStack_598 = 0x1081d7eb8;
  uStack_78c = uVar51;
  uStack_788 = uVar46;
  lVar52 = 0;
  lStack_600 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_798 = *(long *)(uVar39 + 0x1a8);
  lVar53 = *(long *)(uVar40 + 0x58);
  do {
    psVar44 = (short *)(lVar53 + lVar52 * 2);
    psVar59 = (short *)(uVar42 + lVar52 * 2);
    uVar38 = (long)(int)*psVar59 * (long)(int)*psVar44 * 0x2000 | 0x400;
    lVar61 = uVar38 + (long)((int)psVar59[0x20] * (int)psVar44[0x20]) * 0x2731;
    lVar77 = uVar38 + (long)((int)psVar59[0x20] * (int)psVar44[0x20]) * -0x2731;
    iVar66 = (int)((long)(int)psVar44[0x10] * (long)(int)psVar59[0x10]);
    lVar76 = (long)(int)psVar44[0x30] * (long)(int)psVar59[0x30];
    lVar50 = (long)(int)psVar44[0x10] * (long)(int)psVar59[0x10] -
             (long)(int)psVar44[0x30] * (long)(int)psVar59[0x30];
    lVar58 = uVar38 + lVar50 * 0x2000;
    lVar62 = uVar38 + lVar50 * -0x2000;
    lVar50 = (long)iVar66 * 0x2bb6 + lVar76 * 0x2000;
    lVar56 = lVar50 + lVar61;
    lVar61 = lVar61 - lVar50;
    lVar76 = (long)iVar66 * 0xbb6 + lVar76 * -0x2000;
    lVar50 = lVar76 + lVar77;
    lVar77 = lVar77 - lVar76;
    lVar73 = (long)(int)psVar44[8] * (long)(int)psVar59[8];
    sVar63 = psVar59[0x28];
    sVar9 = psVar44[0x28];
    lVar54 = (long)(int)sVar9 * (long)(int)sVar63;
    sVar10 = psVar59[0x38];
    sVar11 = psVar44[0x38];
    iVar66 = (int)sVar11 * (int)sVar10;
    iVar60 = (int)((long)(int)psVar44[0x18] * (long)(int)psVar59[0x18]);
    lVar76 = lVar73 + (long)(int)sVar9 * (long)(int)sVar63;
    lVar65 = (lVar76 + (long)(int)sVar11 * (long)(int)sVar10) * 0x1b8d;
    lVar49 = lVar65 + lVar76 * 0x85b;
    lVar76 = (long)(int)lVar73 * 0x8f7 + (long)iVar60 * 0x29cf + lVar49;
    lVar67 = (lVar54 + (long)(int)sVar11 * (long)(int)sVar10) * -0x2175;
    lVar49 = (long)iVar60 * -0x1151 + (long)(int)lVar54 * -0x2f50 + lVar67 + lVar49;
    lVar71 = lVar73 - (long)(int)sVar11 * (long)(int)sVar10;
    lVar79 = (long)(int)psVar44[0x18] * (long)(int)psVar59[0x18] -
             (long)(int)sVar9 * (long)(int)sVar63;
    lVar54 = (long)iVar66 * 0x32c6 + (long)iVar60 * -0x29cf + lVar67 + lVar65;
    lVar65 = (long)(int)lVar73 * -0x15a4 + (long)iVar60 * -0x1151 + (long)iVar66 * -0x3f74 + lVar65;
    auStack_780[lVar52] = (uint)((ulong)(lVar76 + lVar56) >> 0xb);
    lVar73 = (lVar71 + lVar79) * 0x1151;
    lVar71 = lVar73 + lVar71 * 0x187e;
    auStack_780[lVar52 + 0x58] = (uint)((ulong)(lVar56 - lVar76) >> 0xb);
    auStack_780[lVar52 + 8] = (uint)((ulong)(lVar71 + lVar58) >> 0xb);
    auStack_780[lVar52 + 0x50] = (uint)((ulong)(lVar58 - lVar71) >> 0xb);
    auStack_780[lVar52 + 0x10] = (uint)((ulong)(lVar49 + lVar50) >> 0xb);
    auStack_780[lVar52 + 0x48] = (uint)((ulong)(lVar50 - lVar49) >> 0xb);
    auStack_780[lVar52 + 0x18] = (uint)((ulong)(lVar54 + lVar77) >> 0xb);
    auStack_780[lVar52 + 0x40] = (uint)((ulong)(lVar77 - lVar54) >> 0xb);
    lVar73 = lVar73 + lVar79 * -0x3b21;
    auStack_780[lVar52 + 0x20] = (uint)((ulong)(lVar73 + lVar62) >> 0xb);
    auStack_780[lVar52 + 0x38] = (uint)((ulong)(lVar62 - lVar73) >> 0xb);
    auStack_780[lVar52 + 0x28] = (uint)((ulong)(lVar65 + lVar61) >> 0xb);
    auStack_780[lVar52 + 0x30] = (uint)((ulong)(lVar61 - lVar65) >> 0xb);
    lVar52 = lVar52 + 1;
  } while ((int)lVar52 != 8);
  lVar53 = 0;
  lVar52 = lStack_798 + 0x80;
  lVar58 = 0xffffd0b0;
  uVar38 = (ulong)uVar51;
  do {
    uVar16 = auStack_780[lVar53 + 1];
    uVar17 = auStack_780[lVar53 + 5];
    iVar66 = auStack_780[lVar53] * 0x2000 + 0x20000;
    iVar60 = iVar66 + auStack_780[lVar53 + 4] * 0x2731;
    uVar57 = auStack_780[lVar53 + 2];
    uVar30 = auStack_780[lVar53 + 3];
    uVar51 = auStack_780[lVar53 + 6];
    uVar31 = auStack_780[lVar53 + 7];
    iVar2 = iVar66 + auStack_780[lVar53 + 4] * -0x2731;
    iVar69 = iVar66 + (uVar57 - uVar51) * 0x2000;
    uVar32 = iVar66 + (uVar57 - uVar51) * -0x2000;
    iVar66 = uVar57 * 0x2bb6 + uVar51 * 0x2000;
    iVar70 = iVar66 + iVar60;
    uVar33 = iVar60 - iVar66;
    iVar60 = uVar57 * 0xbb6 + uVar51 * -0x2000;
    iVar66 = iVar60 + iVar2;
    uVar57 = (uVar17 + uVar16 + uVar31) * 0x1b8d;
    iVar75 = uVar57 + (uVar17 + uVar16) * 0x85b;
    uVar51 = iVar2 - iVar60;
    iVar60 = uVar30 * 0x29cf + uVar16 * 0x8f7 + iVar75;
    iVar4 = (uVar31 + uVar17) * -0x2175;
    iVar75 = uVar30 * -0x1151 + uVar17 * -0x2f50 + iVar4 + iVar75;
    lVar50 = *(long *)(uVar46 + lVar53);
    uVar17 = uVar30 - uVar17;
    uVar39 = (ulong)uVar17;
    puVar1 = (undefined1 *)(lVar50 + uVar38);
    *puVar1 = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar60 + iVar70) >> 0x12) & 0x3ff));
    iVar3 = ((uVar16 - uVar31) + uVar17) * 0x1151;
    iVar2 = iVar3 + (uVar16 - uVar31) * 0x187e;
    puVar1[0xb] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar70 - iVar60) >> 0x12) & 0x3ff));
    puVar1[1] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar2 + iVar69) >> 0x12) & 0x3ff));
    iVar60 = uVar30 * -0x29cf + uVar31 * 0x32c6 + uVar57 + iVar4;
    puVar1[10] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar69 - iVar2) >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar75 + iVar66) >> 0x12) & 0x3ff));
    puVar1[9] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar66 - iVar75) >> 0x12) & 0x3ff));
    iVar66 = uVar30 * -0x1151 + uVar16 * -0x15a4 + uVar31 * -0x3f74 + uVar57;
    puVar1[3] = *(undefined1 *)(lVar52 + ((ulong)(iVar60 + uVar51 >> 0x12) & 0x3ff));
    iVar3 = iVar3 + uVar17 * -0x3b21;
    puVar1[8] = *(undefined1 *)(lVar52 + ((ulong)(uVar51 - iVar60 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar52 + ((ulong)(iVar3 + uVar32 >> 0x12) & 0x3ff));
    puVar1[7] = *(undefined1 *)(lVar52 + ((ulong)(uVar32 - iVar3 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar52 + ((ulong)(iVar66 + uVar33 >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar52 + ((ulong)(uVar33 - iVar66 >> 0x12) & 0x3ff));
    lVar53 = lVar53 + 8;
  } while (lVar53 != 0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_600) {
    return;
  }
  uVar40 = uStack_788;
  ___stack_chk_fail();
  uStack_800 = (ulong)uVar51;
  uStack_7f8 = (ulong)uVar57;
  puStack_7f0 = puVar1;
  uStack_7e8 = (ulong)uVar31;
  uStack_7e0 = (ulong)uVar16;
  uStack_7d8 = (ulong)uVar32;
  uStack_7d0 = (ulong)uVar33;
  uStack_7c8 = 0xffffc4df;
  uStack_7c0 = 0x187e;
  uStack_7b8 = 0x1151;
  ppppuStack_7b0 = &ppppuStack_5a0;
  uStack_7a8 = 0x1081d831c;
  uStack_9bc = (int)uVar38;
  uStack_9b8 = uVar39;
  lVar52 = 0;
  lStack_810 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_9c8 = *(long *)(lVar50 + 0x1a8);
  lVar53 = *(long *)(uVar40 + 0x58);
  do {
    psVar44 = (short *)(lVar53 + lVar52 * 2);
    psVar59 = (short *)(lVar58 + lVar52 * 2);
    sVar63 = psVar59[0x10];
    sVar9 = psVar44[0x10];
    iVar66 = (int)sVar9 * (int)sVar63;
    uVar40 = (long)(int)*psVar59 * (long)(int)*psVar44 * 0x2000 | 0x400;
    lVar71 = (long)(int)psVar44[0x20] * (long)(int)psVar59[0x20] +
             (long)(int)psVar44[0x30] * (long)(int)psVar59[0x30];
    lVar68 = (long)(int)psVar44[0x20] * (long)(int)psVar59[0x20] -
             (long)(int)psVar44[0x30] * (long)(int)psVar59[0x30];
    lVar56 = uVar40 + lVar68 * 0x319;
    lVar50 = lVar71 * 0x24f9 + (long)iVar66 * 0x2bf1 + lVar56;
    lVar56 = (long)iVar66 * 0x100c + lVar71 * -0x24f9 + lVar56;
    lVar49 = uVar40 + lVar68 * 0xf95;
    lVar76 = (long)iVar66 * 0x21e0 + lVar71 * -0xa20 + lVar49;
    lVar49 = lVar71 * 0xa20 + (long)iVar66 * -0x2812 + lVar49;
    lVar65 = uVar40 + lVar68 * -0x1dfe;
    lVar54 = (long)iVar66 * -0x574 + lVar71 * -0xdf2 + lVar65;
    lVar65 = lVar71 * 0xdf2 + (long)iVar66 * -0x19b5 + lVar65;
    lVar62 = (long)(int)psVar44[8] * (long)(int)psVar59[8];
    sVar10 = psVar59[0x18];
    sVar11 = psVar44[0x18];
    lVar72 = (long)(int)sVar11 * (long)(int)sVar10;
    sVar12 = psVar59[0x28];
    sVar13 = psVar44[0x28];
    lVar78 = (long)(int)sVar13 * (long)(int)sVar12;
    sVar14 = psVar59[0x38];
    sVar15 = psVar44[0x38];
    lVar73 = (lVar62 + (long)(int)sVar11 * (long)(int)sVar10) * 0x2a50;
    lVar77 = (lVar62 + (long)(int)sVar13 * (long)(int)sVar12) * 0x253e;
    lVar67 = lVar62 + (long)(int)sVar15 * (long)(int)sVar14;
    lVar79 = lVar67 * 0x1e02;
    lVar71 = lVar73 + (long)(int)lVar62 * -0x40a5 + lVar77 + lVar79;
    lVar61 = (lVar72 + (long)(int)sVar13 * (long)(int)sVar12) * -0xad5;
    lVar74 = (lVar72 + (long)(int)sVar15 * (long)(int)sVar14) * -0x253e;
    lVar73 = lVar73 + (long)(int)lVar72 * 0x1acb + lVar61 + lVar74;
    lVar80 = (lVar78 + (long)(int)sVar15 * (long)(int)sVar14) * -0x1508;
    lVar77 = lVar61 + (long)(int)lVar78 * -0x324f + lVar77 + lVar80;
    iVar66 = (int)sVar15 * (int)sVar14;
    lVar79 = lVar74 + (long)iVar66 * 0x4694 + lVar79 + lVar80;
    lVar61 = (lVar78 - (long)(int)sVar11 * (long)(int)sVar10) * 0x1e02 + lVar67 * 0xad5;
    lVar67 = (long)(int)lVar62 * 0xa33 + (long)(int)lVar72 * -0xeea + lVar61;
    lVar61 = (long)(int)lVar78 * 0xc4e + (long)iVar66 * -0x37c1 + lVar61;
    aiStack_9b0[lVar52] = (int)((ulong)(lVar71 + lVar50) >> 0xb);
    aiStack_9b0[lVar52 + 0x60] = (int)((ulong)(lVar50 - lVar71) >> 0xb);
    aiStack_9b0[lVar52 + 8] = (int)((ulong)(lVar73 + lVar76) >> 0xb);
    aiStack_9b0[lVar52 + 0x58] = (int)((ulong)(lVar76 - lVar73) >> 0xb);
    aiStack_9b0[lVar52 + 0x10] = (int)((ulong)(lVar77 + lVar56) >> 0xb);
    aiStack_9b0[lVar52 + 0x50] = (int)((ulong)(lVar56 - lVar77) >> 0xb);
    aiStack_9b0[lVar52 + 0x18] = (int)((ulong)(lVar79 + lVar54) >> 0xb);
    aiStack_9b0[lVar52 + 0x48] = (int)((ulong)(lVar54 - lVar79) >> 0xb);
    aiStack_9b0[lVar52 + 0x20] = (int)((ulong)(lVar67 + lVar65) >> 0xb);
    aiStack_9b0[lVar52 + 0x40] = (int)((ulong)(lVar65 - lVar67) >> 0xb);
    aiStack_9b0[lVar52 + 0x28] = (int)((ulong)(lVar61 + lVar49) >> 0xb);
    aiStack_9b0[lVar52 + 0x38] = (int)((ulong)(lVar49 - lVar61) >> 0xb);
    aiStack_9b0[lVar52 + 0x30] =
         (int)(uVar40 + (lVar68 - (long)(int)sVar9 * (long)(int)sVar63) * 0x2d41 >> 0xb);
    lVar52 = lVar52 + 1;
  } while ((int)lVar52 != 8);
  lVar53 = 0;
  lVar52 = lStack_9c8 + 0x80;
  lVar58 = 0xfffff116;
  do {
    iVar18 = aiStack_9b0[lVar53 + 1];
    iVar66 = aiStack_9b0[lVar53] * 0x2000 + 0x20000;
    iVar20 = aiStack_9b0[lVar53 + 5];
    iVar21 = aiStack_9b0[lVar53 + 7];
    iVar60 = aiStack_9b0[lVar53 + 6] + aiStack_9b0[lVar53 + 4];
    iVar34 = aiStack_9b0[lVar53 + 4] - aiStack_9b0[lVar53 + 6];
    iVar70 = iVar66 + iVar34 * 0x319;
    iVar4 = aiStack_9b0[lVar53 + 2];
    iVar5 = aiStack_9b0[lVar53 + 3];
    iVar75 = iVar66 + iVar34 * 0xf95;
    uVar57 = iVar60 * 0x24f9 + iVar4 * 0x2bf1 + iVar70;
    iVar3 = iVar66 + iVar34 * -0x1dfe;
    iVar69 = iVar60 * 0xa20 + iVar4 * -0x2812 + iVar75;
    uVar51 = iVar60 * 0xdf2 + iVar4 * -0x19b5 + iVar3;
    uVar42 = (ulong)uVar51;
    iVar19 = (iVar5 + iVar18) * 0x2a50;
    iVar70 = iVar60 * -0x24f9 + iVar4 * 0x100c + iVar70;
    iVar22 = (iVar20 + iVar18) * 0x253e;
    iVar23 = (iVar21 + iVar18) * 0x1e02;
    iVar75 = iVar60 * -0xa20 + iVar4 * 0x21e0 + iVar75;
    iVar2 = iVar19 + iVar18 * -0x40a5 + iVar22 + iVar23;
    iVar24 = (iVar20 + iVar5) * -0xad5;
    iVar3 = iVar60 * -0xdf2 + iVar4 * -0x574 + iVar3;
    iVar25 = (iVar21 + iVar5) * -0x253e;
    uVar16 = iVar19 + iVar5 * 0x1acb + iVar24 + iVar25;
    iVar19 = (iVar21 + iVar20) * -0x1508;
    iVar60 = iVar24 + iVar20 * -0x324f + iVar22 + iVar19;
    uVar17 = iVar25 + iVar21 * 0x4694 + iVar23 + iVar19;
    bVar6 = *(byte *)(lVar52 + ((ulong)(iVar2 + uVar57 >> 0x12) & 0x3ff));
    pbVar41 = (byte *)(*(long *)(uVar39 + lVar53) + (uVar38 & 0xffffffff));
    *pbVar41 = bVar6;
    pbVar41[0xc] = *(byte *)(lVar52 + ((ulong)(uVar57 - iVar2 >> 0x12) & 0x3ff));
    pbVar41[1] = *(byte *)(lVar52 + ((ulong)(uVar16 + iVar75 >> 0x12) & 0x3ff));
    uVar32 = (iVar20 - iVar5) * 0x1e02;
    uVar31 = uVar32 + (iVar21 + iVar18) * 0xad5;
    pbVar41[0xb] = *(byte *)(lVar52 + ((ulong)(iVar75 - uVar16 >> 0x12) & 0x3ff));
    bVar7 = *(byte *)(lVar52 + ((ulong)((uint)(iVar60 + iVar70) >> 0x12) & 0x3ff));
    pbVar41[2] = bVar7;
    pbVar41[10] = *(byte *)(lVar52 + ((ulong)((uint)(iVar70 - iVar60) >> 0x12) & 0x3ff));
    pbVar41[3] = *(byte *)(lVar52 + ((ulong)(uVar17 + iVar3 >> 0x12) & 0x3ff));
    uVar30 = iVar18 * 0xa33 + iVar5 * -0xeea + uVar31;
    uVar40 = (ulong)uVar30;
    pbVar41[9] = *(byte *)(lVar52 + ((ulong)(iVar3 - uVar17 >> 0x12) & 0x3ff));
    bVar8 = *(byte *)(lVar52 + ((ulong)(uVar30 + uVar51 >> 0x12) & 0x3ff));
    uVar46 = (ulong)bVar8;
    pbVar41[4] = bVar8;
    iVar60 = iVar20 * 0xc4e + iVar21 * -0x37c1 + uVar31;
    pbVar41[8] = *(byte *)(lVar52 + ((ulong)(uVar51 - uVar30 >> 0x12) & 0x3ff));
    pbVar41[5] = *(byte *)(lVar52 + ((ulong)((uint)(iVar60 + iVar69) >> 0x12) & 0x3ff));
    pbVar41[7] = *(byte *)(lVar52 + ((ulong)((uint)(iVar69 - iVar60) >> 0x12) & 0x3ff));
    pbVar41[6] = *(byte *)(lVar52 + ((ulong)((uint)(iVar66 + (iVar34 - iVar4) * 0x2d41) >> 0x12) &
                                    0x3ff));
    lVar53 = lVar53 + 8;
  } while (lVar53 != 0x68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_810) {
    return;
  }
  ___stack_chk_fail();
  uStack_a30 = 0xffffeaf8;
  uStack_a28 = (ulong)bVar6;
  uStack_a20 = (ulong)uVar16;
  uStack_a18 = (ulong)uVar17;
  uStack_a10 = (ulong)uVar57;
  uStack_a08 = 0xad5;
  uStack_a00 = (ulong)uVar32;
  uStack_9f8 = 0x1e02;
  uStack_9f0 = (ulong)bVar7;
  uStack_9e8 = (ulong)uVar31;
  ppppuStack_9e0 = &ppppuStack_7b0;
  uStack_9d8 = 0x1081d8880;
  uStack_c0c = (int)pbVar41;
  lStack_c08 = lVar58;
  lVar52 = 0;
  lStack_a40 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c18 = *(long *)(uVar40 + 0x1a8);
  lVar53 = *(long *)(uVar42 + 0x58);
  do {
    psVar44 = (short *)(lVar53 + lVar52 * 2);
    psVar59 = (short *)(uVar46 + lVar52 * 2);
    iVar60 = (int)psVar44[0x20] * (int)psVar59[0x20];
    uVar38 = (long)(int)*psVar59 * (long)(int)*psVar44 * 0x2000 | 0x400;
    lVar79 = uVar38 + (long)iVar60 * 0x28c6;
    lVar67 = uVar38 + (long)iVar60 * 0xa12;
    lVar61 = uVar38 + (long)iVar60 * -0x1c37;
    iVar66 = (int)psVar44[0x30] * (int)psVar59[0x30];
    lVar76 = ((long)(int)psVar44[0x10] * (long)(int)psVar59[0x10] +
             (long)(int)psVar44[0x30] * (long)(int)psVar59[0x30]) * 0x2362;
    iVar69 = (int)((long)(int)psVar44[0x10] * (long)(int)psVar59[0x10]);
    lVar56 = lVar76 + (long)iVar69 * 0x8bd;
    lVar76 = lVar76 + (long)iVar66 * -0x3704;
    lVar49 = (long)iVar69 * 0x13a3 + (long)iVar66 * -0x2c1f;
    lVar50 = lVar56 + lVar79;
    lVar79 = lVar79 - lVar56;
    lVar56 = lVar76 + lVar67;
    lVar67 = lVar67 - lVar76;
    lVar76 = lVar49 + lVar61;
    lVar61 = lVar61 - lVar49;
    lVar73 = (long)(int)psVar44[8] * (long)(int)psVar59[8];
    sVar63 = psVar59[0x18];
    sVar9 = psVar44[0x18];
    lVar49 = (long)(int)sVar9 * (long)(int)sVar63;
    sVar10 = psVar59[0x28];
    sVar11 = psVar44[0x28];
    lVar65 = (long)(int)sVar11 * (long)(int)sVar10;
    lVar74 = (long)(int)psVar44[0x38] * (long)(int)psVar59[0x38];
    lVar62 = lVar73 + (long)(int)sVar11 * (long)(int)sVar10;
    lVar68 = (lVar73 + (long)(int)sVar9 * (long)(int)sVar63) * 0x2ab7;
    lVar78 = lVar62 * 0x2652;
    lVar54 = (lVar49 + (long)(int)sVar11 * (long)(int)sVar10) * -0x511 + lVar74 * -0x2000;
    iVar66 = (int)lVar49;
    lVar49 = lVar68 + (long)iVar66 * -0xd92 + lVar54;
    iVar69 = (int)lVar65;
    lVar54 = lVar78 + (long)iVar69 * -0x4bf7 + lVar54;
    lVar62 = lVar62 * 0x1814;
    lVar72 = lVar73 - (long)(int)sVar9 * (long)(int)sVar63;
    lVar77 = (lVar65 - (long)(int)sVar9 * (long)(int)sVar63) * 0x2cf8;
    lVar71 = lVar72 * 0xef2 + lVar74 * -0x2000;
    lVar65 = lVar62 + (long)(int)lVar73 * -0x21f5 + lVar71;
    lVar71 = lVar77 + (long)iVar66 * 0x1599 + lVar71;
    lVar73 = lVar68 + (long)(int)lVar73 * -0x2410 + lVar78 + lVar74 * 0x2000;
    lVar77 = lVar77 + (long)iVar69 * -0x361a + lVar62 + lVar74 * 0x2000;
    iVar66 = ((int)lVar72 - iVar69) + (int)lVar74;
    auStack_c00[lVar52] = (uint)((ulong)(lVar73 + lVar50) >> 0xb);
    auStack_c00[lVar52 + 0x68] = (uint)((ulong)(lVar50 - lVar73) >> 0xb);
    auStack_c00[lVar52 + 8] = (uint)((ulong)(lVar49 + lVar56) >> 0xb);
    auStack_c00[lVar52 + 0x60] = (uint)((ulong)(lVar56 - lVar49) >> 0xb);
    auStack_c00[lVar52 + 0x10] = (uint)((ulong)(lVar54 + lVar76) >> 0xb);
    auStack_c00[lVar52 + 0x58] = (uint)((ulong)(lVar76 - lVar54) >> 0xb);
    iVar60 = (int)(uVar38 + (long)iVar60 * -0x2d42 >> 0xb);
    auStack_c00[lVar52 + 0x18] = iVar60 + iVar66 * 4;
    auStack_c00[lVar52 + 0x50] = iVar60 + iVar66 * -4;
    auStack_c00[lVar52 + 0x20] = (uint)((ulong)(lVar77 + lVar61) >> 0xb);
    auStack_c00[lVar52 + 0x48] = (uint)((ulong)(lVar61 - lVar77) >> 0xb);
    auStack_c00[lVar52 + 0x28] = (uint)((ulong)(lVar71 + lVar67) >> 0xb);
    auStack_c00[lVar52 + 0x40] = (uint)((ulong)(lVar67 - lVar71) >> 0xb);
    auStack_c00[lVar52 + 0x30] = (uint)((ulong)(lVar65 + lVar79) >> 0xb);
    auStack_c00[lVar52 + 0x38] = (uint)((ulong)(lVar79 - lVar65) >> 0xb);
    lVar52 = lVar52 + 1;
  } while ((int)lVar52 != 8);
  lVar53 = 0;
  lVar52 = lStack_c18 + 0x80;
  uVar38 = (ulong)pbVar41 & 0xffffffff;
  do {
    uVar30 = auStack_c00[lVar53 + 1];
    iVar66 = auStack_c00[lVar53] * 0x2000 + 0x20000;
    uVar57 = auStack_c00[lVar53 + 4];
    uVar31 = auStack_c00[lVar53 + 5];
    iVar69 = iVar66 + uVar57 * 0x28c6;
    iVar4 = iVar66 + uVar57 * 0xa12;
    iVar70 = iVar66 + uVar57 * -0x1c37;
    uVar51 = auStack_c00[lVar53 + 2];
    uVar32 = auStack_c00[lVar53 + 3];
    uVar17 = auStack_c00[lVar53 + 6];
    uVar16 = auStack_c00[lVar53 + 7];
    iVar66 = iVar66 + uVar57 * -0x2d42;
    iVar2 = (uVar17 + uVar51) * 0x2362;
    iVar75 = iVar2 + uVar51 * 0x8bd;
    iVar2 = iVar2 + uVar17 * -0x3704;
    iVar3 = uVar51 * 0x13a3 + uVar17 * -0x2c1f;
    iVar60 = iVar75 + iVar69;
    uVar17 = iVar69 - iVar75;
    iVar69 = iVar3 + iVar70;
    uVar33 = iVar70 - iVar3;
    uVar46 = (ulong)uVar33;
    uVar57 = iVar2 + iVar4;
    uVar42 = (ulong)uVar57;
    iVar75 = (uVar32 + uVar30) * 0x2ab7;
    iVar3 = (uVar31 + uVar30) * 0x2652;
    iVar70 = iVar75 + uVar30 * -0x2410 + iVar3 + uVar16 * 0x2000;
    iVar4 = iVar4 - iVar2;
    iVar2 = (uVar31 + uVar32) * -0x511 + uVar16 * -0x2000;
    iVar75 = iVar75 + uVar32 * -0xd92 + iVar2;
    iVar2 = iVar3 + uVar31 * -0x4bf7 + iVar2;
    uVar51 = uVar31 * -0x361a + uVar16 * 0x2000;
    iVar3 = (uVar30 - uVar32) * 0xef2 + uVar16 * -0x2000;
    uVar16 = ((uVar30 - uVar32) - uVar31) + uVar16;
    uVar39 = (ulong)uVar16;
    puVar1 = (undefined1 *)(*(long *)(lVar58 + lVar53) + uVar38);
    *puVar1 = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar70 + iVar60) >> 0x12) & 0x3ff));
    puVar1[0xd] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar60 - iVar70) >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar52 + ((ulong)(iVar75 + uVar57 >> 0x12) & 0x3ff));
    uVar40 = (ulong)bVar6;
    puVar1[1] = bVar6;
    puVar1[0xc] = *(undefined1 *)(lVar52 + ((ulong)(uVar57 - iVar75 >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar2 + iVar69) >> 0x12) & 0x3ff));
    iVar70 = (uVar31 + uVar30) * 0x1814;
    iVar75 = (uVar31 - uVar32) * 0x2cf8;
    puVar1[0xb] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar69 - iVar2) >> 0x12) & 0x3ff));
    iVar60 = uVar51 + iVar75 + iVar70;
    puVar1[3] = *(undefined1 *)(lVar52 + ((ulong)(iVar66 + uVar16 * 0x2000 >> 0x12) & 0x3ff));
    puVar1[10] = *(undefined1 *)(lVar52 + ((ulong)(iVar66 + uVar16 * -0x2000 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar52 + ((ulong)(iVar60 + uVar33 >> 0x12) & 0x3ff));
    iVar66 = iVar70 + uVar30 * -0x21f5 + iVar3;
    iVar3 = iVar75 + uVar32 * 0x1599 + iVar3;
    puVar1[9] = *(undefined1 *)(lVar52 + ((ulong)(uVar33 - iVar60 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar3 + iVar4) >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar4 - iVar3) >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar52 + ((ulong)(iVar66 + uVar17 >> 0x12) & 0x3ff));
    puVar1[7] = *(undefined1 *)(lVar52 + ((ulong)(uVar17 - iVar66 >> 0x12) & 0x3ff));
    lVar53 = lVar53 + 8;
  } while (lVar53 != 0x70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a40) {
    return;
  }
  ___stack_chk_fail();
  uStack_c80 = (ulong)uVar32;
  uStack_c78 = (ulong)uVar17;
  uStack_c70 = 0x1599;
  uStack_c68 = 0xffffc9e6;
  uStack_c60 = 0x2cf8;
  uStack_c58 = 0xffffb409;
  uStack_c50 = 0xfffff26e;
  uStack_c48 = 0xfffffaef;
  lStack_c40 = lVar58;
  uStack_c38 = (ulong)uVar51;
  ppppuStack_c30 = &ppppuStack_9e0;
  uStack_c28 = 0x1081d8d6c;
  uStack_e8c = (int)uVar38;
  uStack_e88 = uVar46;
  uStack_e78 = uVar42;
  lVar52 = 0;
  lStack_c90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_e98 = *(long *)(uVar39 + 0x1a8);
  lStack_e80 = *(long *)(uVar40 + 0x58);
  do {
    psVar44 = (short *)(lStack_e80 + lVar52 * 2);
    psVar59 = (short *)(uVar42 + lVar52 * 2);
    lVar56 = (long)(int)psVar44[0x10] * (long)(int)psVar59[0x10];
    uVar39 = (long)(int)*psVar59 * (long)(int)*psVar44 * 0x2000 | 0x400;
    iVar60 = (int)psVar44[0x30] * (int)psVar59[0x30];
    lVar76 = uVar39 + (long)iVar60 * -0xdfc;
    lVar49 = uVar39 + (long)iVar60 * 0x249d;
    lVar77 = lVar56 - (long)(int)psVar44[0x20] * (long)(int)psVar59[0x20];
    lVar54 = lVar56 + (long)(int)psVar44[0x20] * (long)(int)psVar59[0x20];
    lVar53 = lVar77 * 0x176 + lVar54 * 0x2ace + lVar49;
    lVar58 = (long)(int)lVar56 * 0x2e13 + lVar54 * -0x2ace + lVar77 * 0x176 + lVar76;
    lVar50 = lVar49 + lVar77 * -0xcc7 + lVar54 * -0x1182;
    lVar56 = lVar54 * 0x1182 + (long)(int)lVar56 * -0x2e13 + lVar77 * -0xcc7 + lVar76;
    lVar76 = lVar77 * 0xb50 + lVar54 * 0x194c + lVar76;
    lVar49 = lVar49 + lVar54 * -0x194c + lVar77 * 0xb50;
    sVar63 = psVar59[8];
    sVar9 = psVar44[8];
    lVar71 = (long)(int)sVar9 * (long)(int)sVar63;
    sVar10 = psVar59[0x28];
    sVar11 = psVar44[0x28];
    iVar75 = (int)sVar11 * (int)sVar10;
    sVar12 = psVar59[0x38];
    sVar13 = psVar44[0x38];
    iVar66 = (int)sVar13 * (int)sVar12;
    lVar79 = lVar71 - (long)(int)sVar13 * (long)(int)sVar12;
    lVar65 = lVar79 * 0x2d02 + (long)iVar75 * 0x2731;
    iVar70 = (int)((long)(int)psVar44[0x18] * (long)(int)psVar59[0x18]);
    lVar54 = lVar65 + (long)iVar66 * 0x4ea3 + (long)iVar70 * 0x2b0a;
    iVar69 = (int)lVar71;
    lVar65 = (long)iVar69 * -0x2399 + (long)iVar70 * -0x1a9a + lVar65;
    lVar67 = (long)(int)psVar44[0x18] * (long)(int)psVar59[0x18] -
             (long)(int)sVar13 * (long)(int)sVar12;
    lVar73 = (lVar71 + (long)(int)sVar13 * (long)(int)sVar12) * 0x1268;
    lVar71 = (long)iVar69 * 0xf39 + (long)iVar70 * -0x1a9a + (long)iVar75 * -0x2731 + lVar73;
    lVar73 = (long)iVar70 * -0x2b0a + (long)iVar75 * 0x2731 + (long)iVar66 * -0x1bd1 + lVar73;
    auStack_e70[lVar52] = (uint)((ulong)(lVar54 + lVar53) >> 0xb);
    auStack_e70[lVar52 + 0x70] = (uint)((ulong)(lVar53 - lVar54) >> 0xb);
    lVar54 = (lVar67 + (long)(int)sVar9 * (long)(int)sVar63) * 0x1a9a;
    lVar53 = lVar54 + (long)iVar69 * 0x1071;
    auStack_e70[lVar52 + 8] = (uint)((ulong)(lVar53 + lVar76) >> 0xb);
    auStack_e70[lVar52 + 0x68] = (uint)((ulong)(lVar76 - lVar53) >> 0xb);
    lVar76 = uVar39 + (long)iVar60 * -0x2d42;
    lVar79 = lVar79 - (long)(int)sVar11 * (long)(int)sVar10;
    lVar53 = lVar76 + lVar77 * 0x16a0;
    auStack_e70[lVar52 + 0x10] = (uint)((ulong)(lVar79 * 0x2731 + lVar53) >> 0xb);
    auStack_e70[lVar52 + 0x60] = (uint)((ulong)(lVar53 + lVar79 * -0x2731) >> 0xb);
    auStack_e70[lVar52 + 0x18] = (uint)((ulong)(lVar71 + lVar58) >> 0xb);
    auStack_e70[lVar52 + 0x58] = (uint)((ulong)(lVar58 - lVar71) >> 0xb);
    lVar54 = lVar54 + lVar67 * -0x45a4;
    auStack_e70[lVar52 + 0x20] = (uint)((ulong)(lVar54 + lVar49) >> 0xb);
    auStack_e70[lVar52 + 0x50] = (uint)((ulong)(lVar49 - lVar54) >> 0xb);
    auStack_e70[lVar52 + 0x28] = (uint)((ulong)(lVar73 + lVar50) >> 0xb);
    auStack_e70[lVar52 + 0x48] = (uint)((ulong)(lVar50 - lVar73) >> 0xb);
    auStack_e70[lVar52 + 0x30] = (uint)((ulong)(lVar65 + lVar56) >> 0xb);
    auStack_e70[lVar52 + 0x40] = (uint)((ulong)(lVar56 - lVar65) >> 0xb);
    auStack_e70[lVar52 + 0x38] = (uint)((ulong)(lVar76 + lVar77 * 0x7ffffffd2c0) >> 0xb);
    lVar52 = lVar52 + 1;
  } while ((int)lVar52 != 8);
  lVar53 = 0;
  lVar52 = lStack_e98 + 0x80;
  uVar38 = uVar38 & 0xffffffff;
  do {
    uVar17 = auStack_e70[lVar53 + 1];
    uVar39 = (ulong)uVar17;
    puVar1 = (undefined1 *)(*(long *)(uVar46 + lVar53) + uVar38);
    iVar66 = auStack_e70[lVar53] * 0x2000 + 0x20000;
    uVar57 = auStack_e70[lVar53 + 6];
    uVar30 = auStack_e70[lVar53 + 7];
    iVar3 = iVar66 + uVar57 * -0xdfc;
    iVar18 = iVar66 + uVar57 * 0x249d;
    uVar51 = auStack_e70[lVar53 + 2];
    uVar31 = auStack_e70[lVar53 + 3];
    uVar16 = auStack_e70[lVar53 + 5];
    iVar66 = iVar66 + uVar57 * -0x2d42;
    iVar21 = uVar51 - auStack_e70[lVar53 + 4];
    iVar60 = auStack_e70[lVar53 + 4] + uVar51;
    iVar69 = iVar21 * 0x176 + iVar60 * 0x2ace + iVar18;
    iVar70 = iVar21 * -0xcc7 + iVar60 * -0x1182 + iVar18;
    iVar75 = uVar51 * 0x2e13 + iVar60 * -0x2ace + iVar21 * 0x176 + iVar3;
    iVar2 = iVar21 * 0xb50 + iVar60 * 0x194c + iVar3;
    iVar20 = iVar66 + iVar21 * 0x16a0;
    iVar3 = iVar60 * 0x1182 + uVar51 * -0x2e13 + iVar21 * -0xcc7 + iVar3;
    iVar4 = uVar16 * 0x2731 + (uVar17 - uVar30) * 0x2d02;
    uVar57 = iVar18 + iVar60 * -0x194c + iVar21 * 0xb50;
    uVar42 = (ulong)uVar57;
    iVar60 = iVar4 + uVar31 * 0x2b0a + uVar30 * 0x4ea3;
    iVar18 = (uVar17 - uVar30) - uVar16;
    uVar26 = ((uVar31 - uVar30) + uVar17) * 0x1a9a;
    *puVar1 = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar60 + iVar69) >> 0x12) & 0x3ff));
    uVar32 = uVar26 + uVar17 * 0x1071;
    puVar1[0xe] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar69 - iVar60) >> 0x12) & 0x3ff));
    puVar1[1] = *(undefined1 *)(lVar52 + ((ulong)(uVar32 + iVar2 >> 0x12) & 0x3ff));
    puVar1[0xd] = *(undefined1 *)(lVar52 + ((ulong)(iVar2 - uVar32 >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)
                 (lVar52 + ((ulong)((uint)(iVar18 * 0x2731 + iVar20) >> 0x12) & 0x3ff));
    uVar27 = (uVar30 + uVar17) * 0x1268;
    uVar51 = uVar31 * -0x1a9a + uVar17 * 0xf39 + uVar16 * -0x2731 + uVar27;
    puVar1[0xc] = *(undefined1 *)
                   (lVar52 + ((ulong)((uint)(iVar20 + iVar18 * -0x2731) >> 0x12) & 0x3ff));
    uVar33 = uVar26 + (uVar31 - uVar30) * -0x45a4;
    uVar43 = (ulong)uVar33;
    puVar1[3] = *(undefined1 *)(lVar52 + ((ulong)(uVar51 + iVar75 >> 0x12) & 0x3ff));
    uVar16 = uVar16 * 0x2731 + uVar31 * -0x2b0a;
    uVar40 = (ulong)uVar16;
    puVar1[0xb] = *(undefined1 *)(lVar52 + ((ulong)(iVar75 - uVar51 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar52 + ((ulong)(uVar33 + uVar57 >> 0x12) & 0x3ff));
    iVar60 = uVar16 + uVar30 * -0x1bd1 + uVar27;
    puVar1[10] = *(undefined1 *)(lVar52 + ((ulong)(uVar57 - uVar33 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar60 + iVar70) >> 0x12) & 0x3ff));
    iVar4 = uVar31 * -0x1a9a + uVar17 * -0x2399 + iVar4;
    puVar1[9] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar70 - iVar60) >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar4 + iVar3) >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar52 + ((ulong)((uint)(iVar3 - iVar4) >> 0x12) & 0x3ff));
    puVar1[7] = *(undefined1 *)
                 (lVar52 + ((ulong)((uint)(iVar66 + iVar21 * 0xfffd2c0) >> 0x12) & 0x3ff));
    lVar53 = lVar53 + 8;
  } while (lVar53 != 0x78);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c90) {
    return;
  }
  ___stack_chk_fail();
  uStack_f00 = 0xf39;
  uStack_ef8 = 0x1268;
  uStack_ef0 = 0xffffdc67;
  uStack_ee8 = 0x1a9a;
  uStack_ee0 = uVar46;
  uStack_ed8 = (ulong)uVar32;
  uStack_ed0 = 0xffffba5c;
  uStack_ec8 = (ulong)uVar26;
  uStack_ec0 = (ulong)uVar27;
  uStack_eb8 = (ulong)uVar51;
  ppppuStack_eb0 = &ppppuStack_c30;
  uStack_ea8 = 0x1081d92d8;
  uStack_1134 = (int)uVar38;
  uStack_1130 = uVar39;
  uStack_1120 = uVar43;
  lVar52 = 0;
  lStack_f10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1140 = *(long *)(uVar40 + 0x1a8);
  lStack_1128 = *(long *)(uVar42 + 0x58);
  do {
    psVar44 = (short *)(lStack_1128 + lVar52 * 2);
    psVar59 = (short *)(uVar43 + lVar52 * 2);
    iVar66 = (int)psVar44[0x20] * (int)psVar59[0x20];
    uVar40 = (long)(int)*psVar59 * (long)(int)*psVar44 * 0x2000 | 0x400;
    lStack_1118 = uVar40 + (long)iVar66 * 0x29cf;
    lVar61 = uVar40 + (long)iVar66 * -0x29cf;
    lVar62 = uVar40 + (long)iVar66 * 0x1151;
    lVar67 = uVar40 + (long)iVar66 * -0x1151;
    iVar60 = (int)psVar44[0x30] * (int)psVar59[0x30];
    lVar56 = (long)(int)psVar44[0x10] * (long)(int)psVar59[0x10] -
             (long)(int)psVar44[0x30] * (long)(int)psVar59[0x30];
    lVar76 = lVar56 * 0x8d4;
    lVar56 = lVar56 * 0x2c63;
    lVar58 = lVar56 + (long)iVar60 * 0x5203;
    iVar66 = (int)((long)(int)psVar44[0x10] * (long)(int)psVar59[0x10]);
    lVar50 = lVar76 + (long)iVar66 * 0x1ccd;
    lVar56 = lVar56 + (long)iVar66 * -0x133e;
    lVar76 = lVar76 + (long)iVar60 * -0x1050;
    lVar53 = lVar58 + lStack_1118;
    lStack_1118 = lStack_1118 - lVar58;
    lVar58 = lVar50 + lVar62;
    lVar62 = lVar62 - lVar50;
    lVar50 = lVar56 + lVar67;
    lVar67 = lVar67 - lVar56;
    lVar56 = lVar76 + lVar61;
    lVar61 = lVar61 - lVar76;
    lVar49 = (long)(int)psVar44[8] * (long)(int)psVar59[8];
    sVar63 = psVar59[0x18];
    sVar9 = psVar44[0x18];
    lVar78 = (long)(int)sVar9 * (long)(int)sVar63;
    sVar10 = psVar59[0x28];
    sVar11 = psVar44[0x28];
    sVar12 = psVar59[0x38];
    sVar13 = psVar44[0x38];
    lVar68 = lVar49 + (long)(int)sVar11 * (long)(int)sVar10;
    lVar54 = (lVar49 + (long)(int)sVar9 * (long)(int)sVar63) * 0x2b4e;
    lVar81 = lVar68 * 0x27e9;
    lVar73 = (lVar49 + (long)(int)sVar13 * (long)(int)sVar12) * 0x22fc;
    lVar72 = (lVar49 - (long)(int)sVar13 * (long)(int)sVar12) * 0x1cb6;
    lVar68 = lVar68 * 0x1555;
    lVar65 = (lVar49 - (long)(int)sVar9 * (long)(int)sVar63) * 0xd23;
    lVar76 = lVar54 + (long)(int)lVar49 * -0x492a + lVar81 + lVar73;
    lVar49 = lVar65 + (long)(int)lVar49 * -0x3abe + lVar68 + lVar72;
    lVar71 = (lVar78 + (long)(int)sVar11 * (long)(int)sVar10) * 0x470;
    iVar69 = (int)sVar13;
    iVar60 = (int)sVar12;
    lVar77 = lVar78 + (long)iVar69 * (long)iVar60;
    lVar74 = lVar77 * -0x1555;
    lVar54 = lVar54 + (long)(int)lVar78 * 0x24d + lVar71 + lVar74;
    lVar80 = (long)(int)sVar11 * (long)(int)sVar10;
    lVar79 = (lVar80 - (long)(int)sVar9 * (long)(int)sVar63) * 0x2d09;
    lVar77 = lVar77 * -0x27e9;
    lVar65 = lVar65 + (long)(int)lVar78 * 0x3f1a + lVar79 + lVar77;
    lVar78 = (lVar80 + (long)iVar69 * (long)iVar60) * -0x2b4e;
    lVar71 = lVar71 + (long)(int)lVar80 * -0x2406 + lVar81 + lVar78;
    iVar66 = (int)((long)iVar69 * (long)iVar60);
    lVar73 = lVar74 + (long)iVar66 * 0x2218 + lVar73 + lVar78;
    lVar74 = ((long)iVar69 * (long)iVar60 - (long)(int)sVar11 * (long)(int)sVar10) * 0xd23;
    lVar77 = lVar77 + (long)iVar66 * 0x6485 + lVar72 + lVar74;
    lVar79 = lVar79 + (long)(int)lVar80 * -0x1886 + lVar68 + lVar74;
    aiStack_1110[lVar52] = (int)((ulong)(lVar76 + lVar53) >> 0xb);
    aiStack_1110[lVar52 + 0x78] = (int)((ulong)(lVar53 - lVar76) >> 0xb);
    aiStack_1110[lVar52 + 8] = (int)((ulong)(lVar54 + lVar58) >> 0xb);
    aiStack_1110[lVar52 + 0x70] = (int)((ulong)(lVar58 - lVar54) >> 0xb);
    aiStack_1110[lVar52 + 0x10] = (int)((ulong)(lVar71 + lVar50) >> 0xb);
    aiStack_1110[lVar52 + 0x68] = (int)((ulong)(lVar50 - lVar71) >> 0xb);
    aiStack_1110[lVar52 + 0x18] = (int)((ulong)(lVar73 + lVar56) >> 0xb);
    aiStack_1110[lVar52 + 0x60] = (int)((ulong)(lVar56 - lVar73) >> 0xb);
    aiStack_1110[lVar52 + 0x20] = (int)((ulong)(lVar77 + lVar61) >> 0xb);
    aiStack_1110[lVar52 + 0x58] = (int)((ulong)(lVar61 - lVar77) >> 0xb);
    aiStack_1110[lVar52 + 0x28] = (int)((ulong)(lVar79 + lVar67) >> 0xb);
    aiStack_1110[lVar52 + 0x50] = (int)((ulong)(lVar67 - lVar79) >> 0xb);
    aiStack_1110[lVar52 + 0x30] = (int)((ulong)(lVar65 + lVar62) >> 0xb);
    aiStack_1110[lVar52 + 0x48] = (int)((ulong)(lVar62 - lVar65) >> 0xb);
    aiStack_1110[lVar52 + 0x38] = (int)((ulong)(lVar49 + lStack_1118) >> 0xb);
    aiStack_1110[lVar52 + 0x40] = (int)((ulong)(lStack_1118 - lVar49) >> 0xb);
    lVar52 = lVar52 + 1;
  } while ((int)lVar52 != 8);
  lVar53 = 0;
  lVar52 = lStack_1140 + 0x80;
  do {
    iVar18 = aiStack_1110[lVar53 + 1];
    iVar70 = aiStack_1110[lVar53 + 4];
    iVar5 = aiStack_1110[lVar53 + 5];
    iVar66 = aiStack_1110[lVar53] * 0x2000 + 0x20000;
    iVar60 = iVar66 + iVar70 * 0x29cf;
    iVar35 = iVar66 + iVar70 * -0x29cf;
    iVar75 = aiStack_1110[lVar53 + 2];
    iVar19 = aiStack_1110[lVar53 + 3];
    iVar69 = iVar66 + iVar70 * 0x1151;
    iVar2 = aiStack_1110[lVar53 + 6];
    iVar22 = aiStack_1110[lVar53 + 7];
    iVar21 = (iVar75 - iVar2) * 0x8d4;
    iVar66 = iVar66 + iVar70 * -0x1151;
    iVar20 = (iVar75 - iVar2) * 0x2c63;
    iVar3 = iVar20 + iVar2 * 0x5203;
    iVar4 = iVar21 + iVar75 * 0x1ccd;
    iVar20 = iVar20 + iVar75 * -0x133e;
    iVar21 = iVar21 + iVar2 * -0x1050;
    iVar70 = iVar3 + iVar60;
    iVar60 = iVar60 - iVar3;
    iVar75 = iVar4 + iVar69;
    iVar69 = iVar69 - iVar4;
    iVar2 = iVar20 + iVar66;
    iVar66 = iVar66 - iVar20;
    iVar20 = (iVar19 + iVar18) * 0x2b4e;
    iVar23 = (iVar5 + iVar18) * 0x27e9;
    iVar24 = (iVar22 + iVar18) * 0x22fc;
    iVar3 = iVar21 + iVar35;
    iVar25 = (iVar18 - iVar22) * 0x1cb6;
    uVar30 = (iVar5 + iVar18) * 0x1555;
    iVar34 = (iVar18 - iVar19) * 0xd23;
    iVar35 = iVar35 - iVar21;
    iVar4 = iVar20 + iVar18 * -0x492a + iVar23 + iVar24;
    iVar18 = iVar34 + iVar18 * -0x3abe + uVar30 + iVar25;
    iVar21 = (iVar5 + iVar19) * 0x470;
    iVar28 = (iVar22 + iVar19) * -0x1555;
    iVar20 = iVar20 + iVar19 * 0x24d + iVar21 + iVar28;
    iVar29 = (iVar22 + iVar5) * -0x2b4e;
    uVar57 = iVar21 + iVar5 * -0x2406 + iVar23 + iVar29;
    iVar21 = iVar28 + iVar22 * 0x2218 + iVar24 + iVar29;
    pbVar41 = (byte *)(*(long *)(uVar39 + lVar53) + (uVar38 & 0xffffffff));
    bVar6 = *(byte *)(lVar52 + ((ulong)((uint)(iVar4 + iVar70) >> 0x12) & 0x3ff));
    *pbVar41 = bVar6;
    pbVar41[0xf] = *(byte *)(lVar52 + ((ulong)((uint)(iVar70 - iVar4) >> 0x12) & 0x3ff));
    pbVar41[1] = *(byte *)(lVar52 + ((ulong)((uint)(iVar20 + iVar75) >> 0x12) & 0x3ff));
    uVar31 = (iVar22 + iVar19) * -0x27e9;
    plVar47 = (long *)0x6485;
    uVar16 = uVar31 + iVar22 * 0x6485;
    iVar70 = (iVar22 - iVar5) * 0xd23;
    uVar51 = uVar16 + iVar25 + iVar70;
    uVar42 = (ulong)uVar51;
    pbVar41[0xe] = *(byte *)(lVar52 + ((ulong)((uint)(iVar75 - iVar20) >> 0x12) & 0x3ff));
    bVar7 = *(byte *)(lVar52 + ((ulong)(uVar57 + iVar2 >> 0x12) & 0x3ff));
    pbVar41[2] = bVar7;
    pbVar41[0xd] = *(byte *)(lVar52 + ((ulong)(iVar2 - uVar57 >> 0x12) & 0x3ff));
    pbVar41[3] = *(byte *)(lVar52 + ((ulong)((uint)(iVar21 + iVar3) >> 0x12) & 0x3ff));
    pbVar41[0xc] = *(byte *)(lVar52 + ((ulong)((uint)(iVar3 - iVar21) >> 0x12) & 0x3ff));
    pbVar41[4] = *(byte *)(lVar52 + ((ulong)(uVar51 + iVar35 >> 0x12) & 0x3ff));
    uVar17 = iVar34 + iVar19 * 0x3f1a;
    uVar40 = (ulong)uVar17;
    iVar75 = (iVar5 - iVar19) * 0x2d09;
    lVar58 = 0xffffe77a;
    iVar70 = iVar75 + iVar5 * -0x1886 + uVar30 + iVar70;
    pbVar41[0xb] = *(byte *)(lVar52 + ((ulong)(iVar35 - uVar51 >> 0x12) & 0x3ff));
    pbVar41[5] = *(byte *)(lVar52 + ((ulong)((uint)(iVar70 + iVar66) >> 0x12) & 0x3ff));
    iVar75 = uVar17 + iVar75 + uVar31;
    pbVar41[10] = *(byte *)(lVar52 + ((ulong)((uint)(iVar66 - iVar70) >> 0x12) & 0x3ff));
    pbVar41[6] = *(byte *)(lVar52 + ((ulong)((uint)(iVar75 + iVar69) >> 0x12) & 0x3ff));
    pbVar41[9] = *(byte *)(lVar52 + ((ulong)((uint)(iVar69 - iVar75) >> 0x12) & 0x3ff));
    pbVar41[7] = *(byte *)(lVar52 + ((ulong)((uint)(iVar18 + iVar60) >> 0x12) & 0x3ff));
    pbVar41[8] = *(byte *)(lVar52 + ((ulong)((uint)(iVar60 - iVar18) >> 0x12) & 0x3ff));
    lVar53 = lVar53 + 8;
  } while (lVar53 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f10) {
    return;
  }
  uVar38 = uStack_1130;
  ___stack_chk_fail();
  uStack_1190 = (ulong)uVar57;
  uStack_1188 = (ulong)bVar6;
  uStack_1180 = (ulong)uVar16;
  uStack_1178 = (ulong)uVar31;
  uStack_1170 = uVar42;
  uStack_1168 = (ulong)bVar7;
  uStack_1160 = (ulong)uVar30;
  uStack_1158 = 0xd23;
  ppppuStack_1150 = &ppppuStack_eb0;
  pcStack_1148 = FUN_1081d98e8;
  lStack_1198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar52 = *(long *)(uVar40 + 0x1a8);
  psVar44 = (short *)(lVar58 + 0x70);
  puVar55 = auStack_1218;
  uVar57 = 9;
  psVar59 = *(short **)(pbVar41 + 0x58);
  do {
    if (uVar57 != 5) {
      sVar63 = psVar44[-0x20];
      if (psVar44[-0x30] == 0 && psVar44[-0x28] == 0) {
        if (sVar63 != 0) {
LAB_1081d9990:
          iVar66 = 0;
          goto LAB_1081d99a0;
        }
        if (((psVar44[-0x10] != 0) || (psVar44[-8] != 0)) || (*psVar44 != 0)) {
          sVar63 = 0;
          goto LAB_1081d9990;
        }
        uVar51 = (int)psVar44[-0x38] * (int)*psVar59 * 4;
        *puVar55 = uVar51;
        puVar55[8] = uVar51;
        puVar55[0x10] = uVar51;
        lVar53 = 0x60;
      }
      else {
        iVar66 = psVar44[-0x28] * 0x3b21;
LAB_1081d99a0:
        lVar53 = (long)iVar66 * (long)(int)psVar59[0x10] +
                 (long)((int)psVar44[-8] * (int)psVar59[0x30]) * -0x187e;
        uVar42 = (long)(int)psVar44[-0x38] * (long)(int)*psVar59 * 0x4000 - lVar53;
        iVar66 = (int)psVar59[8] * (int)psVar44[-0x30];
        lVar50 = (long)((int)psVar59[0x38] * (int)*psVar44) * -0x6c2 +
                 (long)((int)psVar59[0x28] * (int)psVar44[-0x10]) * 0x2e75 +
                 (long)((int)psVar59[0x18] * (int)sVar63) * -0x4587 + (long)iVar66 * 0x21f9;
        lVar58 = (long)((int)psVar59[0x38] * (int)*psVar44) * -0x1050 +
                 (long)((int)psVar59[0x28] * (int)psVar44[-0x10]) * -0x133e +
                 (long)((int)psVar59[0x18] * (int)sVar63) * 0x1ccd + (long)iVar66 * 0x5203;
        lVar53 = lVar53 + (long)(int)psVar44[-0x38] * (long)(int)*psVar59 * 0x4000 + 0x800;
        *puVar55 = (uint)((ulong)(lVar58 + lVar53) >> 0xc);
        puVar55[0x18] = (uint)((ulong)(lVar53 - lVar58) >> 0xc);
        puVar55[8] = (uint)(lVar50 + uVar42 + 0x800 >> 0xc);
        uVar51 = (uint)((uVar42 + 0x800) - lVar50 >> 0xc);
        lVar53 = 0x40;
      }
      *(uint *)((long)puVar55 + lVar53) = uVar51;
    }
    psVar59 = psVar59 + 1;
    puVar55 = puVar55 + 1;
    uVar57 = uVar57 - 1;
    psVar44 = psVar44 + 1;
  } while (1 < uVar57);
  lVar53 = 0;
  lVar52 = lVar52 + 0x80;
  lVar58 = 0x1ccd;
  lVar50 = 0x5203;
  psVar44 = (short *)0x3b21;
  uVar38 = uVar38 & 0xffffffff;
  do {
    plVar48 = plVar47 + 1;
    piVar64 = (int *)((long)auStack_1218 + lVar53);
    pbVar41 = (byte *)(*plVar47 + uVar38);
    iVar66 = *(int *)((long)auStack_1218 + lVar53 + 4);
    iVar60 = *(int *)((long)auStack_1218 + lVar53 + 8);
    iVar69 = *(int *)((long)auStack_1218 + lVar53 + 0xc);
    if (iVar66 == 0 && iVar60 == 0) {
      if (iVar69 != 0) {
LAB_1081d9b14:
        iVar60 = 0;
        goto LAB_1081d9b20;
      }
      if (((*(int *)((long)auStack_1218 + lVar53 + 0x14) != 0) ||
          (*(int *)((long)auStack_1218 + lVar53 + 0x18) != 0)) ||
         (*(int *)((long)auStack_1218 + lVar53 + 0x1c) != 0)) {
        iVar69 = 0;
        goto LAB_1081d9b14;
      }
      bVar6 = *(byte *)(lVar52 + ((ulong)(*piVar64 + 0x10U >> 5) & 0x3ff));
      *pbVar41 = bVar6;
      pbVar41[1] = bVar6;
      pbVar41[2] = bVar6;
      lVar56 = 3;
      uVar57 = 0;
      uVar39 = 0;
    }
    else {
      iVar60 = iVar60 * 0x3b21;
LAB_1081d9b20:
      uVar57 = *(uint *)((long)auStack_1218 + lVar53);
      iVar70 = *(int *)((long)auStack_1218 + lVar53 + 0x14);
      iVar60 = iVar60 + *(int *)((long)auStack_1218 + lVar53 + 0x18) * -0x187e;
      uVar51 = uVar57 * 0x4000 - iVar60;
      uVar42 = (ulong)uVar51;
      iVar75 = *(int *)((long)auStack_1218 + lVar53 + 0x1c);
      iVar2 = iVar66 * 0x5203 + iVar75 * -0x1050 + iVar70 * -0x133e + iVar69 * 0x1ccd;
      iVar60 = iVar60 + uVar57 * 0x4000 + 0x40000;
      bVar6 = *(byte *)(lVar52 + ((ulong)((uint)(iVar2 + iVar60) >> 0x13) & 0x3ff));
      uVar39 = (ulong)bVar6;
      iVar69 = iVar66 * 0x21f9 + iVar75 * -0x6c2 + iVar70 * 0x2e75 + iVar69 * -0x4587;
      *pbVar41 = bVar6;
      pbVar41[3] = *(byte *)(lVar52 + ((ulong)((uint)(iVar60 - iVar2) >> 0x13) & 0x3ff));
      iVar66 = uVar51 + 0x40000;
      bVar6 = *(byte *)(lVar52 + ((ulong)((uint)(iVar69 + iVar66) >> 0x13) & 0x3ff));
      piVar64 = (int *)(ulong)bVar6;
      pbVar41[1] = bVar6;
      bVar6 = *(byte *)(lVar52 + ((ulong)((uint)(iVar66 - iVar69) >> 0x13) & 0x3ff));
      lVar56 = 2;
    }
    pbVar41[lVar56] = bVar6;
    lVar53 = lVar53 + 0x20;
    plVar47 = plVar48;
  } while (lVar53 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1198) {
    return;
  }
  ___stack_chk_fail();
  uStack_1250 = uVar42;
  uStack_1248 = (ulong)uVar57;
  uStack_1240 = uVar39;
  piStack_1238 = piVar64;
  ppppuStack_1230 = &ppppuStack_1150;
  pcStack_1228 = FUN_1081d9c18;
  lStack_1258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar53 = *(long *)(lVar58 + 0x1a8);
  uVar57 = 9;
  psVar59 = *(short **)(lVar50 + 0x58);
  lVar52 = 0x20;
  do {
    bVar37 = uVar57 != 3;
    uVar57 = uVar57 - 1;
    if ((bVar37) && ((uVar57 & 0x7ffffffd) != 4)) {
      sVar63 = psVar44[0x28];
      if (psVar44[8] == 0 && psVar44[0x18] == 0) {
        if (sVar63 != 0) {
LAB_1081d9cb0:
          iVar66 = 0;
          goto LAB_1081d9cc0;
        }
        if (psVar44[0x38] != 0) {
          sVar63 = 0;
          goto LAB_1081d9cb0;
        }
        iVar66 = (int)*psVar44 * (int)*psVar59 * 4;
        *(int *)((long)aiStack_12b8 + lVar52) = iVar66;
      }
      else {
        iVar66 = psVar44[0x18] * -0x28ba;
LAB_1081d9cc0:
        lVar58 = (long)((int)psVar44[0x38] * (int)psVar59[0x38]) * -0x1712 +
                 (long)((int)sVar63 * (int)psVar59[0x28]) * 0x1b37 +
                 (long)iVar66 * (long)(int)psVar59[0x18] +
                 (long)((int)psVar44[8] * (int)psVar59[8]) * 0x73fc;
        uVar39 = (long)(int)*psVar44 * (long)(int)*psVar59 * 0x8000 | 0x1000;
        *(int *)((long)aiStack_12b8 + lVar52) = (int)(lVar58 + uVar39 >> 0xd);
        iVar66 = (int)(uVar39 - lVar58 >> 0xd);
      }
      *(int *)((long)auStack_1298 + lVar52) = iVar66;
    }
    psVar44 = psVar44 + 1;
    psVar59 = psVar59 + 1;
    lVar52 = lVar52 + 4;
  } while (1 < uVar57);
  lVar52 = 0;
  lVar53 = lVar53 + 0x80;
  puVar55 = auStack_1298;
  uVar39 = uVar38 & 0xffffffff;
  bVar37 = true;
  do {
    pbVar41 = (byte *)(plVar48[lVar52] + uVar39);
    uVar57 = puVar55[3];
    uVar40 = (ulong)uVar57;
    uVar51 = puVar55[5];
    if (puVar55[1] == 0 && uVar57 == 0) {
      if (uVar51 != 0) {
LAB_1081d9da0:
        iVar66 = 0;
        goto LAB_1081d9dac;
      }
      if (puVar55[7] != 0) {
        uVar51 = 0;
        goto LAB_1081d9da0;
      }
      bVar6 = *(byte *)(lVar53 + ((ulong)(*puVar55 + 0x10 >> 5) & 0x3ff));
      *pbVar41 = bVar6;
      uVar57 = 0;
    }
    else {
      iVar66 = uVar57 * -0x28ba;
LAB_1081d9dac:
      uVar57 = *puVar55;
      uVar38 = (ulong)puVar55[7];
      iVar60 = iVar66 + puVar55[1] * 0x73fc + puVar55[7] * -0x1712 + uVar51 * 0x1b37;
      iVar66 = uVar57 * 0x8000 + 0x80000;
      bVar6 = *(byte *)(lVar53 + ((ulong)((uint)(iVar60 + iVar66) >> 0x14) & 0x3ff));
      uVar40 = (ulong)bVar6;
      *pbVar41 = bVar6;
      bVar6 = *(byte *)(lVar53 + ((ulong)((uint)(iVar66 - iVar60) >> 0x14) & 0x3ff));
    }
    uVar42 = (ulong)bVar6;
    puVar45 = (ushort *)(ulong)uVar57;
    pbVar41[1] = bVar6;
    puVar55 = puVar55 + 8;
    lVar52 = 1;
    bVar36 = !bVar37;
    bVar37 = false;
    if (bVar36) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1258) {
        return;
      }
      ___stack_chk_fail();
      *(undefined1 *)(*plVar48 + (uVar38 & 0xffffffff)) =
           *(undefined1 *)
            (*(long *)(uVar42 + 0x1a8) +
             ((ulong)((uint)**(ushort **)(uVar40 + 0x58) * (uint)*puVar45 + 4 >> 3) & 0x3ff) + 0x80)
      ;
      return;
    }
  } while( true );
}



/* Entry: 1081d72a0; end: 1081d98e7;  */

void FUN_1081d72a0(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  bool bVar36;
  bool bVar37;
  ulong uVar38;
  byte *pbVar39;
  ulong uVar40;
  ulong uVar41;
  short *psVar42;
  ushort *puVar43;
  ulong uVar44;
  long *plVar45;
  long *plVar46;
  long lVar47;
  long lVar48;
  uint uVar49;
  long lVar50;
  long lVar51;
  uint *puVar52;
  long lVar53;
  long lVar54;
  uint uVar55;
  long lVar56;
  short *psVar57;
  int iVar58;
  long lVar59;
  long lVar60;
  short sVar61;
  int *piVar62;
  long lVar63;
  int iVar64;
  long lVar65;
  ulong uVar66;
  long lVar67;
  int iVar68;
  int iVar69;
  ulong uVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  int iVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  int aiStack_1278 [8];
  uint auStack_1258 [16];
  long lStack_1218;
  ulong uStack_1210;
  ulong uStack_1208;
  ulong uStack_1200;
  int *piStack_11f8;
  undefined8 ****ppppuStack_11f0;
  code *pcStack_11e8;
  uint auStack_11d8 [32];
  long lStack_1158;
  ulong uStack_1150;
  ulong uStack_1148;
  ulong uStack_1140;
  ulong uStack_1138;
  ulong uStack_1130;
  ulong uStack_1128;
  ulong uStack_1120;
  undefined8 uStack_1118;
  undefined8 ****ppppuStack_1110;
  code *pcStack_1108;
  long lStack_1100;
  undefined4 uStack_10f4;
  ulong uStack_10f0;
  long lStack_10e8;
  ulong uStack_10e0;
  long lStack_10d8;
  int aiStack_10d0 [128];
  long lStack_ed0;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  ulong uStack_ea0;
  ulong uStack_e98;
  undefined8 uStack_e90;
  ulong uStack_e88;
  ulong uStack_e80;
  ulong uStack_e78;
  undefined8 ****ppppuStack_e70;
  undefined8 uStack_e68;
  long lStack_e58;
  undefined4 uStack_e4c;
  ulong uStack_e48;
  long lStack_e40;
  ulong uStack_e38;
  uint auStack_e30 [120];
  long lStack_c50;
  ulong uStack_c40;
  ulong uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  long lStack_c00;
  ulong uStack_bf8;
  undefined8 ****ppppuStack_bf0;
  undefined8 uStack_be8;
  long lStack_bd8;
  undefined4 uStack_bcc;
  long lStack_bc8;
  uint auStack_bc0 [112];
  long lStack_a00;
  undefined8 uStack_9f0;
  ulong uStack_9e8;
  ulong uStack_9e0;
  ulong uStack_9d8;
  ulong uStack_9d0;
  undefined8 uStack_9c8;
  ulong uStack_9c0;
  undefined8 uStack_9b8;
  ulong uStack_9b0;
  ulong uStack_9a8;
  undefined8 ****ppppuStack_9a0;
  undefined8 uStack_998;
  long lStack_988;
  undefined4 uStack_97c;
  ulong uStack_978;
  int aiStack_970 [104];
  long lStack_7d0;
  ulong uStack_7c0;
  ulong uStack_7b8;
  undefined1 *puStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined1 ****ppppuStack_770;
  undefined8 uStack_768;
  long lStack_758;
  uint uStack_74c;
  ulong uStack_748;
  uint auStack_740 [96];
  long lStack_5c0;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_570;
  ulong uStack_568;
  undefined1 ***pppuStack_560;
  undefined8 uStack_558;
  long lStack_548;
  undefined4 uStack_53c;
  long lStack_538;
  int aiStack_530 [88];
  long lStack_3d0;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  undefined1 *puStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined1 **ppuStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined4 uStack_354;
  uint auStack_350 [80];
  long lStack_210;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  uint uStack_194;
  int aiStack_190 [72];
  long lStack_70;
  
  puStack_1b0 = &stack0xfffffffffffffff0;
  lVar50 = 0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a0 = *(long *)(param_1 + 0x1a8);
  lVar56 = *(long *)(param_2 + 0x58);
  do {
    psVar42 = (short *)(lVar56 + lVar50 * 2);
    psVar57 = (short *)(param_3 + lVar50 * 2);
    lVar63 = (long)(int)psVar42[0x10] * (long)(int)psVar57[0x10];
    uVar70 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    sVar61 = psVar57[0x20];
    sVar9 = psVar42[0x20];
    iVar64 = (int)sVar9 * (int)sVar61;
    lVar76 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    sVar10 = psVar57[0x28];
    sVar11 = psVar42[0x28];
    sVar12 = psVar57[0x38];
    sVar13 = psVar42[0x38];
    lVar51 = (long)(int)sVar11 * (long)(int)sVar10 - (long)(int)sVar13 * (long)(int)sVar12;
    lVar47 = (lVar76 - (long)(int)sVar11 * (long)(int)sVar10) -
             (long)(int)sVar13 * (long)(int)sVar12;
    lVar79 = uVar70 + (long)((int)psVar42[0x30] * (int)psVar57[0x30]) * 0x16a1;
    lVar71 = uVar70 + (long)((int)psVar42[0x30] * (int)psVar57[0x30]) * -0x2d42;
    lVar77 = lVar63 - (long)(int)sVar9 * (long)(int)sVar61;
    lVar73 = lVar63 + (long)(int)sVar9 * (long)(int)sVar61;
    iVar58 = (int)psVar57[0x18] * (int)psVar42[0x18];
    lVar53 = (lVar76 + (long)(int)sVar11 * (long)(int)sVar10) * 0x1d17;
    lVar54 = (long)iVar58 * -0x2731 + lVar51 * -0x2c91 + lVar53;
    lVar48 = lVar79 + lVar73 * 0x2a87 + (long)iVar64 * -0x7dc;
    lVar76 = (lVar76 + (long)(int)sVar13 * (long)(int)sVar12) * 0xf7a;
    lVar53 = lVar76 + lVar53 + (long)iVar58 * 0x2731;
    lVar76 = lVar51 * 0x2c91 + (long)iVar58 * -0x2731 + lVar76;
    aiStack_190[lVar50] = (int)((ulong)(lVar53 + lVar48) >> 0xb);
    lVar51 = lVar71 + lVar77 * 0x16a1;
    aiStack_190[lVar50 + 0x40] = (int)((ulong)(lVar48 - lVar53) >> 0xb);
    aiStack_190[lVar50 + 8] = (int)((ulong)(lVar47 * 0x2731 + lVar51) >> 0xb);
    lVar48 = lVar79 + lVar73 * -0x2a87 + (long)(int)lVar63 * 0x22ab;
    aiStack_190[lVar50 + 0x38] = (int)((ulong)(lVar51 + lVar47 * -0x2731) >> 0xb);
    aiStack_190[lVar50 + 0x10] = (int)((ulong)(lVar54 + lVar48) >> 0xb);
    aiStack_190[lVar50 + 0x30] = (int)((ulong)(lVar48 - lVar54) >> 0xb);
    lVar54 = lVar79 + (long)(int)lVar63 * -0x22ab + (long)iVar64 * 0x7dc;
    aiStack_190[lVar50 + 0x18] = (int)((ulong)(lVar76 + lVar54) >> 0xb);
    aiStack_190[lVar50 + 0x28] = (int)((ulong)(lVar54 - lVar76) >> 0xb);
    aiStack_190[lVar50 + 0x20] = (int)((ulong)(lVar71 + lVar77 * 0x7ffffffd2be) >> 0xb);
    lVar50 = lVar50 + 1;
  } while ((int)lVar50 != 8);
  lVar56 = 0;
  lVar50 = lStack_1a0 + 0x80;
  lVar54 = 0x1d17;
  lVar48 = 0xf7a;
  lVar53 = 0x2c91;
  uVar70 = (ulong)param_5;
  do {
    puVar1 = (undefined1 *)(*(long *)(param_4 + lVar56) + uVar70);
    iVar2 = aiStack_190[lVar56 + 1];
    iVar64 = aiStack_190[lVar56] * 0x2000 + 0x20000;
    iVar69 = aiStack_190[lVar56 + 2];
    iVar3 = aiStack_190[lVar56 + 7];
    uVar16 = iVar64 + aiStack_190[lVar56 + 6] * 0x16a1;
    iVar75 = aiStack_190[lVar56 + 4];
    iVar4 = aiStack_190[lVar56 + 5];
    uVar17 = iVar64 + aiStack_190[lVar56 + 6] * -0x2d42;
    iVar20 = aiStack_190[lVar56 + 3] * -0x2731;
    iVar18 = uVar17 + (iVar69 - iVar75) * 0x16a1;
    iVar21 = (iVar4 + iVar2) * 0x1d17;
    iVar68 = (iVar3 + iVar2) * 0xf7a;
    iVar64 = (iVar75 + iVar69) * 0x2a87 + iVar75 * -0x7dc + uVar16;
    uVar30 = iVar20 + (iVar4 - iVar3) * -0x2c91;
    iVar58 = iVar21 + aiStack_190[lVar56 + 3] * 0x2731 + iVar68;
    uVar31 = uVar16 + (iVar75 + iVar69) * -0x2a87;
    iVar2 = iVar2 - (iVar4 + iVar3);
    *puVar1 = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar58 + iVar64) >> 0x12) & 0x3ff));
    uVar55 = uVar30 + iVar21;
    puVar1[8] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar64 - iVar58) >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar50 + ((ulong)((uint)(iVar2 * 0x2731 + iVar18) >> 0x12) & 0x3ff));
    uVar49 = uVar31 + iVar69 * 0x22ab;
    puVar1[1] = bVar6;
    uVar32 = uVar16 + iVar69 * -0x22ab;
    puVar1[7] = *(undefined1 *)
                 (lVar50 + ((ulong)((uint)(iVar18 + iVar2 * -0x2731) >> 0x12) & 0x3ff));
    iVar68 = (iVar4 - iVar3) * 0x2c91 + iVar20 + iVar68;
    puVar1[2] = *(undefined1 *)(lVar50 + ((ulong)(uVar55 + uVar49 >> 0x12) & 0x3ff));
    iVar64 = uVar32 + iVar75 * 0x7dc;
    puVar1[6] = *(undefined1 *)(lVar50 + ((ulong)(uVar49 - uVar55 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar68 + iVar64) >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar64 - iVar68) >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)
                 (lVar50 + ((ulong)(uVar17 + (iVar69 - iVar75) * 0xfffd2be >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  uStack_194 = param_5;
  ___stack_chk_fail();
  uStack_200 = (ulong)uVar31;
  uStack_1f8 = (ulong)uVar30;
  uStack_1c0 = 0xfffd2be;
  uStack_1a8 = 0x1081d7634;
  uStack_354 = (int)uVar70;
  lVar50 = 0;
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_360 = *(long *)(lVar54 + 0x1a8);
  lVar56 = *(long *)(lVar48 + 0x58);
  uStack_1f0 = (ulong)uVar49;
  uStack_1e8 = (ulong)uVar16;
  uStack_1e0 = (ulong)uVar55;
  uStack_1d8 = (ulong)(uint)(iVar69 * 0x22ab);
  uStack_1d0 = (ulong)bVar6;
  uStack_1c8 = (ulong)uVar32;
  uStack_1b8 = (ulong)uVar17;
  do {
    psVar42 = (short *)(lVar56 + lVar50 * 2);
    psVar57 = (short *)(lVar53 + lVar50 * 2);
    uVar66 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    iVar68 = (int)psVar42[0x20] * (int)psVar57[0x20];
    lVar73 = uVar66 + (long)iVar68 * 0x249d;
    lVar77 = uVar66 + (long)iVar68 * -0xdfc;
    lVar76 = ((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10] +
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30]) * 0x1a9a;
    lVar48 = lVar76 + (long)(int)((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10]) * 0x1071;
    lVar76 = lVar76 + (long)((int)psVar42[0x30] * (int)psVar57[0x30]) * -0x45a4;
    lVar54 = lVar48 + lVar73;
    lVar73 = lVar73 - lVar48;
    lVar48 = lVar76 + lVar77;
    lVar77 = lVar77 - lVar76;
    iVar58 = (int)psVar42[8] * (int)psVar57[8];
    lVar71 = (long)(int)psVar42[0x28] * (long)(int)psVar57[0x28];
    lVar79 = (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18] +
             (long)(int)psVar42[0x38] * (long)(int)psVar57[0x38];
    lVar63 = (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18] -
             (long)(int)psVar42[0x38] * (long)(int)psVar57[0x38];
    lVar47 = lVar63 * 0x9e3 + lVar71 * 0x2000;
    lVar76 = lVar79 * 0x1e6f + (long)iVar58 * 0x2cb3 + lVar47;
    lVar47 = (long)iVar58 * 0x714 + lVar79 * -0x1e6f + lVar47;
    lVar51 = lVar63 * -0x19e3 + lVar71 * 0x2000;
    iVar64 = (iVar58 - (int)lVar71) - (int)lVar63;
    lVar63 = ((long)iVar58 * 0x2853 + lVar79 * -0x12cf) - lVar51;
    lVar51 = (long)iVar58 * 0x148c + lVar79 * -0x12cf + lVar51;
    auStack_350[lVar50] = (uint)((ulong)(lVar76 + lVar54) >> 0xb);
    auStack_350[lVar50 + 0x48] = (uint)((ulong)(lVar54 - lVar76) >> 0xb);
    auStack_350[lVar50 + 8] = (uint)((ulong)(lVar63 + lVar48) >> 0xb);
    auStack_350[lVar50 + 0x40] = (uint)((ulong)(lVar48 - lVar63) >> 0xb);
    iVar58 = (int)(uVar66 + (long)iVar68 * -0x2d42 >> 0xb);
    auStack_350[lVar50 + 0x10] = iVar58 + iVar64 * 4;
    auStack_350[lVar50 + 0x38] = iVar58 + iVar64 * -4;
    auStack_350[lVar50 + 0x18] = (uint)((ulong)(lVar51 + lVar77) >> 0xb);
    auStack_350[lVar50 + 0x30] = (uint)((ulong)(lVar77 - lVar51) >> 0xb);
    auStack_350[lVar50 + 0x20] = (uint)((ulong)(lVar47 + lVar73) >> 0xb);
    auStack_350[lVar50 + 0x28] = (uint)((ulong)(lVar73 - lVar47) >> 0xb);
    lVar50 = lVar50 + 1;
  } while ((int)lVar50 != 8);
  lVar56 = 0;
  lVar50 = lStack_360 + 0x80;
  lVar54 = 0x1e6f;
  lVar48 = 0x2cb3;
  lVar53 = 0x714;
  uVar70 = uVar70 & 0xffffffff;
  do {
    uVar16 = auStack_350[lVar56 + 1];
    uVar55 = auStack_350[lVar56 + 4];
    uVar17 = auStack_350[lVar56 + 5];
    iVar64 = auStack_350[lVar56] * 0x2000 + 0x20000;
    iVar58 = iVar64 + uVar55 * 0x249d;
    iVar68 = iVar64 + uVar55 * -0xdfc;
    uVar30 = iVar64 + uVar55 * -0x2d42;
    iVar75 = (auStack_350[lVar56 + 6] + auStack_350[lVar56 + 2]) * 0x1a9a;
    iVar69 = iVar75 + auStack_350[lVar56 + 2] * 0x1071;
    iVar75 = iVar75 + auStack_350[lVar56 + 6] * -0x45a4;
    iVar64 = iVar69 + iVar58;
    uVar32 = iVar58 - iVar69;
    uVar55 = iVar75 + iVar68;
    iVar58 = auStack_350[lVar56 + 7] + auStack_350[lVar56 + 3];
    iVar2 = auStack_350[lVar56 + 3] - auStack_350[lVar56 + 7];
    uVar33 = iVar68 - iVar75;
    iVar68 = iVar2 * 0x9e3 + uVar17 * 0x2000;
    iVar69 = iVar58 * 0x1e6f + uVar16 * 0x2cb3 + iVar68;
    puVar1 = (undefined1 *)(*(long *)(param_4 + lVar56) + uVar70);
    uVar49 = iVar58 * -0x1e6f + uVar16 * 0x714 + iVar68;
    iVar68 = iVar2 * -0x19e3 + uVar17 * 0x2000;
    *puVar1 = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar69 + iVar64) >> 0x12) & 0x3ff));
    uVar31 = uVar16 * 0x2853 - (iVar58 * 0x12cf + iVar68);
    puVar1[9] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar64 - iVar69) >> 0x12) & 0x3ff));
    iVar2 = (uVar16 - uVar17) - iVar2;
    puVar1[1] = *(undefined1 *)(lVar50 + ((ulong)(uVar31 + uVar55 >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar50 + ((ulong)(uVar55 - uVar31 >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar50 + ((ulong)(uVar30 + iVar2 * 0x2000 >> 0x12) & 0x3ff));
    iVar68 = iVar58 * -0x12cf + uVar16 * 0x148c + iVar68;
    puVar1[7] = *(undefined1 *)(lVar50 + ((ulong)(uVar30 + iVar2 * -0x2000 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)(lVar50 + ((ulong)(iVar68 + uVar33 >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar50 + ((ulong)(uVar33 - iVar68 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar50 + ((ulong)(uVar49 + uVar32 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar50 + ((ulong)(uVar32 - uVar49 >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
    return;
  }
  ___stack_chk_fail();
  uStack_3c0 = (ulong)uVar55;
  uStack_3b8 = (ulong)uVar31;
  uStack_3b0 = (ulong)(uVar16 - uVar17);
  uStack_3a8 = (ulong)uVar33;
  uStack_3a0 = (ulong)uVar49;
  uStack_398 = (ulong)uVar30;
  uStack_390 = (ulong)uVar16;
  puStack_388 = puVar1;
  uStack_380 = (ulong)uVar32;
  uStack_378 = 0x148c;
  ppuStack_370 = &puStack_1b0;
  uStack_368 = 0x1081d7a08;
  uStack_53c = (int)uVar70;
  lStack_538 = param_4;
  lVar50 = 0;
  lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_548 = *(long *)(lVar54 + 0x1a8);
  lVar56 = *(long *)(lVar48 + 0x58);
  do {
    psVar42 = (short *)(lVar56 + lVar50 * 2);
    psVar57 = (short *)(lVar53 + lVar50 * 2);
    sVar61 = psVar57[0x10];
    sVar9 = psVar42[0x10];
    lVar77 = (long)(int)sVar9 * (long)(int)sVar61;
    lVar79 = (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20];
    sVar10 = psVar57[0x30];
    sVar11 = psVar42[0x30];
    iVar58 = (int)sVar11 * (int)sVar10;
    lVar73 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    lVar67 = (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18];
    lVar60 = lVar77 + (long)(int)sVar11 * (long)(int)sVar10;
    sVar12 = psVar57[0x28];
    sVar13 = psVar42[0x28];
    iVar68 = (int)sVar13 * (int)sVar12;
    sVar14 = psVar57[0x38];
    sVar15 = psVar42[0x38];
    lVar59 = lVar60 - (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20];
    iVar64 = (int)sVar15 * (int)sVar14;
    lVar54 = lVar73 + (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18];
    lVar76 = lVar54 * 0x1c6a;
    lVar65 = (lVar73 + (long)(int)sVar13 * (long)(int)sVar12) * 0x1574;
    lVar63 = (lVar54 + (long)(int)sVar13 * (long)(int)sVar12 + (long)(int)sVar15 * (long)(int)sVar14
             ) * 0xcc0;
    lVar48 = lVar63 + (lVar67 + (long)(int)sVar13 * (long)(int)sVar12) * -0x2537;
    lVar51 = (lVar67 + (long)(int)sVar15 * (long)(int)sVar14) * -0x398b;
    lVar54 = lVar65 + (long)iVar68 * -0x2626 + lVar48;
    lVar48 = lVar76 + (long)(int)lVar67 * 0x4258 + lVar51 + lVar48;
    uVar66 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lVar71 = (lVar79 - (long)(int)sVar11 * (long)(int)sVar10) * 0x517e;
    lVar47 = lVar63 + (lVar73 + (long)(int)sVar15 * (long)(int)sVar14) * 3000;
    lVar76 = lVar76 + (long)(int)lVar73 * -0x1d8a + lVar65 + lVar47;
    lVar47 = lVar51 + (long)iVar64 * 0x4347 + lVar47;
    lVar65 = uVar66 + lVar59 * 0x2b6c;
    lVar51 = lVar71 + (long)iVar58 * 0x43b5 + lVar65;
    lVar63 = (long)(int)lVar67 * -0x2ef3 + (long)iVar68 * 0x200b + (long)iVar64 * -0x35ea + lVar63;
    aiStack_530[lVar50] = (int)((ulong)(lVar76 + lVar51) >> 0xb);
    lVar73 = lVar65 + (lVar79 - (long)(int)sVar9 * (long)(int)sVar61) * 0xdc9;
    lVar71 = lVar71 + (long)(int)lVar79 * -0x3a4c + lVar73;
    aiStack_530[lVar50 + 0x50] = (int)((ulong)(lVar51 - lVar76) >> 0xb);
    lVar65 = lVar65 + lVar60 * -0x24fb;
    aiStack_530[lVar50 + 8] = (int)((ulong)(lVar48 + lVar71) >> 0xb);
    iVar64 = (int)lVar77;
    lVar76 = (long)iVar64 * -0x2c83 + (long)(int)lVar79 * 0x3e39 + lVar65;
    lVar65 = lVar65 + (long)iVar58 * -0x193d;
    aiStack_530[lVar50 + 0x48] = (int)((ulong)(lVar71 - lVar48) >> 0xb);
    aiStack_530[lVar50 + 0x10] = (int)((ulong)(lVar54 + lVar65) >> 0xb);
    aiStack_530[lVar50 + 0x40] = (int)((ulong)(lVar65 - lVar54) >> 0xb);
    lVar73 = lVar73 + (long)iVar64 * -0x306f;
    aiStack_530[lVar50 + 0x18] = (int)((ulong)(lVar47 + lVar73) >> 0xb);
    aiStack_530[lVar50 + 0x38] = (int)((ulong)(lVar73 - lVar47) >> 0xb);
    aiStack_530[lVar50 + 0x20] = (int)((ulong)(lVar63 + lVar76) >> 0xb);
    aiStack_530[lVar50 + 0x30] = (int)((ulong)(lVar76 - lVar63) >> 0xb);
    aiStack_530[lVar50 + 0x28] = (int)(uVar66 + lVar59 * 0x7ffffffd2bf >> 0xb);
    lVar50 = lVar50 + 1;
  } while ((int)lVar50 != 8);
  lVar56 = 0;
  lVar50 = lStack_548 + 0x80;
  do {
    puVar1 = (undefined1 *)(*(long *)(param_4 + lVar56) + (uVar70 & 0xffffffff));
    iVar18 = aiStack_530[lVar56 + 1];
    iVar75 = aiStack_530[lVar56 + 4];
    iVar20 = aiStack_530[lVar56 + 5];
    iVar3 = aiStack_530[lVar56 + 6];
    iVar21 = aiStack_530[lVar56 + 7];
    iVar64 = aiStack_530[lVar56] * 0x2000 + 0x20000;
    iVar68 = (iVar75 - iVar3) * 0x517e;
    iVar4 = aiStack_530[lVar56 + 2];
    iVar5 = aiStack_530[lVar56 + 3];
    iVar2 = (iVar3 + iVar4) - iVar75;
    iVar69 = iVar64 + iVar2 * 0x2b6c;
    iVar19 = iVar69 + (iVar75 - iVar4) * 0xdc9;
    iVar58 = iVar68 + iVar3 * 0x43b5 + iVar69;
    iVar68 = iVar68 + iVar75 * -0x3a4c + iVar19;
    iVar69 = iVar69 + (iVar3 + iVar4) * -0x24fb;
    uVar17 = iVar64 + iVar2 * 0xfffd2bf;
    uVar44 = (ulong)uVar17;
    iVar19 = iVar19 + iVar4 * -0x306f;
    iVar2 = (iVar5 + iVar18 + iVar20 + iVar21) * 0xcc0;
    iVar22 = (iVar5 + iVar18) * 0x1c6a;
    uVar30 = iVar69 + iVar3 * -0x193d;
    uVar66 = (ulong)uVar30;
    iVar23 = (iVar20 + iVar18) * 0x1574;
    iVar3 = iVar2 + (iVar21 + iVar18) * 3000;
    uVar55 = iVar22 + iVar18 * -0x1d8a + iVar23;
    iVar69 = iVar4 * -0x2c83 + iVar75 * 0x3e39 + iVar69;
    iVar64 = uVar55 + iVar3;
    *puVar1 = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar64 + iVar58) >> 0x12) & 0x3ff));
    iVar4 = (iVar21 + iVar5) * -0x398b;
    iVar75 = iVar2 + (iVar20 + iVar5) * -0x2537;
    uVar49 = iVar23 + iVar20 * -0x2626 + iVar75;
    iVar75 = iVar22 + iVar5 * 0x4258 + iVar4 + iVar75;
    puVar1[10] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar58 - iVar64) >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar50 + ((ulong)((uint)(iVar75 + iVar68) >> 0x12) & 0x3ff));
    uVar40 = (ulong)bVar6;
    puVar1[1] = bVar6;
    uVar16 = iVar4 + iVar21 * 0x4347 + iVar3;
    uVar38 = (ulong)uVar16;
    puVar1[9] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar68 - iVar75) >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar50 + ((ulong)(uVar49 + uVar30 >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar50 + ((ulong)(uVar30 - uVar49 >> 0x12) & 0x3ff));
    puVar1[3] = *(undefined1 *)(lVar50 + ((ulong)(uVar16 + iVar19 >> 0x12) & 0x3ff));
    iVar2 = iVar5 * -0x2ef3 + iVar20 * 0x200b + iVar21 * -0x35ea + iVar2;
    puVar1[7] = *(undefined1 *)(lVar50 + ((ulong)(iVar19 - uVar16 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar2 + iVar69) >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar69 - iVar2) >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar50 + ((ulong)(uVar17 >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d0) {
    return;
  }
  ___stack_chk_fail();
  uStack_5b0 = 0xffffca16;
  uStack_5a8 = 0x200b;
  uStack_5a0 = 0xffffd10d;
  uStack_598 = 0x4347;
  uStack_590 = 0xffffc675;
  uStack_588 = 0xffffd9da;
  uStack_580 = 0x4258;
  uStack_578 = 0xffffdac9;
  lStack_570 = param_4;
  uStack_568 = (ulong)uVar55;
  pppuStack_560 = &ppuStack_370;
  uStack_558 = 0x1081d7eb8;
  uStack_74c = uVar49;
  uStack_748 = uVar44;
  lVar50 = 0;
  lStack_5c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_758 = *(long *)(uVar66 + 0x1a8);
  lVar56 = *(long *)(uVar38 + 0x58);
  do {
    psVar42 = (short *)(lVar56 + lVar50 * 2);
    psVar57 = (short *)(uVar40 + lVar50 * 2);
    uVar70 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lVar59 = uVar70 + (long)((int)psVar57[0x20] * (int)psVar42[0x20]) * 0x2731;
    lVar77 = uVar70 + (long)((int)psVar57[0x20] * (int)psVar42[0x20]) * -0x2731;
    iVar64 = (int)((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10]);
    lVar76 = (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30];
    lVar48 = (long)(int)psVar42[0x10] * (long)(int)psVar57[0x10] -
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30];
    lVar54 = uVar70 + lVar48 * 0x2000;
    lVar60 = uVar70 + lVar48 * -0x2000;
    lVar48 = (long)iVar64 * 0x2bb6 + lVar76 * 0x2000;
    lVar53 = lVar48 + lVar59;
    lVar59 = lVar59 - lVar48;
    lVar76 = (long)iVar64 * 0xbb6 + lVar76 * -0x2000;
    lVar48 = lVar76 + lVar77;
    lVar77 = lVar77 - lVar76;
    lVar73 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    sVar61 = psVar57[0x28];
    sVar9 = psVar42[0x28];
    lVar51 = (long)(int)sVar9 * (long)(int)sVar61;
    sVar10 = psVar57[0x38];
    sVar11 = psVar42[0x38];
    iVar64 = (int)sVar11 * (int)sVar10;
    iVar58 = (int)((long)(int)psVar42[0x18] * (long)(int)psVar57[0x18]);
    lVar76 = lVar73 + (long)(int)sVar9 * (long)(int)sVar61;
    lVar63 = (lVar76 + (long)(int)sVar11 * (long)(int)sVar10) * 0x1b8d;
    lVar47 = lVar63 + lVar76 * 0x85b;
    lVar76 = (long)(int)lVar73 * 0x8f7 + (long)iVar58 * 0x29cf + lVar47;
    lVar65 = (lVar51 + (long)(int)sVar11 * (long)(int)sVar10) * -0x2175;
    lVar47 = (long)iVar58 * -0x1151 + (long)(int)lVar51 * -0x2f50 + lVar65 + lVar47;
    lVar71 = lVar73 - (long)(int)sVar11 * (long)(int)sVar10;
    lVar79 = (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18] -
             (long)(int)sVar9 * (long)(int)sVar61;
    lVar51 = (long)iVar64 * 0x32c6 + (long)iVar58 * -0x29cf + lVar65 + lVar63;
    lVar63 = (long)(int)lVar73 * -0x15a4 + (long)iVar58 * -0x1151 + (long)iVar64 * -0x3f74 + lVar63;
    auStack_740[lVar50] = (uint)((ulong)(lVar76 + lVar53) >> 0xb);
    lVar73 = (lVar71 + lVar79) * 0x1151;
    lVar71 = lVar73 + lVar71 * 0x187e;
    auStack_740[lVar50 + 0x58] = (uint)((ulong)(lVar53 - lVar76) >> 0xb);
    auStack_740[lVar50 + 8] = (uint)((ulong)(lVar71 + lVar54) >> 0xb);
    auStack_740[lVar50 + 0x50] = (uint)((ulong)(lVar54 - lVar71) >> 0xb);
    auStack_740[lVar50 + 0x10] = (uint)((ulong)(lVar47 + lVar48) >> 0xb);
    auStack_740[lVar50 + 0x48] = (uint)((ulong)(lVar48 - lVar47) >> 0xb);
    auStack_740[lVar50 + 0x18] = (uint)((ulong)(lVar51 + lVar77) >> 0xb);
    auStack_740[lVar50 + 0x40] = (uint)((ulong)(lVar77 - lVar51) >> 0xb);
    lVar73 = lVar73 + lVar79 * -0x3b21;
    auStack_740[lVar50 + 0x20] = (uint)((ulong)(lVar73 + lVar60) >> 0xb);
    auStack_740[lVar50 + 0x38] = (uint)((ulong)(lVar60 - lVar73) >> 0xb);
    auStack_740[lVar50 + 0x28] = (uint)((ulong)(lVar63 + lVar59) >> 0xb);
    auStack_740[lVar50 + 0x30] = (uint)((ulong)(lVar59 - lVar63) >> 0xb);
    lVar50 = lVar50 + 1;
  } while ((int)lVar50 != 8);
  lVar56 = 0;
  lVar50 = lStack_758 + 0x80;
  lVar54 = 0xffffd0b0;
  uVar70 = (ulong)uVar49;
  do {
    uVar16 = auStack_740[lVar56 + 1];
    uVar17 = auStack_740[lVar56 + 5];
    iVar64 = auStack_740[lVar56] * 0x2000 + 0x20000;
    iVar58 = iVar64 + auStack_740[lVar56 + 4] * 0x2731;
    uVar55 = auStack_740[lVar56 + 2];
    uVar30 = auStack_740[lVar56 + 3];
    uVar49 = auStack_740[lVar56 + 6];
    uVar31 = auStack_740[lVar56 + 7];
    iVar2 = iVar64 + auStack_740[lVar56 + 4] * -0x2731;
    iVar68 = iVar64 + (uVar55 - uVar49) * 0x2000;
    uVar32 = iVar64 + (uVar55 - uVar49) * -0x2000;
    iVar64 = uVar55 * 0x2bb6 + uVar49 * 0x2000;
    iVar69 = iVar64 + iVar58;
    uVar33 = iVar58 - iVar64;
    iVar58 = uVar55 * 0xbb6 + uVar49 * -0x2000;
    iVar64 = iVar58 + iVar2;
    uVar55 = (uVar17 + uVar16 + uVar31) * 0x1b8d;
    iVar75 = uVar55 + (uVar17 + uVar16) * 0x85b;
    uVar49 = iVar2 - iVar58;
    iVar58 = uVar30 * 0x29cf + uVar16 * 0x8f7 + iVar75;
    iVar4 = (uVar31 + uVar17) * -0x2175;
    iVar75 = uVar30 * -0x1151 + uVar17 * -0x2f50 + iVar4 + iVar75;
    lVar48 = *(long *)(uVar44 + lVar56);
    uVar17 = uVar30 - uVar17;
    uVar66 = (ulong)uVar17;
    puVar1 = (undefined1 *)(lVar48 + uVar70);
    *puVar1 = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar58 + iVar69) >> 0x12) & 0x3ff));
    iVar3 = ((uVar16 - uVar31) + uVar17) * 0x1151;
    iVar2 = iVar3 + (uVar16 - uVar31) * 0x187e;
    puVar1[0xb] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar69 - iVar58) >> 0x12) & 0x3ff));
    puVar1[1] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar2 + iVar68) >> 0x12) & 0x3ff));
    iVar58 = uVar30 * -0x29cf + uVar31 * 0x32c6 + uVar55 + iVar4;
    puVar1[10] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar68 - iVar2) >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar75 + iVar64) >> 0x12) & 0x3ff));
    puVar1[9] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar64 - iVar75) >> 0x12) & 0x3ff));
    iVar64 = uVar30 * -0x1151 + uVar16 * -0x15a4 + uVar31 * -0x3f74 + uVar55;
    puVar1[3] = *(undefined1 *)(lVar50 + ((ulong)(iVar58 + uVar49 >> 0x12) & 0x3ff));
    iVar3 = iVar3 + uVar17 * -0x3b21;
    puVar1[8] = *(undefined1 *)(lVar50 + ((ulong)(uVar49 - iVar58 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar50 + ((ulong)(iVar3 + uVar32 >> 0x12) & 0x3ff));
    puVar1[7] = *(undefined1 *)(lVar50 + ((ulong)(uVar32 - iVar3 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar50 + ((ulong)(iVar64 + uVar33 >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar50 + ((ulong)(uVar33 - iVar64 >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5c0) {
    return;
  }
  uVar38 = uStack_748;
  ___stack_chk_fail();
  uStack_7c0 = (ulong)uVar49;
  uStack_7b8 = (ulong)uVar55;
  puStack_7b0 = puVar1;
  uStack_7a8 = (ulong)uVar31;
  uStack_7a0 = (ulong)uVar16;
  uStack_798 = (ulong)uVar32;
  uStack_790 = (ulong)uVar33;
  uStack_788 = 0xffffc4df;
  uStack_780 = 0x187e;
  uStack_778 = 0x1151;
  ppppuStack_770 = &pppuStack_560;
  uStack_768 = 0x1081d831c;
  uStack_97c = (int)uVar70;
  uStack_978 = uVar66;
  lVar50 = 0;
  lStack_7d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_988 = *(long *)(lVar48 + 0x1a8);
  lVar56 = *(long *)(uVar38 + 0x58);
  do {
    psVar42 = (short *)(lVar56 + lVar50 * 2);
    psVar57 = (short *)(lVar54 + lVar50 * 2);
    sVar61 = psVar57[0x10];
    sVar9 = psVar42[0x10];
    iVar64 = (int)sVar9 * (int)sVar61;
    uVar38 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lVar71 = (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20] +
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30];
    lVar67 = (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20] -
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30];
    lVar53 = uVar38 + lVar67 * 0x319;
    lVar48 = lVar71 * 0x24f9 + (long)iVar64 * 0x2bf1 + lVar53;
    lVar53 = (long)iVar64 * 0x100c + lVar71 * -0x24f9 + lVar53;
    lVar47 = uVar38 + lVar67 * 0xf95;
    lVar76 = (long)iVar64 * 0x21e0 + lVar71 * -0xa20 + lVar47;
    lVar47 = lVar71 * 0xa20 + (long)iVar64 * -0x2812 + lVar47;
    lVar63 = uVar38 + lVar67 * -0x1dfe;
    lVar51 = (long)iVar64 * -0x574 + lVar71 * -0xdf2 + lVar63;
    lVar63 = lVar71 * 0xdf2 + (long)iVar64 * -0x19b5 + lVar63;
    lVar60 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    sVar10 = psVar57[0x18];
    sVar11 = psVar42[0x18];
    lVar72 = (long)(int)sVar11 * (long)(int)sVar10;
    sVar12 = psVar57[0x28];
    sVar13 = psVar42[0x28];
    lVar78 = (long)(int)sVar13 * (long)(int)sVar12;
    sVar14 = psVar57[0x38];
    sVar15 = psVar42[0x38];
    lVar73 = (lVar60 + (long)(int)sVar11 * (long)(int)sVar10) * 0x2a50;
    lVar77 = (lVar60 + (long)(int)sVar13 * (long)(int)sVar12) * 0x253e;
    lVar65 = lVar60 + (long)(int)sVar15 * (long)(int)sVar14;
    lVar79 = lVar65 * 0x1e02;
    lVar71 = lVar73 + (long)(int)lVar60 * -0x40a5 + lVar77 + lVar79;
    lVar59 = (lVar72 + (long)(int)sVar13 * (long)(int)sVar12) * -0xad5;
    lVar74 = (lVar72 + (long)(int)sVar15 * (long)(int)sVar14) * -0x253e;
    lVar73 = lVar73 + (long)(int)lVar72 * 0x1acb + lVar59 + lVar74;
    lVar80 = (lVar78 + (long)(int)sVar15 * (long)(int)sVar14) * -0x1508;
    lVar77 = lVar59 + (long)(int)lVar78 * -0x324f + lVar77 + lVar80;
    iVar64 = (int)sVar15 * (int)sVar14;
    lVar79 = lVar74 + (long)iVar64 * 0x4694 + lVar79 + lVar80;
    lVar59 = (lVar78 - (long)(int)sVar11 * (long)(int)sVar10) * 0x1e02 + lVar65 * 0xad5;
    lVar65 = (long)(int)lVar60 * 0xa33 + (long)(int)lVar72 * -0xeea + lVar59;
    lVar59 = (long)(int)lVar78 * 0xc4e + (long)iVar64 * -0x37c1 + lVar59;
    aiStack_970[lVar50] = (int)((ulong)(lVar71 + lVar48) >> 0xb);
    aiStack_970[lVar50 + 0x60] = (int)((ulong)(lVar48 - lVar71) >> 0xb);
    aiStack_970[lVar50 + 8] = (int)((ulong)(lVar73 + lVar76) >> 0xb);
    aiStack_970[lVar50 + 0x58] = (int)((ulong)(lVar76 - lVar73) >> 0xb);
    aiStack_970[lVar50 + 0x10] = (int)((ulong)(lVar77 + lVar53) >> 0xb);
    aiStack_970[lVar50 + 0x50] = (int)((ulong)(lVar53 - lVar77) >> 0xb);
    aiStack_970[lVar50 + 0x18] = (int)((ulong)(lVar79 + lVar51) >> 0xb);
    aiStack_970[lVar50 + 0x48] = (int)((ulong)(lVar51 - lVar79) >> 0xb);
    aiStack_970[lVar50 + 0x20] = (int)((ulong)(lVar65 + lVar63) >> 0xb);
    aiStack_970[lVar50 + 0x40] = (int)((ulong)(lVar63 - lVar65) >> 0xb);
    aiStack_970[lVar50 + 0x28] = (int)((ulong)(lVar59 + lVar47) >> 0xb);
    aiStack_970[lVar50 + 0x38] = (int)((ulong)(lVar47 - lVar59) >> 0xb);
    aiStack_970[lVar50 + 0x30] =
         (int)(uVar38 + (lVar67 - (long)(int)sVar9 * (long)(int)sVar61) * 0x2d41 >> 0xb);
    lVar50 = lVar50 + 1;
  } while ((int)lVar50 != 8);
  lVar56 = 0;
  lVar50 = lStack_988 + 0x80;
  lVar54 = 0xfffff116;
  do {
    iVar18 = aiStack_970[lVar56 + 1];
    iVar64 = aiStack_970[lVar56] * 0x2000 + 0x20000;
    iVar20 = aiStack_970[lVar56 + 5];
    iVar21 = aiStack_970[lVar56 + 7];
    iVar58 = aiStack_970[lVar56 + 6] + aiStack_970[lVar56 + 4];
    iVar34 = aiStack_970[lVar56 + 4] - aiStack_970[lVar56 + 6];
    iVar69 = iVar64 + iVar34 * 0x319;
    iVar4 = aiStack_970[lVar56 + 2];
    iVar5 = aiStack_970[lVar56 + 3];
    iVar75 = iVar64 + iVar34 * 0xf95;
    uVar55 = iVar58 * 0x24f9 + iVar4 * 0x2bf1 + iVar69;
    iVar3 = iVar64 + iVar34 * -0x1dfe;
    iVar68 = iVar58 * 0xa20 + iVar4 * -0x2812 + iVar75;
    uVar49 = iVar58 * 0xdf2 + iVar4 * -0x19b5 + iVar3;
    uVar40 = (ulong)uVar49;
    iVar19 = (iVar5 + iVar18) * 0x2a50;
    iVar69 = iVar58 * -0x24f9 + iVar4 * 0x100c + iVar69;
    iVar22 = (iVar20 + iVar18) * 0x253e;
    iVar23 = (iVar21 + iVar18) * 0x1e02;
    iVar75 = iVar58 * -0xa20 + iVar4 * 0x21e0 + iVar75;
    iVar2 = iVar19 + iVar18 * -0x40a5 + iVar22 + iVar23;
    iVar24 = (iVar20 + iVar5) * -0xad5;
    iVar3 = iVar58 * -0xdf2 + iVar4 * -0x574 + iVar3;
    iVar25 = (iVar21 + iVar5) * -0x253e;
    uVar16 = iVar19 + iVar5 * 0x1acb + iVar24 + iVar25;
    iVar19 = (iVar21 + iVar20) * -0x1508;
    iVar58 = iVar24 + iVar20 * -0x324f + iVar22 + iVar19;
    uVar17 = iVar25 + iVar21 * 0x4694 + iVar23 + iVar19;
    bVar6 = *(byte *)(lVar50 + ((ulong)(iVar2 + uVar55 >> 0x12) & 0x3ff));
    pbVar39 = (byte *)(*(long *)(uVar66 + lVar56) + (uVar70 & 0xffffffff));
    *pbVar39 = bVar6;
    pbVar39[0xc] = *(byte *)(lVar50 + ((ulong)(uVar55 - iVar2 >> 0x12) & 0x3ff));
    pbVar39[1] = *(byte *)(lVar50 + ((ulong)(uVar16 + iVar75 >> 0x12) & 0x3ff));
    uVar32 = (iVar20 - iVar5) * 0x1e02;
    uVar31 = uVar32 + (iVar21 + iVar18) * 0xad5;
    pbVar39[0xb] = *(byte *)(lVar50 + ((ulong)(iVar75 - uVar16 >> 0x12) & 0x3ff));
    bVar7 = *(byte *)(lVar50 + ((ulong)((uint)(iVar58 + iVar69) >> 0x12) & 0x3ff));
    pbVar39[2] = bVar7;
    pbVar39[10] = *(byte *)(lVar50 + ((ulong)((uint)(iVar69 - iVar58) >> 0x12) & 0x3ff));
    pbVar39[3] = *(byte *)(lVar50 + ((ulong)(uVar17 + iVar3 >> 0x12) & 0x3ff));
    uVar30 = iVar18 * 0xa33 + iVar5 * -0xeea + uVar31;
    uVar38 = (ulong)uVar30;
    pbVar39[9] = *(byte *)(lVar50 + ((ulong)(iVar3 - uVar17 >> 0x12) & 0x3ff));
    bVar8 = *(byte *)(lVar50 + ((ulong)(uVar30 + uVar49 >> 0x12) & 0x3ff));
    uVar44 = (ulong)bVar8;
    pbVar39[4] = bVar8;
    iVar58 = iVar20 * 0xc4e + iVar21 * -0x37c1 + uVar31;
    pbVar39[8] = *(byte *)(lVar50 + ((ulong)(uVar49 - uVar30 >> 0x12) & 0x3ff));
    pbVar39[5] = *(byte *)(lVar50 + ((ulong)((uint)(iVar58 + iVar68) >> 0x12) & 0x3ff));
    pbVar39[7] = *(byte *)(lVar50 + ((ulong)((uint)(iVar68 - iVar58) >> 0x12) & 0x3ff));
    pbVar39[6] = *(byte *)(lVar50 + ((ulong)((uint)(iVar64 + (iVar34 - iVar4) * 0x2d41) >> 0x12) &
                                    0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x68);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d0) {
    return;
  }
  ___stack_chk_fail();
  uStack_9f0 = 0xffffeaf8;
  uStack_9e8 = (ulong)bVar6;
  uStack_9e0 = (ulong)uVar16;
  uStack_9d8 = (ulong)uVar17;
  uStack_9d0 = (ulong)uVar55;
  uStack_9c8 = 0xad5;
  uStack_9c0 = (ulong)uVar32;
  uStack_9b8 = 0x1e02;
  uStack_9b0 = (ulong)bVar7;
  uStack_9a8 = (ulong)uVar31;
  ppppuStack_9a0 = &ppppuStack_770;
  uStack_998 = 0x1081d8880;
  uStack_bcc = (int)pbVar39;
  lStack_bc8 = lVar54;
  lVar50 = 0;
  lStack_a00 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_bd8 = *(long *)(uVar38 + 0x1a8);
  lVar56 = *(long *)(uVar40 + 0x58);
  do {
    psVar42 = (short *)(lVar56 + lVar50 * 2);
    psVar57 = (short *)(uVar44 + lVar50 * 2);
    iVar58 = (int)psVar42[0x20] * (int)psVar57[0x20];
    uVar70 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lVar79 = uVar70 + (long)iVar58 * 0x28c6;
    lVar65 = uVar70 + (long)iVar58 * 0xa12;
    lVar59 = uVar70 + (long)iVar58 * -0x1c37;
    iVar64 = (int)psVar42[0x30] * (int)psVar57[0x30];
    lVar76 = ((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10] +
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30]) * 0x2362;
    iVar68 = (int)((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10]);
    lVar53 = lVar76 + (long)iVar68 * 0x8bd;
    lVar76 = lVar76 + (long)iVar64 * -0x3704;
    lVar47 = (long)iVar68 * 0x13a3 + (long)iVar64 * -0x2c1f;
    lVar48 = lVar53 + lVar79;
    lVar79 = lVar79 - lVar53;
    lVar53 = lVar76 + lVar65;
    lVar65 = lVar65 - lVar76;
    lVar76 = lVar47 + lVar59;
    lVar59 = lVar59 - lVar47;
    lVar73 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    sVar61 = psVar57[0x18];
    sVar9 = psVar42[0x18];
    lVar47 = (long)(int)sVar9 * (long)(int)sVar61;
    sVar10 = psVar57[0x28];
    sVar11 = psVar42[0x28];
    lVar63 = (long)(int)sVar11 * (long)(int)sVar10;
    lVar74 = (long)(int)psVar42[0x38] * (long)(int)psVar57[0x38];
    lVar60 = lVar73 + (long)(int)sVar11 * (long)(int)sVar10;
    lVar67 = (lVar73 + (long)(int)sVar9 * (long)(int)sVar61) * 0x2ab7;
    lVar78 = lVar60 * 0x2652;
    lVar51 = (lVar47 + (long)(int)sVar11 * (long)(int)sVar10) * -0x511 + lVar74 * -0x2000;
    iVar64 = (int)lVar47;
    lVar47 = lVar67 + (long)iVar64 * -0xd92 + lVar51;
    iVar68 = (int)lVar63;
    lVar51 = lVar78 + (long)iVar68 * -0x4bf7 + lVar51;
    lVar60 = lVar60 * 0x1814;
    lVar72 = lVar73 - (long)(int)sVar9 * (long)(int)sVar61;
    lVar77 = (lVar63 - (long)(int)sVar9 * (long)(int)sVar61) * 0x2cf8;
    lVar71 = lVar72 * 0xef2 + lVar74 * -0x2000;
    lVar63 = lVar60 + (long)(int)lVar73 * -0x21f5 + lVar71;
    lVar71 = lVar77 + (long)iVar64 * 0x1599 + lVar71;
    lVar73 = lVar67 + (long)(int)lVar73 * -0x2410 + lVar78 + lVar74 * 0x2000;
    lVar77 = lVar77 + (long)iVar68 * -0x361a + lVar60 + lVar74 * 0x2000;
    iVar64 = ((int)lVar72 - iVar68) + (int)lVar74;
    auStack_bc0[lVar50] = (uint)((ulong)(lVar73 + lVar48) >> 0xb);
    auStack_bc0[lVar50 + 0x68] = (uint)((ulong)(lVar48 - lVar73) >> 0xb);
    auStack_bc0[lVar50 + 8] = (uint)((ulong)(lVar47 + lVar53) >> 0xb);
    auStack_bc0[lVar50 + 0x60] = (uint)((ulong)(lVar53 - lVar47) >> 0xb);
    auStack_bc0[lVar50 + 0x10] = (uint)((ulong)(lVar51 + lVar76) >> 0xb);
    auStack_bc0[lVar50 + 0x58] = (uint)((ulong)(lVar76 - lVar51) >> 0xb);
    iVar58 = (int)(uVar70 + (long)iVar58 * -0x2d42 >> 0xb);
    auStack_bc0[lVar50 + 0x18] = iVar58 + iVar64 * 4;
    auStack_bc0[lVar50 + 0x50] = iVar58 + iVar64 * -4;
    auStack_bc0[lVar50 + 0x20] = (uint)((ulong)(lVar77 + lVar59) >> 0xb);
    auStack_bc0[lVar50 + 0x48] = (uint)((ulong)(lVar59 - lVar77) >> 0xb);
    auStack_bc0[lVar50 + 0x28] = (uint)((ulong)(lVar71 + lVar65) >> 0xb);
    auStack_bc0[lVar50 + 0x40] = (uint)((ulong)(lVar65 - lVar71) >> 0xb);
    auStack_bc0[lVar50 + 0x30] = (uint)((ulong)(lVar63 + lVar79) >> 0xb);
    auStack_bc0[lVar50 + 0x38] = (uint)((ulong)(lVar79 - lVar63) >> 0xb);
    lVar50 = lVar50 + 1;
  } while ((int)lVar50 != 8);
  lVar56 = 0;
  lVar50 = lStack_bd8 + 0x80;
  uVar70 = (ulong)pbVar39 & 0xffffffff;
  do {
    uVar30 = auStack_bc0[lVar56 + 1];
    iVar64 = auStack_bc0[lVar56] * 0x2000 + 0x20000;
    uVar55 = auStack_bc0[lVar56 + 4];
    uVar31 = auStack_bc0[lVar56 + 5];
    iVar68 = iVar64 + uVar55 * 0x28c6;
    iVar4 = iVar64 + uVar55 * 0xa12;
    iVar69 = iVar64 + uVar55 * -0x1c37;
    uVar49 = auStack_bc0[lVar56 + 2];
    uVar32 = auStack_bc0[lVar56 + 3];
    uVar17 = auStack_bc0[lVar56 + 6];
    uVar16 = auStack_bc0[lVar56 + 7];
    iVar64 = iVar64 + uVar55 * -0x2d42;
    iVar2 = (uVar17 + uVar49) * 0x2362;
    iVar75 = iVar2 + uVar49 * 0x8bd;
    iVar2 = iVar2 + uVar17 * -0x3704;
    iVar3 = uVar49 * 0x13a3 + uVar17 * -0x2c1f;
    iVar58 = iVar75 + iVar68;
    uVar17 = iVar68 - iVar75;
    iVar68 = iVar3 + iVar69;
    uVar33 = iVar69 - iVar3;
    uVar44 = (ulong)uVar33;
    uVar55 = iVar2 + iVar4;
    uVar40 = (ulong)uVar55;
    iVar75 = (uVar32 + uVar30) * 0x2ab7;
    iVar3 = (uVar31 + uVar30) * 0x2652;
    iVar69 = iVar75 + uVar30 * -0x2410 + iVar3 + uVar16 * 0x2000;
    iVar4 = iVar4 - iVar2;
    iVar2 = (uVar31 + uVar32) * -0x511 + uVar16 * -0x2000;
    iVar75 = iVar75 + uVar32 * -0xd92 + iVar2;
    iVar2 = iVar3 + uVar31 * -0x4bf7 + iVar2;
    uVar49 = uVar31 * -0x361a + uVar16 * 0x2000;
    iVar3 = (uVar30 - uVar32) * 0xef2 + uVar16 * -0x2000;
    uVar16 = ((uVar30 - uVar32) - uVar31) + uVar16;
    uVar66 = (ulong)uVar16;
    puVar1 = (undefined1 *)(*(long *)(lVar54 + lVar56) + uVar70);
    *puVar1 = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar69 + iVar58) >> 0x12) & 0x3ff));
    puVar1[0xd] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar58 - iVar69) >> 0x12) & 0x3ff));
    bVar6 = *(byte *)(lVar50 + ((ulong)(iVar75 + uVar55 >> 0x12) & 0x3ff));
    uVar38 = (ulong)bVar6;
    puVar1[1] = bVar6;
    puVar1[0xc] = *(undefined1 *)(lVar50 + ((ulong)(uVar55 - iVar75 >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar2 + iVar68) >> 0x12) & 0x3ff));
    iVar69 = (uVar31 + uVar30) * 0x1814;
    iVar75 = (uVar31 - uVar32) * 0x2cf8;
    puVar1[0xb] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar68 - iVar2) >> 0x12) & 0x3ff));
    iVar58 = uVar49 + iVar75 + iVar69;
    puVar1[3] = *(undefined1 *)(lVar50 + ((ulong)(iVar64 + uVar16 * 0x2000 >> 0x12) & 0x3ff));
    puVar1[10] = *(undefined1 *)(lVar50 + ((ulong)(iVar64 + uVar16 * -0x2000 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar50 + ((ulong)(iVar58 + uVar33 >> 0x12) & 0x3ff));
    iVar64 = iVar69 + uVar30 * -0x21f5 + iVar3;
    iVar3 = iVar75 + uVar32 * 0x1599 + iVar3;
    puVar1[9] = *(undefined1 *)(lVar50 + ((ulong)(uVar33 - iVar58 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar3 + iVar4) >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar4 - iVar3) >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar50 + ((ulong)(iVar64 + uVar17 >> 0x12) & 0x3ff));
    puVar1[7] = *(undefined1 *)(lVar50 + ((ulong)(uVar17 - iVar64 >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x70);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a00) {
    return;
  }
  ___stack_chk_fail();
  uStack_c40 = (ulong)uVar32;
  uStack_c38 = (ulong)uVar17;
  uStack_c30 = 0x1599;
  uStack_c28 = 0xffffc9e6;
  uStack_c20 = 0x2cf8;
  uStack_c18 = 0xffffb409;
  uStack_c10 = 0xfffff26e;
  uStack_c08 = 0xfffffaef;
  lStack_c00 = lVar54;
  uStack_bf8 = (ulong)uVar49;
  ppppuStack_bf0 = &ppppuStack_9a0;
  uStack_be8 = 0x1081d8d6c;
  uStack_e4c = (int)uVar70;
  uStack_e48 = uVar44;
  uStack_e38 = uVar40;
  lVar50 = 0;
  lStack_c50 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_e58 = *(long *)(uVar66 + 0x1a8);
  lStack_e40 = *(long *)(uVar38 + 0x58);
  do {
    psVar42 = (short *)(lStack_e40 + lVar50 * 2);
    psVar57 = (short *)(uVar40 + lVar50 * 2);
    lVar53 = (long)(int)psVar42[0x10] * (long)(int)psVar57[0x10];
    uVar66 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    iVar58 = (int)psVar42[0x30] * (int)psVar57[0x30];
    lVar76 = uVar66 + (long)iVar58 * -0xdfc;
    lVar47 = uVar66 + (long)iVar58 * 0x249d;
    lVar77 = lVar53 - (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20];
    lVar51 = lVar53 + (long)(int)psVar42[0x20] * (long)(int)psVar57[0x20];
    lVar56 = lVar77 * 0x176 + lVar51 * 0x2ace + lVar47;
    lVar54 = (long)(int)lVar53 * 0x2e13 + lVar51 * -0x2ace + lVar77 * 0x176 + lVar76;
    lVar48 = lVar47 + lVar77 * -0xcc7 + lVar51 * -0x1182;
    lVar53 = lVar51 * 0x1182 + (long)(int)lVar53 * -0x2e13 + lVar77 * -0xcc7 + lVar76;
    lVar76 = lVar77 * 0xb50 + lVar51 * 0x194c + lVar76;
    lVar47 = lVar47 + lVar51 * -0x194c + lVar77 * 0xb50;
    sVar61 = psVar57[8];
    sVar9 = psVar42[8];
    lVar71 = (long)(int)sVar9 * (long)(int)sVar61;
    sVar10 = psVar57[0x28];
    sVar11 = psVar42[0x28];
    iVar75 = (int)sVar11 * (int)sVar10;
    sVar12 = psVar57[0x38];
    sVar13 = psVar42[0x38];
    iVar64 = (int)sVar13 * (int)sVar12;
    lVar79 = lVar71 - (long)(int)sVar13 * (long)(int)sVar12;
    lVar63 = lVar79 * 0x2d02 + (long)iVar75 * 0x2731;
    iVar69 = (int)((long)(int)psVar42[0x18] * (long)(int)psVar57[0x18]);
    lVar51 = lVar63 + (long)iVar64 * 0x4ea3 + (long)iVar69 * 0x2b0a;
    iVar68 = (int)lVar71;
    lVar63 = (long)iVar68 * -0x2399 + (long)iVar69 * -0x1a9a + lVar63;
    lVar65 = (long)(int)psVar42[0x18] * (long)(int)psVar57[0x18] -
             (long)(int)sVar13 * (long)(int)sVar12;
    lVar73 = (lVar71 + (long)(int)sVar13 * (long)(int)sVar12) * 0x1268;
    lVar71 = (long)iVar68 * 0xf39 + (long)iVar69 * -0x1a9a + (long)iVar75 * -0x2731 + lVar73;
    lVar73 = (long)iVar69 * -0x2b0a + (long)iVar75 * 0x2731 + (long)iVar64 * -0x1bd1 + lVar73;
    auStack_e30[lVar50] = (uint)((ulong)(lVar51 + lVar56) >> 0xb);
    auStack_e30[lVar50 + 0x70] = (uint)((ulong)(lVar56 - lVar51) >> 0xb);
    lVar51 = (lVar65 + (long)(int)sVar9 * (long)(int)sVar61) * 0x1a9a;
    lVar56 = lVar51 + (long)iVar68 * 0x1071;
    auStack_e30[lVar50 + 8] = (uint)((ulong)(lVar56 + lVar76) >> 0xb);
    auStack_e30[lVar50 + 0x68] = (uint)((ulong)(lVar76 - lVar56) >> 0xb);
    lVar76 = uVar66 + (long)iVar58 * -0x2d42;
    lVar79 = lVar79 - (long)(int)sVar11 * (long)(int)sVar10;
    lVar56 = lVar76 + lVar77 * 0x16a0;
    auStack_e30[lVar50 + 0x10] = (uint)((ulong)(lVar79 * 0x2731 + lVar56) >> 0xb);
    auStack_e30[lVar50 + 0x60] = (uint)((ulong)(lVar56 + lVar79 * -0x2731) >> 0xb);
    auStack_e30[lVar50 + 0x18] = (uint)((ulong)(lVar71 + lVar54) >> 0xb);
    auStack_e30[lVar50 + 0x58] = (uint)((ulong)(lVar54 - lVar71) >> 0xb);
    lVar51 = lVar51 + lVar65 * -0x45a4;
    auStack_e30[lVar50 + 0x20] = (uint)((ulong)(lVar51 + lVar47) >> 0xb);
    auStack_e30[lVar50 + 0x50] = (uint)((ulong)(lVar47 - lVar51) >> 0xb);
    auStack_e30[lVar50 + 0x28] = (uint)((ulong)(lVar73 + lVar48) >> 0xb);
    auStack_e30[lVar50 + 0x48] = (uint)((ulong)(lVar48 - lVar73) >> 0xb);
    auStack_e30[lVar50 + 0x30] = (uint)((ulong)(lVar63 + lVar53) >> 0xb);
    auStack_e30[lVar50 + 0x40] = (uint)((ulong)(lVar53 - lVar63) >> 0xb);
    auStack_e30[lVar50 + 0x38] = (uint)((ulong)(lVar76 + lVar77 * 0x7ffffffd2c0) >> 0xb);
    lVar50 = lVar50 + 1;
  } while ((int)lVar50 != 8);
  lVar56 = 0;
  lVar50 = lStack_e58 + 0x80;
  uVar70 = uVar70 & 0xffffffff;
  do {
    uVar17 = auStack_e30[lVar56 + 1];
    uVar66 = (ulong)uVar17;
    puVar1 = (undefined1 *)(*(long *)(uVar44 + lVar56) + uVar70);
    iVar64 = auStack_e30[lVar56] * 0x2000 + 0x20000;
    uVar55 = auStack_e30[lVar56 + 6];
    uVar30 = auStack_e30[lVar56 + 7];
    iVar3 = iVar64 + uVar55 * -0xdfc;
    iVar18 = iVar64 + uVar55 * 0x249d;
    uVar49 = auStack_e30[lVar56 + 2];
    uVar31 = auStack_e30[lVar56 + 3];
    uVar16 = auStack_e30[lVar56 + 5];
    iVar64 = iVar64 + uVar55 * -0x2d42;
    iVar21 = uVar49 - auStack_e30[lVar56 + 4];
    iVar58 = auStack_e30[lVar56 + 4] + uVar49;
    iVar68 = iVar21 * 0x176 + iVar58 * 0x2ace + iVar18;
    iVar69 = iVar21 * -0xcc7 + iVar58 * -0x1182 + iVar18;
    iVar75 = uVar49 * 0x2e13 + iVar58 * -0x2ace + iVar21 * 0x176 + iVar3;
    iVar2 = iVar21 * 0xb50 + iVar58 * 0x194c + iVar3;
    iVar20 = iVar64 + iVar21 * 0x16a0;
    iVar3 = iVar58 * 0x1182 + uVar49 * -0x2e13 + iVar21 * -0xcc7 + iVar3;
    iVar4 = uVar16 * 0x2731 + (uVar17 - uVar30) * 0x2d02;
    uVar55 = iVar18 + iVar58 * -0x194c + iVar21 * 0xb50;
    uVar40 = (ulong)uVar55;
    iVar58 = iVar4 + uVar31 * 0x2b0a + uVar30 * 0x4ea3;
    iVar18 = (uVar17 - uVar30) - uVar16;
    uVar26 = ((uVar31 - uVar30) + uVar17) * 0x1a9a;
    *puVar1 = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar58 + iVar68) >> 0x12) & 0x3ff));
    uVar32 = uVar26 + uVar17 * 0x1071;
    puVar1[0xe] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar68 - iVar58) >> 0x12) & 0x3ff));
    puVar1[1] = *(undefined1 *)(lVar50 + ((ulong)(uVar32 + iVar2 >> 0x12) & 0x3ff));
    puVar1[0xd] = *(undefined1 *)(lVar50 + ((ulong)(iVar2 - uVar32 >> 0x12) & 0x3ff));
    puVar1[2] = *(undefined1 *)
                 (lVar50 + ((ulong)((uint)(iVar18 * 0x2731 + iVar20) >> 0x12) & 0x3ff));
    uVar27 = (uVar30 + uVar17) * 0x1268;
    uVar49 = uVar31 * -0x1a9a + uVar17 * 0xf39 + uVar16 * -0x2731 + uVar27;
    puVar1[0xc] = *(undefined1 *)
                   (lVar50 + ((ulong)((uint)(iVar20 + iVar18 * -0x2731) >> 0x12) & 0x3ff));
    uVar33 = uVar26 + (uVar31 - uVar30) * -0x45a4;
    uVar41 = (ulong)uVar33;
    puVar1[3] = *(undefined1 *)(lVar50 + ((ulong)(uVar49 + iVar75 >> 0x12) & 0x3ff));
    uVar16 = uVar16 * 0x2731 + uVar31 * -0x2b0a;
    uVar38 = (ulong)uVar16;
    puVar1[0xb] = *(undefined1 *)(lVar50 + ((ulong)(iVar75 - uVar49 >> 0x12) & 0x3ff));
    puVar1[4] = *(undefined1 *)(lVar50 + ((ulong)(uVar33 + uVar55 >> 0x12) & 0x3ff));
    iVar58 = uVar16 + uVar30 * -0x1bd1 + uVar27;
    puVar1[10] = *(undefined1 *)(lVar50 + ((ulong)(uVar55 - uVar33 >> 0x12) & 0x3ff));
    puVar1[5] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar58 + iVar69) >> 0x12) & 0x3ff));
    iVar4 = uVar31 * -0x1a9a + uVar17 * -0x2399 + iVar4;
    puVar1[9] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar69 - iVar58) >> 0x12) & 0x3ff));
    puVar1[6] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar4 + iVar3) >> 0x12) & 0x3ff));
    puVar1[8] = *(undefined1 *)(lVar50 + ((ulong)((uint)(iVar3 - iVar4) >> 0x12) & 0x3ff));
    puVar1[7] = *(undefined1 *)
                 (lVar50 + ((ulong)((uint)(iVar64 + iVar21 * 0xfffd2c0) >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x78);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c50) {
    return;
  }
  ___stack_chk_fail();
  uStack_ec0 = 0xf39;
  uStack_eb8 = 0x1268;
  uStack_eb0 = 0xffffdc67;
  uStack_ea8 = 0x1a9a;
  uStack_ea0 = uVar44;
  uStack_e98 = (ulong)uVar32;
  uStack_e90 = 0xffffba5c;
  uStack_e88 = (ulong)uVar26;
  uStack_e80 = (ulong)uVar27;
  uStack_e78 = (ulong)uVar49;
  ppppuStack_e70 = &ppppuStack_bf0;
  uStack_e68 = 0x1081d92d8;
  uStack_10f4 = (int)uVar70;
  uStack_10f0 = uVar66;
  uStack_10e0 = uVar41;
  lVar50 = 0;
  lStack_ed0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1100 = *(long *)(uVar38 + 0x1a8);
  lStack_10e8 = *(long *)(uVar40 + 0x58);
  do {
    psVar42 = (short *)(lStack_10e8 + lVar50 * 2);
    psVar57 = (short *)(uVar41 + lVar50 * 2);
    iVar64 = (int)psVar42[0x20] * (int)psVar57[0x20];
    uVar38 = (long)(int)*psVar57 * (long)(int)*psVar42 * 0x2000 | 0x400;
    lStack_10d8 = uVar38 + (long)iVar64 * 0x29cf;
    lVar59 = uVar38 + (long)iVar64 * -0x29cf;
    lVar60 = uVar38 + (long)iVar64 * 0x1151;
    lVar65 = uVar38 + (long)iVar64 * -0x1151;
    iVar58 = (int)psVar42[0x30] * (int)psVar57[0x30];
    lVar53 = (long)(int)psVar42[0x10] * (long)(int)psVar57[0x10] -
             (long)(int)psVar42[0x30] * (long)(int)psVar57[0x30];
    lVar76 = lVar53 * 0x8d4;
    lVar53 = lVar53 * 0x2c63;
    lVar54 = lVar53 + (long)iVar58 * 0x5203;
    iVar64 = (int)((long)(int)psVar42[0x10] * (long)(int)psVar57[0x10]);
    lVar48 = lVar76 + (long)iVar64 * 0x1ccd;
    lVar53 = lVar53 + (long)iVar64 * -0x133e;
    lVar76 = lVar76 + (long)iVar58 * -0x1050;
    lVar56 = lVar54 + lStack_10d8;
    lStack_10d8 = lStack_10d8 - lVar54;
    lVar54 = lVar48 + lVar60;
    lVar60 = lVar60 - lVar48;
    lVar48 = lVar53 + lVar65;
    lVar65 = lVar65 - lVar53;
    lVar53 = lVar76 + lVar59;
    lVar59 = lVar59 - lVar76;
    lVar47 = (long)(int)psVar42[8] * (long)(int)psVar57[8];
    sVar61 = psVar57[0x18];
    sVar9 = psVar42[0x18];
    lVar78 = (long)(int)sVar9 * (long)(int)sVar61;
    sVar10 = psVar57[0x28];
    sVar11 = psVar42[0x28];
    sVar12 = psVar57[0x38];
    sVar13 = psVar42[0x38];
    lVar67 = lVar47 + (long)(int)sVar11 * (long)(int)sVar10;
    lVar51 = (lVar47 + (long)(int)sVar9 * (long)(int)sVar61) * 0x2b4e;
    lVar81 = lVar67 * 0x27e9;
    lVar73 = (lVar47 + (long)(int)sVar13 * (long)(int)sVar12) * 0x22fc;
    lVar72 = (lVar47 - (long)(int)sVar13 * (long)(int)sVar12) * 0x1cb6;
    lVar67 = lVar67 * 0x1555;
    lVar63 = (lVar47 - (long)(int)sVar9 * (long)(int)sVar61) * 0xd23;
    lVar76 = lVar51 + (long)(int)lVar47 * -0x492a + lVar81 + lVar73;
    lVar47 = lVar63 + (long)(int)lVar47 * -0x3abe + lVar67 + lVar72;
    lVar71 = (lVar78 + (long)(int)sVar11 * (long)(int)sVar10) * 0x470;
    iVar68 = (int)sVar13;
    iVar58 = (int)sVar12;
    lVar77 = lVar78 + (long)iVar68 * (long)iVar58;
    lVar74 = lVar77 * -0x1555;
    lVar51 = lVar51 + (long)(int)lVar78 * 0x24d + lVar71 + lVar74;
    lVar80 = (long)(int)sVar11 * (long)(int)sVar10;
    lVar79 = (lVar80 - (long)(int)sVar9 * (long)(int)sVar61) * 0x2d09;
    lVar77 = lVar77 * -0x27e9;
    lVar63 = lVar63 + (long)(int)lVar78 * 0x3f1a + lVar79 + lVar77;
    lVar78 = (lVar80 + (long)iVar68 * (long)iVar58) * -0x2b4e;
    lVar71 = lVar71 + (long)(int)lVar80 * -0x2406 + lVar81 + lVar78;
    iVar64 = (int)((long)iVar68 * (long)iVar58);
    lVar73 = lVar74 + (long)iVar64 * 0x2218 + lVar73 + lVar78;
    lVar74 = ((long)iVar68 * (long)iVar58 - (long)(int)sVar11 * (long)(int)sVar10) * 0xd23;
    lVar77 = lVar77 + (long)iVar64 * 0x6485 + lVar72 + lVar74;
    lVar79 = lVar79 + (long)(int)lVar80 * -0x1886 + lVar67 + lVar74;
    aiStack_10d0[lVar50] = (int)((ulong)(lVar76 + lVar56) >> 0xb);
    aiStack_10d0[lVar50 + 0x78] = (int)((ulong)(lVar56 - lVar76) >> 0xb);
    aiStack_10d0[lVar50 + 8] = (int)((ulong)(lVar51 + lVar54) >> 0xb);
    aiStack_10d0[lVar50 + 0x70] = (int)((ulong)(lVar54 - lVar51) >> 0xb);
    aiStack_10d0[lVar50 + 0x10] = (int)((ulong)(lVar71 + lVar48) >> 0xb);
    aiStack_10d0[lVar50 + 0x68] = (int)((ulong)(lVar48 - lVar71) >> 0xb);
    aiStack_10d0[lVar50 + 0x18] = (int)((ulong)(lVar73 + lVar53) >> 0xb);
    aiStack_10d0[lVar50 + 0x60] = (int)((ulong)(lVar53 - lVar73) >> 0xb);
    aiStack_10d0[lVar50 + 0x20] = (int)((ulong)(lVar77 + lVar59) >> 0xb);
    aiStack_10d0[lVar50 + 0x58] = (int)((ulong)(lVar59 - lVar77) >> 0xb);
    aiStack_10d0[lVar50 + 0x28] = (int)((ulong)(lVar79 + lVar65) >> 0xb);
    aiStack_10d0[lVar50 + 0x50] = (int)((ulong)(lVar65 - lVar79) >> 0xb);
    aiStack_10d0[lVar50 + 0x30] = (int)((ulong)(lVar63 + lVar60) >> 0xb);
    aiStack_10d0[lVar50 + 0x48] = (int)((ulong)(lVar60 - lVar63) >> 0xb);
    aiStack_10d0[lVar50 + 0x38] = (int)((ulong)(lVar47 + lStack_10d8) >> 0xb);
    aiStack_10d0[lVar50 + 0x40] = (int)((ulong)(lStack_10d8 - lVar47) >> 0xb);
    lVar50 = lVar50 + 1;
  } while ((int)lVar50 != 8);
  lVar56 = 0;
  lVar50 = lStack_1100 + 0x80;
  do {
    iVar18 = aiStack_10d0[lVar56 + 1];
    iVar69 = aiStack_10d0[lVar56 + 4];
    iVar5 = aiStack_10d0[lVar56 + 5];
    iVar64 = aiStack_10d0[lVar56] * 0x2000 + 0x20000;
    iVar58 = iVar64 + iVar69 * 0x29cf;
    iVar35 = iVar64 + iVar69 * -0x29cf;
    iVar75 = aiStack_10d0[lVar56 + 2];
    iVar19 = aiStack_10d0[lVar56 + 3];
    iVar68 = iVar64 + iVar69 * 0x1151;
    iVar2 = aiStack_10d0[lVar56 + 6];
    iVar22 = aiStack_10d0[lVar56 + 7];
    iVar21 = (iVar75 - iVar2) * 0x8d4;
    iVar64 = iVar64 + iVar69 * -0x1151;
    iVar20 = (iVar75 - iVar2) * 0x2c63;
    iVar3 = iVar20 + iVar2 * 0x5203;
    iVar4 = iVar21 + iVar75 * 0x1ccd;
    iVar20 = iVar20 + iVar75 * -0x133e;
    iVar21 = iVar21 + iVar2 * -0x1050;
    iVar69 = iVar3 + iVar58;
    iVar58 = iVar58 - iVar3;
    iVar75 = iVar4 + iVar68;
    iVar68 = iVar68 - iVar4;
    iVar2 = iVar20 + iVar64;
    iVar64 = iVar64 - iVar20;
    iVar20 = (iVar19 + iVar18) * 0x2b4e;
    iVar23 = (iVar5 + iVar18) * 0x27e9;
    iVar24 = (iVar22 + iVar18) * 0x22fc;
    iVar3 = iVar21 + iVar35;
    iVar25 = (iVar18 - iVar22) * 0x1cb6;
    uVar30 = (iVar5 + iVar18) * 0x1555;
    iVar34 = (iVar18 - iVar19) * 0xd23;
    iVar35 = iVar35 - iVar21;
    iVar4 = iVar20 + iVar18 * -0x492a + iVar23 + iVar24;
    iVar18 = iVar34 + iVar18 * -0x3abe + uVar30 + iVar25;
    iVar21 = (iVar5 + iVar19) * 0x470;
    iVar28 = (iVar22 + iVar19) * -0x1555;
    iVar20 = iVar20 + iVar19 * 0x24d + iVar21 + iVar28;
    iVar29 = (iVar22 + iVar5) * -0x2b4e;
    uVar55 = iVar21 + iVar5 * -0x2406 + iVar23 + iVar29;
    iVar21 = iVar28 + iVar22 * 0x2218 + iVar24 + iVar29;
    pbVar39 = (byte *)(*(long *)(uVar66 + lVar56) + (uVar70 & 0xffffffff));
    bVar6 = *(byte *)(lVar50 + ((ulong)((uint)(iVar4 + iVar69) >> 0x12) & 0x3ff));
    *pbVar39 = bVar6;
    pbVar39[0xf] = *(byte *)(lVar50 + ((ulong)((uint)(iVar69 - iVar4) >> 0x12) & 0x3ff));
    pbVar39[1] = *(byte *)(lVar50 + ((ulong)((uint)(iVar20 + iVar75) >> 0x12) & 0x3ff));
    uVar31 = (iVar22 + iVar19) * -0x27e9;
    plVar45 = (long *)0x6485;
    uVar16 = uVar31 + iVar22 * 0x6485;
    iVar69 = (iVar22 - iVar5) * 0xd23;
    uVar49 = uVar16 + iVar25 + iVar69;
    uVar40 = (ulong)uVar49;
    pbVar39[0xe] = *(byte *)(lVar50 + ((ulong)((uint)(iVar75 - iVar20) >> 0x12) & 0x3ff));
    bVar7 = *(byte *)(lVar50 + ((ulong)(uVar55 + iVar2 >> 0x12) & 0x3ff));
    pbVar39[2] = bVar7;
    pbVar39[0xd] = *(byte *)(lVar50 + ((ulong)(iVar2 - uVar55 >> 0x12) & 0x3ff));
    pbVar39[3] = *(byte *)(lVar50 + ((ulong)((uint)(iVar21 + iVar3) >> 0x12) & 0x3ff));
    pbVar39[0xc] = *(byte *)(lVar50 + ((ulong)((uint)(iVar3 - iVar21) >> 0x12) & 0x3ff));
    pbVar39[4] = *(byte *)(lVar50 + ((ulong)(uVar49 + iVar35 >> 0x12) & 0x3ff));
    uVar17 = iVar34 + iVar19 * 0x3f1a;
    uVar38 = (ulong)uVar17;
    iVar75 = (iVar5 - iVar19) * 0x2d09;
    lVar54 = 0xffffe77a;
    iVar69 = iVar75 + iVar5 * -0x1886 + uVar30 + iVar69;
    pbVar39[0xb] = *(byte *)(lVar50 + ((ulong)(iVar35 - uVar49 >> 0x12) & 0x3ff));
    pbVar39[5] = *(byte *)(lVar50 + ((ulong)((uint)(iVar69 + iVar64) >> 0x12) & 0x3ff));
    iVar75 = uVar17 + iVar75 + uVar31;
    pbVar39[10] = *(byte *)(lVar50 + ((ulong)((uint)(iVar64 - iVar69) >> 0x12) & 0x3ff));
    pbVar39[6] = *(byte *)(lVar50 + ((ulong)((uint)(iVar75 + iVar68) >> 0x12) & 0x3ff));
    pbVar39[9] = *(byte *)(lVar50 + ((ulong)((uint)(iVar68 - iVar75) >> 0x12) & 0x3ff));
    pbVar39[7] = *(byte *)(lVar50 + ((ulong)((uint)(iVar18 + iVar58) >> 0x12) & 0x3ff));
    pbVar39[8] = *(byte *)(lVar50 + ((ulong)((uint)(iVar58 - iVar18) >> 0x12) & 0x3ff));
    lVar56 = lVar56 + 8;
  } while (lVar56 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ed0) {
    return;
  }
  uVar70 = uStack_10f0;
  ___stack_chk_fail();
  uStack_1150 = (ulong)uVar55;
  uStack_1148 = (ulong)bVar6;
  uStack_1140 = (ulong)uVar16;
  uStack_1138 = (ulong)uVar31;
  uStack_1130 = uVar40;
  uStack_1128 = (ulong)bVar7;
  uStack_1120 = (ulong)uVar30;
  uStack_1118 = 0xd23;
  ppppuStack_1110 = &ppppuStack_e70;
  pcStack_1108 = FUN_1081d98e8;
  lStack_1158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar50 = *(long *)(uVar38 + 0x1a8);
  psVar42 = (short *)(lVar54 + 0x70);
  puVar52 = auStack_11d8;
  uVar55 = 9;
  psVar57 = *(short **)(pbVar39 + 0x58);
  do {
    if (uVar55 != 5) {
      sVar61 = psVar42[-0x20];
      if (psVar42[-0x30] == 0 && psVar42[-0x28] == 0) {
        if (sVar61 != 0) {
LAB_1081d9990:
          iVar64 = 0;
          goto LAB_1081d99a0;
        }
        if (((psVar42[-0x10] != 0) || (psVar42[-8] != 0)) || (*psVar42 != 0)) {
          sVar61 = 0;
          goto LAB_1081d9990;
        }
        uVar49 = (int)psVar42[-0x38] * (int)*psVar57 * 4;
        *puVar52 = uVar49;
        puVar52[8] = uVar49;
        puVar52[0x10] = uVar49;
        lVar56 = 0x60;
      }
      else {
        iVar64 = psVar42[-0x28] * 0x3b21;
LAB_1081d99a0:
        lVar56 = (long)iVar64 * (long)(int)psVar57[0x10] +
                 (long)((int)psVar42[-8] * (int)psVar57[0x30]) * -0x187e;
        uVar40 = (long)(int)psVar42[-0x38] * (long)(int)*psVar57 * 0x4000 - lVar56;
        iVar64 = (int)psVar57[8] * (int)psVar42[-0x30];
        lVar48 = (long)((int)psVar57[0x38] * (int)*psVar42) * -0x6c2 +
                 (long)((int)psVar57[0x28] * (int)psVar42[-0x10]) * 0x2e75 +
                 (long)((int)psVar57[0x18] * (int)sVar61) * -0x4587 + (long)iVar64 * 0x21f9;
        lVar54 = (long)((int)psVar57[0x38] * (int)*psVar42) * -0x1050 +
                 (long)((int)psVar57[0x28] * (int)psVar42[-0x10]) * -0x133e +
                 (long)((int)psVar57[0x18] * (int)sVar61) * 0x1ccd + (long)iVar64 * 0x5203;
        lVar56 = lVar56 + (long)(int)psVar42[-0x38] * (long)(int)*psVar57 * 0x4000 + 0x800;
        *puVar52 = (uint)((ulong)(lVar54 + lVar56) >> 0xc);
        puVar52[0x18] = (uint)((ulong)(lVar56 - lVar54) >> 0xc);
        puVar52[8] = (uint)(lVar48 + uVar40 + 0x800 >> 0xc);
        uVar49 = (uint)((uVar40 + 0x800) - lVar48 >> 0xc);
        lVar56 = 0x40;
      }
      *(uint *)((long)puVar52 + lVar56) = uVar49;
    }
    psVar57 = psVar57 + 1;
    puVar52 = puVar52 + 1;
    uVar55 = uVar55 - 1;
    psVar42 = psVar42 + 1;
  } while (1 < uVar55);
  lVar56 = 0;
  lVar50 = lVar50 + 0x80;
  lVar54 = 0x1ccd;
  lVar48 = 0x5203;
  psVar42 = (short *)0x3b21;
  uVar70 = uVar70 & 0xffffffff;
  do {
    plVar46 = plVar45 + 1;
    piVar62 = (int *)((long)auStack_11d8 + lVar56);
    pbVar39 = (byte *)(*plVar45 + uVar70);
    iVar64 = *(int *)((long)auStack_11d8 + lVar56 + 4);
    iVar58 = *(int *)((long)auStack_11d8 + lVar56 + 8);
    iVar68 = *(int *)((long)auStack_11d8 + lVar56 + 0xc);
    if (iVar64 == 0 && iVar58 == 0) {
      if (iVar68 != 0) {
LAB_1081d9b14:
        iVar58 = 0;
        goto LAB_1081d9b20;
      }
      if (((*(int *)((long)auStack_11d8 + lVar56 + 0x14) != 0) ||
          (*(int *)((long)auStack_11d8 + lVar56 + 0x18) != 0)) ||
         (*(int *)((long)auStack_11d8 + lVar56 + 0x1c) != 0)) {
        iVar68 = 0;
        goto LAB_1081d9b14;
      }
      bVar6 = *(byte *)(lVar50 + ((ulong)(*piVar62 + 0x10U >> 5) & 0x3ff));
      *pbVar39 = bVar6;
      pbVar39[1] = bVar6;
      pbVar39[2] = bVar6;
      lVar53 = 3;
      uVar55 = 0;
      uVar66 = 0;
    }
    else {
      iVar58 = iVar58 * 0x3b21;
LAB_1081d9b20:
      uVar55 = *(uint *)((long)auStack_11d8 + lVar56);
      iVar69 = *(int *)((long)auStack_11d8 + lVar56 + 0x14);
      iVar58 = iVar58 + *(int *)((long)auStack_11d8 + lVar56 + 0x18) * -0x187e;
      uVar49 = uVar55 * 0x4000 - iVar58;
      uVar40 = (ulong)uVar49;
      iVar75 = *(int *)((long)auStack_11d8 + lVar56 + 0x1c);
      iVar2 = iVar64 * 0x5203 + iVar75 * -0x1050 + iVar69 * -0x133e + iVar68 * 0x1ccd;
      iVar58 = iVar58 + uVar55 * 0x4000 + 0x40000;
      bVar6 = *(byte *)(lVar50 + ((ulong)((uint)(iVar2 + iVar58) >> 0x13) & 0x3ff));
      uVar66 = (ulong)bVar6;
      iVar68 = iVar64 * 0x21f9 + iVar75 * -0x6c2 + iVar69 * 0x2e75 + iVar68 * -0x4587;
      *pbVar39 = bVar6;
      pbVar39[3] = *(byte *)(lVar50 + ((ulong)((uint)(iVar58 - iVar2) >> 0x13) & 0x3ff));
      iVar64 = uVar49 + 0x40000;
      bVar6 = *(byte *)(lVar50 + ((ulong)((uint)(iVar68 + iVar64) >> 0x13) & 0x3ff));
      piVar62 = (int *)(ulong)bVar6;
      pbVar39[1] = bVar6;
      bVar6 = *(byte *)(lVar50 + ((ulong)((uint)(iVar64 - iVar68) >> 0x13) & 0x3ff));
      lVar53 = 2;
    }
    pbVar39[lVar53] = bVar6;
    lVar56 = lVar56 + 0x20;
    plVar45 = plVar46;
  } while (lVar56 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1158) {
    return;
  }
  ___stack_chk_fail();
  uStack_1210 = uVar40;
  uStack_1208 = (ulong)uVar55;
  uStack_1200 = uVar66;
  piStack_11f8 = piVar62;
  ppppuStack_11f0 = &ppppuStack_1110;
  pcStack_11e8 = FUN_1081d9c18;
  lStack_1218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar56 = *(long *)(lVar54 + 0x1a8);
  uVar55 = 9;
  psVar57 = *(short **)(lVar48 + 0x58);
  lVar50 = 0x20;
  do {
    bVar37 = uVar55 != 3;
    uVar55 = uVar55 - 1;
    if ((bVar37) && ((uVar55 & 0x7ffffffd) != 4)) {
      sVar61 = psVar42[0x28];
      if (psVar42[8] == 0 && psVar42[0x18] == 0) {
        if (sVar61 != 0) {
LAB_1081d9cb0:
          iVar64 = 0;
          goto LAB_1081d9cc0;
        }
        if (psVar42[0x38] != 0) {
          sVar61 = 0;
          goto LAB_1081d9cb0;
        }
        iVar64 = (int)*psVar42 * (int)*psVar57 * 4;
        *(int *)((long)aiStack_1278 + lVar50) = iVar64;
      }
      else {
        iVar64 = psVar42[0x18] * -0x28ba;
LAB_1081d9cc0:
        lVar54 = (long)((int)psVar42[0x38] * (int)psVar57[0x38]) * -0x1712 +
                 (long)((int)sVar61 * (int)psVar57[0x28]) * 0x1b37 +
                 (long)iVar64 * (long)(int)psVar57[0x18] +
                 (long)((int)psVar42[8] * (int)psVar57[8]) * 0x73fc;
        uVar66 = (long)(int)*psVar42 * (long)(int)*psVar57 * 0x8000 | 0x1000;
        *(int *)((long)aiStack_1278 + lVar50) = (int)(lVar54 + uVar66 >> 0xd);
        iVar64 = (int)(uVar66 - lVar54 >> 0xd);
      }
      *(int *)((long)auStack_1258 + lVar50) = iVar64;
    }
    psVar42 = psVar42 + 1;
    psVar57 = psVar57 + 1;
    lVar50 = lVar50 + 4;
  } while (1 < uVar55);
  lVar50 = 0;
  lVar56 = lVar56 + 0x80;
  puVar52 = auStack_1258;
  uVar66 = uVar70 & 0xffffffff;
  bVar37 = true;
  do {
    pbVar39 = (byte *)(plVar46[lVar50] + uVar66);
    uVar55 = puVar52[3];
    uVar38 = (ulong)uVar55;
    uVar49 = puVar52[5];
    if (puVar52[1] == 0 && uVar55 == 0) {
      if (uVar49 != 0) {
LAB_1081d9da0:
        iVar64 = 0;
        goto LAB_1081d9dac;
      }
      if (puVar52[7] != 0) {
        uVar49 = 0;
        goto LAB_1081d9da0;
      }
      bVar6 = *(byte *)(lVar56 + ((ulong)(*puVar52 + 0x10 >> 5) & 0x3ff));
      *pbVar39 = bVar6;
      uVar55 = 0;
    }
    else {
      iVar64 = uVar55 * -0x28ba;
LAB_1081d9dac:
      uVar55 = *puVar52;
      uVar70 = (ulong)puVar52[7];
      iVar58 = iVar64 + puVar52[1] * 0x73fc + puVar52[7] * -0x1712 + uVar49 * 0x1b37;
      iVar64 = uVar55 * 0x8000 + 0x80000;
      bVar6 = *(byte *)(lVar56 + ((ulong)((uint)(iVar58 + iVar64) >> 0x14) & 0x3ff));
      uVar38 = (ulong)bVar6;
      *pbVar39 = bVar6;
      bVar6 = *(byte *)(lVar56 + ((ulong)((uint)(iVar64 - iVar58) >> 0x14) & 0x3ff));
    }
    uVar40 = (ulong)bVar6;
    puVar43 = (ushort *)(ulong)uVar55;
    pbVar39[1] = bVar6;
    puVar52 = puVar52 + 8;
    lVar50 = 1;
    bVar36 = !bVar37;
    bVar37 = false;
    if (bVar36) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1218) {
        return;
      }
      ___stack_chk_fail();
      *(undefined1 *)(*plVar46 + (uVar70 & 0xffffffff)) =
           *(undefined1 *)
            (*(long *)(uVar40 + 0x1a8) +
             ((ulong)((uint)**(ushort **)(uVar38 + 0x58) * (uint)*puVar43 + 4 >> 3) & 0x3ff) + 0x80)
      ;
      return;
    }
  } while( true );
}



/* Entry: 1081d98e8; end: 1081d9c17;  */

void FUN_1081d98e8(long param_1,long param_2,long param_3,long *param_4,ulong param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  short *psVar10;
  ushort *puVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  uint uVar20;
  short *psVar21;
  short sVar22;
  int iVar23;
  int *piVar24;
  long lVar25;
  ulong uVar26;
  ulong unaff_x22;
  long lVar27;
  int aiStack_178 [8];
  uint auStack_158 [16];
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  int *piStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  uint auStack_d8 [32];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *(long *)(param_1 + 0x1a8);
  psVar10 = (short *)(param_3 + 0x70);
  puVar19 = auStack_d8;
  uVar20 = 9;
  psVar21 = *(short **)(param_2 + 0x58);
  do {
    if (uVar20 != 5) {
      sVar22 = psVar10[-0x20];
      if (psVar10[-0x30] == 0 && psVar10[-0x28] == 0) {
        if (sVar22 != 0) {
LAB_1081d9990:
          iVar13 = 0;
          goto LAB_1081d99a0;
        }
        if (((psVar10[-0x10] != 0) || (psVar10[-8] != 0)) || (*psVar10 != 0)) {
          sVar22 = 0;
          goto LAB_1081d9990;
        }
        uVar14 = (int)psVar10[-0x38] * (int)*psVar21 * 4;
        *puVar19 = uVar14;
        puVar19[8] = uVar14;
        puVar19[0x10] = uVar14;
        lVar25 = 0x60;
      }
      else {
        iVar13 = psVar10[-0x28] * 0x3b21;
LAB_1081d99a0:
        lVar25 = (long)iVar13 * (long)(int)psVar21[0x10] +
                 (long)((int)psVar10[-8] * (int)psVar21[0x30]) * -0x187e;
        unaff_x22 = (long)(int)psVar10[-0x38] * (long)(int)*psVar21 * 0x4000 - lVar25;
        iVar13 = (int)psVar21[8] * (int)psVar10[-0x30];
        lVar27 = (long)((int)psVar21[0x38] * (int)*psVar10) * -0x6c2 +
                 (long)((int)psVar21[0x28] * (int)psVar10[-0x10]) * 0x2e75 +
                 (long)((int)psVar21[0x18] * (int)sVar22) * -0x4587 + (long)iVar13 * 0x21f9;
        lVar16 = (long)((int)psVar21[0x38] * (int)*psVar10) * -0x1050 +
                 (long)((int)psVar21[0x28] * (int)psVar10[-0x10]) * -0x133e +
                 (long)((int)psVar21[0x18] * (int)sVar22) * 0x1ccd + (long)iVar13 * 0x5203;
        lVar25 = lVar25 + (long)(int)psVar10[-0x38] * (long)(int)*psVar21 * 0x4000 + 0x800;
        *puVar19 = (uint)((ulong)(lVar16 + lVar25) >> 0xc);
        puVar19[0x18] = (uint)((ulong)(lVar25 - lVar16) >> 0xc);
        puVar19[8] = (uint)(lVar27 + unaff_x22 + 0x800 >> 0xc);
        uVar14 = (uint)((unaff_x22 + 0x800) - lVar27 >> 0xc);
        lVar25 = 0x40;
      }
      *(uint *)((long)puVar19 + lVar25) = uVar14;
    }
    psVar21 = psVar21 + 1;
    puVar19 = puVar19 + 1;
    uVar20 = uVar20 - 1;
    psVar10 = psVar10 + 1;
  } while (1 < uVar20);
  lVar25 = 0;
  lVar18 = lVar18 + 0x80;
  lVar16 = 0x1ccd;
  lVar27 = 0x5203;
  psVar10 = (short *)0x3b21;
  param_5 = param_5 & 0xffffffff;
  do {
    plVar12 = param_4 + 1;
    piVar24 = (int *)((long)auStack_d8 + lVar25);
    pbVar1 = (byte *)(*param_4 + param_5);
    iVar13 = *(int *)((long)auStack_d8 + lVar25 + 4);
    iVar23 = *(int *)((long)auStack_d8 + lVar25 + 8);
    iVar15 = *(int *)((long)auStack_d8 + lVar25 + 0xc);
    if (iVar13 == 0 && iVar23 == 0) {
      if (iVar15 != 0) {
LAB_1081d9b14:
        iVar23 = 0;
        goto LAB_1081d9b20;
      }
      if (((*(int *)((long)auStack_d8 + lVar25 + 0x14) != 0) ||
          (*(int *)((long)auStack_d8 + lVar25 + 0x18) != 0)) ||
         (*(int *)((long)auStack_d8 + lVar25 + 0x1c) != 0)) {
        iVar15 = 0;
        goto LAB_1081d9b14;
      }
      bVar4 = *(byte *)(lVar18 + ((ulong)(*piVar24 + 0x10U >> 5) & 0x3ff));
      *pbVar1 = bVar4;
      pbVar1[1] = bVar4;
      pbVar1[2] = bVar4;
      lVar17 = 3;
      uVar20 = 0;
      uVar26 = 0;
    }
    else {
      iVar23 = iVar23 * 0x3b21;
LAB_1081d9b20:
      uVar20 = *(uint *)((long)auStack_d8 + lVar25);
      iVar2 = *(int *)((long)auStack_d8 + lVar25 + 0x14);
      iVar23 = iVar23 + *(int *)((long)auStack_d8 + lVar25 + 0x18) * -0x187e;
      uVar14 = uVar20 * 0x4000 - iVar23;
      unaff_x22 = (ulong)uVar14;
      iVar3 = *(int *)((long)auStack_d8 + lVar25 + 0x1c);
      iVar5 = iVar13 * 0x5203 + iVar3 * -0x1050 + iVar2 * -0x133e + iVar15 * 0x1ccd;
      iVar23 = iVar23 + uVar20 * 0x4000 + 0x40000;
      bVar4 = *(byte *)(lVar18 + ((ulong)((uint)(iVar5 + iVar23) >> 0x13) & 0x3ff));
      uVar26 = (ulong)bVar4;
      iVar15 = iVar13 * 0x21f9 + iVar3 * -0x6c2 + iVar2 * 0x2e75 + iVar15 * -0x4587;
      *pbVar1 = bVar4;
      pbVar1[3] = *(byte *)(lVar18 + ((ulong)((uint)(iVar23 - iVar5) >> 0x13) & 0x3ff));
      iVar13 = uVar14 + 0x40000;
      bVar4 = *(byte *)(lVar18 + ((ulong)((uint)(iVar15 + iVar13) >> 0x13) & 0x3ff));
      piVar24 = (int *)(ulong)bVar4;
      pbVar1[1] = bVar4;
      bVar4 = *(byte *)(lVar18 + ((ulong)((uint)(iVar13 - iVar15) >> 0x13) & 0x3ff));
      lVar17 = 2;
    }
    pbVar1[lVar17] = bVar4;
    lVar25 = lVar25 + 0x20;
    param_4 = plVar12;
  } while (lVar25 != 0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uStack_110 = unaff_x22;
  uStack_108 = (ulong)uVar20;
  uStack_100 = uVar26;
  piStack_f8 = piVar24;
  puStack_f0 = &stack0xfffffffffffffff0;
  pcStack_e8 = FUN_1081d9c18;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)(lVar16 + 0x1a8);
  uVar20 = 9;
  psVar21 = *(short **)(lVar27 + 0x58);
  lVar18 = 0x20;
  do {
    bVar7 = uVar20 != 3;
    uVar20 = uVar20 - 1;
    if ((bVar7) && ((uVar20 & 0x7ffffffd) != 4)) {
      sVar22 = psVar10[0x28];
      if (psVar10[8] == 0 && psVar10[0x18] == 0) {
        if (sVar22 != 0) {
LAB_1081d9cb0:
          iVar13 = 0;
          goto LAB_1081d9cc0;
        }
        if (psVar10[0x38] != 0) {
          sVar22 = 0;
          goto LAB_1081d9cb0;
        }
        iVar13 = (int)*psVar10 * (int)*psVar21 * 4;
        *(int *)((long)aiStack_178 + lVar18) = iVar13;
      }
      else {
        iVar13 = psVar10[0x18] * -0x28ba;
LAB_1081d9cc0:
        lVar16 = (long)((int)psVar10[0x38] * (int)psVar21[0x38]) * -0x1712 +
                 (long)((int)sVar22 * (int)psVar21[0x28]) * 0x1b37 +
                 (long)iVar13 * (long)(int)psVar21[0x18] +
                 (long)((int)psVar10[8] * (int)psVar21[8]) * 0x73fc;
        uVar26 = (long)(int)*psVar10 * (long)(int)*psVar21 * 0x8000 | 0x1000;
        *(int *)((long)aiStack_178 + lVar18) = (int)(lVar16 + uVar26 >> 0xd);
        iVar13 = (int)(uVar26 - lVar16 >> 0xd);
      }
      *(int *)((long)auStack_158 + lVar18) = iVar13;
    }
    psVar10 = psVar10 + 1;
    psVar21 = psVar21 + 1;
    lVar18 = lVar18 + 4;
  } while (1 < uVar20);
  lVar18 = 0;
  lVar25 = lVar25 + 0x80;
  puVar19 = auStack_158;
  uVar26 = param_5 & 0xffffffff;
  bVar7 = true;
  do {
    pbVar1 = (byte *)(plVar12[lVar18] + uVar26);
    uVar20 = puVar19[3];
    uVar9 = (ulong)uVar20;
    uVar14 = puVar19[5];
    if (puVar19[1] == 0 && uVar20 == 0) {
      if (uVar14 != 0) {
LAB_1081d9da0:
        iVar13 = 0;
        goto LAB_1081d9dac;
      }
      if (puVar19[7] != 0) {
        uVar14 = 0;
        goto LAB_1081d9da0;
      }
      bVar4 = *(byte *)(lVar25 + ((ulong)(*puVar19 + 0x10 >> 5) & 0x3ff));
      *pbVar1 = bVar4;
      uVar20 = 0;
    }
    else {
      iVar13 = uVar20 * -0x28ba;
LAB_1081d9dac:
      uVar20 = *puVar19;
      param_5 = (ulong)puVar19[7];
      iVar23 = iVar13 + puVar19[1] * 0x73fc + puVar19[7] * -0x1712 + uVar14 * 0x1b37;
      iVar13 = uVar20 * 0x8000 + 0x80000;
      bVar4 = *(byte *)(lVar25 + ((ulong)((uint)(iVar23 + iVar13) >> 0x14) & 0x3ff));
      uVar9 = (ulong)bVar4;
      *pbVar1 = bVar4;
      bVar4 = *(byte *)(lVar25 + ((ulong)((uint)(iVar13 - iVar23) >> 0x14) & 0x3ff));
    }
    uVar8 = (ulong)bVar4;
    puVar11 = (ushort *)(ulong)uVar20;
    pbVar1[1] = bVar4;
    puVar19 = puVar19 + 8;
    lVar18 = 1;
    bVar6 = !bVar7;
    bVar7 = false;
    if (bVar6) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
        return;
      }
      ___stack_chk_fail();
      *(undefined1 *)(*plVar12 + (param_5 & 0xffffffff)) =
           *(undefined1 *)
            (*(long *)(uVar8 + 0x1a8) +
             ((ulong)((uint)**(ushort **)(uVar9 + 0x58) * (uint)*puVar11 + 4 >> 3) & 0x3ff) + 0x80);
      return;
    }
  } while( true );
}



/* Entry: 1081d9c18; end: 1081d9e43;  */

void FUN_1081d9c18(long param_1,long param_2,short *param_3,long *param_4,ulong param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  short sVar12;
  ulong uVar13;
  long lVar14;
  short *psVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  int aiStack_98 [8];
  uint auStack_78 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *(long *)(param_1 + 0x1a8);
  uVar18 = 9;
  psVar15 = *(short **)(param_2 + 0x58);
  lVar17 = 0x20;
  do {
    bVar5 = uVar18 != 3;
    uVar18 = uVar18 - 1;
    if ((bVar5) && ((uVar18 & 0x7ffffffd) != 4)) {
      sVar12 = param_3[0x28];
      if (param_3[8] == 0 && param_3[0x18] == 0) {
        if (sVar12 != 0) {
LAB_1081d9cb0:
          iVar8 = 0;
          goto LAB_1081d9cc0;
        }
        if (param_3[0x38] != 0) {
          sVar12 = 0;
          goto LAB_1081d9cb0;
        }
        iVar8 = (int)*param_3 * (int)*psVar15 * 4;
        *(int *)((long)aiStack_98 + lVar17) = iVar8;
      }
      else {
        iVar8 = param_3[0x18] * -0x28ba;
LAB_1081d9cc0:
        lVar11 = (long)((int)param_3[0x38] * (int)psVar15[0x38]) * -0x1712 +
                 (long)((int)sVar12 * (int)psVar15[0x28]) * 0x1b37 +
                 (long)iVar8 * (long)(int)psVar15[0x18] +
                 (long)((int)param_3[8] * (int)psVar15[8]) * 0x73fc;
        uVar13 = (long)(int)*param_3 * (long)(int)*psVar15 * 0x8000 | 0x1000;
        *(int *)((long)aiStack_98 + lVar17) = (int)(lVar11 + uVar13 >> 0xd);
        iVar8 = (int)(uVar13 - lVar11 >> 0xd);
      }
      *(int *)((long)auStack_78 + lVar17) = iVar8;
    }
    param_3 = param_3 + 1;
    psVar15 = psVar15 + 1;
    lVar17 = lVar17 + 4;
  } while (1 < uVar18);
  lVar17 = 0;
  lVar14 = lVar14 + 0x80;
  puVar16 = auStack_78;
  uVar13 = param_5 & 0xffffffff;
  bVar5 = true;
  do {
    pbVar1 = (byte *)(param_4[lVar17] + uVar13);
    uVar18 = puVar16[3];
    uVar9 = (ulong)uVar18;
    uVar6 = puVar16[5];
    if (puVar16[1] == 0 && uVar18 == 0) {
      if (uVar6 != 0) {
LAB_1081d9da0:
        iVar8 = 0;
        goto LAB_1081d9dac;
      }
      if (puVar16[7] != 0) {
        uVar6 = 0;
        goto LAB_1081d9da0;
      }
      bVar2 = *(byte *)(lVar14 + ((ulong)(*puVar16 + 0x10 >> 5) & 0x3ff));
      *pbVar1 = bVar2;
      uVar18 = 0;
    }
    else {
      iVar8 = uVar18 * -0x28ba;
LAB_1081d9dac:
      uVar18 = *puVar16;
      param_5 = (ulong)puVar16[7];
      iVar3 = iVar8 + puVar16[1] * 0x73fc + puVar16[7] * -0x1712 + uVar6 * 0x1b37;
      iVar8 = uVar18 * 0x8000 + 0x80000;
      bVar2 = *(byte *)(lVar14 + ((ulong)((uint)(iVar3 + iVar8) >> 0x14) & 0x3ff));
      uVar9 = (ulong)bVar2;
      *pbVar1 = bVar2;
      bVar2 = *(byte *)(lVar14 + ((ulong)((uint)(iVar8 - iVar3) >> 0x14) & 0x3ff));
    }
    uVar7 = (ulong)bVar2;
    puVar10 = (ushort *)(ulong)uVar18;
    pbVar1[1] = bVar2;
    puVar16 = puVar16 + 8;
    lVar17 = 1;
    bVar4 = !bVar5;
    bVar5 = false;
    if (bVar4) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      ___stack_chk_fail();
      *(undefined1 *)(*param_4 + (param_5 & 0xffffffff)) =
           *(undefined1 *)
            (*(long *)(uVar7 + 0x1a8) +
             ((ulong)((uint)**(ushort **)(uVar9 + 0x58) * (uint)*puVar10 + 4 >> 3) & 0x3ff) + 0x80);
      return;
    }
  } while( true );
}



/* Entry: 1081d9e44; end: 1081d9e73;  */

void FUN_1081d9e44(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  *(undefined1 *)(*param_4 + (ulong)param_5) =
       *(undefined1 *)
        (*(long *)(param_1 + 0x1a8) +
         ((ulong)((uint)**(ushort **)(param_2 + 0x58) * (uint)*param_3 + 4 >> 3) & 0x3ff) + 0x80);
  return;
}



/* Entry: 1081d9e74; end: 1081d9fc3;  */

void FUN_1081d9e74(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  param_1[1] = 0;
  puVar1 = (undefined8 *)0xa8;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined8 *)(*param_1 + 0x28) = 0x36;
    (**(code **)*param_1)(param_1);
  }
  *puVar1 = FUN_1081d9fc4;
  puVar1[1] = FUN_1081da1a4;
  puVar1[2] = FUN_1081da2d0;
  puVar1[3] = 0x1081da3f0;
  puVar1[4] = 0x1081da4f4;
  puVar1[5] = 0x1081da594;
  puVar1[6] = FUN_1081da634;
  puVar1[7] = FUN_1081da890;
  puVar1[8] = 0x1081daa6c;
  puVar1[9] = 0x1081dac4c;
  puVar1[10] = FUN_1081dad84;
  puVar1[0xc] = 1000000000;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0xa8;
  param_1[1] = (long)puVar1;
  puVar2 = &UNK_10f47f434;
  _getenv();
  if ((puVar2 != (undefined *)0x0) && (_sscanf(), 0 < (int)puVar2)) {
    puVar1[0xb] = 0;
  }
  return;
}



/* Entry: 1081d9fc4; end: 1081da1a3;  */

long FUN_1081d9fc4(long *param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar8 = param_1[1];
  if (1000000000 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x700000036;
    (**(code **)*param_1)(param_1);
  }
  uVar7 = param_3 + 0x1f & 0xffffffffffffffe0;
  uVar1 = uVar7 + 0x37;
  if (1000000000 < uVar1) {
    *(undefined8 *)(*param_1 + 0x28) = 0x100000036;
    (**(code **)*param_1)(param_1);
  }
  if (1 < param_2) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0xe;
    *(uint *)(lVar4 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar5 = *(undefined8 **)(lVar8 + 0x68 + (long)(int)param_2 * 8);
  if (puVar5 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar3 = puVar5;
      uVar6 = puVar3[2];
      if (uVar7 <= uVar6) {
        lVar4 = puVar3[1];
        goto LAB_1081da158;
      }
      puVar5 = (undefined8 *)*puVar3;
      puVar9 = puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
  }
  puVar2 = &UNK_10df091e0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar2 = &UNK_10df091f0;
  }
  uVar6 = *(ulong *)(puVar2 + (long)(int)param_2 * 8);
  if (0x3b9ac9c9 - uVar7 <= *(ulong *)(puVar2 + (long)(int)param_2 * 8)) {
    uVar6 = 0x3b9ac9c9 - uVar7;
  }
  puVar5 = (undefined8 *)(uVar6 + uVar1);
  puVar3 = puVar5;
  _malloc();
  while (puVar3 == (undefined8 *)0x0) {
    if (uVar6 < 100) {
      *(undefined8 *)(*param_1 + 0x28) = 0x200000036;
      (**(code **)*param_1)(param_1);
    }
    uVar6 = uVar6 >> 1;
    puVar5 = (undefined8 *)(uVar6 + uVar1);
    puVar3 = puVar5;
    _malloc();
  }
  *(long *)(lVar8 + 0x98) = *(long *)(lVar8 + 0x98) + (long)puVar5;
  uVar6 = uVar6 + uVar7;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = uVar6;
  lVar4 = 0;
  if (puVar9 == (undefined8 *)0x0) {
    *(undefined8 **)(lVar8 + 0x68 + (long)(int)param_2 * 8) = puVar3;
  }
  else {
    *puVar9 = puVar3;
  }
LAB_1081da158:
  puVar5 = puVar3 + 3;
  lVar8 = 0;
  if (((ulong)puVar5 & 0x1f) != 0) {
    lVar8 = 0x20 - ((ulong)puVar5 & 0x1f);
  }
  puVar3[1] = lVar4 + uVar7;
  puVar3[2] = uVar6 - uVar7;
  return (long)puVar5 + lVar4 + lVar8;
}



/* Entry: 1081da1a4; end: 1081da2cf;  */

long FUN_1081da1a4(long *param_1,uint param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1[1];
  if (1000000000 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x800000036;
    (**(code **)*param_1)(param_1);
  }
  uVar6 = param_3 + 0x1f & 0xffffffffffffffe0;
  puVar1 = (undefined8 *)(uVar6 + 0x37);
  if ((undefined8 *)0x3b9aca00 < puVar1) {
    *(undefined8 *)(*param_1 + 0x28) = 0x300000036;
    (**(code **)*param_1)(param_1);
  }
  if (1 < param_2) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0xe;
    *(uint *)(lVar4 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar3 = puVar1;
  _malloc();
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(*param_1 + 0x28) = 0x400000036;
    (**(code **)*param_1)(param_1);
  }
  puVar2 = puVar3 + 3;
  *(long *)(lVar5 + 0x98) = *(long *)(lVar5 + 0x98) + (long)puVar1;
  lVar5 = lVar5 + (long)(int)param_2 * 8;
  *puVar3 = *(undefined8 *)(lVar5 + 0x78);
  puVar3[1] = uVar6;
  puVar3[2] = 0;
  *(undefined8 **)(lVar5 + 0x78) = puVar3;
  lVar5 = 0;
  if (((ulong)puVar2 & 0x1f) != 0) {
    lVar5 = 0x20 - ((ulong)puVar2 & 0x1f);
  }
  return (long)puVar2 + lVar5;
}



/* Entry: 1081da2d0; end: 1081da633;  */

long * FUN_1081da2d0(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  lVar8 = param_1[1];
  if (1000000000 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x900000036;
    (**(code **)*param_1)(param_1);
  }
  uVar1 = param_3 + 0x3f & 0xffffffc0;
  uVar6 = 0;
  if (uVar1 != 0) {
    uVar6 = 0x3b9ac9e8 / uVar1;
  }
  if (0x3b9ac9e8 < uVar1) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x46;
    (*(code *)*puVar5)(param_1);
  }
  if (param_4 <= uVar6) {
    uVar6 = param_4;
  }
  *(uint *)(lVar8 + 0xa0) = uVar6;
  plVar3 = param_1;
  FUN_1081d9fc4(param_1,param_2,(ulong)param_4 << 3);
  if (param_4 != 0) {
    uVar7 = 0;
    do {
      if (param_4 - uVar7 <= uVar6) {
        uVar6 = param_4 - uVar7;
      }
      plVar4 = param_1;
      FUN_1081da1a4(param_1,param_2,(ulong)uVar1 * (ulong)uVar6);
      for (uVar2 = uVar6; uVar2 != 0; uVar2 = uVar2 - 1) {
        plVar3[uVar7] = (long)plVar4;
        plVar4 = (long *)((long)plVar4 + (ulong)uVar1);
        uVar7 = uVar7 + 1;
      }
    } while (uVar7 < param_4);
  }
  return plVar3;
}



/* Entry: 1081da634; end: 1081da88f;  */

void FUN_1081da634(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  lVar7 = param_1[1];
  plVar10 = *(long **)(lVar7 + 0x88);
  if (plVar10 == (long *)0x0) {
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    do {
      if (*plVar10 == 0) {
        uVar2 = *(uint *)((long)plVar10 + 0xc);
        uVar11 = (ulong)uVar2 * (ulong)*(uint *)(plVar10 + 1);
        uVar3 = *(uint *)(plVar10 + 2);
        if (CARRY8(uVar9,uVar11)) {
          *(undefined8 *)(*param_1 + 0x28) = 0xa00000036;
          (**(code **)*param_1)(param_1);
        }
        uVar8 = uVar8 + (ulong)uVar3 * (ulong)uVar2;
        uVar9 = uVar11 + uVar9;
      }
      plVar10 = (long *)plVar10[6];
    } while (plVar10 != (long *)0x0);
  }
  for (plVar10 = *(long **)(lVar7 + 0x90); plVar10 != (long *)0x0; plVar10 = (long *)plVar10[6]) {
    if (*plVar10 == 0) {
      uVar2 = *(uint *)((long)plVar10 + 0xc);
      lVar12 = (ulong)*(uint *)(plVar10 + 1) * (ulong)uVar2;
      uVar3 = *(uint *)(plVar10 + 2);
      if (CARRY8(uVar9,lVar12 * 0x80)) {
        *(undefined8 *)(*param_1 + 0x28) = 0xb00000036;
        (**(code **)*param_1)(param_1);
      }
      uVar8 = uVar8 + (ulong)uVar2 * (ulong)uVar3 * 0x80;
      uVar9 = lVar12 * 0x80 + uVar9;
    }
  }
  if (uVar8 != 0) {
    uVar6 = *(ulong *)(param_1[1] + 0x58);
    uVar11 = 0;
    if (*(ulong *)(lVar7 + 0x98) <= uVar6) {
      uVar11 = uVar6 - *(ulong *)(lVar7 + 0x98);
    }
    uVar1 = uVar9;
    if (uVar6 != 0) {
      uVar1 = uVar11;
    }
    if (uVar1 < uVar9) {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar1 / uVar8;
      }
      if (uVar1 < uVar8) {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 1000000000;
    }
    for (plVar10 = *(long **)(lVar7 + 0x88); plVar10 != (long *)0x0; plVar10 = (long *)plVar10[6]) {
      if (*plVar10 == 0) {
        uVar8 = (ulong)*(uint *)(plVar10 + 1);
        uVar2 = *(uint *)(plVar10 + 2);
        lVar12 = 0;
        if ((ulong)uVar2 != 0) {
          lVar12 = (long)(uVar8 - 1) / (long)(ulong)uVar2;
        }
        if (uVar9 < lVar12 + 1U) {
          *(uint *)((long)plVar10 + 0x14) = uVar2 * (int)uVar9;
          puVar5 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar5 + 5) = 0x31;
          (*(code *)*puVar5)(param_1);
          *(undefined4 *)((long)plVar10 + 0x2c) = 1;
          uVar8 = (ulong)*(uint *)((long)plVar10 + 0x14);
        }
        else {
          *(uint *)((long)plVar10 + 0x14) = *(uint *)(plVar10 + 1);
        }
        plVar4 = param_1;
        FUN_1081da2d0(param_1,1,*(undefined4 *)((long)plVar10 + 0xc),uVar8);
        *plVar10 = (long)plVar4;
        *(undefined4 *)(plVar10 + 3) = *(undefined4 *)(lVar7 + 0xa0);
        *(undefined4 *)((long)plVar10 + 0x1c) = 0;
        *(undefined4 *)(plVar10 + 4) = 0;
        *(undefined4 *)(plVar10 + 5) = 0;
      }
    }
    for (plVar10 = *(long **)(lVar7 + 0x90); plVar10 != (long *)0x0; plVar10 = (long *)plVar10[6]) {
      if (*plVar10 == 0) {
        uVar8 = (ulong)*(uint *)(plVar10 + 1);
        uVar2 = *(uint *)(plVar10 + 2);
        lVar12 = 0;
        if ((ulong)uVar2 != 0) {
          lVar12 = (long)(uVar8 - 1) / (long)(ulong)uVar2;
        }
        if (uVar9 < lVar12 + 1U) {
          *(uint *)((long)plVar10 + 0x14) = uVar2 * (int)uVar9;
          puVar5 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar5 + 5) = 0x31;
          (*(code *)*puVar5)(param_1);
          *(undefined4 *)((long)plVar10 + 0x2c) = 1;
          uVar8 = (ulong)*(uint *)((long)plVar10 + 0x14);
        }
        else {
          *(uint *)((long)plVar10 + 0x14) = *(uint *)(plVar10 + 1);
        }
        plVar4 = param_1;
        func_0x0001081da3f0(param_1,1,*(undefined4 *)((long)plVar10 + 0xc),uVar8);
        *plVar10 = (long)plVar4;
        *(undefined4 *)(plVar10 + 3) = *(undefined4 *)(lVar7 + 0xa0);
        *(undefined4 *)((long)plVar10 + 0x1c) = 0;
        *(undefined4 *)(plVar10 + 4) = 0;
        *(undefined4 *)(plVar10 + 5) = 0;
      }
    }
  }
  return;
}



/* Entry: 1081da890; end: 1081dad83;  */

long FUN_1081da890(long *param_1,long *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  
  uVar1 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar1) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x16;
    (*(code *)*puVar5)(param_1);
  }
  if ((param_3 < *(uint *)((long)param_2 + 0x1c)) ||
     (*(int *)((long)param_2 + 0x14) + *(uint *)((long)param_2 + 0x1c) < uVar1)) {
    if (*(int *)((long)param_2 + 0x2c) == 0) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x45;
      (*(code *)*puVar5)(param_1);
    }
    if ((int)param_2[5] != 0) {
      FUN_1081dadc8(param_1,param_2,1);
      *(undefined4 *)(param_2 + 5) = 0;
    }
    uVar4 = param_3;
    if (param_3 <= *(uint *)((long)param_2 + 0x1c)) {
      lVar6 = (ulong)uVar1 - (ulong)*(uint *)((long)param_2 + 0x14);
      uVar4 = (uint)lVar6 & ((uint)(lVar6 >> 0x3f) ^ 0xffffffff);
    }
    *(uint *)((long)param_2 + 0x1c) = uVar4;
    FUN_1081dadc8(param_1,param_2,0);
  }
  uVar4 = *(uint *)(param_2 + 4);
  if (uVar4 < uVar1) {
    if (param_3 <= uVar4) {
      if (param_5 != 0) goto LAB_1081da9bc;
      iVar7 = *(int *)((long)param_2 + 0x24);
joined_r0x0001081daa4c:
      if (iVar7 == 0) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 0x16;
        (*(code *)*puVar5)(param_1);
        goto LAB_1081daa24;
      }
LAB_1081da9d8:
      uVar3 = uVar4 - *(int *)((long)param_2 + 0x1c);
      if (uVar3 < uVar1 - *(int *)((long)param_2 + 0x1c)) {
        uVar2 = *(undefined4 *)((long)param_2 + 0xc);
        iVar7 = (param_4 + param_3) - uVar4;
        lVar6 = (ulong)uVar3 << 3;
        do {
          _bzero(*(undefined8 *)(*param_2 + lVar6),uVar2);
          lVar6 = lVar6 + 8;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      goto LAB_1081daa18;
    }
    uVar4 = param_3;
    if (param_5 == 0) {
      iVar7 = *(int *)((long)param_2 + 0x24);
      goto joined_r0x0001081daa4c;
    }
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x16;
    (*(code *)*puVar5)(param_1);
LAB_1081da9bc:
    *(uint *)(param_2 + 4) = uVar1;
    if (*(int *)((long)param_2 + 0x24) != 0) goto LAB_1081da9d8;
  }
  else {
LAB_1081daa18:
    if (param_5 == 0) goto LAB_1081daa24;
  }
  *(undefined4 *)(param_2 + 5) = 1;
LAB_1081daa24:
  return *param_2 + (ulong)(param_3 - *(int *)((long)param_2 + 0x1c)) * 8;
}



/* Entry: 1081dad84; end: 1081dadc7;  */

void FUN_1081dad84(long param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    func_0x0001081dac4c(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  _free(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 1081dadc8; end: 1081db52b;  */

void FUN_1081dadc8(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  uVar4 = (ulong)*(uint *)((long)param_2 + 0x14);
  if (*(uint *)((long)param_2 + 0x14) != 0) {
    uVar8 = 0;
    uVar3 = *(uint *)((long)param_2 + 0xc);
    uVar5 = (ulong)*(uint *)(param_2 + 3);
    lVar6 = (ulong)*(uint *)((long)param_2 + 0x1c) * (ulong)uVar3;
    lVar1 = 0x38;
    if (param_3 != 0) {
      lVar1 = 0x40;
    }
    do {
      uVar2 = uVar4 - uVar8;
      if ((long)uVar5 <= (long)(uVar4 - uVar8)) {
        uVar2 = uVar5;
      }
      lVar7 = uVar8 + *(uint *)((long)param_2 + 0x1c);
      uVar4 = (ulong)*(uint *)(param_2 + 4) - lVar7;
      if ((long)uVar4 <= (long)uVar2) {
        uVar2 = uVar4;
      }
      uVar4 = (ulong)*(uint *)(param_2 + 1) - lVar7;
      if ((long)uVar4 <= (long)uVar2) {
        uVar2 = uVar4;
      }
      if ((long)uVar2 < 1) {
        return;
      }
      lVar7 = uVar2 * uVar3;
      (**(code **)((long)param_2 + lVar1))
                (param_1,param_2 + 7,*(undefined8 *)(*param_2 + uVar8 * 8),lVar6,lVar7);
      lVar6 = lVar7 + lVar6;
      uVar4 = (ulong)*(uint *)((long)param_2 + 0x14);
      uVar5 = (ulong)*(uint *)(param_2 + 3);
      uVar8 = uVar8 + uVar5;
    } while (uVar8 < uVar4);
  }
  return;
}



/* Entry: 1081db52c; end: 1081db543;  */

void FUN_1081db52c(void)

{
  return;
}



/* Entry: 1081db544; end: 1081db723;  */

void FUN_1081db544(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar14 = *(long *)(param_1 + 0x270);
  iVar1 = *(int *)(param_1 + 0x70);
  uVar6 = 0x2fe;
  if (iVar1 != 1) {
    uVar6 = 0x100;
  }
  *(uint *)(lVar14 + 0x38) = (uint)(iVar1 == 1);
  lVar5 = param_1;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1,1,uVar6,*(undefined4 *)(param_1 + 0x90));
  *(long *)(lVar14 + 0x30) = lVar5;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar5 = 0;
    iVar7 = *(int *)(lVar14 + 0x28);
    do {
      iVar2 = *(int *)(lVar14 + 0x3c + lVar5 * 4);
      lVar8 = *(long *)(lVar14 + 0x30);
      if (iVar1 == 1) {
        *(long *)(lVar8 + lVar5 * 8) = *(long *)(lVar8 + lVar5 * 8) + 0xff;
        lVar8 = *(long *)(lVar14 + 0x30);
      }
      lVar10 = 0;
      iVar11 = 0;
      puVar9 = *(undefined1 **)(lVar8 + lVar5 * 8);
      lVar12 = (long)(iVar2 * 2 + -2);
      lVar8 = 0;
      if (lVar12 != 0) {
        lVar8 = ((long)iVar2 + 0xfe) / lVar12;
      }
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = iVar7 / iVar2;
      }
      do {
        iVar7 = iVar4;
        if ((int)lVar8 < lVar10) {
          lVar13 = (long)iVar2 + 0x2fc + (long)iVar11 * 0x1fe;
          do {
            lVar8 = 0;
            if (lVar12 != 0) {
              lVar8 = lVar13 / lVar12;
            }
            iVar11 = iVar11 + 1;
            lVar13 = lVar13 + 0x1fe;
          } while ((int)lVar8 < lVar10);
        }
        puVar9[lVar10] = (char)iVar11 * (char)iVar7;
        lVar10 = lVar10 + 1;
        iVar4 = iVar7;
      } while (lVar10 != 0x100);
      if (iVar1 == 1) {
        lVar8 = 0;
        uVar3 = *puVar9;
        *(ulong *)(puVar9 + -0xf7) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0xff) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0xe7) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0xef) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0xd7) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0xdf) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -199) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0xcf) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0xb7) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0xbf) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0xa7) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0xaf) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x97) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x9f) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x87) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x8f) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x77) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x7f) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x67) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x6f) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x57) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x5f) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x47) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x4f) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x37) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x3f) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x27) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x2f) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x17) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x1f) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -8) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        *(ulong *)(puVar9 + -0x10) =
             CONCAT17(uVar3,CONCAT16(uVar3,CONCAT15(uVar3,CONCAT14(uVar3,CONCAT13(uVar3,CONCAT12(
                                                  uVar3,CONCAT11(uVar3,uVar3)))))));
        uVar3 = puVar9[0xff];
        do {
          puVar9[lVar8 + 0x100] = uVar3;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0xff);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x90));
  }
  return;
}



/* Entry: 1081db724; end: 1081db827;  */

void FUN_1081db724(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  
  if (0 < (int)param_4) {
    uVar4 = 0;
    plVar5 = *(long **)(*(long *)(param_1 + 0x270) + 0x30);
    lVar1 = *plVar5;
    lVar2 = plVar5[1];
    lVar6 = plVar5[2];
    iVar3 = *(int *)(param_1 + 0x88);
    do {
      if (iVar3 != 0) {
        pbVar8 = *(byte **)(param_2 + uVar4 * 8);
        pcVar7 = *(char **)(param_3 + uVar4 * 8);
        iVar9 = iVar3;
        do {
          *pcVar7 = *(char *)(lVar2 + (ulong)pbVar8[1]) + *(char *)(lVar1 + (ulong)*pbVar8) +
                    *(char *)(lVar6 + (ulong)pbVar8[2]);
          pbVar8 = pbVar8 + 3;
          iVar9 = iVar9 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iVar9 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_4);
  }
  return;
}



/* Entry: 1081db828; end: 1081db8ef;  */

void FUN_1081db828(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  
  if (0 < (int)param_4) {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x270);
    plVar13 = *(long **)(lVar12 + 0x30);
    lVar1 = *plVar13;
    lVar3 = plVar13[1];
    lVar14 = plVar13[2];
    iVar5 = *(int *)(param_1 + 0x88);
    uVar15 = *(uint *)(lVar12 + 0x4c);
    do {
      if (iVar5 != 0) {
        uVar16 = 0;
        lVar6 = (long)(int)uVar15;
        lVar2 = *(long *)(lVar12 + 0x50);
        lVar4 = *(long *)(lVar12 + 0x58);
        lVar7 = *(long *)(lVar12 + 0x60);
        pbVar9 = *(byte **)(param_2 + uVar11 * 8);
        pcVar8 = *(char **)(param_3 + uVar11 * 8);
        iVar10 = iVar5;
        do {
          *pcVar8 = *(char *)(lVar3 + (long)*(int *)(lVar4 + lVar6 * 0x40 + uVar16 * 4) +
                                      (ulong)pbVar9[1]) +
                    *(char *)(lVar1 + (long)*(int *)(lVar2 + lVar6 * 0x40 + uVar16 * 4) +
                                      (ulong)*pbVar9) +
                    *(char *)(lVar14 + (long)*(int *)(lVar7 + lVar6 * 0x40 + uVar16 * 4) +
                                       (ulong)pbVar9[2]);
          uVar16 = (ulong)((int)uVar16 + 1) & 0xf;
          pbVar9 = pbVar9 + 3;
          iVar10 = iVar10 + -1;
          pcVar8 = pcVar8 + 1;
        } while (iVar10 != 0);
      }
      uVar15 = uVar15 + 1 & 0xf;
      *(uint *)(lVar12 + 0x4c) = uVar15;
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_4);
  }
  return;
}



/* Entry: 1081db8f0; end: 1081dbba3;  */

void FUN_1081db8f0(long param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  
  if (0 < (int)param_4) {
    uVar11 = 0;
    iVar1 = *(int *)(param_1 + 0x88);
    uVar2 = *(uint *)(param_1 + 0x90);
    lVar12 = *(long *)(param_1 + 0x270);
    do {
      _bzero(*(undefined8 *)(param_3 + uVar11 * 8),iVar1);
      iVar3 = *(int *)(lVar12 + 0x4c);
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (iVar1 != 0) {
            uVar6 = 0;
            lVar5 = *(long *)(*(long *)(lVar12 + 0x30) + uVar4 * 8);
            lVar7 = *(long *)(lVar12 + 0x50 + uVar4 * 8);
            lVar9 = *(long *)(param_2 + uVar11 * 8);
            pcVar8 = *(char **)(param_3 + uVar11 * 8);
            iVar10 = iVar1;
            do {
              *pcVar8 = *pcVar8 + *(char *)(lVar5 + (long)*(int *)(lVar7 + (long)iVar3 * 0x40 +
                                                                  uVar6 * 4) +
                                                    (ulong)*(byte *)(lVar9 + uVar4));
              uVar6 = (ulong)((int)uVar6 + 1) & 0xf;
              lVar9 = lVar9 + (int)uVar2;
              iVar10 = iVar10 + -1;
              pcVar8 = pcVar8 + 1;
            } while (iVar10 != 0);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar2);
      }
      *(uint *)(lVar12 + 0x4c) = iVar3 + 1U & 0xf;
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_4);
  }
  return;
}



/* Entry: 1081dbba4; end: 1081dbe8f;  */

void FUN_1081dbba4(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  plVar2 = param_1;
  (**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x4e] = (long)plVar2;
  *plVar2 = 0x1081dbd3c;
  plVar2[3] = (long)FUN_1081dbe90;
  plVar2[8] = 0;
  plVar2[10] = 0;
  if ((int)param_1[0x12] != 3) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x2f;
    (*(code *)*puVar4)(param_1);
  }
  plVar3 = param_1;
  (**(code **)param_1[1])(param_1,1,0x100);
  lVar11 = 0;
  plVar2[6] = (long)plVar3;
  do {
    plVar3 = param_1;
    (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
    *(long **)(plVar2[6] + lVar11) = plVar3;
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x100);
  *(undefined4 *)(plVar2 + 7) = 1;
  if (*(int *)((long)param_1 + 0x84) == 0) {
    plVar2[4] = 0;
    goto LAB_1081dbce0;
  }
  uVar1 = *(uint *)(param_1 + 0xf);
  if ((int)uVar1 < 8) {
    uVar12 = 0x800000038;
LAB_1081dbca4:
    *(undefined8 *)(*param_1 + 0x28) = uVar12;
    (**(code **)*param_1)(param_1);
  }
  else if (0x100 < uVar1) {
    uVar12 = 0x10000000039;
    goto LAB_1081dbca4;
  }
  plVar3 = param_1;
  (**(code **)(param_1[1] + 0x10))(param_1,1,uVar1,3);
  plVar2[4] = (long)plVar3;
  *(uint *)(plVar2 + 5) = uVar1;
LAB_1081dbce0:
  if ((int)param_1[0xe] != 0) {
    *(undefined4 *)(param_1 + 0xe) = 2;
    plVar3 = param_1;
    (**(code **)(param_1[1] + 8))(param_1,1,(ulong)((int)param_1[0x11] + 2) * 6);
    plVar2[8] = (long)plVar3;
    lVar10 = param_1[0x4e];
    (**(code **)param_1[1])(param_1,1,0x7fc);
    lVar5 = 0;
    lVar7 = 0;
    lVar11 = (long)param_1 + 0x3fc;
    *(long *)(lVar10 + 0x50) = lVar11;
    do {
      *(int *)(lVar11 + lVar7 * 4) = (int)lVar7;
      *(int *)(lVar11 + lVar5 * 4) = (int)lVar5;
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != -0x10);
    lVar11 = 0;
    iVar9 = 0x10;
    piVar8 = (int *)((long)param_1 + 0x3bc);
    do {
      *(int *)((long)param_1 + lVar11 * 4 + 0x43c) = iVar9;
      *piVar8 = -iVar9;
      iVar9 = ((int)lVar11 + 0x10U & 1) + iVar9;
      lVar11 = lVar11 + 1;
      piVar8 = piVar8 + -1;
    } while (lVar11 != 0x20);
    uVar6 = 0;
    do {
      *(undefined4 *)((long)param_1 + uVar6 * 4) = 0xffffffe0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xd0);
    lVar11 = 0;
    do {
      puVar4 = (undefined8 *)((long)param_1 + lVar11 + 0x4bc);
      puVar4[1] = 0x2000000020;
      *puVar4 = 0x2000000020;
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x340);
    return;
  }
  return;
}



/* Entry: 1081dbe90; end: 1081dbe9f;  */

void FUN_1081dbe90(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x270) + 0x38) = 1;
  return;
}



/* Entry: 1081dbea0; end: 1081dbf5f;  */

void FUN_1081dbea0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x270);
  (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x7fc);
  lVar2 = 0;
  lVar5 = 0;
  lVar3 = param_1 + 0x3fc;
  *(long *)(lVar8 + 0x50) = lVar3;
  do {
    *(int *)(lVar3 + lVar5 * 4) = (int)lVar5;
    *(int *)(lVar3 + lVar2 * 4) = (int)lVar2;
    lVar5 = lVar5 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != -0x10);
  lVar3 = 0;
  iVar7 = 0x10;
  piVar6 = (int *)(param_1 + 0x3bc);
  do {
    *(int *)(param_1 + 0x43c + lVar3 * 4) = iVar7;
    *piVar6 = -iVar7;
    iVar7 = ((int)lVar3 + 0x10U & 1) + iVar7;
    lVar3 = lVar3 + 1;
    piVar6 = piVar6 + -1;
  } while (lVar3 != 0x20);
  uVar4 = 0;
  do {
    *(undefined4 *)(param_1 + uVar4 * 4) = 0xffffffe0;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xd0);
  lVar3 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x4bc + lVar3);
    puVar1[1] = 0x2000000020;
    *puVar1 = 0x2000000020;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x340);
  return;
}



/* Entry: 1081dbf60; end: 1081dbfdf;  */

void FUN_1081dbf60(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    uVar4 = 0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
    iVar2 = *(int *)(param_1 + 0x88);
    do {
      if (iVar2 != 0) {
        pbVar6 = *(byte **)(param_2 + uVar4 * 8);
        iVar7 = iVar2;
        do {
          lVar1 = *(long *)(lVar5 + (ulong)(*pbVar6 >> 3) * 8) + ((ulong)pbVar6[1] & 0xfc) * 0x10;
          uVar8 = (ulong)(pbVar6[2] >> 2) & 0x3e;
          uVar3 = *(ushort *)(lVar1 + uVar8);
          if ((uVar3 + 1 & 0x10000) == 0) {
            uVar3 = uVar3 + 1;
          }
          *(ushort *)(lVar1 + uVar8) = uVar3;
          pbVar6 = pbVar6 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_4);
  }
  return;
}



/* Entry: 1081dbfe0; end: 1081dc77b;  */

void FUN_1081dbfe0(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  char cVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ushort *puVar27;
  uint uVar28;
  int iVar29;
  
  lVar22 = param_1[0x4e];
  param_1[0x14] = *(long *)(lVar22 + 0x20);
  iVar23 = *(int *)(lVar22 + 0x28);
  uVar24 = (ulong)iVar23;
  uVar21 = 1;
  plVar10 = param_1;
  (**(code **)param_1[1])(param_1,1,uVar24 * 0x28);
  plVar10[1] = 0x3f00000000;
  *plVar10 = 0x1f00000000;
  plVar10[2] = 0x1f00000000;
  FUN_1081dc780(param_1);
  if (1 < iVar23) {
    uVar25 = 1;
    do {
      if (uVar24 < uVar25 << 1) {
        lVar14 = 0;
        plVar11 = (long *)0x0;
        uVar21 = uVar25;
        plVar16 = plVar10;
        do {
          plVar12 = plVar16;
          lVar18 = plVar16[3];
          if (plVar16[3] <= lVar14) {
            plVar12 = plVar11;
            lVar18 = lVar14;
          }
          lVar14 = lVar18;
          plVar16 = plVar16 + 5;
          uVar21 = uVar21 - 1;
          plVar11 = plVar12;
        } while (uVar21 != 0);
      }
      else {
        plVar11 = (long *)0x0;
        lVar14 = 0;
        uVar21 = uVar25;
        plVar16 = plVar10;
        do {
          plVar12 = plVar11;
          lVar18 = lVar14;
          if ((lVar14 < plVar16[4]) && (plVar12 = plVar16, lVar18 = plVar16[4], plVar16[3] < 1)) {
            plVar12 = plVar11;
            lVar18 = lVar14;
          }
          plVar16 = plVar16 + 5;
          uVar21 = uVar21 - 1;
          plVar11 = plVar12;
          lVar14 = lVar18;
        } while (uVar21 != 0);
      }
      uVar21 = uVar25;
      if (plVar12 == (long *)0x0) break;
      plVar16 = plVar10 + uVar25 * 5;
      piVar15 = (int *)((long)plVar12 + 4);
      iVar3 = *piVar15;
      iVar4 = *(int *)((long)plVar12 + 0xc);
      *(int *)((long)plVar16 + 0xc) = iVar4;
      iVar5 = *(int *)((long)plVar12 + 0x14);
      *(int *)((long)plVar16 + 0x14) = iVar5;
      iVar1 = (int)*plVar12;
      *(int *)plVar16 = iVar1;
      *(int *)((long)plVar16 + 4) = iVar3;
      iVar2 = (int)plVar12[1];
      *(int *)(plVar16 + 1) = iVar2;
      iVar23 = (int)plVar12[2];
      *(int *)(plVar16 + 2) = iVar23;
      uVar21 = (ulong)*(uint *)(param_1 + 8);
      iVar7 = (iVar3 - iVar1) *
              *(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df0942c + uVar21 * 4) * 4) * 8;
      iVar29 = (iVar4 - iVar2) *
               *(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df09470 + uVar21 * 4) * 4) * 4;
      iVar8 = (iVar5 - iVar23) *
              *(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df094b4 + uVar21 * 4) * 4) * 8;
      if ((1L << (uVar21 & 0x3f) & 0x10c4U) == 0) {
        cVar13 = '\x01';
        if (iVar29 < iVar8) {
          cVar13 = '\x02';
          iVar29 = iVar8;
        }
        if (iVar7 <= iVar29) goto LAB_1081dc1c0;
LAB_1081dc1ec:
        iVar23 = iVar1 + iVar3;
        plVar11 = plVar16;
      }
      else {
        cVar13 = iVar7 <= iVar29;
        if (iVar7 <= iVar29) {
          iVar7 = iVar29;
        }
        if (iVar8 <= iVar7) {
LAB_1081dc1c0:
          if (cVar13 != '\x02') {
            if (cVar13 != '\x01') goto LAB_1081dc1ec;
            iVar23 = iVar2 + iVar4;
            piVar15 = (int *)((long)plVar12 + 0xc);
            plVar11 = plVar16 + 1;
            goto LAB_1081dc1f4;
          }
        }
        iVar23 = iVar23 + iVar5;
        piVar15 = (int *)((long)plVar12 + 0x14);
        plVar11 = plVar16 + 2;
      }
LAB_1081dc1f4:
      *piVar15 = iVar23 / 2;
      *(int *)plVar11 = iVar23 / 2 + 1;
      FUN_1081dc780(param_1);
      FUN_1081dc780(param_1,plVar16);
      uVar25 = uVar25 + 1;
      uVar21 = uVar24;
    } while (uVar25 != uVar24);
    iVar23 = (int)uVar21;
    if (iVar23 < 1) goto LAB_1081dc374;
  }
  iVar23 = (int)uVar21;
  uVar24 = 0;
  do {
    lVar18 = 0;
    lVar19 = 0;
    lVar20 = 0;
    lVar17 = 0;
    plVar16 = plVar10 + uVar24 * 5;
    lVar14 = (long)(int)*plVar16;
    iVar7 = (int)plVar16[2];
    do {
      if ((int)plVar16[1] <= *(int *)((long)plVar16 + 0xc)) {
        lVar26 = (long)(int)plVar16[1];
        do {
          if (iVar7 <= *(int *)((long)plVar16 + 0x14)) {
            puVar27 = (ushort *)
                      (*(long *)(*(long *)(param_1[0x4e] + 0x30) + lVar14 * 8) + lVar26 * 0x40 +
                      (long)iVar7 * 2);
            iVar29 = (*(int *)((long)plVar16 + 0x14) - iVar7) + 1;
            uVar28 = iVar7 << 3 | 4;
            do {
              uVar6 = *puVar27;
              if ((ulong)uVar6 != 0) {
                lVar18 = lVar18 + (long)(int)(uint)uVar6 * (long)(int)uVar28;
                lVar19 = lVar19 + (long)(int)(uint)uVar6 * (long)(int)((int)lVar26 << 2 | 2);
                lVar20 = lVar20 + (long)(int)(uint)uVar6 * (long)(int)((int)lVar14 << 3 | 4);
                lVar17 = lVar17 + (ulong)uVar6;
              }
              uVar28 = uVar28 + 8;
              iVar29 = iVar29 + -1;
              puVar27 = puVar27 + 1;
            } while (iVar29 != 0);
          }
          lVar26 = lVar26 + 1;
        } while (*(int *)((long)plVar16 + 0xc) + 1 != (int)lVar26);
      }
      lVar14 = lVar14 + 1;
    } while (*(int *)((long)plVar16 + 4) + 1 != (int)lVar14);
    lVar14 = lVar17 >> 1;
    uVar9 = 0;
    if (lVar17 != 0) {
      uVar9 = (undefined1)((lVar20 + lVar14) / lVar17);
    }
    *(undefined1 *)(*(long *)param_1[0x14] + uVar24) = uVar9;
    uVar9 = 0;
    if (lVar17 != 0) {
      uVar9 = (undefined1)((lVar19 + lVar14) / lVar17);
    }
    *(undefined1 *)(*(long *)(param_1[0x14] + 8) + uVar24) = uVar9;
    uVar9 = 0;
    if (lVar17 != 0) {
      uVar9 = (undefined1)((lVar18 + lVar14) / lVar17);
    }
    *(undefined1 *)(*(long *)(param_1[0x14] + 0x10) + uVar24) = uVar9;
    uVar24 = uVar24 + 1;
  } while (uVar24 != (uVar21 & 0xffffffff));
LAB_1081dc374:
  *(int *)((long)param_1 + 0x9c) = iVar23;
  lVar14 = *param_1;
  *(undefined4 *)(lVar14 + 0x28) = 0x60;
  *(int *)(lVar14 + 0x2c) = iVar23;
  (**(code **)(*param_1 + 8))(param_1,1);
  *(undefined4 *)(lVar22 + 0x38) = 1;
  return;
}



/* Entry: 1081dc77c; end: 1081dc77f;  */

void FUN_1081dc77c(void)

{
  return;
}



/* Entry: 1081dc780; end: 1081dcb6b;  */

void FUN_1081dc780(long param_1,int *param_2)

{
  bool bVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
  iVar11 = *param_2;
  iVar12 = param_2[1];
  iVar8 = param_2[2];
  iVar9 = param_2[3];
  lVar10 = (long)iVar8;
  iVar5 = param_2[4];
  iVar6 = param_2[5];
  lVar7 = (long)iVar5;
  if (iVar11 < iVar12) {
    lVar13 = (long)iVar11;
    do {
      if (iVar8 <= iVar9) {
        lVar3 = lVar10;
        do {
          if (iVar5 <= iVar6) {
            psVar2 = (short *)(*(long *)(lVar4 + lVar13 * 8) + lVar3 * 0x40 + lVar7 * 2);
            iVar15 = (iVar6 - iVar5) + 1;
            do {
              if (*psVar2 != 0) {
                iVar11 = (int)lVar13;
                *param_2 = iVar11;
                goto LAB_1081dc818;
              }
              iVar15 = iVar15 + -1;
              psVar2 = psVar2 + 1;
            } while (iVar15 != 0);
          }
          lVar3 = lVar3 + 1;
        } while (iVar9 + 1 != (int)lVar3);
      }
      lVar13 = lVar13 + 1;
    } while (iVar12 + 1 != (int)lVar13);
  }
LAB_1081dc818:
  if (iVar11 < iVar12) {
    lVar13 = (long)iVar12;
    do {
      if (iVar8 <= iVar9) {
        lVar3 = lVar10;
        do {
          if (iVar5 <= iVar6) {
            psVar2 = (short *)(*(long *)(lVar4 + lVar13 * 8) + lVar3 * 0x40 + lVar7 * 2);
            iVar15 = (iVar6 - iVar5) + 1;
            do {
              if (*psVar2 != 0) {
                iVar12 = (int)lVar13;
                param_2[1] = iVar12;
                goto LAB_1081dc890;
              }
              iVar15 = iVar15 + -1;
              psVar2 = psVar2 + 1;
            } while (iVar15 != 0);
          }
          lVar3 = lVar3 + 1;
        } while (iVar9 + 1 != (int)lVar3);
      }
      bVar1 = iVar11 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar1);
  }
LAB_1081dc890:
  if (iVar8 < iVar9) {
    do {
      lVar13 = (long)iVar11;
      if (iVar11 <= iVar12) {
        do {
          if (iVar5 <= iVar6) {
            psVar2 = (short *)(*(long *)(lVar4 + lVar13 * 8) + lVar10 * 0x40 + lVar7 * 2);
            iVar15 = (iVar6 - iVar5) + 1;
            do {
              if (*psVar2 != 0) {
                iVar8 = (int)lVar10;
                param_2[2] = iVar8;
                goto LAB_1081dc908;
              }
              iVar15 = iVar15 + -1;
              psVar2 = psVar2 + 1;
            } while (iVar15 != 0);
          }
          lVar13 = lVar13 + 1;
        } while (iVar12 + 1 != (int)lVar13);
      }
      lVar10 = lVar10 + 1;
    } while (iVar9 + 1 != (int)lVar10);
  }
LAB_1081dc908:
  if (iVar8 < iVar9) {
    lVar10 = (long)iVar9;
    do {
      lVar13 = (long)iVar11;
      if (iVar11 <= iVar12) {
        do {
          if (iVar5 <= iVar6) {
            psVar2 = (short *)(*(long *)(lVar4 + lVar13 * 8) + lVar10 * 0x40 + lVar7 * 2);
            iVar15 = (iVar6 - iVar5) + 1;
            do {
              if (*psVar2 != 0) {
                iVar9 = (int)lVar10;
                param_2[3] = iVar9;
                goto LAB_1081dc984;
              }
              iVar15 = iVar15 + -1;
              psVar2 = psVar2 + 1;
            } while (iVar15 != 0);
          }
          lVar13 = lVar13 + 1;
        } while (iVar12 + 1 != (int)lVar13);
      }
      bVar1 = iVar8 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar1);
  }
LAB_1081dc984:
  if (iVar5 < iVar6) {
    do {
      lVar10 = (long)iVar11;
      if (iVar11 <= iVar12) {
        do {
          if (iVar8 <= iVar9) {
            psVar2 = (short *)(*(long *)(lVar4 + lVar10 * 8) + (long)iVar8 * 0x40 + lVar7 * 2);
            iVar15 = (iVar9 - iVar8) + 1;
            do {
              if (*psVar2 != 0) {
                iVar5 = (int)lVar7;
                param_2[4] = iVar5;
                goto LAB_1081dca00;
              }
              iVar15 = iVar15 + -1;
              psVar2 = psVar2 + 0x20;
            } while (iVar15 != 0);
          }
          lVar10 = lVar10 + 1;
        } while (iVar12 + 1 != (int)lVar10);
      }
      lVar7 = lVar7 + 1;
    } while (iVar6 + 1 != (int)lVar7);
  }
LAB_1081dca00:
  if (iVar5 < iVar6) {
    lVar10 = (long)iVar6;
    do {
      lVar7 = (long)iVar11;
      if (iVar11 <= iVar12) {
        do {
          if (iVar8 <= iVar9) {
            psVar2 = (short *)(*(long *)(lVar4 + lVar7 * 8) + (long)iVar8 * 0x40 + lVar10 * 2);
            iVar15 = (iVar9 - iVar8) + 1;
            do {
              if (*psVar2 != 0) {
                iVar6 = (int)lVar10;
                param_2[5] = iVar6;
                goto LAB_1081dca80;
              }
              iVar15 = iVar15 + -1;
              psVar2 = psVar2 + 0x20;
            } while (iVar15 != 0);
          }
          lVar7 = lVar7 + 1;
        } while (iVar12 + 1 != (int)lVar7);
      }
      bVar1 = iVar5 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar1);
  }
LAB_1081dca80:
  uVar14 = (ulong)*(uint *)(param_1 + 0x40);
  lVar7 = (long)*(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df0942c + uVar14 * 4) * 4) *
          (long)((iVar12 - iVar11) * 8);
  lVar10 = (long)*(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df09470 + uVar14 * 4) * 4) *
           (long)((iVar9 - iVar8) * 4);
  lVar13 = (long)*(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df094b4 + uVar14 * 4) * 4) *
           (long)((iVar6 - iVar5) * 8);
  *(long *)(param_2 + 6) = lVar7 * lVar7 + lVar10 * lVar10 + lVar13 * lVar13;
  lVar10 = 0;
  if (iVar11 <= iVar12) {
    lVar7 = (long)iVar11;
    do {
      if (iVar8 <= iVar9) {
        lVar13 = (long)iVar8;
        do {
          if (iVar5 <= iVar6) {
            psVar2 = (short *)(*(long *)(lVar4 + lVar7 * 8) + lVar13 * 0x40 + (long)iVar5 * 2);
            iVar11 = (iVar6 - iVar5) + 1;
            do {
              if (*psVar2 != 0) {
                lVar10 = lVar10 + 1;
              }
              iVar11 = iVar11 + -1;
              psVar2 = psVar2 + 1;
            } while (iVar11 != 0);
          }
          lVar13 = lVar13 + 1;
        } while (iVar9 + 1 != (int)lVar13);
      }
      lVar7 = lVar7 + 1;
    } while (iVar12 + 1 != (int)lVar7);
  }
  *(long *)(param_2 + 8) = lVar10;
  return;
}



/* Entry: 1081dcb6c; end: 1081dcf93;  */

undefined * FUN_1081dcb6c(undefined *param_1,undefined *param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined1 *puVar29;
  undefined8 uVar30;
  ulong uVar31;
  long *plVar32;
  long lVar33;
  ulong uVar34;
  byte *pbVar35;
  long lVar37;
  long lVar38;
  int iVar39;
  undefined1 *puVar40;
  undefined *unaff_x23;
  ulong uVar41;
  undefined *puVar42;
  undefined *puVar43;
  ulong uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined *puStack_d00;
  undefined8 auStack_cf8 [18];
  double adStack_c68 [30];
  undefined1 auStack_b78 [104];
  undefined1 auStack_b10 [104];
  undefined4 uStack_aa8;
  undefined2 uStack_aa4;
  undefined4 uStack_aa2;
  byte abStack_9f0 [128];
  byte abStack_970 [256];
  long alStack_870 [256];
  long lStack_70;
  byte *pbVar36;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar28 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
  uVar5 = *(uint *)(param_1 + 0x9c);
  puVar15 = param_1;
  if (0 < (int)uVar5) {
    uVar31 = 0;
    uVar1 = ((uint)((ulong)param_2 >> 2) & 7) << 5 | 4;
    uVar2 = ((uint)(param_3 >> 3) & 7) << 5 | 2;
    uVar3 = ((uint)(param_4 >> 2) & 7) << 5 | 4;
    uVar10 = (int)param_2 << 3 | 0x1c;
    uVar11 = (int)param_3 << 2 | 0x1e;
    uVar12 = (int)param_4 << 3 | 0x1c;
    plVar32 = *(long **)(param_1 + 0xa0);
    lVar38 = *plVar32;
    lVar37 = plVar32[1];
    lVar19 = plVar32[2];
    uVar44 = (ulong)*(uint *)(param_1 + 0x40);
    unaff_x23 = &UNK_10df09420;
    iVar22 = *(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df0942c + uVar44 * 4) * 4);
    iVar39 = *(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df09470 + uVar44 * 4) * 4);
    iVar6 = *(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df094b4 + uVar44 * 4) * 4);
    lVar33 = 0x7fffffff;
    do {
      bVar7 = *(byte *)(lVar38 + uVar31);
      uVar24 = (uint)bVar7;
      uVar4 = uVar1;
      if (uVar24 <= uVar10 + uVar1 >> 1) {
        uVar4 = uVar10;
      }
      uVar25 = (uint)bVar7;
      iVar21 = uVar25 - uVar10;
      if (uVar10 <= uVar24 && iVar21 != 0) {
        uVar4 = uVar1;
      }
      lVar27 = 0;
      if (uVar10 <= uVar24 && iVar21 != 0) {
        lVar27 = (long)(iVar21 * iVar22) * (long)(iVar21 * iVar22);
      }
      iVar21 = (uVar25 - uVar1) * iVar22;
      if (uVar25 < uVar1) {
        lVar27 = (long)iVar21 * (long)iVar21;
        uVar4 = uVar10;
      }
      iVar21 = (uVar25 - uVar4) * iVar22;
      bVar7 = *(byte *)(lVar37 + uVar31);
      uVar4 = uVar2;
      if ((uint)bVar7 <= uVar11 + uVar2 >> 1) {
        uVar4 = uVar11;
      }
      uVar24 = (uint)bVar7;
      iVar8 = (uVar24 - uVar11) * iVar39;
      lVar26 = lVar27;
      if (uVar11 <= bVar7 && uVar24 - uVar11 != 0) {
        lVar26 = lVar27 + (long)iVar8 * (long)iVar8;
        uVar4 = uVar2;
      }
      iVar8 = (uVar24 - uVar2) * iVar39;
      if (uVar24 < uVar2) {
        lVar26 = lVar27 + (long)iVar8 * (long)iVar8;
        uVar4 = uVar11;
      }
      iVar8 = (uVar24 - uVar4) * iVar39;
      bVar7 = *(byte *)(lVar19 + uVar31);
      uVar4 = uVar3;
      if ((uint)bVar7 <= uVar12 + uVar3 >> 1) {
        uVar4 = uVar12;
      }
      uVar24 = (uint)bVar7;
      iVar9 = (uVar24 - uVar12) * iVar6;
      lVar27 = lVar26;
      if (uVar12 <= bVar7 && uVar24 - uVar12 != 0) {
        lVar27 = lVar26 + (long)iVar9 * (long)iVar9;
        uVar4 = uVar3;
      }
      iVar9 = (uVar24 - uVar3) * iVar6;
      if (uVar24 < uVar3) {
        lVar27 = lVar26 + (long)iVar9 * (long)iVar9;
        uVar4 = uVar12;
      }
      iVar9 = (uVar24 - uVar4) * iVar6;
      lVar26 = (long)iVar21 * (long)iVar21 + (long)iVar8 * (long)iVar8 + (long)iVar9 * (long)iVar9;
      alStack_870[uVar31] = lVar27;
      if (lVar33 <= lVar26) {
        lVar26 = lVar33;
      }
      uVar31 = uVar31 + 1;
      lVar33 = lVar26;
    } while (uVar5 != uVar31);
    uVar31 = 0;
    uVar41 = 0;
    do {
      if (alStack_870[uVar31] <= lVar26) {
        abStack_970[(int)uVar41] = (byte)uVar31;
        uVar41 = (ulong)((int)uVar41 + 1);
      }
      uVar31 = uVar31 + 1;
    } while (uVar5 != uVar31);
    _memset_pattern16(alStack_870,&UNK_10df09410,0x400);
    param_2 = (undefined *)((ulong)param_2 & 0xffffffff);
    puVar15 = (undefined *)(ulong)uVar3;
    if (0 < (int)uVar41) {
      uVar31 = 0;
      do {
        bVar7 = abStack_970[uVar31];
        uVar34 = (ulong)bVar7;
        plVar32 = *(long **)(param_1 + 0xa0);
        iVar21 = (uVar1 - *(byte *)(*plVar32 + uVar34)) * iVar22;
        iVar39 = *(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df09470 + uVar44 * 4) * 4);
        iVar8 = (uVar2 - *(byte *)(plVar32[1] + uVar34)) * iVar39;
        iVar6 = *(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df094b4 + uVar44 * 4) * 4);
        iVar9 = (uVar3 - *(byte *)(plVar32[2] + uVar34)) * iVar6;
        lVar37 = (long)iVar8 * (long)iVar8 + (long)iVar21 * (long)iVar21 + (long)iVar9 * (long)iVar9
        ;
        lVar38 = (ulong)(uint)(iVar22 * 8 * iVar22 * 8) + (long)iVar21 * (long)(iVar22 << 4);
        plVar32 = alStack_870;
        pbVar35 = abStack_9f0;
        iVar21 = 3;
        do {
          lVar19 = lVar37;
          lVar33 = (ulong)(uint)(iVar39 * 4 * iVar39 * 4) + (long)iVar39 * (long)iVar8 * 8;
          iVar22 = 7;
          do {
            iVar23 = -4;
            lVar27 = (ulong)(uint)(iVar6 * 8 * iVar6 * 8) + (long)iVar6 * (long)iVar9 * 0x10;
            lVar26 = lVar19;
            do {
              if (lVar26 < *plVar32) {
                *plVar32 = lVar26;
                *pbVar35 = bVar7;
                uVar44 = (ulong)*(uint *)(param_1 + 0x40);
              }
              lVar26 = lVar26 + lVar27;
              lVar27 = lVar27 + *(int *)(&UNK_10df09420 +
                                        (long)*(int *)(&UNK_10df094b4 + uVar44 * 4) * 4) *
                                *(int *)(&UNK_10df09420 +
                                        (long)*(int *)(&UNK_10df094b4 + uVar44 * 4) * 4) * 0x80;
              plVar32 = plVar32 + 1;
              pbVar35 = pbVar35 + 1;
              bVar13 = iVar23 != -1;
              iVar23 = iVar23 + 1;
            } while (bVar13);
            lVar19 = lVar19 + lVar33;
            lVar33 = lVar33 + *(int *)(&UNK_10df09420 +
                                      (long)*(int *)(&UNK_10df09470 + uVar44 * 4) * 4) *
                              *(int *)(&UNK_10df09420 +
                                      (long)*(int *)(&UNK_10df09470 + uVar44 * 4) * 4) * 0x20;
            bVar13 = iVar22 != 0;
            iVar22 = iVar22 + -1;
          } while (bVar13);
          lVar37 = lVar37 + lVar38;
          iVar22 = *(int *)(&UNK_10df09420 + (long)*(int *)(&UNK_10df0942c + uVar44 * 4) * 4);
          lVar38 = lVar38 + iVar22 * iVar22 * 0x80;
          bVar13 = iVar21 != 0;
          iVar21 = iVar21 + -1;
        } while (bVar13);
        uVar31 = uVar31 + 1;
        puVar15 = (undefined *)(ulong)uVar3;
      } while (uVar31 != uVar41);
    }
  }
  lVar38 = 0;
  pbVar35 = abStack_9f0;
  do {
    lVar37 = 0;
    lVar33 = *(long *)(lVar28 + (ulong)((uint)param_2 & 0x1c) * 8 + lVar38 * 8) +
             (param_3 & 0xfffffff8) * 0x40 + (param_4 & 0xfffffffc) * 2;
    do {
      lVar19 = 0;
      pbVar36 = pbVar35;
      do {
        pbVar35 = pbVar36 + 1;
        *(ushort *)(lVar33 + lVar19) = *pbVar36 + 1;
        lVar19 = lVar19 + 2;
        pbVar36 = pbVar35;
      } while (lVar19 != 8);
      lVar37 = lVar37 + 1;
      lVar33 = lVar33 + 0x40;
    } while (lVar37 != 8);
    lVar38 = lVar38 + 1;
  } while (lVar38 != 4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar15;
  }
  ___stack_chk_fail();
  if (puVar15 != param_2) {
    puVar43 = puVar15;
    func_0x0001081f64e4(*(undefined4 *)(puVar15 + 0x13c),*(undefined4 *)(param_2 + 0x134));
    if (((ulong)puVar43 & 1) != 0) {
      return (undefined *)0x0;
    }
    puVar43 = puVar15 + 0x130;
    FUN_1081dd7cc(puVar43,param_2 + 0x130);
    if ((int)puVar43 == 0) {
      return (undefined *)0x1;
    }
  }
  puVar43 = puVar15 + 8;
  do {
    puVar42 = param_2 + 8;
    if ((puVar15 == param_2) &&
       (puVar42 = *(undefined **)(puVar43 + 0xd8), puVar42 == (undefined *)0x0)) {
      return (undefined *)0x1;
    }
    do {
      puVar16 = puVar43 + 0xf0;
      FUN_1081dd7cc(puVar16,puVar42 + 0xf0);
      if ((int)puVar16 == 0) goto LAB_1081dd794;
      uStack_aa4 = 0;
      _bzero(adStack_c68,0x1c0);
      uStack_aa8 = 0;
      uStack_aa2 = 0x10000;
      puVar16 = puVar43;
      FUN_1081dd834();
      uVar5 = (int)puVar16 + 1;
      bVar14 = 4 < uVar5;
      bVar13 = uVar5 == 5;
      switch(uVar5) {
      case 0:
        FUN_1081ddc0c();
        if (!bVar14 || bVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(&UNK_10df09662 + extraout_x8 * 2) * 4 + 0x1081dd0d4))();
          return puVar16;
        }
        goto code_r0x0001081dd24c;
      case 1:
        FUN_1081ddc0c();
        if (!bVar14 || bVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10df0965c)[extraout_x8_03] * 4 + 0x1081dd1dc))();
          return puVar16;
        }
code_r0x0001081dd24c:
        bVar13 = true;
        puVar29 = auStack_b10;
        puVar40 = auStack_b78;
        goto LAB_1081dd5d4;
      case 2:
        FUN_1081ddc0c();
        if (!bVar14 || bVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10df09656)[extraout_x8_01] * 4 + 0x1081dd15c))();
          return puVar16;
        }
        break;
      case 3:
        FUN_1081ddc0c();
        if (!bVar14 || bVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10df09650)[extraout_x8_02] * 4 + 0x1081dd19c))();
          return puVar16;
        }
        break;
      case 4:
        FUN_1081ddc0c();
        if (!bVar14 || bVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10df0964a)[extraout_x8_00] * 4 + 0x1081dd114))();
          return puVar16;
        }
        break;
      case 5:
        FUN_1081ddc0c();
        if (!bVar14 || bVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(&UNK_10df0963e + extraout_x8_04 * 2) * 4 + 0x1081dd038))();
          return puVar16;
        }
      }
      bVar13 = false;
      puVar29 = auStack_b78;
      puVar40 = auStack_b10;
LAB_1081dd5d4:
      lVar38 = 0xffffffff;
      for (lVar28 = 0; lVar28 != 0; lVar28 = lVar28 + 1) {
        fVar45 = (float)adStack_c68[lVar28 * 2];
        fVar46 = (float)adStack_c68[lVar28 * 2 + 1];
        auStack_cf8[0] = CONCAT44(fVar46,fVar45);
        fVar47 = (float)(int)adStack_c68[lVar28 * 2 + 1];
        bVar14 = false;
        if (((float)(int)adStack_c68[lVar28 * 2] == fVar45) &&
           (bVar14 = false, !NAN(fVar47) && !NAN(fVar46))) {
          bVar14 = fVar47 == fVar46;
        }
        puVar17 = puVar43;
        puVar16 = puVar42;
        if (bVar14) {
          FUN_1081e9d90((int)*(undefined8 *)(puVar29 + lVar28 * 8),puVar43,auStack_cf8);
          FUN_1081e9d90((int)*(undefined8 *)(puVar40 + lVar28 * 8),puVar42,auStack_cf8);
        }
        else {
          FUN_1081e9d48();
          FUN_1081e9d48((int)*(undefined8 *)(puVar40 + lVar28 * 8));
        }
        puVar18 = puVar17;
        func_0x0001081ec468(puVar17,puVar16);
        if (((ulong)puVar18 & 1) == 0) {
          puVar18 = puVar17;
          func_0x0001081ddb68(puVar17,puVar16);
          if (puVar18 != (undefined *)0x0) {
            FUN_1081ec5b0(*(undefined8 *)(puVar17 + 0x10),*(undefined8 *)(puVar16 + 0x10));
            uVar30 = *(undefined8 *)(puVar17 + 0x18);
            *(undefined **)(puVar17 + 0x18) = puVar16;
            *(undefined8 *)(puVar18 + 0x18) = uVar30;
          }
          bVar14 = false;
          if ((*(float *)(puVar17 + 8) == *(float *)(puVar16 + 8)) &&
             (bVar14 = false, !NAN(*(float *)(puVar17 + 0xc)) && !NAN(*(float *)(puVar16 + 0xc)))) {
            bVar14 = *(float *)(puVar17 + 0xc) == *(float *)(puVar16 + 0xc);
          }
          if (!bVar14) {
            *(undefined1 *)(*(long *)(puVar17 + 0x10) + 0x4c) = 0;
            *(undefined1 *)(*(long *)(puVar16 + 0x10) + 0x4c) = 0;
          }
        }
        puVar20 = puStack_d00;
        puVar18 = unaff_x23;
        if ((((ushort)uStack_aa8 >> (ulong)((uint)lVar28 & 0x1f) & 1) != 0) &&
           (iVar39 = (int)lVar38, lVar38 = lVar28, puVar20 = puVar17, puVar18 = puVar16, -1 < iVar39
           )) {
          lVar38 = *(long *)(puStack_d00 + 0x10);
          puVar18 = unaff_x23;
          if ((lVar38 != *(long *)(puVar17 + 0x10)) &&
             (*(long *)(unaff_x23 + 0x10) != *(long *)(puVar16 + 0x10))) {
            if (bVar13) {
              puVar20 = puVar16;
              lVar38 = *(long *)(unaff_x23 + 0x10);
              puVar18 = puStack_d00;
              puVar16 = puVar17;
              puStack_d00 = unaff_x23;
            }
            if (((*(byte *)(lVar38 + 0x20) & 1) == 0) &&
               ((*(byte *)(*(long *)(puVar20 + 0x10) + 0x20) & 1) == 0)) {
              FUN_1081e547c(param_3,puStack_d00,puVar20,puVar18,puVar16);
            }
          }
          lVar38 = 0xffffffff;
          puVar20 = puStack_d00;
        }
        unaff_x23 = puVar18;
        puStack_d00 = puVar20;
      }
LAB_1081dd794:
      puVar42 = *(undefined **)(puVar42 + 0xd8);
    } while (puVar42 != (undefined *)0x0);
    puVar43 = *(undefined **)(puVar43 + 0xd8);
    if (puVar43 == (undefined *)0x0) {
      return (undefined *)0x1;
    }
  } while( true );
}



/* Entry: 1081dcf94; end: 1081dd7cb;  */

ulong FUN_1081dcf94(ulong param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined1 *puVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong unaff_x23;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong uStack_2e0;
  undefined8 auStack_2d8 [18];
  double adStack_248 [30];
  undefined1 auStack_158 [104];
  undefined1 auStack_f0 [104];
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined4 uStack_82;
  
  if (param_1 != param_2) {
    uVar14 = param_1;
    func_0x0001081f64e4(*(undefined4 *)(param_1 + 0x13c),*(undefined4 *)(param_2 + 0x134));
    if ((uVar14 & 1) != 0) {
      return 0;
    }
    lVar15 = param_1 + 0x130;
    FUN_1081dd7cc(lVar15,param_2 + 0x130);
    if ((int)lVar15 == 0) {
      return 1;
    }
  }
  uVar14 = param_1 + 8;
  do {
    uVar13 = param_2 + 8;
    if ((param_1 == param_2) && (uVar13 = *(ulong *)(uVar14 + 0xd8), uVar13 == 0)) {
      return 1;
    }
    do {
      lVar15 = uVar14 + 0xf0;
      FUN_1081dd7cc(lVar15,uVar13 + 0xf0);
      if ((int)lVar15 == 0) goto LAB_1081dd794;
      uStack_84 = 0;
      _bzero(adStack_248,0x1c0);
      uStack_88 = 0;
      uStack_82 = 0x10000;
      uVar4 = uVar14;
      FUN_1081dd834();
      uVar1 = (int)uVar4 + 1;
      bVar2 = 4 < uVar1;
      bVar3 = uVar1 == 5;
      switch(uVar1) {
      case 0:
        FUN_1081ddc0c();
        if (!bVar2 || bVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(&UNK_10df09662 + extraout_x8 * 2) * 4 + 0x1081dd0d4))();
          return uVar4;
        }
        goto code_r0x0001081dd24c;
      case 1:
        FUN_1081ddc0c();
        if (!bVar2 || bVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10df0965c)[extraout_x8_03] * 4 + 0x1081dd1dc))();
          return uVar4;
        }
code_r0x0001081dd24c:
        bVar3 = true;
        puVar8 = auStack_f0;
        puVar12 = auStack_158;
        goto LAB_1081dd5d4;
      case 2:
        FUN_1081ddc0c();
        if (!bVar2 || bVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10df09656)[extraout_x8_01] * 4 + 0x1081dd15c))();
          return uVar4;
        }
        break;
      case 3:
        FUN_1081ddc0c();
        if (!bVar2 || bVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10df09650)[extraout_x8_02] * 4 + 0x1081dd19c))();
          return uVar4;
        }
        break;
      case 4:
        FUN_1081ddc0c();
        if (!bVar2 || bVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10df0964a)[extraout_x8_00] * 4 + 0x1081dd114))();
          return uVar4;
        }
        break;
      case 5:
        FUN_1081ddc0c();
        if (!bVar2 || bVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001081dd218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(&UNK_10df0963e + extraout_x8_04 * 2) * 4 + 0x1081dd038))();
          return uVar4;
        }
      }
      bVar3 = false;
      puVar8 = auStack_158;
      puVar12 = auStack_f0;
LAB_1081dd5d4:
      lVar11 = 0xffffffff;
      for (lVar15 = 0; lVar15 != 0; lVar15 = lVar15 + 1) {
        fVar16 = (float)adStack_248[lVar15 * 2];
        fVar17 = (float)adStack_248[lVar15 * 2 + 1];
        auStack_2d8[0] = CONCAT44(fVar17,fVar16);
        fVar18 = (float)(int)adStack_248[lVar15 * 2 + 1];
        bVar2 = false;
        if (((float)(int)adStack_248[lVar15 * 2] == fVar16) &&
           (bVar2 = false, !NAN(fVar18) && !NAN(fVar17))) {
          bVar2 = fVar18 == fVar17;
        }
        uVar5 = uVar14;
        uVar4 = uVar13;
        if (bVar2) {
          FUN_1081e9d90((int)*(undefined8 *)(puVar8 + lVar15 * 8),uVar14,auStack_2d8);
          FUN_1081e9d90((int)*(undefined8 *)(puVar12 + lVar15 * 8),uVar13,auStack_2d8);
        }
        else {
          FUN_1081e9d48();
          FUN_1081e9d48((int)*(undefined8 *)(puVar12 + lVar15 * 8));
        }
        uVar6 = uVar5;
        func_0x0001081ec468(uVar5,uVar4);
        if ((uVar6 & 1) == 0) {
          uVar6 = uVar5;
          func_0x0001081ddb68(uVar5,uVar4);
          if (uVar6 != 0) {
            FUN_1081ec5b0(*(undefined8 *)(uVar5 + 0x10),*(undefined8 *)(uVar4 + 0x10));
            uVar9 = *(undefined8 *)(uVar5 + 0x18);
            *(ulong *)(uVar5 + 0x18) = uVar4;
            *(undefined8 *)(uVar6 + 0x18) = uVar9;
          }
          bVar2 = false;
          if ((*(float *)(uVar5 + 8) == *(float *)(uVar4 + 8)) &&
             (bVar2 = false, !NAN(*(float *)(uVar5 + 0xc)) && !NAN(*(float *)(uVar4 + 0xc)))) {
            bVar2 = *(float *)(uVar5 + 0xc) == *(float *)(uVar4 + 0xc);
          }
          if (!bVar2) {
            *(undefined1 *)(*(long *)(uVar5 + 0x10) + 0x4c) = 0;
            *(undefined1 *)(*(long *)(uVar4 + 0x10) + 0x4c) = 0;
          }
        }
        uVar7 = uStack_2e0;
        uVar6 = unaff_x23;
        if ((((ushort)uStack_88 >> (ulong)((uint)lVar15 & 0x1f) & 1) != 0) &&
           (iVar10 = (int)lVar11, lVar11 = lVar15, uVar7 = uVar5, uVar6 = uVar4, -1 < iVar10)) {
          lVar11 = *(long *)(uStack_2e0 + 0x10);
          uVar6 = unaff_x23;
          if ((lVar11 != *(long *)(uVar5 + 0x10)) &&
             (*(long *)(unaff_x23 + 0x10) != *(long *)(uVar4 + 0x10))) {
            if (bVar3) {
              uVar7 = uVar4;
              lVar11 = *(long *)(unaff_x23 + 0x10);
              uVar6 = uStack_2e0;
              uVar4 = uVar5;
              uStack_2e0 = unaff_x23;
            }
            if (((*(byte *)(lVar11 + 0x20) & 1) == 0) &&
               ((*(byte *)(*(long *)(uVar7 + 0x10) + 0x20) & 1) == 0)) {
              FUN_1081e547c(param_3,uStack_2e0,uVar7,uVar6,uVar4);
            }
          }
          lVar11 = 0xffffffff;
          uVar7 = uStack_2e0;
        }
        unaff_x23 = uVar6;
        uStack_2e0 = uVar7;
      }
LAB_1081dd794:
      uVar13 = *(ulong *)(uVar13 + 0xd8);
    } while (uVar13 != 0);
    uVar14 = *(ulong *)(uVar14 + 0xd8);
    if (uVar14 == 0) {
      return 1;
    }
  } while( true );
}



/* Entry: 1081dd7cc; end: 1081dd833;  */

/* WARNING: Possible PIC construction at 0x0001081dd7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001081dd808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001081dd7ec) */
/* WARNING: Removing unreachable block (ram,0x0001081dd7f0) */
/* WARNING: Removing unreachable block (ram,0x0001081dd800) */
/* WARNING: Removing unreachable block (ram,0x0001081dd80c) */
/* WARNING: Removing unreachable block (ram,0x0001081dd824) */
/* WARNING: Removing unreachable block (ram,0x0001081dd810) */

bool FUN_1081dd7cc(float *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int extraout_w8;
  int extraout_w9;
  float fVar4;
  
  iVar3 = 0x10;
  fVar4 = ABS(*(float *)(param_2 + 8));
  bVar1 = false;
  bVar2 = true;
  if (ABS(*param_1) <= 9.536743e-07) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 == 9.536743e-07;
      bVar2 = 9.536743e-07 <= fVar4;
    }
  }
  if (bVar2 && !bVar1) {
    func_0x0001081f6588(0x10,0x1081dd7ec);
    return extraout_w8 < extraout_w9 + iVar3;
  }
  return *param_1 < *(float *)(param_2 + 8) + 1.9073486e-06;
}



/* Entry: 1081dd834; end: 1081dd86f;  */

uint FUN_1081dd834(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10c);
  if (uVar1 == 1) {
    if (*(float *)(param_1 + 0xf4) == *(float *)(param_1 + 0xfc)) {
      return 0xffffffff;
    }
    uVar1 = (uint)(*(float *)(param_1 + 0xf0) != *(float *)(param_1 + 0xf8));
  }
  return uVar1;
}



/* Entry: 1081dd870; end: 1081dd88f;  */

void FUN_1081dd870(void)

{
  func_0x0001081ddc34();
  FUN_1081e0450();
  return;
}



/* Entry: 1081dd890; end: 1081dd953;  */

void FUN_1081dd890(void)

{
  func_0x0001081ddbf0();
  func_0x0001081ddb24();
  func_0x0001081ddb98(2);
  FUN_1081e0968();
  return;
}



/* Entry: 1081dd954; end: 1081dd973;  */

void FUN_1081dd954(void)

{
  func_0x0001081ddc34();
  FUN_1081e0644();
  return;
}



/* Entry: 1081dd974; end: 1081dda37;  */

void FUN_1081dd974(void)

{
  func_0x0001081ddbf0();
  func_0x0001081ddb24();
  func_0x0001081ddb98(2);
  FUN_1081e0a40();
  return;
}



/* Entry: 1081dda38; end: 1081dda7b;  */

void FUN_1081dda38(undefined8 param_1)

{
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [48];
  
  FUN_1081ddb24(auStack_50);
  func_0x0001081ddc8c();
  FUN_1081e0b18(param_1,auStack_50,auStack_70);
  return;
}



/* Entry: 1081dda7c; end: 1081ddad7;  */

void FUN_1081dda7c(undefined4 param_1,long param_2)

{
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [48];
  undefined4 uStack_38;
  
  FUN_1081ddb24(auStack_68);
  uStack_38 = param_1;
  func_0x0001081ddc8c();
  *(undefined1 *)(param_2 + 0x1c7) = 3;
  FUN_1081dde94(param_2,auStack_68,auStack_90);
  return;
}



/* Entry: 1081ddad8; end: 1081ddb23;  */

void FUN_1081ddad8(long param_1)

{
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [64];
  
  func_0x0001081ddb44(auStack_60);
  func_0x0001081ddc8c();
  *(undefined1 *)(param_1 + 0x1c7) = 3;
  FUN_1081def98(param_1,auStack_60,auStack_80);
  return;
}



/* Entry: 1081ddb24; end: 1081ddc0b;  */

void FUN_1081ddb24(double *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  param_1[1] = (double)(float)((ulong)uVar1 >> 0x20);
  *param_1 = (double)(float)uVar1;
  param_1[3] = (double)(float)((ulong)uVar2 >> 0x20);
  param_1[2] = (double)(float)uVar2;
  uVar1 = param_2[2];
  param_1[5] = (double)(float)((ulong)uVar1 >> 0x20);
  param_1[4] = (double)(float)uVar1;
  return;
}



/* Entry: 1081ddc0c; end: 1081ddc27;  */

void FUN_1081ddc0c(void)

{
  FUN_1081dd834();
  return;
}



/* Entry: 1081ddc28; end: 1081ddcb3;  */

undefined1 * FUN_1081ddc28(void)

{
  return &stack0x000000e8;
}



/* Entry: 1081ddcb4; end: 1081ddce3;  */

void FUN_1081ddcb4(undefined8 param_1)

{
  func_0x0001081debf8(param_1,param_1);
  FUN_1081ddce4();
  return;
}


