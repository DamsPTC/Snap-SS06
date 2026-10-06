/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10985bdf4; end: 10985c107;  */

void FUN_10985bdf4(long param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long alStack_110 [10];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long alStack_98 [4];
  int iStack_78;
  int iStack_74;
  undefined1 uStack_70;
  
  alStack_98[3] = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = 1;
  iStack_78 = param_2;
  iStack_74 = param_2;
  FUN_10985c108(alStack_98,param_1,param_2);
  lStack_a8 = 0;
  lStack_a0 = 0;
  if (param_2 == -1) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    lVar10 = 0;
    uVar8 = 0;
    iVar2 = param_2 + -2;
    if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
      iVar2 = param_2 + 1;
    }
    iVar3 = 2;
    if (0x55555555 < (uint)(param_2 * -0x55555555)) {
      iVar3 = -1;
    }
    iVar3 = iVar3 + param_2;
    do {
      iVar7 = iVar3;
      iVar4 = iVar2;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar4 = param_2 + -2;
        if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
          iVar4 = param_2 + 1;
        }
        if ((uint)(param_2 * -0x55555555) < 0x55555556) {
          iVar7 = param_2 + 2;
        }
        else {
          iVar7 = param_2 + -1;
        }
      }
      FUN_10985c108(alStack_110 + 9,param_1,iVar4);
      FUN_10985c108(alStack_110 + 6,param_1,iVar7);
      lVar5 = 0;
      alStack_110[3] = 0;
      alStack_110[4] = 0;
      alStack_110[5] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5 + 0x18) =
             *(long *)((long)alStack_110 + lVar5 + 0x48) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      lVar5 = 0;
      alStack_110[0] = 0;
      alStack_110[1] = 0;
      alStack_110[2] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5) =
             *(long *)((long)alStack_110 + lVar5 + 0x30) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      uVar8 = (alStack_110[2] * alStack_110[4] - alStack_110[1] * alStack_110[5]) + uVar8;
      lVar10 = (alStack_110[0] * alStack_110[5] - alStack_110[3] * alStack_110[2]) + lVar10;
      lVar9 = (alStack_110[3] * alStack_110[1] - alStack_110[0] * alStack_110[4]) + lVar9;
      FUN_10985a764(alStack_98 + 3);
      param_2 = iStack_74;
    } while (iStack_74 != -1);
    lStack_a8 = lVar10;
    lStack_a0 = lVar9;
  }
  uStack_b0 = uVar8;
  if (*(int *)(param_1 + 0x38) == 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) goto LAB_10985c0d4;
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if ((long)(int)uVar8 < 0x20000001) goto LAB_10985c0d4;
    lVar10 = 0;
    uVar8 = (ulong)(long)(int)uVar8 >> 0x1d;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)uVar8;
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  else {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) {
        uVar8 = 0x7fffffffffffffff;
        goto LAB_10985c094;
      }
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if (uVar8 < 0x20000001) goto LAB_10985c0d4;
LAB_10985c094:
    lVar10 = 0;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 >> 0x1d != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)(uVar8 >> 0x1d);
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  lStack_a8._0_4_ = (undefined4)uStack_c0;
  uStack_b0 = alStack_110[9];
  lStack_a0._0_4_ = (undefined4)uStack_b8;
LAB_10985c0d4:
  *param_3 = CONCAT44((undefined4)lStack_a8,(int)uStack_b0);
  *(undefined4 *)(param_3 + 1) = (undefined4)lStack_a0;
  return;
}



/* Entry: 10985c108; end: 10985c173;  */

undefined8 * FUN_10985c108(undefined8 *param_1,long param_2,long param_3)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  double dVar15;
  float fVar16;
  
  uVar11 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar11 = (ulong)*(uint *)(**(long **)(param_2 + 0x20) + param_3 * 4);
  }
  lVar12 = **(long **)(param_2 + 0x28);
  if ((ulong)((*(long **)(param_2 + 0x28))[1] - lVar12 >> 2) <= uVar11) {
    FUN_1092e2168();
    return param_1;
  }
  puVar4 = *(undefined8 **)(param_2 + 8);
  uVar9 = *(uint *)(*(long *)(param_2 + 0x10) + (long)*(int *)(lVar12 + uVar11 * 4) * 4);
  if ((*(byte *)((long)puVar4 + 100) & 1) == 0) {
    uVar9 = *(uint *)(puVar4[9] + (ulong)uVar9 * 4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar11 = (ulong)uVar9;
  bVar8 = *(byte *)(puVar4 + 3);
  if (param_1 != (undefined8 *)0x0) {
    switch(*(undefined4 *)((long)puVar4 + 0x1c)) {
    case 1:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        uVar10 = 0;
        lVar12 = puVar4[5];
        lVar14 = puVar4[6];
        lVar3 = *(long *)*puVar4;
        pcVar5 = (char *)((long *)*puVar4)[1];
        do {
          pcVar1 = (char *)(lVar3 + lVar12 * uVar11 + lVar14 + uVar10);
          if (pcVar5 <= pcVar1) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (long)*pcVar1;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 2:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        uVar10 = 0;
        lVar12 = puVar4[5];
        lVar14 = puVar4[6];
        lVar3 = *(long *)*puVar4;
        pbVar7 = (byte *)((long *)*puVar4)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar12 * uVar11 + lVar14 + uVar10);
          if (pbVar7 <= pbVar2) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (ulong)*pbVar2;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 3:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (long)*(short *)(lVar3 + uVar10 * 2);
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 2;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 4:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (ulong)*(ushort *)(lVar3 + uVar10 * 2);
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 2;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 5:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (long)*(int *)(lVar3 + uVar10 * 4);
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 4;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 6:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (ulong)*(uint *)(lVar3 + uVar10 * 4);
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 4;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 7:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = *(undefined8 *)(lVar3 + uVar10 * 8);
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 8;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 8:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if ((uVar6 <= (ulong)(lVar3 + lVar12)) ||
             (lVar14 = *(long *)(lVar3 + uVar10 * 8), lVar14 < 0)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = lVar14;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 8;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 9:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          fVar16 = *(float *)(lVar3 + uVar10 * 4);
          if (9.223372e+18 <= fVar16) {
            return (undefined8 *)0x0;
          }
          if ((*(byte *)(puVar4 + 4) & 1) != 0) {
            return (undefined8 *)0x0;
          }
          if (fVar16 < -9.223372e+18) {
            return (undefined8 *)0x0;
          }
          if (0x7f7fffff < (uint)ABS(fVar16)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (long)fVar16;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 4;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 10:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          dVar15 = *(double *)(lVar3 + uVar10 * 8);
          if (9.223372036854776e+18 <= dVar15) {
            return (undefined8 *)0x0;
          }
          if ((*(byte *)(puVar4 + 4) & 1) != 0) {
            return (undefined8 *)0x0;
          }
          if (dVar15 < -9.223372036854776e+18) {
            return (undefined8 *)0x0;
          }
          if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (long)dVar15;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 8;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 0xb:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        uVar10 = 0;
        lVar12 = puVar4[5];
        lVar14 = puVar4[6];
        lVar3 = *(long *)*puVar4;
        pbVar7 = (byte *)((long *)*puVar4)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar12 * uVar11 + lVar14 + uVar10);
          if (pbVar7 <= pbVar2) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (ulong)*pbVar2;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 10985c174; end: 10985c18b;  */

void FUN_10985c174(void)

{
  return;
}



/* Entry: 10985c18c; end: 10985c283;  */

undefined8
FUN_10985c18c(long param_1,undefined4 *param_2,undefined8 *param_3,int param_4,ulong param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)(-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2)
  ;
  iVar2 = (int)param_5;
  if (iVar2 < 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  _bzero();
  uStack_70 = *puVar3;
  FUN_10985b864(&uStack_68,param_1 + 0x10,&uStack_70,*param_2,param_2[1]);
  *param_3 = uStack_68;
  if (iVar2 < param_4) {
    lVar4 = (long)iVar2;
    lVar5 = lVar4;
    do {
      puVar1 = (undefined8 *)((long)param_3 + lVar4 * 4);
      uStack_70 = *param_3;
      FUN_10985b864(&uStack_68,param_1 + 0x10,&uStack_70,param_2[lVar5],(param_2 + lVar5)[1]);
      *puVar1 = uStack_68;
      lVar5 = lVar5 + lVar4;
      param_3 = puVar1;
    } while (lVar5 < param_4);
  }
  __ZdaPv(puVar3);
  return 1;
}



/* Entry: 10985c284; end: 10985c33b;  */

void FUN_10985c284(void)

{
  return;
}



/* Entry: 10985c33c; end: 10985c3b3;  */

undefined8 FUN_10985c33c(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uStack_24;
  
  iVar3 = (int)param_1 + 0x10;
  func_0x00010985c658();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar1 = param_2[2] + 1;
    if (param_2[1] < lVar1) {
      return 0;
    }
    bVar2 = *(byte *)(*param_2 + param_2[2]);
    param_2[2] = lVar1;
    if (1 < bVar2) {
      return 0;
    }
    *(uint *)(param_1 + 0x80) = (uint)bVar2;
  }
  if (param_2[1] < param_2[2] + 1) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(*param_2 + param_2[2]);
  lVar5 = param_2[2];
  lVar1 = lVar5 + 1;
  param_2[2] = lVar1;
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar6 = param_2[1];
    lVar5 = lVar5 + 5;
    if (lVar6 < lVar5) {
      return 0;
    }
    uStack_24 = *(uint *)(*param_2 + lVar1);
    param_2[2] = lVar5;
  }
  else {
    uVar4 = 1;
    FUN_10985d9e4(1,&uStack_24,param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar6 = param_2[1];
    lVar5 = param_2[2];
  }
  if (lVar6 - lVar5 < (long)(ulong)uStack_24) {
    return 0;
  }
  uVar7 = (ulong)uStack_24;
  if ((int)uStack_24 < 1) {
    return 0;
  }
  lVar1 = *param_2 + lVar5;
  *(long *)(param_1 + 0xa0) = lVar1;
  uVar8 = uStack_24 - 1;
  if (*(byte *)(lVar1 + (ulong)uVar8) < 0x40) {
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar8 = *(byte *)(lVar1 + (ulong)uVar8) & 0x3f;
  }
  else {
    bVar2 = *(byte *)(lVar1 + (ulong)uVar8) >> 6;
    if (bVar2 == 2) {
      if (uStack_24 < 3) {
        return 0;
      }
      *(uint *)(param_1 + 0xa8) = uStack_24 - 3;
      lVar1 = lVar1 + uVar7;
      uVar8 = (*(byte *)(lVar1 + -1) & 0x3f) << 0x10 | (uint)*(byte *)(lVar1 + -2) << 8;
      *(uint *)(param_1 + 0xac) = (uVar8 | *(byte *)(lVar1 + -3)) + 0x1000;
      if (0xfe < uVar8 >> 0xc) {
        return 0;
      }
      goto LAB_10985d8e4;
    }
    if (bVar2 != 1) {
      return 0;
    }
    if (uStack_24 == 1) {
      return 0;
    }
    *(uint *)(param_1 + 0xa8) = uStack_24 - 2;
    uVar8 = (uint)*(byte *)(lVar1 + uVar7 + -2) | (*(byte *)(lVar1 + uVar7 + -1) & 0x3f) << 8;
  }
  *(uint *)(param_1 + 0xac) = uVar8 + 0x1000;
LAB_10985d8e4:
  param_2[2] = lVar5 + uVar7;
  return 1;
}



/* Entry: 10985c3b4; end: 10985c637;  */

undefined8
FUN_10985c3b4(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lStack_78;
  int iStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_58;
  int iStack_54;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 - 2 < 0x1d) {
    uVar3 = -1 << (ulong)(uVar2 & 0x1f);
    *(uint *)(param_1 + 0x88) = uVar2;
    *(uint *)(param_1 + 0x8c) = ~uVar3;
    uVar2 = -uVar3 - 2;
    *(uint *)(param_1 + 0x90) = uVar2;
    *(float *)(param_1 + 0x94) = 2.0 / (float)uVar2;
    *(uint *)(param_1 + 0x98) = uVar2 >> 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_6;
  uVar5 = (*(long **)(param_1 + 0x40))[1] - **(long **)(param_1 + 0x40);
  iStack_60 = 0;
  uStack_68 = 0;
  if (0 < (int)(uVar5 >> 2)) {
    uVar10 = 0;
    do {
      lVar6 = **(long **)(param_1 + 0x40);
      if ((ulong)((*(long **)(param_1 + 0x40))[1] - lVar6 >> 2) <= uVar10) {
        FUN_109853c48();
        return 0;
      }
      FUN_10985c70c(param_1 + 0x48,*(undefined4 *)(lVar6 + uVar10 * 4),&uStack_68);
      func_0x0001098578b4(param_1 + 0x88,&uStack_68);
      iVar4 = (int)param_1 + 0xa0;
      FUN_10985d980();
      if (iVar4 != 0) {
        lVar6 = 0;
        iStack_70 = 0;
        lStack_78 = 0;
        do {
          *(int *)((long)&lStack_78 + lVar6) = -*(int *)((long)&uStack_68 + lVar6);
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0xc);
        uStack_68 = lStack_78;
        iStack_60 = iStack_70;
      }
      if ((int)uStack_68 < 0) {
        if (uStack_68 < 0) {
          iVar4 = -iStack_60;
          if (-1 < iStack_60) {
            iVar4 = iStack_60;
          }
        }
        else {
          iVar4 = -iStack_60;
          if (-1 < iStack_60) {
            iVar4 = iStack_60;
          }
          iVar4 = *(int *)(param_1 + 0x90) - iVar4;
        }
        if (iStack_60 < 0) {
          iVar7 = -uStack_68._4_4_;
          if (-1 < uStack_68) {
            iVar7 = uStack_68._4_4_;
          }
        }
        else {
          iVar7 = -uStack_68._4_4_;
          if (-1 < uStack_68) {
            iVar7 = uStack_68._4_4_;
          }
          iVar7 = *(int *)(param_1 + 0x90) - iVar7;
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x98) + uStack_68._4_4_;
        iVar7 = iStack_60 + *(int *)(param_1 + 0x98);
      }
      if (iVar7 == 0 && iVar4 == 0) {
        iStack_58 = *(int *)(param_1 + 0x90);
        iStack_54 = *(int *)(param_1 + 0x90);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x90);
        if (iVar4 == 0) {
          iStack_58 = iVar7;
          iStack_54 = iVar7;
          if (iVar8 != iVar7) {
            iVar9 = *(int *)(param_1 + 0x98);
            if (iVar7 <= iVar9) {
              if (iVar8 == 0) goto LAB_10985c5a4;
              goto LAB_10985c5d4;
            }
            iVar4 = 0;
LAB_10985c5c4:
            iStack_58 = iVar4;
            iStack_54 = iVar9 * 2 - iVar7;
          }
        }
        else if ((iVar7 != 0) || (iStack_58 = iVar4, iStack_54 = iVar4, iVar8 != iVar4)) {
          if (iVar8 == iVar4) {
            iVar9 = *(int *)(param_1 + 0x98);
LAB_10985c5a4:
            iVar8 = iVar4;
            if (iVar7 < iVar9) goto LAB_10985c5c4;
          }
LAB_10985c5d4:
          if ((iVar8 == iVar7) && (iVar4 < *(int *)(param_1 + 0x98))) {
            iStack_58 = *(int *)(param_1 + 0x98) * 2 - iVar4;
            iStack_54 = iVar7;
          }
          else {
            iStack_58 = iVar4;
            iStack_54 = iVar7;
            if (iVar7 == 0) {
              iStack_54 = 0;
              if (*(int *)(param_1 + 0x98) < iVar4) {
                iStack_58 = *(int *)(param_1 + 0x98) * 2 - iVar4;
              }
            }
          }
        }
      }
      puVar1 = (undefined4 *)(param_2 + uVar10 * 8);
      FUN_10985ca7c(&lStack_78,(uint *)(param_1 + 0x10),&iStack_58,*puVar1,puVar1[1]);
      *(long *)(param_3 + uVar10 * 8) = lStack_78;
      uVar10 = uVar10 + 1;
    } while (uVar10 != (uVar5 >> 2 & 0x7fffffff));
  }
  return 1;
}



/* Entry: 10985c638; end: 10985c70b;  */

undefined8 FUN_10985c638(void)

{
  return 0;
}



/* Entry: 10985c70c; end: 10985ca1f;  */

void FUN_10985c70c(long param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long alStack_110 [10];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long alStack_98 [4];
  int iStack_78;
  int iStack_74;
  undefined1 uStack_70;
  
  alStack_98[3] = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = 1;
  iStack_78 = param_2;
  iStack_74 = param_2;
  FUN_10985ca20(alStack_98,param_1,param_2);
  lStack_a8 = 0;
  lStack_a0 = 0;
  if (param_2 == -1) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    lVar10 = 0;
    uVar8 = 0;
    iVar2 = param_2 + -2;
    if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
      iVar2 = param_2 + 1;
    }
    iVar3 = 2;
    if (0x55555555 < (uint)(param_2 * -0x55555555)) {
      iVar3 = -1;
    }
    iVar3 = iVar3 + param_2;
    do {
      iVar7 = iVar3;
      iVar4 = iVar2;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar4 = param_2 + -2;
        if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
          iVar4 = param_2 + 1;
        }
        if ((uint)(param_2 * -0x55555555) < 0x55555556) {
          iVar7 = param_2 + 2;
        }
        else {
          iVar7 = param_2 + -1;
        }
      }
      FUN_10985ca20(alStack_110 + 9,param_1,iVar4);
      FUN_10985ca20(alStack_110 + 6,param_1,iVar7);
      lVar5 = 0;
      alStack_110[3] = 0;
      alStack_110[4] = 0;
      alStack_110[5] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5 + 0x18) =
             *(long *)((long)alStack_110 + lVar5 + 0x48) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      lVar5 = 0;
      alStack_110[0] = 0;
      alStack_110[1] = 0;
      alStack_110[2] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5) =
             *(long *)((long)alStack_110 + lVar5 + 0x30) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      uVar8 = (alStack_110[2] * alStack_110[4] - alStack_110[1] * alStack_110[5]) + uVar8;
      lVar10 = (alStack_110[0] * alStack_110[5] - alStack_110[3] * alStack_110[2]) + lVar10;
      lVar9 = (alStack_110[3] * alStack_110[1] - alStack_110[0] * alStack_110[4]) + lVar9;
      FUN_1098576b4(alStack_98 + 3);
      param_2 = iStack_74;
    } while (iStack_74 != -1);
    lStack_a8 = lVar10;
    lStack_a0 = lVar9;
  }
  uStack_b0 = uVar8;
  if (*(int *)(param_1 + 0x38) == 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) goto LAB_10985c9ec;
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if ((long)(int)uVar8 < 0x20000001) goto LAB_10985c9ec;
    lVar10 = 0;
    uVar8 = (ulong)(long)(int)uVar8 >> 0x1d;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)uVar8;
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  else {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) {
        uVar8 = 0x7fffffffffffffff;
        goto LAB_10985c9ac;
      }
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if (uVar8 < 0x20000001) goto LAB_10985c9ec;
LAB_10985c9ac:
    lVar10 = 0;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 >> 0x1d != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)(uVar8 >> 0x1d);
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  lStack_a8._0_4_ = (undefined4)uStack_c0;
  uStack_b0 = alStack_110[9];
  lStack_a0._0_4_ = (undefined4)uStack_b8;
LAB_10985c9ec:
  *param_3 = CONCAT44((undefined4)lStack_a8,(int)uStack_b0);
  *(undefined4 *)(param_3 + 1) = (undefined4)lStack_a0;
  return;
}



/* Entry: 10985ca20; end: 10985ca7b;  */

ulong * FUN_10985ca20(ulong *param_1,ulong *param_2,ulong *param_3,int param_4,int param_5)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  byte bVar10;
  ulong *puVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  bool bVar23;
  uint *puVar24;
  double dVar25;
  float fVar26;
  
  uVar14 = (ulong)*(uint *)(*(long *)(param_2[4] + 0x38) + (long)param_3 * 4);
  lVar16 = *(long *)param_2[5];
  if (uVar14 < (ulong)(((long *)param_2[5])[1] - lVar16 >> 2)) {
    puVar5 = (undefined8 *)param_2[1];
    uVar12 = *(uint *)(param_2[2] + (long)*(int *)(lVar16 + uVar14 * 4) * 4);
    if ((*(byte *)((long)puVar5 + 100) & 1) == 0) {
      uVar12 = *(uint *)(puVar5[9] + (ulong)uVar12 * 4);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar14 = (ulong)uVar12;
    bVar10 = *(byte *)(puVar5 + 3);
    if (param_1 != (ulong *)0x0) {
      switch(*(undefined4 *)((long)puVar5 + 0x1c)) {
      case 1:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          uVar21 = 0;
          lVar16 = puVar5[5];
          lVar7 = puVar5[6];
          lVar4 = *(long *)*puVar5;
          pcVar6 = (char *)((long *)*puVar5)[1];
          do {
            pcVar1 = (char *)(lVar4 + lVar16 * uVar14 + lVar7 + uVar21);
            if (pcVar6 <= pcVar1) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = (long)*pcVar1;
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      case 2:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          uVar21 = 0;
          lVar16 = puVar5[5];
          lVar7 = puVar5[6];
          lVar4 = *(long *)*puVar5;
          pbVar8 = (byte *)((long *)*puVar5)[1];
          do {
            pbVar2 = (byte *)(lVar4 + lVar16 * uVar14 + lVar7 + uVar21);
            if (pbVar8 <= pbVar2) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = (ulong)*pbVar2;
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      case 3:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          lVar16 = 0;
          uVar21 = 0;
          uVar22 = ((long *)*puVar5)[1];
          lVar4 = *(long *)*puVar5 + puVar5[5] * uVar14 + puVar5[6];
          do {
            if (uVar22 <= (ulong)(lVar4 + lVar16)) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = (long)*(short *)(lVar4 + uVar21 * 2);
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
            lVar16 = lVar16 + 2;
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      case 4:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          lVar16 = 0;
          uVar21 = 0;
          uVar22 = ((long *)*puVar5)[1];
          lVar4 = *(long *)*puVar5 + puVar5[5] * uVar14 + puVar5[6];
          do {
            if (uVar22 <= (ulong)(lVar4 + lVar16)) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = (ulong)*(ushort *)(lVar4 + uVar21 * 2);
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
            lVar16 = lVar16 + 2;
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      case 5:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          lVar16 = 0;
          uVar21 = 0;
          uVar22 = ((long *)*puVar5)[1];
          lVar4 = *(long *)*puVar5 + puVar5[5] * uVar14 + puVar5[6];
          do {
            if (uVar22 <= (ulong)(lVar4 + lVar16)) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = (long)*(int *)(lVar4 + uVar21 * 4);
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
            lVar16 = lVar16 + 4;
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      case 6:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          lVar16 = 0;
          uVar21 = 0;
          uVar22 = ((long *)*puVar5)[1];
          lVar4 = *(long *)*puVar5 + puVar5[5] * uVar14 + puVar5[6];
          do {
            if (uVar22 <= (ulong)(lVar4 + lVar16)) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = (ulong)*(uint *)(lVar4 + uVar21 * 4);
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
            lVar16 = lVar16 + 4;
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      case 7:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          lVar16 = 0;
          uVar21 = 0;
          uVar22 = ((long *)*puVar5)[1];
          lVar4 = *(long *)*puVar5 + puVar5[5] * uVar14 + puVar5[6];
          do {
            if (uVar22 <= (ulong)(lVar4 + lVar16)) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = *(ulong *)(lVar4 + uVar21 * 8);
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
            lVar16 = lVar16 + 8;
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      case 8:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          lVar16 = 0;
          uVar21 = 0;
          uVar22 = ((long *)*puVar5)[1];
          lVar4 = *(long *)*puVar5 + puVar5[5] * uVar14 + puVar5[6];
          do {
            if ((uVar22 <= (ulong)(lVar4 + lVar16)) ||
               (uVar14 = *(ulong *)(lVar4 + uVar21 * 8), (long)uVar14 < 0)) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = uVar14;
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
            lVar16 = lVar16 + 8;
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      case 9:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          lVar16 = 0;
          uVar21 = 0;
          uVar22 = ((long *)*puVar5)[1];
          lVar4 = *(long *)*puVar5 + puVar5[5] * uVar14 + puVar5[6];
          do {
            if (uVar22 <= (ulong)(lVar4 + lVar16)) {
              return (ulong *)0x0;
            }
            fVar26 = *(float *)(lVar4 + uVar21 * 4);
            if (9.223372e+18 <= fVar26) {
              return (ulong *)0x0;
            }
            if ((*(byte *)(puVar5 + 4) & 1) != 0) {
              return (ulong *)0x0;
            }
            if (fVar26 < -9.223372e+18) {
              return (ulong *)0x0;
            }
            if (0x7f7fffff < (uint)ABS(fVar26)) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = (long)fVar26;
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
            lVar16 = lVar16 + 4;
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      case 10:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          lVar16 = 0;
          uVar21 = 0;
          uVar22 = ((long *)*puVar5)[1];
          lVar4 = *(long *)*puVar5 + puVar5[5] * uVar14 + puVar5[6];
          do {
            if (uVar22 <= (ulong)(lVar4 + lVar16)) {
              return (ulong *)0x0;
            }
            dVar25 = *(double *)(lVar4 + uVar21 * 8);
            if (9.223372036854776e+18 <= dVar25) {
              return (ulong *)0x0;
            }
            if ((*(byte *)(puVar5 + 4) & 1) != 0) {
              return (ulong *)0x0;
            }
            if (dVar25 < -9.223372036854776e+18) {
              return (ulong *)0x0;
            }
            if (0x7fefffffffffffff < (ulong)ABS(dVar25)) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = (long)dVar25;
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
            lVar16 = lVar16 + 8;
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      case 0xb:
        uVar12 = (uint)bVar10;
        bVar10 = *(byte *)(puVar5 + 3);
        uVar18 = (uint)bVar10;
        if (uVar12 <= bVar10) {
          uVar18 = uVar12;
        }
        if (uVar18 != 0) {
          uVar21 = 0;
          lVar16 = puVar5[5];
          lVar7 = puVar5[6];
          lVar4 = *(long *)*puVar5;
          pbVar8 = (byte *)((long *)*puVar5)[1];
          do {
            pbVar2 = (byte *)(lVar4 + lVar16 * uVar14 + lVar7 + uVar21);
            if (pbVar8 <= pbVar2) {
              return (ulong *)0x0;
            }
            param_1[uVar21] = (ulong)*pbVar2;
            uVar21 = uVar21 + 1;
            bVar10 = *(byte *)(puVar5 + 3);
            uVar18 = (uint)bVar10;
            if (uVar12 <= bVar10) {
              uVar18 = uVar12;
            }
          } while (uVar21 < uVar18);
        }
        uVar18 = (uint)bVar10;
        if (uVar18 < uVar12) {
          _bzero(param_1 + uVar18,(ulong)(~uVar18 + uVar12) * 8 + 8);
        }
        return (ulong *)0x1;
      }
    }
    return (ulong *)0x0;
  }
  FUN_1092e2168();
  iVar9 = (int)param_2[2];
  uVar12 = (uint)*param_3 - iVar9;
  puVar24 = (uint *)((long)param_3 + 4);
  uVar19 = *puVar24 - iVar9;
  *(uint *)param_3 = uVar12;
  *puVar24 = uVar19;
  uVar18 = -uVar12;
  if (-1 < (int)uVar12) {
    uVar18 = uVar12;
  }
  uVar3 = -uVar19;
  if (-1 < (int)uVar19) {
    uVar3 = uVar19;
  }
  uVar14 = param_2[2];
  puVar11 = param_1;
  if ((uint)uVar14 < uVar3 + uVar18) {
    puVar11 = param_2;
    FUN_10985b980(param_2,param_3,puVar24);
    uVar12 = (uint)*param_3;
  }
  if (uVar12 == 0) {
    uVar19 = *puVar24;
    if (uVar19 == 0) {
      uVar12 = 0;
      uVar19 = 0;
LAB_10985cb7c:
      iVar15 = 0;
      bVar23 = true;
      goto LAB_10985cb80;
    }
    if (0 < (int)uVar19) goto LAB_10985cb50;
LAB_10985cb2c:
    uVar21 = (ulong)uVar19;
    iVar15 = 1;
    uVar19 = -uVar12;
  }
  else {
    uVar19 = *puVar24;
    if ((int)uVar12 < 0) {
      if ((int)uVar19 < 1) goto LAB_10985cb7c;
LAB_10985cb50:
      uVar21 = (ulong)-uVar19;
      iVar15 = 3;
      uVar19 = uVar12;
    }
    else {
      if ((int)uVar19 < 0) goto LAB_10985cb2c;
      uVar21 = (ulong)-uVar12;
      iVar15 = 2;
      uVar19 = -uVar19;
    }
  }
  bVar23 = false;
  *param_3 = uVar21 | (ulong)uVar19 << 0x20;
  uVar12 = (uint)uVar21;
LAB_10985cb80:
  uVar12 = uVar12 + param_4;
  uVar21 = (ulong)uVar12;
  iVar13 = (int)param_2[2];
  if (iVar13 < (int)uVar12) {
    uVar21 = (ulong)(uVar12 - *(int *)((long)param_2 + 4));
  }
  else if ((int)(uVar12 + iVar13) < 0 != SCARRY4(uVar12,iVar13)) {
    uVar21 = (ulong)(*(int *)((long)param_2 + 4) + uVar12);
  }
  uVar19 = uVar19 + param_5;
  uVar22 = (ulong)uVar19;
  if (iVar13 < (int)uVar19) {
    uVar22 = (ulong)(uVar19 - *(int *)((long)param_2 + 4));
  }
  else if ((int)(uVar19 + iVar13) < 0 != SCARRY4(uVar19,iVar13)) {
    uVar22 = (ulong)(*(int *)((long)param_2 + 4) + uVar19);
  }
  iVar20 = (int)uVar22;
  *(int *)((long)param_1 + 4) = iVar20;
  iVar13 = (int)uVar21;
  *(int *)param_1 = iVar13;
  uVar17 = uVar22;
  if (!bVar23) {
    uVar12 = 4 - iVar15;
    if (3 < uVar12) {
      uVar12 = -iVar15;
    }
    if (uVar12 == 3) {
      uVar17 = uVar21;
      uVar21 = (ulong)(uint)-iVar20;
    }
    else if (uVar12 == 2) {
      uVar17 = (ulong)(uint)-iVar20;
      uVar21 = (ulong)(uint)-iVar13;
    }
    else if (uVar12 == 1) {
      uVar17 = (ulong)(uint)-iVar13;
      uVar21 = uVar22;
    }
    *param_1 = uVar21 | uVar17 << 0x20;
  }
  iVar15 = (int)uVar21;
  iVar13 = (int)uVar17;
  if ((uint)uVar14 < uVar3 + uVar18) {
    FUN_10985b980(param_2,param_1);
    iVar15 = (int)*param_1;
    iVar13 = *(int *)((long)param_1 + 4);
    puVar11 = param_2;
  }
  *(int *)param_1 = iVar15 + iVar9;
  *(int *)((long)param_1 + 4) = iVar13 + iVar9;
  return puVar11;
}



/* Entry: 10985ca7c; end: 10985cc87;  */

void FUN_10985ca7c(ulong *param_1,long param_2,ulong *param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  uint *puVar14;
  
  iVar3 = *(int *)(param_2 + 0x10);
  uVar5 = (uint)*param_3 - iVar3;
  puVar14 = (uint *)((long)param_3 + 4);
  uVar4 = *puVar14 - iVar3;
  *(uint *)param_3 = uVar5;
  *puVar14 = uVar4;
  uVar1 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar1 = uVar5;
  }
  uVar2 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar2 = uVar4;
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if (uVar4 < uVar2 + uVar1) {
    FUN_10985b980(param_2,param_3,puVar14);
    uVar5 = (uint)*param_3;
  }
  if (uVar5 == 0) {
    uVar9 = *puVar14;
    if (uVar9 == 0) {
      uVar5 = 0;
      uVar9 = 0;
LAB_10985cb7c:
      iVar7 = 0;
      bVar13 = true;
      goto LAB_10985cb80;
    }
    if (0 < (int)uVar9) goto LAB_10985cb50;
LAB_10985cb2c:
    uVar11 = (ulong)uVar9;
    iVar7 = 1;
    uVar9 = -uVar5;
  }
  else {
    uVar9 = *puVar14;
    if ((int)uVar5 < 0) {
      if ((int)uVar9 < 1) goto LAB_10985cb7c;
LAB_10985cb50:
      uVar11 = (ulong)-uVar9;
      iVar7 = 3;
      uVar9 = uVar5;
    }
    else {
      if ((int)uVar9 < 0) goto LAB_10985cb2c;
      uVar11 = (ulong)-uVar5;
      iVar7 = 2;
      uVar9 = -uVar9;
    }
  }
  bVar13 = false;
  *param_3 = uVar11 | (ulong)uVar9 << 0x20;
  uVar5 = (uint)uVar11;
LAB_10985cb80:
  uVar5 = uVar5 + param_4;
  uVar11 = (ulong)uVar5;
  iVar6 = *(int *)(param_2 + 0x10);
  if (iVar6 < (int)uVar5) {
    uVar11 = (ulong)(uVar5 - *(int *)(param_2 + 4));
  }
  else if ((int)(uVar5 + iVar6) < 0 != SCARRY4(uVar5,iVar6)) {
    uVar11 = (ulong)(*(int *)(param_2 + 4) + uVar5);
  }
  uVar9 = uVar9 + param_5;
  uVar12 = (ulong)uVar9;
  if (iVar6 < (int)uVar9) {
    uVar12 = (ulong)(uVar9 - *(int *)(param_2 + 4));
  }
  else if ((int)(uVar9 + iVar6) < 0 != SCARRY4(uVar9,iVar6)) {
    uVar12 = (ulong)(*(int *)(param_2 + 4) + uVar9);
  }
  iVar10 = (int)uVar12;
  *(int *)((long)param_1 + 4) = iVar10;
  iVar6 = (int)uVar11;
  *(int *)param_1 = iVar6;
  uVar8 = uVar12;
  if (!bVar13) {
    uVar5 = 4 - iVar7;
    if (3 < uVar5) {
      uVar5 = -iVar7;
    }
    if (uVar5 == 3) {
      uVar8 = uVar11;
      uVar11 = (ulong)(uint)-iVar10;
    }
    else if (uVar5 == 2) {
      uVar8 = (ulong)(uint)-iVar10;
      uVar11 = (ulong)(uint)-iVar6;
    }
    else if (uVar5 == 1) {
      uVar8 = (ulong)(uint)-iVar6;
      uVar11 = uVar12;
    }
    *param_1 = uVar11 | uVar8 << 0x20;
  }
  iVar7 = (int)uVar11;
  iVar6 = (int)uVar8;
  if (uVar4 < uVar2 + uVar1) {
    FUN_10985b980(param_2,param_1);
    iVar7 = (int)*param_1;
    iVar6 = *(int *)((long)param_1 + 4);
  }
  *(int *)param_1 = iVar7 + iVar3;
  *(int *)((long)param_1 + 4) = iVar6 + iVar3;
  return;
}



/* Entry: 10985cc88; end: 10985cd27;  */

void FUN_10985cc88(void)

{
  return;
}



/* Entry: 10985cd28; end: 10985cd9f;  */

undefined8 FUN_10985cd28(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uStack_24;
  
  iVar3 = (int)param_1 + 0x10;
  func_0x00010985c658();
  if (iVar3 == 0) {
    return 0;
  }
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar1 = param_2[2] + 1;
    if (param_2[1] < lVar1) {
      return 0;
    }
    bVar2 = *(byte *)(*param_2 + param_2[2]);
    param_2[2] = lVar1;
    if (1 < bVar2) {
      return 0;
    }
    *(uint *)(param_1 + 0x80) = (uint)bVar2;
  }
  if (param_2[1] < param_2[2] + 1) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(*param_2 + param_2[2]);
  lVar5 = param_2[2];
  lVar1 = lVar5 + 1;
  param_2[2] = lVar1;
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar6 = param_2[1];
    lVar5 = lVar5 + 5;
    if (lVar6 < lVar5) {
      return 0;
    }
    uStack_24 = *(uint *)(*param_2 + lVar1);
    param_2[2] = lVar5;
  }
  else {
    uVar4 = 1;
    FUN_10985d9e4(1,&uStack_24,param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar6 = param_2[1];
    lVar5 = param_2[2];
  }
  if (lVar6 - lVar5 < (long)(ulong)uStack_24) {
    return 0;
  }
  uVar7 = (ulong)uStack_24;
  if ((int)uStack_24 < 1) {
    return 0;
  }
  lVar1 = *param_2 + lVar5;
  *(long *)(param_1 + 0xa0) = lVar1;
  uVar8 = uStack_24 - 1;
  if (*(byte *)(lVar1 + (ulong)uVar8) < 0x40) {
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar8 = *(byte *)(lVar1 + (ulong)uVar8) & 0x3f;
  }
  else {
    bVar2 = *(byte *)(lVar1 + (ulong)uVar8) >> 6;
    if (bVar2 == 2) {
      if (uStack_24 < 3) {
        return 0;
      }
      *(uint *)(param_1 + 0xa8) = uStack_24 - 3;
      lVar1 = lVar1 + uVar7;
      uVar8 = (*(byte *)(lVar1 + -1) & 0x3f) << 0x10 | (uint)*(byte *)(lVar1 + -2) << 8;
      *(uint *)(param_1 + 0xac) = (uVar8 | *(byte *)(lVar1 + -3)) + 0x1000;
      if (0xfe < uVar8 >> 0xc) {
        return 0;
      }
      goto LAB_10985d8e4;
    }
    if (bVar2 != 1) {
      return 0;
    }
    if (uStack_24 == 1) {
      return 0;
    }
    *(uint *)(param_1 + 0xa8) = uStack_24 - 2;
    uVar8 = (uint)*(byte *)(lVar1 + uVar7 + -2) | (*(byte *)(lVar1 + uVar7 + -1) & 0x3f) << 8;
  }
  *(uint *)(param_1 + 0xac) = uVar8 + 0x1000;
LAB_10985d8e4:
  param_2[2] = lVar5 + uVar7;
  return 1;
}



/* Entry: 10985cda0; end: 10985d023;  */

long * FUN_10985cda0(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                    long param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lStack_78;
  int iStack_70;
  undefined8 uStack_68;
  int iStack_60;
  int iStack_58;
  int iStack_54;
  
  uVar2 = *(uint *)(param_1 + 2);
  if (uVar2 - 2 < 0x1d) {
    uVar3 = -1 << (ulong)(uVar2 & 0x1f);
    *(uint *)(param_1 + 0x11) = uVar2;
    *(uint *)((long)param_1 + 0x8c) = ~uVar3;
    uVar2 = -uVar3 - 2;
    *(uint *)(param_1 + 0x12) = uVar2;
    *(float *)((long)param_1 + 0x94) = 2.0 / (float)uVar2;
    *(uint *)(param_1 + 0x13) = uVar2 >> 1;
  }
  param_1[0xb] = param_6;
  uVar6 = ((long *)param_1[8])[1] - *(long *)param_1[8];
  iStack_60 = 0;
  uStack_68 = 0;
  if (0 < (int)(uVar6 >> 2)) {
    uVar11 = 0;
    plVar5 = param_1;
    do {
      lVar7 = *(long *)param_1[8];
      if ((ulong)(((long *)param_1[8])[1] - lVar7 >> 2) <= uVar11) {
        FUN_109853c48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return plVar5;
      }
      FUN_10985d048(param_1 + 9,*(undefined4 *)(lVar7 + uVar11 * 4),&uStack_68);
      func_0x0001098578b4(param_1 + 0x11,&uStack_68);
      iVar4 = (int)param_1 + 0xa0;
      FUN_10985d980();
      if (iVar4 != 0) {
        lVar7 = 0;
        iStack_70 = 0;
        lStack_78 = 0;
        do {
          *(int *)((long)&lStack_78 + lVar7) = -*(int *)((long)&uStack_68 + lVar7);
          lVar7 = lVar7 + 4;
        } while (lVar7 != 0xc);
        uStack_68 = lStack_78;
        iStack_60 = iStack_70;
      }
      if ((int)uStack_68 < 0) {
        if (uStack_68 < 0) {
          iVar4 = -iStack_60;
          if (-1 < iStack_60) {
            iVar4 = iStack_60;
          }
        }
        else {
          iVar4 = -iStack_60;
          if (-1 < iStack_60) {
            iVar4 = iStack_60;
          }
          iVar4 = (int)param_1[0x12] - iVar4;
        }
        if (iStack_60 < 0) {
          iVar8 = -uStack_68._4_4_;
          if (-1 < uStack_68) {
            iVar8 = uStack_68._4_4_;
          }
        }
        else {
          iVar8 = -uStack_68._4_4_;
          if (-1 < uStack_68) {
            iVar8 = uStack_68._4_4_;
          }
          iVar8 = (int)param_1[0x12] - iVar8;
        }
      }
      else {
        iVar4 = (int)param_1[0x13] + uStack_68._4_4_;
        iVar8 = iStack_60 + (int)param_1[0x13];
      }
      if (iVar8 == 0 && iVar4 == 0) {
        iStack_58 = (int)param_1[0x12];
        iStack_54 = (int)param_1[0x12];
      }
      else {
        iVar9 = (int)param_1[0x12];
        if (iVar4 == 0) {
          iStack_58 = iVar8;
          iStack_54 = iVar8;
          if (iVar9 != iVar8) {
            iVar10 = (int)param_1[0x13];
            if (iVar8 <= iVar10) {
              if (iVar9 == 0) goto LAB_10985cf90;
              goto LAB_10985cfc0;
            }
            iVar4 = 0;
LAB_10985cfb0:
            iStack_58 = iVar4;
            iStack_54 = iVar10 * 2 - iVar8;
          }
        }
        else if ((iVar8 != 0) || (iStack_58 = iVar4, iStack_54 = iVar4, iVar9 != iVar4)) {
          if (iVar9 == iVar4) {
            iVar10 = (int)param_1[0x13];
LAB_10985cf90:
            iVar9 = iVar4;
            if (iVar8 < iVar10) goto LAB_10985cfb0;
          }
LAB_10985cfc0:
          if ((iVar9 == iVar8) && (iVar4 < (int)param_1[0x13])) {
            iStack_58 = (int)param_1[0x13] * 2 - iVar4;
            iStack_54 = iVar8;
          }
          else {
            iStack_58 = iVar4;
            iStack_54 = iVar8;
            if (iVar8 == 0) {
              iStack_54 = 0;
              if ((int)param_1[0x13] < iVar4) {
                iStack_58 = (int)param_1[0x13] * 2 - iVar4;
              }
            }
          }
        }
      }
      puVar1 = (undefined4 *)(param_2 + uVar11 * 8);
      plVar5 = &lStack_78;
      FUN_10985ca7c(plVar5,param_1 + 2,&iStack_58,*puVar1,puVar1[1]);
      *(long *)(param_3 + uVar11 * 8) = lStack_78;
      uVar11 = uVar11 + 1;
    } while (uVar11 != (uVar6 >> 2 & 0x7fffffff));
  }
  return (long *)0x1;
}



/* Entry: 10985d024; end: 10985d047;  */

void FUN_10985d024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10985d048; end: 10985d35b;  */

void FUN_10985d048(long param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long alStack_110 [10];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long alStack_98 [4];
  int iStack_78;
  int iStack_74;
  undefined1 uStack_70;
  
  alStack_98[3] = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = 1;
  iStack_78 = param_2;
  iStack_74 = param_2;
  FUN_10985d35c(alStack_98,param_1,param_2);
  lStack_a8 = 0;
  lStack_a0 = 0;
  if (param_2 == -1) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    lVar10 = 0;
    uVar8 = 0;
    iVar2 = param_2 + -2;
    if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
      iVar2 = param_2 + 1;
    }
    iVar3 = 2;
    if (0x55555555 < (uint)(param_2 * -0x55555555)) {
      iVar3 = -1;
    }
    iVar3 = iVar3 + param_2;
    do {
      iVar7 = iVar3;
      iVar4 = iVar2;
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar4 = param_2 + -2;
        if (0x55555555 < param_2 * -0x55555555 + 0xaaaaaaabU) {
          iVar4 = param_2 + 1;
        }
        if ((uint)(param_2 * -0x55555555) < 0x55555556) {
          iVar7 = param_2 + 2;
        }
        else {
          iVar7 = param_2 + -1;
        }
      }
      FUN_10985d35c(alStack_110 + 9,param_1,iVar4);
      FUN_10985d35c(alStack_110 + 6,param_1,iVar7);
      lVar5 = 0;
      alStack_110[3] = 0;
      alStack_110[4] = 0;
      alStack_110[5] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5 + 0x18) =
             *(long *)((long)alStack_110 + lVar5 + 0x48) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      lVar5 = 0;
      alStack_110[0] = 0;
      alStack_110[1] = 0;
      alStack_110[2] = 0;
      do {
        *(long *)((long)alStack_110 + lVar5) =
             *(long *)((long)alStack_110 + lVar5 + 0x30) - *(long *)((long)alStack_98 + lVar5);
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x18);
      uVar8 = (alStack_110[2] * alStack_110[4] - alStack_110[1] * alStack_110[5]) + uVar8;
      lVar10 = (alStack_110[0] * alStack_110[5] - alStack_110[3] * alStack_110[2]) + lVar10;
      lVar9 = (alStack_110[3] * alStack_110[1] - alStack_110[0] * alStack_110[4]) + lVar9;
      FUN_10985a764(alStack_98 + 3);
      param_2 = iStack_74;
    } while (iStack_74 != -1);
    lStack_a8 = lVar10;
    lStack_a0 = lVar9;
  }
  uStack_b0 = uVar8;
  if (*(int *)(param_1 + 0x38) == 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) goto LAB_10985d328;
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if ((long)(int)uVar8 < 0x20000001) goto LAB_10985d328;
    lVar10 = 0;
    uVar8 = (ulong)(long)(int)uVar8 >> 0x1d;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)uVar8;
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  else {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar6 = *(ulong *)((long)&uStack_b0 + lVar10);
      uVar1 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = uVar6;
      }
      if ((uVar1 ^ 0x7fffffffffffffff) < uVar8) {
        uVar8 = 0x7fffffffffffffff;
        goto LAB_10985d2e8;
      }
      uVar8 = uVar1 + uVar8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    if (uVar8 < 0x20000001) goto LAB_10985d328;
LAB_10985d2e8:
    lVar10 = 0;
    alStack_110[9] = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    do {
      lVar9 = 0;
      if (uVar8 >> 0x1d != 0) {
        lVar9 = *(long *)((long)&uStack_b0 + lVar10) / (long)(uVar8 >> 0x1d);
      }
      *(long *)((long)alStack_110 + lVar10 + 0x48) = lVar9;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
  }
  lStack_a8._0_4_ = (undefined4)uStack_c0;
  uStack_b0 = alStack_110[9];
  lStack_a0._0_4_ = (undefined4)uStack_b8;
LAB_10985d328:
  *param_3 = CONCAT44((undefined4)lStack_a8,(int)uStack_b0);
  *(undefined4 *)(param_3 + 1) = (undefined4)lStack_a0;
  return;
}



/* Entry: 10985d35c; end: 10985d3c7;  */

undefined8 * FUN_10985d35c(undefined8 *param_1,long param_2,long param_3)

{
  char *pcVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  double dVar15;
  float fVar16;
  
  uVar11 = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar11 = (ulong)*(uint *)(**(long **)(param_2 + 0x20) + param_3 * 4);
  }
  lVar12 = **(long **)(param_2 + 0x28);
  if ((ulong)((*(long **)(param_2 + 0x28))[1] - lVar12 >> 2) <= uVar11) {
    FUN_1092e2168();
    return param_1;
  }
  puVar4 = *(undefined8 **)(param_2 + 8);
  uVar9 = *(uint *)(*(long *)(param_2 + 0x10) + (long)*(int *)(lVar12 + uVar11 * 4) * 4);
  if ((*(byte *)((long)puVar4 + 100) & 1) == 0) {
    uVar9 = *(uint *)(puVar4[9] + (ulong)uVar9 * 4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar11 = (ulong)uVar9;
  bVar8 = *(byte *)(puVar4 + 3);
  if (param_1 != (undefined8 *)0x0) {
    switch(*(undefined4 *)((long)puVar4 + 0x1c)) {
    case 1:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        uVar10 = 0;
        lVar12 = puVar4[5];
        lVar14 = puVar4[6];
        lVar3 = *(long *)*puVar4;
        pcVar5 = (char *)((long *)*puVar4)[1];
        do {
          pcVar1 = (char *)(lVar3 + lVar12 * uVar11 + lVar14 + uVar10);
          if (pcVar5 <= pcVar1) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (long)*pcVar1;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 2:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        uVar10 = 0;
        lVar12 = puVar4[5];
        lVar14 = puVar4[6];
        lVar3 = *(long *)*puVar4;
        pbVar7 = (byte *)((long *)*puVar4)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar12 * uVar11 + lVar14 + uVar10);
          if (pbVar7 <= pbVar2) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (ulong)*pbVar2;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 3:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (long)*(short *)(lVar3 + uVar10 * 2);
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 2;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 4:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (ulong)*(ushort *)(lVar3 + uVar10 * 2);
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 2;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 5:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (long)*(int *)(lVar3 + uVar10 * 4);
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 4;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 6:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (ulong)*(uint *)(lVar3 + uVar10 * 4);
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 4;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 7:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = *(undefined8 *)(lVar3 + uVar10 * 8);
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 8;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 8:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if ((uVar6 <= (ulong)(lVar3 + lVar12)) ||
             (lVar14 = *(long *)(lVar3 + uVar10 * 8), lVar14 < 0)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = lVar14;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 8;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 9:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          fVar16 = *(float *)(lVar3 + uVar10 * 4);
          if (9.223372e+18 <= fVar16) {
            return (undefined8 *)0x0;
          }
          if ((*(byte *)(puVar4 + 4) & 1) != 0) {
            return (undefined8 *)0x0;
          }
          if (fVar16 < -9.223372e+18) {
            return (undefined8 *)0x0;
          }
          if (0x7f7fffff < (uint)ABS(fVar16)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (long)fVar16;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 4;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 10:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        lVar12 = 0;
        uVar10 = 0;
        uVar6 = ((long *)*puVar4)[1];
        lVar3 = *(long *)*puVar4 + puVar4[5] * uVar11 + puVar4[6];
        do {
          if (uVar6 <= (ulong)(lVar3 + lVar12)) {
            return (undefined8 *)0x0;
          }
          dVar15 = *(double *)(lVar3 + uVar10 * 8);
          if (9.223372036854776e+18 <= dVar15) {
            return (undefined8 *)0x0;
          }
          if ((*(byte *)(puVar4 + 4) & 1) != 0) {
            return (undefined8 *)0x0;
          }
          if (dVar15 < -9.223372036854776e+18) {
            return (undefined8 *)0x0;
          }
          if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (long)dVar15;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
          lVar12 = lVar12 + 8;
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    case 0xb:
      uVar9 = (uint)bVar8;
      bVar8 = *(byte *)(puVar4 + 3);
      uVar13 = (uint)bVar8;
      if (uVar9 <= bVar8) {
        uVar13 = uVar9;
      }
      if (uVar13 != 0) {
        uVar10 = 0;
        lVar12 = puVar4[5];
        lVar14 = puVar4[6];
        lVar3 = *(long *)*puVar4;
        pbVar7 = (byte *)((long *)*puVar4)[1];
        do {
          pbVar2 = (byte *)(lVar3 + lVar12 * uVar11 + lVar14 + uVar10);
          if (pbVar7 <= pbVar2) {
            return (undefined8 *)0x0;
          }
          param_1[uVar10] = (ulong)*pbVar2;
          uVar10 = uVar10 + 1;
          bVar8 = *(byte *)(puVar4 + 3);
          uVar13 = (uint)bVar8;
          if (uVar9 <= bVar8) {
            uVar13 = uVar9;
          }
        } while (uVar10 < uVar13);
      }
      uVar13 = (uint)bVar8;
      if (uVar13 < uVar9) {
        _bzero(param_1 + uVar13,(ulong)(~uVar13 + uVar9) * 8 + 8);
      }
      return (undefined8 *)0x1;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 10985d3c8; end: 10985d3df;  */

void FUN_10985d3c8(void)

{
  return;
}



/* Entry: 10985d3e0; end: 10985d4d7;  */

undefined8
FUN_10985d3e0(long param_1,undefined4 *param_2,undefined8 *param_3,int param_4,ulong param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)(-(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2)
  ;
  iVar2 = (int)param_5;
  if (iVar2 < 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  _bzero();
  uStack_70 = *puVar3;
  FUN_10985ca7c(&uStack_68,param_1 + 0x10,&uStack_70,*param_2,param_2[1]);
  *param_3 = uStack_68;
  if (iVar2 < param_4) {
    lVar4 = (long)iVar2;
    lVar5 = lVar4;
    do {
      puVar1 = (undefined8 *)((long)param_3 + lVar4 * 4);
      uStack_70 = *param_3;
      FUN_10985ca7c(&uStack_68,param_1 + 0x10,&uStack_70,param_2[lVar5],(param_2 + lVar5)[1]);
      *puVar1 = uStack_68;
      lVar5 = lVar5 + lVar4;
      param_3 = puVar1;
    } while (lVar5 < param_4);
  }
  __ZdaPv(puVar3);
  return 1;
}



/* Entry: 10985d4d8; end: 10985d4fb;  */

bool FUN_10985d4d8(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x10) + (long)param_3 * 8);
  *(long *)(param_1 + 8) = param_2;
  *(long *)(param_1 + 0x10) = lVar1;
  *(int *)(param_1 + 0x18) = param_3;
  return *(int *)(lVar1 + 0x1c) == 9;
}



/* Entry: 10985d4fc; end: 10985d567;  */

void FUN_10985d4fc(long *param_1,long *param_2,long *param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  ulong uVar16;
  
  if ((*(byte *)(param_1[1] + 0x48) < 2) &&
     (plVar8 = param_1, (**(code **)(*param_1 + 0x68))(), (int)plVar8 == 0)) {
    return;
  }
  plVar8 = param_1;
  (**(code **)(*param_1 + 0x58))();
  if ((int)plVar8 < 1) {
    return;
  }
  lVar13 = *param_2;
  lVar3 = param_2[1];
  uVar4 = *(undefined4 *)(param_1[2] + 0x38);
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  *(char *)(puVar6 + 3) = (char)plVar8;
  *(undefined4 *)((long)puVar6 + 0x1c) = 5;
  *(undefined1 *)(puVar6 + 4) = 0;
  puVar6[5] = (ulong)(uint)((int)plVar8 << 2);
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = uVar4;
  puVar6[0xd] = 0;
  *(undefined8 *)((long)puVar6 + 0x44) = 0;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0;
  *(undefined8 *)((long)puVar6 + 0x54) = 0;
  *(undefined8 *)((long)puVar6 + 0x4c) = 0;
  *(undefined8 *)((long)puVar6 + 0x5c) = 0;
  *(undefined1 *)((long)puVar6 + 100) = 1;
  FUN_109846678();
  plVar7 = param_1 + 4;
  lVar9 = *plVar7;
  *(undefined4 *)((long)puVar6 + 0x3c) = *(undefined4 *)(param_1[2] + 0x3c);
  *plVar7 = (long)puVar6;
  if (lVar9 != 0) {
    func_0x000109846568(plVar7);
    puVar6 = (undefined8 *)*plVar7;
  }
  if (*(int *)(puVar6 + 0xc) == 0) {
    return;
  }
  puVar1 = (uint *)(*(long *)*puVar6 + puVar6[6]);
  if (puVar1 == (uint *)0x0) {
    return;
  }
  lVar2 = param_3[1];
  lVar10 = param_3[2];
  lVar9 = lVar10 + 1;
  if (lVar2 < lVar9) {
    return;
  }
  uVar14 = (lVar3 - lVar13 >> 2) * ((ulong)plVar8 & 0xffffffff);
  lVar13 = *param_3;
  cVar5 = *(char *)(lVar13 + lVar10);
  param_3[2] = lVar9;
  if (cVar5 == '\0') {
    lVar10 = lVar10 + 2;
    if (lVar2 < lVar10) {
      return;
    }
    uVar16 = (ulong)*(byte *)(lVar13 + lVar9);
    param_3[2] = lVar10;
    uVar11 = ((long *)puVar6[8])[1] - *(long *)puVar6[8];
    if (uVar16 == 4) {
      if (lVar2 < (long)(lVar10 + uVar14 * 4)) {
        return;
      }
      uVar16 = uVar14 * 4;
      if (uVar11 < uVar16) {
        return;
      }
      _memcpy(puVar1,lVar13 + lVar10,uVar16);
      param_3[2] = param_3[2] + uVar16;
      goto LAB_109853010;
    }
    if (uVar11 < uVar14 * uVar16 || lVar2 - lVar10 < (long)(uVar14 * uVar16)) {
      return;
    }
    puVar12 = puVar1;
    uVar11 = uVar14;
    if (uVar14 == 0) goto LAB_109853120;
    do {
      if (param_3[1] < (long)(lVar10 + uVar16)) {
        return;
      }
      _memcpy(puVar12,*param_3 + lVar10,uVar16);
      lVar10 = param_3[2] + uVar16;
      param_3[2] = lVar10;
      uVar11 = uVar11 - 1;
      puVar12 = puVar12 + 1;
    } while (uVar11 != 0);
  }
  else {
    uVar11 = uVar14;
    FUN_10985ea30(uVar14,plVar8,param_3,puVar1);
    if ((uVar11 & 1) == 0) {
      return;
    }
LAB_109853010:
    if (uVar14 == 0) {
LAB_109853120:
      bVar15 = true;
      goto LAB_109853154;
    }
  }
  plVar7 = (long *)param_1[5];
  if (plVar7 == (long *)0x0) {
    if (0 < (int)uVar14) goto LAB_109853130;
  }
  else {
    (**(code **)(*plVar7 + 0x40))();
    bVar15 = false;
    if ((((ulong)plVar7 & 1) != 0) || ((int)uVar14 < 1)) goto LAB_109853154;
LAB_109853130:
    uVar11 = uVar14 & 0x7fffffff;
    puVar12 = puVar1;
    do {
      *puVar12 = -(*puVar12 & 1) ^ *puVar12 >> 1;
      uVar11 = uVar11 - 1;
      puVar12 = puVar12 + 1;
    } while (uVar11 != 0);
  }
  bVar15 = false;
LAB_109853154:
  plVar7 = (long *)param_1[5];
  if (((plVar7 != (long *)0x0) && ((**(code **)(*plVar7 + 0x50))(plVar7,param_3), (int)plVar7 != 0))
     && (!bVar15)) {
    (**(code **)(*(long *)param_1[5] + 0x58))
              ((long *)param_1[5],puVar1,puVar1,uVar14,plVar8,*param_2);
  }
  return;
}



/* Entry: 10985d568; end: 10985d5bb;  */

long * FUN_10985d568(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  
  if ((1 < *(byte *)(param_1[1] + 0x48)) &&
     (plVar3 = param_1, (**(code **)(*param_1 + 0x68))(), (int)plVar3 == 0)) {
    return plVar3;
  }
  lVar2 = param_1[4];
  puVar1 = (undefined4 *)0x30;
  __Znwm();
  *puVar1 = 0xffffffff;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 10) = 0;
  (**(code **)(param_1[6] + 0x20))(param_1 + 6,puVar1);
  plVar3 = (long *)(lVar2 + 0x68);
  lVar2 = *plVar3;
  *plVar3 = (long)puVar1;
  if (lVar2 != 0) {
    FUN_109846530(plVar3);
  }
  return (long *)0x1;
}



/* Entry: 10985d5bc; end: 10985d5c7;  */

void FUN_10985d5bc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010985d5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}



/* Entry: 10985d5c8; end: 10985d743;  */

undefined8 FUN_10985d5c8(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  lVar3 = param_1;
  FUN_109851b80();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
  }
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x40);
  func_0x00010742a308(param_1 + 0x40,*(undefined1 *)(lVar3 + 0x18));
  lVar3 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40);
  if (plVar4[2] + lVar3 <= plVar4[1]) {
    _memcpy(*(long *)(param_1 + 0x40),*plVar4 + plVar4[2],lVar3);
    lVar3 = plVar4[2] + lVar3;
    plVar4[2] = lVar3;
    if (lVar3 + 4 <= plVar4[1]) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*plVar4 + lVar3);
      lVar1 = plVar4[2];
      lVar3 = lVar1 + 4;
      plVar4[2] = lVar3;
      lVar1 = lVar1 + 5;
      if (lVar1 <= plVar4[1]) {
        bVar2 = *(byte *)(*plVar4 + lVar3);
        plVar4[2] = lVar1;
        uVar5 = (uint)bVar2;
        if (uVar5 - 1 < 0x1e) {
          *(uint *)(param_1 + 0x38) = uVar5;
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 10985d744; end: 10985d80b;  */

undefined8 FUN_10985d744(undefined8 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  param_1[1] = *param_1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = *param_1;
  lVar1 = param_2[2] + 4;
  if (param_2[1] < lVar1) {
    return 0;
  }
  uVar2 = *(uint *)(*param_2 + param_2[2]);
  uVar3 = (ulong)uVar2;
  param_2[2] = lVar1;
  if ((uVar2 != 0 && (uVar2 & 3) == 0) && ((long)uVar3 <= param_2[1] - lVar1)) {
    func_0x0001074287b0(param_1,uVar2 >> 2);
    if ((long)(param_2[2] + uVar3) <= param_2[1]) {
      _memcpy(*param_1,*param_2 + param_2[2],uVar3);
      param_2[2] = param_2[2] + uVar3;
      param_1[3] = *param_1;
      *(undefined4 *)(param_1 + 4) = 0;
      return 1;
    }
  }
  return 0;
}



/* Entry: 10985d80c; end: 10985d97f;  */

undefined8 FUN_10985d80c(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uStack_24;
  
  if (param_2[1] < param_2[2] + 1) {
    return 0;
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(*param_2 + param_2[2]);
  lVar4 = param_2[2];
  lVar1 = lVar4 + 1;
  param_2[2] = lVar1;
  if (*(ushort *)((long)param_2 + 0x32) < 0x202) {
    lVar5 = param_2[1];
    lVar4 = lVar4 + 5;
    if (lVar5 < lVar4) {
      return 0;
    }
    uStack_24 = *(uint *)(*param_2 + lVar1);
    param_2[2] = lVar4;
  }
  else {
    uVar3 = 1;
    FUN_10985d9e4(1,&uStack_24,param_2);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar5 = param_2[1];
    lVar4 = param_2[2];
  }
  if (lVar5 - lVar4 < (long)(ulong)uStack_24) {
    return 0;
  }
  uVar6 = (ulong)uStack_24;
  if ((int)uStack_24 < 1) {
    return 0;
  }
  lVar1 = *param_2 + lVar4;
  *param_1 = lVar1;
  uVar7 = uStack_24 - 1;
  if (*(byte *)(lVar1 + (ulong)uVar7) < 0x40) {
    *(uint *)(param_1 + 1) = uVar7;
    uVar7 = *(byte *)(lVar1 + (ulong)uVar7) & 0x3f;
  }
  else {
    bVar2 = *(byte *)(lVar1 + (ulong)uVar7) >> 6;
    if (bVar2 == 2) {
      if (uStack_24 < 3) {
        return 0;
      }
      *(uint *)(param_1 + 1) = uStack_24 - 3;
      lVar1 = lVar1 + uVar6;
      uVar7 = (*(byte *)(lVar1 + -1) & 0x3f) << 0x10 | (uint)*(byte *)(lVar1 + -2) << 8;
      *(uint *)((long)param_1 + 0xc) = (uVar7 | *(byte *)(lVar1 + -3)) + 0x1000;
      if (0xfe < uVar7 >> 0xc) {
        return 0;
      }
      goto LAB_10985d8e4;
    }
    if (bVar2 != 1) {
      return 0;
    }
    if (uStack_24 == 1) {
      return 0;
    }
    *(uint *)(param_1 + 1) = uStack_24 - 2;
    uVar7 = (uint)*(byte *)(lVar1 + uVar6 + -2) | (*(byte *)(lVar1 + uVar6 + -1) & 0x3f) << 8;
  }
  *(uint *)((long)param_1 + 0xc) = uVar7 + 0x1000;
LAB_10985d8e4:
  param_2[2] = lVar4 + uVar6;
  return 1;
}



/* Entry: 10985d980; end: 10985d9e3;  */

bool FUN_10985d980(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((long)param_1 + 0xc);
  if ((uVar5 < 0x1000) && (uVar3 = (int)param_1[1] - 1, 0 < (int)param_1[1])) {
    *(uint *)(param_1 + 1) = uVar3;
    uVar5 = (uint)*(byte *)(*param_1 + (ulong)uVar3) | uVar5 << 8;
  }
  uVar3 = -(uint)*(byte *)(param_1 + 2);
  iVar2 = (uVar5 >> 8) * (uVar3 & 0xff);
  bVar4 = (uVar5 & 0xff) < (uVar3 & 0xff);
  iVar1 = iVar2 + (uVar5 & 0xff);
  if (!bVar4) {
    iVar1 = uVar5 - (iVar2 + (uVar3 & 0xff));
  }
  *(int *)((long)param_1 + 0xc) = iVar1;
  return bVar4;
}



/* Entry: 10985d9e4; end: 10985da53;  */

ulong FUN_10985d9e4(uint param_1,uint *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  
  if (5 < param_1) {
    return 0;
  }
  lVar1 = param_3[2] + 1;
  if (lVar1 <= param_3[1]) {
    bVar2 = *(byte *)(*param_3 + param_3[2]);
    uVar4 = (uint)bVar2;
    param_3[2] = lVar1;
    if ((char)bVar2 < '\0') {
      uVar3 = (ulong)(param_1 + 1);
      FUN_10985d9e4(uVar3,param_2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar4 = uVar4 & 0x7f | *param_2 << 7;
    }
    *param_2 = uVar4;
    return 1;
  }
  return 0;
}



/* Entry: 10985da54; end: 10985da67;  */

/* WARNING: Removing unreachable block (ram,0x00010985e028) */
/* WARNING: Removing unreachable block (ram,0x00010985dfd8) */
/* WARNING: Removing unreachable block (ram,0x00010985dba4) */
/* WARNING: Removing unreachable block (ram,0x00010985dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010985e010) */
/* WARNING: Removing unreachable block (ram,0x00010985e038) */
/* WARNING: Removing unreachable block (ram,0x00010985e06c) */

void FUN_10985da54(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int *extraout_x8;
  undefined **ppuVar7;
  int *piVar8;
  undefined8 uVar9;
  int iStack_170;
  byte bStack_169;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  int iStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  uint uStack_130;
  int iStack_128;
  undefined4 uStack_124;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  undefined1 auStack_fc [7];
  char cStack_f5;
  char cStack_f4;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined7 uStack_a8;
  char cStack_a1;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
  
  puVar2 = &UNK_10f581c8d;
  func_0x000104c4f6cc(&UNK_10f581c8d);
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  piVar8 = &iStack_170;
  lStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  lStack_d8 = param_2[3];
  lStack_e0 = param_2[2];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_c0 = param_2[6];
  FUN_109874f74(&iStack_128,&uStack_f0,&iStack_170);
  if (iStack_128 != 0) {
    iStack_150 = iStack_128;
    if (lStack_110 < 0) {
      func_0x000107c3192c(&lStack_148,lStack_120,lStack_118);
      if (lStack_110 < 0) {
        __ZdlPv(lStack_120);
      }
    }
    else {
      lStack_140 = lStack_118;
      lStack_148 = lStack_120;
      lStack_138 = lStack_110;
    }
LAB_10985dc04:
    if (iStack_150 == 0) goto LAB_10985dc38;
    uStack_f0 = CONCAT44(uStack_f0._4_4_,iStack_150);
    if (lStack_138 < 0) {
      func_0x000107c3192c(&lStack_e8,lStack_148,lStack_140);
      iVar6 = (int)uStack_f0;
    }
    else {
      lStack_e0 = lStack_140;
      lStack_e8 = lStack_148;
      lStack_d8 = lStack_138;
      iVar6 = iStack_150;
    }
    *extraout_x8 = iVar6;
    if (-1 < lStack_d8) {
      *(long *)(extraout_x8 + 4) = lStack_e0;
      *(long *)(extraout_x8 + 2) = lStack_e8;
      *(long *)(extraout_x8 + 6) = lStack_d8;
      extraout_x8[8] = 0;
      extraout_x8[9] = 0;
      goto LAB_10985e128;
    }
    func_0x000107c3192c(extraout_x8 + 2,lStack_e8,lStack_e0);
    extraout_x8[8] = 0;
    extraout_x8[9] = 0;
    lVar5 = lStack_e8;
    if (-1 < lStack_d8) goto LAB_10985e128;
LAB_10985de7c:
    __ZdlPv(lVar5);
    goto LAB_10985e128;
  }
  if (lStack_110 < 0) {
    __ZdlPv(lStack_120);
  }
  if (1 < bStack_169) {
    func_0x000107c31940(&uStack_a0,&UNK_10f581cb1);
    iStack_128 = -1;
    lStack_120 = CONCAT44(uStack_9c,uStack_a0);
    lStack_118 = lStack_98;
    lStack_110 = lStack_90;
    iStack_150 = -1;
    if (lStack_90 < 0) {
      func_0x000107c3192c(&lStack_148,lStack_120,lStack_98);
      if (lStack_110 < 0) {
        __ZdlPv(lStack_120);
      }
    }
    else {
      lStack_140 = lStack_98;
      lStack_138 = lStack_90;
      lStack_148 = lStack_120;
    }
    goto LAB_10985dc04;
  }
  iStack_150 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_148 = 0;
  uStack_130 = (uint)bStack_169;
LAB_10985dc38:
  if (uStack_130 == 1) {
    plVar3 = (long *)0xd8;
    __Znwm();
    *(undefined8 *)((long)plVar3 + 0x9c) = 0;
    *(undefined8 *)((long)plVar3 + 0x94) = 0;
    plVar3[0x12] = 0;
    plVar3[0x11] = 0;
    plVar3[0x10] = 0;
    plVar3[0xf] = 0;
    plVar3[0xe] = 0;
    plVar3[0xd] = 0;
    plVar3[0xc] = 0;
    plVar3[0xb] = 0;
    plVar3[10] = 0;
    plVar3[9] = 0;
    plVar3[8] = 0;
    plVar3[7] = 0;
    plVar3[6] = 0;
    plVar3[5] = 0;
    plVar3[4] = 0;
    plVar3[3] = 0;
    plVar3[2] = 0;
    plVar3[1] = 0;
    *plVar3 = (long)&PTR_DAT_110b16440;
    plVar3[0x16] = 0;
    plVar3[0x15] = 0;
    plVar3[0x18] = 0;
    plVar3[0x17] = 0;
    plVar3[0x1a] = 0;
    plVar3[0x19] = 0;
    FUN_10985e2e4(&uStack_f0,puVar2,param_2,plVar3);
    lVar5 = lStack_e8;
    lVar1 = lStack_d8;
    if ((int)uStack_f0 == 0) {
joined_r0x00010985de88:
      if (lVar1 < 0) {
        __ZdlPv(lVar5);
      }
      *extraout_x8 = 0;
      extraout_x8[2] = 0;
      extraout_x8[3] = 0;
      extraout_x8[4] = 0;
      extraout_x8[5] = 0;
      extraout_x8[6] = 0;
      extraout_x8[7] = 0;
      *(long **)(extraout_x8 + 8) = plVar3;
      goto LAB_10985e128;
    }
    *extraout_x8 = (int)uStack_f0;
    if (-1 < lStack_d8) {
      piVar8 = (int *)&uStack_f0;
      goto LAB_10985e0c4;
    }
    func_0x000107c3192c(extraout_x8 + 2,lStack_e8,lStack_e0);
    extraout_x8[8] = 0;
    extraout_x8[9] = 0;
    lVar5 = lStack_e8;
    lVar1 = lStack_d8;
joined_r0x00010985dea4:
    if (lVar1 < 0) {
      __ZdlPv(lVar5);
    }
  }
  else {
    if (uStack_130 != 0) {
      func_0x000107c31940(&iStack_128,&UNK_10f581cb1);
      uStack_f0 = CONCAT44(uStack_f0._4_4_,0xffffffff);
      if (lStack_118 < 0) {
        func_0x000107c3192c(&lStack_e8,CONCAT44(uStack_124,iStack_128),lStack_120);
        iVar6 = (int)uStack_f0;
      }
      else {
        lStack_e8 = CONCAT44(uStack_124,iStack_128);
        lStack_e0 = lStack_120;
        lStack_d8 = lStack_118;
        iVar6 = -1;
      }
      *extraout_x8 = iVar6;
      if (lStack_d8 < 0) {
        func_0x000107c3192c(extraout_x8 + 2,lStack_e8,lStack_e0);
        extraout_x8[8] = 0;
        extraout_x8[9] = 0;
        if (lStack_d8 < 0) {
          __ZdlPv(lStack_e8);
        }
      }
      else {
        *(long *)(extraout_x8 + 4) = lStack_e0;
        *(long *)(extraout_x8 + 2) = lStack_e8;
        *(long *)(extraout_x8 + 6) = lStack_d8;
        extraout_x8[8] = 0;
        extraout_x8[9] = 0;
      }
      if (-1 < lStack_118) goto LAB_10985e128;
      lVar5 = CONCAT44(uStack_124,iStack_128);
      goto LAB_10985de7c;
    }
    plVar3 = (long *)0xa8;
    __Znwm();
    *plVar3 = (long)&PTR_FUN_110b16488;
    plVar3[2] = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[3] = 0;
    plVar3[6] = 0;
    plVar3[5] = 0;
    plVar3[8] = 0;
    plVar3[7] = 0;
    plVar3[10] = 0;
    plVar3[9] = 0;
    plVar3[0xc] = 0;
    plVar3[0xb] = 0;
    plVar3[0xe] = 0;
    plVar3[0xd] = 0;
    plVar3[0x10] = 0;
    plVar3[0xf] = 0;
    plVar3[0x12] = 0;
    plVar3[0x11] = 0;
    *(undefined8 *)((long)plVar3 + 0x9c) = 0;
    *(undefined8 *)((long)plVar3 + 0x94) = 0;
    lStack_e8 = param_2[1];
    uStack_f0 = *param_2;
    lStack_d8 = param_2[3];
    lStack_e0 = param_2[2];
    uStack_c8 = param_2[5];
    uStack_d0 = param_2[4];
    uStack_c0 = param_2[6];
    FUN_109874f74(&iStack_170,&uStack_f0,auStack_fc);
    if (iStack_170 == 0) {
      if (lStack_158 < 0) {
        __ZdlPv(lStack_168);
      }
      if (cStack_f5 == '\0') {
        if (cStack_f4 == '\x01') {
          plVar4 = (long *)0x58;
          __Znwm();
          plVar4[10] = 0;
          plVar4[9] = 0;
          plVar4[8] = 0;
          plVar4[7] = 0;
          plVar4[6] = 0;
          plVar4[5] = 0;
          plVar4[4] = 0;
          plVar4[3] = 0;
          ppuVar7 = &PTR_FUN_110b16360;
LAB_10985df30:
          plVar4[2] = 0;
          plVar4[1] = 0;
          *plVar4 = (long)ppuVar7;
          lStack_110 = 0;
          lStack_118 = 0;
          lStack_120 = 0;
          iStack_128 = 0;
          plStack_108 = (long *)0x0;
          FUN_10987528c(&iStack_170,plVar4,puVar2,param_2,plVar3);
          if (iStack_170 == 0) {
            if (lStack_158 < 0) {
              __ZdlPv(lStack_168);
            }
            iStack_170 = 0;
            lStack_160 = 0;
            lStack_158 = 0;
            lStack_168 = 0;
          }
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
        else {
          if (cStack_f4 == '\0') {
            plVar4 = (long *)0x58;
            __Znwm();
            plVar4[10] = 0;
            plVar4[9] = 0;
            plVar4[8] = 0;
            plVar4[7] = 0;
            plVar4[6] = 0;
            plVar4[5] = 0;
            plVar4[4] = 0;
            plVar4[3] = 0;
            ppuVar7 = &PTR_FUN_110b163d0;
            goto LAB_10985df30;
          }
          func_0x000107c31940(&lStack_b8,&UNK_10f581c94);
          uStack_a0 = 0xffffffff;
          lStack_90 = lStack_b0;
          lStack_98 = lStack_b8;
          lStack_110 = CONCAT17(cStack_a1,uStack_a8);
          iStack_170 = -1;
          iStack_128 = -1;
          lStack_118 = lStack_b0;
          lStack_120 = lStack_b8;
          plStack_108 = (long *)0x0;
          if (cStack_a1 < '\0') {
            func_0x000107c3192c(&lStack_168,lStack_b8,lStack_b0);
          }
          else {
            lStack_160 = lStack_b0;
            lStack_168 = lStack_b8;
            lStack_158 = lStack_110;
          }
        }
        plVar4 = plStack_108;
        plStack_108 = (long *)0x0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        lVar5 = lStack_120;
        if (lStack_110 < 0) {
LAB_10985e0a4:
          __ZdlPv(lVar5);
        }
      }
      else {
        func_0x000107c31940(&iStack_128,&UNK_10f581ccc);
        iStack_170 = -1;
        if (lStack_118 < 0) {
          func_0x000107c3192c(&lStack_168,CONCAT44(uStack_124,iStack_128),lStack_120);
          if (lStack_118 < 0) {
            lVar5 = CONCAT44(uStack_124,iStack_128);
            goto LAB_10985e0a4;
          }
        }
        else {
          lStack_160 = lStack_120;
          lStack_168 = CONCAT44(uStack_124,iStack_128);
          lStack_158 = lStack_118;
        }
      }
      lVar5 = lStack_168;
      lVar1 = lStack_158;
      if (iStack_170 == 0) goto joined_r0x00010985de88;
    }
    *extraout_x8 = iStack_170;
    if (lStack_158 < 0) {
      func_0x000107c3192c(extraout_x8 + 2,lStack_168,lStack_160);
      extraout_x8[8] = 0;
      extraout_x8[9] = 0;
      lVar5 = lStack_168;
      lVar1 = lStack_158;
      goto joined_r0x00010985dea4;
    }
LAB_10985e0c4:
    uVar9 = *(undefined8 *)((long)piVar8 + 8);
    *(undefined8 *)(extraout_x8 + 4) = *(undefined8 *)((long)piVar8 + 0x10);
    *(undefined8 *)(extraout_x8 + 2) = uVar9;
    *(undefined8 *)(extraout_x8 + 6) = *(undefined8 *)((long)piVar8 + 0x18);
    extraout_x8[8] = 0;
    extraout_x8[9] = 0;
  }
  (**(code **)(*plVar3 + 8))(plVar3);
LAB_10985e128:
  if (lStack_138 < 0) {
    __ZdlPv(lStack_148);
  }
  return;
}



/* Entry: 10985da68; end: 10985da9b;  */

/* WARNING: Removing unreachable block (ram,0x00010985e028) */
/* WARNING: Removing unreachable block (ram,0x00010985dfd8) */
/* WARNING: Removing unreachable block (ram,0x00010985dba4) */
/* WARNING: Removing unreachable block (ram,0x00010985dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010985e010) */
/* WARNING: Removing unreachable block (ram,0x00010985e038) */
/* WARNING: Removing unreachable block (ram,0x00010985e06c) */

void FUN_10985da68(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  int *extraout_x8;
  undefined **ppuVar6;
  int *piVar7;
  undefined8 uVar8;
  int iStack_160;
  byte bStack_159;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  int iStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  uint uStack_120;
  int iStack_118;
  undefined4 uStack_114;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 auStack_ec [7];
  char cStack_e5;
  char cStack_e4;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined7 uStack_98;
  char cStack_91;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  piVar7 = &iStack_160;
  lStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  lStack_c8 = param_2[3];
  lStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_b0 = param_2[6];
  FUN_109874f74(&iStack_118,&uStack_e0,&iStack_160);
  if (iStack_118 != 0) {
    iStack_140 = iStack_118;
    if (lStack_100 < 0) {
      func_0x000107c3192c(&lStack_138,lStack_110,lStack_108);
      if (lStack_100 < 0) {
        __ZdlPv(lStack_110);
      }
    }
    else {
      lStack_130 = lStack_108;
      lStack_138 = lStack_110;
      lStack_128 = lStack_100;
    }
LAB_10985dc04:
    if (iStack_140 == 0) goto LAB_10985dc38;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,iStack_140);
    if (lStack_128 < 0) {
      func_0x000107c3192c(&lStack_d8,lStack_138,lStack_130);
      iVar5 = (int)uStack_e0;
    }
    else {
      lStack_d0 = lStack_130;
      lStack_d8 = lStack_138;
      lStack_c8 = lStack_128;
      iVar5 = iStack_140;
    }
    *extraout_x8 = iVar5;
    if (-1 < lStack_c8) {
      *(long *)(extraout_x8 + 4) = lStack_d0;
      *(long *)(extraout_x8 + 2) = lStack_d8;
      *(long *)(extraout_x8 + 6) = lStack_c8;
      extraout_x8[8] = 0;
      extraout_x8[9] = 0;
      goto LAB_10985e128;
    }
    func_0x000107c3192c(extraout_x8 + 2,lStack_d8,lStack_d0);
    extraout_x8[8] = 0;
    extraout_x8[9] = 0;
    lVar4 = lStack_d8;
    if (-1 < lStack_c8) goto LAB_10985e128;
LAB_10985de7c:
    __ZdlPv(lVar4);
    goto LAB_10985e128;
  }
  if (lStack_100 < 0) {
    __ZdlPv(lStack_110);
  }
  if (1 < bStack_159) {
    func_0x000107c31940(&uStack_90,&UNK_10f581cb1);
    iStack_118 = -1;
    lStack_110 = CONCAT44(uStack_8c,uStack_90);
    lStack_108 = lStack_88;
    lStack_100 = lStack_80;
    iStack_140 = -1;
    if (lStack_80 < 0) {
      func_0x000107c3192c(&lStack_138,lStack_110,lStack_88);
      if (lStack_100 < 0) {
        __ZdlPv(lStack_110);
      }
    }
    else {
      lStack_130 = lStack_88;
      lStack_128 = lStack_80;
      lStack_138 = lStack_110;
    }
    goto LAB_10985dc04;
  }
  iStack_140 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_138 = 0;
  uStack_120 = (uint)bStack_159;
LAB_10985dc38:
  if (uStack_120 == 1) {
    plVar2 = (long *)0xd8;
    __Znwm();
    *(undefined8 *)((long)plVar2 + 0x9c) = 0;
    *(undefined8 *)((long)plVar2 + 0x94) = 0;
    plVar2[0x12] = 0;
    plVar2[0x11] = 0;
    plVar2[0x10] = 0;
    plVar2[0xf] = 0;
    plVar2[0xe] = 0;
    plVar2[0xd] = 0;
    plVar2[0xc] = 0;
    plVar2[0xb] = 0;
    plVar2[10] = 0;
    plVar2[9] = 0;
    plVar2[8] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[1] = 0;
    *plVar2 = (long)&PTR_DAT_110b16440;
    plVar2[0x16] = 0;
    plVar2[0x15] = 0;
    plVar2[0x18] = 0;
    plVar2[0x17] = 0;
    plVar2[0x1a] = 0;
    plVar2[0x19] = 0;
    FUN_10985e2e4(&uStack_e0,param_1,param_2,plVar2);
    lVar4 = lStack_d8;
    lVar1 = lStack_c8;
    if ((int)uStack_e0 == 0) {
joined_r0x00010985de88:
      if (lVar1 < 0) {
        __ZdlPv(lVar4);
      }
      *extraout_x8 = 0;
      extraout_x8[2] = 0;
      extraout_x8[3] = 0;
      extraout_x8[4] = 0;
      extraout_x8[5] = 0;
      extraout_x8[6] = 0;
      extraout_x8[7] = 0;
      *(long **)(extraout_x8 + 8) = plVar2;
      goto LAB_10985e128;
    }
    *extraout_x8 = (int)uStack_e0;
    if (-1 < lStack_c8) {
      piVar7 = (int *)&uStack_e0;
      goto LAB_10985e0c4;
    }
    func_0x000107c3192c(extraout_x8 + 2,lStack_d8,lStack_d0);
    extraout_x8[8] = 0;
    extraout_x8[9] = 0;
    lVar4 = lStack_d8;
    lVar1 = lStack_c8;
joined_r0x00010985dea4:
    if (lVar1 < 0) {
      __ZdlPv(lVar4);
    }
  }
  else {
    if (uStack_120 != 0) {
      func_0x000107c31940(&iStack_118,&UNK_10f581cb1);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0xffffffff);
      if (lStack_108 < 0) {
        func_0x000107c3192c(&lStack_d8,CONCAT44(uStack_114,iStack_118),lStack_110);
        iVar5 = (int)uStack_e0;
      }
      else {
        lStack_d8 = CONCAT44(uStack_114,iStack_118);
        lStack_d0 = lStack_110;
        lStack_c8 = lStack_108;
        iVar5 = -1;
      }
      *extraout_x8 = iVar5;
      if (lStack_c8 < 0) {
        func_0x000107c3192c(extraout_x8 + 2,lStack_d8,lStack_d0);
        extraout_x8[8] = 0;
        extraout_x8[9] = 0;
        if (lStack_c8 < 0) {
          __ZdlPv(lStack_d8);
        }
      }
      else {
        *(long *)(extraout_x8 + 4) = lStack_d0;
        *(long *)(extraout_x8 + 2) = lStack_d8;
        *(long *)(extraout_x8 + 6) = lStack_c8;
        extraout_x8[8] = 0;
        extraout_x8[9] = 0;
      }
      if (-1 < lStack_108) goto LAB_10985e128;
      lVar4 = CONCAT44(uStack_114,iStack_118);
      goto LAB_10985de7c;
    }
    plVar2 = (long *)0xa8;
    __Znwm();
    *plVar2 = (long)&PTR_FUN_110b16488;
    plVar2[2] = 0;
    plVar2[1] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[8] = 0;
    plVar2[7] = 0;
    plVar2[10] = 0;
    plVar2[9] = 0;
    plVar2[0xc] = 0;
    plVar2[0xb] = 0;
    plVar2[0xe] = 0;
    plVar2[0xd] = 0;
    plVar2[0x10] = 0;
    plVar2[0xf] = 0;
    plVar2[0x12] = 0;
    plVar2[0x11] = 0;
    *(undefined8 *)((long)plVar2 + 0x9c) = 0;
    *(undefined8 *)((long)plVar2 + 0x94) = 0;
    lStack_d8 = param_2[1];
    uStack_e0 = *param_2;
    lStack_c8 = param_2[3];
    lStack_d0 = param_2[2];
    uStack_b8 = param_2[5];
    uStack_c0 = param_2[4];
    uStack_b0 = param_2[6];
    FUN_109874f74(&iStack_160,&uStack_e0,auStack_ec);
    if (iStack_160 == 0) {
      if (lStack_148 < 0) {
        __ZdlPv(lStack_158);
      }
      if (cStack_e5 == '\0') {
        if (cStack_e4 == '\x01') {
          plVar3 = (long *)0x58;
          __Znwm();
          plVar3[10] = 0;
          plVar3[9] = 0;
          plVar3[8] = 0;
          plVar3[7] = 0;
          plVar3[6] = 0;
          plVar3[5] = 0;
          plVar3[4] = 0;
          plVar3[3] = 0;
          ppuVar6 = &PTR_FUN_110b16360;
LAB_10985df30:
          plVar3[2] = 0;
          plVar3[1] = 0;
          *plVar3 = (long)ppuVar6;
          lStack_100 = 0;
          lStack_108 = 0;
          lStack_110 = 0;
          iStack_118 = 0;
          plStack_f8 = (long *)0x0;
          FUN_10987528c(&iStack_160,plVar3,param_1,param_2,plVar2);
          if (iStack_160 == 0) {
            if (lStack_148 < 0) {
              __ZdlPv(lStack_158);
            }
            iStack_160 = 0;
            lStack_150 = 0;
            lStack_148 = 0;
            lStack_158 = 0;
          }
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
        }
        else {
          if (cStack_e4 == '\0') {
            plVar3 = (long *)0x58;
            __Znwm();
            plVar3[10] = 0;
            plVar3[9] = 0;
            plVar3[8] = 0;
            plVar3[7] = 0;
            plVar3[6] = 0;
            plVar3[5] = 0;
            plVar3[4] = 0;
            plVar3[3] = 0;
            ppuVar6 = &PTR_FUN_110b163d0;
            goto LAB_10985df30;
          }
          func_0x000107c31940(&lStack_a8,&UNK_10f581c94);
          uStack_90 = 0xffffffff;
          lStack_80 = lStack_a0;
          lStack_88 = lStack_a8;
          lStack_100 = CONCAT17(cStack_91,uStack_98);
          iStack_160 = -1;
          iStack_118 = -1;
          lStack_108 = lStack_a0;
          lStack_110 = lStack_a8;
          plStack_f8 = (long *)0x0;
          if (cStack_91 < '\0') {
            func_0x000107c3192c(&lStack_158,lStack_a8,lStack_a0);
          }
          else {
            lStack_150 = lStack_a0;
            lStack_158 = lStack_a8;
            lStack_148 = lStack_100;
          }
        }
        plVar3 = plStack_f8;
        plStack_f8 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        lVar4 = lStack_110;
        if (lStack_100 < 0) {
LAB_10985e0a4:
          __ZdlPv(lVar4);
        }
      }
      else {
        func_0x000107c31940(&iStack_118,&UNK_10f581ccc);
        iStack_160 = -1;
        if (lStack_108 < 0) {
          func_0x000107c3192c(&lStack_158,CONCAT44(uStack_114,iStack_118),lStack_110);
          if (lStack_108 < 0) {
            lVar4 = CONCAT44(uStack_114,iStack_118);
            goto LAB_10985e0a4;
          }
        }
        else {
          lStack_150 = lStack_110;
          lStack_158 = CONCAT44(uStack_114,iStack_118);
          lStack_148 = lStack_108;
        }
      }
      lVar4 = lStack_158;
      lVar1 = lStack_148;
      if (iStack_160 == 0) goto joined_r0x00010985de88;
    }
    *extraout_x8 = iStack_160;
    if (lStack_148 < 0) {
      func_0x000107c3192c(extraout_x8 + 2,lStack_158,lStack_150);
      extraout_x8[8] = 0;
      extraout_x8[9] = 0;
      lVar4 = lStack_158;
      lVar1 = lStack_148;
      goto joined_r0x00010985dea4;
    }
LAB_10985e0c4:
    uVar8 = *(undefined8 *)((long)piVar7 + 8);
    *(undefined8 *)(extraout_x8 + 4) = *(undefined8 *)((long)piVar7 + 0x10);
    *(undefined8 *)(extraout_x8 + 2) = uVar8;
    *(undefined8 *)(extraout_x8 + 6) = *(undefined8 *)((long)piVar7 + 0x18);
    extraout_x8[8] = 0;
    extraout_x8[9] = 0;
  }
  (**(code **)(*plVar2 + 8))(plVar2);
LAB_10985e128:
  if (lStack_128 < 0) {
    __ZdlPv(lStack_138);
  }
  return;
}



/* Entry: 10985da9c; end: 10985e2e3;  */

/* WARNING: Removing unreachable block (ram,0x00010985e028) */
/* WARNING: Removing unreachable block (ram,0x00010985dfd8) */
/* WARNING: Removing unreachable block (ram,0x00010985dba4) */
/* WARNING: Removing unreachable block (ram,0x00010985dbfc) */
/* WARNING: Removing unreachable block (ram,0x00010985e010) */
/* WARNING: Removing unreachable block (ram,0x00010985e038) */
/* WARNING: Removing unreachable block (ram,0x00010985e06c) */

void FUN_10985da9c(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined **ppuVar6;
  int *piVar7;
  undefined8 uVar8;
  int iStack_140;
  byte bStack_139;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  int iStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  uint uStack_100;
  int iStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 auStack_cc [7];
  char cStack_c5;
  char cStack_c4;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined7 uStack_78;
  char cStack_71;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  long lStack_60;
  
  piVar7 = &iStack_140;
  lStack_b8 = param_3[1];
  uStack_c0 = *param_3;
  lStack_a8 = param_3[3];
  lStack_b0 = param_3[2];
  uStack_98 = param_3[5];
  uStack_a0 = param_3[4];
  uStack_90 = param_3[6];
  FUN_109874f74(&iStack_f8,&uStack_c0,&iStack_140);
  if (iStack_f8 != 0) {
    iStack_120 = iStack_f8;
    if (lStack_e0 < 0) {
      func_0x000107c3192c(&lStack_118,lStack_f0,lStack_e8);
      if (lStack_e0 < 0) {
        __ZdlPv(lStack_f0);
      }
    }
    else {
      lStack_110 = lStack_e8;
      lStack_118 = lStack_f0;
      lStack_108 = lStack_e0;
    }
LAB_10985dc04:
    if (iStack_120 == 0) goto LAB_10985dc38;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,iStack_120);
    if (lStack_108 < 0) {
      func_0x000107c3192c(&lStack_b8,lStack_118,lStack_110);
      iVar5 = (int)uStack_c0;
    }
    else {
      lStack_b0 = lStack_110;
      lStack_b8 = lStack_118;
      lStack_a8 = lStack_108;
      iVar5 = iStack_120;
    }
    *param_1 = iVar5;
    if (-1 < lStack_a8) {
      *(long *)(param_1 + 4) = lStack_b0;
      *(long *)(param_1 + 2) = lStack_b8;
      *(long *)(param_1 + 6) = lStack_a8;
      param_1[8] = 0;
      param_1[9] = 0;
      goto LAB_10985e128;
    }
    func_0x000107c3192c(param_1 + 2,lStack_b8,lStack_b0);
    param_1[8] = 0;
    param_1[9] = 0;
    lVar4 = lStack_b8;
    if (-1 < lStack_a8) goto LAB_10985e128;
LAB_10985de7c:
    __ZdlPv(lVar4);
    goto LAB_10985e128;
  }
  if (lStack_e0 < 0) {
    __ZdlPv(lStack_f0);
  }
  if (1 < bStack_139) {
    func_0x000107c31940(&uStack_70,&UNK_10f581cb1);
    iStack_f8 = -1;
    lStack_f0 = CONCAT44(uStack_6c,uStack_70);
    lStack_e8 = lStack_68;
    lStack_e0 = lStack_60;
    iStack_120 = -1;
    if (lStack_60 < 0) {
      func_0x000107c3192c(&lStack_118,lStack_f0,lStack_68);
      if (lStack_e0 < 0) {
        __ZdlPv(lStack_f0);
      }
    }
    else {
      lStack_110 = lStack_68;
      lStack_108 = lStack_60;
      lStack_118 = lStack_f0;
    }
    goto LAB_10985dc04;
  }
  iStack_120 = 0;
  lStack_110 = 0;
  lStack_108 = 0;
  lStack_118 = 0;
  uStack_100 = (uint)bStack_139;
LAB_10985dc38:
  if (uStack_100 == 1) {
    plVar2 = (long *)0xd8;
    __Znwm();
    *(undefined8 *)((long)plVar2 + 0x9c) = 0;
    *(undefined8 *)((long)plVar2 + 0x94) = 0;
    plVar2[0x12] = 0;
    plVar2[0x11] = 0;
    plVar2[0x10] = 0;
    plVar2[0xf] = 0;
    plVar2[0xe] = 0;
    plVar2[0xd] = 0;
    plVar2[0xc] = 0;
    plVar2[0xb] = 0;
    plVar2[10] = 0;
    plVar2[9] = 0;
    plVar2[8] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[1] = 0;
    *plVar2 = (long)&PTR_DAT_110b16440;
    plVar2[0x16] = 0;
    plVar2[0x15] = 0;
    plVar2[0x18] = 0;
    plVar2[0x17] = 0;
    plVar2[0x1a] = 0;
    plVar2[0x19] = 0;
    FUN_10985e2e4(&uStack_c0,param_2,param_3,plVar2);
    lVar4 = lStack_b8;
    lVar1 = lStack_a8;
    if ((int)uStack_c0 == 0) {
joined_r0x00010985de88:
      if (lVar1 < 0) {
        __ZdlPv(lVar4);
      }
      *param_1 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(long **)(param_1 + 8) = plVar2;
      goto LAB_10985e128;
    }
    *param_1 = (int)uStack_c0;
    if (-1 < lStack_a8) {
      piVar7 = (int *)&uStack_c0;
      goto LAB_10985e0c4;
    }
    func_0x000107c3192c(param_1 + 2,lStack_b8,lStack_b0);
    param_1[8] = 0;
    param_1[9] = 0;
    lVar4 = lStack_b8;
    lVar1 = lStack_a8;
joined_r0x00010985dea4:
    if (lVar1 < 0) {
      __ZdlPv(lVar4);
    }
  }
  else {
    if (uStack_100 != 0) {
      func_0x000107c31940(&iStack_f8,&UNK_10f581cb1);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
      if (lStack_e8 < 0) {
        func_0x000107c3192c(&lStack_b8,CONCAT44(uStack_f4,iStack_f8),lStack_f0);
        iVar5 = (int)uStack_c0;
      }
      else {
        lStack_b8 = CONCAT44(uStack_f4,iStack_f8);
        lStack_b0 = lStack_f0;
        lStack_a8 = lStack_e8;
        iVar5 = -1;
      }
      *param_1 = iVar5;
      if (lStack_a8 < 0) {
        func_0x000107c3192c(param_1 + 2,lStack_b8,lStack_b0);
        param_1[8] = 0;
        param_1[9] = 0;
        if (lStack_a8 < 0) {
          __ZdlPv(lStack_b8);
        }
      }
      else {
        *(long *)(param_1 + 4) = lStack_b0;
        *(long *)(param_1 + 2) = lStack_b8;
        *(long *)(param_1 + 6) = lStack_a8;
        param_1[8] = 0;
        param_1[9] = 0;
      }
      if (-1 < lStack_e8) goto LAB_10985e128;
      lVar4 = CONCAT44(uStack_f4,iStack_f8);
      goto LAB_10985de7c;
    }
    plVar2 = (long *)0xa8;
    __Znwm();
    *plVar2 = (long)&PTR_FUN_110b16488;
    plVar2[2] = 0;
    plVar2[1] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[8] = 0;
    plVar2[7] = 0;
    plVar2[10] = 0;
    plVar2[9] = 0;
    plVar2[0xc] = 0;
    plVar2[0xb] = 0;
    plVar2[0xe] = 0;
    plVar2[0xd] = 0;
    plVar2[0x10] = 0;
    plVar2[0xf] = 0;
    plVar2[0x12] = 0;
    plVar2[0x11] = 0;
    *(undefined8 *)((long)plVar2 + 0x9c) = 0;
    *(undefined8 *)((long)plVar2 + 0x94) = 0;
    lStack_b8 = param_3[1];
    uStack_c0 = *param_3;
    lStack_a8 = param_3[3];
    lStack_b0 = param_3[2];
    uStack_98 = param_3[5];
    uStack_a0 = param_3[4];
    uStack_90 = param_3[6];
    FUN_109874f74(&iStack_140,&uStack_c0,auStack_cc);
    if (iStack_140 == 0) {
      if (lStack_128 < 0) {
        __ZdlPv(lStack_138);
      }
      if (cStack_c5 == '\0') {
        if (cStack_c4 == '\x01') {
          plVar3 = (long *)0x58;
          __Znwm();
          plVar3[10] = 0;
          plVar3[9] = 0;
          plVar3[8] = 0;
          plVar3[7] = 0;
          plVar3[6] = 0;
          plVar3[5] = 0;
          plVar3[4] = 0;
          plVar3[3] = 0;
          ppuVar6 = &PTR_FUN_110b16360;
LAB_10985df30:
          plVar3[2] = 0;
          plVar3[1] = 0;
          *plVar3 = (long)ppuVar6;
          lStack_e0 = 0;
          lStack_e8 = 0;
          lStack_f0 = 0;
          iStack_f8 = 0;
          plStack_d8 = (long *)0x0;
          FUN_10987528c(&iStack_140,plVar3,param_2,param_3,plVar2);
          if (iStack_140 == 0) {
            if (lStack_128 < 0) {
              __ZdlPv(lStack_138);
            }
            iStack_140 = 0;
            lStack_130 = 0;
            lStack_128 = 0;
            lStack_138 = 0;
          }
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
        }
        else {
          if (cStack_c4 == '\0') {
            plVar3 = (long *)0x58;
            __Znwm();
            plVar3[10] = 0;
            plVar3[9] = 0;
            plVar3[8] = 0;
            plVar3[7] = 0;
            plVar3[6] = 0;
            plVar3[5] = 0;
            plVar3[4] = 0;
            plVar3[3] = 0;
            ppuVar6 = &PTR_FUN_110b163d0;
            goto LAB_10985df30;
          }
          func_0x000107c31940(&lStack_88,&UNK_10f581c94);
          uStack_70 = 0xffffffff;
          lStack_60 = lStack_80;
          lStack_68 = lStack_88;
          lStack_e0 = CONCAT17(cStack_71,uStack_78);
          iStack_140 = -1;
          iStack_f8 = -1;
          lStack_e8 = lStack_80;
          lStack_f0 = lStack_88;
          plStack_d8 = (long *)0x0;
          if (cStack_71 < '\0') {
            func_0x000107c3192c(&lStack_138,lStack_88,lStack_80);
          }
          else {
            lStack_130 = lStack_80;
            lStack_138 = lStack_88;
            lStack_128 = lStack_e0;
          }
        }
        plVar3 = plStack_d8;
        plStack_d8 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        lVar4 = lStack_f0;
        if (lStack_e0 < 0) {
LAB_10985e0a4:
          __ZdlPv(lVar4);
        }
      }
      else {
        func_0x000107c31940(&iStack_f8,&UNK_10f581ccc);
        iStack_140 = -1;
        if (lStack_e8 < 0) {
          func_0x000107c3192c(&lStack_138,CONCAT44(uStack_f4,iStack_f8),lStack_f0);
          if (lStack_e8 < 0) {
            lVar4 = CONCAT44(uStack_f4,iStack_f8);
            goto LAB_10985e0a4;
          }
        }
        else {
          lStack_130 = lStack_f0;
          lStack_138 = CONCAT44(uStack_f4,iStack_f8);
          lStack_128 = lStack_e8;
        }
      }
      lVar4 = lStack_138;
      lVar1 = lStack_128;
      if (iStack_140 == 0) goto joined_r0x00010985de88;
    }
    *param_1 = iStack_140;
    if (lStack_128 < 0) {
      func_0x000107c3192c(param_1 + 2,lStack_138,lStack_130);
      param_1[8] = 0;
      param_1[9] = 0;
      lVar4 = lStack_138;
      lVar1 = lStack_128;
      goto joined_r0x00010985dea4;
    }
LAB_10985e0c4:
    uVar8 = *(undefined8 *)((long)piVar7 + 8);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)((long)piVar7 + 0x10);
    *(undefined8 *)(param_1 + 2) = uVar8;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)((long)piVar7 + 0x18);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  (**(code **)(*plVar2 + 8))(plVar2);
LAB_10985e128:
  if (lStack_108 < 0) {
    __ZdlPv(lStack_118);
  }
  return;
}



/* Entry: 10985e2e4; end: 10985e643;  */

/* WARNING: Removing unreachable block (ram,0x00010985e554) */
/* WARNING: Removing unreachable block (ram,0x00010985e504) */
/* WARNING: Removing unreachable block (ram,0x00010985e53c) */
/* WARNING: Removing unreachable block (ram,0x00010985e564) */
/* WARNING: Removing unreachable block (ram,0x00010985e594) */

void FUN_10985e2e4(int *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 auStack_bc [7];
  char cStack_b5;
  char cStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined7 uStack_68;
  char cStack_61;
  undefined4 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  uStack_a8 = param_3[1];
  uStack_b0 = *param_3;
  uStack_98 = param_3[3];
  uStack_a0 = param_3[2];
  uStack_88 = param_3[5];
  uStack_90 = param_3[4];
  uStack_80 = param_3[6];
  FUN_109874f74(param_1,&uStack_b0,auStack_bc);
  if (*param_1 != 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 2));
  }
  if (cStack_b5 != '\x01') {
    func_0x000107c31940(&uStack_e8,&UNK_10f581ce8);
    *param_1 = -1;
    if (-1 < lStack_d8) {
      *(undefined8 *)(param_1 + 4) = uStack_e0;
      *(ulong *)(param_1 + 2) = CONCAT44(uStack_e4,uStack_e8);
      *(long *)(param_1 + 6) = lStack_d8;
      return;
    }
    func_0x000107c3192c(param_1 + 2,CONCAT44(uStack_e4,uStack_e8),uStack_e0);
    if (-1 < lStack_d8) {
      return;
    }
    uVar2 = CONCAT44(uStack_e4,uStack_e8);
    goto LAB_10985e4c0;
  }
  if (cStack_b4 == '\x01') {
    plVar1 = (long *)0x68;
    __Znwm();
    *(undefined2 *)(plVar1 + 9) = 0;
    plVar1[8] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[5] = 0;
    plVar1[4] = 0;
    plVar1[3] = 0;
    plVar1[2] = 0;
    plVar1[1] = 0;
    plVar1[0xb] = 0;
    plVar1[0xc] = 0;
    ppuVar3 = &PTR_FUN_110b15e00;
    plVar1[10] = 0;
LAB_10985e438:
    *plVar1 = (long)ppuVar3;
    lStack_d0 = 0;
    lStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    plStack_c8 = (long *)0x0;
    plVar1[0xb] = param_4;
    FUN_10987528c(param_1,plVar1,param_2,param_3,param_4);
    if (*param_1 == 0) {
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 2));
      }
      *param_1 = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  else {
    if (cStack_b4 == '\0') {
      plVar1 = (long *)0x60;
      __Znwm();
      *(undefined2 *)(plVar1 + 9) = 0;
      plVar1[8] = 0;
      plVar1[7] = 0;
      plVar1[6] = 0;
      plVar1[5] = 0;
      plVar1[4] = 0;
      plVar1[3] = 0;
      plVar1[2] = 0;
      plVar1[1] = 0;
      ppuVar3 = &PTR_FUN_110b16220;
      plVar1[10] = 0;
      plVar1[0xb] = 0;
      goto LAB_10985e438;
    }
    func_0x000107c31940(&uStack_78,&UNK_10f581c94);
    uStack_60 = 0xffffffff;
    lStack_50 = lStack_70;
    uStack_58 = uStack_78;
    lStack_d0 = CONCAT17(cStack_61,uStack_68);
    uStack_e8 = 0xffffffff;
    lStack_d8 = lStack_70;
    uStack_e0 = uStack_78;
    plStack_c8 = (long *)0x0;
    *param_1 = -1;
    if (cStack_61 < '\0') {
      func_0x000107c3192c(param_1 + 2,uStack_78,lStack_70);
    }
    else {
      *(long *)(param_1 + 4) = lStack_70;
      *(undefined8 *)(param_1 + 2) = uStack_78;
      *(long *)(param_1 + 6) = lStack_d0;
      uStack_e8 = 0xffffffff;
    }
  }
  plVar1 = plStack_c8;
  plStack_c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  uVar2 = uStack_e0;
  if (-1 < lStack_d0) {
    return;
  }
LAB_10985e4c0:
  __ZdlPv(uVar2);
  return;
}



/* Entry: 10985e644; end: 10985e78f;  */

void FUN_10985e644(int *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int aiStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  char cStack_31;
  
  plVar1 = (long *)0xd8;
  __Znwm();
  plVar1[2] = 0;
  plVar1[1] = 0;
  plVar1[4] = 0;
  plVar1[3] = 0;
  plVar1[6] = 0;
  plVar1[5] = 0;
  plVar1[8] = 0;
  plVar1[7] = 0;
  plVar1[10] = 0;
  plVar1[9] = 0;
  plVar1[0xc] = 0;
  plVar1[0xb] = 0;
  plVar1[0xe] = 0;
  plVar1[0xd] = 0;
  plVar1[0x10] = 0;
  plVar1[0xf] = 0;
  plVar1[0x12] = 0;
  plVar1[0x11] = 0;
  *(undefined8 *)((long)plVar1 + 0x9c) = 0;
  *(undefined8 *)((long)plVar1 + 0x94) = 0;
  *plVar1 = (long)&PTR_DAT_110b16440;
  plVar1[0x16] = 0;
  plVar1[0x15] = 0;
  plVar1[0x18] = 0;
  plVar1[0x17] = 0;
  plVar1[0x1a] = 0;
  plVar1[0x19] = 0;
  FUN_10985e2e4(aiStack_50,param_2,param_3,plVar1);
  if (aiStack_50[0] == 0) {
    if (cStack_31 < '\0') {
      __ZdlPv(uStack_48);
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(long **)(param_1 + 8) = plVar1;
  }
  else {
    *param_1 = aiStack_50[0];
    if (cStack_31 < '\0') {
      func_0x000107c3192c(param_1 + 2,uStack_48,uStack_40);
      param_1[8] = 0;
      param_1[9] = 0;
      if (cStack_31 < '\0') {
        __ZdlPv(uStack_48);
      }
    }
    else {
      *(undefined8 *)(param_1 + 4) = uStack_40;
      *(undefined8 *)(param_1 + 2) = uStack_48;
      *(ulong *)(param_1 + 6) = CONCAT17(cStack_31,uStack_38);
      param_1[8] = 0;
      param_1[9] = 0;
    }
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}



/* Entry: 10985e790; end: 10985e91b;  */

void FUN_10985e790(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if (param_1[2] != 0) {
    lVar3 = *param_1;
    plVar2 = param_1 + 1;
    *param_1 = (long)plVar2;
    *(undefined8 *)(*plVar2 + 0x10) = 0;
    *plVar2 = 0;
    param_1[2] = 0;
    lVar4 = *(long *)(lVar3 + 8);
    if (lVar4 != 0) {
      lVar3 = lVar4;
    }
    plStack_60 = param_1;
    lStack_58 = lVar3;
    lStack_50 = lVar3;
    if ((lVar3 != 0) && (lVar4 = lVar3, FUN_10985e91c(), lStack_58 = lVar4, param_2 != param_3)) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar3 + 0x20,param_2 + 4);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar3 + 0x38,param_2 + 7);
        lVar3 = lStack_50;
        plVar2 = param_1;
        func_0x000107c34ef4(param_1,&uStack_48,lStack_50 + 0x20);
        func_0x000107c34eec(param_1,uStack_48,plVar2,lVar3);
        lStack_50 = lStack_58;
        if (lStack_58 != 0) {
          FUN_10985e91c();
        }
        plVar2 = (long *)param_2[1];
        plVar5 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar5[2];
            bVar1 = (long *)*param_2 != plVar5;
            plVar5 = param_2;
          } while (bVar1);
        }
        else {
          do {
            param_2 = plVar2;
            plVar2 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar3 = lStack_50;
      } while (lStack_50 != 0 && param_2 != param_3);
    }
    FUN_10985e970(&plStack_60);
  }
  while (param_2 != param_3) {
    FUN_10985e9c4(param_1,param_2 + 4);
    plVar2 = (long *)param_2[1];
    plVar5 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar5[2];
        bVar1 = (long *)*param_2 != plVar5;
        plVar5 = param_2;
      } while (bVar1);
    }
    else {
      do {
        param_2 = plVar2;
        plVar2 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10985e91c; end: 10985e96f;  */

void FUN_10985e91c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 10985e970; end: 10985e9c3;  */

undefined8 * FUN_10985e970(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c34ee4(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    func_0x000107c34ee4(*param_1);
  }
  return param_1;
}



/* Entry: 10985e9c4; end: 10985ea2f;  */

long FUN_10985e9c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long alStack_38 [3];
  
  FUN_109566ff0(alStack_38);
  uVar1 = param_1;
  func_0x000107c34ef4(param_1,&uStack_40,alStack_38[0] + 0x20);
  func_0x000107c34eec(param_1,uStack_40,uVar1,alStack_38[0]);
  return alStack_38[0];
}



/* Entry: 10985ea30; end: 10985ea7b;  */

/* WARNING: Removing unreachable block (ram,0x0001098604d8) */

undefined8 FUN_10985ea30(uint param_1,int param_2,long *param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined4 uStack_c4;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  ulong in_stack_ffffffffffffffb8;
  
  if (param_1 == 0) {
    return 1;
  }
  lVar10 = param_3[2] + 1;
  if (param_3[1] < lVar10) {
    return 0;
  }
  cVar2 = *(char *)(*param_3 + param_3[2]);
  param_3[2] = lVar10;
  if (cVar2 != '\x01') {
    if (cVar2 != '\0') {
      return 0;
    }
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0;
    lStack_c0 = 0;
    uStack_a8 = uStack_a8 & 0xffffffff00000000;
    plVar8 = &lStack_c0;
    FUN_10985ec98(plVar8,param_3);
    if (((ulong)plVar8 & 1) != 0) {
      plVar8 = &lStack_c0;
      FUN_10985ee8c(plVar8,param_3);
      if (((int)plVar8 != 0) && ((param_1 == 0 || ((int)uStack_a8 != 0)))) {
        *(undefined1 *)(param_3 + 6) = 1;
        lVar10 = param_3[2];
        param_3[3] = *param_3 + lVar10;
        param_3[4] = *param_3 + param_3[1];
        param_3[5] = 0;
        if (param_1 == 0) {
          uVar13 = 0;
        }
        else {
          uVar23 = 0;
          iVar24 = 0;
          do {
            plVar8 = &lStack_c0;
            FUN_10985efdc(plVar8);
            if (0 < param_2) {
              puVar19 = param_4 + iVar24;
              iVar25 = param_2;
              do {
                plVar9 = param_3;
                func_0x00010985f050(param_3,plVar8,&uStack_c4);
                if (((ulong)plVar9 & 1) == 0) goto LAB_10985eaf0;
                *puVar19 = uStack_c4;
                iVar24 = iVar24 + 1;
                iVar25 = iVar25 + -1;
                puVar19 = puVar19 + 1;
              } while (iVar25 != 0);
            }
            uVar23 = uVar23 + param_2;
          } while (uVar23 < param_1);
          lVar10 = param_3[2];
          uVar13 = param_3[5] + 7U >> 3;
        }
        *(undefined1 *)(param_3 + 6) = 0;
        param_3[2] = uVar13 + lVar10;
        uVar22 = 1;
        goto LAB_10985eaf4;
      }
    }
LAB_10985eaf0:
    uVar22 = 0;
LAB_10985eaf4:
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a0 != 0) {
      lStack_98 = uStack_a0;
      __ZdlPv();
    }
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      __ZdlPv();
    }
    return uVar22;
  }
  lVar10 = param_3[2] + 1;
  if (param_3[1] < lVar10) {
LAB_10985ec18:
    return 0;
  }
  uVar3 = *(undefined1 *)(*param_3 + param_3[2]);
  param_3[2] = lVar10;
  uVar23 = uStack_90._4_4_;
  switch(uVar3) {
  case 1:
    break;
  case 2:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_10985f844:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_10985fa04:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_10985fa54:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_10985fa94:
                          uVar15 = uVar15 | 0x4000;
LAB_10985fa9c:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0xe == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x40;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfff) + *piVar1 * (uVar15 >> 0xc)) - piVar1[1];
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_10985f858;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar20 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_10985fbb4;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_10985fa94;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                                   & 0x3fffffff;
LAB_10985fbb4:
                          uVar15 = uVar20 + 0x4000;
                          if (uVar20 >> 0xe < 0xff) goto LAB_10985fa9c;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_10985fa54;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_10985f854;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_10985f954:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_10985f854;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_10985f954;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_10985f854;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x1000 < uVar23) goto LAB_10985f854;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x1000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_10985fa04;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_10985f844;
        }
      }
    }
LAB_10985f854:
    uVar22 = 0;
LAB_10985f858:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 3:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_10985fc78:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_10985fe38:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_10985fe88:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_10985fec8:
                          uVar15 = uVar15 | 0x4000;
LAB_10985fed0:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0xe == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x40;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfff) + *piVar1 * (uVar15 >> 0xc)) - piVar1[1];
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_10985fc8c;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar20 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_10985ffe8;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_10985fec8;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                                   & 0x3fffffff;
LAB_10985ffe8:
                          uVar15 = uVar20 + 0x4000;
                          if (uVar20 >> 0xe < 0xff) goto LAB_10985fed0;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_10985fe88;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_10985fc88;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_10985fd88:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_10985fc88;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_10985fd88;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_10985fc88;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x1000 < uVar23) goto LAB_10985fc88;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x1000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_10985fe38;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_10985fc78;
        }
      }
    }
LAB_10985fc88:
    uVar22 = 0;
LAB_10985fc8c:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 4:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_1098600ac:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_10986026c:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_1098602bc:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_1098602fc:
                          uVar15 = uVar15 | 0x4000;
LAB_109860304:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0xe == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x40;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfff) + *piVar1 * (uVar15 >> 0xc)) - piVar1[1];
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_1098600c0;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar20 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_10986041c;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_1098602fc;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                                   & 0x3fffffff;
LAB_10986041c:
                          uVar15 = uVar20 + 0x4000;
                          if (uVar20 >> 0xe < 0xff) goto LAB_109860304;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_1098602bc;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_1098600bc;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_1098601bc:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_1098600bc;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_1098601bc;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_1098600bc;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x1000 < uVar23) goto LAB_1098600bc;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x1000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_10986026c;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_1098600ac;
        }
      }
    }
LAB_1098600bc:
    uVar22 = 0;
LAB_1098600c0:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 5:
    uVar13 = 0;
    iVar24 = (int)&uStack_90;
    lStack_68 = 0;
    lStack_70 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_90 = 0;
    uStack_78 = uStack_78 & 0xffffffff00000000;
    FUN_10985ec98();
    if (((uVar13 & 1) == 0) ||
       (((param_1 != 0 && ((int)uStack_78 == 0)) || (FUN_10985ee8c(&uStack_90,param_3), iVar24 == 0)
        ))) {
      uVar22 = 0;
    }
    else {
      if (param_1 != 0) {
        uVar13 = (ulong)param_1;
        do {
          uVar7 = (int)&uStack_90;
          FUN_10985efdc();
          *param_4 = uVar7;
          uVar13 = uVar13 - 1;
          param_4 = param_4 + 1;
        } while (uVar13 != 0);
      }
      uVar22 = 1;
    }
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (uStack_90 != 0) {
      lStack_88 = uStack_90;
      __ZdlPv();
    }
    return uVar22;
  case 6:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_1098605c4:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_109860784:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_1098607d4:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_109860814:
                          uVar15 = uVar15 | 0x4000;
LAB_10986081c:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0xe == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x40;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfff) + *piVar1 * (uVar15 >> 0xc)) - piVar1[1];
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_1098605d8;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar20 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_109860934;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_109860814;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                                   & 0x3fffffff;
LAB_109860934:
                          uVar15 = uVar20 + 0x4000;
                          if (uVar20 >> 0xe < 0xff) goto LAB_10986081c;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_1098607d4;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_1098605d4;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_1098606d4:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_1098605d4;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_1098606d4;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_1098605d4;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x1000 < uVar23) goto LAB_1098605d4;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x1000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_109860784;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_1098605c4;
        }
      }
    }
LAB_1098605d4:
    uVar22 = 0;
LAB_1098605d8:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 7:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_1098609f8:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_109860bb8:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_109860c08:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_109860c48:
                          uVar15 = uVar15 | 0x4000;
LAB_109860c50:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0xe == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x40;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfff) + *piVar1 * (uVar15 >> 0xc)) - piVar1[1];
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109860a0c;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar20 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_109860d68;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_109860c48;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                                   & 0x3fffffff;
LAB_109860d68:
                          uVar15 = uVar20 + 0x4000;
                          if (uVar20 >> 0xe < 0xff) goto LAB_109860c50;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_109860c08;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109860a08;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_109860b08:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109860a08;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_109860b08;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109860a08;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x1000 < uVar23) goto LAB_109860a08;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x1000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_109860bb8;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_1098609f8;
        }
      }
    }
LAB_109860a08:
    uVar22 = 0;
LAB_109860a0c:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 8:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109860e2c:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_109860fec:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_10986103c:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_10986107c:
                          uVar15 = uVar15 | 0x4000;
LAB_109861084:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0xe == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x40;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfff) + *piVar1 * (uVar15 >> 0xc)) - piVar1[1];
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109860e40;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar20 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_10986119c;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_10986107c;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                                   & 0x3fffffff;
LAB_10986119c:
                          uVar15 = uVar20 + 0x4000;
                          if (uVar20 >> 0xe < 0xff) goto LAB_109861084;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_10986103c;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109860e3c;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_109860f3c:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109860e3c;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_109860f3c;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109860e3c;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x1000 < uVar23) goto LAB_109860e3c;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x1000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_109860fec;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109860e2c;
        }
      }
    }
LAB_109860e3c:
    uVar22 = 0;
LAB_109860e40:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 9:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109861260:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_109861420:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_109861470:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
                        }
                        else {
                          bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                          if (bVar4 != 2) {
                            if (bVar4 == 1) {
                              if (uVar15 != 1) {
                                uVar23 = uVar15 - 2;
                                lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                                uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                         (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                                goto LAB_1098614b8;
                              }
                            }
                            else {
                              uVar23 = uVar15 - 4;
                              uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) +
                                                -4);
                              uVar15 = uVar20 & 0x3fffffff;
                              if ((uVar20 >> 0xf & 0x7fff) < 0xff) goto LAB_1098614b8;
                            }
                            goto LAB_109861270;
                          }
                          uVar23 = uVar15 - 3;
                          if (uVar15 < 3) goto LAB_109861270;
                          lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                          uVar15 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar11 + -2) << 8 | (uint)*(byte *)(lVar11 + -3);
                        }
LAB_1098614b8:
                        uVar15 = uVar15 + 0x8000;
                        if (param_1 != 0) {
                          uVar13 = 0;
                          do {
                            if (uVar15 >> 0xf == 0) {
                              uVar17 = (ulong)uVar23;
                              uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                              uVar21 = uVar23;
                              uVar14 = uVar15;
                              do {
                                uVar17 = uVar17 - 1;
                                uVar5 = uVar21 - 1;
                                uVar23 = uVar20;
                                uVar15 = uVar14;
                                if ((int)uVar21 < 1) break;
                                uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                         uVar14 << 8;
                                bVar6 = uVar14 < 0x80;
                                uVar21 = uVar5;
                                uVar23 = uVar5;
                                uVar14 = uVar15;
                              } while (bVar6);
                            }
                            uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0x1fff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                            uVar15 = ((uVar15 & 0x1fff) + *piVar1 * (uVar15 >> 0xd)) - piVar1[1];
                            param_4[uVar13] = uVar20;
                            uVar13 = uVar13 + 1;
                          } while (uVar13 != param_1);
                        }
                        uVar22 = 1;
                        goto LAB_109861274;
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_109861470;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109861270;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_109861370:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109861270;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_109861370;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109861270;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x2000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x2000 < uVar23) goto LAB_109861270;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x2000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_109861420;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109861260;
        }
      }
    }
LAB_109861270:
    uVar22 = 0;
LAB_109861274:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 10:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109861694:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_109861854:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_1098618a4:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
                        }
                        else {
                          bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                          if (bVar4 != 2) {
                            if (bVar4 == 1) {
                              if (uVar15 != 1) {
                                uVar23 = uVar15 - 2;
                                lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                                uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                         (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                                goto LAB_1098618ec;
                              }
                            }
                            else {
                              uVar23 = uVar15 - 4;
                              uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) +
                                                -4);
                              uVar15 = uVar20 & 0x3fffffff;
                              if ((uVar20 >> 0x11 & 0x1fff) < 0xff) goto LAB_1098618ec;
                            }
                            goto LAB_1098616a4;
                          }
                          uVar23 = uVar15 - 3;
                          if (uVar15 < 3) goto LAB_1098616a4;
                          lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                          uVar15 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar11 + -2) << 8 | (uint)*(byte *)(lVar11 + -3);
                        }
LAB_1098618ec:
                        uVar15 = uVar15 + 0x20000;
                        if (param_1 != 0) {
                          uVar13 = 0;
                          do {
                            if (uVar15 >> 0x11 == 0) {
                              uVar17 = (ulong)uVar23;
                              uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                              uVar21 = uVar23;
                              uVar14 = uVar15;
                              do {
                                uVar17 = uVar17 - 1;
                                uVar5 = uVar21 - 1;
                                uVar23 = uVar20;
                                uVar15 = uVar14;
                                if ((int)uVar21 < 1) break;
                                uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                         uVar14 << 8;
                                bVar6 = uVar14 < 0x200;
                                uVar21 = uVar5;
                                uVar23 = uVar5;
                                uVar14 = uVar15;
                              } while (bVar6);
                            }
                            uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0x7fff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                            uVar15 = ((uVar15 & 0x7fff) + *piVar1 * (uVar15 >> 0xf)) - piVar1[1];
                            param_4[uVar13] = uVar20;
                            uVar13 = uVar13 + 1;
                          } while (uVar13 != param_1);
                        }
                        uVar22 = 1;
                        goto LAB_1098616a8;
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_1098618a4;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_1098616a4;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_1098617a4:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_1098616a4;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_1098617a4;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_1098616a4;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x8000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x8000 < uVar23) goto LAB_1098616a4;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x8000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_109861854;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109861694;
        }
      }
    }
LAB_1098616a4:
    uVar22 = 0;
LAB_1098616a8:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0xb:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109861ac8:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_109861c88:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_109861cd8:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
                        }
                        else {
                          bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                          if (bVar4 != 2) {
                            if (bVar4 == 1) {
                              if (uVar15 != 1) {
                                uVar23 = uVar15 - 2;
                                lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                                uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                         (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                                goto LAB_109861d20;
                              }
                            }
                            else {
                              uVar23 = uVar15 - 4;
                              uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) +
                                                -4);
                              uVar15 = uVar20 & 0x3fffffff;
                              if ((uVar20 >> 0x12 & 0xfff) < 0xff) goto LAB_109861d20;
                            }
                            goto LAB_109861ad8;
                          }
                          uVar23 = uVar15 - 3;
                          if (uVar15 < 3) goto LAB_109861ad8;
                          lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                          uVar15 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar11 + -2) << 8 | (uint)*(byte *)(lVar11 + -3);
                        }
LAB_109861d20:
                        uVar15 = uVar15 + 0x40000;
                        if (param_1 != 0) {
                          uVar13 = 0;
                          do {
                            if (uVar15 >> 0x12 == 0) {
                              uVar17 = (ulong)uVar23;
                              uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                              uVar21 = uVar23;
                              uVar14 = uVar15;
                              do {
                                uVar17 = uVar17 - 1;
                                uVar5 = uVar21 - 1;
                                uVar23 = uVar20;
                                uVar15 = uVar14;
                                if ((int)uVar21 < 1) break;
                                uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                         uVar14 << 8;
                                bVar6 = uVar14 < 0x400;
                                uVar21 = uVar5;
                                uVar23 = uVar5;
                                uVar14 = uVar15;
                              } while (bVar6);
                            }
                            uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                            uVar15 = (*piVar1 * (uVar15 >> 0x10) + (uVar15 & 0xffff)) - piVar1[1];
                            param_4[uVar13] = uVar20;
                            uVar13 = uVar13 + 1;
                          } while (uVar13 != param_1);
                        }
                        uVar22 = 1;
                        goto LAB_109861adc;
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_109861cd8;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109861ad8;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_109861bd8:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109861ad8;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_109861bd8;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109861ad8;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x10000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x10000 < uVar23) goto LAB_109861ad8;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x10000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_109861c88;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109861ac8;
        }
      }
    }
LAB_109861ad8:
    uVar22 = 0;
LAB_109861adc:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0xc:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109861f00:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_1098620c0:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_109862110:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
                        }
                        else {
                          bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                          if (bVar4 != 2) {
                            if (bVar4 == 1) {
                              if (uVar15 != 1) {
                                uVar23 = uVar15 - 2;
                                lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                                uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                         (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                                goto LAB_109862158;
                              }
                            }
                            else {
                              uVar23 = uVar15 - 4;
                              uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) +
                                                -4);
                              uVar15 = uVar20 & 0x3fffffff;
                              if ((uVar20 >> 0x14 & 0x3ff) < 0xff) goto LAB_109862158;
                            }
                            goto LAB_109861f10;
                          }
                          uVar23 = uVar15 - 3;
                          if (uVar15 < 3) goto LAB_109861f10;
                          lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                          uVar15 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar11 + -2) << 8 | (uint)*(byte *)(lVar11 + -3);
                        }
LAB_109862158:
                        uVar15 = uVar15 + 0x100000;
                        if (param_1 != 0) {
                          uVar13 = 0;
                          do {
                            if (uVar15 >> 0x14 == 0) {
                              uVar17 = (ulong)uVar23;
                              uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                              uVar21 = uVar23;
                              uVar14 = uVar15;
                              do {
                                uVar17 = uVar17 - 1;
                                uVar5 = uVar21 - 1;
                                uVar23 = uVar20;
                                uVar15 = uVar14;
                                if ((int)uVar21 < 1) break;
                                uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                         uVar14 << 8;
                                bVar6 = uVar14 < 0x1000;
                                uVar21 = uVar5;
                                uVar23 = uVar5;
                                uVar14 = uVar15;
                              } while (bVar6);
                            }
                            uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0x3ffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                            uVar15 = ((uVar15 & 0x3ffff) + *piVar1 * (uVar15 >> 0x12)) - piVar1[1];
                            param_4[uVar13] = uVar20;
                            uVar13 = uVar13 + 1;
                          } while (uVar13 != param_1);
                        }
                        uVar22 = 1;
                        goto LAB_109861f14;
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_109862110;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109861f10;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_109862010:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109861f10;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_109862010;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109861f10;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x40000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x40000 < uVar23) goto LAB_109861f10;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x40000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_1098620c0;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109861f00;
        }
      }
    }
LAB_109861f10:
    uVar22 = 0;
LAB_109861f14:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0xd:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109862334:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_1098624f4:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_109862544:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
                        }
                        else {
                          bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                          if (bVar4 != 2) {
                            if (bVar4 == 1) {
                              if (uVar15 != 1) {
                                uVar23 = uVar15 - 2;
                                lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                                uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                         (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                                goto LAB_10986258c;
                              }
                            }
                            else {
                              uVar23 = uVar15 - 4;
                              uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) +
                                                -4);
                              uVar15 = uVar20 & 0x3fffffff;
                              if ((uVar20 >> 0x15 & 0x1ff) < 0xff) goto LAB_10986258c;
                            }
                            goto LAB_109862344;
                          }
                          uVar23 = uVar15 - 3;
                          if (uVar15 < 3) goto LAB_109862344;
                          lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                          uVar15 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar11 + -2) << 8 | (uint)*(byte *)(lVar11 + -3);
                        }
LAB_10986258c:
                        uVar15 = uVar15 + 0x200000;
                        if (param_1 != 0) {
                          uVar13 = 0;
                          do {
                            if (uVar15 >> 0x15 == 0) {
                              uVar17 = (ulong)uVar23;
                              uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                              uVar21 = uVar23;
                              uVar14 = uVar15;
                              do {
                                uVar17 = uVar17 - 1;
                                uVar5 = uVar21 - 1;
                                uVar23 = uVar20;
                                uVar15 = uVar14;
                                if ((int)uVar21 < 1) break;
                                uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                         uVar14 << 8;
                                bVar6 = uVar14 < 0x2000;
                                uVar21 = uVar5;
                                uVar23 = uVar5;
                                uVar14 = uVar15;
                              } while (bVar6);
                            }
                            uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0x7ffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                            uVar15 = ((uVar15 & 0x7ffff) + *piVar1 * (uVar15 >> 0x13)) - piVar1[1];
                            param_4[uVar13] = uVar20;
                            uVar13 = uVar13 + 1;
                          } while (uVar13 != param_1);
                        }
                        uVar22 = 1;
                        goto LAB_109862348;
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_109862544;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109862344;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_109862444:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109862344;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_109862444;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109862344;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x80000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x80000 < uVar23) goto LAB_109862344;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x80000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_1098624f4;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109862334;
        }
      }
    }
LAB_109862344:
    uVar22 = 0;
LAB_109862348:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0xe:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109862768:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_109862928:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_109862978:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_1098629b8:
                          uVar15 = uVar15 | 0x400000;
LAB_1098629c0:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0x16 == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x4000;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfffff) + *piVar1 * (uVar15 >> 0x14)) - piVar1[1]
                              ;
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_10986277c;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_1098629b8;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_1098629b8;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                          ;
                          uVar15 = (uVar20 & 0x3fffffff) + 0x400000;
                          if ((uVar20 >> 0x16 & 0xff) < 0xff) goto LAB_1098629c0;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_109862978;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109862778;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_109862878:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109862778;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_109862878;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109862778;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x100000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x100000 < uVar23) goto LAB_109862778;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x100000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_109862928;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109862768;
        }
      }
    }
LAB_109862778:
    uVar22 = 0;
LAB_10986277c:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0xf:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109862b9c:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_109862d5c:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_109862dac:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_109862dec:
                          uVar15 = uVar15 | 0x400000;
LAB_109862df4:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0x16 == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x4000;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfffff) + *piVar1 * (uVar15 >> 0x14)) - piVar1[1]
                              ;
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109862bb0;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_109862dec;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_109862dec;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                          ;
                          uVar15 = (uVar20 & 0x3fffffff) + 0x400000;
                          if ((uVar20 >> 0x16 & 0xff) < 0xff) goto LAB_109862df4;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_109862dac;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109862bac;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_109862cac:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109862bac;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_109862cac;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109862bac;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x100000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x100000 < uVar23) goto LAB_109862bac;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x100000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_109862d5c;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109862b9c;
        }
      }
    }
LAB_109862bac:
    uVar22 = 0;
LAB_109862bb0:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0x10:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109862fd0:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_109863190:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_1098631e0:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_109863220:
                          uVar15 = uVar15 | 0x400000;
LAB_109863228:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0x16 == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x4000;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfffff) + *piVar1 * (uVar15 >> 0x14)) - piVar1[1]
                              ;
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109862fe4;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_109863220;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_109863220;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                          ;
                          uVar15 = (uVar20 & 0x3fffffff) + 0x400000;
                          if ((uVar20 >> 0x16 & 0xff) < 0xff) goto LAB_109863228;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_1098631e0;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109862fe0;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_1098630e0:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109862fe0;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_1098630e0;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109862fe0;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x100000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x100000 < uVar23) goto LAB_109862fe0;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x100000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_109863190;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109862fd0;
        }
      }
    }
LAB_109862fe0:
    uVar22 = 0;
LAB_109862fe4:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0x11:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109863404:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_1098635c4:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_109863614:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_109863654:
                          uVar15 = uVar15 | 0x400000;
LAB_10986365c:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0x16 == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x4000;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfffff) + *piVar1 * (uVar15 >> 0x14)) - piVar1[1]
                              ;
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109863418;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_109863654;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_109863654;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                          ;
                          uVar15 = (uVar20 & 0x3fffffff) + 0x400000;
                          if ((uVar20 >> 0x16 & 0xff) < 0xff) goto LAB_10986365c;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_109863614;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109863414;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_109863514:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109863414;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_109863514;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109863414;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x100000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x100000 < uVar23) goto LAB_109863414;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x100000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_1098635c4;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109863404;
        }
      }
    }
LAB_109863414:
    uVar22 = 0;
LAB_109863418:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0x12:
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    uStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_3 + 0x32) != 0) {
      if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
        lVar11 = param_3[1];
        lVar10 = param_3[2] + 4;
        if (lVar10 <= lVar11) {
          uVar15 = *(uint *)(*param_3 + param_3[2]);
          uStack_90 = CONCAT44(uVar23,uVar15);
          param_3[2] = lVar10;
LAB_109863838:
          if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
            func_0x0001074287b0(&uStack_a8,uVar15);
            uVar13 = uStack_a8;
            uVar23 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar6 = true;
LAB_1098639f8:
              if ((param_1 == 0) || (!bVar6)) {
                if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2] + 8;
                  if (lVar10 <= lVar11) {
                    in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                    param_3[2] = lVar10;
LAB_109863a48:
                    if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                      param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                      uVar15 = (uint)in_stack_ffffffffffffffb8;
                      uVar23 = uVar15 - 1;
                      if (0 < (int)uVar15) {
                        lVar10 = *param_3 + lVar10;
                        if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                          uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_109863a88:
                          uVar15 = uVar15 | 0x400000;
LAB_109863a90:
                          if (param_1 != 0) {
                            uVar13 = 0;
                            do {
                              if (uVar15 >> 0x16 == 0) {
                                uVar17 = (ulong)uVar23;
                                uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                                uVar21 = uVar23;
                                uVar14 = uVar15;
                                do {
                                  uVar17 = uVar17 - 1;
                                  uVar5 = uVar21 - 1;
                                  uVar23 = uVar20;
                                  uVar15 = uVar14;
                                  if ((int)uVar21 < 1) break;
                                  uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                           uVar14 << 8;
                                  bVar6 = uVar14 < 0x4000;
                                  uVar21 = uVar5;
                                  uVar23 = uVar5;
                                  uVar14 = uVar15;
                                } while (bVar6);
                              }
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar15 = ((uVar15 & 0xfffff) + *piVar1 * (uVar15 >> 0x14)) - piVar1[1]
                              ;
                              param_4[uVar13] = uVar20;
                              uVar13 = uVar13 + 1;
                            } while (uVar13 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_10986384c;
                        }
                        bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                        if (bVar4 == 2) {
                          uVar23 = uVar15 - 3;
                          if (2 < uVar15) {
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar11 + -2) << 8 |
                                     (uint)*(byte *)(lVar11 + -3);
                            goto LAB_109863a88;
                          }
                        }
                        else if (bVar4 == 1) {
                          if (uVar15 != 1) {
                            uVar23 = uVar15 - 2;
                            lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                            uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                     (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                            goto LAB_109863a88;
                          }
                        }
                        else {
                          uVar23 = uVar15 - 4;
                          uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4)
                          ;
                          uVar15 = (uVar20 & 0x3fffffff) + 0x400000;
                          if ((uVar20 >> 0x16 & 0xff) < 0xff) goto LAB_109863a90;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar24 = 1;
                  func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                  if (iVar24 != 0) {
                    lVar11 = param_3[1];
                    lVar10 = param_3[2];
                    goto LAB_109863a48;
                  }
                }
              }
            }
            else {
              uVar15 = 0;
              lVar10 = param_3[1];
              lVar11 = param_3[2];
              do {
                lVar16 = lVar11 + 1;
                if (lVar10 < lVar16) goto LAB_109863848;
                bVar4 = *(byte *)(*param_3 + lVar11);
                param_3[2] = lVar16;
                uVar17 = (ulong)(bVar4 >> 2);
                uVar20 = bVar4 & 3;
                if ((bVar4 & 3) == 0) {
LAB_109863948:
                  *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                  uVar20 = uVar15;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar11 = lVar16;
                    do {
                      lVar16 = lVar11 + 1;
                      if (lVar10 < lVar16) goto LAB_109863848;
                      bVar4 = *(byte *)(*param_3 + lVar11);
                      param_3[2] = lVar16;
                      uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar11 = lVar16;
                    } while (uVar20 != 0);
                    goto LAB_109863948;
                  }
                  uVar20 = (bVar4 >> 2) + uVar15;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109863848;
                  lVar11 = uVar17 + 1;
                  do {
                    *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                    uVar15 = uVar15 + 1;
                    lVar11 = lVar11 + -1;
                  } while (lVar11 != 0);
                }
                uVar15 = uVar20 + 1;
                uVar17 = uStack_90 & 0xffffffff;
                lVar11 = lVar16;
              } while (uVar15 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x100000);
              FUN_10985f194(&lStack_70,uVar17);
              if (uVar23 != 0) {
                uVar12 = 0;
                uVar18 = 0;
                do {
                  puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                  uVar15 = (uint)uVar18;
                  *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                  puVar19[1] = uVar15;
                  uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                  if (0x100000 < uVar23) goto LAB_109863848;
                  if (uVar15 < uVar23) {
                    lVar10 = uVar23 - uVar18;
                    puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                    do {
                      *puVar19 = (int)uVar12;
                      lVar10 = lVar10 + -1;
                      puVar19 = puVar19 + 1;
                    } while (lVar10 != 0);
                  }
                  uVar12 = uVar12 + 1;
                  uVar18 = (ulong)uVar23;
                } while (uVar12 != uVar17);
                if (uVar23 == 0x100000) {
                  bVar6 = (uint)uStack_90 == 0;
                  goto LAB_1098639f8;
                }
              }
            }
          }
        }
      }
      else {
        iVar24 = 1;
        func_0x00010985f124(1,&uStack_90,param_3);
        if (iVar24 != 0) {
          lVar11 = param_3[1];
          lVar10 = param_3[2];
          uVar15 = (uint)uStack_90;
          goto LAB_109863838;
        }
      }
    }
LAB_109863848:
    uVar22 = 0;
LAB_10986384c:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (uStack_a8 != 0) {
      uStack_a0 = uStack_a8;
      __ZdlPv();
    }
    return uVar22;
  default:
    goto LAB_10985ec18;
  }
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_a8 = 0;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if (*(ushort *)((long)param_3 + 0x32) != 0) {
    if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
      lVar11 = param_3[1];
      lVar10 = param_3[2] + 4;
      if (lVar10 <= lVar11) {
        uVar15 = *(uint *)(*param_3 + param_3[2]);
        uStack_90 = CONCAT44(uVar23,uVar15);
        param_3[2] = lVar10;
LAB_10985f410:
        if ((long)(ulong)(uVar15 >> 6) <= lVar11 - lVar10) {
          func_0x0001074287b0(&uStack_a8,uVar15);
          uVar13 = uStack_a8;
          uVar23 = (uint)uStack_90;
          if ((uint)uStack_90 == 0) {
            bVar6 = true;
LAB_10985f5d0:
            if ((param_1 == 0) || (!bVar6)) {
              if (*(ushort *)((long)param_3 + 0x32) < 0x200) {
                lVar11 = param_3[1];
                lVar10 = param_3[2] + 8;
                if (lVar10 <= lVar11) {
                  in_stack_ffffffffffffffb8 = *(ulong *)(*param_3 + param_3[2]);
                  param_3[2] = lVar10;
LAB_10985f620:
                  if (in_stack_ffffffffffffffb8 <= (ulong)(lVar11 - lVar10)) {
                    param_3[2] = in_stack_ffffffffffffffb8 + lVar10;
                    uVar15 = (uint)in_stack_ffffffffffffffb8;
                    uVar23 = uVar15 - 1;
                    if (0 < (int)uVar15) {
                      lVar10 = *param_3 + lVar10;
                      if (*(byte *)(lVar10 + (ulong)uVar23) < 0x40) {
                        uVar15 = *(byte *)(lVar10 + (ulong)uVar23) & 0x3f;
LAB_10985f660:
                        uVar15 = uVar15 | 0x4000;
LAB_10985f668:
                        if (param_1 != 0) {
                          uVar13 = 0;
                          do {
                            if (uVar15 >> 0xe == 0) {
                              uVar17 = (ulong)uVar23;
                              uVar20 = uVar23 & (int)uVar23 >> 0x1f;
                              uVar21 = uVar23;
                              uVar14 = uVar15;
                              do {
                                uVar17 = uVar17 - 1;
                                uVar5 = uVar21 - 1;
                                uVar23 = uVar20;
                                uVar15 = uVar14;
                                if ((int)uVar21 < 1) break;
                                uVar15 = (uint)*(byte *)(lVar10 + (uVar17 & 0xffffffff)) |
                                         uVar14 << 8;
                                bVar6 = uVar14 < 0x40;
                                uVar21 = uVar5;
                                uVar23 = uVar5;
                                uVar14 = uVar15;
                              } while (bVar6);
                            }
                            uVar20 = *(uint *)(lStack_88 + (ulong)(uVar15 & 0xfff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                            uVar15 = ((uVar15 & 0xfff) + *piVar1 * (uVar15 >> 0xc)) - piVar1[1];
                            param_4[uVar13] = uVar20;
                            uVar13 = uVar13 + 1;
                          } while (uVar13 != param_1);
                        }
                        uVar22 = 1;
                        goto LAB_10985f424;
                      }
                      bVar4 = *(byte *)(lVar10 + (ulong)uVar23) >> 6;
                      if (bVar4 == 2) {
                        uVar23 = uVar15 - 3;
                        if (2 < uVar15) {
                          lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                          uVar20 = (*(byte *)(lVar11 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar11 + -2) << 8 | (uint)*(byte *)(lVar11 + -3);
                          goto LAB_10985f780;
                        }
                      }
                      else if (bVar4 == 1) {
                        if (uVar15 != 1) {
                          uVar23 = uVar15 - 2;
                          lVar11 = lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff);
                          uVar15 = (uint)*(byte *)(lVar11 + -2) |
                                   (*(byte *)(lVar11 + -1) & 0x3f) << 8;
                          goto LAB_10985f660;
                        }
                      }
                      else {
                        uVar23 = uVar15 - 4;
                        uVar20 = *(uint *)(lVar10 + (in_stack_ffffffffffffffb8 & 0x7fffffff) + -4) &
                                 0x3fffffff;
LAB_10985f780:
                        uVar15 = uVar20 + 0x4000;
                        if (uVar20 >> 0xe < 0xff) goto LAB_10985f668;
                      }
                    }
                  }
                }
              }
              else {
                iVar24 = 1;
                func_0x00010985f308(1,&stack0xffffffffffffffb8,param_3);
                if (iVar24 != 0) {
                  lVar11 = param_3[1];
                  lVar10 = param_3[2];
                  goto LAB_10985f620;
                }
              }
            }
          }
          else {
            uVar15 = 0;
            lVar10 = param_3[1];
            lVar11 = param_3[2];
            do {
              lVar16 = lVar11 + 1;
              if (lVar10 < lVar16) goto LAB_10985f420;
              bVar4 = *(byte *)(*param_3 + lVar11);
              param_3[2] = lVar16;
              uVar17 = (ulong)(bVar4 >> 2);
              uVar20 = bVar4 & 3;
              if ((bVar4 & 3) == 0) {
LAB_10985f520:
                *(int *)(uStack_a8 + (ulong)uVar15 * 4) = (int)uVar17;
                uVar20 = uVar15;
              }
              else {
                if (uVar20 != 3) {
                  uVar21 = 6;
                  lVar11 = lVar16;
                  do {
                    lVar16 = lVar11 + 1;
                    if (lVar10 < lVar16) goto LAB_10985f420;
                    bVar4 = *(byte *)(*param_3 + lVar11);
                    param_3[2] = lVar16;
                    uVar17 = (ulong)((uint)bVar4 << (ulong)(uVar21 & 0x1f) | (uint)uVar17);
                    uVar21 = uVar21 + 8;
                    uVar20 = uVar20 - 1;
                    lVar11 = lVar16;
                  } while (uVar20 != 0);
                  goto LAB_10985f520;
                }
                uVar20 = (bVar4 >> 2) + uVar15;
                if ((uint)uStack_90 <= uVar20) goto LAB_10985f420;
                lVar11 = uVar17 + 1;
                do {
                  *(undefined4 *)(uStack_a8 + (ulong)uVar15 * 4) = 0;
                  uVar15 = uVar15 + 1;
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
              uVar15 = uVar20 + 1;
              uVar17 = uStack_90 & 0xffffffff;
              lVar11 = lVar16;
            } while (uVar15 < (uint)uStack_90);
            func_0x0001074287b0(&lStack_88,0x1000);
            FUN_10985f194(&lStack_70,uVar17);
            if (uVar23 != 0) {
              uVar12 = 0;
              uVar18 = 0;
              do {
                puVar19 = (undefined4 *)(lStack_70 + uVar12 * 8);
                uVar15 = (uint)uVar18;
                *puVar19 = *(undefined4 *)(uVar13 + uVar12 * 4);
                puVar19[1] = uVar15;
                uVar23 = *(int *)(uVar13 + uVar12 * 4) + uVar15;
                if (0x1000 < uVar23) goto LAB_10985f420;
                if (uVar15 < uVar23) {
                  lVar10 = uVar23 - uVar18;
                  puVar19 = (undefined4 *)(lStack_88 + uVar18 * 4);
                  do {
                    *puVar19 = (int)uVar12;
                    lVar10 = lVar10 + -1;
                    puVar19 = puVar19 + 1;
                  } while (lVar10 != 0);
                }
                uVar12 = uVar12 + 1;
                uVar18 = (ulong)uVar23;
              } while (uVar12 != uVar17);
              if (uVar23 == 0x1000) {
                bVar6 = (uint)uStack_90 == 0;
                goto LAB_10985f5d0;
              }
            }
          }
        }
      }
    }
    else {
      iVar24 = 1;
      func_0x00010985f124(1,&uStack_90,param_3);
      if (iVar24 != 0) {
        lVar11 = param_3[1];
        lVar10 = param_3[2];
        uVar15 = (uint)uStack_90;
        goto LAB_10985f410;
      }
    }
  }
LAB_10985f420:
  uVar22 = 0;
LAB_10985f424:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (uStack_a8 != 0) {
    uStack_a0 = uStack_a8;
    __ZdlPv();
  }
  return uVar22;
}



/* Entry: 10985ea7c; end: 10985ec07;  */

undefined8 FUN_10985ea7c(uint param_1,int param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uStack_c4;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  lStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  lStack_c0 = 0;
  iStack_a8 = 0;
  plVar1 = &lStack_c0;
  FUN_10985ec98(plVar1,param_3);
  if (((ulong)plVar1 & 1) != 0) {
    plVar1 = &lStack_c0;
    FUN_10985ee8c(plVar1,param_3);
    if (((int)plVar1 != 0) && ((param_1 == 0 || (iStack_a8 != 0)))) {
      *(undefined1 *)(param_3 + 6) = 1;
      lVar3 = param_3[2];
      param_3[3] = *param_3 + lVar3;
      param_3[4] = *param_3 + param_3[1];
      param_3[5] = 0;
      if (param_1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar6 = 0;
        iVar7 = 0;
        do {
          plVar1 = &lStack_c0;
          FUN_10985efdc(plVar1);
          if (0 < param_2) {
            puVar8 = (undefined4 *)(param_4 + (long)iVar7 * 4);
            iVar9 = param_2;
            do {
              plVar2 = param_3;
              func_0x00010985f050(param_3,plVar1,&uStack_c4);
              if (((ulong)plVar2 & 1) == 0) goto LAB_10985eaf0;
              *puVar8 = uStack_c4;
              iVar7 = iVar7 + 1;
              iVar9 = iVar9 + -1;
              puVar8 = puVar8 + 1;
            } while (iVar9 != 0);
          }
          uVar6 = uVar6 + param_2;
        } while (uVar6 < param_1);
        lVar3 = param_3[2];
        uVar4 = param_3[5] + 7U >> 3;
      }
      *(undefined1 *)(param_3 + 6) = 0;
      param_3[2] = uVar4 + lVar3;
      uVar5 = 1;
      goto LAB_10985eaf4;
    }
  }
LAB_10985eaf0:
  uVar5 = 0;
LAB_10985eaf4:
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  return uVar5;
}



/* Entry: 10985ec08; end: 10985ec97;  */

undefined8 FUN_10985ec08(uint param_1,long *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  lVar9 = param_2[2] + 1;
  if (param_2[1] < lVar9) {
LAB_10985ec18:
    return 0;
  }
  uVar2 = *(undefined1 *)(*param_2 + param_2[2]);
  param_2[2] = lVar9;
  uVar10 = uStack_90._4_4_;
  switch(uVar2) {
  case 1:
    break;
  case 2:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_10985f844:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_10985fa04:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_10985fa54:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_10985fa94:
                          uVar20 = uVar13 | 0x4000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x400000000000;
LAB_10985fa9c:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0xe == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x40;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfff) + *piVar1 * (uVar20 >> 0xc)) - piVar1[1];
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_10985f858;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_10985fbb4;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_10985fa94;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff
                          ;
LAB_10985fbb4:
                          uVar20 = uVar13 + 0x4000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if (uVar13 >> 0xe < 0xff) goto LAB_10985fa9c;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_10985fa54;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_10985f854;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_10985f954:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_10985f854;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_10985f954;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_10985f854;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x1000 < uVar10) goto LAB_10985f854;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x1000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_10985fa04;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_10985f844;
        }
      }
    }
LAB_10985f854:
    uVar22 = 0;
LAB_10985f858:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 3:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_10985fc78:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_10985fe38:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_10985fe88:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_10985fec8:
                          uVar20 = uVar13 | 0x4000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x400000000000;
LAB_10985fed0:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0xe == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x40;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfff) + *piVar1 * (uVar20 >> 0xc)) - piVar1[1];
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_10985fc8c;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_10985ffe8;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_10985fec8;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff
                          ;
LAB_10985ffe8:
                          uVar20 = uVar13 + 0x4000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if (uVar13 >> 0xe < 0xff) goto LAB_10985fed0;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_10985fe88;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_10985fc88;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_10985fd88:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_10985fc88;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_10985fd88;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_10985fc88;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x1000 < uVar10) goto LAB_10985fc88;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x1000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_10985fe38;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_10985fc78;
        }
      }
    }
LAB_10985fc88:
    uVar22 = 0;
LAB_10985fc8c:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 4:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_1098600ac:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_10986026c:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_1098602bc:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_1098602fc:
                          uVar20 = uVar13 | 0x4000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x400000000000;
LAB_109860304:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0xe == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x40;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfff) + *piVar1 * (uVar20 >> 0xc)) - piVar1[1];
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_1098600c0;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_10986041c;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_1098602fc;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff
                          ;
LAB_10986041c:
                          uVar20 = uVar13 + 0x4000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if (uVar13 >> 0xe < 0xff) goto LAB_109860304;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_1098602bc;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_1098600bc;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_1098601bc:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_1098600bc;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_1098601bc;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_1098600bc;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x1000 < uVar10) goto LAB_1098600bc;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x1000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_10986026c;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_1098600ac;
        }
      }
    }
LAB_1098600bc:
    uVar22 = 0;
LAB_1098600c0:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 5:
    uVar16 = 0;
    iVar6 = (int)&uStack_90;
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_90 = 0;
    uStack_78 = uStack_78 & 0xffffffff00000000;
    FUN_10985ec98();
    if (((uVar16 & 1) == 0) ||
       (((param_1 != 0 && ((int)uStack_78 == 0)) || (FUN_10985ee8c(&uStack_90,param_2), iVar6 == 0))
       )) {
      uVar22 = 0;
    }
    else {
      if (param_1 != 0) {
        uVar16 = (ulong)param_1;
        do {
          uVar7 = (int)&uStack_90;
          FUN_10985efdc();
          *param_3 = uVar7;
          uVar16 = uVar16 - 1;
          param_3 = param_3 + 1;
        } while (uVar16 != 0);
      }
      uVar22 = 1;
    }
    if (lStack_58 != 0) {
      uStack_50 = lStack_58;
      __ZdlPv();
    }
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (uStack_90 != 0) {
      lStack_88 = uStack_90;
      __ZdlPv();
    }
    return uVar22;
  case 6:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_1098605c4:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_109860784:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_1098607d4:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_109860814:
                          uVar20 = uVar13 | 0x4000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x400000000000;
LAB_10986081c:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0xe == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x40;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfff) + *piVar1 * (uVar20 >> 0xc)) - piVar1[1];
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_1098605d8;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_109860934;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_109860814;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff
                          ;
LAB_109860934:
                          uVar20 = uVar13 + 0x4000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if (uVar13 >> 0xe < 0xff) goto LAB_10986081c;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_1098607d4;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_1098605d4;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_1098606d4:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_1098605d4;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_1098606d4;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_1098605d4;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x1000 < uVar10) goto LAB_1098605d4;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x1000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_109860784;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_1098605c4;
        }
      }
    }
LAB_1098605d4:
    uVar22 = 0;
LAB_1098605d8:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 7:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_1098609f8:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_109860bb8:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_109860c08:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_109860c48:
                          uVar20 = uVar13 | 0x4000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x400000000000;
LAB_109860c50:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0xe == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x40;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfff) + *piVar1 * (uVar20 >> 0xc)) - piVar1[1];
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109860a0c;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_109860d68;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_109860c48;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff
                          ;
LAB_109860d68:
                          uVar20 = uVar13 + 0x4000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if (uVar13 >> 0xe < 0xff) goto LAB_109860c50;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_109860c08;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109860a08;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_109860b08:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109860a08;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_109860b08;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109860a08;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x1000 < uVar10) goto LAB_109860a08;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x1000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_109860bb8;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_1098609f8;
        }
      }
    }
LAB_109860a08:
    uVar22 = 0;
LAB_109860a0c:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 8:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109860e2c:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_109860fec:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_10986103c:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_10986107c:
                          uVar20 = uVar13 | 0x4000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x400000000000;
LAB_109861084:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0xe == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x40;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfff) + *piVar1 * (uVar20 >> 0xc)) - piVar1[1];
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109860e40;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_10986119c;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_10986107c;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff
                          ;
LAB_10986119c:
                          uVar20 = uVar13 + 0x4000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if (uVar13 >> 0xe < 0xff) goto LAB_109861084;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_10986103c;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109860e3c;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_109860f3c:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109860e3c;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_109860f3c;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109860e3c;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x1000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x1000 < uVar10) goto LAB_109860e3c;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x1000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_109860fec;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109860e2c;
        }
      }
    }
LAB_109860e3c:
    uVar22 = 0;
LAB_109860e40:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 9:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109861260:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_109861420:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_109861470:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_1098614b0:
                          uVar13 = uVar13 + 0x8000;
                          uStack_50 = CONCAT44(uVar13,uVar10);
LAB_1098614b8:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar20 = (uint)uStack_50;
                              if (uVar13 >> 0xf == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar13;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar13 = uVar12;
                                  uVar20 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar13 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x80;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar13;
                                  uVar20 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar20;
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar13 & 0x1fff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar13 = ((uVar13 & 0x1fff) + *piVar1 * (uVar13 >> 0xd)) - piVar1[1];
                              uStack_50 = CONCAT44(uVar13,(uint)uStack_50);
                              param_3[uVar16] = uVar20;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109861274;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_1098614b0;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_1098614b0;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar20 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                          uVar13 = (uVar20 & 0x3fffffff) + 0x8000;
                          uStack_50 = CONCAT44(uVar13,uVar10);
                          if ((uVar20 >> 0xf & 0x7fff) < 0xff) goto LAB_1098614b8;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_109861470;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109861270;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_109861370:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109861270;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_109861370;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109861270;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x2000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x2000 < uVar10) goto LAB_109861270;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x2000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_109861420;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109861260;
        }
      }
    }
LAB_109861270:
    uVar22 = 0;
LAB_109861274:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 10:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109861694:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_109861854:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_1098618a4:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_1098618e4:
                          uVar13 = uVar13 + 0x20000;
                          uStack_50 = CONCAT44(uVar13,uVar10);
LAB_1098618ec:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar20 = (uint)uStack_50;
                              if (uVar13 >> 0x11 == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar13;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar13 = uVar12;
                                  uVar20 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar13 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x200;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar13;
                                  uVar20 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar20;
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar13 & 0x7fff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar13 = ((uVar13 & 0x7fff) + *piVar1 * (uVar13 >> 0xf)) - piVar1[1];
                              uStack_50 = CONCAT44(uVar13,(uint)uStack_50);
                              param_3[uVar16] = uVar20;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_1098616a8;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_1098618e4;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_1098618e4;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar20 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                          uVar13 = (uVar20 & 0x3fffffff) + 0x20000;
                          uStack_50 = CONCAT44(uVar13,uVar10);
                          if ((uVar20 >> 0x11 & 0x1fff) < 0xff) goto LAB_1098618ec;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_1098618a4;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_1098616a4;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_1098617a4:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_1098616a4;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_1098617a4;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_1098616a4;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x8000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x8000 < uVar10) goto LAB_1098616a4;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x8000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_109861854;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109861694;
        }
      }
    }
LAB_1098616a4:
    uVar22 = 0;
LAB_1098616a8:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0xb:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109861ac8:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_109861c88:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_109861cd8:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_109861d18:
                          uVar13 = uVar13 + 0x40000;
                          uStack_50 = CONCAT44(uVar13,uVar10);
LAB_109861d20:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar20 = (uint)uStack_50;
                              if (uVar13 >> 0x12 == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar13;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar13 = uVar12;
                                  uVar20 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar13 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x400;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar13;
                                  uVar20 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar20;
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar13 & 0xffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar13 = (*piVar1 * (uVar13 >> 0x10) + (uVar13 & 0xffff)) - piVar1[1];
                              uStack_50 = CONCAT44(uVar13,(uint)uStack_50);
                              param_3[uVar16] = uVar20;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109861adc;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_109861d18;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_109861d18;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar20 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                          uVar13 = (uVar20 & 0x3fffffff) + 0x40000;
                          uStack_50 = CONCAT44(uVar13,uVar10);
                          if ((uVar20 >> 0x12 & 0xfff) < 0xff) goto LAB_109861d20;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_109861cd8;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109861ad8;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_109861bd8:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109861ad8;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_109861bd8;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109861ad8;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x10000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x10000 < uVar10) goto LAB_109861ad8;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x10000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_109861c88;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109861ac8;
        }
      }
    }
LAB_109861ad8:
    uVar22 = 0;
LAB_109861adc:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0xc:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109861f00:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_1098620c0:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_109862110:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_109862150:
                          uVar13 = uVar13 + 0x100000;
                          uStack_50 = CONCAT44(uVar13,uVar10);
LAB_109862158:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar20 = (uint)uStack_50;
                              if (uVar13 >> 0x14 == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar13;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar13 = uVar12;
                                  uVar20 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar13 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x1000;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar13;
                                  uVar20 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar20;
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar13 & 0x3ffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar13 = ((uVar13 & 0x3ffff) + *piVar1 * (uVar13 >> 0x12)) - piVar1[1]
                              ;
                              uStack_50 = CONCAT44(uVar13,(uint)uStack_50);
                              param_3[uVar16] = uVar20;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109861f14;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_109862150;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_109862150;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar20 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                          uVar13 = (uVar20 & 0x3fffffff) + 0x100000;
                          uStack_50 = CONCAT44(uVar13,uVar10);
                          if ((uVar20 >> 0x14 & 0x3ff) < 0xff) goto LAB_109862158;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_109862110;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109861f10;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_109862010:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109861f10;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_109862010;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109861f10;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x40000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x40000 < uVar10) goto LAB_109861f10;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x40000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_1098620c0;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109861f00;
        }
      }
    }
LAB_109861f10:
    uVar22 = 0;
LAB_109861f14:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0xd:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109862334:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_1098624f4:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_109862544:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_109862584:
                          uVar13 = uVar13 + 0x200000;
                          uStack_50 = CONCAT44(uVar13,uVar10);
LAB_10986258c:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar20 = (uint)uStack_50;
                              if (uVar13 >> 0x15 == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar13;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar13 = uVar12;
                                  uVar20 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar13 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x2000;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar13;
                                  uVar20 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar20;
                              uVar20 = *(uint *)(lStack_88 + (ulong)(uVar13 & 0x7ffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar20 * 8);
                              uVar13 = ((uVar13 & 0x7ffff) + *piVar1 * (uVar13 >> 0x13)) - piVar1[1]
                              ;
                              uStack_50 = CONCAT44(uVar13,(uint)uStack_50);
                              param_3[uVar16] = uVar20;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109862348;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_109862584;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_109862584;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar20 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                          uVar13 = (uVar20 & 0x3fffffff) + 0x200000;
                          uStack_50 = CONCAT44(uVar13,uVar10);
                          if ((uVar20 >> 0x15 & 0x1ff) < 0xff) goto LAB_10986258c;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_109862544;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109862344;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_109862444:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109862344;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_109862444;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109862344;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x80000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x80000 < uVar10) goto LAB_109862344;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x80000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_1098624f4;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109862334;
        }
      }
    }
LAB_109862344:
    uVar22 = 0;
LAB_109862348:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0xe:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109862768:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_109862928:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_109862978:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_1098629b8:
                          uVar20 = uVar13 | 0x400000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x40000000000000;
LAB_1098629c0:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0x16 == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x4000;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfffff) + *piVar1 * (uVar20 >> 0x14)) - piVar1[1]
                              ;
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_10986277c;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_1098629b8;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_1098629b8;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                          uVar20 = (uVar13 & 0x3fffffff) + 0x400000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if ((uVar13 >> 0x16 & 0xff) < 0xff) goto LAB_1098629c0;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_109862978;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109862778;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_109862878:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109862778;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_109862878;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109862778;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x100000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x100000 < uVar10) goto LAB_109862778;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x100000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_109862928;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109862768;
        }
      }
    }
LAB_109862778:
    uVar22 = 0;
LAB_10986277c:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0xf:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109862b9c:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_109862d5c:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_109862dac:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_109862dec:
                          uVar20 = uVar13 | 0x400000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x40000000000000;
LAB_109862df4:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0x16 == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x4000;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfffff) + *piVar1 * (uVar20 >> 0x14)) - piVar1[1]
                              ;
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109862bb0;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_109862dec;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_109862dec;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                          uVar20 = (uVar13 & 0x3fffffff) + 0x400000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if ((uVar13 >> 0x16 & 0xff) < 0xff) goto LAB_109862df4;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_109862dac;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109862bac;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_109862cac:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109862bac;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_109862cac;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109862bac;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x100000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x100000 < uVar10) goto LAB_109862bac;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x100000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_109862d5c;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109862b9c;
        }
      }
    }
LAB_109862bac:
    uVar22 = 0;
LAB_109862bb0:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0x10:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109862fd0:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_109863190:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_1098631e0:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_109863220:
                          uVar20 = uVar13 | 0x400000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x40000000000000;
LAB_109863228:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0x16 == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x4000;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfffff) + *piVar1 * (uVar20 >> 0x14)) - piVar1[1]
                              ;
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109862fe4;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_109863220;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_109863220;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                          uVar20 = (uVar13 & 0x3fffffff) + 0x400000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if ((uVar13 >> 0x16 & 0xff) < 0xff) goto LAB_109863228;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_1098631e0;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109862fe0;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_1098630e0:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109862fe0;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_1098630e0;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109862fe0;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x100000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x100000 < uVar10) goto LAB_109862fe0;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x100000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_109863190;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109862fd0;
        }
      }
    }
LAB_109862fe0:
    uVar22 = 0;
LAB_109862fe4:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0x11:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109863404:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_1098635c4:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_109863614:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_109863654:
                          uVar20 = uVar13 | 0x400000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x40000000000000;
LAB_10986365c:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0x16 == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x4000;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfffff) + *piVar1 * (uVar20 >> 0x14)) - piVar1[1]
                              ;
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_109863418;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_109863654;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_109863654;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                          uVar20 = (uVar13 & 0x3fffffff) + 0x400000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if ((uVar13 >> 0x16 & 0xff) < 0xff) goto LAB_10986365c;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_109863614;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109863414;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_109863514:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109863414;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_109863514;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109863414;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x100000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x100000 < uVar10) goto LAB_109863414;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x100000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_1098635c4;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109863404;
        }
      }
    }
LAB_109863414:
    uVar22 = 0;
LAB_109863418:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  case 0x12:
    uStack_50 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    lStack_88 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    uStack_90 = (ulong)uStack_90._4_4_ << 0x20;
    if (*(ushort *)((long)param_2 + 0x32) != 0) {
      if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
        lVar19 = param_2[1];
        lVar9 = param_2[2] + 4;
        if (lVar9 <= lVar19) {
          uVar13 = *(uint *)(*param_2 + param_2[2]);
          uStack_90 = CONCAT44(uVar10,uVar13);
          param_2[2] = lVar9;
LAB_109863838:
          if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
            func_0x0001074287b0(&lStack_a8,uVar13);
            lVar9 = lStack_a8;
            uVar10 = (uint)uStack_90;
            if ((uint)uStack_90 == 0) {
              bVar5 = true;
LAB_1098639f8:
              if ((param_1 == 0) || (!bVar5)) {
                if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2] + 8;
                  if (lVar9 <= lVar19) {
                    uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                    param_2[2] = lVar9;
LAB_109863a48:
                    if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                      param_2[2] = uStack_48 + lVar9;
                      uVar13 = (uint)uStack_48;
                      uVar10 = uVar13 - 1;
                      if (0 < (int)uVar13) {
                        lStack_58 = *param_2 + lVar9;
                        if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                          uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_109863a88:
                          uVar20 = uVar13 | 0x400000;
                          uStack_50 = CONCAT44(uVar13,uVar10) | 0x40000000000000;
LAB_109863a90:
                          if (param_1 != 0) {
                            uVar16 = 0;
                            do {
                              uVar13 = (uint)uStack_50;
                              if (uVar20 >> 0x16 == 0) {
                                uVar8 = (ulong)uVar10;
                                uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                                uVar11 = uVar10;
                                uVar12 = uVar20;
                                do {
                                  uVar8 = uVar8 - 1;
                                  uVar4 = uVar11 - 1;
                                  uVar10 = uVar21;
                                  uVar20 = uVar12;
                                  uVar13 = (uint)uStack_50;
                                  if ((int)uVar11 < 1) break;
                                  uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                           uVar12 << 8;
                                  uStack_50 = (ulong)uVar4;
                                  bVar5 = uVar12 < 0x4000;
                                  uVar11 = uVar4;
                                  uVar10 = uVar4;
                                  uVar12 = uVar20;
                                  uVar13 = uVar4;
                                } while (bVar5);
                              }
                              uStack_50._0_4_ = uVar13;
                              uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfffff) * 4);
                              piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                              uVar20 = ((uVar20 & 0xfffff) + *piVar1 * (uVar20 >> 0x14)) - piVar1[1]
                              ;
                              uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                              param_3[uVar16] = uVar13;
                              uVar16 = uVar16 + 1;
                            } while (uVar16 != param_1);
                          }
                          uVar22 = 1;
                          goto LAB_10986384c;
                        }
                        bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                        if (bVar3 == 2) {
                          uVar10 = uVar13 - 3;
                          if (2 < uVar13) {
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                     (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                            goto LAB_109863a88;
                          }
                        }
                        else if (bVar3 == 1) {
                          if (uVar13 != 1) {
                            uVar10 = uVar13 - 2;
                            lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                            uVar13 = (uint)*(byte *)(lVar9 + -2) |
                                     (*(byte *)(lVar9 + -1) & 0x3f) << 8;
                            goto LAB_109863a88;
                          }
                        }
                        else {
                          uVar10 = uVar13 - 4;
                          uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                          uVar20 = (uVar13 & 0x3fffffff) + 0x400000;
                          uStack_50 = CONCAT44(uVar20,uVar10);
                          if ((uVar13 >> 0x16 & 0xff) < 0xff) goto LAB_109863a90;
                        }
                      }
                    }
                  }
                }
                else {
                  iVar6 = 1;
                  func_0x00010985f308(1,&uStack_48,param_2);
                  if (iVar6 != 0) {
                    lVar19 = param_2[1];
                    lVar9 = param_2[2];
                    goto LAB_109863a48;
                  }
                }
              }
            }
            else {
              uVar13 = 0;
              lVar19 = param_2[1];
              lVar14 = param_2[2];
              do {
                lVar15 = lVar14 + 1;
                if (lVar19 < lVar15) goto LAB_109863848;
                bVar3 = *(byte *)(*param_2 + lVar14);
                param_2[2] = lVar15;
                uVar16 = (ulong)(bVar3 >> 2);
                uVar20 = bVar3 & 3;
                if ((bVar3 & 3) == 0) {
LAB_109863948:
                  *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                  uVar20 = uVar13;
                }
                else {
                  if (uVar20 != 3) {
                    uVar21 = 6;
                    lVar14 = lVar15;
                    do {
                      lVar15 = lVar14 + 1;
                      if (lVar19 < lVar15) goto LAB_109863848;
                      bVar3 = *(byte *)(*param_2 + lVar14);
                      param_2[2] = lVar15;
                      uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                      uVar21 = uVar21 + 8;
                      uVar20 = uVar20 - 1;
                      lVar14 = lVar15;
                    } while (uVar20 != 0);
                    goto LAB_109863948;
                  }
                  uVar20 = (bVar3 >> 2) + uVar13;
                  if ((uint)uStack_90 <= uVar20) goto LAB_109863848;
                  lVar14 = uVar16 + 1;
                  do {
                    *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                    uVar13 = uVar13 + 1;
                    lVar14 = lVar14 + -1;
                  } while (lVar14 != 0);
                }
                uVar13 = uVar20 + 1;
                uVar16 = uStack_90 & 0xffffffff;
                lVar14 = lVar15;
              } while (uVar13 < (uint)uStack_90);
              func_0x0001074287b0(&lStack_88,0x100000);
              FUN_10985f194(&lStack_70,uVar16);
              if (uVar10 != 0) {
                uVar8 = 0;
                uVar17 = 0;
                do {
                  puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                  uVar13 = (uint)uVar17;
                  *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                  puVar18[1] = uVar13;
                  uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                  if (0x100000 < uVar10) goto LAB_109863848;
                  if (uVar13 < uVar10) {
                    lVar19 = uVar10 - uVar17;
                    puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                    do {
                      *puVar18 = (int)uVar8;
                      lVar19 = lVar19 + -1;
                      puVar18 = puVar18 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar8 = uVar8 + 1;
                  uVar17 = (ulong)uVar10;
                } while (uVar8 != uVar16);
                if (uVar10 == 0x100000) {
                  bVar5 = (uint)uStack_90 == 0;
                  goto LAB_1098639f8;
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = 1;
        func_0x00010985f124(1,&uStack_90,param_2);
        if (iVar6 != 0) {
          lVar19 = param_2[1];
          lVar9 = param_2[2];
          uVar13 = (uint)uStack_90;
          goto LAB_109863838;
        }
      }
    }
LAB_109863848:
    uVar22 = 0;
LAB_10986384c:
    if (lStack_70 != 0) {
      lStack_68 = lStack_70;
      __ZdlPv();
    }
    if (lStack_88 != 0) {
      lStack_80 = lStack_88;
      __ZdlPv();
    }
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    return uVar22;
  default:
    goto LAB_10985ec18;
  }
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar19 = param_2[1];
      lVar9 = param_2[2] + 4;
      if (lVar9 <= lVar19) {
        uVar13 = *(uint *)(*param_2 + param_2[2]);
        uStack_90 = CONCAT44(uVar10,uVar13);
        param_2[2] = lVar9;
LAB_10985f410:
        if ((long)(ulong)(uVar13 >> 6) <= lVar19 - lVar9) {
          func_0x0001074287b0(&lStack_a8,uVar13);
          lVar9 = lStack_a8;
          uVar10 = (uint)uStack_90;
          if ((uint)uStack_90 == 0) {
            bVar5 = true;
LAB_10985f5d0:
            if ((param_1 == 0) || (!bVar5)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar19 = param_2[1];
                lVar9 = param_2[2] + 8;
                if (lVar9 <= lVar19) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar9;
LAB_10985f620:
                  if (uStack_48 <= (ulong)(lVar19 - lVar9)) {
                    param_2[2] = uStack_48 + lVar9;
                    uVar13 = (uint)uStack_48;
                    uVar10 = uVar13 - 1;
                    if (0 < (int)uVar13) {
                      lStack_58 = *param_2 + lVar9;
                      if (*(byte *)(lStack_58 + (ulong)uVar10) < 0x40) {
                        uVar13 = *(byte *)(lStack_58 + (ulong)uVar10) & 0x3f;
LAB_10985f660:
                        uVar20 = uVar13 | 0x4000;
                        uStack_50 = CONCAT44(uVar13,uVar10) | 0x400000000000;
LAB_10985f668:
                        if (param_1 != 0) {
                          uVar16 = 0;
                          do {
                            uVar13 = (uint)uStack_50;
                            if (uVar20 >> 0xe == 0) {
                              uVar8 = (ulong)uVar10;
                              uVar21 = uVar10 & (int)uVar10 >> 0x1f;
                              uVar11 = uVar10;
                              uVar12 = uVar20;
                              do {
                                uVar8 = uVar8 - 1;
                                uVar4 = uVar11 - 1;
                                uVar10 = uVar21;
                                uVar20 = uVar12;
                                uVar13 = (uint)uStack_50;
                                if ((int)uVar11 < 1) break;
                                uVar20 = (uint)*(byte *)(lStack_58 + (uVar8 & 0xffffffff)) |
                                         uVar12 << 8;
                                uStack_50 = (ulong)uVar4;
                                bVar5 = uVar12 < 0x40;
                                uVar11 = uVar4;
                                uVar10 = uVar4;
                                uVar12 = uVar20;
                                uVar13 = uVar4;
                              } while (bVar5);
                            }
                            uStack_50._0_4_ = uVar13;
                            uVar13 = *(uint *)(lStack_88 + (ulong)(uVar20 & 0xfff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar13 * 8);
                            uVar20 = ((uVar20 & 0xfff) + *piVar1 * (uVar20 >> 0xc)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar20,(uint)uStack_50);
                            param_3[uVar16] = uVar13;
                            uVar16 = uVar16 + 1;
                          } while (uVar16 != param_1);
                        }
                        uVar22 = 1;
                        goto LAB_10985f424;
                      }
                      bVar3 = *(byte *)(lStack_58 + (ulong)uVar10) >> 6;
                      if (bVar3 == 2) {
                        uVar10 = uVar13 - 3;
                        if (2 < uVar13) {
                          lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar13 = (*(byte *)(lVar9 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar9 + -2) << 8 | (uint)*(byte *)(lVar9 + -3);
                          goto LAB_10985f780;
                        }
                      }
                      else if (bVar3 == 1) {
                        if (uVar13 != 1) {
                          uVar10 = uVar13 - 2;
                          lVar9 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar13 = (uint)*(byte *)(lVar9 + -2) | (*(byte *)(lVar9 + -1) & 0x3f) << 8
                          ;
                          goto LAB_10985f660;
                        }
                      }
                      else {
                        uVar10 = uVar13 - 4;
                        uVar13 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff;
LAB_10985f780:
                        uVar20 = uVar13 + 0x4000;
                        uStack_50 = CONCAT44(uVar20,uVar10);
                        if (uVar13 >> 0xe < 0xff) goto LAB_10985f668;
                      }
                    }
                  }
                }
              }
              else {
                iVar6 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar6 != 0) {
                  lVar19 = param_2[1];
                  lVar9 = param_2[2];
                  goto LAB_10985f620;
                }
              }
            }
          }
          else {
            uVar13 = 0;
            lVar19 = param_2[1];
            lVar14 = param_2[2];
            do {
              lVar15 = lVar14 + 1;
              if (lVar19 < lVar15) goto LAB_10985f420;
              bVar3 = *(byte *)(*param_2 + lVar14);
              param_2[2] = lVar15;
              uVar16 = (ulong)(bVar3 >> 2);
              uVar20 = bVar3 & 3;
              if ((bVar3 & 3) == 0) {
LAB_10985f520:
                *(int *)(lStack_a8 + (ulong)uVar13 * 4) = (int)uVar16;
                uVar20 = uVar13;
              }
              else {
                if (uVar20 != 3) {
                  uVar21 = 6;
                  lVar14 = lVar15;
                  do {
                    lVar15 = lVar14 + 1;
                    if (lVar19 < lVar15) goto LAB_10985f420;
                    bVar3 = *(byte *)(*param_2 + lVar14);
                    param_2[2] = lVar15;
                    uVar16 = (ulong)((uint)bVar3 << (ulong)(uVar21 & 0x1f) | (uint)uVar16);
                    uVar21 = uVar21 + 8;
                    uVar20 = uVar20 - 1;
                    lVar14 = lVar15;
                  } while (uVar20 != 0);
                  goto LAB_10985f520;
                }
                uVar20 = (bVar3 >> 2) + uVar13;
                if ((uint)uStack_90 <= uVar20) goto LAB_10985f420;
                lVar14 = uVar16 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar13 * 4) = 0;
                  uVar13 = uVar13 + 1;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
              uVar13 = uVar20 + 1;
              uVar16 = uStack_90 & 0xffffffff;
              lVar14 = lVar15;
            } while (uVar13 < (uint)uStack_90);
            func_0x0001074287b0(&lStack_88,0x1000);
            FUN_10985f194(&lStack_70,uVar16);
            if (uVar10 != 0) {
              uVar8 = 0;
              uVar17 = 0;
              do {
                puVar18 = (undefined4 *)(lStack_70 + uVar8 * 8);
                uVar13 = (uint)uVar17;
                *puVar18 = *(undefined4 *)(lVar9 + uVar8 * 4);
                puVar18[1] = uVar13;
                uVar10 = *(int *)(lVar9 + uVar8 * 4) + uVar13;
                if (0x1000 < uVar10) goto LAB_10985f420;
                if (uVar13 < uVar10) {
                  lVar19 = uVar10 - uVar17;
                  puVar18 = (undefined4 *)(lStack_88 + uVar17 * 4);
                  do {
                    *puVar18 = (int)uVar8;
                    lVar19 = lVar19 + -1;
                    puVar18 = puVar18 + 1;
                  } while (lVar19 != 0);
                }
                uVar8 = uVar8 + 1;
                uVar17 = (ulong)uVar10;
              } while (uVar8 != uVar16);
              if (uVar10 == 0x1000) {
                bVar5 = (uint)uStack_90 == 0;
                goto LAB_10985f5d0;
              }
            }
          }
        }
      }
    }
    else {
      iVar6 = 1;
      func_0x00010985f124(1,&uStack_90,param_2);
      if (iVar6 != 0) {
        lVar19 = param_2[1];
        lVar9 = param_2[2];
        uVar13 = (uint)uStack_90;
        goto LAB_10985f410;
      }
    }
  }
LAB_10985f420:
  uVar22 = 0;
LAB_10985f424:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar22;
}



/* Entry: 10985ec98; end: 10985ee8b;  */

ulong FUN_10985ec98(long *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  if (*(ushort *)((long)param_2 + 0x32) == 0) {
    return 0;
  }
  if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
    if (param_2[1] < param_2[2] + 4) {
      return 0;
    }
    uVar2 = *(uint *)(*param_2 + param_2[2]);
    *(uint *)(param_1 + 3) = uVar2;
    lVar3 = param_2[2] + 4;
    param_2[2] = lVar3;
  }
  else {
    uVar11 = 1;
    func_0x00010985f124(1,param_1 + 3,param_2);
    if ((int)uVar11 == 0) {
      return uVar11;
    }
    uVar2 = *(uint *)(param_1 + 3);
    lVar3 = param_2[2];
  }
  if ((long)(ulong)(uVar2 >> 6) <= param_2[1] - lVar3) {
    func_0x0001074287b0(param_1,uVar2);
    uVar11 = (ulong)*(uint *)(param_1 + 3);
    if (*(uint *)(param_1 + 3) == 0) {
      return 1;
    }
    uVar2 = 0;
    lVar3 = param_2[1];
    lVar9 = param_2[2];
    do {
      lVar4 = lVar9 + 1;
      if (lVar3 < lVar4) {
        return 0;
      }
      bVar1 = *(byte *)(*param_2 + lVar9);
      param_2[2] = lVar4;
      uVar6 = (ulong)(bVar1 >> 2);
      uVar5 = bVar1 & 3;
      if ((bVar1 & 3) == 0) {
LAB_10985ede4:
        lVar12 = *param_1;
        *(int *)(lVar12 + (ulong)uVar2 * 4) = (int)uVar6;
        uVar5 = uVar2;
      }
      else {
        if (uVar5 != 3) {
          uVar10 = 6;
          lVar9 = lVar4;
          do {
            lVar4 = lVar9 + 1;
            if (lVar3 < lVar4) {
              return 0;
            }
            bVar1 = *(byte *)(*param_2 + lVar9);
            param_2[2] = lVar4;
            uVar6 = (ulong)((uint)bVar1 << (ulong)(uVar10 & 0x1f) | (uint)uVar6);
            uVar10 = uVar10 + 8;
            uVar5 = uVar5 - 1;
            lVar9 = lVar4;
          } while (uVar5 != 0);
          goto LAB_10985ede4;
        }
        uVar5 = (bVar1 >> 2) + uVar2;
        if ((uint)uVar11 <= uVar5) {
          return 0;
        }
        lVar12 = *param_1;
        lVar9 = uVar6 + 1;
        do {
          *(undefined4 *)(lVar12 + (ulong)uVar2 * 4) = 0;
          uVar2 = uVar2 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      uVar2 = uVar5 + 1;
      uVar5 = *(uint *)(param_1 + 3);
      uVar11 = (ulong)uVar5;
      lVar9 = lVar4;
    } while (uVar2 < uVar5);
    func_0x0001074287b0(param_1 + 4,0x1000);
    FUN_10985f194(param_1 + 7,uVar11);
    if (uVar5 != 0) {
      uVar6 = 0;
      lVar3 = param_1[7];
      uVar7 = 0;
      while( true ) {
        puVar8 = (undefined4 *)(lVar3 + uVar6 * 8);
        uVar5 = (uint)uVar7;
        *puVar8 = *(undefined4 *)(lVar12 + uVar6 * 4);
        puVar8[1] = uVar5;
        uVar2 = *(int *)(lVar12 + uVar6 * 4) + uVar5;
        if (0x1000 < uVar2) break;
        if (uVar5 < uVar2) {
          lVar9 = uVar2 - uVar7;
          puVar8 = (undefined4 *)(param_1[4] + uVar7 * 4);
          do {
            *puVar8 = (int)uVar6;
            lVar9 = lVar9 + -1;
            puVar8 = puVar8 + 1;
          } while (lVar9 != 0);
        }
        uVar6 = uVar6 + 1;
        uVar7 = (ulong)uVar2;
        if (uVar6 == uVar11) {
          return (ulong)(uVar2 == 0x1000);
        }
      }
    }
  }
  return 0;
}



/* Entry: 10985ee8c; end: 10985efdb;  */

void FUN_10985ee8c(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uStack_28;
  
  if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
    lVar6 = param_2[1];
    lVar5 = param_2[2] + 8;
    if (lVar6 < lVar5) {
      return;
    }
    uStack_28 = *(ulong *)(*param_2 + param_2[2]);
    param_2[2] = lVar5;
  }
  else {
    iVar2 = 1;
    func_0x00010985f308(1,&uStack_28,param_2);
    if (iVar2 == 0) {
      return;
    }
    lVar6 = param_2[1];
    lVar5 = param_2[2];
  }
  if (uStack_28 <= (ulong)(lVar6 - lVar5)) {
    param_2[2] = uStack_28 + lVar5;
    uVar3 = (uint)uStack_28;
    uVar4 = uVar3 - 1;
    if (0 < (int)uVar3) {
      lVar5 = *param_2 + lVar5;
      *(long *)(param_1 + 0x50) = lVar5;
      if (*(byte *)(lVar5 + (ulong)uVar4) < 0x40) {
        *(uint *)(param_1 + 0x58) = uVar4;
        uVar4 = *(byte *)(lVar5 + (ulong)uVar4) & 0x3f;
      }
      else {
        bVar1 = *(byte *)(lVar5 + (ulong)uVar4) >> 6;
        if (bVar1 == 2) {
          if (uVar3 < 3) {
            return;
          }
          *(uint *)(param_1 + 0x58) = uVar3 - 3;
          lVar5 = lVar5 + (uStack_28 & 0x7fffffff);
          uVar4 = (*(byte *)(lVar5 + -1) & 0x3f) << 0x10 | (uint)*(byte *)(lVar5 + -2) << 8 |
                  (uint)*(byte *)(lVar5 + -3);
        }
        else if (bVar1 == 1) {
          if (uVar3 == 1) {
            return;
          }
          *(uint *)(param_1 + 0x58) = uVar3 - 2;
          lVar5 = lVar5 + (uStack_28 & 0x7fffffff);
          uVar4 = (uint)*(byte *)(lVar5 + -2) | (*(byte *)(lVar5 + -1) & 0x3f) << 8;
        }
        else {
          *(uint *)(param_1 + 0x58) = uVar3 - 4;
          uVar4 = *(uint *)(lVar5 + (uStack_28 & 0x7fffffff) + -4) & 0x3fffffff;
        }
      }
      *(uint *)(param_1 + 0x5c) = uVar4 + 0x4000;
    }
  }
  return;
}



/* Entry: 10985efdc; end: 10985f0d3;  */

ulong FUN_10985efdc(long param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x5c);
  if (uVar6 >> 0xe == 0) {
    uVar5 = *(uint *)(param_1 + 0x58);
    uVar3 = uVar6;
    do {
      uVar6 = uVar3;
      if ((int)uVar5 < 1) break;
      uVar5 = uVar5 - 1;
      *(uint *)(param_1 + 0x58) = uVar5;
      uVar6 = (uint)*(byte *)(*(long *)(param_1 + 0x50) + (ulong)uVar5) | uVar3 << 8;
      *(uint *)(param_1 + 0x5c) = uVar6;
      bVar2 = uVar3 < 0x40;
      uVar3 = uVar6;
    } while (bVar2);
  }
  uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x20) + (ulong)(uVar6 & 0xfff) * 4);
  piVar1 = (int *)(*(long *)(param_1 + 0x38) + uVar4 * 8);
  *(uint *)(param_1 + 0x5c) = ((uVar6 & 0xfff) + *piVar1 * (uVar6 >> 0xc)) - piVar1[1];
  return uVar4;
}



/* Entry: 10985f0d4; end: 10985f193;  */

long * FUN_10985f0d4(long *param_1)

{
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10985f194; end: 10985f1c3;  */

/* WARNING: Possible PIC construction at 0x00010985f354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010985f358) */
/* WARNING: Removing unreachable block (ram,0x00010985f35c) */

undefined1  [16] FUN_10985f194(long *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 **ppuVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long alStack_90 [4];
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar11 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar11) {
    if (param_2 < uVar11) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = param_1;
    return auVar17;
  }
  plVar9 = (long *)(param_2 - uVar11);
  plVar5 = (long *)param_1[1];
  if ((long *)(param_1[2] - (long)plVar5 >> 3) < plVar9) {
    lVar14 = (long)plVar5 - *param_1;
    uVar11 = (long)plVar9 + (lVar14 >> 3);
    if (uVar11 >> 0x3d != 0) {
      plVar5 = plVar9;
      FUN_10985f2c0();
      pcStack_48 = FUN_10985f2c0;
      puVar8 = &DAT_10f62a4d8;
      puStack_50 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_58 = FUN_10985f2d4;
      ppuVar15 = &puStack_60;
      plStack_70 = plVar9;
      plStack_68 = param_1;
      if ((ulong)plVar5 >> 0x3d == 0) {
        lVar7 = (long)plVar5 << 3;
        puStack_60 = (undefined1 *)&puStack_50;
        __Znwm(lVar7);
        auVar19._8_8_ = plVar5;
        auVar19._0_8_ = lVar7;
        return auVar19;
      }
      uVar16 = 0x10985f308;
      puStack_60 = (undefined1 *)&puStack_50;
      func_0x000104c4f740();
      pplVar3 = &plStack_70;
      for (; (uint)puVar8 < 0xb; puVar8 = (undefined *)(ulong)((uint)puVar8 + 1)) {
        lVar14 = param_3[2];
        lVar7 = lVar14 + 1;
        if (param_3[1] < lVar7) break;
        *(long **)((long)pplVar3 + -0x20) = plVar9;
        *(long **)((long)pplVar3 + -0x18) = param_1;
        *(undefined1 ***)((long)pplVar3 + -0x10) = ppuVar15;
        *(undefined8 *)((long)pplVar3 + -8) = uVar16;
        ppuVar15 = (undefined1 **)((long)pplVar3 + -0x10);
        bVar1 = *(byte *)(*param_3 + lVar14);
        plVar9 = (long *)(ulong)bVar1;
        param_3[2] = lVar7;
        if (-1 < (char)bVar1) {
          *plVar5 = (long)plVar9;
          auVar20._8_8_ = plVar5;
          auVar20._0_8_ = 1;
          return auVar20;
        }
        uVar16 = 0x10985f358;
        pplVar3 = (long **)((long)pplVar3 + -0x20);
        param_1 = plVar5;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = plVar5;
      return auVar2 << 0x40;
    }
    uVar10 = param_1[2] - *param_1;
    uVar12 = (long)uVar10 >> 2;
    if (uVar12 <= uVar11) {
      uVar12 = uVar11;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_10985f2d4();
    }
    lVar14 = (long)plVar5 + lVar14;
    _bzero(lVar14,(long)plVar9 * 8);
    lVar7 = *param_1;
    lVar13 = lVar14 - (param_1[1] - lVar7);
    _memcpy(lVar13);
    lVar6 = *param_1;
    *param_1 = lVar13;
    param_1[1] = lVar14 + (long)plVar9 * 8;
    param_1[2] = (long)(plVar5 + uVar12);
    plVar4 = (long *)0x0;
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar21._8_8_ = lVar7;
      auVar21._0_8_ = lVar6;
      return auVar21;
    }
  }
  else {
    lVar7 = 0;
    plVar4 = param_1;
    if (plVar9 != (long *)0x0) {
      lVar7 = (long)plVar9 * 8;
      plVar4 = plVar5;
      _bzero(plVar5,lVar7);
      plVar5 = plVar5 + (long)plVar9;
    }
    param_1[1] = (long)plVar5;
  }
  auVar18._8_8_ = lVar7;
  auVar18._0_8_ = plVar4;
  return auVar18;
}



/* Entry: 10985f1c4; end: 10985f2bf;  */

/* WARNING: Possible PIC construction at 0x00010985f354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010985f358) */
/* WARNING: Removing unreachable block (ram,0x00010985f35c) */

undefined1  [16] FUN_10985f1c4(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  long **pplVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 **ppuVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long alStack_90 [4];
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  plVar6 = (long *)param_1[1];
  if ((long *)(param_1[2] - (long)plVar6 >> 3) < param_2) {
    lVar13 = (long)plVar6 - *param_1;
    uVar1 = (long)param_2 + (lVar13 >> 3);
    if (uVar1 >> 0x3d != 0) {
      plVar6 = param_2;
      FUN_10985f2c0();
      pcStack_48 = FUN_10985f2c0;
      puVar9 = &DAT_10f62a4d8;
      puStack_50 = &stack0xfffffffffffffff0;
      func_0x000104c4f6cc();
      pcStack_58 = FUN_10985f2d4;
      ppuVar14 = &puStack_60;
      plStack_70 = param_2;
      plStack_68 = param_1;
      if ((ulong)plVar6 >> 0x3d == 0) {
        lVar8 = (long)plVar6 << 3;
        puStack_60 = (undefined1 *)&puStack_50;
        __Znwm(lVar8);
        auVar17._8_8_ = plVar6;
        auVar17._0_8_ = lVar8;
        return auVar17;
      }
      uVar15 = 0x10985f308;
      puStack_60 = (undefined1 *)&puStack_50;
      func_0x000104c4f740();
      pplVar4 = &plStack_70;
      for (; (uint)puVar9 < 0xb; puVar9 = (undefined *)(ulong)((uint)puVar9 + 1)) {
        lVar13 = param_3[2];
        lVar8 = lVar13 + 1;
        if (param_3[1] < lVar8) break;
        *(long **)((long)pplVar4 + -0x20) = param_2;
        *(long **)((long)pplVar4 + -0x18) = param_1;
        *(undefined1 ***)((long)pplVar4 + -0x10) = ppuVar14;
        *(undefined8 *)((long)pplVar4 + -8) = uVar15;
        ppuVar14 = (undefined1 **)((long)pplVar4 + -0x10);
        bVar2 = *(byte *)(*param_3 + lVar13);
        param_2 = (long *)(ulong)bVar2;
        param_3[2] = lVar8;
        if (-1 < (char)bVar2) {
          *plVar6 = (long)param_2;
          auVar18._8_8_ = plVar6;
          auVar18._0_8_ = 1;
          return auVar18;
        }
        uVar15 = 0x10985f358;
        pplVar4 = (long **)((long)pplVar4 + -0x20);
        param_1 = plVar6;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = plVar6;
      return auVar3 << 0x40;
    }
    uVar10 = param_1[2] - *param_1;
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = param_1;
      FUN_10985f2d4();
    }
    lVar13 = (long)plVar6 + lVar13;
    _bzero(lVar13,(long)param_2 << 3);
    lVar8 = *param_1;
    lVar12 = lVar13 - (param_1[1] - lVar8);
    _memcpy(lVar12);
    lVar7 = *param_1;
    *param_1 = lVar12;
    param_1[1] = lVar13 + (long)param_2 * 8;
    param_1[2] = (long)(plVar6 + uVar11);
    plVar5 = (long *)0x0;
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar19._8_8_ = lVar8;
      auVar19._0_8_ = lVar7;
      return auVar19;
    }
  }
  else {
    lVar8 = 0;
    plVar5 = param_1;
    if (param_2 != (long *)0x0) {
      lVar8 = (long)param_2 << 3;
      plVar5 = plVar6;
      _bzero(plVar6,lVar8);
      plVar6 = plVar6 + (long)param_2;
    }
    param_1[1] = (long)plVar6;
  }
  auVar16._8_8_ = lVar8;
  auVar16._0_8_ = plVar5;
  return auVar16;
}



/* Entry: 10985f2c0; end: 10985f2d3;  */

/* WARNING: Possible PIC construction at 0x00010985f354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010985f358) */
/* WARNING: Removing unreachable block (ram,0x00010985f35c) */

undefined1  [16] FUN_10985f2c0(undefined8 param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong auStack_50 [4];
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  puVar6 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  uStack_18 = 0x10985f2d4;
  ppuVar7 = &puStack_20;
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar5 = (long)param_2 << 3;
    puStack_20 = &stack0xfffffffffffffff0;
    __Znwm(lVar5);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar5;
    return auVar9;
  }
  uVar8 = 0x10985f308;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000104c4f740();
  puVar4 = &stack0xffffffffffffffd0;
  for (; (uint)puVar6 < 0xb; puVar6 = (undefined *)(ulong)((uint)puVar6 + 1)) {
    lVar1 = param_3[2];
    lVar5 = lVar1 + 1;
    if (param_3[1] < lVar5) break;
    *(ulong *)(puVar4 + -0x20) = unaff_x20;
    *(ulong **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar7;
    *(undefined8 *)(puVar4 + -8) = uVar8;
    ppuVar7 = (undefined1 **)(puVar4 + -0x10);
    bVar2 = *(byte *)(*param_3 + lVar1);
    unaff_x20 = (ulong)bVar2;
    param_3[2] = lVar5;
    if (-1 < (char)bVar2) {
      *param_2 = unaff_x20;
      auVar10._8_8_ = param_2;
      auVar10._0_8_ = 1;
      return auVar10;
    }
    uVar8 = 0x10985f358;
    puVar4 = puVar4 + -0x20;
    unaff_x19 = param_2;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}



/* Entry: 10985f2d4; end: 10985f377;  */

/* WARNING: Possible PIC construction at 0x00010985f354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010985f358) */
/* WARNING: Removing unreachable block (ram,0x00010985f35c) */

undefined1  [16] FUN_10985f2d4(ulong param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar7;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong auStack_40 [4];
  undefined1 *puVar6;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar7 = (long)param_2 << 3;
    __Znwm(lVar7);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar7;
    return auVar9;
  }
  uVar8 = 0x10985f308;
  func_0x000104c4f740();
  puVar4 = &stack0xffffffffffffffe0;
  puVar5 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar6 = puVar4;
    if (10 < (uint)param_1) break;
    lVar1 = param_3[2];
    lVar7 = lVar1 + 1;
    if (param_3[1] < lVar7) break;
    *(ulong *)(puVar6 + -0x20) = unaff_x20;
    *(ulong **)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = puVar5 + -0x10;
    *(undefined8 *)(puVar6 + -8) = uVar8;
    bVar2 = *(byte *)(*param_3 + lVar1);
    unaff_x20 = (ulong)bVar2;
    param_3[2] = lVar7;
    if (-1 < (char)bVar2) {
      *param_2 = unaff_x20;
      auVar10._8_8_ = param_2;
      auVar10._0_8_ = 1;
      return auVar10;
    }
    param_1 = (ulong)((uint)param_1 + 1);
    uVar8 = 0x10985f358;
    puVar4 = puVar6 + -0x20;
    unaff_x19 = param_2;
    puVar5 = puVar6;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}



/* Entry: 10985f378; end: 10985f7ab;  */

undefined8 FUN_10985f378(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_10985f410:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_10985f5d0:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_10985f620:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_10985f660:
                        uVar18 = uVar10 | 0x4000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x400000000000;
LAB_10985f668:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0xe == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x40;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfff) + *piVar1 * (uVar18 >> 0xc)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_10985f424;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_10985f780;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_10985f660;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff;
LAB_10985f780:
                        uVar18 = uVar10 + 0x4000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if (uVar10 >> 0xe < 0xff) goto LAB_10985f668;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_10985f620;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_10985f420;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_10985f520:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_10985f420;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_10985f520;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_10985f420;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x1000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x1000 < uVar8) goto LAB_10985f420;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x1000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_10985f5d0;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_10985f410;
      }
    }
  }
LAB_10985f420:
  uVar20 = 0;
LAB_10985f424:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 10985f7ac; end: 10985fbdf;  */

undefined8 FUN_10985f7ac(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_10985f844:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_10985fa04:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_10985fa54:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_10985fa94:
                        uVar18 = uVar10 | 0x4000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x400000000000;
LAB_10985fa9c:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0xe == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x40;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfff) + *piVar1 * (uVar18 >> 0xc)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_10985f858;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_10985fbb4;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_10985fa94;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff;
LAB_10985fbb4:
                        uVar18 = uVar10 + 0x4000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if (uVar10 >> 0xe < 0xff) goto LAB_10985fa9c;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_10985fa54;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_10985f854;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_10985f954:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_10985f854;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_10985f954;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_10985f854;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x1000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x1000 < uVar8) goto LAB_10985f854;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x1000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_10985fa04;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_10985f844;
      }
    }
  }
LAB_10985f854:
  uVar20 = 0;
LAB_10985f858:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 10985fbe0; end: 109860013;  */

undefined8 FUN_10985fbe0(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_10985fc78:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_10985fe38:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_10985fe88:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_10985fec8:
                        uVar18 = uVar10 | 0x4000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x400000000000;
LAB_10985fed0:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0xe == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x40;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfff) + *piVar1 * (uVar18 >> 0xc)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_10985fc8c;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_10985ffe8;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_10985fec8;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff;
LAB_10985ffe8:
                        uVar18 = uVar10 + 0x4000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if (uVar10 >> 0xe < 0xff) goto LAB_10985fed0;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_10985fe88;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_10985fc88;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_10985fd88:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_10985fc88;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_10985fd88;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_10985fc88;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x1000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x1000 < uVar8) goto LAB_10985fc88;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x1000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_10985fe38;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_10985fc78;
      }
    }
  }
LAB_10985fc88:
  uVar20 = 0;
LAB_10985fc8c:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 109860014; end: 109860447;  */

undefined8 FUN_109860014(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_1098600ac:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_10986026c:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_1098602bc:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_1098602fc:
                        uVar18 = uVar10 | 0x4000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x400000000000;
LAB_109860304:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0xe == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x40;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfff) + *piVar1 * (uVar18 >> 0xc)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_1098600c0;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_10986041c;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_1098602fc;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff;
LAB_10986041c:
                        uVar18 = uVar10 + 0x4000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if (uVar10 >> 0xe < 0xff) goto LAB_109860304;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_1098602bc;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_1098600bc;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_1098601bc:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_1098600bc;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_1098601bc;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_1098600bc;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x1000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x1000 < uVar8) goto LAB_1098600bc;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x1000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_10986026c;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_1098600ac;
      }
    }
  }
LAB_1098600bc:
  uVar20 = 0;
LAB_1098600c0:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 109860448; end: 10986052b;  */

undefined8 FUN_109860448(uint param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  int iStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = 0;
  iVar1 = (int)&lStack_90;
  uStack_48 = 0;
  lStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  lStack_90 = 0;
  iStack_78 = 0;
  FUN_10985ec98();
  if (((uVar4 & 1) == 0) ||
     (((param_1 != 0 && (iStack_78 == 0)) || (FUN_10985ee8c(&lStack_90,param_2), iVar1 == 0)))) {
    uVar3 = 0;
  }
  else {
    if (param_1 != 0) {
      uVar4 = (ulong)param_1;
      do {
        uVar2 = (int)&lStack_90;
        FUN_10985efdc();
        *param_3 = uVar2;
        uVar4 = uVar4 - 1;
        param_3 = param_3 + 1;
      } while (uVar4 != 0);
    }
    uVar3 = 1;
  }
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  return uVar3;
}



/* Entry: 10986052c; end: 10986095f;  */

undefined8 FUN_10986052c(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_1098605c4:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_109860784:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_1098607d4:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_109860814:
                        uVar18 = uVar10 | 0x4000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x400000000000;
LAB_10986081c:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0xe == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x40;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfff) + *piVar1 * (uVar18 >> 0xc)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_1098605d8;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_109860934;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_109860814;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff;
LAB_109860934:
                        uVar18 = uVar10 + 0x4000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if (uVar10 >> 0xe < 0xff) goto LAB_10986081c;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_1098607d4;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_1098605d4;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_1098606d4:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_1098605d4;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_1098606d4;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_1098605d4;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x1000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x1000 < uVar8) goto LAB_1098605d4;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x1000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_109860784;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_1098605c4;
      }
    }
  }
LAB_1098605d4:
  uVar20 = 0;
LAB_1098605d8:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 109860960; end: 109860d93;  */

undefined8 FUN_109860960(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_1098609f8:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_109860bb8:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_109860c08:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_109860c48:
                        uVar18 = uVar10 | 0x4000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x400000000000;
LAB_109860c50:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0xe == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x40;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfff) + *piVar1 * (uVar18 >> 0xc)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_109860a0c;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_109860d68;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_109860c48;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff;
LAB_109860d68:
                        uVar18 = uVar10 + 0x4000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if (uVar10 >> 0xe < 0xff) goto LAB_109860c50;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_109860c08;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109860a08;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_109860b08:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109860a08;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_109860b08;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109860a08;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x1000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x1000 < uVar8) goto LAB_109860a08;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x1000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_109860bb8;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_1098609f8;
      }
    }
  }
LAB_109860a08:
  uVar20 = 0;
LAB_109860a0c:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 109860d94; end: 1098611c7;  */

undefined8 FUN_109860d94(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109860e2c:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_109860fec:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_10986103c:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_10986107c:
                        uVar18 = uVar10 | 0x4000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x400000000000;
LAB_109861084:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0xe == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x40;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfff) + *piVar1 * (uVar18 >> 0xc)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_109860e40;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_10986119c;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_10986107c;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4) & 0x3fffffff;
LAB_10986119c:
                        uVar18 = uVar10 + 0x4000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if (uVar10 >> 0xe < 0xff) goto LAB_109861084;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_10986103c;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109860e3c;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_109860f3c:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109860e3c;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_109860f3c;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109860e3c;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x1000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x1000 < uVar8) goto LAB_109860e3c;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x1000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_109860fec;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109860e2c;
      }
    }
  }
LAB_109860e3c:
  uVar20 = 0;
LAB_109860e40:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 1098611c8; end: 1098615fb;  */

undefined8 FUN_1098611c8(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109861260:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_109861420:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_109861470:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_1098614b0:
                        uVar10 = uVar10 + 0x8000;
                        uStack_50 = CONCAT44(uVar10,uVar8);
LAB_1098614b8:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar18 = (uint)uStack_50;
                            if (uVar10 >> 0xf == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar10;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar10 = uVar11;
                                uVar18 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar10 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x80;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar10;
                                uVar18 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar18;
                            uVar18 = *(uint *)(lStack_88 + (ulong)(uVar10 & 0x1fff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar18 * 8);
                            uVar10 = ((uVar10 & 0x1fff) + *piVar1 * (uVar10 >> 0xd)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar10,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar18;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_109861274;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_1098614b0;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_1098614b0;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar18 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                        uVar10 = (uVar18 & 0x3fffffff) + 0x8000;
                        uStack_50 = CONCAT44(uVar10,uVar8);
                        if ((uVar18 >> 0xf & 0x7fff) < 0xff) goto LAB_1098614b8;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_109861470;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109861270;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_109861370:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109861270;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_109861370;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109861270;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x2000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x2000 < uVar8) goto LAB_109861270;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x2000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_109861420;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109861260;
      }
    }
  }
LAB_109861270:
  uVar20 = 0;
LAB_109861274:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 1098615fc; end: 109861a2f;  */

undefined8 FUN_1098615fc(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109861694:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_109861854:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_1098618a4:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_1098618e4:
                        uVar10 = uVar10 + 0x20000;
                        uStack_50 = CONCAT44(uVar10,uVar8);
LAB_1098618ec:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar18 = (uint)uStack_50;
                            if (uVar10 >> 0x11 == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar10;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar10 = uVar11;
                                uVar18 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar10 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x200;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar10;
                                uVar18 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar18;
                            uVar18 = *(uint *)(lStack_88 + (ulong)(uVar10 & 0x7fff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar18 * 8);
                            uVar10 = ((uVar10 & 0x7fff) + *piVar1 * (uVar10 >> 0xf)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar10,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar18;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_1098616a8;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_1098618e4;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_1098618e4;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar18 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                        uVar10 = (uVar18 & 0x3fffffff) + 0x20000;
                        uStack_50 = CONCAT44(uVar10,uVar8);
                        if ((uVar18 >> 0x11 & 0x1fff) < 0xff) goto LAB_1098618ec;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_1098618a4;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_1098616a4;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_1098617a4:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_1098616a4;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_1098617a4;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_1098616a4;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x8000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x8000 < uVar8) goto LAB_1098616a4;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x8000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_109861854;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109861694;
      }
    }
  }
LAB_1098616a4:
  uVar20 = 0;
LAB_1098616a8:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 109861a30; end: 109861e67;  */

undefined8 FUN_109861a30(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109861ac8:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_109861c88:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_109861cd8:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_109861d18:
                        uVar10 = uVar10 + 0x40000;
                        uStack_50 = CONCAT44(uVar10,uVar8);
LAB_109861d20:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar18 = (uint)uStack_50;
                            if (uVar10 >> 0x12 == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar10;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar10 = uVar11;
                                uVar18 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar10 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x400;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar10;
                                uVar18 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar18;
                            uVar18 = *(uint *)(lStack_88 + (ulong)(uVar10 & 0xffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar18 * 8);
                            uVar10 = (*piVar1 * (uVar10 >> 0x10) + (uVar10 & 0xffff)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar10,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar18;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_109861adc;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_109861d18;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_109861d18;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar18 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                        uVar10 = (uVar18 & 0x3fffffff) + 0x40000;
                        uStack_50 = CONCAT44(uVar10,uVar8);
                        if ((uVar18 >> 0x12 & 0xfff) < 0xff) goto LAB_109861d20;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_109861cd8;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109861ad8;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_109861bd8:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109861ad8;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_109861bd8;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109861ad8;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x10000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x10000 < uVar8) goto LAB_109861ad8;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x10000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_109861c88;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109861ac8;
      }
    }
  }
LAB_109861ad8:
  uVar20 = 0;
LAB_109861adc:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 109861e68; end: 10986229b;  */

undefined8 FUN_109861e68(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109861f00:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_1098620c0:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_109862110:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_109862150:
                        uVar10 = uVar10 + 0x100000;
                        uStack_50 = CONCAT44(uVar10,uVar8);
LAB_109862158:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar18 = (uint)uStack_50;
                            if (uVar10 >> 0x14 == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar10;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar10 = uVar11;
                                uVar18 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar10 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x1000;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar10;
                                uVar18 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar18;
                            uVar18 = *(uint *)(lStack_88 + (ulong)(uVar10 & 0x3ffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar18 * 8);
                            uVar10 = ((uVar10 & 0x3ffff) + *piVar1 * (uVar10 >> 0x12)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar10,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar18;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_109861f14;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_109862150;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_109862150;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar18 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                        uVar10 = (uVar18 & 0x3fffffff) + 0x100000;
                        uStack_50 = CONCAT44(uVar10,uVar8);
                        if ((uVar18 >> 0x14 & 0x3ff) < 0xff) goto LAB_109862158;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_109862110;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109861f10;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_109862010:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109861f10;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_109862010;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109861f10;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x40000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x40000 < uVar8) goto LAB_109861f10;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x40000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_1098620c0;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109861f00;
      }
    }
  }
LAB_109861f10:
  uVar20 = 0;
LAB_109861f14:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 10986229c; end: 1098626cf;  */

undefined8 FUN_10986229c(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109862334:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_1098624f4:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_109862544:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_109862584:
                        uVar10 = uVar10 + 0x200000;
                        uStack_50 = CONCAT44(uVar10,uVar8);
LAB_10986258c:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar18 = (uint)uStack_50;
                            if (uVar10 >> 0x15 == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar10;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar10 = uVar11;
                                uVar18 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar10 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x2000;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar10;
                                uVar18 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar18;
                            uVar18 = *(uint *)(lStack_88 + (ulong)(uVar10 & 0x7ffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar18 * 8);
                            uVar10 = ((uVar10 & 0x7ffff) + *piVar1 * (uVar10 >> 0x13)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar10,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar18;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_109862348;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_109862584;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_109862584;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar18 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                        uVar10 = (uVar18 & 0x3fffffff) + 0x200000;
                        uStack_50 = CONCAT44(uVar10,uVar8);
                        if ((uVar18 >> 0x15 & 0x1ff) < 0xff) goto LAB_10986258c;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_109862544;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109862344;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_109862444:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109862344;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_109862444;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109862344;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x80000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x80000 < uVar8) goto LAB_109862344;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x80000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_1098624f4;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109862334;
      }
    }
  }
LAB_109862344:
  uVar20 = 0;
LAB_109862348:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 1098626d0; end: 109862b03;  */

undefined8 FUN_1098626d0(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109862768:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_109862928:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_109862978:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_1098629b8:
                        uVar18 = uVar10 | 0x400000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x40000000000000;
LAB_1098629c0:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0x16 == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x4000;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfffff) + *piVar1 * (uVar18 >> 0x14)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_10986277c;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_1098629b8;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_1098629b8;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                        uVar18 = (uVar10 & 0x3fffffff) + 0x400000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if ((uVar10 >> 0x16 & 0xff) < 0xff) goto LAB_1098629c0;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_109862978;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109862778;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_109862878:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109862778;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_109862878;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109862778;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x100000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x100000 < uVar8) goto LAB_109862778;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x100000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_109862928;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109862768;
      }
    }
  }
LAB_109862778:
  uVar20 = 0;
LAB_10986277c:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 109862b04; end: 109862f37;  */

undefined8 FUN_109862b04(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109862b9c:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_109862d5c:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_109862dac:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_109862dec:
                        uVar18 = uVar10 | 0x400000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x40000000000000;
LAB_109862df4:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0x16 == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x4000;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfffff) + *piVar1 * (uVar18 >> 0x14)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_109862bb0;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_109862dec;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_109862dec;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                        uVar18 = (uVar10 & 0x3fffffff) + 0x400000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if ((uVar10 >> 0x16 & 0xff) < 0xff) goto LAB_109862df4;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_109862dac;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109862bac;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_109862cac:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109862bac;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_109862cac;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109862bac;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x100000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x100000 < uVar8) goto LAB_109862bac;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x100000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_109862d5c;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109862b9c;
      }
    }
  }
LAB_109862bac:
  uVar20 = 0;
LAB_109862bb0:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 109862f38; end: 10986336b;  */

undefined8 FUN_109862f38(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109862fd0:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_109863190:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_1098631e0:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_109863220:
                        uVar18 = uVar10 | 0x400000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x40000000000000;
LAB_109863228:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0x16 == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x4000;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfffff) + *piVar1 * (uVar18 >> 0x14)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_109862fe4;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_109863220;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_109863220;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                        uVar18 = (uVar10 & 0x3fffffff) + 0x400000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if ((uVar10 >> 0x16 & 0xff) < 0xff) goto LAB_109863228;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_1098631e0;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109862fe0;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_1098630e0:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109862fe0;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_1098630e0;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109862fe0;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x100000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x100000 < uVar8) goto LAB_109862fe0;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x100000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_109863190;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109862fd0;
      }
    }
  }
LAB_109862fe0:
  uVar20 = 0;
LAB_109862fe4:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 10986336c; end: 10986379f;  */

undefined8 FUN_10986336c(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109863404:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_1098635c4:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_109863614:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_109863654:
                        uVar18 = uVar10 | 0x400000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x40000000000000;
LAB_10986365c:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0x16 == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x4000;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfffff) + *piVar1 * (uVar18 >> 0x14)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_109863418;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_109863654;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_109863654;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                        uVar18 = (uVar10 & 0x3fffffff) + 0x400000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if ((uVar10 >> 0x16 & 0xff) < 0xff) goto LAB_10986365c;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_109863614;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109863414;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_109863514:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109863414;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_109863514;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109863414;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x100000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x100000 < uVar8) goto LAB_109863414;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x100000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_1098635c4;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109863404;
      }
    }
  }
LAB_109863414:
  uVar20 = 0;
LAB_109863418:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 1098637a0; end: 109863bd3;  */

undefined8 FUN_1098637a0(uint param_1,long *param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [2];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_50 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  lStack_a8 = 0;
  auStack_90[0] = 0;
  if (*(ushort *)((long)param_2 + 0x32) != 0) {
    if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
      lVar17 = param_2[1];
      lVar7 = param_2[2] + 4;
      if (lVar7 <= lVar17) {
        auStack_90[0] = *(uint *)(*param_2 + param_2[2]);
        param_2[2] = lVar7;
LAB_109863838:
        if ((long)(ulong)(auStack_90[0] >> 6) <= lVar17 - lVar7) {
          func_0x0001074287b0(&lStack_a8,auStack_90[0]);
          uVar8 = auStack_90[0];
          lVar7 = lStack_a8;
          if (auStack_90[0] == 0) {
            bVar4 = true;
LAB_1098639f8:
            if ((param_1 == 0) || (!bVar4)) {
              if (*(ushort *)((long)param_2 + 0x32) < 0x200) {
                lVar17 = param_2[1];
                lVar7 = param_2[2] + 8;
                if (lVar7 <= lVar17) {
                  uStack_48 = *(ulong *)(*param_2 + param_2[2]);
                  param_2[2] = lVar7;
LAB_109863a48:
                  if (uStack_48 <= (ulong)(lVar17 - lVar7)) {
                    param_2[2] = uStack_48 + lVar7;
                    uVar10 = (uint)uStack_48;
                    uVar8 = uVar10 - 1;
                    if (0 < (int)uVar10) {
                      lStack_58 = *param_2 + lVar7;
                      if (*(byte *)(lStack_58 + (ulong)uVar8) < 0x40) {
                        uVar10 = *(byte *)(lStack_58 + (ulong)uVar8) & 0x3f;
LAB_109863a88:
                        uVar18 = uVar10 | 0x400000;
                        uStack_50 = CONCAT44(uVar10,uVar8) | 0x40000000000000;
LAB_109863a90:
                        if (param_1 != 0) {
                          uVar14 = 0;
                          do {
                            uVar10 = (uint)uStack_50;
                            if (uVar18 >> 0x16 == 0) {
                              uVar6 = (ulong)uVar8;
                              uVar19 = uVar8 & (int)uVar8 >> 0x1f;
                              uVar9 = uVar8;
                              uVar11 = uVar18;
                              do {
                                uVar6 = uVar6 - 1;
                                uVar3 = uVar9 - 1;
                                uVar8 = uVar19;
                                uVar18 = uVar11;
                                uVar10 = (uint)uStack_50;
                                if ((int)uVar9 < 1) break;
                                uVar18 = (uint)*(byte *)(lStack_58 + (uVar6 & 0xffffffff)) |
                                         uVar11 << 8;
                                uStack_50 = (ulong)uVar3;
                                bVar4 = uVar11 < 0x4000;
                                uVar9 = uVar3;
                                uVar8 = uVar3;
                                uVar11 = uVar18;
                                uVar10 = uVar3;
                              } while (bVar4);
                            }
                            uStack_50._0_4_ = uVar10;
                            uVar10 = *(uint *)(lStack_88 + (ulong)(uVar18 & 0xfffff) * 4);
                            piVar1 = (int *)(lStack_70 + (ulong)uVar10 * 8);
                            uVar18 = ((uVar18 & 0xfffff) + *piVar1 * (uVar18 >> 0x14)) - piVar1[1];
                            uStack_50 = CONCAT44(uVar18,(uint)uStack_50);
                            *(uint *)(param_3 + uVar14 * 4) = uVar10;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != param_1);
                        }
                        uVar20 = 1;
                        goto LAB_10986384c;
                      }
                      bVar2 = *(byte *)(lStack_58 + (ulong)uVar8) >> 6;
                      if (bVar2 == 2) {
                        uVar8 = uVar10 - 3;
                        if (2 < uVar10) {
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (*(byte *)(lVar7 + -1) & 0x3f) << 0x10 |
                                   (uint)*(byte *)(lVar7 + -2) << 8 | (uint)*(byte *)(lVar7 + -3);
                          goto LAB_109863a88;
                        }
                      }
                      else if (bVar2 == 1) {
                        if (uVar10 != 1) {
                          uVar8 = uVar10 - 2;
                          lVar7 = lStack_58 + (uStack_48 & 0x7fffffff);
                          uVar10 = (uint)*(byte *)(lVar7 + -2) | (*(byte *)(lVar7 + -1) & 0x3f) << 8
                          ;
                          goto LAB_109863a88;
                        }
                      }
                      else {
                        uVar8 = uVar10 - 4;
                        uVar10 = *(uint *)(lStack_58 + (uStack_48 & 0x7fffffff) + -4);
                        uVar18 = (uVar10 & 0x3fffffff) + 0x400000;
                        uStack_50 = CONCAT44(uVar18,uVar8);
                        if ((uVar10 >> 0x16 & 0xff) < 0xff) goto LAB_109863a90;
                      }
                    }
                  }
                }
              }
              else {
                iVar5 = 1;
                func_0x00010985f308(1,&uStack_48,param_2);
                if (iVar5 != 0) {
                  lVar17 = param_2[1];
                  lVar7 = param_2[2];
                  goto LAB_109863a48;
                }
              }
            }
          }
          else {
            uVar10 = 0;
            lVar17 = param_2[1];
            lVar12 = param_2[2];
            do {
              lVar13 = lVar12 + 1;
              if (lVar17 < lVar13) goto LAB_109863848;
              bVar2 = *(byte *)(*param_2 + lVar12);
              param_2[2] = lVar13;
              uVar14 = (ulong)(bVar2 >> 2);
              uVar18 = bVar2 & 3;
              if ((bVar2 & 3) == 0) {
LAB_109863948:
                *(int *)(lStack_a8 + (ulong)uVar10 * 4) = (int)uVar14;
                uVar18 = uVar10;
              }
              else {
                if (uVar18 != 3) {
                  uVar19 = 6;
                  lVar12 = lVar13;
                  do {
                    lVar13 = lVar12 + 1;
                    if (lVar17 < lVar13) goto LAB_109863848;
                    bVar2 = *(byte *)(*param_2 + lVar12);
                    param_2[2] = lVar13;
                    uVar14 = (ulong)((uint)bVar2 << (ulong)(uVar19 & 0x1f) | (uint)uVar14);
                    uVar19 = uVar19 + 8;
                    uVar18 = uVar18 - 1;
                    lVar12 = lVar13;
                  } while (uVar18 != 0);
                  goto LAB_109863948;
                }
                uVar18 = (bVar2 >> 2) + uVar10;
                if (auStack_90[0] <= uVar18) goto LAB_109863848;
                lVar12 = uVar14 + 1;
                do {
                  *(undefined4 *)(lStack_a8 + (ulong)uVar10 * 4) = 0;
                  uVar10 = uVar10 + 1;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              uVar10 = uVar18 + 1;
              uVar14 = (ulong)auStack_90[0];
              lVar12 = lVar13;
            } while (uVar10 < auStack_90[0]);
            func_0x0001074287b0(&lStack_88,0x100000);
            FUN_10985f194(&lStack_70,uVar14);
            if (uVar8 != 0) {
              uVar6 = 0;
              uVar15 = 0;
              do {
                puVar16 = (undefined4 *)(lStack_70 + uVar6 * 8);
                uVar10 = (uint)uVar15;
                *puVar16 = *(undefined4 *)(lVar7 + uVar6 * 4);
                puVar16[1] = uVar10;
                uVar8 = *(int *)(lVar7 + uVar6 * 4) + uVar10;
                if (0x100000 < uVar8) goto LAB_109863848;
                if (uVar10 < uVar8) {
                  lVar17 = uVar8 - uVar15;
                  puVar16 = (undefined4 *)(lStack_88 + uVar15 * 4);
                  do {
                    *puVar16 = (int)uVar6;
                    lVar17 = lVar17 + -1;
                    puVar16 = puVar16 + 1;
                  } while (lVar17 != 0);
                }
                uVar6 = uVar6 + 1;
                uVar15 = (ulong)uVar8;
              } while (uVar6 != uVar14);
              if (uVar8 == 0x100000) {
                bVar4 = auStack_90[0] == 0;
                goto LAB_1098639f8;
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = 1;
      func_0x00010985f124(1,auStack_90,param_2);
      if (iVar5 != 0) {
        lVar17 = param_2[1];
        lVar7 = param_2[2];
        goto LAB_109863838;
      }
    }
  }
LAB_109863848:
  uVar20 = 0;
LAB_10986384c:
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  return uVar20;
}



/* Entry: 109863bd4; end: 109864123;  */

long * FUN_109863bd4(long *param_1)

{
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109864124; end: 10986417f;  */

long * FUN_109864124(long *param_1)

{
  if (param_1[0xb] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000109864134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))();
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 109864180; end: 10986427b;  */

long * FUN_109864180(long param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x40);
  lVar1 = plVar4[2] + 1;
  if (plVar4[1] < lVar1) {
    return (long *)0x0;
  }
  cVar2 = *(char *)(*plVar4 + plVar4[2]);
  plVar4[2] = lVar1;
  plVar4 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (cVar2 == '\x02') {
    plVar4 = (long *)0x300;
    __Znwm();
    func_0x00010986a3fc();
LAB_109864214:
    plVar3 = *(long **)(param_1 + 0x60);
    *(long **)(param_1 + 0x60) = plVar4;
    if (plVar3 == (long *)0x0) goto LAB_109864234;
    (**(code **)(*plVar3 + 8))();
  }
  else {
    if (cVar2 == '\x01') {
      plVar4 = (long *)0x2e0;
      __Znwm();
      FUN_10986757c();
      goto LAB_109864214;
    }
    if (cVar2 == '\0') {
      plVar4 = (long *)0x298;
      __Znwm();
      FUN_109864428();
      goto LAB_109864214;
    }
  }
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 == (long *)0x0) {
    return (long *)0x0;
  }
LAB_109864234:
                    /* WARNING: Could not recover jumptable at 0x00010986424c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
  return plVar4;
}



/* Entry: 10986427c; end: 10986429b;  */

void FUN_10986427c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109864288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0x30))();
  return;
}



/* Entry: 10986429c; end: 109864327;  */

undefined8 * FUN_10986429c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b15e00;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *param_1 = &PTR_DAT_110b162f8;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  puStack_28 = param_1 + 2;
  FUN_1098643ac(&puStack_28);
  return param_1;
}



/* Entry: 109864328; end: 109864357;  */

void FUN_109864328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109864334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0x48))();
  return;
}



/* Entry: 109864358; end: 1098643ab;  */

undefined8 * FUN_109864358(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_DAT_110b162f8;
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  puStack_28 = param_1 + 2;
  FUN_1098643ac(&puStack_28);
  return param_1;
}



/* Entry: 1098643ac; end: 109864427;  */

void FUN_1098643ac(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 109864428; end: 10986450f;  */

void FUN_109864428(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b15e90;
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
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x1f2) = 0;
  *(undefined2 *)((long)param_1 + 0x22a) = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)((long)param_1 + 0x27a) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((long)param_1 + 0x1e9) = 0;
  *(undefined8 *)((long)param_1 + 0x1e1) = 0;
  return;
}



/* Entry: 109864510; end: 10986474b;  */

long FUN_109864510(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_1 + 0x1a8);
  if (*(long *)(param_1 + 0x1b0) == lVar3) {
    return 0;
  }
  uVar7 = 0;
  do {
    uVar1 = *(uint *)(lVar3 + uVar7 * 0x120);
    if ((-1 < (int)uVar1) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10),
       (int)uVar1 < (int)((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x18) - lVar3) >> 3))) {
      plVar5 = *(long **)(lVar3 + (ulong)uVar1 * 8);
      plVar2 = plVar5;
      (**(code **)(*plVar5 + 0x30))();
      if (0 < (int)plVar2) {
        iVar6 = 0;
        do {
          plVar2 = plVar5;
          (**(code **)(*plVar5 + 0x28))(plVar5,iVar6);
          if ((int)plVar2 == param_2) {
            lVar3 = *(long *)(param_1 + 0x1a8) + uVar7 * 0x120;
            if (*(char *)(lVar3 + 200) != '\0') {
              return lVar3 + 8;
            }
            return 0;
          }
          iVar6 = iVar6 + 1;
          plVar2 = plVar5;
          (**(code **)(*plVar5 + 0x30))();
        } while (iVar6 < (int)plVar2);
      }
    }
    uVar7 = (ulong)((int)uVar7 + 1);
    lVar3 = *(long *)(param_1 + 0x1a8);
    uVar4 = (*(long *)(param_1 + 0x1b0) - lVar3 >> 5) * -0x71c71c71c71c71c7;
  } while (uVar7 <= uVar4 && uVar4 - uVar7 != 0);
  return 0;
}



/* Entry: 10986474c; end: 109864a03;  */

undefined8 FUN_10986474c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  undefined *puVar16;
  long *plStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar10 = *(long *)(param_1 + 8);
  plVar11 = *(long **)(lVar10 + 0x40);
  lVar8 = plVar11[1];
  lVar3 = plVar11[2];
  lVar7 = lVar3 + 1;
  if (lVar8 < lVar7) {
    return 0;
  }
  lVar13 = *plVar11;
  bVar4 = *(byte *)(lVar13 + lVar3);
  plVar11[2] = lVar7;
  lVar1 = lVar3 + 2;
  if (lVar8 < lVar1) {
    return 0;
  }
  cVar5 = *(char *)(lVar13 + lVar7);
  plVar11[2] = lVar1;
  if ((char)bVar4 < '\0') {
    if (-1 < *(int *)(param_1 + 0x1a0)) {
      return 0;
    }
    piVar14 = (int *)(param_1 + 0x1a0);
  }
  else {
    uVar15 = (*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8) >> 5) * -0x71c71c71c71c71c7;
    if (uVar15 < bVar4 || uVar15 - bVar4 == 0) {
      return 0;
    }
    piVar14 = (int *)(*(long *)(param_1 + 0x1a8) + (ulong)bVar4 * 0x120);
    if (-1 < *piVar14) {
      return 0;
    }
  }
  *piVar14 = (int)param_2;
  if ((ushort)(*(ushort *)(lVar10 + 0x48) >> 8 | *(ushort *)(lVar10 + 0x48) << 8) < 0x102) {
    if (cVar5 != '\0') {
      if ((char)bVar4 < '\0') {
        return 0;
      }
      goto LAB_109864840;
    }
    bVar12 = 0;
  }
  else {
    if (lVar8 < lVar3 + 3) {
      return 0;
    }
    bVar12 = *(byte *)(lVar13 + lVar1);
    plVar11[2] = lVar3 + 3;
    if (1 < bVar12) {
      return 0;
    }
    if (cVar5 != '\0') {
      if (bVar12 != 0) {
        return 0;
      }
      if ((char)bVar4 < '\0') {
        return 0;
      }
LAB_109864840:
      puVar16 = *(undefined **)(lVar10 + 0x58);
      lVar7 = *(long *)(param_1 + 0x1a8) + (ulong)(uint)bVar4 * 0x120;
      puVar2 = (undefined *)(lVar7 + 0xd0);
      lVar7 = lVar7 + 8;
      ppuVar6 = (undefined **)0xa0;
      __Znwm();
      *ppuVar6 = (undefined *)&PTR_DAT_110b161d8;
      ppuVar6[1] = (undefined *)0x0;
      ppuVar6[4] = (undefined *)0x0;
      ppuVar6[3] = (undefined *)0x0;
      ppuVar6[6] = (undefined *)0x0;
      ppuVar6[5] = (undefined *)0x0;
      ppuVar6[8] = (undefined *)0x0;
      ppuVar6[7] = (undefined *)0x0;
      ppuVar6[10] = (undefined *)0x0;
      ppuVar6[9] = (undefined *)0x0;
      ppuVar6[0xc] = (undefined *)0x0;
      ppuVar6[0xb] = (undefined *)0x0;
      ppuVar6[0xd] = (undefined *)0x0;
      ppuVar6[0xe] = (undefined *)0x0;
      ppuVar6[2] = (undefined *)&PTR_FUN_110b16008;
      ppuVar6[0xf] = (undefined *)0x0;
      ppuVar6[0x10] = (undefined *)0x0;
      ppuVar6[0x11] = puVar16;
      ppuVar6[0x12] = puVar2;
      ppuVar6[0x13] = (undefined *)0x0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      ppuStack_b8 = &PTR_FUN_110b16008;
      uStack_50 = 0;
      uStack_48 = 0;
      lStack_d8 = lVar7;
      puStack_d0 = puVar2;
      puStack_c8 = puVar16;
      ppuStack_c0 = ppuVar6;
      FUN_109864c78(&ppuStack_b8,lVar7,&lStack_d8);
      FUN_109864cfc(ppuVar6,&ppuStack_b8);
      FUN_109864d80(&ppuStack_b8);
      goto LAB_109864954;
    }
  }
  if ((char)bVar4 < '\0') {
    lVar7 = param_1 + 0x168;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x1a8) + (ulong)(uint)bVar4 * 0x120;
    lVar7 = lVar8 + 0xd0;
    *(undefined1 *)(lVar8 + 200) = 0;
  }
  if (bVar12 == 1) {
    FUN_109864a04();
  }
  else {
    FUN_109864b68(&ppuStack_b8,param_1,lVar7);
  }
  ppuVar6 = ppuStack_b8;
  if (ppuStack_b8 == (undefined **)0x0) {
    return 0;
  }
LAB_109864954:
  plVar11 = (long *)0x80;
  __Znwm();
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[3] = 0;
  plVar11[2] = 0;
  plVar11[1] = 0;
  *plVar11 = (long)&PTR_DAT_110b14db8;
  plVar11[10] = 0;
  plVar11[9] = 0;
  plVar11[0xc] = 0;
  plVar11[0xb] = 0;
  plVar11[0xe] = 0;
  plVar11[0xd] = 0;
  plVar11[0xf] = (long)ppuVar6;
  uVar9 = *(undefined8 *)(param_1 + 8);
  plStack_e0 = plVar11;
  FUN_109864dbc(uVar9,param_2,&plStack_e0);
  plVar11 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
    return uVar9;
  }
  return uVar9;
}



/* Entry: 109864a04; end: 109864b67;  */

void FUN_109864a04(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  long alStack_88 [7];
  
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x58);
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  *puVar1 = &PTR_FUN_110b16080;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[2] = &PTR_FUN_110b160d8;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = uVar3;
  puVar1[0x1c] = param_3;
  puVar1[0x1d] = 0;
  uStack_138 = *(undefined8 *)(param_2 + 0x10);
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  ppuStack_118 = &PTR_FUN_110b160d8;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  alStack_88[1] = 0;
  alStack_88[0] = 0;
  alStack_88[2] = 0;
  alStack_88[4] = 0;
  alStack_88[5] = 0;
  alStack_88[6] = 0;
  uStack_130 = param_3;
  uStack_128 = uVar3;
  puStack_120 = puVar1;
  func_0x00010986ea80(&ppuStack_118,uStack_138,&uStack_138);
  FUN_10986eb00(puVar1,&ppuStack_118);
  *param_1 = puVar1;
  ppuStack_118 = &PTR_FUN_110b160d8;
  if (alStack_88[4] != 0) {
    alStack_88[5] = alStack_88[4];
    __ZdlPv();
  }
  lVar2 = 0;
  do {
    if (*(long *)((long)alStack_88 + lVar2) != 0) {
      *(long *)((long)alStack_88 + lVar2 + 8) = *(long *)((long)alStack_88 + lVar2);
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x48);
  FUN_10986f99c(&ppuStack_118);
  return;
}



/* Entry: 109864b68; end: 109864c77;  */

void FUN_109864b68(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x58);
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  *puVar1 = &PTR_DAT_110b16150;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_110b16198;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = uVar2;
  puVar1[0x12] = param_3;
  puVar1[0x13] = 0;
  uStack_d8 = *(undefined8 *)(param_2 + 0x10);
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  ppuStack_b8 = &PTR_FUN_110b16198;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_d0 = param_3;
  uStack_c8 = uVar2;
  puStack_c0 = puVar1;
  func_0x00010986ea80(&ppuStack_b8,uStack_d8,&uStack_d8);
  FUN_10986fbb4(puVar1,&ppuStack_b8);
  *param_1 = puVar1;
  ppuStack_b8 = &PTR_FUN_110b16198;
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  FUN_10986f99c(&ppuStack_b8);
  return;
}



/* Entry: 109864c78; end: 109864cfb;  */

void FUN_109864c78(long param_1,long param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  *(long *)(param_1 + 8) = param_2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (*(long **)(param_2 + 0x80))[1] - **(long **)(param_2 + 0x80) >> 2;
  uStack_21 = 0;
  func_0x000108adee10(param_1 + 0x30,
                      (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) << 0x1f) >> 0x20,&uStack_21);
  uStack_22 = 0;
  func_0x000108adee10(param_1 + 0x48,
                      (*(long *)(*(long *)(param_1 + 8) + 0x70) -
                      *(long *)(*(long *)(param_1 + 8) + 0x68)) * 0x40000000 >> 0x20,&uStack_22);
  uVar2 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  *(undefined8 *)(param_1 + 0x18) = param_3[1];
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}



/* Entry: 109864cfc; end: 109864d7f;  */

void FUN_109864cfc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *puVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar14 = param_2[2];
  uVar13 = param_2[1];
  uVar16 = param_2[4];
  uVar15 = param_2[3];
  param_1[7] = param_2[5];
  param_1[6] = uVar16;
  param_1[5] = uVar15;
  param_1[4] = uVar14;
  param_1[3] = uVar13;
  func_0x000108b0402c(param_1 + 8,param_2 + 6);
  func_0x000108b0402c(param_1 + 0xb,param_2 + 9);
  if (param_1 + 2 == param_2) {
    return;
  }
  puVar12 = (undefined8 *)param_2[0xc];
  puVar5 = (undefined8 *)param_2[0xd];
  lVar7 = (long)puVar5 - (long)puVar12;
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar10 = param_1 + 0xe;
    uVar6 = lVar7 >> 2;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar3 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar3 + -8) = unaff_x30;
    uVar8 = param_1[0x10];
    puVar4 = (undefined8 *)*puVar10;
    if (uVar6 <= (ulong)((long)(uVar8 - (long)puVar4) >> 2)) {
      puVar10 = (undefined8 *)param_1[0xf];
      lVar7 = (long)puVar10 - (long)puVar4;
      if ((ulong)(lVar7 >> 2) < uVar6) {
        puVar11 = (undefined8 *)((long)puVar12 + lVar7);
        puVar2 = puVar10;
        if (puVar10 != puVar4) {
          do {
            *(undefined4 *)puVar4 = *(undefined4 *)puVar12;
            lVar7 = lVar7 + -4;
            puVar4 = (undefined8 *)((long)puVar4 + 4);
            puVar12 = (undefined8 *)((long)puVar12 + 4);
          } while (lVar7 != 0);
        }
        for (; puVar11 != puVar5; puVar11 = (undefined8 *)((long)puVar11 + 4)) {
          *(undefined4 *)puVar10 = *(undefined4 *)puVar11;
          puVar10 = (undefined8 *)((long)puVar10 + 4);
          puVar2 = (undefined8 *)((long)puVar2 + 4);
        }
        param_1[0xf] = puVar2;
      }
      else {
        for (; puVar12 != puVar5; puVar12 = (undefined8 *)((long)puVar12 + 4)) {
          *(undefined4 *)puVar4 = *(undefined4 *)puVar12;
          puVar4 = (undefined8 *)((long)puVar4 + 4);
        }
        param_1[0xf] = puVar4;
      }
      return;
    }
    puVar11 = puVar12;
    if (puVar4 != (undefined8 *)0x0) {
      param_1[0xf] = puVar4;
      __ZdlPv();
      uVar8 = 0;
      *puVar10 = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
    }
    if (uVar6 >> 0x3e == 0) {
      uVar1 = (long)uVar8 >> 1;
      if ((ulong)((long)uVar8 >> 1) <= uVar6) {
        uVar1 = uVar6;
      }
      if (0x7ffffffffffffffb < uVar8) {
        uVar1 = 0x3fffffffffffffff;
      }
      FUN_10986fb7c(puVar10,uVar1);
      puVar9 = (undefined4 *)param_1[0xf];
      for (; puVar12 != puVar5; puVar12 = (undefined8 *)((long)puVar12 + 4)) {
        *puVar9 = *(undefined4 *)puVar12;
        puVar9 = puVar9 + 1;
      }
      param_1[0xf] = puVar9;
      return;
    }
    FUN_10986dc00();
    *(undefined8 **)(puVar3 + -0x50) = puVar5;
    *(undefined8 **)(puVar3 + -0x48) = puVar10;
    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x38) = FUN_10986fb7c;
    if ((ulong)puVar11 >> 0x3e == 0) {
      puVar12 = puVar4;
      FUN_10986dc80();
      *puVar4 = puVar12;
      puVar4[1] = puVar12;
      puVar4[2] = (undefined4 *)((long)puVar12 + (long)puVar11 * 4);
      return;
    }
    FUN_10986dc00();
    *(ulong *)(puVar3 + -0x80) = uVar6;
    *(undefined8 **)(puVar3 + -0x78) = puVar12;
    *(undefined8 **)(puVar3 + -0x70) = puVar5;
    *(undefined8 **)(puVar3 + -0x68) = puVar10;
    *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x40;
    *(code **)(puVar3 + -0x58) = FUN_10986fbb4;
    uVar14 = puVar11[2];
    uVar13 = puVar11[1];
    uVar16 = puVar11[4];
    uVar15 = puVar11[3];
    puVar4[7] = puVar11[5];
    puVar4[6] = uVar16;
    puVar4[5] = uVar15;
    puVar4[4] = uVar14;
    puVar4[3] = uVar13;
    func_0x000108b0402c(puVar4 + 8,puVar11 + 6);
    func_0x000108b0402c(puVar4 + 0xb,puVar11 + 9);
    if (puVar4 + 2 == puVar11) break;
    puVar12 = (undefined8 *)puVar11[0xc];
    puVar5 = (undefined8 *)puVar11[0xd];
    lVar7 = (long)puVar5 - (long)puVar12;
    unaff_x29 = *(undefined8 *)(puVar3 + -0x60);
    unaff_x30 = *(undefined8 *)(puVar3 + -0x58);
    unaff_x20 = *(undefined8 *)(puVar3 + -0x70);
    unaff_x19 = *(undefined8 *)(puVar3 + -0x68);
    unaff_x22 = *(undefined8 *)(puVar3 + -0x80);
    unaff_x21 = *(undefined8 *)(puVar3 + -0x78);
    puVar3 = puVar3 + -0x50;
    param_1 = puVar4;
  }
  return;
}



/* Entry: 109864d80; end: 109864dbb;  */

undefined8 * FUN_109864d80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b16008;
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  *param_1 = &PTR_FUN_110b16058;
  if (param_1[9] != 0) {
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109864dbc; end: 109864e37;  */

uint FUN_109864dbc(long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (-1 < (int)param_2) {
    plVar3 = (long *)(param_1 + 0x10);
    lVar1 = *plVar3;
    if ((int)((ulong)(*(long *)(param_1 + 0x18) - lVar1) >> 3) <= (int)param_2) {
      FUN_10986d684(plVar3,param_2 + 1);
      lVar1 = *plVar3;
    }
    uVar2 = *param_3;
    *param_3 = 0;
    plVar3 = *(long **)(lVar1 + (ulong)param_2 * 8);
    *(undefined8 *)(lVar1 + (ulong)param_2 * 8) = uVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  return ~param_2 >> 0x1f;
}



/* Entry: 109864e38; end: 1098654db;  */

void FUN_109864e38(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  undefined4 *puVar20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined2 uStack_7e;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 *puVar21;
  
  *(undefined4 *)(param_1 + 0x100) = 0;
  FUN_109870e88(param_1 + 0x108);
  lVar12 = *(long *)(param_1 + 8);
  bVar3 = *(byte *)(lVar12 + 0x48);
  if (CONCAT11(bVar3,*(undefined1 *)(lVar12 + 0x49)) < 0x202) {
    plVar10 = *(long **)(lVar12 + 0x40);
    if (bVar3 < 2) {
      lVar19 = plVar10[2] + 4;
      if (plVar10[1] < lVar19) {
        return;
      }
      uVar14 = *(undefined4 *)(*plVar10 + plVar10[2]);
      plVar10[2] = lVar19;
    }
    else {
      iVar7 = 1;
      func_0x00010986e988(1,&lStack_b0);
      if (iVar7 == 0) {
        return;
      }
      lVar12 = *(long *)(param_1 + 8);
      bVar3 = *(byte *)(lVar12 + 0x48);
      uVar14 = (undefined4)lStack_b0;
    }
    *(undefined4 *)(param_1 + 0x100) = uVar14;
  }
  plVar10 = *(long **)(lVar12 + 0x40);
  if (bVar3 < 2) {
    lVar19 = plVar10[1];
    lVar12 = plVar10[2] + 4;
    if (lVar19 < lVar12) {
      return;
    }
    uStack_64 = *(undefined4 *)(*plVar10 + plVar10[2]);
    plVar10[2] = lVar12;
    *(undefined4 *)(param_1 + 0x130) = uStack_64;
  }
  else {
    iVar7 = 1;
    func_0x00010986e988(1,&uStack_64);
    if (iVar7 == 0) {
      return;
    }
    bVar3 = *(byte *)(*(long *)(param_1 + 8) + 0x48);
    *(undefined4 *)(param_1 + 0x130) = uStack_64;
    plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x40);
    if (1 < bVar3) {
      iVar7 = 1;
      func_0x00010986e988(1,&uStack_68);
      if (iVar7 == 0) {
        return;
      }
      goto LAB_109864f6c;
    }
    lVar19 = plVar10[1];
    lVar12 = plVar10[2];
  }
  if (lVar19 < lVar12 + 4) {
    return;
  }
  uStack_68 = *(uint *)(*plVar10 + lVar12);
  plVar10[2] = lVar12 + 4;
LAB_109864f6c:
  uVar17 = uStack_68;
  if (uStack_68 < 0x55555556) {
    uVar5 = *(uint *)(param_1 + 0x130);
    if ((uVar5 <= uStack_68 * 3) &&
       ((ulong)(uStack_68 * 3 >> 1) <= (ulong)(((long)(int)uVar5 + -1) * (long)(int)uVar5) >> 1)) {
      lVar16 = *(long *)(param_1 + 8);
      plVar10 = *(long **)(lVar16 + 0x40);
      lVar19 = plVar10[2];
      lVar12 = lVar19 + 1;
      if (lVar12 <= plVar10[1]) {
        bVar3 = *(byte *)(*plVar10 + lVar19);
        plVar10[2] = lVar12;
        if (*(byte *)(lVar16 + 0x48) < 2) {
          if (plVar10[1] < lVar19 + 5) {
            return;
          }
          uStack_6c = *(uint *)(*plVar10 + lVar12);
          plVar10[2] = lVar19 + 5;
        }
        else {
          iVar7 = 1;
          func_0x00010986e988(1,&uStack_6c);
          if (iVar7 == 0) {
            return;
          }
        }
        uVar5 = uStack_6c;
        uVar18 = (ulong)uStack_6c;
        if ((uStack_6c <= uVar17) && (uVar17 <= (uint)(uVar18 * 0x2aaaaaaab >> 0x21))) {
          plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x40);
          if (*(byte *)(*(long *)(param_1 + 8) + 0x48) < 2) {
            lVar12 = plVar10[2] + 4;
            if (plVar10[1] < lVar12) {
              return;
            }
            uVar2 = *(uint *)(*plVar10 + plVar10[2]);
            plVar10[2] = lVar12;
          }
          else {
            iVar7 = 1;
            func_0x00010986e988(1,&uStack_70);
            uVar2 = uStack_70;
            if (iVar7 == 0) {
              return;
            }
          }
          if (uVar2 <= uVar5) {
            *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
            puVar8 = (undefined8 *)0xa8;
            uStack_70 = uVar2;
            __Znwm();
            puVar8[0xb] = 0;
            puVar8[0xc] = 0;
            puVar8[1] = 0;
            *puVar8 = 0;
            puVar8[3] = 0;
            puVar8[2] = 0;
            puVar8[5] = 0;
            puVar8[4] = 0;
            puVar8[7] = 0;
            puVar8[6] = 0;
            puVar8[9] = 0;
            puVar8[8] = 0;
            *(undefined4 *)(puVar8 + 10) = 0;
            puVar8[0xd] = 0;
            puVar8[0xe] = puVar8;
            puVar8[0x10] = 0;
            puVar8[0xf] = 0;
            puVar8[0x12] = 0;
            puVar8[0x11] = 0;
            puVar8[0x14] = 0;
            puVar8[0x13] = 0;
            plVar10 = (long *)(param_1 + 0x10);
            lVar12 = *plVar10;
            *plVar10 = (long)puVar8;
            if ((lVar12 == 0) || (func_0x00010986e9f8(plVar10), *plVar10 != 0)) {
              *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x138);
              func_0x000107c27e9c(param_1 + 0x138,uVar17);
              *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x150);
              func_0x000107c27e9c(param_1 + 0x150,uVar17);
              *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
              *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
              *(undefined8 *)(param_1 + 0x80) = 0;
              *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
              *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
              *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
              lVar12 = *(long *)(param_1 + 0x1a8);
              lVar19 = *(long *)(param_1 + 0x1b0);
              while (lVar19 != lVar12) {
                lVar19 = lVar19 + -0x120;
                func_0x00010986d8cc(lVar19);
              }
              *(long *)(param_1 + 0x1b0) = lVar12;
              FUN_1098654dc(param_1 + 0x1a8,bVar3);
              uVar9 = *(undefined8 *)(param_1 + 0x10);
              FUN_109875fc4(uVar9,uVar17,*(int *)(param_1 + 0x130) + uVar2);
              if ((int)uVar9 != 0) {
                lStack_b0 = CONCAT71(lStack_b0._1_7_,1);
                func_0x000108adee10(param_1 + 0xe8,*(int *)(param_1 + 0x130) + uVar2,&lStack_b0);
                lVar12 = *(long *)(param_1 + 8);
                if (CONCAT11(*(byte *)(lVar12 + 0x48),*(undefined1 *)(lVar12 + 0x49)) < 0x202) {
                  plVar11 = *(long **)(lVar12 + 0x40);
                  if (*(byte *)(lVar12 + 0x48) < 2) {
                    lVar12 = plVar11[2] + 4;
                    if (plVar11[1] < lVar12) {
                      return;
                    }
                    uStack_74 = *(uint *)(*plVar11 + plVar11[2]);
                    plVar11[2] = lVar12;
                  }
                  else {
                    iVar7 = 1;
                    func_0x00010986e988(1,&uStack_74);
                    if (iVar7 == 0) {
                      return;
                    }
                  }
                  if (uStack_74 == 0) {
                    return;
                  }
                  plVar11 = *(long **)(*(long *)(param_1 + 8) + 0x40);
                  if (plVar11[1] - plVar11[2] < (long)(ulong)uStack_74) {
                    return;
                  }
                  uStack_98 = 0;
                  uStack_90 = 0;
                  uStack_80 = 0;
                  uStack_88 = 0;
                  lStack_b0 = plVar11[2] + (ulong)uStack_74 + *plVar11;
                  lStack_a8 = plVar11[1] - (plVar11[2] + (ulong)uStack_74);
                  uStack_7e = *(undefined2 *)((long)plVar11 + 0x32);
                  lStack_a0 = 0;
                  lVar12 = param_1;
                  func_0x000109865870(param_1,&lStack_b0);
                  iVar7 = (int)lVar12;
                  if (iVar7 == -1) {
                    return;
                  }
                }
                else {
                  lVar19 = param_1;
                  func_0x000109865870(param_1,*(undefined8 *)(lVar12 + 0x40));
                  if ((int)lVar19 == -1) {
                    return;
                  }
                  iVar7 = -1;
                }
                FUN_109865b70(param_1 + 0x1c0,param_1);
                *(uint *)(param_1 + 0x288) = (uint)bVar3;
                uStack_80 = 0;
                uStack_98 = 0;
                lStack_a0 = 0;
                uStack_88 = 0;
                uStack_90 = 0;
                lStack_a8 = 0;
                lStack_b0 = 0;
                lVar12 = param_1 + 0x1c0;
                FUN_109865bfc(lVar12,&lStack_b0);
                if (((int)lVar12 != 0) &&
                   (lVar12 = param_1, FUN_109865c58(param_1,uVar18), (int)lVar12 != -1)) {
                  lVar19 = *(long *)(param_1 + 8);
                  plVar11 = *(long **)(lVar19 + 0x40);
                  *plVar11 = lStack_b0 + lStack_a0;
                  plVar11[1] = lStack_a8 - lStack_a0;
                  plVar11[2] = 0;
                  uVar4 = *(ushort *)(lVar19 + 0x48);
                  uVar4 = uVar4 >> 8 | uVar4 << 8;
                  if (uVar4 < 0x202) {
                    plVar11[2] = (long)iVar7;
                  }
                  if (*(long *)(param_1 + 0x1a8) != *(long *)(param_1 + 0x1b0)) {
                    uVar18 = ((long *)*plVar10)[1] - *(long *)*plVar10 & 0x3fffffffc;
                    if (uVar4 < 0x201) {
                      if (uVar18 != 0) {
                        uVar17 = 0;
                        do {
                          FUN_109866914(param_1,uVar17);
                          uVar17 = uVar17 + 3;
                        } while (uVar17 < (uint)((ulong)((*(long **)(param_1 + 0x10))[1] -
                                                        **(long **)(param_1 + 0x10)) >> 2));
                      }
                    }
                    else if (uVar18 != 0) {
                      uVar17 = 0;
                      do {
                        func_0x000109866ad0(param_1,uVar17);
                        uVar17 = uVar17 + 3;
                      } while (uVar17 < (uint)((ulong)((*(long **)(param_1 + 0x10))[1] -
                                                      **(long **)(param_1 + 0x10)) >> 2));
                    }
                  }
                  FUN_109866ccc(param_1 + 0x1c0);
                  lVar19 = *(long *)(param_1 + 0x1a8);
                  if (*(long *)(param_1 + 0x1b0) != lVar19) {
                    uVar18 = 0;
                    do {
                      FUN_1098765cc(lVar19 + uVar18 * 0x120 + 8,*plVar10);
                      lVar16 = *(long *)(param_1 + 0x1a8);
                      lVar19 = lVar16 + uVar18 * 0x120;
                      puVar20 = *(undefined4 **)(lVar19 + 0x108);
                      puVar1 = *(undefined4 **)(lVar19 + 0x110);
                      if (puVar20 != puVar1) {
                        do {
                          puVar21 = puVar20 + 1;
                          FUN_109876784(*(long *)(param_1 + 0x1a8) + uVar18 * 0x120 + 8,*puVar20);
                          puVar20 = puVar21;
                        } while (puVar21 != puVar1);
                        lVar16 = *(long *)(param_1 + 0x1a8);
                      }
                      uVar13 = lVar16 + uVar18 * 0x120 + 8;
                      FUN_109876950(uVar13,0,0);
                      if ((uVar13 & 1) == 0) {
                        return;
                      }
                      uVar18 = (ulong)((int)uVar18 + 1);
                      lVar19 = *(long *)(param_1 + 0x1a8);
                      uVar13 = (*(long *)(param_1 + 0x1b0) - lVar19 >> 5) * -0x71c71c71c71c71c7;
                    } while (uVar18 <= uVar13 && uVar13 - uVar18 != 0);
                  }
                  FUN_109866d18(param_1 + 0x168,
                                (ulong)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) -
                                       *(long *)(*(long *)(param_1 + 0x10) + 0x30)) >> 2);
                  lVar19 = *(long *)(param_1 + 0x1a8);
                  if (*(long *)(param_1 + 0x1b0) != lVar19) {
                    uVar18 = 0;
                    uVar13 = 1;
                    do {
                      lVar19 = lVar19 + uVar18 * 0x120;
                      iVar7 = (int)((ulong)(*(long *)(lVar19 + 0x78) - *(long *)(lVar19 + 0x70)) >>
                                   2);
                      iVar15 = (int)((ulong)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) -
                                            *(long *)(*(long *)(param_1 + 0x10) + 0x30)) >> 2);
                      if (iVar7 <= iVar15) {
                        iVar7 = iVar15;
                      }
                      FUN_109866d18(lVar19 + 0xd0,iVar7);
                      lVar19 = *(long *)(param_1 + 0x1a8);
                      uVar18 = (*(long *)(param_1 + 0x1b0) - lVar19 >> 5) * -0x71c71c71c71c71c7;
                      bVar6 = uVar13 <= uVar18;
                      lVar16 = uVar18 - uVar13;
                      uVar18 = uVar13;
                      uVar13 = (ulong)((int)uVar13 + 1);
                    } while (bVar6 && lVar16 != 0);
                  }
                  FUN_109866d4c(param_1,lVar12);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1098654dc; end: 109865b6f;  */

undefined8 * FUN_1098654dc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  byte bStack_88;
  uint uStack_84;
  long lStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar17 = (undefined8 *)*param_1;
  puVar15 = (undefined8 *)param_1[1];
  lVar23 = (long)puVar15 - (long)puVar17;
  bVar6 = param_2 < (long *)((lVar23 >> 5) * -0x71c71c71c71c71c7);
  uVar18 = (long)param_2 + (lVar23 >> 5) * 0x71c71c71c71c71c7;
  if (bVar6 || uVar18 == 0) {
    puVar9 = param_1;
    if (bVar6) {
      while (puVar15 != puVar17 + (long)param_2 * 0x24) {
        puVar15 = puVar15 + -0x24;
        puVar9 = puVar15;
        func_0x00010986d8cc(puVar15);
      }
      param_1[1] = puVar17 + (long)param_2 * 0x24;
    }
    return puVar9;
  }
  if (uVar18 <= (ulong)((param_1[2] - (long)puVar15 >> 5) * -0x71c71c71c71c71c7)) {
    puVar17 = puVar15 + uVar18 * 0x24;
    do {
      *(undefined4 *)puVar15 = 0xffffffff;
      puVar15[4] = 0;
      puVar15[3] = 0;
      puVar15[6] = 0;
      puVar15[5] = 0;
      puVar15[2] = 0;
      puVar15[1] = 0;
      *(undefined1 *)(puVar15 + 7) = 1;
      puVar15[9] = 0;
      puVar15[8] = 0;
      puVar15[0xb] = 0;
      puVar15[10] = 0;
      puVar15[0xd] = 0;
      puVar15[0xc] = 0;
      puVar15[0xf] = 0;
      puVar15[0xe] = 0;
      puVar15[0x11] = 0;
      puVar15[0x10] = 0;
      puVar15[0x12] = puVar15 + 1;
      puVar15[0x14] = 0;
      puVar15[0x13] = 0;
      puVar15[0x16] = 0;
      puVar15[0x15] = 0;
      puVar15[0x18] = 0;
      puVar15[0x17] = 0;
      *(undefined1 *)(puVar15 + 0x19) = 1;
      puVar15[0x1b] = 0;
      puVar15[0x1a] = 0;
      puVar15[0x1d] = 0;
      puVar15[0x1c] = 0;
      puVar15[0x1f] = 0;
      puVar15[0x1e] = 0;
      *(undefined4 *)(puVar15 + 0x20) = 0;
      puVar15[0x21] = 0;
      puVar15[0x22] = 0;
      puVar15[0x23] = 0;
      puVar15 = puVar15 + 0x24;
    } while (puVar15 != puVar17);
    param_1[1] = puVar17;
    return param_1;
  }
  lVar11 = param_1[2] - (long)puVar17 >> 5;
  plVar12 = (long *)(lVar11 * 0x1c71c71c71c71c72);
  if (plVar12 < param_2 || (long)plVar12 - (long)param_2 == 0) {
    plVar12 = param_2;
  }
  if (0x71c71c71c71c70 < (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
    plVar12 = (long *)0xe38e38e38e38e3;
  }
  if (plVar12 < (long *)0xe38e38e38e38e4) {
    puVar9 = (undefined8 *)((long)plVar12 * 0x120);
    __Znwm();
    puVar2 = (undefined4 *)((long)puVar9 + lVar23);
    puVar13 = puVar2;
    do {
      *puVar13 = 0xffffffff;
      *(undefined8 *)(puVar13 + 8) = 0;
      *(undefined8 *)(puVar13 + 6) = 0;
      *(undefined8 *)(puVar13 + 0xc) = 0;
      *(undefined8 *)(puVar13 + 10) = 0;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 2) = 0;
      *(undefined1 *)(puVar13 + 0xe) = 1;
      *(undefined8 *)(puVar13 + 0x12) = 0;
      *(undefined8 *)(puVar13 + 0x10) = 0;
      *(undefined8 *)(puVar13 + 0x16) = 0;
      *(undefined8 *)(puVar13 + 0x14) = 0;
      *(undefined8 *)(puVar13 + 0x1a) = 0;
      *(undefined8 *)(puVar13 + 0x18) = 0;
      *(undefined8 *)(puVar13 + 0x1e) = 0;
      *(undefined8 *)(puVar13 + 0x1c) = 0;
      *(undefined8 *)(puVar13 + 0x22) = 0;
      *(undefined8 *)(puVar13 + 0x20) = 0;
      *(undefined4 **)(puVar13 + 0x24) = puVar13 + 2;
      *(undefined8 *)(puVar13 + 0x28) = 0;
      *(undefined8 *)(puVar13 + 0x26) = 0;
      *(undefined8 *)(puVar13 + 0x2c) = 0;
      *(undefined8 *)(puVar13 + 0x2a) = 0;
      *(undefined8 *)(puVar13 + 0x30) = 0;
      *(undefined8 *)(puVar13 + 0x2e) = 0;
      *(undefined1 *)(puVar13 + 0x32) = 1;
      *(undefined8 *)(puVar13 + 0x36) = 0;
      *(undefined8 *)(puVar13 + 0x34) = 0;
      *(undefined8 *)(puVar13 + 0x3a) = 0;
      *(undefined8 *)(puVar13 + 0x38) = 0;
      *(undefined8 *)(puVar13 + 0x3e) = 0;
      *(undefined8 *)(puVar13 + 0x3c) = 0;
      puVar13[0x40] = 0;
      *(undefined8 *)(puVar13 + 0x42) = 0;
      *(undefined8 *)(puVar13 + 0x44) = 0;
      *(undefined8 *)(puVar13 + 0x46) = 0;
      puVar13 = puVar13 + 0x48;
    } while (puVar13 != puVar2 + uVar18 * 0x48);
    puVar22 = puVar9 + (long)plVar12 * 0x24;
    puVar10 = puVar17;
    puVar13 = (undefined4 *)((long)puVar2 - lVar23);
    if (puVar17 != puVar15) {
      do {
        *puVar13 = *(undefined4 *)puVar10;
        *(undefined8 *)(puVar13 + 2) = puVar10[1];
        uVar24 = puVar10[2];
        *(undefined8 *)(puVar13 + 6) = puVar10[3];
        *(undefined8 *)(puVar13 + 4) = uVar24;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar10[1] = 0;
        *(undefined8 *)(puVar13 + 8) = puVar10[4];
        uVar24 = puVar10[5];
        *(undefined8 *)(puVar13 + 0xc) = puVar10[6];
        *(undefined8 *)(puVar13 + 10) = uVar24;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[4] = 0;
        *(undefined1 *)(puVar13 + 0xe) = *(undefined1 *)(puVar10 + 7);
        *(undefined8 *)(puVar13 + 0x12) = 0;
        *(undefined8 *)(puVar13 + 0x14) = 0;
        *(undefined8 *)(puVar13 + 0x10) = 0;
        uVar24 = puVar10[8];
        *(undefined8 *)(puVar13 + 0x12) = puVar10[9];
        *(undefined8 *)(puVar13 + 0x10) = uVar24;
        *(undefined8 *)(puVar13 + 0x14) = puVar10[10];
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        *(undefined8 *)(puVar13 + 0x16) = 0;
        *(undefined8 *)(puVar13 + 0x18) = 0;
        *(undefined8 *)(puVar13 + 0x1a) = 0;
        uVar24 = puVar10[0xb];
        *(undefined8 *)(puVar13 + 0x18) = puVar10[0xc];
        *(undefined8 *)(puVar13 + 0x16) = uVar24;
        *(undefined8 *)(puVar13 + 0x1a) = puVar10[0xd];
        puVar10[0xb] = 0;
        puVar10[0xc] = 0;
        puVar10[0xd] = 0;
        *(undefined8 *)(puVar13 + 0x1c) = 0;
        *(undefined8 *)(puVar13 + 0x1e) = 0;
        *(undefined8 *)(puVar13 + 0x20) = 0;
        uVar24 = puVar10[0xe];
        *(undefined8 *)(puVar13 + 0x1e) = puVar10[0xf];
        *(undefined8 *)(puVar13 + 0x1c) = uVar24;
        *(undefined8 *)(puVar13 + 0x20) = puVar10[0x10];
        puVar10[0xf] = 0;
        puVar10[0x10] = 0;
        puVar10[0xe] = 0;
        uVar24 = puVar10[0x11];
        *(undefined8 *)(puVar13 + 0x24) = puVar10[0x12];
        *(undefined8 *)(puVar13 + 0x22) = uVar24;
        *(undefined8 *)(puVar13 + 0x28) = 0;
        *(undefined8 *)(puVar13 + 0x2a) = 0;
        *(undefined8 *)(puVar13 + 0x26) = 0;
        uVar24 = puVar10[0x13];
        *(undefined8 *)(puVar13 + 0x28) = puVar10[0x14];
        *(undefined8 *)(puVar13 + 0x26) = uVar24;
        *(undefined8 *)(puVar13 + 0x2a) = puVar10[0x15];
        puVar10[0x13] = 0;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0;
        *(undefined8 *)(puVar13 + 0x2c) = 0;
        *(undefined8 *)(puVar13 + 0x2e) = 0;
        *(undefined8 *)(puVar13 + 0x30) = 0;
        uVar24 = puVar10[0x16];
        *(undefined8 *)(puVar13 + 0x2e) = puVar10[0x17];
        *(undefined8 *)(puVar13 + 0x2c) = uVar24;
        *(undefined8 *)(puVar13 + 0x30) = puVar10[0x18];
        puVar10[0x17] = 0;
        puVar10[0x18] = 0;
        puVar10[0x16] = 0;
        *(undefined1 *)(puVar13 + 0x32) = *(undefined1 *)(puVar10 + 0x19);
        *(undefined8 *)(puVar13 + 0x36) = 0;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(undefined8 *)(puVar13 + 0x34) = 0;
        uVar24 = puVar10[0x1a];
        *(undefined8 *)(puVar13 + 0x36) = puVar10[0x1b];
        *(undefined8 *)(puVar13 + 0x34) = uVar24;
        *(undefined8 *)(puVar13 + 0x38) = puVar10[0x1c];
        puVar10[0x1a] = 0;
        puVar10[0x1b] = 0;
        puVar10[0x1c] = 0;
        *(undefined8 *)(puVar13 + 0x3a) = 0;
        *(undefined8 *)(puVar13 + 0x3c) = 0;
        *(undefined8 *)(puVar13 + 0x3e) = 0;
        uVar24 = puVar10[0x1d];
        *(undefined8 *)(puVar13 + 0x3c) = puVar10[0x1e];
        *(undefined8 *)(puVar13 + 0x3a) = uVar24;
        *(undefined8 *)(puVar13 + 0x3e) = puVar10[0x1f];
        puVar10[0x1e] = 0;
        puVar10[0x1f] = 0;
        puVar10[0x1d] = 0;
        puVar13[0x40] = *(undefined4 *)(puVar10 + 0x20);
        *(undefined8 *)(puVar13 + 0x44) = 0;
        *(undefined8 *)(puVar13 + 0x46) = 0;
        *(undefined8 *)(puVar13 + 0x42) = 0;
        *(undefined8 *)(puVar13 + 0x42) = puVar10[0x21];
        uVar24 = puVar10[0x22];
        *(undefined8 *)(puVar13 + 0x46) = puVar10[0x23];
        *(undefined8 *)(puVar13 + 0x44) = uVar24;
        puVar10[0x21] = 0;
        puVar10[0x22] = 0;
        puVar10[0x23] = 0;
        puVar10 = puVar10 + 0x24;
        puVar13 = puVar13 + 0x48;
      } while (puVar10 != puVar15);
      do {
        puVar9 = puVar17;
        func_0x00010986d8cc(puVar17);
        puVar17 = puVar17 + 0x24;
      } while (puVar17 != puVar15);
      puVar17 = (undefined8 *)*param_1;
    }
    *param_1 = (undefined4 *)((long)puVar2 - lVar23);
    param_1[1] = puVar2 + uVar18 * 0x48;
    param_1[2] = puVar22;
    if (puVar17 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar17);
      return puVar17;
    }
    return puVar9;
  }
  puVar9 = param_1;
  func_0x000104c4f740();
  uStack_48 = 0x109865870;
  lStack_80 = lVar23;
  plStack_78 = plVar12;
  uStack_70 = uVar18;
  puStack_68 = puVar17;
  puStack_60 = puVar15;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(byte *)(puVar9[1] + 0x48) < 2) {
    lVar23 = param_2[2] + 4;
    if (param_2[1] < lVar23) {
      return (undefined8 *)0xffffffff;
    }
    uVar16 = *(uint *)(*param_2 + param_2[2]);
    param_2[2] = lVar23;
  }
  else {
    iVar20 = 1;
    func_0x00010986e988(1,&uStack_84,param_2);
    uVar16 = uStack_84;
    if (iVar20 == 0) {
      return (undefined8 *)0xffffffff;
    }
  }
  if (uVar16 != 0) {
    if ((uint)((ulong)(((long *)puVar9[2])[1] - *(long *)puVar9[2] >> 2) / 3) < uVar16) {
      return (undefined8 *)0xffffffff;
    }
    if ((ushort)(*(ushort *)(puVar9[1] + 0x48) >> 8 | *(ushort *)(puVar9[1] + 0x48) << 8) < 0x102) {
      do {
        lVar11 = param_2[1];
        lVar3 = param_2[2];
        lVar23 = lVar3 + 4;
        if (lVar11 < lVar23) {
          return (undefined8 *)0xffffffff;
        }
        lVar14 = *param_2;
        iStack_90 = *(int *)(lVar14 + lVar3);
        param_2[2] = lVar23;
        lVar1 = lVar3 + 8;
        if (lVar11 < lVar1) {
          return (undefined8 *)0xffffffff;
        }
        uStack_8c = *(uint *)(lVar14 + lVar23);
        param_2[2] = lVar1;
        if (lVar11 < lVar3 + 9) {
          return (undefined8 *)0xffffffff;
        }
        bVar5 = *(byte *)(lVar14 + lVar1);
        param_2[2] = lVar3 + 9;
        bStack_88 = bStack_88 & 0xfe | bVar5 & 1;
        FUN_109867320(puVar9 + 9,&iStack_90);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    else {
      uVar19 = 0;
      uVar21 = uVar16;
      do {
        iVar20 = 1;
        func_0x00010986e988(1,&uStack_94,param_2);
        if (iVar20 == 0) {
          return (undefined8 *)0xffffffff;
        }
        uVar19 = uStack_94 + uVar19;
        iVar20 = 1;
        uStack_8c = uVar19;
        func_0x00010986e988(1,&uStack_94,param_2);
        if (iVar20 == 0) {
          return (undefined8 *)0xffffffff;
        }
        iStack_90 = uVar19 - uStack_94;
        if (uVar19 < uStack_94) {
          return (undefined8 *)0xffffffff;
        }
        FUN_109867320(puVar9 + 9,&iStack_90);
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      *(undefined1 *)(param_2 + 6) = 1;
      param_2[3] = *param_2 + param_2[2];
      param_2[4] = *param_2 + param_2[1];
      param_2[5] = 0;
      uVar18 = (ulong)uVar16;
      lVar23 = 8;
      do {
        uVar4 = 1;
        if ((ushort)(*(ushort *)(puVar9[1] + 0x48) >> 8 | *(ushort *)(puVar9[1] + 0x48) << 8) <
            0x202) {
          uVar4 = 2;
        }
        func_0x00010985f050(param_2,uVar4,&iStack_90);
        *(byte *)(puVar9[9] + lVar23) = *(byte *)(puVar9[9] + lVar23) & 0xfe | (byte)iStack_90 & 1;
        lVar23 = lVar23 + 0xc;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      *(undefined1 *)(param_2 + 6) = 0;
      param_2[2] = param_2[2] + (param_2[5] + 7U >> 3);
    }
  }
  iStack_90 = 0;
  bVar5 = *(byte *)(puVar9[1] + 0x48);
  if (bVar5 < 2) {
    lVar23 = param_2[2] + 4;
    if (param_2[1] < lVar23) {
      return (undefined8 *)0xffffffff;
    }
    iVar20 = *(int *)(*param_2 + param_2[2]);
    param_2[2] = lVar23;
  }
  else {
    if (0x200 < CONCAT11(bVar5,*(undefined1 *)(puVar9[1] + 0x49))) goto LAB_109865b4c;
    iVar7 = 1;
    func_0x00010986e988(1,&iStack_90,param_2);
    iVar20 = iStack_90;
    if (iVar7 == 0) {
      return (undefined8 *)0xffffffff;
    }
  }
  if (iVar20 != 0) {
    if ((ushort)(*(ushort *)(puVar9[1] + 0x48) >> 8 | *(ushort *)(puVar9[1] + 0x48) << 8) < 0x102) {
      do {
        lVar23 = param_2[2] + 4;
        if (param_2[1] < lVar23) {
          return (undefined8 *)0xffffffff;
        }
        uVar4 = *(undefined4 *)(*param_2 + param_2[2]);
        param_2[2] = lVar23;
        FUN_109867418(puVar9 + 0xc,uVar4);
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    else {
      iVar7 = 0;
      do {
        iVar8 = 1;
        func_0x00010986e988(1,&uStack_94,param_2);
        if (iVar8 == 0) {
          return (undefined8 *)0xffffffff;
        }
        iVar7 = uStack_94 + iVar7;
        FUN_109867418(puVar9 + 0xc,iVar7);
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
  }
LAB_109865b4c:
  return (undefined8 *)(ulong)*(uint *)(param_2 + 2);
}



/* Entry: 109865b70; end: 109865bfb;  */

void FUN_109865b70(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined2 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  param_1[0x1a] = (long)param_2;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x40))();
  lVar6 = *(long *)plVar4[8];
  lVar5 = ((long *)plVar4[8])[2];
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x40))();
  lVar1 = *(long *)(plVar4[8] + 8);
  lVar2 = *(long *)(plVar4[8] + 0x10);
  (**(code **)(*param_2 + 0x40))();
  uVar3 = *(undefined2 *)(param_2[8] + 0x32);
  *param_1 = lVar6 + lVar5;
  param_1[1] = lVar1 - lVar2;
  *(undefined2 *)((long)param_1 + 0x32) = uVar3;
  param_1[2] = 0;
  return;
}



/* Entry: 109865bfc; end: 109865c57;  */

void FUN_109865bfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = param_1;
  func_0x00010986d91c();
  if ((((int)puVar1 != 0) && (puVar1 = param_1, func_0x00010986d9b4(), (int)puVar1 != 0)) &&
     (puVar1 = param_1, FUN_10986da70(), (int)puVar1 != 0)) {
    uVar3 = param_1[1];
    uVar2 = *param_1;
    uVar5 = param_1[3];
    uVar4 = param_1[2];
    uVar7 = param_1[5];
    uVar6 = param_1[4];
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 6);
    param_2[3] = uVar5;
    param_2[2] = uVar4;
    param_2[5] = uVar7;
    param_2[4] = uVar6;
    param_2[1] = uVar3;
    *param_2 = uVar2;
  }
  return;
}



/* Entry: 109865c58; end: 109866913;  */

ulong FUN_109865c58(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  uint ****ppppuVar7;
  int iVar8;
  ulong uVar9;
  uint *****pppppuVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  long *plVar28;
  uint *****pppppuVar29;
  uint *****pppppuVar30;
  long *plStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 uStack_d8;
  undefined1 uStack_c9;
  uint ****ppppuStack_c8;
  uint ****ppppuStack_c0;
  uint ****ppppuStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint ****ppppuStack_88;
  uint ****ppppuStack_80;
  uint ****ppppuStack_78;
  uint auStack_6c [3];
  
  ppppuStack_88 = (uint ****)0x0;
  ppppuStack_80 = (uint ****)0x0;
  ppppuStack_78 = (uint ****)0x0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0x3f800000;
  ppppuStack_c8 = (uint ****)0x0;
  ppppuStack_c0 = (uint ****)0x0;
  ppppuStack_b8 = (uint ****)0x0;
  iVar26 = *(int *)(param_1 + 0xf0);
  if ((int)param_2 < 1) {
    param_2 = 0;
  }
  else {
    uVar25 = 0;
    lVar17 = *(long *)(param_1 + 0x1a8);
    lVar19 = *(long *)(param_1 + 0x1b0);
    do {
      func_0x00010985f050(param_1 + 0x1f8,1,&plStack_e8);
      uVar24 = (uint)uVar25;
      if ((uint)plStack_e8 == 0) {
LAB_109865d30:
        if (ppppuStack_88 == ppppuStack_80) goto LAB_109866860;
        uVar15 = *(uint *)((long)ppppuStack_80 + -4);
        plVar12 = *(long **)(param_1 + 0x10);
        if (uVar15 == 0xffffffff) {
LAB_109865d74:
          uVar9 = 0xffffffff;
        }
        else {
          uVar23 = uVar15 - 2;
          if (0x55555555 < (uVar15 + 1) * -0x55555555) {
            uVar23 = uVar15 + 1;
          }
          if (uVar23 == 0xffffffff) goto LAB_109865d74;
          uVar9 = (ulong)*(uint *)(*plVar12 + (ulong)uVar23 * 4);
        }
        lVar16 = plVar12[6];
        iVar14 = *(int *)(lVar16 + uVar9 * 4);
        if (iVar14 == -1) {
          uVar23 = 0xffffffff;
        }
        else {
          uVar23 = iVar14 - 2;
          if (0x55555555 < (uint)((iVar14 + 1) * -0x55555555)) {
            uVar23 = iVar14 + 1;
          }
        }
        if (((uVar15 == uVar23) ||
            ((lVar13 = plVar12[3], uVar15 != 0xffffffff &&
             (*(int *)(lVar13 + (ulong)uVar15 * 4) != -1)))) ||
           ((uVar23 != 0xffffffff && (*(int *)(lVar13 + (ulong)uVar23 * 4) != -1))))
        goto LAB_109866860;
        uVar24 = uVar24 * 3;
        uVar1 = uVar24 + 1;
        *(uint *)(lVar13 + (ulong)uVar15 * 4) = uVar1;
        *(uint *)(lVar13 + (ulong)uVar1 * 4) = uVar15;
        uVar2 = uVar24 + 2;
        *(uint *)(lVar13 + (ulong)uVar23 * 4) = uVar2;
        *(uint *)(lVar13 + (ulong)uVar2 * 4) = uVar23;
        if (uVar15 == 0xffffffff) {
LAB_109865e24:
          uVar20 = 0xffffffff;
        }
        else {
          iVar14 = 2;
          if (0x55555555 < uVar15 * -0x55555555) {
            iVar14 = -1;
          }
          if (iVar14 + uVar15 == 0xffffffff) goto LAB_109865e24;
          uVar20 = (ulong)*(uint *)(*plVar12 + (ulong)(iVar14 + uVar15) * 4);
        }
        if (uVar23 == 0xffffffff) {
LAB_109865e58:
          uVar21 = 0xffffffff;
        }
        else {
          uVar15 = uVar23 - 2;
          if (0x55555555 < (uVar23 + 1) * -0x55555555) {
            uVar15 = uVar23 + 1;
          }
          if (uVar15 == 0xffffffff) goto LAB_109865e58;
          uVar21 = (ulong)*(uint *)(*plVar12 + (ulong)uVar15 * 4);
        }
        uVar27 = 0xffffffff;
        if ((uVar9 == uVar20) || (uVar9 == uVar21)) goto LAB_109866864;
        lVar13 = *plVar12;
        *(int *)(lVar13 + (ulong)uVar24 * 4) = (int)uVar9;
        *(int *)(lVar13 + (ulong)uVar1 * 4) = (int)uVar21;
        *(int *)(lVar13 + (ulong)uVar2 * 4) = (int)uVar20;
        if (uVar20 != 0xffffffff) {
          *(uint *)(lVar16 + uVar20 * 4) = uVar2;
        }
        uVar20 = uVar9 >> 3 & 0x1ffffff8;
        *(ulong *)(*(long *)(param_1 + 0xe8) + uVar20) =
             *(ulong *)(*(long *)(param_1 + 0xe8) + uVar20) &
             (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
        *(uint *)((long)ppppuStack_80 + -4) = uVar24;
      }
      else {
        func_0x00010985f050(param_1 + 0x1f8,2,auStack_6c);
        pppppuVar10 = (uint *****)ppppuStack_80;
        pppppuVar30 = (uint *****)ppppuStack_88;
        uVar15 = (uint)plStack_e8 | auStack_6c[0] << 1;
        if (uVar15 == 0) goto LAB_109865d30;
        uVar27 = 0xffffffff;
        if ((int)uVar15 < 5) {
          if (uVar15 != 1) {
            if (uVar15 == 3) {
LAB_109865ed0:
              if (ppppuStack_88 != ppppuStack_80) {
                uVar23 = *(uint *)((long)ppppuStack_80 + -4);
                uVar9 = *(ulong *)(param_1 + 0x10);
                lVar16 = *(long *)(uVar9 + 0x18);
                if ((uVar23 == 0xffffffff) || (*(int *)(lVar16 + (ulong)uVar23 * 4) == -1)) {
                  uVar22 = uVar24 * 3;
                  uVar1 = uVar22 + 2;
                  uVar2 = uVar22;
                  if (uVar15 == 5) {
                    uVar2 = uVar22 + 1;
                    uVar1 = uVar22;
                  }
                  iVar14 = 1;
                  if (uVar15 == 5) {
                    iVar14 = 2;
                  }
                  uVar15 = iVar14 + uVar22;
                  *(uint *)(lVar16 + (ulong)uVar15 * 4) = uVar23;
                  *(uint *)(lVar16 + (ulong)uVar23 * 4) = uVar15;
                  FUN_1098672c4();
                  plVar12 = *(long **)(param_1 + 0x10);
                  lVar16 = plVar12[6];
                  if ((int)((ulong)(plVar12[7] - lVar16) >> 2) <= iVar26) {
                    lVar13 = *plVar12;
                    *(int *)(lVar13 + (ulong)uVar15 * 4) = (int)uVar9;
                    if ((int)uVar9 != -1) {
                      *(uint *)(lVar16 + (uVar9 & 0xffffffff) * 4) = uVar15;
                    }
                    if (uVar23 == 0xffffffff) {
                      uVar15 = 0xffffffff;
                      *(undefined4 *)(lVar13 + (ulong)uVar1 * 4) = 0xffffffff;
                    }
                    else {
                      iVar14 = 2;
                      if (0x55555555 < uVar23 * -0x55555555) {
                        iVar14 = -1;
                      }
                      if (iVar14 + uVar23 == 0xffffffff) {
                        *(undefined4 *)(lVar13 + (ulong)uVar1 * 4) = 0xffffffff;
                      }
                      else {
                        uVar15 = *(uint *)(lVar13 + (ulong)(iVar14 + uVar23) * 4);
                        *(uint *)(lVar13 + (ulong)uVar1 * 4) = uVar15;
                        if (uVar15 != 0xffffffff) {
                          *(uint *)(lVar16 + (ulong)uVar15 * 4) = uVar1;
                        }
                      }
                      uVar15 = uVar23 - 2;
                      if (0x55555555 < (uVar23 + 1) * -0x55555555) {
                        uVar15 = uVar23 + 1;
                      }
                      if (uVar15 != 0xffffffff) {
                        uVar15 = *(uint *)(lVar13 + (ulong)uVar15 * 4);
                      }
                    }
                    *(uint *)(lVar13 + (ulong)uVar2 * 4) = uVar15;
                    *(uint *)((long)ppppuStack_80 + -4) = uVar22;
                    goto LAB_109866228;
                  }
                }
              }
              goto LAB_109866860;
            }
            goto LAB_109866864;
          }
          if (ppppuStack_88 == ppppuStack_80) goto LAB_109866860;
          pppppuVar29 = (uint *****)((long)ppppuStack_80 + -4);
          uVar15 = *(uint *)pppppuVar29;
          lVar16 = lStack_b0;
          ppppuStack_80 = (uint ****)pppppuVar29;
          FUN_109870f34(lStack_b0,uStack_a8,uVar25);
          if (lVar16 != 0) {
            if (pppppuVar29 < ppppuStack_78) {
              *(uint *)pppppuVar29 = *(uint *)(lVar16 + 0x14);
            }
            else {
              pppppuVar10 = &ppppuStack_88;
              FUN_10986dcb4(pppppuVar10,lVar16 + 0x14);
              pppppuVar30 = (uint *****)ppppuStack_88;
            }
            ppppuStack_80 = (uint ****)pppppuVar10;
            pppppuVar29 = pppppuVar10;
          }
          if ((pppppuVar30 == pppppuVar29) ||
             (uVar23 = *(uint *)((long)pppppuVar29 + -4), uVar23 == uVar15)) goto LAB_109866860;
          plVar12 = *(long **)(param_1 + 0x10);
          lVar16 = plVar12[3];
          if (((uVar23 != 0xffffffff) && (*(int *)(lVar16 + (ulong)uVar23 * 4) != -1)) ||
             ((uVar15 != 0xffffffff && (*(int *)(lVar16 + (ulong)uVar15 * 4) != -1))))
          goto LAB_109866860;
          uVar24 = uVar24 * 3;
          uVar1 = uVar24 + 2;
          *(uint *)(lVar16 + (ulong)uVar23 * 4) = uVar1;
          *(uint *)(lVar16 + (ulong)uVar1 * 4) = uVar23;
          uVar2 = uVar24 + 1;
          *(uint *)(lVar16 + (ulong)uVar15 * 4) = uVar2;
          *(uint *)(lVar16 + (ulong)uVar2 * 4) = uVar15;
          if (uVar23 == 0xffffffff) {
            lVar13 = *plVar12;
            uVar9 = 0xffffffff;
            *(undefined4 *)(lVar13 + (ulong)uVar24 * 4) = 0xffffffff;
            uVar22 = 0xffffffff;
          }
          else {
            iVar14 = 2;
            if (0x55555555 < uVar23 * -0x55555555) {
              iVar14 = -1;
            }
            lVar13 = *plVar12;
            if (iVar14 + uVar23 == 0xffffffff) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar9 = (ulong)*(uint *)(lVar13 + (ulong)(iVar14 + uVar23) * 4);
            }
            *(int *)(lVar13 + (ulong)uVar24 * 4) = (int)uVar9;
            uVar22 = uVar23 - 2;
            if (0x55555555 < (uVar23 + 1) * -0x55555555) {
              uVar22 = uVar23 + 1;
            }
            if (uVar22 != 0xffffffff) {
              uVar22 = *(uint *)(lVar13 + (ulong)uVar22 * 4);
            }
          }
          *(uint *)(lVar13 + (ulong)uVar2 * 4) = uVar22;
          if (uVar15 == 0xffffffff) {
            uVar23 = 0xffffffff;
            *(undefined4 *)(lVar13 + (ulong)uVar1 * 4) = 0xffffffff;
            uVar20 = 0xffffffff;
          }
          else {
            iVar14 = 2;
            if (0x55555555 < uVar15 * -0x55555555) {
              iVar14 = -1;
            }
            if (iVar14 + uVar15 == 0xffffffff) {
              *(undefined4 *)(lVar13 + (ulong)uVar1 * 4) = 0xffffffff;
            }
            else {
              uVar23 = *(uint *)(lVar13 + (ulong)(iVar14 + uVar15) * 4);
              *(uint *)(lVar13 + (ulong)uVar1 * 4) = uVar23;
              if (uVar23 != 0xffffffff) {
                *(uint *)(plVar12[6] + (ulong)uVar23 * 4) = uVar1;
              }
            }
            uVar23 = uVar15 - 2;
            if (0x55555555 < (uVar15 + 1) * -0x55555555) {
              uVar23 = uVar15 + 1;
            }
            if (uVar23 == 0xffffffff) {
              uVar20 = 0xffffffff;
              uVar23 = 0xffffffff;
            }
            else {
              uVar20 = (ulong)*(uint *)(lVar13 + (ulong)uVar23 * 4);
            }
          }
          plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,(uint)uVar20);
          lVar18 = plVar12[6];
          uVar15 = uVar23;
          if (uVar9 != 0xffffffff) {
            *(undefined4 *)(lVar18 + uVar9 * 4) = *(undefined4 *)(lVar18 + uVar20 * 4);
          }
          while (uVar15 != 0xffffffff) {
            *(int *)(lVar13 + (ulong)uVar15 * 4) = (int)uVar9;
            uVar1 = uVar15 - 2;
            if (0x55555555 < (uVar15 + 1) * -0x55555555) {
              uVar1 = uVar15 + 1;
            }
            uVar15 = uVar1;
            if (((uVar1 != 0xffffffff) &&
                (uVar1 = *(uint *)(lVar16 + (ulong)uVar1 * 4), uVar15 = uVar1, uVar1 != 0xffffffff))
               && (uVar15 = uVar1 - 2, 0x55555555 < (uVar1 + 1) * -0x55555555)) {
              uVar15 = uVar1 + 1;
            }
            if (uVar15 == uVar23) goto LAB_109866860;
          }
          *(undefined4 *)(lVar18 + uVar20 * 4) = 0xffffffff;
          if (lVar17 == lVar19) {
            if (ppppuStack_c0 < ppppuStack_b8) {
              *(uint *)ppppuStack_c0 = (uint)uVar20;
              ppppuStack_c0 = (uint ****)((long)ppppuStack_c0 + 4);
            }
            else {
              pppppuVar10 = &ppppuStack_c8;
              FUN_10986ddcc(pppppuVar10,&plStack_e8);
              pppppuVar29 = (uint *****)ppppuStack_80;
              ppppuStack_c0 = (uint ****)pppppuVar10;
            }
          }
          *(uint *)((long)pppppuVar29 + -4) = uVar24;
        }
        else {
          if (uVar15 != 7) {
            if (uVar15 == 5) goto LAB_109865ed0;
            goto LAB_109866864;
          }
          plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,uVar24 * 3);
          uVar9 = *(ulong *)(param_1 + 0x10);
          FUN_1098672c4();
          plVar28 = *(long **)(param_1 + 0x10);
          iVar14 = (uint)plStack_e8;
          iVar8 = (int)uVar9;
          *(int *)(*plVar28 + ((ulong)plStack_e8 & 0xffffffff) * 4) = iVar8;
          plVar12 = plVar28;
          FUN_1098672c4();
          *(int *)(*plVar28 + (ulong)(iVar14 + 1) * 4) = (int)plVar12;
          plVar28 = *(long **)(param_1 + 0x10);
          iVar14 = (uint)plStack_e8;
          plVar12 = plVar28;
          FUN_1098672c4();
          *(int *)(*plVar28 + (ulong)(iVar14 + 2) * 4) = (int)plVar12;
          piVar3 = *(int **)(*(long *)(param_1 + 0x10) + 0x30);
          if (iVar26 < (int)((ulong)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) - (long)piVar3) >>
                            2)) goto LAB_109866860;
          if (iVar8 == -1) {
            *piVar3 = (uint)plStack_e8 + 1;
            uVar15 = 1;
LAB_1098661f4:
            piVar3[uVar15] = (uint)plStack_e8 + 2;
          }
          else {
            piVar3[uVar9 & 0xffffffff] = (uint)plStack_e8;
            if (iVar8 + 1U == 0xffffffff) {
              uVar15 = 0;
              goto LAB_1098661f4;
            }
            piVar3[iVar8 + 1U] = (uint)plStack_e8 + 1;
            uVar15 = iVar8 + 2;
            if (uVar15 != 0xffffffff) goto LAB_1098661f4;
          }
          if (ppppuStack_80 < ppppuStack_78) {
            *(uint *)ppppuStack_80 = (uint)plStack_e8;
            ppppuStack_80 = (uint ****)((long)ppppuStack_80 + 4);
          }
          else {
            pppppuVar10 = &ppppuStack_88;
            FUN_10986dcb4(pppppuVar10,&plStack_e8);
            ppppuStack_80 = (uint ****)pppppuVar10;
          }
LAB_109866228:
          lVar16 = *(long *)(param_1 + 0x50);
          if (lVar16 != *(long *)(param_1 + 0x48)) {
            do {
              if (param_2 + ~uVar24 < *(uint *)(lVar16 + -8)) goto LAB_109866860;
              if (*(uint *)(lVar16 + -8) != param_2 + ~uVar24) break;
              bVar6 = *(byte *)(lVar16 + -4);
              uVar15 = *(uint *)(lVar16 + -0xc);
              *(long *)(param_1 + 0x50) = lVar16 + -0xc;
              if ((int)uVar15 < 0) goto LAB_109866860;
              uVar23 = *(uint *)((long)ppppuStack_80 + -4);
              if ((bVar6 & 1) == 0) {
                iVar8 = uVar23 + 2;
                if (0x55555555 < uVar23 * -0x55555555) {
                  iVar8 = uVar23 - 1;
                }
                iVar14 = -1;
                if (uVar23 != 0xffffffff) {
                  iVar14 = iVar8;
                }
              }
              else if (uVar23 == 0xffffffff) {
                iVar14 = -1;
              }
              else {
                iVar14 = uVar23 - 2;
                if (0x55555555 < (uVar23 + 1) * -0x55555555) {
                  iVar14 = uVar23 + 1;
                }
              }
              iVar8 = param_2 + ~uVar15;
              plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,iVar8);
              plVar12 = &lStack_b0;
              FUN_109870fcc(plVar12,iVar8,&plStack_e8);
              *(int *)((long)plVar12 + 0x14) = iVar14;
              lVar16 = *(long *)(param_1 + 0x50);
            } while (lVar16 != *(long *)(param_1 + 0x48));
          }
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != param_2);
  }
  plVar12 = *(long **)(param_1 + 0x10);
  if ((int)((ulong)(plVar12[7] - plVar12[6]) >> 2) <= iVar26) {
    if (ppppuStack_88 != ppppuStack_80) {
      do {
        ppppuStack_80 = (uint ****)((long)ppppuStack_80 + -4);
        auStack_6c[0] = *(uint *)ppppuStack_80;
        if (*(ushort *)(param_1 + 0x1f2) < 0x202) {
          func_0x00010985f050(param_1 + 0x248,1,&plStack_e8);
          if ((uint)plStack_e8 == 0) goto LAB_109866518;
LAB_1098664bc:
          plVar12 = *(long **)(param_1 + 0x10);
          lVar17 = *plVar12;
          if ((int)((ulong)(plVar12[1] - lVar17 >> 2) / 3) <= (int)param_2) goto LAB_109866860;
          if (auStack_6c[0] == 0xffffffff) {
LAB_109866540:
            uVar25 = 0xffffffff;
          }
          else {
            uVar24 = auStack_6c[0] - 2;
            if (0x55555555 < (auStack_6c[0] + 1) * -0x55555555) {
              uVar24 = auStack_6c[0] + 1;
            }
            if (uVar24 == 0xffffffff) goto LAB_109866540;
            uVar25 = (ulong)*(uint *)(lVar17 + (ulong)uVar24 * 4);
          }
          iVar26 = *(int *)(plVar12[6] + uVar25 * 4);
          if (iVar26 == -1) {
            uVar24 = 0xffffffff;
LAB_1098665a8:
            uVar9 = 0xffffffff;
          }
          else {
            uVar24 = iVar26 - 2;
            if (0x55555555 < (uint)((iVar26 + 1) * -0x55555555)) {
              uVar24 = iVar26 + 1;
            }
            if (uVar24 == 0xffffffff) {
              uVar9 = 0xffffffff;
              uVar24 = 0xffffffff;
            }
            else {
              uVar15 = uVar24 - 2;
              if (0x55555555 < (uVar24 + 1) * -0x55555555) {
                uVar15 = uVar24 + 1;
              }
              if (uVar15 == 0xffffffff) goto LAB_1098665a8;
              uVar9 = (ulong)*(uint *)(lVar17 + (ulong)uVar15 * 4);
            }
          }
          uVar23 = *(uint *)(plVar12[6] + uVar9 * 4);
          uVar15 = uVar23;
          if ((uVar23 != 0xffffffff) &&
             (uVar15 = uVar23 - 2, 0x55555555 < (uVar23 + 1) * -0x55555555)) {
            uVar15 = uVar23 + 1;
          }
          if ((((auStack_6c[0] == uVar24) || (auStack_6c[0] == uVar15)) ||
              ((uVar24 == uVar15 ||
               ((auStack_6c[0] != 0xffffffff &&
                (*(int *)(plVar12[3] + (ulong)auStack_6c[0] * 4) != -1)))))) ||
             ((lVar19 = plVar12[3], uVar24 != 0xffffffff &&
              (*(int *)(lVar19 + (ulong)uVar24 * 4) != -1)))) goto LAB_109866860;
          if (uVar15 == 0xffffffff) {
            uVar23 = 0xffffffff;
          }
          else {
            if (*(int *)(lVar19 + (ulong)uVar15 * 4) != -1) goto LAB_109866860;
            uVar23 = uVar15 - 2;
            if (0x55555555 < (uVar15 + 1) * -0x55555555) {
              uVar23 = uVar15 + 1;
            }
            if (uVar23 != 0xffffffff) {
              uVar23 = *(uint *)(lVar17 + (ulong)uVar23 * 4);
            }
          }
          uVar1 = param_2 * 3;
          plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,uVar1);
          *(uint *)(lVar19 + (ulong)uVar1 * 4) = auStack_6c[0];
          *(uint *)(lVar19 + (ulong)auStack_6c[0] * 4) = uVar1;
          *(uint *)(lVar19 + (ulong)(uVar1 + 1) * 4) = uVar24;
          *(uint *)(lVar19 + (ulong)uVar24 * 4) = uVar1 + 1;
          *(uint *)(lVar19 + (ulong)(uVar1 + 2) * 4) = uVar15;
          *(uint *)(lVar19 + (ulong)uVar15 * 4) = uVar1 + 2;
          *(int *)(lVar17 + (ulong)uVar1 * 4) = (int)uVar9;
          *(uint *)(lVar17 + (ulong)(uVar1 + 1) * 4) = uVar23;
          *(int *)(lVar17 + (ulong)(uVar1 + 2) * 4) = (int)uVar25;
          lVar16 = *(long *)(param_1 + 0xe8);
          lVar19 = 3;
          uVar25 = (ulong)uVar1;
          do {
            if ((int)uVar25 == -1) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar9 = (ulong)*(uint *)(lVar17 + uVar25 * 4);
            }
            uVar20 = uVar9 >> 3 & 0x1ffffff8;
            *(ulong *)(lVar16 + uVar20) =
                 *(ulong *)(lVar16 + uVar20) & (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
            lVar19 = lVar19 + -1;
            uVar25 = (ulong)((int)uVar25 + 1);
          } while (lVar19 != 0);
          uStack_c9 = 1;
          func_0x0001078db3d4(param_1 + 0x78,&uStack_c9);
          puVar5 = *(undefined4 **)(param_1 + 0x98);
          if (puVar5 < *(undefined4 **)(param_1 + 0xa0)) {
            puVar11 = puVar5 + 1;
            *puVar5 = (uint)plStack_e8;
          }
          else {
            puVar11 = (uint *)(param_1 + 0x90);
            FUN_10986dcb4(puVar11,&plStack_e8);
          }
          param_2 = param_2 + 1;
        }
        else {
          iVar26 = (int)param_1 + 0x230;
          FUN_10985d980();
          if (iVar26 != 0) goto LAB_1098664bc;
LAB_109866518:
          plStack_e8 = (long *)((ulong)plStack_e8 & 0xffffffffffffff00);
          func_0x0001078db3d4(param_1 + 0x78,&plStack_e8);
          puVar4 = *(uint **)(param_1 + 0x98);
          if (puVar4 < *(uint **)(param_1 + 0xa0)) {
            puVar11 = puVar4 + 1;
            *puVar4 = auStack_6c[0];
          }
          else {
            puVar11 = (uint *)(param_1 + 0x90);
            FUN_10986dcb4(puVar11,auStack_6c);
          }
        }
        *(uint **)(param_1 + 0x98) = puVar11;
      } while (ppppuStack_88 != ppppuStack_80);
      plVar12 = *(long **)(param_1 + 0x10);
    }
    ppppuVar7 = ppppuStack_c0;
    if (param_2 == (uint)((ulong)(plVar12[1] - *plVar12 >> 2) / 3)) {
      uVar27 = (ulong)(plVar12[7] - plVar12[6]) >> 2;
      uVar24 = uStack_e0;
      for (pppppuVar10 = (uint *****)ppppuStack_c8; uStack_e0 = uVar24,
          pppppuVar10 != (uint *****)ppppuVar7; pppppuVar10 = (uint *****)((long)pppppuVar10 + 4)) {
        uVar15 = (int)uVar27 - 1;
        uVar25 = (ulong)uVar15;
        uStack_e0 = *(uint *)(plVar12[6] + uVar25 * 4);
        if (uStack_e0 == 0xffffffff) {
          do {
            iVar26 = (int)uVar27;
            uVar25 = (ulong)(iVar26 - 2);
            uVar27 = (ulong)(iVar26 - 1);
            uStack_e0 = *(uint *)(plVar12[6] + uVar25 * 4);
          } while (uStack_e0 == 0xffffffff);
          uVar15 = iVar26 - 2;
        }
        uVar23 = *(uint *)pppppuVar10;
        if (uVar23 <= uVar15) {
          uStack_d8 = 1;
          plStack_e8 = plVar12;
          uStack_dc = uStack_e0;
          do {
            if (*(uint *)(**(long **)(param_1 + 0x10) + (ulong)uStack_dc * 4) != uVar15)
            goto LAB_109866860;
            *(uint *)(**(long **)(param_1 + 0x10) + (ulong)uStack_dc * 4) = uVar23;
            FUN_10985a764(&plStack_e8);
          } while (uStack_dc != 0xffffffff);
          plVar12 = *(long **)(param_1 + 0x10);
          lVar17 = plVar12[6];
          if (uVar23 != 0xffffffff) {
            *(undefined4 *)(lVar17 + (ulong)uVar23 * 4) = *(undefined4 *)(lVar17 + uVar25 * 4);
          }
          *(undefined4 *)(lVar17 + uVar25 * 4) = 0xffffffff;
          lVar17 = *(long *)(param_1 + 0xe8);
          uVar9 = uVar25 >> 6;
          uVar25 = 1L << (uVar25 & 0x3f);
          uVar20 = (ulong)(uVar23 >> 6);
          uVar21 = 1L << ((ulong)uVar23 & 0x3f);
          if ((*(ulong *)(lVar17 + uVar9 * 8) & uVar25) == 0) {
            uVar21 = *(ulong *)(lVar17 + uVar20 * 8) & (uVar21 ^ 0xffffffffffffffff);
          }
          else {
            uVar21 = *(ulong *)(lVar17 + uVar20 * 8) | uVar21;
          }
          *(ulong *)(lVar17 + uVar20 * 8) = uVar21;
          *(ulong *)(lVar17 + uVar9 * 8) =
               *(ulong *)(lVar17 + uVar9 * 8) & (uVar25 ^ 0xffffffffffffffff);
          uVar27 = (ulong)((int)uVar27 - 1);
          uVar24 = uStack_e0;
        }
        uStack_e0 = uVar24;
        uVar24 = uStack_e0;
      }
      goto LAB_109866864;
    }
  }
LAB_109866860:
  uVar27 = 0xffffffff;
LAB_109866864:
  if ((uint *****)ppppuStack_c8 != (uint *****)0x0) {
    ppppuStack_c0 = ppppuStack_c8;
    __ZdlPv();
  }
  func_0x000109870eec(&lStack_b0);
  if ((uint *****)ppppuStack_88 != (uint *****)0x0) {
    ppppuStack_80 = ppppuStack_88;
    __ZdlPv();
  }
  return uVar27;
}



/* Entry: 109866914; end: 109866ccb;  */

void FUN_109866914(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uStack_f8;
  uint auStack_f4 [3];
  long lStack_e8;
  uint uStack_78;
  uint auStack_74 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_74[0] = (uint)param_2;
  if (param_2 == (uint *)0xffffffff) {
    auStack_74[1] = -1;
    auStack_74[2] = -1;
  }
  else {
    auStack_74[1] = auStack_74[0] - 2;
    if (0x55555555 < auStack_74[0] * -0x55555555 + 0xaaaaaaab) {
      auStack_74[1] = auStack_74[0] + 1;
    }
    auStack_74[2] = auStack_74[0] + 2;
    if (0x55555555 < auStack_74[0] * -0x55555555) {
      auStack_74[2] = auStack_74[0] - 1;
    }
  }
  lVar8 = 0;
  lVar4 = param_1;
  do {
    uVar2 = auStack_74[lVar8];
    if (uVar2 == 0xffffffff) {
      lVar9 = *(long *)(param_1 + 0x1a8);
      lVar7 = *(long *)(param_1 + 0x1b0);
LAB_109866a44:
      if (lVar7 != lVar9) {
        uVar10 = 0;
        uVar11 = 1;
        do {
          lVar4 = lVar9 + uVar10 * 0x120 + 0x108;
          param_2 = &uStack_78;
          uStack_78 = uVar2;
          FUN_1092d7128();
          lVar9 = *(long *)(param_1 + 0x1a8);
          uVar10 = (*(long *)(param_1 + 0x1b0) - lVar9 >> 5) * -0x71c71c71c71c71c7;
          bVar3 = uVar11 <= uVar10;
          lVar7 = uVar10 - uVar11;
          uVar10 = uVar11;
          uVar11 = (ulong)((int)uVar11 + 1);
        } while (bVar3 && lVar7 != 0);
      }
    }
    else {
      lVar9 = *(long *)(param_1 + 0x1a8);
      lVar7 = *(long *)(param_1 + 0x1b0);
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + (ulong)uVar2 * 4) == -1)
      goto LAB_109866a44;
      if (lVar7 != lVar9) {
        uVar10 = 1;
        uVar11 = 0;
        do {
          uVar6 = uVar10;
          lVar4 = *(long *)(param_1 + 0x280) + (long)((int)uVar6 + -1) * 0x18;
          FUN_10985d980();
          if ((int)lVar4 != 0) {
            lVar4 = *(long *)(param_1 + 0x1a8) + uVar11 * 0x120 + 0x108;
            param_2 = &uStack_78;
            uStack_78 = uVar2;
            FUN_1092d7128();
          }
          uVar5 = (*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8) >> 5) *
                  -0x71c71c71c71c71c7;
          uVar10 = (ulong)((int)uVar6 + 1);
          uVar11 = uVar6;
        } while (uVar6 <= uVar5 && uVar5 - uVar6 != 0);
      }
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 3) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      auStack_f4[0] = (uint)param_2;
      if (param_2 == (uint *)0xffffffff) {
        auStack_f4[1] = -1;
        auStack_f4[2] = -1;
      }
      else {
        auStack_f4[1] = auStack_f4[0] - 2;
        if (0x55555555 < auStack_f4[0] * -0x55555555 + 0xaaaaaaab) {
          auStack_f4[1] = auStack_f4[0] + 1;
        }
        auStack_f4[2] = auStack_f4[0] + 2;
        if (0x55555555 < auStack_f4[0] * -0x55555555) {
          auStack_f4[2] = auStack_f4[0] - 1;
        }
      }
      lVar9 = 0;
      lVar8 = lVar4;
      do {
        uVar2 = auStack_f4[lVar9];
        if ((uVar2 == 0xffffffff) ||
           (uVar12 = *(uint *)(*(long *)(*(long *)(lVar4 + 0x10) + 0x18) + (ulong)uVar2 * 4),
           uVar12 == 0xffffffff)) {
          lVar7 = *(long *)(lVar4 + 0x1a8);
          if (*(long *)(lVar4 + 0x1b0) != lVar7) {
            uVar10 = 0;
            uVar11 = 1;
            do {
              lVar8 = lVar7 + uVar10 * 0x120 + 0x108;
              uStack_f8 = uVar2;
              FUN_1092d7128(lVar8,&uStack_f8);
              lVar7 = *(long *)(lVar4 + 0x1a8);
              uVar10 = (*(long *)(lVar4 + 0x1b0) - lVar7 >> 5) * -0x71c71c71c71c71c7;
              bVar3 = uVar11 <= uVar10;
              lVar1 = uVar10 - uVar11;
              uVar10 = uVar11;
              uVar11 = (ulong)((int)uVar11 + 1);
            } while (bVar3 && lVar1 != 0);
          }
        }
        else if (((param_2 != (uint *)0xffffffff) &&
                 ((uint)(((ulong)param_2 & 0xffffffff) / 3) <= uVar12 / 3)) &&
                (*(long *)(lVar4 + 0x1b0) != *(long *)(lVar4 + 0x1a8))) {
          uVar10 = 0;
          uVar12 = 1;
          do {
            lVar8 = *(long *)(lVar4 + 0x280) + (long)(int)(uVar12 - 1) * 0x18;
            FUN_10985d980();
            if ((int)lVar8 != 0) {
              lVar8 = *(long *)(lVar4 + 0x1a8) + uVar10 * 0x120 + 0x108;
              uStack_f8 = uVar2;
              FUN_1092d7128(lVar8,&uStack_f8);
            }
            uVar10 = (ulong)uVar12;
            uVar6 = (*(long *)(lVar4 + 0x1b0) - *(long *)(lVar4 + 0x1a8) >> 5) * -0x71c71c71c71c71c7
            ;
            uVar11 = (ulong)uVar12;
            uVar12 = uVar12 + 1;
          } while (uVar11 <= uVar6 && uVar6 - uVar11 != 0);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
        ___stack_chk_fail();
        if (*(char *)(lVar8 + 0x68) == '\x01') {
          *(undefined1 *)(lVar8 + 0x68) = 0;
          *(ulong *)(lVar8 + 0x48) = *(long *)(lVar8 + 0x48) + (*(long *)(lVar8 + 0x60) + 7U >> 3);
        }
        if (*(ushort *)(lVar8 + 0x32) < 0x202) {
          *(undefined1 *)(lVar8 + 0xb8) = 0;
          *(ulong *)(lVar8 + 0x98) = *(long *)(lVar8 + 0x98) + (*(long *)(lVar8 + 0xb0) + 7U >> 3);
        }
        return;
      }
      return;
    }
  } while( true );
}



/* Entry: 109866ccc; end: 109866d17;  */

void FUN_109866ccc(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(ulong *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (*(long *)(param_1 + 0x60) + 7U >> 3);
  }
  if (*(ushort *)(param_1 + 0x32) < 0x202) {
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(ulong *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + (*(long *)(param_1 + 0xb0) + 7U >> 3);
  }
  return;
}



/* Entry: 109866d18; end: 109866d4b;  */

void FUN_109866d18(long *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  puVar9 = (undefined8 *)(long)param_2;
  func_0x000108a5942c(param_1 + 3,puVar9);
  lVar6 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar6 >> 2) < puVar9) {
    if ((ulong)puVar9 >> 0x3e != 0) {
      FUN_10986dc00();
      if (lStack_38 != lStack_40) {
        lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 3U & 0xfffffffffffffffc);
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume(param_1);
      plVar5 = (long *)&DAT_10f62a4d8;
      func_0x000104c4f6cc();
      puVar2 = (undefined4 *)*plVar5;
      puVar3 = (undefined4 *)plVar5[1];
      puVar1 = (undefined4 *)((long)puVar2 + (puVar9[1] - (long)puVar3));
      puVar4 = puVar1;
      for (puVar8 = puVar2; puVar3 != puVar8; puVar8 = puVar8 + 1) {
        *puVar4 = *puVar8;
        puVar4 = puVar4 + 1;
      }
      puVar9[1] = puVar1;
      lVar6 = *plVar5;
      *plVar5 = (long)puVar1;
      plVar5[1] = (long)puVar2;
      puVar9[1] = lVar6;
      lVar6 = plVar5[1];
      plVar5[1] = puVar9[2];
      puVar9[2] = lVar6;
      lVar6 = plVar5[2];
      plVar5[2] = puVar9[3];
      puVar9[3] = lVar6;
      *puVar9 = puVar9[1];
      return;
    }
    lVar7 = param_1[1];
    plVar5 = param_1;
    plStack_28 = param_1;
    FUN_10986dc80();
    lStack_40 = (long)plVar5 + (lVar7 - lVar6);
    lStack_30 = (long)plVar5 + (long)puVar9 * 4;
    plStack_48 = plVar5;
    lStack_38 = lStack_40;
    FUN_10986dc14(param_1,&plStack_48);
    if (lStack_38 != lStack_40) {
      lStack_38 = lStack_38 + ((lStack_40 - lStack_38) + 3U & 0xfffffffffffffffc);
    }
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 109866d4c; end: 1098672ab;  */

undefined8 FUN_109866d4c(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  uint auStack_a0 [4];
  long lStack_90;
  long lStack_88;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (*(long **)(param_1 + 0x10))[1] - **(long **)(param_1 + 0x10) >> 2;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  lStack_78 = 0;
  FUN_10986e004(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0xc0,
                (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) << 0x1f) >> 0x20,&lStack_78);
  if (*(long *)(param_1 + 0x1a8) == *(long *)(param_1 + 0x1b0)) {
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar5 + 0x58);
    if ((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2) * -0x55555555 != 0) {
      uVar17 = 0;
      uVar15 = 0;
      do {
        lVar5 = 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        lStack_78 = 0;
        uVar6 = uVar17;
        do {
          if (uVar6 == 0xffffffff) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = *(undefined4 *)(**(long **)(param_1 + 0x10) + (ulong)uVar6 * 4);
          }
          *(undefined4 *)((long)&lStack_78 + lVar5) = uVar7;
          lVar5 = lVar5 + 4;
          uVar6 = uVar6 + 1;
        } while (lVar5 != 0xc);
        FUN_1098674ec(lVar4,uVar15,&lStack_78);
        uVar15 = uVar15 + 1;
        lVar5 = *(long *)(param_1 + 8);
        lVar4 = *(long *)(lVar5 + 0x58);
        uVar17 = uVar17 + 3;
      } while (uVar15 < (uint)((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2)
                              * -0x55555555));
    }
    *(undefined4 *)(*(long *)(lVar5 + 8) + 0xa0) = param_2;
    uVar14 = 1;
  }
  else {
    lStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_10925b8c4(&lStack_90,
                  ((*(long **)(param_1 + 0x10))[1] - **(long **)(param_1 + 0x10)) * 0x40000000 >>
                  0x20);
    lVar5 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(lVar5 + 0x30);
    if (0 < (int)((ulong)(*(long *)(lVar5 + 0x38) - lVar4) >> 2)) {
      uVar15 = 0;
      do {
        uVar17 = *(uint *)(lVar4 + uVar15 * 4);
        uVar18 = (ulong)uVar17;
        if (uVar17 != 0xffffffff) {
          iVar16 = 2;
          uVar12 = uVar18;
          if ((*(ulong *)(*(long *)(param_1 + 0xe8) + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) ==
              0) {
            lVar4 = *(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8);
            if (lVar4 != 0) {
              uVar11 = 0;
              uVar8 = (lVar4 >> 5) * -0x71c71c71c71c71c7;
              iVar1 = iVar16;
              if (0x55555555 < uVar17 * -0x55555555) {
                iVar1 = -1;
              }
              do {
                lVar4 = *(long *)(param_1 + 0x1a8) + uVar11 * 0x120;
                uVar6 = *(uint *)(**(long **)(lVar4 + 0x88) + uVar18 * 4);
                if ((*(ulong *)(*(long *)(lVar4 + 0x20) + (ulong)(uVar6 >> 6) * 8) >>
                     ((ulong)uVar6 & 0x3f) & 1) != 0) {
                  uVar12 = 0xffffffff;
                  if ((ulong)(iVar1 + uVar17) != 0xffffffff) {
                    iVar10 = *(int *)(*(long *)(lVar5 + 0x18) + (ulong)(iVar1 + uVar17) * 4);
                    if (iVar10 == -1) {
                      uVar12 = 0xffffffff;
                    }
                    else if ((uint)(iVar10 * -0x55555555) < 0x55555556) {
                      uVar12 = (ulong)(iVar10 + 2);
                    }
                    else {
                      uVar12 = (ulong)(iVar10 - 1);
                    }
                  }
                  if ((uint)uVar12 != uVar17) {
                    do {
                      iVar10 = (int)uVar12;
                      if (iVar10 == -1) {
                        uVar14 = 0;
                        goto LAB_10986722c;
                      }
                      if (*(int *)(*(long *)(lVar4 + 0x40) + uVar12 * 4) !=
                          *(int *)(*(long *)(lVar4 + 0x40) + uVar18 * 4)) goto LAB_109866e3c;
                      iVar2 = iVar16;
                      if (0x55555555 < (uint)(iVar10 * -0x55555555)) {
                        iVar2 = -1;
                      }
                      if ((iVar2 + iVar10 == 0xffffffff) ||
                         (iVar10 = *(int *)(*(long *)(lVar5 + 0x18) +
                                           (ulong)(uint)(iVar2 + iVar10) * 4), iVar10 == -1)) {
                        uVar12 = 0xffffffff;
                      }
                      else if ((uint)(iVar10 * -0x55555555) < 0x55555556) {
                        uVar12 = (ulong)(iVar10 + 2);
                      }
                      else {
                        uVar12 = (ulong)(iVar10 - 1);
                      }
                    } while ((uint)uVar12 != uVar17);
                  }
                }
                uVar11 = (ulong)((int)uVar11 + 1);
                uVar12 = uVar18;
              } while (uVar11 <= uVar8 && uVar8 - uVar11 != 0);
            }
          }
LAB_109866e3c:
          *(int *)(lStack_90 + uVar12 * 4) = (int)(uStack_70 - lStack_78 >> 2);
          uVar17 = (uint)uVar12;
          auStack_a0[0] = uVar17;
          FUN_1092d7128(&lStack_78,auStack_a0);
          lVar5 = *(long *)(param_1 + 0x10);
          iVar10 = 2;
          iVar1 = iVar10;
          if (0x55555555 < uVar17 * -0x55555555) {
            iVar1 = -1;
          }
          if ((iVar1 + uVar17 != 0xffffffff) &&
             (iVar1 = *(int *)(*(long *)(lVar5 + 0x18) + (ulong)(iVar1 + uVar17) * 4), iVar1 != -1))
          {
            if (0x55555555 < (uint)(iVar1 * -0x55555555)) {
              iVar10 = -1;
            }
            uVar6 = iVar10 + iVar1;
            if (uVar6 != 0xffffffff && uVar6 != uVar17) {
              do {
                uVar18 = (ulong)uVar6;
                lVar4 = *(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8);
                if (lVar4 != 0) {
                  uVar9 = (lVar4 >> 5) * -0x71c71c71c71c71c7;
                  uVar8 = 1;
                  uVar11 = 0;
                  do {
                    uVar13 = uVar8;
                    lVar4 = *(long *)(*(long *)(param_1 + 0x1a8) + uVar11 * 0x120 + 0x40);
                    if (*(int *)(lVar4 + uVar18 * 4) != *(int *)(lVar4 + uVar12 * 4)) {
                      *(int *)(lStack_90 + uVar18 * 4) = (int)(uStack_70 - lStack_78 >> 2);
                      auStack_a0[0] = uVar6;
                      FUN_1092d7128(&lStack_78,auStack_a0);
                      lVar5 = *(long *)(param_1 + 0x10);
                      goto LAB_109867070;
                    }
                    uVar8 = (ulong)((int)uVar13 + 1);
                    uVar11 = uVar13;
                  } while (uVar13 <= uVar9 && uVar9 - uVar13 != 0);
                }
                *(undefined4 *)(lStack_90 + uVar18 * 4) = *(undefined4 *)(lStack_90 + uVar12 * 4);
LAB_109867070:
                if (uVar6 == 0xffffffff) break;
                iVar1 = iVar16;
                if (0x55555555 < uVar6 * -0x55555555) {
                  iVar1 = -1;
                }
                if ((iVar1 + uVar6 == 0xffffffff) ||
                   (iVar1 = *(int *)(*(long *)(lVar5 + 0x18) + (ulong)(iVar1 + uVar6) * 4),
                   iVar1 == -1)) break;
                iVar10 = iVar16;
                if (0x55555555 < (uint)(iVar1 * -0x55555555)) {
                  iVar10 = -1;
                }
                uVar6 = iVar10 + iVar1;
                uVar12 = uVar18;
                if (uVar6 == 0xffffffff || uVar6 == uVar17) break;
              } while( true );
            }
          }
        }
        uVar15 = uVar15 + 1;
        lVar4 = *(long *)(lVar5 + 0x30);
      } while ((long)uVar15 < (long)(int)((ulong)(*(long *)(lVar5 + 0x38) - lVar4) >> 2));
    }
    lVar5 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar5 + 0x58);
    if ((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2) * -0x55555555 != 0) {
      uVar18 = 0;
      uVar15 = 0;
      do {
        lVar5 = 0;
        auStack_a0[2] = 0;
        auStack_a0[0] = 0;
        auStack_a0[1] = 0;
        uVar12 = uVar18;
        do {
          *(undefined4 *)((long)auStack_a0 + lVar5) =
               *(undefined4 *)(lStack_90 + (uVar12 & 0xffffffff) * 4);
          lVar5 = lVar5 + 4;
          uVar12 = uVar12 + 1;
        } while (lVar5 != 0xc);
        FUN_1098674ec(lVar4,uVar15,auStack_a0);
        uVar15 = uVar15 + 1;
        lVar5 = *(long *)(param_1 + 8);
        lVar4 = *(long *)(lVar5 + 0x58);
        uVar18 = uVar18 + 3;
      } while (uVar15 < (uint)((int)((ulong)(*(long *)(lVar4 + 200) - *(long *)(lVar4 + 0xc0)) >> 2)
                              * -0x55555555));
    }
    *(int *)(*(long *)(lVar5 + 8) + 0xa0) = (int)(uStack_70 - lStack_78 >> 2);
    uVar14 = 1;
LAB_10986722c:
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    if (lStack_78 != 0) {
      uStack_70 = lStack_78;
      __ZdlPv();
    }
  }
  return uVar14;
}



/* Entry: 1098672ac; end: 1098672c3;  */

undefined8 FUN_1098672ac(void)

{
  return 1;
}



/* Entry: 1098672c4; end: 10986731f;  */

int FUN_1098672c4(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  if (puVar1 < *(undefined4 **)(param_1 + 0x40)) {
    puVar2 = puVar1 + 1;
    *puVar1 = 0xffffffff;
  }
  else {
    puVar2 = (undefined4 *)(param_1 + 0x30);
    FUN_10986dcb4(puVar2,&UNK_10e0044f0);
  }
  *(undefined4 **)(param_1 + 0x38) = puVar2;
  return (int)((ulong)((long)puVar2 - *(long *)(param_1 + 0x30)) >> 2) + -1;
}



/* Entry: 109867320; end: 109867417;  */

void FUN_109867320(long *param_1,undefined8 *param_2,long param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    uVar4 = *param_2;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar3 = uVar4;
    lVar10 = (long)puVar3 + 0xc;
  }
  else {
    lVar10 = (long)puVar3 - *param_1;
    uVar7 = (lVar10 >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar7) {
      FUN_10986df98();
      pcStack_38 = FUN_109867418;
      puVar1 = (undefined4 *)param_1[1];
      if (puVar1 < (undefined4 *)param_1[2]) {
        puVar12 = puVar1 + 1;
        *puVar1 = (int)param_2;
LAB_1098674c8:
        param_1[1] = (long)puVar12;
        return;
      }
      lVar10 = *param_1;
      lVar6 = (long)puVar1 - lVar10;
      uVar7 = (lVar6 >> 2) + 1;
      plVar2 = param_1;
      puVar3 = param_2;
      puStack_40 = &stack0xfffffffffffffff0;
      if (uVar7 >> 0x3e == 0) {
        uVar5 = param_1[2] - lVar10;
        uVar8 = (long)uVar5 >> 1;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7ffffffffffffffb < uVar5) {
          uVar8 = 0x3fffffffffffffff;
        }
        if (uVar8 >> 0x3e == 0) {
          lVar9 = uVar8 << 2;
          __Znwm();
          puVar1 = (undefined4 *)(lVar9 + lVar6);
          puVar12 = puVar1 + 1;
          *puVar1 = (int)param_2;
          _memcpy(puVar1 + -(lVar6 >> 2),lVar10,lVar6);
          *param_1 = (long)(puVar1 + -(lVar6 >> 2));
          param_1[1] = (long)puVar12;
          param_1[2] = lVar9 + uVar8 * 4;
          if (lVar10 != 0) {
            __ZdlPv(lVar10);
          }
          goto LAB_1098674c8;
        }
      }
      else {
        FUN_10986dff0();
      }
      func_0x000104c4f740();
      pcStack_88 = FUN_1098674ec;
      plVar11 = plVar2 + 0x18;
      lVar9 = *plVar11;
      if ((uint)((int)((ulong)(plVar2[0x19] - lVar9) >> 2) * -0x55555555) <= (uint)puVar3) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_b0 = lVar6;
        puStack_a8 = param_2;
        lStack_a0 = lVar10;
        plStack_98 = param_1;
        ppuStack_90 = &puStack_40;
        FUN_10986e004(plVar11,(uint)puVar3 + 1,&uStack_c0);
        lVar9 = *plVar11;
      }
      lVar10 = 0;
      do {
        *(undefined4 *)(lVar9 + ((ulong)puVar3 & 0xffffffff) * 0xc + lVar10) =
             *(undefined4 *)(param_3 + lVar10);
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0xc);
      return;
    }
    lVar6 = param_1[2] - *param_1 >> 2;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0x1555555555555555;
    }
    plVar2 = param_1;
    FUN_10986dfac();
    puVar3 = (undefined8 *)((long)plVar2 + lVar10);
    uVar4 = *param_2;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar3 = uVar4;
    lVar10 = (long)puVar3 + 0xc;
    lVar9 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lVar6 = *param_1;
    *param_1 = lVar9;
    param_1[1] = lVar10;
    param_1[2] = (long)plVar2 + uVar8 * 0xc;
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar10;
  return;
}



/* Entry: 109867418; end: 1098674eb;  */

void FUN_109867418(long *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar11 = puVar2 + 1;
    *puVar2 = (int)param_2;
LAB_1098674c8:
    param_1[1] = (long)puVar11;
    return;
  }
  lVar8 = *param_1;
  lVar10 = (long)puVar2 - lVar8;
  uVar1 = (lVar10 >> 2) + 1;
  plVar4 = param_1;
  uVar5 = param_2;
  if (uVar1 >> 0x3e == 0) {
    uVar6 = param_1[2] - lVar8;
    uVar7 = (long)uVar6 >> 1;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar6) {
      uVar7 = 0x3fffffffffffffff;
    }
    if (uVar7 >> 0x3e == 0) {
      lVar3 = uVar7 << 2;
      __Znwm();
      puVar2 = (undefined4 *)(lVar3 + lVar10);
      puVar11 = puVar2 + 1;
      *puVar2 = (int)param_2;
      _memcpy(puVar2 + -(lVar10 >> 2),lVar8,lVar10);
      *param_1 = (long)(puVar2 + -(lVar10 >> 2));
      param_1[1] = (long)puVar11;
      param_1[2] = lVar3 + uVar7 * 4;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
      goto LAB_1098674c8;
    }
  }
  else {
    FUN_10986dff0();
  }
  func_0x000104c4f740();
  pcStack_58 = FUN_1098674ec;
  plVar9 = plVar4 + 0x18;
  lVar3 = *plVar9;
  if ((uint)((int)((ulong)(plVar4[0x19] - lVar3) >> 2) * -0x55555555) <= (uint)uVar5) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_80 = lVar10;
    uStack_78 = param_2;
    lStack_70 = lVar8;
    plStack_68 = param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10986e004(plVar9,(uint)uVar5 + 1,&uStack_90);
    lVar3 = *plVar9;
  }
  lVar8 = 0;
  do {
    *(undefined4 *)(lVar3 + (uVar5 & 0xffffffff) * 0xc + lVar8) = *(undefined4 *)(param_3 + lVar8);
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0xc);
  return;
}



/* Entry: 1098674ec; end: 10986757b;  */

void FUN_1098674ec(long param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  plVar3 = (long *)(param_1 + 0xc0);
  lVar1 = *plVar3;
  if ((uint)((int)((ulong)(*(long *)(param_1 + 200) - lVar1) >> 2) * -0x55555555) <= param_2) {
    uStack_38 = 0;
    uStack_40 = 0;
    FUN_10986e004(plVar3,param_2 + 1,&uStack_40);
    lVar1 = *plVar3;
  }
  lVar2 = 0;
  do {
    *(undefined4 *)(lVar1 + (ulong)param_2 * 0xc + lVar2) = *(undefined4 *)(param_3 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0xc);
  return;
}



/* Entry: 10986757c; end: 109867677;  */

void FUN_10986757c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b15ef0;
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
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x1f2) = 0;
  *(undefined2 *)((long)param_1 + 0x22a) = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined2 *)((long)param_1 + 0x27a) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((long)param_1 + 0x2c9) = 0;
  *(undefined8 *)((long)param_1 + 0x2c1) = 0;
  *(undefined8 *)((long)param_1 + 0x1e9) = 0;
  *(undefined8 *)((long)param_1 + 0x1e1) = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x5b] = 0xffffffffffffffff;
  return;
}



/* Entry: 109867678; end: 1098678b3;  */

long FUN_109867678(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_1 + 0x1a8);
  if (*(long *)(param_1 + 0x1b0) == lVar3) {
    return 0;
  }
  uVar7 = 0;
  do {
    uVar1 = *(uint *)(lVar3 + uVar7 * 0x120);
    if ((-1 < (int)uVar1) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10),
       (int)uVar1 < (int)((ulong)(*(long *)(*(long *)(param_1 + 8) + 0x18) - lVar3) >> 3))) {
      plVar5 = *(long **)(lVar3 + (ulong)uVar1 * 8);
      plVar2 = plVar5;
      (**(code **)(*plVar5 + 0x30))();
      if (0 < (int)plVar2) {
        iVar6 = 0;
        do {
          plVar2 = plVar5;
          (**(code **)(*plVar5 + 0x28))(plVar5,iVar6);
          if ((int)plVar2 == param_2) {
            lVar3 = *(long *)(param_1 + 0x1a8) + uVar7 * 0x120;
            if (*(char *)(lVar3 + 200) != '\0') {
              return lVar3 + 8;
            }
            return 0;
          }
          iVar6 = iVar6 + 1;
          plVar2 = plVar5;
          (**(code **)(*plVar5 + 0x30))();
        } while (iVar6 < (int)plVar2);
      }
    }
    uVar7 = (ulong)((int)uVar7 + 1);
    lVar3 = *(long *)(param_1 + 0x1a8);
    uVar4 = (*(long *)(param_1 + 0x1b0) - lVar3 >> 5) * -0x71c71c71c71c71c7;
  } while (uVar7 <= uVar4 && uVar4 - uVar7 != 0);
  return 0;
}



/* Entry: 1098678b4; end: 109867b6b;  */

undefined8 FUN_1098678b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  undefined *puVar16;
  long *plStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar10 = *(long *)(param_1 + 8);
  plVar11 = *(long **)(lVar10 + 0x40);
  lVar8 = plVar11[1];
  lVar3 = plVar11[2];
  lVar7 = lVar3 + 1;
  if (lVar8 < lVar7) {
    return 0;
  }
  lVar13 = *plVar11;
  bVar4 = *(byte *)(lVar13 + lVar3);
  plVar11[2] = lVar7;
  lVar1 = lVar3 + 2;
  if (lVar8 < lVar1) {
    return 0;
  }
  cVar5 = *(char *)(lVar13 + lVar7);
  plVar11[2] = lVar1;
  if ((char)bVar4 < '\0') {
    if (-1 < *(int *)(param_1 + 0x1a0)) {
      return 0;
    }
    piVar14 = (int *)(param_1 + 0x1a0);
  }
  else {
    uVar15 = (*(long *)(param_1 + 0x1b0) - *(long *)(param_1 + 0x1a8) >> 5) * -0x71c71c71c71c71c7;
    if (uVar15 < bVar4 || uVar15 - bVar4 == 0) {
      return 0;
    }
    piVar14 = (int *)(*(long *)(param_1 + 0x1a8) + (ulong)bVar4 * 0x120);
    if (-1 < *piVar14) {
      return 0;
    }
  }
  *piVar14 = (int)param_2;
  if ((ushort)(*(ushort *)(lVar10 + 0x48) >> 8 | *(ushort *)(lVar10 + 0x48) << 8) < 0x102) {
    if (cVar5 != '\0') {
      if ((char)bVar4 < '\0') {
        return 0;
      }
      goto LAB_1098679a8;
    }
    bVar12 = 0;
  }
  else {
    if (lVar8 < lVar3 + 3) {
      return 0;
    }
    bVar12 = *(byte *)(lVar13 + lVar1);
    plVar11[2] = lVar3 + 3;
    if (1 < bVar12) {
      return 0;
    }
    if (cVar5 != '\0') {
      if (bVar12 != 0) {
        return 0;
      }
      if ((char)bVar4 < '\0') {
        return 0;
      }
LAB_1098679a8:
      puVar16 = *(undefined **)(lVar10 + 0x58);
      lVar7 = *(long *)(param_1 + 0x1a8) + (ulong)(uint)bVar4 * 0x120;
      puVar2 = (undefined *)(lVar7 + 0xd0);
      lVar7 = lVar7 + 8;
      ppuVar6 = (undefined **)0xa0;
      __Znwm();
      *ppuVar6 = (undefined *)&PTR_DAT_110b161d8;
      ppuVar6[1] = (undefined *)0x0;
      ppuVar6[4] = (undefined *)0x0;
      ppuVar6[3] = (undefined *)0x0;
      ppuVar6[6] = (undefined *)0x0;
      ppuVar6[5] = (undefined *)0x0;
      ppuVar6[8] = (undefined *)0x0;
      ppuVar6[7] = (undefined *)0x0;
      ppuVar6[10] = (undefined *)0x0;
      ppuVar6[9] = (undefined *)0x0;
      ppuVar6[0xc] = (undefined *)0x0;
      ppuVar6[0xb] = (undefined *)0x0;
      ppuVar6[0xd] = (undefined *)0x0;
      ppuVar6[0xe] = (undefined *)0x0;
      ppuVar6[2] = (undefined *)&PTR_FUN_110b16008;
      ppuVar6[0xf] = (undefined *)0x0;
      ppuVar6[0x10] = (undefined *)0x0;
      ppuVar6[0x11] = puVar16;
      ppuVar6[0x12] = puVar2;
      ppuVar6[0x13] = (undefined *)0x0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      ppuStack_b8 = &PTR_FUN_110b16008;
      uStack_50 = 0;
      uStack_48 = 0;
      lStack_d8 = lVar7;
      puStack_d0 = puVar2;
      puStack_c8 = puVar16;
      ppuStack_c0 = ppuVar6;
      FUN_109864c78(&ppuStack_b8,lVar7,&lStack_d8);
      FUN_109864cfc(ppuVar6,&ppuStack_b8);
      FUN_109864d80(&ppuStack_b8);
      goto LAB_109867abc;
    }
  }
  if ((char)bVar4 < '\0') {
    lVar7 = param_1 + 0x168;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x1a8) + (ulong)(uint)bVar4 * 0x120;
    lVar7 = lVar8 + 0xd0;
    *(undefined1 *)(lVar8 + 200) = 0;
  }
  if (bVar12 == 1) {
    FUN_109867b6c();
  }
  else {
    FUN_109867cd0(&ppuStack_b8,param_1,lVar7);
  }
  ppuVar6 = ppuStack_b8;
  if (ppuStack_b8 == (undefined **)0x0) {
    return 0;
  }
LAB_109867abc:
  plVar11 = (long *)0x80;
  __Znwm();
  plVar11[8] = 0;
  plVar11[7] = 0;
  plVar11[6] = 0;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[3] = 0;
  plVar11[2] = 0;
  plVar11[1] = 0;
  *plVar11 = (long)&PTR_DAT_110b14db8;
  plVar11[10] = 0;
  plVar11[9] = 0;
  plVar11[0xc] = 0;
  plVar11[0xb] = 0;
  plVar11[0xe] = 0;
  plVar11[0xd] = 0;
  plVar11[0xf] = (long)ppuVar6;
  uVar9 = *(undefined8 *)(param_1 + 8);
  plStack_e0 = plVar11;
  FUN_109864dbc(uVar9,param_2,&plStack_e0);
  plVar11 = plStack_e0;
  plStack_e0 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
    return uVar9;
  }
  return uVar9;
}


