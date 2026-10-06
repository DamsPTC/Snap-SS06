/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109adc79c; end: 109adc92f;  */

void FUN_109adc79c(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  iVar3 = *param_2;
  lVar12 = (long)iVar3;
  iVar4 = param_2[1];
  if (iVar3 < iVar4) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x1c);
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar7 * iVar3);
    do {
      if (0 < (int)uVar11) {
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                  **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar12 + 2);
        lVar10 = 3;
        pbVar9 = (byte *)(lVar13 + 3);
        do {
          iVar7 = (pbVar9[-3] - 0x80) * 0x198937 + 0x80000;
          iVar3 = (pbVar9[-3] - 0x80) * -0xd020c + (pbVar9[-1] - 0x80) * -0x64189 + 0x80000;
          iVar5 = (pbVar9[-1] - 0x80) * 0x2049ba + 0x80000;
          uVar14 = (uint)pbVar9[-2];
          if (pbVar9[-2] < 0x11) {
            uVar14 = 0x10;
          }
          iVar6 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar2 = iVar6 + iVar7;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          *puVar8 = (char)uVar14;
          iVar2 = iVar6 + iVar3;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-1] = (char)uVar14;
          iVar6 = iVar6 + iVar5;
          uVar14 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-2] = (char)uVar14;
          uVar14 = (uint)*pbVar9;
          if (*pbVar9 < 0x11) {
            uVar14 = 0x10;
          }
          iVar2 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar7 = iVar2 + iVar7;
          uVar14 = iVar7 >> 0x14 & (iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[3] = (char)uVar14;
          iVar3 = iVar2 + iVar3;
          uVar14 = iVar3 >> 0x14 & (iVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[2] = (char)uVar14;
          iVar2 = iVar2 + iVar5;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[1] = (char)uVar14;
          uVar11 = (ulong)*(int *)(param_1 + 0x18);
          puVar8 = puVar8 + 6;
          lVar1 = lVar10 + 1;
          lVar10 = lVar10 + 4;
          pbVar9 = pbVar9 + 4;
        } while (lVar1 < (long)(uVar11 * 2));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + iVar7;
    } while (lVar12 != iVar4);
  }
  return;
}



/* Entry: 109adc930; end: 109adc937;  */

void FUN_109adc930(void)

{
  return;
}



/* Entry: 109adc938; end: 109adcac7;  */

void FUN_109adc938(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  iVar2 = *param_2;
  lVar11 = (long)iVar2;
  iVar3 = param_2[1];
  if (iVar2 < iVar3) {
    uVar10 = (ulong)*(uint *)(param_1 + 0x18);
    iVar6 = *(int *)(param_1 + 0x1c);
    lVar12 = *(long *)(param_1 + 0x10) + (long)(iVar6 * iVar2);
    do {
      if (0 < (int)uVar10) {
        lVar7 = 0;
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                 **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar11);
        pbVar9 = (byte *)(lVar12 + 3);
        do {
          iVar6 = (*pbVar9 - 0x80) * 0x198937 + 0x80000;
          iVar2 = (*pbVar9 - 0x80) * -0xd020c + (pbVar9[-2] - 0x80) * -0x64189 + 0x80000;
          iVar4 = (pbVar9[-2] - 0x80) * 0x2049ba + 0x80000;
          uVar13 = (uint)pbVar9[-3];
          if (pbVar9[-3] < 0x11) {
            uVar13 = 0x10;
          }
          iVar5 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar1 = iVar5 + iVar6;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          *puVar8 = (char)uVar13;
          iVar1 = iVar5 + iVar2;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[1] = (char)uVar13;
          iVar5 = iVar5 + iVar4;
          uVar13 = iVar5 >> 0x14 & (iVar5 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[2] = (char)uVar13;
          uVar13 = (uint)pbVar9[-1];
          if (pbVar9[-1] < 0x11) {
            uVar13 = 0x10;
          }
          iVar1 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar6 = iVar1 + iVar6;
          uVar13 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[3] = (char)uVar13;
          iVar2 = iVar1 + iVar2;
          uVar13 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[4] = (char)uVar13;
          iVar1 = iVar1 + iVar4;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[5] = (char)uVar13;
          lVar7 = lVar7 + 4;
          puVar8 = puVar8 + 6;
          uVar10 = (ulong)*(int *)(param_1 + 0x18);
          pbVar9 = pbVar9 + 4;
        } while (lVar7 < (long)(uVar10 * 2));
        iVar6 = *(int *)(param_1 + 0x1c);
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + iVar6;
    } while (lVar11 != iVar3);
  }
  return;
}



/* Entry: 109adcac8; end: 109adcacf;  */

void FUN_109adcac8(void)

{
  return;
}



/* Entry: 109adcad0; end: 109adcc5b;  */

void FUN_109adcad0(long param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  iVar3 = *param_2;
  lVar12 = (long)iVar3;
  iVar4 = param_2[1];
  if (iVar3 < iVar4) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x1c);
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar7 * iVar3);
    do {
      if (0 < (int)uVar11) {
        lVar8 = 0;
        puVar9 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                 **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar12);
        do {
          pbVar2 = (byte *)(lVar13 + lVar8);
          iVar7 = (pbVar2[2] - 0x80) * 0x198937 + 0x80000;
          iVar3 = (pbVar2[2] - 0x80) * -0xd020c + (*pbVar2 - 0x80) * -0x64189 + 0x80000;
          iVar5 = (*pbVar2 - 0x80) * 0x2049ba + 0x80000;
          uVar10 = (uint)pbVar2[1];
          if (pbVar2[1] < 0x11) {
            uVar10 = 0x10;
          }
          iVar6 = uVar10 * 0x129fbe + -0x129fbe0;
          iVar1 = iVar6 + iVar7;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          *puVar9 = (char)uVar10;
          iVar1 = iVar6 + iVar3;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[1] = (char)uVar10;
          iVar6 = iVar6 + iVar5;
          uVar10 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[2] = (char)uVar10;
          uVar10 = (uint)pbVar2[3];
          if (pbVar2[3] < 0x11) {
            uVar10 = 0x10;
          }
          iVar1 = uVar10 * 0x129fbe + -0x129fbe0;
          iVar7 = iVar1 + iVar7;
          uVar10 = iVar7 >> 0x14 & (iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[3] = (char)uVar10;
          iVar3 = iVar1 + iVar3;
          uVar10 = iVar3 >> 0x14 & (iVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[4] = (char)uVar10;
          iVar1 = iVar1 + iVar5;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[5] = (char)uVar10;
          lVar8 = lVar8 + 4;
          puVar9 = puVar9 + 6;
          uVar11 = (ulong)*(int *)(param_1 + 0x18);
        } while (lVar8 < (long)(uVar11 * 2));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + iVar7;
    } while (lVar12 != iVar4);
  }
  return;
}



/* Entry: 109adcc5c; end: 109adcc63;  */

void FUN_109adcc5c(void)

{
  return;
}



/* Entry: 109adcc64; end: 109adcdf3;  */

void FUN_109adcc64(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  iVar2 = *param_2;
  lVar11 = (long)iVar2;
  iVar3 = param_2[1];
  if (iVar2 < iVar3) {
    uVar10 = (ulong)*(uint *)(param_1 + 0x18);
    iVar6 = *(int *)(param_1 + 0x1c);
    lVar12 = *(long *)(param_1 + 0x10) + (long)(iVar6 * iVar2);
    do {
      if (0 < (int)uVar10) {
        lVar7 = 0;
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                 **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar11);
        pbVar9 = (byte *)(lVar12 + 3);
        do {
          iVar6 = (pbVar9[-2] - 0x80) * 0x198937 + 0x80000;
          iVar2 = (pbVar9[-2] - 0x80) * -0xd020c + (*pbVar9 - 0x80) * -0x64189 + 0x80000;
          iVar4 = (*pbVar9 - 0x80) * 0x2049ba + 0x80000;
          uVar13 = (uint)pbVar9[-3];
          if (pbVar9[-3] < 0x11) {
            uVar13 = 0x10;
          }
          iVar5 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar1 = iVar5 + iVar6;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          *puVar8 = (char)uVar13;
          iVar1 = iVar5 + iVar2;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[1] = (char)uVar13;
          iVar5 = iVar5 + iVar4;
          uVar13 = iVar5 >> 0x14 & (iVar5 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[2] = (char)uVar13;
          uVar13 = (uint)pbVar9[-1];
          if (pbVar9[-1] < 0x11) {
            uVar13 = 0x10;
          }
          iVar1 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar6 = iVar1 + iVar6;
          uVar13 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[3] = (char)uVar13;
          iVar2 = iVar1 + iVar2;
          uVar13 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[4] = (char)uVar13;
          iVar1 = iVar1 + iVar4;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[5] = (char)uVar13;
          lVar7 = lVar7 + 4;
          puVar8 = puVar8 + 6;
          uVar10 = (ulong)*(int *)(param_1 + 0x18);
          pbVar9 = pbVar9 + 4;
        } while (lVar7 < (long)(uVar10 * 2));
        iVar6 = *(int *)(param_1 + 0x1c);
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + iVar6;
    } while (lVar11 != iVar3);
  }
  return;
}



/* Entry: 109adcdf4; end: 109adcdfb;  */

void FUN_109adcdf4(void)

{
  return;
}



/* Entry: 109adcdfc; end: 109adcf87;  */

void FUN_109adcdfc(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  iVar2 = *param_2;
  lVar11 = (long)iVar2;
  iVar3 = param_2[1];
  if (iVar2 < iVar3) {
    uVar10 = (ulong)*(uint *)(param_1 + 0x18);
    iVar6 = *(int *)(param_1 + 0x1c);
    lVar12 = *(long *)(param_1 + 0x10) + (long)(iVar6 * iVar2);
    do {
      if (0 < (int)uVar10) {
        lVar7 = 0;
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                 **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar11);
        pbVar9 = (byte *)(lVar12 + 3);
        do {
          iVar6 = (pbVar9[-3] - 0x80) * 0x198937 + 0x80000;
          iVar2 = (pbVar9[-3] - 0x80) * -0xd020c + (pbVar9[-1] - 0x80) * -0x64189 + 0x80000;
          iVar4 = (pbVar9[-1] - 0x80) * 0x2049ba + 0x80000;
          uVar13 = (uint)pbVar9[-2];
          if (pbVar9[-2] < 0x11) {
            uVar13 = 0x10;
          }
          iVar5 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar1 = iVar5 + iVar6;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          *puVar8 = (char)uVar13;
          iVar1 = iVar5 + iVar2;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[1] = (char)uVar13;
          iVar5 = iVar5 + iVar4;
          uVar13 = iVar5 >> 0x14 & (iVar5 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[2] = (char)uVar13;
          uVar13 = (uint)*pbVar9;
          if (*pbVar9 < 0x11) {
            uVar13 = 0x10;
          }
          iVar1 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar6 = iVar1 + iVar6;
          uVar13 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[3] = (char)uVar13;
          iVar2 = iVar1 + iVar2;
          uVar13 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[4] = (char)uVar13;
          iVar1 = iVar1 + iVar4;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[5] = (char)uVar13;
          lVar7 = lVar7 + 4;
          puVar8 = puVar8 + 6;
          uVar10 = (ulong)*(int *)(param_1 + 0x18);
          pbVar9 = pbVar9 + 4;
        } while (lVar7 < (long)(uVar10 * 2));
        iVar6 = *(int *)(param_1 + 0x1c);
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + iVar6;
    } while (lVar11 != iVar3);
  }
  return;
}



/* Entry: 109adcf88; end: 109adcf8f;  */

void FUN_109adcf88(void)

{
  return;
}



/* Entry: 109adcf90; end: 109add12f;  */

void FUN_109adcf90(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  iVar3 = *param_2;
  lVar12 = (long)iVar3;
  iVar4 = param_2[1];
  if (iVar3 < iVar4) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x1c);
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar7 * iVar3);
    do {
      if (0 < (int)uVar11) {
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                  **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar12 + 3);
        pbVar9 = (byte *)(lVar13 + 1);
        lVar10 = 3;
        do {
          iVar7 = (pbVar9[2] - 0x80) * 0x198937 + 0x80000;
          iVar3 = (pbVar9[2] - 0x80) * -0xd020c + (*pbVar9 - 0x80) * -0x64189 + 0x80000;
          iVar5 = (*pbVar9 - 0x80) * 0x2049ba + 0x80000;
          uVar14 = (uint)pbVar9[-1];
          if (pbVar9[-1] < 0x11) {
            uVar14 = 0x10;
          }
          iVar6 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar2 = iVar6 + iVar7;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-1] = (char)uVar14;
          iVar2 = iVar6 + iVar3;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-2] = (char)uVar14;
          iVar6 = iVar6 + iVar5;
          uVar14 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-3] = (char)uVar14;
          *puVar8 = 0xff;
          uVar14 = (uint)pbVar9[1];
          if (pbVar9[1] < 0x11) {
            uVar14 = 0x10;
          }
          iVar2 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar7 = iVar2 + iVar7;
          uVar14 = iVar7 >> 0x14 & (iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[3] = (char)uVar14;
          iVar3 = iVar2 + iVar3;
          uVar14 = iVar3 >> 0x14 & (iVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[2] = (char)uVar14;
          iVar2 = iVar2 + iVar5;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[1] = (char)uVar14;
          puVar8[4] = 0xff;
          uVar11 = (ulong)*(int *)(param_1 + 0x18);
          puVar8 = puVar8 + 8;
          lVar1 = lVar10 + 1;
          lVar10 = lVar10 + 4;
          pbVar9 = pbVar9 + 4;
        } while (lVar1 < (long)(uVar11 * 2));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + iVar7;
    } while (lVar12 != iVar4);
  }
  return;
}



/* Entry: 109add130; end: 109add137;  */

void FUN_109add130(void)

{
  return;
}



/* Entry: 109add138; end: 109add2cf;  */

void FUN_109add138(long param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  iVar3 = *param_2;
  lVar12 = (long)iVar3;
  iVar4 = param_2[1];
  if (iVar3 < iVar4) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x1c);
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar7 * iVar3);
    do {
      if (0 < (int)uVar11) {
        lVar8 = 0;
        puVar9 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                  **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar12 + 3);
        do {
          pbVar2 = (byte *)(lVar13 + lVar8);
          iVar7 = (pbVar2[2] - 0x80) * 0x198937 + 0x80000;
          iVar3 = (pbVar2[2] - 0x80) * -0xd020c + (*pbVar2 - 0x80) * -0x64189 + 0x80000;
          iVar5 = (*pbVar2 - 0x80) * 0x2049ba + 0x80000;
          uVar10 = (uint)pbVar2[1];
          if (pbVar2[1] < 0x11) {
            uVar10 = 0x10;
          }
          iVar6 = uVar10 * 0x129fbe + -0x129fbe0;
          iVar1 = iVar6 + iVar7;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[-1] = (char)uVar10;
          iVar1 = iVar6 + iVar3;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[-2] = (char)uVar10;
          iVar6 = iVar6 + iVar5;
          uVar10 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[-3] = (char)uVar10;
          *puVar9 = 0xff;
          uVar10 = (uint)pbVar2[3];
          if (pbVar2[3] < 0x11) {
            uVar10 = 0x10;
          }
          iVar1 = uVar10 * 0x129fbe + -0x129fbe0;
          iVar7 = iVar1 + iVar7;
          uVar10 = iVar7 >> 0x14 & (iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[3] = (char)uVar10;
          iVar3 = iVar1 + iVar3;
          uVar10 = iVar3 >> 0x14 & (iVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[2] = (char)uVar10;
          iVar1 = iVar1 + iVar5;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[1] = (char)uVar10;
          puVar9[4] = 0xff;
          lVar8 = lVar8 + 4;
          uVar11 = (ulong)*(int *)(param_1 + 0x18);
          puVar9 = puVar9 + 8;
        } while (lVar8 < (long)(uVar11 * 2));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + iVar7;
    } while (lVar12 != iVar4);
  }
  return;
}



/* Entry: 109add2d0; end: 109add2d7;  */

void FUN_109add2d0(void)

{
  return;
}



/* Entry: 109add2d8; end: 109add477;  */

void FUN_109add2d8(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  iVar3 = *param_2;
  lVar12 = (long)iVar3;
  iVar4 = param_2[1];
  if (iVar3 < iVar4) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x1c);
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar7 * iVar3);
    do {
      if (0 < (int)uVar11) {
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                  **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar12 + 3);
        pbVar9 = (byte *)(lVar13 + 3);
        lVar10 = 1;
        do {
          iVar7 = (pbVar9[-2] - 0x80) * 0x198937 + 0x80000;
          iVar3 = (pbVar9[-2] - 0x80) * -0xd020c + (*pbVar9 - 0x80) * -0x64189 + 0x80000;
          iVar5 = (*pbVar9 - 0x80) * 0x2049ba + 0x80000;
          uVar14 = (uint)pbVar9[-3];
          if (pbVar9[-3] < 0x11) {
            uVar14 = 0x10;
          }
          iVar6 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar2 = iVar6 + iVar7;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-1] = (char)uVar14;
          iVar2 = iVar6 + iVar3;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-2] = (char)uVar14;
          iVar6 = iVar6 + iVar5;
          uVar14 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-3] = (char)uVar14;
          *puVar8 = 0xff;
          uVar14 = (uint)pbVar9[-1];
          if (pbVar9[-1] < 0x11) {
            uVar14 = 0x10;
          }
          iVar2 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar7 = iVar2 + iVar7;
          uVar14 = iVar7 >> 0x14 & (iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[3] = (char)uVar14;
          iVar3 = iVar2 + iVar3;
          uVar14 = iVar3 >> 0x14 & (iVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[2] = (char)uVar14;
          iVar2 = iVar2 + iVar5;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[1] = (char)uVar14;
          puVar8[4] = 0xff;
          uVar11 = (ulong)*(int *)(param_1 + 0x18);
          puVar8 = puVar8 + 8;
          lVar1 = lVar10 + 3;
          lVar10 = lVar10 + 4;
          pbVar9 = pbVar9 + 4;
        } while (lVar1 < (long)(uVar11 * 2));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + iVar7;
    } while (lVar12 != iVar4);
  }
  return;
}



/* Entry: 109add478; end: 109add47f;  */

void FUN_109add478(void)

{
  return;
}



/* Entry: 109add480; end: 109add61b;  */

void FUN_109add480(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  iVar3 = *param_2;
  lVar12 = (long)iVar3;
  iVar4 = param_2[1];
  if (iVar3 < iVar4) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x1c);
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar7 * iVar3);
    do {
      if (0 < (int)uVar11) {
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                  **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar12 + 3);
        lVar10 = 3;
        pbVar9 = (byte *)(lVar13 + 3);
        do {
          iVar7 = (pbVar9[-3] - 0x80) * 0x198937 + 0x80000;
          iVar3 = (pbVar9[-3] - 0x80) * -0xd020c + (pbVar9[-1] - 0x80) * -0x64189 + 0x80000;
          iVar5 = (pbVar9[-1] - 0x80) * 0x2049ba + 0x80000;
          uVar14 = (uint)pbVar9[-2];
          if (pbVar9[-2] < 0x11) {
            uVar14 = 0x10;
          }
          iVar6 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar2 = iVar6 + iVar7;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-1] = (char)uVar14;
          iVar2 = iVar6 + iVar3;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-2] = (char)uVar14;
          iVar6 = iVar6 + iVar5;
          uVar14 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[-3] = (char)uVar14;
          *puVar8 = 0xff;
          uVar14 = (uint)*pbVar9;
          if (*pbVar9 < 0x11) {
            uVar14 = 0x10;
          }
          iVar2 = uVar14 * 0x129fbe + -0x129fbe0;
          iVar7 = iVar2 + iVar7;
          uVar14 = iVar7 >> 0x14 & (iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[3] = (char)uVar14;
          iVar3 = iVar2 + iVar3;
          uVar14 = iVar3 >> 0x14 & (iVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[2] = (char)uVar14;
          iVar2 = iVar2 + iVar5;
          uVar14 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar14) {
            uVar14 = 0xff;
          }
          puVar8[1] = (char)uVar14;
          puVar8[4] = 0xff;
          uVar11 = (ulong)*(int *)(param_1 + 0x18);
          puVar8 = puVar8 + 8;
          lVar1 = lVar10 + 1;
          lVar10 = lVar10 + 4;
          pbVar9 = pbVar9 + 4;
        } while (lVar1 < (long)(uVar11 * 2));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + iVar7;
    } while (lVar12 != iVar4);
  }
  return;
}



/* Entry: 109add61c; end: 109add623;  */

void FUN_109add61c(void)

{
  return;
}



/* Entry: 109add624; end: 109add7bb;  */

void FUN_109add624(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  iVar2 = *param_2;
  lVar11 = (long)iVar2;
  iVar3 = param_2[1];
  if (iVar2 < iVar3) {
    uVar10 = (ulong)*(uint *)(param_1 + 0x18);
    iVar6 = *(int *)(param_1 + 0x1c);
    lVar12 = *(long *)(param_1 + 0x10) + (long)(iVar6 * iVar2);
    do {
      if (0 < (int)uVar10) {
        lVar7 = 0;
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                 **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar11);
        pbVar9 = (byte *)(lVar12 + 3);
        do {
          iVar6 = (*pbVar9 - 0x80) * 0x198937 + 0x80000;
          iVar2 = (*pbVar9 - 0x80) * -0xd020c + (pbVar9[-2] - 0x80) * -0x64189 + 0x80000;
          iVar4 = (pbVar9[-2] - 0x80) * 0x2049ba + 0x80000;
          uVar13 = (uint)pbVar9[-3];
          if (pbVar9[-3] < 0x11) {
            uVar13 = 0x10;
          }
          iVar5 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar1 = iVar5 + iVar6;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          *puVar8 = (char)uVar13;
          iVar1 = iVar5 + iVar2;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[1] = (char)uVar13;
          iVar5 = iVar5 + iVar4;
          uVar13 = iVar5 >> 0x14 & (iVar5 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[2] = (char)uVar13;
          puVar8[3] = 0xff;
          uVar13 = (uint)pbVar9[-1];
          if (pbVar9[-1] < 0x11) {
            uVar13 = 0x10;
          }
          iVar1 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar6 = iVar1 + iVar6;
          uVar13 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[4] = (char)uVar13;
          iVar2 = iVar1 + iVar2;
          uVar13 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[5] = (char)uVar13;
          iVar1 = iVar1 + iVar4;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[6] = (char)uVar13;
          puVar8[7] = 0xff;
          lVar7 = lVar7 + 4;
          puVar8 = puVar8 + 8;
          uVar10 = (ulong)*(int *)(param_1 + 0x18);
          pbVar9 = pbVar9 + 4;
        } while (lVar7 < (long)(uVar10 * 2));
        iVar6 = *(int *)(param_1 + 0x1c);
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + iVar6;
    } while (lVar11 != iVar3);
  }
  return;
}



/* Entry: 109add7bc; end: 109add7c3;  */

void FUN_109add7bc(void)

{
  return;
}



/* Entry: 109add7c4; end: 109add957;  */

void FUN_109add7c4(long param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  iVar3 = *param_2;
  lVar12 = (long)iVar3;
  iVar4 = param_2[1];
  if (iVar3 < iVar4) {
    uVar11 = (ulong)*(uint *)(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x1c);
    lVar13 = *(long *)(param_1 + 0x10) + (long)(iVar7 * iVar3);
    do {
      if (0 < (int)uVar11) {
        lVar8 = 0;
        puVar9 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                 **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar12);
        do {
          pbVar2 = (byte *)(lVar13 + lVar8);
          iVar7 = (pbVar2[2] - 0x80) * 0x198937 + 0x80000;
          iVar3 = (pbVar2[2] - 0x80) * -0xd020c + (*pbVar2 - 0x80) * -0x64189 + 0x80000;
          iVar5 = (*pbVar2 - 0x80) * 0x2049ba + 0x80000;
          uVar10 = (uint)pbVar2[1];
          if (pbVar2[1] < 0x11) {
            uVar10 = 0x10;
          }
          iVar6 = uVar10 * 0x129fbe + -0x129fbe0;
          iVar1 = iVar6 + iVar7;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          *puVar9 = (char)uVar10;
          iVar1 = iVar6 + iVar3;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[1] = (char)uVar10;
          iVar6 = iVar6 + iVar5;
          uVar10 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[2] = (char)uVar10;
          puVar9[3] = 0xff;
          uVar10 = (uint)pbVar2[3];
          if (pbVar2[3] < 0x11) {
            uVar10 = 0x10;
          }
          iVar1 = uVar10 * 0x129fbe + -0x129fbe0;
          iVar7 = iVar1 + iVar7;
          uVar10 = iVar7 >> 0x14 & (iVar7 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[4] = (char)uVar10;
          iVar3 = iVar1 + iVar3;
          uVar10 = iVar3 >> 0x14 & (iVar3 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[5] = (char)uVar10;
          iVar1 = iVar1 + iVar5;
          uVar10 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar10) {
            uVar10 = 0xff;
          }
          puVar9[6] = (char)uVar10;
          puVar9[7] = 0xff;
          lVar8 = lVar8 + 4;
          puVar9 = puVar9 + 8;
          uVar11 = (ulong)*(int *)(param_1 + 0x18);
        } while (lVar8 < (long)(uVar11 * 2));
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + iVar7;
    } while (lVar12 != iVar4);
  }
  return;
}



/* Entry: 109add958; end: 109add95f;  */

void FUN_109add958(void)

{
  return;
}



/* Entry: 109add960; end: 109addaf7;  */

void FUN_109add960(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  iVar2 = *param_2;
  lVar11 = (long)iVar2;
  iVar3 = param_2[1];
  if (iVar2 < iVar3) {
    uVar10 = (ulong)*(uint *)(param_1 + 0x18);
    iVar6 = *(int *)(param_1 + 0x1c);
    lVar12 = *(long *)(param_1 + 0x10) + (long)(iVar6 * iVar2);
    do {
      if (0 < (int)uVar10) {
        lVar7 = 0;
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                 **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar11);
        pbVar9 = (byte *)(lVar12 + 3);
        do {
          iVar6 = (pbVar9[-2] - 0x80) * 0x198937 + 0x80000;
          iVar2 = (pbVar9[-2] - 0x80) * -0xd020c + (*pbVar9 - 0x80) * -0x64189 + 0x80000;
          iVar4 = (*pbVar9 - 0x80) * 0x2049ba + 0x80000;
          uVar13 = (uint)pbVar9[-3];
          if (pbVar9[-3] < 0x11) {
            uVar13 = 0x10;
          }
          iVar5 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar1 = iVar5 + iVar6;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          *puVar8 = (char)uVar13;
          iVar1 = iVar5 + iVar2;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[1] = (char)uVar13;
          iVar5 = iVar5 + iVar4;
          uVar13 = iVar5 >> 0x14 & (iVar5 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[2] = (char)uVar13;
          puVar8[3] = 0xff;
          uVar13 = (uint)pbVar9[-1];
          if (pbVar9[-1] < 0x11) {
            uVar13 = 0x10;
          }
          iVar1 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar6 = iVar1 + iVar6;
          uVar13 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[4] = (char)uVar13;
          iVar2 = iVar1 + iVar2;
          uVar13 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[5] = (char)uVar13;
          iVar1 = iVar1 + iVar4;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[6] = (char)uVar13;
          puVar8[7] = 0xff;
          lVar7 = lVar7 + 4;
          puVar8 = puVar8 + 8;
          uVar10 = (ulong)*(int *)(param_1 + 0x18);
          pbVar9 = pbVar9 + 4;
        } while (lVar7 < (long)(uVar10 * 2));
        iVar6 = *(int *)(param_1 + 0x1c);
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + iVar6;
    } while (lVar11 != iVar3);
  }
  return;
}



/* Entry: 109addaf8; end: 109addaff;  */

void FUN_109addaf8(void)

{
  return;
}



/* Entry: 109addb00; end: 109addc93;  */

void FUN_109addb00(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  iVar2 = *param_2;
  lVar11 = (long)iVar2;
  iVar3 = param_2[1];
  if (iVar2 < iVar3) {
    uVar10 = (ulong)*(uint *)(param_1 + 0x18);
    iVar6 = *(int *)(param_1 + 0x1c);
    lVar12 = *(long *)(param_1 + 0x10) + (long)(iVar6 * iVar2);
    do {
      if (0 < (int)uVar10) {
        lVar7 = 0;
        puVar8 = (undefined1 *)
                 (*(long *)(*(long *)(param_1 + 8) + 0x10) +
                 **(long **)(*(long *)(param_1 + 8) + 0x48) * lVar11);
        pbVar9 = (byte *)(lVar12 + 3);
        do {
          iVar6 = (pbVar9[-3] - 0x80) * 0x198937 + 0x80000;
          iVar2 = (pbVar9[-3] - 0x80) * -0xd020c + (pbVar9[-1] - 0x80) * -0x64189 + 0x80000;
          iVar4 = (pbVar9[-1] - 0x80) * 0x2049ba + 0x80000;
          uVar13 = (uint)pbVar9[-2];
          if (pbVar9[-2] < 0x11) {
            uVar13 = 0x10;
          }
          iVar5 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar1 = iVar5 + iVar6;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          *puVar8 = (char)uVar13;
          iVar1 = iVar5 + iVar2;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[1] = (char)uVar13;
          iVar5 = iVar5 + iVar4;
          uVar13 = iVar5 >> 0x14 & (iVar5 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[2] = (char)uVar13;
          puVar8[3] = 0xff;
          uVar13 = (uint)*pbVar9;
          if (*pbVar9 < 0x11) {
            uVar13 = 0x10;
          }
          iVar1 = uVar13 * 0x129fbe + -0x129fbe0;
          iVar6 = iVar1 + iVar6;
          uVar13 = iVar6 >> 0x14 & (iVar6 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[4] = (char)uVar13;
          iVar2 = iVar1 + iVar2;
          uVar13 = iVar2 >> 0x14 & (iVar2 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[5] = (char)uVar13;
          iVar1 = iVar1 + iVar4;
          uVar13 = iVar1 >> 0x14 & (iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar13) {
            uVar13 = 0xff;
          }
          puVar8[6] = (char)uVar13;
          puVar8[7] = 0xff;
          lVar7 = lVar7 + 4;
          puVar8 = puVar8 + 8;
          uVar10 = (ulong)*(int *)(param_1 + 0x18);
          pbVar9 = pbVar9 + 4;
        } while (lVar7 < (long)(uVar10 * 2));
        iVar6 = *(int *)(param_1 + 0x1c);
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + iVar6;
    } while (lVar11 != iVar3);
  }
  return;
}



/* Entry: 109addc94; end: 109adde6b;  */

void FUN_109addc94(void)

{
  return;
}



/* Entry: 109adde6c; end: 109adf657;  */

uint FUN_109adde6c(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulong *puVar13;
  char *pcVar14;
  byte *pbVar15;
  byte bVar16;
  long lVar17;
  ushort uVar18;
  ushort uVar19;
  uint *puVar20;
  byte bVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  long lVar25;
  byte bVar26;
  ushort uVar27;
  long lVar28;
  char *pcVar29;
  ushort *puVar30;
  int *piVar31;
  ushort uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  byte bVar36;
  byte bVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  ushort *puVar42;
  ushort uVar43;
  uint uVar44;
  ushort uVar45;
  uint uVar46;
  uint uVar47;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(param_1 + 2);
    puStack_90 = (undefined8 *)((ulong)&uStack_d0 | 8);
    uStack_c8 = puVar13[1];
    uStack_d0 = *puVar13;
    uStack_b8 = puVar13[3];
    uStack_c0 = puVar13[2];
    uStack_a8 = puVar13[5];
    uStack_b0 = puVar13[4];
    uStack_98 = puVar13[7];
    uStack_a0 = puVar13[6];
    plStack_88 = &lStack_80;
    lStack_80 = 0;
    lStack_78 = 0;
    if (puVar13[7] != 0) {
      piVar31 = (int *)(puVar13[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar31,0x10);
        if (bVar8) {
          *piVar31 = *piVar31 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      lStack_80 = *(long *)puVar13[9];
      lStack_78 = ((long *)puVar13[9])[1];
    }
    else {
      uStack_d0 = uStack_d0 & 0xffffffff;
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_1,0xffffffff);
  }
  uStack_130 = NEON_rev64(*puStack_90,4);
  FUN_109a8ee3c(param_2,&uStack_130,param_4 & 7,0xffffffff,0,0);
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(param_2 + 2);
    uStack_f0 = (ulong)&uStack_130 | 8;
    uStack_128 = puVar13[1];
    uStack_130 = *puVar13;
    uStack_118 = puVar13[3];
    uStack_120 = puVar13[2];
    uStack_108 = puVar13[5];
    uStack_110 = puVar13[4];
    uStack_f8 = puVar13[7];
    uStack_100 = puVar13[6];
    plStack_e8 = &lStack_e0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    if (puVar13[7] != 0) {
      piVar31 = (int *)(puVar13[7] + 0x14);
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar31,0x10);
        if (bVar8) {
          *piVar31 = *piVar31 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      lStack_e0 = *(long *)puVar13[9];
      lStack_d8 = ((long *)puVar13[9])[1];
    }
    else {
      uStack_130 = uStack_130 & 0xffffffff;
      func_0x000109a84868(&uStack_130);
    }
  }
  else {
    FUN_109a8a180(&uStack_130,param_2,0xffffffff);
  }
  if ((param_4 != 2) && (param_4 != 4)) {
    puVar11 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_70 = puVar11 + 1;
    uStack_68 = 0x25;
    *(undefined1 *)((long)puVar11 + 0x29) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x6562616c20666f20;
    *(undefined8 *)(puVar11 + 1) = 0x6570797420656874;
    *(undefined8 *)(puVar11 + 7) = 0x6f20753631206562;
    *(undefined8 *)(puVar11 + 5) = 0x207473756d20736c;
    *(undefined8 *)((long)puVar11 + 0x21) = 0x73323320726f2075;
    FUN_109ac3188(0xffffff2e,&puStack_70,&UNK_10f59bb39,&UNK_10f59bb4d,0x179);
LAB_109adf48c:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x109adf490);
    (*pcVar6)();
  }
  if (((uStack_130 & 0xff8) != 0) || ((uStack_d0 & 0xff8) != 0)) {
    puVar11 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_70 = puVar11 + 1;
    uStack_68 = 0x26;
    *(undefined1 *)((long)puVar11 + 0x2a) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x203d3d202928736c;
    *(undefined8 *)(puVar11 + 1) = 0x656e6e6168632e4c;
    *(undefined8 *)(puVar11 + 7) = 0x28736c656e6e6168;
    *(undefined8 *)(puVar11 + 5) = 0x632e492026262031;
    *(undefined8 *)((long)puVar11 + 0x22) = 0x31203d3d20292873;
    FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59bc02,&UNK_10f59bb4d,0x155);
    goto LAB_109adf48c;
  }
  if ((param_3 != 4) && (param_3 != 8)) {
    puVar11 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_70 = puVar11 + 1;
    uStack_68 = 0x26;
    *(undefined1 *)((long)puVar11 + 0x2a) = 0;
    *(undefined8 *)(puVar11 + 3) = 0x203d3d2079746976;
    *(undefined8 *)(puVar11 + 1) = 0x697463656e6e6f63;
    *(undefined8 *)(puVar11 + 7) = 0x746976697463656e;
    *(undefined8 *)(puVar11 + 5) = 0x6e6f63207c7c2038;
    *(undefined8 *)((long)puVar11 + 0x22) = 0x34203d3d20797469;
    FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59bc02,&UNK_10f59bb4d,0x156);
    goto LAB_109adf48c;
  }
  if ((uStack_d0 & 6) != 0) {
    puVar11 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    puStack_70 = puVar11 + 1;
    uStack_68 = 0x22;
    *(undefined1 *)((long)puVar11 + 0x26) = 0;
    *(undefined2 *)(puVar11 + 9) = 0x5338;
    *(undefined8 *)(puVar11 + 3) = 0x2055385f5643203d;
    *(undefined8 *)(puVar11 + 1) = 0x3d20687470654469;
    *(undefined8 *)(puVar11 + 7) = 0x5f5643203d3d2068;
    *(undefined8 *)(puVar11 + 5) = 0x7470654469207c7c;
    FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59bc02,&UNK_10f59bb4d,0x15d);
    goto LAB_109adf48c;
  }
  iVar3 = (int)uStack_128;
  iVar5 = uStack_128._4_4_;
  if (((uint)uStack_130 & 7) == 4) {
    lVar39 = (long)(int)uStack_128;
    if ((int)uStack_128 != (int)uStack_c8) {
      puVar11 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_70 = puVar11 + 1;
      uStack_68 = 0x10;
      *(undefined1 *)(puVar11 + 5) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x73776f722e49203d;
      *(undefined8 *)(puVar11 + 1) = 0x3d2073776f722e4c;
      FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f55aaab,&UNK_10f59bb4d,0xc1);
      goto LAB_109adf48c;
    }
    lVar40 = (long)uStack_128._4_4_;
    if (uStack_128._4_4_ != uStack_c8._4_4_) {
      puVar11 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_70 = puVar11 + 1;
      uStack_68 = 0x10;
      *(undefined1 *)(puVar11 + 5) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x736c6f632e49203d;
      *(undefined8 *)(puVar11 + 1) = 0x3d20736c6f632e4c;
      FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f55aaab,&UNK_10f59bb4d,0xc2);
      goto LAB_109adf48c;
    }
    if ((param_3 != 4) && (param_3 != 8)) {
      puVar11 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_70 = puVar11 + 1;
      uStack_68 = 0x26;
      *(undefined1 *)((long)puVar11 + 0x2a) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x203d3d2079746976;
      *(undefined8 *)(puVar11 + 1) = 0x697463656e6e6f63;
      *(undefined8 *)(puVar11 + 7) = 0x746976697463656e;
      *(undefined8 *)(puVar11 + 5) = 0x6e6f63207c7c2038;
      *(undefined8 *)((long)puVar11 + 0x22) = 0x34203d3d20797469;
      FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f55aaab,&UNK_10f59bb4d,0xc3);
      goto LAB_109adf48c;
    }
    puVar11 = (undefined4 *)(((lVar39 + 2U) / 3) * ((lVar40 + 2U) / 3) * 0x10);
    func_0x000107c2ae8c();
    *puVar11 = 0;
    if (0 < iVar3) {
      lVar22 = 0;
      lVar25 = *plStack_e8;
      lVar28 = *plStack_88;
      uVar12 = 1;
      do {
        lVar35 = uStack_120 + lVar22 * lVar25;
        lVar33 = lVar35 - lVar25;
        pcVar29 = (char *)(uStack_c0 + lVar22 * lVar28);
        if (param_3 == 8) {
          if (iVar5 != 0) {
            lVar17 = 0;
            pcVar14 = pcVar29;
            do {
              if (*pcVar14 == '\0') {
                *(undefined4 *)(lVar35 + lVar17 * 4) = 0;
              }
              else {
                pcVar1 = pcVar29 + (lVar17 - lVar28);
                if ((lVar22 == 0) || (lVar17 == 0)) {
                  bVar7 = false;
                  bVar8 = false;
                  bVar9 = false;
                  if (lVar22 != 0) goto LAB_109adea28;
LAB_109adea4c:
                  if (lVar17 != 0) goto LAB_109adea50;
LAB_109adea68:
                  bVar10 = false;
                }
                else {
                  bVar7 = pcVar1[-1] != '\0';
LAB_109adea28:
                  bVar8 = *pcVar1 != '\0';
                  if ((int)lVar17 + 1 < iVar5) {
                    bVar9 = pcVar1[1] != '\0';
                    goto LAB_109adea4c;
                  }
                  bVar9 = false;
                  if (lVar17 == 0) goto LAB_109adea68;
LAB_109adea50:
                  bVar10 = pcVar14[-1] != '\0';
                }
                puVar2 = (uint *)(lVar35 + lVar17 * 4);
                puVar20 = (uint *)(lVar33 + lVar17 * 4);
                if (bVar8) {
                  uVar38 = *puVar20;
                }
                else {
                  if (bVar9) {
                    uVar38 = puVar20[1];
                    if (bVar7) {
                      uVar44 = puVar20[-1];
                      uVar46 = uVar38;
                      do {
                        uVar41 = uVar46;
                        uVar46 = puVar11[(int)uVar41];
                      } while ((int)puVar11[(int)uVar41] < (int)uVar41);
                      uVar46 = uVar44;
                      if (uVar38 != uVar44) {
                        do {
                          uVar47 = uVar46;
                          uVar46 = puVar11[(int)uVar47];
                        } while ((int)puVar11[(int)uVar47] < (int)uVar47);
                        if ((int)uVar47 <= (int)uVar41) {
                          uVar41 = uVar47;
                        }
                        puVar20 = puVar11 + (int)uVar44;
                        uVar46 = *puVar20;
                        if ((int)*puVar20 < (int)uVar44) {
                          do {
                            *puVar20 = uVar41;
                            puVar20 = puVar11 + (int)uVar46;
                            bVar8 = (int)*puVar20 < (int)uVar46;
                            uVar46 = *puVar20;
                          } while (bVar8);
                        }
                        *puVar20 = uVar41;
                      }
                      puVar20 = puVar11 + (int)uVar38;
                      uVar44 = *puVar20;
                      if ((int)*puVar20 < (int)uVar38) {
                        do {
                          *puVar20 = uVar41;
                          puVar20 = puVar11 + (int)uVar44;
                          bVar8 = (int)*puVar20 < (int)uVar44;
                          uVar44 = *puVar20;
                        } while (bVar8);
                      }
                    }
                    else {
                      if (!bVar10) {
                        *puVar2 = uVar38;
                        goto LAB_109adebfc;
                      }
                      uVar44 = puVar2[-1];
                      uVar46 = uVar38;
                      do {
                        uVar41 = uVar46;
                        uVar46 = puVar11[(int)uVar41];
                      } while ((int)puVar11[(int)uVar41] < (int)uVar41);
                      uVar46 = uVar44;
                      if (uVar38 != uVar44) {
                        do {
                          uVar47 = uVar46;
                          uVar46 = puVar11[(int)uVar47];
                        } while ((int)puVar11[(int)uVar47] < (int)uVar47);
                        if ((int)uVar47 <= (int)uVar41) {
                          uVar41 = uVar47;
                        }
                        puVar20 = puVar11 + (int)uVar44;
                        uVar46 = *puVar20;
                        if ((int)*puVar20 < (int)uVar44) {
                          do {
                            *puVar20 = uVar41;
                            puVar20 = puVar11 + (int)uVar46;
                            bVar8 = (int)*puVar20 < (int)uVar46;
                            uVar46 = *puVar20;
                          } while (bVar8);
                        }
                        *puVar20 = uVar41;
                      }
                      puVar20 = puVar11 + (int)uVar38;
                      uVar44 = *puVar20;
                      if ((int)*puVar20 < (int)uVar38) {
                        do {
                          *puVar20 = uVar41;
                          puVar20 = puVar11 + (int)uVar44;
                          bVar8 = (int)*puVar20 < (int)uVar44;
                          uVar44 = *puVar20;
                        } while (bVar8);
                      }
                    }
                    *puVar20 = uVar41;
                    *puVar2 = uVar41;
                    goto LAB_109adebfc;
                  }
                  if (bVar7) {
                    uVar38 = puVar20[-1];
                  }
                  else {
                    if (!bVar10) {
                      *puVar2 = uVar12;
                      puVar11[(int)uVar12] = uVar12;
                      uVar12 = uVar12 + 1;
                      goto LAB_109adebfc;
                    }
                    uVar38 = puVar2[-1];
                  }
                }
                *puVar2 = uVar38;
              }
LAB_109adebfc:
              pcVar14 = pcVar14 + 1;
              lVar17 = lVar17 + 1;
            } while (pcVar14 != pcVar29 + lVar40);
          }
        }
        else if (iVar5 != 0) {
          lVar17 = 0;
          pcVar14 = pcVar29;
          do {
            puVar2 = (uint *)(lVar35 + lVar17 * 4);
            if (*pcVar14 == '\0') {
              *puVar2 = 0;
            }
            else {
              if (lVar22 == 0) {
                if ((lVar17 == 0) || (pcVar14[-1] == '\0')) goto LAB_109aded14;
LAB_109aded08:
                uVar38 = puVar2[-1];
              }
              else {
                if (lVar17 == 0) {
                  if (pcVar29[lVar17 - lVar28] == '\0') goto LAB_109aded14;
                }
                else {
                  if (pcVar29[lVar17 - lVar28] == '\0') {
                    if (pcVar14[-1] != '\0') goto LAB_109aded08;
LAB_109aded14:
                    *puVar2 = uVar12;
                    puVar11[(int)uVar12] = uVar12;
                    uVar12 = uVar12 + 1;
                    goto LAB_109aded20;
                  }
                  if (pcVar14[-1] != '\0') {
                    uVar44 = puVar2[-1];
                    uVar46 = *(uint *)(lVar33 + lVar17 * 4);
                    uVar41 = uVar44;
                    do {
                      uVar38 = uVar41;
                      uVar41 = puVar11[(int)uVar38];
                    } while ((int)puVar11[(int)uVar38] < (int)uVar38);
                    uVar41 = uVar46;
                    if (uVar44 != uVar46) {
                      do {
                        uVar47 = uVar41;
                        uVar41 = puVar11[(int)uVar47];
                      } while ((int)puVar11[(int)uVar47] < (int)uVar47);
                      if ((int)uVar47 <= (int)uVar38) {
                        uVar38 = uVar47;
                      }
                      puVar20 = puVar11 + (int)uVar46;
                      uVar41 = *puVar20;
                      if ((int)*puVar20 < (int)uVar46) {
                        do {
                          *puVar20 = uVar38;
                          puVar20 = puVar11 + (int)uVar41;
                          bVar8 = (int)*puVar20 < (int)uVar41;
                          uVar41 = *puVar20;
                        } while (bVar8);
                      }
                      *puVar20 = uVar38;
                    }
                    puVar20 = puVar11 + (int)uVar44;
                    uVar46 = *puVar20;
                    if ((int)*puVar20 < (int)uVar44) {
                      do {
                        *puVar20 = uVar38;
                        puVar20 = puVar11 + (int)uVar46;
                        bVar8 = (int)*puVar20 < (int)uVar46;
                        uVar46 = *puVar20;
                      } while (bVar8);
                    }
                    *puVar20 = uVar38;
                    goto LAB_109aded0c;
                  }
                }
                uVar38 = *(uint *)(lVar33 + lVar17 * 4);
              }
LAB_109aded0c:
              *puVar2 = uVar38;
            }
LAB_109aded20:
            pcVar14 = pcVar14 + 1;
            lVar17 = lVar17 + 1;
          } while (pcVar14 != pcVar29 + lVar40);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 != lVar39);
      if ((int)uVar12 < 2) {
        uVar38 = 1;
      }
      else {
        uVar23 = 1;
        uVar38 = 1;
        do {
          if ((long)(int)puVar11[uVar23] < (long)uVar23) {
            uVar44 = puVar11[(int)puVar11[uVar23]];
          }
          else {
            uVar44 = uVar38;
            uVar38 = uVar38 + 1;
          }
          puVar11[uVar23] = uVar44;
          uVar23 = uVar23 + 1;
        } while (uVar12 != uVar23);
      }
      lVar22 = 0;
      do {
        if (iVar5 != 0) {
          piVar31 = (int *)(uStack_120 + lVar22 * lVar25);
          lVar28 = lVar40 << 2;
          do {
            *piVar31 = puVar11[*piVar31];
            lVar28 = lVar28 + -4;
            piVar31 = piVar31 + 1;
          } while (lVar28 != 0);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 != lVar39);
      goto LAB_109adee40;
    }
  }
  else if (((uint)uStack_130 & 7) == 2) {
    lVar39 = (long)(int)uStack_128;
    if ((int)uStack_128 != (int)uStack_c8) {
      puVar11 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_70 = puVar11 + 1;
      uStack_68 = 0x10;
      *(undefined1 *)(puVar11 + 5) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x73776f722e49203d;
      *(undefined8 *)(puVar11 + 1) = 0x3d2073776f722e4c;
      FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f55aaab,&UNK_10f59bb4d,0xc1);
      goto LAB_109adf48c;
    }
    lVar40 = (long)uStack_128._4_4_;
    if (uStack_128._4_4_ != uStack_c8._4_4_) {
      puVar11 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_70 = puVar11 + 1;
      uStack_68 = 0x10;
      *(undefined1 *)(puVar11 + 5) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x736c6f632e49203d;
      *(undefined8 *)(puVar11 + 1) = 0x3d20736c6f632e4c;
      FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f55aaab,&UNK_10f59bb4d,0xc2);
      goto LAB_109adf48c;
    }
    if ((param_3 != 4) && (param_3 != 8)) {
      puVar11 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_70 = puVar11 + 1;
      uStack_68 = 0x26;
      *(undefined1 *)((long)puVar11 + 0x2a) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x203d3d2079746976;
      *(undefined8 *)(puVar11 + 1) = 0x697463656e6e6f63;
      *(undefined8 *)(puVar11 + 7) = 0x746976697463656e;
      *(undefined8 *)(puVar11 + 5) = 0x6e6f63207c7c2038;
      *(undefined8 *)((long)puVar11 + 0x22) = 0x34203d3d20797469;
      FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f55aaab,&UNK_10f59bb4d,0xc3);
      goto LAB_109adf48c;
    }
    puVar11 = (undefined4 *)(((lVar39 + 2U) / 3) * ((lVar40 + 2U) / 3) * 8);
    func_0x000107c2ae8c();
    *(undefined2 *)puVar11 = 0;
    if (0 < iVar3) {
      lVar22 = 0;
      lVar25 = *plStack_e8;
      lVar28 = *plStack_88;
      uVar27 = 1;
      do {
        lVar35 = uStack_120 + lVar22 * lVar25;
        lVar33 = lVar35 - lVar25;
        pcVar29 = (char *)(uStack_c0 + lVar22 * lVar28);
        if (param_3 == 8) {
          if (iVar5 != 0) {
            lVar17 = 0;
            pcVar14 = pcVar29;
            do {
              if (*pcVar14 == '\0') {
                *(undefined2 *)(lVar35 + lVar17 * 2) = 0;
              }
              else {
                pcVar1 = pcVar29 + (lVar17 - lVar28);
                if ((lVar22 == 0) || (lVar17 == 0)) {
                  bVar7 = false;
                  bVar8 = false;
                  bVar9 = false;
                  if (lVar22 != 0) goto LAB_109ade5b0;
LAB_109ade5d4:
                  if (lVar17 != 0) goto LAB_109ade5d8;
LAB_109ade5f0:
                  bVar10 = false;
                }
                else {
                  bVar7 = pcVar1[-1] != '\0';
LAB_109ade5b0:
                  bVar8 = *pcVar1 != '\0';
                  if ((int)lVar17 + 1 < iVar5) {
                    bVar9 = pcVar1[1] != '\0';
                    goto LAB_109ade5d4;
                  }
                  bVar9 = false;
                  if (lVar17 == 0) goto LAB_109ade5f0;
LAB_109ade5d8:
                  bVar10 = pcVar14[-1] != '\0';
                }
                puVar30 = (ushort *)(lVar35 + lVar17 * 2);
                puVar42 = (ushort *)(lVar33 + lVar17 * 2);
                if (bVar8) {
                  uVar18 = *puVar42;
                }
                else {
                  if (bVar9) {
                    uVar18 = puVar42[1];
                    uVar23 = (ulong)uVar18;
                    if (bVar7) {
                      uVar32 = puVar42[-1];
                      uVar34 = uVar23;
                      do {
                        uVar45 = *(ushort *)((long)puVar11 + uVar34 * 2);
                        uVar12 = (uint)uVar34;
                        uVar19 = (ushort)uVar34;
                        uVar34 = (ulong)uVar45;
                      } while (uVar45 < uVar12);
                      uVar34 = (ulong)uVar32;
                      if (uVar18 != uVar32) {
                        do {
                          uVar45 = *(ushort *)((long)puVar11 + uVar34 * 2);
                          uVar38 = (uint)uVar34;
                          uVar43 = (ushort)uVar34;
                          uVar34 = (ulong)uVar45;
                        } while (uVar45 < uVar38);
                        if (uVar38 <= uVar12) {
                          uVar19 = uVar43;
                        }
                        puVar42 = (ushort *)((long)puVar11 + (ulong)uVar32 * 2);
                        uVar45 = *puVar42;
                        if (*puVar42 < uVar32) {
                          do {
                            *puVar42 = uVar19;
                            puVar42 = (ushort *)((long)puVar11 + (ulong)uVar45 * 2);
                            bVar8 = *puVar42 < uVar45;
                            uVar45 = *puVar42;
                          } while (bVar8);
                        }
                        *puVar42 = uVar19;
                      }
                      puVar42 = (ushort *)((long)puVar11 + uVar23 * 2);
                      uVar32 = *puVar42;
                      if (*puVar42 < uVar18) {
                        do {
                          *puVar42 = uVar19;
                          puVar42 = (ushort *)((long)puVar11 + (ulong)uVar32 * 2);
                          bVar8 = *puVar42 < uVar32;
                          uVar32 = *puVar42;
                        } while (bVar8);
                      }
                    }
                    else {
                      if (!bVar10) {
                        *puVar30 = uVar18;
                        goto LAB_109ade79c;
                      }
                      uVar32 = puVar30[-1];
                      uVar34 = uVar23;
                      do {
                        uVar45 = *(ushort *)((long)puVar11 + uVar34 * 2);
                        uVar12 = (uint)uVar34;
                        uVar19 = (ushort)uVar34;
                        uVar34 = (ulong)uVar45;
                      } while (uVar45 < uVar12);
                      uVar34 = (ulong)uVar32;
                      if (uVar18 != uVar32) {
                        do {
                          uVar45 = *(ushort *)((long)puVar11 + uVar34 * 2);
                          uVar38 = (uint)uVar34;
                          uVar43 = (ushort)uVar34;
                          uVar34 = (ulong)uVar45;
                        } while (uVar45 < uVar38);
                        if (uVar38 <= uVar12) {
                          uVar19 = uVar43;
                        }
                        puVar42 = (ushort *)((long)puVar11 + (ulong)uVar32 * 2);
                        uVar45 = *puVar42;
                        if (*puVar42 < uVar32) {
                          do {
                            *puVar42 = uVar19;
                            puVar42 = (ushort *)((long)puVar11 + (ulong)uVar45 * 2);
                            bVar8 = *puVar42 < uVar45;
                            uVar45 = *puVar42;
                          } while (bVar8);
                        }
                        *puVar42 = uVar19;
                      }
                      puVar42 = (ushort *)((long)puVar11 + uVar23 * 2);
                      uVar32 = *puVar42;
                      if (*puVar42 < uVar18) {
                        do {
                          *puVar42 = uVar19;
                          puVar42 = (ushort *)((long)puVar11 + (ulong)uVar32 * 2);
                          bVar8 = *puVar42 < uVar32;
                          uVar32 = *puVar42;
                        } while (bVar8);
                      }
                    }
                    *puVar42 = uVar19;
                    *puVar30 = uVar19;
                    goto LAB_109ade79c;
                  }
                  if (bVar7) {
                    uVar18 = puVar42[-1];
                  }
                  else {
                    if (!bVar10) {
                      *puVar30 = uVar27;
                      *(ushort *)((long)puVar11 + (ulong)uVar27 * 2) = uVar27;
                      uVar27 = uVar27 + 1;
                      goto LAB_109ade79c;
                    }
                    uVar18 = puVar30[-1];
                  }
                }
                *puVar30 = uVar18;
              }
LAB_109ade79c:
              pcVar14 = pcVar14 + 1;
              lVar17 = lVar17 + 1;
            } while (pcVar14 != pcVar29 + lVar40);
          }
        }
        else if (iVar5 != 0) {
          lVar17 = 0;
          pcVar14 = pcVar29;
          do {
            puVar30 = (ushort *)(lVar35 + lVar17 * 2);
            if (*pcVar14 == '\0') {
              *puVar30 = 0;
            }
            else {
              if (lVar22 == 0) {
                if ((lVar17 == 0) || (pcVar14[-1] == '\0')) goto LAB_109ade8c0;
LAB_109ade8b4:
                uVar18 = puVar30[-1];
              }
              else {
                if (lVar17 == 0) {
                  if (pcVar29[lVar17 - lVar28] == '\0') goto LAB_109ade8c0;
                }
                else {
                  if (pcVar29[lVar17 - lVar28] == '\0') {
                    if (pcVar14[-1] != '\0') goto LAB_109ade8b4;
LAB_109ade8c0:
                    *puVar30 = uVar27;
                    *(ushort *)((long)puVar11 + (ulong)uVar27 * 2) = uVar27;
                    uVar27 = uVar27 + 1;
                    goto LAB_109ade8d0;
                  }
                  if (pcVar14[-1] != '\0') {
                    uVar32 = puVar30[-1];
                    uVar18 = *(ushort *)(lVar33 + lVar17 * 2);
                    uVar23 = (ulong)uVar32;
                    do {
                      uVar45 = *(ushort *)((long)puVar11 + uVar23 * 2);
                      uVar12 = (uint)uVar23;
                      uVar19 = (ushort)uVar23;
                      uVar23 = (ulong)uVar45;
                    } while (uVar45 < uVar12);
                    uVar23 = (ulong)uVar18;
                    if (uVar32 != uVar18) {
                      do {
                        uVar45 = *(ushort *)((long)puVar11 + uVar23 * 2);
                        uVar38 = (uint)uVar23;
                        uVar43 = (ushort)uVar23;
                        uVar23 = (ulong)uVar45;
                      } while (uVar45 < uVar38);
                      if (uVar38 <= uVar12) {
                        uVar19 = uVar43;
                      }
                      puVar42 = (ushort *)((long)puVar11 + (ulong)uVar18 * 2);
                      uVar45 = *puVar42;
                      if (*puVar42 < uVar18) {
                        do {
                          *puVar42 = uVar19;
                          puVar42 = (ushort *)((long)puVar11 + (ulong)uVar45 * 2);
                          bVar8 = *puVar42 < uVar45;
                          uVar45 = *puVar42;
                        } while (bVar8);
                      }
                      *puVar42 = uVar19;
                    }
                    puVar42 = (ushort *)((long)puVar11 + (ulong)uVar32 * 2);
                    uVar18 = *puVar42;
                    if (*puVar42 < uVar32) {
                      do {
                        *puVar42 = uVar19;
                        puVar42 = (ushort *)((long)puVar11 + (ulong)uVar18 * 2);
                        bVar8 = *puVar42 < uVar18;
                        uVar18 = *puVar42;
                      } while (bVar8);
                    }
                    *puVar42 = uVar19;
                    *puVar30 = uVar19;
                    goto LAB_109ade8d0;
                  }
                }
                uVar18 = *(ushort *)(lVar33 + lVar17 * 2);
              }
              *puVar30 = uVar18;
            }
LAB_109ade8d0:
            pcVar14 = pcVar14 + 1;
            lVar17 = lVar17 + 1;
          } while (pcVar14 != pcVar29 + lVar40);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 != lVar39);
      if (uVar27 < 2) {
        uVar38 = 1;
      }
      else {
        uVar23 = 1;
        uVar18 = 1;
        do {
          uVar34 = (ulong)*(ushort *)((long)puVar11 + uVar23 * 2);
          if (uVar34 < uVar23) {
            uVar32 = *(ushort *)((long)puVar11 + uVar34 * 2);
          }
          else {
            uVar32 = uVar18;
            uVar18 = uVar18 + 1;
          }
          *(ushort *)((long)puVar11 + uVar23 * 2) = uVar32;
          uVar23 = uVar23 + 1;
        } while (uVar27 != uVar23);
        uVar38 = (uint)uVar18;
      }
      lVar22 = 0;
      do {
        if (iVar5 != 0) {
          puVar30 = (ushort *)(uStack_120 + lVar22 * lVar25);
          lVar28 = lVar40 << 1;
          do {
            *puVar30 = *(ushort *)((long)puVar11 + (ulong)*puVar30 * 2);
            lVar28 = lVar28 + -2;
            puVar30 = puVar30 + 1;
          } while (lVar28 != 0);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 != lVar39);
      goto LAB_109adee40;
    }
  }
  else {
    if ((uStack_130 & 7) != 0) {
      puVar11 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_70 = puVar11 + 1;
      uStack_68 = 0x1c;
      *(undefined1 *)(puVar11 + 8) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x6562616c20646574;
      *(undefined8 *)(puVar11 + 1) = 0x726f707075736e75;
      *(undefined8 *)(puVar11 + 6) = 0x6570797420656761;
      *(undefined8 *)(puVar11 + 4) = 0x6d692f6c6562616c;
      FUN_109ac3188(0xffffff2e,&puStack_70,&UNK_10f59bc02,&UNK_10f59bb4d,0x169);
      goto LAB_109adf48c;
    }
    lVar39 = (long)(int)uStack_128;
    if ((int)uStack_128 != (int)uStack_c8) {
      puVar11 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_70 = puVar11 + 1;
      uStack_68 = 0x10;
      *(undefined1 *)(puVar11 + 5) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x73776f722e49203d;
      *(undefined8 *)(puVar11 + 1) = 0x3d2073776f722e4c;
      FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f55aaab,&UNK_10f59bb4d,0xc1);
      goto LAB_109adf48c;
    }
    lVar40 = (long)uStack_128._4_4_;
    if (uStack_128._4_4_ != uStack_c8._4_4_) {
      puVar11 = (undefined4 *)0x18;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_70 = puVar11 + 1;
      uStack_68 = 0x10;
      *(undefined1 *)(puVar11 + 5) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x736c6f632e49203d;
      *(undefined8 *)(puVar11 + 1) = 0x3d20736c6f632e4c;
      FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f55aaab,&UNK_10f59bb4d,0xc2);
      goto LAB_109adf48c;
    }
    if ((param_3 != 4) && (param_3 != 8)) {
      puVar11 = (undefined4 *)0x2c;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      puStack_70 = puVar11 + 1;
      uStack_68 = 0x26;
      *(undefined1 *)((long)puVar11 + 0x2a) = 0;
      *(undefined8 *)(puVar11 + 3) = 0x203d3d2079746976;
      *(undefined8 *)(puVar11 + 1) = 0x697463656e6e6f63;
      *(undefined8 *)(puVar11 + 7) = 0x746976697463656e;
      *(undefined8 *)(puVar11 + 5) = 0x6e6f63207c7c2038;
      *(undefined8 *)((long)puVar11 + 0x22) = 0x34203d3d20797469;
      FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f55aaab,&UNK_10f59bb4d,0xc3);
      goto LAB_109adf48c;
    }
    puVar11 = (undefined4 *)(((lVar39 + 2U) / 3) * ((lVar40 + 2U) / 3) * 4);
    func_0x000107c2ae8c();
    *(undefined1 *)puVar11 = 0;
    if (0 < iVar3) {
      lVar22 = 0;
      bVar21 = 1;
      do {
        lVar25 = uStack_120 + *plStack_e8 * lVar22;
        lVar28 = lVar25 - *plStack_e8;
        lVar33 = *plStack_88;
        pcVar29 = (char *)(uStack_c0 + lVar33 * lVar22);
        if (param_3 == 8) {
          if (iVar5 != 0) {
            lVar35 = 0;
            pcVar14 = pcVar29;
            do {
              if (*pcVar14 == '\0') {
                *(undefined1 *)(lVar25 + lVar35) = 0;
              }
              else {
                pcVar1 = pcVar29 + (lVar35 - lVar33);
                if ((lVar22 == 0) || (lVar35 == 0)) {
                  bVar7 = false;
                  bVar8 = false;
                  bVar9 = false;
                  if (lVar22 != 0) goto LAB_109ade138;
LAB_109ade15c:
                  if (lVar35 != 0) goto LAB_109ade160;
LAB_109ade178:
                  bVar10 = false;
                }
                else {
                  bVar7 = pcVar1[-1] != '\0';
LAB_109ade138:
                  bVar8 = *pcVar1 != '\0';
                  if ((int)lVar35 + 1 < iVar5) {
                    bVar9 = pcVar1[1] != '\0';
                    goto LAB_109ade15c;
                  }
                  bVar9 = false;
                  if (lVar35 == 0) goto LAB_109ade178;
LAB_109ade160:
                  bVar10 = pcVar14[-1] != '\0';
                }
                pbVar24 = (byte *)(lVar25 + lVar35);
                pbVar15 = (byte *)(lVar28 + lVar35);
                if (bVar8) {
                  bVar36 = *pbVar15;
                }
                else {
                  if (bVar9) {
                    bVar36 = pbVar15[1];
                    uVar23 = (ulong)bVar36;
                    if (bVar7) {
                      bVar26 = pbVar15[-1];
                      uVar34 = uVar23;
                      do {
                        pbVar15 = (byte *)((long)puVar11 + uVar34);
                        uVar12 = (uint)uVar34;
                        bVar37 = (byte)uVar34;
                        uVar34 = (ulong)*pbVar15;
                      } while (*pbVar15 < uVar12);
                      uVar34 = (ulong)bVar26;
                      if (bVar36 != bVar26) {
                        do {
                          pbVar15 = (byte *)((long)puVar11 + uVar34);
                          uVar38 = (uint)uVar34;
                          bVar16 = (byte)uVar34;
                          uVar34 = (ulong)*pbVar15;
                        } while (*pbVar15 < uVar38);
                        if (uVar38 <= uVar12) {
                          bVar37 = bVar16;
                        }
                        pbVar15 = (byte *)((long)puVar11 + (ulong)bVar26);
                        bVar16 = *pbVar15;
                        if (*pbVar15 < bVar26) {
                          do {
                            *pbVar15 = bVar37;
                            pbVar15 = (byte *)((long)puVar11 + (ulong)bVar16);
                            bVar8 = *pbVar15 < bVar16;
                            bVar16 = *pbVar15;
                          } while (bVar8);
                        }
                        *pbVar15 = bVar37;
                      }
                      pbVar15 = (byte *)((long)puVar11 + uVar23);
                      bVar26 = *pbVar15;
                      if (*pbVar15 < bVar36) {
                        do {
                          *pbVar15 = bVar37;
                          pbVar15 = (byte *)((long)puVar11 + (ulong)bVar26);
                          bVar8 = *pbVar15 < bVar26;
                          bVar26 = *pbVar15;
                        } while (bVar8);
                      }
                    }
                    else {
                      if (!bVar10) {
                        *pbVar24 = bVar36;
                        goto LAB_109ade324;
                      }
                      bVar26 = pbVar24[-1];
                      uVar34 = uVar23;
                      do {
                        pbVar15 = (byte *)((long)puVar11 + uVar34);
                        uVar12 = (uint)uVar34;
                        bVar37 = (byte)uVar34;
                        uVar34 = (ulong)*pbVar15;
                      } while (*pbVar15 < uVar12);
                      uVar34 = (ulong)bVar26;
                      if (bVar36 != bVar26) {
                        do {
                          pbVar15 = (byte *)((long)puVar11 + uVar34);
                          uVar38 = (uint)uVar34;
                          bVar16 = (byte)uVar34;
                          uVar34 = (ulong)*pbVar15;
                        } while (*pbVar15 < uVar38);
                        if (uVar38 <= uVar12) {
                          bVar37 = bVar16;
                        }
                        pbVar15 = (byte *)((long)puVar11 + (ulong)bVar26);
                        bVar16 = *pbVar15;
                        if (*pbVar15 < bVar26) {
                          do {
                            *pbVar15 = bVar37;
                            pbVar15 = (byte *)((long)puVar11 + (ulong)bVar16);
                            bVar8 = *pbVar15 < bVar16;
                            bVar16 = *pbVar15;
                          } while (bVar8);
                        }
                        *pbVar15 = bVar37;
                      }
                      pbVar15 = (byte *)((long)puVar11 + uVar23);
                      bVar26 = *pbVar15;
                      if (*pbVar15 < bVar36) {
                        do {
                          *pbVar15 = bVar37;
                          pbVar15 = (byte *)((long)puVar11 + (ulong)bVar26);
                          bVar8 = *pbVar15 < bVar26;
                          bVar26 = *pbVar15;
                        } while (bVar8);
                      }
                    }
                    *pbVar15 = bVar37;
                    *pbVar24 = bVar37;
                    goto LAB_109ade324;
                  }
                  if (bVar7) {
                    bVar36 = pbVar15[-1];
                  }
                  else {
                    if (!bVar10) {
                      *pbVar24 = bVar21;
                      *(byte *)((long)puVar11 + (ulong)bVar21) = bVar21;
                      bVar21 = bVar21 + 1;
                      goto LAB_109ade324;
                    }
                    bVar36 = pbVar24[-1];
                  }
                }
                *pbVar24 = bVar36;
              }
LAB_109ade324:
              pcVar14 = pcVar14 + 1;
              lVar35 = lVar35 + 1;
            } while (pcVar14 != pcVar29 + lVar40);
          }
        }
        else if (iVar5 != 0) {
          lVar35 = 0;
          pcVar14 = pcVar29;
          do {
            pbVar24 = (byte *)(lVar25 + lVar35);
            if (*pcVar14 == '\0') {
              *pbVar24 = 0;
            }
            else {
              if (lVar22 == 0) {
                if ((lVar35 == 0) || (pcVar14[-1] == '\0')) goto LAB_109ade448;
LAB_109ade43c:
                bVar36 = pbVar24[-1];
              }
              else {
                if (lVar35 == 0) {
                  if (pcVar29[lVar35 - lVar33] == '\0') goto LAB_109ade448;
                }
                else {
                  if (pcVar29[lVar35 - lVar33] == '\0') {
                    if (pcVar14[-1] != '\0') goto LAB_109ade43c;
LAB_109ade448:
                    *pbVar24 = bVar21;
                    *(byte *)((long)puVar11 + (ulong)bVar21) = bVar21;
                    bVar21 = bVar21 + 1;
                    goto LAB_109ade458;
                  }
                  if (pcVar14[-1] != '\0') {
                    bVar26 = pbVar24[-1];
                    bVar36 = *(byte *)(lVar28 + lVar35);
                    uVar23 = (ulong)bVar26;
                    do {
                      pbVar15 = (byte *)((long)puVar11 + uVar23);
                      uVar12 = (uint)uVar23;
                      bVar37 = (byte)uVar23;
                      uVar23 = (ulong)*pbVar15;
                    } while (*pbVar15 < uVar12);
                    uVar23 = (ulong)bVar36;
                    if (bVar26 != bVar36) {
                      do {
                        pbVar15 = (byte *)((long)puVar11 + uVar23);
                        uVar38 = (uint)uVar23;
                        bVar16 = (byte)uVar23;
                        uVar23 = (ulong)*pbVar15;
                      } while (*pbVar15 < uVar38);
                      if (uVar38 <= uVar12) {
                        bVar37 = bVar16;
                      }
                      pbVar15 = (byte *)((long)puVar11 + (ulong)bVar36);
                      bVar16 = *pbVar15;
                      if (*pbVar15 < bVar36) {
                        do {
                          *pbVar15 = bVar37;
                          pbVar15 = (byte *)((long)puVar11 + (ulong)bVar16);
                          bVar8 = *pbVar15 < bVar16;
                          bVar16 = *pbVar15;
                        } while (bVar8);
                      }
                      *pbVar15 = bVar37;
                    }
                    pbVar15 = (byte *)((long)puVar11 + (ulong)bVar26);
                    bVar36 = *pbVar15;
                    if (*pbVar15 < bVar26) {
                      do {
                        *pbVar15 = bVar37;
                        pbVar15 = (byte *)((long)puVar11 + (ulong)bVar36);
                        bVar8 = *pbVar15 < bVar36;
                        bVar36 = *pbVar15;
                      } while (bVar8);
                    }
                    *pbVar15 = bVar37;
                    *pbVar24 = bVar37;
                    goto LAB_109ade458;
                  }
                }
                bVar36 = *(byte *)(lVar28 + lVar35);
              }
              *pbVar24 = bVar36;
            }
LAB_109ade458:
            pcVar14 = pcVar14 + 1;
            lVar35 = lVar35 + 1;
          } while (pcVar14 != pcVar29 + lVar40);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 != lVar39);
      if (bVar21 < 2) {
        uVar38 = 1;
      }
      else {
        uVar23 = 1;
        bVar36 = 1;
        do {
          if (*(byte *)((long)puVar11 + uVar23) < uVar23) {
            bVar26 = *(byte *)((long)puVar11 + (ulong)*(byte *)((long)puVar11 + uVar23));
          }
          else {
            bVar26 = bVar36;
            bVar36 = bVar36 + 1;
          }
          *(byte *)((long)puVar11 + uVar23) = bVar26;
          uVar23 = uVar23 + 1;
        } while (bVar21 != uVar23);
        uVar38 = (uint)bVar36;
      }
      lVar22 = 0;
      do {
        if (iVar5 != 0) {
          pbVar24 = (byte *)(uStack_120 + *plStack_e8 * lVar22);
          lVar25 = lVar40;
          do {
            *pbVar24 = *(byte *)((long)puVar11 + (ulong)*pbVar24);
            lVar25 = lVar25 + -1;
            pbVar24 = pbVar24 + 1;
          } while (lVar25 != 0);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 != lVar39);
      goto LAB_109adee40;
    }
  }
  uVar38 = 1;
LAB_109adee40:
  _free(*(undefined8 *)(puVar11 + -2));
  if (uStack_f8 != 0) {
    piVar31 = (int *)(uStack_f8 + 0x14);
    do {
      iVar3 = *piVar31;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar8) {
        *piVar31 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_130);
    }
  }
  uStack_f8 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (0 < uStack_130._4_4_) {
    lVar39 = 0;
    do {
      *(undefined4 *)(uStack_f0 + lVar39 * 4) = 0;
      lVar39 = lVar39 + 1;
    } while (lVar39 < uStack_130._4_4_);
  }
  if (plStack_e8 != &lStack_e0 && plStack_e8 != (long *)0x0) {
    _free(plStack_e8[-1]);
  }
  if (uStack_98 != 0) {
    piVar31 = (int *)(uStack_98 + 0x14);
    do {
      iVar3 = *piVar31;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar31,0x10);
      if (bVar8) {
        *piVar31 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_d0);
    }
  }
  uStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < uStack_d0._4_4_) {
    lVar39 = 0;
    do {
      *(undefined4 *)((long)puStack_90 + lVar39 * 4) = 0;
      lVar39 = lVar39 + 1;
    } while (lVar39 < uStack_d0._4_4_);
  }
  if (plStack_88 != &lStack_80 && plStack_88 != (long *)0x0) {
    _free(plStack_88[-1]);
  }
  return uVar38;
}



/* Entry: 109adf658; end: 109adf7b7;  */

void FUN_109adf658(long param_1,long param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffffe5,&puStack_30,&UNK_10f59bca4,&UNK_10f59bcbb,0x3b);
  }
  else {
    if ((*(int *)(param_1 + 0x2c) == 1) && (0x67 < *(int *)(param_1 + 4))) {
      FUN_109a4cb14(param_1,param_2,0);
      *(undefined8 *)(param_2 + 0x44) = *(undefined8 *)(param_1 + 0x60);
      lVar4 = 8;
      puVar3 = (undefined1 *)(param_2 + 0x4d);
      puVar2 = (undefined4 *)&UNK_10e02ffdc;
      do {
        puVar3[-1] = (char)puVar2[-1];
        *puVar3 = (char)*puVar2;
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 2;
        puVar2 = puVar2 + 2;
      } while (lVar4 != 0);
      return;
    }
    puVar2 = (undefined4 *)0x8;
    func_0x000107c2ae8c();
    *puVar2 = 1;
    puStack_30 = puVar2 + 1;
    *(undefined1 *)puStack_30 = 0;
    uStack_28 = 0;
    FUN_109ac3188(0xffffff37,&puStack_30,&UNK_10f59bca4,&UNK_10f59bcbb,0x3e);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109adf768);
  (*pcVar1)();
}



/* Entry: 109adf7b8; end: 109adf8af;  */

void FUN_109adf7b8(long param_1)

{
  long lVar1;
  long lStack_30;
  int iStack_28;
  
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x17c) != 0) {
      FUN_109a4befc(*(undefined8 *)(param_1 + 8),&lStack_30);
      if ((lStack_30 == *(long *)(param_1 + 0x40)) && (iStack_28 == *(int *)(param_1 + 0x48))) {
        FUN_109a4bfac(*(undefined8 *)(param_1 + 8),param_1 + 0x30);
      }
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
    if (*(long *)(lVar1 + 0x18) != 0) {
      FUN_109a504dc(*(long *)(lVar1 + 0x18),*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x18),
                    param_1 + 0x110);
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



/* Entry: 109adf8b0; end: 109ae22bb;  */

void FUN_109adf8b0(uint *param_1,uint *param_2,uint *param_3,int param_4,uint param_5,long *param_6)

{
  int *piVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  long *plVar18;
  code *pcVar19;
  bool bVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong *puVar25;
  ulong **ppuVar26;
  ulong **ppuVar27;
  ulong uVar28;
  ulong *puVar29;
  uint *puVar30;
  ulong *puVar31;
  undefined4 *puVar32;
  undefined8 *puVar33;
  bool bVar34;
  char cVar35;
  undefined4 uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  ulong *puVar43;
  ulong uVar44;
  byte bVar45;
  undefined4 uVar46;
  uint uVar47;
  undefined4 uVar48;
  uint uVar49;
  long *plVar50;
  undefined1 *puVar51;
  ulong uVar52;
  uint uVar53;
  undefined4 uVar54;
  long lVar55;
  ulong *puVar56;
  uint *puVar57;
  uint *puVar58;
  int iVar59;
  uint uVar60;
  byte *pbVar61;
  undefined1 *puVar62;
  char *pcVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  ulong **ppuVar67;
  ulong **ppuVar68;
  uint *puVar69;
  byte *pbVar70;
  int iVar71;
  uint uVar72;
  long lVar73;
  long *plVar74;
  char *pcVar75;
  long *plVar76;
  uint uVar77;
  long lVar78;
  int iVar79;
  long *plVar80;
  ulong **ppuVar81;
  ulong **ppuVar82;
  uint uVar83;
  uint uVar84;
  long *plVar85;
  long *plVar86;
  uint uStack_324;
  uint uStack_31c;
  uint uStack_2fc;
  uint uStack_2d8;
  uint uStack_2d4;
  uint uStack_2a0;
  ulong *puStack_290;
  ulong *puStack_288;
  long lStack_280;
  ulong *puStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  long lStack_260;
  ulong *puStack_258;
  int iStack_250;
  uint uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong *puStack_1a8;
  undefined4 *puStack_1a0;
  undefined8 uStack_198;
  undefined4 *puStack_190;
  undefined8 uStack_188;
  ulong *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  ulong *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_118;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  ulong uStack_f8;
  undefined8 *puStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  long lStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar53 = *param_2 & 0x1f0000;
  if (((uVar53 != 0x40000) && (uVar53 != 0x50000)) && (uVar53 != 0xb0000)) {
    puVar32 = (undefined4 *)0xa0;
    func_0x000107c2ae8c();
    *puVar32 = 1;
    uStack_210 = puVar32 + 1;
    uStack_208 = 0x9b;
    *(undefined8 *)(puVar32 + 0x1b) = 0x6f746e6f635f207c;
    *(undefined8 *)(puVar32 + 0x19) = 0x7c2054414d5f524f;
    *(undefined8 *)(puVar32 + 0x1f) = 0x495f203d3d202928;
    *(undefined8 *)(puVar32 + 0x1d) = 0x646e696b2e737275;
    *(undefined8 *)(puVar32 + 0x23) = 0x565f4454533a3a79;
    *(undefined8 *)(puVar32 + 0x21) = 0x617272417475706e;
    *(undefined8 *)((long)puVar32 + 0x97) = 0x2954414d555f524f;
    *(undefined8 *)((long)puVar32 + 0x8f) = 0x544345565f445453;
    *(undefined8 *)(puVar32 + 0xb) = 0x4345565f524f5443;
    *(undefined8 *)(puVar32 + 9) = 0x45565f4454533a3a;
    *(undefined8 *)(puVar32 + 0xf) = 0x7372756f746e6f63;
    *(undefined8 *)(puVar32 + 0xd) = 0x5f207c7c20524f54;
    *(undefined8 *)(puVar32 + 0x13) = 0x75706e495f203d3d;
    *(undefined8 *)(puVar32 + 0x11) = 0x202928646e696b2e;
    *(undefined8 *)(puVar32 + 0x17) = 0x544345565f445453;
    *(undefined8 *)(puVar32 + 0x15) = 0x3a3a796172724174;
    *(undefined8 *)(puVar32 + 3) = 0x28646e696b2e7372;
    *(undefined8 *)(puVar32 + 1) = 0x756f746e6f635f28;
    *(undefined1 *)((long)puVar32 + 0x9f) = 0;
    *(undefined8 *)(puVar32 + 7) = 0x7961727241747570;
    *(undefined8 *)(puVar32 + 5) = 0x6e495f203d3d2029;
    FUN_109ac3188(0xffffff29,&uStack_210,&UNK_10f59bebb,&UNK_10f59bcbb,0x6ad);
    goto LAB_109ae225c;
  }
  puVar57 = param_2;
  FUN_109a8e1c4();
  if ((((ulong)puVar57 & 1) == 0) &&
     ((puVar57 = param_2, FUN_109a8b904(param_2,0xffffffff), ((uint)puVar57 & 0xff8) != 8 ||
      (puVar57 = param_2, FUN_109a8b904(param_2,0xffffffff), ((uint)puVar57 & 7) != 4)))) {
    puVar32 = (undefined4 *)0x54;
    func_0x000107c2ae8c();
    *puVar32 = 1;
    uStack_210 = puVar32 + 1;
    uStack_208 = 0x4f;
    *(undefined8 *)(puVar32 + 7) = 0x2e7372756f746e6f;
    *(undefined8 *)(puVar32 + 5) = 0x635f28207c7c2029;
    *(undefined8 *)(puVar32 + 0xb) = 0x2032203d3d202928;
    *(undefined8 *)(puVar32 + 9) = 0x736c656e6e616863;
    *(undefined8 *)(puVar32 + 0xf) = 0x7065642e7372756f;
    *(undefined8 *)(puVar32 + 0xd) = 0x746e6f635f202626;
    *(undefined8 *)((long)puVar32 + 0x4b) = 0x295332335f564320;
    *(undefined8 *)((long)puVar32 + 0x43) = 0x3d3d202928687470;
    *(undefined1 *)((long)puVar32 + 0x53) = 0;
    *(undefined8 *)(puVar32 + 3) = 0x287974706d652e73;
    *(undefined8 *)(puVar32 + 1) = 0x72756f746e6f635f;
    FUN_109ac3188(0xffffff29,&uStack_210,&UNK_10f59bebb,&UNK_10f59bcbb,0x6af);
    goto LAB_109ae225c;
  }
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar33 = *(undefined8 **)(param_1 + 2);
    uStack_1d0 = (ulong)&uStack_210 | 8;
    uStack_208 = puVar33[1];
    uStack_210 = (undefined4 *)*puVar33;
    uStack_1f8 = puVar33[3];
    uStack_200 = puVar33[2];
    uStack_1e8 = puVar33[5];
    uStack_1f0 = puVar33[4];
    lStack_1d8 = puVar33[7];
    uStack_1e0 = puVar33[6];
    puStack_1c8 = &uStack_1c0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    if (puVar33[7] != 0) {
      piVar1 = (int *)(puVar33[7] + 0x14);
      do {
        cVar35 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar20) {
          *piVar1 = *piVar1 + 1;
          cVar35 = ExclusiveMonitorsStatus();
        }
      } while (cVar35 != '\0');
    }
    if (*(int *)((long)puVar33 + 4) < 3) {
      uStack_1c0 = *(undefined8 *)puVar33[9];
      uStack_1b8 = ((undefined8 *)puVar33[9])[1];
    }
    else {
      uStack_210 = (undefined4 *)((ulong)uStack_210 & 0xffffffff);
      func_0x000109a84868(&uStack_210);
    }
  }
  else {
    FUN_109a8a180(&uStack_210,param_1,0xffffffff);
  }
  puVar33 = (undefined8 *)0x0;
  FUN_109a4bacc();
  if (puVar33 == (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
  }
  else {
    puVar21 = (undefined8 *)0x20;
    __Znwm();
    *(undefined4 *)(puVar21 + 1) = 1;
    *puVar21 = &PTR_FUN_110b24618;
    puVar21[2] = puVar33;
  }
  uStack_230 = uStack_200;
  uStack_224 = uStack_208._4_4_;
  if (uStack_210._4_4_ == 1) {
    uStack_224 = 1;
  }
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_228 = (undefined4)uStack_208;
  uStack_248 = (uint)uStack_210 & 0x4fff | 0x42420000;
  uStack_244 = (undefined4)*puStack_1c8;
  puStack_220 = puVar21;
  puStack_218 = puVar33;
  if ((*param_3 & 0x1f0000) != 0) {
    FUN_109a913ac(param_3);
  }
  lVar78 = *param_6;
  puStack_1a8 = (ulong *)0x0;
  if (param_5 == 5) {
    if (lVar78 == 0) {
      puStack_f0 = (undefined8 *)0x0;
      uStack_e8 = 0;
      puStack_100 = (undefined8 *)0x0;
      uStack_f8 = 0;
      if (puVar33 == (undefined8 *)0x0) {
        puVar32 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar32 = 1;
        puStack_190 = puVar32 + 1;
        uStack_188 = 0x14;
        *(undefined1 *)(puVar32 + 6) = 0;
        puVar32[5] = 0x7265746e;
        *(undefined8 *)(puVar32 + 3) = 0x696f702065676172;
        *(undefined8 *)(puVar32 + 1) = 0x6f7473204c4c554e;
        FUN_109ac3188(0xffffffe5,&puStack_190,&UNK_10f59bf3f,&UNK_10f59bcbb,0x537);
        goto LAB_109ae225c;
      }
      uVar22 = (ulong)*(uint *)(puVar33 + 4);
      FUN_109a4bacc();
      *(undefined8 **)(uVar22 + 0x18) = puVar33;
      puVar21 = (undefined8 *)0x20;
      __Znwm();
      *(undefined4 *)(puVar21 + 1) = 1;
      *puVar21 = &PTR_FUN_110b24618;
      puVar21[2] = uVar22;
      uStack_188 = 0;
      puStack_190 = (undefined4 *)0x0;
      puStack_f0 = puVar21;
      uStack_e8 = uVar22;
      FUN_109ae22bc(&puStack_190);
      uVar23 = (ulong)*(uint *)(puVar33 + 4);
      FUN_109a4bacc();
      *(undefined8 **)(uVar23 + 0x18) = puVar33;
      puVar21 = (undefined8 *)0x20;
      __Znwm();
      *(undefined4 *)(puVar21 + 1) = 1;
      *puVar21 = &PTR_FUN_110b24618;
      puVar21[2] = uVar23;
      uStack_188 = 0;
      puStack_190 = (undefined4 *)0x0;
      puStack_100 = puVar21;
      uStack_f8 = uVar23;
      FUN_109ae22bc(&puStack_190);
      puVar57 = &uStack_248;
      FUN_109a3b884(puVar57,&puStack_190,0,0);
      if ((*puVar57 & 0xffe) != 0) {
        puVar32 = (undefined4 *)0x28;
        func_0x000107c2ae8c();
        *puVar32 = 1;
        puStack_1a0 = puVar32 + 1;
        uStack_198 = 0x20;
        *(undefined1 *)(puVar32 + 9) = 0;
        *(undefined8 *)(puVar32 + 3) = 0x7473756d20796172;
        *(undefined8 *)(puVar32 + 1) = 0x7261207475706e49;
        *(undefined8 *)(puVar32 + 7) = 0x3143733820726f20;
        *(undefined8 *)(puVar32 + 5) = 0x3143753820656220;
        FUN_109ac3188(0xfffffffb,&puStack_1a0,&UNK_10f59bf3f,&UNK_10f59bcbb,0x546);
        goto LAB_109ae225c;
      }
      lVar78 = *(long *)(puVar57 + 6);
      uVar10 = puVar57[1];
      uVar53 = puVar57[8];
      uVar38 = puVar57[9];
      uVar28 = (ulong)uVar38;
      lVar24 = 0;
      FUN_109a4c4b8(0,0x60,0x18,uVar22);
      FUN_109a4d148(lVar24,&puStack_160);
      FUN_109a4d218(0,0x60,8,uVar23,&puStack_290);
      FUN_109a4d218(0,0x60,8,uVar23,&puStack_130);
      if (plStack_138 <= plStack_148) {
        FUN_109a4d4a0(&puStack_160);
      }
      *plStack_148 = 0;
      plStack_148[1] = 0;
      plStack_148[2] = 0;
      plStack_148 = plStack_148 + 3;
      lVar73 = (long)plStack_148 - (long)*(int *)((long)puStack_158 + 0x2c);
      lVar41 = lVar73;
      if (0 < (int)uVar38) {
        uVar22 = 0;
        do {
          iVar66 = (int)uVar22;
          uVar23 = (ulong)iVar66;
          uVar37 = uVar38;
          if ((int)uVar38 <= iVar66 + 1) {
            uVar37 = iVar66 + 1;
          }
          do {
            uVar22 = uVar23;
            if (*(char *)(lVar78 + uVar23) != '\0') break;
            uVar23 = uVar23 + 1;
            uVar22 = (ulong)uVar37;
          } while ((long)uVar23 < (long)uVar28);
          uVar37 = (uint)uVar22;
          if (uVar37 == uVar38) break;
          if (plStack_138 <= plStack_148) {
            FUN_109a4d4a0(&puStack_160);
          }
          *plStack_148 = 0;
          plStack_148[1] = 0;
          *(uint *)(plStack_148 + 2) = uVar37;
          *(undefined4 *)((long)plStack_148 + 0x14) = 0;
          plStack_148 = plStack_148 + 3;
          plVar76 = (long *)((long)plStack_148 - (long)*(int *)((long)puStack_158 + 0x2c));
          *(long **)(lVar41 + 8) = plVar76;
          if ((int)uVar37 < (int)uVar38) {
            uVar23 = (ulong)(int)uVar37;
            do {
              uVar22 = uVar23;
              if (*(char *)(lVar78 + uVar23) == '\0') break;
              uVar23 = uVar23 + 1;
              uVar22 = uVar28;
            } while (uVar28 != uVar23);
          }
          if (plStack_138 <= plStack_148) {
            FUN_109a4d4a0(&puStack_160);
          }
          *plStack_148 = 0;
          plStack_148[1] = 0;
          *(int *)(plStack_148 + 2) = (int)uVar22 + -1;
          *(undefined4 *)((long)plStack_148 + 0x14) = 0;
          plStack_148 = plStack_148 + 3;
          lVar41 = (long)plStack_148 - (long)*(int *)((long)puStack_158 + 0x2c);
          *plVar76 = lVar41;
          plVar76[1] = lVar41;
          if (puStack_268 <= puStack_278) {
            FUN_109a4d4a0(&puStack_290);
          }
          *puStack_278 = (ulong)plVar76;
          puStack_278 = puStack_278 + 1;
          lVar41 = plVar76[1];
        } while ((int)uVar22 < (int)uVar38);
      }
      puStack_158[7] = plStack_148;
      if (lStack_150 != 0) {
        iVar66 = 0;
        lVar55 = puStack_158[0xb];
        uVar36 = 0;
        if ((long)*(int *)((long)puStack_158 + 0x2c) != 0) {
          uVar36 = (undefined4)
                   (((long)plStack_148 - *(long *)(lStack_150 + 0x18)) /
                   (long)*(int *)((long)puStack_158 + 0x2c));
        }
        *(undefined4 *)(lStack_150 + 0x14) = uVar36;
        lVar42 = lVar55;
        do {
          iVar66 = *(int *)(lVar42 + 0x14) + iVar66;
          lVar42 = *(long *)(lVar42 + 8);
        } while (lVar42 != lVar55);
        *(int *)(puStack_158 + 5) = iVar66;
      }
      plVar76 = *(long **)(lVar73 + 8);
      iVar66 = *(int *)(lVar24 + 0x28) + -1;
      *(undefined8 *)(lVar41 + 8) = 0;
      if ((int)uVar53 < 2) {
        iVar79 = iVar66 / 2;
      }
      else {
        plVar85 = (long *)0x0;
        uStack_2a0 = 1;
        plVar74 = plVar76;
        iVar71 = iVar66;
        do {
          lVar78 = lVar78 + (int)uVar10;
          iVar66 = *(int *)(lVar24 + 0x28);
          lVar73 = lVar41;
          if (0 < (int)uVar38) {
            uVar22 = 0;
            do {
              iVar79 = (int)uVar22;
              uVar23 = (ulong)iVar79;
              uVar37 = uVar38;
              if ((int)uVar38 <= iVar79 + 1) {
                uVar37 = iVar79 + 1;
              }
              do {
                uVar22 = uVar23;
                if (*(char *)(lVar78 + uVar23) != '\0') break;
                uVar23 = uVar23 + 1;
                uVar22 = (ulong)uVar37;
              } while ((long)uVar23 < (long)(int)uVar38);
              uVar37 = (uint)uVar22;
              if (uVar37 == uVar38) break;
              if (plStack_138 <= plStack_148) {
                FUN_109a4d4a0(&puStack_160);
              }
              *plStack_148 = 0;
              plStack_148[1] = 0;
              *(uint *)(plStack_148 + 2) = uVar37;
              *(uint *)((long)plStack_148 + 0x14) = uStack_2a0;
              plStack_148 = plStack_148 + 3;
              lVar55 = (long)plStack_148 - (long)*(int *)((long)puStack_158 + 0x2c);
              *(long *)(lVar73 + 8) = lVar55;
              if ((int)uVar37 < (int)uVar38) {
                uVar23 = (ulong)(int)uVar37;
                do {
                  uVar22 = uVar23;
                  if (*(char *)(lVar78 + uVar23) == '\0') break;
                  uVar23 = uVar23 + 1;
                  uVar22 = uVar28;
                } while ((long)(int)uVar38 != uVar23);
              }
              if (plStack_138 <= plStack_148) {
                FUN_109a4d4a0(&puStack_160);
              }
              *plStack_148 = 0;
              plStack_148[1] = 0;
              *(int *)(plStack_148 + 2) = (int)uVar22 + -1;
              *(uint *)((long)plStack_148 + 0x14) = uStack_2a0;
              plStack_148 = plStack_148 + 3;
              lVar73 = (long)plStack_148 - (long)*(int *)((long)puStack_158 + 0x2c);
              *(long *)(lVar55 + 8) = lVar73;
            } while ((int)uVar22 < (int)uVar38);
          }
          puStack_158[7] = plStack_148;
          if (lStack_150 != 0) {
            iVar79 = 0;
            lVar55 = puStack_158[0xb];
            uVar36 = 0;
            if ((long)*(int *)((long)puStack_158 + 0x2c) != 0) {
              uVar36 = (undefined4)
                       (((long)plStack_148 - *(long *)(lStack_150 + 0x18)) /
                       (long)*(int *)((long)puStack_158 + 0x2c));
            }
            *(undefined4 *)(lStack_150 + 0x14) = uVar36;
            lVar42 = lVar55;
            do {
              iVar79 = *(int *)(lVar42 + 0x14) + iVar79;
              lVar42 = *(long *)(lVar42 + 8);
            } while (lVar42 != lVar55);
            *(int *)(puStack_158 + 5) = iVar79;
          }
          uVar37 = 0;
          plVar76 = *(long **)(lVar41 + 8);
          iVar66 = *(int *)(lVar24 + 0x28) - iVar66;
          *(undefined8 *)(lVar73 + 8) = 0;
          iVar4 = iVar71 / 2;
          iVar79 = iVar66 / 2;
          plVar80 = plVar76;
          if ((iVar71 < 2) || (iVar66 < 2)) {
            iVar64 = 0;
            iVar71 = 0;
          }
          else {
            iVar71 = 0;
            iVar64 = 0;
            uVar37 = 0;
            plVar86 = plVar85;
            do {
              if (uVar37 == 0xffffffff) {
                puVar21 = (undefined8 *)plVar74[1];
                if (*(int *)(puVar21 + 2) + 1 < (int)plVar80[2]) {
                  uVar37 = 0;
                  *puVar21 = plVar86;
                  iVar71 = iVar71 + 1;
                  plVar74 = (long *)puVar21[1];
                  plVar85 = plVar86;
                }
                else {
                  if (puStack_108 <= puStack_118) {
                    FUN_109a4d4a0(&puStack_130);
                  }
                  *puStack_118 = plVar80;
                  puStack_118 = puStack_118 + 1;
                  *plVar80 = (long)plVar86;
                  plVar86 = (long *)plVar80[1];
                  plVar85 = (long *)plVar74[1];
                  if ((int)plVar86[2] < (int)plVar85[2]) {
                    iVar64 = iVar64 + 1;
                    plVar80 = (long *)plVar86[1];
                    uVar37 = 0xffffffff;
                    plVar85 = plVar86;
                  }
                  else {
                    iVar71 = iVar71 + 1;
                    plVar74 = (long *)plVar85[1];
                    uVar37 = 1;
                  }
                }
              }
              else if (uVar37 == 1) {
                plVar85 = (long *)plVar80[1];
                lVar41 = plVar85[2];
                if ((int)lVar41 + 1 < (int)plVar74[2]) {
                  uVar37 = 0;
                  *plVar86 = (long)plVar85;
LAB_109ae0234:
                  iVar64 = iVar64 + 1;
                  plVar80 = (long *)plVar85[1];
                  plVar85 = plVar86;
                }
                else {
                  *plVar86 = (long)plVar74;
                  plVar86 = (long *)plVar74[1];
                  if ((int)plVar86[2] < (int)lVar41) {
                    iVar71 = iVar71 + 1;
                    plVar74 = (long *)plVar86[1];
                    uVar37 = 1;
                    plVar85 = plVar86;
                  }
                  else {
                    iVar64 = iVar64 + 1;
                    plVar80 = (long *)plVar85[1];
                    uVar37 = 0xffffffff;
                  }
                }
              }
              else {
                plVar50 = (long *)plVar74[1];
                iVar65 = (int)plVar50[2];
                plVar85 = (long *)plVar80[1];
                if ((int)plVar85[2] <= iVar65) {
                  if ((int)plVar85[2] + 1 < (int)plVar74[2]) {
                    *plVar80 = (long)plVar85;
                    if (puStack_268 <= puStack_278) {
                      FUN_109a4d4a0(&puStack_290);
                    }
                    uVar37 = 0;
                    *puStack_278 = (ulong)plVar80;
                    puStack_278 = puStack_278 + 1;
                    plVar85 = (long *)plVar80[1];
                  }
                  else {
                    *plVar80 = (long)plVar74;
                    uVar37 = 0xffffffff;
                    plVar86 = plVar85;
                  }
                  goto LAB_109ae0234;
                }
                iVar15 = (int)plVar80[2] + -1;
                uVar37 = (uint)(iVar15 <= iVar65);
                plVar85 = plVar50;
                plVar18 = plVar80;
                if (iVar65 < iVar15) {
                  plVar85 = plVar86;
                  plVar18 = plVar50;
                }
                *plVar18 = (long)plVar74;
                iVar71 = iVar71 + 1;
                plVar74 = (long *)plVar50[1];
              }
            } while ((iVar71 < iVar4) && (plVar86 = plVar85, iVar64 < iVar79));
          }
          iVar65 = iVar79 - iVar64;
          if (iVar65 != 0 && iVar64 <= iVar79) {
            bVar20 = uVar37 == 0;
            do {
              lVar41 = plVar80[1];
              if (bVar20) {
                *plVar80 = lVar41;
                if (puStack_268 <= puStack_278) {
                  FUN_109a4d4a0(&puStack_290);
                }
                *puStack_278 = (ulong)plVar80;
                puStack_278 = puStack_278 + 1;
                lVar41 = plVar80[1];
              }
              else {
                *plVar85 = lVar41;
              }
              plVar80 = *(long **)(lVar41 + 8);
              bVar20 = true;
              iVar65 = iVar65 + -1;
            } while (iVar65 != 0);
            uVar37 = 0;
          }
          iVar64 = iVar4 - iVar71;
          if (iVar64 != 0 && iVar71 <= iVar4) {
            plVar80 = plVar74;
            if (uVar37 != 0) {
              plVar80 = plVar85;
            }
            do {
              puVar21 = (undefined8 *)plVar74[1];
              *puVar21 = plVar80;
              plVar74 = (long *)puVar21[1];
              iVar64 = iVar64 + -1;
              plVar80 = plVar74;
            } while (iVar64 != 0);
          }
          uStack_2a0 = uStack_2a0 + 1;
          lVar41 = lVar73;
          plVar74 = plVar76;
          iVar71 = iVar66;
        } while (uStack_2a0 != uVar53);
      }
      if (1 < iVar66) {
        do {
          puVar21 = (undefined8 *)plVar76[1];
          *puVar21 = plVar76;
          plVar76 = (long *)puVar21[1];
          iVar79 = iVar79 + -1;
        } while (iVar79 != 0);
      }
      ppuVar26 = &puStack_290;
      FUN_109a4d3b0();
      ppuVar27 = &puStack_130;
      FUN_109a4d3b0();
      ppuVar67 = (ulong **)0x0;
      ppuVar81 = (ulong **)0x0;
      bVar20 = true;
      do {
        bVar34 = bVar20;
        ppuVar6 = ppuVar26;
        if (!bVar34) {
          ppuVar6 = ppuVar27;
        }
        FUN_109a4cb14(ppuVar6,&uStack_e0,0);
        if (0 < *(int *)(ppuVar6 + 5)) {
          iVar66 = 0;
          ppuVar68 = ppuVar67;
          ppuVar82 = ppuVar81;
          do {
            puVar25 = uStack_c8 + 1;
            plVar76 = (long *)*uStack_c8;
            uStack_c8 = puVar25;
            if (puStack_b8 <= puVar25) {
              uStack_d0 = *(long *)(uStack_d0 + 8);
              uStack_c8 = *(ulong **)(uStack_d0 + 0x18);
              puStack_c0 = uStack_c8;
              puStack_b8 = (ulong *)((long)uStack_c8 +
                                    (long)*(int *)(uStack_d0 + 0x14) *
                                    (long)(int)*(uint *)((long)uStack_d8 + 0x2c));
            }
            ppuVar67 = ppuVar68;
            ppuVar81 = ppuVar82;
            if (*plVar76 != 0) {
              puVar21 = puVar33;
              FUN_109a4c0e8(puVar33,0x80);
              puVar21[6] = 0;
              puVar21[5] = 0;
              puVar21[10] = 0;
              puVar21[9] = 0;
              puVar21[0xf] = 0;
              puVar21[0xe] = 0;
              puVar21[0xd] = 0;
              puVar21[0xc] = 0;
              puVar21[0xb] = 0;
              puVar21[8] = 0;
              puVar21[7] = 0;
              puVar21[4] = 0;
              puVar21[3] = 0;
              puVar21[2] = 0;
              puVar21[1] = 0;
              *puVar21 = 0x804299500c;
              *(undefined4 *)((long)puVar21 + 0x2c) = 8;
              puVar21[9] = puVar33;
              FUN_109a4c6e8();
              uStack_140 = 0;
              puStack_160 = (ulong *)0x30;
              if ((long *)puVar21[0xb] == (long *)0x0) {
                lStack_150 = 0;
              }
              else {
                lStack_150 = *(long *)puVar21[0xb];
              }
              plStack_138 = (long *)puVar21[6];
              plStack_148 = (long *)puVar21[7];
              plVar85 = plVar76;
              puStack_158 = puVar21;
              do {
                if (plStack_138 <= plStack_148) {
                  FUN_109a4d4a0(&puStack_160);
                }
                *plStack_148 = plVar85[2];
                plStack_148 = plStack_148 + 1;
                plVar74 = (long *)*plVar85;
                *plVar85 = 0;
                plVar85 = plVar74;
              } while (plVar74 != plVar76);
              ppuVar81 = &puStack_160;
              FUN_109a4d3b0();
              FUN_109b430b8();
              if (!bVar34) {
                *(uint *)ppuVar81 = *(uint *)ppuVar81 | 0x8000;
              }
              ppuVar67 = ppuVar81;
              if (ppuVar68 != (ulong **)0x0) {
                ppuVar81[1] = (ulong *)ppuVar82;
                ppuVar82[2] = (ulong *)ppuVar81;
                ppuVar67 = ppuVar68;
              }
            }
            iVar66 = iVar66 + 1;
            ppuVar68 = ppuVar67;
            ppuVar82 = ppuVar81;
          } while (iVar66 < *(int *)(ppuVar6 + 5));
        }
        bVar20 = false;
      } while (bVar34);
      FUN_109ae22bc(&puStack_100);
      FUN_109ae22bc(&puStack_f0);
      goto joined_r0x000109ae1778;
    }
  }
  else {
    if (puVar33 == (undefined8 *)0x0) {
      puVar32 = (undefined4 *)0x8;
      func_0x000107c2ae8c();
      *puVar32 = 1;
      uStack_e0 = (ulong *)(puVar32 + 1);
      *(undefined1 *)uStack_e0 = 0;
      uStack_d8 = (ulong *)0x0;
      FUN_109ac3188(0xffffffe5,&uStack_e0,&UNK_10f59bd3e,&UNK_10f59bcbb,0xbb);
      goto LAB_109ae225c;
    }
    puVar57 = &uStack_248;
    FUN_109a3b884(puVar57,&uStack_e0,0,0);
    bVar20 = (*puVar57 & 0xfff) != 4;
    iVar66 = 4;
    if (param_4 != 2 || bVar20) {
      iVar66 = param_4;
    }
    if ((3 < iVar66 || (*puVar57 & 0xffe) != 0) && (iVar66 != 4 || bVar20)) {
      puVar32 = (undefined4 *)0x7c;
      func_0x000107c2ae8c();
      *puVar32 = 1;
      puStack_290 = (ulong *)(puVar32 + 1);
      puStack_288 = (ulong *)0x77;
      *(undefined8 *)(puVar32 + 0x13) = 0x204c4c4946444f4f;
      *(undefined8 *)(puVar32 + 0x11) = 0x4c465f525445525f;
      *(undefined8 *)(puVar32 + 0x17) = 0x726f707075732065;
      *(undefined8 *)(puVar32 + 0x15) = 0x736977726568746f;
      *(undefined8 *)(puVar32 + 0x1b) = 0x67616d6920314353;
      *(undefined8 *)(puVar32 + 0x19) = 0x32335f5643207374;
      *(undefined8 *)(puVar32 + 3) = 0x6f746e6f43646e69;
      *(undefined8 *)(puVar32 + 1) = 0x465d74726174535b;
      *(undefined8 *)(puVar32 + 7) = 0x6c6e6f207374726f;
      *(undefined8 *)(puVar32 + 5) = 0x7070757320737275;
      *(undefined8 *)(puVar32 + 0xb) = 0x736567616d692031;
      *(undefined8 *)(puVar32 + 9) = 0x4355385f56432079;
      *(undefined1 *)((long)puVar32 + 0x7b) = 0;
      *(undefined8 *)((long)puVar32 + 0x73) = 0x796c6e6f20736567;
      *(undefined8 *)(puVar32 + 0xf) = 0x5643203d21206564;
      *(undefined8 *)(puVar32 + 0xd) = 0x6f6d206e65687720;
      FUN_109ac3188(0xffffff2e,&puStack_290,&UNK_10f59bd3e,&UNK_10f59bcbb,0xc6);
      goto LAB_109ae225c;
    }
    if (4 < param_5) {
      puVar32 = (undefined4 *)0x8;
      func_0x000107c2ae8c();
      *puVar32 = 1;
      puStack_290 = (ulong *)(puVar32 + 1);
      *(undefined1 *)puStack_290 = 0;
      puStack_288 = (ulong *)0x0;
      FUN_109ac3188(0xffffff2d,&puStack_290,&UNK_10f59bd3e,&UNK_10f59bcbb,0xcd);
      goto LAB_109ae225c;
    }
    uVar53 = puVar57[8];
    uVar38 = puVar57[9];
    uVar10 = puVar57[1];
    uVar22 = *(ulong *)(puVar57 + 6);
    puVar25 = (ulong *)0x598;
    func_0x000107c2ae8c();
    _bzero(puVar25 + 2,0x588);
    *puVar25 = (ulong)puVar33;
    puVar25[1] = (ulong)puVar33;
    puVar51 = (undefined1 *)(uVar22 + (long)(int)uVar10);
    puVar25[10] = uVar22;
    puVar25[0xb] = (ulong)puVar51;
    *(uint *)(puVar25 + 0xc) = uVar10;
    *(uint *)((long)puVar25 + 100) = uVar38 - 1;
    iVar79 = uVar53 - 1;
    *(int *)(puVar25 + 0xd) = iVar79;
    *(int *)(puVar25 + 0x2f) = iVar66;
    *(long *)((long)puVar25 + 0x6c) = lVar78;
    *(undefined8 *)((long)puVar25 + 0x74) = 0x100000001;
    puVar25[0x10] = 0x200000001;
    puVar25[0x1c] = 0;
    puVar25[0x1d] = (ulong)(puVar25 + 0x22);
    *(undefined4 *)(puVar25 + 0x21) = 1;
    puVar25[0x1b] = 0;
    puVar25[0x1f] = CONCAT44(uVar53,uVar38);
    *(undefined4 *)(puVar25 + 0x22) = 0x8000;
    *(uint *)(puVar25 + 0x2e) = param_5;
    *(uint *)((long)puVar25 + 0x174) = param_5;
    if (param_5 - 3 < 2) {
      *(undefined4 *)(puVar25 + 0x2e) = 0;
      puVar25[0x30] = 0x6800005000;
      *(undefined4 *)(puVar25 + 0x31) = 1;
      uVar48 = 0x500c;
      uVar36 = 8;
      uVar46 = 0x5000;
    }
    else if (param_5 == 0) {
      puVar25[0x30] = 0x8000005000;
      uVar36 = 1;
      *(undefined4 *)(puVar25 + 0x31) = 1;
      uVar46 = 0x5000;
      uVar48 = 0x5000;
    }
    else {
      puVar25[0x30] = 0x800000500c;
      uVar36 = 8;
      *(undefined4 *)(puVar25 + 0x31) = 8;
      uVar46 = 0x500c;
      uVar48 = 0x500c;
    }
    *(undefined4 *)(puVar25 + 0x32) = 0x80;
    *(undefined4 *)((long)puVar25 + 0x194) = uVar36;
    *(undefined4 *)(puVar25 + 0x30) = uVar46;
    *(undefined4 *)((long)puVar25 + 0x18c) = uVar48;
    puVar25[4] = puVar33[2];
    *(undefined4 *)(puVar25 + 5) = *(undefined4 *)((long)puVar33 + 0x24);
    if (2 < param_5) {
      uVar23 = (ulong)*(uint *)(puVar33 + 4);
      FUN_109a4bacc();
      *(undefined8 **)(uVar23 + 0x18) = puVar33;
      *puVar25 = uVar23;
    }
    if (1 < iVar66) {
      uVar23 = puVar25[1];
      FUN_109a4bba0();
      puVar25[2] = uVar23;
      uVar28 = 0;
      FUN_109a4f5b0(0,0x70,0x40,uVar23);
      puVar25[3] = uVar28;
    }
    uVar37 = (*puVar57 >> 3 & 0x1ff) + 1 << (ulong)(0xfa50U >> (ulong)((*puVar57 & 7) << 1) & 3);
    _bzero(uVar22,(long)(int)(uVar37 * uVar38));
    _bzero(uVar22 + (long)(int)(uVar10 * iVar79),(long)(int)(uVar37 * uVar38));
    if (2 < (int)uVar53) {
      iVar66 = 1;
      uVar22 = (ulong)uVar37;
      puVar62 = puVar51;
      do {
        do {
          puVar51[(int)(uVar37 * (uVar38 - 1))] = 0;
          *puVar51 = 0;
          uVar22 = uVar22 - 1;
          puVar51 = puVar51 + 1;
        } while (uVar22 != 0);
        iVar66 = iVar66 + 1;
        puVar51 = puVar62 + (int)uVar10;
        uVar22 = (ulong)uVar37;
        puVar62 = puVar51;
      } while (iVar66 != iVar79);
    }
    if ((*puVar57 & 0xfff) != 4) {
      FUN_109b5ae78(0,0x3ff0000000000000,puVar57,puVar57,0);
    }
LAB_109ae06bc:
    puStack_1a8 = puVar25;
    puVar25 = puStack_1a8;
    FUN_109adf7b8(puStack_1a8);
    uVar22 = puVar25[0xb];
    uVar23 = (ulong)*(int *)((long)puVar25 + 0x74);
    iVar66 = (int)puVar25[0x2f];
    if (iVar66 == 4) {
      uVar53 = *(uint *)(uVar22 + (uVar23 - 1) * 4);
      uVar38 = 0xc0000000;
    }
    else {
      uVar53 = (uint)*(char *)(uVar22 + (uVar23 - 1));
      uVar38 = 0xfffffffe;
    }
    iVar79 = (int)puVar25[0xf];
    uVar28 = puVar25[0xd];
    if (iVar79 < (int)uVar28) {
      uVar37 = (uint)puVar25[0xc];
      iVar71 = *(int *)((long)puVar25 + 100);
      uVar10 = (int)uVar37 >> 2;
      uVar52 = puVar25[10];
      uVar44 = (ulong)*(uint *)((long)puVar25 + 0x7c);
      uVar7 = uVar52;
      if (iVar66 != 4) {
        uVar7 = 0;
      }
      uStack_324 = *(uint *)((long)puVar25 + 0x84);
      iVar64 = -uVar37;
      iVar15 = 1 - uVar37;
      uVar14 = ~uVar37;
      iVar65 = uVar37 - 1;
      iVar4 = uVar37 + 1;
      puVar2 = puVar25 + 0x1a;
      iVar59 = (int)puVar25[0x10];
      do {
        uVar8 = uVar22;
        if (iVar66 != 4) {
          uVar8 = 0;
        }
        if ((int)uVar23 < iVar71) {
          do {
            iVar40 = (int)uVar23;
            if (uVar8 == 0) {
              if (iVar71 <= iVar40) break;
              lVar78 = (long)iVar40;
              while (uVar47 = (uint)*(char *)(uVar22 + lVar78), uVar53 == uVar47) {
                lVar78 = lVar78 + 1;
                if (iVar71 == lVar78) goto LAB_109ae16a0;
              }
            }
            else {
              if (iVar71 <= iVar40) break;
              lVar78 = (long)iVar40;
              while (uVar47 = *(uint *)(uVar22 + lVar78 * 4),
                    uVar47 == uVar53 || ((uVar47 ^ uVar53) & ~uVar38) == 0) {
                lVar78 = lVar78 + 1;
                uVar53 = uVar47;
                if (iVar71 == lVar78) goto LAB_109ae16a0;
              }
            }
            uVar77 = (uint)lVar78;
            if (iVar71 <= (int)uVar77) break;
            uVar39 = (uint)uVar44;
            puVar56 = puVar2;
            if (uVar8 == 0) {
              if ((uVar53 == 0) && (uVar47 == 1)) goto LAB_109ae08cc;
              if ((uVar47 == 0) && (0 < (int)uVar53)) {
                if ((uVar53 & uVar38) != 0) {
                  uVar39 = uVar77 - 1;
                }
                uVar44 = (ulong)uVar39;
                if (iVar66 != 0) goto LAB_109ae092c;
              }
            }
            else {
              if (((uVar47 & uVar38) == 0) && ((uVar53 & uVar38) != 0 || uVar53 == 0)) {
LAB_109ae08cc:
                uStack_2fc = uVar77;
                if (iVar66 == 0) {
                  if ('\0' < *(char *)(uVar52 + (long)(int)uVar39 + (long)(int)(iVar59 * uVar37)))
                  goto LAB_109ae1678;
                }
                else if (1 < iVar66) {
                  if (0 < (int)uVar39) {
                    bVar34 = false;
                    bVar20 = true;
                    uStack_31c = 0;
                    if (iVar66 != 2) {
                      if (iVar66 != 4) goto LAB_109ae099c;
                      goto LAB_109ae09c8;
                    }
                  }
                  uStack_31c = 0;
                  bVar20 = true;
                  bVar34 = false;
                  goto LAB_109ae09c8;
                }
                uStack_31c = 0;
                bVar34 = true;
                bVar20 = true;
              }
              else {
                if ((((uVar53 | uVar47) & uVar38) != 0) || (iVar66 == 0)) goto LAB_109ae1678;
LAB_109ae092c:
                uStack_2fc = uVar77 - 1;
                if (iVar66 < 2) {
                  bVar20 = false;
                  bVar34 = true;
                  uStack_31c = 1;
                }
                else {
                  bVar20 = false;
                  bVar34 = false;
                  uStack_31c = 1;
                  if (0 < (int)uVar44) {
LAB_109ae099c:
                    iVar40 = (int)uVar44;
                    if (uVar7 == 0) {
                      uVar53 = (uint)*(byte *)(uVar52 + (long)iVar40 + (long)(int)(iVar59 * uVar37))
                      ;
                    }
                    else {
                      uVar53 = *(uint *)(uVar52 + (long)(int)(iVar40 + iVar59 * uVar10) * 4);
                    }
                    puVar56 = (ulong *)puVar25[(ulong)(uVar53 & 0x7f) + 0x33];
                    puVar57 = (uint *)(uVar8 + uVar44 * 4);
                    puVar29 = (ulong *)0x0;
                    do {
                      puVar31 = puVar29;
                      if ((((uint)(iVar40 - (int)puVar56[4]) < (uint)puVar56[5]) &&
                          ((uint)(iVar59 - *(int *)((long)puVar56 + 0x24)) <
                           *(uint *)((long)puVar56 + 0x2c))) &&
                         (puVar31 = puVar56, puVar29 != (ulong *)0x0)) {
                        if (uVar7 == 0) {
                          lVar24 = uVar52 + (long)(int)(*(int *)((long)puVar29 + 0x34) * uVar37) +
                                   (long)(int)puVar29[6];
                          uStack_e0 = (ulong *)CONCAT44(iVar15,1);
                          uStack_d8 = (ulong *)CONCAT44(uVar14,iVar64);
                          uStack_d0 = CONCAT44(iVar65,0xffffffff);
                          uStack_c8 = (ulong *)CONCAT44(iVar4,uVar37);
                          puStack_b8 = uStack_d8;
                          puStack_c0 = uStack_e0;
                          puStack_a8 = (ulong *)CONCAT44(iVar4,uVar37);
                          lStack_b0 = uStack_d0;
                          uVar53 = 4;
                          uVar39 = uVar53;
                          if ((int)puVar29[7] != 0) {
                            uVar53 = 0;
                            uVar39 = uVar53;
                          }
                          do {
                            uVar53 = uVar53 - 1 & 7;
                            lVar41 = (long)*(int *)((long)&uStack_e0 + (ulong)uVar53 * 4);
                          } while (*(char *)(lVar24 + lVar41) == '\0' && uVar53 != uVar39);
                          lVar73 = lVar24;
                          if (uVar53 != uVar39) {
                            lVar73 = lVar24 + lVar41;
                            lVar41 = lVar24;
                            while( true ) {
                              uVar23 = (ulong)uVar53;
                              do {
                                lVar55 = uVar23 * 4;
                                uVar23 = uVar23 + 1;
                                lVar55 = (long)*(int *)((long)&uStack_e0 + lVar55 + 4);
                              } while (*(char *)(lVar41 + lVar55) == '\0');
                              if (lVar41 == uVar22 + uVar44) goto LAB_109ae152c;
                              lVar55 = lVar41 + lVar55;
                              if ((lVar41 == lVar73) && (lVar55 == lVar24)) break;
                              uVar53 = (int)uVar23 + 4U & 7;
                              lVar41 = lVar55;
                            }
                          }
                          if (lVar73 == uVar22 + uVar44) break;
                        }
                        else {
                          puVar69 = (uint *)(uVar7 + (long)(int)(*(int *)((long)puVar29 + 0x34) *
                                                                uVar10) * 4 +
                                            (long)(int)puVar29[6] * 4);
                          uStack_e0 = (ulong *)CONCAT44(1 - uVar10,1);
                          uStack_d8 = (ulong *)CONCAT44(~uVar10,-uVar10);
                          uStack_d0 = CONCAT44(uVar10 - 1,0xffffffff);
                          uStack_c8 = (ulong *)CONCAT44(uVar10 + 1,uVar10);
                          puStack_b8 = uStack_d8;
                          puStack_c0 = uStack_e0;
                          puStack_a8 = uStack_c8;
                          lStack_b0 = uStack_d0;
                          uVar23 = 4;
                          uVar9 = uVar23;
                          if ((int)puVar29[7] != 0) {
                            uVar23 = 0;
                            uVar9 = uVar23;
                          }
                          do {
                            uVar23 = (ulong)((int)uVar23 - 1) & 7;
                            iVar11 = *(int *)((long)&uStack_e0 + uVar23 * 4);
                          } while (uVar23 != uVar9 &&
                                   (puVar69[iVar11] & 0x3fffffff) != (*puVar69 & 0x3fffffff));
                          puVar58 = puVar69;
                          if (uVar23 != uVar9) {
                            puVar58 = puVar69 + iVar11;
                            puVar30 = puVar69;
                            while( true ) {
                              do {
                                lVar24 = uVar23 * 4;
                                uVar23 = uVar23 + 1;
                                iVar11 = *(int *)((long)&uStack_e0 + lVar24 + 4);
                              } while ((puVar30[iVar11] & 0x3fffffff) != (*puVar69 & 0x3fffffff));
                              if (puVar30 == puVar57) goto LAB_109ae152c;
                              if ((puVar30 == puVar58) && (puVar30 + iVar11 == puVar69)) break;
                              uVar23 = (ulong)((int)uVar23 + 4) & 7;
                              puVar30 = puVar30 + iVar11;
                            }
                          }
                          if (puVar58 == puVar57) break;
                        }
                      }
                      puVar56 = (ulong *)puVar56[1];
                      puVar29 = puVar31;
                    } while (puVar56 != (ulong *)0x0);
LAB_109ae152c:
                    puVar56 = puVar29;
                    if (((uint)puVar29[7] == uStack_31c) &&
                       (puVar56 = puVar2, (ulong *)puVar29[2] != (ulong *)0x0)) {
                      puVar56 = (ulong *)puVar29[2];
                    }
                    if (puVar56[3] == 0) goto LAB_109ae1678;
                    bVar34 = false;
                  }
                }
              }
LAB_109ae09c8:
              FUN_109a4befc(puVar25[1],puVar25 + 6);
              puVar29 = (ulong *)(ulong)(uint)puVar25[0x30];
              FUN_109a4c4b8(puVar29,(long)*(int *)((long)puVar25 + 0x184),(long)(int)puVar25[0x31],
                            *puVar25);
              uVar53 = 0;
              if (!bVar20) {
                uVar53 = 0x8000;
              }
              *(uint *)puVar29 = (uint)*puVar29 | uVar53;
              if (bVar34) {
                iVar40 = (int)puVar25[0x2e];
                uStack_e0 = (ulong *)CONCAT44(iVar15,1);
                uStack_d8 = (ulong *)CONCAT44(uVar14,iVar64);
                uStack_d0 = CONCAT44(iVar65,0xffffffff);
                uStack_c8 = (ulong *)CONCAT44(iVar4,uVar37);
                puStack_b8 = uStack_d8;
                puStack_c0 = uStack_e0;
                puStack_a8 = (ulong *)CONCAT44(iVar4,uVar37);
                lStack_b0 = uStack_d0;
                puStack_270 = (ulong *)0x0;
                puStack_290 = (ulong *)0x30;
                lStack_280 = 0;
                if ((long *)puVar29[0xb] != (long *)0x0) {
                  lStack_280 = *(long *)puVar29[0xb];
                }
                uVar53 = *(int *)((long)puVar25 + 0x6c) + uStack_2fc;
                uVar47 = (int)puVar25[0xe] + iVar79;
                puStack_268 = (ulong *)puVar29[6];
                puStack_278 = (ulong *)puVar29[7];
                if (iVar40 < 1) {
                  *(uint *)(puVar29 + 0xc) = uVar53;
                  *(uint *)((long)puVar29 + 100) = uVar47;
                }
                pcVar75 = (char *)((uVar22 + (long)(int)uVar77) - (ulong)uStack_31c);
                uVar60 = ((uint)*puVar29 >> 0xd ^ 0xffffffff) & 4;
                uVar39 = uVar60;
                do {
                  uVar16 = uVar39 - 1;
                  uVar39 = uVar16 & 7;
                  iVar11 = *(int *)((long)&uStack_e0 + (ulong)uVar39 * 4);
                } while (pcVar75[iVar11] == '\0' && uVar39 != uVar60);
                puVar31 = puVar25 + 0x12;
                if (uVar39 != uVar60) {
                  uVar60 = uVar16 & 7 ^ 4;
                  pcVar63 = pcVar75;
                  puStack_288 = puVar29;
                  do {
                    uVar23 = (ulong)uVar39;
                    do {
                      iVar12 = *(int *)((long)&uStack_e0 + uVar23 * 4 + 4);
                      uVar23 = uVar23 + 1;
                    } while (pcVar63[iVar12] == '\0');
                    uVar83 = (uint)uVar23;
                    uVar16 = uVar83 & 7;
                    if (uVar16 - 1 < uVar39) {
                      cVar35 = -0x7e;
LAB_109ae0d14:
                      *pcVar63 = cVar35;
                    }
                    else if (*pcVar63 == '\x01') {
                      cVar35 = '\x02';
                      goto LAB_109ae0d14;
                    }
                    if (iVar40 < 1) {
                      if (puStack_268 <= puStack_278) {
                        FUN_109a4d4a0(&puStack_290);
                      }
                      *(char *)puStack_278 = (char)uVar16;
                      puStack_278 = (ulong *)((long)puStack_278 + 1);
                    }
                    else {
                      if ((iVar40 == 1) || (uVar16 != uVar60)) {
                        if (puStack_268 <= puStack_278) {
                          FUN_109a4d4a0(&puStack_290);
                        }
                        *(uint *)puStack_278 = uVar53;
                        *(uint *)((long)puStack_278 + 4) = uVar47;
                        puStack_278 = puStack_278 + 1;
                        uVar60 = uVar83 & 7;
                      }
                      lVar78 = (uVar23 & 7) * 8;
                      uVar53 = *(int *)(&UNK_10e02ffd8 + lVar78) + uVar53;
                      uVar47 = *(int *)(&UNK_10e02ffdc + lVar78) + uVar47;
                    }
                    if ((pcVar63 == pcVar75 + iVar11) && (pcVar63 + iVar12 == pcVar75))
                    goto LAB_109ae0dd8;
                    uVar39 = uVar83 + 4 & 7;
                    pcVar63 = pcVar63 + iVar12;
                  } while( true );
                }
                *pcVar75 = -0x7e;
                puStack_288 = puVar29;
                if (iVar40 < 1) {
LAB_109ae0dd8:
                  FUN_109a4d3b0(&puStack_290);
                  if (iVar40 == 0) goto LAB_109ae15dc;
                }
                else {
                  if (puStack_268 <= puStack_278) {
                    FUN_109a4d4a0(&puStack_290);
                  }
                  *(uint *)puStack_278 = uVar53;
                  *(uint *)((long)puStack_278 + 4) = uVar47;
                  puStack_278 = puStack_278 + 1;
                  FUN_109a4d3b0(&puStack_290);
                }
                FUN_109b430b8(puVar29,1);
              }
              else {
                puStack_130 = (ulong *)0x0;
                FUN_109a4f6dc(puVar25[3],0,&puStack_130);
                puVar31 = puStack_130;
                if (uVar8 == 0) {
                  iVar40 = 3;
                  if (((uStack_324 ^ 0xffffffff) & 0x7f) != 0) {
                    iVar40 = 0;
                  }
                  iVar11 = (int)puVar25[0x2e];
                  uStack_e0 = (ulong *)CONCAT44(iVar15,1);
                  uStack_d8 = (ulong *)CONCAT44(uVar14,iVar64);
                  uStack_d0 = CONCAT44(iVar65,0xffffffff);
                  uStack_c8 = (ulong *)CONCAT44(iVar4,uVar37);
                  puStack_b8 = uStack_d8;
                  puStack_c0 = uStack_e0;
                  puStack_a8 = (ulong *)CONCAT44(iVar4,uVar37);
                  lStack_b0 = uStack_d0;
                  puStack_270 = (ulong *)0x0;
                  puStack_290 = (ulong *)0x30;
                  lStack_280 = 0;
                  if ((long *)puVar29[0xb] != (long *)0x0) {
                    lStack_280 = *(long *)puVar29[0xb];
                  }
                  uVar53 = *(int *)((long)puVar25 + 0x6c) + uStack_2fc;
                  uVar47 = (int)puVar25[0xe] + iVar79;
                  puStack_268 = (ulong *)puVar29[6];
                  puStack_278 = (ulong *)puVar29[7];
                  if (iVar11 < 1) {
                    *(uint *)(puVar29 + 0xc) = uVar53;
                    *(uint *)((long)puVar29 + 100) = uVar47;
                  }
                  pbVar61 = (byte *)((uVar22 + (long)(int)uVar77) - (ulong)uStack_31c);
                  uVar60 = ((uint)*puVar29 >> 0xd ^ 0xffffffff) & 4;
                  uVar39 = uVar60;
                  do {
                    uVar39 = uVar39 - 1 & 7;
                    iVar12 = *(int *)((long)&uStack_e0 + (ulong)uVar39 * 4);
                  } while (pbVar61[iVar12] == 0 && uVar39 != uVar60);
                  bVar17 = (byte)uStack_324;
                  uStack_2d8 = uVar53;
                  uStack_2d4 = uVar47;
                  uVar16 = uVar53;
                  if (uVar39 != uVar60) {
                    pbVar70 = pbVar61;
                    uVar83 = uVar39 ^ 4;
                    uVar60 = uVar47;
                    puStack_288 = puVar29;
                    do {
                      uVar23 = (ulong)uVar39;
                      do {
                        iVar13 = *(int *)((long)&uStack_e0 + uVar23 * 4 + 4);
                        uVar23 = uVar23 + 1;
                      } while (pbVar70[iVar13] == 0);
                      uVar72 = (uint)uVar23 & 7;
                      bVar45 = bVar17 | 0x80;
                      if ((uVar72 - 1 < uVar39) || (bVar45 = bVar17, *pbVar70 == 1)) {
                        *pbVar70 = bVar45;
                      }
                      if (iVar11 < 1) {
                        if (puStack_268 <= puStack_278) {
                          FUN_109a4d4a0(&puStack_290);
                        }
                        *(char *)puStack_278 = (char)uVar72;
                        lVar78 = 1;
LAB_109ae11d8:
                        puStack_278 = (ulong *)((long)puStack_278 + lVar78);
                      }
                      else if ((iVar11 == 1) || (uVar72 != uVar83)) {
                        if (puStack_268 <= puStack_278) {
                          FUN_109a4d4a0(&puStack_290);
                        }
                        *(uint *)puStack_278 = uVar53;
                        *(uint *)((long)puStack_278 + 4) = uVar60;
                        lVar78 = 8;
                        goto LAB_109ae11d8;
                      }
                      uVar39 = uStack_2d4;
                      if (uVar72 != uVar83) {
                        uVar39 = uVar53;
                        if ((int)uVar53 <= (int)uVar16) {
                          uVar39 = uVar16;
                        }
                        uVar83 = uVar53;
                        if ((int)uStack_2d8 <= (int)uVar53) {
                          uVar83 = uStack_2d8;
                          uVar16 = uVar39;
                        }
                        uVar5 = uVar60;
                        if ((int)uVar60 <= (int)uVar47) {
                          uVar5 = uVar47;
                        }
                        uStack_2d8 = uVar83;
                        uVar39 = uVar60;
                        if ((int)uStack_2d4 <= (int)uVar60) {
                          uVar39 = uStack_2d4;
                          uVar47 = uVar5;
                        }
                      }
                      uStack_2d4 = uVar39;
                      if ((pbVar70 == pbVar61 + iVar12) && (pbVar70 + iVar13 == pbVar61))
                      goto LAB_109ae1574;
                      lVar78 = (uVar23 & 7) * 8;
                      uVar60 = *(int *)(&UNK_10e02ffdc + lVar78) + uVar60;
                      uVar53 = *(int *)(&UNK_10e02ffd8 + lVar78) + uVar53;
                      uVar39 = (uint)uVar23 + 4 & 7;
                      pbVar70 = pbVar70 + iVar13;
                      uVar83 = uVar72;
                    } while( true );
                  }
                  *pbVar61 = bVar17 | 0x80;
                  puStack_288 = puVar29;
                  if (0 < iVar11) {
                    if (puStack_268 <= puStack_278) {
                      FUN_109a4d4a0(&puStack_290);
                    }
                    *(uint *)puStack_278 = uVar53;
                    *(uint *)((long)puStack_278 + 4) = uVar47;
                    puStack_278 = puStack_278 + 1;
                  }
LAB_109ae1574:
                  FUN_109a4d3b0(&puStack_290);
                  uVar53 = (uVar16 - uStack_2d8) + 1;
                  uVar47 = (uVar47 - uStack_2d4) + 1;
                  if (iVar11 != 0) {
                    *(uint *)(puVar29 + 0xc) = uStack_2d8;
                    *(uint *)((long)puVar29 + 100) = uStack_2d4;
                    *(uint *)(puVar29 + 0xd) = uVar53;
                    *(uint *)((long)puVar29 + 0x6c) = uVar47;
                  }
                  *(uint *)(puVar31 + 4) = uStack_2d8;
                  *(uint *)((long)puVar31 + 0x24) = uStack_2d4;
                  *(uint *)(puVar31 + 5) = uVar53;
                  *(uint *)((long)puVar31 + 0x2c) = uVar47;
                  uVar53 = uStack_324;
                  uStack_324 = iVar40 + (uStack_324 + 1 & 0x7f);
                }
                else {
                  uVar47 = *(uint *)(uVar22 + (long)(int)uStack_2fc * 4);
                  iVar40 = (int)puVar25[0x2e];
                  puVar57 = (uint *)(uVar8 + ((lVar78 << 0x20) >> 0x1e) + (ulong)uStack_31c * -4);
                  uVar53 = *puVar57;
                  uStack_e0 = (ulong *)CONCAT44(1 - uVar10,1);
                  uStack_d8 = (ulong *)CONCAT44(~uVar10,-uVar10);
                  uStack_d0 = CONCAT44(uVar10 - 1,0xffffffff);
                  uStack_c8 = (ulong *)CONCAT44(uVar10 + 1,uVar10);
                  puStack_b8 = uStack_d8;
                  puStack_c0 = uStack_e0;
                  puStack_a8 = uStack_c8;
                  lStack_b0 = uStack_d0;
                  puStack_270 = (ulong *)0x0;
                  puStack_290 = (ulong *)0x30;
                  lStack_280 = 0;
                  if ((long *)puVar29[0xb] != (long *)0x0) {
                    lStack_280 = *(long *)puVar29[0xb];
                  }
                  uVar39 = *(int *)((long)puVar25 + 0x6c) + uStack_2fc;
                  uVar60 = (int)puVar25[0xe] + iVar79;
                  puStack_268 = (ulong *)puVar29[6];
                  puVar43 = (ulong *)puVar29[7];
                  if (iVar40 < 1) {
                    *(uint *)(puVar29 + 0xc) = uVar39;
                    *(uint *)((long)puVar29 + 100) = uVar60;
                  }
                  uVar16 = uVar53 & 0x3fffffff;
                  uVar72 = ((uint)*puVar29 >> 0xd ^ 0xffffffff) & 4;
                  uVar83 = uVar72;
                  do {
                    uVar83 = uVar83 - 1 & 7;
                    iVar11 = *(int *)((long)&uStack_e0 + (ulong)uVar83 * 4);
                  } while ((puVar57[iVar11] & 0x3fffffff) != uVar16 && uVar83 != uVar72);
                  uStack_2d8 = uVar39;
                  uStack_2d4 = uVar60;
                  puStack_278 = puVar43;
                  uVar5 = uVar39;
                  if (uVar83 != uVar72) {
                    puVar69 = puVar57;
                    uVar84 = uVar83 ^ 4;
                    uVar72 = uVar60;
                    puStack_288 = puVar29;
                    do {
                      uVar23 = (ulong)uVar83;
                      do {
                        iVar12 = *(int *)((long)&uStack_e0 + uVar23 * 4 + 4);
                        uVar23 = uVar23 + 1;
                      } while ((puVar69[iVar12] & 0x3fffffff) != uVar16);
                      uVar3 = (uint)uVar23 & 7;
                      uVar49 = uVar53 | 0xc0000000;
                      if ((uVar3 - 1 < uVar83) ||
                         (uVar49 = uVar53 & 0x3fffffff | 0x40000000, *puVar69 == uVar16)) {
                        *puVar69 = uVar49;
                      }
                      if (iVar40 < 1) {
                        if (puStack_268 <= puVar43) {
                          FUN_109a4d4a0(&puStack_290);
                          puVar43 = puStack_278;
                        }
                        *(char *)puVar43 = (char)uVar3;
                        lVar78 = 1;
LAB_109ae1044:
                        puVar43 = (ulong *)((long)puStack_278 + lVar78);
                        puStack_278 = puVar43;
                      }
                      else if ((iVar40 == 1) || (uVar3 != uVar84)) {
                        if (puStack_268 <= puVar43) {
                          FUN_109a4d4a0(&puStack_290);
                          puVar43 = puStack_278;
                        }
                        *(uint *)puVar43 = uVar39;
                        *(uint *)((long)puVar43 + 4) = uVar72;
                        lVar78 = 8;
                        goto LAB_109ae1044;
                      }
                      uVar83 = uStack_2d4;
                      if (uVar3 != uVar84) {
                        uVar83 = uVar39;
                        if ((int)uVar39 <= (int)uVar5) {
                          uVar83 = uVar5;
                        }
                        uVar84 = uVar39;
                        if ((int)uStack_2d8 <= (int)uVar39) {
                          uVar84 = uStack_2d8;
                          uVar5 = uVar83;
                        }
                        uVar49 = uVar72;
                        if ((int)uVar72 <= (int)uVar60) {
                          uVar49 = uVar60;
                        }
                        uStack_2d8 = uVar84;
                        uVar83 = uVar72;
                        if ((int)uStack_2d4 <= (int)uVar72) {
                          uVar83 = uStack_2d4;
                          uVar60 = uVar49;
                        }
                      }
                      uStack_2d4 = uVar83;
                      if ((puVar69 == puVar57 + iVar11) && (puVar69 + iVar12 == puVar57))
                      goto LAB_109ae12a0;
                      lVar78 = (uVar23 & 7) * 8;
                      uVar72 = *(int *)(&UNK_10e02ffdc + lVar78) + uVar72;
                      uVar39 = *(int *)(&UNK_10e02ffd8 + lVar78) + uVar39;
                      uVar83 = (uint)uVar23 + 4 & 7;
                      puVar69 = puVar69 + iVar12;
                      uVar84 = uVar3;
                    } while( true );
                  }
                  *puVar57 = uVar53 | 0xc0000000;
                  puStack_288 = puVar29;
                  if (0 < iVar40) {
                    if (puStack_268 <= puVar43) {
                      FUN_109a4d4a0(&puStack_290);
                    }
                    *(uint *)puStack_278 = uVar39;
                    *(uint *)((long)puStack_278 + 4) = uVar60;
                    puStack_278 = puStack_278 + 1;
                  }
LAB_109ae12a0:
                  FUN_109a4d3b0(&puStack_290);
                  uVar53 = (uVar5 - uStack_2d8) + 1;
                  uVar39 = (uVar60 - uStack_2d4) + 1;
                  if (iVar40 != 0) {
                    *(uint *)(puVar29 + 0xc) = uStack_2d8;
                    *(uint *)((long)puVar29 + 100) = uStack_2d4;
                    *(uint *)(puVar29 + 0xd) = uVar53;
                    *(uint *)((long)puVar29 + 0x6c) = uVar39;
                  }
                  *(uint *)(puVar31 + 4) = uStack_2d8;
                  *(uint *)((long)puVar31 + 0x24) = uStack_2d4;
                  *(uint *)(puVar31 + 5) = uVar53;
                  *(uint *)((long)puVar31 + 0x2c) = uVar39;
                  uVar53 = uVar47 & 0x7f;
                }
                puVar31[4] = CONCAT44((int)(puVar31[4] >> 0x20) -
                                      (int)((ulong)*(undefined8 *)((long)puVar25 + 0x6c) >> 0x20),
                                      (int)puVar31[4] - (int)*(undefined8 *)((long)puVar25 + 0x6c));
                puVar31[1] = puVar25[(long)(int)uVar53 + 0x33];
                puVar25[(long)(int)uVar53 + 0x33] = (ulong)puVar31;
              }
LAB_109ae15dc:
              *(uint *)(puVar31 + 7) = uStack_31c;
              puVar31[6] = CONCAT44(iVar79,uStack_2fc);
              puVar31[2] = (ulong)puVar56;
              puVar31[3] = (ulong)puVar29;
              puVar43 = puVar56;
              if ((int)puVar25[0x2e] != *(int *)((long)puVar25 + 0x174)) {
                FUN_109ac6a4c(puVar29,(int)puVar25[0x32],puVar25[1]);
                puVar31[3] = (ulong)puVar29;
                FUN_109a4be30(*puVar25);
                puVar29 = (ulong *)puVar31[3];
                puVar43 = (ulong *)puVar31[2];
              }
              puVar29[3] = puVar43[3];
              if (puVar56[3] != 0) {
                FUN_109a4befc(puVar25[1],puVar25 + 8);
                puVar25[0x11] = (ulong)puVar31;
                uVar53 = 0;
                if (uVar8 != 0) {
                  uVar53 = uStack_31c;
                }
                *(uint *)((long)puVar25 + 0x74) = (uVar77 - uVar53) + 1;
                *(int *)(puVar25 + 0xf) = iVar79;
                *(uint *)((long)puVar25 + 0x7c) = uStack_2fc;
                *(int *)(puVar25 + 0x10) = iVar59;
                puVar25[0xb] = uVar22;
                *(uint *)((long)puVar25 + 0x84) = uStack_324;
                if (puVar31[3] == 0) goto LAB_109ae176c;
                puVar25 = puStack_1a8;
                if (puStack_1a8 != (ulong *)0x0) goto LAB_109ae06bc;
                puVar32 = (undefined4 *)0x8;
                func_0x000107c2ae8c();
                *puVar32 = 1;
                uStack_e0 = (ulong *)(puVar32 + 1);
                *(undefined1 *)uStack_e0 = 0;
                uStack_d8 = (ulong *)0x0;
                FUN_109ac3188(0xffffffe5,&uStack_e0,&UNK_10f59bdca,&UNK_10f59bcbb,0x3e0);
                goto LAB_109ae225c;
              }
              puVar31[3] = 0;
              if (*puVar25 == puVar25[1]) {
                FUN_109a4bfac(*puVar25,puVar25 + 6);
              }
              else {
                FUN_109a4be30();
              }
              uVar44 = (ulong)uStack_2fc;
              uVar47 = (int)*(char *)(uVar22 + (long)(int)uVar77);
            }
LAB_109ae1678:
            uVar53 = uVar47;
            uVar47 = (uint)uVar44;
            if (1 < uVar53) {
              uVar47 = uVar77;
            }
            uVar44 = (ulong)uVar47;
            uVar23 = (ulong)(uVar77 + 1);
          } while ((int)(uVar77 + 1) < iVar71);
        }
LAB_109ae16a0:
        uVar53 = 0;
        uVar44 = 0;
        iVar79 = iVar79 + 1;
        uVar22 = uVar22 + (long)(int)uVar37;
        uVar23 = 1;
        iVar59 = iVar79;
      } while (iVar79 != (int)uVar28);
    }
LAB_109ae176c:
    ppuVar67 = &puStack_1a8;
    func_0x000109adf844();
joined_r0x000109ae1778:
    if (ppuVar67 == (ulong **)0x0) {
      FUN_109a913ac(param_2);
    }
    else {
      FUN_109a5019c(ppuVar67,0x60,puStack_218);
      if (ppuVar67 == (ulong **)0x0) {
        uVar22 = 0;
      }
      else {
        if (*(uint *)((long)ppuVar67 + 0x2c) != 8) {
          puVar32 = (undefined4 *)0x2c;
          func_0x000107c2ae8c();
          *puVar32 = 1;
          uStack_e0 = (ulong *)(puVar32 + 1);
          uStack_d8 = (ulong *)0x27;
          *(undefined1 *)((long)puVar32 + 0x2b) = 0;
          *(undefined8 *)(puVar32 + 3) = 0x653e2d7165735f20;
          *(undefined8 *)(puVar32 + 1) = 0x7c7c207165735f21;
          *(undefined8 *)(puVar32 + 7) = 0x657a6973203d3d20;
          *(undefined8 *)(puVar32 + 5) = 0x657a69735f6d656c;
          *(undefined8 *)((long)puVar32 + 0x23) = 0x2970545f28666f65;
          FUN_109ac3188(0xffffff29,&uStack_e0,&UNK_10f59bfa2,&UNK_10f59bfa6,0xb83);
          goto LAB_109ae225c;
        }
        uVar22 = (ulong)*(uint *)(ppuVar67 + 5);
      }
      FUN_109a8f64c(param_2,uVar22,1,0,0xffffffff,1,0);
      FUN_109a4cb14(ppuVar67,&puStack_290,0);
      iStack_250 = 0;
      iVar66 = (int)uVar22;
      if (0 < iVar66) {
        iVar79 = 0;
        do {
          uVar23 = *puStack_278;
          *(int *)(uVar23 + 0x70) = iVar79;
          FUN_109a8f64c(param_2,*(undefined4 *)(uVar23 + 0x28),1,0xc,iVar79,1,0);
          FUN_109a8a180(&uStack_e0,param_2,iVar79);
          if ((uStack_e0._1_1_ >> 6 & 1) == 0) {
            puVar32 = (undefined4 *)0x18;
            func_0x000107c2ae8c();
            *puVar32 = 1;
            puStack_130 = (ulong *)(puVar32 + 1);
            uStack_128 = 0x11;
            *(undefined2 *)(puVar32 + 5) = 0x29;
            *(undefined8 *)(puVar32 + 3) = 0x2873756f756e6974;
            *(undefined8 *)(puVar32 + 1) = 0x6e6f4373692e6963;
            FUN_109ac3188(0xffffff29,&puStack_130,&UNK_10f59bebb,&UNK_10f59bcbb,0x6c7);
            goto LAB_109ae225c;
          }
          FUN_109a4c988(uVar23,uStack_d0,0x3fffffff00000000);
          if (puStack_a8 != (ulong *)0x0) {
            puVar57 = (uint *)((long)puStack_a8 + 0x14);
            do {
              uVar53 = *puVar57;
              cVar35 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(puVar57,0x10);
              if (bVar20) {
                *puVar57 = uVar53 - 1;
                cVar35 = ExclusiveMonitorsStatus();
              }
            } while (cVar35 != '\0');
            if (uVar53 - 1 == 0) {
              func_0x000109a848d4(&uStack_e0);
            }
          }
          puStack_a8 = (ulong *)0x0;
          uStack_c8 = (ulong *)0x0;
          uStack_d0 = 0;
          puStack_b8 = (ulong *)0x0;
          puStack_c0 = (ulong *)0x0;
          if (0 < uStack_e0._4_4_) {
            lVar78 = 0;
            do {
              *(undefined4 *)(uStack_a0 + lVar78 * 4) = 0;
              lVar78 = lVar78 + 1;
            } while (lVar78 < uStack_e0._4_4_);
          }
          if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
            _free(puStack_98[-1]);
          }
          puStack_278 = puStack_278 + 1;
          if (puStack_268 <= puStack_278) {
            lStack_280 = *(long *)(lStack_280 + 8);
            puStack_278 = *(ulong **)(lStack_280 + 0x18);
            puStack_268 = (ulong *)((long)puStack_278 +
                                   (long)*(int *)(lStack_280 + 0x14) *
                                   (long)(int)*(uint *)((long)puStack_288 + 0x2c));
            puStack_270 = puStack_278;
          }
          iVar79 = iVar79 + 1;
          iVar71 = 0;
          if (iStack_250 + 1 < (int)((uint)puStack_288[5] * 2)) {
            iVar71 = iStack_250 + 1;
          }
          iStack_250 = iVar71;
        } while (iVar79 != iVar66);
      }
      if ((*param_3 & 0x1f0000) != 0) {
        FUN_109a8f64c(param_3,1,uVar22,0x1c,0xffffffff,1,0);
        if ((*param_3 & 0x1f0000) == 0x10000) {
          puVar33 = *(undefined8 **)(param_3 + 2);
          uStack_a0 = (ulong)&uStack_e0 | 8;
          uStack_d8 = (ulong *)puVar33[1];
          uStack_e0 = (ulong *)*puVar33;
          uStack_c8 = (ulong *)puVar33[3];
          uStack_d0 = puVar33[2];
          puStack_b8 = (ulong *)puVar33[5];
          puStack_c0 = (ulong *)puVar33[4];
          puStack_a8 = (ulong *)puVar33[7];
          lStack_b0 = puVar33[6];
          puStack_98 = &uStack_90;
          uStack_90 = 0;
          uStack_88 = 0;
          if (puVar33[7] != 0) {
            piVar1 = (int *)(puVar33[7] + 0x14);
            do {
              cVar35 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar20) {
                *piVar1 = *piVar1 + 1;
                cVar35 = ExclusiveMonitorsStatus();
              }
            } while (cVar35 != '\0');
          }
          if (*(int *)((long)puVar33 + 4) < 3) {
            uStack_90 = *(undefined8 *)puVar33[9];
            uStack_88 = ((undefined8 *)puVar33[9])[1];
          }
          else {
            uStack_e0 = (ulong *)((ulong)uStack_e0 & 0xffffffff);
            func_0x000109a84868(&uStack_e0);
          }
        }
        else {
          FUN_109a8a180(&uStack_e0,param_3,0xffffffff);
        }
        lVar78 = uStack_d0;
        if (puStack_a8 != (ulong *)0x0) {
          puVar57 = (uint *)((long)puStack_a8 + 0x14);
          do {
            uVar53 = *puVar57;
            cVar35 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(puVar57,0x10);
            if (bVar20) {
              *puVar57 = uVar53 - 1;
              cVar35 = ExclusiveMonitorsStatus();
            }
          } while (cVar35 != '\0');
          if (uVar53 - 1 == 0) {
            func_0x000109a848d4(&uStack_e0);
          }
        }
        puStack_a8 = (ulong *)0x0;
        uStack_c8 = (ulong *)0x0;
        uStack_d0 = 0;
        puStack_b8 = (ulong *)0x0;
        puStack_c0 = (ulong *)0x0;
        if (0 < uStack_e0._4_4_) {
          lVar24 = 0;
          do {
            *(undefined4 *)(uStack_a0 + lVar24 * 4) = 0;
            lVar24 = lVar24 + 1;
          } while (lVar24 < uStack_e0._4_4_);
        }
        if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
          _free(puStack_98[-1]);
        }
        FUN_109a4cb14(ppuVar67,&uStack_e0,0);
        puStack_268 = puStack_b8;
        puStack_270 = puStack_c0;
        puStack_258 = puStack_a8;
        lStack_260 = lStack_b0;
        iStack_250 = 0;
        puStack_288 = uStack_d8;
        puStack_290 = uStack_e0;
        puStack_278 = uStack_c8;
        lStack_280 = uStack_d0;
        if (0 < iVar66) {
          puVar32 = (undefined4 *)(lVar78 + 8);
          do {
            uVar23 = *puStack_278;
            if (*(long *)(uVar23 + 0x10) == 0) {
              uVar36 = 0xffffffff;
            }
            else {
              uVar36 = *(undefined4 *)(*(long *)(uVar23 + 0x10) + 0x70);
            }
            if (*(long *)(uVar23 + 8) == 0) {
              uVar46 = 0xffffffff;
            }
            else {
              uVar46 = *(undefined4 *)(*(long *)(uVar23 + 8) + 0x70);
            }
            if (*(long *)(uVar23 + 0x20) == 0) {
              uVar48 = 0xffffffff;
            }
            else {
              uVar48 = *(undefined4 *)(*(long *)(uVar23 + 0x20) + 0x70);
            }
            if (*(long *)(uVar23 + 0x18) == 0) {
              uVar54 = 0xffffffff;
            }
            else {
              uVar54 = *(undefined4 *)(*(long *)(uVar23 + 0x18) + 0x70);
            }
            puVar32[-2] = uVar36;
            puVar32[-1] = uVar46;
            *puVar32 = uVar48;
            puVar32[1] = uVar54;
            puStack_278 = puStack_278 + 1;
            if (puStack_268 <= puStack_278) {
              lStack_280 = *(long *)(lStack_280 + 8);
              puStack_278 = *(ulong **)(lStack_280 + 0x18);
              puStack_268 = (ulong *)((long)puStack_278 +
                                     (long)*(int *)(lStack_280 + 0x14) *
                                     (long)(int)*(uint *)((long)uStack_d8 + 0x2c));
              puStack_270 = puStack_278;
            }
            iVar66 = 0;
            if (iStack_250 + 1 < (int)((uint)uStack_d8[5] * 2)) {
              iVar66 = iStack_250 + 1;
            }
            puVar32 = puVar32 + 4;
            uVar22 = uVar22 - 1;
            iStack_250 = iVar66;
          } while (uVar22 != 0);
        }
      }
    }
    FUN_109ae22bc(&puStack_220);
    if (lStack_1d8 != 0) {
      piVar1 = (int *)(lStack_1d8 + 0x14);
      do {
        iVar66 = *piVar1;
        cVar35 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar20) {
          *piVar1 = iVar66 + -1;
          cVar35 = ExclusiveMonitorsStatus();
        }
      } while (cVar35 != '\0');
      if (iVar66 + -1 == 0) {
        func_0x000109a848d4(&uStack_210);
      }
    }
    lStack_1d8 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    if (0 < uStack_210._4_4_) {
      lVar78 = 0;
      do {
        *(undefined4 *)(uStack_1d0 + lVar78 * 4) = 0;
        lVar78 = lVar78 + 1;
      } while (lVar78 < uStack_210._4_4_);
    }
    if (puStack_1c8 != &uStack_1c0 && puStack_1c8 != (undefined8 *)0x0) {
      _free(puStack_1c8[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar32 = (undefined4 *)0x38;
  func_0x000107c2ae8c();
  *puVar32 = 1;
  uStack_e0 = (ulong *)(puVar32 + 1);
  uStack_d8 = (ulong *)0x33;
  *(undefined8 *)(puVar32 + 3) = 0x692074657366666f;
  *(undefined8 *)(puVar32 + 1) = 0x206f72657a6e6f4e;
  *(undefined4 *)((long)puVar32 + 0x33) = 0x74657920;
  *(undefined1 *)((long)puVar32 + 0x37) = 0;
  *(undefined8 *)(puVar32 + 7) = 0x20646574726f7070;
  *(undefined8 *)(puVar32 + 5) = 0x757320746f6e2073;
  *(undefined8 *)(puVar32 + 0xb) = 0x20534e55525f4b4e;
  *(undefined8 *)(puVar32 + 9) = 0x494c5f5643206e69;
  FUN_109ac3188(0xffffff2d,&uStack_e0,&UNK_10f59bddc,&UNK_10f59bcbb,0x68a);
LAB_109ae225c:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x109ae2260);
  (*pcVar19)();
}



/* Entry: 109ae22bc; end: 109ae230f;  */

long * FUN_109ae22bc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109ae2310; end: 109ae2317;  */

void FUN_109ae2310(void)

{
  return;
}



/* Entry: 109ae2318; end: 109ae2357;  */

void FUN_109ae2318(long *param_1)

{
  long lStack_28;
  
  lStack_28 = param_1[2];
  FUN_109a4bc4c(&lStack_28);
                    /* WARNING: Could not recover jumptable at 0x000109ae2354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 109ae2358; end: 109ae2e8f;  */

void FUN_109ae2358(uint *param_1,uint *param_2,uint param_3,byte param_4)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulong *puVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  int *piVar27;
  int iVar28;
  int iVar29;
  int *piStack_df8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  int *piStack_dd0;
  int *piStack_dc8;
  int *piStack_dc0;
  int *piStack_db8;
  undefined8 uStack_db0;
  long lStack_da8;
  undefined8 *puStack_da0;
  long *plStack_d98;
  long lStack_d90;
  long lStack_d88;
  int *piStack_d80;
  ulong uStack_d78;
  int aiStack_d70 [264];
  int *piStack_950;
  ulong uStack_948;
  int aiStack_940 [264];
  undefined8 *puStack_520;
  ulong uStack_518;
  undefined8 auStack_510 [136];
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar14 = *(ulong **)(param_1 + 2);
    uStack_90 = (ulong)&uStack_d0 | 8;
    uStack_c8 = puVar14[1];
    uStack_d0 = *puVar14;
    uStack_b8 = puVar14[3];
    uStack_c0 = puVar14[2];
    uStack_a8 = puVar14[5];
    uStack_b0 = puVar14[4];
    uStack_98 = puVar14[7];
    uStack_a0 = puVar14[6];
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    if (puVar14[7] != 0) {
      piVar10 = (int *)(puVar14[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar14 + 4) < 3) {
      uStack_80 = *(undefined8 *)puVar14[9];
      uStack_78 = ((undefined8 *)puVar14[9])[1];
    }
    else {
      uStack_d0 = uStack_d0 & 0xffffffff;
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_1,0xffffffff);
  }
  puVar9 = &uStack_d0;
  FUN_109a89cd4(puVar9,2,0xffffffff,1);
  uVar6 = (uint)puVar9;
  if (((int)uVar6 < 0) || (uVar1 = (uint)uStack_d0, ((uint)uStack_d0 & 6) != 4)) {
    puVar13 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    puStack_520 = (undefined8 *)(puVar13 + 1);
    uStack_518 = 0x32;
    *(undefined8 *)(puVar13 + 3) = 0x6428202626203020;
    *(undefined8 *)(puVar13 + 1) = 0x3d3e206c61746f74;
    *(undefined2 *)(puVar13 + 0xd) = 0x2953;
    *(undefined1 *)((long)puVar13 + 0x36) = 0;
    *(undefined8 *)(puVar13 + 7) = 0x7c204632335f5643;
    *(undefined8 *)(puVar13 + 5) = 0x203d3d2068747065;
    *(undefined8 *)(puVar13 + 0xb) = 0x32335f5643203d3d;
    *(undefined8 *)(puVar13 + 9) = 0x206874706564207c;
    FUN_109ac3188(0xffffff29,&puStack_520,&UNK_10f59c066,&UNK_10f59c071,0x86);
    goto LAB_109ae2d88;
  }
  if (uVar6 == 0) {
    FUN_109a8e944(param_2);
    goto LAB_109ae2c20;
  }
  if ((int)*param_2 < 0) {
    puVar8 = param_2;
    FUN_109a8b904(param_2,0xffffffff);
    param_4 = (int)puVar8 != 4;
  }
  uVar26 = (ulong)puVar9 & 0xffffffff;
  uStack_518 = uVar26;
  if (uVar6 < 0x89) {
    uStack_948 = (ulong)(uVar6 + 2);
    puVar9 = auStack_510;
LAB_109ae2540:
    piStack_d80 = aiStack_d70;
    piVar10 = aiStack_940;
    piStack_950 = piVar10;
    puStack_520 = puVar9;
  }
  else {
    puVar9 = (undefined8 *)(uVar26 << 3);
    puStack_520 = auStack_510;
    __Znam();
    uStack_948 = (ulong)(uVar6 + 2);
    piStack_950 = aiStack_940;
    if (uVar6 < 0x107) goto LAB_109ae2540;
    piVar10 = (int *)(uStack_948 << 2);
    puStack_520 = puVar9;
    __Znam();
    piStack_d80 = aiStack_d70;
    piStack_950 = piVar10;
    if (0x108 < uVar6) {
      piVar11 = (int *)(uVar26 << 2);
      __Znam();
      piStack_d80 = piVar11;
    }
  }
  uVar3 = uStack_c0;
  piVar11 = piStack_d80;
  piStack_df8 = aiStack_d70;
  uStack_d78 = uVar26;
  if ((uStack_d0._1_1_ >> 6 & 1) == 0) {
    puVar13 = (undefined4 *)0x1c;
    func_0x000107c2ae8c();
    *puVar13 = 1;
    uStack_de0 = puVar13 + 1;
    uStack_dd8 = 0x15;
    *(undefined1 *)((long)puVar13 + 0x19) = 0;
    *(undefined8 *)(puVar13 + 3) = 0x756e69746e6f4373;
    *(undefined8 *)(puVar13 + 1) = 0x692e73746e696f70;
    *(undefined8 *)((long)puVar13 + 0x11) = 0x292873756f756e69;
    FUN_109ac3188(0xffffff29,&uStack_de0,&UNK_10f59c066,&UNK_10f59c071,0x99);
LAB_109ae2d88:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109ae2d8c);
    (*pcVar4)();
  }
  uVar15 = 0;
  uVar1 = uVar1 & 7;
  uVar23 = uStack_c0;
  do {
    puVar9[uVar15] = uVar23;
    uVar15 = uVar15 + 1;
    uVar23 = uVar23 + 8;
  } while (uVar26 != uVar15);
  if (uVar1 == 5) {
    FUN_109ae5144();
    if (uVar6 == 1) {
LAB_109ae2604:
      iVar25 = 0;
      iVar29 = 0;
    }
    else {
      uVar15 = 1;
      iVar28 = 0;
      iVar24 = 0;
      do {
        iVar29 = (int)uVar15;
        if (*(float *)(puVar9[iVar28] + 4) <= *(float *)(puVar9[uVar15] + 4)) {
          iVar29 = iVar28;
        }
        iVar25 = (int)uVar15;
        if (*(float *)(puVar9[uVar15] + 4) <= *(float *)(puVar9[iVar24] + 4)) {
          iVar25 = iVar24;
        }
        uVar15 = uVar15 + 1;
        iVar28 = iVar29;
        iVar24 = iVar25;
      } while (uVar26 != uVar15);
    }
  }
  else {
    FUN_109ae3c80(puVar9,puVar9 + uVar26,LZCOUNT(uVar26) * -2 + 0x7e,1);
    if (uVar6 == 1) goto LAB_109ae2604;
    uVar15 = 1;
    iVar28 = 0;
    iVar24 = 0;
    do {
      iVar29 = (int)uVar15;
      if (*(int *)(puVar9[iVar28] + 4) <= *(int *)(puVar9[uVar15] + 4)) {
        iVar29 = iVar28;
      }
      iVar25 = (int)uVar15;
      if (*(int *)(puVar9[uVar15] + 4) <= *(int *)(puVar9[iVar24] + 4)) {
        iVar25 = iVar24;
      }
      uVar15 = uVar15 + 1;
      iVar28 = iVar29;
      iVar24 = iVar25;
    } while (uVar26 != uVar15);
  }
  uVar26 = (ulong)(uVar6 - 1);
  if ((*(int *)*puVar9 == *(int *)puVar9[uVar26]) &&
     (((int *)*puVar9)[1] == ((int *)puVar9[uVar26])[1])) {
    *piVar11 = 0;
    uVar15 = 1;
  }
  else {
    if (uVar1 == 5) {
      puVar12 = puVar9;
      FUN_109ae2fe8(puVar9,0,iVar25,piVar10,0xffffffff,1);
      uVar6 = (uint)puVar12;
      piVar20 = piVar10 + (int)uVar6;
      puVar12 = puVar9;
      FUN_109ae2fe8(puVar9,uVar26,iVar25,piVar20,0xffffffff,0xffffffff);
      uVar7 = (uint)puVar12;
    }
    else {
      puVar12 = puVar9;
      FUN_109ae2e90(puVar9,0,iVar25,piVar10,0xffffffff,1);
      uVar6 = (uint)puVar12;
      piVar20 = piVar10 + (int)uVar6;
      puVar12 = puVar9;
      FUN_109ae2e90(puVar9,uVar26,iVar25,piVar20,0xffffffff,0xffffffff);
      uVar7 = (uint)puVar12;
    }
    piVar16 = piVar20;
    piVar27 = piVar10;
    uVar18 = uVar7;
    if ((param_3 & 1) != 0) {
      piVar16 = piVar10;
      piVar27 = piVar20;
      uVar18 = uVar6;
      uVar6 = uVar7;
    }
    if ((int)uVar18 < 2) {
      uVar15 = 0;
    }
    else {
      uVar15 = (ulong)(uVar18 - 1);
      piVar20 = piVar16;
      uVar23 = uVar15;
      piVar21 = piVar11;
      do {
        *piVar21 = (int)(puVar9[*piVar20] - uVar3 >> 3);
        uVar23 = uVar23 - 1;
        piVar20 = piVar20 + 1;
        piVar21 = piVar21 + 1;
      } while (uVar23 != 0);
    }
    if ((int)uVar6 < 2) {
LAB_109ae27cc:
      if (2 < (int)uVar18) {
        puVar8 = (uint *)(piVar16 + ((ulong)uVar18 - 2));
        goto LAB_109ae27ec;
      }
      uVar6 = 0xffffffff;
    }
    else {
      uVar23 = (ulong)uVar6 + 1;
      piVar20 = piVar27 + uVar6;
      piVar21 = piVar11 + uVar15;
      do {
        piVar20 = piVar20 + -1;
        *piVar21 = (int)(puVar9[*piVar20] - uVar3 >> 3);
        uVar15 = (ulong)((int)uVar15 + 1);
        uVar23 = uVar23 - 1;
        piVar21 = piVar21 + 1;
      } while (2 < uVar23);
      if (uVar6 == 2) goto LAB_109ae27cc;
      puVar8 = (uint *)(piVar27 + 1);
LAB_109ae27ec:
      uVar6 = *puVar8;
    }
    if (uVar1 == 5) {
      puVar12 = puVar9;
      FUN_109ae2fe8(puVar9,0,iVar29,piVar10,1,0xffffffff);
      uVar7 = (uint)puVar12;
      piVar20 = piVar10 + (int)uVar7;
      puVar12 = puVar9;
      FUN_109ae2fe8(puVar9,uVar26,iVar29,piVar20,1,1);
      uVar18 = (uint)puVar12;
    }
    else {
      puVar12 = puVar9;
      FUN_109ae2e90(puVar9,0,iVar29,piVar10,1,0xffffffff);
      uVar7 = (uint)puVar12;
      piVar20 = piVar10 + (int)uVar7;
      puVar12 = puVar9;
      FUN_109ae2e90(puVar9,uVar26,iVar29,piVar20,1,1);
      uVar18 = (uint)puVar12;
    }
    uVar19 = uVar18;
    piVar16 = piVar20;
    uVar22 = uVar7;
    if (param_3 != 0) {
      uVar19 = uVar7;
      piVar16 = piVar10;
      uVar22 = uVar18;
      piVar10 = piVar20;
    }
    if (-1 < (int)uVar6) {
      if ((int)uVar22 < 3) {
        if ((int)(uVar18 + uVar7) < 3) goto LAB_109ae28f4;
        puVar8 = (uint *)(piVar16 + (2 - uVar22));
      }
      else {
        puVar8 = (uint *)(piVar10 + 1);
      }
      uVar7 = *puVar8;
      if (uVar7 == uVar6) {
LAB_109ae28d8:
        if (1 < (int)uVar22) {
          uVar22 = 2;
        }
        if (1 < (int)uVar19) {
          uVar19 = 2;
        }
      }
      else if (-1 < (int)uVar7) {
        if ((*(int *)puVar9[uVar7] == *(int *)puVar9[uVar6]) &&
           (((int *)puVar9[uVar7])[1] == ((int *)puVar9[uVar6])[1])) goto LAB_109ae28d8;
      }
    }
LAB_109ae28f4:
    if (1 < (int)uVar22) {
      uVar26 = (ulong)(uVar22 - 1);
      piVar20 = piVar11 + uVar15;
      uVar15 = (ulong)((uVar22 - 1) + (int)uVar15);
      do {
        *piVar20 = (int)(puVar9[*piVar10] - uVar3 >> 3);
        uVar26 = uVar26 - 1;
        piVar10 = piVar10 + 1;
        piVar20 = piVar20 + 1;
      } while (uVar26 != 0);
    }
    if (1 < (int)uVar19) {
      uVar26 = (ulong)uVar19 + 1;
      piVar16 = piVar16 + uVar19;
      piVar10 = piVar11 + uVar15;
      do {
        piVar16 = piVar16 + -1;
        *piVar10 = (int)(puVar9[*piVar16] - uVar3 >> 3);
        uVar15 = (ulong)((int)uVar15 + 1);
        uVar26 = uVar26 - 1;
        piVar10 = piVar10 + 1;
      } while (2 < uVar26);
    }
  }
  iVar28 = (int)uVar15;
  if ((param_4 & 1) == 0) {
    puStack_da0 = &uStack_dd8;
    uStack_dd8 = CONCAT44(1,iVar28);
    uStack_db0 = 0;
    lStack_da8 = 0;
    uStack_de0 = (undefined4 *)0x242ff4004;
    lStack_d88 = 4;
    lStack_d90 = 4;
    piStack_dc0 = piVar11 + iVar28;
    piStack_dd0 = piVar11;
    piStack_dc8 = piVar11;
    piStack_db8 = piStack_dc0;
    plStack_d98 = &lStack_d90;
    FUN_109a479a0(&uStack_de0,param_2);
    if (lStack_da8 != 0) {
      piVar10 = (int *)(lStack_da8 + 0x14);
      do {
        iVar28 = *piVar10;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar28 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar28 + -1 == 0) {
        func_0x000109a848d4(&uStack_de0);
      }
    }
    if (0 < uStack_de0._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)puStack_da0 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_de0._4_4_);
    }
    bVar5 = plStack_d98 == &lStack_d90;
  }
  else {
    FUN_109a8f64c(param_2,uVar15,1,uVar1 | 8,0xffffffff,0,0);
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar9 = *(undefined8 **)(param_2 + 2);
      puStack_da0 = (undefined8 *)((ulong)&uStack_de0 | 8);
      uStack_dd8 = puVar9[1];
      uStack_de0 = (undefined4 *)*puVar9;
      piStack_dc8 = (int *)puVar9[3];
      piStack_dd0 = (int *)puVar9[2];
      piStack_db8 = (int *)puVar9[5];
      piStack_dc0 = (int *)puVar9[4];
      lStack_da8 = puVar9[7];
      uStack_db0 = puVar9[6];
      plStack_d98 = &lStack_d90;
      lStack_d90 = 0;
      lStack_d88 = 0;
      if (puVar9[7] != 0) {
        piVar10 = (int *)(puVar9[7] + 0x14);
        do {
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(int *)((long)puVar9 + 4) < 3) {
        lStack_d90 = *(long *)puVar9[9];
        lStack_d88 = ((long *)puVar9[9])[1];
      }
      else {
        uStack_de0 = (undefined4 *)((ulong)uStack_de0 & 0xffffffff);
        func_0x000109a84868(&uStack_de0);
      }
    }
    else {
      FUN_109a8a180(&uStack_de0,param_2,0xffffffff);
    }
    if ((uStack_de0._1_1_ >> 6 & 1) == 0) {
      lVar17 = *plStack_d98;
    }
    else {
      lVar17 = 8;
    }
    piVar10 = piStack_dd0;
    if (0 < iVar28) {
      do {
        *(undefined8 *)piVar10 = *(undefined8 *)(uVar3 + (long)*piVar11 * 8);
        uVar15 = uVar15 - 1;
        piVar10 = (int *)((long)piVar10 + lVar17);
        piVar11 = piVar11 + 1;
      } while (uVar15 != 0);
    }
    if (lStack_da8 != 0) {
      piVar10 = (int *)(lStack_da8 + 0x14);
      do {
        iVar28 = *piVar10;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = iVar28 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar28 + -1 == 0) {
        func_0x000109a848d4(&uStack_de0);
      }
    }
    if (0 < uStack_de0._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)puStack_da0 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_de0._4_4_);
    }
    bVar5 = plStack_d98 == &lStack_d90;
  }
  lStack_da8 = 0;
  piStack_db8 = (int *)0x0;
  piStack_dc0 = (int *)0x0;
  piStack_dc8 = (int *)0x0;
  piStack_dd0 = (int *)0x0;
  if (!bVar5 && plStack_d98 != (long *)0x0) {
    _free(plStack_d98[-1]);
  }
  if (piStack_d80 != piStack_df8) {
    if (piStack_d80 != (int *)0x0) {
      __ZdaPv();
    }
    uStack_d78 = 0x108;
  }
  if (piStack_950 != aiStack_940) {
    if (piStack_950 != (int *)0x0) {
      __ZdaPv();
    }
    uStack_948 = 0x108;
  }
  if ((puStack_520 != auStack_510) && (puStack_520 != (undefined8 *)0x0)) {
    __ZdaPv();
  }
LAB_109ae2c20:
  if (uStack_98 != 0) {
    piVar10 = (int *)(uStack_98 + 0x14);
    do {
      iVar28 = *piVar10;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = iVar28 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar28 + -1 == 0) {
      func_0x000109a848d4(&uStack_d0);
    }
  }
  uStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < uStack_d0._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(uStack_90 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_d0._4_4_);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    _free(puStack_88[-1]);
  }
  return;
}



/* Entry: 109ae2e90; end: 109ae2fe7;  */

int FUN_109ae2e90(long param_1,int param_2,int param_3,int *param_4,uint param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar1 = -1;
  if (param_2 < param_3) {
    iVar1 = 1;
  }
  if (param_2 != param_3) {
    piVar8 = *(int **)(param_1 + (long)param_2 * 8);
    piVar9 = *(int **)(param_1 + (long)param_3 * 8);
    if ((*piVar8 != *piVar9) || (piVar8[1] != piVar9[1])) {
      iVar11 = iVar1 + param_2;
      iVar7 = iVar11 + iVar1;
      *param_4 = param_2;
      param_4[1] = iVar11;
      param_4[2] = iVar7;
      if (iVar11 != param_3) {
        iVar10 = 3;
        iVar13 = param_2;
        do {
          piVar8 = *(int **)(param_1 + (long)iVar11 * 8);
          piVar9 = *(int **)(param_1 + (long)iVar7 * 8);
          iVar12 = piVar8[1];
          iVar6 = piVar9[1] - iVar12;
          if (((uint)(iVar6 != 0) | iVar6 >> 0x1f) == param_5) {
            param_4[(long)iVar10 + -1] = iVar7 + iVar1;
            iVar12 = iVar13;
            iVar7 = iVar7 + iVar1;
          }
          else {
            iVar4 = *piVar8;
            piVar8 = *(int **)(param_1 + (long)iVar13 * 8);
            iVar2 = *piVar8;
            iVar3 = piVar8[1];
            iVar5 = (iVar12 - iVar3) * (*piVar9 - iVar4);
            iVar6 = (iVar4 - iVar2) * iVar6;
            uVar14 = (uint)(iVar6 < iVar5);
            if (iVar5 < iVar6) {
              uVar14 = 0xffffffff;
            }
            if ((uVar14 == param_6) && (iVar4 != iVar2 || iVar12 != iVar3)) {
              param_4[iVar10] = iVar7 + iVar1;
              iVar10 = iVar10 + 1;
              iVar12 = iVar11;
              iVar11 = iVar7;
              iVar7 = iVar7 + iVar1;
            }
            else if (iVar13 == param_2) {
              param_4[1] = iVar7;
              param_4[2] = iVar7 + iVar1;
              iVar12 = param_2;
              iVar11 = iVar7;
              iVar7 = iVar7 + iVar1;
            }
            else {
              param_4[(long)iVar10 + -2] = iVar7;
              iVar12 = param_4[(long)iVar10 + -4];
              iVar10 = iVar10 + -1;
              iVar11 = iVar13;
            }
          }
          iVar13 = iVar12;
        } while (iVar7 != iVar1 + param_3);
        return iVar10 + -1;
      }
      return 2;
    }
  }
  *param_4 = param_2;
  return 1;
}



/* Entry: 109ae2fe8; end: 109ae3147;  */

int FUN_109ae2fe8(long param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = -1;
  if (param_2 < param_3) {
    iVar1 = 1;
  }
  if (param_2 != param_3) {
    pfVar4 = *(float **)(param_1 + (long)param_2 * 8);
    pfVar5 = *(float **)(param_1 + (long)param_3 * 8);
    if ((*pfVar4 != *pfVar5) || (pfVar4[1] != pfVar5[1])) {
      iVar7 = iVar1 + param_2;
      iVar3 = iVar7 + iVar1;
      *param_4 = param_2;
      param_4[1] = iVar7;
      param_4[2] = iVar3;
      if (iVar7 != param_3) {
        iVar6 = 3;
        iVar9 = param_2;
        do {
          pfVar5 = *(float **)(param_1 + (long)iVar7 * 8);
          fVar10 = pfVar5[1];
          pfVar4 = *(float **)(param_1 + (long)iVar3 * 8);
          fVar11 = pfVar4[1] - fVar10;
          if ((uint)(fVar11 != 0.0 && fVar11 >= 0.0) - (uint)(fVar11 < 0.0) == param_5) {
            param_4[(long)iVar6 + -1] = iVar3 + iVar1;
            iVar8 = iVar9;
            iVar3 = iVar3 + iVar1;
          }
          else {
            fVar13 = *pfVar5;
            pfVar5 = *(float **)(param_1 + (long)iVar9 * 8);
            fVar12 = fVar13 - *pfVar5;
            fVar10 = fVar10 - pfVar5[1];
            fVar11 = -(fVar12 * fVar11) + (*pfVar4 - fVar13) * fVar10;
            if (((uint)(fVar11 != 0.0 && fVar11 >= 0.0) - (uint)(fVar11 < 0.0) == param_6) &&
               ((fVar12 != 0.0 || (fVar10 != 0.0)))) {
              param_4[iVar6] = iVar3 + iVar1;
              iVar6 = iVar6 + 1;
              iVar8 = iVar7;
              iVar7 = iVar3;
              iVar3 = iVar3 + iVar1;
            }
            else if (iVar9 == param_2) {
              param_4[1] = iVar3;
              param_4[2] = iVar3 + iVar1;
              iVar8 = param_2;
              iVar7 = iVar3;
              iVar3 = iVar3 + iVar1;
            }
            else {
              param_4[(long)iVar6 + -2] = iVar3;
              lVar2 = (long)iVar6;
              iVar6 = iVar6 + -1;
              iVar8 = param_4[lVar2 + -4];
              iVar7 = iVar9;
            }
          }
          iVar9 = iVar8;
        } while (iVar3 != iVar1 + param_3);
        return iVar6 + -1;
      }
      return 2;
    }
  }
  *param_4 = param_2;
  return 1;
}



/* Entry: 109ae3148; end: 109ae38fb;  */

void FUN_109ae3148(uint *param_1,uint *param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  int *piStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar16 = *(ulong **)(param_1 + 2);
    uStack_a0 = (ulong)&uStack_e0 | 8;
    uStack_d8 = puVar16[1];
    uStack_e0 = *puVar16;
    uStack_c8 = puVar16[3];
    uStack_d0 = puVar16[2];
    uStack_b8 = puVar16[5];
    uStack_c0 = puVar16[4];
    uStack_a8 = puVar16[7];
    uStack_b0 = puVar16[6];
    puStack_98 = &uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    if (puVar16[7] != 0) {
      piVar2 = (int *)(puVar16[7] + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = *piVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    if (*(int *)((long)puVar16 + 4) < 3) {
      uStack_90 = *(undefined8 *)puVar16[9];
      uStack_88 = ((undefined8 *)puVar16[9])[1];
    }
    else {
      uStack_e0 = uStack_e0 & 0xffffffff;
      func_0x000109a84868(&uStack_e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_e0,param_1,0xffffffff);
  }
  puVar17 = &uStack_e0;
  FUN_109a89cd4(puVar17,2,4,1);
  uVar13 = (uint)puVar17;
  if ((int)uVar13 < 0) {
    puVar15 = (undefined4 *)0x14;
    func_0x000107c2ae8c();
    *puVar15 = 1;
    uStack_140 = (undefined8 *)(puVar15 + 1);
    *uStack_140 = 0x2073746e696f706e;
    uStack_138 = 0xc;
    *(undefined1 *)(puVar15 + 4) = 0;
    puVar15[3] = 0x30203d3e;
    FUN_109ac3188(0xffffff29,&uStack_140,&UNK_10f59c117,&UNK_10f59c071,0x10d);
  }
  else {
    if (uVar13 < 4) {
      FUN_109a8e944(param_3);
LAB_109ae35d8:
      if (uStack_a8 != 0) {
        piVar2 = (int *)(uStack_a8 + 0x14);
        do {
          iVar4 = *piVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = iVar4 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar4 + -1 == 0) {
          func_0x000109a848d4(&uStack_e0);
        }
      }
      uStack_a8 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      if (0 < uStack_e0._4_4_) {
        lVar19 = 0;
        do {
          *(undefined4 *)(uStack_a0 + lVar19 * 4) = 0;
          lVar19 = lVar19 + 1;
        } while (lVar19 < uStack_e0._4_4_);
      }
      if (puStack_98 != &uStack_90 && puStack_98 != (undefined8 *)0x0) {
        _free(puStack_98[-1]);
      }
      return;
    }
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar17 = *(undefined8 **)(param_2 + 2);
      uStack_138 = puVar17[1];
      uStack_140 = (undefined8 *)*puVar17;
      uStack_128 = puVar17[3];
      piStack_130 = (int *)puVar17[2];
      uStack_118 = puVar17[5];
      uStack_120 = puVar17[4];
      lStack_108 = puVar17[7];
      uStack_110 = puVar17[6];
      uStack_100 = (ulong)&uStack_140 | 8;
      puStack_f8 = &uStack_f0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      if (puVar17[7] != 0) {
        piVar2 = (int *)(puVar17[7] + 0x14);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = *piVar2 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      if (*(int *)((long)puVar17 + 4) < 3) {
        uStack_f0 = *(undefined8 *)puVar17[9];
        uStack_e8 = ((undefined8 *)puVar17[9])[1];
      }
      else {
        uStack_140 = (undefined8 *)((ulong)uStack_140 & 0xffffffff);
        func_0x000109a84868(&uStack_140);
      }
    }
    else {
      FUN_109a8a180(&uStack_140,param_2,0xffffffff);
    }
    puVar17 = &uStack_140;
    FUN_109a89cd4(puVar17,1,4,1);
    uVar11 = uStack_d0;
    piVar2 = piStack_130;
    uVar14 = (uint)puVar17;
    if ((int)uVar14 < 3) {
      puVar15 = (undefined4 *)0x10;
      func_0x000107c2ae8c();
      *puVar15 = 1;
      uStack_1b8 = (undefined8 *)(puVar15 + 1);
      *uStack_1b8 = 0x2073746e696f7068;
      uStack_1b0 = 0xb;
      *(undefined1 *)((long)puVar15 + 0xf) = 0;
      *(undefined4 *)((long)puVar15 + 0xb) = 0x32203e20;
      FUN_109ac3188(0xffffff29,&uStack_1b8,&UNK_10f59c117,&UNK_10f59c071,0x117);
    }
    else {
      lStack_158 = 0;
      lStack_150 = 0;
      uStack_148 = 0;
      cVar8 = *piStack_130 < piStack_130[1];
      if (piStack_130[1] < piStack_130[2]) {
        cVar8 = cVar8 + '\x01';
      }
      if (piStack_130[2] < *piStack_130) {
        cVar8 = cVar8 + '\x01';
      }
      uVar18 = uVar14 - 1;
      if (cVar8 != '\x02') {
        uVar18 = 0;
      }
      if ((uint)piStack_130[uVar18] < uVar13) {
        uVar22 = 0;
        uVar18 = piStack_130[uVar18];
        uVar20 = 0;
        do {
          uVar7 = uVar22;
          if (cVar8 != '\x02') {
            uVar7 = uVar14 + ~uVar22;
          }
          uVar7 = piVar2[(int)uVar7];
          if (uVar13 <= uVar7) {
            puVar15 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar15 = 1;
            uStack_1b8 = (undefined8 *)(puVar15 + 1);
            uStack_1b0 = 0x1d;
            *(undefined1 *)((long)puVar15 + 0x21) = 0;
            *(undefined8 *)(puVar15 + 3) = 0x6e68202626207478;
            *(undefined8 *)(puVar15 + 1) = 0x656e68203d3c2030;
            *(undefined8 *)((long)puVar15 + 0x19) = 0x73746e696f706e20;
            *(undefined8 *)((long)puVar15 + 0x11) = 0x3c207478656e6820;
            FUN_109ac3188(0xffffff29,&uStack_1b8,&UNK_10f59c117,&UNK_10f59c071,0x127);
            goto LAB_109ae37fc;
          }
          piVar1 = (int *)(uVar11 + (long)(int)uVar18 * 8);
          iVar4 = *piVar1;
          iVar5 = piVar1[1];
          piVar1 = (int *)(uVar11 + (long)(int)uVar7 * 8);
          iVar6 = piVar1[1];
          iVar10 = *piVar1 - iVar4;
          dVar23 = (double)iVar10;
          dVar25 = (double)(iVar6 - iVar5);
          dVar24 = 0.0;
          if (iVar10 != 0 || iVar6 != iVar5) {
            dVar24 = 1.0 / SQRT(dVar25 * dVar25 + dVar23 * dVar23);
          }
          uVar21 = 0;
          if ((int)(uVar20 + 1) < (int)uVar13) {
            uVar21 = uVar20 + 1;
          }
          if (uVar21 != uVar7) {
            bVar9 = false;
            uVar20 = 0xffffffff;
            dVar26 = 0.0;
            do {
              piVar1 = (int *)(uVar11 + (long)(int)uVar21 * 8);
              dVar28 = dVar24 * ABS(dVar23 * (double)(piVar1[1] - iVar5) +
                                    (double)(*piVar1 - iVar4) * -dVar25);
              dVar27 = dVar28;
              uVar3 = uVar21;
              if (dVar28 <= dVar26) {
                dVar27 = dVar26;
                uVar3 = uVar20;
              }
              uVar20 = uVar3;
              bVar9 = (bool)(dVar26 < dVar28 | bVar9);
              uVar3 = 0;
              if ((int)(uVar21 + 1) < (int)uVar13) {
                uVar3 = uVar21 + 1;
              }
              dVar26 = dVar27;
              uVar21 = uVar3;
            } while (uVar3 != uVar7);
            if (bVar9) {
              uStack_1b8 = (undefined8 *)CONCAT44(uVar7,uVar18);
              uStack_1b0 = CONCAT44((int)(long)(double)(long)(dVar27 * 256.0),uVar20);
              FUN_1092e3d30(&lStack_158,&uStack_1b8);
            }
          }
          uVar22 = uVar22 + 1;
          uVar18 = uVar7;
          uVar20 = uVar7;
        } while (uVar22 != uVar14);
        uStack_1b8 = (undefined8 *)0x242ff401c;
        puStack_178 = &uStack_1b0;
        lStack_1a0 = 0;
        lStack_198 = 0;
        uStack_188 = 0;
        lStack_180 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        uVar11 = lStack_150 - lStack_158;
        uStack_1b0 = CONCAT44(1,(int)(uVar11 >> 4));
        if (uVar11 != 0) {
          uStack_160 = 0x10;
          uStack_168 = 0x10;
          lStack_1a0 = lStack_158;
          lStack_198 = lStack_158 + ((long)(uVar11 * 0x10000000) >> 0x20) * 0x10;
          lStack_190 = lStack_198;
        }
        lStack_1a8 = lStack_1a0;
        puStack_170 = &uStack_168;
        FUN_109a479a0(&uStack_1b8,param_3);
        if (lStack_180 != 0) {
          piVar2 = (int *)(lStack_180 + 0x14);
          do {
            iVar4 = *piVar2;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = iVar4 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_1b8);
          }
        }
        lStack_180 = 0;
        lStack_1a0 = 0;
        lStack_1a8 = 0;
        lStack_190 = 0;
        lStack_198 = 0;
        if (0 < uStack_1b8._4_4_) {
          lVar19 = 0;
          do {
            *(undefined4 *)((long)puStack_178 + lVar19 * 4) = 0;
            lVar19 = lVar19 + 1;
          } while (lVar19 < uStack_1b8._4_4_);
        }
        if (puStack_170 != &uStack_168 && puStack_170 != (undefined8 *)0x0) {
          _free(puStack_170[-1]);
        }
        if (lStack_158 != 0) {
          lStack_150 = lStack_158;
          __ZdlPv();
        }
        if (lStack_108 != 0) {
          piVar2 = (int *)(lStack_108 + 0x14);
          do {
            iVar4 = *piVar2;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = iVar4 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar4 + -1 == 0) {
            func_0x000109a848d4(&uStack_140);
          }
        }
        lStack_108 = 0;
        uStack_128 = 0;
        piStack_130 = (int *)0x0;
        uStack_118 = 0;
        uStack_120 = 0;
        if (0 < uStack_140._4_4_) {
          lVar19 = 0;
          do {
            *(undefined4 *)(uStack_100 + lVar19 * 4) = 0;
            lVar19 = lVar19 + 1;
          } while (lVar19 < uStack_140._4_4_);
        }
        if (puStack_f8 != &uStack_f0 && puStack_f8 != (undefined8 *)0x0) {
          _free(puStack_f8[-1]);
        }
        goto LAB_109ae35d8;
      }
      puVar15 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar15 = 1;
      uStack_1b8 = (undefined8 *)(puVar15 + 1);
      uStack_1b0 = 0x1d;
      *(undefined1 *)((long)puVar15 + 0x21) = 0;
      *(undefined8 *)(puVar15 + 3) = 0x6368202626207272;
      *(undefined8 *)(puVar15 + 1) = 0x756368203d3c2030;
      *(undefined8 *)((long)puVar15 + 0x19) = 0x73746e696f706e20;
      *(undefined8 *)((long)puVar15 + 0x11) = 0x3c20727275636820;
      FUN_109ac3188(0xffffff29,&uStack_1b8,&UNK_10f59c117,&UNK_10f59c071,0x122);
    }
  }
LAB_109ae37fc:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109ae3800);
  (*pcVar12)();
}



/* Entry: 109ae38fc; end: 109ae3c7f;  */

bool FUN_109ae38fc(uint *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  int *piStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar12 = *(ulong **)(param_1 + 2);
    uStack_40 = (ulong)&uStack_80 | 8;
    uStack_78 = puVar12[1];
    uStack_80 = *puVar12;
    uStack_68 = puVar12[3];
    piStack_70 = (int *)puVar12[2];
    uStack_58 = puVar12[5];
    uStack_60 = puVar12[4];
    uStack_48 = puVar12[7];
    uStack_50 = puVar12[6];
    puStack_38 = &uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    if (puVar12[7] != 0) {
      piVar14 = (int *)(puVar12[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar8) {
          *piVar14 = *piVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar12 + 4) < 3) {
      uStack_30 = *(undefined8 *)puVar12[9];
      uStack_28 = ((undefined8 *)puVar12[9])[1];
    }
    else {
      uStack_80 = uStack_80 & 0xffffffff;
      func_0x000109a84868(&uStack_80);
    }
  }
  else {
    FUN_109a8a180(&uStack_80,param_1,0xffffffff);
  }
  puVar10 = &uStack_80;
  FUN_109a89cd4(puVar10,2,0xffffffff,1);
  iVar9 = (int)puVar10;
  if ((iVar9 < 0) || (((uint)uStack_80 & 6) != 4)) {
    puVar11 = (undefined4 *)0x38;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar11 + 3) = 0x6428202626203020;
    *(undefined8 *)(puVar11 + 1) = 0x3d3e206c61746f74;
    *puVar11 = 1;
    puStack_90 = puVar11 + 1;
    uStack_88 = 0x32;
    *(undefined2 *)(puVar11 + 0xd) = 0x2953;
    *(undefined1 *)((long)puVar11 + 0x36) = 0;
    *(undefined8 *)(puVar11 + 7) = 0x7c204632335f5643;
    *(undefined8 *)(puVar11 + 5) = 0x203d3d2068747065;
    *(undefined8 *)(puVar11 + 0xb) = 0x32335f5643203d3d;
    *(undefined8 *)(puVar11 + 9) = 0x206874706564207c;
    FUN_109ac3188(0xffffff29,&puStack_90,&UNK_10f59c170,&UNK_10f59c071,0x17e);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x109ae3c40);
    (*pcVar7)();
  }
  if (iVar9 == 0) {
LAB_109ae3ad4:
    bVar8 = false;
  }
  else {
    uVar13 = (ulong)puVar10 & 0xffffffff;
    iVar19 = iVar9 * 2 + -2;
    iVar20 = 0;
    if (iVar9 != 0) {
      iVar20 = iVar19 / iVar9;
    }
    lVar17 = (long)(iVar19 - iVar20 * iVar9);
    if (((uint)uStack_80 & 7) == 4) {
      piVar14 = piStack_70 + 3;
      iVar19 = *piStack_70 - piStack_70[uVar13 * 2 + -2];
      iVar21 = piStack_70[1] - piStack_70[uVar13 * 2 + -1];
      iVar9 = iVar19 * (piStack_70[uVar13 * 2 + -1] - (piStack_70 + lVar17 * 2)[1]);
      iVar20 = iVar21 * (piStack_70[uVar13 * 2 + -2] - piStack_70[lVar17 * 2]);
      uVar15 = 2;
      if (iVar9 <= iVar20) {
        uVar15 = 3;
      }
      if (iVar9 < iVar20) {
        uVar15 = 1;
      }
      if (uVar15 == 3) goto LAB_109ae3ad4;
      uVar18 = 0;
      iVar9 = *piStack_70;
      iVar20 = piStack_70[1];
      do {
        uVar6 = uVar13;
        if (uVar13 - 1 == uVar18) break;
        piVar1 = piVar14 + -1;
        iVar2 = *piVar14;
        iVar5 = *piVar1 - iVar9;
        iVar9 = iVar5 * iVar21;
        iVar21 = iVar2 - iVar20;
        uVar16 = 2;
        if (iVar9 <= iVar21 * iVar19) {
          uVar16 = 3;
        }
        if (iVar9 < iVar21 * iVar19) {
          uVar16 = 1;
        }
        uVar15 = uVar16 | uVar15;
        piVar14 = piVar14 + 2;
        uVar18 = uVar18 + 1;
        iVar9 = *piVar1;
        iVar20 = iVar2;
        iVar19 = iVar5;
        uVar6 = uVar18;
      } while (uVar15 != 3);
    }
    else {
      uVar23 = *(undefined8 *)piStack_70;
      fVar24 = (float)*(undefined8 *)(piStack_70 + uVar13 * 2 + -2);
      fVar25 = (float)((ulong)*(undefined8 *)(piStack_70 + uVar13 * 2 + -2) >> 0x20);
      uVar22 = CONCAT44((float)((ulong)uVar23 >> 0x20) - fVar25,(float)uVar23 - fVar24);
      uVar26 = NEON_rev64(uVar22,4);
      fVar24 = (fVar24 - (float)*(undefined8 *)(piStack_70 + lVar17 * 2)) * (float)uVar26;
      fVar25 = (fVar25 - (float)((ulong)*(undefined8 *)(piStack_70 + lVar17 * 2) >> 0x20)) *
               (float)((ulong)uVar26 >> 0x20);
      uVar15 = 2;
      if (fVar25 <= fVar24) {
        uVar15 = 3;
      }
      if (fVar25 < fVar24) {
        uVar15 = 1;
      }
      if (uVar15 == 3) goto LAB_109ae3ad4;
      uVar18 = 0;
      do {
        uVar6 = uVar13;
        if (uVar13 - 1 == uVar18) break;
        uVar26 = *(undefined8 *)(piStack_70 + uVar18 * 2 + 2);
        uVar23 = CONCAT44((float)((ulong)uVar26 >> 0x20) - (float)((ulong)uVar23 >> 0x20),
                          (float)uVar26 - (float)uVar23);
        uVar27 = NEON_rev64(uVar23,4);
        fVar24 = (float)uVar22 * (float)uVar27;
        fVar25 = (float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar27 >> 0x20);
        uVar16 = 2;
        if (fVar25 <= fVar24) {
          uVar16 = 3;
        }
        if (fVar25 < fVar24) {
          uVar16 = 1;
        }
        uVar15 = uVar16 | uVar15;
        uVar18 = uVar18 + 1;
        uVar22 = uVar23;
        uVar23 = uVar26;
        uVar6 = uVar18;
      } while (uVar15 != 3);
    }
    bVar8 = uVar13 <= uVar6;
  }
  if (uStack_48 != 0) {
    piVar14 = (int *)(uStack_48 + 0x14);
    do {
      iVar9 = *piVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar4) {
        *piVar14 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_80);
    }
  }
  uStack_48 = 0;
  uStack_68 = 0;
  piStack_70 = (int *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (0 < uStack_80._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(uStack_40 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_80._4_4_);
  }
  if (puStack_38 != &uStack_30 && puStack_38 != (undefined8 *)0x0) {
    _free(puStack_38[-1]);
  }
  return bVar8;
}



/* Entry: 109ae3c80; end: 109ae4b6f;  */

void FUN_109ae3c80(long *param_1,long *param_2,long param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  
LAB_109ae3ca8:
  plVar9 = param_2 + -1;
  plVar8 = param_1;
LAB_109ae3cb0:
  do {
    param_1 = plVar8;
    uVar10 = (long)param_2 - (long)param_1 >> 3;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        piVar6 = (int *)param_2[-1];
        piVar13 = (int *)*param_1;
        if (*piVar13 <= *piVar6) {
          if (*piVar6 != *piVar13) {
            return;
          }
          if (piVar13[1] <= piVar6[1]) {
            return;
          }
        }
        *param_1 = (long)piVar6;
        param_2[-1] = (long)piVar13;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        piVar6 = (int *)*param_1;
        piVar13 = (int *)param_1[1];
        iVar2 = *piVar13;
        iVar16 = *piVar6;
        if ((iVar16 <= iVar2) && ((iVar2 != iVar16 || (piVar6[1] <= piVar13[1])))) {
          piVar6 = (int *)param_2[-1];
          if (iVar2 <= *piVar6) {
            if (*piVar6 != iVar2) {
              return;
            }
            if (piVar13[1] <= piVar6[1]) {
              return;
            }
          }
          param_1[1] = (long)piVar6;
          param_2[-1] = (long)piVar13;
          piVar6 = (int *)*param_1;
          piVar13 = (int *)param_1[1];
          if (*piVar6 <= *piVar13) {
            if (*piVar13 != *piVar6) {
              return;
            }
            if (piVar6[1] <= piVar13[1]) {
              return;
            }
          }
          *param_1 = (long)piVar13;
          param_1[1] = (long)piVar6;
          return;
        }
        piVar18 = (int *)param_2[-1];
        if ((*piVar18 < iVar2) || ((*piVar18 == iVar2 && (piVar18[1] < piVar13[1])))) {
          *param_1 = (long)piVar18;
        }
        else {
          *param_1 = (long)piVar13;
          param_1[1] = (long)piVar6;
          piVar13 = (int *)param_2[-1];
          if (iVar16 <= *piVar13) {
            if (*piVar13 != iVar16) {
              return;
            }
            if (piVar6[1] <= piVar13[1]) {
              return;
            }
          }
          param_1[1] = (long)piVar13;
        }
        param_2[-1] = (long)piVar6;
        return;
      }
      if (uVar10 == 4) {
        plVar8 = param_1 + 1;
        plVar11 = param_1 + 2;
        piVar6 = (int *)*plVar8;
        piVar13 = (int *)*param_1;
        iVar2 = *piVar6;
        iVar16 = *piVar13;
        if ((iVar2 < iVar16) || ((iVar2 == iVar16 && (piVar6[1] < piVar13[1])))) {
          piVar18 = (int *)*plVar11;
          if ((*piVar18 < iVar2) || ((*piVar18 == iVar2 && (piVar18[1] < piVar6[1])))) {
            *param_1 = (long)piVar18;
          }
          else {
            *param_1 = (long)piVar6;
            *plVar8 = (long)piVar13;
            piVar18 = (int *)*plVar11;
            if ((iVar16 <= *piVar18) && ((*piVar18 != iVar16 || (piVar13[1] <= piVar18[1]))))
            goto LAB_109ae4c2c;
            *plVar8 = (long)piVar18;
          }
          *plVar11 = (long)piVar13;
          piVar18 = piVar13;
        }
        else {
          piVar18 = (int *)*plVar11;
          if ((*piVar18 < iVar2) || ((*piVar18 == iVar2 && (piVar18[1] < piVar6[1])))) {
            *plVar8 = (long)piVar18;
            *plVar11 = (long)piVar6;
            piVar13 = (int *)*plVar8;
            piVar14 = (int *)*param_1;
            if ((*piVar13 < *piVar14) ||
               ((piVar18 = piVar6, *piVar13 == *piVar14 && (piVar13[1] < piVar14[1])))) {
              *param_1 = (long)piVar13;
              *plVar8 = (long)piVar14;
              piVar18 = (int *)*plVar11;
            }
          }
        }
LAB_109ae4c2c:
        piVar6 = (int *)*plVar9;
        if ((*piVar6 < *piVar18) || ((*piVar6 == *piVar18 && (piVar6[1] < piVar18[1])))) {
          *plVar11 = (long)piVar6;
          *plVar9 = (long)piVar18;
          piVar6 = (int *)*plVar11;
          piVar13 = (int *)*plVar8;
          if ((*piVar6 < *piVar13) || ((*piVar6 == *piVar13 && (piVar6[1] < piVar13[1])))) {
            *plVar8 = (long)piVar6;
            *plVar11 = (long)piVar13;
            piVar6 = (int *)*plVar8;
            piVar13 = (int *)*param_1;
            if ((*piVar6 < *piVar13) || ((*piVar6 == *piVar13 && (piVar6[1] < piVar13[1])))) {
              *param_1 = (long)piVar6;
              *plVar8 = (long)piVar13;
              return;
            }
          }
        }
        return;
      }
      if (uVar10 == 5) {
        FUN_109ae4b70(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
        piVar6 = (int *)param_2[-1];
        piVar13 = (int *)param_1[3];
        if (*piVar13 <= *piVar6) {
          if (*piVar6 != *piVar13) {
            return;
          }
          if (piVar13[1] <= piVar6[1]) {
            return;
          }
        }
        param_1[3] = (long)piVar6;
        param_2[-1] = (long)piVar13;
        piVar6 = (int *)param_1[2];
        piVar13 = (int *)param_1[3];
        iVar2 = *piVar13;
        if (*piVar6 <= iVar2) {
          if (iVar2 != *piVar6) {
            return;
          }
          if (piVar6[1] <= piVar13[1]) {
            return;
          }
        }
        param_1[2] = (long)piVar13;
        param_1[3] = (long)piVar6;
        piVar6 = (int *)param_1[1];
        if (*piVar6 <= iVar2) {
          if (iVar2 != *piVar6) {
            return;
          }
          if (piVar6[1] <= piVar13[1]) {
            return;
          }
        }
        param_1[1] = (long)piVar13;
        param_1[2] = (long)piVar6;
        piVar6 = (int *)*param_1;
        if (*piVar6 <= iVar2) {
          if (iVar2 != *piVar6) {
            return;
          }
          if (piVar6[1] <= piVar13[1]) {
            return;
          }
        }
        *param_1 = (long)piVar13;
        param_1[1] = (long)piVar6;
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      plVar8 = param_1 + 1;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || plVar8 == param_2) {
          return;
        }
        do {
          plVar9 = plVar8;
          piVar6 = (int *)*param_1;
          piVar13 = (int *)param_1[1];
          iVar2 = *piVar13;
          if ((iVar2 < *piVar6) || ((iVar2 == *piVar6 && (piVar13[1] < piVar6[1])))) {
            do {
              do {
                plVar8 = param_1;
                param_1 = plVar8 + -1;
                piVar18 = (int *)*param_1;
                plVar8[1] = (long)piVar6;
                piVar6 = piVar18;
              } while (iVar2 < *piVar18);
            } while ((iVar2 == *piVar18) && (piVar13[1] < piVar18[1]));
            *plVar8 = (long)piVar13;
          }
          plVar8 = plVar9 + 1;
          param_1 = plVar9;
        } while (plVar8 != param_2);
        return;
      }
      if (param_1 == param_2 || plVar8 == param_2) {
        return;
      }
      lVar12 = 0;
      plVar9 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar7 = uVar10 - 2 >> 1;
      uVar21 = uVar7;
      goto LAB_109ae4710;
    }
    plVar8 = param_1 + (uVar10 >> 1);
    if (uVar10 < 0x81) {
      piVar13 = (int *)*param_1;
      piVar6 = (int *)*plVar8;
      iVar2 = *piVar13;
      iVar16 = *piVar6;
      if ((iVar2 < iVar16) || ((iVar2 == iVar16 && (piVar13[1] < piVar6[1])))) {
        piVar18 = (int *)*plVar9;
        if ((*piVar18 < iVar2) || ((*piVar18 == iVar2 && (piVar18[1] < piVar13[1])))) {
          *plVar8 = (long)piVar18;
        }
        else {
          *plVar8 = (long)piVar13;
          *param_1 = (long)piVar6;
          piVar13 = (int *)*plVar9;
          if ((iVar16 <= *piVar13) && ((*piVar13 != iVar16 || (piVar6[1] <= piVar13[1]))))
          goto LAB_109ae4084;
          *param_1 = (long)piVar13;
        }
        *plVar9 = (long)piVar6;
      }
      else {
        piVar6 = (int *)*plVar9;
        if ((*piVar6 < iVar2) || ((*piVar6 == iVar2 && (piVar6[1] < piVar13[1])))) {
          *param_1 = (long)piVar6;
          *plVar9 = (long)piVar13;
          piVar6 = (int *)*param_1;
          piVar13 = (int *)*plVar8;
          if ((*piVar6 < *piVar13) || ((*piVar6 == *piVar13 && (piVar6[1] < piVar13[1])))) {
            *plVar8 = (long)piVar6;
            *param_1 = (long)piVar13;
          }
        }
      }
    }
    else {
      piVar13 = (int *)*plVar8;
      piVar6 = (int *)*param_1;
      iVar2 = *piVar13;
      iVar16 = *piVar6;
      if ((iVar2 < iVar16) || ((iVar2 == iVar16 && (piVar13[1] < piVar6[1])))) {
        piVar18 = (int *)*plVar9;
        if ((*piVar18 < iVar2) || ((*piVar18 == iVar2 && (piVar18[1] < piVar13[1])))) {
          *param_1 = (long)piVar18;
        }
        else {
          *param_1 = (long)piVar13;
          *plVar8 = (long)piVar6;
          piVar13 = (int *)*plVar9;
          if ((iVar16 <= *piVar13) && ((*piVar13 != iVar16 || (piVar6[1] <= piVar13[1]))))
          goto LAB_109ae3e3c;
          *plVar8 = (long)piVar13;
        }
        *plVar9 = (long)piVar6;
      }
      else {
        piVar6 = (int *)*plVar9;
        if ((*piVar6 < iVar2) || ((*piVar6 == iVar2 && (piVar6[1] < piVar13[1])))) {
          *plVar8 = (long)piVar6;
          *plVar9 = (long)piVar13;
          piVar6 = (int *)*plVar8;
          piVar13 = (int *)*param_1;
          if ((*piVar6 < *piVar13) || ((*piVar6 == *piVar13 && (piVar6[1] < piVar13[1])))) {
            *param_1 = (long)piVar6;
            *plVar8 = (long)piVar13;
          }
        }
      }
LAB_109ae3e3c:
      piVar13 = (int *)plVar8[-1];
      piVar6 = (int *)param_1[1];
      iVar2 = *piVar13;
      iVar16 = *piVar6;
      if ((iVar2 < iVar16) || ((iVar2 == iVar16 && (piVar13[1] < piVar6[1])))) {
        piVar18 = (int *)param_2[-2];
        if ((*piVar18 < iVar2) || ((*piVar18 == iVar2 && (piVar18[1] < piVar13[1])))) {
          param_1[1] = (long)piVar18;
        }
        else {
          param_1[1] = (long)piVar13;
          plVar8[-1] = (long)piVar6;
          piVar13 = (int *)param_2[-2];
          if ((iVar16 <= *piVar13) && ((*piVar13 != iVar16 || (piVar6[1] <= piVar13[1]))))
          goto LAB_109ae3f28;
          plVar8[-1] = (long)piVar13;
        }
        param_2[-2] = (long)piVar6;
      }
      else {
        piVar6 = (int *)param_2[-2];
        if ((*piVar6 < iVar2) || ((*piVar6 == iVar2 && (piVar6[1] < piVar13[1])))) {
          plVar8[-1] = (long)piVar6;
          param_2[-2] = (long)piVar13;
          piVar6 = (int *)plVar8[-1];
          piVar13 = (int *)param_1[1];
          if ((*piVar6 < *piVar13) || ((*piVar6 == *piVar13 && (piVar6[1] < piVar13[1])))) {
            param_1[1] = (long)piVar6;
            plVar8[-1] = (long)piVar13;
          }
        }
      }
LAB_109ae3f28:
      plVar11 = plVar8 + 1;
      piVar13 = (int *)*plVar11;
      piVar6 = (int *)param_1[2];
      iVar2 = *piVar13;
      iVar16 = *piVar6;
      if ((iVar2 < iVar16) || ((iVar2 == iVar16 && (piVar13[1] < piVar6[1])))) {
        piVar18 = (int *)param_2[-3];
        if ((*piVar18 < iVar2) || ((*piVar18 == iVar2 && (piVar18[1] < piVar13[1])))) {
          param_1[2] = (long)piVar18;
        }
        else {
          param_1[2] = (long)piVar13;
          *plVar11 = (long)piVar6;
          piVar13 = (int *)param_2[-3];
          if ((iVar16 <= *piVar13) && ((*piVar13 != iVar16 || (piVar6[1] <= piVar13[1]))))
          goto LAB_109ae3fe0;
          *plVar11 = (long)piVar13;
        }
        param_2[-3] = (long)piVar6;
      }
      else {
        piVar6 = (int *)param_2[-3];
        if ((*piVar6 < iVar2) || ((*piVar6 == iVar2 && (piVar6[1] < piVar13[1])))) {
          *plVar11 = (long)piVar6;
          param_2[-3] = (long)piVar13;
          piVar6 = (int *)*plVar11;
          piVar13 = (int *)param_1[2];
          if ((*piVar6 < *piVar13) || ((*piVar6 == *piVar13 && (piVar6[1] < piVar13[1])))) {
            param_1[2] = (long)piVar6;
            *plVar11 = (long)piVar13;
          }
        }
      }
LAB_109ae3fe0:
      piVar6 = (int *)plVar8[-1];
      piVar13 = (int *)*plVar8;
      iVar2 = *piVar13;
      iVar16 = *piVar6;
      if ((iVar2 < iVar16) || ((iVar2 == iVar16 && (piVar13[1] < piVar6[1])))) {
        piVar18 = (int *)*plVar11;
        iVar3 = *piVar18;
        if ((iVar3 < iVar2) || ((iVar3 == iVar2 && (piVar18[1] < piVar13[1])))) {
          plVar8[-1] = (long)piVar18;
        }
        else {
          plVar8[-1] = (long)piVar13;
          *plVar8 = (long)piVar6;
          if ((iVar16 <= iVar3) &&
             ((piVar13 = piVar6, iVar3 != iVar16 || (piVar6[1] <= piVar18[1])))) goto LAB_109ae4078;
          *plVar8 = (long)piVar18;
          piVar13 = piVar18;
        }
LAB_109ae4074:
        *plVar11 = (long)piVar6;
      }
      else {
        piVar18 = (int *)*plVar11;
        iVar3 = *piVar18;
        if ((iVar3 < iVar2) || ((iVar3 == iVar2 && (piVar18[1] < piVar13[1])))) {
          *plVar8 = (long)piVar18;
          plVar8[1] = (long)piVar13;
          if ((iVar3 < iVar16) || ((piVar13 = piVar18, iVar3 == iVar16 && (piVar18[1] < piVar6[1])))
             ) {
            plVar8[-1] = (long)piVar18;
            plVar11 = plVar8;
            piVar13 = piVar6;
            goto LAB_109ae4074;
          }
        }
      }
LAB_109ae4078:
      lVar12 = *param_1;
      *param_1 = (long)piVar13;
      *plVar8 = lVar12;
    }
LAB_109ae4084:
    param_3 = param_3 + -1;
    piVar6 = (int *)*param_1;
    iVar2 = *piVar6;
    if ((param_4 & 1) != 0) {
LAB_109ae40b8:
      lVar12 = 0;
      while( true ) {
        piVar13 = *(int **)((long)param_1 + lVar12 + 8);
        if ((iVar2 <= *piVar13) && ((*piVar13 != iVar2 || (piVar6[1] <= piVar13[1])))) break;
        lVar12 = lVar12 + 8;
      }
      plVar11 = (long *)((long)param_1 + lVar12);
      plVar8 = plVar11 + 1;
      if (lVar12 == 0) {
        plVar4 = param_2;
        if (plVar8 < param_2) {
          piVar18 = (int *)*plVar9;
          iVar16 = *piVar18;
          plVar4 = plVar9;
          while (iVar2 <= iVar16) {
            if (iVar16 == iVar2) {
              if ((plVar4 <= plVar8) || (piVar18[1] < piVar6[1])) break;
            }
            else if (plVar4 <= plVar8) break;
            plVar4 = plVar4 + -1;
            piVar18 = (int *)*plVar4;
            iVar16 = *piVar18;
          }
        }
      }
      else {
        piVar18 = (int *)*plVar9;
        iVar16 = *piVar18;
        plVar4 = plVar9;
        while ((iVar2 <= iVar16 && ((iVar16 != iVar2 || (piVar6[1] <= piVar18[1]))))) {
          plVar4 = plVar4 + -1;
          piVar18 = (int *)*plVar4;
          iVar16 = *piVar18;
        }
      }
      if (plVar8 < plVar4) {
        piVar18 = (int *)*plVar4;
        plVar5 = plVar8;
        plVar20 = plVar4;
        do {
          *plVar5 = (long)piVar18;
          *plVar20 = (long)piVar13;
          do {
            do {
              plVar11 = plVar5;
              plVar5 = plVar11 + 1;
              piVar13 = (int *)*plVar5;
            } while (*piVar13 < iVar2);
          } while ((*piVar13 == iVar2) && (piVar13[1] < piVar6[1]));
          do {
            plVar20 = plVar20 + -1;
            piVar18 = (int *)*plVar20;
            if (*piVar18 < iVar2) break;
          } while ((*piVar18 != iVar2) || (piVar6[1] <= piVar18[1]));
        } while (plVar5 < plVar20);
      }
      if (plVar11 != param_1) {
        *param_1 = *plVar11;
      }
      *plVar11 = (long)piVar6;
      if (plVar4 <= plVar8) {
        plVar4 = param_1;
        FUN_109ae4d1c(param_1,plVar11);
        plVar8 = plVar11 + 1;
        plVar5 = plVar8;
        FUN_109ae4d1c(plVar8,param_2);
        if ((int)plVar5 != 0) goto LAB_109ae4538;
        if (((ulong)plVar4 & 1) != 0) goto LAB_109ae3cb0;
      }
      FUN_109ae3c80(param_1,plVar11,param_3,param_4 & 1);
      param_4 = 0;
      plVar8 = plVar11 + 1;
      goto LAB_109ae3cb0;
    }
    iVar16 = *(int *)param_1[-1];
    if ((iVar16 < iVar2) || ((iVar16 == iVar2 && (((int *)param_1[-1])[1] < piVar6[1]))))
    goto LAB_109ae40b8;
    piVar13 = (int *)*plVar9;
    iVar16 = *piVar13;
    plVar8 = param_1;
    if ((iVar2 < iVar16) || ((iVar2 == iVar16 && (piVar6[1] < piVar13[1])))) {
      do {
        plVar8 = plVar8 + 1;
        iVar3 = *(int *)*plVar8;
        if (iVar2 < iVar3) break;
      } while ((iVar2 != iVar3) || (((int *)*plVar8)[1] <= piVar6[1]));
    }
    else {
      while (plVar8 = plVar8 + 1, plVar8 < param_2) {
        iVar3 = *(int *)*plVar8;
        if ((iVar2 < iVar3) || ((iVar2 == iVar3 && (piVar6[1] < ((int *)*plVar8)[1])))) break;
      }
    }
    plVar11 = plVar9;
    plVar4 = param_2;
    if (plVar8 < param_2) {
      while ((iVar2 < iVar16 || ((plVar4 = plVar11, iVar2 == iVar16 && (piVar6[1] < piVar13[1])))))
      {
        piVar13 = (int *)plVar11[-1];
        iVar16 = *piVar13;
        plVar11 = plVar11 + -1;
      }
    }
    if (plVar8 < plVar4) {
      piVar13 = (int *)*plVar8;
      piVar18 = (int *)*plVar4;
      do {
        *plVar8 = (long)piVar18;
        *plVar4 = (long)piVar13;
        do {
          plVar8 = plVar8 + 1;
          piVar13 = (int *)*plVar8;
          if (iVar2 < *piVar13) break;
        } while ((iVar2 != *piVar13) || (piVar13[1] <= piVar6[1]));
        do {
          do {
            plVar4 = plVar4 + -1;
            piVar18 = (int *)*plVar4;
          } while (iVar2 < *piVar18);
        } while ((iVar2 == *piVar18) && (piVar6[1] < piVar18[1]));
      } while (plVar8 < plVar4);
    }
    plVar11 = plVar8 + -1;
    if (plVar11 != param_1) {
      *param_1 = *plVar11;
    }
    param_4 = 0;
    *plVar11 = (long)piVar6;
  } while( true );
LAB_109ae4654:
  piVar6 = (int *)*plVar9;
  piVar13 = (int *)plVar9[1];
  iVar2 = *piVar13;
  if ((iVar2 < *piVar6) || ((iVar2 == *piVar6 && (piVar13[1] < piVar6[1])))) {
    plVar9[1] = (long)piVar6;
    plVar11 = param_1;
    lVar19 = lVar12;
    if (plVar9 != param_1) {
      do {
        piVar6 = (int *)((undefined8 *)((long)param_1 + lVar19))[-1];
        if (*piVar6 <= iVar2) {
          plVar11 = plVar9;
          if (iVar2 != *piVar6) break;
          if (piVar6[1] <= piVar13[1]) {
            plVar11 = (long *)((long)param_1 + lVar19);
            break;
          }
        }
        plVar9 = plVar9 + -1;
        *(undefined8 *)((long)param_1 + lVar19) = piVar6;
        lVar19 = lVar19 + -8;
        plVar11 = param_1;
      } while (lVar19 != 0);
    }
    *plVar11 = (long)piVar13;
  }
  plVar11 = plVar8 + 1;
  lVar12 = lVar12 + 8;
  plVar9 = plVar8;
  plVar8 = plVar11;
  if (plVar11 == param_2) {
    return;
  }
  goto LAB_109ae4654;
LAB_109ae4710:
  do {
    if ((long)uVar21 <= (long)uVar7) {
      uVar17 = uVar21 << 1 | 1;
      plVar8 = param_1 + uVar17;
      uVar15 = uVar21 * 2 + 2;
      if ((long)uVar15 < (long)uVar10) {
        piVar6 = (int *)plVar8[1];
        iVar2 = *(int *)*plVar8;
        iVar16 = *piVar6;
        if ((iVar2 < iVar16) || ((iVar2 == iVar16 && (((int *)*plVar8)[1] < piVar6[1])))) {
          plVar8 = plVar8 + 1;
          uVar17 = uVar15;
        }
      }
      piVar13 = (int *)*plVar8;
      piVar6 = (int *)param_1[uVar21];
      iVar2 = *piVar6;
      if ((iVar2 <= *piVar13) && ((*piVar13 != iVar2 || (piVar6[1] <= piVar13[1])))) {
        param_1[uVar21] = (long)piVar13;
        while ((long)uVar17 <= (long)uVar7) {
          lVar12 = uVar17 * 2;
          uVar17 = uVar17 << 1 | 1;
          plVar9 = param_1 + uVar17;
          uVar15 = lVar12 + 2;
          if ((long)uVar15 < (long)uVar10) {
            piVar13 = (int *)plVar9[1];
            iVar16 = *(int *)*plVar9;
            iVar3 = *piVar13;
            if ((iVar16 < iVar3) || ((iVar16 == iVar3 && (((int *)*plVar9)[1] < piVar13[1])))) {
              uVar17 = uVar15;
              plVar9 = plVar9 + 1;
            }
          }
          piVar13 = (int *)*plVar9;
          if ((*piVar13 < iVar2) || ((*piVar13 == iVar2 && (piVar13[1] < piVar6[1])))) break;
          *plVar8 = (long)piVar13;
          plVar8 = plVar9;
        }
        *plVar8 = (long)piVar6;
      }
    }
    bVar1 = uVar21 != 0;
    uVar21 = uVar21 - 1;
  } while (bVar1);
  do {
    piVar6 = (int *)*param_1;
    plVar8 = param_1;
    uVar21 = 0;
    do {
      plVar9 = plVar8 + uVar21 + 1;
      uVar15 = uVar21 << 1 | 1;
      uVar7 = uVar21 * 2 + 2;
      if ((long)uVar7 < (long)uVar10) {
        piVar13 = (int *)plVar8[uVar21 + 2];
        iVar2 = *(int *)plVar8[uVar21 + 1];
        iVar16 = *piVar13;
        if ((iVar2 < iVar16) || ((iVar2 == iVar16 && (((int *)plVar8[uVar21 + 1])[1] < piVar13[1])))
           ) {
          plVar9 = plVar8 + uVar21 + 2;
          uVar15 = uVar7;
        }
      }
      *plVar8 = *plVar9;
      plVar8 = plVar9;
      uVar21 = uVar15;
    } while ((long)uVar15 <= (long)(uVar10 - 2 >> 1));
    param_2 = param_2 + -1;
    if (plVar9 == param_2) {
LAB_109ae4990:
      *plVar9 = (long)piVar6;
    }
    else {
      *plVar9 = *param_2;
      *param_2 = (long)piVar6;
      lVar12 = (long)plVar9 + (8 - (long)param_1) >> 3;
      uVar21 = lVar12 - 2;
      if (1 < lVar12) {
        uVar7 = uVar21 >> 1;
        piVar13 = (int *)param_1[uVar7];
        piVar6 = (int *)*plVar9;
        iVar2 = *piVar6;
        if ((*piVar13 < iVar2) || ((*piVar13 == iVar2 && (piVar13[1] < piVar6[1])))) {
          *plVar9 = (long)piVar13;
          plVar9 = param_1 + uVar7;
          while (1 < uVar21) {
            uVar21 = uVar7 - 1;
            uVar7 = uVar21 >> 1;
            piVar13 = (int *)param_1[uVar7];
            if ((iVar2 <= *piVar13) && ((*piVar13 != iVar2 || (piVar6[1] <= piVar13[1])))) break;
            *plVar9 = (long)piVar13;
            plVar9 = param_1 + uVar7;
          }
          goto LAB_109ae4990;
        }
      }
    }
    bVar1 = (long)uVar10 < 3;
    uVar10 = uVar10 - 1;
    if (bVar1) {
      return;
    }
  } while( true );
LAB_109ae4538:
  param_2 = plVar11;
  if (((ulong)plVar4 & 1) != 0) {
    return;
  }
  goto LAB_109ae3ca8;
}



/* Entry: 109ae4b70; end: 109ae4d1b;  */

void FUN_109ae4b70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = (int *)*param_2;
  piVar4 = (int *)*param_1;
  iVar1 = *piVar3;
  iVar2 = *piVar4;
  if ((iVar1 < iVar2) || ((iVar1 == iVar2 && (piVar3[1] < piVar4[1])))) {
    piVar6 = (int *)*param_3;
    if ((*piVar6 < iVar1) || ((*piVar6 == iVar1 && (piVar6[1] < piVar3[1])))) {
      *param_1 = piVar6;
    }
    else {
      *param_1 = piVar3;
      *param_2 = piVar4;
      piVar6 = (int *)*param_3;
      if ((iVar2 <= *piVar6) && ((*piVar6 != iVar2 || (piVar4[1] <= piVar6[1]))))
      goto LAB_109ae4c2c;
      *param_2 = piVar6;
    }
    *param_3 = piVar4;
    piVar6 = piVar4;
  }
  else {
    piVar6 = (int *)*param_3;
    if ((*piVar6 < iVar1) || ((*piVar6 == iVar1 && (piVar6[1] < piVar3[1])))) {
      *param_2 = piVar6;
      *param_3 = piVar3;
      piVar4 = (int *)*param_2;
      piVar5 = (int *)*param_1;
      if ((*piVar4 < *piVar5) || ((piVar6 = piVar3, *piVar4 == *piVar5 && (piVar4[1] < piVar5[1]))))
      {
        *param_1 = piVar4;
        *param_2 = piVar5;
        piVar6 = (int *)*param_3;
      }
    }
  }
LAB_109ae4c2c:
  piVar3 = (int *)*param_4;
  if ((*piVar3 < *piVar6) || ((*piVar3 == *piVar6 && (piVar3[1] < piVar6[1])))) {
    *param_3 = piVar3;
    *param_4 = piVar6;
    piVar3 = (int *)*param_3;
    piVar4 = (int *)*param_2;
    if ((*piVar3 < *piVar4) || ((*piVar3 == *piVar4 && (piVar3[1] < piVar4[1])))) {
      *param_2 = piVar3;
      *param_3 = piVar4;
      piVar3 = (int *)*param_2;
      piVar4 = (int *)*param_1;
      if ((*piVar3 < *piVar4) || ((*piVar3 == *piVar4 && (piVar3[1] < piVar4[1])))) {
        *param_1 = piVar3;
        *param_2 = piVar4;
        return;
      }
    }
  }
  return;
}



/* Entry: 109ae4d1c; end: 109ae5143;  */

bool FUN_109ae4d1c(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  
  uVar3 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 == 2) {
      piVar4 = (int *)param_2[-1];
      piVar7 = (int *)*param_1;
      if (*piVar7 <= *piVar4) {
        if (*piVar4 != *piVar7) {
          return true;
        }
        if (piVar7[1] <= piVar4[1]) {
          return true;
        }
      }
      *param_1 = (long)piVar4;
      param_2[-1] = (long)piVar7;
      return true;
    }
  }
  else {
    if (uVar3 == 3) {
      piVar4 = (int *)*param_1;
      piVar7 = (int *)param_1[1];
      iVar10 = *piVar7;
      iVar1 = *piVar4;
      if ((iVar10 < iVar1) || ((iVar10 == iVar1 && (piVar7[1] < piVar4[1])))) {
        piVar11 = (int *)param_2[-1];
        if ((*piVar11 < iVar10) || ((*piVar11 == iVar10 && (piVar11[1] < piVar7[1])))) {
          *param_1 = (long)piVar11;
        }
        else {
          *param_1 = (long)piVar7;
          param_1[1] = (long)piVar4;
          piVar7 = (int *)param_2[-1];
          if (iVar1 <= *piVar7) {
            if (*piVar7 != iVar1) {
              return true;
            }
            if (piVar4[1] <= piVar7[1]) {
              return true;
            }
          }
          param_1[1] = (long)piVar7;
        }
        param_2[-1] = (long)piVar4;
        return true;
      }
      piVar4 = (int *)param_2[-1];
      if (iVar10 <= *piVar4) {
        if (*piVar4 != iVar10) {
          return true;
        }
        if (piVar7[1] <= piVar4[1]) {
          return true;
        }
      }
      param_1[1] = (long)piVar4;
      param_2[-1] = (long)piVar7;
      piVar4 = (int *)*param_1;
      piVar7 = (int *)param_1[1];
      if (*piVar4 <= *piVar7) {
        if (*piVar7 != *piVar4) {
          return true;
        }
        if (piVar4[1] <= piVar7[1]) {
          return true;
        }
      }
      *param_1 = (long)piVar7;
      param_1[1] = (long)piVar4;
      return true;
    }
    if (uVar3 == 4) {
      FUN_109ae4b70(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      return true;
    }
    if (uVar3 == 5) {
      FUN_109ae4b70(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      piVar4 = (int *)param_2[-1];
      piVar7 = (int *)param_1[3];
      if (*piVar7 <= *piVar4) {
        if (*piVar4 != *piVar7) {
          return true;
        }
        if (piVar7[1] <= piVar4[1]) {
          return true;
        }
      }
      param_1[3] = (long)piVar4;
      param_2[-1] = (long)piVar7;
      piVar4 = (int *)param_1[2];
      piVar7 = (int *)param_1[3];
      iVar10 = *piVar7;
      if (*piVar4 <= iVar10) {
        if (iVar10 != *piVar4) {
          return true;
        }
        if (piVar4[1] <= piVar7[1]) {
          return true;
        }
      }
      param_1[2] = (long)piVar7;
      param_1[3] = (long)piVar4;
      piVar4 = (int *)param_1[1];
      if (*piVar4 <= iVar10) {
        if (iVar10 != *piVar4) {
          return true;
        }
        if (piVar4[1] <= piVar7[1]) {
          return true;
        }
      }
      param_1[1] = (long)piVar7;
      param_1[2] = (long)piVar4;
      piVar4 = (int *)*param_1;
      if (*piVar4 <= iVar10) {
        if (iVar10 != *piVar4) {
          return true;
        }
        if (piVar4[1] <= piVar7[1]) {
          return true;
        }
      }
      *param_1 = (long)piVar7;
      param_1[1] = (long)piVar4;
      return true;
    }
  }
  plVar5 = param_1 + 2;
  piVar4 = (int *)*param_1;
  plVar8 = param_1 + 1;
  piVar7 = (int *)*plVar8;
  iVar10 = *piVar7;
  iVar1 = *piVar4;
  if ((iVar10 < iVar1) || ((iVar10 == iVar1 && (piVar7[1] < piVar4[1])))) {
    piVar11 = (int *)*plVar5;
    iVar2 = *piVar11;
    if ((iVar2 < iVar10) || ((iVar2 == iVar10 && (piVar11[1] < piVar7[1])))) {
      *param_1 = (long)piVar11;
      plVar8 = plVar5;
    }
    else {
      *param_1 = (long)piVar7;
      param_1[1] = (long)piVar4;
      if ((iVar1 <= iVar2) && ((iVar2 != iVar1 || (piVar4[1] <= piVar11[1])))) goto LAB_109ae4f90;
      *plVar8 = (long)piVar11;
      plVar8 = plVar5;
    }
  }
  else {
    piVar11 = (int *)*plVar5;
    iVar2 = *piVar11;
    if ((iVar10 <= iVar2) && ((iVar2 != iVar10 || (piVar7[1] <= piVar11[1])))) goto LAB_109ae4f90;
    *plVar8 = (long)piVar11;
    *plVar5 = (long)piVar7;
    if ((iVar1 <= iVar2) && ((iVar2 != iVar1 || (piVar4[1] <= piVar11[1])))) goto LAB_109ae4f90;
    *param_1 = (long)piVar11;
  }
  *plVar8 = (long)piVar4;
LAB_109ae4f90:
  if (param_1 + 3 != param_2) {
    lVar9 = 0;
    iVar10 = 0;
    plVar8 = param_1 + 3;
    do {
      piVar4 = (int *)*plVar8;
      piVar7 = (int *)*plVar5;
      iVar1 = *piVar4;
      if ((iVar1 < *piVar7) || ((iVar1 == *piVar7 && (piVar4[1] < piVar7[1])))) {
        *plVar8 = (long)piVar7;
        lVar12 = lVar9;
        do {
          piVar7 = *(int **)((long)param_1 + lVar12 + 8);
          if (*piVar7 <= iVar1) {
            if (iVar1 != *piVar7) {
              plVar6 = (long *)((long)param_1 + lVar12 + 0x10);
              break;
            }
            plVar6 = plVar5;
            if (piVar7[1] <= piVar4[1]) break;
          }
          plVar5 = plVar5 + -1;
          *(int **)((long)param_1 + lVar12 + 0x10) = piVar7;
          lVar12 = lVar12 + -8;
          plVar6 = param_1;
        } while (lVar12 != -0x10);
        *plVar6 = (long)piVar4;
        iVar10 = iVar10 + 1;
        if (iVar10 == 8) {
          return plVar8 + 1 == param_2;
        }
      }
      plVar6 = plVar8 + 1;
      lVar9 = lVar9 + 8;
      plVar5 = plVar8;
      plVar8 = plVar6;
    } while (plVar6 != param_2);
  }
  return true;
}



/* Entry: 109ae5144; end: 109ae5f9f;  */

void FUN_109ae5144(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  float *pfVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
LAB_109ae516c:
  plVar8 = param_2 + -1;
  plVar7 = param_1;
LAB_109ae5174:
  do {
    param_1 = plVar7;
    uVar9 = (long)param_2 - (long)param_1 >> 3;
    if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        pfVar5 = (float *)param_2[-1];
        pfVar12 = (float *)*param_1;
        if (*pfVar12 <= *pfVar5) {
          if (*pfVar5 != *pfVar12) {
            return;
          }
          if (pfVar12[1] <= pfVar5[1]) {
            return;
          }
        }
        *param_1 = (long)pfVar5;
        param_2[-1] = (long)pfVar12;
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        pfVar5 = (float *)*param_1;
        pfVar12 = (float *)param_1[1];
        fVar21 = *pfVar12;
        fVar20 = *pfVar5;
        if ((fVar21 < fVar20) || ((fVar21 == fVar20 && (pfVar12[1] < pfVar5[1])))) {
          pfVar14 = (float *)param_2[-1];
          if ((*pfVar14 < fVar21) || ((*pfVar14 == fVar21 && (pfVar14[1] < pfVar12[1])))) {
            *param_1 = (long)pfVar14;
          }
          else {
            *param_1 = (long)pfVar12;
            param_1[1] = (long)pfVar5;
            pfVar12 = (float *)param_2[-1];
            if (fVar20 <= *pfVar12) {
              if (*pfVar12 != fVar20) {
                return;
              }
              if (pfVar5[1] <= pfVar12[1]) {
                return;
              }
            }
            param_1[1] = (long)pfVar12;
          }
          param_2[-1] = (long)pfVar5;
          return;
        }
        pfVar5 = (float *)param_2[-1];
        if (fVar21 <= *pfVar5) {
          if (*pfVar5 != fVar21) {
            return;
          }
          if (pfVar12[1] <= pfVar5[1]) {
            return;
          }
        }
        param_1[1] = (long)pfVar5;
        param_2[-1] = (long)pfVar12;
        pfVar5 = (float *)*param_1;
        pfVar12 = (float *)param_1[1];
        fVar20 = *pfVar12;
LAB_109ae5f30:
        if (*pfVar5 <= fVar20) {
          if (fVar20 != *pfVar5) {
            return;
          }
          if (pfVar5[1] <= pfVar12[1]) {
            return;
          }
        }
        *param_1 = (long)pfVar12;
        param_1[1] = (long)pfVar5;
        return;
      }
      if (uVar9 == 4) {
        plVar7 = param_1 + 1;
        plVar10 = param_1 + 2;
        pfVar5 = (float *)*plVar7;
        pfVar12 = (float *)*param_1;
        fVar21 = *pfVar5;
        fVar20 = *pfVar12;
        if ((fVar21 < fVar20) || ((fVar21 == fVar20 && (pfVar5[1] < pfVar12[1])))) {
          pfVar14 = (float *)*plVar10;
          if ((*pfVar14 < fVar21) || ((*pfVar14 == fVar21 && (pfVar14[1] < pfVar5[1])))) {
            *param_1 = (long)pfVar14;
          }
          else {
            *param_1 = (long)pfVar5;
            *plVar7 = (long)pfVar12;
            pfVar14 = (float *)*plVar10;
            if ((fVar20 <= *pfVar14) && ((*pfVar14 != fVar20 || (pfVar12[1] <= pfVar14[1]))))
            goto LAB_109ae6098;
            *plVar7 = (long)pfVar14;
          }
          *plVar10 = (long)pfVar12;
          pfVar14 = pfVar12;
        }
        else {
          pfVar14 = (float *)*plVar10;
          if ((*pfVar14 < fVar21) || ((*pfVar14 == fVar21 && (pfVar14[1] < pfVar5[1])))) {
            *plVar7 = (long)pfVar14;
            *plVar10 = (long)pfVar5;
            pfVar12 = (float *)*plVar7;
            pfVar13 = (float *)*param_1;
            if ((*pfVar12 < *pfVar13) ||
               ((pfVar14 = pfVar5, *pfVar12 == *pfVar13 && (pfVar12[1] < pfVar13[1])))) {
              *param_1 = (long)pfVar12;
              *plVar7 = (long)pfVar13;
              pfVar14 = (float *)*plVar10;
            }
          }
        }
LAB_109ae6098:
        pfVar5 = (float *)*plVar8;
        if ((*pfVar5 < *pfVar14) || ((*pfVar5 == *pfVar14 && (pfVar5[1] < pfVar14[1])))) {
          *plVar10 = (long)pfVar5;
          *plVar8 = (long)pfVar14;
          pfVar5 = (float *)*plVar10;
          pfVar12 = (float *)*plVar7;
          if ((*pfVar5 < *pfVar12) || ((*pfVar5 == *pfVar12 && (pfVar5[1] < pfVar12[1])))) {
            *plVar7 = (long)pfVar5;
            *plVar10 = (long)pfVar12;
            pfVar5 = (float *)*plVar7;
            pfVar12 = (float *)*param_1;
            if ((*pfVar5 < *pfVar12) || ((*pfVar5 == *pfVar12 && (pfVar5[1] < pfVar12[1])))) {
              *param_1 = (long)pfVar5;
              *plVar7 = (long)pfVar12;
            }
          }
        }
        return;
      }
      if (uVar9 == 5) {
        FUN_109ae5fa0(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
        pfVar5 = (float *)param_2[-1];
        pfVar12 = (float *)param_1[3];
        if (*pfVar12 <= *pfVar5) {
          if (*pfVar5 != *pfVar12) {
            return;
          }
          if (pfVar12[1] <= pfVar5[1]) {
            return;
          }
        }
        param_1[3] = (long)pfVar5;
        param_2[-1] = (long)pfVar12;
        pfVar5 = (float *)param_1[2];
        pfVar12 = (float *)param_1[3];
        fVar20 = *pfVar12;
        if (*pfVar5 <= fVar20) {
          if (fVar20 != *pfVar5) {
            return;
          }
          if (pfVar5[1] <= pfVar12[1]) {
            return;
          }
        }
        param_1[2] = (long)pfVar12;
        param_1[3] = (long)pfVar5;
        pfVar5 = (float *)param_1[1];
        if (*pfVar5 <= fVar20) {
          if (fVar20 != *pfVar5) {
            return;
          }
          if (pfVar5[1] <= pfVar12[1]) {
            return;
          }
        }
        param_1[1] = (long)pfVar12;
        param_1[2] = (long)pfVar5;
        pfVar5 = (float *)*param_1;
        goto LAB_109ae5f30;
      }
    }
    if ((long)uVar9 < 0x18) {
      plVar7 = param_1 + 1;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || plVar7 == param_2) {
          return;
        }
        do {
          plVar8 = plVar7;
          pfVar5 = (float *)*param_1;
          pfVar12 = (float *)param_1[1];
          fVar20 = *pfVar12;
          if ((fVar20 < *pfVar5) || ((fVar20 == *pfVar5 && (pfVar12[1] < pfVar5[1])))) {
            do {
              do {
                plVar7 = param_1;
                param_1 = plVar7 + -1;
                pfVar14 = (float *)*param_1;
                plVar7[1] = (long)pfVar5;
                pfVar5 = pfVar14;
              } while (fVar20 < *pfVar14);
            } while ((fVar20 == *pfVar14) && (pfVar12[1] < pfVar14[1]));
            *plVar7 = (long)pfVar12;
          }
          plVar7 = plVar8 + 1;
          param_1 = plVar8;
        } while (plVar7 != param_2);
        return;
      }
      if (param_1 == param_2 || plVar7 == param_2) {
        return;
      }
      lVar11 = 0;
      plVar8 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar6 = uVar9 - 2 >> 1;
      uVar19 = uVar6;
      goto LAB_109ae5c00;
    }
    plVar7 = param_1 + (uVar9 >> 1);
    if (uVar9 < 0x81) {
      pfVar12 = (float *)*param_1;
      pfVar5 = (float *)*plVar7;
      fVar21 = *pfVar12;
      fVar20 = *pfVar5;
      if ((fVar21 < fVar20) || ((fVar21 == fVar20 && (pfVar12[1] < pfVar5[1])))) {
        pfVar14 = (float *)*plVar8;
        if ((*pfVar14 < fVar21) || ((*pfVar14 == fVar21 && (pfVar14[1] < pfVar12[1])))) {
          *plVar7 = (long)pfVar14;
        }
        else {
          *plVar7 = (long)pfVar12;
          *param_1 = (long)pfVar5;
          pfVar12 = (float *)*plVar8;
          if ((fVar20 <= *pfVar12) && ((*pfVar12 != fVar20 || (pfVar5[1] <= pfVar12[1]))))
          goto LAB_109ae5674;
          *param_1 = (long)pfVar12;
        }
        *plVar8 = (long)pfVar5;
      }
      else {
        pfVar5 = (float *)*plVar8;
        if ((*pfVar5 < fVar21) || ((*pfVar5 == fVar21 && (pfVar5[1] < pfVar12[1])))) {
          *param_1 = (long)pfVar5;
          *plVar8 = (long)pfVar12;
          pfVar5 = (float *)*param_1;
          pfVar12 = (float *)*plVar7;
          if ((*pfVar5 < *pfVar12) || ((*pfVar5 == *pfVar12 && (pfVar5[1] < pfVar12[1])))) {
            *plVar7 = (long)pfVar5;
            *param_1 = (long)pfVar12;
          }
        }
      }
    }
    else {
      pfVar12 = (float *)*plVar7;
      pfVar5 = (float *)*param_1;
      fVar21 = *pfVar12;
      fVar20 = *pfVar5;
      if ((fVar21 < fVar20) || ((fVar21 == fVar20 && (pfVar12[1] < pfVar5[1])))) {
        pfVar14 = (float *)*plVar8;
        if ((*pfVar14 < fVar21) || ((*pfVar14 == fVar21 && (pfVar14[1] < pfVar12[1])))) {
          *param_1 = (long)pfVar14;
        }
        else {
          *param_1 = (long)pfVar12;
          *plVar7 = (long)pfVar5;
          pfVar12 = (float *)*plVar8;
          if ((fVar20 <= *pfVar12) && ((*pfVar12 != fVar20 || (pfVar5[1] <= pfVar12[1]))))
          goto LAB_109ae5378;
          *plVar7 = (long)pfVar12;
        }
        *plVar8 = (long)pfVar5;
      }
      else {
        pfVar5 = (float *)*plVar8;
        if ((*pfVar5 < fVar21) || ((*pfVar5 == fVar21 && (pfVar5[1] < pfVar12[1])))) {
          *plVar7 = (long)pfVar5;
          *plVar8 = (long)pfVar12;
          pfVar5 = (float *)*plVar7;
          pfVar12 = (float *)*param_1;
          if ((*pfVar5 < *pfVar12) || ((*pfVar5 == *pfVar12 && (pfVar5[1] < pfVar12[1])))) {
            *param_1 = (long)pfVar5;
            *plVar7 = (long)pfVar12;
          }
        }
      }
LAB_109ae5378:
      pfVar12 = (float *)plVar7[-1];
      pfVar5 = (float *)param_1[1];
      fVar21 = *pfVar12;
      fVar20 = *pfVar5;
      if ((fVar21 < fVar20) || ((fVar21 == fVar20 && (pfVar12[1] < pfVar5[1])))) {
        pfVar14 = (float *)param_2[-2];
        if ((*pfVar14 < fVar21) || ((*pfVar14 == fVar21 && (pfVar14[1] < pfVar12[1])))) {
          param_1[1] = (long)pfVar14;
        }
        else {
          param_1[1] = (long)pfVar12;
          plVar7[-1] = (long)pfVar5;
          pfVar12 = (float *)param_2[-2];
          if ((fVar20 <= *pfVar12) && ((*pfVar12 != fVar20 || (pfVar5[1] <= pfVar12[1]))))
          goto LAB_109ae54a0;
          plVar7[-1] = (long)pfVar12;
        }
        param_2[-2] = (long)pfVar5;
      }
      else {
        pfVar5 = (float *)param_2[-2];
        if ((*pfVar5 < fVar21) || ((*pfVar5 == fVar21 && (pfVar5[1] < pfVar12[1])))) {
          plVar7[-1] = (long)pfVar5;
          param_2[-2] = (long)pfVar12;
          pfVar5 = (float *)plVar7[-1];
          pfVar12 = (float *)param_1[1];
          if ((*pfVar5 < *pfVar12) || ((*pfVar5 == *pfVar12 && (pfVar5[1] < pfVar12[1])))) {
            param_1[1] = (long)pfVar5;
            plVar7[-1] = (long)pfVar12;
          }
        }
      }
LAB_109ae54a0:
      plVar10 = plVar7 + 1;
      pfVar12 = (float *)*plVar10;
      pfVar5 = (float *)param_1[2];
      fVar21 = *pfVar12;
      fVar20 = *pfVar5;
      if ((fVar21 < fVar20) || ((fVar21 == fVar20 && (pfVar12[1] < pfVar5[1])))) {
        pfVar14 = (float *)param_2[-3];
        if ((*pfVar14 < fVar21) || ((*pfVar14 == fVar21 && (pfVar14[1] < pfVar12[1])))) {
          param_1[2] = (long)pfVar14;
        }
        else {
          param_1[2] = (long)pfVar12;
          *plVar10 = (long)pfVar5;
          pfVar12 = (float *)param_2[-3];
          if ((fVar20 <= *pfVar12) && ((*pfVar12 != fVar20 || (pfVar5[1] <= pfVar12[1]))))
          goto LAB_109ae5594;
          *plVar10 = (long)pfVar12;
        }
        param_2[-3] = (long)pfVar5;
      }
      else {
        pfVar5 = (float *)param_2[-3];
        if ((*pfVar5 < fVar21) || ((*pfVar5 == fVar21 && (pfVar5[1] < pfVar12[1])))) {
          *plVar10 = (long)pfVar5;
          param_2[-3] = (long)pfVar12;
          pfVar5 = (float *)*plVar10;
          pfVar12 = (float *)param_1[2];
          if ((*pfVar5 < *pfVar12) || ((*pfVar5 == *pfVar12 && (pfVar5[1] < pfVar12[1])))) {
            param_1[2] = (long)pfVar5;
            *plVar10 = (long)pfVar12;
          }
        }
      }
LAB_109ae5594:
      pfVar5 = (float *)plVar7[-1];
      pfVar12 = (float *)*plVar7;
      fVar21 = *pfVar12;
      fVar20 = *pfVar5;
      if ((fVar21 < fVar20) || ((fVar21 == fVar20 && (pfVar12[1] < pfVar5[1])))) {
        pfVar14 = (float *)*plVar10;
        fVar22 = *pfVar14;
        if ((fVar22 < fVar21) || ((fVar22 == fVar21 && (pfVar14[1] < pfVar12[1])))) {
          plVar7[-1] = (long)pfVar14;
        }
        else {
          plVar7[-1] = (long)pfVar12;
          *plVar7 = (long)pfVar5;
          if ((fVar20 <= fVar22) &&
             ((pfVar12 = pfVar5, fVar22 != fVar20 || (pfVar5[1] <= pfVar14[1]))))
          goto LAB_109ae5668;
          *plVar7 = (long)pfVar14;
          pfVar12 = pfVar14;
        }
LAB_109ae5664:
        *plVar10 = (long)pfVar5;
      }
      else {
        pfVar14 = (float *)*plVar10;
        fVar22 = *pfVar14;
        if ((fVar22 < fVar21) || ((fVar22 == fVar21 && (pfVar14[1] < pfVar12[1])))) {
          *plVar7 = (long)pfVar14;
          plVar7[1] = (long)pfVar12;
          if ((fVar22 < fVar20) ||
             ((pfVar12 = pfVar14, fVar22 == fVar20 && (pfVar14[1] < pfVar5[1])))) {
            plVar7[-1] = (long)pfVar14;
            plVar10 = plVar7;
            pfVar12 = pfVar5;
            goto LAB_109ae5664;
          }
        }
      }
LAB_109ae5668:
      lVar11 = *param_1;
      *param_1 = (long)pfVar12;
      *plVar7 = lVar11;
    }
LAB_109ae5674:
    param_3 = param_3 + -1;
    pfVar5 = (float *)*param_1;
    fVar20 = *pfVar5;
    if ((param_4 & 1) != 0) {
LAB_109ae56a8:
      lVar11 = 0;
      while( true ) {
        pfVar12 = *(float **)((long)param_1 + lVar11 + 8);
        if ((fVar20 <= *pfVar12) && ((*pfVar12 != fVar20 || (pfVar5[1] <= pfVar12[1])))) break;
        lVar11 = lVar11 + 8;
      }
      plVar10 = (long *)((long)param_1 + lVar11);
      plVar7 = plVar10 + 1;
      if (lVar11 == 0) {
        plVar3 = param_2;
        if (plVar7 < param_2) {
          pfVar14 = (float *)*plVar8;
          fVar21 = *pfVar14;
          plVar3 = plVar8;
          while (fVar20 <= fVar21) {
            if (fVar21 == fVar20) {
              if ((plVar3 <= plVar7) || (pfVar14[1] < pfVar5[1])) break;
            }
            else if (plVar3 <= plVar7) break;
            plVar3 = plVar3 + -1;
            pfVar14 = (float *)*plVar3;
            fVar21 = *pfVar14;
          }
        }
      }
      else {
        pfVar14 = (float *)*plVar8;
        fVar21 = *pfVar14;
        plVar3 = plVar8;
        while ((fVar20 <= fVar21 && ((fVar21 != fVar20 || (pfVar5[1] <= pfVar14[1]))))) {
          plVar3 = plVar3 + -1;
          pfVar14 = (float *)*plVar3;
          fVar21 = *pfVar14;
        }
      }
      if (plVar7 < plVar3) {
        pfVar14 = (float *)*plVar3;
        plVar4 = plVar7;
        plVar18 = plVar3;
        do {
          *plVar4 = (long)pfVar14;
          *plVar18 = (long)pfVar12;
          do {
            do {
              plVar10 = plVar4;
              plVar4 = plVar10 + 1;
              pfVar12 = (float *)*plVar4;
            } while (*pfVar12 < fVar20);
          } while ((*pfVar12 == fVar20) && (pfVar12[1] < pfVar5[1]));
          do {
            plVar18 = plVar18 + -1;
            pfVar14 = (float *)*plVar18;
            if (*pfVar14 < fVar20) break;
          } while ((*pfVar14 != fVar20) || (pfVar5[1] <= pfVar14[1]));
        } while (plVar4 < plVar18);
      }
      if (plVar10 != param_1) {
        *param_1 = *plVar10;
      }
      *plVar10 = (long)pfVar5;
      if (plVar3 <= plVar7) {
        plVar3 = param_1;
        FUN_109ae6134(param_1,plVar10);
        plVar7 = plVar10 + 1;
        plVar4 = plVar7;
        FUN_109ae6134(plVar7,param_2);
        if ((int)plVar4 != 0) goto LAB_109ae59c4;
        if (((ulong)plVar3 & 1) != 0) goto LAB_109ae5174;
      }
      FUN_109ae5144(param_1,plVar10,param_3,param_4 & 1);
      param_4 = 0;
      plVar7 = plVar10 + 1;
      goto LAB_109ae5174;
    }
    fVar21 = *(float *)param_1[-1];
    if ((fVar21 < fVar20) || ((fVar21 == fVar20 && (((float *)param_1[-1])[1] < pfVar5[1]))))
    goto LAB_109ae56a8;
    pfVar12 = (float *)*plVar8;
    fVar21 = *pfVar12;
    plVar7 = param_1;
    if ((fVar20 < fVar21) || ((fVar20 == fVar21 && (pfVar5[1] < pfVar12[1])))) {
      do {
        plVar7 = plVar7 + 1;
        fVar22 = *(float *)*plVar7;
        if (fVar20 < fVar22) break;
      } while ((fVar20 != fVar22) || (((float *)*plVar7)[1] <= pfVar5[1]));
    }
    else {
      while (plVar7 = plVar7 + 1, plVar7 < param_2) {
        fVar22 = *(float *)*plVar7;
        if ((fVar20 < fVar22) || ((fVar20 == fVar22 && (pfVar5[1] < ((float *)*plVar7)[1])))) break;
      }
    }
    plVar10 = plVar8;
    plVar3 = param_2;
    if (plVar7 < param_2) {
      while ((fVar20 < fVar21 || ((plVar3 = plVar10, fVar20 == fVar21 && (pfVar5[1] < pfVar12[1]))))
            ) {
        pfVar12 = (float *)plVar10[-1];
        fVar21 = *pfVar12;
        plVar10 = plVar10 + -1;
      }
    }
    if (plVar7 < plVar3) {
      pfVar12 = (float *)*plVar7;
      pfVar14 = (float *)*plVar3;
      do {
        *plVar7 = (long)pfVar14;
        *plVar3 = (long)pfVar12;
        do {
          plVar7 = plVar7 + 1;
          pfVar12 = (float *)*plVar7;
          if (fVar20 < *pfVar12) break;
        } while ((fVar20 != *pfVar12) || (pfVar12[1] <= pfVar5[1]));
        do {
          do {
            plVar3 = plVar3 + -1;
            pfVar14 = (float *)*plVar3;
          } while (fVar20 < *pfVar14);
        } while ((fVar20 == *pfVar14) && (pfVar5[1] < pfVar14[1]));
      } while (plVar7 < plVar3);
    }
    plVar10 = plVar7 + -1;
    if (plVar10 != param_1) {
      *param_1 = *plVar10;
    }
    param_4 = 0;
    *plVar10 = (long)pfVar5;
  } while( true );
LAB_109ae5b48:
  pfVar5 = (float *)*plVar8;
  pfVar12 = (float *)plVar8[1];
  fVar20 = *pfVar12;
  if ((fVar20 < *pfVar5) || ((fVar20 == *pfVar5 && (pfVar12[1] < pfVar5[1])))) {
    plVar8[1] = (long)pfVar5;
    plVar10 = param_1;
    lVar16 = lVar11;
    if (plVar8 != param_1) {
      do {
        pfVar5 = (float *)((long *)((long)param_1 + lVar16))[-1];
        if (*pfVar5 <= fVar20) {
          plVar10 = plVar8;
          if (fVar20 != *pfVar5) break;
          if (pfVar5[1] <= pfVar12[1]) {
            plVar10 = (long *)((long)param_1 + lVar16);
            break;
          }
        }
        plVar8 = plVar8 + -1;
        *(long *)((long)param_1 + lVar16) = (long)pfVar5;
        lVar16 = lVar16 + -8;
        plVar10 = param_1;
      } while (lVar16 != 0);
    }
    *plVar10 = (long)pfVar12;
  }
  plVar10 = plVar7 + 1;
  lVar11 = lVar11 + 8;
  plVar8 = plVar7;
  plVar7 = plVar10;
  if (plVar10 == param_2) {
    return;
  }
  goto LAB_109ae5b48;
LAB_109ae5c00:
  do {
    if ((long)uVar19 <= (long)uVar6) {
      uVar17 = uVar19 << 1 | 1;
      plVar7 = param_1 + uVar17;
      uVar15 = uVar19 * 2 + 2;
      if ((long)uVar15 < (long)uVar9) {
        pfVar5 = (float *)plVar7[1];
        fVar20 = *(float *)*plVar7;
        fVar21 = *pfVar5;
        if ((fVar20 < fVar21) || ((fVar20 == fVar21 && (((float *)*plVar7)[1] < pfVar5[1])))) {
          plVar7 = plVar7 + 1;
          uVar17 = uVar15;
        }
      }
      pfVar12 = (float *)*plVar7;
      pfVar5 = (float *)param_1[uVar19];
      fVar20 = *pfVar5;
      if ((fVar20 <= *pfVar12) && ((*pfVar12 != fVar20 || (pfVar5[1] <= pfVar12[1])))) {
        param_1[uVar19] = (long)pfVar12;
        while ((long)uVar17 <= (long)uVar6) {
          uVar1 = uVar17 << 1 | 1;
          plVar8 = param_1 + uVar1;
          uVar15 = uVar17 * 2 + 2;
          uVar17 = uVar1;
          if ((long)uVar15 < (long)uVar9) {
            pfVar12 = (float *)plVar8[1];
            fVar21 = *(float *)*plVar8;
            fVar22 = *pfVar12;
            if ((fVar21 < fVar22) || ((fVar21 == fVar22 && (((float *)*plVar8)[1] < pfVar12[1])))) {
              uVar17 = uVar15;
              plVar8 = plVar8 + 1;
            }
          }
          pfVar12 = (float *)*plVar8;
          if ((*pfVar12 < fVar20) || ((*pfVar12 == fVar20 && (pfVar12[1] < pfVar5[1])))) break;
          *plVar7 = (long)pfVar12;
          plVar7 = plVar8;
        }
        *plVar7 = (long)pfVar5;
      }
    }
    bVar2 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar2);
  do {
    pfVar5 = (float *)*param_1;
    plVar7 = param_1;
    uVar19 = 0;
    do {
      plVar8 = plVar7 + uVar19 + 1;
      uVar15 = uVar19 << 1 | 1;
      uVar6 = uVar19 * 2 + 2;
      if ((long)uVar6 < (long)uVar9) {
        pfVar12 = (float *)plVar7[uVar19 + 2];
        fVar20 = *(float *)plVar7[uVar19 + 1];
        fVar21 = *pfVar12;
        if ((fVar20 < fVar21) ||
           ((fVar20 == fVar21 && (((float *)plVar7[uVar19 + 1])[1] < pfVar12[1])))) {
          plVar8 = plVar7 + uVar19 + 2;
          uVar15 = uVar6;
        }
      }
      *plVar7 = *plVar8;
      plVar7 = plVar8;
      uVar19 = uVar15;
    } while ((long)uVar15 <= (long)(uVar9 - 2 >> 1));
    param_2 = param_2 + -1;
    if (plVar8 == param_2) {
LAB_109ae5e70:
      *plVar8 = (long)pfVar5;
    }
    else {
      *plVar8 = *param_2;
      *param_2 = (long)pfVar5;
      lVar11 = (long)plVar8 + (8 - (long)param_1) >> 3;
      uVar19 = lVar11 - 2;
      if (1 < lVar11) {
        uVar6 = uVar19 >> 1;
        pfVar12 = (float *)param_1[uVar6];
        pfVar5 = (float *)*plVar8;
        fVar20 = *pfVar5;
        if ((*pfVar12 < fVar20) || ((*pfVar12 == fVar20 && (pfVar12[1] < pfVar5[1])))) {
          *plVar8 = (long)pfVar12;
          plVar8 = param_1 + uVar6;
          while (1 < uVar19) {
            uVar19 = uVar6 - 1;
            uVar6 = uVar19 >> 1;
            pfVar12 = (float *)param_1[uVar6];
            if ((fVar20 <= *pfVar12) && ((*pfVar12 != fVar20 || (pfVar5[1] <= pfVar12[1])))) break;
            *plVar8 = (long)pfVar12;
            plVar8 = param_1 + uVar6;
          }
          goto LAB_109ae5e70;
        }
      }
    }
    bVar2 = (long)uVar9 < 3;
    uVar9 = uVar9 - 1;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_109ae59c4:
  param_2 = plVar10;
  if (((ulong)plVar3 & 1) != 0) {
    return;
  }
  goto LAB_109ae516c;
}



/* Entry: 109ae5fa0; end: 109ae6133;  */

void FUN_109ae5fa0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  pfVar1 = (float *)*param_2;
  pfVar2 = (float *)*param_1;
  fVar6 = *pfVar1;
  fVar5 = *pfVar2;
  if ((fVar6 < fVar5) || ((fVar6 == fVar5 && (pfVar1[1] < pfVar2[1])))) {
    pfVar3 = (float *)*param_3;
    if ((*pfVar3 < fVar6) || ((*pfVar3 == fVar6 && (pfVar3[1] < pfVar1[1])))) {
      *param_1 = (long)pfVar3;
    }
    else {
      *param_1 = (long)pfVar1;
      *param_2 = (long)pfVar2;
      pfVar3 = (float *)*param_3;
      if ((fVar5 <= *pfVar3) && ((*pfVar3 != fVar5 || (pfVar2[1] <= pfVar3[1]))))
      goto LAB_109ae6098;
      *param_2 = (long)pfVar3;
    }
    *param_3 = (long)pfVar2;
    pfVar3 = pfVar2;
  }
  else {
    pfVar3 = (float *)*param_3;
    if ((*pfVar3 < fVar6) || ((*pfVar3 == fVar6 && (pfVar3[1] < pfVar1[1])))) {
      *param_2 = (long)pfVar3;
      *param_3 = (long)pfVar1;
      pfVar2 = (float *)*param_2;
      pfVar4 = (float *)*param_1;
      if ((*pfVar2 < *pfVar4) || ((pfVar3 = pfVar1, *pfVar2 == *pfVar4 && (pfVar2[1] < pfVar4[1]))))
      {
        *param_1 = (long)pfVar2;
        *param_2 = (long)pfVar4;
        pfVar3 = (float *)*param_3;
      }
    }
  }
LAB_109ae6098:
  pfVar1 = (float *)*param_4;
  if ((*pfVar1 < *pfVar3) || ((*pfVar1 == *pfVar3 && (pfVar1[1] < pfVar3[1])))) {
    *param_3 = (long)pfVar1;
    *param_4 = (long)pfVar3;
    pfVar1 = (float *)*param_3;
    pfVar2 = (float *)*param_2;
    if ((*pfVar1 < *pfVar2) || ((*pfVar1 == *pfVar2 && (pfVar1[1] < pfVar2[1])))) {
      *param_2 = (long)pfVar1;
      *param_3 = (long)pfVar2;
      pfVar1 = (float *)*param_2;
      pfVar2 = (float *)*param_1;
      if ((*pfVar1 < *pfVar2) || ((*pfVar1 == *pfVar2 && (pfVar1[1] < pfVar2[1])))) {
        *param_1 = (long)pfVar1;
        *param_2 = (long)pfVar2;
      }
    }
  }
  return;
}



/* Entry: 109ae6134; end: 109ae6507;  */

bool FUN_109ae6134(long *param_1,long *param_2)

{
  ulong uVar1;
  float *pfVar2;
  long *plVar3;
  long *plVar4;
  float *pfVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar1 < 3) {
    if (uVar1 < 2) {
      return true;
    }
    if (uVar1 == 2) {
      pfVar2 = (float *)param_2[-1];
      pfVar5 = (float *)*param_1;
      if (*pfVar5 <= *pfVar2) {
        if (*pfVar2 != *pfVar5) {
          return true;
        }
        if (pfVar5[1] <= pfVar2[1]) {
          return true;
        }
      }
      *param_1 = (long)pfVar2;
      param_2[-1] = (long)pfVar5;
      return true;
    }
  }
  else {
    if (uVar1 == 3) {
      pfVar2 = (float *)*param_1;
      pfVar5 = (float *)param_1[1];
      fVar12 = *pfVar5;
      fVar11 = *pfVar2;
      if ((fVar12 < fVar11) || ((fVar12 == fVar11 && (pfVar5[1] < pfVar2[1])))) {
        pfVar9 = (float *)param_2[-1];
        if ((*pfVar9 < fVar12) || ((*pfVar9 == fVar12 && (pfVar9[1] < pfVar5[1])))) {
          *param_1 = (long)pfVar9;
        }
        else {
          *param_1 = (long)pfVar5;
          param_1[1] = (long)pfVar2;
          pfVar5 = (float *)param_2[-1];
          if (fVar11 <= *pfVar5) {
            if (*pfVar5 != fVar11) {
              return true;
            }
            if (pfVar2[1] <= pfVar5[1]) {
              return true;
            }
          }
          param_1[1] = (long)pfVar5;
        }
        param_2[-1] = (long)pfVar2;
        return true;
      }
      pfVar2 = (float *)param_2[-1];
      if (fVar12 <= *pfVar2) {
        if (*pfVar2 != fVar12) {
          return true;
        }
        if (pfVar5[1] <= pfVar2[1]) {
          return true;
        }
      }
      param_1[1] = (long)pfVar2;
      param_2[-1] = (long)pfVar5;
      pfVar2 = (float *)*param_1;
      pfVar5 = (float *)param_1[1];
      fVar11 = *pfVar5;
LAB_109ae6358:
      if (*pfVar2 <= fVar11) {
        if (fVar11 != *pfVar2) {
          return true;
        }
        if (pfVar2[1] <= pfVar5[1]) {
          return true;
        }
      }
      *param_1 = (long)pfVar5;
      param_1[1] = (long)pfVar2;
      return true;
    }
    if (uVar1 == 4) {
      FUN_109ae5fa0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
      return true;
    }
    if (uVar1 == 5) {
      FUN_109ae5fa0(param_1,param_1 + 1,param_1 + 2,param_1 + 3);
      pfVar2 = (float *)param_2[-1];
      pfVar5 = (float *)param_1[3];
      if (*pfVar5 <= *pfVar2) {
        if (*pfVar2 != *pfVar5) {
          return true;
        }
        if (pfVar5[1] <= pfVar2[1]) {
          return true;
        }
      }
      param_1[3] = (long)pfVar2;
      param_2[-1] = (long)pfVar5;
      pfVar2 = (float *)param_1[2];
      pfVar5 = (float *)param_1[3];
      fVar11 = *pfVar5;
      if (*pfVar2 <= fVar11) {
        if (fVar11 != *pfVar2) {
          return true;
        }
        if (pfVar2[1] <= pfVar5[1]) {
          return true;
        }
      }
      param_1[2] = (long)pfVar5;
      param_1[3] = (long)pfVar2;
      pfVar2 = (float *)param_1[1];
      if (*pfVar2 <= fVar11) {
        if (fVar11 != *pfVar2) {
          return true;
        }
        if (pfVar2[1] <= pfVar5[1]) {
          return true;
        }
      }
      param_1[1] = (long)pfVar5;
      param_1[2] = (long)pfVar2;
      pfVar2 = (float *)*param_1;
      goto LAB_109ae6358;
    }
  }
  plVar3 = param_1 + 2;
  pfVar2 = (float *)*param_1;
  plVar6 = param_1 + 1;
  pfVar5 = (float *)*plVar6;
  fVar12 = *pfVar5;
  fVar11 = *pfVar2;
  if ((fVar12 < fVar11) || ((fVar12 == fVar11 && (pfVar5[1] < pfVar2[1])))) {
    pfVar9 = (float *)*plVar3;
    fVar13 = *pfVar9;
    if ((fVar13 < fVar12) || ((fVar13 == fVar12 && (pfVar9[1] < pfVar5[1])))) {
      *param_1 = (long)pfVar9;
      plVar6 = plVar3;
    }
    else {
      *param_1 = (long)pfVar5;
      param_1[1] = (long)pfVar2;
      if ((fVar11 <= fVar13) && ((fVar13 != fVar11 || (pfVar2[1] <= pfVar9[1]))))
      goto LAB_109ae6430;
      *plVar6 = (long)pfVar9;
      plVar6 = plVar3;
    }
  }
  else {
    pfVar9 = (float *)*plVar3;
    fVar13 = *pfVar9;
    if ((fVar12 <= fVar13) && ((fVar13 != fVar12 || (pfVar5[1] <= pfVar9[1])))) goto LAB_109ae6430;
    *plVar6 = (long)pfVar9;
    *plVar3 = (long)pfVar5;
    if ((fVar11 <= fVar13) && ((fVar13 != fVar11 || (pfVar2[1] <= pfVar9[1])))) goto LAB_109ae6430;
    *param_1 = (long)pfVar9;
  }
  *plVar6 = (long)pfVar2;
LAB_109ae6430:
  if (param_1 + 3 != param_2) {
    lVar7 = 0;
    iVar8 = 0;
    plVar6 = param_1 + 3;
    do {
      pfVar2 = (float *)*plVar6;
      pfVar5 = (float *)*plVar3;
      fVar11 = *pfVar2;
      if ((fVar11 < *pfVar5) || ((fVar11 == *pfVar5 && (pfVar2[1] < pfVar5[1])))) {
        *plVar6 = (long)pfVar5;
        lVar10 = lVar7;
        do {
          pfVar5 = *(float **)((long)param_1 + lVar10 + 8);
          if (*pfVar5 <= fVar11) {
            if (fVar11 != *pfVar5) {
              plVar4 = (long *)((long)param_1 + lVar10 + 0x10);
              break;
            }
            plVar4 = plVar3;
            if (pfVar5[1] <= pfVar2[1]) break;
          }
          plVar3 = plVar3 + -1;
          *(float **)((long)param_1 + lVar10 + 0x10) = pfVar5;
          lVar10 = lVar10 + -8;
          plVar4 = param_1;
        } while (lVar10 != -0x10);
        *plVar4 = (long)pfVar2;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return plVar6 + 1 == param_2;
        }
      }
      plVar4 = plVar6 + 1;
      lVar7 = lVar7 + 8;
      plVar3 = plVar6;
      plVar6 = plVar4;
    } while (plVar4 != param_2);
  }
  return true;
}



/* Entry: 109ae6508; end: 109ae93c3;  */

void FUN_109ae6508(uint *param_1,uint *param_2,ulong param_3,uint param_4)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  char cVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  long **pplVar39;
  code *pcVar40;
  bool bVar41;
  undefined4 *puVar42;
  ulong *puVar43;
  undefined8 *puVar44;
  undefined1 *puVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  int iVar53;
  long **pplVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  ulong uVar60;
  long lVar61;
  ulong uVar62;
  undefined2 *puVar63;
  undefined1 *puVar64;
  uint uVar65;
  uint uVar66;
  long lVar67;
  undefined1 *puVar68;
  ulong uVar69;
  int iVar70;
  ulong uVar71;
  long lVar72;
  uint uVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  int iVar82;
  uint *puVar83;
  long lVar84;
  int iVar85;
  long lVar86;
  uint uVar87;
  uint uVar88;
  undefined2 *puVar89;
  ulong uVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  int *piVar94;
  bool bVar95;
  ulong uVar96;
  int iVar97;
  long lVar98;
  long lStack_790;
  long lStack_788;
  ulong uStack_780;
  long lStack_748;
  long lStack_740;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined2 *puStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  int *piStack_580;
  ulong *puStack_578;
  ulong uStack_570;
  ulong uStack_568;
  uint uStack_560;
  uint uStack_55c;
  int iStack_558;
  int iStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  ulong uStack_528;
  int *piStack_520;
  long **pplStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  int *piStack_4c8;
  uint *puStack_4c0;
  long *plStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  ulong uStack_498;
  long *plStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  int *piStack_460;
  long **pplStack_458;
  long *plStack_450;
  long lStack_448;
  long lStack_440;
  ulong uStack_438;
  ulong uStack_430;
  undefined2 *puStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong *puStack_3f8;
  undefined8 **ppuStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  uint uStack_3d8;
  uint uStack_3d4;
  uint uStack_3d0;
  uint uStack_3cc;
  ulong uStack_3c8;
  undefined4 uStack_78;
  uint uStack_74;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar43 = *(ulong **)(param_1 + 2);
    puStack_4c0 = (uint *)((ulong)&uStack_500 | 8);
    uStack_4f8 = (long *)puVar43[1];
    uStack_500 = *puVar43;
    uStack_4e8 = puVar43[3];
    uStack_4f0 = puVar43[2];
    uStack_4d8 = puVar43[5];
    uStack_4e0 = puVar43[4];
    piStack_4c8 = (int *)puVar43[7];
    uStack_4d0 = puVar43[6];
    plStack_4b8 = &lStack_4b0;
    lStack_4a8 = 0;
    lStack_4b0 = 0;
    if (puVar43[7] != 0) {
      piVar94 = (int *)(puVar43[7] + 0x14);
      do {
        cVar24 = '\x01';
        bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
        if (bVar41) {
          *piVar94 = *piVar94 + 1;
          cVar24 = ExclusiveMonitorsStatus();
        }
      } while (cVar24 != '\0');
    }
    if (*(int *)((long)puVar43 + 4) < 3) {
      lStack_4b0 = *(long *)puVar43[9];
      lStack_4a8 = ((long *)puVar43[9])[1];
    }
    else {
      uStack_500 = uStack_500 & 0xffffffff;
      func_0x000109a84868(&uStack_500);
    }
  }
  else {
    FUN_109a8a180(&uStack_500,param_1,0xffffffff);
  }
  uVar62 = uStack_500;
  uStack_560 = 0x42ff0000;
  piVar94 = (int *)((ulong)&uStack_560 | 8);
  uStack_528 = 0;
  uStack_52c = 0;
  uStack_534 = 0;
  uStack_530 = 0;
  uStack_53c = 0;
  uStack_538 = 0;
  uStack_544 = 0;
  uStack_540 = 0;
  uStack_54c = 0;
  uStack_548 = 0;
  iStack_554 = 0;
  uStack_550 = 0;
  uStack_55c = 0;
  iStack_558 = 0;
  uStack_508 = 0;
  plStack_510 = (long *)0x0;
  piStack_520 = piVar94;
  pplStack_518 = &plStack_510;
  if ((uStack_500 & 5) != 0) {
    puVar42 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar42 = 1;
    uStack_4a0 = (undefined **)(puVar42 + 1);
    uStack_498 = 0x21;
    *(undefined2 *)(puVar42 + 9) = 0x55;
    *(undefined8 *)(puVar42 + 3) = 0x7c2055385f564320;
    *(undefined8 *)(puVar42 + 1) = 0x3d3d206874706564;
    *(undefined8 *)(puVar42 + 7) = 0x36315f5643203d3d;
    *(undefined8 *)(puVar42 + 5) = 0x206874706564207c;
    FUN_109ac3188(0xffffff29,&uStack_4a0,&UNK_10f59c1a2,&UNK_10f59c1ae,0x656);
    goto LAB_109ae9148;
  }
  if (uStack_4f0 != 0) {
    uVar71 = (ulong)uStack_500._4_4_;
    if ((int)uStack_500._4_4_ < 3) {
      lVar74 = (long)uStack_4f8._4_4_ * (long)(int)uStack_4f8;
    }
    else {
      lVar74 = 1;
      puVar83 = puStack_4c0;
      do {
        lVar74 = lVar74 * (int)*puVar83;
        uVar71 = uVar71 - 1;
        puVar83 = puVar83 + 1;
      } while (uVar71 != 0);
    }
    if (lVar74 != 0) {
      uVar90 = param_3 & 0xffffffff;
      uVar71 = uStack_500 & 7;
      uVar69 = uStack_500 & 7;
      uVar65 = (uint)uStack_500 & 7;
      uVar8 = *puStack_4c0;
      uVar66 = puStack_4c0[1];
      uVar87 = (uint)uStack_500 >> 3 & 0x1ff;
      uVar96 = uVar90 - 0x2e;
      if (uVar96 < 0x2c) {
        if ((1L << (uVar96 & 0x3f) & 0xf000fU) != 0) {
          uVar19 = 3;
          if (0 < (int)param_4) {
            uVar19 = param_4;
          }
          if ((uVar87 != 0) || (1 < uVar19 - 3)) {
            puVar42 = (undefined4 *)0x28;
            func_0x000107c2ae8c();
            *puVar42 = 1;
            uStack_4a0 = (undefined **)(puVar42 + 1);
            uStack_498 = 0x22;
            *(undefined1 *)((long)puVar42 + 0x26) = 0;
            *(undefined2 *)(puVar42 + 9) = 0x2934;
            *(undefined8 *)(puVar42 + 3) = 0x6e63642820262620;
            *(undefined8 *)(puVar42 + 1) = 0x31203d3d206e6373;
            *(undefined8 *)(puVar42 + 7) = 0x203d3d206e636420;
            *(undefined8 *)(puVar42 + 5) = 0x7c7c2033203d3d20;
            FUN_109ac3188(0xffffff29,&uStack_4a0,&UNK_10f59c1a2,&UNK_10f59c1ae,0x670);
            goto LAB_109ae9148;
          }
          uStack_4a0 = (undefined **)CONCAT44(uVar8,uVar66);
          FUN_109a8ee3c(param_2,&uStack_4a0,(uVar65 | uVar19 << 3) - 8,0xffffffff,0,0);
          if ((*param_2 & 0x1f0000) == 0x10000) {
            puVar43 = *(ulong **)(param_2 + 2);
            piStack_580 = (int *)((ulong)&uStack_5c0 | 8);
            uStack_5b8 = puVar43[1];
            uStack_5c0 = *puVar43;
            uStack_5a8 = puVar43[3];
            puStack_5b0 = (undefined2 *)puVar43[2];
            uStack_598 = puVar43[5];
            uStack_5a0 = puVar43[4];
            uStack_588 = puVar43[7];
            uStack_590 = puVar43[6];
            puStack_578 = &uStack_570;
            uStack_568 = 0;
            uStack_570 = 0;
            if (puVar43[7] != 0) {
              piVar94 = (int *)(puVar43[7] + 0x14);
              do {
                cVar24 = '\x01';
                bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                if (bVar41) {
                  *piVar94 = *piVar94 + 1;
                  cVar24 = ExclusiveMonitorsStatus();
                }
              } while (cVar24 != '\0');
            }
            if (*(int *)((long)puVar43 + 4) < 3) {
              uStack_570 = *(ulong *)puVar43[9];
              uStack_568 = ((ulong *)puVar43[9])[1];
            }
            else {
              uStack_5c0 = uStack_5c0 & 0xffffffff;
              func_0x000109a84868(&uStack_5c0);
            }
          }
          else {
            FUN_109a8a180(&uStack_5c0,param_2,0xffffffff);
          }
          lVar74 = lStack_4b0;
          uVar38 = uStack_4f0;
          uVar62 = uStack_570;
          puVar63 = puStack_5b0;
          uVar8 = (uint)uStack_5c0;
          iVar70 = (int)uStack_570;
          if (uVar96 < 4) {
            if (uVar71 == 0) {
              uVar66 = *puStack_4c0;
              uVar87 = puStack_4c0[1];
LAB_109ae7b68:
              if (2 < (int)uVar66) {
                plStack_490 = uStack_4f8;
                uStack_498 = uStack_500;
                uStack_480 = uStack_4e8;
                uStack_488 = uStack_4f0;
                uVar66 = uVar66 - 2;
                uVar65 = 1;
                if ((param_3 & 0xfffffffe) == 0x2e) {
                  uVar65 = 0xffffffff;
                }
                uStack_78 = 0;
                pplStack_458 = &plStack_490;
                uStack_470 = uStack_4d8;
                uStack_478 = uStack_4e0;
                piStack_460 = piStack_4c8;
                uStack_468 = uStack_4d0;
                uStack_4a0 = &PTR_FUN_110b24658;
                plStack_450 = &lStack_448;
                lStack_440 = 0;
                lStack_448 = 0;
                if (piStack_4c8 != (int *)0x0) {
                  piVar94 = piStack_4c8 + 5;
                  do {
                    cVar24 = '\x01';
                    bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                    if (bVar41) {
                      *piVar94 = *piVar94 + 1;
                      cVar24 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar24 != '\0');
                }
                uStack_74 = uVar66;
                if ((int)uStack_500._4_4_ < 3) {
                  lStack_448 = *plStack_4b8;
                  lStack_440 = plStack_4b8[1];
                }
                else {
                  uStack_498 = uStack_500 & 0xffffffff;
                  func_0x000109a84868(&uStack_498,&uStack_500);
                }
                uStack_430 = uStack_5b8;
                uStack_438 = uStack_5c0;
                uStack_420 = uStack_5a8;
                puStack_428 = puStack_5b0;
                puStack_3f8 = &uStack_430;
                uStack_410 = uStack_598;
                uStack_418 = uStack_5a0;
                uStack_400 = uStack_588;
                uStack_408 = uStack_590;
                ppuStack_3f0 = &plStack_3e8;
                plStack_3e0 = (long *)0x0;
                plStack_3e8 = (long *)0x0;
                if (uStack_588 != 0) {
                  piVar94 = (int *)(uStack_588 + 0x14);
                  do {
                    cVar24 = '\x01';
                    bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                    if (bVar41) {
                      *piVar94 = *piVar94 + 1;
                      cVar24 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar24 != '\0');
                }
                if ((int)uStack_5c0._4_4_ < 3) {
                  plStack_3e8 = (long *)*puStack_578;
                  plStack_3e0 = (long *)puStack_578[1];
LAB_109ae8240:
                  uVar71 = (long)uStack_5b8._4_4_ * (long)(int)uStack_5b8;
                }
                else {
                  uStack_438 = uStack_5c0 & 0xffffffff;
                  func_0x000109a84868(&uStack_438,&uStack_5c0);
                  uVar62 = (ulong)uStack_5c0._4_4_;
                  if ((int)uStack_5c0._4_4_ < 3) goto LAB_109ae8240;
                  uVar71 = 1;
                  piVar94 = piStack_580;
                  do {
                    uVar71 = uVar71 * (long)*piVar94;
                    uVar62 = uVar62 - 1;
                    piVar94 = piVar94 + 1;
                  } while (uVar62 != 0);
                }
                uStack_3d8 = (uint)(uVar90 == 0x2f || uVar90 == 0x31);
                uStack_3d4 = uVar65;
                uStack_3d0 = uVar87 - 2;
                uStack_3cc = uVar66;
                func_0x000109aa87cc((double)uVar71 / 65536.0,&uStack_78,&uStack_4a0);
                FUN_109ae9c28(&uStack_4a0);
              }
              iVar82 = *piStack_580;
              uVar65 = piStack_580[1] * ((uVar8 >> 3 & 0x1ff) + 1);
              if (iVar82 < 3) {
                if (0 < (int)uVar65) {
                  iVar70 = (iVar82 + -1) * iVar70;
                  lVar74 = -(ulong)uVar65;
                  puVar63 = puStack_5b0;
                  do {
                    *(undefined1 *)((long)puStack_5b0 + (long)iVar70) = 0;
                    *(undefined1 *)puVar63 = 0;
                    iVar70 = iVar70 + 1;
                    bVar41 = lVar74 != -1;
                    lVar74 = lVar74 + 1;
                    puVar63 = (undefined2 *)((long)puVar63 + 1);
                  } while (bVar41);
                }
              }
              else if (0 < (int)uVar65) {
                lVar74 = -(ulong)uVar65;
                puVar63 = puStack_5b0;
                do {
                  *(undefined1 *)puVar63 = *(undefined1 *)((long)puVar63 + (long)iVar70);
                  *(undefined1 *)((long)puVar63 + ((long)iVar82 + -1) * (long)iVar70) =
                       *(undefined1 *)((long)puVar63 + ((long)iVar82 + -2) * (long)iVar70);
                  puVar63 = (undefined2 *)((long)puVar63 + 1);
                  bVar41 = lVar74 != -1;
                  lVar74 = lVar74 + 1;
                } while (bVar41);
              }
            }
            else {
              if (uVar65 != 2) {
                puVar42 = (undefined4 *)0x3c;
                func_0x000107c2ae8c();
                *puVar42 = 1;
                uStack_4a0 = (undefined **)(puVar42 + 1);
                uStack_498 = 0x35;
                *(undefined8 *)(puVar42 + 3) = 0x736f6d6564204247;
                *(undefined8 *)(puVar42 + 1) = 0x523e2d7265796142;
                *(undefined1 *)((long)puVar42 + 0x39) = 0;
                *(undefined8 *)(puVar42 + 7) = 0x7070757320796c6e;
                *(undefined8 *)(puVar42 + 5) = 0x6f20676e69636961;
                *(undefined8 *)(puVar42 + 0xb) = 0x2075363120646e61;
                *(undefined8 *)(puVar42 + 9) = 0x207538207374726f;
                *(undefined8 *)((long)puVar42 + 0x31) = 0x7365707974207536;
                FUN_109ac3188(0xffffff2e,&uStack_4a0,&UNK_10f59c1a2,&UNK_10f59c1ae,0x67d);
                goto LAB_109ae9148;
              }
              if (2 < (int)*puStack_4c0) {
                uVar66 = puStack_4c0[1];
                plStack_490 = uStack_4f8;
                uStack_498 = uStack_500;
                uStack_480 = uStack_4e8;
                uStack_488 = uStack_4f0;
                uVar87 = *puStack_4c0 - 2;
                uVar65 = 1;
                if ((param_3 & 0x3e) == 0x2e) {
                  uVar65 = 0xffffffff;
                }
                uStack_78 = 0;
                pplStack_458 = &plStack_490;
                uStack_470 = uStack_4d8;
                uStack_478 = uStack_4e0;
                piStack_460 = piStack_4c8;
                uStack_468 = uStack_4d0;
                uStack_4a0 = &PTR_FUN_110b24718;
                plStack_450 = &lStack_448;
                lStack_440 = 0;
                lStack_448 = 0;
                if (piStack_4c8 != (int *)0x0) {
                  piVar94 = piStack_4c8 + 5;
                  do {
                    cVar24 = '\x01';
                    bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                    if (bVar41) {
                      *piVar94 = *piVar94 + 1;
                      cVar24 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar24 != '\0');
                }
                uStack_74 = uVar87;
                if ((int)uStack_500._4_4_ < 3) {
                  lStack_448 = *plStack_4b8;
                  lStack_440 = plStack_4b8[1];
                }
                else {
                  uStack_498 = uStack_500 & 0xffffffff;
                  func_0x000109a84868(&uStack_498,&uStack_500);
                }
                uStack_430 = uStack_5b8;
                uStack_438 = uStack_5c0;
                uStack_420 = uStack_5a8;
                puStack_428 = puStack_5b0;
                puStack_3f8 = &uStack_430;
                uStack_410 = uStack_598;
                uStack_418 = uStack_5a0;
                uStack_400 = uStack_588;
                uStack_408 = uStack_590;
                ppuStack_3f0 = &plStack_3e8;
                plStack_3e0 = (long *)0x0;
                plStack_3e8 = (long *)0x0;
                if (uStack_588 != 0) {
                  piVar94 = (int *)(uStack_588 + 0x14);
                  do {
                    cVar24 = '\x01';
                    bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                    if (bVar41) {
                      *piVar94 = *piVar94 + 1;
                      cVar24 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar24 != '\0');
                }
                if ((int)uStack_5c0._4_4_ < 3) {
                  plStack_3e8 = (long *)*puStack_578;
                  plStack_3e0 = (long *)puStack_578[1];
LAB_109ae845c:
                  uVar69 = (long)uStack_5b8._4_4_ * (long)(int)uStack_5b8;
                }
                else {
                  uStack_438 = uStack_5c0 & 0xffffffff;
                  func_0x000109a84868(&uStack_438,&uStack_5c0);
                  uVar71 = (ulong)uStack_5c0._4_4_;
                  if ((int)uStack_5c0._4_4_ < 3) goto LAB_109ae845c;
                  uVar69 = 1;
                  piVar94 = piStack_580;
                  do {
                    uVar69 = uVar69 * (long)*piVar94;
                    uVar71 = uVar71 - 1;
                    piVar94 = piVar94 + 1;
                  } while (uVar71 != 0);
                }
                uStack_3d8 = (uint)(uVar90 == 0x2f || uVar90 == 0x31);
                uStack_3d4 = uVar65;
                uStack_3d0 = uVar66 - 2;
                uStack_3cc = uVar87;
                func_0x000109aa87cc((double)uVar69 / 65536.0,&uStack_78,&uStack_4a0);
                FUN_109aeadac(&uStack_4a0);
              }
              iVar70 = *piStack_580;
              uVar65 = piStack_580[1] * ((uVar8 >> 3 & 0x1ff) + 1);
              iVar82 = (int)(uVar62 >> 1);
              if (iVar70 + -2 == 0 || iVar70 < 2) {
                if (0 < (int)uVar65) {
                  lVar74 = (ulong)uVar65 << 1;
                  puVar63 = puStack_5b0;
                  do {
                    puVar63[(iVar70 + -1) * iVar82] = 0;
                    *puVar63 = 0;
                    lVar74 = lVar74 + -2;
                    puVar63 = puVar63 + 1;
                  } while (lVar74 != 0);
                }
              }
              else if (0 < (int)uVar65) {
                lVar74 = (ulong)uVar65 << 1;
                puVar63 = puStack_5b0;
                do {
                  *puVar63 = *(undefined2 *)
                              ((long)puVar63 +
                              (-(uVar62 >> 0x20 & 1) & 0xfffffffe00000000 |
                              (uVar62 >> 1 & 0xffffffff) << 1));
                  puVar63[(iVar70 + -1) * iVar82] = puVar63[(iVar70 + -2) * iVar82];
                  puVar63 = puVar63 + 1;
                  lVar74 = lVar74 + -2;
                } while (lVar74 != 0);
              }
            }
          }
          else {
            if (uVar69 != 0) {
              puVar42 = (undefined4 *)0x14;
              func_0x000107c2ae8c();
              *puVar42 = 1;
              uStack_4a0 = (undefined **)(puVar42 + 1);
              *uStack_4a0 = (undefined *)0x3d3d206874706564;
              uStack_498 = 0xe;
              *(undefined1 *)((long)puVar42 + 0x12) = 0;
              *(undefined8 *)((long)puVar42 + 10) = 0x55385f5643203d3d;
              FUN_109ac3188(0xffffff29,&uStack_4a0,&UNK_10f59c1a2,&UNK_10f59c1ae,0x681);
              goto LAB_109ae9148;
            }
            uVar66 = *puStack_4c0;
            uVar87 = puStack_4c0[1];
            uVar65 = uVar87;
            if ((int)uVar66 <= (int)uVar87) {
              uVar65 = uVar66;
            }
            if ((int)uVar65 < 8) goto LAB_109ae7b68;
            bVar41 = uVar90 != 0x3e && uVar90 != 0x40;
            uStack_780 = 0;
            if ((param_3 & 0xfffffffe) != 0x3e) {
              uStack_780 = 2;
            }
            uVar65 = uVar87 * 0x93;
            uVar71 = (ulong)(int)uVar65;
            pplVar54 = &plStack_490;
            if (0x208 < uVar65) {
              pplVar54 = (long **)(uVar71 << 1);
              if (0x7fffffff < uVar65) {
                pplVar54 = (long **)0xffffffffffffffff;
              }
              uStack_4a0 = (undefined **)&plStack_490;
              __Znam();
            }
            uVar27 = uVar87 * 3;
            iVar82 = uVar87 << 2;
            iVar18 = uVar87 * 6;
            uVar25 = uVar87 - 2;
            uVar88 = (uint)lVar74;
            uVar8 = uVar88 * 2;
            lVar55 = (lVar74 << 0x20) + 0x100000000 >> 0x20;
            lVar56 = (lVar74 << 0x20) + -0x100000000 >> 0x20;
            uVar19 = uVar87 * 2;
            lVar57 = (long)iVar70;
            lVar58 = (long)(int)uVar88;
            lVar47 = lVar58 * 2 + (long)(int)uVar8;
            lVar7 = (0x100000000 - (lVar74 << 0x20) >> 0x20) + (long)(int)uVar8 + uVar38;
            lStack_788 = uVar38 + lVar47;
            lStack_740 = uVar38 + (long)(int)uVar88 * 2;
            lVar92 = (uVar62 << 0x21) + 0x500000000;
            lStack_790 = (uVar62 << 0x21) + 0x800000000;
            iVar20 = uVar87 * 0x31;
            lVar31 = (long)(int)(uVar27 + 1) * 2 + 4;
            lVar35 = (long)(int)uVar27 * 2 + 4;
            lVar32 = (long)(int)(uVar19 - 2) * 2 + 6;
            lVar72 = (-(ulong)((uVar87 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                     (ulong)uVar19 << 1) + 4;
            uVar65 = 0;
            lVar28 = (long)iVar18 * 2 + 6;
            lVar33 = (long)(iVar18 + -2) * 2 + 6;
            lVar34 = (long)(int)(uVar27 - 1) * 2 + 4;
            lVar29 = (long)(int)(uVar87 * 5) * 2 + 2;
            lVar30 = (long)iVar82 * 2 + 2;
            lStack_5d8 = lVar47 + (int)uVar88 + uVar38 + 2;
            lStack_690 = lVar47 + ((lVar74 << 0x20) + 0x200000000 >> 0x20) + uVar38 + 2;
            lStack_678 = lVar47 + lVar55 + uVar38 + 2;
            lStack_748 = lVar47 + (int)(uVar88 * -2 + 2) + uVar38 + 2;
            lStack_5e0 = (long)(int)uVar8 + (long)(int)uVar88 + uVar38 + 2;
            lStack_698 = lVar47 + (-0x200000000 - (lVar74 << 0x20) >> 0x20) + uVar38 + 2;
            lStack_680 = lVar47 + (int)~uVar88 + uVar38 + 2;
            lStack_5d0 = (-(ulong)((uVar88 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                         (ulong)uVar8 << 1) + (long)(int)uVar88 * 2 + uVar38 + 2;
            lStack_6a0 = lVar47 + (int)(uVar8 ^ 0xfffffffe) + uVar38 + 3;
            lStack_6a8 = lVar47 + ((lVar74 << 0x20) + -0x200000000 >> 0x20) + uVar38 + 2;
            lStack_5e8 = lVar47 + lVar56 + uVar38 + 2;
            lStack_6b0 = lVar47 + (int)(uVar8 - 2) + uVar38 + 3;
            lStack_6b8 = lVar47 + (0x200000000 - (lVar74 << 0x20) >> 0x20) + uVar38 + 2;
            lStack_5c8 = lVar7 + (long)(int)uVar88 * 2 + 2;
            lStack_688 = lVar47 + (int)(uVar88 * -2) + uVar38 + 3;
            puVar64 = (undefined1 *)((long)puVar63 + lVar57 * 2 + (long)(int)(uVar25 * 3));
            puVar45 = (undefined1 *)((long)puVar63 + lVar57 * 2 + (long)(int)(uVar27 - 9));
            lVar59 = (long)(int)uVar87;
            lVar75 = (long)(int)uVar66;
            uVar90 = 1;
            lVar47 = 3;
            uVar96 = 2;
            uVar69 = 2;
            do {
              iVar21 = iVar20 * ((int)uVar96 + (int)(uVar96 / 3) * -3);
              iVar22 = iVar20 * ((int)uVar90 + (int)(uVar90 / 3) * -3);
              lVar61 = lVar72 + (long)iVar22 * 2;
              lVar77 = lVar59 * 2 + 4 + (long)iVar22 * 2;
              iVar23 = iVar20 * (uVar65 % 3);
              lVar93 = 1;
              if (uVar69 == 2) {
                lVar93 = -1;
              }
              lVar52 = lVar58 * (lVar93 + uVar69);
              lVar67 = uVar38 + (long)(int)uVar8 + lVar52;
              lVar84 = lVar55 + (int)uVar8 + uVar38 + 1 + lVar52;
              lVar86 = lVar7 + 1 + lVar52;
              lVar46 = uVar38 + (long)(int)uVar8 + 1 + lVar58 * (lVar93 + lVar47);
              lVar48 = (-(lVar74 << 0x20) >> 0x20) + (long)(int)uVar8 + uVar38 + 1 + lVar52;
              lVar76 = lVar56 + (int)uVar8 + uVar38 + 1 + lVar52;
              lVar52 = (long)(int)uVar8 + (long)(int)~uVar88 + uVar38 + 1 + lVar52;
              lVar49 = lVar72 + (long)iVar23 * 2;
              do {
                iVar97 = (((int)lVar93 + (int)uVar69 + -1) % 3) * iVar20;
                lVar98 = (long)iVar97;
                lVar1 = (long)iVar97 * 2;
                puVar89 = (undefined2 *)((long)pplVar54 + lVar1);
                lVar91 = 7;
                do {
                  *(undefined2 *)
                   ((long)puVar89 +
                   (-(ulong)(uVar25 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar25 << 1) + 2) = 0;
                  *puVar89 = 0;
                  puVar89 = puVar89 + lVar59;
                  lVar91 = lVar91 + -1;
                } while (lVar91 != 0);
                lVar91 = 0;
                lVar36 = lVar98 * 2 + (long)(int)uVar27 * 2 + 2;
                lVar37 = lVar98 * 2 + (long)(int)uVar19 * 2 + 2;
                do {
                  bVar11 = *(byte *)(lVar52 + lVar91);
                  bVar12 = *(byte *)(lVar76 + lVar91);
                  iVar53 = (uint)bVar11 - (uint)bVar12;
                  bVar13 = *(byte *)(lVar48 + lVar91);
                  iVar97 = -iVar53;
                  if (-1 < iVar53) {
                    iVar97 = iVar53;
                  }
                  bVar14 = *(byte *)(lVar46 + lVar91);
                  iVar85 = (uint)bVar13 - (uint)bVar14;
                  iVar53 = -iVar85;
                  if (-1 < iVar85) {
                    iVar53 = iVar85;
                  }
                  bVar15 = *(byte *)(lVar86 + lVar91);
                  bVar16 = *(byte *)(lVar84 + lVar91);
                  iVar26 = (uint)bVar15 - (uint)bVar16;
                  iVar85 = -iVar26;
                  if (-1 < iVar26) {
                    iVar85 = iVar26;
                  }
                  *(short *)((long)pplVar54 + lVar91 * 2 + lVar1 + 2) =
                       (short)iVar97 + (short)(iVar53 << 1) + (short)iVar85;
                  iVar53 = (uint)bVar11 - (uint)bVar15;
                  iVar97 = -iVar53;
                  if (-1 < iVar53) {
                    iVar97 = iVar53;
                  }
                  bVar9 = *(byte *)(lVar67 + lVar91);
                  bVar10 = ((byte *)(lVar67 + lVar91))[2];
                  iVar85 = (uint)bVar9 - (uint)bVar10;
                  iVar53 = -iVar85;
                  if (-1 < iVar85) {
                    iVar53 = iVar85;
                  }
                  iVar26 = (uint)bVar12 - (uint)bVar16;
                  iVar85 = -iVar26;
                  if (-1 < iVar26) {
                    iVar85 = iVar26;
                  }
                  *(short *)((long)pplVar54 + lVar91 * 2 + lVar98 * 2 + lVar59 * 2 + 2) =
                       (short)iVar85 + (short)iVar97 + (short)(iVar53 << 1);
                  iVar53 = (uint)bVar15 - (uint)bVar12;
                  iVar97 = -iVar53;
                  if (-1 < iVar53) {
                    iVar97 = iVar53;
                  }
                  *(short *)((long)pplVar54 + lVar91 * 2 + lVar37) = (short)(iVar97 << 1);
                  iVar53 = (uint)bVar11 - (uint)bVar16;
                  iVar97 = -iVar53;
                  if (-1 < iVar53) {
                    iVar97 = iVar53;
                  }
                  *(short *)((long)pplVar54 + lVar91 * 2 + lVar36) = (short)(iVar97 << 1);
                  iVar53 = (uint)bVar13 - (uint)bVar9;
                  iVar97 = -iVar53;
                  if (-1 < iVar53) {
                    iVar97 = iVar53;
                  }
                  iVar85 = (uint)bVar14 - (uint)bVar10;
                  iVar53 = -iVar85;
                  if (-1 < iVar85) {
                    iVar53 = iVar85;
                  }
                  *(short *)((long)pplVar54 + lVar91 * 2 + lVar98 * 2 + lVar30) =
                       *(short *)((long)pplVar54 + lVar91 * 2 + lVar37) +
                       (short)iVar53 + (short)iVar97;
                  iVar53 = (uint)bVar13 - (uint)bVar10;
                  iVar97 = -iVar53;
                  if (-1 < iVar53) {
                    iVar97 = iVar53;
                  }
                  iVar85 = (uint)bVar14 - (uint)bVar9;
                  iVar53 = -iVar85;
                  if (-1 < iVar85) {
                    iVar53 = iVar85;
                  }
                  *(short *)((long)pplVar54 + lVar91 * 2 + lVar98 * 2 + lVar29) =
                       *(short *)((long)pplVar54 + lVar91 * 2 + lVar36) +
                       (short)iVar97 + (short)iVar53;
                  *(short *)((long)pplVar54 + lVar91 * 2 + lVar98 * 2 + (long)iVar18 * 2 + 2) =
                       (short)((uint)bVar14 + (uint)bVar13 + (uint)bVar9 + (uint)bVar10 >> 1);
                  lVar91 = lVar91 + 1;
                } while (uVar25 != (uint)lVar91);
                lVar93 = lVar93 + 1;
                lVar67 = lVar67 + lVar58;
                lVar84 = lVar84 + lVar58;
                lVar86 = lVar86 + lVar58;
                lVar46 = lVar46 + lVar58;
                lVar48 = lVar48 + lVar58;
                lVar76 = lVar76 + lVar58;
                lVar52 = lVar52 + lVar58;
              } while (lVar93 != 2);
              lVar93 = 0;
              puVar68 = (undefined1 *)((long)puVar63 + uVar69 * lVar57 + 6);
              bVar95 = bVar41;
              do {
                lVar67 = lStack_788 + lVar93;
                uVar78 = (uint)*(ushort *)((long)pplVar54 + lVar93 * 2 + (long)iVar22 * 2 + 4);
                uVar73 = uVar78 + *(ushort *)((long)pplVar54 + lVar93 * 2 + (long)iVar23 * 2 + 4);
                uVar78 = *(ushort *)((long)pplVar54 + lVar93 * 2 + (long)iVar21 * 2 + 4) + uVar78;
                uVar79 = (uint)*(ushort *)((long)pplVar54 + lVar77);
                uVar3 = uVar79 + *(ushort *)
                                  ((long)pplVar54 +
                                  lVar93 * 2 + (long)iVar22 * 2 + (long)(int)(uVar87 - 1) * 2 + 4);
                uVar79 = ((ushort *)((long)pplVar54 + lVar77))[1] + uVar79;
                uVar6 = uVar78;
                if (uVar73 <= uVar78) {
                  uVar6 = uVar73;
                }
                uVar50 = uVar3;
                if (uVar6 <= uVar3) {
                  uVar50 = uVar6;
                }
                uVar6 = uVar79;
                if (uVar50 <= uVar79) {
                  uVar6 = uVar50;
                }
                uVar50 = uVar73;
                if (uVar73 <= uVar78) {
                  uVar50 = uVar78;
                }
                if (uVar50 <= uVar3) {
                  uVar50 = uVar3;
                }
                if (uVar50 <= uVar79) {
                  uVar50 = uVar79;
                }
                if (bVar95) {
                  uVar80 = (uint)*(ushort *)((long)pplVar54 + lVar61);
                  uVar4 = (uint)((ushort *)((long)pplVar54 + lVar49))[1] +
                          (uint)*(ushort *)((long)pplVar54 + lVar49) +
                          uVar80 + ((ushort *)((long)pplVar54 + lVar61))[1];
                  uVar80 = *(ushort *)((long)pplVar54 + lVar93 * 2 + (long)iVar22 * 2 + lVar32) +
                           uVar80 + (uint)*(ushort *)
                                           ((long)pplVar54 + lVar93 * 2 + (long)iVar21 * 2 + lVar72)
                                    + (uint)*(ushort *)
                                             ((long)pplVar54 +
                                             lVar93 * 2 + (long)iVar21 * 2 + lVar32);
                  uVar81 = (uint)*(ushort *)
                                  ((long)pplVar54 + lVar93 * 2 + (long)iVar22 * 2 + lVar35);
                  uVar5 = (uint)*(ushort *)((long)pplVar54 + lVar93 * 2 + (long)iVar23 * 2 + lVar34)
                          + (uint)*(ushort *)
                                   ((long)pplVar54 + lVar93 * 2 + (long)iVar23 * 2 + lVar35) +
                          uVar81 + *(ushort *)
                                    ((long)pplVar54 + lVar93 * 2 + (long)iVar22 * 2 + lVar34);
                  uVar81 = *(ushort *)((long)pplVar54 + lVar93 * 2 + (long)iVar22 * 2 + lVar31) +
                           uVar81 + (uint)*(ushort *)
                                           ((long)pplVar54 + lVar93 * 2 + (long)iVar21 * 2 + lVar35)
                                    + (uint)*(ushort *)
                                             ((long)pplVar54 +
                                             lVar93 * 2 + (long)iVar21 * 2 + lVar31);
                  uVar51 = uVar4;
                  if (uVar6 <= uVar4) {
                    uVar51 = uVar6;
                  }
                  uVar6 = uVar80;
                  if (uVar51 <= uVar80) {
                    uVar6 = uVar51;
                  }
                  uVar51 = uVar5;
                  if (uVar6 <= uVar5) {
                    uVar51 = uVar6;
                  }
                  uVar6 = uVar81;
                  if (uVar51 <= uVar81) {
                    uVar6 = uVar51;
                  }
                  if (uVar50 <= uVar4) {
                    uVar50 = uVar4;
                  }
                  if (uVar50 <= uVar80) {
                    uVar50 = uVar80;
                  }
                  if (uVar50 <= uVar5) {
                    uVar50 = uVar5;
                  }
                  if (uVar50 <= uVar81) {
                    uVar50 = uVar81;
                  }
                  if (uVar50 < 3) {
                    uVar50 = 2;
                  }
                  uVar6 = uVar6 + (uVar50 >> 1);
                  if (uVar6 <= uVar73) {
                    iVar97 = 0;
                    iVar53 = 0;
                    iVar85 = 0;
                  }
                  else {
                    iVar97 = (uint)*(byte *)(lStack_688 + lVar93) +
                             (uint)*(byte *)(lStack_6a0 + lVar93);
                    iVar53 = (uint)*(byte *)(lVar67 + 2) + (uint)((byte *)(lStack_688 + lVar93))[-1]
                    ;
                    iVar85 = (uint)*(byte *)(lStack_5e0 + lVar93) << 1;
                  }
                  uVar60 = (ulong)(uVar6 > uVar73);
                  if (uVar78 < uVar6) {
                    iVar97 = iVar97 + (uint)*(byte *)(lStack_6b0 + lVar93) +
                             (uint)((byte *)(lStack_5d0 + lVar93))[1];
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_5d0 + lVar93) +
                             (uint)*(byte *)(lVar67 + 2);
                    iVar85 = iVar85 + (uint)*(byte *)(lStack_5d8 + lVar93) * 2;
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar3 < uVar6) {
                    iVar97 = iVar97 + (uint)((byte *)(lStack_788 + lVar93))[1] * 2;
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_788 + lVar93) +
                             (uint)*(byte *)(lVar67 + 2);
                    iVar85 = iVar85 + (uint)*(byte *)(lStack_698 + lVar93) +
                             (uint)*(byte *)(lStack_6a8 + lVar93);
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar79 < uVar6) {
                    iVar97 = iVar97 + (uint)*(byte *)(lStack_788 + lVar93 + 3) * 2;
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_788 + lVar93 + 4) +
                             (uint)*(byte *)(lVar67 + 2);
                    iVar85 = iVar85 + (uint)*(byte *)(lStack_6b8 + lVar93) +
                             (uint)*(byte *)(lStack_690 + lVar93);
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar4 < uVar6) {
                    iVar97 = iVar97 + (uint)*(byte *)(lStack_688 + lVar93) +
                             (uint)*(byte *)(lStack_788 + lVar93 + 3);
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_5c8 + lVar93) * 2;
                    iVar85 = iVar85 + (uint)*(byte *)(lStack_5e0 + lVar93) +
                             (uint)*(byte *)(lStack_6b8 + lVar93);
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar80 < uVar6) {
                    iVar97 = iVar97 + (uint)*(byte *)(lStack_6b0 + lVar93) +
                             (uint)*(byte *)(lStack_788 + lVar93 + 1);
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_5e8 + lVar93) * 2;
                    iVar85 = iVar85 + (uint)*(byte *)(lStack_5d8 + lVar93) +
                             (uint)*(byte *)(lStack_6a8 + lVar93);
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar5 < uVar6) {
                    iVar97 = iVar97 + (uint)*(byte *)(lStack_6a0 + lVar93) +
                             (uint)*(byte *)(lStack_788 + lVar93 + 1);
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_680 + lVar93) * 2;
                    iVar85 = iVar85 + (uint)*(byte *)(lStack_698 + lVar93) +
                             (uint)*(byte *)(lStack_5e0 + lVar93);
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar81 < uVar6) {
                    iVar97 = iVar97 + (uint)*(byte *)(lStack_5d0 + lVar93 + 1) +
                             (uint)*(byte *)(lStack_788 + lVar93 + 3);
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_678 + lVar93) * 2;
                    iVar85 = iVar85 + (uint)*(byte *)(lStack_690 + lVar93) +
                             (uint)*(byte *)(lStack_5d8 + lVar93);
                    uVar60 = uVar60 + 1;
                  }
                  bVar11 = *(byte *)(lVar67 + 2);
                  uVar73 = (uint)bVar11;
                  uVar50 = (int)(long)(float)(int)(*(float *)(&UNK_10e030078 + uVar60 * 4) *
                                                  (float)(iVar97 - iVar53)) + (uint)bVar11;
                  uVar51 = (int)(long)(float)(int)(*(float *)(&UNK_10e030078 + uVar60 * 4) *
                                                  (float)(iVar85 - iVar53)) + (uint)bVar11;
                }
                else {
                  uVar80 = (uint)*(ushort *)
                                  ((long)pplVar54 +
                                  lVar93 * 2 + (long)iVar22 * 2 + (long)iVar82 * 2 + 4);
                  uVar4 = uVar80 + *(ushort *)
                                    ((long)pplVar54 +
                                    lVar93 * 2 + (long)iVar23 * 2 + (long)iVar82 * 2 + 6);
                  uVar80 = *(ushort *)((long)pplVar54 + lVar93 * 2 + (long)iVar21 * 2 + lVar30) +
                           uVar80;
                  uVar81 = (uint)*(ushort *)
                                  ((long)pplVar54 +
                                  lVar93 * 2 + (long)iVar22 * 2 + (long)(int)(uVar87 * 5) * 2 + 4);
                  uVar5 = uVar81 + *(ushort *)
                                    ((long)pplVar54 + lVar93 * 2 + (long)iVar23 * 2 + lVar29);
                  uVar81 = *(ushort *)
                            ((long)pplVar54 +
                            lVar93 * 2 + (long)iVar21 * 2 + (long)(int)(uVar87 * 5) * 2 + 6) +
                           uVar81;
                  uVar51 = uVar4;
                  if (uVar6 <= uVar4) {
                    uVar51 = uVar6;
                  }
                  uVar6 = uVar80;
                  if (uVar51 <= uVar80) {
                    uVar6 = uVar51;
                  }
                  uVar51 = uVar5;
                  if (uVar6 <= uVar5) {
                    uVar51 = uVar6;
                  }
                  uVar6 = uVar81;
                  if (uVar51 <= uVar81) {
                    uVar6 = uVar51;
                  }
                  if (uVar50 <= uVar4) {
                    uVar50 = uVar4;
                  }
                  if (uVar50 <= uVar80) {
                    uVar50 = uVar80;
                  }
                  if (uVar50 <= uVar5) {
                    uVar50 = uVar5;
                  }
                  if (uVar50 <= uVar81) {
                    uVar50 = uVar81;
                  }
                  if (uVar50 < 3) {
                    uVar50 = 2;
                  }
                  uVar6 = uVar6 + (uVar50 >> 1);
                  uVar50 = (uint)*(byte *)(lVar67 + 2);
                  uVar51 = (uint)*(byte *)(lVar67 + 2);
                  if (uVar6 <= uVar73) {
                    iVar97 = 0;
                    iVar85 = 0;
                    iVar53 = 0;
                  }
                  else {
                    iVar97 = *(byte *)(lStack_688 + lVar93 + -1) + uVar51;
                    iVar85 = (uint)*(byte *)(lStack_5e0 + lVar93) << 1;
                    iVar53 = (uint)*(byte *)(lStack_5c8 + lVar93) +
                             (uint)*(byte *)(lStack_680 + lVar93);
                  }
                  uVar60 = (ulong)(uVar6 > uVar73);
                  if (uVar78 < uVar6) {
                    iVar97 = iVar97 + uVar51 + (uint)*(byte *)(lStack_5d0 + lVar93);
                    iVar85 = iVar85 + (uint)*(byte *)(lStack_5d8 + lVar93) * 2;
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_5e8 + lVar93) +
                             (uint)*(byte *)(lStack_678 + lVar93);
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar3 < uVar6) {
                    iVar97 = iVar97 + uVar51 + (uint)*(byte *)(lStack_788 + lVar93);
                    iVar85 = iVar85 + (uint)((byte *)(lStack_788 + lVar93))[1] * 2;
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_680 + lVar93) +
                             (uint)*(byte *)(lStack_5e8 + lVar93);
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar79 < uVar6) {
                    iVar97 = iVar97 + uVar51 + (uint)*(byte *)(lStack_788 + lVar93 + 4);
                    iVar85 = iVar85 + (uint)*(byte *)(lStack_788 + lVar93 + 3) * 2;
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_5c8 + lVar93) +
                             (uint)*(byte *)(lStack_678 + lVar93);
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar4 < uVar6) {
                    iVar97 = iVar97 + uVar51 + (uint)*(byte *)(lStack_748 + lVar93);
                    iVar85 = iVar85 + (uint)*(ushort *)
                                             ((long)pplVar54 +
                                             lVar93 * 2 + (long)iVar23 * 2 + lVar28);
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_5c8 + lVar93) * 2;
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar80 < uVar6) {
                    iVar97 = iVar97 + uVar51 + (uint)*(byte *)(lStack_5d0 + lVar93 + -2);
                    iVar85 = iVar85 + (uint)*(ushort *)
                                             ((long)pplVar54 +
                                             lVar93 * 2 + (long)iVar21 * 2 + lVar33);
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_5e8 + lVar93) * 2;
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar5 < uVar6) {
                    iVar97 = iVar97 + uVar51 + (uint)*(byte *)(lStack_740 + lVar93);
                    iVar85 = iVar85 + (uint)*(ushort *)
                                             ((long)pplVar54 +
                                             lVar93 * 2 + (long)iVar23 * 2 + lVar33);
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_5c8 + lVar93) * 2;
                    uVar60 = uVar60 + 1;
                  }
                  if (uVar81 < uVar6) {
                    iVar97 = iVar97 + uVar51 + (uint)*(byte *)(lStack_5d0 + lVar93 + 2);
                    iVar85 = iVar85 + (uint)*(ushort *)
                                             ((long)pplVar54 +
                                             lVar93 * 2 + (long)iVar21 * 2 + lVar28);
                    iVar53 = iVar53 + (uint)*(byte *)(lStack_5c8 + lVar93) * 2;
                    uVar60 = uVar60 + 1;
                  }
                  uVar73 = uVar51 + (int)(long)(float)(int)(*(float *)(&UNK_10e030078 + uVar60 * 4)
                                                           * (float)(iVar85 - iVar97));
                  uVar51 = uVar51 + (int)(long)(float)(int)(*(float *)(&UNK_10e030078 + uVar60 * 4)
                                                           * (float)(iVar53 - iVar97));
                }
                uVar51 = uVar51 & ((int)uVar51 >> 0x1f ^ 0xffffffffU);
                if (0xfe < (int)uVar51) {
                  uVar51 = 0xff;
                }
                puVar68[uStack_780] = (char)uVar51;
                uVar73 = uVar73 & ((int)uVar73 >> 0x1f ^ 0xffffffffU);
                if (0xfe < (int)uVar73) {
                  uVar73 = 0xff;
                }
                uVar50 = uVar50 & ((int)uVar50 >> 0x1f ^ 0xffffffffU);
                if (0xfe < (int)uVar50) {
                  uVar50 = 0xff;
                }
                puVar68[1] = (char)uVar73;
                puVar68[uStack_780 ^ 2] = (char)uVar50;
                bVar95 = (bool)(bVar95 ^ 1);
                puVar68 = puVar68 + 3;
                lVar93 = lVar93 + 1;
                lVar61 = lVar61 + 2;
                lVar49 = lVar49 + 2;
                lVar77 = lVar77 + 2;
              } while (uVar87 - 4 != (int)lVar93);
              lVar61 = 0;
              lVar93 = lStack_790;
              lVar77 = lVar92;
              do {
                *(undefined1 *)((long)puVar63 + (lVar77 >> 0x20)) =
                     *(undefined1 *)((long)puVar63 + (lVar93 >> 0x20));
                puVar64[lVar61] = puVar45[lVar61];
                lVar61 = lVar61 + 1;
                lVar77 = lVar77 + -0x100000000;
                lVar93 = lVar93 + -0x100000000;
              } while (lVar61 != 6);
              bVar41 = (bool)(bVar41 ^ 1);
              uVar69 = uVar69 + 1;
              lVar47 = lVar47 + 1;
              uVar96 = (ulong)((int)uVar96 + 1);
              uVar90 = (ulong)((int)uVar90 + 1);
              uVar65 = uVar65 + 1;
              lStack_5d8 = lStack_5d8 + lVar58;
              lStack_690 = lStack_690 + lVar58;
              lStack_678 = lStack_678 + lVar58;
              lStack_748 = lStack_748 + lVar58;
              lStack_740 = lStack_740 + lVar58;
              lStack_5e0 = lStack_5e0 + lVar58;
              lStack_698 = lStack_698 + lVar58;
              lStack_680 = lStack_680 + lVar58;
              lStack_5d0 = lStack_5d0 + lVar58;
              lStack_6a0 = lStack_6a0 + lVar58;
              lStack_6a8 = lStack_6a8 + lVar58;
              lStack_5e8 = lStack_5e8 + lVar58;
              lStack_6b0 = lStack_6b0 + lVar58;
              lStack_6b8 = lStack_6b8 + lVar58;
              lStack_5c8 = lStack_5c8 + lVar58;
              lStack_688 = lStack_688 + lVar58;
              lStack_788 = lStack_788 + lVar58;
              puVar64 = puVar64 + lVar57;
              puVar45 = puVar45 + lVar57;
              lVar92 = lVar92 + (uVar62 << 0x20);
              lStack_790 = lStack_790 + (uVar62 << 0x20);
              uStack_780 = uStack_780 ^ 2;
            } while (uVar69 != uVar66 - 4);
            if (0 < (int)uVar27) {
              uVar62 = 0;
              lVar74 = (long)iVar70;
              do {
                uVar17 = *(undefined1 *)((long)puVar63 + uVar62 + (long)iVar70 * 2);
                *(undefined1 *)((long)puVar63 + uVar62 + lVar57) = uVar17;
                *(undefined1 *)((long)puVar63 + uVar62) = uVar17;
                uVar17 = *(undefined1 *)((long)puVar63 + uVar62 + (lVar75 + -5) * lVar74);
                *(undefined1 *)((long)puVar63 + uVar62 + (lVar75 + -1) * lVar74) = uVar17;
                *(undefined1 *)((long)puVar63 + uVar62 + (lVar75 + -2) * lVar74) = uVar17;
                *(undefined1 *)((long)puVar63 + uVar62 + (lVar75 + -3) * lVar74) = uVar17;
                *(undefined1 *)((long)puVar63 + uVar62 + (long)(int)(uVar66 - 4) * (long)iVar70) =
                     uVar17;
                uVar62 = uVar62 + 1;
              } while (uVar27 != uVar62);
            }
            uStack_4a0 = (undefined **)pplVar54;
            uStack_498 = uVar71;
            if (pplVar54 != &plStack_490) {
              __ZdaPv();
            }
          }
          if (uStack_588 != 0) {
            piVar94 = (int *)(uStack_588 + 0x14);
            do {
              iVar70 = *piVar94;
              cVar24 = '\x01';
              bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
              if (bVar41) {
                *piVar94 = iVar70 + -1;
                cVar24 = ExclusiveMonitorsStatus();
              }
            } while (cVar24 != '\0');
            if (iVar70 + -1 == 0) {
              func_0x000109a848d4(&uStack_5c0);
            }
          }
          uStack_588 = 0;
          uStack_5a8 = 0;
          puStack_5b0 = (undefined2 *)0x0;
          uStack_598 = 0;
          uStack_5a0 = 0;
          if (0 < (int)uStack_5c0._4_4_) {
            lVar74 = 0;
            do {
              piStack_580[lVar74] = 0;
              lVar74 = lVar74 + 1;
            } while (lVar74 < (int)uStack_5c0._4_4_);
          }
          if (puStack_578 != &uStack_570 && puStack_578 != (ulong *)0x0) {
            _free(puStack_578[-1]);
          }
          goto LAB_109ae8c14;
        }
        if ((1L << (uVar96 & 0x3f) & 0xf0000000000U) != 0) {
          if ((1 < (int)param_4) || (uVar87 != 0)) {
            puVar42 = (undefined4 *)0x1c;
            func_0x000107c2ae8c();
            *puVar42 = 1;
            uStack_4a0 = (undefined **)(puVar42 + 1);
            uStack_498 = 0x14;
            *(undefined1 *)(puVar42 + 6) = 0;
            puVar42[5] = 0x31203d3d;
            *(undefined8 *)(puVar42 + 3) = 0x206e636420262620;
            *(undefined8 *)(puVar42 + 1) = 0x31203d3d206e6373;
            FUN_109ac3188(0xffffff29,&uStack_4a0,&UNK_10f59c1a2,&UNK_10f59c1ae,0x65e);
            goto LAB_109ae9148;
          }
          uStack_4a0 = (undefined **)CONCAT44(uVar8,uVar66);
          FUN_109a8ee3c(param_2,&uStack_4a0,uVar65,0xffffffff,0,0);
          if ((*param_2 & 0x1f0000) == 0x10000) {
            puVar44 = *(undefined8 **)(param_2 + 2);
            piStack_460 = (int *)((ulong)&uStack_4a0 | 8);
            uStack_498 = puVar44[1];
            uStack_4a0 = (undefined **)*puVar44;
            uStack_488 = puVar44[3];
            plStack_490 = (long *)puVar44[2];
            uStack_478 = puVar44[5];
            uStack_480 = puVar44[4];
            uStack_468 = puVar44[7];
            uStack_470 = puVar44[6];
            pplStack_458 = &plStack_450;
            lStack_448 = 0;
            plStack_450 = (long *)0x0;
            if (puVar44[7] != 0) {
              piVar2 = (int *)(puVar44[7] + 0x14);
              do {
                cVar24 = '\x01';
                bVar41 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar41) {
                  *piVar2 = *piVar2 + 1;
                  cVar24 = ExclusiveMonitorsStatus();
                }
              } while (cVar24 != '\0');
            }
            if (*(int *)((long)puVar44 + 4) < 3) {
              plStack_450 = *(long **)puVar44[9];
              lStack_448 = ((long *)puVar44[9])[1];
            }
            else {
              uStack_4a0 = (undefined **)((ulong)uStack_4a0 & 0xffffffff);
              func_0x000109a84868(&uStack_4a0);
            }
          }
          else {
            FUN_109a8a180(&uStack_4a0,param_2,0xffffffff);
          }
          if (uStack_528 != 0) {
            piVar2 = (int *)(uStack_528 + 0x14);
            do {
              iVar70 = *piVar2;
              cVar24 = '\x01';
              bVar41 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar41) {
                *piVar2 = iVar70 + -1;
                cVar24 = ExclusiveMonitorsStatus();
              }
            } while (cVar24 != '\0');
            if (iVar70 + -1 == 0) {
              func_0x000109a848d4(&uStack_560);
            }
          }
          if (0 < (int)uStack_55c) {
            lVar74 = 0;
            do {
              piStack_520[lVar74] = 0;
              lVar74 = lVar74 + 1;
            } while (lVar74 < (int)uStack_55c);
          }
          iStack_558 = (int)uStack_498;
          iStack_554 = (int)(uStack_498 >> 0x20);
          uStack_560 = (uint)uStack_4a0;
          uStack_548 = (undefined4)uStack_488;
          uStack_544 = (undefined4)(uStack_488 >> 0x20);
          uStack_550 = SUB84(plStack_490,0);
          uStack_54c = (undefined4)((ulong)plStack_490 >> 0x20);
          uStack_538 = (undefined4)uStack_478;
          uStack_534 = (undefined4)(uStack_478 >> 0x20);
          uStack_540 = (undefined4)uStack_480;
          uStack_53c = (undefined4)(uStack_480 >> 0x20);
          uStack_528 = uStack_468;
          uStack_530 = (undefined4)uStack_470;
          uStack_52c = (undefined4)(uStack_470 >> 0x20);
          uStack_55c = uStack_4a0._4_4_;
          piVar2 = piStack_520;
          pplVar54 = pplStack_518;
          if ((pplStack_518 != &plStack_510) &&
             (piVar2 = piVar94, pplVar54 = &plStack_510, pplStack_518 != (long **)0x0)) {
            _free(pplStack_518[-1]);
          }
          pplStack_518 = pplVar54;
          piStack_520 = piVar2;
          pplVar54 = pplStack_458;
          pplVar39 = pplStack_458;
          piVar94 = piStack_460;
          uVar71 = uStack_500;
          if ((int)uStack_4a0._4_4_ < 3) {
            puVar44 = (undefined8 *)((ulong)&uStack_4a0 | 4);
            *pplStack_518 = *pplStack_458;
            pplStack_518[1] = pplVar54[1];
            uStack_4a0 = (undefined **)CONCAT44(uStack_4a0._4_4_,0x42ff0000);
            puVar44[1] = 0;
            *puVar44 = 0;
            puVar44[3] = 0;
            puVar44[2] = 0;
            puVar44[5] = 0;
            puVar44[4] = 0;
            *(undefined8 *)((long)puVar44 + 0x34) = 0;
            *(undefined8 *)((long)puVar44 + 0x2c) = 0;
            pplVar39 = pplStack_518;
            piVar94 = piStack_520;
            uVar71 = uStack_500;
            if (pplVar54 != &plStack_450) {
              _free(pplVar54[-1]);
              pplVar39 = pplStack_518;
              piVar94 = piStack_520;
              uVar71 = uStack_500;
            }
          }
          piStack_520 = piVar94;
          pplStack_518 = pplVar39;
          uStack_500._4_4_ = (uint)(uVar71 >> 0x20);
          uStack_500 = uVar71;
          if ((uVar62 & 7) == 0) {
            if (2 < (int)*puStack_4c0) {
              uVar65 = puStack_4c0[1];
              uVar8 = *puStack_4c0 - 2;
              param_3 = param_3 & 0xfffffffe;
              uStack_5c0 = (ulong)uVar8 << 0x20;
              pplStack_458 = &plStack_490;
              uStack_4a0 = &PTR_FUN_110b24698;
              plStack_450 = &lStack_448;
              lStack_440 = 0;
              lStack_448 = 0;
              if (piStack_4c8 != (int *)0x0) {
                piVar94 = piStack_4c8 + 5;
                do {
                  cVar24 = '\x01';
                  bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                  if (bVar41) {
                    *piVar94 = *piVar94 + 1;
                    cVar24 = ExclusiveMonitorsStatus();
                  }
                } while (cVar24 != '\0');
              }
              if ((int)uStack_500._4_4_ < 3) {
                lStack_448 = *plStack_4b8;
                lStack_440 = plStack_4b8[1];
                uStack_498 = uVar71;
                plStack_490 = uStack_4f8;
                uStack_488 = uStack_4f0;
                uStack_480 = uStack_4e8;
                uStack_478 = uStack_4e0;
                uStack_470 = uStack_4d8;
                uStack_468 = uStack_4d0;
                piStack_460 = piStack_4c8;
              }
              else {
                uStack_498 = uVar71 & 0xffffffff;
                plStack_490 = uStack_4f8;
                uStack_488 = uStack_4f0;
                uStack_480 = uStack_4e8;
                uStack_478 = uStack_4e0;
                uStack_470 = uStack_4d8;
                uStack_468 = uStack_4d0;
                piStack_460 = piStack_4c8;
                func_0x000109a84868(&uStack_498,&uStack_500);
              }
              uStack_430 = CONCAT44(iStack_554,iStack_558);
              uStack_438 = CONCAT44(uStack_55c,uStack_560);
              uStack_420 = CONCAT44(uStack_544,uStack_548);
              puStack_428 = (undefined2 *)CONCAT44(uStack_54c,uStack_550);
              uStack_410 = CONCAT44(uStack_534,uStack_538);
              uStack_418 = CONCAT44(uStack_53c,uStack_540);
              puStack_3f8 = &uStack_430;
              uStack_408 = CONCAT44(uStack_52c,uStack_530);
              uStack_400 = uStack_528;
              ppuStack_3f0 = &plStack_3e8;
              plStack_3e0 = (long *)0x0;
              plStack_3e8 = (long *)0x0;
              if (uStack_528 != 0) {
                piVar94 = (int *)(uStack_528 + 0x14);
                do {
                  cVar24 = '\x01';
                  bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                  if (bVar41) {
                    *piVar94 = *piVar94 + 1;
                    cVar24 = ExclusiveMonitorsStatus();
                  }
                } while (cVar24 != '\0');
              }
              if ((int)uStack_55c < 3) {
                plStack_3e8 = *pplStack_518;
                plStack_3e0 = pplStack_518[1];
              }
              else {
                uStack_438 = (ulong)uStack_560;
                func_0x000109a84868(&uStack_438,&uStack_560);
              }
              uStack_3d0 = uVar65 - 2;
              uStack_3c8 = CONCAT44(-(uint)((int)((uint)(param_3 == 0x56) << 0x1f) < 0),
                                    -(uint)((int)((uint)(param_3 == 0x56) << 0x1f) < 0)) &
                           0x146f0000146f ^ 0x74c00001323;
              uStack_3d8 = (uint)(uVar90 == 0x57 || uVar90 == 0x59);
              uStack_3d4 = CONCAT31(uStack_3d4._1_3_,param_3 == 0x56);
              if ((int)uStack_55c < 3) {
                uVar71 = (long)iStack_554 * (long)iStack_558;
              }
              else {
                uVar62 = (ulong)uStack_55c;
                uVar71 = 1;
                piVar94 = piStack_520;
                do {
                  uVar71 = uVar71 * (long)*piVar94;
                  uVar62 = uVar62 - 1;
                  piVar94 = piVar94 + 1;
                } while (uVar62 != 0);
              }
              uStack_3cc = uVar8;
              func_0x000109aa87cc((double)uVar71 / 65536.0,&uStack_5c0,&uStack_4a0);
              FUN_109aea160(&uStack_4a0);
              uVar71 = uStack_500;
            }
            uStack_500 = uVar71;
            puVar64 = (undefined1 *)CONCAT44(uStack_54c,uStack_550);
            iVar82 = *piStack_520;
            uVar65 = piStack_520[1];
            uVar62 = (ulong)uVar65;
            iVar70 = (int)plStack_510;
            if (iVar82 < 3) {
              if (0 < (int)uVar65) {
                iVar70 = (iVar82 + -1) * iVar70;
                puVar45 = puVar64;
                do {
                  puVar64[iVar70] = 0;
                  *puVar45 = 0;
                  iVar70 = iVar70 + 1;
                  uVar62 = uVar62 - 1;
                  puVar45 = puVar45 + 1;
                } while (uVar62 != 0);
              }
            }
            else if (0 < (int)uVar65) {
              do {
                *puVar64 = puVar64[iVar70];
                puVar64[((long)iVar82 + -1) * (long)iVar70] =
                     puVar64[((long)iVar82 + -2) * (long)iVar70];
                puVar64 = puVar64 + 1;
                uVar62 = uVar62 - 1;
              } while (uVar62 != 0);
            }
          }
          else {
            if (uVar65 != 2) {
              puVar42 = (undefined4 *)0x3c;
              func_0x000107c2ae8c();
              *puVar42 = 1;
              uStack_4a0 = (undefined **)(puVar42 + 1);
              uStack_498 = 0x36;
              *(undefined8 *)(puVar42 + 3) = 0x6f6d656420796172;
              *(undefined8 *)(puVar42 + 1) = 0x473e2d7265796142;
              *(undefined1 *)((long)puVar42 + 0x3a) = 0;
              *(undefined8 *)(puVar42 + 7) = 0x70757320796c6e6f;
              *(undefined8 *)(puVar42 + 5) = 0x20676e6963696173;
              *(undefined8 *)(puVar42 + 0xb) = 0x75363120646e6120;
              *(undefined8 *)(puVar42 + 9) = 0x7538207374726f70;
              *(undefined8 *)((long)puVar42 + 0x32) = 0x7365707974207536;
              FUN_109ac3188(0xffffff2e,&uStack_4a0,&UNK_10f59c1a2,&UNK_10f59c1ae,0x668);
              goto LAB_109ae9148;
            }
            if (2 < (int)*puStack_4c0) {
              uVar65 = puStack_4c0[1];
              uVar8 = *puStack_4c0 - 2;
              param_3 = param_3 & 0xfffffffe;
              uStack_5c0 = (ulong)uVar8 << 0x20;
              pplStack_458 = &plStack_490;
              uStack_4a0 = &PTR_FUN_110b246d8;
              plStack_450 = &lStack_448;
              lStack_440 = 0;
              lStack_448 = 0;
              if (piStack_4c8 != (int *)0x0) {
                piVar94 = piStack_4c8 + 5;
                do {
                  cVar24 = '\x01';
                  bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                  if (bVar41) {
                    *piVar94 = *piVar94 + 1;
                    cVar24 = ExclusiveMonitorsStatus();
                  }
                } while (cVar24 != '\0');
              }
              if ((int)uStack_500._4_4_ < 3) {
                lStack_448 = *plStack_4b8;
                lStack_440 = plStack_4b8[1];
                uStack_498 = uVar71;
                plStack_490 = uStack_4f8;
                uStack_488 = uStack_4f0;
                uStack_480 = uStack_4e8;
                uStack_478 = uStack_4e0;
                uStack_470 = uStack_4d8;
                uStack_468 = uStack_4d0;
                piStack_460 = piStack_4c8;
              }
              else {
                uStack_498 = uVar71 & 0xffffffff;
                plStack_490 = uStack_4f8;
                uStack_488 = uStack_4f0;
                uStack_480 = uStack_4e8;
                uStack_478 = uStack_4e0;
                uStack_470 = uStack_4d8;
                uStack_468 = uStack_4d0;
                piStack_460 = piStack_4c8;
                func_0x000109a84868(&uStack_498,&uStack_500);
              }
              uStack_430 = CONCAT44(iStack_554,iStack_558);
              uStack_438 = CONCAT44(uStack_55c,uStack_560);
              uStack_420 = CONCAT44(uStack_544,uStack_548);
              puStack_428 = (undefined2 *)CONCAT44(uStack_54c,uStack_550);
              uStack_410 = CONCAT44(uStack_534,uStack_538);
              uStack_418 = CONCAT44(uStack_53c,uStack_540);
              puStack_3f8 = &uStack_430;
              uStack_408 = CONCAT44(uStack_52c,uStack_530);
              uStack_400 = uStack_528;
              ppuStack_3f0 = &plStack_3e8;
              plStack_3e0 = (long *)0x0;
              plStack_3e8 = (long *)0x0;
              if (uStack_528 != 0) {
                piVar94 = (int *)(uStack_528 + 0x14);
                do {
                  cVar24 = '\x01';
                  bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                  if (bVar41) {
                    *piVar94 = *piVar94 + 1;
                    cVar24 = ExclusiveMonitorsStatus();
                  }
                } while (cVar24 != '\0');
              }
              if ((int)uStack_55c < 3) {
                plStack_3e8 = *pplStack_518;
                plStack_3e0 = pplStack_518[1];
              }
              else {
                uStack_438 = (ulong)uStack_560;
                func_0x000109a84868(&uStack_438,&uStack_560);
              }
              uStack_3d0 = uVar65 - 2;
              uStack_3c8 = CONCAT44(-(uint)((int)((uint)(param_3 == 0x56) << 0x1f) < 0),
                                    -(uint)((int)((uint)(param_3 == 0x56) << 0x1f) < 0)) &
                           0x146f0000146f ^ 0x74c00001323;
              uStack_3d8 = (uint)(uVar90 == 0x57 || uVar90 == 0x59);
              uStack_3d4 = CONCAT31(uStack_3d4._1_3_,param_3 == 0x56);
              if ((int)uStack_55c < 3) {
                uVar71 = (long)iStack_554 * (long)iStack_558;
              }
              else {
                uVar62 = (ulong)uStack_55c;
                uVar71 = 1;
                piVar94 = piStack_520;
                do {
                  uVar71 = uVar71 * (long)*piVar94;
                  uVar62 = uVar62 - 1;
                  piVar94 = piVar94 + 1;
                } while (uVar62 != 0);
              }
              uStack_3cc = uVar8;
              func_0x000109aa87cc((double)uVar71 / 65536.0,&uStack_5c0,&uStack_4a0);
              FUN_109aea5d4(&uStack_4a0);
              uVar71 = uStack_500;
            }
            uStack_500 = uVar71;
            puVar63 = (undefined2 *)CONCAT44(uStack_54c,uStack_550);
            iVar70 = *piStack_520;
            uVar65 = piStack_520[1];
            uVar62 = (ulong)uVar65;
            iVar82 = (int)((ulong)plStack_510 >> 1);
            if (iVar70 + -2 == 0 || iVar70 < 2) {
              if (0 < (int)uVar65) {
                do {
                  puVar63[(iVar70 + -1) * iVar82] = 0;
                  *puVar63 = 0;
                  uVar62 = uVar62 - 1;
                  puVar63 = puVar63 + 1;
                } while (uVar62 != 0);
              }
            }
            else if (0 < (int)uVar65) {
              do {
                *puVar63 = *(undefined2 *)
                            ((long)puVar63 +
                            (-((ulong)plStack_510 >> 0x20 & 1) & 0xfffffffe00000000 |
                            ((ulong)plStack_510 >> 1 & 0xffffffff) << 1));
                puVar63[(iVar70 + -1) * iVar82] = puVar63[(iVar70 + -2) * iVar82];
                puVar63 = puVar63 + 1;
                uVar62 = uVar62 - 1;
              } while (uVar62 != 0);
            }
          }
          goto LAB_109ae8c14;
        }
      }
      uVar90 = uVar90 - 0x87;
      if (uVar90 < 4) {
        if (((param_4 == 3 || param_4 == 0) || 0x7fffffff < param_4) && (uVar87 == 0)) {
          uStack_4a0 = (undefined **)CONCAT44(uVar8,uVar66);
          FUN_109a8ee3c(param_2,&uStack_4a0,uVar65 | 0x10,0xffffffff,0,0);
          if ((*param_2 & 0x1f0000) == 0x10000) {
            puVar43 = *(ulong **)(param_2 + 2);
            piStack_460 = (int *)((ulong)&uStack_4a0 | 8);
            uStack_498 = puVar43[1];
            uStack_4a0 = (undefined **)*puVar43;
            uStack_488 = puVar43[3];
            plStack_490 = (long *)puVar43[2];
            uStack_478 = puVar43[5];
            uStack_480 = puVar43[4];
            uStack_468 = puVar43[7];
            uStack_470 = puVar43[6];
            pplStack_458 = &plStack_450;
            lStack_448 = 0;
            plStack_450 = (long *)0x0;
            if (puVar43[7] != 0) {
              piVar2 = (int *)(puVar43[7] + 0x14);
              do {
                cVar24 = '\x01';
                bVar41 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar41) {
                  *piVar2 = *piVar2 + 1;
                  cVar24 = ExclusiveMonitorsStatus();
                }
              } while (cVar24 != '\0');
            }
            if (*(int *)((long)puVar43 + 4) < 3) {
              plStack_450 = *(long **)puVar43[9];
              lStack_448 = ((long *)puVar43[9])[1];
            }
            else {
              uStack_4a0 = (undefined **)((ulong)uStack_4a0 & 0xffffffff);
              func_0x000109a84868(&uStack_4a0);
            }
          }
          else {
            FUN_109a8a180(&uStack_4a0,param_2,0xffffffff);
          }
          if (uStack_528 != 0) {
            piVar2 = (int *)(uStack_528 + 0x14);
            do {
              iVar70 = *piVar2;
              cVar24 = '\x01';
              bVar41 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar41) {
                *piVar2 = iVar70 + -1;
                cVar24 = ExclusiveMonitorsStatus();
              }
            } while (cVar24 != '\0');
            if (iVar70 + -1 == 0) {
              func_0x000109a848d4(&uStack_560);
            }
          }
          if (0 < (int)uStack_55c) {
            lVar74 = 0;
            do {
              piStack_520[lVar74] = 0;
              lVar74 = lVar74 + 1;
            } while (lVar74 < (int)uStack_55c);
          }
          iStack_558 = (int)uStack_498;
          iStack_554 = (int)(uStack_498 >> 0x20);
          uStack_560 = (uint)uStack_4a0;
          uStack_548 = (undefined4)uStack_488;
          uStack_544 = (undefined4)(uStack_488 >> 0x20);
          uStack_550 = SUB84(plStack_490,0);
          uStack_54c = (undefined4)((ulong)plStack_490 >> 0x20);
          uStack_538 = (undefined4)uStack_478;
          uStack_534 = (undefined4)(uStack_478 >> 0x20);
          uStack_540 = (undefined4)uStack_480;
          uStack_53c = (undefined4)(uStack_480 >> 0x20);
          uStack_528 = uStack_468;
          uStack_530 = (undefined4)uStack_470;
          uStack_52c = (undefined4)(uStack_470 >> 0x20);
          uStack_55c = uStack_4a0._4_4_;
          piVar2 = piStack_520;
          pplVar54 = pplStack_518;
          if ((pplStack_518 != &plStack_510) &&
             (piVar2 = piVar94, pplVar54 = &plStack_510, pplStack_518 != (long **)0x0)) {
            _free(pplStack_518[-1]);
          }
          pplStack_518 = pplVar54;
          piStack_520 = piVar2;
          pplVar54 = pplStack_458;
          pplVar39 = pplStack_458;
          piVar94 = piStack_460;
          uVar71 = uStack_500;
          if ((int)uStack_4a0._4_4_ < 3) {
            puVar44 = (undefined8 *)((ulong)&uStack_4a0 | 4);
            *pplStack_518 = *pplStack_458;
            pplStack_518[1] = pplVar54[1];
            uStack_4a0 = (undefined **)CONCAT44(uStack_4a0._4_4_,0x42ff0000);
            puVar44[1] = 0;
            *puVar44 = 0;
            puVar44[3] = 0;
            puVar44[2] = 0;
            puVar44[5] = 0;
            puVar44[4] = 0;
            *(undefined8 *)((long)puVar44 + 0x34) = 0;
            *(undefined8 *)((long)puVar44 + 0x2c) = 0;
            pplVar39 = pplStack_518;
            piVar94 = piStack_520;
            uVar71 = uStack_500;
            if (pplVar54 != &plStack_450) {
              _free(pplVar54[-1]);
              pplVar39 = pplStack_518;
              piVar94 = piStack_520;
              uVar71 = uStack_500;
            }
          }
          piStack_520 = piVar94;
          pplStack_518 = pplVar39;
          uStack_500._4_4_ = (uint)(uVar71 >> 0x20);
          uStack_500 = uVar71;
          if ((uVar62 & 7) == 0) {
            uVar65 = puStack_4c0[1];
            if (((int)uVar65 < 3) || (uVar8 = *puStack_4c0 - 2, uVar8 == 0 || (int)*puStack_4c0 < 2)
               ) {
              uStack_488 = 0;
              plStack_490 = (long *)0x0;
              uStack_498 = 0;
              uStack_4a0 = (undefined **)0x0;
              FUN_109a48880(&uStack_560,&uStack_4a0);
            }
            else {
              pplStack_458 = &plStack_490;
              uStack_4a0 = &PTR_FUN_110b24758;
              plStack_450 = &lStack_448;
              lStack_440 = 0;
              lStack_448 = 0;
              if (piStack_4c8 != (int *)0x0) {
                piVar94 = piStack_4c8 + 5;
                do {
                  cVar24 = '\x01';
                  bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                  if (bVar41) {
                    *piVar94 = *piVar94 + 1;
                    cVar24 = ExclusiveMonitorsStatus();
                  }
                } while (cVar24 != '\0');
              }
              if ((int)uStack_500._4_4_ < 3) {
                lStack_448 = *plStack_4b8;
                lStack_440 = plStack_4b8[1];
                uStack_498 = uVar71;
                plStack_490 = uStack_4f8;
                uStack_488 = uStack_4f0;
                uStack_480 = uStack_4e8;
                uStack_478 = uStack_4e0;
                uStack_470 = uStack_4d8;
                uStack_468 = uStack_4d0;
                piStack_460 = piStack_4c8;
              }
              else {
                uStack_498 = uVar71 & 0xffffffff;
                plStack_490 = uStack_4f8;
                uStack_488 = uStack_4f0;
                uStack_480 = uStack_4e8;
                uStack_478 = uStack_4e0;
                uStack_470 = uStack_4d8;
                uStack_468 = uStack_4d0;
                piStack_460 = piStack_4c8;
                func_0x000109a84868(&uStack_498,&uStack_500);
              }
              uStack_430 = CONCAT44(iStack_554,iStack_558);
              uStack_438 = CONCAT44(uStack_55c,uStack_560);
              uStack_420 = CONCAT44(uStack_544,uStack_548);
              puStack_428 = (undefined2 *)CONCAT44(uStack_54c,uStack_550);
              uStack_410 = CONCAT44(uStack_534,uStack_538);
              uStack_418 = CONCAT44(uStack_53c,uStack_540);
              puStack_3f8 = &uStack_430;
              uStack_408 = CONCAT44(uStack_52c,uStack_530);
              uStack_400 = uStack_528;
              ppuStack_3f0 = &plStack_3e8;
              plStack_3e0 = (long *)0x0;
              plStack_3e8 = (long *)0x0;
              if (uStack_528 != 0) {
                piVar94 = (int *)(uStack_528 + 0x14);
                do {
                  cVar24 = '\x01';
                  bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                  if (bVar41) {
                    *piVar94 = *piVar94 + 1;
                    cVar24 = ExclusiveMonitorsStatus();
                  }
                } while (cVar24 != '\0');
              }
              if ((int)uStack_55c < 3) {
                plStack_3e8 = *pplStack_518;
                plStack_3e0 = pplStack_518[1];
              }
              else {
                uStack_438 = (ulong)uStack_560;
                func_0x000109a84868(&uStack_438,&uStack_560);
              }
              uStack_3d8 = uVar65 - 2;
              uStack_3d0 = (uint)(uVar90 < 2);
              uStack_3cc = (uint)((param_3 & 0xfffffffd) == 0x88);
              uStack_5c0 = (ulong)uVar8 << 0x20;
              if ((int)uStack_55c < 3) {
                uVar71 = (long)iStack_554 * (long)iStack_558;
              }
              else {
                uVar62 = (ulong)uStack_55c;
                uVar71 = 1;
                piVar94 = piStack_520;
                do {
                  uVar71 = uVar71 * (long)*piVar94;
                  uVar62 = uVar62 - 1;
                  piVar94 = piVar94 + 1;
                } while (uVar62 != 0);
              }
              uStack_3d4 = uVar8;
              func_0x000109aa87cc((double)uVar71 / 65536.0,&uStack_5c0,&uStack_4a0);
              FUN_109aeb280(&uStack_4a0);
              puVar64 = (undefined1 *)CONCAT44(uStack_54c,uStack_550);
              uVar65 = piStack_520[1] + piStack_520[1] * (uStack_560 >> 3 & 0x1ff);
              uVar8 = 0x88442211 >> (((ulong)uStack_560 & 7) << 2);
              uVar62 = 0;
              if ((uVar8 & 0xf) != 0) {
                uVar62 = (ulong)plStack_510 / ((ulong)uVar8 & 0xf);
              }
              lVar74 = uVar62 * ((long)*piStack_520 + -1);
              if (*piStack_520 < 3) {
                if (0 < (int)uVar65) {
                  lVar47 = 0;
                  lVar72 = -(ulong)uVar65;
                  puVar45 = puVar64;
                  do {
                    puVar64[lVar47 + lVar74] = 0;
                    *puVar45 = 0;
                    lVar47 = lVar47 + 1;
                    bVar41 = lVar72 != -1;
                    lVar72 = lVar72 + 1;
                    puVar45 = puVar45 + 1;
                  } while (bVar41);
                }
              }
              else if (0 < (int)uVar65) {
                lVar47 = 0;
                lVar72 = -(ulong)uVar65;
                puVar45 = puVar64;
                do {
                  *puVar45 = puVar64[lVar47 + uVar62];
                  puVar64[lVar47 + lVar74] = puVar64[lVar47 + (lVar74 - uVar62)];
                  lVar47 = lVar47 + 1;
                  bVar41 = lVar72 != -1;
                  lVar72 = lVar72 + 1;
                  puVar45 = puVar45 + 1;
                } while (bVar41);
              }
            }
          }
          else {
            if (uVar65 != 2) {
              puVar42 = (undefined4 *)0x50;
              func_0x000107c2ae8c();
              *puVar42 = 1;
              uStack_4a0 = (undefined **)(puVar42 + 1);
              uStack_498 = 0x4a;
              *(undefined8 *)(puVar42 + 7) = 0x6e69636961736f6d;
              *(undefined8 *)(puVar42 + 5) = 0x6564206572617741;
              *(undefined8 *)(puVar42 + 0xb) = 0x796c746e65727275;
              *(undefined8 *)(puVar42 + 9) = 0x6320796c6e6f2067;
              *(undefined8 *)(puVar42 + 0xf) = 0x646e612075382073;
              *(undefined8 *)(puVar42 + 0xd) = 0x74726f7070757320;
              *(undefined8 *)((long)puVar42 + 0x46) = 0x7365707974207536;
              *(undefined8 *)((long)puVar42 + 0x3e) = 0x3120646e61207538;
              *(undefined1 *)((long)puVar42 + 0x4e) = 0;
              *(undefined8 *)(puVar42 + 3) = 0x2d65676445204247;
              *(undefined8 *)(puVar42 + 1) = 0x523e2d7265796142;
              FUN_109ac3188(0xffffff2e,&uStack_4a0,&UNK_10f59c1a2,&UNK_10f59c1ae,0x694);
              goto LAB_109ae9148;
            }
            uVar65 = puStack_4c0[1];
            if (((int)uVar65 < 3) || (uVar8 = *puStack_4c0 - 2, uVar8 == 0 || (int)*puStack_4c0 < 2)
               ) {
              uStack_488 = 0;
              plStack_490 = (long *)0x0;
              uStack_498 = 0;
              uStack_4a0 = (undefined **)0x0;
              FUN_109a48880(&uStack_560,&uStack_4a0);
            }
            else {
              pplStack_458 = &plStack_490;
              uStack_4a0 = &PTR_FUN_110b24798;
              plStack_450 = &lStack_448;
              lStack_440 = 0;
              lStack_448 = 0;
              if (piStack_4c8 != (int *)0x0) {
                piVar94 = piStack_4c8 + 5;
                do {
                  cVar24 = '\x01';
                  bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                  if (bVar41) {
                    *piVar94 = *piVar94 + 1;
                    cVar24 = ExclusiveMonitorsStatus();
                  }
                } while (cVar24 != '\0');
              }
              if ((int)uStack_500._4_4_ < 3) {
                lStack_448 = *plStack_4b8;
                lStack_440 = plStack_4b8[1];
                uStack_498 = uVar71;
                plStack_490 = uStack_4f8;
                uStack_488 = uStack_4f0;
                uStack_480 = uStack_4e8;
                uStack_478 = uStack_4e0;
                uStack_470 = uStack_4d8;
                uStack_468 = uStack_4d0;
                piStack_460 = piStack_4c8;
              }
              else {
                uStack_498 = uVar71 & 0xffffffff;
                plStack_490 = uStack_4f8;
                uStack_488 = uStack_4f0;
                uStack_480 = uStack_4e8;
                uStack_478 = uStack_4e0;
                uStack_470 = uStack_4d8;
                uStack_468 = uStack_4d0;
                piStack_460 = piStack_4c8;
                func_0x000109a84868(&uStack_498,&uStack_500);
              }
              uStack_430 = CONCAT44(iStack_554,iStack_558);
              uStack_438 = CONCAT44(uStack_55c,uStack_560);
              uStack_420 = CONCAT44(uStack_544,uStack_548);
              puStack_428 = (undefined2 *)CONCAT44(uStack_54c,uStack_550);
              uStack_410 = CONCAT44(uStack_534,uStack_538);
              uStack_418 = CONCAT44(uStack_53c,uStack_540);
              puStack_3f8 = &uStack_430;
              uStack_408 = CONCAT44(uStack_52c,uStack_530);
              uStack_400 = uStack_528;
              ppuStack_3f0 = &plStack_3e8;
              plStack_3e0 = (long *)0x0;
              plStack_3e8 = (long *)0x0;
              if (uStack_528 != 0) {
                piVar94 = (int *)(uStack_528 + 0x14);
                do {
                  cVar24 = '\x01';
                  bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
                  if (bVar41) {
                    *piVar94 = *piVar94 + 1;
                    cVar24 = ExclusiveMonitorsStatus();
                  }
                } while (cVar24 != '\0');
              }
              if ((int)uStack_55c < 3) {
                plStack_3e8 = *pplStack_518;
                plStack_3e0 = pplStack_518[1];
              }
              else {
                uStack_438 = (ulong)uStack_560;
                func_0x000109a84868(&uStack_438,&uStack_560);
              }
              uStack_3d8 = uVar65 - 2;
              uStack_3d0 = (uint)(uVar90 < 2);
              uStack_3cc = (uint)((param_3 & 0xfffffffd) == 0x88);
              uStack_5c0 = (ulong)uVar8 << 0x20;
              if ((int)uStack_55c < 3) {
                uVar71 = (long)iStack_554 * (long)iStack_558;
              }
              else {
                uVar62 = (ulong)uStack_55c;
                uVar71 = 1;
                piVar94 = piStack_520;
                do {
                  uVar71 = uVar71 * (long)*piVar94;
                  uVar62 = uVar62 - 1;
                  piVar94 = piVar94 + 1;
                } while (uVar62 != 0);
              }
              uStack_3d4 = uVar8;
              func_0x000109aa87cc((double)uVar71 / 65536.0,&uStack_5c0,&uStack_4a0);
              FUN_109aeb760(&uStack_4a0);
              puVar63 = (undefined2 *)CONCAT44(uStack_54c,uStack_550);
              uVar65 = piStack_520[1] + piStack_520[1] * (uStack_560 >> 3 & 0x1ff);
              uVar8 = 0x88442211 >> (((ulong)uStack_560 & 7) << 2);
              uVar62 = 0;
              if ((uVar8 & 0xf) != 0) {
                uVar62 = (ulong)plStack_510 / ((ulong)uVar8 & 0xf);
              }
              lVar74 = uVar62 * ((long)*piStack_520 + -1);
              if (*piStack_520 < 3) {
                if (0 < (int)uVar65) {
                  lVar47 = 0;
                  lVar72 = (ulong)uVar65 << 1;
                  puVar89 = puVar63;
                  do {
                    puVar63[lVar74 + lVar47] = 0;
                    *puVar89 = 0;
                    lVar47 = lVar47 + 1;
                    lVar72 = lVar72 + -2;
                    puVar89 = puVar89 + 1;
                  } while (lVar72 != 0);
                }
              }
              else if (0 < (int)uVar65) {
                lVar47 = 0;
                lVar72 = (ulong)uVar65 << 1;
                puVar89 = puVar63;
                do {
                  *puVar89 = puVar63[uVar62 + lVar47];
                  puVar63[lVar74 + lVar47] = puVar63[lVar74 + (lVar47 - uVar62)];
                  lVar47 = lVar47 + 1;
                  lVar72 = lVar72 + -2;
                  puVar89 = puVar89 + 1;
                } while (lVar72 != 0);
              }
            }
          }
LAB_109ae8c14:
          if (uStack_528 != 0) {
            piVar94 = (int *)(uStack_528 + 0x14);
            do {
              iVar70 = *piVar94;
              cVar24 = '\x01';
              bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
              if (bVar41) {
                *piVar94 = iVar70 + -1;
                cVar24 = ExclusiveMonitorsStatus();
              }
            } while (cVar24 != '\0');
            if (iVar70 + -1 == 0) {
              func_0x000109a848d4(&uStack_560);
            }
          }
          uStack_528 = 0;
          uStack_548 = 0;
          uStack_544 = 0;
          uStack_550 = 0;
          uStack_54c = 0;
          uStack_538 = 0;
          uStack_534 = 0;
          uStack_540 = 0;
          uStack_53c = 0;
          if (0 < (int)uStack_55c) {
            lVar74 = 0;
            do {
              piStack_520[lVar74] = 0;
              lVar74 = lVar74 + 1;
            } while (lVar74 < (int)uStack_55c);
          }
          if (pplStack_518 != &plStack_510 && pplStack_518 != (long **)0x0) {
            _free(pplStack_518[-1]);
          }
          if (piStack_4c8 != (int *)0x0) {
            piVar94 = piStack_4c8 + 5;
            do {
              iVar70 = *piVar94;
              cVar24 = '\x01';
              bVar41 = (bool)ExclusiveMonitorPass(piVar94,0x10);
              if (bVar41) {
                *piVar94 = iVar70 + -1;
                cVar24 = ExclusiveMonitorsStatus();
              }
            } while (cVar24 != '\0');
            if (iVar70 + -1 == 0) {
              func_0x000109a848d4(&uStack_500);
            }
          }
          piStack_4c8 = (int *)0x0;
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          if (0 < (int)uStack_500._4_4_) {
            lVar74 = 0;
            do {
              puStack_4c0[lVar74] = 0;
              lVar74 = lVar74 + 1;
            } while (lVar74 < (int)uStack_500._4_4_);
          }
          if (plStack_4b8 != &lStack_4b0 && plStack_4b8 != (long *)0x0) {
            _free(plStack_4b8[-1]);
          }
          return;
        }
        puVar42 = (undefined4 *)0x1c;
        func_0x000107c2ae8c();
        *puVar42 = 1;
        uStack_4a0 = (undefined **)(puVar42 + 1);
        uStack_498 = 0x14;
        *(undefined1 *)(puVar42 + 6) = 0;
        puVar42[5] = 0x33203d3d;
        *(undefined8 *)(puVar42 + 3) = 0x206e636420262620;
        *(undefined8 *)(puVar42 + 1) = 0x31203d3d206e6373;
        FUN_109ac3188(0xffffff29,&uStack_4a0,&UNK_10f59c1a2,&UNK_10f59c1ae,0x68b);
      }
      else {
        puVar42 = (undefined4 *)0x30;
        func_0x000107c2ae8c();
        *puVar42 = 1;
        uStack_4a0 = (undefined **)(puVar42 + 1);
        uStack_498 = 0x2b;
        *(undefined1 *)((long)puVar42 + 0x2f) = 0;
        *(undefined8 *)(puVar42 + 3) = 0x707075736e75202f;
        *(undefined8 *)(puVar42 + 1) = 0x206e776f6e6b6e55;
        *(undefined8 *)(puVar42 + 7) = 0x766e6f6320726f6c;
        *(undefined8 *)(puVar42 + 5) = 0x6f6320646574726f;
        *(undefined8 *)((long)puVar42 + 0x27) = 0x65646f63206e6f69;
        *(undefined8 *)((long)puVar42 + 0x1f) = 0x737265766e6f6320;
        FUN_109ac3188(0xffffff32,&uStack_4a0,&UNK_10f59c1a2,&UNK_10f59c1ae,0x699);
      }
      goto LAB_109ae9148;
    }
  }
  puVar42 = (undefined4 *)0x14;
  func_0x000107c2ae8c();
  *puVar42 = 1;
  uStack_4a0 = (undefined **)(puVar42 + 1);
  *uStack_4a0 = (undefined *)0x706d652e63727321;
  uStack_498 = 0xc;
  *(undefined1 *)(puVar42 + 4) = 0;
  puVar42[3] = 0x29287974;
  FUN_109ac3188(0xffffff29,&uStack_4a0,&UNK_10f59c1a2,&UNK_10f59c1ae,0x657);
LAB_109ae9148:
                    /* WARNING: Does not return */
  pcVar40 = (code *)SoftwareBreakpoint(1,0x109ae914c);
  (*pcVar40)();
}



/* Entry: 109ae93c4; end: 109ae93c7;  */

undefined8 * FUN_109ae93c4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24658;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109ae93c8; end: 109ae93db;  */

void FUN_109ae93c8(void)

{
  FUN_109ae9c28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ae93dc; end: 109ae9c27;  */

void FUN_109ae93dc(long param_1,uint *param_2)

{
  byte *pbVar1;
  long lVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  short sVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined8 uVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  bool bVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  long lVar39;
  int iVar40;
  uint uVar41;
  byte *pbVar42;
  int iVar43;
  uint uVar44;
  ulong uVar45;
  int iVar46;
  byte *pbVar47;
  long lVar48;
  int iVar49;
  byte *pbVar50;
  byte *pbVar51;
  int iVar52;
  byte *pbVar53;
  long lVar54;
  int iVar55;
  byte *pbVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  undefined1 uVar71;
  undefined8 uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 auStack_a0 [4];
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  byte bStack_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar41 = *param_2;
  if ((int)uVar41 < (int)param_2[1]) {
    iVar40 = (int)*(undefined8 *)(param_1 + 0xb8);
    lVar39 = *(long *)(param_1 + 0x58);
    iVar38 = (int)lVar39;
    pbVar42 = (byte *)(*(long *)(param_1 + 0x18) + (long)(int)(uVar41 * iVar38));
    lVar2 = ((ulong)(*(uint *)(param_1 + 0x68) >> 3) & 0x1ff) + 1;
    iVar43 = (int)lVar2;
    uVar44 = *(uint *)(param_1 + 200);
    bVar35 = (uVar41 & 1) != 0;
    if (bVar35) {
      uVar44 = (uint)(uVar44 == 0);
    }
    uVar45 = (ulong)(iVar38 * 2);
    iVar46 = -*(int *)(param_1 + 0xcc);
    if (!bVar35) {
      iVar46 = *(int *)(param_1 + 0xcc);
    }
    pbVar47 = (byte *)(*(long *)(param_1 + 0x78) + (long)(int)(iVar40 + iVar40 * uVar41) + lVar2 + 1
                      );
    lVar48 = (lVar39 << 0x20) + 0x200000000 >> 0x20;
    lVar36 = (lVar39 << 0x20) + 0x100000000 >> 0x20;
    lVar37 = (long)(iVar38 * 2 + 2);
    lVar39 = (lVar39 << 0x20) + 0x300000000 >> 0x20;
    do {
      iVar55 = *(int *)(param_1 + 0xd0);
      if (iVar55 < 1) {
        if (iVar43 == 3) {
          pbVar47[(long)iVar55 * 3 + 1] = 0;
          pbVar47[(long)*(int *)(param_1 + 0xd0) * 3] = 0;
          pbVar47[(long)*(int *)(param_1 + 0xd0) * 3 + -1] = 0;
          pbVar47[-3] = 0;
          pbVar47[-2] = 0;
          pbVar47[-4] = 0;
        }
        else {
          pbVar47[(long)iVar55 * (long)iVar43 + 1] = 0;
          pbVar47[(long)*(int *)(param_1 + 0xd0) * (long)iVar43] = 0;
          pbVar47[(long)*(int *)(param_1 + 0xd0) * (long)iVar43 + -1] = 0;
          pbVar47[-3] = 0;
          pbVar47[-5] = 0;
          pbVar47[-4] = 0;
          pbVar47[(long)*(int *)(param_1 + 0xd0) * (long)iVar43 + 2] = 0xff;
          pbVar47[-2] = 0xff;
        }
      }
      else {
        pbVar50 = pbVar47;
        pbVar51 = pbVar42;
        iVar52 = iVar55;
        if (uVar44 != 0) {
          bVar57 = pbVar42[iVar38];
          bVar59 = pbVar42[lVar48];
          pbVar47[-(long)iVar46] = (byte)((uint)pbVar42[1] + (uint)pbVar42[uVar45 | 1] + 1 >> 1);
          *pbVar47 = pbVar42[lVar36];
          pbVar47[iVar46] = (byte)((uint)bVar57 + (uint)bVar59 + 1 >> 1);
          if (iVar43 == 4) {
            pbVar47[2] = 0xff;
          }
          pbVar50 = pbVar47 + lVar2;
          pbVar51 = pbVar42 + 1;
          iVar52 = *(int *)(param_1 + 0xd0);
        }
        pbVar1 = pbVar42 + iVar55;
        if (iVar43 == 4) {
          uStack_68 = 0xffffffffffffffff;
          uStack_70 = 0xffffffffffffffff;
          pbVar53 = pbVar51;
          if (0x11 < iVar52) {
            pbVar56 = pbVar50 + -1;
            do {
              uVar18 = *(undefined8 *)(pbVar53 + iVar38 + 8);
              bVar67 = (byte)((ulong)uVar18 >> 8);
              bVar68 = (byte)((ulong)uVar18 >> 0x18);
              bVar69 = (byte)((ulong)uVar18 >> 0x28);
              bVar70 = (byte)((ulong)uVar18 >> 0x38);
              uVar8 = *(undefined8 *)(pbVar53 + iVar38);
              bVar57 = (byte)((ulong)uVar8 >> 8);
              bVar59 = (byte)((ulong)uVar8 >> 0x18);
              bVar62 = (byte)((ulong)uVar8 >> 0x28);
              bVar65 = (byte)((ulong)uVar8 >> 0x38);
              uVar23 = *(undefined8 *)(pbVar53 + 8);
              uVar16 = *(undefined8 *)pbVar53;
              puVar3 = (ushort *)(pbVar53 + uVar45);
              auVar73[1] = 0;
              auVar73[0] = bVar57;
              auVar73[2] = bVar59;
              auVar73[3] = 0;
              auVar73[4] = bVar62;
              auVar73[5] = 0;
              auVar73[6] = bVar65;
              auVar73[7] = 0;
              auVar73[8] = bVar67;
              auVar73[9] = 0;
              auVar73[10] = bVar68;
              auVar73[0xb] = 0;
              auVar73[0xc] = bVar69;
              auVar73[0xd] = 0;
              auVar73[0xe] = bVar70;
              auVar73[0xf] = 0;
              auVar74 = NEON_ext(auVar73,auVar73,2,1);
              auVar75._0_2_ = auVar74._0_2_ + (ushort)bVar57;
              auVar75._2_2_ = auVar74._2_2_ + (ushort)bVar59;
              auVar75._4_2_ = auVar74._4_2_ + (ushort)bVar62;
              auVar75._6_2_ = auVar74._6_2_ + (ushort)bVar65;
              auVar75._8_2_ = auVar74._8_2_ + (ushort)bVar67;
              auVar75._10_2_ = auVar74._10_2_ + (ushort)bVar68;
              auVar75._12_2_ = auVar74._12_2_ + (ushort)bVar69;
              auVar75._14_2_ = auVar74._14_2_ + (ushort)bVar70;
              uVar58 = (undefined1)((ulong)uVar8 >> 0x20);
              uVar60 = (undefined1)((ulong)uVar8 >> 0x30);
              uVar61 = (undefined1)((ulong)uVar18 >> 0x10);
              uVar63 = (undefined1)((ulong)uVar18 >> 0x20);
              uVar64 = (undefined1)((ulong)uVar18 >> 0x30);
              auVar4[3] = 0;
              auVar4._0_3_ = (uint3)uVar8 & 0xff00ff;
              auVar4[4] = uVar58;
              auVar4[5] = 0;
              auVar4[6] = uVar60;
              auVar4[7] = 0;
              auVar4[8] = (char)uVar18;
              auVar4[9] = 0;
              auVar4[10] = uVar61;
              auVar4[0xb] = 0;
              auVar4[0xc] = uVar63;
              auVar4[0xd] = 0;
              auVar4[0xe] = uVar64;
              auVar4[0xf] = 0;
              auVar5[3] = 0;
              auVar5._0_3_ = (uint3)uVar8 & 0xff00ff;
              auVar5[4] = uVar58;
              auVar5[5] = 0;
              auVar5[6] = uVar60;
              auVar5[7] = 0;
              auVar5[8] = (char)uVar18;
              auVar5[9] = 0;
              auVar5[10] = uVar61;
              auVar5[0xb] = 0;
              auVar5[0xc] = uVar63;
              auVar5[0xd] = 0;
              auVar5[0xe] = uVar64;
              auVar5[0xf] = 0;
              auVar78 = NEON_ext(auVar4,auVar5,2,1);
              sVar15 = (*puVar3 & 0xff) + ((ushort)uVar16 & 0xff);
              sVar19 = (puVar3[1] & 0xff) + ((ushort)((ulong)uVar16 >> 0x10) & 0xff);
              uVar58 = (undefined1)((ushort)sVar19 >> 8);
              sVar20 = (puVar3[2] & 0xff) + ((ushort)((ulong)uVar16 >> 0x20) & 0xff);
              uVar60 = (undefined1)((ushort)sVar20 >> 8);
              sVar21 = (puVar3[3] & 0xff) + ((ushort)((ulong)uVar16 >> 0x30) & 0xff);
              uVar61 = (undefined1)((ushort)sVar21 >> 8);
              sVar22 = (puVar3[4] & 0xff) + ((ushort)uVar23 & 0xff);
              uVar63 = (undefined1)((ushort)sVar22 >> 8);
              sVar24 = (puVar3[5] & 0xff) + ((ushort)((ulong)uVar23 >> 0x10) & 0xff);
              uVar64 = (undefined1)((ushort)sVar24 >> 8);
              sVar25 = (puVar3[6] & 0xff) + ((ushort)((ulong)uVar23 >> 0x20) & 0xff);
              uVar66 = (undefined1)((ushort)sVar25 >> 8);
              sVar26 = (puVar3[7] & 0xff) + ((ushort)((ulong)uVar23 >> 0x30) & 0xff);
              uVar71 = (undefined1)((ushort)sVar26 >> 8);
              auVar9[2] = (char)sVar19;
              auVar9._0_2_ = sVar15;
              auVar9[3] = uVar58;
              auVar9[4] = (char)sVar20;
              auVar9[5] = uVar60;
              auVar9[6] = (char)sVar21;
              auVar9[7] = uVar61;
              auVar9[8] = (char)sVar22;
              auVar9[9] = uVar63;
              auVar9[10] = (char)sVar24;
              auVar9[0xb] = uVar64;
              auVar9[0xc] = (char)sVar25;
              auVar9[0xd] = uVar66;
              auVar9[0xe] = (char)sVar26;
              auVar9[0xf] = uVar71;
              auVar10[2] = (char)sVar19;
              auVar10._0_2_ = sVar15;
              auVar10[3] = uVar58;
              auVar10[4] = (char)sVar20;
              auVar10[5] = uVar60;
              auVar10[6] = (char)sVar21;
              auVar10[7] = uVar61;
              auVar10[8] = (char)sVar22;
              auVar10[9] = uVar63;
              auVar10[10] = (char)sVar24;
              auVar10[0xb] = uVar64;
              auVar10[0xc] = (char)sVar25;
              auVar10[0xd] = uVar66;
              auVar10[0xe] = (char)sVar26;
              auVar10[0xf] = uVar71;
              auVar74 = NEON_ext(auVar9,auVar10,2,1);
              sVar15 = auVar74._0_2_ + sVar15;
              sVar19 = auVar74._2_2_ + sVar19;
              uVar58 = (undefined1)sVar19;
              uVar60 = (undefined1)((ushort)sVar19 >> 8);
              sVar20 = auVar74._4_2_ + sVar20;
              uVar61 = (undefined1)sVar20;
              uVar63 = (undefined1)((ushort)sVar20 >> 8);
              sVar21 = auVar74._6_2_ + sVar21;
              uVar64 = (undefined1)sVar21;
              uVar66 = (undefined1)((ushort)sVar21 >> 8);
              sVar22 = auVar74._8_2_ + sVar22;
              sVar24 = auVar74._10_2_ + sVar24;
              sVar25 = auVar74._12_2_ + sVar25;
              sVar26 = auVar74._14_2_ + sVar26;
              auVar11[2] = uVar58;
              auVar11._0_2_ = sVar15;
              auVar11[3] = uVar60;
              auVar11[4] = uVar61;
              auVar11[5] = uVar63;
              auVar11[6] = uVar64;
              auVar11[7] = uVar66;
              auVar11[8] = (char)sVar22;
              auVar11[9] = (char)((ushort)sVar22 >> 8);
              auVar11[10] = (char)sVar24;
              auVar11[0xb] = (char)((ushort)sVar24 >> 8);
              auVar11[0xc] = (char)sVar25;
              auVar11[0xd] = (char)((ushort)sVar25 >> 8);
              auVar11[0xe] = (char)sVar26;
              auVar11[0xf] = (char)((ushort)sVar26 >> 8);
              uVar17 = NEON_rshrn(CONCAT17(uVar66,CONCAT16(uVar64,CONCAT15(uVar63,CONCAT14(uVar61,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,sVar15)))))),
                                  auVar11,2,2);
              uVar72 = NEON_rshrn(auVar74._0_8_,auVar74,1,2);
              sVar15 = ((ushort)uVar8 & 0xff) + (ushort)(byte)((ulong)uVar16 >> 8) + (*puVar3 >> 8)
                       + auVar78._0_2_;
              sVar19 = ((ushort)((ulong)uVar8 >> 0x10) & 0xff) +
                       (ushort)(byte)((ulong)uVar16 >> 0x18) + (puVar3[1] >> 8) + auVar78._2_2_;
              uVar58 = (undefined1)sVar19;
              uVar60 = (undefined1)((ushort)sVar19 >> 8);
              sVar19 = ((ushort)((ulong)uVar8 >> 0x20) & 0xff) +
                       (ushort)(byte)((ulong)uVar16 >> 0x28) + (puVar3[2] >> 8) + auVar78._4_2_;
              uVar61 = (undefined1)sVar19;
              uVar63 = (undefined1)((ushort)sVar19 >> 8);
              sVar19 = ((ushort)((ulong)uVar8 >> 0x30) & 0xff) +
                       (ushort)(byte)((ulong)uVar16 >> 0x38) + (puVar3[3] >> 8) + auVar78._6_2_;
              uVar64 = (undefined1)sVar19;
              uVar66 = (undefined1)((ushort)sVar19 >> 8);
              sVar19 = ((ushort)uVar18 & 0xff) + (ushort)(byte)((ulong)uVar23 >> 8) +
                       (puVar3[4] >> 8) + auVar78._8_2_;
              sVar20 = ((ushort)((ulong)uVar18 >> 0x10) & 0xff) +
                       (ushort)(byte)((ulong)uVar23 >> 0x18) + (puVar3[5] >> 8) + auVar78._10_2_;
              sVar21 = ((ushort)((ulong)uVar18 >> 0x20) & 0xff) +
                       (ushort)(byte)((ulong)uVar23 >> 0x28) + (puVar3[6] >> 8) + auVar78._12_2_;
              sVar22 = ((ushort)((ulong)uVar18 >> 0x30) & 0xff) +
                       (ushort)(byte)((ulong)uVar23 >> 0x38) + (puVar3[7] >> 8) + auVar78._14_2_;
              auStack_a0[(1 - (long)iVar46) * 2 + 1] =
                   CONCAT17((char)((ulong)uVar72 >> 0x38),
                            CONCAT16((char)((ulong)uVar17 >> 0x38),
                                     CONCAT15((char)((ulong)uVar72 >> 0x30),
                                              CONCAT14((char)((ulong)uVar17 >> 0x30),
                                                       CONCAT13((char)((ulong)uVar72 >> 0x28),
                                                                CONCAT12((char)((ulong)uVar17 >>
                                                                               0x28),
                                                                         CONCAT11((char)((ulong)
                                                  uVar72 >> 0x20),(char)((ulong)uVar17 >> 0x20))))))
                                    ));
              auStack_a0[(1 - (long)iVar46) * 2] =
                   CONCAT17((char)((ulong)uVar72 >> 0x18),
                            CONCAT16((char)((ulong)uVar17 >> 0x18),
                                     CONCAT15((char)((ulong)uVar72 >> 0x10),
                                              CONCAT14((char)((ulong)uVar17 >> 0x10),
                                                       CONCAT13((char)((ulong)uVar72 >> 8),
                                                                CONCAT12((char)((ulong)uVar17 >> 8),
                                                                         CONCAT11((char)uVar72,
                                                                                  (char)uVar17))))))
                           );
              auVar6[2] = uVar58;
              auVar6._0_2_ = sVar15;
              auVar6[3] = uVar60;
              auVar6[4] = uVar61;
              auVar6[5] = uVar63;
              auVar6[6] = uVar64;
              auVar6[7] = uVar66;
              auVar6[8] = (char)sVar19;
              auVar6[9] = (char)((ushort)sVar19 >> 8);
              auVar6[10] = (char)sVar20;
              auVar6[0xb] = (char)((ushort)sVar20 >> 8);
              auVar6[0xc] = (char)sVar21;
              auVar6[0xd] = (char)((ushort)sVar21 >> 8);
              auVar6[0xe] = (char)sVar22;
              auVar6[0xf] = (char)((ushort)sVar22 >> 8);
              uVar8 = NEON_rshrn(CONCAT17(uVar66,CONCAT16(uVar64,CONCAT15(uVar63,CONCAT14(uVar61,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,sVar15)))))),
                                 auVar6,2,2);
              uVar18 = NEON_rshrn(CONCAT17(auVar78[0xe],
                                           CONCAT16(auVar78[0xc],
                                                    CONCAT15(auVar78[10],
                                                             CONCAT14(auVar78[8],
                                                                      CONCAT13(auVar78[6],
                                                                               CONCAT12(auVar78[4],
                                                                                        CONCAT11(
                                                  auVar78[2],auVar78[0]))))))),auVar75,1,2);
              auStack_a0[3] =
                   CONCAT17(auVar78[0xe],
                            CONCAT16((char)((ulong)uVar8 >> 0x38),
                                     CONCAT15(auVar78[0xc],
                                              CONCAT14((char)((ulong)uVar8 >> 0x30),
                                                       CONCAT13(auVar78[10],
                                                                CONCAT12((char)((ulong)uVar8 >> 0x28
                                                                               ),CONCAT11(auVar78[8]
                                                                                          ,(char)((
                                                  ulong)uVar8 >> 0x20))))))));
              auStack_a0[2] =
                   CONCAT17(auVar78[6],
                            CONCAT16((char)((ulong)uVar8 >> 0x18),
                                     CONCAT15(auVar78[4],
                                              CONCAT14((char)((ulong)uVar8 >> 0x10),
                                                       CONCAT13(auVar78[2],
                                                                CONCAT12((char)((ulong)uVar8 >> 8),
                                                                         CONCAT11(auVar78[0],
                                                                                  (char)uVar8)))))))
              ;
              auStack_a0[((long)iVar46 + 1) * 2 + 1] =
                   CONCAT17((char)((ulong)uVar18 >> 0x38),
                            CONCAT16(bVar70,CONCAT15((char)((ulong)uVar18 >> 0x30),
                                                     CONCAT14(bVar69,CONCAT13((char)((ulong)uVar18
                                                                                    >> 0x28),
                                                                              CONCAT12(bVar68,
                                                  CONCAT11((char)((ulong)uVar18 >> 0x20),bVar67)))))
                                    ));
              auStack_a0[((long)iVar46 + 1) * 2] =
                   CONCAT17((char)((ulong)uVar18 >> 0x18),
                            CONCAT16(bVar65,CONCAT15((char)((ulong)uVar18 >> 0x10),
                                                     CONCAT14(bVar62,CONCAT13((char)((ulong)uVar18
                                                                                    >> 8),
                                                                              CONCAT12(bVar59,
                                                  CONCAT11((char)uVar18,bVar57)))))));
              *pbVar56 = (byte)auStack_a0[0];
              pbVar56[1] = (byte)auStack_a0[2];
              pbVar56[2] = bStack_80;
              pbVar56[3] = (byte)uStack_70;
              pbVar56[4] = (byte)((ulong)auStack_a0[0] >> 8);
              pbVar56[5] = (byte)((ulong)auStack_a0[2] >> 8);
              pbVar56[6] = bStack_7f;
              pbVar56[7] = (byte)((ulong)uStack_70 >> 8);
              pbVar56[8] = (byte)((ulong)auStack_a0[0] >> 0x10);
              pbVar56[9] = (byte)((ulong)auStack_a0[2] >> 0x10);
              pbVar56[10] = bStack_7e;
              pbVar56[0xb] = (byte)((ulong)uStack_70 >> 0x10);
              pbVar56[0xc] = (byte)((ulong)auStack_a0[0] >> 0x18);
              pbVar56[0xd] = (byte)((ulong)auStack_a0[2] >> 0x18);
              pbVar56[0xe] = bStack_7d;
              pbVar56[0xf] = (byte)((ulong)uStack_70 >> 0x18);
              pbVar56[0x10] = (byte)((ulong)auStack_a0[0] >> 0x20);
              pbVar56[0x11] = (byte)((ulong)auStack_a0[2] >> 0x20);
              pbVar56[0x12] = bStack_7c;
              pbVar56[0x13] = (byte)((ulong)uStack_70 >> 0x20);
              pbVar56[0x14] = (byte)((ulong)auStack_a0[0] >> 0x28);
              pbVar56[0x15] = (byte)((ulong)auStack_a0[2] >> 0x28);
              pbVar56[0x16] = bStack_7b;
              pbVar56[0x17] = (byte)((ulong)uStack_70 >> 0x28);
              pbVar56[0x18] = (byte)((ulong)auStack_a0[0] >> 0x30);
              pbVar56[0x19] = (byte)((ulong)auStack_a0[2] >> 0x30);
              pbVar56[0x1a] = bStack_7a;
              pbVar56[0x1b] = (byte)((ulong)uStack_70 >> 0x30);
              pbVar56[0x1c] = (byte)((ulong)auStack_a0[0] >> 0x38);
              pbVar56[0x1d] = (byte)((ulong)auStack_a0[2] >> 0x38);
              pbVar56[0x1e] = bStack_79;
              pbVar56[0x1f] = (byte)((ulong)uStack_70 >> 0x38);
              pbVar56[0x20] = (byte)auStack_a0[1];
              pbVar56[0x21] = (byte)auStack_a0[3];
              pbVar56[0x22] = bStack_78;
              pbVar56[0x23] = (byte)uStack_68;
              pbVar56[0x24] = (byte)((ulong)auStack_a0[1] >> 8);
              pbVar56[0x25] = (byte)((ulong)auStack_a0[3] >> 8);
              pbVar56[0x26] = bStack_77;
              pbVar56[0x27] = (byte)((ulong)uStack_68 >> 8);
              pbVar56[0x28] = (byte)((ulong)auStack_a0[1] >> 0x10);
              pbVar56[0x29] = (byte)((ulong)auStack_a0[3] >> 0x10);
              pbVar56[0x2a] = bStack_76;
              pbVar56[0x2b] = (byte)((ulong)uStack_68 >> 0x10);
              pbVar56[0x2c] = (byte)((ulong)auStack_a0[1] >> 0x18);
              pbVar56[0x2d] = (byte)((ulong)auStack_a0[3] >> 0x18);
              pbVar56[0x2e] = bStack_75;
              pbVar56[0x2f] = (byte)((ulong)uStack_68 >> 0x18);
              pbVar56[0x30] = (byte)((ulong)auStack_a0[1] >> 0x20);
              pbVar56[0x31] = (byte)((ulong)auStack_a0[3] >> 0x20);
              pbVar56[0x32] = bStack_74;
              pbVar56[0x33] = (byte)((ulong)uStack_68 >> 0x20);
              pbVar56[0x34] = (byte)((ulong)auStack_a0[1] >> 0x28);
              pbVar56[0x35] = (byte)((ulong)auStack_a0[3] >> 0x28);
              pbVar56[0x36] = bStack_73;
              pbVar56[0x37] = (byte)((ulong)uStack_68 >> 0x28);
              pbVar56[0x38] = (byte)((ulong)auStack_a0[1] >> 0x30);
              pbVar56[0x39] = (byte)((ulong)auStack_a0[3] >> 0x30);
              pbVar56[0x3a] = bStack_72;
              pbVar56[0x3b] = (byte)((ulong)uStack_68 >> 0x30);
              pbVar56[0x3c] = (byte)((ulong)auStack_a0[1] >> 0x38);
              pbVar56[0x3d] = (byte)((ulong)auStack_a0[3] >> 0x38);
              pbVar56[0x3e] = bStack_71;
              pbVar56[0x3f] = (byte)((ulong)uStack_68 >> 0x38);
              pbVar53 = pbVar53 + 0xe;
              pbVar56 = pbVar56 + 0x38;
            } while (pbVar53 <= pbVar51 + (long)iVar52 + -0x12);
          }
          iVar55 = (int)pbVar53 - (int)pbVar51;
          pbVar53 = pbVar51 + iVar55;
          pbVar50 = pbVar50 + iVar55 * 4;
LAB_109ae97dc:
          pbVar51 = pbVar1 + -2;
          if (iVar46 < 1) {
            if (pbVar53 <= pbVar51) {
              pbVar53 = pbVar53 + 1;
              do {
                bVar65 = pbVar53[-1];
                pbVar56 = pbVar53 + 1;
                bVar57 = *pbVar56;
                bVar67 = (pbVar53 + uVar45)[-1];
                bVar68 = pbVar53[lVar37 + -1];
                bVar59 = *pbVar53;
                bVar69 = pbVar53[(long)iVar38 + -1];
                bVar70 = pbVar53[lVar48 + -1];
                bVar62 = pbVar53[uVar45];
                pbVar50[-1] = pbVar53[lVar36 + -1];
                *pbVar50 = (byte)((uint)bVar59 + (uint)bVar69 + (uint)bVar70 + (uint)bVar62 + 2 >> 2
                                 );
                pbVar50[1] = (byte)((uint)bVar65 + (uint)bVar57 + (uint)bVar67 + (uint)bVar68 + 2 >>
                                   2);
                pbVar50[2] = 0xff;
                bVar57 = *pbVar56;
                bVar59 = pbVar53[lVar37 + -1];
                pbVar50[3] = (byte)((uint)pbVar53[lVar36 + -1] + (uint)pbVar53[lVar39 + -1] + 1 >> 1
                                   );
                pbVar50[4] = pbVar53[lVar48 + -1];
                pbVar50[5] = (byte)((uint)bVar57 + (uint)bVar59 + 1 >> 1);
                pbVar50[6] = 0xff;
                pbVar50 = pbVar50 + (uint)(iVar43 << 1);
                pbVar53 = pbVar53 + 2;
              } while (pbVar56 <= pbVar51);
              goto LAB_109ae99d4;
            }
          }
          else if (pbVar53 <= pbVar51) {
            pbVar53 = pbVar53 + 1;
            do {
              pbVar56 = pbVar53 + 1;
              bVar57 = *pbVar53;
              bVar62 = pbVar53[(long)iVar38 + -1];
              bVar65 = pbVar53[lVar48 + -1];
              bVar59 = pbVar53[uVar45];
              pbVar50[-1] = (byte)((uint)pbVar53[-1] + (uint)*pbVar56 + (uint)(pbVar53 + uVar45)[-1]
                                   + (uint)pbVar53[lVar37 + -1] + 2 >> 2);
              *pbVar50 = (byte)((uint)bVar57 + (uint)bVar62 + (uint)bVar65 + (uint)bVar59 + 2 >> 2);
              pbVar50[1] = pbVar53[lVar36 + -1];
              pbVar50[2] = 0xff;
              bVar57 = pbVar53[lVar36 + -1];
              bVar59 = pbVar53[lVar39 + -1];
              pbVar50[3] = (byte)((uint)*pbVar56 + (uint)pbVar53[lVar37 + -1] + 1 >> 1);
              pbVar50[4] = pbVar53[lVar48 + -1];
              pbVar50[5] = (byte)((uint)bVar57 + (uint)bVar59 + 1 >> 1);
              pbVar50[6] = 0xff;
              pbVar50 = pbVar50 + (uint)(iVar43 << 1);
              pbVar53 = pbVar53 + 2;
            } while (pbVar56 <= pbVar51);
LAB_109ae99d4:
            bVar35 = false;
LAB_109ae9ab8:
            pbVar53 = pbVar53 + -1;
            goto LAB_109ae9abc;
          }
          bVar35 = false;
        }
        else {
          pbVar53 = pbVar51;
          if (0x11 < iVar52) {
            pbVar56 = pbVar50 + -1;
            do {
              uVar18 = *(undefined8 *)(pbVar53 + iVar38 + 8);
              bVar67 = (byte)((ulong)uVar18 >> 8);
              bVar68 = (byte)((ulong)uVar18 >> 0x18);
              bVar69 = (byte)((ulong)uVar18 >> 0x28);
              bVar70 = (byte)((ulong)uVar18 >> 0x38);
              uVar8 = *(undefined8 *)(pbVar53 + iVar38);
              bVar57 = (byte)((ulong)uVar8 >> 8);
              bVar59 = (byte)((ulong)uVar8 >> 0x18);
              bVar62 = (byte)((ulong)uVar8 >> 0x28);
              bVar65 = (byte)((ulong)uVar8 >> 0x38);
              uVar23 = *(undefined8 *)(pbVar53 + 8);
              uVar16 = *(undefined8 *)pbVar53;
              puVar3 = (ushort *)(pbVar53 + uVar45);
              uVar27 = *puVar3;
              uVar28 = puVar3[1];
              uVar29 = puVar3[2];
              uVar30 = puVar3[3];
              uVar31 = puVar3[4];
              uVar32 = puVar3[5];
              uVar33 = puVar3[6];
              uVar34 = puVar3[7];
              auVar76[1] = 0;
              auVar76[0] = bVar57;
              auVar76[2] = bVar59;
              auVar76[3] = 0;
              auVar76[4] = bVar62;
              auVar76[5] = 0;
              auVar76[6] = bVar65;
              auVar76[7] = 0;
              auVar76[8] = bVar67;
              auVar76[9] = 0;
              auVar76[10] = bVar68;
              auVar76[0xb] = 0;
              auVar76[0xc] = bVar69;
              auVar76[0xd] = 0;
              auVar76[0xe] = bVar70;
              auVar76[0xf] = 0;
              auVar74 = NEON_ext(auVar76,auVar76,2,1);
              auVar77._0_2_ = auVar74._0_2_ + (ushort)bVar57;
              auVar77._2_2_ = auVar74._2_2_ + (ushort)bVar59;
              auVar77._4_2_ = auVar74._4_2_ + (ushort)bVar62;
              auVar77._6_2_ = auVar74._6_2_ + (ushort)bVar65;
              auVar77._8_2_ = auVar74._8_2_ + (ushort)bVar67;
              auVar77._10_2_ = auVar74._10_2_ + (ushort)bVar68;
              auVar77._12_2_ = auVar74._12_2_ + (ushort)bVar69;
              auVar77._14_2_ = auVar74._14_2_ + (ushort)bVar70;
              uVar58 = (undefined1)((ulong)uVar8 >> 0x20);
              uVar60 = (undefined1)((ulong)uVar8 >> 0x30);
              uVar61 = (undefined1)((ulong)uVar18 >> 0x10);
              uVar63 = (undefined1)((ulong)uVar18 >> 0x20);
              uVar64 = (undefined1)((ulong)uVar18 >> 0x30);
              auVar74[3] = 0;
              auVar74._0_3_ = (uint3)uVar8 & 0xff00ff;
              auVar74[4] = uVar58;
              auVar74[5] = 0;
              auVar74[6] = uVar60;
              auVar74[7] = 0;
              auVar74[8] = (char)uVar18;
              auVar74[9] = 0;
              auVar74[10] = uVar61;
              auVar74[0xb] = 0;
              auVar74[0xc] = uVar63;
              auVar74[0xd] = 0;
              auVar74[0xe] = uVar64;
              auVar74[0xf] = 0;
              auVar78[3] = 0;
              auVar78._0_3_ = (uint3)uVar8 & 0xff00ff;
              auVar78[4] = uVar58;
              auVar78[5] = 0;
              auVar78[6] = uVar60;
              auVar78[7] = 0;
              auVar78[8] = (char)uVar18;
              auVar78[9] = 0;
              auVar78[10] = uVar61;
              auVar78[0xb] = 0;
              auVar78[0xc] = uVar63;
              auVar78[0xd] = 0;
              auVar78[0xe] = uVar64;
              auVar78[0xf] = 0;
              auVar78 = NEON_ext(auVar74,auVar78,2,1);
              sVar15 = (uVar27 & 0xff) + ((ushort)uVar16 & 0xff);
              sVar19 = (uVar28 & 0xff) + ((ushort)((ulong)uVar16 >> 0x10) & 0xff);
              uVar58 = (undefined1)((ushort)sVar19 >> 8);
              sVar20 = (uVar29 & 0xff) + ((ushort)((ulong)uVar16 >> 0x20) & 0xff);
              uVar60 = (undefined1)((ushort)sVar20 >> 8);
              sVar21 = (uVar30 & 0xff) + ((ushort)((ulong)uVar16 >> 0x30) & 0xff);
              uVar61 = (undefined1)((ushort)sVar21 >> 8);
              sVar22 = (uVar31 & 0xff) + ((ushort)uVar23 & 0xff);
              uVar63 = (undefined1)((ushort)sVar22 >> 8);
              sVar24 = (uVar32 & 0xff) + ((ushort)((ulong)uVar23 >> 0x10) & 0xff);
              uVar64 = (undefined1)((ushort)sVar24 >> 8);
              sVar25 = (uVar33 & 0xff) + ((ushort)((ulong)uVar23 >> 0x20) & 0xff);
              uVar66 = (undefined1)((ushort)sVar25 >> 8);
              sVar26 = (uVar34 & 0xff) + ((ushort)((ulong)uVar23 >> 0x30) & 0xff);
              uVar71 = (undefined1)((ushort)sVar26 >> 8);
              auVar12[2] = (char)sVar19;
              auVar12._0_2_ = sVar15;
              auVar12[3] = uVar58;
              auVar12[4] = (char)sVar20;
              auVar12[5] = uVar60;
              auVar12[6] = (char)sVar21;
              auVar12[7] = uVar61;
              auVar12[8] = (char)sVar22;
              auVar12[9] = uVar63;
              auVar12[10] = (char)sVar24;
              auVar12[0xb] = uVar64;
              auVar12[0xc] = (char)sVar25;
              auVar12[0xd] = uVar66;
              auVar12[0xe] = (char)sVar26;
              auVar12[0xf] = uVar71;
              auVar13[2] = (char)sVar19;
              auVar13._0_2_ = sVar15;
              auVar13[3] = uVar58;
              auVar13[4] = (char)sVar20;
              auVar13[5] = uVar60;
              auVar13[6] = (char)sVar21;
              auVar13[7] = uVar61;
              auVar13[8] = (char)sVar22;
              auVar13[9] = uVar63;
              auVar13[10] = (char)sVar24;
              auVar13[0xb] = uVar64;
              auVar13[0xc] = (char)sVar25;
              auVar13[0xd] = uVar66;
              auVar13[0xe] = (char)sVar26;
              auVar13[0xf] = uVar71;
              auVar74 = NEON_ext(auVar12,auVar13,2,1);
              sVar15 = auVar74._0_2_ + sVar15;
              sVar19 = auVar74._2_2_ + sVar19;
              uVar58 = (undefined1)sVar19;
              uVar60 = (undefined1)((ushort)sVar19 >> 8);
              sVar20 = auVar74._4_2_ + sVar20;
              uVar61 = (undefined1)sVar20;
              uVar63 = (undefined1)((ushort)sVar20 >> 8);
              sVar21 = auVar74._6_2_ + sVar21;
              uVar64 = (undefined1)sVar21;
              uVar66 = (undefined1)((ushort)sVar21 >> 8);
              sVar22 = auVar74._8_2_ + sVar22;
              sVar24 = auVar74._10_2_ + sVar24;
              sVar25 = auVar74._12_2_ + sVar25;
              sVar26 = auVar74._14_2_ + sVar26;
              auVar14[2] = uVar58;
              auVar14._0_2_ = sVar15;
              auVar14[3] = uVar60;
              auVar14[4] = uVar61;
              auVar14[5] = uVar63;
              auVar14[6] = uVar64;
              auVar14[7] = uVar66;
              auVar14[8] = (char)sVar22;
              auVar14[9] = (char)((ushort)sVar22 >> 8);
              auVar14[10] = (char)sVar24;
              auVar14[0xb] = (char)((ushort)sVar24 >> 8);
              auVar14[0xc] = (char)sVar25;
              auVar14[0xd] = (char)((ushort)sVar25 >> 8);
              auVar14[0xe] = (char)sVar26;
              auVar14[0xf] = (char)((ushort)sVar26 >> 8);
              uVar17 = NEON_rshrn(CONCAT17(uVar66,CONCAT16(uVar64,CONCAT15(uVar63,CONCAT14(uVar61,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,sVar15)))))),
                                  auVar14,2,2);
              uVar72 = NEON_rshrn(auVar74._0_8_,auVar74,1,2);
              auStack_a0[(1 - (long)iVar46) * 2 + 1] =
                   CONCAT17((char)((ulong)uVar72 >> 0x38),
                            CONCAT16((char)((ulong)uVar17 >> 0x38),
                                     CONCAT15((char)((ulong)uVar72 >> 0x30),
                                              CONCAT14((char)((ulong)uVar17 >> 0x30),
                                                       CONCAT13((char)((ulong)uVar72 >> 0x28),
                                                                CONCAT12((char)((ulong)uVar17 >>
                                                                               0x28),
                                                                         CONCAT11((char)((ulong)
                                                  uVar72 >> 0x20),(char)((ulong)uVar17 >> 0x20))))))
                                    ));
              auStack_a0[(1 - (long)iVar46) * 2] =
                   CONCAT17((char)((ulong)uVar72 >> 0x18),
                            CONCAT16((char)((ulong)uVar17 >> 0x18),
                                     CONCAT15((char)((ulong)uVar72 >> 0x10),
                                              CONCAT14((char)((ulong)uVar17 >> 0x10),
                                                       CONCAT13((char)((ulong)uVar72 >> 8),
                                                                CONCAT12((char)((ulong)uVar17 >> 8),
                                                                         CONCAT11((char)uVar72,
                                                                                  (char)uVar17))))))
                           );
              sVar15 = ((ushort)uVar8 & 0xff) + (ushort)(byte)((ulong)uVar16 >> 8) + (uVar27 >> 8) +
                       auVar78._0_2_;
              sVar19 = ((ushort)((ulong)uVar8 >> 0x10) & 0xff) +
                       (ushort)(byte)((ulong)uVar16 >> 0x18) + (uVar28 >> 8) + auVar78._2_2_;
              uVar58 = (undefined1)sVar19;
              uVar60 = (undefined1)((ushort)sVar19 >> 8);
              sVar19 = ((ushort)((ulong)uVar8 >> 0x20) & 0xff) +
                       (ushort)(byte)((ulong)uVar16 >> 0x28) + (uVar29 >> 8) + auVar78._4_2_;
              uVar61 = (undefined1)sVar19;
              uVar63 = (undefined1)((ushort)sVar19 >> 8);
              sVar19 = ((ushort)((ulong)uVar8 >> 0x30) & 0xff) +
                       (ushort)(byte)((ulong)uVar16 >> 0x38) + (uVar30 >> 8) + auVar78._6_2_;
              uVar64 = (undefined1)sVar19;
              uVar66 = (undefined1)((ushort)sVar19 >> 8);
              sVar19 = ((ushort)uVar18 & 0xff) + (ushort)(byte)((ulong)uVar23 >> 8) + (uVar31 >> 8)
                       + auVar78._8_2_;
              sVar20 = ((ushort)((ulong)uVar18 >> 0x10) & 0xff) +
                       (ushort)(byte)((ulong)uVar23 >> 0x18) + (uVar32 >> 8) + auVar78._10_2_;
              sVar21 = ((ushort)((ulong)uVar18 >> 0x20) & 0xff) +
                       (ushort)(byte)((ulong)uVar23 >> 0x28) + (uVar33 >> 8) + auVar78._12_2_;
              sVar22 = ((ushort)((ulong)uVar18 >> 0x30) & 0xff) +
                       (ushort)(byte)((ulong)uVar23 >> 0x38) + (uVar34 >> 8) + auVar78._14_2_;
              auVar7[2] = uVar58;
              auVar7._0_2_ = sVar15;
              auVar7[3] = uVar60;
              auVar7[4] = uVar61;
              auVar7[5] = uVar63;
              auVar7[6] = uVar64;
              auVar7[7] = uVar66;
              auVar7[8] = (char)sVar19;
              auVar7[9] = (char)((ushort)sVar19 >> 8);
              auVar7[10] = (char)sVar20;
              auVar7[0xb] = (char)((ushort)sVar20 >> 8);
              auVar7[0xc] = (char)sVar21;
              auVar7[0xd] = (char)((ushort)sVar21 >> 8);
              auVar7[0xe] = (char)sVar22;
              auVar7[0xf] = (char)((ushort)sVar22 >> 8);
              uVar8 = NEON_rshrn(CONCAT17(uVar66,CONCAT16(uVar64,CONCAT15(uVar63,CONCAT14(uVar61,
                                                  CONCAT13(uVar60,CONCAT12(uVar58,sVar15)))))),
                                 auVar7,2,2);
              uVar18 = NEON_rshrn(CONCAT17(auVar78[0xe],
                                           CONCAT16(auVar78[0xc],
                                                    CONCAT15(auVar78[10],
                                                             CONCAT14(auVar78[8],
                                                                      CONCAT13(auVar78[6],
                                                                               CONCAT12(auVar78[4],
                                                                                        CONCAT11(
                                                  auVar78[2],auVar78[0]))))))),auVar77,1,2);
              auStack_a0[3] =
                   CONCAT17(auVar78[0xe],
                            CONCAT16((char)((ulong)uVar8 >> 0x38),
                                     CONCAT15(auVar78[0xc],
                                              CONCAT14((char)((ulong)uVar8 >> 0x30),
                                                       CONCAT13(auVar78[10],
                                                                CONCAT12((char)((ulong)uVar8 >> 0x28
                                                                               ),CONCAT11(auVar78[8]
                                                                                          ,(char)((
                                                  ulong)uVar8 >> 0x20))))))));
              auStack_a0[2] =
                   CONCAT17(auVar78[6],
                            CONCAT16((char)((ulong)uVar8 >> 0x18),
                                     CONCAT15(auVar78[4],
                                              CONCAT14((char)((ulong)uVar8 >> 0x10),
                                                       CONCAT13(auVar78[2],
                                                                CONCAT12((char)((ulong)uVar8 >> 8),
                                                                         CONCAT11(auVar78[0],
                                                                                  (char)uVar8)))))))
              ;
              auStack_a0[((long)iVar46 + 1) * 2 + 1] =
                   CONCAT17((char)((ulong)uVar18 >> 0x38),
                            CONCAT16(bVar70,CONCAT15((char)((ulong)uVar18 >> 0x30),
                                                     CONCAT14(bVar69,CONCAT13((char)((ulong)uVar18
                                                                                    >> 0x28),
                                                                              CONCAT12(bVar68,
                                                  CONCAT11((char)((ulong)uVar18 >> 0x20),bVar67)))))
                                    ));
              auStack_a0[((long)iVar46 + 1) * 2] =
                   CONCAT17((char)((ulong)uVar18 >> 0x18),
                            CONCAT16(bVar65,CONCAT15((char)((ulong)uVar18 >> 0x10),
                                                     CONCAT14(bVar62,CONCAT13((char)((ulong)uVar18
                                                                                    >> 8),
                                                                              CONCAT12(bVar59,
                                                  CONCAT11((char)uVar18,bVar57)))))));
              *pbVar56 = (byte)auStack_a0[0];
              pbVar56[1] = (byte)auStack_a0[2];
              pbVar56[2] = bStack_80;
              pbVar56[3] = (byte)((ulong)auStack_a0[0] >> 8);
              pbVar56[4] = (byte)((ulong)auStack_a0[2] >> 8);
              pbVar56[5] = bStack_7f;
              pbVar56[6] = (byte)((ulong)auStack_a0[0] >> 0x10);
              pbVar56[7] = (byte)((ulong)auStack_a0[2] >> 0x10);
              pbVar56[8] = bStack_7e;
              pbVar56[9] = (byte)((ulong)auStack_a0[0] >> 0x18);
              pbVar56[10] = (byte)((ulong)auStack_a0[2] >> 0x18);
              pbVar56[0xb] = bStack_7d;
              pbVar56[0xc] = (byte)((ulong)auStack_a0[0] >> 0x20);
              pbVar56[0xd] = (byte)((ulong)auStack_a0[2] >> 0x20);
              pbVar56[0xe] = bStack_7c;
              pbVar56[0xf] = (byte)((ulong)auStack_a0[0] >> 0x28);
              pbVar56[0x10] = (byte)((ulong)auStack_a0[2] >> 0x28);
              pbVar56[0x11] = bStack_7b;
              pbVar56[0x12] = (byte)((ulong)auStack_a0[0] >> 0x30);
              pbVar56[0x13] = (byte)((ulong)auStack_a0[2] >> 0x30);
              pbVar56[0x14] = bStack_7a;
              pbVar56[0x15] = (byte)((ulong)auStack_a0[0] >> 0x38);
              pbVar56[0x16] = (byte)((ulong)auStack_a0[2] >> 0x38);
              pbVar56[0x17] = bStack_79;
              pbVar56[0x18] = (byte)auStack_a0[1];
              pbVar56[0x19] = (byte)auStack_a0[3];
              pbVar56[0x1a] = bStack_78;
              pbVar56[0x1b] = (byte)((ulong)auStack_a0[1] >> 8);
              pbVar56[0x1c] = (byte)((ulong)auStack_a0[3] >> 8);
              pbVar56[0x1d] = bStack_77;
              pbVar56[0x1e] = (byte)((ulong)auStack_a0[1] >> 0x10);
              pbVar56[0x1f] = (byte)((ulong)auStack_a0[3] >> 0x10);
              pbVar56[0x20] = bStack_76;
              pbVar56[0x21] = (byte)((ulong)auStack_a0[1] >> 0x18);
              pbVar56[0x22] = (byte)((ulong)auStack_a0[3] >> 0x18);
              pbVar56[0x23] = bStack_75;
              pbVar56[0x24] = (byte)((ulong)auStack_a0[1] >> 0x20);
              pbVar56[0x25] = (byte)((ulong)auStack_a0[3] >> 0x20);
              pbVar56[0x26] = bStack_74;
              pbVar56[0x27] = (byte)((ulong)auStack_a0[1] >> 0x28);
              pbVar56[0x28] = (byte)((ulong)auStack_a0[3] >> 0x28);
              pbVar56[0x29] = bStack_73;
              pbVar56[0x2a] = (byte)((ulong)auStack_a0[1] >> 0x30);
              pbVar56[0x2b] = (byte)((ulong)auStack_a0[3] >> 0x30);
              pbVar56[0x2c] = bStack_72;
              pbVar56[0x2d] = (byte)((ulong)auStack_a0[1] >> 0x38);
              pbVar56[0x2e] = (byte)((ulong)auStack_a0[3] >> 0x38);
              pbVar56[0x2f] = bStack_71;
              pbVar53 = pbVar53 + 0xe;
              pbVar56 = pbVar56 + 0x2a;
            } while (pbVar53 <= pbVar51 + (long)iVar52 + -0x12);
          }
          iVar55 = (int)pbVar53 - (int)pbVar51;
          pbVar53 = pbVar51 + iVar55;
          pbVar50 = pbVar50 + (long)iVar43 * (long)iVar55;
          if (iVar43 != 3) goto LAB_109ae97dc;
          pbVar56 = pbVar1 + -2;
          if (0 < iVar46) {
            if (pbVar56 < pbVar53) goto LAB_109ae99e8;
            pbVar53 = pbVar51 + (long)iVar55 + 1;
            do {
              pbVar51 = pbVar53 + 1;
              bVar57 = *pbVar53;
              bVar62 = pbVar53[(long)iVar38 + -1];
              bVar65 = pbVar53[lVar48 + -1];
              bVar59 = pbVar53[uVar45];
              pbVar50[-1] = (byte)((uint)pbVar53[-1] + (uint)*pbVar51 + (uint)(pbVar53 + uVar45)[-1]
                                   + (uint)pbVar53[lVar37 + -1] + 2 >> 2);
              *pbVar50 = (byte)((uint)bVar57 + (uint)bVar62 + (uint)bVar65 + (uint)bVar59 + 2 >> 2);
              bVar57 = pbVar53[lVar36 + -1];
              pbVar50[1] = bVar57;
              bVar59 = pbVar53[lVar39 + -1];
              pbVar50[2] = (byte)((uint)*pbVar51 + (uint)pbVar53[lVar37 + -1] + 1 >> 1);
              pbVar50[3] = pbVar53[lVar48 + -1];
              pbVar50[4] = (byte)((uint)bVar57 + (uint)bVar59 + 1 >> 1);
              pbVar50 = pbVar50 + 6;
              pbVar53 = pbVar53 + 2;
            } while (pbVar51 <= pbVar56);
LAB_109ae9ab0:
            bVar35 = true;
            goto LAB_109ae9ab8;
          }
          if (pbVar53 <= pbVar56) {
            pbVar53 = pbVar51 + (long)iVar55 + 1;
            do {
              pbVar51 = pbVar53 + 1;
              bVar57 = *pbVar53;
              bVar62 = pbVar53[(long)iVar38 + -1];
              bVar65 = pbVar53[lVar48 + -1];
              bVar59 = pbVar53[uVar45];
              pbVar50[1] = (byte)((uint)pbVar53[-1] + (uint)*pbVar51 + (uint)(pbVar53 + uVar45)[-1]
                                  + (uint)pbVar53[lVar37 + -1] + 2 >> 2);
              *pbVar50 = (byte)((uint)bVar57 + (uint)bVar62 + (uint)bVar65 + (uint)bVar59 + 2 >> 2);
              bVar57 = pbVar53[lVar36 + -1];
              pbVar50[-1] = bVar57;
              bVar59 = pbVar53[lVar39 + -1];
              pbVar50[4] = (byte)((uint)*pbVar51 + (uint)pbVar53[lVar37 + -1] + 1 >> 1);
              pbVar50[3] = pbVar53[lVar48 + -1];
              pbVar50[2] = (byte)((uint)bVar57 + (uint)bVar59 + 1 >> 1);
              pbVar50 = pbVar50 + 6;
              pbVar53 = pbVar53 + 2;
            } while (pbVar51 <= pbVar56);
            goto LAB_109ae9ab0;
          }
LAB_109ae99e8:
          bVar35 = true;
        }
LAB_109ae9abc:
        if (pbVar53 < pbVar1) {
          bVar59 = pbVar53[iVar38];
          bVar57 = pbVar53[1];
          bVar62 = pbVar53[lVar48];
          bVar65 = pbVar53[uVar45 | 1];
          pbVar50[-(long)iVar46] =
               (byte)((uint)*pbVar53 + (uint)pbVar53[2] + (uint)pbVar53[uVar45] +
                      (uint)pbVar53[lVar37] + 2 >> 2);
          *pbVar50 = (byte)((uint)bVar57 + (uint)bVar59 + (uint)bVar62 + (uint)bVar65 + 2 >> 2);
          pbVar50[iVar46] = pbVar53[lVar36];
          if (iVar43 == 4) {
            pbVar50[2] = 0xff;
          }
        }
        if (bVar35) {
          pbVar47[-4] = pbVar47[-1];
          *(undefined2 *)(pbVar47 + -3) = *(undefined2 *)pbVar47;
          pbVar47[(long)*(int *)(param_1 + 0xd0) * 3 + -1] =
               pbVar47[(long)*(int *)(param_1 + 0xd0) * 3 + -4];
          iVar55 = *(int *)(param_1 + 0xd0) * 3;
          iVar49 = 1;
          lVar54 = 3;
          iVar52 = iVar55;
        }
        else {
          pbVar47[-5] = pbVar47[-1];
          pbVar47[-4] = *pbVar47;
          *(undefined2 *)(pbVar47 + -3) = *(undefined2 *)(pbVar47 + 1);
          lVar54 = (long)*(int *)(param_1 + 0xd0) * (long)iVar43;
          pbVar47[lVar54 + -1] = pbVar47[lVar54 + -5];
          pbVar47[(long)*(int *)(param_1 + 0xd0) * (long)iVar43] =
               (pbVar47 + (long)*(int *)(param_1 + 0xd0) * (long)iVar43)[-4];
          iVar52 = *(int *)(param_1 + 0xd0) * iVar43;
          iVar55 = iVar52 + 1;
          iVar49 = 2;
          lVar54 = lVar2;
        }
        uVar44 = (uint)(uVar44 == 0);
        pbVar47[iVar55] = pbVar47[(long)iVar52 + -3];
        pbVar47[*(int *)(param_1 + 0xd0) * (int)lVar54 + iVar49] =
             pbVar47[(long)*(int *)(param_1 + 0xd0) * (long)(int)lVar54 + -2];
        iVar46 = -iVar46;
      }
      pbVar42 = pbVar42 + iVar38;
      pbVar47 = pbVar47 + iVar40;
      uVar41 = uVar41 + 1;
    } while ((int)uVar41 < (int)param_2[1]);
  }
  return;
}



/* Entry: 109ae9c28; end: 109ae9d53;  */

undefined8 * FUN_109ae9c28(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24658;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109ae9d54; end: 109ae9d57;  */

undefined8 * FUN_109ae9d54(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24698;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109ae9d58; end: 109ae9d6b;  */

void FUN_109ae9d58(void)

{
  FUN_109aea160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ae9d6c; end: 109aea15f;  */

void FUN_109ae9d6c(long param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  short sVar9;
  undefined8 uVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  undefined1 auVar14 [16];
  bool bVar15;
  int iVar16;
  long lVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  byte *pbVar22;
  undefined1 *puVar23;
  byte *pbVar24;
  uint uVar25;
  undefined8 *puVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  ulong uVar30;
  byte *pbVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  uint uVar34;
  byte *pbVar35;
  byte *pbVar36;
  long lVar37;
  byte *pbVar38;
  long lVar39;
  byte *pbVar40;
  byte *pbVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  short sVar48;
  ushort uVar49;
  short sVar50;
  ushort uVar51;
  short sVar52;
  ushort uVar53;
  short sVar54;
  undefined8 uVar55;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  ushort uVar62;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  ushort uVar67;
  ushort uVar68;
  ushort uVar69;
  ushort uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  
  uVar25 = *param_2;
  if ((int)uVar25 < (int)param_2[1]) {
    iVar16 = (int)*(undefined8 *)(param_1 + 0xb8);
    lVar21 = *(long *)(param_1 + 0x58);
    uVar34 = *(uint *)(param_1 + 200);
    puVar26 = (undefined8 *)
              (*(long *)(param_1 + 0x78) + (long)(iVar16 + 1) + (long)(int)(uVar25 * iVar16));
    bVar15 = (uVar25 & 1) != 0;
    if (bVar15) {
      uVar34 = (uint)(uVar34 == 0);
    }
    iVar27 = *(int *)(param_1 + 0xd8);
    iVar29 = *(int *)(param_1 + 0xdc);
    if (bVar15) {
      iVar27 = *(int *)(param_1 + 0xdc);
      iVar29 = *(int *)(param_1 + 0xd8);
    }
    iVar19 = (int)lVar21;
    uVar30 = (ulong)(iVar19 * 2);
    lVar37 = (lVar21 << 0x20) + 0x200000000 >> 0x20;
    lVar39 = (lVar21 << 0x20) + 0x100000000 >> 0x20;
    iVar2 = iVar19 * 2 + 2;
    pbVar24 = (byte *)(*(long *)(param_1 + 0x18) + (long)(int)(uVar25 * iVar19));
    do {
      iVar28 = *(int *)(param_1 + 0xd0);
      lVar17 = (long)iVar28;
      if (iVar28 < 1) {
        *(undefined1 *)((long)puVar26 + lVar17) = 0;
        *(undefined1 *)((long)puVar26 + -1) = 0;
        iVar28 = iVar27;
      }
      else {
        pbVar31 = pbVar24;
        puVar32 = puVar26;
        iVar20 = iVar28;
        if (uVar34 != 0) {
          *(char *)puVar26 =
               (char)(((uint)pbVar24[lVar37] + (uint)pbVar24[iVar19]) * iVar27 +
                      ((uint)pbVar24[uVar30 | 1] + (uint)pbVar24[1]) * iVar29 +
                      (uint)pbVar24[lVar39] * 0x4b22 + 0x4000 >> 0xf);
          lVar17 = (long)*(int *)(param_1 + 0xd0);
          pbVar31 = pbVar24 + 1;
          puVar32 = (undefined8 *)((long)puVar26 + 1);
          iVar20 = *(int *)(param_1 + 0xd0);
        }
        pbVar18 = pbVar31;
        if (0x11 < iVar20) {
          puVar33 = puVar32;
          do {
            uVar55 = *(undefined8 *)(pbVar18 + 8);
            uVar49 = (ushort)((ulong)uVar55 >> 0x10);
            uVar51 = (ushort)((ulong)uVar55 >> 0x20);
            uVar53 = (ushort)((ulong)uVar55 >> 0x30);
            uVar10 = *(undefined8 *)pbVar18;
            auVar8 = *(undefined1 (*) [16])(pbVar18 + iVar19);
            bVar63 = auVar8[1];
            bVar64 = auVar8[3];
            bVar65 = auVar8[5];
            bVar66 = auVar8[7];
            uVar59 = auVar8._8_2_;
            uVar67 = uVar59 >> 8;
            uVar60 = auVar8._10_2_;
            uVar68 = uVar60 >> 8;
            uVar61 = auVar8._12_2_;
            uVar69 = uVar61 >> 8;
            uVar62 = auVar8._14_2_;
            uVar70 = uVar62 >> 8;
            puVar3 = (ushort *)(pbVar18 + uVar30);
            auVar72[1] = 0;
            auVar72[0] = bVar63;
            auVar72[2] = bVar64;
            auVar72[3] = 0;
            auVar72[4] = bVar65;
            auVar72[5] = 0;
            auVar72[6] = bVar66;
            auVar72[7] = 0;
            auVar72._8_2_ = uVar67;
            auVar72._10_2_ = uVar68;
            auVar72._12_2_ = uVar69;
            auVar72._14_2_ = uVar70;
            auVar14[1] = 0;
            auVar14[0] = bVar63;
            auVar14[2] = bVar64;
            auVar14[3] = 0;
            auVar14[4] = bVar65;
            auVar14[5] = 0;
            auVar14[6] = bVar66;
            auVar14[7] = 0;
            auVar14._8_2_ = uVar67;
            auVar14._10_2_ = uVar68;
            auVar14._12_2_ = uVar69;
            auVar14._14_2_ = uVar70;
            auVar72 = NEON_ext(auVar72,auVar14,2,1);
            auVar56._0_8_ = auVar8._0_8_ & 0xff00ff00ff00ff;
            auVar56._8_2_ = uVar59 & 0xff;
            auVar56._10_2_ = uVar60 & 0xff;
            auVar56._12_2_ = uVar61 & 0xff;
            auVar56._14_2_ = uVar62 & 0xff;
            auVar73 = NEON_ext(auVar56,auVar56,2,1);
            sVar9 = (*puVar3 & 0xff) + ((ushort)uVar10 & 0xff);
            sVar11 = (puVar3[1] & 0xff) + ((ushort)((ulong)uVar10 >> 0x10) & 0xff);
            uVar42 = (undefined1)((ushort)sVar11 >> 8);
            sVar12 = (puVar3[2] & 0xff) + ((ushort)((ulong)uVar10 >> 0x20) & 0xff);
            uVar43 = (undefined1)((ushort)sVar12 >> 8);
            sVar13 = (puVar3[3] & 0xff) + ((ushort)((ulong)uVar10 >> 0x30) & 0xff);
            uVar44 = (undefined1)((ushort)sVar13 >> 8);
            sVar48 = (puVar3[4] & 0xff) + ((ushort)uVar55 & 0xff);
            sVar50 = (puVar3[5] & 0xff) + (uVar49 & 0xff);
            sVar52 = (puVar3[6] & 0xff) + (uVar51 & 0xff);
            sVar54 = (puVar3[7] & 0xff) + (uVar53 & 0xff);
            auVar71[2] = (char)sVar11;
            auVar71._0_2_ = sVar9;
            auVar71[3] = uVar42;
            auVar71[4] = (char)sVar12;
            auVar71[5] = uVar43;
            auVar71[6] = (char)sVar13;
            auVar71[7] = uVar44;
            auVar71._8_2_ = sVar48;
            auVar71._10_2_ = sVar50;
            auVar71._12_2_ = sVar52;
            auVar71._14_2_ = sVar54;
            auVar7[2] = (char)sVar11;
            auVar7._0_2_ = sVar9;
            auVar7[3] = uVar42;
            auVar7[4] = (char)sVar12;
            auVar7[5] = uVar43;
            auVar7[6] = (char)sVar13;
            auVar7[7] = uVar44;
            auVar7._8_2_ = sVar48;
            auVar7._10_2_ = sVar50;
            auVar7._12_2_ = sVar52;
            auVar7._14_2_ = sVar54;
            auVar71 = NEON_ext(auVar71,auVar7,2,1);
            auVar57._0_2_ =
                 (short)auVar56._0_8_ + (ushort)(byte)((ulong)uVar10 >> 8) + (*puVar3 >> 8) +
                 auVar73._0_2_;
            auVar57._2_2_ =
                 (short)(auVar56._0_8_ >> 0x10) + (ushort)(byte)((ulong)uVar10 >> 0x18) +
                 (puVar3[1] >> 8) + auVar73._2_2_;
            auVar57._4_2_ =
                 (short)(auVar56._0_8_ >> 0x20) + (ushort)(byte)((ulong)uVar10 >> 0x28) +
                 (puVar3[2] >> 8) + auVar73._4_2_;
            auVar57._6_2_ =
                 (short)(auVar56._0_8_ >> 0x30) + (ushort)(byte)((ulong)uVar10 >> 0x38) +
                 (puVar3[3] >> 8) + auVar73._6_2_;
            auVar57._8_2_ = auVar56._8_2_ + ((ushort)uVar55 >> 8) + (puVar3[4] >> 8) + auVar73._8_2_
            ;
            auVar57._10_2_ = auVar56._10_2_ + (uVar49 >> 8) + (puVar3[5] >> 8) + auVar73._10_2_;
            auVar57._12_2_ = auVar56._12_2_ + (uVar51 >> 8) + (puVar3[6] >> 8) + auVar73._12_2_;
            auVar57._14_2_ = auVar56._14_2_ + (uVar53 >> 8) + (puVar3[7] >> 8) + auVar73._14_2_;
            auVar74._0_2_ = auVar73._0_2_ << 2;
            auVar74._2_2_ = auVar73._2_2_ << 2;
            auVar74._4_2_ = auVar73._4_2_ << 2;
            auVar74._6_2_ = auVar73._6_2_ << 2;
            auVar74._8_2_ = auVar73._8_2_ << 2;
            auVar74._10_2_ = auVar73._10_2_ << 2;
            auVar74._12_2_ = auVar73._12_2_ << 2;
            auVar74._14_2_ = auVar73._14_2_ << 2;
            iVar20 = (int)(short)(iVar29 << 1);
            iVar4 = (int)(short)(iVar29 << 2);
            auVar73._8_2_ = 0x4b22;
            auVar73._0_8_ = 0x4b224b224b224b22;
            auVar73._10_2_ = 0x4b22;
            auVar73._12_2_ = 0x4b22;
            auVar73._14_2_ = 0x4b22;
            auVar73 = NEON_sqdmulh(auVar57,auVar73,2);
            auVar75._8_2_ = 0x4b22;
            auVar75._0_8_ = 0x4b224b224b224b22;
            auVar75._10_2_ = 0x4b22;
            auVar75._12_2_ = 0x4b22;
            auVar75._14_2_ = 0x4b22;
            auVar75 = NEON_sqdmulh(auVar74,auVar75,2);
            iVar5 = (int)(short)(iVar27 << 1);
            iVar6 = (int)(short)(iVar27 * 4);
            sVar9 = auVar73._0_2_ +
                    (short)((uint)((short)(auVar71._0_2_ + sVar9) * iVar20 * 2) >> 0x10) +
                    (short)((uint)((short)((ushort)bVar63 << 2) * iVar5 * 2) >> 0x10);
            sVar11 = auVar73._2_2_ +
                     (short)((uint)((short)(auVar71._2_2_ + sVar11) * iVar20 * 2) >> 0x10) +
                     (short)((uint)((short)((ushort)bVar64 << 2) * iVar5 * 2) >> 0x10);
            uVar42 = (undefined1)sVar11;
            uVar43 = (undefined1)((ushort)sVar11 >> 8);
            sVar11 = auVar73._4_2_ +
                     (short)((uint)((short)(auVar71._4_2_ + sVar12) * iVar20 * 2) >> 0x10) +
                     (short)((uint)((short)((ushort)bVar65 << 2) * iVar5 * 2) >> 0x10);
            uVar44 = (undefined1)sVar11;
            uVar45 = (undefined1)((ushort)sVar11 >> 8);
            sVar11 = auVar73._6_2_ +
                     (short)((uint)((short)(auVar71._6_2_ + sVar13) * iVar20 * 2) >> 0x10) +
                     (short)((uint)((short)((ushort)bVar66 << 2) * iVar5 * 2) >> 0x10);
            uVar46 = (undefined1)sVar11;
            uVar47 = (undefined1)((ushort)sVar11 >> 8);
            auVar58._0_8_ =
                 CONCAT26(auVar75._6_2_ + (short)((uint)(auVar71._6_2_ * iVar4 * 2) >> 0x10) +
                          (short)((uint)((short)(auVar72._6_2_ + (auVar8._6_2_ >> 8)) * iVar6 * 2)
                                 >> 0x10),
                          CONCAT24(auVar75._4_2_ +
                                   (short)((uint)(auVar71._4_2_ * iVar4 * 2) >> 0x10) +
                                   (short)((uint)((short)(auVar72._4_2_ + (auVar8._4_2_ >> 8)) *
                                                  iVar6 * 2) >> 0x10),
                                   CONCAT22(auVar75._2_2_ +
                                            (short)((uint)(auVar71._2_2_ * iVar4 * 2) >> 0x10) +
                                            (short)((uint)((short)(auVar72._2_2_ +
                                                                  (auVar8._2_2_ >> 8)) * iVar6 * 2)
                                                   >> 0x10),
                                            auVar75._0_2_ +
                                            (short)((uint)(auVar71._0_2_ * iVar4 * 2) >> 0x10) +
                                            (short)((uint)((short)(auVar72._0_2_ +
                                                                  (auVar8._0_2_ >> 8)) * iVar6 * 2)
                                                   >> 0x10))));
            auVar58._8_2_ =
                 auVar75._8_2_ + (short)((uint)(auVar71._8_2_ * iVar4 * 2) >> 0x10) +
                 (short)((uint)((short)(auVar72._8_2_ + (uVar59 >> 8)) * iVar6 * 2) >> 0x10);
            auVar58._10_2_ =
                 auVar75._10_2_ + (short)((uint)(auVar71._10_2_ * iVar4 * 2) >> 0x10) +
                 (short)((uint)((short)(auVar72._10_2_ + (uVar60 >> 8)) * iVar6 * 2) >> 0x10);
            auVar58._12_2_ =
                 auVar75._12_2_ + (short)((uint)(auVar71._12_2_ * iVar4 * 2) >> 0x10) +
                 (short)((uint)((short)(auVar72._12_2_ + (uVar61 >> 8)) * iVar6 * 2) >> 0x10);
            auVar58._14_2_ =
                 auVar75._14_2_ + (short)((uint)(auVar71._14_2_ * iVar4 * 2) >> 0x10) +
                 (short)((uint)((short)(auVar72._14_2_ + (uVar62 >> 8)) * iVar6 * 2) >> 0x10);
            auVar8[2] = uVar42;
            auVar8._0_2_ = sVar9;
            auVar8[3] = uVar43;
            auVar8[4] = uVar44;
            auVar8[5] = uVar45;
            auVar8[6] = uVar46;
            auVar8[7] = uVar47;
            auVar8._8_2_ = auVar73._8_2_ +
                           (short)((uint)((short)(auVar71._8_2_ + sVar48) * iVar20 * 2) >> 0x10) +
                           (short)((uint)((short)(uVar67 << 2) * iVar5 * 2) >> 0x10);
            auVar8._10_2_ =
                 auVar73._10_2_ +
                 (short)((uint)((short)(auVar71._10_2_ + sVar50) * iVar20 * 2) >> 0x10) +
                 (short)((uint)((short)(uVar68 << 2) * iVar5 * 2) >> 0x10);
            auVar8._12_2_ =
                 auVar73._12_2_ +
                 (short)((uint)((short)(auVar71._12_2_ + sVar52) * iVar20 * 2) >> 0x10) +
                 (short)((uint)((short)(uVar69 << 2) * iVar5 * 2) >> 0x10);
            auVar8._14_2_ =
                 auVar73._14_2_ +
                 (short)((uint)((short)(auVar71._14_2_ + sVar54) * iVar20 * 2) >> 0x10) +
                 (short)((uint)((short)(uVar70 << 2) * iVar5 * 2) >> 0x10);
            uVar10 = NEON_rshrn(CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,
                                                  CONCAT13(uVar43,CONCAT12(uVar42,sVar9)))))),auVar8
                                ,2,2);
            uVar55 = NEON_rshrn(auVar58._0_8_,auVar58,2,2);
            *puVar33 = CONCAT17((char)((ulong)uVar55 >> 0x18),
                                CONCAT16((char)((ulong)uVar10 >> 0x18),
                                         CONCAT15((char)((ulong)uVar55 >> 0x10),
                                                  CONCAT14((char)((ulong)uVar10 >> 0x10),
                                                           CONCAT13((char)((ulong)uVar55 >> 8),
                                                                    CONCAT12((char)((ulong)uVar10 >>
                                                                                   8),CONCAT11((char
                                                  )uVar55,(char)uVar10)))))));
            puVar33[1] = CONCAT17((char)((ulong)uVar55 >> 0x38),
                                  CONCAT16((char)((ulong)uVar10 >> 0x38),
                                           CONCAT15((char)((ulong)uVar55 >> 0x30),
                                                    CONCAT14((char)((ulong)uVar10 >> 0x30),
                                                             CONCAT13((char)((ulong)uVar55 >> 0x28),
                                                                      CONCAT12((char)((ulong)uVar10
                                                                                     >> 0x28),
                                                                               CONCAT11((char)((
                                                  ulong)uVar55 >> 0x20),
                                                  (char)((ulong)uVar10 >> 0x20))))))));
            pbVar18 = pbVar18 + 0xe;
            puVar33 = (undefined8 *)((long)puVar33 + 0xe);
          } while (pbVar18 <= pbVar31 + lVar17 + -0x12);
        }
        pbVar1 = pbVar24 + iVar28;
        iVar28 = (int)pbVar18 - (int)pbVar31;
        pbVar18 = pbVar31 + iVar28;
        if (pbVar1 + -2 < pbVar18) {
          puVar23 = (undefined1 *)((long)puVar32 + (long)iVar28);
        }
        else {
          lVar17 = (long)iVar28;
          pbVar35 = pbVar31 + ((lVar21 << 0x20) + 0x300000000 >> 0x20);
          pbVar36 = pbVar31 + lVar39;
          pbVar38 = pbVar31 + lVar37;
          pbVar40 = pbVar31 + iVar19;
          pbVar41 = pbVar31 + iVar2;
          pbVar22 = pbVar31 + uVar30;
          do {
            pbVar18 = pbVar31 + lVar17;
            *(undefined1 *)((long)puVar32 + lVar17) =
                 (char)(((uint)pbVar40[lVar17] + (uint)pbVar18[1] +
                        (uint)pbVar38[lVar17] + (uint)(pbVar22 + lVar17)[1]) * 0x2591 +
                        ((uint)pbVar18[2] + (uint)*pbVar18 +
                        (uint)pbVar22[lVar17] + (uint)pbVar41[lVar17]) * iVar29 +
                        iVar27 * 4 * (uint)pbVar36[lVar17] + 0x8000 >> 0x10);
            ((undefined1 *)((long)puVar32 + lVar17))[1] =
                 (char)(((uint)pbVar35[lVar17] + (uint)pbVar36[lVar17]) * iVar27 +
                        ((uint)pbVar41[lVar17] + (uint)pbVar18[2]) * iVar29 +
                        (uint)pbVar38[lVar17] * 0x4b22 + 0x4000 >> 0xf);
            puVar32 = (undefined8 *)((long)puVar32 + 2);
            pbVar35 = pbVar35 + 2;
            pbVar36 = pbVar36 + 2;
            pbVar31 = pbVar31 + 2;
            pbVar18 = pbVar31 + lVar17;
            pbVar38 = pbVar38 + 2;
            pbVar40 = pbVar40 + 2;
            pbVar41 = pbVar41 + 2;
            pbVar22 = pbVar22 + 2;
          } while (pbVar18 <= pbVar1 + -2);
          puVar23 = (undefined1 *)((long)puVar32 + lVar17);
        }
        if (pbVar18 < pbVar1) {
          *puVar23 = (char)(((uint)pbVar18[iVar19] + (uint)pbVar18[1] +
                            (uint)pbVar18[lVar37] + (uint)pbVar18[uVar30 | 1]) * 0x2591 +
                            ((uint)pbVar18[2] + (uint)*pbVar18 + (uint)pbVar18[uVar30] +
                            (uint)pbVar18[iVar2]) * iVar29 + iVar27 * (uint)pbVar18[lVar39] * 4 +
                            0x8000 >> 0x10);
        }
        uVar34 = (uint)(uVar34 == 0);
        *(undefined1 *)((long)puVar26 + -1) = *(undefined1 *)puVar26;
        puVar23 = (undefined1 *)((long)puVar26 + (long)*(int *)(param_1 + 0xd0));
        *puVar23 = puVar23[-1];
        iVar28 = iVar29;
        iVar29 = iVar27;
      }
      uVar25 = uVar25 + 1;
      pbVar24 = pbVar24 + iVar19;
      puVar26 = (undefined8 *)((long)puVar26 + (long)iVar16);
      iVar27 = iVar28;
    } while ((int)uVar25 < (int)param_2[1]);
  }
  return;
}



/* Entry: 109aea160; end: 109aea28b;  */

undefined8 * FUN_109aea160(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24698;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109aea28c; end: 109aea28f;  */

undefined8 * FUN_109aea28c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b246d8;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109aea290; end: 109aea2a3;  */

void FUN_109aea290(void)

{
  FUN_109aea5d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109aea2a4; end: 109aea5d3;  */

void FUN_109aea2a4(long param_1,uint *param_2)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ushort *puVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  undefined2 *puVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  ushort *puVar22;
  ushort *puVar23;
  long lVar24;
  long lVar25;
  undefined2 *puVar26;
  long lVar27;
  
  uVar12 = *param_2;
  uVar4 = param_2[1];
  if ((int)uVar12 < (int)uVar4) {
    uVar15 = *(ulong *)(param_1 + 0xb8);
    uVar20 = uVar15 >> 1;
    uVar14 = *(uint *)(param_1 + 200);
    bVar8 = (uVar12 & 1) != 0;
    if (bVar8) {
      uVar14 = (uint)(uVar14 == 0);
    }
    uVar10 = *(ulong *)(param_1 + 0x58) >> 1;
    iVar16 = *(int *)(param_1 + 0xdc);
    if (bVar8) {
      iVar16 = *(int *)(param_1 + 0xd8);
    }
    puVar17 = (undefined2 *)
              (*(long *)(param_1 + 0x78) + ((long)((uVar20 << 0x20) + 0x100000000) >> 0x1f) +
              (long)(int)(uVar12 * (int)uVar20) * 2);
    iVar18 = *(int *)(param_1 + 0xd8);
    if (bVar8) {
      iVar18 = *(int *)(param_1 + 0xdc);
    }
    uVar5 = *(uint *)(param_1 + 0xd0);
    uVar9 = (uint)uVar10;
    uVar6 = uVar9 * 2;
    uVar21 = (long)(int)uVar6 | 1;
    lVar7 = (long)(*(ulong *)(param_1 + 0x58) << 0x1f) >> 0x20;
    lVar24 = (long)((uVar10 << 0x20) + 0x200000000) >> 0x20;
    lVar25 = (long)((uVar10 << 0x20) + 0x100000000) >> 0x20;
    uVar1 = uVar6 + 2;
    uVar13 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
    puVar11 = (ushort *)(*(long *)(param_1 + 0x18) + (long)(int)(uVar12 * uVar9) * 2);
    do {
      if ((int)uVar5 < 1) {
        puVar17[(int)uVar5] = 0;
        puVar17[-1] = 0;
        iVar19 = iVar18;
      }
      else {
        puVar22 = puVar11;
        puVar26 = puVar17;
        if (uVar14 != 0) {
          puVar22 = puVar11 + 1;
          puVar26 = puVar17 + 1;
          *puVar17 = (short)(((uint)puVar11[lVar24] + (uint)puVar11[lVar7]) * iVar18 +
                             ((uint)puVar11[uVar21] + (uint)*puVar22) * iVar16 +
                             (uint)puVar11[lVar25] * 0x4b22 + 0x4000 >> 0xf);
        }
        puVar2 = puVar11 + (int)uVar5;
        puVar23 = puVar22;
        if (puVar22 <= puVar2 + -2) {
          lVar27 = 0;
          do {
            puVar23 = (ushort *)((long)puVar22 + lVar27);
            puVar3 = (ushort *)
                     ((long)puVar22 +
                     lVar27 + (-(ulong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                              (ulong)uVar6 << 1));
            *(undefined2 *)((long)puVar26 + lVar27) =
                 (short)(((uint)*(ushort *)((long)puVar22 + lVar27 + lVar7 * 2) + (uint)puVar23[1] +
                         (uint)*(ushort *)((long)puVar22 + lVar27 + lVar24 * 2) + (uint)puVar3[1]) *
                         0x2591 + ((uint)puVar23[2] + (uint)*puVar23 +
                                  (uint)*puVar3 + (uint)*(ushort *)((long)puVar22 + lVar27 + uVar13)
                                  ) * iVar16 +
                         iVar18 * 4 * (uint)*(ushort *)((long)puVar22 + lVar27 + lVar25 * 2) +
                         0x8000 >> 0x10);
            ((undefined2 *)((long)puVar26 + lVar27))[1] =
                 (short)(((uint)*(ushort *)
                                 ((long)puVar22 +
                                 lVar27 + ((long)((uVar10 << 0x20) + 0x300000000) >> 0x1f)) +
                         (uint)*(ushort *)((long)puVar22 + lVar27 + lVar25 * 2)) * iVar18 +
                         ((uint)*(ushort *)((long)puVar22 + lVar27 + uVar13) + (uint)puVar23[2]) *
                         iVar16 + (uint)*(ushort *)((long)puVar22 + lVar27 + lVar24 * 2) * 0x4b22 +
                         0x4000 >> 0xf);
            lVar27 = lVar27 + 4;
            puVar23 = (ushort *)((long)puVar22 + lVar27);
          } while (puVar23 <= puVar2 + -2);
          puVar26 = (undefined2 *)((long)puVar26 + lVar27);
        }
        if (puVar23 < puVar2) {
          *puVar26 = (short)(((uint)puVar23[lVar7] + (uint)puVar23[1] +
                             (uint)puVar23[lVar24] + (uint)puVar23[uVar21]) * 0x2591 +
                             ((uint)puVar23[2] + (uint)*puVar23 + (uint)puVar23[(int)uVar6] +
                             (uint)puVar23[(int)uVar1]) * iVar16 +
                             iVar18 * (uint)puVar23[lVar25] * 4 + 0x8000 >> 0x10);
        }
        uVar14 = (uint)(uVar14 == 0);
        puVar17[-1] = *puVar17;
        puVar17[(int)uVar5] = puVar17[(ulong)uVar5 - 1];
        iVar19 = iVar16;
        iVar16 = iVar18;
      }
      uVar12 = uVar12 + 1;
      puVar11 = puVar11 + lVar7;
      puVar17 = (undefined2 *)
                ((long)puVar17 +
                (-(uVar15 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar20 & 0xffffffff) << 1));
      iVar18 = iVar19;
    } while (uVar12 != uVar4);
  }
  return;
}



/* Entry: 109aea5d4; end: 109aea6ff;  */

undefined8 * FUN_109aea5d4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b246d8;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109aea700; end: 109aea703;  */

undefined8 * FUN_109aea700(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24718;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109aea704; end: 109aea717;  */

void FUN_109aea704(void)

{
  FUN_109aeadac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109aea718; end: 109aeadab;  */

void FUN_109aea718(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  bool bVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar20;
  ushort *puVar21;
  ushort *puVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  ushort *puVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  ushort *puVar33;
  ulong uVar34;
  long lVar35;
  ushort *puVar36;
  ulong uVar37;
  long lVar38;
  ushort *puVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar19;
  
  uVar23 = *param_2;
  uVar3 = param_2[1];
  if ((int)uVar23 < (int)uVar3) {
    lVar2 = ((ulong)(*(uint *)(param_1 + 0x68) >> 3) & 0x1ff) + 1;
    uVar26 = *(ulong *)(param_1 + 0xb8);
    uVar32 = uVar26 >> 1;
    iVar31 = (int)uVar32;
    uVar25 = *(uint *)(param_1 + 200);
    bVar14 = (uVar23 & 1) != 0;
    uVar16 = *(ulong *)(param_1 + 0x58) >> 1;
    if (bVar14) {
      uVar25 = (uint)(uVar25 == 0);
    }
    uVar15 = (uint)uVar16;
    puVar36 = (ushort *)(*(long *)(param_1 + 0x18) + (long)(int)(uVar23 * uVar15) * 2);
    iVar30 = -*(int *)(param_1 + 0xcc);
    if (!bVar14) {
      iVar30 = *(int *)(param_1 + 0xcc);
    }
    uVar12 = uVar15 * 2;
    puVar22 = (ushort *)
              (*(long *)(param_1 + 0x78) + (long)(int)(iVar31 + iVar31 * uVar23) * 2 + lVar2 * 2 + 2
              );
    iVar31 = *(int *)(param_1 + 0xd0);
    uVar37 = (long)(int)uVar12 | 1;
    lVar13 = (long)(*(ulong *)(param_1 + 0x58) << 0x1f) >> 0x20;
    lVar38 = (long)((uVar16 << 0x20) + 0x200000000) >> 0x20;
    lVar40 = (long)((uVar16 << 0x20) + 0x100000000) >> 0x20;
    uVar1 = uVar12 + 2;
    lVar17 = (long)((uVar16 << 0x20) + 0x300000000) >> 0x20;
    uVar16 = (long)iVar31 * 3;
    lVar35 = (long)(int)uVar16;
    iVar18 = (int)lVar2;
    uVar19 = (long)iVar31 * (long)iVar18;
    uVar27 = (ulong)(*(uint *)(param_1 + 0x68) >> 3) & 0x1ff;
    uVar41 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
    uVar42 = -(ulong)((uVar15 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 | (ulong)uVar12 << 1;
    do {
      if (iVar31 < 1) {
        if (iVar18 == 3) {
          puVar22[lVar35 + 1U] = 0;
          puVar22[lVar35] = 0;
          puVar22[uVar16 - 1] = 0;
          puVar22[-2] = 0;
          puVar22[-4] = 0;
          puVar22[-3] = 0;
        }
        else {
          puVar22[uVar19 + 1] = 0;
          puVar22[(int)uVar19] = 0;
          puVar22[uVar19 - 1] = 0;
          puVar22[-3] = 0;
          puVar22[-5] = 0;
          puVar22[-4] = 0;
          puVar22[uVar19 + 2] = 0xffff;
          puVar22[-2] = 0xffff;
        }
      }
      else {
        puVar28 = puVar36;
        puVar33 = puVar22;
        if (uVar25 != 0) {
          puVar28 = puVar36 + 1;
          uVar4 = puVar36[lVar13];
          uVar5 = puVar36[lVar38];
          puVar22[-(long)iVar30] = (ushort)((uint)*puVar28 + (uint)puVar36[uVar37] + 1 >> 1);
          *puVar22 = puVar36[lVar40];
          puVar22[iVar30] = (ushort)((uint)uVar4 + (uint)uVar5 + 1 >> 1);
          if (iVar18 == 4) {
            puVar22[2] = 0xffff;
          }
          puVar33 = puVar22 + lVar2;
        }
        puVar21 = puVar36 + iVar31 + -2;
        if (iVar18 == 3) {
          if (iVar30 < 1) {
            if (puVar28 <= puVar21) {
              puVar28 = puVar28 + 1;
              do {
                puVar39 = puVar28 + 1;
                uVar4 = *puVar28;
                uVar6 = puVar28[lVar13 + -1];
                uVar7 = puVar28[lVar38 + -1];
                uVar5 = *(ushort *)((long)puVar28 + uVar42);
                puVar33[1] = (ushort)((uint)puVar28[-1] + (uint)*puVar39 +
                                      (uint)((ushort *)((long)puVar28 + uVar42))[-1] +
                                      (uint)*(ushort *)((long)puVar28 + (uVar41 - 2)) + 2 >> 2);
                *puVar33 = (ushort)((uint)uVar4 + (uint)uVar6 + (uint)uVar7 + (uint)uVar5 + 2 >> 2);
                uVar4 = puVar28[lVar40 + -1];
                puVar33[-1] = uVar4;
                uVar5 = puVar28[lVar17 + -1];
                puVar33[4] = (ushort)((uint)*puVar39 +
                                      (uint)*(ushort *)((long)puVar28 + (uVar41 - 2)) + 1 >> 1);
                puVar33[3] = puVar28[lVar38 + -1];
                puVar33[2] = (ushort)((uint)uVar4 + (uint)uVar5 + 1 >> 1);
                puVar33 = puVar33 + uVar27 * 2 + 2;
                puVar28 = puVar28 + 2;
              } while (puVar39 <= puVar21);
              goto LAB_109aeac6c;
            }
          }
          else if (puVar28 <= puVar21) {
            puVar28 = puVar28 + 1;
            do {
              puVar39 = puVar28 + 1;
              uVar4 = *puVar28;
              uVar6 = puVar28[lVar13 + -1];
              uVar7 = puVar28[lVar38 + -1];
              uVar5 = *(ushort *)((long)puVar28 + uVar42);
              puVar33[-1] = (ushort)((uint)puVar28[-1] + (uint)*puVar39 +
                                     (uint)((ushort *)((long)puVar28 + uVar42))[-1] +
                                     (uint)*(ushort *)((long)puVar28 + (uVar41 - 2)) + 2 >> 2);
              *puVar33 = (ushort)((uint)uVar4 + (uint)uVar6 + (uint)uVar7 + (uint)uVar5 + 2 >> 2);
              uVar4 = puVar28[lVar40 + -1];
              puVar33[1] = uVar4;
              uVar5 = puVar28[lVar17 + -1];
              puVar33[2] = (ushort)((uint)*puVar39 + (uint)*(ushort *)((long)puVar28 + (uVar41 - 2))
                                    + 1 >> 1);
              puVar33[3] = puVar28[lVar38 + -1];
              puVar33[4] = (ushort)((uint)uVar4 + (uint)uVar5 + 1 >> 1);
              puVar33 = puVar33 + uVar27 * 2 + 2;
              puVar28 = puVar28 + 2;
            } while (puVar39 <= puVar21);
LAB_109aeac6c:
            puVar28 = puVar28 + -1;
          }
        }
        else if (iVar30 < 1) {
          if (puVar28 <= puVar21) {
            puVar28 = puVar28 + 1;
            do {
              uVar7 = puVar28[-1];
              puVar39 = puVar28 + 1;
              uVar6 = *puVar39;
              uVar8 = ((ushort *)((long)puVar28 + uVar42))[-1];
              uVar9 = *(ushort *)((long)puVar28 + (uVar41 - 2));
              uVar4 = *puVar28;
              uVar10 = puVar28[lVar13 + -1];
              uVar11 = puVar28[lVar38 + -1];
              uVar5 = *(ushort *)((long)puVar28 + uVar42);
              puVar33[-1] = puVar28[lVar40 + -1];
              *puVar33 = (ushort)((uint)uVar4 + (uint)uVar10 + (uint)uVar11 + (uint)uVar5 + 2 >> 2);
              puVar33[1] = (ushort)((uint)uVar7 + (uint)uVar6 + (uint)uVar8 + (uint)uVar9 + 2 >> 2);
              puVar33[2] = 0xffff;
              uVar4 = *puVar39;
              uVar5 = *(ushort *)((long)puVar28 + (uVar41 - 2));
              puVar33[3] = (ushort)((uint)puVar28[lVar40 + -1] + (uint)puVar28[lVar17 + -1] + 1 >> 1
                                   );
              puVar33[4] = puVar28[lVar38 + -1];
              puVar33[5] = (ushort)((uint)uVar4 + (uint)uVar5 + 1 >> 1);
              puVar33[6] = 0xffff;
              puVar33 = puVar33 + uVar27 * 2 + 2;
              puVar28 = puVar28 + 2;
            } while (puVar39 <= puVar21);
            goto LAB_109aeac6c;
          }
        }
        else if (puVar28 <= puVar21) {
          puVar28 = puVar28 + 1;
          do {
            puVar39 = puVar28 + 1;
            uVar4 = *puVar28;
            uVar6 = puVar28[lVar13 + -1];
            uVar7 = puVar28[lVar38 + -1];
            uVar5 = *(ushort *)((long)puVar28 + uVar42);
            puVar33[-1] = (ushort)((uint)puVar28[-1] + (uint)*puVar39 +
                                   (uint)((ushort *)((long)puVar28 + uVar42))[-1] +
                                   (uint)*(ushort *)((long)puVar28 + (uVar41 - 2)) + 2 >> 2);
            *puVar33 = (ushort)((uint)uVar4 + (uint)uVar6 + (uint)uVar7 + (uint)uVar5 + 2 >> 2);
            puVar33[1] = puVar28[lVar40 + -1];
            puVar33[2] = 0xffff;
            uVar4 = puVar28[lVar40 + -1];
            uVar5 = puVar28[lVar17 + -1];
            puVar33[3] = (ushort)((uint)*puVar39 + (uint)*(ushort *)((long)puVar28 + (uVar41 - 2)) +
                                  1 >> 1);
            puVar33[4] = puVar28[lVar38 + -1];
            puVar33[5] = (ushort)((uint)uVar4 + (uint)uVar5 + 1 >> 1);
            puVar33[6] = 0xffff;
            puVar33 = puVar33 + uVar27 * 2 + 2;
            puVar28 = puVar28 + 2;
          } while (puVar39 <= puVar21);
          goto LAB_109aeac6c;
        }
        if (puVar28 < puVar36 + iVar31) {
          uVar5 = puVar28[lVar13];
          uVar4 = puVar28[1];
          uVar6 = puVar28[lVar38];
          uVar7 = puVar28[uVar37];
          puVar33[-(long)iVar30] =
               (ushort)((uint)*puVar28 + (uint)puVar28[2] + (uint)puVar28[(int)uVar12] +
                        (uint)puVar28[(int)uVar1] + 2 >> 2);
          *puVar33 = (ushort)((uint)uVar4 + (uint)uVar5 + (uint)uVar6 + (uint)uVar7 + 2 >> 2);
          puVar33[iVar30] = puVar28[lVar40];
          if (iVar18 != 4) goto LAB_109aeacf8;
          puVar33[2] = 0xffff;
LAB_109aead24:
          *(undefined8 *)(puVar22 + -5) = *(undefined8 *)(puVar22 + -1);
          puVar22[uVar19 - 1] = puVar22[(uVar19 & 0xffffffff) - 5];
          uVar20 = uVar19 + 1;
          uVar24 = uVar19 + 2;
          lVar29 = (long)(int)uVar19;
          uVar34 = uVar19 & 0xffffffff;
        }
        else {
LAB_109aeacf8:
          if (iVar18 != 3) goto LAB_109aead24;
          puVar22[-4] = puVar22[-1];
          *(undefined4 *)(puVar22 + -3) = *(undefined4 *)puVar22;
          uVar20 = uVar16;
          uVar24 = lVar35 + 1U;
          lVar29 = lVar35;
          uVar34 = uVar16 - 1;
        }
        uVar25 = (uint)(uVar25 == 0);
        puVar22[uVar34] = puVar22[lVar29 + -4];
        puVar22[uVar20 & 0xffffffff] = puVar22[lVar29 + -3];
        puVar22[uVar24 & 0xffffffff] = puVar22[lVar29 + -2];
        iVar30 = -iVar30;
      }
      puVar36 = puVar36 + lVar13;
      puVar22 = (ushort *)
                ((long)puVar22 +
                (-(uVar26 >> 0x20 & 1) & 0xfffffffe00000000 | (uVar32 & 0xffffffff) << 1));
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar3);
  }
  return;
}



/* Entry: 109aeadac; end: 109aeaed7;  */

undefined8 * FUN_109aeadac(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24718;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109aeaed8; end: 109aeaedb;  */

undefined8 * FUN_109aeaed8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24758;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109aeaedc; end: 109aeaeef;  */

void FUN_109aeaedc(void)

{
  FUN_109aeb280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109aeaef0; end: 109aeb27f;  */

void FUN_109aeaef0(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  byte *pbVar26;
  
  uVar15 = *param_2;
  if ((int)uVar15 < (int)param_2[1]) {
    uVar3 = *(uint *)(param_1 + 0x68);
    lVar1 = ((ulong)(uVar3 >> 3) & 0x1ff) + 1;
    uVar16 = *(uint *)(param_1 + 0xd4) ^ uVar15 & 1;
    uVar17 = *(uint *)(param_1 + 0xd0) ^ uVar15 & 1;
    pbVar18 = (byte *)(*(long *)(param_1 + 0x78) +
                       *(ulong *)(param_1 + 0xb8) * ((long)(int)uVar15 + 1) + lVar1);
    pbVar19 = (byte *)(*(long *)(param_1 + 0x18) +
                       **(long **)(param_1 + 0x50) * ((long)(int)uVar15 + 1) + 1);
    uVar2 = 0x88442211 >> (((ulong)uVar3 & 7) << 2);
    uVar5 = 0x88442211 >> (((ulong)*(uint *)(param_1 + 8) & 7) << 2);
    uVar24 = 0;
    if ((uVar5 & 0xf) != 0) {
      uVar24 = *(ulong *)(param_1 + 0x58) / ((ulong)uVar5 & 0xf);
    }
    uVar5 = (int)lVar1 * 2;
    lVar21 = (long)-(uVar24 << 0x20) >> 0x20;
    uVar20 = (uint)uVar24;
    uVar7 = ~uVar20;
    lVar12 = (long)(0x100000000 - (uVar24 << 0x20)) >> 0x20;
    lVar13 = (long)((uVar24 << 0x20) + -0x100000000) >> 0x20;
    lVar14 = (long)((uVar24 << 0x20) + 0x100000000) >> 0x20;
    iVar10 = 0;
    if ((uVar2 & 0xf) != 0) {
      iVar10 = (int)(*(ulong *)(param_1 + 0xb8) / ((ulong)uVar2 & 0xf));
    }
    do {
      iVar6 = uVar17 << 1;
      if (uVar16 == 0) {
        iVar23 = 1;
      }
      else {
        pbVar18[iVar6] = (byte)((uint)pbVar19[(int)uVar20] + (uint)pbVar19[lVar21] >> 1);
        pbVar18[1] = *pbVar19;
        pbVar18[2 - (long)iVar6] = (byte)((uint)pbVar19[1] + (uint)pbVar19[-1] >> 1);
        pbVar18 = pbVar18 + lVar1;
        iVar23 = 2;
        pbVar19 = pbVar19 + 1;
      }
      iVar25 = *(int *)(param_1 + 200);
      if (uVar17 == 0) {
        if (iVar23 < iVar25) {
          do {
            *pbVar18 = (byte)((uint)pbVar19[(int)uVar7] + (uint)pbVar19[lVar12] +
                              (uint)pbVar19[lVar13] + (uint)pbVar19[lVar14] + 2 >> 2);
            uVar8 = (uint)pbVar19[-1] - (uint)pbVar19[1];
            uVar2 = -uVar8;
            if (-1 < (int)uVar8) {
              uVar2 = uVar8;
            }
            uVar9 = (uint)pbVar19[(int)uVar20] - (uint)pbVar19[lVar21];
            uVar8 = -uVar9;
            if (-1 < (int)uVar9) {
              uVar8 = uVar9;
            }
            iVar25 = (uint)pbVar19[lVar21] + (uint)pbVar19[(int)uVar20];
            if (uVar2 <= uVar8) {
              iVar25 = (uint)pbVar19[1] + (uint)pbVar19[-1];
            }
            pbVar18[1] = (byte)(iVar25 + 1U >> 1);
            pbVar18[2] = *pbVar19;
            pbVar18[3] = (byte)((uint)pbVar19[lVar12] + (uint)pbVar19[lVar14] + 1 >> 1);
            pbVar18[4] = pbVar19[1];
            bVar4 = *pbVar19;
            pbVar19 = pbVar19 + 2;
            pbVar18[5] = (byte)((uint)bVar4 + (uint)*pbVar19 + 1 >> 1);
            iVar23 = iVar23 + 2;
            pbVar18 = pbVar18 + uVar5;
            iVar25 = *(int *)(param_1 + 200);
          } while (iVar23 < iVar25);
        }
      }
      else {
        pbVar26 = pbVar19;
        if (iVar23 < iVar25) {
          do {
            *pbVar18 = *pbVar26;
            uVar8 = (uint)pbVar26[-1] - (uint)pbVar26[1];
            uVar2 = -uVar8;
            if (-1 < (int)uVar8) {
              uVar2 = uVar8;
            }
            uVar9 = (uint)pbVar26[(int)uVar20] - (uint)pbVar26[lVar21];
            uVar8 = -uVar9;
            if (-1 < (int)uVar9) {
              uVar8 = uVar9;
            }
            iVar25 = (uint)pbVar26[lVar21] + (uint)pbVar26[(int)uVar20];
            if (uVar2 <= uVar8) {
              iVar25 = (uint)pbVar26[1] + (uint)pbVar26[-1];
            }
            pbVar18[1] = (byte)(iVar25 + 1U >> 1);
            pbVar18[2] = (byte)((uint)pbVar26[lVar12] + (uint)pbVar26[(int)uVar7] +
                                (uint)pbVar26[lVar13] + (uint)pbVar26[lVar14] >> 2);
            pbVar19 = pbVar26 + 2;
            pbVar18[3] = (byte)((uint)*pbVar26 + (uint)*pbVar19 + 1 >> 1);
            pbVar18[4] = pbVar26[1];
            pbVar18[5] = (byte)((uint)pbVar26[lVar12] + (uint)pbVar26[lVar14] + 1 >> 1);
            iVar23 = iVar23 + 2;
            pbVar18 = pbVar18 + uVar5;
            iVar25 = *(int *)(param_1 + 200);
            pbVar26 = pbVar19;
          } while (iVar23 < iVar25);
        }
      }
      pbVar26 = pbVar19;
      if (iVar23 <= iVar25) {
        pbVar18[iVar6] =
             (byte)((uint)pbVar19[(int)uVar7] + (uint)pbVar19[lVar12] +
                    (uint)pbVar19[lVar13] + (uint)pbVar19[lVar14] + 2 >> 2);
        pbVar26 = pbVar19 + 1;
        uVar8 = (uint)pbVar19[-1] - (uint)*pbVar26;
        uVar2 = -uVar8;
        if (-1 < (int)uVar8) {
          uVar2 = uVar8;
        }
        uVar9 = (uint)pbVar19[(int)uVar20] - (uint)pbVar19[lVar21];
        uVar8 = -uVar9;
        if (-1 < (int)uVar9) {
          uVar8 = uVar9;
        }
        iVar23 = (uint)pbVar19[lVar21] + (uint)pbVar19[(int)uVar20];
        if (uVar2 <= uVar8) {
          iVar23 = (uint)*pbVar26 + (uint)pbVar19[-1];
        }
        pbVar18[1] = (byte)(iVar23 + 1U >> 1);
        pbVar18[2 - (long)iVar6] = *pbVar19;
        pbVar18 = pbVar18 + lVar1;
      }
      lVar22 = 0;
      uVar24 = (ulong)(uVar3 >> 3 ^ 0xffffffff) | 0xfffffffffffffe00;
      do {
        pbVar19 = pbVar18 + lVar22;
        *pbVar19 = pbVar18[uVar24];
        pbVar19[(int)lVar1 - iVar10] = pbVar19[(int)(uVar5 - iVar10)];
        lVar22 = lVar22 + 1;
        bVar11 = uVar24 != 0xffffffffffffffff;
        uVar24 = uVar24 + 1;
      } while (bVar11);
      uVar16 = uVar16 ^ 1;
      uVar17 = uVar17 ^ 1;
      pbVar19 = pbVar26 + 2;
      pbVar18 = pbVar18 + uVar5;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)param_2[1]);
  }
  return;
}



/* Entry: 109aeb280; end: 109aeb3ab;  */

undefined8 * FUN_109aeb280(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24758;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109aeb3ac; end: 109aeb3af;  */

undefined8 * FUN_109aeb3ac(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24798;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109aeb3b0; end: 109aeb3c3;  */

void FUN_109aeb3b0(void)

{
  FUN_109aeb760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109aeb3c4; end: 109aeb75f;  */

void FUN_109aeb3c4(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ushort *puVar23;
  ushort *puVar24;
  int iVar25;
  long lVar26;
  
  uVar16 = *param_2;
  uVar3 = param_2[1];
  if ((int)uVar16 < (int)uVar3) {
    uVar4 = *(uint *)(param_1 + 0x68);
    lVar1 = ((ulong)(uVar4 >> 3) & 0x1ff) + 1;
    uVar17 = *(uint *)(param_1 + 0xd4) ^ uVar16 & 1;
    uVar18 = *(uint *)(param_1 + 0xd0) ^ uVar16 & 1;
    puVar19 = (ushort *)
              (*(long *)(param_1 + 0x78) + *(ulong *)(param_1 + 0xb8) * ((long)(int)uVar16 + 1) +
              lVar1 * 2);
    puVar23 = (ushort *)
              (*(long *)(param_1 + 0x18) + **(long **)(param_1 + 0x50) * ((long)(int)uVar16 + 1) + 2
              );
    uVar9 = 0x88442211 >> (((ulong)uVar4 & 7) << 2);
    uVar6 = 0x88442211 >> (((ulong)*(uint *)(param_1 + 8) & 7) << 2);
    uVar15 = 0;
    if ((uVar6 & 0xf) != 0) {
      uVar15 = *(ulong *)(param_1 + 0x58) / ((ulong)uVar6 & 0xf);
    }
    uVar6 = (int)lVar1 * 2;
    lVar21 = (long)-(uVar15 << 0x20) >> 0x20;
    uVar20 = (uint)uVar15;
    uVar8 = ~uVar20;
    lVar12 = (long)(0x100000000 - (uVar15 << 0x20)) >> 0x20;
    lVar13 = (long)((uVar15 << 0x20) + -0x100000000) >> 0x20;
    lVar14 = (long)((uVar15 << 0x20) + 0x100000000) >> 0x20;
    iVar5 = *(int *)(param_1 + 200);
    iVar11 = 0;
    if ((uVar9 & 0xf) != 0) {
      iVar11 = (int)(*(ulong *)(param_1 + 0xb8) / ((ulong)uVar9 & 0xf));
    }
    uVar15 = (ulong)(uVar4 >> 3) & 0x1ff;
    do {
      iVar7 = uVar18 << 1;
      if (uVar17 == 0) {
        iVar25 = 1;
        if (uVar18 != 0) goto LAB_109aeb4fc;
LAB_109aeb5c4:
        for (; iVar25 < iVar5; iVar25 = iVar25 + 2) {
          *puVar19 = (ushort)((uint)puVar23[(int)uVar8] + (uint)puVar23[lVar12] +
                              (uint)puVar23[lVar13] + (uint)puVar23[lVar14] + 2 >> 2);
          uVar9 = (uint)puVar23[-1] - (uint)puVar23[1];
          uVar4 = -uVar9;
          if (-1 < (int)uVar9) {
            uVar4 = uVar9;
          }
          uVar10 = (uint)puVar23[(int)uVar20] - (uint)puVar23[lVar21];
          uVar9 = -uVar10;
          if (-1 < (int)uVar10) {
            uVar9 = uVar10;
          }
          iVar2 = (uint)puVar23[lVar21] + (uint)puVar23[(int)uVar20];
          if (uVar4 <= uVar9) {
            iVar2 = (uint)puVar23[1] + (uint)puVar23[-1];
          }
          puVar19[1] = (ushort)(iVar2 + 1U >> 1);
          puVar19[2] = *puVar23;
          puVar19[3] = (ushort)((uint)puVar23[lVar12] + (uint)puVar23[lVar14] + 1 >> 1);
          puVar19[4] = puVar23[1];
          puVar19[5] = (ushort)((uint)*puVar23 + (uint)puVar23[2] + 1 >> 1);
          puVar19 = puVar19 + uVar15 * 2 + 2;
          puVar23 = puVar23 + 2;
        }
      }
      else {
        puVar19[iVar7] = (ushort)((uint)puVar23[(int)uVar20] + (uint)puVar23[lVar21] >> 1);
        puVar19[1] = *puVar23;
        puVar24 = puVar23 + 1;
        iVar25 = 2;
        puVar19[2 - (long)iVar7] = (ushort)((uint)*puVar24 + (uint)puVar23[-1] >> 1);
        puVar19 = puVar19 + lVar1;
        puVar23 = puVar24;
        if (uVar18 == 0) goto LAB_109aeb5c4;
LAB_109aeb4fc:
        for (; iVar25 < iVar5; iVar25 = iVar25 + 2) {
          *puVar19 = *puVar23;
          uVar9 = (uint)puVar23[-1] - (uint)puVar23[1];
          uVar4 = -uVar9;
          if (-1 < (int)uVar9) {
            uVar4 = uVar9;
          }
          uVar10 = (uint)puVar23[(int)uVar20] - (uint)puVar23[lVar21];
          uVar9 = -uVar10;
          if (-1 < (int)uVar10) {
            uVar9 = uVar10;
          }
          iVar2 = (uint)puVar23[lVar21] + (uint)puVar23[(int)uVar20];
          if (uVar4 <= uVar9) {
            iVar2 = (uint)puVar23[1] + (uint)puVar23[-1];
          }
          puVar19[1] = (ushort)(iVar2 + 1U >> 1);
          puVar19[2] = (ushort)((uint)puVar23[lVar12] + (uint)puVar23[(int)uVar8] +
                                (uint)puVar23[lVar13] + (uint)puVar23[lVar14] >> 2);
          puVar19[3] = (ushort)((uint)*puVar23 + (uint)puVar23[2] + 1 >> 1);
          puVar19[4] = puVar23[1];
          puVar19[5] = (ushort)((uint)puVar23[lVar12] + (uint)puVar23[lVar14] + 1 >> 1);
          puVar19 = puVar19 + uVar15 * 2 + 2;
          puVar23 = puVar23 + 2;
        }
      }
      puVar24 = puVar23;
      if (iVar25 <= iVar5) {
        puVar19[iVar7] =
             (ushort)((uint)puVar23[(int)uVar8] + (uint)puVar23[lVar12] +
                      (uint)puVar23[lVar13] + (uint)puVar23[lVar14] + 2 >> 2);
        puVar24 = puVar23 + 1;
        uVar9 = (uint)puVar23[-1] - (uint)*puVar24;
        uVar4 = -uVar9;
        if (-1 < (int)uVar9) {
          uVar4 = uVar9;
        }
        uVar10 = (uint)puVar23[(int)uVar20] - (uint)puVar23[lVar21];
        uVar9 = -uVar10;
        if (-1 < (int)uVar10) {
          uVar9 = uVar10;
        }
        iVar25 = (uint)puVar23[lVar21] + (uint)puVar23[(int)uVar20];
        if (uVar4 <= uVar9) {
          iVar25 = (uint)*puVar24 + (uint)puVar23[-1];
        }
        puVar19[1] = (ushort)(iVar25 + 1U >> 1);
        puVar19[2 - (long)iVar7] = *puVar23;
        puVar19 = puVar19 + lVar1;
      }
      lVar22 = 0;
      puVar23 = puVar19;
      lVar26 = lVar1;
      do {
        *puVar23 = puVar23[~uVar15];
        puVar19[lVar22 + ((int)lVar1 - iVar11)] = puVar19[lVar22 + (int)(uVar6 - iVar11)];
        lVar22 = lVar22 + 1;
        lVar26 = lVar26 + -1;
        puVar23 = puVar23 + 1;
      } while (lVar26 != 0);
      uVar17 = uVar17 ^ 1;
      uVar18 = uVar18 ^ 1;
      puVar23 = puVar24 + 2;
      puVar19 = puVar19 + uVar6;
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar3);
  }
  return;
}



/* Entry: 109aeb760; end: 109aeb88b;  */

undefined8 * FUN_109aeb760(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110b24798;
  if (param_1[0x14] != 0) {
    piVar1 = (int *)(param_1[0x14] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xd);
    }
  }
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar5 = 0;
    lVar7 = param_1[0x15];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x6c));
  }
  puVar6 = (undefined8 *)param_1[0x16];
  if (puVar6 != param_1 + 0x17 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  if (param_1[8] != 0) {
    piVar1 = (int *)(param_1[8] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 1);
    }
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar5 = 0;
    lVar7 = param_1[9];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xc));
  }
  puVar6 = (undefined8 *)param_1[10];
  if (puVar6 != param_1 + 0xb && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  return param_1;
}



/* Entry: 109aeb88c; end: 109aec0cf;  */

void FUN_109aeb88c(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,
                  undefined8 param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  code *pcVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  bool bVar14;
  uint uVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined4 auStack_1e0 [2];
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  int *piStack_1b8;
  int *piStack_1b0;
  int *piStack_1a8;
  int *piStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  long alStack_178 [2];
  int *piStack_168;
  int *piStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar2 = 3;
  if ((int)param_3 < 1 || param_5 != 1) {
    uVar2 = param_5;
  }
  uVar3 = 3;
  if ((int)param_4 < 1 || param_5 != 1) {
    uVar3 = param_5;
  }
  if ((int)param_6 - 5U < 2) {
    FUN_109a8f64c(param_1,uVar2,1,param_6,0xffffffff,1,0);
    FUN_109a8f64c(param_2,uVar3,1,param_6,0xffffffff,1,0);
    if ((*param_1 & 0x1f0000) == 0x10000) {
      puVar12 = *(undefined8 **)(param_1 + 2);
      uStack_b0 = (ulong)&uStack_f0 | 8;
      uStack_e8 = puVar12[1];
      uStack_f0 = (undefined4 *)*puVar12;
      uStack_d8 = puVar12[3];
      uStack_e0 = puVar12[2];
      uStack_c8 = puVar12[5];
      uStack_d0 = puVar12[4];
      lStack_b8 = puVar12[7];
      uStack_c0 = puVar12[6];
      puStack_a8 = &uStack_a0;
      uStack_a0 = 0;
      uStack_98 = 0;
      if (puVar12[7] != 0) {
        piVar1 = (int *)(puVar12[7] + 0x14);
        do {
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)puVar12 + 4) < 3) {
        uStack_a0 = *(undefined8 *)puVar12[9];
        uStack_98 = ((undefined8 *)puVar12[9])[1];
      }
      else {
        uStack_f0 = (undefined4 *)((ulong)uStack_f0 & 0xffffffff);
        func_0x000109a84868(&uStack_f0);
      }
    }
    else {
      FUN_109a8a180(&uStack_f0,param_1,0xffffffff);
    }
    if ((*param_2 & 0x1f0000) == 0x10000) {
      puVar13 = *(ulong **)(param_2 + 2);
      uStack_110 = (ulong)&uStack_150 | 8;
      uStack_148 = puVar13[1];
      uStack_150 = *puVar13;
      uStack_138 = puVar13[3];
      uStack_140 = puVar13[2];
      uStack_128 = puVar13[5];
      uStack_130 = puVar13[4];
      uStack_118 = puVar13[7];
      uStack_120 = puVar13[6];
      puStack_108 = &uStack_100;
      uStack_100 = 0;
      uStack_f8 = 0;
      if (puVar13[7] != 0) {
        piVar1 = (int *)(puVar13[7] + 0x14);
        do {
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (*(int *)((long)puVar13 + 4) < 3) {
        uStack_100 = *(undefined8 *)puVar13[9];
        uStack_f8 = ((undefined8 *)puVar13[9])[1];
      }
      else {
        uStack_150 = uStack_150 & 0xffffffff;
        func_0x000109a84868(&uStack_150);
      }
    }
    else {
      FUN_109a8a180(&uStack_150,param_2,0xffffffff);
    }
    if (((int)param_5 < 0x20) && ((param_5 & 1) != 0)) {
      uVar4 = uVar2;
      if ((int)uVar2 <= (int)uVar3) {
        uVar4 = uVar3;
      }
      FUN_10925b8c4(&piStack_168,(long)(int)(uVar4 + 1));
      if (((int)(param_4 | param_3) < 0) ||
         (param_4 + param_3 == 0 || (int)(param_4 + param_3) < 0 != SCARRY4(param_4,param_3))) {
        puVar11 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_1c8 = (undefined8 *)(puVar11 + 1);
        uStack_1c0 = 0x1f;
        *(undefined1 *)((long)puVar11 + 0x23) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x3d3e207964202626;
        *(undefined8 *)(puVar11 + 1) = 0x2030203d3e207864;
        *(undefined8 *)((long)puVar11 + 0x1b) = 0x30203e2079642b78;
        *(undefined8 *)((long)puVar11 + 0x13) = 0x642026262030203d;
        FUN_109ac3188(0xffffff29,&uStack_1c8,&UNK_10f59c424,&UNK_10f59c34f,0x68);
      }
      else {
        bVar14 = true;
        while( true ) {
          piVar1 = piStack_168;
          uVar4 = uVar2;
          uVar9 = param_3;
          puVar12 = &uStack_f0;
          if (!bVar14) {
            uVar4 = uVar3;
            uVar9 = param_4;
            puVar12 = &uStack_150;
          }
          if ((int)uVar4 <= (int)uVar9) break;
          piVar16 = piStack_168;
          if (uVar4 == 1) {
LAB_109aebc1c:
            *piVar16 = 1;
          }
          else {
            if (uVar4 == 3) {
              uVar20 = 0x200000001;
              if ((uVar9 != 0) && (uVar20 = 0xfffffffe00000001, uVar9 == 1)) {
                uVar20 = 0xffffffff;
              }
              piVar16 = piStack_168 + 2;
              *(undefined8 *)piStack_168 = uVar20;
              goto LAB_109aebc1c;
            }
            *piStack_168 = 1;
            if (0 < (int)uVar4) {
              _bzero(piStack_168 + 1,(ulong)uVar4 << 2);
            }
            if (0 < (int)(uVar4 + ~uVar9)) {
              iVar18 = 0;
              do {
                if (0 < (int)uVar4) {
                  iVar19 = *piVar1;
                  lVar17 = (ulong)(uVar4 + 1) - 1;
                  piVar16 = piVar1;
                  do {
                    iVar6 = *piVar16;
                    *piVar16 = iVar19;
                    iVar19 = iVar6 + piVar16[1];
                    lVar17 = lVar17 + -1;
                    piVar16 = piVar16 + 1;
                  } while (lVar17 != 0);
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 != uVar4 + ~uVar9);
            }
            if (0 < (int)uVar9) {
              uVar15 = 0;
              do {
                iVar18 = -*piVar1;
                lVar17 = (ulong)(uVar4 + 1) - 1;
                piVar16 = piVar1;
                do {
                  iVar19 = *piVar16;
                  *piVar16 = iVar18;
                  iVar18 = iVar19 - piVar16[1];
                  lVar17 = lVar17 + -1;
                  piVar16 = piVar16 + 1;
                } while (lVar17 != 0);
                uVar15 = uVar15 + 1;
              } while (uVar15 != uVar9);
            }
          }
          puVar5 = &uStack_f0;
          if (!bVar14) {
            puVar5 = &uStack_150;
          }
          uStack_1c0 = puVar5[1];
          piStack_1b8 = piVar1;
          piStack_1b0 = piVar1;
          uStack_198 = 0;
          lStack_190 = 0;
          alStack_178[0] = (long)*(int *)((long)puVar5 + 0xc) * 4;
          uStack_1c8 = (undefined8 *)0x242ff4004;
          alStack_178[1] = 4;
          piStack_1a8 = (int *)((long)piVar1 + alStack_178[0] * *(int *)(puVar5 + 1));
          auStack_1e0[0] = 0x2010000;
          uStack_1d0 = 0;
          puStack_1d8 = puVar12;
          piStack_1a0 = piStack_1a8;
          puStack_188 = &uStack_1c0;
          plStack_180 = alStack_178;
          FUN_109a41858(0x3ff0000000000000,0,&uStack_1c8,auStack_1e0,param_6);
          if (lStack_190 != 0) {
            piVar1 = (int *)(lStack_190 + 0x14);
            do {
              iVar18 = *piVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar8) {
                *piVar1 = iVar18 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_1c8);
            }
          }
          lStack_190 = 0;
          piStack_1b0 = (int *)0x0;
          piStack_1b8 = (int *)0x0;
          piStack_1a0 = (int *)0x0;
          piStack_1a8 = (int *)0x0;
          if (0 < uStack_1c8._4_4_) {
            lVar17 = 0;
            do {
              *(undefined4 *)((long)puStack_188 + lVar17 * 4) = 0;
              lVar17 = lVar17 + 1;
            } while (lVar17 < uStack_1c8._4_4_);
          }
          if (plStack_180 != alStack_178 && plStack_180 != (long *)0x0) {
            _free(plStack_180[-1]);
          }
          bVar8 = !bVar14;
          bVar14 = false;
          if (bVar8) {
            if (piStack_168 != (int *)0x0) {
              piStack_160 = piStack_168;
              __ZdlPv();
            }
            if (uStack_118 != 0) {
              piVar1 = (int *)(uStack_118 + 0x14);
              do {
                iVar18 = *piVar1;
                cVar7 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar14) {
                  *piVar1 = iVar18 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar18 + -1 == 0) {
                func_0x000109a848d4(&uStack_150);
              }
            }
            uStack_118 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            if (0 < uStack_150._4_4_) {
              lVar17 = 0;
              do {
                *(undefined4 *)(uStack_110 + lVar17 * 4) = 0;
                lVar17 = lVar17 + 1;
              } while (lVar17 < uStack_150._4_4_);
            }
            if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
              _free(puStack_108[-1]);
            }
            if (lStack_b8 != 0) {
              piVar1 = (int *)(lStack_b8 + 0x14);
              do {
                iVar18 = *piVar1;
                cVar7 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar14) {
                  *piVar1 = iVar18 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar18 + -1 == 0) {
                func_0x000109a848d4(&uStack_f0);
              }
            }
            lStack_b8 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            if (0 < uStack_f0._4_4_) {
              lVar17 = 0;
              do {
                *(undefined4 *)(uStack_b0 + lVar17 * 4) = 0;
                lVar17 = lVar17 + 1;
              } while (lVar17 < uStack_f0._4_4_);
            }
            if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
              _free(puStack_a8[-1]);
            }
            return;
          }
        }
        puVar11 = (undefined4 *)0x14;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_1c8 = (undefined8 *)(puVar11 + 1);
        *uStack_1c8 = 0x203e20657a69736b;
        uStack_1c0 = 0xd;
        *(undefined1 *)((long)puVar11 + 0x11) = 0;
        *(undefined8 *)((long)puVar11 + 9) = 0x726564726f203e20;
        FUN_109ac3188(0xffffff29,&uStack_1c8,&UNK_10f59c424,&UNK_10f59c34f,0x70);
      }
    }
    else {
      puVar11 = (undefined4 *)0x38;
      func_0x000107c2ae8c();
      *puVar11 = 1;
      uStack_1c8 = (undefined8 *)(puVar11 + 1);
      uStack_1c0 = 0x32;
      *(undefined8 *)(puVar11 + 3) = 0x20657a6973206c65;
      *(undefined8 *)(puVar11 + 1) = 0x6e72656b20656854;
      *(undefined2 *)(puVar11 + 0xd) = 0x3133;
      *(undefined1 *)((long)puVar11 + 0x36) = 0;
      *(undefined8 *)(puVar11 + 7) = 0x20646e612064646f;
      *(undefined8 *)(puVar11 + 5) = 0x206562207473756d;
      *(undefined8 *)(puVar11 + 0xb) = 0x206e616874207265;
      *(undefined8 *)(puVar11 + 9) = 0x6772616c20746f6e;
      FUN_109ac3188(0xffffff2d,&uStack_1c8,&UNK_10f59c424,&UNK_10f59c34f,0x65);
    }
  }
  else {
    puVar11 = (undefined4 *)0x28;
    func_0x000107c2ae8c();
    *puVar11 = 1;
    uStack_f0 = puVar11 + 1;
    uStack_e8 = 0x22;
    *(undefined8 *)(puVar11 + 3) = 0x204632335f564320;
    *(undefined8 *)(puVar11 + 1) = 0x3d3d20657079746b;
    *(undefined1 *)((long)puVar11 + 0x26) = 0;
    *(undefined2 *)(puVar11 + 9) = 0x4634;
    *(undefined8 *)(puVar11 + 7) = 0x365f5643203d3d20;
    *(undefined8 *)(puVar11 + 5) = 0x657079746b207c7c;
    FUN_109ac3188(0xffffff29,&uStack_f0,&UNK_10f59c424,&UNK_10f59c34f,0x5d);
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109aebfdc);
  (*pcVar10)();
}



/* Entry: 109aec0d0; end: 109aec98f;  */

void FUN_109aec0d0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,uint param_7,undefined8 param_8,undefined4 param_9
                  )

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  bool bVar12;
  long lVar13;
  uint uVar14;
  uint auStack_2d8 [2];
  ulong *puStack_2d0;
  undefined8 uStack_2c8;
  uint auStack_2c0 [2];
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [4];
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  long lStack_270;
  undefined1 *puStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [4];
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  long lStack_210;
  undefined1 *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 auStack_1e8 [2];
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  long *plStack_188;
  long alStack_180 [2];
  undefined8 uStack_170;
  undefined1 *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_3;
  FUN_109a8b904(param_3,0xffffffff);
  uVar14 = (uint)uVar10 & 7;
  uVar2 = uVar14;
  if (-1 < (int)param_5) {
    uVar2 = param_5;
  }
  FUN_109a8b004(&uStack_110,param_3,0xffffffff);
  FUN_109a8ee3c(param_4,&uStack_110,(uint)uVar10 & 0xff8 | uVar2 & 7,0xffffffff,0,0);
  auStack_248._0_4_ = 0x42ff0000;
  uStack_23c = 0;
  uStack_238 = 0;
  stack0xfffffffffffffdbc = 0;
  uVar3 = uVar2;
  if (uVar2 <= uVar14) {
    uVar3 = uVar14;
  }
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_21c = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  if (uVar3 < 6) {
    uVar3 = 5;
  }
  puStack_2b8 = (undefined8 *)auStack_248;
  lStack_210 = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  puStack_208 = auStack_240;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  auStack_2a8._0_4_ = 0x42ff0000;
  puStack_2d0 = (ulong *)auStack_2a8;
  puStack_268 = auStack_2a0;
  uStack_29c = 0;
  uStack_298 = 0;
  stack0xfffffffffffffd5c = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_27c = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  lStack_270 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  auStack_2c0[0] = 0x2010000;
  uStack_2b0 = 0;
  auStack_2d8[0] = 0x2010000;
  uStack_2c8 = 0;
  uVar14 = (uint)param_6;
  puStack_260 = &uStack_258;
  puStack_200 = &uStack_1f8;
  if ((int)param_8 < 1) {
    if (uVar3 - 5 < 2) {
      FUN_109a8f64c(auStack_2c0,3,1,uVar3,0xffffffff,1,0);
      FUN_109a8f64c(auStack_2d8,3,1,uVar3,0xffffffff,1,0);
      if ((auStack_2c0[0] & 0x1f0000) == 0x10000) {
        uStack_110 = (undefined4 *)*puStack_2b8;
        puStack_108 = (undefined1 *)puStack_2b8[1];
        uStack_f8 = puStack_2b8[3];
        uStack_100 = puStack_2b8[2];
        uStack_e8 = puStack_2b8[5];
        uStack_f0 = puStack_2b8[4];
        lStack_d8 = puStack_2b8[7];
        uStack_e0 = puStack_2b8[6];
        uStack_d0 = (ulong)&uStack_110 | 8;
        puStack_c8 = &uStack_c0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        if (puStack_2b8[7] != 0) {
          piVar1 = (int *)(puStack_2b8[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puStack_2b8 + 4) < 3) {
          uStack_c0 = *(undefined8 *)puStack_2b8[9];
          uStack_b8 = ((undefined8 *)puStack_2b8[9])[1];
        }
        else {
          uStack_110 = (undefined4 *)((ulong)uStack_110 & 0xffffffff);
          func_0x000109a84868(&uStack_110);
        }
      }
      else {
        FUN_109a8a180(&uStack_110,auStack_2c0,0xffffffff);
      }
      if ((auStack_2d8[0] & 0x1f0000) == 0x10000) {
        uStack_170 = *puStack_2d0;
        puStack_168 = (undefined1 *)puStack_2d0[1];
        uStack_158 = puStack_2d0[3];
        uStack_160 = puStack_2d0[2];
        uStack_148 = puStack_2d0[5];
        uStack_150 = puStack_2d0[4];
        uStack_138 = puStack_2d0[7];
        uStack_140 = puStack_2d0[6];
        uStack_130 = (ulong)&uStack_170 | 8;
        puStack_128 = &uStack_120;
        uStack_120 = 0;
        uStack_118 = 0;
        if (puStack_2d0[7] != 0) {
          piVar1 = (int *)(puStack_2d0[7] + 0x14);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        if (*(int *)((long)puStack_2d0 + 4) < 3) {
          uStack_120 = *(undefined8 *)puStack_2d0[9];
          uStack_118 = ((undefined8 *)puStack_2d0[9])[1];
        }
        else {
          uStack_170 = uStack_170 & 0xffffffff;
          func_0x000109a84868(&uStack_170);
        }
      }
      else {
        FUN_109a8a180(&uStack_170,auStack_2d8,0xffffffff);
      }
      if (((int)(param_7 | uVar14) < 0) || (param_7 + uVar14 != 1)) {
        puVar11 = (undefined4 *)0x28;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_1d0 = puVar11 + 1;
        uStack_1c8 = 0x20;
        *(undefined1 *)(puVar11 + 9) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x3d3e207964202626;
        *(undefined8 *)(puVar11 + 1) = 0x2030203d3e207864;
        *(undefined8 *)(puVar11 + 7) = 0x31203d3d2079642b;
        *(undefined8 *)(puVar11 + 5) = 0x7864202626203020;
        FUN_109ac3188(0xffffff29,&uStack_1d0,&UNK_10f59c3f2,&UNK_10f59c34f,0x40);
        goto LAB_109aec8c0;
      }
      bVar8 = true;
      do {
        bVar12 = bVar8;
        uVar4 = uVar14;
        puStack_1e0 = &uStack_110;
        if (!bVar12) {
          uVar4 = param_7;
          puStack_1e0 = &uStack_170;
        }
        if (uVar4 == 0) {
          uStack_a0 = 3;
          uStack_a8 = 0xa00000003;
LAB_109aec430:
        }
        else if (uVar4 == 1) {
          uStack_a0 = 1;
          uStack_a8 = 0xffffffff;
          goto LAB_109aec430;
        }
        puVar5 = &uStack_110;
        if (!bVar12) {
          puVar5 = &uStack_170;
        }
        uStack_1c8 = puVar5[1];
        uStack_1a0 = 0;
        lStack_198 = 0;
        alStack_180[0] = (long)*(int *)((long)puVar5 + 0xc) * 4;
        uStack_1d0 = (undefined4 *)0x242ff4004;
        alStack_180[1] = 4;
        puStack_1b0 = (undefined8 *)((long)&uStack_a8 + alStack_180[0] * *(int *)(puVar5 + 1));
        auStack_1e8[0] = 0x2010000;
        uStack_1d8 = 0;
        puStack_1c0 = &uStack_a8;
        puStack_1b8 = &uStack_a8;
        puStack_1a8 = puStack_1b0;
        puStack_190 = &uStack_1c8;
        plStack_188 = alStack_180;
        FUN_109a41858(0x3ff0000000000000,0,&uStack_1d0,auStack_1e8,uVar3);
        if (lStack_198 != 0) {
          piVar1 = (int *)(lStack_198 + 0x14);
          do {
            iVar6 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar6 + -1 == 0) {
            func_0x000109a848d4(&uStack_1d0);
          }
        }
        lStack_198 = 0;
        puStack_1b8 = (undefined8 *)0x0;
        puStack_1c0 = (undefined8 *)0x0;
        puStack_1a8 = (undefined8 *)0x0;
        puStack_1b0 = (undefined8 *)0x0;
        if (0 < uStack_1d0._4_4_) {
          lVar13 = 0;
          do {
            *(undefined4 *)((long)puStack_190 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < uStack_1d0._4_4_);
        }
        if (plStack_188 != alStack_180 && plStack_188 != (long *)0x0) {
          _free(plStack_188[-1]);
        }
        bVar8 = false;
      } while (bVar12);
      if (uStack_138 != 0) {
        piVar1 = (int *)(uStack_138 + 0x14);
        do {
          iVar6 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(&uStack_170);
        }
      }
      uStack_138 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      if (0 < uStack_170._4_4_) {
        lVar13 = 0;
        do {
          *(undefined4 *)(uStack_130 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < uStack_170._4_4_);
      }
      if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
        _free(puStack_128[-1]);
      }
      if (lStack_d8 != 0) {
        piVar1 = (int *)(lStack_d8 + 0x14);
        do {
          iVar6 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar6 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      lStack_d8 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      if (0 < uStack_110._4_4_) {
        lVar13 = 0;
        do {
          *(undefined4 *)(uStack_d0 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < uStack_110._4_4_);
      }
      if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        _free(puStack_c8[-1]);
      }
      goto LAB_109aec61c;
    }
  }
  else {
    FUN_109aeb88c(auStack_2c0,auStack_2d8,param_6,param_7,param_8);
LAB_109aec61c:
    if (param_1 != 1.0) {
      if (uVar14 == 0) {
        uStack_110 = (undefined4 *)CONCAT44(uStack_110._4_4_,0x2010000);
        puStack_108 = auStack_248;
        uStack_100 = 0;
        FUN_109a41858(param_1,0,auStack_248,&uStack_110,0xffffffff);
      }
      else {
        uStack_110 = (undefined4 *)CONCAT44(uStack_110._4_4_,0x2010000);
        puStack_108 = auStack_2a8;
        uStack_100 = 0;
        FUN_109a41858(param_1,0,auStack_2a8,&uStack_110,0xffffffff);
      }
    }
    uStack_100 = 0;
    uStack_110 = (undefined4 *)CONCAT44(uStack_110._4_4_,0x1010000);
    puStack_108 = auStack_248;
    uStack_160 = 0;
    uStack_170 = CONCAT44(uStack_170._4_4_,0x1010000);
    puStack_168 = auStack_2a8;
    uStack_1d0 = (undefined4 *)0xffffffffffffffff;
    FUN_109aff66c(param_2,param_3,param_4,uVar2,&uStack_110,&uStack_170,&uStack_1d0,param_9);
    if (lStack_270 != 0) {
      piVar1 = (int *)(lStack_270 + 0x14);
      do {
        iVar6 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(auStack_2a8);
      }
    }
    lStack_270 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_298 = 0;
    uStack_294 = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    if (0 < (int)auStack_2a8._4_4_) {
      lVar13 = 0;
      do {
        *(undefined4 *)(puStack_268 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)auStack_2a8._4_4_);
    }
    if (puStack_260 != &uStack_258 && puStack_260 != (undefined8 *)0x0) {
      _free(puStack_260[-1]);
    }
    if (lStack_210 != 0) {
      piVar1 = (int *)(lStack_210 + 0x14);
      do {
        iVar6 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar6 + -1 == 0) {
        func_0x000109a848d4(auStack_248);
      }
    }
    lStack_210 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    if (0 < (int)auStack_248._4_4_) {
      lVar13 = 0;
      do {
        *(undefined4 *)(puStack_208 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)auStack_248._4_4_);
    }
    if (puStack_200 != &uStack_1f8 && puStack_200 != (undefined8 *)0x0) {
      _free(puStack_200[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar11 = (undefined4 *)0x28;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  uStack_110 = puVar11 + 1;
  puStack_108 = (undefined1 *)0x22;
  *(undefined1 *)((long)puVar11 + 0x26) = 0;
  *(undefined2 *)(puVar11 + 9) = 0x4634;
  *(undefined8 *)(puVar11 + 3) = 0x204632335f564320;
  *(undefined8 *)(puVar11 + 1) = 0x3d3d20657079746b;
  *(undefined8 *)(puVar11 + 7) = 0x365f5643203d3d20;
  *(undefined8 *)(puVar11 + 5) = 0x657079746b207c7c;
  FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f59c3f2,&UNK_10f59c34f,0x3a);
LAB_109aec8c0:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109aec8c4);
  (*pcVar9)();
}



/* Entry: 109aec990; end: 109aed567;  */

uint * FUN_109aec990(double param_1,undefined8 param_2,uint *param_3,uint *param_4,uint param_5,
                    undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 **ppuVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  ulong uVar11;
  bool bVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  long *plVar16;
  int iVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  uint uStack_3b0;
  undefined4 uStack_3a0;
  int iStack_39c;
  undefined8 uStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  long lStack_368;
  undefined8 *puStack_360;
  ulong *puStack_358;
  ulong auStack_350 [2];
  undefined8 uStack_340;
  uint *puStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong *puStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined1 auStack_280 [8];
  long *plStack_278;
  uint auStack_270 [2];
  long *plStack_268;
  uint uStack_260;
  int iStack_25c;
  int aiStack_258 [12];
  long lStack_228;
  int *piStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 auStack_1f8 [2];
  undefined4 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  int *piStack_1d8;
  undefined8 uStack_1d0;
  int iStack_1c8;
  int iStack_1c4;
  int *piStack_1c0;
  undefined8 uStack_1b8;
  int iStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [16];
  int iStack_150;
  int iStack_14c;
  int aiStack_148 [12];
  long lStack_118;
  int *piStack_110;
  ulong *puStack_108;
  ulong auStack_100 [2];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined4 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  FUN_109a8b904(param_3,0xffffffff);
  uVar2 = (uint)puVar14 & 7;
  uVar3 = uVar2;
  if (-1 < (int)param_5) {
    uVar3 = param_5;
  }
  FUN_109a8b004(&uStack_260,param_3,0xffffffff);
  uStack_3b0 = (uint)puVar14 >> 3;
  uVar9 = (uStack_3b0 & 0x1ff) << 3;
  FUN_109a8ee3c(param_4,&uStack_260,uVar9 | uVar3 & 7,0xffffffff,0,0);
  uVar24 = (uint)param_6;
  if ((uVar24 | 2) == 3) {
    puStack_b0 = (undefined4 *)0x4000000000000000;
    uStack_e8 = 0;
    uStack_e4 = 0x3f800000;
    uStack_f0._0_4_ = 0;
    uStack_f0._4_4_ = 0x3f800000;
    uStack_d8 = 0;
    uStack_d4 = 0x3f800000;
    uStack_e0 = 0xc0800000;
    uStack_dc = 0x3f800000;
    uStack_c8 = 0;
    uStack_c4 = 0x40000000;
    uStack_d0 = 0;
    uStack_cc = 0x40000000;
    lStack_b8 = 0x4000000000000000;
    uStack_c0 = 0;
    uStack_bc = 0xc1000000;
    ppuVar6 = (undefined8 **)&uStack_cc;
    if (uVar24 != 3) {
      ppuVar6 = (undefined8 **)&uStack_f0;
    }
    piStack_220 = (int *)((ulong)&uStack_260 | 8);
    aiStack_258[2] = (int)ppuVar6;
    aiStack_258[3] = (int)((ulong)ppuVar6 >> 0x20);
    aiStack_258[10] = 0;
    aiStack_258[0xb] = 0;
    lStack_228 = 0;
    aiStack_258[0] = 3;
    aiStack_258[1] = 3;
    uStack_260 = 0x42ff4005;
    iStack_25c = 2;
    uStack_208 = 4;
    uStack_210 = 0xc;
    ppuVar6 = &puStack_a8;
    if (uVar24 != 3) {
      ppuVar6 = (undefined8 **)&uStack_cc;
    }
    aiStack_258[6] = (int)ppuVar6;
    aiStack_258[7] = (int)((ulong)ppuVar6 >> 0x20);
    aiStack_258[4] = aiStack_258[2];
    aiStack_258[5] = aiStack_258[3];
    aiStack_258[8] = aiStack_258[6];
    aiStack_258[9] = aiStack_258[7];
    puStack_218 = &uStack_210;
    if (param_1 != 1.0) {
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x2010000);
      uStack_2d0 = 0;
      uStack_2d8 = &uStack_260;
      FUN_109a41858(param_1,0,&uStack_260,&uStack_2e0,0xffffffff);
    }
    uStack_2d0 = 0;
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x1010000);
    uStack_340 = 0xffffffffffffffff;
    uStack_2d8 = &uStack_260;
    FUN_109afd8d0(param_2,param_3,param_4,uVar3,&uStack_2e0,&uStack_340,param_7);
    iVar17 = (int)param_4;
    if (lStack_228 != 0) {
      piVar15 = (int *)(lStack_228 + 0x14);
      do {
        iVar7 = *piVar15;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar12) {
          *piVar15 = iVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar7 + -1 == 0) {
        param_3 = &uStack_260;
        func_0x000109a848d4();
      }
    }
    if (0 < iStack_25c) {
      lVar19 = 0;
      do {
        piStack_220[lVar19] = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < iStack_25c);
    }
    bVar12 = puStack_218 == &uStack_210;
  }
  else {
    uStack_3b0 = uStack_3b0 & 0x1ff;
    uStack_260 = 0x42ff0000;
    aiStack_258[1] = 0;
    aiStack_258[2] = 0;
    iStack_25c = 0;
    aiStack_258[0] = 0;
    aiStack_258[5] = 0;
    aiStack_258[6] = 0;
    aiStack_258[3] = 0;
    aiStack_258[4] = 0;
    uVar4 = uVar3;
    if (uVar3 <= uVar2) {
      uVar4 = uVar2;
    }
    aiStack_258[9] = 0;
    aiStack_258[7] = 0;
    aiStack_258[8] = 0;
    uVar21 = 5;
    if (uVar4 < 6) {
      uVar4 = 5;
    }
    lStack_228 = 0;
    aiStack_258[10] = 0;
    aiStack_258[0xb] = 0;
    piStack_220 = aiStack_258;
    if (5 < uVar2) {
      uVar21 = 6;
    }
    uStack_210 = 0;
    uStack_208 = 0;
    uVar5 = 3;
    if (((ulong)puVar14 & 7) != 0 || 5 < (int)uVar24) {
      uVar5 = uVar21;
    }
    uStack_f0._0_4_ = 0x42ff0000;
    puStack_b0 = &uStack_e8;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_f0._4_4_ = 0;
    uStack_e8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_c4 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x2010000);
    uStack_2d0 = 0;
    uStack_340._0_4_ = 0x2010000;
    uStack_330 = 0;
    puStack_338 = (uint *)&uStack_f0;
    uStack_2d8 = &uStack_260;
    puStack_218 = &uStack_210;
    puStack_a8 = &uStack_a0;
    FUN_109aeb88c(&uStack_2e0,&uStack_340,2,0,param_6,uVar4);
    uStack_330 = 0;
    uStack_340._0_4_ = 0x1010000;
    uStack_390 = 0;
    uStack_38c = 0;
    uStack_3a0 = 0x1010000;
    iStack_150 = -1;
    iStack_14c = 0xffffffff;
    uStack_2d8 = (uint *)0x0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    puStack_338 = &uStack_260;
    uStack_398 = (uint *)&uStack_f0;
    FUN_109af8658(auStack_270,0,puVar14,uVar5 | uVar9,&uStack_340,&uStack_3a0,&iStack_150,param_7,
                  param_7,&uStack_2e0);
    uStack_330 = 0;
    uStack_340 = CONCAT44(uStack_340._4_4_,0x1010000);
    puStack_338 = (uint *)&uStack_f0;
    uStack_390 = 0;
    uStack_38c = 0;
    uStack_3a0 = 0x1010000;
    uStack_398 = &uStack_260;
    iStack_150 = -1;
    iStack_14c = 0xffffffff;
    uStack_2d8 = (uint *)0x0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    FUN_109af8658(auStack_280,0,puVar14,uVar5 | uVar9,&uStack_340,&uStack_3a0,&iStack_150,param_7,
                  param_7,&uStack_2e0);
    if ((*param_3 & 0x1f0000) == 0x10000) {
      puVar18 = *(ulong **)(param_3 + 2);
      uStack_2a0 = (ulong)&uStack_2e0 | 8;
      uStack_2d8 = (uint *)puVar18[1];
      uStack_2e0 = *puVar18;
      uStack_2c8 = puVar18[3];
      uStack_2d0 = puVar18[2];
      uStack_2b8 = puVar18[5];
      uStack_2c0 = puVar18[4];
      uStack_2a8 = puVar18[7];
      uStack_2b0 = puVar18[6];
      puStack_298 = &uStack_290;
      uStack_290 = 0;
      uStack_288 = 0;
      if (puVar18[7] != 0) {
        piVar15 = (int *)(puVar18[7] + 0x14);
        do {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar12) {
            *piVar15 = *piVar15 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      if (*(int *)((long)puVar18 + 4) < 3) {
        uStack_290 = *(ulong *)puVar18[9];
        uStack_288 = ((ulong *)puVar18[9])[1];
      }
      else {
        uStack_2e0 = uStack_2e0 & 0xffffffff;
        func_0x000109a84868(&uStack_2e0);
      }
    }
    else {
      FUN_109a8a180(&uStack_2e0,param_3,0xffffffff);
    }
    if ((*param_4 & 0x1f0000) == 0x10000) {
      puVar18 = *(ulong **)(param_4 + 2);
      uStack_300 = (ulong)&uStack_340 | 8;
      puStack_338 = (uint *)puVar18[1];
      uStack_340 = *puVar18;
      uStack_328 = puVar18[3];
      uStack_330 = puVar18[2];
      uStack_318 = puVar18[5];
      uStack_320 = puVar18[4];
      uStack_308 = puVar18[7];
      uStack_310 = puVar18[6];
      puStack_2f8 = &uStack_2f0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      if (puVar18[7] != 0) {
        piVar15 = (int *)(puVar18[7] + 0x14);
        do {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar12) {
            *piVar15 = *piVar15 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      if (*(int *)((long)puVar18 + 4) < 3) {
        uStack_2f0 = *(undefined8 *)puVar18[9];
        uStack_2e8 = ((undefined8 *)puVar18[9])[1];
      }
      else {
        uStack_340 = uStack_340 & 0xffffffff;
        func_0x000109a84868(&uStack_340);
      }
    }
    else {
      FUN_109a8a180(&uStack_340,param_4,0xffffffff);
    }
    uStack_398._0_4_ = 0xffffffff;
    uStack_398._4_4_ = 0xffffffff;
    uStack_3a0 = 0;
    iStack_39c = 0;
    plVar16 = plStack_268;
    (**(code **)(*plStack_268 + 0x18))(plStack_268,&uStack_2e0,&uStack_3a0,0,0xffffffff);
    uStack_398._0_4_ = 0xffffffff;
    uStack_398._4_4_ = 0xffffffff;
    uStack_3a0 = 0;
    iStack_39c = 0;
    (**(code **)(*plStack_278 + 0x18))(plStack_278,&uStack_2e0,&uStack_3a0,0,0xffffffff);
    uVar11 = uStack_2d0;
    uVar23 = *puStack_298;
    uVar2 = uStack_2d8._4_4_ * (uStack_3b0 + 1 << (ulong)(0xfa50U >> (ulong)(uVar2 << 1) & 3));
    iVar17 = 0;
    if ((long)(int)uVar2 != 0) {
      iVar17 = (int)(0x4000 / (ulong)(long)(int)uVar2);
    }
    uStack_3a0 = 0x42ff0000;
    if (0x4000 < uVar2) {
      iVar17 = 1;
    }
    uStack_398._4_4_ = 0;
    uStack_390 = 0;
    iStack_39c = 0;
    uStack_398._0_4_ = 0;
    uStack_384 = 0;
    uStack_380 = 0;
    uStack_38c = 0;
    uStack_388 = 0;
    uStack_374 = 0;
    uStack_37c = 0;
    uStack_378 = 0;
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_36c = 0;
    iVar7 = (int)uStack_2d8;
    if (iVar17 <= (int)uStack_2d8) {
      iVar7 = iVar17;
    }
    puStack_360 = &uStack_398;
    auStack_350[0] = 0;
    auStack_350[1] = 0;
    iStack_150 = iVar7 + -1 + aiStack_258[0];
    iStack_14c = uStack_2d8._4_4_;
    puStack_358 = auStack_350;
    FUN_109a83fd0(&uStack_3a0,2,&iStack_150,uVar5 | uVar9);
    iStack_1b0 = aiStack_258[0] + iVar7 + -1;
    iStack_150 = 0x42ff0000;
    piStack_110 = aiStack_148;
    aiStack_148[1] = 0;
    aiStack_148[2] = 0;
    iStack_14c = 0;
    aiStack_148[0] = 0;
    aiStack_148[5] = 0;
    aiStack_148[6] = 0;
    aiStack_148[3] = 0;
    aiStack_148[4] = 0;
    aiStack_148[9] = 0;
    aiStack_148[7] = 0;
    aiStack_148[8] = 0;
    lStack_118 = 0;
    aiStack_148[10] = 0;
    aiStack_148[0xb] = 0;
    auStack_100[1] = 0;
    auStack_100[0] = 0;
    iStack_1ac = uStack_2d8._4_4_;
    iVar17 = 2;
    puStack_108 = auStack_100;
    FUN_109a83fd0(&iStack_150,2,&iStack_1b0,uVar5 | uVar9);
    if (0 < (int)uStack_2d8) {
      iVar22 = 0;
      lVar19 = uVar11 + uVar23 * (long)(int)plVar16;
      do {
        (**(code **)(*plStack_268 + 0x20))
                  (plStack_268,lVar19,uStack_290,iVar7,CONCAT44(uStack_38c,uStack_390),
                   auStack_350[0] & 0xffffffff);
        plVar16 = plStack_278;
        lVar20 = lVar19;
        (**(code **)(*plStack_278 + 0x20))
                  (plStack_278,lVar19,uStack_290 & 0xffffffff,iVar7,
                   CONCAT44(aiStack_148[3],aiStack_148[2]),auStack_100[0] & 0xffffffff);
        iVar17 = (int)lVar20;
        iVar13 = (int)plVar16;
        if (0 < iVar13) {
          iStack_1c4 = iVar13 + iVar22;
          uStack_1e0 = 0x7fffffff80000000;
          piVar15 = &iStack_1b0;
          iStack_1c8 = iVar22;
          FUN_109a84930(piVar15,&uStack_340,&iStack_1c8,&uStack_1e0);
          uStack_1b8 = 0;
          iStack_1c8 = 0x1010000;
          uStack_1d0 = 0;
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0x1010000);
          piStack_1d8 = &iStack_150;
          auStack_1f8[0] = 0x2010000;
          uStack_1e8 = 0;
          uStack_398._0_4_ = iVar13;
          puStack_1f0 = &uStack_3a0;
          piStack_1c0 = &uStack_3a0;
          aiStack_148[0] = iVar13;
          FUN_109a91d90();
          FUN_109a293c4(&iStack_1c8,&uStack_1e0,auStack_1f8,piVar15,0xffffffff,&PTR_FUN_1132e8bd0,0,
                        0);
          iStack_1c8 = 0x2010000;
          uStack_1b8 = 0;
          piVar15 = &iStack_1c8;
          piStack_1c0 = &iStack_1b0;
          FUN_109a41858(param_1,param_2,&uStack_3a0,piVar15,uVar3);
          iVar17 = (int)piVar15;
          if (lStack_178 != 0) {
            piVar15 = (int *)(lStack_178 + 0x14);
            do {
              iVar8 = *piVar15;
              cVar10 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar12) {
                *piVar15 = iVar8 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (iVar8 + -1 == 0) {
              func_0x000109a848d4(&iStack_1b0);
            }
          }
          lStack_178 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          if (0 < iStack_1ac) {
            lVar20 = 0;
            do {
              *(undefined4 *)(lStack_170 + lVar20 * 4) = 0;
              lVar20 = lVar20 + 1;
            } while (lVar20 < iStack_1ac);
          }
          if (puStack_168 != auStack_160 && puStack_168 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_168 + -8));
          }
        }
        iVar22 = iVar13 + iVar22;
        lVar19 = lVar19 + uStack_290 * (long)iVar7;
      } while (iVar22 < (int)uStack_2d8);
    }
    if (lStack_118 != 0) {
      piVar15 = (int *)(lStack_118 + 0x14);
      do {
        iVar7 = *piVar15;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar12) {
          *piVar15 = iVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar7 + -1 == 0) {
        func_0x000109a848d4(&iStack_150);
      }
    }
    lStack_118 = 0;
    aiStack_148[4] = 0;
    aiStack_148[5] = 0;
    aiStack_148[2] = 0;
    aiStack_148[3] = 0;
    aiStack_148[8] = 0;
    aiStack_148[9] = 0;
    aiStack_148[6] = 0;
    aiStack_148[7] = 0;
    if (0 < iStack_14c) {
      lVar19 = 0;
      do {
        piStack_110[lVar19] = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < iStack_14c);
    }
    if (puStack_108 != auStack_100 && puStack_108 != (ulong *)0x0) {
      _free(puStack_108[-1]);
    }
    if (lStack_368 != 0) {
      piVar15 = (int *)(lStack_368 + 0x14);
      do {
        iVar7 = *piVar15;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar12) {
          *piVar15 = iVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar7 + -1 == 0) {
        func_0x000109a848d4(&uStack_3a0);
      }
    }
    lStack_368 = 0;
    uStack_388 = 0;
    uStack_384 = 0;
    uStack_390 = 0;
    uStack_38c = 0;
    uStack_378 = 0;
    uStack_374 = 0;
    uStack_380 = 0;
    uStack_37c = 0;
    if (0 < iStack_39c) {
      lVar19 = 0;
      do {
        *(undefined4 *)((long)puStack_360 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < iStack_39c);
    }
    if (puStack_358 != auStack_350 && puStack_358 != (ulong *)0x0) {
      _free(puStack_358[-1]);
    }
    if (uStack_308 != 0) {
      piVar15 = (int *)(uStack_308 + 0x14);
      do {
        iVar7 = *piVar15;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar12) {
          *piVar15 = iVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar7 + -1 == 0) {
        func_0x000109a848d4(&uStack_340);
      }
    }
    uStack_308 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    if (0 < uStack_340._4_4_) {
      lVar19 = 0;
      do {
        *(undefined4 *)(uStack_300 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < uStack_340._4_4_);
    }
    if (puStack_2f8 != &uStack_2f0 && puStack_2f8 != (undefined8 *)0x0) {
      _free(puStack_2f8[-1]);
    }
    if (uStack_2a8 != 0) {
      piVar15 = (int *)(uStack_2a8 + 0x14);
      do {
        iVar7 = *piVar15;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar12) {
          *piVar15 = iVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar7 + -1 == 0) {
        func_0x000109a848d4(&uStack_2e0);
      }
    }
    uStack_2a8 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    if (0 < uStack_2e0._4_4_) {
      lVar19 = 0;
      do {
        *(undefined4 *)(uStack_2a0 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < uStack_2e0._4_4_);
    }
    if (puStack_298 != &uStack_290 && puStack_298 != (ulong *)0x0) {
      _free(puStack_298[-1]);
    }
    FUN_109aed568(auStack_280);
    param_3 = auStack_270;
    FUN_109aed568();
    if (lStack_b8 != 0) {
      piVar15 = (int *)(lStack_b8 + 0x14);
      do {
        iVar7 = *piVar15;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar12) {
          *piVar15 = iVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar7 + -1 == 0) {
        param_3 = (uint *)&uStack_f0;
        func_0x000109a848d4();
      }
    }
    lStack_b8 = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    if (0 < uStack_f0._4_4_) {
      lVar19 = 0;
      do {
        puStack_b0[lVar19] = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < uStack_f0._4_4_);
    }
    if (puStack_a8 != &uStack_a0 && puStack_a8 != (undefined8 *)0x0) {
      param_3 = (uint *)puStack_a8[-1];
      _free();
    }
    if (lStack_228 != 0) {
      piVar15 = (int *)(lStack_228 + 0x14);
      do {
        iVar7 = *piVar15;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar12) {
          *piVar15 = iVar7 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar7 + -1 == 0) {
        param_3 = &uStack_260;
        func_0x000109a848d4();
      }
    }
    if (0 < iStack_25c) {
      lVar19 = 0;
      do {
        piStack_220[lVar19] = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < iStack_25c);
    }
    bVar12 = puStack_218 == &uStack_210;
  }
  lStack_228 = 0;
  aiStack_258[9] = 0;
  aiStack_258[8] = 0;
  aiStack_258[7] = 0;
  aiStack_258[6] = 0;
  aiStack_258[5] = 0;
  aiStack_258[4] = 0;
  aiStack_258[3] = 0;
  aiStack_258[2] = 0;
  if (!bVar12 && puStack_218 != (undefined8 *)0x0) {
    param_3 = (uint *)puStack_218[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_3;
  }
  ___stack_chk_fail();
  if (iVar17 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  plVar16 = *(long **)param_3;
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 1;
    do {
      iVar17 = (int)*plVar1 + -1;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *(int *)plVar1 = iVar17;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  return param_3;
}



/* Entry: 109aed568; end: 109aed5bb;  */

long * FUN_109aed568(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 109aed5bc; end: 109aed743;  */

bool FUN_109aed5bc(int *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  
  iVar1 = *param_1;
  iVar3 = param_1[1];
  if (iVar1 < 1 || iVar3 < 1) {
    return false;
  }
  uVar15 = *param_2;
  lVar10 = (long)(int)uVar15;
  uVar4 = param_2[1];
  uVar12 = (ulong)(int)uVar4;
  uVar2 = *param_3;
  lVar8 = (long)(int)uVar2;
  uVar5 = param_3[1];
  uVar6 = (ulong)(int)uVar5;
  uVar17 = 0;
  if (iVar1 <= (int)uVar15) {
    uVar17 = 2;
  }
  uVar14 = 0;
  if (iVar3 <= (int)uVar4) {
    uVar14 = 8;
  }
  uVar14 = uVar17 | uVar15 >> 0x1f | ((uint)(uVar12 >> 0x1f) & 1) << 2 | uVar14;
  uVar17 = 0;
  if (iVar1 <= (int)uVar2) {
    uVar17 = 2;
  }
  uVar15 = 0;
  if (iVar3 <= (int)uVar5) {
    uVar15 = 8;
  }
  uVar15 = uVar17 | uVar2 >> 0x1f | ((uint)(uVar6 >> 0x1f) & 1) << 2 | uVar15;
  uVar17 = uVar15 | uVar14;
  if ((uVar15 & uVar14) == 0 && uVar17 != 0) {
    lVar16 = (long)iVar1 + -1;
    uVar13 = uVar12;
    if (3 < uVar14) {
      uVar13 = 0;
      if (iVar3 <= (int)uVar4) {
        uVar13 = (long)iVar3 - 1U;
      }
      lVar11 = 0;
      if (uVar6 - uVar12 != 0) {
        lVar11 = (long)((uVar13 - uVar12) * (lVar8 - lVar10)) / (long)(uVar6 - uVar12);
      }
      lVar10 = lVar11 + lVar10;
      uVar14 = 2;
      if (lVar10 <= lVar16) {
        uVar14 = 0;
      }
      uVar14 = uVar14 | (uint)((ulong)lVar10 >> 0x3f);
    }
    uVar12 = uVar6;
    if (3 < uVar15) {
      uVar12 = 0;
      if (iVar3 <= (int)uVar5) {
        uVar12 = (long)iVar3 - 1U;
      }
      lVar11 = 0;
      if (uVar6 - uVar13 != 0) {
        lVar11 = (long)((lVar8 - lVar10) * (uVar12 - uVar6)) / (long)(uVar6 - uVar13);
      }
      lVar8 = lVar11 + lVar8;
      uVar15 = 2;
      if (lVar8 <= lVar16) {
        uVar15 = 0;
      }
      uVar15 = uVar15 | (uint)((ulong)lVar8 >> 0x3f);
    }
    lVar9 = lVar8;
    lVar11 = lVar10;
    if ((uVar15 & uVar14) == 0 && (uVar15 != 0 || uVar14 != 0)) {
      if (uVar14 != 0) {
        lVar11 = 0;
        if (uVar14 != 1) {
          lVar11 = lVar16;
        }
        lVar7 = 0;
        if (lVar8 - lVar10 != 0) {
          lVar7 = (long)((uVar12 - uVar13) * (lVar11 - lVar10)) / (lVar8 - lVar10);
        }
        uVar13 = lVar7 + uVar13;
      }
      uVar14 = 0;
      if (uVar15 != 0) {
        lVar9 = 0;
        if (uVar15 != 1) {
          lVar9 = lVar16;
        }
        lVar10 = 0;
        if (lVar8 - lVar11 != 0) {
          lVar10 = (long)((uVar12 - uVar13) * (lVar9 - lVar8)) / (lVar8 - lVar11);
        }
        uVar12 = lVar10 + uVar12;
        uVar15 = 0;
      }
    }
    *param_2 = (uint)lVar11;
    param_2[1] = (uint)uVar13;
    uVar17 = uVar15 | uVar14;
    *param_3 = (uint)lVar9;
    param_3[1] = (uint)uVar12;
  }
  return uVar17 == 0;
}



/* Entry: 109aed744; end: 109aeda77;  */

void FUN_109aed744(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 **param_5,uint param_6,undefined8 param_7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 **ppuVar19;
  undefined4 **ppuVar20;
  uint uVar21;
  undefined4 **ppuVar22;
  undefined4 **ppuVar23;
  undefined4 **ppuVar24;
  undefined4 **ppuVar25;
  bool bVar26;
  long lVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined1 *puVar35;
  undefined4 **ppuVar36;
  int iVar37;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined4 *puStack_1e8;
  undefined4 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 *puStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  puVar16 = (uint *)&uStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar13 = *(ulong **)(param_1 + 2);
    uStack_90 = (ulong)&uStack_d0 | 8;
    uStack_c8 = puVar13[1];
    uStack_d0 = *puVar13;
    uStack_b8 = puVar13[3];
    uStack_c0 = puVar13[2];
    uStack_a8 = puVar13[5];
    uStack_b0 = puVar13[4];
    uStack_98 = puVar13[7];
    uStack_a0 = puVar13[6];
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    if (puVar13[7] != 0) {
      piVar1 = (int *)(puVar13[7] + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    if (*(int *)((long)puVar13 + 4) < 3) {
      uStack_80 = *(undefined8 *)puVar13[9];
      uStack_78 = ((undefined8 *)puVar13[9])[1];
    }
    else {
      uStack_d0 = uStack_d0 & 0xffffffff;
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_1,0xffffffff);
  }
  uVar29 = 0x10;
  if ((uStack_d0 & 7) != 0) {
    uVar29 = 8;
  }
  if (param_6 != 0x10) {
    uVar29 = param_6;
  }
  ppuVar36 = (undefined4 **)(ulong)uVar29;
  if (0x7fff < (uint)param_5) {
    puVar12 = (undefined4 *)0x34;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    puStack_68 = puVar12 + 1;
    uStack_60 = 0x2c;
    *(undefined1 *)(puVar12 + 0xc) = 0;
    *(undefined8 *)(puVar12 + 3) = 0x26207373656e6b63;
    *(undefined8 *)(puVar12 + 1) = 0x696874203d3c2030;
    *(undefined8 *)(puVar12 + 7) = 0x4d203d3c20737365;
    *(undefined8 *)(puVar12 + 5) = 0x6e6b636968742026;
    *(undefined8 *)(puVar12 + 10) = 0x5353454e4b434948;
    *(undefined8 *)(puVar12 + 8) = 0x545f58414d203d3c;
    FUN_109ac3188(0xffffff29,&puStack_68,"line",&UNK_10f59c4a2,0x6c6);
LAB_109aed9f8:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x109aed9fc);
    (*pcVar9)();
  }
  if (0x10 < (uint)param_7) {
    puVar12 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    puStack_68 = puVar12 + 1;
    uStack_60 = 0x1f;
    *(undefined1 *)((long)puVar12 + 0x23) = 0;
    *(undefined8 *)(puVar12 + 3) = 0x6873202626207466;
    *(undefined8 *)(puVar12 + 1) = 0x696873203d3c2030;
    *(undefined8 *)((long)puVar12 + 0x1b) = 0x54464948535f5958;
    *(undefined8 *)((long)puVar12 + 0x13) = 0x203d3c2074666968;
    FUN_109ac3188(0xffffff29,&puStack_68,"line",&UNK_10f59c4a2,0x6c7);
    goto LAB_109aed9f8;
  }
  FUN_109a89dc8(param_4,&puStack_68,(uint)uStack_d0 & 0xfff,0);
  uStack_d8 = *param_2;
  uStack_e0 = *param_3;
  puVar10 = &uStack_d0;
  puVar14 = (uint *)&uStack_d8;
  ppuVar19 = &puStack_68;
  ppuVar24 = (undefined4 **)0x3;
  ppuVar22 = param_5;
  FUN_109aeda78();
  if (uStack_98 != 0) {
    piVar1 = (int *)(uStack_98 + 0x14);
    do {
      iVar34 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar34 + -1 == 0) {
      puVar10 = &uStack_d0;
      func_0x000109a848d4();
    }
  }
  uStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < uStack_d0._4_4_) {
    lVar27 = 0;
    do {
      *(undefined4 *)(uStack_90 + lVar27 * 4) = 0;
      lVar27 = lVar27 + 1;
    } while (lVar27 < uStack_d0._4_4_);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)puStack_88[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar14 != 0) {
    func_0x000104bd46a0();
    puStack_68 = (undefined4 *)0x0;
    uStack_60 = 0;
    do {
      iVar34 = *(int *)param_5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(param_5,0x10);
      if (bVar7) {
        *(int *)param_5 = iVar34 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar34 + -1 == 0) {
      _free(param_5[-1]);
    }
    func_0x00010567aa40(&uStack_d0);
  }
  __Unwind_Resume();
  uVar29 = (uint)&uStack_170;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = 0x10 - (int)param_7;
  uVar38 = NEON_ushl(*(undefined8 *)puVar14,CONCAT44(uVar18,uVar18),4);
  *(undefined8 *)puVar14 = uVar38;
  uVar30 = *puVar16 << (ulong)(uVar18 & 0x1f);
  uVar18 = puVar16[1] << (ulong)(uVar18 & 0x1f);
  *puVar16 = uVar30;
  puVar16[1] = uVar18;
  uVar21 = (uint)ppuVar22;
  iVar34 = (int)ppuVar36;
  puVar11 = puVar10;
  ppuVar23 = ppuVar36;
  ppuVar25 = ppuVar24;
  if ((int)uVar21 < 2) {
    if (iVar34 < 0x10) {
      if ((((int)param_7 == 0) || (iVar34 == 4)) || (iVar34 == 1)) {
        *(ulong *)puVar14 =
             CONCAT44((int)((ulong)*(undefined8 *)puVar14 >> 0x20) + 0x8000 >> 0x10,
                      (int)*(undefined8 *)puVar14 + 0x8000 >> 0x10);
        uVar18 = (int)(*puVar16 + 0x8000) >> 0x10;
        uVar30 = (int)(puVar16[1] + 0x8000) >> 0x10;
        ppuVar22 = (undefined4 **)(ulong)uVar30;
        *puVar16 = uVar18;
        puVar16[1] = uVar30;
        uVar21 = *puVar14;
        puVar15 = (uint *)(ulong)uVar21;
        uVar29 = puVar14[1];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
          iVar32 = 4;
          if (iVar34 != 1) {
            iVar32 = iVar34;
          }
          iVar33 = 8;
          if (iVar34 != 0) {
            iVar33 = iVar32;
          }
          uStack_160 = uVar18;
          uStack_15c = uVar30;
          uStack_158 = uVar21;
          uStack_154 = uVar29;
          if (iVar33 != 4 && iVar33 != 8) {
            puVar12 = (undefined4 *)0x2c;
            func_0x000107c2ae8c();
            *(undefined8 *)(puVar12 + 3) = 0x203d3d2079746976;
            *(undefined8 *)(puVar12 + 1) = 0x697463656e6e6f63;
            *puVar12 = 1;
            uStack_150 = puVar12 + 1;
            lStack_148 = 0x26;
            *(undefined1 *)((long)puVar12 + 0x2a) = 0;
            *(undefined8 *)(puVar12 + 7) = 0x746976697463656e;
            *(undefined8 *)(puVar12 + 5) = 0x6e6f63207c7c2038;
            *(undefined8 *)((long)puVar12 + 0x22) = 0x34203d3d20797469;
            FUN_109ac3188(0xffffff29,&uStack_150,&UNK_10f59c495,&UNK_10f59c4a2,0x9e);
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x109af1dc8);
            (*pcVar9)();
          }
          if ((*(uint *)((long)puVar10 + 0xc) <= uVar21 || *(uint *)((long)puVar10 + 0xc) <= uVar18)
             || (*(uint *)(puVar10 + 1) <= uVar29 || *(uint *)(puVar10 + 1) <= uVar30)) {
            uStack_150 = (undefined4 *)NEON_rev64(*(undefined8 *)puVar10[8],4);
            puVar11 = &uStack_150;
            FUN_109aed5bc(puVar11,&uStack_158,&uStack_160);
            if (((ulong)puVar11 & 1) == 0) {
              uVar18 = 0;
              uVar29 = 0;
              uVar30 = 0;
              iVar37 = 0;
              iVar34 = 0;
              iVar32 = 0;
              puVar35 = (undefined1 *)puVar10[2];
              uVar28 = (ulong)*(uint *)((long)puVar10 + 4);
              goto LAB_109af1cb4;
            }
          }
          uVar28 = (ulong)*(uint *)((long)puVar10 + 4);
          if ((int)*(uint *)((long)puVar10 + 4) < 1) {
            uVar30 = 0;
          }
          else {
            uVar30 = *(uint *)(puVar10[9] + uVar28 * 8 + -8);
          }
          uVar8 = uStack_160 - uStack_158;
          uVar29 = (int)uVar8 >> 0x1f;
          uVar21 = (uStack_15c - uStack_154 ^ uVar29) - uVar29;
          uVar18 = -uVar8;
          if (-1 < (int)uVar8) {
            uVar18 = uVar8;
          }
          puVar35 = (undefined1 *)
                    (puVar10[2] +
                     puVar10[10] *
                     (long)(int)(uStack_15c & uVar29 | uStack_154 & (uVar29 ^ 0xffffffff)) +
                    (long)(int)((uStack_160 & uVar29 | uStack_158 & (uVar29 ^ 0xffffffff)) * uVar30)
                    );
          uVar8 = -uVar21;
          if (-1 < (int)uVar21) {
            uVar8 = uVar21;
          }
          uVar21 = ((uint)puVar10[10] ^ (int)uVar21 >> 0x1f) - ((int)uVar21 >> 0x1f);
          uVar29 = uVar8;
          if ((int)uVar8 <= (int)uVar18) {
            uVar29 = 0;
          }
          uVar2 = uVar29 ^ uVar18;
          if ((int)uVar8 <= (int)uVar18) {
            uVar2 = 0;
          }
          uVar2 = uVar2 ^ uVar8;
          uVar3 = uVar2;
          if ((int)uVar8 <= (int)uVar18) {
            uVar3 = 0;
          }
          uVar3 = uVar3 ^ uVar29 ^ uVar18;
          uVar4 = uVar21;
          if ((int)uVar8 <= (int)uVar18) {
            uVar4 = 0;
          }
          uVar5 = uVar4 ^ uVar30;
          if ((int)uVar8 <= (int)uVar18) {
            uVar5 = 0;
          }
          uVar5 = uVar5 ^ uVar21;
          uVar29 = uVar5;
          if ((int)uVar8 <= (int)uVar18) {
            uVar29 = 0;
          }
          uVar29 = uVar29 ^ uVar4 ^ uVar30;
          uVar21 = uVar3 + uVar2;
          iVar32 = 0;
          if (iVar33 == 8) {
            uVar21 = uVar3;
            iVar32 = uVar3 + uVar2 * -2;
          }
          iVar37 = uVar2 * -2;
          uVar30 = uVar5 - uVar29;
          if (iVar33 == 8) {
            uVar30 = uVar5;
          }
          uVar18 = uVar21 << 1;
          iVar34 = uVar21 + 1;
LAB_109af1cb4:
          if ((int)uVar28 < 1) {
            iVar33 = 0;
          }
          else {
            iVar33 = (int)*(undefined8 *)(puVar10[9] + uVar28 * 8 + -8);
          }
          if (0 < iVar34) {
            do {
              if (iVar33 == 3) {
                *puVar35 = *(undefined1 *)ppuVar19;
                puVar35[1] = *(undefined1 *)((long)ppuVar19 + 1);
                puVar35[2] = *(undefined1 *)((long)ppuVar19 + 2);
              }
              else if (iVar33 == 1) {
                *puVar35 = *(undefined1 *)ppuVar19;
              }
              else {
                _memcpy(puVar35,ppuVar19,(long)iVar33);
              }
              uVar21 = iVar32 >> 0x1f;
              iVar32 = iVar32 + iVar37 + (uVar18 & uVar21);
              puVar35 = puVar35 + (int)((uVar30 & uVar21) + uVar29);
              iVar34 = iVar34 + -1;
            } while (iVar34 != 0);
          }
          return;
        }
        goto LAB_109aedd3c;
      }
      uStack_168 = *(undefined8 *)puVar14;
      puVar15 = (uint *)&uStack_168;
      uStack_170._0_4_ = uVar30;
      uStack_170._4_4_ = uVar18;
      uVar29 = (uint)&uStack_170;
      FUN_109af1df4(puVar10);
      uVar18 = (uint)ppuVar19;
      puVar11 = puVar10;
      ppuVar23 = ppuVar36;
      ppuVar25 = ppuVar24;
    }
    else {
      uStack_168 = *(undefined8 *)puVar14;
      puVar15 = (uint *)&uStack_168;
      uStack_170._0_4_ = uVar30;
      uStack_170._4_4_ = uVar18;
      FUN_109af232c(puVar10);
      uVar18 = (uint)ppuVar19;
      puVar11 = puVar10;
      ppuVar23 = ppuVar36;
      ppuVar25 = ppuVar24;
    }
  }
  else {
    uVar29 = *puVar14;
    uVar8 = puVar14[1];
    dVar39 = (double)(int)(uVar29 - uVar30) / 65536.0;
    dVar40 = (double)(int)(uVar18 - uVar8) / 65536.0;
    dVar41 = dVar40 * dVar40 + dVar39 * dVar39;
    uVar2 = uVar21 * 0x8000;
    puVar15 = puVar14;
    puVar17 = puVar16;
    ppuVar20 = ppuVar19;
    if (2.220446049250313e-16 < ABS(dVar41)) {
      dVar41 = ((double)(int)uVar2 + (double)((uVar21 & 1) << 0x10) * 0.5) / SQRT(dVar41);
      iVar32 = (int)(long)(double)(long)(dVar40 * dVar41);
      iVar33 = (int)(long)(double)(long)(dVar39 * dVar41);
      uStack_168 = CONCAT44(uVar8 + iVar33,uVar29 + iVar32);
      uStack_160 = uVar29 - iVar32;
      uStack_15c = uVar8 - iVar33;
      uStack_158 = uVar30 - iVar32;
      uStack_154 = uVar18 - iVar33;
      uStack_150 = (undefined4 *)CONCAT44(uVar18 + iVar33,uVar30 + iVar32);
      puVar15 = (uint *)&uStack_168;
      puVar17 = (uint *)0x4;
      ppuVar23 = (undefined4 **)0x10;
      ppuVar22 = ppuVar36;
      FUN_109aedea8(puVar10);
    }
    uVar30 = 1;
    bVar7 = true;
    do {
      bVar26 = bVar7;
      if ((uVar30 & (uint)ppuVar24) != 0) {
        puVar15 = (uint *)(ulong)*puVar14;
        ppuVar22 = ppuVar19;
        if (iVar34 < 0x10) {
          puVar15 = (uint *)(ulong)(uint)((int)(*puVar14 + 0x8000) >> 0x10);
          puVar17 = (uint *)(ulong)(uint)((int)(puVar14[1] + 0x8000) >> 0x10);
          ppuVar23 = (undefined4 **)0x1;
          puVar11 = puVar10;
          ppuVar20 = (undefined4 **)(ulong)(uint)((int)(uVar2 + 0x8000) >> 0x10);
          FUN_109aee924(puVar10);
        }
        else {
          puVar17 = (uint *)(ulong)puVar14[1];
          ppuVar23 = (undefined4 **)0xffffffff;
          puVar11 = puVar10;
          ppuVar20 = (undefined4 **)&uStack_170;
          ppuVar25 = ppuVar36;
          uStack_170._0_4_ = uVar2;
          uStack_170._4_4_ = uVar2;
          FUN_109aee654(puVar10);
        }
      }
      uVar18 = (uint)ppuVar20;
      uVar29 = (uint)puVar17;
      *(undefined8 *)puVar14 = *(undefined8 *)puVar16;
      uVar30 = 2;
      bVar7 = false;
    } while (bVar26);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
LAB_109aedd3c:
  ___stack_chk_fail();
  if ((puVar15 != (uint *)0x0) && (uVar28 = (ulong)(uVar29 - 1), 0 < (int)uVar29)) {
    uVar31 = 2;
    if (uVar18 == 0) {
      uVar31 = 3;
    }
    if (((int)ppuVar23 < 0) || (0x10 < (uint)param_7)) {
      puVar12 = (undefined4 *)0x38;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar12 + 3) = 0x6873202626207466;
      *(undefined8 *)(puVar12 + 1) = 0x696873203d3c2030;
      *puVar12 = 1;
      puStack_1e0 = puVar12 + 1;
      uStack_1d8 = 0x31;
      *(undefined2 *)(puVar12 + 0xd) = 0x30;
      *(undefined8 *)(puVar12 + 7) = 0x2054464948535f59;
      *(undefined8 *)(puVar12 + 5) = 0x58203d3c20746669;
      *(undefined8 *)(puVar12 + 0xb) = 0x203d3e207373656e;
      *(undefined8 *)(puVar12 + 9) = 0x6b63696874202626;
      FUN_109ac3188(0xffffff29,&puStack_1e0,&UNK_10f59c7c7,&UNK_10f59c4a2,0x66d);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x109aede7c);
      (*pcVar9)();
    }
    uVar30 = uVar18 ^ 1;
    if (uVar30 < uVar29) {
      if (uVar18 == 0) {
        uVar28 = 0;
      }
      lVar27 = (ulong)uVar29 - (ulong)uVar30;
      puVar16 = puVar15 + (ulong)uVar30 * 2;
      puStack_1e0 = *(undefined4 **)(puVar15 + uVar28 * 2);
      do {
        puVar12 = *(undefined4 **)puVar16;
        puStack_1e8 = puVar12;
        FUN_109aeda78(puVar11,&puStack_1e0,&puStack_1e8,ppuVar22,ppuVar23,ppuVar25,uVar31,param_7);
        uVar31 = 2;
        lVar27 = lVar27 + -1;
        puVar16 = puVar16 + 2;
        puStack_1e0 = puVar12;
      } while (lVar27 != 0);
    }
  }
  return;
}



/* Entry: 109aeda78; end: 109aedd3f;  */

void FUN_109aeda78(long param_1,uint *param_2,uint *param_3,undefined1 *param_4,undefined1 *param_5,
                  undefined1 *param_6,undefined1 *param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  bool bVar18;
  ulong uVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  long lVar26;
  int iVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 *puStack_108;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  uint uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar12 = (uint)&uStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = 0x10 - (int)param_8;
  uVar28 = NEON_ushl(*(undefined8 *)param_2,CONCAT44(uVar14,uVar14),4);
  *(undefined8 *)param_2 = uVar28;
  uVar20 = *param_3 << (ulong)(uVar14 & 0x1f);
  uVar14 = param_3[1] << (ulong)(uVar14 & 0x1f);
  *param_3 = uVar20;
  param_3[1] = uVar14;
  uVar16 = (uint)param_5;
  iVar24 = (int)param_6;
  lVar8 = param_1;
  puVar25 = param_6;
  puVar17 = param_7;
  if ((int)uVar16 < 2) {
    if (iVar24 < 0x10) {
      if ((((int)param_8 == 0) || (iVar24 == 4)) || (iVar24 == 1)) {
        *(ulong *)param_2 =
             CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + 0x8000 >> 0x10,
                      (int)*(undefined8 *)param_2 + 0x8000 >> 0x10);
        uVar14 = (int)(*param_3 + 0x8000) >> 0x10;
        uVar20 = (int)(param_3[1] + 0x8000) >> 0x10;
        param_5 = (undefined1 *)(ulong)uVar20;
        *param_3 = uVar14;
        param_3[1] = uVar20;
        uVar16 = *param_2;
        puVar11 = (uint *)(ulong)uVar16;
        uVar12 = param_2[1];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          iVar22 = 4;
          if (iVar24 != 1) {
            iVar22 = iVar24;
          }
          iVar23 = 8;
          if (iVar24 != 0) {
            iVar23 = iVar22;
          }
          uStack_80 = uVar14;
          uStack_7c = uVar20;
          uStack_78 = uVar16;
          uStack_74 = uVar12;
          if (iVar23 != 4 && iVar23 != 8) {
            puVar10 = (undefined4 *)0x2c;
            func_0x000107c2ae8c();
            *(undefined8 *)(puVar10 + 3) = 0x203d3d2079746976;
            *(undefined8 *)(puVar10 + 1) = 0x697463656e6e6f63;
            *puVar10 = 1;
            uStack_70 = puVar10 + 1;
            lStack_68 = 0x26;
            *(undefined1 *)((long)puVar10 + 0x2a) = 0;
            *(undefined8 *)(puVar10 + 7) = 0x746976697463656e;
            *(undefined8 *)(puVar10 + 5) = 0x6e6f63207c7c2038;
            *(undefined8 *)((long)puVar10 + 0x22) = 0x34203d3d20797469;
            FUN_109ac3188(0xffffff29,&uStack_70,&UNK_10f59c495,&UNK_10f59c4a2,0x9e);
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x109af1dc8);
            (*pcVar7)();
          }
          if ((*(uint *)(param_1 + 0xc) <= uVar16 || *(uint *)(param_1 + 0xc) <= uVar14) ||
             (*(uint *)(param_1 + 8) <= uVar12 || *(uint *)(param_1 + 8) <= uVar20)) {
            uStack_70 = (undefined4 *)NEON_rev64(**(undefined8 **)(param_1 + 0x40),4);
            puVar9 = &uStack_70;
            FUN_109aed5bc(puVar9,&uStack_78,&uStack_80);
            if (((ulong)puVar9 & 1) == 0) {
              uVar14 = 0;
              uVar12 = 0;
              uVar20 = 0;
              iVar27 = 0;
              iVar24 = 0;
              iVar22 = 0;
              puVar25 = *(undefined1 **)(param_1 + 0x10);
              uVar19 = (ulong)*(uint *)(param_1 + 4);
              goto LAB_109af1cb4;
            }
          }
          uVar19 = (ulong)*(uint *)(param_1 + 4);
          if ((int)*(uint *)(param_1 + 4) < 1) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(uint *)(*(long *)(param_1 + 0x48) + uVar19 * 8 + -8);
          }
          uVar5 = uStack_80 - uStack_78;
          uVar12 = (int)uVar5 >> 0x1f;
          uVar16 = (uStack_7c - uStack_74 ^ uVar12) - uVar12;
          uVar14 = -uVar5;
          if (-1 < (int)uVar5) {
            uVar14 = uVar5;
          }
          puVar25 = (undefined1 *)
                    (*(long *)(param_1 + 0x10) +
                     *(long *)(param_1 + 0x50) *
                     (long)(int)(uStack_7c & uVar12 | uStack_74 & (uVar12 ^ 0xffffffff)) +
                    (long)(int)((uStack_80 & uVar12 | uStack_78 & (uVar12 ^ 0xffffffff)) * uVar20));
          uVar5 = -uVar16;
          if (-1 < (int)uVar16) {
            uVar5 = uVar16;
          }
          uVar16 = ((uint)*(long *)(param_1 + 0x50) ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f);
          uVar12 = uVar5;
          if ((int)uVar5 <= (int)uVar14) {
            uVar12 = 0;
          }
          uVar1 = uVar12 ^ uVar14;
          if ((int)uVar5 <= (int)uVar14) {
            uVar1 = 0;
          }
          uVar1 = uVar1 ^ uVar5;
          uVar2 = uVar1;
          if ((int)uVar5 <= (int)uVar14) {
            uVar2 = 0;
          }
          uVar2 = uVar2 ^ uVar12 ^ uVar14;
          uVar3 = uVar16;
          if ((int)uVar5 <= (int)uVar14) {
            uVar3 = 0;
          }
          uVar4 = uVar3 ^ uVar20;
          if ((int)uVar5 <= (int)uVar14) {
            uVar4 = 0;
          }
          uVar4 = uVar4 ^ uVar16;
          uVar12 = uVar4;
          if ((int)uVar5 <= (int)uVar14) {
            uVar12 = 0;
          }
          uVar12 = uVar12 ^ uVar3 ^ uVar20;
          uVar16 = uVar2 + uVar1;
          iVar22 = 0;
          if (iVar23 == 8) {
            uVar16 = uVar2;
            iVar22 = uVar2 + uVar1 * -2;
          }
          iVar27 = uVar1 * -2;
          uVar20 = uVar4 - uVar12;
          if (iVar23 == 8) {
            uVar20 = uVar4;
          }
          uVar14 = uVar16 << 1;
          iVar24 = uVar16 + 1;
LAB_109af1cb4:
          if ((int)uVar19 < 1) {
            iVar23 = 0;
          }
          else {
            iVar23 = (int)*(undefined8 *)(*(long *)(param_1 + 0x48) + uVar19 * 8 + -8);
          }
          if (0 < iVar24) {
            do {
              if (iVar23 == 3) {
                *puVar25 = *param_4;
                puVar25[1] = param_4[1];
                puVar25[2] = param_4[2];
              }
              else if (iVar23 == 1) {
                *puVar25 = *param_4;
              }
              else {
                _memcpy(puVar25,param_4,(long)iVar23);
              }
              uVar16 = iVar22 >> 0x1f;
              iVar22 = iVar22 + iVar27 + (uVar14 & uVar16);
              puVar25 = puVar25 + (int)((uVar20 & uVar16) + uVar12);
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
          }
          return;
        }
        goto LAB_109aedd3c;
      }
      uStack_88 = *(undefined8 *)param_2;
      puVar11 = (uint *)&uStack_88;
      uStack_90 = uVar20;
      uStack_8c = uVar14;
      uVar12 = (uint)&uStack_90;
      FUN_109af1df4(param_1);
      uVar14 = (uint)param_4;
      lVar8 = param_1;
      puVar25 = param_6;
      puVar17 = param_7;
    }
    else {
      uStack_88 = *(undefined8 *)param_2;
      puVar11 = (uint *)&uStack_88;
      uStack_90 = uVar20;
      uStack_8c = uVar14;
      FUN_109af232c(param_1);
      uVar14 = (uint)param_4;
      lVar8 = param_1;
      puVar25 = param_6;
      puVar17 = param_7;
    }
  }
  else {
    uVar12 = *param_2;
    uVar5 = param_2[1];
    dVar29 = (double)(int)(uVar12 - uVar20) / 65536.0;
    dVar30 = (double)(int)(uVar14 - uVar5) / 65536.0;
    dVar31 = dVar30 * dVar30 + dVar29 * dVar29;
    uVar1 = uVar16 * 0x8000;
    puVar11 = param_2;
    puVar13 = param_3;
    puVar15 = (uint *)param_4;
    if (2.220446049250313e-16 < ABS(dVar31)) {
      dVar31 = ((double)(int)uVar1 + (double)((uVar16 & 1) << 0x10) * 0.5) / SQRT(dVar31);
      iVar22 = (int)(long)(double)(long)(dVar30 * dVar31);
      iVar23 = (int)(long)(double)(long)(dVar29 * dVar31);
      uStack_88 = CONCAT44(uVar5 + iVar23,uVar12 + iVar22);
      uStack_80 = uVar12 - iVar22;
      uStack_7c = uVar5 - iVar23;
      uStack_78 = uVar20 - iVar22;
      uStack_74 = uVar14 - iVar23;
      uStack_70 = (undefined4 *)CONCAT44(uVar14 + iVar23,uVar20 + iVar22);
      puVar11 = (uint *)&uStack_88;
      puVar13 = (uint *)0x4;
      puVar25 = (undefined1 *)0x10;
      param_5 = param_6;
      FUN_109aedea8(param_1);
    }
    uVar20 = 1;
    bVar6 = true;
    do {
      bVar18 = bVar6;
      if ((uVar20 & (uint)param_7) != 0) {
        puVar11 = (uint *)(ulong)*param_2;
        param_5 = param_4;
        if (iVar24 < 0x10) {
          puVar11 = (uint *)(ulong)(uint)((int)(*param_2 + 0x8000) >> 0x10);
          puVar13 = (uint *)(ulong)(uint)((int)(param_2[1] + 0x8000) >> 0x10);
          puVar25 = (undefined1 *)0x1;
          lVar8 = param_1;
          puVar15 = (uint *)(ulong)(uint)((int)(uVar1 + 0x8000) >> 0x10);
          FUN_109aee924(param_1);
        }
        else {
          puVar13 = (uint *)(ulong)param_2[1];
          puVar25 = (undefined1 *)0xffffffff;
          lVar8 = param_1;
          puVar15 = &uStack_90;
          puVar17 = param_6;
          uStack_90 = uVar1;
          uStack_8c = uVar1;
          FUN_109aee654(param_1);
        }
      }
      uVar14 = (uint)puVar15;
      uVar12 = (uint)puVar13;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      uVar20 = 2;
      bVar6 = false;
    } while (bVar18);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_109aedd3c:
  ___stack_chk_fail();
  if ((puVar11 != (uint *)0x0) && (uVar19 = (ulong)(uVar12 - 1), 0 < (int)uVar12)) {
    uVar21 = 2;
    if (uVar14 == 0) {
      uVar21 = 3;
    }
    if (((int)puVar25 < 0) || (0x10 < (uint)param_8)) {
      puVar10 = (undefined4 *)0x38;
      func_0x000107c2ae8c();
      *(undefined8 *)(puVar10 + 3) = 0x6873202626207466;
      *(undefined8 *)(puVar10 + 1) = 0x696873203d3c2030;
      *puVar10 = 1;
      puStack_100 = puVar10 + 1;
      uStack_f8 = 0x31;
      *(undefined2 *)(puVar10 + 0xd) = 0x30;
      *(undefined8 *)(puVar10 + 7) = 0x2054464948535f59;
      *(undefined8 *)(puVar10 + 5) = 0x58203d3c20746669;
      *(undefined8 *)(puVar10 + 0xb) = 0x203d3e207373656e;
      *(undefined8 *)(puVar10 + 9) = 0x6b63696874202626;
      FUN_109ac3188(0xffffff29,&puStack_100,&UNK_10f59c7c7,&UNK_10f59c4a2,0x66d);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x109aede7c);
      (*pcVar7)();
    }
    uVar20 = uVar14 ^ 1;
    if (uVar20 < uVar12) {
      if (uVar14 == 0) {
        uVar19 = 0;
      }
      lVar26 = (ulong)uVar12 - (ulong)uVar20;
      puVar13 = puVar11 + (ulong)uVar20 * 2;
      puStack_100 = *(undefined4 **)(puVar11 + uVar19 * 2);
      do {
        puVar10 = *(undefined4 **)puVar13;
        puStack_108 = puVar10;
        FUN_109aeda78(lVar8,&puStack_100,&puStack_108,param_5,puVar25,puVar17,uVar21,param_8);
        uVar21 = 2;
        lVar26 = lVar26 + -1;
        puVar13 = puVar13 + 2;
        puStack_100 = puVar10;
      } while (lVar26 != 0);
    }
  }
  return;
}



/* Entry: 109aedd40; end: 109aedea7;  */

void FUN_109aedd40(undefined8 param_1,long param_2,uint param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  if (param_2 != 0) {
    uVar3 = (ulong)(param_3 - 1);
    if (0 < (int)param_3) {
      uVar4 = 2;
      if (param_4 == 0) {
        uVar4 = 3;
      }
      if (((int)param_6 < 0) || (0x10 < (uint)param_8)) {
        puVar7 = (undefined4 *)0x38;
        func_0x000107c2ae8c();
        *(undefined8 *)(puVar7 + 3) = 0x6873202626207466;
        *(undefined8 *)(puVar7 + 1) = 0x696873203d3c2030;
        *puVar7 = 1;
        puStack_70 = puVar7 + 1;
        uStack_68 = 0x31;
        *(undefined2 *)(puVar7 + 0xd) = 0x30;
        *(undefined8 *)(puVar7 + 7) = 0x2054464948535f59;
        *(undefined8 *)(puVar7 + 5) = 0x58203d3c20746669;
        *(undefined8 *)(puVar7 + 0xb) = 0x203d3e207373656e;
        *(undefined8 *)(puVar7 + 9) = 0x6b63696874202626;
        FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59c7c7,&UNK_10f59c4a2,0x66d);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109aede7c);
        (*pcVar2)();
      }
      uVar1 = param_4 ^ 1;
      if (uVar1 < param_3) {
        if (param_4 == 0) {
          uVar3 = 0;
        }
        lVar5 = (ulong)param_3 - (ulong)uVar1;
        puVar6 = (undefined8 *)(param_2 + (ulong)uVar1 * 8);
        puStack_70 = *(undefined4 **)(param_2 + uVar3 * 8);
        do {
          puVar7 = (undefined4 *)*puVar6;
          puStack_78 = puVar7;
          FUN_109aeda78(param_1,&puStack_70,&puStack_78,param_5,param_6,param_7,uVar4,param_8);
          uVar4 = 2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar6 + 1;
          puStack_70 = puVar7;
        } while (lVar5 != 0);
      }
    }
  }
  return;
}



/* Entry: 109aedea8; end: 109aee34f;  */

void FUN_109aedea8(uint *param_1,uint *param_2,uint *param_3,ulong param_4,int *param_5,
                  ulong param_6,uint *param_7)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint *****pppppuVar8;
  ulong *puVar9;
  int iVar10;
  uint *puVar11;
  undefined4 **ppuVar12;
  int iVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  bool bVar23;
  uint uVar24;
  ulong uVar25;
  uint *unaff_x21;
  uint uVar26;
  uint *unaff_x23;
  ulong uVar27;
  uint *puVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  uint ****ppppuStack_2a0;
  uint ****ppppuStack_298;
  uint ****ppppuStack_290;
  uint uStack_288;
  uint uStack_284;
  uint uStack_1e8;
  uint uStack_1e4;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 *puStack_178;
  undefined8 uStack_170;
  long lStack_158;
  ulong uStack_150;
  uint *puStack_148;
  uint *puStack_140;
  uint *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  uint uStack_104;
  long lStack_100;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  uint *puStack_e8;
  int iStack_dc;
  ulong uStack_d8;
  int iStack_d0;
  uint uStack_cc;
  ulong uStack_c8;
  ulong uStack_c0;
  uint *puStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  uint uStack_a0;
  int iStack_9c;
  uint auStack_98 [4];
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_74;
  long lStack_70;
  
  uVar26 = (uint)param_6;
  uStack_b0 = (uint)param_5;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_d0 = 0;
  if (uVar26 != 0) {
    iStack_d0 = 1 << (ulong)(uVar26 - 1 & 0x1f);
  }
  if ((int)param_1[1] < 1) {
    uStack_d8 = 0;
  }
  else {
    uStack_d8 = *(ulong *)(*(long *)(param_1 + 0x12) + (ulong)param_1[1] * 8 + -8);
  }
  uStack_cc = uVar26;
  lStack_100 = *(long *)(param_1 + 4);
  iStack_dc = (*(int **)(param_1 + 0x10))[1];
  iStack_ec = 0x8000;
  iStack_f4 = iStack_ec;
  if (0xf < (int)uStack_b0) {
    iStack_f4 = 0xffff;
  }
  iStack_f0 = **(int **)(param_1 + 0x10);
  if (0xf < (int)uStack_b0) {
    iStack_ec = 0;
  }
  uStack_ac = 0x10 - uVar26;
  uVar22 = *param_2;
  uVar27 = (ulong)uVar22;
  uVar17 = param_2[1];
  uVar25 = (ulong)uVar17;
  iVar16 = (int)param_3;
  puStack_b8 = param_1;
  puStack_e8 = param_2;
  uStack_104 = iVar16 - 1U;
  if (iVar16 < 1) {
    uVar20 = 0;
    puVar11 = param_3;
    uVar32 = param_4;
  }
  else {
    uVar31 = 0;
    uStack_c8 = (ulong)param_3 & 0xffffffff;
    unaff_x23 = param_2 + 1;
    puVar14 = (uint *)(ulong)(param_2[(ulong)(iVar16 - 1U) * 2] << (ulong)(uStack_ac & 0x1f));
    uVar29 = uVar25;
    uVar30 = uVar27;
    uVar33 = 0;
    uStack_c0 = param_4;
    iVar10 = (param_2 + (ulong)(iVar16 - 1U) * 2)[1] << (ulong)(uStack_ac & 0x1f);
    do {
      uVar26 = unaff_x23[-1];
      uVar34 = *unaff_x23;
      uVar22 = (uint)uVar29;
      uVar17 = uVar34;
      if ((int)uVar22 <= (int)uVar34) {
        uVar17 = uVar22;
      }
      uVar29 = (ulong)uVar17;
      uVar20 = (uint)uVar31;
      if ((int)uVar22 <= (int)uVar34) {
        uVar20 = uVar33;
      }
      uVar22 = (uint)uVar25;
      if ((int)(uint)uVar25 <= (int)uVar34) {
        uVar22 = uVar34;
      }
      uVar25 = (ulong)uVar22;
      uVar22 = (uint)uVar30;
      if ((int)(uint)uVar30 <= (int)uVar26) {
        uVar22 = uVar26;
      }
      uVar30 = (ulong)uVar22;
      uVar33 = (uint)uVar27;
      if ((int)uVar26 <= (int)(uint)uVar27) {
        uVar33 = uVar26;
      }
      uVar27 = (ulong)uVar33;
      uVar26 = uVar26 << (ulong)(uStack_ac & 0x1f);
      unaff_x21 = (uint *)(ulong)uVar26;
      iVar13 = uVar34 << (ulong)(uStack_ac & 0x1f);
      uVar33 = (uint)puVar14;
      param_1 = puStack_b8;
      param_4 = uStack_c0;
      if ((int)uStack_b0 < 9) {
        if (uStack_cc == 0) {
          param_2 = (uint *)(ulong)(uint)((int)uVar33 >> 0x10);
          puVar11 = (uint *)(ulong)(uint)(iVar10 >> 0x10);
          param_4 = (ulong)(uint)((int)uVar26 >> 0x10);
          param_5 = (int *)(ulong)(uint)(iVar13 >> 0x10);
          param_7 = (uint *)(ulong)uStack_b0;
          param_6 = uStack_c0;
          FUN_109af1b18();
        }
        else {
          param_2 = &uStack_a0;
          puVar11 = &uStack_a8;
          uStack_a8 = uVar26;
          iStack_a4 = iVar13;
          uStack_a0 = uVar33;
          iStack_9c = iVar10;
          FUN_109af1df4();
        }
      }
      else {
        param_2 = &uStack_a0;
        puVar11 = &uStack_a8;
        uStack_a8 = uVar26;
        iStack_a4 = iVar13;
        uStack_a0 = uVar33;
        iStack_9c = iVar10;
        FUN_109af232c();
      }
      uVar26 = (uint)param_6;
      unaff_x23 = unaff_x23 + 2;
      uVar31 = uVar31 + 1;
      puVar14 = unaff_x21;
      uVar32 = uStack_c0;
      uVar33 = uVar20;
      iVar10 = iVar13;
    } while (uStack_c8 != uVar31);
  }
  uStack_128 = (ulong)uStack_cc;
  if ((((2 < iVar16) && (-1 < (int)(uVar22 + iStack_d0))) &&
      (uVar22 = (int)uVar25 + iStack_d0 >> (uStack_cc & 0x1f), -1 < (int)uVar22)) &&
     ((int)uVar27 + iStack_d0 >> (uStack_cc & 0x1f) < iStack_dc)) {
    uVar17 = (int)(uVar17 + iStack_d0) >> (uStack_cc & 0x1f);
    if ((int)uVar17 < iStack_f0) {
      uVar31 = 0;
      if ((int)(iStack_f0 - 1U) <= (int)uVar22) {
        uVar22 = iStack_f0 - 1U;
      }
      uStack_88 = uVar17;
      uStack_84 = uVar20;
      uVar29 = 1;
      auStack_98[0] = uVar20;
      auStack_98[1] = 1;
      param_5 = *(int **)(puStack_b8 + 0x14);
      lVar21 = lStack_100 + (long)param_5 * (long)(int)uVar17;
      iVar10 = (int)uStack_d8;
      uStack_74 = uVar17;
      uStack_80 = uStack_104;
      uVar20 = uVar17;
      if ((int)uVar17 <= (int)uVar22) {
        uVar20 = uVar22;
      }
      param_1 = (uint *)0x14;
      param_2 = auStack_98;
      puVar11 = (uint *)(long)iVar10;
      param_4 = (ulong)uVar17;
      puVar14 = param_3;
      do {
        uVar33 = (uint)param_4;
        if ((((int)uStack_b0 < 0x10) || ((int)uVar33 < (int)uVar22)) || (uVar33 == uVar17)) {
          param_7 = auStack_98;
          bVar3 = true;
          do {
            bVar23 = bVar3;
            uVar26 = (uint)puVar14;
            if ((int)param_7[4] <= (int)uVar33) {
              uVar24 = *param_7;
              uVar25 = (ulong)(int)uVar24;
              unaff_x21 = puStack_e8 + uVar25 * 2;
              uVar34 = (int)(unaff_x21[1] + iStack_d0) >> (uStack_cc & 0x1f);
              unaff_x23 = (uint *)(ulong)uVar34;
              if ((int)uVar33 < (int)uVar34 || uVar26 == 0) {
                if ((int)uVar34 <= (int)uVar33) goto LAB_109aee314;
                uVar27 = 0;
              }
              else {
                uVar27 = (ulong)param_7[1];
                do {
                  puVar28 = unaff_x21;
                  iVar13 = (int)uVar25 + param_7[1];
                  iVar1 = 0;
                  if (iVar16 <= iVar13) {
                    iVar1 = iVar16;
                  }
                  uVar24 = iVar13 - iVar1;
                  uVar25 = (ulong)uVar24;
                  unaff_x21 = puStack_e8 + (long)(int)uVar24 * 2;
                  uVar34 = (int)(unaff_x21[1] + iStack_d0) >> (uStack_cc & 0x1f);
                  unaff_x23 = (uint *)(ulong)uVar34;
                  iVar13 = (int)puVar14;
                  uVar26 = iVar13 - 1;
                  puVar14 = (uint *)(ulong)uVar26;
                } while ((int)uVar34 <= (int)uVar33 && iVar13 != 1);
                if ((int)uVar34 <= (int)uVar33) goto LAB_109aee314;
                uVar27 = (ulong)*puVar28;
              }
              uVar26 = *unaff_x21;
              param_7[4] = uVar34;
              iVar13 = (uVar34 - uVar33) * 2;
              uVar18 = 0;
              if (iVar13 != 0) {
                uVar18 = (int)((uVar34 - uVar33) +
                              (uVar26 - (int)uVar27 << (ulong)(uStack_ac & 0x1f)) * 2) / iVar13;
              }
              param_7[2] = (int)uVar27 << (ulong)(uStack_ac & 0x1f);
              param_7[3] = uVar18;
              *param_7 = uVar24;
            }
            param_7 = auStack_98 + 5;
            bVar3 = false;
          } while (bVar23);
        }
        uVar26 = (uint)puVar14;
        lVar4 = uVar29 * 5;
        uVar29 = (ulong)((uint)uVar29 ^
                        (uint)((int)auStack_98[lVar4 + 2] < (int)auStack_98[uVar31 * 5 + 2]));
        uVar31 = (ulong)((uint)uVar31 ^
                        (uint)((int)auStack_98[lVar4 + 2] < (int)auStack_98[uVar31 * 5 + 2]));
        param_7 = param_2 + uVar31 * 5;
        uVar34 = auStack_98[uVar31 * 5 + 2];
        uVar24 = auStack_98[uVar29 * 5 + 2];
        if ((-1 < (int)uVar33) && (iVar13 = (int)(uVar24 + iStack_ec) >> 0x10, -1 < iVar13)) {
          iVar1 = uVar34 + iStack_f4;
          uVar18 = iVar1 >> 0x10;
          uVar27 = (ulong)uVar18;
          if ((int)uVar18 < iStack_dc) {
            if (iStack_dc + -1 <= iVar13) {
              iVar13 = iStack_dc + -1;
            }
            uVar27 = (ulong)(uVar18 & (iVar1 >> 0x1f ^ 0xffffffffU)) * (long)puVar11;
            if ((int)uVar27 <= iVar13 * iVar10) {
              uVar25 = lVar21 + uVar27;
              do {
                if (0 < iVar10) {
                  uVar27 = 0;
                  do {
                    *(undefined1 *)(uVar25 + uVar27) = *(undefined1 *)(uVar32 + uVar27);
                    uVar27 = uVar27 + 1;
                  } while ((uStack_d8 & 0x7fffffff) != uVar27);
                }
                uVar25 = uVar25 + (long)iVar10;
              } while (uVar25 <= (ulong)(lVar21 + (long)iVar13 * (long)iVar10));
              param_5 = *(int **)(puStack_b8 + 0x14);
            }
          }
        }
        uVar34 = auStack_98[uVar31 * 5 + 3] + uVar34;
        uVar25 = (ulong)uVar34;
        unaff_x23 = (uint *)(ulong)auStack_98[uVar29 * 5 + 3];
        uVar24 = auStack_98[uVar29 * 5 + 3] + uVar24;
        unaff_x21 = (uint *)(ulong)uVar24;
        auStack_98[uVar31 * 5 + 2] = uVar34;
        auStack_98[uVar29 * 5 + 2] = uVar24;
        lVar21 = lVar21 + (long)param_5;
        param_4 = (ulong)(uVar33 + 1);
      } while (uVar33 != uVar20);
    }
  }
LAB_109aee314:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_109aee350;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_7;
  uStack_150 = uVar27;
  puStack_148 = unaff_x23;
  puStack_140 = param_3;
  puStack_138 = unaff_x21;
  uStack_130 = uVar25;
  puStack_120 = &stack0xfffffffffffffff0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar9 = *(ulong **)(param_1 + 2);
    uStack_1a0 = (ulong)&uStack_1e0 | 8;
    uStack_1d8 = puVar9[1];
    uStack_1e0 = *puVar9;
    uStack_1c8 = puVar9[3];
    uStack_1d0 = puVar9[2];
    uStack_1b8 = puVar9[5];
    uStack_1c0 = puVar9[4];
    uStack_1a8 = puVar9[7];
    uStack_1b0 = puVar9[6];
    puStack_198 = &uStack_190;
    uStack_190 = 0;
    uStack_188 = 0;
    if (puVar9[7] != 0) {
      piVar15 = (int *)(puVar9[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = *piVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar9 + 4) < 3) {
      uStack_190 = *(undefined8 *)puVar9[9];
      uStack_188 = ((undefined8 *)puVar9[9])[1];
    }
    else {
      uStack_1e0 = uStack_1e0 & 0xffffffff;
      func_0x000109a84868(&uStack_1e0);
    }
  }
  else {
    FUN_109a8a180(&uStack_1e0);
  }
  uVar17 = 0x10;
  if ((uStack_1e0 & 7) != 0) {
    uVar17 = 8;
  }
  if (uVar26 != 0x10) {
    uVar17 = uVar26;
  }
  puVar28 = (uint *)(ulong)uVar17;
  uVar26 = (uint)param_7;
  if ((((int)uVar26 < 0x11) && (uVar22 = (uint)param_5, (int)uVar22 < 0x8000)) &&
     (-1 < (int)(uVar26 | (uint)puVar11))) {
    FUN_109a89dc8(param_4,&puStack_178,(uint)uStack_1e0 & 0xfff,0);
    if ((((int)uVar26 < 1) && ((int)uVar22 < 2)) && ((int)uVar17 < 0x10)) {
      uVar17 = *param_2;
      uVar20 = param_2[1];
      uVar22 = uVar22 >> 0x1f;
      puVar6 = &uStack_1e0;
      ppuVar12 = &puStack_178;
      FUN_109aee924();
      puVar28 = puVar14;
    }
    else {
      uVar26 = 0x10 - uVar26;
      uVar17 = *param_2 << (ulong)(uVar26 & 0x1f);
      uVar20 = param_2[1] << (ulong)(uVar26 & 0x1f);
      *param_2 = uVar17;
      param_2[1] = uVar20;
      uStack_1e8 = (uint)puVar11 << (ulong)(uVar26 & 0x1f);
      puVar6 = &uStack_1e0;
      puVar11 = &uStack_1e8;
      ppuVar12 = &puStack_178;
      piVar15 = param_5;
      uStack_1e4 = uStack_1e8;
      FUN_109aee654();
      uVar22 = (uint)piVar15;
    }
    if (uStack_1a8 != 0) {
      piVar15 = (int *)(uStack_1a8 + 0x14);
      do {
        iVar16 = *piVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar16 + -1 == 0) {
        puVar6 = &uStack_1e0;
        func_0x000109a848d4();
      }
    }
    uStack_1a8 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    if (0 < uStack_1e0._4_4_) {
      lVar21 = 0;
      do {
        *(undefined4 *)(uStack_1a0 + lVar21 * 4) = 0;
        lVar21 = lVar21 + 1;
      } while (lVar21 < uStack_1e0._4_4_);
    }
    if (puStack_198 != &uStack_190 && puStack_198 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)puStack_198[-1];
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
      return;
    }
    ___stack_chk_fail();
    if (uVar17 != 0) {
      func_0x000104bd46a0();
      puStack_178 = (undefined4 *)0x0;
      uStack_170 = 0;
      do {
        iVar16 = *param_5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_5,0x10);
        if (bVar3) {
          *param_5 = iVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar16 + -1 == 0) {
        _free(*(undefined8 *)(param_5 + -2));
      }
      func_0x00010567aa40(&uStack_1e0);
    }
    __Unwind_Resume(puVar6);
    uVar33 = MP_INT_ABS((int)*(undefined8 *)puVar11);
    uVar34 = MP_INT_ABS((int)((ulong)*(undefined8 *)puVar11 >> 0x20));
    *(ulong *)puVar11 = CONCAT44(uVar34,uVar33);
    uVar26 = uVar33;
    if (uVar33 <= uVar34) {
      uVar26 = uVar34;
    }
    iVar16 = 0x12;
    if (0xe7fff < uVar26) {
      iVar16 = 5;
    }
    iVar10 = 0x1e;
    if (0x97fff < uVar26) {
      iVar10 = iVar16;
    }
    iVar16 = 0x5a;
    if (0x27fff < uVar26) {
      iVar16 = iVar10;
    }
    ppppuStack_2a0 = (uint ****)0x0;
    ppppuStack_298 = (uint ****)0x0;
    ppppuStack_290 = (uint ****)0x0;
    FUN_1092cbef0(&ppppuStack_2a0,0);
    uVar26 = 0;
    uVar24 = 0x80000000;
    uVar18 = 0x80000000;
    do {
      uVar19 = uVar26;
      if (0x167 < (int)uVar26) {
        uVar19 = 0x168;
      }
      uStack_288 = (uint)(long)(double)(long)(((float)uVar33 *
                                               *(float *)(&UNK_10e030278 +
                                                         (ulong)(0x1c2 - uVar19) * 4) +
                                              (float)(int)uVar17) -
                                             (float)uVar34 *
                                             *(float *)(&UNK_10e030278 + (ulong)uVar19 * 4) * 0.0);
      uVar19 = (uint)(long)(double)(long)((float)uVar34 *
                                          *(float *)(&UNK_10e030278 + (ulong)uVar19 * 4) +
                                         (float)(int)uVar20 +
                                         (float)uVar33 *
                                         *(float *)(&UNK_10e030278 + (ulong)(0x1c2 - uVar19) * 4) *
                                         0.0);
      uStack_284 = uVar19;
      if (uVar24 != uStack_288 || uVar18 != uVar19) {
        if (ppppuStack_298 < ppppuStack_290) {
          *(uint *)ppppuStack_298 = uStack_288;
          *(uint *)((long)ppppuStack_298 + 4) = uVar19;
          uVar24 = uStack_288;
          uVar18 = uStack_284;
          ppppuStack_298 = ppppuStack_298 + 1;
        }
        else {
          pppppuVar8 = &ppppuStack_2a0;
          FUN_1092c78ec(pppppuVar8,&uStack_288);
          uVar24 = uStack_288;
          uVar18 = uStack_284;
          ppppuStack_298 = (uint ****)pppppuVar8;
        }
      }
      uVar26 = uVar26 + iVar16;
    } while (uVar26 - iVar16 < 0x168);
    if ((long)ppppuStack_298 - (long)ppppuStack_2a0 == 8) {
      if ((ulong)((long)ppppuStack_290 - (long)ppppuStack_2a0) < 9) {
        if ((uint *****)ppppuStack_2a0 != (uint *****)0x0) {
          ppppuStack_298 = ppppuStack_2a0;
          __ZdlPv();
          ppppuStack_2a0 = (uint ****)0x0;
          ppppuStack_298 = (uint ****)0x0;
          ppppuStack_290 = (uint ****)0x0;
        }
        uVar27 = (long)ppppuStack_290 >> 2;
        if (uVar27 < 3) {
          uVar27 = 2;
        }
        if ((uint *****)0x7ffffffffffffff7 < ppppuStack_290) {
          uVar27 = 0x1fffffffffffffff;
        }
        FUN_1092c6160(&ppppuStack_2a0,uVar27);
        *(uint *)ppppuStack_298 = uVar17;
        *(uint *)((long)ppppuStack_298 + 4) = uVar20;
        *(uint *)(ppppuStack_298 + 1) = uVar17;
        *(uint *)((long)ppppuStack_298 + 0xc) = uVar20;
        ppppuStack_298 = ppppuStack_298 + 2;
      }
      else {
        if (ppppuStack_298 != ppppuStack_2a0) {
          *(uint *)ppppuStack_2a0 = uVar17;
          *(uint *)((long)ppppuStack_2a0 + 4) = uVar20;
        }
        *(uint *)ppppuStack_298 = uVar17;
        *(uint *)((long)ppppuStack_298 + 4) = uVar20;
        ppppuStack_298 = ppppuStack_298 + 1;
      }
    }
    uVar27 = (ulong)((long)ppppuStack_298 - (long)ppppuStack_2a0) >> 3;
    if ((int)uVar22 < 0) {
      FUN_109aedea8(puVar6,ppppuStack_2a0,uVar27,ppuVar12,puVar28,0x10);
    }
    else {
      FUN_109aedd40(puVar6,ppppuStack_2a0,uVar27,0,ppuVar12,uVar22,puVar28,0x10);
    }
    if ((uint *****)ppppuStack_2a0 != (uint *****)0x0) {
      ppppuStack_298 = ppppuStack_2a0;
      __ZdlPv();
    }
    return;
  }
  puVar7 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *puVar7 = 1;
  puStack_178 = puVar7 + 1;
  uStack_170 = 0x4c;
  *(undefined8 *)(puVar7 + 7) = 0x5f58414d203d3c20;
  *(undefined8 *)(puVar7 + 5) = 0x7373656e6b636968;
  *(undefined8 *)(puVar7 + 0xb) = 0x3c20302026262053;
  *(undefined8 *)(puVar7 + 9) = 0x53454e4b43494854;
  *(undefined8 *)(puVar7 + 0xf) = 0x7466696873202626;
  *(undefined8 *)(puVar7 + 0xd) = 0x207466696873203d;
  *(undefined8 *)(puVar7 + 0x12) = 0x54464948535f5958;
  *(undefined8 *)(puVar7 + 0x10) = 0x203d3c2074666968;
  *(undefined1 *)(puVar7 + 0x14) = 0;
  *(undefined8 *)(puVar7 + 3) = 0x742026262030203d;
  *(undefined8 *)(puVar7 + 1) = 0x3e20737569646172;
  FUN_109ac3188(0xffffff29,&puStack_178,"circle",&UNK_10f59c4a2,0x713);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109aee5f8);
  (*pcVar5)();
}



/* Entry: 109aee350; end: 109aee653;  */

void FUN_109aee350(uint *param_1,int *param_2,int *param_3,undefined8 param_4,int *param_5,
                  uint param_6,ulong param_7)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int *****pppppiVar6;
  int iVar7;
  ulong *puVar8;
  int iVar9;
  undefined4 **ppuVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int ****ppppiStack_190;
  int ****ppppiStack_188;
  int ****ppppiStack_180;
  int iStack_178;
  int iStack_174;
  int iStack_d8;
  int iStack_d4;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 *puStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = param_7;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_1 + 2);
    uStack_90 = (ulong)&uStack_d0 | 8;
    uStack_c8 = puVar8[1];
    uStack_d0 = *puVar8;
    uStack_b8 = puVar8[3];
    uStack_c0 = puVar8[2];
    uStack_a8 = puVar8[5];
    uStack_b0 = puVar8[4];
    uStack_98 = puVar8[7];
    uStack_a0 = puVar8[6];
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    if (puVar8[7] != 0) {
      piVar11 = (int *)(puVar8[7] + 0x14);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = *piVar11 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_80 = *(undefined8 *)puVar8[9];
      uStack_78 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_d0 = uStack_d0 & 0xffffffff;
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_1,0xffffffff);
  }
  uVar16 = 0x10;
  if ((uStack_d0 & 7) != 0) {
    uVar16 = 8;
  }
  if (param_6 != 0x10) {
    uVar16 = param_6;
  }
  uVar20 = (ulong)uVar16;
  uVar22 = (uint)param_7;
  if ((((int)uVar22 < 0x11) && (uVar19 = (uint)param_5, (int)uVar19 < 0x8000)) &&
     (-1 < (int)(uVar22 | (uint)param_3))) {
    FUN_109a89dc8(param_4,&puStack_68,(uint)uStack_d0 & 0xfff,0);
    if ((((int)uVar22 < 1) && ((int)uVar19 < 2)) && ((int)uVar16 < 0x10)) {
      iVar7 = *param_2;
      iVar9 = param_2[1];
      uVar19 = uVar19 >> 0x1f;
      puVar4 = &uStack_d0;
      ppuVar10 = &puStack_68;
      FUN_109aee924();
      uVar20 = uVar15;
    }
    else {
      uVar22 = 0x10 - uVar22;
      iVar7 = *param_2 << (ulong)(uVar22 & 0x1f);
      iVar9 = param_2[1] << (ulong)(uVar22 & 0x1f);
      *param_2 = iVar7;
      param_2[1] = iVar9;
      iStack_d8 = (uint)param_3 << (ulong)(uVar22 & 0x1f);
      puVar4 = &uStack_d0;
      param_3 = &iStack_d8;
      ppuVar10 = &puStack_68;
      piVar11 = param_5;
      iStack_d4 = iStack_d8;
      FUN_109aee654();
      uVar19 = (uint)piVar11;
    }
    if (uStack_98 != 0) {
      piVar11 = (int *)(uStack_98 + 0x14);
      do {
        iVar12 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar12 + -1 == 0) {
        puVar4 = &uStack_d0;
        func_0x000109a848d4();
      }
    }
    uStack_98 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    if (0 < uStack_d0._4_4_) {
      lVar14 = 0;
      do {
        *(undefined4 *)(uStack_90 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < uStack_d0._4_4_);
    }
    if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)puStack_88[-1];
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    if (iVar7 != 0) {
      func_0x000104bd46a0();
      puStack_68 = (undefined4 *)0x0;
      uStack_60 = 0;
      do {
        iVar12 = *param_5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_5,0x10);
        if (bVar2) {
          *param_5 = iVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar12 + -1 == 0) {
        _free(*(undefined8 *)(param_5 + -2));
      }
      func_0x00010567aa40(&uStack_d0);
    }
    __Unwind_Resume(puVar4);
    uVar22 = MP_INT_ABS((int)*(undefined8 *)param_3);
    uVar23 = MP_INT_ABS((int)((ulong)*(undefined8 *)param_3 >> 0x20));
    *(ulong *)param_3 = CONCAT44(uVar23,uVar22);
    uVar16 = uVar22;
    if (uVar22 <= uVar23) {
      uVar16 = uVar23;
    }
    iVar12 = 0x12;
    if (0xe7fff < uVar16) {
      iVar12 = 5;
    }
    iVar13 = 0x1e;
    if (0x97fff < uVar16) {
      iVar13 = iVar12;
    }
    iVar12 = 0x5a;
    if (0x27fff < uVar16) {
      iVar12 = iVar13;
    }
    ppppiStack_190 = (int ****)0x0;
    ppppiStack_188 = (int ****)0x0;
    ppppiStack_180 = (int ****)0x0;
    FUN_1092cbef0(&ppppiStack_190,0);
    uVar16 = 0;
    iVar13 = -0x80000000;
    iVar17 = -0x80000000;
    do {
      uVar21 = uVar16;
      if (0x167 < (int)uVar16) {
        uVar21 = 0x168;
      }
      iStack_178 = (int)(long)(double)(long)(((float)uVar22 *
                                              *(float *)(&UNK_10e030278 +
                                                        (ulong)(0x1c2 - uVar21) * 4) + (float)iVar7)
                                            - (float)uVar23 *
                                              *(float *)(&UNK_10e030278 + (ulong)uVar21 * 4) * 0.0);
      iVar18 = (int)(long)(double)(long)((float)uVar23 *
                                         *(float *)(&UNK_10e030278 + (ulong)uVar21 * 4) +
                                        (float)iVar9 +
                                        (float)uVar22 *
                                        *(float *)(&UNK_10e030278 + (ulong)(0x1c2 - uVar21) * 4) *
                                        0.0);
      iStack_174 = iVar18;
      if (iVar13 != iStack_178 || iVar17 != iVar18) {
        if (ppppiStack_188 < ppppiStack_180) {
          *(int *)ppppiStack_188 = iStack_178;
          *(int *)((long)ppppiStack_188 + 4) = iVar18;
          iVar13 = iStack_178;
          iVar17 = iStack_174;
          ppppiStack_188 = ppppiStack_188 + 1;
        }
        else {
          pppppiVar6 = &ppppiStack_190;
          FUN_1092c78ec(pppppiVar6,&iStack_178);
          iVar13 = iStack_178;
          iVar17 = iStack_174;
          ppppiStack_188 = (int ****)pppppiVar6;
        }
      }
      uVar16 = uVar16 + iVar12;
    } while (uVar16 - iVar12 < 0x168);
    if ((long)ppppiStack_188 - (long)ppppiStack_190 == 8) {
      if ((ulong)((long)ppppiStack_180 - (long)ppppiStack_190) < 9) {
        if ((int *****)ppppiStack_190 != (int *****)0x0) {
          ppppiStack_188 = ppppiStack_190;
          __ZdlPv();
          ppppiStack_190 = (int ****)0x0;
          ppppiStack_188 = (int ****)0x0;
          ppppiStack_180 = (int ****)0x0;
        }
        uVar15 = (long)ppppiStack_180 >> 2;
        if (uVar15 < 3) {
          uVar15 = 2;
        }
        if ((int *****)0x7ffffffffffffff7 < ppppiStack_180) {
          uVar15 = 0x1fffffffffffffff;
        }
        FUN_1092c6160(&ppppiStack_190,uVar15);
        *(int *)ppppiStack_188 = iVar7;
        *(int *)((long)ppppiStack_188 + 4) = iVar9;
        *(int *)(ppppiStack_188 + 1) = iVar7;
        *(int *)((long)ppppiStack_188 + 0xc) = iVar9;
        ppppiStack_188 = ppppiStack_188 + 2;
      }
      else {
        if (ppppiStack_188 != ppppiStack_190) {
          *(int *)ppppiStack_190 = iVar7;
          *(int *)((long)ppppiStack_190 + 4) = iVar9;
        }
        *(int *)ppppiStack_188 = iVar7;
        *(int *)((long)ppppiStack_188 + 4) = iVar9;
        ppppiStack_188 = ppppiStack_188 + 1;
      }
    }
    uVar15 = (ulong)((long)ppppiStack_188 - (long)ppppiStack_190) >> 3;
    if ((int)uVar19 < 0) {
      FUN_109aedea8(puVar4,ppppiStack_190,uVar15,ppuVar10,uVar20,0x10);
    }
    else {
      FUN_109aedd40(puVar4,ppppiStack_190,uVar15,0,ppuVar10,uVar19,uVar20,0x10);
    }
    if ((int *****)ppppiStack_190 != (int *****)0x0) {
      ppppiStack_188 = ppppiStack_190;
      __ZdlPv();
    }
    return;
  }
  puVar5 = (undefined4 *)0x54;
  func_0x000107c2ae8c();
  *puVar5 = 1;
  puStack_68 = puVar5 + 1;
  uStack_60 = 0x4c;
  *(undefined8 *)(puVar5 + 7) = 0x5f58414d203d3c20;
  *(undefined8 *)(puVar5 + 5) = 0x7373656e6b636968;
  *(undefined8 *)(puVar5 + 0xb) = 0x3c20302026262053;
  *(undefined8 *)(puVar5 + 9) = 0x53454e4b43494854;
  *(undefined8 *)(puVar5 + 0xf) = 0x7466696873202626;
  *(undefined8 *)(puVar5 + 0xd) = 0x207466696873203d;
  *(undefined8 *)(puVar5 + 0x12) = 0x54464948535f5958;
  *(undefined8 *)(puVar5 + 0x10) = 0x203d3c2074666968;
  *(undefined1 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 3) = 0x742026262030203d;
  *(undefined8 *)(puVar5 + 1) = 0x3e20737569646172;
  FUN_109ac3188(0xffffff29,&puStack_68,"circle",&UNK_10f59c4a2,0x713);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109aee5f8);
  (*pcVar3)();
}



/* Entry: 109aee654; end: 109aee923;  */

void FUN_109aee654(undefined8 param_1,int param_2,int param_3,undefined8 *param_4,undefined8 param_5
                  ,int param_6,undefined8 param_7)

{
  int ****ppppiVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int ***pppiStack_b0;
  int ***pppiStack_a8;
  int ***pppiStack_a0;
  int iStack_98;
  int iStack_94;
  
  uVar9 = MP_INT_ABS((int)*param_4);
  uVar10 = MP_INT_ABS((int)((ulong)*param_4 >> 0x20));
  *param_4 = CONCAT44(uVar10,uVar9);
  uVar7 = uVar9;
  if (uVar9 <= uVar10) {
    uVar7 = uVar10;
  }
  iVar2 = 0x12;
  if (0xe7fff < uVar7) {
    iVar2 = 5;
  }
  iVar3 = 0x1e;
  if (0x97fff < uVar7) {
    iVar3 = iVar2;
  }
  iVar2 = 0x5a;
  if (0x27fff < uVar7) {
    iVar2 = iVar3;
  }
  pppiStack_b0 = (int ***)0x0;
  pppiStack_a8 = (int ***)0x0;
  pppiStack_a0 = (int ***)0x0;
  FUN_1092cbef0(&pppiStack_b0,0);
  uVar7 = 0;
  iVar3 = -0x80000000;
  iVar5 = -0x80000000;
  do {
    uVar8 = uVar7;
    if (0x167 < (int)uVar7) {
      uVar8 = 0x168;
    }
    iStack_98 = (int)(long)(double)(long)(((float)uVar9 *
                                           *(float *)(&UNK_10e030278 + (ulong)(0x1c2 - uVar8) * 4) +
                                          (float)param_2) -
                                         (float)uVar10 *
                                         *(float *)(&UNK_10e030278 + (ulong)uVar8 * 4) * 0.0);
    iVar6 = (int)(long)(double)(long)((float)uVar10 * *(float *)(&UNK_10e030278 + (ulong)uVar8 * 4)
                                     + (float)param_3 +
                                       (float)uVar9 *
                                       *(float *)(&UNK_10e030278 + (ulong)(0x1c2 - uVar8) * 4) * 0.0
                                     );
    iStack_94 = iVar6;
    if (iVar3 != iStack_98 || iVar5 != iVar6) {
      if (pppiStack_a8 < pppiStack_a0) {
        *(int *)pppiStack_a8 = iStack_98;
        *(int *)((long)pppiStack_a8 + 4) = iVar6;
        iVar3 = iStack_98;
        iVar5 = iStack_94;
        pppiStack_a8 = pppiStack_a8 + 1;
      }
      else {
        ppppiVar1 = &pppiStack_b0;
        FUN_1092c78ec(ppppiVar1,&iStack_98);
        iVar3 = iStack_98;
        iVar5 = iStack_94;
        pppiStack_a8 = (int ***)ppppiVar1;
      }
    }
    uVar7 = uVar7 + iVar2;
  } while (uVar7 - iVar2 < 0x168);
  if ((long)pppiStack_a8 - (long)pppiStack_b0 == 8) {
    if ((ulong)((long)pppiStack_a0 - (long)pppiStack_b0) < 9) {
      if ((int ****)pppiStack_b0 != (int ****)0x0) {
        pppiStack_a8 = pppiStack_b0;
        __ZdlPv();
        pppiStack_b0 = (int ***)0x0;
        pppiStack_a8 = (int ***)0x0;
        pppiStack_a0 = (int ***)0x0;
      }
      uVar4 = (long)pppiStack_a0 >> 2;
      if (uVar4 < 3) {
        uVar4 = 2;
      }
      if ((int ****)0x7ffffffffffffff7 < pppiStack_a0) {
        uVar4 = 0x1fffffffffffffff;
      }
      FUN_1092c6160(&pppiStack_b0,uVar4);
      *(int *)pppiStack_a8 = param_2;
      *(int *)((long)pppiStack_a8 + 4) = param_3;
      *(int *)(pppiStack_a8 + 1) = param_2;
      *(int *)((long)pppiStack_a8 + 0xc) = param_3;
      pppiStack_a8 = pppiStack_a8 + 2;
    }
    else {
      if (pppiStack_a8 != pppiStack_b0) {
        *(int *)pppiStack_b0 = param_2;
        *(int *)((long)pppiStack_b0 + 4) = param_3;
      }
      *(int *)pppiStack_a8 = param_2;
      *(int *)((long)pppiStack_a8 + 4) = param_3;
      pppiStack_a8 = pppiStack_a8 + 1;
    }
  }
  uVar4 = (ulong)((long)pppiStack_a8 - (long)pppiStack_b0) >> 3;
  if (param_6 < 0) {
    FUN_109aedea8(param_1,pppiStack_b0,uVar4,param_5,param_7,0x10);
  }
  else {
    FUN_109aedd40(param_1,pppiStack_b0,uVar4,0,param_5,param_6,param_7,0x10);
  }
  if ((int ****)pppiStack_b0 != (int ****)0x0) {
    pppiStack_a8 = pppiStack_b0;
    __ZdlPv();
  }
  return;
}



/* Entry: 109aee924; end: 109aef11b;  */

void FUN_109aee924(long param_1,int param_2,int param_3,int param_4,long param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  int iVar32;
  
  uVar5 = (*(uint **)(param_1 + 0x40))[1];
  lVar21 = (long)(int)uVar5;
  if ((int)*(uint *)(param_1 + 4) < 1) {
    uVar28 = 0;
  }
  else {
    uVar28 = *(ulong *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 4) * 8 + -8);
  }
  bVar1 = false;
  uVar4 = **(uint **)(param_1 + 0x40);
  if ((param_4 <= param_2) && (param_2 < (int)(uVar5 - param_4) && param_4 <= param_3)) {
    bVar1 = param_3 < (int)(uVar4 - param_4);
  }
  if (-1 < param_4) {
    iVar32 = 0;
    iVar6 = param_4 * 2 + -1;
    lVar13 = *(long *)(param_1 + 0x50);
    lVar12 = *(long *)(param_1 + 0x10);
    uVar7 = uVar5 - 1;
    iVar27 = (int)uVar28;
    lVar25 = (long)iVar27;
    uVar28 = uVar28 & 0x7fffffff;
    iVar19 = 1;
    lVar26 = 0;
    do {
      lVar14 = param_3 - lVar26;
      lVar24 = lVar26 + param_3;
      uVar8 = param_3 - param_4;
      uVar2 = param_4 + param_3;
      uVar23 = param_2 - param_4;
      uVar22 = param_4 + param_2;
      uVar30 = param_2 - lVar26;
      uVar18 = lVar26 + param_2;
      if (bVar1) {
        lVar31 = lVar12 + lVar13 * lVar14;
        lVar14 = lVar12 + lVar13 * lVar24;
        lVar24 = (long)(int)uVar23 * (long)iVar27;
        if (param_6 != 0) {
          if ((int)lVar24 <= (int)((long)iVar27 * (long)(int)uVar22)) {
            uVar15 = lVar31 + lVar24;
            do {
              if (0 < iVar27) {
                uVar16 = 0;
                do {
                  *(undefined1 *)(uVar15 + uVar16) = *(undefined1 *)(param_5 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (uVar28 != uVar16);
              }
              uVar15 = uVar15 + lVar25;
            } while (uVar15 <= (ulong)(lVar31 + (long)iVar27 * (long)(int)uVar22));
            uVar15 = lVar14 + lVar24;
            do {
              if (0 < iVar27) {
                uVar16 = 0;
                do {
                  *(undefined1 *)(uVar15 + uVar16) = *(undefined1 *)(param_5 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (uVar28 != uVar16);
              }
              uVar15 = uVar15 + lVar25;
            } while (uVar15 <= (ulong)(lVar14 + (long)iVar27 * (long)(int)uVar22));
          }
          lVar24 = uVar30 * lVar25;
          lVar14 = uVar18 * lVar25;
          if (lVar24 - lVar14 == 0 || lVar24 < lVar14) {
            lVar17 = lVar12 + lVar13 * (int)uVar8;
            lVar31 = lVar12 + lVar13 * (int)uVar2;
            uVar18 = lVar17 + lVar24;
            do {
              if (0 < iVar27) {
                uVar30 = 0;
                do {
                  *(undefined1 *)(uVar18 + uVar30) = *(undefined1 *)(param_5 + uVar30);
                  uVar30 = uVar30 + 1;
                } while (uVar28 != uVar30);
              }
              uVar18 = uVar18 + lVar25;
            } while (uVar18 <= (ulong)(lVar17 + lVar14));
            uVar18 = lVar31 + lVar24;
            do {
              if (0 < iVar27) {
                uVar30 = 0;
                do {
                  *(undefined1 *)(uVar18 + uVar30) = *(undefined1 *)(param_5 + uVar30);
                  uVar30 = uVar30 + 1;
                } while (uVar28 != uVar30);
              }
              uVar18 = uVar18 + lVar25;
            } while (uVar18 <= (ulong)(lVar31 + lVar14));
          }
          goto LAB_109aeecac;
        }
        _memcpy(lVar31 + lVar24,param_5,lVar25);
        _memcpy(lVar14 + lVar24,param_5,lVar25);
        _memcpy(lVar31 + (long)iVar27 * (long)(int)uVar22,param_5,lVar25);
        _memcpy(lVar14 + (long)iVar27 * (long)(int)uVar22,param_5,lVar25);
        lVar14 = lVar12 + lVar13 * (int)uVar8;
        lVar24 = lVar12 + lVar13 * (int)uVar2;
        _memcpy(lVar14 + uVar30 * lVar25,param_5,lVar25);
        _memcpy(lVar24 + uVar30 * lVar25,param_5,lVar25);
        _memcpy(lVar14 + uVar18 * lVar25,param_5,lVar25);
        lVar24 = lVar24 + uVar18 * lVar25;
LAB_109aeec80:
        _memcpy(lVar24,param_5,lVar25);
      }
      else if (((((int)uVar23 < (int)uVar5) && (-1 < (int)uVar22)) && ((int)uVar8 < (int)uVar4)) &&
              (-1 < (int)uVar2)) {
        uVar29 = (uint)lVar24;
        if (param_6 == 0) {
          if ((uint)lVar14 < uVar4) {
            lVar14 = lVar12 + lVar13 * lVar14;
            if (-1 < (int)uVar23) {
              _memcpy(lVar14 + (long)(int)uVar23 * (long)iVar27,param_5,lVar25);
            }
            if ((int)uVar22 < (int)uVar5) {
              _memcpy(lVar14 + (long)(int)uVar22 * (long)iVar27,param_5,lVar25);
            }
          }
LAB_109aeedcc:
          if (uVar29 < uVar4) {
            lVar24 = lVar12 + lVar13 * lVar24;
            if (param_6 != 0) goto LAB_109aeeddc;
            if (-1 < (int)uVar23) {
              _memcpy(lVar24 + (long)(int)uVar23 * (long)iVar27,param_5,lVar25);
            }
            if ((int)uVar22 < (int)uVar5) {
              _memcpy(lVar24 + (long)(int)uVar22 * (long)iVar27,param_5,lVar25);
            }
          }
LAB_109aeee20:
          if (((long)uVar30 < lVar21) && (-1 < (long)uVar18)) {
            if (param_6 != 0) goto LAB_109aeef0c;
            if (uVar8 < uVar4) {
              lVar24 = lVar12 + lVar13 * (int)uVar8;
              if (-1 < (long)uVar30) {
                _memcpy(lVar24 + uVar30 * lVar25,param_5,lVar25);
              }
              if ((long)uVar18 < lVar21) {
                _memcpy(lVar24 + uVar18 * lVar25,param_5,lVar25);
              }
            }
            goto LAB_109aef03c;
          }
        }
        else {
          uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
          if ((int)uVar7 <= (int)uVar22) {
            uVar22 = uVar7;
          }
          if ((uint)lVar14 < uVar4) {
            if ((int)((long)(int)uVar23 * (long)iVar27) <= (int)(uVar22 * iVar27)) {
              lVar14 = lVar12 + lVar13 * lVar14;
              uVar15 = lVar14 + (long)(int)uVar23 * (long)iVar27;
              do {
                if (0 < iVar27) {
                  uVar16 = 0;
                  do {
                    *(undefined1 *)(uVar15 + uVar16) = *(undefined1 *)(param_5 + uVar16);
                    uVar16 = uVar16 + 1;
                  } while (uVar28 != uVar16);
                }
                uVar15 = uVar15 + lVar25;
              } while (uVar15 <= (ulong)(lVar14 + (long)(int)uVar22 * (long)iVar27));
              goto LAB_109aeedcc;
            }
            if (uVar29 < uVar4) goto LAB_109aeed8c;
            goto LAB_109aeee20;
          }
          if (uVar29 < uVar4) {
LAB_109aeed8c:
            lVar24 = lVar12 + lVar13 * lVar24;
LAB_109aeeddc:
            if ((int)((long)(int)uVar23 * (long)iVar27) <= (int)(uVar22 * iVar27)) {
              uVar15 = lVar24 + (long)(int)uVar23 * (long)iVar27;
              do {
                if (0 < iVar27) {
                  uVar16 = 0;
                  do {
                    *(undefined1 *)(uVar15 + uVar16) = *(undefined1 *)(param_5 + uVar16);
                    uVar16 = uVar16 + 1;
                  } while (uVar28 != uVar16);
                }
                uVar15 = uVar15 + lVar25;
              } while (uVar15 <= (ulong)(lVar24 + (long)(int)uVar22 * (long)iVar27));
            }
            goto LAB_109aeee20;
          }
          if ((lVar21 <= (long)uVar30) || ((long)uVar18 < 0)) goto LAB_109aeecac;
LAB_109aeef0c:
          uVar22 = (uint)uVar30 & ((int)(uint)uVar30 >> 0x1f ^ 0xffffffffU);
          uVar30 = (ulong)uVar22;
          uVar23 = (uint)uVar18;
          if ((int)uVar7 <= (int)(uint)uVar18) {
            uVar23 = uVar7;
          }
          uVar18 = (ulong)uVar23;
          if ((uVar8 < uVar4) && ((int)((long)(int)uVar22 * (long)iVar27) <= (int)(uVar23 * iVar27))
             ) {
            lVar24 = lVar12 + lVar13 * (int)uVar8;
            uVar15 = lVar24 + (long)(int)uVar22 * (long)iVar27;
            do {
              if (0 < iVar27) {
                uVar16 = 0;
                do {
                  *(undefined1 *)(uVar15 + uVar16) = *(undefined1 *)(param_5 + uVar16);
                  uVar16 = uVar16 + 1;
                } while (uVar28 != uVar16);
              }
              uVar15 = uVar15 + lVar25;
            } while (uVar15 <= (ulong)(lVar24 + (long)(int)uVar23 * (long)iVar27));
LAB_109aef03c:
            uVar23 = (uint)uVar18;
            uVar22 = (uint)uVar30;
            if (uVar2 < uVar4) {
              lVar24 = lVar12 + lVar13 * (ulong)uVar2;
              if (param_6 != 0) goto LAB_109aef04c;
              if (-1 < (int)uVar22) {
                _memcpy(lVar24 + (long)(int)uVar22 * (long)iVar27,param_5,lVar25);
              }
              if ((int)uVar23 < (int)uVar5) {
                lVar24 = lVar24 + (long)(int)uVar23 * (long)iVar27;
                goto LAB_109aeec80;
              }
            }
          }
          else {
            if (uVar4 <= uVar2) goto LAB_109aeecac;
            lVar24 = lVar12 + lVar13 * (ulong)uVar2;
LAB_109aef04c:
            if ((int)((long)(int)uVar22 * (long)iVar27) <= (int)(uVar23 * iVar27)) {
              uVar18 = lVar24 + (long)(int)uVar22 * (long)iVar27;
              do {
                if (0 < iVar27) {
                  uVar30 = 0;
                  do {
                    *(undefined1 *)(uVar18 + uVar30) = *(undefined1 *)(param_5 + uVar30);
                    uVar30 = uVar30 + 1;
                  } while (uVar28 != uVar30);
                }
                uVar18 = uVar18 + lVar25;
              } while (uVar18 <= (ulong)(lVar24 + (long)(int)uVar23 * (long)iVar27));
            }
          }
        }
      }
LAB_109aeecac:
      bVar9 = SCARRY4(iVar19,iVar32);
      iVar32 = iVar19 + iVar32;
      bVar10 = iVar32 < 0;
      bVar11 = iVar32 != 0;
      iVar3 = iVar6;
      if (!bVar11 || bVar10 != bVar9) {
        iVar3 = 0;
      }
      iVar20 = -2;
      if (!bVar11 || bVar10 != bVar9) {
        iVar20 = 0;
      }
      param_4 = param_4 - (uint)(bVar11 && bVar10 == bVar9);
      iVar19 = iVar19 + 2;
      iVar32 = iVar32 - iVar3;
      iVar6 = iVar20 + iVar6;
      bVar9 = lVar26 < param_4;
      lVar26 = lVar26 + 1;
    } while (bVar9);
  }
  return;
}



/* Entry: 109aef11c; end: 109aef27b;  */

void FUN_109aef11c(uint *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 != 0) && (0 < (int)param_3)) {
    if (0x10 < (uint)param_6) goto LAB_109aef1e8;
    iVar3 = 0x10;
    if ((*param_1 & 7) != 0) {
      iVar3 = 8;
    }
    if (param_5 != 0x10) {
      iVar3 = param_5;
    }
    FUN_109a89dc8(param_4,auStack_68,*param_1 & 0xfff,0);
    FUN_109aedea8(param_1,param_2,param_3,auStack_68,iVar3,param_6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109aef1e8:
  puVar2 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar2 = 1;
  puStack_78 = puVar2 + 1;
  uStack_70 = 0x1f;
  *(undefined1 *)((long)puVar2 + 0x23) = 0;
  *(undefined8 *)(puVar2 + 3) = 0x6873202626207466;
  *(undefined8 *)(puVar2 + 1) = 0x696873203d3c2030;
  *(undefined8 *)((long)puVar2 + 0x1b) = 0x54464948535f5958;
  *(undefined8 *)((long)puVar2 + 0x13) = 0x203d3c2074666968;
  FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f59c5d9,&UNK_10f59c4a2,0x760);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109aef248);
  (*pcVar1)();
}



/* Entry: 109aef27c; end: 109aef48b;  */

void FUN_109aef27c(uint *param_1,undefined8 *param_2,int *param_3,uint param_4,undefined4 **param_5,
                  ulong param_6,uint param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  undefined4 *puVar6;
  long **pplVar7;
  int iVar8;
  undefined4 **ppuVar9;
  long **pplVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 uStack_138;
  int iStack_d0;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = 0x10;
  if ((*param_1 & 7) != 0) {
    uVar15 = 8;
  }
  if ((uint)param_6 != 0x10) {
    uVar15 = (uint)param_6;
  }
  if ((((0x10 < (int)param_7) || (param_2 == (undefined8 *)0x0)) || (param_3 == (int *)0x0)) ||
     ((int)(param_7 | param_4) < 0)) {
    puVar6 = (undefined4 *)0x48;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    puStack_78 = puVar6 + 1;
    uStack_70 = 0x40;
    *(undefined8 *)(puVar6 + 3) = 0x6e20262620737470;
    *(undefined8 *)(puVar6 + 1) = 0x6e20262620737470;
    *(undefined8 *)(puVar6 + 7) = 0x26262030203d3e20;
    *(undefined8 *)(puVar6 + 5) = 0x7372756f746e6f63;
    *(undefined8 *)(puVar6 + 0xb) = 0x7320262620746669;
    *(undefined8 *)(puVar6 + 9) = 0x6873203d3c203020;
    *(undefined1 *)(puVar6 + 0x11) = 0;
    *(undefined8 *)(puVar6 + 0xf) = 0x54464948535f5958;
    *(undefined8 *)(puVar6 + 0xd) = 0x203d3c2074666968;
    FUN_109ac3188(0xffffff29,&puStack_78,&UNK_10f59c629,&UNK_10f59c4a2,0x76d);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109aef43c);
    (*pcVar4)();
  }
  pplVar10 = (long **)0x0;
  piVar13 = param_8;
  uVar11 = param_7;
  FUN_109a89dc8(param_5,&puStack_78,*param_1 & 0xfff);
  iVar12 = (int)piVar13;
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  uVar21 = (ulong)param_4;
  uStack_80 = 0;
  if ((int)param_4 < 1) {
    lVar14 = 1;
  }
  else {
    lVar14 = 0;
    piVar13 = param_3;
    uVar17 = uVar21;
    do {
      lVar14 = (long)*piVar13 + (long)(int)lVar14;
      uVar17 = uVar17 - 1;
      piVar13 = piVar13 + 1;
    } while (uVar17 != 0);
    lVar14 = lVar14 + 1;
  }
  FUN_109aef48c(&plStack_90,lVar14);
  piVar13 = param_3;
  if (0 < (int)param_4) {
    do {
      param_3 = piVar13 + 1;
      iVar12 = *param_8;
      pplVar10 = &plStack_90;
      param_5 = &puStack_78;
      param_6 = (ulong)uVar15;
      uVar11 = param_7;
      FUN_109aef53c(param_1,*param_2,*piVar13);
      uVar21 = uVar21 - 1;
      piVar13 = param_3;
      param_2 = param_2 + 1;
    } while (uVar21 != 0);
  }
  pplVar7 = &plStack_90;
  ppuVar9 = &puStack_78;
  func_0x000109aef6c4(param_1);
  plVar5 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar14 = *plVar5;
  if ((long **)((plVar5[2] - lVar14 >> 3) * -0x5555555555555555) < pplVar7) {
    if ((long **)0xaaaaaaaaaaaaaaa < pplVar7) {
      FUN_109af2fa0();
      iVar1 = 0;
      if (uVar11 != 0) {
        iVar1 = 1 << (ulong)(uVar11 - 1 & 0x1f);
      }
      iVar8 = (int)ppuVar9;
      iVar18 = *(int *)(pplVar7 + (long)iVar8 + -1);
      iVar20 = *(int *)((long)pplVar7 + (long)iVar8 * 8 + -4);
      FUN_109aef48c(pplVar10,((long)pplVar10[1] - (long)*pplVar10 >> 3) * -0x5555555555555555 +
                             (long)iVar8);
      if (0 < iVar8) {
        iStack_d0 = (int)param_3;
        uVar21 = (ulong)ppuVar9 & 0xffffffff;
        piVar13 = (int *)((long)pplVar7 + 4);
        iVar18 = iVar18 + iVar12 << (ulong)(0x10 - uVar11 & 0x1f);
        iVar20 = iVar20 + iVar1 + iStack_d0 >> (uVar11 & 0x1f);
        do {
          uStack_138 = 0;
          iVar2 = piVar13[-1] + iVar12 << (ulong)(0x10 - uVar11 & 0x1f);
          iVar8 = *piVar13 + iVar1 + iStack_d0 >> (uVar11 & 0x1f);
          if ((int)param_6 < 0x10) {
            FUN_109af1b18(plVar5,iVar18 + 0x8000 >> 0x10,iVar20,iVar2 + 0x8000 >> 0x10,iVar8,param_5
                          ,param_6);
          }
          else {
            iStack_14c = iVar20 << 0x10;
            iStack_154 = iVar8 << 0x10;
            iStack_158 = iVar2;
            iStack_150 = iVar18;
            FUN_109af232c(plVar5,&iStack_150,&iStack_158,param_5);
          }
          if (iVar8 != iVar20) {
            iStack_148 = iVar20;
            if (iVar8 <= iVar20) {
              iStack_148 = iVar8;
            }
            iStack_144 = iVar20;
            if (iVar20 <= iVar8) {
              iStack_144 = iVar8;
            }
            iVar3 = iVar8 - iVar20;
            iStack_140 = iVar18;
            if (iVar3 == 0 || iVar8 < iVar20) {
              iStack_140 = iVar2;
            }
            iStack_13c = 0;
            if (iVar3 != 0) {
              iStack_13c = (iVar2 - iVar18) / iVar3;
            }
            FUN_109af2ff8(pplVar10,&iStack_148);
          }
          piVar13 = piVar13 + 2;
          uVar21 = uVar21 - 1;
          iVar18 = iVar2;
          iVar20 = iVar8;
        } while (uVar21 != 0);
      }
      return;
    }
    lVar16 = plVar5[1];
    pplVar10 = pplVar7;
    FUN_109af2fb4();
    lVar14 = (long)pplVar7 + (lVar16 - lVar14);
    lVar19 = lVar14 - (plVar5[1] - *plVar5);
    _memcpy(lVar19);
    lVar16 = *plVar5;
    *plVar5 = lVar19;
    plVar5[1] = lVar14;
    plVar5[2] = (long)(pplVar7 + (long)pplVar10 * 3);
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 109aef48c; end: 109aef53b;  */

void FUN_109aef48c(long *param_1,ulong param_2,ulong param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,uint param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int unaff_w22;
  int *piVar10;
  int iVar11;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 uStack_98;
  
  lVar6 = *param_1;
  if ((ulong)((param_1[2] - lVar6 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_109af2fa0();
      iVar1 = 0;
      if (param_7 != 0) {
        iVar1 = 1 << (ulong)(param_7 - 1 & 0x1f);
      }
      iVar5 = (int)param_3;
      lVar6 = param_2 + (long)iVar5 * 8;
      iVar8 = *(int *)(lVar6 + -8);
      iVar11 = *(int *)(lVar6 + -4);
      FUN_109aef48c(param_4,(param_4[1] - *param_4 >> 3) * -0x5555555555555555 + (long)iVar5);
      if (0 < iVar5) {
        param_3 = param_3 & 0xffffffff;
        piVar10 = (int *)(param_2 + 4);
        iVar8 = iVar8 + param_8 << (ulong)(0x10 - param_7 & 0x1f);
        iVar11 = iVar11 + iVar1 + unaff_w22 >> (param_7 & 0x1f);
        do {
          uStack_98 = 0;
          iVar2 = piVar10[-1] + param_8 << (ulong)(0x10 - param_7 & 0x1f);
          iVar5 = *piVar10 + iVar1 + unaff_w22 >> (param_7 & 0x1f);
          if ((int)param_6 < 0x10) {
            FUN_109af1b18(param_1,iVar8 + 0x8000 >> 0x10,iVar11,iVar2 + 0x8000 >> 0x10,iVar5,param_5
                          ,param_6);
          }
          else {
            iStack_ac = iVar11 << 0x10;
            iStack_b4 = iVar5 << 0x10;
            iStack_b8 = iVar2;
            iStack_b0 = iVar8;
            FUN_109af232c(param_1,&iStack_b0,&iStack_b8,param_5);
          }
          if (iVar5 != iVar11) {
            iStack_a8 = iVar11;
            if (iVar5 <= iVar11) {
              iStack_a8 = iVar5;
            }
            iStack_a4 = iVar11;
            if (iVar11 <= iVar5) {
              iStack_a4 = iVar5;
            }
            iVar3 = iVar5 - iVar11;
            iStack_a0 = iVar8;
            if (iVar3 == 0 || iVar5 < iVar11) {
              iStack_a0 = iVar2;
            }
            iStack_9c = 0;
            if (iVar3 != 0) {
              iStack_9c = (iVar2 - iVar8) / iVar3;
            }
            FUN_109af2ff8(param_4,&iStack_a8);
          }
          piVar10 = piVar10 + 2;
          param_3 = param_3 - 1;
          iVar8 = iVar2;
          iVar11 = iVar5;
        } while (param_3 != 0);
      }
      return;
    }
    lVar7 = param_1[1];
    uVar4 = param_2;
    FUN_109af2fb4();
    lVar6 = param_2 + (lVar7 - lVar6);
    lVar9 = lVar6 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lVar7 = *param_1;
    *param_1 = lVar9;
    param_1[1] = lVar6;
    param_1[2] = param_2 + uVar4 * 0x18;
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 109aef53c; end: 109aefa17;  */

void FUN_109aef53c(undefined8 param_1,long param_2,uint param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,uint param_7,int param_8,int param_9)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  int iVar9;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  iVar3 = 0;
  if (param_7 != 0) {
    iVar3 = 1 << (ulong)(param_7 - 1 & 0x1f);
  }
  lVar1 = param_2 + (long)(int)param_3 * 8;
  iVar6 = *(int *)(lVar1 + -8);
  iVar9 = *(int *)(lVar1 + -4);
  FUN_109aef48c(param_4,(param_4[1] - *param_4 >> 3) * -0x5555555555555555 + (long)(int)param_3);
  if (0 < (int)param_3) {
    uVar8 = (ulong)param_3;
    piVar7 = (int *)(param_2 + 4);
    iVar6 = iVar6 + param_8 << (ulong)(0x10 - param_7 & 0x1f);
    iVar9 = iVar9 + iVar3 + param_9 >> (param_7 & 0x1f);
    do {
      uStack_68 = 0;
      iVar4 = piVar7[-1] + param_8 << (ulong)(0x10 - param_7 & 0x1f);
      iVar2 = *piVar7 + iVar3 + param_9 >> (param_7 & 0x1f);
      if ((int)param_6 < 0x10) {
        FUN_109af1b18(param_1,iVar6 + 0x8000 >> 0x10,iVar9,iVar4 + 0x8000 >> 0x10,iVar2,param_5,
                      param_6);
      }
      else {
        iStack_7c = iVar9 << 0x10;
        iStack_84 = iVar2 << 0x10;
        iStack_88 = iVar4;
        iStack_80 = iVar6;
        FUN_109af232c(param_1,&iStack_80,&iStack_88,param_5);
      }
      if (iVar2 != iVar9) {
        iStack_78 = iVar9;
        if (iVar2 <= iVar9) {
          iStack_78 = iVar2;
        }
        iStack_74 = iVar9;
        if (iVar9 <= iVar2) {
          iStack_74 = iVar2;
        }
        iVar5 = iVar2 - iVar9;
        iStack_70 = iVar6;
        if (iVar5 == 0 || iVar2 < iVar9) {
          iStack_70 = iVar4;
        }
        iStack_6c = 0;
        if (iVar5 != 0) {
          iStack_6c = (iVar4 - iVar6) / iVar5;
        }
        FUN_109af2ff8(param_4,&iStack_78);
      }
      piVar7 = piVar7 + 2;
      uVar8 = uVar8 - 1;
      iVar6 = iVar4;
      iVar9 = iVar2;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 109aefa18; end: 109aefd8f;  */

void FUN_109aefa18(uint *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  long lVar9;
  undefined4 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_1 + 2);
    uStack_60 = (ulong)&uStack_a0 | 8;
    uStack_98 = puVar8[1];
    uStack_a0 = *puVar8;
    uStack_88 = puVar8[3];
    uStack_90 = puVar8[2];
    uStack_78 = puVar8[5];
    uStack_80 = puVar8[4];
    uStack_68 = puVar8[7];
    uStack_70 = puVar8[6];
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    if (puVar8[7] != 0) {
      piVar1 = (int *)(puVar8[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_50 = *(undefined8 *)puVar8[9];
      uStack_48 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_a0 = uStack_a0 & 0xffffffff;
      func_0x000109a84868(&uStack_a0);
    }
  }
  else {
    FUN_109a8a180(&uStack_a0,param_1,0xffffffff);
  }
  if ((*param_2 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_2 + 2);
    uStack_c0 = (ulong)&uStack_100 | 8;
    uStack_f8 = puVar8[1];
    uStack_100 = *puVar8;
    uStack_e8 = puVar8[3];
    uStack_f0 = puVar8[2];
    uStack_d8 = puVar8[5];
    uStack_e0 = puVar8[4];
    uStack_c8 = puVar8[7];
    uStack_d0 = puVar8[6];
    puStack_b8 = &uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    if (puVar8[7] != 0) {
      piVar1 = (int *)(puVar8[7] + 0x14);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_b0 = *(undefined8 *)puVar8[9];
      uStack_a8 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_100 = uStack_100 & 0xffffffff;
      func_0x000109a84868(&uStack_100);
    }
  }
  else {
    FUN_109a8a180(&uStack_100,param_2,0xffffffff);
  }
  puVar6 = &uStack_100;
  FUN_109a89cd4(puVar6,2,4,1);
  if (-1 < (int)puVar6) {
    FUN_109aef11c(&uStack_a0,uStack_f0,
                  (int)(uStack_f8._4_4_ * (int)uStack_f8 +
                       uStack_f8._4_4_ * (int)uStack_f8 * ((uint)uStack_100 >> 3 & 0x1ff)) / 2,
                  param_3,param_4,param_5);
    if (uStack_c8 != 0) {
      piVar1 = (int *)(uStack_c8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_100);
      }
    }
    uStack_c8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (0 < uStack_100._4_4_) {
      lVar9 = 0;
      do {
        *(undefined4 *)(uStack_c0 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < uStack_100._4_4_);
    }
    if (puStack_b8 != &uStack_b0 && puStack_b8 != (undefined8 *)0x0) {
      _free(puStack_b8[-1]);
    }
    if (uStack_68 != 0) {
      piVar1 = (int *)(uStack_68 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_a0);
      }
    }
    uStack_68 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (0 < uStack_a0._4_4_) {
      lVar9 = 0;
      do {
        *(undefined4 *)(uStack_60 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < uStack_a0._4_4_);
    }
    if (puStack_58 != &uStack_50 && puStack_58 != (undefined8 *)0x0) {
      _free(puStack_58[-1]);
    }
    return;
  }
  puVar7 = (undefined4 *)0x28;
  func_0x000107c2ae8c();
  *puVar7 = 1;
  puStack_110 = puVar7 + 1;
  uStack_108 = 0x22;
  *(undefined1 *)((long)puVar7 + 0x26) = 0;
  *(undefined2 *)(puVar7 + 9) = 0x3020;
  *(undefined8 *)(puVar7 + 3) = 0x746365566b636568;
  *(undefined8 *)(puVar7 + 1) = 0x632e73746e696f70;
  *(undefined8 *)(puVar7 + 7) = 0x3d3e20295332335f;
  *(undefined8 *)(puVar7 + 5) = 0x5643202c3228726f;
  FUN_109ac3188(0xffffff29,&puStack_110,&UNK_10f59c5d9,&UNK_10f59c4a2,0x8d0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109aefd38);
  (*pcVar5)();
}



/* Entry: 109aefd90; end: 109af01ef;  */

void FUN_109aefd90(uint *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  undefined1 *puStack_9d0;
  undefined4 *puStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  int iStack_9a8;
  int iStack_9a4;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  long lStack_978;
  long lStack_970;
  undefined1 *puStack_968;
  undefined1 auStack_960 [16];
  undefined1 *puStack_950;
  ulong uStack_948;
  undefined1 auStack_940 [1056];
  undefined1 *puStack_520;
  ulong uStack_518;
  undefined1 auStack_510 [1088];
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar8 = *(ulong **)(param_1 + 2);
    uStack_90 = (ulong)&uStack_d0 | 8;
    uStack_c8 = puVar8[1];
    uStack_d0 = *puVar8;
    uStack_b8 = puVar8[3];
    uStack_c0 = puVar8[2];
    uStack_a8 = puVar8[5];
    uStack_b0 = puVar8[4];
    uStack_98 = puVar8[7];
    uStack_a0 = puVar8[6];
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_78 = 0;
    if (puVar8[7] != 0) {
      piVar1 = (int *)(puVar8[7] + 0x14);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (*(int *)((long)puVar8 + 4) < 3) {
      uStack_80 = *(undefined8 *)puVar8[9];
      uStack_78 = ((undefined8 *)puVar8[9])[1];
    }
    else {
      uStack_d0 = uStack_d0 & 0xffffffff;
      func_0x000109a84868(&uStack_d0);
    }
  }
  else {
    FUN_109a8a180(&uStack_d0,param_1,0xffffffff);
  }
  uVar5 = param_2;
  FUN_109a8de54(param_2,0xffffffff);
  iVar13 = (int)uVar5;
  if (iVar13 != 0) {
    uVar12 = (ulong)iVar13;
    puStack_520 = auStack_510;
    uStack_518 = uVar12;
    if (uVar12 < 0x89) {
      puStack_950 = auStack_940;
      puVar9 = auStack_510;
    }
    else {
      puVar9 = (undefined1 *)((long)(uVar5 << 0x20) >> 0x1d);
      if (uVar12 >> 0x3d != 0) {
        puVar9 = (undefined1 *)0xffffffffffffffff;
      }
      __Znam();
      puStack_950 = auStack_940;
      puStack_520 = puVar9;
      if (0x108 < uVar12) {
        puVar10 = (undefined1 *)((long)(uVar5 << 0x20) >> 0x1e);
        if (uVar12 >> 0x3e != 0) {
          puVar10 = (undefined1 *)0xffffffffffffffff;
        }
        __Znam();
        puStack_950 = puVar10;
      }
    }
    puVar10 = puStack_950;
    puStack_9d0 = auStack_940;
    uStack_948 = uVar12;
    if (0 < iVar13) {
      uVar12 = 0;
      do {
        FUN_109a8a180(&uStack_9b0,param_2,uVar12);
        puVar6 = &uStack_9b0;
        FUN_109a89cd4(puVar6,2,4,1);
        if ((int)puVar6 < 0) {
          puVar7 = (undefined4 *)0x24;
          func_0x000107c2ae8c();
          *puVar7 = 1;
          puStack_9c0 = puVar7 + 1;
          uStack_9b8 = 0x1d;
          *(undefined1 *)((long)puVar7 + 0x21) = 0;
          *(undefined8 *)(puVar7 + 3) = 0x2c3228726f746365;
          *(undefined8 *)(puVar7 + 1) = 0x566b636568632e70;
          *(undefined8 *)((long)puVar7 + 0x19) = 0x30203d3e20295332;
          *(undefined8 *)((long)puVar7 + 0x11) = 0x335f5643202c3228;
          FUN_109ac3188(0xffffff29,&puStack_9c0,&UNK_10f59c629,&UNK_10f59c4a2,0x8e4);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x109af014c);
          (*pcVar4)();
        }
        *(undefined8 *)(puVar9 + uVar12 * 8) = uStack_9a0;
        *(int *)(puVar10 + uVar12 * 4) =
             (int)(iStack_9a4 * iStack_9a8 +
                  iStack_9a4 * iStack_9a8 * ((uint)uStack_9b0 >> 3 & 0x1ff)) / 2;
        if (lStack_978 != 0) {
          piVar1 = (int *)(lStack_978 + 0x14);
          do {
            iVar13 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar13 + -1 == 0) {
            func_0x000109a848d4(&uStack_9b0);
          }
        }
        lStack_978 = 0;
        uStack_998 = 0;
        uStack_9a0 = 0;
        uStack_988 = 0;
        uStack_990 = 0;
        if (0 < uStack_9b0._4_4_) {
          lVar11 = 0;
          do {
            *(undefined4 *)(lStack_970 + lVar11 * 4) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < uStack_9b0._4_4_);
        }
        if (puStack_968 != auStack_960 && puStack_968 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_968 + -8));
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != (uVar5 & 0x7fffffff));
    }
    uStack_9b0 = *param_6;
    FUN_109aef27c(&uStack_d0,puVar9,puVar10,uVar5,param_3,param_4,param_5,&uStack_9b0);
    if (puStack_950 != puStack_9d0) {
      if (puStack_950 != (undefined1 *)0x0) {
        __ZdaPv();
      }
      uStack_948 = 0x108;
    }
    if ((puStack_520 != auStack_510) && (puStack_520 != (undefined1 *)0x0)) {
      __ZdaPv();
    }
  }
  if (uStack_98 != 0) {
    piVar1 = (int *)(uStack_98 + 0x14);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      func_0x000109a848d4(&uStack_d0);
    }
  }
  uStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < uStack_d0._4_4_) {
    lVar11 = 0;
    do {
      *(undefined4 *)(uStack_90 + lVar11 * 4) = 0;
      lVar11 = lVar11 + 1;
    } while (lVar11 < uStack_d0._4_4_);
  }
  if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
    _free(puStack_88[-1]);
  }
  return;
}



/* Entry: 109af01f0; end: 109af08e7;  */

void FUN_109af01f0(uint *param_1,uint *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,uint param_7)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 *puStack_9d8;
  undefined8 *puStack_9d0;
  uint *puStack_9c8;
  undefined4 *puStack_9c0;
  undefined8 uStack_9b8;
  undefined4 *puStack_9b0;
  ulong uStack_9a8;
  undefined4 auStack_9a0 [264];
  undefined8 *puStack_580;
  ulong uStack_578;
  undefined8 auStack_570 [136];
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  int *piStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar5 = *(ulong **)(param_1 + 2);
    uStack_f0 = (ulong)&uStack_130 | 8;
    uStack_128 = puVar5[1];
    uStack_130 = *puVar5;
    uStack_118 = puVar5[3];
    uStack_120 = puVar5[2];
    uStack_108 = puVar5[5];
    uStack_110 = puVar5[4];
    uStack_f8 = puVar5[7];
    uStack_100 = puVar5[6];
    puStack_e8 = &uStack_e0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    if (puVar5[7] != 0) {
      piVar13 = (int *)(puVar5[7] + 0x14);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar2) {
          *piVar13 = *piVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (*(int *)((long)puVar5 + 4) < 3) {
      uStack_e0 = *(undefined8 *)puVar5[9];
      uStack_d8 = ((undefined8 *)puVar5[9])[1];
    }
    else {
      uStack_130 = uStack_130 & 0xffffffff;
      func_0x000109a84868(&uStack_130);
    }
  }
  else {
    FUN_109a8a180(&uStack_130,param_1,0xffffffff);
  }
  if ((*param_2 & 0x1f0000 | 0x10000) == 0x50000) {
    puStack_9c8 = param_2;
    FUN_109a8de54(param_2,0xffffffff);
    if ((int)puStack_9c8 != 0) {
      uVar14 = (ulong)(int)puStack_9c8;
      puStack_580 = auStack_570;
      if (uVar14 < 0x89) {
        bVar2 = true;
        goto LAB_109af03c0;
      }
      puVar8 = (undefined8 *)(((long)puStack_9c8 << 0x20) >> 0x1d);
      if (uVar14 >> 0x3d != 0) {
        puVar8 = (undefined8 *)0xffffffffffffffff;
      }
      __Znam();
      puStack_9b0 = auStack_9a0;
      puVar9 = puStack_9b0;
      puStack_580 = puVar8;
      uStack_578 = uVar14;
      if (0x108 < uVar14) {
        puVar9 = (undefined4 *)(((long)puStack_9c8 << 0x20) >> 0x1e);
        if (uVar14 >> 0x3e != 0) {
          puVar9 = (undefined4 *)0xffffffffffffffff;
        }
        __Znam();
      }
      bVar2 = true;
      puStack_9b0 = puVar9;
      goto LAB_109af03dc;
    }
  }
  else {
    bVar2 = false;
    uVar14 = 1;
    puStack_9c8 = (uint *)0x1;
LAB_109af03c0:
    puVar8 = auStack_570;
    puStack_9b0 = auStack_9a0;
    puStack_580 = puVar8;
    uStack_578 = uVar14;
LAB_109af03dc:
    puVar9 = puStack_9b0;
    puStack_9d0 = auStack_570;
    puStack_9d8 = auStack_9a0;
    uVar7 = (uint)puStack_9c8;
    uStack_9a8 = uVar14;
    if (0 < (int)uVar7) {
      uVar14 = 0;
      do {
        bVar3 = bVar2;
        if ((*param_2 & 0x1f0000) != 0x10000) {
          bVar3 = true;
        }
        if (bVar3) {
          uVar15 = (undefined4)uVar14;
          if (!bVar2) {
            uVar15 = 0xffffffff;
          }
          FUN_109a8a180(&uStack_d0,param_2,uVar15);
        }
        else {
          puVar6 = *(undefined8 **)(param_2 + 2);
          uStack_c8 = puVar6[1];
          uStack_d0 = (undefined4 *)*puVar6;
          uStack_b8 = puVar6[3];
          uStack_c0 = puVar6[2];
          uStack_a8 = puVar6[5];
          uStack_b0 = puVar6[4];
          lStack_98 = puVar6[7];
          uStack_a0 = puVar6[6];
          uStack_80 = 0;
          uStack_78 = 0;
          if (puVar6[7] != 0) {
            piVar13 = (int *)(puVar6[7] + 0x14);
            do {
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = *piVar13 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          piStack_90 = (int *)((ulong)&uStack_d0 | 8);
          puStack_88 = &uStack_80;
          if (*(int *)((long)puVar6 + 4) < 3) {
            uStack_80 = *(undefined8 *)puVar6[9];
            uStack_78 = ((undefined8 *)puVar6[9])[1];
          }
          else {
            uStack_d0 = (undefined4 *)((ulong)uStack_d0 & 0xffffffff);
            func_0x000109a84868(&uStack_d0);
          }
        }
        uVar10 = (ulong)uStack_d0._4_4_;
        if ((int)uStack_d0._4_4_ < 3) {
          lVar12 = (long)uStack_c8._4_4_ * (long)(int)uStack_c8;
        }
        else {
          lVar12 = 1;
          piVar13 = piStack_90;
          do {
            lVar12 = lVar12 * *piVar13;
            uVar10 = uVar10 - 1;
            piVar13 = piVar13 + 1;
          } while (uVar10 != 0);
        }
        if (lVar12 == 0) {
          iVar11 = 0;
          puVar8[uVar14] = 0;
        }
        else {
          puVar6 = &uStack_d0;
          FUN_109a89cd4(puVar6,2,4,1);
          if ((int)puVar6 < 0) {
            puVar9 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar9 = 1;
            puStack_9c0 = puVar9 + 1;
            uStack_9b8 = 0x1d;
            *(undefined1 *)((long)puVar9 + 0x21) = 0;
            *(undefined8 *)(puVar9 + 3) = 0x2c3228726f746365;
            *(undefined8 *)(puVar9 + 1) = 0x566b636568632e70;
            *(undefined8 *)((long)puVar9 + 0x19) = 0x30203d3e20295332;
            *(undefined8 *)((long)puVar9 + 0x11) = 0x335f5643202c3228;
            FUN_109ac3188(0xffffff29,&puStack_9c0,&UNK_10f59c6a3,&UNK_10f59c4a2,0x904);
            goto LAB_109af07f8;
          }
          puVar8[uVar14] = uStack_c0;
          iVar11 = (int)(uStack_c8._4_4_ * (int)uStack_c8 +
                        uStack_c8._4_4_ * (int)uStack_c8 * ((uint)uStack_d0 >> 3 & 0x1ff)) / 2;
        }
        puVar9[uVar14] = iVar11;
        if (lStack_98 != 0) {
          piVar13 = (int *)(lStack_98 + 0x14);
          do {
            iVar11 = *piVar13;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar3) {
              *piVar13 = iVar11 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar11 + -1 == 0) {
            func_0x000109a848d4(&uStack_d0);
          }
        }
        lStack_98 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        if (0 < (int)uStack_d0._4_4_) {
          lVar12 = 0;
          do {
            piStack_90[lVar12] = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uStack_d0._4_4_);
        }
        if (puStack_88 != &uStack_80 && puStack_88 != (undefined8 *)0x0) {
          _free(puStack_88[-1]);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != ((ulong)puStack_9c8 & 0xffffffff));
    }
    iVar11 = 0x10;
    if ((uStack_130 & 7) != 0) {
      iVar11 = 8;
    }
    if (param_6 != 0x10) {
      iVar11 = param_6;
    }
    if (((0x10 < param_7) || (0x7fff < (int)(uint)param_5)) || ((int)(uVar7 | (uint)param_5) < 0))
    goto LAB_109af0780;
    FUN_109a89dc8(param_4,&uStack_d0,(uint)uStack_130 & 0xfff,0);
    if (0 < (int)uVar7) {
      uVar14 = (ulong)puStack_9c8 & 0xffffffff;
      do {
        FUN_109aedd40(&uStack_130,*puVar8,*puVar9,param_3,&uStack_d0,param_5,iVar11,param_7);
        uVar14 = uVar14 - 1;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar14 != 0);
    }
    if (puStack_9b0 != puStack_9d8) {
      if (puStack_9b0 != (undefined4 *)0x0) {
        __ZdaPv();
      }
      uStack_9a8 = 0x108;
    }
    if (puStack_580 != puStack_9d0) {
      if (puStack_580 != (undefined8 *)0x0) {
        __ZdaPv();
      }
      uStack_578 = 0x88;
    }
  }
  if (uStack_f8 != 0) {
    piVar13 = (int *)(uStack_f8 + 0x14);
    do {
      iVar11 = *piVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar2) {
        *piVar13 = iVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar11 + -1 == 0) {
      func_0x000109a848d4(&uStack_130);
    }
  }
  uStack_f8 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (0 < uStack_130._4_4_) {
    lVar12 = 0;
    do {
      *(undefined4 *)(uStack_f0 + lVar12 * 4) = 0;
      lVar12 = lVar12 + 1;
    } while (lVar12 < uStack_130._4_4_);
  }
  if (puStack_e8 != &uStack_e0 && puStack_e8 != (undefined8 *)0x0) {
    _free(puStack_e8[-1]);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_109af0780:
  puVar9 = (undefined4 *)0x78;
  func_0x000107c2ae8c();
  *puVar9 = 1;
  uStack_d0 = puVar9 + 1;
  uStack_c8 = 0x70;
  *(undefined8 *)(puVar9 + 0xf) = 0x203d3c207373656e;
  *(undefined8 *)(puVar9 + 0xd) = 0x6b63696874202626;
  *(undefined8 *)(puVar9 + 0x13) = 0x2626205353454e4b;
  *(undefined8 *)(puVar9 + 0x11) = 0x434948545f58414d;
  *(undefined8 *)(puVar9 + 0x17) = 0x7320262620746669;
  *(undefined8 *)(puVar9 + 0x15) = 0x6873203d3c203020;
  *(undefined8 *)(puVar9 + 0x1b) = 0x54464948535f5958;
  *(undefined8 *)(puVar9 + 0x19) = 0x203d3c2074666968;
  *(undefined8 *)(puVar9 + 3) = 0x6e20262620737470;
  *(undefined8 *)(puVar9 + 1) = 0x6e20262620737470;
  *(undefined8 *)(puVar9 + 7) = 0x26262030203d3e20;
  *(undefined8 *)(puVar9 + 5) = 0x7372756f746e6f63;
  *(undefined1 *)(puVar9 + 0x1d) = 0;
  *(undefined8 *)(puVar9 + 0xb) = 0x207373656e6b6369;
  *(undefined8 *)(puVar9 + 9) = 0x6874203d3c203020;
  FUN_109ac3188(0xffffff29,&uStack_d0,&UNK_10f59c6a3,&UNK_10f59c4a2,0x788);
LAB_109af07f8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109af07fc);
  (*pcVar4)();
}



/* Entry: 109af08e8; end: 109af18f7;  */

void FUN_109af08e8(uint *param_1,uint *param_2,uint param_3,undefined8 *param_4,undefined8 param_5,
                  int param_6,uint *param_7,int param_8,int *param_9)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  uint *puVar8;
  long lVar9;
  uint ****ppppuVar10;
  undefined4 *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  long *plVar24;
  char cVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  char *pcVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  char *pcVar33;
  char *pcVar34;
  uint *puVar35;
  long lStack_300;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  ulong uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  int *piStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  uint uStack_1c8;
  uint uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  int *piStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  uint ***pppuStack_f8;
  uint ***pppuStack_f0;
  uint ***pppuStack_e8;
  long alStack_e0 [3];
  uint auStack_c8 [4];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 & 0x1f0000) == 0x10000) {
    puVar12 = *(ulong **)(param_1 + 2);
    uStack_1f0 = (ulong)&uStack_230 | 8;
    uStack_228 = puVar12[1];
    uStack_230 = *puVar12;
    uStack_218 = puVar12[3];
    uStack_220 = puVar12[2];
    uStack_208 = puVar12[5];
    uStack_210 = puVar12[4];
    uStack_1f8 = puVar12[7];
    uStack_200 = puVar12[6];
    puStack_1e8 = &uStack_1e0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    if (puVar12[7] != 0) {
      piVar20 = (int *)(puVar12[7] + 0x14);
      do {
        cVar25 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar6) {
          *piVar20 = *piVar20 + 1;
          cVar25 = ExclusiveMonitorsStatus();
        }
      } while (cVar25 != '\0');
    }
    if (*(int *)((long)puVar12 + 4) < 3) {
      uStack_1e0 = *(undefined8 *)puVar12[9];
      uStack_1d8 = ((undefined8 *)puVar12[9])[1];
    }
    else {
      uStack_230 = uStack_230 & 0xffffffff;
      func_0x000109a84868(&uStack_230);
    }
  }
  else {
    FUN_109a8a180(&uStack_230,param_1,0xffffffff);
  }
  if ((*param_7 & 0x1f0000) == 0x10000) {
    puVar12 = *(ulong **)(param_7 + 2);
    uStack_288 = puVar12[1];
    uStack_290 = *puVar12;
    uStack_278 = puVar12[3];
    uStack_280 = puVar12[2];
    uStack_268 = puVar12[5];
    uStack_270 = puVar12[4];
    uStack_258 = puVar12[7];
    uStack_260 = puVar12[6];
    piStack_250 = (int *)((ulong)&uStack_290 | 8);
    puStack_248 = &uStack_240;
    uStack_240 = 0;
    uStack_238 = 0;
    if (puVar12[7] != 0) {
      piVar20 = (int *)(puVar12[7] + 0x14);
      do {
        cVar25 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar6) {
          *piVar20 = *piVar20 + 1;
          cVar25 = ExclusiveMonitorsStatus();
        }
      } while (cVar25 != '\0');
    }
    if (*(int *)((long)puVar12 + 4) < 3) {
      uStack_240 = *(undefined8 *)puVar12[9];
      uStack_238 = ((undefined8 *)puVar12[9])[1];
    }
    else {
      uStack_290 = uStack_290 & 0xffffffff;
      func_0x000109a84868(&uStack_290);
    }
  }
  else {
    FUN_109a8a180(&uStack_290,param_7,0xffffffff);
  }
  uStack_2a0 = uStack_220;
  uStack_294 = uStack_228._4_4_;
  if (uStack_230._4_4_ == 1) {
    uStack_294 = 1;
  }
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_298 = (undefined4)uStack_228;
  uStack_2b8 = (uint)uStack_230 & 0x4fff | 0x42420000;
  uStack_2b4 = (undefined4)*puStack_1e8;
  puVar8 = param_2;
  FUN_109a8de54(param_2,0xffffffff);
  lStack_2d0 = 0;
  lStack_2c8 = 0;
  lStack_2c0 = 0;
  lStack_2e8 = 0;
  lStack_2e0 = 0;
  lStack_2d8 = 0;
  if (puVar8 == (uint *)0x0) {
LAB_109af13ec:
    if (uStack_258 != 0) {
      piVar20 = (int *)(uStack_258 + 0x14);
      do {
        iVar32 = *piVar20;
        cVar25 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar6) {
          *piVar20 = iVar32 + -1;
          cVar25 = ExclusiveMonitorsStatus();
        }
      } while (cVar25 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_290);
      }
    }
    uStack_258 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    if (0 < (int)uStack_290._4_4_) {
      lVar16 = 0;
      do {
        piStack_250[lVar16] = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)uStack_290._4_4_);
    }
    if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
      _free(puStack_248[-1]);
    }
    if (uStack_1f8 != 0) {
      piVar20 = (int *)(uStack_1f8 + 0x14);
      do {
        iVar32 = *piVar20;
        cVar25 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar6) {
          *piVar20 = iVar32 + -1;
          cVar25 = ExclusiveMonitorsStatus();
        }
      } while (cVar25 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_230);
      }
    }
    uStack_1f8 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    if (0 < uStack_230._4_4_) {
      lVar16 = 0;
      do {
        *(undefined4 *)(uStack_1f0 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < uStack_230._4_4_);
    }
    if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
      _free(puStack_1e8[-1]);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else if (puVar8 < (uint *)0x2aaaaaaaaaaaaab) {
    lVar19 = (long)puVar8 * 0x60;
    __Znwm();
    _bzero();
    lStack_2c8 = lVar19 + (((long)puVar8 * 0x60 - 0x60U) / 0x60) * 0x60 + 0x60;
    lVar9 = (long)puVar8 * 0x20;
    lStack_2d0 = lVar19;
    lStack_2c0 = lVar19 + (long)puVar8 * 0x60;
    __Znwm();
    lVar16 = lVar9 + (long)puVar8 * 0x20;
    _bzero();
    lStack_2e0 = lVar9 + (long)puVar8 * 0x20;
    puVar13 = (undefined8 *)(lVar19 + 0x58);
    puVar17 = puVar8;
    do {
      *puVar13 = 0;
      puVar17 = (uint *)((long)puVar17 + -1);
      puVar13 = puVar13 + 0xc;
    } while (puVar17 != (uint *)0x0);
    lStack_2e8 = lVar9;
    lStack_2d8 = lVar16;
    if ((int)param_3 < 0) {
      puVar35 = (uint *)0x0;
      puVar17 = puVar8;
    }
    else {
      if ((int)puVar8 <= (int)param_3) {
        puVar11 = (undefined4 *)0x30;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_1a0 = puVar11 + 1;
        uStack_198 = 0x29;
        *(undefined1 *)((long)puVar11 + 0x2d) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x2078644972756f74;
        *(undefined8 *)(puVar11 + 1) = 0x6e6f63203d3c2030;
        *(undefined8 *)(puVar11 + 7) = 0x203c207864497275;
        *(undefined8 *)(puVar11 + 5) = 0x6f746e6f63202626;
        *(undefined8 *)((long)puVar11 + 0x25) = 0x7473616c29746e69;
        *(undefined8 *)((long)puVar11 + 0x1d) = 0x28203c2078644972;
        FUN_109ac3188(0xffffff29,&uStack_1a0,&UNK_10f59c718,&UNK_10f59c4a2,0x941);
        goto LAB_109af1760;
      }
      puVar35 = (uint *)(ulong)param_3;
      puVar17 = (uint *)(ulong)(param_3 + 1);
    }
    puVar22 = puVar35;
    do {
      if (((int)puVar22 < 0) && ((*param_2 & 0x1f0000) == 0x10000)) {
        puVar13 = *(undefined8 **)(param_2 + 2);
        uStack_198 = puVar13[1];
        uStack_1a0 = (undefined4 *)*puVar13;
        uStack_188 = puVar13[3];
        lStack_190 = puVar13[2];
        uStack_178 = puVar13[5];
        uStack_180 = puVar13[4];
        lStack_168 = puVar13[7];
        uStack_170 = puVar13[6];
        uStack_150 = 0;
        uStack_148 = 0;
        if (puVar13[7] != 0) {
          piVar20 = (int *)(puVar13[7] + 0x14);
          do {
            cVar25 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar6) {
              *piVar20 = *piVar20 + 1;
              cVar25 = ExclusiveMonitorsStatus();
            }
          } while (cVar25 != '\0');
        }
        piStack_160 = (int *)((ulong)&uStack_1a0 | 8);
        puStack_158 = &uStack_150;
        if (*(int *)((long)puVar13 + 4) < 3) {
          uStack_150 = *(undefined8 *)puVar13[9];
          uStack_148 = ((undefined8 *)puVar13[9])[1];
        }
        else {
          uStack_1a0 = (undefined4 *)((ulong)uStack_1a0 & 0xffffffff);
          func_0x000109a84868(&uStack_1a0);
        }
      }
      else {
        FUN_109a8a180(&uStack_1a0,param_2,puVar22);
      }
      lVar16 = lStack_190;
      if (lStack_190 != 0) {
        uVar15 = (ulong)uStack_1a0._4_4_;
        if ((int)uStack_1a0._4_4_ < 3) {
          lVar19 = (long)uStack_198._4_4_ * (long)(int)uStack_198;
        }
        else {
          lVar19 = 1;
          piVar20 = piStack_160;
          do {
            lVar19 = lVar19 * *piVar20;
            uVar15 = uVar15 - 1;
            piVar20 = piVar20 + 1;
          } while (uVar15 != 0);
        }
        if (lVar19 != 0) {
          puVar13 = &uStack_1a0;
          FUN_109a89cd4(puVar13,2,4,1);
          if ((int)puVar13 < 1) {
            puVar11 = (undefined4 *)0x10;
            func_0x000107c2ae8c();
            *puVar11 = 1;
            puStack_118 = (undefined8 *)(puVar11 + 1);
            *puStack_118 = 0x2073746e696f706e;
            uStack_110 = 0xb;
            *(undefined1 *)((long)puVar11 + 0xf) = 0;
            *(undefined4 *)((long)puVar11 + 0xb) = 0x30203e20;
            FUN_109ac3188(0xffffff29,&puStack_118,&UNK_10f59c718,&UNK_10f59c4a2,0x94c);
            goto LAB_109af1760;
          }
          FUN_109a4cef0(0x500c,0x60,8,lVar16,puVar13,lStack_2d0 + (long)puVar22 * 0x60,
                        lStack_2e8 + (long)puVar22 * 0x20);
        }
      }
      if (lStack_168 != 0) {
        piVar20 = (int *)(lStack_168 + 0x14);
        do {
          iVar32 = *piVar20;
          cVar25 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar6) {
            *piVar20 = iVar32 + -1;
            cVar25 = ExclusiveMonitorsStatus();
          }
        } while (cVar25 != '\0');
        if (iVar32 + -1 == 0) {
          func_0x000109a848d4(&uStack_1a0);
        }
      }
      lStack_168 = 0;
      uStack_188 = 0;
      lStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      if (0 < (int)uStack_1a0._4_4_) {
        lVar16 = 0;
        do {
          piStack_160[lVar16] = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)uStack_1a0._4_4_);
      }
      if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
        _free(puStack_158[-1]);
      }
      puVar22 = (uint *)((long)puVar22 + 1);
    } while (puVar22 != puVar17);
    if (uStack_280 == 0) {
LAB_109af0e50:
      lVar16 = (long)puVar35 * 0x60;
      puVar8 = puVar35;
      do {
        lVar9 = lStack_2d0 + lVar16;
        lVar19 = lVar9 + 0x60;
        if ((uint *)((long)puVar17 + -1) <= puVar8) {
          lVar19 = 0;
        }
        lVar27 = lVar9 + -0x60;
        if (puVar8 <= puVar35) {
          lVar27 = 0;
        }
        *(long *)(lVar9 + 8) = lVar27;
        *(long *)(lVar9 + 0x10) = lVar19;
        puVar8 = (uint *)((long)puVar8 + 1);
        lVar16 = lVar16 + 0x60;
      } while (puVar17 != puVar8);
    }
    else {
      uVar15 = (ulong)uStack_290._4_4_;
      if ((int)uStack_290._4_4_ < 3) {
        if (param_8 != 0) {
          puVar22 = (uint *)((long)uStack_288._4_4_ * (long)(int)uStack_288);
          if (puVar22 != (uint *)0x0) goto LAB_109af0dc4;
        }
        goto LAB_109af0e50;
      }
      lVar16 = 1;
      piVar20 = piStack_250;
      uVar26 = uVar15;
      do {
        lVar16 = lVar16 * *piVar20;
        uVar26 = uVar26 - 1;
        piVar20 = piVar20 + 1;
      } while (uVar26 != 0);
      if ((param_8 == 0) || (lVar16 == 0)) goto LAB_109af0e50;
      puVar22 = (uint *)0x1;
      piVar20 = piStack_250;
      do {
        puVar22 = (uint *)((long)puVar22 * (long)*piVar20);
        uVar15 = uVar15 - 1;
        piVar20 = piVar20 + 1;
      } while (uVar15 != 0);
LAB_109af0dc4:
      if ((puVar22 != puVar8) || (((uint)uStack_290 & 0xfff) != 0x1c)) {
        puVar11 = (undefined4 *)0x44;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_1a0 = puVar11 + 1;
        uStack_198 = 0x3e;
        *(undefined8 *)(puVar11 + 3) = 0x286c61746f742e79;
        *(undefined8 *)(puVar11 + 1) = 0x6863726172656968;
        *(undefined1 *)((long)puVar11 + 0x42) = 0;
        *(undefined8 *)(puVar11 + 7) = 0x26207372756f746e;
        *(undefined8 *)(puVar11 + 5) = 0x6f636e203d3d2029;
        *(undefined8 *)(puVar11 + 0xb) = 0x657079742e796863;
        *(undefined8 *)(puVar11 + 9) = 0x7261726569682026;
        *(undefined8 *)((long)puVar11 + 0x3a) = 0x34435332335f5643;
        *(undefined8 *)((long)puVar11 + 0x32) = 0x203d3d2029286570;
        FUN_109ac3188(0xffffff29,&uStack_1a0,&UNK_10f59c718,&UNK_10f59c4a2,0x95a);
        goto LAB_109af1760;
      }
      puVar17 = (uint *)((long)puVar17 - (long)puVar35);
      if (puVar17 == puVar8) {
        plVar24 = (long *)(lStack_2d0 + (long)puVar35 * 0x60 + 0x10);
        piVar20 = (int *)(uStack_280 + (long)puVar35 * 0x10 + 8);
        do {
          iVar32 = *piVar20;
          iVar3 = piVar20[1];
          lVar16 = lStack_2d0 + (long)piVar20[-2] * 0x60;
          if (puVar8 <= (uint *)(long)piVar20[-2]) {
            lVar16 = 0;
          }
          lVar19 = lStack_2d0 + (long)piVar20[-1] * 0x60;
          if (puVar8 <= (uint *)(long)piVar20[-1]) {
            lVar19 = 0;
          }
          plVar24[-1] = lVar19;
          *plVar24 = lVar16;
          lVar16 = lStack_2d0 + (long)iVar32 * 0x60;
          if (puVar8 <= (uint *)(long)iVar32) {
            lVar16 = 0;
          }
          lVar19 = lStack_2d0 + (long)iVar3 * 0x60;
          if (puVar8 <= (uint *)(long)iVar3) {
            lVar19 = 0;
          }
          plVar24[1] = lVar19;
          plVar24[2] = lVar16;
          plVar24 = plVar24 + 0xc;
          puVar17 = (uint *)((long)puVar17 + -1);
          piVar20 = piVar20 + 4;
        } while (puVar17 != (uint *)0x0);
      }
      else {
        uVar14 = *(uint *)(uStack_280 + (long)puVar35 * 0x10 + 8);
        if (-1 < (int)uVar14) {
          FUN_109af18f8(param_2,puVar8,uStack_280,uVar14,&lStack_2d0,&lStack_2e8);
          *(ulong *)(lStack_2d0 + (long)puVar35 * 0x60 + 0x20) = lStack_2d0 + (ulong)uVar14 * 0x60;
        }
      }
    }
    lVar16 = lStack_2d0;
    puStack_138 = (undefined8 *)*param_4;
    uStack_130 = param_4[1];
    uStack_128 = param_4[2];
    uStack_120 = param_4[3];
    iVar3 = *param_9;
    iVar4 = param_9[1];
    iVar32 = -param_8;
    if (0x7fffffff < param_3) {
      iVar32 = param_8;
    }
    alStack_e0[0] = 0;
    alStack_e0[1] = 0;
    alStack_e0[2] = 0;
    pppuStack_f8 = (uint ***)0x0;
    pppuStack_f0 = (uint ***)0x0;
    pppuStack_e8 = (uint ***)0x0;
    puStack_118 = puStack_138;
    uStack_110 = uStack_130;
    uStack_108 = uStack_128;
    uStack_100 = uStack_120;
    FUN_109a85f44(&uStack_1a0,&uStack_2b8,0,1,0,0);
    iVar18 = 0x10;
    if (((ulong)uStack_1a0 & 7) != 0) {
      iVar18 = 8;
    }
    if (param_6 != 0x10) {
      iVar18 = param_6;
    }
    if (lVar16 != 0) {
      iVar28 = (int)param_5;
      if (0x7fff < iVar28) {
        puVar11 = (undefined4 *)0x20;
        func_0x000107c2ae8c();
        *puVar11 = 1;
        uStack_1b0 = puVar11 + 1;
        uStack_1a8 = 0x1a;
        *(undefined1 *)((long)puVar11 + 0x1e) = 0;
        *(undefined8 *)(puVar11 + 3) = 0x58414d203d3c2073;
        *(undefined8 *)(puVar11 + 1) = 0x73656e6b63696874;
        *(undefined8 *)((long)puVar11 + 0x16) = 0x5353454e4b434948;
        *(undefined8 *)((long)puVar11 + 0xe) = 0x545f58414d203d3c;
        FUN_109ac3188(0xffffff29,&uStack_1b0,&UNK_10f59c770,&UNK_10f59c4a2,0x995);
        goto LAB_109af1760;
      }
      FUN_109a89dc8(&puStack_118,auStack_98,(uint)uStack_1a0 & 0xfff,0);
      FUN_109a89dc8(&puStack_138,auStack_b8,(uint)uStack_1a0 & 0xfff,0);
      lVar16 = lVar16 + (long)puVar35 * 0x60;
      iVar1 = iVar32;
      if (iVar32 < -0x7ffffffd) {
        iVar1 = -0x7ffffffe;
      }
      if (0x7ffffffd < iVar1) {
        iVar1 = 0x7ffffffe;
      }
      if (iVar32 < 0) {
        lStack_300 = *(long *)(lVar16 + 0x10);
        *(undefined8 *)(lVar16 + 0x10) = 0;
        iVar1 = 1 - iVar1;
      }
      else {
        lStack_300 = 0;
      }
      FUN_109a502a8(auStack_c8,lVar16,iVar1);
      while( true ) {
        puVar8 = auStack_c8;
        FUN_109a503b8();
        if (puVar8 == (uint *)0x0) break;
        uVar14 = *puVar8;
        puVar2 = auStack_98;
        if ((uVar14 & 0x8000) != 0) {
          puVar2 = auStack_b8;
        }
        lVar19 = *(long *)(puVar8 + 0x16);
        if (lVar19 == 0) {
          pcVar29 = (char *)0x0;
          pcVar33 = (char *)0x0;
        }
        else {
          pcVar33 = *(char **)(lVar19 + 0x18);
          pcVar29 = pcVar33 + (long)*(int *)(lVar19 + 0x14) * (long)(int)puVar8[0xb];
        }
        uVar31 = puVar8[10];
        uVar30 = uVar14;
        if (iVar28 < 0) {
          FUN_1092cbef0(&pppuStack_f8,0);
          uVar30 = *puVar8;
        }
        if ((uVar30 & 0x3000) == 0x1000) {
          if (((uVar30 >> 0xe & 1) == 0) || (puVar8[0xb] != 1)) {
            if ((uVar30 & 0xffe) == 0xc) {
              if ((uVar14 & 0xfff) != 0xc) {
                puVar11 = (undefined4 *)0x1c;
                func_0x000107c2ae8c();
                *puVar11 = 1;
                uStack_1b0 = puVar11 + 1;
                uStack_1a8 = 0x15;
                *(undefined1 *)((long)puVar11 + 0x19) = 0;
                *(undefined8 *)(puVar11 + 3) = 0x5f5643203d3d2065;
                *(undefined8 *)(puVar11 + 1) = 0x7079745f6d656c65;
                *(undefined8 *)((long)puVar11 + 0x11) = 0x32435332335f5643;
                FUN_109ac3188(0xffffff29,&uStack_1b0,&UNK_10f59c770,&UNK_10f59c4a2,0x9d7);
                goto LAB_109af1760;
              }
              uStack_1b8 = (undefined4 *)0x0;
              pcVar34 = pcVar33 + 8;
              if (pcVar29 <= pcVar34) {
                lVar19 = *(long *)(lVar19 + 8);
                pcVar34 = *(char **)(lVar19 + 0x18);
                pcVar29 = pcVar34 + (long)*(int *)(lVar19 + 0x14) * (long)(int)puVar8[0xb];
              }
              uVar14 = (int)*(undefined8 *)pcVar33 + iVar3;
              uVar21 = (int)((ulong)*(undefined8 *)pcVar33 >> 0x20) + iVar4;
              uStack_1b0 = (undefined4 *)CONCAT44(uVar21,uVar14);
              if (iVar28 < 0) {
                if (pppuStack_f0 < pppuStack_e8) {
                  *(uint *)pppuStack_f0 = uVar14;
                  *(uint *)((long)pppuStack_f0 + 4) = uVar21;
                  pppuStack_f0 = pppuStack_f0 + 1;
                }
                else {
                  ppppuVar10 = &pppuStack_f8;
                  FUN_1092c78ec(ppppuVar10,&uStack_1b0);
                  pppuStack_f0 = (uint ***)ppppuVar10;
                }
              }
              iVar32 = uVar31 - ((uVar30 >> 0xe ^ 0xffffffff) & 1);
              if (0 < iVar32) {
                do {
                  pcVar33 = pcVar34 + 8;
                  if (pcVar29 <= pcVar33) {
                    lVar19 = *(long *)(lVar19 + 8);
                    pcVar33 = *(char **)(lVar19 + 0x18);
                    pcVar29 = pcVar33 + (long)*(int *)(lVar19 + 0x14) * (long)(int)puVar8[0xb];
                  }
                  uVar14 = (int)*(undefined8 *)pcVar34 + iVar3;
                  uVar31 = (int)((ulong)*(undefined8 *)pcVar34 >> 0x20) + iVar4;
                  uStack_1b8 = (undefined4 *)CONCAT44(uVar31,uVar14);
                  if (iVar28 < 0) {
                    if (pppuStack_f0 < pppuStack_e8) {
                      *(uint *)pppuStack_f0 = uVar14;
                      *(uint *)((long)pppuStack_f0 + 4) = uVar31;
                      pppuStack_f0 = pppuStack_f0 + 1;
                    }
                    else {
                      ppppuVar10 = &pppuStack_f8;
                      FUN_1092c78ec(ppppuVar10,&uStack_1b8);
                      pppuStack_f0 = (uint ***)ppppuVar10;
                    }
                  }
                  else {
                    uStack_1c0 = uStack_1b0;
                    uStack_1c8 = uVar14;
                    uStack_1c4 = uVar31;
                    FUN_109aeda78(&uStack_1a0,&uStack_1c0,&uStack_1c8,puVar2,param_5,iVar18,2,0);
                  }
                  uStack_1b0 = uStack_1b8;
                  iVar32 = iVar32 + -1;
                  pcVar34 = pcVar33;
                } while (iVar32 != 0);
              }
              if (iVar28 < 0) {
                FUN_109aef53c(&uStack_1a0,pppuStack_f8,
                              (ulong)((long)pppuStack_f0 - (long)pppuStack_f8) >> 3,alStack_e0,
                              auStack_98,iVar18,0,0,0);
              }
            }
          }
          else {
            uVar14 = puVar8[0x18];
            uVar30 = puVar8[0x19];
            uStack_1b0 = *(undefined4 **)(puVar8 + 0x18);
            if (pcVar33 == (char *)0x0) {
              cVar25 = '\0';
            }
            else {
              cVar25 = *pcVar33;
            }
            uVar21 = uVar14 + iVar3;
            uVar23 = uVar30 + iVar4;
            if (0 < (int)uVar31) {
              do {
                pcVar34 = pcVar33 + 1;
                cVar5 = *pcVar33;
                if (pcVar29 <= pcVar34) {
                  lVar19 = *(long *)(lVar19 + 8);
                  pcVar34 = *(char **)(lVar19 + 0x18);
                  pcVar29 = pcVar34 + (long)*(int *)(lVar19 + 0x14) * (long)(int)puVar8[0xb];
                }
                if (cVar5 != cVar25) {
                  if (iVar28 < 0) {
                    if (pppuStack_f0 < pppuStack_e8) {
                      *(uint *)pppuStack_f0 = uVar14;
                      *(uint *)((long)pppuStack_f0 + 4) = uVar30;
                      pppuStack_f0 = pppuStack_f0 + 1;
                    }
                    else {
                      ppppuVar10 = &pppuStack_f8;
                      FUN_1092c78ec(ppppuVar10,&uStack_1b0);
                      pppuStack_f0 = (uint ***)ppppuVar10;
                    }
                  }
                  else {
                    uStack_1b8 = (undefined4 *)CONCAT44(uVar23,uVar21);
                    uStack_1c0 = (undefined4 *)CONCAT44(uVar30,uVar14);
                    FUN_109aeda78(&uStack_1a0,&uStack_1b8,&uStack_1c0,puVar2,param_5,iVar18,2,0);
                  }
                  uVar30 = uStack_1b0._4_4_;
                  uVar23 = uStack_1b0._4_4_;
                  uVar14 = (uint)uStack_1b0;
                  uVar21 = (uint)uStack_1b0;
                  cVar25 = cVar5;
                }
                uVar14 = *(int *)(&UNK_10e030984 + (long)cVar5 * 8) + uVar14;
                uVar30 = *(int *)(&UNK_10e030988 + (long)cVar5 * 8) + uVar30;
                uStack_1b0 = (undefined4 *)CONCAT44(uVar30,uVar14);
                uVar31 = uVar31 - 1;
                pcVar33 = pcVar34;
              } while (uVar31 != 0);
            }
            if (iVar28 < 0) {
              FUN_109aef53c(&uStack_1a0,pppuStack_f8,
                            (ulong)((long)pppuStack_f0 - (long)pppuStack_f8) >> 3,alStack_e0,
                            auStack_98,iVar18,0,iVar3,iVar4);
            }
            else {
              uStack_1b8 = (undefined4 *)CONCAT44(uVar23,uVar21);
              uStack_1c0 = (undefined4 *)CONCAT44(puVar8[0x19] + iVar4,puVar8[0x18] + iVar3);
              FUN_109aeda78(&uStack_1a0,&uStack_1b8,&uStack_1c0,puVar2,param_5,iVar18,2,0);
            }
          }
        }
      }
      if (iVar28 < 0) {
        func_0x000109aef6c4(&uStack_1a0,alStack_e0,auStack_98);
      }
      if (lStack_300 != 0) {
        *(long *)(lVar16 + 0x10) = lStack_300;
      }
    }
    if (lStack_168 != 0) {
      piVar20 = (int *)(lStack_168 + 0x14);
      do {
        iVar32 = *piVar20;
        cVar25 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar6) {
          *piVar20 = iVar32 + -1;
          cVar25 = ExclusiveMonitorsStatus();
        }
      } while (cVar25 != '\0');
      if (iVar32 + -1 == 0) {
        func_0x000109a848d4(&uStack_1a0);
      }
    }
    lStack_168 = 0;
    uStack_188 = 0;
    lStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    if (0 < (int)uStack_1a0._4_4_) {
      lVar16 = 0;
      do {
        piStack_160[lVar16] = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)uStack_1a0._4_4_);
    }
    if (puStack_158 != &uStack_150 && puStack_158 != (undefined8 *)0x0) {
      _free(puStack_158[-1]);
    }
    if ((uint ****)pppuStack_f8 != (uint ****)0x0) {
      pppuStack_f0 = pppuStack_f8;
      __ZdlPv();
    }
    if (alStack_e0[0] != 0) {
      __ZdlPv();
    }
    if (lStack_2e8 != 0) {
      __ZdlPv();
    }
    if (lStack_2d0 != 0) {
      __ZdlPv();
    }
    goto LAB_109af13ec;
  }
  FUN_109af4454();
LAB_109af1760:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109af1764);
  (*pcVar7)();
}



/* Entry: 109af18f8; end: 109af1b17;  */

void FUN_109af18f8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5,
                  long *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  undefined1 auStack_c0 [4];
  uint uStack_bc;
  int iStack_b8;
  int iStack_b4;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  int *piStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  
  do {
    FUN_109a8a180(auStack_c0,param_1,param_4);
    uVar8 = (ulong)uStack_bc;
    if (lStack_b0 == 0) {
      lVar9 = 0;
    }
    else {
      if ((int)uStack_bc < 3) {
        lVar12 = (long)iStack_b4 * (long)iStack_b8;
      }
      else {
        lVar12 = 1;
        piVar10 = piStack_80;
        uVar13 = uVar8;
        do {
          lVar12 = lVar12 * *piVar10;
          uVar13 = uVar13 - 1;
          piVar10 = piVar10 + 1;
        } while (uVar13 != 0);
      }
      lVar9 = 0;
      if (lVar12 != 0) {
        lVar9 = lStack_b0;
      }
    }
    if ((int)uStack_bc < 3) {
      iVar15 = iStack_b4 * iStack_b8;
    }
    else {
      iVar15 = 1;
      piVar10 = piStack_80;
      do {
        iVar15 = *piVar10 * iVar15;
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 1;
      } while (uVar8 != 0);
    }
    uVar8 = param_4 & 0xffffffff;
    FUN_109a4cef0(0x500c,0x60,8,lVar9,iVar15,*param_5 + (param_4 & 0xffffffff) * 0x60,
                  *param_6 + uVar8 * 0x20);
    puVar1 = (uint *)(param_3 + uVar8 * 0x10);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar5 = puVar1[3];
    iVar15 = (int)param_2;
    lVar12 = *param_5;
    lVar9 = lVar12 + (ulong)uVar2 * 0x60;
    if (iVar15 <= (int)uVar2 || 0x7fffffff < uVar2) {
      lVar9 = 0;
    }
    lVar14 = lVar12 + uVar8 * 0x60;
    lVar11 = lVar12 + (ulong)uVar4 * 0x60;
    if (iVar15 <= (int)uVar4 || 0x7fffffff < uVar4) {
      lVar11 = 0;
    }
    *(long *)(lVar14 + 8) = lVar11;
    *(long *)(lVar14 + 0x10) = lVar9;
    lVar9 = lVar12 + (ulong)uVar3 * 0x60;
    if (iVar15 <= (int)uVar3 || 0x7fffffff < uVar3) {
      lVar9 = 0;
    }
    lVar12 = lVar12 + (ulong)uVar5 * 0x60;
    if (iVar15 <= (int)uVar5 || 0x7fffffff < uVar5) {
      lVar12 = 0;
    }
    *(long *)(lVar14 + 0x18) = lVar12;
    *(long *)(lVar14 + 0x20) = lVar9;
    if (-1 < (int)uVar3) {
      FUN_109af18f8(param_1,param_2,param_3,uVar3,param_5,param_6);
    }
    if (lStack_88 != 0) {
      piVar10 = (int *)(lStack_88 + 0x14);
      do {
        iVar15 = *piVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = iVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar15 + -1 == 0) {
        func_0x000109a848d4(auStack_c0);
      }
    }
    lStack_88 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    if (0 < (int)uStack_bc) {
      lVar9 = 0;
      do {
        piStack_80[lVar9] = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uStack_bc);
    }
    if (puStack_78 != auStack_70 && puStack_78 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_78 + -8));
    }
    param_4 = (ulong)*puVar1;
  } while (-1 < (int)*puVar1);
  return;
}



/* Entry: 109af1b18; end: 109af1df3;  */

void FUN_109af1b18(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                  undefined1 *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 **ppuVar8;
  undefined4 *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  
  iVar16 = 4;
  if (param_7 != 1) {
    iVar16 = param_7;
  }
  iVar18 = 8;
  if (param_7 != 0) {
    iVar18 = iVar16;
  }
  uStack_80 = param_4;
  uStack_7c = param_5;
  uStack_78 = param_2;
  uStack_74 = param_3;
  if (iVar18 != 4 && iVar18 != 8) {
    puVar9 = (undefined4 *)0x2c;
    func_0x000107c2ae8c();
    *(undefined8 *)(puVar9 + 3) = 0x203d3d2079746976;
    *(undefined8 *)(puVar9 + 1) = 0x697463656e6e6f63;
    *puVar9 = 1;
    puStack_70 = puVar9 + 1;
    uStack_68 = 0x26;
    *(undefined1 *)((long)puVar9 + 0x2a) = 0;
    *(undefined8 *)(puVar9 + 7) = 0x746976697463656e;
    *(undefined8 *)(puVar9 + 5) = 0x6e6f63207c7c2038;
    *(undefined8 *)((long)puVar9 + 0x22) = 0x34203d3d20797469;
    FUN_109ac3188(0xffffff29,&puStack_70,&UNK_10f59c495,&UNK_10f59c4a2,0x9e);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x109af1dc8);
    (*pcVar7)();
  }
  if ((*(uint *)(param_1 + 0xc) <= param_2 || *(uint *)(param_1 + 0xc) <= param_4) ||
     (*(uint *)(param_1 + 8) <= param_3 || *(uint *)(param_1 + 8) <= param_5)) {
    puStack_70 = (undefined4 *)NEON_rev64(**(undefined8 **)(param_1 + 0x40),4);
    ppuVar8 = &puStack_70;
    FUN_109aed5bc(ppuVar8,&uStack_78,&uStack_80);
    if (((ulong)ppuVar8 & 1) == 0) {
      uVar14 = 0;
      uVar13 = 0;
      uVar11 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
      puVar12 = *(undefined1 **)(param_1 + 0x10);
      uVar10 = (ulong)*(uint *)(param_1 + 4);
      goto LAB_109af1cb4;
    }
  }
  uVar10 = (ulong)*(uint *)(param_1 + 4);
  if ((int)*(uint *)(param_1 + 4) < 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)(*(long *)(param_1 + 0x48) + uVar10 * 8 + -8);
  }
  uVar6 = uStack_80 - uStack_78;
  uVar13 = (int)uVar6 >> 0x1f;
  uVar5 = (uStack_7c - uStack_74 ^ uVar13) - uVar13;
  uVar14 = -uVar6;
  if (-1 < (int)uVar6) {
    uVar14 = uVar6;
  }
  puVar12 = (undefined1 *)
            (*(long *)(param_1 + 0x10) +
             *(long *)(param_1 + 0x50) *
             (long)(int)(uStack_7c & uVar13 | uStack_74 & (uVar13 ^ 0xffffffff)) +
            (long)(int)((uStack_80 & uVar13 | uStack_78 & (uVar13 ^ 0xffffffff)) * uVar11));
  uVar6 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar6 = uVar5;
  }
  uVar5 = ((uint)*(long *)(param_1 + 0x50) ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  uVar13 = uVar6;
  if ((int)uVar6 <= (int)uVar14) {
    uVar13 = 0;
  }
  uVar1 = uVar13 ^ uVar14;
  if ((int)uVar6 <= (int)uVar14) {
    uVar1 = 0;
  }
  uVar1 = uVar1 ^ uVar6;
  uVar2 = uVar1;
  if ((int)uVar6 <= (int)uVar14) {
    uVar2 = 0;
  }
  uVar2 = uVar2 ^ uVar13 ^ uVar14;
  uVar3 = uVar5;
  if ((int)uVar6 <= (int)uVar14) {
    uVar3 = 0;
  }
  uVar4 = uVar3 ^ uVar11;
  if ((int)uVar6 <= (int)uVar14) {
    uVar4 = 0;
  }
  uVar4 = uVar4 ^ uVar5;
  uVar13 = uVar4;
  if ((int)uVar6 <= (int)uVar14) {
    uVar13 = 0;
  }
  uVar13 = uVar13 ^ uVar3 ^ uVar11;
  uVar5 = uVar2 + uVar1;
  iVar17 = 0;
  if (iVar18 == 8) {
    uVar5 = uVar2;
    iVar17 = uVar2 + uVar1 * -2;
  }
  iVar15 = uVar1 * -2;
  uVar11 = uVar4 - uVar13;
  if (iVar18 == 8) {
    uVar11 = uVar4;
  }
  uVar14 = uVar5 << 1;
  iVar16 = uVar5 + 1;
LAB_109af1cb4:
  if ((int)uVar10 < 1) {
    iVar18 = 0;
  }
  else {
    iVar18 = (int)*(undefined8 *)(*(long *)(param_1 + 0x48) + uVar10 * 8 + -8);
  }
  if (0 < iVar16) {
    do {
      if (iVar18 == 3) {
        *puVar12 = *param_6;
        puVar12[1] = param_6[1];
        puVar12[2] = param_6[2];
      }
      else if (iVar18 == 1) {
        *puVar12 = *param_6;
      }
      else {
        _memcpy(puVar12,param_6,(long)iVar18);
      }
      uVar5 = iVar17 >> 0x1f;
      iVar17 = iVar17 + iVar15 + (uVar14 & uVar5);
      puVar12 = puVar12 + (int)((uVar11 & uVar5) + uVar13);
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  return;
}



/* Entry: 109af1df4; end: 109af232b;  */

void FUN_109af1df4(long param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  int iStack_68;
  int iStack_64;
  
  if ((int)*(uint *)(param_1 + 4) < 1) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(uint *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 4) * 8 + -8);
  }
  uVar9 = *param_4;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  lVar15 = *(long *)(param_1 + 0x10);
  lVar27 = *(long *)(param_1 + 0x50);
  iVar4 = **(int **)(param_1 + 0x40);
  iVar5 = (*(int **)(param_1 + 0x40))[1];
  iStack_68 = iVar5 << 0x10;
  iStack_64 = iVar4 << 0x10;
  piVar13 = &iStack_68;
  FUN_109aed5bc(piVar13,param_2,param_3);
  if ((int)piVar13 != 0) {
    uVar7 = *param_3;
    puVar19 = param_3 + 1;
    uVar8 = *puVar19;
    uVar24 = *param_2;
    uVar6 = param_2[1];
    uVar20 = uVar7 - uVar24;
    uVar23 = uVar8 - uVar6;
    uVar2 = -uVar20;
    if (-1 < (int)uVar20) {
      uVar2 = uVar20;
    }
    uVar3 = -uVar23;
    if (-1 < (int)uVar23) {
      uVar3 = uVar23;
    }
    if ((int)uVar3 < (int)uVar2) {
      uVar20 = (int)uVar20 >> 0x1f;
      uVar12 = (uVar23 ^ uVar20) - uVar20;
      uVar24 = uVar20 & uVar7 ^ uVar24;
      uVar6 = uVar20 & uVar8 ^ uVar6;
      *param_2 = uVar24;
      param_2[1] = uVar6;
      uVar23 = *param_3 ^ uVar24 & uVar20;
      uVar24 = param_3[1] ^ uVar6 & uVar20;
      *param_3 = uVar23;
      param_3[1] = uVar24;
      uVar23 = *param_2 ^ uVar23 & uVar20;
      *param_2 = uVar23;
      iVar16 = 0;
      if ((long)(int)(uVar2 | 1) != 0) {
        iVar16 = (int)((long)(-(ulong)(uVar12 >> 0x1f) & 0xffff000000000000 | (ulong)uVar12 << 0x10)
                      / (long)(int)(uVar2 | 1));
      }
      iVar17 = 0x10000;
      puVar19 = param_3;
      uVar24 = param_2[1] ^ uVar24 & uVar20;
      uVar20 = uVar23;
    }
    else {
      uVar23 = (int)uVar23 >> 0x1f;
      uVar12 = (uVar23 ^ uVar20) - uVar23;
      uVar24 = uVar23 & uVar7 ^ uVar24;
      uVar6 = uVar23 & uVar8 ^ uVar6;
      *param_2 = uVar24;
      param_2[1] = uVar6;
      uVar20 = *param_3 ^ uVar24 & uVar23;
      uVar24 = param_3[1] ^ uVar6 & uVar23;
      *param_3 = uVar20;
      param_3[1] = uVar24;
      uVar20 = *param_2 ^ uVar20 & uVar23;
      uVar23 = param_2[1] ^ uVar24 & uVar23;
      param_2[1] = uVar23;
      iVar17 = 0;
      if ((long)(int)(uVar3 | 1) != 0) {
        iVar17 = (int)((long)(-(ulong)(uVar12 >> 0x1f) & 0xffff000000000000 | (ulong)uVar12 << 0x10)
                      / (long)(int)(uVar3 | 1));
      }
      iVar16 = 0x10000;
      uVar24 = uVar23;
    }
    iVar18 = (int)(*puVar19 - uVar23) >> 0x10;
    *param_2 = uVar20 + 0x8000;
    param_2[1] = uVar24 + 0x8000;
    uVar20 = (int)(*param_3 + 0x8000) >> 0x10;
    uVar23 = (int)(param_3[1] + 0x8000) >> 0x10;
    uVar25 = (ulong)uVar23;
    if (uVar14 == 1) {
      if ((((-1 < (int)uVar20) && ((int)uVar20 < iVar5)) && (-1 < (int)uVar23)) &&
         ((int)uVar23 < iVar4)) {
        *(undefined1 *)(lVar15 + lVar27 * uVar25 + (ulong)uVar20) = uVar9;
      }
      if ((int)uVar3 < (int)uVar2) {
        uVar14 = (uint)*(short *)((long)param_2 + 2);
        *param_2 = (int)*(short *)((long)param_2 + 2);
        if (-1 < iVar18) {
          uVar20 = param_2[1];
          iVar17 = iVar18 + 1;
          do {
            if ((-1 < (int)uVar14) && ((int)uVar14 < iVar5)) {
              uVar23 = (int)uVar20 >> 0x10;
              if ((-1 < (int)uVar23) && ((int)uVar23 < iVar4)) {
                *(undefined1 *)(lVar15 + lVar27 * (ulong)uVar23 + (ulong)uVar14) = uVar9;
                uVar14 = *param_2;
                uVar20 = param_2[1];
              }
            }
            uVar14 = uVar14 + 1;
            uVar20 = uVar20 + iVar16;
            *param_2 = uVar14;
            param_2[1] = uVar20;
            iVar18 = iVar17 + -1;
            bVar1 = 0 < iVar17;
            iVar17 = iVar18;
          } while (iVar18 != 0 && bVar1);
        }
      }
      else {
        uVar14 = (uint)*(short *)((long)param_2 + 6);
        param_2[1] = (int)*(short *)((long)param_2 + 6);
        if (-1 < iVar18) {
          uVar20 = *param_2;
          iVar16 = iVar18 + 1;
          do {
            uVar23 = (int)uVar20 >> 0x10;
            if (((-1 < (int)uVar23) && ((int)uVar23 < iVar5)) &&
               ((-1 < (int)uVar14 && ((int)uVar14 < iVar4)))) {
              *(undefined1 *)(lVar15 + lVar27 * (ulong)uVar14 + (ulong)uVar23) = uVar9;
              uVar20 = *param_2;
              uVar14 = param_2[1];
            }
            uVar20 = uVar20 + iVar17;
            uVar14 = uVar14 + 1;
            *param_2 = uVar20;
            param_2[1] = uVar14;
            iVar18 = iVar16 + -1;
            bVar1 = 0 < iVar16;
            iVar16 = iVar18;
          } while (iVar18 != 0 && bVar1);
        }
      }
    }
    else if (uVar14 == 3) {
      if ((((-1 < (int)uVar20) && ((int)uVar20 < iVar5)) && (-1 < (int)uVar23)) &&
         ((int)uVar23 < iVar4)) {
        puVar21 = (undefined1 *)(lVar15 + lVar27 * uVar25 + (ulong)uVar20 * 2 + (ulong)uVar20);
        *puVar21 = uVar9;
        puVar21[1] = uVar10;
        puVar21[2] = uVar11;
      }
      if ((int)uVar3 < (int)uVar2) {
        uVar14 = (uint)*(short *)((long)param_2 + 2);
        *param_2 = (int)*(short *)((long)param_2 + 2);
        if (-1 < iVar18) {
          uVar20 = param_2[1];
          iVar17 = iVar18 + 1;
          do {
            if ((-1 < (int)uVar14) && ((int)uVar14 < iVar5)) {
              uVar23 = (int)uVar20 >> 0x10;
              if ((-1 < (int)uVar23) && ((int)uVar23 < iVar4)) {
                puVar21 = (undefined1 *)
                          (lVar15 + lVar27 * (ulong)uVar23 + (ulong)uVar14 * 2 + (ulong)uVar14);
                *puVar21 = uVar9;
                puVar21[1] = uVar10;
                puVar21[2] = uVar11;
                uVar14 = *param_2;
                uVar20 = param_2[1];
              }
            }
            uVar14 = uVar14 + 1;
            uVar20 = uVar20 + iVar16;
            *param_2 = uVar14;
            param_2[1] = uVar20;
            iVar18 = iVar17 + -1;
            bVar1 = 0 < iVar17;
            iVar17 = iVar18;
          } while (iVar18 != 0 && bVar1);
        }
      }
      else {
        uVar14 = (uint)*(short *)((long)param_2 + 6);
        param_2[1] = (int)*(short *)((long)param_2 + 6);
        if (-1 < iVar18) {
          uVar20 = *param_2;
          iVar16 = iVar18 + 1;
          do {
            uVar23 = (int)uVar20 >> 0x10;
            if (((-1 < (int)uVar23) && ((int)uVar23 < iVar5)) &&
               ((-1 < (int)uVar14 && ((int)uVar14 < iVar4)))) {
              puVar21 = (undefined1 *)
                        (lVar15 + lVar27 * (ulong)uVar14 + (ulong)uVar23 * 2 + (ulong)uVar23);
              *puVar21 = uVar9;
              puVar21[1] = uVar10;
              puVar21[2] = uVar11;
              uVar20 = *param_2;
              uVar14 = param_2[1];
            }
            uVar20 = uVar20 + iVar17;
            uVar14 = uVar14 + 1;
            *param_2 = uVar20;
            param_2[1] = uVar14;
            iVar18 = iVar16 + -1;
            bVar1 = 0 < iVar16;
            iVar16 = iVar18;
          } while (iVar18 != 0 && bVar1);
        }
      }
    }
    else {
      if ((((-1 < (int)uVar20) && ((int)uVar20 < iVar5)) && (-1 < (int)uVar23)) &&
         (((int)uVar23 < iVar4 && (0 < (int)uVar14)))) {
        uVar26 = (ulong)uVar14;
        puVar21 = (undefined1 *)(lVar15 + lVar27 * uVar25 + (long)(int)(uVar20 * uVar14));
        puVar22 = param_4;
        do {
          *puVar21 = *puVar22;
          uVar26 = uVar26 - 1;
          puVar21 = puVar21 + 1;
          puVar22 = puVar22 + 1;
        } while (uVar26 != 0);
      }
      if ((int)uVar3 < (int)uVar2) {
        uVar20 = (uint)*(short *)((long)param_2 + 2);
        *param_2 = (int)*(short *)((long)param_2 + 2);
        if (-1 < iVar18) {
          uVar23 = param_2[1];
          do {
            if ((-1 < (int)uVar20) && ((int)uVar20 < iVar5)) {
              uVar2 = (int)uVar23 >> 0x10;
              if ((-1 < (int)uVar2) && (((int)uVar2 < iVar4 && (0 < (int)uVar14)))) {
                puVar21 = (undefined1 *)
                          (lVar15 + lVar27 * (ulong)uVar2 + (long)(int)(uVar20 * uVar14));
                puVar22 = param_4;
                uVar25 = (ulong)uVar14;
                do {
                  *puVar21 = *puVar22;
                  uVar25 = uVar25 - 1;
                  puVar21 = puVar21 + 1;
                  puVar22 = puVar22 + 1;
                } while (uVar25 != 0);
                uVar20 = *param_2;
                uVar23 = param_2[1];
              }
            }
            uVar20 = uVar20 + 1;
            uVar23 = uVar23 + iVar16;
            *param_2 = uVar20;
            param_2[1] = uVar23;
            bVar1 = 0 < iVar18;
            iVar18 = iVar18 + -1;
          } while (bVar1);
        }
      }
      else {
        uVar20 = (uint)*(short *)((long)param_2 + 6);
        param_2[1] = (int)*(short *)((long)param_2 + 6);
        if (-1 < iVar18) {
          uVar23 = *param_2;
          do {
            iVar16 = (int)uVar23 >> 0x10;
            if (((-1 < iVar16) && (iVar16 < iVar5)) &&
               ((-1 < (int)uVar20 && (((int)uVar20 < iVar4 && (0 < (int)uVar14)))))) {
              puVar21 = (undefined1 *)
                        (lVar15 + lVar27 * (ulong)uVar20 + (long)(int)(iVar16 * uVar14));
              puVar22 = param_4;
              uVar25 = (ulong)uVar14;
              do {
                *puVar21 = *puVar22;
                uVar25 = uVar25 - 1;
                puVar21 = puVar21 + 1;
                puVar22 = puVar22 + 1;
              } while (uVar25 != 0);
              uVar23 = *param_2;
              uVar20 = param_2[1];
            }
            uVar23 = uVar23 + iVar17;
            uVar20 = uVar20 + 1;
            *param_2 = uVar23;
            param_2[1] = uVar20;
            bVar1 = 0 < iVar18;
            iVar18 = iVar18 + -1;
          } while (bVar1);
        }
      }
    }
  }
  return;
}



/* Entry: 109af232c; end: 109af2f9f;  */

/* WARNING: Removing unreachable block (ram,0x000109af1d64) */

void FUN_109af232c(uint *param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  short sVar10;
  uint5 uVar11;
  uint3 uVar12;
  uint7 uVar13;
  short sVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  long lVar24;
  uint *puVar25;
  uint uVar26;
  byte *pbVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  uint *puVar34;
  uint uVar35;
  undefined8 uVar36;
  ulong uVar37;
  int iVar38;
  uint uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  uint uVar45;
  uint uVar46;
  uint *puVar47;
  uint *puVar48;
  undefined8 uVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  int iVar53;
  undefined1 *puVar54;
  long lVar55;
  uint *puVar56;
  int iVar57;
  undefined4 *puVar58;
  uint *puVar59;
  int iVar60;
  ushort uVar61;
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  undefined2 uVar65;
  undefined2 uVar66;
  undefined2 uVar67;
  undefined2 uVar68;
  undefined2 uVar69;
  undefined2 uVar70;
  undefined2 uVar71;
  undefined2 uVar72;
  undefined1 auVar73 [16];
  ushort uVar74;
  ushort uVar75;
  ushort uVar76;
  ushort uVar77;
  byte bVar78;
  char cVar79;
  char cVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  undefined1 auVar90 [16];
  undefined4 uVar91;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  uint uStack_68;
  uint uStack_64;
  
  iVar53 = (int)&uStack_80;
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar26 = *param_1 >> 3 & 0x1ff;
  if ((uVar26 < 4 && uVar26 != 1) && (*param_1 & 7) == 0) {
    uVar91 = *param_4;
    lVar33 = *(long *)(param_1 + 4);
    lVar55 = *(long *)(param_1 + 0x14);
    uVar43 = **(undefined8 **)(param_1 + 0x10);
    *(ulong *)param_2 =
         CONCAT44((int)((ulong)*(undefined8 *)param_2 >> 0x20) + -0x20000,
                  (int)*(undefined8 *)param_2 + -0x20000);
    puVar20 = param_3 + 1;
    *(ulong *)param_3 =
         CONCAT44((int)((ulong)*(undefined8 *)param_3 >> 0x20) + -0x20000,
                  (int)*(undefined8 *)param_3 + -0x20000);
    iVar38 = (uint)(ushort)((ulong)uVar43 >> 0x20) * 0x10000 + -0x4ffff;
    uStack_80 = NEON_rev64(CONCAT26((short)((uint)iVar38 >> 0x10),
                                    CONCAT24((short)iVar38,(uint)(ushort)uVar43 * 0x10000 + -0x4ffff
                                            )),4);
    puVar23 = param_2;
    puVar56 = param_3;
    FUN_109aed5bc();
    if (iVar53 != 0) {
      uVar64 = (ushort)(byte)uVar91;
      bVar89 = (byte)((uint)uVar91 >> 8);
      bVar81 = (byte)((uint)uVar91 >> 0x10);
      bVar82 = (byte)((uint)uVar91 >> 0x18);
      uVar28 = (ulong)(uVar26 << 1);
      uVar52 = *param_3;
      uVar4 = param_3[1];
      uVar35 = *param_2;
      uVar45 = param_2[1];
      uVar17 = uVar52 - uVar35;
      uVar39 = uVar4 - uVar45;
      uVar46 = -uVar17;
      if (-1 < (int)uVar17) {
        uVar46 = uVar17;
      }
      uVar6 = -uVar39;
      if (-1 < (int)uVar39) {
        uVar6 = uVar39;
      }
      if ((int)uVar6 < (int)uVar46) {
        uVar17 = (int)uVar17 >> 0x1f;
        uVar5 = (uVar39 ^ uVar17) - uVar17;
        uVar35 = uVar17 & uVar52 ^ uVar35;
        *param_2 = uVar35;
        uVar39 = *param_3 ^ uVar35 & uVar17;
        *param_3 = uVar39;
        uVar45 = uVar17 & uVar4 ^ uVar45;
        *param_2 = *param_2 ^ uVar39 & uVar17;
        param_2[1] = uVar45;
        uVar35 = *param_3;
        uVar39 = param_3[1] ^ uVar45 & uVar17;
        param_3[1] = uVar39;
        uVar45 = param_2[1];
        uVar42 = 0;
        if ((long)(int)(uVar46 | 1) != 0) {
          uVar42 = (long)(-(ulong)(uVar5 >> 0x1f) & 0xffff000000000000 | (ulong)uVar5 << 0x10) /
                   (long)(int)(uVar46 | 1);
        }
        *param_3 = uVar35 + 0x10000;
        uVar40 = (ulong)*param_2;
        uVar35 = ((int)(uVar35 + 0x10000) >> 0x10) - ((int)*param_2 >> 0x10);
        iVar53 = (int)uVar42;
        uVar17 = (uVar45 ^ uVar39 & uVar17) + (int)(-((uVar40 & 0xffff) * (long)iVar53) >> 0x10) +
                 0x8000;
        param_2[1] = uVar17;
        iVar38 = 0x10000;
        uVar41 = uVar40;
        uVar37 = (ulong)uVar17;
        puVar20 = param_3;
      }
      else {
        uVar39 = (int)uVar39 >> 0x1f;
        uVar5 = (uVar39 ^ uVar17) - uVar39;
        uVar35 = uVar39 & uVar52 ^ uVar35;
        *param_2 = uVar35;
        uVar17 = *param_3 ^ uVar35 & uVar39;
        *param_3 = uVar17;
        uVar52 = *param_2;
        uVar45 = uVar39 & uVar4 ^ uVar45;
        param_2[1] = uVar45;
        uVar35 = param_3[1] ^ uVar45 & uVar39;
        param_3[1] = uVar35;
        param_2[1] = param_2[1] ^ uVar35 & uVar39;
        uVar42 = 0;
        if ((long)(int)(uVar6 | 1) != 0) {
          uVar42 = (long)(-(ulong)(uVar5 >> 0x1f) & 0xffff000000000000 | (ulong)uVar5 << 0x10) /
                   (long)(int)(uVar6 | 1);
        }
        uVar35 = param_3[1];
        param_3[1] = uVar35 + 0x10000;
        uVar40 = (ulong)param_2[1];
        uVar35 = ((int)(uVar35 + 0x10000) >> 0x10) - ((int)param_2[1] >> 0x10);
        iVar38 = (int)uVar42;
        uVar17 = (uVar52 ^ uVar17 & uVar39) + (int)(-((uVar40 & 0xffff) * (long)iVar38) >> 0x10) +
                 0x8000;
        uVar41 = (ulong)uVar17;
        *param_2 = uVar17;
        iVar53 = 0x10000;
        uVar37 = uVar40;
      }
      uVar17 = ((uint)(uVar42 >> 0xb) & 0x1fffff ^ (int)uVar42 >> 0x1f) & 0x3f;
      uVar39 = (uint)(uVar40 >> 9) & 0x78;
      uVar45 = *puVar20 >> 9 & 0x78;
      if (uVar17 < 0x20) {
        uVar17 = (uint)(byte)(&UNK_10e0309c4)[uVar17];
      }
      else {
        uVar17 = 0x100;
      }
      uVar5 = (uint)CONCAT12(bVar89,uVar64);
      uVar61 = (ushort)bVar89;
      uVar62 = (ushort)bVar81;
      uVar63 = (ushort)bVar82;
      lVar32 = lVar33 + lVar55 * 2 + uVar28 + 2;
      uVar52 = uVar17 * (0x7c - uVar39);
      puVar56 = (uint *)(ulong)uVar52;
      uVar4 = uVar17 * (uVar45 | 4);
      param_4 = (undefined4 *)0x0;
      uVar45 = uVar45 - uVar39;
      uStack_74 = uVar17 * (uVar45 & 0x78 | 4) >> 8;
      uStack_80 = (ulong)uStack_74 << 0x20;
      uStack_78 = uVar52 >> 8;
      uVar39 = uVar52 + uVar17 * 0x80 >> 8;
      puVar23 = (uint *)(ulong)uVar39;
      uStack_70 = CONCAT44(uVar39,uVar17 * (uVar45 + 0x84) >> 8);
      _uStack_68 = CONCAT44(uVar4 + uVar17 * 0x80 >> 8,uVar4 >> 8);
      iVar57 = (int)uVar41 >> 0x10;
      if (uVar26 == 0) {
        if ((int)uVar6 < (int)uVar46) {
          if (-1 < (int)uVar35) {
            lVar33 = 0;
            lVar32 = lVar32 + iVar57;
            uVar5 = uVar5 & 0xffff;
            iVar38 = uVar35 + 1;
            do {
              uVar17 = (uint)uVar37;
              lVar24 = lVar32 + lVar55 * (((int)uVar17 >> 0x10) + -1);
              uVar26 = 1;
              if (1 < (uint)lVar33) {
                uVar26 = 2;
              }
              uVar46 = uVar35 | 2;
              bVar16 = uVar35 != 0;
              uVar35 = uVar35 - 1;
              uVar39 = 1;
              if (bVar16 && uVar35 != 0) {
                uVar39 = 2;
              }
              iVar57 = *(int *)((long)&uStack_80 +
                               (ulong)((uVar26 & ((uint)lVar33 | 2)) * 3 + (uVar39 & uVar46)) * 4);
              uVar39 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)(uVar17 >> 0xb & 0x1f | 0x20) * 4) *
                             iVar57) >> 8 & 0xff;
              uVar26 = (uint)*(byte *)(lVar24 + lVar33);
              uVar26 = uVar26 + ((uVar5 - uVar26) * uVar39 + 0x7f >> 8);
              *(char *)(lVar24 + lVar33) =
                   (char)uVar26 + (char)((uVar5 - (uVar26 & 0xff)) * uVar39 + 0x7f >> 8);
              uVar17 = uVar17 >> 0xb & 0x1f;
              lVar19 = lVar55 * ((long)(uVar37 << 0x20) >> 0x30);
              lVar24 = lVar32 + lVar19;
              uVar39 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)uVar17 * 4) * iVar57) >> 8 & 0xff;
              uVar26 = (uint)*(byte *)(lVar24 + lVar33);
              uVar26 = uVar26 + ((uVar5 - uVar26) * uVar39 + 0x7f >> 8);
              *(char *)(lVar24 + lVar33) =
                   (char)uVar26 + (char)((uVar5 - (uVar26 & 0xff)) * uVar39 + 0x7f >> 8);
              lVar19 = lVar32 + lVar55 + lVar19;
              uVar39 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)(uVar17 ^ 0x3f) * 4) * iVar57) >> 8 &
                       0xff;
              uVar26 = (uint)*(byte *)(lVar19 + lVar33);
              uVar26 = uVar26 + ((uVar5 - uVar26) * uVar39 + 0x7f >> 8);
              puVar56 = (uint *)(ulong)uVar26;
              uVar17 = uVar5 - (uVar26 & 0xff);
              param_4 = (undefined4 *)(ulong)uVar17;
              uVar26 = uVar26 + (uVar17 * uVar39 + 0x7f >> 8);
              puVar23 = (uint *)(ulong)uVar26;
              *(char *)(lVar19 + lVar33) = (char)uVar26;
              uVar37 = (ulong)(param_2[1] + iVar53);
              param_2[1] = param_2[1] + iVar53;
              lVar33 = lVar33 + 1;
            } while (iVar38 != (int)lVar33);
          }
        }
        else if (-1 < (int)uVar35) {
          uVar26 = 0;
          uVar5 = uVar5 & 0xffff;
          lVar33 = lVar55 * (((long)(uVar37 << 0x20) >> 0x30) + 2) + lVar33 + 3;
          do {
            uVar39 = (uint)uVar41;
            pbVar27 = (byte *)(lVar33 + ((int)uVar39 >> 0x10));
            uVar17 = 1;
            if (1 < uVar26) {
              uVar17 = 2;
            }
            uVar45 = uVar35 | 2;
            bVar16 = uVar35 != 0;
            uVar35 = uVar35 - 1;
            uVar46 = 1;
            if (bVar16 && uVar35 != 0) {
              uVar46 = 2;
            }
            iVar53 = *(int *)((long)&uStack_80 +
                             (ulong)((uVar17 & (uVar26 | 2)) * 3 + (uVar46 & uVar45)) * 4);
            uVar46 = uVar39 >> 0xb & 0x1f;
            uVar39 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)(uVar39 >> 0xb & 0x1f | 0x20) * 4) *
                           iVar53) >> 8 & 0xff;
            uVar17 = (uint)pbVar27[-2] + ((uVar5 - pbVar27[-2]) * uVar39 + 0x7f >> 8);
            pbVar27[-2] = (char)uVar17 + (char)((uVar5 - (uVar17 & 0xff)) * uVar39 + 0x7f >> 8);
            uVar39 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)uVar46 * 4) * iVar53) >> 8 & 0xff;
            uVar17 = (uint)pbVar27[-1] + ((uVar5 - pbVar27[-1]) * uVar39 + 0x7f >> 8);
            param_4 = (undefined4 *)(ulong)uVar17;
            pbVar27[-1] = (char)uVar17 + (char)((uVar5 - (uVar17 & 0xff)) * uVar39 + 0x7f >> 8);
            uVar46 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)(uVar46 ^ 0x3f) * 4) * iVar53) >> 8 &
                     0xff;
            uVar17 = (uint)*pbVar27 + ((uVar5 - *pbVar27) * uVar46 + 0x7f >> 8);
            puVar23 = (uint *)(ulong)uVar17;
            uVar39 = uVar5 - (uVar17 & 0xff);
            puVar56 = (uint *)(ulong)uVar39;
            *pbVar27 = (char)uVar17 + (char)(uVar39 * uVar46 + 0x7f >> 8);
            uVar41 = (ulong)(*param_2 + iVar38);
            *param_2 = *param_2 + iVar38;
            uVar26 = uVar26 + 1;
            lVar33 = lVar33 + lVar55;
          } while (uVar35 != 0xffffffff);
        }
      }
      else if (uVar26 == 2) {
        if ((int)uVar6 < (int)uVar46) {
          if (-1 < (int)uVar35) {
            uVar26 = 0;
            lVar32 = lVar32 + iVar57 * 3;
            uVar17 = (uint)uVar61;
            uVar39 = (uint)uVar62;
            uVar5 = uVar5 & 0xffff;
            puVar23 = (uint *)0x7f;
            do {
              uVar45 = (uint)uVar37;
              pbVar27 = (byte *)(lVar32 + lVar55 * (((int)uVar45 >> 0x10) + -1));
              uVar46 = 1;
              if (1 < uVar26) {
                uVar46 = 2;
              }
              uVar4 = uVar35 | 2;
              bVar16 = uVar35 != 0;
              uVar35 = uVar35 - 1;
              uVar52 = 1;
              if (bVar16 && uVar35 != 0) {
                uVar52 = 2;
              }
              iVar38 = *(int *)((long)&uStack_80 +
                               (ulong)((uVar46 & (uVar26 | 2)) * 3 + (uVar52 & uVar4)) * 4);
              uVar4 = uVar45 >> 0xb & 0x1f;
              uVar6 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)(uVar45 >> 0xb & 0x1f | 0x20) * 4) *
                            iVar38) >> 8 & 0xff;
              uVar46 = (uint)*pbVar27 + ((uVar5 - *pbVar27) * uVar6 + 0x7f >> 8);
              uVar45 = (uint)pbVar27[1] + ((uVar17 - pbVar27[1]) * uVar6 + 0x7f >> 8);
              uVar52 = (uint)pbVar27[2] + ((uVar39 - pbVar27[2]) * uVar6 + 0x7f >> 8);
              *pbVar27 = (char)uVar46 + (char)((uVar5 - (uVar46 & 0xff)) * uVar6 + 0x7f >> 8);
              pbVar27[1] = (char)uVar45 + (char)((uVar17 - (uVar45 & 0xff)) * uVar6 + 0x7f >> 8);
              pbVar27[2] = (char)uVar52 + (char)((uVar39 - (uVar52 & 0xff)) * uVar6 + 0x7f >> 8);
              lVar33 = lVar55 * ((long)(uVar37 << 0x20) >> 0x30);
              pbVar27 = (byte *)(lVar32 + lVar33);
              uVar6 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)uVar4 * 4) * iVar38) >> 8 & 0xff;
              uVar46 = (uint)*pbVar27 + ((uVar5 - *pbVar27) * uVar6 + 0x7f >> 8);
              uVar45 = (uint)pbVar27[1] + ((uVar17 - pbVar27[1]) * uVar6 + 0x7f >> 8);
              uVar52 = (uint)pbVar27[2] + ((uVar39 - pbVar27[2]) * uVar6 + 0x7f >> 8);
              *pbVar27 = (char)uVar46 + (char)((uVar5 - (uVar46 & 0xff)) * uVar6 + 0x7f >> 8);
              pbVar27[1] = (char)uVar45 + (char)((uVar17 - (uVar45 & 0xff)) * uVar6 + 0x7f >> 8);
              pbVar27[2] = (char)uVar52 + (char)((uVar39 - (uVar52 & 0xff)) * uVar6 + 0x7f >> 8);
              pbVar27 = (byte *)(lVar32 + lVar55 + lVar33);
              uVar4 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)(uVar4 ^ 0x3f) * 4) * iVar38) >> 8 &
                      0xff;
              uVar46 = (uint)*pbVar27 + ((uVar5 - *pbVar27) * uVar4 + 0x7f >> 8);
              uVar45 = (uint)pbVar27[1] + ((uVar17 - pbVar27[1]) * uVar4 + 0x7f >> 8);
              uVar52 = (uint)pbVar27[2] + ((uVar39 - pbVar27[2]) * uVar4 + 0x7f >> 8);
              *pbVar27 = (char)uVar46 + (char)((uVar5 - (uVar46 & 0xff)) * uVar4 + 0x7f >> 8);
              uVar45 = uVar45 + ((uVar17 - (uVar45 & 0xff)) * uVar4 + 0x7f >> 8);
              param_4 = (undefined4 *)(ulong)uVar45;
              pbVar27[1] = (byte)uVar45;
              uVar52 = uVar52 + ((uVar39 - (uVar52 & 0xff)) * uVar4 + 0x7f >> 8);
              puVar56 = (uint *)(ulong)uVar52;
              pbVar27[2] = (byte)uVar52;
              uVar37 = (ulong)(param_2[1] + iVar53);
              param_2[1] = param_2[1] + iVar53;
              lVar32 = lVar32 + 3;
              uVar26 = uVar26 + 1;
            } while (uVar35 != 0xffffffff);
          }
        }
        else if (-1 < (int)uVar35) {
          uVar26 = 0;
          auVar73._6_2_ = 0;
          auVar73._0_6_ = (uint6)CONCAT14(bVar89,uVar5) & 0xffff0000ffff;
          auVar73[8] = bVar81;
          auVar73._9_3_ = 0;
          auVar73[0xc] = bVar82;
          auVar73._13_3_ = 0;
          auVar90._6_2_ = 0;
          auVar90._0_6_ = (uint6)CONCAT14(bVar89,uVar5) & 0xffff0000ffff;
          auVar90[8] = bVar81;
          auVar90._9_3_ = 0;
          auVar90[0xc] = bVar82;
          auVar90._13_3_ = 0;
          auVar73 = NEON_ext(auVar73,auVar90,0xc,1);
          auVar7._6_2_ = 0;
          auVar7._0_6_ = (uint6)CONCAT14(bVar89,uVar5) & 0xffff0000ffff;
          auVar7[8] = bVar81;
          auVar7._9_3_ = 0;
          auVar7[0xc] = bVar82;
          auVar7._13_3_ = 0;
          auVar73 = NEON_ext(auVar73,auVar7,8,1);
          lVar33 = lVar33 + lVar55 * (((long)(uVar37 << 0x20) >> 0x30) + 2) + 4;
          do {
            uVar39 = (uint)uVar41;
            lVar32 = lVar33 + ((int)uVar39 >> 0x10) * 3;
            uVar17 = 1;
            if (1 < uVar26) {
              uVar17 = 2;
            }
            uVar45 = uVar35 | 2;
            bVar16 = uVar35 != 0;
            uVar35 = uVar35 - 1;
            uVar46 = 1;
            if (bVar16 && uVar35 != 0) {
              uVar46 = 2;
            }
            uVar52 = uVar39 >> 0xb & 0x1f;
            param_4 = (undefined4 *)(ulong)(uVar39 >> 0xb & 0x1f | 0x20);
            iVar53 = *(int *)((long)&uStack_80 +
                             (ulong)((uVar17 & (uVar26 | 2)) * 3 + (uVar46 & uVar45)) * 4);
            bVar78 = (byte)((uint)(*(int *)(&UNK_10e0309e4 + (long)param_4 * 4) * iVar53) >> 8);
            bVar84 = (byte)((uint)(*(int *)(&UNK_10e0309e4 + (ulong)uVar52 * 4) * iVar53) >> 8);
            bVar88 = (byte)((uint)(*(int *)(&UNK_10e0309e4 + (ulong)(uVar52 ^ 0x3f) * 4) * iVar53)
                           >> 8);
            auVar8._1_3_ = 0;
            auVar8[0] = bVar78;
            auVar8[4] = bVar84;
            auVar8._5_3_ = 0;
            auVar8[8] = bVar88;
            auVar8._9_7_ = 0;
            auVar9._1_3_ = 0;
            auVar9[0] = bVar78;
            auVar9[4] = bVar84;
            auVar9._5_3_ = 0;
            auVar9[8] = bVar88;
            auVar9._9_7_ = 0;
            auVar90 = NEON_ext(auVar8,auVar9,4,1);
            uVar43 = *(undefined8 *)(lVar32 + -1);
            bVar89 = (byte)((ulong)uVar43 >> 8);
            bVar81 = (byte)((ulong)uVar43 >> 0x10);
            bVar82 = (byte)((ulong)uVar43 >> 0x18);
            bVar83 = (byte)((ulong)uVar43 >> 0x20);
            bVar85 = (byte)((ulong)uVar43 >> 0x28);
            bVar86 = (byte)((ulong)uVar43 >> 0x30);
            bVar87 = (byte)((ulong)uVar43 >> 0x38);
            sVar10 = auVar90._0_2_;
            sVar14 = auVar90._4_2_;
            cVar79 = (byte)uVar43 +
                     (char)((ushort)((uVar64 - (byte)uVar43) * (ushort)bVar78 + 0x7f) >> 8);
            cVar80 = bVar89 + (char)((ushort)((uVar61 - bVar89) * (ushort)bVar78 + 0x7f) >> 8);
            bVar81 = bVar81 + (char)((ushort)((uVar62 - bVar81) * (ushort)bVar78 + 0x7f) >> 8);
            bVar82 = bVar82 + (char)((ushort)((uVar64 - bVar82) * (ushort)bVar84 + 0x7f) >> 8);
            bVar83 = bVar83 + (char)((ushort)((auVar73._0_2_ - (ushort)bVar83) * sVar10 + 0x7f) >> 8
                                    );
            bVar85 = bVar85 + (char)((ushort)((auVar73._4_2_ - (ushort)bVar85) * sVar10 + 0x7f) >> 8
                                    );
            bVar86 = bVar86 + (char)((ushort)((auVar73._8_2_ - (ushort)bVar86) * sVar14 + 0x7f) >> 8
                                    );
            bVar87 = bVar87 + (char)((ushort)((auVar73._12_2_ - (ushort)bVar87) * sVar14 + 0x7f) >>
                                    8);
            uVar17 = (uint)*(byte *)(lVar32 + 7) +
                     (((uint)uVar62 - (uint)*(byte *)(lVar32 + 7)) * (uint)bVar88 + 0x7f >> 8);
            uVar12 = CONCAT12(cVar80,CONCAT11(cVar80,cVar79)) & 0xff00ff;
            uVar39 = (uint)uVar62 - (uVar17 & 0xff);
            puVar56 = (uint *)(ulong)uVar39;
            uVar39 = uVar39 * bVar88 + 0x7f;
            puVar23 = (uint *)(ulong)uVar39;
            *(ulong *)(lVar32 + -1) =
                 CONCAT17(bVar87 + (char)((ushort)((auVar73._12_2_ - (ushort)bVar87) * sVar14 + 0x7f
                                                  ) >> 8),
                          CONCAT16(bVar86 + (char)((ushort)((auVar73._8_2_ - (ushort)bVar86) *
                                                            sVar14 + 0x7f) >> 8),
                                   CONCAT15(bVar85 + (char)((ushort)((auVar73._4_2_ - (ushort)bVar85
                                                                     ) * sVar10 + 0x7f) >> 8),
                                            CONCAT14(bVar83 + (char)((ushort)((auVar73._0_2_ -
                                                                              (ushort)bVar83) *
                                                                              sVar10 + 0x7f) >> 8),
                                                     CONCAT13(bVar82 + (char)((ushort)((uVar64 - 
                                                  bVar82) * (ushort)bVar84 + 0x7f) >> 8),
                                                  CONCAT12(bVar81 + (char)((ushort)((uVar62 - bVar81
                                                                                    ) * (ushort)
                                                  bVar78 + 0x7f) >> 8),
                                                  CONCAT11(cVar80 + (char)((ushort)((uVar61 - (byte)
                                                  (uVar12 >> 0x10)) * (ushort)bVar78 + 0x7f) >> 8),
                                                  cVar79 + (char)((ushort)((uVar64 - (short)uVar12)
                                                                           * (ushort)bVar78 + 0x7f)
                                                                 >> 8))))))));
            *(char *)(lVar32 + 7) = (char)uVar17 + (char)(uVar39 >> 8);
            uVar41 = (ulong)(*param_2 + iVar38);
            *param_2 = *param_2 + iVar38;
            uVar26 = uVar26 + 1;
            lVar33 = lVar33 + lVar55;
          } while (uVar35 != 0xffffffff);
        }
      }
      else if ((int)uVar6 < (int)uVar46) {
        if (-1 < (int)uVar35) {
          lVar32 = 0;
          iVar38 = uVar35 + 1;
          lVar33 = lVar55 * 2 + uVar28 + (long)(int)((int)uVar41 >> 0xe & 0xfffffffc) + lVar33 + 2;
          do {
            uVar17 = (uint)uVar37;
            lVar24 = lVar33 + lVar55 * (((int)uVar17 >> 0x10) + -1);
            uVar26 = 1;
            if (1 < (uint)lVar32) {
              uVar26 = 2;
            }
            uVar46 = uVar35 | 2;
            bVar16 = uVar35 != 0;
            uVar35 = uVar35 - 1;
            uVar39 = 1;
            if (bVar16 && uVar35 != 0) {
              uVar39 = 2;
            }
            iVar57 = *(int *)((long)&uStack_80 +
                             (ulong)((uVar26 & ((uint)lVar32 | 2)) * 3 + (uVar39 & uVar46)) * 4);
            uVar26 = uVar17 >> 0xb & 0x1f;
            uVar17 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)(uVar17 >> 0xb & 0x1f | 0x20) * 4) *
                           iVar57) >> 8 & 0xff;
            uVar91 = *(undefined4 *)(lVar24 + lVar32 * 4);
            bVar89 = (byte)((uint)uVar91 >> 8);
            bVar81 = (byte)((uint)uVar91 >> 0x10);
            bVar82 = (byte)((uint)uVar91 >> 0x18);
            uVar11 = CONCAT14(bVar89,uVar91) & 0xff000000ff;
            uVar74 = (short)(((uVar5 & 0xffff) - (int)uVar11 & 0xffffff) * uVar17 + 0x7f >> 8) +
                     (ushort)(byte)uVar91;
            uVar75 = (short)(((uint)uVar61 - (uint)(byte)(uVar11 >> 0x20)) * uVar17 + 0x7f >> 8) +
                     (ushort)bVar89;
            uVar76 = (short)(((uint)uVar62 - (uint)bVar81) * uVar17 + 0x7f >> 8) + (ushort)bVar81;
            uVar77 = (short)(((uint)uVar63 - (uint)bVar82) * uVar17 + 0x7f >> 8) + (ushort)bVar82;
            sVar10 = (short)uVar17;
            *(uint *)(lVar24 + lVar32 * 4) =
                 CONCAT13((char)uVar77 +
                          (char)((ushort)((uVar63 - (uVar77 & 0xff)) * sVar10 + 0x7f) >> 8),
                          CONCAT12((char)uVar76 +
                                   (char)((ushort)((uVar62 - (uVar76 & 0xff)) * sVar10 + 0x7f) >> 8)
                                   ,CONCAT11((char)uVar75 +
                                             (char)((ushort)((uVar61 - (uVar75 & 0xff)) * sVar10 +
                                                            0x7f) >> 8),
                                             (char)uVar74 +
                                             (char)((ushort)((uVar64 - (uVar74 & 0xff)) * sVar10 +
                                                            0x7f) >> 8))));
            lVar24 = lVar55 * ((long)(uVar37 << 0x20) >> 0x30);
            uVar17 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)uVar26 * 4) * iVar57) >> 8 & 0xff;
            puVar56 = (uint *)(ulong)uVar17;
            uVar91 = *(undefined4 *)(lVar33 + lVar24 + lVar32 * 4);
            bVar89 = (byte)((uint)uVar91 >> 8);
            bVar81 = (byte)((uint)uVar91 >> 0x10);
            bVar82 = (byte)((uint)uVar91 >> 0x18);
            uVar11 = CONCAT14(bVar89,uVar91) & 0xff000000ff;
            uVar74 = (short)(((uVar5 & 0xffff) - (int)uVar11 & 0xffffff) * uVar17 + 0x7f >> 8) +
                     (ushort)(byte)uVar91;
            uVar75 = (short)(((uint)uVar61 - (uint)(byte)(uVar11 >> 0x20)) * uVar17 + 0x7f >> 8) +
                     (ushort)bVar89;
            uVar76 = (short)(((uint)uVar62 - (uint)bVar81) * uVar17 + 0x7f >> 8) + (ushort)bVar81;
            uVar77 = (short)(((uint)uVar63 - (uint)bVar82) * uVar17 + 0x7f >> 8) + (ushort)bVar82;
            sVar10 = (short)uVar17;
            *(uint *)(lVar33 + lVar24 + lVar32 * 4) =
                 CONCAT13((char)uVar77 +
                          (char)((ushort)((uVar63 - (uVar77 & 0xff)) * sVar10 + 0x7f) >> 8),
                          CONCAT12((char)uVar76 +
                                   (char)((ushort)((uVar62 - (uVar76 & 0xff)) * sVar10 + 0x7f) >> 8)
                                   ,CONCAT11((char)uVar75 +
                                             (char)((ushort)((uVar61 - (uVar75 & 0xff)) * sVar10 +
                                                            0x7f) >> 8),
                                             (char)uVar74 +
                                             (char)((ushort)((uVar64 - (uVar74 & 0xff)) * sVar10 +
                                                            0x7f) >> 8))));
            puVar23 = (uint *)(lVar33 + lVar55);
            uVar26 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)(uVar26 ^ 0x3f) * 4) * iVar57) >> 8 &
                     0xff;
            uVar91 = *(undefined4 *)((long)puVar23 + lVar32 * 4 + lVar24);
            bVar89 = (byte)((uint)uVar91 >> 8);
            bVar81 = (byte)((uint)uVar91 >> 0x10);
            bVar82 = (byte)((uint)uVar91 >> 0x18);
            uVar11 = CONCAT14(bVar89,uVar91) & 0xff000000ff;
            uVar74 = (short)(((uVar5 & 0xffff) - (int)uVar11 & 0xffffff) * uVar26 + 0x7f >> 8) +
                     (ushort)(byte)uVar91;
            uVar75 = (short)(((uint)uVar61 - (uint)(byte)(uVar11 >> 0x20)) * uVar26 + 0x7f >> 8) +
                     (ushort)bVar89;
            uVar76 = (short)(((uint)uVar62 - (uint)bVar81) * uVar26 + 0x7f >> 8) + (ushort)bVar81;
            uVar77 = (short)(((uint)uVar63 - (uint)bVar82) * uVar26 + 0x7f >> 8) + (ushort)bVar82;
            sVar10 = (short)uVar26;
            *(uint *)((long)puVar23 + lVar32 * 4 + lVar24) =
                 CONCAT13((char)uVar77 +
                          (char)((ushort)((uVar63 - (uVar77 & 0xff)) * sVar10 + 0x7f) >> 8),
                          CONCAT12((char)uVar76 +
                                   (char)((ushort)((uVar62 - (uVar76 & 0xff)) * sVar10 + 0x7f) >> 8)
                                   ,CONCAT11((char)uVar75 +
                                             (char)((ushort)((uVar61 - (uVar75 & 0xff)) * sVar10 +
                                                            0x7f) >> 8),
                                             (char)uVar74 +
                                             (char)((ushort)((uVar64 - (uVar74 & 0xff)) * sVar10 +
                                                            0x7f) >> 8))));
            uVar37 = (ulong)(param_2[1] + iVar53);
            param_2[1] = param_2[1] + iVar53;
            lVar32 = lVar32 + 1;
          } while (iVar38 != (int)lVar32);
        }
      }
      else if (-1 < (int)uVar35) {
        uVar26 = 0;
        lVar33 = lVar33 + uVar28 + lVar55 * (((long)(uVar37 << 0x20) >> 0x30) + 2);
        do {
          uVar39 = (uint)uVar41;
          uVar17 = 1;
          if (1 < uVar26) {
            uVar17 = 2;
          }
          uVar45 = uVar35 | 2;
          bVar16 = uVar35 != 0;
          uVar35 = uVar35 - 1;
          uVar46 = 1;
          if (bVar16 && uVar35 != 0) {
            uVar46 = 2;
          }
          iVar53 = *(int *)((long)&uStack_80 +
                           (ulong)((uVar17 & (uVar26 | 2)) * 3 + (uVar46 & uVar45)) * 4);
          lVar32 = lVar33 + (int)((int)uVar39 >> 0xe & 0xfffffffc);
          uVar17 = uVar39 >> 0xb & 0x1f;
          puVar23 = (uint *)(ulong)(uVar39 >> 0xb & 0x1f | 0x20);
          uVar28 = (ulong)CONCAT14((char)((uint)(*(int *)(&UNK_10e0309e4 + (ulong)uVar17 * 4) *
                                                iVar53) >> 8),
                                   (uint)(*(int *)(&UNK_10e0309e4 + (long)puVar23 * 4) * iVar53) >>
                                   8) & 0xff000000ff;
          bVar78 = (byte)uVar28;
          bVar84 = (byte)(uVar28 >> 0x20);
          uVar43 = *(undefined8 *)(lVar32 + -2);
          bVar89 = (byte)((ulong)uVar43 >> 8);
          bVar81 = (byte)((ulong)uVar43 >> 0x10);
          bVar82 = (byte)((ulong)uVar43 >> 0x18);
          bVar83 = (byte)((ulong)uVar43 >> 0x20);
          bVar85 = (byte)((ulong)uVar43 >> 0x28);
          bVar86 = (byte)((ulong)uVar43 >> 0x30);
          bVar87 = (byte)((ulong)uVar43 >> 0x38);
          bVar88 = (byte)uVar43 +
                   (char)((ushort)((uVar64 - (byte)uVar43) * (ushort)bVar78 + 0x7f) >> 8);
          bVar89 = bVar89 + (char)((ushort)((uVar61 - bVar89) * (ushort)bVar78 + 0x7f) >> 8);
          bVar81 = bVar81 + (char)((ushort)((uVar62 - bVar81) * (ushort)bVar78 + 0x7f) >> 8);
          bVar82 = bVar82 + (char)((ushort)((uVar63 - bVar82) * (ushort)bVar78 + 0x7f) >> 8);
          bVar83 = bVar83 + (char)((ushort)((uVar64 - bVar83) * (ushort)bVar84 + 0x7f) >> 8);
          bVar85 = bVar85 + (char)((ushort)((uVar61 - bVar85) * (ushort)bVar84 + 0x7f) >> 8);
          bVar86 = bVar86 + (char)((ushort)((uVar62 - bVar86) * (ushort)bVar84 + 0x7f) >> 8);
          bVar87 = bVar87 + (char)((ushort)((uVar63 - bVar87) * (ushort)bVar84 + 0x7f) >> 8);
          *(ulong *)(lVar32 + -2) =
               CONCAT17(bVar87 + (char)((ushort)((uVar63 - bVar87) * (ushort)bVar84 + 0x7f) >> 8),
                        CONCAT16(bVar86 + (char)((ushort)((uVar62 - bVar86) * (ushort)bVar84 + 0x7f)
                                                >> 8),
                                 CONCAT15(bVar85 + (char)((ushort)((uVar61 - bVar85) *
                                                                   (ushort)bVar84 + 0x7f) >> 8),
                                          CONCAT14(bVar83 + (char)((ushort)((uVar64 - bVar83) *
                                                                            (ushort)bVar84 + 0x7f)
                                                                  >> 8),
                                                   CONCAT13(bVar82 + (char)((ushort)((uVar63 - 
                                                  bVar82) * (ushort)bVar78 + 0x7f) >> 8),
                                                  CONCAT12(bVar81 + (char)((ushort)((uVar62 - bVar81
                                                                                    ) * (ushort)
                                                  bVar78 + 0x7f) >> 8),
                                                  CONCAT11(bVar89 + (char)((ushort)((uVar61 - bVar89
                                                                                    ) * (ushort)
                                                  bVar78 + 0x7f) >> 8),
                                                  bVar88 + (char)((ushort)((uVar64 - bVar88) *
                                                                           (ushort)bVar78 + 0x7f) >>
                                                                 8))))))));
          uVar17 = (uint)(*(int *)(&UNK_10e0309e4 + (ulong)(uVar17 ^ 0x3f) * 4) * iVar53) >> 8;
          uVar39 = uVar17 & 0xff;
          uVar91 = *(undefined4 *)(lVar32 + 6);
          bVar89 = (byte)((uint)uVar91 >> 8);
          bVar81 = (byte)((uint)uVar91 >> 0x10);
          bVar82 = (byte)((uint)uVar91 >> 0x18);
          uVar12 = CONCAT12(bVar89,(short)uVar91) & 0xff00ff;
          uVar28 = CONCAT44(uVar17,uVar17) & 0xff000000ff;
          uVar74 = (short)(((uVar5 & 0xffff) - (uVar12 & 0xffff)) * (int)uVar28 + 0x7f >> 8) +
                   (ushort)(byte)uVar91;
          uVar75 = (short)(((uint)uVar61 - (uint)(byte)(uVar12 >> 0x10)) * (int)(uVar28 >> 0x20) +
                           0x7f >> 8) + (ushort)bVar89;
          sVar10 = (short)(((uint)uVar62 - (uint)bVar81) * uVar39 + 0x7f >> 8) + (ushort)bVar81;
          uVar76 = (short)(((uint)uVar63 - (uint)bVar82) * uVar39 + 0x7f >> 8) + (ushort)bVar82;
          uVar13 = CONCAT52((uint5)(((uint6)(uVar76 & 0xff) << 0x20) >> 0x10),sVar10) &
                   0xffffffffff00ff;
          *(uint *)(lVar32 + 6) =
               CONCAT13((char)(uVar76 + ((ushort)((uVar63 - (byte)(uVar13 >> 0x20)) * (short)uVar39
                                                 + 0x7f) >> 8)),
                        CONCAT12((char)sVar10 +
                                 (char)((ushort)((uVar62 - (short)uVar13) * (short)uVar39 + 0x7f) >>
                                       8),CONCAT11((char)uVar75 +
                                                   (char)((ushort)((uVar61 - (uVar75 & 0xff)) *
                                                                   (short)(uVar28 >> 0x20) + 0x7f)
                                                         >> 8),
                                                   (char)uVar74 +
                                                   (char)((ushort)((uVar64 - (uVar74 & 0xff)) *
                                                                   (short)uVar28 + 0x7f) >> 8))));
          uVar41 = (ulong)(*param_2 + iVar38);
          *param_2 = *param_2 + iVar38;
          uVar26 = uVar26 + 1;
          lVar33 = lVar33 + lVar55;
        } while (uVar35 != 0xffffffff);
      }
    }
    puVar58 = param_4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
      return;
    }
LAB_109af2f9c:
    ___stack_chk_fail();
    puVar20 = (uint *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    if (puVar20 < (uint *)0xaaaaaaaaaaaaaab) {
      __Znwm((long)puVar20 * 0x18);
      return;
    }
    func_0x000104c4f740();
    puVar18 = *(undefined8 **)(puVar20 + 2);
    if (puVar18 < *(undefined8 **)(puVar20 + 4)) {
      uVar36 = *(undefined8 *)(puVar23 + 2);
      uVar43 = *(undefined8 *)puVar23;
      puVar18[2] = *(undefined8 *)(puVar23 + 4);
      puVar18[1] = uVar36;
      *puVar18 = uVar43;
      puVar18 = puVar18 + 3;
    }
    else {
      lVar29 = (long)puVar18 - *(long *)puVar20;
      uVar28 = (lVar29 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar28) {
        FUN_109af2fa0();
LAB_109af311c:
        puVar25 = puVar23 + -6;
        puVar34 = puVar20;
LAB_109af312c:
        while( true ) {
          puVar20 = puVar34;
          uVar28 = (long)puVar23 - (long)puVar20;
          uVar42 = ((long)uVar28 >> 3) * -0x5555555555555555;
          if (uVar42 - 2 == 0 || (long)uVar42 < 2) {
            if (uVar42 < 2) {
              return;
            }
            if (uVar42 == 2) {
              puVar56 = puVar23 + -6;
              uVar17 = *puVar56;
              uVar26 = *puVar20;
              bVar15 = SBORROW4(uVar17,uVar26);
              bVar16 = (int)(uVar17 - uVar26) < 0;
              if (uVar17 == uVar26) {
                uVar17 = puVar23[-4];
                uVar26 = puVar20[2];
                bVar15 = SBORROW4(uVar17,uVar26);
                bVar16 = (int)(uVar17 - uVar26) < 0;
                if (uVar17 == uVar26) {
                  bVar15 = SBORROW4(puVar23[-3],puVar20[3]);
                  bVar16 = (int)(puVar23[-3] - puVar20[3]) < 0;
                }
              }
              if (bVar16 == bVar15) {
                return;
              }
              uVar44 = *(undefined8 *)(puVar20 + 2);
              uVar43 = *(undefined8 *)puVar20;
              uVar31 = *(undefined8 *)(puVar20 + 4);
              uVar30 = *(undefined8 *)(puVar23 + -4);
              uVar36 = *(undefined8 *)puVar56;
              *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar23 + -2);
              *(undefined8 *)(puVar20 + 2) = uVar30;
              *(undefined8 *)puVar20 = uVar36;
              *(undefined8 *)(puVar23 + -2) = uVar31;
              *(undefined8 *)(puVar23 + -4) = uVar44;
              *(undefined8 *)puVar56 = uVar43;
              return;
            }
          }
          else {
            if (uVar42 == 3) {
              puVar56 = puVar20 + 6;
              uVar26 = *puVar56;
              uVar17 = *puVar20;
              bVar15 = SBORROW4(uVar26,uVar17);
              bVar16 = (int)(uVar26 - uVar17) < 0;
              if (uVar26 == uVar17) {
                uVar17 = puVar20[8];
                uVar39 = puVar20[2];
                bVar15 = SBORROW4(uVar17,uVar39);
                bVar16 = (int)(uVar17 - uVar39) < 0;
                if (uVar17 == uVar39) {
                  bVar15 = SBORROW4(puVar20[9],puVar20[3]);
                  bVar16 = (int)(puVar20[9] - puVar20[3]) < 0;
                }
              }
              if (bVar16 == bVar15) {
                uVar17 = *puVar25;
                bVar15 = SBORROW4(uVar17,uVar26);
                bVar16 = (int)(uVar17 - uVar26) < 0;
                if (uVar17 == uVar26) {
                  uVar26 = puVar23[-4];
                  uVar17 = puVar20[8];
                  bVar15 = SBORROW4(uVar26,uVar17);
                  bVar16 = (int)(uVar26 - uVar17) < 0;
                  if (uVar26 == uVar17) {
                    bVar15 = SBORROW4(puVar23[-3],puVar20[9]);
                    bVar16 = (int)(puVar23[-3] - puVar20[9]) < 0;
                  }
                }
                if (bVar16 != bVar15) {
                  uVar30 = *(undefined8 *)(puVar20 + 10);
                  uVar36 = *(undefined8 *)(puVar20 + 8);
                  uVar43 = *(undefined8 *)puVar56;
                  uVar31 = *(undefined8 *)(puVar23 + -2);
                  uVar44 = *(undefined8 *)puVar25;
                  *(undefined8 *)(puVar20 + 8) = *(undefined8 *)(puVar23 + -4);
                  *(undefined8 *)puVar56 = uVar44;
                  *(undefined8 *)(puVar20 + 10) = uVar31;
                  *(undefined8 *)(puVar23 + -4) = uVar36;
                  *(undefined8 *)puVar25 = uVar43;
                  *(undefined8 *)(puVar23 + -2) = uVar30;
                  uVar26 = *puVar56;
                  uVar17 = *puVar20;
                  bVar15 = SBORROW4(uVar26,uVar17);
                  bVar16 = (int)(uVar26 - uVar17) < 0;
                  if (uVar26 == uVar17) {
                    uVar26 = puVar20[8];
                    uVar17 = puVar20[2];
                    bVar15 = SBORROW4(uVar26,uVar17);
                    bVar16 = (int)(uVar26 - uVar17) < 0;
                    if (uVar26 == uVar17) {
                      bVar15 = SBORROW4(puVar20[9],puVar20[3]);
                      bVar16 = (int)(puVar20[9] - puVar20[3]) < 0;
                    }
                  }
                  if (bVar16 != bVar15) {
                    uVar44 = *(undefined8 *)(puVar20 + 4);
                    uVar36 = *(undefined8 *)(puVar20 + 2);
                    uVar43 = *(undefined8 *)puVar20;
                    *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar20 + 8);
                    *(undefined8 *)puVar20 = *(undefined8 *)puVar56;
                    *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar20 + 10);
                    *(undefined8 *)(puVar20 + 8) = uVar36;
                    *(undefined8 *)puVar56 = uVar43;
                    *(undefined8 *)(puVar20 + 10) = uVar44;
                  }
                }
              }
              else {
                uVar17 = *puVar25;
                bVar15 = SBORROW4(uVar17,uVar26);
                bVar16 = (int)(uVar17 - uVar26) < 0;
                if (uVar17 == uVar26) {
                  uVar26 = puVar23[-4];
                  uVar17 = puVar20[8];
                  bVar15 = SBORROW4(uVar26,uVar17);
                  bVar16 = (int)(uVar26 - uVar17) < 0;
                  if (uVar26 == uVar17) {
                    bVar15 = SBORROW4(puVar23[-3],puVar20[9]);
                    bVar16 = (int)(puVar23[-3] - puVar20[9]) < 0;
                  }
                }
                if (bVar16 == bVar15) {
                  uVar44 = *(undefined8 *)(puVar20 + 4);
                  uVar36 = *(undefined8 *)(puVar20 + 2);
                  uVar43 = *(undefined8 *)puVar20;
                  *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar20 + 8);
                  *(undefined8 *)puVar20 = *(undefined8 *)puVar56;
                  *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar20 + 10);
                  *(undefined8 *)(puVar20 + 8) = uVar36;
                  *(undefined8 *)puVar56 = uVar43;
                  *(undefined8 *)(puVar20 + 10) = uVar44;
                  uVar26 = *puVar25;
                  uVar17 = *puVar56;
                  bVar15 = SBORROW4(uVar26,uVar17);
                  bVar16 = (int)(uVar26 - uVar17) < 0;
                  if (uVar26 == uVar17) {
                    uVar26 = puVar23[-4];
                    uVar17 = puVar20[8];
                    bVar15 = SBORROW4(uVar26,uVar17);
                    bVar16 = (int)(uVar26 - uVar17) < 0;
                    if (uVar26 == uVar17) {
                      bVar15 = SBORROW4(puVar23[-3],puVar20[9]);
                      bVar16 = (int)(puVar23[-3] - puVar20[9]) < 0;
                    }
                  }
                  if (bVar16 == bVar15) {
                    return;
                  }
                  uVar36 = *(undefined8 *)(puVar20 + 10);
                  uVar43 = *(undefined8 *)(puVar20 + 8);
                  uVar69 = (undefined2)uVar43;
                  uVar70 = (undefined2)((ulong)uVar43 >> 0x10);
                  uVar71 = (undefined2)((ulong)uVar43 >> 0x20);
                  uVar72 = (undefined2)((ulong)uVar43 >> 0x30);
                  uVar43 = *(undefined8 *)puVar56;
                  uVar65 = (undefined2)uVar43;
                  uVar66 = (undefined2)((ulong)uVar43 >> 0x10);
                  uVar67 = (undefined2)((ulong)uVar43 >> 0x20);
                  uVar68 = (undefined2)((ulong)uVar43 >> 0x30);
                  uVar44 = *(undefined8 *)(puVar23 + -2);
                  uVar43 = *(undefined8 *)puVar25;
                  *(undefined8 *)(puVar20 + 8) = *(undefined8 *)(puVar23 + -4);
                  *(undefined8 *)puVar56 = uVar43;
                  *(undefined8 *)(puVar20 + 10) = uVar44;
                }
                else {
                  uVar36 = *(undefined8 *)(puVar20 + 4);
                  uVar43 = *(undefined8 *)(puVar20 + 2);
                  uVar69 = (undefined2)uVar43;
                  uVar70 = (undefined2)((ulong)uVar43 >> 0x10);
                  uVar71 = (undefined2)((ulong)uVar43 >> 0x20);
                  uVar72 = (undefined2)((ulong)uVar43 >> 0x30);
                  uVar43 = *(undefined8 *)puVar20;
                  uVar65 = (undefined2)uVar43;
                  uVar66 = (undefined2)((ulong)uVar43 >> 0x10);
                  uVar67 = (undefined2)((ulong)uVar43 >> 0x20);
                  uVar68 = (undefined2)((ulong)uVar43 >> 0x30);
                  uVar44 = *(undefined8 *)(puVar23 + -2);
                  uVar43 = *(undefined8 *)puVar25;
                  *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar23 + -4);
                  *(undefined8 *)puVar20 = uVar43;
                  *(undefined8 *)(puVar20 + 4) = uVar44;
                }
                *(ulong *)(puVar23 + -4) = CONCAT26(uVar72,CONCAT24(uVar71,CONCAT22(uVar70,uVar69)))
                ;
                *(ulong *)puVar25 = CONCAT26(uVar68,CONCAT24(uVar67,CONCAT22(uVar66,uVar65)));
                *(undefined8 *)(puVar23 + -2) = uVar36;
              }
              return;
            }
            if (uVar42 == 4) {
              FUN_109af3d14(puVar20,puVar20 + 6,puVar20 + 0xc);
              puVar56 = puVar23 + -6;
              uVar17 = *puVar56;
              uVar26 = puVar20[0xc];
              bVar15 = SBORROW4(uVar17,uVar26);
              bVar16 = (int)(uVar17 - uVar26) < 0;
              if (uVar17 == uVar26) {
                uVar17 = puVar23[-4];
                uVar26 = puVar20[0xe];
                bVar15 = SBORROW4(uVar17,uVar26);
                bVar16 = (int)(uVar17 - uVar26) < 0;
                if (uVar17 == uVar26) {
                  bVar15 = SBORROW4(puVar23[-3],puVar20[0xf]);
                  bVar16 = (int)(puVar23[-3] - puVar20[0xf]) < 0;
                }
              }
              if (bVar16 == bVar15) {
                return;
              }
              uVar36 = *(undefined8 *)(puVar20 + 0xe);
              uVar43 = *(undefined8 *)(puVar20 + 0xc);
              uVar30 = *(undefined8 *)(puVar20 + 0x10);
              uVar31 = *(undefined8 *)(puVar23 + -2);
              uVar44 = *(undefined8 *)puVar56;
              *(undefined8 *)(puVar20 + 0xe) = *(undefined8 *)(puVar23 + -4);
              *(undefined8 *)(puVar20 + 0xc) = uVar44;
              *(undefined8 *)(puVar20 + 0x10) = uVar31;
              *(undefined8 *)(puVar23 + -2) = uVar30;
              *(undefined8 *)(puVar23 + -4) = uVar36;
              *(undefined8 *)puVar56 = uVar43;
              uVar26 = puVar20[0xc];
              uVar17 = puVar20[6];
              bVar15 = SBORROW4(uVar26,uVar17);
              bVar16 = (int)(uVar26 - uVar17) < 0;
              if (uVar26 == uVar17) {
                uVar26 = puVar20[0xe];
                uVar17 = puVar20[8];
                bVar15 = SBORROW4(uVar26,uVar17);
                bVar16 = (int)(uVar26 - uVar17) < 0;
                if (uVar26 == uVar17) {
                  bVar15 = SBORROW4(puVar20[0xf],puVar20[9]);
                  bVar16 = (int)(puVar20[0xf] - puVar20[9]) < 0;
                }
              }
              if (bVar16 == bVar15) {
                return;
              }
              uVar44 = *(undefined8 *)(puVar20 + 10);
              uVar36 = *(undefined8 *)(puVar20 + 8);
              uVar43 = *(undefined8 *)(puVar20 + 6);
              *(undefined8 *)(puVar20 + 8) = *(undefined8 *)(puVar20 + 0xe);
              *(undefined8 *)(puVar20 + 6) = *(undefined8 *)(puVar20 + 0xc);
              *(undefined8 *)(puVar20 + 10) = *(undefined8 *)(puVar20 + 0x10);
              *(undefined8 *)(puVar20 + 0xe) = uVar36;
              *(undefined8 *)(puVar20 + 0xc) = uVar43;
              *(undefined8 *)(puVar20 + 0x10) = uVar44;
              uVar26 = puVar20[6];
              uVar17 = *puVar20;
              bVar15 = SBORROW4(uVar26,uVar17);
              bVar16 = (int)(uVar26 - uVar17) < 0;
              if (uVar26 == uVar17) {
                uVar26 = puVar20[8];
                uVar17 = puVar20[2];
                bVar15 = SBORROW4(uVar26,uVar17);
                bVar16 = (int)(uVar26 - uVar17) < 0;
                if (uVar26 == uVar17) {
                  bVar15 = SBORROW4(puVar20[9],puVar20[3]);
                  bVar16 = (int)(puVar20[9] - puVar20[3]) < 0;
                }
              }
              if (bVar16 == bVar15) {
                return;
              }
              uVar36 = *(undefined8 *)(puVar20 + 2);
              uVar43 = *(undefined8 *)puVar20;
              uVar44 = *(undefined8 *)(puVar20 + 4);
              *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar20 + 8);
              *(undefined8 *)puVar20 = *(undefined8 *)(puVar20 + 6);
              *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar20 + 10);
              *(undefined8 *)(puVar20 + 8) = uVar36;
              *(undefined8 *)(puVar20 + 6) = uVar43;
              *(undefined8 *)(puVar20 + 10) = uVar44;
              return;
            }
            if (uVar42 == 5) {
              puVar56 = puVar20 + 6;
              puVar34 = puVar20 + 0xc;
              puVar21 = puVar20 + 0x12;
              FUN_109af3d14();
              uVar26 = *puVar21;
              uVar17 = *puVar34;
              bVar15 = SBORROW4(uVar26,uVar17);
              bVar16 = (int)(uVar26 - uVar17) < 0;
              if (uVar26 == uVar17) {
                uVar26 = puVar20[0x14];
                uVar17 = puVar20[0xe];
                bVar15 = SBORROW4(uVar26,uVar17);
                bVar16 = (int)(uVar26 - uVar17) < 0;
                if (uVar26 == uVar17) {
                  bVar15 = SBORROW4(puVar20[0x15],puVar20[0xf]);
                  bVar16 = (int)(puVar20[0x15] - puVar20[0xf]) < 0;
                }
              }
              if (bVar16 != bVar15) {
                uVar44 = *(undefined8 *)(puVar20 + 0x10);
                uVar36 = *(undefined8 *)(puVar20 + 0xe);
                uVar43 = *(undefined8 *)puVar34;
                *(undefined8 *)(puVar20 + 0xe) = *(undefined8 *)(puVar20 + 0x14);
                *(undefined8 *)puVar34 = *(undefined8 *)puVar21;
                *(undefined8 *)(puVar20 + 0x10) = *(undefined8 *)(puVar20 + 0x16);
                *(undefined8 *)(puVar20 + 0x14) = uVar36;
                *(undefined8 *)puVar21 = uVar43;
                *(undefined8 *)(puVar20 + 0x16) = uVar44;
                uVar26 = *puVar34;
                uVar17 = *puVar56;
                bVar15 = SBORROW4(uVar26,uVar17);
                bVar16 = (int)(uVar26 - uVar17) < 0;
                if (uVar26 == uVar17) {
                  uVar26 = puVar20[0xe];
                  uVar17 = puVar20[8];
                  bVar15 = SBORROW4(uVar26,uVar17);
                  bVar16 = (int)(uVar26 - uVar17) < 0;
                  if (uVar26 == uVar17) {
                    bVar15 = SBORROW4(puVar20[0xf],puVar20[9]);
                    bVar16 = (int)(puVar20[0xf] - puVar20[9]) < 0;
                  }
                }
                if (bVar16 != bVar15) {
                  uVar44 = *(undefined8 *)(puVar20 + 10);
                  uVar36 = *(undefined8 *)(puVar20 + 8);
                  uVar43 = *(undefined8 *)puVar56;
                  *(undefined8 *)(puVar20 + 8) = *(undefined8 *)(puVar20 + 0xe);
                  *(undefined8 *)puVar56 = *(undefined8 *)puVar34;
                  *(undefined8 *)(puVar20 + 10) = *(undefined8 *)(puVar20 + 0x10);
                  *(undefined8 *)(puVar20 + 0xe) = uVar36;
                  *(undefined8 *)puVar34 = uVar43;
                  *(undefined8 *)(puVar20 + 0x10) = uVar44;
                  uVar26 = *puVar56;
                  uVar17 = *puVar20;
                  bVar15 = SBORROW4(uVar26,uVar17);
                  bVar16 = (int)(uVar26 - uVar17) < 0;
                  if (uVar26 == uVar17) {
                    uVar26 = puVar20[8];
                    uVar17 = puVar20[2];
                    bVar15 = SBORROW4(uVar26,uVar17);
                    bVar16 = (int)(uVar26 - uVar17) < 0;
                    if (uVar26 == uVar17) {
                      bVar15 = SBORROW4(puVar20[9],puVar20[3]);
                      bVar16 = (int)(puVar20[9] - puVar20[3]) < 0;
                    }
                  }
                  if (bVar16 != bVar15) {
                    uVar44 = *(undefined8 *)(puVar20 + 4);
                    uVar36 = *(undefined8 *)(puVar20 + 2);
                    uVar43 = *(undefined8 *)puVar20;
                    *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar20 + 8);
                    *(undefined8 *)puVar20 = *(undefined8 *)puVar56;
                    *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar20 + 10);
                    *(undefined8 *)(puVar20 + 8) = uVar36;
                    *(undefined8 *)puVar56 = uVar43;
                    *(undefined8 *)(puVar20 + 10) = uVar44;
                  }
                }
              }
              uVar26 = *puVar25;
              uVar17 = *puVar21;
              bVar15 = SBORROW4(uVar26,uVar17);
              bVar16 = (int)(uVar26 - uVar17) < 0;
              if (uVar26 == uVar17) {
                uVar26 = puVar23[-4];
                uVar17 = puVar20[0x14];
                bVar15 = SBORROW4(uVar26,uVar17);
                bVar16 = (int)(uVar26 - uVar17) < 0;
                if (uVar26 == uVar17) {
                  bVar15 = SBORROW4(puVar23[-3],puVar20[0x15]);
                  bVar16 = (int)(puVar23[-3] - puVar20[0x15]) < 0;
                }
              }
              if (bVar16 != bVar15) {
                uVar30 = *(undefined8 *)(puVar20 + 0x16);
                uVar36 = *(undefined8 *)(puVar20 + 0x14);
                uVar43 = *(undefined8 *)puVar21;
                uVar31 = *(undefined8 *)(puVar23 + -2);
                uVar44 = *(undefined8 *)puVar25;
                *(undefined8 *)(puVar20 + 0x14) = *(undefined8 *)(puVar23 + -4);
                *(undefined8 *)puVar21 = uVar44;
                *(undefined8 *)(puVar20 + 0x16) = uVar31;
                *(undefined8 *)(puVar23 + -4) = uVar36;
                *(undefined8 *)puVar25 = uVar43;
                *(undefined8 *)(puVar23 + -2) = uVar30;
                uVar26 = *puVar21;
                uVar17 = *puVar34;
                bVar15 = SBORROW4(uVar26,uVar17);
                bVar16 = (int)(uVar26 - uVar17) < 0;
                if (uVar26 == uVar17) {
                  uVar26 = puVar20[0x14];
                  uVar17 = puVar20[0xe];
                  bVar15 = SBORROW4(uVar26,uVar17);
                  bVar16 = (int)(uVar26 - uVar17) < 0;
                  if (uVar26 == uVar17) {
                    bVar15 = SBORROW4(puVar20[0x15],puVar20[0xf]);
                    bVar16 = (int)(puVar20[0x15] - puVar20[0xf]) < 0;
                  }
                }
                if (bVar16 != bVar15) {
                  uVar44 = *(undefined8 *)(puVar20 + 0x10);
                  uVar36 = *(undefined8 *)(puVar20 + 0xe);
                  uVar43 = *(undefined8 *)puVar34;
                  *(undefined8 *)(puVar20 + 0xe) = *(undefined8 *)(puVar20 + 0x14);
                  *(undefined8 *)puVar34 = *(undefined8 *)puVar21;
                  *(undefined8 *)(puVar20 + 0x10) = *(undefined8 *)(puVar20 + 0x16);
                  *(undefined8 *)(puVar20 + 0x14) = uVar36;
                  *(undefined8 *)puVar21 = uVar43;
                  *(undefined8 *)(puVar20 + 0x16) = uVar44;
                  uVar26 = *puVar34;
                  uVar17 = *puVar56;
                  bVar15 = SBORROW4(uVar26,uVar17);
                  bVar16 = (int)(uVar26 - uVar17) < 0;
                  if (uVar26 == uVar17) {
                    uVar26 = puVar20[0xe];
                    uVar17 = puVar20[8];
                    bVar15 = SBORROW4(uVar26,uVar17);
                    bVar16 = (int)(uVar26 - uVar17) < 0;
                    if (uVar26 == uVar17) {
                      bVar15 = SBORROW4(puVar20[0xf],puVar20[9]);
                      bVar16 = (int)(puVar20[0xf] - puVar20[9]) < 0;
                    }
                  }
                  if (bVar16 != bVar15) {
                    uVar44 = *(undefined8 *)(puVar20 + 10);
                    uVar36 = *(undefined8 *)(puVar20 + 8);
                    uVar43 = *(undefined8 *)puVar56;
                    *(undefined8 *)(puVar20 + 8) = *(undefined8 *)(puVar20 + 0xe);
                    *(undefined8 *)puVar56 = *(undefined8 *)puVar34;
                    *(undefined8 *)(puVar20 + 10) = *(undefined8 *)(puVar20 + 0x10);
                    *(undefined8 *)(puVar20 + 0xe) = uVar36;
                    *(undefined8 *)puVar34 = uVar43;
                    *(undefined8 *)(puVar20 + 0x10) = uVar44;
                    uVar26 = *puVar56;
                    uVar17 = *puVar20;
                    bVar15 = SBORROW4(uVar26,uVar17);
                    bVar16 = (int)(uVar26 - uVar17) < 0;
                    if (uVar26 == uVar17) {
                      uVar26 = puVar20[8];
                      uVar17 = puVar20[2];
                      bVar15 = SBORROW4(uVar26,uVar17);
                      bVar16 = (int)(uVar26 - uVar17) < 0;
                      if (uVar26 == uVar17) {
                        bVar15 = SBORROW4(puVar20[9],puVar20[3]);
                        bVar16 = (int)(puVar20[9] - puVar20[3]) < 0;
                      }
                    }
                    if (bVar16 != bVar15) {
                      uVar44 = *(undefined8 *)(puVar20 + 4);
                      uVar36 = *(undefined8 *)(puVar20 + 2);
                      uVar43 = *(undefined8 *)puVar20;
                      *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar20 + 8);
                      *(undefined8 *)puVar20 = *(undefined8 *)puVar56;
                      *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar20 + 10);
                      *(undefined8 *)(puVar20 + 8) = uVar36;
                      *(undefined8 *)puVar56 = uVar43;
                      *(undefined8 *)(puVar20 + 10) = uVar44;
                    }
                  }
                }
              }
              return;
            }
          }
          if ((long)uVar28 < 0x240) {
            puVar56 = puVar20 + 6;
            if (((ulong)puVar58 & 1) == 0) {
              if (puVar20 == puVar23 || puVar56 == puVar23) {
                return;
              }
              goto LAB_109af3c54;
            }
            if (puVar20 == puVar23 || puVar56 == puVar23) {
              return;
            }
            lVar29 = 0;
            puVar34 = puVar20;
            goto LAB_109af37e4;
          }
          if (puVar56 == (uint *)0x0) {
            if (puVar20 == puVar23) {
              return;
            }
            uVar37 = uVar42 - 2 >> 1;
            uVar41 = uVar37;
            goto LAB_109af38e8;
          }
          puVar34 = puVar20 + (uVar42 >> 1) * 6;
          if (uVar28 < 0xc01) {
            FUN_109af3d14(puVar34,puVar20,puVar25);
          }
          else {
            FUN_109af3d14(puVar20,puVar34,puVar25);
            FUN_109af3d14(puVar20 + 6,puVar34 + -6,puVar23 + -0xc);
            FUN_109af3d14(puVar20 + 0xc,puVar34 + 6,puVar23 + -0x12);
            FUN_109af3d14(puVar34 + -6,puVar34,puVar34 + 6);
            uVar44 = *(undefined8 *)(puVar20 + 2);
            uVar43 = *(undefined8 *)puVar20;
            uVar30 = *(undefined8 *)(puVar20 + 4);
            uVar31 = *(undefined8 *)(puVar34 + 4);
            uVar36 = *(undefined8 *)puVar34;
            *(undefined8 *)(puVar20 + 2) = *(undefined8 *)(puVar34 + 2);
            *(undefined8 *)puVar20 = uVar36;
            *(undefined8 *)(puVar20 + 4) = uVar31;
            *(undefined8 *)(puVar34 + 4) = uVar30;
            *(undefined8 *)(puVar34 + 2) = uVar44;
            *(undefined8 *)puVar34 = uVar43;
          }
          puVar56 = (uint *)((long)puVar56 + -1);
          uVar26 = *puVar20;
          if (((ulong)puVar58 & 1) != 0) break;
          if (puVar20[-6] != uVar26) {
            if ((int)uVar26 <= (int)puVar20[-6]) {
              uVar39 = puVar20[2];
              goto LAB_109af3454;
            }
            break;
          }
          uVar39 = puVar20[-4];
          uVar17 = puVar20[2];
          if (uVar39 != uVar17) {
            bVar16 = (int)uVar17 <= (int)uVar39;
            uVar39 = uVar17;
            if (bVar16) goto LAB_109af3454;
            break;
          }
          if ((int)puVar20[-3] < (int)puVar20[3]) break;
LAB_109af3454:
          uVar17 = puVar20[3];
          uVar46 = *puVar25;
          bVar15 = SBORROW4(uVar26,uVar46);
          bVar16 = (int)(uVar26 - uVar46) < 0;
          if (uVar26 == uVar46) {
            uVar35 = puVar23[-4];
            bVar15 = SBORROW4(uVar39,uVar35);
            bVar16 = (int)(uVar39 - uVar35) < 0;
            if (uVar39 == uVar35) {
              bVar15 = SBORROW4(uVar17,puVar23[-3]);
              bVar16 = (int)(uVar17 - puVar23[-3]) < 0;
            }
          }
          puVar34 = puVar20 + 6;
          if (bVar16 == bVar15) {
            for (; puVar34 < puVar23; puVar34 = puVar34 + 6) {
              uVar35 = *puVar34;
              bVar15 = SBORROW4(uVar26,uVar35);
              bVar16 = (int)(uVar26 - uVar35) < 0;
              if (uVar26 == uVar35) {
                uVar35 = puVar34[2];
                bVar15 = SBORROW4(uVar39,uVar35);
                bVar16 = (int)(uVar39 - uVar35) < 0;
                if (uVar39 == uVar35) {
                  bVar15 = SBORROW4(uVar17,puVar34[3]);
                  bVar16 = (int)(uVar17 - puVar34[3]) < 0;
                }
              }
              if (bVar16 != bVar15) break;
            }
          }
          else {
            while( true ) {
              uVar35 = *puVar34;
              bVar15 = SBORROW4(uVar26,uVar35);
              bVar16 = (int)(uVar26 - uVar35) < 0;
              if (uVar26 == uVar35) {
                uVar35 = puVar34[2];
                bVar15 = SBORROW4(uVar39,uVar35);
                bVar16 = (int)(uVar39 - uVar35) < 0;
                if (uVar39 == uVar35) {
                  bVar15 = SBORROW4(uVar17,puVar34[3]);
                  bVar16 = (int)(uVar17 - puVar34[3]) < 0;
                }
              }
              if (bVar16 != bVar15) break;
              puVar34 = puVar34 + 6;
            }
          }
          uVar35 = puVar20[1];
          uVar43 = *(undefined8 *)(puVar20 + 4);
          puVar21 = puVar23;
          puVar22 = puVar25;
          if (puVar34 < puVar23) {
            while( true ) {
              puVar21 = puVar22;
              bVar15 = SBORROW4(uVar26,uVar46);
              bVar16 = (int)(uVar26 - uVar46) < 0;
              if (uVar26 == uVar46) {
                uVar46 = puVar21[2];
                bVar15 = SBORROW4(uVar39,uVar46);
                bVar16 = (int)(uVar39 - uVar46) < 0;
                if (uVar39 == uVar46) {
                  bVar15 = SBORROW4(uVar17,puVar21[3]);
                  bVar16 = (int)(uVar17 - puVar21[3]) < 0;
                }
              }
              if (bVar16 == bVar15) break;
              uVar46 = puVar21[-6];
              puVar22 = puVar21 + -6;
            }
          }
          while (puVar34 < puVar21) {
            uVar30 = *(undefined8 *)(puVar34 + 2);
            uVar36 = *(undefined8 *)puVar34;
            uVar49 = *(undefined8 *)(puVar34 + 4);
            uVar31 = *(undefined8 *)(puVar21 + 2);
            uVar44 = *(undefined8 *)puVar21;
            *(undefined8 *)(puVar34 + 4) = *(undefined8 *)(puVar21 + 4);
            *(undefined8 *)(puVar34 + 2) = uVar31;
            *(undefined8 *)puVar34 = uVar44;
            *(undefined8 *)(puVar21 + 4) = uVar49;
            *(undefined8 *)(puVar21 + 2) = uVar30;
            *(undefined8 *)puVar21 = uVar36;
            puVar22 = puVar34;
            do {
              puVar34 = puVar22 + 6;
              uVar46 = *puVar34;
              bVar15 = SBORROW4(uVar26,uVar46);
              bVar16 = (int)(uVar26 - uVar46) < 0;
              if (uVar26 == uVar46) {
                uVar46 = puVar22[8];
                bVar15 = SBORROW4(uVar39,uVar46);
                bVar16 = (int)(uVar39 - uVar46) < 0;
                if (uVar39 == uVar46) {
                  bVar15 = SBORROW4(uVar17,puVar22[9]);
                  bVar16 = (int)(uVar17 - puVar22[9]) < 0;
                }
              }
              puVar47 = puVar21;
              puVar22 = puVar34;
            } while (bVar16 == bVar15);
            do {
              puVar21 = puVar47 + -6;
              uVar46 = *puVar21;
              bVar15 = SBORROW4(uVar26,uVar46);
              bVar16 = (int)(uVar26 - uVar46) < 0;
              if (uVar26 == uVar46) {
                uVar46 = puVar47[-4];
                bVar15 = SBORROW4(uVar39,uVar46);
                bVar16 = (int)(uVar39 - uVar46) < 0;
                if (uVar39 == uVar46) {
                  bVar15 = SBORROW4(uVar17,puVar47[-3]);
                  bVar16 = (int)(uVar17 - puVar47[-3]) < 0;
                }
              }
              puVar47 = puVar21;
            } while (bVar16 != bVar15);
          }
          if (puVar34 + -6 != puVar20) {
            uVar44 = *(undefined8 *)(puVar34 + -4);
            uVar36 = *(undefined8 *)(puVar34 + -6);
            *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar34 + -2);
            *(undefined8 *)(puVar20 + 2) = uVar44;
            *(undefined8 *)puVar20 = uVar36;
          }
          puVar58 = (undefined4 *)0x0;
          puVar34[-6] = uVar26;
          puVar34[-5] = uVar35;
          puVar34[-4] = uVar39;
          puVar34[-3] = uVar17;
          *(undefined8 *)(puVar34 + -2) = uVar43;
        }
        lVar29 = 0;
        uVar43 = *(undefined8 *)(puVar20 + 1);
        uVar17 = puVar20[2];
        uVar39 = puVar20[3];
        uVar36 = *(undefined8 *)(puVar20 + 4);
        while( true ) {
          uVar46 = *(uint *)((long)puVar20 + lVar29 + 0x18);
          bVar15 = SBORROW4(uVar46,uVar26);
          bVar16 = (int)(uVar46 - uVar26) < 0;
          if (uVar46 == uVar26) {
            uVar46 = *(uint *)((long)puVar20 + lVar29 + 0x20);
            bVar15 = SBORROW4(uVar46,uVar17);
            bVar16 = (int)(uVar46 - uVar17) < 0;
            if (uVar46 == uVar17) {
              iVar53 = *(int *)((long)puVar20 + lVar29 + 0x24);
              bVar15 = SBORROW4(iVar53,uVar39);
              bVar16 = (int)(iVar53 - uVar39) < 0;
            }
          }
          if (bVar16 == bVar15) break;
          lVar29 = lVar29 + 0x18;
        }
        puVar21 = (uint *)((long)puVar20 + lVar29 + 0x18);
        puVar22 = puVar25;
        if (lVar29 == 0) {
          puVar34 = puVar25;
          puVar22 = puVar23;
          if (puVar21 < puVar23) {
            do {
              puVar22 = puVar34;
              if (*puVar34 == uVar26) {
                if (puVar34[2] == uVar17) {
                  if ((puVar34 <= puVar21) || ((int)puVar34[3] < (int)uVar39)) break;
                }
                else if ((puVar34 <= puVar21) || ((int)puVar34[2] < (int)uVar17)) break;
              }
              else if ((int)*puVar34 < (int)uVar26 || puVar34 <= puVar21) break;
              puVar34 = puVar34 + -6;
            } while( true );
          }
        }
        else {
          while( true ) {
            uVar46 = *puVar22;
            bVar15 = SBORROW4(uVar46,uVar26);
            bVar16 = (int)(uVar46 - uVar26) < 0;
            if (uVar46 == uVar26) {
              uVar46 = puVar22[2];
              bVar15 = SBORROW4(uVar46,uVar17);
              bVar16 = (int)(uVar46 - uVar17) < 0;
              if (uVar46 == uVar17) {
                bVar15 = SBORROW4(puVar22[3],uVar39);
                bVar16 = (int)(puVar22[3] - uVar39) < 0;
              }
            }
            if (bVar16 != bVar15) break;
            puVar22 = puVar22 + -6;
          }
        }
        puVar47 = puVar22;
        puVar34 = puVar21;
        puVar59 = puVar21;
        if (puVar21 < puVar22) {
          do {
            uVar44 = *(undefined8 *)puVar59;
            uVar30 = *(undefined8 *)(puVar59 + 2);
            uVar51 = *(undefined8 *)(puVar59 + 4);
            uVar31 = *(undefined8 *)puVar47;
            uVar49 = *(undefined8 *)(puVar47 + 2);
            *(undefined8 *)(puVar59 + 4) = *(undefined8 *)(puVar47 + 4);
            *(undefined8 *)(puVar59 + 2) = uVar49;
            *(undefined8 *)puVar59 = uVar31;
            *(undefined8 *)(puVar47 + 4) = uVar51;
            *(undefined8 *)(puVar47 + 2) = uVar30;
            *(undefined8 *)puVar47 = uVar44;
            do {
              puVar34 = puVar59 + 6;
              uVar46 = *puVar34;
              bVar15 = SBORROW4(uVar46,uVar26);
              bVar16 = (int)(uVar46 - uVar26) < 0;
              if (uVar46 == uVar26) {
                uVar46 = puVar59[8];
                bVar15 = SBORROW4(uVar46,uVar17);
                bVar16 = (int)(uVar46 - uVar17) < 0;
                if (uVar46 == uVar17) {
                  bVar15 = SBORROW4(puVar59[9],uVar39);
                  bVar16 = (int)(puVar59[9] - uVar39) < 0;
                }
              }
              puVar59 = puVar34;
            } while (bVar16 != bVar15);
            do {
              puVar48 = puVar47 + -6;
              uVar46 = *puVar48;
              bVar15 = SBORROW4(uVar46,uVar26);
              bVar16 = (int)(uVar46 - uVar26) < 0;
              if (uVar46 == uVar26) {
                uVar46 = puVar47[-4];
                bVar15 = SBORROW4(uVar46,uVar17);
                bVar16 = (int)(uVar46 - uVar17) < 0;
                if (uVar46 == uVar17) {
                  bVar15 = SBORROW4(puVar47[-3],uVar39);
                  bVar16 = (int)(puVar47[-3] - uVar39) < 0;
                }
              }
              puVar47 = puVar48;
            } while (bVar16 == bVar15);
          } while (puVar34 < puVar48);
        }
        puVar47 = puVar34 + -6;
        if (puVar47 != puVar20) {
          uVar44 = *(undefined8 *)puVar47;
          uVar30 = *(undefined8 *)(puVar34 + -4);
          *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar34 + -2);
          *(undefined8 *)(puVar20 + 2) = uVar30;
          *(undefined8 *)puVar20 = uVar44;
        }
        puVar34[-6] = uVar26;
        *(undefined8 *)(puVar34 + -5) = uVar43;
        puVar34[-3] = uVar39;
        *(undefined8 *)(puVar34 + -2) = uVar36;
        if (puVar22 <= puVar21) {
          puVar21 = puVar20;
          FUN_109af4120(puVar20,puVar47);
          puVar22 = puVar34;
          FUN_109af4120(puVar34,puVar23);
          if ((int)puVar22 != 0) goto LAB_109af35d0;
          if (((ulong)puVar21 & 1) != 0) goto LAB_109af312c;
        }
        FUN_109af30ec(puVar20,puVar47,puVar56,(uint)puVar58 & 1);
        puVar58 = (undefined4 *)0x0;
        goto LAB_109af312c;
      }
      lVar33 = (long)*(undefined8 **)(puVar20 + 4) - *(long *)puVar20 >> 3;
      uVar42 = lVar33 * 0x5555555555555556;
      if (uVar42 < uVar28 || uVar42 - uVar28 == 0) {
        uVar42 = uVar28;
      }
      if (0x555555555555554 < (ulong)(lVar33 * -0x5555555555555555)) {
        uVar42 = 0xaaaaaaaaaaaaaaa;
      }
      puVar56 = puVar23;
      FUN_109af2fb4();
      puVar2 = (undefined8 *)(uVar42 + lVar29);
      uVar36 = *(undefined8 *)(puVar23 + 2);
      uVar43 = *(undefined8 *)puVar23;
      puVar2[2] = *(undefined8 *)(puVar23 + 4);
      puVar2[1] = uVar36;
      *puVar2 = uVar43;
      puVar18 = puVar2 + 3;
      lVar33 = (long)puVar2 - (*(long *)(puVar20 + 2) - *(long *)puVar20);
      _memcpy(lVar33);
      lVar29 = *(long *)puVar20;
      *(long *)puVar20 = lVar33;
      *(undefined8 **)(puVar20 + 2) = puVar18;
      *(ulong *)(puVar20 + 4) = uVar42 + (long)puVar56 * 0x18;
      if (lVar29 != 0) {
        __ZdlPv();
      }
    }
    *(undefined8 **)(puVar20 + 2) = puVar18;
    return;
  }
  uVar26 = *param_2;
  puVar23 = (uint *)(ulong)uVar26;
  uVar39 = param_2[1];
  puVar56 = (uint *)(ulong)uVar39;
  uVar17 = *param_3;
  uVar46 = param_3[1];
  puVar58 = (undefined4 *)(ulong)uVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar29) goto LAB_109af2f9c;
  uStack_78 = uVar26;
  uStack_74 = uVar39;
  uStack_80._0_4_ = uVar17;
  uStack_80._4_4_ = uVar46;
  if ((param_1[3] <= uVar26 || param_1[3] <= uVar17) ||
     (param_1[2] <= uVar39 || param_1[2] <= uVar46)) {
    uStack_70 = NEON_rev64(**(undefined8 **)(param_1 + 0x10),4);
    puVar18 = &uStack_70;
    FUN_109aed5bc(puVar18,&uStack_78,&uStack_80);
    if (((ulong)puVar18 & 1) == 0) {
      uVar39 = 0;
      uVar17 = 0;
      uVar26 = 0;
      iVar57 = 0;
      iVar53 = 0;
      iVar38 = 0;
      puVar54 = *(undefined1 **)(param_1 + 4);
      uVar28 = (ulong)param_1[1];
      goto LAB_109af1cb4;
    }
  }
  uVar28 = (ulong)param_1[1];
  if ((int)param_1[1] < 1) {
    uVar39 = 0;
  }
  else {
    uVar39 = *(uint *)(*(long *)(param_1 + 0x12) + uVar28 * 8 + -8);
  }
  uVar35 = (uint)uStack_80 - uStack_78;
  uVar26 = (int)uVar35 >> 0x1f;
  uVar17 = (uStack_80._4_4_ - uStack_74 ^ uVar26) - uVar26;
  uVar46 = -uVar35;
  if (-1 < (int)uVar35) {
    uVar46 = uVar35;
  }
  puVar54 = (undefined1 *)
            (*(long *)(param_1 + 4) +
             *(long *)(param_1 + 0x14) *
             (long)(int)(uStack_80._4_4_ & uVar26 | uStack_74 & (uVar26 ^ 0xffffffff)) +
            (long)(int)(((uint)uStack_80 & uVar26 | uStack_78 & (uVar26 ^ 0xffffffff)) * uVar39));
  uVar35 = -uVar17;
  if (-1 < (int)uVar17) {
    uVar35 = uVar17;
  }
  uVar17 = ((uint)*(long *)(param_1 + 0x14) ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f);
  uVar26 = uVar35;
  if ((int)uVar35 <= (int)uVar46) {
    uVar26 = 0;
  }
  uVar45 = uVar26 ^ uVar46;
  if ((int)uVar35 <= (int)uVar46) {
    uVar45 = 0;
  }
  uVar45 = uVar45 ^ uVar35;
  uVar52 = uVar45;
  if ((int)uVar35 <= (int)uVar46) {
    uVar52 = 0;
  }
  uVar52 = uVar52 ^ uVar26 ^ uVar46;
  uVar4 = uVar17;
  if ((int)uVar35 <= (int)uVar46) {
    uVar4 = 0;
  }
  uVar26 = uVar4 ^ uVar39;
  if ((int)uVar35 <= (int)uVar46) {
    uVar26 = 0;
  }
  uVar26 = uVar26 ^ uVar17;
  uVar17 = uVar26;
  if ((int)uVar35 <= (int)uVar46) {
    uVar17 = 0;
  }
  uVar17 = uVar17 ^ uVar4 ^ uVar39;
  iVar38 = uVar52 + uVar45 * -2;
  iVar57 = uVar45 * -2;
  uVar39 = uVar52 << 1;
  iVar53 = uVar52 + 1;
LAB_109af1cb4:
  if ((int)uVar28 < 1) {
    iVar60 = 0;
  }
  else {
    iVar60 = (int)*(undefined8 *)(*(long *)(param_1 + 0x12) + uVar28 * 8 + -8);
  }
  if (0 < iVar53) {
    do {
      if (iVar60 == 3) {
        *puVar54 = *(undefined1 *)param_4;
        puVar54[1] = *(undefined1 *)((long)param_4 + 1);
        puVar54[2] = *(undefined1 *)((long)param_4 + 2);
      }
      else if (iVar60 == 1) {
        *puVar54 = *(undefined1 *)param_4;
      }
      else {
        _memcpy(puVar54,param_4,(long)iVar60);
      }
      uVar46 = iVar38 >> 0x1f;
      iVar38 = iVar38 + iVar57 + (uVar39 & uVar46);
      puVar54 = puVar54 + (int)((uVar26 & uVar46) + uVar17);
      iVar53 = iVar53 + -1;
    } while (iVar53 != 0);
  }
  return;
LAB_109af3c54:
  puVar34 = puVar56;
  uVar26 = puVar20[6];
  if (uVar26 == *puVar20) {
    uVar17 = puVar20[8];
    uVar39 = puVar20[2];
    bVar16 = SBORROW4(uVar17,uVar39);
    iVar53 = uVar17 - uVar39;
    if (uVar17 == uVar39) {
      bVar16 = SBORROW4(puVar20[9],puVar20[3]);
      iVar53 = puVar20[9] - puVar20[3];
    }
    if (iVar53 < 0 != bVar16) {
LAB_109af3c98:
      uVar39 = puVar20[7];
      uVar46 = puVar20[9];
      uVar43 = *(undefined8 *)(puVar20 + 10);
      do {
        puVar56 = puVar20;
        *(undefined8 *)(puVar56 + 8) = *(undefined8 *)(puVar56 + 2);
        *(undefined8 *)(puVar56 + 6) = *(undefined8 *)puVar56;
        *(undefined8 *)(puVar56 + 10) = *(undefined8 *)(puVar56 + 4);
        uVar35 = puVar56[-6];
        bVar15 = SBORROW4(uVar26,uVar35);
        bVar16 = (int)(uVar26 - uVar35) < 0;
        if (uVar26 == uVar35) {
          uVar35 = puVar56[-4];
          bVar15 = SBORROW4(uVar17,uVar35);
          bVar16 = (int)(uVar17 - uVar35) < 0;
          if (uVar17 == uVar35) {
            bVar15 = SBORROW4(uVar46,puVar56[-3]);
            bVar16 = (int)(uVar46 - puVar56[-3]) < 0;
          }
        }
        puVar20 = puVar56 + -6;
      } while (bVar16 != bVar15);
      *puVar56 = uVar26;
      puVar56[1] = uVar39;
      puVar56[2] = uVar17;
      puVar56[3] = uVar46;
      *(undefined8 *)(puVar56 + 4) = uVar43;
    }
  }
  else if ((int)uVar26 < (int)*puVar20) {
    uVar17 = puVar20[8];
    goto LAB_109af3c98;
  }
  puVar56 = puVar34 + 6;
  puVar20 = puVar34;
  if (puVar56 == puVar23) {
    return;
  }
  goto LAB_109af3c54;
LAB_109af37e4:
  uVar26 = puVar34[6];
  if (uVar26 == *puVar34) {
    uVar17 = puVar34[8];
    uVar39 = puVar34[2];
    bVar16 = SBORROW4(uVar17,uVar39);
    iVar53 = uVar17 - uVar39;
    if (uVar17 == uVar39) {
      bVar16 = SBORROW4(puVar34[9],puVar34[3]);
      iVar53 = puVar34[9] - puVar34[3];
    }
    if (iVar53 < 0 != bVar16) {
LAB_109af3828:
      uVar39 = puVar34[7];
      uVar46 = puVar34[9];
      uVar36 = *(undefined8 *)(puVar34 + 10);
      uVar43 = *(undefined8 *)puVar34;
      *(undefined8 *)(puVar56 + 2) = *(undefined8 *)(puVar34 + 2);
      *(undefined8 *)puVar56 = uVar43;
      *(undefined8 *)(puVar56 + 4) = *(undefined8 *)(puVar34 + 4);
      puVar25 = puVar20;
      lVar33 = lVar29;
      if (puVar34 != puVar20) {
        do {
          puVar18 = (undefined8 *)((long)puVar20 + lVar33);
          uVar35 = *(uint *)(puVar18 + -3);
          bVar16 = SBORROW4(uVar26,uVar35);
          iVar53 = uVar26 - uVar35;
          if (uVar26 == uVar35) {
            uVar35 = *(uint *)(puVar18 + -2);
            bVar16 = SBORROW4(uVar17,uVar35);
            iVar53 = uVar17 - uVar35;
            if (uVar17 != uVar35) goto LAB_109af3888;
            puVar25 = (uint *)((long)puVar20 + lVar33);
            if ((int)((uint *)((long)puVar20 + lVar33))[-3] <= (int)uVar46) break;
          }
          else {
LAB_109af3888:
            puVar25 = puVar34;
            if (iVar53 < 0 == bVar16) break;
          }
          puVar34 = puVar34 + -6;
          puVar18[1] = puVar18[-2];
          *puVar18 = puVar18[-3];
          puVar18[2] = puVar18[-1];
          lVar33 = lVar33 + -0x18;
          puVar25 = puVar20;
        } while (lVar33 != 0);
      }
      *puVar25 = uVar26;
      puVar25[1] = uVar39;
      puVar25[2] = uVar17;
      puVar25[3] = uVar46;
      *(undefined8 *)(puVar25 + 4) = uVar36;
    }
  }
  else if ((int)uVar26 < (int)*puVar34) {
    uVar17 = puVar34[8];
    goto LAB_109af3828;
  }
  puVar25 = puVar56 + 6;
  lVar29 = lVar29 + 0x18;
  puVar34 = puVar56;
  puVar56 = puVar25;
  if (puVar25 == puVar23) {
    return;
  }
  goto LAB_109af37e4;
LAB_109af38e8:
  do {
    if ((long)uVar41 <= (long)uVar37) {
      uVar50 = uVar41 << 1 | 1;
      puVar56 = puVar20 + uVar50 * 6;
      uVar40 = uVar41 * 2 + 2;
      if ((long)uVar40 < (long)uVar42) {
        uVar17 = puVar56[6];
        uVar26 = *puVar56;
        bVar15 = SBORROW4(uVar26,uVar17);
        bVar16 = (int)(uVar26 - uVar17) < 0;
        if (uVar26 == uVar17) {
          uVar26 = puVar56[2];
          uVar17 = puVar56[8];
          bVar15 = SBORROW4(uVar26,uVar17);
          bVar16 = (int)(uVar26 - uVar17) < 0;
          if (uVar26 == uVar17) {
            bVar15 = SBORROW4(puVar56[3],puVar56[9]);
            bVar16 = (int)(puVar56[3] - puVar56[9]) < 0;
          }
        }
        if (bVar16 != bVar15) {
          puVar56 = puVar56 + 6;
          uVar50 = uVar40;
        }
      }
      puVar34 = puVar20 + uVar41 * 6;
      uVar26 = *puVar34;
      if (*puVar56 == uVar26) {
        uVar39 = puVar56[2];
        uVar17 = puVar34[2];
        bVar16 = SBORROW4(uVar39,uVar17);
        iVar53 = uVar39 - uVar17;
        if (uVar39 == uVar17) {
          bVar16 = SBORROW4(puVar56[3],puVar34[3]);
          iVar53 = puVar56[3] - puVar34[3];
          uVar17 = uVar39;
        }
        if (iVar53 < 0 == bVar16) {
LAB_109af3990:
          uVar39 = puVar34[1];
          uVar46 = puVar34[3];
          uVar36 = *(undefined8 *)(puVar34 + 4);
          uVar44 = *(undefined8 *)(puVar56 + 4);
          uVar43 = *(undefined8 *)puVar56;
          *(undefined8 *)(puVar34 + 2) = *(undefined8 *)(puVar56 + 2);
          *(undefined8 *)puVar34 = uVar43;
          *(undefined8 *)(puVar34 + 4) = uVar44;
          while ((long)uVar50 <= (long)uVar37) {
            uVar3 = uVar50 << 1 | 1;
            puVar34 = puVar20 + uVar3 * 6;
            uVar40 = uVar50 * 2 + 2;
            uVar50 = uVar3;
            if ((long)uVar40 < (long)uVar42) {
              uVar45 = puVar34[6];
              uVar35 = *puVar34;
              bVar15 = SBORROW4(uVar35,uVar45);
              bVar16 = (int)(uVar35 - uVar45) < 0;
              if (uVar35 == uVar45) {
                uVar35 = puVar34[2];
                uVar45 = puVar34[8];
                bVar15 = SBORROW4(uVar35,uVar45);
                bVar16 = (int)(uVar35 - uVar45) < 0;
                if (uVar35 == uVar45) {
                  bVar15 = SBORROW4(puVar34[3],puVar34[9]);
                  bVar16 = (int)(puVar34[3] - puVar34[9]) < 0;
                }
              }
              if (bVar16 != bVar15) {
                puVar34 = puVar34 + 6;
                uVar50 = uVar40;
              }
            }
            uVar35 = *puVar34;
            bVar15 = SBORROW4(uVar35,uVar26);
            bVar16 = (int)(uVar35 - uVar26) < 0;
            if (uVar35 == uVar26) {
              uVar35 = puVar34[2];
              bVar15 = SBORROW4(uVar35,uVar17);
              bVar16 = (int)(uVar35 - uVar17) < 0;
              if (uVar35 == uVar17) {
                bVar15 = SBORROW4(puVar34[3],uVar46);
                bVar16 = (int)(puVar34[3] - uVar46) < 0;
              }
            }
            if (bVar16 != bVar15) break;
            uVar44 = *(undefined8 *)(puVar34 + 2);
            uVar43 = *(undefined8 *)puVar34;
            *(undefined8 *)(puVar56 + 4) = *(undefined8 *)(puVar34 + 4);
            *(undefined8 *)(puVar56 + 2) = uVar44;
            *(undefined8 *)puVar56 = uVar43;
            puVar56 = puVar34;
          }
          *puVar56 = uVar26;
          puVar56[1] = uVar39;
          puVar56[2] = uVar17;
          puVar56[3] = uVar46;
          *(undefined8 *)(puVar56 + 4) = uVar36;
        }
      }
      else if ((int)uVar26 <= (int)*puVar56) {
        uVar17 = puVar34[2];
        goto LAB_109af3990;
      }
    }
    bVar16 = uVar41 != 0;
    uVar41 = uVar41 - 1;
  } while (bVar16);
  lVar29 = (uVar28 >> 3) * -0x5555555555555555;
  do {
    uVar36 = *(undefined8 *)(puVar20 + 2);
    uVar43 = *(undefined8 *)puVar20;
    uVar44 = *(undefined8 *)(puVar20 + 4);
    puVar56 = puVar20;
    uVar28 = 0;
    do {
      uVar41 = uVar28 << 1 | 1;
      uVar42 = uVar28 * 2 + 2;
      puVar34 = puVar56 + uVar28 * 6 + 6;
      if ((long)uVar42 < lVar29) {
        uVar17 = puVar56[uVar28 * 6 + 0xc];
        uVar26 = puVar56[uVar28 * 6 + 6];
        bVar15 = SBORROW4(uVar26,uVar17);
        bVar16 = (int)(uVar26 - uVar17) < 0;
        if (uVar26 == uVar17) {
          uVar26 = puVar56[uVar28 * 6 + 8];
          uVar17 = puVar56[uVar28 * 6 + 0xe];
          bVar15 = SBORROW4(uVar26,uVar17);
          bVar16 = (int)(uVar26 - uVar17) < 0;
          if (uVar26 == uVar17) {
            bVar15 = SBORROW4(puVar56[uVar28 * 6 + 9],puVar56[uVar28 * 6 + 0xf]);
            bVar16 = (int)(puVar56[uVar28 * 6 + 9] - puVar56[uVar28 * 6 + 0xf]) < 0;
          }
        }
        if (bVar16 != bVar15) {
          puVar34 = puVar56 + uVar28 * 6 + 0xc;
          uVar41 = uVar42;
        }
      }
      uVar31 = *(undefined8 *)(puVar34 + 2);
      uVar30 = *(undefined8 *)puVar34;
      *(undefined8 *)(puVar56 + 4) = *(undefined8 *)(puVar34 + 4);
      *(undefined8 *)(puVar56 + 2) = uVar31;
      *(undefined8 *)puVar56 = uVar30;
      puVar56 = puVar34;
      uVar28 = uVar41;
    } while ((long)uVar41 <= (lVar29 + -2) / 2);
    puVar56 = puVar23 + -6;
    if (puVar34 == puVar56) {
      *(undefined8 *)(puVar34 + 4) = uVar44;
      *(undefined8 *)(puVar34 + 2) = uVar36;
      *(undefined8 *)puVar34 = uVar43;
    }
    else {
      uVar31 = *(undefined8 *)(puVar23 + -4);
      uVar30 = *(undefined8 *)puVar56;
      *(undefined8 *)(puVar34 + 4) = *(undefined8 *)(puVar23 + -2);
      *(undefined8 *)(puVar34 + 2) = uVar31;
      *(undefined8 *)puVar34 = uVar30;
      *(undefined8 *)(puVar23 + -2) = uVar44;
      *(undefined8 *)(puVar23 + -4) = uVar36;
      *(undefined8 *)puVar56 = uVar43;
      puVar1 = (undefined *)((long)puVar34 + (0x18 - (long)puVar20));
      if (0x18 < (long)puVar1) {
        uVar42 = ((ulong)puVar1 >> 3) * -0x5555555555555555 - 2;
        uVar28 = uVar42 >> 1;
        puVar23 = puVar20 + uVar28 * 6;
        uVar26 = *puVar34;
        if (*puVar23 == uVar26) {
          uVar39 = puVar23[2];
          uVar17 = puVar34[2];
          bVar16 = SBORROW4(uVar39,uVar17);
          iVar53 = uVar39 - uVar17;
          if (uVar39 == uVar17) {
            bVar16 = SBORROW4(puVar23[3],puVar34[3]);
            iVar53 = puVar23[3] - puVar34[3];
            uVar17 = uVar39;
          }
          if (iVar53 < 0 != bVar16) {
LAB_109af3bbc:
            uVar39 = puVar34[1];
            uVar46 = puVar34[3];
            uVar36 = *(undefined8 *)(puVar34 + 4);
            uVar44 = *(undefined8 *)(puVar23 + 4);
            uVar43 = *(undefined8 *)puVar23;
            *(undefined8 *)(puVar34 + 2) = *(undefined8 *)(puVar23 + 2);
            *(undefined8 *)puVar34 = uVar43;
            *(undefined8 *)(puVar34 + 4) = uVar44;
            while (1 < uVar42) {
              uVar42 = uVar28 - 1;
              uVar28 = uVar42 >> 1;
              puVar34 = puVar20 + uVar28 * 6;
              uVar35 = *puVar34;
              bVar15 = SBORROW4(uVar35,uVar26);
              bVar16 = (int)(uVar35 - uVar26) < 0;
              if (uVar35 == uVar26) {
                uVar35 = puVar34[2];
                bVar15 = SBORROW4(uVar35,uVar17);
                bVar16 = (int)(uVar35 - uVar17) < 0;
                if (uVar35 == uVar17) {
                  bVar15 = SBORROW4(puVar34[3],uVar46);
                  bVar16 = (int)(puVar34[3] - uVar46) < 0;
                }
              }
              if (bVar16 == bVar15) break;
              uVar44 = *(undefined8 *)(puVar34 + 2);
              uVar43 = *(undefined8 *)puVar34;
              *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar34 + 4);
              *(undefined8 *)(puVar23 + 2) = uVar44;
              *(undefined8 *)puVar23 = uVar43;
              puVar23 = puVar34;
            }
            *puVar23 = uVar26;
            puVar23[1] = uVar39;
            puVar23[2] = uVar17;
            puVar23[3] = uVar46;
            *(undefined8 *)(puVar23 + 4) = uVar36;
          }
        }
        else if ((int)*puVar23 < (int)uVar26) {
          uVar17 = puVar34[2];
          goto LAB_109af3bbc;
        }
      }
    }
    bVar16 = lVar29 < 3;
    lVar29 = lVar29 + -1;
    puVar23 = puVar56;
    if (bVar16) {
      return;
    }
  } while( true );
LAB_109af35d0:
  puVar23 = puVar47;
  if (((ulong)puVar21 & 1) != 0) {
    return;
  }
  goto LAB_109af311c;
}



/* Entry: 109af2fa0; end: 109af2fb3;  */

void FUN_109af2fa0(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  int iVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  
  plVar10 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (plVar10 < (long *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)plVar10 * 0x18);
    return;
  }
  func_0x000104c4f740();
  plVar18 = (long *)plVar10[1];
  if (plVar18 < (long *)plVar10[2]) {
    lVar15 = param_2[1];
    lVar27 = *param_2;
    plVar18[2] = param_2[2];
    plVar18[1] = lVar15;
    *plVar18 = lVar27;
    plVar18 = plVar18 + 3;
  }
  else {
    lVar27 = (long)plVar18 - *plVar10;
    uVar17 = (lVar27 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar17) {
      FUN_109af2fa0();
LAB_109af311c:
      plVar16 = param_2 + -3;
      plVar18 = plVar10;
LAB_109af312c:
      while( true ) {
        plVar10 = plVar18;
        uVar17 = (long)param_2 - (long)plVar10;
        uVar21 = ((long)uVar17 >> 3) * -0x5555555555555555;
        if (uVar21 - 2 == 0 || (long)uVar21 < 2) {
          if (uVar21 < 2) {
            return;
          }
          if (uVar21 == 2) {
            plVar18 = param_2 + -3;
            iVar20 = (int)*plVar18;
            iVar6 = (int)*plVar10;
            bVar8 = SBORROW4(iVar20,iVar6);
            bVar9 = iVar20 - iVar6 < 0;
            if (iVar20 == iVar6) {
              iVar20 = (int)param_2[-2];
              iVar6 = (int)plVar10[1];
              bVar8 = SBORROW4(iVar20,iVar6);
              bVar9 = iVar20 - iVar6 < 0;
              if (iVar20 == iVar6) {
                bVar8 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)plVar10 + 0xc));
                bVar9 = *(int *)((long)param_2 + -0xc) - *(int *)((long)plVar10 + 0xc) < 0;
              }
            }
            if (bVar9 == bVar8) {
              return;
            }
            lVar29 = plVar10[1];
            lVar15 = *plVar10;
            lVar27 = plVar10[2];
            lVar31 = param_2[-2];
            lVar13 = *plVar18;
            plVar10[2] = param_2[-1];
            plVar10[1] = lVar31;
            *plVar10 = lVar13;
            param_2[-1] = lVar27;
            param_2[-2] = lVar29;
            *plVar18 = lVar15;
            return;
          }
        }
        else {
          if (uVar21 == 3) {
            plVar18 = plVar10 + 3;
            iVar6 = (int)*plVar18;
            iVar20 = (int)*plVar10;
            bVar8 = SBORROW4(iVar6,iVar20);
            bVar9 = iVar6 - iVar20 < 0;
            if (iVar6 == iVar20) {
              iVar20 = (int)plVar10[4];
              iVar14 = (int)plVar10[1];
              bVar8 = SBORROW4(iVar20,iVar14);
              bVar9 = iVar20 - iVar14 < 0;
              if (iVar20 == iVar14) {
                bVar8 = SBORROW4(*(int *)((long)plVar10 + 0x24),*(int *)((long)plVar10 + 0xc));
                bVar9 = *(int *)((long)plVar10 + 0x24) - *(int *)((long)plVar10 + 0xc) < 0;
              }
            }
            if (bVar9 == bVar8) {
              iVar20 = (int)*plVar16;
              bVar8 = SBORROW4(iVar20,iVar6);
              bVar9 = iVar20 - iVar6 < 0;
              if (iVar20 == iVar6) {
                iVar6 = (int)param_2[-2];
                iVar20 = (int)plVar10[4];
                bVar8 = SBORROW4(iVar6,iVar20);
                bVar9 = iVar6 - iVar20 < 0;
                if (iVar6 == iVar20) {
                  bVar8 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)plVar10 + 0x24));
                  bVar9 = *(int *)((long)param_2 + -0xc) - *(int *)((long)plVar10 + 0x24) < 0;
                }
              }
              if (bVar9 != bVar8) {
                lVar27 = plVar10[5];
                lVar29 = plVar10[4];
                lVar13 = *plVar18;
                lVar15 = param_2[-1];
                lVar31 = *plVar16;
                plVar10[4] = param_2[-2];
                *plVar18 = lVar31;
                plVar10[5] = lVar15;
                param_2[-2] = lVar29;
                *plVar16 = lVar13;
                param_2[-1] = lVar27;
                iVar6 = (int)*plVar18;
                iVar20 = (int)*plVar10;
                bVar8 = SBORROW4(iVar6,iVar20);
                bVar9 = iVar6 - iVar20 < 0;
                if (iVar6 == iVar20) {
                  iVar6 = (int)plVar10[4];
                  iVar20 = (int)plVar10[1];
                  bVar8 = SBORROW4(iVar6,iVar20);
                  bVar9 = iVar6 - iVar20 < 0;
                  if (iVar6 == iVar20) {
                    bVar8 = SBORROW4(*(int *)((long)plVar10 + 0x24),*(int *)((long)plVar10 + 0xc));
                    bVar9 = *(int *)((long)plVar10 + 0x24) - *(int *)((long)plVar10 + 0xc) < 0;
                  }
                }
                if (bVar9 != bVar8) {
                  lVar27 = plVar10[2];
                  lVar13 = plVar10[1];
                  lVar15 = *plVar10;
                  plVar10[1] = plVar10[4];
                  *plVar10 = *plVar18;
                  plVar10[2] = plVar10[5];
                  plVar10[4] = lVar13;
                  *plVar18 = lVar15;
                  plVar10[5] = lVar27;
                }
              }
            }
            else {
              iVar20 = (int)*plVar16;
              bVar8 = SBORROW4(iVar20,iVar6);
              bVar9 = iVar20 - iVar6 < 0;
              if (iVar20 == iVar6) {
                iVar6 = (int)param_2[-2];
                iVar20 = (int)plVar10[4];
                bVar8 = SBORROW4(iVar6,iVar20);
                bVar9 = iVar6 - iVar20 < 0;
                if (iVar6 == iVar20) {
                  bVar8 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)plVar10 + 0x24));
                  bVar9 = *(int *)((long)param_2 + -0xc) - *(int *)((long)plVar10 + 0x24) < 0;
                }
              }
              if (bVar9 == bVar8) {
                lVar27 = plVar10[2];
                lVar13 = plVar10[1];
                lVar15 = *plVar10;
                plVar10[1] = plVar10[4];
                *plVar10 = *plVar18;
                plVar10[2] = plVar10[5];
                plVar10[4] = lVar13;
                *plVar18 = lVar15;
                plVar10[5] = lVar27;
                iVar6 = (int)*plVar16;
                iVar20 = (int)*plVar18;
                bVar8 = SBORROW4(iVar6,iVar20);
                bVar9 = iVar6 - iVar20 < 0;
                if (iVar6 == iVar20) {
                  iVar6 = (int)param_2[-2];
                  iVar20 = (int)plVar10[4];
                  bVar8 = SBORROW4(iVar6,iVar20);
                  bVar9 = iVar6 - iVar20 < 0;
                  if (iVar6 == iVar20) {
                    bVar8 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)plVar10 + 0x24));
                    bVar9 = *(int *)((long)param_2 + -0xc) - *(int *)((long)plVar10 + 0x24) < 0;
                  }
                }
                if (bVar9 == bVar8) {
                  return;
                }
                lVar27 = plVar10[5];
                lVar29 = plVar10[4];
                lVar13 = *plVar18;
                lVar15 = param_2[-1];
                lVar31 = *plVar16;
                plVar10[4] = param_2[-2];
                *plVar18 = lVar31;
                plVar10[5] = lVar15;
              }
              else {
                lVar27 = plVar10[2];
                lVar29 = plVar10[1];
                lVar13 = *plVar10;
                lVar15 = param_2[-1];
                lVar31 = *plVar16;
                plVar10[1] = param_2[-2];
                *plVar10 = lVar31;
                plVar10[2] = lVar15;
              }
              param_2[-2] = lVar29;
              *plVar16 = lVar13;
              param_2[-1] = lVar27;
            }
            return;
          }
          if (uVar21 == 4) {
            FUN_109af3d14(plVar10,plVar10 + 3,plVar10 + 6);
            plVar18 = param_2 + -3;
            iVar20 = (int)*plVar18;
            iVar6 = (int)plVar10[6];
            bVar8 = SBORROW4(iVar20,iVar6);
            bVar9 = iVar20 - iVar6 < 0;
            if (iVar20 == iVar6) {
              iVar20 = (int)param_2[-2];
              iVar6 = (int)plVar10[7];
              bVar8 = SBORROW4(iVar20,iVar6);
              bVar9 = iVar20 - iVar6 < 0;
              if (iVar20 == iVar6) {
                bVar8 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)plVar10 + 0x3c));
                bVar9 = *(int *)((long)param_2 + -0xc) - *(int *)((long)plVar10 + 0x3c) < 0;
              }
            }
            if (bVar9 == bVar8) {
              return;
            }
            lVar29 = plVar10[7];
            lVar13 = plVar10[6];
            lVar27 = plVar10[8];
            lVar15 = param_2[-1];
            lVar31 = *plVar18;
            plVar10[7] = param_2[-2];
            plVar10[6] = lVar31;
            plVar10[8] = lVar15;
            param_2[-1] = lVar27;
            param_2[-2] = lVar29;
            *plVar18 = lVar13;
            iVar6 = (int)plVar10[6];
            iVar20 = (int)plVar10[3];
            bVar8 = SBORROW4(iVar6,iVar20);
            bVar9 = iVar6 - iVar20 < 0;
            if (iVar6 == iVar20) {
              iVar6 = (int)plVar10[7];
              iVar20 = (int)plVar10[4];
              bVar8 = SBORROW4(iVar6,iVar20);
              bVar9 = iVar6 - iVar20 < 0;
              if (iVar6 == iVar20) {
                bVar8 = SBORROW4(*(int *)((long)plVar10 + 0x3c),*(int *)((long)plVar10 + 0x24));
                bVar9 = *(int *)((long)plVar10 + 0x3c) - *(int *)((long)plVar10 + 0x24) < 0;
              }
            }
            if (bVar9 == bVar8) {
              return;
            }
            lVar27 = plVar10[5];
            lVar13 = plVar10[4];
            lVar15 = plVar10[3];
            plVar10[4] = plVar10[7];
            plVar10[3] = plVar10[6];
            plVar10[5] = plVar10[8];
            plVar10[7] = lVar13;
            plVar10[6] = lVar15;
            plVar10[8] = lVar27;
            iVar6 = (int)plVar10[3];
            iVar20 = (int)*plVar10;
            bVar8 = SBORROW4(iVar6,iVar20);
            bVar9 = iVar6 - iVar20 < 0;
            if (iVar6 == iVar20) {
              iVar6 = (int)plVar10[4];
              iVar20 = (int)plVar10[1];
              bVar8 = SBORROW4(iVar6,iVar20);
              bVar9 = iVar6 - iVar20 < 0;
              if (iVar6 == iVar20) {
                bVar8 = SBORROW4(*(int *)((long)plVar10 + 0x24),*(int *)((long)plVar10 + 0xc));
                bVar9 = *(int *)((long)plVar10 + 0x24) - *(int *)((long)plVar10 + 0xc) < 0;
              }
            }
            if (bVar9 == bVar8) {
              return;
            }
            lVar13 = plVar10[1];
            lVar15 = *plVar10;
            lVar27 = plVar10[2];
            plVar10[1] = plVar10[4];
            *plVar10 = plVar10[3];
            plVar10[2] = plVar10[5];
            plVar10[4] = lVar13;
            plVar10[3] = lVar15;
            plVar10[5] = lVar27;
            return;
          }
          if (uVar21 == 5) {
            plVar18 = plVar10 + 3;
            plVar11 = plVar10 + 6;
            plVar12 = plVar10 + 9;
            FUN_109af3d14();
            iVar6 = (int)*plVar12;
            iVar20 = (int)*plVar11;
            bVar8 = SBORROW4(iVar6,iVar20);
            bVar9 = iVar6 - iVar20 < 0;
            if (iVar6 == iVar20) {
              iVar6 = (int)plVar10[10];
              iVar20 = (int)plVar10[7];
              bVar8 = SBORROW4(iVar6,iVar20);
              bVar9 = iVar6 - iVar20 < 0;
              if (iVar6 == iVar20) {
                bVar8 = SBORROW4(*(int *)((long)plVar10 + 0x54),*(int *)((long)plVar10 + 0x3c));
                bVar9 = *(int *)((long)plVar10 + 0x54) - *(int *)((long)plVar10 + 0x3c) < 0;
              }
            }
            if (bVar9 != bVar8) {
              lVar27 = plVar10[8];
              lVar13 = plVar10[7];
              lVar15 = *plVar11;
              plVar10[7] = plVar10[10];
              *plVar11 = *plVar12;
              plVar10[8] = plVar10[0xb];
              plVar10[10] = lVar13;
              *plVar12 = lVar15;
              plVar10[0xb] = lVar27;
              iVar6 = (int)*plVar11;
              iVar20 = (int)*plVar18;
              bVar8 = SBORROW4(iVar6,iVar20);
              bVar9 = iVar6 - iVar20 < 0;
              if (iVar6 == iVar20) {
                iVar6 = (int)plVar10[7];
                iVar20 = (int)plVar10[4];
                bVar8 = SBORROW4(iVar6,iVar20);
                bVar9 = iVar6 - iVar20 < 0;
                if (iVar6 == iVar20) {
                  bVar8 = SBORROW4(*(int *)((long)plVar10 + 0x3c),*(int *)((long)plVar10 + 0x24));
                  bVar9 = *(int *)((long)plVar10 + 0x3c) - *(int *)((long)plVar10 + 0x24) < 0;
                }
              }
              if (bVar9 != bVar8) {
                lVar27 = plVar10[5];
                lVar13 = plVar10[4];
                lVar15 = *plVar18;
                plVar10[4] = plVar10[7];
                *plVar18 = *plVar11;
                plVar10[5] = plVar10[8];
                plVar10[7] = lVar13;
                *plVar11 = lVar15;
                plVar10[8] = lVar27;
                iVar6 = (int)*plVar18;
                iVar20 = (int)*plVar10;
                bVar8 = SBORROW4(iVar6,iVar20);
                bVar9 = iVar6 - iVar20 < 0;
                if (iVar6 == iVar20) {
                  iVar6 = (int)plVar10[4];
                  iVar20 = (int)plVar10[1];
                  bVar8 = SBORROW4(iVar6,iVar20);
                  bVar9 = iVar6 - iVar20 < 0;
                  if (iVar6 == iVar20) {
                    bVar8 = SBORROW4(*(int *)((long)plVar10 + 0x24),*(int *)((long)plVar10 + 0xc));
                    bVar9 = *(int *)((long)plVar10 + 0x24) - *(int *)((long)plVar10 + 0xc) < 0;
                  }
                }
                if (bVar9 != bVar8) {
                  lVar27 = plVar10[2];
                  lVar13 = plVar10[1];
                  lVar15 = *plVar10;
                  plVar10[1] = plVar10[4];
                  *plVar10 = *plVar18;
                  plVar10[2] = plVar10[5];
                  plVar10[4] = lVar13;
                  *plVar18 = lVar15;
                  plVar10[5] = lVar27;
                }
              }
            }
            iVar6 = (int)*plVar16;
            iVar20 = (int)*plVar12;
            bVar8 = SBORROW4(iVar6,iVar20);
            bVar9 = iVar6 - iVar20 < 0;
            if (iVar6 == iVar20) {
              iVar6 = (int)param_2[-2];
              iVar20 = (int)plVar10[10];
              bVar8 = SBORROW4(iVar6,iVar20);
              bVar9 = iVar6 - iVar20 < 0;
              if (iVar6 == iVar20) {
                bVar8 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)plVar10 + 0x54));
                bVar9 = *(int *)((long)param_2 + -0xc) - *(int *)((long)plVar10 + 0x54) < 0;
              }
            }
            if (bVar9 != bVar8) {
              lVar27 = plVar10[0xb];
              lVar29 = plVar10[10];
              lVar13 = *plVar12;
              lVar15 = param_2[-1];
              lVar31 = *plVar16;
              plVar10[10] = param_2[-2];
              *plVar12 = lVar31;
              plVar10[0xb] = lVar15;
              param_2[-2] = lVar29;
              *plVar16 = lVar13;
              param_2[-1] = lVar27;
              iVar6 = (int)*plVar12;
              iVar20 = (int)*plVar11;
              bVar8 = SBORROW4(iVar6,iVar20);
              bVar9 = iVar6 - iVar20 < 0;
              if (iVar6 == iVar20) {
                iVar6 = (int)plVar10[10];
                iVar20 = (int)plVar10[7];
                bVar8 = SBORROW4(iVar6,iVar20);
                bVar9 = iVar6 - iVar20 < 0;
                if (iVar6 == iVar20) {
                  bVar8 = SBORROW4(*(int *)((long)plVar10 + 0x54),*(int *)((long)plVar10 + 0x3c));
                  bVar9 = *(int *)((long)plVar10 + 0x54) - *(int *)((long)plVar10 + 0x3c) < 0;
                }
              }
              if (bVar9 != bVar8) {
                lVar27 = plVar10[8];
                lVar13 = plVar10[7];
                lVar15 = *plVar11;
                plVar10[7] = plVar10[10];
                *plVar11 = *plVar12;
                plVar10[8] = plVar10[0xb];
                plVar10[10] = lVar13;
                *plVar12 = lVar15;
                plVar10[0xb] = lVar27;
                iVar6 = (int)*plVar11;
                iVar20 = (int)*plVar18;
                bVar8 = SBORROW4(iVar6,iVar20);
                bVar9 = iVar6 - iVar20 < 0;
                if (iVar6 == iVar20) {
                  iVar6 = (int)plVar10[7];
                  iVar20 = (int)plVar10[4];
                  bVar8 = SBORROW4(iVar6,iVar20);
                  bVar9 = iVar6 - iVar20 < 0;
                  if (iVar6 == iVar20) {
                    bVar8 = SBORROW4(*(int *)((long)plVar10 + 0x3c),*(int *)((long)plVar10 + 0x24));
                    bVar9 = *(int *)((long)plVar10 + 0x3c) - *(int *)((long)plVar10 + 0x24) < 0;
                  }
                }
                if (bVar9 != bVar8) {
                  lVar27 = plVar10[5];
                  lVar13 = plVar10[4];
                  lVar15 = *plVar18;
                  plVar10[4] = plVar10[7];
                  *plVar18 = *plVar11;
                  plVar10[5] = plVar10[8];
                  plVar10[7] = lVar13;
                  *plVar11 = lVar15;
                  plVar10[8] = lVar27;
                  iVar6 = (int)*plVar18;
                  iVar20 = (int)*plVar10;
                  bVar8 = SBORROW4(iVar6,iVar20);
                  bVar9 = iVar6 - iVar20 < 0;
                  if (iVar6 == iVar20) {
                    iVar6 = (int)plVar10[4];
                    iVar20 = (int)plVar10[1];
                    bVar8 = SBORROW4(iVar6,iVar20);
                    bVar9 = iVar6 - iVar20 < 0;
                    if (iVar6 == iVar20) {
                      bVar8 = SBORROW4(*(int *)((long)plVar10 + 0x24),*(int *)((long)plVar10 + 0xc))
                      ;
                      bVar9 = *(int *)((long)plVar10 + 0x24) - *(int *)((long)plVar10 + 0xc) < 0;
                    }
                  }
                  if (bVar9 != bVar8) {
                    lVar27 = plVar10[2];
                    lVar13 = plVar10[1];
                    lVar15 = *plVar10;
                    plVar10[1] = plVar10[4];
                    *plVar10 = *plVar18;
                    plVar10[2] = plVar10[5];
                    plVar10[4] = lVar13;
                    *plVar18 = lVar15;
                    plVar10[5] = lVar27;
                  }
                }
              }
            }
            return;
          }
        }
        if ((long)uVar17 < 0x240) {
          plVar18 = plVar10 + 3;
          if ((param_4 & 1) == 0) {
            if (plVar10 == param_2 || plVar18 == param_2) {
              return;
            }
            goto LAB_109af3c54;
          }
          if (plVar10 == param_2 || plVar18 == param_2) {
            return;
          }
          lVar27 = 0;
          plVar16 = plVar10;
          goto LAB_109af37e4;
        }
        if (param_3 == 0) {
          if (plVar10 == param_2) {
            return;
          }
          uVar19 = uVar21 - 2 >> 1;
          uVar23 = uVar19;
          goto LAB_109af38e8;
        }
        plVar18 = plVar10 + (uVar21 >> 1) * 3;
        if (uVar17 < 0xc01) {
          FUN_109af3d14(plVar18,plVar10,plVar16);
        }
        else {
          FUN_109af3d14(plVar10,plVar18,plVar16);
          FUN_109af3d14(plVar10 + 3,plVar18 + -3,param_2 + -6);
          FUN_109af3d14(plVar10 + 6,plVar18 + 3,param_2 + -9);
          FUN_109af3d14(plVar18 + -3,plVar18,plVar18 + 3);
          lVar31 = plVar10[1];
          lVar13 = *plVar10;
          lVar27 = plVar10[2];
          lVar15 = plVar18[2];
          lVar29 = *plVar18;
          plVar10[1] = plVar18[1];
          *plVar10 = lVar29;
          plVar10[2] = lVar15;
          plVar18[2] = lVar27;
          plVar18[1] = lVar31;
          *plVar18 = lVar13;
        }
        param_3 = param_3 + -1;
        iVar6 = (int)*plVar10;
        if ((param_4 & 1) != 0) break;
        if ((int)plVar10[-3] != iVar6) {
          if (iVar6 <= (int)plVar10[-3]) {
            iVar14 = (int)plVar10[1];
            goto LAB_109af3454;
          }
          break;
        }
        iVar14 = (int)plVar10[-2];
        iVar20 = (int)plVar10[1];
        if (iVar14 != iVar20) {
          bVar9 = iVar20 <= iVar14;
          iVar14 = iVar20;
          if (bVar9) goto LAB_109af3454;
          break;
        }
        if (*(int *)((long)plVar10 + -0xc) < *(int *)((long)plVar10 + 0xc)) break;
LAB_109af3454:
        iVar20 = *(int *)((long)plVar10 + 0xc);
        iVar24 = (int)*plVar16;
        bVar8 = SBORROW4(iVar6,iVar24);
        bVar9 = iVar6 - iVar24 < 0;
        if (iVar6 == iVar24) {
          iVar7 = (int)param_2[-2];
          bVar8 = SBORROW4(iVar14,iVar7);
          bVar9 = iVar14 - iVar7 < 0;
          if (iVar14 == iVar7) {
            bVar8 = SBORROW4(iVar20,*(int *)((long)param_2 + -0xc));
            bVar9 = iVar20 - *(int *)((long)param_2 + -0xc) < 0;
          }
        }
        plVar18 = plVar10 + 3;
        if (bVar9 == bVar8) {
          for (; plVar18 < param_2; plVar18 = plVar18 + 3) {
            iVar7 = (int)*plVar18;
            bVar8 = SBORROW4(iVar6,iVar7);
            bVar9 = iVar6 - iVar7 < 0;
            if (iVar6 == iVar7) {
              iVar7 = (int)plVar18[1];
              bVar8 = SBORROW4(iVar14,iVar7);
              bVar9 = iVar14 - iVar7 < 0;
              if (iVar14 == iVar7) {
                bVar8 = SBORROW4(iVar20,*(int *)((long)plVar18 + 0xc));
                bVar9 = iVar20 - *(int *)((long)plVar18 + 0xc) < 0;
              }
            }
            if (bVar9 != bVar8) break;
          }
        }
        else {
          while( true ) {
            iVar7 = (int)*plVar18;
            bVar8 = SBORROW4(iVar6,iVar7);
            bVar9 = iVar6 - iVar7 < 0;
            if (iVar6 == iVar7) {
              iVar7 = (int)plVar18[1];
              bVar8 = SBORROW4(iVar14,iVar7);
              bVar9 = iVar14 - iVar7 < 0;
              if (iVar14 == iVar7) {
                bVar8 = SBORROW4(iVar20,*(int *)((long)plVar18 + 0xc));
                bVar9 = iVar20 - *(int *)((long)plVar18 + 0xc) < 0;
              }
            }
            if (bVar9 != bVar8) break;
            plVar18 = plVar18 + 3;
          }
        }
        uVar5 = *(undefined4 *)((long)plVar10 + 4);
        lVar27 = plVar10[2];
        plVar11 = param_2;
        plVar12 = plVar16;
        if (plVar18 < param_2) {
          while( true ) {
            plVar11 = plVar12;
            bVar8 = SBORROW4(iVar6,iVar24);
            bVar9 = iVar6 - iVar24 < 0;
            if (iVar6 == iVar24) {
              iVar24 = (int)plVar11[1];
              bVar8 = SBORROW4(iVar14,iVar24);
              bVar9 = iVar14 - iVar24 < 0;
              if (iVar14 == iVar24) {
                bVar8 = SBORROW4(iVar20,*(int *)((long)plVar11 + 0xc));
                bVar9 = iVar20 - *(int *)((long)plVar11 + 0xc) < 0;
              }
            }
            if (bVar9 == bVar8) break;
            iVar24 = (int)plVar11[-3];
            plVar12 = plVar11 + -3;
          }
        }
        while (plVar18 < plVar11) {
          lVar31 = plVar18[1];
          lVar13 = *plVar18;
          lVar15 = plVar18[2];
          lVar32 = plVar11[1];
          lVar29 = *plVar11;
          plVar18[2] = plVar11[2];
          plVar18[1] = lVar32;
          *plVar18 = lVar29;
          plVar11[2] = lVar15;
          plVar11[1] = lVar31;
          *plVar11 = lVar13;
          plVar12 = plVar18;
          do {
            plVar18 = plVar12 + 3;
            iVar24 = (int)*plVar18;
            bVar8 = SBORROW4(iVar6,iVar24);
            bVar9 = iVar6 - iVar24 < 0;
            if (iVar6 == iVar24) {
              iVar24 = (int)plVar12[4];
              bVar8 = SBORROW4(iVar14,iVar24);
              bVar9 = iVar14 - iVar24 < 0;
              if (iVar14 == iVar24) {
                bVar8 = SBORROW4(iVar20,*(int *)((long)plVar12 + 0x24));
                bVar9 = iVar20 - *(int *)((long)plVar12 + 0x24) < 0;
              }
            }
            plVar22 = plVar11;
            plVar12 = plVar18;
          } while (bVar9 == bVar8);
          do {
            plVar11 = plVar22 + -3;
            iVar24 = (int)*plVar11;
            bVar8 = SBORROW4(iVar6,iVar24);
            bVar9 = iVar6 - iVar24 < 0;
            if (iVar6 == iVar24) {
              iVar24 = (int)plVar22[-2];
              bVar8 = SBORROW4(iVar14,iVar24);
              bVar9 = iVar14 - iVar24 < 0;
              if (iVar14 == iVar24) {
                bVar8 = SBORROW4(iVar20,*(int *)((long)plVar22 + -0xc));
                bVar9 = iVar20 - *(int *)((long)plVar22 + -0xc) < 0;
              }
            }
            plVar22 = plVar11;
          } while (bVar9 != bVar8);
        }
        if (plVar18 + -3 != plVar10) {
          lVar13 = plVar18[-2];
          lVar15 = plVar18[-3];
          plVar10[2] = plVar18[-1];
          plVar10[1] = lVar13;
          *plVar10 = lVar15;
        }
        param_4 = 0;
        *(int *)(plVar18 + -3) = iVar6;
        *(undefined4 *)((long)plVar18 + -0x14) = uVar5;
        *(int *)(plVar18 + -2) = iVar14;
        *(int *)((long)plVar18 + -0xc) = iVar20;
        plVar18[-1] = lVar27;
      }
      lVar27 = 0;
      uVar30 = *(undefined8 *)((long)plVar10 + 4);
      iVar20 = (int)plVar10[1];
      iVar14 = *(int *)((long)plVar10 + 0xc);
      lVar15 = plVar10[2];
      while( true ) {
        iVar24 = *(int *)((long)plVar10 + lVar27 + 0x18);
        bVar8 = SBORROW4(iVar24,iVar6);
        bVar9 = iVar24 - iVar6 < 0;
        if (iVar24 == iVar6) {
          iVar24 = *(int *)((long)plVar10 + lVar27 + 0x20);
          bVar8 = SBORROW4(iVar24,iVar20);
          bVar9 = iVar24 - iVar20 < 0;
          if (iVar24 == iVar20) {
            iVar24 = *(int *)((long)plVar10 + lVar27 + 0x24);
            bVar8 = SBORROW4(iVar24,iVar14);
            bVar9 = iVar24 - iVar14 < 0;
          }
        }
        if (bVar9 == bVar8) break;
        lVar27 = lVar27 + 0x18;
      }
      plVar11 = (long *)((long)plVar10 + lVar27 + 0x18);
      plVar12 = plVar16;
      if (lVar27 == 0) {
        plVar18 = plVar16;
        plVar12 = param_2;
        if (plVar11 < param_2) {
          do {
            plVar12 = plVar18;
            if ((int)*plVar18 == iVar6) {
              if ((int)plVar18[1] == iVar20) {
                if ((plVar18 <= plVar11) || (*(int *)((long)plVar18 + 0xc) < iVar14)) break;
              }
              else if ((plVar18 <= plVar11) || ((int)plVar18[1] < iVar20)) break;
            }
            else if ((int)*plVar18 < iVar6 || plVar18 <= plVar11) break;
            plVar18 = plVar18 + -3;
          } while( true );
        }
      }
      else {
        while( true ) {
          iVar24 = (int)*plVar12;
          bVar8 = SBORROW4(iVar24,iVar6);
          bVar9 = iVar24 - iVar6 < 0;
          if (iVar24 == iVar6) {
            iVar24 = (int)plVar12[1];
            bVar8 = SBORROW4(iVar24,iVar20);
            bVar9 = iVar24 - iVar20 < 0;
            if (iVar24 == iVar20) {
              bVar8 = SBORROW4(*(int *)((long)plVar12 + 0xc),iVar14);
              bVar9 = *(int *)((long)plVar12 + 0xc) - iVar14 < 0;
            }
          }
          if (bVar9 != bVar8) break;
          plVar12 = plVar12 + -3;
        }
      }
      plVar22 = plVar12;
      plVar18 = plVar11;
      plVar28 = plVar11;
      if (plVar11 < plVar12) {
        do {
          lVar31 = plVar28[1];
          lVar13 = *plVar28;
          lVar27 = plVar28[2];
          lVar32 = plVar22[1];
          lVar29 = *plVar22;
          plVar28[2] = plVar22[2];
          plVar28[1] = lVar32;
          *plVar28 = lVar29;
          plVar22[2] = lVar27;
          plVar22[1] = lVar31;
          *plVar22 = lVar13;
          do {
            plVar18 = plVar28 + 3;
            iVar24 = (int)*plVar18;
            bVar8 = SBORROW4(iVar24,iVar6);
            bVar9 = iVar24 - iVar6 < 0;
            if (iVar24 == iVar6) {
              iVar24 = (int)plVar28[4];
              bVar8 = SBORROW4(iVar24,iVar20);
              bVar9 = iVar24 - iVar20 < 0;
              if (iVar24 == iVar20) {
                bVar8 = SBORROW4(*(int *)((long)plVar28 + 0x24),iVar14);
                bVar9 = *(int *)((long)plVar28 + 0x24) - iVar14 < 0;
              }
            }
            plVar28 = plVar18;
          } while (bVar9 != bVar8);
          do {
            plVar25 = plVar22 + -3;
            iVar24 = (int)*plVar25;
            bVar8 = SBORROW4(iVar24,iVar6);
            bVar9 = iVar24 - iVar6 < 0;
            if (iVar24 == iVar6) {
              iVar24 = (int)plVar22[-2];
              bVar8 = SBORROW4(iVar24,iVar20);
              bVar9 = iVar24 - iVar20 < 0;
              if (iVar24 == iVar20) {
                bVar8 = SBORROW4(*(int *)((long)plVar22 + -0xc),iVar14);
                bVar9 = *(int *)((long)plVar22 + -0xc) - iVar14 < 0;
              }
            }
            plVar22 = plVar25;
          } while (bVar9 == bVar8);
        } while (plVar18 < plVar25);
      }
      plVar22 = plVar18 + -3;
      if (plVar22 != plVar10) {
        lVar13 = plVar18[-2];
        lVar27 = *plVar22;
        plVar10[2] = plVar18[-1];
        plVar10[1] = lVar13;
        *plVar10 = lVar27;
      }
      *(int *)(plVar18 + -3) = iVar6;
      *(undefined8 *)((long)plVar18 + -0x14) = uVar30;
      *(int *)((long)plVar18 + -0xc) = iVar14;
      plVar18[-1] = lVar15;
      if (plVar12 <= plVar11) {
        plVar11 = plVar10;
        FUN_109af4120(plVar10,plVar22);
        plVar12 = plVar18;
        FUN_109af4120(plVar18,param_2);
        if ((int)plVar12 != 0) goto LAB_109af35d0;
        if (((ulong)plVar11 & 1) != 0) goto LAB_109af312c;
      }
      FUN_109af30ec(plVar10,plVar22,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_109af312c;
    }
    lVar15 = plVar10[2] - *plVar10 >> 3;
    uVar21 = lVar15 * 0x5555555555555556;
    if (uVar21 < uVar17 || uVar21 - uVar17 == 0) {
      uVar21 = uVar17;
    }
    if (0x555555555555554 < (ulong)(lVar15 * -0x5555555555555555)) {
      uVar21 = 0xaaaaaaaaaaaaaaa;
    }
    plVar11 = param_2;
    FUN_109af2fb4();
    plVar16 = (long *)(uVar21 + lVar27);
    lVar15 = param_2[1];
    lVar27 = *param_2;
    plVar16[2] = param_2[2];
    plVar16[1] = lVar15;
    *plVar16 = lVar27;
    plVar18 = plVar16 + 3;
    lVar15 = (long)plVar16 - (plVar10[1] - *plVar10);
    _memcpy(lVar15);
    lVar27 = *plVar10;
    *plVar10 = lVar15;
    plVar10[1] = (long)plVar18;
    plVar10[2] = uVar21 + (long)plVar11 * 0x18;
    if (lVar27 != 0) {
      __ZdlPv();
    }
  }
  plVar10[1] = (long)plVar18;
  return;
LAB_109af3c54:
  plVar16 = plVar18;
  iVar6 = (int)plVar10[3];
  if (iVar6 == (int)*plVar10) {
    iVar20 = (int)plVar10[4];
    iVar24 = (int)plVar10[1];
    bVar9 = SBORROW4(iVar20,iVar24);
    iVar14 = iVar20 - iVar24;
    if (iVar20 == iVar24) {
      bVar9 = SBORROW4(*(int *)((long)plVar10 + 0x24),*(int *)((long)plVar10 + 0xc));
      iVar14 = *(int *)((long)plVar10 + 0x24) - *(int *)((long)plVar10 + 0xc);
    }
    if (iVar14 < 0 != bVar9) {
LAB_109af3c98:
      uVar5 = *(undefined4 *)((long)plVar10 + 0x1c);
      iVar14 = *(int *)((long)plVar10 + 0x24);
      lVar27 = plVar10[5];
      do {
        plVar18 = plVar10;
        plVar18[4] = plVar18[1];
        plVar18[3] = *plVar18;
        plVar18[5] = plVar18[2];
        iVar24 = (int)plVar18[-3];
        bVar8 = SBORROW4(iVar6,iVar24);
        bVar9 = iVar6 - iVar24 < 0;
        if (iVar6 == iVar24) {
          iVar24 = (int)plVar18[-2];
          bVar8 = SBORROW4(iVar20,iVar24);
          bVar9 = iVar20 - iVar24 < 0;
          if (iVar20 == iVar24) {
            bVar8 = SBORROW4(iVar14,*(int *)((long)plVar18 + -0xc));
            bVar9 = iVar14 - *(int *)((long)plVar18 + -0xc) < 0;
          }
        }
        plVar10 = plVar18 + -3;
      } while (bVar9 != bVar8);
      *(int *)plVar18 = iVar6;
      *(undefined4 *)((long)plVar18 + 4) = uVar5;
      *(int *)(plVar18 + 1) = iVar20;
      *(int *)((long)plVar18 + 0xc) = iVar14;
      plVar18[2] = lVar27;
    }
  }
  else if (iVar6 < (int)*plVar10) {
    iVar20 = (int)plVar10[4];
    goto LAB_109af3c98;
  }
  plVar18 = plVar16 + 3;
  plVar10 = plVar16;
  if (plVar18 == param_2) {
    return;
  }
  goto LAB_109af3c54;
LAB_109af37e4:
  iVar6 = (int)plVar16[3];
  if (iVar6 == (int)*plVar16) {
    iVar20 = (int)plVar16[4];
    iVar24 = (int)plVar16[1];
    bVar9 = SBORROW4(iVar20,iVar24);
    iVar14 = iVar20 - iVar24;
    if (iVar20 == iVar24) {
      bVar9 = SBORROW4(*(int *)((long)plVar16 + 0x24),*(int *)((long)plVar16 + 0xc));
      iVar14 = *(int *)((long)plVar16 + 0x24) - *(int *)((long)plVar16 + 0xc);
    }
    if (iVar14 < 0 != bVar9) {
LAB_109af3828:
      uVar5 = *(undefined4 *)((long)plVar16 + 0x1c);
      iVar14 = *(int *)((long)plVar16 + 0x24);
      lVar13 = plVar16[5];
      lVar15 = *plVar16;
      plVar18[1] = plVar16[1];
      *plVar18 = lVar15;
      plVar18[2] = plVar16[2];
      plVar11 = plVar10;
      lVar15 = lVar27;
      if (plVar16 != plVar10) {
        do {
          puVar3 = (undefined8 *)((long)plVar10 + lVar15);
          iVar7 = *(int *)(puVar3 + -3);
          bVar9 = SBORROW4(iVar6,iVar7);
          iVar24 = iVar6 - iVar7;
          if (iVar6 == iVar7) {
            iVar7 = *(int *)(puVar3 + -2);
            bVar9 = SBORROW4(iVar20,iVar7);
            iVar24 = iVar20 - iVar7;
            if (iVar20 != iVar7) goto LAB_109af3888;
            plVar11 = (long *)((long)plVar10 + lVar15);
            if (*(int *)((long)plVar10 + lVar15 + -0xc) <= iVar14) break;
          }
          else {
LAB_109af3888:
            plVar11 = plVar16;
            if (iVar24 < 0 == bVar9) break;
          }
          plVar16 = plVar16 + -3;
          puVar3[1] = puVar3[-2];
          *puVar3 = puVar3[-3];
          puVar3[2] = puVar3[-1];
          lVar15 = lVar15 + -0x18;
          plVar11 = plVar10;
        } while (lVar15 != 0);
      }
      *(int *)plVar11 = iVar6;
      *(undefined4 *)((long)plVar11 + 4) = uVar5;
      *(int *)(plVar11 + 1) = iVar20;
      *(int *)((long)plVar11 + 0xc) = iVar14;
      plVar11[2] = lVar13;
    }
  }
  else if (iVar6 < (int)*plVar16) {
    iVar20 = (int)plVar16[4];
    goto LAB_109af3828;
  }
  plVar11 = plVar18 + 3;
  lVar27 = lVar27 + 0x18;
  plVar16 = plVar18;
  plVar18 = plVar11;
  if (plVar11 == param_2) {
    return;
  }
  goto LAB_109af37e4;
LAB_109af38e8:
  do {
    if ((long)uVar23 <= (long)uVar19) {
      uVar26 = uVar23 << 1 | 1;
      plVar18 = plVar10 + uVar26 * 3;
      uVar1 = uVar23 * 2 + 2;
      if ((long)uVar1 < (long)uVar21) {
        iVar20 = (int)plVar18[3];
        iVar6 = (int)*plVar18;
        bVar8 = SBORROW4(iVar6,iVar20);
        bVar9 = iVar6 - iVar20 < 0;
        if (iVar6 == iVar20) {
          iVar6 = (int)plVar18[1];
          iVar20 = (int)plVar18[4];
          bVar8 = SBORROW4(iVar6,iVar20);
          bVar9 = iVar6 - iVar20 < 0;
          if (iVar6 == iVar20) {
            bVar8 = SBORROW4(*(int *)((long)plVar18 + 0xc),*(int *)((long)plVar18 + 0x24));
            bVar9 = *(int *)((long)plVar18 + 0xc) - *(int *)((long)plVar18 + 0x24) < 0;
          }
        }
        if (bVar9 != bVar8) {
          plVar18 = plVar18 + 3;
          uVar26 = uVar1;
        }
      }
      plVar16 = plVar10 + uVar23 * 3;
      iVar6 = (int)*plVar16;
      if ((int)*plVar18 == iVar6) {
        iVar24 = (int)plVar18[1];
        iVar20 = (int)plVar16[1];
        bVar9 = SBORROW4(iVar24,iVar20);
        iVar14 = iVar24 - iVar20;
        if (iVar24 == iVar20) {
          bVar9 = SBORROW4(*(int *)((long)plVar18 + 0xc),*(int *)((long)plVar16 + 0xc));
          iVar14 = *(int *)((long)plVar18 + 0xc) - *(int *)((long)plVar16 + 0xc);
          iVar20 = iVar24;
        }
        if (iVar14 < 0 == bVar9) {
LAB_109af3990:
          uVar5 = *(undefined4 *)((long)plVar16 + 4);
          iVar14 = *(int *)((long)plVar16 + 0xc);
          lVar27 = plVar16[2];
          lVar15 = plVar18[2];
          lVar13 = *plVar18;
          plVar16[1] = plVar18[1];
          *plVar16 = lVar13;
          plVar16[2] = lVar15;
          while ((long)uVar26 <= (long)uVar19) {
            uVar4 = uVar26 << 1 | 1;
            plVar16 = plVar10 + uVar4 * 3;
            uVar1 = uVar26 * 2 + 2;
            uVar26 = uVar4;
            if ((long)uVar1 < (long)uVar21) {
              iVar7 = (int)plVar16[3];
              iVar24 = (int)*plVar16;
              bVar8 = SBORROW4(iVar24,iVar7);
              bVar9 = iVar24 - iVar7 < 0;
              if (iVar24 == iVar7) {
                iVar24 = (int)plVar16[1];
                iVar7 = (int)plVar16[4];
                bVar8 = SBORROW4(iVar24,iVar7);
                bVar9 = iVar24 - iVar7 < 0;
                if (iVar24 == iVar7) {
                  bVar8 = SBORROW4(*(int *)((long)plVar16 + 0xc),*(int *)((long)plVar16 + 0x24));
                  bVar9 = *(int *)((long)plVar16 + 0xc) - *(int *)((long)plVar16 + 0x24) < 0;
                }
              }
              if (bVar9 != bVar8) {
                plVar16 = plVar16 + 3;
                uVar26 = uVar1;
              }
            }
            iVar24 = (int)*plVar16;
            bVar8 = SBORROW4(iVar24,iVar6);
            bVar9 = iVar24 - iVar6 < 0;
            if (iVar24 == iVar6) {
              iVar24 = (int)plVar16[1];
              bVar8 = SBORROW4(iVar24,iVar20);
              bVar9 = iVar24 - iVar20 < 0;
              if (iVar24 == iVar20) {
                bVar8 = SBORROW4(*(int *)((long)plVar16 + 0xc),iVar14);
                bVar9 = *(int *)((long)plVar16 + 0xc) - iVar14 < 0;
              }
            }
            if (bVar9 != bVar8) break;
            lVar13 = plVar16[1];
            lVar15 = *plVar16;
            plVar18[2] = plVar16[2];
            plVar18[1] = lVar13;
            *plVar18 = lVar15;
            plVar18 = plVar16;
          }
          *(int *)plVar18 = iVar6;
          *(undefined4 *)((long)plVar18 + 4) = uVar5;
          *(int *)(plVar18 + 1) = iVar20;
          *(int *)((long)plVar18 + 0xc) = iVar14;
          plVar18[2] = lVar27;
        }
      }
      else if (iVar6 <= (int)*plVar18) {
        iVar20 = (int)plVar16[1];
        goto LAB_109af3990;
      }
    }
    bVar9 = uVar23 != 0;
    uVar23 = uVar23 - 1;
  } while (bVar9);
  lVar27 = (uVar17 >> 3) * -0x5555555555555555;
  do {
    lVar29 = plVar10[1];
    lVar13 = *plVar10;
    lVar15 = plVar10[2];
    plVar18 = plVar10;
    uVar17 = 0;
    do {
      uVar23 = uVar17 << 1 | 1;
      uVar21 = uVar17 * 2 + 2;
      plVar16 = plVar18 + uVar17 * 3 + 3;
      if ((long)uVar21 < lVar27) {
        iVar20 = (int)plVar18[uVar17 * 3 + 6];
        iVar6 = (int)plVar18[uVar17 * 3 + 3];
        bVar8 = SBORROW4(iVar6,iVar20);
        bVar9 = iVar6 - iVar20 < 0;
        if (iVar6 == iVar20) {
          iVar6 = (int)plVar18[uVar17 * 3 + 4];
          iVar20 = (int)plVar18[uVar17 * 3 + 7];
          bVar8 = SBORROW4(iVar6,iVar20);
          bVar9 = iVar6 - iVar20 < 0;
          if (iVar6 == iVar20) {
            iVar6 = *(int *)((long)plVar18 + uVar17 * 0x18 + 0x24);
            iVar20 = *(int *)((long)plVar18 + uVar17 * 0x18 + 0x3c);
            bVar8 = SBORROW4(iVar6,iVar20);
            bVar9 = iVar6 - iVar20 < 0;
          }
        }
        if (bVar9 != bVar8) {
          plVar16 = plVar18 + uVar17 * 3 + 6;
          uVar23 = uVar21;
        }
      }
      lVar32 = plVar16[1];
      lVar31 = *plVar16;
      plVar18[2] = plVar16[2];
      plVar18[1] = lVar32;
      *plVar18 = lVar31;
      plVar18 = plVar16;
      uVar17 = uVar23;
    } while ((long)uVar23 <= (lVar27 + -2) / 2);
    plVar18 = param_2 + -3;
    if (plVar16 == plVar18) {
      plVar16[2] = lVar15;
      plVar16[1] = lVar29;
      *plVar16 = lVar13;
    }
    else {
      lVar32 = param_2[-2];
      lVar31 = *plVar18;
      plVar16[2] = param_2[-1];
      plVar16[1] = lVar32;
      *plVar16 = lVar31;
      param_2[-1] = lVar15;
      param_2[-2] = lVar29;
      *plVar18 = lVar13;
      puVar2 = (undefined *)((long)plVar16 + (0x18 - (long)plVar10));
      if (0x18 < (long)puVar2) {
        uVar21 = ((ulong)puVar2 >> 3) * -0x5555555555555555 - 2;
        uVar17 = uVar21 >> 1;
        plVar11 = plVar10 + uVar17 * 3;
        iVar6 = (int)*plVar16;
        if ((int)*plVar11 == iVar6) {
          iVar24 = (int)plVar11[1];
          iVar20 = (int)plVar16[1];
          bVar9 = SBORROW4(iVar24,iVar20);
          iVar14 = iVar24 - iVar20;
          if (iVar24 == iVar20) {
            bVar9 = SBORROW4(*(int *)((long)plVar11 + 0xc),*(int *)((long)plVar16 + 0xc));
            iVar14 = *(int *)((long)plVar11 + 0xc) - *(int *)((long)plVar16 + 0xc);
            iVar20 = iVar24;
          }
          if (iVar14 < 0 != bVar9) {
LAB_109af3bbc:
            uVar5 = *(undefined4 *)((long)plVar16 + 4);
            iVar14 = *(int *)((long)plVar16 + 0xc);
            lVar15 = plVar16[2];
            lVar13 = plVar11[2];
            lVar29 = *plVar11;
            plVar16[1] = plVar11[1];
            *plVar16 = lVar29;
            plVar16[2] = lVar13;
            while (1 < uVar21) {
              uVar21 = uVar17 - 1;
              uVar17 = uVar21 >> 1;
              plVar16 = plVar10 + uVar17 * 3;
              iVar24 = (int)*plVar16;
              bVar8 = SBORROW4(iVar24,iVar6);
              bVar9 = iVar24 - iVar6 < 0;
              if (iVar24 == iVar6) {
                iVar24 = (int)plVar16[1];
                bVar8 = SBORROW4(iVar24,iVar20);
                bVar9 = iVar24 - iVar20 < 0;
                if (iVar24 == iVar20) {
                  bVar8 = SBORROW4(*(int *)((long)plVar16 + 0xc),iVar14);
                  bVar9 = *(int *)((long)plVar16 + 0xc) - iVar14 < 0;
                }
              }
              if (bVar9 == bVar8) break;
              lVar29 = plVar16[1];
              lVar13 = *plVar16;
              plVar11[2] = plVar16[2];
              plVar11[1] = lVar29;
              *plVar11 = lVar13;
              plVar11 = plVar16;
            }
            *(int *)plVar11 = iVar6;
            *(undefined4 *)((long)plVar11 + 4) = uVar5;
            *(int *)(plVar11 + 1) = iVar20;
            *(int *)((long)plVar11 + 0xc) = iVar14;
            plVar11[2] = lVar15;
          }
        }
        else if ((int)*plVar11 < iVar6) {
          iVar20 = (int)plVar16[1];
          goto LAB_109af3bbc;
        }
      }
    }
    bVar9 = lVar27 < 3;
    lVar27 = lVar27 + -1;
    param_2 = plVar18;
    if (bVar9) {
      return;
    }
  } while( true );
LAB_109af35d0:
  param_2 = plVar22;
  if (((ulong)plVar11 & 1) != 0) {
    return;
  }
  goto LAB_109af311c;
}



/* Entry: 109af2fb4; end: 109af2ff7;  */

void FUN_109af2fb4(long *param_1,long *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  int iVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  
  if (param_1 < (long *)0xaaaaaaaaaaaaaab) {
    __Znwm((long)param_1 * 0x18);
    return;
  }
  func_0x000104c4f740();
  plVar16 = (long *)param_1[1];
  if (plVar16 < (long *)param_1[2]) {
    lVar13 = param_2[1];
    lVar25 = *param_2;
    plVar16[2] = param_2[2];
    plVar16[1] = lVar13;
    *plVar16 = lVar25;
    plVar16 = plVar16 + 3;
  }
  else {
    lVar25 = (long)plVar16 - *param_1;
    uVar15 = (lVar25 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar15) {
      FUN_109af2fa0();
LAB_109af311c:
      plVar14 = param_2 + -3;
      plVar16 = param_1;
LAB_109af312c:
      while( true ) {
        param_1 = plVar16;
        uVar15 = (long)param_2 - (long)param_1;
        uVar19 = ((long)uVar15 >> 3) * -0x5555555555555555;
        if (uVar19 - 2 == 0 || (long)uVar19 < 2) {
          if (uVar19 < 2) {
            return;
          }
          if (uVar19 == 2) {
            plVar16 = param_2 + -3;
            iVar18 = (int)*plVar16;
            iVar5 = (int)*param_1;
            bVar7 = SBORROW4(iVar18,iVar5);
            bVar8 = iVar18 - iVar5 < 0;
            if (iVar18 == iVar5) {
              iVar18 = (int)param_2[-2];
              iVar5 = (int)param_1[1];
              bVar7 = SBORROW4(iVar18,iVar5);
              bVar8 = iVar18 - iVar5 < 0;
              if (iVar18 == iVar5) {
                bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0xc));
                bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0xc) < 0;
              }
            }
            if (bVar8 == bVar7) {
              return;
            }
            lVar27 = param_1[1];
            lVar13 = *param_1;
            lVar25 = param_1[2];
            lVar29 = param_2[-2];
            lVar11 = *plVar16;
            param_1[2] = param_2[-1];
            param_1[1] = lVar29;
            *param_1 = lVar11;
            param_2[-1] = lVar25;
            param_2[-2] = lVar27;
            *plVar16 = lVar13;
            return;
          }
        }
        else {
          if (uVar19 == 3) {
            plVar16 = param_1 + 3;
            iVar5 = (int)*plVar16;
            iVar18 = (int)*param_1;
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
            if (iVar5 == iVar18) {
              iVar18 = (int)param_1[4];
              iVar12 = (int)param_1[1];
              bVar7 = SBORROW4(iVar18,iVar12);
              bVar8 = iVar18 - iVar12 < 0;
              if (iVar18 == iVar12) {
                bVar7 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc));
                bVar8 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc) < 0;
              }
            }
            if (bVar8 == bVar7) {
              iVar18 = (int)*plVar14;
              bVar7 = SBORROW4(iVar18,iVar5);
              bVar8 = iVar18 - iVar5 < 0;
              if (iVar18 == iVar5) {
                iVar5 = (int)param_2[-2];
                iVar18 = (int)param_1[4];
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0x24));
                  bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0x24) < 0;
                }
              }
              if (bVar8 != bVar7) {
                lVar25 = param_1[5];
                lVar27 = param_1[4];
                lVar11 = *plVar16;
                lVar13 = param_2[-1];
                lVar29 = *plVar14;
                param_1[4] = param_2[-2];
                *plVar16 = lVar29;
                param_1[5] = lVar13;
                param_2[-2] = lVar27;
                *plVar14 = lVar11;
                param_2[-1] = lVar25;
                iVar5 = (int)*plVar16;
                iVar18 = (int)*param_1;
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  iVar5 = (int)param_1[4];
                  iVar18 = (int)param_1[1];
                  bVar7 = SBORROW4(iVar5,iVar18);
                  bVar8 = iVar5 - iVar18 < 0;
                  if (iVar5 == iVar18) {
                    bVar7 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc));
                    bVar8 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc) < 0;
                  }
                }
                if (bVar8 != bVar7) {
                  lVar25 = param_1[2];
                  lVar11 = param_1[1];
                  lVar13 = *param_1;
                  param_1[1] = param_1[4];
                  *param_1 = *plVar16;
                  param_1[2] = param_1[5];
                  param_1[4] = lVar11;
                  *plVar16 = lVar13;
                  param_1[5] = lVar25;
                }
              }
            }
            else {
              iVar18 = (int)*plVar14;
              bVar7 = SBORROW4(iVar18,iVar5);
              bVar8 = iVar18 - iVar5 < 0;
              if (iVar18 == iVar5) {
                iVar5 = (int)param_2[-2];
                iVar18 = (int)param_1[4];
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0x24));
                  bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0x24) < 0;
                }
              }
              if (bVar8 == bVar7) {
                lVar25 = param_1[2];
                lVar11 = param_1[1];
                lVar13 = *param_1;
                param_1[1] = param_1[4];
                *param_1 = *plVar16;
                param_1[2] = param_1[5];
                param_1[4] = lVar11;
                *plVar16 = lVar13;
                param_1[5] = lVar25;
                iVar5 = (int)*plVar14;
                iVar18 = (int)*plVar16;
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  iVar5 = (int)param_2[-2];
                  iVar18 = (int)param_1[4];
                  bVar7 = SBORROW4(iVar5,iVar18);
                  bVar8 = iVar5 - iVar18 < 0;
                  if (iVar5 == iVar18) {
                    bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0x24));
                    bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0x24) < 0;
                  }
                }
                if (bVar8 == bVar7) {
                  return;
                }
                lVar25 = param_1[5];
                lVar27 = param_1[4];
                lVar11 = *plVar16;
                lVar13 = param_2[-1];
                lVar29 = *plVar14;
                param_1[4] = param_2[-2];
                *plVar16 = lVar29;
                param_1[5] = lVar13;
              }
              else {
                lVar25 = param_1[2];
                lVar27 = param_1[1];
                lVar11 = *param_1;
                lVar13 = param_2[-1];
                lVar29 = *plVar14;
                param_1[1] = param_2[-2];
                *param_1 = lVar29;
                param_1[2] = lVar13;
              }
              param_2[-2] = lVar27;
              *plVar14 = lVar11;
              param_2[-1] = lVar25;
            }
            return;
          }
          if (uVar19 == 4) {
            FUN_109af3d14(param_1,param_1 + 3,param_1 + 6);
            plVar16 = param_2 + -3;
            iVar18 = (int)*plVar16;
            iVar5 = (int)param_1[6];
            bVar7 = SBORROW4(iVar18,iVar5);
            bVar8 = iVar18 - iVar5 < 0;
            if (iVar18 == iVar5) {
              iVar18 = (int)param_2[-2];
              iVar5 = (int)param_1[7];
              bVar7 = SBORROW4(iVar18,iVar5);
              bVar8 = iVar18 - iVar5 < 0;
              if (iVar18 == iVar5) {
                bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0x3c));
                bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0x3c) < 0;
              }
            }
            if (bVar8 == bVar7) {
              return;
            }
            lVar27 = param_1[7];
            lVar11 = param_1[6];
            lVar25 = param_1[8];
            lVar13 = param_2[-1];
            lVar29 = *plVar16;
            param_1[7] = param_2[-2];
            param_1[6] = lVar29;
            param_1[8] = lVar13;
            param_2[-1] = lVar25;
            param_2[-2] = lVar27;
            *plVar16 = lVar11;
            iVar5 = (int)param_1[6];
            iVar18 = (int)param_1[3];
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
            if (iVar5 == iVar18) {
              iVar5 = (int)param_1[7];
              iVar18 = (int)param_1[4];
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)param_1 + 0x3c),*(int *)((long)param_1 + 0x24));
                bVar8 = *(int *)((long)param_1 + 0x3c) - *(int *)((long)param_1 + 0x24) < 0;
              }
            }
            if (bVar8 == bVar7) {
              return;
            }
            lVar25 = param_1[5];
            lVar11 = param_1[4];
            lVar13 = param_1[3];
            param_1[4] = param_1[7];
            param_1[3] = param_1[6];
            param_1[5] = param_1[8];
            param_1[7] = lVar11;
            param_1[6] = lVar13;
            param_1[8] = lVar25;
            iVar5 = (int)param_1[3];
            iVar18 = (int)*param_1;
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
            if (iVar5 == iVar18) {
              iVar5 = (int)param_1[4];
              iVar18 = (int)param_1[1];
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc));
                bVar8 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc) < 0;
              }
            }
            if (bVar8 == bVar7) {
              return;
            }
            lVar11 = param_1[1];
            lVar13 = *param_1;
            lVar25 = param_1[2];
            param_1[1] = param_1[4];
            *param_1 = param_1[3];
            param_1[2] = param_1[5];
            param_1[4] = lVar11;
            param_1[3] = lVar13;
            param_1[5] = lVar25;
            return;
          }
          if (uVar19 == 5) {
            plVar16 = param_1 + 3;
            plVar9 = param_1 + 6;
            plVar10 = param_1 + 9;
            FUN_109af3d14();
            iVar5 = (int)*plVar10;
            iVar18 = (int)*plVar9;
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
            if (iVar5 == iVar18) {
              iVar5 = (int)param_1[10];
              iVar18 = (int)param_1[7];
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)param_1 + 0x54),*(int *)((long)param_1 + 0x3c));
                bVar8 = *(int *)((long)param_1 + 0x54) - *(int *)((long)param_1 + 0x3c) < 0;
              }
            }
            if (bVar8 != bVar7) {
              lVar25 = param_1[8];
              lVar11 = param_1[7];
              lVar13 = *plVar9;
              param_1[7] = param_1[10];
              *plVar9 = *plVar10;
              param_1[8] = param_1[0xb];
              param_1[10] = lVar11;
              *plVar10 = lVar13;
              param_1[0xb] = lVar25;
              iVar5 = (int)*plVar9;
              iVar18 = (int)*plVar16;
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                iVar5 = (int)param_1[7];
                iVar18 = (int)param_1[4];
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  bVar7 = SBORROW4(*(int *)((long)param_1 + 0x3c),*(int *)((long)param_1 + 0x24));
                  bVar8 = *(int *)((long)param_1 + 0x3c) - *(int *)((long)param_1 + 0x24) < 0;
                }
              }
              if (bVar8 != bVar7) {
                lVar25 = param_1[5];
                lVar11 = param_1[4];
                lVar13 = *plVar16;
                param_1[4] = param_1[7];
                *plVar16 = *plVar9;
                param_1[5] = param_1[8];
                param_1[7] = lVar11;
                *plVar9 = lVar13;
                param_1[8] = lVar25;
                iVar5 = (int)*plVar16;
                iVar18 = (int)*param_1;
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  iVar5 = (int)param_1[4];
                  iVar18 = (int)param_1[1];
                  bVar7 = SBORROW4(iVar5,iVar18);
                  bVar8 = iVar5 - iVar18 < 0;
                  if (iVar5 == iVar18) {
                    bVar7 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc));
                    bVar8 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc) < 0;
                  }
                }
                if (bVar8 != bVar7) {
                  lVar25 = param_1[2];
                  lVar11 = param_1[1];
                  lVar13 = *param_1;
                  param_1[1] = param_1[4];
                  *param_1 = *plVar16;
                  param_1[2] = param_1[5];
                  param_1[4] = lVar11;
                  *plVar16 = lVar13;
                  param_1[5] = lVar25;
                }
              }
            }
            iVar5 = (int)*plVar14;
            iVar18 = (int)*plVar10;
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
            if (iVar5 == iVar18) {
              iVar5 = (int)param_2[-2];
              iVar18 = (int)param_1[10];
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0x54));
                bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0x54) < 0;
              }
            }
            if (bVar8 != bVar7) {
              lVar25 = param_1[0xb];
              lVar27 = param_1[10];
              lVar11 = *plVar10;
              lVar13 = param_2[-1];
              lVar29 = *plVar14;
              param_1[10] = param_2[-2];
              *plVar10 = lVar29;
              param_1[0xb] = lVar13;
              param_2[-2] = lVar27;
              *plVar14 = lVar11;
              param_2[-1] = lVar25;
              iVar5 = (int)*plVar10;
              iVar18 = (int)*plVar9;
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                iVar5 = (int)param_1[10];
                iVar18 = (int)param_1[7];
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  bVar7 = SBORROW4(*(int *)((long)param_1 + 0x54),*(int *)((long)param_1 + 0x3c));
                  bVar8 = *(int *)((long)param_1 + 0x54) - *(int *)((long)param_1 + 0x3c) < 0;
                }
              }
              if (bVar8 != bVar7) {
                lVar25 = param_1[8];
                lVar11 = param_1[7];
                lVar13 = *plVar9;
                param_1[7] = param_1[10];
                *plVar9 = *plVar10;
                param_1[8] = param_1[0xb];
                param_1[10] = lVar11;
                *plVar10 = lVar13;
                param_1[0xb] = lVar25;
                iVar5 = (int)*plVar9;
                iVar18 = (int)*plVar16;
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  iVar5 = (int)param_1[7];
                  iVar18 = (int)param_1[4];
                  bVar7 = SBORROW4(iVar5,iVar18);
                  bVar8 = iVar5 - iVar18 < 0;
                  if (iVar5 == iVar18) {
                    bVar7 = SBORROW4(*(int *)((long)param_1 + 0x3c),*(int *)((long)param_1 + 0x24));
                    bVar8 = *(int *)((long)param_1 + 0x3c) - *(int *)((long)param_1 + 0x24) < 0;
                  }
                }
                if (bVar8 != bVar7) {
                  lVar25 = param_1[5];
                  lVar11 = param_1[4];
                  lVar13 = *plVar16;
                  param_1[4] = param_1[7];
                  *plVar16 = *plVar9;
                  param_1[5] = param_1[8];
                  param_1[7] = lVar11;
                  *plVar9 = lVar13;
                  param_1[8] = lVar25;
                  iVar5 = (int)*plVar16;
                  iVar18 = (int)*param_1;
                  bVar7 = SBORROW4(iVar5,iVar18);
                  bVar8 = iVar5 - iVar18 < 0;
                  if (iVar5 == iVar18) {
                    iVar5 = (int)param_1[4];
                    iVar18 = (int)param_1[1];
                    bVar7 = SBORROW4(iVar5,iVar18);
                    bVar8 = iVar5 - iVar18 < 0;
                    if (iVar5 == iVar18) {
                      bVar7 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc))
                      ;
                      bVar8 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc) < 0;
                    }
                  }
                  if (bVar8 != bVar7) {
                    lVar25 = param_1[2];
                    lVar11 = param_1[1];
                    lVar13 = *param_1;
                    param_1[1] = param_1[4];
                    *param_1 = *plVar16;
                    param_1[2] = param_1[5];
                    param_1[4] = lVar11;
                    *plVar16 = lVar13;
                    param_1[5] = lVar25;
                  }
                }
              }
            }
            return;
          }
        }
        if ((long)uVar15 < 0x240) {
          plVar16 = param_1 + 3;
          if ((param_4 & 1) == 0) {
            if (param_1 == param_2 || plVar16 == param_2) {
              return;
            }
            goto LAB_109af3c54;
          }
          if (param_1 == param_2 || plVar16 == param_2) {
            return;
          }
          lVar25 = 0;
          plVar14 = param_1;
          goto LAB_109af37e4;
        }
        if (param_3 == 0) {
          if (param_1 == param_2) {
            return;
          }
          uVar17 = uVar19 - 2 >> 1;
          uVar21 = uVar17;
          goto LAB_109af38e8;
        }
        plVar16 = param_1 + (uVar19 >> 1) * 3;
        if (uVar15 < 0xc01) {
          FUN_109af3d14(plVar16,param_1,plVar14);
        }
        else {
          FUN_109af3d14(param_1,plVar16,plVar14);
          FUN_109af3d14(param_1 + 3,plVar16 + -3,param_2 + -6);
          FUN_109af3d14(param_1 + 6,plVar16 + 3,param_2 + -9);
          FUN_109af3d14(plVar16 + -3,plVar16,plVar16 + 3);
          lVar29 = param_1[1];
          lVar11 = *param_1;
          lVar25 = param_1[2];
          lVar13 = plVar16[2];
          lVar27 = *plVar16;
          param_1[1] = plVar16[1];
          *param_1 = lVar27;
          param_1[2] = lVar13;
          plVar16[2] = lVar25;
          plVar16[1] = lVar29;
          *plVar16 = lVar11;
        }
        param_3 = param_3 + -1;
        iVar5 = (int)*param_1;
        if ((param_4 & 1) != 0) break;
        if ((int)param_1[-3] != iVar5) {
          if (iVar5 <= (int)param_1[-3]) {
            iVar12 = (int)param_1[1];
            goto LAB_109af3454;
          }
          break;
        }
        iVar12 = (int)param_1[-2];
        iVar18 = (int)param_1[1];
        if (iVar12 != iVar18) {
          bVar8 = iVar18 <= iVar12;
          iVar12 = iVar18;
          if (bVar8) goto LAB_109af3454;
          break;
        }
        if (*(int *)((long)param_1 - 0xc) < *(int *)((long)param_1 + 0xc)) break;
LAB_109af3454:
        iVar18 = *(int *)((long)param_1 + 0xc);
        iVar22 = (int)*plVar14;
        bVar7 = SBORROW4(iVar5,iVar22);
        bVar8 = iVar5 - iVar22 < 0;
        if (iVar5 == iVar22) {
          iVar6 = (int)param_2[-2];
          bVar7 = SBORROW4(iVar12,iVar6);
          bVar8 = iVar12 - iVar6 < 0;
          if (iVar12 == iVar6) {
            bVar7 = SBORROW4(iVar18,*(int *)((long)param_2 + -0xc));
            bVar8 = iVar18 - *(int *)((long)param_2 + -0xc) < 0;
          }
        }
        plVar16 = param_1 + 3;
        if (bVar8 == bVar7) {
          for (; plVar16 < param_2; plVar16 = plVar16 + 3) {
            iVar6 = (int)*plVar16;
            bVar7 = SBORROW4(iVar5,iVar6);
            bVar8 = iVar5 - iVar6 < 0;
            if (iVar5 == iVar6) {
              iVar6 = (int)plVar16[1];
              bVar7 = SBORROW4(iVar12,iVar6);
              bVar8 = iVar12 - iVar6 < 0;
              if (iVar12 == iVar6) {
                bVar7 = SBORROW4(iVar18,*(int *)((long)plVar16 + 0xc));
                bVar8 = iVar18 - *(int *)((long)plVar16 + 0xc) < 0;
              }
            }
            if (bVar8 != bVar7) break;
          }
        }
        else {
          while( true ) {
            iVar6 = (int)*plVar16;
            bVar7 = SBORROW4(iVar5,iVar6);
            bVar8 = iVar5 - iVar6 < 0;
            if (iVar5 == iVar6) {
              iVar6 = (int)plVar16[1];
              bVar7 = SBORROW4(iVar12,iVar6);
              bVar8 = iVar12 - iVar6 < 0;
              if (iVar12 == iVar6) {
                bVar7 = SBORROW4(iVar18,*(int *)((long)plVar16 + 0xc));
                bVar8 = iVar18 - *(int *)((long)plVar16 + 0xc) < 0;
              }
            }
            if (bVar8 != bVar7) break;
            plVar16 = plVar16 + 3;
          }
        }
        uVar4 = *(undefined4 *)((long)param_1 + 4);
        lVar25 = param_1[2];
        plVar9 = param_2;
        plVar10 = plVar14;
        if (plVar16 < param_2) {
          while( true ) {
            plVar9 = plVar10;
            bVar7 = SBORROW4(iVar5,iVar22);
            bVar8 = iVar5 - iVar22 < 0;
            if (iVar5 == iVar22) {
              iVar22 = (int)plVar9[1];
              bVar7 = SBORROW4(iVar12,iVar22);
              bVar8 = iVar12 - iVar22 < 0;
              if (iVar12 == iVar22) {
                bVar7 = SBORROW4(iVar18,*(int *)((long)plVar9 + 0xc));
                bVar8 = iVar18 - *(int *)((long)plVar9 + 0xc) < 0;
              }
            }
            if (bVar8 == bVar7) break;
            iVar22 = (int)plVar9[-3];
            plVar10 = plVar9 + -3;
          }
        }
        while (plVar16 < plVar9) {
          lVar29 = plVar16[1];
          lVar11 = *plVar16;
          lVar13 = plVar16[2];
          lVar30 = plVar9[1];
          lVar27 = *plVar9;
          plVar16[2] = plVar9[2];
          plVar16[1] = lVar30;
          *plVar16 = lVar27;
          plVar9[2] = lVar13;
          plVar9[1] = lVar29;
          *plVar9 = lVar11;
          plVar10 = plVar16;
          do {
            plVar16 = plVar10 + 3;
            iVar22 = (int)*plVar16;
            bVar7 = SBORROW4(iVar5,iVar22);
            bVar8 = iVar5 - iVar22 < 0;
            if (iVar5 == iVar22) {
              iVar22 = (int)plVar10[4];
              bVar7 = SBORROW4(iVar12,iVar22);
              bVar8 = iVar12 - iVar22 < 0;
              if (iVar12 == iVar22) {
                bVar7 = SBORROW4(iVar18,*(int *)((long)plVar10 + 0x24));
                bVar8 = iVar18 - *(int *)((long)plVar10 + 0x24) < 0;
              }
            }
            plVar20 = plVar9;
            plVar10 = plVar16;
          } while (bVar8 == bVar7);
          do {
            plVar9 = plVar20 + -3;
            iVar22 = (int)*plVar9;
            bVar7 = SBORROW4(iVar5,iVar22);
            bVar8 = iVar5 - iVar22 < 0;
            if (iVar5 == iVar22) {
              iVar22 = (int)plVar20[-2];
              bVar7 = SBORROW4(iVar12,iVar22);
              bVar8 = iVar12 - iVar22 < 0;
              if (iVar12 == iVar22) {
                bVar7 = SBORROW4(iVar18,*(int *)((long)plVar20 + -0xc));
                bVar8 = iVar18 - *(int *)((long)plVar20 + -0xc) < 0;
              }
            }
            plVar20 = plVar9;
          } while (bVar8 != bVar7);
        }
        if (plVar16 + -3 != param_1) {
          lVar11 = plVar16[-2];
          lVar13 = plVar16[-3];
          param_1[2] = plVar16[-1];
          param_1[1] = lVar11;
          *param_1 = lVar13;
        }
        param_4 = 0;
        *(int *)(plVar16 + -3) = iVar5;
        *(undefined4 *)((long)plVar16 + -0x14) = uVar4;
        *(int *)(plVar16 + -2) = iVar12;
        *(int *)((long)plVar16 + -0xc) = iVar18;
        plVar16[-1] = lVar25;
      }
      lVar25 = 0;
      uVar28 = *(undefined8 *)((long)param_1 + 4);
      iVar18 = (int)param_1[1];
      iVar12 = *(int *)((long)param_1 + 0xc);
      lVar13 = param_1[2];
      while( true ) {
        iVar22 = *(int *)((long)param_1 + lVar25 + 0x18);
        bVar7 = SBORROW4(iVar22,iVar5);
        bVar8 = iVar22 - iVar5 < 0;
        if (iVar22 == iVar5) {
          iVar22 = *(int *)((long)param_1 + lVar25 + 0x20);
          bVar7 = SBORROW4(iVar22,iVar18);
          bVar8 = iVar22 - iVar18 < 0;
          if (iVar22 == iVar18) {
            iVar22 = *(int *)((long)param_1 + lVar25 + 0x24);
            bVar7 = SBORROW4(iVar22,iVar12);
            bVar8 = iVar22 - iVar12 < 0;
          }
        }
        if (bVar8 == bVar7) break;
        lVar25 = lVar25 + 0x18;
      }
      plVar9 = (long *)((long)param_1 + lVar25 + 0x18);
      plVar10 = plVar14;
      if (lVar25 == 0) {
        plVar16 = plVar14;
        plVar10 = param_2;
        if (plVar9 < param_2) {
          do {
            plVar10 = plVar16;
            if ((int)*plVar16 == iVar5) {
              if ((int)plVar16[1] == iVar18) {
                if ((plVar16 <= plVar9) || (*(int *)((long)plVar16 + 0xc) < iVar12)) break;
              }
              else if ((plVar16 <= plVar9) || ((int)plVar16[1] < iVar18)) break;
            }
            else if ((int)*plVar16 < iVar5 || plVar16 <= plVar9) break;
            plVar16 = plVar16 + -3;
          } while( true );
        }
      }
      else {
        while( true ) {
          iVar22 = (int)*plVar10;
          bVar7 = SBORROW4(iVar22,iVar5);
          bVar8 = iVar22 - iVar5 < 0;
          if (iVar22 == iVar5) {
            iVar22 = (int)plVar10[1];
            bVar7 = SBORROW4(iVar22,iVar18);
            bVar8 = iVar22 - iVar18 < 0;
            if (iVar22 == iVar18) {
              bVar7 = SBORROW4(*(int *)((long)plVar10 + 0xc),iVar12);
              bVar8 = *(int *)((long)plVar10 + 0xc) - iVar12 < 0;
            }
          }
          if (bVar8 != bVar7) break;
          plVar10 = plVar10 + -3;
        }
      }
      plVar20 = plVar10;
      plVar16 = plVar9;
      plVar26 = plVar9;
      if (plVar9 < plVar10) {
        do {
          lVar29 = plVar26[1];
          lVar11 = *plVar26;
          lVar25 = plVar26[2];
          lVar30 = plVar20[1];
          lVar27 = *plVar20;
          plVar26[2] = plVar20[2];
          plVar26[1] = lVar30;
          *plVar26 = lVar27;
          plVar20[2] = lVar25;
          plVar20[1] = lVar29;
          *plVar20 = lVar11;
          do {
            plVar16 = plVar26 + 3;
            iVar22 = (int)*plVar16;
            bVar7 = SBORROW4(iVar22,iVar5);
            bVar8 = iVar22 - iVar5 < 0;
            if (iVar22 == iVar5) {
              iVar22 = (int)plVar26[4];
              bVar7 = SBORROW4(iVar22,iVar18);
              bVar8 = iVar22 - iVar18 < 0;
              if (iVar22 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)plVar26 + 0x24),iVar12);
                bVar8 = *(int *)((long)plVar26 + 0x24) - iVar12 < 0;
              }
            }
            plVar26 = plVar16;
          } while (bVar8 != bVar7);
          do {
            plVar23 = plVar20 + -3;
            iVar22 = (int)*plVar23;
            bVar7 = SBORROW4(iVar22,iVar5);
            bVar8 = iVar22 - iVar5 < 0;
            if (iVar22 == iVar5) {
              iVar22 = (int)plVar20[-2];
              bVar7 = SBORROW4(iVar22,iVar18);
              bVar8 = iVar22 - iVar18 < 0;
              if (iVar22 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)plVar20 + -0xc),iVar12);
                bVar8 = *(int *)((long)plVar20 + -0xc) - iVar12 < 0;
              }
            }
            plVar20 = plVar23;
          } while (bVar8 == bVar7);
        } while (plVar16 < plVar23);
      }
      plVar20 = plVar16 + -3;
      if (plVar20 != param_1) {
        lVar11 = plVar16[-2];
        lVar25 = *plVar20;
        param_1[2] = plVar16[-1];
        param_1[1] = lVar11;
        *param_1 = lVar25;
      }
      *(int *)(plVar16 + -3) = iVar5;
      *(undefined8 *)((long)plVar16 - 0x14) = uVar28;
      *(int *)((long)plVar16 - 0xc) = iVar12;
      plVar16[-1] = lVar13;
      if (plVar10 <= plVar9) {
        plVar9 = param_1;
        FUN_109af4120(param_1,plVar20);
        plVar10 = plVar16;
        FUN_109af4120(plVar16,param_2);
        if ((int)plVar10 != 0) goto LAB_109af35d0;
        if (((ulong)plVar9 & 1) != 0) goto LAB_109af312c;
      }
      FUN_109af30ec(param_1,plVar20,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_109af312c;
    }
    lVar13 = param_1[2] - *param_1 >> 3;
    uVar19 = lVar13 * 0x5555555555555556;
    if (uVar19 < uVar15 || uVar19 - uVar15 == 0) {
      uVar19 = uVar15;
    }
    if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
      uVar19 = 0xaaaaaaaaaaaaaaa;
    }
    plVar9 = param_2;
    FUN_109af2fb4();
    plVar14 = (long *)(uVar19 + lVar25);
    lVar13 = param_2[1];
    lVar25 = *param_2;
    plVar14[2] = param_2[2];
    plVar14[1] = lVar13;
    *plVar14 = lVar25;
    plVar16 = plVar14 + 3;
    lVar13 = (long)plVar14 - (param_1[1] - *param_1);
    _memcpy(lVar13);
    lVar25 = *param_1;
    *param_1 = lVar13;
    param_1[1] = (long)plVar16;
    param_1[2] = uVar19 + (long)plVar9 * 0x18;
    if (lVar25 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar16;
  return;
LAB_109af3c54:
  plVar14 = plVar16;
  iVar5 = (int)param_1[3];
  if (iVar5 == (int)*param_1) {
    iVar18 = (int)param_1[4];
    iVar22 = (int)param_1[1];
    bVar8 = SBORROW4(iVar18,iVar22);
    iVar12 = iVar18 - iVar22;
    if (iVar18 == iVar22) {
      bVar8 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc));
      iVar12 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc);
    }
    if (iVar12 < 0 != bVar8) {
LAB_109af3c98:
      uVar4 = *(undefined4 *)((long)param_1 + 0x1c);
      iVar12 = *(int *)((long)param_1 + 0x24);
      lVar25 = param_1[5];
      do {
        plVar16 = param_1;
        plVar16[4] = plVar16[1];
        plVar16[3] = *plVar16;
        plVar16[5] = plVar16[2];
        iVar22 = (int)plVar16[-3];
        bVar7 = SBORROW4(iVar5,iVar22);
        bVar8 = iVar5 - iVar22 < 0;
        if (iVar5 == iVar22) {
          iVar22 = (int)plVar16[-2];
          bVar7 = SBORROW4(iVar18,iVar22);
          bVar8 = iVar18 - iVar22 < 0;
          if (iVar18 == iVar22) {
            bVar7 = SBORROW4(iVar12,*(int *)((long)plVar16 - 0xc));
            bVar8 = iVar12 - *(int *)((long)plVar16 - 0xc) < 0;
          }
        }
        param_1 = plVar16 + -3;
      } while (bVar8 != bVar7);
      *(int *)plVar16 = iVar5;
      *(undefined4 *)((long)plVar16 + 4) = uVar4;
      *(int *)(plVar16 + 1) = iVar18;
      *(int *)((long)plVar16 + 0xc) = iVar12;
      plVar16[2] = lVar25;
    }
  }
  else if (iVar5 < (int)*param_1) {
    iVar18 = (int)param_1[4];
    goto LAB_109af3c98;
  }
  plVar16 = plVar14 + 3;
  param_1 = plVar14;
  if (plVar16 == param_2) {
    return;
  }
  goto LAB_109af3c54;
LAB_109af37e4:
  iVar5 = (int)plVar14[3];
  if (iVar5 == (int)*plVar14) {
    iVar18 = (int)plVar14[4];
    iVar22 = (int)plVar14[1];
    bVar8 = SBORROW4(iVar18,iVar22);
    iVar12 = iVar18 - iVar22;
    if (iVar18 == iVar22) {
      bVar8 = SBORROW4(*(int *)((long)plVar14 + 0x24),*(int *)((long)plVar14 + 0xc));
      iVar12 = *(int *)((long)plVar14 + 0x24) - *(int *)((long)plVar14 + 0xc);
    }
    if (iVar12 < 0 != bVar8) {
LAB_109af3828:
      uVar4 = *(undefined4 *)((long)plVar14 + 0x1c);
      iVar12 = *(int *)((long)plVar14 + 0x24);
      lVar11 = plVar14[5];
      lVar13 = *plVar14;
      plVar16[1] = plVar14[1];
      *plVar16 = lVar13;
      plVar16[2] = plVar14[2];
      plVar9 = param_1;
      lVar13 = lVar25;
      if (plVar14 != param_1) {
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar13);
          iVar6 = *(int *)(puVar2 + -3);
          bVar8 = SBORROW4(iVar5,iVar6);
          iVar22 = iVar5 - iVar6;
          if (iVar5 == iVar6) {
            iVar6 = *(int *)(puVar2 + -2);
            bVar8 = SBORROW4(iVar18,iVar6);
            iVar22 = iVar18 - iVar6;
            if (iVar18 != iVar6) goto LAB_109af3888;
            plVar9 = (long *)((long)param_1 + lVar13);
            if (*(int *)(((long)param_1 + lVar13) - 0xc) <= iVar12) break;
          }
          else {
LAB_109af3888:
            plVar9 = plVar14;
            if (iVar22 < 0 == bVar8) break;
          }
          plVar14 = plVar14 + -3;
          puVar2[1] = puVar2[-2];
          *puVar2 = puVar2[-3];
          puVar2[2] = puVar2[-1];
          lVar13 = lVar13 + -0x18;
          plVar9 = param_1;
        } while (lVar13 != 0);
      }
      *(int *)plVar9 = iVar5;
      *(undefined4 *)((long)plVar9 + 4) = uVar4;
      *(int *)(plVar9 + 1) = iVar18;
      *(int *)((long)plVar9 + 0xc) = iVar12;
      plVar9[2] = lVar11;
    }
  }
  else if (iVar5 < (int)*plVar14) {
    iVar18 = (int)plVar14[4];
    goto LAB_109af3828;
  }
  plVar9 = plVar16 + 3;
  lVar25 = lVar25 + 0x18;
  plVar14 = plVar16;
  plVar16 = plVar9;
  if (plVar9 == param_2) {
    return;
  }
  goto LAB_109af37e4;
LAB_109af38e8:
  do {
    if ((long)uVar21 <= (long)uVar17) {
      uVar24 = uVar21 << 1 | 1;
      plVar16 = param_1 + uVar24 * 3;
      uVar1 = uVar21 * 2 + 2;
      if ((long)uVar1 < (long)uVar19) {
        iVar18 = (int)plVar16[3];
        iVar5 = (int)*plVar16;
        bVar7 = SBORROW4(iVar5,iVar18);
        bVar8 = iVar5 - iVar18 < 0;
        if (iVar5 == iVar18) {
          iVar5 = (int)plVar16[1];
          iVar18 = (int)plVar16[4];
          bVar7 = SBORROW4(iVar5,iVar18);
          bVar8 = iVar5 - iVar18 < 0;
          if (iVar5 == iVar18) {
            bVar7 = SBORROW4(*(int *)((long)plVar16 + 0xc),*(int *)((long)plVar16 + 0x24));
            bVar8 = *(int *)((long)plVar16 + 0xc) - *(int *)((long)plVar16 + 0x24) < 0;
          }
        }
        if (bVar8 != bVar7) {
          plVar16 = plVar16 + 3;
          uVar24 = uVar1;
        }
      }
      plVar14 = param_1 + uVar21 * 3;
      iVar5 = (int)*plVar14;
      if ((int)*plVar16 == iVar5) {
        iVar22 = (int)plVar16[1];
        iVar18 = (int)plVar14[1];
        bVar8 = SBORROW4(iVar22,iVar18);
        iVar12 = iVar22 - iVar18;
        if (iVar22 == iVar18) {
          bVar8 = SBORROW4(*(int *)((long)plVar16 + 0xc),*(int *)((long)plVar14 + 0xc));
          iVar12 = *(int *)((long)plVar16 + 0xc) - *(int *)((long)plVar14 + 0xc);
          iVar18 = iVar22;
        }
        if (iVar12 < 0 == bVar8) {
LAB_109af3990:
          uVar4 = *(undefined4 *)((long)plVar14 + 4);
          iVar12 = *(int *)((long)plVar14 + 0xc);
          lVar25 = plVar14[2];
          lVar13 = plVar16[2];
          lVar11 = *plVar16;
          plVar14[1] = plVar16[1];
          *plVar14 = lVar11;
          plVar14[2] = lVar13;
          while ((long)uVar24 <= (long)uVar17) {
            uVar3 = uVar24 << 1 | 1;
            plVar14 = param_1 + uVar3 * 3;
            uVar1 = uVar24 * 2 + 2;
            uVar24 = uVar3;
            if ((long)uVar1 < (long)uVar19) {
              iVar6 = (int)plVar14[3];
              iVar22 = (int)*plVar14;
              bVar7 = SBORROW4(iVar22,iVar6);
              bVar8 = iVar22 - iVar6 < 0;
              if (iVar22 == iVar6) {
                iVar22 = (int)plVar14[1];
                iVar6 = (int)plVar14[4];
                bVar7 = SBORROW4(iVar22,iVar6);
                bVar8 = iVar22 - iVar6 < 0;
                if (iVar22 == iVar6) {
                  bVar7 = SBORROW4(*(int *)((long)plVar14 + 0xc),*(int *)((long)plVar14 + 0x24));
                  bVar8 = *(int *)((long)plVar14 + 0xc) - *(int *)((long)plVar14 + 0x24) < 0;
                }
              }
              if (bVar8 != bVar7) {
                plVar14 = plVar14 + 3;
                uVar24 = uVar1;
              }
            }
            iVar22 = (int)*plVar14;
            bVar7 = SBORROW4(iVar22,iVar5);
            bVar8 = iVar22 - iVar5 < 0;
            if (iVar22 == iVar5) {
              iVar22 = (int)plVar14[1];
              bVar7 = SBORROW4(iVar22,iVar18);
              bVar8 = iVar22 - iVar18 < 0;
              if (iVar22 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)plVar14 + 0xc),iVar12);
                bVar8 = *(int *)((long)plVar14 + 0xc) - iVar12 < 0;
              }
            }
            if (bVar8 != bVar7) break;
            lVar11 = plVar14[1];
            lVar13 = *plVar14;
            plVar16[2] = plVar14[2];
            plVar16[1] = lVar11;
            *plVar16 = lVar13;
            plVar16 = plVar14;
          }
          *(int *)plVar16 = iVar5;
          *(undefined4 *)((long)plVar16 + 4) = uVar4;
          *(int *)(plVar16 + 1) = iVar18;
          *(int *)((long)plVar16 + 0xc) = iVar12;
          plVar16[2] = lVar25;
        }
      }
      else if (iVar5 <= (int)*plVar16) {
        iVar18 = (int)plVar14[1];
        goto LAB_109af3990;
      }
    }
    bVar8 = uVar21 != 0;
    uVar21 = uVar21 - 1;
  } while (bVar8);
  lVar25 = (uVar15 >> 3) * -0x5555555555555555;
  do {
    lVar27 = param_1[1];
    lVar11 = *param_1;
    lVar13 = param_1[2];
    plVar16 = param_1;
    uVar15 = 0;
    do {
      uVar21 = uVar15 << 1 | 1;
      uVar19 = uVar15 * 2 + 2;
      plVar14 = plVar16 + uVar15 * 3 + 3;
      if ((long)uVar19 < lVar25) {
        iVar18 = (int)plVar16[uVar15 * 3 + 6];
        iVar5 = (int)plVar16[uVar15 * 3 + 3];
        bVar7 = SBORROW4(iVar5,iVar18);
        bVar8 = iVar5 - iVar18 < 0;
        if (iVar5 == iVar18) {
          iVar5 = (int)plVar16[uVar15 * 3 + 4];
          iVar18 = (int)plVar16[uVar15 * 3 + 7];
          bVar7 = SBORROW4(iVar5,iVar18);
          bVar8 = iVar5 - iVar18 < 0;
          if (iVar5 == iVar18) {
            iVar5 = *(int *)((long)plVar16 + uVar15 * 0x18 + 0x24);
            iVar18 = *(int *)((long)plVar16 + uVar15 * 0x18 + 0x3c);
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
          }
        }
        if (bVar8 != bVar7) {
          plVar14 = plVar16 + uVar15 * 3 + 6;
          uVar21 = uVar19;
        }
      }
      lVar30 = plVar14[1];
      lVar29 = *plVar14;
      plVar16[2] = plVar14[2];
      plVar16[1] = lVar30;
      *plVar16 = lVar29;
      plVar16 = plVar14;
      uVar15 = uVar21;
    } while ((long)uVar21 <= (lVar25 + -2) / 2);
    plVar16 = param_2 + -3;
    if (plVar14 == plVar16) {
      plVar14[2] = lVar13;
      plVar14[1] = lVar27;
      *plVar14 = lVar11;
    }
    else {
      lVar30 = param_2[-2];
      lVar29 = *plVar16;
      plVar14[2] = param_2[-1];
      plVar14[1] = lVar30;
      *plVar14 = lVar29;
      param_2[-1] = lVar13;
      param_2[-2] = lVar27;
      *plVar16 = lVar11;
      uVar15 = (long)plVar14 + (0x18 - (long)param_1);
      if (0x18 < (long)uVar15) {
        uVar19 = (uVar15 >> 3) * -0x5555555555555555 - 2;
        uVar15 = uVar19 >> 1;
        plVar9 = param_1 + uVar15 * 3;
        iVar5 = (int)*plVar14;
        if ((int)*plVar9 == iVar5) {
          iVar22 = (int)plVar9[1];
          iVar18 = (int)plVar14[1];
          bVar8 = SBORROW4(iVar22,iVar18);
          iVar12 = iVar22 - iVar18;
          if (iVar22 == iVar18) {
            bVar8 = SBORROW4(*(int *)((long)plVar9 + 0xc),*(int *)((long)plVar14 + 0xc));
            iVar12 = *(int *)((long)plVar9 + 0xc) - *(int *)((long)plVar14 + 0xc);
            iVar18 = iVar22;
          }
          if (iVar12 < 0 != bVar8) {
LAB_109af3bbc:
            uVar4 = *(undefined4 *)((long)plVar14 + 4);
            iVar12 = *(int *)((long)plVar14 + 0xc);
            lVar13 = plVar14[2];
            lVar11 = plVar9[2];
            lVar27 = *plVar9;
            plVar14[1] = plVar9[1];
            *plVar14 = lVar27;
            plVar14[2] = lVar11;
            while (1 < uVar19) {
              uVar19 = uVar15 - 1;
              uVar15 = uVar19 >> 1;
              plVar14 = param_1 + uVar15 * 3;
              iVar22 = (int)*plVar14;
              bVar7 = SBORROW4(iVar22,iVar5);
              bVar8 = iVar22 - iVar5 < 0;
              if (iVar22 == iVar5) {
                iVar22 = (int)plVar14[1];
                bVar7 = SBORROW4(iVar22,iVar18);
                bVar8 = iVar22 - iVar18 < 0;
                if (iVar22 == iVar18) {
                  bVar7 = SBORROW4(*(int *)((long)plVar14 + 0xc),iVar12);
                  bVar8 = *(int *)((long)plVar14 + 0xc) - iVar12 < 0;
                }
              }
              if (bVar8 == bVar7) break;
              lVar27 = plVar14[1];
              lVar11 = *plVar14;
              plVar9[2] = plVar14[2];
              plVar9[1] = lVar27;
              *plVar9 = lVar11;
              plVar9 = plVar14;
            }
            *(int *)plVar9 = iVar5;
            *(undefined4 *)((long)plVar9 + 4) = uVar4;
            *(int *)(plVar9 + 1) = iVar18;
            *(int *)((long)plVar9 + 0xc) = iVar12;
            plVar9[2] = lVar13;
          }
        }
        else if ((int)*plVar9 < iVar5) {
          iVar18 = (int)plVar14[1];
          goto LAB_109af3bbc;
        }
      }
    }
    bVar8 = lVar25 < 3;
    lVar25 = lVar25 + -1;
    param_2 = plVar16;
    if (bVar8) {
      return;
    }
  } while( true );
LAB_109af35d0:
  param_2 = plVar20;
  if (((ulong)plVar9 & 1) != 0) {
    return;
  }
  goto LAB_109af311c;
}



/* Entry: 109af2ff8; end: 109af30eb;  */

void FUN_109af2ff8(long *param_1,long *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  int iVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  
  plVar16 = (long *)param_1[1];
  if (plVar16 < (long *)param_1[2]) {
    lVar13 = param_2[1];
    lVar25 = *param_2;
    plVar16[2] = param_2[2];
    plVar16[1] = lVar13;
    *plVar16 = lVar25;
    plVar16 = plVar16 + 3;
  }
  else {
    lVar25 = (long)plVar16 - *param_1;
    uVar15 = (lVar25 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar15) {
      FUN_109af2fa0();
LAB_109af311c:
      plVar14 = param_2 + -3;
      plVar16 = param_1;
LAB_109af312c:
      while( true ) {
        param_1 = plVar16;
        uVar15 = (long)param_2 - (long)param_1;
        uVar19 = ((long)uVar15 >> 3) * -0x5555555555555555;
        if (uVar19 - 2 == 0 || (long)uVar19 < 2) {
          if (uVar19 < 2) {
            return;
          }
          if (uVar19 == 2) {
            plVar16 = param_2 + -3;
            iVar18 = (int)*plVar16;
            iVar5 = (int)*param_1;
            bVar7 = SBORROW4(iVar18,iVar5);
            bVar8 = iVar18 - iVar5 < 0;
            if (iVar18 == iVar5) {
              iVar18 = (int)param_2[-2];
              iVar5 = (int)param_1[1];
              bVar7 = SBORROW4(iVar18,iVar5);
              bVar8 = iVar18 - iVar5 < 0;
              if (iVar18 == iVar5) {
                bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0xc));
                bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0xc) < 0;
              }
            }
            if (bVar8 == bVar7) {
              return;
            }
            lVar27 = param_1[1];
            lVar13 = *param_1;
            lVar25 = param_1[2];
            lVar29 = param_2[-2];
            lVar11 = *plVar16;
            param_1[2] = param_2[-1];
            param_1[1] = lVar29;
            *param_1 = lVar11;
            param_2[-1] = lVar25;
            param_2[-2] = lVar27;
            *plVar16 = lVar13;
            return;
          }
        }
        else {
          if (uVar19 == 3) {
            plVar16 = param_1 + 3;
            iVar5 = (int)*plVar16;
            iVar18 = (int)*param_1;
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
            if (iVar5 == iVar18) {
              iVar18 = (int)param_1[4];
              iVar12 = (int)param_1[1];
              bVar7 = SBORROW4(iVar18,iVar12);
              bVar8 = iVar18 - iVar12 < 0;
              if (iVar18 == iVar12) {
                bVar7 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc));
                bVar8 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc) < 0;
              }
            }
            if (bVar8 == bVar7) {
              iVar18 = (int)*plVar14;
              bVar7 = SBORROW4(iVar18,iVar5);
              bVar8 = iVar18 - iVar5 < 0;
              if (iVar18 == iVar5) {
                iVar5 = (int)param_2[-2];
                iVar18 = (int)param_1[4];
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0x24));
                  bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0x24) < 0;
                }
              }
              if (bVar8 != bVar7) {
                lVar25 = param_1[5];
                lVar27 = param_1[4];
                lVar11 = *plVar16;
                lVar13 = param_2[-1];
                lVar29 = *plVar14;
                param_1[4] = param_2[-2];
                *plVar16 = lVar29;
                param_1[5] = lVar13;
                param_2[-2] = lVar27;
                *plVar14 = lVar11;
                param_2[-1] = lVar25;
                iVar5 = (int)*plVar16;
                iVar18 = (int)*param_1;
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  iVar5 = (int)param_1[4];
                  iVar18 = (int)param_1[1];
                  bVar7 = SBORROW4(iVar5,iVar18);
                  bVar8 = iVar5 - iVar18 < 0;
                  if (iVar5 == iVar18) {
                    bVar7 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc));
                    bVar8 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc) < 0;
                  }
                }
                if (bVar8 != bVar7) {
                  lVar25 = param_1[2];
                  lVar11 = param_1[1];
                  lVar13 = *param_1;
                  param_1[1] = param_1[4];
                  *param_1 = *plVar16;
                  param_1[2] = param_1[5];
                  param_1[4] = lVar11;
                  *plVar16 = lVar13;
                  param_1[5] = lVar25;
                }
              }
            }
            else {
              iVar18 = (int)*plVar14;
              bVar7 = SBORROW4(iVar18,iVar5);
              bVar8 = iVar18 - iVar5 < 0;
              if (iVar18 == iVar5) {
                iVar5 = (int)param_2[-2];
                iVar18 = (int)param_1[4];
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0x24));
                  bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0x24) < 0;
                }
              }
              if (bVar8 == bVar7) {
                lVar25 = param_1[2];
                lVar11 = param_1[1];
                lVar13 = *param_1;
                param_1[1] = param_1[4];
                *param_1 = *plVar16;
                param_1[2] = param_1[5];
                param_1[4] = lVar11;
                *plVar16 = lVar13;
                param_1[5] = lVar25;
                iVar5 = (int)*plVar14;
                iVar18 = (int)*plVar16;
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  iVar5 = (int)param_2[-2];
                  iVar18 = (int)param_1[4];
                  bVar7 = SBORROW4(iVar5,iVar18);
                  bVar8 = iVar5 - iVar18 < 0;
                  if (iVar5 == iVar18) {
                    bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0x24));
                    bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0x24) < 0;
                  }
                }
                if (bVar8 == bVar7) {
                  return;
                }
                lVar25 = param_1[5];
                lVar27 = param_1[4];
                lVar11 = *plVar16;
                lVar13 = param_2[-1];
                lVar29 = *plVar14;
                param_1[4] = param_2[-2];
                *plVar16 = lVar29;
                param_1[5] = lVar13;
              }
              else {
                lVar25 = param_1[2];
                lVar27 = param_1[1];
                lVar11 = *param_1;
                lVar13 = param_2[-1];
                lVar29 = *plVar14;
                param_1[1] = param_2[-2];
                *param_1 = lVar29;
                param_1[2] = lVar13;
              }
              param_2[-2] = lVar27;
              *plVar14 = lVar11;
              param_2[-1] = lVar25;
            }
            return;
          }
          if (uVar19 == 4) {
            FUN_109af3d14(param_1,param_1 + 3,param_1 + 6);
            plVar16 = param_2 + -3;
            iVar18 = (int)*plVar16;
            iVar5 = (int)param_1[6];
            bVar7 = SBORROW4(iVar18,iVar5);
            bVar8 = iVar18 - iVar5 < 0;
            if (iVar18 == iVar5) {
              iVar18 = (int)param_2[-2];
              iVar5 = (int)param_1[7];
              bVar7 = SBORROW4(iVar18,iVar5);
              bVar8 = iVar18 - iVar5 < 0;
              if (iVar18 == iVar5) {
                bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0x3c));
                bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0x3c) < 0;
              }
            }
            if (bVar8 == bVar7) {
              return;
            }
            lVar27 = param_1[7];
            lVar11 = param_1[6];
            lVar25 = param_1[8];
            lVar13 = param_2[-1];
            lVar29 = *plVar16;
            param_1[7] = param_2[-2];
            param_1[6] = lVar29;
            param_1[8] = lVar13;
            param_2[-1] = lVar25;
            param_2[-2] = lVar27;
            *plVar16 = lVar11;
            iVar5 = (int)param_1[6];
            iVar18 = (int)param_1[3];
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
            if (iVar5 == iVar18) {
              iVar5 = (int)param_1[7];
              iVar18 = (int)param_1[4];
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)param_1 + 0x3c),*(int *)((long)param_1 + 0x24));
                bVar8 = *(int *)((long)param_1 + 0x3c) - *(int *)((long)param_1 + 0x24) < 0;
              }
            }
            if (bVar8 == bVar7) {
              return;
            }
            lVar25 = param_1[5];
            lVar11 = param_1[4];
            lVar13 = param_1[3];
            param_1[4] = param_1[7];
            param_1[3] = param_1[6];
            param_1[5] = param_1[8];
            param_1[7] = lVar11;
            param_1[6] = lVar13;
            param_1[8] = lVar25;
            iVar5 = (int)param_1[3];
            iVar18 = (int)*param_1;
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
            if (iVar5 == iVar18) {
              iVar5 = (int)param_1[4];
              iVar18 = (int)param_1[1];
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc));
                bVar8 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc) < 0;
              }
            }
            if (bVar8 == bVar7) {
              return;
            }
            lVar11 = param_1[1];
            lVar13 = *param_1;
            lVar25 = param_1[2];
            param_1[1] = param_1[4];
            *param_1 = param_1[3];
            param_1[2] = param_1[5];
            param_1[4] = lVar11;
            param_1[3] = lVar13;
            param_1[5] = lVar25;
            return;
          }
          if (uVar19 == 5) {
            plVar16 = param_1 + 3;
            plVar9 = param_1 + 6;
            plVar10 = param_1 + 9;
            FUN_109af3d14();
            iVar5 = (int)*plVar10;
            iVar18 = (int)*plVar9;
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
            if (iVar5 == iVar18) {
              iVar5 = (int)param_1[10];
              iVar18 = (int)param_1[7];
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)param_1 + 0x54),*(int *)((long)param_1 + 0x3c));
                bVar8 = *(int *)((long)param_1 + 0x54) - *(int *)((long)param_1 + 0x3c) < 0;
              }
            }
            if (bVar8 != bVar7) {
              lVar25 = param_1[8];
              lVar11 = param_1[7];
              lVar13 = *plVar9;
              param_1[7] = param_1[10];
              *plVar9 = *plVar10;
              param_1[8] = param_1[0xb];
              param_1[10] = lVar11;
              *plVar10 = lVar13;
              param_1[0xb] = lVar25;
              iVar5 = (int)*plVar9;
              iVar18 = (int)*plVar16;
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                iVar5 = (int)param_1[7];
                iVar18 = (int)param_1[4];
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  bVar7 = SBORROW4(*(int *)((long)param_1 + 0x3c),*(int *)((long)param_1 + 0x24));
                  bVar8 = *(int *)((long)param_1 + 0x3c) - *(int *)((long)param_1 + 0x24) < 0;
                }
              }
              if (bVar8 != bVar7) {
                lVar25 = param_1[5];
                lVar11 = param_1[4];
                lVar13 = *plVar16;
                param_1[4] = param_1[7];
                *plVar16 = *plVar9;
                param_1[5] = param_1[8];
                param_1[7] = lVar11;
                *plVar9 = lVar13;
                param_1[8] = lVar25;
                iVar5 = (int)*plVar16;
                iVar18 = (int)*param_1;
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  iVar5 = (int)param_1[4];
                  iVar18 = (int)param_1[1];
                  bVar7 = SBORROW4(iVar5,iVar18);
                  bVar8 = iVar5 - iVar18 < 0;
                  if (iVar5 == iVar18) {
                    bVar7 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc));
                    bVar8 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc) < 0;
                  }
                }
                if (bVar8 != bVar7) {
                  lVar25 = param_1[2];
                  lVar11 = param_1[1];
                  lVar13 = *param_1;
                  param_1[1] = param_1[4];
                  *param_1 = *plVar16;
                  param_1[2] = param_1[5];
                  param_1[4] = lVar11;
                  *plVar16 = lVar13;
                  param_1[5] = lVar25;
                }
              }
            }
            iVar5 = (int)*plVar14;
            iVar18 = (int)*plVar10;
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
            if (iVar5 == iVar18) {
              iVar5 = (int)param_2[-2];
              iVar18 = (int)param_1[10];
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)param_2 + -0xc),*(int *)((long)param_1 + 0x54));
                bVar8 = *(int *)((long)param_2 + -0xc) - *(int *)((long)param_1 + 0x54) < 0;
              }
            }
            if (bVar8 != bVar7) {
              lVar25 = param_1[0xb];
              lVar27 = param_1[10];
              lVar11 = *plVar10;
              lVar13 = param_2[-1];
              lVar29 = *plVar14;
              param_1[10] = param_2[-2];
              *plVar10 = lVar29;
              param_1[0xb] = lVar13;
              param_2[-2] = lVar27;
              *plVar14 = lVar11;
              param_2[-1] = lVar25;
              iVar5 = (int)*plVar10;
              iVar18 = (int)*plVar9;
              bVar7 = SBORROW4(iVar5,iVar18);
              bVar8 = iVar5 - iVar18 < 0;
              if (iVar5 == iVar18) {
                iVar5 = (int)param_1[10];
                iVar18 = (int)param_1[7];
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  bVar7 = SBORROW4(*(int *)((long)param_1 + 0x54),*(int *)((long)param_1 + 0x3c));
                  bVar8 = *(int *)((long)param_1 + 0x54) - *(int *)((long)param_1 + 0x3c) < 0;
                }
              }
              if (bVar8 != bVar7) {
                lVar25 = param_1[8];
                lVar11 = param_1[7];
                lVar13 = *plVar9;
                param_1[7] = param_1[10];
                *plVar9 = *plVar10;
                param_1[8] = param_1[0xb];
                param_1[10] = lVar11;
                *plVar10 = lVar13;
                param_1[0xb] = lVar25;
                iVar5 = (int)*plVar9;
                iVar18 = (int)*plVar16;
                bVar7 = SBORROW4(iVar5,iVar18);
                bVar8 = iVar5 - iVar18 < 0;
                if (iVar5 == iVar18) {
                  iVar5 = (int)param_1[7];
                  iVar18 = (int)param_1[4];
                  bVar7 = SBORROW4(iVar5,iVar18);
                  bVar8 = iVar5 - iVar18 < 0;
                  if (iVar5 == iVar18) {
                    bVar7 = SBORROW4(*(int *)((long)param_1 + 0x3c),*(int *)((long)param_1 + 0x24));
                    bVar8 = *(int *)((long)param_1 + 0x3c) - *(int *)((long)param_1 + 0x24) < 0;
                  }
                }
                if (bVar8 != bVar7) {
                  lVar25 = param_1[5];
                  lVar11 = param_1[4];
                  lVar13 = *plVar16;
                  param_1[4] = param_1[7];
                  *plVar16 = *plVar9;
                  param_1[5] = param_1[8];
                  param_1[7] = lVar11;
                  *plVar9 = lVar13;
                  param_1[8] = lVar25;
                  iVar5 = (int)*plVar16;
                  iVar18 = (int)*param_1;
                  bVar7 = SBORROW4(iVar5,iVar18);
                  bVar8 = iVar5 - iVar18 < 0;
                  if (iVar5 == iVar18) {
                    iVar5 = (int)param_1[4];
                    iVar18 = (int)param_1[1];
                    bVar7 = SBORROW4(iVar5,iVar18);
                    bVar8 = iVar5 - iVar18 < 0;
                    if (iVar5 == iVar18) {
                      bVar7 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc))
                      ;
                      bVar8 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc) < 0;
                    }
                  }
                  if (bVar8 != bVar7) {
                    lVar25 = param_1[2];
                    lVar11 = param_1[1];
                    lVar13 = *param_1;
                    param_1[1] = param_1[4];
                    *param_1 = *plVar16;
                    param_1[2] = param_1[5];
                    param_1[4] = lVar11;
                    *plVar16 = lVar13;
                    param_1[5] = lVar25;
                  }
                }
              }
            }
            return;
          }
        }
        if ((long)uVar15 < 0x240) {
          plVar16 = param_1 + 3;
          if ((param_4 & 1) == 0) {
            if (param_1 == param_2 || plVar16 == param_2) {
              return;
            }
            goto LAB_109af3c54;
          }
          if (param_1 == param_2 || plVar16 == param_2) {
            return;
          }
          lVar25 = 0;
          plVar14 = param_1;
          goto LAB_109af37e4;
        }
        if (param_3 == 0) {
          if (param_1 == param_2) {
            return;
          }
          uVar17 = uVar19 - 2 >> 1;
          uVar21 = uVar17;
          goto LAB_109af38e8;
        }
        plVar16 = param_1 + (uVar19 >> 1) * 3;
        if (uVar15 < 0xc01) {
          FUN_109af3d14(plVar16,param_1,plVar14);
        }
        else {
          FUN_109af3d14(param_1,plVar16,plVar14);
          FUN_109af3d14(param_1 + 3,plVar16 + -3,param_2 + -6);
          FUN_109af3d14(param_1 + 6,plVar16 + 3,param_2 + -9);
          FUN_109af3d14(plVar16 + -3,plVar16,plVar16 + 3);
          lVar29 = param_1[1];
          lVar11 = *param_1;
          lVar25 = param_1[2];
          lVar13 = plVar16[2];
          lVar27 = *plVar16;
          param_1[1] = plVar16[1];
          *param_1 = lVar27;
          param_1[2] = lVar13;
          plVar16[2] = lVar25;
          plVar16[1] = lVar29;
          *plVar16 = lVar11;
        }
        param_3 = param_3 + -1;
        iVar5 = (int)*param_1;
        if ((param_4 & 1) != 0) break;
        if ((int)param_1[-3] != iVar5) {
          if (iVar5 <= (int)param_1[-3]) {
            iVar12 = (int)param_1[1];
            goto LAB_109af3454;
          }
          break;
        }
        iVar12 = (int)param_1[-2];
        iVar18 = (int)param_1[1];
        if (iVar12 != iVar18) {
          bVar8 = iVar18 <= iVar12;
          iVar12 = iVar18;
          if (bVar8) goto LAB_109af3454;
          break;
        }
        if (*(int *)((long)param_1 - 0xc) < *(int *)((long)param_1 + 0xc)) break;
LAB_109af3454:
        iVar18 = *(int *)((long)param_1 + 0xc);
        iVar22 = (int)*plVar14;
        bVar7 = SBORROW4(iVar5,iVar22);
        bVar8 = iVar5 - iVar22 < 0;
        if (iVar5 == iVar22) {
          iVar6 = (int)param_2[-2];
          bVar7 = SBORROW4(iVar12,iVar6);
          bVar8 = iVar12 - iVar6 < 0;
          if (iVar12 == iVar6) {
            bVar7 = SBORROW4(iVar18,*(int *)((long)param_2 + -0xc));
            bVar8 = iVar18 - *(int *)((long)param_2 + -0xc) < 0;
          }
        }
        plVar16 = param_1 + 3;
        if (bVar8 == bVar7) {
          for (; plVar16 < param_2; plVar16 = plVar16 + 3) {
            iVar6 = (int)*plVar16;
            bVar7 = SBORROW4(iVar5,iVar6);
            bVar8 = iVar5 - iVar6 < 0;
            if (iVar5 == iVar6) {
              iVar6 = (int)plVar16[1];
              bVar7 = SBORROW4(iVar12,iVar6);
              bVar8 = iVar12 - iVar6 < 0;
              if (iVar12 == iVar6) {
                bVar7 = SBORROW4(iVar18,*(int *)((long)plVar16 + 0xc));
                bVar8 = iVar18 - *(int *)((long)plVar16 + 0xc) < 0;
              }
            }
            if (bVar8 != bVar7) break;
          }
        }
        else {
          while( true ) {
            iVar6 = (int)*plVar16;
            bVar7 = SBORROW4(iVar5,iVar6);
            bVar8 = iVar5 - iVar6 < 0;
            if (iVar5 == iVar6) {
              iVar6 = (int)plVar16[1];
              bVar7 = SBORROW4(iVar12,iVar6);
              bVar8 = iVar12 - iVar6 < 0;
              if (iVar12 == iVar6) {
                bVar7 = SBORROW4(iVar18,*(int *)((long)plVar16 + 0xc));
                bVar8 = iVar18 - *(int *)((long)plVar16 + 0xc) < 0;
              }
            }
            if (bVar8 != bVar7) break;
            plVar16 = plVar16 + 3;
          }
        }
        uVar4 = *(undefined4 *)((long)param_1 + 4);
        lVar25 = param_1[2];
        plVar9 = param_2;
        plVar10 = plVar14;
        if (plVar16 < param_2) {
          while( true ) {
            plVar9 = plVar10;
            bVar7 = SBORROW4(iVar5,iVar22);
            bVar8 = iVar5 - iVar22 < 0;
            if (iVar5 == iVar22) {
              iVar22 = (int)plVar9[1];
              bVar7 = SBORROW4(iVar12,iVar22);
              bVar8 = iVar12 - iVar22 < 0;
              if (iVar12 == iVar22) {
                bVar7 = SBORROW4(iVar18,*(int *)((long)plVar9 + 0xc));
                bVar8 = iVar18 - *(int *)((long)plVar9 + 0xc) < 0;
              }
            }
            if (bVar8 == bVar7) break;
            iVar22 = (int)plVar9[-3];
            plVar10 = plVar9 + -3;
          }
        }
        while (plVar16 < plVar9) {
          lVar29 = plVar16[1];
          lVar11 = *plVar16;
          lVar13 = plVar16[2];
          lVar30 = plVar9[1];
          lVar27 = *plVar9;
          plVar16[2] = plVar9[2];
          plVar16[1] = lVar30;
          *plVar16 = lVar27;
          plVar9[2] = lVar13;
          plVar9[1] = lVar29;
          *plVar9 = lVar11;
          plVar10 = plVar16;
          do {
            plVar16 = plVar10 + 3;
            iVar22 = (int)*plVar16;
            bVar7 = SBORROW4(iVar5,iVar22);
            bVar8 = iVar5 - iVar22 < 0;
            if (iVar5 == iVar22) {
              iVar22 = (int)plVar10[4];
              bVar7 = SBORROW4(iVar12,iVar22);
              bVar8 = iVar12 - iVar22 < 0;
              if (iVar12 == iVar22) {
                bVar7 = SBORROW4(iVar18,*(int *)((long)plVar10 + 0x24));
                bVar8 = iVar18 - *(int *)((long)plVar10 + 0x24) < 0;
              }
            }
            plVar20 = plVar9;
            plVar10 = plVar16;
          } while (bVar8 == bVar7);
          do {
            plVar9 = plVar20 + -3;
            iVar22 = (int)*plVar9;
            bVar7 = SBORROW4(iVar5,iVar22);
            bVar8 = iVar5 - iVar22 < 0;
            if (iVar5 == iVar22) {
              iVar22 = (int)plVar20[-2];
              bVar7 = SBORROW4(iVar12,iVar22);
              bVar8 = iVar12 - iVar22 < 0;
              if (iVar12 == iVar22) {
                bVar7 = SBORROW4(iVar18,*(int *)((long)plVar20 + -0xc));
                bVar8 = iVar18 - *(int *)((long)plVar20 + -0xc) < 0;
              }
            }
            plVar20 = plVar9;
          } while (bVar8 != bVar7);
        }
        if (plVar16 + -3 != param_1) {
          lVar11 = plVar16[-2];
          lVar13 = plVar16[-3];
          param_1[2] = plVar16[-1];
          param_1[1] = lVar11;
          *param_1 = lVar13;
        }
        param_4 = 0;
        *(int *)(plVar16 + -3) = iVar5;
        *(undefined4 *)((long)plVar16 + -0x14) = uVar4;
        *(int *)(plVar16 + -2) = iVar12;
        *(int *)((long)plVar16 + -0xc) = iVar18;
        plVar16[-1] = lVar25;
      }
      lVar25 = 0;
      uVar28 = *(undefined8 *)((long)param_1 + 4);
      iVar18 = (int)param_1[1];
      iVar12 = *(int *)((long)param_1 + 0xc);
      lVar13 = param_1[2];
      while( true ) {
        iVar22 = *(int *)((long)param_1 + lVar25 + 0x18);
        bVar7 = SBORROW4(iVar22,iVar5);
        bVar8 = iVar22 - iVar5 < 0;
        if (iVar22 == iVar5) {
          iVar22 = *(int *)((long)param_1 + lVar25 + 0x20);
          bVar7 = SBORROW4(iVar22,iVar18);
          bVar8 = iVar22 - iVar18 < 0;
          if (iVar22 == iVar18) {
            iVar22 = *(int *)((long)param_1 + lVar25 + 0x24);
            bVar7 = SBORROW4(iVar22,iVar12);
            bVar8 = iVar22 - iVar12 < 0;
          }
        }
        if (bVar8 == bVar7) break;
        lVar25 = lVar25 + 0x18;
      }
      plVar9 = (long *)((long)param_1 + lVar25 + 0x18);
      plVar10 = plVar14;
      if (lVar25 == 0) {
        plVar16 = plVar14;
        plVar10 = param_2;
        if (plVar9 < param_2) {
          do {
            plVar10 = plVar16;
            if ((int)*plVar16 == iVar5) {
              if ((int)plVar16[1] == iVar18) {
                if ((plVar16 <= plVar9) || (*(int *)((long)plVar16 + 0xc) < iVar12)) break;
              }
              else if ((plVar16 <= plVar9) || ((int)plVar16[1] < iVar18)) break;
            }
            else if ((int)*plVar16 < iVar5 || plVar16 <= plVar9) break;
            plVar16 = plVar16 + -3;
          } while( true );
        }
      }
      else {
        while( true ) {
          iVar22 = (int)*plVar10;
          bVar7 = SBORROW4(iVar22,iVar5);
          bVar8 = iVar22 - iVar5 < 0;
          if (iVar22 == iVar5) {
            iVar22 = (int)plVar10[1];
            bVar7 = SBORROW4(iVar22,iVar18);
            bVar8 = iVar22 - iVar18 < 0;
            if (iVar22 == iVar18) {
              bVar7 = SBORROW4(*(int *)((long)plVar10 + 0xc),iVar12);
              bVar8 = *(int *)((long)plVar10 + 0xc) - iVar12 < 0;
            }
          }
          if (bVar8 != bVar7) break;
          plVar10 = plVar10 + -3;
        }
      }
      plVar20 = plVar10;
      plVar16 = plVar9;
      plVar26 = plVar9;
      if (plVar9 < plVar10) {
        do {
          lVar29 = plVar26[1];
          lVar11 = *plVar26;
          lVar25 = plVar26[2];
          lVar30 = plVar20[1];
          lVar27 = *plVar20;
          plVar26[2] = plVar20[2];
          plVar26[1] = lVar30;
          *plVar26 = lVar27;
          plVar20[2] = lVar25;
          plVar20[1] = lVar29;
          *plVar20 = lVar11;
          do {
            plVar16 = plVar26 + 3;
            iVar22 = (int)*plVar16;
            bVar7 = SBORROW4(iVar22,iVar5);
            bVar8 = iVar22 - iVar5 < 0;
            if (iVar22 == iVar5) {
              iVar22 = (int)plVar26[4];
              bVar7 = SBORROW4(iVar22,iVar18);
              bVar8 = iVar22 - iVar18 < 0;
              if (iVar22 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)plVar26 + 0x24),iVar12);
                bVar8 = *(int *)((long)plVar26 + 0x24) - iVar12 < 0;
              }
            }
            plVar26 = plVar16;
          } while (bVar8 != bVar7);
          do {
            plVar23 = plVar20 + -3;
            iVar22 = (int)*plVar23;
            bVar7 = SBORROW4(iVar22,iVar5);
            bVar8 = iVar22 - iVar5 < 0;
            if (iVar22 == iVar5) {
              iVar22 = (int)plVar20[-2];
              bVar7 = SBORROW4(iVar22,iVar18);
              bVar8 = iVar22 - iVar18 < 0;
              if (iVar22 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)plVar20 + -0xc),iVar12);
                bVar8 = *(int *)((long)plVar20 + -0xc) - iVar12 < 0;
              }
            }
            plVar20 = plVar23;
          } while (bVar8 == bVar7);
        } while (plVar16 < plVar23);
      }
      plVar20 = plVar16 + -3;
      if (plVar20 != param_1) {
        lVar11 = plVar16[-2];
        lVar25 = *plVar20;
        param_1[2] = plVar16[-1];
        param_1[1] = lVar11;
        *param_1 = lVar25;
      }
      *(int *)(plVar16 + -3) = iVar5;
      *(undefined8 *)((long)plVar16 - 0x14) = uVar28;
      *(int *)((long)plVar16 - 0xc) = iVar12;
      plVar16[-1] = lVar13;
      if (plVar10 <= plVar9) {
        plVar9 = param_1;
        FUN_109af4120(param_1,plVar20);
        plVar10 = plVar16;
        FUN_109af4120(plVar16,param_2);
        if ((int)plVar10 != 0) goto LAB_109af35d0;
        if (((ulong)plVar9 & 1) != 0) goto LAB_109af312c;
      }
      FUN_109af30ec(param_1,plVar20,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_109af312c;
    }
    lVar13 = param_1[2] - *param_1 >> 3;
    uVar19 = lVar13 * 0x5555555555555556;
    if (uVar19 < uVar15 || uVar19 - uVar15 == 0) {
      uVar19 = uVar15;
    }
    if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
      uVar19 = 0xaaaaaaaaaaaaaaa;
    }
    plVar9 = param_2;
    FUN_109af2fb4();
    plVar14 = (long *)(uVar19 + lVar25);
    lVar13 = param_2[1];
    lVar25 = *param_2;
    plVar14[2] = param_2[2];
    plVar14[1] = lVar13;
    *plVar14 = lVar25;
    plVar16 = plVar14 + 3;
    lVar13 = (long)plVar14 - (param_1[1] - *param_1);
    _memcpy(lVar13);
    lVar25 = *param_1;
    *param_1 = lVar13;
    param_1[1] = (long)plVar16;
    param_1[2] = uVar19 + (long)plVar9 * 0x18;
    if (lVar25 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar16;
  return;
LAB_109af3c54:
  plVar14 = plVar16;
  iVar5 = (int)param_1[3];
  if (iVar5 == (int)*param_1) {
    iVar18 = (int)param_1[4];
    iVar22 = (int)param_1[1];
    bVar8 = SBORROW4(iVar18,iVar22);
    iVar12 = iVar18 - iVar22;
    if (iVar18 == iVar22) {
      bVar8 = SBORROW4(*(int *)((long)param_1 + 0x24),*(int *)((long)param_1 + 0xc));
      iVar12 = *(int *)((long)param_1 + 0x24) - *(int *)((long)param_1 + 0xc);
    }
    if (iVar12 < 0 != bVar8) {
LAB_109af3c98:
      uVar4 = *(undefined4 *)((long)param_1 + 0x1c);
      iVar12 = *(int *)((long)param_1 + 0x24);
      lVar25 = param_1[5];
      do {
        plVar16 = param_1;
        plVar16[4] = plVar16[1];
        plVar16[3] = *plVar16;
        plVar16[5] = plVar16[2];
        iVar22 = (int)plVar16[-3];
        bVar7 = SBORROW4(iVar5,iVar22);
        bVar8 = iVar5 - iVar22 < 0;
        if (iVar5 == iVar22) {
          iVar22 = (int)plVar16[-2];
          bVar7 = SBORROW4(iVar18,iVar22);
          bVar8 = iVar18 - iVar22 < 0;
          if (iVar18 == iVar22) {
            bVar7 = SBORROW4(iVar12,*(int *)((long)plVar16 - 0xc));
            bVar8 = iVar12 - *(int *)((long)plVar16 - 0xc) < 0;
          }
        }
        param_1 = plVar16 + -3;
      } while (bVar8 != bVar7);
      *(int *)plVar16 = iVar5;
      *(undefined4 *)((long)plVar16 + 4) = uVar4;
      *(int *)(plVar16 + 1) = iVar18;
      *(int *)((long)plVar16 + 0xc) = iVar12;
      plVar16[2] = lVar25;
    }
  }
  else if (iVar5 < (int)*param_1) {
    iVar18 = (int)param_1[4];
    goto LAB_109af3c98;
  }
  plVar16 = plVar14 + 3;
  param_1 = plVar14;
  if (plVar16 == param_2) {
    return;
  }
  goto LAB_109af3c54;
LAB_109af37e4:
  iVar5 = (int)plVar14[3];
  if (iVar5 == (int)*plVar14) {
    iVar18 = (int)plVar14[4];
    iVar22 = (int)plVar14[1];
    bVar8 = SBORROW4(iVar18,iVar22);
    iVar12 = iVar18 - iVar22;
    if (iVar18 == iVar22) {
      bVar8 = SBORROW4(*(int *)((long)plVar14 + 0x24),*(int *)((long)plVar14 + 0xc));
      iVar12 = *(int *)((long)plVar14 + 0x24) - *(int *)((long)plVar14 + 0xc);
    }
    if (iVar12 < 0 != bVar8) {
LAB_109af3828:
      uVar4 = *(undefined4 *)((long)plVar14 + 0x1c);
      iVar12 = *(int *)((long)plVar14 + 0x24);
      lVar11 = plVar14[5];
      lVar13 = *plVar14;
      plVar16[1] = plVar14[1];
      *plVar16 = lVar13;
      plVar16[2] = plVar14[2];
      plVar9 = param_1;
      lVar13 = lVar25;
      if (plVar14 != param_1) {
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar13);
          iVar6 = *(int *)(puVar2 + -3);
          bVar8 = SBORROW4(iVar5,iVar6);
          iVar22 = iVar5 - iVar6;
          if (iVar5 == iVar6) {
            iVar6 = *(int *)(puVar2 + -2);
            bVar8 = SBORROW4(iVar18,iVar6);
            iVar22 = iVar18 - iVar6;
            if (iVar18 != iVar6) goto LAB_109af3888;
            plVar9 = (long *)((long)param_1 + lVar13);
            if (*(int *)(((long)param_1 + lVar13) - 0xc) <= iVar12) break;
          }
          else {
LAB_109af3888:
            plVar9 = plVar14;
            if (iVar22 < 0 == bVar8) break;
          }
          plVar14 = plVar14 + -3;
          puVar2[1] = puVar2[-2];
          *puVar2 = puVar2[-3];
          puVar2[2] = puVar2[-1];
          lVar13 = lVar13 + -0x18;
          plVar9 = param_1;
        } while (lVar13 != 0);
      }
      *(int *)plVar9 = iVar5;
      *(undefined4 *)((long)plVar9 + 4) = uVar4;
      *(int *)(plVar9 + 1) = iVar18;
      *(int *)((long)plVar9 + 0xc) = iVar12;
      plVar9[2] = lVar11;
    }
  }
  else if (iVar5 < (int)*plVar14) {
    iVar18 = (int)plVar14[4];
    goto LAB_109af3828;
  }
  plVar9 = plVar16 + 3;
  lVar25 = lVar25 + 0x18;
  plVar14 = plVar16;
  plVar16 = plVar9;
  if (plVar9 == param_2) {
    return;
  }
  goto LAB_109af37e4;
LAB_109af38e8:
  do {
    if ((long)uVar21 <= (long)uVar17) {
      uVar24 = uVar21 << 1 | 1;
      plVar16 = param_1 + uVar24 * 3;
      uVar1 = uVar21 * 2 + 2;
      if ((long)uVar1 < (long)uVar19) {
        iVar18 = (int)plVar16[3];
        iVar5 = (int)*plVar16;
        bVar7 = SBORROW4(iVar5,iVar18);
        bVar8 = iVar5 - iVar18 < 0;
        if (iVar5 == iVar18) {
          iVar5 = (int)plVar16[1];
          iVar18 = (int)plVar16[4];
          bVar7 = SBORROW4(iVar5,iVar18);
          bVar8 = iVar5 - iVar18 < 0;
          if (iVar5 == iVar18) {
            bVar7 = SBORROW4(*(int *)((long)plVar16 + 0xc),*(int *)((long)plVar16 + 0x24));
            bVar8 = *(int *)((long)plVar16 + 0xc) - *(int *)((long)plVar16 + 0x24) < 0;
          }
        }
        if (bVar8 != bVar7) {
          plVar16 = plVar16 + 3;
          uVar24 = uVar1;
        }
      }
      plVar14 = param_1 + uVar21 * 3;
      iVar5 = (int)*plVar14;
      if ((int)*plVar16 == iVar5) {
        iVar22 = (int)plVar16[1];
        iVar18 = (int)plVar14[1];
        bVar8 = SBORROW4(iVar22,iVar18);
        iVar12 = iVar22 - iVar18;
        if (iVar22 == iVar18) {
          bVar8 = SBORROW4(*(int *)((long)plVar16 + 0xc),*(int *)((long)plVar14 + 0xc));
          iVar12 = *(int *)((long)plVar16 + 0xc) - *(int *)((long)plVar14 + 0xc);
          iVar18 = iVar22;
        }
        if (iVar12 < 0 == bVar8) {
LAB_109af3990:
          uVar4 = *(undefined4 *)((long)plVar14 + 4);
          iVar12 = *(int *)((long)plVar14 + 0xc);
          lVar25 = plVar14[2];
          lVar13 = plVar16[2];
          lVar11 = *plVar16;
          plVar14[1] = plVar16[1];
          *plVar14 = lVar11;
          plVar14[2] = lVar13;
          while ((long)uVar24 <= (long)uVar17) {
            uVar3 = uVar24 << 1 | 1;
            plVar14 = param_1 + uVar3 * 3;
            uVar1 = uVar24 * 2 + 2;
            uVar24 = uVar3;
            if ((long)uVar1 < (long)uVar19) {
              iVar6 = (int)plVar14[3];
              iVar22 = (int)*plVar14;
              bVar7 = SBORROW4(iVar22,iVar6);
              bVar8 = iVar22 - iVar6 < 0;
              if (iVar22 == iVar6) {
                iVar22 = (int)plVar14[1];
                iVar6 = (int)plVar14[4];
                bVar7 = SBORROW4(iVar22,iVar6);
                bVar8 = iVar22 - iVar6 < 0;
                if (iVar22 == iVar6) {
                  bVar7 = SBORROW4(*(int *)((long)plVar14 + 0xc),*(int *)((long)plVar14 + 0x24));
                  bVar8 = *(int *)((long)plVar14 + 0xc) - *(int *)((long)plVar14 + 0x24) < 0;
                }
              }
              if (bVar8 != bVar7) {
                plVar14 = plVar14 + 3;
                uVar24 = uVar1;
              }
            }
            iVar22 = (int)*plVar14;
            bVar7 = SBORROW4(iVar22,iVar5);
            bVar8 = iVar22 - iVar5 < 0;
            if (iVar22 == iVar5) {
              iVar22 = (int)plVar14[1];
              bVar7 = SBORROW4(iVar22,iVar18);
              bVar8 = iVar22 - iVar18 < 0;
              if (iVar22 == iVar18) {
                bVar7 = SBORROW4(*(int *)((long)plVar14 + 0xc),iVar12);
                bVar8 = *(int *)((long)plVar14 + 0xc) - iVar12 < 0;
              }
            }
            if (bVar8 != bVar7) break;
            lVar11 = plVar14[1];
            lVar13 = *plVar14;
            plVar16[2] = plVar14[2];
            plVar16[1] = lVar11;
            *plVar16 = lVar13;
            plVar16 = plVar14;
          }
          *(int *)plVar16 = iVar5;
          *(undefined4 *)((long)plVar16 + 4) = uVar4;
          *(int *)(plVar16 + 1) = iVar18;
          *(int *)((long)plVar16 + 0xc) = iVar12;
          plVar16[2] = lVar25;
        }
      }
      else if (iVar5 <= (int)*plVar16) {
        iVar18 = (int)plVar14[1];
        goto LAB_109af3990;
      }
    }
    bVar8 = uVar21 != 0;
    uVar21 = uVar21 - 1;
  } while (bVar8);
  lVar25 = (uVar15 >> 3) * -0x5555555555555555;
  do {
    lVar27 = param_1[1];
    lVar11 = *param_1;
    lVar13 = param_1[2];
    plVar16 = param_1;
    uVar15 = 0;
    do {
      uVar21 = uVar15 << 1 | 1;
      uVar19 = uVar15 * 2 + 2;
      plVar14 = plVar16 + uVar15 * 3 + 3;
      if ((long)uVar19 < lVar25) {
        iVar18 = (int)plVar16[uVar15 * 3 + 6];
        iVar5 = (int)plVar16[uVar15 * 3 + 3];
        bVar7 = SBORROW4(iVar5,iVar18);
        bVar8 = iVar5 - iVar18 < 0;
        if (iVar5 == iVar18) {
          iVar5 = (int)plVar16[uVar15 * 3 + 4];
          iVar18 = (int)plVar16[uVar15 * 3 + 7];
          bVar7 = SBORROW4(iVar5,iVar18);
          bVar8 = iVar5 - iVar18 < 0;
          if (iVar5 == iVar18) {
            iVar5 = *(int *)((long)plVar16 + uVar15 * 0x18 + 0x24);
            iVar18 = *(int *)((long)plVar16 + uVar15 * 0x18 + 0x3c);
            bVar7 = SBORROW4(iVar5,iVar18);
            bVar8 = iVar5 - iVar18 < 0;
          }
        }
        if (bVar8 != bVar7) {
          plVar14 = plVar16 + uVar15 * 3 + 6;
          uVar21 = uVar19;
        }
      }
      lVar30 = plVar14[1];
      lVar29 = *plVar14;
      plVar16[2] = plVar14[2];
      plVar16[1] = lVar30;
      *plVar16 = lVar29;
      plVar16 = plVar14;
      uVar15 = uVar21;
    } while ((long)uVar21 <= (lVar25 + -2) / 2);
    plVar16 = param_2 + -3;
    if (plVar14 == plVar16) {
      plVar14[2] = lVar13;
      plVar14[1] = lVar27;
      *plVar14 = lVar11;
    }
    else {
      lVar30 = param_2[-2];
      lVar29 = *plVar16;
      plVar14[2] = param_2[-1];
      plVar14[1] = lVar30;
      *plVar14 = lVar29;
      param_2[-1] = lVar13;
      param_2[-2] = lVar27;
      *plVar16 = lVar11;
      uVar15 = (long)plVar14 + (0x18 - (long)param_1);
      if (0x18 < (long)uVar15) {
        uVar19 = (uVar15 >> 3) * -0x5555555555555555 - 2;
        uVar15 = uVar19 >> 1;
        plVar9 = param_1 + uVar15 * 3;
        iVar5 = (int)*plVar14;
        if ((int)*plVar9 == iVar5) {
          iVar22 = (int)plVar9[1];
          iVar18 = (int)plVar14[1];
          bVar8 = SBORROW4(iVar22,iVar18);
          iVar12 = iVar22 - iVar18;
          if (iVar22 == iVar18) {
            bVar8 = SBORROW4(*(int *)((long)plVar9 + 0xc),*(int *)((long)plVar14 + 0xc));
            iVar12 = *(int *)((long)plVar9 + 0xc) - *(int *)((long)plVar14 + 0xc);
            iVar18 = iVar22;
          }
          if (iVar12 < 0 != bVar8) {
LAB_109af3bbc:
            uVar4 = *(undefined4 *)((long)plVar14 + 4);
            iVar12 = *(int *)((long)plVar14 + 0xc);
            lVar13 = plVar14[2];
            lVar11 = plVar9[2];
            lVar27 = *plVar9;
            plVar14[1] = plVar9[1];
            *plVar14 = lVar27;
            plVar14[2] = lVar11;
            while (1 < uVar19) {
              uVar19 = uVar15 - 1;
              uVar15 = uVar19 >> 1;
              plVar14 = param_1 + uVar15 * 3;
              iVar22 = (int)*plVar14;
              bVar7 = SBORROW4(iVar22,iVar5);
              bVar8 = iVar22 - iVar5 < 0;
              if (iVar22 == iVar5) {
                iVar22 = (int)plVar14[1];
                bVar7 = SBORROW4(iVar22,iVar18);
                bVar8 = iVar22 - iVar18 < 0;
                if (iVar22 == iVar18) {
                  bVar7 = SBORROW4(*(int *)((long)plVar14 + 0xc),iVar12);
                  bVar8 = *(int *)((long)plVar14 + 0xc) - iVar12 < 0;
                }
              }
              if (bVar8 == bVar7) break;
              lVar27 = plVar14[1];
              lVar11 = *plVar14;
              plVar9[2] = plVar14[2];
              plVar9[1] = lVar27;
              *plVar9 = lVar11;
              plVar9 = plVar14;
            }
            *(int *)plVar9 = iVar5;
            *(undefined4 *)((long)plVar9 + 4) = uVar4;
            *(int *)(plVar9 + 1) = iVar18;
            *(int *)((long)plVar9 + 0xc) = iVar12;
            plVar9[2] = lVar13;
          }
        }
        else if ((int)*plVar9 < iVar5) {
          iVar18 = (int)plVar14[1];
          goto LAB_109af3bbc;
        }
      }
    }
    bVar8 = lVar25 < 3;
    lVar25 = lVar25 + -1;
    param_2 = plVar16;
    if (bVar8) {
      return;
    }
  } while( true );
LAB_109af35d0:
  param_2 = plVar20;
  if (((ulong)plVar9 & 1) != 0) {
    return;
  }
  goto LAB_109af311c;
}



/* Entry: 109af30ec; end: 109af3d13;  */

void FUN_109af30ec(int *param_1,int *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  int *piVar17;
  ulong uVar18;
  int iVar19;
  int *piVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  int *piVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  int *piVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
LAB_109af311c:
  piVar16 = param_2 + -6;
  piVar17 = param_1;
LAB_109af312c:
  while( true ) {
    param_1 = piVar17;
    uVar11 = (long)param_2 - (long)param_1;
    uVar15 = ((long)uVar11 >> 3) * -0x5555555555555555;
    if (uVar15 - 2 == 0 || (long)uVar15 < 2) {
      if (uVar15 < 2) {
        return;
      }
      if (uVar15 == 2) {
        piVar17 = param_2 + -6;
        iVar19 = *piVar17;
        iVar4 = *param_1;
        bVar7 = SBORROW4(iVar19,iVar4);
        bVar8 = iVar19 - iVar4 < 0;
        if (iVar19 == iVar4) {
          iVar19 = param_2[-4];
          iVar4 = param_1[2];
          bVar7 = SBORROW4(iVar19,iVar4);
          bVar8 = iVar19 - iVar4 < 0;
          if (iVar19 == iVar4) {
            bVar7 = SBORROW4(param_2[-3],param_1[3]);
            bVar8 = param_2[-3] - param_1[3] < 0;
          }
        }
        if (bVar8 == bVar7) {
          return;
        }
        uVar29 = *(undefined8 *)(param_1 + 2);
        uVar13 = *(undefined8 *)param_1;
        uVar12 = *(undefined8 *)(param_1 + 4);
        uVar30 = *(undefined8 *)(param_2 + -4);
        uVar26 = *(undefined8 *)piVar17;
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_1 + 2) = uVar30;
        *(undefined8 *)param_1 = uVar26;
        *(undefined8 *)(param_2 + -2) = uVar12;
        *(undefined8 *)(param_2 + -4) = uVar29;
        *(undefined8 *)piVar17 = uVar13;
        return;
      }
    }
    else {
      if (uVar15 == 3) {
        piVar17 = param_1 + 6;
        iVar4 = *piVar17;
        iVar19 = *param_1;
        bVar7 = SBORROW4(iVar4,iVar19);
        bVar8 = iVar4 - iVar19 < 0;
        if (iVar4 == iVar19) {
          iVar19 = param_1[8];
          iVar14 = param_1[2];
          bVar7 = SBORROW4(iVar19,iVar14);
          bVar8 = iVar19 - iVar14 < 0;
          if (iVar19 == iVar14) {
            bVar7 = SBORROW4(param_1[9],param_1[3]);
            bVar8 = param_1[9] - param_1[3] < 0;
          }
        }
        if (bVar8 == bVar7) {
          iVar19 = *piVar16;
          bVar7 = SBORROW4(iVar19,iVar4);
          bVar8 = iVar19 - iVar4 < 0;
          if (iVar19 == iVar4) {
            iVar4 = param_2[-4];
            iVar19 = param_1[8];
            bVar7 = SBORROW4(iVar4,iVar19);
            bVar8 = iVar4 - iVar19 < 0;
            if (iVar4 == iVar19) {
              bVar7 = SBORROW4(param_2[-3],param_1[9]);
              bVar8 = param_2[-3] - param_1[9] < 0;
            }
          }
          if (bVar8 != bVar7) {
            uVar12 = *(undefined8 *)(param_1 + 10);
            uVar29 = *(undefined8 *)(param_1 + 8);
            uVar26 = *(undefined8 *)piVar17;
            uVar13 = *(undefined8 *)(param_2 + -2);
            uVar30 = *(undefined8 *)piVar16;
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -4);
            *(undefined8 *)piVar17 = uVar30;
            *(undefined8 *)(param_1 + 10) = uVar13;
            *(undefined8 *)(param_2 + -4) = uVar29;
            *(undefined8 *)piVar16 = uVar26;
            *(undefined8 *)(param_2 + -2) = uVar12;
            iVar4 = *piVar17;
            iVar19 = *param_1;
            bVar7 = SBORROW4(iVar4,iVar19);
            bVar8 = iVar4 - iVar19 < 0;
            if (iVar4 == iVar19) {
              iVar4 = param_1[8];
              iVar19 = param_1[2];
              bVar7 = SBORROW4(iVar4,iVar19);
              bVar8 = iVar4 - iVar19 < 0;
              if (iVar4 == iVar19) {
                bVar7 = SBORROW4(param_1[9],param_1[3]);
                bVar8 = param_1[9] - param_1[3] < 0;
              }
            }
            if (bVar8 != bVar7) {
              uVar12 = *(undefined8 *)(param_1 + 4);
              uVar26 = *(undefined8 *)(param_1 + 2);
              uVar13 = *(undefined8 *)param_1;
              *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 8);
              *(undefined8 *)param_1 = *(undefined8 *)piVar17;
              *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 10);
              *(undefined8 *)(param_1 + 8) = uVar26;
              *(undefined8 *)piVar17 = uVar13;
              *(undefined8 *)(param_1 + 10) = uVar12;
            }
          }
        }
        else {
          iVar19 = *piVar16;
          bVar7 = SBORROW4(iVar19,iVar4);
          bVar8 = iVar19 - iVar4 < 0;
          if (iVar19 == iVar4) {
            iVar4 = param_2[-4];
            iVar19 = param_1[8];
            bVar7 = SBORROW4(iVar4,iVar19);
            bVar8 = iVar4 - iVar19 < 0;
            if (iVar4 == iVar19) {
              bVar7 = SBORROW4(param_2[-3],param_1[9]);
              bVar8 = param_2[-3] - param_1[9] < 0;
            }
          }
          if (bVar8 == bVar7) {
            uVar12 = *(undefined8 *)(param_1 + 4);
            uVar26 = *(undefined8 *)(param_1 + 2);
            uVar13 = *(undefined8 *)param_1;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 8);
            *(undefined8 *)param_1 = *(undefined8 *)piVar17;
            *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 10);
            *(undefined8 *)(param_1 + 8) = uVar26;
            *(undefined8 *)piVar17 = uVar13;
            *(undefined8 *)(param_1 + 10) = uVar12;
            iVar4 = *piVar16;
            iVar19 = *piVar17;
            bVar7 = SBORROW4(iVar4,iVar19);
            bVar8 = iVar4 - iVar19 < 0;
            if (iVar4 == iVar19) {
              iVar4 = param_2[-4];
              iVar19 = param_1[8];
              bVar7 = SBORROW4(iVar4,iVar19);
              bVar8 = iVar4 - iVar19 < 0;
              if (iVar4 == iVar19) {
                bVar7 = SBORROW4(param_2[-3],param_1[9]);
                bVar8 = param_2[-3] - param_1[9] < 0;
              }
            }
            if (bVar8 == bVar7) {
              return;
            }
            uVar12 = *(undefined8 *)(param_1 + 10);
            uVar29 = *(undefined8 *)(param_1 + 8);
            uVar26 = *(undefined8 *)piVar17;
            uVar13 = *(undefined8 *)(param_2 + -2);
            uVar30 = *(undefined8 *)piVar16;
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -4);
            *(undefined8 *)piVar17 = uVar30;
            *(undefined8 *)(param_1 + 10) = uVar13;
          }
          else {
            uVar12 = *(undefined8 *)(param_1 + 4);
            uVar29 = *(undefined8 *)(param_1 + 2);
            uVar26 = *(undefined8 *)param_1;
            uVar13 = *(undefined8 *)(param_2 + -2);
            uVar30 = *(undefined8 *)piVar16;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -4);
            *(undefined8 *)param_1 = uVar30;
            *(undefined8 *)(param_1 + 4) = uVar13;
          }
          *(undefined8 *)(param_2 + -4) = uVar29;
          *(undefined8 *)piVar16 = uVar26;
          *(undefined8 *)(param_2 + -2) = uVar12;
        }
        return;
      }
      if (uVar15 == 4) {
        FUN_109af3d14(param_1,param_1 + 6,param_1 + 0xc);
        piVar17 = param_2 + -6;
        iVar19 = *piVar17;
        iVar4 = param_1[0xc];
        bVar7 = SBORROW4(iVar19,iVar4);
        bVar8 = iVar19 - iVar4 < 0;
        if (iVar19 == iVar4) {
          iVar19 = param_2[-4];
          iVar4 = param_1[0xe];
          bVar7 = SBORROW4(iVar19,iVar4);
          bVar8 = iVar19 - iVar4 < 0;
          if (iVar19 == iVar4) {
            bVar7 = SBORROW4(param_2[-3],param_1[0xf]);
            bVar8 = param_2[-3] - param_1[0xf] < 0;
          }
        }
        if (bVar8 == bVar7) {
          return;
        }
        uVar29 = *(undefined8 *)(param_1 + 0xe);
        uVar26 = *(undefined8 *)(param_1 + 0xc);
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        uVar13 = *(undefined8 *)(param_2 + -2);
        uVar30 = *(undefined8 *)piVar17;
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + -4);
        *(undefined8 *)(param_1 + 0xc) = uVar30;
        *(undefined8 *)(param_1 + 0x10) = uVar13;
        *(undefined8 *)(param_2 + -2) = uVar12;
        *(undefined8 *)(param_2 + -4) = uVar29;
        *(undefined8 *)piVar17 = uVar26;
        iVar4 = param_1[0xc];
        iVar19 = param_1[6];
        bVar7 = SBORROW4(iVar4,iVar19);
        bVar8 = iVar4 - iVar19 < 0;
        if (iVar4 == iVar19) {
          iVar4 = param_1[0xe];
          iVar19 = param_1[8];
          bVar7 = SBORROW4(iVar4,iVar19);
          bVar8 = iVar4 - iVar19 < 0;
          if (iVar4 == iVar19) {
            bVar7 = SBORROW4(param_1[0xf],param_1[9]);
            bVar8 = param_1[0xf] - param_1[9] < 0;
          }
        }
        if (bVar8 == bVar7) {
          return;
        }
        uVar12 = *(undefined8 *)(param_1 + 10);
        uVar26 = *(undefined8 *)(param_1 + 8);
        uVar13 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xc);
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0xe) = uVar26;
        *(undefined8 *)(param_1 + 0xc) = uVar13;
        *(undefined8 *)(param_1 + 0x10) = uVar12;
        iVar4 = param_1[6];
        iVar19 = *param_1;
        bVar7 = SBORROW4(iVar4,iVar19);
        bVar8 = iVar4 - iVar19 < 0;
        if (iVar4 == iVar19) {
          iVar4 = param_1[8];
          iVar19 = param_1[2];
          bVar7 = SBORROW4(iVar4,iVar19);
          bVar8 = iVar4 - iVar19 < 0;
          if (iVar4 == iVar19) {
            bVar7 = SBORROW4(param_1[9],param_1[3]);
            bVar8 = param_1[9] - param_1[3] < 0;
          }
        }
        if (bVar8 == bVar7) {
          return;
        }
        uVar26 = *(undefined8 *)(param_1 + 2);
        uVar13 = *(undefined8 *)param_1;
        uVar12 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(param_1 + 8) = uVar26;
        *(undefined8 *)(param_1 + 6) = uVar13;
        *(undefined8 *)(param_1 + 10) = uVar12;
        return;
      }
      if (uVar15 == 5) {
        piVar17 = param_1 + 6;
        piVar9 = param_1 + 0xc;
        piVar10 = param_1 + 0x12;
        FUN_109af3d14();
        iVar4 = *piVar10;
        iVar19 = *piVar9;
        bVar7 = SBORROW4(iVar4,iVar19);
        bVar8 = iVar4 - iVar19 < 0;
        if (iVar4 == iVar19) {
          iVar4 = param_1[0x14];
          iVar19 = param_1[0xe];
          bVar7 = SBORROW4(iVar4,iVar19);
          bVar8 = iVar4 - iVar19 < 0;
          if (iVar4 == iVar19) {
            bVar7 = SBORROW4(param_1[0x15],param_1[0xf]);
            bVar8 = param_1[0x15] - param_1[0xf] < 0;
          }
        }
        if (bVar8 != bVar7) {
          uVar12 = *(undefined8 *)(param_1 + 0x10);
          uVar26 = *(undefined8 *)(param_1 + 0xe);
          uVar13 = *(undefined8 *)piVar9;
          *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x14);
          *(undefined8 *)piVar9 = *(undefined8 *)piVar10;
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x16);
          *(undefined8 *)(param_1 + 0x14) = uVar26;
          *(undefined8 *)piVar10 = uVar13;
          *(undefined8 *)(param_1 + 0x16) = uVar12;
          iVar4 = *piVar9;
          iVar19 = *piVar17;
          bVar7 = SBORROW4(iVar4,iVar19);
          bVar8 = iVar4 - iVar19 < 0;
          if (iVar4 == iVar19) {
            iVar4 = param_1[0xe];
            iVar19 = param_1[8];
            bVar7 = SBORROW4(iVar4,iVar19);
            bVar8 = iVar4 - iVar19 < 0;
            if (iVar4 == iVar19) {
              bVar7 = SBORROW4(param_1[0xf],param_1[9]);
              bVar8 = param_1[0xf] - param_1[9] < 0;
            }
          }
          if (bVar8 != bVar7) {
            uVar12 = *(undefined8 *)(param_1 + 10);
            uVar26 = *(undefined8 *)(param_1 + 8);
            uVar13 = *(undefined8 *)piVar17;
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0xe);
            *(undefined8 *)piVar17 = *(undefined8 *)piVar9;
            *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x10);
            *(undefined8 *)(param_1 + 0xe) = uVar26;
            *(undefined8 *)piVar9 = uVar13;
            *(undefined8 *)(param_1 + 0x10) = uVar12;
            iVar4 = *piVar17;
            iVar19 = *param_1;
            bVar7 = SBORROW4(iVar4,iVar19);
            bVar8 = iVar4 - iVar19 < 0;
            if (iVar4 == iVar19) {
              iVar4 = param_1[8];
              iVar19 = param_1[2];
              bVar7 = SBORROW4(iVar4,iVar19);
              bVar8 = iVar4 - iVar19 < 0;
              if (iVar4 == iVar19) {
                bVar7 = SBORROW4(param_1[9],param_1[3]);
                bVar8 = param_1[9] - param_1[3] < 0;
              }
            }
            if (bVar8 != bVar7) {
              uVar12 = *(undefined8 *)(param_1 + 4);
              uVar26 = *(undefined8 *)(param_1 + 2);
              uVar13 = *(undefined8 *)param_1;
              *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 8);
              *(undefined8 *)param_1 = *(undefined8 *)piVar17;
              *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 10);
              *(undefined8 *)(param_1 + 8) = uVar26;
              *(undefined8 *)piVar17 = uVar13;
              *(undefined8 *)(param_1 + 10) = uVar12;
            }
          }
        }
        iVar4 = *piVar16;
        iVar19 = *piVar10;
        bVar7 = SBORROW4(iVar4,iVar19);
        bVar8 = iVar4 - iVar19 < 0;
        if (iVar4 == iVar19) {
          iVar4 = param_2[-4];
          iVar19 = param_1[0x14];
          bVar7 = SBORROW4(iVar4,iVar19);
          bVar8 = iVar4 - iVar19 < 0;
          if (iVar4 == iVar19) {
            bVar7 = SBORROW4(param_2[-3],param_1[0x15]);
            bVar8 = param_2[-3] - param_1[0x15] < 0;
          }
        }
        if (bVar8 != bVar7) {
          uVar12 = *(undefined8 *)(param_1 + 0x16);
          uVar29 = *(undefined8 *)(param_1 + 0x14);
          uVar26 = *(undefined8 *)piVar10;
          uVar13 = *(undefined8 *)(param_2 + -2);
          uVar30 = *(undefined8 *)piVar16;
          *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)piVar10 = uVar30;
          *(undefined8 *)(param_1 + 0x16) = uVar13;
          *(undefined8 *)(param_2 + -4) = uVar29;
          *(undefined8 *)piVar16 = uVar26;
          *(undefined8 *)(param_2 + -2) = uVar12;
          iVar4 = *piVar10;
          iVar19 = *piVar9;
          bVar7 = SBORROW4(iVar4,iVar19);
          bVar8 = iVar4 - iVar19 < 0;
          if (iVar4 == iVar19) {
            iVar4 = param_1[0x14];
            iVar19 = param_1[0xe];
            bVar7 = SBORROW4(iVar4,iVar19);
            bVar8 = iVar4 - iVar19 < 0;
            if (iVar4 == iVar19) {
              bVar7 = SBORROW4(param_1[0x15],param_1[0xf]);
              bVar8 = param_1[0x15] - param_1[0xf] < 0;
            }
          }
          if (bVar8 != bVar7) {
            uVar12 = *(undefined8 *)(param_1 + 0x10);
            uVar26 = *(undefined8 *)(param_1 + 0xe);
            uVar13 = *(undefined8 *)piVar9;
            *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x14);
            *(undefined8 *)piVar9 = *(undefined8 *)piVar10;
            *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x16);
            *(undefined8 *)(param_1 + 0x14) = uVar26;
            *(undefined8 *)piVar10 = uVar13;
            *(undefined8 *)(param_1 + 0x16) = uVar12;
            iVar4 = *piVar9;
            iVar19 = *piVar17;
            bVar7 = SBORROW4(iVar4,iVar19);
            bVar8 = iVar4 - iVar19 < 0;
            if (iVar4 == iVar19) {
              iVar4 = param_1[0xe];
              iVar19 = param_1[8];
              bVar7 = SBORROW4(iVar4,iVar19);
              bVar8 = iVar4 - iVar19 < 0;
              if (iVar4 == iVar19) {
                bVar7 = SBORROW4(param_1[0xf],param_1[9]);
                bVar8 = param_1[0xf] - param_1[9] < 0;
              }
            }
            if (bVar8 != bVar7) {
              uVar12 = *(undefined8 *)(param_1 + 10);
              uVar26 = *(undefined8 *)(param_1 + 8);
              uVar13 = *(undefined8 *)piVar17;
              *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0xe);
              *(undefined8 *)piVar17 = *(undefined8 *)piVar9;
              *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x10);
              *(undefined8 *)(param_1 + 0xe) = uVar26;
              *(undefined8 *)piVar9 = uVar13;
              *(undefined8 *)(param_1 + 0x10) = uVar12;
              iVar4 = *piVar17;
              iVar19 = *param_1;
              bVar7 = SBORROW4(iVar4,iVar19);
              bVar8 = iVar4 - iVar19 < 0;
              if (iVar4 == iVar19) {
                iVar4 = param_1[8];
                iVar19 = param_1[2];
                bVar7 = SBORROW4(iVar4,iVar19);
                bVar8 = iVar4 - iVar19 < 0;
                if (iVar4 == iVar19) {
                  bVar7 = SBORROW4(param_1[9],param_1[3]);
                  bVar8 = param_1[9] - param_1[3] < 0;
                }
              }
              if (bVar8 != bVar7) {
                uVar12 = *(undefined8 *)(param_1 + 4);
                uVar26 = *(undefined8 *)(param_1 + 2);
                uVar13 = *(undefined8 *)param_1;
                *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 8);
                *(undefined8 *)param_1 = *(undefined8 *)piVar17;
                *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 10);
                *(undefined8 *)(param_1 + 8) = uVar26;
                *(undefined8 *)piVar17 = uVar13;
                *(undefined8 *)(param_1 + 10) = uVar12;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar11 < 0x240) {
      piVar17 = param_1 + 6;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || piVar17 == param_2) {
          return;
        }
        goto LAB_109af3c54;
      }
      if (param_1 == param_2 || piVar17 == param_2) {
        return;
      }
      lVar23 = 0;
      piVar16 = param_1;
      goto LAB_109af37e4;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar18 = uVar15 - 2 >> 1;
      uVar21 = uVar18;
      goto LAB_109af38e8;
    }
    piVar17 = param_1 + (uVar15 >> 1) * 6;
    if (uVar11 < 0xc01) {
      FUN_109af3d14(piVar17,param_1,piVar16);
    }
    else {
      FUN_109af3d14(param_1,piVar17,piVar16);
      FUN_109af3d14(param_1 + 6,piVar17 + -6,param_2 + -0xc);
      FUN_109af3d14(param_1 + 0xc,piVar17 + 6,param_2 + -0x12);
      FUN_109af3d14(piVar17 + -6,piVar17,piVar17 + 6);
      uVar30 = *(undefined8 *)(param_1 + 2);
      uVar26 = *(undefined8 *)param_1;
      uVar12 = *(undefined8 *)(param_1 + 4);
      uVar13 = *(undefined8 *)(piVar17 + 4);
      uVar29 = *(undefined8 *)piVar17;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar17 + 2);
      *(undefined8 *)param_1 = uVar29;
      *(undefined8 *)(param_1 + 4) = uVar13;
      *(undefined8 *)(piVar17 + 4) = uVar12;
      *(undefined8 *)(piVar17 + 2) = uVar30;
      *(undefined8 *)piVar17 = uVar26;
    }
    param_3 = param_3 + -1;
    iVar4 = *param_1;
    if ((param_4 & 1) != 0) break;
    if (param_1[-6] != iVar4) {
      if (iVar4 <= param_1[-6]) {
        iVar14 = param_1[2];
        goto LAB_109af3454;
      }
      break;
    }
    iVar14 = param_1[-4];
    iVar19 = param_1[2];
    if (iVar14 != iVar19) {
      bVar8 = iVar19 <= iVar14;
      iVar14 = iVar19;
      if (bVar8) goto LAB_109af3454;
      break;
    }
    if (param_1[-3] < param_1[3]) break;
LAB_109af3454:
    iVar19 = param_1[3];
    iVar22 = *piVar16;
    bVar7 = SBORROW4(iVar4,iVar22);
    bVar8 = iVar4 - iVar22 < 0;
    if (iVar4 == iVar22) {
      iVar5 = param_2[-4];
      bVar7 = SBORROW4(iVar14,iVar5);
      bVar8 = iVar14 - iVar5 < 0;
      if (iVar14 == iVar5) {
        bVar7 = SBORROW4(iVar19,param_2[-3]);
        bVar8 = iVar19 - param_2[-3] < 0;
      }
    }
    piVar17 = param_1 + 6;
    if (bVar8 == bVar7) {
      for (; piVar17 < param_2; piVar17 = piVar17 + 6) {
        iVar5 = *piVar17;
        bVar7 = SBORROW4(iVar4,iVar5);
        bVar8 = iVar4 - iVar5 < 0;
        if (iVar4 == iVar5) {
          iVar5 = piVar17[2];
          bVar7 = SBORROW4(iVar14,iVar5);
          bVar8 = iVar14 - iVar5 < 0;
          if (iVar14 == iVar5) {
            bVar7 = SBORROW4(iVar19,piVar17[3]);
            bVar8 = iVar19 - piVar17[3] < 0;
          }
        }
        if (bVar8 != bVar7) break;
      }
    }
    else {
      while( true ) {
        iVar5 = *piVar17;
        bVar7 = SBORROW4(iVar4,iVar5);
        bVar8 = iVar4 - iVar5 < 0;
        if (iVar4 == iVar5) {
          iVar5 = piVar17[2];
          bVar7 = SBORROW4(iVar14,iVar5);
          bVar8 = iVar14 - iVar5 < 0;
          if (iVar14 == iVar5) {
            bVar7 = SBORROW4(iVar19,piVar17[3]);
            bVar8 = iVar19 - piVar17[3] < 0;
          }
        }
        if (bVar8 != bVar7) break;
        piVar17 = piVar17 + 6;
      }
    }
    iVar5 = param_1[1];
    uVar12 = *(undefined8 *)(param_1 + 4);
    piVar9 = param_2;
    piVar10 = piVar16;
    if (piVar17 < param_2) {
      while( true ) {
        piVar9 = piVar10;
        bVar7 = SBORROW4(iVar4,iVar22);
        bVar8 = iVar4 - iVar22 < 0;
        if (iVar4 == iVar22) {
          iVar22 = piVar9[2];
          bVar7 = SBORROW4(iVar14,iVar22);
          bVar8 = iVar14 - iVar22 < 0;
          if (iVar14 == iVar22) {
            bVar7 = SBORROW4(iVar19,piVar9[3]);
            bVar8 = iVar19 - piVar9[3] < 0;
          }
        }
        if (bVar8 == bVar7) break;
        iVar22 = piVar9[-6];
        piVar10 = piVar9 + -6;
      }
    }
    while (piVar17 < piVar9) {
      uVar30 = *(undefined8 *)(piVar17 + 2);
      uVar26 = *(undefined8 *)piVar17;
      uVar13 = *(undefined8 *)(piVar17 + 4);
      uVar31 = *(undefined8 *)(piVar9 + 2);
      uVar29 = *(undefined8 *)piVar9;
      *(undefined8 *)(piVar17 + 4) = *(undefined8 *)(piVar9 + 4);
      *(undefined8 *)(piVar17 + 2) = uVar31;
      *(undefined8 *)piVar17 = uVar29;
      *(undefined8 *)(piVar9 + 4) = uVar13;
      *(undefined8 *)(piVar9 + 2) = uVar30;
      *(undefined8 *)piVar9 = uVar26;
      piVar10 = piVar17;
      do {
        piVar17 = piVar10 + 6;
        iVar22 = *piVar17;
        bVar7 = SBORROW4(iVar4,iVar22);
        bVar8 = iVar4 - iVar22 < 0;
        if (iVar4 == iVar22) {
          iVar22 = piVar10[8];
          bVar7 = SBORROW4(iVar14,iVar22);
          bVar8 = iVar14 - iVar22 < 0;
          if (iVar14 == iVar22) {
            bVar7 = SBORROW4(iVar19,piVar10[9]);
            bVar8 = iVar19 - piVar10[9] < 0;
          }
        }
        piVar20 = piVar9;
        piVar10 = piVar17;
      } while (bVar8 == bVar7);
      do {
        piVar9 = piVar20 + -6;
        iVar22 = *piVar9;
        bVar7 = SBORROW4(iVar4,iVar22);
        bVar8 = iVar4 - iVar22 < 0;
        if (iVar4 == iVar22) {
          iVar22 = piVar20[-4];
          bVar7 = SBORROW4(iVar14,iVar22);
          bVar8 = iVar14 - iVar22 < 0;
          if (iVar14 == iVar22) {
            bVar7 = SBORROW4(iVar19,piVar20[-3]);
            bVar8 = iVar19 - piVar20[-3] < 0;
          }
        }
        piVar20 = piVar9;
      } while (bVar8 != bVar7);
    }
    if (piVar17 + -6 != param_1) {
      uVar26 = *(undefined8 *)(piVar17 + -4);
      uVar13 = *(undefined8 *)(piVar17 + -6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar17 + -2);
      *(undefined8 *)(param_1 + 2) = uVar26;
      *(undefined8 *)param_1 = uVar13;
    }
    param_4 = 0;
    piVar17[-6] = iVar4;
    piVar17[-5] = iVar5;
    piVar17[-4] = iVar14;
    piVar17[-3] = iVar19;
    *(undefined8 *)(piVar17 + -2) = uVar12;
  }
  lVar23 = 0;
  uVar13 = *(undefined8 *)(param_1 + 1);
  iVar19 = param_1[2];
  iVar14 = param_1[3];
  uVar12 = *(undefined8 *)(param_1 + 4);
  while( true ) {
    iVar22 = *(int *)((long)param_1 + lVar23 + 0x18);
    bVar7 = SBORROW4(iVar22,iVar4);
    bVar8 = iVar22 - iVar4 < 0;
    if (iVar22 == iVar4) {
      iVar22 = *(int *)((long)param_1 + lVar23 + 0x20);
      bVar7 = SBORROW4(iVar22,iVar19);
      bVar8 = iVar22 - iVar19 < 0;
      if (iVar22 == iVar19) {
        iVar22 = *(int *)((long)param_1 + lVar23 + 0x24);
        bVar7 = SBORROW4(iVar22,iVar14);
        bVar8 = iVar22 - iVar14 < 0;
      }
    }
    if (bVar8 == bVar7) break;
    lVar23 = lVar23 + 0x18;
  }
  piVar9 = (int *)((long)param_1 + lVar23 + 0x18);
  piVar10 = piVar16;
  if (lVar23 == 0) {
    piVar17 = piVar16;
    piVar10 = param_2;
    if (piVar9 < param_2) {
      do {
        piVar10 = piVar17;
        if (*piVar17 == iVar4) {
          if (piVar17[2] == iVar19) {
            if ((piVar17 <= piVar9) || (piVar17[3] < iVar14)) break;
          }
          else if ((piVar17 <= piVar9) || (piVar17[2] < iVar19)) break;
        }
        else if (*piVar17 < iVar4 || piVar17 <= piVar9) break;
        piVar17 = piVar17 + -6;
      } while( true );
    }
  }
  else {
    while( true ) {
      iVar22 = *piVar10;
      bVar7 = SBORROW4(iVar22,iVar4);
      bVar8 = iVar22 - iVar4 < 0;
      if (iVar22 == iVar4) {
        iVar22 = piVar10[2];
        bVar7 = SBORROW4(iVar22,iVar19);
        bVar8 = iVar22 - iVar19 < 0;
        if (iVar22 == iVar19) {
          bVar7 = SBORROW4(piVar10[3],iVar14);
          bVar8 = piVar10[3] - iVar14 < 0;
        }
      }
      if (bVar8 != bVar7) break;
      piVar10 = piVar10 + -6;
    }
  }
  piVar20 = piVar10;
  piVar17 = piVar9;
  piVar28 = piVar9;
  if (piVar9 < piVar10) {
    do {
      uVar31 = *(undefined8 *)(piVar28 + 2);
      uVar29 = *(undefined8 *)piVar28;
      uVar26 = *(undefined8 *)(piVar28 + 4);
      uVar32 = *(undefined8 *)(piVar20 + 2);
      uVar30 = *(undefined8 *)piVar20;
      *(undefined8 *)(piVar28 + 4) = *(undefined8 *)(piVar20 + 4);
      *(undefined8 *)(piVar28 + 2) = uVar32;
      *(undefined8 *)piVar28 = uVar30;
      *(undefined8 *)(piVar20 + 4) = uVar26;
      *(undefined8 *)(piVar20 + 2) = uVar31;
      *(undefined8 *)piVar20 = uVar29;
      do {
        piVar17 = piVar28 + 6;
        iVar22 = *piVar17;
        bVar7 = SBORROW4(iVar22,iVar4);
        bVar8 = iVar22 - iVar4 < 0;
        if (iVar22 == iVar4) {
          iVar22 = piVar28[8];
          bVar7 = SBORROW4(iVar22,iVar19);
          bVar8 = iVar22 - iVar19 < 0;
          if (iVar22 == iVar19) {
            bVar7 = SBORROW4(piVar28[9],iVar14);
            bVar8 = piVar28[9] - iVar14 < 0;
          }
        }
        piVar28 = piVar17;
      } while (bVar8 != bVar7);
      do {
        piVar24 = piVar20 + -6;
        iVar22 = *piVar24;
        bVar7 = SBORROW4(iVar22,iVar4);
        bVar8 = iVar22 - iVar4 < 0;
        if (iVar22 == iVar4) {
          iVar22 = piVar20[-4];
          bVar7 = SBORROW4(iVar22,iVar19);
          bVar8 = iVar22 - iVar19 < 0;
          if (iVar22 == iVar19) {
            bVar7 = SBORROW4(piVar20[-3],iVar14);
            bVar8 = piVar20[-3] - iVar14 < 0;
          }
        }
        piVar20 = piVar24;
      } while (bVar8 == bVar7);
    } while (piVar17 < piVar24);
  }
  piVar20 = piVar17 + -6;
  if (piVar20 != param_1) {
    uVar29 = *(undefined8 *)(piVar17 + -4);
    uVar26 = *(undefined8 *)piVar20;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar17 + -2);
    *(undefined8 *)(param_1 + 2) = uVar29;
    *(undefined8 *)param_1 = uVar26;
  }
  piVar17[-6] = iVar4;
  *(undefined8 *)(piVar17 + -5) = uVar13;
  piVar17[-3] = iVar14;
  *(undefined8 *)(piVar17 + -2) = uVar12;
  if (piVar10 <= piVar9) {
    piVar9 = param_1;
    FUN_109af4120(param_1,piVar20);
    piVar10 = piVar17;
    FUN_109af4120(piVar17,param_2);
    if ((int)piVar10 != 0) goto LAB_109af35d0;
    if (((ulong)piVar9 & 1) != 0) goto LAB_109af312c;
  }
  FUN_109af30ec(param_1,piVar20,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_109af312c;
LAB_109af3c54:
  piVar16 = piVar17;
  iVar4 = param_1[6];
  if (iVar4 == *param_1) {
    iVar19 = param_1[8];
    iVar22 = param_1[2];
    bVar8 = SBORROW4(iVar19,iVar22);
    iVar14 = iVar19 - iVar22;
    if (iVar19 == iVar22) {
      bVar8 = SBORROW4(param_1[9],param_1[3]);
      iVar14 = param_1[9] - param_1[3];
    }
    if (iVar14 < 0 != bVar8) {
LAB_109af3c98:
      iVar14 = param_1[7];
      iVar22 = param_1[9];
      uVar12 = *(undefined8 *)(param_1 + 10);
      do {
        piVar17 = param_1;
        *(undefined8 *)(piVar17 + 8) = *(undefined8 *)(piVar17 + 2);
        *(undefined8 *)(piVar17 + 6) = *(undefined8 *)piVar17;
        *(undefined8 *)(piVar17 + 10) = *(undefined8 *)(piVar17 + 4);
        iVar5 = piVar17[-6];
        bVar7 = SBORROW4(iVar4,iVar5);
        bVar8 = iVar4 - iVar5 < 0;
        if (iVar4 == iVar5) {
          iVar5 = piVar17[-4];
          bVar7 = SBORROW4(iVar19,iVar5);
          bVar8 = iVar19 - iVar5 < 0;
          if (iVar19 == iVar5) {
            bVar7 = SBORROW4(iVar22,piVar17[-3]);
            bVar8 = iVar22 - piVar17[-3] < 0;
          }
        }
        param_1 = piVar17 + -6;
      } while (bVar8 != bVar7);
      *piVar17 = iVar4;
      piVar17[1] = iVar14;
      piVar17[2] = iVar19;
      piVar17[3] = iVar22;
      *(undefined8 *)(piVar17 + 4) = uVar12;
    }
  }
  else if (iVar4 < *param_1) {
    iVar19 = param_1[8];
    goto LAB_109af3c98;
  }
  piVar17 = piVar16 + 6;
  param_1 = piVar16;
  if (piVar17 == param_2) {
    return;
  }
  goto LAB_109af3c54;
LAB_109af37e4:
  iVar4 = piVar16[6];
  if (iVar4 == *piVar16) {
    iVar19 = piVar16[8];
    iVar22 = piVar16[2];
    bVar8 = SBORROW4(iVar19,iVar22);
    iVar14 = iVar19 - iVar22;
    if (iVar19 == iVar22) {
      bVar8 = SBORROW4(piVar16[9],piVar16[3]);
      iVar14 = piVar16[9] - piVar16[3];
    }
    if (iVar14 < 0 != bVar8) {
LAB_109af3828:
      iVar14 = piVar16[7];
      iVar22 = piVar16[9];
      uVar12 = *(undefined8 *)(piVar16 + 10);
      uVar13 = *(undefined8 *)piVar16;
      *(undefined8 *)(piVar17 + 2) = *(undefined8 *)(piVar16 + 2);
      *(undefined8 *)piVar17 = uVar13;
      *(undefined8 *)(piVar17 + 4) = *(undefined8 *)(piVar16 + 4);
      piVar9 = param_1;
      lVar27 = lVar23;
      if (piVar16 != param_1) {
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar27);
          iVar6 = *(int *)(puVar2 + -3);
          bVar8 = SBORROW4(iVar4,iVar6);
          iVar5 = iVar4 - iVar6;
          if (iVar4 == iVar6) {
            iVar6 = *(int *)(puVar2 + -2);
            bVar8 = SBORROW4(iVar19,iVar6);
            iVar5 = iVar19 - iVar6;
            if (iVar19 != iVar6) goto LAB_109af3888;
            piVar9 = (int *)((long)param_1 + lVar27);
            if (((int *)((long)param_1 + lVar27))[-3] <= iVar22) break;
          }
          else {
LAB_109af3888:
            piVar9 = piVar16;
            if (iVar5 < 0 == bVar8) break;
          }
          piVar16 = piVar16 + -6;
          puVar2[1] = puVar2[-2];
          *puVar2 = puVar2[-3];
          puVar2[2] = puVar2[-1];
          lVar27 = lVar27 + -0x18;
          piVar9 = param_1;
        } while (lVar27 != 0);
      }
      *piVar9 = iVar4;
      piVar9[1] = iVar14;
      piVar9[2] = iVar19;
      piVar9[3] = iVar22;
      *(undefined8 *)(piVar9 + 4) = uVar12;
    }
  }
  else if (iVar4 < *piVar16) {
    iVar19 = piVar16[8];
    goto LAB_109af3828;
  }
  piVar9 = piVar17 + 6;
  lVar23 = lVar23 + 0x18;
  piVar16 = piVar17;
  piVar17 = piVar9;
  if (piVar9 == param_2) {
    return;
  }
  goto LAB_109af37e4;
LAB_109af38e8:
  do {
    if ((long)uVar21 <= (long)uVar18) {
      uVar25 = uVar21 << 1 | 1;
      piVar17 = param_1 + uVar25 * 6;
      uVar1 = uVar21 * 2 + 2;
      if ((long)uVar1 < (long)uVar15) {
        iVar19 = piVar17[6];
        iVar4 = *piVar17;
        bVar7 = SBORROW4(iVar4,iVar19);
        bVar8 = iVar4 - iVar19 < 0;
        if (iVar4 == iVar19) {
          iVar4 = piVar17[2];
          iVar19 = piVar17[8];
          bVar7 = SBORROW4(iVar4,iVar19);
          bVar8 = iVar4 - iVar19 < 0;
          if (iVar4 == iVar19) {
            bVar7 = SBORROW4(piVar17[3],piVar17[9]);
            bVar8 = piVar17[3] - piVar17[9] < 0;
          }
        }
        if (bVar8 != bVar7) {
          piVar17 = piVar17 + 6;
          uVar25 = uVar1;
        }
      }
      piVar16 = param_1 + uVar21 * 6;
      iVar4 = *piVar16;
      if (*piVar17 == iVar4) {
        iVar22 = piVar17[2];
        iVar19 = piVar16[2];
        bVar8 = SBORROW4(iVar22,iVar19);
        iVar14 = iVar22 - iVar19;
        if (iVar22 == iVar19) {
          bVar8 = SBORROW4(piVar17[3],piVar16[3]);
          iVar14 = piVar17[3] - piVar16[3];
          iVar19 = iVar22;
        }
        if (iVar14 < 0 == bVar8) {
LAB_109af3990:
          iVar14 = piVar16[1];
          iVar22 = piVar16[3];
          uVar12 = *(undefined8 *)(piVar16 + 4);
          uVar13 = *(undefined8 *)(piVar17 + 4);
          uVar26 = *(undefined8 *)piVar17;
          *(undefined8 *)(piVar16 + 2) = *(undefined8 *)(piVar17 + 2);
          *(undefined8 *)piVar16 = uVar26;
          *(undefined8 *)(piVar16 + 4) = uVar13;
          while ((long)uVar25 <= (long)uVar18) {
            uVar3 = uVar25 << 1 | 1;
            piVar16 = param_1 + uVar3 * 6;
            uVar1 = uVar25 * 2 + 2;
            uVar25 = uVar3;
            if ((long)uVar1 < (long)uVar15) {
              iVar6 = piVar16[6];
              iVar5 = *piVar16;
              bVar7 = SBORROW4(iVar5,iVar6);
              bVar8 = iVar5 - iVar6 < 0;
              if (iVar5 == iVar6) {
                iVar5 = piVar16[2];
                iVar6 = piVar16[8];
                bVar7 = SBORROW4(iVar5,iVar6);
                bVar8 = iVar5 - iVar6 < 0;
                if (iVar5 == iVar6) {
                  bVar7 = SBORROW4(piVar16[3],piVar16[9]);
                  bVar8 = piVar16[3] - piVar16[9] < 0;
                }
              }
              if (bVar8 != bVar7) {
                piVar16 = piVar16 + 6;
                uVar25 = uVar1;
              }
            }
            iVar5 = *piVar16;
            bVar7 = SBORROW4(iVar5,iVar4);
            bVar8 = iVar5 - iVar4 < 0;
            if (iVar5 == iVar4) {
              iVar5 = piVar16[2];
              bVar7 = SBORROW4(iVar5,iVar19);
              bVar8 = iVar5 - iVar19 < 0;
              if (iVar5 == iVar19) {
                bVar7 = SBORROW4(piVar16[3],iVar22);
                bVar8 = piVar16[3] - iVar22 < 0;
              }
            }
            if (bVar8 != bVar7) break;
            uVar26 = *(undefined8 *)(piVar16 + 2);
            uVar13 = *(undefined8 *)piVar16;
            *(undefined8 *)(piVar17 + 4) = *(undefined8 *)(piVar16 + 4);
            *(undefined8 *)(piVar17 + 2) = uVar26;
            *(undefined8 *)piVar17 = uVar13;
            piVar17 = piVar16;
          }
          *piVar17 = iVar4;
          piVar17[1] = iVar14;
          piVar17[2] = iVar19;
          piVar17[3] = iVar22;
          *(undefined8 *)(piVar17 + 4) = uVar12;
        }
      }
      else if (iVar4 <= *piVar17) {
        iVar19 = piVar16[2];
        goto LAB_109af3990;
      }
    }
    bVar8 = uVar21 != 0;
    uVar21 = uVar21 - 1;
  } while (bVar8);
  lVar23 = (uVar11 >> 3) * -0x5555555555555555;
  do {
    uVar26 = *(undefined8 *)(param_1 + 2);
    uVar13 = *(undefined8 *)param_1;
    uVar12 = *(undefined8 *)(param_1 + 4);
    piVar17 = param_1;
    uVar11 = 0;
    do {
      uVar21 = uVar11 << 1 | 1;
      uVar15 = uVar11 * 2 + 2;
      piVar16 = piVar17 + uVar11 * 6 + 6;
      if ((long)uVar15 < lVar23) {
        iVar19 = piVar17[uVar11 * 6 + 0xc];
        iVar4 = piVar17[uVar11 * 6 + 6];
        bVar7 = SBORROW4(iVar4,iVar19);
        bVar8 = iVar4 - iVar19 < 0;
        if (iVar4 == iVar19) {
          iVar4 = piVar17[uVar11 * 6 + 8];
          iVar19 = piVar17[uVar11 * 6 + 0xe];
          bVar7 = SBORROW4(iVar4,iVar19);
          bVar8 = iVar4 - iVar19 < 0;
          if (iVar4 == iVar19) {
            bVar7 = SBORROW4(piVar17[uVar11 * 6 + 9],piVar17[uVar11 * 6 + 0xf]);
            bVar8 = piVar17[uVar11 * 6 + 9] - piVar17[uVar11 * 6 + 0xf] < 0;
          }
        }
        if (bVar8 != bVar7) {
          piVar16 = piVar17 + uVar11 * 6 + 0xc;
          uVar21 = uVar15;
        }
      }
      uVar30 = *(undefined8 *)(piVar16 + 2);
      uVar29 = *(undefined8 *)piVar16;
      *(undefined8 *)(piVar17 + 4) = *(undefined8 *)(piVar16 + 4);
      *(undefined8 *)(piVar17 + 2) = uVar30;
      *(undefined8 *)piVar17 = uVar29;
      piVar17 = piVar16;
      uVar11 = uVar21;
    } while ((long)uVar21 <= (lVar23 + -2) / 2);
    piVar17 = param_2 + -6;
    if (piVar16 == piVar17) {
      *(undefined8 *)(piVar16 + 4) = uVar12;
      *(undefined8 *)(piVar16 + 2) = uVar26;
      *(undefined8 *)piVar16 = uVar13;
    }
    else {
      uVar30 = *(undefined8 *)(param_2 + -4);
      uVar29 = *(undefined8 *)piVar17;
      *(undefined8 *)(piVar16 + 4) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(piVar16 + 2) = uVar30;
      *(undefined8 *)piVar16 = uVar29;
      *(undefined8 *)(param_2 + -2) = uVar12;
      *(undefined8 *)(param_2 + -4) = uVar26;
      *(undefined8 *)piVar17 = uVar13;
      uVar11 = (long)piVar16 + (0x18 - (long)param_1);
      if (0x18 < (long)uVar11) {
        uVar15 = (uVar11 >> 3) * -0x5555555555555555 - 2;
        uVar11 = uVar15 >> 1;
        piVar9 = param_1 + uVar11 * 6;
        iVar4 = *piVar16;
        if (*piVar9 == iVar4) {
          iVar22 = piVar9[2];
          iVar19 = piVar16[2];
          bVar8 = SBORROW4(iVar22,iVar19);
          iVar14 = iVar22 - iVar19;
          if (iVar22 == iVar19) {
            bVar8 = SBORROW4(piVar9[3],piVar16[3]);
            iVar14 = piVar9[3] - piVar16[3];
            iVar19 = iVar22;
          }
          if (iVar14 < 0 != bVar8) {
LAB_109af3bbc:
            iVar14 = piVar16[1];
            iVar22 = piVar16[3];
            uVar12 = *(undefined8 *)(piVar16 + 4);
            uVar13 = *(undefined8 *)(piVar9 + 4);
            uVar26 = *(undefined8 *)piVar9;
            *(undefined8 *)(piVar16 + 2) = *(undefined8 *)(piVar9 + 2);
            *(undefined8 *)piVar16 = uVar26;
            *(undefined8 *)(piVar16 + 4) = uVar13;
            while (1 < uVar15) {
              uVar15 = uVar11 - 1;
              uVar11 = uVar15 >> 1;
              piVar16 = param_1 + uVar11 * 6;
              iVar5 = *piVar16;
              bVar7 = SBORROW4(iVar5,iVar4);
              bVar8 = iVar5 - iVar4 < 0;
              if (iVar5 == iVar4) {
                iVar5 = piVar16[2];
                bVar7 = SBORROW4(iVar5,iVar19);
                bVar8 = iVar5 - iVar19 < 0;
                if (iVar5 == iVar19) {
                  bVar7 = SBORROW4(piVar16[3],iVar22);
                  bVar8 = piVar16[3] - iVar22 < 0;
                }
              }
              if (bVar8 == bVar7) break;
              uVar26 = *(undefined8 *)(piVar16 + 2);
              uVar13 = *(undefined8 *)piVar16;
              *(undefined8 *)(piVar9 + 4) = *(undefined8 *)(piVar16 + 4);
              *(undefined8 *)(piVar9 + 2) = uVar26;
              *(undefined8 *)piVar9 = uVar13;
              piVar9 = piVar16;
            }
            *piVar9 = iVar4;
            piVar9[1] = iVar14;
            piVar9[2] = iVar19;
            piVar9[3] = iVar22;
            *(undefined8 *)(piVar9 + 4) = uVar12;
          }
        }
        else if (*piVar9 < iVar4) {
          iVar19 = piVar16[2];
          goto LAB_109af3bbc;
        }
      }
    }
    bVar8 = lVar23 < 3;
    lVar23 = lVar23 + -1;
    param_2 = piVar17;
    if (bVar8) {
      return;
    }
  } while( true );
LAB_109af35d0:
  param_2 = piVar20;
  if (((ulong)piVar9 & 1) != 0) {
    return;
  }
  goto LAB_109af311c;
}



/* Entry: 109af3d14; end: 109af3ea7;  */

void FUN_109af3d14(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  bVar4 = SBORROW4(iVar1,iVar2);
  bVar5 = iVar1 - iVar2 < 0;
  if (iVar1 == iVar2) {
    iVar2 = param_2[2];
    iVar3 = param_1[2];
    bVar4 = SBORROW4(iVar2,iVar3);
    bVar5 = iVar2 - iVar3 < 0;
    if (iVar2 == iVar3) {
      bVar4 = SBORROW4(param_2[3],param_1[3]);
      bVar5 = param_2[3] - param_1[3] < 0;
    }
  }
  if (bVar5 == bVar4) {
    iVar2 = *param_3;
    bVar4 = SBORROW4(iVar2,iVar1);
    bVar5 = iVar2 - iVar1 < 0;
    if (iVar2 == iVar1) {
      iVar1 = param_3[2];
      iVar2 = param_2[2];
      bVar4 = SBORROW4(iVar1,iVar2);
      bVar5 = iVar1 - iVar2 < 0;
      if (iVar1 == iVar2) {
        bVar4 = SBORROW4(param_3[3],param_2[3]);
        bVar5 = param_3[3] - param_2[3] < 0;
      }
    }
    if (bVar5 != bVar4) {
      uVar6 = *(undefined8 *)(param_2 + 4);
      uVar9 = *(undefined8 *)(param_2 + 2);
      uVar8 = *(undefined8 *)param_2;
      uVar7 = *(undefined8 *)(param_3 + 4);
      uVar10 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar10;
      *(undefined8 *)(param_2 + 4) = uVar7;
      *(undefined8 *)(param_3 + 2) = uVar9;
      *(undefined8 *)param_3 = uVar8;
      *(undefined8 *)(param_3 + 4) = uVar6;
      iVar1 = *param_2;
      iVar2 = *param_1;
      bVar4 = SBORROW4(iVar1,iVar2);
      bVar5 = iVar1 - iVar2 < 0;
      if (iVar1 == iVar2) {
        iVar1 = param_2[2];
        iVar2 = param_1[2];
        bVar4 = SBORROW4(iVar1,iVar2);
        bVar5 = iVar1 - iVar2 < 0;
        if (iVar1 == iVar2) {
          bVar4 = SBORROW4(param_2[3],param_1[3]);
          bVar5 = param_2[3] - param_1[3] < 0;
        }
      }
      if (bVar5 != bVar4) {
        uVar6 = *(undefined8 *)(param_1 + 4);
        uVar9 = *(undefined8 *)(param_1 + 2);
        uVar8 = *(undefined8 *)param_1;
        uVar7 = *(undefined8 *)(param_2 + 4);
        uVar10 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar10;
        *(undefined8 *)(param_1 + 4) = uVar7;
        *(undefined8 *)(param_2 + 2) = uVar9;
        *(undefined8 *)param_2 = uVar8;
        *(undefined8 *)(param_2 + 4) = uVar6;
      }
    }
  }
  else {
    iVar2 = *param_3;
    bVar4 = SBORROW4(iVar2,iVar1);
    bVar5 = iVar2 - iVar1 < 0;
    if (iVar2 == iVar1) {
      iVar1 = param_3[2];
      iVar2 = param_2[2];
      bVar4 = SBORROW4(iVar1,iVar2);
      bVar5 = iVar1 - iVar2 < 0;
      if (iVar1 == iVar2) {
        bVar4 = SBORROW4(param_3[3],param_2[3]);
        bVar5 = param_3[3] - param_2[3] < 0;
      }
    }
    if (bVar5 == bVar4) {
      uVar6 = *(undefined8 *)(param_1 + 4);
      uVar9 = *(undefined8 *)(param_1 + 2);
      uVar8 = *(undefined8 *)param_1;
      uVar7 = *(undefined8 *)(param_2 + 4);
      uVar10 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar10;
      *(undefined8 *)(param_1 + 4) = uVar7;
      *(undefined8 *)(param_2 + 2) = uVar9;
      *(undefined8 *)param_2 = uVar8;
      *(undefined8 *)(param_2 + 4) = uVar6;
      iVar1 = *param_3;
      iVar2 = *param_2;
      bVar4 = SBORROW4(iVar1,iVar2);
      bVar5 = iVar1 - iVar2 < 0;
      if (iVar1 == iVar2) {
        iVar1 = param_3[2];
        iVar2 = param_2[2];
        bVar4 = SBORROW4(iVar1,iVar2);
        bVar5 = iVar1 - iVar2 < 0;
        if (iVar1 == iVar2) {
          bVar4 = SBORROW4(param_3[3],param_2[3]);
          bVar5 = param_3[3] - param_2[3] < 0;
        }
      }
      if (bVar5 == bVar4) {
        return;
      }
      uVar6 = *(undefined8 *)(param_2 + 4);
      uVar9 = *(undefined8 *)(param_2 + 2);
      uVar8 = *(undefined8 *)param_2;
      uVar7 = *(undefined8 *)(param_3 + 4);
      uVar10 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar10;
      *(undefined8 *)(param_2 + 4) = uVar7;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 4);
      uVar9 = *(undefined8 *)(param_1 + 2);
      uVar8 = *(undefined8 *)param_1;
      uVar7 = *(undefined8 *)(param_3 + 4);
      uVar10 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = uVar10;
      *(undefined8 *)(param_1 + 4) = uVar7;
    }
    *(undefined8 *)(param_3 + 2) = uVar9;
    *(undefined8 *)param_3 = uVar8;
    *(undefined8 *)(param_3 + 4) = uVar6;
  }
  return;
}



/* Entry: 109af3ea8; end: 109af411f;  */

void FUN_109af3ea8(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_109af3d14();
  iVar1 = *param_4;
  iVar2 = *param_3;
  bVar3 = SBORROW4(iVar1,iVar2);
  bVar4 = iVar1 - iVar2 < 0;
  if (iVar1 == iVar2) {
    iVar1 = param_4[2];
    iVar2 = param_3[2];
    bVar3 = SBORROW4(iVar1,iVar2);
    bVar4 = iVar1 - iVar2 < 0;
    if (iVar1 == iVar2) {
      bVar3 = SBORROW4(param_4[3],param_3[3]);
      bVar4 = param_4[3] - param_3[3] < 0;
    }
  }
  if (bVar4 != bVar3) {
    uVar5 = *(undefined8 *)(param_3 + 4);
    uVar8 = *(undefined8 *)(param_3 + 2);
    uVar7 = *(undefined8 *)param_3;
    uVar6 = *(undefined8 *)(param_4 + 4);
    uVar9 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar9;
    *(undefined8 *)(param_3 + 4) = uVar6;
    *(undefined8 *)(param_4 + 2) = uVar8;
    *(undefined8 *)param_4 = uVar7;
    *(undefined8 *)(param_4 + 4) = uVar5;
    iVar1 = *param_3;
    iVar2 = *param_2;
    bVar3 = SBORROW4(iVar1,iVar2);
    bVar4 = iVar1 - iVar2 < 0;
    if (iVar1 == iVar2) {
      iVar1 = param_3[2];
      iVar2 = param_2[2];
      bVar3 = SBORROW4(iVar1,iVar2);
      bVar4 = iVar1 - iVar2 < 0;
      if (iVar1 == iVar2) {
        bVar3 = SBORROW4(param_3[3],param_2[3]);
        bVar4 = param_3[3] - param_2[3] < 0;
      }
    }
    if (bVar4 != bVar3) {
      uVar5 = *(undefined8 *)(param_2 + 4);
      uVar8 = *(undefined8 *)(param_2 + 2);
      uVar7 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_3 + 4);
      uVar9 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar9;
      *(undefined8 *)(param_2 + 4) = uVar6;
      *(undefined8 *)(param_3 + 2) = uVar8;
      *(undefined8 *)param_3 = uVar7;
      *(undefined8 *)(param_3 + 4) = uVar5;
      iVar1 = *param_2;
      iVar2 = *param_1;
      bVar3 = SBORROW4(iVar1,iVar2);
      bVar4 = iVar1 - iVar2 < 0;
      if (iVar1 == iVar2) {
        iVar1 = param_2[2];
        iVar2 = param_1[2];
        bVar3 = SBORROW4(iVar1,iVar2);
        bVar4 = iVar1 - iVar2 < 0;
        if (iVar1 == iVar2) {
          bVar3 = SBORROW4(param_2[3],param_1[3]);
          bVar4 = param_2[3] - param_1[3] < 0;
        }
      }
      if (bVar4 != bVar3) {
        uVar5 = *(undefined8 *)(param_1 + 4);
        uVar8 = *(undefined8 *)(param_1 + 2);
        uVar7 = *(undefined8 *)param_1;
        uVar6 = *(undefined8 *)(param_2 + 4);
        uVar9 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar9;
        *(undefined8 *)(param_1 + 4) = uVar6;
        *(undefined8 *)(param_2 + 2) = uVar8;
        *(undefined8 *)param_2 = uVar7;
        *(undefined8 *)(param_2 + 4) = uVar5;
      }
    }
  }
  iVar1 = *param_5;
  iVar2 = *param_4;
  bVar3 = SBORROW4(iVar1,iVar2);
  bVar4 = iVar1 - iVar2 < 0;
  if (iVar1 == iVar2) {
    iVar1 = param_5[2];
    iVar2 = param_4[2];
    bVar3 = SBORROW4(iVar1,iVar2);
    bVar4 = iVar1 - iVar2 < 0;
    if (iVar1 == iVar2) {
      bVar3 = SBORROW4(param_5[3],param_4[3]);
      bVar4 = param_5[3] - param_4[3] < 0;
    }
  }
  if (bVar4 != bVar3) {
    uVar5 = *(undefined8 *)(param_4 + 4);
    uVar8 = *(undefined8 *)(param_4 + 2);
    uVar7 = *(undefined8 *)param_4;
    uVar6 = *(undefined8 *)(param_5 + 4);
    uVar9 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)param_4 = uVar9;
    *(undefined8 *)(param_4 + 4) = uVar6;
    *(undefined8 *)(param_5 + 2) = uVar8;
    *(undefined8 *)param_5 = uVar7;
    *(undefined8 *)(param_5 + 4) = uVar5;
    iVar1 = *param_4;
    iVar2 = *param_3;
    bVar3 = SBORROW4(iVar1,iVar2);
    bVar4 = iVar1 - iVar2 < 0;
    if (iVar1 == iVar2) {
      iVar1 = param_4[2];
      iVar2 = param_3[2];
      bVar3 = SBORROW4(iVar1,iVar2);
      bVar4 = iVar1 - iVar2 < 0;
      if (iVar1 == iVar2) {
        bVar3 = SBORROW4(param_4[3],param_3[3]);
        bVar4 = param_4[3] - param_3[3] < 0;
      }
    }
    if (bVar4 != bVar3) {
      uVar5 = *(undefined8 *)(param_3 + 4);
      uVar8 = *(undefined8 *)(param_3 + 2);
      uVar7 = *(undefined8 *)param_3;
      uVar6 = *(undefined8 *)(param_4 + 4);
      uVar9 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar9;
      *(undefined8 *)(param_3 + 4) = uVar6;
      *(undefined8 *)(param_4 + 2) = uVar8;
      *(undefined8 *)param_4 = uVar7;
      *(undefined8 *)(param_4 + 4) = uVar5;
      iVar1 = *param_3;
      iVar2 = *param_2;
      bVar3 = SBORROW4(iVar1,iVar2);
      bVar4 = iVar1 - iVar2 < 0;
      if (iVar1 == iVar2) {
        iVar1 = param_3[2];
        iVar2 = param_2[2];
        bVar3 = SBORROW4(iVar1,iVar2);
        bVar4 = iVar1 - iVar2 < 0;
        if (iVar1 == iVar2) {
          bVar3 = SBORROW4(param_3[3],param_2[3]);
          bVar4 = param_3[3] - param_2[3] < 0;
        }
      }
      if (bVar4 != bVar3) {
        uVar5 = *(undefined8 *)(param_2 + 4);
        uVar8 = *(undefined8 *)(param_2 + 2);
        uVar7 = *(undefined8 *)param_2;
        uVar6 = *(undefined8 *)(param_3 + 4);
        uVar9 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar9;
        *(undefined8 *)(param_2 + 4) = uVar6;
        *(undefined8 *)(param_3 + 2) = uVar8;
        *(undefined8 *)param_3 = uVar7;
        *(undefined8 *)(param_3 + 4) = uVar5;
        iVar1 = *param_2;
        iVar2 = *param_1;
        bVar3 = SBORROW4(iVar1,iVar2);
        bVar4 = iVar1 - iVar2 < 0;
        if (iVar1 == iVar2) {
          iVar1 = param_2[2];
          iVar2 = param_1[2];
          bVar3 = SBORROW4(iVar1,iVar2);
          bVar4 = iVar1 - iVar2 < 0;
          if (iVar1 == iVar2) {
            bVar3 = SBORROW4(param_2[3],param_1[3]);
            bVar4 = param_2[3] - param_1[3] < 0;
          }
        }
        if (bVar4 != bVar3) {
          uVar5 = *(undefined8 *)(param_1 + 4);
          uVar8 = *(undefined8 *)(param_1 + 2);
          uVar7 = *(undefined8 *)param_1;
          uVar6 = *(undefined8 *)(param_2 + 4);
          uVar9 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)param_1 = uVar9;
          *(undefined8 *)(param_1 + 4) = uVar6;
          *(undefined8 *)(param_2 + 2) = uVar8;
          *(undefined8 *)param_2 = uVar7;
          *(undefined8 *)(param_2 + 4) = uVar5;
        }
      }
    }
  }
  return;
}



/* Entry: 109af4120; end: 109af4453;  */

bool FUN_109af4120(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar8 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) {
      return true;
    }
    if (uVar8 == 2) {
      piVar16 = param_2 + -6;
      iVar4 = *piVar16;
      iVar12 = *param_1;
      bVar6 = SBORROW4(iVar4,iVar12);
      bVar7 = iVar4 - iVar12 < 0;
      if (iVar4 == iVar12) {
        iVar4 = param_2[-4];
        iVar12 = param_1[2];
        bVar6 = SBORROW4(iVar4,iVar12);
        bVar7 = iVar4 - iVar12 < 0;
        if (iVar4 == iVar12) {
          bVar6 = SBORROW4(param_2[-3],param_1[3]);
          bVar7 = param_2[-3] - param_1[3] < 0;
        }
      }
      if (bVar7 == bVar6) {
        return true;
      }
      uVar10 = *(undefined8 *)(param_1 + 4);
      uVar20 = *(undefined8 *)(param_1 + 2);
      uVar19 = *(undefined8 *)param_1;
      uVar13 = *(undefined8 *)(param_2 + -2);
      uVar21 = *(undefined8 *)piVar16;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)param_1 = uVar21;
      *(undefined8 *)(param_1 + 4) = uVar13;
      *(undefined8 *)(param_2 + -4) = uVar20;
      *(undefined8 *)piVar16 = uVar19;
      *(undefined8 *)(param_2 + -2) = uVar10;
      return true;
    }
  }
  else {
    if (uVar8 == 3) {
      FUN_109af3d14(param_1,param_1 + 6,param_2 + -6);
      return true;
    }
    if (uVar8 == 4) {
      FUN_109af3d14(param_1,param_1 + 6,param_1 + 0xc);
      piVar16 = param_2 + -6;
      iVar4 = *piVar16;
      iVar12 = param_1[0xc];
      bVar6 = SBORROW4(iVar4,iVar12);
      bVar7 = iVar4 - iVar12 < 0;
      if (iVar4 == iVar12) {
        iVar4 = param_2[-4];
        iVar12 = param_1[0xe];
        bVar6 = SBORROW4(iVar4,iVar12);
        bVar7 = iVar4 - iVar12 < 0;
        if (iVar4 == iVar12) {
          bVar6 = SBORROW4(param_2[-3],param_1[0xf]);
          bVar7 = param_2[-3] - param_1[0xf] < 0;
        }
      }
      if (bVar7 == bVar6) {
        return true;
      }
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar20 = *(undefined8 *)(param_1 + 0xe);
      uVar19 = *(undefined8 *)(param_1 + 0xc);
      uVar13 = *(undefined8 *)(param_2 + -2);
      uVar21 = *(undefined8 *)piVar16;
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(param_1 + 0xc) = uVar21;
      *(undefined8 *)(param_1 + 0x10) = uVar13;
      *(undefined8 *)(param_2 + -4) = uVar20;
      *(undefined8 *)piVar16 = uVar19;
      *(undefined8 *)(param_2 + -2) = uVar10;
      iVar12 = param_1[0xc];
      iVar4 = param_1[6];
      bVar6 = SBORROW4(iVar12,iVar4);
      bVar7 = iVar12 - iVar4 < 0;
      if (iVar12 == iVar4) {
        iVar12 = param_1[0xe];
        iVar4 = param_1[8];
        bVar6 = SBORROW4(iVar12,iVar4);
        bVar7 = iVar12 - iVar4 < 0;
        if (iVar12 == iVar4) {
          bVar6 = SBORROW4(param_1[0xf],param_1[9]);
          bVar7 = param_1[0xf] - param_1[9] < 0;
        }
      }
      if (bVar7 == bVar6) {
        return true;
      }
      uVar10 = *(undefined8 *)(param_1 + 10);
      uVar19 = *(undefined8 *)(param_1 + 8);
      uVar13 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0xe) = uVar19;
      *(undefined8 *)(param_1 + 0xc) = uVar13;
      *(undefined8 *)(param_1 + 0x10) = uVar10;
      iVar12 = param_1[6];
      iVar4 = *param_1;
      bVar6 = SBORROW4(iVar12,iVar4);
      bVar7 = iVar12 - iVar4 < 0;
      if (iVar12 == iVar4) {
        iVar12 = param_1[8];
        iVar4 = param_1[2];
        bVar6 = SBORROW4(iVar12,iVar4);
        bVar7 = iVar12 - iVar4 < 0;
        if (iVar12 == iVar4) {
          bVar6 = SBORROW4(param_1[9],param_1[3]);
          bVar7 = param_1[9] - param_1[3] < 0;
        }
      }
      if (bVar7 == bVar6) {
        return true;
      }
      uVar10 = *(undefined8 *)(param_1 + 4);
      uVar19 = *(undefined8 *)(param_1 + 2);
      uVar13 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 8) = uVar19;
      *(undefined8 *)(param_1 + 6) = uVar13;
      *(undefined8 *)(param_1 + 10) = uVar10;
      return true;
    }
    if (uVar8 == 5) {
      FUN_109af3ea8(param_1,param_1 + 6,param_1 + 0xc,param_1 + 0x12,param_2 + -6);
      return true;
    }
  }
  FUN_109af3d14(param_1,param_1 + 6,param_1 + 0xc);
  if (param_1 + 0x12 != param_2) {
    lVar11 = 0;
    iVar12 = 0;
    piVar16 = param_1 + 0x12;
    piVar17 = param_1 + 0xc;
    do {
      piVar9 = piVar16;
      iVar4 = *piVar9;
      if (iVar4 == *piVar17) {
        iVar14 = piVar9[2];
        if (iVar14 == piVar17[2]) {
          if (piVar9[3] < piVar17[3]) {
LAB_109af4270:
            iVar2 = piVar9[1];
            iVar3 = piVar9[3];
            uVar10 = *(undefined8 *)(piVar9 + 4);
            uVar13 = *(undefined8 *)piVar17;
            *(undefined8 *)(piVar9 + 2) = *(undefined8 *)(piVar17 + 2);
            *(undefined8 *)piVar9 = uVar13;
            *(undefined8 *)(piVar9 + 4) = *(undefined8 *)(piVar17 + 4);
            lVar15 = lVar11;
            do {
              piVar16 = (int *)((long)param_1 + lVar15 + 0x18);
              iVar5 = *piVar16;
              bVar7 = SBORROW4(iVar4,iVar5);
              iVar1 = iVar4 - iVar5;
              if (iVar4 == iVar5) {
                iVar1 = *(int *)((long)param_1 + lVar15 + 0x20);
                if (iVar14 == iVar1) {
                  iVar1 = *(int *)((long)param_1 + lVar15 + 0x24);
                  bVar7 = SBORROW4(iVar3,iVar1);
                  iVar1 = iVar3 - iVar1;
                  goto LAB_109af42bc;
                }
                if (iVar1 <= iVar14) {
                  piVar18 = (int *)((long)param_1 + lVar15 + 0x30);
                  break;
                }
              }
              else {
LAB_109af42bc:
                piVar18 = piVar17;
                if (iVar1 < 0 == bVar7) break;
              }
              piVar17 = piVar17 + -6;
              *(undefined8 *)((long)param_1 + lVar15 + 0x38) =
                   *(undefined8 *)((long)param_1 + lVar15 + 0x20);
              *(undefined8 *)((long)param_1 + lVar15 + 0x30) = *(undefined8 *)piVar16;
              *(undefined8 *)((long)param_1 + lVar15 + 0x40) =
                   *(undefined8 *)((long)param_1 + lVar15 + 0x28);
              lVar15 = lVar15 + -0x18;
              piVar18 = param_1;
            } while (lVar15 != -0x30);
            *piVar18 = iVar4;
            piVar18[1] = iVar2;
            piVar18[2] = iVar14;
            piVar18[3] = iVar3;
            iVar12 = iVar12 + 1;
            *(undefined8 *)(piVar18 + 4) = uVar10;
            if (iVar12 == 8) {
              return piVar9 + 6 == param_2;
            }
          }
        }
        else if (iVar14 < piVar17[2]) goto LAB_109af4270;
      }
      else if (iVar4 < *piVar17) {
        iVar14 = piVar9[2];
        goto LAB_109af4270;
      }
      lVar11 = lVar11 + 0x18;
      piVar16 = piVar9 + 6;
      piVar17 = piVar9;
    } while (piVar9 + 6 != param_2);
  }
  return true;
}


