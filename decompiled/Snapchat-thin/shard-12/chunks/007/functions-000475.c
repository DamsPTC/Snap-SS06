/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109673bd4; end: 109673c1b;  */

void FUN_109673bd4(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  *(int *)(param_1 + 0x728) = param_2;
  *(int *)(param_1 + 0x72c) = param_3;
  auVar3._0_8_ = CONCAT44(param_3 / 2,param_2 / 2);
  *(undefined8 *)(param_1 + 0x730) = auVar3._0_8_;
  uVar1 = (ulong)*(uint *)(param_1 + 0x48);
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    puVar2 = *(undefined8 **)(param_1 + 0x6f8);
    auVar3._8_8_ = auVar3._0_8_;
    auVar3 = NEON_scvtf(auVar3,4);
    do {
      puVar2[1] = auVar3._8_8_;
      *puVar2 = auVar3._0_8_;
      puVar2 = puVar2 + 0x22;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 109673c1c; end: 109673e5f;  */

void FUN_109673c1c(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  
  *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_1 + 0x2a5234);
  fVar7 = *(float *)(param_1 + 0x2a5230);
  *(float *)(param_1 + 0x80c) = fVar7;
  *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_1 + 0x2a5238);
  *(undefined4 *)(param_1 + 0x73c) = *(undefined4 *)(param_1 + 0x2a5238);
  *(float *)(param_1 + 0x738) = fVar7;
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_1 + 0x2a5234);
  if (*(char *)(param_1 + 0x71d) == '\x01') {
    FUN_109674630(param_1 + 0x73c,param_1 + 0x738,param_1 + 0x740);
  }
  if ((*(int *)(param_1 + 0x2210) == -1) &&
     (*(undefined4 *)(param_1 + 0x2210) = 1, *(char *)(param_1 + 0x71c) == '\x01')) {
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar2 = 0;
      lVar3 = 0x10;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x6f8) + lVar3) = 0;
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 0x110;
      } while (lVar2 < *(int *)(param_1 + 0x48));
    }
    *(undefined1 *)(param_1 + 0x71c) = 0;
  }
  fVar4 = *(float *)(param_1 + 0x738);
  fVar15 = *(float *)(param_1 + 0x740);
  fVar16 = *(float *)(param_1 + 0x73c);
  lVar2 = *(long *)(param_1 + 0x6f0);
  if (lVar2 != 0) {
    if (param_3 != 0) {
      if (*(int *)(param_1 + 0x221c) < 1) {
        fVar15 = *(float *)(lVar2 + 0xea0);
        fVar7 = *(float *)(param_1 + 0x2218);
      }
      else {
        *(int *)(param_1 + 0x221c) = *(int *)(param_1 + 0x221c) + -1;
        fVar15 = *(float *)(lVar2 + 0xea0);
        *(float *)(param_1 + 0x2218) = fVar15;
        fVar7 = fVar15;
      }
      fVar15 = fVar15 - fVar7;
    }
    if (param_2 != 0) {
      lVar2 = *(long *)(*(long *)(lVar2 + 0x16ff0) + 0x1b92b18);
      fVar16 = *(float *)(lVar2 + 0x2d41c);
      fVar4 = *(float *)(lVar2 + 0x2d420);
      fVar15 = *(float *)(lVar2 + 0x2d424);
    }
  }
  ___sincosf_stret();
  fVar8 = fVar7;
  ___sincosf_stret();
  *(float *)(param_1 + 0x748) = fVar7 * fVar8;
  fVar9 = 3.3702806e+12;
  fVar16 = 3.1415927 - fVar16;
  ___sincosf_stret();
  *(float *)(param_1 + 0x74c) = -(fVar9 * fVar15) + fVar8 * fVar4 * fVar16;
  *(float *)(param_1 + 0x750) = fVar15 * fVar16 + fVar8 * fVar4 * fVar9;
  *(undefined4 *)(param_1 + 0x754) = 0;
  *(float *)(param_1 + 0x758) = fVar7 * fVar15;
  *(float *)(param_1 + 0x75c) = fVar8 * fVar9 + fVar15 * fVar4 * fVar16;
  *(float *)(param_1 + 0x760) = -(fVar16 * fVar8) + fVar15 * fVar4 * fVar9;
  *(undefined4 *)(param_1 + 0x764) = 0;
  *(float *)(param_1 + 0x768) = -fVar4;
  *(float *)(param_1 + 0x76c) = fVar7 * fVar16;
  *(float *)(param_1 + 0x770) = fVar7 * fVar9;
  *(undefined8 *)(param_1 + 0x77c) = 0;
  *(undefined8 *)(param_1 + 0x774) = 0;
  *(undefined4 *)(param_1 + 0x784) = 0x3f800000;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar2 = 0;
    lVar3 = 0x58;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x6f8) + lVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x750);
      uVar5 = *(undefined8 *)(param_1 + 0x748);
      uVar11 = *(undefined8 *)(param_1 + 0x760);
      uVar10 = *(undefined8 *)(param_1 + 0x758);
      uVar12 = *(undefined8 *)(param_1 + 0x768);
      uVar14 = *(undefined8 *)(param_1 + 0x780);
      uVar13 = *(undefined8 *)(param_1 + 0x778);
      puVar1[5] = *(undefined8 *)(param_1 + 0x770);
      puVar1[4] = uVar12;
      puVar1[7] = uVar14;
      puVar1[6] = uVar13;
      puVar1[1] = uVar6;
      *puVar1 = uVar5;
      puVar1[3] = uVar11;
      puVar1[2] = uVar10;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x110;
    } while (lVar2 < *(int *)(param_1 + 0x48));
  }
  return;
}



/* Entry: 109673e60; end: 109674067;  */

void FUN_109673e60(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x48);
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    puVar5 = (undefined8 *)(param_1 + 0x790);
    pbVar6 = (byte *)(param_2 + 0xf4);
    do {
      uVar9 = *(undefined8 *)(pbVar6 + -0xf4);
      puVar5[1] = uVar9;
      *puVar5 = uVar9;
      if ((pbVar6[-8] & 1) == 0) {
        uVar8 = (uint)*pbVar6;
        if (*pbVar6 == 1) goto LAB_109673eb4;
      }
      else {
        uVar8 = 0;
LAB_109673eb4:
        *(uint *)((long)puVar5 + -4) = uVar8;
      }
      puVar5 = (undefined8 *)((long)puVar5 + 0x14);
      pbVar6 = pbVar6 + 0x110;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if ((*(int *)(param_1 + 0x818) < 0x3e9) && (*(int *)(param_1 + 0x81c) < 0x3e9)) {
    uVar8 = *(uint *)(param_1 + 0x820) & 0xfffffdff;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x820) | 0x200;
  }
  *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_1 + 0x738);
  *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_1 + 0x73c);
  *(undefined4 *)(param_1 + 0x7f8) = 1;
  *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_1 + 0x720);
  *(uint *)(param_1 + 0xab8) = (uint)*(byte *)(param_1 + 0x71d);
  uVar8 = uVar8 & 0xfffffffe;
  if (*(int *)(param_1 + 0x2210) == -1) {
    uVar8 = uVar8 + 1;
  }
  *(uint *)(param_1 + 0x820) = uVar8;
  iVar1 = *(int *)(param_1 + 0x2a5224);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x820) = uVar8 & 0xffffcfff;
      *(float *)(param_1 + 0xad0) = *(float *)(param_1 + 0x2a5220) * 100.0;
      goto LAB_109673fb8;
    }
    if (iVar1 != 1) goto LAB_109673fb8;
    uVar8 = uVar8 & 0xffffcfff;
LAB_109673f74:
    uVar8 = uVar8 | 0x1000;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) goto LAB_109673fb8;
      lVar3 = param_1;
      FUN_1096748a4();
      uVar8 = *(uint *)(param_1 + 0x820) & 0xffffcfff | (int)lVar3 << 0xd;
      goto LAB_109673f74;
    }
    uVar8 = uVar8 | 0x3000;
  }
  *(uint *)(param_1 + 0x820) = uVar8;
  *(float *)(param_1 + 0xad4) = *(float *)(param_1 + 0x2a5220) * 100.0;
LAB_109673fb8:
  _memcpy(param_1 + 0x830,param_1 + 0x460,0x284);
  lVar3 = param_1 + 0x460;
  _bzero(lVar3,0x284);
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(float *)(param_1 + 0x82c) = (float)(lVar3 - *(long *)(param_1 + 0x2a5228)) / 1e+06;
  bVar2 = *(byte *)(param_1 + 0x705);
  if (((*(byte *)(param_1 + 0x704) & 1) == 0) && (bVar2 == 0)) {
    uVar8 = *(uint *)(param_1 + 0x820) & 0xffffffe7;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x820) & 0xffffffe7 |
            (uint)bVar2 << 4 | (uint)(bVar2 | *(byte *)(param_1 + 0x704)) << 3;
    uVar4 = (ulong)*(uint *)(param_1 + 0x48);
    if (0 < (int)*(uint *)(param_1 + 0x48)) {
      puVar7 = (undefined4 *)(param_1 + 0x78c);
      do {
        *puVar7 = 2;
        uVar4 = uVar4 - 1;
        puVar7 = puVar7 + 5;
      } while (uVar4 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(uint *)(param_1 + 0x820) =
       uVar8 & 0xfffffe00 | uVar8 & 0x3f | (*(uint *)(param_1 + 0x4c) & 7) << 6;
  return;
}



/* Entry: 109674068; end: 10967420f;  */

void FUN_109674068(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  
  puVar13 = (undefined1 *)(param_1 + 0x2220);
  FUN_109673e60();
  *(undefined4 *)(param_1 + 0x828) = 0;
  *(undefined1 **)(param_1 + 0x458) = puVar13;
  uVar5 = *(uint *)(param_1 + 0x728);
  uVar2 = *(uint *)(param_1 + 0x72c);
  uVar1 = uVar5 & 7;
  if (-1 < (int)-uVar5) {
    uVar1 = -(-uVar5 & 7);
  }
  uVar6 = uVar2 & 7;
  if (-1 < (int)-uVar2) {
    uVar6 = -(-uVar2 & 7);
  }
  if (0 < (int)uVar1 || 0 < (int)uVar6) {
    puVar4 = (undefined1 *)(param_1 + 0xe3220);
    uVar2 = uVar2 - uVar6;
    uVar5 = uVar5 - uVar1;
    if (0 < (int)uVar2) {
      uVar6 = 0;
      puVar10 = puVar4;
      do {
        puVar9 = puVar10;
        puVar14 = puVar13;
        uVar12 = uVar5;
        if (0 < (int)uVar5) {
          do {
            puVar13 = puVar14 + 1;
            puVar10 = puVar9 + 1;
            *puVar9 = *puVar14;
            uVar12 = uVar12 - 1;
            puVar9 = puVar10;
            puVar14 = puVar13;
          } while (uVar12 != 0);
        }
        puVar13 = puVar13 + (int)uVar1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar2);
    }
    *(uint *)(param_1 + 0x818) = uVar5;
    *(uint *)(param_1 + 0x81c) = uVar2;
    *(undefined1 **)(param_1 + 0x458) = puVar4;
    puVar13 = puVar4;
  }
  puVar4 = puVar13;
  if ((*(byte *)(param_1 + 0x821) >> 1 & 1) != 0) {
    puVar4 = (undefined1 *)(param_1 + 0x1c4220);
    FUN_1096745bc(puVar13,uVar5,uVar2,puVar4);
    *(undefined1 **)(param_1 + 0x458) = puVar4;
  }
  if (cRam000000011382a478 == '\x01') {
    *(undefined4 *)(param_1 + 0x788) = 1;
    uVar7 = (ulong)*(uint *)(param_1 + 0x48);
    if (0 < (int)*(uint *)(param_1 + 0x48)) {
      puVar8 = (undefined4 *)(param_1 + 0x78c);
      pcVar11 = (char *)(param_2 + 0xf4);
      do {
        if (*pcVar11 == '\x01') {
          *puVar8 = 1;
        }
        if (pcVar11[-8] == '\x01') {
          *puVar8 = 2;
        }
        puVar8 = puVar8 + 5;
        pcVar11 = pcVar11 + 0x110;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    cRam000000011382a478 = '\0';
  }
  FUN_109677ed0(*(undefined8 *)(param_1 + 0x2a5248),puVar4,param_1 + 0x788);
  uVar3 = *(undefined8 *)(param_1 + 0x2a5248);
  FUN_10967b280(uVar3,&UNK_10f57b953);
  *(undefined8 *)(param_1 + 0x6f0) = uVar3;
  if (*(int *)(param_1 + 0x788) == 0) {
    cRam000000011382a478 = '\x01';
  }
  if (*(char *)(param_1 + 0x744) < '2') {
    *(char *)(param_1 + 0x744) = *(char *)(param_1 + 0x744) + '\x01';
  }
  return;
}



/* Entry: 109674210; end: 10967427b;  */

void FUN_109674210(long param_1,uint param_2,int param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x788) = 0;
  *(undefined1 *)(param_1 + 0x744) = 0xff;
  *(uint *)(param_1 + 0x820) = *(uint *)(param_1 + 0x820) | 2;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined1 *)(param_1 + 0x71c) = 1;
  uVar1 = (ulong)*(uint *)(param_1 + 0x48);
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    puVar2 = (undefined4 *)(param_1 + 0x78c);
    lVar3 = 0x108;
    do {
      *puVar2 = 0;
      if (param_3 != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x6f8) + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x110;
      puVar2 = puVar2 + 5;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2210) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x78c) = 0;
  }
  return;
}



/* Entry: 10967427c; end: 1096745bb;  */

void FUN_10967427c(undefined8 *param_1,undefined8 *param_2,long param_3,float *param_4,
                  double *param_5,double *param_6)

{
  long lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_a0 [16];
  
  lVar1 = 0;
  param_5[0x3d] = 0.0;
  param_5[0x3c] = 0.0;
  param_5[0x3f] = 0.0;
  param_5[0x3e] = 0.0;
  param_5[0x39] = 0.0;
  param_5[0x38] = 0.0;
  param_5[0x3b] = 0.0;
  param_5[0x3a] = 0.0;
  param_5[0x35] = 0.0;
  param_5[0x34] = 0.0;
  param_5[0x37] = 0.0;
  param_5[0x36] = 0.0;
  param_5[0x31] = 0.0;
  param_5[0x30] = 0.0;
  param_5[0x33] = 0.0;
  param_5[0x32] = 0.0;
  param_5[0x2d] = 0.0;
  param_5[0x2c] = 0.0;
  param_5[0x2f] = 0.0;
  param_5[0x2e] = 0.0;
  param_5[0x29] = 0.0;
  param_5[0x28] = 0.0;
  param_5[0x2b] = 0.0;
  param_5[0x2a] = 0.0;
  param_5[0x25] = 0.0;
  param_5[0x24] = 0.0;
  param_5[0x27] = 0.0;
  param_5[0x26] = 0.0;
  param_5[0x21] = 0.0;
  param_5[0x20] = 0.0;
  param_5[0x23] = 0.0;
  param_5[0x22] = 0.0;
  param_5[0x1d] = 0.0;
  param_5[0x1c] = 0.0;
  param_5[0x1f] = 0.0;
  param_5[0x1e] = 0.0;
  param_5[0x19] = 0.0;
  param_5[0x18] = 0.0;
  param_5[0x1b] = 0.0;
  param_5[0x1a] = 0.0;
  param_5[0x15] = 0.0;
  param_5[0x14] = 0.0;
  param_5[0x17] = 0.0;
  param_5[0x16] = 0.0;
  param_5[0x11] = 0.0;
  param_5[0x10] = 0.0;
  param_5[0x13] = 0.0;
  param_5[0x12] = 0.0;
  param_5[0xd] = 0.0;
  param_5[0xc] = 0.0;
  param_5[0xf] = 0.0;
  param_5[0xe] = 0.0;
  param_5[9] = 0.0;
  param_5[8] = 0.0;
  param_5[0xb] = 0.0;
  param_5[10] = 0.0;
  param_5[5] = 0.0;
  param_5[4] = 0.0;
  param_5[7] = 0.0;
  param_5[6] = 0.0;
  param_5[1] = 0.0;
  *param_5 = 0.0;
  param_5[3] = 0.0;
  param_5[2] = 0.0;
  param_6[5] = 0.0;
  param_6[4] = 0.0;
  param_6[7] = 0.0;
  param_6[6] = 0.0;
  param_6[1] = 0.0;
  *param_6 = 0.0;
  param_6[3] = 0.0;
  param_6[2] = 0.0;
  do {
    fVar2 = *(float *)(param_3 + lVar1);
    if (fVar2 != 0.0) {
      dVar3 = (double)fVar2;
      fVar16 = (float)((ulong)*param_1 >> 0x20);
      fVar15 = (float)*param_1;
      dVar4 = (double)(param_4[2] + param_4[1] * fVar16 + fVar15 * *param_4);
      dVar5 = (double)(param_4[5] + param_4[4] * fVar16 + fVar15 * param_4[3]);
      dVar8 = (double)(1.0 / (param_4[7] * fVar16 + fVar15 * param_4[6] + 1.0));
      dVar6 = dVar8 * dVar8;
      dVar9 = (double)fVar15 * dVar8;
      dVar10 = (double)fVar16 * dVar8;
      dVar12 = (double)-fVar15 * dVar4 * dVar6;
      dVar11 = (double)-fVar16 * dVar4 * dVar6;
      dVar13 = (double)-fVar15 * dVar5 * dVar6;
      dVar6 = (double)-fVar16 * dVar5 * dVar6;
      dVar4 = dVar3 * dVar9;
      param_5[1] = param_5[1] + dVar10 * dVar4;
      *param_5 = *param_5 + dVar9 * dVar4;
      param_5[2] = param_5[2] + dVar8 * dVar4;
      param_5[6] = param_5[6] + dVar12 * dVar4;
      param_5[7] = param_5[7] + dVar11 * dVar4;
      dVar5 = dVar3 * dVar10;
      param_5[9] = param_5[9] + dVar5 * dVar10;
      param_5[10] = param_5[10] + dVar8 * dVar5;
      param_5[0xe] = param_5[0xe] + dVar12 * dVar5;
      param_5[0xf] = param_5[0xf] + dVar11 * dVar5;
      dVar7 = dVar3 * dVar8;
      param_5[0x12] = param_5[0x12] + dVar8 * dVar7;
      param_5[0x16] = param_5[0x16] + dVar12 * dVar7;
      param_5[0x17] = param_5[0x17] + dVar11 * dVar7;
      param_5[0x1e] = param_5[0x1e] + dVar13 * dVar4;
      param_5[0x1f] = param_5[0x1f] + dVar6 * dVar4;
      param_5[0x26] = param_5[0x26] + dVar13 * dVar5;
      param_5[0x27] = param_5[0x27] + dVar6 * dVar5;
      param_5[0x2e] = param_5[0x2e] + dVar13 * dVar7;
      param_5[0x2f] = param_5[0x2f] + dVar6 * dVar7;
      param_5[0x36] = param_5[0x36] + (dVar13 * dVar13 + dVar12 * dVar12) * dVar3;
      param_5[0x37] = param_5[0x37] + (dVar13 * dVar6 + dVar11 * dVar12) * dVar3;
      param_5[0x3f] = param_5[0x3f] + (dVar6 * dVar6 + dVar11 * dVar11) * dVar3;
      uVar14 = *param_2;
      FUN_10967e7a0(param_1,param_4,auStack_a0);
      dVar3 = (double)(((float)auStack_a0._0_8_ - (float)uVar14) * fVar2);
      dVar4 = (double)((SUB84(auStack_a0._0_8_,4) - (float)((ulong)uVar14 >> 0x20)) * fVar2);
      *param_6 = *param_6 + dVar9 * dVar3;
      param_6[1] = param_6[1] + dVar3 * dVar10;
      param_6[3] = param_6[3] + dVar9 * dVar4;
      param_6[2] = param_6[2] + dVar8 * dVar3;
      param_6[4] = param_6[4] + dVar10 * dVar4;
      param_6[5] = param_6[5] + dVar8 * dVar4;
      param_6[6] = dVar13 * dVar4 + dVar12 * dVar3 + param_6[6];
      param_6[7] = dVar6 * dVar4 + dVar11 * dVar3 + param_6[7];
    }
    lVar1 = lVar1 + 4;
    param_2 = (undefined8 *)((long)param_2 + 0xc);
    param_1 = (undefined8 *)((long)param_1 + 0xc);
  } while (lVar1 != 400);
  dVar3 = param_5[2];
  param_5[8] = param_5[1];
  param_5[0x23] = param_5[1];
  param_5[0x1c] = param_5[1];
  param_5[0x1b] = *param_5;
  param_5[0x30] = param_5[6];
  param_5[0x31] = param_5[0xe];
  param_5[0x34] = param_5[0x26];
  param_5[0x35] = param_5[0x2e];
  param_5[0x38] = param_5[7];
  param_5[0x39] = param_5[0xf];
  param_5[0x3c] = param_5[0x27];
  param_5[0x3d] = param_5[0x2f];
  param_5[0x1d] = dVar3;
  param_5[0x10] = dVar3;
  param_5[0x11] = param_5[10];
  param_5[0x2b] = dVar3;
  param_5[0x2c] = param_5[10];
  param_5[0x25] = param_5[10];
  param_5[0x24] = param_5[9];
  param_5[0x2d] = param_5[0x12];
  param_5[0x32] = param_5[0x16];
  param_5[0x33] = param_5[0x1e];
  param_5[0x3a] = param_5[0x17];
  param_5[0x3b] = param_5[0x1f];
  param_5[0x3e] = param_5[0x37];
  return;
}



/* Entry: 1096745bc; end: 10967462f;  */

void FUN_1096745bc(byte *param_1,int param_2,int param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  if (0 < param_3 >> 1) {
    iVar2 = 0;
    pbVar3 = param_1;
    do {
      pbVar3 = pbVar3 + param_2;
      puVar1 = param_4;
      iVar4 = param_2 >> 1;
      if (0 < param_2 >> 1) {
        do {
          param_4 = puVar1 + 1;
          *puVar1 = (char)((uint)param_1[1] + (uint)*param_1 + (uint)*pbVar3 + (uint)pbVar3[1] >> 2)
          ;
          param_1 = param_1 + 2;
          pbVar3 = pbVar3 + 2;
          iVar4 = iVar4 + -1;
          puVar1 = param_4;
        } while (iVar4 != 0);
      }
      param_1 = param_1 + param_2;
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_3 >> 1);
  }
  return;
}



/* Entry: 109674630; end: 1096748a3;  */

void FUN_109674630(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                  float *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar13 = (double)param_2;
  dVar11 = (double)-param_1;
  dVar12 = (double)-param_3;
  dVar7 = dVar13;
  _cos();
  dVar6 = dVar11;
  _sin();
  dVar1 = -(dVar7 * dVar6);
  _asin();
  dVar10 = -dVar1;
  dVar5 = dVar1;
  _cos();
  dVar8 = 0.20000000298023224;
  if (ABS(dVar5) <= 0.20000000298023224) {
    ___sincos_stret();
    _cos();
    _sin();
    dVar5 = dVar13 * -(dVar8 * dVar11) + dVar6 * dVar12;
    _sin();
    dVar6 = (dVar12 * -dVar7 + dVar5) / (dVar10 + -1.0);
    _asin();
    dVar7 = (dVar12 * -dVar7 - dVar5) / (dVar10 + 1.0);
    _asin();
    dVar8 = (dVar6 + dVar7) * 0.5;
    dVar6 = (dVar6 - dVar7) * 0.5;
  }
  else {
    _cos();
    dVar9 = (dVar11 * dVar7) / dVar5;
    dVar2 = -1.0;
    if ((-1.0 <= dVar9) && (dVar2 = dVar9, 1.0 < dVar9)) {
      dVar2 = 1.0;
    }
    _acos();
    dVar3 = dVar2;
    _sin();
    _sin();
    dVar4 = -dVar2;
    _sin();
    dVar8 = -dVar2;
    if (ABS(dVar5 * dVar3 - dVar13) <= ABS(dVar5 * dVar4 - dVar13)) {
      dVar8 = dVar2;
    }
    ___sincos_stret();
    dVar5 = (dVar6 * -(dVar12 * dVar13) + dVar11 * dVar9) / dVar5;
    dVar11 = -1.0;
    if ((-1.0 <= dVar5) && (dVar9 = 1.0, dVar11 = dVar5, 1.0 < dVar5)) {
      dVar11 = 1.0;
    }
    _acos();
    dVar5 = dVar11;
    ___sincos_stret();
    dVar13 = dVar8;
    dVar2 = dVar9;
    ___sincos_stret();
    _sin();
    dVar6 = -dVar11;
    if (ABS(-(dVar2 * dVar5) + dVar10 * dVar13 * dVar9 + dVar12 * dVar7) <=
        ABS(dVar5 * dVar2 + dVar10 * dVar13 * dVar9 + dVar12 * dVar7)) {
      dVar6 = dVar11;
    }
  }
  *param_5 = (float)dVar1;
  *param_4 = -(float)dVar8;
  *param_6 = -(float)dVar6;
  return;
}



/* Entry: 1096748a4; end: 10967493b;  */

bool FUN_1096748a4(float param_1,float param_2)

{
  float fVar1;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_68 [36];
  undefined1 auStack_44 [36];
  
  FUN_10967f7c8(-param_1,-param_2,0,auStack_44);
  FUN_109675c30(auStack_44,auStack_68);
  FUN_10967f908(&UNK_10dfd93b8,auStack_68,&fStack_74,1);
  FUN_10967f908(&UNK_10dfd93b8,auStack_44,&fStack_74,1);
  fVar1 = ABS(fStack_70);
  if (ABS(fStack_70) <= ABS(fStack_74)) {
    fVar1 = ABS(fStack_74);
  }
  return 2.74 < fVar1;
}



/* Entry: 10967493c; end: 109674a03;  */

void FUN_10967493c(long param_1,float *param_2,float *param_3,uint param_4,undefined8 param_5,
                  int param_6,float *param_7,int *param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = param_6 << 1 | 1;
  if (param_6 < 0) {
    fVar10 = 0.0;
  }
  else {
    iVar2 = (int)(param_2[1] + 0.5) - param_6;
    uVar4 = (ulong)(param_6 << 1 & ((param_6 << 1) >> 0x1f ^ 0xffffffffU) | 1);
    lVar5 = (long)iVar2;
    pfVar9 = (float *)(param_1 +
                      (long)(int)param_4 * (long)iVar2 * 4 + (long)(int)(*param_2 + 0.5) * 4 +
                      (long)param_6 * -4);
    fVar10 = 0.0;
    pfVar7 = param_3;
    uVar3 = uVar4;
    pfVar6 = pfVar9;
    do {
      do {
        fVar11 = *pfVar9;
        pfVar8 = pfVar7 + 1;
        *pfVar7 = fVar11;
        fVar10 = fVar10 + fVar11;
        uVar3 = uVar3 - 1;
        pfVar7 = pfVar8;
        pfVar9 = pfVar9 + 1;
      } while (uVar3 != 0);
      lVar5 = lVar5 + 1;
      pfVar9 = (float *)((long)pfVar6 +
                        (-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2));
      uVar3 = uVar4;
      pfVar6 = pfVar9;
    } while (lVar5 < (int)(iVar2 + uVar1));
  }
  uVar3 = (ulong)(uVar1 * uVar1);
  fVar11 = (float)uVar3;
  *param_8 = (int)(fVar10 / fVar11);
  do {
    *param_7 = *param_3 - (float)(int)(fVar10 / fVar11);
    uVar3 = uVar3 - 1;
    param_3 = param_3 + 1;
    param_7 = param_7 + 1;
  } while (uVar3 != 0);
  return;
}



/* Entry: 109674a04; end: 109674a93;  */

float FUN_109674a04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,int param_6)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = param_6 << 1 | 1;
  FUN_10967493c(param_2,param_3,param_1 + 4);
  uVar1 = uVar1 * uVar1;
  fVar4 = 0.0;
  fVar5 = 0.0;
  uVar2 = (ulong)uVar1;
  pfVar3 = (float *)(param_1 + 0x108c);
  do {
    fVar6 = *pfVar3;
    fVar4 = fVar4 + fVar6;
    fVar5 = fVar5 + fVar6 * fVar6;
    uVar2 = uVar2 - 1;
    pfVar3 = pfVar3 + 1;
  } while (uVar2 != 0);
  return SQRT((fVar5 - (fVar4 * fVar4) / (float)uVar1) / (float)(uVar1 - 1));
}



/* Entry: 109674a94; end: 109674c27;  */

float FUN_109674a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,float *param_7,float *param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_74 [4];
  
  FUN_10967493c(param_2,param_3,param_1 + 4,param_5,param_5,param_9,(float *)(param_1 + 0x108c),
                auStack_74);
  iVar7 = 0;
  iVar9 = 0;
  uVar1 = param_9 << 1 | 1;
  iVar5 = -10;
  fVar15 = -1.0;
  do {
    iVar6 = -10;
    iVar8 = iVar7;
    do {
      uStack_80 = CONCAT44((float)((ulong)*(undefined8 *)param_7 >> 0x20) + (float)iVar5,
                           (float)*(undefined8 *)param_7 + (float)iVar6);
      uStack_78 = 1;
      FUN_10967493c(param_4,&uStack_80,param_1 + 0x848,param_5);
      fVar10 = 0.0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      pfVar3 = (float *)(param_1 + 0x108c);
      uVar4 = (ulong)(uVar1 * uVar1);
      do {
        fVar13 = *pfVar3;
        fVar14 = pfVar3[0x211];
        fVar10 = fVar10 + fVar13 * fVar14;
        fVar11 = fVar11 + fVar13 * fVar13;
        fVar12 = fVar12 + fVar14 * fVar14;
        pfVar3 = pfVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      fVar10 = fVar10 / SQRT(fVar11 * fVar12);
      iVar7 = iVar5;
      iVar2 = iVar6;
      if (fVar10 <= fVar15) {
        iVar7 = iVar8;
        iVar2 = iVar9;
        fVar10 = fVar15;
      }
      fVar15 = fVar10;
      iVar9 = iVar2;
      iVar6 = iVar6 + 1;
      iVar8 = iVar7;
    } while (iVar6 != 0xb);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xb);
  fVar10 = param_7[1];
  *param_8 = *param_7 + (float)iVar9;
  param_8[1] = fVar10 + (float)iVar7;
  param_8[2] = 1.4013e-45;
  return fVar15;
}



/* Entry: 109674c28; end: 109674d43;  */

void FUN_109674c28(long param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(int **)(param_1 + 0x67d0) = param_2;
  *(long *)(param_1 + 0x67c8) = param_3;
  iVar7 = param_2[0x1b];
  *(int *)(param_1 + 0x682c) = iVar7;
  *(undefined4 *)(param_1 + 0x6830) = 0;
  *(float *)(param_1 + 0x6834) = (float)(*(int *)(param_1 + 0x6824) >> 1);
  *(undefined4 *)(param_1 + 0x6838) = 0;
  *(int *)(param_1 + 0x683c) = iVar7;
  *(float *)(param_1 + 0x6840) = (float)(*(int *)(param_1 + 0x6828) >> 1);
  *(undefined8 *)(param_1 + 0x6844) = 0;
  *(undefined4 *)(param_1 + 0x684c) = 0x3f800000;
  FUN_109675c30(param_1 + 0x682c,param_1 + 0x6850);
  *(undefined8 *)(param_1 + 0x681c) = 0;
  _bzero(*(undefined8 *)(param_1 + 0x67c8),0x17b28);
  lVar3 = 0;
  *(undefined8 *)(param_3 + 0xf80) = 0x11382a480;
  *(undefined4 *)(param_1 + 0x6814) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x67e0);
  do {
    if (*(int *)((long)param_2 + lVar3 + 4) == 2) {
      *(undefined8 *)(puVar4 + -2) = *(undefined8 *)((long)param_2 + lVar3 + 0x10);
      *puVar4 = 1;
      *(undefined4 *)(param_1 + 0x6814) = 1;
    }
    else {
      *(undefined8 *)(puVar4 + -2) = 0;
      *puVar4 = 0;
    }
    lVar3 = lVar3 + 0x14;
    puVar4 = puVar4 + 3;
  } while (lVar3 != 100);
  if (*param_2 == 0) {
    *(int *)(param_1 + 0x6818) = param_2[0x20];
  }
  lVar3 = *(long *)(param_1 + 0x67d0);
  iVar2 = *(int *)(param_1 + 0x42b604);
  iVar7 = 0;
  if (iVar2 != 0xb) {
    iVar7 = iVar2 + 1;
  }
  *(int *)(param_1 + 0x42b604) = iVar7;
  pfVar6 = (float *)(param_1 + 0x42b514 + (long)iVar7 * 0xc);
  uVar9 = *(undefined8 *)(lVar3 + 0x74);
  uVar10 = NEON_rev64(uVar9,4);
  *(undefined8 *)pfVar6 = uVar10;
  pfVar6[2] = *(float *)(lVar3 + 0x7c);
  lVar1 = param_1 + (long)iVar7 * 4;
  *(undefined4 *)(lVar1 + 0x42b5a4) = *(undefined4 *)(lVar3 + 0x6c);
  pfVar5 = (float *)(param_1 + 0x42b514 + (long)iVar2 * 0xc);
  fVar8 = (float)uVar9 - pfVar5[1];
  *(float *)(lVar1 + 0x42b5d4) =
       SQRT((*pfVar6 - *pfVar5) * (*pfVar6 - *pfVar5) + fVar8 * fVar8 +
            (pfVar6[2] - pfVar5[2]) * (pfVar6[2] - pfVar5[2])) * 57.29578;
  return;
}



/* Entry: 109674d44; end: 109674e5b;  */

void FUN_109674d44(long param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  
  *(ulong *)(param_2 + 0xb) =
       CONCAT44((int)((long)*(undefined8 *)(param_1 + 0x6824) >> 0x22),
                (int)*(undefined8 *)(param_1 + 0x6824) >> 2);
  uVar4 = 7;
  if (param_3 != 0) {
    uVar4 = 4;
  }
  *param_2 = uVar4;
  param_2[1] = 1;
  param_2[4] = 10;
  *(undefined8 *)(param_2 + 2) = 0x3dcccccd3c23d70a;
  *(undefined8 *)(param_2 + 5) = 0x41200000;
  *(undefined8 *)(param_2 + 9) = 0x400000002;
  iVar6 = param_2[9];
  uVar3 = iVar6 - 2;
  if (iVar6 < 2) {
    iVar6 = 5;
  }
  else {
    iVar1 = param_2[10];
    iVar7 = iVar6 + -1;
    iVar5 = 2;
    do {
      iVar5 = (int)(((float)iVar5 + 2.0) / (float)iVar1 + 0.99);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    auVar9._8_4_ = 1;
    auVar9._0_8_ = 0x100000001;
    auVar9._12_4_ = 1;
    iVar7 = 4;
    do {
      auVar10 = auVar9;
      auVar9._0_4_ = auVar10._0_4_ * iVar1;
      auVar9._4_4_ = auVar10._4_4_ * iVar1;
      auVar9._8_4_ = auVar10._8_4_ * iVar1;
      auVar9._12_4_ = auVar10._12_4_ * iVar1;
      iVar7 = iVar7 + -4;
    } while ((iVar6 + 2U & 0xfffffffc) + iVar7 != 4);
    uVar2 = -iVar7;
    uVar11 = (undefined1)(uVar2 >> 8);
    uVar12 = (undefined1)(uVar2 >> 0x10);
    uVar13 = (undefined1)(uVar2 >> 0x18);
    auVar8._0_4_ = -(uint)(uVar3 < uVar2);
    auVar8._4_4_ = -(uint)(uVar3 < ((uint)(CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar11,CONCAT14(
                                                  (char)uVar2,uVar2)))) >> 0x20) | 1));
    auVar8._8_4_ = -(uint)(uVar3 < (uVar2 | 2));
    auVar8._12_4_ =
         -(uint)(uVar3 < ((uint)(CONCAT17(uVar13,CONCAT16(uVar12,CONCAT15(uVar11,CONCAT14((char)
                                                  uVar2,uVar2)))) >> 0x20) | 3));
    auVar9 = auVar9 ^ (auVar9 ^ auVar10) & auVar8;
    auVar10 = NEON_ext(auVar9,auVar9,8,1);
    iVar6 = auVar9._0_4_ * auVar10._0_4_ * auVar9._4_4_ * auVar10._4_4_ * (iVar5 + 3);
  }
  param_2[7] = iVar6;
  param_2[8] = iVar6;
  return;
}



/* Entry: 109674e5c; end: 10967553b;  */

void FUN_109674e5c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3,ulong *param_4
                  )

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [12];
  ulong uVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined4 uVar34;
  undefined8 uVar33;
  float fVar35;
  undefined8 uVar36;
  ulong uVar37;
  double dVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  float fStack_cb0;
  ulong uStack_ca0;
  ulong uStack_c98;
  undefined8 uStack_c90;
  long *plStack_b40;
  long *plStack_b38;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  double *pdStack_9d0;
  double *pdStack_9c8;
  long *plStack_9c0;
  long *plStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a8;
  ulong uStack_9a0;
  undefined8 *puStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined1 *puStack_970;
  undefined1 *puStack_968;
  float *pfStack_960;
  float *pfStack_958;
  undefined8 uStack_950;
  long lStack_948;
  ulong uStack_940;
  undefined8 *puStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined1 *puStack_910;
  undefined1 *puStack_908;
  double *pdStack_900;
  double *pdStack_8f8;
  undefined8 uStack_8f0;
  long lStack_8e8;
  ulong uStack_8e0;
  undefined8 *puStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 auStack_8b8 [512];
  double adStack_6b8 [64];
  undefined1 auStack_4b8 [512];
  undefined1 auStack_2b8 [64];
  float afStack_278 [100];
  double dStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double dStack_b8;
  double dStack_b0;
  long alStack_a8 [3];
  
  iVar17 = 0;
  iVar18 = 0;
  alStack_a8[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_cc8 = param_4[1];
  uStack_cd0 = *param_4;
  uStack_cb8 = param_4[3];
  uStack_cc0 = param_4[2];
  fStack_cb0 = *(float *)(param_4 + 4);
  bVar5 = true;
  dVar38 = 1.0000000116860974e-07;
  uVar37 = 0x49742400;
  do {
    uStack_ca0 = uStack_ca0 & 0xffffffff00000000;
    FUN_1092ef208(&plStack_b40,100,&uStack_ca0);
    lVar19 = 0;
    lVar20 = 0;
    uStack_ca0 = 0;
    uStack_c98 = 0;
    uStack_c90 = 0;
    do {
      if (*(float *)(param_3 + lVar20) != 0.0) {
        fVar21 = *(float *)(*param_1 + lVar19);
        fVar26 = *(float *)((long)(*param_1 + lVar19) + 4);
        fVar39 = fStack_cb0 + fVar26 * uStack_cb8._4_4_ + (float)uStack_cb8 * fVar21;
        fVar27 = 8388608.0;
        if (fVar39 != 0.0) {
          fVar27 = 1.0 / fVar39;
        }
        fVar39 = ((float)uStack_cc8 + fVar26 * uStack_cd0._4_4_ + (float)uStack_cd0 * fVar21) *
                 fVar27 - *(float *)(*param_2 + lVar19);
        fVar27 = (uStack_cc0._4_4_ + fVar26 * (float)uStack_cc0 + uStack_cc8._4_4_ * fVar21) *
                 fVar27 - *(float *)((long)(*param_2 + lVar19) + 4);
        fVar27 = fVar39 * fVar39 + fVar27 * fVar27;
        uStack_920 = CONCAT44(uStack_920._4_4_,fVar27);
        *(float *)((long)plStack_b40 + lVar20) = fVar27;
        FUN_1092c9a40(&uStack_ca0,&uStack_920);
      }
      lVar20 = lVar20 + 4;
      lVar19 = lVar19 + 0xc;
    } while (lVar20 != 400);
    if (uStack_c98 == uStack_ca0) {
      fVar27 = 0.0;
    }
    else {
      __ZNSt3__16__sortIRNS_6__lessIffEEPfEEvT0_S5_T_(uStack_ca0,uStack_c98,&uStack_920);
      fVar27 = *(float *)(uStack_ca0 + ((long)(uStack_c98 - uStack_ca0) >> 3) * 4) * 1.4826022 *
               1.4826022 * 21.950163;
    }
    uVar22 = (ulong)(uint)fVar27;
    lVar20 = 0;
    do {
      *(undefined4 *)((long)afStack_278 + lVar20) = 0;
      fVar21 = 0.0;
      if ((*(float *)(param_3 + lVar20) != 0.0) && (*(float *)((long)plStack_b40 + lVar20) < fVar27)
         ) {
        fVar21 = 1.0 - (1.0 / fVar27) * *(float *)((long)plStack_b40 + lVar20);
        fVar21 = fVar21 * fVar21;
      }
      *(float *)((long)afStack_278 + lVar20) = *(float *)(param_3 + lVar20) * fVar21;
      lVar20 = lVar20 + 4;
    } while (lVar20 != 400);
    if (uStack_ca0 != 0) {
      uStack_c98 = uStack_ca0;
      __ZdlPv();
    }
    if (plStack_b40 != (long *)0x0) {
      plStack_b38 = plStack_b40;
      __ZdlPv(plStack_b40);
    }
    if ((bVar5) &&
       (FUN_10967427c(param_1,param_2,afStack_278,&uStack_cd0,auStack_4b8,auStack_2b8), iVar17 == 0)
       ) {
      FUN_10967f990(param_1,param_2,afStack_278,param_4);
      uVar37 = uVar22;
    }
    _memcpy(adStack_6b8,auStack_4b8,0x200);
    lVar20 = 0;
    do {
      *(double *)((long)adStack_6b8 + lVar20) = dVar38 + *(double *)((long)adStack_6b8 + lVar20);
      lVar20 = lVar20 + 0x48;
    } while (lVar20 != 0x240);
    FUN_109675d10(adStack_6b8,8,auStack_8b8);
    puStack_910 = auStack_8b8;
    uStack_8f0 = 0;
    lStack_8e8 = 0;
    uStack_918 = 0x800000008;
    uStack_920 = 0x242ff4006;
    uStack_8c8 = 8;
    uStack_8d0 = 0x40;
    puStack_970 = auStack_2b8;
    uStack_950 = 0;
    lStack_948 = 0;
    uStack_978 = 0x100000008;
    uStack_980 = 0x242ff4006;
    uStack_928 = 8;
    uStack_930 = 8;
    uStack_9b0 = 0;
    lStack_9a8 = 0;
    uStack_9d8 = 0x100000008;
    uStack_9e0 = 0x242ff4006;
    uStack_988 = 8;
    uStack_990 = 8;
    pdStack_9d0 = &dStack_e8;
    pdStack_9c8 = &dStack_e8;
    plStack_9c0 = alStack_a8;
    plStack_9b8 = alStack_a8;
    uStack_9a0 = (ulong)&uStack_9e0 | 8;
    puStack_998 = &uStack_990;
    puStack_968 = puStack_970;
    pfStack_960 = afStack_278;
    pfStack_958 = afStack_278;
    uStack_940 = (ulong)&uStack_980 | 8;
    puStack_938 = &uStack_930;
    puStack_908 = puStack_910;
    pdStack_900 = adStack_6b8;
    pdStack_8f8 = adStack_6b8;
    uStack_8e0 = (ulong)&uStack_920 | 8;
    puStack_8d8 = &uStack_8d0;
    FUN_109a7d4d8(&uStack_ca0,&uStack_920);
    FUN_109a7dc0c(&plStack_b40,&uStack_ca0,&uStack_980);
    (**(code **)(*plStack_b40 + 0x18))(plStack_b40,&plStack_b40,&uStack_9e0,0xffffffff);
    FUN_10918eb6c(&plStack_b40);
    FUN_10918eb6c(&uStack_ca0);
    if (lStack_9a8 != 0) {
      piVar2 = (int *)(lStack_9a8 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_9e0);
      }
    }
    lStack_9a8 = 0;
    pdStack_9c8 = (double *)0x0;
    pdStack_9d0 = (double *)0x0;
    plStack_9b8 = (long *)0x0;
    plStack_9c0 = (long *)0x0;
    if (0 < uStack_9e0._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_9a0 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_9e0._4_4_);
    }
    if (puStack_998 != &uStack_990 && puStack_998 != (undefined8 *)0x0) {
      _free(puStack_998[-1]);
    }
    if (lStack_948 != 0) {
      piVar2 = (int *)(lStack_948 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_980);
      }
    }
    lStack_948 = 0;
    puStack_968 = (undefined1 *)0x0;
    puStack_970 = (undefined1 *)0x0;
    pfStack_958 = (float *)0x0;
    pfStack_960 = (float *)0x0;
    if (0 < uStack_980._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_940 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_980._4_4_);
    }
    if (puStack_938 != &uStack_930 && puStack_938 != (undefined8 *)0x0) {
      _free(puStack_938[-1]);
    }
    if (lStack_8e8 != 0) {
      piVar2 = (int *)(lStack_8e8 + 0x14);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_920);
      }
    }
    lStack_8e8 = 0;
    puStack_908 = (undefined1 *)0x0;
    puStack_910 = (undefined1 *)0x0;
    pdStack_8f8 = (double *)0x0;
    pdStack_900 = (double *)0x0;
    if (0 < uStack_920._4_4_) {
      lVar20 = 0;
      do {
        *(undefined4 *)(uStack_8e0 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < uStack_920._4_4_);
    }
    if (puStack_8d8 != &uStack_8d0 && puStack_8d8 != (undefined8 *)0x0) {
      _free(puStack_8d8[-1]);
    }
    auVar7._8_4_ = uStack_e0;
    auVar7._0_8_ = dStack_e8;
    auVar7._12_4_ = uStack_dc;
    fVar27 = (float)dStack_d8;
    fVar26 = (float)dStack_d0;
    uVar23 = CONCAT44((float)(uStack_cd0 >> 0x20) + (float)auVar7._8_8_,
                      (float)uStack_cd0 + (float)dStack_e8);
    fVar25 = (float)uStack_cc8;
    uVar22 = uStack_cc8 >> 0x20;
    auVar32._8_4_ = uStack_c0;
    auVar32._0_8_ = dStack_c8;
    auVar32._12_4_ = uStack_bc;
    fVar29 = (float)dStack_c8;
    fVar21 = (float)dStack_b8;
    fVar39 = (float)dStack_b0;
    fVar31 = (float)uStack_cc0;
    uVar12 = uStack_cc0 >> 0x20;
    fVar28 = (float)uStack_cb8;
    uVar13 = uStack_cb8 >> 0x20;
    pauVar16 = (undefined1 (*) [16])afStack_278;
    pauVar14 = param_1;
    pauVar15 = param_2;
    uVar24 = uVar23;
    FUN_10967f990();
    if ((float)uVar37 <= (float)uVar24) {
      if (3 < iVar18) break;
      bVar5 = false;
      dVar38 = dVar38 * 10.0;
      iVar18 = iVar18 + 1;
    }
    else {
      iVar18 = 0;
      fStack_cb0 = 1.0;
      bVar5 = true;
      dVar38 = dVar38 / 10.0;
      uVar37 = uVar24;
      uStack_cd0 = uVar23;
      uStack_cc8 = CONCAT44((float)uVar22 + fVar26,fVar25 + fVar27);
      uStack_cc0 = CONCAT44((float)uVar12 + (float)auVar32._8_8_,fVar31 + fVar29);
      uStack_cb8 = CONCAT44((float)uVar13 + fVar39,fVar28 + fVar21);
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 != 0x32);
  param_4[1] = uStack_cc8;
  *param_4 = uStack_cd0;
  param_4[3] = uStack_cb8;
  param_4[2] = uStack_cc0;
  *(float *)(param_4 + 4) = fStack_cb0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_a8[0]) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pauVar15 != 0) {
    func_0x000104bd46a0();
    if (uStack_ca0 != 0) {
      uStack_c98 = uStack_ca0;
      __ZdlPv();
    }
    if (plStack_b40 != (long *)0x0) {
      plStack_b38 = plStack_b40;
      __ZdlPv();
    }
  }
  __Unwind_Resume();
  if ((pauVar16 == pauVar14) || (pauVar16 == pauVar15)) {
    auVar7 = *pauVar15;
    pauVar6 = pauVar15 + 1;
    uVar30 = (undefined4)((ulong)*(undefined8 *)(pauVar15[1] + 8) >> 0x20);
    auVar11 = *(undefined1 (*) [12])*pauVar6;
    fVar25 = (float)*(undefined8 *)*pauVar6;
    fVar26 = *(float *)(*pauVar15 + 4);
    fVar39 = *(float *)(pauVar15[1] + 0xc);
    fVar27 = *(float *)pauVar15[2];
    uVar36 = *(undefined8 *)(*pauVar14 + 8);
    fVar31 = *(float *)(*pauVar14 + 0xc);
    uVar37 = *(ulong *)pauVar14[1];
    auVar40._12_4_ = uVar30;
    auVar40._0_12_ = *(undefined1 (*) [12])*pauVar6;
    auVar40 = NEON_ext(auVar7,auVar40,0xc,1);
    uVar34 = (undefined4)((ulong)*(undefined8 *)*pauVar14 >> 0x20);
    auVar43._4_4_ = uVar34;
    auVar43._0_4_ = uVar34;
    auVar43._8_4_ = uVar34;
    auVar43._12_4_ = uVar34;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar37;
    auVar44 = NEON_ext(auVar43,auVar44,4,1);
    fVar46 = (float)*(undefined8 *)*pauVar14;
    fVar28 = auVar7._0_4_;
    fVar35 = (float)uVar36;
    auVar45._12_4_ = uVar30;
    auVar45._0_12_ = *(undefined1 (*) [12])*pauVar6;
    auVar45 = NEON_rev64(auVar45,4);
    uVar33 = *(undefined8 *)(*pauVar15 + 8);
    uVar42 = *(undefined8 *)(pauVar15[1] + 4);
    pauVar1 = (undefined1 (*) [12])(pauVar14[1] + 4);
    fVar48 = (float)*(undefined8 *)(pauVar14[1] + 0xc);
    uVar30 = (undefined4)((ulong)*(undefined8 *)(pauVar14[1] + 0xc) >> 0x20);
    uVar10 = *(undefined8 *)*pauVar1;
    fVar47 = (float)uVar10;
    fVar49 = *(float *)pauVar14[2];
    fVar50 = *(float *)(pauVar14[1] + 8);
    fVar41 = (float)uVar42;
    auVar8._12_4_ = uVar30;
    auVar8._0_12_ = *pauVar1;
    auVar9._12_4_ = uVar30;
    auVar9._0_12_ = *pauVar1;
    auVar32 = NEON_ext(auVar8,auVar9,8,1);
    fVar29 = (float)uVar33;
    fVar21 = fVar41 * fVar48 + fVar29 * fVar50 + fVar27 * fVar49;
    *(float *)(*pauVar16 + 8) =
         auVar40._8_4_ * auVar44._8_4_ + auVar7._8_4_ * fVar46 + fVar27 * fVar35;
    *(float *)(*pauVar16 + 0xc) =
         auVar7._12_4_ * auVar44._12_4_ + fVar28 * (float)((ulong)uVar36 >> 0x20) +
         auVar45._12_4_ * (float)(uVar37 >> 0x20);
    *(float *)*pauVar16 = auVar40._0_4_ * auVar44._0_4_ + fVar28 * fVar46 + auVar11._8_4_ * fVar35;
    *(float *)(*pauVar16 + 4) =
         auVar40._4_4_ * auVar44._4_4_ + auVar7._4_4_ * fVar46 + auVar45._8_4_ * fVar35;
    *(float *)pauVar16[1] = fVar25 * (float)uVar37 + fVar26 * fVar31 + fVar39 * fVar47;
    *(ulong *)(pauVar16[1] + 4) =
         CONCAT44((float)((ulong)uVar33 >> 0x20) * fVar48 + fVar28 * (float)((ulong)uVar10 >> 0x20)
                  + (float)((ulong)uVar42 >> 0x20) * auVar32._4_4_,
                  fVar41 * (float)uVar37 + fVar29 * fVar31 + fVar27 * fVar47);
    *(float *)(pauVar16[1] + 0xc) = fVar25 * fVar48 + fVar26 * fVar50 + fVar39 * fVar49;
  }
  else {
    *(float *)*pauVar16 =
         *(float *)(*pauVar14 + 4) * *(float *)(*pauVar15 + 0xc) +
         *(float *)*pauVar15 * *(float *)*pauVar14 +
         *(float *)(pauVar15[1] + 8) * *(float *)(*pauVar14 + 8);
    *(float *)(*pauVar16 + 4) =
         *(float *)(*pauVar14 + 4) * *(float *)pauVar15[1] +
         *(float *)(*pauVar15 + 4) * *(float *)*pauVar14 +
         *(float *)(pauVar15[1] + 0xc) * *(float *)(*pauVar14 + 8);
    *(float *)(*pauVar16 + 8) =
         *(float *)(*pauVar14 + 4) * *(float *)(pauVar15[1] + 4) +
         *(float *)(*pauVar15 + 8) * *(float *)*pauVar14 +
         *(float *)pauVar15[2] * *(float *)(*pauVar14 + 8);
    *(float *)(*pauVar16 + 0xc) =
         *(float *)pauVar14[1] * *(float *)(*pauVar15 + 0xc) +
         *(float *)*pauVar15 * *(float *)(*pauVar14 + 0xc) +
         *(float *)(pauVar15[1] + 8) * *(float *)(pauVar14[1] + 4);
    *(float *)pauVar16[1] =
         *(float *)pauVar14[1] * *(float *)pauVar15[1] +
         *(float *)(*pauVar15 + 4) * *(float *)(*pauVar14 + 0xc) +
         *(float *)(pauVar15[1] + 0xc) * *(float *)(pauVar14[1] + 4);
    *(float *)(pauVar16[1] + 4) =
         *(float *)pauVar14[1] * *(float *)(pauVar15[1] + 4) +
         *(float *)(*pauVar15 + 8) * *(float *)(*pauVar14 + 0xc) +
         *(float *)pauVar15[2] * *(float *)(pauVar14[1] + 4);
    *(float *)(pauVar16[1] + 8) =
         *(float *)(pauVar14[1] + 0xc) * *(float *)(*pauVar15 + 0xc) +
         *(float *)*pauVar15 * *(float *)(pauVar14[1] + 8) +
         *(float *)(pauVar15[1] + 8) * *(float *)pauVar14[2];
    *(float *)(pauVar16[1] + 0xc) =
         *(float *)(pauVar14[1] + 0xc) * *(float *)pauVar15[1] +
         *(float *)(*pauVar15 + 4) * *(float *)(pauVar14[1] + 8) +
         *(float *)(pauVar15[1] + 0xc) * *(float *)pauVar14[2];
    fVar21 = *(float *)(pauVar14[1] + 0xc) * *(float *)(pauVar15[1] + 4) +
             *(float *)(*pauVar15 + 8) * *(float *)(pauVar14[1] + 8) +
             *(float *)pauVar15[2] * *(float *)pauVar14[2];
  }
  *(float *)pauVar16[2] = fVar21;
  return;
}



/* Entry: 10967553c; end: 10967576f;  */

void FUN_10967553c(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined4 uVar19;
  undefined8 uVar18;
  float fVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  if ((param_3 == param_1) || (param_3 == param_2)) {
    auVar7 = *param_2;
    pauVar2 = param_2 + 1;
    uVar13 = *(undefined8 *)(param_2[1] + 8);
    fVar12 = (float)*(undefined8 *)*pauVar2;
    fVar10 = *(float *)(*param_2 + 4);
    fVar11 = *(float *)(param_2[1] + 0xc);
    fVar9 = *(float *)param_2[2];
    uVar21 = *(undefined8 *)(*param_1 + 8);
    fVar14 = *(float *)(*param_1 + 0xc);
    uVar3 = *(ulong *)param_1[1];
    auVar22 = NEON_ext(auVar7,*pauVar2,0xc,1);
    uVar19 = (undefined4)((ulong)*(undefined8 *)*param_1 >> 0x20);
    auVar25._4_4_ = uVar19;
    auVar25._0_4_ = uVar19;
    auVar25._8_4_ = uVar19;
    auVar25._12_4_ = uVar19;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar3;
    auVar25 = NEON_ext(auVar25,auVar16,4,1);
    fVar27 = (float)*(undefined8 *)*param_1;
    fVar15 = auVar7._0_4_;
    fVar20 = (float)uVar21;
    auVar26 = NEON_rev64(*pauVar2,4);
    uVar18 = *(undefined8 *)(*param_2 + 8);
    uVar24 = *(undefined8 *)(param_2[1] + 4);
    pauVar1 = (undefined1 (*) [12])(param_1[1] + 4);
    fVar29 = (float)*(undefined8 *)(param_1[1] + 0xc);
    uVar19 = (undefined4)((ulong)*(undefined8 *)(param_1[1] + 0xc) >> 0x20);
    uVar6 = *(undefined8 *)*pauVar1;
    fVar28 = (float)uVar6;
    fVar30 = *(float *)param_1[2];
    fVar31 = *(float *)(param_1[1] + 8);
    fVar23 = (float)uVar24;
    auVar4._12_4_ = uVar19;
    auVar4._0_12_ = *pauVar1;
    auVar5._12_4_ = uVar19;
    auVar5._0_12_ = *pauVar1;
    auVar16 = NEON_ext(auVar4,auVar5,8,1);
    fVar17 = (float)uVar18;
    fVar8 = fVar23 * fVar29 + fVar17 * fVar31 + fVar9 * fVar30;
    *(float *)(*param_3 + 8) =
         auVar22._8_4_ * auVar25._8_4_ + auVar7._8_4_ * fVar27 + fVar9 * fVar20;
    *(float *)(*param_3 + 0xc) =
         auVar7._12_4_ * auVar25._12_4_ + fVar15 * (float)((ulong)uVar21 >> 0x20) +
         auVar26._12_4_ * (float)(uVar3 >> 0x20);
    *(float *)*param_3 = auVar22._0_4_ * auVar25._0_4_ + fVar15 * fVar27 + (float)uVar13 * fVar20;
    *(float *)(*param_3 + 4) =
         auVar22._4_4_ * auVar25._4_4_ + auVar7._4_4_ * fVar27 + auVar26._8_4_ * fVar20;
    *(float *)param_3[1] = fVar12 * (float)uVar3 + fVar10 * fVar14 + fVar11 * fVar28;
    *(ulong *)(param_3[1] + 4) =
         CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar29 + fVar15 * (float)((ulong)uVar6 >> 0x20) +
                  (float)((ulong)uVar24 >> 0x20) * auVar16._4_4_,
                  fVar23 * (float)uVar3 + fVar17 * fVar14 + fVar9 * fVar28);
    *(float *)(param_3[1] + 0xc) = fVar12 * fVar29 + fVar10 * fVar31 + fVar11 * fVar30;
  }
  else {
    *(float *)*param_3 =
         *(float *)(*param_1 + 4) * *(float *)(*param_2 + 0xc) +
         *(float *)*param_2 * *(float *)*param_1 +
         *(float *)(param_2[1] + 8) * *(float *)(*param_1 + 8);
    *(float *)(*param_3 + 4) =
         *(float *)(*param_1 + 4) * *(float *)param_2[1] +
         *(float *)(*param_2 + 4) * *(float *)*param_1 +
         *(float *)(param_2[1] + 0xc) * *(float *)(*param_1 + 8);
    *(float *)(*param_3 + 8) =
         *(float *)(*param_1 + 4) * *(float *)(param_2[1] + 4) +
         *(float *)(*param_2 + 8) * *(float *)*param_1 +
         *(float *)param_2[2] * *(float *)(*param_1 + 8);
    *(float *)(*param_3 + 0xc) =
         *(float *)param_1[1] * *(float *)(*param_2 + 0xc) +
         *(float *)*param_2 * *(float *)(*param_1 + 0xc) +
         *(float *)(param_2[1] + 8) * *(float *)(param_1[1] + 4);
    *(float *)param_3[1] =
         *(float *)param_1[1] * *(float *)param_2[1] +
         *(float *)(*param_2 + 4) * *(float *)(*param_1 + 0xc) +
         *(float *)(param_2[1] + 0xc) * *(float *)(param_1[1] + 4);
    *(float *)(param_3[1] + 4) =
         *(float *)param_1[1] * *(float *)(param_2[1] + 4) +
         *(float *)(*param_2 + 8) * *(float *)(*param_1 + 0xc) +
         *(float *)param_2[2] * *(float *)(param_1[1] + 4);
    *(float *)(param_3[1] + 8) =
         *(float *)(param_1[1] + 0xc) * *(float *)(*param_2 + 0xc) +
         *(float *)*param_2 * *(float *)(param_1[1] + 8) +
         *(float *)(param_2[1] + 8) * *(float *)param_1[2];
    *(float *)(param_3[1] + 0xc) =
         *(float *)(param_1[1] + 0xc) * *(float *)param_2[1] +
         *(float *)(*param_2 + 4) * *(float *)(param_1[1] + 8) +
         *(float *)(param_2[1] + 0xc) * *(float *)param_1[2];
    fVar8 = *(float *)(param_1[1] + 0xc) * *(float *)(param_2[1] + 4) +
            *(float *)(*param_2 + 8) * *(float *)(param_1[1] + 8) +
            *(float *)param_2[2] * *(float *)param_1[2];
  }
  *(float *)param_3[2] = fVar8;
  return;
}



/* Entry: 109675770; end: 109675c2f;  */

void FUN_109675770(long param_1,long param_2,ulong param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 auStack_1b8 [2];
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined4 auStack_1a0 [2];
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined4 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  int iStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  int *piStack_70;
  ulong *puStack_68;
  ulong auStack_60 [2];
  
  uStack_b0 = 0x242ff0005;
  iStack_a8 = (int)param_3;
  piStack_70 = &iStack_a8;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  auStack_60[0] = 0;
  auStack_60[1] = 0;
  iStack_a4 = iStack_a8;
  lStack_a0 = param_1;
  lStack_98 = param_1;
  puStack_68 = auStack_60;
  if ((param_1 == 0) && (iStack_a8 != 0)) {
    puVar6 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    uStack_110 = puVar6 + 1;
    uStack_108 = 0x1c;
    *(undefined1 *)(puVar6 + 8) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&uStack_110,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
  }
  else {
    uStack_b0 = 0x242ff4005;
    auStack_60[0] = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
    auStack_60[1] = 4;
    lStack_90 = param_1 + auStack_60[0] * (long)iStack_a8;
    uStack_110 = (undefined4 *)0x242ff0005;
    puStack_d0 = &uStack_108;
    uStack_108 = CONCAT44(1,iStack_a8);
    lStack_e8 = 0;
    lStack_f0 = 0;
    lStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    lStack_100 = param_2;
    lStack_f8 = param_2;
    puStack_c8 = &uStack_c0;
    lStack_88 = lStack_90;
    if ((param_2 == 0) && (iStack_a8 != 0)) {
      puVar6 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      uStack_170 = puVar6 + 1;
      uStack_168 = 0x1c;
      *(undefined1 *)(puVar6 + 8) = 0;
      *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
      FUN_109ac3188(0xffffff29,&uStack_170,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    }
    else {
      uStack_110 = (undefined4 *)0x242ff4005;
      uStack_b8 = 4;
      uStack_c0 = 4;
      lStack_f0 = param_2 + auStack_60[0];
      uStack_170 = (undefined4 *)0x242ff0005;
      puStack_1b0 = &uStack_170;
      puStack_130 = &uStack_168;
      uStack_168 = CONCAT44(1,iStack_a8);
      lStack_148 = 0;
      lStack_150 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      lStack_160 = param_4;
      lStack_158 = param_4;
      puStack_128 = &uStack_120;
      lStack_e8 = lStack_f0;
      if ((iStack_a8 == 0) || (param_4 != 0)) {
        uStack_170 = (undefined4 *)0x242ff4005;
        uStack_118 = 4;
        uStack_120 = 4;
        lStack_150 = param_4 + auStack_60[0];
        uStack_178 = 0;
        puStack_188 = (undefined4 *)CONCAT44(puStack_188._4_4_,0x1010000);
        puStack_180 = &uStack_b0;
        uStack_190 = 0;
        auStack_1a0[0] = 0x1010000;
        puStack_198 = &uStack_110;
        auStack_1b8[0] = 0x2010000;
        uStack_1a8 = 0;
        lStack_148 = lStack_150;
        FUN_109a5a63c(&puStack_188,auStack_1a0,auStack_1b8,0);
        if (lStack_138 != 0) {
          piVar1 = (int *)(lStack_138 + 0x14);
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
            func_0x000109a848d4(&uStack_170);
          }
        }
        lStack_138 = 0;
        lStack_158 = 0;
        lStack_160 = 0;
        lStack_148 = 0;
        lStack_150 = 0;
        if (0 < uStack_170._4_4_) {
          lVar7 = 0;
          do {
            *(undefined4 *)((long)puStack_130 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < uStack_170._4_4_);
        }
        if (puStack_128 != &uStack_120 && puStack_128 != (undefined8 *)0x0) {
          _free(puStack_128[-1]);
        }
        if (lStack_d8 != 0) {
          piVar1 = (int *)(lStack_d8 + 0x14);
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
            func_0x000109a848d4(&uStack_110);
          }
        }
        lStack_d8 = 0;
        lStack_f8 = 0;
        lStack_100 = 0;
        lStack_e8 = 0;
        lStack_f0 = 0;
        if (0 < uStack_110._4_4_) {
          lVar7 = 0;
          do {
            *(undefined4 *)((long)puStack_d0 + lVar7 * 4) = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < uStack_110._4_4_);
        }
        if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
          _free(puStack_c8[-1]);
        }
        if (lStack_78 != 0) {
          piVar1 = (int *)(lStack_78 + 0x14);
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
            func_0x000109a848d4(&uStack_b0);
          }
        }
        lStack_78 = 0;
        lStack_98 = 0;
        lStack_a0 = 0;
        lStack_88 = 0;
        lStack_90 = 0;
        if (0 < uStack_b0._4_4_) {
          lVar7 = 0;
          do {
            piStack_70[lVar7] = 0;
            lVar7 = lVar7 + 1;
          } while (lVar7 < uStack_b0._4_4_);
        }
        if (puStack_68 != auStack_60 && puStack_68 != (ulong *)0x0) {
          _free(puStack_68[-1]);
        }
        return;
      }
      puVar6 = (undefined4 *)0x24;
      func_0x000107c2ae8c();
      *puVar6 = 1;
      puStack_188 = puVar6 + 1;
      puStack_180 = (undefined8 *)0x1c;
      *(undefined1 *)(puVar6 + 8) = 0;
      *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
      *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
      *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
      *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
      FUN_109ac3188(0xffffff29,&puStack_188,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109675b64);
  (*pcVar5)();
}



/* Entry: 109675c30; end: 109675d0f;  */

void FUN_109675c30(float *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar17 = *param_1;
  auVar4 = *(undefined1 (*) [16])(param_1 + 1);
  pauVar1 = (undefined1 (*) [12])(param_1 + 5);
  fVar9 = (float)*(undefined8 *)(param_1 + 7);
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20);
  auVar5 = *pauVar1;
  fVar13 = (float)*(undefined8 *)*pauVar1;
  fVar8 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar7._12_4_ = fVar10;
  auVar7._0_12_ = *pauVar1;
  auVar7 = NEON_rev64(auVar7,4);
  auVar19._12_4_ = fVar10;
  auVar19._0_12_ = *pauVar1;
  auVar7 = NEON_ext(auVar7,auVar19,8,1);
  fVar6 = param_1[4];
  auVar20._12_4_ = fVar10;
  auVar20._0_12_ = *pauVar1;
  auVar2._12_4_ = fVar10;
  auVar2._0_12_ = *pauVar1;
  auVar19 = NEON_ext(auVar20,auVar2,4,1);
  auVar20 = NEON_ext(auVar19,auVar4,0xc,1);
  fVar22 = -auVar20._8_4_;
  auVar14._0_4_ = auVar4._0_4_;
  fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  auVar19 = NEON_ext(auVar4,auVar4,0xc,1);
  auVar15._0_8_ = auVar4._0_8_;
  auVar15._8_4_ = auVar4._4_4_;
  auVar15._12_4_ = auVar4._12_4_;
  auVar14._8_8_ = auVar15._8_8_;
  auVar14._4_4_ = auVar19._0_4_;
  auVar16._0_12_ = auVar14._0_12_;
  auVar16._12_4_ = auVar19._4_4_;
  auVar3._12_4_ = fVar10;
  auVar3._0_12_ = *pauVar1;
  auVar19 = NEON_ext(auVar16,auVar3,4,1);
  fVar11 = -fVar17 * fVar13;
  fVar12 = fVar21 * -auVar20._4_4_;
  fVar18 = (float)*(undefined8 *)(param_1 + 2);
  fVar13 = 1.0 / (fVar11 * fVar9 + fVar17 * fVar6 * fVar10 + fVar10 * fVar12 +
                  auVar14._0_4_ * fVar13 * fVar8 + param_1[3] * fVar18 * fVar9 +
                 fVar6 * fVar22 * fVar8);
  param_2[1] = CONCAT44((fVar10 * -auVar20._12_4_ + auVar7._12_4_ * auVar19._12_4_) * fVar13,
                        (auVar4._12_4_ * fVar22 + auVar7._8_4_ * auVar19._8_4_) * fVar13);
  *param_2 = CONCAT44((fVar10 * -auVar20._4_4_ + auVar7._4_4_ * auVar19._4_4_) * fVar13,
                      (fVar9 * -auVar20._0_4_ + auVar7._0_4_ * auVar19._0_4_) * fVar13);
  *(float *)(param_2 + 2) = (fVar8 * fVar22 + fVar17 * fVar10) * fVar13;
  *(float *)((long)param_2 + 0x1c) = (-fVar17 * fVar9 + fVar8 * auVar14._0_4_) * fVar13;
  *(float *)(param_2 + 4) = (fVar12 + fVar6 * fVar17) * fVar13;
  *(float *)((long)param_2 + 0x14) = (fVar11 + fVar21 * fVar18) * fVar13;
  *(float *)(param_2 + 3) = (-fVar6 * fVar8 + auVar5._8_4_ * fVar21) * fVar13;
  return;
}



/* Entry: 109675d10; end: 109676057;  */

void FUN_109675d10(long param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_100;
  int iStack_f8;
  int iStack_f4;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  int *piStack_c0;
  ulong *puStack_b8;
  ulong auStack_b0 [2];
  undefined8 uStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int *piStack_60;
  ulong *puStack_58;
  ulong auStack_50 [2];
  
  uStack_a0 = 0x242ff0006;
  piStack_60 = &iStack_98;
  iStack_98 = (int)param_2;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  iStack_94 = iStack_98;
  lStack_90 = param_1;
  lStack_88 = param_1;
  puStack_58 = auStack_50;
  if ((param_1 == 0) && (iStack_98 != 0)) {
    puVar6 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    plStack_260 = (long *)(puVar6 + 1);
    uStack_258 = 0x1c;
    *(undefined1 *)(puVar6 + 8) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&plStack_260,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
  }
  else {
    uStack_a0 = 0x242ff4006;
    auStack_50[0] = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
    auStack_50[1] = 8;
    lStack_80 = param_1 + auStack_50[0] * (long)iStack_98;
    uStack_100 = 0x242ff0006;
    piStack_c0 = &iStack_f8;
    lStack_d8 = 0;
    lStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    auStack_b0[0] = 0;
    auStack_b0[1] = 0;
    iStack_f8 = iStack_98;
    iStack_f4 = iStack_98;
    lStack_f0 = param_3;
    lStack_e8 = param_3;
    puStack_b8 = auStack_b0;
    lStack_78 = lStack_80;
    if ((iStack_98 == 0) || (param_3 != 0)) {
      uStack_100 = 0x242ff4006;
      auStack_b0[1] = 8;
      lStack_e0 = param_3 + auStack_50[0] * (long)iStack_98;
      lStack_d8 = lStack_e0;
      auStack_b0[0] = auStack_50[0];
      FUN_109a822d8(&plStack_260,&stack0xffffffffffffff60,0);
      (**(code **)(*plStack_260 + 0x18))(plStack_260,&plStack_260,&uStack_100,0xffffffff);
      FUN_10918eb6c(&plStack_260);
      if (lStack_c8 != 0) {
        piVar1 = (int *)(lStack_c8 + 0x14);
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
      lStack_c8 = 0;
      lStack_e8 = 0;
      lStack_f0 = 0;
      lStack_d8 = 0;
      lStack_e0 = 0;
      if (0 < uStack_100._4_4_) {
        lVar7 = 0;
        do {
          piStack_c0[lVar7] = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < uStack_100._4_4_);
      }
      if (puStack_b8 != auStack_b0 && puStack_b8 != (ulong *)0x0) {
        _free(puStack_b8[-1]);
      }
      if (lStack_68 != 0) {
        piVar1 = (int *)(lStack_68 + 0x14);
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
          func_0x000109a848d4(&stack0xffffffffffffff60);
        }
      }
      lStack_68 = 0;
      lStack_88 = 0;
      lStack_90 = 0;
      lStack_78 = 0;
      lStack_80 = 0;
      if (0 < iStack_9c) {
        lVar7 = 0;
        do {
          piStack_60[lVar7] = 0;
          lVar7 = lVar7 + 1;
        } while (lVar7 < iStack_9c);
      }
      if (puStack_58 != auStack_50 && puStack_58 != (ulong *)0x0) {
        _free(puStack_58[-1]);
      }
      return;
    }
    puVar6 = (undefined4 *)0x24;
    func_0x000107c2ae8c();
    *puVar6 = 1;
    plStack_260 = (long *)(puVar6 + 1);
    uStack_258 = 0x1c;
    *(undefined1 *)(puVar6 + 8) = 0;
    *(undefined8 *)(puVar6 + 3) = 0x207c7c2030203d3d;
    *(undefined8 *)(puVar6 + 1) = 0x2029286c61746f74;
    *(undefined8 *)(puVar6 + 6) = 0x4c4c554e203d2120;
    *(undefined8 *)(puVar6 + 4) = 0x61746164207c7c20;
    FUN_109ac3188(0xffffff29,&plStack_260,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109675fc0);
  (*pcVar5)();
}



/* Entry: 109676058; end: 10967610b;  */

void FUN_109676058(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(param_1 + 0x67d0);
  iVar3 = *(int *)(param_1 + 0x42b604);
  iVar2 = 0;
  if (iVar3 != 0xb) {
    iVar2 = iVar3 + 1;
  }
  *(int *)(param_1 + 0x42b604) = iVar2;
  pfVar6 = (float *)(param_1 + 0x42b514 + (long)iVar2 * 0xc);
  uVar8 = *(undefined8 *)(lVar4 + 0x74);
  uVar9 = NEON_rev64(uVar8,4);
  *(undefined8 *)pfVar6 = uVar9;
  pfVar6[2] = *(float *)(lVar4 + 0x7c);
  lVar1 = param_1 + (long)iVar2 * 4;
  *(undefined4 *)(lVar1 + 0x42b5a4) = *(undefined4 *)(lVar4 + 0x6c);
  pfVar5 = (float *)(param_1 + 0x42b514 + (long)iVar3 * 0xc);
  fVar7 = (float)uVar8 - pfVar5[1];
  *(float *)(lVar1 + 0x42b5d4) =
       SQRT((*pfVar6 - *pfVar5) * (*pfVar6 - *pfVar5) + fVar7 * fVar7 +
            (pfVar6[2] - pfVar5[2]) * (pfVar6[2] - pfVar5[2])) * 57.29578;
  return;
}



/* Entry: 10967610c; end: 109676543;  */

void FUN_10967610c(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  
  lVar24 = *(long *)(param_1 + 0x67d0);
  FUN_109674d44(param_1,param_1 + 0x124fd8,*(uint *)(lVar24 + 0x98) >> 10 & 1);
  lVar13 = 0;
  lVar17 = param_1 + 0x1289c0;
  do {
    lVar18 = 0;
    do {
      puVar19 = (undefined8 *)(lVar17 + lVar18);
      puVar19[3] = 0xbf800000bf800000;
      puVar19[2] = 0xbf800000;
      puVar19[5] = 0xbf800000;
      puVar19[4] = 0xbf80000000000000;
      puVar19[1] = 0xbf80000000000000;
      *puVar19 = 0xbf800000bf800000;
      lVar18 = lVar18 + 0x30;
    } while (lVar18 != 0x4b0);
    lVar13 = lVar13 + 1;
    lVar17 = lVar17 + 0x2d520;
  } while (lVar13 != 0x10);
  lVar14 = 0x128890;
  iVar2 = *(int *)(param_1 + 0x6824) >> 2;
  iVar3 = *(int *)(param_1 + 0x6828) >> 2;
  iVar4 = *(int *)(param_1 + 0x6824) >> 4;
  iVar5 = *(int *)(param_1 + 0x6828) >> 4;
  lVar17 = 0x128960;
  lVar13 = 0x128964;
  lVar18 = 0x128970;
  lVar6 = 0x128974;
  lVar7 = 0x128980;
  lVar8 = 0x128984;
  lVar9 = 0x128990;
  lVar10 = 0x128994;
  lVar11 = 0x1289a0;
  lVar12 = 0x1289a4;
  lVar25 = 0x1289b0;
  lVar26 = 0x1289b4;
  lVar27 = 0x1289b8;
  lVar28 = 0x11;
  lVar29 = 0x42d0e8;
  lVar30 = 0x4654e8;
  lVar31 = 0x468d28;
  lVar22 = 0x4a1128;
  lVar21 = 0x4a4968;
  lVar23 = 0x4dcd68;
  do {
    plVar1 = (long *)(param_1 + lVar27);
    plVar1[-10] = param_1 + lVar29;
    plVar1[-8] = param_1 + lVar30;
    plVar1[-6] = param_1 + lVar31;
    plVar1[-4] = param_1 + lVar22;
    plVar1[-2] = param_1 + lVar21;
    *(int *)(param_1 + lVar17) = iVar2;
    *(int *)(param_1 + lVar13) = iVar3;
    *(int *)(param_1 + lVar18) = iVar4;
    *(int *)(param_1 + lVar6) = iVar5;
    *(int *)(param_1 + lVar7) = iVar2;
    *(int *)(param_1 + lVar8) = iVar3;
    *(int *)(param_1 + lVar9) = iVar4;
    *(int *)(param_1 + lVar10) = iVar5;
    *(int *)(param_1 + lVar11) = iVar2;
    *(int *)(param_1 + lVar12) = iVar3;
    *(int *)(param_1 + lVar25) = iVar4;
    *(int *)(param_1 + lVar26) = iVar5;
    *(undefined8 *)(param_1 + lVar14) = 0xffffffff;
    lVar14 = lVar14 + 0x2d520;
    lVar27 = lVar27 + 0x2d520;
    lVar26 = lVar26 + 0x2d520;
    lVar25 = lVar25 + 0x2d520;
    lVar29 = lVar29 + 0xb34c0;
    lVar12 = lVar12 + 0x2d520;
    lVar11 = lVar11 + 0x2d520;
    lVar30 = lVar30 + 0xb34c0;
    lVar10 = lVar10 + 0x2d520;
    lVar9 = lVar9 + 0x2d520;
    lVar31 = lVar31 + 0xb34c0;
    lVar8 = lVar8 + 0x2d520;
    lVar7 = lVar7 + 0x2d520;
    lVar22 = lVar22 + 0xb34c0;
    lVar6 = lVar6 + 0x2d520;
    lVar18 = lVar18 + 0x2d520;
    lVar21 = lVar21 + 0xb34c0;
    *plVar1 = param_1 + lVar23;
    lVar13 = lVar13 + 0x2d520;
    lVar17 = lVar17 + 0x2d520;
    lVar23 = lVar23 + 0xb34c0;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  *(long *)(param_1 + 0x42afb0) = param_1 + 0x128890;
  *(undefined8 *)(param_1 + 0x42afc0) = 0;
  *(undefined8 *)(param_1 + 0x42afb8) = 0;
  *(undefined8 *)(param_1 + 0x42afd0) = 0;
  *(undefined8 *)(param_1 + 0x42afc8) = 0;
  *(long *)(param_1 + 0x42afd8) = param_1 + 0x3fda90;
  *(undefined4 *)(param_1 + 0x42b478) = 0x461c4000;
  *(undefined8 *)(param_1 + 0x42b48c) = 0x200000002;
  *(undefined8 *)(param_1 + 0x42b47c) = 0x200000002;
  *(undefined8 *)(param_1 + 0x42b048) = 0;
  if (*(int *)(lVar24 + 0x80) == 0) {
    uVar35 = 0;
    uVar36 = 0;
    fVar34 = 0.0;
  }
  else {
    fVar34 = *(float *)(lVar24 + 0x8c) - *(float *)(lVar24 + 0x7c);
    uVar32 = NEON_rev64(CONCAT44((float)((ulong)*(undefined8 *)(lVar24 + 0x84) >> 0x20) -
                                 (float)((ulong)*(undefined8 *)(lVar24 + 0x74) >> 0x20),
                                 (float)*(undefined8 *)(lVar24 + 0x84) -
                                 (float)*(undefined8 *)(lVar24 + 0x74)),4);
    uVar35 = (undefined4)uVar32;
    uVar36 = (undefined4)((ulong)uVar32 >> 0x20);
  }
  *(ulong *)(param_1 + 0x42c710) = CONCAT44(uVar36,uVar35);
  *(float *)(param_1 + 0x42c718) = fVar34;
  *(undefined8 *)(param_1 + 0x42aff8) = 0;
  *(undefined8 *)(param_1 + 0x42aff0) = 0;
  *(undefined8 *)(param_1 + 0x42b008) = 0;
  *(undefined8 *)(param_1 + 0x42b000) = 0;
  *(undefined8 *)(param_1 + 0x42b018) = 0;
  *(undefined8 *)(param_1 + 0x42b010) = 0;
  *(undefined8 *)(param_1 + 0x42b028) = 0;
  *(undefined8 *)(param_1 + 0x42b020) = 0;
  *(undefined8 *)(param_1 + 0x42b038) = 0;
  *(undefined8 *)(param_1 + 0x42b030) = 0;
  *(undefined8 *)(param_1 + 0x42b040) = 0;
  lVar13 = *(long *)(param_1 + 0x67d0);
  puVar15 = (undefined4 *)(param_1 + 0x42b5a4);
  lVar17 = 0xc;
  *(undefined4 *)(param_1 + 0x42b604) = 0;
  pfVar16 = (float *)(param_1 + 0x42b51c);
  do {
    uVar32 = NEON_rev64(CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x74) >> 0x20) +
                                 -0.010471976,(float)*(undefined8 *)(lVar13 + 0x74) + -0.010471976),
                        4);
    *(undefined8 *)(pfVar16 + -2) = uVar32;
    *pfVar16 = *(float *)(lVar13 + 0x7c) + -0.010471976;
    *puVar15 = *(undefined4 *)(lVar13 + 0x6c);
    puVar15[0xc] = 0x3f800000;
    puVar15 = puVar15 + 1;
    lVar17 = lVar17 + -1;
    pfVar16 = pfVar16 + 3;
  } while (lVar17 != 0);
  _bzero(param_1 + 0x42b608,0x2d4);
  lVar17 = 0;
  puVar15 = (undefined4 *)(param_1 + 0x42b610);
  do {
    lVar18 = 5;
    puVar19 = (undefined8 *)(lVar13 + 8);
    puVar20 = puVar15;
    do {
      if (*(int *)((long)puVar19 + -4) != 0) {
        *(undefined8 *)(puVar20 + -2) = *puVar19;
        *puVar20 = 1;
      }
      puVar20 = puVar20 + 3;
      puVar19 = (undefined8 *)((long)puVar19 + 0x14);
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar17 = lVar17 + 1;
    puVar15 = puVar15 + 0xf;
  } while (lVar17 != 0xc);
  *(undefined4 *)(param_1 + 0x42b908) = 0;
  *(undefined8 *)(param_1 + 0x42b8e4) = 0;
  *(undefined8 *)(param_1 + 0x42b8dc) = 0;
  *(undefined8 *)(param_1 + 0x42b8f4) = 0;
  *(undefined8 *)(param_1 + 0x42b8ec) = 0;
  *(undefined8 *)(param_1 + 0x42b8fc) = 0;
  *(undefined4 *)(param_1 + 0x42b94c) = 0;
  uVar35 = *(undefined4 *)(lVar24 + 0x348);
  uVar32 = CONCAT44(uVar35,uVar35);
  uVar33 = CONCAT44(uVar35,uVar35);
  *(undefined8 *)(param_1 + 0x42b914) = uVar33;
  *(undefined8 *)(param_1 + 0x42b90c) = uVar32;
  *(undefined8 *)(param_1 + 0x42b924) = uVar33;
  *(undefined8 *)(param_1 + 0x42b91c) = uVar32;
  *(undefined8 *)(param_1 + 0x42b934) = uVar33;
  *(undefined8 *)(param_1 + 0x42b92c) = uVar32;
  *(undefined8 *)(param_1 + 0x42b944) = uVar33;
  *(undefined8 *)(param_1 + 0x42b93c) = uVar32;
  *(undefined4 *)(param_1 + 0x42b990) = 0;
  _memset_pattern16(param_1 + 0x42b950,&UNK_10dfd94b0,0x40);
  *(undefined4 *)(param_1 + 0x42bd84) = 0;
  if ((*(byte *)(lVar24 + 0x98) >> 1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x42c708) = *(undefined4 *)(lVar24 + 0x348);
  }
  return;
}



/* Entry: 109676544; end: 1096766e3;  */

void FUN_109676544(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  piVar7 = (int *)(param_1 + 0x42cc40);
  uStack_98 = 0;
  uStack_a0 = 0x3f800000;
  uStack_88 = 0;
  uStack_90 = 0x3f800000;
  uStack_80 = 0x3f800000;
  lVar5 = *(long *)(param_1 + 0x42afc8) + 0x130;
  lVar9 = *(long *)(param_1 + 0x42afb8);
  lVar8 = 100;
  lVar6 = param_1 + 0x42cc38;
  do {
    FUN_10967e7a0(lVar5,lVar9 + 0x2d390,lVar6);
    lVar6 = lVar6 + 0xc;
    lVar5 = lVar5 + 0xc;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uStack_a8 = 1;
  uVar10 = NEON_scvtf(*(undefined8 *)(param_1 + 0x6824),4);
  fVar14 = (float)uVar10 * 0.5;
  fVar15 = (float)((ulong)uVar10 >> 0x20) * 0.5;
  uStack_b0 = CONCAT44(fVar15,fVar14);
  FUN_10967e938(param_1,&uStack_b0,*(long *)(param_1 + 0x42afb8) + 0x1c,&uStack_a0,
                *(long *)(param_1 + 0x42afb0) + 0x1c,1,auStack_c0);
  fVar14 = (float)auStack_c0._0_8_ - fVar14;
  fVar15 = SUB84(auStack_c0._0_8_,4) - fVar15;
  fVar13 = ABS(fVar15);
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (ABS(fVar14) <= 20.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar13)) {
      bVar1 = fVar13 < 20.0;
      bVar2 = fVar13 == 20.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    FUN_10967e938(param_1,param_1 + 0x42cc38,*(long *)(param_1 + 0x42afb8) + 0x1c,&uStack_a0,
                  *(long *)(param_1 + 0x42afb0) + 0x1c,100,param_2);
  }
  else {
    uVar11 = NEON_fmov(0x41a00000,4);
    uVar11 = CONCAT44(fVar15,fVar14) ^
             (CONCAT44(fVar15,fVar14) ^ uVar11) &
             CONCAT44(-(uint)((float)(uVar11 >> 0x20) < fVar15),-(uint)((float)uVar11 < fVar14));
    uVar12 = NEON_fmov(0xc1a00000,4);
    uVar11 = uVar11 ^ (uVar11 ^ uVar12) &
                      CONCAT44(-(uint)((float)(uVar11 >> 0x20) < (float)(uVar12 >> 0x20)),
                               -(uint)((float)uVar11 < (float)uVar12));
    _bzero(param_2,0x4b0);
    puVar4 = (undefined4 *)(param_2 + 8);
    lVar5 = 100;
    do {
      if (*piVar7 != 0) {
        *(ulong *)(puVar4 + -2) =
             CONCAT44((float)(uVar11 >> 0x20) + (float)((ulong)*(undefined8 *)(piVar7 + -2) >> 0x20)
                      ,(float)uVar11 + (float)*(undefined8 *)(piVar7 + -2));
        *puVar4 = 1;
      }
      puVar4 = puVar4 + 3;
      piVar7 = piVar7 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 1096766e4; end: 1096768af;  */

ulong FUN_1096766e4(long param_1,long param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_bc [12];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  uVar1 = 3;
  FUN_109a38f44(3,3,5);
  FUN_109a3907c();
  auVar9 = NEON_fmov(0xc0600000,4);
  fVar8 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar12 = auVar9._12_4_;
  auVar9 = NEON_fmov(0x3e800000,4);
  fVar13 = auVar9._0_4_;
  fVar14 = auVar9._4_4_;
  fVar15 = auVar9._8_4_;
  fVar16 = auVar9._12_4_;
  _fStack_70 = CONCAT44((param_3[1] + fVar8) * fVar13,(*param_3 + fVar8) * fVar13);
  _fStack_68 = CONCAT44((param_3[4] + fVar10) * fVar14,(param_3[3] + fVar10) * fVar14);
  _fStack_60 = CONCAT44((param_3[7] + fVar11) * fVar15,(param_3[6] + fVar11) * fVar15);
  _fStack_58 = CONCAT44((param_3[10] + fVar12) * fVar16,(param_3[9] + fVar12) * fVar16);
  _fStack_90 = CONCAT44((param_4[1] + fVar8) * fVar13,(*param_4 + fVar8) * fVar13);
  _fStack_88 = CONCAT44((param_4[4] + fVar10) * fVar14,(param_4[3] + fVar10) * fVar14);
  _fStack_80 = CONCAT44((param_4[7] + fVar11) * fVar15,(param_4[6] + fVar11) * fVar15);
  _fStack_78 = CONCAT44((param_4[10] + fVar12) * fVar16,(param_4[9] + fVar12) * fVar16);
  pfVar2 = &fStack_70;
  FUN_109b209ac(pfVar2,&fStack_90,uVar1);
  lVar3 = 0x90;
  func_0x000107c2ae8c();
  lVar4 = lVar3;
  FUN_109a3cf68();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(lVar4 + 0x58) = uVar1;
  *(undefined8 *)(lVar4 + 0x88) = uVar1;
  lVar5 = 0x90;
  func_0x000107c2ae8c();
  lVar4 = lVar5;
  FUN_109a3cf68();
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(lVar4 + 0x58) = uVar1;
  *(undefined8 *)(lVar4 + 0x88) = uVar1;
  uVar7 = 0;
  FUN_109b20630(0,0,0,0,lVar3,lVar5,pfVar2,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar7;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_1096768b0;
  uStack_b0 = uVar6;
  lStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_10967e884();
  FUN_10967f908(auStack_bc,pfVar2,&fStack_c8,1);
  return (ulong)(uint)SQRT(fStack_c4 * fStack_c4 + fStack_c8 * fStack_c8 + 1.0);
}



/* Entry: 1096768b0; end: 10967690b;  */

float FUN_1096768b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fStack_38;
  float fStack_34;
  undefined1 auStack_2c [12];
  
  FUN_10967e884(param_1,param_2,auStack_2c,1);
  FUN_10967f908(auStack_2c,param_3,&fStack_38,1);
  return SQRT(fStack_34 * fStack_34 + fStack_38 * fStack_38 + 1.0);
}



/* Entry: 10967690c; end: 109676bf7;  */

void FUN_10967690c(undefined8 param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int *piVar8;
  long lVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_d8 [8];
  int iStack_d0;
  undefined1 auStack_cc [12];
  ulong uStack_c0;
  undefined8 uStack_b8;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar26 = *(float *)(param_6 + 0xc);
  lVar4 = param_6 + 0xa0;
  pfVar5 = &fStack_64;
  lVar3 = param_2;
  lVar9 = param_6;
  FUN_10967ea40((ulong)(uint)fVar26,param_2,param_5,lVar4);
  fVar10 = *(float *)(param_6 + 0x34);
  fVar13 = *(float *)(param_6 + 0x38);
  fVar14 = *(float *)(param_6 + 0x3c);
  fVar18 = *(float *)(param_6 + 0x40);
  fVar15 = *(float *)(param_6 + 0x44);
  fVar21 = *(float *)(param_6 + 0x48);
  fVar19 = *(float *)(param_6 + 0x4c);
  fVar22 = *(float *)(param_6 + 0x50);
  fVar17 = *(float *)(param_6 + 0x54);
  param_4 = param_4 & 0xffffffff;
  iVar1 = *(int *)(param_2 + 0x6824);
  iVar2 = *(int *)(param_2 + 0x6828);
  puVar6 = (undefined4 *)(param_7 + 8);
  pfVar7 = (float *)(param_3 + 8);
  do {
    fVar24 = pfVar7[-2];
    fVar27 = pfVar7[-1];
    fVar30 = *pfVar7;
    fVar25 = (float)param_1;
    fVar20 = fVar13 * fStack_60 + fStack_64 * fVar10 + fStack_5c * fVar14 +
             fVar25 * (*(float *)(param_6 + 0x5c) * fVar27 + fVar24 * *(float *)(param_6 + 0x58) +
                      fVar30 * *(float *)(param_6 + 0x60));
    fVar23 = fStack_60 * fVar15 + fStack_64 * fVar18 + fStack_5c * fVar21 +
             fVar25 * (fVar27 * *(float *)(param_6 + 0x68) + fVar24 * *(float *)(param_6 + 100) +
                      fVar30 * *(float *)(param_6 + 0x6c));
    fVar25 = fStack_60 * fVar22 + fStack_64 * fVar19 + fStack_5c * fVar17 +
             fVar25 * (fVar27 * *(float *)(param_6 + 0x74) + fVar24 * *(float *)(param_6 + 0x70) +
                      fVar30 * *(float *)(param_6 + 0x78));
    fVar27 = *(float *)(param_6 + 0x10);
    fVar30 = *(float *)(param_6 + 0x14);
    fVar28 = *(float *)(param_6 + 0x18);
    fVar29 = *(float *)(param_6 + 0x1c);
    fVar31 = *(float *)(param_6 + 0x20);
    fVar32 = *(float *)(param_6 + 0x24);
    fVar24 = fVar23 * *(float *)(param_6 + 0x2c) + fVar20 * *(float *)(param_6 + 0x28) +
             fVar25 * *(float *)(param_6 + 0x30);
    *puVar6 = 1;
    puVar6[-2] = (float)(iVar1 >> 1) +
                 fVar26 * ((fVar23 * fVar30 + fVar20 * fVar27 + fVar25 * fVar28) / fVar24);
    puVar6[-1] = (float)(iVar2 >> 1) +
                 fVar26 * ((fVar23 * fVar31 + fVar20 * fVar29 + fVar25 * fVar32) / fVar24);
    puVar6 = puVar6 + 3;
    param_4 = param_4 - 1;
    pfVar7 = pfVar7 + 3;
  } while (param_4 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  fVar10 = pfVar5[3];
  uStack_c0 = (ulong)(uint)fVar26;
  uStack_b8 = param_1;
  FUN_10967e884();
  FUN_10967f908(auStack_cc,pfVar5 + 0xd,auStack_d8,1);
  uVar11 = NEON_scvtf(CONCAT44((int)((long)*(undefined8 *)(lVar3 + 0x6824) >> 0x21),
                               (int)*(undefined8 *)(lVar3 + 0x6824) >> 1),4);
  fVar13 = (float)(uVar11 >> 0x20);
  uVar16 = CONCAT44(fVar13 + auStack_d8._4_4_ * fVar10,(float)uVar11 + auStack_d8._0_4_ * fVar10);
  uVar16 = uVar16 ^ (uVar16 ^ uVar11) &
                    CONCAT44(-(uint)((int)((uint)(iStack_d0 == 0) << 0x1f) < 0),
                             -(uint)((int)((uint)(iStack_d0 == 0) << 0x1f) < 0));
  piVar8 = (int *)(lVar9 + 8);
  lVar9 = 0x168;
  do {
    FUN_10967e884(fVar10,lVar3,lVar4,auStack_cc,1);
    FUN_10967f908(auStack_cc,pfVar5 + 0xd,auStack_d8,1);
    *piVar8 = iStack_d0;
    uVar12 = NEON_scvtf(CONCAT44((int)((long)*(undefined8 *)(lVar3 + 0x6824) >> 0x21),
                                 (int)*(undefined8 *)(lVar3 + 0x6824) >> 1),4);
    uVar12 = uVar12 ^ (uVar12 ^ CONCAT44((float)(uVar12 >> 0x20) + auStack_d8._4_4_ * fVar10,
                                         (float)uVar12 + auStack_d8._0_4_ * fVar10)) &
                      ~CONCAT44(-(uint)((int)((uint)(iStack_d0 == 0) << 0x1f) < 0),
                                -(uint)((int)((uint)(iStack_d0 == 0) << 0x1f) < 0));
    *(ulong *)(piVar8 + -2) =
         CONCAT44((float)(uVar12 >> 0x20) - ((float)(uVar16 >> 0x20) - fVar13),
                  (float)uVar12 - ((float)uVar16 - (float)uVar11));
    piVar8 = piVar8 + 3;
    lVar4 = lVar4 + 0xc;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}



/* Entry: 109676bf8; end: 109676d33;  */

void FUN_109676bf8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uStack_150;
  float fStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined4 *)(param_4 + 0xc);
  FUN_10967ea40(uVar8,param_1,param_2,param_4 + 0xa0,&fStack_64);
  fVar2 = *(float *)(param_4 + 0x34);
  fVar4 = *(float *)(param_4 + 0x38);
  fVar5 = *(float *)(param_4 + 0x3c);
  fVar7 = *(float *)(param_4 + 0x40);
  fVar3 = *(float *)(param_4 + 0x44);
  fVar6 = *(float *)(param_4 + 0x48);
  lVar1 = param_4 + 0xa0;
  FUN_10967ea40(uVar8);
  fVar2 = (*(float *)(param_4 + 0x38) * fStack_6c + fStack_70 * *(float *)(param_4 + 0x34) +
          fStack_68 * *(float *)(param_4 + 0x3c)) -
          (fVar4 * fStack_60 + fStack_64 * fVar2 + fStack_5c * fVar5);
  if (fVar2 != 0.0) {
    _atanf(((fStack_6c * *(float *)(param_4 + 0x44) + fStack_70 * *(float *)(param_4 + 0x40) +
            fStack_68 * *(float *)(param_4 + 0x48)) -
           (fStack_60 * fVar3 + fStack_64 * fVar7 + fStack_5c * fVar6)) / fVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    uStack_d8 = *(undefined8 *)(param_3 + 0x94);
    uStack_e0 = *(undefined8 *)(param_3 + 0x8c);
    uStack_c8 = *(undefined8 *)(param_3 + 0xa4);
    uStack_d0 = *(undefined8 *)(param_3 + 0x9c);
    uStack_b8 = *(undefined8 *)(param_3 + 0xb4);
    uStack_c0 = *(undefined8 *)(param_3 + 0xac);
    uStack_a8 = *(undefined8 *)(param_3 + 0xc4);
    uStack_b0 = *(undefined8 *)(param_3 + 0xbc);
    uStack_118 = *(undefined8 *)(param_3 + 0x54);
    uStack_120 = *(undefined8 *)(param_3 + 0x4c);
    uStack_108 = *(undefined8 *)(param_3 + 100);
    uStack_110 = *(undefined8 *)(param_3 + 0x5c);
    uStack_f8 = *(undefined8 *)(param_3 + 0x74);
    uStack_100 = *(undefined8 *)(param_3 + 0x6c);
    uStack_e8 = *(undefined8 *)(param_3 + 0x84);
    uStack_f0 = *(undefined8 *)(param_3 + 0x7c);
    uStack_150 = *(undefined8 *)(param_3 + 0x1c);
    uStack_138 = *(undefined8 *)(param_3 + 0x34);
    uStack_140 = *(undefined8 *)(param_3 + 0x2c);
    uStack_128 = *(undefined8 *)(param_3 + 0x44);
    uStack_130 = *(undefined8 *)(param_3 + 0x3c);
    _fStack_148 = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x24) >> 0x20),
                           *(float *)(lVar1 + 0x22c0));
    FUN_10967f7c8(0,0,-*(float *)(lVar1 + 0x22c0),&uStack_f8);
    FUN_109675c30(&uStack_f8,(long)&uStack_d8 + 4);
    FUN_10967690c(0x41a00000,param_1,&UNK_10dfd9558,0x168,lVar1 + 0x34,&uStack_150,lVar1 + 0x70);
    *(undefined4 *)(param_1 + 0x42c770) = 1;
    return;
  }
  return;
}



/* Entry: 109676d34; end: 109676e07;  */

void FUN_109676d34(long param_1,long param_2,long param_3)

{
  undefined8 uStack_e0;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *(undefined8 *)(param_2 + 0x94);
  uStack_70 = *(undefined8 *)(param_2 + 0x8c);
  uStack_58 = *(undefined8 *)(param_2 + 0xa4);
  uStack_60 = *(undefined8 *)(param_2 + 0x9c);
  uStack_48 = *(undefined8 *)(param_2 + 0xb4);
  uStack_50 = *(undefined8 *)(param_2 + 0xac);
  uStack_38 = *(undefined8 *)(param_2 + 0xc4);
  uStack_40 = *(undefined8 *)(param_2 + 0xbc);
  uStack_a8 = *(undefined8 *)(param_2 + 0x54);
  uStack_b0 = *(undefined8 *)(param_2 + 0x4c);
  uStack_98 = *(undefined8 *)(param_2 + 100);
  uStack_a0 = *(undefined8 *)(param_2 + 0x5c);
  uStack_88 = *(undefined8 *)(param_2 + 0x74);
  uStack_90 = *(undefined8 *)(param_2 + 0x6c);
  uStack_78 = *(undefined8 *)(param_2 + 0x84);
  uStack_80 = *(undefined8 *)(param_2 + 0x7c);
  uStack_e0 = *(undefined8 *)(param_2 + 0x1c);
  uStack_c8 = *(undefined8 *)(param_2 + 0x34);
  uStack_d0 = *(undefined8 *)(param_2 + 0x2c);
  uStack_b8 = *(undefined8 *)(param_2 + 0x44);
  uStack_c0 = *(undefined8 *)(param_2 + 0x3c);
  _fStack_d8 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20),
                        *(float *)(param_3 + 0x22c0));
  FUN_10967f7c8(0,0,-*(float *)(param_3 + 0x22c0),&uStack_88);
  FUN_109675c30(&uStack_88,(long)&uStack_68 + 4);
  FUN_10967690c(0x41a00000,param_1,&UNK_10dfd9558,0x168,param_3 + 0x34,&uStack_e0,param_3 + 0x70);
  *(undefined4 *)(param_1 + 0x42c770) = 1;
  return;
}



/* Entry: 109676e08; end: 109676f63;  */

void FUN_109676e08(float param_1,long param_2,long param_3,undefined8 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  FUN_10967690c(0x41a00000,param_2,&UNK_10dfda6c8,9,param_4,param_3,param_5 + 1);
  FUN_10967690c(0x41a00000,param_2,&UNK_10dfd9558,0x168,param_4,param_3,param_5 + 0x1c);
  uVar1 = 0x42726667;
  FUN_10967690c(0x42726667,param_2,&UNK_10dfda638,4,param_4,param_3,param_5 + 0x88c);
  FUN_10967690c(param_2,&UNK_10dfda668,8,param_4,param_3,param_5 + 0x898);
  func_0x000109676ac0(param_2,param_5 + 0xd,param_5 + 0x1c,param_3,param_5 + 0x454);
  FUN_109676bf8(param_2,param_4,param_5 + 0x1c,param_3);
  param_5[0x8b0] = uVar1;
  uVar1 = *(undefined4 *)(param_3 + 0xc);
  FUN_1096768b0(param_2,param_4,param_3 + 0x34);
  param_5[0x8b2] = uVar1;
  FUN_10967fae4(param_5 + 0x454);
  *(undefined4 *)(*(long *)(param_2 + 0x42afb0) + 0x2d3bc) = uVar1;
  param_5[0x8b1] = param_1 * (float)param_5[0x8b2];
  *param_5 = 1;
  return;
}



/* Entry: 109676f64; end: 109677cef;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109677a58 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte * FUN_109676f64(int *param_1,long param_2,long param_3,int *param_4,float *param_5,
                    undefined4 param_6)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 *****pppppuVar17;
  int *piVar18;
  long lVar19;
  int *piVar20;
  uint *puVar21;
  byte *pbVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  undefined4 *puVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  undefined4 *puVar31;
  undefined4 uVar32;
  uint uVar33;
  byte *pbVar34;
  long lVar35;
  ulong uVar36;
  byte *pbVar37;
  byte *pbVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  int *piVar42;
  int *piVar43;
  int iVar44;
  long lVar45;
  byte *pbVar46;
  long lVar47;
  long *plVar48;
  int *piVar49;
  byte *pbVar50;
  long lVar51;
  byte *pbVar52;
  int iVar53;
  int *piVar54;
  int iVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  char cVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  char cVar88;
  undefined1 uVar89;
  float fVar90;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  undefined8 uVar91;
  undefined8 uVar92;
  double extraout_d1;
  double extraout_d1_00;
  double dVar93;
  double dVar94;
  undefined1 auVar96 [16];
  ulong uVar95;
  undefined1 auVar97 [16];
  float fVar98;
  float fVar99;
  float fVar101;
  undefined8 uVar100;
  undefined8 uVar102;
  float fVar103;
  undefined8 uVar104;
  double dVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  int iVar110;
  float fVar111;
  double dVar112;
  int iVar113;
  double dVar114;
  int iVar115;
  double dVar116;
  byte *pbVar117;
  double dVar118;
  double dVar119;
  double dVar120;
  double dVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 *puStack_1420;
  ulong uStack_1418;
  char cStack_1409;
  undefined8 ****ppppuStack_1408;
  ulong uStack_1400;
  byte bStack_13f1;
  byte *pbStack_13f0;
  byte *pbStack_13e8;
  byte *pbStack_13e0;
  byte *pbStack_13d8;
  undefined8 uStack_13d0;
  long lStack_13c8;
  byte *pbStack_13c0;
  undefined4 *puStack_13b8;
  undefined1 ***pppuStack_13b0;
  code *pcStack_13a8;
  undefined4 uStack_13a0;
  double dStack_1398;
  double dStack_1390;
  double dStack_1388;
  double dStack_1380;
  byte *pbStack_1378;
  byte *pbStack_1370;
  byte *pbStack_1368;
  double dStack_1360;
  int *piStack_1358;
  byte *pbStack_1350;
  byte *pbStack_1348;
  byte *pbStack_1340;
  undefined8 uStack_1338;
  double dStack_1330;
  undefined8 uStack_1328;
  byte *pbStack_1320;
  byte *pbStack_1318;
  byte *pbStack_1310;
  byte *pbStack_1308;
  byte *pbStack_1300;
  byte *pbStack_12f8;
  byte *pbStack_12f0;
  byte *pbStack_12e8;
  byte *pbStack_12e0;
  int aiStack_12d8 [2];
  long alStack_12d0 [2];
  undefined8 uStack_12bc;
  undefined8 uStack_12a8;
  undefined8 uStack_1294;
  undefined8 uStack_1280;
  float fStack_126c;
  float fStack_1264;
  float fStack_1260;
  float fStack_125c;
  int iStack_1254;
  int iStack_1250;
  int iStack_124c;
  undefined8 uStack_1248;
  uint uStack_1240;
  float fStack_f90;
  float fStack_f8c;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  float fStack_910;
  float fStack_900;
  float fStack_8fc;
  float fStack_8f4;
  float fStack_8f0;
  undefined8 uStack_8e8;
  uint uStack_8e0;
  float fStack_8dc;
  float fStack_8d8;
  undefined4 uStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  undefined4 uStack_8c8;
  float fStack_8c4;
  float fStack_8c0;
  undefined4 uStack_8bc;
  undefined1 auStack_8b8 [8];
  uint uStack_8b0;
  undefined1 auStack_8ac [12];
  undefined1 auStack_8a0 [8];
  int iStack_898;
  undefined8 uStack_890;
  undefined4 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined4 uStack_860;
  float fStack_85c;
  float fStack_858;
  undefined4 uStack_854;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  long lStack_3d0;
  float afStack_3c8 [4];
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  long lStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  float fStack_368;
  float fStack_364;
  float afStack_360 [5];
  float fStack_34c;
  float fStack_348;
  undefined8 uStack_344;
  undefined4 uStack_33c;
  long lStack_338;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  long lStack_248;
  int *piStack_240;
  long lStack_238;
  int *piStack_230;
  int *piStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  int iStack_1fc;
  float *pfStack_1f8;
  long lStack_1f0;
  int *piStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  uint uStack_1d0;
  uint uStack_1cc;
  int *piStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  float *pfStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  int *piStack_188;
  long lStack_180;
  int *piStack_178;
  undefined1 auStack_16c [36];
  undefined1 auStack_148 [36];
  undefined1 auStack_124 [36];
  undefined1 auStack_100 [8];
  float fStack_f8;
  undefined1 auStack_dc [8];
  float fStack_d4;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  long lStack_90;
  
  lStack_190 = CONCAT44(lStack_190._4_4_,param_6);
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1f0 = param_2 + 0x2d000;
  piVar49 = param_1 + 0x40591a;
  piStack_1c8 = param_1 + 0x10b1ba;
  plStack_1a0 = (long *)(param_1 + 0x10abec);
  piStack_1e8 = param_1 + 0x19f6;
  pfStack_1b0 = (float *)(param_3 + 0x2d38c);
  puVar25 = (undefined8 *)(param_3 + 0x246d4);
  lStack_1a8 = *(long *)(param_1 + 0x19f2);
  lStack_1b8 = param_3 + 0x22414;
  lStack_198 = param_2 + 0x22414;
  puVar24 = (undefined8 *)(param_2 + 0x246d4);
  lVar29 = 5;
  do {
    *(undefined4 *)((long)puVar25 + 0xc) = 0x3f800000;
    *puVar25 = *puVar24;
    puVar24 = puVar24 + 0x463;
    puVar25 = puVar25 + 0x463;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  lVar29 = param_2 + 0x130;
  *param_4 = 0;
  *(undefined8 *)(param_3 + 0x2d3c8) = 0;
  *(undefined8 *)(param_3 + 0x2d3c0) = 0x3f800000;
  lVar30 = param_3 + 0x220f4;
  *(undefined8 *)(param_3 + 0x2d3d8) = 0;
  *(undefined8 *)(param_3 + 0x2d3d0) = 0x3f800000;
  *(undefined4 *)(param_3 + 0x2d3e0) = 0x3f800000;
  pfStack_1f8 = param_5;
  piStack_188 = param_4;
  lStack_180 = param_2;
  piStack_178 = param_1;
  FUN_10967e884(param_1,lVar29,param_1 + 0x40546a,100);
  FUN_10967e884(param_1,param_3 + 0x130,param_1 + 0x405596,100);
  FUN_10967f908(param_1 + 0x40546a,param_2 + 0x50,param_1 + 0x4056c2,100);
  FUN_10967f908(param_1 + 0x405596,param_3 + 0x50,param_1 + 0x4057ee,100);
  _memset_pattern16(lVar30,&UNK_10dfd94a0,400);
  FUN_10967ef1c(param_1,lVar29,param_3 + 0x130,param_3 + 0x2d390,lVar30,lVar30,param_4,
                param_1 + 0x10abf8);
  if (4 < *param_4) {
    lVar19 = *plStack_1a0;
    iVar110 = *piStack_178;
    *(undefined4 *)(lVar19 + 0x14) = 0;
    param_1[0x405978] = 0;
    param_1[0x405979] = 0;
    param_1[0x405976] = 0;
    param_1[0x405977] = 0;
    param_1[0x40597c] = 0;
    param_1[0x40597d] = 0;
    param_1[0x40597a] = 0;
    param_1[0x40597b] = 0;
    param_1[0x405970] = 0;
    param_1[0x405971] = 0;
    param_1[0x40596e] = 0;
    param_1[0x40596f] = 0;
    param_1[0x405974] = 0;
    param_1[0x405975] = 0;
    param_1[0x405972] = 0;
    param_1[0x405973] = 0;
    param_1[0x405968] = 0;
    param_1[0x405969] = 0;
    param_1[0x405966] = 0;
    param_1[0x405967] = 0;
    param_1[0x40596c] = 0;
    param_1[0x40596d] = 0;
    param_1[0x40596a] = 0;
    param_1[0x40596b] = 0;
    param_1[0x405960] = 0;
    param_1[0x405961] = 0;
    param_1[0x40595e] = 0;
    param_1[0x40595f] = 0;
    param_1[0x405964] = 0;
    param_1[0x405965] = 0;
    param_1[0x405962] = 0;
    param_1[0x405963] = 0;
    param_1[0x405958] = 0;
    param_1[0x405959] = 0;
    param_1[0x405956] = 0;
    param_1[0x405957] = 0;
    param_1[0x40595c] = 0;
    param_1[0x40595d] = 0;
    param_1[0x40595a] = 0;
    param_1[0x40595b] = 0;
    param_1[0x405950] = 0;
    param_1[0x405951] = 0;
    param_1[0x40594e] = 0;
    param_1[0x40594f] = 0;
    param_1[0x405954] = 0;
    param_1[0x405955] = 0;
    param_1[0x405952] = 0;
    param_1[0x405953] = 0;
    param_1[0x405948] = 0;
    param_1[0x405949] = 0;
    param_1[0x405946] = 0;
    param_1[0x405947] = 0;
    param_1[0x40594c] = 0;
    param_1[0x40594d] = 0;
    param_1[0x40594a] = 0;
    param_1[0x40594b] = 0;
    param_1[0x405940] = 0;
    param_1[0x405941] = 0;
    param_1[0x40593e] = 0;
    param_1[0x40593f] = 0;
    param_1[0x405944] = 0;
    param_1[0x405945] = 0;
    param_1[0x405942] = 0;
    param_1[0x405943] = 0;
    param_1[0x405938] = 0;
    param_1[0x405939] = 0;
    param_1[0x405936] = 0;
    param_1[0x405937] = 0;
    param_1[0x40593c] = 0;
    param_1[0x40593d] = 0;
    param_1[0x40593a] = 0;
    param_1[0x40593b] = 0;
    param_1[0x405930] = 0;
    param_1[0x405931] = 0;
    param_1[0x40592e] = 0;
    param_1[0x40592f] = 0;
    param_1[0x405934] = 0;
    param_1[0x405935] = 0;
    param_1[0x405932] = 0;
    param_1[0x405933] = 0;
    param_1[0x405928] = 0;
    param_1[0x405929] = 0;
    param_1[0x405926] = 0;
    param_1[0x405927] = 0;
    param_1[0x40592c] = 0;
    param_1[0x40592d] = 0;
    param_1[0x40592a] = 0;
    param_1[0x40592b] = 0;
    param_1[0x405920] = 0;
    param_1[0x405921] = 0;
    param_1[0x40591e] = 0;
    param_1[0x40591f] = 0;
    param_1[0x405924] = 0;
    param_1[0x405925] = 0;
    param_1[0x405922] = 0;
    param_1[0x405923] = 0;
    piVar43 = (int *)(lVar19 + 0x220f4);
    param_1[0x40591c] = 0;
    param_1[0x40591d] = 0;
    piVar49[0] = 0;
    piVar49[1] = 0;
    if ((int)lStack_190 == 0) {
      lVar19 = 0;
      do {
        if (*(int *)((long)piVar43 + lVar19) != 0) {
          *(undefined4 *)((long)piVar49 + lVar19) = 0x3f800000;
        }
        lVar19 = lVar19 + 4;
      } while (lVar19 != 400);
    }
    else {
      piVar54 = (int *)(plStack_1a0[1] + 0x220f4);
      lVar35 = 100;
      piVar18 = piVar49;
      do {
        if ((*piVar43 != 0) &&
           (iVar113 = piVar43[100], *piVar18 = 0x3f800000, *piVar54 != 0 && 2 < iVar110 - iVar113))
        {
          *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
          *piVar18 = 0x40000000;
        }
        piVar54 = piVar54 + 1;
        piVar18 = piVar18 + 1;
        piVar43 = piVar43 + 1;
        lVar35 = lVar35 + -1;
      } while (lVar35 != 0);
    }
    FUN_109674e5c(lVar29,param_3 + 0x130,piVar49,param_3 + 0x2d390);
  }
  lVar19 = 0;
  fStack_a0 = (float)(int)(float)(piStack_1e8[0x13] >> 1);
  fVar90 = (float)(int)(float)(piStack_1e8[0x14] >> 1);
  uStack_b8 = CONCAT44(fVar90,fStack_a0);
  uStack_b0 = 1;
  uStack_ac = CONCAT44(fVar90,(float)((int)(float)(piStack_1e8[0x13] >> 1) + 100));
  fStack_9c = (float)((int)(float)(piStack_1e8[0x14] >> 1) + 100);
  uStack_a4 = 1;
  uStack_98 = 1;
  do {
    FUN_10967e7a0((long)&uStack_b8 + lVar19,param_3 + 0x2d390,auStack_124 + lVar19);
    piVar49 = piStack_178;
    lVar35 = lStack_180;
    lVar19 = lVar19 + 0xc;
  } while (lVar19 != 0x24);
  FUN_10967e884(piStack_178,&uStack_b8,auStack_dc,3);
  FUN_10967e884(piVar49,auStack_124,auStack_148,3);
  FUN_10967f908(auStack_dc,lVar35 + 0x50,auStack_100,3);
  FUN_10967f908(auStack_148,param_3 + 0x50,auStack_16c,3);
  FUN_10967eca8(auStack_100,auStack_16c,(undefined8 *)(param_3 + 0x2d3c0));
  lVar19 = *plStack_1a0;
  piVar49[0x4a223] = 0;
  if (0x32 < *(int *)(lVar19 + 0xc)) {
    iVar110 = 0;
    piVar49 = (int *)(lVar19 + 0x138);
    piVar54 = (int *)plStack_1a0[3];
    piVar43 = (int *)(lVar19 + 0x22284);
    lVar35 = 0x138;
    do {
      if ((*piVar49 != 0) &&
         (FUN_10967e7a0((long)piVar54 + lVar35 + -8,lVar19 + 0x2d390,&uStack_b8),
         fVar90 = (float)uStack_b8 - (float)*(undefined8 *)(piVar49 + -2),
         fVar99 = (float)((ulong)uStack_b8 >> 0x20) -
                  (float)((ulong)*(undefined8 *)(piVar49 + -2) >> 0x20),
         25.0 < fVar90 * fVar90 + fVar99 * fVar99 && *piVar43 < *piVar54)) {
        iVar110 = iVar110 + 1;
        piStack_178[0x4a223] = iVar110;
      }
      lVar35 = lVar35 + 0xc;
      piVar43 = piVar43 + 1;
      piVar49 = piVar49 + 3;
    } while (lVar35 != 0x5e8);
  }
  plVar48 = plStack_1a0;
  lVar19 = 0;
  plVar2 = plStack_1a0 + 0x79;
  plStack_1a0[0x96] = 0;
  plStack_1a0[0x95] = 0;
  plStack_1a0[0x98] = 0;
  plStack_1a0[0x97] = 0;
  plStack_1a0[0x92] = 0;
  plStack_1a0[0x91] = 0;
  plStack_1a0[0x94] = 0;
  plStack_1a0[0x93] = 0;
  plStack_1a0[0x8e] = 0;
  plStack_1a0[0x8d] = 0;
  plStack_1a0[0x90] = 0;
  plStack_1a0[0x8f] = 0;
  plStack_1a0[0x8a] = 0;
  plStack_1a0[0x89] = 0;
  plStack_1a0[0x8c] = 0;
  plStack_1a0[0x8b] = 0;
  plStack_1a0[0x86] = 0;
  plStack_1a0[0x85] = 0;
  plStack_1a0[0x88] = 0;
  plStack_1a0[0x87] = 0;
  plStack_1a0[0x82] = 0;
  plStack_1a0[0x81] = 0;
  plStack_1a0[0x84] = 0;
  plStack_1a0[0x83] = 0;
  plStack_1a0[0x7e] = 0;
  plStack_1a0[0x7d] = 0;
  plStack_1a0[0x80] = 0;
  plStack_1a0[0x7f] = 0;
  plStack_1a0[0x7a] = 0;
  *plVar2 = 0;
  plStack_1a0[0x7c] = 0;
  plStack_1a0[0x7b] = 0;
  do {
    uVar36 = 0;
    uVar28 = *(int *)(lVar30 + lVar19 * 4) + piStack_178[lVar19 + 0x10ac16] * 2;
    piStack_178[lVar19 + 0x10ac16] = uVar28;
    uVar39 = 1;
    iVar110 = 0x20;
    do {
      uVar33 = (uint)uVar36;
      if ((uVar39 & uVar28) != 0) {
        uVar33 = uVar33 + 1;
      }
      uVar36 = (ulong)uVar33;
      uVar39 = uVar39 << 1;
      iVar110 = iVar110 + -1;
    } while (iVar110 != 0);
    piStack_178[lVar19 + 0x10ac7a] = uVar33;
    *(int *)((long)plVar2 + uVar36 * 4) = *(int *)((long)plVar2 + (ulong)uVar33 * 4) + 1;
    lVar19 = lVar19 + 1;
  } while (lVar19 != 100);
  iVar110 = (int)plStack_1a0[0x79];
  *(int *)(plStack_1a0 + 0x89) = iVar110;
  lVar30 = 0x1f;
  piVar49 = (int *)((long)plStack_1a0 + 0x44c);
  do {
    iVar110 = piVar49[-0x20] + iVar110;
    *piVar49 = iVar110;
    lVar30 = lVar30 + -1;
    piVar49 = piVar49 + 1;
  } while (lVar30 != 0);
  iStack_1fc = *piStack_188;
  piVar49 = piStack_178 + 0x10b1e2;
  lVar30 = 100;
  do {
    piVar43 = (int *)(param_3 + 0x2d390);
    FUN_10967e7a0(lVar29,piVar43,piVar49);
    piVar49 = piVar49 + 3;
    lVar29 = lVar29 + 0xc;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  lVar29 = 0;
  iVar113 = *piStack_188;
  lStack_1c0 = *(long *)(piStack_178 + 0x19f2);
  lVar30 = plVar48[1];
  iVar115 = (int)plVar48[299];
  *(int *)((long)*(undefined1 (*) [16])((long)plVar48 + 0x92c) + (long)iVar115 * 4) =
       *(int *)(lVar30 + 0x246e4);
  ((int *)((long)plVar48 + 0x93c))[iVar115] = *(int *)(lVar30 + 0x246e8);
  iVar110 = 0;
  if (iVar115 != 3) {
    iVar110 = iVar115 + 1;
  }
  *(int *)(plVar48 + 299) = iVar110;
  uVar91 = *(undefined8 *)((long)plVar48 + 0x93c);
  auVar97 = *(undefined1 (*) [16])((long)plVar48 + 0x92c);
  uVar92 = NEON_fmov(0x3e800000,4);
  fVar90 = ((float)uVar91 + 0.0 + (float)((ulong)uVar91 >> 0x20) +
            (float)*(undefined8 *)((long)plVar48 + 0x944) +
           (float)((ulong)*(undefined8 *)((long)plVar48 + 0x944) >> 0x20)) *
           (float)((ulong)uVar92 >> 0x20);
  uVar59 = SUB41(fVar90,0);
  uVar60 = (undefined1)((uint)fVar90 >> 8);
  uVar64 = (undefined1)((uint)fVar90 >> 0x10);
  cVar88 = (char)((uint)fVar90 >> 0x18);
  *(ulong *)((long)plVar48 + 0x94c) =
       CONCAT17(cVar88,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,(auVar97._0_4_ + 0.0 +
                                                                        auVar97._4_4_ +
                                                                        auVar97._8_4_ +
                                                                       auVar97._12_4_) *
                                                                       (float)uVar92))));
  fVar90 = *(float *)(param_3 + 0x28) / *(float *)(lStack_180 + 0x28);
  uVar56 = 0;
  uVar58 = 0;
  uVar63 = 0x80;
  uVar69 = 0x3f;
  uStack_1d0 = (uint)(0x14 < iVar113);
  uStack_1cc = (uint)(fVar90 == 1.0 && (int)lStack_190 != 0);
  lStack_1d8 = param_3 + 0x23564;
  lVar30 = param_3 + 0x22418;
  lVar19 = lStack_180 + 0x22418;
  lVar35 = param_3 + 0x22484;
  lVar45 = lStack_180 + 0x22484;
  lStack_1e0 = param_3 + 0x23570;
  uVar32 = 1;
  piVar49 = piStack_178;
  do {
    if (*(int *)(lStack_198 + lVar29 * 0x2318) != 0) {
      piStack_188 = (int *)CONCAT44(piStack_188._4_4_,uVar32);
      puVar23 = (undefined4 *)(lStack_1b8 + lVar29 * 0x2318);
      lStack_190 = plVar48[1];
      lVar47 = 9;
      lVar51 = lVar19;
      lStack_180 = lVar30;
      do {
        FUN_10967e7a0(lVar51,param_3 + 0x2d390,lVar30);
        lVar30 = lVar30 + 0xc;
        lVar51 = lVar51 + 0xc;
        lVar47 = lVar47 + -1;
      } while (lVar47 != 0);
      lVar47 = 0x168;
      lVar51 = lVar45;
      lVar30 = lVar35;
      do {
        FUN_10967e7a0(lVar51,param_3 + 0x2d390,lVar30);
        piVar49 = piStack_178;
        lVar30 = lVar30 + 0xc;
        lVar51 = lVar51 + 0xc;
        lVar47 = lVar47 + -1;
      } while (lVar47 != 0);
      func_0x000109676ac0(piStack_178,puVar23 + 0xd,puVar23 + 0x1c,param_3 + 0x1c,puVar23 + 0x454);
      FUN_109676bf8(piVar49,puVar23 + 0xd,puVar23 + 0x1c,param_3 + 0x1c);
      puVar23[0x8b0] = CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)));
      uVar32 = *(undefined4 *)(param_3 + 0x28);
      uVar56 = (undefined1)uVar32;
      uVar58 = (undefined1)((uint)uVar32 >> 8);
      uVar63 = (undefined1)((uint)uVar32 >> 0x10);
      uVar69 = (undefined1)((uint)uVar32 >> 0x18);
      FUN_1096768b0(piVar49,puVar23 + 0xd,param_3 + 0x50);
      plVar48 = plStack_1a0;
      pfVar10 = pfStack_1b0;
      puVar23[0x8b2] = CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)));
      uVar91 = *(undefined8 *)(lStack_190 + lVar29 * 0x2318 + 0x22448);
      *(ulong *)(puVar23 + 0x8b4) =
           CONCAT44((float)((ulong)uVar91 >> 0x20) -
                    (float)((ulong)*(undefined8 *)(puVar23 + 0xd) >> 0x20),
                    (float)uVar91 - (float)*(undefined8 *)(puVar23 + 0xd));
      if ((int)piStack_188 != 0) {
        if (*(int *)(*plStack_1a0 + 0x14) < 0x1f) {
          uVar28 = (uint)(0x28 < *(int *)(*plStack_1a0 + 0x10));
        }
        else {
          uVar28 = 1;
        }
        if (uStack_1cc == 0) {
          uVar28 = uStack_1d0;
        }
        if ((*(int *)((long)plStack_1a0 + 0x4e4) == 0) && (uVar28 != 0)) {
          FUN_10967fae4(puVar23 + 0x454);
          pfVar10[0xc] = (float)CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)));
          fVar99 = (fVar90 * *(float *)(lStack_1f0 + 0x3b4) * *(float *)(lStack_1f0 + 0x3bc)) /
                   (float)CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)));
          uVar56 = SUB41(fVar99,0);
          uVar58 = (undefined1)((uint)fVar99 >> 8);
          uVar63 = (undefined1)((uint)fVar99 >> 0x10);
          uVar69 = (undefined1)((uint)fVar99 >> 0x18);
        }
        else {
          fVar99 = *(float *)(plStack_1a0[1] + 0x2d3b4);
          uVar56 = SUB41(fVar99,0);
          uVar58 = (undefined1)((uint)fVar99 >> 8);
          uVar63 = (undefined1)((uint)fVar99 >> 0x10);
          uVar69 = (undefined1)((uint)fVar99 >> 0x18);
          pfStack_1b0[0xc] = (fVar90 * fVar99 * *(float *)(plStack_1a0[1] + 0x2d3bc)) / fVar99;
        }
        pfVar10[10] = (float)CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)));
        FUN_10967f6ec(param_3 + 0x1c);
        puVar25 = (undefined8 *)
                  (lStack_1d8 + (long)*(int *)(*(long *)(piVar49 + 0x19f4) + 0x68) * 0x2318);
        uVar91 = *puVar25;
        uVar92 = puVar25[0x10e];
        fVar99 = (float)uVar91 - (float)uVar92;
        fVar98 = (float)((ulong)uVar91 >> 0x20) - (float)((ulong)uVar92 >> 0x20);
        fVar99 = SQRT(fVar99 * fVar99 + fVar98 * fVar98);
        puVar25 = (undefined8 *)
                  (lStack_1e0 + (long)*(int *)(*(long *)(piVar49 + 0x19f4) + 0x68) * 0x2318);
        lVar30 = 0xb3;
        uVar56 = SUB41(fVar99,0);
        uVar58 = (char)((uint)fVar99 >> 8);
        uVar63 = (char)((uint)fVar99 >> 0x10);
        uVar69 = (char)((uint)fVar99 >> 0x18);
        do {
          fVar98 = (float)*puVar25 - (float)puVar25[0x10e];
          fVar101 = (float)((ulong)*puVar25 >> 0x20) - (float)((ulong)puVar25[0x10e] >> 0x20);
          fVar98 = SQRT(fVar98 * fVar98 + fVar101 * fVar101);
          uVar65 = SUB41(fVar98,0);
          uVar66 = (char)((uint)fVar98 >> 8);
          uVar71 = (char)((uint)fVar98 >> 0x10);
          uVar72 = (char)((uint)fVar98 >> 0x18);
          if (fVar98 == (float)CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56))) ||
              fVar98 < (float)CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))) {
            uVar65 = uVar56;
            uVar66 = uVar58;
            uVar71 = uVar63;
            uVar72 = uVar69;
          }
          if (fVar99 <= fVar98) {
            fVar98 = fVar99;
          }
          fVar99 = fVar98;
          puVar25 = (undefined8 *)((long)puVar25 + 0xc);
          lVar30 = lVar30 + -1;
          uVar56 = uVar65;
          uVar58 = uVar66;
          uVar63 = uVar71;
          uVar69 = uVar72;
        } while (lVar30 != 0);
        *pfVar10 = (float)CONCAT13(uVar72,CONCAT12(uVar71,CONCAT11(uVar66,uVar65))) / fVar99;
        piStack_1c8[0x22] = 0;
        uVar32 = puVar23[0x8b2];
        uVar56 = (undefined1)uVar32;
        uVar58 = (undefined1)((uint)uVar32 >> 8);
        uVar63 = (undefined1)((uint)uVar32 >> 0x10);
        uVar69 = (undefined1)((uint)uVar32 >> 0x18);
      }
      puVar23[0x8b1] =
           (float)CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56))) * pfVar10[10];
      func_0x00010967690c(piVar49,&UNK_10dfda638,4,puVar23 + 0xd,param_3 + 0x1c,puVar23 + 0x88c);
      func_0x00010967690c(piVar49,&UNK_10dfda668,8,puVar23 + 0xd,param_3 + 0x1c,puVar23 + 0x898);
      uVar56 = 0;
      uVar58 = 0;
      uVar63 = 0xa0;
      uVar69 = 0x41;
      piVar43 = (int *)&UNK_10dfda6c8;
      func_0x00010967690c(piVar49,&UNK_10dfda6c8,9,puVar23 + 0xd,param_3 + 0x1c,lStack_1c0 + 0xea4);
      uVar32 = 0;
      *puVar23 = 1;
      lVar30 = lStack_180;
    }
    lVar29 = lVar29 + 1;
    lVar30 = lVar30 + 0x2318;
    lVar19 = lVar19 + 0x2318;
    lVar35 = lVar35 + 0x2318;
    lVar45 = lVar45 + 0x2318;
  } while (lVar29 != 5);
  iVar110 = 0;
  uVar56 = 0;
  uVar58 = 0;
  uVar63 = 0;
  uVar69 = 0;
  lVar30 = 100;
  lVar29 = 0x42c788;
  piVar54 = (int *)(param_3 + 0x138);
  do {
    if (*piVar54 != 0) {
      iVar110 = iVar110 + 1;
      fVar90 = (float)piVar54[-2] - *(float *)((long)piVar49 + lVar29);
      fVar99 = (float)piVar54[-1] - ((float *)((long)piVar49 + lVar29))[1];
      fVar90 = (float)CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56))) +
               SQRT(fVar99 * fVar99 + fVar90 * fVar90);
      uVar56 = SUB41(fVar90,0);
      uVar58 = (undefined1)((uint)fVar90 >> 8);
      uVar63 = (undefined1)((uint)fVar90 >> 0x10);
      uVar69 = (undefined1)((uint)fVar90 >> 0x18);
    }
    lVar29 = lVar29 + 0xc;
    lVar30 = lVar30 + -1;
    piVar54 = piVar54 + 3;
  } while (lVar30 != 0);
  lVar30 = 0;
  piVar49 = (int *)(param_3 + 0x22484);
  lVar29 = 4;
  *pfStack_1f8 = (float)CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56))) / (float)iVar110;
  piVar54 = piStack_1e8;
  do {
    piVar18 = piStack_178;
    Hint_Prefetch(param_3 + 0x28d90 + lVar30,0,0,0);
    if (*(int *)(*(long *)(piStack_178 + 0x19f4) + lVar29) == 2) {
      uStack_b8 = *(undefined8 *)(param_3 + 0x22448 + lVar30);
      uStack_ac = *(undefined8 *)piVar54;
      uStack_b0 = 1;
      uStack_a4 = 1;
      FUN_10967ea40(piStack_178,&uStack_b8,param_3 + 0xbc,auStack_dc);
      FUN_10967ea40(piVar18,&uStack_ac,param_3 + 0xbc,auStack_100);
      *(float *)(param_3 + 0x246e0 + lVar30) = fStack_f8 / fStack_d4;
      piVar43 = (int *)((long)piVar49 + lVar30);
      FUN_10967eaa0(CONCAT17(cVar88,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(uVar69,
                                                  CONCAT12(uVar63,CONCAT11(uVar58,uVar56))))))),
                    *(undefined4 *)(param_3 + 0x2244c + lVar30),*piVar54,piVar54[1],piVar18,piVar43,
                    param_3 + 0x1c,lStack_1a8 + 0x3160,0x168);
    }
    else {
      *(undefined4 *)(param_3 + 0x246e0 + lVar30) = 0x3f800000;
      if (lVar30 == 0) {
        piVar43 = piVar49;
        FUN_10967eaa0(CONCAT17(cVar88,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                              )),*(undefined4 *)(param_3 + 0x2244c),
                      (float)(piStack_1e8[0x13] >> 1),(float)(piStack_1e8[0x14] >> 1),piStack_178,
                      piVar49,param_3 + 0x1c,lStack_1a8 + 0x3160,0x168);
        piStack_1c8[7] = *(int *)(*plStack_1a0 + 0x2d3b4);
      }
    }
    lVar30 = lVar30 + 0x2318;
    lVar29 = lVar29 + 0x14;
    piVar54 = piVar54 + 3;
  } while (lVar29 != 0x68);
  iVar110 = *(int *)((long)plStack_1a0 + 0x99c);
  fVar90 = (float)piStack_178[(long)(iVar110 + (iVar110 >> 0x1f) * -0x10) + 0x10ae43];
  fVar99 = (float)piStack_178[(long)(iVar110 + -4 + (iVar110 + -4 >> 0x1f) * -0x10) + 0x10ae43];
  uVar56 = SUB41(fVar99,0);
  uVar58 = (char)((uint)fVar99 >> 8);
  uVar63 = (char)((uint)fVar99 >> 0x10);
  cVar70 = (char)((uint)fVar99 >> 0x18);
  if (fVar90 <= fVar99) {
    uVar56 = SUB41(fVar90,0);
    uVar58 = (char)((uint)fVar90 >> 8);
    uVar63 = (char)((uint)fVar90 >> 0x10);
    cVar70 = (char)((uint)fVar90 >> 0x18);
  }
  fVar90 = ABS(fVar90 - fVar99) / (float)CONCAT13(cVar70,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)));
  piVar20 = (int *)*plStack_1a0;
  if (piVar20[5] < 0x1f) {
    if (fVar90 <= 0.7) {
      lVar29 = plStack_1a0[1];
      goto LAB_109677b1c;
    }
    uVar28 = 1;
  }
  else {
    lVar29 = plStack_1a0[1];
    uVar28 = 1;
    if ((*(int *)(lVar29 + 0x14) < 0x1f) && (fVar90 <= 0.7)) {
LAB_109677b1c:
      fVar90 = *pfStack_1b0;
      bVar13 = true;
      if ((fVar90 <= 3.0) && (bVar13 = false, !NAN(fVar90))) {
        bVar13 = fVar90 < 0.33333334;
      }
      uVar39 = (uint)(!bVar13 || *(int *)((long)plStack_1a0 + 0x4e4) != 0);
      if ((*(byte *)(*(long *)(piStack_178 + 0x19f4) + 0x99) >> 2 & 1) == 0) {
        fVar90 = *(float *)(lVar29 + 0x2d3b4) / (float)piVar20[0xb4ed];
        uVar56 = SUB41(fVar90,0);
        uVar58 = (undefined1)((uint)fVar90 >> 8);
        uVar63 = (undefined1)((uint)fVar90 >> 0x10);
        cVar70 = (char)((uint)fVar90 >> 0x18);
        if (fVar90 < 0.86956525) goto LAB_109677bd0;
        fVar90 = 1.15;
LAB_109677bc8:
        uVar28 = uVar39;
        if ((float)CONCAT13(cVar70,CONCAT12(uVar63,CONCAT11(uVar58,uVar56))) != fVar90 &&
            fVar90 <= (float)CONCAT13(cVar70,CONCAT12(uVar63,CONCAT11(uVar58,uVar56))))
        goto LAB_109677bd0;
      }
      else {
        fVar90 = *(float *)(lVar29 + 0x246d8) / (float)piVar20[0x91b6];
        uVar56 = SUB41(fVar90,0);
        uVar58 = (undefined1)((uint)fVar90 >> 8);
        uVar63 = (undefined1)((uint)fVar90 >> 0x10);
        cVar70 = (char)((uint)fVar90 >> 0x18);
        if (0.7692308 <= fVar90) {
          fVar90 = 1.3;
          goto LAB_109677bc8;
        }
LAB_109677bd0:
        uVar28 = 0;
        if (*(int *)(lVar29 + 0x2d3b8) != 0) {
          uVar28 = uVar39;
        }
      }
      if ((10 < *piVar20 - *piStack_1c8) &&
         ((0x5a < (int)plStack_1a0[0x8b] || (0x5d < (int)plStack_1a0[0x8d])))) {
        uVar28 = 0;
      }
    }
  }
  uVar39 = uVar28;
  if ((*(byte *)(*(long *)(piStack_178 + 0x19f4) + 0x99) >> 2 & 1) != 0) {
    lVar29 = 0;
    iVar110 = 0;
    piVar42 = piVar20 + 0x4e;
    do {
      if (((*piVar42 != 0) &&
          (fVar90 = (float)*(undefined8 *)(piVar42 + -2) - (float)*(undefined8 *)(piVar20 + 0x8912),
          fVar99 = (float)((ulong)*(undefined8 *)(piVar42 + -2) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(piVar20 + 0x8912) >> 0x20),
          fVar90 * fVar90 + fVar99 * fVar99 < 28900.0)) &&
         (1 < *piVar20 - *(int *)((long)piVar20 + lVar29 + 0x22284))) {
        iVar110 = iVar110 + 1;
      }
      lVar29 = lVar29 + 4;
      piVar42 = piVar42 + 3;
    } while (lVar29 != 400);
    uVar39 = 0;
    if (9 < iVar110 || *piVar20 - *(int *)plStack_1a0[4] < 0xb) {
      uVar39 = uVar28;
    }
  }
  if (iStack_1fc < 5) {
    uVar39 = 0;
  }
  pbVar15 = (byte *)(ulong)uVar39;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return pbVar15;
  }
  ___stack_chk_fail();
  piStack_228 = piVar18;
  pcStack_208 = FUN_109677cf0;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_280 = 0;
  uStack_278 = *(undefined8 *)(pbVar15 + 0x6824);
  lVar19 = *(long *)(pbVar15 + 0x42afb0);
  lVar29 = 0x138;
  puVar21 = (uint *)(lVar19 + 0x220f4);
  do {
    *(uint *)((long)piVar43 + lVar29) = *(uint *)((long)piVar43 + lVar29) & *puVar21;
    lVar29 = lVar29 + 0xc;
    puVar21 = puVar21 + 1;
  } while (lVar29 != 0x5e8);
  if ((*(byte *)(*(long *)(pbVar15 + 0x67d0) + 0x99) >> 2 & 1) != 0) {
    uVar36 = NEON_scvtf(uStack_278,4);
    uVar95 = *(ulong *)(lVar19 + 0x22448);
    uVar95 = uVar95 ^ (uVar95 ^ 0x42c8000042c80000) &
                      CONCAT44(-(uint)((float)(uVar95 >> 0x20) < 100.0),
                               -(uint)((float)uVar95 < 100.0));
    fVar99 = (float)uVar36 + -100.0;
    fVar90 = (float)(uVar36 >> 0x20);
    fVar98 = fVar90 + -100.0;
    uVar95 = uVar95 ^ (uVar95 ^ CONCAT44(fVar98,fVar99)) &
                      CONCAT44(-(uint)(fVar98 < (float)(uVar95 >> 0x20)),
                               -(uint)(fVar99 < (float)uVar95));
    fVar99 = (float)uVar95;
    fVar98 = (float)(uVar95 >> 0x20);
    uVar91 = NEON_fmaxnm(CONCAT44(fVar98 + -100.0,fVar99 + -80.0),0,4);
    uStack_26c = CONCAT44((int)(float)((ulong)uVar91 >> 0x20),(int)(float)uVar91);
    fVar99 = fVar99 + 150.0;
    fVar98 = fVar98 + 100.0;
    uVar36 = uVar36 ^ (uVar36 ^ CONCAT44(fVar98,fVar99)) &
                      CONCAT44(-(uint)(fVar98 < fVar90),-(uint)(fVar99 < (float)uVar36));
    uVar91 = NEON_scvtf(uStack_26c,4);
    iVar110 = (int)((float)(uVar36 >> 0x20) - (float)((ulong)uVar91 >> 0x20));
    uVar59 = (undefined1)iVar110;
    uVar60 = (undefined1)((uint)iVar110 >> 8);
    uVar64 = (undefined1)((uint)iVar110 >> 0x10);
    cVar88 = (char)((uint)iVar110 >> 0x18);
    uStack_264 = CONCAT17(cVar88,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,(int)((float)uVar36
                                                                                      - (float)
                                                  uVar91)))));
  }
  pbVar22 = pbVar15 + 0x124fd8;
  pbVar16 = pbVar15;
  piVar18 = piVar43;
  piStack_240 = piVar49;
  lStack_238 = param_3 + 0x28d90;
  piStack_230 = piVar54;
  lStack_220 = param_3;
  lStack_218 = lVar30;
  puStack_210 = &stack0xfffffffffffffff0;
  FUN_10967b374();
  piVar43[3] = (int)pbVar16;
  piVar49 = *(int **)(pbVar15 + 0x42afb0);
  if (*piVar43 != *piVar49) {
    FUN_109675c30(piVar43 + 0xb4e4,&uStack_26c);
    pbVar16 = (byte *)&uStack_26c;
    pbVar22 = (byte *)(piVar49 + 0xb4e4);
    piVar18 = piVar49 + 0xb4e4;
    FUN_10967553c();
  }
  piVar43[0xb4e6] = 0;
  piVar43[0xb4e7] = 0;
  piVar43[0xb4e4] = 0x3f800000;
  piVar43[0xb4e5] = 0;
  piVar43[0xb4ea] = 0;
  piVar43[0xb4eb] = 0;
  piVar43[0xb4e8] = 0x3f800000;
  piVar43[0xb4e9] = 0;
  piVar43[0xb4ec] = 0x3f800000;
  piVar43[0xb4f2] = 0;
  piVar43[0xb4f3] = 0;
  piVar43[0xb4f0] = 0x3f800000;
  piVar43[0xb4f1] = 0;
  piVar43[0xb4f6] = 0;
  piVar43[0xb4f7] = 0;
  piVar43[0xb4f4] = 0x3f800000;
  piVar43[0xb4f5] = 0;
  piVar43[0xb4f8] = 0x3f800000;
  pbVar15[0x42b478] = 0;
  pbVar15[0x42b479] = 0xcf;
  pbVar15[0x42b47a] = 0x8a;
  pbVar15[0x42b47b] = 0x47;
  *(int **)(pbVar15 + 0x42afc8) = piVar43;
  piVar43[1] = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return pbVar16;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_109677ed0;
  ppuStack_290 = &puStack_210;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar18[0x1a] = 0;
  _memcpy(aiStack_12d8,piVar18,0x9a8);
  if ((bRam0000000113734828 & 1) == 0) {
    iVar110 = 0x13734828;
    ___cxa_guard_acquire();
    if (iVar110 != 0) {
      iRam0000000113734800 = piVar18[0x1e];
      ___cxa_guard_release(&bRam0000000113734828);
    }
  }
  if ((bRam0000000113734830 & 1) == 0) {
    iVar110 = 0x13734830;
    ___cxa_guard_acquire();
    if (iVar110 != 0) {
      iRam0000000113734804 = piVar18[0x1d];
      ___cxa_guard_release(&bRam0000000113734830);
    }
  }
  pbVar15 = pbVar16 + 0x42bb94;
  if ((bRam0000000113734838 & 1) == 0) {
    iVar110 = 0x13734838;
    ___cxa_guard_acquire();
    if (iVar110 != 0) {
      iRam0000000113734808 = piVar18[0x1f];
      ___cxa_guard_release(&bRam0000000113734838);
    }
  }
  iVar110 = piVar18[0x1d];
  iVar113 = piVar18[0x1e];
  iStack_1250 = iVar113;
  iStack_1254 = iVar110;
  iVar115 = piVar18[0x1f];
  iStack_124c = iVar115;
  if ((*piVar18 == 0) || (*(int *)(pbVar16 + 0x42c784) != 0)) {
    pbVar16[0x42c784] = 0;
    pbVar16[0x42c785] = 0;
    pbVar16[0x42c786] = 0;
    pbVar16[0x42c787] = 0;
    *piVar18 = 0;
    uVar28 = piVar18[0x26];
    uRam00000001137347fc = uVar28 >> 0xd & 1;
    iRam0000000113734800 = iVar113;
    iRam0000000113734804 = iVar110;
    iRam0000000113734808 = iVar115;
  }
  else {
    uVar28 = piVar18[0x26];
  }
  iVar3 = iRam0000000113734804;
  iVar41 = iRam0000000113734800;
  if ((uVar28 >> 10 & 1) == 0) {
    if (uRam00000001137347fc == 1) {
      uVar56 = (undefined1)iRam0000000113734808;
      uVar69 = (undefined1)((uint)iRam0000000113734808 >> 8);
      uVar64 = (undefined1)((uint)iRam0000000113734808 >> 0x10);
      uVar71 = (undefined1)((uint)iRam0000000113734808 >> 0x18);
      ___sincosf_stret();
      dVar120 = (double)extraout_s1;
      uVar58 = (undefined1)iVar41;
      uVar59 = (undefined1)((uint)iVar41 >> 8);
      uVar65 = (undefined1)((uint)iVar41 >> 0x10);
      uVar72 = (undefined1)((uint)iVar41 >> 0x18);
      ___sincosf_stret();
      pbStack_1310 = (byte *)(double)extraout_s1_00;
      uVar63 = (undefined1)iVar3;
      uVar60 = (undefined1)((uint)iVar3 >> 8);
      uVar66 = (undefined1)((uint)iVar3 >> 0x10);
      uVar73 = (undefined1)((uint)iVar3 >> 0x18);
      ___sincosf_stret();
      pbStack_12e8 = (byte *)(double)(float)CONCAT13(uVar71,CONCAT12(uVar64,CONCAT11(uVar69,uVar56))
                                                    );
      dVar118 = (double)(float)CONCAT13(uVar72,CONCAT12(uVar65,CONCAT11(uVar59,uVar58)));
      pbStack_12e0 = (byte *)(double)(float)CONCAT13(uVar73,CONCAT12(uVar66,CONCAT11(uVar60,uVar63))
                                                    );
      uVar56 = (undefined1)iVar115;
      uVar69 = (undefined1)((uint)iVar115 >> 8);
      uVar64 = (undefined1)((uint)iVar115 >> 0x10);
      uVar71 = (undefined1)((uint)iVar115 >> 0x18);
      pbStack_1318 = (byte *)(double)extraout_s1_01;
      ___sincosf_stret();
      pbStack_12f0 = (byte *)(double)extraout_s1_02;
      uVar58 = (undefined1)iVar113;
      uVar59 = (undefined1)((uint)iVar113 >> 8);
      uVar65 = (undefined1)((uint)iVar113 >> 0x10);
      uVar72 = (undefined1)((uint)iVar113 >> 0x18);
      ___sincosf_stret();
      piVar49 = (int *)(double)extraout_s1_03;
      uVar63 = (undefined1)iVar110;
      uVar60 = (undefined1)((uint)iVar110 >> 8);
      uVar66 = (undefined1)((uint)iVar110 >> 0x10);
      uVar73 = (undefined1)((uint)iVar110 >> 0x18);
      ___sincosf_stret();
      dVar116 = (double)extraout_s1_04;
      pbStack_1308 = (byte *)(double)(float)CONCAT13(uVar71,CONCAT12(uVar64,CONCAT11(uVar69,uVar56))
                                                    );
      dVar105 = (double)(float)CONCAT13(uVar72,CONCAT12(uVar65,CONCAT11(uVar59,uVar58)));
      pbVar117 = (byte *)(double)(float)CONCAT13(uVar73,CONCAT12(uVar66,CONCAT11(uVar60,uVar63)));
      pbStack_1320 = (byte *)((double)piVar49 * (double)pbStack_1308 * (double)pbVar117);
      dStack_1330 = -(dVar120 * (double)pbStack_1310) * (double)pbStack_12e0 +
                    dVar118 * (double)pbStack_12e8;
      pbStack_1350 = (byte *)((double)pbStack_1310 * (double)pbStack_12e8 * (double)pbStack_12e0 +
                             dVar118 * dVar120);
      dVar114 = -((double)pbStack_12f0 * (double)piVar49) * (double)pbVar117 +
                dVar105 * (double)pbStack_1308;
      pbStack_1340 = (byte *)(dVar105 * (double)pbStack_12f0 * (double)pbVar117 +
                             (double)pbStack_1308 * (double)piVar49);
      dVar112 = -(dVar116 * (double)pbStack_1308) * (double)pbStack_1350 +
                dStack_1330 * dVar116 * (double)pbStack_12f0 +
                (double)pbVar117 * (double)pbStack_1310 * (double)extraout_s1_01;
      uVar56 = SUB81(dVar112,0);
      uVar58 = (undefined1)((ulong)dVar112 >> 8);
      uVar63 = (undefined1)((ulong)dVar112 >> 0x10);
      uVar69 = (undefined1)((ulong)dVar112 >> 0x18);
      uVar59 = (undefined1)((ulong)dVar112 >> 0x20);
      uVar60 = (undefined1)((ulong)dVar112 >> 0x28);
      uVar64 = (undefined1)((ulong)dVar112 >> 0x30);
      uVar65 = (undefined1)((ulong)dVar112 >> 0x38);
      pbStack_1370 = pbVar117;
      dStack_1360 = dVar105;
      piStack_1358 = piVar49;
      pbStack_1300 = (byte *)dVar120;
      _asin();
      pbVar52 = pbStack_12f0;
      pbVar46 = pbStack_1318;
      dVar118 = (double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                )) + -6.283185307179586;
      bVar12 = false;
      bVar14 = false;
      bVar13 = NAN((double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                  )));
      if (!bVar13) {
        bVar12 = (double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                 )) < 3.141592653589793;
        bVar14 = (double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                 )) == 3.141592653589793;
      }
      uVar66 = SUB81(dVar118,0);
      uVar71 = (char)((ulong)dVar118 >> 8);
      uVar72 = (char)((ulong)dVar118 >> 0x10);
      uVar73 = (char)((ulong)dVar118 >> 0x18);
      uVar77 = (char)((ulong)dVar118 >> 0x20);
      uVar80 = (char)((ulong)dVar118 >> 0x28);
      uVar83 = (char)((ulong)dVar118 >> 0x30);
      uVar86 = (char)((ulong)dVar118 >> 0x38);
      if (bVar14 || bVar12 != bVar13) {
        uVar66 = uVar56;
        uVar71 = uVar58;
        uVar72 = uVar63;
        uVar73 = uVar69;
        uVar77 = uVar59;
        uVar80 = uVar60;
        uVar83 = uVar64;
        uVar86 = uVar65;
      }
      dVar118 = 3.141592653589793 -
                (double)CONCAT17(uVar86,CONCAT16(uVar83,CONCAT15(uVar80,CONCAT14(uVar77,CONCAT13(
                                                  uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar66)))))
                                                ));
      if (ABS(3.141592653589793 -
              (double)CONCAT17(uVar86,CONCAT16(uVar83,CONCAT15(uVar80,CONCAT14(uVar77,CONCAT13(
                                                  uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar66)))))
                                              ))) <=
          ABS((double)CONCAT17(uVar86,CONCAT16(uVar83,CONCAT15(uVar80,CONCAT14(uVar77,CONCAT13(
                                                  uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar66)))))
                                              )))) {
        uVar66 = SUB81(dVar118,0);
        uVar71 = (undefined1)((ulong)dVar118 >> 8);
        uVar72 = (undefined1)((ulong)dVar118 >> 0x10);
        uVar73 = (undefined1)((ulong)dVar118 >> 0x18);
        uVar77 = (undefined1)((ulong)dVar118 >> 0x20);
        uVar80 = (undefined1)((ulong)dVar118 >> 0x28);
        uVar83 = (undefined1)((ulong)dVar118 >> 0x30);
        uVar86 = (undefined1)((ulong)dVar118 >> 0x38);
      }
      pbStack_12f8 = (byte *)CONCAT17(uVar86,CONCAT16(uVar83,CONCAT15(uVar80,CONCAT14(uVar77,
                                                  CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,
                                                  uVar66)))))));
      dVar118 = 1.0 - dVar112 * dVar112;
      dVar112 = 1e-07;
      if (dVar118 != 0.0) {
        dVar112 = SQRT(dVar118);
      }
      dVar105 = (double)pbStack_1320 + dVar105 * (double)pbStack_12f0;
      dVar118 = (dVar114 * dStack_1330 + dVar105 * (double)pbStack_1350 +
                dVar116 * (double)piVar49 * (double)pbStack_1310 * (double)pbStack_1318) / dVar112;
      uVar56 = 0;
      uVar58 = 0;
      uVar63 = 0;
      uVar69 = 0;
      uVar59 = 0;
      uVar60 = 0;
      uVar64 = 0xf0;
      uVar65 = 0x3f;
      if (dVar118 <= 1.0) {
        uVar56 = SUB81(dVar118,0);
        uVar58 = (char)((ulong)dVar118 >> 8);
        uVar63 = (char)((ulong)dVar118 >> 0x10);
        uVar69 = (char)((ulong)dVar118 >> 0x18);
        uVar59 = (char)((ulong)dVar118 >> 0x20);
        uVar60 = (char)((ulong)dVar118 >> 0x28);
        uVar64 = (char)((ulong)dVar118 >> 0x30);
        uVar65 = (char)((ulong)dVar118 >> 0x38);
      }
      bVar13 = false;
      if (!NAN((double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                               )))) {
        bVar13 = (double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                 )) < -1.0;
      }
      uVar66 = 0;
      uVar71 = 0;
      uVar72 = 0;
      uVar73 = 0;
      uVar77 = 0;
      uVar80 = 0;
      uVar83 = 0xf0;
      uVar86 = 0xbf;
      if (!bVar13) {
        uVar66 = uVar56;
        uVar71 = uVar58;
        uVar72 = uVar63;
        uVar73 = uVar69;
        uVar77 = uVar59;
        uVar80 = uVar60;
        uVar83 = uVar64;
        uVar86 = uVar65;
      }
      dStack_1330 = dVar105;
      pbStack_1320 = (byte *)dVar114;
      _acos();
      pbStack_1310 = (byte *)-(double)CONCAT17(uVar86,CONCAT16(uVar83,CONCAT15(uVar80,CONCAT14(
                                                  uVar77,CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(
                                                  uVar71,uVar66)))))));
      dVar112 = ((double)pbVar52 * (double)pbStack_1300 * (double)pbVar46 * dVar116 +
                 (double)pbVar117 * (double)pbStack_12e0 +
                (double)pbStack_1308 * dVar116 * (double)pbVar46 * (double)pbStack_12e8) / dVar112;
      uVar56 = 0;
      uVar58 = 0;
      uVar63 = 0;
      uVar69 = 0;
      uVar59 = 0;
      uVar60 = 0;
      uVar64 = 0xf0;
      uVar65 = 0x3f;
      if (dVar112 <= 1.0) {
        uVar56 = SUB81(dVar112,0);
        uVar58 = (char)((ulong)dVar112 >> 8);
        uVar63 = (char)((ulong)dVar112 >> 0x10);
        uVar69 = (char)((ulong)dVar112 >> 0x18);
        uVar59 = (char)((ulong)dVar112 >> 0x20);
        uVar60 = (char)((ulong)dVar112 >> 0x28);
        uVar64 = (char)((ulong)dVar112 >> 0x30);
        uVar65 = (char)((ulong)dVar112 >> 0x38);
      }
      bVar13 = false;
      if (!NAN((double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                               )))) {
        bVar13 = (double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                 )) < -1.0;
      }
      uVar57 = 0;
      uVar61 = 0;
      uVar67 = 0;
      uVar74 = 0;
      uVar78 = 0;
      uVar81 = 0;
      uVar84 = 0xf0;
      uVar87 = 0xbf;
      if (!bVar13) {
        uVar57 = uVar56;
        uVar61 = uVar58;
        uVar67 = uVar63;
        uVar74 = uVar69;
        uVar78 = uVar59;
        uVar81 = uVar60;
        uVar84 = uVar64;
        uVar87 = uVar65;
      }
      _acos();
      dStack_1388 = -(double)CONCAT17(uVar87,CONCAT16(uVar84,CONCAT15(uVar81,CONCAT14(uVar78,
                                                  CONCAT13(uVar74,CONCAT12(uVar67,CONCAT11(uVar61,
                                                  uVar57)))))));
      pbStack_1350 = (byte *)CONCAT17(uVar86,CONCAT16(uVar83,CONCAT15(uVar80,CONCAT14(uVar77,
                                                  CONCAT13(uVar73,CONCAT12(uVar72,CONCAT11(uVar71,
                                                  uVar66)))))));
      ___sincos_stret();
      pbVar46 = (byte *)CONCAT17(uVar86,CONCAT16(uVar83,CONCAT15(uVar80,CONCAT14(uVar77,CONCAT13(
                                                  uVar73,CONCAT12(uVar72,CONCAT11(uVar71,uVar66)))))
                                                ));
      dStack_1398 = (double)CONCAT17(uVar87,CONCAT16(uVar84,CONCAT15(uVar81,CONCAT14(uVar78,CONCAT13
                                                  (uVar74,CONCAT12(uVar67,CONCAT11(uVar61,uVar57))))
                                                  )));
      ___sincos_stret();
      dVar105 = (double)CONCAT17(uVar87,CONCAT16(uVar84,CONCAT15(uVar81,CONCAT14(uVar78,CONCAT13(
                                                  uVar74,CONCAT12(uVar67,CONCAT11(uVar61,uVar57)))))
                                                ));
      uVar56 = SUB81(pbStack_12f8,0);
      uVar58 = (undefined1)((ulong)pbStack_12f8 >> 8);
      uVar63 = (undefined1)((ulong)pbStack_12f8 >> 0x10);
      uVar69 = (undefined1)((ulong)pbStack_12f8 >> 0x18);
      uVar59 = (undefined1)((ulong)pbStack_12f8 >> 0x20);
      uVar60 = (undefined1)((ulong)pbStack_12f8 >> 0x28);
      uVar64 = (undefined1)((ulong)pbStack_12f8 >> 0x30);
      uVar65 = (undefined1)((ulong)pbStack_12f8 >> 0x38);
      dStack_1380 = extraout_d1_00;
      pbStack_1368 = pbVar46;
      _sin();
      dVar112 = (double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                ));
      dVar121 = (double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                )) * extraout_d1_00 * (double)pbVar46;
      dStack_1390 = dVar121 + dVar105 * extraout_d1;
      uVar56 = SUB81(pbStack_1310,0);
      uVar58 = (undefined1)((ulong)pbStack_1310 >> 8);
      uVar63 = (undefined1)((ulong)pbStack_1310 >> 0x10);
      uVar69 = (undefined1)((ulong)pbStack_1310 >> 0x18);
      uVar59 = (undefined1)((ulong)pbStack_1310 >> 0x20);
      uVar60 = (undefined1)((ulong)pbStack_1310 >> 0x28);
      uVar64 = (undefined1)((ulong)pbStack_1310 >> 0x30);
      uVar65 = (undefined1)((ulong)pbStack_1310 >> 0x38);
      _sin();
      dVar119 = dStack_1388;
      dVar114 = (double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                ));
      uVar56 = SUB81(dStack_1388,0);
      uVar58 = (undefined1)((ulong)dStack_1388 >> 8);
      uVar63 = (undefined1)((ulong)dStack_1388 >> 0x10);
      uVar69 = (undefined1)((ulong)dStack_1388 >> 0x18);
      uVar59 = (undefined1)((ulong)dStack_1388 >> 0x20);
      uVar60 = (undefined1)((ulong)dStack_1388 >> 0x28);
      uVar64 = (undefined1)((ulong)dStack_1388 >> 0x30);
      uVar65 = (undefined1)((ulong)dStack_1388 >> 0x38);
      _sin();
      piVar49 = piStack_1358;
      dVar120 = (double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                ));
      pbStack_1378 = (byte *)((double)pbStack_1318 * (double)pbStack_1300);
      dVar118 = (double)pbStack_1318 * (double)pbStack_12e8;
      dVar93 = -(dVar116 * dStack_1360) * (double)pbStack_12e0 +
               (double)pbStack_1340 * (double)pbStack_1378 +
               (-((double)pbStack_1308 * dStack_1360) * (double)pbStack_1370 +
               (double)piStack_1358 * (double)pbStack_12f0) * -dVar118;
      dVar94 = dVar112 * dStack_1380 * dVar114;
      dVar7 = ABS((dVar94 + dVar105 * extraout_d1) - dVar93);
      dVar94 = ABS((dVar94 + dVar120 * extraout_d1) - dVar93);
      bVar13 = false;
      if ((ABS(dStack_1390 - dVar93) <
           ABS((dVar121 +
               (double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar69,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                               )) * extraout_d1) - dVar93)) &&
         (bVar13 = false, !NAN(dVar7) && !NAN(dVar94))) {
        bVar13 = dVar7 < dVar94;
      }
      if (bVar13) {
        dVar120 = dVar105;
        dVar119 = dStack_1398;
      }
      uVar56 = SUB81(dVar119,0);
      uVar58 = (undefined1)((ulong)dVar119 >> 8);
      uVar63 = (undefined1)((ulong)dVar119 >> 0x10);
      uVar69 = (undefined1)((ulong)dVar119 >> 0x18);
      uVar59 = (undefined1)((ulong)dVar119 >> 0x20);
      uVar60 = (undefined1)((ulong)dVar119 >> 0x28);
      uVar64 = (undefined1)((ulong)dVar119 >> 0x30);
      uVar65 = (undefined1)((ulong)dVar119 >> 0x38);
      pbStack_1300 = (byte *)dVar116;
      pbStack_12e8 = (byte *)dVar114;
      _cos();
      dVar112 = dVar112 * -((double)CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,
                                                  CONCAT13(uVar69,CONCAT12(uVar63,CONCAT11(uVar58,
                                                  uVar56))))))) * extraout_d1);
      dVar118 = dStack_1330 * -dVar118 + (double)pbStack_1320 * (double)pbStack_1378 +
                (double)pbStack_12e0 * (double)piVar49 * (double)pbStack_1300;
      uVar56 = SUB81(pbStack_1350,0);
      uVar58 = (undefined1)((ulong)pbStack_1350 >> 8);
      uVar63 = (undefined1)((ulong)pbStack_1350 >> 0x10);
      cVar70 = (char)((ulong)pbStack_1350 >> 0x18);
      uVar59 = (undefined1)((ulong)pbStack_1350 >> 0x20);
      uVar60 = (undefined1)((ulong)pbStack_1350 >> 0x28);
      uVar64 = (undefined1)((ulong)pbStack_1350 >> 0x30);
      cVar88 = (char)((ulong)pbStack_1350 >> 0x38);
      if (ABS((dVar112 + (double)pbStack_12e8 * dVar120) - dVar118) <=
          ABS((dVar112 + (double)pbStack_1368 * dVar120) - dVar118)) {
        uVar56 = SUB81(pbStack_1310,0);
        uVar58 = (undefined1)((ulong)pbStack_1310 >> 8);
        uVar63 = (undefined1)((ulong)pbStack_1310 >> 0x10);
        cVar70 = (char)((ulong)pbStack_1310 >> 0x18);
        uVar59 = (undefined1)((ulong)pbStack_1310 >> 0x20);
        uVar60 = (undefined1)((ulong)pbStack_1310 >> 0x28);
        uVar64 = (undefined1)((ulong)pbStack_1310 >> 0x30);
        cVar88 = (char)((ulong)pbStack_1310 >> 0x38);
      }
      fStack_1260 = (float)(double)CONCAT17(cVar88,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,
                                                  CONCAT13(cVar70,CONCAT12(uVar63,CONCAT11(uVar58,
                                                  uVar56)))))));
      fStack_1264 = (float)(double)pbStack_12f8;
      fStack_125c = (float)dVar119;
      piVar18[0x21] = (int)(float)(double)pbStack_12f8;
      piVar18[0x22] = (int)fStack_1260;
      piVar18[0x23] = (int)(float)dVar119;
      iVar110 = 1;
    }
    else {
      iVar110 = 0;
    }
  }
  else {
    iVar110 = 0;
    uRam00000001137347fc = 0;
  }
  if ((uVar28 >> 9 & 1) != 0) {
    fStack_126c = fStack_126c * 0.5;
    cVar70 = (char)((ulong)uStack_1248 >> 0x18) >> 1;
    iVar113 = (int)((long)uStack_1248 >> 0x21);
    uVar59 = (undefined1)iVar113;
    uVar60 = (undefined1)((uint)iVar113 >> 8);
    uVar64 = (undefined1)((uint)iVar113 >> 0x10);
    cVar88 = (char)((long)uStack_1248 >> 0x39);
    uStack_1248 = CONCAT17(cVar88,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(cVar70,(
                                                  int3)((int)uStack_1248 >> 1))))));
    lVar29 = 8;
    do {
      auVar97 = *(undefined1 (*) [16])((long)aiStack_12d8 + lVar29);
      auVar96._0_8_ = CONCAT44(auVar97._4_4_ * 0.5,auVar97._0_4_ * 0.5);
      auVar96._8_4_ = auVar97._8_4_ * 0.5;
      auVar96._12_4_ = auVar97._12_4_ * 0.5;
      *(long *)((long)alStack_12d0 + lVar29) = auVar96._8_8_;
      *(undefined8 *)((long)aiStack_12d8 + lVar29) = auVar96._0_8_;
      lVar29 = lVar29 + 0x14;
    } while (lVar29 != 0x6c);
  }
  *(int *)(pbVar16 + 0x42c774) = iVar110;
  if ((*(byte *)((long)piVar18 + 0x99) >> 4 & 1) != 0) {
    *(undefined8 *)(pbVar16 + 0x6824) = uStack_1248;
    lStack_3a0 = alStack_12d0[0];
    uStack_398 = CONCAT44(uStack_398._4_4_,1);
    FUN_10967f7c8(CONCAT17(cVar88,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(cVar70,
                                                  CONCAT12(uVar63,CONCAT11(uVar58,uVar56))))))),
                  -fStack_1264,0,&uStack_880);
    FUN_109675c30(&uStack_880,&fStack_368);
    uVar56 = SUB41(fStack_126c,0);
    uVar58 = (undefined1)((uint)fStack_126c >> 8);
    uVar63 = (undefined1)((uint)fStack_126c >> 0x10);
    cVar70 = (char)((uint)fStack_126c >> 0x18);
    FUN_1096768b0(pbVar16,&lStack_3a0,&fStack_368);
    fStack_f90 = fStack_f8c / (float)CONCAT13(cVar70,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)));
  }
  if ((bRam0000000113734818 & 1) == 0) {
    iVar110 = 0x13734818;
    ___cxa_guard_acquire();
    if (iVar110 != 0) {
      iRam00000001137347f4 = (int)uStack_1248;
      ___cxa_guard_release(&bRam0000000113734818);
    }
  }
  pbVar46 = pbVar16 + 0xf5978;
  if ((bRam0000000113734820 & 1) == 0) {
    iVar110 = 0x13734820;
    ___cxa_guard_acquire();
    if (iVar110 != 0) {
      iRam00000001137347f8 = uStack_1248._4_4_;
      ___cxa_guard_release(&bRam0000000113734820);
    }
  }
  pbStack_1320 = pbVar16 + 0x42b488;
  pbStack_1318 = pbVar16 + 0x125010;
  pbStack_12e0 = pbVar16 + 0x42c6e8;
  pbVar52 = pbVar16 + 0x42afb0;
  pbStack_12f0 = pbVar16 + 0x128888;
  pbStack_12f8 = pbVar16 + 0x6818;
  if ((iRam00000001137347f8 == uStack_1248._4_4_) && (iRam00000001137347f4 == (int)uStack_1248)) {
    if ((pbVar16[0x42c780] & 1) != 0) goto LAB_1096784ec;
    *(int *)pbVar16 = *(int *)pbVar16 + 1;
    pbVar117 = *(byte **)pbVar46;
  }
  else {
    iRam00000001137347f4 = (int)uStack_1248;
    iRam00000001137347f8 = uStack_1248._4_4_;
LAB_1096784ec:
    pbVar117 = pbVar16 + 0xf5988;
    *(byte **)pbVar46 = pbVar117;
    *(byte **)(pbVar16 + 0xf5980) = pbVar16 + 0x10d4b0;
    *(int *)pbVar16 = *(int *)pbVar16 + 1;
    aiStack_12d8[0] = 0;
    *(int *)(pbVar16 + 0x6824) = iRam00000001137347f4;
    *(int *)(pbVar16 + 0x6828) = uStack_1248._4_4_;
    pbVar16[0x42c780] = 0;
    _bzero(pbVar16 + 0x42b994,0x20c);
  }
  pbVar50 = pbStack_12f8;
  *(byte **)(pbVar16 + 0x42c778) = pbVar22;
  FUN_109674c28(pbVar16,aiStack_12d8,pbVar117);
  lVar29 = 0;
  pbVar22 = pbVar16 + 0x42b994;
  iVar110 = 0;
  if (*(int *)pbVar15 != 0x7f) {
    iVar110 = *(int *)pbVar15 + 1;
  }
  *(int *)pbVar15 = iVar110;
  iVar113 = 100;
  pbVar117 = pbVar22 + (long)iVar110 * 4;
  pbVar117[0] = 100;
  pbVar117[1] = 0;
  pbVar117[2] = 0;
  pbVar117[3] = 0;
  pbVar16[0x42bb98] = 100;
  pbVar16[0x42bb99] = 0;
  pbVar16[0x42bb9a] = 0;
  pbVar16[0x42bb9b] = 0;
  pbVar16[0x42bb9c] = 100;
  pbVar16[0x42bb9d] = 0;
  pbVar16[0x42bb9e] = 0;
  pbVar16[0x42bb9f] = 0;
  iVar110 = 100;
  do {
    iVar115 = *(int *)(pbVar22 + lVar29);
    if (iVar115 < iVar113) {
      *(int *)(pbVar16 + 0x42bb9c) = iVar115;
      iVar113 = iVar115;
      iVar115 = *(int *)(pbVar22 + lVar29);
    }
    if (iVar110 < iVar115) {
      *(int *)(pbVar16 + 0x42bb98) = iVar115;
      iVar110 = iVar115;
    }
    lVar29 = lVar29 + 4;
  } while (lVar29 != 0x200);
  iVar113 = *(int *)pbVar15;
  iVar115 = *(int *)(pbVar22 + (long)(iVar113 + (iVar113 >> 0x1f) * -0x80) * 4);
  pbVar16[0x42bba0] = 1;
  pbVar16[0x42bba1] = 0;
  pbVar16[0x42bba2] = 0;
  pbVar16[0x42bba3] = 0;
  iVar110 = -5;
  do {
    iVar113 = iVar113 + -1;
    if ((int)(float)iVar115 <
        (int)(float)*(int *)(pbVar22 + (long)(iVar113 + (iVar113 >> 0x1f) * -0x80) * 4)) {
      pbVar16[0x42bba0] = 0;
      pbVar16[0x42bba1] = 0;
      pbVar16[0x42bba2] = 0;
      pbVar16[0x42bba3] = 0;
    }
    bVar13 = iVar110 != -1;
    iVar110 = iVar110 + 1;
  } while (bVar13);
  pbStack_1308 = pbVar22;
  pbStack_12e8 = pbVar52;
  if (**(int **)(pbVar16 + 0x67d0) == 0) {
    FUN_10967610c(pbVar16);
    lVar29 = 0;
    iVar110 = (int)(float)*(int *)(pbVar22 +
                                  (long)(*(int *)pbVar15 + (*(int *)pbVar15 >> 0x1f) * -0x80) * 4);
    pbVar15[0] = 0;
    pbVar15[1] = 0;
    pbVar15[2] = 0;
    pbVar15[3] = 0;
    uVar62 = (undefined1)((uint)iVar110 >> 8);
    uVar68 = (undefined1)((uint)iVar110 >> 0x10);
    uVar75 = (undefined1)((uint)iVar110 >> 0x18);
    do {
      *(ulong *)(pbVar22 + lVar29 + 8) =
           CONCAT17(uVar75,CONCAT16(uVar68,CONCAT15(uVar62,CONCAT14((char)iVar110,iVar110))));
      *(ulong *)(pbVar22 + lVar29) =
           CONCAT17(uVar75,CONCAT16(uVar68,CONCAT15(uVar62,CONCAT14((char)iVar110,iVar110))));
      lVar29 = lVar29 + 0x10;
    } while (lVar29 != 0x200);
    *(int *)(pbVar16 + 0x42bb98) = iVar110;
    *(int *)(pbVar16 + 0x42bb9c) = iVar110;
  }
  else {
    iVar110 = *(int *)(pbVar16 + 0x42b604);
    if (*(int *)(pbVar16 + 0x42aff0) == 0) {
      iVar113 = iVar110 + 0xc;
      if (-1 < iVar110) {
        iVar113 = iVar110;
      }
      lVar29 = 0xb;
      if (0 < iVar110) {
        lVar29 = -1;
      }
      lVar29 = lVar29 + iVar110;
      if (*(float *)(pbVar16 + ((long)iVar113 + 0x10ad69) * 4) ==
          *(float *)(pbVar16 + (lVar29 + 0x10ad69) * 4)) goto LAB_109678898;
      pbVar16[0x42aff0] = 1;
      pbVar16[0x42aff1] = 0;
      pbVar16[0x42aff2] = 0;
      pbVar16[0x42aff3] = 0;
      uVar91 = *(undefined8 *)(pbVar16 + (lVar29 * 3 + 0x10ad45) * 4);
      *(int *)(pbVar16 + 0x42affc) = *(int *)(pbVar16 + (lVar29 * 3 + 0x10ad47) * 4);
      *(undefined8 *)(pbVar16 + 0x42aff4) = uVar91;
      *(int *)(pbVar16 + 0x42b000) = *(int *)(pbVar16 + (lVar29 + 0x10ad69) * 4);
      iVar113 = 0xb;
      if (0 < *(int *)(pbVar16 + 0x42b8d8)) {
        iVar113 = -1;
      }
      iVar113 = iVar113 + *(int *)(pbVar16 + 0x42b8d8);
      uVar92 = *(undefined8 *)(pbVar16 + ((long)iVar113 * 0xf + 0x10ad8f) * 4);
      uVar91 = *(undefined8 *)(pbVar16 + ((long)iVar113 * 0xf + 0x10ad8d) * 4);
      uVar104 = *(undefined8 *)(pbVar16 + ((long)iVar113 * 0xf + 0x10ad86) * 4);
      auVar97 = *(undefined1 (*) [16])(pbVar16 + ((long)iVar113 * 0xf + 0x10ad8a) * 4);
      uVar102 = *(undefined8 *)(pbVar16 + ((long)iVar113 * 0xf + 0x10ad84) * 4);
      uVar100 = *(undefined8 *)(pbVar16 + ((long)iVar113 * 0xf + 0x10ad82) * 4);
      *(undefined8 *)(pbVar16 + 0x42b01c) =
           *(undefined8 *)(pbVar16 + ((long)iVar113 * 0xf + 0x10ad88) * 4);
      *(undefined8 *)(pbVar16 + 0x42b014) = uVar104;
      *(long *)(pbVar16 + 0x42b02c) = auVar97._8_8_;
      *(long *)(pbVar16 + 0x42b024) = auVar97._0_8_;
      *(undefined8 *)(pbVar16 + 0x42b038) = uVar92;
      *(undefined8 *)(pbVar16 + 0x42b030) = uVar91;
      *(undefined8 *)(pbVar16 + 0x42b00c) = uVar102;
      *(undefined8 *)(pbVar16 + 0x42b004) = uVar100;
      *(int *)(pbVar16 + 0x42b040) =
           *(int *)(pbVar16 +
                   ((long)(*(int *)(pbVar16 + 0x42b94c) + -1 +
                          (*(int *)(pbVar16 + 0x42b94c) + -1 >> 0x1f) * -0x10) + 0x10ae43) * 4);
      *(float *)(pbVar16 + 0x42b044) = (float)(*(int *)pbVar16 + -1);
    }
    iVar113 = iVar110 + 0xc;
    if (-1 < iVar110) {
      iVar113 = iVar110;
    }
    fVar90 = *(float *)(pbVar16 + ((long)iVar113 + 0x10ad69) * 4);
    iVar113 = 0xb;
    if (0 < iVar110) {
      iVar113 = -1;
    }
    if (fVar90 == *(float *)(pbVar16 + ((long)(iVar113 + iVar110) + 0x10ad69) * 4)) {
      iVar113 = 8;
      if (3 < iVar110) {
        iVar113 = -4;
      }
      if (fVar90 == *(float *)(pbVar16 + ((long)(iVar113 + iVar110) + 0x10ad69) * 4)) {
        iVar113 = 5;
        if (6 < iVar110) {
          iVar113 = -7;
        }
        if ((fVar90 == *(float *)(pbVar16 + ((long)(iVar113 + iVar110) + 0x10ad69) * 4)) &&
           ((pbVar16[0x42aff0] = 0, pbVar16[0x42aff1] = 0, pbVar16[0x42aff2] = 0,
            pbVar16[0x42aff3] = 0,
            *(int *)(pbVar16 + 0x42b47c) != 1 && *(int *)(pbVar16 + 0x42b480) != 1 ||
            (0.1 < ABS((*(float *)(*(long *)(pbVar16 + 0x42afb8) + 0x2d3b4) -
                       *(float *)(pbVar16 + 0x42b040)) / *(float *)(pbVar16 + 0x42b040)))))) {
          FUN_10967f7c8(CONCAT17(cVar88,CONCAT16(uVar64,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  cVar70,CONCAT12(uVar63,CONCAT11(uVar58,uVar56)))))
                                                )),-*(float *)(pbVar16 + 0x42aff8),
                        -*(float *)(pbVar16 + 0x42affc),&fStack_368);
          FUN_109675c30(&fStack_368,&lStack_3a0);
          fVar90 = -fStack_1260;
          uVar56 = SUB41(fVar90,0);
          uVar58 = (char)((uint)fVar90 >> 8);
          uVar63 = (char)((uint)fVar90 >> 0x10);
          uVar69 = (char)((uint)fVar90 >> 0x18);
          uVar59 = 0;
          uVar60 = 0;
          uVar64 = 0;
          uVar65 = 0;
          FUN_10967f7c8(CONCAT17(uVar89,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,CONCAT13(
                                                  uVar76,CONCAT12(uVar75,CONCAT11(uVar68,uVar62)))))
                                                )),-fStack_1264,-fStack_125c,&lStack_3d0);
          uVar89 = uVar65;
          uVar85 = uVar64;
          uVar82 = uVar60;
          uVar79 = uVar59;
          uVar76 = uVar69;
          uVar75 = uVar63;
          uVar68 = uVar58;
          uVar62 = uVar56;
          pbVar22 = pbVar16 + 0x42b004;
          lVar29 = 5;
          do {
            if (*(int *)(pbVar22 + 8) != 0) {
              FUN_10967e884(pbVar16,pbVar22,&uStack_930,1);
              FUN_10967f908(&uStack_930,&lStack_3a0,&uStack_890,1);
              FUN_10967f908(&uStack_890,&lStack_3d0,auStack_8a0,1);
              uVar95 = NEON_scvtf(CONCAT44((int)((long)*(undefined8 *)(pbVar50 + 0xc) >> 0x21),
                                           (int)*(undefined8 *)(pbVar50 + 0xc) >> 1),4);
              uVar36 = CONCAT44((float)(uVar95 >> 0x20) + auStack_8a0._4_4_ * fStack_126c,
                                (float)uVar95 + auStack_8a0._0_4_ * fStack_126c);
              iVar110 = -(uint)((int)((uint)(iStack_898 == 0) << 0x1f) < 0);
              uVar36 = uVar36 ^ (uVar36 ^ uVar95) &
                                CONCAT17((char)((uint)iVar110 >> 0x18),
                                         CONCAT16((char)((uint)iVar110 >> 0x10),
                                                  CONCAT15((char)((uint)iVar110 >> 8),
                                                           CONCAT14((char)iVar110,
                                                                    -(uint)((int)((uint)(iStack_898
                                                                                        == 0) <<
                                                                                 0x1f) < 0)))));
              uVar62 = (undefined1)uVar36;
              uVar68 = (undefined1)(uVar36 >> 8);
              uVar75 = (undefined1)(uVar36 >> 0x10);
              uVar76 = (undefined1)(uVar36 >> 0x18);
              uVar79 = (undefined1)(uVar36 >> 0x20);
              uVar82 = (undefined1)(uVar36 >> 0x28);
              uVar85 = (undefined1)(uVar36 >> 0x30);
              uVar89 = (undefined1)(uVar36 >> 0x38);
            }
            pbVar52 = pbStack_12e8;
            pbVar22 = pbVar22 + 0xc;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 0;
          uStack_880 = CONCAT17(uVar89,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,CONCAT13(
                                                  uVar76,CONCAT12(uVar75,CONCAT11(uVar68,uVar62)))))
                                               ));
          aiStack_12d8[0] = 0;
          uStack_1240 = uStack_1240 | 2;
          fStack_f90 = *(float *)(pbStack_12e8 + 0x90);
          puVar25 = (undefined8 *)(((ulong)aiStack_12d8 | 4) + 4);
          do {
            *puVar25 = *(undefined8 *)((long)&uStack_880 + lVar29);
            lVar29 = lVar29 + 0xc;
            puVar25 = (undefined8 *)((long)puVar25 + 0x14);
          } while (lVar29 != 0x3c);
          FUN_10967610c(pbVar16);
        }
      }
    }
  }
LAB_109678898:
  if (((((*(byte *)(*(long *)(pbVar16 + 0x67d0) + 0x99) >> 2 & 1) != 0) && (aiStack_12d8[0] == 1))
      && (*(int *)(pbVar52 + 0x4d0) == 0)) && (*(int *)pbStack_1318 == 0)) {
    aiStack_12d8[0] = 0;
    uStack_1240 = uStack_1240 | 2;
    uVar91 = NEON_scvtf(uStack_1248,4);
    fVar90 = (float)uVar91 * 0.5;
    fVar99 = (float)((ulong)uVar91 >> 0x20) * 0.5;
    uVar62 = SUB41(fVar99,0);
    uVar68 = (undefined1)((uint)fVar99 >> 8);
    uVar75 = (undefined1)((uint)fVar99 >> 0x10);
    uVar76 = (undefined1)((uint)fVar99 >> 0x18);
    alStack_12d0[0] = CONCAT17(uVar76,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,fVar90))));
    uStack_12bc = CONCAT17(uVar76,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,fVar90))));
    uStack_12a8 = CONCAT17(uVar76,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,fVar90))));
    uStack_1294 = CONCAT17(uVar76,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,fVar90))));
    uStack_1280 = CONCAT17(uVar76,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,fVar90))));
    FUN_10967610c(pbVar16);
  }
  _gettimeofday(&uStack_880,0);
  dRam000000011382a498 = (double)(uStack_880 * 1000 + (long)((int)uStack_878 / 1000));
  pbStack_1300 = pbVar52 + 0x4cc;
  *(undefined8 *)(pbVar52 + 0x4dc) = *(undefined8 *)pbStack_1300;
  pbVar22 = (byte *)0x0;
  if (*(long *)(pbVar52 + 8) != 0) {
    pbVar22 = *(byte **)pbVar52;
    *(byte **)(pbVar52 + 8) = pbVar22;
  }
  pbVar117 = pbStack_12f0 + 8;
  iVar110 = *(int *)pbVar16;
  if (((*(float *)(pbVar52 + 0x4c8) < 10.0) && (*(int *)(pbStack_12e0 + 4) != 0)) &&
     (pbVar22 != (byte *)0x0)) {
    *(long *)(pbVar52 + 0x10) = *(long *)pbVar52;
  }
  iVar113 = 0;
  pbVar52[0] = 0;
  pbVar52[1] = 0;
  pbVar52[2] = 0;
  pbVar52[3] = 0;
  pbVar52[4] = 0;
  pbVar52[5] = 0;
  pbVar52[6] = 0;
  pbVar52[7] = 0;
  pbVar37 = *(byte **)(pbVar52 + 0x18);
  pbVar26 = *(byte **)(pbVar52 + 0x20);
  iVar41 = 999999;
  pbVar38 = *(byte **)(pbVar52 + 0x10);
  pbVar34 = pbVar117;
  iVar115 = -1;
  do {
    iVar3 = iVar41;
    iVar40 = iVar115;
    if (((pbVar34 != pbVar26) && (pbVar34 != pbVar37)) &&
       ((pbVar34 != pbVar22 &&
        (((pbVar34 != pbVar38 && (*(int *)(pbVar34 + 4) == 0)) &&
         (iVar3 = *(int *)pbVar34, iVar40 = iVar113, iVar41 <= *(int *)pbVar34)))))) {
      iVar3 = iVar41;
      iVar40 = iVar115;
    }
    iVar41 = iVar3;
    iVar113 = iVar113 + 1;
    pbVar34 = pbVar34 + 0x2d520;
    iVar115 = iVar40;
  } while (iVar113 != 0x10);
  if (iVar40 == -1) {
    iVar113 = 0x10;
    pbVar34 = pbVar117;
    do {
      if (((pbVar34 != pbVar26) && (pbVar34 != pbVar37)) &&
         ((pbVar34 != pbVar22 && ((pbVar34 != pbVar38 && (*(int *)(pbVar34 + 4) == 0))))))
      goto LAB_109678a20;
      pbVar34 = pbVar34 + 0x2d520;
      iVar113 = iVar113 + -1;
    } while (iVar113 != 0);
    iVar113 = 0x10;
    pbVar34 = pbVar117;
    do {
      if ((((pbVar34 != pbVar26) && (pbVar34 != pbVar37)) && (pbVar34 != pbVar22)) &&
         ((pbVar34 != pbVar38 && (0xf < iVar110 - *(int *)pbVar34)))) goto LAB_109678a20;
      pbVar34 = pbVar34 + 0x2d520;
      iVar113 = iVar113 + -1;
    } while (iVar113 != 0);
    iVar113 = 0x10;
    pbVar34 = pbVar117;
    do {
      if (((pbVar34 != pbVar26) && (pbVar34 != pbVar37)) &&
         ((pbVar34 != pbVar22 && (pbVar34 != pbVar38)))) goto LAB_109678a20;
      pbVar34 = pbVar34 + 0x2d520;
      iVar113 = iVar113 + -1;
    } while (iVar113 != 0);
    pbVar34 = (byte *)0x0;
  }
  else {
    pbVar34 = pbVar117 + (long)iVar40 * 0x2d520;
LAB_109678a20:
    *(byte **)pbVar52 = pbVar34;
  }
  pbVar37 = pbVar34 + 0x22414;
  if (pbVar22 == (byte *)0x0) {
    *(byte **)(pbVar52 + 8) = pbVar34;
    *(byte **)(pbVar52 + 0x10) = pbVar34;
    pbVar22 = pbVar34;
  }
  *(int *)pbVar34 = iVar110;
  pbVar34[4] = 0;
  pbVar34[5] = 0;
  pbVar34[6] = 0;
  pbVar34[7] = 0;
  pbVar26 = pbVar22 + 0x22414;
  lVar29 = 5;
  do {
    pbVar37[0x22cc] = 0;
    pbVar37[0x22cd] = 0;
    pbVar37[0x22ce] = 0x80;
    pbVar37[0x22cf] = 0x3f;
    *(int *)(pbVar37 + 0x22c4) = *(int *)(pbVar26 + 0x22c4);
    pbVar37[0x22d0] = 0;
    pbVar37[0x22d1] = 0;
    pbVar37[0x22d2] = 0;
    pbVar37[0x22d3] = 0;
    pbVar37[0x22d4] = 0;
    pbVar37[0x22d5] = 0;
    pbVar37[0x22d6] = 0;
    pbVar37[0x22d7] = 0;
    *(int *)pbVar37 = *(int *)pbVar26;
    pbVar37 = pbVar37 + 0x2318;
    pbVar26 = pbVar26 + 0x2318;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  pbVar34[0x2d3e4] = 2;
  pbVar34[0x2d3e5] = 0;
  pbVar34[0x2d3e6] = 0;
  pbVar34[0x2d3e7] = 0;
  pbVar34[0x2d38c] = 0;
  pbVar34[0x2d38d] = 0;
  pbVar34[0x2d38e] = 0x80;
  pbVar34[0x2d38f] = 0x3f;
  fVar90 = *(float *)(pbStack_12e0 + 0x20);
  *(float *)(pbVar34 + 0x2d3b4) = fVar90;
  if (fVar90 == 0.0) {
    *(int *)(pbVar34 + 0x2d3b4) = *(int *)(*(long *)(pbVar16 + 0x67d0) + 0x348);
  }
  _memcpy(pbVar34 + 0x22284,pbVar22 + 0x22284,400);
  lVar29 = *(long *)pbVar52;
  *(undefined4 *)(lVar29 + 0x5e0) = 0;
  lVar30 = *(long *)(pbVar16 + 0x67d0);
  if (*(int *)pbVar50 == 0) {
    if (*(int *)(lVar30 + 0xa0) == 1) {
      uVar91 = NEON_rev64(*(undefined8 *)(lVar30 + 0x74),4);
      fVar90 = (float)*(undefined8 *)(pbStack_12e0 + 0x34) + (float)uVar91;
      uVar62 = SUB41(fVar90,0);
      uVar68 = (undefined1)((uint)fVar90 >> 8);
      uVar75 = (undefined1)((uint)fVar90 >> 0x10);
      uVar76 = (undefined1)((uint)fVar90 >> 0x18);
      fVar90 = (float)((ulong)*(undefined8 *)(pbStack_12e0 + 0x34) >> 0x20) +
               (float)((ulong)uVar91 >> 0x20);
      uVar79 = SUB41(fVar90,0);
      uVar82 = (undefined1)((uint)fVar90 >> 8);
      uVar85 = (undefined1)((uint)fVar90 >> 0x10);
      cVar88 = (char)((uint)fVar90 >> 0x18);
      fVar90 = *(float *)(pbStack_12e0 + 0x3c);
      goto LAB_109678bfc;
    }
    uVar91 = NEON_rev64(*(undefined8 *)(lVar30 + 0x74),4);
    uVar62 = (undefined1)uVar91;
    uVar68 = (undefined1)((ulong)uVar91 >> 8);
    uVar75 = (undefined1)((ulong)uVar91 >> 0x10);
    uVar76 = (undefined1)((ulong)uVar91 >> 0x18);
    uVar79 = (undefined1)((ulong)uVar91 >> 0x20);
    uVar82 = (undefined1)((ulong)uVar91 >> 0x28);
    uVar85 = (undefined1)((ulong)uVar91 >> 0x30);
    cVar88 = (char)((ulong)uVar91 >> 0x38);
    fVar90 = *(float *)(lVar30 + 0x7c);
  }
  else {
    uVar91 = NEON_rev64(*(undefined8 *)(lVar30 + 0x74),4);
    fVar90 = (float)*(undefined8 *)(pbStack_12e0 + 0x28) + (float)uVar91;
    uVar62 = SUB41(fVar90,0);
    uVar68 = (undefined1)((uint)fVar90 >> 8);
    uVar75 = (undefined1)((uint)fVar90 >> 0x10);
    uVar76 = (undefined1)((uint)fVar90 >> 0x18);
    fVar90 = (float)((ulong)*(undefined8 *)(pbStack_12e0 + 0x28) >> 0x20) +
             (float)((ulong)uVar91 >> 0x20);
    uVar79 = SUB41(fVar90,0);
    uVar82 = (undefined1)((uint)fVar90 >> 8);
    uVar85 = (undefined1)((uint)fVar90 >> 0x10);
    cVar88 = (char)((uint)fVar90 >> 0x18);
    fVar90 = *(float *)(pbStack_12e0 + 0x30);
LAB_109678bfc:
    fVar90 = fVar90 + *(float *)(lVar30 + 0x7c);
  }
  *(ulong *)(lVar29 + 0x1c) =
       CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,CONCAT13(uVar76,CONCAT12(
                                                  uVar75,CONCAT11(uVar68,uVar62)))))));
  *(float *)(lVar29 + 0x24) = fVar90;
  *(undefined4 *)(lVar29 + 0x28) = *(undefined4 *)(lVar30 + 0x6c);
  *(ulong *)(lVar29 + 0x2d410) =
       CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,CONCAT13(uVar76,CONCAT12(
                                                  uVar75,CONCAT11(uVar68,uVar62)))))));
  *(float *)(lVar29 + 0x2d418) = fVar90;
  pbStack_1310 = pbVar117;
  FUN_10967f7c8(CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,CONCAT13(uVar76,
                                                  CONCAT12(uVar75,CONCAT11(uVar68,uVar62))))))),
                -(float)CONCAT13(cVar88,CONCAT12(uVar85,CONCAT11(uVar82,uVar79))),0,lVar29 + 0x2c);
  FUN_109675c30(*(long *)pbVar52 + 0x2c,*(long *)pbVar52 + 0x50);
  FUN_10967f7c8(CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,CONCAT13(uVar76,
                                                  CONCAT12(uVar75,CONCAT11(uVar68,uVar62))))))),0,
                -fVar90,*(long *)pbVar52 + 0x74);
  FUN_109675c30(*(long *)pbVar52 + 0x74,*(long *)pbVar52 + 0x98);
  FUN_10967f6ec(*(long *)pbVar52 + 0x1c);
  lVar29 = *(long *)pbVar52;
  fVar99 = *(float *)(lVar29 + 0x28);
  FUN_10967f7c8(CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,CONCAT13(uVar76,
                                                  CONCAT12(uVar75,CONCAT11(uVar68,uVar62))))))),
                -*(float *)(*(long *)(pbVar16 + 0x67d0) + 0x84),0,&lStack_3a0);
  FUN_10967f908(&UNK_10dfd94f8,&lStack_3a0,&uStack_880,4);
  FUN_10967f908(&UNK_10dfd9528,&lStack_3a0,&fStack_368,4);
  pbVar117 = pbStack_12e0;
  pbVar22 = pbStack_1308;
  uVar62 = (undefined1)uStack_880;
  uVar68 = (undefined1)((ulong)uStack_880 >> 8);
  uVar75 = (undefined1)((ulong)uStack_880 >> 0x10);
  uVar76 = (undefined1)((ulong)uStack_880 >> 0x18);
  fVar90 = 1.0;
  if ((float)uStack_880 == uStack_878._4_4_) {
    fVar98 = 0.0;
    fVar101 = 1.0;
  }
  else {
    fVar101 = 0.0;
    fVar98 = 1.0;
    if (uStack_880._4_4_ == (float)uStack_870) {
      uVar62 = (undefined1)((ulong)uStack_880 >> 0x20);
      uVar68 = (undefined1)((ulong)uStack_880 >> 0x28);
      uVar75 = (undefined1)((ulong)uStack_880 >> 0x30);
      uVar76 = (undefined1)((ulong)uStack_880 >> 0x38);
    }
    else {
      fVar101 = -(uStack_880._4_4_ - (float)uStack_870) / ((float)uStack_880 - uStack_878._4_4_);
      fVar103 = uStack_880._4_4_ + (float)uStack_880 * fVar101;
      uVar62 = SUB41(fVar103,0);
      uVar68 = (undefined1)((uint)fVar103 >> 8);
      uVar75 = (undefined1)((uint)fVar103 >> 0x10);
      uVar76 = (undefined1)((uint)fVar103 >> 0x18);
    }
  }
  fVar103 = 0.0;
  fVar111 = (float)uStack_868;
  if ((float)uStack_868 != fStack_85c) {
    fVar90 = 0.0;
    fVar103 = 1.0;
    fVar111 = uStack_868._4_4_;
    if (uStack_868._4_4_ != fStack_858) {
      fVar90 = -(uStack_868._4_4_ - fStack_858) / ((float)uStack_868 - fStack_85c);
      fVar111 = uStack_868._4_4_ + (float)uStack_868 * fVar90;
      fVar103 = 1.0;
    }
  }
  fVar124 = 1.0;
  fVar108 = 0.0;
  if (fStack_368 == afStack_360[1]) {
    fVar122 = 0.0;
    fVar123 = 1.0;
    fVar106 = fStack_368;
  }
  else {
    fVar123 = 0.0;
    fVar122 = 1.0;
    fVar106 = fStack_364;
    if (fStack_364 != afStack_360[2]) {
      fVar123 = -(fStack_364 - afStack_360[2]) / (fStack_368 - afStack_360[1]);
      fVar106 = fStack_364 + fStack_368 * fVar123;
    }
  }
  fVar107 = afStack_360[4];
  if (afStack_360[4] != (float)uStack_344) {
    fVar124 = 0.0;
    fVar108 = 1.0;
    fVar107 = fStack_34c;
    if (fStack_34c != uStack_344._4_4_) {
      fVar124 = -(fStack_34c - uStack_344._4_4_) / (afStack_360[4] - (float)uStack_344);
      fVar107 = fStack_34c + afStack_360[4] * fVar124;
    }
  }
  fVar8 = fVar124;
  fVar109 = fVar106;
  fVar9 = fVar122;
  if (fVar122 == 0.0) {
    fVar8 = fVar123;
    fVar109 = fVar107;
    fVar123 = fVar124;
    fVar9 = fVar108;
    fVar108 = fVar122;
  }
  if (fVar122 == 0.0) {
    fVar107 = fVar106;
  }
  fVar124 = (fVar107 - (fVar108 / fVar9) * fVar109) / (fVar8 - (fVar108 / fVar9) * fVar123);
  bVar13 = fVar98 == 0.0;
  fVar108 = fVar101;
  if (bVar13) {
    fVar108 = fVar90;
  }
  fVar106 = fVar103;
  fVar122 = (float)CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar68,uVar62)));
  if (bVar13) {
    fVar106 = fVar98;
    fVar98 = fVar103;
    fVar122 = fVar111;
  }
  uVar89 = SUB41(fVar111,0);
  uVar56 = (char)((uint)fVar111 >> 8);
  uVar58 = (char)((uint)fVar111 >> 0x10);
  uVar63 = (char)((uint)fVar111 >> 0x18);
  if (bVar13) {
    uVar89 = uVar62;
    uVar56 = uVar68;
    uVar58 = uVar75;
    uVar63 = uVar76;
  }
  if (bVar13) {
    fVar90 = fVar101;
  }
  fVar103 = ((float)CONCAT13(uVar63,CONCAT12(uVar58,CONCAT11(uVar56,uVar89))) -
            (fVar106 / fVar98) * fVar122) / (fVar90 - (fVar106 / fVar98) * fVar108);
  fVar90 = (float)(*(int *)(pbVar50 + 0xc) >> 1) + fVar99 * fVar103;
  uVar62 = SUB41(fVar90,0);
  uVar68 = (undefined1)((uint)fVar90 >> 8);
  uVar75 = (undefined1)((uint)fVar90 >> 0x10);
  cVar70 = (char)((uint)fVar90 >> 0x18);
  fVar101 = (float)(*(int *)(pbVar50 + 0xc) >> 1) + fVar99 * fVar124;
  if (fVar90 == fVar101) {
    uVar91 = 0x3f800000;
  }
  else {
    fVar98 = (float)(*(int *)(pbVar50 + 0x10) >> 1) +
             fVar99 * ((fVar122 - fVar103 * fVar108) / fVar98);
    fVar99 = (float)(*(int *)(pbVar50 + 0x10) >> 1) +
             fVar99 * ((fVar109 - fVar124 * fVar123) / fVar9);
    if (fVar98 == fVar99) {
      uVar91 = 0x3f80000000000000;
      uVar62 = SUB41(fVar98,0);
      uVar68 = (undefined1)((uint)fVar98 >> 8);
      uVar75 = (undefined1)((uint)fVar98 >> 0x10);
      cVar70 = (char)((uint)fVar98 >> 0x18);
    }
    else {
      fVar99 = -(fVar98 - fVar99) / (fVar90 - fVar101);
      fVar98 = fVar98 + fVar90 * fVar99;
      uVar62 = SUB41(fVar98,0);
      uVar68 = (undefined1)((uint)fVar98 >> 8);
      uVar75 = (undefined1)((uint)fVar98 >> 0x10);
      cVar70 = (char)((uint)fVar98 >> 0x18);
      uVar91 = NEON_fmov(0x3f800000,4);
      uVar91 = CONCAT44((int)((ulong)uVar91 >> 0x20),fVar99);
    }
  }
  *(undefined8 *)(lVar29 + 0x2d514) = uVar91;
  *(float *)(lVar29 + 0x2d51c) = -(float)CONCAT13(cVar70,CONCAT12(uVar75,CONCAT11(uVar68,uVar62)));
  lVar29 = *(long *)pbVar52;
  *(undefined8 *)(lVar29 + 0x2d3c8) = 0;
  *(undefined8 *)(lVar29 + 0x2d3c0) = 0x3f800000;
  *(undefined8 *)(lVar29 + 0x2d3d8) = 0;
  *(undefined8 *)(lVar29 + 0x2d3d0) = 0x3f800000;
  uStack_1328 = 0;
  dStack_1330 = 5.26354424712089e-315;
  *(undefined4 *)(lVar29 + 0x2d3e0) = 0x3f800000;
  pbStack_1300[0] = 2;
  pbStack_1300[1] = 0;
  pbStack_1300[2] = 0;
  pbStack_1300[3] = 0;
  pbStack_1300[4] = 2;
  pbStack_1300[5] = 0;
  pbStack_1300[6] = 0;
  pbStack_1300[7] = 0;
  pbVar52[0x4d4] = 0;
  pbVar52[0x4d5] = 0;
  pbVar52[0x4d6] = 0;
  pbVar52[0x4d7] = 0;
  pbStack_12e0[0xc] = 0;
  pbStack_12e0[0xd] = 0;
  pbStack_12e0[0xe] = 0;
  pbStack_12e0[0xf] = 0;
  FUN_10967ddf4(pbVar16,*(undefined8 *)(pbVar16 + 0x42c778));
  *(int *)(*(long *)pbVar52 + 8) =
       (int)(float)*(int *)(pbVar22 +
                           (long)(*(int *)pbVar15 + (*(int *)pbVar15 >> 0x1f) * -0x80) * 4);
  if (**(int **)(pbVar16 + 0x67d0) == 0) {
    _gettimeofday(&uStack_880,0);
    dRam000000011382a4d8 = (double)(uStack_880 * 1000 + (long)((int)uStack_878 / 1000));
    lVar29 = *(long *)(pbVar16 + 0x67d0);
    uVar91 = *(undefined8 *)(lVar29 + (long)*(int *)(lVar29 + 0x68) * 0x14 + 8);
    if (((*(byte *)(lVar29 + 0x98) >> 1 & 1) == 0) && (*(float *)(pbVar117 + 0x1c) != 0.0)) {
      lVar29 = *(long *)pbVar52;
    }
    else {
      iVar110 = *(int *)(lVar29 + 0x348);
      uVar62 = (undefined1)iVar110;
      uVar68 = (undefined1)((uint)iVar110 >> 8);
      uVar75 = (undefined1)((uint)iVar110 >> 0x10);
      cVar70 = (char)((uint)iVar110 >> 0x18);
      lVar29 = *(long *)pbVar52;
      *(int *)(lVar29 + 0x2d3b4) = iVar110;
      *(int *)(pbVar117 + 0x1c) = iVar110;
      pbVar52[0x99c] = 0;
      pbVar52[0x99d] = 0;
      pbVar52[0x99e] = 0;
      pbVar52[0x99f] = 0;
      *(ulong *)(pbVar52 + 0x964) =
           CONCAT17(cVar70,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,iVar110))));
      *(ulong *)(pbVar52 + 0x95c) =
           CONCAT17(cVar70,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,iVar110))));
      *(ulong *)(pbVar52 + 0x974) =
           CONCAT17(cVar70,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,iVar110))));
      *(ulong *)(pbVar52 + 0x96c) =
           CONCAT17(cVar70,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,iVar110))));
      *(ulong *)(pbVar52 + 0x984) =
           CONCAT17(cVar70,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,iVar110))));
      *(ulong *)(pbVar52 + 0x97c) =
           CONCAT17(cVar70,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,iVar110))));
      *(ulong *)(pbVar52 + 0x994) =
           CONCAT17(cVar70,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,iVar110))));
      *(ulong *)(pbVar52 + 0x98c) =
           CONCAT17(cVar70,CONCAT16(uVar75,CONCAT15(uVar68,CONCAT14(uVar62,iVar110))));
      pbVar52[0x9e0] = 0;
      pbVar52[0x9e1] = 0;
      pbVar52[0x9e2] = 0;
      pbVar52[0x9e3] = 0;
      _memset_pattern16(pbVar16 + 0x42b950,&UNK_10dfd94b0,0x40);
    }
    _bzero(lVar29 + 0x130,0x4b0);
    lVar29 = *(long *)pbVar52;
    *(undefined8 *)(lVar29 + 0x130) = uVar91;
    *(undefined4 *)(lVar29 + 0x138) = 1;
    *(int *)(lVar29 + 0x22284) = *(int *)pbVar16;
    if ((*(byte *)(*(long *)(pbVar16 + 0x67d0) + 0x99) >> 2 & 1) == 0) {
      puVar25 = (undefined8 *)0x0;
    }
    else {
      uVar95 = *(ulong *)(*(long *)(pbVar16 + 0x67d0) + 8);
      uVar95 = uVar95 ^ (uVar95 ^ 0x42c8000042c80000) &
                        CONCAT44(-(uint)((float)(uVar95 >> 0x20) < 100.0),
                                 -(uint)((float)uVar95 < 100.0));
      uVar36 = NEON_scvtf(*(undefined8 *)(pbStack_12f8 + 0xc),4);
      fVar99 = (float)uVar36 + -100.0;
      fVar90 = (float)(uVar36 >> 0x20);
      fVar98 = fVar90 + -100.0;
      uVar95 = uVar95 ^ (uVar95 ^ CONCAT44(fVar98,fVar99)) &
                        CONCAT44(-(uint)(fVar98 < (float)(uVar95 >> 0x20)),
                                 -(uint)(fVar99 < (float)uVar95));
      fVar99 = (float)uVar95;
      fVar98 = (float)(uVar95 >> 0x20);
      uVar91 = NEON_fmaxnm(CONCAT44(fVar98 + -100.0,fVar99 + -80.0),0,4);
      uStack_880 = CONCAT44((int)(float)((ulong)uVar91 >> 0x20),(int)(float)uVar91);
      fVar99 = fVar99 + 150.0;
      fVar98 = fVar98 + 100.0;
      uVar36 = uVar36 ^ (uVar36 ^ CONCAT44(fVar98,fVar99)) &
                        CONCAT44(-(uint)(fVar98 < fVar90),-(uint)(fVar99 < (float)uVar36));
      uVar91 = NEON_scvtf(uStack_880,4);
      iVar110 = (int)((float)(uVar36 >> 0x20) - (float)((ulong)uVar91 >> 0x20));
      uVar79 = (undefined1)iVar110;
      uVar82 = (undefined1)((uint)iVar110 >> 8);
      uVar85 = (undefined1)((uint)iVar110 >> 0x10);
      cVar88 = (char)((uint)iVar110 >> 0x18);
      uStack_878 = CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,(int)((float)
                                                  uVar36 - (float)uVar91)))));
      puVar25 = &uStack_880;
    }
    pbVar22 = pbVar16;
    FUN_10967b374(pbVar16,pbVar16 + 0x124fd8,lVar29,1,puVar25,pbVar16 + 0x6878);
    lVar30 = *(long *)pbVar52;
    *(int *)(lVar30 + 0xc) = (int)pbVar22;
    lVar29 = 0;
    *(undefined8 *)(lVar30 + 0x2d398) = uStack_1328;
    *(double *)(lVar30 + 0x2d390) = dStack_1330;
    *(undefined8 *)(lVar30 + 0x2d3a8) = uStack_1328;
    *(double *)(lVar30 + 0x2d3a0) = dStack_1330;
    *(undefined4 *)(lVar30 + 0x2d3b0) = 0x3f800000;
    lVar30 = 0x22414;
    do {
      if ((*(uint *)(*(long *)(pbVar16 + 0x67d0) + lVar29 + 4) & 0xfffffffd) == 1) {
        uStack_880 = *(long *)(*(long *)(pbVar16 + 0x67d0) + lVar29 + 8);
        uStack_878 = CONCAT44(uStack_878._4_4_,1);
        FUN_109676e08(pbVar16,*(long *)pbVar52 + 0x1c,&uStack_880,*(long *)pbVar52 + lVar30);
      }
      else {
        *(undefined4 *)(*(long *)pbVar52 + lVar30) = 0;
      }
      pbVar22 = pbStack_12e0;
      lVar30 = lVar30 + 0x2318;
      lVar29 = lVar29 + 0x14;
    } while (lVar29 != 100);
    lVar29 = *(long *)pbVar52;
    *(undefined4 *)(lVar29 + 4) = 1;
    *(long *)(pbVar52 + 0x18) = lVar29;
    *(long *)(pbVar52 + 0x20) = lVar29;
    pbVar52[0x4c8] = 0;
    pbVar52[0x4c9] = 0;
    pbVar52[0x4ca] = 0;
    pbVar52[0x4cb] = 0;
    pbVar52[0x4cc] = 1;
    pbVar52[0x4cd] = 0;
    pbVar52[0x4ce] = 0;
    pbVar52[0x4cf] = 0;
    pbVar22[0x10] = 0;
    pbVar22[0x11] = 0;
    pbVar22[0x12] = 0;
    pbVar22[0x13] = 0;
    pbVar22[0x14] = 0;
    pbVar22[0x15] = 0;
    pbVar22[0x16] = 0;
    pbVar22[0x17] = 0;
    pbVar22[0x18] = 0;
    pbVar22[0x19] = 0;
    pbVar22[0x1a] = 0;
    pbVar22[0x1b] = 0;
    pbVar52[0x4d8] = 0;
    pbVar52[0x4d9] = 0;
    pbVar52[0x4da] = 0;
    pbVar52[0x4db] = 0;
    pbVar52[0x3c8] = 100;
    pbVar52[0x3c9] = 0;
    pbVar52[0x3ca] = 0;
    pbVar52[0x3cb] = 0;
    pbVar52[0x448] = 100;
    pbVar52[0x449] = 0;
    pbVar52[0x44a] = 0;
    pbVar52[1099] = 0;
    pbVar16[0x42b0c0] = 0;
    pbVar16[0x42b0c1] = 0;
    pbVar16[0x42b0c2] = 0;
    pbVar16[0x42b0c3] = 0;
    pbVar16[0x42b0c4] = 0;
    pbVar16[0x42b0c5] = 0;
    pbVar16[0x42b0c6] = 0;
    pbVar16[0x42b0c7] = 0;
    pbVar16[0x42b0b8] = 0;
    pbVar16[0x42b0b9] = 0;
    pbVar16[0x42b0ba] = 0;
    pbVar16[0x42b0bb] = 0;
    pbVar16[0x42b0bc] = 0;
    pbVar16[0x42b0bd] = 0;
    pbVar16[0x42b0be] = 0;
    pbVar16[0x42b0bf] = 0;
    pbVar16[0x42b0d0] = 0;
    pbVar16[0x42b0d1] = 0;
    pbVar16[0x42b0d2] = 0;
    pbVar16[0x42b0d3] = 0;
    pbVar16[0x42b0d4] = 0;
    pbVar16[0x42b0d5] = 0;
    pbVar16[0x42b0d6] = 0;
    pbVar16[0x42b0d7] = 0;
    pbVar16[0x42b0c8] = 0;
    pbVar16[0x42b0c9] = 0;
    pbVar16[0x42b0ca] = 0;
    pbVar16[0x42b0cb] = 0;
    pbVar16[0x42b0cc] = 0;
    pbVar16[0x42b0cd] = 0;
    pbVar16[0x42b0ce] = 0;
    pbVar16[0x42b0cf] = 0;
    pbVar16[0x42b0a0] = 0;
    pbVar16[0x42b0a1] = 0;
    pbVar16[0x42b0a2] = 0;
    pbVar16[0x42b0a3] = 0;
    pbVar16[0x42b0a4] = 0;
    pbVar16[0x42b0a5] = 0;
    pbVar16[0x42b0a6] = 0;
    pbVar16[0x42b0a7] = 0;
    pbVar16[0x42b098] = 0;
    pbVar16[0x42b099] = 0;
    pbVar16[0x42b09a] = 0;
    pbVar16[0x42b09b] = 0;
    pbVar16[0x42b09c] = 0;
    pbVar16[0x42b09d] = 0;
    pbVar16[0x42b09e] = 0;
    pbVar16[0x42b09f] = 0;
    pbVar16[0x42b0b0] = 0;
    pbVar16[0x42b0b1] = 0;
    pbVar16[0x42b0b2] = 0;
    pbVar16[0x42b0b3] = 0;
    pbVar16[0x42b0b4] = 0;
    pbVar16[0x42b0b5] = 0;
    pbVar16[0x42b0b6] = 0;
    pbVar16[0x42b0b7] = 0;
    pbVar16[0x42b0a8] = 0;
    pbVar16[0x42b0a9] = 0;
    pbVar16[0x42b0aa] = 0;
    pbVar16[0x42b0ab] = 0;
    pbVar16[0x42b0ac] = 0;
    pbVar16[0x42b0ad] = 0;
    pbVar16[0x42b0ae] = 0;
    pbVar16[0x42b0af] = 0;
    pbVar16[0x42b080] = 0;
    pbVar16[0x42b081] = 0;
    pbVar16[0x42b082] = 0;
    pbVar16[0x42b083] = 0;
    pbVar16[0x42b084] = 0;
    pbVar16[0x42b085] = 0;
    pbVar16[0x42b086] = 0;
    pbVar16[0x42b087] = 0;
    pbVar16[0x42b078] = 0;
    pbVar16[0x42b079] = 0;
    pbVar16[0x42b07a] = 0;
    pbVar16[0x42b07b] = 0;
    pbVar16[0x42b07c] = 0;
    pbVar16[0x42b07d] = 0;
    pbVar16[0x42b07e] = 0;
    pbVar16[0x42b07f] = 0;
    pbVar16[0x42b090] = 0;
    pbVar16[0x42b091] = 0;
    pbVar16[0x42b092] = 0;
    pbVar16[0x42b093] = 0;
    pbVar16[0x42b094] = 0;
    pbVar16[0x42b095] = 0;
    pbVar16[0x42b096] = 0;
    pbVar16[0x42b097] = 0;
    pbVar16[0x42b088] = 0;
    pbVar16[0x42b089] = 0;
    pbVar16[0x42b08a] = 0;
    pbVar16[0x42b08b] = 0;
    pbVar16[0x42b08c] = 0;
    pbVar16[0x42b08d] = 0;
    pbVar16[0x42b08e] = 0;
    pbVar16[0x42b08f] = 0;
    pbVar16[0x42b060] = 0;
    pbVar16[0x42b061] = 0;
    pbVar16[0x42b062] = 0;
    pbVar16[0x42b063] = 0;
    pbVar16[0x42b064] = 0;
    pbVar16[0x42b065] = 0;
    pbVar16[0x42b066] = 0;
    pbVar16[0x42b067] = 0;
    pbVar16[0x42b058] = 0;
    pbVar16[0x42b059] = 0;
    pbVar16[0x42b05a] = 0;
    pbVar16[0x42b05b] = 0;
    pbVar16[0x42b05c] = 0;
    pbVar16[0x42b05d] = 0;
    pbVar16[0x42b05e] = 0;
    pbVar16[0x42b05f] = 0;
    pbVar16[0x42b070] = 0;
    pbVar16[0x42b071] = 0;
    pbVar16[0x42b072] = 0;
    pbVar16[0x42b073] = 0;
    pbVar16[0x42b074] = 0;
    pbVar16[0x42b075] = 0;
    pbVar16[0x42b076] = 0;
    pbVar16[0x42b077] = 0;
    pbVar16[0x42b068] = 0;
    pbVar16[0x42b069] = 0;
    pbVar16[0x42b06a] = 0;
    pbVar16[0x42b06b] = 0;
    pbVar16[0x42b06c] = 0;
    pbVar16[0x42b06d] = 0;
    pbVar16[0x42b06e] = 0;
    pbVar16[0x42b06f] = 0;
    pbVar16[0x42b250] = 0;
    pbVar16[0x42b251] = 0;
    pbVar16[0x42b252] = 0;
    pbVar16[0x42b253] = 0;
    pbVar16[0x42b254] = 0;
    pbVar16[0x42b255] = 0;
    pbVar16[0x42b256] = 0;
    pbVar16[0x42b257] = 0;
    pbVar16[0x42b248] = 0;
    pbVar16[0x42b249] = 0;
    pbVar16[0x42b24a] = 0;
    pbVar16[0x42b24b] = 0;
    pbVar16[0x42b24c] = 0;
    pbVar16[0x42b24d] = 0;
    pbVar16[0x42b24e] = 0;
    pbVar16[0x42b24f] = 0;
    pbVar16[0x42b260] = 0;
    pbVar16[0x42b261] = 0;
    pbVar16[0x42b262] = 0;
    pbVar16[0x42b263] = 0;
    pbVar16[0x42b264] = 0;
    pbVar16[0x42b265] = 0;
    pbVar16[0x42b266] = 0;
    pbVar16[0x42b267] = 0;
    pbVar16[0x42b258] = 0;
    pbVar16[0x42b259] = 0;
    pbVar16[0x42b25a] = 0;
    pbVar16[0x42b25b] = 0;
    pbVar16[0x42b25c] = 0;
    pbVar16[0x42b25d] = 0;
    pbVar16[0x42b25e] = 0;
    pbVar16[0x42b25f] = 0;
    pbVar16[0x42b230] = 0;
    pbVar16[0x42b231] = 0;
    pbVar16[0x42b232] = 0;
    pbVar16[0x42b233] = 0;
    pbVar16[0x42b234] = 0;
    pbVar16[0x42b235] = 0;
    pbVar16[0x42b236] = 0;
    pbVar16[0x42b237] = 0;
    pbVar16[0x42b228] = 0;
    pbVar16[0x42b229] = 0;
    pbVar16[0x42b22a] = 0;
    pbVar16[0x42b22b] = 0;
    pbVar16[0x42b22c] = 0;
    pbVar16[0x42b22d] = 0;
    pbVar16[0x42b22e] = 0;
    pbVar16[0x42b22f] = 0;
    pbVar16[0x42b240] = 0;
    pbVar16[0x42b241] = 0;
    pbVar16[0x42b242] = 0;
    pbVar16[0x42b243] = 0;
    pbVar16[0x42b244] = 0;
    pbVar16[0x42b245] = 0;
    pbVar16[0x42b246] = 0;
    pbVar16[0x42b247] = 0;
    pbVar16[0x42b238] = 0;
    pbVar16[0x42b239] = 0;
    pbVar16[0x42b23a] = 0;
    pbVar16[0x42b23b] = 0;
    pbVar16[0x42b23c] = 0;
    pbVar16[0x42b23d] = 0;
    pbVar16[0x42b23e] = 0;
    pbVar16[0x42b23f] = 0;
    pbVar16[0x42b210] = 0;
    pbVar16[0x42b211] = 0;
    pbVar16[0x42b212] = 0;
    pbVar16[0x42b213] = 0;
    pbVar16[0x42b214] = 0;
    pbVar16[0x42b215] = 0;
    pbVar16[0x42b216] = 0;
    pbVar16[0x42b217] = 0;
    pbVar16[0x42b208] = 0;
    pbVar16[0x42b209] = 0;
    pbVar16[0x42b20a] = 0;
    pbVar16[0x42b20b] = 0;
    pbVar16[0x42b20c] = 0;
    pbVar16[0x42b20d] = 0;
    pbVar16[0x42b20e] = 0;
    pbVar16[0x42b20f] = 0;
    pbVar16[0x42b220] = 0;
    pbVar16[0x42b221] = 0;
    pbVar16[0x42b222] = 0;
    pbVar16[0x42b223] = 0;
    pbVar16[0x42b224] = 0;
    pbVar16[0x42b225] = 0;
    pbVar16[0x42b226] = 0;
    pbVar16[0x42b227] = 0;
    pbVar16[0x42b218] = 0;
    pbVar16[0x42b219] = 0;
    pbVar16[0x42b21a] = 0;
    pbVar16[0x42b21b] = 0;
    pbVar16[0x42b21c] = 0;
    pbVar16[0x42b21d] = 0;
    pbVar16[0x42b21e] = 0;
    pbVar16[0x42b21f] = 0;
    pbVar16[0x42b1f0] = 0;
    pbVar16[0x42b1f1] = 0;
    pbVar16[0x42b1f2] = 0;
    pbVar16[0x42b1f3] = 0;
    pbVar16[0x42b1f4] = 0;
    pbVar16[0x42b1f5] = 0;
    pbVar16[0x42b1f6] = 0;
    pbVar16[0x42b1f7] = 0;
    pbVar16[0x42b1e8] = 0;
    pbVar16[0x42b1e9] = 0;
    pbVar16[0x42b1ea] = 0;
    pbVar16[0x42b1eb] = 0;
    pbVar16[0x42b1ec] = 0;
    pbVar16[0x42b1ed] = 0;
    pbVar16[0x42b1ee] = 0;
    pbVar16[0x42b1ef] = 0;
    pbVar16[0x42b200] = 0;
    pbVar16[0x42b201] = 0;
    pbVar16[0x42b202] = 0;
    pbVar16[0x42b203] = 0;
    pbVar16[0x42b204] = 0;
    pbVar16[0x42b205] = 0;
    pbVar16[0x42b206] = 0;
    pbVar16[0x42b207] = 0;
    pbVar16[0x42b1f8] = 0;
    pbVar16[0x42b1f9] = 0;
    pbVar16[0x42b1fa] = 0;
    pbVar16[0x42b1fb] = 0;
    pbVar16[0x42b1fc] = 0;
    pbVar16[0x42b1fd] = 0;
    pbVar16[0x42b1fe] = 0;
    pbVar16[0x42b1ff] = 0;
    pbVar16[0x42b3f0] = 0;
    pbVar16[0x42b3f1] = 0;
    pbVar16[0x42b3f2] = 0;
    pbVar16[0x42b3f3] = 0;
    pbVar16[0x42b3f4] = 0;
    pbVar16[0x42b3f5] = 0;
    pbVar16[0x42b3f6] = 0;
    pbVar16[0x42b3f7] = 0;
    pbVar16[0x42b3e8] = 0;
    pbVar16[0x42b3e9] = 0;
    pbVar16[0x42b3ea] = 0;
    pbVar16[0x42b3eb] = 0;
    pbVar16[0x42b3ec] = 0;
    pbVar16[0x42b3ed] = 0;
    pbVar16[0x42b3ee] = 0;
    pbVar16[0x42b3ef] = 0;
    pbVar16[0x42b3d4] = 0;
    pbVar16[0x42b3d5] = 0;
    pbVar16[0x42b3d6] = 0;
    pbVar16[0x42b3d7] = 0;
    pbVar16[0x42b3d8] = 0;
    pbVar16[0x42b3d9] = 0;
    pbVar16[0x42b3da] = 0;
    pbVar16[0x42b3db] = 0;
    pbVar16[0x42b3cc] = 0;
    pbVar16[0x42b3cd] = 0;
    pbVar16[0x42b3ce] = 0;
    pbVar16[0x42b3cf] = 0;
    pbVar16[0x42b3d0] = 0;
    pbVar16[0x42b3d1] = 0;
    pbVar16[0x42b3d2] = 0;
    pbVar16[0x42b3d3] = 0;
    pbVar16[0x42b3e4] = 0;
    pbVar16[0x42b3e5] = 0;
    pbVar16[0x42b3e6] = 0;
    pbVar16[0x42b3e7] = 0;
    pbVar16[0x42b3e8] = 0;
    pbVar16[0x42b3e9] = 0;
    pbVar16[0x42b3ea] = 0;
    pbVar16[0x42b3eb] = 0;
    pbVar16[0x42b3dc] = 0;
    pbVar16[0x42b3dd] = 0;
    pbVar16[0x42b3de] = 0;
    pbVar16[0x42b3df] = 0;
    pbVar16[0x42b3e0] = 0;
    pbVar16[0x42b3e1] = 0;
    pbVar16[0x42b3e2] = 0;
    pbVar16[0x42b3e3] = 0;
    pbVar16[0x42b3b4] = 0;
    pbVar16[0x42b3b5] = 0;
    pbVar16[0x42b3b6] = 0;
    pbVar16[0x42b3b7] = 0;
    pbVar16[0x42b3b8] = 0;
    pbVar16[0x42b3b9] = 0;
    pbVar16[0x42b3ba] = 0;
    pbVar16[0x42b3bb] = 0;
    pbVar16[0x42b3ac] = 0;
    pbVar16[0x42b3ad] = 0;
    pbVar16[0x42b3ae] = 0;
    pbVar16[0x42b3af] = 0;
    pbVar16[0x42b3b0] = 0;
    pbVar16[0x42b3b1] = 0;
    pbVar16[0x42b3b2] = 0;
    pbVar16[0x42b3b3] = 0;
    pbVar16[0x42b3c4] = 0;
    pbVar16[0x42b3c5] = 0;
    pbVar16[0x42b3c6] = 0;
    pbVar16[0x42b3c7] = 0;
    pbVar16[0x42b3c8] = 0;
    pbVar16[0x42b3c9] = 0;
    pbVar16[0x42b3ca] = 0;
    pbVar16[0x42b3cb] = 0;
    pbVar16[0x42b3bc] = 0;
    pbVar16[0x42b3bd] = 0;
    pbVar16[0x42b3be] = 0;
    pbVar16[0x42b3bf] = 0;
    pbVar16[0x42b3c0] = 0;
    pbVar16[0x42b3c1] = 0;
    pbVar16[0x42b3c2] = 0;
    pbVar16[0x42b3c3] = 0;
    pbVar16[0x42b394] = 0;
    pbVar16[0x42b395] = 0;
    pbVar16[0x42b396] = 0;
    pbVar16[0x42b397] = 0;
    pbVar16[0x42b398] = 0;
    pbVar16[0x42b399] = 0;
    pbVar16[0x42b39a] = 0;
    pbVar16[0x42b39b] = 0;
    pbVar16[0x42b38c] = 0;
    pbVar16[0x42b38d] = 0;
    pbVar16[0x42b38e] = 0;
    pbVar16[0x42b38f] = 0;
    pbVar16[0x42b390] = 0;
    pbVar16[0x42b391] = 0;
    pbVar16[0x42b392] = 0;
    pbVar16[0x42b393] = 0;
    pbVar16[0x42b3a4] = 0;
    pbVar16[0x42b3a5] = 0;
    pbVar16[0x42b3a6] = 0;
    pbVar16[0x42b3a7] = 0;
    pbVar16[0x42b3a8] = 0;
    pbVar16[0x42b3a9] = 0;
    pbVar16[0x42b3aa] = 0;
    pbVar16[0x42b3ab] = 0;
    pbVar16[0x42b39c] = 0;
    pbVar16[0x42b39d] = 0;
    pbVar16[0x42b39e] = 0;
    pbVar16[0x42b39f] = 0;
    pbVar16[0x42b3a0] = 0;
    pbVar16[0x42b3a1] = 0;
    pbVar16[0x42b3a2] = 0;
    pbVar16[0x42b3a3] = 0;
    pbVar16[0x42b384] = 0;
    pbVar16[0x42b385] = 0;
    pbVar16[0x42b386] = 0;
    pbVar16[0x42b387] = 0;
    pbVar16[0x42b388] = 0;
    pbVar16[0x42b389] = 0;
    pbVar16[0x42b38a] = 0;
    pbVar16[0x42b38b] = 0;
    pbVar16[0x42b37c] = 0;
    pbVar16[0x42b37d] = 0;
    pbVar16[0x42b37e] = 0;
    pbVar16[0x42b37f] = 0;
    pbVar16[0x42b380] = 0;
    pbVar16[0x42b381] = 0;
    pbVar16[0x42b382] = 0;
    pbVar16[0x42b383] = 0;
    _memset_pattern16(pbVar16 + 0x42b3fc,&UNK_10dfd94c0,0x7c);
    *(int *)pbVar22 = *(int *)pbVar16;
    pbVar22[4] = 1;
    pbVar22[5] = 0;
    pbVar22[6] = 0;
    pbVar22[7] = 0;
    pbVar22[8] = 0;
    pbVar22[9] = 0;
    pbVar22[10] = 0;
    pbVar22[0xb] = 0;
    pbVar52[0x4e4] = 0;
    pbVar52[0x4e5] = 0;
    pbVar52[0x4e6] = 0;
    pbVar52[0x4e7] = 0;
    *(undefined4 *)(lVar29 + 0x2d3b8) = 0;
    pbVar16[0x42c240] = 0;
    pbVar16[0x42c241] = 0;
    pbVar16[0x42c242] = 0;
    pbVar16[0x42c243] = 0;
    pbVar16[0x42c244] = 0;
    pbVar16[0x42c245] = 0;
    pbVar16[0x42c246] = 0;
    pbVar16[0x42c247] = 0;
    pbVar16[0x42c238] = 0;
    pbVar16[0x42c239] = 0;
    pbVar16[0x42c23a] = 0;
    pbVar16[0x42c23b] = 0;
    pbVar16[0x42c23c] = 0;
    pbVar16[0x42c23d] = 0;
    pbVar16[0x42c23e] = 0;
    pbVar16[0x42c23f] = 0;
    pbVar16[0x42c250] = 0;
    pbVar16[0x42c251] = 0;
    pbVar16[0x42c252] = 0;
    pbVar16[0x42c253] = 0;
    pbVar16[0x42c254] = 0;
    pbVar16[0x42c255] = 0;
    pbVar16[0x42c256] = 0;
    pbVar16[0x42c257] = 0;
    pbVar16[0x42c248] = 0;
    pbVar16[0x42c249] = 0;
    pbVar16[0x42c24a] = 0;
    pbVar16[0x42c24b] = 0;
    pbVar16[0x42c24c] = 0;
    pbVar16[0x42c24d] = 0;
    pbVar16[0x42c24e] = 0;
    pbVar16[0x42c24f] = 0;
    pbVar16[0x42c260] = 0;
    pbVar16[0x42c261] = 0;
    pbVar16[0x42c262] = 0;
    pbVar16[0x42c263] = 0;
    pbVar16[0x42c264] = 0;
    pbVar16[0x42c265] = 0;
    pbVar16[0x42c266] = 0;
    pbVar16[0x42c267] = 0;
    pbVar16[0x42c258] = 0;
    pbVar16[0x42c259] = 0;
    pbVar16[0x42c25a] = 0;
    pbVar16[0x42c25b] = 0;
    pbVar16[0x42c25c] = 0;
    pbVar16[0x42c25d] = 0;
    pbVar16[0x42c25e] = 0;
    pbVar16[0x42c25f] = 0;
    pbVar16[0x42c270] = 0;
    pbVar16[0x42c271] = 0;
    pbVar16[0x42c272] = 0;
    pbVar16[0x42c273] = 0;
    pbVar16[0x42c274] = 0;
    pbVar16[0x42c275] = 0;
    pbVar16[0x42c276] = 0;
    pbVar16[0x42c277] = 0;
    pbVar16[0x42c268] = 0;
    pbVar16[0x42c269] = 0;
    pbVar16[0x42c26a] = 0;
    pbVar16[0x42c26b] = 0;
    pbVar16[0x42c26c] = 0;
    pbVar16[0x42c26d] = 0;
    pbVar16[0x42c26e] = 0;
    pbVar16[0x42c26f] = 0;
    pbVar16[0x42c280] = 0;
    pbVar16[0x42c281] = 0;
    pbVar16[0x42c282] = 0;
    pbVar16[0x42c283] = 0;
    pbVar16[0x42c284] = 0;
    pbVar16[0x42c285] = 0;
    pbVar16[0x42c286] = 0;
    pbVar16[0x42c287] = 0;
    pbVar16[0x42c278] = 0;
    pbVar16[0x42c279] = 0;
    pbVar16[0x42c27a] = 0;
    pbVar16[0x42c27b] = 0;
    pbVar16[0x42c27c] = 0;
    pbVar16[0x42c27d] = 0;
    pbVar16[0x42c27e] = 0;
    pbVar16[0x42c27f] = 0;
    pbVar16[0x42c290] = 0;
    pbVar16[0x42c291] = 0;
    pbVar16[0x42c292] = 0;
    pbVar16[0x42c293] = 0;
    pbVar16[0x42c294] = 0;
    pbVar16[0x42c295] = 0;
    pbVar16[0x42c296] = 0;
    pbVar16[0x42c297] = 0;
    pbVar16[0x42c288] = 0;
    pbVar16[0x42c289] = 0;
    pbVar16[0x42c28a] = 0;
    pbVar16[0x42c28b] = 0;
    pbVar16[0x42c28c] = 0;
    pbVar16[0x42c28d] = 0;
    pbVar16[0x42c28e] = 0;
    pbVar16[0x42c28f] = 0;
    pbVar16[0x42c2a0] = 0;
    pbVar16[0x42c2a1] = 0;
    pbVar16[0x42c2a2] = 0;
    pbVar16[0x42c2a3] = 0;
    pbVar16[0x42c2a4] = 0;
    pbVar16[0x42c2a5] = 0;
    pbVar16[0x42c2a6] = 0;
    pbVar16[0x42c2a7] = 0;
    pbVar16[0x42c298] = 0;
    pbVar16[0x42c299] = 0;
    pbVar16[0x42c29a] = 0;
    pbVar16[0x42c29b] = 0;
    pbVar16[0x42c29c] = 0;
    pbVar16[0x42c29d] = 0;
    pbVar16[0x42c29e] = 0;
    pbVar16[0x42c29f] = 0;
    pbVar16[0x42c2b0] = 0;
    pbVar16[0x42c2b1] = 0;
    pbVar16[0x42c2b2] = 0;
    pbVar16[0x42c2b3] = 0;
    pbVar16[0x42c2b4] = 0;
    pbVar16[0x42c2b5] = 0;
    pbVar16[0x42c2b6] = 0;
    pbVar16[0x42c2b7] = 0;
    pbVar16[0x42c2a8] = 0;
    pbVar16[0x42c2a9] = 0;
    pbVar16[0x42c2aa] = 0;
    pbVar16[0x42c2ab] = 0;
    pbVar16[0x42c2ac] = 0;
    pbVar16[0x42c2ad] = 0;
    pbVar16[0x42c2ae] = 0;
    pbVar16[0x42c2af] = 0;
    pbVar16[0x42c2c0] = 0;
    pbVar16[0x42c2c1] = 0;
    pbVar16[0x42c2c2] = 0;
    pbVar16[0x42c2c3] = 0;
    pbVar16[0x42c2c4] = 0;
    pbVar16[0x42c2c5] = 0;
    pbVar16[0x42c2c6] = 0;
    pbVar16[0x42c2c7] = 0;
    pbVar16[0x42c2b8] = 0;
    pbVar16[0x42c2b9] = 0;
    pbVar16[0x42c2ba] = 0;
    pbVar16[0x42c2bb] = 0;
    pbVar16[0x42c2bc] = 0;
    pbVar16[0x42c2bd] = 0;
    pbVar16[0x42c2be] = 0;
    pbVar16[0x42c2bf] = 0;
    pbVar16[0x42c2d0] = 0;
    pbVar16[0x42c2d1] = 0;
    pbVar16[0x42c2d2] = 0;
    pbVar16[0x42c2d3] = 0;
    pbVar16[0x42c2d4] = 0;
    pbVar16[0x42c2d5] = 0;
    pbVar16[0x42c2d6] = 0;
    pbVar16[0x42c2d7] = 0;
    pbVar16[0x42c2c8] = 0;
    pbVar16[0x42c2c9] = 0;
    pbVar16[0x42c2ca] = 0;
    pbVar16[0x42c2cb] = 0;
    pbVar16[0x42c2cc] = 0;
    pbVar16[0x42c2cd] = 0;
    pbVar16[0x42c2ce] = 0;
    pbVar16[0x42c2cf] = 0;
    pbVar16[0x42c2e0] = 0;
    pbVar16[0x42c2e1] = 0;
    pbVar16[0x42c2e2] = 0;
    pbVar16[0x42c2e3] = 0;
    pbVar16[0x42c2e4] = 0;
    pbVar16[0x42c2e5] = 0;
    pbVar16[0x42c2e6] = 0;
    pbVar16[0x42c2e7] = 0;
    pbVar16[0x42c2d8] = 0;
    pbVar16[0x42c2d9] = 0;
    pbVar16[0x42c2da] = 0;
    pbVar16[0x42c2db] = 0;
    pbVar16[0x42c2dc] = 0;
    pbVar16[0x42c2dd] = 0;
    pbVar16[0x42c2de] = 0;
    pbVar16[0x42c2df] = 0;
    pbVar16[0x42c2f0] = 0;
    pbVar16[0x42c2f1] = 0;
    pbVar16[0x42c2f2] = 0;
    pbVar16[0x42c2f3] = 0;
    pbVar16[0x42c2f4] = 0;
    pbVar16[0x42c2f5] = 0;
    pbVar16[0x42c2f6] = 0;
    pbVar16[0x42c2f7] = 0;
    pbVar16[0x42c2e8] = 0;
    pbVar16[0x42c2e9] = 0;
    pbVar16[0x42c2ea] = 0;
    pbVar16[0x42c2eb] = 0;
    pbVar16[0x42c2ec] = 0;
    pbVar16[0x42c2ed] = 0;
    pbVar16[0x42c2ee] = 0;
    pbVar16[0x42c2ef] = 0;
    pbVar16[0x42c300] = 0;
    pbVar16[0x42c301] = 0;
    pbVar16[0x42c302] = 0;
    pbVar16[0x42c303] = 0;
    pbVar16[0x42c304] = 0;
    pbVar16[0x42c305] = 0;
    pbVar16[0x42c306] = 0;
    pbVar16[0x42c307] = 0;
    pbVar16[0x42c2f8] = 0;
    pbVar16[0x42c2f9] = 0;
    pbVar16[0x42c2fa] = 0;
    pbVar16[0x42c2fb] = 0;
    pbVar16[0x42c2fc] = 0;
    pbVar16[0x42c2fd] = 0;
    pbVar16[0x42c2fe] = 0;
    pbVar16[0x42c2ff] = 0;
    pbVar16[0x42c310] = 0;
    pbVar16[0x42c311] = 0;
    pbVar16[0x42c312] = 0;
    pbVar16[0x42c313] = 0;
    pbVar16[0x42c314] = 0;
    pbVar16[0x42c315] = 0;
    pbVar16[0x42c316] = 0;
    pbVar16[0x42c317] = 0;
    pbVar16[0x42c308] = 0;
    pbVar16[0x42c309] = 0;
    pbVar16[0x42c30a] = 0;
    pbVar16[0x42c30b] = 0;
    pbVar16[0x42c30c] = 0;
    pbVar16[0x42c30d] = 0;
    pbVar16[0x42c30e] = 0;
    pbVar16[0x42c30f] = 0;
    pbVar16[0x42c320] = 0;
    pbVar16[0x42c321] = 0;
    pbVar16[0x42c322] = 0;
    pbVar16[0x42c323] = 0;
    pbVar16[0x42c324] = 0;
    pbVar16[0x42c325] = 0;
    pbVar16[0x42c326] = 0;
    pbVar16[0x42c327] = 0;
    pbVar16[0x42c318] = 0;
    pbVar16[0x42c319] = 0;
    pbVar16[0x42c31a] = 0;
    pbVar16[0x42c31b] = 0;
    pbVar16[0x42c31c] = 0;
    pbVar16[0x42c31d] = 0;
    pbVar16[0x42c31e] = 0;
    pbVar16[0x42c31f] = 0;
    pbVar16[0x42c330] = 0;
    pbVar16[0x42c331] = 0;
    pbVar16[0x42c332] = 0;
    pbVar16[0x42c333] = 0;
    pbVar16[0x42c334] = 0;
    pbVar16[0x42c335] = 0;
    pbVar16[0x42c336] = 0;
    pbVar16[0x42c337] = 0;
    pbVar16[0x42c328] = 0;
    pbVar16[0x42c329] = 0;
    pbVar16[0x42c32a] = 0;
    pbVar16[0x42c32b] = 0;
    pbVar16[0x42c32c] = 0;
    pbVar16[0x42c32d] = 0;
    pbVar16[0x42c32e] = 0;
    pbVar16[0x42c32f] = 0;
    pbVar16[0x42c340] = 0;
    pbVar16[0x42c341] = 0;
    pbVar16[0x42c342] = 0;
    pbVar16[0x42c343] = 0;
    pbVar16[0x42c344] = 0;
    pbVar16[0x42c345] = 0;
    pbVar16[0x42c346] = 0;
    pbVar16[0x42c347] = 0;
    pbVar16[0x42c338] = 0;
    pbVar16[0x42c339] = 0;
    pbVar16[0x42c33a] = 0;
    pbVar16[0x42c33b] = 0;
    pbVar16[0x42c33c] = 0;
    pbVar16[0x42c33d] = 0;
    pbVar16[0x42c33e] = 0;
    pbVar16[0x42c33f] = 0;
    pbVar16[0x42c350] = 0;
    pbVar16[0x42c351] = 0;
    pbVar16[0x42c352] = 0;
    pbVar16[0x42c353] = 0;
    pbVar16[0x42c354] = 0;
    pbVar16[0x42c355] = 0;
    pbVar16[0x42c356] = 0;
    pbVar16[0x42c357] = 0;
    pbVar16[0x42c348] = 0;
    pbVar16[0x42c349] = 0;
    pbVar16[0x42c34a] = 0;
    pbVar16[0x42c34b] = 0;
    pbVar16[0x42c34c] = 0;
    pbVar16[0x42c34d] = 0;
    pbVar16[0x42c34e] = 0;
    pbVar16[0x42c34f] = 0;
    pbVar16[0x42c360] = 0;
    pbVar16[0x42c361] = 0;
    pbVar16[0x42c362] = 0;
    pbVar16[0x42c363] = 0;
    pbVar16[0x42c364] = 0;
    pbVar16[0x42c365] = 0;
    pbVar16[0x42c366] = 0;
    pbVar16[0x42c367] = 0;
    pbVar16[0x42c358] = 0;
    pbVar16[0x42c359] = 0;
    pbVar16[0x42c35a] = 0;
    pbVar16[0x42c35b] = 0;
    pbVar16[0x42c35c] = 0;
    pbVar16[0x42c35d] = 0;
    pbVar16[0x42c35e] = 0;
    pbVar16[0x42c35f] = 0;
    pbVar16[0x42c370] = 0;
    pbVar16[0x42c371] = 0;
    pbVar16[0x42c372] = 0;
    pbVar16[0x42c373] = 0;
    pbVar16[0x42c374] = 0;
    pbVar16[0x42c375] = 0;
    pbVar16[0x42c376] = 0;
    pbVar16[0x42c377] = 0;
    pbVar16[0x42c368] = 0;
    pbVar16[0x42c369] = 0;
    pbVar16[0x42c36a] = 0;
    pbVar16[0x42c36b] = 0;
    pbVar16[0x42c36c] = 0;
    pbVar16[0x42c36d] = 0;
    pbVar16[0x42c36e] = 0;
    pbVar16[0x42c36f] = 0;
    pbVar16[0x42c380] = 0;
    pbVar16[0x42c381] = 0;
    pbVar16[0x42c382] = 0;
    pbVar16[0x42c383] = 0;
    pbVar16[0x42c384] = 0;
    pbVar16[0x42c385] = 0;
    pbVar16[0x42c386] = 0;
    pbVar16[0x42c387] = 0;
    pbVar16[0x42c378] = 0;
    pbVar16[0x42c379] = 0;
    pbVar16[0x42c37a] = 0;
    pbVar16[0x42c37b] = 0;
    pbVar16[0x42c37c] = 0;
    pbVar16[0x42c37d] = 0;
    pbVar16[0x42c37e] = 0;
    pbVar16[0x42c37f] = 0;
    pbVar16[0x42c390] = 0;
    pbVar16[0x42c391] = 0;
    pbVar16[0x42c392] = 0;
    pbVar16[0x42c393] = 0;
    pbVar16[0x42c394] = 0;
    pbVar16[0x42c395] = 0;
    pbVar16[0x42c396] = 0;
    pbVar16[0x42c397] = 0;
    pbVar16[0x42c388] = 0;
    pbVar16[0x42c389] = 0;
    pbVar16[0x42c38a] = 0;
    pbVar16[0x42c38b] = 0;
    pbVar16[0x42c38c] = 0;
    pbVar16[0x42c38d] = 0;
    pbVar16[0x42c38e] = 0;
    pbVar16[0x42c38f] = 0;
    pbVar16[0x42c3a0] = 0;
    pbVar16[0x42c3a1] = 0;
    pbVar16[0x42c3a2] = 0;
    pbVar16[0x42c3a3] = 0;
    pbVar16[0x42c3a4] = 0;
    pbVar16[0x42c3a5] = 0;
    pbVar16[0x42c3a6] = 0;
    pbVar16[0x42c3a7] = 0;
    pbVar16[0x42c398] = 0;
    pbVar16[0x42c399] = 0;
    pbVar16[0x42c39a] = 0;
    pbVar16[0x42c39b] = 0;
    pbVar16[0x42c39c] = 0;
    pbVar16[0x42c39d] = 0;
    pbVar16[0x42c39e] = 0;
    pbVar16[0x42c39f] = 0;
    pbVar16[0x42c3b0] = 0;
    pbVar16[0x42c3b1] = 0;
    pbVar16[0x42c3b2] = 0;
    pbVar16[0x42c3b3] = 0;
    pbVar16[0x42c3b4] = 0;
    pbVar16[0x42c3b5] = 0;
    pbVar16[0x42c3b6] = 0;
    pbVar16[0x42c3b7] = 0;
    pbVar16[0x42c3a8] = 0;
    pbVar16[0x42c3a9] = 0;
    pbVar16[0x42c3aa] = 0;
    pbVar16[0x42c3ab] = 0;
    pbVar16[0x42c3ac] = 0;
    pbVar16[0x42c3ad] = 0;
    pbVar16[0x42c3ae] = 0;
    pbVar16[0x42c3af] = 0;
    pbVar16[0x42c3c0] = 0;
    pbVar16[0x42c3c1] = 0;
    pbVar16[0x42c3c2] = 0;
    pbVar16[0x42c3c3] = 0;
    pbVar16[0x42c3c4] = 0;
    pbVar16[0x42c3c5] = 0;
    pbVar16[0x42c3c6] = 0;
    pbVar16[0x42c3c7] = 0;
    pbVar16[0x42c3b8] = 0;
    pbVar16[0x42c3b9] = 0;
    pbVar16[0x42c3ba] = 0;
    pbVar16[0x42c3bb] = 0;
    pbVar16[0x42c3bc] = 0;
    pbVar16[0x42c3bd] = 0;
    pbVar16[0x42c3be] = 0;
    pbVar16[0x42c3bf] = 0;
    FUN_10967fa38(2);
    pbVar117 = pbStack_1320;
    pbVar50 = pbStack_1318;
    if ((*(byte *)(*(long *)(pbVar16 + 0x67d0) + 0x99) >> 3 & 1) == 0) {
      iVar110 = *(int *)pbVar16;
      pbStack_1318[0] = 0;
      pbStack_1318[1] = 0;
      pbStack_1318[2] = 0;
      pbStack_1318[3] = 0;
      *(int *)(pbStack_1318 + 4) = iVar110;
      pbStack_1318[0x18] = 0xff;
      pbStack_1318[0x19] = 0xff;
      pbStack_1318[0x1a] = 0xff;
      pbStack_1318[0x1b] = 0xff;
    }
  }
  else {
    _gettimeofday(&uStack_880,0);
    pbVar22 = pbStack_12f8;
    dRam000000011382a4f8 = (double)(uStack_880 * 1000 + (long)((int)uStack_878 / 1000));
    iVar110 = (int)pbVar16;
    pbStack_1350 = pbVar46;
    pbStack_1348 = pbVar15;
    if (*(int *)(pbVar117 + 4) == 0) {
      pbVar46 = *(byte **)(pbVar52 + 0x20);
      lVar29 = *(long *)pbVar52;
      iVar113 = 0x10;
      uVar62 = 0x20;
      uVar68 = 0x7b;
      uVar75 = 0xb7;
      uVar76 = 0x48;
      pbVar15 = pbStack_1310;
      do {
        if ((*(int *)(pbVar15 + 4) != 0) &&
           (fVar90 = *(float *)(lVar29 + 0x24) - *(float *)(pbVar15 + 0x24),
           fVar99 = (float)*(undefined8 *)(lVar29 + 0x1c) - (float)*(undefined8 *)(pbVar15 + 0x1c),
           fVar98 = (float)((ulong)*(undefined8 *)(lVar29 + 0x1c) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(pbVar15 + 0x1c) >> 0x20),
           fVar90 = SQRT(fVar99 * fVar99 + fVar98 * fVar98 + fVar90 * fVar90),
           fVar90 < (float)CONCAT13(uVar76,CONCAT12(uVar75,CONCAT11(uVar68,uVar62))))) {
          uVar62 = SUB41(fVar90,0);
          uVar68 = (undefined1)((uint)fVar90 >> 8);
          uVar75 = (undefined1)((uint)fVar90 >> 0x10);
          uVar76 = (undefined1)((uint)fVar90 >> 0x18);
          pbVar46 = pbVar15;
        }
        pbVar15 = pbVar15 + 0x2d520;
        iVar113 = iVar113 + -1;
      } while (iVar113 != 0);
      *(byte **)(pbVar52 + 0x18) = pbVar46;
      pbStack_1368 = pbVar52 + 0x3c8;
      pbVar52[0x3c8] = 100;
      pbVar52[0x3c9] = 0;
      pbVar52[0x3ca] = 0;
      pbVar52[0x3cb] = 0;
      pbVar52[0x448] = 100;
      pbVar52[0x449] = 0;
      pbVar52[0x44a] = 0;
      pbVar52[1099] = 0;
      pbStack_1370 = pbVar16 + 0x42b058;
      pbStack_1378 = pbVar16 + 0x42b1e8;
      pbVar16[0x42b060] = 0;
      pbVar16[0x42b061] = 0;
      pbVar16[0x42b062] = 0;
      pbVar16[0x42b063] = 0;
      pbVar16[0x42b064] = 0;
      pbVar16[0x42b065] = 0;
      pbVar16[0x42b066] = 0;
      pbVar16[0x42b067] = 0;
      pbStack_1370[0] = 0;
      pbStack_1370[1] = 0;
      pbStack_1370[2] = 0;
      pbStack_1370[3] = 0;
      pbStack_1370[4] = 0;
      pbStack_1370[5] = 0;
      pbStack_1370[6] = 0;
      pbStack_1370[7] = 0;
      pbVar16[0x42b070] = 0;
      pbVar16[0x42b071] = 0;
      pbVar16[0x42b072] = 0;
      pbVar16[0x42b073] = 0;
      pbVar16[0x42b074] = 0;
      pbVar16[0x42b075] = 0;
      pbVar16[0x42b076] = 0;
      pbVar16[0x42b077] = 0;
      pbVar16[0x42b068] = 0;
      pbVar16[0x42b069] = 0;
      pbVar16[0x42b06a] = 0;
      pbVar16[0x42b06b] = 0;
      pbVar16[0x42b06c] = 0;
      pbVar16[0x42b06d] = 0;
      pbVar16[0x42b06e] = 0;
      pbVar16[0x42b06f] = 0;
      pbVar16[0x42b080] = 0;
      pbVar16[0x42b081] = 0;
      pbVar16[0x42b082] = 0;
      pbVar16[0x42b083] = 0;
      pbVar16[0x42b084] = 0;
      pbVar16[0x42b085] = 0;
      pbVar16[0x42b086] = 0;
      pbVar16[0x42b087] = 0;
      pbVar16[0x42b078] = 0;
      pbVar16[0x42b079] = 0;
      pbVar16[0x42b07a] = 0;
      pbVar16[0x42b07b] = 0;
      pbVar16[0x42b07c] = 0;
      pbVar16[0x42b07d] = 0;
      pbVar16[0x42b07e] = 0;
      pbVar16[0x42b07f] = 0;
      pbVar16[0x42b090] = 0;
      pbVar16[0x42b091] = 0;
      pbVar16[0x42b092] = 0;
      pbVar16[0x42b093] = 0;
      pbVar16[0x42b094] = 0;
      pbVar16[0x42b095] = 0;
      pbVar16[0x42b096] = 0;
      pbVar16[0x42b097] = 0;
      pbVar16[0x42b088] = 0;
      pbVar16[0x42b089] = 0;
      pbVar16[0x42b08a] = 0;
      pbVar16[0x42b08b] = 0;
      pbVar16[0x42b08c] = 0;
      pbVar16[0x42b08d] = 0;
      pbVar16[0x42b08e] = 0;
      pbVar16[0x42b08f] = 0;
      pbVar16[0x42b0a0] = 0;
      pbVar16[0x42b0a1] = 0;
      pbVar16[0x42b0a2] = 0;
      pbVar16[0x42b0a3] = 0;
      pbVar16[0x42b0a4] = 0;
      pbVar16[0x42b0a5] = 0;
      pbVar16[0x42b0a6] = 0;
      pbVar16[0x42b0a7] = 0;
      pbVar16[0x42b098] = 0;
      pbVar16[0x42b099] = 0;
      pbVar16[0x42b09a] = 0;
      pbVar16[0x42b09b] = 0;
      pbVar16[0x42b09c] = 0;
      pbVar16[0x42b09d] = 0;
      pbVar16[0x42b09e] = 0;
      pbVar16[0x42b09f] = 0;
      pbVar16[0x42b0b0] = 0;
      pbVar16[0x42b0b1] = 0;
      pbVar16[0x42b0b2] = 0;
      pbVar16[0x42b0b3] = 0;
      pbVar16[0x42b0b4] = 0;
      pbVar16[0x42b0b5] = 0;
      pbVar16[0x42b0b6] = 0;
      pbVar16[0x42b0b7] = 0;
      pbVar16[0x42b0a8] = 0;
      pbVar16[0x42b0a9] = 0;
      pbVar16[0x42b0aa] = 0;
      pbVar16[0x42b0ab] = 0;
      pbVar16[0x42b0ac] = 0;
      pbVar16[0x42b0ad] = 0;
      pbVar16[0x42b0ae] = 0;
      pbVar16[0x42b0af] = 0;
      pbVar16[0x42b0c0] = 0;
      pbVar16[0x42b0c1] = 0;
      pbVar16[0x42b0c2] = 0;
      pbVar16[0x42b0c3] = 0;
      pbVar16[0x42b0c4] = 0;
      pbVar16[0x42b0c5] = 0;
      pbVar16[0x42b0c6] = 0;
      pbVar16[0x42b0c7] = 0;
      pbVar16[0x42b0b8] = 0;
      pbVar16[0x42b0b9] = 0;
      pbVar16[0x42b0ba] = 0;
      pbVar16[0x42b0bb] = 0;
      pbVar16[0x42b0bc] = 0;
      pbVar16[0x42b0bd] = 0;
      pbVar16[0x42b0be] = 0;
      pbVar16[0x42b0bf] = 0;
      pbVar16[0x42b0d0] = 0;
      pbVar16[0x42b0d1] = 0;
      pbVar16[0x42b0d2] = 0;
      pbVar16[0x42b0d3] = 0;
      pbVar16[0x42b0d4] = 0;
      pbVar16[0x42b0d5] = 0;
      pbVar16[0x42b0d6] = 0;
      pbVar16[0x42b0d7] = 0;
      pbVar16[0x42b0c8] = 0;
      pbVar16[0x42b0c9] = 0;
      pbVar16[0x42b0ca] = 0;
      pbVar16[0x42b0cb] = 0;
      pbVar16[0x42b0cc] = 0;
      pbVar16[0x42b0cd] = 0;
      pbVar16[0x42b0ce] = 0;
      pbVar16[0x42b0cf] = 0;
      pbVar16[0x42b1f0] = 0;
      pbVar16[0x42b1f1] = 0;
      pbVar16[0x42b1f2] = 0;
      pbVar16[0x42b1f3] = 0;
      pbVar16[0x42b1f4] = 0;
      pbVar16[0x42b1f5] = 0;
      pbVar16[0x42b1f6] = 0;
      pbVar16[0x42b1f7] = 0;
      pbStack_1378[0] = 0;
      pbStack_1378[1] = 0;
      pbStack_1378[2] = 0;
      pbStack_1378[3] = 0;
      pbStack_1378[4] = 0;
      pbStack_1378[5] = 0;
      pbStack_1378[6] = 0;
      pbStack_1378[7] = 0;
      pbVar16[0x42b200] = 0;
      pbVar16[0x42b201] = 0;
      pbVar16[0x42b202] = 0;
      pbVar16[0x42b203] = 0;
      pbVar16[0x42b204] = 0;
      pbVar16[0x42b205] = 0;
      pbVar16[0x42b206] = 0;
      pbVar16[0x42b207] = 0;
      pbVar16[0x42b1f8] = 0;
      pbVar16[0x42b1f9] = 0;
      pbVar16[0x42b1fa] = 0;
      pbVar16[0x42b1fb] = 0;
      pbVar16[0x42b1fc] = 0;
      pbVar16[0x42b1fd] = 0;
      pbVar16[0x42b1fe] = 0;
      pbVar16[0x42b1ff] = 0;
      pbVar16[0x42b210] = 0;
      pbVar16[0x42b211] = 0;
      pbVar16[0x42b212] = 0;
      pbVar16[0x42b213] = 0;
      pbVar16[0x42b214] = 0;
      pbVar16[0x42b215] = 0;
      pbVar16[0x42b216] = 0;
      pbVar16[0x42b217] = 0;
      pbVar16[0x42b208] = 0;
      pbVar16[0x42b209] = 0;
      pbVar16[0x42b20a] = 0;
      pbVar16[0x42b20b] = 0;
      pbVar16[0x42b20c] = 0;
      pbVar16[0x42b20d] = 0;
      pbVar16[0x42b20e] = 0;
      pbVar16[0x42b20f] = 0;
      pbVar16[0x42b220] = 0;
      pbVar16[0x42b221] = 0;
      pbVar16[0x42b222] = 0;
      pbVar16[0x42b223] = 0;
      pbVar16[0x42b224] = 0;
      pbVar16[0x42b225] = 0;
      pbVar16[0x42b226] = 0;
      pbVar16[0x42b227] = 0;
      pbVar16[0x42b218] = 0;
      pbVar16[0x42b219] = 0;
      pbVar16[0x42b21a] = 0;
      pbVar16[0x42b21b] = 0;
      pbVar16[0x42b21c] = 0;
      pbVar16[0x42b21d] = 0;
      pbVar16[0x42b21e] = 0;
      pbVar16[0x42b21f] = 0;
      pbVar16[0x42b230] = 0;
      pbVar16[0x42b231] = 0;
      pbVar16[0x42b232] = 0;
      pbVar16[0x42b233] = 0;
      pbVar16[0x42b234] = 0;
      pbVar16[0x42b235] = 0;
      pbVar16[0x42b236] = 0;
      pbVar16[0x42b237] = 0;
      pbVar16[0x42b228] = 0;
      pbVar16[0x42b229] = 0;
      pbVar16[0x42b22a] = 0;
      pbVar16[0x42b22b] = 0;
      pbVar16[0x42b22c] = 0;
      pbVar16[0x42b22d] = 0;
      pbVar16[0x42b22e] = 0;
      pbVar16[0x42b22f] = 0;
      pbVar16[0x42b240] = 0;
      pbVar16[0x42b241] = 0;
      pbVar16[0x42b242] = 0;
      pbVar16[0x42b243] = 0;
      pbVar16[0x42b244] = 0;
      pbVar16[0x42b245] = 0;
      pbVar16[0x42b246] = 0;
      pbVar16[0x42b247] = 0;
      pbVar16[0x42b238] = 0;
      pbVar16[0x42b239] = 0;
      pbVar16[0x42b23a] = 0;
      pbVar16[0x42b23b] = 0;
      pbVar16[0x42b23c] = 0;
      pbVar16[0x42b23d] = 0;
      pbVar16[0x42b23e] = 0;
      pbVar16[0x42b23f] = 0;
      pbVar16[0x42b250] = 0;
      pbVar16[0x42b251] = 0;
      pbVar16[0x42b252] = 0;
      pbVar16[0x42b253] = 0;
      pbVar16[0x42b254] = 0;
      pbVar16[0x42b255] = 0;
      pbVar16[0x42b256] = 0;
      pbVar16[0x42b257] = 0;
      pbVar16[0x42b248] = 0;
      pbVar16[0x42b249] = 0;
      pbVar16[0x42b24a] = 0;
      pbVar16[0x42b24b] = 0;
      pbVar16[0x42b24c] = 0;
      pbVar16[0x42b24d] = 0;
      pbVar16[0x42b24e] = 0;
      pbVar16[0x42b24f] = 0;
      pbVar16[0x42b260] = 0;
      pbVar16[0x42b261] = 0;
      pbVar16[0x42b262] = 0;
      pbVar16[0x42b263] = 0;
      pbVar16[0x42b264] = 0;
      pbVar16[0x42b265] = 0;
      pbVar16[0x42b266] = 0;
      pbVar16[0x42b267] = 0;
      pbVar16[0x42b258] = 0;
      pbVar16[0x42b259] = 0;
      pbVar16[0x42b25a] = 0;
      pbVar16[0x42b25b] = 0;
      pbVar16[0x42b25c] = 0;
      pbVar16[0x42b25d] = 0;
      pbVar16[0x42b25e] = 0;
      pbVar16[0x42b25f] = 0;
      pbVar16[0x42b3f0] = 0;
      pbVar16[0x42b3f1] = 0;
      pbVar16[0x42b3f2] = 0;
      pbVar16[0x42b3f3] = 0;
      pbVar16[0x42b3f4] = 0;
      pbVar16[0x42b3f5] = 0;
      pbVar16[0x42b3f6] = 0;
      pbVar16[0x42b3f7] = 0;
      pbVar16[0x42b3e8] = 0;
      pbVar16[0x42b3e9] = 0;
      pbVar16[0x42b3ea] = 0;
      pbVar16[0x42b3eb] = 0;
      pbVar16[0x42b3ec] = 0;
      pbVar16[0x42b3ed] = 0;
      pbVar16[0x42b3ee] = 0;
      pbVar16[0x42b3ef] = 0;
      pbVar16[0x42b3d4] = 0;
      pbVar16[0x42b3d5] = 0;
      pbVar16[0x42b3d6] = 0;
      pbVar16[0x42b3d7] = 0;
      pbVar16[0x42b3d8] = 0;
      pbVar16[0x42b3d9] = 0;
      pbVar16[0x42b3da] = 0;
      pbVar16[0x42b3db] = 0;
      pbVar16[0x42b3cc] = 0;
      pbVar16[0x42b3cd] = 0;
      pbVar16[0x42b3ce] = 0;
      pbVar16[0x42b3cf] = 0;
      pbVar16[0x42b3d0] = 0;
      pbVar16[0x42b3d1] = 0;
      pbVar16[0x42b3d2] = 0;
      pbVar16[0x42b3d3] = 0;
      pbVar16[0x42b3e4] = 0;
      pbVar16[0x42b3e5] = 0;
      pbVar16[0x42b3e6] = 0;
      pbVar16[0x42b3e7] = 0;
      pbVar16[0x42b3e8] = 0;
      pbVar16[0x42b3e9] = 0;
      pbVar16[0x42b3ea] = 0;
      pbVar16[0x42b3eb] = 0;
      pbVar16[0x42b3dc] = 0;
      pbVar16[0x42b3dd] = 0;
      pbVar16[0x42b3de] = 0;
      pbVar16[0x42b3df] = 0;
      pbVar16[0x42b3e0] = 0;
      pbVar16[0x42b3e1] = 0;
      pbVar16[0x42b3e2] = 0;
      pbVar16[0x42b3e3] = 0;
      pbVar16[0x42b3b4] = 0;
      pbVar16[0x42b3b5] = 0;
      pbVar16[0x42b3b6] = 0;
      pbVar16[0x42b3b7] = 0;
      pbVar16[0x42b3b8] = 0;
      pbVar16[0x42b3b9] = 0;
      pbVar16[0x42b3ba] = 0;
      pbVar16[0x42b3bb] = 0;
      pbVar16[0x42b3ac] = 0;
      pbVar16[0x42b3ad] = 0;
      pbVar16[0x42b3ae] = 0;
      pbVar16[0x42b3af] = 0;
      pbVar16[0x42b3b0] = 0;
      pbVar16[0x42b3b1] = 0;
      pbVar16[0x42b3b2] = 0;
      pbVar16[0x42b3b3] = 0;
      pbVar16[0x42b3c4] = 0;
      pbVar16[0x42b3c5] = 0;
      pbVar16[0x42b3c6] = 0;
      pbVar16[0x42b3c7] = 0;
      pbVar16[0x42b3c8] = 0;
      pbVar16[0x42b3c9] = 0;
      pbVar16[0x42b3ca] = 0;
      pbVar16[0x42b3cb] = 0;
      pbVar16[0x42b3bc] = 0;
      pbVar16[0x42b3bd] = 0;
      pbVar16[0x42b3be] = 0;
      pbVar16[0x42b3bf] = 0;
      pbVar16[0x42b3c0] = 0;
      pbVar16[0x42b3c1] = 0;
      pbVar16[0x42b3c2] = 0;
      pbVar16[0x42b3c3] = 0;
      pbVar16[0x42b394] = 0;
      pbVar16[0x42b395] = 0;
      pbVar16[0x42b396] = 0;
      pbVar16[0x42b397] = 0;
      pbVar16[0x42b398] = 0;
      pbVar16[0x42b399] = 0;
      pbVar16[0x42b39a] = 0;
      pbVar16[0x42b39b] = 0;
      pbVar16[0x42b38c] = 0;
      pbVar16[0x42b38d] = 0;
      pbVar16[0x42b38e] = 0;
      pbVar16[0x42b38f] = 0;
      pbVar16[0x42b390] = 0;
      pbVar16[0x42b391] = 0;
      pbVar16[0x42b392] = 0;
      pbVar16[0x42b393] = 0;
      pbVar16[0x42b3a4] = 0;
      pbVar16[0x42b3a5] = 0;
      pbVar16[0x42b3a6] = 0;
      pbVar16[0x42b3a7] = 0;
      pbVar16[0x42b3a8] = 0;
      pbVar16[0x42b3a9] = 0;
      pbVar16[0x42b3aa] = 0;
      pbVar16[0x42b3ab] = 0;
      pbVar16[0x42b39c] = 0;
      pbVar16[0x42b39d] = 0;
      pbVar16[0x42b39e] = 0;
      pbVar16[0x42b39f] = 0;
      pbVar16[0x42b3a0] = 0;
      pbVar16[0x42b3a1] = 0;
      pbVar16[0x42b3a2] = 0;
      pbVar16[0x42b3a3] = 0;
      pbVar16[0x42b384] = 0;
      pbVar16[0x42b385] = 0;
      pbVar16[0x42b386] = 0;
      pbVar16[0x42b387] = 0;
      pbVar16[0x42b388] = 0;
      pbVar16[0x42b389] = 0;
      pbVar16[0x42b38a] = 0;
      pbVar16[0x42b38b] = 0;
      pbVar16[0x42b37c] = 0;
      pbVar16[0x42b37d] = 0;
      pbVar16[0x42b37e] = 0;
      pbVar16[0x42b37f] = 0;
      pbVar16[0x42b380] = 0;
      pbVar16[0x42b381] = 0;
      pbVar16[0x42b382] = 0;
      pbVar16[0x42b383] = 0;
      piStack_1358 = piVar18;
      _memset_pattern16(pbVar16 + 0x42b3fc,&UNK_10dfd94c0,0x7c);
      lVar30 = *(long *)(pbVar52 + 0x28);
      uVar91 = *(undefined8 *)(pbVar22 + 0xc);
      iVar113 = (int)((long)uVar91 >> 0x21);
      uStack_890 = NEON_scvtf(CONCAT17((char)((long)uVar91 >> 0x39),
                                       CONCAT16((char)((uint)iVar113 >> 0x10),
                                                CONCAT15((char)((uint)iVar113 >> 8),
                                                         CONCAT14((char)iVar113,
                                                                  CONCAT13((char)((ulong)uVar91 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar91 >> 1))
                                                                 )))),4);
      uStack_888 = 1;
      pbStack_1340 = pbVar46;
      FUN_10967e808(pbVar16,&uStack_890,pbVar46 + 0x50,1,auStack_8a0);
      FUN_10967e808(pbVar16,&uStack_890,lVar29 + 0x50,1,auStack_8ac);
      FUN_10967e808(pbVar16,auStack_8a0,pbStack_1340 + 0x98,1,auStack_8a0);
      FUN_10967e808(pbVar16,auStack_8ac,lVar29 + 0x98,1,auStack_8ac);
      pbVar15 = pbStack_1340;
      uStack_380 = 0x3f800000;
      uStack_398 = uStack_1328;
      lStack_3a0 = (long)dStack_1330;
      uStack_388 = uStack_1328;
      lStack_390 = (long)dStack_1330;
      *(undefined4 *)(lVar29 + 0x2d3e0) = 0x3f800000;
      *(undefined8 *)(lVar29 + 0x2d3c8) = uStack_1328;
      *(double *)(lVar29 + 0x2d3c0) = dStack_1330;
      *(undefined8 *)(lVar29 + 0x2d3d8) = uStack_1328;
      *(double *)(lVar29 + 0x2d3d0) = dStack_1330;
      uVar91 = *(undefined8 *)(pbVar22 + 0xc);
      iVar113 = (int)((long)uVar91 >> 0x21);
      uVar91 = NEON_scvtf(CONCAT17((char)((long)uVar91 >> 0x39),
                                   CONCAT16((char)((uint)iVar113 >> 0x10),
                                            CONCAT15((char)((uint)iVar113 >> 8),
                                                     CONCAT14((char)iVar113,
                                                              CONCAT13((char)((ulong)uVar91 >> 0x18)
                                                                       >> 1,(int3)((int)uVar91 >> 1)
                                                                      ))))),4);
      iVar113 = (int)(float)((ulong)uVar91 >> 0x20);
      fVar90 = (float)(int)(float)uVar91;
      fVar99 = (float)iVar113;
      uStack_880 = CONCAT44(fVar99,fVar90);
      iVar113 = iVar113 + 100;
      uVar79 = (undefined1)iVar113;
      uVar82 = (undefined1)((uint)iVar113 >> 8);
      uVar85 = (undefined1)((uint)iVar113 >> 0x10);
      cVar88 = (char)((uint)iVar113 >> 0x18);
      uVar91 = NEON_scvtf(CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,(int)(
                                                  float)uVar91 + 100)))),4);
      fStack_85c = (float)uVar91;
      uStack_878 = CONCAT44(fStack_85c,1);
      uStack_870 = CONCAT44(1,fVar99);
      fStack_858 = (float)((ulong)uVar91 >> 0x20);
      uStack_868 = CONCAT44(fStack_858,fVar90);
      uStack_860 = 1;
      uStack_854 = 1;
      dStack_1330 = (double)lVar29;
      FUN_10967e938(pbVar16,&uStack_880,pbStack_1340 + 0x1c,&lStack_3a0,lVar29 + 0x1c,4,&fStack_368)
      ;
      FUN_10967ed94(&uStack_880,&fStack_368,0,1,2,3,lVar30 + 0x2d390);
      lVar29 = 0x130;
      do {
        FUN_10967e7a0(pbVar15 + lVar29,lVar30 + 0x2d390,lVar30 + lVar29);
        lVar29 = lVar29 + 0xc;
      } while (lVar29 != 0x5e0);
      FUN_1096766e4(pbVar15,lVar30,&uStack_880,&fStack_368);
      FUN_10967dbec(lVar30);
      iVar115 = 0;
      iVar40 = 0;
      uVar91 = *(undefined8 *)(lVar30 + 0xd8);
      iVar41 = *(int *)(lVar30 + 0xd0);
      iVar3 = *(int *)(lVar30 + 0xd4);
      dStack_1360 = *(double *)((long)dStack_1330 + 0xd8);
      iVar113 = -2;
      fVar90 = 0.0;
      do {
        iVar44 = -2;
        iVar55 = -10;
        iVar53 = iVar115;
        do {
          fStack_8cc = (float)iVar3 / 2.0 + (float)iVar55;
          uVar62 = SUB41(fStack_8cc,0);
          uVar68 = (undefined1)((uint)fStack_8cc >> 8);
          uVar75 = (undefined1)((uint)fStack_8cc >> 0x10);
          cVar70 = (char)((uint)fStack_8cc >> 0x18);
          uStack_8c8 = 1;
          fStack_8d0 = (float)iVar41 / 2.0 + (float)(iVar113 * 5);
          FUN_109674a04(pbVar16,uVar91,&fStack_8d0,iVar41,iVar3,5);
          bVar12 = (float)CONCAT13(cVar70,CONCAT12(uVar75,CONCAT11(uVar68,uVar62))) == fVar90;
          bVar13 = (float)CONCAT13(cVar70,CONCAT12(uVar75,CONCAT11(uVar68,uVar62))) < fVar90;
          iVar115 = iVar113;
          iVar11 = iVar44;
          if (bVar12 || bVar13) {
            iVar115 = iVar53;
            iVar11 = iVar40;
          }
          iVar40 = iVar11;
          fVar99 = (float)CONCAT13(cVar70,CONCAT12(uVar75,CONCAT11(uVar68,uVar62)));
          if (bVar12 || bVar13) {
            fVar99 = fVar90;
          }
          fVar90 = fVar99;
          iVar44 = iVar44 + 1;
          iVar55 = iVar55 + 5;
          iVar53 = iVar115;
        } while (iVar55 != 0xf);
        iVar113 = iVar113 + 1;
      } while (iVar113 != 3);
      fVar90 = (float)iVar41 / 2.0 + (float)(iVar115 * 5);
      fVar98 = (float)iVar3 / 2.0 + (float)(iVar40 * 5);
      uStack_8bc = 1;
      uStack_13a0 = 5;
      fStack_8c4 = fVar90;
      fStack_8c0 = fVar98;
      FUN_109674a94(pbVar16,uVar91,&fStack_8c4,dStack_1360,iVar41,iVar3,&fStack_8c4,auStack_8b8);
      fVar99 = fVar90 * 4.0 + 3.5;
      fVar98 = fVar98 * 4.0 + 3.5;
      uVar91 = NEON_fmov(0x40800000,4);
      uVar92 = NEON_fmov(0x40600000,4);
      uStack_8e8 = CONCAT44((float)((ulong)uVar92 >> 0x20) +
                            (float)((ulong)uVar91 >> 0x20) * auStack_8b8._4_4_,
                            (float)uVar92 + (float)uVar91 * auStack_8b8._0_4_);
      uStack_8e0 = ~uStack_8b0 >> 0x1f;
      FUN_10967ed94(&fStack_368,&uStack_880,0,1,2,3,&uStack_930);
      pbVar15 = pbStack_1340;
      fVar90 = fStack_910 + fVar98 * uStack_918._4_4_ + (float)uStack_918 * fVar99;
      fStack_8dc = 8388608.0;
      if (fVar90 != 0.0) {
        fStack_8dc = 1.0 / fVar90;
      }
      fStack_8d8 = (uStack_920._4_4_ + fVar98 * (float)uStack_920 + uStack_928._4_4_ * fVar99) *
                   fStack_8dc;
      uStack_8d4 = 1;
      fStack_8dc = ((float)uStack_928 + fVar98 * uStack_930._4_4_ + (float)uStack_930 * fVar99) *
                   fStack_8dc;
      FUN_10967e808(pbVar16,&fStack_8dc,pbStack_1340 + 0x50,1,&fStack_8f4);
      dVar118 = dStack_1330;
      FUN_10967e808(pbVar16,&uStack_8e8,(long)dStack_1330 + 0x50,1,&fStack_900);
      FUN_10967e808(pbVar16,&fStack_8f4,pbVar15 + 0x98,1,&fStack_8f4);
      FUN_10967e808(pbVar16,&fStack_900,(long)dVar118 + 0x98,1,&fStack_900);
      lStack_3d0 = 0x3f800000;
      afStack_3c8[1] = 0.0;
      afStack_3c8[2] = 1.0;
      uStack_3b8 = 0;
      uStack_3b0 = 0x3f800000;
      afStack_3c8[0] = (fStack_900 - fStack_8f4) / *(float *)((long)dVar118 + 0x28);
      afStack_3c8[3] = (fStack_8fc - fStack_8f0) / *(float *)((long)dVar118 + 0x28);
      _bzero(pbVar16 + 0x42bd88,0x4b0);
      FUN_10967e938(pbVar16,pbVar15 + 0x130,pbVar15 + 0x1c,&lStack_3d0,(long)dVar118 + 0x1c,100,
                    pbVar16 + 0x42bd88);
      pbVar52 = pbStack_12e8;
      iVar110 = iVar110 + 0x124fd8;
      FUN_10967df78();
      lVar29 = *(long *)pbVar52;
      *(int *)(lVar29 + 0xc) = iVar110;
      FUN_109676f64(pbVar16,pbVar15,lVar29,lVar29 + 0x10,&uStack_880,0);
      pbVar22 = pbStack_12e0;
      pbVar50 = pbStack_1318;
      pbVar117 = pbStack_1320;
      pbVar15 = pbStack_1348;
      pbVar46 = pbStack_1350;
      piVar18 = piStack_1358;
      lVar29 = *(long *)pbVar52;
      pbVar52[0x4d0] = 0;
      pbVar52[0x4d1] = 0;
      pbVar52[0x4d2] = 0;
      pbVar52[0x4d3] = 0;
      if (*(int *)(lVar29 + 0x10) < 0x15) {
        pbStack_12e0[0x10] = 0;
        pbStack_12e0[0x11] = 0;
        pbStack_12e0[0x12] = 0;
        pbStack_12e0[0x13] = 0;
      }
      else {
        iVar110 = *(int *)(pbStack_12e0 + 0x10);
        *(int *)(pbStack_12e0 + 0x10) = iVar110 + 1;
        if (2 < iVar110) {
          iVar110 = *(int *)pbStack_1340;
          pbVar34 = pbStack_12f0 + 0xc;
          iVar113 = 0x10;
          do {
            if (iVar110 < *(int *)(pbVar34 + -4)) {
              pbVar34[0] = 0;
              pbVar34[1] = 0;
              pbVar34[2] = 0;
              pbVar34[3] = 0;
            }
            pbVar34 = pbVar34 + 0x2d520;
            iVar113 = iVar113 + -1;
          } while (iVar113 != 0);
          lVar30 = 0;
          *(int *)pbStack_12e0 = *(int *)pbVar16;
          pbStack_12e0[0x10] = 0;
          pbStack_12e0[0x11] = 0;
          pbStack_12e0[0x12] = 0;
          pbStack_12e0[0x13] = 0;
          pbStack_12e0[0x14] = 0;
          pbStack_12e0[0x15] = 0;
          pbStack_12e0[0x16] = 0;
          pbStack_12e0[0x17] = 0;
          pbStack_12e0[0x18] = 0;
          pbStack_12e0[0x19] = 0;
          pbStack_12e0[0x1a] = 0;
          pbStack_12e0[0x1b] = 0;
          *(long *)(pbVar52 + 0x10) = lVar29;
          pbStack_1368[8] = 0;
          pbStack_1368[9] = 0;
          pbStack_1368[10] = 0;
          pbStack_1368[0xb] = 0;
          pbStack_1368[0xc] = 0;
          pbStack_1368[0xd] = 0;
          pbStack_1368[0xe] = 0;
          pbStack_1368[0xf] = 0;
          pbStack_1368[0] = 0;
          pbStack_1368[1] = 0;
          pbStack_1368[2] = 0;
          pbStack_1368[3] = 0;
          pbStack_1368[4] = 0;
          pbStack_1368[5] = 0;
          pbStack_1368[6] = 0;
          pbStack_1368[7] = 0;
          pbStack_1368[0x18] = 0;
          pbStack_1368[0x19] = 0;
          pbStack_1368[0x1a] = 0;
          pbStack_1368[0x1b] = 0;
          pbStack_1368[0x1c] = 0;
          pbStack_1368[0x1d] = 0;
          pbStack_1368[0x1e] = 0;
          pbStack_1368[0x1f] = 0;
          pbStack_1368[0x10] = 0;
          pbStack_1368[0x11] = 0;
          pbStack_1368[0x12] = 0;
          pbStack_1368[0x13] = 0;
          pbStack_1368[0x14] = 0;
          pbStack_1368[0x15] = 0;
          pbStack_1368[0x16] = 0;
          pbStack_1368[0x17] = 0;
          pbStack_1368[0x28] = 0;
          pbStack_1368[0x29] = 0;
          pbStack_1368[0x2a] = 0;
          pbStack_1368[0x2b] = 0;
          pbStack_1368[0x2c] = 0;
          pbStack_1368[0x2d] = 0;
          pbStack_1368[0x2e] = 0;
          pbStack_1368[0x2f] = 0;
          pbStack_1368[0x20] = 0;
          pbStack_1368[0x21] = 0;
          pbStack_1368[0x22] = 0;
          pbStack_1368[0x23] = 0;
          pbStack_1368[0x24] = 0;
          pbStack_1368[0x25] = 0;
          pbStack_1368[0x26] = 0;
          pbStack_1368[0x27] = 0;
          pbStack_1368[0x38] = 0;
          pbStack_1368[0x39] = 0;
          pbStack_1368[0x3a] = 0;
          pbStack_1368[0x3b] = 0;
          pbStack_1368[0x3c] = 0;
          pbStack_1368[0x3d] = 0;
          pbStack_1368[0x3e] = 0;
          pbStack_1368[0x3f] = 0;
          pbStack_1368[0x30] = 0;
          pbStack_1368[0x31] = 0;
          pbStack_1368[0x32] = 0;
          pbStack_1368[0x33] = 0;
          pbStack_1368[0x34] = 0;
          pbStack_1368[0x35] = 0;
          pbStack_1368[0x36] = 0;
          pbStack_1368[0x37] = 0;
          pbStack_1368[0x48] = 0;
          pbStack_1368[0x49] = 0;
          pbStack_1368[0x4a] = 0;
          pbStack_1368[0x4b] = 0;
          pbStack_1368[0x4c] = 0;
          pbStack_1368[0x4d] = 0;
          pbStack_1368[0x4e] = 0;
          pbStack_1368[0x4f] = 0;
          pbStack_1368[0x40] = 0;
          pbStack_1368[0x41] = 0;
          pbStack_1368[0x42] = 0;
          pbStack_1368[0x43] = 0;
          pbStack_1368[0x44] = 0;
          pbStack_1368[0x45] = 0;
          pbStack_1368[0x46] = 0;
          pbStack_1368[0x47] = 0;
          pbStack_1368[0x58] = 0;
          pbStack_1368[0x59] = 0;
          pbStack_1368[0x5a] = 0;
          pbStack_1368[0x5b] = 0;
          pbStack_1368[0x5c] = 0;
          pbStack_1368[0x5d] = 0;
          pbStack_1368[0x5e] = 0;
          pbStack_1368[0x5f] = 0;
          pbStack_1368[0x50] = 0;
          pbStack_1368[0x51] = 0;
          pbStack_1368[0x52] = 0;
          pbStack_1368[0x53] = 0;
          pbStack_1368[0x54] = 0;
          pbStack_1368[0x55] = 0;
          pbStack_1368[0x56] = 0;
          pbStack_1368[0x57] = 0;
          pbStack_1368[0x68] = 0;
          pbStack_1368[0x69] = 0;
          pbStack_1368[0x6a] = 0;
          pbStack_1368[0x6b] = 0;
          pbStack_1368[0x6c] = 0;
          pbStack_1368[0x6d] = 0;
          pbStack_1368[0x6e] = 0;
          pbStack_1368[0x6f] = 0;
          pbStack_1368[0x60] = 0;
          pbStack_1368[0x61] = 0;
          pbStack_1368[0x62] = 0;
          pbStack_1368[99] = 0;
          pbStack_1368[100] = 0;
          pbStack_1368[0x65] = 0;
          pbStack_1368[0x66] = 0;
          pbStack_1368[0x67] = 0;
          pbStack_1368[0x78] = 0;
          pbStack_1368[0x79] = 0;
          pbStack_1368[0x7a] = 0;
          pbStack_1368[0x7b] = 0;
          pbStack_1368[0x7c] = 0;
          pbStack_1368[0x7d] = 0;
          pbStack_1368[0x7e] = 0;
          pbStack_1368[0x7f] = 0;
          pbStack_1368[0x70] = 0;
          pbStack_1368[0x71] = 0;
          pbStack_1368[0x72] = 0;
          pbStack_1368[0x73] = 0;
          pbStack_1368[0x74] = 0;
          pbStack_1368[0x75] = 0;
          pbStack_1368[0x76] = 0;
          pbStack_1368[0x77] = 0;
          pbStack_1368[0x88] = 0;
          pbStack_1368[0x89] = 0;
          pbStack_1368[0x8a] = 0;
          pbStack_1368[0x8b] = 0;
          pbStack_1368[0x8c] = 0;
          pbStack_1368[0x8d] = 0;
          pbStack_1368[0x8e] = 0;
          pbStack_1368[0x8f] = 0;
          pbStack_1368[0x80] = 0;
          pbStack_1368[0x81] = 0;
          pbStack_1368[0x82] = 0;
          pbStack_1368[0x83] = 0;
          pbStack_1368[0x84] = 0;
          pbStack_1368[0x85] = 0;
          pbStack_1368[0x86] = 0;
          pbStack_1368[0x87] = 0;
          pbStack_1368[0x98] = 0;
          pbStack_1368[0x99] = 0;
          pbStack_1368[0x9a] = 0;
          pbStack_1368[0x9b] = 0;
          pbStack_1368[0x9c] = 0;
          pbStack_1368[0x9d] = 0;
          pbStack_1368[0x9e] = 0;
          pbStack_1368[0x9f] = 0;
          pbStack_1368[0x90] = 0;
          pbStack_1368[0x91] = 0;
          pbStack_1368[0x92] = 0;
          pbStack_1368[0x93] = 0;
          pbStack_1368[0x94] = 0;
          pbStack_1368[0x95] = 0;
          pbStack_1368[0x96] = 0;
          pbStack_1368[0x97] = 0;
          pbStack_1368[0xa8] = 0;
          pbStack_1368[0xa9] = 0;
          pbStack_1368[0xaa] = 0;
          pbStack_1368[0xab] = 0;
          pbStack_1368[0xac] = 0;
          pbStack_1368[0xad] = 0;
          pbStack_1368[0xae] = 0;
          pbStack_1368[0xaf] = 0;
          pbStack_1368[0xa0] = 0;
          pbStack_1368[0xa1] = 0;
          pbStack_1368[0xa2] = 0;
          pbStack_1368[0xa3] = 0;
          pbStack_1368[0xa4] = 0;
          pbStack_1368[0xa5] = 0;
          pbStack_1368[0xa6] = 0;
          pbStack_1368[0xa7] = 0;
          pbStack_1368[0xb8] = 0;
          pbStack_1368[0xb9] = 0;
          pbStack_1368[0xba] = 0;
          pbStack_1368[0xbb] = 0;
          pbStack_1368[0xbc] = 0;
          pbStack_1368[0xbd] = 0;
          pbStack_1368[0xbe] = 0;
          pbStack_1368[0xbf] = 0;
          pbStack_1368[0xb0] = 0;
          pbStack_1368[0xb1] = 0;
          pbStack_1368[0xb2] = 0;
          pbStack_1368[0xb3] = 0;
          pbStack_1368[0xb4] = 0;
          pbStack_1368[0xb5] = 0;
          pbStack_1368[0xb6] = 0;
          pbStack_1368[0xb7] = 0;
          pbStack_1368[200] = 0;
          pbStack_1368[0xc9] = 0;
          pbStack_1368[0xca] = 0;
          pbStack_1368[0xcb] = 0;
          pbStack_1368[0xcc] = 0;
          pbStack_1368[0xcd] = 0;
          pbStack_1368[0xce] = 0;
          pbStack_1368[0xcf] = 0;
          pbStack_1368[0xc0] = 0;
          pbStack_1368[0xc1] = 0;
          pbStack_1368[0xc2] = 0;
          pbStack_1368[0xc3] = 0;
          pbStack_1368[0xc4] = 0;
          pbStack_1368[0xc5] = 0;
          pbStack_1368[0xc6] = 0;
          pbStack_1368[199] = 0;
          pbStack_1368[0xd8] = 0;
          pbStack_1368[0xd9] = 0;
          pbStack_1368[0xda] = 0;
          pbStack_1368[0xdb] = 0;
          pbStack_1368[0xdc] = 0;
          pbStack_1368[0xdd] = 0;
          pbStack_1368[0xde] = 0;
          pbStack_1368[0xdf] = 0;
          pbStack_1368[0xd0] = 0;
          pbStack_1368[0xd1] = 0;
          pbStack_1368[0xd2] = 0;
          pbStack_1368[0xd3] = 0;
          pbStack_1368[0xd4] = 0;
          pbStack_1368[0xd5] = 0;
          pbStack_1368[0xd6] = 0;
          pbStack_1368[0xd7] = 0;
          pbStack_1368[0xe8] = 0;
          pbStack_1368[0xe9] = 0;
          pbStack_1368[0xea] = 0;
          pbStack_1368[0xeb] = 0;
          pbStack_1368[0xec] = 0;
          pbStack_1368[0xed] = 0;
          pbStack_1368[0xee] = 0;
          pbStack_1368[0xef] = 0;
          pbStack_1368[0xe0] = 0;
          pbStack_1368[0xe1] = 0;
          pbStack_1368[0xe2] = 0;
          pbStack_1368[0xe3] = 0;
          pbStack_1368[0xe4] = 0;
          pbStack_1368[0xe5] = 0;
          pbStack_1368[0xe6] = 0;
          pbStack_1368[0xe7] = 0;
          pbStack_1368[0xf8] = 0;
          pbStack_1368[0xf9] = 0;
          pbStack_1368[0xfa] = 0;
          pbStack_1368[0xfb] = 0;
          pbStack_1368[0xfc] = 0;
          pbStack_1368[0xfd] = 0;
          pbStack_1368[0xfe] = 0;
          pbStack_1368[0xff] = 0;
          pbStack_1368[0xf0] = 0;
          pbStack_1368[0xf1] = 0;
          pbStack_1368[0xf2] = 0;
          pbStack_1368[0xf3] = 0;
          pbStack_1368[0xf4] = 0;
          pbStack_1368[0xf5] = 0;
          pbStack_1368[0xf6] = 0;
          pbStack_1368[0xf7] = 0;
          do {
            if (*(int *)(lVar29 + 0x220f4 + lVar30) != 0) {
              pbVar34 = pbStack_1370 + lVar30;
              pbVar34[0] = 0xff;
              pbVar34[1] = 0xff;
              pbVar34[2] = 0;
              pbVar34[3] = 0;
            }
            lVar30 = lVar30 + 4;
          } while (lVar30 != 400);
          lVar30 = 0;
          do {
            uVar36 = 0;
            pbVar34 = pbStack_1370 + lVar30 * 4;
            pbVar34[0] = 0;
            pbVar34[1] = 0;
            pbVar34[2] = 0;
            pbVar34[3] = 0;
            uVar28 = 0;
            if (*(int *)(lVar29 + 0x220f4 + lVar30 * 4) != 0) {
              uVar28 = 0xffff;
            }
            *(uint *)(pbStack_1370 + lVar30 * 4) = uVar28;
            uVar39 = 1;
            iVar110 = 0x20;
            do {
              uVar33 = (uint)uVar36;
              if ((uVar39 & uVar28) != 0) {
                uVar33 = uVar33 + 1;
              }
              uVar36 = (ulong)uVar33;
              uVar39 = uVar39 << 1;
              iVar110 = iVar110 + -1;
            } while (iVar110 != 0);
            *(uint *)(pbStack_1378 + lVar30 * 4) = uVar33;
            *(int *)(pbStack_1368 + uVar36 * 4) = *(int *)(pbStack_1368 + (ulong)uVar33 * 4) + 1;
            lVar30 = lVar30 + 1;
          } while (lVar30 != 100);
          iVar110 = *(int *)(pbVar52 + 0x3c8);
          *(int *)(pbVar52 + 0x448) = iVar110;
          lVar29 = 0x1f;
          pbVar34 = pbVar52 + 0x44c;
          do {
            iVar110 = *(int *)(pbVar34 + -0x80) + iVar110;
            *(int *)pbVar34 = iVar110;
            lVar29 = lVar29 + -1;
            pbVar34 = pbVar34 + 4;
          } while (lVar29 != 0);
          pbStack_12e0[4] = 1;
          pbStack_12e0[5] = 0;
          pbStack_12e0[6] = 0;
          pbStack_12e0[7] = 0;
          FUN_109677cf0(pbVar16);
          pbVar52[0x4d0] = 1;
          pbVar52[0x4d1] = 0;
          pbVar52[0x4d2] = 0;
          pbVar52[0x4d3] = 0;
          lVar29 = *(long *)pbVar52;
        }
      }
      *(undefined4 *)(lVar29 + 0x2d3e4) = 0;
    }
    else {
      iVar115 = *(int *)(pbVar52 + 0x928);
      iVar113 = iVar115 + 0xc;
      if (-1 < iVar115) {
        iVar113 = iVar115;
      }
      uVar62 = 0;
      uVar68 = 0;
      uVar75 = 0;
      cVar70 = '\0';
      iVar41 = -1;
      do {
        iVar3 = iVar115 + iVar41;
        iVar40 = iVar3 + 0xc;
        if (-1 < iVar3) {
          iVar40 = iVar3;
        }
        fVar90 = (float)*(undefined8 *)(pbVar16 + ((long)iVar113 * 0xf + 0x10ad82) * 4) -
                 (float)*(undefined8 *)(pbVar16 + ((long)iVar40 * 0xf + 0x10ad82) * 4);
        fVar99 = (float)((ulong)*(undefined8 *)(pbVar16 + ((long)iVar113 * 0xf + 0x10ad82) * 4) >>
                        0x20) -
                 (float)((ulong)*(undefined8 *)(pbVar16 + ((long)iVar40 * 0xf + 0x10ad82) * 4) >>
                        0x20);
        fVar90 = (float)CONCAT13(cVar70,CONCAT12(uVar75,CONCAT11(uVar68,uVar62))) +
                 fVar90 * fVar90 + fVar99 * fVar99;
        uVar62 = SUB41(fVar90,0);
        uVar68 = (undefined1)((uint)fVar90 >> 8);
        uVar75 = (undefined1)((uint)fVar90 >> 0x10);
        cVar70 = (char)((uint)fVar90 >> 0x18);
        iVar41 = iVar41 + -1;
      } while (iVar41 != -3);
      iVar113 = 9;
      if (2 < iVar115) {
        iVar113 = -3;
      }
      fVar99 = 0.0;
      iVar41 = 8;
      do {
        iVar40 = iVar115 + iVar41 + -0xc;
        iVar3 = iVar115 + iVar41;
        if (-1 < iVar40) {
          iVar3 = iVar40;
        }
        fVar98 = (float)*(undefined8 *)(pbVar16 + ((long)(iVar113 + iVar115) * 0xf + 0x10ad82) * 4)
                 - (float)*(undefined8 *)(pbVar16 + ((long)iVar3 * 0xf + 0x10ad82) * 4);
        fVar101 = (float)((ulong)*(undefined8 *)
                                  (pbVar16 + ((long)(iVar113 + iVar115) * 0xf + 0x10ad82) * 4) >>
                         0x20) -
                  (float)((ulong)*(undefined8 *)(pbVar16 + ((long)iVar3 * 0xf + 0x10ad82) * 4) >>
                         0x20);
        fVar99 = fVar99 + fVar98 * fVar98 + fVar101 * fVar101;
        iVar41 = iVar41 + -1;
      } while (iVar41 != 6);
      if (100.0 <= fVar90) {
LAB_109679408:
        pbVar15 = pbStack_12f8;
        iVar113 = *(int *)(pbVar52 + 0x654);
        iVar115 = 4;
        iVar41 = 1;
        do {
          iVar3 = iVar113 + 0xc;
          if (-1 < iVar113) {
            iVar3 = iVar113;
          }
          iVar40 = 0;
          if (*(float *)(pbVar16 + ((long)iVar3 + 0x10ad75) * 4) <= 0.6) {
            iVar40 = iVar41;
          }
          iVar113 = iVar113 + -1;
          iVar115 = iVar115 + -1;
          iVar41 = iVar40;
        } while (iVar115 != 0);
        *(int *)pbStack_12f0 = iVar40;
        lVar30 = *(long *)pbVar52;
        *(undefined4 *)(lVar30 + 0x18) = 0;
        lVar29 = *(long *)(pbVar52 + 0x18);
        fVar90 = *(float *)(lVar29 + 0x28);
        fVar99 = *(float *)(lVar30 + 0x28);
        if (fVar90 == fVar99) {
          FUN_109676544(pbVar16,pbVar16 + 0x42bd88);
          iVar110 = iVar110 + 0x124fd8;
          FUN_10967df78();
          lVar29 = *(long *)pbVar52;
          *(int *)(lVar29 + 0xc) = iVar110;
          FUN_10967df78(pbVar16 + 0x124fd8,*(long *)(pbVar52 + 8),lVar29,
                        *(long *)(pbVar52 + 8) + 0x130,lVar29 + 0x130,&uStack_880,100);
          lVar19 = 0;
          lVar30 = 0;
          lVar29 = *(long *)pbVar52;
          do {
            if (*(int *)((long)&uStack_878 + lVar19) == 0) {
              if (*(int *)(lVar29 + lVar19 + 0x138) != 0) {
                puVar23 = (undefined4 *)(lVar29 + lVar19 + 0x138);
                goto LAB_109679538;
              }
            }
            else {
              uVar91 = *(undefined8 *)(lVar29 + lVar19 + 0x130);
              fVar90 = (float)*(undefined8 *)((long)&uStack_880 + lVar19) - (float)uVar91;
              fVar99 = (float)((ulong)*(undefined8 *)((long)&uStack_880 + lVar19) >> 0x20) -
                       (float)((ulong)uVar91 >> 0x20);
              if (1.0 < fVar90 * fVar90 + fVar99 * fVar99) {
                puVar23 = (undefined4 *)(lVar29 + 0x138 + lVar30 * 0xc);
LAB_109679538:
                *puVar23 = 0;
                *(int *)(lVar29 + 0xc) = *(int *)(lVar29 + 0xc) + -1;
                *(int *)(lVar29 + 0x18) = *(int *)(lVar29 + 0x18) + 1;
              }
            }
            lVar30 = lVar30 + 1;
            lVar19 = lVar19 + 0xc;
          } while (lVar19 != 0x4b0);
        }
        else if (fVar99 <= fVar90) {
          lVar35 = *(long *)(pbStack_12e8 + 0x28);
          afStack_360[0] = 1.4013e-45;
          afStack_360[3] = 1.4013e-45;
          uVar91 = *(undefined8 *)(pbStack_12f8 + 0xc);
          iVar113 = (int)((long)uVar91 >> 0x21);
          uVar91 = NEON_scvtf(CONCAT17((char)((long)uVar91 >> 0x39),
                                       CONCAT16((char)((uint)iVar113 >> 0x10),
                                                CONCAT15((char)((uint)iVar113 >> 8),
                                                         CONCAT14((char)iVar113,
                                                                  CONCAT13((char)((ulong)uVar91 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar91 >> 1))
                                                                 )))),4);
          iVar113 = (int)(float)((ulong)uVar91 >> 0x20);
          fStack_368 = (float)(int)(float)uVar91;
          fStack_364 = (float)iVar113;
          iVar113 = iVar113 + 100;
          uStack_344 = NEON_scvtf(CONCAT17((char)((uint)iVar113 >> 0x18),
                                           CONCAT16((char)((uint)iVar113 >> 0x10),
                                                    CONCAT15((char)((uint)iVar113 >> 8),
                                                             CONCAT14((char)iVar113,
                                                                      (int)(float)uVar91 + 100)))),4
                                 );
          afStack_360[1] = (float)uStack_344;
          fStack_34c = (float)((ulong)uStack_344 >> 0x20);
          fStack_348 = 1.4013e-45;
          uStack_33c = 1;
          uStack_1338 = 0;
          pbStack_1340 = (byte *)(ulong)(uint)fVar90;
          afStack_360[2] = fStack_364;
          afStack_360[4] = fStack_368;
          FUN_10967e884(pbVar16,&fStack_368,&lStack_3a0,4);
          lVar19 = 0;
          uVar91 = *(undefined8 *)(pbVar15 + 0xc);
          iVar113 = (int)((long)uVar91 >> 0x21);
          uVar91 = NEON_scvtf(CONCAT17((char)((long)uVar91 >> 0x39),
                                       CONCAT16((char)((uint)iVar113 >> 0x10),
                                                CONCAT15((char)((uint)iVar113 >> 8),
                                                         CONCAT14((char)iVar113,
                                                                  CONCAT13((char)((ulong)uVar91 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar91 >> 1))
                                                                 )))),4);
          do {
            *(int *)((long)afStack_3c8 + lVar19) = *(int *)((long)&uStack_398 + lVar19);
            uVar92 = uVar91;
            if (*(int *)((long)&uStack_398 + lVar19) != 0) {
              uVar92 = CONCAT44((float)((ulong)uVar91 >> 0x20) +
                                (float)((ulong)*(undefined8 *)((long)&lStack_3a0 + lVar19) >> 0x20)
                                * SUB84(pbStack_1340,0),
                                (float)uVar91 +
                                (float)*(undefined8 *)((long)&lStack_3a0 + lVar19) *
                                SUB84(pbStack_1340,0));
            }
            *(undefined8 *)((long)&lStack_3d0 + lVar19) = uVar92;
            lVar19 = lVar19 + 0xc;
          } while ((int)lVar19 != 0x30);
          FUN_10967ed94(&fStack_368,&lStack_3d0,0,1,2,3,lVar35 + 0x2d390);
          FUN_1096766e4(lVar30,lVar35,&fStack_368,&lStack_3d0);
          FUN_10967dbec(lVar35);
          uStack_928 = uStack_1328;
          uStack_930 = (long)dStack_1330;
          uStack_918 = uStack_1328;
          uStack_920 = (long)dStack_1330;
          fStack_910 = 1.0;
          _bzero(pbVar16 + 0x42bd88,0x4b0);
          uStack_808 = *(undefined8 *)(lVar30 + 0x94);
          uStack_810 = *(undefined8 *)(lVar30 + 0x8c);
          uStack_800 = *(undefined8 *)(lVar30 + 0x9c);
          uStack_7f8 = *(undefined8 *)(lVar30 + 0xa4);
          uStack_7e8 = *(undefined8 *)(lVar30 + 0xb4);
          uStack_7f0 = *(undefined8 *)(lVar30 + 0xac);
          uStack_7e0 = *(undefined8 *)(lVar30 + 0xbc);
          uStack_7d8 = *(undefined8 *)(lVar30 + 0xc4);
          uStack_848 = *(undefined8 *)(lVar30 + 0x54);
          uStack_850 = *(undefined8 *)(lVar30 + 0x4c);
          uStack_840 = *(undefined8 *)(lVar30 + 0x5c);
          uStack_838 = *(undefined8 *)(lVar30 + 100);
          uStack_828 = *(undefined8 *)(lVar30 + 0x74);
          uStack_830 = *(undefined8 *)(lVar30 + 0x6c);
          uStack_820 = *(undefined8 *)(lVar30 + 0x7c);
          uStack_818 = *(undefined8 *)(lVar30 + 0x84);
          uStack_880 = *(long *)(lVar30 + 0x1c);
          uStack_870 = *(undefined8 *)(lVar30 + 0x2c);
          uStack_868 = *(undefined8 *)(lVar30 + 0x34);
          fStack_858 = (float)*(undefined8 *)(lVar30 + 0x44);
          uStack_854 = (undefined4)((ulong)*(undefined8 *)(lVar30 + 0x44) >> 0x20);
          uStack_860 = (undefined4)*(undefined8 *)(lVar30 + 0x3c);
          fStack_85c = (float)((ulong)*(undefined8 *)(lVar30 + 0x3c) >> 0x20);
          uStack_878._0_4_ = (int)*(undefined8 *)(lVar30 + 0x24);
          uStack_878 = CONCAT44(*(undefined4 *)(lVar29 + 0x28),(int)uStack_878);
          iVar113 = 100;
          FUN_10967e938(pbVar16,lVar29 + 0x130,lVar29 + 0x1c,&uStack_930,&uStack_880,100,
                        pbVar16 + 0x42bd88);
          pbVar52 = pbStack_12e8;
          iVar110 = iVar110 + 0x124fd8;
          FUN_10967df78();
          *(int *)(*(long *)pbVar52 + 0xc) = iVar110;
          FUN_10967e884(pbVar16,*(long *)(pbVar52 + 0x28) + 0x130,pbVar16 + 0x42bd88,100);
          lVar29 = *(long *)pbVar52;
          uVar91 = *(undefined8 *)(pbStack_12f8 + 0xc);
          cVar70 = (char)((ulong)uVar91 >> 0x18) >> 1;
          iVar110 = (int)((long)uVar91 >> 0x21);
          uVar79 = (undefined1)iVar110;
          uVar82 = (undefined1)((uint)iVar110 >> 8);
          uVar85 = (undefined1)((uint)iVar110 >> 0x10);
          cVar88 = (char)((long)uVar91 >> 0x39);
          uVar91 = NEON_scvtf(CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,
                                                  CONCAT13(cVar70,(int3)((int)uVar91 >> 1)))))),4);
          fVar90 = *(float *)(lVar29 + 0x28);
          pbVar15 = pbVar52 + 0xde0;
          piVar49 = (int *)(lVar29 + 0x138);
          do {
            iVar110 = *(int *)pbVar15;
            *piVar49 = iVar110;
            uVar92 = uVar91;
            if (iVar110 != 0) {
              uVar92 = CONCAT44((float)((ulong)uVar91 >> 0x20) +
                                (float)((ulong)*(long *)(pbVar15 + -8) >> 0x20) * fVar90,
                                (float)uVar91 + (float)*(long *)(pbVar15 + -8) * fVar90);
            }
            *(undefined8 *)(piVar49 + -2) = uVar92;
            pbVar15 = pbVar15 + 0xc;
            piVar49 = piVar49 + 3;
            iVar113 = iVar113 + -1;
          } while (iVar113 != 0);
        }
        else {
          lVar35 = *(long *)(pbStack_12e8 + 0x28);
          uVar91 = *(undefined8 *)(pbStack_12f8 + 0xc);
          iVar113 = (int)((long)uVar91 >> 0x21);
          uVar91 = NEON_scvtf(CONCAT17((char)((long)uVar91 >> 0x39),
                                       CONCAT16((char)((uint)iVar113 >> 0x10),
                                                CONCAT15((char)((uint)iVar113 >> 8),
                                                         CONCAT14((char)iVar113,
                                                                  CONCAT13((char)((ulong)uVar91 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar91 >> 1))
                                                                 )))),4);
          iVar113 = (int)(float)((ulong)uVar91 >> 0x20);
          fVar90 = (float)(int)(float)uVar91;
          fVar98 = (float)iVar113;
          uStack_880 = CONCAT44(fVar98,fVar90);
          iVar113 = iVar113 + 100;
          uVar91 = NEON_scvtf(CONCAT17((char)((uint)iVar113 >> 0x18),
                                       CONCAT16((char)((uint)iVar113 >> 0x10),
                                                CONCAT15((char)((uint)iVar113 >> 8),
                                                         CONCAT14((char)iVar113,
                                                                  (int)(float)uVar91 + 100)))),4);
          fStack_85c = (float)uVar91;
          uStack_878 = CONCAT44(fStack_85c,1);
          uStack_870 = CONCAT44(1,fVar98);
          fStack_858 = (float)((ulong)uVar91 >> 0x20);
          uStack_868 = CONCAT44(fStack_858,fVar90);
          uStack_860 = 1;
          uStack_854 = 1;
          uStack_1338 = 0;
          pbStack_1340 = (byte *)(ulong)(uint)fVar99;
          FUN_10967e884(pbVar16,&uStack_880,&fStack_368,4);
          lVar19 = 0;
          uVar91 = *(undefined8 *)(pbVar15 + 0xc);
          cVar70 = (char)((ulong)uVar91 >> 0x18) >> 1;
          iVar113 = (int)((long)uVar91 >> 0x21);
          uVar79 = (undefined1)iVar113;
          uVar82 = (undefined1)((uint)iVar113 >> 8);
          uVar85 = (undefined1)((uint)iVar113 >> 0x10);
          cVar88 = (char)((long)uVar91 >> 0x39);
          uVar91 = NEON_scvtf(CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,
                                                  CONCAT13(cVar70,(int3)((int)uVar91 >> 1)))))),4);
          do {
            *(int *)((long)&uStack_398 + lVar19) = *(int *)((long)afStack_360 + lVar19);
            uVar92 = uVar91;
            if (*(int *)((long)afStack_360 + lVar19) != 0) {
              uVar92 = CONCAT44((float)((ulong)uVar91 >> 0x20) +
                                (float)((ulong)*(undefined8 *)((long)&fStack_368 + lVar19) >> 0x20)
                                * SUB84(pbStack_1340,0),
                                (float)uVar91 +
                                (float)*(undefined8 *)((long)&fStack_368 + lVar19) *
                                SUB84(pbStack_1340,0));
            }
            *(undefined8 *)((long)&lStack_3a0 + lVar19) = uVar92;
            lVar19 = lVar19 + 0xc;
          } while ((int)lVar19 != 0x30);
          FUN_10967ed94(&uStack_880,&lStack_3a0,0,1,2,3,lVar35 + 0x2d390);
          lVar19 = 0x130;
          do {
            FUN_10967e7a0(lVar29 + lVar19,lVar35 + 0x2d390,lVar35 + lVar19);
            lVar19 = lVar19 + 0xc;
          } while (lVar19 != 0x5e0);
          FUN_1096766e4(lVar29,lVar35,&uStack_880,&lStack_3a0);
          FUN_10967dbec(lVar35);
          afStack_3c8[0] = (float)uStack_1328;
          afStack_3c8[1] = (float)((ulong)uStack_1328 >> 0x20);
          lStack_3d0 = (long)dStack_1330;
          uStack_3b8 = uStack_1328;
          afStack_3c8[2] = SUB84(dStack_1330,0);
          afStack_3c8[3] = (float)((ulong)dStack_1330 >> 0x20);
          uStack_3b0 = 0x3f800000;
          _bzero(pbVar16 + 0x42bd88,0x4b0);
          FUN_10967e938(pbVar16,lVar29 + 0x130,lVar29 + 0x1c,&lStack_3d0,lVar30 + 0x1c,100,
                        pbVar16 + 0x42bd88);
          pbVar52 = pbStack_12e8;
          iVar110 = iVar110 + 0x124fd8;
          FUN_10967df78();
          lVar29 = *(long *)pbVar52;
          *(int *)(lVar29 + 0xc) = iVar110;
        }
        pbVar15 = pbStack_12e0;
        iVar110 = *(int *)pbVar16;
        lVar35 = 0x22284;
        lVar19 = 0x138;
        lVar30 = 0x42b1e8;
        do {
          if (*(int *)(lVar29 + lVar19) == 0) {
            *(int *)(lVar29 + lVar35) = iVar110;
            pbVar22 = pbVar16 + lVar30;
            pbVar22[0] = 0;
            pbVar22[1] = 0;
            pbVar22[2] = 0;
            pbVar22[3] = 0;
            pbVar52[0xa8] = 0;
            pbVar52[0xa9] = 0;
            pbVar52[0xaa] = 0;
            pbVar52[0xab] = 0;
          }
          lVar30 = lVar30 + 4;
          lVar19 = lVar19 + 0xc;
          lVar35 = lVar35 + 4;
        } while ((int)lVar19 != 0x5e8);
        pbVar22 = pbVar16;
        FUN_109676f64(pbVar16,*(long *)(pbVar52 + 0x18),lVar29,lVar29 + 0x10,&uStack_880,1);
        *(int *)(pbVar15 + 4) = (int)pbVar22;
        if (*(int *)(pbVar15 + 0x18) == 0) {
          pbVar15[0x14] = 0;
          pbVar15[0x15] = 0;
          pbVar15[0x16] = 0;
          pbVar15[0x17] = 0;
LAB_10967a434:
          if ((int)pbVar22 == 0) goto LAB_10967a444;
          lVar29 = 0x42b480;
          iVar110 = 1;
        }
        else {
          iVar110 = *(int *)(pbVar15 + 0x14);
          *(int *)(pbVar15 + 0x14) = iVar110 + 1;
          if (iVar110 < 3) goto LAB_10967a434;
          pbVar15[4] = 0;
          pbVar15[5] = 0;
          pbVar15[6] = 0;
          pbVar15[7] = 0;
LAB_10967a444:
          pbVar52[0x4d0] = 0;
          pbVar52[0x4d1] = 0;
          pbVar52[0x4d2] = 0;
          pbVar52[0x4d3] = 0;
          iVar110 = *(int *)pbVar16;
          lVar29 = 0x42c6f0;
        }
        *(int *)(pbVar16 + lVar29) = iVar110;
      }
      else {
        fVar90 = fVar90 * 3.0;
        bVar13 = false;
        bVar12 = true;
        bVar14 = false;
        if (100.0 < fVar99) {
          bVar13 = false;
          bVar12 = false;
          bVar14 = true;
          if (!NAN(fVar99) && !NAN(fVar90)) {
            bVar13 = fVar99 < fVar90;
            bVar12 = fVar99 == fVar90;
            bVar14 = false;
          }
        }
        if (bVar12 || bVar13 != bVar14) goto LAB_109679408;
        pbStack_12e0[0xc] = 0;
        pbStack_12e0[0xd] = 0;
        pbStack_12e0[0xe] = 0;
        pbStack_12e0[0xf] = 0;
        pbVar22 = *(byte **)(pbVar52 + 0x20);
        piVar49 = *(int **)pbVar52;
        iVar113 = 0x10;
        uVar62 = 0x20;
        uVar68 = 0x7b;
        uVar75 = 0xb7;
        cVar70 = 'H';
        pbVar15 = pbStack_1310;
        do {
          if (((*(int *)(pbVar15 + 4) != 0) && (0x1e < *piVar49 - *(int *)pbVar15)) &&
             (fVar90 = (float)*(undefined8 *)(piVar49 + 7) - (float)*(undefined8 *)(pbVar15 + 0x1c),
             fVar99 = (float)((ulong)*(undefined8 *)(piVar49 + 7) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(pbVar15 + 0x1c) >> 0x20),
             fVar90 = SQRT(fVar90 * fVar90 + fVar99 * fVar99 +
                           ((float)piVar49[9] - *(float *)(pbVar15 + 0x24)) *
                           ((float)piVar49[9] - *(float *)(pbVar15 + 0x24))),
             fVar90 < (float)CONCAT13(cVar70,CONCAT12(uVar75,CONCAT11(uVar68,uVar62))))) {
            uVar62 = SUB41(fVar90,0);
            uVar68 = (undefined1)((uint)fVar90 >> 8);
            uVar75 = (undefined1)((uint)fVar90 >> 0x10);
            cVar70 = (char)((uint)fVar90 >> 0x18);
            pbVar22 = pbVar15;
          }
          pbVar15 = pbVar15 + 0x2d520;
          iVar113 = iVar113 + -1;
        } while (iVar113 != 0);
        *(byte **)(pbVar52 + 0xa0) = pbVar22;
        if (0.05 < ABS(*(float *)(pbVar22 + 0x2d3b4) - *(float *)(*(long *)(pbVar52 + 8) + 0x2d3b4))
                   / *(float *)(pbVar22 + 0x2d3b4)) {
          if (*(float *)(pbVar22 + 0x2d38c) != 1.0) {
            pbVar15 = pbVar22 + 0x22414;
            lVar29 = 5;
            do {
              if (*(int *)pbVar15 != 0) {
                FUN_109676d34(pbVar16,pbVar22,pbVar15);
              }
              pbVar15 = pbVar15 + 0x2318;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            piVar49 = *(int **)pbVar52;
          }
          FUN_109676544(pbVar16,pbVar16 + 0x42bd88);
          pbVar15 = pbVar16 + 0x124fd8;
          FUN_10967df78(pbVar15,pbVar22,piVar49,pbVar22 + 0x130,pbVar22 + 0x130,piVar49 + 0x4c,100);
          piVar49[3] = (int)pbVar15;
          if ((0x32 < (int)pbVar15) &&
             (FUN_109676f64(pbVar16,pbVar22,piVar49,piVar49 + 4,&uStack_880,0), 0x1e < piVar49[4]))
          {
            pbStack_12e0[0x14] = 0;
            pbStack_12e0[0x15] = 0;
            pbStack_12e0[0x16] = 0;
            pbStack_12e0[0x17] = 0;
            pbStack_12e0[0x18] = 0;
            pbStack_12e0[0x19] = 0;
            pbStack_12e0[0x1a] = 0;
            pbStack_12e0[0x1b] = 0;
            pbStack_12e0[0xc] = 1;
            pbStack_12e0[0xd] = 0;
            pbStack_12e0[0xe] = 0;
            pbStack_12e0[0xf] = 0;
            *(byte **)(pbVar52 + 0x18) = pbVar22;
            iVar113 = *(int *)pbVar22;
            pbVar15 = pbStack_12f0 + 0xc;
            iVar115 = 0x10;
            do {
              if (iVar113 < *(int *)(pbVar15 + -4)) {
                pbVar15[0] = 0;
                pbVar15[1] = 0;
                pbVar15[2] = 0;
                pbVar15[3] = 0;
              }
              pbVar15 = pbVar15 + 0x2d520;
              iVar115 = iVar115 + -1;
            } while (iVar115 != 0);
          }
        }
        if (*(int *)(pbStack_12e0 + 0xc) != 1) goto LAB_109679408;
        iVar110 = *(int *)pbVar22;
        pbVar15 = pbStack_12f0 + 0xc;
        lVar29 = 0x10;
        do {
          if ((*(int *)(pbVar15 + -4) < iVar110) && (*(int *)pbVar15 != 0)) {
            pbVar15[0] = 0;
            pbVar15[1] = 0;
            pbVar15[2] = 0;
            pbVar15[3] = 0;
          }
          pbVar15 = pbVar15 + 0x2d520;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        *(byte **)(pbVar52 + 0x20) = pbVar22;
        pbVar52[0x4d0] = 1;
        pbVar52[0x4d1] = 0;
        pbVar52[0x4d2] = 0;
        pbVar52[0x4d3] = 0;
        iVar110 = *(int *)pbVar16;
        *(int *)(pbVar52 + 0x98) = **(int **)(pbVar52 + 0xa0);
        *(int *)(pbVar52 + 0x9c) = iVar110;
        pbStack_12e0[0xc] = 1;
        pbStack_12e0[0xd] = 0;
        pbStack_12e0[0xe] = 0;
        pbStack_12e0[0xf] = 0;
        pbVar15 = pbStack_12e0;
      }
      if (*(int *)(pbVar15 + 4) == 0) {
        iVar110 = **(int **)pbVar52;
        pbVar15 = pbStack_12f0 + 0xc;
        iVar113 = 0x10;
        do {
          if (iVar110 + -4 < *(int *)(pbVar15 + -4)) {
            pbVar15[0] = 0;
            pbVar15[1] = 0;
            pbVar15[2] = 0;
            pbVar15[3] = 0;
          }
          pbVar15 = pbVar15 + 0x2d520;
          iVar113 = iVar113 + -1;
        } while (iVar113 != 0);
        pbVar52[0x4d0] = 0;
        pbVar52[0x4d1] = 0;
        pbVar52[0x4d2] = 0;
        pbVar52[0x4d3] = 0;
        pbVar15 = pbStack_1348;
        pbVar46 = pbStack_1350;
      }
      else {
        lVar29 = 0;
        bVar13 = false;
        lVar35 = *(long *)pbVar52;
        lVar30 = 0x67d8;
        lVar19 = 0x22414;
        do {
          if ((*(int *)(lVar35 + lVar19) != 0) &&
             (*(int *)(*(long *)(pbVar16 + 0x67d0) + lVar29 + 4) == 2)) {
            lVar45 = lVar35 + lVar19;
            fVar90 = (float)*(undefined8 *)(lVar45 + 0x34) -
                     (float)*(undefined8 *)(pbVar16 + lVar30);
            fVar99 = (float)((ulong)*(undefined8 *)(lVar45 + 0x34) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(pbVar16 + lVar30) >> 0x20);
            fVar90 = SQRT(fVar90 * fVar90 + fVar99 * fVar99);
            bVar13 = (bool)(bVar13 | 10.0 < fVar90);
            if (10.0 < fVar90) {
              lVar51 = *(long *)(pbVar16 + 0x67d0) + lVar29;
              FUN_10967eaa0(CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,CONCAT13
                                                  (cVar70,CONCAT12(uVar75,CONCAT11(uVar68,uVar62))))
                                                  ))),*(undefined4 *)(lVar45 + 0x38),
                            *(undefined4 *)(lVar51 + 0x10),*(undefined4 *)(lVar51 + 0x14),pbVar16,
                            lVar45 + 0x70,lVar35 + 0x1c,lVar45 + 0x70,0x168);
              FUN_10967eaa0(CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,CONCAT13
                                                  (cVar70,CONCAT12(uVar75,CONCAT11(uVar68,uVar62))))
                                                  ))),*(undefined4 *)(lVar45 + 0x38),
                            *(undefined4 *)(*(long *)(pbVar16 + 0x67d0) + lVar29 + 0x10),
                            *(undefined4 *)(*(long *)(pbVar16 + 0x67d0) + lVar29 + 0x14),pbVar16,
                            lVar45 + 4,lVar35 + 0x1c,lVar45 + 4,9);
              pbVar15 = pbStack_12e8;
              uVar32 = *(undefined4 *)(*(long *)pbStack_12e8 + 0x28);
              uVar62 = (undefined1)uVar32;
              uVar68 = (undefined1)((uint)uVar32 >> 8);
              uVar75 = (undefined1)((uint)uVar32 >> 0x10);
              cVar70 = (char)((uint)uVar32 >> 0x18);
              FUN_1096768b0(pbVar16,lVar45 + 0x34,*(long *)pbStack_12e8 + 0x50);
              *(uint *)(lVar45 + 0x22c8) = CONCAT13(cVar70,CONCAT12(uVar75,CONCAT11(uVar68,uVar62)))
              ;
              lVar35 = *(long *)pbVar15;
              *(float *)(lVar45 + 0x22c4) =
                   (float)CONCAT13(cVar70,CONCAT12(uVar75,CONCAT11(uVar68,uVar62))) *
                   *(float *)(lVar35 + 0x2d3b4);
              *(undefined4 *)(lVar45 + 0x22cc) = 0x3f800000;
            }
          }
          pbVar52 = pbStack_12e8;
          pbVar15 = pbStack_1348;
          pbVar46 = pbStack_1350;
          lVar29 = lVar29 + 0x14;
          lVar19 = lVar19 + 0x2318;
          lVar30 = lVar30 + 0xc;
        } while (lVar29 != 100);
        piVar49 = (int *)(lVar35 + 0x22414);
        if (*(int *)(lVar35 + 0x10) < 0xf) {
          bVar12 = *(int *)(*(long *)(pbStack_12e8 + 8) + 0x10) < 0x1e;
        }
        else {
          bVar12 = false;
        }
        piVar43 = *(int **)(pbStack_12e8 + 0x18);
        bVar14 = 0x32 < *(int *)pbVar16 - *piVar43;
        bVar1 = true;
        if ((ABS(*(float *)(lVar35 + 0x24) - (float)piVar43[9]) <= 0.08726646) &&
           (ABS(*(float *)(lVar35 + 0x20) - (float)piVar43[8]) <= 0.08726646)) {
          bVar1 = 0.08726646 < ABS(*(float *)(lVar35 + 0x1c) - (float)piVar43[7]);
        }
        iVar110 = *(int *)(lVar35 + 0xc);
        fVar90 = *(float *)(lVar35 + 0x22448) - (float)piVar43[0x8912];
        fVar99 = *(float *)(lVar35 + 0x2244c) - (float)piVar43[0x8913];
        fVar90 = fVar90 * fVar90 + fVar99 * fVar99;
        if (10 < *(int *)pbVar16 - *piVar43) {
          fVar99 = *(float *)(lVar35 + 0x246d8) / (float)piVar43[0x91b6];
          if (0x27 < *(int *)(lVar35 + 0x14)) {
            iVar115 = *(int *)(pbStack_12e8 + 0x654);
            iVar113 = iVar115 + 0xc;
            if (-1 < iVar115) {
              iVar113 = iVar115;
            }
            if (((*(float *)(pbVar16 + ((long)iVar113 + 0x10ad75) * 4) <= 0.8) || (0x4a < iVar110))
               && (*(int *)pbStack_12f0 == 0 ||
                   fVar90 <= 400.0 && (fVar99 <= 1.1 && 0.9090909 <= fVar99))) goto LAB_10967a754;
          }
          bVar14 = true;
        }
LAB_10967a754:
        fVar99 = *(float *)(lVar35 + 0x28) / (float)piVar43[10];
        if ((((*(float *)(lVar35 + 0x2d38c) < 0.9090909) || (1.1 < *(float *)(lVar35 + 0x2d38c))) ||
            (((fVar99 < 0.990099 || 1.01 < fVar99) ||
              (((bVar12 || (iVar110 < 0x1e || *(int *)(lVar35 + 0x10) < 0x1e)) ||
               0x1e < *(int *)(*(long *)(pbStack_12e8 + 8) + 0xc) - iVar110) || bVar1) ||
             ((50.0 < SQRT(fVar90) ||
              ((bool)((*(ushort *)(*(long *)(pbVar16 + 0x67d0) + 0x98) & 0x1c0) == 0 & bVar14)))))))
           || (bVar13)) {
          FUN_109677cf0(pbVar16,lVar35);
          if (*(int *)(pbVar52 + 0x4e4) == 0) {
            lVar29 = 5;
            do {
              if (*piVar49 != 0) {
                FUN_109676d34(pbVar16,lVar35,piVar49);
              }
              piVar49 = piVar49 + 0x8c6;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
          }
          pbStack_1300[0] = 1;
          pbStack_1300[1] = 0;
          pbStack_1300[2] = 0;
          pbStack_1300[3] = 0;
        }
      }
      lVar29 = 0;
      lVar30 = 0x22414;
      do {
        if (*(int *)(*(long *)(pbVar16 + 0x67d0) + lVar29 + 4) == 3) {
          uStack_880 = *(long *)(*(long *)(pbVar16 + 0x67d0) + lVar29 + 8);
          uStack_878 = CONCAT44(uStack_878._4_4_,1);
          FUN_109676e08(pbVar16,*(long *)pbVar52 + 0x1c,&uStack_880,*(long *)pbVar52 + lVar30);
        }
        lVar30 = lVar30 + 0x2318;
        lVar29 = lVar29 + 0x14;
        pbVar117 = pbStack_1320;
        pbVar22 = pbStack_12e0;
        pbVar50 = pbStack_1318;
      } while (lVar29 != 100);
    }
    FUN_10967fa38(3);
  }
  lVar29 = *(long *)pbVar52;
  *(int *)(pbVar22 + 0x20) = *(int *)(lVar29 + 0x2d3b4);
  fVar101 = *(float *)(pbVar22 + 0x1c);
  FUN_10967e884(pbVar16,lVar29 + 0x22448,&uStack_880,1);
  fVar103 = 1.0 / SQRT(uStack_880._4_4_ * uStack_880._4_4_ + (float)uStack_880 * (float)uStack_880 +
                       1.0);
  fVar90 = (float)uStack_880 * fVar103;
  fVar98 = uStack_880._4_4_ * fVar103;
  fVar99 = fVar98 * *(float *)(lVar29 + 0x6c) + fVar90 * *(float *)(lVar29 + 0x68) +
           fVar103 * *(float *)(lVar29 + 0x70);
  fVar101 = -fVar101 / fVar99;
  fVar111 = (*(float *)(lVar29 + 0x54) * fVar98 + fVar90 * *(float *)(lVar29 + 0x50) +
            fVar103 * *(float *)(lVar29 + 0x58)) * fVar101;
  fVar90 = (*(float *)(lVar29 + 0x60) * fVar98 + fVar90 * *(float *)(lVar29 + 0x5c) +
           fVar103 * *(float *)(lVar29 + 100)) * fVar101;
  fVar99 = fVar99 * fVar101;
  FUN_10967f7c8(CONCAT17(cVar88,CONCAT16(uVar85,CONCAT15(uVar82,CONCAT14(uVar79,CONCAT13(cVar70,
                                                  CONCAT12(uVar75,CONCAT11(uVar68,uVar62))))))),0,
                -(*(float *)(*(long *)pbVar52 + 0x24) - *(float *)(*(long *)(pbVar52 + 0x20) + 0x24)
                 ),&uStack_880);
  FUN_109675c30(&uStack_880,&fStack_368);
  lVar29 = *(long *)pbVar52;
  *(float *)(lVar29 + 0x2d3e8) =
       fVar90 * fStack_364 + fVar111 * fStack_368 + fVar99 * afStack_360[0];
  *(float *)(lVar29 + 0x2d3ec) =
       fVar90 * afStack_360[2] + fVar111 * afStack_360[1] + fVar99 * afStack_360[3];
  *(float *)(lVar29 + 0x2d3f0) =
       fVar90 * fStack_34c + fVar111 * afStack_360[4] + fVar99 * fStack_348;
  iVar110 = *(int *)(pbVar52 + 0xdd4);
  uVar91 = *(undefined8 *)(lVar29 + 0x2d3e8);
  *(undefined8 *)(pbVar16 + ((long)iVar110 * 4 + 0x10aeeb) * 4) = *(undefined8 *)(lVar29 + 0x2d3f0);
  *(undefined8 *)(pbVar16 + ((long)iVar110 * 4 + 0x10aee9) * 4) = uVar91;
  iVar110 = 0;
  if (*(int *)(pbVar52 + 0xdd4) != 0x1d) {
    iVar110 = *(int *)(pbVar52 + 0xdd4) + 1;
  }
  *(int *)(pbVar52 + 0xdd4) = iVar110;
  pbVar52[0x4d4] = 0;
  pbVar52[0x4d5] = 0;
  pbVar52[0x4d6] = 0;
  pbVar52[0x4d7] = 0;
  lVar29 = *(long *)pbVar52;
  fVar90 = *(float *)(lVar29 + 0x2d38c);
  iVar110 = *(int *)pbStack_12f0;
  if (((iVar110 == 0) || (*(int *)(pbStack_12f0 + 4) < 0xb)) && (*(int *)(pbVar22 + 0x18) == 0)) {
    fVar98 = (float)*(int *)(pbStack_1308 +
                            (long)(*(int *)pbVar15 + (*(int *)pbVar15 >> 0x1f) * -0x80) * 4) + 20.0;
    fVar99 = (float)*(int *)(pbVar15 + 4);
    bVar13 = false;
    bVar12 = true;
    bVar14 = false;
    if (1.06 < fVar90) {
      bVar13 = false;
      bVar12 = false;
      bVar14 = true;
      if (!NAN(fVar98) && !NAN(fVar99)) {
        bVar13 = fVar98 < fVar99;
        bVar12 = fVar98 == fVar99;
        bVar14 = false;
      }
    }
    if ((*(int *)(pbVar22 + 4) == 0) || (!bVar12 && bVar13 == bVar14)) goto LAB_10967aa5c;
  }
  else {
LAB_10967aa5c:
    pbVar52[0x4d4] = 1;
    pbVar52[0x4d5] = 0;
    pbVar52[0x4d6] = 0;
    pbVar52[0x4d7] = 0;
  }
  if (*(int *)(pbVar52 + 0x4e4) != 0) {
    pbVar52[0x4d4] = 5;
    pbVar52[0x4d5] = 0;
    pbVar52[0x4d6] = 0;
    pbVar52[0x4d7] = 0;
  }
  if (((*(byte *)(*(long *)(pbVar16 + 0x67d0) + 0x99) >> 2 & 1) == 0) && (1.15 < fVar90)) {
    pbVar52[0x4d4] = 5;
    pbVar52[0x4d5] = 0;
    pbVar52[0x4d6] = 0;
    pbVar52[0x4d7] = 0;
  }
  if (((((*(float *)(lVar29 + 0x22448) < 0.0) ||
        ((float)*(int *)(pbStack_12f8 + 0xc) < *(float *)(lVar29 + 0x22448))) ||
       (*(float *)(lVar29 + 0x2244c) < 0.0)) ||
      ((float)*(int *)(pbStack_12f8 + 0x10) < *(float *)(lVar29 + 0x2244c))) &&
     ((fVar90 = *(float *)(lVar29 + 0x2d3f0) - *(float *)(*(long *)(pbVar52 + 8) + 0x2d3f0),
      uVar91 = *(undefined8 *)(*(long *)(pbVar52 + 8) + 0x2d3e8),
      fVar99 = (float)*(undefined8 *)(lVar29 + 0x2d3e8) - (float)uVar91,
      fVar98 = (float)((ulong)*(undefined8 *)(lVar29 + 0x2d3e8) >> 0x20) -
               (float)((ulong)uVar91 >> 0x20),
      fVar90 = SQRT(fVar99 * fVar99 + fVar98 * fVar98 + fVar90 * fVar90), 10.0 < fVar90 ||
      ((iVar110 != 0 && (5.0 < fVar90)))))) {
    pbVar52[0x4d4] = 5;
    pbVar52[0x4d5] = 0;
    pbVar52[0x4d6] = 0;
    pbVar52[0x4d7] = 0;
  }
  if (*(int *)(pbVar22 + 0xc) != 0) {
    pbVar52[0x4d4] = 0;
    pbVar52[0x4d5] = 0;
    pbVar52[0x4d6] = 0;
    pbVar52[0x4d7] = 0;
  }
  uVar32 = *(undefined4 *)(lVar29 + 0x2d3b4);
  iVar110 = 0;
  if (*(int *)(pbVar52 + 0x99c) != 0xf) {
    iVar110 = *(int *)(pbVar52 + 0x99c) + 1;
  }
  *(int *)(pbVar52 + 0x99c) = iVar110;
  *(undefined4 *)(pbVar16 + ((long)iVar110 + 0x10ae43) * 4) = uVar32;
  iVar110 = 0;
  if (*(int *)(pbVar52 + 0x9e0) != 0xf) {
    iVar110 = *(int *)(pbVar52 + 0x9e0) + 1;
  }
  iVar113 = *(int *)(lVar29 + 0x14);
  *(int *)(pbVar52 + 0x9e0) = iVar110;
  *(float *)(pbVar16 + ((long)iVar110 + 0x10ae54) * 4) = (float)iVar113;
  pbVar34 = pbVar16 + 0x42b608;
  iVar110 = 0;
  if (*(int *)(pbVar52 + 0x928) != 0xb) {
    iVar110 = *(int *)(pbVar52 + 0x928) + 1;
  }
  *(int *)(pbVar52 + 0x928) = iVar110;
  lVar29 = 0x22448;
  lVar30 = 5;
  do {
    iVar110 = *(int *)(pbVar52 + 0x928);
    uVar91 = *(undefined8 *)(*(long *)pbVar52 + lVar29);
    *(undefined4 *)(pbVar34 + (long)iVar110 * 0x3c + 8) =
         *(undefined4 *)((undefined8 *)(*(long *)pbVar52 + lVar29) + 1);
    *(undefined8 *)(pbVar34 + (long)iVar110 * 0x3c) = uVar91;
    pbVar34 = pbVar34 + 0xc;
    lVar29 = lVar29 + 0x2318;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  iVar110 = 0;
  iVar113 = 0;
  if (*(int *)(pbVar52 + 0x560) != 0xb) {
    iVar113 = *(int *)(pbVar52 + 0x560) + 1;
  }
  *(int *)(pbVar52 + 0x560) = iVar113;
  *(int *)(pbVar16 + ((long)iVar113 + 0x10ad26) * 4) = *(int *)(pbVar52 + 0x4d4);
  iVar115 = *(int *)(pbVar52 + 0x560);
  iVar113 = -10;
  do {
    iVar41 = iVar115 + 0xc;
    if (-1 < iVar115) {
      iVar41 = iVar115;
    }
    iVar110 = *(int *)(pbVar16 + ((long)iVar41 + 0x10ad26) * 4) + iVar110;
    iVar115 = iVar115 + -1;
    bVar13 = iVar113 != -1;
    iVar113 = iVar113 + 1;
  } while (bVar13);
  if (iVar110 < 5) {
    iVar110 = *(int *)pbVar117 + -1;
    if (0 < *(int *)pbVar117) goto LAB_10967ac44;
  }
  else {
    iVar110 = 1;
LAB_10967ac44:
    *(int *)pbVar117 = iVar110;
  }
  FUN_10967fa38(0);
  *(uint *)(*(long *)pbVar46 + 0xf88) =
       (uint)(*(int *)(pbVar52 + 0x4d0) == 1 || *(int *)(pbVar52 + 0x4cc) == 1);
  lVar19 = *(long *)(pbVar16 + 0x67c8);
  lVar30 = *(long *)pbVar52;
  puVar23 = (undefined4 *)(lVar30 + 0x22414);
  lVar29 = 5;
  puVar27 = (undefined4 *)(lVar19 + 8);
  do {
    *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar23 + 0xd);
    *puVar27 = *puVar23;
    puVar23 = puVar23 + 0x8c6;
    lVar29 = lVar29 + -1;
    puVar27 = puVar27 + 3;
  } while (lVar29 != 0);
  *(uint *)(lVar19 + 0x3c) = (uint)(*(int *)pbVar117 != 0);
  *(uint *)(lVar19 + 0x40) = (uint)(*(int *)(pbVar15 + 0xc) == 0);
  *(int *)(lVar19 + 0x44) = *(int *)pbVar50;
  *(int *)(lVar19 + 0x48) = *(int *)(pbVar50 + 0x18);
  *(int *)(lVar19 + 0x4c) = *(int *)(pbVar15 + 0xbe0);
  _memcpy(lVar19 + 0x500,lVar30 + 0x130,0x4b0);
  _memcpy(lVar19 + 0x50,*(long *)(pbVar52 + 0x20) + 0x130,0x4b0);
  _memcpy(lVar19 + 0x9b0,pbVar16 + 0x42bd88,0x4b0);
  *(undefined8 *)(lVar19 + 0xe70) = *(undefined8 *)pbStack_1300;
  *(int *)(lVar19 + 0xe78) = *(int *)(pbVar22 + 0xc);
  lVar29 = *(long *)pbVar52;
  *(undefined8 *)(lVar19 + 0xe7c) = *(undefined8 *)(lVar29 + 0xc);
  *(undefined8 *)(lVar19 + 0xe94) = *(undefined8 *)(lVar29 + 0x246e4);
  *(undefined4 *)(lVar19 + 0x2070) = **(undefined4 **)(pbVar52 + 0x18);
  *(undefined4 *)(lVar19 + 0xe6c) = *(undefined4 *)(*(long *)(pbVar52 + 0x20) + 0x246d8);
  *(undefined4 *)(lVar19 + 0xe60) = *(undefined4 *)(lVar29 + 0x2d3b4);
  uVar91 = *(undefined8 *)(pbVar16 + 0x42afe0);
  *(undefined8 *)(lVar19 + 0xe8c) = *(undefined8 *)(pbVar16 + 0x42afe8);
  *(undefined8 *)(lVar19 + 0xe84) = uVar91;
  lVar29 = *(long *)pbVar52;
  *(undefined4 *)(lVar19 + 0xe9c) = *(undefined4 *)(lVar29 + 0x2d38c);
  fVar90 = *(float *)(lVar29 + 0x246d8);
  *(float *)(lVar19 + 0xe64) = fVar90;
  *(float *)(lVar19 + 0xe68) = fVar90 * *(float *)(lVar29 + 0x246e0);
  *(undefined4 *)(lVar19 + 0xf7c) =
       *(undefined4 *)(pbVar16 + ((long)*(int *)(pbVar117 + 0x17c) + 0x10ad75) * 4);
  _memcpy(lVar19 + 0xf8c,lVar29 + 0x2479c,0x10e0);
  _memcpy(lVar19 + 0xb860,*(long *)pbVar52 + 0x220f4,400);
  lVar29 = *(long *)pbVar52;
  uVar32 = *(undefined4 *)(lVar29 + 0x70);
  uVar92 = *(undefined8 *)(lVar29 + 0x58);
  uVar91 = *(undefined8 *)(lVar29 + 0x50);
  uVar100 = *(undefined8 *)(lVar29 + 0x60);
  *(undefined8 *)(lVar19 + 0xba08) = *(undefined8 *)(lVar29 + 0x68);
  *(undefined8 *)(lVar19 + 0xba00) = uVar100;
  *(undefined8 *)(lVar19 + 0xb9f8) = uVar92;
  *(undefined8 *)(lVar19 + 0xb9f0) = uVar91;
  *(undefined4 *)(lVar19 + 0xba10) = uVar32;
  lVar29 = *(long *)pbVar52;
  uVar32 = *(undefined4 *)(lVar29 + 0x4c);
  uVar92 = *(undefined8 *)(lVar29 + 0x44);
  uVar91 = *(undefined8 *)(lVar29 + 0x3c);
  uVar100 = *(undefined8 *)(lVar29 + 0x2c);
  *(undefined8 *)(lVar19 + 0xba1c) = *(undefined8 *)(lVar29 + 0x34);
  *(undefined8 *)(lVar19 + 0xba14) = uVar100;
  *(undefined8 *)(lVar19 + 0xba2c) = uVar92;
  *(undefined8 *)(lVar19 + 0xba24) = uVar91;
  *(undefined4 *)(lVar19 + 0xba34) = uVar32;
  lVar29 = *(long *)pbVar52;
  *(undefined4 *)(lVar19 + 0xea0) = *(undefined4 *)(lVar29 + 0x246d4);
  _memcpy(lVar19 + 0xc070,lVar29 + 0x22414,0xaf78);
  lVar30 = *(long *)pbVar46;
  lVar29 = *(long *)pbVar52;
  *(long *)(lVar30 + 0xba38) = lVar29;
  *(int *)(lVar30 + 0x206c) = *(int *)pbVar16;
  *(byte **)(lVar30 + 0x2078) = pbVar16 + 0x42c788;
  *(byte **)(lVar30 + 0x16fe8) = pbVar16 + 0x681c;
  *(undefined8 *)(lVar30 + 0x16ff0) = 0;
  *(byte **)(lVar30 + 0x17000) = pbVar16 + 0x124fd8;
  *(undefined8 *)(lVar30 + 0x17008) = 0;
  *(byte **)(lVar30 + 0x16ff8) = pbStack_1310;
  lVar19 = *(long *)(pbVar16 + 0x67c8);
  *(undefined4 *)(lVar19 + 0xba40) = 0x441c8000;
  puVar23 = (undefined4 *)(lVar29 + 0x2244c);
  lVar30 = 5;
  puVar27 = (undefined4 *)(lVar19 + 0xba98);
  puVar31 = *(undefined4 **)(pbVar16 + 0x67d0);
  do {
    puVar27[-0x15] = puVar23[-1];
    puVar27[-0x10] = *puVar23;
    puVar27[-10] = puVar31[4];
    puVar27[-5] = puVar31[5];
    *puVar27 = puVar31[1];
    puVar23 = puVar23 + 0x8c6;
    lVar30 = lVar30 + -1;
    puVar27 = puVar27 + 1;
    puVar31 = puVar31 + 5;
  } while (lVar30 != 0);
  pbVar117 = (byte *)(lVar19 + 0xbb74);
  lVar29 = lVar29 + 0x130;
  _memcpy(pbVar117,lVar29,0x4b0);
  puVar23 = *(undefined4 **)(pbVar16 + 0x67d0);
  uVar32 = NEON_ucvtf(*puVar23);
  *(undefined4 *)(lVar19 + 0xba6c) = uVar32;
  *(float *)(lVar19 + 0xbaac) = (float)(int)puVar23[0x28];
  uVar91 = NEON_scvtf(*(undefined8 *)(lVar19 + 0x206c),4);
  *(undefined8 *)(lVar19 + 0xbab0) = uVar91;
  lVar30 = *(long *)pbVar52;
  *(undefined4 *)(lVar19 + 0xbab8) = *(undefined4 *)(lVar30 + 0x2d38c);
  uVar91 = NEON_scvtf(*(undefined8 *)(lVar30 + 0xc),4);
  *(undefined8 *)(lVar19 + 0xbabc) = uVar91;
  *(undefined8 *)(lVar19 + 0xbac4) = *(undefined8 *)(lVar30 + 0x246d8);
  uVar91 = *(undefined8 *)(lVar30 + 0x24644);
  *(undefined4 *)(lVar19 + 0xbad4) = *(undefined4 *)(lVar30 + 0x2464c);
  *(undefined8 *)(lVar19 + 0xbacc) = uVar91;
  uVar91 = *(undefined8 *)(*(long *)pbVar52 + 0x24650);
  *(undefined4 *)(lVar19 + 0xbae0) = *(undefined4 *)(*(long *)pbVar52 + 0x24658);
  *(undefined8 *)(lVar19 + 0xbad8) = uVar91;
  uVar91 = *(undefined8 *)(*(long *)pbVar52 + 0x2465c);
  *(undefined4 *)(lVar19 + 0xbaec) = *(undefined4 *)(*(long *)pbVar52 + 0x24664);
  *(undefined8 *)(lVar19 + 0xbae4) = uVar91;
  uVar91 = *(undefined8 *)(*(long *)pbVar52 + 0x24668);
  *(undefined4 *)(lVar19 + 0xbaf8) = *(undefined4 *)(*(long *)pbVar52 + 0x24670);
  *(undefined8 *)(lVar19 + 0xbaf0) = uVar91;
  lVar35 = 8;
  lVar30 = 0x24674;
  puVar25 = (undefined8 *)(lVar19 + 0xbafc);
  do {
    uVar91 = *(undefined8 *)(*(long *)pbVar52 + lVar30);
    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)((undefined8 *)(*(long *)pbVar52 + lVar30) + 1);
    *puVar25 = uVar91;
    lVar30 = lVar30 + 0xc;
    lVar35 = lVar35 + -1;
    puVar25 = (undefined8 *)((long)puVar25 + 0xc);
  } while (lVar35 != 0);
  lVar30 = *(long *)(pbVar16 + 0x67d0);
  *(undefined4 *)(lVar19 + 0xbb5c) = *(undefined4 *)(lVar30 + 0x78);
  *(undefined4 *)(lVar19 + 0xbb60) = *(undefined4 *)(lVar30 + 0x74);
  *(undefined4 *)(lVar19 + 0xbb64) = *(undefined4 *)(lVar30 + 0x7c);
  *(undefined4 *)(lVar19 + 0xbb70) = *(undefined4 *)(lVar19 + 0xf88);
  *(undefined4 *)(lVar19 + 0xbb68) = uRam000000011382a480;
  if ((bRam0000000113734810 & 1) == 0) {
    pbVar117 = &bRam0000000113734810;
    ___cxa_guard_acquire();
    if ((int)pbVar117 != 0) {
      fRam00000001137347f0 = *(float *)(*(long *)(pbVar16 + 0x67d0) + 0xa4) * 1000.0;
      pbVar117 = &bRam0000000113734810;
      ___cxa_guard_release();
    }
  }
  fVar90 = *(float *)(*(long *)(pbVar16 + 0x67d0) + 0xa4) * 1000.0;
  *(float *)(lVar19 + 0xbb6c) = fVar90 - fRam00000001137347f0;
  lVar30 = *(long *)(pbVar46 + 8);
  uVar62 = (undefined1)((ulong)lVar30 >> 8);
  uVar68 = (undefined1)((ulong)lVar30 >> 0x10);
  uVar75 = (undefined1)((ulong)lVar30 >> 0x18);
  uVar76 = (undefined1)((ulong)lVar30 >> 0x20);
  uVar79 = (undefined1)((ulong)lVar30 >> 0x28);
  uVar82 = (undefined1)((ulong)lVar30 >> 0x30);
  uVar85 = (undefined1)((ulong)lVar30 >> 0x38);
  lVar30 = *(long *)pbVar46;
  auVar97[9] = uVar62;
  auVar97._0_9_ = *(unkbyte9 *)pbVar46;
  auVar97[10] = uVar68;
  auVar97[0xb] = uVar75;
  auVar97[0xc] = uVar76;
  auVar97[0xd] = uVar79;
  auVar97[0xe] = uVar82;
  auVar97[0xf] = uVar85;
  auVar6[9] = uVar62;
  auVar6._0_9_ = *(unkbyte9 *)pbVar46;
  auVar6[10] = uVar68;
  auVar6[0xb] = uVar75;
  auVar6[0xc] = uVar76;
  auVar6[0xd] = uVar79;
  auVar6[0xe] = uVar82;
  auVar6[0xf] = uVar85;
  auVar97 = NEON_ext(auVar97,auVar6,8,1);
  *(long *)(pbVar46 + 8) = auVar97._8_8_;
  *(long *)pbVar46 = auVar97._0_8_;
  fRam00000001137347f0 = fVar90;
  if ((*(byte *)((long)piVar18 + 0x99) >> 1 & 1) != 0) {
    lVar35 = 0;
    do {
      uVar91 = *(undefined8 *)(lVar30 + lVar35);
      fVar90 = (float)uVar91;
      fVar99 = (float)((ulong)uVar91 >> 0x20);
      fVar99 = fVar99 + fVar99;
      *(ulong *)(lVar30 + lVar35) =
           CONCAT17((char)((uint)fVar99 >> 0x18),
                    CONCAT16((char)((uint)fVar99 >> 0x10),
                             CONCAT15((char)((uint)fVar99 >> 8),
                                      CONCAT14(SUB41(fVar99,0),fVar90 + fVar90))));
      lVar35 = lVar35 + 0xc;
    } while (lVar35 != 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return pbVar117;
  }
  ___stack_chk_fail();
  uStack_13d0 = 0x206c;
  pcStack_13a8 = FUN_10967b280;
  pbStack_13f0 = pbVar15;
  pbStack_13e8 = pbVar52;
  pbStack_13e0 = pbVar50;
  pbStack_13d8 = pbVar22;
  lStack_13c8 = lVar19;
  pbStack_13c0 = pbVar16;
  puStack_13b8 = (undefined4 *)(lVar19 + 0xba40);
  pppuStack_13b0 = &ppuStack_290;
  func_0x000107c31940(&ppppuStack_1408,&UNK_10f57b978);
  func_0x000107c31940(&puStack_1420,lVar29);
  uVar28 = (uint)(char)bStack_13f1;
  pppppuVar17 = (undefined8 *****)ppppuStack_1408;
  uVar36 = uStack_1400;
  if (-1 < (int)uVar28) {
    pppppuVar17 = &ppppuStack_1408;
    uVar36 = (ulong)bStack_13f1;
  }
  ppuVar4 = (undefined1 **)puStack_1420;
  uVar95 = uStack_1418;
  if (-1 < cStack_1409) {
    ppuVar4 = &puStack_1420;
    uVar95 = (long)cStack_1409;
  }
  uVar5 = uVar95;
  if (uVar36 <= uVar95) {
    uVar5 = uVar36;
  }
  _memcmp(pppppuVar17,ppuVar4,uVar5);
  if ((long)cStack_1409 < 0) {
    __ZdlPv(puStack_1420);
    if (-1 < (char)bStack_13f1) goto LAB_10967b30c;
  }
  else if ((uVar28 >> 7 & 1) == 0) goto LAB_10967b30c;
  __ZdlPv(ppppuStack_1408);
LAB_10967b30c:
  pbVar15 = *(byte **)(pbVar117 + 0xf5980);
  if ((int)pppppuVar17 != 0 || uVar95 != uVar36) {
    pbVar15 = (byte *)0x0;
  }
  return pbVar15;
}



/* Entry: 109677cf0; end: 109677ecf;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109678400 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte * FUN_109677cf0(byte *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 *****pppppuVar16;
  int *piVar17;
  undefined8 *puVar18;
  long lVar19;
  uint *puVar20;
  byte *pbVar21;
  undefined4 *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  uint uVar26;
  long lVar27;
  undefined4 *puVar28;
  uint uVar29;
  byte *pbVar30;
  ulong uVar31;
  byte *pbVar32;
  uint uVar33;
  byte *pbVar34;
  int iVar35;
  int iVar36;
  int *piVar37;
  int iVar38;
  byte *pbVar39;
  byte *pbVar40;
  long lVar41;
  int *piVar42;
  long lVar43;
  byte *pbVar44;
  byte *pbVar45;
  int iVar46;
  int iVar47;
  undefined1 in_b0;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 in_register_00005001;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 in_register_00005002;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  char in_register_00005003;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  char cVar68;
  undefined1 in_register_00005004;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 in_register_00005005;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 in_register_00005006;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  char in_register_00005007;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  char cVar81;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float fVar82;
  float fVar83;
  double extraout_d1;
  double extraout_d1_00;
  double dVar84;
  double dVar85;
  undefined1 auVar88 [16];
  ulong uVar86;
  undefined8 uVar87;
  undefined1 auVar89 [16];
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  float fVar93;
  float fVar94;
  undefined8 uVar95;
  double dVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  int iVar101;
  float fVar102;
  double dVar103;
  int iVar104;
  float fVar105;
  double dVar106;
  int iVar107;
  double dVar108;
  byte *pbVar109;
  double dVar110;
  double dVar111;
  double dVar112;
  double dVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 *puStack_1220;
  ulong uStack_1218;
  char cStack_1209;
  undefined8 ****ppppuStack_1208;
  ulong uStack_1200;
  byte bStack_11f1;
  byte *pbStack_11f0;
  byte *pbStack_11e8;
  byte *pbStack_11e0;
  byte *pbStack_11d8;
  undefined8 uStack_11d0;
  long lStack_11c8;
  byte *pbStack_11c0;
  undefined4 *puStack_11b8;
  undefined1 **ppuStack_11b0;
  code *pcStack_11a8;
  undefined4 uStack_11a0;
  double dStack_1198;
  double dStack_1190;
  double dStack_1188;
  double dStack_1180;
  byte *pbStack_1178;
  byte *pbStack_1170;
  byte *pbStack_1168;
  double dStack_1160;
  int *piStack_1158;
  byte *pbStack_1150;
  byte *pbStack_1148;
  byte *pbStack_1140;
  undefined8 uStack_1138;
  double dStack_1130;
  undefined8 uStack_1128;
  byte *pbStack_1120;
  byte *pbStack_1118;
  byte *pbStack_1110;
  byte *pbStack_1108;
  byte *pbStack_1100;
  byte *pbStack_10f8;
  byte *pbStack_10f0;
  byte *pbStack_10e8;
  byte *pbStack_10e0;
  int aiStack_10d8 [2];
  long alStack_10d0 [2];
  undefined8 uStack_10bc;
  undefined8 uStack_10a8;
  undefined8 uStack_1094;
  undefined8 uStack_1080;
  float fStack_106c;
  float fStack_1064;
  float fStack_1060;
  float fStack_105c;
  int iStack_1054;
  int iStack_1050;
  int iStack_104c;
  undefined8 uStack_1048;
  uint uStack_1040;
  float fStack_d90;
  float fStack_d8c;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  float fStack_710;
  float fStack_700;
  float fStack_6fc;
  float fStack_6f4;
  float fStack_6f0;
  undefined8 uStack_6e8;
  uint uStack_6e0;
  float fStack_6dc;
  float fStack_6d8;
  undefined4 uStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  undefined4 uStack_6c8;
  float fStack_6c4;
  float fStack_6c0;
  undefined4 uStack_6bc;
  undefined1 auStack_6b8 [8];
  uint uStack_6b0;
  undefined1 auStack_6ac [12];
  undefined1 auStack_6a0 [8];
  int iStack_698;
  undefined8 uStack_690;
  undefined4 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined4 uStack_660;
  float fStack_65c;
  float fStack_658;
  undefined4 uStack_654;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long lStack_1d0;
  float afStack_1c8 [4];
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  float fStack_168;
  float fStack_164;
  float afStack_160 [5];
  float fStack_14c;
  float fStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  long lStack_138;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = 0;
  uStack_78 = *(undefined8 *)(param_1 + 0x6824);
  lVar19 = *(long *)(param_1 + 0x42afb0);
  lVar27 = 0x138;
  puVar20 = (uint *)(lVar19 + 0x220f4);
  do {
    *(uint *)((long)param_2 + lVar27) = *(uint *)((long)param_2 + lVar27) & *puVar20;
    lVar27 = lVar27 + 0xc;
    puVar20 = puVar20 + 1;
  } while (lVar27 != 0x5e8);
  if ((*(byte *)(*(long *)(param_1 + 0x67d0) + 0x99) >> 2 & 1) != 0) {
    uVar31 = NEON_scvtf(uStack_78,4);
    uVar86 = *(ulong *)(lVar19 + 0x22448);
    uVar86 = uVar86 ^ (uVar86 ^ 0x42c8000042c80000) &
                      CONCAT44(-(uint)((float)(uVar86 >> 0x20) < 100.0),
                               -(uint)((float)uVar86 < 100.0));
    fVar105 = (float)uVar31 + -100.0;
    fVar82 = (float)(uVar31 >> 0x20);
    fVar94 = fVar82 + -100.0;
    uVar86 = uVar86 ^ (uVar86 ^ CONCAT44(fVar94,fVar105)) &
                      CONCAT44(-(uint)(fVar94 < (float)(uVar86 >> 0x20)),
                               -(uint)(fVar105 < (float)uVar86));
    fVar105 = (float)uVar86;
    fVar94 = (float)(uVar86 >> 0x20);
    uVar87 = NEON_fmaxnm(CONCAT44(fVar94 + -100.0,fVar105 + -80.0),0,4);
    uStack_6c = CONCAT44((int)(float)((ulong)uVar87 >> 0x20),(int)(float)uVar87);
    fVar105 = fVar105 + 150.0;
    fVar94 = fVar94 + 100.0;
    uVar31 = uVar31 ^ (uVar31 ^ CONCAT44(fVar94,fVar105)) &
                      CONCAT44(-(uint)(fVar94 < fVar82),-(uint)(fVar105 < (float)uVar31));
    uVar87 = NEON_scvtf(uStack_6c,4);
    iVar101 = (int)((float)(uVar31 >> 0x20) - (float)((ulong)uVar87 >> 0x20));
    in_register_00005004 = (undefined1)iVar101;
    in_register_00005005 = (undefined1)((uint)iVar101 >> 8);
    in_register_00005006 = (undefined1)((uint)iVar101 >> 0x10);
    in_register_00005007 = (char)((uint)iVar101 >> 0x18);
    uStack_64 = CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    (int)((float)uVar31 - (float)uVar87)))));
  }
  pbVar21 = param_1 + 0x124fd8;
  pbVar23 = param_1;
  piVar17 = param_2;
  FUN_10967b374();
  param_2[3] = (int)pbVar23;
  piVar42 = *(int **)(param_1 + 0x42afb0);
  if (*param_2 != *piVar42) {
    FUN_109675c30(param_2 + 0xb4e4,&uStack_6c);
    pbVar23 = (byte *)&uStack_6c;
    pbVar21 = (byte *)(piVar42 + 0xb4e4);
    piVar17 = piVar42 + 0xb4e4;
    FUN_10967553c();
  }
  param_2[0xb4e6] = 0;
  param_2[0xb4e7] = 0;
  param_2[0xb4e4] = 0x3f800000;
  param_2[0xb4e5] = 0;
  param_2[0xb4ea] = 0;
  param_2[0xb4eb] = 0;
  param_2[0xb4e8] = 0x3f800000;
  param_2[0xb4e9] = 0;
  param_2[0xb4ec] = 0x3f800000;
  param_2[0xb4f2] = 0;
  param_2[0xb4f3] = 0;
  param_2[0xb4f0] = 0x3f800000;
  param_2[0xb4f1] = 0;
  param_2[0xb4f6] = 0;
  param_2[0xb4f7] = 0;
  param_2[0xb4f4] = 0x3f800000;
  param_2[0xb4f5] = 0;
  param_2[0xb4f8] = 0x3f800000;
  param_1[0x42b478] = 0;
  param_1[0x42b479] = 0xcf;
  param_1[0x42b47a] = 0x8a;
  param_1[0x42b47b] = 0x47;
  *(int **)(param_1 + 0x42afc8) = param_2;
  param_2[1] = 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pbVar23;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_109677ed0;
  puStack_90 = &stack0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar17[0x1a] = 0;
  _memcpy(aiStack_10d8,piVar17,0x9a8);
  if ((bRam0000000113734828 & 1) == 0) {
    iVar101 = 0x13734828;
    ___cxa_guard_acquire();
    if (iVar101 != 0) {
      iRam0000000113734800 = piVar17[0x1e];
      ___cxa_guard_release(&bRam0000000113734828);
    }
  }
  if ((bRam0000000113734830 & 1) == 0) {
    iVar101 = 0x13734830;
    ___cxa_guard_acquire();
    if (iVar101 != 0) {
      iRam0000000113734804 = piVar17[0x1d];
      ___cxa_guard_release(&bRam0000000113734830);
    }
  }
  pbVar39 = pbVar23 + 0x42bb94;
  if ((bRam0000000113734838 & 1) == 0) {
    iVar101 = 0x13734838;
    ___cxa_guard_acquire();
    if (iVar101 != 0) {
      iRam0000000113734808 = piVar17[0x1f];
      ___cxa_guard_release(&bRam0000000113734838);
    }
  }
  iVar101 = piVar17[0x1d];
  iVar104 = piVar17[0x1e];
  iStack_1050 = iVar104;
  iStack_1054 = iVar101;
  iVar107 = piVar17[0x1f];
  iStack_104c = iVar107;
  if ((*piVar17 == 0) || (*(int *)(pbVar23 + 0x42c784) != 0)) {
    pbVar23[0x42c784] = 0;
    pbVar23[0x42c785] = 0;
    pbVar23[0x42c786] = 0;
    pbVar23[0x42c787] = 0;
    *piVar17 = 0;
    uVar26 = piVar17[0x26];
    uRam00000001137347fc = uVar26 >> 0xd & 1;
    iRam0000000113734800 = iVar104;
    iRam0000000113734804 = iVar101;
    iRam0000000113734808 = iVar107;
  }
  else {
    uVar26 = piVar17[0x26];
  }
  iVar2 = iRam0000000113734804;
  iVar36 = iRam0000000113734800;
  if ((uVar26 >> 10 & 1) == 0) {
    if (uRam00000001137347fc == 1) {
      uVar48 = (undefined1)iRam0000000113734808;
      uVar52 = (undefined1)((uint)iRam0000000113734808 >> 8);
      uVar57 = (undefined1)((uint)iRam0000000113734808 >> 0x10);
      uVar62 = (undefined1)((uint)iRam0000000113734808 >> 0x18);
      ___sincosf_stret();
      dVar112 = (double)extraout_s1;
      uVar49 = (undefined1)iVar36;
      uVar53 = (undefined1)((uint)iVar36 >> 8);
      uVar58 = (undefined1)((uint)iVar36 >> 0x10);
      uVar63 = (undefined1)((uint)iVar36 >> 0x18);
      ___sincosf_stret();
      pbStack_1110 = (byte *)(double)extraout_s1_00;
      uVar50 = (undefined1)iVar2;
      uVar54 = (undefined1)((uint)iVar2 >> 8);
      uVar59 = (undefined1)((uint)iVar2 >> 0x10);
      uVar64 = (undefined1)((uint)iVar2 >> 0x18);
      ___sincosf_stret();
      pbStack_10e8 = (byte *)(double)(float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48))
                                                    );
      dVar110 = (double)(float)CONCAT13(uVar63,CONCAT12(uVar58,CONCAT11(uVar53,uVar49)));
      pbStack_10e0 = (byte *)(double)(float)CONCAT13(uVar64,CONCAT12(uVar59,CONCAT11(uVar54,uVar50))
                                                    );
      uVar48 = (undefined1)iVar107;
      uVar52 = (undefined1)((uint)iVar107 >> 8);
      uVar57 = (undefined1)((uint)iVar107 >> 0x10);
      uVar62 = (undefined1)((uint)iVar107 >> 0x18);
      pbStack_1118 = (byte *)(double)extraout_s1_01;
      ___sincosf_stret();
      pbStack_10f0 = (byte *)(double)extraout_s1_02;
      uVar49 = (undefined1)iVar104;
      uVar53 = (undefined1)((uint)iVar104 >> 8);
      uVar58 = (undefined1)((uint)iVar104 >> 0x10);
      uVar63 = (undefined1)((uint)iVar104 >> 0x18);
      ___sincosf_stret();
      piVar42 = (int *)(double)extraout_s1_03;
      uVar50 = (undefined1)iVar101;
      uVar54 = (undefined1)((uint)iVar101 >> 8);
      uVar59 = (undefined1)((uint)iVar101 >> 0x10);
      uVar64 = (undefined1)((uint)iVar101 >> 0x18);
      ___sincosf_stret();
      dVar108 = (double)extraout_s1_04;
      pbStack_1108 = (byte *)(double)(float)CONCAT13(uVar62,CONCAT12(uVar57,CONCAT11(uVar52,uVar48))
                                                    );
      dVar96 = (double)(float)CONCAT13(uVar63,CONCAT12(uVar58,CONCAT11(uVar53,uVar49)));
      pbVar109 = (byte *)(double)(float)CONCAT13(uVar64,CONCAT12(uVar59,CONCAT11(uVar54,uVar50)));
      pbStack_1120 = (byte *)((double)piVar42 * (double)pbStack_1108 * (double)pbVar109);
      dStack_1130 = -(dVar112 * (double)pbStack_1110) * (double)pbStack_10e0 +
                    dVar110 * (double)pbStack_10e8;
      pbStack_1150 = (byte *)((double)pbStack_1110 * (double)pbStack_10e8 * (double)pbStack_10e0 +
                             dVar110 * dVar112);
      dVar106 = -((double)pbStack_10f0 * (double)piVar42) * (double)pbVar109 +
                dVar96 * (double)pbStack_1108;
      pbStack_1140 = (byte *)(dVar96 * (double)pbStack_10f0 * (double)pbVar109 +
                             (double)pbStack_1108 * (double)piVar42);
      dVar103 = -(dVar108 * (double)pbStack_1108) * (double)pbStack_1150 +
                dStack_1130 * dVar108 * (double)pbStack_10f0 +
                (double)pbVar109 * (double)pbStack_1110 * (double)extraout_s1_01;
      uVar48 = SUB81(dVar103,0);
      uVar49 = (undefined1)((ulong)dVar103 >> 8);
      uVar50 = (undefined1)((ulong)dVar103 >> 0x10);
      uVar52 = (undefined1)((ulong)dVar103 >> 0x18);
      uVar53 = (undefined1)((ulong)dVar103 >> 0x20);
      uVar54 = (undefined1)((ulong)dVar103 >> 0x28);
      uVar57 = (undefined1)((ulong)dVar103 >> 0x30);
      uVar58 = (undefined1)((ulong)dVar103 >> 0x38);
      pbStack_1170 = pbVar109;
      dStack_1160 = dVar96;
      piStack_1158 = piVar42;
      pbStack_1100 = (byte *)dVar112;
      _asin();
      pbVar45 = pbStack_10f0;
      pbVar40 = pbStack_1118;
      dVar110 = (double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                )) + -6.283185307179586;
      bVar13 = false;
      bVar15 = false;
      bVar14 = NAN((double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                  )));
      if (!bVar14) {
        bVar13 = (double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                 )) < 3.141592653589793;
        bVar15 = (double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                 )) == 3.141592653589793;
      }
      uVar59 = SUB81(dVar110,0);
      uVar62 = (char)((ulong)dVar110 >> 8);
      uVar63 = (char)((ulong)dVar110 >> 0x10);
      uVar64 = (char)((ulong)dVar110 >> 0x18);
      uVar69 = (char)((ulong)dVar110 >> 0x20);
      uVar72 = (char)((ulong)dVar110 >> 0x28);
      uVar75 = (char)((ulong)dVar110 >> 0x30);
      uVar78 = (char)((ulong)dVar110 >> 0x38);
      if (bVar15 || bVar13 != bVar14) {
        uVar59 = uVar48;
        uVar62 = uVar49;
        uVar63 = uVar50;
        uVar64 = uVar52;
        uVar69 = uVar53;
        uVar72 = uVar54;
        uVar75 = uVar57;
        uVar78 = uVar58;
      }
      dVar110 = 3.141592653589793 -
                (double)CONCAT17(uVar78,CONCAT16(uVar75,CONCAT15(uVar72,CONCAT14(uVar69,CONCAT13(
                                                  uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar59)))))
                                                ));
      if (ABS(3.141592653589793 -
              (double)CONCAT17(uVar78,CONCAT16(uVar75,CONCAT15(uVar72,CONCAT14(uVar69,CONCAT13(
                                                  uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar59)))))
                                              ))) <=
          ABS((double)CONCAT17(uVar78,CONCAT16(uVar75,CONCAT15(uVar72,CONCAT14(uVar69,CONCAT13(
                                                  uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar59)))))
                                              )))) {
        uVar59 = SUB81(dVar110,0);
        uVar62 = (undefined1)((ulong)dVar110 >> 8);
        uVar63 = (undefined1)((ulong)dVar110 >> 0x10);
        uVar64 = (undefined1)((ulong)dVar110 >> 0x18);
        uVar69 = (undefined1)((ulong)dVar110 >> 0x20);
        uVar72 = (undefined1)((ulong)dVar110 >> 0x28);
        uVar75 = (undefined1)((ulong)dVar110 >> 0x30);
        uVar78 = (undefined1)((ulong)dVar110 >> 0x38);
      }
      pbStack_10f8 = (byte *)CONCAT17(uVar78,CONCAT16(uVar75,CONCAT15(uVar72,CONCAT14(uVar69,
                                                  CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,
                                                  uVar59)))))));
      dVar110 = 1.0 - dVar103 * dVar103;
      dVar103 = 1e-07;
      if (dVar110 != 0.0) {
        dVar103 = SQRT(dVar110);
      }
      dVar96 = (double)pbStack_1120 + dVar96 * (double)pbStack_10f0;
      dVar110 = (dVar106 * dStack_1130 + dVar96 * (double)pbStack_1150 +
                dVar108 * (double)piVar42 * (double)pbStack_1110 * (double)pbStack_1118) / dVar103;
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar57 = 0xf0;
      uVar58 = 0x3f;
      if (dVar110 <= 1.0) {
        uVar48 = SUB81(dVar110,0);
        uVar49 = (char)((ulong)dVar110 >> 8);
        uVar50 = (char)((ulong)dVar110 >> 0x10);
        uVar52 = (char)((ulong)dVar110 >> 0x18);
        uVar53 = (char)((ulong)dVar110 >> 0x20);
        uVar54 = (char)((ulong)dVar110 >> 0x28);
        uVar57 = (char)((ulong)dVar110 >> 0x30);
        uVar58 = (char)((ulong)dVar110 >> 0x38);
      }
      bVar14 = false;
      if (!NAN((double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                               )))) {
        bVar14 = (double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                 )) < -1.0;
      }
      uVar59 = 0;
      uVar62 = 0;
      uVar63 = 0;
      uVar64 = 0;
      uVar69 = 0;
      uVar72 = 0;
      uVar75 = 0xf0;
      uVar78 = 0xbf;
      if (!bVar14) {
        uVar59 = uVar48;
        uVar62 = uVar49;
        uVar63 = uVar50;
        uVar64 = uVar52;
        uVar69 = uVar53;
        uVar72 = uVar54;
        uVar75 = uVar57;
        uVar78 = uVar58;
      }
      dStack_1130 = dVar96;
      pbStack_1120 = (byte *)dVar106;
      _acos();
      pbStack_1110 = (byte *)-(double)CONCAT17(uVar78,CONCAT16(uVar75,CONCAT15(uVar72,CONCAT14(
                                                  uVar69,CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(
                                                  uVar62,uVar59)))))));
      dVar103 = ((double)pbVar45 * (double)pbStack_1100 * (double)pbVar40 * dVar108 +
                 (double)pbVar109 * (double)pbStack_10e0 +
                (double)pbStack_1108 * dVar108 * (double)pbVar40 * (double)pbStack_10e8) / dVar103;
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar57 = 0xf0;
      uVar58 = 0x3f;
      if (dVar103 <= 1.0) {
        uVar48 = SUB81(dVar103,0);
        uVar49 = (char)((ulong)dVar103 >> 8);
        uVar50 = (char)((ulong)dVar103 >> 0x10);
        uVar52 = (char)((ulong)dVar103 >> 0x18);
        uVar53 = (char)((ulong)dVar103 >> 0x20);
        uVar54 = (char)((ulong)dVar103 >> 0x28);
        uVar57 = (char)((ulong)dVar103 >> 0x30);
        uVar58 = (char)((ulong)dVar103 >> 0x38);
      }
      bVar14 = false;
      if (!NAN((double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                               )))) {
        bVar14 = (double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                 )) < -1.0;
      }
      uVar51 = 0;
      uVar55 = 0;
      uVar60 = 0;
      uVar65 = 0;
      uVar70 = 0;
      uVar73 = 0;
      uVar76 = 0xf0;
      uVar79 = 0xbf;
      if (!bVar14) {
        uVar51 = uVar48;
        uVar55 = uVar49;
        uVar60 = uVar50;
        uVar65 = uVar52;
        uVar70 = uVar53;
        uVar73 = uVar54;
        uVar76 = uVar57;
        uVar79 = uVar58;
      }
      _acos();
      dStack_1188 = -(double)CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar73,CONCAT14(uVar70,
                                                  CONCAT13(uVar65,CONCAT12(uVar60,CONCAT11(uVar55,
                                                  uVar51)))))));
      pbStack_1150 = (byte *)CONCAT17(uVar78,CONCAT16(uVar75,CONCAT15(uVar72,CONCAT14(uVar69,
                                                  CONCAT13(uVar64,CONCAT12(uVar63,CONCAT11(uVar62,
                                                  uVar59)))))));
      ___sincos_stret();
      pbVar40 = (byte *)CONCAT17(uVar78,CONCAT16(uVar75,CONCAT15(uVar72,CONCAT14(uVar69,CONCAT13(
                                                  uVar64,CONCAT12(uVar63,CONCAT11(uVar62,uVar59)))))
                                                ));
      dStack_1198 = (double)CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar73,CONCAT14(uVar70,CONCAT13
                                                  (uVar65,CONCAT12(uVar60,CONCAT11(uVar55,uVar51))))
                                                  )));
      ___sincos_stret();
      dVar96 = (double)CONCAT17(uVar79,CONCAT16(uVar76,CONCAT15(uVar73,CONCAT14(uVar70,CONCAT13(
                                                  uVar65,CONCAT12(uVar60,CONCAT11(uVar55,uVar51)))))
                                               ));
      uVar48 = SUB81(pbStack_10f8,0);
      uVar49 = (undefined1)((ulong)pbStack_10f8 >> 8);
      uVar50 = (undefined1)((ulong)pbStack_10f8 >> 0x10);
      uVar52 = (undefined1)((ulong)pbStack_10f8 >> 0x18);
      uVar53 = (undefined1)((ulong)pbStack_10f8 >> 0x20);
      uVar54 = (undefined1)((ulong)pbStack_10f8 >> 0x28);
      uVar57 = (undefined1)((ulong)pbStack_10f8 >> 0x30);
      uVar58 = (undefined1)((ulong)pbStack_10f8 >> 0x38);
      dStack_1180 = extraout_d1_00;
      pbStack_1168 = pbVar40;
      _sin();
      dVar103 = (double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                ));
      dVar113 = (double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                )) * extraout_d1_00 * (double)pbVar40;
      dStack_1190 = dVar113 + dVar96 * extraout_d1;
      uVar48 = SUB81(pbStack_1110,0);
      uVar49 = (undefined1)((ulong)pbStack_1110 >> 8);
      uVar50 = (undefined1)((ulong)pbStack_1110 >> 0x10);
      uVar52 = (undefined1)((ulong)pbStack_1110 >> 0x18);
      uVar53 = (undefined1)((ulong)pbStack_1110 >> 0x20);
      uVar54 = (undefined1)((ulong)pbStack_1110 >> 0x28);
      uVar57 = (undefined1)((ulong)pbStack_1110 >> 0x30);
      uVar58 = (undefined1)((ulong)pbStack_1110 >> 0x38);
      _sin();
      dVar111 = dStack_1188;
      dVar106 = (double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                ));
      uVar48 = SUB81(dStack_1188,0);
      uVar49 = (undefined1)((ulong)dStack_1188 >> 8);
      uVar50 = (undefined1)((ulong)dStack_1188 >> 0x10);
      uVar52 = (undefined1)((ulong)dStack_1188 >> 0x18);
      uVar53 = (undefined1)((ulong)dStack_1188 >> 0x20);
      uVar54 = (undefined1)((ulong)dStack_1188 >> 0x28);
      uVar57 = (undefined1)((ulong)dStack_1188 >> 0x30);
      uVar58 = (undefined1)((ulong)dStack_1188 >> 0x38);
      _sin();
      piVar42 = piStack_1158;
      dVar112 = (double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                                ));
      pbStack_1178 = (byte *)((double)pbStack_1118 * (double)pbStack_1100);
      dVar110 = (double)pbStack_1118 * (double)pbStack_10e8;
      dVar84 = -(dVar108 * dStack_1160) * (double)pbStack_10e0 +
               (double)pbStack_1140 * (double)pbStack_1178 +
               (-((double)pbStack_1108 * dStack_1160) * (double)pbStack_1170 +
               (double)piStack_1158 * (double)pbStack_10f0) * -dVar110;
      dVar85 = dVar103 * dStack_1180 * dVar106;
      dVar9 = ABS((dVar85 + dVar96 * extraout_d1) - dVar84);
      dVar85 = ABS((dVar85 + dVar112 * extraout_d1) - dVar84);
      bVar14 = false;
      if ((ABS(dStack_1190 - dVar84) <
           ABS((dVar113 +
               (double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(
                                                  uVar52,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)))))
                                               )) * extraout_d1) - dVar84)) &&
         (bVar14 = false, !NAN(dVar9) && !NAN(dVar85))) {
        bVar14 = dVar9 < dVar85;
      }
      if (bVar14) {
        dVar112 = dVar96;
        dVar111 = dStack_1198;
      }
      uVar48 = SUB81(dVar111,0);
      uVar49 = (undefined1)((ulong)dVar111 >> 8);
      uVar50 = (undefined1)((ulong)dVar111 >> 0x10);
      uVar52 = (undefined1)((ulong)dVar111 >> 0x18);
      uVar53 = (undefined1)((ulong)dVar111 >> 0x20);
      uVar54 = (undefined1)((ulong)dVar111 >> 0x28);
      uVar57 = (undefined1)((ulong)dVar111 >> 0x30);
      uVar58 = (undefined1)((ulong)dVar111 >> 0x38);
      pbStack_1100 = (byte *)dVar108;
      pbStack_10e8 = (byte *)dVar106;
      _cos();
      dVar103 = dVar103 * -((double)CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar54,CONCAT14(uVar53,
                                                  CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar49,
                                                  uVar48))))))) * extraout_d1);
      dVar110 = dStack_1130 * -dVar110 + (double)pbStack_1120 * (double)pbStack_1178 +
                (double)pbStack_10e0 * (double)piVar42 * (double)pbStack_1100;
      in_b0 = SUB81(pbStack_1150,0);
      in_register_00005001 = (undefined1)((ulong)pbStack_1150 >> 8);
      in_register_00005002 = (undefined1)((ulong)pbStack_1150 >> 0x10);
      in_register_00005003 = (char)((ulong)pbStack_1150 >> 0x18);
      in_register_00005004 = (undefined1)((ulong)pbStack_1150 >> 0x20);
      in_register_00005005 = (undefined1)((ulong)pbStack_1150 >> 0x28);
      in_register_00005006 = (undefined1)((ulong)pbStack_1150 >> 0x30);
      in_register_00005007 = (char)((ulong)pbStack_1150 >> 0x38);
      if (ABS((dVar103 + (double)pbStack_10e8 * dVar112) - dVar110) <=
          ABS((dVar103 + (double)pbStack_1168 * dVar112) - dVar110)) {
        in_b0 = SUB81(pbStack_1110,0);
        in_register_00005001 = (undefined1)((ulong)pbStack_1110 >> 8);
        in_register_00005002 = (undefined1)((ulong)pbStack_1110 >> 0x10);
        in_register_00005003 = (char)((ulong)pbStack_1110 >> 0x18);
        in_register_00005004 = (undefined1)((ulong)pbStack_1110 >> 0x20);
        in_register_00005005 = (undefined1)((ulong)pbStack_1110 >> 0x28);
        in_register_00005006 = (undefined1)((ulong)pbStack_1110 >> 0x30);
        in_register_00005007 = (char)((ulong)pbStack_1110 >> 0x38);
      }
      fStack_1060 = (float)(double)CONCAT17(in_register_00005007,
                                            CONCAT16(in_register_00005006,
                                                     CONCAT15(in_register_00005005,
                                                              CONCAT14(in_register_00005004,
                                                                       CONCAT13(in_register_00005003
                                                                                ,CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
      fStack_1064 = (float)(double)pbStack_10f8;
      fStack_105c = (float)dVar111;
      piVar17[0x21] = (int)(float)(double)pbStack_10f8;
      piVar17[0x22] = (int)fStack_1060;
      piVar17[0x23] = (int)(float)dVar111;
      iVar101 = 1;
    }
    else {
      iVar101 = 0;
    }
  }
  else {
    iVar101 = 0;
    uRam00000001137347fc = 0;
  }
  if ((uVar26 >> 9 & 1) != 0) {
    fStack_106c = fStack_106c * 0.5;
    in_register_00005003 = (char)((ulong)uStack_1048 >> 0x18) >> 1;
    iVar104 = (int)((long)uStack_1048 >> 0x21);
    in_register_00005004 = (undefined1)iVar104;
    in_register_00005005 = (undefined1)((uint)iVar104 >> 8);
    in_register_00005006 = (undefined1)((uint)iVar104 >> 0x10);
    in_register_00005007 = (char)((long)uStack_1048 >> 0x39);
    uStack_1048 = CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               (int3)((int)uStack_1048 >> 1))))));
    lVar27 = 8;
    do {
      auVar89 = *(undefined1 (*) [16])((long)aiStack_10d8 + lVar27);
      auVar88._0_8_ = CONCAT44(auVar89._4_4_ * 0.5,auVar89._0_4_ * 0.5);
      auVar88._8_4_ = auVar89._8_4_ * 0.5;
      auVar88._12_4_ = auVar89._12_4_ * 0.5;
      *(long *)((long)alStack_10d0 + lVar27) = auVar88._8_8_;
      *(undefined8 *)((long)aiStack_10d8 + lVar27) = auVar88._0_8_;
      lVar27 = lVar27 + 0x14;
    } while (lVar27 != 0x6c);
  }
  *(int *)(pbVar23 + 0x42c774) = iVar101;
  if ((*(byte *)((long)piVar17 + 0x99) >> 4 & 1) != 0) {
    *(undefined8 *)(pbVar23 + 0x6824) = uStack_1048;
    lStack_1a0 = alStack_10d0[0];
    uStack_198 = CONCAT44(uStack_198._4_4_,1);
    FUN_10967f7c8(CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0))))))),-fStack_1064,0,
                  &uStack_680);
    FUN_109675c30(&uStack_680,&fStack_168);
    in_b0 = SUB41(fStack_106c,0);
    in_register_00005001 = (undefined1)((uint)fStack_106c >> 8);
    in_register_00005002 = (undefined1)((uint)fStack_106c >> 0x10);
    in_register_00005003 = (char)((uint)fStack_106c >> 0x18);
    FUN_1096768b0(pbVar23,&lStack_1a0,&fStack_168);
    fStack_d90 = fStack_d8c /
                 (float)CONCAT13(in_register_00005003,
                                 CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))
                                );
  }
  if ((bRam0000000113734818 & 1) == 0) {
    iVar101 = 0x13734818;
    ___cxa_guard_acquire();
    if (iVar101 != 0) {
      iRam00000001137347f4 = (int)uStack_1048;
      ___cxa_guard_release(&bRam0000000113734818);
    }
  }
  pbVar40 = pbVar23 + 0xf5978;
  if ((bRam0000000113734820 & 1) == 0) {
    iVar101 = 0x13734820;
    ___cxa_guard_acquire();
    if (iVar101 != 0) {
      iRam00000001137347f8 = uStack_1048._4_4_;
      ___cxa_guard_release(&bRam0000000113734820);
    }
  }
  pbStack_1120 = pbVar23 + 0x42b488;
  pbStack_1118 = pbVar23 + 0x125010;
  pbStack_10e0 = pbVar23 + 0x42c6e8;
  pbVar45 = pbVar23 + 0x42afb0;
  pbStack_10f0 = pbVar23 + 0x128888;
  pbStack_10f8 = pbVar23 + 0x6818;
  if ((iRam00000001137347f8 == uStack_1048._4_4_) && (iRam00000001137347f4 == (int)uStack_1048)) {
    if ((pbVar23[0x42c780] & 1) != 0) goto LAB_1096784ec;
    *(int *)pbVar23 = *(int *)pbVar23 + 1;
    pbVar109 = *(byte **)pbVar40;
  }
  else {
    iRam00000001137347f4 = (int)uStack_1048;
    iRam00000001137347f8 = uStack_1048._4_4_;
LAB_1096784ec:
    pbVar109 = pbVar23 + 0xf5988;
    *(byte **)pbVar40 = pbVar109;
    *(byte **)(pbVar23 + 0xf5980) = pbVar23 + 0x10d4b0;
    *(int *)pbVar23 = *(int *)pbVar23 + 1;
    aiStack_10d8[0] = 0;
    *(int *)(pbVar23 + 0x6824) = iRam00000001137347f4;
    *(int *)(pbVar23 + 0x6828) = uStack_1048._4_4_;
    pbVar23[0x42c780] = 0;
    _bzero(pbVar23 + 0x42b994,0x20c);
  }
  pbVar44 = pbStack_10f8;
  *(byte **)(pbVar23 + 0x42c778) = pbVar21;
  FUN_109674c28(pbVar23,aiStack_10d8,pbVar109);
  lVar27 = 0;
  pbVar21 = pbVar23 + 0x42b994;
  iVar101 = 0;
  if (*(int *)pbVar39 != 0x7f) {
    iVar101 = *(int *)pbVar39 + 1;
  }
  *(int *)pbVar39 = iVar101;
  iVar104 = 100;
  pbVar109 = pbVar21 + (long)iVar101 * 4;
  pbVar109[0] = 100;
  pbVar109[1] = 0;
  pbVar109[2] = 0;
  pbVar109[3] = 0;
  pbVar23[0x42bb98] = 100;
  pbVar23[0x42bb99] = 0;
  pbVar23[0x42bb9a] = 0;
  pbVar23[0x42bb9b] = 0;
  pbVar23[0x42bb9c] = 100;
  pbVar23[0x42bb9d] = 0;
  pbVar23[0x42bb9e] = 0;
  pbVar23[0x42bb9f] = 0;
  iVar101 = 100;
  do {
    iVar107 = *(int *)(pbVar21 + lVar27);
    if (iVar107 < iVar104) {
      *(int *)(pbVar23 + 0x42bb9c) = iVar107;
      iVar104 = iVar107;
      iVar107 = *(int *)(pbVar21 + lVar27);
    }
    if (iVar101 < iVar107) {
      *(int *)(pbVar23 + 0x42bb98) = iVar107;
      iVar101 = iVar107;
    }
    lVar27 = lVar27 + 4;
  } while (lVar27 != 0x200);
  iVar104 = *(int *)pbVar39;
  iVar107 = *(int *)(pbVar21 + (long)(iVar104 + (iVar104 >> 0x1f) * -0x80) * 4);
  pbVar23[0x42bba0] = 1;
  pbVar23[0x42bba1] = 0;
  pbVar23[0x42bba2] = 0;
  pbVar23[0x42bba3] = 0;
  iVar101 = -5;
  do {
    iVar104 = iVar104 + -1;
    if ((int)(float)iVar107 <
        (int)(float)*(int *)(pbVar21 + (long)(iVar104 + (iVar104 >> 0x1f) * -0x80) * 4)) {
      pbVar23[0x42bba0] = 0;
      pbVar23[0x42bba1] = 0;
      pbVar23[0x42bba2] = 0;
      pbVar23[0x42bba3] = 0;
    }
    bVar14 = iVar101 != -1;
    iVar101 = iVar101 + 1;
  } while (bVar14);
  pbStack_1108 = pbVar21;
  pbStack_10e8 = pbVar45;
  if (**(int **)(pbVar23 + 0x67d0) == 0) {
    FUN_10967610c(pbVar23);
    lVar27 = 0;
    iVar101 = (int)(float)*(int *)(pbVar21 +
                                  (long)(*(int *)pbVar39 + (*(int *)pbVar39 >> 0x1f) * -0x80) * 4);
    pbVar39[0] = 0;
    pbVar39[1] = 0;
    pbVar39[2] = 0;
    pbVar39[3] = 0;
    uVar56 = (undefined1)((uint)iVar101 >> 8);
    uVar61 = (undefined1)((uint)iVar101 >> 0x10);
    uVar66 = (undefined1)((uint)iVar101 >> 0x18);
    do {
      *(ulong *)(pbVar21 + lVar27 + 8) =
           CONCAT17(uVar66,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14((char)iVar101,iVar101))));
      *(ulong *)(pbVar21 + lVar27) =
           CONCAT17(uVar66,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14((char)iVar101,iVar101))));
      lVar27 = lVar27 + 0x10;
    } while (lVar27 != 0x200);
    *(int *)(pbVar23 + 0x42bb98) = iVar101;
    *(int *)(pbVar23 + 0x42bb9c) = iVar101;
  }
  else {
    iVar101 = *(int *)(pbVar23 + 0x42b604);
    if (*(int *)(pbVar23 + 0x42aff0) == 0) {
      iVar104 = iVar101 + 0xc;
      if (-1 < iVar101) {
        iVar104 = iVar101;
      }
      lVar27 = 0xb;
      if (0 < iVar101) {
        lVar27 = -1;
      }
      lVar27 = lVar27 + iVar101;
      if (*(float *)(pbVar23 + ((long)iVar104 + 0x10ad69) * 4) ==
          *(float *)(pbVar23 + (lVar27 + 0x10ad69) * 4)) goto LAB_109678898;
      pbVar23[0x42aff0] = 1;
      pbVar23[0x42aff1] = 0;
      pbVar23[0x42aff2] = 0;
      pbVar23[0x42aff3] = 0;
      uVar87 = *(undefined8 *)(pbVar23 + (lVar27 * 3 + 0x10ad45) * 4);
      *(int *)(pbVar23 + 0x42affc) = *(int *)(pbVar23 + (lVar27 * 3 + 0x10ad47) * 4);
      *(undefined8 *)(pbVar23 + 0x42aff4) = uVar87;
      *(int *)(pbVar23 + 0x42b000) = *(int *)(pbVar23 + (lVar27 + 0x10ad69) * 4);
      iVar104 = 0xb;
      if (0 < *(int *)(pbVar23 + 0x42b8d8)) {
        iVar104 = -1;
      }
      iVar104 = iVar104 + *(int *)(pbVar23 + 0x42b8d8);
      uVar90 = *(undefined8 *)(pbVar23 + ((long)iVar104 * 0xf + 0x10ad8f) * 4);
      uVar87 = *(undefined8 *)(pbVar23 + ((long)iVar104 * 0xf + 0x10ad8d) * 4);
      uVar95 = *(undefined8 *)(pbVar23 + ((long)iVar104 * 0xf + 0x10ad86) * 4);
      auVar89 = *(undefined1 (*) [16])(pbVar23 + ((long)iVar104 * 0xf + 0x10ad8a) * 4);
      uVar92 = *(undefined8 *)(pbVar23 + ((long)iVar104 * 0xf + 0x10ad84) * 4);
      uVar91 = *(undefined8 *)(pbVar23 + ((long)iVar104 * 0xf + 0x10ad82) * 4);
      *(undefined8 *)(pbVar23 + 0x42b01c) =
           *(undefined8 *)(pbVar23 + ((long)iVar104 * 0xf + 0x10ad88) * 4);
      *(undefined8 *)(pbVar23 + 0x42b014) = uVar95;
      *(long *)(pbVar23 + 0x42b02c) = auVar89._8_8_;
      *(long *)(pbVar23 + 0x42b024) = auVar89._0_8_;
      *(undefined8 *)(pbVar23 + 0x42b038) = uVar90;
      *(undefined8 *)(pbVar23 + 0x42b030) = uVar87;
      *(undefined8 *)(pbVar23 + 0x42b00c) = uVar92;
      *(undefined8 *)(pbVar23 + 0x42b004) = uVar91;
      *(int *)(pbVar23 + 0x42b040) =
           *(int *)(pbVar23 +
                   ((long)(*(int *)(pbVar23 + 0x42b94c) + -1 +
                          (*(int *)(pbVar23 + 0x42b94c) + -1 >> 0x1f) * -0x10) + 0x10ae43) * 4);
      *(float *)(pbVar23 + 0x42b044) = (float)(*(int *)pbVar23 + -1);
    }
    iVar104 = iVar101 + 0xc;
    if (-1 < iVar101) {
      iVar104 = iVar101;
    }
    fVar82 = *(float *)(pbVar23 + ((long)iVar104 + 0x10ad69) * 4);
    iVar104 = 0xb;
    if (0 < iVar101) {
      iVar104 = -1;
    }
    if (fVar82 == *(float *)(pbVar23 + ((long)(iVar104 + iVar101) + 0x10ad69) * 4)) {
      iVar104 = 8;
      if (3 < iVar101) {
        iVar104 = -4;
      }
      if (fVar82 == *(float *)(pbVar23 + ((long)(iVar104 + iVar101) + 0x10ad69) * 4)) {
        iVar104 = 5;
        if (6 < iVar101) {
          iVar104 = -7;
        }
        if ((fVar82 == *(float *)(pbVar23 + ((long)(iVar104 + iVar101) + 0x10ad69) * 4)) &&
           ((pbVar23[0x42aff0] = 0, pbVar23[0x42aff1] = 0, pbVar23[0x42aff2] = 0,
            pbVar23[0x42aff3] = 0,
            *(int *)(pbVar23 + 0x42b47c) != 1 && *(int *)(pbVar23 + 0x42b480) != 1 ||
            (0.1 < ABS((*(float *)(*(long *)(pbVar23 + 0x42afb8) + 0x2d3b4) -
                       *(float *)(pbVar23 + 0x42b040)) / *(float *)(pbVar23 + 0x42b040)))))) {
          FUN_10967f7c8(CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                        -*(float *)(pbVar23 + 0x42aff8),-*(float *)(pbVar23 + 0x42affc),&fStack_168)
          ;
          FUN_109675c30(&fStack_168,&lStack_1a0);
          fVar82 = -fStack_1060;
          uVar48 = SUB41(fVar82,0);
          uVar49 = (char)((uint)fVar82 >> 8);
          uVar50 = (char)((uint)fVar82 >> 0x10);
          uVar52 = (char)((uint)fVar82 >> 0x18);
          uVar53 = 0;
          uVar54 = 0;
          uVar57 = 0;
          uVar58 = 0;
          FUN_10967f7c8(CONCAT17(uVar80,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,CONCAT13(
                                                  uVar67,CONCAT12(uVar66,CONCAT11(uVar61,uVar56)))))
                                                )),-fStack_1064,-fStack_105c,&lStack_1d0);
          uVar80 = uVar58;
          uVar77 = uVar57;
          uVar74 = uVar54;
          uVar71 = uVar53;
          uVar67 = uVar52;
          uVar66 = uVar50;
          uVar61 = uVar49;
          uVar56 = uVar48;
          pbVar21 = pbVar23 + 0x42b004;
          lVar27 = 5;
          do {
            if (*(int *)(pbVar21 + 8) != 0) {
              FUN_10967e884(pbVar23,pbVar21,&uStack_730,1);
              FUN_10967f908(&uStack_730,&lStack_1a0,&uStack_690,1);
              FUN_10967f908(&uStack_690,&lStack_1d0,auStack_6a0,1);
              uVar86 = NEON_scvtf(CONCAT44((int)((long)*(undefined8 *)(pbVar44 + 0xc) >> 0x21),
                                           (int)*(undefined8 *)(pbVar44 + 0xc) >> 1),4);
              uVar31 = CONCAT44((float)(uVar86 >> 0x20) + auStack_6a0._4_4_ * fStack_106c,
                                (float)uVar86 + auStack_6a0._0_4_ * fStack_106c);
              iVar101 = -(uint)((int)((uint)(iStack_698 == 0) << 0x1f) < 0);
              uVar31 = uVar31 ^ (uVar31 ^ uVar86) &
                                CONCAT17((char)((uint)iVar101 >> 0x18),
                                         CONCAT16((char)((uint)iVar101 >> 0x10),
                                                  CONCAT15((char)((uint)iVar101 >> 8),
                                                           CONCAT14((char)iVar101,
                                                                    -(uint)((int)((uint)(iStack_698
                                                                                        == 0) <<
                                                                                 0x1f) < 0)))));
              uVar56 = (undefined1)uVar31;
              uVar61 = (undefined1)(uVar31 >> 8);
              uVar66 = (undefined1)(uVar31 >> 0x10);
              uVar67 = (undefined1)(uVar31 >> 0x18);
              uVar71 = (undefined1)(uVar31 >> 0x20);
              uVar74 = (undefined1)(uVar31 >> 0x28);
              uVar77 = (undefined1)(uVar31 >> 0x30);
              uVar80 = (undefined1)(uVar31 >> 0x38);
            }
            pbVar45 = pbStack_10e8;
            pbVar21 = pbVar21 + 0xc;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 0;
          uStack_680 = CONCAT17(uVar80,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,CONCAT13(
                                                  uVar67,CONCAT12(uVar66,CONCAT11(uVar61,uVar56)))))
                                               ));
          aiStack_10d8[0] = 0;
          uStack_1040 = uStack_1040 | 2;
          fStack_d90 = *(float *)(pbStack_10e8 + 0x90);
          puVar18 = (undefined8 *)(((ulong)aiStack_10d8 | 4) + 4);
          do {
            *puVar18 = *(undefined8 *)((long)&uStack_680 + lVar27);
            lVar27 = lVar27 + 0xc;
            puVar18 = (undefined8 *)((long)puVar18 + 0x14);
          } while (lVar27 != 0x3c);
          FUN_10967610c(pbVar23);
        }
      }
    }
  }
LAB_109678898:
  if (((((*(byte *)(*(long *)(pbVar23 + 0x67d0) + 0x99) >> 2 & 1) != 0) && (aiStack_10d8[0] == 1))
      && (*(int *)(pbVar45 + 0x4d0) == 0)) && (*(int *)pbStack_1118 == 0)) {
    aiStack_10d8[0] = 0;
    uStack_1040 = uStack_1040 | 2;
    uVar87 = NEON_scvtf(uStack_1048,4);
    fVar82 = (float)uVar87 * 0.5;
    fVar105 = (float)((ulong)uVar87 >> 0x20) * 0.5;
    uVar56 = SUB41(fVar105,0);
    uVar61 = (undefined1)((uint)fVar105 >> 8);
    uVar66 = (undefined1)((uint)fVar105 >> 0x10);
    uVar67 = (undefined1)((uint)fVar105 >> 0x18);
    alStack_10d0[0] = CONCAT17(uVar67,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,fVar82))));
    uStack_10bc = CONCAT17(uVar67,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,fVar82))));
    uStack_10a8 = CONCAT17(uVar67,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,fVar82))));
    uStack_1094 = CONCAT17(uVar67,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,fVar82))));
    uStack_1080 = CONCAT17(uVar67,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,fVar82))));
    FUN_10967610c(pbVar23);
  }
  _gettimeofday(&uStack_680,0);
  dRam000000011382a498 = (double)(uStack_680 * 1000 + (long)((int)uStack_678 / 1000));
  pbStack_1100 = pbVar45 + 0x4cc;
  *(undefined8 *)(pbVar45 + 0x4dc) = *(undefined8 *)pbStack_1100;
  pbVar21 = (byte *)0x0;
  if (*(long *)(pbVar45 + 8) != 0) {
    pbVar21 = *(byte **)pbVar45;
    *(byte **)(pbVar45 + 8) = pbVar21;
  }
  pbVar109 = pbStack_10f0 + 8;
  iVar101 = *(int *)pbVar23;
  if (((*(float *)(pbVar45 + 0x4c8) < 10.0) && (*(int *)(pbStack_10e0 + 4) != 0)) &&
     (pbVar21 != (byte *)0x0)) {
    *(long *)(pbVar45 + 0x10) = *(long *)pbVar45;
  }
  iVar104 = 0;
  pbVar45[0] = 0;
  pbVar45[1] = 0;
  pbVar45[2] = 0;
  pbVar45[3] = 0;
  pbVar45[4] = 0;
  pbVar45[5] = 0;
  pbVar45[6] = 0;
  pbVar45[7] = 0;
  pbVar32 = *(byte **)(pbVar45 + 0x18);
  pbVar24 = *(byte **)(pbVar45 + 0x20);
  iVar36 = 999999;
  pbVar34 = *(byte **)(pbVar45 + 0x10);
  pbVar30 = pbVar109;
  iVar107 = -1;
  do {
    iVar2 = iVar36;
    iVar35 = iVar107;
    if (((pbVar30 != pbVar24) && (pbVar30 != pbVar32)) &&
       ((pbVar30 != pbVar21 &&
        (((pbVar30 != pbVar34 && (*(int *)(pbVar30 + 4) == 0)) &&
         (iVar2 = *(int *)pbVar30, iVar35 = iVar104, iVar36 <= *(int *)pbVar30)))))) {
      iVar2 = iVar36;
      iVar35 = iVar107;
    }
    iVar36 = iVar2;
    iVar104 = iVar104 + 1;
    pbVar30 = pbVar30 + 0x2d520;
    iVar107 = iVar35;
  } while (iVar104 != 0x10);
  if (iVar35 == -1) {
    iVar104 = 0x10;
    pbVar30 = pbVar109;
    do {
      if (((pbVar30 != pbVar24) && (pbVar30 != pbVar32)) &&
         ((pbVar30 != pbVar21 && ((pbVar30 != pbVar34 && (*(int *)(pbVar30 + 4) == 0))))))
      goto LAB_109678a20;
      pbVar30 = pbVar30 + 0x2d520;
      iVar104 = iVar104 + -1;
    } while (iVar104 != 0);
    iVar104 = 0x10;
    pbVar30 = pbVar109;
    do {
      if ((((pbVar30 != pbVar24) && (pbVar30 != pbVar32)) && (pbVar30 != pbVar21)) &&
         ((pbVar30 != pbVar34 && (0xf < iVar101 - *(int *)pbVar30)))) goto LAB_109678a20;
      pbVar30 = pbVar30 + 0x2d520;
      iVar104 = iVar104 + -1;
    } while (iVar104 != 0);
    iVar104 = 0x10;
    pbVar30 = pbVar109;
    do {
      if (((pbVar30 != pbVar24) && (pbVar30 != pbVar32)) &&
         ((pbVar30 != pbVar21 && (pbVar30 != pbVar34)))) goto LAB_109678a20;
      pbVar30 = pbVar30 + 0x2d520;
      iVar104 = iVar104 + -1;
    } while (iVar104 != 0);
    pbVar30 = (byte *)0x0;
  }
  else {
    pbVar30 = pbVar109 + (long)iVar35 * 0x2d520;
LAB_109678a20:
    *(byte **)pbVar45 = pbVar30;
  }
  pbVar32 = pbVar30 + 0x22414;
  if (pbVar21 == (byte *)0x0) {
    *(byte **)(pbVar45 + 8) = pbVar30;
    *(byte **)(pbVar45 + 0x10) = pbVar30;
    pbVar21 = pbVar30;
  }
  *(int *)pbVar30 = iVar101;
  pbVar30[4] = 0;
  pbVar30[5] = 0;
  pbVar30[6] = 0;
  pbVar30[7] = 0;
  pbVar24 = pbVar21 + 0x22414;
  lVar27 = 5;
  do {
    pbVar32[0x22cc] = 0;
    pbVar32[0x22cd] = 0;
    pbVar32[0x22ce] = 0x80;
    pbVar32[0x22cf] = 0x3f;
    *(int *)(pbVar32 + 0x22c4) = *(int *)(pbVar24 + 0x22c4);
    pbVar32[0x22d0] = 0;
    pbVar32[0x22d1] = 0;
    pbVar32[0x22d2] = 0;
    pbVar32[0x22d3] = 0;
    pbVar32[0x22d4] = 0;
    pbVar32[0x22d5] = 0;
    pbVar32[0x22d6] = 0;
    pbVar32[0x22d7] = 0;
    *(int *)pbVar32 = *(int *)pbVar24;
    pbVar32 = pbVar32 + 0x2318;
    pbVar24 = pbVar24 + 0x2318;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  pbVar30[0x2d3e4] = 2;
  pbVar30[0x2d3e5] = 0;
  pbVar30[0x2d3e6] = 0;
  pbVar30[0x2d3e7] = 0;
  pbVar30[0x2d38c] = 0;
  pbVar30[0x2d38d] = 0;
  pbVar30[0x2d38e] = 0x80;
  pbVar30[0x2d38f] = 0x3f;
  fVar82 = *(float *)(pbStack_10e0 + 0x20);
  *(float *)(pbVar30 + 0x2d3b4) = fVar82;
  if (fVar82 == 0.0) {
    *(int *)(pbVar30 + 0x2d3b4) = *(int *)(*(long *)(pbVar23 + 0x67d0) + 0x348);
  }
  _memcpy(pbVar30 + 0x22284,pbVar21 + 0x22284,400);
  lVar27 = *(long *)pbVar45;
  *(undefined4 *)(lVar27 + 0x5e0) = 0;
  lVar19 = *(long *)(pbVar23 + 0x67d0);
  if (*(int *)pbVar44 == 0) {
    if (*(int *)(lVar19 + 0xa0) == 1) {
      uVar87 = NEON_rev64(*(undefined8 *)(lVar19 + 0x74),4);
      fVar82 = (float)*(undefined8 *)(pbStack_10e0 + 0x34) + (float)uVar87;
      uVar56 = SUB41(fVar82,0);
      uVar61 = (undefined1)((uint)fVar82 >> 8);
      uVar66 = (undefined1)((uint)fVar82 >> 0x10);
      uVar67 = (undefined1)((uint)fVar82 >> 0x18);
      fVar82 = (float)((ulong)*(undefined8 *)(pbStack_10e0 + 0x34) >> 0x20) +
               (float)((ulong)uVar87 >> 0x20);
      uVar71 = SUB41(fVar82,0);
      uVar74 = (undefined1)((uint)fVar82 >> 8);
      uVar77 = (undefined1)((uint)fVar82 >> 0x10);
      cVar81 = (char)((uint)fVar82 >> 0x18);
      fVar82 = *(float *)(pbStack_10e0 + 0x3c);
      goto LAB_109678bfc;
    }
    uVar87 = NEON_rev64(*(undefined8 *)(lVar19 + 0x74),4);
    uVar56 = (undefined1)uVar87;
    uVar61 = (undefined1)((ulong)uVar87 >> 8);
    uVar66 = (undefined1)((ulong)uVar87 >> 0x10);
    uVar67 = (undefined1)((ulong)uVar87 >> 0x18);
    uVar71 = (undefined1)((ulong)uVar87 >> 0x20);
    uVar74 = (undefined1)((ulong)uVar87 >> 0x28);
    uVar77 = (undefined1)((ulong)uVar87 >> 0x30);
    cVar81 = (char)((ulong)uVar87 >> 0x38);
    fVar82 = *(float *)(lVar19 + 0x7c);
  }
  else {
    uVar87 = NEON_rev64(*(undefined8 *)(lVar19 + 0x74),4);
    fVar82 = (float)*(undefined8 *)(pbStack_10e0 + 0x28) + (float)uVar87;
    uVar56 = SUB41(fVar82,0);
    uVar61 = (undefined1)((uint)fVar82 >> 8);
    uVar66 = (undefined1)((uint)fVar82 >> 0x10);
    uVar67 = (undefined1)((uint)fVar82 >> 0x18);
    fVar82 = (float)((ulong)*(undefined8 *)(pbStack_10e0 + 0x28) >> 0x20) +
             (float)((ulong)uVar87 >> 0x20);
    uVar71 = SUB41(fVar82,0);
    uVar74 = (undefined1)((uint)fVar82 >> 8);
    uVar77 = (undefined1)((uint)fVar82 >> 0x10);
    cVar81 = (char)((uint)fVar82 >> 0x18);
    fVar82 = *(float *)(pbStack_10e0 + 0x30);
LAB_109678bfc:
    fVar82 = fVar82 + *(float *)(lVar19 + 0x7c);
  }
  *(ulong *)(lVar27 + 0x1c) =
       CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,CONCAT13(uVar67,CONCAT12(
                                                  uVar66,CONCAT11(uVar61,uVar56)))))));
  *(float *)(lVar27 + 0x24) = fVar82;
  *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)(lVar19 + 0x6c);
  *(ulong *)(lVar27 + 0x2d410) =
       CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,CONCAT13(uVar67,CONCAT12(
                                                  uVar66,CONCAT11(uVar61,uVar56)))))));
  *(float *)(lVar27 + 0x2d418) = fVar82;
  pbStack_1110 = pbVar109;
  FUN_10967f7c8(CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,CONCAT13(uVar67,
                                                  CONCAT12(uVar66,CONCAT11(uVar61,uVar56))))))),
                -(float)CONCAT13(cVar81,CONCAT12(uVar77,CONCAT11(uVar74,uVar71))),0,lVar27 + 0x2c);
  FUN_109675c30(*(long *)pbVar45 + 0x2c,*(long *)pbVar45 + 0x50);
  FUN_10967f7c8(CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,CONCAT13(uVar67,
                                                  CONCAT12(uVar66,CONCAT11(uVar61,uVar56))))))),0,
                -fVar82,*(long *)pbVar45 + 0x74);
  FUN_109675c30(*(long *)pbVar45 + 0x74,*(long *)pbVar45 + 0x98);
  FUN_10967f6ec(*(long *)pbVar45 + 0x1c);
  lVar27 = *(long *)pbVar45;
  fVar105 = *(float *)(lVar27 + 0x28);
  FUN_10967f7c8(CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,CONCAT13(uVar67,
                                                  CONCAT12(uVar66,CONCAT11(uVar61,uVar56))))))),
                -*(float *)(*(long *)(pbVar23 + 0x67d0) + 0x84),0,&lStack_1a0);
  FUN_10967f908(&UNK_10dfd94f8,&lStack_1a0,&uStack_680,4);
  FUN_10967f908(&UNK_10dfd9528,&lStack_1a0,&fStack_168,4);
  pbVar109 = pbStack_10e0;
  pbVar21 = pbStack_1108;
  uVar56 = (undefined1)uStack_680;
  uVar61 = (undefined1)((ulong)uStack_680 >> 8);
  uVar66 = (undefined1)((ulong)uStack_680 >> 0x10);
  uVar67 = (undefined1)((ulong)uStack_680 >> 0x18);
  fVar82 = 1.0;
  if ((float)uStack_680 == uStack_678._4_4_) {
    fVar94 = 0.0;
    fVar83 = 1.0;
  }
  else {
    fVar83 = 0.0;
    fVar94 = 1.0;
    if (uStack_680._4_4_ == (float)uStack_670) {
      uVar56 = (undefined1)((ulong)uStack_680 >> 0x20);
      uVar61 = (undefined1)((ulong)uStack_680 >> 0x28);
      uVar66 = (undefined1)((ulong)uStack_680 >> 0x30);
      uVar67 = (undefined1)((ulong)uStack_680 >> 0x38);
    }
    else {
      fVar83 = -(uStack_680._4_4_ - (float)uStack_670) / ((float)uStack_680 - uStack_678._4_4_);
      fVar93 = uStack_680._4_4_ + (float)uStack_680 * fVar83;
      uVar56 = SUB41(fVar93,0);
      uVar61 = (undefined1)((uint)fVar93 >> 8);
      uVar66 = (undefined1)((uint)fVar93 >> 0x10);
      uVar67 = (undefined1)((uint)fVar93 >> 0x18);
    }
  }
  fVar93 = 0.0;
  fVar102 = (float)uStack_668;
  if ((float)uStack_668 != fStack_65c) {
    fVar82 = 0.0;
    fVar93 = 1.0;
    fVar102 = uStack_668._4_4_;
    if (uStack_668._4_4_ != fStack_658) {
      fVar82 = -(uStack_668._4_4_ - fStack_658) / ((float)uStack_668 - fStack_65c);
      fVar102 = uStack_668._4_4_ + (float)uStack_668 * fVar82;
      fVar93 = 1.0;
    }
  }
  fVar116 = 1.0;
  fVar99 = 0.0;
  if (fStack_168 == afStack_160[1]) {
    fVar114 = 0.0;
    fVar115 = 1.0;
    fVar97 = fStack_168;
  }
  else {
    fVar115 = 0.0;
    fVar114 = 1.0;
    fVar97 = fStack_164;
    if (fStack_164 != afStack_160[2]) {
      fVar115 = -(fStack_164 - afStack_160[2]) / (fStack_168 - afStack_160[1]);
      fVar97 = fStack_164 + fStack_168 * fVar115;
    }
  }
  fVar98 = afStack_160[4];
  if (afStack_160[4] != (float)uStack_144) {
    fVar116 = 0.0;
    fVar99 = 1.0;
    fVar98 = fStack_14c;
    if (fStack_14c != uStack_144._4_4_) {
      fVar116 = -(fStack_14c - uStack_144._4_4_) / (afStack_160[4] - (float)uStack_144);
      fVar98 = fStack_14c + afStack_160[4] * fVar116;
    }
  }
  fVar10 = fVar116;
  fVar100 = fVar97;
  fVar11 = fVar114;
  if (fVar114 == 0.0) {
    fVar10 = fVar115;
    fVar100 = fVar98;
    fVar115 = fVar116;
    fVar11 = fVar99;
    fVar99 = fVar114;
  }
  if (fVar114 == 0.0) {
    fVar98 = fVar97;
  }
  fVar116 = (fVar98 - (fVar99 / fVar11) * fVar100) / (fVar10 - (fVar99 / fVar11) * fVar115);
  bVar14 = fVar94 == 0.0;
  fVar99 = fVar83;
  if (bVar14) {
    fVar99 = fVar82;
  }
  fVar97 = fVar93;
  fVar114 = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar61,uVar56)));
  if (bVar14) {
    fVar97 = fVar94;
    fVar94 = fVar93;
    fVar114 = fVar102;
  }
  uVar80 = SUB41(fVar102,0);
  uVar48 = (char)((uint)fVar102 >> 8);
  uVar49 = (char)((uint)fVar102 >> 0x10);
  uVar50 = (char)((uint)fVar102 >> 0x18);
  if (bVar14) {
    uVar80 = uVar56;
    uVar48 = uVar61;
    uVar49 = uVar66;
    uVar50 = uVar67;
  }
  if (bVar14) {
    fVar82 = fVar83;
  }
  fVar93 = ((float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar80))) -
           (fVar97 / fVar94) * fVar114) / (fVar82 - (fVar97 / fVar94) * fVar99);
  fVar82 = (float)(*(int *)(pbVar44 + 0xc) >> 1) + fVar105 * fVar93;
  uVar56 = SUB41(fVar82,0);
  uVar61 = (undefined1)((uint)fVar82 >> 8);
  uVar66 = (undefined1)((uint)fVar82 >> 0x10);
  cVar68 = (char)((uint)fVar82 >> 0x18);
  fVar83 = (float)(*(int *)(pbVar44 + 0xc) >> 1) + fVar105 * fVar116;
  if (fVar82 == fVar83) {
    uVar87 = 0x3f800000;
  }
  else {
    fVar94 = (float)(*(int *)(pbVar44 + 0x10) >> 1) +
             fVar105 * ((fVar114 - fVar93 * fVar99) / fVar94);
    fVar105 = (float)(*(int *)(pbVar44 + 0x10) >> 1) +
              fVar105 * ((fVar100 - fVar116 * fVar115) / fVar11);
    if (fVar94 == fVar105) {
      uVar87 = 0x3f80000000000000;
      uVar56 = SUB41(fVar94,0);
      uVar61 = (undefined1)((uint)fVar94 >> 8);
      uVar66 = (undefined1)((uint)fVar94 >> 0x10);
      cVar68 = (char)((uint)fVar94 >> 0x18);
    }
    else {
      fVar105 = -(fVar94 - fVar105) / (fVar82 - fVar83);
      fVar94 = fVar94 + fVar82 * fVar105;
      uVar56 = SUB41(fVar94,0);
      uVar61 = (undefined1)((uint)fVar94 >> 8);
      uVar66 = (undefined1)((uint)fVar94 >> 0x10);
      cVar68 = (char)((uint)fVar94 >> 0x18);
      uVar87 = NEON_fmov(0x3f800000,4);
      uVar87 = CONCAT44((int)((ulong)uVar87 >> 0x20),fVar105);
    }
  }
  *(undefined8 *)(lVar27 + 0x2d514) = uVar87;
  *(float *)(lVar27 + 0x2d51c) = -(float)CONCAT13(cVar68,CONCAT12(uVar66,CONCAT11(uVar61,uVar56)));
  lVar27 = *(long *)pbVar45;
  *(undefined8 *)(lVar27 + 0x2d3c8) = 0;
  *(undefined8 *)(lVar27 + 0x2d3c0) = 0x3f800000;
  *(undefined8 *)(lVar27 + 0x2d3d8) = 0;
  *(undefined8 *)(lVar27 + 0x2d3d0) = 0x3f800000;
  uStack_1128 = 0;
  dStack_1130 = 5.26354424712089e-315;
  *(undefined4 *)(lVar27 + 0x2d3e0) = 0x3f800000;
  pbStack_1100[0] = 2;
  pbStack_1100[1] = 0;
  pbStack_1100[2] = 0;
  pbStack_1100[3] = 0;
  pbStack_1100[4] = 2;
  pbStack_1100[5] = 0;
  pbStack_1100[6] = 0;
  pbStack_1100[7] = 0;
  pbVar45[0x4d4] = 0;
  pbVar45[0x4d5] = 0;
  pbVar45[0x4d6] = 0;
  pbVar45[0x4d7] = 0;
  pbStack_10e0[0xc] = 0;
  pbStack_10e0[0xd] = 0;
  pbStack_10e0[0xe] = 0;
  pbStack_10e0[0xf] = 0;
  FUN_10967ddf4(pbVar23,*(undefined8 *)(pbVar23 + 0x42c778));
  *(int *)(*(long *)pbVar45 + 8) =
       (int)(float)*(int *)(pbVar21 +
                           (long)(*(int *)pbVar39 + (*(int *)pbVar39 >> 0x1f) * -0x80) * 4);
  if (**(int **)(pbVar23 + 0x67d0) == 0) {
    _gettimeofday(&uStack_680,0);
    dRam000000011382a4d8 = (double)(uStack_680 * 1000 + (long)((int)uStack_678 / 1000));
    lVar27 = *(long *)(pbVar23 + 0x67d0);
    uVar87 = *(undefined8 *)(lVar27 + (long)*(int *)(lVar27 + 0x68) * 0x14 + 8);
    if (((*(byte *)(lVar27 + 0x98) >> 1 & 1) == 0) && (*(float *)(pbVar109 + 0x1c) != 0.0)) {
      lVar27 = *(long *)pbVar45;
    }
    else {
      iVar101 = *(int *)(lVar27 + 0x348);
      uVar56 = (undefined1)iVar101;
      uVar61 = (undefined1)((uint)iVar101 >> 8);
      uVar66 = (undefined1)((uint)iVar101 >> 0x10);
      cVar68 = (char)((uint)iVar101 >> 0x18);
      lVar27 = *(long *)pbVar45;
      *(int *)(lVar27 + 0x2d3b4) = iVar101;
      *(int *)(pbVar109 + 0x1c) = iVar101;
      pbVar45[0x99c] = 0;
      pbVar45[0x99d] = 0;
      pbVar45[0x99e] = 0;
      pbVar45[0x99f] = 0;
      *(ulong *)(pbVar45 + 0x964) =
           CONCAT17(cVar68,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,iVar101))));
      *(ulong *)(pbVar45 + 0x95c) =
           CONCAT17(cVar68,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,iVar101))));
      *(ulong *)(pbVar45 + 0x974) =
           CONCAT17(cVar68,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,iVar101))));
      *(ulong *)(pbVar45 + 0x96c) =
           CONCAT17(cVar68,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,iVar101))));
      *(ulong *)(pbVar45 + 0x984) =
           CONCAT17(cVar68,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,iVar101))));
      *(ulong *)(pbVar45 + 0x97c) =
           CONCAT17(cVar68,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,iVar101))));
      *(ulong *)(pbVar45 + 0x994) =
           CONCAT17(cVar68,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,iVar101))));
      *(ulong *)(pbVar45 + 0x98c) =
           CONCAT17(cVar68,CONCAT16(uVar66,CONCAT15(uVar61,CONCAT14(uVar56,iVar101))));
      pbVar45[0x9e0] = 0;
      pbVar45[0x9e1] = 0;
      pbVar45[0x9e2] = 0;
      pbVar45[0x9e3] = 0;
      _memset_pattern16(pbVar23 + 0x42b950,&UNK_10dfd94b0,0x40);
    }
    _bzero(lVar27 + 0x130,0x4b0);
    lVar27 = *(long *)pbVar45;
    *(undefined8 *)(lVar27 + 0x130) = uVar87;
    *(undefined4 *)(lVar27 + 0x138) = 1;
    *(int *)(lVar27 + 0x22284) = *(int *)pbVar23;
    if ((*(byte *)(*(long *)(pbVar23 + 0x67d0) + 0x99) >> 2 & 1) == 0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      uVar86 = *(ulong *)(*(long *)(pbVar23 + 0x67d0) + 8);
      uVar86 = uVar86 ^ (uVar86 ^ 0x42c8000042c80000) &
                        CONCAT44(-(uint)((float)(uVar86 >> 0x20) < 100.0),
                                 -(uint)((float)uVar86 < 100.0));
      uVar31 = NEON_scvtf(*(undefined8 *)(pbStack_10f8 + 0xc),4);
      fVar105 = (float)uVar31 + -100.0;
      fVar82 = (float)(uVar31 >> 0x20);
      fVar94 = fVar82 + -100.0;
      uVar86 = uVar86 ^ (uVar86 ^ CONCAT44(fVar94,fVar105)) &
                        CONCAT44(-(uint)(fVar94 < (float)(uVar86 >> 0x20)),
                                 -(uint)(fVar105 < (float)uVar86));
      fVar105 = (float)uVar86;
      fVar94 = (float)(uVar86 >> 0x20);
      uVar87 = NEON_fmaxnm(CONCAT44(fVar94 + -100.0,fVar105 + -80.0),0,4);
      uStack_680 = CONCAT44((int)(float)((ulong)uVar87 >> 0x20),(int)(float)uVar87);
      fVar105 = fVar105 + 150.0;
      fVar94 = fVar94 + 100.0;
      uVar31 = uVar31 ^ (uVar31 ^ CONCAT44(fVar94,fVar105)) &
                        CONCAT44(-(uint)(fVar94 < fVar82),-(uint)(fVar105 < (float)uVar31));
      uVar87 = NEON_scvtf(uStack_680,4);
      iVar101 = (int)((float)(uVar31 >> 0x20) - (float)((ulong)uVar87 >> 0x20));
      uVar71 = (undefined1)iVar101;
      uVar74 = (undefined1)((uint)iVar101 >> 8);
      uVar77 = (undefined1)((uint)iVar101 >> 0x10);
      cVar81 = (char)((uint)iVar101 >> 0x18);
      uStack_678 = CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,(int)((float)
                                                  uVar31 - (float)uVar87)))));
      puVar18 = &uStack_680;
    }
    pbVar21 = pbVar23;
    FUN_10967b374(pbVar23,pbVar23 + 0x124fd8,lVar27,1,puVar18,pbVar23 + 0x6878);
    lVar19 = *(long *)pbVar45;
    *(int *)(lVar19 + 0xc) = (int)pbVar21;
    lVar27 = 0;
    *(undefined8 *)(lVar19 + 0x2d398) = uStack_1128;
    *(double *)(lVar19 + 0x2d390) = dStack_1130;
    *(undefined8 *)(lVar19 + 0x2d3a8) = uStack_1128;
    *(double *)(lVar19 + 0x2d3a0) = dStack_1130;
    *(undefined4 *)(lVar19 + 0x2d3b0) = 0x3f800000;
    lVar19 = 0x22414;
    do {
      if ((*(uint *)(*(long *)(pbVar23 + 0x67d0) + lVar27 + 4) & 0xfffffffd) == 1) {
        uStack_680 = *(long *)(*(long *)(pbVar23 + 0x67d0) + lVar27 + 8);
        uStack_678 = CONCAT44(uStack_678._4_4_,1);
        FUN_109676e08(pbVar23,*(long *)pbVar45 + 0x1c,&uStack_680,*(long *)pbVar45 + lVar19);
      }
      else {
        *(undefined4 *)(*(long *)pbVar45 + lVar19) = 0;
      }
      pbVar21 = pbStack_10e0;
      lVar19 = lVar19 + 0x2318;
      lVar27 = lVar27 + 0x14;
    } while (lVar27 != 100);
    lVar27 = *(long *)pbVar45;
    *(undefined4 *)(lVar27 + 4) = 1;
    *(long *)(pbVar45 + 0x18) = lVar27;
    *(long *)(pbVar45 + 0x20) = lVar27;
    pbVar45[0x4c8] = 0;
    pbVar45[0x4c9] = 0;
    pbVar45[0x4ca] = 0;
    pbVar45[0x4cb] = 0;
    pbVar45[0x4cc] = 1;
    pbVar45[0x4cd] = 0;
    pbVar45[0x4ce] = 0;
    pbVar45[0x4cf] = 0;
    pbVar21[0x10] = 0;
    pbVar21[0x11] = 0;
    pbVar21[0x12] = 0;
    pbVar21[0x13] = 0;
    pbVar21[0x14] = 0;
    pbVar21[0x15] = 0;
    pbVar21[0x16] = 0;
    pbVar21[0x17] = 0;
    pbVar21[0x18] = 0;
    pbVar21[0x19] = 0;
    pbVar21[0x1a] = 0;
    pbVar21[0x1b] = 0;
    pbVar45[0x4d8] = 0;
    pbVar45[0x4d9] = 0;
    pbVar45[0x4da] = 0;
    pbVar45[0x4db] = 0;
    pbVar45[0x3c8] = 100;
    pbVar45[0x3c9] = 0;
    pbVar45[0x3ca] = 0;
    pbVar45[0x3cb] = 0;
    pbVar45[0x448] = 100;
    pbVar45[0x449] = 0;
    pbVar45[0x44a] = 0;
    pbVar45[1099] = 0;
    pbVar23[0x42b0c0] = 0;
    pbVar23[0x42b0c1] = 0;
    pbVar23[0x42b0c2] = 0;
    pbVar23[0x42b0c3] = 0;
    pbVar23[0x42b0c4] = 0;
    pbVar23[0x42b0c5] = 0;
    pbVar23[0x42b0c6] = 0;
    pbVar23[0x42b0c7] = 0;
    pbVar23[0x42b0b8] = 0;
    pbVar23[0x42b0b9] = 0;
    pbVar23[0x42b0ba] = 0;
    pbVar23[0x42b0bb] = 0;
    pbVar23[0x42b0bc] = 0;
    pbVar23[0x42b0bd] = 0;
    pbVar23[0x42b0be] = 0;
    pbVar23[0x42b0bf] = 0;
    pbVar23[0x42b0d0] = 0;
    pbVar23[0x42b0d1] = 0;
    pbVar23[0x42b0d2] = 0;
    pbVar23[0x42b0d3] = 0;
    pbVar23[0x42b0d4] = 0;
    pbVar23[0x42b0d5] = 0;
    pbVar23[0x42b0d6] = 0;
    pbVar23[0x42b0d7] = 0;
    pbVar23[0x42b0c8] = 0;
    pbVar23[0x42b0c9] = 0;
    pbVar23[0x42b0ca] = 0;
    pbVar23[0x42b0cb] = 0;
    pbVar23[0x42b0cc] = 0;
    pbVar23[0x42b0cd] = 0;
    pbVar23[0x42b0ce] = 0;
    pbVar23[0x42b0cf] = 0;
    pbVar23[0x42b0a0] = 0;
    pbVar23[0x42b0a1] = 0;
    pbVar23[0x42b0a2] = 0;
    pbVar23[0x42b0a3] = 0;
    pbVar23[0x42b0a4] = 0;
    pbVar23[0x42b0a5] = 0;
    pbVar23[0x42b0a6] = 0;
    pbVar23[0x42b0a7] = 0;
    pbVar23[0x42b098] = 0;
    pbVar23[0x42b099] = 0;
    pbVar23[0x42b09a] = 0;
    pbVar23[0x42b09b] = 0;
    pbVar23[0x42b09c] = 0;
    pbVar23[0x42b09d] = 0;
    pbVar23[0x42b09e] = 0;
    pbVar23[0x42b09f] = 0;
    pbVar23[0x42b0b0] = 0;
    pbVar23[0x42b0b1] = 0;
    pbVar23[0x42b0b2] = 0;
    pbVar23[0x42b0b3] = 0;
    pbVar23[0x42b0b4] = 0;
    pbVar23[0x42b0b5] = 0;
    pbVar23[0x42b0b6] = 0;
    pbVar23[0x42b0b7] = 0;
    pbVar23[0x42b0a8] = 0;
    pbVar23[0x42b0a9] = 0;
    pbVar23[0x42b0aa] = 0;
    pbVar23[0x42b0ab] = 0;
    pbVar23[0x42b0ac] = 0;
    pbVar23[0x42b0ad] = 0;
    pbVar23[0x42b0ae] = 0;
    pbVar23[0x42b0af] = 0;
    pbVar23[0x42b080] = 0;
    pbVar23[0x42b081] = 0;
    pbVar23[0x42b082] = 0;
    pbVar23[0x42b083] = 0;
    pbVar23[0x42b084] = 0;
    pbVar23[0x42b085] = 0;
    pbVar23[0x42b086] = 0;
    pbVar23[0x42b087] = 0;
    pbVar23[0x42b078] = 0;
    pbVar23[0x42b079] = 0;
    pbVar23[0x42b07a] = 0;
    pbVar23[0x42b07b] = 0;
    pbVar23[0x42b07c] = 0;
    pbVar23[0x42b07d] = 0;
    pbVar23[0x42b07e] = 0;
    pbVar23[0x42b07f] = 0;
    pbVar23[0x42b090] = 0;
    pbVar23[0x42b091] = 0;
    pbVar23[0x42b092] = 0;
    pbVar23[0x42b093] = 0;
    pbVar23[0x42b094] = 0;
    pbVar23[0x42b095] = 0;
    pbVar23[0x42b096] = 0;
    pbVar23[0x42b097] = 0;
    pbVar23[0x42b088] = 0;
    pbVar23[0x42b089] = 0;
    pbVar23[0x42b08a] = 0;
    pbVar23[0x42b08b] = 0;
    pbVar23[0x42b08c] = 0;
    pbVar23[0x42b08d] = 0;
    pbVar23[0x42b08e] = 0;
    pbVar23[0x42b08f] = 0;
    pbVar23[0x42b060] = 0;
    pbVar23[0x42b061] = 0;
    pbVar23[0x42b062] = 0;
    pbVar23[0x42b063] = 0;
    pbVar23[0x42b064] = 0;
    pbVar23[0x42b065] = 0;
    pbVar23[0x42b066] = 0;
    pbVar23[0x42b067] = 0;
    pbVar23[0x42b058] = 0;
    pbVar23[0x42b059] = 0;
    pbVar23[0x42b05a] = 0;
    pbVar23[0x42b05b] = 0;
    pbVar23[0x42b05c] = 0;
    pbVar23[0x42b05d] = 0;
    pbVar23[0x42b05e] = 0;
    pbVar23[0x42b05f] = 0;
    pbVar23[0x42b070] = 0;
    pbVar23[0x42b071] = 0;
    pbVar23[0x42b072] = 0;
    pbVar23[0x42b073] = 0;
    pbVar23[0x42b074] = 0;
    pbVar23[0x42b075] = 0;
    pbVar23[0x42b076] = 0;
    pbVar23[0x42b077] = 0;
    pbVar23[0x42b068] = 0;
    pbVar23[0x42b069] = 0;
    pbVar23[0x42b06a] = 0;
    pbVar23[0x42b06b] = 0;
    pbVar23[0x42b06c] = 0;
    pbVar23[0x42b06d] = 0;
    pbVar23[0x42b06e] = 0;
    pbVar23[0x42b06f] = 0;
    pbVar23[0x42b250] = 0;
    pbVar23[0x42b251] = 0;
    pbVar23[0x42b252] = 0;
    pbVar23[0x42b253] = 0;
    pbVar23[0x42b254] = 0;
    pbVar23[0x42b255] = 0;
    pbVar23[0x42b256] = 0;
    pbVar23[0x42b257] = 0;
    pbVar23[0x42b248] = 0;
    pbVar23[0x42b249] = 0;
    pbVar23[0x42b24a] = 0;
    pbVar23[0x42b24b] = 0;
    pbVar23[0x42b24c] = 0;
    pbVar23[0x42b24d] = 0;
    pbVar23[0x42b24e] = 0;
    pbVar23[0x42b24f] = 0;
    pbVar23[0x42b260] = 0;
    pbVar23[0x42b261] = 0;
    pbVar23[0x42b262] = 0;
    pbVar23[0x42b263] = 0;
    pbVar23[0x42b264] = 0;
    pbVar23[0x42b265] = 0;
    pbVar23[0x42b266] = 0;
    pbVar23[0x42b267] = 0;
    pbVar23[0x42b258] = 0;
    pbVar23[0x42b259] = 0;
    pbVar23[0x42b25a] = 0;
    pbVar23[0x42b25b] = 0;
    pbVar23[0x42b25c] = 0;
    pbVar23[0x42b25d] = 0;
    pbVar23[0x42b25e] = 0;
    pbVar23[0x42b25f] = 0;
    pbVar23[0x42b230] = 0;
    pbVar23[0x42b231] = 0;
    pbVar23[0x42b232] = 0;
    pbVar23[0x42b233] = 0;
    pbVar23[0x42b234] = 0;
    pbVar23[0x42b235] = 0;
    pbVar23[0x42b236] = 0;
    pbVar23[0x42b237] = 0;
    pbVar23[0x42b228] = 0;
    pbVar23[0x42b229] = 0;
    pbVar23[0x42b22a] = 0;
    pbVar23[0x42b22b] = 0;
    pbVar23[0x42b22c] = 0;
    pbVar23[0x42b22d] = 0;
    pbVar23[0x42b22e] = 0;
    pbVar23[0x42b22f] = 0;
    pbVar23[0x42b240] = 0;
    pbVar23[0x42b241] = 0;
    pbVar23[0x42b242] = 0;
    pbVar23[0x42b243] = 0;
    pbVar23[0x42b244] = 0;
    pbVar23[0x42b245] = 0;
    pbVar23[0x42b246] = 0;
    pbVar23[0x42b247] = 0;
    pbVar23[0x42b238] = 0;
    pbVar23[0x42b239] = 0;
    pbVar23[0x42b23a] = 0;
    pbVar23[0x42b23b] = 0;
    pbVar23[0x42b23c] = 0;
    pbVar23[0x42b23d] = 0;
    pbVar23[0x42b23e] = 0;
    pbVar23[0x42b23f] = 0;
    pbVar23[0x42b210] = 0;
    pbVar23[0x42b211] = 0;
    pbVar23[0x42b212] = 0;
    pbVar23[0x42b213] = 0;
    pbVar23[0x42b214] = 0;
    pbVar23[0x42b215] = 0;
    pbVar23[0x42b216] = 0;
    pbVar23[0x42b217] = 0;
    pbVar23[0x42b208] = 0;
    pbVar23[0x42b209] = 0;
    pbVar23[0x42b20a] = 0;
    pbVar23[0x42b20b] = 0;
    pbVar23[0x42b20c] = 0;
    pbVar23[0x42b20d] = 0;
    pbVar23[0x42b20e] = 0;
    pbVar23[0x42b20f] = 0;
    pbVar23[0x42b220] = 0;
    pbVar23[0x42b221] = 0;
    pbVar23[0x42b222] = 0;
    pbVar23[0x42b223] = 0;
    pbVar23[0x42b224] = 0;
    pbVar23[0x42b225] = 0;
    pbVar23[0x42b226] = 0;
    pbVar23[0x42b227] = 0;
    pbVar23[0x42b218] = 0;
    pbVar23[0x42b219] = 0;
    pbVar23[0x42b21a] = 0;
    pbVar23[0x42b21b] = 0;
    pbVar23[0x42b21c] = 0;
    pbVar23[0x42b21d] = 0;
    pbVar23[0x42b21e] = 0;
    pbVar23[0x42b21f] = 0;
    pbVar23[0x42b1f0] = 0;
    pbVar23[0x42b1f1] = 0;
    pbVar23[0x42b1f2] = 0;
    pbVar23[0x42b1f3] = 0;
    pbVar23[0x42b1f4] = 0;
    pbVar23[0x42b1f5] = 0;
    pbVar23[0x42b1f6] = 0;
    pbVar23[0x42b1f7] = 0;
    pbVar23[0x42b1e8] = 0;
    pbVar23[0x42b1e9] = 0;
    pbVar23[0x42b1ea] = 0;
    pbVar23[0x42b1eb] = 0;
    pbVar23[0x42b1ec] = 0;
    pbVar23[0x42b1ed] = 0;
    pbVar23[0x42b1ee] = 0;
    pbVar23[0x42b1ef] = 0;
    pbVar23[0x42b200] = 0;
    pbVar23[0x42b201] = 0;
    pbVar23[0x42b202] = 0;
    pbVar23[0x42b203] = 0;
    pbVar23[0x42b204] = 0;
    pbVar23[0x42b205] = 0;
    pbVar23[0x42b206] = 0;
    pbVar23[0x42b207] = 0;
    pbVar23[0x42b1f8] = 0;
    pbVar23[0x42b1f9] = 0;
    pbVar23[0x42b1fa] = 0;
    pbVar23[0x42b1fb] = 0;
    pbVar23[0x42b1fc] = 0;
    pbVar23[0x42b1fd] = 0;
    pbVar23[0x42b1fe] = 0;
    pbVar23[0x42b1ff] = 0;
    pbVar23[0x42b3f0] = 0;
    pbVar23[0x42b3f1] = 0;
    pbVar23[0x42b3f2] = 0;
    pbVar23[0x42b3f3] = 0;
    pbVar23[0x42b3f4] = 0;
    pbVar23[0x42b3f5] = 0;
    pbVar23[0x42b3f6] = 0;
    pbVar23[0x42b3f7] = 0;
    pbVar23[0x42b3e8] = 0;
    pbVar23[0x42b3e9] = 0;
    pbVar23[0x42b3ea] = 0;
    pbVar23[0x42b3eb] = 0;
    pbVar23[0x42b3ec] = 0;
    pbVar23[0x42b3ed] = 0;
    pbVar23[0x42b3ee] = 0;
    pbVar23[0x42b3ef] = 0;
    pbVar23[0x42b3d4] = 0;
    pbVar23[0x42b3d5] = 0;
    pbVar23[0x42b3d6] = 0;
    pbVar23[0x42b3d7] = 0;
    pbVar23[0x42b3d8] = 0;
    pbVar23[0x42b3d9] = 0;
    pbVar23[0x42b3da] = 0;
    pbVar23[0x42b3db] = 0;
    pbVar23[0x42b3cc] = 0;
    pbVar23[0x42b3cd] = 0;
    pbVar23[0x42b3ce] = 0;
    pbVar23[0x42b3cf] = 0;
    pbVar23[0x42b3d0] = 0;
    pbVar23[0x42b3d1] = 0;
    pbVar23[0x42b3d2] = 0;
    pbVar23[0x42b3d3] = 0;
    pbVar23[0x42b3e4] = 0;
    pbVar23[0x42b3e5] = 0;
    pbVar23[0x42b3e6] = 0;
    pbVar23[0x42b3e7] = 0;
    pbVar23[0x42b3e8] = 0;
    pbVar23[0x42b3e9] = 0;
    pbVar23[0x42b3ea] = 0;
    pbVar23[0x42b3eb] = 0;
    pbVar23[0x42b3dc] = 0;
    pbVar23[0x42b3dd] = 0;
    pbVar23[0x42b3de] = 0;
    pbVar23[0x42b3df] = 0;
    pbVar23[0x42b3e0] = 0;
    pbVar23[0x42b3e1] = 0;
    pbVar23[0x42b3e2] = 0;
    pbVar23[0x42b3e3] = 0;
    pbVar23[0x42b3b4] = 0;
    pbVar23[0x42b3b5] = 0;
    pbVar23[0x42b3b6] = 0;
    pbVar23[0x42b3b7] = 0;
    pbVar23[0x42b3b8] = 0;
    pbVar23[0x42b3b9] = 0;
    pbVar23[0x42b3ba] = 0;
    pbVar23[0x42b3bb] = 0;
    pbVar23[0x42b3ac] = 0;
    pbVar23[0x42b3ad] = 0;
    pbVar23[0x42b3ae] = 0;
    pbVar23[0x42b3af] = 0;
    pbVar23[0x42b3b0] = 0;
    pbVar23[0x42b3b1] = 0;
    pbVar23[0x42b3b2] = 0;
    pbVar23[0x42b3b3] = 0;
    pbVar23[0x42b3c4] = 0;
    pbVar23[0x42b3c5] = 0;
    pbVar23[0x42b3c6] = 0;
    pbVar23[0x42b3c7] = 0;
    pbVar23[0x42b3c8] = 0;
    pbVar23[0x42b3c9] = 0;
    pbVar23[0x42b3ca] = 0;
    pbVar23[0x42b3cb] = 0;
    pbVar23[0x42b3bc] = 0;
    pbVar23[0x42b3bd] = 0;
    pbVar23[0x42b3be] = 0;
    pbVar23[0x42b3bf] = 0;
    pbVar23[0x42b3c0] = 0;
    pbVar23[0x42b3c1] = 0;
    pbVar23[0x42b3c2] = 0;
    pbVar23[0x42b3c3] = 0;
    pbVar23[0x42b394] = 0;
    pbVar23[0x42b395] = 0;
    pbVar23[0x42b396] = 0;
    pbVar23[0x42b397] = 0;
    pbVar23[0x42b398] = 0;
    pbVar23[0x42b399] = 0;
    pbVar23[0x42b39a] = 0;
    pbVar23[0x42b39b] = 0;
    pbVar23[0x42b38c] = 0;
    pbVar23[0x42b38d] = 0;
    pbVar23[0x42b38e] = 0;
    pbVar23[0x42b38f] = 0;
    pbVar23[0x42b390] = 0;
    pbVar23[0x42b391] = 0;
    pbVar23[0x42b392] = 0;
    pbVar23[0x42b393] = 0;
    pbVar23[0x42b3a4] = 0;
    pbVar23[0x42b3a5] = 0;
    pbVar23[0x42b3a6] = 0;
    pbVar23[0x42b3a7] = 0;
    pbVar23[0x42b3a8] = 0;
    pbVar23[0x42b3a9] = 0;
    pbVar23[0x42b3aa] = 0;
    pbVar23[0x42b3ab] = 0;
    pbVar23[0x42b39c] = 0;
    pbVar23[0x42b39d] = 0;
    pbVar23[0x42b39e] = 0;
    pbVar23[0x42b39f] = 0;
    pbVar23[0x42b3a0] = 0;
    pbVar23[0x42b3a1] = 0;
    pbVar23[0x42b3a2] = 0;
    pbVar23[0x42b3a3] = 0;
    pbVar23[0x42b384] = 0;
    pbVar23[0x42b385] = 0;
    pbVar23[0x42b386] = 0;
    pbVar23[0x42b387] = 0;
    pbVar23[0x42b388] = 0;
    pbVar23[0x42b389] = 0;
    pbVar23[0x42b38a] = 0;
    pbVar23[0x42b38b] = 0;
    pbVar23[0x42b37c] = 0;
    pbVar23[0x42b37d] = 0;
    pbVar23[0x42b37e] = 0;
    pbVar23[0x42b37f] = 0;
    pbVar23[0x42b380] = 0;
    pbVar23[0x42b381] = 0;
    pbVar23[0x42b382] = 0;
    pbVar23[0x42b383] = 0;
    _memset_pattern16(pbVar23 + 0x42b3fc,&UNK_10dfd94c0,0x7c);
    *(int *)pbVar21 = *(int *)pbVar23;
    pbVar21[4] = 1;
    pbVar21[5] = 0;
    pbVar21[6] = 0;
    pbVar21[7] = 0;
    pbVar21[8] = 0;
    pbVar21[9] = 0;
    pbVar21[10] = 0;
    pbVar21[0xb] = 0;
    pbVar45[0x4e4] = 0;
    pbVar45[0x4e5] = 0;
    pbVar45[0x4e6] = 0;
    pbVar45[0x4e7] = 0;
    *(undefined4 *)(lVar27 + 0x2d3b8) = 0;
    pbVar23[0x42c240] = 0;
    pbVar23[0x42c241] = 0;
    pbVar23[0x42c242] = 0;
    pbVar23[0x42c243] = 0;
    pbVar23[0x42c244] = 0;
    pbVar23[0x42c245] = 0;
    pbVar23[0x42c246] = 0;
    pbVar23[0x42c247] = 0;
    pbVar23[0x42c238] = 0;
    pbVar23[0x42c239] = 0;
    pbVar23[0x42c23a] = 0;
    pbVar23[0x42c23b] = 0;
    pbVar23[0x42c23c] = 0;
    pbVar23[0x42c23d] = 0;
    pbVar23[0x42c23e] = 0;
    pbVar23[0x42c23f] = 0;
    pbVar23[0x42c250] = 0;
    pbVar23[0x42c251] = 0;
    pbVar23[0x42c252] = 0;
    pbVar23[0x42c253] = 0;
    pbVar23[0x42c254] = 0;
    pbVar23[0x42c255] = 0;
    pbVar23[0x42c256] = 0;
    pbVar23[0x42c257] = 0;
    pbVar23[0x42c248] = 0;
    pbVar23[0x42c249] = 0;
    pbVar23[0x42c24a] = 0;
    pbVar23[0x42c24b] = 0;
    pbVar23[0x42c24c] = 0;
    pbVar23[0x42c24d] = 0;
    pbVar23[0x42c24e] = 0;
    pbVar23[0x42c24f] = 0;
    pbVar23[0x42c260] = 0;
    pbVar23[0x42c261] = 0;
    pbVar23[0x42c262] = 0;
    pbVar23[0x42c263] = 0;
    pbVar23[0x42c264] = 0;
    pbVar23[0x42c265] = 0;
    pbVar23[0x42c266] = 0;
    pbVar23[0x42c267] = 0;
    pbVar23[0x42c258] = 0;
    pbVar23[0x42c259] = 0;
    pbVar23[0x42c25a] = 0;
    pbVar23[0x42c25b] = 0;
    pbVar23[0x42c25c] = 0;
    pbVar23[0x42c25d] = 0;
    pbVar23[0x42c25e] = 0;
    pbVar23[0x42c25f] = 0;
    pbVar23[0x42c270] = 0;
    pbVar23[0x42c271] = 0;
    pbVar23[0x42c272] = 0;
    pbVar23[0x42c273] = 0;
    pbVar23[0x42c274] = 0;
    pbVar23[0x42c275] = 0;
    pbVar23[0x42c276] = 0;
    pbVar23[0x42c277] = 0;
    pbVar23[0x42c268] = 0;
    pbVar23[0x42c269] = 0;
    pbVar23[0x42c26a] = 0;
    pbVar23[0x42c26b] = 0;
    pbVar23[0x42c26c] = 0;
    pbVar23[0x42c26d] = 0;
    pbVar23[0x42c26e] = 0;
    pbVar23[0x42c26f] = 0;
    pbVar23[0x42c280] = 0;
    pbVar23[0x42c281] = 0;
    pbVar23[0x42c282] = 0;
    pbVar23[0x42c283] = 0;
    pbVar23[0x42c284] = 0;
    pbVar23[0x42c285] = 0;
    pbVar23[0x42c286] = 0;
    pbVar23[0x42c287] = 0;
    pbVar23[0x42c278] = 0;
    pbVar23[0x42c279] = 0;
    pbVar23[0x42c27a] = 0;
    pbVar23[0x42c27b] = 0;
    pbVar23[0x42c27c] = 0;
    pbVar23[0x42c27d] = 0;
    pbVar23[0x42c27e] = 0;
    pbVar23[0x42c27f] = 0;
    pbVar23[0x42c290] = 0;
    pbVar23[0x42c291] = 0;
    pbVar23[0x42c292] = 0;
    pbVar23[0x42c293] = 0;
    pbVar23[0x42c294] = 0;
    pbVar23[0x42c295] = 0;
    pbVar23[0x42c296] = 0;
    pbVar23[0x42c297] = 0;
    pbVar23[0x42c288] = 0;
    pbVar23[0x42c289] = 0;
    pbVar23[0x42c28a] = 0;
    pbVar23[0x42c28b] = 0;
    pbVar23[0x42c28c] = 0;
    pbVar23[0x42c28d] = 0;
    pbVar23[0x42c28e] = 0;
    pbVar23[0x42c28f] = 0;
    pbVar23[0x42c2a0] = 0;
    pbVar23[0x42c2a1] = 0;
    pbVar23[0x42c2a2] = 0;
    pbVar23[0x42c2a3] = 0;
    pbVar23[0x42c2a4] = 0;
    pbVar23[0x42c2a5] = 0;
    pbVar23[0x42c2a6] = 0;
    pbVar23[0x42c2a7] = 0;
    pbVar23[0x42c298] = 0;
    pbVar23[0x42c299] = 0;
    pbVar23[0x42c29a] = 0;
    pbVar23[0x42c29b] = 0;
    pbVar23[0x42c29c] = 0;
    pbVar23[0x42c29d] = 0;
    pbVar23[0x42c29e] = 0;
    pbVar23[0x42c29f] = 0;
    pbVar23[0x42c2b0] = 0;
    pbVar23[0x42c2b1] = 0;
    pbVar23[0x42c2b2] = 0;
    pbVar23[0x42c2b3] = 0;
    pbVar23[0x42c2b4] = 0;
    pbVar23[0x42c2b5] = 0;
    pbVar23[0x42c2b6] = 0;
    pbVar23[0x42c2b7] = 0;
    pbVar23[0x42c2a8] = 0;
    pbVar23[0x42c2a9] = 0;
    pbVar23[0x42c2aa] = 0;
    pbVar23[0x42c2ab] = 0;
    pbVar23[0x42c2ac] = 0;
    pbVar23[0x42c2ad] = 0;
    pbVar23[0x42c2ae] = 0;
    pbVar23[0x42c2af] = 0;
    pbVar23[0x42c2c0] = 0;
    pbVar23[0x42c2c1] = 0;
    pbVar23[0x42c2c2] = 0;
    pbVar23[0x42c2c3] = 0;
    pbVar23[0x42c2c4] = 0;
    pbVar23[0x42c2c5] = 0;
    pbVar23[0x42c2c6] = 0;
    pbVar23[0x42c2c7] = 0;
    pbVar23[0x42c2b8] = 0;
    pbVar23[0x42c2b9] = 0;
    pbVar23[0x42c2ba] = 0;
    pbVar23[0x42c2bb] = 0;
    pbVar23[0x42c2bc] = 0;
    pbVar23[0x42c2bd] = 0;
    pbVar23[0x42c2be] = 0;
    pbVar23[0x42c2bf] = 0;
    pbVar23[0x42c2d0] = 0;
    pbVar23[0x42c2d1] = 0;
    pbVar23[0x42c2d2] = 0;
    pbVar23[0x42c2d3] = 0;
    pbVar23[0x42c2d4] = 0;
    pbVar23[0x42c2d5] = 0;
    pbVar23[0x42c2d6] = 0;
    pbVar23[0x42c2d7] = 0;
    pbVar23[0x42c2c8] = 0;
    pbVar23[0x42c2c9] = 0;
    pbVar23[0x42c2ca] = 0;
    pbVar23[0x42c2cb] = 0;
    pbVar23[0x42c2cc] = 0;
    pbVar23[0x42c2cd] = 0;
    pbVar23[0x42c2ce] = 0;
    pbVar23[0x42c2cf] = 0;
    pbVar23[0x42c2e0] = 0;
    pbVar23[0x42c2e1] = 0;
    pbVar23[0x42c2e2] = 0;
    pbVar23[0x42c2e3] = 0;
    pbVar23[0x42c2e4] = 0;
    pbVar23[0x42c2e5] = 0;
    pbVar23[0x42c2e6] = 0;
    pbVar23[0x42c2e7] = 0;
    pbVar23[0x42c2d8] = 0;
    pbVar23[0x42c2d9] = 0;
    pbVar23[0x42c2da] = 0;
    pbVar23[0x42c2db] = 0;
    pbVar23[0x42c2dc] = 0;
    pbVar23[0x42c2dd] = 0;
    pbVar23[0x42c2de] = 0;
    pbVar23[0x42c2df] = 0;
    pbVar23[0x42c2f0] = 0;
    pbVar23[0x42c2f1] = 0;
    pbVar23[0x42c2f2] = 0;
    pbVar23[0x42c2f3] = 0;
    pbVar23[0x42c2f4] = 0;
    pbVar23[0x42c2f5] = 0;
    pbVar23[0x42c2f6] = 0;
    pbVar23[0x42c2f7] = 0;
    pbVar23[0x42c2e8] = 0;
    pbVar23[0x42c2e9] = 0;
    pbVar23[0x42c2ea] = 0;
    pbVar23[0x42c2eb] = 0;
    pbVar23[0x42c2ec] = 0;
    pbVar23[0x42c2ed] = 0;
    pbVar23[0x42c2ee] = 0;
    pbVar23[0x42c2ef] = 0;
    pbVar23[0x42c300] = 0;
    pbVar23[0x42c301] = 0;
    pbVar23[0x42c302] = 0;
    pbVar23[0x42c303] = 0;
    pbVar23[0x42c304] = 0;
    pbVar23[0x42c305] = 0;
    pbVar23[0x42c306] = 0;
    pbVar23[0x42c307] = 0;
    pbVar23[0x42c2f8] = 0;
    pbVar23[0x42c2f9] = 0;
    pbVar23[0x42c2fa] = 0;
    pbVar23[0x42c2fb] = 0;
    pbVar23[0x42c2fc] = 0;
    pbVar23[0x42c2fd] = 0;
    pbVar23[0x42c2fe] = 0;
    pbVar23[0x42c2ff] = 0;
    pbVar23[0x42c310] = 0;
    pbVar23[0x42c311] = 0;
    pbVar23[0x42c312] = 0;
    pbVar23[0x42c313] = 0;
    pbVar23[0x42c314] = 0;
    pbVar23[0x42c315] = 0;
    pbVar23[0x42c316] = 0;
    pbVar23[0x42c317] = 0;
    pbVar23[0x42c308] = 0;
    pbVar23[0x42c309] = 0;
    pbVar23[0x42c30a] = 0;
    pbVar23[0x42c30b] = 0;
    pbVar23[0x42c30c] = 0;
    pbVar23[0x42c30d] = 0;
    pbVar23[0x42c30e] = 0;
    pbVar23[0x42c30f] = 0;
    pbVar23[0x42c320] = 0;
    pbVar23[0x42c321] = 0;
    pbVar23[0x42c322] = 0;
    pbVar23[0x42c323] = 0;
    pbVar23[0x42c324] = 0;
    pbVar23[0x42c325] = 0;
    pbVar23[0x42c326] = 0;
    pbVar23[0x42c327] = 0;
    pbVar23[0x42c318] = 0;
    pbVar23[0x42c319] = 0;
    pbVar23[0x42c31a] = 0;
    pbVar23[0x42c31b] = 0;
    pbVar23[0x42c31c] = 0;
    pbVar23[0x42c31d] = 0;
    pbVar23[0x42c31e] = 0;
    pbVar23[0x42c31f] = 0;
    pbVar23[0x42c330] = 0;
    pbVar23[0x42c331] = 0;
    pbVar23[0x42c332] = 0;
    pbVar23[0x42c333] = 0;
    pbVar23[0x42c334] = 0;
    pbVar23[0x42c335] = 0;
    pbVar23[0x42c336] = 0;
    pbVar23[0x42c337] = 0;
    pbVar23[0x42c328] = 0;
    pbVar23[0x42c329] = 0;
    pbVar23[0x42c32a] = 0;
    pbVar23[0x42c32b] = 0;
    pbVar23[0x42c32c] = 0;
    pbVar23[0x42c32d] = 0;
    pbVar23[0x42c32e] = 0;
    pbVar23[0x42c32f] = 0;
    pbVar23[0x42c340] = 0;
    pbVar23[0x42c341] = 0;
    pbVar23[0x42c342] = 0;
    pbVar23[0x42c343] = 0;
    pbVar23[0x42c344] = 0;
    pbVar23[0x42c345] = 0;
    pbVar23[0x42c346] = 0;
    pbVar23[0x42c347] = 0;
    pbVar23[0x42c338] = 0;
    pbVar23[0x42c339] = 0;
    pbVar23[0x42c33a] = 0;
    pbVar23[0x42c33b] = 0;
    pbVar23[0x42c33c] = 0;
    pbVar23[0x42c33d] = 0;
    pbVar23[0x42c33e] = 0;
    pbVar23[0x42c33f] = 0;
    pbVar23[0x42c350] = 0;
    pbVar23[0x42c351] = 0;
    pbVar23[0x42c352] = 0;
    pbVar23[0x42c353] = 0;
    pbVar23[0x42c354] = 0;
    pbVar23[0x42c355] = 0;
    pbVar23[0x42c356] = 0;
    pbVar23[0x42c357] = 0;
    pbVar23[0x42c348] = 0;
    pbVar23[0x42c349] = 0;
    pbVar23[0x42c34a] = 0;
    pbVar23[0x42c34b] = 0;
    pbVar23[0x42c34c] = 0;
    pbVar23[0x42c34d] = 0;
    pbVar23[0x42c34e] = 0;
    pbVar23[0x42c34f] = 0;
    pbVar23[0x42c360] = 0;
    pbVar23[0x42c361] = 0;
    pbVar23[0x42c362] = 0;
    pbVar23[0x42c363] = 0;
    pbVar23[0x42c364] = 0;
    pbVar23[0x42c365] = 0;
    pbVar23[0x42c366] = 0;
    pbVar23[0x42c367] = 0;
    pbVar23[0x42c358] = 0;
    pbVar23[0x42c359] = 0;
    pbVar23[0x42c35a] = 0;
    pbVar23[0x42c35b] = 0;
    pbVar23[0x42c35c] = 0;
    pbVar23[0x42c35d] = 0;
    pbVar23[0x42c35e] = 0;
    pbVar23[0x42c35f] = 0;
    pbVar23[0x42c370] = 0;
    pbVar23[0x42c371] = 0;
    pbVar23[0x42c372] = 0;
    pbVar23[0x42c373] = 0;
    pbVar23[0x42c374] = 0;
    pbVar23[0x42c375] = 0;
    pbVar23[0x42c376] = 0;
    pbVar23[0x42c377] = 0;
    pbVar23[0x42c368] = 0;
    pbVar23[0x42c369] = 0;
    pbVar23[0x42c36a] = 0;
    pbVar23[0x42c36b] = 0;
    pbVar23[0x42c36c] = 0;
    pbVar23[0x42c36d] = 0;
    pbVar23[0x42c36e] = 0;
    pbVar23[0x42c36f] = 0;
    pbVar23[0x42c380] = 0;
    pbVar23[0x42c381] = 0;
    pbVar23[0x42c382] = 0;
    pbVar23[0x42c383] = 0;
    pbVar23[0x42c384] = 0;
    pbVar23[0x42c385] = 0;
    pbVar23[0x42c386] = 0;
    pbVar23[0x42c387] = 0;
    pbVar23[0x42c378] = 0;
    pbVar23[0x42c379] = 0;
    pbVar23[0x42c37a] = 0;
    pbVar23[0x42c37b] = 0;
    pbVar23[0x42c37c] = 0;
    pbVar23[0x42c37d] = 0;
    pbVar23[0x42c37e] = 0;
    pbVar23[0x42c37f] = 0;
    pbVar23[0x42c390] = 0;
    pbVar23[0x42c391] = 0;
    pbVar23[0x42c392] = 0;
    pbVar23[0x42c393] = 0;
    pbVar23[0x42c394] = 0;
    pbVar23[0x42c395] = 0;
    pbVar23[0x42c396] = 0;
    pbVar23[0x42c397] = 0;
    pbVar23[0x42c388] = 0;
    pbVar23[0x42c389] = 0;
    pbVar23[0x42c38a] = 0;
    pbVar23[0x42c38b] = 0;
    pbVar23[0x42c38c] = 0;
    pbVar23[0x42c38d] = 0;
    pbVar23[0x42c38e] = 0;
    pbVar23[0x42c38f] = 0;
    pbVar23[0x42c3a0] = 0;
    pbVar23[0x42c3a1] = 0;
    pbVar23[0x42c3a2] = 0;
    pbVar23[0x42c3a3] = 0;
    pbVar23[0x42c3a4] = 0;
    pbVar23[0x42c3a5] = 0;
    pbVar23[0x42c3a6] = 0;
    pbVar23[0x42c3a7] = 0;
    pbVar23[0x42c398] = 0;
    pbVar23[0x42c399] = 0;
    pbVar23[0x42c39a] = 0;
    pbVar23[0x42c39b] = 0;
    pbVar23[0x42c39c] = 0;
    pbVar23[0x42c39d] = 0;
    pbVar23[0x42c39e] = 0;
    pbVar23[0x42c39f] = 0;
    pbVar23[0x42c3b0] = 0;
    pbVar23[0x42c3b1] = 0;
    pbVar23[0x42c3b2] = 0;
    pbVar23[0x42c3b3] = 0;
    pbVar23[0x42c3b4] = 0;
    pbVar23[0x42c3b5] = 0;
    pbVar23[0x42c3b6] = 0;
    pbVar23[0x42c3b7] = 0;
    pbVar23[0x42c3a8] = 0;
    pbVar23[0x42c3a9] = 0;
    pbVar23[0x42c3aa] = 0;
    pbVar23[0x42c3ab] = 0;
    pbVar23[0x42c3ac] = 0;
    pbVar23[0x42c3ad] = 0;
    pbVar23[0x42c3ae] = 0;
    pbVar23[0x42c3af] = 0;
    pbVar23[0x42c3c0] = 0;
    pbVar23[0x42c3c1] = 0;
    pbVar23[0x42c3c2] = 0;
    pbVar23[0x42c3c3] = 0;
    pbVar23[0x42c3c4] = 0;
    pbVar23[0x42c3c5] = 0;
    pbVar23[0x42c3c6] = 0;
    pbVar23[0x42c3c7] = 0;
    pbVar23[0x42c3b8] = 0;
    pbVar23[0x42c3b9] = 0;
    pbVar23[0x42c3ba] = 0;
    pbVar23[0x42c3bb] = 0;
    pbVar23[0x42c3bc] = 0;
    pbVar23[0x42c3bd] = 0;
    pbVar23[0x42c3be] = 0;
    pbVar23[0x42c3bf] = 0;
    FUN_10967fa38(2);
    pbVar109 = pbStack_1120;
    pbVar44 = pbStack_1118;
    if ((*(byte *)(*(long *)(pbVar23 + 0x67d0) + 0x99) >> 3 & 1) == 0) {
      iVar101 = *(int *)pbVar23;
      pbStack_1118[0] = 0;
      pbStack_1118[1] = 0;
      pbStack_1118[2] = 0;
      pbStack_1118[3] = 0;
      *(int *)(pbStack_1118 + 4) = iVar101;
      pbStack_1118[0x18] = 0xff;
      pbStack_1118[0x19] = 0xff;
      pbStack_1118[0x1a] = 0xff;
      pbStack_1118[0x1b] = 0xff;
    }
  }
  else {
    _gettimeofday(&uStack_680,0);
    pbVar21 = pbStack_10f8;
    dRam000000011382a4f8 = (double)(uStack_680 * 1000 + (long)((int)uStack_678 / 1000));
    iVar101 = (int)pbVar23;
    pbStack_1150 = pbVar40;
    pbStack_1148 = pbVar39;
    if (*(int *)(pbVar109 + 4) == 0) {
      pbVar40 = *(byte **)(pbVar45 + 0x20);
      lVar27 = *(long *)pbVar45;
      iVar104 = 0x10;
      uVar56 = 0x20;
      uVar61 = 0x7b;
      uVar66 = 0xb7;
      uVar67 = 0x48;
      pbVar39 = pbStack_1110;
      do {
        if ((*(int *)(pbVar39 + 4) != 0) &&
           (fVar82 = *(float *)(lVar27 + 0x24) - *(float *)(pbVar39 + 0x24),
           fVar105 = (float)*(undefined8 *)(lVar27 + 0x1c) - (float)*(undefined8 *)(pbVar39 + 0x1c),
           fVar94 = (float)((ulong)*(undefined8 *)(lVar27 + 0x1c) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(pbVar39 + 0x1c) >> 0x20),
           fVar82 = SQRT(fVar105 * fVar105 + fVar94 * fVar94 + fVar82 * fVar82),
           fVar82 < (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar61,uVar56))))) {
          uVar56 = SUB41(fVar82,0);
          uVar61 = (undefined1)((uint)fVar82 >> 8);
          uVar66 = (undefined1)((uint)fVar82 >> 0x10);
          uVar67 = (undefined1)((uint)fVar82 >> 0x18);
          pbVar40 = pbVar39;
        }
        pbVar39 = pbVar39 + 0x2d520;
        iVar104 = iVar104 + -1;
      } while (iVar104 != 0);
      *(byte **)(pbVar45 + 0x18) = pbVar40;
      pbStack_1168 = pbVar45 + 0x3c8;
      pbVar45[0x3c8] = 100;
      pbVar45[0x3c9] = 0;
      pbVar45[0x3ca] = 0;
      pbVar45[0x3cb] = 0;
      pbVar45[0x448] = 100;
      pbVar45[0x449] = 0;
      pbVar45[0x44a] = 0;
      pbVar45[1099] = 0;
      pbStack_1170 = pbVar23 + 0x42b058;
      pbStack_1178 = pbVar23 + 0x42b1e8;
      pbVar23[0x42b060] = 0;
      pbVar23[0x42b061] = 0;
      pbVar23[0x42b062] = 0;
      pbVar23[0x42b063] = 0;
      pbVar23[0x42b064] = 0;
      pbVar23[0x42b065] = 0;
      pbVar23[0x42b066] = 0;
      pbVar23[0x42b067] = 0;
      pbStack_1170[0] = 0;
      pbStack_1170[1] = 0;
      pbStack_1170[2] = 0;
      pbStack_1170[3] = 0;
      pbStack_1170[4] = 0;
      pbStack_1170[5] = 0;
      pbStack_1170[6] = 0;
      pbStack_1170[7] = 0;
      pbVar23[0x42b070] = 0;
      pbVar23[0x42b071] = 0;
      pbVar23[0x42b072] = 0;
      pbVar23[0x42b073] = 0;
      pbVar23[0x42b074] = 0;
      pbVar23[0x42b075] = 0;
      pbVar23[0x42b076] = 0;
      pbVar23[0x42b077] = 0;
      pbVar23[0x42b068] = 0;
      pbVar23[0x42b069] = 0;
      pbVar23[0x42b06a] = 0;
      pbVar23[0x42b06b] = 0;
      pbVar23[0x42b06c] = 0;
      pbVar23[0x42b06d] = 0;
      pbVar23[0x42b06e] = 0;
      pbVar23[0x42b06f] = 0;
      pbVar23[0x42b080] = 0;
      pbVar23[0x42b081] = 0;
      pbVar23[0x42b082] = 0;
      pbVar23[0x42b083] = 0;
      pbVar23[0x42b084] = 0;
      pbVar23[0x42b085] = 0;
      pbVar23[0x42b086] = 0;
      pbVar23[0x42b087] = 0;
      pbVar23[0x42b078] = 0;
      pbVar23[0x42b079] = 0;
      pbVar23[0x42b07a] = 0;
      pbVar23[0x42b07b] = 0;
      pbVar23[0x42b07c] = 0;
      pbVar23[0x42b07d] = 0;
      pbVar23[0x42b07e] = 0;
      pbVar23[0x42b07f] = 0;
      pbVar23[0x42b090] = 0;
      pbVar23[0x42b091] = 0;
      pbVar23[0x42b092] = 0;
      pbVar23[0x42b093] = 0;
      pbVar23[0x42b094] = 0;
      pbVar23[0x42b095] = 0;
      pbVar23[0x42b096] = 0;
      pbVar23[0x42b097] = 0;
      pbVar23[0x42b088] = 0;
      pbVar23[0x42b089] = 0;
      pbVar23[0x42b08a] = 0;
      pbVar23[0x42b08b] = 0;
      pbVar23[0x42b08c] = 0;
      pbVar23[0x42b08d] = 0;
      pbVar23[0x42b08e] = 0;
      pbVar23[0x42b08f] = 0;
      pbVar23[0x42b0a0] = 0;
      pbVar23[0x42b0a1] = 0;
      pbVar23[0x42b0a2] = 0;
      pbVar23[0x42b0a3] = 0;
      pbVar23[0x42b0a4] = 0;
      pbVar23[0x42b0a5] = 0;
      pbVar23[0x42b0a6] = 0;
      pbVar23[0x42b0a7] = 0;
      pbVar23[0x42b098] = 0;
      pbVar23[0x42b099] = 0;
      pbVar23[0x42b09a] = 0;
      pbVar23[0x42b09b] = 0;
      pbVar23[0x42b09c] = 0;
      pbVar23[0x42b09d] = 0;
      pbVar23[0x42b09e] = 0;
      pbVar23[0x42b09f] = 0;
      pbVar23[0x42b0b0] = 0;
      pbVar23[0x42b0b1] = 0;
      pbVar23[0x42b0b2] = 0;
      pbVar23[0x42b0b3] = 0;
      pbVar23[0x42b0b4] = 0;
      pbVar23[0x42b0b5] = 0;
      pbVar23[0x42b0b6] = 0;
      pbVar23[0x42b0b7] = 0;
      pbVar23[0x42b0a8] = 0;
      pbVar23[0x42b0a9] = 0;
      pbVar23[0x42b0aa] = 0;
      pbVar23[0x42b0ab] = 0;
      pbVar23[0x42b0ac] = 0;
      pbVar23[0x42b0ad] = 0;
      pbVar23[0x42b0ae] = 0;
      pbVar23[0x42b0af] = 0;
      pbVar23[0x42b0c0] = 0;
      pbVar23[0x42b0c1] = 0;
      pbVar23[0x42b0c2] = 0;
      pbVar23[0x42b0c3] = 0;
      pbVar23[0x42b0c4] = 0;
      pbVar23[0x42b0c5] = 0;
      pbVar23[0x42b0c6] = 0;
      pbVar23[0x42b0c7] = 0;
      pbVar23[0x42b0b8] = 0;
      pbVar23[0x42b0b9] = 0;
      pbVar23[0x42b0ba] = 0;
      pbVar23[0x42b0bb] = 0;
      pbVar23[0x42b0bc] = 0;
      pbVar23[0x42b0bd] = 0;
      pbVar23[0x42b0be] = 0;
      pbVar23[0x42b0bf] = 0;
      pbVar23[0x42b0d0] = 0;
      pbVar23[0x42b0d1] = 0;
      pbVar23[0x42b0d2] = 0;
      pbVar23[0x42b0d3] = 0;
      pbVar23[0x42b0d4] = 0;
      pbVar23[0x42b0d5] = 0;
      pbVar23[0x42b0d6] = 0;
      pbVar23[0x42b0d7] = 0;
      pbVar23[0x42b0c8] = 0;
      pbVar23[0x42b0c9] = 0;
      pbVar23[0x42b0ca] = 0;
      pbVar23[0x42b0cb] = 0;
      pbVar23[0x42b0cc] = 0;
      pbVar23[0x42b0cd] = 0;
      pbVar23[0x42b0ce] = 0;
      pbVar23[0x42b0cf] = 0;
      pbVar23[0x42b1f0] = 0;
      pbVar23[0x42b1f1] = 0;
      pbVar23[0x42b1f2] = 0;
      pbVar23[0x42b1f3] = 0;
      pbVar23[0x42b1f4] = 0;
      pbVar23[0x42b1f5] = 0;
      pbVar23[0x42b1f6] = 0;
      pbVar23[0x42b1f7] = 0;
      pbStack_1178[0] = 0;
      pbStack_1178[1] = 0;
      pbStack_1178[2] = 0;
      pbStack_1178[3] = 0;
      pbStack_1178[4] = 0;
      pbStack_1178[5] = 0;
      pbStack_1178[6] = 0;
      pbStack_1178[7] = 0;
      pbVar23[0x42b200] = 0;
      pbVar23[0x42b201] = 0;
      pbVar23[0x42b202] = 0;
      pbVar23[0x42b203] = 0;
      pbVar23[0x42b204] = 0;
      pbVar23[0x42b205] = 0;
      pbVar23[0x42b206] = 0;
      pbVar23[0x42b207] = 0;
      pbVar23[0x42b1f8] = 0;
      pbVar23[0x42b1f9] = 0;
      pbVar23[0x42b1fa] = 0;
      pbVar23[0x42b1fb] = 0;
      pbVar23[0x42b1fc] = 0;
      pbVar23[0x42b1fd] = 0;
      pbVar23[0x42b1fe] = 0;
      pbVar23[0x42b1ff] = 0;
      pbVar23[0x42b210] = 0;
      pbVar23[0x42b211] = 0;
      pbVar23[0x42b212] = 0;
      pbVar23[0x42b213] = 0;
      pbVar23[0x42b214] = 0;
      pbVar23[0x42b215] = 0;
      pbVar23[0x42b216] = 0;
      pbVar23[0x42b217] = 0;
      pbVar23[0x42b208] = 0;
      pbVar23[0x42b209] = 0;
      pbVar23[0x42b20a] = 0;
      pbVar23[0x42b20b] = 0;
      pbVar23[0x42b20c] = 0;
      pbVar23[0x42b20d] = 0;
      pbVar23[0x42b20e] = 0;
      pbVar23[0x42b20f] = 0;
      pbVar23[0x42b220] = 0;
      pbVar23[0x42b221] = 0;
      pbVar23[0x42b222] = 0;
      pbVar23[0x42b223] = 0;
      pbVar23[0x42b224] = 0;
      pbVar23[0x42b225] = 0;
      pbVar23[0x42b226] = 0;
      pbVar23[0x42b227] = 0;
      pbVar23[0x42b218] = 0;
      pbVar23[0x42b219] = 0;
      pbVar23[0x42b21a] = 0;
      pbVar23[0x42b21b] = 0;
      pbVar23[0x42b21c] = 0;
      pbVar23[0x42b21d] = 0;
      pbVar23[0x42b21e] = 0;
      pbVar23[0x42b21f] = 0;
      pbVar23[0x42b230] = 0;
      pbVar23[0x42b231] = 0;
      pbVar23[0x42b232] = 0;
      pbVar23[0x42b233] = 0;
      pbVar23[0x42b234] = 0;
      pbVar23[0x42b235] = 0;
      pbVar23[0x42b236] = 0;
      pbVar23[0x42b237] = 0;
      pbVar23[0x42b228] = 0;
      pbVar23[0x42b229] = 0;
      pbVar23[0x42b22a] = 0;
      pbVar23[0x42b22b] = 0;
      pbVar23[0x42b22c] = 0;
      pbVar23[0x42b22d] = 0;
      pbVar23[0x42b22e] = 0;
      pbVar23[0x42b22f] = 0;
      pbVar23[0x42b240] = 0;
      pbVar23[0x42b241] = 0;
      pbVar23[0x42b242] = 0;
      pbVar23[0x42b243] = 0;
      pbVar23[0x42b244] = 0;
      pbVar23[0x42b245] = 0;
      pbVar23[0x42b246] = 0;
      pbVar23[0x42b247] = 0;
      pbVar23[0x42b238] = 0;
      pbVar23[0x42b239] = 0;
      pbVar23[0x42b23a] = 0;
      pbVar23[0x42b23b] = 0;
      pbVar23[0x42b23c] = 0;
      pbVar23[0x42b23d] = 0;
      pbVar23[0x42b23e] = 0;
      pbVar23[0x42b23f] = 0;
      pbVar23[0x42b250] = 0;
      pbVar23[0x42b251] = 0;
      pbVar23[0x42b252] = 0;
      pbVar23[0x42b253] = 0;
      pbVar23[0x42b254] = 0;
      pbVar23[0x42b255] = 0;
      pbVar23[0x42b256] = 0;
      pbVar23[0x42b257] = 0;
      pbVar23[0x42b248] = 0;
      pbVar23[0x42b249] = 0;
      pbVar23[0x42b24a] = 0;
      pbVar23[0x42b24b] = 0;
      pbVar23[0x42b24c] = 0;
      pbVar23[0x42b24d] = 0;
      pbVar23[0x42b24e] = 0;
      pbVar23[0x42b24f] = 0;
      pbVar23[0x42b260] = 0;
      pbVar23[0x42b261] = 0;
      pbVar23[0x42b262] = 0;
      pbVar23[0x42b263] = 0;
      pbVar23[0x42b264] = 0;
      pbVar23[0x42b265] = 0;
      pbVar23[0x42b266] = 0;
      pbVar23[0x42b267] = 0;
      pbVar23[0x42b258] = 0;
      pbVar23[0x42b259] = 0;
      pbVar23[0x42b25a] = 0;
      pbVar23[0x42b25b] = 0;
      pbVar23[0x42b25c] = 0;
      pbVar23[0x42b25d] = 0;
      pbVar23[0x42b25e] = 0;
      pbVar23[0x42b25f] = 0;
      pbVar23[0x42b3f0] = 0;
      pbVar23[0x42b3f1] = 0;
      pbVar23[0x42b3f2] = 0;
      pbVar23[0x42b3f3] = 0;
      pbVar23[0x42b3f4] = 0;
      pbVar23[0x42b3f5] = 0;
      pbVar23[0x42b3f6] = 0;
      pbVar23[0x42b3f7] = 0;
      pbVar23[0x42b3e8] = 0;
      pbVar23[0x42b3e9] = 0;
      pbVar23[0x42b3ea] = 0;
      pbVar23[0x42b3eb] = 0;
      pbVar23[0x42b3ec] = 0;
      pbVar23[0x42b3ed] = 0;
      pbVar23[0x42b3ee] = 0;
      pbVar23[0x42b3ef] = 0;
      pbVar23[0x42b3d4] = 0;
      pbVar23[0x42b3d5] = 0;
      pbVar23[0x42b3d6] = 0;
      pbVar23[0x42b3d7] = 0;
      pbVar23[0x42b3d8] = 0;
      pbVar23[0x42b3d9] = 0;
      pbVar23[0x42b3da] = 0;
      pbVar23[0x42b3db] = 0;
      pbVar23[0x42b3cc] = 0;
      pbVar23[0x42b3cd] = 0;
      pbVar23[0x42b3ce] = 0;
      pbVar23[0x42b3cf] = 0;
      pbVar23[0x42b3d0] = 0;
      pbVar23[0x42b3d1] = 0;
      pbVar23[0x42b3d2] = 0;
      pbVar23[0x42b3d3] = 0;
      pbVar23[0x42b3e4] = 0;
      pbVar23[0x42b3e5] = 0;
      pbVar23[0x42b3e6] = 0;
      pbVar23[0x42b3e7] = 0;
      pbVar23[0x42b3e8] = 0;
      pbVar23[0x42b3e9] = 0;
      pbVar23[0x42b3ea] = 0;
      pbVar23[0x42b3eb] = 0;
      pbVar23[0x42b3dc] = 0;
      pbVar23[0x42b3dd] = 0;
      pbVar23[0x42b3de] = 0;
      pbVar23[0x42b3df] = 0;
      pbVar23[0x42b3e0] = 0;
      pbVar23[0x42b3e1] = 0;
      pbVar23[0x42b3e2] = 0;
      pbVar23[0x42b3e3] = 0;
      pbVar23[0x42b3b4] = 0;
      pbVar23[0x42b3b5] = 0;
      pbVar23[0x42b3b6] = 0;
      pbVar23[0x42b3b7] = 0;
      pbVar23[0x42b3b8] = 0;
      pbVar23[0x42b3b9] = 0;
      pbVar23[0x42b3ba] = 0;
      pbVar23[0x42b3bb] = 0;
      pbVar23[0x42b3ac] = 0;
      pbVar23[0x42b3ad] = 0;
      pbVar23[0x42b3ae] = 0;
      pbVar23[0x42b3af] = 0;
      pbVar23[0x42b3b0] = 0;
      pbVar23[0x42b3b1] = 0;
      pbVar23[0x42b3b2] = 0;
      pbVar23[0x42b3b3] = 0;
      pbVar23[0x42b3c4] = 0;
      pbVar23[0x42b3c5] = 0;
      pbVar23[0x42b3c6] = 0;
      pbVar23[0x42b3c7] = 0;
      pbVar23[0x42b3c8] = 0;
      pbVar23[0x42b3c9] = 0;
      pbVar23[0x42b3ca] = 0;
      pbVar23[0x42b3cb] = 0;
      pbVar23[0x42b3bc] = 0;
      pbVar23[0x42b3bd] = 0;
      pbVar23[0x42b3be] = 0;
      pbVar23[0x42b3bf] = 0;
      pbVar23[0x42b3c0] = 0;
      pbVar23[0x42b3c1] = 0;
      pbVar23[0x42b3c2] = 0;
      pbVar23[0x42b3c3] = 0;
      pbVar23[0x42b394] = 0;
      pbVar23[0x42b395] = 0;
      pbVar23[0x42b396] = 0;
      pbVar23[0x42b397] = 0;
      pbVar23[0x42b398] = 0;
      pbVar23[0x42b399] = 0;
      pbVar23[0x42b39a] = 0;
      pbVar23[0x42b39b] = 0;
      pbVar23[0x42b38c] = 0;
      pbVar23[0x42b38d] = 0;
      pbVar23[0x42b38e] = 0;
      pbVar23[0x42b38f] = 0;
      pbVar23[0x42b390] = 0;
      pbVar23[0x42b391] = 0;
      pbVar23[0x42b392] = 0;
      pbVar23[0x42b393] = 0;
      pbVar23[0x42b3a4] = 0;
      pbVar23[0x42b3a5] = 0;
      pbVar23[0x42b3a6] = 0;
      pbVar23[0x42b3a7] = 0;
      pbVar23[0x42b3a8] = 0;
      pbVar23[0x42b3a9] = 0;
      pbVar23[0x42b3aa] = 0;
      pbVar23[0x42b3ab] = 0;
      pbVar23[0x42b39c] = 0;
      pbVar23[0x42b39d] = 0;
      pbVar23[0x42b39e] = 0;
      pbVar23[0x42b39f] = 0;
      pbVar23[0x42b3a0] = 0;
      pbVar23[0x42b3a1] = 0;
      pbVar23[0x42b3a2] = 0;
      pbVar23[0x42b3a3] = 0;
      pbVar23[0x42b384] = 0;
      pbVar23[0x42b385] = 0;
      pbVar23[0x42b386] = 0;
      pbVar23[0x42b387] = 0;
      pbVar23[0x42b388] = 0;
      pbVar23[0x42b389] = 0;
      pbVar23[0x42b38a] = 0;
      pbVar23[0x42b38b] = 0;
      pbVar23[0x42b37c] = 0;
      pbVar23[0x42b37d] = 0;
      pbVar23[0x42b37e] = 0;
      pbVar23[0x42b37f] = 0;
      pbVar23[0x42b380] = 0;
      pbVar23[0x42b381] = 0;
      pbVar23[0x42b382] = 0;
      pbVar23[0x42b383] = 0;
      piStack_1158 = piVar17;
      _memset_pattern16(pbVar23 + 0x42b3fc,&UNK_10dfd94c0,0x7c);
      lVar19 = *(long *)(pbVar45 + 0x28);
      uVar87 = *(undefined8 *)(pbVar21 + 0xc);
      iVar104 = (int)((long)uVar87 >> 0x21);
      uStack_690 = NEON_scvtf(CONCAT17((char)((long)uVar87 >> 0x39),
                                       CONCAT16((char)((uint)iVar104 >> 0x10),
                                                CONCAT15((char)((uint)iVar104 >> 8),
                                                         CONCAT14((char)iVar104,
                                                                  CONCAT13((char)((ulong)uVar87 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar87 >> 1))
                                                                 )))),4);
      uStack_688 = 1;
      pbStack_1140 = pbVar40;
      FUN_10967e808(pbVar23,&uStack_690,pbVar40 + 0x50,1,auStack_6a0);
      FUN_10967e808(pbVar23,&uStack_690,lVar27 + 0x50,1,auStack_6ac);
      FUN_10967e808(pbVar23,auStack_6a0,pbStack_1140 + 0x98,1,auStack_6a0);
      FUN_10967e808(pbVar23,auStack_6ac,lVar27 + 0x98,1,auStack_6ac);
      pbVar39 = pbStack_1140;
      uStack_180 = 0x3f800000;
      uStack_198 = uStack_1128;
      lStack_1a0 = (long)dStack_1130;
      uStack_188 = uStack_1128;
      lStack_190 = (long)dStack_1130;
      *(undefined4 *)(lVar27 + 0x2d3e0) = 0x3f800000;
      *(undefined8 *)(lVar27 + 0x2d3c8) = uStack_1128;
      *(double *)(lVar27 + 0x2d3c0) = dStack_1130;
      *(undefined8 *)(lVar27 + 0x2d3d8) = uStack_1128;
      *(double *)(lVar27 + 0x2d3d0) = dStack_1130;
      uVar87 = *(undefined8 *)(pbVar21 + 0xc);
      iVar104 = (int)((long)uVar87 >> 0x21);
      uVar87 = NEON_scvtf(CONCAT17((char)((long)uVar87 >> 0x39),
                                   CONCAT16((char)((uint)iVar104 >> 0x10),
                                            CONCAT15((char)((uint)iVar104 >> 8),
                                                     CONCAT14((char)iVar104,
                                                              CONCAT13((char)((ulong)uVar87 >> 0x18)
                                                                       >> 1,(int3)((int)uVar87 >> 1)
                                                                      ))))),4);
      iVar104 = (int)(float)((ulong)uVar87 >> 0x20);
      fVar82 = (float)(int)(float)uVar87;
      fVar105 = (float)iVar104;
      uStack_680 = CONCAT44(fVar105,fVar82);
      iVar104 = iVar104 + 100;
      uVar71 = (undefined1)iVar104;
      uVar74 = (undefined1)((uint)iVar104 >> 8);
      uVar77 = (undefined1)((uint)iVar104 >> 0x10);
      cVar81 = (char)((uint)iVar104 >> 0x18);
      uVar87 = NEON_scvtf(CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,(int)(
                                                  float)uVar87 + 100)))),4);
      fStack_65c = (float)uVar87;
      uStack_678 = CONCAT44(fStack_65c,1);
      uStack_670 = CONCAT44(1,fVar105);
      fStack_658 = (float)((ulong)uVar87 >> 0x20);
      uStack_668 = CONCAT44(fStack_658,fVar82);
      uStack_660 = 1;
      uStack_654 = 1;
      dStack_1130 = (double)lVar27;
      FUN_10967e938(pbVar23,&uStack_680,pbStack_1140 + 0x1c,&lStack_1a0,lVar27 + 0x1c,4,&fStack_168)
      ;
      FUN_10967ed94(&uStack_680,&fStack_168,0,1,2,3,lVar19 + 0x2d390);
      lVar27 = 0x130;
      do {
        FUN_10967e7a0(pbVar39 + lVar27,lVar19 + 0x2d390,lVar19 + lVar27);
        lVar27 = lVar27 + 0xc;
      } while (lVar27 != 0x5e0);
      FUN_1096766e4(pbVar39,lVar19,&uStack_680,&fStack_168);
      FUN_10967dbec(lVar19);
      iVar107 = 0;
      iVar35 = 0;
      uVar87 = *(undefined8 *)(lVar19 + 0xd8);
      iVar36 = *(int *)(lVar19 + 0xd0);
      iVar2 = *(int *)(lVar19 + 0xd4);
      dStack_1160 = *(double *)((long)dStack_1130 + 0xd8);
      iVar104 = -2;
      fVar82 = 0.0;
      do {
        iVar38 = -2;
        iVar47 = -10;
        iVar46 = iVar107;
        do {
          fStack_6cc = (float)iVar2 / 2.0 + (float)iVar47;
          uVar56 = SUB41(fStack_6cc,0);
          uVar61 = (undefined1)((uint)fStack_6cc >> 8);
          uVar66 = (undefined1)((uint)fStack_6cc >> 0x10);
          cVar68 = (char)((uint)fStack_6cc >> 0x18);
          uStack_6c8 = 1;
          fStack_6d0 = (float)iVar36 / 2.0 + (float)(iVar104 * 5);
          FUN_109674a04(pbVar23,uVar87,&fStack_6d0,iVar36,iVar2,5);
          bVar13 = (float)CONCAT13(cVar68,CONCAT12(uVar66,CONCAT11(uVar61,uVar56))) == fVar82;
          bVar14 = (float)CONCAT13(cVar68,CONCAT12(uVar66,CONCAT11(uVar61,uVar56))) < fVar82;
          iVar107 = iVar104;
          iVar12 = iVar38;
          if (bVar13 || bVar14) {
            iVar107 = iVar46;
            iVar12 = iVar35;
          }
          iVar35 = iVar12;
          fVar105 = (float)CONCAT13(cVar68,CONCAT12(uVar66,CONCAT11(uVar61,uVar56)));
          if (bVar13 || bVar14) {
            fVar105 = fVar82;
          }
          fVar82 = fVar105;
          iVar38 = iVar38 + 1;
          iVar47 = iVar47 + 5;
          iVar46 = iVar107;
        } while (iVar47 != 0xf);
        iVar104 = iVar104 + 1;
      } while (iVar104 != 3);
      fVar82 = (float)iVar36 / 2.0 + (float)(iVar107 * 5);
      fVar94 = (float)iVar2 / 2.0 + (float)(iVar35 * 5);
      uStack_6bc = 1;
      uStack_11a0 = 5;
      fStack_6c4 = fVar82;
      fStack_6c0 = fVar94;
      FUN_109674a94(pbVar23,uVar87,&fStack_6c4,dStack_1160,iVar36,iVar2,&fStack_6c4,auStack_6b8);
      fVar105 = fVar82 * 4.0 + 3.5;
      fVar94 = fVar94 * 4.0 + 3.5;
      uVar87 = NEON_fmov(0x40800000,4);
      uVar90 = NEON_fmov(0x40600000,4);
      uStack_6e8 = CONCAT44((float)((ulong)uVar90 >> 0x20) +
                            (float)((ulong)uVar87 >> 0x20) * auStack_6b8._4_4_,
                            (float)uVar90 + (float)uVar87 * auStack_6b8._0_4_);
      uStack_6e0 = ~uStack_6b0 >> 0x1f;
      FUN_10967ed94(&fStack_168,&uStack_680,0,1,2,3,&uStack_730);
      pbVar21 = pbStack_1140;
      fVar82 = fStack_710 + fVar94 * uStack_718._4_4_ + (float)uStack_718 * fVar105;
      fStack_6dc = 8388608.0;
      if (fVar82 != 0.0) {
        fStack_6dc = 1.0 / fVar82;
      }
      fStack_6d8 = (uStack_720._4_4_ + fVar94 * (float)uStack_720 + uStack_728._4_4_ * fVar105) *
                   fStack_6dc;
      uStack_6d4 = 1;
      fStack_6dc = ((float)uStack_728 + fVar94 * uStack_730._4_4_ + (float)uStack_730 * fVar105) *
                   fStack_6dc;
      FUN_10967e808(pbVar23,&fStack_6dc,pbStack_1140 + 0x50,1,&fStack_6f4);
      dVar110 = dStack_1130;
      FUN_10967e808(pbVar23,&uStack_6e8,(long)dStack_1130 + 0x50,1,&fStack_700);
      FUN_10967e808(pbVar23,&fStack_6f4,pbVar21 + 0x98,1,&fStack_6f4);
      FUN_10967e808(pbVar23,&fStack_700,(long)dVar110 + 0x98,1,&fStack_700);
      lStack_1d0 = 0x3f800000;
      afStack_1c8[1] = 0.0;
      afStack_1c8[2] = 1.0;
      uStack_1b8 = 0;
      uStack_1b0 = 0x3f800000;
      afStack_1c8[0] = (fStack_700 - fStack_6f4) / *(float *)((long)dVar110 + 0x28);
      afStack_1c8[3] = (fStack_6fc - fStack_6f0) / *(float *)((long)dVar110 + 0x28);
      _bzero(pbVar23 + 0x42bd88,0x4b0);
      FUN_10967e938(pbVar23,pbVar21 + 0x130,pbVar21 + 0x1c,&lStack_1d0,(long)dVar110 + 0x1c,100,
                    pbVar23 + 0x42bd88);
      pbVar45 = pbStack_10e8;
      iVar101 = iVar101 + 0x124fd8;
      FUN_10967df78();
      lVar27 = *(long *)pbVar45;
      *(int *)(lVar27 + 0xc) = iVar101;
      FUN_109676f64(pbVar23,pbVar21,lVar27,lVar27 + 0x10,&uStack_680,0);
      pbVar21 = pbStack_10e0;
      pbVar44 = pbStack_1118;
      pbVar109 = pbStack_1120;
      pbVar39 = pbStack_1148;
      pbVar40 = pbStack_1150;
      piVar17 = piStack_1158;
      lVar27 = *(long *)pbVar45;
      pbVar45[0x4d0] = 0;
      pbVar45[0x4d1] = 0;
      pbVar45[0x4d2] = 0;
      pbVar45[0x4d3] = 0;
      if (*(int *)(lVar27 + 0x10) < 0x15) {
        pbStack_10e0[0x10] = 0;
        pbStack_10e0[0x11] = 0;
        pbStack_10e0[0x12] = 0;
        pbStack_10e0[0x13] = 0;
      }
      else {
        iVar101 = *(int *)(pbStack_10e0 + 0x10);
        *(int *)(pbStack_10e0 + 0x10) = iVar101 + 1;
        if (2 < iVar101) {
          iVar101 = *(int *)pbStack_1140;
          pbVar30 = pbStack_10f0 + 0xc;
          iVar104 = 0x10;
          do {
            if (iVar101 < *(int *)(pbVar30 + -4)) {
              pbVar30[0] = 0;
              pbVar30[1] = 0;
              pbVar30[2] = 0;
              pbVar30[3] = 0;
            }
            pbVar30 = pbVar30 + 0x2d520;
            iVar104 = iVar104 + -1;
          } while (iVar104 != 0);
          lVar19 = 0;
          *(int *)pbStack_10e0 = *(int *)pbVar23;
          pbStack_10e0[0x10] = 0;
          pbStack_10e0[0x11] = 0;
          pbStack_10e0[0x12] = 0;
          pbStack_10e0[0x13] = 0;
          pbStack_10e0[0x14] = 0;
          pbStack_10e0[0x15] = 0;
          pbStack_10e0[0x16] = 0;
          pbStack_10e0[0x17] = 0;
          pbStack_10e0[0x18] = 0;
          pbStack_10e0[0x19] = 0;
          pbStack_10e0[0x1a] = 0;
          pbStack_10e0[0x1b] = 0;
          *(long *)(pbVar45 + 0x10) = lVar27;
          pbStack_1168[8] = 0;
          pbStack_1168[9] = 0;
          pbStack_1168[10] = 0;
          pbStack_1168[0xb] = 0;
          pbStack_1168[0xc] = 0;
          pbStack_1168[0xd] = 0;
          pbStack_1168[0xe] = 0;
          pbStack_1168[0xf] = 0;
          pbStack_1168[0] = 0;
          pbStack_1168[1] = 0;
          pbStack_1168[2] = 0;
          pbStack_1168[3] = 0;
          pbStack_1168[4] = 0;
          pbStack_1168[5] = 0;
          pbStack_1168[6] = 0;
          pbStack_1168[7] = 0;
          pbStack_1168[0x18] = 0;
          pbStack_1168[0x19] = 0;
          pbStack_1168[0x1a] = 0;
          pbStack_1168[0x1b] = 0;
          pbStack_1168[0x1c] = 0;
          pbStack_1168[0x1d] = 0;
          pbStack_1168[0x1e] = 0;
          pbStack_1168[0x1f] = 0;
          pbStack_1168[0x10] = 0;
          pbStack_1168[0x11] = 0;
          pbStack_1168[0x12] = 0;
          pbStack_1168[0x13] = 0;
          pbStack_1168[0x14] = 0;
          pbStack_1168[0x15] = 0;
          pbStack_1168[0x16] = 0;
          pbStack_1168[0x17] = 0;
          pbStack_1168[0x28] = 0;
          pbStack_1168[0x29] = 0;
          pbStack_1168[0x2a] = 0;
          pbStack_1168[0x2b] = 0;
          pbStack_1168[0x2c] = 0;
          pbStack_1168[0x2d] = 0;
          pbStack_1168[0x2e] = 0;
          pbStack_1168[0x2f] = 0;
          pbStack_1168[0x20] = 0;
          pbStack_1168[0x21] = 0;
          pbStack_1168[0x22] = 0;
          pbStack_1168[0x23] = 0;
          pbStack_1168[0x24] = 0;
          pbStack_1168[0x25] = 0;
          pbStack_1168[0x26] = 0;
          pbStack_1168[0x27] = 0;
          pbStack_1168[0x38] = 0;
          pbStack_1168[0x39] = 0;
          pbStack_1168[0x3a] = 0;
          pbStack_1168[0x3b] = 0;
          pbStack_1168[0x3c] = 0;
          pbStack_1168[0x3d] = 0;
          pbStack_1168[0x3e] = 0;
          pbStack_1168[0x3f] = 0;
          pbStack_1168[0x30] = 0;
          pbStack_1168[0x31] = 0;
          pbStack_1168[0x32] = 0;
          pbStack_1168[0x33] = 0;
          pbStack_1168[0x34] = 0;
          pbStack_1168[0x35] = 0;
          pbStack_1168[0x36] = 0;
          pbStack_1168[0x37] = 0;
          pbStack_1168[0x48] = 0;
          pbStack_1168[0x49] = 0;
          pbStack_1168[0x4a] = 0;
          pbStack_1168[0x4b] = 0;
          pbStack_1168[0x4c] = 0;
          pbStack_1168[0x4d] = 0;
          pbStack_1168[0x4e] = 0;
          pbStack_1168[0x4f] = 0;
          pbStack_1168[0x40] = 0;
          pbStack_1168[0x41] = 0;
          pbStack_1168[0x42] = 0;
          pbStack_1168[0x43] = 0;
          pbStack_1168[0x44] = 0;
          pbStack_1168[0x45] = 0;
          pbStack_1168[0x46] = 0;
          pbStack_1168[0x47] = 0;
          pbStack_1168[0x58] = 0;
          pbStack_1168[0x59] = 0;
          pbStack_1168[0x5a] = 0;
          pbStack_1168[0x5b] = 0;
          pbStack_1168[0x5c] = 0;
          pbStack_1168[0x5d] = 0;
          pbStack_1168[0x5e] = 0;
          pbStack_1168[0x5f] = 0;
          pbStack_1168[0x50] = 0;
          pbStack_1168[0x51] = 0;
          pbStack_1168[0x52] = 0;
          pbStack_1168[0x53] = 0;
          pbStack_1168[0x54] = 0;
          pbStack_1168[0x55] = 0;
          pbStack_1168[0x56] = 0;
          pbStack_1168[0x57] = 0;
          pbStack_1168[0x68] = 0;
          pbStack_1168[0x69] = 0;
          pbStack_1168[0x6a] = 0;
          pbStack_1168[0x6b] = 0;
          pbStack_1168[0x6c] = 0;
          pbStack_1168[0x6d] = 0;
          pbStack_1168[0x6e] = 0;
          pbStack_1168[0x6f] = 0;
          pbStack_1168[0x60] = 0;
          pbStack_1168[0x61] = 0;
          pbStack_1168[0x62] = 0;
          pbStack_1168[99] = 0;
          pbStack_1168[100] = 0;
          pbStack_1168[0x65] = 0;
          pbStack_1168[0x66] = 0;
          pbStack_1168[0x67] = 0;
          pbStack_1168[0x78] = 0;
          pbStack_1168[0x79] = 0;
          pbStack_1168[0x7a] = 0;
          pbStack_1168[0x7b] = 0;
          pbStack_1168[0x7c] = 0;
          pbStack_1168[0x7d] = 0;
          pbStack_1168[0x7e] = 0;
          pbStack_1168[0x7f] = 0;
          pbStack_1168[0x70] = 0;
          pbStack_1168[0x71] = 0;
          pbStack_1168[0x72] = 0;
          pbStack_1168[0x73] = 0;
          pbStack_1168[0x74] = 0;
          pbStack_1168[0x75] = 0;
          pbStack_1168[0x76] = 0;
          pbStack_1168[0x77] = 0;
          pbStack_1168[0x88] = 0;
          pbStack_1168[0x89] = 0;
          pbStack_1168[0x8a] = 0;
          pbStack_1168[0x8b] = 0;
          pbStack_1168[0x8c] = 0;
          pbStack_1168[0x8d] = 0;
          pbStack_1168[0x8e] = 0;
          pbStack_1168[0x8f] = 0;
          pbStack_1168[0x80] = 0;
          pbStack_1168[0x81] = 0;
          pbStack_1168[0x82] = 0;
          pbStack_1168[0x83] = 0;
          pbStack_1168[0x84] = 0;
          pbStack_1168[0x85] = 0;
          pbStack_1168[0x86] = 0;
          pbStack_1168[0x87] = 0;
          pbStack_1168[0x98] = 0;
          pbStack_1168[0x99] = 0;
          pbStack_1168[0x9a] = 0;
          pbStack_1168[0x9b] = 0;
          pbStack_1168[0x9c] = 0;
          pbStack_1168[0x9d] = 0;
          pbStack_1168[0x9e] = 0;
          pbStack_1168[0x9f] = 0;
          pbStack_1168[0x90] = 0;
          pbStack_1168[0x91] = 0;
          pbStack_1168[0x92] = 0;
          pbStack_1168[0x93] = 0;
          pbStack_1168[0x94] = 0;
          pbStack_1168[0x95] = 0;
          pbStack_1168[0x96] = 0;
          pbStack_1168[0x97] = 0;
          pbStack_1168[0xa8] = 0;
          pbStack_1168[0xa9] = 0;
          pbStack_1168[0xaa] = 0;
          pbStack_1168[0xab] = 0;
          pbStack_1168[0xac] = 0;
          pbStack_1168[0xad] = 0;
          pbStack_1168[0xae] = 0;
          pbStack_1168[0xaf] = 0;
          pbStack_1168[0xa0] = 0;
          pbStack_1168[0xa1] = 0;
          pbStack_1168[0xa2] = 0;
          pbStack_1168[0xa3] = 0;
          pbStack_1168[0xa4] = 0;
          pbStack_1168[0xa5] = 0;
          pbStack_1168[0xa6] = 0;
          pbStack_1168[0xa7] = 0;
          pbStack_1168[0xb8] = 0;
          pbStack_1168[0xb9] = 0;
          pbStack_1168[0xba] = 0;
          pbStack_1168[0xbb] = 0;
          pbStack_1168[0xbc] = 0;
          pbStack_1168[0xbd] = 0;
          pbStack_1168[0xbe] = 0;
          pbStack_1168[0xbf] = 0;
          pbStack_1168[0xb0] = 0;
          pbStack_1168[0xb1] = 0;
          pbStack_1168[0xb2] = 0;
          pbStack_1168[0xb3] = 0;
          pbStack_1168[0xb4] = 0;
          pbStack_1168[0xb5] = 0;
          pbStack_1168[0xb6] = 0;
          pbStack_1168[0xb7] = 0;
          pbStack_1168[200] = 0;
          pbStack_1168[0xc9] = 0;
          pbStack_1168[0xca] = 0;
          pbStack_1168[0xcb] = 0;
          pbStack_1168[0xcc] = 0;
          pbStack_1168[0xcd] = 0;
          pbStack_1168[0xce] = 0;
          pbStack_1168[0xcf] = 0;
          pbStack_1168[0xc0] = 0;
          pbStack_1168[0xc1] = 0;
          pbStack_1168[0xc2] = 0;
          pbStack_1168[0xc3] = 0;
          pbStack_1168[0xc4] = 0;
          pbStack_1168[0xc5] = 0;
          pbStack_1168[0xc6] = 0;
          pbStack_1168[199] = 0;
          pbStack_1168[0xd8] = 0;
          pbStack_1168[0xd9] = 0;
          pbStack_1168[0xda] = 0;
          pbStack_1168[0xdb] = 0;
          pbStack_1168[0xdc] = 0;
          pbStack_1168[0xdd] = 0;
          pbStack_1168[0xde] = 0;
          pbStack_1168[0xdf] = 0;
          pbStack_1168[0xd0] = 0;
          pbStack_1168[0xd1] = 0;
          pbStack_1168[0xd2] = 0;
          pbStack_1168[0xd3] = 0;
          pbStack_1168[0xd4] = 0;
          pbStack_1168[0xd5] = 0;
          pbStack_1168[0xd6] = 0;
          pbStack_1168[0xd7] = 0;
          pbStack_1168[0xe8] = 0;
          pbStack_1168[0xe9] = 0;
          pbStack_1168[0xea] = 0;
          pbStack_1168[0xeb] = 0;
          pbStack_1168[0xec] = 0;
          pbStack_1168[0xed] = 0;
          pbStack_1168[0xee] = 0;
          pbStack_1168[0xef] = 0;
          pbStack_1168[0xe0] = 0;
          pbStack_1168[0xe1] = 0;
          pbStack_1168[0xe2] = 0;
          pbStack_1168[0xe3] = 0;
          pbStack_1168[0xe4] = 0;
          pbStack_1168[0xe5] = 0;
          pbStack_1168[0xe6] = 0;
          pbStack_1168[0xe7] = 0;
          pbStack_1168[0xf8] = 0;
          pbStack_1168[0xf9] = 0;
          pbStack_1168[0xfa] = 0;
          pbStack_1168[0xfb] = 0;
          pbStack_1168[0xfc] = 0;
          pbStack_1168[0xfd] = 0;
          pbStack_1168[0xfe] = 0;
          pbStack_1168[0xff] = 0;
          pbStack_1168[0xf0] = 0;
          pbStack_1168[0xf1] = 0;
          pbStack_1168[0xf2] = 0;
          pbStack_1168[0xf3] = 0;
          pbStack_1168[0xf4] = 0;
          pbStack_1168[0xf5] = 0;
          pbStack_1168[0xf6] = 0;
          pbStack_1168[0xf7] = 0;
          do {
            if (*(int *)(lVar27 + 0x220f4 + lVar19) != 0) {
              pbVar30 = pbStack_1170 + lVar19;
              pbVar30[0] = 0xff;
              pbVar30[1] = 0xff;
              pbVar30[2] = 0;
              pbVar30[3] = 0;
            }
            lVar19 = lVar19 + 4;
          } while (lVar19 != 400);
          lVar19 = 0;
          do {
            uVar31 = 0;
            pbVar30 = pbStack_1170 + lVar19 * 4;
            pbVar30[0] = 0;
            pbVar30[1] = 0;
            pbVar30[2] = 0;
            pbVar30[3] = 0;
            uVar26 = 0;
            if (*(int *)(lVar27 + 0x220f4 + lVar19 * 4) != 0) {
              uVar26 = 0xffff;
            }
            *(uint *)(pbStack_1170 + lVar19 * 4) = uVar26;
            uVar33 = 1;
            iVar101 = 0x20;
            do {
              uVar29 = (uint)uVar31;
              if ((uVar33 & uVar26) != 0) {
                uVar29 = uVar29 + 1;
              }
              uVar31 = (ulong)uVar29;
              uVar33 = uVar33 << 1;
              iVar101 = iVar101 + -1;
            } while (iVar101 != 0);
            *(uint *)(pbStack_1178 + lVar19 * 4) = uVar29;
            *(int *)(pbStack_1168 + uVar31 * 4) = *(int *)(pbStack_1168 + (ulong)uVar29 * 4) + 1;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 100);
          iVar101 = *(int *)(pbVar45 + 0x3c8);
          *(int *)(pbVar45 + 0x448) = iVar101;
          lVar27 = 0x1f;
          pbVar30 = pbVar45 + 0x44c;
          do {
            iVar101 = *(int *)(pbVar30 + -0x80) + iVar101;
            *(int *)pbVar30 = iVar101;
            lVar27 = lVar27 + -1;
            pbVar30 = pbVar30 + 4;
          } while (lVar27 != 0);
          pbStack_10e0[4] = 1;
          pbStack_10e0[5] = 0;
          pbStack_10e0[6] = 0;
          pbStack_10e0[7] = 0;
          FUN_109677cf0(pbVar23);
          pbVar45[0x4d0] = 1;
          pbVar45[0x4d1] = 0;
          pbVar45[0x4d2] = 0;
          pbVar45[0x4d3] = 0;
          lVar27 = *(long *)pbVar45;
        }
      }
      *(undefined4 *)(lVar27 + 0x2d3e4) = 0;
    }
    else {
      iVar107 = *(int *)(pbVar45 + 0x928);
      iVar104 = iVar107 + 0xc;
      if (-1 < iVar107) {
        iVar104 = iVar107;
      }
      uVar56 = 0;
      uVar61 = 0;
      uVar66 = 0;
      cVar68 = '\0';
      iVar36 = -1;
      do {
        iVar2 = iVar107 + iVar36;
        iVar35 = iVar2 + 0xc;
        if (-1 < iVar2) {
          iVar35 = iVar2;
        }
        fVar82 = (float)*(undefined8 *)(pbVar23 + ((long)iVar104 * 0xf + 0x10ad82) * 4) -
                 (float)*(undefined8 *)(pbVar23 + ((long)iVar35 * 0xf + 0x10ad82) * 4);
        fVar105 = (float)((ulong)*(undefined8 *)(pbVar23 + ((long)iVar104 * 0xf + 0x10ad82) * 4) >>
                         0x20) -
                  (float)((ulong)*(undefined8 *)(pbVar23 + ((long)iVar35 * 0xf + 0x10ad82) * 4) >>
                         0x20);
        fVar82 = (float)CONCAT13(cVar68,CONCAT12(uVar66,CONCAT11(uVar61,uVar56))) +
                 fVar82 * fVar82 + fVar105 * fVar105;
        uVar56 = SUB41(fVar82,0);
        uVar61 = (undefined1)((uint)fVar82 >> 8);
        uVar66 = (undefined1)((uint)fVar82 >> 0x10);
        cVar68 = (char)((uint)fVar82 >> 0x18);
        iVar36 = iVar36 + -1;
      } while (iVar36 != -3);
      iVar104 = 9;
      if (2 < iVar107) {
        iVar104 = -3;
      }
      fVar105 = 0.0;
      iVar36 = 8;
      do {
        iVar35 = iVar107 + iVar36 + -0xc;
        iVar2 = iVar107 + iVar36;
        if (-1 < iVar35) {
          iVar2 = iVar35;
        }
        fVar94 = (float)*(undefined8 *)(pbVar23 + ((long)(iVar104 + iVar107) * 0xf + 0x10ad82) * 4)
                 - (float)*(undefined8 *)(pbVar23 + ((long)iVar2 * 0xf + 0x10ad82) * 4);
        fVar83 = (float)((ulong)*(undefined8 *)
                                 (pbVar23 + ((long)(iVar104 + iVar107) * 0xf + 0x10ad82) * 4) >>
                        0x20) -
                 (float)((ulong)*(undefined8 *)(pbVar23 + ((long)iVar2 * 0xf + 0x10ad82) * 4) >>
                        0x20);
        fVar105 = fVar105 + fVar94 * fVar94 + fVar83 * fVar83;
        iVar36 = iVar36 + -1;
      } while (iVar36 != 6);
      if (100.0 <= fVar82) {
LAB_109679408:
        pbVar21 = pbStack_10f8;
        iVar104 = *(int *)(pbVar45 + 0x654);
        iVar107 = 4;
        iVar36 = 1;
        do {
          iVar2 = iVar104 + 0xc;
          if (-1 < iVar104) {
            iVar2 = iVar104;
          }
          iVar35 = 0;
          if (*(float *)(pbVar23 + ((long)iVar2 + 0x10ad75) * 4) <= 0.6) {
            iVar35 = iVar36;
          }
          iVar104 = iVar104 + -1;
          iVar107 = iVar107 + -1;
          iVar36 = iVar35;
        } while (iVar107 != 0);
        *(int *)pbStack_10f0 = iVar35;
        lVar19 = *(long *)pbVar45;
        *(undefined4 *)(lVar19 + 0x18) = 0;
        lVar27 = *(long *)(pbVar45 + 0x18);
        fVar82 = *(float *)(lVar27 + 0x28);
        fVar105 = *(float *)(lVar19 + 0x28);
        if (fVar82 == fVar105) {
          FUN_109676544(pbVar23,pbVar23 + 0x42bd88);
          iVar101 = iVar101 + 0x124fd8;
          FUN_10967df78();
          lVar27 = *(long *)pbVar45;
          *(int *)(lVar27 + 0xc) = iVar101;
          FUN_10967df78(pbVar23 + 0x124fd8,*(long *)(pbVar45 + 8),lVar27,
                        *(long *)(pbVar45 + 8) + 0x130,lVar27 + 0x130,&uStack_680,100);
          lVar43 = 0;
          lVar19 = 0;
          lVar27 = *(long *)pbVar45;
          do {
            if (*(int *)((long)&uStack_678 + lVar43) == 0) {
              if (*(int *)(lVar27 + lVar43 + 0x138) != 0) {
                puVar22 = (undefined4 *)(lVar27 + lVar43 + 0x138);
                goto LAB_109679538;
              }
            }
            else {
              uVar87 = *(undefined8 *)(lVar27 + lVar43 + 0x130);
              fVar82 = (float)*(undefined8 *)((long)&uStack_680 + lVar43) - (float)uVar87;
              fVar105 = (float)((ulong)*(undefined8 *)((long)&uStack_680 + lVar43) >> 0x20) -
                        (float)((ulong)uVar87 >> 0x20);
              if (1.0 < fVar82 * fVar82 + fVar105 * fVar105) {
                puVar22 = (undefined4 *)(lVar27 + 0x138 + lVar19 * 0xc);
LAB_109679538:
                *puVar22 = 0;
                *(int *)(lVar27 + 0xc) = *(int *)(lVar27 + 0xc) + -1;
                *(int *)(lVar27 + 0x18) = *(int *)(lVar27 + 0x18) + 1;
              }
            }
            lVar19 = lVar19 + 1;
            lVar43 = lVar43 + 0xc;
          } while (lVar43 != 0x4b0);
        }
        else if (fVar105 <= fVar82) {
          lVar41 = *(long *)(pbStack_10e8 + 0x28);
          afStack_160[0] = 1.4013e-45;
          afStack_160[3] = 1.4013e-45;
          uVar87 = *(undefined8 *)(pbStack_10f8 + 0xc);
          iVar104 = (int)((long)uVar87 >> 0x21);
          uVar87 = NEON_scvtf(CONCAT17((char)((long)uVar87 >> 0x39),
                                       CONCAT16((char)((uint)iVar104 >> 0x10),
                                                CONCAT15((char)((uint)iVar104 >> 8),
                                                         CONCAT14((char)iVar104,
                                                                  CONCAT13((char)((ulong)uVar87 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar87 >> 1))
                                                                 )))),4);
          iVar104 = (int)(float)((ulong)uVar87 >> 0x20);
          fStack_168 = (float)(int)(float)uVar87;
          fStack_164 = (float)iVar104;
          iVar104 = iVar104 + 100;
          uStack_144 = NEON_scvtf(CONCAT17((char)((uint)iVar104 >> 0x18),
                                           CONCAT16((char)((uint)iVar104 >> 0x10),
                                                    CONCAT15((char)((uint)iVar104 >> 8),
                                                             CONCAT14((char)iVar104,
                                                                      (int)(float)uVar87 + 100)))),4
                                 );
          afStack_160[1] = (float)uStack_144;
          fStack_14c = (float)((ulong)uStack_144 >> 0x20);
          fStack_148 = 1.4013e-45;
          uStack_13c = 1;
          uStack_1138 = 0;
          pbStack_1140 = (byte *)(ulong)(uint)fVar82;
          afStack_160[2] = fStack_164;
          afStack_160[4] = fStack_168;
          FUN_10967e884(pbVar23,&fStack_168,&lStack_1a0,4);
          lVar43 = 0;
          uVar87 = *(undefined8 *)(pbVar21 + 0xc);
          iVar104 = (int)((long)uVar87 >> 0x21);
          uVar87 = NEON_scvtf(CONCAT17((char)((long)uVar87 >> 0x39),
                                       CONCAT16((char)((uint)iVar104 >> 0x10),
                                                CONCAT15((char)((uint)iVar104 >> 8),
                                                         CONCAT14((char)iVar104,
                                                                  CONCAT13((char)((ulong)uVar87 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar87 >> 1))
                                                                 )))),4);
          do {
            *(int *)((long)afStack_1c8 + lVar43) = *(int *)((long)&uStack_198 + lVar43);
            uVar90 = uVar87;
            if (*(int *)((long)&uStack_198 + lVar43) != 0) {
              uVar90 = CONCAT44((float)((ulong)uVar87 >> 0x20) +
                                (float)((ulong)*(undefined8 *)((long)&lStack_1a0 + lVar43) >> 0x20)
                                * SUB84(pbStack_1140,0),
                                (float)uVar87 +
                                (float)*(undefined8 *)((long)&lStack_1a0 + lVar43) *
                                SUB84(pbStack_1140,0));
            }
            *(undefined8 *)((long)&lStack_1d0 + lVar43) = uVar90;
            lVar43 = lVar43 + 0xc;
          } while ((int)lVar43 != 0x30);
          FUN_10967ed94(&fStack_168,&lStack_1d0,0,1,2,3,lVar41 + 0x2d390);
          FUN_1096766e4(lVar19,lVar41,&fStack_168,&lStack_1d0);
          FUN_10967dbec(lVar41);
          uStack_728 = uStack_1128;
          uStack_730 = (long)dStack_1130;
          uStack_718 = uStack_1128;
          uStack_720 = (long)dStack_1130;
          fStack_710 = 1.0;
          _bzero(pbVar23 + 0x42bd88,0x4b0);
          uStack_608 = *(undefined8 *)(lVar19 + 0x94);
          uStack_610 = *(undefined8 *)(lVar19 + 0x8c);
          uStack_600 = *(undefined8 *)(lVar19 + 0x9c);
          uStack_5f8 = *(undefined8 *)(lVar19 + 0xa4);
          uStack_5e8 = *(undefined8 *)(lVar19 + 0xb4);
          uStack_5f0 = *(undefined8 *)(lVar19 + 0xac);
          uStack_5e0 = *(undefined8 *)(lVar19 + 0xbc);
          uStack_5d8 = *(undefined8 *)(lVar19 + 0xc4);
          uStack_648 = *(undefined8 *)(lVar19 + 0x54);
          uStack_650 = *(undefined8 *)(lVar19 + 0x4c);
          uStack_640 = *(undefined8 *)(lVar19 + 0x5c);
          uStack_638 = *(undefined8 *)(lVar19 + 100);
          uStack_628 = *(undefined8 *)(lVar19 + 0x74);
          uStack_630 = *(undefined8 *)(lVar19 + 0x6c);
          uStack_620 = *(undefined8 *)(lVar19 + 0x7c);
          uStack_618 = *(undefined8 *)(lVar19 + 0x84);
          uStack_680 = *(long *)(lVar19 + 0x1c);
          uStack_670 = *(undefined8 *)(lVar19 + 0x2c);
          uStack_668 = *(undefined8 *)(lVar19 + 0x34);
          fStack_658 = (float)*(undefined8 *)(lVar19 + 0x44);
          uStack_654 = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x44) >> 0x20);
          uStack_660 = (undefined4)*(undefined8 *)(lVar19 + 0x3c);
          fStack_65c = (float)((ulong)*(undefined8 *)(lVar19 + 0x3c) >> 0x20);
          uStack_678._0_4_ = (int)*(undefined8 *)(lVar19 + 0x24);
          uStack_678 = CONCAT44(*(undefined4 *)(lVar27 + 0x28),(int)uStack_678);
          iVar104 = 100;
          FUN_10967e938(pbVar23,lVar27 + 0x130,lVar27 + 0x1c,&uStack_730,&uStack_680,100,
                        pbVar23 + 0x42bd88);
          pbVar45 = pbStack_10e8;
          iVar101 = iVar101 + 0x124fd8;
          FUN_10967df78();
          *(int *)(*(long *)pbVar45 + 0xc) = iVar101;
          FUN_10967e884(pbVar23,*(long *)(pbVar45 + 0x28) + 0x130,pbVar23 + 0x42bd88,100);
          lVar27 = *(long *)pbVar45;
          uVar87 = *(undefined8 *)(pbStack_10f8 + 0xc);
          cVar68 = (char)((ulong)uVar87 >> 0x18) >> 1;
          iVar101 = (int)((long)uVar87 >> 0x21);
          uVar71 = (undefined1)iVar101;
          uVar74 = (undefined1)((uint)iVar101 >> 8);
          uVar77 = (undefined1)((uint)iVar101 >> 0x10);
          cVar81 = (char)((long)uVar87 >> 0x39);
          uVar87 = NEON_scvtf(CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,
                                                  CONCAT13(cVar68,(int3)((int)uVar87 >> 1)))))),4);
          fVar82 = *(float *)(lVar27 + 0x28);
          pbVar21 = pbVar45 + 0xde0;
          piVar42 = (int *)(lVar27 + 0x138);
          do {
            iVar101 = *(int *)pbVar21;
            *piVar42 = iVar101;
            uVar90 = uVar87;
            if (iVar101 != 0) {
              uVar90 = CONCAT44((float)((ulong)uVar87 >> 0x20) +
                                (float)((ulong)*(long *)(pbVar21 + -8) >> 0x20) * fVar82,
                                (float)uVar87 + (float)*(long *)(pbVar21 + -8) * fVar82);
            }
            *(undefined8 *)(piVar42 + -2) = uVar90;
            pbVar21 = pbVar21 + 0xc;
            piVar42 = piVar42 + 3;
            iVar104 = iVar104 + -1;
          } while (iVar104 != 0);
        }
        else {
          lVar41 = *(long *)(pbStack_10e8 + 0x28);
          uVar87 = *(undefined8 *)(pbStack_10f8 + 0xc);
          iVar104 = (int)((long)uVar87 >> 0x21);
          uVar87 = NEON_scvtf(CONCAT17((char)((long)uVar87 >> 0x39),
                                       CONCAT16((char)((uint)iVar104 >> 0x10),
                                                CONCAT15((char)((uint)iVar104 >> 8),
                                                         CONCAT14((char)iVar104,
                                                                  CONCAT13((char)((ulong)uVar87 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar87 >> 1))
                                                                 )))),4);
          iVar104 = (int)(float)((ulong)uVar87 >> 0x20);
          fVar82 = (float)(int)(float)uVar87;
          fVar94 = (float)iVar104;
          uStack_680 = CONCAT44(fVar94,fVar82);
          iVar104 = iVar104 + 100;
          uVar87 = NEON_scvtf(CONCAT17((char)((uint)iVar104 >> 0x18),
                                       CONCAT16((char)((uint)iVar104 >> 0x10),
                                                CONCAT15((char)((uint)iVar104 >> 8),
                                                         CONCAT14((char)iVar104,
                                                                  (int)(float)uVar87 + 100)))),4);
          fStack_65c = (float)uVar87;
          uStack_678 = CONCAT44(fStack_65c,1);
          uStack_670 = CONCAT44(1,fVar94);
          fStack_658 = (float)((ulong)uVar87 >> 0x20);
          uStack_668 = CONCAT44(fStack_658,fVar82);
          uStack_660 = 1;
          uStack_654 = 1;
          uStack_1138 = 0;
          pbStack_1140 = (byte *)(ulong)(uint)fVar105;
          FUN_10967e884(pbVar23,&uStack_680,&fStack_168,4);
          lVar43 = 0;
          uVar87 = *(undefined8 *)(pbVar21 + 0xc);
          cVar68 = (char)((ulong)uVar87 >> 0x18) >> 1;
          iVar104 = (int)((long)uVar87 >> 0x21);
          uVar71 = (undefined1)iVar104;
          uVar74 = (undefined1)((uint)iVar104 >> 8);
          uVar77 = (undefined1)((uint)iVar104 >> 0x10);
          cVar81 = (char)((long)uVar87 >> 0x39);
          uVar87 = NEON_scvtf(CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,
                                                  CONCAT13(cVar68,(int3)((int)uVar87 >> 1)))))),4);
          do {
            *(int *)((long)&uStack_198 + lVar43) = *(int *)((long)afStack_160 + lVar43);
            uVar90 = uVar87;
            if (*(int *)((long)afStack_160 + lVar43) != 0) {
              uVar90 = CONCAT44((float)((ulong)uVar87 >> 0x20) +
                                (float)((ulong)*(undefined8 *)((long)&fStack_168 + lVar43) >> 0x20)
                                * SUB84(pbStack_1140,0),
                                (float)uVar87 +
                                (float)*(undefined8 *)((long)&fStack_168 + lVar43) *
                                SUB84(pbStack_1140,0));
            }
            *(undefined8 *)((long)&lStack_1a0 + lVar43) = uVar90;
            lVar43 = lVar43 + 0xc;
          } while ((int)lVar43 != 0x30);
          FUN_10967ed94(&uStack_680,&lStack_1a0,0,1,2,3,lVar41 + 0x2d390);
          lVar43 = 0x130;
          do {
            FUN_10967e7a0(lVar27 + lVar43,lVar41 + 0x2d390,lVar41 + lVar43);
            lVar43 = lVar43 + 0xc;
          } while (lVar43 != 0x5e0);
          FUN_1096766e4(lVar27,lVar41,&uStack_680,&lStack_1a0);
          FUN_10967dbec(lVar41);
          afStack_1c8[0] = (float)uStack_1128;
          afStack_1c8[1] = (float)((ulong)uStack_1128 >> 0x20);
          lStack_1d0 = (long)dStack_1130;
          uStack_1b8 = uStack_1128;
          afStack_1c8[2] = SUB84(dStack_1130,0);
          afStack_1c8[3] = (float)((ulong)dStack_1130 >> 0x20);
          uStack_1b0 = 0x3f800000;
          _bzero(pbVar23 + 0x42bd88,0x4b0);
          FUN_10967e938(pbVar23,lVar27 + 0x130,lVar27 + 0x1c,&lStack_1d0,lVar19 + 0x1c,100,
                        pbVar23 + 0x42bd88);
          pbVar45 = pbStack_10e8;
          iVar101 = iVar101 + 0x124fd8;
          FUN_10967df78();
          lVar27 = *(long *)pbVar45;
          *(int *)(lVar27 + 0xc) = iVar101;
        }
        pbVar21 = pbStack_10e0;
        iVar101 = *(int *)pbVar23;
        lVar41 = 0x22284;
        lVar43 = 0x138;
        lVar19 = 0x42b1e8;
        do {
          if (*(int *)(lVar27 + lVar43) == 0) {
            *(int *)(lVar27 + lVar41) = iVar101;
            pbVar39 = pbVar23 + lVar19;
            pbVar39[0] = 0;
            pbVar39[1] = 0;
            pbVar39[2] = 0;
            pbVar39[3] = 0;
            pbVar45[0xa8] = 0;
            pbVar45[0xa9] = 0;
            pbVar45[0xaa] = 0;
            pbVar45[0xab] = 0;
          }
          lVar19 = lVar19 + 4;
          lVar43 = lVar43 + 0xc;
          lVar41 = lVar41 + 4;
        } while ((int)lVar43 != 0x5e8);
        pbVar39 = pbVar23;
        FUN_109676f64(pbVar23,*(long *)(pbVar45 + 0x18),lVar27,lVar27 + 0x10,&uStack_680,1);
        *(int *)(pbVar21 + 4) = (int)pbVar39;
        if (*(int *)(pbVar21 + 0x18) == 0) {
          pbVar21[0x14] = 0;
          pbVar21[0x15] = 0;
          pbVar21[0x16] = 0;
          pbVar21[0x17] = 0;
LAB_10967a434:
          if ((int)pbVar39 == 0) goto LAB_10967a444;
          lVar27 = 0x42b480;
          iVar101 = 1;
        }
        else {
          iVar101 = *(int *)(pbVar21 + 0x14);
          *(int *)(pbVar21 + 0x14) = iVar101 + 1;
          if (iVar101 < 3) goto LAB_10967a434;
          pbVar21[4] = 0;
          pbVar21[5] = 0;
          pbVar21[6] = 0;
          pbVar21[7] = 0;
LAB_10967a444:
          pbVar45[0x4d0] = 0;
          pbVar45[0x4d1] = 0;
          pbVar45[0x4d2] = 0;
          pbVar45[0x4d3] = 0;
          iVar101 = *(int *)pbVar23;
          lVar27 = 0x42c6f0;
        }
        *(int *)(pbVar23 + lVar27) = iVar101;
      }
      else {
        fVar82 = fVar82 * 3.0;
        bVar14 = false;
        bVar13 = true;
        bVar15 = false;
        if (100.0 < fVar105) {
          bVar14 = false;
          bVar13 = false;
          bVar15 = true;
          if (!NAN(fVar105) && !NAN(fVar82)) {
            bVar14 = fVar105 < fVar82;
            bVar13 = fVar105 == fVar82;
            bVar15 = false;
          }
        }
        if (bVar13 || bVar14 != bVar15) goto LAB_109679408;
        pbStack_10e0[0xc] = 0;
        pbStack_10e0[0xd] = 0;
        pbStack_10e0[0xe] = 0;
        pbStack_10e0[0xf] = 0;
        pbVar39 = *(byte **)(pbVar45 + 0x20);
        piVar42 = *(int **)pbVar45;
        iVar104 = 0x10;
        uVar56 = 0x20;
        uVar61 = 0x7b;
        uVar66 = 0xb7;
        cVar68 = 'H';
        pbVar21 = pbStack_1110;
        do {
          if (((*(int *)(pbVar21 + 4) != 0) && (0x1e < *piVar42 - *(int *)pbVar21)) &&
             (fVar82 = (float)*(undefined8 *)(piVar42 + 7) - (float)*(undefined8 *)(pbVar21 + 0x1c),
             fVar105 = (float)((ulong)*(undefined8 *)(piVar42 + 7) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(pbVar21 + 0x1c) >> 0x20),
             fVar82 = SQRT(fVar82 * fVar82 + fVar105 * fVar105 +
                           ((float)piVar42[9] - *(float *)(pbVar21 + 0x24)) *
                           ((float)piVar42[9] - *(float *)(pbVar21 + 0x24))),
             fVar82 < (float)CONCAT13(cVar68,CONCAT12(uVar66,CONCAT11(uVar61,uVar56))))) {
            uVar56 = SUB41(fVar82,0);
            uVar61 = (undefined1)((uint)fVar82 >> 8);
            uVar66 = (undefined1)((uint)fVar82 >> 0x10);
            cVar68 = (char)((uint)fVar82 >> 0x18);
            pbVar39 = pbVar21;
          }
          pbVar21 = pbVar21 + 0x2d520;
          iVar104 = iVar104 + -1;
        } while (iVar104 != 0);
        *(byte **)(pbVar45 + 0xa0) = pbVar39;
        if (0.05 < ABS(*(float *)(pbVar39 + 0x2d3b4) - *(float *)(*(long *)(pbVar45 + 8) + 0x2d3b4))
                   / *(float *)(pbVar39 + 0x2d3b4)) {
          if (*(float *)(pbVar39 + 0x2d38c) != 1.0) {
            pbVar21 = pbVar39 + 0x22414;
            lVar27 = 5;
            do {
              if (*(int *)pbVar21 != 0) {
                FUN_109676d34(pbVar23,pbVar39,pbVar21);
              }
              pbVar21 = pbVar21 + 0x2318;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            piVar42 = *(int **)pbVar45;
          }
          FUN_109676544(pbVar23,pbVar23 + 0x42bd88);
          pbVar21 = pbVar23 + 0x124fd8;
          FUN_10967df78(pbVar21,pbVar39,piVar42,pbVar39 + 0x130,pbVar39 + 0x130,piVar42 + 0x4c,100);
          piVar42[3] = (int)pbVar21;
          if ((0x32 < (int)pbVar21) &&
             (FUN_109676f64(pbVar23,pbVar39,piVar42,piVar42 + 4,&uStack_680,0), 0x1e < piVar42[4]))
          {
            pbStack_10e0[0x14] = 0;
            pbStack_10e0[0x15] = 0;
            pbStack_10e0[0x16] = 0;
            pbStack_10e0[0x17] = 0;
            pbStack_10e0[0x18] = 0;
            pbStack_10e0[0x19] = 0;
            pbStack_10e0[0x1a] = 0;
            pbStack_10e0[0x1b] = 0;
            pbStack_10e0[0xc] = 1;
            pbStack_10e0[0xd] = 0;
            pbStack_10e0[0xe] = 0;
            pbStack_10e0[0xf] = 0;
            *(byte **)(pbVar45 + 0x18) = pbVar39;
            iVar104 = *(int *)pbVar39;
            pbVar21 = pbStack_10f0 + 0xc;
            iVar107 = 0x10;
            do {
              if (iVar104 < *(int *)(pbVar21 + -4)) {
                pbVar21[0] = 0;
                pbVar21[1] = 0;
                pbVar21[2] = 0;
                pbVar21[3] = 0;
              }
              pbVar21 = pbVar21 + 0x2d520;
              iVar107 = iVar107 + -1;
            } while (iVar107 != 0);
          }
        }
        if (*(int *)(pbStack_10e0 + 0xc) != 1) goto LAB_109679408;
        iVar101 = *(int *)pbVar39;
        pbVar21 = pbStack_10f0 + 0xc;
        lVar27 = 0x10;
        do {
          if ((*(int *)(pbVar21 + -4) < iVar101) && (*(int *)pbVar21 != 0)) {
            pbVar21[0] = 0;
            pbVar21[1] = 0;
            pbVar21[2] = 0;
            pbVar21[3] = 0;
          }
          pbVar21 = pbVar21 + 0x2d520;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        *(byte **)(pbVar45 + 0x20) = pbVar39;
        pbVar45[0x4d0] = 1;
        pbVar45[0x4d1] = 0;
        pbVar45[0x4d2] = 0;
        pbVar45[0x4d3] = 0;
        iVar101 = *(int *)pbVar23;
        *(int *)(pbVar45 + 0x98) = **(int **)(pbVar45 + 0xa0);
        *(int *)(pbVar45 + 0x9c) = iVar101;
        pbStack_10e0[0xc] = 1;
        pbStack_10e0[0xd] = 0;
        pbStack_10e0[0xe] = 0;
        pbStack_10e0[0xf] = 0;
        pbVar21 = pbStack_10e0;
      }
      if (*(int *)(pbVar21 + 4) == 0) {
        iVar101 = **(int **)pbVar45;
        pbVar21 = pbStack_10f0 + 0xc;
        iVar104 = 0x10;
        do {
          if (iVar101 + -4 < *(int *)(pbVar21 + -4)) {
            pbVar21[0] = 0;
            pbVar21[1] = 0;
            pbVar21[2] = 0;
            pbVar21[3] = 0;
          }
          pbVar21 = pbVar21 + 0x2d520;
          iVar104 = iVar104 + -1;
        } while (iVar104 != 0);
        pbVar45[0x4d0] = 0;
        pbVar45[0x4d1] = 0;
        pbVar45[0x4d2] = 0;
        pbVar45[0x4d3] = 0;
        pbVar39 = pbStack_1148;
        pbVar40 = pbStack_1150;
      }
      else {
        lVar27 = 0;
        bVar14 = false;
        lVar41 = *(long *)pbVar45;
        lVar19 = 0x67d8;
        lVar43 = 0x22414;
        do {
          if ((*(int *)(lVar41 + lVar43) != 0) &&
             (*(int *)(*(long *)(pbVar23 + 0x67d0) + lVar27 + 4) == 2)) {
            lVar3 = lVar41 + lVar43;
            fVar82 = (float)*(undefined8 *)(lVar3 + 0x34) - (float)*(undefined8 *)(pbVar23 + lVar19)
            ;
            fVar105 = (float)((ulong)*(undefined8 *)(lVar3 + 0x34) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(pbVar23 + lVar19) >> 0x20);
            fVar82 = SQRT(fVar82 * fVar82 + fVar105 * fVar105);
            bVar14 = (bool)(bVar14 | 10.0 < fVar82);
            if (10.0 < fVar82) {
              lVar4 = *(long *)(pbVar23 + 0x67d0) + lVar27;
              FUN_10967eaa0(CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,CONCAT13
                                                  (cVar68,CONCAT12(uVar66,CONCAT11(uVar61,uVar56))))
                                                  ))),*(undefined4 *)(lVar3 + 0x38),
                            *(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),pbVar23,
                            lVar3 + 0x70,lVar41 + 0x1c,lVar3 + 0x70,0x168);
              FUN_10967eaa0(CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,CONCAT13
                                                  (cVar68,CONCAT12(uVar66,CONCAT11(uVar61,uVar56))))
                                                  ))),*(undefined4 *)(lVar3 + 0x38),
                            *(undefined4 *)(*(long *)(pbVar23 + 0x67d0) + lVar27 + 0x10),
                            *(undefined4 *)(*(long *)(pbVar23 + 0x67d0) + lVar27 + 0x14),pbVar23,
                            lVar3 + 4,lVar41 + 0x1c,lVar3 + 4,9);
              pbVar21 = pbStack_10e8;
              uVar8 = *(undefined4 *)(*(long *)pbStack_10e8 + 0x28);
              uVar56 = (undefined1)uVar8;
              uVar61 = (undefined1)((uint)uVar8 >> 8);
              uVar66 = (undefined1)((uint)uVar8 >> 0x10);
              cVar68 = (char)((uint)uVar8 >> 0x18);
              FUN_1096768b0(pbVar23,lVar3 + 0x34,*(long *)pbStack_10e8 + 0x50);
              *(uint *)(lVar3 + 0x22c8) = CONCAT13(cVar68,CONCAT12(uVar66,CONCAT11(uVar61,uVar56)));
              lVar41 = *(long *)pbVar21;
              *(float *)(lVar3 + 0x22c4) =
                   (float)CONCAT13(cVar68,CONCAT12(uVar66,CONCAT11(uVar61,uVar56))) *
                   *(float *)(lVar41 + 0x2d3b4);
              *(undefined4 *)(lVar3 + 0x22cc) = 0x3f800000;
            }
          }
          pbVar45 = pbStack_10e8;
          pbVar39 = pbStack_1148;
          pbVar40 = pbStack_1150;
          lVar27 = lVar27 + 0x14;
          lVar43 = lVar43 + 0x2318;
          lVar19 = lVar19 + 0xc;
        } while (lVar27 != 100);
        piVar42 = (int *)(lVar41 + 0x22414);
        if (*(int *)(lVar41 + 0x10) < 0xf) {
          bVar13 = *(int *)(*(long *)(pbStack_10e8 + 8) + 0x10) < 0x1e;
        }
        else {
          bVar13 = false;
        }
        piVar37 = *(int **)(pbStack_10e8 + 0x18);
        bVar15 = 0x32 < *(int *)pbVar23 - *piVar37;
        bVar1 = true;
        if ((ABS(*(float *)(lVar41 + 0x24) - (float)piVar37[9]) <= 0.08726646) &&
           (ABS(*(float *)(lVar41 + 0x20) - (float)piVar37[8]) <= 0.08726646)) {
          bVar1 = 0.08726646 < ABS(*(float *)(lVar41 + 0x1c) - (float)piVar37[7]);
        }
        iVar101 = *(int *)(lVar41 + 0xc);
        fVar82 = *(float *)(lVar41 + 0x22448) - (float)piVar37[0x8912];
        fVar105 = *(float *)(lVar41 + 0x2244c) - (float)piVar37[0x8913];
        fVar82 = fVar82 * fVar82 + fVar105 * fVar105;
        if (10 < *(int *)pbVar23 - *piVar37) {
          fVar105 = *(float *)(lVar41 + 0x246d8) / (float)piVar37[0x91b6];
          if (0x27 < *(int *)(lVar41 + 0x14)) {
            iVar107 = *(int *)(pbStack_10e8 + 0x654);
            iVar104 = iVar107 + 0xc;
            if (-1 < iVar107) {
              iVar104 = iVar107;
            }
            if (((*(float *)(pbVar23 + ((long)iVar104 + 0x10ad75) * 4) <= 0.8) || (0x4a < iVar101))
               && (*(int *)pbStack_10f0 == 0 ||
                   fVar82 <= 400.0 && (fVar105 <= 1.1 && 0.9090909 <= fVar105))) goto LAB_10967a754;
          }
          bVar15 = true;
        }
LAB_10967a754:
        fVar105 = *(float *)(lVar41 + 0x28) / (float)piVar37[10];
        if ((((*(float *)(lVar41 + 0x2d38c) < 0.9090909) || (1.1 < *(float *)(lVar41 + 0x2d38c))) ||
            (((fVar105 < 0.990099 || 1.01 < fVar105) ||
              (((bVar13 || (iVar101 < 0x1e || *(int *)(lVar41 + 0x10) < 0x1e)) ||
               0x1e < *(int *)(*(long *)(pbStack_10e8 + 8) + 0xc) - iVar101) || bVar1) ||
             ((50.0 < SQRT(fVar82) ||
              ((bool)((*(ushort *)(*(long *)(pbVar23 + 0x67d0) + 0x98) & 0x1c0) == 0 & bVar15)))))))
           || (bVar14)) {
          FUN_109677cf0(pbVar23,lVar41);
          if (*(int *)(pbVar45 + 0x4e4) == 0) {
            lVar27 = 5;
            do {
              if (*piVar42 != 0) {
                FUN_109676d34(pbVar23,lVar41,piVar42);
              }
              piVar42 = piVar42 + 0x8c6;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
          pbStack_1100[0] = 1;
          pbStack_1100[1] = 0;
          pbStack_1100[2] = 0;
          pbStack_1100[3] = 0;
        }
      }
      lVar27 = 0;
      lVar19 = 0x22414;
      do {
        if (*(int *)(*(long *)(pbVar23 + 0x67d0) + lVar27 + 4) == 3) {
          uStack_680 = *(long *)(*(long *)(pbVar23 + 0x67d0) + lVar27 + 8);
          uStack_678 = CONCAT44(uStack_678._4_4_,1);
          FUN_109676e08(pbVar23,*(long *)pbVar45 + 0x1c,&uStack_680,*(long *)pbVar45 + lVar19);
        }
        lVar19 = lVar19 + 0x2318;
        lVar27 = lVar27 + 0x14;
        pbVar109 = pbStack_1120;
        pbVar21 = pbStack_10e0;
        pbVar44 = pbStack_1118;
      } while (lVar27 != 100);
    }
    FUN_10967fa38(3);
  }
  lVar27 = *(long *)pbVar45;
  *(int *)(pbVar21 + 0x20) = *(int *)(lVar27 + 0x2d3b4);
  fVar83 = *(float *)(pbVar21 + 0x1c);
  FUN_10967e884(pbVar23,lVar27 + 0x22448,&uStack_680,1);
  fVar93 = 1.0 / SQRT(uStack_680._4_4_ * uStack_680._4_4_ + (float)uStack_680 * (float)uStack_680 +
                      1.0);
  fVar82 = (float)uStack_680 * fVar93;
  fVar94 = uStack_680._4_4_ * fVar93;
  fVar105 = fVar94 * *(float *)(lVar27 + 0x6c) + fVar82 * *(float *)(lVar27 + 0x68) +
            fVar93 * *(float *)(lVar27 + 0x70);
  fVar83 = -fVar83 / fVar105;
  fVar102 = (*(float *)(lVar27 + 0x54) * fVar94 + fVar82 * *(float *)(lVar27 + 0x50) +
            fVar93 * *(float *)(lVar27 + 0x58)) * fVar83;
  fVar82 = (*(float *)(lVar27 + 0x60) * fVar94 + fVar82 * *(float *)(lVar27 + 0x5c) +
           fVar93 * *(float *)(lVar27 + 100)) * fVar83;
  fVar105 = fVar105 * fVar83;
  FUN_10967f7c8(CONCAT17(cVar81,CONCAT16(uVar77,CONCAT15(uVar74,CONCAT14(uVar71,CONCAT13(cVar68,
                                                  CONCAT12(uVar66,CONCAT11(uVar61,uVar56))))))),0,
                -(*(float *)(*(long *)pbVar45 + 0x24) - *(float *)(*(long *)(pbVar45 + 0x20) + 0x24)
                 ),&uStack_680);
  FUN_109675c30(&uStack_680,&fStack_168);
  lVar27 = *(long *)pbVar45;
  *(float *)(lVar27 + 0x2d3e8) =
       fVar82 * fStack_164 + fVar102 * fStack_168 + fVar105 * afStack_160[0];
  *(float *)(lVar27 + 0x2d3ec) =
       fVar82 * afStack_160[2] + fVar102 * afStack_160[1] + fVar105 * afStack_160[3];
  *(float *)(lVar27 + 0x2d3f0) =
       fVar82 * fStack_14c + fVar102 * afStack_160[4] + fVar105 * fStack_148;
  iVar101 = *(int *)(pbVar45 + 0xdd4);
  uVar87 = *(undefined8 *)(lVar27 + 0x2d3e8);
  *(undefined8 *)(pbVar23 + ((long)iVar101 * 4 + 0x10aeeb) * 4) = *(undefined8 *)(lVar27 + 0x2d3f0);
  *(undefined8 *)(pbVar23 + ((long)iVar101 * 4 + 0x10aee9) * 4) = uVar87;
  iVar101 = 0;
  if (*(int *)(pbVar45 + 0xdd4) != 0x1d) {
    iVar101 = *(int *)(pbVar45 + 0xdd4) + 1;
  }
  *(int *)(pbVar45 + 0xdd4) = iVar101;
  pbVar45[0x4d4] = 0;
  pbVar45[0x4d5] = 0;
  pbVar45[0x4d6] = 0;
  pbVar45[0x4d7] = 0;
  lVar27 = *(long *)pbVar45;
  fVar82 = *(float *)(lVar27 + 0x2d38c);
  iVar101 = *(int *)pbStack_10f0;
  if (((iVar101 == 0) || (*(int *)(pbStack_10f0 + 4) < 0xb)) && (*(int *)(pbVar21 + 0x18) == 0)) {
    fVar94 = (float)*(int *)(pbStack_1108 +
                            (long)(*(int *)pbVar39 + (*(int *)pbVar39 >> 0x1f) * -0x80) * 4) + 20.0;
    fVar105 = (float)*(int *)(pbVar39 + 4);
    bVar14 = false;
    bVar13 = true;
    bVar15 = false;
    if (1.06 < fVar82) {
      bVar14 = false;
      bVar13 = false;
      bVar15 = true;
      if (!NAN(fVar94) && !NAN(fVar105)) {
        bVar14 = fVar94 < fVar105;
        bVar13 = fVar94 == fVar105;
        bVar15 = false;
      }
    }
    if ((*(int *)(pbVar21 + 4) == 0) || (!bVar13 && bVar14 == bVar15)) goto LAB_10967aa5c;
  }
  else {
LAB_10967aa5c:
    pbVar45[0x4d4] = 1;
    pbVar45[0x4d5] = 0;
    pbVar45[0x4d6] = 0;
    pbVar45[0x4d7] = 0;
  }
  if (*(int *)(pbVar45 + 0x4e4) != 0) {
    pbVar45[0x4d4] = 5;
    pbVar45[0x4d5] = 0;
    pbVar45[0x4d6] = 0;
    pbVar45[0x4d7] = 0;
  }
  if (((*(byte *)(*(long *)(pbVar23 + 0x67d0) + 0x99) >> 2 & 1) == 0) && (1.15 < fVar82)) {
    pbVar45[0x4d4] = 5;
    pbVar45[0x4d5] = 0;
    pbVar45[0x4d6] = 0;
    pbVar45[0x4d7] = 0;
  }
  if (((((*(float *)(lVar27 + 0x22448) < 0.0) ||
        ((float)*(int *)(pbStack_10f8 + 0xc) < *(float *)(lVar27 + 0x22448))) ||
       (*(float *)(lVar27 + 0x2244c) < 0.0)) ||
      ((float)*(int *)(pbStack_10f8 + 0x10) < *(float *)(lVar27 + 0x2244c))) &&
     ((fVar82 = *(float *)(lVar27 + 0x2d3f0) - *(float *)(*(long *)(pbVar45 + 8) + 0x2d3f0),
      uVar87 = *(undefined8 *)(*(long *)(pbVar45 + 8) + 0x2d3e8),
      fVar105 = (float)*(undefined8 *)(lVar27 + 0x2d3e8) - (float)uVar87,
      fVar94 = (float)((ulong)*(undefined8 *)(lVar27 + 0x2d3e8) >> 0x20) -
               (float)((ulong)uVar87 >> 0x20),
      fVar82 = SQRT(fVar105 * fVar105 + fVar94 * fVar94 + fVar82 * fVar82), 10.0 < fVar82 ||
      ((iVar101 != 0 && (5.0 < fVar82)))))) {
    pbVar45[0x4d4] = 5;
    pbVar45[0x4d5] = 0;
    pbVar45[0x4d6] = 0;
    pbVar45[0x4d7] = 0;
  }
  if (*(int *)(pbVar21 + 0xc) != 0) {
    pbVar45[0x4d4] = 0;
    pbVar45[0x4d5] = 0;
    pbVar45[0x4d6] = 0;
    pbVar45[0x4d7] = 0;
  }
  uVar8 = *(undefined4 *)(lVar27 + 0x2d3b4);
  iVar101 = 0;
  if (*(int *)(pbVar45 + 0x99c) != 0xf) {
    iVar101 = *(int *)(pbVar45 + 0x99c) + 1;
  }
  *(int *)(pbVar45 + 0x99c) = iVar101;
  *(undefined4 *)(pbVar23 + ((long)iVar101 + 0x10ae43) * 4) = uVar8;
  iVar101 = 0;
  if (*(int *)(pbVar45 + 0x9e0) != 0xf) {
    iVar101 = *(int *)(pbVar45 + 0x9e0) + 1;
  }
  iVar104 = *(int *)(lVar27 + 0x14);
  *(int *)(pbVar45 + 0x9e0) = iVar101;
  *(float *)(pbVar23 + ((long)iVar101 + 0x10ae54) * 4) = (float)iVar104;
  pbVar30 = pbVar23 + 0x42b608;
  iVar101 = 0;
  if (*(int *)(pbVar45 + 0x928) != 0xb) {
    iVar101 = *(int *)(pbVar45 + 0x928) + 1;
  }
  *(int *)(pbVar45 + 0x928) = iVar101;
  lVar27 = 0x22448;
  lVar19 = 5;
  do {
    iVar101 = *(int *)(pbVar45 + 0x928);
    uVar87 = *(undefined8 *)(*(long *)pbVar45 + lVar27);
    *(undefined4 *)(pbVar30 + (long)iVar101 * 0x3c + 8) =
         *(undefined4 *)((undefined8 *)(*(long *)pbVar45 + lVar27) + 1);
    *(undefined8 *)(pbVar30 + (long)iVar101 * 0x3c) = uVar87;
    pbVar30 = pbVar30 + 0xc;
    lVar27 = lVar27 + 0x2318;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  iVar101 = 0;
  iVar104 = 0;
  if (*(int *)(pbVar45 + 0x560) != 0xb) {
    iVar104 = *(int *)(pbVar45 + 0x560) + 1;
  }
  *(int *)(pbVar45 + 0x560) = iVar104;
  *(int *)(pbVar23 + ((long)iVar104 + 0x10ad26) * 4) = *(int *)(pbVar45 + 0x4d4);
  iVar107 = *(int *)(pbVar45 + 0x560);
  iVar104 = -10;
  do {
    iVar36 = iVar107 + 0xc;
    if (-1 < iVar107) {
      iVar36 = iVar107;
    }
    iVar101 = *(int *)(pbVar23 + ((long)iVar36 + 0x10ad26) * 4) + iVar101;
    iVar107 = iVar107 + -1;
    bVar14 = iVar104 != -1;
    iVar104 = iVar104 + 1;
  } while (bVar14);
  if (iVar101 < 5) {
    iVar101 = *(int *)pbVar109 + -1;
    if (0 < *(int *)pbVar109) goto LAB_10967ac44;
  }
  else {
    iVar101 = 1;
LAB_10967ac44:
    *(int *)pbVar109 = iVar101;
  }
  FUN_10967fa38(0);
  *(uint *)(*(long *)pbVar40 + 0xf88) =
       (uint)(*(int *)(pbVar45 + 0x4d0) == 1 || *(int *)(pbVar45 + 0x4cc) == 1);
  lVar43 = *(long *)(pbVar23 + 0x67c8);
  lVar19 = *(long *)pbVar45;
  puVar22 = (undefined4 *)(lVar19 + 0x22414);
  lVar27 = 5;
  puVar25 = (undefined4 *)(lVar43 + 8);
  do {
    *(undefined8 *)(puVar25 + -2) = *(undefined8 *)(puVar22 + 0xd);
    *puVar25 = *puVar22;
    puVar22 = puVar22 + 0x8c6;
    lVar27 = lVar27 + -1;
    puVar25 = puVar25 + 3;
  } while (lVar27 != 0);
  *(uint *)(lVar43 + 0x3c) = (uint)(*(int *)pbVar109 != 0);
  *(uint *)(lVar43 + 0x40) = (uint)(*(int *)(pbVar39 + 0xc) == 0);
  *(int *)(lVar43 + 0x44) = *(int *)pbVar44;
  *(int *)(lVar43 + 0x48) = *(int *)(pbVar44 + 0x18);
  *(int *)(lVar43 + 0x4c) = *(int *)(pbVar39 + 0xbe0);
  _memcpy(lVar43 + 0x500,lVar19 + 0x130,0x4b0);
  _memcpy(lVar43 + 0x50,*(long *)(pbVar45 + 0x20) + 0x130,0x4b0);
  _memcpy(lVar43 + 0x9b0,pbVar23 + 0x42bd88,0x4b0);
  *(undefined8 *)(lVar43 + 0xe70) = *(undefined8 *)pbStack_1100;
  *(int *)(lVar43 + 0xe78) = *(int *)(pbVar21 + 0xc);
  lVar27 = *(long *)pbVar45;
  *(undefined8 *)(lVar43 + 0xe7c) = *(undefined8 *)(lVar27 + 0xc);
  *(undefined8 *)(lVar43 + 0xe94) = *(undefined8 *)(lVar27 + 0x246e4);
  *(undefined4 *)(lVar43 + 0x2070) = **(undefined4 **)(pbVar45 + 0x18);
  *(undefined4 *)(lVar43 + 0xe6c) = *(undefined4 *)(*(long *)(pbVar45 + 0x20) + 0x246d8);
  *(undefined4 *)(lVar43 + 0xe60) = *(undefined4 *)(lVar27 + 0x2d3b4);
  uVar87 = *(undefined8 *)(pbVar23 + 0x42afe0);
  *(undefined8 *)(lVar43 + 0xe8c) = *(undefined8 *)(pbVar23 + 0x42afe8);
  *(undefined8 *)(lVar43 + 0xe84) = uVar87;
  lVar27 = *(long *)pbVar45;
  *(undefined4 *)(lVar43 + 0xe9c) = *(undefined4 *)(lVar27 + 0x2d38c);
  fVar82 = *(float *)(lVar27 + 0x246d8);
  *(float *)(lVar43 + 0xe64) = fVar82;
  *(float *)(lVar43 + 0xe68) = fVar82 * *(float *)(lVar27 + 0x246e0);
  *(undefined4 *)(lVar43 + 0xf7c) =
       *(undefined4 *)(pbVar23 + ((long)*(int *)(pbVar109 + 0x17c) + 0x10ad75) * 4);
  _memcpy(lVar43 + 0xf8c,lVar27 + 0x2479c,0x10e0);
  _memcpy(lVar43 + 0xb860,*(long *)pbVar45 + 0x220f4,400);
  lVar27 = *(long *)pbVar45;
  uVar8 = *(undefined4 *)(lVar27 + 0x70);
  uVar90 = *(undefined8 *)(lVar27 + 0x58);
  uVar87 = *(undefined8 *)(lVar27 + 0x50);
  uVar91 = *(undefined8 *)(lVar27 + 0x60);
  *(undefined8 *)(lVar43 + 0xba08) = *(undefined8 *)(lVar27 + 0x68);
  *(undefined8 *)(lVar43 + 0xba00) = uVar91;
  *(undefined8 *)(lVar43 + 0xb9f8) = uVar90;
  *(undefined8 *)(lVar43 + 0xb9f0) = uVar87;
  *(undefined4 *)(lVar43 + 0xba10) = uVar8;
  lVar27 = *(long *)pbVar45;
  uVar8 = *(undefined4 *)(lVar27 + 0x4c);
  uVar90 = *(undefined8 *)(lVar27 + 0x44);
  uVar87 = *(undefined8 *)(lVar27 + 0x3c);
  uVar91 = *(undefined8 *)(lVar27 + 0x2c);
  *(undefined8 *)(lVar43 + 0xba1c) = *(undefined8 *)(lVar27 + 0x34);
  *(undefined8 *)(lVar43 + 0xba14) = uVar91;
  *(undefined8 *)(lVar43 + 0xba2c) = uVar90;
  *(undefined8 *)(lVar43 + 0xba24) = uVar87;
  *(undefined4 *)(lVar43 + 0xba34) = uVar8;
  lVar27 = *(long *)pbVar45;
  *(undefined4 *)(lVar43 + 0xea0) = *(undefined4 *)(lVar27 + 0x246d4);
  _memcpy(lVar43 + 0xc070,lVar27 + 0x22414,0xaf78);
  lVar19 = *(long *)pbVar40;
  lVar27 = *(long *)pbVar45;
  *(long *)(lVar19 + 0xba38) = lVar27;
  *(int *)(lVar19 + 0x206c) = *(int *)pbVar23;
  *(byte **)(lVar19 + 0x2078) = pbVar23 + 0x42c788;
  *(byte **)(lVar19 + 0x16fe8) = pbVar23 + 0x681c;
  *(undefined8 *)(lVar19 + 0x16ff0) = 0;
  *(byte **)(lVar19 + 0x17000) = pbVar23 + 0x124fd8;
  *(undefined8 *)(lVar19 + 0x17008) = 0;
  *(byte **)(lVar19 + 0x16ff8) = pbStack_1110;
  lVar43 = *(long *)(pbVar23 + 0x67c8);
  *(undefined4 *)(lVar43 + 0xba40) = 0x441c8000;
  puVar22 = (undefined4 *)(lVar27 + 0x2244c);
  lVar19 = 5;
  puVar25 = (undefined4 *)(lVar43 + 0xba98);
  puVar28 = *(undefined4 **)(pbVar23 + 0x67d0);
  do {
    puVar25[-0x15] = puVar22[-1];
    puVar25[-0x10] = *puVar22;
    puVar25[-10] = puVar28[4];
    puVar25[-5] = puVar28[5];
    *puVar25 = puVar28[1];
    puVar22 = puVar22 + 0x8c6;
    lVar19 = lVar19 + -1;
    puVar25 = puVar25 + 1;
    puVar28 = puVar28 + 5;
  } while (lVar19 != 0);
  pbVar109 = (byte *)(lVar43 + 0xbb74);
  lVar27 = lVar27 + 0x130;
  _memcpy(pbVar109,lVar27,0x4b0);
  puVar22 = *(undefined4 **)(pbVar23 + 0x67d0);
  uVar8 = NEON_ucvtf(*puVar22);
  *(undefined4 *)(lVar43 + 0xba6c) = uVar8;
  *(float *)(lVar43 + 0xbaac) = (float)(int)puVar22[0x28];
  uVar87 = NEON_scvtf(*(undefined8 *)(lVar43 + 0x206c),4);
  *(undefined8 *)(lVar43 + 0xbab0) = uVar87;
  lVar19 = *(long *)pbVar45;
  *(undefined4 *)(lVar43 + 0xbab8) = *(undefined4 *)(lVar19 + 0x2d38c);
  uVar87 = NEON_scvtf(*(undefined8 *)(lVar19 + 0xc),4);
  *(undefined8 *)(lVar43 + 0xbabc) = uVar87;
  *(undefined8 *)(lVar43 + 0xbac4) = *(undefined8 *)(lVar19 + 0x246d8);
  uVar87 = *(undefined8 *)(lVar19 + 0x24644);
  *(undefined4 *)(lVar43 + 0xbad4) = *(undefined4 *)(lVar19 + 0x2464c);
  *(undefined8 *)(lVar43 + 0xbacc) = uVar87;
  uVar87 = *(undefined8 *)(*(long *)pbVar45 + 0x24650);
  *(undefined4 *)(lVar43 + 0xbae0) = *(undefined4 *)(*(long *)pbVar45 + 0x24658);
  *(undefined8 *)(lVar43 + 0xbad8) = uVar87;
  uVar87 = *(undefined8 *)(*(long *)pbVar45 + 0x2465c);
  *(undefined4 *)(lVar43 + 0xbaec) = *(undefined4 *)(*(long *)pbVar45 + 0x24664);
  *(undefined8 *)(lVar43 + 0xbae4) = uVar87;
  uVar87 = *(undefined8 *)(*(long *)pbVar45 + 0x24668);
  *(undefined4 *)(lVar43 + 0xbaf8) = *(undefined4 *)(*(long *)pbVar45 + 0x24670);
  *(undefined8 *)(lVar43 + 0xbaf0) = uVar87;
  lVar41 = 8;
  lVar19 = 0x24674;
  puVar18 = (undefined8 *)(lVar43 + 0xbafc);
  do {
    uVar87 = *(undefined8 *)(*(long *)pbVar45 + lVar19);
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)((undefined8 *)(*(long *)pbVar45 + lVar19) + 1);
    *puVar18 = uVar87;
    lVar19 = lVar19 + 0xc;
    lVar41 = lVar41 + -1;
    puVar18 = (undefined8 *)((long)puVar18 + 0xc);
  } while (lVar41 != 0);
  lVar19 = *(long *)(pbVar23 + 0x67d0);
  *(undefined4 *)(lVar43 + 0xbb5c) = *(undefined4 *)(lVar19 + 0x78);
  *(undefined4 *)(lVar43 + 0xbb60) = *(undefined4 *)(lVar19 + 0x74);
  *(undefined4 *)(lVar43 + 0xbb64) = *(undefined4 *)(lVar19 + 0x7c);
  *(undefined4 *)(lVar43 + 0xbb70) = *(undefined4 *)(lVar43 + 0xf88);
  *(undefined4 *)(lVar43 + 0xbb68) = uRam000000011382a480;
  if ((bRam0000000113734810 & 1) == 0) {
    pbVar109 = &bRam0000000113734810;
    ___cxa_guard_acquire();
    if ((int)pbVar109 != 0) {
      fRam00000001137347f0 = *(float *)(*(long *)(pbVar23 + 0x67d0) + 0xa4) * 1000.0;
      pbVar109 = &bRam0000000113734810;
      ___cxa_guard_release();
    }
  }
  fVar82 = *(float *)(*(long *)(pbVar23 + 0x67d0) + 0xa4) * 1000.0;
  *(float *)(lVar43 + 0xbb6c) = fVar82 - fRam00000001137347f0;
  lVar19 = *(long *)(pbVar40 + 8);
  uVar56 = (undefined1)((ulong)lVar19 >> 8);
  uVar61 = (undefined1)((ulong)lVar19 >> 0x10);
  uVar66 = (undefined1)((ulong)lVar19 >> 0x18);
  uVar67 = (undefined1)((ulong)lVar19 >> 0x20);
  uVar71 = (undefined1)((ulong)lVar19 >> 0x28);
  uVar74 = (undefined1)((ulong)lVar19 >> 0x30);
  uVar77 = (undefined1)((ulong)lVar19 >> 0x38);
  lVar19 = *(long *)pbVar40;
  auVar89[9] = uVar56;
  auVar89._0_9_ = *(unkbyte9 *)pbVar40;
  auVar89[10] = uVar61;
  auVar89[0xb] = uVar66;
  auVar89[0xc] = uVar67;
  auVar89[0xd] = uVar71;
  auVar89[0xe] = uVar74;
  auVar89[0xf] = uVar77;
  auVar7[9] = uVar56;
  auVar7._0_9_ = *(unkbyte9 *)pbVar40;
  auVar7[10] = uVar61;
  auVar7[0xb] = uVar66;
  auVar7[0xc] = uVar67;
  auVar7[0xd] = uVar71;
  auVar7[0xe] = uVar74;
  auVar7[0xf] = uVar77;
  auVar89 = NEON_ext(auVar89,auVar7,8,1);
  *(long *)(pbVar40 + 8) = auVar89._8_8_;
  *(long *)pbVar40 = auVar89._0_8_;
  fRam00000001137347f0 = fVar82;
  if ((*(byte *)((long)piVar17 + 0x99) >> 1 & 1) != 0) {
    lVar41 = 0;
    do {
      uVar87 = *(undefined8 *)(lVar19 + lVar41);
      fVar82 = (float)uVar87;
      fVar105 = (float)((ulong)uVar87 >> 0x20);
      fVar105 = fVar105 + fVar105;
      *(ulong *)(lVar19 + lVar41) =
           CONCAT17((char)((uint)fVar105 >> 0x18),
                    CONCAT16((char)((uint)fVar105 >> 0x10),
                             CONCAT15((char)((uint)fVar105 >> 8),
                                      CONCAT14(SUB41(fVar105,0),fVar82 + fVar82))));
      lVar41 = lVar41 + 0xc;
    } while (lVar41 != 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pbVar109;
  }
  ___stack_chk_fail();
  uStack_11d0 = 0x206c;
  pcStack_11a8 = FUN_10967b280;
  pbStack_11f0 = pbVar39;
  pbStack_11e8 = pbVar45;
  pbStack_11e0 = pbVar44;
  pbStack_11d8 = pbVar21;
  lStack_11c8 = lVar43;
  pbStack_11c0 = pbVar23;
  puStack_11b8 = (undefined4 *)(lVar43 + 0xba40);
  ppuStack_11b0 = &puStack_90;
  func_0x000107c31940(&ppppuStack_1208,&UNK_10f57b978);
  func_0x000107c31940(&puStack_1220,lVar27);
  uVar26 = (uint)(char)bStack_11f1;
  pppppuVar16 = (undefined8 *****)ppppuStack_1208;
  uVar31 = uStack_1200;
  if (-1 < (int)uVar26) {
    pppppuVar16 = &ppppuStack_1208;
    uVar31 = (ulong)bStack_11f1;
  }
  ppuVar5 = (undefined1 **)puStack_1220;
  uVar86 = uStack_1218;
  if (-1 < cStack_1209) {
    ppuVar5 = &puStack_1220;
    uVar86 = (long)cStack_1209;
  }
  uVar6 = uVar86;
  if (uVar31 <= uVar86) {
    uVar6 = uVar31;
  }
  _memcmp(pppppuVar16,ppuVar5,uVar6);
  if ((long)cStack_1209 < 0) {
    __ZdlPv(puStack_1220);
    if (-1 < (char)bStack_11f1) goto LAB_10967b30c;
  }
  else if ((uVar26 >> 7 & 1) == 0) goto LAB_10967b30c;
  __ZdlPv(ppppuStack_1208);
LAB_10967b30c:
  pbVar23 = *(byte **)(pbVar109 + 0xf5980);
  if ((int)pppppuVar16 != 0 || uVar86 != uVar31) {
    pbVar23 = (byte *)0x0;
  }
  return pbVar23;
}



/* Entry: 109677ed0; end: 10967b27f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000109678400 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte * FUN_109677ed0(int *param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 **ppuVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int *piVar16;
  undefined8 *****pppppuVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined4 *puVar20;
  byte *pbVar21;
  long lVar22;
  int *piVar23;
  undefined4 *puVar24;
  uint uVar25;
  long lVar26;
  undefined4 *puVar27;
  uint uVar28;
  ulong uVar29;
  int *piVar30;
  uint uVar31;
  int *piVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  long lVar36;
  int *piVar37;
  int *piVar38;
  long lVar39;
  long *plVar40;
  int iVar41;
  int iVar42;
  undefined1 in_b0;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 in_register_00005001;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 in_register_00005002;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  char in_register_00005003;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  char cVar63;
  undefined1 in_register_00005004;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 in_register_00005005;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 in_register_00005006;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  char in_register_00005007;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  char cVar76;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float fVar77;
  float fVar78;
  double extraout_d1;
  double extraout_d1_00;
  double dVar79;
  double dVar80;
  undefined1 auVar83 [16];
  ulong uVar81;
  undefined8 uVar82;
  undefined1 auVar84 [16];
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  double dVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  int iVar96;
  float fVar97;
  double dVar98;
  int iVar99;
  float fVar100;
  double dVar101;
  int iVar102;
  double dVar103;
  int *piVar104;
  double dVar105;
  double dVar106;
  int *piVar107;
  double dVar108;
  double dVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 *puStack_11a0;
  ulong uStack_1198;
  char cStack_1189;
  undefined8 ****ppppuStack_1188;
  ulong uStack_1180;
  byte bStack_1171;
  int *piStack_1170;
  long *plStack_1168;
  int *piStack_1160;
  int *piStack_1158;
  undefined8 uStack_1150;
  long lStack_1148;
  int *piStack_1140;
  undefined4 *puStack_1138;
  undefined1 *puStack_1130;
  code *pcStack_1128;
  undefined4 uStack_1120;
  double dStack_1118;
  double dStack_1110;
  double dStack_1108;
  double dStack_1100;
  int *piStack_10f8;
  int *piStack_10f0;
  long *plStack_10e8;
  double dStack_10e0;
  int *piStack_10d8;
  long *plStack_10d0;
  int *piStack_10c8;
  int *piStack_10c0;
  undefined8 uStack_10b8;
  double dStack_10b0;
  undefined8 uStack_10a8;
  int *piStack_10a0;
  int *piStack_1098;
  int *piStack_1090;
  int *piStack_1088;
  int *piStack_1080;
  int *piStack_1078;
  int *piStack_1070;
  long *plStack_1068;
  int *piStack_1060;
  int aiStack_1058 [2];
  long alStack_1050 [2];
  undefined8 uStack_103c;
  undefined8 uStack_1028;
  undefined8 uStack_1014;
  undefined8 uStack_1000;
  float fStack_fec;
  float fStack_fe4;
  float fStack_fe0;
  float fStack_fdc;
  int iStack_fd4;
  int iStack_fd0;
  int iStack_fcc;
  undefined8 uStack_fc8;
  uint uStack_fc0;
  float fStack_d10;
  float fStack_d0c;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  float fStack_690;
  float fStack_680;
  float fStack_67c;
  float fStack_674;
  float fStack_670;
  undefined8 uStack_668;
  uint uStack_660;
  float fStack_65c;
  float fStack_658;
  undefined4 uStack_654;
  float fStack_650;
  float fStack_64c;
  undefined4 uStack_648;
  float fStack_644;
  float fStack_640;
  undefined4 uStack_63c;
  undefined1 auStack_638 [8];
  uint uStack_630;
  undefined1 auStack_62c [12];
  undefined1 auStack_620 [8];
  int iStack_618;
  undefined8 uStack_610;
  undefined4 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined4 uStack_5e0;
  float fStack_5dc;
  float fStack_5d8;
  undefined4 uStack_5d4;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_150;
  float afStack_148 [4];
  undefined8 uStack_138;
  undefined4 uStack_130;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  float fStack_e8;
  float fStack_e4;
  float afStack_e0 [5];
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  long lStack_b8;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_3[0x1a] = 0;
  _memcpy(aiStack_1058,param_3,0x9a8);
  if ((bRam0000000113734828 & 1) == 0) {
    iVar96 = 0x13734828;
    ___cxa_guard_acquire();
    if (iVar96 != 0) {
      iRam0000000113734800 = param_3[0x1e];
      ___cxa_guard_release(&bRam0000000113734828);
    }
  }
  if ((bRam0000000113734830 & 1) == 0) {
    iVar96 = 0x13734830;
    ___cxa_guard_acquire();
    if (iVar96 != 0) {
      iRam0000000113734804 = param_3[0x1d];
      ___cxa_guard_release(&bRam0000000113734830);
    }
  }
  piVar16 = param_1 + 0x10aee5;
  if ((bRam0000000113734838 & 1) == 0) {
    iVar96 = 0x13734838;
    ___cxa_guard_acquire();
    if (iVar96 != 0) {
      iRam0000000113734808 = param_3[0x1f];
      ___cxa_guard_release(&bRam0000000113734838);
    }
  }
  iVar96 = param_3[0x1d];
  iVar99 = param_3[0x1e];
  iStack_fd0 = iVar99;
  iStack_fd4 = iVar96;
  iVar102 = param_3[0x1f];
  iStack_fcc = iVar102;
  if ((*param_3 == 0) || (param_1[0x10b1e1] != 0)) {
    param_1[0x10b1e1] = 0;
    *param_3 = 0;
    uVar25 = param_3[0x26];
    uRam00000001137347fc = uVar25 >> 0xd & 1;
    iRam0000000113734800 = iVar99;
    iRam0000000113734804 = iVar96;
    iRam0000000113734808 = iVar102;
  }
  else {
    uVar25 = param_3[0x26];
  }
  iVar2 = iRam0000000113734804;
  iVar34 = iRam0000000113734800;
  if ((uVar25 >> 10 & 1) == 0) {
    if (uRam00000001137347fc == 1) {
      uVar43 = (undefined1)iRam0000000113734808;
      uVar47 = (undefined1)((uint)iRam0000000113734808 >> 8);
      uVar52 = (undefined1)((uint)iRam0000000113734808 >> 0x10);
      uVar57 = (undefined1)((uint)iRam0000000113734808 >> 0x18);
      ___sincosf_stret();
      dVar108 = (double)extraout_s1;
      uVar44 = (undefined1)iVar34;
      uVar48 = (undefined1)((uint)iVar34 >> 8);
      uVar53 = (undefined1)((uint)iVar34 >> 0x10);
      uVar58 = (undefined1)((uint)iVar34 >> 0x18);
      ___sincosf_stret();
      piStack_1090 = (int *)(double)extraout_s1_00;
      uVar45 = (undefined1)iVar2;
      uVar49 = (undefined1)((uint)iVar2 >> 8);
      uVar54 = (undefined1)((uint)iVar2 >> 0x10);
      uVar59 = (undefined1)((uint)iVar2 >> 0x18);
      ___sincosf_stret();
      plStack_1068 = (long *)(double)(float)CONCAT13(uVar57,CONCAT12(uVar52,CONCAT11(uVar47,uVar43))
                                                    );
      dVar105 = (double)(float)CONCAT13(uVar58,CONCAT12(uVar53,CONCAT11(uVar48,uVar44)));
      piStack_1060 = (int *)(double)(float)CONCAT13(uVar59,CONCAT12(uVar54,CONCAT11(uVar49,uVar45)))
      ;
      uVar43 = (undefined1)iVar102;
      uVar47 = (undefined1)((uint)iVar102 >> 8);
      uVar52 = (undefined1)((uint)iVar102 >> 0x10);
      uVar57 = (undefined1)((uint)iVar102 >> 0x18);
      piStack_1098 = (int *)(double)extraout_s1_01;
      ___sincosf_stret();
      piStack_1070 = (int *)(double)extraout_s1_02;
      uVar44 = (undefined1)iVar99;
      uVar48 = (undefined1)((uint)iVar99 >> 8);
      uVar53 = (undefined1)((uint)iVar99 >> 0x10);
      uVar58 = (undefined1)((uint)iVar99 >> 0x18);
      ___sincosf_stret();
      piVar107 = (int *)(double)extraout_s1_03;
      uVar45 = (undefined1)iVar96;
      uVar49 = (undefined1)((uint)iVar96 >> 8);
      uVar54 = (undefined1)((uint)iVar96 >> 0x10);
      uVar59 = (undefined1)((uint)iVar96 >> 0x18);
      ___sincosf_stret();
      dVar103 = (double)extraout_s1_04;
      piStack_1088 = (int *)(double)(float)CONCAT13(uVar57,CONCAT12(uVar52,CONCAT11(uVar47,uVar43)))
      ;
      dVar91 = (double)(float)CONCAT13(uVar58,CONCAT12(uVar53,CONCAT11(uVar48,uVar44)));
      piVar104 = (int *)(double)(float)CONCAT13(uVar59,CONCAT12(uVar54,CONCAT11(uVar49,uVar45)));
      piStack_10a0 = (int *)((double)piVar107 * (double)piStack_1088 * (double)piVar104);
      dStack_10b0 = -(dVar108 * (double)piStack_1090) * (double)piStack_1060 +
                    dVar105 * (double)plStack_1068;
      plStack_10d0 = (long *)((double)piStack_1090 * (double)plStack_1068 * (double)piStack_1060 +
                             dVar105 * dVar108);
      dVar101 = -((double)piStack_1070 * (double)piVar107) * (double)piVar104 +
                dVar91 * (double)piStack_1088;
      piStack_10c0 = (int *)(dVar91 * (double)piStack_1070 * (double)piVar104 +
                            (double)piStack_1088 * (double)piVar107);
      dVar98 = -(dVar103 * (double)piStack_1088) * (double)plStack_10d0 +
               dStack_10b0 * dVar103 * (double)piStack_1070 +
               (double)piVar104 * (double)piStack_1090 * (double)extraout_s1_01;
      uVar43 = SUB81(dVar98,0);
      uVar44 = (undefined1)((ulong)dVar98 >> 8);
      uVar45 = (undefined1)((ulong)dVar98 >> 0x10);
      uVar47 = (undefined1)((ulong)dVar98 >> 0x18);
      uVar48 = (undefined1)((ulong)dVar98 >> 0x20);
      uVar49 = (undefined1)((ulong)dVar98 >> 0x28);
      uVar52 = (undefined1)((ulong)dVar98 >> 0x30);
      uVar53 = (undefined1)((ulong)dVar98 >> 0x38);
      piStack_10f0 = piVar104;
      dStack_10e0 = dVar91;
      piStack_10d8 = piVar107;
      piStack_1080 = (int *)dVar108;
      _asin();
      piVar38 = piStack_1070;
      piVar37 = piStack_1098;
      dVar105 = (double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                )) + -6.283185307179586;
      bVar13 = false;
      bVar15 = false;
      bVar14 = NAN((double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                  )));
      if (!bVar14) {
        bVar13 = (double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                 )) < 3.141592653589793;
        bVar15 = (double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                 )) == 3.141592653589793;
      }
      uVar54 = SUB81(dVar105,0);
      uVar57 = (char)((ulong)dVar105 >> 8);
      uVar58 = (char)((ulong)dVar105 >> 0x10);
      uVar59 = (char)((ulong)dVar105 >> 0x18);
      uVar64 = (char)((ulong)dVar105 >> 0x20);
      uVar67 = (char)((ulong)dVar105 >> 0x28);
      uVar70 = (char)((ulong)dVar105 >> 0x30);
      uVar73 = (char)((ulong)dVar105 >> 0x38);
      if (bVar15 || bVar13 != bVar14) {
        uVar54 = uVar43;
        uVar57 = uVar44;
        uVar58 = uVar45;
        uVar59 = uVar47;
        uVar64 = uVar48;
        uVar67 = uVar49;
        uVar70 = uVar52;
        uVar73 = uVar53;
      }
      dVar105 = 3.141592653589793 -
                (double)CONCAT17(uVar73,CONCAT16(uVar70,CONCAT15(uVar67,CONCAT14(uVar64,CONCAT13(
                                                  uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar54)))))
                                                ));
      if (ABS(3.141592653589793 -
              (double)CONCAT17(uVar73,CONCAT16(uVar70,CONCAT15(uVar67,CONCAT14(uVar64,CONCAT13(
                                                  uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar54)))))
                                              ))) <=
          ABS((double)CONCAT17(uVar73,CONCAT16(uVar70,CONCAT15(uVar67,CONCAT14(uVar64,CONCAT13(
                                                  uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar54)))))
                                              )))) {
        uVar54 = SUB81(dVar105,0);
        uVar57 = (undefined1)((ulong)dVar105 >> 8);
        uVar58 = (undefined1)((ulong)dVar105 >> 0x10);
        uVar59 = (undefined1)((ulong)dVar105 >> 0x18);
        uVar64 = (undefined1)((ulong)dVar105 >> 0x20);
        uVar67 = (undefined1)((ulong)dVar105 >> 0x28);
        uVar70 = (undefined1)((ulong)dVar105 >> 0x30);
        uVar73 = (undefined1)((ulong)dVar105 >> 0x38);
      }
      piStack_1078 = (int *)CONCAT17(uVar73,CONCAT16(uVar70,CONCAT15(uVar67,CONCAT14(uVar64,CONCAT13
                                                  (uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar54))))
                                                  )));
      dVar105 = 1.0 - dVar98 * dVar98;
      dVar98 = 1e-07;
      if (dVar105 != 0.0) {
        dVar98 = SQRT(dVar105);
      }
      dVar91 = (double)piStack_10a0 + dVar91 * (double)piStack_1070;
      dVar105 = (dVar101 * dStack_10b0 + dVar91 * (double)plStack_10d0 +
                dVar103 * (double)piVar107 * (double)piStack_1090 * (double)piStack_1098) / dVar98;
      uVar43 = 0;
      uVar44 = 0;
      uVar45 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 0;
      uVar52 = 0xf0;
      uVar53 = 0x3f;
      if (dVar105 <= 1.0) {
        uVar43 = SUB81(dVar105,0);
        uVar44 = (char)((ulong)dVar105 >> 8);
        uVar45 = (char)((ulong)dVar105 >> 0x10);
        uVar47 = (char)((ulong)dVar105 >> 0x18);
        uVar48 = (char)((ulong)dVar105 >> 0x20);
        uVar49 = (char)((ulong)dVar105 >> 0x28);
        uVar52 = (char)((ulong)dVar105 >> 0x30);
        uVar53 = (char)((ulong)dVar105 >> 0x38);
      }
      bVar14 = false;
      if (!NAN((double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                               )))) {
        bVar14 = (double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                 )) < -1.0;
      }
      uVar54 = 0;
      uVar57 = 0;
      uVar58 = 0;
      uVar59 = 0;
      uVar64 = 0;
      uVar67 = 0;
      uVar70 = 0xf0;
      uVar73 = 0xbf;
      if (!bVar14) {
        uVar54 = uVar43;
        uVar57 = uVar44;
        uVar58 = uVar45;
        uVar59 = uVar47;
        uVar64 = uVar48;
        uVar67 = uVar49;
        uVar70 = uVar52;
        uVar73 = uVar53;
      }
      dStack_10b0 = dVar91;
      piStack_10a0 = (int *)dVar101;
      _acos();
      piStack_1090 = (int *)-(double)CONCAT17(uVar73,CONCAT16(uVar70,CONCAT15(uVar67,CONCAT14(uVar64
                                                  ,CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,
                                                  uVar54)))))));
      dVar98 = ((double)piVar38 * (double)piStack_1080 * (double)piVar37 * dVar103 +
                (double)piVar104 * (double)piStack_1060 +
               (double)piStack_1088 * dVar103 * (double)piVar37 * (double)plStack_1068) / dVar98;
      uVar43 = 0;
      uVar44 = 0;
      uVar45 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 0;
      uVar52 = 0xf0;
      uVar53 = 0x3f;
      if (dVar98 <= 1.0) {
        uVar43 = SUB81(dVar98,0);
        uVar44 = (char)((ulong)dVar98 >> 8);
        uVar45 = (char)((ulong)dVar98 >> 0x10);
        uVar47 = (char)((ulong)dVar98 >> 0x18);
        uVar48 = (char)((ulong)dVar98 >> 0x20);
        uVar49 = (char)((ulong)dVar98 >> 0x28);
        uVar52 = (char)((ulong)dVar98 >> 0x30);
        uVar53 = (char)((ulong)dVar98 >> 0x38);
      }
      bVar14 = false;
      if (!NAN((double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                               )))) {
        bVar14 = (double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                 )) < -1.0;
      }
      uVar46 = 0;
      uVar50 = 0;
      uVar55 = 0;
      uVar60 = 0;
      uVar65 = 0;
      uVar68 = 0;
      uVar71 = 0xf0;
      uVar74 = 0xbf;
      if (!bVar14) {
        uVar46 = uVar43;
        uVar50 = uVar44;
        uVar55 = uVar45;
        uVar60 = uVar47;
        uVar65 = uVar48;
        uVar68 = uVar49;
        uVar71 = uVar52;
        uVar74 = uVar53;
      }
      _acos();
      dStack_1108 = -(double)CONCAT17(uVar74,CONCAT16(uVar71,CONCAT15(uVar68,CONCAT14(uVar65,
                                                  CONCAT13(uVar60,CONCAT12(uVar55,CONCAT11(uVar50,
                                                  uVar46)))))));
      plStack_10d0 = (long *)CONCAT17(uVar73,CONCAT16(uVar70,CONCAT15(uVar67,CONCAT14(uVar64,
                                                  CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,
                                                  uVar54)))))));
      ___sincos_stret();
      plVar19 = (long *)CONCAT17(uVar73,CONCAT16(uVar70,CONCAT15(uVar67,CONCAT14(uVar64,CONCAT13(
                                                  uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar54)))))
                                                ));
      dStack_1118 = (double)CONCAT17(uVar74,CONCAT16(uVar71,CONCAT15(uVar68,CONCAT14(uVar65,CONCAT13
                                                  (uVar60,CONCAT12(uVar55,CONCAT11(uVar50,uVar46))))
                                                  )));
      ___sincos_stret();
      dVar91 = (double)CONCAT17(uVar74,CONCAT16(uVar71,CONCAT15(uVar68,CONCAT14(uVar65,CONCAT13(
                                                  uVar60,CONCAT12(uVar55,CONCAT11(uVar50,uVar46)))))
                                               ));
      uVar43 = SUB81(piStack_1078,0);
      uVar44 = (undefined1)((ulong)piStack_1078 >> 8);
      uVar45 = (undefined1)((ulong)piStack_1078 >> 0x10);
      uVar47 = (undefined1)((ulong)piStack_1078 >> 0x18);
      uVar48 = (undefined1)((ulong)piStack_1078 >> 0x20);
      uVar49 = (undefined1)((ulong)piStack_1078 >> 0x28);
      uVar52 = (undefined1)((ulong)piStack_1078 >> 0x30);
      uVar53 = (undefined1)((ulong)piStack_1078 >> 0x38);
      dStack_1100 = extraout_d1_00;
      plStack_10e8 = plVar19;
      _sin();
      dVar98 = (double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                               ));
      dVar109 = (double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                )) * extraout_d1_00 * (double)plVar19;
      dStack_1110 = dVar109 + dVar91 * extraout_d1;
      uVar43 = SUB81(piStack_1090,0);
      uVar44 = (undefined1)((ulong)piStack_1090 >> 8);
      uVar45 = (undefined1)((ulong)piStack_1090 >> 0x10);
      uVar47 = (undefined1)((ulong)piStack_1090 >> 0x18);
      uVar48 = (undefined1)((ulong)piStack_1090 >> 0x20);
      uVar49 = (undefined1)((ulong)piStack_1090 >> 0x28);
      uVar52 = (undefined1)((ulong)piStack_1090 >> 0x30);
      uVar53 = (undefined1)((ulong)piStack_1090 >> 0x38);
      _sin();
      dVar106 = dStack_1108;
      dVar101 = (double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                ));
      uVar43 = SUB81(dStack_1108,0);
      uVar44 = (undefined1)((ulong)dStack_1108 >> 8);
      uVar45 = (undefined1)((ulong)dStack_1108 >> 0x10);
      uVar47 = (undefined1)((ulong)dStack_1108 >> 0x18);
      uVar48 = (undefined1)((ulong)dStack_1108 >> 0x20);
      uVar49 = (undefined1)((ulong)dStack_1108 >> 0x28);
      uVar52 = (undefined1)((ulong)dStack_1108 >> 0x30);
      uVar53 = (undefined1)((ulong)dStack_1108 >> 0x38);
      _sin();
      piVar37 = piStack_10d8;
      dVar108 = (double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                                ));
      piStack_10f8 = (int *)((double)piStack_1098 * (double)piStack_1080);
      dVar105 = (double)piStack_1098 * (double)plStack_1068;
      dVar79 = -(dVar103 * dStack_10e0) * (double)piStack_1060 +
               (double)piStack_10c0 * (double)piStack_10f8 +
               (-((double)piStack_1088 * dStack_10e0) * (double)piStack_10f0 +
               (double)piStack_10d8 * (double)piStack_1070) * -dVar105;
      dVar80 = dVar98 * dStack_1100 * dVar101;
      dVar9 = ABS((dVar80 + dVar91 * extraout_d1) - dVar79);
      dVar80 = ABS((dVar80 + dVar108 * extraout_d1) - dVar79);
      bVar14 = false;
      if ((ABS(dStack_1110 - dVar79) <
           ABS((dVar109 +
               (double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(
                                                  uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)))))
                                               )) * extraout_d1) - dVar79)) &&
         (bVar14 = false, !NAN(dVar9) && !NAN(dVar80))) {
        bVar14 = dVar9 < dVar80;
      }
      if (bVar14) {
        dVar108 = dVar91;
        dVar106 = dStack_1118;
      }
      uVar43 = SUB81(dVar106,0);
      uVar44 = (undefined1)((ulong)dVar106 >> 8);
      uVar45 = (undefined1)((ulong)dVar106 >> 0x10);
      uVar47 = (undefined1)((ulong)dVar106 >> 0x18);
      uVar48 = (undefined1)((ulong)dVar106 >> 0x20);
      uVar49 = (undefined1)((ulong)dVar106 >> 0x28);
      uVar52 = (undefined1)((ulong)dVar106 >> 0x30);
      uVar53 = (undefined1)((ulong)dVar106 >> 0x38);
      piStack_1080 = (int *)dVar103;
      plStack_1068 = (long *)dVar101;
      _cos();
      dVar98 = dVar98 * -((double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar49,CONCAT14(uVar48,
                                                  CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar44,
                                                  uVar43))))))) * extraout_d1);
      dVar105 = dStack_10b0 * -dVar105 + (double)piStack_10a0 * (double)piStack_10f8 +
                (double)piStack_1060 * (double)piVar37 * (double)piStack_1080;
      in_b0 = SUB81(plStack_10d0,0);
      in_register_00005001 = (undefined1)((ulong)plStack_10d0 >> 8);
      in_register_00005002 = (undefined1)((ulong)plStack_10d0 >> 0x10);
      in_register_00005003 = (char)((ulong)plStack_10d0 >> 0x18);
      in_register_00005004 = (undefined1)((ulong)plStack_10d0 >> 0x20);
      in_register_00005005 = (undefined1)((ulong)plStack_10d0 >> 0x28);
      in_register_00005006 = (undefined1)((ulong)plStack_10d0 >> 0x30);
      in_register_00005007 = (char)((ulong)plStack_10d0 >> 0x38);
      if (ABS((dVar98 + (double)plStack_1068 * dVar108) - dVar105) <=
          ABS((dVar98 + (double)plStack_10e8 * dVar108) - dVar105)) {
        in_b0 = SUB81(piStack_1090,0);
        in_register_00005001 = (undefined1)((ulong)piStack_1090 >> 8);
        in_register_00005002 = (undefined1)((ulong)piStack_1090 >> 0x10);
        in_register_00005003 = (char)((ulong)piStack_1090 >> 0x18);
        in_register_00005004 = (undefined1)((ulong)piStack_1090 >> 0x20);
        in_register_00005005 = (undefined1)((ulong)piStack_1090 >> 0x28);
        in_register_00005006 = (undefined1)((ulong)piStack_1090 >> 0x30);
        in_register_00005007 = (char)((ulong)piStack_1090 >> 0x38);
      }
      fStack_fe0 = (float)(double)CONCAT17(in_register_00005007,
                                           CONCAT16(in_register_00005006,
                                                    CONCAT15(in_register_00005005,
                                                             CONCAT14(in_register_00005004,
                                                                      CONCAT13(in_register_00005003,
                                                                               CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
      fStack_fe4 = (float)(double)piStack_1078;
      fStack_fdc = (float)dVar106;
      param_3[0x21] = (int)(float)(double)piStack_1078;
      param_3[0x22] = (int)fStack_fe0;
      param_3[0x23] = (int)(float)dVar106;
      iVar96 = 1;
    }
    else {
      iVar96 = 0;
    }
  }
  else {
    iVar96 = 0;
    uRam00000001137347fc = 0;
  }
  if ((uVar25 >> 9 & 1) != 0) {
    fStack_fec = fStack_fec * 0.5;
    in_register_00005003 = (char)((ulong)uStack_fc8 >> 0x18) >> 1;
    iVar99 = (int)((long)uStack_fc8 >> 0x21);
    in_register_00005004 = (undefined1)iVar99;
    in_register_00005005 = (undefined1)((uint)iVar99 >> 8);
    in_register_00005006 = (undefined1)((uint)iVar99 >> 0x10);
    in_register_00005007 = (char)((long)uStack_fc8 >> 0x39);
    uStack_fc8 = CONCAT17(in_register_00005007,
                          CONCAT16(in_register_00005006,
                                   CONCAT15(in_register_00005005,
                                            CONCAT14(in_register_00005004,
                                                     CONCAT13(in_register_00005003,
                                                              (int3)((int)uStack_fc8 >> 1))))));
    lVar22 = 8;
    do {
      auVar84 = *(undefined1 (*) [16])((long)aiStack_1058 + lVar22);
      auVar83._0_8_ = CONCAT44(auVar84._4_4_ * 0.5,auVar84._0_4_ * 0.5);
      auVar83._8_4_ = auVar84._8_4_ * 0.5;
      auVar83._12_4_ = auVar84._12_4_ * 0.5;
      *(long *)((long)alStack_1050 + lVar22) = auVar83._8_8_;
      *(undefined8 *)((long)aiStack_1058 + lVar22) = auVar83._0_8_;
      lVar22 = lVar22 + 0x14;
    } while (lVar22 != 0x6c);
  }
  param_1[0x10b1dd] = iVar96;
  if ((*(byte *)((long)param_3 + 0x99) >> 4 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x1a09) = uStack_fc8;
    lStack_120 = alStack_1050[0];
    uStack_118 = CONCAT44(uStack_118._4_4_,1);
    FUN_10967f7c8(CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0))))))),-fStack_fe4,0,
                  &uStack_600);
    FUN_109675c30(&uStack_600,&fStack_e8);
    in_b0 = SUB41(fStack_fec,0);
    in_register_00005001 = (undefined1)((uint)fStack_fec >> 8);
    in_register_00005002 = (undefined1)((uint)fStack_fec >> 0x10);
    in_register_00005003 = (char)((uint)fStack_fec >> 0x18);
    FUN_1096768b0(param_1,&lStack_120,&fStack_e8);
    fStack_d10 = fStack_d0c /
                 (float)CONCAT13(in_register_00005003,
                                 CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))
                                );
  }
  if ((bRam0000000113734818 & 1) == 0) {
    iVar96 = 0x13734818;
    ___cxa_guard_acquire();
    if (iVar96 != 0) {
      iRam00000001137347f4 = (int)uStack_fc8;
      ___cxa_guard_release(&bRam0000000113734818);
    }
  }
  plVar19 = (long *)(param_1 + 0x3d65e);
  if ((bRam0000000113734820 & 1) == 0) {
    iVar96 = 0x13734820;
    ___cxa_guard_acquire();
    if (iVar96 != 0) {
      iRam00000001137347f8 = uStack_fc8._4_4_;
      ___cxa_guard_release(&bRam0000000113734820);
    }
  }
  piStack_10a0 = param_1 + 0x10ad22;
  piStack_1098 = param_1 + 0x49404;
  piStack_1060 = param_1 + 0x10b1ba;
  plVar40 = (long *)(param_1 + 0x10abec);
  piStack_1070 = param_1 + 0x4a222;
  piStack_1078 = param_1 + 0x1a06;
  if ((iRam00000001137347f8 == uStack_fc8._4_4_) && (iRam00000001137347f4 == (int)uStack_fc8)) {
    if ((*(byte *)(param_1 + 0x10b1e0) & 1) != 0) goto LAB_1096784ec;
    *param_1 = *param_1 + 1;
    piVar37 = (int *)*plVar19;
  }
  else {
    iRam00000001137347f4 = (int)uStack_fc8;
    iRam00000001137347f8 = uStack_fc8._4_4_;
LAB_1096784ec:
    iVar96 = iRam00000001137347f4;
    piVar37 = param_1 + 0x3d662;
    *plVar19 = (long)piVar37;
    *(int **)(param_1 + 0x3d660) = param_1 + 0x4352c;
    *param_1 = *param_1 + 1;
    aiStack_1058[0] = 0;
    param_1[0x1a09] = iVar96;
    param_1[0x1a0a] = uStack_fc8._4_4_;
    *(undefined1 *)(param_1 + 0x10b1e0) = 0;
    _bzero(param_1 + 0x10ae65,0x20c);
  }
  piVar38 = piStack_1078;
  *(undefined8 *)(param_1 + 0x10b1de) = param_2;
  FUN_109674c28(param_1,aiStack_1058,piVar37);
  lVar22 = 0;
  piVar37 = param_1 + 0x10ae65;
  iVar96 = 0;
  if (*piVar16 != 0x7f) {
    iVar96 = *piVar16 + 1;
  }
  *piVar16 = iVar96;
  iVar99 = 100;
  piVar37[iVar96] = 100;
  param_1[0x10aee6] = 100;
  param_1[0x10aee7] = 100;
  iVar96 = 100;
  do {
    iVar102 = *(int *)((long)piVar37 + lVar22);
    if (iVar102 < iVar99) {
      param_1[0x10aee7] = iVar102;
      iVar99 = iVar102;
      iVar102 = *(int *)((long)piVar37 + lVar22);
    }
    if (iVar96 < iVar102) {
      param_1[0x10aee6] = iVar102;
      iVar96 = iVar102;
    }
    lVar22 = lVar22 + 4;
  } while (lVar22 != 0x200);
  iVar99 = *piVar16;
  iVar102 = piVar37[iVar99 + (iVar99 >> 0x1f) * -0x80];
  param_1[0x10aee8] = 1;
  iVar96 = -5;
  do {
    iVar99 = iVar99 + -1;
    if ((int)(float)iVar102 < (int)(float)piVar37[iVar99 + (iVar99 >> 0x1f) * -0x80]) {
      param_1[0x10aee8] = 0;
    }
    bVar14 = iVar96 != -1;
    iVar96 = iVar96 + 1;
  } while (bVar14);
  piStack_1088 = piVar37;
  plStack_1068 = plVar40;
  if (**(int **)(param_1 + 0x19f4) == 0) {
    FUN_10967610c(param_1);
    lVar22 = 0;
    iVar96 = (int)(float)piVar37[*piVar16 + (*piVar16 >> 0x1f) * -0x80];
    *piVar16 = 0;
    uVar51 = (undefined1)((uint)iVar96 >> 8);
    uVar56 = (undefined1)((uint)iVar96 >> 0x10);
    uVar61 = (undefined1)((uint)iVar96 >> 0x18);
    do {
      ((undefined8 *)((long)piVar37 + lVar22))[1] =
           CONCAT17(uVar61,CONCAT16(uVar56,CONCAT15(uVar51,CONCAT14((char)iVar96,iVar96))));
      *(undefined8 *)((long)piVar37 + lVar22) =
           CONCAT17(uVar61,CONCAT16(uVar56,CONCAT15(uVar51,CONCAT14((char)iVar96,iVar96))));
      lVar22 = lVar22 + 0x10;
    } while (lVar22 != 0x200);
    param_1[0x10aee6] = iVar96;
    param_1[0x10aee7] = iVar96;
  }
  else {
    iVar96 = param_1[0x10ad81];
    if (param_1[0x10abfc] == 0) {
      iVar99 = iVar96 + 0xc;
      if (-1 < iVar96) {
        iVar99 = iVar96;
      }
      lVar22 = 0xb;
      if (0 < iVar96) {
        lVar22 = -1;
      }
      lVar22 = lVar22 + iVar96;
      if ((float)param_1[(long)iVar99 + 0x10ad69] == (float)param_1[lVar22 + 0x10ad69])
      goto LAB_109678898;
      param_1[0x10abfc] = 1;
      uVar82 = *(undefined8 *)(param_1 + lVar22 * 3 + 0x10ad45);
      param_1[0x10abff] = param_1[lVar22 * 3 + 0x10ad47];
      *(undefined8 *)(param_1 + 0x10abfd) = uVar82;
      param_1[0x10ac00] = param_1[lVar22 + 0x10ad69];
      iVar99 = 0xb;
      if (0 < param_1[0x10ae36]) {
        iVar99 = -1;
      }
      iVar99 = iVar99 + param_1[0x10ae36];
      uVar85 = *(undefined8 *)(param_1 + (long)iVar99 * 0xf + 0x10ad8f);
      uVar82 = *(undefined8 *)(param_1 + (long)iVar99 * 0xf + 0x10ad8d);
      uVar90 = *(undefined8 *)(param_1 + (long)iVar99 * 0xf + 0x10ad86);
      auVar84 = *(undefined1 (*) [16])(param_1 + (long)iVar99 * 0xf + 0x10ad8a);
      uVar87 = *(undefined8 *)(param_1 + (long)iVar99 * 0xf + 0x10ad84);
      uVar86 = *(undefined8 *)(param_1 + (long)iVar99 * 0xf + 0x10ad82);
      *(undefined8 *)(param_1 + 0x10ac07) = *(undefined8 *)(param_1 + (long)iVar99 * 0xf + 0x10ad88)
      ;
      *(undefined8 *)(param_1 + 0x10ac05) = uVar90;
      *(long *)(param_1 + 0x10ac0b) = auVar84._8_8_;
      *(long *)(param_1 + 0x10ac09) = auVar84._0_8_;
      *(undefined8 *)(param_1 + 0x10ac0e) = uVar85;
      *(undefined8 *)(param_1 + 0x10ac0c) = uVar82;
      *(undefined8 *)(param_1 + 0x10ac03) = uVar87;
      *(undefined8 *)(param_1 + 0x10ac01) = uVar86;
      param_1[0x10ac10] =
           param_1[(long)(param_1[0x10ae53] + -1 + (param_1[0x10ae53] + -1 >> 0x1f) * -0x10) +
                   0x10ae43];
      param_1[0x10ac11] = (int)(float)(*param_1 + -1);
    }
    iVar99 = iVar96 + 0xc;
    if (-1 < iVar96) {
      iVar99 = iVar96;
    }
    fVar77 = (float)param_1[(long)iVar99 + 0x10ad69];
    iVar99 = 0xb;
    if (0 < iVar96) {
      iVar99 = -1;
    }
    if (fVar77 == (float)param_1[(long)(iVar99 + iVar96) + 0x10ad69]) {
      iVar99 = 8;
      if (3 < iVar96) {
        iVar99 = -4;
      }
      if (fVar77 == (float)param_1[(long)(iVar99 + iVar96) + 0x10ad69]) {
        iVar99 = 5;
        if (6 < iVar96) {
          iVar99 = -7;
        }
        if ((fVar77 == (float)param_1[(long)(iVar99 + iVar96) + 0x10ad69]) &&
           ((param_1[0x10abfc] = 0, param_1[0x10ad1f] != 1 && param_1[0x10ad20] != 1 ||
            (0.1 < ABS((*(float *)(*(long *)(param_1 + 0x10abee) + 0x2d3b4) -
                       (float)param_1[0x10ac10]) / (float)param_1[0x10ac10]))))) {
          FUN_10967f7c8(CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                        -(float)param_1[0x10abfe],-(float)param_1[0x10abff],&fStack_e8);
          FUN_109675c30(&fStack_e8,&lStack_120);
          fVar77 = -fStack_fe0;
          uVar43 = SUB41(fVar77,0);
          uVar44 = (char)((uint)fVar77 >> 8);
          uVar45 = (char)((uint)fVar77 >> 0x10);
          uVar47 = (char)((uint)fVar77 >> 0x18);
          uVar48 = 0;
          uVar49 = 0;
          uVar52 = 0;
          uVar53 = 0;
          FUN_10967f7c8(CONCAT17(uVar75,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,CONCAT13(
                                                  uVar62,CONCAT12(uVar61,CONCAT11(uVar56,uVar51)))))
                                                )),-fStack_fe4,-fStack_fdc,&lStack_150);
          uVar75 = uVar53;
          uVar72 = uVar52;
          uVar69 = uVar49;
          uVar66 = uVar48;
          uVar62 = uVar47;
          uVar61 = uVar45;
          uVar56 = uVar44;
          uVar51 = uVar43;
          piVar37 = param_1 + 0x10ac01;
          lVar22 = 5;
          do {
            if (piVar37[2] != 0) {
              FUN_10967e884(param_1,piVar37,&uStack_6b0,1);
              FUN_10967f908(&uStack_6b0,&lStack_120,&uStack_610,1);
              FUN_10967f908(&uStack_610,&lStack_150,auStack_620,1);
              uVar81 = NEON_scvtf(CONCAT44((int)((long)*(undefined8 *)(piVar38 + 3) >> 0x21),
                                           (int)*(undefined8 *)(piVar38 + 3) >> 1),4);
              uVar29 = CONCAT44((float)(uVar81 >> 0x20) + auStack_620._4_4_ * fStack_fec,
                                (float)uVar81 + auStack_620._0_4_ * fStack_fec);
              iVar96 = -(uint)((int)((uint)(iStack_618 == 0) << 0x1f) < 0);
              uVar29 = uVar29 ^ (uVar29 ^ uVar81) &
                                CONCAT17((char)((uint)iVar96 >> 0x18),
                                         CONCAT16((char)((uint)iVar96 >> 0x10),
                                                  CONCAT15((char)((uint)iVar96 >> 8),
                                                           CONCAT14((char)iVar96,
                                                                    -(uint)((int)((uint)(iStack_618
                                                                                        == 0) <<
                                                                                 0x1f) < 0)))));
              uVar51 = (undefined1)uVar29;
              uVar56 = (undefined1)(uVar29 >> 8);
              uVar61 = (undefined1)(uVar29 >> 0x10);
              uVar62 = (undefined1)(uVar29 >> 0x18);
              uVar66 = (undefined1)(uVar29 >> 0x20);
              uVar69 = (undefined1)(uVar29 >> 0x28);
              uVar72 = (undefined1)(uVar29 >> 0x30);
              uVar75 = (undefined1)(uVar29 >> 0x38);
            }
            plVar40 = plStack_1068;
            piVar37 = piVar37 + 3;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 0;
          uStack_600 = CONCAT17(uVar75,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,CONCAT13(
                                                  uVar62,CONCAT12(uVar61,CONCAT11(uVar56,uVar51)))))
                                               ));
          aiStack_1058[0] = 0;
          uStack_fc0 = uStack_fc0 | 2;
          fStack_d10 = *(float *)(plStack_1068 + 0x12);
          puVar18 = (undefined8 *)(((ulong)aiStack_1058 | 4) + 4);
          do {
            *puVar18 = *(undefined8 *)((long)&uStack_600 + lVar22);
            lVar22 = lVar22 + 0xc;
            puVar18 = (undefined8 *)((long)puVar18 + 0x14);
          } while (lVar22 != 0x3c);
          FUN_10967610c(param_1);
        }
      }
    }
  }
LAB_109678898:
  if (((((*(byte *)(*(long *)(param_1 + 0x19f4) + 0x99) >> 2 & 1) != 0) && (aiStack_1058[0] == 1))
      && ((int)plVar40[0x9a] == 0)) && (*piStack_1098 == 0)) {
    aiStack_1058[0] = 0;
    uStack_fc0 = uStack_fc0 | 2;
    uVar82 = NEON_scvtf(uStack_fc8,4);
    fVar77 = (float)uVar82 * 0.5;
    fVar100 = (float)((ulong)uVar82 >> 0x20) * 0.5;
    uVar51 = SUB41(fVar100,0);
    uVar56 = (undefined1)((uint)fVar100 >> 8);
    uVar61 = (undefined1)((uint)fVar100 >> 0x10);
    uVar62 = (undefined1)((uint)fVar100 >> 0x18);
    alStack_1050[0] = CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,fVar77))));
    uStack_103c = CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,fVar77))));
    uStack_1028 = CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,fVar77))));
    uStack_1014 = CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,fVar77))));
    uStack_1000 = CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,fVar77))));
    FUN_10967610c(param_1);
  }
  _gettimeofday(&uStack_600,0);
  dRam000000011382a498 = (double)(uStack_600 * 1000 + (long)((int)uStack_5f8 / 1000));
  piStack_1080 = (int *)((long)plVar40 + 0x4cc);
  *(undefined8 *)((long)plVar40 + 0x4dc) = *(undefined8 *)piStack_1080;
  piVar37 = (int *)0x0;
  if (plVar40[1] != 0) {
    piVar37 = (int *)*plVar40;
    plVar40[1] = (long)piVar37;
  }
  piVar104 = piStack_1070 + 2;
  iVar96 = *param_1;
  if (((*(float *)(plVar40 + 0x99) < 10.0) && (piStack_1060[1] != 0)) && (piVar37 != (int *)0x0)) {
    plVar40[2] = *plVar40;
  }
  iVar99 = 0;
  *plVar40 = 0;
  piVar30 = (int *)plVar40[3];
  piVar23 = (int *)plVar40[4];
  iVar34 = 999999;
  piVar32 = (int *)plVar40[2];
  piVar107 = piVar104;
  iVar102 = -1;
  do {
    iVar2 = iVar34;
    iVar33 = iVar102;
    if (((piVar107 != piVar23) && (piVar107 != piVar30)) &&
       ((piVar107 != piVar37 &&
        (((piVar107 != piVar32 && (piVar107[1] == 0)) &&
         (iVar2 = *piVar107, iVar33 = iVar99, iVar34 <= *piVar107)))))) {
      iVar2 = iVar34;
      iVar33 = iVar102;
    }
    iVar34 = iVar2;
    iVar99 = iVar99 + 1;
    piVar107 = piVar107 + 0xb548;
    iVar102 = iVar33;
  } while (iVar99 != 0x10);
  if (iVar33 == -1) {
    iVar99 = 0x10;
    piVar107 = piVar104;
    do {
      if (((piVar107 != piVar23) && (piVar107 != piVar30)) &&
         ((piVar107 != piVar37 && ((piVar107 != piVar32 && (piVar107[1] == 0))))))
      goto LAB_109678a20;
      piVar107 = piVar107 + 0xb548;
      iVar99 = iVar99 + -1;
    } while (iVar99 != 0);
    iVar99 = 0x10;
    piVar107 = piVar104;
    do {
      if ((((piVar107 != piVar23) && (piVar107 != piVar30)) && (piVar107 != piVar37)) &&
         ((piVar107 != piVar32 && (0xf < iVar96 - *piVar107)))) goto LAB_109678a20;
      piVar107 = piVar107 + 0xb548;
      iVar99 = iVar99 + -1;
    } while (iVar99 != 0);
    iVar99 = 0x10;
    piVar107 = piVar104;
    do {
      if (((piVar107 != piVar23) && (piVar107 != piVar30)) &&
         ((piVar107 != piVar37 && (piVar107 != piVar32)))) goto LAB_109678a20;
      piVar107 = piVar107 + 0xb548;
      iVar99 = iVar99 + -1;
    } while (iVar99 != 0);
    piVar107 = (int *)0x0;
  }
  else {
    piVar107 = piVar104 + (long)iVar33 * 0xb548;
LAB_109678a20:
    *plVar40 = (long)piVar107;
  }
  piVar30 = piVar107 + 0x8905;
  if (piVar37 == (int *)0x0) {
    plVar40[1] = (long)piVar107;
    plVar40[2] = (long)piVar107;
    piVar37 = piVar107;
  }
  *piVar107 = iVar96;
  piVar107[1] = 0;
  piVar23 = piVar37 + 0x8905;
  lVar22 = 5;
  do {
    piVar30[0x8b3] = 0x3f800000;
    piVar30[0x8b1] = piVar23[0x8b1];
    piVar30[0x8b4] = 0;
    piVar30[0x8b5] = 0;
    *piVar30 = *piVar23;
    piVar30 = piVar30 + 0x8c6;
    piVar23 = piVar23 + 0x8c6;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  piVar107[0xb4f9] = 2;
  piVar107[0xb4e3] = 0x3f800000;
  fVar77 = (float)piStack_1060[8];
  piVar107[0xb4ed] = (int)fVar77;
  if (fVar77 == 0.0) {
    piVar107[0xb4ed] = *(int *)(*(long *)(param_1 + 0x19f4) + 0x348);
  }
  _memcpy(piVar107 + 0x88a1,piVar37 + 0x88a1,400);
  lVar22 = *plVar40;
  *(undefined4 *)(lVar22 + 0x5e0) = 0;
  lVar26 = *(long *)(param_1 + 0x19f4);
  if (*piVar38 == 0) {
    if (*(int *)(lVar26 + 0xa0) == 1) {
      uVar82 = NEON_rev64(*(undefined8 *)(lVar26 + 0x74),4);
      fVar77 = (float)*(undefined8 *)(piStack_1060 + 0xd) + (float)uVar82;
      uVar51 = SUB41(fVar77,0);
      uVar56 = (undefined1)((uint)fVar77 >> 8);
      uVar61 = (undefined1)((uint)fVar77 >> 0x10);
      uVar62 = (undefined1)((uint)fVar77 >> 0x18);
      fVar77 = (float)((ulong)*(undefined8 *)(piStack_1060 + 0xd) >> 0x20) +
               (float)((ulong)uVar82 >> 0x20);
      uVar66 = SUB41(fVar77,0);
      uVar69 = (undefined1)((uint)fVar77 >> 8);
      uVar72 = (undefined1)((uint)fVar77 >> 0x10);
      cVar76 = (char)((uint)fVar77 >> 0x18);
      fVar77 = (float)piStack_1060[0xf];
      goto LAB_109678bfc;
    }
    uVar82 = NEON_rev64(*(undefined8 *)(lVar26 + 0x74),4);
    uVar51 = (undefined1)uVar82;
    uVar56 = (undefined1)((ulong)uVar82 >> 8);
    uVar61 = (undefined1)((ulong)uVar82 >> 0x10);
    uVar62 = (undefined1)((ulong)uVar82 >> 0x18);
    uVar66 = (undefined1)((ulong)uVar82 >> 0x20);
    uVar69 = (undefined1)((ulong)uVar82 >> 0x28);
    uVar72 = (undefined1)((ulong)uVar82 >> 0x30);
    cVar76 = (char)((ulong)uVar82 >> 0x38);
    fVar77 = *(float *)(lVar26 + 0x7c);
  }
  else {
    uVar82 = NEON_rev64(*(undefined8 *)(lVar26 + 0x74),4);
    fVar77 = (float)*(undefined8 *)(piStack_1060 + 10) + (float)uVar82;
    uVar51 = SUB41(fVar77,0);
    uVar56 = (undefined1)((uint)fVar77 >> 8);
    uVar61 = (undefined1)((uint)fVar77 >> 0x10);
    uVar62 = (undefined1)((uint)fVar77 >> 0x18);
    fVar77 = (float)((ulong)*(undefined8 *)(piStack_1060 + 10) >> 0x20) +
             (float)((ulong)uVar82 >> 0x20);
    uVar66 = SUB41(fVar77,0);
    uVar69 = (undefined1)((uint)fVar77 >> 8);
    uVar72 = (undefined1)((uint)fVar77 >> 0x10);
    cVar76 = (char)((uint)fVar77 >> 0x18);
    fVar77 = (float)piStack_1060[0xc];
LAB_109678bfc:
    fVar77 = fVar77 + *(float *)(lVar26 + 0x7c);
  }
  *(ulong *)(lVar22 + 0x1c) =
       CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,CONCAT13(uVar62,CONCAT12(
                                                  uVar61,CONCAT11(uVar56,uVar51)))))));
  *(float *)(lVar22 + 0x24) = fVar77;
  *(undefined4 *)(lVar22 + 0x28) = *(undefined4 *)(lVar26 + 0x6c);
  *(ulong *)(lVar22 + 0x2d410) =
       CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,CONCAT13(uVar62,CONCAT12(
                                                  uVar61,CONCAT11(uVar56,uVar51)))))));
  *(float *)(lVar22 + 0x2d418) = fVar77;
  piStack_1090 = piVar104;
  FUN_10967f7c8(CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,CONCAT13(uVar62,
                                                  CONCAT12(uVar61,CONCAT11(uVar56,uVar51))))))),
                -(float)CONCAT13(cVar76,CONCAT12(uVar72,CONCAT11(uVar69,uVar66))),0,lVar22 + 0x2c);
  FUN_109675c30(*plVar40 + 0x2c,*plVar40 + 0x50);
  FUN_10967f7c8(CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,CONCAT13(uVar62,
                                                  CONCAT12(uVar61,CONCAT11(uVar56,uVar51))))))),0,
                -fVar77,*plVar40 + 0x74);
  FUN_109675c30(*plVar40 + 0x74,*plVar40 + 0x98);
  FUN_10967f6ec(*plVar40 + 0x1c);
  lVar22 = *plVar40;
  fVar100 = *(float *)(lVar22 + 0x28);
  FUN_10967f7c8(CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,CONCAT13(uVar62,
                                                  CONCAT12(uVar61,CONCAT11(uVar56,uVar51))))))),
                -*(float *)(*(long *)(param_1 + 0x19f4) + 0x84),0,&lStack_120);
  FUN_10967f908(&UNK_10dfd94f8,&lStack_120,&uStack_600,4);
  FUN_10967f908(&UNK_10dfd9528,&lStack_120,&fStack_e8,4);
  piVar104 = piStack_1060;
  piVar37 = piStack_1088;
  uVar51 = (undefined1)uStack_600;
  uVar56 = (undefined1)((ulong)uStack_600 >> 8);
  uVar61 = (undefined1)((ulong)uStack_600 >> 0x10);
  uVar62 = (undefined1)((ulong)uStack_600 >> 0x18);
  fVar77 = 1.0;
  if ((float)uStack_600 == uStack_5f8._4_4_) {
    fVar89 = 0.0;
    fVar78 = 1.0;
  }
  else {
    fVar78 = 0.0;
    fVar89 = 1.0;
    if (uStack_600._4_4_ == (float)uStack_5f0) {
      uVar51 = (undefined1)((ulong)uStack_600 >> 0x20);
      uVar56 = (undefined1)((ulong)uStack_600 >> 0x28);
      uVar61 = (undefined1)((ulong)uStack_600 >> 0x30);
      uVar62 = (undefined1)((ulong)uStack_600 >> 0x38);
    }
    else {
      fVar78 = -(uStack_600._4_4_ - (float)uStack_5f0) / ((float)uStack_600 - uStack_5f8._4_4_);
      fVar88 = uStack_600._4_4_ + (float)uStack_600 * fVar78;
      uVar51 = SUB41(fVar88,0);
      uVar56 = (undefined1)((uint)fVar88 >> 8);
      uVar61 = (undefined1)((uint)fVar88 >> 0x10);
      uVar62 = (undefined1)((uint)fVar88 >> 0x18);
    }
  }
  fVar88 = 0.0;
  fVar97 = (float)uStack_5e8;
  if ((float)uStack_5e8 != fStack_5dc) {
    fVar77 = 0.0;
    fVar88 = 1.0;
    fVar97 = uStack_5e8._4_4_;
    if (uStack_5e8._4_4_ != fStack_5d8) {
      fVar77 = -(uStack_5e8._4_4_ - fStack_5d8) / ((float)uStack_5e8 - fStack_5dc);
      fVar97 = uStack_5e8._4_4_ + (float)uStack_5e8 * fVar77;
      fVar88 = 1.0;
    }
  }
  fVar112 = 1.0;
  fVar94 = 0.0;
  if (fStack_e8 == afStack_e0[1]) {
    fVar110 = 0.0;
    fVar111 = 1.0;
    fVar92 = fStack_e8;
  }
  else {
    fVar111 = 0.0;
    fVar110 = 1.0;
    fVar92 = fStack_e4;
    if (fStack_e4 != afStack_e0[2]) {
      fVar111 = -(fStack_e4 - afStack_e0[2]) / (fStack_e8 - afStack_e0[1]);
      fVar92 = fStack_e4 + fStack_e8 * fVar111;
    }
  }
  fVar93 = afStack_e0[4];
  if (afStack_e0[4] != (float)uStack_c4) {
    fVar112 = 0.0;
    fVar94 = 1.0;
    fVar93 = fStack_cc;
    if (fStack_cc != uStack_c4._4_4_) {
      fVar112 = -(fStack_cc - uStack_c4._4_4_) / (afStack_e0[4] - (float)uStack_c4);
      fVar93 = fStack_cc + afStack_e0[4] * fVar112;
    }
  }
  fVar10 = fVar112;
  fVar95 = fVar92;
  fVar11 = fVar110;
  if (fVar110 == 0.0) {
    fVar10 = fVar111;
    fVar95 = fVar93;
    fVar111 = fVar112;
    fVar11 = fVar94;
    fVar94 = fVar110;
  }
  if (fVar110 == 0.0) {
    fVar93 = fVar92;
  }
  fVar112 = (fVar93 - (fVar94 / fVar11) * fVar95) / (fVar10 - (fVar94 / fVar11) * fVar111);
  bVar14 = fVar89 == 0.0;
  fVar94 = fVar78;
  if (bVar14) {
    fVar94 = fVar77;
  }
  fVar92 = fVar88;
  fVar110 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar56,uVar51)));
  if (bVar14) {
    fVar92 = fVar89;
    fVar89 = fVar88;
    fVar110 = fVar97;
  }
  uVar75 = SUB41(fVar97,0);
  uVar43 = (char)((uint)fVar97 >> 8);
  uVar44 = (char)((uint)fVar97 >> 0x10);
  uVar45 = (char)((uint)fVar97 >> 0x18);
  if (bVar14) {
    uVar75 = uVar51;
    uVar43 = uVar56;
    uVar44 = uVar61;
    uVar45 = uVar62;
  }
  if (bVar14) {
    fVar77 = fVar78;
  }
  fVar88 = ((float)CONCAT13(uVar45,CONCAT12(uVar44,CONCAT11(uVar43,uVar75))) -
           (fVar92 / fVar89) * fVar110) / (fVar77 - (fVar92 / fVar89) * fVar94);
  fVar77 = (float)(piVar38[3] >> 1) + fVar100 * fVar88;
  uVar51 = SUB41(fVar77,0);
  uVar56 = (undefined1)((uint)fVar77 >> 8);
  uVar61 = (undefined1)((uint)fVar77 >> 0x10);
  cVar63 = (char)((uint)fVar77 >> 0x18);
  fVar78 = (float)(piVar38[3] >> 1) + fVar100 * fVar112;
  if (fVar77 == fVar78) {
    uVar82 = 0x3f800000;
  }
  else {
    fVar89 = (float)(piVar38[4] >> 1) + fVar100 * ((fVar110 - fVar88 * fVar94) / fVar89);
    fVar100 = (float)(piVar38[4] >> 1) + fVar100 * ((fVar95 - fVar112 * fVar111) / fVar11);
    if (fVar89 == fVar100) {
      uVar82 = 0x3f80000000000000;
      uVar51 = SUB41(fVar89,0);
      uVar56 = (undefined1)((uint)fVar89 >> 8);
      uVar61 = (undefined1)((uint)fVar89 >> 0x10);
      cVar63 = (char)((uint)fVar89 >> 0x18);
    }
    else {
      fVar100 = -(fVar89 - fVar100) / (fVar77 - fVar78);
      fVar89 = fVar89 + fVar77 * fVar100;
      uVar51 = SUB41(fVar89,0);
      uVar56 = (undefined1)((uint)fVar89 >> 8);
      uVar61 = (undefined1)((uint)fVar89 >> 0x10);
      cVar63 = (char)((uint)fVar89 >> 0x18);
      uVar82 = NEON_fmov(0x3f800000,4);
      uVar82 = CONCAT44((int)((ulong)uVar82 >> 0x20),fVar100);
    }
  }
  *(undefined8 *)(lVar22 + 0x2d514) = uVar82;
  *(float *)(lVar22 + 0x2d51c) = -(float)CONCAT13(cVar63,CONCAT12(uVar61,CONCAT11(uVar56,uVar51)));
  lVar22 = *plVar40;
  *(undefined8 *)(lVar22 + 0x2d3c8) = 0;
  *(undefined8 *)(lVar22 + 0x2d3c0) = 0x3f800000;
  *(undefined8 *)(lVar22 + 0x2d3d8) = 0;
  *(undefined8 *)(lVar22 + 0x2d3d0) = 0x3f800000;
  uStack_10a8 = 0;
  dStack_10b0 = 5.26354424712089e-315;
  *(undefined4 *)(lVar22 + 0x2d3e0) = 0x3f800000;
  piStack_1080[0] = 2;
  piStack_1080[1] = 2;
  *(int *)((long)plVar40 + 0x4d4) = 0;
  piStack_1060[3] = 0;
  FUN_10967ddf4(param_1,*(undefined8 *)(param_1 + 0x10b1de));
  *(int *)(*plVar40 + 8) = (int)(float)piVar37[*piVar16 + (*piVar16 >> 0x1f) * -0x80];
  if (**(int **)(param_1 + 0x19f4) == 0) {
    _gettimeofday(&uStack_600,0);
    dRam000000011382a4d8 = (double)(uStack_600 * 1000 + (long)((int)uStack_5f8 / 1000));
    lVar22 = *(long *)(param_1 + 0x19f4);
    uVar82 = *(undefined8 *)(lVar22 + (long)*(int *)(lVar22 + 0x68) * 0x14 + 8);
    if (((*(byte *)(lVar22 + 0x98) >> 1 & 1) == 0) && ((float)piVar104[7] != 0.0)) {
      lVar22 = *plVar40;
    }
    else {
      iVar96 = *(int *)(lVar22 + 0x348);
      uVar51 = (undefined1)iVar96;
      uVar56 = (undefined1)((uint)iVar96 >> 8);
      uVar61 = (undefined1)((uint)iVar96 >> 0x10);
      cVar63 = (char)((uint)iVar96 >> 0x18);
      lVar22 = *plVar40;
      *(int *)(lVar22 + 0x2d3b4) = iVar96;
      piVar104[7] = iVar96;
      *(int *)((long)plVar40 + 0x99c) = 0;
      *(ulong *)((long)plVar40 + 0x964) =
           CONCAT17(cVar63,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,iVar96))));
      *(ulong *)((long)plVar40 + 0x95c) =
           CONCAT17(cVar63,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,iVar96))));
      *(ulong *)((long)plVar40 + 0x974) =
           CONCAT17(cVar63,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,iVar96))));
      *(ulong *)((long)plVar40 + 0x96c) =
           CONCAT17(cVar63,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,iVar96))));
      *(ulong *)((long)plVar40 + 0x984) =
           CONCAT17(cVar63,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,iVar96))));
      *(ulong *)((long)plVar40 + 0x97c) =
           CONCAT17(cVar63,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,iVar96))));
      *(ulong *)((long)plVar40 + 0x994) =
           CONCAT17(cVar63,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,iVar96))));
      *(ulong *)((long)plVar40 + 0x98c) =
           CONCAT17(cVar63,CONCAT16(uVar61,CONCAT15(uVar56,CONCAT14(uVar51,iVar96))));
      *(int *)(plVar40 + 0x13c) = 0;
      _memset_pattern16(param_1 + 0x10ae54,&UNK_10dfd94b0,0x40);
    }
    _bzero(lVar22 + 0x130,0x4b0);
    lVar22 = *plVar40;
    *(undefined8 *)(lVar22 + 0x130) = uVar82;
    *(undefined4 *)(lVar22 + 0x138) = 1;
    *(int *)(lVar22 + 0x22284) = *param_1;
    if ((*(byte *)(*(long *)(param_1 + 0x19f4) + 0x99) >> 2 & 1) == 0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      uVar81 = *(ulong *)(*(long *)(param_1 + 0x19f4) + 8);
      uVar81 = uVar81 ^ (uVar81 ^ 0x42c8000042c80000) &
                        CONCAT44(-(uint)((float)(uVar81 >> 0x20) < 100.0),
                                 -(uint)((float)uVar81 < 100.0));
      uVar29 = NEON_scvtf(*(undefined8 *)(piStack_1078 + 3),4);
      fVar100 = (float)uVar29 + -100.0;
      fVar77 = (float)(uVar29 >> 0x20);
      fVar89 = fVar77 + -100.0;
      uVar81 = uVar81 ^ (uVar81 ^ CONCAT44(fVar89,fVar100)) &
                        CONCAT44(-(uint)(fVar89 < (float)(uVar81 >> 0x20)),
                                 -(uint)(fVar100 < (float)uVar81));
      fVar100 = (float)uVar81;
      fVar89 = (float)(uVar81 >> 0x20);
      uVar82 = NEON_fmaxnm(CONCAT44(fVar89 + -100.0,fVar100 + -80.0),0,4);
      uStack_600 = CONCAT44((int)(float)((ulong)uVar82 >> 0x20),(int)(float)uVar82);
      fVar100 = fVar100 + 150.0;
      fVar89 = fVar89 + 100.0;
      uVar29 = uVar29 ^ (uVar29 ^ CONCAT44(fVar89,fVar100)) &
                        CONCAT44(-(uint)(fVar89 < fVar77),-(uint)(fVar100 < (float)uVar29));
      uVar82 = NEON_scvtf(uStack_600,4);
      iVar96 = (int)((float)(uVar29 >> 0x20) - (float)((ulong)uVar82 >> 0x20));
      uVar66 = (undefined1)iVar96;
      uVar69 = (undefined1)((uint)iVar96 >> 8);
      uVar72 = (undefined1)((uint)iVar96 >> 0x10);
      cVar76 = (char)((uint)iVar96 >> 0x18);
      uStack_5f8 = CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,(int)((float)
                                                  uVar29 - (float)uVar82)))));
      puVar18 = &uStack_600;
    }
    piVar37 = param_1;
    FUN_10967b374(param_1,param_1 + 0x493f6,lVar22,1,puVar18,param_1 + 0x1a1e);
    lVar26 = *plVar40;
    *(int *)(lVar26 + 0xc) = (int)piVar37;
    lVar22 = 0;
    *(undefined8 *)(lVar26 + 0x2d398) = uStack_10a8;
    *(double *)(lVar26 + 0x2d390) = dStack_10b0;
    *(undefined8 *)(lVar26 + 0x2d3a8) = uStack_10a8;
    *(double *)(lVar26 + 0x2d3a0) = dStack_10b0;
    *(undefined4 *)(lVar26 + 0x2d3b0) = 0x3f800000;
    lVar26 = 0x22414;
    do {
      if ((*(uint *)(*(long *)(param_1 + 0x19f4) + lVar22 + 4) & 0xfffffffd) == 1) {
        uStack_600 = *(long *)(*(long *)(param_1 + 0x19f4) + lVar22 + 8);
        uStack_5f8 = CONCAT44(uStack_5f8._4_4_,1);
        FUN_109676e08(param_1,*plVar40 + 0x1c,&uStack_600,*plVar40 + lVar26);
      }
      else {
        *(undefined4 *)(*plVar40 + lVar26) = 0;
      }
      piVar37 = piStack_1060;
      lVar26 = lVar26 + 0x2318;
      lVar22 = lVar22 + 0x14;
    } while (lVar22 != 100);
    lVar22 = *plVar40;
    *(undefined4 *)(lVar22 + 4) = 1;
    plVar40[3] = lVar22;
    plVar40[4] = lVar22;
    plVar40[0x99] = 0x100000000;
    piVar37[4] = 0;
    piVar37[5] = 0;
    piStack_1060[6] = 0;
    *(int *)(plVar40 + 0x9b) = 0;
    *(int *)(plVar40 + 0x79) = 100;
    *(int *)(plVar40 + 0x89) = 100;
    param_1[0x10ac30] = 0;
    param_1[0x10ac31] = 0;
    param_1[0x10ac2e] = 0;
    param_1[0x10ac2f] = 0;
    param_1[0x10ac34] = 0;
    param_1[0x10ac35] = 0;
    param_1[0x10ac32] = 0;
    param_1[0x10ac33] = 0;
    param_1[0x10ac28] = 0;
    param_1[0x10ac29] = 0;
    param_1[0x10ac26] = 0;
    param_1[0x10ac27] = 0;
    param_1[0x10ac2c] = 0;
    param_1[0x10ac2d] = 0;
    param_1[0x10ac2a] = 0;
    param_1[0x10ac2b] = 0;
    param_1[0x10ac20] = 0;
    param_1[0x10ac21] = 0;
    param_1[0x10ac1e] = 0;
    param_1[0x10ac1f] = 0;
    param_1[0x10ac24] = 0;
    param_1[0x10ac25] = 0;
    param_1[0x10ac22] = 0;
    param_1[0x10ac23] = 0;
    param_1[0x10ac18] = 0;
    param_1[0x10ac19] = 0;
    param_1[0x10ac16] = 0;
    param_1[0x10ac17] = 0;
    param_1[0x10ac1c] = 0;
    param_1[0x10ac1d] = 0;
    param_1[0x10ac1a] = 0;
    param_1[0x10ac1b] = 0;
    param_1[0x10ac94] = 0;
    param_1[0x10ac95] = 0;
    param_1[0x10ac92] = 0;
    param_1[0x10ac93] = 0;
    param_1[0x10ac98] = 0;
    param_1[0x10ac99] = 0;
    param_1[0x10ac96] = 0;
    param_1[0x10ac97] = 0;
    param_1[0x10ac8c] = 0;
    param_1[0x10ac8d] = 0;
    param_1[0x10ac8a] = 0;
    param_1[0x10ac8b] = 0;
    param_1[0x10ac90] = 0;
    param_1[0x10ac91] = 0;
    param_1[0x10ac8e] = 0;
    param_1[0x10ac8f] = 0;
    param_1[0x10ac84] = 0;
    param_1[0x10ac85] = 0;
    param_1[0x10ac82] = 0;
    param_1[0x10ac83] = 0;
    param_1[0x10ac88] = 0;
    param_1[0x10ac89] = 0;
    param_1[0x10ac86] = 0;
    param_1[0x10ac87] = 0;
    param_1[0x10ac7c] = 0;
    param_1[0x10ac7d] = 0;
    param_1[0x10ac7a] = 0;
    param_1[0x10ac7b] = 0;
    param_1[0x10ac80] = 0;
    param_1[0x10ac81] = 0;
    param_1[0x10ac7e] = 0;
    param_1[0x10ac7f] = 0;
    param_1[0x10acfc] = 0;
    param_1[0x10acfd] = 0;
    param_1[0x10acfa] = 0;
    param_1[0x10acfb] = 0;
    param_1[0x10acf5] = 0;
    param_1[0x10acf6] = 0;
    param_1[0x10acf3] = 0;
    param_1[0x10acf4] = 0;
    param_1[0x10acf9] = 0;
    param_1[0x10acfa] = 0;
    param_1[0x10acf7] = 0;
    param_1[0x10acf8] = 0;
    param_1[0x10aced] = 0;
    param_1[0x10acee] = 0;
    param_1[0x10aceb] = 0;
    param_1[0x10acec] = 0;
    param_1[0x10acf1] = 0;
    param_1[0x10acf2] = 0;
    param_1[0x10acef] = 0;
    param_1[0x10acf0] = 0;
    param_1[0x10ace5] = 0;
    param_1[0x10ace6] = 0;
    param_1[0x10ace3] = 0;
    param_1[0x10ace4] = 0;
    param_1[0x10ace9] = 0;
    param_1[0x10acea] = 0;
    param_1[0x10ace7] = 0;
    param_1[0x10ace8] = 0;
    param_1[0x10ace1] = 0;
    param_1[0x10ace2] = 0;
    param_1[0x10acdf] = 0;
    param_1[0x10ace0] = 0;
    _memset_pattern16(param_1 + 0x10acff,&UNK_10dfd94c0,0x7c);
    *piVar37 = *param_1;
    piVar37[1] = 1;
    piVar37[2] = 0;
    *(int *)((long)plVar40 + 0x4e4) = 0;
    *(undefined4 *)(lVar22 + 0x2d3b8) = 0;
    param_1[0x10b090] = 0;
    param_1[0x10b091] = 0;
    param_1[0x10b08e] = 0;
    param_1[0x10b08f] = 0;
    param_1[0x10b094] = 0;
    param_1[0x10b095] = 0;
    param_1[0x10b092] = 0;
    param_1[0x10b093] = 0;
    param_1[0x10b098] = 0;
    param_1[0x10b099] = 0;
    param_1[0x10b096] = 0;
    param_1[0x10b097] = 0;
    param_1[0x10b09c] = 0;
    param_1[0x10b09d] = 0;
    param_1[0x10b09a] = 0;
    param_1[0x10b09b] = 0;
    param_1[0x10b0a0] = 0;
    param_1[0x10b0a1] = 0;
    param_1[0x10b09e] = 0;
    param_1[0x10b09f] = 0;
    param_1[0x10b0a4] = 0;
    param_1[0x10b0a5] = 0;
    param_1[0x10b0a2] = 0;
    param_1[0x10b0a3] = 0;
    param_1[0x10b0a8] = 0;
    param_1[0x10b0a9] = 0;
    param_1[0x10b0a6] = 0;
    param_1[0x10b0a7] = 0;
    param_1[0x10b0ac] = 0;
    param_1[0x10b0ad] = 0;
    param_1[0x10b0aa] = 0;
    param_1[0x10b0ab] = 0;
    param_1[0x10b0b0] = 0;
    param_1[0x10b0b1] = 0;
    param_1[0x10b0ae] = 0;
    param_1[0x10b0af] = 0;
    param_1[0x10b0b4] = 0;
    param_1[0x10b0b5] = 0;
    param_1[0x10b0b2] = 0;
    param_1[0x10b0b3] = 0;
    param_1[0x10b0b8] = 0;
    param_1[0x10b0b9] = 0;
    param_1[0x10b0b6] = 0;
    param_1[0x10b0b7] = 0;
    param_1[0x10b0bc] = 0;
    param_1[0x10b0bd] = 0;
    param_1[0x10b0ba] = 0;
    param_1[0x10b0bb] = 0;
    param_1[0x10b0c0] = 0;
    param_1[0x10b0c1] = 0;
    param_1[0x10b0be] = 0;
    param_1[0x10b0bf] = 0;
    param_1[0x10b0c4] = 0;
    param_1[0x10b0c5] = 0;
    param_1[0x10b0c2] = 0;
    param_1[0x10b0c3] = 0;
    param_1[0x10b0c8] = 0;
    param_1[0x10b0c9] = 0;
    param_1[0x10b0c6] = 0;
    param_1[0x10b0c7] = 0;
    param_1[0x10b0cc] = 0;
    param_1[0x10b0cd] = 0;
    param_1[0x10b0ca] = 0;
    param_1[0x10b0cb] = 0;
    param_1[0x10b0d0] = 0;
    param_1[0x10b0d1] = 0;
    param_1[0x10b0ce] = 0;
    param_1[0x10b0cf] = 0;
    param_1[0x10b0d4] = 0;
    param_1[0x10b0d5] = 0;
    param_1[0x10b0d2] = 0;
    param_1[0x10b0d3] = 0;
    param_1[0x10b0d8] = 0;
    param_1[0x10b0d9] = 0;
    param_1[0x10b0d6] = 0;
    param_1[0x10b0d7] = 0;
    param_1[0x10b0dc] = 0;
    param_1[0x10b0dd] = 0;
    param_1[0x10b0da] = 0;
    param_1[0x10b0db] = 0;
    param_1[0x10b0e0] = 0;
    param_1[0x10b0e1] = 0;
    param_1[0x10b0de] = 0;
    param_1[0x10b0df] = 0;
    param_1[0x10b0e4] = 0;
    param_1[0x10b0e5] = 0;
    param_1[0x10b0e2] = 0;
    param_1[0x10b0e3] = 0;
    param_1[0x10b0e8] = 0;
    param_1[0x10b0e9] = 0;
    param_1[0x10b0e6] = 0;
    param_1[0x10b0e7] = 0;
    param_1[0x10b0ec] = 0;
    param_1[0x10b0ed] = 0;
    param_1[0x10b0ea] = 0;
    param_1[0x10b0eb] = 0;
    param_1[0x10b0f0] = 0;
    param_1[0x10b0f1] = 0;
    param_1[0x10b0ee] = 0;
    param_1[0x10b0ef] = 0;
    FUN_10967fa38(2);
    piVar38 = piStack_10a0;
    piVar104 = piStack_1098;
    if ((*(byte *)(*(long *)(param_1 + 0x19f4) + 0x99) >> 3 & 1) == 0) {
      iVar96 = *param_1;
      *piStack_1098 = 0;
      piStack_1098[1] = iVar96;
      piStack_1098[6] = -1;
    }
  }
  else {
    _gettimeofday(&uStack_600,0);
    piVar37 = piStack_1078;
    dRam000000011382a4f8 = (double)(uStack_600 * 1000 + (long)((int)uStack_5f8 / 1000));
    iVar96 = (int)param_1;
    plStack_10d0 = plVar19;
    piStack_10c8 = piVar16;
    if (piVar104[1] == 0) {
      piVar38 = (int *)plVar40[4];
      lVar22 = *plVar40;
      iVar99 = 0x10;
      uVar51 = 0x20;
      uVar56 = 0x7b;
      uVar61 = 0xb7;
      uVar62 = 0x48;
      piVar16 = piStack_1090;
      do {
        if ((piVar16[1] != 0) &&
           (fVar77 = *(float *)(lVar22 + 0x24) - (float)piVar16[9],
           fVar100 = (float)*(undefined8 *)(lVar22 + 0x1c) - (float)*(undefined8 *)(piVar16 + 7),
           fVar89 = (float)((ulong)*(undefined8 *)(lVar22 + 0x1c) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(piVar16 + 7) >> 0x20),
           fVar77 = SQRT(fVar100 * fVar100 + fVar89 * fVar89 + fVar77 * fVar77),
           fVar77 < (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar56,uVar51))))) {
          uVar51 = SUB41(fVar77,0);
          uVar56 = (undefined1)((uint)fVar77 >> 8);
          uVar61 = (undefined1)((uint)fVar77 >> 0x10);
          uVar62 = (undefined1)((uint)fVar77 >> 0x18);
          piVar38 = piVar16;
        }
        piVar16 = piVar16 + 0xb548;
        iVar99 = iVar99 + -1;
      } while (iVar99 != 0);
      plVar40[3] = (long)piVar38;
      plStack_10e8 = plVar40 + 0x79;
      *(int *)(plVar40 + 0x79) = 100;
      *(int *)(plVar40 + 0x89) = 100;
      piStack_10f0 = param_1 + 0x10ac16;
      piStack_10f8 = param_1 + 0x10ac7a;
      param_1[0x10ac18] = 0;
      param_1[0x10ac19] = 0;
      piStack_10f0[0] = 0;
      piStack_10f0[1] = 0;
      param_1[0x10ac1c] = 0;
      param_1[0x10ac1d] = 0;
      param_1[0x10ac1a] = 0;
      param_1[0x10ac1b] = 0;
      param_1[0x10ac20] = 0;
      param_1[0x10ac21] = 0;
      param_1[0x10ac1e] = 0;
      param_1[0x10ac1f] = 0;
      param_1[0x10ac24] = 0;
      param_1[0x10ac25] = 0;
      param_1[0x10ac22] = 0;
      param_1[0x10ac23] = 0;
      param_1[0x10ac28] = 0;
      param_1[0x10ac29] = 0;
      param_1[0x10ac26] = 0;
      param_1[0x10ac27] = 0;
      param_1[0x10ac2c] = 0;
      param_1[0x10ac2d] = 0;
      param_1[0x10ac2a] = 0;
      param_1[0x10ac2b] = 0;
      param_1[0x10ac30] = 0;
      param_1[0x10ac31] = 0;
      param_1[0x10ac2e] = 0;
      param_1[0x10ac2f] = 0;
      param_1[0x10ac34] = 0;
      param_1[0x10ac35] = 0;
      param_1[0x10ac32] = 0;
      param_1[0x10ac33] = 0;
      param_1[0x10ac7c] = 0;
      param_1[0x10ac7d] = 0;
      piStack_10f8[0] = 0;
      piStack_10f8[1] = 0;
      param_1[0x10ac80] = 0;
      param_1[0x10ac81] = 0;
      param_1[0x10ac7e] = 0;
      param_1[0x10ac7f] = 0;
      param_1[0x10ac84] = 0;
      param_1[0x10ac85] = 0;
      param_1[0x10ac82] = 0;
      param_1[0x10ac83] = 0;
      param_1[0x10ac88] = 0;
      param_1[0x10ac89] = 0;
      param_1[0x10ac86] = 0;
      param_1[0x10ac87] = 0;
      param_1[0x10ac8c] = 0;
      param_1[0x10ac8d] = 0;
      param_1[0x10ac8a] = 0;
      param_1[0x10ac8b] = 0;
      param_1[0x10ac90] = 0;
      param_1[0x10ac91] = 0;
      param_1[0x10ac8e] = 0;
      param_1[0x10ac8f] = 0;
      param_1[0x10ac94] = 0;
      param_1[0x10ac95] = 0;
      param_1[0x10ac92] = 0;
      param_1[0x10ac93] = 0;
      param_1[0x10ac98] = 0;
      param_1[0x10ac99] = 0;
      param_1[0x10ac96] = 0;
      param_1[0x10ac97] = 0;
      param_1[0x10acfc] = 0;
      param_1[0x10acfd] = 0;
      param_1[0x10acfa] = 0;
      param_1[0x10acfb] = 0;
      param_1[0x10acf5] = 0;
      param_1[0x10acf6] = 0;
      param_1[0x10acf3] = 0;
      param_1[0x10acf4] = 0;
      param_1[0x10acf9] = 0;
      param_1[0x10acfa] = 0;
      param_1[0x10acf7] = 0;
      param_1[0x10acf8] = 0;
      param_1[0x10aced] = 0;
      param_1[0x10acee] = 0;
      param_1[0x10aceb] = 0;
      param_1[0x10acec] = 0;
      param_1[0x10acf1] = 0;
      param_1[0x10acf2] = 0;
      param_1[0x10acef] = 0;
      param_1[0x10acf0] = 0;
      param_1[0x10ace5] = 0;
      param_1[0x10ace6] = 0;
      param_1[0x10ace3] = 0;
      param_1[0x10ace4] = 0;
      param_1[0x10ace9] = 0;
      param_1[0x10acea] = 0;
      param_1[0x10ace7] = 0;
      param_1[0x10ace8] = 0;
      param_1[0x10ace1] = 0;
      param_1[0x10ace2] = 0;
      param_1[0x10acdf] = 0;
      param_1[0x10ace0] = 0;
      piStack_10d8 = param_3;
      _memset_pattern16(param_1 + 0x10acff,&UNK_10dfd94c0,0x7c);
      lVar26 = plVar40[5];
      uVar82 = *(undefined8 *)(piVar37 + 3);
      iVar99 = (int)((long)uVar82 >> 0x21);
      uStack_610 = NEON_scvtf(CONCAT17((char)((long)uVar82 >> 0x39),
                                       CONCAT16((char)((uint)iVar99 >> 0x10),
                                                CONCAT15((char)((uint)iVar99 >> 8),
                                                         CONCAT14((char)iVar99,
                                                                  CONCAT13((char)((ulong)uVar82 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar82 >> 1))
                                                                 )))),4);
      uStack_608 = 1;
      piStack_10c0 = piVar38;
      FUN_10967e808(param_1,&uStack_610,piVar38 + 0x14,1,auStack_620);
      FUN_10967e808(param_1,&uStack_610,lVar22 + 0x50,1,auStack_62c);
      FUN_10967e808(param_1,auStack_620,piStack_10c0 + 0x26,1,auStack_620);
      FUN_10967e808(param_1,auStack_62c,lVar22 + 0x98,1,auStack_62c);
      piVar16 = piStack_10c0;
      uStack_100 = 0x3f800000;
      uStack_118 = uStack_10a8;
      lStack_120 = (long)dStack_10b0;
      uStack_108 = uStack_10a8;
      lStack_110 = (long)dStack_10b0;
      *(undefined4 *)(lVar22 + 0x2d3e0) = 0x3f800000;
      *(undefined8 *)(lVar22 + 0x2d3c8) = uStack_10a8;
      *(double *)(lVar22 + 0x2d3c0) = dStack_10b0;
      *(undefined8 *)(lVar22 + 0x2d3d8) = uStack_10a8;
      *(double *)(lVar22 + 0x2d3d0) = dStack_10b0;
      uVar82 = *(undefined8 *)(piVar37 + 3);
      iVar99 = (int)((long)uVar82 >> 0x21);
      uVar82 = NEON_scvtf(CONCAT17((char)((long)uVar82 >> 0x39),
                                   CONCAT16((char)((uint)iVar99 >> 0x10),
                                            CONCAT15((char)((uint)iVar99 >> 8),
                                                     CONCAT14((char)iVar99,
                                                              CONCAT13((char)((ulong)uVar82 >> 0x18)
                                                                       >> 1,(int3)((int)uVar82 >> 1)
                                                                      ))))),4);
      iVar99 = (int)(float)((ulong)uVar82 >> 0x20);
      fVar77 = (float)(int)(float)uVar82;
      fVar100 = (float)iVar99;
      uStack_600 = CONCAT44(fVar100,fVar77);
      iVar99 = iVar99 + 100;
      uVar66 = (undefined1)iVar99;
      uVar69 = (undefined1)((uint)iVar99 >> 8);
      uVar72 = (undefined1)((uint)iVar99 >> 0x10);
      cVar76 = (char)((uint)iVar99 >> 0x18);
      uVar82 = NEON_scvtf(CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,(int)(
                                                  float)uVar82 + 100)))),4);
      fStack_5dc = (float)uVar82;
      uStack_5f8 = CONCAT44(fStack_5dc,1);
      uStack_5f0 = CONCAT44(1,fVar100);
      fStack_5d8 = (float)((ulong)uVar82 >> 0x20);
      uStack_5e8 = CONCAT44(fStack_5d8,fVar77);
      uStack_5e0 = 1;
      uStack_5d4 = 1;
      dStack_10b0 = (double)lVar22;
      FUN_10967e938(param_1,&uStack_600,piStack_10c0 + 7,&lStack_120,lVar22 + 0x1c,4,&fStack_e8);
      FUN_10967ed94(&uStack_600,&fStack_e8,0,1,2,3,lVar26 + 0x2d390);
      lVar22 = 0x130;
      do {
        FUN_10967e7a0((long)piVar16 + lVar22,lVar26 + 0x2d390,lVar26 + lVar22);
        lVar22 = lVar22 + 0xc;
      } while (lVar22 != 0x5e0);
      FUN_1096766e4(piVar16,lVar26,&uStack_600,&fStack_e8);
      FUN_10967dbec(lVar26);
      iVar102 = 0;
      iVar33 = 0;
      uVar82 = *(undefined8 *)(lVar26 + 0xd8);
      iVar34 = *(int *)(lVar26 + 0xd0);
      iVar2 = *(int *)(lVar26 + 0xd4);
      dStack_10e0 = *(double *)((long)dStack_10b0 + 0xd8);
      iVar99 = -2;
      fVar77 = 0.0;
      do {
        iVar35 = -2;
        iVar42 = -10;
        iVar41 = iVar102;
        do {
          fStack_64c = (float)iVar2 / 2.0 + (float)iVar42;
          uVar51 = SUB41(fStack_64c,0);
          uVar56 = (undefined1)((uint)fStack_64c >> 8);
          uVar61 = (undefined1)((uint)fStack_64c >> 0x10);
          cVar63 = (char)((uint)fStack_64c >> 0x18);
          uStack_648 = 1;
          fStack_650 = (float)iVar34 / 2.0 + (float)(iVar99 * 5);
          FUN_109674a04(param_1,uVar82,&fStack_650,iVar34,iVar2,5);
          bVar13 = (float)CONCAT13(cVar63,CONCAT12(uVar61,CONCAT11(uVar56,uVar51))) == fVar77;
          bVar14 = (float)CONCAT13(cVar63,CONCAT12(uVar61,CONCAT11(uVar56,uVar51))) < fVar77;
          iVar102 = iVar99;
          iVar12 = iVar35;
          if (bVar13 || bVar14) {
            iVar102 = iVar41;
            iVar12 = iVar33;
          }
          iVar33 = iVar12;
          fVar100 = (float)CONCAT13(cVar63,CONCAT12(uVar61,CONCAT11(uVar56,uVar51)));
          if (bVar13 || bVar14) {
            fVar100 = fVar77;
          }
          fVar77 = fVar100;
          iVar35 = iVar35 + 1;
          iVar42 = iVar42 + 5;
          iVar41 = iVar102;
        } while (iVar42 != 0xf);
        iVar99 = iVar99 + 1;
      } while (iVar99 != 3);
      fVar77 = (float)iVar34 / 2.0 + (float)(iVar102 * 5);
      fVar89 = (float)iVar2 / 2.0 + (float)(iVar33 * 5);
      uStack_63c = 1;
      uStack_1120 = 5;
      fStack_644 = fVar77;
      fStack_640 = fVar89;
      FUN_109674a94(param_1,uVar82,&fStack_644,dStack_10e0,iVar34,iVar2,&fStack_644,auStack_638);
      fVar100 = fVar77 * 4.0 + 3.5;
      fVar89 = fVar89 * 4.0 + 3.5;
      uVar82 = NEON_fmov(0x40800000,4);
      uVar85 = NEON_fmov(0x40600000,4);
      uStack_668 = CONCAT44((float)((ulong)uVar85 >> 0x20) +
                            (float)((ulong)uVar82 >> 0x20) * auStack_638._4_4_,
                            (float)uVar85 + (float)uVar82 * auStack_638._0_4_);
      uStack_660 = ~uStack_630 >> 0x1f;
      FUN_10967ed94(&fStack_e8,&uStack_600,0,1,2,3,&uStack_6b0);
      piVar16 = piStack_10c0;
      fVar77 = fStack_690 + fVar89 * uStack_698._4_4_ + (float)uStack_698 * fVar100;
      fStack_65c = 8388608.0;
      if (fVar77 != 0.0) {
        fStack_65c = 1.0 / fVar77;
      }
      fStack_658 = (uStack_6a0._4_4_ + fVar89 * (float)uStack_6a0 + uStack_6a8._4_4_ * fVar100) *
                   fStack_65c;
      uStack_654 = 1;
      fStack_65c = ((float)uStack_6a8 + fVar89 * uStack_6b0._4_4_ + (float)uStack_6b0 * fVar100) *
                   fStack_65c;
      FUN_10967e808(param_1,&fStack_65c,piStack_10c0 + 0x14,1,&fStack_674);
      dVar105 = dStack_10b0;
      FUN_10967e808(param_1,&uStack_668,(long)dStack_10b0 + 0x50,1,&fStack_680);
      FUN_10967e808(param_1,&fStack_674,piVar16 + 0x26,1,&fStack_674);
      FUN_10967e808(param_1,&fStack_680,(long)dVar105 + 0x98,1,&fStack_680);
      lStack_150 = 0x3f800000;
      afStack_148[1] = 0.0;
      afStack_148[2] = 1.0;
      uStack_138 = 0;
      uStack_130 = 0x3f800000;
      afStack_148[0] = (fStack_680 - fStack_674) / *(float *)((long)dVar105 + 0x28);
      afStack_148[3] = (fStack_67c - fStack_670) / *(float *)((long)dVar105 + 0x28);
      _bzero(param_1 + 0x10af62,0x4b0);
      FUN_10967e938(param_1,piVar16 + 0x4c,piVar16 + 7,&lStack_150,(long)dVar105 + 0x1c,100,
                    param_1 + 0x10af62);
      plVar40 = plStack_1068;
      iVar96 = iVar96 + 0x124fd8;
      FUN_10967df78();
      lVar22 = *plVar40;
      *(int *)(lVar22 + 0xc) = iVar96;
      FUN_109676f64(param_1,piVar16,lVar22,lVar22 + 0x10,&uStack_600,0);
      piVar37 = piStack_1060;
      piVar104 = piStack_1098;
      piVar38 = piStack_10a0;
      piVar16 = piStack_10c8;
      plVar19 = plStack_10d0;
      param_3 = piStack_10d8;
      lVar22 = *plVar40;
      *(int *)(plVar40 + 0x9a) = 0;
      if (*(int *)(lVar22 + 0x10) < 0x15) {
        piStack_1060[4] = 0;
      }
      else {
        iVar96 = piStack_1060[4];
        piStack_1060[4] = iVar96 + 1;
        if (2 < iVar96) {
          iVar96 = *piStack_10c0;
          piVar107 = piStack_1070 + 3;
          iVar99 = 0x10;
          do {
            if (iVar96 < piVar107[-1]) {
              *piVar107 = 0;
            }
            piVar107 = piVar107 + 0xb548;
            iVar99 = iVar99 + -1;
          } while (iVar99 != 0);
          lVar26 = 0;
          *piStack_1060 = *param_1;
          piStack_1060[4] = 0;
          piStack_1060[5] = 0;
          piStack_1060[6] = 0;
          plVar40[2] = lVar22;
          plStack_10e8[1] = 0;
          *plStack_10e8 = 0;
          plStack_10e8[3] = 0;
          plStack_10e8[2] = 0;
          plStack_10e8[5] = 0;
          plStack_10e8[4] = 0;
          plStack_10e8[7] = 0;
          plStack_10e8[6] = 0;
          plStack_10e8[9] = 0;
          plStack_10e8[8] = 0;
          plStack_10e8[0xb] = 0;
          plStack_10e8[10] = 0;
          plStack_10e8[0xd] = 0;
          plStack_10e8[0xc] = 0;
          plStack_10e8[0xf] = 0;
          plStack_10e8[0xe] = 0;
          plStack_10e8[0x11] = 0;
          plStack_10e8[0x10] = 0;
          plStack_10e8[0x13] = 0;
          plStack_10e8[0x12] = 0;
          plStack_10e8[0x15] = 0;
          plStack_10e8[0x14] = 0;
          plStack_10e8[0x17] = 0;
          plStack_10e8[0x16] = 0;
          plStack_10e8[0x19] = 0;
          plStack_10e8[0x18] = 0;
          plStack_10e8[0x1b] = 0;
          plStack_10e8[0x1a] = 0;
          plStack_10e8[0x1d] = 0;
          plStack_10e8[0x1c] = 0;
          plStack_10e8[0x1f] = 0;
          plStack_10e8[0x1e] = 0;
          do {
            if (*(int *)(lVar22 + 0x220f4 + lVar26) != 0) {
              *(undefined4 *)((long)piStack_10f0 + lVar26) = 0xffff;
            }
            lVar26 = lVar26 + 4;
          } while (lVar26 != 400);
          lVar26 = 0;
          do {
            uVar29 = 0;
            piStack_10f0[lVar26] = 0;
            uVar25 = 0;
            if (*(int *)(lVar22 + 0x220f4 + lVar26 * 4) != 0) {
              uVar25 = 0xffff;
            }
            piStack_10f0[lVar26] = uVar25;
            uVar31 = 1;
            iVar96 = 0x20;
            do {
              uVar28 = (uint)uVar29;
              if ((uVar31 & uVar25) != 0) {
                uVar28 = uVar28 + 1;
              }
              uVar29 = (ulong)uVar28;
              uVar31 = uVar31 << 1;
              iVar96 = iVar96 + -1;
            } while (iVar96 != 0);
            piStack_10f8[lVar26] = uVar28;
            *(int *)((long)plStack_10e8 + uVar29 * 4) =
                 *(int *)((long)plStack_10e8 + (ulong)uVar28 * 4) + 1;
            lVar26 = lVar26 + 1;
          } while (lVar26 != 100);
          iVar96 = (int)plVar40[0x79];
          *(int *)(plVar40 + 0x89) = iVar96;
          lVar22 = 0x1f;
          piVar107 = (int *)((long)plVar40 + 0x44c);
          do {
            iVar96 = piVar107[-0x20] + iVar96;
            *piVar107 = iVar96;
            lVar22 = lVar22 + -1;
            piVar107 = piVar107 + 1;
          } while (lVar22 != 0);
          piStack_1060[1] = 1;
          FUN_109677cf0(param_1);
          *(int *)(plVar40 + 0x9a) = 1;
          lVar22 = *plVar40;
        }
      }
      *(undefined4 *)(lVar22 + 0x2d3e4) = 0;
    }
    else {
      iVar102 = (int)plVar40[0x125];
      iVar99 = iVar102 + 0xc;
      if (-1 < iVar102) {
        iVar99 = iVar102;
      }
      uVar51 = 0;
      uVar56 = 0;
      uVar61 = 0;
      cVar63 = '\0';
      iVar34 = -1;
      do {
        iVar2 = iVar102 + iVar34;
        iVar33 = iVar2 + 0xc;
        if (-1 < iVar2) {
          iVar33 = iVar2;
        }
        fVar77 = (float)*(undefined8 *)(param_1 + (long)iVar99 * 0xf + 0x10ad82) -
                 (float)*(undefined8 *)(param_1 + (long)iVar33 * 0xf + 0x10ad82);
        fVar100 = (float)((ulong)*(undefined8 *)(param_1 + (long)iVar99 * 0xf + 0x10ad82) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_1 + (long)iVar33 * 0xf + 0x10ad82) >> 0x20);
        fVar77 = (float)CONCAT13(cVar63,CONCAT12(uVar61,CONCAT11(uVar56,uVar51))) +
                 fVar77 * fVar77 + fVar100 * fVar100;
        uVar51 = SUB41(fVar77,0);
        uVar56 = (undefined1)((uint)fVar77 >> 8);
        uVar61 = (undefined1)((uint)fVar77 >> 0x10);
        cVar63 = (char)((uint)fVar77 >> 0x18);
        iVar34 = iVar34 + -1;
      } while (iVar34 != -3);
      iVar99 = 9;
      if (2 < iVar102) {
        iVar99 = -3;
      }
      fVar100 = 0.0;
      iVar34 = 8;
      do {
        iVar33 = iVar102 + iVar34 + -0xc;
        iVar2 = iVar102 + iVar34;
        if (-1 < iVar33) {
          iVar2 = iVar33;
        }
        fVar89 = (float)*(undefined8 *)(param_1 + (long)(iVar99 + iVar102) * 0xf + 0x10ad82) -
                 (float)*(undefined8 *)(param_1 + (long)iVar2 * 0xf + 0x10ad82);
        fVar78 = (float)((ulong)*(undefined8 *)(param_1 + (long)(iVar99 + iVar102) * 0xf + 0x10ad82)
                        >> 0x20) -
                 (float)((ulong)*(undefined8 *)(param_1 + (long)iVar2 * 0xf + 0x10ad82) >> 0x20);
        fVar100 = fVar100 + fVar89 * fVar89 + fVar78 * fVar78;
        iVar34 = iVar34 + -1;
      } while (iVar34 != 6);
      if (100.0 <= fVar77) {
LAB_109679408:
        piVar16 = piStack_1078;
        iVar99 = *(int *)((long)plVar40 + 0x654);
        iVar102 = 4;
        iVar34 = 1;
        do {
          iVar2 = iVar99 + 0xc;
          if (-1 < iVar99) {
            iVar2 = iVar99;
          }
          iVar33 = 0;
          if ((float)param_1[(long)iVar2 + 0x10ad75] <= 0.6) {
            iVar33 = iVar34;
          }
          iVar99 = iVar99 + -1;
          iVar102 = iVar102 + -1;
          iVar34 = iVar33;
        } while (iVar102 != 0);
        *piStack_1070 = iVar33;
        lVar26 = *plVar40;
        *(undefined4 *)(lVar26 + 0x18) = 0;
        lVar22 = plVar40[3];
        fVar77 = *(float *)(lVar22 + 0x28);
        fVar100 = *(float *)(lVar26 + 0x28);
        if (fVar77 == fVar100) {
          FUN_109676544(param_1,param_1 + 0x10af62);
          iVar96 = iVar96 + 0x124fd8;
          FUN_10967df78();
          lVar22 = *plVar40;
          *(int *)(lVar22 + 0xc) = iVar96;
          FUN_10967df78(param_1 + 0x493f6,plVar40[1],lVar22,plVar40[1] + 0x130,lVar22 + 0x130,
                        &uStack_600,100);
          lVar39 = 0;
          lVar26 = 0;
          lVar22 = *plVar40;
          do {
            if (*(int *)((long)&uStack_5f8 + lVar39) == 0) {
              if (*(int *)(lVar22 + lVar39 + 0x138) != 0) {
                puVar20 = (undefined4 *)(lVar22 + lVar39 + 0x138);
                goto LAB_109679538;
              }
            }
            else {
              uVar82 = *(undefined8 *)(lVar22 + lVar39 + 0x130);
              fVar77 = (float)*(undefined8 *)((long)&uStack_600 + lVar39) - (float)uVar82;
              fVar100 = (float)((ulong)*(undefined8 *)((long)&uStack_600 + lVar39) >> 0x20) -
                        (float)((ulong)uVar82 >> 0x20);
              if (1.0 < fVar77 * fVar77 + fVar100 * fVar100) {
                puVar20 = (undefined4 *)(lVar22 + 0x138 + lVar26 * 0xc);
LAB_109679538:
                *puVar20 = 0;
                *(int *)(lVar22 + 0xc) = *(int *)(lVar22 + 0xc) + -1;
                *(int *)(lVar22 + 0x18) = *(int *)(lVar22 + 0x18) + 1;
              }
            }
            lVar26 = lVar26 + 1;
            lVar39 = lVar39 + 0xc;
          } while (lVar39 != 0x4b0);
        }
        else if (fVar100 <= fVar77) {
          lVar36 = plStack_1068[5];
          afStack_e0[0] = 1.4013e-45;
          afStack_e0[3] = 1.4013e-45;
          uVar82 = *(undefined8 *)(piStack_1078 + 3);
          iVar99 = (int)((long)uVar82 >> 0x21);
          uVar82 = NEON_scvtf(CONCAT17((char)((long)uVar82 >> 0x39),
                                       CONCAT16((char)((uint)iVar99 >> 0x10),
                                                CONCAT15((char)((uint)iVar99 >> 8),
                                                         CONCAT14((char)iVar99,
                                                                  CONCAT13((char)((ulong)uVar82 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar82 >> 1))
                                                                 )))),4);
          iVar99 = (int)(float)((ulong)uVar82 >> 0x20);
          fStack_e8 = (float)(int)(float)uVar82;
          fStack_e4 = (float)iVar99;
          iVar99 = iVar99 + 100;
          uStack_c4 = NEON_scvtf(CONCAT17((char)((uint)iVar99 >> 0x18),
                                          CONCAT16((char)((uint)iVar99 >> 0x10),
                                                   CONCAT15((char)((uint)iVar99 >> 8),
                                                            CONCAT14((char)iVar99,
                                                                     (int)(float)uVar82 + 100)))),4)
          ;
          afStack_e0[1] = (float)uStack_c4;
          fStack_cc = (float)((ulong)uStack_c4 >> 0x20);
          fStack_c8 = 1.4013e-45;
          uStack_bc = 1;
          uStack_10b8 = 0;
          piStack_10c0 = (int *)(ulong)(uint)fVar77;
          afStack_e0[2] = fStack_e4;
          afStack_e0[4] = fStack_e8;
          FUN_10967e884(param_1,&fStack_e8,&lStack_120,4);
          lVar39 = 0;
          uVar82 = *(undefined8 *)(piVar16 + 3);
          iVar99 = (int)((long)uVar82 >> 0x21);
          uVar82 = NEON_scvtf(CONCAT17((char)((long)uVar82 >> 0x39),
                                       CONCAT16((char)((uint)iVar99 >> 0x10),
                                                CONCAT15((char)((uint)iVar99 >> 8),
                                                         CONCAT14((char)iVar99,
                                                                  CONCAT13((char)((ulong)uVar82 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar82 >> 1))
                                                                 )))),4);
          do {
            *(int *)((long)afStack_148 + lVar39) = *(int *)((long)&uStack_118 + lVar39);
            uVar85 = uVar82;
            if (*(int *)((long)&uStack_118 + lVar39) != 0) {
              uVar85 = CONCAT44((float)((ulong)uVar82 >> 0x20) +
                                (float)((ulong)*(undefined8 *)((long)&lStack_120 + lVar39) >> 0x20)
                                * SUB84(piStack_10c0,0),
                                (float)uVar82 +
                                (float)*(undefined8 *)((long)&lStack_120 + lVar39) *
                                SUB84(piStack_10c0,0));
            }
            *(undefined8 *)((long)&lStack_150 + lVar39) = uVar85;
            lVar39 = lVar39 + 0xc;
          } while ((int)lVar39 != 0x30);
          FUN_10967ed94(&fStack_e8,&lStack_150,0,1,2,3,lVar36 + 0x2d390);
          FUN_1096766e4(lVar26,lVar36,&fStack_e8,&lStack_150);
          FUN_10967dbec(lVar36);
          uStack_6a8 = uStack_10a8;
          uStack_6b0 = (long)dStack_10b0;
          uStack_698 = uStack_10a8;
          uStack_6a0 = (long)dStack_10b0;
          fStack_690 = 1.0;
          _bzero(param_1 + 0x10af62,0x4b0);
          uStack_588 = *(undefined8 *)(lVar26 + 0x94);
          uStack_590 = *(undefined8 *)(lVar26 + 0x8c);
          uStack_580 = *(undefined8 *)(lVar26 + 0x9c);
          uStack_578 = *(undefined8 *)(lVar26 + 0xa4);
          uStack_568 = *(undefined8 *)(lVar26 + 0xb4);
          uStack_570 = *(undefined8 *)(lVar26 + 0xac);
          uStack_560 = *(undefined8 *)(lVar26 + 0xbc);
          uStack_558 = *(undefined8 *)(lVar26 + 0xc4);
          uStack_5c8 = *(undefined8 *)(lVar26 + 0x54);
          uStack_5d0 = *(undefined8 *)(lVar26 + 0x4c);
          uStack_5c0 = *(undefined8 *)(lVar26 + 0x5c);
          uStack_5b8 = *(undefined8 *)(lVar26 + 100);
          uStack_5a8 = *(undefined8 *)(lVar26 + 0x74);
          uStack_5b0 = *(undefined8 *)(lVar26 + 0x6c);
          uStack_5a0 = *(undefined8 *)(lVar26 + 0x7c);
          uStack_598 = *(undefined8 *)(lVar26 + 0x84);
          uStack_600 = *(long *)(lVar26 + 0x1c);
          uStack_5f0 = *(undefined8 *)(lVar26 + 0x2c);
          uStack_5e8 = *(undefined8 *)(lVar26 + 0x34);
          fStack_5d8 = (float)*(undefined8 *)(lVar26 + 0x44);
          uStack_5d4 = (undefined4)((ulong)*(undefined8 *)(lVar26 + 0x44) >> 0x20);
          uStack_5e0 = (undefined4)*(undefined8 *)(lVar26 + 0x3c);
          fStack_5dc = (float)((ulong)*(undefined8 *)(lVar26 + 0x3c) >> 0x20);
          uStack_5f8._0_4_ = (int)*(undefined8 *)(lVar26 + 0x24);
          uStack_5f8 = CONCAT44(*(undefined4 *)(lVar22 + 0x28),(int)uStack_5f8);
          iVar99 = 100;
          FUN_10967e938(param_1,lVar22 + 0x130,lVar22 + 0x1c,&uStack_6b0,&uStack_600,100,
                        param_1 + 0x10af62);
          plVar40 = plStack_1068;
          iVar96 = iVar96 + 0x124fd8;
          FUN_10967df78();
          *(int *)(*plVar40 + 0xc) = iVar96;
          FUN_10967e884(param_1,plVar40[5] + 0x130,param_1 + 0x10af62,100);
          lVar22 = *plVar40;
          uVar82 = *(undefined8 *)(piStack_1078 + 3);
          cVar63 = (char)((ulong)uVar82 >> 0x18) >> 1;
          iVar96 = (int)((long)uVar82 >> 0x21);
          uVar66 = (undefined1)iVar96;
          uVar69 = (undefined1)((uint)iVar96 >> 8);
          uVar72 = (undefined1)((uint)iVar96 >> 0x10);
          cVar76 = (char)((long)uVar82 >> 0x39);
          uVar82 = NEON_scvtf(CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,
                                                  CONCAT13(cVar63,(int3)((int)uVar82 >> 1)))))),4);
          fVar77 = *(float *)(lVar22 + 0x28);
          plVar19 = plVar40 + 0x1bc;
          piVar16 = (int *)(lVar22 + 0x138);
          do {
            lVar26 = *plVar19;
            *piVar16 = (int)lVar26;
            uVar85 = uVar82;
            if ((int)lVar26 != 0) {
              uVar85 = CONCAT44((float)((ulong)uVar82 >> 0x20) +
                                (float)((ulong)plVar19[-1] >> 0x20) * fVar77,
                                (float)uVar82 + (float)plVar19[-1] * fVar77);
            }
            *(undefined8 *)(piVar16 + -2) = uVar85;
            plVar19 = (long *)((long)plVar19 + 0xc);
            piVar16 = piVar16 + 3;
            iVar99 = iVar99 + -1;
          } while (iVar99 != 0);
        }
        else {
          lVar36 = plStack_1068[5];
          uVar82 = *(undefined8 *)(piStack_1078 + 3);
          iVar99 = (int)((long)uVar82 >> 0x21);
          uVar82 = NEON_scvtf(CONCAT17((char)((long)uVar82 >> 0x39),
                                       CONCAT16((char)((uint)iVar99 >> 0x10),
                                                CONCAT15((char)((uint)iVar99 >> 8),
                                                         CONCAT14((char)iVar99,
                                                                  CONCAT13((char)((ulong)uVar82 >>
                                                                                 0x18) >> 1,
                                                                           (int3)((int)uVar82 >> 1))
                                                                 )))),4);
          iVar99 = (int)(float)((ulong)uVar82 >> 0x20);
          fVar77 = (float)(int)(float)uVar82;
          fVar89 = (float)iVar99;
          uStack_600 = CONCAT44(fVar89,fVar77);
          iVar99 = iVar99 + 100;
          uVar82 = NEON_scvtf(CONCAT17((char)((uint)iVar99 >> 0x18),
                                       CONCAT16((char)((uint)iVar99 >> 0x10),
                                                CONCAT15((char)((uint)iVar99 >> 8),
                                                         CONCAT14((char)iVar99,
                                                                  (int)(float)uVar82 + 100)))),4);
          fStack_5dc = (float)uVar82;
          uStack_5f8 = CONCAT44(fStack_5dc,1);
          uStack_5f0 = CONCAT44(1,fVar89);
          fStack_5d8 = (float)((ulong)uVar82 >> 0x20);
          uStack_5e8 = CONCAT44(fStack_5d8,fVar77);
          uStack_5e0 = 1;
          uStack_5d4 = 1;
          uStack_10b8 = 0;
          piStack_10c0 = (int *)(ulong)(uint)fVar100;
          FUN_10967e884(param_1,&uStack_600,&fStack_e8,4);
          lVar39 = 0;
          uVar82 = *(undefined8 *)(piVar16 + 3);
          cVar63 = (char)((ulong)uVar82 >> 0x18) >> 1;
          iVar99 = (int)((long)uVar82 >> 0x21);
          uVar66 = (undefined1)iVar99;
          uVar69 = (undefined1)((uint)iVar99 >> 8);
          uVar72 = (undefined1)((uint)iVar99 >> 0x10);
          cVar76 = (char)((long)uVar82 >> 0x39);
          uVar82 = NEON_scvtf(CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,
                                                  CONCAT13(cVar63,(int3)((int)uVar82 >> 1)))))),4);
          do {
            *(int *)((long)&uStack_118 + lVar39) = *(int *)((long)afStack_e0 + lVar39);
            uVar85 = uVar82;
            if (*(int *)((long)afStack_e0 + lVar39) != 0) {
              uVar85 = CONCAT44((float)((ulong)uVar82 >> 0x20) +
                                (float)((ulong)*(undefined8 *)((long)&fStack_e8 + lVar39) >> 0x20) *
                                SUB84(piStack_10c0,0),
                                (float)uVar82 +
                                (float)*(undefined8 *)((long)&fStack_e8 + lVar39) *
                                SUB84(piStack_10c0,0));
            }
            *(undefined8 *)((long)&lStack_120 + lVar39) = uVar85;
            lVar39 = lVar39 + 0xc;
          } while ((int)lVar39 != 0x30);
          FUN_10967ed94(&uStack_600,&lStack_120,0,1,2,3,lVar36 + 0x2d390);
          lVar39 = 0x130;
          do {
            FUN_10967e7a0(lVar22 + lVar39,lVar36 + 0x2d390,lVar36 + lVar39);
            lVar39 = lVar39 + 0xc;
          } while (lVar39 != 0x5e0);
          FUN_1096766e4(lVar22,lVar36,&uStack_600,&lStack_120);
          FUN_10967dbec(lVar36);
          afStack_148[0] = (float)uStack_10a8;
          afStack_148[1] = (float)((ulong)uStack_10a8 >> 0x20);
          lStack_150 = (long)dStack_10b0;
          uStack_138 = uStack_10a8;
          afStack_148[2] = SUB84(dStack_10b0,0);
          afStack_148[3] = (float)((ulong)dStack_10b0 >> 0x20);
          uStack_130 = 0x3f800000;
          _bzero(param_1 + 0x10af62,0x4b0);
          FUN_10967e938(param_1,lVar22 + 0x130,lVar22 + 0x1c,&lStack_150,lVar26 + 0x1c,100,
                        param_1 + 0x10af62);
          plVar40 = plStack_1068;
          iVar96 = iVar96 + 0x124fd8;
          FUN_10967df78();
          lVar22 = *plVar40;
          *(int *)(lVar22 + 0xc) = iVar96;
        }
        piVar16 = piStack_1060;
        iVar96 = *param_1;
        lVar36 = 0x22284;
        lVar39 = 0x138;
        lVar26 = 0x42b1e8;
        do {
          if (*(int *)(lVar22 + lVar39) == 0) {
            *(int *)(lVar22 + lVar36) = iVar96;
            *(undefined4 *)((long)param_1 + lVar26) = 0;
            *(int *)(plVar40 + 0x15) = 0;
          }
          lVar26 = lVar26 + 4;
          lVar39 = lVar39 + 0xc;
          lVar36 = lVar36 + 4;
        } while ((int)lVar39 != 0x5e8);
        piVar37 = param_1;
        FUN_109676f64(param_1,plVar40[3],lVar22,lVar22 + 0x10,&uStack_600,1);
        piVar16[1] = (int)piVar37;
        if (piVar16[6] == 0) {
          piVar16[5] = 0;
LAB_10967a434:
          if ((int)piVar37 == 0) goto LAB_10967a444;
          lVar22 = 0x42b480;
          iVar96 = 1;
        }
        else {
          iVar96 = piVar16[5];
          piVar16[5] = iVar96 + 1;
          if (iVar96 < 3) goto LAB_10967a434;
          piVar16[1] = 0;
LAB_10967a444:
          *(int *)(plVar40 + 0x9a) = 0;
          iVar96 = *param_1;
          lVar22 = 0x42c6f0;
        }
        *(int *)((long)param_1 + lVar22) = iVar96;
      }
      else {
        fVar77 = fVar77 * 3.0;
        bVar14 = false;
        bVar13 = true;
        bVar15 = false;
        if (100.0 < fVar100) {
          bVar14 = false;
          bVar13 = false;
          bVar15 = true;
          if (!NAN(fVar100) && !NAN(fVar77)) {
            bVar14 = fVar100 < fVar77;
            bVar13 = fVar100 == fVar77;
            bVar15 = false;
          }
        }
        if (bVar13 || bVar14 != bVar15) goto LAB_109679408;
        piStack_1060[3] = 0;
        piVar37 = (int *)plVar40[4];
        piVar38 = (int *)*plVar40;
        iVar99 = 0x10;
        uVar51 = 0x20;
        uVar56 = 0x7b;
        uVar61 = 0xb7;
        cVar63 = 'H';
        piVar16 = piStack_1090;
        do {
          if (((piVar16[1] != 0) && (0x1e < *piVar38 - *piVar16)) &&
             (fVar77 = (float)*(undefined8 *)(piVar38 + 7) - (float)*(undefined8 *)(piVar16 + 7),
             fVar100 = (float)((ulong)*(undefined8 *)(piVar38 + 7) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(piVar16 + 7) >> 0x20),
             fVar77 = SQRT(fVar77 * fVar77 + fVar100 * fVar100 +
                           ((float)piVar38[9] - (float)piVar16[9]) *
                           ((float)piVar38[9] - (float)piVar16[9])),
             fVar77 < (float)CONCAT13(cVar63,CONCAT12(uVar61,CONCAT11(uVar56,uVar51))))) {
            uVar51 = SUB41(fVar77,0);
            uVar56 = (undefined1)((uint)fVar77 >> 8);
            uVar61 = (undefined1)((uint)fVar77 >> 0x10);
            cVar63 = (char)((uint)fVar77 >> 0x18);
            piVar37 = piVar16;
          }
          piVar16 = piVar16 + 0xb548;
          iVar99 = iVar99 + -1;
        } while (iVar99 != 0);
        plVar40[0x14] = (long)piVar37;
        if (0.05 < ABS((float)piVar37[0xb4ed] - *(float *)(plVar40[1] + 0x2d3b4)) /
                   (float)piVar37[0xb4ed]) {
          if ((float)piVar37[0xb4e3] != 1.0) {
            piVar16 = piVar37 + 0x8905;
            lVar22 = 5;
            do {
              if (*piVar16 != 0) {
                FUN_109676d34(param_1,piVar37,piVar16);
              }
              piVar16 = piVar16 + 0x8c6;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            piVar38 = (int *)*plVar40;
          }
          FUN_109676544(param_1,param_1 + 0x10af62);
          piVar16 = param_1 + 0x493f6;
          FUN_10967df78(piVar16,piVar37,piVar38,piVar37 + 0x4c,piVar37 + 0x4c,piVar38 + 0x4c,100);
          piVar38[3] = (int)piVar16;
          if ((0x32 < (int)piVar16) &&
             (FUN_109676f64(param_1,piVar37,piVar38,piVar38 + 4,&uStack_600,0), 0x1e < piVar38[4]))
          {
            piStack_1060[5] = 0;
            piStack_1060[6] = 0;
            piStack_1060[3] = 1;
            plVar40[3] = (long)piVar37;
            iVar99 = *piVar37;
            piVar16 = piStack_1070 + 3;
            iVar102 = 0x10;
            do {
              if (iVar99 < piVar16[-1]) {
                *piVar16 = 0;
              }
              piVar16 = piVar16 + 0xb548;
              iVar102 = iVar102 + -1;
            } while (iVar102 != 0);
          }
        }
        if (piStack_1060[3] != 1) goto LAB_109679408;
        iVar96 = *piVar37;
        piVar16 = piStack_1070 + 3;
        lVar22 = 0x10;
        do {
          if ((piVar16[-1] < iVar96) && (*piVar16 != 0)) {
            *piVar16 = 0;
          }
          piVar16 = piVar16 + 0xb548;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        plVar40[4] = (long)piVar37;
        *(int *)(plVar40 + 0x9a) = 1;
        iVar96 = *param_1;
        *(int *)(plVar40 + 0x13) = *(int *)plVar40[0x14];
        *(int *)((long)plVar40 + 0x9c) = iVar96;
        piStack_1060[3] = 1;
        piVar16 = piStack_1060;
      }
      if (piVar16[1] == 0) {
        iVar96 = *(int *)*plVar40;
        piVar16 = piStack_1070 + 3;
        iVar99 = 0x10;
        do {
          if (iVar96 + -4 < piVar16[-1]) {
            *piVar16 = 0;
          }
          piVar16 = piVar16 + 0xb548;
          iVar99 = iVar99 + -1;
        } while (iVar99 != 0);
        *(int *)(plVar40 + 0x9a) = 0;
        piVar16 = piStack_10c8;
        plVar19 = plStack_10d0;
      }
      else {
        lVar22 = 0;
        bVar14 = false;
        lVar36 = *plVar40;
        lVar26 = 0x67d8;
        lVar39 = 0x22414;
        do {
          if ((*(int *)(lVar36 + lVar39) != 0) &&
             (*(int *)(*(long *)(param_1 + 0x19f4) + lVar22 + 4) == 2)) {
            lVar3 = lVar36 + lVar39;
            fVar77 = (float)*(undefined8 *)(lVar3 + 0x34) -
                     (float)*(undefined8 *)((long)param_1 + lVar26);
            fVar100 = (float)((ulong)*(undefined8 *)(lVar3 + 0x34) >> 0x20) -
                      (float)((ulong)*(undefined8 *)((long)param_1 + lVar26) >> 0x20);
            fVar77 = SQRT(fVar77 * fVar77 + fVar100 * fVar100);
            bVar14 = (bool)(bVar14 | 10.0 < fVar77);
            if (10.0 < fVar77) {
              lVar4 = *(long *)(param_1 + 0x19f4) + lVar22;
              FUN_10967eaa0(CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,CONCAT13
                                                  (cVar63,CONCAT12(uVar61,CONCAT11(uVar56,uVar51))))
                                                  ))),*(undefined4 *)(lVar3 + 0x38),
                            *(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x14),param_1,
                            lVar3 + 0x70,lVar36 + 0x1c,lVar3 + 0x70,0x168);
              FUN_10967eaa0(CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,CONCAT13
                                                  (cVar63,CONCAT12(uVar61,CONCAT11(uVar56,uVar51))))
                                                  ))),*(undefined4 *)(lVar3 + 0x38),
                            *(undefined4 *)(*(long *)(param_1 + 0x19f4) + lVar22 + 0x10),
                            *(undefined4 *)(*(long *)(param_1 + 0x19f4) + lVar22 + 0x14),param_1,
                            lVar3 + 4,lVar36 + 0x1c,lVar3 + 4,9);
              plVar19 = plStack_1068;
              uVar8 = *(undefined4 *)(*plStack_1068 + 0x28);
              uVar51 = (undefined1)uVar8;
              uVar56 = (undefined1)((uint)uVar8 >> 8);
              uVar61 = (undefined1)((uint)uVar8 >> 0x10);
              cVar63 = (char)((uint)uVar8 >> 0x18);
              FUN_1096768b0(param_1,lVar3 + 0x34,*plStack_1068 + 0x50);
              *(uint *)(lVar3 + 0x22c8) = CONCAT13(cVar63,CONCAT12(uVar61,CONCAT11(uVar56,uVar51)));
              lVar36 = *plVar19;
              *(float *)(lVar3 + 0x22c4) =
                   (float)CONCAT13(cVar63,CONCAT12(uVar61,CONCAT11(uVar56,uVar51))) *
                   *(float *)(lVar36 + 0x2d3b4);
              *(undefined4 *)(lVar3 + 0x22cc) = 0x3f800000;
            }
          }
          plVar40 = plStack_1068;
          piVar16 = piStack_10c8;
          plVar19 = plStack_10d0;
          lVar22 = lVar22 + 0x14;
          lVar39 = lVar39 + 0x2318;
          lVar26 = lVar26 + 0xc;
        } while (lVar22 != 100);
        piVar37 = (int *)(lVar36 + 0x22414);
        if (*(int *)(lVar36 + 0x10) < 0xf) {
          bVar13 = *(int *)(plStack_1068[1] + 0x10) < 0x1e;
        }
        else {
          bVar13 = false;
        }
        piVar38 = (int *)plStack_1068[3];
        bVar15 = 0x32 < *param_1 - *piVar38;
        bVar1 = true;
        if ((ABS(*(float *)(lVar36 + 0x24) - (float)piVar38[9]) <= 0.08726646) &&
           (ABS(*(float *)(lVar36 + 0x20) - (float)piVar38[8]) <= 0.08726646)) {
          bVar1 = 0.08726646 < ABS(*(float *)(lVar36 + 0x1c) - (float)piVar38[7]);
        }
        iVar96 = *(int *)(lVar36 + 0xc);
        fVar77 = *(float *)(lVar36 + 0x22448) - (float)piVar38[0x8912];
        fVar100 = *(float *)(lVar36 + 0x2244c) - (float)piVar38[0x8913];
        fVar77 = fVar77 * fVar77 + fVar100 * fVar100;
        if (10 < *param_1 - *piVar38) {
          fVar100 = *(float *)(lVar36 + 0x246d8) / (float)piVar38[0x91b6];
          if (0x27 < *(int *)(lVar36 + 0x14)) {
            iVar102 = *(int *)((long)plStack_1068 + 0x654);
            iVar99 = iVar102 + 0xc;
            if (-1 < iVar102) {
              iVar99 = iVar102;
            }
            if ((((float)param_1[(long)iVar99 + 0x10ad75] <= 0.8) || (0x4a < iVar96)) &&
               (*piStack_1070 == 0 || fVar77 <= 400.0 && (fVar100 <= 1.1 && 0.9090909 <= fVar100)))
            goto LAB_10967a754;
          }
          bVar15 = true;
        }
LAB_10967a754:
        fVar100 = *(float *)(lVar36 + 0x28) / (float)piVar38[10];
        if ((((*(float *)(lVar36 + 0x2d38c) < 0.9090909) || (1.1 < *(float *)(lVar36 + 0x2d38c))) ||
            (((fVar100 < 0.990099 || 1.01 < fVar100) ||
              (((bVar13 || (iVar96 < 0x1e || *(int *)(lVar36 + 0x10) < 0x1e)) ||
               0x1e < *(int *)(plStack_1068[1] + 0xc) - iVar96) || bVar1) ||
             ((50.0 < SQRT(fVar77) ||
              ((bool)((*(ushort *)(*(long *)(param_1 + 0x19f4) + 0x98) & 0x1c0) == 0 & bVar15)))))))
           || (bVar14)) {
          FUN_109677cf0(param_1,lVar36);
          if (*(int *)((long)plVar40 + 0x4e4) == 0) {
            lVar22 = 5;
            do {
              if (*piVar37 != 0) {
                FUN_109676d34(param_1,lVar36,piVar37);
              }
              piVar37 = piVar37 + 0x8c6;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
          *piStack_1080 = 1;
        }
      }
      lVar22 = 0;
      lVar26 = 0x22414;
      do {
        if (*(int *)(*(long *)(param_1 + 0x19f4) + lVar22 + 4) == 3) {
          uStack_600 = *(long *)(*(long *)(param_1 + 0x19f4) + lVar22 + 8);
          uStack_5f8 = CONCAT44(uStack_5f8._4_4_,1);
          FUN_109676e08(param_1,*plVar40 + 0x1c,&uStack_600,*plVar40 + lVar26);
        }
        lVar26 = lVar26 + 0x2318;
        lVar22 = lVar22 + 0x14;
        piVar38 = piStack_10a0;
        piVar37 = piStack_1060;
        piVar104 = piStack_1098;
      } while (lVar22 != 100);
    }
    FUN_10967fa38(3);
  }
  lVar22 = *plVar40;
  piVar37[8] = *(int *)(lVar22 + 0x2d3b4);
  fVar78 = (float)piVar37[7];
  FUN_10967e884(param_1,lVar22 + 0x22448,&uStack_600,1);
  fVar88 = 1.0 / SQRT(uStack_600._4_4_ * uStack_600._4_4_ + (float)uStack_600 * (float)uStack_600 +
                      1.0);
  fVar77 = (float)uStack_600 * fVar88;
  fVar89 = uStack_600._4_4_ * fVar88;
  fVar100 = fVar89 * *(float *)(lVar22 + 0x6c) + fVar77 * *(float *)(lVar22 + 0x68) +
            fVar88 * *(float *)(lVar22 + 0x70);
  fVar78 = -fVar78 / fVar100;
  fVar97 = (*(float *)(lVar22 + 0x54) * fVar89 + fVar77 * *(float *)(lVar22 + 0x50) +
           fVar88 * *(float *)(lVar22 + 0x58)) * fVar78;
  fVar77 = (*(float *)(lVar22 + 0x60) * fVar89 + fVar77 * *(float *)(lVar22 + 0x5c) +
           fVar88 * *(float *)(lVar22 + 100)) * fVar78;
  fVar100 = fVar100 * fVar78;
  FUN_10967f7c8(CONCAT17(cVar76,CONCAT16(uVar72,CONCAT15(uVar69,CONCAT14(uVar66,CONCAT13(cVar63,
                                                  CONCAT12(uVar61,CONCAT11(uVar56,uVar51))))))),0,
                -(*(float *)(*plVar40 + 0x24) - *(float *)(plVar40[4] + 0x24)),&uStack_600);
  FUN_109675c30(&uStack_600,&fStack_e8);
  lVar22 = *plVar40;
  *(float *)(lVar22 + 0x2d3e8) = fVar77 * fStack_e4 + fVar97 * fStack_e8 + fVar100 * afStack_e0[0];
  *(float *)(lVar22 + 0x2d3ec) =
       fVar77 * afStack_e0[2] + fVar97 * afStack_e0[1] + fVar100 * afStack_e0[3];
  *(float *)(lVar22 + 0x2d3f0) = fVar77 * fStack_cc + fVar97 * afStack_e0[4] + fVar100 * fStack_c8;
  iVar96 = *(int *)((long)plVar40 + 0xdd4);
  uVar82 = *(undefined8 *)(lVar22 + 0x2d3e8);
  *(undefined8 *)(param_1 + (long)iVar96 * 4 + 0x10aeeb) = *(undefined8 *)(lVar22 + 0x2d3f0);
  *(undefined8 *)(param_1 + (long)iVar96 * 4 + 0x10aee9) = uVar82;
  iVar96 = 0;
  if (*(int *)((long)plVar40 + 0xdd4) != 0x1d) {
    iVar96 = *(int *)((long)plVar40 + 0xdd4) + 1;
  }
  *(int *)((long)plVar40 + 0xdd4) = iVar96;
  *(int *)((long)plVar40 + 0x4d4) = 0;
  lVar22 = *plVar40;
  fVar77 = *(float *)(lVar22 + 0x2d38c);
  iVar96 = *piStack_1070;
  if (((iVar96 == 0) || (piStack_1070[1] < 0xb)) && (piVar37[6] == 0)) {
    fVar89 = (float)piStack_1088[*piVar16 + (*piVar16 >> 0x1f) * -0x80] + 20.0;
    fVar100 = (float)piVar16[1];
    bVar14 = false;
    bVar13 = true;
    bVar15 = false;
    if (1.06 < fVar77) {
      bVar14 = false;
      bVar13 = false;
      bVar15 = true;
      if (!NAN(fVar89) && !NAN(fVar100)) {
        bVar14 = fVar89 < fVar100;
        bVar13 = fVar89 == fVar100;
        bVar15 = false;
      }
    }
    if ((piVar37[1] == 0) || (!bVar13 && bVar14 == bVar15)) goto LAB_10967aa5c;
  }
  else {
LAB_10967aa5c:
    *(int *)((long)plVar40 + 0x4d4) = 1;
  }
  if (*(int *)((long)plVar40 + 0x4e4) != 0) {
    *(int *)((long)plVar40 + 0x4d4) = 5;
  }
  if (((*(byte *)(*(long *)(param_1 + 0x19f4) + 0x99) >> 2 & 1) == 0) && (1.15 < fVar77)) {
    *(int *)((long)plVar40 + 0x4d4) = 5;
  }
  if (((((*(float *)(lVar22 + 0x22448) < 0.0) ||
        ((float)piStack_1078[3] < *(float *)(lVar22 + 0x22448))) ||
       (*(float *)(lVar22 + 0x2244c) < 0.0)) ||
      ((float)piStack_1078[4] < *(float *)(lVar22 + 0x2244c))) &&
     ((fVar77 = *(float *)(lVar22 + 0x2d3f0) - *(float *)(plVar40[1] + 0x2d3f0),
      uVar82 = *(undefined8 *)(plVar40[1] + 0x2d3e8),
      fVar100 = (float)*(undefined8 *)(lVar22 + 0x2d3e8) - (float)uVar82,
      fVar89 = (float)((ulong)*(undefined8 *)(lVar22 + 0x2d3e8) >> 0x20) -
               (float)((ulong)uVar82 >> 0x20),
      fVar77 = SQRT(fVar100 * fVar100 + fVar89 * fVar89 + fVar77 * fVar77), 10.0 < fVar77 ||
      ((iVar96 != 0 && (5.0 < fVar77)))))) {
    *(int *)((long)plVar40 + 0x4d4) = 5;
  }
  if (piVar37[3] != 0) {
    *(int *)((long)plVar40 + 0x4d4) = 0;
  }
  iVar99 = *(int *)(lVar22 + 0x2d3b4);
  iVar96 = 0;
  if (*(int *)((long)plVar40 + 0x99c) != 0xf) {
    iVar96 = *(int *)((long)plVar40 + 0x99c) + 1;
  }
  *(int *)((long)plVar40 + 0x99c) = iVar96;
  param_1[(long)iVar96 + 0x10ae43] = iVar99;
  iVar96 = 0;
  if ((int)plVar40[0x13c] != 0xf) {
    iVar96 = (int)plVar40[0x13c] + 1;
  }
  iVar99 = *(int *)(lVar22 + 0x14);
  *(int *)(plVar40 + 0x13c) = iVar96;
  param_1[(long)iVar96 + 0x10ae54] = (int)(float)iVar99;
  piVar107 = param_1 + 0x10ad82;
  iVar96 = 0;
  if ((int)plVar40[0x125] != 0xb) {
    iVar96 = (int)plVar40[0x125] + 1;
  }
  *(int *)(plVar40 + 0x125) = iVar96;
  lVar22 = 0x22448;
  lVar26 = 5;
  do {
    lVar39 = plVar40[0x125];
    uVar82 = *(undefined8 *)(*plVar40 + lVar22);
    (piVar107 + (long)(int)lVar39 * 0xf)[2] = *(int *)((undefined8 *)(*plVar40 + lVar22) + 1);
    *(undefined8 *)(piVar107 + (long)(int)lVar39 * 0xf) = uVar82;
    piVar107 = piVar107 + 3;
    lVar22 = lVar22 + 0x2318;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  iVar96 = 0;
  iVar99 = 0;
  if ((int)plVar40[0xac] != 0xb) {
    iVar99 = (int)plVar40[0xac] + 1;
  }
  *(int *)(plVar40 + 0xac) = iVar99;
  param_1[(long)iVar99 + 0x10ad26] = *(int *)((long)plVar40 + 0x4d4);
  iVar102 = (int)plVar40[0xac];
  iVar99 = -10;
  do {
    iVar34 = iVar102 + 0xc;
    if (-1 < iVar102) {
      iVar34 = iVar102;
    }
    iVar96 = param_1[(long)iVar34 + 0x10ad26] + iVar96;
    iVar102 = iVar102 + -1;
    bVar14 = iVar99 != -1;
    iVar99 = iVar99 + 1;
  } while (bVar14);
  if (iVar96 < 5) {
    iVar96 = *piVar38 + -1;
    if (0 < *piVar38) goto LAB_10967ac44;
  }
  else {
    iVar96 = 1;
LAB_10967ac44:
    *piVar38 = iVar96;
  }
  FUN_10967fa38(0);
  *(uint *)(*plVar19 + 0xf88) =
       (uint)((int)plVar40[0x9a] == 1 || *(int *)((long)plVar40 + 0x4cc) == 1);
  lVar39 = *(long *)(param_1 + 0x19f2);
  lVar26 = *plVar40;
  puVar20 = (undefined4 *)(lVar26 + 0x22414);
  lVar22 = 5;
  puVar24 = (undefined4 *)(lVar39 + 8);
  do {
    *(undefined8 *)(puVar24 + -2) = *(undefined8 *)(puVar20 + 0xd);
    *puVar24 = *puVar20;
    puVar20 = puVar20 + 0x8c6;
    lVar22 = lVar22 + -1;
    puVar24 = puVar24 + 3;
  } while (lVar22 != 0);
  *(uint *)(lVar39 + 0x3c) = (uint)(*piVar38 != 0);
  *(uint *)(lVar39 + 0x40) = (uint)(piVar16[3] == 0);
  *(int *)(lVar39 + 0x44) = *piVar104;
  *(int *)(lVar39 + 0x48) = piVar104[6];
  *(int *)(lVar39 + 0x4c) = piVar16[0x2f8];
  _memcpy(lVar39 + 0x500,lVar26 + 0x130,0x4b0);
  _memcpy(lVar39 + 0x50,plVar40[4] + 0x130,0x4b0);
  _memcpy(lVar39 + 0x9b0,param_1 + 0x10af62,0x4b0);
  *(undefined8 *)(lVar39 + 0xe70) = *(undefined8 *)piStack_1080;
  *(int *)(lVar39 + 0xe78) = piVar37[3];
  lVar22 = *plVar40;
  *(undefined8 *)(lVar39 + 0xe7c) = *(undefined8 *)(lVar22 + 0xc);
  *(undefined8 *)(lVar39 + 0xe94) = *(undefined8 *)(lVar22 + 0x246e4);
  *(undefined4 *)(lVar39 + 0x2070) = *(undefined4 *)plVar40[3];
  *(undefined4 *)(lVar39 + 0xe6c) = *(undefined4 *)(plVar40[4] + 0x246d8);
  *(undefined4 *)(lVar39 + 0xe60) = *(undefined4 *)(lVar22 + 0x2d3b4);
  uVar82 = *(undefined8 *)(param_1 + 0x10abf8);
  *(undefined8 *)(lVar39 + 0xe8c) = *(undefined8 *)(param_1 + 0x10abfa);
  *(undefined8 *)(lVar39 + 0xe84) = uVar82;
  lVar22 = *plVar40;
  *(undefined4 *)(lVar39 + 0xe9c) = *(undefined4 *)(lVar22 + 0x2d38c);
  fVar77 = *(float *)(lVar22 + 0x246d8);
  *(float *)(lVar39 + 0xe64) = fVar77;
  *(float *)(lVar39 + 0xe68) = fVar77 * *(float *)(lVar22 + 0x246e0);
  *(int *)(lVar39 + 0xf7c) = param_1[(long)piVar38[0x5f] + 0x10ad75];
  _memcpy(lVar39 + 0xf8c,lVar22 + 0x2479c,0x10e0);
  _memcpy(lVar39 + 0xb860,*plVar40 + 0x220f4,400);
  lVar22 = *plVar40;
  uVar8 = *(undefined4 *)(lVar22 + 0x70);
  uVar85 = *(undefined8 *)(lVar22 + 0x58);
  uVar82 = *(undefined8 *)(lVar22 + 0x50);
  uVar86 = *(undefined8 *)(lVar22 + 0x60);
  *(undefined8 *)(lVar39 + 0xba08) = *(undefined8 *)(lVar22 + 0x68);
  *(undefined8 *)(lVar39 + 0xba00) = uVar86;
  *(undefined8 *)(lVar39 + 0xb9f8) = uVar85;
  *(undefined8 *)(lVar39 + 0xb9f0) = uVar82;
  *(undefined4 *)(lVar39 + 0xba10) = uVar8;
  lVar22 = *plVar40;
  uVar8 = *(undefined4 *)(lVar22 + 0x4c);
  uVar85 = *(undefined8 *)(lVar22 + 0x44);
  uVar82 = *(undefined8 *)(lVar22 + 0x3c);
  uVar86 = *(undefined8 *)(lVar22 + 0x2c);
  *(undefined8 *)(lVar39 + 0xba1c) = *(undefined8 *)(lVar22 + 0x34);
  *(undefined8 *)(lVar39 + 0xba14) = uVar86;
  *(undefined8 *)(lVar39 + 0xba2c) = uVar85;
  *(undefined8 *)(lVar39 + 0xba24) = uVar82;
  *(undefined4 *)(lVar39 + 0xba34) = uVar8;
  lVar22 = *plVar40;
  *(undefined4 *)(lVar39 + 0xea0) = *(undefined4 *)(lVar22 + 0x246d4);
  _memcpy(lVar39 + 0xc070,lVar22 + 0x22414,0xaf78);
  lVar26 = *plVar19;
  lVar22 = *plVar40;
  *(long *)(lVar26 + 0xba38) = lVar22;
  *(int *)(lVar26 + 0x206c) = *param_1;
  *(int **)(lVar26 + 0x2078) = param_1 + 0x10b1e2;
  *(int **)(lVar26 + 0x16fe8) = param_1 + 0x1a07;
  *(undefined8 *)(lVar26 + 0x16ff0) = 0;
  *(int **)(lVar26 + 0x17000) = param_1 + 0x493f6;
  *(undefined8 *)(lVar26 + 0x17008) = 0;
  *(int **)(lVar26 + 0x16ff8) = piStack_1090;
  lVar39 = *(long *)(param_1 + 0x19f2);
  *(undefined4 *)(lVar39 + 0xba40) = 0x441c8000;
  puVar20 = (undefined4 *)(lVar22 + 0x2244c);
  lVar26 = 5;
  puVar24 = (undefined4 *)(lVar39 + 0xba98);
  puVar27 = *(undefined4 **)(param_1 + 0x19f4);
  do {
    puVar24[-0x15] = puVar20[-1];
    puVar24[-0x10] = *puVar20;
    puVar24[-10] = puVar27[4];
    puVar24[-5] = puVar27[5];
    *puVar24 = puVar27[1];
    puVar20 = puVar20 + 0x8c6;
    lVar26 = lVar26 + -1;
    puVar24 = puVar24 + 1;
    puVar27 = puVar27 + 5;
  } while (lVar26 != 0);
  pbVar21 = (byte *)(lVar39 + 0xbb74);
  lVar22 = lVar22 + 0x130;
  _memcpy(pbVar21,lVar22,0x4b0);
  puVar20 = *(undefined4 **)(param_1 + 0x19f4);
  uVar8 = NEON_ucvtf(*puVar20);
  *(undefined4 *)(lVar39 + 0xba6c) = uVar8;
  *(float *)(lVar39 + 0xbaac) = (float)(int)puVar20[0x28];
  uVar82 = NEON_scvtf(*(undefined8 *)(lVar39 + 0x206c),4);
  *(undefined8 *)(lVar39 + 0xbab0) = uVar82;
  lVar26 = *plVar40;
  *(undefined4 *)(lVar39 + 0xbab8) = *(undefined4 *)(lVar26 + 0x2d38c);
  uVar82 = NEON_scvtf(*(undefined8 *)(lVar26 + 0xc),4);
  *(undefined8 *)(lVar39 + 0xbabc) = uVar82;
  *(undefined8 *)(lVar39 + 0xbac4) = *(undefined8 *)(lVar26 + 0x246d8);
  uVar82 = *(undefined8 *)(lVar26 + 0x24644);
  *(undefined4 *)(lVar39 + 0xbad4) = *(undefined4 *)(lVar26 + 0x2464c);
  *(undefined8 *)(lVar39 + 0xbacc) = uVar82;
  uVar82 = *(undefined8 *)(*plVar40 + 0x24650);
  *(undefined4 *)(lVar39 + 0xbae0) = *(undefined4 *)(*plVar40 + 0x24658);
  *(undefined8 *)(lVar39 + 0xbad8) = uVar82;
  uVar82 = *(undefined8 *)(*plVar40 + 0x2465c);
  *(undefined4 *)(lVar39 + 0xbaec) = *(undefined4 *)(*plVar40 + 0x24664);
  *(undefined8 *)(lVar39 + 0xbae4) = uVar82;
  uVar82 = *(undefined8 *)(*plVar40 + 0x24668);
  *(undefined4 *)(lVar39 + 0xbaf8) = *(undefined4 *)(*plVar40 + 0x24670);
  *(undefined8 *)(lVar39 + 0xbaf0) = uVar82;
  lVar36 = 8;
  lVar26 = 0x24674;
  puVar18 = (undefined8 *)(lVar39 + 0xbafc);
  do {
    uVar82 = *(undefined8 *)(*plVar40 + lVar26);
    *(undefined4 *)(puVar18 + 1) = *(undefined4 *)((undefined8 *)(*plVar40 + lVar26) + 1);
    *puVar18 = uVar82;
    lVar26 = lVar26 + 0xc;
    lVar36 = lVar36 + -1;
    puVar18 = (undefined8 *)((long)puVar18 + 0xc);
  } while (lVar36 != 0);
  lVar26 = *(long *)(param_1 + 0x19f4);
  *(undefined4 *)(lVar39 + 0xbb5c) = *(undefined4 *)(lVar26 + 0x78);
  *(undefined4 *)(lVar39 + 0xbb60) = *(undefined4 *)(lVar26 + 0x74);
  *(undefined4 *)(lVar39 + 0xbb64) = *(undefined4 *)(lVar26 + 0x7c);
  *(undefined4 *)(lVar39 + 0xbb70) = *(undefined4 *)(lVar39 + 0xf88);
  *(undefined4 *)(lVar39 + 0xbb68) = uRam000000011382a480;
  if ((bRam0000000113734810 & 1) == 0) {
    pbVar21 = &bRam0000000113734810;
    ___cxa_guard_acquire();
    if ((int)pbVar21 != 0) {
      fRam00000001137347f0 = *(float *)(*(long *)(param_1 + 0x19f4) + 0xa4) * 1000.0;
      pbVar21 = &bRam0000000113734810;
      ___cxa_guard_release();
    }
  }
  fVar77 = *(float *)(*(long *)(param_1 + 0x19f4) + 0xa4) * 1000.0;
  *(float *)(lVar39 + 0xbb6c) = fVar77 - fRam00000001137347f0;
  lVar26 = plVar19[1];
  uVar51 = (undefined1)((ulong)lVar26 >> 8);
  uVar56 = (undefined1)((ulong)lVar26 >> 0x10);
  uVar61 = (undefined1)((ulong)lVar26 >> 0x18);
  uVar62 = (undefined1)((ulong)lVar26 >> 0x20);
  uVar66 = (undefined1)((ulong)lVar26 >> 0x28);
  uVar69 = (undefined1)((ulong)lVar26 >> 0x30);
  uVar72 = (undefined1)((ulong)lVar26 >> 0x38);
  lVar26 = *plVar19;
  auVar84[9] = uVar51;
  auVar84._0_9_ = *(unkbyte9 *)plVar19;
  auVar84[10] = uVar56;
  auVar84[0xb] = uVar61;
  auVar84[0xc] = uVar62;
  auVar84[0xd] = uVar66;
  auVar84[0xe] = uVar69;
  auVar84[0xf] = uVar72;
  auVar7[9] = uVar51;
  auVar7._0_9_ = *(unkbyte9 *)plVar19;
  auVar7[10] = uVar56;
  auVar7[0xb] = uVar61;
  auVar7[0xc] = uVar62;
  auVar7[0xd] = uVar66;
  auVar7[0xe] = uVar69;
  auVar7[0xf] = uVar72;
  auVar84 = NEON_ext(auVar84,auVar7,8,1);
  fRam00000001137347f0 = fVar77;
  plVar19[1] = auVar84._8_8_;
  *plVar19 = auVar84._0_8_;
  if ((*(byte *)((long)param_3 + 0x99) >> 1 & 1) != 0) {
    lVar36 = 0;
    do {
      uVar82 = *(undefined8 *)(lVar26 + lVar36);
      fVar77 = (float)uVar82;
      fVar100 = (float)((ulong)uVar82 >> 0x20);
      fVar100 = fVar100 + fVar100;
      *(ulong *)(lVar26 + lVar36) =
           CONCAT17((char)((uint)fVar100 >> 0x18),
                    CONCAT16((char)((uint)fVar100 >> 0x10),
                             CONCAT15((char)((uint)fVar100 >> 8),
                                      CONCAT14(SUB41(fVar100,0),fVar77 + fVar77))));
      lVar36 = lVar36 + 0xc;
    } while (lVar36 != 0x3c);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return pbVar21;
  }
  ___stack_chk_fail();
  uStack_1150 = 0x206c;
  pcStack_1128 = FUN_10967b280;
  piStack_1170 = piVar16;
  plStack_1168 = plVar40;
  piStack_1160 = piVar104;
  piStack_1158 = piVar37;
  lStack_1148 = lVar39;
  piStack_1140 = param_1;
  puStack_1138 = (undefined4 *)(lVar39 + 0xba40);
  puStack_1130 = &stack0xfffffffffffffff0;
  func_0x000107c31940(&ppppuStack_1188,&UNK_10f57b978);
  func_0x000107c31940(&puStack_11a0,lVar22);
  uVar25 = (uint)(char)bStack_1171;
  pppppuVar17 = (undefined8 *****)ppppuStack_1188;
  uVar29 = uStack_1180;
  if (-1 < (int)uVar25) {
    pppppuVar17 = &ppppuStack_1188;
    uVar29 = (ulong)bStack_1171;
  }
  ppuVar5 = (undefined1 **)puStack_11a0;
  uVar81 = uStack_1198;
  if (-1 < cStack_1189) {
    ppuVar5 = &puStack_11a0;
    uVar81 = (long)cStack_1189;
  }
  uVar6 = uVar81;
  if (uVar29 <= uVar81) {
    uVar6 = uVar29;
  }
  _memcmp(pppppuVar17,ppuVar5,uVar6);
  if ((long)cStack_1189 < 0) {
    __ZdlPv(puStack_11a0);
    if (-1 < (char)bStack_1171) goto LAB_10967b30c;
  }
  else if ((uVar25 >> 7 & 1) == 0) goto LAB_10967b30c;
  __ZdlPv(ppppuStack_1188);
LAB_10967b30c:
  pbVar21 = *(byte **)(pbVar21 + 0xf5980);
  if ((int)pppppuVar17 != 0 || uVar81 != uVar29) {
    pbVar21 = (byte *)0x0;
  }
  return pbVar21;
}



/* Entry: 10967b280; end: 10967b373;  */

undefined8 FUN_10967b280(long param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined1 *puStack_80;
  ulong uStack_78;
  char cStack_69;
  undefined8 ***pppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  
  func_0x000107c31940(&pppuStack_68,&UNK_10f57b978);
  func_0x000107c31940(&puStack_80,param_2);
  uVar3 = (uint)(char)bStack_51;
  ppppuVar6 = (undefined8 ****)pppuStack_68;
  uVar4 = uStack_60;
  if (-1 < (int)uVar3) {
    ppppuVar6 = &pppuStack_68;
    uVar4 = (ulong)bStack_51;
  }
  ppuVar1 = (undefined1 **)puStack_80;
  uVar5 = uStack_78;
  if (-1 < cStack_69) {
    ppuVar1 = &puStack_80;
    uVar5 = (long)cStack_69;
  }
  uVar2 = uVar5;
  if (uVar4 <= uVar5) {
    uVar2 = uVar4;
  }
  _memcmp(ppppuVar6,ppuVar1,uVar2);
  if ((long)cStack_69 < 0) {
    __ZdlPv(puStack_80);
    if (-1 < (char)bStack_51) goto LAB_10967b30c;
  }
  else if ((uVar3 >> 7 & 1) == 0) goto LAB_10967b30c;
  __ZdlPv(pppuStack_68);
LAB_10967b30c:
  uVar7 = *(undefined8 *)(param_1 + 0xf5980);
  if ((int)ppppuVar6 != 0 || uVar5 != uVar4) {
    uVar7 = 0;
  }
  return uVar7;
}



/* Entry: 10967b374; end: 10967bb7f;  */

void FUN_10967b374(long param_1,int *param_2,undefined4 *param_3,int param_4,int *param_5,
                  int *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined1 auVar10 [16];
  ulong uVar11;
  long *plVar12;
  bool bVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  float *pfVar18;
  ulong uVar19;
  undefined8 *puVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined1 auVar44 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 auStack_168 [2];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong uStack_110;
  long *plStack_108;
  long alStack_100 [2];
  uint uStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  long alStack_90 [4];
  
  iVar3 = param_3[0x34];
  iVar4 = param_3[0x35];
  iVar40 = *(int *)(param_1 + 0x6824);
  iVar27 = param_2[7];
  uVar5 = param_2[8];
  iVar41 = 0;
  if (iVar3 != 0) {
    iVar41 = iVar40 / iVar3;
  }
  if (param_5 == (int *)0x0) {
    iVar42 = 0;
    uVar24 = 0;
    piVar21 = (int *)(param_1 + 0x6828);
  }
  else {
    iVar42 = 0;
    if (iVar41 != 0) {
      iVar42 = *param_5 / iVar41;
    }
    iVar40 = param_5[2];
    piVar21 = param_5 + 3;
    uVar24 = 0;
    if (iVar41 != 0) {
      uVar24 = param_5[1] / iVar41;
    }
  }
  uVar6 = *param_3;
  iVar43 = 0;
  if (iVar41 != 0) {
    iVar43 = iVar40 / iVar41;
  }
  if (iVar27 < 4) {
    iVar27 = 3;
  }
  if ((int)uVar5 < 4) {
    uVar5 = 3;
  }
  iVar40 = iVar27;
  if (iVar27 <= iVar42) {
    iVar40 = iVar42;
  }
  uVar1 = uVar5;
  if ((int)uVar5 <= (int)uVar24) {
    uVar1 = uVar24;
  }
  uVar28 = (ulong)uVar1;
  iVar7 = iVar43 + iVar42;
  if (iVar3 - iVar27 <= iVar43 + iVar42) {
    iVar7 = iVar3 - iVar27;
  }
  iVar27 = 0;
  if (iVar41 != 0) {
    iVar27 = *piVar21 / iVar41;
  }
  uVar2 = iVar27 + uVar24;
  if ((int)(iVar4 - uVar5) <= (int)(iVar27 + uVar24)) {
    uVar2 = iVar4 - uVar5;
  }
  lVar14 = 1;
  _calloc(1,(long)(iVar4 * iVar3 * 0xc));
  if (lVar14 == 0) {
    return;
  }
  uStack_f0 = iVar40 - 3;
  iStack_ec = uVar1 - 3;
  if (iStack_ec < (int)(uVar2 + 3)) {
    lVar25 = *(long *)(param_3 + 0x3e);
    lVar26 = *(long *)(param_3 + 0x46);
    iVar27 = (iVar40 + iStack_ec * iVar3) * 3 + -9;
    uVar19 = uVar28 - 3;
    do {
      if ((int)uStack_f0 < iVar7 + 3) {
        pfVar15 = (float *)(lVar14 + 4 + (long)iVar27 * 4);
        lVar17 = (ulong)uStack_f0 + uVar19 * (long)iVar3;
        pfVar16 = (float *)(lVar26 + lVar17 * 4);
        pfVar18 = (float *)(lVar25 + lVar17 * 4);
        iVar41 = (iVar7 - iVar40) + 6;
        do {
          fVar29 = *pfVar18;
          fVar31 = *pfVar16;
          pfVar15[-1] = fVar29 * fVar29;
          *pfVar15 = fVar31 * fVar31;
          pfVar15[1] = fVar29 * fVar31;
          pfVar15 = pfVar15 + 3;
          iVar41 = iVar41 + -1;
          pfVar16 = pfVar16 + 1;
          pfVar18 = pfVar18 + 1;
        } while (iVar41 != 0);
      }
      uVar19 = uVar19 + 1;
      iVar27 = iVar27 + iVar3 * 3;
    } while (uVar19 != uVar2 + 3);
  }
  uVar19 = (ulong)&uStack_e0 | 8;
  uStack_d8 = CONCAT44(iVar3,iVar4);
  uStack_b0 = 0;
  lStack_a8 = 0;
  alStack_90[0] = (long)iVar3 * 0xc;
  uStack_e0 = 0x242ff4015;
  alStack_90[1] = 0xc;
  lStack_c0 = lVar14 + alStack_90[0] * iVar4;
  iStack_e8 = (iVar7 - iVar40) + 3;
  iStack_e4 = (uVar2 - uVar1) + 3;
  lStack_d0 = lVar14;
  lStack_c8 = lVar14;
  lStack_b8 = lStack_c0;
  uStack_a0 = uVar19;
  plStack_98 = alStack_90;
  FUN_109a852c8(&uStack_150,&uStack_e0,&uStack_f0);
  if (lStack_a8 != 0) {
    piVar21 = (int *)(lStack_a8 + 0x14);
    do {
      iVar27 = *piVar21;
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar13) {
        *piVar21 = iVar27 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar27 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  if (0 < uStack_e0._4_4_) {
    lVar25 = 0;
    do {
      *(undefined4 *)(uStack_a0 + lVar25 * 4) = 0;
      lVar25 = lVar25 + 1;
    } while (lVar25 < uStack_e0._4_4_);
  }
  uStack_e0 = (ulong)uStack_14c << 0x20;
  uStack_d8 = puStack_148;
  lStack_c8 = uStack_138;
  lStack_d0 = uStack_140;
  lStack_b8 = uStack_128;
  lStack_c0 = uStack_130;
  lStack_a8 = lStack_118;
  uStack_b0 = uStack_120;
  uVar11 = uStack_a0;
  plVar12 = plStack_98;
  if ((plStack_98 != alStack_90) &&
     (uVar11 = uVar19, plVar12 = alStack_90, plStack_98 != (long *)0x0)) {
    _free(plStack_98[-1]);
  }
  plStack_98 = plVar12;
  uStack_a0 = uVar11;
  if ((int)uStack_14c < 3) {
    puVar20 = (undefined8 *)((ulong)&uStack_150 | 4);
    *plStack_98 = *plStack_108;
    plStack_98[1] = plStack_108[1];
    uStack_150 = 0x42ff0000;
    puVar20[1] = 0;
    *puVar20 = 0;
    puVar20[3] = 0;
    puVar20[2] = 0;
    puVar20[5] = 0;
    puVar20[4] = 0;
    *(undefined8 *)((long)puVar20 + 0x34) = 0;
    *(undefined8 *)((long)puVar20 + 0x2c) = 0;
    if (plStack_108 != alStack_100) {
      _free(plStack_108[-1]);
    }
  }
  else {
    uStack_a0 = uStack_110;
    plStack_98 = plStack_108;
  }
  uStack_150 = 0x1010000;
  uStack_140 = 0;
  auStack_168[0] = 0x2010000;
  uStack_158 = 0;
  uStack_178 = 0xffffffffffffffff;
  uStack_170 = 0x300000003;
  puStack_160 = &uStack_e0;
  puStack_148 = &uStack_e0;
  FUN_109b437c0(&uStack_150,auStack_168,0x15,&uStack_170,&uStack_178,1,0x10);
  uStack_140 = 0;
  uStack_150 = 0x1010000;
  auStack_168[0] = 0x2010000;
  uStack_158 = 0;
  uStack_178 = 0xffffffffffffffff;
  uStack_170 = 0x300000003;
  puStack_160 = &uStack_e0;
  puStack_148 = &uStack_e0;
  FUN_109b437c0(&uStack_150,auStack_168,0x15,&uStack_170,&uStack_178,0,0x10);
  iVar27 = 0;
  if ((int)uVar1 < (int)uVar2) {
    iVar41 = (iVar40 + uVar1 * iVar3) * 3;
    piVar21 = param_6;
    do {
      if (iVar40 < iVar7) {
        pfVar15 = (float *)(lVar14 + 8 + (long)iVar41 * 4);
        piVar23 = piVar21;
        iVar42 = iVar40;
        do {
          fVar34 = pfVar15[-1];
          fVar31 = *pfVar15;
          fVar29 = pfVar15[-2];
          fVar39 = fVar29 - fVar34;
          *piVar23 = iVar42;
          piVar23[1] = (int)uVar28;
          piVar21 = piVar23 + 3;
          piVar23[2] = (int)(((fVar29 + fVar34) - SQRT(fVar31 * fVar31 * 4.0 + fVar39 * fVar39)) *
                            0.5);
          iVar42 = iVar42 + 1;
          pfVar15 = pfVar15 + 3;
          piVar23 = piVar21;
        } while (iVar7 != iVar42);
        iVar27 = iVar27 + (iVar7 - iVar40);
      }
      uVar5 = (int)uVar28 + 1;
      uVar28 = (ulong)uVar5;
      iVar41 = iVar41 + iVar3 * 3;
    } while (uVar5 != uVar2);
  }
  _free();
  lVar14 = 0;
  if (iVar27 != 0) {
    lVar14 = LZCOUNT((long)iVar27) * -2 + 0x7e;
  }
  FUN_10967bb80(param_6,param_6 + (long)iVar27 * 3,lVar14,1);
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  lVar14 = 0;
  if (param_4 == 0) {
    do {
      puVar9 = (undefined4 *)((long)param_3 + lVar14 + 0x22284);
      puVar9[2] = uVar6;
      puVar9[3] = uVar6;
      *puVar9 = uVar6;
      puVar9[1] = uVar6;
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != 400);
  }
  else {
    auVar32 = NEON_fmov(0xc0600000,4);
    auVar33 = NEON_fmov(0x3e800000,4);
    do {
      puVar20 = (undefined8 *)((long)param_3 + lVar14 + 0x130);
      uVar38 = puVar20[3];
      uVar36 = puVar20[5];
      uVar30 = puVar20[4];
      uVar37 = puVar20[1];
      uVar35 = *puVar20;
      auVar44._12_4_ = (int)((ulong)uVar38 >> 0x20);
      auVar44._0_12_ = *(undefined1 (*) [12])(puVar20 + 2);
      auVar44 = NEON_rev64(auVar44,4);
      iVar40 = -(uint)((int)uVar37 == 1);
      iVar41 = -(uint)((int)((ulong)*(undefined8 *)*(undefined1 (*) [12])(puVar20 + 2) >> 0x20) == 1
                      );
      iVar42 = -(uint)((int)uVar30 == 1);
      iVar43 = -(uint)((int)((ulong)uVar36 >> 0x20) == 1);
      *(float *)(lVar14 + 0x113734840) = ((float)uVar35 + auVar32._0_4_) * auVar33._0_4_;
      *(float *)(lVar14 + 0x113734844) =
           ((float)((ulong)uVar35 >> 0x20) + auVar32._0_4_) * auVar33._0_4_;
      *(uint *)(lVar14 + 0x113734848) =
           CONCAT13(~(byte)((uint)iVar40 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar40 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar40 >> 8),~(byte)iVar40))) | 1;
      *(float *)(lVar14 + 0x11373484c) =
           ((float)((ulong)uVar37 >> 0x20) + auVar32._4_4_) * auVar33._4_4_;
      *(float *)(lVar14 + 0x113734850) = (auVar44._4_4_ + auVar32._4_4_) * auVar33._4_4_;
      *(uint *)(lVar14 + 0x113734854) =
           CONCAT13(~(byte)((uint)iVar41 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar41 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar41 >> 8),~(byte)iVar41))) | 1;
      *(float *)(lVar14 + 0x113734858) = ((float)uVar38 + auVar32._8_4_) * auVar33._8_4_;
      *(float *)(lVar14 + 0x11373485c) = (auVar44._8_4_ + auVar32._8_4_) * auVar33._8_4_;
      *(uint *)(lVar14 + 0x113734860) =
           CONCAT13(~(byte)((uint)iVar42 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar42 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar42 >> 8),~(byte)iVar42))) | 1;
      *(float *)(lVar14 + 0x113734864) =
           ((float)((ulong)uVar30 >> 0x20) + auVar32._12_4_) * auVar33._12_4_;
      *(float *)(lVar14 + 0x113734868) = ((float)uVar36 + auVar32._12_4_) * auVar33._12_4_;
      *(uint *)(lVar14 + 0x11373486c) =
           CONCAT13(~(byte)((uint)iVar43 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar43 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar43 >> 8),~(byte)iVar43))) | 1;
      lVar14 = lVar14 + 0x30;
    } while (lVar14 != 0x4b0);
    lVar14 = 0;
    piVar21 = param_3 + 0x4e;
    do {
      if (*piVar21 == 0) {
        *(undefined4 *)((long)param_3 + lVar14 + 0x22284) = uVar6;
      }
      lVar14 = lVar14 + 4;
      piVar21 = piVar21 + 3;
    } while (lVar14 != 400);
  }
  iVar41 = *param_2;
  iVar40 = param_2[1];
  if (iVar40 < 2) {
    iVar40 = 1;
  }
  piVar21 = param_6 + 0x2a300;
  _bzero(piVar21,(long)(iVar4 * iVar3));
  if (param_4 != 0) {
    pfVar15 = (float *)0x113734844;
    lVar14 = 100;
    do {
      if (-1 < (int)pfVar15[1]) {
        FUN_10967d174((int)pfVar15[-1],(int)*pfVar15,piVar21,iVar41 + -1,iVar3,iVar4);
      }
      pfVar15 = pfVar15 + 3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (iVar27 < 1) {
    iVar42 = 0;
  }
  else {
    iVar42 = 0;
    piVar23 = param_6 + (long)iVar27 * 3;
    do {
      iVar27 = *param_6;
      iVar43 = param_6[1];
      iVar7 = param_6[2];
      if ((param_4 == 0) || (99 < iVar42)) {
        if (99 < iVar42) goto LAB_10967ba24;
      }
      else {
        uVar28 = (long)iVar42 - 100;
        piVar22 = (int *)((long)iVar42 * 0xc + 0x113734848);
        while (-1 < *piVar22) {
          iVar42 = iVar42 + 1;
          bVar13 = 0xfffffffffffffffe < uVar28;
          uVar28 = uVar28 + 1;
          piVar22 = piVar22 + 3;
          if (bVar13) goto LAB_10967ba24;
        }
      }
      if (*(char *)((long)piVar21 + (long)(iVar27 + iVar43 * iVar3)) == '\0' && iVar40 <= iVar7) {
        lVar14 = (long)iVar42 * 0xc;
        *(float *)(lVar14 + 0x113734840) = (float)iVar27;
        *(float *)(lVar14 + 0x113734844) = (float)iVar43;
        *(int *)(lVar14 + 0x113734848) = iVar7;
        iVar42 = iVar42 + 1;
        FUN_10967d174(iVar27,iVar43,piVar21,iVar41 + -1,iVar3,iVar4);
      }
      param_6 = param_6 + 3;
    } while (param_6 < piVar23);
    if (99 < iVar42) goto LAB_10967ba24;
  }
  piVar21 = (int *)((long)iVar42 * 0xc + 0x113734848);
  uVar30 = NEON_fmov(0xbf800000,4);
  do {
    iVar42 = iVar42 + 1;
    if ((param_4 == 0) || (*piVar21 < 0)) {
      *(undefined8 *)(piVar21 + -2) = uVar30;
      *piVar21 = -1;
    }
    piVar21 = piVar21 + 3;
  } while (iVar42 != 100);
LAB_10967ba24:
  lVar14 = 0;
  auVar32 = NEON_fmov(0x40800000,4);
  auVar33 = NEON_fmov(0x40600000,4);
  do {
    uVar38 = *(undefined8 *)(lVar14 + 0x113734848);
    uVar36 = *(undefined8 *)(lVar14 + 0x113734840);
    uVar30 = *(undefined8 *)(lVar14 + 0x113734858);
    lVar25 = *(long *)(lVar14 + 0x113734850);
    lVar26 = *(long *)(lVar14 + 0x113734868);
    uVar35 = *(undefined8 *)(lVar14 + 0x113734860);
    auVar10[9] = (char)((ulong)uVar30 >> 8);
    auVar10._0_9_ = *(unkbyte9 *)(lVar14 + 0x113734850);
    auVar10[10] = (char)((ulong)uVar30 >> 0x10);
    auVar10[0xb] = (char)((ulong)uVar30 >> 0x18);
    auVar10[0xc] = (char)((ulong)uVar30 >> 0x20);
    auVar10[0xd] = (char)((ulong)uVar30 >> 0x28);
    auVar10[0xe] = (char)((ulong)uVar30 >> 0x30);
    auVar10[0xf] = (char)((ulong)uVar30 >> 0x38);
    auVar44 = NEON_rev64(auVar10,4);
    pfVar15 = (float *)((long)param_3 + lVar14 + 0x130);
    *pfVar15 = auVar33._0_4_ + auVar32._0_4_ * (float)uVar36;
    pfVar15[1] = auVar33._0_4_ + auVar32._0_4_ * (float)((ulong)uVar36 >> 0x20);
    pfVar15[2] = (float)(uint)(-(-1 < (char)((ulong)uVar38 >> 0x18)) & 1);
    pfVar15[3] = auVar33._4_4_ + auVar32._4_4_ * (float)((ulong)uVar38 >> 0x20);
    pfVar15[4] = auVar33._4_4_ + auVar32._4_4_ * auVar44._4_4_;
    pfVar15[5] = (float)(uint)(-(-1 < lVar25) & 1);
    pfVar15[6] = auVar33._8_4_ + auVar32._8_4_ * (float)uVar30;
    pfVar15[7] = auVar33._8_4_ + auVar32._8_4_ * auVar44._8_4_;
    pfVar15[8] = (float)(uint)(-(-1 < (char)((ulong)uVar35 >> 0x18)) & 1);
    pfVar15[9] = auVar33._12_4_ + auVar32._12_4_ * (float)((ulong)uVar35 >> 0x20);
    pfVar15[10] = auVar33._12_4_ + auVar32._12_4_ * (float)lVar26;
    pfVar15[0xb] = (float)(uint)(-(-1 < lVar26) & 1);
    lVar14 = lVar14 + 0x30;
  } while (lVar14 != 0x4b0);
  if (lStack_a8 != 0) {
    piVar21 = (int *)(lStack_a8 + 0x14);
    do {
      iVar27 = *piVar21;
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar13) {
        *piVar21 = iVar27 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar27 + -1 == 0) {
      func_0x000109a848d4(&uStack_e0);
    }
  }
  lStack_a8 = 0;
  lStack_c8 = 0;
  lStack_d0 = 0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  if (0 < uStack_e0._4_4_) {
    lVar14 = 0;
    do {
      *(undefined4 *)(uStack_a0 + lVar14 * 4) = 0;
      lVar14 = lVar14 + 1;
    } while (lVar14 < uStack_e0._4_4_);
  }
  if (plStack_98 != alStack_90 && plStack_98 != (long *)0x0) {
    _free(plStack_98[-1]);
  }
  return;
}



/* Entry: 10967bb80; end: 10967cad3;  */

void FUN_10967bb80(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
LAB_10967bbb0:
  puVar25 = (undefined8 *)((long)param_2 + -0xc);
  puVar27 = param_2 + -3;
  puVar26 = (undefined8 *)((long)param_2 + -0x24);
  puVar12 = param_1;
LAB_10967bbc0:
  do {
    param_1 = puVar12;
    uVar13 = (long)param_2 - (long)param_1;
    uVar11 = ((long)uVar13 >> 2) * -0x5555555555555555;
    if (uVar11 - 2 == 0 || (long)uVar11 < 2) {
      if (uVar11 < 2) {
        return;
      }
      if (uVar11 == 2) {
        if (*(int *)((long)param_2 + -4) <= *(int *)(param_1 + 1)) {
          return;
        }
        uVar14 = *param_1;
        uVar18 = *(undefined4 *)(param_1 + 1);
        uVar16 = *(undefined8 *)((long)param_2 + -0xc);
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + -4);
        *param_1 = uVar16;
        *(undefined4 *)((long)param_2 + -4) = uVar18;
        *(undefined8 *)((long)param_2 + -0xc) = uVar14;
        return;
      }
    }
    else {
      if (uVar11 == 3) {
        iVar8 = *(int *)((long)param_1 + 0x14);
        if (*(int *)(param_1 + 1) < iVar8) {
          if (iVar8 < *(int *)((long)param_2 + -4)) {
            uVar14 = *param_1;
            uVar18 = *(undefined4 *)(param_1 + 1);
            uVar16 = *puVar25;
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + -4);
            *param_1 = uVar16;
          }
          else {
            uVar14 = *param_1;
            uVar18 = *(undefined4 *)(param_1 + 1);
            *param_1 = *(undefined8 *)((long)param_1 + 0xc);
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
            *(undefined8 *)((long)param_1 + 0xc) = uVar14;
            *(undefined4 *)((long)param_1 + 0x14) = uVar18;
            if (*(int *)((long)param_2 + -4) <= *(int *)((long)param_1 + 0x14)) {
              return;
            }
            uVar14 = *(undefined8 *)((long)param_1 + 0xc);
            uVar18 = *(undefined4 *)((long)param_1 + 0x14);
            uVar7 = *(undefined4 *)((long)param_2 + -4);
            *(undefined8 *)((long)param_1 + 0xc) = *puVar25;
            *(undefined4 *)((long)param_1 + 0x14) = uVar7;
          }
          *(undefined4 *)((long)param_2 + -4) = uVar18;
          *puVar25 = uVar14;
          return;
        }
        if (*(int *)((long)param_2 + -4) <= iVar8) {
          return;
        }
        uVar14 = *(undefined8 *)((long)param_1 + 0xc);
        uVar7 = *(undefined4 *)((long)param_1 + 0x14);
        uVar18 = *(undefined4 *)((long)param_2 + -4);
        *(undefined8 *)((long)param_1 + 0xc) = *puVar25;
        *(undefined4 *)((long)param_1 + 0x14) = uVar18;
        *(undefined4 *)((long)param_2 + -4) = uVar7;
        *puVar25 = uVar14;
        goto LAB_10967ca74;
      }
      if (uVar11 == 4) {
        iVar8 = *(int *)((long)param_1 + 0x14);
        iVar6 = *(int *)(param_1 + 4);
        if (*(int *)(param_1 + 1) < iVar8) {
          if (iVar8 < iVar6) {
            uVar14 = *param_1;
            uVar18 = *(undefined4 *)(param_1 + 1);
            *param_1 = param_1[3];
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 4);
            param_1[3] = uVar14;
          }
          else {
            uVar14 = *param_1;
            uVar18 = *(undefined4 *)(param_1 + 1);
            *param_1 = *(undefined8 *)((long)param_1 + 0xc);
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
            *(undefined8 *)((long)param_1 + 0xc) = uVar14;
            *(undefined4 *)((long)param_1 + 0x14) = uVar18;
            if (iVar6 <= *(int *)((long)param_1 + 0x14)) goto LAB_10967ca0c;
            uVar18 = *(undefined4 *)((long)param_1 + 0x14);
            uVar14 = *(undefined8 *)((long)param_1 + 0xc);
            *(undefined8 *)((long)param_1 + 0xc) = param_1[3];
            *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
            param_1[3] = uVar14;
          }
          *(undefined4 *)(param_1 + 4) = uVar18;
        }
        else if (iVar8 < iVar6) {
          uVar18 = *(undefined4 *)((long)param_1 + 0x14);
          uVar14 = *(undefined8 *)((long)param_1 + 0xc);
          *(undefined8 *)((long)param_1 + 0xc) = param_1[3];
          *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
          param_1[3] = uVar14;
          *(undefined4 *)(param_1 + 4) = uVar18;
          if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0x14)) {
            uVar14 = *param_1;
            uVar18 = *(undefined4 *)(param_1 + 1);
            *param_1 = *(undefined8 *)((long)param_1 + 0xc);
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
            *(undefined8 *)((long)param_1 + 0xc) = uVar14;
            *(undefined4 *)((long)param_1 + 0x14) = uVar18;
          }
        }
LAB_10967ca0c:
        if (*(int *)((long)param_2 + -4) <= *(int *)(param_1 + 4)) {
          return;
        }
        uVar14 = param_1[3];
        uVar7 = *(undefined4 *)(param_1 + 4);
        uVar18 = *(undefined4 *)((long)param_2 + -4);
        param_1[3] = *puVar25;
        *(undefined4 *)(param_1 + 4) = uVar18;
        *(undefined4 *)((long)param_2 + -4) = uVar7;
        *puVar25 = uVar14;
        if (*(int *)(param_1 + 4) <= *(int *)((long)param_1 + 0x14)) {
          return;
        }
        uVar18 = *(undefined4 *)((long)param_1 + 0x14);
        uVar14 = *(undefined8 *)((long)param_1 + 0xc);
        *(undefined8 *)((long)param_1 + 0xc) = param_1[3];
        *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
        param_1[3] = uVar14;
        *(undefined4 *)(param_1 + 4) = uVar18;
LAB_10967ca74:
        if (*(int *)((long)param_1 + 0x14) <= *(int *)(param_1 + 1)) {
          return;
        }
        uVar14 = *param_1;
        uVar18 = *(undefined4 *)(param_1 + 1);
        *param_1 = *(undefined8 *)((long)param_1 + 0xc);
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
        *(undefined8 *)((long)param_1 + 0xc) = uVar14;
        *(undefined4 *)((long)param_1 + 0x14) = uVar18;
        return;
      }
      if (uVar11 == 5) {
        puVar12 = (undefined8 *)((long)param_1 + 0xc);
        puVar26 = param_1 + 3;
        puVar27 = (undefined8 *)((long)param_1 + 0x24);
        iVar8 = *(int *)((long)param_1 + 0x14);
        if (*(int *)(param_1 + 1) < iVar8) {
          if (iVar8 < *(int *)(param_1 + 4)) {
            uVar18 = *(undefined4 *)(param_1 + 1);
            uVar14 = *param_1;
            *param_1 = *puVar26;
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 4);
          }
          else {
            uVar18 = *(undefined4 *)(param_1 + 1);
            uVar14 = *param_1;
            *param_1 = *puVar12;
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
            *puVar12 = uVar14;
            *(undefined4 *)((long)param_1 + 0x14) = uVar18;
            if (*(int *)(param_1 + 4) <= *(int *)((long)param_1 + 0x14)) goto LAB_10967cbbc;
            uVar18 = *(undefined4 *)((long)param_1 + 0x14);
            uVar14 = *puVar12;
            *puVar12 = *puVar26;
            *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
          }
          *puVar26 = uVar14;
          *(undefined4 *)(param_1 + 4) = uVar18;
        }
        else if (iVar8 < *(int *)(param_1 + 4)) {
          uVar18 = *(undefined4 *)((long)param_1 + 0x14);
          uVar14 = *puVar12;
          *puVar12 = *puVar26;
          *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
          *puVar26 = uVar14;
          *(undefined4 *)(param_1 + 4) = uVar18;
          if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0x14)) {
            uVar18 = *(undefined4 *)(param_1 + 1);
            uVar14 = *param_1;
            *param_1 = *puVar12;
            *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
            *puVar12 = uVar14;
            *(undefined4 *)((long)param_1 + 0x14) = uVar18;
          }
        }
LAB_10967cbbc:
        if (*(int *)(param_1 + 4) < *(int *)((long)param_1 + 0x2c)) {
          uVar18 = *(undefined4 *)(param_1 + 4);
          uVar14 = *puVar26;
          *puVar26 = *puVar27;
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)param_1 + 0x2c);
          *puVar27 = uVar14;
          *(undefined4 *)((long)param_1 + 0x2c) = uVar18;
          if (*(int *)((long)param_1 + 0x14) < *(int *)(param_1 + 4)) {
            uVar18 = *(undefined4 *)((long)param_1 + 0x14);
            uVar14 = *puVar12;
            *puVar12 = *puVar26;
            *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
            *puVar26 = uVar14;
            *(undefined4 *)(param_1 + 4) = uVar18;
            if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0x14)) {
              uVar18 = *(undefined4 *)(param_1 + 1);
              uVar14 = *param_1;
              *param_1 = *puVar12;
              *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
              *puVar12 = uVar14;
              *(undefined4 *)((long)param_1 + 0x14) = uVar18;
            }
          }
        }
        if (*(int *)((long)param_1 + 0x2c) < *(int *)((long)param_2 + -4)) {
          uVar18 = *(undefined4 *)((long)param_1 + 0x2c);
          uVar14 = *puVar27;
          uVar7 = *(undefined4 *)((long)param_2 + -4);
          *puVar27 = *puVar25;
          *(undefined4 *)((long)param_1 + 0x2c) = uVar7;
          *puVar25 = uVar14;
          *(undefined4 *)((long)param_2 + -4) = uVar18;
          if (*(int *)(param_1 + 4) < *(int *)((long)param_1 + 0x2c)) {
            uVar18 = *(undefined4 *)(param_1 + 4);
            uVar14 = *puVar26;
            *puVar26 = *puVar27;
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)param_1 + 0x2c);
            *puVar27 = uVar14;
            *(undefined4 *)((long)param_1 + 0x2c) = uVar18;
            if (*(int *)((long)param_1 + 0x14) < *(int *)(param_1 + 4)) {
              uVar18 = *(undefined4 *)((long)param_1 + 0x14);
              uVar14 = *puVar12;
              *puVar12 = *puVar26;
              *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
              *puVar26 = uVar14;
              *(undefined4 *)(param_1 + 4) = uVar18;
              if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0x14)) {
                uVar18 = *(undefined4 *)(param_1 + 1);
                uVar14 = *param_1;
                *param_1 = *puVar12;
                *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
                *puVar12 = uVar14;
                *(undefined4 *)((long)param_1 + 0x14) = uVar18;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar13 < 0x120) {
      puVar12 = (undefined8 *)((long)param_1 + 0xc);
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar12 == param_2) {
          return;
        }
        do {
          puVar25 = puVar12;
          iVar8 = *(int *)((long)param_1 + 0x14);
          if (*(int *)(param_1 + 1) < iVar8) {
            uVar14 = *puVar25;
            puVar12 = puVar25;
            do {
              puVar26 = puVar12;
              puVar12 = (undefined8 *)((long)puVar26 - 0xc);
              *puVar26 = *puVar12;
              *(undefined4 *)(puVar26 + 1) = *(undefined4 *)((long)puVar26 - 4);
            } while (*(int *)(puVar26 + -2) < iVar8);
            *puVar12 = uVar14;
            *(int *)((long)puVar26 - 4) = iVar8;
          }
          puVar12 = (undefined8 *)((long)puVar25 + 0xcU);
          param_1 = puVar25;
        } while ((undefined8 *)((long)puVar25 + 0xcU) != param_2);
        return;
      }
      if (param_1 == param_2 || puVar12 == param_2) {
        return;
      }
      lVar19 = 0;
      puVar25 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar17 = uVar11 - 2 >> 1;
      uVar24 = uVar17;
      goto LAB_10967c62c;
    }
    puVar12 = (undefined8 *)((long)param_1 + (uVar11 >> 1) * 0xc);
    iVar8 = *(int *)((long)param_2 + -4);
    if (uVar13 < 0x601) {
      iVar6 = *(int *)(param_1 + 1);
      if (*(int *)(puVar12 + 1) < iVar6) {
        if (iVar6 < iVar8) {
          uStack_70 = *puVar12;
          uStack_68 = *(undefined4 *)(puVar12 + 1);
          uVar14 = *puVar25;
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)((long)param_2 + -4);
          *puVar12 = uVar14;
        }
        else {
          uVar14 = *puVar12;
          iVar8 = *(int *)(puVar12 + 1);
          uVar16 = *param_1;
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(param_1 + 1);
          *puVar12 = uVar16;
          *(int *)(param_1 + 1) = iVar8;
          *param_1 = uVar14;
          if (*(int *)((long)param_2 + -4) <= iVar8) goto LAB_10967c218;
          uStack_70 = *param_1;
          uStack_68 = *(undefined4 *)(param_1 + 1);
          uVar14 = *puVar25;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + -4);
          *param_1 = uVar14;
        }
        *(undefined4 *)((long)param_2 + -4) = uStack_68;
        *puVar25 = uStack_70;
      }
      else if (iVar6 < iVar8) {
        uVar14 = *param_1;
        uVar18 = *(undefined4 *)(param_1 + 1);
        uVar16 = *puVar25;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + -4);
        *param_1 = uVar16;
        *(undefined4 *)((long)param_2 + -4) = uVar18;
        *puVar25 = uVar14;
        if (*(int *)(puVar12 + 1) < *(int *)(param_1 + 1)) {
          uVar14 = *puVar12;
          uVar18 = *(undefined4 *)(puVar12 + 1);
          uVar16 = *param_1;
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(param_1 + 1);
          *puVar12 = uVar16;
          *(undefined4 *)(param_1 + 1) = uVar18;
          *param_1 = uVar14;
        }
      }
    }
    else {
      iVar6 = *(int *)(puVar12 + 1);
      if (*(int *)(param_1 + 1) < iVar6) {
        if (iVar6 < iVar8) {
          uStack_70 = *param_1;
          uStack_68 = *(undefined4 *)(param_1 + 1);
          uVar14 = *puVar25;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_2 + -4);
          *param_1 = uVar14;
        }
        else {
          uVar14 = *param_1;
          iVar8 = *(int *)(param_1 + 1);
          uVar16 = *puVar12;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar12 + 1);
          *param_1 = uVar16;
          *(int *)(puVar12 + 1) = iVar8;
          *puVar12 = uVar14;
          if (*(int *)((long)param_2 + -4) <= iVar8) goto LAB_10967be0c;
          uStack_70 = *puVar12;
          uStack_68 = *(undefined4 *)(puVar12 + 1);
          uVar14 = *puVar25;
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)((long)param_2 + -4);
          *puVar12 = uVar14;
        }
        *(undefined4 *)((long)param_2 + -4) = uStack_68;
        *puVar25 = uStack_70;
      }
      else if (iVar6 < iVar8) {
        uVar14 = *puVar12;
        uVar18 = *(undefined4 *)(puVar12 + 1);
        uVar16 = *puVar25;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)((long)param_2 + -4);
        *puVar12 = uVar16;
        *(undefined4 *)((long)param_2 + -4) = uVar18;
        *puVar25 = uVar14;
        if (*(int *)(param_1 + 1) < *(int *)(puVar12 + 1)) {
          uVar14 = *param_1;
          uVar18 = *(undefined4 *)(param_1 + 1);
          uVar16 = *puVar12;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar12 + 1);
          *param_1 = uVar16;
          *(undefined4 *)(puVar12 + 1) = uVar18;
          *puVar12 = uVar14;
        }
      }
LAB_10967be0c:
      puVar15 = (undefined8 *)((long)puVar12 + -0xc);
      iVar8 = *(int *)((long)puVar12 + -4);
      if (*(int *)((long)param_1 + 0x14) < iVar8) {
        if (iVar8 < *(int *)(param_2 + -2)) {
          uVar16 = *(undefined8 *)((long)param_1 + 0xc);
          uVar18 = *(undefined4 *)((long)param_1 + 0x14);
          uVar7 = *(undefined4 *)(param_2 + -2);
          *(undefined8 *)((long)param_1 + 0xc) = *puVar27;
          *(undefined4 *)((long)param_1 + 0x14) = uVar7;
        }
        else {
          uVar14 = *(undefined8 *)((long)param_1 + 0xc);
          uVar7 = *(undefined4 *)((long)param_1 + 0x14);
          uVar18 = *(undefined4 *)((long)puVar12 + -4);
          *(undefined8 *)((long)param_1 + 0xc) = *puVar15;
          *(undefined4 *)((long)param_1 + 0x14) = uVar18;
          *(undefined4 *)((long)puVar12 + -4) = uVar7;
          *puVar15 = uVar14;
          if (*(int *)(param_2 + -2) <= *(int *)((long)puVar12 + -4)) goto LAB_10967bfa0;
          uVar16 = *puVar15;
          uVar18 = *(undefined4 *)((long)puVar12 + -4);
          uVar14 = *puVar27;
          *(undefined4 *)((long)puVar12 + -4) = *(undefined4 *)(param_2 + -2);
          *puVar15 = uVar14;
        }
        *(undefined4 *)(param_2 + -2) = uVar18;
        *puVar27 = uVar16;
      }
      else if (iVar8 < *(int *)(param_2 + -2)) {
        uVar14 = *puVar15;
        uVar18 = *(undefined4 *)((long)puVar12 + -4);
        uVar16 = *puVar27;
        *(undefined4 *)((long)puVar12 + -4) = *(undefined4 *)(param_2 + -2);
        *puVar15 = uVar16;
        *(undefined4 *)(param_2 + -2) = uVar18;
        *puVar27 = uVar14;
        if (*(int *)((long)param_1 + 0x14) < *(int *)((long)puVar12 + -4)) {
          uVar14 = *(undefined8 *)((long)param_1 + 0xc);
          uVar7 = *(undefined4 *)((long)param_1 + 0x14);
          uVar18 = *(undefined4 *)((long)puVar12 + -4);
          *(undefined8 *)((long)param_1 + 0xc) = *puVar15;
          *(undefined4 *)((long)param_1 + 0x14) = uVar18;
          *(undefined4 *)((long)puVar12 + -4) = uVar7;
          *puVar15 = uVar14;
        }
      }
LAB_10967bfa0:
      iVar8 = *(int *)((long)puVar12 + 0x14);
      if (*(int *)(param_1 + 4) < iVar8) {
        if (iVar8 < *(int *)((long)param_2 + -0x1c)) {
          uVar16 = param_1[3];
          uVar18 = *(undefined4 *)(param_1 + 4);
          uVar7 = *(undefined4 *)((long)param_2 + -0x1c);
          param_1[3] = *puVar26;
          *(undefined4 *)(param_1 + 4) = uVar7;
        }
        else {
          uVar14 = param_1[3];
          uVar18 = *(undefined4 *)(param_1 + 4);
          uVar7 = *(undefined4 *)((long)puVar12 + 0x14);
          param_1[3] = *(undefined8 *)((long)puVar12 + 0xc);
          *(undefined4 *)(param_1 + 4) = uVar7;
          *(undefined4 *)((long)puVar12 + 0x14) = uVar18;
          *(undefined8 *)((long)puVar12 + 0xc) = uVar14;
          if (*(int *)((long)param_2 + -0x1c) <= *(int *)((long)puVar12 + 0x14)) goto LAB_10967c0bc;
          uVar16 = *(undefined8 *)((long)puVar12 + 0xc);
          uVar18 = *(undefined4 *)((long)puVar12 + 0x14);
          uVar14 = *puVar26;
          *(undefined4 *)((long)puVar12 + 0x14) = *(undefined4 *)((long)param_2 + -0x1c);
          *(undefined8 *)((long)puVar12 + 0xc) = uVar14;
        }
        *(undefined4 *)((long)param_2 + -0x1c) = uVar18;
        *puVar26 = uVar16;
      }
      else if (iVar8 < *(int *)((long)param_2 + -0x1c)) {
        uVar14 = *(undefined8 *)((long)puVar12 + 0xc);
        uVar18 = *(undefined4 *)((long)puVar12 + 0x14);
        uVar16 = *puVar26;
        *(undefined4 *)((long)puVar12 + 0x14) = *(undefined4 *)((long)param_2 + -0x1c);
        *(undefined8 *)((long)puVar12 + 0xc) = uVar16;
        *(undefined4 *)((long)param_2 + -0x1c) = uVar18;
        *puVar26 = uVar14;
        if (*(int *)(param_1 + 4) < *(int *)((long)puVar12 + 0x14)) {
          uVar14 = param_1[3];
          uVar18 = *(undefined4 *)(param_1 + 4);
          uVar7 = *(undefined4 *)((long)puVar12 + 0x14);
          param_1[3] = *(undefined8 *)((long)puVar12 + 0xc);
          *(undefined4 *)(param_1 + 4) = uVar7;
          *(undefined4 *)((long)puVar12 + 0x14) = uVar18;
          *(undefined8 *)((long)puVar12 + 0xc) = uVar14;
        }
      }
LAB_10967c0bc:
      iVar8 = *(int *)(puVar12 + 1);
      if (*(int *)((long)puVar12 + -4) < iVar8) {
        if (iVar8 < *(int *)((long)puVar12 + 0x14)) {
          uStack_70 = *puVar15;
          uStack_68 = *(undefined4 *)((long)puVar12 + -4);
          *puVar15 = *(undefined8 *)((long)puVar12 + 0xc);
          *(undefined4 *)((long)puVar12 + -4) = *(undefined4 *)((long)puVar12 + 0x14);
        }
        else {
          uVar14 = *puVar15;
          iVar8 = *(int *)((long)puVar12 + -4);
          *puVar15 = *puVar12;
          *(undefined4 *)((long)puVar12 + -4) = *(undefined4 *)(puVar12 + 1);
          *(int *)(puVar12 + 1) = iVar8;
          *puVar12 = uVar14;
          if (*(int *)((long)puVar12 + 0x14) <= iVar8) goto LAB_10967c1e8;
          uStack_70 = *puVar12;
          uStack_68 = *(undefined4 *)(puVar12 + 1);
          *puVar12 = *(undefined8 *)((long)puVar12 + 0xc);
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)((long)puVar12 + 0x14);
        }
        *(undefined4 *)((long)puVar12 + 0x14) = uStack_68;
        *(undefined8 *)((long)puVar12 + 0xc) = uStack_70;
      }
      else if (iVar8 < *(int *)((long)puVar12 + 0x14)) {
        uVar14 = *puVar12;
        uVar18 = *(undefined4 *)(puVar12 + 1);
        *puVar12 = *(undefined8 *)((long)puVar12 + 0xc);
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)((long)puVar12 + 0x14);
        *(undefined4 *)((long)puVar12 + 0x14) = uVar18;
        *(undefined8 *)((long)puVar12 + 0xc) = uVar14;
        if (*(int *)((long)puVar12 + -4) < *(int *)(puVar12 + 1)) {
          uVar14 = *puVar15;
          uVar18 = *(undefined4 *)((long)puVar12 + -4);
          *puVar15 = *puVar12;
          *(undefined4 *)((long)puVar12 + -4) = *(undefined4 *)(puVar12 + 1);
          *(undefined4 *)(puVar12 + 1) = uVar18;
          *puVar12 = uVar14;
        }
      }
LAB_10967c1e8:
      uVar14 = *param_1;
      uVar18 = *(undefined4 *)(param_1 + 1);
      uVar16 = *puVar12;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar12 + 1);
      *param_1 = uVar16;
      *(undefined4 *)(puVar12 + 1) = uVar18;
      *puVar12 = uVar14;
    }
LAB_10967c218:
    param_3 = param_3 + -1;
    if ((param_4 & 1) != 0) {
      iVar8 = *(int *)(param_1 + 1);
LAB_10967c238:
      lVar19 = 0;
      uVar14 = *param_1;
      do {
        lVar9 = lVar19 + 0x14;
        lVar19 = lVar19 + 0xc;
      } while (iVar8 < *(int *)((long)param_1 + lVar9));
      puVar15 = (undefined8 *)((long)param_1 + lVar19);
      puVar12 = param_2;
      if (lVar19 == 0xc) {
        do {
          puVar20 = puVar12;
          if (puVar12 <= puVar15) break;
          puVar20 = (undefined8 *)((long)puVar12 + -0xc);
          piVar2 = (int *)((long)puVar12 + -4);
          puVar12 = puVar20;
        } while (*piVar2 <= iVar8);
      }
      else {
        do {
          puVar20 = (undefined8 *)((long)puVar12 + -0xc);
          piVar2 = (int *)((long)puVar12 + -4);
          puVar12 = puVar20;
        } while (*piVar2 <= iVar8);
      }
      puVar21 = puVar20;
      puVar12 = puVar15;
      if (puVar15 < puVar20) {
        do {
          uVar16 = *puVar12;
          uVar18 = *(undefined4 *)(puVar12 + 1);
          uVar23 = *puVar21;
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar21 + 1);
          *puVar12 = uVar23;
          *(undefined4 *)(puVar21 + 1) = uVar18;
          *puVar21 = uVar16;
          do {
            piVar2 = (int *)((long)puVar12 + 0x14);
            puVar12 = (undefined8 *)((long)puVar12 + 0xc);
          } while (iVar8 < *piVar2);
          do {
            piVar2 = (int *)((long)puVar21 + -4);
            puVar21 = (undefined8 *)((long)puVar21 + -0xc);
          } while (*piVar2 <= iVar8);
        } while (puVar12 < puVar21);
      }
      puVar21 = (undefined8 *)((long)puVar12 - 0xc);
      if (puVar21 != param_1) {
        uVar16 = *puVar21;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)puVar12 - 4);
        *param_1 = uVar16;
      }
      *(undefined8 *)((long)puVar12 - 0xc) = uVar14;
      *(int *)((long)puVar12 - 4) = iVar8;
      if (puVar20 <= puVar15) {
        puVar15 = param_1;
        FUN_10967cd14(param_1,puVar21);
        puVar20 = puVar12;
        FUN_10967cd14(puVar12,param_2);
        if ((int)puVar20 != 0) goto LAB_10967c470;
        if (((ulong)puVar15 & 1) != 0) goto LAB_10967bbc0;
      }
      FUN_10967bb80(param_1,puVar21,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_10967bbc0;
    }
    iVar8 = *(int *)(param_1 + 1);
    if (iVar8 < *(int *)((long)param_1 - 4)) goto LAB_10967c238;
    puVar15 = param_1;
    if (*(int *)((long)param_2 + -4) < iVar8) {
      do {
        puVar12 = (undefined8 *)((long)puVar15 + 0xc);
        piVar2 = (int *)((long)puVar15 + 0x14);
        puVar15 = puVar12;
      } while (iVar8 <= *piVar2);
    }
    else {
      do {
        puVar12 = (undefined8 *)((long)puVar15 + 0xc);
        if (param_2 <= puVar12) break;
        piVar2 = (int *)((long)puVar15 + 0x14);
        puVar15 = puVar12;
      } while (iVar8 <= *piVar2);
    }
    puVar15 = param_2;
    puVar20 = param_2;
    if (puVar12 < param_2) {
      do {
        puVar20 = (undefined8 *)((long)puVar15 + -0xc);
        piVar2 = (int *)((long)puVar15 + -4);
        puVar15 = puVar20;
      } while (*piVar2 < iVar8);
    }
    uVar14 = *param_1;
    while (puVar12 < puVar20) {
      uVar16 = *puVar12;
      uVar18 = *(undefined4 *)(puVar12 + 1);
      uVar23 = *puVar20;
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar20 + 1);
      *puVar12 = uVar23;
      *(undefined4 *)(puVar20 + 1) = uVar18;
      *puVar20 = uVar16;
      do {
        piVar2 = (int *)((long)puVar12 + 0x14);
        puVar12 = (undefined8 *)((long)puVar12 + 0xc);
      } while (iVar8 <= *piVar2);
      do {
        piVar2 = (int *)((long)puVar20 + -4);
        puVar20 = (undefined8 *)((long)puVar20 + -0xc);
      } while (*piVar2 < iVar8);
    }
    if ((undefined8 *)((long)puVar12 - 0xcU) != param_1) {
      uVar16 = *(undefined8 *)((long)puVar12 - 0xcU);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)puVar12 + -4);
      *param_1 = uVar16;
    }
    param_4 = 0;
    *(undefined8 *)((long)puVar12 + -0xc) = uVar14;
    *(int *)((long)puVar12 + -4) = iVar8;
  } while( true );
LAB_10967c5a8:
  iVar8 = *(int *)((long)puVar25 + 0x14);
  if (*(int *)(puVar25 + 1) < iVar8) {
    uVar14 = *puVar12;
    lVar9 = lVar19;
    do {
      lVar22 = lVar9;
      puVar25 = (undefined8 *)((long)param_1 + lVar22);
      *(undefined8 *)((long)puVar25 + 0xc) = *puVar25;
      *(undefined4 *)((long)puVar25 + 0x14) = *(undefined4 *)(puVar25 + 1);
      puVar26 = param_1;
      if (lVar22 == 0) goto LAB_10967c5fc;
      lVar9 = lVar22 + -0xc;
    } while (*(int *)((long)puVar25 + -4) < iVar8);
    puVar26 = (undefined8 *)((long)param_1 + lVar22);
LAB_10967c5fc:
    *puVar26 = uVar14;
    *(int *)(puVar26 + 1) = iVar8;
  }
  puVar26 = (undefined8 *)((long)puVar12 + 0xc);
  lVar19 = lVar19 + 0xc;
  puVar25 = puVar12;
  puVar12 = puVar26;
  if (puVar26 == param_2) {
    return;
  }
  goto LAB_10967c5a8;
LAB_10967c62c:
  do {
    if ((long)uVar24 <= (long)uVar17) {
      uVar4 = uVar24 << 1 | 1;
      puVar12 = (undefined8 *)((long)param_1 + uVar4 * 0xc);
      uVar3 = uVar24 * 2 + 2;
      uVar10 = uVar4;
      if ((long)uVar3 < (long)uVar11) {
        piVar2 = (int *)(puVar12 + 1);
        piVar1 = (int *)((long)puVar12 + 0x14);
        lVar19 = 0xc;
        if (*piVar2 <= *piVar1) {
          lVar19 = 0;
        }
        puVar12 = (undefined8 *)((long)puVar12 + lVar19);
        uVar10 = uVar3;
        if (*piVar2 <= *piVar1) {
          uVar10 = uVar4;
        }
      }
      puVar25 = (undefined8 *)((long)param_1 + uVar24 * 0xc);
      iVar8 = *(int *)(puVar25 + 1);
      if (*(int *)(puVar12 + 1) <= iVar8) {
        uVar14 = *puVar25;
        do {
          puVar26 = puVar12;
          uVar16 = *puVar26;
          *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar26 + 1);
          *puVar25 = uVar16;
          if ((long)uVar17 < (long)uVar10) break;
          uVar4 = uVar10 << 1 | 1;
          puVar12 = (undefined8 *)((long)param_1 + uVar4 * 0xc);
          uVar3 = uVar10 * 2 + 2;
          uVar10 = uVar4;
          if ((long)uVar3 < (long)uVar11) {
            piVar2 = (int *)(puVar12 + 1);
            piVar1 = (int *)((long)puVar12 + 0x14);
            lVar19 = 0xc;
            if (*piVar2 <= *piVar1) {
              lVar19 = 0;
            }
            puVar12 = (undefined8 *)((long)puVar12 + lVar19);
            uVar10 = uVar3;
            if (*piVar2 <= *piVar1) {
              uVar10 = uVar4;
            }
          }
          puVar25 = puVar26;
        } while (*(int *)(puVar12 + 1) <= iVar8);
        *puVar26 = uVar14;
        *(int *)(puVar26 + 1) = iVar8;
      }
    }
    bVar5 = uVar24 != 0;
    uVar24 = uVar24 - 1;
  } while (bVar5);
  lVar19 = (uVar13 >> 2) * -0x5555555555555555;
  do {
    uVar14 = *param_1;
    uVar18 = *(undefined4 *)(param_1 + 1);
    puVar12 = param_1;
    uVar11 = 0;
    do {
      puVar25 = (undefined8 *)((long)puVar12 + uVar11 * 0xc + 0xc);
      uVar24 = uVar11 << 1 | 1;
      uVar13 = uVar11 * 2 + 2;
      puVar26 = puVar25;
      uVar17 = uVar24;
      if (((long)uVar13 < lVar19) &&
         (puVar26 = (undefined8 *)((long)puVar12 + uVar11 * 0xc + 0x18), uVar17 = uVar13,
         *(int *)((long)puVar12 + uVar11 * 0xc + 0x14) <=
         *(int *)((long)puVar12 + uVar11 * 0xc + 0x20))) {
        puVar26 = puVar25;
        uVar17 = uVar24;
      }
      uVar16 = *puVar26;
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar26 + 1);
      *puVar12 = uVar16;
      puVar12 = puVar26;
      uVar11 = uVar17;
    } while ((long)uVar17 <= (long)(lVar19 - 2U >> 1));
    puVar12 = (undefined8 *)((long)param_2 - 0xc);
    if (puVar26 == puVar12) {
      *(undefined4 *)(puVar26 + 1) = uVar18;
      *puVar26 = uVar14;
    }
    else {
      uVar16 = *puVar12;
      *(undefined4 *)(puVar26 + 1) = *(undefined4 *)((long)param_2 - 4);
      *puVar26 = uVar16;
      *(undefined4 *)((long)param_2 - 4) = uVar18;
      *puVar12 = uVar14;
      uVar11 = (long)puVar26 + (0xc - (long)param_1);
      if (0xc < (long)uVar11) {
        uVar11 = (uVar11 >> 2) * -0x5555555555555555 - 2 >> 1;
        puVar25 = (undefined8 *)((long)param_1 + uVar11 * 0xc);
        iVar8 = *(int *)(puVar26 + 1);
        if (iVar8 < *(int *)(puVar25 + 1)) {
          uVar14 = *puVar26;
          do {
            puVar27 = puVar25;
            uVar16 = *puVar27;
            *(undefined4 *)(puVar26 + 1) = *(undefined4 *)(puVar27 + 1);
            *puVar26 = uVar16;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1 >> 1;
            puVar25 = (undefined8 *)((long)param_1 + uVar11 * 0xc);
            puVar26 = puVar27;
          } while (iVar8 < *(int *)(puVar25 + 1));
          *puVar27 = uVar14;
          *(int *)(puVar27 + 1) = iVar8;
        }
      }
    }
    bVar5 = lVar19 < 3;
    lVar19 = lVar19 + -1;
    param_2 = puVar12;
    if (bVar5) {
      return;
    }
  } while( true );
LAB_10967c470:
  param_2 = puVar21;
  if (((ulong)puVar15 & 1) != 0) {
    return;
  }
  goto LAB_10967bbb0;
}



/* Entry: 10967cad4; end: 10967cd13;  */

void FUN_10967cad4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  if (*(int *)(param_1 + 1) < iVar1) {
    if (iVar1 < *(int *)(param_3 + 1)) {
      uVar3 = *(undefined4 *)(param_1 + 1);
      uVar4 = *param_1;
      uVar2 = *(undefined4 *)(param_3 + 1);
      *param_1 = *param_3;
      *(undefined4 *)(param_1 + 1) = uVar2;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 1);
      uVar4 = *param_1;
      uVar2 = *(undefined4 *)(param_2 + 1);
      *param_1 = *param_2;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *param_2 = uVar4;
      *(undefined4 *)(param_2 + 1) = uVar3;
      if (*(int *)(param_3 + 1) <= *(int *)(param_2 + 1)) goto LAB_10967cbbc;
      uVar3 = *(undefined4 *)(param_2 + 1);
      uVar4 = *param_2;
      uVar2 = *(undefined4 *)(param_3 + 1);
      *param_2 = *param_3;
      *(undefined4 *)(param_2 + 1) = uVar2;
    }
    *param_3 = uVar4;
    *(undefined4 *)(param_3 + 1) = uVar3;
  }
  else if (iVar1 < *(int *)(param_3 + 1)) {
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *param_2;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *param_2 = *param_3;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *param_3 = uVar4;
    *(undefined4 *)(param_3 + 1) = uVar3;
    if (*(int *)(param_1 + 1) < *(int *)(param_2 + 1)) {
      uVar3 = *(undefined4 *)(param_1 + 1);
      uVar4 = *param_1;
      uVar2 = *(undefined4 *)(param_2 + 1);
      *param_1 = *param_2;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *param_2 = uVar4;
      *(undefined4 *)(param_2 + 1) = uVar3;
    }
  }
LAB_10967cbbc:
  if (*(int *)(param_3 + 1) < *(int *)(param_4 + 1)) {
    uVar3 = *(undefined4 *)(param_3 + 1);
    uVar4 = *param_3;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *param_3 = *param_4;
    *(undefined4 *)(param_3 + 1) = uVar2;
    *param_4 = uVar4;
    *(undefined4 *)(param_4 + 1) = uVar3;
    if (*(int *)(param_2 + 1) < *(int *)(param_3 + 1)) {
      uVar3 = *(undefined4 *)(param_2 + 1);
      uVar4 = *param_2;
      uVar2 = *(undefined4 *)(param_3 + 1);
      *param_2 = *param_3;
      *(undefined4 *)(param_2 + 1) = uVar2;
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = uVar3;
      if (*(int *)(param_1 + 1) < *(int *)(param_2 + 1)) {
        uVar3 = *(undefined4 *)(param_1 + 1);
        uVar4 = *param_1;
        uVar2 = *(undefined4 *)(param_2 + 1);
        *param_1 = *param_2;
        *(undefined4 *)(param_1 + 1) = uVar2;
        *param_2 = uVar4;
        *(undefined4 *)(param_2 + 1) = uVar3;
      }
    }
  }
  if (*(int *)(param_4 + 1) < *(int *)(param_5 + 1)) {
    uVar3 = *(undefined4 *)(param_4 + 1);
    uVar4 = *param_4;
    uVar2 = *(undefined4 *)(param_5 + 1);
    *param_4 = *param_5;
    *(undefined4 *)(param_4 + 1) = uVar2;
    *param_5 = uVar4;
    *(undefined4 *)(param_5 + 1) = uVar3;
    if (*(int *)(param_3 + 1) < *(int *)(param_4 + 1)) {
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *param_3;
      uVar2 = *(undefined4 *)(param_4 + 1);
      *param_3 = *param_4;
      *(undefined4 *)(param_3 + 1) = uVar2;
      *param_4 = uVar4;
      *(undefined4 *)(param_4 + 1) = uVar3;
      if (*(int *)(param_2 + 1) < *(int *)(param_3 + 1)) {
        uVar3 = *(undefined4 *)(param_2 + 1);
        uVar4 = *param_2;
        uVar2 = *(undefined4 *)(param_3 + 1);
        *param_2 = *param_3;
        *(undefined4 *)(param_2 + 1) = uVar2;
        *param_3 = uVar4;
        *(undefined4 *)(param_3 + 1) = uVar3;
        if (*(int *)(param_1 + 1) < *(int *)(param_2 + 1)) {
          uVar3 = *(undefined4 *)(param_1 + 1);
          uVar4 = *param_1;
          uVar2 = *(undefined4 *)(param_2 + 1);
          *param_1 = *param_2;
          *(undefined4 *)(param_1 + 1) = uVar2;
          *param_2 = uVar4;
          *(undefined4 *)(param_2 + 1) = uVar3;
        }
      }
    }
  }
  return;
}



/* Entry: 10967cd14; end: 10967d173;  */

bool FUN_10967cd14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  uVar5 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      if (*(int *)((long)param_2 + -4) <= *(int *)(param_1 + 1)) {
        return true;
      }
      uVar7 = *(undefined4 *)(param_1 + 1);
      uVar8 = *param_1;
      uVar3 = *(undefined4 *)((long)param_2 + -4);
      *param_1 = *(undefined8 *)((long)param_2 + -0xc);
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined8 *)((long)param_2 + -0xc) = uVar8;
      *(undefined4 *)((long)param_2 + -4) = uVar7;
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      puVar6 = (undefined8 *)((long)param_2 + -0xc);
      iVar11 = *(int *)((long)param_1 + 0x14);
      if (*(int *)(param_1 + 1) < iVar11) {
        if (iVar11 < *(int *)((long)param_2 + -4)) {
          uVar7 = *(undefined4 *)(param_1 + 1);
          uVar8 = *param_1;
          uVar3 = *(undefined4 *)((long)param_2 + -4);
          *param_1 = *puVar6;
          *(undefined4 *)(param_1 + 1) = uVar3;
        }
        else {
          uVar7 = *(undefined4 *)(param_1 + 1);
          uVar8 = *param_1;
          *param_1 = *(undefined8 *)((long)param_1 + 0xc);
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
          *(undefined8 *)((long)param_1 + 0xc) = uVar8;
          *(undefined4 *)((long)param_1 + 0x14) = uVar7;
          if (*(int *)((long)param_2 + -4) <= *(int *)((long)param_1 + 0x14)) {
            return true;
          }
          uVar7 = *(undefined4 *)((long)param_1 + 0x14);
          uVar8 = *(undefined8 *)((long)param_1 + 0xc);
          uVar3 = *(undefined4 *)((long)param_2 + -4);
          *(undefined8 *)((long)param_1 + 0xc) = *puVar6;
          *(undefined4 *)((long)param_1 + 0x14) = uVar3;
        }
        *puVar6 = uVar8;
        *(undefined4 *)((long)param_2 + -4) = uVar7;
        return true;
      }
      if (*(int *)((long)param_2 + -4) <= iVar11) {
        return true;
      }
      uVar3 = *(undefined4 *)((long)param_1 + 0x14);
      uVar8 = *(undefined8 *)((long)param_1 + 0xc);
      uVar7 = *(undefined4 *)((long)param_2 + -4);
      *(undefined8 *)((long)param_1 + 0xc) = *puVar6;
      *(undefined4 *)((long)param_1 + 0x14) = uVar7;
      *puVar6 = uVar8;
      *(undefined4 *)((long)param_2 + -4) = uVar3;
      goto LAB_10967d120;
    }
    if (uVar5 == 4) {
      iVar11 = *(int *)((long)param_1 + 0x14);
      iVar2 = *(int *)(param_1 + 4);
      if (*(int *)(param_1 + 1) < iVar11) {
        if (iVar11 < iVar2) {
          uVar7 = *(undefined4 *)(param_1 + 1);
          uVar8 = *param_1;
          *param_1 = param_1[3];
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 4);
        }
        else {
          uVar7 = *(undefined4 *)(param_1 + 1);
          uVar8 = *param_1;
          *param_1 = *(undefined8 *)((long)param_1 + 0xc);
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
          *(undefined8 *)((long)param_1 + 0xc) = uVar8;
          *(undefined4 *)((long)param_1 + 0x14) = uVar7;
          if (iVar2 <= *(int *)((long)param_1 + 0x14)) goto LAB_10967d0bc;
          uVar7 = *(undefined4 *)((long)param_1 + 0x14);
          uVar8 = *(undefined8 *)((long)param_1 + 0xc);
          *(undefined8 *)((long)param_1 + 0xc) = param_1[3];
          *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
        }
        param_1[3] = uVar8;
        *(undefined4 *)(param_1 + 4) = uVar7;
      }
      else if (iVar11 < iVar2) {
        uVar7 = *(undefined4 *)((long)param_1 + 0x14);
        uVar8 = *(undefined8 *)((long)param_1 + 0xc);
        *(undefined8 *)((long)param_1 + 0xc) = param_1[3];
        *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
        param_1[3] = uVar8;
        *(undefined4 *)(param_1 + 4) = uVar7;
        if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0x14)) {
          uVar7 = *(undefined4 *)(param_1 + 1);
          uVar8 = *param_1;
          *param_1 = *(undefined8 *)((long)param_1 + 0xc);
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
          *(undefined8 *)((long)param_1 + 0xc) = uVar8;
          *(undefined4 *)((long)param_1 + 0x14) = uVar7;
        }
      }
LAB_10967d0bc:
      if (*(int *)((long)param_2 + -4) <= *(int *)(param_1 + 4)) {
        return true;
      }
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar8 = param_1[3];
      uVar7 = *(undefined4 *)((long)param_2 + -4);
      param_1[3] = *(undefined8 *)((long)param_2 + -0xc);
      *(undefined4 *)(param_1 + 4) = uVar7;
      *(undefined8 *)((long)param_2 + -0xc) = uVar8;
      *(undefined4 *)((long)param_2 + -4) = uVar3;
      if (*(int *)(param_1 + 4) <= *(int *)((long)param_1 + 0x14)) {
        return true;
      }
      uVar7 = *(undefined4 *)((long)param_1 + 0x14);
      uVar8 = *(undefined8 *)((long)param_1 + 0xc);
      *(undefined8 *)((long)param_1 + 0xc) = param_1[3];
      *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
      param_1[3] = uVar8;
      *(undefined4 *)(param_1 + 4) = uVar7;
LAB_10967d120:
      if (*(int *)((long)param_1 + 0x14) <= *(int *)(param_1 + 1)) {
        return true;
      }
      uVar7 = *(undefined4 *)(param_1 + 1);
      uVar8 = *param_1;
      *param_1 = *(undefined8 *)((long)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
      *(undefined8 *)((long)param_1 + 0xc) = uVar8;
      *(undefined4 *)((long)param_1 + 0x14) = uVar7;
      return true;
    }
    if (uVar5 == 5) {
      FUN_10967cad4(param_1,(long)param_1 + 0xc,param_1 + 3,(long)param_1 + 0x24,
                    (long)param_2 + -0xc);
      return true;
    }
  }
  puVar6 = param_1 + 3;
  iVar11 = *(int *)((long)param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 1) < iVar11) {
    if (iVar11 < iVar2) {
      uVar7 = *(undefined4 *)(param_1 + 1);
      uVar8 = *param_1;
      *param_1 = *puVar6;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 4);
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 1);
      uVar8 = *param_1;
      *param_1 = *(undefined8 *)((long)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
      *(undefined8 *)((long)param_1 + 0xc) = uVar8;
      *(undefined4 *)((long)param_1 + 0x14) = uVar7;
      if (iVar2 <= *(int *)((long)param_1 + 0x14)) goto LAB_10967cfdc;
      uVar7 = *(undefined4 *)((long)param_1 + 0x14);
      uVar8 = *(undefined8 *)((long)param_1 + 0xc);
      *(undefined8 *)((long)param_1 + 0xc) = *puVar6;
      *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
    }
    *puVar6 = uVar8;
    *(undefined4 *)(param_1 + 4) = uVar7;
  }
  else if (iVar11 < iVar2) {
    uVar7 = *(undefined4 *)((long)param_1 + 0x14);
    uVar8 = *(undefined8 *)((long)param_1 + 0xc);
    *(undefined8 *)((long)param_1 + 0xc) = *puVar6;
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
    *puVar6 = uVar8;
    *(undefined4 *)(param_1 + 4) = uVar7;
    if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0x14)) {
      uVar7 = *(undefined4 *)(param_1 + 1);
      uVar8 = *param_1;
      *param_1 = *(undefined8 *)((long)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((long)param_1 + 0x14);
      *(undefined8 *)((long)param_1 + 0xc) = uVar8;
      *(undefined4 *)((long)param_1 + 0x14) = uVar7;
    }
  }
LAB_10967cfdc:
  if ((undefined8 *)((long)param_1 + 0x24) != param_2) {
    lVar10 = 0;
    iVar11 = 0;
    puVar9 = (undefined8 *)((long)param_1 + 0x24);
    do {
      iVar2 = *(int *)(puVar9 + 1);
      if (*(int *)(puVar6 + 1) < iVar2) {
        uVar8 = *puVar9;
        lVar4 = lVar10;
        do {
          lVar12 = lVar4;
          *(undefined8 *)((long)param_1 + lVar12 + 0x24) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x18);
          *(undefined4 *)((long)param_1 + lVar12 + 0x2c) =
               *(undefined4 *)((long)param_1 + lVar12 + 0x20);
          puVar6 = param_1;
          if (lVar12 == -0x18) goto LAB_10967d044;
          lVar4 = lVar12 + -0xc;
        } while (*(int *)((long)param_1 + lVar12 + 0x14) < iVar2);
        puVar6 = (undefined8 *)((long)param_1 + lVar12 + 0x18);
LAB_10967d044:
        *puVar6 = uVar8;
        *(int *)(puVar6 + 1) = iVar2;
        iVar11 = iVar11 + 1;
        if (iVar11 == 8) {
          return (undefined8 *)((long)puVar9 + 0xc) == param_2;
        }
      }
      puVar1 = (undefined8 *)((long)puVar9 + 0xc);
      lVar10 = lVar10 + 0xc;
      puVar6 = puVar9;
      puVar9 = puVar1;
    } while (puVar1 != param_2);
  }
  return true;
}



/* Entry: 10967d174; end: 10967d1eb;  */

void FUN_10967d174(int param_1,int param_2,long param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = param_2 - param_4;
  if ((int)uVar2 <= param_4 + param_2) {
    iVar3 = param_5 * uVar2;
    do {
      if (param_1 - param_4 <= param_4 + param_1) {
        iVar5 = param_1 - param_4;
        uVar4 = param_4 << 1 | 1;
        do {
          if ((-1 < iVar5) && (iVar5 < param_5 && (uVar2 < 0x80000000 && (int)uVar2 < param_6))) {
            *(undefined1 *)(param_3 + (ulong)(uint)(iVar3 + iVar5)) = 1;
          }
          iVar5 = iVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar3 = iVar3 + param_5;
      bVar1 = uVar2 != param_4 + param_2;
      uVar2 = uVar2 + 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 10967d1ec; end: 10967d26b;  */

void FUN_10967d1ec(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,uint *param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [12];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  param_1 = param_1 + -3.0;
  param_2 = param_2 + -3.0;
  FUN_10967d26c(param_1,param_2,param_3,param_4,param_7);
  FUN_10967d26c(param_1,param_2,*param_5,*(undefined8 *)(param_5 + 2),param_8);
  uVar2 = *param_6;
  lVar6 = 0;
  puVar1 = (undefined8 *)
           (*(long *)(param_6 + 2) + (long)(int)(uVar2 * (int)param_2) * 4 + (long)(int)param_1 * 4)
  ;
  fVar23 = (float)puVar1[1];
  fVar25 = (float)((ulong)puVar1[1] >> 0x20);
  fVar19 = (float)*puVar1;
  fVar21 = (float)((ulong)*puVar1 >> 0x20);
  fVar15 = (float)puVar1[3];
  fVar17 = (float)((ulong)puVar1[3] >> 0x20);
  fVar11 = (float)puVar1[2];
  fVar13 = (float)((ulong)puVar1[2] >> 0x20);
  fVar9 = param_1 - (float)(int)param_1;
  fVar10 = param_2 - (float)(int)param_2;
  uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
  pauVar8 = (undefined1 (*) [12])
            (uVar7 + (long)(int)param_1 * 4 + (long)(int)(uVar2 * (int)param_2) * 4 +
             *(long *)(param_6 + 2) + 0x10);
  do {
    puVar1 = (undefined8 *)(param_9 + lVar6);
    auVar27._4_4_ = fVar13;
    auVar27._0_4_ = fVar11;
    auVar27._8_4_ = fVar15;
    auVar27._12_4_ = fVar17;
    auVar3._4_4_ = fVar21;
    auVar3._0_4_ = fVar19;
    auVar3._8_4_ = fVar23;
    auVar3._12_4_ = fVar25;
    auVar27 = NEON_ext(auVar3,auVar27,4,1);
    fVar20 = fVar19 + (auVar27._0_4_ - fVar19) * fVar9;
    fVar22 = fVar21 + (auVar27._4_4_ - fVar21) * fVar9;
    fVar24 = fVar23 + (auVar27._8_4_ - fVar23) * fVar9;
    fVar26 = fVar25 + (auVar27._12_4_ - fVar25) * fVar9;
    auVar28._4_4_ = fVar13;
    auVar28._0_4_ = fVar11;
    auVar28._8_4_ = fVar15;
    auVar28._12_4_ = fVar17;
    auVar27 = NEON_ext(auVar28,ZEXT216(0),4,1);
    fVar12 = fVar11 + (auVar27._0_4_ - fVar11) * fVar9;
    fVar14 = fVar13 + (auVar27._4_4_ - fVar13) * fVar9;
    fVar16 = fVar15 + (auVar27._8_4_ - fVar15) * fVar9;
    fVar18 = fVar17 + (auVar27._12_4_ - fVar17) * fVar9;
    auVar27 = *(undefined1 (*) [16])(pauVar8[-2] + 8);
    fVar15 = (float)*(undefined8 *)(*pauVar8 + 8);
    fVar17 = (float)((ulong)*(undefined8 *)(*pauVar8 + 8) >> 0x20);
    fVar11 = (float)*(undefined8 *)*pauVar8;
    fVar13 = (float)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
    auVar4._12_4_ = fVar17;
    auVar4._0_12_ = *pauVar8;
    auVar28 = NEON_ext(auVar27,auVar4,4,1);
    fVar19 = auVar27._0_4_;
    fVar21 = auVar27._4_4_;
    fVar23 = auVar27._8_4_;
    fVar25 = auVar27._12_4_;
    auVar5._12_4_ = fVar17;
    auVar5._0_12_ = *pauVar8;
    auVar27 = NEON_ext(auVar5,ZEXT216(0),4,1);
    puVar1[1] = CONCAT44(fVar26 + ((fVar25 + (auVar28._12_4_ - fVar25) * fVar9) - fVar26) * fVar10,
                         fVar24 + ((fVar23 + (auVar28._8_4_ - fVar23) * fVar9) - fVar24) * fVar10);
    *puVar1 = CONCAT44(fVar22 + ((fVar21 + (auVar28._4_4_ - fVar21) * fVar9) - fVar22) * fVar10,
                       fVar20 + ((fVar19 + (auVar28._0_4_ - fVar19) * fVar9) - fVar20) * fVar10);
    puVar1[3] = CONCAT44(fVar18 + ((fVar17 + (auVar27._12_4_ - fVar17) * fVar9) - fVar18) * fVar10,
                         fVar16 + ((fVar15 + (auVar27._8_4_ - fVar15) * fVar9) - fVar16) * fVar10);
    puVar1[2] = CONCAT44(fVar14 + ((fVar13 + (auVar27._4_4_ - fVar13) * fVar9) - fVar14) * fVar10,
                         fVar12 + ((fVar11 + (auVar27._0_4_ - fVar11) * fVar9) - fVar12) * fVar10);
    pauVar8 = (undefined1 (*) [12])(*pauVar8 + uVar7);
    lVar6 = lVar6 + 0x1c;
  } while ((int)lVar6 != 0xc4);
  return;
}



/* Entry: 10967d26c; end: 10967d337;  */

void FUN_10967d26c(float param_1,float param_2,uint param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [12];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  lVar5 = 0;
  puVar1 = (undefined8 *)
           (param_4 + (long)(int)(param_3 * (int)param_2) * 4 + (long)(int)param_1 * 4);
  fVar22 = (float)puVar1[1];
  fVar24 = (float)((ulong)puVar1[1] >> 0x20);
  fVar18 = (float)*puVar1;
  fVar20 = (float)((ulong)*puVar1 >> 0x20);
  fVar14 = (float)puVar1[3];
  fVar16 = (float)((ulong)puVar1[3] >> 0x20);
  fVar10 = (float)puVar1[2];
  fVar12 = (float)((ulong)puVar1[2] >> 0x20);
  fVar8 = param_1 - (float)(int)param_1;
  fVar9 = param_2 - (float)(int)param_2;
  uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
  pauVar7 = (undefined1 (*) [12])
            (uVar6 + (long)(int)param_1 * 4 + (long)(int)(param_3 * (int)param_2) * 4 + param_4 +
            0x10);
  do {
    puVar1 = (undefined8 *)(param_5 + lVar5);
    auVar26._4_4_ = fVar12;
    auVar26._0_4_ = fVar10;
    auVar26._8_4_ = fVar14;
    auVar26._12_4_ = fVar16;
    auVar2._4_4_ = fVar20;
    auVar2._0_4_ = fVar18;
    auVar2._8_4_ = fVar22;
    auVar2._12_4_ = fVar24;
    auVar26 = NEON_ext(auVar2,auVar26,4,1);
    fVar19 = fVar18 + (auVar26._0_4_ - fVar18) * fVar8;
    fVar21 = fVar20 + (auVar26._4_4_ - fVar20) * fVar8;
    fVar23 = fVar22 + (auVar26._8_4_ - fVar22) * fVar8;
    fVar25 = fVar24 + (auVar26._12_4_ - fVar24) * fVar8;
    auVar27._4_4_ = fVar12;
    auVar27._0_4_ = fVar10;
    auVar27._8_4_ = fVar14;
    auVar27._12_4_ = fVar16;
    auVar26 = NEON_ext(auVar27,ZEXT216(0),4,1);
    fVar11 = fVar10 + (auVar26._0_4_ - fVar10) * fVar8;
    fVar13 = fVar12 + (auVar26._4_4_ - fVar12) * fVar8;
    fVar15 = fVar14 + (auVar26._8_4_ - fVar14) * fVar8;
    fVar17 = fVar16 + (auVar26._12_4_ - fVar16) * fVar8;
    auVar26 = *(undefined1 (*) [16])(pauVar7[-2] + 8);
    fVar14 = (float)*(undefined8 *)(*pauVar7 + 8);
    fVar16 = (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
    fVar10 = (float)*(undefined8 *)*pauVar7;
    fVar12 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
    auVar3._12_4_ = fVar16;
    auVar3._0_12_ = *pauVar7;
    auVar27 = NEON_ext(auVar26,auVar3,4,1);
    fVar18 = auVar26._0_4_;
    fVar20 = auVar26._4_4_;
    fVar22 = auVar26._8_4_;
    fVar24 = auVar26._12_4_;
    auVar4._12_4_ = fVar16;
    auVar4._0_12_ = *pauVar7;
    auVar26 = NEON_ext(auVar4,ZEXT216(0),4,1);
    puVar1[1] = CONCAT44(fVar25 + ((fVar24 + (auVar27._12_4_ - fVar24) * fVar8) - fVar25) * fVar9,
                         fVar23 + ((fVar22 + (auVar27._8_4_ - fVar22) * fVar8) - fVar23) * fVar9);
    *puVar1 = CONCAT44(fVar21 + ((fVar20 + (auVar27._4_4_ - fVar20) * fVar8) - fVar21) * fVar9,
                       fVar19 + ((fVar18 + (auVar27._0_4_ - fVar18) * fVar8) - fVar19) * fVar9);
    puVar1[3] = CONCAT44(fVar17 + ((fVar16 + (auVar26._12_4_ - fVar16) * fVar8) - fVar17) * fVar9,
                         fVar15 + ((fVar14 + (auVar26._8_4_ - fVar14) * fVar8) - fVar15) * fVar9);
    puVar1[2] = CONCAT44(fVar13 + ((fVar12 + (auVar26._4_4_ - fVar12) * fVar8) - fVar13) * fVar9,
                         fVar11 + ((fVar10 + (auVar26._0_4_ - fVar10) * fVar8) - fVar11) * fVar9);
    pauVar7 = (undefined1 (*) [12])(*pauVar7 + uVar6);
    lVar5 = lVar5 + 0x1c;
  } while ((int)lVar5 != 0xc4);
  return;
}



/* Entry: 10967d338; end: 10967d72f;  */

void FUN_10967d338(long param_1,ulong param_2,ulong param_3,float *param_4,long param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  long lVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  long lVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  long alStack_d0 [6];
  long alStack_a0 [6];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_3;
  pfVar10 = param_4;
  if ((bRam0000000113734d00 & 1) == 0) {
    iVar8 = 0x13734d00;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      lVar14 = 0;
      uRam0000000113734d20 = 0x3cb824cc;
      uRam0000000113734d18 = 0x3e75c25e00000000;
      uRam0000000113734d10 = 0xbe75c25ebcb824cc;
      pfVar7 = (float *)&UNK_10dfda75c;
      do {
        *(float *)(lVar14 + 0x113734d24) = *pfVar7 / 0.23999926;
        lVar14 = lVar14 + 4;
        pfVar7 = pfVar7 + 5;
      } while (lVar14 != 0x14);
      uRam0000000113734cf0 = 1;
      ___cxa_guard_release(0x113734d00);
    }
  }
  lVar15 = 0;
  lVar14 = param_5 + 8;
  iVar19 = (int)param_2;
  uVar21 = (uint)param_3;
  uVar11 = (ulong)(uVar21 - 1);
  iVar8 = iVar19 * (uVar21 - 1);
  lVar16 = 8;
  do {
    if (lVar15 != 0x10) {
      *(long *)((long)alStack_a0 + lVar15) = (long)param_4 + lVar16;
      *(long *)((long)alStack_d0 + lVar15) = param_5 + lVar16;
    }
    *(float **)((long)alStack_a0 + lVar15 + 0x10) = param_4 + (long)iVar8 + 2;
    *(long *)((long)alStack_d0 + lVar15 + 0x10) = lVar14 + (long)iVar8 * 4;
    lVar16 = lVar16 + (-(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2);
    lVar15 = lVar15 + 8;
    iVar8 = iVar8 - iVar19;
  } while (lVar15 != 0x18);
  if ((int)uVar21 < 1) {
    uVar21 = iVar19 << 1;
    uVar11 = (ulong)uVar21;
    pauVar6 = (undefined1 (*) [16])(param_4 + (long)(int)uVar21 + 2);
    lVar14 = lVar14 + (long)(int)uVar21 * 4;
  }
  else {
    lVar15 = 0;
    uVar3 = iVar19 - 4;
    uVar20 = (ulong)uVar3;
    if (2 < uVar11) {
      uVar11 = 3;
    }
    lVar16 = param_1;
    do {
      FUN_10967d730(lVar16,*(undefined8 *)((long)alStack_a0 + lVar15),uVar20,0x113734d10);
      pfVar10 = (float *)0x113734d24;
      uVar9 = uVar20;
      FUN_10967d730(lVar16,*(undefined8 *)((long)alStack_d0 + lVar15));
      lVar15 = lVar15 + 8;
      lVar16 = lVar16 + (long)iVar19 * 4;
    } while (uVar11 * 8 + 8 != lVar15);
    uVar2 = iVar19 << 1;
    uVar11 = (ulong)uVar2;
    pauVar6 = (undefined1 (*) [16])(param_4 + (long)(int)uVar2 + 2);
    lVar14 = lVar14 + (long)(int)uVar2 * 4;
    if (4 < uVar21) {
      uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar20 << 2;
      uVar17 = 4;
      do {
        lVar18 = alStack_a0[4];
        lVar15 = param_1 + uVar17 * (long)iVar19 * 4;
        FUN_10967d730(lVar15,alStack_a0[4],uVar20,0x113734d10);
        lVar16 = alStack_d0[4];
        pfVar10 = (float *)0x113734d24;
        if (iVar19 < 5) {
          uVar9 = uVar20;
          FUN_10967d730(lVar15,alStack_d0[4]);
          lVar15 = alStack_d0[0];
          lVar18 = alStack_a0[0];
        }
        else {
          lVar13 = 0;
          do {
            *(float *)(*pauVar6 + lVar13) =
                 (*(float *)(alStack_a0[1] + lVar13) + *(float *)(alStack_a0[3] + lVar13)) *
                 fRam0000000113734d28 +
                 fRam0000000113734d24 *
                 (*(float *)(alStack_a0[0] + lVar13) + *(float *)(lVar18 + lVar13)) +
                 fRam0000000113734d2c * *(float *)(alStack_a0[2] + lVar13);
            lVar13 = lVar13 + 4;
          } while (uVar20 << 2 != lVar13);
          uVar9 = uVar20;
          FUN_10967d730(lVar15,alStack_d0[4]);
          lVar13 = 0;
          do {
            *(float *)(lVar14 + lVar13) =
                 (*(float *)(alStack_d0[1] + lVar13) - *(float *)(alStack_d0[3] + lVar13)) *
                 uRam0000000113734d10._4_4_ +
                 (float)uRam0000000113734d10 *
                 (*(float *)(alStack_d0[0] + lVar13) - *(float *)(lVar16 + lVar13));
            lVar13 = lVar13 + 4;
            lVar15 = alStack_d0[0];
            lVar18 = alStack_a0[0];
          } while (uVar20 << 2 != lVar13);
        }
        lVar13 = alStack_a0[3];
        alStack_a0[0] = alStack_a0[1];
        lVar16 = alStack_d0[3];
        alStack_d0[0] = alStack_d0[1];
        lVar23 = alStack_a0[2];
        alStack_a0[1] = alStack_a0[2];
        alStack_a0[3] = alStack_a0[4];
        alStack_a0[2] = lVar13;
        lVar28 = alStack_d0[2];
        alStack_d0[1] = alStack_d0[2];
        alStack_d0[3] = alStack_d0[4];
        alStack_d0[2] = lVar16;
        puVar1 = (undefined8 *)(lVar14 + (long)(int)uVar3 * 4);
        *(undefined8 *)(*pauVar6 + (long)(int)uVar3 * 4) = 0;
        *(undefined8 *)((long)(*pauVar6 + (long)(int)uVar3 * 4) + 8) = 0;
        pauVar6 = (undefined1 (*) [16])(pauVar6[1] + uVar12);
        lVar14 = lVar14 + uVar12 + 0x10;
        uVar17 = uVar17 + 1;
        *puVar1 = 0;
        puVar1[1] = 0;
        alStack_d0[4] = lVar15;
        alStack_a0[4] = lVar18;
      } while (uVar17 != (param_3 & 0xffffffff));
    }
  }
  uVar11 = -(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2;
  _bzero(param_4,uVar11 + 8);
  _bzero(param_5,uVar11 + 8);
  pfVar7 = (float *)(uVar11 - 8);
  _bzero();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    fVar22 = *pfVar10;
    uVar29 = *(undefined8 *)(pfVar10 + 3);
    uVar25 = *(undefined8 *)(pfVar10 + 1);
    while( true ) {
      iVar8 = (int)uVar9;
      fVar24 = (float)uVar25;
      fVar26 = (float)((ulong)uVar25 >> 0x20);
      fVar27 = (float)uVar29;
      fVar30 = (float)((ulong)uVar29 >> 0x20);
      if ((uVar9 & 3) == 0) break;
      fVar31 = *(float *)*pauVar6 * *pfVar10;
      *pfVar7 = fVar31;
      *pfVar7 = fVar31 + fVar24 * *(float *)*(undefined1 (*) [16])(*pauVar6 + 4) +
                         fVar26 * *(float *)(*pauVar6 + 8) +
                         fVar27 * *(float *)(*pauVar6 + 0xc) + fVar30 * *(float *)pauVar6[1];
      uVar9 = (ulong)(iVar8 - 1);
      pauVar6 = (undefined1 (*) [16])(*pauVar6 + 4);
      pfVar7 = pfVar7 + 1;
    }
    if (iVar8 != 0) {
      iVar8 = iVar8 >> 2;
      fVar31 = (float)*(undefined8 *)*pauVar6;
      fVar32 = (float)((ulong)*(undefined8 *)*pauVar6 >> 0x20);
      fVar33 = (float)*(undefined8 *)(*pauVar6 + 8);
      fVar34 = (float)((ulong)*(undefined8 *)(*pauVar6 + 8) >> 0x20);
      do {
        pauVar6 = pauVar6 + 1;
        auVar5 = *pauVar6;
        auVar35._4_4_ = fVar32;
        auVar35._0_4_ = fVar31;
        auVar35._8_4_ = fVar33;
        auVar35._12_4_ = fVar34;
        auVar35 = NEON_ext(auVar35,auVar5,4,1);
        auVar37._4_4_ = fVar32;
        auVar37._0_4_ = fVar31;
        auVar37._8_4_ = fVar33;
        auVar37._12_4_ = fVar34;
        auVar37 = NEON_ext(auVar37,auVar5,8,1);
        auVar39._4_4_ = fVar32;
        auVar39._0_4_ = fVar31;
        auVar39._8_4_ = fVar33;
        auVar39._12_4_ = fVar34;
        auVar39 = NEON_ext(auVar39,auVar5,0xc,1);
        auVar36._0_4_ = fVar24 * auVar35._0_4_;
        auVar36._4_4_ = fVar26 * auVar35._4_4_;
        auVar36._8_4_ = fVar27 * auVar35._8_4_;
        auVar36._12_4_ = fVar30 * auVar35._12_4_;
        auVar38._0_4_ = fVar24 * auVar37._0_4_;
        auVar38._4_4_ = fVar26 * auVar37._4_4_;
        auVar38._8_4_ = fVar27 * auVar37._8_4_;
        auVar38._12_4_ = fVar30 * auVar37._12_4_;
        auVar40._0_4_ = fVar24 * auVar39._0_4_;
        auVar40._4_4_ = fVar26 * auVar39._4_4_;
        auVar40._8_4_ = fVar27 * auVar39._8_4_;
        auVar40._12_4_ = fVar30 * auVar39._12_4_;
        fVar41 = fVar24 * auVar5._0_4_;
        fVar42 = fVar26 * auVar5._4_4_;
        fVar43 = fVar27 * auVar5._8_4_;
        fVar44 = fVar30 * auVar5._12_4_;
        auVar35 = NEON_ext(auVar36,auVar36,8,1);
        auVar37 = NEON_ext(auVar38,auVar38,8,1);
        auVar39 = NEON_ext(auVar40,auVar40,8,1);
        auVar45._4_4_ = fVar42;
        auVar45._0_4_ = fVar41;
        auVar45._8_4_ = fVar43;
        auVar45._12_4_ = fVar44;
        auVar4._4_4_ = fVar42;
        auVar4._0_4_ = fVar41;
        auVar4._8_4_ = fVar43;
        auVar4._12_4_ = fVar44;
        auVar45 = NEON_ext(auVar45,auVar4,8,1);
        *(ulong *)(pfVar7 + 2) =
             CONCAT44(fVar34 * fVar22 + fVar41 + auVar45._0_4_ + fVar42 + auVar45._4_4_,
                      fVar33 * fVar22 +
                      auVar40._0_4_ + auVar39._0_4_ + auVar40._4_4_ + auVar39._4_4_);
        *(ulong *)pfVar7 =
             CONCAT44(fVar32 * fVar22 +
                      auVar38._0_4_ + auVar37._0_4_ + auVar38._4_4_ + auVar37._4_4_,
                      fVar31 * fVar22 +
                      auVar36._0_4_ + auVar35._0_4_ + auVar36._4_4_ + auVar35._4_4_);
        iVar8 = iVar8 + -1;
        pfVar7 = pfVar7 + 4;
        fVar31 = auVar5._0_4_;
        fVar32 = auVar5._4_4_;
        fVar33 = auVar5._8_4_;
        fVar34 = auVar5._12_4_;
      } while (iVar8 != 0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(lVar14,(float *)(uVar11 - 8));
  return;
}



/* Entry: 10967d730; end: 10967d7e3;  */

void FUN_10967d730(undefined1 (*param_1) [16],float *param_2,uint param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  
  fVar4 = *param_4;
  uVar9 = *(undefined8 *)(param_4 + 3);
  uVar6 = *(undefined8 *)(param_4 + 1);
  while( true ) {
    fVar5 = (float)uVar6;
    fVar7 = (float)((ulong)uVar6 >> 0x20);
    fVar8 = (float)uVar9;
    fVar10 = (float)((ulong)uVar9 >> 0x20);
    if ((param_3 & 3) == 0) break;
    fVar11 = *(float *)*param_1 * *param_4;
    *param_2 = fVar11;
    *param_2 = fVar11 + fVar5 * *(float *)*(undefined1 (*) [16])(*param_1 + 4) +
                        fVar7 * *(float *)(*param_1 + 8) +
                        fVar8 * *(float *)(*param_1 + 0xc) + fVar10 * *(float *)param_1[1];
    param_3 = param_3 - 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 4);
    param_2 = param_2 + 1;
  }
  if (param_3 != 0) {
    iVar3 = (int)param_3 >> 2;
    fVar11 = (float)*(undefined8 *)*param_1;
    fVar12 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
    fVar13 = (float)*(undefined8 *)(*param_1 + 8);
    fVar14 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
    do {
      param_1 = param_1 + 1;
      auVar2 = *param_1;
      auVar15._4_4_ = fVar12;
      auVar15._0_4_ = fVar11;
      auVar15._8_4_ = fVar13;
      auVar15._12_4_ = fVar14;
      auVar15 = NEON_ext(auVar15,auVar2,4,1);
      auVar17._4_4_ = fVar12;
      auVar17._0_4_ = fVar11;
      auVar17._8_4_ = fVar13;
      auVar17._12_4_ = fVar14;
      auVar17 = NEON_ext(auVar17,auVar2,8,1);
      auVar19._4_4_ = fVar12;
      auVar19._0_4_ = fVar11;
      auVar19._8_4_ = fVar13;
      auVar19._12_4_ = fVar14;
      auVar19 = NEON_ext(auVar19,auVar2,0xc,1);
      auVar16._0_4_ = fVar5 * auVar15._0_4_;
      auVar16._4_4_ = fVar7 * auVar15._4_4_;
      auVar16._8_4_ = fVar8 * auVar15._8_4_;
      auVar16._12_4_ = fVar10 * auVar15._12_4_;
      auVar18._0_4_ = fVar5 * auVar17._0_4_;
      auVar18._4_4_ = fVar7 * auVar17._4_4_;
      auVar18._8_4_ = fVar8 * auVar17._8_4_;
      auVar18._12_4_ = fVar10 * auVar17._12_4_;
      auVar20._0_4_ = fVar5 * auVar19._0_4_;
      auVar20._4_4_ = fVar7 * auVar19._4_4_;
      auVar20._8_4_ = fVar8 * auVar19._8_4_;
      auVar20._12_4_ = fVar10 * auVar19._12_4_;
      fVar21 = fVar5 * auVar2._0_4_;
      fVar22 = fVar7 * auVar2._4_4_;
      fVar23 = fVar8 * auVar2._8_4_;
      fVar24 = fVar10 * auVar2._12_4_;
      auVar15 = NEON_ext(auVar16,auVar16,8,1);
      auVar17 = NEON_ext(auVar18,auVar18,8,1);
      auVar19 = NEON_ext(auVar20,auVar20,8,1);
      auVar25._4_4_ = fVar22;
      auVar25._0_4_ = fVar21;
      auVar25._8_4_ = fVar23;
      auVar25._12_4_ = fVar24;
      auVar1._4_4_ = fVar22;
      auVar1._0_4_ = fVar21;
      auVar1._8_4_ = fVar23;
      auVar1._12_4_ = fVar24;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      *(ulong *)(param_2 + 2) =
           CONCAT44(fVar14 * fVar4 + fVar21 + auVar25._0_4_ + fVar22 + auVar25._4_4_,
                    fVar13 * fVar4 + auVar20._0_4_ + auVar19._0_4_ + auVar20._4_4_ + auVar19._4_4_);
      *(ulong *)param_2 =
           CONCAT44(fVar12 * fVar4 + auVar18._0_4_ + auVar17._0_4_ + auVar18._4_4_ + auVar17._4_4_,
                    fVar11 * fVar4 + auVar16._0_4_ + auVar15._0_4_ + auVar16._4_4_ + auVar15._4_4_);
      iVar3 = iVar3 + -1;
      param_2 = param_2 + 4;
      fVar11 = auVar2._0_4_;
      fVar12 = auVar2._4_4_;
      fVar13 = auVar2._8_4_;
      fVar14 = auVar2._12_4_;
    } while (iVar3 != 0);
  }
  return;
}



/* Entry: 10967d7e4; end: 10967db0b;  */

void FUN_10967d7e4(byte *param_1,float *param_2,ulong param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  float *pfVar15;
  uint uVar16;
  ulong uVar17;
  float *pfVar18;
  byte *pbVar19;
  undefined1 uVar20;
  float fVar21;
  long lVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long alStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar6 = param_1;
  uVar9 = param_3;
  if ((bRam0000000113734d08 & 1) == 0) {
    pbVar6 = (byte *)0x113734d08;
    ___cxa_guard_acquire();
    uVar9 = param_3 & 0xffffffff;
    if ((int)pbVar6 != 0) {
      lVar11 = 0;
      do {
        *(float *)(lVar11 + 0x113734d40) = *(float *)(&UNK_10dfda7dc + lVar11) * 1.7546554;
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0x14);
      pbVar6 = (byte *)0x113734d08;
      uRam0000000113734cf1 = 1;
      ___cxa_guard_release();
      uVar9 = param_3 & 0xffffffff;
    }
  }
  lVar11 = 0;
  pfVar18 = param_4 + 2;
  uVar7 = (uint)param_2;
  uVar1 = (int)uVar9 - 1;
  uVar10 = (ulong)uVar1;
  iVar8 = uVar7 * uVar1;
  pfVar15 = pfVar18;
  do {
    if (lVar11 != 0x10) {
      *(float **)((long)alStack_a0 + lVar11) = pfVar15;
    }
    *(float **)((long)alStack_a0 + lVar11 + 0x10) = pfVar18 + iVar8;
    pfVar15 = (float *)((long)pfVar15 +
                       (-((ulong)param_2 >> 0x1f & 1) & 0xfffffffc00000000 |
                       ((ulong)param_2 & 0xffffffff) << 2));
    lVar11 = lVar11 + 8;
    iVar8 = iVar8 - uVar7;
  } while (lVar11 != 0x18);
  pbVar14 = param_1;
  if ((int)uVar9 < 1) {
    pfVar18 = pfVar18 + (int)(uVar7 << 1);
  }
  else {
    lVar11 = 0;
    uVar1 = uVar7 - 4;
    uVar17 = (ulong)uVar1;
    if (2 < uVar10) {
      uVar10 = 3;
    }
    do {
      pbVar6 = pbVar14;
      uVar9 = uVar17;
      FUN_10967db0c(pbVar14,*(undefined8 *)((long)alStack_a0 + lVar11));
      pbVar14 = pbVar14 + (int)uVar7;
      lVar11 = lVar11 + 8;
    } while (uVar10 * 8 + 8 != lVar11);
    iVar8 = uVar7 << 1;
    pfVar18 = pfVar18 + iVar8;
    if (4 < (uint)param_3) {
      pbVar19 = pbVar14 + ((long)(int)uVar1 - (long)iVar8) + 2;
      lVar11 = (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | uVar17 << 2) + 0x10;
      pfVar15 = param_4 + (long)(int)uVar1 + (long)iVar8 + 2;
      uVar16 = 4;
      do {
        lVar13 = alStack_a0[4];
        pbVar6 = pbVar14;
        uVar9 = uVar17;
        FUN_10967db0c(pbVar14,alStack_a0[4]);
        fVar3 = fRam0000000113734d48;
        fVar2 = fRam0000000113734d44;
        fVar21 = fRam0000000113734d40;
        if (4 < (int)uVar7) {
          lVar12 = 0;
          do {
            *(float *)((long)pfVar18 + lVar12) =
                 (*(float *)(alStack_a0[1] + lVar12) + *(float *)(alStack_a0[3] + lVar12)) * fVar2 +
                 fVar21 * (*(float *)(alStack_a0[0] + lVar12) + *(float *)(lVar13 + lVar12)) +
                 fVar3 * *(float *)(alStack_a0[2] + lVar12);
            lVar12 = lVar12 + 4;
          } while (uVar17 << 2 != lVar12);
        }
        lVar13 = 0;
        lVar12 = alStack_a0[2];
        lVar22 = alStack_a0[4];
        alStack_a0[2] = alStack_a0[3];
        alStack_a0[4] = alStack_a0[0];
        do {
          fVar21 = (float)NEON_ucvtf((uint)pbVar19[lVar13]);
          pfVar15[lVar13] = fVar21;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 4);
        pbVar14 = pbVar14 + (long)(int)uVar1 + 4;
        pfVar18 = (float *)((long)pfVar18 + lVar11);
        uVar16 = uVar16 + 1;
        pfVar15 = (float *)((long)pfVar15 + lVar11);
        pbVar19 = pbVar19 + (long)(int)uVar1 + 4;
        alStack_a0[0] = alStack_a0[1];
        alStack_a0[1] = lVar12;
        alStack_a0[3] = lVar22;
      } while (uVar16 != (uint)param_3);
    }
  }
  if (-1 < (int)uVar7) {
    uVar10 = (ulong)(uVar7 * 2 + 2);
    do {
      *param_4 = (float)*param_1;
      uVar10 = uVar10 - 1;
      param_4 = param_4 + 1;
      param_1 = param_1 + 1;
    } while (uVar10 != 0);
    if (1 < uVar7) {
      uVar1 = uVar7 * 2 - 2;
      uVar10 = (ulong)uVar1;
      pbVar14 = pbVar14 + -(long)(int)uVar1;
      do {
        *pfVar18 = (float)*pbVar14;
        uVar10 = uVar10 - 1;
        pbVar14 = pbVar14 + 1;
        pfVar18 = pfVar18 + 1;
      } while (uVar10 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    fVar5 = fRam0000000113734d50;
    fVar4 = fRam0000000113734d4c;
    fVar3 = fRam0000000113734d48;
    fVar2 = fRam0000000113734d44;
    fVar21 = fRam0000000113734d40;
    while (iVar8 = (int)uVar9, (uVar9 & 3) != 0) {
      fVar23 = (float)NEON_ucvtf((uint)*pbVar6);
      *param_2 = fVar21 * fVar23;
      pbVar6 = pbVar6 + 1;
      uVar24 = *(undefined4 *)pbVar6;
      uVar20 = (undefined1)((uint)uVar24 >> 8);
      auVar25._6_2_ = 0;
      auVar25._0_6_ =
           (uint6)CONCAT14(uVar20,(uint)CONCAT12(uVar20,(ushort)(byte)uVar24)) & 0xffff0000ffff;
      auVar25[8] = (char)((uint)uVar24 >> 0x10);
      auVar25._9_3_ = 0;
      auVar25[0xc] = (char)((uint)uVar24 >> 0x18);
      auVar25._13_3_ = 0;
      auVar25 = NEON_ucvtf(auVar25,4);
      *param_2 = fVar21 * fVar23 +
                 fVar2 * auVar25._0_4_ + fVar3 * auVar25._4_4_ +
                 fVar4 * auVar25._8_4_ + fVar5 * auVar25._12_4_;
      param_2 = param_2 + 1;
      uVar9 = (ulong)(iVar8 - 1);
    }
    if (iVar8 != 0) {
      iVar8 = iVar8 >> 2;
      uVar24 = *(undefined4 *)pbVar6;
      uVar20 = (undefined1)((uint)uVar24 >> 8);
      auVar26._6_2_ = 0;
      auVar26._0_6_ =
           (uint6)CONCAT14(uVar20,(uint)CONCAT12(uVar20,(ushort)(byte)uVar24)) & 0xffff0000ffff;
      auVar26[8] = (char)((uint)uVar24 >> 0x10);
      auVar26._9_3_ = 0;
      auVar26[0xc] = (char)((uint)uVar24 >> 0x18);
      auVar26._13_3_ = 0;
      auVar25 = NEON_ucvtf(auVar26,4);
      do {
        pbVar6 = pbVar6 + 4;
        uVar24 = *(undefined4 *)pbVar6;
        uVar20 = (undefined1)((uint)uVar24 >> 8);
        auVar31._6_2_ = 0;
        auVar31._0_6_ =
             (uint6)CONCAT14(uVar20,(uint)CONCAT12(uVar20,(ushort)(byte)uVar24)) & 0xffff0000ffff;
        auVar31[8] = (char)((uint)uVar24 >> 0x10);
        auVar31._9_3_ = 0;
        auVar31[0xc] = (char)((uint)uVar24 >> 0x18);
        auVar31._13_3_ = 0;
        auVar26 = NEON_ucvtf(auVar31,4);
        auVar27 = NEON_ext(auVar25,auVar26,4,1);
        auVar29 = NEON_ext(auVar25,auVar26,8,1);
        auVar31 = NEON_ext(auVar25,auVar26,0xc,1);
        auVar28._0_4_ = fVar2 * auVar27._0_4_;
        auVar28._4_4_ = fVar3 * auVar27._4_4_;
        auVar28._8_4_ = fVar4 * auVar27._8_4_;
        auVar28._12_4_ = fVar5 * auVar27._12_4_;
        auVar30._0_4_ = fVar2 * auVar29._0_4_;
        auVar30._4_4_ = fVar3 * auVar29._4_4_;
        auVar30._8_4_ = fVar4 * auVar29._8_4_;
        auVar30._12_4_ = fVar5 * auVar29._12_4_;
        auVar32._0_4_ = fVar2 * auVar31._0_4_;
        auVar32._4_4_ = fVar3 * auVar31._4_4_;
        auVar32._8_4_ = fVar4 * auVar31._8_4_;
        auVar32._12_4_ = fVar5 * auVar31._12_4_;
        fVar23 = fVar2 * auVar26._0_4_;
        fVar33 = fVar3 * auVar26._4_4_;
        fVar34 = fVar4 * auVar26._8_4_;
        fVar35 = fVar5 * auVar26._12_4_;
        auVar31 = NEON_ext(auVar28,auVar28,8,1);
        auVar36 = NEON_ext(auVar30,auVar30,8,1);
        auVar37 = NEON_ext(auVar32,auVar32,8,1);
        auVar27._4_4_ = fVar33;
        auVar27._0_4_ = fVar23;
        auVar27._8_4_ = fVar34;
        auVar27._12_4_ = fVar35;
        auVar29._4_4_ = fVar33;
        auVar29._0_4_ = fVar23;
        auVar29._8_4_ = fVar34;
        auVar29._12_4_ = fVar35;
        auVar27 = NEON_ext(auVar27,auVar29,8,1);
        param_2[2] = auVar25._8_4_ * fVar21 +
                     auVar32._0_4_ + auVar37._0_4_ + auVar32._4_4_ + auVar37._4_4_;
        param_2[3] = auVar25._12_4_ * fVar21 + fVar23 + auVar27._0_4_ + fVar33 + auVar27._4_4_;
        *param_2 = auVar25._0_4_ * fVar21 +
                   auVar28._0_4_ + auVar31._0_4_ + auVar28._4_4_ + auVar31._4_4_;
        param_2[1] = auVar25._4_4_ * fVar21 +
                     auVar30._0_4_ + auVar36._0_4_ + auVar30._4_4_ + auVar36._4_4_;
        iVar8 = iVar8 + -1;
        param_2 = param_2 + 4;
        auVar25 = auVar26;
      } while (iVar8 != 0);
    }
    return;
  }
  return;
}



/* Entry: 10967db0c; end: 10967dbeb;  */

void FUN_10967db0c(byte *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined1 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  fVar5 = fRam0000000113734d50;
  fVar4 = fRam0000000113734d4c;
  fVar3 = fRam0000000113734d48;
  fVar2 = fRam0000000113734d44;
  fVar1 = fRam0000000113734d40;
  while( true ) {
    if ((param_3 & 3) == 0) break;
    fVar8 = (float)NEON_ucvtf((uint)*param_1);
    *param_2 = fVar1 * fVar8;
    param_1 = param_1 + 1;
    uVar9 = *(undefined4 *)param_1;
    uVar7 = (undefined1)((uint)uVar9 >> 8);
    auVar16._6_2_ = 0;
    auVar16._0_6_ =
         (uint6)CONCAT14(uVar7,(uint)CONCAT12(uVar7,(ushort)(byte)uVar9)) & 0xffff0000ffff;
    auVar16[8] = (char)((uint)uVar9 >> 0x10);
    auVar16._9_3_ = 0;
    auVar16[0xc] = (char)((uint)uVar9 >> 0x18);
    auVar16._13_3_ = 0;
    auVar10 = NEON_ucvtf(auVar16,4);
    *param_2 = fVar1 * fVar8 +
               fVar2 * auVar10._0_4_ + fVar3 * auVar10._4_4_ +
               fVar4 * auVar10._8_4_ + fVar5 * auVar10._12_4_;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
  }
  if (param_3 != 0) {
    iVar6 = (int)param_3 >> 2;
    uVar9 = *(undefined4 *)param_1;
    uVar7 = (undefined1)((uint)uVar9 >> 8);
    auVar10._6_2_ = 0;
    auVar10._0_6_ =
         (uint6)CONCAT14(uVar7,(uint)CONCAT12(uVar7,(ushort)(byte)uVar9)) & 0xffff0000ffff;
    auVar10[8] = (char)((uint)uVar9 >> 0x10);
    auVar10._9_3_ = 0;
    auVar10[0xc] = (char)((uint)uVar9 >> 0x18);
    auVar10._13_3_ = 0;
    auVar10 = NEON_ucvtf(auVar10,4);
    do {
      param_1 = param_1 + 4;
      uVar9 = *(undefined4 *)param_1;
      uVar7 = (undefined1)((uint)uVar9 >> 8);
      auVar11._6_2_ = 0;
      auVar11._0_6_ =
           (uint6)CONCAT14(uVar7,(uint)CONCAT12(uVar7,(ushort)(byte)uVar9)) & 0xffff0000ffff;
      auVar11[8] = (char)((uint)uVar9 >> 0x10);
      auVar11._9_3_ = 0;
      auVar11[0xc] = (char)((uint)uVar9 >> 0x18);
      auVar11._13_3_ = 0;
      auVar11 = NEON_ucvtf(auVar11,4);
      auVar12 = NEON_ext(auVar10,auVar11,4,1);
      auVar14 = NEON_ext(auVar10,auVar11,8,1);
      auVar16 = NEON_ext(auVar10,auVar11,0xc,1);
      auVar13._0_4_ = fVar2 * auVar12._0_4_;
      auVar13._4_4_ = fVar3 * auVar12._4_4_;
      auVar13._8_4_ = fVar4 * auVar12._8_4_;
      auVar13._12_4_ = fVar5 * auVar12._12_4_;
      auVar15._0_4_ = fVar2 * auVar14._0_4_;
      auVar15._4_4_ = fVar3 * auVar14._4_4_;
      auVar15._8_4_ = fVar4 * auVar14._8_4_;
      auVar15._12_4_ = fVar5 * auVar14._12_4_;
      auVar17._0_4_ = fVar2 * auVar16._0_4_;
      auVar17._4_4_ = fVar3 * auVar16._4_4_;
      auVar17._8_4_ = fVar4 * auVar16._8_4_;
      auVar17._12_4_ = fVar5 * auVar16._12_4_;
      fVar8 = fVar2 * auVar11._0_4_;
      fVar18 = fVar3 * auVar11._4_4_;
      fVar19 = fVar4 * auVar11._8_4_;
      fVar20 = fVar5 * auVar11._12_4_;
      auVar16 = NEON_ext(auVar13,auVar13,8,1);
      auVar21 = NEON_ext(auVar15,auVar15,8,1);
      auVar22 = NEON_ext(auVar17,auVar17,8,1);
      auVar12._4_4_ = fVar18;
      auVar12._0_4_ = fVar8;
      auVar12._8_4_ = fVar19;
      auVar12._12_4_ = fVar20;
      auVar14._4_4_ = fVar18;
      auVar14._0_4_ = fVar8;
      auVar14._8_4_ = fVar19;
      auVar14._12_4_ = fVar20;
      auVar12 = NEON_ext(auVar12,auVar14,8,1);
      param_2[2] = auVar10._8_4_ * fVar1 +
                   auVar17._0_4_ + auVar22._0_4_ + auVar17._4_4_ + auVar22._4_4_;
      param_2[3] = auVar10._12_4_ * fVar1 + fVar8 + auVar12._0_4_ + fVar18 + auVar12._4_4_;
      *param_2 = auVar10._0_4_ * fVar1 +
                 auVar13._0_4_ + auVar16._0_4_ + auVar13._4_4_ + auVar16._4_4_;
      param_2[1] = auVar10._4_4_ * fVar1 +
                   auVar15._0_4_ + auVar21._0_4_ + auVar15._4_4_ + auVar21._4_4_;
      iVar6 = iVar6 + -1;
      param_2 = param_2 + 4;
      auVar10 = auVar11;
    } while (iVar6 != 0);
  }
  return;
}



/* Entry: 10967dbec; end: 10967dcaf;  */

void FUN_10967dbec(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 (*pauVar9) [16];
  undefined4 *puVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  undefined4 *puVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  ulong uVar28;
  ulong uVar29;
  float fVar30;
  long lVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  long lVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  long alStack_d0 [6];
  long alStack_a0 [6];
  long lStack_70;
  
  iVar11 = *(int *)(param_1 + 0xd0);
  uVar3 = *(uint *)(param_1 + 0xd4);
  FUN_10967d338(*(undefined8 *)(param_1 + 0xd8),iVar11,uVar3,*(undefined8 *)(param_1 + 0xf8),
                *(undefined8 *)(param_1 + 0x118));
  puVar10 = *(undefined4 **)(param_1 + 0xe8);
  if (3 < (int)uVar3) {
    uVar19 = 0;
    iVar2 = iVar11 + 3;
    if (-1 < iVar11) {
      iVar2 = iVar11;
    }
    puVar23 = (undefined4 *)(*(long *)(param_1 + 0xd8) + (long)iVar11 * 8 + 8);
    puVar25 = puVar10;
    do {
      uVar15 = (ulong)(uint)(iVar2 >> 2);
      puVar26 = puVar23;
      puVar27 = puVar25;
      if (3 < iVar11) {
        do {
          *puVar27 = *puVar26;
          uVar15 = uVar15 - 1;
          puVar26 = puVar26 + 4;
          puVar27 = puVar27 + 1;
        } while (uVar15 != 0);
      }
      uVar19 = uVar19 + 1;
      puVar25 = puVar25 + (uint)(iVar2 >> 2);
      puVar23 = puVar23 + (long)iVar11 * 4;
    } while (uVar19 != uVar3 >> 2);
  }
  uVar3 = *(uint *)(param_1 + 0xe0);
  uVar4 = *(uint *)(param_1 + 0xe4);
  uVar19 = (ulong)uVar4;
  pfVar13 = *(float **)(param_1 + 0x108);
  lVar14 = *(long *)(param_1 + 0x128);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar12 = pfVar13;
  if ((bRam0000000113734d00 & 1) == 0) {
    iVar11 = 0x13734d00;
    ___cxa_guard_acquire();
    if (iVar11 != 0) {
      lVar18 = 0;
      uRam0000000113734d20 = 0x3cb824cc;
      uRam0000000113734d18 = 0x3e75c25e00000000;
      uRam0000000113734d10 = 0xbe75c25ebcb824cc;
      pfVar22 = (float *)&UNK_10dfda75c;
      do {
        *(float *)(lVar18 + 0x113734d24) = *pfVar22 / 0.23999926;
        lVar18 = lVar18 + 4;
        pfVar22 = pfVar22 + 5;
      } while (lVar18 != 0x14);
      uRam0000000113734cf0 = 1;
      ___cxa_guard_release(0x113734d00);
    }
  }
  lVar20 = 0;
  lVar18 = lVar14 + 8;
  uVar15 = (ulong)(uVar4 - 1);
  iVar11 = uVar3 * (uVar4 - 1);
  lVar24 = 8;
  do {
    if (lVar20 != 0x10) {
      *(long *)((long)alStack_a0 + lVar20) = (long)pfVar13 + lVar24;
      *(long *)((long)alStack_d0 + lVar20) = lVar14 + lVar24;
    }
    *(float **)((long)alStack_a0 + lVar20 + 0x10) = pfVar13 + (long)iVar11 + 2;
    *(long *)((long)alStack_d0 + lVar20 + 0x10) = lVar18 + (long)iVar11 * 4;
    lVar24 = lVar24 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
    lVar20 = lVar20 + 8;
    iVar11 = iVar11 - uVar3;
  } while (lVar20 != 0x18);
  if ((int)uVar4 < 1) {
    uVar3 = uVar3 << 1;
    uVar15 = (ulong)uVar3;
    pauVar9 = (undefined1 (*) [16])(pfVar13 + (long)(int)uVar3 + 2);
    lVar18 = lVar18 + (long)(int)uVar3 * 4;
  }
  else {
    lVar20 = 0;
    uVar6 = uVar3 - 4;
    uVar29 = (ulong)uVar6;
    if (2 < uVar15) {
      uVar15 = 3;
    }
    puVar23 = puVar10;
    do {
      FUN_10967d730(puVar23,*(undefined8 *)((long)alStack_a0 + lVar20),uVar29,0x113734d10);
      pfVar12 = (float *)0x113734d24;
      uVar19 = uVar29;
      FUN_10967d730(puVar23,*(undefined8 *)((long)alStack_d0 + lVar20));
      lVar20 = lVar20 + 8;
      puVar23 = puVar23 + (int)uVar3;
    } while (uVar15 * 8 + 8 != lVar20);
    uVar5 = uVar3 << 1;
    uVar15 = (ulong)uVar5;
    pauVar9 = (undefined1 (*) [16])(pfVar13 + (long)(int)uVar5 + 2);
    lVar18 = lVar18 + (long)(int)uVar5 * 4;
    if (4 < uVar4) {
      uVar16 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2;
      uVar28 = 4;
      do {
        lVar24 = alStack_a0[4];
        puVar23 = puVar10 + uVar28 * (long)(int)uVar3;
        FUN_10967d730(puVar23,alStack_a0[4],uVar29,0x113734d10);
        lVar20 = alStack_d0[4];
        pfVar12 = (float *)0x113734d24;
        if ((int)uVar3 < 5) {
          uVar19 = uVar29;
          FUN_10967d730(puVar23,alStack_d0[4]);
          lVar24 = alStack_d0[0];
          lVar17 = alStack_a0[0];
        }
        else {
          lVar17 = 0;
          do {
            *(float *)(*pauVar9 + lVar17) =
                 (*(float *)(alStack_a0[1] + lVar17) + *(float *)(alStack_a0[3] + lVar17)) *
                 fRam0000000113734d28 +
                 fRam0000000113734d24 *
                 (*(float *)(alStack_a0[0] + lVar17) + *(float *)(lVar24 + lVar17)) +
                 fRam0000000113734d2c * *(float *)(alStack_a0[2] + lVar17);
            lVar17 = lVar17 + 4;
          } while (uVar29 << 2 != lVar17);
          uVar19 = uVar29;
          FUN_10967d730(puVar23,alStack_d0[4]);
          lVar21 = 0;
          do {
            *(float *)(lVar18 + lVar21) =
                 (*(float *)(alStack_d0[1] + lVar21) - *(float *)(alStack_d0[3] + lVar21)) *
                 uRam0000000113734d10._4_4_ +
                 (float)uRam0000000113734d10 *
                 (*(float *)(alStack_d0[0] + lVar21) - *(float *)(lVar20 + lVar21));
            lVar21 = lVar21 + 4;
            lVar24 = alStack_d0[0];
            lVar17 = alStack_a0[0];
          } while (uVar29 << 2 != lVar21);
        }
        lVar21 = alStack_a0[3];
        alStack_a0[0] = alStack_a0[1];
        lVar20 = alStack_d0[3];
        alStack_d0[0] = alStack_d0[1];
        lVar31 = alStack_a0[2];
        alStack_a0[1] = alStack_a0[2];
        alStack_a0[3] = alStack_a0[4];
        alStack_a0[2] = lVar21;
        lVar36 = alStack_d0[2];
        alStack_d0[1] = alStack_d0[2];
        alStack_d0[3] = alStack_d0[4];
        alStack_d0[2] = lVar20;
        puVar1 = (undefined8 *)(lVar18 + (long)(int)uVar6 * 4);
        *(undefined8 *)(*pauVar9 + (long)(int)uVar6 * 4) = 0;
        *(undefined8 *)((long)(*pauVar9 + (long)(int)uVar6 * 4) + 8) = 0;
        pauVar9 = (undefined1 (*) [16])(pauVar9[1] + uVar16);
        lVar18 = lVar18 + uVar16 + 0x10;
        uVar28 = uVar28 + 1;
        *puVar1 = 0;
        puVar1[1] = 0;
        alStack_d0[4] = lVar24;
        alStack_a0[4] = lVar17;
      } while (uVar28 != uVar4);
    }
  }
  uVar15 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
  _bzero(pfVar13,uVar15 + 8);
  _bzero(lVar14,uVar15 + 8);
  pfVar13 = (float *)(uVar15 - 8);
  _bzero();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    fVar30 = *pfVar12;
    uVar37 = *(undefined8 *)(pfVar12 + 3);
    uVar33 = *(undefined8 *)(pfVar12 + 1);
    while( true ) {
      iVar11 = (int)uVar19;
      fVar32 = (float)uVar33;
      fVar34 = (float)((ulong)uVar33 >> 0x20);
      fVar35 = (float)uVar37;
      fVar38 = (float)((ulong)uVar37 >> 0x20);
      if ((uVar19 & 3) == 0) break;
      fVar39 = *(float *)*pauVar9 * *pfVar12;
      *pfVar13 = fVar39;
      *pfVar13 = fVar39 + fVar32 * *(float *)*(undefined1 (*) [16])(*pauVar9 + 4) +
                          fVar34 * *(float *)(*pauVar9 + 8) +
                          fVar35 * *(float *)(*pauVar9 + 0xc) + fVar38 * *(float *)pauVar9[1];
      uVar19 = (ulong)(iVar11 - 1);
      pauVar9 = (undefined1 (*) [16])(*pauVar9 + 4);
      pfVar13 = pfVar13 + 1;
    }
    if (iVar11 != 0) {
      iVar11 = iVar11 >> 2;
      fVar39 = (float)*(undefined8 *)*pauVar9;
      fVar40 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
      fVar41 = (float)*(undefined8 *)(*pauVar9 + 8);
      fVar42 = (float)((ulong)*(undefined8 *)(*pauVar9 + 8) >> 0x20);
      do {
        pauVar9 = pauVar9 + 1;
        auVar8 = *pauVar9;
        auVar43._4_4_ = fVar40;
        auVar43._0_4_ = fVar39;
        auVar43._8_4_ = fVar41;
        auVar43._12_4_ = fVar42;
        auVar43 = NEON_ext(auVar43,auVar8,4,1);
        auVar45._4_4_ = fVar40;
        auVar45._0_4_ = fVar39;
        auVar45._8_4_ = fVar41;
        auVar45._12_4_ = fVar42;
        auVar45 = NEON_ext(auVar45,auVar8,8,1);
        auVar47._4_4_ = fVar40;
        auVar47._0_4_ = fVar39;
        auVar47._8_4_ = fVar41;
        auVar47._12_4_ = fVar42;
        auVar47 = NEON_ext(auVar47,auVar8,0xc,1);
        auVar44._0_4_ = fVar32 * auVar43._0_4_;
        auVar44._4_4_ = fVar34 * auVar43._4_4_;
        auVar44._8_4_ = fVar35 * auVar43._8_4_;
        auVar44._12_4_ = fVar38 * auVar43._12_4_;
        auVar46._0_4_ = fVar32 * auVar45._0_4_;
        auVar46._4_4_ = fVar34 * auVar45._4_4_;
        auVar46._8_4_ = fVar35 * auVar45._8_4_;
        auVar46._12_4_ = fVar38 * auVar45._12_4_;
        auVar48._0_4_ = fVar32 * auVar47._0_4_;
        auVar48._4_4_ = fVar34 * auVar47._4_4_;
        auVar48._8_4_ = fVar35 * auVar47._8_4_;
        auVar48._12_4_ = fVar38 * auVar47._12_4_;
        fVar49 = fVar32 * auVar8._0_4_;
        fVar50 = fVar34 * auVar8._4_4_;
        fVar51 = fVar35 * auVar8._8_4_;
        fVar52 = fVar38 * auVar8._12_4_;
        auVar43 = NEON_ext(auVar44,auVar44,8,1);
        auVar45 = NEON_ext(auVar46,auVar46,8,1);
        auVar47 = NEON_ext(auVar48,auVar48,8,1);
        auVar53._4_4_ = fVar50;
        auVar53._0_4_ = fVar49;
        auVar53._8_4_ = fVar51;
        auVar53._12_4_ = fVar52;
        auVar7._4_4_ = fVar50;
        auVar7._0_4_ = fVar49;
        auVar7._8_4_ = fVar51;
        auVar7._12_4_ = fVar52;
        auVar53 = NEON_ext(auVar53,auVar7,8,1);
        *(ulong *)(pfVar13 + 2) =
             CONCAT44(fVar42 * fVar30 + fVar49 + auVar53._0_4_ + fVar50 + auVar53._4_4_,
                      fVar41 * fVar30 +
                      auVar48._0_4_ + auVar47._0_4_ + auVar48._4_4_ + auVar47._4_4_);
        *(ulong *)pfVar13 =
             CONCAT44(fVar40 * fVar30 +
                      auVar46._0_4_ + auVar45._0_4_ + auVar46._4_4_ + auVar45._4_4_,
                      fVar39 * fVar30 +
                      auVar44._0_4_ + auVar43._0_4_ + auVar44._4_4_ + auVar43._4_4_);
        iVar11 = iVar11 + -1;
        pfVar13 = pfVar13 + 4;
        fVar39 = auVar8._0_4_;
        fVar40 = auVar8._4_4_;
        fVar41 = auVar8._8_4_;
        fVar42 = auVar8._12_4_;
      } while (iVar11 != 0);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(lVar18,(float *)(uVar15 - 8));
  return;
}



/* Entry: 10967dcb0; end: 10967dda7;  */

void FUN_10967dcb0(undefined8 *param_1,uint param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  unkbyte10 Var8;
  unkbyte10 Var9;
  uint uVar10;
  unkbyte10 *pVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  unkbyte10 *pVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  uVar2 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  iVar3 = param_3 + 3;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  if (3 < param_3) {
    iVar16 = 0;
    lVar1 = (-(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1) +
            (long)(int)param_2;
    uVar2 = uVar2 & 0xffffffe0;
    pVar11 = (unkbyte10 *)((long)param_1 + (long)(int)param_2);
    puVar12 = (undefined8 *)((long)param_1 + (long)(int)param_2 * 2);
    puVar13 = param_1;
    do {
      puVar13 = (undefined8 *)((long)puVar13 + lVar1);
      uVar10 = uVar2;
      if (0x1f < (int)param_2) {
        iVar20 = 0;
        puVar14 = param_1;
        puVar15 = param_4;
        pVar17 = pVar11;
        puVar18 = puVar13;
        puVar19 = puVar12;
        do {
          pVar11 = pVar17 + 2;
          uVar27 = *(undefined8 *)((long)pVar17 + 8);
          uVar21 = (ushort)((ulong)uVar27 >> 0x10);
          uVar22 = (ushort)((ulong)uVar27 >> 0x20);
          uVar23 = (ushort)((ulong)uVar27 >> 0x30);
          Var8 = *pVar17;
          uVar27 = *(undefined8 *)((long)pVar17 + 0x18);
          uVar24 = (ushort)((ulong)uVar27 >> 0x10);
          uVar25 = (ushort)((ulong)uVar27 >> 0x20);
          uVar26 = (ushort)((ulong)uVar27 >> 0x30);
          Var9 = pVar17[1];
          param_1 = puVar14 + 4;
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          uVar30 = puVar14[3];
          uVar29 = puVar14[2];
          puVar12 = puVar19 + 4;
          uVar32 = puVar19[1];
          uVar31 = *puVar19;
          uVar34 = puVar19[3];
          uVar33 = puVar19[2];
          puVar13 = puVar18 + 4;
          uVar36 = puVar18[1];
          uVar35 = *puVar18;
          uVar38 = puVar18[3];
          uVar37 = puVar18[2];
          param_4 = puVar15 + 1;
          *puVar15 = CONCAT17((char)((ushort)(((ushort)((uVar25 & 0xff) + (uVar25 >> 8) +
                                                        (ushort)(byte)((ulong)uVar30 >> 0x20) +
                                                        (ushort)(byte)((ulong)uVar30 >> 0x28) +
                                                        (ushort)(byte)((ulong)uVar34 >> 0x20) +
                                                        (ushort)(byte)((ulong)uVar34 >> 0x28) +
                                                       (ushort)(byte)((ulong)uVar38 >> 0x20) +
                                                       (ushort)(byte)((ulong)uVar38 >> 0x28)) >> 3 &
                                              0xff) + ((ushort)((uVar26 & 0xff) + (uVar26 >> 8) +
                                                                (ushort)(byte)((ulong)uVar30 >> 0x30
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar30 >> 0x38
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar34 >> 0x30
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar34 >> 0x38
                                                                              ) +
                                                               (ushort)(byte)((ulong)uVar38 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar38 >>
                                                                               0x38)) >> 3 & 0xff))
                                    >> 1),
                              CONCAT16((char)((ushort)(((ushort)((ushort)(byte)((unkuint10)Var9 >>
                                                                               0x40) +
                                                                 (ushort)(byte)((unkuint10)Var9 >>
                                                                               0x48) +
                                                                 (ushort)(byte)uVar30 +
                                                                 (ushort)(byte)((ulong)uVar30 >> 8)
                                                                 + (ushort)(byte)uVar34 +
                                                                   (ushort)(byte)((ulong)uVar34 >> 8
                                                                                 ) +
                                                                (ushort)(byte)uVar38 +
                                                                (ushort)(byte)((ulong)uVar38 >> 8))
                                                        >> 3 & 0xff) +
                                                      ((ushort)((uVar24 & 0xff) + (uVar24 >> 8) +
                                                                (ushort)(byte)((ulong)uVar30 >> 0x10
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar30 >> 0x18
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar34 >> 0x10
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar34 >> 0x18
                                                                              ) +
                                                               (ushort)(byte)((ulong)uVar38 >> 0x10)
                                                               + (ushort)(byte)((ulong)uVar38 >>
                                                                               0x18)) >> 3 & 0xff))
                                             >> 1),
                                       CONCAT15((char)((ushort)(((ushort)((ushort)(byte)((unkuint10)
                                                                                         Var9 >> 
                                                  0x20) + (ushort)(byte)((unkuint10)Var9 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar29 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar29 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar33 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar33 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar37 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar37 >> 0x28)) >> 3 & 0xff
                                                  ) + ((ushort)((ushort)(byte)((unkuint10)Var9 >>
                                                                              0x30) +
                                                                (ushort)(byte)((unkuint10)Var9 >>
                                                                              0x38) +
                                                                (ushort)(byte)((ulong)uVar29 >> 0x30
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar29 >> 0x38
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar33 >> 0x30
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar33 >> 0x38
                                                                              ) +
                                                               (ushort)(byte)((ulong)uVar37 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar37 >>
                                                                               0x38)) >> 3 & 0xff))
                                                  >> 1),CONCAT14((char)((ushort)(((ushort)((ushort)(
                                                  byte)Var9 + (ushort)(byte)((unkuint10)Var9 >> 8) +
                                                  (ushort)(byte)uVar29 +
                                                  (ushort)(byte)((ulong)uVar29 >> 8) +
                                                  (ushort)(byte)uVar33 +
                                                  (ushort)(byte)((ulong)uVar33 >> 8) +
                                                  (ushort)(byte)uVar37 +
                                                  (ushort)(byte)((ulong)uVar37 >> 8)) >> 3 & 0xff) +
                                                  ((ushort)((ushort)(byte)((unkuint10)Var9 >> 0x10)
                                                            + (ushort)(byte)((unkuint10)Var9 >> 0x18
                                                                            ) +
                                                            (ushort)(byte)((ulong)uVar29 >> 0x10) +
                                                            (ushort)(byte)((ulong)uVar29 >> 0x18) +
                                                            (ushort)(byte)((ulong)uVar33 >> 0x10) +
                                                            (ushort)(byte)((ulong)uVar33 >> 0x18) +
                                                           (ushort)(byte)((ulong)uVar37 >> 0x10) +
                                                           (ushort)(byte)((ulong)uVar37 >> 0x18)) >>
                                                   3 & 0xff)) >> 1),
                                                  CONCAT13((char)((ushort)(((ushort)((uVar22 & 0xff)
                                                                                     + (uVar22 >> 8)
                                                                                     + (ushort)(byte
                                                  )((ulong)uVar28 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar28 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar32 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar32 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar36 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar36 >> 0x28)) >> 3 & 0xff
                                                  ) + ((ushort)((uVar23 & 0xff) + (uVar23 >> 8) +
                                                                (ushort)(byte)((ulong)uVar28 >> 0x30
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar28 >> 0x38
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar32 >> 0x30
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar32 >> 0x38
                                                                              ) +
                                                               (ushort)(byte)((ulong)uVar36 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar36 >>
                                                                               0x38)) >> 3 & 0xff))
                                                  >> 1),CONCAT12((char)((ushort)(((ushort)((ushort)(
                                                  byte)((unkuint10)Var8 >> 0x40) +
                                                  (ushort)(byte)((unkuint10)Var8 >> 0x48) +
                                                  (ushort)(byte)uVar28 +
                                                  (ushort)(byte)((ulong)uVar28 >> 8) +
                                                  (ushort)(byte)uVar32 +
                                                  (ushort)(byte)((ulong)uVar32 >> 8) +
                                                  (ushort)(byte)uVar36 +
                                                  (ushort)(byte)((ulong)uVar36 >> 8)) >> 3 & 0xff) +
                                                  ((ushort)((uVar21 & 0xff) + (uVar21 >> 8) +
                                                            (ushort)(byte)((ulong)uVar28 >> 0x10) +
                                                            (ushort)(byte)((ulong)uVar28 >> 0x18) +
                                                            (ushort)(byte)((ulong)uVar32 >> 0x10) +
                                                            (ushort)(byte)((ulong)uVar32 >> 0x18) +
                                                           (ushort)(byte)((ulong)uVar36 >> 0x10) +
                                                           (ushort)(byte)((ulong)uVar36 >> 0x18)) >>
                                                   3 & 0xff)) >> 1),
                                                  CONCAT11((char)((ushort)(((ushort)((ushort)(byte)(
                                                  (unkuint10)Var8 >> 0x20) +
                                                  (ushort)(byte)((unkuint10)Var8 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar27 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar31 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar31 >> 0x28) +
                                                  (ushort)(byte)((ulong)uVar35 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar35 >> 0x28)) >> 3 & 0xff
                                                  ) + ((ushort)((ushort)(byte)((unkuint10)Var8 >>
                                                                              0x30) +
                                                                (ushort)(byte)((unkuint10)Var8 >>
                                                                              0x38) +
                                                                (ushort)(byte)((ulong)uVar27 >> 0x30
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar27 >> 0x38
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar31 >> 0x30
                                                                              ) +
                                                                (ushort)(byte)((ulong)uVar31 >> 0x38
                                                                              ) +
                                                               (ushort)(byte)((ulong)uVar35 >> 0x30)
                                                               + (ushort)(byte)((ulong)uVar35 >>
                                                                               0x38)) >> 3 & 0xff))
                                                  >> 1),(char)((ushort)(((ushort)((ushort)(byte)Var8
                                                                                  + (ushort)(byte)((
                                                  unkuint10)Var8 >> 8) +
                                                  (ushort)(byte)uVar27 +
                                                  (ushort)(byte)((ulong)uVar27 >> 8) +
                                                  (ushort)(byte)uVar31 +
                                                  (ushort)(byte)((ulong)uVar31 >> 8) +
                                                  (ushort)(byte)uVar35 +
                                                  (ushort)(byte)((ulong)uVar35 >> 8)) >> 3 & 0xff) +
                                                  ((ushort)((ushort)(byte)((unkuint10)Var8 >> 0x10)
                                                            + (ushort)(byte)((unkuint10)Var8 >> 0x18
                                                                            ) +
                                                            (ushort)(byte)((ulong)uVar27 >> 0x10) +
                                                            (ushort)(byte)((ulong)uVar27 >> 0x18) +
                                                            (ushort)(byte)((ulong)uVar31 >> 0x10) +
                                                            (ushort)(byte)((ulong)uVar31 >> 0x18) +
                                                           (ushort)(byte)((ulong)uVar35 >> 0x10) +
                                                           (ushort)(byte)((ulong)uVar35 >> 0x18)) >>
                                                   3 & 0xff)) >> 1))))))));
          iVar20 = iVar20 + 0x20;
          puVar14 = param_1;
          puVar15 = param_4;
          pVar17 = pVar11;
          puVar18 = puVar13;
          puVar19 = puVar12;
        } while (iVar20 < (int)uVar2);
      }
      for (; (int)uVar10 < (int)param_2; uVar10 = uVar10 + 4) {
        uVar5 = *(undefined4 *)pVar11;
        pVar11 = (unkbyte10 *)((long)pVar11 + 4);
        uVar6 = *(undefined4 *)puVar12;
        puVar12 = (undefined8 *)((long)puVar12 + 4);
        uVar7 = *(undefined4 *)puVar13;
        puVar13 = (undefined8 *)((long)puVar13 + 4);
        auVar4[4] = (char)uVar5;
        auVar4._0_4_ = *(undefined4 *)param_1;
        auVar4[5] = (char)((uint)uVar5 >> 8);
        auVar4[6] = (char)((uint)uVar5 >> 0x10);
        auVar4[7] = (char)((uint)uVar5 >> 0x18);
        auVar4._8_2_ = (short)uVar6;
        auVar4._10_2_ = (short)((uint)uVar6 >> 0x10);
        auVar4._12_2_ = (short)uVar7;
        auVar4._14_2_ = (short)((uint)uVar7 >> 0x10);
        uVar21 = NEON_uaddlv(auVar4,1);
        *(char *)param_4 = (char)(uVar21 >> 4);
        param_1 = (undefined8 *)((long)param_1 + 4);
        param_4 = (undefined8 *)((long)param_4 + 1);
      }
      param_1 = (undefined8 *)((long)param_1 + lVar1);
      pVar11 = (unkbyte10 *)((long)pVar11 + lVar1);
      puVar12 = (undefined8 *)((long)puVar12 + lVar1);
      iVar16 = iVar16 + 1;
    } while (iVar16 != iVar3 >> 2);
  }
  return;
}



/* Entry: 10967dda8; end: 10967ddf3;  */

void FUN_10967dda8(long *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  
  plVar2 = param_1 + 1;
  func_0x000107c28028(plVar2,param_2,param_3 | 0x10);
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  if (plVar2 == (long *)0x0) {
    uVar3 = *(uint *)(lVar1 + 0x20) | 4;
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18ios_base5clearEj_1103468e0)(lVar1,uVar3);
  return;
}



/* Entry: 10967ddf4; end: 10967df77;  */

double FUN_10967ddf4(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int unaff_w21;
  long unaff_x22;
  long lStack_60;
  int iStack_58;
  
  iVar2 = param_3[0x34];
  uVar3 = param_3[0x35];
  _gettimeofday(&lStack_60,0);
  dRam000000011382a4b8 = (double)(lStack_60 * 1000 + (long)(iStack_58 / 1000));
  uVar4 = param_1[0x1a09];
  uVar5 = param_1[0x1a0a];
  lVar6 = (long)(int)uVar3 * (long)iVar2;
  _malloc(lVar6);
  FUN_10967dcb0(param_2,uVar4,uVar5,lVar6);
  FUN_10967d7e4(lVar6,iVar2,(long)(int)uVar3,*(undefined8 *)(param_3 + 0x36));
  FUN_10967d338(*(undefined8 *)(param_3 + 0x36),iVar2,(long)(int)uVar3,
                *(undefined8 *)(param_3 + 0x3e),*(undefined8 *)(param_3 + 0x46));
  puVar7 = *(undefined4 **)(param_3 + 0x3a);
  if (3 < (int)uVar3) {
    uVar9 = 0;
    iVar1 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    puVar10 = (undefined4 *)(*(long *)(param_3 + 0x36) + (long)iVar2 * 8 + 8);
    puVar11 = puVar7;
    do {
      uVar8 = (ulong)(uint)(iVar1 >> 2);
      puVar12 = puVar10;
      puVar13 = puVar11;
      if (3 < iVar2) {
        do {
          *puVar13 = *puVar12;
          uVar8 = uVar8 - 1;
          puVar12 = puVar12 + 4;
          puVar13 = puVar13 + 1;
        } while (uVar8 != 0);
      }
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + (uint)(iVar1 >> 2);
      puVar10 = puVar10 + (long)iVar2 * 4;
    } while (uVar9 != uVar3 >> 2);
  }
  FUN_10967d338(puVar7,param_3[0x38],param_3[0x39],*(undefined8 *)(param_3 + 0x42),
                *(undefined8 *)(param_3 + 0x4a));
  *param_3 = *param_1;
  _free(lVar6);
  _gettimeofday(&stack0xffffffffffffffd0,0);
  fRam000000011382a4a0 =
       (float)((double)(unaff_x22 * 1000 + (long)(unaff_w21 / 1000)) - dRam000000011382a4b8);
  fRam000000011382a4a4 = fRam000000011382a4a4 + fRam000000011382a4a0;
  iRam000000011382a4b0 = iRam000000011382a4b0 + 1;
  fRam000000011382a4ac = fRam000000011382a4a4 / (float)iRam000000011382a4b0;
  if (fRam000000011382a4a8 < fRam000000011382a4a0) {
    fRam000000011382a4a8 = fRam000000011382a4a0;
  }
  return (double)fRam000000011382a4a0;
}



/* Entry: 10967df78; end: 10967e79f;  */

void FUN_10967df78(long param_1,float *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  uint uStack_3cc;
  float afStack_320 [52];
  float afStack_250 [52];
  float afStack_180 [52];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar42 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar5 = *(int *)(param_1 + 0x30);
  if (0 < (int)param_7) {
    puVar20 = (undefined8 *)0x113734d54;
    uVar30 = NEON_fmov(0xc0600000,4);
    uVar32 = NEON_fmov(0x3e800000,4);
    uVar18 = param_7;
    do {
      fVar43 = (float)((ulong)uVar30 >> 0x20);
      fVar44 = (float)((ulong)uVar32 >> 0x20);
      *puVar20 = CONCAT44(((float)((ulong)*param_4 >> 0x20) + fVar43) * fVar44,
                          ((float)*param_4 + (float)uVar30) * (float)uVar32);
      uVar3 = 1;
      if (*(int *)(param_4 + 1) != 1) {
        uVar3 = 0xffffffff;
      }
      *(undefined4 *)(puVar20 + 1) = uVar3;
      puVar20 = (undefined8 *)((long)puVar20 + 0xc);
      param_4 = (undefined8 *)((long)param_4 + 0xc);
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    puVar20 = (undefined8 *)0x113735204;
    uVar18 = param_7;
    do {
      *puVar20 = CONCAT44(((float)((ulong)*param_5 >> 0x20) + fVar43) * fVar44,
                          ((float)*param_5 + (float)uVar30) * (float)uVar32);
      uVar3 = 1;
      if (*(int *)(param_5 + 1) != 1) {
        uVar3 = 0xffffffff;
      }
      *(undefined4 *)(puVar20 + 1) = uVar3;
      puVar20 = (undefined8 *)((long)puVar20 + 0xc);
      param_5 = (undefined8 *)((long)param_5 + 0xc);
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  pfVar14 = param_2;
  if (param_2[0x178] == 0.0) {
    fVar43 = (float)((int)param_2[0x38] + -3) + -1.001;
    fVar44 = (float)((int)param_2[0x39] + -3) + -1.001;
    piVar24 = (int *)0x113734d5c;
    lVar25 = 100;
    uVar30 = NEON_fmov(0x3e800000,4);
    pfVar13 = param_2;
    do {
      pfVar14 = (float *)0x558;
      _bzero(pfVar13 + 0x179);
      if (-1 < *piVar24) {
        uVar32 = *(undefined8 *)(piVar24 + -2);
        *(undefined8 *)(pfVar13 + 0x179) = uVar32;
        pfVar13[0x17b] = 1.4013e-45;
        *(ulong *)(pfVar13 + 0x17c) =
             CONCAT44((float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar30 >> 0x20),
                      (float)uVar32 * (float)uVar30);
        pfVar13[0x17e] = 1.4013e-45;
        fVar28 = pfVar13[0x17c];
        bVar7 = false;
        bVar8 = false;
        bVar10 = false;
        if (3.0 <= fVar28) {
          bVar7 = false;
          bVar8 = false;
          bVar10 = true;
          if (!NAN(fVar28) && !NAN(fVar43)) {
            bVar7 = fVar28 < fVar43;
            bVar8 = fVar28 == fVar43;
            bVar10 = false;
          }
        }
        if (bVar8 || bVar7 != bVar10) {
          fVar28 = pfVar13[0x17d];
          bVar7 = false;
          bVar8 = false;
          bVar10 = false;
          if (3.0 <= fVar28) {
            bVar7 = false;
            bVar8 = false;
            bVar10 = true;
            if (!NAN(fVar28) && !NAN(fVar44)) {
              bVar7 = fVar28 < fVar44;
              bVar8 = fVar28 == fVar44;
              bVar10 = false;
            }
          }
          if (bVar8 || bVar7 != bVar10) goto LAB_10967e118;
        }
        *piVar24 = -1;
        pfVar13[0x17b] = 0.0;
        pfVar13[0x17e] = 0.0;
      }
LAB_10967e118:
      piVar24 = piVar24 + 3;
      pfVar13 = pfVar13 + 0x156;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 0;
    do {
      if (-1 < *(int *)(lVar25 * 0xc + 0x113734d5c)) {
        lVar19 = 0;
        bVar7 = true;
        do {
          bVar8 = bVar7;
          pfVar13 = param_2 + lVar25 * 0x156 + lVar19 * 0xa8 + 0x17f;
          pfVar14 = *(float **)(param_2 + lVar19 * 4 + 0x34 + 2);
          FUN_10967d1ec(param_2[lVar25 * 0x156 + lVar19 * 3 + 0x179],
                        (param_2 + lVar25 * 0x156 + lVar19 * 3 + 0x179)[1],
                        param_2[lVar19 * 4 + 0x34],pfVar14,param_2 + lVar19 * 4 + 0x3c,
                        param_2 + lVar19 * 4 + 0x44,pfVar13,pfVar13 + 0x38,pfVar13 + 0x70);
          lVar19 = 1;
          bVar7 = false;
        } while (bVar8);
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 != 100);
    param_2[0x178] = 1.4013e-45;
  }
  if ((int)param_7 < 1) {
    pfVar13 = (float *)0x0;
  }
  else {
    uVar22 = 0;
    uStack_3cc = 0;
    fVar43 = (float)iVar42;
    param_2 = param_2 + 0xd7;
    uVar18 = 1;
    uVar30 = NEON_fmov(0xbf800000,4);
    pfVar15 = param_3;
    iVar42 = iRam0000000113734cf4;
    iVar26 = iRam0000000113734cf8;
    do {
      lVar25 = uVar22 * 0xc;
      *(undefined8 *)(lVar25 + 0x1137356b4) = uVar30;
      *(undefined4 *)(lVar25 + 0x1137356bc) = 0xffffffff;
      if (-1 < *(int *)(lVar25 + 0x113734d5c)) {
        fVar44 = *(float *)(uVar22 * 0xc + 0x113735204);
        fVar28 = *(float *)(uVar22 * 0xc + 0x113735208);
        uVar17 = *(uint *)(param_1 + 0x24);
        if (0 < (int)uVar17) {
          uVar32 = *(undefined8 *)(lVar25 + 0x113734d54);
          uVar18 = uVar17 + 1;
          do {
            uVar32 = CONCAT44((float)((ulong)uVar32 >> 0x20) / fVar43,(float)uVar32 / fVar43);
            fVar44 = fVar44 / fVar43;
            uVar18 = uVar18 - 1;
            fVar28 = fVar28 / fVar43;
          } while (1 < uVar18);
          pfVar13 = param_2 + (ulong)uVar17 * 0xa8;
          uVar21 = (ulong)uVar17;
LAB_10967e2c4:
          fVar37 = (float)uVar32 * fVar43;
          fVar40 = (float)((ulong)uVar32 >> 0x20) * fVar43;
          uVar32 = CONCAT44(fVar40,fVar37);
          if (3.0 <= fVar37) {
            uVar23 = uVar21 - 1;
            fVar44 = fVar44 * fVar43;
            fVar28 = fVar28 * fVar43;
            pfVar1 = param_3 + uVar23 * 4 + 0x34;
            fVar46 = (float)((int)*pfVar1 + -3) + -1.001;
            fVar45 = (float)((int)pfVar1[1] + -3) + -1.001;
            bVar7 = true;
            if ((fVar37 <= fVar46) && (bVar7 = false, !NAN(fVar40))) {
              bVar7 = fVar40 < 3.0;
            }
            bVar8 = true;
            if ((!bVar7) && (bVar8 = false, !NAN(fVar44))) {
              bVar8 = fVar44 < 3.0;
            }
            bVar7 = false;
            bVar10 = false;
            bVar11 = false;
            if (!bVar8) {
              bVar7 = false;
              bVar10 = false;
              bVar11 = true;
              if (!NAN(fVar44) && !NAN(fVar46)) {
                bVar7 = fVar44 < fVar46;
                bVar10 = fVar44 == fVar46;
                bVar11 = false;
              }
            }
            bVar8 = true;
            if ((bVar10 || bVar7 != bVar11) && (bVar8 = false, !NAN(fVar45) && !NAN(fVar40))) {
              bVar8 = fVar45 < fVar40;
            }
            bVar7 = true;
            if ((!bVar8) && (bVar7 = false, !NAN(fVar28))) {
              bVar7 = fVar28 < 3.0;
            }
            bVar8 = false;
            bVar10 = false;
            bVar11 = false;
            if (!bVar7) {
              bVar8 = false;
              bVar10 = false;
              bVar11 = true;
              if (!NAN(fVar28) && !NAN(fVar45)) {
                bVar8 = fVar28 < fVar45;
                bVar10 = fVar28 == fVar45;
                bVar11 = false;
              }
            }
            if (!bVar10 && bVar8 == bVar11) goto LAB_10967e628;
            iVar6 = *(int *)(param_1 + 0x10);
            fVar40 = *(float *)(param_1 + 8);
            fVar47 = *(float *)(param_1 + 0xc);
            fVar37 = *(float *)(param_1 + 0x14);
            iVar42 = iVar42 + 1;
            iRam0000000113734cf4 = iVar42;
            if (0 < iVar6) {
              iVar27 = 0;
              pfVar16 = param_3 + uVar23 * 4 + 0x3c;
LAB_10967e368:
              iVar26 = iVar26 + 1;
              pfVar14 = *(float **)(pfVar1 + 2);
              pfVar15 = pfVar16;
              iRam0000000113734cf8 = iVar26;
              FUN_10967d1ec(fVar44,fVar28,*pfVar1,pfVar14,pfVar16,param_3 + uVar23 * 4 + 0x44,
                            afStack_180,afStack_250,afStack_320);
              lVar19 = 0;
              fVar29 = 0.0;
              fVar31 = 0.0;
              fVar33 = 0.0;
              fVar34 = 0.0;
              do {
                fVar35 = *(float *)((long)pfVar13 + lVar19);
                fVar38 = *(float *)((long)afStack_180 + lVar19);
                fVar29 = fVar29 + fVar35;
                fVar31 = fVar31 + fVar38;
                fVar33 = fVar33 + fVar35 * fVar35;
                fVar34 = fVar34 + fVar38 * fVar38;
                lVar19 = lVar19 + 4;
              } while (lVar19 != 0xc4);
              lVar19 = 0;
              fVar35 = fVar31 * 0.020408163 + 1e-08;
              fVar36 = SQRT((fVar33 * 0.020408163) / (fVar34 * 0.020408163 + 1e-08));
              fVar39 = SQRT((fVar29 * 0.020408163) / fVar35);
              fVar31 = 0.0;
              fVar33 = 0.0;
              fVar38 = 0.0;
              fVar41 = 0.0;
              fVar34 = 0.0;
              do {
                pfVar2 = (float *)((long)pfVar13 + lVar19);
                fVar48 = (*pfVar2 - fVar36 * *(float *)((long)afStack_180 + lVar19)) -
                         (fVar29 * 0.020408163 - fVar35 * fVar36);
                fVar49 = pfVar2[0x38] + fVar39 * *(float *)((long)afStack_250 + lVar19);
                fVar50 = pfVar2[0x70] + fVar39 * *(float *)((long)afStack_320 + lVar19);
                fVar34 = fVar34 + fVar49 * fVar49;
                fVar41 = fVar41 + fVar50 * fVar49;
                fVar38 = fVar38 + fVar50 * fVar50;
                fVar33 = fVar33 + fVar49 * fVar48;
                fVar31 = fVar31 + fVar50 * fVar48;
                lVar19 = lVar19 + 4;
              } while (lVar19 != 0xc4);
              fVar29 = -(fVar41 * fVar41) + fVar38 * fVar34;
              if (fVar40 <= fVar29) {
                uVar17 = 0;
                fVar29 = 1.0 / fVar29;
                fVar35 = (fVar31 * -fVar41 + fVar33 * fVar38) * fVar29;
                fVar29 = (fVar33 * -fVar41 + fVar31 * fVar34) * fVar29;
              }
              else {
                uVar17 = 0xfffffffe;
                fVar35 = 0.0;
                fVar29 = 0.0;
              }
              fVar44 = fVar44 + fVar35;
              fVar28 = fVar28 + fVar29;
              fVar31 = (float)NEON_fminnm(fVar44,fVar28);
              bVar7 = false;
              bVar8 = false;
              bVar10 = false;
              if (3.0 <= fVar31) {
                bVar7 = false;
                bVar8 = false;
                bVar10 = true;
                if (!NAN(fVar28) && !NAN(fVar45)) {
                  bVar7 = fVar28 < fVar45;
                  bVar8 = fVar28 == fVar45;
                  bVar10 = false;
                }
              }
              bVar11 = false;
              bVar9 = false;
              bVar12 = false;
              if (bVar8 || bVar7 != bVar10) {
                bVar11 = false;
                bVar9 = false;
                bVar12 = true;
                if (!NAN(fVar44) && !NAN(fVar46)) {
                  bVar11 = fVar44 < fVar46;
                  bVar9 = fVar44 == fVar46;
                  bVar12 = false;
                }
              }
              uVar18 = 0xfffffffc;
              if (bVar9 || bVar11 != bVar12) {
                uVar18 = uVar17;
              }
              if (uVar18 == 0) {
                if ((fVar47 <= ABS(fVar35)) || (fVar47 <= ABS(fVar29))) goto LAB_10967e4e4;
                pfVar14 = *(float **)(pfVar1 + 2);
                FUN_10967d1ec(fVar44,fVar28,*pfVar1,pfVar14,pfVar16,param_3 + uVar23 * 4 + 0x44,
                              afStack_180,afStack_250,afStack_320);
                lVar19 = 0;
                fVar40 = 0.0;
                fVar47 = 0.0;
                fVar45 = 0.0;
                fVar46 = 0.0;
                do {
                  fVar29 = *(float *)((long)pfVar13 + lVar19);
                  fVar31 = *(float *)((long)afStack_180 + lVar19);
                  fVar46 = fVar46 + fVar29;
                  fVar45 = fVar45 + fVar31;
                  fVar47 = fVar47 + fVar29 * fVar29;
                  fVar40 = fVar40 + fVar31 * fVar31;
                  lVar19 = lVar19 + 4;
                } while ((int)lVar19 != 0xc4);
                lVar19 = 0;
                fVar40 = SQRT((fVar47 * 0.020408163) / (fVar40 * 0.020408163));
                fVar47 = 0.0;
                do {
                  fVar47 = fVar47 + ABS((*(float *)((long)pfVar13 + lVar19) -
                                        fVar40 * *(float *)((long)afStack_180 + lVar19)) -
                                        (fVar46 * 0.020408163 - fVar45 * 0.020408163 * fVar40));
                  lVar19 = lVar19 + 4;
                } while ((int)lVar19 != 0xc4);
                uVar18 = 0xfffffffb;
                pfVar15 = pfVar16;
                if (fVar47 <= fVar37 * 49.0) {
                  uVar18 = 0;
                }
              }
              goto LAB_10967e5f8;
            }
            uVar18 = 0xfffffffd;
            goto LAB_10967e5f8;
          }
LAB_10967e628:
          uVar18 = 0xfffffffc;
          goto LAB_10967e698;
        }
LAB_10967e614:
        if (uVar18 != 0xfffffffc) {
          fVar37 = (float)(int)(iVar4 + ~*(uint *)(param_1 + 0x1c));
          fVar40 = (float)(int)*(uint *)(param_1 + 0x20);
          bVar7 = false;
          bVar8 = false;
          bVar10 = false;
          if ((float)(int)*(uint *)(param_1 + 0x1c) <= fVar44) {
            bVar7 = false;
            bVar8 = false;
            bVar10 = true;
            if (!NAN(fVar44) && !NAN(fVar37)) {
              bVar7 = fVar44 < fVar37;
              bVar8 = fVar44 == fVar37;
              bVar10 = false;
            }
          }
          bVar11 = true;
          if ((bVar8 || bVar7 != bVar10) && (bVar11 = false, !NAN(fVar28) && !NAN(fVar40))) {
            bVar11 = fVar28 < fVar40;
          }
          fVar37 = (float)(int)(iVar5 + ~*(uint *)(param_1 + 0x20));
          bVar7 = false;
          bVar8 = false;
          bVar10 = false;
          if (!bVar11) {
            bVar7 = false;
            bVar8 = false;
            bVar10 = true;
            if (!NAN(fVar28) && !NAN(fVar37)) {
              bVar7 = fVar28 < fVar37;
              bVar8 = fVar28 == fVar37;
              bVar10 = false;
            }
          }
          if (bVar8 || bVar7 != bVar10) {
            if (((uVar18 == 0xfffffffb) || (uVar18 == 0xfffffffd)) || (uVar18 == 0xfffffffe)) {
              *(uint *)(lVar25 + 0x1137356bc) = uVar18;
            }
            else {
              *(float *)(lVar25 + 0x1137356b4) = fVar44;
              *(float *)(lVar25 + 0x1137356b8) = fVar28;
              uStack_3cc = uStack_3cc + 1;
              *(undefined4 *)(lVar25 + 0x1137356bc) = 0;
            }
            goto LAB_10967e6a0;
          }
        }
LAB_10967e698:
        *(undefined4 *)(lVar25 + 0x1137356bc) = 0xfffffffc;
      }
LAB_10967e6a0:
      uVar22 = uVar22 + 1;
      param_2 = param_2 + 0x156;
    } while (uVar22 != param_7);
    puVar20 = (undefined8 *)0x1137356b4;
    uVar30 = NEON_fmov(0x40800000,4);
    uVar32 = NEON_fmov(0x40600000,4);
    do {
      *param_6 = CONCAT44((float)((ulong)uVar32 >> 0x20) +
                          (float)((ulong)uVar30 >> 0x20) * (float)((ulong)*puVar20 >> 0x20),
                          (float)uVar32 + (float)uVar30 * (float)*puVar20);
      *(uint *)(param_6 + 1) = ~*(uint *)(puVar20 + 1) >> 0x1f;
      puVar20 = (undefined8 *)((long)puVar20 + 0xc);
      param_6 = (undefined8 *)((long)param_6 + 0xc);
      param_7 = param_7 - 1;
    } while (param_7 != 0);
    pfVar13 = (float *)(ulong)uStack_3cc;
    param_3 = pfVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  fVar44 = *pfVar13;
  fVar28 = pfVar13[1];
  fVar37 = pfVar14[3];
  fVar40 = pfVar14[4];
  fVar45 = pfVar14[5];
  fVar46 = pfVar14[8] + fVar28 * pfVar14[7] + pfVar14[6] * fVar44;
  fVar43 = 8388608.0;
  if (fVar46 != 0.0) {
    fVar43 = 1.0 / fVar46;
  }
  *param_3 = (pfVar14[2] + fVar28 * pfVar14[1] + *pfVar14 * fVar44) * fVar43;
  param_3[1] = (fVar45 + fVar28 * fVar40 + fVar37 * fVar44) * fVar43;
  param_3[2] = pfVar13[2];
  return;
LAB_10967e4e4:
  iVar27 = iVar27 + 1;
  if (iVar27 == iVar6) goto code_r0x00010967e4f0;
  goto LAB_10967e368;
code_r0x00010967e4f0:
  uVar18 = 0xfffffffd;
LAB_10967e5f8:
  if (((long)uVar21 < 2) ||
     (pfVar13 = pfVar13 + -0xa8, uVar21 = uVar23, (uVar18 & 0xfffffffd) == 0xfffffffc))
  goto LAB_10967e614;
  goto LAB_10967e2c4;
}



/* Entry: 10967e7a0; end: 10967e807;  */

void FUN_10967e7a0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[8] + fVar2 * param_2[7] + param_2[6] * fVar1;
  fVar3 = 8388608.0;
  if (fVar7 != 0.0) {
    fVar3 = 1.0 / fVar7;
  }
  *param_3 = (param_2[2] + fVar2 * param_2[1] + *param_2 * fVar1) * fVar3;
  param_3[1] = (fVar6 + fVar2 * fVar5 + fVar4 * fVar1) * fVar3;
  param_3[2] = param_1[2];
  return;
}



/* Entry: 10967e808; end: 10967e883;  */

void FUN_10967e808(float param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  long param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_10967e884(param_2,param_3,param_2 + 0x2114);
  FUN_10967f908(param_2 + 0x2114,param_4,param_2 + 0x31f4,param_5);
  if (0 < (int)param_5) {
    uVar5 = NEON_scvtf(CONCAT44((int)((long)*(undefined8 *)(param_2 + 0x6824) >> 0x21),
                                (int)*(undefined8 *)(param_2 + 0x6824) >> 1),4);
    piVar3 = (int *)(param_2 + 0x31fc);
    piVar4 = (int *)(param_6 + 8);
    do {
      iVar1 = *piVar3;
      *piVar4 = iVar1;
      uVar6 = uVar5;
      if (iVar1 != 0) {
        uVar6 = CONCAT44((float)((ulong)uVar5 >> 0x20) +
                         (float)((ulong)*(undefined8 *)(piVar3 + -2) >> 0x20) * param_1,
                         (float)uVar5 + (float)*(undefined8 *)(piVar3 + -2) * param_1);
      }
      *(undefined8 *)(piVar4 + -2) = uVar6;
      piVar3 = piVar3 + 3;
      piVar4 = piVar4 + 3;
      uVar2 = (int)param_5 - 1;
      param_5 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 10967e884; end: 10967e937;  */

void FUN_10967e884(float param_1,long param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (0 < param_5) {
    uVar4 = NEON_scvtf(CONCAT44((int)((long)*(undefined8 *)(param_2 + 0x6824) >> 0x21),
                                (int)*(undefined8 *)(param_2 + 0x6824) >> 1),4);
    piVar2 = (int *)(param_3 + 8);
    piVar3 = (int *)(param_4 + 8);
    do {
      iVar1 = *piVar2;
      *piVar3 = iVar1;
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = CONCAT44(((float)((ulong)*(undefined8 *)(piVar2 + -2) >> 0x20) -
                         (float)((ulong)uVar4 >> 0x20)) * (1.0 / param_1),
                         ((float)*(undefined8 *)(piVar2 + -2) - (float)uVar4) * (1.0 / param_1));
      }
      *(undefined8 *)(piVar3 + -2) = uVar5;
      piVar2 = piVar2 + 3;
      piVar3 = piVar3 + 3;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 10967e938; end: 10967ea3f;  */

void FUN_10967e938(long param_1,undefined8 param_2,long param_3,float *param_4,long param_5,
                  ulong param_6,long param_7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  fVar9 = *(float *)(param_5 + 0xc);
  FUN_10967e884(*(undefined4 *)(param_3 + 0xc),param_1,param_2,param_1 + 0x2114,param_6);
  pfVar6 = (float *)(param_1 + 0x31f4);
  FUN_10967f908(param_1 + 0x2114,param_3 + 0x34,pfVar6,param_6);
  if (0 < (int)param_6) {
    uVar4 = param_6 & 0xffffffff;
    do {
      pfVar6[0x438] = param_4[2] + pfVar6[1] * param_4[1] + *pfVar6 * *param_4;
      pfVar6[0x439] = param_4[5] + pfVar6[1] * param_4[4] + *pfVar6 * param_4[3];
      pfVar6[0x43a] = pfVar6[2];
      pfVar6 = pfVar6 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_10967f908(param_1 + 0x42d4,param_5 + 0x10,param_1 + 0x53b4,param_6);
  if (0 < (int)param_6) {
    uVar7 = NEON_scvtf(CONCAT44((int)((long)*(undefined8 *)(param_1 + 0x6824) >> 0x21),
                                (int)*(undefined8 *)(param_1 + 0x6824) >> 1),4);
    piVar3 = (int *)(param_1 + 0x53bc);
    piVar5 = (int *)(param_7 + 8);
    do {
      iVar1 = *piVar3;
      *piVar5 = iVar1;
      uVar8 = uVar7;
      if (iVar1 != 0) {
        uVar8 = CONCAT44((float)((ulong)uVar7 >> 0x20) +
                         (float)((ulong)*(undefined8 *)(piVar3 + -2) >> 0x20) * fVar9,
                         (float)uVar7 + (float)*(undefined8 *)(piVar3 + -2) * fVar9);
      }
      *(undefined8 *)(piVar5 + -2) = uVar8;
      piVar3 = piVar3 + 3;
      piVar5 = piVar5 + 3;
      uVar2 = (int)param_6 - 1;
      param_6 = (ulong)uVar2;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 10967ea40; end: 10967ea9f;  */

void FUN_10967ea40(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  undefined1 auStack_30 [16];
  
  FUN_10967e884(param_1,param_2,auStack_30,1);
  fVar1 = -*(float *)((long)param_3 + 0xc) /
          (*(float *)(param_3 + 1) +
          (float)*param_3 * (float)auStack_30._0_8_ +
          (float)((ulong)*param_3 >> 0x20) * SUB84(auStack_30._0_8_,4));
  *param_4 = CONCAT44(SUB84(auStack_30._0_8_,4) * fVar1,(float)auStack_30._0_8_ * fVar1);
  *(float *)(param_4 + 1) = fVar1;
  return;
}



/* Entry: 10967eaa0; end: 10967eca7;  */

void FUN_10967eaa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 *param_6,long param_7,long param_8,ulong param_9,
                  undefined8 *param_10,float *param_11,undefined4 *param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  float *pfVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int *piVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  ulong uVar38;
  float fVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined8 uStack_29c;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_25c;
  undefined4 uStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_21c;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = 1;
  uStack_ac = 1;
  fVar48 = *(float *)(param_7 + 0xc);
  uVar40 = param_9;
  uStack_b4 = param_3;
  uStack_b0 = param_4;
  uStack_a8 = param_1;
  uStack_a4 = param_2;
  FUN_10967ea40(fVar48,param_5,&uStack_a8,param_7 + 0xa0,&fStack_84);
  puVar8 = (undefined8 *)&uStack_b4;
  lVar12 = param_7 + 0xa0;
  puVar7 = param_5;
  FUN_10967ea40(fVar48);
  if (0 < (int)param_9) {
    fVar31 = *(float *)(param_7 + 0x34);
    fVar35 = *(float *)(param_7 + 0x38);
    fVar45 = *(float *)(param_7 + 0x3c);
    fVar46 = *(float *)(param_7 + 0x40);
    fVar49 = *(float *)(param_7 + 0x44);
    fVar52 = *(float *)(param_7 + 0x48);
    param_9 = param_9 & 0xffffffff;
    iVar11 = param_5[0x1a09];
    iVar13 = param_5[0x1a0a];
    pfVar14 = (float *)(param_8 + 4);
    do {
      lVar12 = param_7 + 0xa0;
      puVar7 = param_5;
      puVar8 = param_6;
      FUN_10967ea40(fVar48);
      fVar32 = fStack_98 * *(float *)(param_7 + 0x50) + fStack_9c * *(float *)(param_7 + 0x4c) +
               fStack_94 * *(float *)(param_7 + 0x54);
      fVar36 = (*(float *)(param_7 + 0x38) * fStack_98 + fStack_9c * *(float *)(param_7 + 0x34) +
               fStack_94 * *(float *)(param_7 + 0x3c)) -
               ((fVar35 * fStack_80 + fStack_84 * fVar31 + fStack_7c * fVar45) -
               (fVar35 * fStack_8c + fStack_90 * fVar31 + fStack_88 * fVar45));
      fVar39 = (fStack_98 * *(float *)(param_7 + 0x44) + fStack_9c * *(float *)(param_7 + 0x40) +
               fStack_94 * *(float *)(param_7 + 0x48)) -
               ((fStack_80 * fVar49 + fStack_84 * fVar46 + fStack_7c * fVar52) -
               (fVar49 * fStack_8c + fStack_90 * fVar46 + fStack_88 * fVar52));
      fVar41 = *(float *)(param_7 + 0x10);
      fVar42 = *(float *)(param_7 + 0x14);
      fVar43 = *(float *)(param_7 + 0x18);
      fVar44 = *(float *)(param_7 + 0x1c);
      fVar47 = *(float *)(param_7 + 0x20);
      fVar50 = *(float *)(param_7 + 0x24);
      fVar33 = fVar39 * *(float *)(param_7 + 0x2c) + fVar36 * *(float *)(param_7 + 0x28) +
               fVar32 * *(float *)(param_7 + 0x30);
      pfVar14[1] = 1.4013e-45;
      pfVar14[-1] = (float)(iVar11 >> 1) +
                    fVar48 * ((fVar39 * fVar42 + fVar36 * fVar41 + fVar32 * fVar43) / fVar33);
      *pfVar14 = (float)(iVar13 >> 1) +
                 fVar48 * ((fVar39 * fVar47 + fVar36 * fVar44 + fVar32 * fVar50) / fVar33);
      pfVar14 = pfVar14 + 3;
      param_6 = (undefined8 *)((long)param_6 + 0xc);
      param_9 = param_9 - 1;
    } while (param_9 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_190;
  puStack_e0 = param_6;
  lStack_d8 = param_7;
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_10967eca8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_178 = *puVar7;
  uStack_174 = puVar7[1];
  uStack_170 = 0x3f800000;
  uStack_16c = 0;
  uStack_15c = 0;
  uStack_164 = 0;
  uStack_154 = *puVar7;
  uStack_150 = puVar7[1];
  uStack_14c = 0x3f800000;
  uStack_148 = puVar7[3];
  uStack_144 = puVar7[4];
  uStack_140 = 0x3f800000;
  uStack_134 = 0;
  uStack_13c = 0;
  uStack_12c = 0;
  uStack_124 = puVar7[3];
  uStack_120 = puVar7[4];
  uStack_11c = 0x3f800000;
  uStack_118 = puVar7[6];
  uStack_114 = puVar7[7];
  uStack_110 = 0x3f800000;
  uStack_fc = 0;
  uStack_10c = 0;
  uStack_104 = 0;
  uStack_f4 = puVar7[6];
  uStack_f0 = puVar7[7];
  uStack_ec = 0x3f800000;
  uStack_188 = *(undefined8 *)((long)puVar8 + 0xc);
  uStack_190 = *puVar8;
  uStack_180 = puVar8[3];
  puVar7 = &uStack_178;
  iVar11 = 6;
  lVar20 = lVar12;
  FUN_109675770();
  iVar13 = (int)lVar20;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  *(undefined4 *)(lVar12 + 0x20) = 0x3f800000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_2f0;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2c8 = *(undefined8 *)(puVar7 + (long)iVar11 * 3);
  uStack_2b8 = 0;
  uStack_2c0 = 0x3f800000;
  uStack_2a0 = 0;
  uStack_29c = uStack_2c8;
  uStack_294 = 0x3f800000;
  uStack_25c = *(undefined8 *)(puVar7 + (long)iVar13 * 3);
  uStack_278 = 0;
  uStack_280 = 0x3f800000;
  uStack_260 = 0;
  uStack_254 = 0x3f800000;
  uStack_238 = 0;
  uStack_240 = 0x3f800000;
  uStack_21c = *(undefined8 *)(puVar7 + (long)(int)uVar40 * 3);
  uStack_220 = 0;
  uStack_214 = 0x3f800000;
  uStack_1f8 = 0;
  uStack_200 = 0x3f800000;
  uStack_208 = *(undefined8 *)(puVar7 + (long)(int)param_10 * 3);
  uStack_1dc = uStack_208;
  uStack_1e0 = 0;
  uStack_1d4 = 0x3f800000;
  uStack_2f0 = *(undefined8 *)((long)puVar9 + (long)iVar11 * 0xc);
  uStack_2e8 = *(undefined8 *)((long)puVar9 + (long)iVar13 * 0xc);
  fVar48 = (float)((ulong)uStack_2c8 >> 0x20);
  uStack_2b0 = CONCAT44(fVar48 * -(float)uStack_2f0,(float)uStack_2c8 * -(float)uStack_2f0);
  uStack_2a8 = 0;
  fVar31 = -*(float *)((long)puVar9 + (long)iVar11 * 0xc + 4);
  uStack_290 = CONCAT44(fVar48 * fVar31,(float)uStack_2c8 * fVar31);
  uStack_288 = uStack_25c;
  fVar31 = (float)((ulong)uStack_25c >> 0x20);
  uStack_270 = CONCAT44(fVar31 * -(float)uStack_2e8,(float)uStack_25c * -(float)uStack_2e8);
  uStack_268 = 0;
  fVar48 = -*(float *)((long)puVar9 + (long)iVar13 * 0xc + 4);
  uStack_250 = CONCAT44(fVar31 * fVar48,(float)uStack_25c * fVar48);
  uStack_248 = uStack_21c;
  uStack_2e0 = *(undefined8 *)((long)puVar9 + (long)(int)uVar40 * 0xc);
  uStack_2d8 = *(undefined8 *)((long)puVar9 + (long)(int)param_10 * 0xc);
  fVar48 = (float)((ulong)uStack_21c >> 0x20);
  uStack_230 = CONCAT44(fVar48 * -(float)uStack_2e0,(float)uStack_21c * -(float)uStack_2e0);
  uStack_228 = 0;
  fVar31 = -*(float *)((long)puVar9 + (long)(int)uVar40 * 0xc + 4);
  uStack_210 = CONCAT44(fVar48 * fVar31,(float)uStack_21c * fVar31);
  fVar31 = (float)((ulong)uStack_208 >> 0x20);
  uStack_1f0 = CONCAT44(fVar31 * -(float)uStack_2d8,(float)uStack_208 * -(float)uStack_2d8);
  uStack_1e8 = 0;
  fVar48 = -*(float *)((long)puVar9 + (long)(int)param_10 * 0xc + 4);
  uVar37 = CONCAT44(fVar31 * fVar48,(float)uStack_208 * fVar48);
  puVar8 = &uStack_2c8;
  lVar12 = 8;
  pfVar14 = param_11;
  pfVar15 = param_11;
  uStack_1d0 = uVar37;
  FUN_109675770();
  fVar48 = (float)uVar37;
  param_11[8] = 1.0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = 0;
  uVar30 = 0;
  puVar9 = (undefined8 *)((long)puVar8 + 0x64a4);
  *(undefined8 *)((long)puVar8 + 0x661c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6614) = 0;
  *(undefined8 *)((long)puVar8 + 0x662c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6624) = 0;
  *(undefined8 *)((long)puVar8 + 0x65fc) = 0;
  *(undefined8 *)((long)puVar8 + 0x65f4) = 0;
  *(undefined8 *)((long)puVar8 + 0x660c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6604) = 0;
  *(undefined8 *)((long)puVar8 + 0x65dc) = 0;
  *(undefined8 *)((long)puVar8 + 0x65d4) = 0;
  *(undefined8 *)((long)puVar8 + 0x65ec) = 0;
  *(undefined8 *)((long)puVar8 + 0x65e4) = 0;
  *(undefined8 *)((long)puVar8 + 0x65bc) = 0;
  *(undefined8 *)((long)puVar8 + 0x65b4) = 0;
  *(undefined8 *)((long)puVar8 + 0x65cc) = 0;
  *(undefined8 *)((long)puVar8 + 0x65c4) = 0;
  *(undefined8 *)((long)puVar8 + 0x659c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6594) = 0;
  *(undefined8 *)((long)puVar8 + 0x65ac) = 0;
  *(undefined8 *)((long)puVar8 + 0x65a4) = 0;
  *(undefined8 *)((long)puVar8 + 0x657c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6574) = 0;
  *(undefined8 *)((long)puVar8 + 0x658c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6584) = 0;
  *(undefined8 *)((long)puVar8 + 0x655c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6554) = 0;
  *(undefined8 *)((long)puVar8 + 0x656c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6564) = 0;
  *(undefined8 *)((long)puVar8 + 0x653c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6534) = 0;
  *(undefined8 *)((long)puVar8 + 0x654c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6544) = 0;
  *(undefined8 *)((long)puVar8 + 0x651c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6514) = 0;
  *(undefined8 *)((long)puVar8 + 0x652c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6524) = 0;
  *(undefined8 *)((long)puVar8 + 0x64fc) = 0;
  *(undefined8 *)((long)puVar8 + 0x64f4) = 0;
  *(undefined8 *)((long)puVar8 + 0x650c) = 0;
  *(undefined8 *)((long)puVar8 + 0x6504) = 0;
  *(undefined8 *)((long)puVar8 + 0x64dc) = 0;
  *(undefined8 *)((long)puVar8 + 0x64d4) = 0;
  *(undefined8 *)((long)puVar8 + 0x64ec) = 0;
  *(undefined8 *)((long)puVar8 + 0x64e4) = 0;
  *(undefined8 *)((long)puVar8 + 0x64bc) = 0;
  *(undefined8 *)((long)puVar8 + 0x64b4) = 0;
  *(undefined8 *)((long)puVar8 + 0x64cc) = 0;
  *(undefined8 *)((long)puVar8 + 0x64c4) = 0;
  lVar23 = 8;
  *(undefined8 *)((long)puVar8 + 0x64ac) = 0;
  *puVar9 = 0;
  puVar26 = puVar9;
  do {
    puVar27 = puVar26;
    if ((*(int *)(lVar12 + lVar23) != 0) && (*(int *)(uVar40 + lVar20 * 4) != 0)) {
      puVar27 = (undefined8 *)((long)puVar26 + 4);
      *(int *)puVar26 = (int)lVar20;
      uVar30 = uVar30 + 1;
    }
    lVar20 = lVar20 + 1;
    lVar23 = lVar23 + 0xc;
    puVar26 = puVar27;
  } while ((int)lVar20 != 100);
  *(undefined4 *)((long)puVar8 + 0x67c4) = 0;
  param_10[0x2f] = 0;
  param_10[0x2e] = 0;
  param_10[0x31] = 0;
  param_10[0x30] = 0;
  param_10[0x2b] = 0;
  param_10[0x2a] = 0;
  param_10[0x2d] = 0;
  param_10[0x2c] = 0;
  param_10[0x27] = 0;
  param_10[0x26] = 0;
  param_10[0x29] = 0;
  param_10[0x28] = 0;
  param_10[0x23] = 0;
  param_10[0x22] = 0;
  param_10[0x25] = 0;
  param_10[0x24] = 0;
  param_10[0x1f] = 0;
  param_10[0x1e] = 0;
  param_10[0x21] = 0;
  param_10[0x20] = 0;
  param_10[0x1b] = 0;
  param_10[0x1a] = 0;
  param_10[0x1d] = 0;
  param_10[0x1c] = 0;
  param_10[0x17] = 0;
  param_10[0x16] = 0;
  param_10[0x19] = 0;
  param_10[0x18] = 0;
  param_10[0x13] = 0;
  param_10[0x12] = 0;
  param_10[0x15] = 0;
  param_10[0x14] = 0;
  param_10[0xf] = 0;
  param_10[0xe] = 0;
  param_10[0x11] = 0;
  param_10[0x10] = 0;
  param_10[0xb] = 0;
  param_10[10] = 0;
  param_10[0xd] = 0;
  param_10[0xc] = 0;
  param_10[7] = 0;
  param_10[6] = 0;
  param_10[9] = 0;
  param_10[8] = 0;
  param_10[3] = 0;
  param_10[2] = 0;
  param_10[5] = 0;
  param_10[4] = 0;
  param_10[1] = 0;
  *param_10 = 0;
  pfVar14[2] = 0.0;
  pfVar14[3] = 0.0;
  pfVar14[0] = 1.0;
  pfVar14[1] = 0.0;
  pfVar14[6] = 0.0;
  pfVar14[7] = 0.0;
  pfVar14[4] = 1.0;
  pfVar14[5] = 0.0;
  pfVar14[8] = 1.0;
  *pfVar15 = 0.0;
  if ((int)uVar30 < 4) {
    bVar16 = *(byte *)((long)puVar8 + 0x681c) | 6;
LAB_10967f5d0:
    *(byte *)((long)puVar8 + 0x681c) = bVar16;
  }
  else {
    iVar13 = 0;
    iVar11 = 0;
    puVar26 = (undefined8 *)((long)puVar8 + 0x6634);
    fStack_3c4 = 0.0;
    fStack_3c8 = 1.0;
    fStack_3cc = 0.0;
    iVar18 = 1;
    fStack_3d0 = 0.0;
    fStack_3d4 = 1.0;
    fStack_3d8 = 0.0;
    fStack_3dc = 0.0;
    fStack_3e4 = 1.0;
    fStack_3e0 = 0.0;
    do {
      iVar17 = (int)((double)iVar18 / 127773.0);
      iVar17 = (int)(((double)iVar18 - (double)iVar17 * 127773.0) * 16807.0 -
                    (double)(iVar17 * 0xb14));
      iVar18 = iVar17 + 0x7fffffff;
      if (-1 < iVar17) {
        iVar18 = iVar17;
      }
      dVar34 = (double)iVar18;
      uVar29 = (uint)(((double)uVar30 * dVar34) / 2147483647.0);
      *(int *)((long)puVar8 + 0x6494) = iVar18;
      iVar17 = (int)((dVar34 - (double)(int)(dVar34 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar34 / 127773.0) * 0xb14));
      iVar18 = iVar17 + 0x7fffffff;
      if (-1 < iVar17) {
        iVar18 = iVar17;
      }
      dVar34 = (double)iVar18;
      uVar21 = (uint)(((double)(uVar30 - 1) * dVar34) / 2147483647.0);
      if ((int)uVar29 <= (int)uVar21) {
        uVar21 = uVar21 + 1;
      }
      *(int *)(puVar8 + 0xc93) = iVar18;
      iVar18 = (int)((dVar34 - (double)(int)(dVar34 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar34 / 127773.0) * 0xb14));
      iVar17 = iVar18 + 0x7fffffff;
      if (-1 < iVar18) {
        iVar17 = iVar18;
      }
      dVar34 = (double)iVar17;
      uVar22 = (uint)(((double)(uVar30 - 2) * dVar34) / 2147483647.0);
      if ((int)uVar29 <= (int)uVar22) {
        uVar22 = uVar22 + 1;
      }
      iVar25 = (int)((dVar34 - (double)(int)(dVar34 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar34 / 127773.0) * 0xb14));
      if ((int)uVar21 <= (int)uVar22) {
        uVar22 = uVar22 + 1;
      }
      iVar18 = iVar25 + 0x7fffffff;
      if (-1 < iVar25) {
        iVar18 = iVar25;
      }
      *(int *)((long)puVar8 + 0x649c) = iVar17;
      uVar19 = (uint)(((double)(uVar30 - 3) * (double)iVar18) / 2147483647.0);
      *(int *)(puVar8 + 0xc94) = iVar18;
      if ((int)uVar29 <= (int)uVar19) {
        uVar19 = uVar19 + 1;
      }
      if ((int)uVar21 <= (int)uVar19) {
        uVar19 = uVar19 + 1;
      }
      if ((int)uVar22 <= (int)uVar19) {
        uVar19 = uVar19 + 1;
      }
      bVar16 = 2;
      fVar31 = -NAN;
      if ((((((int)uVar29 < 0) || ((int)uVar30 <= (int)uVar29)) || ((int)uVar21 < 0)) ||
          ((uVar30 <= uVar21 || ((int)uVar22 < 0)))) ||
         ((uVar30 <= uVar22 || (((int)uVar19 < 0 || ((int)uVar30 <= (int)uVar19)))))) {
LAB_10967f5bc:
        *pfVar15 = fVar31;
        bVar16 = *(byte *)((long)puVar8 + 0x681c) & 0xf9 | bVar16;
        goto LAB_10967f5d0;
      }
      uVar1 = *(uint *)((long)puVar9 + (ulong)uVar29 * 4);
      if ((99 < uVar1) ||
         (((uVar2 = *(uint *)((long)puVar9 + (ulong)uVar21 * 4), 99 < uVar2 ||
           (uVar3 = *(uint *)((long)puVar9 + (ulong)uVar22 * 4), 99 < uVar3)) ||
          (uVar4 = *(uint *)((long)puVar9 + (ulong)uVar19 * 4), 99 < uVar4)))) {
        bVar16 = 4;
        fVar31 = -NAN;
        goto LAB_10967f5bc;
      }
      fVar31 = *(float *)((long)puVar10 + (ulong)uVar1 * 0xc);
      fVar33 = ((float *)((long)puVar10 + (ulong)uVar1 * 0xc))[1];
      uVar37 = *(undefined8 *)((long)puVar10 + (ulong)uVar3 * 0xc);
      fVar49 = (float)uVar37;
      fVar52 = *(float *)((long)puVar10 + (ulong)uVar2 * 0xc);
      fVar32 = ((float *)((long)puVar10 + (ulong)uVar2 * 0xc))[1];
      fVar36 = *(float *)((long)puVar10 + (ulong)uVar4 * 0xc);
      fVar39 = ((float *)((long)puVar10 + (ulong)uVar4 * 0xc))[1];
      uVar51 = NEON_ext(uVar37,(ulong)(uint)fVar32,4,1);
      fVar45 = (float)((ulong)uVar37 >> 0x20);
      fVar41 = (float)uVar51;
      fVar42 = (float)((ulong)uVar51 >> 0x20);
      fVar35 = (fVar36 * (fVar33 - fVar41) + (fVar41 - fVar39) * fVar31 + fVar49 * (fVar39 - fVar33)
               ) * 0.5;
      fVar46 = (fVar49 * (fVar33 - fVar42) + (fVar42 - fVar45) * fVar31 + fVar52 * (fVar45 - fVar33)
               ) * 0.5;
      uVar38 = CONCAT44(fVar46,fVar35) ^
               (CONCAT44(fVar46,fVar35) ^ CONCAT44(-fVar46,-fVar35)) &
               CONCAT44(-(uint)(fVar46 < 0.0),-(uint)(fVar35 < 0.0));
      uVar37 = NEON_rev64(CONCAT44((fVar45 - fVar39) * fVar52 + fVar49 * (fVar39 - fVar32),
                                   (fVar39 - fVar33) * fVar52 + fVar31 * (fVar32 - fVar39)),4);
      fVar31 = ((fVar32 - fVar41) * fVar36 + (float)uVar37) * 0.5;
      fVar35 = ((fVar33 - fVar42) * fVar36 + (float)((ulong)uVar37 >> 0x20)) * 0.5;
      uVar40 = CONCAT44(fVar35,fVar31) ^
               (CONCAT44(fVar35,fVar31) ^ CONCAT44(-fVar35,-fVar31)) &
               CONCAT44(-(uint)(fVar35 < 0.0),-(uint)(fVar31 < 0.0));
      fVar45 = (float)uVar38;
      fVar49 = (float)uVar40;
      fVar46 = (float)(uVar38 >> 0x20);
      fVar52 = (float)(uVar40 >> 0x20);
      uVar40 = uVar40 ^ (uVar40 ^ uVar38) &
                        CONCAT44(-(uint)(fVar46 < fVar52),-(uint)(fVar45 < fVar49));
      fVar31 = (float)(uVar40 >> 0x20);
      fVar35 = (float)uVar40;
      if (fVar35 <= fVar31) {
        fVar31 = fVar35;
      }
      if (iVar11 < 1000) {
        fVar35 = ABS(((fVar52 - fVar46) - fVar45) - fVar49);
        bVar5 = true;
        if ((10.0 <= ABS(((fVar46 - fVar52) - fVar45) - fVar49)) && (bVar5 = false, !NAN(fVar35))) {
          bVar5 = fVar35 < 10.0;
        }
        fVar35 = ABS(((fVar45 - fVar52) - fVar46) - fVar49);
        bVar6 = true;
        if ((!bVar5) && (bVar6 = false, !NAN(fVar35))) {
          bVar6 = fVar35 < 10.0;
        }
        fVar35 = ABS(((fVar49 - fVar52) - fVar45) - fVar46);
        bVar5 = true;
        if ((!bVar6) && (bVar5 = false, !NAN(fVar35))) {
          bVar5 = fVar35 < 10.0;
        }
        if ((!bVar5) && (5000.0 <= fVar31)) goto LAB_10967f3e0;
        iVar11 = iVar11 + 1;
      }
      else {
LAB_10967f3e0:
        FUN_10967ed94(puVar10,lVar12);
        lVar20 = 0;
        iVar17 = 0;
        *(undefined8 *)((long)puVar8 + 0x67ac) = 0;
        *(undefined8 *)((long)puVar8 + 0x67a4) = 0;
        *(undefined8 *)((long)puVar8 + 0x67bc) = 0;
        *(undefined8 *)((long)puVar8 + 0x67b4) = 0;
        *(undefined8 *)((long)puVar8 + 0x678c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6784) = 0;
        *(undefined8 *)((long)puVar8 + 0x679c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6794) = 0;
        *(undefined8 *)((long)puVar8 + 0x676c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6764) = 0;
        *(undefined8 *)((long)puVar8 + 0x677c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6774) = 0;
        *(undefined8 *)((long)puVar8 + 0x674c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6744) = 0;
        *(undefined8 *)((long)puVar8 + 0x675c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6754) = 0;
        *(undefined8 *)((long)puVar8 + 0x672c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6724) = 0;
        *(undefined8 *)((long)puVar8 + 0x673c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6734) = 0;
        *(undefined8 *)((long)puVar8 + 0x670c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6704) = 0;
        *(undefined8 *)((long)puVar8 + 0x671c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6714) = 0;
        *(undefined8 *)((long)puVar8 + 0x66ec) = 0;
        *(undefined8 *)((long)puVar8 + 0x66e4) = 0;
        *(undefined8 *)((long)puVar8 + 0x66fc) = 0;
        *(undefined8 *)((long)puVar8 + 0x66f4) = 0;
        *(undefined8 *)((long)puVar8 + 0x66cc) = 0;
        *(undefined8 *)((long)puVar8 + 0x66c4) = 0;
        *(undefined8 *)((long)puVar8 + 0x66dc) = 0;
        *(undefined8 *)((long)puVar8 + 0x66d4) = 0;
        *(undefined8 *)((long)puVar8 + 0x66ac) = 0;
        *(undefined8 *)((long)puVar8 + 0x66a4) = 0;
        *(undefined8 *)((long)puVar8 + 0x66bc) = 0;
        *(undefined8 *)((long)puVar8 + 0x66b4) = 0;
        *(undefined8 *)((long)puVar8 + 0x668c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6684) = 0;
        *(undefined8 *)((long)puVar8 + 0x669c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6694) = 0;
        *(undefined8 *)((long)puVar8 + 0x666c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6664) = 0;
        *(undefined8 *)((long)puVar8 + 0x667c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6674) = 0;
        *(undefined8 *)((long)puVar8 + 0x664c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6644) = 0;
        *(undefined8 *)((long)puVar8 + 0x665c) = 0;
        *(undefined8 *)((long)puVar8 + 0x6654) = 0;
        *(undefined8 *)((long)puVar8 + 0x663c) = 0;
        *puVar26 = 0;
        pfVar24 = (float *)((long)puVar10 + 4);
        piVar28 = (int *)(lVar12 + 8);
        do {
          if (*piVar28 != 0) {
            fVar35 = pfVar24[-1];
            fVar45 = *pfVar24;
            fVar46 = fStack_39c + fStack_3a0 * fVar45 + fStack_3a4 * fVar35;
            fVar31 = 8388608.0;
            if (fVar46 != 0.0) {
              fVar31 = 1.0 / fVar46;
            }
            fVar46 = (fStack_3b4 + fStack_3b8 * fVar45 + fStack_3bc * fVar35) * fVar31 -
                     (float)piVar28[-2];
            fVar31 = (fStack_3a8 + fStack_3ac * fVar45 + fStack_3b0 * fVar35) * fVar31 -
                     (float)piVar28[-1];
            if (fVar46 * fVar46 + fVar31 * fVar31 < fVar48) {
              iVar17 = iVar17 + 1;
              *(undefined4 *)((long)puVar26 + lVar20) = 1;
            }
          }
          lVar20 = lVar20 + 4;
          pfVar24 = pfVar24 + 3;
          piVar28 = piVar28 + 3;
        } while (lVar20 != 400);
        iVar25 = *(int *)((long)puVar8 + 0x67c4);
        if (iVar25 < iVar17) {
          *(int *)((long)puVar8 + 0x67c4) = iVar17;
          fStack_3c4 = fStack_3a0;
          _memcpy(param_10,puVar26,400);
          *param_12 = *(undefined4 *)((long)puVar9 + (ulong)uVar29 * 4);
          param_12[1] = *(undefined4 *)((long)puVar9 + (ulong)uVar21 * 4);
          param_12[2] = *(undefined4 *)((long)puVar9 + (ulong)uVar22 * 4);
          param_12[3] = *(undefined4 *)((long)puVar9 + (ulong)uVar19 * 4);
          fStack_3e4 = fStack_3bc;
          fStack_3e0 = fStack_3b8;
          fStack_3dc = fStack_3b4;
          fStack_3d8 = fStack_3b0;
          fStack_3d4 = fStack_3ac;
          fStack_3d0 = fStack_3a8;
          iVar25 = *(int *)((long)puVar8 + 0x67c4);
          fStack_3cc = fStack_3a4;
          fStack_3c8 = fStack_39c;
        }
        if ((int)((float)(int)uVar30 * 0.8) <= iVar25) break;
        iVar13 = iVar13 + 1;
      }
    } while (iVar13 < 300);
    lVar20 = 0;
    *(undefined4 *)((long)puVar8 + 0x67c4) = 0;
    pfVar24 = (float *)((long)puVar10 + 4);
    piVar28 = (int *)(lVar12 + 8);
    do {
      if (*piVar28 != 0) {
        fVar35 = pfVar24[-1];
        fVar45 = *pfVar24;
        fVar46 = fStack_3c8 + fStack_3c4 * fVar45 + fStack_3cc * fVar35;
        fVar31 = 8388608.0;
        if (fVar46 != 0.0) {
          fVar31 = 1.0 / fVar46;
        }
        fVar46 = (fStack_3dc + fStack_3e0 * fVar45 + fStack_3e4 * fVar35) * fVar31 -
                 (float)piVar28[-2];
        fVar31 = (fStack_3d0 + fStack_3d4 * fVar45 + fStack_3d8 * fVar35) * fVar31 -
                 (float)piVar28[-1];
        *(undefined4 *)((long)param_10 + lVar20) = 0;
        if (fVar46 * fVar46 + fVar31 * fVar31 < fVar48) {
          *(int *)((long)puVar8 + 0x67c4) = *(int *)((long)puVar8 + 0x67c4) + 1;
          *(undefined4 *)((long)param_10 + lVar20) = 1;
        }
      }
      lVar20 = lVar20 + 4;
      pfVar24 = pfVar24 + 3;
      piVar28 = piVar28 + 3;
    } while (lVar20 != 400);
    *pfVar15 = *(float *)((long)puVar8 + 0x67c4);
    *pfVar14 = fStack_3e4;
    pfVar14[1] = fStack_3e0;
    pfVar14[2] = fStack_3dc;
    pfVar14[3] = fStack_3d8;
    pfVar14[4] = fStack_3d4;
    pfVar14[5] = fStack_3d0;
    pfVar14[6] = fStack_3cc;
    pfVar14[7] = fStack_3c4;
    pfVar14[8] = fStack_3c8;
  }
  return;
}



/* Entry: 10967eca8; end: 10967ed93;  */

void FUN_10967eca8(undefined4 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 *param_6,float *param_7,undefined4 *param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  float *pfVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int *piVar28;
  uint uVar29;
  uint uVar30;
  double dVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar35;
  ulong uVar34;
  float fVar36;
  float fVar38;
  ulong uVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  puVar9 = &uStack_d0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b8 = *param_1;
  uStack_b4 = param_1[1];
  uStack_88 = param_1[3];
  uStack_84 = param_1[4];
  uStack_58 = param_1[6];
  uStack_54 = param_1[7];
  uStack_b0 = 0x3f800000;
  uStack_ac = 0;
  uStack_9c = 0;
  uStack_a4 = 0;
  uStack_8c = 0x3f800000;
  uStack_80 = 0x3f800000;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_6c = 0;
  uStack_5c = 0x3f800000;
  uStack_50 = 0x3f800000;
  uStack_3c = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_2c = 0x3f800000;
  uStack_d0 = *param_2;
  uStack_c8 = *(undefined8 *)((long)param_2 + 0xc);
  uStack_c0 = param_2[3];
  puVar8 = &uStack_b8;
  iVar11 = 6;
  lVar12 = param_3;
  uStack_94 = uStack_b8;
  uStack_90 = uStack_b4;
  uStack_64 = uStack_88;
  uStack_60 = uStack_84;
  uStack_34 = uStack_58;
  uStack_30 = uStack_54;
  FUN_109675770();
  iVar13 = (int)lVar12;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x20) = 0x3f800000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_230;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_208 = *(undefined8 *)(puVar8 + (long)iVar11 * 3);
  uStack_1f8 = 0;
  uStack_200 = 0x3f800000;
  uStack_1e0 = 0;
  uStack_1dc = uStack_208;
  uStack_1d4 = 0x3f800000;
  uStack_19c = *(undefined8 *)(puVar8 + (long)iVar13 * 3);
  uStack_1b8 = 0;
  uStack_1c0 = 0x3f800000;
  uStack_1a0 = 0;
  uStack_194 = 0x3f800000;
  uStack_178 = 0;
  uStack_180 = 0x3f800000;
  uStack_15c = *(undefined8 *)(puVar8 + (long)(int)param_5 * 3);
  uStack_160 = 0;
  uStack_154 = 0x3f800000;
  uStack_138 = 0;
  uStack_140 = 0x3f800000;
  uStack_148 = *(undefined8 *)(puVar8 + (long)(int)param_6 * 3);
  uStack_11c = uStack_148;
  uStack_120 = 0;
  uStack_114 = 0x3f800000;
  uStack_230 = *(undefined8 *)((long)puVar9 + (long)iVar11 * 0xc);
  uStack_228 = *(undefined8 *)((long)puVar9 + (long)iVar13 * 0xc);
  fVar41 = (float)((ulong)uStack_208 >> 0x20);
  uStack_1f0 = CONCAT44(fVar41 * -(float)uStack_230,(float)uStack_208 * -(float)uStack_230);
  uStack_1e8 = 0;
  fVar44 = -*(float *)((long)puVar9 + (long)iVar11 * 0xc + 4);
  uStack_1d0 = CONCAT44(fVar41 * fVar44,(float)uStack_208 * fVar44);
  uStack_1c8 = uStack_19c;
  fVar44 = (float)((ulong)uStack_19c >> 0x20);
  uStack_1b0 = CONCAT44(fVar44 * -(float)uStack_228,(float)uStack_19c * -(float)uStack_228);
  uStack_1a8 = 0;
  fVar41 = -*(float *)((long)puVar9 + (long)iVar13 * 0xc + 4);
  uStack_190 = CONCAT44(fVar44 * fVar41,(float)uStack_19c * fVar41);
  uStack_188 = uStack_15c;
  uStack_220 = *(undefined8 *)((long)puVar9 + (long)(int)param_5 * 0xc);
  uStack_218 = *(undefined8 *)((long)puVar9 + (long)(int)param_6 * 0xc);
  fVar41 = (float)((ulong)uStack_15c >> 0x20);
  uStack_170 = CONCAT44(fVar41 * -(float)uStack_220,(float)uStack_15c * -(float)uStack_220);
  uStack_168 = 0;
  fVar44 = -*(float *)((long)puVar9 + (long)(int)param_5 * 0xc + 4);
  uStack_150 = CONCAT44(fVar41 * fVar44,(float)uStack_15c * fVar44);
  fVar44 = (float)((ulong)uStack_148 >> 0x20);
  uStack_130 = CONCAT44(fVar44 * -(float)uStack_218,(float)uStack_148 * -(float)uStack_218);
  uStack_128 = 0;
  fVar41 = -*(float *)((long)puVar9 + (long)(int)param_6 * 0xc + 4);
  uVar33 = CONCAT44(fVar44 * fVar41,(float)uStack_148 * fVar41);
  puVar9 = &uStack_208;
  lVar12 = 8;
  pfVar14 = param_7;
  pfVar15 = param_7;
  uStack_110 = uVar33;
  FUN_109675770();
  fVar41 = (float)uVar33;
  param_7[8] = 1.0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = 0;
  uVar30 = 0;
  puVar1 = (undefined8 *)((long)puVar9 + 0x64a4);
  *(undefined8 *)((long)puVar9 + 0x661c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6614) = 0;
  *(undefined8 *)((long)puVar9 + 0x662c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6624) = 0;
  *(undefined8 *)((long)puVar9 + 0x65fc) = 0;
  *(undefined8 *)((long)puVar9 + 0x65f4) = 0;
  *(undefined8 *)((long)puVar9 + 0x660c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6604) = 0;
  *(undefined8 *)((long)puVar9 + 0x65dc) = 0;
  *(undefined8 *)((long)puVar9 + 0x65d4) = 0;
  *(undefined8 *)((long)puVar9 + 0x65ec) = 0;
  *(undefined8 *)((long)puVar9 + 0x65e4) = 0;
  *(undefined8 *)((long)puVar9 + 0x65bc) = 0;
  *(undefined8 *)((long)puVar9 + 0x65b4) = 0;
  *(undefined8 *)((long)puVar9 + 0x65cc) = 0;
  *(undefined8 *)((long)puVar9 + 0x65c4) = 0;
  *(undefined8 *)((long)puVar9 + 0x659c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6594) = 0;
  *(undefined8 *)((long)puVar9 + 0x65ac) = 0;
  *(undefined8 *)((long)puVar9 + 0x65a4) = 0;
  *(undefined8 *)((long)puVar9 + 0x657c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6574) = 0;
  *(undefined8 *)((long)puVar9 + 0x658c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6584) = 0;
  *(undefined8 *)((long)puVar9 + 0x655c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6554) = 0;
  *(undefined8 *)((long)puVar9 + 0x656c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6564) = 0;
  *(undefined8 *)((long)puVar9 + 0x653c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6534) = 0;
  *(undefined8 *)((long)puVar9 + 0x654c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6544) = 0;
  *(undefined8 *)((long)puVar9 + 0x651c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6514) = 0;
  *(undefined8 *)((long)puVar9 + 0x652c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6524) = 0;
  *(undefined8 *)((long)puVar9 + 0x64fc) = 0;
  *(undefined8 *)((long)puVar9 + 0x64f4) = 0;
  *(undefined8 *)((long)puVar9 + 0x650c) = 0;
  *(undefined8 *)((long)puVar9 + 0x6504) = 0;
  *(undefined8 *)((long)puVar9 + 0x64dc) = 0;
  *(undefined8 *)((long)puVar9 + 0x64d4) = 0;
  *(undefined8 *)((long)puVar9 + 0x64ec) = 0;
  *(undefined8 *)((long)puVar9 + 0x64e4) = 0;
  *(undefined8 *)((long)puVar9 + 0x64bc) = 0;
  *(undefined8 *)((long)puVar9 + 0x64b4) = 0;
  *(undefined8 *)((long)puVar9 + 0x64cc) = 0;
  *(undefined8 *)((long)puVar9 + 0x64c4) = 0;
  lVar23 = 8;
  *(undefined8 *)((long)puVar9 + 0x64ac) = 0;
  *puVar1 = 0;
  puVar26 = puVar1;
  do {
    puVar27 = puVar26;
    if ((*(int *)(lVar12 + lVar23) != 0) && (*(int *)(param_5 + lVar20 * 4) != 0)) {
      puVar27 = (undefined8 *)((long)puVar26 + 4);
      *(int *)puVar26 = (int)lVar20;
      uVar30 = uVar30 + 1;
    }
    lVar20 = lVar20 + 1;
    lVar23 = lVar23 + 0xc;
    puVar26 = puVar27;
  } while ((int)lVar20 != 100);
  *(undefined4 *)((long)puVar9 + 0x67c4) = 0;
  param_6[0x2f] = 0;
  param_6[0x2e] = 0;
  param_6[0x31] = 0;
  param_6[0x30] = 0;
  param_6[0x2b] = 0;
  param_6[0x2a] = 0;
  param_6[0x2d] = 0;
  param_6[0x2c] = 0;
  param_6[0x27] = 0;
  param_6[0x26] = 0;
  param_6[0x29] = 0;
  param_6[0x28] = 0;
  param_6[0x23] = 0;
  param_6[0x22] = 0;
  param_6[0x25] = 0;
  param_6[0x24] = 0;
  param_6[0x1f] = 0;
  param_6[0x1e] = 0;
  param_6[0x21] = 0;
  param_6[0x20] = 0;
  param_6[0x1b] = 0;
  param_6[0x1a] = 0;
  param_6[0x1d] = 0;
  param_6[0x1c] = 0;
  param_6[0x17] = 0;
  param_6[0x16] = 0;
  param_6[0x19] = 0;
  param_6[0x18] = 0;
  param_6[0x13] = 0;
  param_6[0x12] = 0;
  param_6[0x15] = 0;
  param_6[0x14] = 0;
  param_6[0xf] = 0;
  param_6[0xe] = 0;
  param_6[0x11] = 0;
  param_6[0x10] = 0;
  param_6[0xb] = 0;
  param_6[10] = 0;
  param_6[0xd] = 0;
  param_6[0xc] = 0;
  param_6[7] = 0;
  param_6[6] = 0;
  param_6[9] = 0;
  param_6[8] = 0;
  param_6[3] = 0;
  param_6[2] = 0;
  param_6[5] = 0;
  param_6[4] = 0;
  param_6[1] = 0;
  *param_6 = 0;
  pfVar14[2] = 0.0;
  pfVar14[3] = 0.0;
  pfVar14[0] = 1.0;
  pfVar14[1] = 0.0;
  pfVar14[6] = 0.0;
  pfVar14[7] = 0.0;
  pfVar14[4] = 1.0;
  pfVar14[5] = 0.0;
  pfVar14[8] = 1.0;
  *pfVar15 = 0.0;
  if ((int)uVar30 < 4) {
    bVar16 = *(byte *)((long)puVar9 + 0x681c) | 6;
LAB_10967f5d0:
    *(byte *)((long)puVar9 + 0x681c) = bVar16;
  }
  else {
    iVar13 = 0;
    iVar11 = 0;
    puVar26 = (undefined8 *)((long)puVar9 + 0x6634);
    fStack_304 = 0.0;
    fStack_308 = 1.0;
    fStack_30c = 0.0;
    iVar18 = 1;
    fStack_310 = 0.0;
    fStack_314 = 1.0;
    fStack_318 = 0.0;
    fStack_31c = 0.0;
    fStack_324 = 1.0;
    fStack_320 = 0.0;
    do {
      iVar17 = (int)((double)iVar18 / 127773.0);
      iVar17 = (int)(((double)iVar18 - (double)iVar17 * 127773.0) * 16807.0 -
                    (double)(iVar17 * 0xb14));
      iVar18 = iVar17 + 0x7fffffff;
      if (-1 < iVar17) {
        iVar18 = iVar17;
      }
      dVar31 = (double)iVar18;
      uVar29 = (uint)(((double)uVar30 * dVar31) / 2147483647.0);
      *(int *)((long)puVar9 + 0x6494) = iVar18;
      iVar17 = (int)((dVar31 - (double)(int)(dVar31 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar31 / 127773.0) * 0xb14));
      iVar18 = iVar17 + 0x7fffffff;
      if (-1 < iVar17) {
        iVar18 = iVar17;
      }
      dVar31 = (double)iVar18;
      uVar21 = (uint)(((double)(uVar30 - 1) * dVar31) / 2147483647.0);
      if ((int)uVar29 <= (int)uVar21) {
        uVar21 = uVar21 + 1;
      }
      *(int *)(puVar9 + 0xc93) = iVar18;
      iVar18 = (int)((dVar31 - (double)(int)(dVar31 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar31 / 127773.0) * 0xb14));
      iVar17 = iVar18 + 0x7fffffff;
      if (-1 < iVar18) {
        iVar17 = iVar18;
      }
      dVar31 = (double)iVar17;
      uVar22 = (uint)(((double)(uVar30 - 2) * dVar31) / 2147483647.0);
      if ((int)uVar29 <= (int)uVar22) {
        uVar22 = uVar22 + 1;
      }
      iVar25 = (int)((dVar31 - (double)(int)(dVar31 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar31 / 127773.0) * 0xb14));
      if ((int)uVar21 <= (int)uVar22) {
        uVar22 = uVar22 + 1;
      }
      iVar18 = iVar25 + 0x7fffffff;
      if (-1 < iVar25) {
        iVar18 = iVar25;
      }
      *(int *)((long)puVar9 + 0x649c) = iVar17;
      uVar19 = (uint)(((double)(uVar30 - 3) * (double)iVar18) / 2147483647.0);
      *(int *)(puVar9 + 0xc94) = iVar18;
      if ((int)uVar29 <= (int)uVar19) {
        uVar19 = uVar19 + 1;
      }
      if ((int)uVar21 <= (int)uVar19) {
        uVar19 = uVar19 + 1;
      }
      if ((int)uVar22 <= (int)uVar19) {
        uVar19 = uVar19 + 1;
      }
      bVar16 = 2;
      fVar44 = -NAN;
      if ((((((int)uVar29 < 0) || ((int)uVar30 <= (int)uVar29)) || ((int)uVar21 < 0)) ||
          ((uVar30 <= uVar21 || ((int)uVar22 < 0)))) ||
         ((uVar30 <= uVar22 || (((int)uVar19 < 0 || ((int)uVar30 <= (int)uVar19)))))) {
LAB_10967f5bc:
        *pfVar15 = fVar44;
        bVar16 = *(byte *)((long)puVar9 + 0x681c) & 0xf9 | bVar16;
        goto LAB_10967f5d0;
      }
      uVar2 = *(uint *)((long)puVar1 + (ulong)uVar29 * 4);
      if ((99 < uVar2) ||
         (((uVar3 = *(uint *)((long)puVar1 + (ulong)uVar21 * 4), 99 < uVar3 ||
           (uVar4 = *(uint *)((long)puVar1 + (ulong)uVar22 * 4), 99 < uVar4)) ||
          (uVar5 = *(uint *)((long)puVar1 + (ulong)uVar19 * 4), 99 < uVar5)))) {
        bVar16 = 4;
        fVar44 = -NAN;
        goto LAB_10967f5bc;
      }
      fVar44 = *(float *)((long)puVar10 + (ulong)uVar2 * 0xc);
      fVar42 = ((float *)((long)puVar10 + (ulong)uVar2 * 0xc))[1];
      uVar33 = *(undefined8 *)((long)puVar10 + (ulong)uVar4 * 0xc);
      fVar36 = (float)uVar33;
      fVar38 = *(float *)((long)puVar10 + (ulong)uVar3 * 0xc);
      fVar39 = ((float *)((long)puVar10 + (ulong)uVar3 * 0xc))[1];
      fVar43 = *(float *)((long)puVar10 + (ulong)uVar5 * 0xc);
      fVar45 = ((float *)((long)puVar10 + (ulong)uVar5 * 0xc))[1];
      uVar47 = NEON_ext(uVar33,(ulong)(uint)fVar39,4,1);
      fVar40 = (float)((ulong)uVar33 >> 0x20);
      fVar46 = (float)uVar47;
      fVar48 = (float)((ulong)uVar47 >> 0x20);
      fVar32 = (fVar43 * (fVar42 - fVar46) + (fVar46 - fVar45) * fVar44 + fVar36 * (fVar45 - fVar42)
               ) * 0.5;
      fVar35 = (fVar36 * (fVar42 - fVar48) + (fVar48 - fVar40) * fVar44 + fVar38 * (fVar40 - fVar42)
               ) * 0.5;
      uVar34 = CONCAT44(fVar35,fVar32) ^
               (CONCAT44(fVar35,fVar32) ^ CONCAT44(-fVar35,-fVar32)) &
               CONCAT44(-(uint)(fVar35 < 0.0),-(uint)(fVar32 < 0.0));
      uVar33 = NEON_rev64(CONCAT44((fVar40 - fVar45) * fVar38 + fVar36 * (fVar45 - fVar39),
                                   (fVar45 - fVar42) * fVar38 + fVar44 * (fVar39 - fVar45)),4);
      fVar44 = ((fVar39 - fVar46) * fVar43 + (float)uVar33) * 0.5;
      fVar32 = ((fVar42 - fVar48) * fVar43 + (float)((ulong)uVar33 >> 0x20)) * 0.5;
      uVar37 = CONCAT44(fVar32,fVar44) ^
               (CONCAT44(fVar32,fVar44) ^ CONCAT44(-fVar32,-fVar44)) &
               CONCAT44(-(uint)(fVar32 < 0.0),-(uint)(fVar44 < 0.0));
      fVar40 = (float)uVar34;
      fVar36 = (float)uVar37;
      fVar35 = (float)(uVar34 >> 0x20);
      fVar38 = (float)(uVar37 >> 0x20);
      uVar37 = uVar37 ^ (uVar37 ^ uVar34) &
                        CONCAT44(-(uint)(fVar35 < fVar38),-(uint)(fVar40 < fVar36));
      fVar44 = (float)(uVar37 >> 0x20);
      fVar32 = (float)uVar37;
      if (fVar32 <= fVar44) {
        fVar44 = fVar32;
      }
      if (iVar11 < 1000) {
        fVar32 = ABS(((fVar38 - fVar35) - fVar40) - fVar36);
        bVar6 = true;
        if ((10.0 <= ABS(((fVar35 - fVar38) - fVar40) - fVar36)) && (bVar6 = false, !NAN(fVar32))) {
          bVar6 = fVar32 < 10.0;
        }
        fVar32 = ABS(((fVar40 - fVar38) - fVar35) - fVar36);
        bVar7 = true;
        if ((!bVar6) && (bVar7 = false, !NAN(fVar32))) {
          bVar7 = fVar32 < 10.0;
        }
        fVar32 = ABS(((fVar36 - fVar38) - fVar40) - fVar35);
        bVar6 = true;
        if ((!bVar7) && (bVar6 = false, !NAN(fVar32))) {
          bVar6 = fVar32 < 10.0;
        }
        if ((!bVar6) && (5000.0 <= fVar44)) goto LAB_10967f3e0;
        iVar11 = iVar11 + 1;
      }
      else {
LAB_10967f3e0:
        FUN_10967ed94(puVar10,lVar12);
        lVar20 = 0;
        iVar17 = 0;
        *(undefined8 *)((long)puVar9 + 0x67ac) = 0;
        *(undefined8 *)((long)puVar9 + 0x67a4) = 0;
        *(undefined8 *)((long)puVar9 + 0x67bc) = 0;
        *(undefined8 *)((long)puVar9 + 0x67b4) = 0;
        *(undefined8 *)((long)puVar9 + 0x678c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6784) = 0;
        *(undefined8 *)((long)puVar9 + 0x679c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6794) = 0;
        *(undefined8 *)((long)puVar9 + 0x676c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6764) = 0;
        *(undefined8 *)((long)puVar9 + 0x677c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6774) = 0;
        *(undefined8 *)((long)puVar9 + 0x674c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6744) = 0;
        *(undefined8 *)((long)puVar9 + 0x675c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6754) = 0;
        *(undefined8 *)((long)puVar9 + 0x672c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6724) = 0;
        *(undefined8 *)((long)puVar9 + 0x673c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6734) = 0;
        *(undefined8 *)((long)puVar9 + 0x670c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6704) = 0;
        *(undefined8 *)((long)puVar9 + 0x671c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6714) = 0;
        *(undefined8 *)((long)puVar9 + 0x66ec) = 0;
        *(undefined8 *)((long)puVar9 + 0x66e4) = 0;
        *(undefined8 *)((long)puVar9 + 0x66fc) = 0;
        *(undefined8 *)((long)puVar9 + 0x66f4) = 0;
        *(undefined8 *)((long)puVar9 + 0x66cc) = 0;
        *(undefined8 *)((long)puVar9 + 0x66c4) = 0;
        *(undefined8 *)((long)puVar9 + 0x66dc) = 0;
        *(undefined8 *)((long)puVar9 + 0x66d4) = 0;
        *(undefined8 *)((long)puVar9 + 0x66ac) = 0;
        *(undefined8 *)((long)puVar9 + 0x66a4) = 0;
        *(undefined8 *)((long)puVar9 + 0x66bc) = 0;
        *(undefined8 *)((long)puVar9 + 0x66b4) = 0;
        *(undefined8 *)((long)puVar9 + 0x668c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6684) = 0;
        *(undefined8 *)((long)puVar9 + 0x669c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6694) = 0;
        *(undefined8 *)((long)puVar9 + 0x666c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6664) = 0;
        *(undefined8 *)((long)puVar9 + 0x667c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6674) = 0;
        *(undefined8 *)((long)puVar9 + 0x664c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6644) = 0;
        *(undefined8 *)((long)puVar9 + 0x665c) = 0;
        *(undefined8 *)((long)puVar9 + 0x6654) = 0;
        *(undefined8 *)((long)puVar9 + 0x663c) = 0;
        *puVar26 = 0;
        pfVar24 = (float *)((long)puVar10 + 4);
        piVar28 = (int *)(lVar12 + 8);
        do {
          if (*piVar28 != 0) {
            fVar32 = pfVar24[-1];
            fVar40 = *pfVar24;
            fVar35 = fStack_2dc + fStack_2e0 * fVar40 + fStack_2e4 * fVar32;
            fVar44 = 8388608.0;
            if (fVar35 != 0.0) {
              fVar44 = 1.0 / fVar35;
            }
            fVar35 = (fStack_2f4 + fStack_2f8 * fVar40 + fStack_2fc * fVar32) * fVar44 -
                     (float)piVar28[-2];
            fVar44 = (fStack_2e8 + fStack_2ec * fVar40 + fStack_2f0 * fVar32) * fVar44 -
                     (float)piVar28[-1];
            if (fVar35 * fVar35 + fVar44 * fVar44 < fVar41) {
              iVar17 = iVar17 + 1;
              *(undefined4 *)((long)puVar26 + lVar20) = 1;
            }
          }
          lVar20 = lVar20 + 4;
          pfVar24 = pfVar24 + 3;
          piVar28 = piVar28 + 3;
        } while (lVar20 != 400);
        iVar25 = *(int *)((long)puVar9 + 0x67c4);
        if (iVar25 < iVar17) {
          *(int *)((long)puVar9 + 0x67c4) = iVar17;
          fStack_304 = fStack_2e0;
          _memcpy(param_6,puVar26,400);
          *param_8 = *(undefined4 *)((long)puVar1 + (ulong)uVar29 * 4);
          param_8[1] = *(undefined4 *)((long)puVar1 + (ulong)uVar21 * 4);
          param_8[2] = *(undefined4 *)((long)puVar1 + (ulong)uVar22 * 4);
          param_8[3] = *(undefined4 *)((long)puVar1 + (ulong)uVar19 * 4);
          fStack_324 = fStack_2fc;
          fStack_320 = fStack_2f8;
          fStack_31c = fStack_2f4;
          fStack_318 = fStack_2f0;
          fStack_314 = fStack_2ec;
          fStack_310 = fStack_2e8;
          iVar25 = *(int *)((long)puVar9 + 0x67c4);
          fStack_30c = fStack_2e4;
          fStack_308 = fStack_2dc;
        }
        if ((int)((float)(int)uVar30 * 0.8) <= iVar25) break;
        iVar13 = iVar13 + 1;
      }
    } while (iVar13 < 300);
    lVar20 = 0;
    *(undefined4 *)((long)puVar9 + 0x67c4) = 0;
    pfVar24 = (float *)((long)puVar10 + 4);
    piVar28 = (int *)(lVar12 + 8);
    do {
      if (*piVar28 != 0) {
        fVar32 = pfVar24[-1];
        fVar40 = *pfVar24;
        fVar35 = fStack_308 + fStack_304 * fVar40 + fStack_30c * fVar32;
        fVar44 = 8388608.0;
        if (fVar35 != 0.0) {
          fVar44 = 1.0 / fVar35;
        }
        fVar35 = (fStack_31c + fStack_320 * fVar40 + fStack_324 * fVar32) * fVar44 -
                 (float)piVar28[-2];
        fVar44 = (fStack_310 + fStack_314 * fVar40 + fStack_318 * fVar32) * fVar44 -
                 (float)piVar28[-1];
        *(undefined4 *)((long)param_6 + lVar20) = 0;
        if (fVar35 * fVar35 + fVar44 * fVar44 < fVar41) {
          *(int *)((long)puVar9 + 0x67c4) = *(int *)((long)puVar9 + 0x67c4) + 1;
          *(undefined4 *)((long)param_6 + lVar20) = 1;
        }
      }
      lVar20 = lVar20 + 4;
      pfVar24 = pfVar24 + 3;
      piVar28 = piVar28 + 3;
    } while (lVar20 != 400);
    *pfVar15 = *(float *)((long)puVar9 + 0x67c4);
    *pfVar14 = fStack_324;
    pfVar14[1] = fStack_320;
    pfVar14[2] = fStack_31c;
    pfVar14[3] = fStack_318;
    pfVar14[4] = fStack_314;
    pfVar14[5] = fStack_310;
    pfVar14[6] = fStack_30c;
    pfVar14[7] = fStack_304;
    pfVar14[8] = fStack_308;
  }
  return;
}



/* Entry: 10967ed94; end: 10967ef1b;  */

void FUN_10967ed94(long param_1,long param_2,int param_3,int param_4,long param_5,
                  undefined8 *param_6,float *param_7,undefined4 *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  int *piVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  double dVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar34;
  ulong uVar33;
  float fVar35;
  float fVar37;
  ulong uVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar7 = &uStack_160;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = *(undefined8 *)(param_1 + (long)param_3 * 0xc);
  uStack_128 = 0;
  uStack_130 = 0x3f800000;
  uStack_110 = 0;
  puVar23 = (undefined8 *)(param_2 + (long)param_3 * 0xc);
  uStack_104 = 0x3f800000;
  uStack_f8 = *(undefined8 *)(param_1 + (long)param_4 * 0xc);
  puVar26 = (undefined8 *)(param_2 + (long)param_4 * 0xc);
  uStack_e8 = 0;
  uStack_f0 = 0x3f800000;
  puVar15 = (undefined8 *)(param_2 + (long)(int)param_5 * 0xc);
  uStack_d0 = 0;
  uStack_c4 = 0x3f800000;
  uStack_a8 = 0;
  uStack_b0 = 0x3f800000;
  puVar27 = (undefined8 *)(param_2 + (long)(int)param_6 * 0xc);
  uStack_b8 = *(undefined8 *)(param_1 + (long)(int)param_5 * 0xc);
  uStack_90 = 0;
  uStack_84 = 0x3f800000;
  uStack_68 = 0;
  uStack_70 = 0x3f800000;
  uStack_78 = *(undefined8 *)(param_1 + (long)(int)param_6 * 0xc);
  uStack_50 = 0;
  uStack_44 = 0x3f800000;
  uStack_160 = *puVar23;
  uStack_158 = *puVar26;
  fVar40 = (float)((ulong)uStack_138 >> 0x20);
  uStack_120 = CONCAT44(fVar40 * -(float)uStack_160,(float)uStack_138 * -(float)uStack_160);
  uStack_118 = 0;
  fVar43 = -*(float *)((long)puVar23 + 4);
  uStack_100 = CONCAT44(fVar40 * fVar43,(float)uStack_138 * fVar43);
  fVar43 = (float)((ulong)uStack_f8 >> 0x20);
  uStack_e0 = CONCAT44(fVar43 * -(float)uStack_158,(float)uStack_f8 * -(float)uStack_158);
  uStack_d8 = 0;
  fVar40 = -*(float *)((long)puVar26 + 4);
  uStack_c0 = CONCAT44(fVar43 * fVar40,(float)uStack_f8 * fVar40);
  uStack_150 = *puVar15;
  uStack_148 = *puVar27;
  fVar40 = (float)((ulong)uStack_b8 >> 0x20);
  uStack_a0 = CONCAT44(fVar40 * -(float)uStack_150,(float)uStack_b8 * -(float)uStack_150);
  uStack_98 = 0;
  fVar43 = -*(float *)((long)puVar15 + 4);
  uStack_80 = CONCAT44(fVar40 * fVar43,(float)uStack_b8 * fVar43);
  fVar43 = (float)((ulong)uStack_78 >> 0x20);
  uStack_60 = CONCAT44(fVar43 * -(float)uStack_148,(float)uStack_78 * -(float)uStack_148);
  uStack_58 = 0;
  fVar40 = -*(float *)((long)puVar27 + 4);
  uVar32 = CONCAT44(fVar43 * fVar40,(float)uStack_78 * fVar40);
  puVar15 = &uStack_138;
  lVar8 = 8;
  pfVar9 = param_7;
  pfVar10 = param_7;
  uStack_10c = uStack_138;
  uStack_cc = uStack_f8;
  uStack_8c = uStack_b8;
  uStack_4c = uStack_78;
  uStack_40 = uVar32;
  FUN_109675770();
  fVar40 = (float)uVar32;
  param_7[8] = 1.0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = 0;
  uVar29 = 0;
  puVar23 = (undefined8 *)((long)puVar15 + 0x64a4);
  *(undefined8 *)((long)puVar15 + 0x661c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6614) = 0;
  *(undefined8 *)((long)puVar15 + 0x662c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6624) = 0;
  *(undefined8 *)((long)puVar15 + 0x65fc) = 0;
  *(undefined8 *)((long)puVar15 + 0x65f4) = 0;
  *(undefined8 *)((long)puVar15 + 0x660c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6604) = 0;
  *(undefined8 *)((long)puVar15 + 0x65dc) = 0;
  *(undefined8 *)((long)puVar15 + 0x65d4) = 0;
  *(undefined8 *)((long)puVar15 + 0x65ec) = 0;
  *(undefined8 *)((long)puVar15 + 0x65e4) = 0;
  *(undefined8 *)((long)puVar15 + 0x65bc) = 0;
  *(undefined8 *)((long)puVar15 + 0x65b4) = 0;
  *(undefined8 *)((long)puVar15 + 0x65cc) = 0;
  *(undefined8 *)((long)puVar15 + 0x65c4) = 0;
  *(undefined8 *)((long)puVar15 + 0x659c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6594) = 0;
  *(undefined8 *)((long)puVar15 + 0x65ac) = 0;
  *(undefined8 *)((long)puVar15 + 0x65a4) = 0;
  *(undefined8 *)((long)puVar15 + 0x657c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6574) = 0;
  *(undefined8 *)((long)puVar15 + 0x658c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6584) = 0;
  *(undefined8 *)((long)puVar15 + 0x655c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6554) = 0;
  *(undefined8 *)((long)puVar15 + 0x656c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6564) = 0;
  *(undefined8 *)((long)puVar15 + 0x653c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6534) = 0;
  *(undefined8 *)((long)puVar15 + 0x654c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6544) = 0;
  *(undefined8 *)((long)puVar15 + 0x651c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6514) = 0;
  *(undefined8 *)((long)puVar15 + 0x652c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6524) = 0;
  *(undefined8 *)((long)puVar15 + 0x64fc) = 0;
  *(undefined8 *)((long)puVar15 + 0x64f4) = 0;
  *(undefined8 *)((long)puVar15 + 0x650c) = 0;
  *(undefined8 *)((long)puVar15 + 0x6504) = 0;
  *(undefined8 *)((long)puVar15 + 0x64dc) = 0;
  *(undefined8 *)((long)puVar15 + 0x64d4) = 0;
  *(undefined8 *)((long)puVar15 + 0x64ec) = 0;
  *(undefined8 *)((long)puVar15 + 0x64e4) = 0;
  *(undefined8 *)((long)puVar15 + 0x64bc) = 0;
  *(undefined8 *)((long)puVar15 + 0x64b4) = 0;
  *(undefined8 *)((long)puVar15 + 0x64cc) = 0;
  *(undefined8 *)((long)puVar15 + 0x64c4) = 0;
  lVar19 = 8;
  *(undefined8 *)((long)puVar15 + 0x64ac) = 0;
  *puVar23 = 0;
  puVar26 = puVar23;
  do {
    puVar27 = puVar26;
    if ((*(int *)(lVar8 + lVar19) != 0) && (*(int *)(param_5 + lVar16 * 4) != 0)) {
      puVar27 = (undefined8 *)((long)puVar26 + 4);
      *(int *)puVar26 = (int)lVar16;
      uVar29 = uVar29 + 1;
    }
    lVar16 = lVar16 + 1;
    lVar19 = lVar19 + 0xc;
    puVar26 = puVar27;
  } while ((int)lVar16 != 100);
  *(undefined4 *)((long)puVar15 + 0x67c4) = 0;
  param_6[0x2f] = 0;
  param_6[0x2e] = 0;
  param_6[0x31] = 0;
  param_6[0x30] = 0;
  param_6[0x2b] = 0;
  param_6[0x2a] = 0;
  param_6[0x2d] = 0;
  param_6[0x2c] = 0;
  param_6[0x27] = 0;
  param_6[0x26] = 0;
  param_6[0x29] = 0;
  param_6[0x28] = 0;
  param_6[0x23] = 0;
  param_6[0x22] = 0;
  param_6[0x25] = 0;
  param_6[0x24] = 0;
  param_6[0x1f] = 0;
  param_6[0x1e] = 0;
  param_6[0x21] = 0;
  param_6[0x20] = 0;
  param_6[0x1b] = 0;
  param_6[0x1a] = 0;
  param_6[0x1d] = 0;
  param_6[0x1c] = 0;
  param_6[0x17] = 0;
  param_6[0x16] = 0;
  param_6[0x19] = 0;
  param_6[0x18] = 0;
  param_6[0x13] = 0;
  param_6[0x12] = 0;
  param_6[0x15] = 0;
  param_6[0x14] = 0;
  param_6[0xf] = 0;
  param_6[0xe] = 0;
  param_6[0x11] = 0;
  param_6[0x10] = 0;
  param_6[0xb] = 0;
  param_6[10] = 0;
  param_6[0xd] = 0;
  param_6[0xc] = 0;
  param_6[7] = 0;
  param_6[6] = 0;
  param_6[9] = 0;
  param_6[8] = 0;
  param_6[3] = 0;
  param_6[2] = 0;
  param_6[5] = 0;
  param_6[4] = 0;
  param_6[1] = 0;
  *param_6 = 0;
  pfVar9[2] = 0.0;
  pfVar9[3] = 0.0;
  pfVar9[0] = 1.0;
  pfVar9[1] = 0.0;
  pfVar9[6] = 0.0;
  pfVar9[7] = 0.0;
  pfVar9[4] = 1.0;
  pfVar9[5] = 0.0;
  pfVar9[8] = 1.0;
  *pfVar10 = 0.0;
  if ((int)uVar29 < 4) {
    bVar11 = *(byte *)((long)puVar15 + 0x681c) | 6;
LAB_10967f5d0:
    *(byte *)((long)puVar15 + 0x681c) = bVar11;
  }
  else {
    iVar22 = 0;
    iVar25 = 0;
    puVar26 = (undefined8 *)((long)puVar15 + 0x6634);
    fStack_234 = 0.0;
    fStack_238 = 1.0;
    fStack_23c = 0.0;
    iVar13 = 1;
    fStack_240 = 0.0;
    fStack_244 = 1.0;
    fStack_248 = 0.0;
    fStack_24c = 0.0;
    fStack_254 = 1.0;
    fStack_250 = 0.0;
    do {
      iVar12 = (int)((double)iVar13 / 127773.0);
      iVar12 = (int)(((double)iVar13 - (double)iVar12 * 127773.0) * 16807.0 -
                    (double)(iVar12 * 0xb14));
      iVar13 = iVar12 + 0x7fffffff;
      if (-1 < iVar12) {
        iVar13 = iVar12;
      }
      dVar30 = (double)iVar13;
      uVar28 = (uint)(((double)uVar29 * dVar30) / 2147483647.0);
      *(int *)((long)puVar15 + 0x6494) = iVar13;
      iVar12 = (int)((dVar30 - (double)(int)(dVar30 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar30 / 127773.0) * 0xb14));
      iVar13 = iVar12 + 0x7fffffff;
      if (-1 < iVar12) {
        iVar13 = iVar12;
      }
      dVar30 = (double)iVar13;
      uVar17 = (uint)(((double)(uVar29 - 1) * dVar30) / 2147483647.0);
      if ((int)uVar28 <= (int)uVar17) {
        uVar17 = uVar17 + 1;
      }
      *(int *)(puVar15 + 0xc93) = iVar13;
      iVar13 = (int)((dVar30 - (double)(int)(dVar30 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar30 / 127773.0) * 0xb14));
      iVar12 = iVar13 + 0x7fffffff;
      if (-1 < iVar13) {
        iVar12 = iVar13;
      }
      dVar30 = (double)iVar12;
      uVar18 = (uint)(((double)(uVar29 - 2) * dVar30) / 2147483647.0);
      if ((int)uVar28 <= (int)uVar18) {
        uVar18 = uVar18 + 1;
      }
      iVar21 = (int)((dVar30 - (double)(int)(dVar30 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar30 / 127773.0) * 0xb14));
      if ((int)uVar17 <= (int)uVar18) {
        uVar18 = uVar18 + 1;
      }
      iVar13 = iVar21 + 0x7fffffff;
      if (-1 < iVar21) {
        iVar13 = iVar21;
      }
      *(int *)((long)puVar15 + 0x649c) = iVar12;
      uVar14 = (uint)(((double)(uVar29 - 3) * (double)iVar13) / 2147483647.0);
      *(int *)(puVar15 + 0xc94) = iVar13;
      if ((int)uVar28 <= (int)uVar14) {
        uVar14 = uVar14 + 1;
      }
      if ((int)uVar17 <= (int)uVar14) {
        uVar14 = uVar14 + 1;
      }
      if ((int)uVar18 <= (int)uVar14) {
        uVar14 = uVar14 + 1;
      }
      bVar11 = 2;
      fVar43 = -NAN;
      if ((((((int)uVar28 < 0) || ((int)uVar29 <= (int)uVar28)) || ((int)uVar17 < 0)) ||
          ((uVar29 <= uVar17 || ((int)uVar18 < 0)))) ||
         ((uVar29 <= uVar18 || (((int)uVar14 < 0 || ((int)uVar29 <= (int)uVar14)))))) {
LAB_10967f5bc:
        *pfVar10 = fVar43;
        bVar11 = *(byte *)((long)puVar15 + 0x681c) & 0xf9 | bVar11;
        goto LAB_10967f5d0;
      }
      uVar1 = *(uint *)((long)puVar23 + (ulong)uVar28 * 4);
      if ((99 < uVar1) ||
         (((uVar2 = *(uint *)((long)puVar23 + (ulong)uVar17 * 4), 99 < uVar2 ||
           (uVar3 = *(uint *)((long)puVar23 + (ulong)uVar18 * 4), 99 < uVar3)) ||
          (uVar4 = *(uint *)((long)puVar23 + (ulong)uVar14 * 4), 99 < uVar4)))) {
        bVar11 = 4;
        fVar43 = -NAN;
        goto LAB_10967f5bc;
      }
      fVar43 = *(float *)((long)puVar7 + (ulong)uVar1 * 0xc);
      fVar41 = ((float *)((long)puVar7 + (ulong)uVar1 * 0xc))[1];
      uVar32 = *(undefined8 *)((long)puVar7 + (ulong)uVar3 * 0xc);
      fVar35 = (float)uVar32;
      fVar37 = *(float *)((long)puVar7 + (ulong)uVar2 * 0xc);
      fVar38 = ((float *)((long)puVar7 + (ulong)uVar2 * 0xc))[1];
      fVar42 = *(float *)((long)puVar7 + (ulong)uVar4 * 0xc);
      fVar44 = ((float *)((long)puVar7 + (ulong)uVar4 * 0xc))[1];
      uVar46 = NEON_ext(uVar32,(ulong)(uint)fVar38,4,1);
      fVar39 = (float)((ulong)uVar32 >> 0x20);
      fVar45 = (float)uVar46;
      fVar47 = (float)((ulong)uVar46 >> 0x20);
      fVar31 = (fVar42 * (fVar41 - fVar45) + (fVar45 - fVar44) * fVar43 + fVar35 * (fVar44 - fVar41)
               ) * 0.5;
      fVar34 = (fVar35 * (fVar41 - fVar47) + (fVar47 - fVar39) * fVar43 + fVar37 * (fVar39 - fVar41)
               ) * 0.5;
      uVar33 = CONCAT44(fVar34,fVar31) ^
               (CONCAT44(fVar34,fVar31) ^ CONCAT44(-fVar34,-fVar31)) &
               CONCAT44(-(uint)(fVar34 < 0.0),-(uint)(fVar31 < 0.0));
      uVar32 = NEON_rev64(CONCAT44((fVar39 - fVar44) * fVar37 + fVar35 * (fVar44 - fVar38),
                                   (fVar44 - fVar41) * fVar37 + fVar43 * (fVar38 - fVar44)),4);
      fVar43 = ((fVar38 - fVar45) * fVar42 + (float)uVar32) * 0.5;
      fVar31 = ((fVar41 - fVar47) * fVar42 + (float)((ulong)uVar32 >> 0x20)) * 0.5;
      uVar36 = CONCAT44(fVar31,fVar43) ^
               (CONCAT44(fVar31,fVar43) ^ CONCAT44(-fVar31,-fVar43)) &
               CONCAT44(-(uint)(fVar31 < 0.0),-(uint)(fVar43 < 0.0));
      fVar39 = (float)uVar33;
      fVar35 = (float)uVar36;
      fVar34 = (float)(uVar33 >> 0x20);
      fVar37 = (float)(uVar36 >> 0x20);
      uVar36 = uVar36 ^ (uVar36 ^ uVar33) &
                        CONCAT44(-(uint)(fVar34 < fVar37),-(uint)(fVar39 < fVar35));
      fVar43 = (float)(uVar36 >> 0x20);
      fVar31 = (float)uVar36;
      if (fVar31 <= fVar43) {
        fVar43 = fVar31;
      }
      if (iVar25 < 1000) {
        fVar31 = ABS(((fVar37 - fVar34) - fVar39) - fVar35);
        bVar5 = true;
        if ((10.0 <= ABS(((fVar34 - fVar37) - fVar39) - fVar35)) && (bVar5 = false, !NAN(fVar31))) {
          bVar5 = fVar31 < 10.0;
        }
        fVar31 = ABS(((fVar39 - fVar37) - fVar34) - fVar35);
        bVar6 = true;
        if ((!bVar5) && (bVar6 = false, !NAN(fVar31))) {
          bVar6 = fVar31 < 10.0;
        }
        fVar31 = ABS(((fVar35 - fVar37) - fVar39) - fVar34);
        bVar5 = true;
        if ((!bVar6) && (bVar5 = false, !NAN(fVar31))) {
          bVar5 = fVar31 < 10.0;
        }
        if ((!bVar5) && (5000.0 <= fVar43)) goto LAB_10967f3e0;
        iVar25 = iVar25 + 1;
      }
      else {
LAB_10967f3e0:
        FUN_10967ed94(puVar7,lVar8);
        lVar16 = 0;
        iVar12 = 0;
        *(undefined8 *)((long)puVar15 + 0x67ac) = 0;
        *(undefined8 *)((long)puVar15 + 0x67a4) = 0;
        *(undefined8 *)((long)puVar15 + 0x67bc) = 0;
        *(undefined8 *)((long)puVar15 + 0x67b4) = 0;
        *(undefined8 *)((long)puVar15 + 0x678c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6784) = 0;
        *(undefined8 *)((long)puVar15 + 0x679c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6794) = 0;
        *(undefined8 *)((long)puVar15 + 0x676c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6764) = 0;
        *(undefined8 *)((long)puVar15 + 0x677c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6774) = 0;
        *(undefined8 *)((long)puVar15 + 0x674c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6744) = 0;
        *(undefined8 *)((long)puVar15 + 0x675c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6754) = 0;
        *(undefined8 *)((long)puVar15 + 0x672c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6724) = 0;
        *(undefined8 *)((long)puVar15 + 0x673c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6734) = 0;
        *(undefined8 *)((long)puVar15 + 0x670c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6704) = 0;
        *(undefined8 *)((long)puVar15 + 0x671c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6714) = 0;
        *(undefined8 *)((long)puVar15 + 0x66ec) = 0;
        *(undefined8 *)((long)puVar15 + 0x66e4) = 0;
        *(undefined8 *)((long)puVar15 + 0x66fc) = 0;
        *(undefined8 *)((long)puVar15 + 0x66f4) = 0;
        *(undefined8 *)((long)puVar15 + 0x66cc) = 0;
        *(undefined8 *)((long)puVar15 + 0x66c4) = 0;
        *(undefined8 *)((long)puVar15 + 0x66dc) = 0;
        *(undefined8 *)((long)puVar15 + 0x66d4) = 0;
        *(undefined8 *)((long)puVar15 + 0x66ac) = 0;
        *(undefined8 *)((long)puVar15 + 0x66a4) = 0;
        *(undefined8 *)((long)puVar15 + 0x66bc) = 0;
        *(undefined8 *)((long)puVar15 + 0x66b4) = 0;
        *(undefined8 *)((long)puVar15 + 0x668c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6684) = 0;
        *(undefined8 *)((long)puVar15 + 0x669c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6694) = 0;
        *(undefined8 *)((long)puVar15 + 0x666c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6664) = 0;
        *(undefined8 *)((long)puVar15 + 0x667c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6674) = 0;
        *(undefined8 *)((long)puVar15 + 0x664c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6644) = 0;
        *(undefined8 *)((long)puVar15 + 0x665c) = 0;
        *(undefined8 *)((long)puVar15 + 0x6654) = 0;
        *(undefined8 *)((long)puVar15 + 0x663c) = 0;
        *puVar26 = 0;
        pfVar20 = (float *)((long)puVar7 + 4);
        piVar24 = (int *)(lVar8 + 8);
        do {
          if (*piVar24 != 0) {
            fVar31 = pfVar20[-1];
            fVar39 = *pfVar20;
            fVar34 = fStack_20c + fStack_210 * fVar39 + fStack_214 * fVar31;
            fVar43 = 8388608.0;
            if (fVar34 != 0.0) {
              fVar43 = 1.0 / fVar34;
            }
            fVar34 = (fStack_224 + fStack_228 * fVar39 + fStack_22c * fVar31) * fVar43 -
                     (float)piVar24[-2];
            fVar43 = (fStack_218 + fStack_21c * fVar39 + fStack_220 * fVar31) * fVar43 -
                     (float)piVar24[-1];
            if (fVar34 * fVar34 + fVar43 * fVar43 < fVar40) {
              iVar12 = iVar12 + 1;
              *(undefined4 *)((long)puVar26 + lVar16) = 1;
            }
          }
          lVar16 = lVar16 + 4;
          pfVar20 = pfVar20 + 3;
          piVar24 = piVar24 + 3;
        } while (lVar16 != 400);
        iVar21 = *(int *)((long)puVar15 + 0x67c4);
        if (iVar21 < iVar12) {
          *(int *)((long)puVar15 + 0x67c4) = iVar12;
          fStack_234 = fStack_210;
          _memcpy(param_6,puVar26,400);
          *param_8 = *(undefined4 *)((long)puVar23 + (ulong)uVar28 * 4);
          param_8[1] = *(undefined4 *)((long)puVar23 + (ulong)uVar17 * 4);
          param_8[2] = *(undefined4 *)((long)puVar23 + (ulong)uVar18 * 4);
          param_8[3] = *(undefined4 *)((long)puVar23 + (ulong)uVar14 * 4);
          fStack_254 = fStack_22c;
          fStack_250 = fStack_228;
          fStack_24c = fStack_224;
          fStack_248 = fStack_220;
          fStack_244 = fStack_21c;
          fStack_240 = fStack_218;
          iVar21 = *(int *)((long)puVar15 + 0x67c4);
          fStack_23c = fStack_214;
          fStack_238 = fStack_20c;
        }
        if ((int)((float)(int)uVar29 * 0.8) <= iVar21) break;
        iVar22 = iVar22 + 1;
      }
    } while (iVar22 < 300);
    lVar16 = 0;
    *(undefined4 *)((long)puVar15 + 0x67c4) = 0;
    pfVar20 = (float *)((long)puVar7 + 4);
    piVar24 = (int *)(lVar8 + 8);
    do {
      if (*piVar24 != 0) {
        fVar31 = pfVar20[-1];
        fVar39 = *pfVar20;
        fVar34 = fStack_238 + fStack_234 * fVar39 + fStack_23c * fVar31;
        fVar43 = 8388608.0;
        if (fVar34 != 0.0) {
          fVar43 = 1.0 / fVar34;
        }
        fVar34 = (fStack_24c + fStack_250 * fVar39 + fStack_254 * fVar31) * fVar43 -
                 (float)piVar24[-2];
        fVar43 = (fStack_240 + fStack_244 * fVar39 + fStack_248 * fVar31) * fVar43 -
                 (float)piVar24[-1];
        *(undefined4 *)((long)param_6 + lVar16) = 0;
        if (fVar34 * fVar34 + fVar43 * fVar43 < fVar40) {
          *(int *)((long)puVar15 + 0x67c4) = *(int *)((long)puVar15 + 0x67c4) + 1;
          *(undefined4 *)((long)param_6 + lVar16) = 1;
        }
      }
      lVar16 = lVar16 + 4;
      pfVar20 = pfVar20 + 3;
      piVar24 = piVar24 + 3;
    } while (lVar16 != 400);
    *pfVar10 = *(float *)((long)puVar15 + 0x67c4);
    *pfVar9 = fStack_254;
    pfVar9[1] = fStack_250;
    pfVar9[2] = fStack_24c;
    pfVar9[3] = fStack_248;
    pfVar9[4] = fStack_244;
    pfVar9[5] = fStack_240;
    pfVar9[6] = fStack_23c;
    pfVar9[7] = fStack_234;
    pfVar9[8] = fStack_238;
  }
  return;
}



/* Entry: 10967ef1c; end: 10967f6eb;  */

void FUN_10967ef1c(float param_1,long param_2,long param_3,long param_4,float *param_5,long param_6,
                  undefined8 *param_7,undefined4 *param_8,undefined4 *param_9)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  float *pfVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar32;
  ulong uVar31;
  float fVar33;
  float fVar35;
  ulong uVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  lVar12 = 0;
  uVar26 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x64a4);
  *(undefined8 *)(param_2 + 0x661c) = 0;
  *(undefined8 *)(param_2 + 0x6614) = 0;
  *(undefined8 *)(param_2 + 0x662c) = 0;
  *(undefined8 *)(param_2 + 0x6624) = 0;
  *(undefined8 *)(param_2 + 0x65fc) = 0;
  *(undefined8 *)(param_2 + 0x65f4) = 0;
  *(undefined8 *)(param_2 + 0x660c) = 0;
  *(undefined8 *)(param_2 + 0x6604) = 0;
  *(undefined8 *)(param_2 + 0x65dc) = 0;
  *(undefined8 *)(param_2 + 0x65d4) = 0;
  *(undefined8 *)(param_2 + 0x65ec) = 0;
  *(undefined8 *)(param_2 + 0x65e4) = 0;
  *(undefined8 *)(param_2 + 0x65bc) = 0;
  *(undefined8 *)(param_2 + 0x65b4) = 0;
  *(undefined8 *)(param_2 + 0x65cc) = 0;
  *(undefined8 *)(param_2 + 0x65c4) = 0;
  *(undefined8 *)(param_2 + 0x659c) = 0;
  *(undefined8 *)(param_2 + 0x6594) = 0;
  *(undefined8 *)(param_2 + 0x65ac) = 0;
  *(undefined8 *)(param_2 + 0x65a4) = 0;
  *(undefined8 *)(param_2 + 0x657c) = 0;
  *(undefined8 *)(param_2 + 0x6574) = 0;
  *(undefined8 *)(param_2 + 0x658c) = 0;
  *(undefined8 *)(param_2 + 0x6584) = 0;
  *(undefined8 *)(param_2 + 0x655c) = 0;
  *(undefined8 *)(param_2 + 0x6554) = 0;
  *(undefined8 *)(param_2 + 0x656c) = 0;
  *(undefined8 *)(param_2 + 0x6564) = 0;
  *(undefined8 *)(param_2 + 0x653c) = 0;
  *(undefined8 *)(param_2 + 0x6534) = 0;
  *(undefined8 *)(param_2 + 0x654c) = 0;
  *(undefined8 *)(param_2 + 0x6544) = 0;
  *(undefined8 *)(param_2 + 0x651c) = 0;
  *(undefined8 *)(param_2 + 0x6514) = 0;
  *(undefined8 *)(param_2 + 0x652c) = 0;
  *(undefined8 *)(param_2 + 0x6524) = 0;
  *(undefined8 *)(param_2 + 0x64fc) = 0;
  *(undefined8 *)(param_2 + 0x64f4) = 0;
  *(undefined8 *)(param_2 + 0x650c) = 0;
  *(undefined8 *)(param_2 + 0x6504) = 0;
  *(undefined8 *)(param_2 + 0x64dc) = 0;
  *(undefined8 *)(param_2 + 0x64d4) = 0;
  *(undefined8 *)(param_2 + 0x64ec) = 0;
  *(undefined8 *)(param_2 + 0x64e4) = 0;
  *(undefined8 *)(param_2 + 0x64bc) = 0;
  *(undefined8 *)(param_2 + 0x64b4) = 0;
  *(undefined8 *)(param_2 + 0x64cc) = 0;
  *(undefined8 *)(param_2 + 0x64c4) = 0;
  lVar17 = 8;
  *(undefined8 *)(param_2 + 0x64ac) = 0;
  *puVar1 = 0;
  puVar20 = puVar1;
  do {
    puVar21 = puVar20;
    if ((*(int *)(param_4 + lVar17) != 0) && (*(int *)(param_6 + lVar12 * 4) != 0)) {
      puVar21 = (undefined8 *)((long)puVar20 + 4);
      *(int *)puVar20 = (int)lVar12;
      uVar26 = uVar26 + 1;
    }
    lVar12 = lVar12 + 1;
    lVar17 = lVar17 + 0xc;
    puVar20 = puVar21;
  } while ((int)lVar12 != 100);
  *(undefined4 *)(param_2 + 0x67c4) = 0;
  param_7[0x2f] = 0;
  param_7[0x2e] = 0;
  param_7[0x31] = 0;
  param_7[0x30] = 0;
  param_7[0x2b] = 0;
  param_7[0x2a] = 0;
  param_7[0x2d] = 0;
  param_7[0x2c] = 0;
  param_7[0x27] = 0;
  param_7[0x26] = 0;
  param_7[0x29] = 0;
  param_7[0x28] = 0;
  param_7[0x23] = 0;
  param_7[0x22] = 0;
  param_7[0x25] = 0;
  param_7[0x24] = 0;
  param_7[0x1f] = 0;
  param_7[0x1e] = 0;
  param_7[0x21] = 0;
  param_7[0x20] = 0;
  param_7[0x1b] = 0;
  param_7[0x1a] = 0;
  param_7[0x1d] = 0;
  param_7[0x1c] = 0;
  param_7[0x17] = 0;
  param_7[0x16] = 0;
  param_7[0x19] = 0;
  param_7[0x18] = 0;
  param_7[0x13] = 0;
  param_7[0x12] = 0;
  param_7[0x15] = 0;
  param_7[0x14] = 0;
  param_7[0xf] = 0;
  param_7[0xe] = 0;
  param_7[0x11] = 0;
  param_7[0x10] = 0;
  param_7[0xb] = 0;
  param_7[10] = 0;
  param_7[0xd] = 0;
  param_7[0xc] = 0;
  param_7[7] = 0;
  param_7[6] = 0;
  param_7[9] = 0;
  param_7[8] = 0;
  param_7[3] = 0;
  param_7[2] = 0;
  param_7[5] = 0;
  param_7[4] = 0;
  param_7[1] = 0;
  *param_7 = 0;
  param_5[2] = 0.0;
  param_5[3] = 0.0;
  param_5[0] = 1.0;
  param_5[1] = 0.0;
  param_5[6] = 0.0;
  param_5[7] = 0.0;
  param_5[4] = 1.0;
  param_5[5] = 0.0;
  param_5[8] = 1.0;
  *param_8 = 0;
  if ((int)uVar26 < 4) {
    bVar8 = *(byte *)(param_2 + 0x681c) | 6;
LAB_10967f5d0:
    *(byte *)(param_2 + 0x681c) = bVar8;
  }
  else {
    iVar22 = 0;
    iVar24 = 0;
    puVar20 = (undefined8 *)(param_2 + 0x6634);
    fStack_d4 = 0.0;
    fStack_d8 = 1.0;
    fStack_dc = 0.0;
    iVar10 = 1;
    fStack_e0 = 0.0;
    fStack_e4 = 1.0;
    fStack_e8 = 0.0;
    fStack_ec = 0.0;
    fStack_f4 = 1.0;
    fStack_f0 = 0.0;
    do {
      iVar9 = (int)((double)iVar10 / 127773.0);
      iVar9 = (int)(((double)iVar10 - (double)iVar9 * 127773.0) * 16807.0 - (double)(iVar9 * 0xb14))
      ;
      iVar10 = iVar9 + 0x7fffffff;
      if (-1 < iVar9) {
        iVar10 = iVar9;
      }
      dVar28 = (double)iVar10;
      uVar25 = (uint)(((double)uVar26 * dVar28) / 2147483647.0);
      *(int *)(param_2 + 0x6494) = iVar10;
      iVar9 = (int)((dVar28 - (double)(int)(dVar28 / 127773.0) * 127773.0) * 16807.0 -
                   (double)((int)(dVar28 / 127773.0) * 0xb14));
      iVar10 = iVar9 + 0x7fffffff;
      if (-1 < iVar9) {
        iVar10 = iVar9;
      }
      dVar28 = (double)iVar10;
      uVar14 = (uint)(((double)(uVar26 - 1) * dVar28) / 2147483647.0);
      if ((int)uVar25 <= (int)uVar14) {
        uVar14 = uVar14 + 1;
      }
      *(int *)(param_2 + 0x6498) = iVar10;
      iVar10 = (int)((dVar28 - (double)(int)(dVar28 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar28 / 127773.0) * 0xb14));
      iVar9 = iVar10 + 0x7fffffff;
      if (-1 < iVar10) {
        iVar9 = iVar10;
      }
      dVar28 = (double)iVar9;
      uVar15 = (uint)(((double)(uVar26 - 2) * dVar28) / 2147483647.0);
      if ((int)uVar25 <= (int)uVar15) {
        uVar15 = uVar15 + 1;
      }
      iVar19 = (int)((dVar28 - (double)(int)(dVar28 / 127773.0) * 127773.0) * 16807.0 -
                    (double)((int)(dVar28 / 127773.0) * 0xb14));
      if ((int)uVar14 <= (int)uVar15) {
        uVar15 = uVar15 + 1;
      }
      iVar10 = iVar19 + 0x7fffffff;
      if (-1 < iVar19) {
        iVar10 = iVar19;
      }
      *(int *)(param_2 + 0x649c) = iVar9;
      uVar11 = (uint)(((double)(uVar26 - 3) * (double)iVar10) / 2147483647.0);
      *(int *)(param_2 + 0x64a0) = iVar10;
      if ((int)uVar25 <= (int)uVar11) {
        uVar11 = uVar11 + 1;
      }
      if ((int)uVar14 <= (int)uVar11) {
        uVar11 = uVar11 + 1;
      }
      if ((int)uVar15 <= (int)uVar11) {
        uVar11 = uVar11 + 1;
      }
      bVar8 = 2;
      uVar16 = 0xffffffff;
      if ((((((int)uVar25 < 0) || ((int)uVar26 <= (int)uVar25)) || ((int)uVar14 < 0)) ||
          ((uVar26 <= uVar14 || ((int)uVar15 < 0)))) ||
         ((uVar26 <= uVar15 || (((int)uVar11 < 0 || ((int)uVar26 <= (int)uVar11)))))) {
LAB_10967f5bc:
        *param_8 = uVar16;
        bVar8 = *(byte *)(param_2 + 0x681c) & 0xf9 | bVar8;
        goto LAB_10967f5d0;
      }
      uVar2 = *(uint *)((long)puVar1 + (ulong)uVar25 * 4);
      if ((99 < uVar2) ||
         (((uVar3 = *(uint *)((long)puVar1 + (ulong)uVar14 * 4), 99 < uVar3 ||
           (uVar4 = *(uint *)((long)puVar1 + (ulong)uVar15 * 4), 99 < uVar4)) ||
          (uVar5 = *(uint *)((long)puVar1 + (ulong)uVar11 * 4), 99 < uVar5)))) {
        bVar8 = 4;
        uVar16 = 0xfffffffe;
        goto LAB_10967f5bc;
      }
      pfVar13 = (float *)(param_3 + (ulong)uVar2 * 0xc);
      pfVar18 = (float *)(param_3 + (ulong)uVar3 * 0xc);
      fVar27 = *pfVar13;
      fVar38 = pfVar13[1];
      uVar30 = *(undefined8 *)(param_3 + (ulong)uVar4 * 0xc);
      fVar33 = (float)uVar30;
      fVar35 = *pfVar18;
      fVar36 = pfVar18[1];
      pfVar13 = (float *)(param_3 + (ulong)uVar5 * 0xc);
      fVar39 = *pfVar13;
      fVar40 = pfVar13[1];
      uVar42 = NEON_ext(uVar30,(ulong)(uint)fVar36,4,1);
      fVar37 = (float)((ulong)uVar30 >> 0x20);
      fVar41 = (float)uVar42;
      fVar43 = (float)((ulong)uVar42 >> 0x20);
      fVar29 = (fVar39 * (fVar38 - fVar41) + (fVar41 - fVar40) * fVar27 + fVar33 * (fVar40 - fVar38)
               ) * 0.5;
      fVar32 = (fVar33 * (fVar38 - fVar43) + (fVar43 - fVar37) * fVar27 + fVar35 * (fVar37 - fVar38)
               ) * 0.5;
      uVar31 = CONCAT44(fVar32,fVar29) ^
               (CONCAT44(fVar32,fVar29) ^ CONCAT44(-fVar32,-fVar29)) &
               CONCAT44(-(uint)(fVar32 < 0.0),-(uint)(fVar29 < 0.0));
      uVar30 = NEON_rev64(CONCAT44((fVar37 - fVar40) * fVar35 + fVar33 * (fVar40 - fVar36),
                                   (fVar40 - fVar38) * fVar35 + fVar27 * (fVar36 - fVar40)),4);
      fVar27 = ((fVar36 - fVar41) * fVar39 + (float)uVar30) * 0.5;
      fVar29 = ((fVar38 - fVar43) * fVar39 + (float)((ulong)uVar30 >> 0x20)) * 0.5;
      uVar34 = CONCAT44(fVar29,fVar27) ^
               (CONCAT44(fVar29,fVar27) ^ CONCAT44(-fVar29,-fVar27)) &
               CONCAT44(-(uint)(fVar29 < 0.0),-(uint)(fVar27 < 0.0));
      fVar37 = (float)uVar31;
      fVar33 = (float)uVar34;
      fVar32 = (float)(uVar31 >> 0x20);
      fVar35 = (float)(uVar34 >> 0x20);
      uVar34 = uVar34 ^ (uVar34 ^ uVar31) &
                        CONCAT44(-(uint)(fVar32 < fVar35),-(uint)(fVar37 < fVar33));
      fVar27 = (float)(uVar34 >> 0x20);
      fVar29 = (float)uVar34;
      if (fVar29 <= fVar27) {
        fVar27 = fVar29;
      }
      if (iVar24 < 1000) {
        fVar29 = ABS(((fVar35 - fVar32) - fVar37) - fVar33);
        bVar6 = true;
        if ((10.0 <= ABS(((fVar32 - fVar35) - fVar37) - fVar33)) && (bVar6 = false, !NAN(fVar29))) {
          bVar6 = fVar29 < 10.0;
        }
        fVar29 = ABS(((fVar37 - fVar35) - fVar32) - fVar33);
        bVar7 = true;
        if ((!bVar6) && (bVar7 = false, !NAN(fVar29))) {
          bVar7 = fVar29 < 10.0;
        }
        fVar29 = ABS(((fVar33 - fVar35) - fVar37) - fVar32);
        bVar6 = true;
        if ((!bVar7) && (bVar6 = false, !NAN(fVar29))) {
          bVar6 = fVar29 < 10.0;
        }
        if ((!bVar6) && (5000.0 <= fVar27)) goto LAB_10967f3e0;
        iVar24 = iVar24 + 1;
      }
      else {
LAB_10967f3e0:
        FUN_10967ed94(param_3,param_4);
        lVar12 = 0;
        iVar9 = 0;
        *(undefined8 *)(param_2 + 0x67ac) = 0;
        *(undefined8 *)(param_2 + 0x67a4) = 0;
        *(undefined8 *)(param_2 + 0x67bc) = 0;
        *(undefined8 *)(param_2 + 0x67b4) = 0;
        *(undefined8 *)(param_2 + 0x678c) = 0;
        *(undefined8 *)(param_2 + 0x6784) = 0;
        *(undefined8 *)(param_2 + 0x679c) = 0;
        *(undefined8 *)(param_2 + 0x6794) = 0;
        *(undefined8 *)(param_2 + 0x676c) = 0;
        *(undefined8 *)(param_2 + 0x6764) = 0;
        *(undefined8 *)(param_2 + 0x677c) = 0;
        *(undefined8 *)(param_2 + 0x6774) = 0;
        *(undefined8 *)(param_2 + 0x674c) = 0;
        *(undefined8 *)(param_2 + 0x6744) = 0;
        *(undefined8 *)(param_2 + 0x675c) = 0;
        *(undefined8 *)(param_2 + 0x6754) = 0;
        *(undefined8 *)(param_2 + 0x672c) = 0;
        *(undefined8 *)(param_2 + 0x6724) = 0;
        *(undefined8 *)(param_2 + 0x673c) = 0;
        *(undefined8 *)(param_2 + 0x6734) = 0;
        *(undefined8 *)(param_2 + 0x670c) = 0;
        *(undefined8 *)(param_2 + 0x6704) = 0;
        *(undefined8 *)(param_2 + 0x671c) = 0;
        *(undefined8 *)(param_2 + 0x6714) = 0;
        *(undefined8 *)(param_2 + 0x66ec) = 0;
        *(undefined8 *)(param_2 + 0x66e4) = 0;
        *(undefined8 *)(param_2 + 0x66fc) = 0;
        *(undefined8 *)(param_2 + 0x66f4) = 0;
        *(undefined8 *)(param_2 + 0x66cc) = 0;
        *(undefined8 *)(param_2 + 0x66c4) = 0;
        *(undefined8 *)(param_2 + 0x66dc) = 0;
        *(undefined8 *)(param_2 + 0x66d4) = 0;
        *(undefined8 *)(param_2 + 0x66ac) = 0;
        *(undefined8 *)(param_2 + 0x66a4) = 0;
        *(undefined8 *)(param_2 + 0x66bc) = 0;
        *(undefined8 *)(param_2 + 0x66b4) = 0;
        *(undefined8 *)(param_2 + 0x668c) = 0;
        *(undefined8 *)(param_2 + 0x6684) = 0;
        *(undefined8 *)(param_2 + 0x669c) = 0;
        *(undefined8 *)(param_2 + 0x6694) = 0;
        *(undefined8 *)(param_2 + 0x666c) = 0;
        *(undefined8 *)(param_2 + 0x6664) = 0;
        *(undefined8 *)(param_2 + 0x667c) = 0;
        *(undefined8 *)(param_2 + 0x6674) = 0;
        *(undefined8 *)(param_2 + 0x664c) = 0;
        *(undefined8 *)(param_2 + 0x6644) = 0;
        *(undefined8 *)(param_2 + 0x665c) = 0;
        *(undefined8 *)(param_2 + 0x6654) = 0;
        *(undefined8 *)(param_2 + 0x663c) = 0;
        *puVar20 = 0;
        pfVar13 = (float *)(param_3 + 4);
        piVar23 = (int *)(param_4 + 8);
        do {
          if (*piVar23 != 0) {
            fVar29 = pfVar13[-1];
            fVar37 = *pfVar13;
            fVar32 = fStack_ac + fStack_b0 * fVar37 + fStack_b4 * fVar29;
            fVar27 = 8388608.0;
            if (fVar32 != 0.0) {
              fVar27 = 1.0 / fVar32;
            }
            fVar32 = (fStack_c4 + fStack_c8 * fVar37 + fStack_cc * fVar29) * fVar27 -
                     (float)piVar23[-2];
            fVar27 = (fStack_b8 + fStack_bc * fVar37 + fStack_c0 * fVar29) * fVar27 -
                     (float)piVar23[-1];
            if (fVar32 * fVar32 + fVar27 * fVar27 < param_1) {
              iVar9 = iVar9 + 1;
              *(undefined4 *)((long)puVar20 + lVar12) = 1;
            }
          }
          lVar12 = lVar12 + 4;
          pfVar13 = pfVar13 + 3;
          piVar23 = piVar23 + 3;
        } while (lVar12 != 400);
        iVar19 = *(int *)(param_2 + 0x67c4);
        if (iVar19 < iVar9) {
          *(int *)(param_2 + 0x67c4) = iVar9;
          fStack_d4 = fStack_b0;
          _memcpy(param_7,puVar20,400);
          *param_9 = *(undefined4 *)((long)puVar1 + (ulong)uVar25 * 4);
          param_9[1] = *(undefined4 *)((long)puVar1 + (ulong)uVar14 * 4);
          param_9[2] = *(undefined4 *)((long)puVar1 + (ulong)uVar15 * 4);
          param_9[3] = *(undefined4 *)((long)puVar1 + (ulong)uVar11 * 4);
          fStack_f4 = fStack_cc;
          fStack_f0 = fStack_c8;
          fStack_ec = fStack_c4;
          fStack_e8 = fStack_c0;
          fStack_e4 = fStack_bc;
          fStack_e0 = fStack_b8;
          iVar19 = *(int *)(param_2 + 0x67c4);
          fStack_dc = fStack_b4;
          fStack_d8 = fStack_ac;
        }
        if ((int)((float)(int)uVar26 * 0.8) <= iVar19) break;
        iVar22 = iVar22 + 1;
      }
    } while (iVar22 < 300);
    lVar12 = 0;
    *(undefined4 *)(param_2 + 0x67c4) = 0;
    pfVar13 = (float *)(param_3 + 4);
    piVar23 = (int *)(param_4 + 8);
    do {
      if (*piVar23 != 0) {
        fVar29 = pfVar13[-1];
        fVar37 = *pfVar13;
        fVar32 = fStack_d8 + fStack_d4 * fVar37 + fStack_dc * fVar29;
        fVar27 = 8388608.0;
        if (fVar32 != 0.0) {
          fVar27 = 1.0 / fVar32;
        }
        fVar32 = (fStack_ec + fStack_f0 * fVar37 + fStack_f4 * fVar29) * fVar27 - (float)piVar23[-2]
        ;
        fVar27 = (fStack_e0 + fStack_e4 * fVar37 + fStack_e8 * fVar29) * fVar27 - (float)piVar23[-1]
        ;
        *(undefined4 *)((long)param_7 + lVar12) = 0;
        if (fVar32 * fVar32 + fVar27 * fVar27 < param_1) {
          *(int *)(param_2 + 0x67c4) = *(int *)(param_2 + 0x67c4) + 1;
          *(undefined4 *)((long)param_7 + lVar12) = 1;
        }
      }
      lVar12 = lVar12 + 4;
      pfVar13 = pfVar13 + 3;
      piVar23 = piVar23 + 3;
    } while (lVar12 != 400);
    *param_8 = *(undefined4 *)(param_2 + 0x67c4);
    *param_5 = fStack_f4;
    param_5[1] = fStack_f0;
    param_5[2] = fStack_ec;
    param_5[3] = fStack_e8;
    param_5[4] = fStack_e4;
    param_5[5] = fStack_e0;
    param_5[6] = fStack_dc;
    param_5[7] = fStack_d4;
    param_5[8] = fStack_d8;
  }
  return;
}



/* Entry: 10967f6ec; end: 10967f7c7;  */

void FUN_10967f6ec(float param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined1 *puVar6;
  float *pfVar7;
  undefined1 *puVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 extraout_d2;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1d0;
  float fStack_1cc;
  undefined4 uStack_1c8;
  undefined8 uStack_1c4;
  undefined8 uStack_1bc;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float afStack_190 [5];
  float fStack_17c;
  undefined4 uStack_178;
  float fStack_174;
  undefined4 uStack_170;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 auStack_13c [36];
  long lStack_118;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  long lStack_38;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar31 [16];
  undefined1 auVar27 [16];
  undefined1 auVar32 [16];
  undefined1 auVar28 [16];
  undefined1 auVar33 [16];
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0xc1a0000041a00000;
  uStack_60 = 0xc1a00000c1a00000;
  uStack_50 = NEON_fmov(0x41a00000,4);
  fStack_48 = param_1;
  fStack_44 = param_1;
  fStack_40 = param_1;
  FUN_10967553c(param_2 + 0x10,&uStack_60,auStack_a8);
  auVar34._8_8_ = uStack_90;
  auVar34._0_8_ = uStack_98;
  auVar25._8_8_ = uStack_90;
  auVar25._0_8_ = uStack_98;
  uVar22 = (undefined4)uStack_98;
  uVar24 = (undefined4)((ulong)uStack_98 >> 0x20);
  auVar25 = NEON_ext(auVar25,auStack_a8,4,1);
  auVar29._4_12_ = auVar25._4_12_;
  auVar29._0_4_ = auVar25._4_4_;
  auVar27._0_8_ = auVar29._0_8_;
  auVar27._8_4_ = auVar25._12_4_;
  auVar27._12_4_ = auVar25._12_4_;
  auVar26._8_8_ = auVar27._8_8_;
  auVar26._4_4_ = auStack_a8._4_4_;
  auVar26._0_4_ = auVar25._4_4_;
  auVar28._0_12_ = auVar26._0_12_;
  auVar28._12_4_ = auStack_a8._12_4_;
  auVar29 = NEON_ext(auVar28,auVar28,8,1);
  auVar25 = NEON_ext(auStack_a8,auVar34,4,1);
  auVar14._4_12_ = auVar25._4_12_;
  auVar14._0_4_ = auVar25._4_4_;
  auVar16._0_8_ = auVar14._0_8_;
  auVar16._8_4_ = auVar25._12_4_;
  auVar16._12_4_ = auVar25._12_4_;
  auVar15._8_8_ = auVar16._8_8_;
  auVar15._4_4_ = uVar24;
  auVar15._0_4_ = auVar25._4_4_;
  auVar17._0_12_ = auVar15._0_12_;
  auVar17._12_4_ = (int)((ulong)uStack_90 >> 0x20);
  auVar25 = NEON_ext(auVar17,auVar17,8,1);
  uStack_6c = auVar25._8_8_;
  uStack_74 = auVar25._0_8_;
  uStack_7c = auVar29._8_8_;
  uStack_84 = auVar29._0_8_;
  uStack_64 = uStack_88;
  fStack_b4 = -param_1;
  puVar5 = &uStack_84;
  uVar9 = param_2 + 0xa0;
  fStack_b0 = fStack_b4;
  fStack_ac = fStack_b4;
  FUN_109675770(puVar5,&fStack_b4,3);
  *(float *)(param_2 + 0xac) = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = CONCAT44(uVar24,uVar22);
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar12 = (float)___sincosf_stret();
  uVar24 = uVar22;
  fVar13 = (float)___sincosf_stret(uVar2);
  uVar23 = uVar24;
  fStack_1cc = (float)___sincosf_stret(extraout_d2);
  afStack_190[2] = 0.0;
  afStack_190[3] = 0.0;
  afStack_190[0] = 1.0;
  afStack_190[1] = 0.0;
  fStack_17c = -fVar12;
  uStack_178 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0x3f80000000000000;
  uStack_1a0 = 0;
  fStack_19c = -fVar13;
  uStack_198 = 0;
  fStack_1d4 = -fStack_1cc;
  uStack_1d0 = 0;
  uStack_1bc = 0x3f80000000000000;
  uStack_1c4 = 0;
  uStack_1d8 = uVar23;
  uStack_1c8 = uVar23;
  uStack_1b4 = uVar24;
  fStack_1ac = fVar13;
  uStack_194 = uVar24;
  afStack_190[4] = (float)uVar22;
  fStack_174 = fVar12;
  uStack_170 = uVar22;
  FUN_10967553c(&uStack_1d8,&uStack_1b4,auStack_13c);
  puVar6 = auStack_13c;
  pfVar7 = afStack_190;
  puVar8 = auStack_160;
  FUN_10967553c();
  auVar4._8_8_ = uStack_148;
  auVar4._0_8_ = uStack_150;
  auVar3._8_8_ = uStack_148;
  auVar3._0_8_ = uStack_150;
  auVar25 = NEON_ext(auVar3,auStack_160,4,1);
  auVar30._4_12_ = auVar25._4_12_;
  auVar30._0_4_ = auVar25._4_4_;
  auVar32._0_8_ = auVar30._0_8_;
  auVar32._8_4_ = auVar25._12_4_;
  auVar32._12_4_ = auVar25._12_4_;
  auVar31._8_8_ = auVar32._8_8_;
  auVar31._4_4_ = auStack_160._4_4_;
  auVar31._0_4_ = auVar25._4_4_;
  auVar33._0_12_ = auVar31._0_12_;
  auVar33._12_4_ = auStack_160._12_4_;
  auVar34 = NEON_ext(auVar33,auVar33,8,1);
  auVar25 = NEON_ext(auStack_160,auVar4,4,1);
  auVar18._4_12_ = auVar25._4_12_;
  auVar18._0_4_ = auVar25._4_4_;
  auVar20._0_8_ = auVar18._0_8_;
  auVar20._8_4_ = auVar25._12_4_;
  auVar20._12_4_ = auVar25._12_4_;
  auVar19._8_8_ = auVar20._8_8_;
  auVar19._4_4_ = (int)((ulong)uStack_150 >> 0x20);
  auVar19._0_4_ = auVar25._4_4_;
  auVar21._0_12_ = auVar19._0_12_;
  auVar21._12_4_ = (int)((ulong)uStack_148 >> 0x20);
  auVar25 = NEON_ext(auVar21,auVar21,8,1);
  puVar5[1] = auVar34._8_8_;
  *puVar5 = auVar34._0_8_;
  puVar5[3] = auVar25._8_8_;
  puVar5[2] = auVar25._0_8_;
  *(undefined4 *)(puVar5 + 4) = uStack_140;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  if (0 < (int)uVar9) {
    pfVar10 = (float *)(puVar6 + 4);
    pfVar11 = (float *)(puVar8 + 4);
    do {
      fVar13 = pfVar10[-1];
      fVar35 = *pfVar10;
      fVar36 = *pfVar7;
      fVar37 = pfVar7[1];
      fVar39 = pfVar7[2];
      fVar40 = pfVar7[3];
      fVar38 = pfVar7[4];
      fVar42 = pfVar7[5];
      fVar41 = pfVar7[6];
      fVar12 = pfVar7[7];
      pfVar11[1] = pfVar10[1];
      fVar41 = pfVar7[8] + fVar35 * fVar12 + fVar41 * fVar13;
      fVar12 = 8388608.0;
      if (fVar41 != 0.0) {
        fVar12 = 1.0 / fVar41;
      }
      pfVar11[-1] = (fVar39 + fVar35 * fVar37 + fVar36 * fVar13) * fVar12;
      *pfVar11 = (fVar42 + fVar35 * fVar38 + fVar40 * fVar13) * fVar12;
      pfVar10 = pfVar10 + 3;
      pfVar11 = pfVar11 + 3;
      uVar1 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 10967f7c8; end: 10967f907;  */

void FUN_10967f7c8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  float *pfVar4;
  undefined1 *puVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uStack_118;
  float fStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float afStack_d0 [5];
  float fStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_7c [36];
  long lStack_58;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar14 = (undefined4)param_2;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar8 = (float)___sincosf_stret();
  uVar15 = uVar14;
  fVar9 = (float)___sincosf_stret(param_2);
  uVar16 = uVar15;
  fStack_10c = (float)___sincosf_stret();
  afStack_d0[2] = 0.0;
  afStack_d0[3] = 0.0;
  afStack_d0[0] = 1.0;
  afStack_d0[1] = 0.0;
  fStack_bc = -fVar8;
  uStack_b8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x3f80000000000000;
  uStack_e0 = 0;
  fStack_dc = -fVar9;
  uStack_d8 = 0;
  fStack_114 = -fStack_10c;
  uStack_110 = 0;
  uStack_fc = 0x3f80000000000000;
  uStack_104 = 0;
  uStack_118 = uVar16;
  uStack_108 = uVar16;
  uStack_f4 = uVar15;
  fStack_ec = fVar9;
  uStack_d4 = uVar15;
  afStack_d0[4] = (float)uVar14;
  fStack_b4 = fVar8;
  uStack_b0 = uVar14;
  FUN_10967553c(&uStack_118,&uStack_f4,auStack_7c);
  puVar3 = auStack_7c;
  pfVar4 = afStack_d0;
  puVar5 = auStack_a0;
  FUN_10967553c();
  auVar2._8_8_ = uStack_88;
  auVar2._0_8_ = uStack_90;
  auVar17._8_8_ = uStack_88;
  auVar17._0_8_ = uStack_90;
  auVar17 = NEON_ext(auVar17,auStack_a0,4,1);
  auVar21._4_12_ = auVar17._4_12_;
  auVar21._0_4_ = auVar17._4_4_;
  auVar19._0_8_ = auVar21._0_8_;
  auVar19._8_4_ = auVar17._12_4_;
  auVar19._12_4_ = auVar17._12_4_;
  auVar18._8_8_ = auVar19._8_8_;
  auVar18._4_4_ = auStack_a0._4_4_;
  auVar18._0_4_ = auVar17._4_4_;
  auVar20._0_12_ = auVar18._0_12_;
  auVar20._12_4_ = auStack_a0._12_4_;
  auVar21 = NEON_ext(auVar20,auVar20,8,1);
  auVar17 = NEON_ext(auStack_a0,auVar2,4,1);
  auVar10._4_12_ = auVar17._4_12_;
  auVar10._0_4_ = auVar17._4_4_;
  auVar12._0_8_ = auVar10._0_8_;
  auVar12._8_4_ = auVar17._12_4_;
  auVar12._12_4_ = auVar17._12_4_;
  auVar11._8_8_ = auVar12._8_8_;
  auVar11._4_4_ = (int)((ulong)uStack_90 >> 0x20);
  auVar11._0_4_ = auVar17._4_4_;
  auVar13._0_12_ = auVar11._0_12_;
  auVar13._12_4_ = (int)((ulong)uStack_88 >> 0x20);
  auVar17 = NEON_ext(auVar13,auVar13,8,1);
  param_3[1] = auVar21._8_8_;
  *param_3 = auVar21._0_8_;
  param_3[3] = auVar17._8_8_;
  param_3[2] = auVar17._0_8_;
  *(undefined4 *)(param_3 + 4) = uStack_80;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (0 < (int)param_6) {
    pfVar6 = (float *)(puVar3 + 4);
    pfVar7 = (float *)(puVar5 + 4);
    do {
      fVar9 = pfVar6[-1];
      fVar22 = *pfVar6;
      fVar23 = *pfVar4;
      fVar24 = pfVar4[1];
      fVar26 = pfVar4[2];
      fVar27 = pfVar4[3];
      fVar25 = pfVar4[4];
      fVar29 = pfVar4[5];
      fVar28 = pfVar4[6];
      fVar8 = pfVar4[7];
      pfVar7[1] = pfVar6[1];
      fVar28 = pfVar4[8] + fVar22 * fVar8 + fVar28 * fVar9;
      fVar8 = 8388608.0;
      if (fVar28 != 0.0) {
        fVar8 = 1.0 / fVar28;
      }
      pfVar7[-1] = (fVar26 + fVar22 * fVar24 + fVar23 * fVar9) * fVar8;
      *pfVar7 = (fVar29 + fVar22 * fVar25 + fVar27 * fVar9) * fVar8;
      pfVar6 = pfVar6 + 3;
      pfVar7 = pfVar7 + 3;
      uVar1 = (int)param_6 - 1;
      param_6 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 10967f908; end: 10967f98f;  */

void FUN_10967f908(long param_1,float *param_2,long param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0 < param_4) {
    pfVar1 = (float *)(param_1 + 4);
    pfVar2 = (float *)(param_3 + 4);
    do {
      fVar3 = pfVar1[-1];
      fVar4 = *pfVar1;
      fVar5 = *param_2;
      fVar6 = param_2[1];
      fVar8 = param_2[2];
      fVar10 = param_2[3];
      fVar7 = param_2[4];
      fVar12 = param_2[5];
      fVar11 = param_2[6];
      fVar9 = param_2[7];
      pfVar2[1] = pfVar1[1];
      fVar11 = param_2[8] + fVar4 * fVar9 + fVar11 * fVar3;
      fVar9 = 8388608.0;
      if (fVar11 != 0.0) {
        fVar9 = 1.0 / fVar11;
      }
      pfVar2[-1] = (fVar8 + fVar4 * fVar6 + fVar5 * fVar3) * fVar9;
      *pfVar2 = (fVar12 + fVar4 * fVar7 + fVar10 * fVar3) * fVar9;
      pfVar1 = pfVar1 + 3;
      pfVar2 = pfVar2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 10967f990; end: 10967fa37;  */

float FUN_10967f990(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fStack_5c;
  float fStack_58;
  
  lVar1 = 0;
  pfVar2 = (float *)(param_2 + 4);
  fVar4 = 0.0;
  do {
    fVar3 = *(float *)(param_3 + lVar1);
    if (fVar3 != 0.0) {
      FUN_10967e7a0(param_1,param_4,&fStack_5c);
      fVar4 = fVar4 + fVar3 * fVar3 * (fStack_5c - pfVar2[-1]) * (fStack_5c - pfVar2[-1]) +
              fVar3 * fVar3 * (fStack_58 - *pfVar2) * (fStack_58 - *pfVar2);
    }
    lVar1 = lVar1 + 4;
    pfVar2 = pfVar2 + 3;
    param_1 = param_1 + 0xc;
  } while (lVar1 != 400);
  return fVar4;
}



/* Entry: 10967fa38; end: 10967fae3;  */

double FUN_10967fa38(int param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  long lStack_30;
  int iStack_28;
  
  _gettimeofday(&lStack_30,0);
  lVar1 = (long)param_1 * 0x20;
  fVar3 = (float)((double)(lStack_30 * 1000 + (long)(iStack_28 / 1000)) -
                 *(double *)(lVar1 + 0x11382a498));
  fVar4 = *(float *)(lVar1 + 0x11382a484) + fVar3;
  *(float *)(lVar1 + 0x11382a480) = fVar3;
  *(float *)(lVar1 + 0x11382a484) = fVar4;
  iVar2 = *(int *)(lVar1 + 0x11382a490) + 1;
  *(int *)(lVar1 + 0x11382a490) = iVar2;
  *(float *)(lVar1 + 0x11382a48c) = fVar4 / (float)iVar2;
  if (*(float *)(lVar1 + 0x11382a488) < fVar3) {
    *(float *)(lVar1 + 0x11382a488) = fVar3;
  }
  return (double)fVar3;
}



/* Entry: 10967fae4; end: 10967fb43;  */

float FUN_10967fae4(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  
  fVar2 = (float)*param_1 - (float)param_1[0x10e];
  fVar3 = (float)((ulong)*param_1 >> 0x20) - (float)((ulong)param_1[0x10e] >> 0x20);
  fVar3 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  lVar1 = 0xb3;
  fVar2 = fVar3;
  do {
    uVar5 = *(undefined8 *)((long)param_1 + 0xc);
    fVar4 = (float)uVar5 - (float)*(undefined8 *)((long)param_1 + 0x87c);
    fVar6 = (float)((ulong)uVar5 >> 0x20) -
            (float)((ulong)*(undefined8 *)((long)param_1 + 0x87c) >> 0x20);
    fVar6 = SQRT(fVar4 * fVar4 + fVar6 * fVar6);
    fVar4 = fVar6;
    if (fVar6 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar3 = fVar4;
    if (fVar2 <= fVar6) {
      fVar6 = fVar2;
    }
    fVar2 = fVar6;
    lVar1 = lVar1 + -1;
    param_1 = (undefined8 *)((long)param_1 + 0xc);
  } while (lVar1 != 0);
  return (fVar2 + fVar3) * 0.25;
}



/* Entry: 10967fb44; end: 10967fbdb;  */

undefined8 * FUN_10967fb44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = 0xa50;
  __Znwm(0xa50);
  FUN_109672260();
  FUN_10967fbdc(param_1,uVar1);
  return param_1;
}



/* Entry: 10967fbdc; end: 10967fc03;  */

void FUN_10967fbdc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_109672398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10967fc04; end: 10967fc87;  */

int FUN_10967fc04(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = *(int **)(param_1 + 4);
  if (piVar7 == *(int **)(param_1 + 6)) {
    iVar3 = 1;
  }
  else {
    iVar3 = *piVar7;
    uVar4 = (ulong)((long)*(int **)(param_1 + 6) - (long)piVar7) >> 2 & 0x7fffffff;
    if (1 < uVar4) {
      lVar5 = uVar4 - 1;
      do {
        piVar7 = piVar7 + 1;
        iVar3 = *piVar7 * iVar3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  uVar2 = *param_1;
  uVar1 = uVar2 & 0xf;
  if (0xfffffffd < uVar2 - 1) {
    uVar1 = 0xffffffff;
  }
  if (uVar1 < 10) {
    iVar6 = *(int *)(&UNK_10dfda8d4 + (ulong)uVar1 * 4);
  }
  else {
    iVar6 = 0;
  }
  uVar1 = uVar2 >> 4 & 0xf;
  if (uVar2 == 0xffffffff) {
    uVar1 = 1;
  }
  return uVar1 * iVar3 * iVar6;
}



/* Entry: 10967fc88; end: 10967fda3;  */

void FUN_10967fc88(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lStack_40;
  long *plStack_38;
  
  lVar5 = param_1;
  FUN_10967fc04();
  lVar5 = (long)(int)lVar5;
  func_0x000109699314(lVar5,1);
  plVar6 = (long *)0x20;
  __Znwm();
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  *plVar6 = (long)&PTR_FUN_110b00a40;
  plVar6[2] = 0;
  plVar6[3] = lVar5;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_40 = lVar5;
  plStack_38 = plVar6;
  FUN_10967fda4(param_1 + 0x28,&lStack_40);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x28);
  do {
    lVar5 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  return;
}



/* Entry: 10967fda4; end: 10967fe9b;  */

undefined8 * FUN_10967fda4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10967fe9c; end: 10968001b;  */

void FUN_10967fe9c(long *param_1,int *param_2)

{
  undefined8 uVar1;
  char cStack_39;
  int iStack_38;
  undefined1 uStack_31;
  
  iStack_38 = *param_2;
  FUN_109680084(param_1,&uStack_31,&iStack_38,param_2 + 4);
  if (*param_2 != 0) {
    cStack_39 = *(long *)(param_2 + 2) != 0;
    (**(code **)(*param_1 + 0x48))(param_1,&cStack_39,1,1);
    if (cStack_39 == '\x01') {
      uVar1 = *(undefined8 *)(param_2 + 2);
      FUN_10967fc04(param_2);
      (**(code **)(*param_1 + 0x48))(param_1,uVar1,1,(long)(int)param_2);
    }
  }
  return;
}



/* Entry: 10968001c; end: 10968001f;  */

void FUN_10968001c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109680020; end: 109680033;  */

void FUN_109680020(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109680034; end: 109680047;  */

void FUN_109680034(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(*(long *)(param_1 + 0x18) + -8));
    return;
  }
  return;
}



/* Entry: 109680048; end: 10968007f;  */

undefined8 FUN_109680048(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b00a80);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109680080; end: 109680083;  */

void FUN_109680080(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109680084; end: 109680207;  */

void FUN_109680084(long *param_1,undefined8 param_2,uint *param_3,long *param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  undefined1 uStack_36;
  byte bStack_35;
  undefined1 uStack_34;
  byte bStack_33;
  undefined1 uStack_32;
  byte bStack_31;
  
  uVar3 = (ulong)*param_3;
  uVar4 = uVar3;
  if (0x7f < *param_3) {
    do {
      bStack_35 = (byte)uVar4 | 0x80;
      (**(code **)(*param_1 + 0x48))(param_1,&bStack_35,1,1);
      uVar3 = uVar4 >> 7;
      uVar2 = uVar4 >> 0xe;
      uVar4 = uVar3;
    } while (uVar2 != 0);
  }
  uStack_36 = (undefined1)uVar3;
  (**(code **)(*param_1 + 0x48))(param_1,&uStack_36,1,1);
  uVar3 = param_4[1] - *param_4 >> 2;
  uVar4 = uVar3;
  if (0x7f < uVar3) {
    do {
      bStack_33 = (byte)uVar4 | 0x80;
      (**(code **)(*param_1 + 0x48))(param_1,&bStack_33,1,1);
      uVar3 = uVar4 >> 7;
      uVar2 = uVar4 >> 0xe;
      uVar4 = uVar3;
    } while (uVar2 != 0);
  }
  uStack_34 = (undefined1)uVar3;
  (**(code **)(*param_1 + 0x48))(param_1,&uStack_34,1,1);
  puVar1 = (uint *)param_4[1];
  for (puVar5 = (uint *)*param_4; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    uVar3 = (ulong)(int)*puVar5;
    uVar4 = uVar3;
    if (0x7f < *puVar5) {
      do {
        bStack_31 = (byte)uVar4 | 0x80;
        (**(code **)(*param_1 + 0x48))(param_1,&bStack_31,1,1);
        uVar3 = uVar4 >> 7;
        uVar2 = uVar4 >> 0xe;
        uVar4 = uVar3;
      } while (uVar2 != 0);
    }
    uStack_32 = (undefined1)uVar3;
    (**(code **)(*param_1 + 0x48))(param_1,&uStack_32,1,1);
  }
  return;
}



/* Entry: 109680208; end: 1096803af;  */

undefined8 FUN_109680208(long *param_1,undefined8 param_2,undefined4 *param_3,long *param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x40))(param_1,&bStack_43,1,1);
  if ((int)plVar2 != 1) {
    return 0;
  }
  uVar4 = 0;
  uVar5 = 0;
  do {
    uVar4 = ((ulong)bStack_43 & 0x7f) << (uVar5 & 0x3f) | uVar4;
    if (-1 < (char)bStack_43) {
      *param_3 = (int)uVar4;
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x40))(param_1,&bStack_42,1,1);
      if ((int)plVar2 != 1) {
        return 0;
      }
      uVar4 = 0;
      uVar5 = 0;
      do {
        uVar4 = ((ulong)bStack_42 & 0x7f) << (uVar5 & 0x3f) | uVar4;
        if (-1 < (char)bStack_42) {
          func_0x000108a5942c(param_4,uVar4);
          puVar1 = (undefined4 *)param_4[1];
          puVar3 = (undefined4 *)*param_4;
          while( true ) {
            if (puVar3 == puVar1) {
              return 1;
            }
            plVar2 = param_1;
            (**(code **)(*param_1 + 0x40))(param_1,&bStack_41,1,1);
            if ((int)plVar2 != 1) break;
            uVar4 = 0;
            uVar5 = 0;
            while (uVar4 = ((ulong)bStack_41 & 0x7f) << (uVar5 & 0x3f) | uVar4,
                  (char)bStack_41 < '\0') {
              uVar5 = uVar5 + 7;
              plVar2 = param_1;
              (**(code **)(*param_1 + 0x40))(param_1,&bStack_41,1,1);
              if ((int)plVar2 != 1) {
                return 0;
              }
            }
            *puVar3 = (int)uVar4;
            puVar3 = puVar3 + 1;
          }
          return 0;
        }
        uVar5 = uVar5 + 7;
        plVar2 = param_1;
        (**(code **)(*param_1 + 0x40))(param_1,&bStack_42,1,1);
      } while ((int)plVar2 == 1);
      return 0;
    }
    uVar5 = uVar5 + 7;
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x40))(param_1,&bStack_43,1,1);
  } while ((int)plVar2 == 1);
  return 0;
}



/* Entry: 1096803b0; end: 10968079f;  */

long * FUN_1096803b0(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 ***pppuVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  undefined **ppuVar6;
  char *pcVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  char *pcVar17;
  long *plVar18;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long alStack_98 [2];
  char cStack_81;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lVar10 = param_1;
  FUN_1096807a0();
  plVar5 = (long *)(lVar10 + 0x60);
  plVar11 = (long *)*plVar5;
  plVar18 = plVar5;
  if (plVar11 != (long *)0x0) {
    puVar8 = (uint *)*param_2;
    lVar10 = param_2[1] - (long)puVar8 >> 2;
    plVar9 = plVar5;
    do {
      puVar12 = (uint *)plVar11[4];
      lVar15 = plVar11[5] - (long)puVar12 >> 2;
      lVar14 = lVar10;
      if (lVar15 <= lVar10) {
        lVar14 = lVar15;
      }
      puVar16 = puVar8;
      if (0 < lVar14) {
        do {
          if (*puVar12 != *puVar16) {
            uVar13 = 1;
            if (*puVar12 < *puVar16) {
              uVar13 = 0xffffffff;
            }
            goto LAB_109680444;
          }
          lVar14 = lVar14 + -1;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        } while (lVar14 != 0);
      }
      uVar13 = (uint)(lVar10 < lVar15);
      if (lVar15 < lVar10) {
        uVar13 = 0xffffffff;
      }
LAB_109680444:
      if (-1 < (char)uVar13) {
        plVar9 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + ((ulong)(uVar13 >> 4) & 8));
    } while (plVar11 != (long *)0x0);
    if (plVar5 != plVar9) {
      lVar15 = plVar9[5] - plVar9[4] >> 2;
      lVar14 = lVar15;
      if (lVar10 <= lVar15) {
        lVar14 = lVar10;
      }
      puVar12 = (uint *)plVar9[4];
      if (0 < lVar14) {
        do {
          if (*puVar8 != *puVar12) {
            if (*puVar12 <= *puVar8) {
              plVar18 = plVar9;
            }
            goto LAB_1096804ac;
          }
          lVar14 = lVar14 + -1;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar14 != 0);
      }
      if (lVar15 <= lVar10) {
        plVar18 = plVar9;
      }
    }
  }
LAB_1096804ac:
  if (plVar5 == plVar18) {
    func_0x000107c31940(alStack_98,&UNK_10f57b99d);
    lVar10 = param_1;
    _strlen(param_1);
    plVar5 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar5,param_1,lVar10);
    puStack_78 = (undefined *)plVar5[1];
    puStack_80 = (undefined *)*plVar5;
    lStack_70 = plVar5[2];
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = 0;
    ppuVar6 = &puStack_80;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar6,&UNK_10f57b9a8,0x1c);
    puStack_a8 = ppuVar6[1];
    ppuStack_b0 = (undefined8 **)*ppuVar6;
    puStack_a0 = ppuVar6[2];
    ppuVar6[1] = (undefined *)0x0;
    ppuVar6[2] = (undefined *)0x0;
    *ppuVar6 = (undefined *)0x0;
    if (lStack_70 < 0) {
      __ZdlPv(puStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
    puVar8 = (uint *)*param_2;
    puVar12 = (uint *)param_2[1];
    if (puVar8 != puVar12) {
      do {
        uVar13 = *puVar8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppuStack_b0," ",1);
        pcVar7 = "void";
        if (uVar13 == 0) {
LAB_10968064c:
          func_0x000107c31940(&puStack_d0,pcVar7);
        }
        else {
          uVar1 = uVar13 & 0xf;
          if (uVar13 == 0xffffffff) {
            uVar1 = 0xffffffff;
          }
          pcVar17 = (&PTR_DAT_110b00a90)[uVar1];
          uVar1 = uVar13 >> 4 & 0xf;
          if (uVar13 == 0xffffffff) {
            uVar1 = 1;
          }
          pcVar7 = pcVar17;
          if ((uVar1 == 1) || (pcVar7 = "", uVar1 != 2)) goto LAB_10968064c;
          func_0x000107c31940(alStack_98,&UNK_10f57bafa);
          pcVar7 = pcVar17;
          _strlen(pcVar17);
          plVar5 = alStack_98;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar5,pcVar17,pcVar7);
          puStack_78 = (undefined *)plVar5[1];
          puStack_80 = (undefined *)*plVar5;
          lStack_70 = plVar5[2];
          plVar5[1] = 0;
          plVar5[2] = 0;
          *plVar5 = 0;
          ppuVar6 = &puStack_80;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppuVar6,">",1);
          puStack_c8 = ppuVar6[1];
          puStack_d0 = *ppuVar6;
          puStack_c0 = ppuVar6[2];
          ppuVar6[1] = (undefined *)0x0;
          ppuVar6[2] = (undefined *)0x0;
          *ppuVar6 = (undefined *)0x0;
          if (lStack_70 < 0) {
            __ZdlPv(puStack_80);
          }
          if (cStack_81 < '\0') {
            __ZdlPv(alStack_98[0]);
          }
        }
        puVar2 = puStack_c8;
        ppuVar4 = (undefined1 **)puStack_d0;
        if (-1 < (long)puStack_c0) {
          puVar2 = (undefined *)((ulong)puStack_c0 >> 0x38);
          ppuVar4 = &puStack_d0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppuStack_b0,ppuVar4,puVar2);
        if ((long)puStack_c0 < 0) {
          __ZdlPv(puStack_d0);
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar12);
    }
    puStack_80 = &DAT_10f6842c6;
    puStack_78 = &UNK_10f57b9c5;
    lStack_70 = 0x57;
    pppuVar3 = (undefined8 ***)ppuStack_b0;
    if (-1 < (long)puStack_a0) {
      pppuVar3 = &ppuStack_b0;
    }
    FUN_1096993dc(&puStack_80,pppuVar3);
    if ((long)puStack_a0 < 0) {
      __ZdlPv(ppuStack_b0);
    }
  }
  return plVar18 + 7;
}



/* Entry: 1096807a0; end: 1096808f3;  */

long FUN_1096807a0(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  plVar3 = param_1;
  FUN_1096808f4();
  func_0x000107c31940(&puStack_68,param_1);
  plVar4 = plVar3;
  func_0x000107c31944(plVar3,&puStack_68);
  plVar7 = (long *)plVar3[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      plVar9 = (long *)(uVar8 & (ulong)plVar4);
    }
    else {
      plVar9 = plVar4;
      if (plVar7 <= plVar4) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar7;
        }
        plVar9 = (long *)((long)plVar4 - uVar1 * (long)plVar7);
      }
    }
    plVar5 = *(long **)(*plVar3 + (long)plVar9 * 8);
    if (plVar5 != (long *)0x0) {
      uVar2 = uStack_58;
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uStack_58._7_1_ = (char)((ulong)uVar2 >> 0x38);
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar4) {
          plVar6 = plVar3;
          uStack_58 = uVar2;
          func_0x000104c4fbc4(plVar3,plVar5 + 2,&puStack_68);
          uVar2 = uStack_58;
          if (((ulong)plVar6 & 1) != 0) break;
        }
        else {
          if (((ulong)plVar7 & uVar8) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar8);
          }
          else if (plVar7 <= plVar6) {
            uVar1 = 0;
            if (plVar7 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar7;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
          }
          if (plVar6 != plVar9) goto LAB_109680880;
        }
        uStack_58 = uVar2;
        uVar2 = uStack_58;
      }
      goto LAB_109680884;
    }
  }
LAB_109680880:
  plVar5 = (long *)0x0;
LAB_109680884:
  if (uStack_58._7_1_ < '\0') {
    __ZdlPv(puStack_68);
  }
  if (plVar5 == (long *)0x0) {
    puStack_68 = &UNK_10f57baaa;
    puStack_60 = &UNK_10f57b9c5;
    uStack_58 = 0x3a;
    FUN_1096993dc(&puStack_68,&UNK_10f57bada);
  }
  return (long)plVar5;
}



/* Entry: 1096808f4; end: 10968098b;  */

undefined8 * FUN_1096808f4(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam000000011382a8e8 & 1) == 0) {
    iVar1 = 0x1382a8e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x50;
      __Znwm();
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 4) = 0x3f800000;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[8] = 0;
      puVar2[7] = 0;
      *(undefined4 *)(puVar2 + 9) = 0x3f800000;
      puRam000000011382a8e0 = puVar2;
      ___cxa_guard_release(0x11382a8e8);
    }
  }
  return puRam000000011382a8e0;
}



/* Entry: 10968098c; end: 109680a3b;  */

/* WARNING: Removing unreachable block (ram,0x0001096809f0) */

void FUN_10968098c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = param_1;
  FUN_1096808f4();
  puStack_50 = &uStack_48;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar1 = 0;
  FUN_1096810c0();
  FUN_109680fd8(&puStack_50,uStack_48);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x27) < '\0') {
      plVar2 = (long *)*plVar2;
    }
    *(long **)(param_1 + 0x28) = plVar2;
    *(undefined8 *)(param_1 + 0x38) = param_2;
  }
  return;
}



/* Entry: 109680a3c; end: 109680a77;  */

long FUN_109680a3c(long param_1)

{
  FUN_109680fd8(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109680a78; end: 109680cbf;  */

void FUN_109680a78(long param_1,int param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined4 *puStack_70;
  undefined8 uStack_68;
  undefined4 *puVar9;
  
  lVar3 = param_1;
  FUN_1096807a0();
  if (param_2 == 0) {
    _strncmp(param_1,&UNK_10dfda920,6);
    param_2 = 2;
    if ((int)param_1 != 0) {
      param_2 = 0;
    }
  }
  *(int *)(lVar3 + 0x30) = param_2;
  puVar6 = (undefined4 *)*param_3;
  puVar7 = (undefined4 *)param_3[1];
  if (puVar7 == puVar6) {
    puStack_78 = &UNK_10f57ba60;
    puStack_70 = (undefined4 *)&UNK_10f57b9c5;
    uStack_68 = 0x84;
    FUN_109699380(&puStack_78);
    puVar6 = (undefined4 *)*param_3;
    puVar7 = (undefined4 *)param_3[1];
  }
  lVar5 = 0;
  if (param_2 != 2) {
    lVar5 = 4;
  }
  puVar8 = (undefined4 *)(lVar5 + (long)puVar6);
  puStack_78 = (undefined *)0x0;
  puStack_70 = (undefined4 *)0x0;
  uStack_68 = 0;
  if (puVar8 != puVar7) {
    FUN_109265f60(&puStack_78,(long)puVar7 - (long)puVar8 >> 2,0,0);
    puVar6 = puStack_70;
    do {
      puVar9 = puVar8 + 1;
      puStack_70 = puVar6 + 1;
      *puVar6 = *puVar8;
      puVar6 = puStack_70;
      puVar8 = puVar9;
    } while (puVar9 != puVar7);
    puVar6 = (undefined4 *)*param_3;
  }
  uVar1 = *puVar6;
  plVar4 = (long *)(lVar3 + 0x58);
  FUN_109680f14(plVar4,&puStack_90,puStack_78);
  puVar6 = puStack_70;
  puVar2 = puStack_78;
  if (*plVar4 == 0) {
    lVar5 = 0x50;
    __Znwm();
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
    FUN_109378600((undefined8 *)(lVar5 + 0x20),puVar2,puVar6,(long)puVar6 - (long)puVar2 >> 2);
    *(undefined4 *)(lVar5 + 0x38) = uVar1;
    *(undefined8 *)(lVar5 + 0x40) = param_4;
    *(long *)(lVar5 + 0x48) = lVar3 + 0x28;
    FUN_109680ec0(lVar3 + 0x58,puStack_90,plVar4,lVar5);
  }
  if (param_2 != 2) {
    lVar5 = *(long *)(lVar3 + 0x40);
    if (lVar5 == *(long *)(lVar3 + 0x48)) {
      FUN_109680cc0((long *)(lVar3 + 0x40),(param_3[1] - *param_3 >> 2) + -1);
    }
    else if ((*(long *)(lVar3 + 0x48) - lVar5 >> 3) + 1 != param_3[1] - *param_3 >> 2) {
      puStack_90 = &UNK_10f57ba79;
      puStack_88 = &UNK_10f57b9c5;
      uStack_80 = 0x8c;
      FUN_109699380(&puStack_90);
    }
  }
  if (puStack_78 != (undefined *)0x0) {
    puStack_70 = (undefined4 *)puStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 109680cc0; end: 109680cef;  */

/* WARNING: Possible PIC construction at 0x000104c4327c: Changing call to branch */

void FUN_109680cc0(long *param_1,ulong param_2,undefined4 *param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar5 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar5) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return;
  }
  param_2 = param_2 - uVar5;
  lVar8 = param_1[1];
  if ((ulong)(param_1[2] - lVar8 >> 3) < param_2) {
    lVar7 = *param_1;
    lVar8 = lVar8 - lVar7;
    uVar5 = (lVar8 >> 3) + param_2;
    if (uVar5 >> 0x3d != 0) {
      puVar10 = &UNK_104c43280;
code_r0x000104c43284:
      puStack_60 = &stack0xfffffffffffffff0;
      puStack_58 = puVar10;
      func_0x000104bd47e8(&DAT_10f62a4d8);
      puStack_68 = &UNK_104c43298;
      puVar10 = &DAT_10f62a4d8;
      puStack_70 = (undefined1 *)&puStack_60;
      func_0x000104bd47e8();
      puStack_78 = &DAT_104c432ac;
      puVar10[0x40] = 1;
      *(undefined4 *)(puVar10 + 0x44) = *param_3;
      lStack_90 = lVar7;
      plStack_88 = param_1;
      if (*(char *)((long)param_3 + 0x1f) < '\0') {
        puStack_80 = (undefined1 *)&puStack_70;
        func_0x000100033dac(&uStack_b0,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
        cVar2 = puVar10[0x5f];
      }
      else {
        uStack_a8 = *(undefined8 *)(param_3 + 4);
        uStack_b0 = *(undefined8 *)(param_3 + 2);
        uStack_a0 = *(undefined8 *)(param_3 + 6);
        cVar2 = puVar10[0x5f];
        puStack_80 = (undefined1 *)&puStack_70;
      }
      if (cVar2 < '\0') {
        __ZdlPv(*(undefined8 *)(puVar10 + 0x48));
      }
      *(undefined8 *)(puVar10 + 0x50) = uStack_a8;
      *(undefined8 *)(puVar10 + 0x48) = uStack_b0;
      *(undefined8 *)(puVar10 + 0x58) = uStack_a0;
      __ZNSt3__17promiseIvE9set_valueEv(puVar10 + 8);
      return;
    }
    uVar4 = param_1[2] - lVar7;
    uVar6 = (long)uVar4 >> 2;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) {
        puVar10 = &UNK_104c43284;
        func_0x000104bd35f4();
        goto code_r0x000104c43284;
      }
      lVar3 = uVar6 << 3;
      __Znwm();
    }
    lVar1 = lVar3 + lVar8;
    _bzero(lVar1);
    lVar9 = lVar1 + (lVar8 >> 3) * -8;
    _memcpy(lVar9,lVar7,lVar8);
    *param_1 = lVar9;
    param_1[1] = lVar1 + param_2 * 8;
    param_1[2] = lVar3 + uVar6 * 8;
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar7);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      lVar8 = lVar8 + param_2 * 8;
      _bzero();
    }
    param_1[1] = lVar8;
  }
  return;
}



/* Entry: 109680cf0; end: 109680ebf;  */

void FUN_109680cf0(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = plVar6;
  *param_3 = param_4;
  if (*(long *)*plVar4 != 0) {
    *plVar4 = *(long *)*plVar4;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(plVar4[1],param_4);
  plVar4[2] = plVar4[2] + 1;
  return;
}



/* Entry: 109680ec0; end: 109680f13;  */

void FUN_109680ec0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109680f14; end: 109680fd7;  */

long * FUN_109680f14(long param_1,long *param_2,uint *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    lVar3 = param_4 - (long)param_3 >> 2;
    plVar4 = (long *)*plVar1;
    do {
      while( true ) {
        puVar5 = (uint *)plVar4[4];
        lVar7 = plVar4[5] - (long)puVar5 >> 2;
        lVar8 = lVar7;
        if (lVar3 <= lVar7) {
          lVar8 = lVar3;
        }
        lVar9 = lVar8;
        puVar10 = param_3;
        puVar11 = puVar5;
        plVar2 = plVar4;
        if (0 < lVar8) {
          do {
            if (*puVar10 != *puVar11) {
              if (*puVar10 < *puVar11) goto LAB_109680f74;
              goto LAB_109680f88;
            }
            lVar9 = lVar9 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar9 != 0);
        }
        if (lVar3 < lVar7) break;
LAB_109680f88:
        puVar10 = param_3;
        if (0 < lVar8) {
          do {
            if (*puVar5 != *puVar10) {
              if (*puVar10 <= *puVar5) goto LAB_109680fd0;
              goto LAB_109680fbc;
            }
            lVar8 = lVar8 + -1;
            puVar5 = puVar5 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar8 != 0);
        }
        if (lVar3 <= lVar7) goto LAB_109680fd0;
LAB_109680fbc:
        plVar1 = plVar4 + 1;
        plVar4 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_109680fd0;
      }
LAB_109680f74:
      plVar6 = (long *)*plVar4;
      plVar1 = plVar4;
      plVar4 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
LAB_109680fd0:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 109680fd8; end: 1096810bf;  */

void FUN_109680fd8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_109680fd8(param_1,*param_2);
    FUN_109680fd8(param_1,param_2[1]);
    if (param_2[4] != 0) {
      param_2[5] = param_2[4];
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1096810c0; end: 109681153;  */

undefined1  [16] FUN_1096810c0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong auStack_48 [2];
  char cStack_38;
  
  FUN_109681154(auStack_48);
  uVar2 = auStack_48[0];
  FUN_1096811e8(param_1);
  uVar1 = auStack_48[0];
  if ((uVar2 & 1) == 0) {
    auStack_48[0] = 0;
    if (uVar1 != 0) {
      if (cStack_38 == '\x01') {
        func_0x000109681070(uVar1 + 0x10);
      }
      __ZdlPv(uVar1);
    }
  }
  auVar3._8_8_ = uVar2 & 0xff;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 109681154; end: 1096811e7;  */

void FUN_109681154(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c31940(puVar1 + 2,*param_3);
  FUN_109681248(puVar1 + 5,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  func_0x000107c31944(param_2,puVar1 + 2);
  puVar1[1] = param_2;
  return;
}



/* Entry: 1096811e8; end: 109681247;  */

undefined1  [16] FUN_1096811e8(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar2 = param_1;
  func_0x000107c31944(param_1,param_2 + 0x10);
  *(long *)(param_2 + 8) = lVar2;
  lVar3 = param_1;
  FUN_1096812b0(param_1,lVar2,param_2 + 0x10);
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_1096813e4(param_1,param_2);
    lVar3 = param_2;
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 109681248; end: 1096812af;  */

void FUN_109681248(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  param_1[6] = param_2[6];
  plVar2 = param_2 + 7;
  lVar4 = *plVar2;
  plVar3 = param_1 + 7;
  *plVar3 = lVar4;
  lVar5 = param_2[8];
  param_1[8] = lVar5;
  if (lVar5 != 0) {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[6] = plVar2;
    *plVar2 = 0;
    param_2[8] = 0;
    return;
  }
  param_1[6] = plVar3;
  return;
}



/* Entry: 1096812b0; end: 1096813e3;  */

long FUN_1096812b0(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & param_2;
    }
    else {
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = param_2 / uVar5;
      }
      uVar7 = param_2;
      if (uVar5 <= param_2) {
        uVar7 = param_2 - uVar4 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        uVar4 = plVar3[1];
        if (uVar4 == param_2) {
          plVar2 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_3);
          if (((ulong)plVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) break;
        }
      }
    }
  }
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_109680cf0(param_1,uVar6);
  }
  return 0;
}



/* Entry: 1096813e4; end: 1096814db;  */

void FUN_1096813e4(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar2 = param_1[1];
  uVar4 = param_2[1];
  uVar3 = uVar2 - 1;
  if ((uVar2 & uVar3) == 0) {
    uVar4 = uVar3 & uVar4;
  }
  else if (uVar2 <= uVar4) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar4 / uVar2;
    }
    uVar4 = uVar4 - uVar1 * uVar2;
  }
  lVar6 = *param_1;
  plVar5 = *(long **)(lVar6 + uVar4 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(lVar6 + uVar4 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_109681474;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar2 <= uVar4) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar4 / uVar2;
      }
      uVar4 = uVar4 - uVar3 * uVar2;
    }
    plVar5 = (long *)(*param_1 + uVar4 * 8);
  }
  else {
    *param_2 = *plVar5;
  }
  *plVar5 = (long)param_2;
LAB_109681474:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1096814dc; end: 10968152b;  */

void FUN_1096814dc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_109682614(uVar1);
    lVar2 = uVar1 + 0x38;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_1096824d4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10968152c; end: 10968164f;  */

undefined8 FUN_10968152c(long param_1,undefined8 param_2,int *param_3,int *param_4)

{
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    uStack_5c = *(undefined4 *)
                 (*(long *)(param_1 + 0x20) +
                 (long)**(int **)(*(long *)(param_1 + 8) + (long)*param_3 * 0x40 + 0x28) * 0x38);
    func_0x0001093aa148(&lStack_58,&uStack_5c);
  }
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  FUN_109378600(&lStack_78,lStack_58,lStack_50,lStack_50 - lStack_58 >> 2);
  FUN_1096803b0(param_2,&lStack_78);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 109681650; end: 109681723;  */

void FUN_109681650(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined4 uStack_19c;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined4 auStack_e8 [2];
  long alStack_e0 [26];
  
  lVar9 = 0;
  alStack_e0[0x19] = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    *(undefined4 *)((long)auStack_e8 + lVar9) = 0;
    *(undefined8 *)((long)alStack_e0 + lVar9) = 0;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0xd0);
  lVar9 = param_2 + (long)(int)param_3 * 0x40;
  uVar10 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
  if (0 < (int)(uVar10 >> 2)) {
    uVar11 = uVar10 >> 2 & 0x7fffffff;
    if ((uVar10 >> 2 & 0x7ffffffe) == 0) {
      uVar11 = 1;
    }
    plVar12 = alStack_e0;
    plVar13 = param_4;
    do {
      plVar13 = plVar13 + 1;
      lVar1 = *(long *)(*plVar13 + 0x10);
      *(int *)(plVar12 + -1) = (int)((ulong)(*(long *)(*plVar13 + 0x18) - lVar1) >> 2);
      *plVar12 = lVar1;
      uVar11 = uVar11 - 1;
      plVar12 = plVar12 + 2;
    } while (uVar11 != 0);
  }
  puVar6 = auStack_e8;
  (**(code **)(*(long *)(*(long *)(lVar9 + 8) + 0x10) + 0x10))(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_e0[0x19]) {
    return;
  }
  ___stack_chk_fail();
  puVar16 = *(undefined4 **)(*(long *)(puVar6 + 2) + (long)(int)param_2 * 0x40 + 8);
  iVar2 = *(int *)(*(long *)(puVar16 + 4) + 8);
  if (iVar2 == 2) {
    lStack_160 = 0;
    uStack_158 = 0;
    lStack_168 = 0;
    lVar9 = *(long *)(param_4[1] + 0x10);
    lVar1 = *(long *)(param_4[1] + 0x18);
    FUN_109285684(&lStack_168,lVar9,lVar1,lVar1 - lVar9 >> 2);
  }
  else {
    FUN_109681650(&lStack_168,*(long *)(puVar6 + 2),param_2,param_4);
  }
  lVar1 = lStack_160;
  lVar9 = lStack_168;
  lVar8 = *param_4;
  if (*(long *)(lVar8 + 8) == 0) {
    lVar17 = lStack_160 - lStack_168;
  }
  else {
    lVar7 = *(long *)(lVar8 + 0x10);
    lVar17 = lStack_160 - lStack_168;
    if ((*(long *)(lVar8 + 0x18) - lVar7 == lVar17) && (_memcmp(lVar7,lStack_168), (int)lVar7 == 0))
    goto LAB_109681908;
  }
  uVar3 = *puVar16;
  lStack_190 = 0;
  uStack_180 = 0;
  lStack_188 = 0;
  FUN_109285684(&lStack_190,lVar9,lVar1,lVar17 >> 2);
  uStack_178 = 0;
  plStack_170 = (long *)0x0;
  puVar14 = (undefined8 *)*param_4;
  puVar14[1] = 0;
  *puVar14 = CONCAT44(uStack_19c,uVar3);
  lVar9 = puVar14[2];
  if (lVar9 != 0) {
    puVar14[3] = lVar9;
    __ZdlPv();
    puVar14[2] = 0;
    puVar14[3] = 0;
    puVar14[4] = 0;
  }
  puVar14[3] = lStack_188;
  puVar14[2] = lStack_190;
  puVar14[4] = uStack_180;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  FUN_10967fda4(puVar14 + 5,&uStack_178);
  plVar13 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    plVar12 = plStack_170 + 1;
    do {
      lVar9 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  FUN_10967fc88(*param_4);
  if (iVar2 == 2) {
    puVar15 = (undefined8 *)*param_4;
    puVar14 = (undefined8 *)
              (*(long *)(puVar6 + 8) +
              (long)**(int **)(*(long *)(puVar6 + 2) + (long)(int)param_2 * 0x40 + 0x28) * 0x38);
    uVar18 = *puVar15;
    puVar14[1] = puVar15[1];
    *puVar14 = uVar18;
    if (puVar14 != puVar15) {
      FUN_10928555c(puVar14 + 2,puVar15[2],puVar15[3],(long)(puVar15[3] - puVar15[2]) >> 2);
    }
    FUN_1096822fc(puVar14 + 5,puVar15 + 5);
  }
LAB_109681908:
  (**(code **)(puVar16 + 2))(param_3,param_4);
  if (lStack_168 != 0) {
    lStack_160 = lStack_168;
    __ZdlPv();
  }
  return;
}



/* Entry: 109681724; end: 109681967;  */

void FUN_109681724(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uStack_ac;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar13 = *(undefined4 **)(*(long *)(param_1 + 8) + (long)(int)param_2 * 0x40 + 8);
  iVar3 = *(int *)(*(long *)(puVar13 + 4) + 8);
  if (iVar3 == 2) {
    lStack_70 = 0;
    uStack_68 = 0;
    lStack_78 = 0;
    lVar9 = *(long *)(param_4[1] + 0x10);
    lVar2 = *(long *)(param_4[1] + 0x18);
    FUN_109285684(&lStack_78,lVar9,lVar2,lVar2 - lVar9 >> 2);
  }
  else {
    FUN_109681650(&lStack_78,*(long *)(param_1 + 8),param_2,param_4);
  }
  lVar2 = lStack_70;
  lVar9 = lStack_78;
  lVar10 = *param_4;
  if (*(long *)(lVar10 + 8) == 0) {
    lVar14 = lStack_70 - lStack_78;
  }
  else {
    lVar8 = *(long *)(lVar10 + 0x10);
    lVar14 = lStack_70 - lStack_78;
    if ((*(long *)(lVar10 + 0x18) - lVar8 == lVar14) && (_memcmp(lVar8,lStack_78), (int)lVar8 == 0))
    goto LAB_109681908;
  }
  uVar4 = *puVar13;
  lStack_a0 = 0;
  uStack_90 = 0;
  lStack_98 = 0;
  FUN_109285684(&lStack_a0,lVar9,lVar2,lVar14 >> 2);
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  puVar11 = (undefined8 *)*param_4;
  puVar11[1] = 0;
  *puVar11 = CONCAT44(uStack_ac,uVar4);
  lVar9 = puVar11[2];
  if (lVar9 != 0) {
    puVar11[3] = lVar9;
    __ZdlPv();
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
  }
  puVar11[3] = lStack_98;
  puVar11[2] = lStack_a0;
  puVar11[4] = uStack_90;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  FUN_10967fda4(puVar11 + 5,&uStack_88);
  plVar7 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  FUN_10967fc88(*param_4);
  if (iVar3 == 2) {
    puVar12 = (undefined8 *)*param_4;
    puVar11 = (undefined8 *)
              (*(long *)(param_1 + 0x20) +
              (long)**(int **)(*(long *)(param_1 + 8) + (long)(int)param_2 * 0x40 + 0x28) * 0x38);
    uVar15 = *puVar12;
    puVar11[1] = puVar12[1];
    *puVar11 = uVar15;
    if (puVar11 != puVar12) {
      FUN_10928555c(puVar11 + 2,puVar12[2],puVar12[3],(long)(puVar12[3] - puVar12[2]) >> 2);
    }
    FUN_1096822fc(puVar11 + 5,puVar12 + 5);
  }
LAB_109681908:
  (**(code **)(puVar13 + 2))(param_3,param_4);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 109681968; end: 1096819f7;  */

undefined1  [16] FUN_109681968(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if ((long)*param_1 < 0) {
    do {
      uVar3 = (ulong)(uRam000000011382ab20 + 1);
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11382ab20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        uRam000000011382ab20 = uRam000000011382ab20 + 1;
      }
    } while (cVar1 != '\0');
  }
  else {
    uVar3 = *param_1 & 0xffffffff;
  }
  auVar4._0_8_ = (uVar3 * 0x51493ecf & 0x7fffffff00000000 | uVar3 * 0x9fa8f307 >> 0x20) ^
                 0xcecadc9f72ae73bc;
  auVar4._8_8_ = (uVar3 * 0xb66a8f59 & 0xffffffff00000000 | uVar3 * 0x7b846ea4 >> 0x20) ^
                 0xb4cc676afe76aebc;
  return auVar4;
}



/* Entry: 1096819f8; end: 109681b8f;  */

void FUN_1096819f8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  uVar3 = lVar5 - lVar1 >> 6;
  if (uVar3 < param_2) {
    uVar3 = param_2 - uVar3;
    if ((ulong)(param_1[2] - lVar5 >> 6) < uVar3) {
      uVar2 = param_1[2] - lVar1;
      uVar4 = (long)uVar2 >> 5;
      if (uVar4 <= param_2) {
        uVar4 = param_2;
      }
      if (0x7fffffffffffffbf < uVar2) {
        uVar4 = 0x3ffffffffffffff;
      }
      plStack_38 = param_1;
      func_0x000109682378();
      lVar1 = uVar4 + (lVar5 - lVar1);
      _bzero(lVar1,uVar3 * 0x40);
      lVar5 = lVar1 + (*param_1 - param_1[1]);
      func_0x0001096823ac(*param_1,param_1[1],lVar5);
      lStack_58 = *param_1;
      *param_1 = lVar5;
      param_1[1] = lVar1 + uVar3 * 0x40;
      lStack_40 = param_1[2];
      param_1[2] = uVar4 + param_2 * 0x40;
      lStack_50 = lStack_58;
      lStack_48 = lStack_58;
      func_0x000109682488(&lStack_58);
    }
    else {
      _bzero(lVar5,uVar3 * 0x40);
      param_1[1] = lVar5 + uVar3 * 0x40;
    }
  }
  else if (param_2 < uVar3) {
    lVar1 = lVar1 + param_2 * 0x40;
    while (lVar5 != lVar1) {
      lVar5 = lVar5 + -0x40;
      func_0x000109682444(lVar5);
    }
    param_1[1] = lVar1;
  }
  return;
}



/* Entry: 109681b90; end: 109681e1f;  */

void FUN_109681b90(long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **appuStack_60 [2];
  undefined **appuStack_50 [2];
  
  FUN_10969bc60(appuStack_50);
  appuStack_60[0] = (undefined **)CONCAT71(appuStack_60[0]._1_7_,2);
  (**(code **)(*param_1 + 0x48))(param_1,appuStack_60,1,1);
  (**(code **)(*param_1 + 0x48))(param_1,param_2,8,1);
  uVar7 = (*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 3) * 0x6db6db6db6db6db7;
  uVar6 = uVar7;
  if (0x7f < uVar7) {
    do {
      appuStack_60[0] = (undefined **)(CONCAT71(appuStack_60[0]._1_7_,(char)uVar6) | 0x80);
      (**(code **)(*param_1 + 0x48))(param_1,appuStack_60,1,1);
      uVar7 = uVar6 >> 7;
      uVar5 = uVar6 >> 0xe;
      uVar6 = uVar7;
    } while (uVar5 != 0);
  }
  appuStack_60[0] = (undefined **)CONCAT71(appuStack_60[0]._1_7_,(char)uVar7);
  (**(code **)(*param_1 + 0x48))(param_1,appuStack_60,1,1);
  lVar2 = *(long *)(param_2 + 0x28);
  for (lVar8 = *(long *)(param_2 + 0x20); lVar8 != lVar2; lVar8 = lVar8 + 0x38) {
    FUN_10967fe9c(param_1,lVar8);
  }
  uVar7 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
  uVar6 = uVar7 & 0x3fffffe000;
  uVar7 = (long)(uVar7 * 0x4000000) >> 0x20;
  while( true ) {
    appuStack_60[0]._1_7_ = (undefined7)((ulong)appuStack_60[0] >> 8);
    if (uVar6 == 0) break;
    appuStack_60[0] = (undefined **)(CONCAT71(appuStack_60[0]._1_7_,(char)uVar7) | 0x80);
    (**(code **)(*param_1 + 0x48))(param_1,appuStack_60,1,1);
    uVar6 = uVar7 >> 0xe;
    uVar7 = uVar7 >> 7;
  }
  appuStack_60[0] = (undefined **)CONCAT71(appuStack_60[0]._1_7_,(char)uVar7);
  (**(code **)(*param_1 + 0x48))(param_1,appuStack_60,1,1);
  pcVar3 = *(char **)(param_2 + 0x10);
  for (pcVar1 = *(char **)(param_2 + 8); pcVar1 != pcVar3; pcVar1 = pcVar1 + 0x40) {
    (**(code **)(*param_1 + 0x48))(param_1,pcVar1,1,1);
    FUN_109682c20(param_1,appuStack_60,pcVar1 + 0x10,pcVar1 + 0x28);
    if (*pcVar1 == '\0') {
      uVar9 = **(undefined8 **)(*(long *)(pcVar1 + 8) + 0x10);
      uVar4 = uVar9;
      _strlen(uVar9);
      FUN_109697928(appuStack_60,uVar9,uVar4);
      (*(code *)appuStack_50[0][4])(appuStack_50,param_1,appuStack_60);
      appuStack_60[0] = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(appuStack_60);
    }
  }
  appuStack_50[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_50);
  return;
}


