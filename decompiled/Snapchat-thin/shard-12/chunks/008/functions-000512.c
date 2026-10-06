/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1097935a4; end: 10979365b;  */

void FUN_1097935a4(long param_1,int param_2,int param_3,int param_4,float *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  if (0 < param_4) {
    uVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    uVar5 = uVar1;
    do {
      uVar2 = uVar5 + 4;
      (**(code **)(param_1 + 0xf8))(uVar5,4);
      uVar4 = (uint)uVar5;
      auVar8._0_8_ = CONCAT44(uVar4,uVar4);
      uVar9 = NEON_ushl(auVar8._0_8_,0xffffffecfffffff6,4);
      auVar8._8_8_ = uVar9;
      auVar3._1_11_ = auVar8._5_11_;
      auVar3[0] = (char)uVar5;
      auVar6._0_6_ = CONCAT15((char)(uVar5 >> 8),auVar3._0_5_ << 0x20) & 0x3ffffffffff;
      auVar6._6_2_ = 0;
      auVar6[8] = (undefined1)uVar9;
      auVar6[9] = (byte)((ulong)uVar9 >> 8) & 3;
      auVar6._10_2_ = 0;
      auVar6[0xc] = (undefined1)((ulong)uVar9 >> 0x20);
      auVar6[0xd] = (byte)((ulong)uVar9 >> 0x28) & 3;
      auVar7._4_10_ = auVar6._4_10_;
      auVar7._0_4_ = uVar4 >> 0x1e;
      auVar7._14_2_ = 0;
      auVar8 = NEON_ucvtf(auVar7,4);
      param_5[2] = auVar8._8_4_ * 0.0009775171;
      param_5[3] = auVar8._12_4_ * 0.0009775171;
      *param_5 = auVar8._0_4_ * 0.33333334;
      param_5[1] = auVar8._4_4_ * 0.0009775171;
      uVar5 = uVar2;
      param_5 = param_5 + 4;
    } while (uVar2 < uVar1 + (long)param_4 * 4);
  }
  return;
}



/* Entry: 10979365c; end: 1097936cf;  */

void FUN_10979365c(long param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  lVar2 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar2,4);
  uVar4 = (undefined1)((ulong)lVar2 >> 8);
  uVar3 = NEON_ushl(CONCAT17((char)((ulong)lVar2 >> 0x18),
                             CONCAT16((char)((ulong)lVar2 >> 0x10),
                                      CONCAT15(uVar4,CONCAT14((char)lVar2,(int)lVar2)))),
                    0xffffffecfffffff6,4);
  auVar1._6_2_ = 0;
  auVar1._0_6_ = CONCAT15(uVar4,CONCAT14((char)lVar2,
                                         (uint)(ushort)((ushort)((ulong)lVar2 >> 0x10) >> 0xe))) &
                 0x3ffffffffff;
  auVar1[8] = (char)uVar3;
  auVar1[9] = (byte)((ulong)uVar3 >> 8) & 3;
  auVar1._10_2_ = 0;
  auVar1[0xc] = (char)((ulong)uVar3 >> 0x20);
  auVar1[0xd] = (byte)((ulong)uVar3 >> 0x28) & 3;
  auVar1._14_2_ = 0;
  NEON_ucvtf(auVar1,4);
  return;
}



/* Entry: 1097936d0; end: 1097937df;  */

void FUN_1097936d0(long param_1,int param_2,int param_3,uint param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  int iVar8;
  int iVar10;
  undefined8 uVar9;
  ulong uVar11;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    pfVar3 = (float *)(param_5 + 0xc);
    uVar11 = NEON_fmov(0x3f800000,4);
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    do {
      fVar6 = 1.0;
      if (pfVar3[-1] <= 1.0) {
        fVar6 = pfVar3[-1];
      }
      fVar4 = 0.0;
      if (0.0 <= fVar6) {
        fVar4 = fVar6;
      }
      fVar6 = 1.0;
      if (*pfVar3 <= 1.0) {
        fVar6 = *pfVar3;
      }
      fVar5 = 0.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar6;
      }
      uVar7 = *(ulong *)(pfVar3 + -3);
      uVar7 = uVar7 ^ (uVar7 ^ uVar11) &
                      CONCAT44(-(uint)((float)(uVar11 >> 0x20) < (float)(uVar7 >> 0x20)),
                               -(uint)((float)uVar11 < (float)uVar7));
      iVar8 = -(uint)((float)uVar7 < 0.0);
      iVar10 = -(uint)((float)(uVar7 >> 0x20) < 0.0);
      fVar6 = (float)CONCAT13((byte)(uVar7 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                              CONCAT12((byte)(uVar7 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                       CONCAT11((byte)(uVar7 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                                (byte)uVar7 & ~(byte)iVar8)));
      iVar8 = (int)(fVar6 * 4.0);
      iVar10 = (int)((float)(CONCAT17((byte)(uVar7 >> 0x38) & ~(byte)((uint)iVar10 >> 0x18),
                                      CONCAT16((byte)(uVar7 >> 0x30) & ~(byte)((uint)iVar10 >> 0x10)
                                               ,CONCAT15((byte)(uVar7 >> 0x28) &
                                                         ~(byte)((uint)iVar10 >> 8),
                                                         CONCAT14((byte)(uVar7 >> 0x20) &
                                                                  ~(byte)iVar10,fVar6)))) >> 0x20) *
                    1024.0);
      uVar9 = NEON_ushl(CONCAT44(iVar10,iVar8),0xfffffff6fffffffe,4);
      (**(code **)(param_1 + 0x100))
                (lVar1,((int)(fVar4 * 1024.0) - ((uint)(int)(fVar4 * 1024.0) >> 10) & 0xffff) << 10
                       | iVar10 - (int)((ulong)uVar9 >> 0x20) & 0xffffU |
                         (iVar8 - (int)uVar9) * 0x40000000 |
                       ((int)(fVar5 * 1024.0) - ((uint)(int)(fVar5 * 1024.0) >> 10)) * 0x100000,4);
      pfVar3 = pfVar3 + 4;
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + 4;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 1097937e0; end: 1097938ab;  */

void FUN_1097937e0(long param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (0 < param_4) {
    uVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    uVar3 = uVar1;
    do {
      uVar2 = uVar3 + 4;
      (**(code **)(param_1 + 0xf8))(uVar3,4);
      uVar4 = NEON_ucvtf(CONCAT44((int)(uVar3 >> 10),(uint)uVar3) & 0x3ff000003ff,4);
      *(ulong *)(param_5 + 1) =
           CONCAT44((float)((ulong)uVar4 >> 0x20) * 0.0009775171,(float)uVar4 * 0.0009775171);
      *param_5 = 0x3f800000;
      param_5[3] = (float)((uint)uVar3 >> 0x14 & 0x3ff) * 0.0009775171;
      param_5 = param_5 + 4;
      uVar3 = uVar2;
    } while (uVar2 < uVar1 + (long)param_4 * 4);
  }
  return;
}



/* Entry: 1097938ac; end: 109793923;  */

undefined8 FUN_1097938ac(long param_1,int param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4;
  (**(code **)(param_1 + 0xf8))(lVar1,4);
  uVar2 = NEON_ushl(CONCAT44((int)lVar1,(int)lVar1),0xffffffecfffffff6,4);
  NEON_ucvtf(uVar2 & 0x3ff000003ff,4);
  return 0x3f800000;
}



/* Entry: 109793924; end: 1097939f7;  */

void FUN_109793924(long param_1,int param_2,int param_3,uint param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    fVar8 = 1.0;
    fVar9 = 0.0;
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
            (long)param_2 * 4;
    pfVar3 = (float *)(param_5 + 0xc);
    do {
      fVar6 = fVar8;
      if (pfVar3[-2] <= 1.0) {
        fVar6 = pfVar3[-2];
      }
      fVar4 = fVar9;
      if (0.0 <= fVar6) {
        fVar4 = fVar6;
      }
      fVar6 = fVar8;
      if (pfVar3[-1] <= 1.0) {
        fVar6 = pfVar3[-1];
      }
      fVar5 = fVar9;
      if (0.0 <= fVar6) {
        fVar5 = fVar6;
      }
      fVar6 = fVar8;
      if (*pfVar3 <= 1.0) {
        fVar6 = *pfVar3;
      }
      fVar7 = fVar9;
      if (0.0 <= fVar6) {
        fVar7 = fVar6;
      }
      (**(code **)(param_1 + 0x100))
                (lVar1,((int)(fVar5 * 1024.0) - ((uint)(int)(fVar5 * 1024.0) >> 10) & 0xffff) << 10
                       | (int)(fVar4 * 1024.0) - ((uint)(int)(fVar4 * 1024.0) >> 10) & 0xffff |
                       ((int)(fVar7 * 1024.0) - ((uint)(int)(fVar7 * 1024.0) >> 10)) * 0x100000,4);
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + 4;
      pfVar3 = pfVar3 + 4;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 1097939f8; end: 109793afb;  */

void FUN_1097939f8(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  if (0 < (int)param_4) {
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4;
    uVar10 = (ulong)param_4;
    param_2 = param_2 << 1;
    do {
      iVar8 = *(byte *)(lVar1 + 1 + ((long)param_2 & 0xfffffffffffffffcU)) - 0x80;
      iVar9 = *(byte *)(lVar1 + ((long)param_2 | 3U)) - 0x80;
      iVar3 = (uint)*(byte *)(lVar1 + param_2) * 0x12b27 + -0x12b270;
      uVar4 = iVar3 + iVar9 * 0x19a2e;
      uVar5 = iVar3 + iVar8 * -0x647e + iVar9 * -0xd0f2;
      uVar6 = iVar3 + iVar8 * 0x206a2;
      uVar7 = uVar4 & 0xff0000 | 0xff000000;
      if (0xffffff < (int)uVar4) {
        uVar7 = 0xffff0000;
      }
      if (0x7fffffff < uVar4) {
        uVar7 = 0xff000000;
      }
      uVar4 = uVar5 >> 8 & 0xff00;
      if (0xffffff < (int)uVar5) {
        uVar4 = 0xff00;
      }
      uVar2 = 0;
      if (-1 < (int)uVar5) {
        uVar2 = uVar4;
      }
      uVar4 = uVar6 >> 0x10 & 0xff;
      if (0xffffff < (int)uVar6) {
        uVar4 = 0xff;
      }
      uVar5 = 0;
      if (-1 < (int)uVar6) {
        uVar5 = uVar4;
      }
      *param_5 = uVar7 | uVar5 | uVar2;
      param_2 = param_2 + 2;
      uVar10 = uVar10 - 1;
      param_5 = param_5 + 1;
    } while (uVar10 != 0);
  }
  return;
}



/* Entry: 109793afc; end: 109793bd3;  */

uint FUN_109793afc(long param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4;
  param_2 = param_2 << 1;
  iVar8 = *(byte *)(lVar1 + ((long)param_2 & 0xfffffffffffffffcU) + 1) - 0x80;
  iVar9 = *(byte *)(lVar1 + ((long)param_2 | 3U)) - 0x80;
  iVar3 = (uint)*(byte *)(lVar1 + param_2) * 0x12b27 + -0x12b270;
  uVar4 = iVar3 + iVar9 * 0x19a2e;
  uVar5 = iVar3 + iVar8 * -0x647e + iVar9 * -0xd0f2;
  uVar6 = iVar3 + iVar8 * 0x206a2;
  uVar7 = uVar4 & 0xff0000 | 0xff000000;
  if (0xffffff < (int)uVar4) {
    uVar7 = 0xffff0000;
  }
  if (0x7fffffff < uVar4) {
    uVar7 = 0xff000000;
  }
  uVar4 = uVar5 >> 8 & 0xff00;
  if (0xffffff < (int)uVar5) {
    uVar4 = 0xff00;
  }
  uVar2 = 0;
  if (-1 < (int)uVar5) {
    uVar2 = uVar4;
  }
  uVar4 = uVar6 >> 0x10 & 0xff;
  if (0xffffff < (int)uVar6) {
    uVar4 = 0xff;
  }
  uVar5 = 0;
  if (-1 < (int)uVar6) {
    uVar5 = uVar4;
  }
  return uVar7 | uVar5 | uVar2;
}



/* Entry: 109793bd4; end: 109793d2b;  */

void FUN_109793bd4(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 < 0) {
    iVar11 = (*(int *)(param_1 + 0xa4) + -1 >> 1) * ((uint)-iVar2 >> 1) - iVar2;
    iVar10 = (*(int *)(param_1 + 0xa4) >> 1) * ((uint)-iVar2 >> 1);
  }
  else {
    iVar11 = *(int *)(param_1 + 0xa4) * iVar2;
    iVar10 = iVar11 >> 2;
  }
  if (0 < (int)param_4) {
    lVar13 = *(long *)(param_1 + 0xa8);
    iVar6 = (iVar2 >> 1) * (param_3 >> 1);
    uVar12 = (ulong)param_4;
    pbVar14 = (byte *)(lVar13 + (long)(iVar2 * param_3) * 4 + (long)param_2);
    do {
      iVar8 = *(byte *)(lVar13 + (long)(iVar10 + iVar11) * 4 + (long)iVar6 * 4 +
                       (long)(param_2 >> 1)) - 0x80;
      iVar9 = *(byte *)(lVar13 + (long)iVar11 * 4 + (long)iVar6 * 4 + (long)(param_2 >> 1)) - 0x80;
      iVar2 = (uint)*pbVar14 * 0x12b27 + -0x12b270;
      uVar3 = iVar2 + iVar9 * 0x19a2e;
      uVar4 = iVar2 + iVar8 * -0x647e + iVar9 * -0xd0f2;
      uVar5 = iVar2 + iVar8 * 0x206a2;
      uVar7 = uVar3 & 0xff0000 | 0xff000000;
      if (0xffffff < (int)uVar3) {
        uVar7 = 0xffff0000;
      }
      if (0x7fffffff < uVar3) {
        uVar7 = 0xff000000;
      }
      uVar3 = uVar4 >> 8 & 0xff00;
      if (0xffffff < (int)uVar4) {
        uVar3 = 0xff00;
      }
      uVar1 = 0;
      if (-1 < (int)uVar4) {
        uVar1 = uVar3;
      }
      uVar3 = uVar5 >> 0x10 & 0xff;
      if (0xffffff < (int)uVar5) {
        uVar3 = 0xff;
      }
      uVar4 = 0;
      if (-1 < (int)uVar5) {
        uVar4 = uVar3;
      }
      *param_5 = uVar7 | uVar4 | uVar1;
      param_2 = param_2 + 1;
      uVar12 = uVar12 - 1;
      param_5 = param_5 + 1;
      pbVar14 = pbVar14 + 1;
    } while (uVar12 != 0);
  }
  return;
}



/* Entry: 109793d2c; end: 109793f47;  */

uint FUN_109793d2c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  
  lVar8 = *(long *)(param_1 + 0xa8);
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 < 0) {
    iVar9 = (*(int *)(param_1 + 0xa4) + -1 >> 1) * ((uint)-iVar2 >> 1) - iVar2;
    iVar10 = (*(int *)(param_1 + 0xa4) >> 1) * ((uint)-iVar2 >> 1);
  }
  else {
    iVar9 = *(int *)(param_1 + 0xa4) * iVar2;
    iVar10 = iVar9 >> 2;
  }
  iVar6 = (iVar2 >> 1) * (param_3 >> 1);
  iVar10 = *(byte *)(lVar8 + (long)(iVar10 + iVar9) * 4 + (long)iVar6 * 4 + (long)(param_2 >> 1)) -
           0x80;
  iVar9 = *(byte *)(lVar8 + (long)iVar9 * 4 + (long)iVar6 * 4 + (long)(param_2 >> 1)) - 0x80;
  iVar2 = (uint)*(byte *)(lVar8 + (long)(iVar2 * param_3) * 4 + (long)param_2) * 0x12b27 + -0x12b270
  ;
  uVar3 = iVar2 + iVar9 * 0x19a2e;
  uVar4 = iVar2 + iVar10 * -0x647e + iVar9 * -0xd0f2;
  uVar5 = iVar2 + iVar10 * 0x206a2;
  uVar7 = uVar3 & 0xff0000 | 0xff000000;
  if (0xffffff < (int)uVar3) {
    uVar7 = 0xffff0000;
  }
  if (0x7fffffff < uVar3) {
    uVar7 = 0xff000000;
  }
  uVar3 = uVar4 >> 8 & 0xff00;
  if (0xffffff < (int)uVar4) {
    uVar3 = 0xff00;
  }
  uVar1 = 0;
  if (-1 < (int)uVar4) {
    uVar1 = uVar3;
  }
  uVar3 = uVar5 >> 0x10 & 0xff;
  if (0xffffff < (int)uVar5) {
    uVar3 = 0xff;
  }
  uVar4 = 0;
  if (-1 < (int)uVar5) {
    uVar4 = uVar3;
  }
  return uVar7 | uVar4 | uVar1;
}



/* Entry: 109793f48; end: 109793f8f;  */

void FUN_109793f48(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  (**(code **)(param_1 + 200))();
  uVar13 = 0x20028888;
  if ((*(uint *)(param_1 + 0x90) & 0xffff) != 0) {
    uVar13 = *(uint *)(param_1 + 0x90);
  }
  if (0 < (int)param_4) {
    uVar4 = uVar13 >> 0xc & 0xf;
    uVar3 = uVar13 >> 0x16;
    uVar1 = uVar4 << (ulong)(uVar3 & 3);
    uVar2 = (uVar13 & 0xf) << (ulong)(uVar3 & 3);
    uVar7 = NEON_ushl(CONCAT44(uVar13,uVar13),0xfffffffcfffffff8,4);
    uVar12 = NEON_ushl(uVar7 & 0xf0000000f,CONCAT44(uVar3,uVar3) & 0x300000003,4);
    uVar13 = (uint)(uVar12 >> 0x20);
    uVar8 = NEON_ushl(0xffffffffffffffff,uVar12,4);
    fVar9 = *(float *)(&UNK_10dffcab0 + (ulong)uVar1 * 4);
    fVar10 = *(float *)(&UNK_10dffcab0 + (ulong)uVar2 * 4);
    fVar11 = *(float *)(&UNK_10dffcab0 + (uVar12 & 0xffffffff) * 4);
    fVar14 = *(float *)(&UNK_10dffcab0 + (ulong)uVar13 * 4);
    uVar7 = (ulong)param_4 + 1;
    puVar6 = (uint *)(param_5 + (ulong)param_4 * 4);
    pfVar5 = (float *)(param_5 + (ulong)param_4 * 0x10);
    do {
      puVar6 = puVar6 + -1;
      uVar3 = *puVar6;
      fVar15 = 1.0;
      if (uVar4 != 0) {
        fVar15 = fVar9 * (float)(uVar3 >> (ulong)(0x20 - uVar1 & 0x1f) &
                                ~(-1 << (ulong)(uVar1 & 0x1f)));
      }
      pfVar5[-4] = fVar15;
      uVar16 = NEON_ushl(CONCAT44(uVar3,uVar3),CONCAT44(-(0x10 - uVar13),-(0x18 - (int)uVar12)),4);
      uVar17 = NEON_ucvtf(uVar16 & CONCAT17(~(byte)((ulong)uVar8 >> 0x38),
                                            CONCAT16(~(byte)((ulong)uVar8 >> 0x30),
                                                     CONCAT15(~(byte)((ulong)uVar8 >> 0x28),
                                                              CONCAT14(~(byte)((ulong)uVar8 >> 0x20)
                                                                       ,CONCAT13(~(byte)((ulong)
                                                  uVar8 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uVar8 >> 0x10),
                                                           CONCAT11(~(byte)((ulong)uVar8 >> 8),
                                                                    ~(byte)uVar8))))))),4);
      *(ulong *)(pfVar5 + -3) =
           CONCAT44(fVar14 * (float)((ulong)uVar17 >> 0x20),fVar11 * (float)uVar17);
      pfVar5[-1] = fVar10 * (float)(uVar3 >> (ulong)(8 - uVar2 & 0x1f) &
                                   ~(-1 << (ulong)(uVar2 & 0x1f)));
      uVar7 = uVar7 - 1;
      pfVar5 = pfVar5 + -4;
    } while (1 < uVar7);
  }
  return;
}



/* Entry: 109793f90; end: 109793fa7;  */

undefined4 FUN_109793f90(long param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (*(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
          (long)param_2 * 4);
}



/* Entry: 109793fa8; end: 109793ff3;  */

undefined4 FUN_109793fa8(long param_1)

{
  long lVar1;
  undefined4 uStack_34;
  undefined4 auStack_30 [4];
  
  lVar1 = param_1;
  (**(code **)(param_1 + 0xd0))();
  uStack_34 = (undefined4)lVar1;
  FUN_1097c2a18(auStack_30,&uStack_34,*(undefined4 *)(param_1 + 0x90),1);
  return auStack_30[0];
}



/* Entry: 109793ff4; end: 109794027;  */

void FUN_109793ff4(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  if (0 < (int)param_4) {
    uVar1 = (ulong)param_4;
    puVar2 = (undefined4 *)
             (*(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
             (long)param_2 * 4);
    do {
      *puVar2 = *param_5;
      uVar1 = uVar1 - 1;
      param_5 = param_5 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 109794028; end: 1097940bf;  */

void FUN_109794028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  if ((uint)param_4 < 0x1fffffff) {
    uVar1 = (ulong)((uint)param_4 << 2);
    _malloc();
    if (uVar1 != 0) {
      func_0x0001097c2b44();
      (**(code **)(param_1 + 0xd8))(param_1,param_2,param_3,param_4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 1097940c0; end: 1097947a7;  */

void FUN_1097940c0(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  ulong uVar1;
  uint *puVar2;
  
  if (0 < (int)param_4) {
    uVar1 = (ulong)param_4;
    puVar2 = (uint *)(*(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
                     (long)param_2 * 4);
    do {
      *param_5 = *puVar2 | 0xff000000;
      uVar1 = uVar1 - 1;
      param_5 = param_5 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 1097947a8; end: 109794863;  */

void FUN_1097947a8(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  
  if (0 < (int)param_4) {
    uVar6 = (ulong)param_4;
    uVar2 = (uint)param_1;
    puVar5 = (uint *)(*(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
                     (long)param_2 * 4);
    do {
      uVar1 = *param_5;
      func_0x00010979785c((float)(uVar1 >> 0x10 & 0xff) * 0.003921569);
      uVar3 = uVar2;
      func_0x00010979785c((float)(uVar1 >> 8 & 0xff) * 0.003921569);
      uVar4 = uVar3;
      func_0x00010979785c((float)(uVar1 & 0xff) * 0.003921569);
      *puVar5 = uVar1 >> 0x18 | uVar2 << 0x10 | uVar3 << 8 | uVar4;
      uVar6 = uVar6 - 1;
      uVar2 = uVar4;
      param_5 = param_5 + 2;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 109794864; end: 109794917;  */

void FUN_109794864(long param_1,int param_2,int param_3,uint param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_4) {
    uVar5 = (ulong)param_4;
    puVar6 = (undefined4 *)(param_5 + 8);
    uVar1 = (uint)param_1;
    puVar4 = (uint *)(*(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
                     (long)param_2 * 4);
    do {
      fVar7 = 1.0;
      if ((float)puVar6[-2] <= 1.0) {
        fVar7 = (float)puVar6[-2];
      }
      fVar8 = 0.0;
      if (0.0 <= fVar7) {
        fVar8 = fVar7;
      }
      func_0x00010979785c(puVar6[-1]);
      uVar2 = uVar1;
      func_0x00010979785c(*puVar6);
      uVar3 = uVar2;
      func_0x00010979785c(puVar6[1]);
      *puVar4 = uVar1 << 0x10 |
                ((int)(fVar8 * 256.0) - ((uint)(int)(fVar8 * 256.0) >> 8)) * 0x1000000 | uVar2 << 8
                | uVar3;
      puVar6 = puVar6 + 4;
      uVar5 = uVar5 - 1;
      uVar1 = uVar3;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 109794918; end: 109794adf;  */

void FUN_109794918(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  ulong uVar1;
  byte *pbVar2;
  
  if (0 < (int)param_4) {
    uVar1 = (ulong)param_4;
    pbVar2 = (byte *)((long)(param_2 * 3) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
                      *(long *)(param_1 + 0xa8) + 2);
    do {
      *param_5 = (int)(*(float *)(&UNK_10dffa548 + (ulong)*pbVar2 * 4) * 255.0 + 0.5) << 0x10 |
                 (int)(*(float *)(&UNK_10dffa548 + (ulong)pbVar2[-1] * 4) * 255.0 + 0.5) << 8 |
                 (int)(*(float *)(&UNK_10dffa548 + (ulong)pbVar2[-2] * 4) * 255.0 + 0.5) |
                 0xff000000;
      pbVar2 = pbVar2 + 3;
      uVar1 = uVar1 - 1;
      param_5 = param_5 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 109794ae0; end: 109794b9f;  */

void FUN_109794ae0(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  if (0 < (int)param_4) {
    uVar5 = (ulong)param_4;
    puVar6 = (undefined1 *)
             ((long)(param_2 * 3) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
              *(long *)(param_1 + 0xa8) + 1);
    uVar2 = (int)param_1;
    do {
      uVar1 = *param_5;
      func_0x00010979785c((float)(uVar1 >> 0x10 & 0xff) * 0.003921569);
      uVar3 = uVar2;
      func_0x00010979785c((float)(uVar1 >> 8 & 0xff) * 0.003921569);
      uVar4 = uVar3;
      func_0x00010979785c((float)(uVar1 & 0xff) * 0.003921569);
      puVar6[-1] = (char)uVar4;
      *puVar6 = (char)uVar3;
      puVar6[1] = (char)uVar2;
      puVar6 = puVar6 + 3;
      uVar5 = uVar5 - 1;
      uVar2 = uVar4;
      param_5 = param_5 + 2;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 109794ba0; end: 109794c33;  */

void FUN_109794ba0(long param_1,int param_2,int param_3,uint param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  if (0 < (int)param_4) {
    uVar4 = (ulong)param_4;
    puVar6 = (undefined1 *)
             ((long)(param_2 * 3) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
              *(long *)(param_1 + 0xa8) + 1);
    uVar1 = (int)param_1;
    puVar5 = (undefined4 *)(param_5 + 0xc);
    do {
      func_0x00010979785c(puVar5[-2]);
      uVar2 = uVar1;
      func_0x00010979785c(puVar5[-1]);
      uVar3 = uVar2;
      func_0x00010979785c(*puVar5);
      puVar6[-1] = (char)uVar3;
      *puVar6 = (char)uVar2;
      puVar6[1] = (char)uVar1;
      puVar6 = puVar6 + 3;
      uVar4 = uVar4 - 1;
      uVar1 = uVar3;
      puVar5 = puVar5 + 4;
    } while (uVar4 != 0);
  }
  return;
}



/* Entry: 109794c34; end: 109796c4b;  */

void FUN_109794c34(long param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  
  if (0 < (int)param_4) {
    uVar1 = (ulong)param_4;
    puVar2 = (undefined1 *)
             ((-(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1) +
              (long)(int)param_2 + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
              *(long *)(param_1 + 0xa8) + 2);
    do {
      *param_5 = CONCAT12(*puVar2,*(undefined2 *)(puVar2 + -2)) | 0xff000000;
      puVar2 = puVar2 + 3;
      uVar1 = uVar1 - 1;
      param_5 = param_5 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 109796c4c; end: 109796c87;  */

undefined4
FUN_109796c4c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  (**(code **)(param_5 + 0xe8))();
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  func_0x0001097c2b44(&uStack_24,&uStack_20,1);
  return uStack_24;
}



/* Entry: 109796c88; end: 109797407;  */

undefined4 FUN_109796c88(long param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (*(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4 +
           (long)(param_2 << 2) * 4 + 0xc);
}



/* Entry: 109797408; end: 10979750b;  */

void FUN_109797408(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  if (0 < (int)param_4) {
    lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4;
    uVar10 = (ulong)param_4;
    param_2 = param_2 << 1;
    do {
      iVar8 = *(byte *)(lVar1 + 1 + ((long)param_2 & 0xfffffffffffffffcU)) - 0x80;
      iVar9 = *(byte *)(lVar1 + ((long)param_2 | 3U)) - 0x80;
      iVar3 = (uint)*(byte *)(lVar1 + param_2) * 0x12b27 + -0x12b270;
      uVar4 = iVar3 + iVar9 * 0x19a2e;
      uVar5 = iVar3 + iVar8 * -0x647e + iVar9 * -0xd0f2;
      uVar6 = iVar3 + iVar8 * 0x206a2;
      uVar7 = uVar4 & 0xff0000 | 0xff000000;
      if (0xffffff < (int)uVar4) {
        uVar7 = 0xffff0000;
      }
      if (0x7fffffff < uVar4) {
        uVar7 = 0xff000000;
      }
      uVar4 = uVar5 >> 8 & 0xff00;
      if (0xffffff < (int)uVar5) {
        uVar4 = 0xff00;
      }
      uVar2 = 0;
      if (-1 < (int)uVar5) {
        uVar2 = uVar4;
      }
      uVar4 = uVar6 >> 0x10 & 0xff;
      if (0xffffff < (int)uVar6) {
        uVar4 = 0xff;
      }
      uVar5 = 0;
      if (-1 < (int)uVar6) {
        uVar5 = uVar4;
      }
      *param_5 = uVar7 | uVar5 | uVar2;
      param_2 = param_2 + 2;
      uVar10 = uVar10 - 1;
      param_5 = param_5 + 1;
    } while (uVar10 != 0);
  }
  return;
}



/* Entry: 10979750c; end: 1097975e3;  */

uint FUN_10979750c(long param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  lVar1 = *(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb8) * param_3) * 4;
  param_2 = param_2 << 1;
  iVar8 = *(byte *)(lVar1 + ((long)param_2 & 0xfffffffffffffffcU) + 1) - 0x80;
  iVar9 = *(byte *)(lVar1 + ((long)param_2 | 3U)) - 0x80;
  iVar3 = (uint)*(byte *)(lVar1 + param_2) * 0x12b27 + -0x12b270;
  uVar4 = iVar3 + iVar9 * 0x19a2e;
  uVar5 = iVar3 + iVar8 * -0x647e + iVar9 * -0xd0f2;
  uVar6 = iVar3 + iVar8 * 0x206a2;
  uVar7 = uVar4 & 0xff0000 | 0xff000000;
  if (0xffffff < (int)uVar4) {
    uVar7 = 0xffff0000;
  }
  if (0x7fffffff < uVar4) {
    uVar7 = 0xff000000;
  }
  uVar4 = uVar5 >> 8 & 0xff00;
  if (0xffffff < (int)uVar5) {
    uVar4 = 0xff00;
  }
  uVar2 = 0;
  if (-1 < (int)uVar5) {
    uVar2 = uVar4;
  }
  uVar4 = uVar6 >> 0x10 & 0xff;
  if (0xffffff < (int)uVar6) {
    uVar4 = 0xff;
  }
  uVar5 = 0;
  if (-1 < (int)uVar6) {
    uVar5 = uVar4;
  }
  return uVar7 | uVar5 | uVar2;
}



/* Entry: 1097975e4; end: 10979773b;  */

void FUN_1097975e4(long param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 < 0) {
    iVar11 = (*(int *)(param_1 + 0xa4) + -1 >> 1) * ((uint)-iVar2 >> 1) - iVar2;
    iVar10 = (*(int *)(param_1 + 0xa4) >> 1) * ((uint)-iVar2 >> 1);
  }
  else {
    iVar11 = *(int *)(param_1 + 0xa4) * iVar2;
    iVar10 = iVar11 >> 2;
  }
  if (0 < (int)param_4) {
    lVar13 = *(long *)(param_1 + 0xa8);
    iVar6 = (iVar2 >> 1) * (param_3 >> 1);
    uVar12 = (ulong)param_4;
    pbVar14 = (byte *)(lVar13 + (long)(iVar2 * param_3) * 4 + (long)param_2);
    do {
      iVar8 = *(byte *)(lVar13 + (long)(iVar10 + iVar11) * 4 + (long)iVar6 * 4 +
                       (long)(param_2 >> 1)) - 0x80;
      iVar9 = *(byte *)(lVar13 + (long)iVar11 * 4 + (long)iVar6 * 4 + (long)(param_2 >> 1)) - 0x80;
      iVar2 = (uint)*pbVar14 * 0x12b27 + -0x12b270;
      uVar3 = iVar2 + iVar9 * 0x19a2e;
      uVar4 = iVar2 + iVar8 * -0x647e + iVar9 * -0xd0f2;
      uVar5 = iVar2 + iVar8 * 0x206a2;
      uVar7 = uVar3 & 0xff0000 | 0xff000000;
      if (0xffffff < (int)uVar3) {
        uVar7 = 0xffff0000;
      }
      if (0x7fffffff < uVar3) {
        uVar7 = 0xff000000;
      }
      uVar3 = uVar4 >> 8 & 0xff00;
      if (0xffffff < (int)uVar4) {
        uVar3 = 0xff00;
      }
      uVar1 = 0;
      if (-1 < (int)uVar4) {
        uVar1 = uVar3;
      }
      uVar3 = uVar5 >> 0x10 & 0xff;
      if (0xffffff < (int)uVar5) {
        uVar3 = 0xff;
      }
      uVar4 = 0;
      if (-1 < (int)uVar5) {
        uVar4 = uVar3;
      }
      *param_5 = uVar7 | uVar4 | uVar1;
      param_2 = param_2 + 1;
      uVar12 = uVar12 - 1;
      param_5 = param_5 + 1;
      pbVar14 = pbVar14 + 1;
    } while (uVar12 != 0);
  }
  return;
}



/* Entry: 10979773c; end: 1097978c7;  */

uint FUN_10979773c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  
  lVar8 = *(long *)(param_1 + 0xa8);
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 < 0) {
    iVar9 = (*(int *)(param_1 + 0xa4) + -1 >> 1) * ((uint)-iVar2 >> 1) - iVar2;
    iVar10 = (*(int *)(param_1 + 0xa4) >> 1) * ((uint)-iVar2 >> 1);
  }
  else {
    iVar9 = *(int *)(param_1 + 0xa4) * iVar2;
    iVar10 = iVar9 >> 2;
  }
  iVar6 = (iVar2 >> 1) * (param_3 >> 1);
  iVar10 = *(byte *)(lVar8 + (long)(iVar10 + iVar9) * 4 + (long)iVar6 * 4 + (long)(param_2 >> 1)) -
           0x80;
  iVar9 = *(byte *)(lVar8 + (long)iVar9 * 4 + (long)iVar6 * 4 + (long)(param_2 >> 1)) - 0x80;
  iVar2 = (uint)*(byte *)(lVar8 + (long)(iVar2 * param_3) * 4 + (long)param_2) * 0x12b27 + -0x12b270
  ;
  uVar3 = iVar2 + iVar9 * 0x19a2e;
  uVar4 = iVar2 + iVar10 * -0x647e + iVar9 * -0xd0f2;
  uVar5 = iVar2 + iVar10 * 0x206a2;
  uVar7 = uVar3 & 0xff0000 | 0xff000000;
  if (0xffffff < (int)uVar3) {
    uVar7 = 0xffff0000;
  }
  if (0x7fffffff < uVar3) {
    uVar7 = 0xff000000;
  }
  uVar3 = uVar4 >> 8 & 0xff00;
  if (0xffffff < (int)uVar4) {
    uVar3 = 0xff00;
  }
  uVar1 = 0;
  if (-1 < (int)uVar4) {
    uVar1 = uVar3;
  }
  uVar3 = uVar5 >> 0x10 & 0xff;
  if (0xffffff < (int)uVar5) {
    uVar3 = 0xff;
  }
  uVar4 = 0;
  if (-1 < (int)uVar5) {
    uVar4 = uVar3;
  }
  return uVar7 | uVar4 | uVar1;
}



/* Entry: 1097978c8; end: 1097979a3;  */

long FUN_1097978c8(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = param_1[2];
  iVar1 = *(int *)((long)param_1 + 0x14);
  iVar2 = (int)param_1[3];
  lVar5 = *param_1;
  lVar6 = param_1[1];
  (**(code **)(lVar5 + 200))(lVar5,(int)lVar3,iVar1,iVar2,lVar6,param_2);
  lVar8 = *(long *)(lVar5 + 0x58);
  if (lVar8 != 0) {
    lVar7 = (long)iVar2;
    lVar4 = lVar7 << 2;
    _malloc();
    if (lVar4 != 0) {
      (**(code **)(lVar8 + 200))
                (lVar8,(int)lVar3 - *(int *)(lVar5 + 0x60),iVar1 - *(int *)(lVar5 + 100),lVar7,lVar4
                 ,param_2);
      lVar5 = lVar4;
      if (0 < iVar2) {
        do {
          *(undefined1 *)(lVar6 + 3) = *(undefined1 *)(lVar5 + 3);
          lVar6 = lVar6 + 4;
          lVar7 = lVar7 + -1;
          lVar5 = lVar5 + 4;
        } while (lVar7 != 0);
      }
      _free(lVar4);
    }
  }
  return param_1[1];
}



/* Entry: 1097979a4; end: 109797a27;  */

void FUN_1097979a4(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = param_1[2];
  iVar1 = *(int *)((long)param_1 + 0x14);
  lVar5 = param_1[3];
  lVar2 = *param_1;
  lVar3 = param_1[1];
  (**(code **)(lVar2 + 0xd8))(lVar2,(int)lVar4,iVar1,(int)lVar5,lVar3);
  lVar6 = *(long *)(lVar2 + 0x58);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0xd8))
              (lVar6,(int)lVar4 - *(int *)(lVar2 + 0x60),iVar1 - *(int *)(lVar2 + 100),(int)lVar5,
               lVar3);
  }
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  return;
}



/* Entry: 109797a28; end: 109797cc3;  */

long FUN_109797a28(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = param_1[2];
  iVar1 = *(int *)((long)param_1 + 0x14);
  iVar3 = (int)param_1[3];
  lVar2 = *param_1;
  puVar7 = (undefined4 *)param_1[1];
  (**(code **)(lVar2 + 0xe0))(lVar2,(int)lVar4,iVar1,iVar3,puVar7,param_2);
  lVar9 = *(long *)(lVar2 + 0x58);
  if (lVar9 != 0) {
    lVar8 = (long)iVar3;
    puVar5 = (undefined4 *)(lVar8 << 4);
    _malloc();
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)(lVar9 + 0xe0))
                (lVar9,(int)lVar4 - *(int *)(lVar2 + 0x60),iVar1 - *(int *)(lVar2 + 100),lVar8,
                 puVar5,param_2);
      puVar6 = puVar5;
      if (0 < iVar3) {
        do {
          *puVar7 = *puVar6;
          lVar8 = lVar8 + -1;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 4;
        } while (lVar8 != 0);
      }
      _free(puVar5);
    }
  }
  return param_1[1];
}



/* Entry: 109797cc4; end: 109797e27;  */

undefined8
FUN_109797cc4(undefined8 *param_1,undefined8 param_2,uint param_3,int param_4,long param_5,
             uint param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = ((uint)((ulong)param_2 >> 0x18) & 0xff) << (ulong)((uint)param_2 >> 0x16 & 3);
  if (uVar1 == 0x80 && (param_6 & 3) != 0) {
    FUN_1097c2c3c(&UNK_10f57fbc0,&UNK_10f57fc38);
  }
  else {
    lVar4 = 0;
    if (((param_4 == 0) || (param_3 == 0)) || (param_5 != 0)) {
LAB_109797d7c:
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[3] = &UNK_10dffca88;
      param_1[7] = 0;
      param_1[8] = 0x300000000;
      param_1[9] = 0;
      *(undefined4 *)(param_1 + 10) = 0;
      param_1[0xb] = 0;
      *(undefined4 *)(param_1 + 0xd) = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      *(undefined4 *)(param_1 + 6) = 1;
      *param_1 = 0x100000000;
      *(uint *)(param_1 + 0x12) = (uint)param_2;
      *(uint *)(param_1 + 0x14) = param_3;
      *(int *)((long)param_1 + 0xa4) = param_4;
      param_1[0x15] = param_5;
      param_1[0x16] = lVar4;
      param_1[0x18] = 0;
      param_1[0x1f] = 0;
      param_1[0x20] = 0;
      *(uint *)(param_1 + 0x17) = param_6;
      *(undefined4 *)((long)param_1 + 0xbc) = 0;
      param_1[0x13] = 0;
      param_1[0xe] = FUN_109797e28;
      param_1[4] = 0;
      param_1[5] = 0;
      return 1;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = 0x7fffffff / uVar1;
    }
    if ((param_3 < uVar2) && (uVar1 * param_3 < 0x7fffffe1)) {
      param_6 = uVar1 * param_3 + 0x1f;
      uVar1 = param_6 >> 3 & 0xffffffc;
      uVar3 = 0;
      if ((ulong)uVar1 != 0) {
        uVar3 = 0xffffffffffffffff / (ulong)uVar1;
      }
      if ((ulong)(long)param_4 < uVar3) {
        param_5 = (long)(int)uVar1 * (long)param_4;
        if (param_7 == 0) {
          _malloc();
        }
        else {
          param_5 = 1;
          _calloc();
        }
        if (param_5 != 0) {
          param_6 = param_6 >> 5;
          lVar4 = param_5;
          goto LAB_109797d7c;
        }
      }
    }
  }
  return 0;
}



/* Entry: 109797e28; end: 109797e2b;  */

void FUN_109797e28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  int iVar5;
  
  if ((*(long *)(param_1 + 0xf8) == 0) && (*(long *)(param_1 + 0x100) == 0)) {
    iVar5 = 0x20028888;
    ppuVar4 = &PTR_FUN_110b0e000;
    do {
      if (iVar5 == *(int *)(param_1 + 0x90)) {
        puVar2 = ppuVar4[-2];
        puVar1 = ppuVar4[-1];
        puVar3 = *ppuVar4;
        *(undefined **)(param_1 + 200) = ppuVar4[-3];
        *(undefined **)(param_1 + 0xd0) = puVar1;
        puVar1 = ppuVar4[2];
        *(undefined **)(param_1 + 0xd8) = ppuVar4[1];
        *(undefined **)(param_1 + 0xe0) = puVar2;
        *(undefined **)(param_1 + 0xe8) = puVar3;
        *(undefined **)(param_1 + 0xf0) = puVar1;
        return;
      }
      iVar5 = *(int *)(ppuVar4 + 3);
      ppuVar4 = ppuVar4 + 7;
    } while (iVar5 != 0);
    return;
  }
  iVar5 = 0x20028888;
  ppuVar4 = &PTR_FUN_110b0d548;
  do {
    if (iVar5 == *(int *)(param_1 + 0x90)) {
      puVar2 = ppuVar4[-2];
      puVar1 = ppuVar4[-1];
      puVar3 = *ppuVar4;
      *(undefined **)(param_1 + 200) = ppuVar4[-3];
      *(undefined **)(param_1 + 0xd0) = puVar1;
      puVar1 = ppuVar4[2];
      *(undefined **)(param_1 + 0xd8) = ppuVar4[1];
      *(undefined **)(param_1 + 0xe0) = puVar2;
      *(undefined **)(param_1 + 0xe8) = puVar3;
      *(undefined **)(param_1 + 0xf0) = puVar1;
      return;
    }
    iVar5 = *(int *)(ppuVar4 + 3);
    ppuVar4 = ppuVar4 + 7;
  } while (iVar5 != 0);
  return;
}



/* Entry: 109797e2c; end: 109797f1b;  */

long FUN_109797e2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  
  if ((param_4 == 0) || ((param_5 & 3) == 0)) {
    uVar4 = (uint)param_1;
    if ((uVar4 >> 8 & 0xf) + (uVar4 & 0xf) + (uVar4 >> 0xc & 0xf) + (uVar4 >> 4 & 0xf) <=
        uVar4 >> 0x18) {
      lVar1 = param_1;
      FUN_1097bddbc();
      if (lVar1 == 0) {
        return 0;
      }
      uVar4 = param_5 + 3;
      if (-1 < (int)param_5) {
        uVar4 = param_5;
      }
      lVar2 = lVar1;
      FUN_109797cc4(lVar1,param_1,param_2,param_3,param_4,(int)uVar4 >> 2,param_6);
      if ((int)lVar2 == 0) {
        _free(lVar1);
        return 0;
      }
      return lVar1;
    }
    puVar3 = &UNK_10f57fd21;
  }
  else {
    puVar3 = &UNK_10f57fccd;
  }
  FUN_1097c2c3c(&UNK_10f57fc62,puVar3);
  return 0;
}



/* Entry: 109797f1c; end: 109797fdb;  */

long FUN_109797f1c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (*(int *)(lVar1 + 0x40) == 0) {
    FUN_10979800c(lVar1,0,(int)param_1[2],*(undefined4 *)((long)param_1 + 0x14),(int)param_1[3],
                  lVar2);
  }
  else {
    FUN_109798114(lVar1,0);
  }
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  return lVar2;
}



/* Entry: 109797fdc; end: 10979800b;  */

/* WARNING: Removing unreachable block (ram,0x0001097982d8) */
/* WARNING: Removing unreachable block (ram,0x0001097987a0) */
/* WARNING: Removing unreachable block (ram,0x000109798fd4) */
/* WARNING: Removing unreachable block (ram,0x0001097987a8) */
/* WARNING: Removing unreachable block (ram,0x0001097987c0) */
/* WARNING: Removing unreachable block (ram,0x0001097987d0) */
/* WARNING: Removing unreachable block (ram,0x000109798804) */
/* WARNING: Removing unreachable block (ram,0x000109798814) */
/* WARNING: Removing unreachable block (ram,0x00010979881c) */
/* WARNING: Removing unreachable block (ram,0x000109798824) */
/* WARNING: Removing unreachable block (ram,0x00010979883c) */
/* WARNING: Removing unreachable block (ram,0x000109798844) */
/* WARNING: Removing unreachable block (ram,0x0001097988f4) */
/* WARNING: Removing unreachable block (ram,0x00010979884c) */
/* WARNING: Removing unreachable block (ram,0x0001097988dc) */
/* WARNING: Removing unreachable block (ram,0x0001097988e4) */
/* WARNING: Removing unreachable block (ram,0x0001097988ec) */
/* WARNING: Removing unreachable block (ram,0x000109798854) */
/* WARNING: Removing unreachable block (ram,0x00010979890c) */
/* WARNING: Removing unreachable block (ram,0x000109798918) */
/* WARNING: Removing unreachable block (ram,0x00010979892c) */
/* WARNING: Removing unreachable block (ram,0x00010979893c) */
/* WARNING: Removing unreachable block (ram,0x00010979895c) */
/* WARNING: Removing unreachable block (ram,0x000109798944) */
/* WARNING: Removing unreachable block (ram,0x000109798964) */
/* WARNING: Removing unreachable block (ram,0x00010979896c) */
/* WARNING: Removing unreachable block (ram,0x00010979894c) */
/* WARNING: Removing unreachable block (ram,0x000109798950) */
/* WARNING: Removing unreachable block (ram,0x00010979897c) */
/* WARNING: Removing unreachable block (ram,0x000109798988) */
/* WARNING: Removing unreachable block (ram,0x00010979885c) */
/* WARNING: Removing unreachable block (ram,0x000109798864) */
/* WARNING: Removing unreachable block (ram,0x000109798874) */
/* WARNING: Removing unreachable block (ram,0x000109798878) */
/* WARNING: Removing unreachable block (ram,0x000109798888) */
/* WARNING: Removing unreachable block (ram,0x0001097988a8) */
/* WARNING: Removing unreachable block (ram,0x0001097988ac) */
/* WARNING: Removing unreachable block (ram,0x0001097988c8) */
/* WARNING: Removing unreachable block (ram,0x0001097988cc) */
/* WARNING: Removing unreachable block (ram,0x00010979898c) */
/* WARNING: Removing unreachable block (ram,0x000109798998) */
/* WARNING: Removing unreachable block (ram,0x0001097989b8) */
/* WARNING: Removing unreachable block (ram,0x0001097989d0) */
/* WARNING: Removing unreachable block (ram,0x0001097989f4) */
/* WARNING: Removing unreachable block (ram,0x000109798a18) */
/* WARNING: Removing unreachable block (ram,0x000109798a1c) */
/* WARNING: Removing unreachable block (ram,0x000109798a20) */
/* WARNING: Removing unreachable block (ram,0x000109798a24) */
/* WARNING: Removing unreachable block (ram,0x000109798a28) */
/* WARNING: Removing unreachable block (ram,0x000109798a2c) */
/* WARNING: Removing unreachable block (ram,0x000109798a30) */
/* WARNING: Removing unreachable block (ram,0x000109798a34) */
/* WARNING: Removing unreachable block (ram,0x000109798a38) */
/* WARNING: Removing unreachable block (ram,0x000109798a3c) */
/* WARNING: Removing unreachable block (ram,0x000109798a44) */
/* WARNING: Removing unreachable block (ram,0x000109798a48) */
/* WARNING: Removing unreachable block (ram,0x000109798a4c) */
/* WARNING: Removing unreachable block (ram,0x000109798a50) */
/* WARNING: Removing unreachable block (ram,0x000109798a54) */
/* WARNING: Removing unreachable block (ram,0x000109798a5c) */
/* WARNING: Removing unreachable block (ram,0x000109798a60) */
/* WARNING: Removing unreachable block (ram,0x000109798a78) */
/* WARNING: Removing unreachable block (ram,0x000109798a7c) */
/* WARNING: Removing unreachable block (ram,0x000109798a80) */
/* WARNING: Removing unreachable block (ram,0x000109798a84) */
/* WARNING: Removing unreachable block (ram,0x000109798fe0) */
/* WARNING: Removing unreachable block (ram,0x000109798360) */
/* WARNING: Removing unreachable block (ram,0x000109798370) */
/* WARNING: Removing unreachable block (ram,0x000109798374) */
/* WARNING: Removing unreachable block (ram,0x000109798378) */
/* WARNING: Removing unreachable block (ram,0x00010979848c) */
/* WARNING: Removing unreachable block (ram,0x0001097984d4) */
/* WARNING: Removing unreachable block (ram,0x000109798afc) */
/* WARNING: Removing unreachable block (ram,0x000109798fe8) */
/* WARNING: Removing unreachable block (ram,0x00010979902c) */
/* WARNING: Removing unreachable block (ram,0x000109798b04) */
/* WARNING: Removing unreachable block (ram,0x000109798b08) */
/* WARNING: Removing unreachable block (ram,0x0001097993f0) */
/* WARNING: Removing unreachable block (ram,0x000109798b10) */
/* WARNING: Removing unreachable block (ram,0x000109798b24) */
/* WARNING: Removing unreachable block (ram,0x0001097993fc) */
/* WARNING: Removing unreachable block (ram,0x000109799404) */
/* WARNING: Removing unreachable block (ram,0x000109799490) */
/* WARNING: Removing unreachable block (ram,0x00010979940c) */
/* WARNING: Removing unreachable block (ram,0x000109799428) */
/* WARNING: Removing unreachable block (ram,0x000109799488) */
/* WARNING: Removing unreachable block (ram,0x00010979948c) */
/* WARNING: Removing unreachable block (ram,0x0001097994a4) */
/* WARNING: Removing unreachable block (ram,0x0001097994ac) */
/* WARNING: Removing unreachable block (ram,0x000109799520) */
/* WARNING: Removing unreachable block (ram,0x0001097994b4) */
/* WARNING: Removing unreachable block (ram,0x0001097994d0) */
/* WARNING: Removing unreachable block (ram,0x00010979952c) */
/* WARNING: Removing unreachable block (ram,0x000109799538) */
/* WARNING: Removing unreachable block (ram,0x000109799540) */
/* WARNING: Removing unreachable block (ram,0x0001097995c4) */
/* WARNING: Removing unreachable block (ram,0x000109799550) */
/* WARNING: Removing unreachable block (ram,0x0001097984e4) */
/* WARNING: Removing unreachable block (ram,0x000109798a98) */
/* WARNING: Removing unreachable block (ram,0x000109798ab0) */
/* WARNING: Removing unreachable block (ram,0x000109798ab8) */
/* WARNING: Removing unreachable block (ram,0x000109798ac4) */
/* WARNING: Removing unreachable block (ram,0x000109798acc) */
/* WARNING: Removing unreachable block (ram,0x000109798ad4) */
/* WARNING: Removing unreachable block (ram,0x000109798adc) */
/* WARNING: Removing unreachable block (ram,0x000109798ae8) */
/* WARNING: Removing unreachable block (ram,0x000109798af0) */
/* WARNING: Removing unreachable block (ram,0x0001097984ec) */
/* WARNING: Removing unreachable block (ram,0x000109798b78) */
/* WARNING: Removing unreachable block (ram,0x000109798b7c) */
/* WARNING: Removing unreachable block (ram,0x000109798b88) */
/* WARNING: Removing unreachable block (ram,0x000109798b9c) */
/* WARNING: Removing unreachable block (ram,0x000109798bac) */
/* WARNING: Removing unreachable block (ram,0x000109799030) */
/* WARNING: Removing unreachable block (ram,0x000109798bb4) */
/* WARNING: Removing unreachable block (ram,0x00010979912c) */
/* WARNING: Removing unreachable block (ram,0x000109799130) */
/* WARNING: Removing unreachable block (ram,0x000109798bbc) */
/* WARNING: Removing unreachable block (ram,0x000109799140) */
/* WARNING: Removing unreachable block (ram,0x00010979914c) */
/* WARNING: Removing unreachable block (ram,0x00010979917c) */
/* WARNING: Removing unreachable block (ram,0x00010979915c) */
/* WARNING: Removing unreachable block (ram,0x000109799168) */
/* WARNING: Removing unreachable block (ram,0x000109799188) */
/* WARNING: Removing unreachable block (ram,0x00010979919c) */
/* WARNING: Removing unreachable block (ram,0x0001097991c8) */
/* WARNING: Removing unreachable block (ram,0x0001097991b0) */
/* WARNING: Removing unreachable block (ram,0x0001097991b4) */
/* WARNING: Removing unreachable block (ram,0x0001097991d0) */
/* WARNING: Removing unreachable block (ram,0x0001097991dc) */
/* WARNING: Removing unreachable block (ram,0x0001097984f4) */
/* WARNING: Removing unreachable block (ram,0x000109798504) */
/* WARNING: Removing unreachable block (ram,0x000109798514) */
/* WARNING: Removing unreachable block (ram,0x000109798520) */
/* WARNING: Removing unreachable block (ram,0x000109798530) */
/* WARNING: Removing unreachable block (ram,0x000109798540) */
/* WARNING: Removing unreachable block (ram,0x000109798550) */
/* WARNING: Removing unreachable block (ram,0x00010979855c) */
/* WARNING: Removing unreachable block (ram,0x00010979856c) */
/* WARNING: Removing unreachable block (ram,0x000109798570) */
/* WARNING: Removing unreachable block (ram,0x00010979858c) */
/* WARNING: Removing unreachable block (ram,0x000109798590) */
/* WARNING: Removing unreachable block (ram,0x00010979859c) */
/* WARNING: Removing unreachable block (ram,0x0001097985b8) */
/* WARNING: Removing unreachable block (ram,0x0001097985bc) */
/* WARNING: Removing unreachable block (ram,0x0001097985d8) */
/* WARNING: Removing unreachable block (ram,0x0001097985dc) */
/* WARNING: Removing unreachable block (ram,0x0001097985f4) */
/* WARNING: Removing unreachable block (ram,0x0001097985f8) */
/* WARNING: Removing unreachable block (ram,0x0001097991e4) */
/* WARNING: Removing unreachable block (ram,0x000109799294) */

ulong * FUN_109797fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                     ulong *param_5,ulong param_6,undefined8 param_7,ulong *param_8,ulong *param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong *puVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  int iVar34;
  ulong uVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  uint extraout_s1;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  int iVar43;
  int iStack_108;
  uint uStack_104;
  int iStack_f0;
  int iStack_ec;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  uint auStack_d0 [4];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  puVar13 = (undefined8 *)0x0;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (ulong *)*param_5;
  puVar28 = (ulong *)param_5[1];
  uStack_c0 = 0;
  uStack_b8 = 0;
  uVar10 = param_5[3];
  *(int *)((long)param_5 + 0x14) = *(int *)((long)param_5 + 0x14) + 1;
  uVar35 = CONCAT44((int)(param_5[2] >> 0x20) << 0x10,(int)param_5[2] << 0x10) | 0x800000008000;
  iVar30 = 0x10000;
  uStack_d8 = 0x10000;
  puVar26 = (ulong *)puVar5[7];
  iVar25 = 0;
  puVar12 = param_5;
  uVar14 = param_6;
  uStack_e0 = uVar35;
  if (puVar26 != (ulong *)0x0) {
    puVar13 = &uStack_e0;
    puVar12 = puVar26;
    FUN_1097bf628();
    uVar38 = (uint)param_3;
    uVar40 = (uint)uVar35;
    iVar36 = (int)uVar14;
    iVar34 = (int)puVar13;
    iVar37 = (int)param_8;
    if ((int)puVar12 == 0) goto LAB_109799860;
    iVar30 = (int)*puVar26;
    iVar25 = *(int *)((long)puVar26 + 0xc);
  }
  uVar38 = (uint)param_3;
  uVar40 = (uint)uVar35;
  iVar36 = (int)uVar14;
  iVar34 = (int)puVar13;
  iVar37 = (int)param_8;
  if (0 < (int)(uint)uVar10) {
    uVar27 = 0;
    uVar2 = uStack_e0._4_4_;
    uVar1 = (uint)uStack_e0;
    do {
      puVar33 = (undefined8 *)(ulong)uVar1;
      uVar32 = (ulong)uVar2;
      if ((param_6 == 0) || (*(int *)(param_6 + uVar27 * 4) != 0)) {
        iVar34 = *(int *)((long)puVar5 + 0x44);
        if (iVar34 < 4) {
          if (iVar34 - 1U < 2) {
LAB_1097984ac:
            iVar34 = (int)puVar5[8];
            uVar17 = (uint)puVar5[0x14];
            uVar11 = *(uint *)((long)puVar5 + 0xa4);
            uVar15 = (int)(uVar1 - 0x8000) >> 0x10;
            uVar24 = (int)(uVar2 - 0x8000) >> 0x10;
            uVar40 = uVar15 + 1;
            uVar38 = uVar24 + 1;
            if (iVar34 == 0) {
              param_8 = (ulong *)0x0;
              if ((int)uVar15 < 0) {
                uVar23 = 0;
                uVar11 = 0;
                uVar19 = 0;
                if (uVar15 != 0xffffffff) goto LAB_1097996f4;
              }
              else if (((-1 < (int)uVar24) && ((int)uVar15 < (int)uVar17)) &&
                      ((int)uVar24 < (int)uVar11)) {
                param_8 = puVar5;
                (*(code *)puVar5[0x1a])(puVar5,uVar15,uVar24);
                uVar17 = (uint)puVar5[0x14];
              }
              uVar11 = 0;
              if (((int)uVar24 < 0) || ((int)uVar17 <= (int)uVar40)) {
LAB_10979936c:
                uVar23 = uVar11;
                if ((int)uVar15 < 0) goto LAB_1097997fc;
LAB_109799370:
                uVar11 = uVar23;
                uVar23 = 0;
                if ((-2 < (int)uVar24) && ((int)uVar15 < (int)uVar17)) {
                  if (*(int *)((long)puVar5 + 0xa4) <= (int)uVar38) goto LAB_1097997fc;
                  puVar12 = puVar5;
                  (*(code *)puVar5[0x1a])(puVar5,uVar15);
                  uVar23 = (uint)puVar12;
                  uVar17 = (uint)puVar5[0x14];
                }
              }
              else {
                if ((int)uVar24 < *(int *)((long)puVar5 + 0xa4)) {
                  puVar12 = puVar5;
                  (*(code *)puVar5[0x1a])(puVar5,uVar40,uVar24);
                  uVar11 = (uint)puVar12;
                  param_8 = (ulong *)((ulong)param_8 & 0xffffffff);
                  uVar17 = (uint)puVar5[0x14];
                  goto LAB_10979936c;
                }
                uVar11 = 0;
                uVar23 = 0;
                if (-1 < (int)uVar15) goto LAB_109799370;
LAB_1097997fc:
                uVar23 = 0;
              }
              uVar19 = 0;
              if ((-2 < (int)uVar24) && ((int)uVar40 < (int)uVar17)) {
                if ((int)uVar38 < *(int *)((long)puVar5 + 0xa4)) {
                  puVar12 = puVar5;
                  (*(code *)puVar5[0x1a])();
                  uVar19 = (uint)puVar12;
                }
                else {
                  uVar19 = 0;
                }
              }
            }
            else {
              if (iVar34 == 2) {
                uVar17 = uVar17 - 1;
                uVar23 = uVar15;
                if ((int)uVar17 <= (int)uVar15) {
                  uVar23 = uVar17;
                }
                uVar19 = 0;
                if (-1 < (int)uVar15) {
                  uVar19 = uVar23;
                }
                uVar11 = uVar11 - 1;
                uVar23 = uVar24;
                if ((int)uVar11 <= (int)uVar24) {
                  uVar23 = uVar11;
                }
                uVar22 = 0;
                if (-1 < (int)uVar24) {
                  uVar22 = uVar23;
                }
                uVar23 = uVar40;
                if ((int)uVar17 <= (int)uVar40) {
                  uVar23 = uVar17;
                }
                uVar40 = 0;
                if (-2 < (int)uVar15) {
                  uVar40 = uVar23;
                }
                if ((int)uVar11 <= (int)uVar38) {
                  uVar38 = uVar11;
                }
                uVar31 = 0;
                if (-2 < (int)uVar24) {
                  uVar31 = uVar38;
                }
              }
              else if (iVar34 == 1) {
                uVar19 = uVar17 + uVar15;
                iVar34 = -uVar19;
                do {
                  uVar19 = uVar19 - uVar17;
                  iVar34 = iVar34 + uVar17;
                } while ((int)uVar17 <= (int)uVar19);
                uVar38 = uVar11 + uVar24;
                iVar36 = -uVar38;
                do {
                  uVar38 = uVar38 - uVar11;
                  iVar36 = iVar36 + uVar11;
                } while ((int)uVar11 <= (int)uVar38);
                uVar40 = uVar17 + uVar15 + 1;
                uVar15 = ~(uVar17 + uVar15);
                do {
                  uVar40 = uVar40 - uVar17;
                  uVar15 = uVar15 + uVar17;
                } while ((int)uVar17 <= (int)uVar40);
                uVar23 = uVar11 + uVar24 + 1;
                uVar24 = ~(uVar11 + uVar24);
                do {
                  uVar23 = uVar23 - uVar11;
                  uVar24 = uVar24 + uVar11;
                } while ((int)uVar11 <= (int)uVar23);
                uVar22 = uVar11;
                if (uVar11 < 2) {
                  uVar22 = 1;
                }
                uVar31 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
                uVar29 = 0;
                if (uVar22 != 0) {
                  uVar29 = ((uVar31 - (uVar31 != uVar23)) + uVar24) / uVar22;
                }
                if (uVar31 != uVar23) {
                  uVar29 = uVar29 + 1;
                }
                uVar24 = uVar40 & ((int)uVar40 >> 0x1f ^ 0xffffffffU);
                uVar31 = uVar17;
                if (uVar17 < 2) {
                  uVar31 = 1;
                }
                uVar16 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
                uVar20 = 0;
                if (uVar31 != 0) {
                  uVar20 = ((uVar24 - (uVar24 != uVar40)) + uVar15) / uVar31;
                }
                if (uVar24 != uVar40) {
                  uVar20 = uVar20 + 1;
                }
                uVar15 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
                uVar24 = 0;
                if (uVar22 != 0) {
                  uVar24 = ((uVar16 - (uVar16 != uVar38)) + iVar36) / uVar22;
                }
                if (uVar16 != uVar38) {
                  uVar24 = uVar24 + 1;
                }
                uVar22 = 0;
                if (uVar31 != 0) {
                  uVar22 = ((uVar15 - (uVar15 != uVar19)) + iVar34) / uVar31;
                }
                if (uVar15 != uVar19) {
                  uVar22 = uVar22 + 1;
                }
                uVar19 = uVar19 + uVar17 * uVar22;
                uVar40 = uVar40 + uVar17 * uVar20;
                uVar31 = uVar23 + uVar11 * uVar29;
                uVar22 = uVar38 + uVar11 * uVar24;
              }
              else {
                iVar36 = uVar17 * 2;
                iVar37 = 0;
                if (iVar36 != 0) {
                  iVar37 = (int)uVar15 / iVar36;
                }
                iVar39 = 0;
                if (iVar36 != 0) {
                  iVar39 = (int)~uVar15 / iVar36;
                }
                uVar19 = uVar15 - iVar37 * iVar36;
                if ((uVar15 & 0x80000000) != 0) {
                  uVar19 = iVar36 + ~(~uVar15 - iVar39 * iVar36);
                }
                if ((int)uVar17 <= (int)uVar19) {
                  uVar19 = iVar36 + ~uVar19;
                }
                uVar31 = uVar38;
                uVar22 = uVar24;
                if (iVar34 != 0) {
                  iVar34 = uVar11 * 2;
                  if ((int)uVar24 < 0) {
                    iVar37 = 0;
                    if (iVar34 != 0) {
                      iVar37 = (int)~uVar24 / iVar34;
                    }
                    uVar22 = iVar34 + ~(~uVar24 - iVar37 * iVar34);
                  }
                  else {
                    iVar37 = 0;
                    if (iVar34 != 0) {
                      iVar37 = (int)uVar24 / iVar34;
                    }
                    uVar22 = uVar24 - iVar37 * iVar34;
                  }
                  if ((int)uVar11 <= (int)uVar22) {
                    uVar22 = iVar34 + ~uVar22;
                  }
                  if ((int)uVar15 < -1) {
                    iVar37 = 0;
                    if (iVar36 != 0) {
                      iVar37 = (int)(-2 - uVar15) / iVar36;
                    }
                    uVar40 = iVar36 + ~((-2 - uVar15) - iVar37 * iVar36);
                  }
                  else {
                    iVar37 = 0;
                    if (iVar36 != 0) {
                      iVar37 = (int)uVar40 / iVar36;
                    }
                    uVar40 = uVar40 - iVar37 * iVar36;
                  }
                  if ((int)uVar17 <= (int)uVar40) {
                    uVar40 = iVar36 + ~uVar40;
                  }
                  iVar36 = 0;
                  if (iVar34 != 0) {
                    iVar36 = (int)(-2 - uVar24) / iVar34;
                  }
                  iVar37 = 0;
                  if (iVar34 != 0) {
                    iVar37 = (int)uVar38 / iVar34;
                  }
                  uVar31 = iVar34 + ~((-2 - uVar24) - iVar36 * iVar34);
                  if (-2 < (int)uVar24) {
                    uVar31 = uVar38 - iVar37 * iVar34;
                  }
                  if ((int)uVar11 <= (int)uVar31) {
                    uVar31 = iVar34 + ~uVar31;
                  }
                }
              }
              param_8 = puVar5;
              (*(code *)puVar5[0x1a])(puVar5,uVar19,uVar22);
              puVar12 = puVar5;
              (*(code *)puVar5[0x1a])(puVar5,uVar40,uVar22);
              uVar11 = (uint)puVar12;
              puVar12 = puVar5;
              (*(code *)puVar5[0x1a])(puVar5,uVar19,uVar31);
              uVar23 = (uint)puVar12;
              puVar12 = puVar5;
              (*(code *)puVar5[0x1a])(puVar5,uVar40,uVar31);
              uVar19 = (uint)puVar12;
            }
LAB_1097996f4:
            uVar40 = uVar1 - 0x8000 >> 9 & 0x7f;
            uVar38 = uVar2 - 0x8000 >> 9 & 0x7f;
            iVar37 = uVar38 * uVar40;
            iVar36 = iVar37 * 4;
            iVar39 = uVar40 * 0x200 + iVar37 * -4;
            iVar34 = uVar38 * 0x200;
            iVar37 = iVar34 + iVar37 * -4;
            iVar34 = (iVar36 - (iVar34 + uVar40 * 0x200)) + 0x10000;
            uVar15 = (uint)param_8;
            uVar40 = (uVar23 >> 0x10 & 0xff) * iVar37;
            uVar14 = (ulong)uVar40;
            uVar38 = uVar19 >> 0x10 & 0xff;
            puVar12 = (ulong *)(ulong)uVar38;
            uVar40 = uVar40 + (uVar11 >> 0x10 & 0xff) * iVar39;
            puVar13 = (undefined8 *)(ulong)uVar40;
            *(uint *)puVar28 =
                 (uVar23 >> 0x10 & 0xff00) * iVar37 + (uVar11 >> 0x10 & 0xff00) * iVar39 +
                 (uVar15 >> 0x10 & 0xff00) * iVar34 + (uVar19 >> 0x10 & 0xff00) * iVar36 &
                 0xff000000 | uVar40 + (uVar15 >> 0x10 & 0xff) * iVar34 + uVar38 * iVar36 & 0xff0000
                 | ((uVar23 & 0xff00) * iVar37 + (uVar11 & 0xff00) * iVar39 +
                    (uVar15 & 0xff00) * iVar34 + (uVar19 & 0xff00) * iVar36 & 0xff000000 |
                   (uVar23 & 0xff) * iVar37 + (uVar11 & 0xff) * iVar39 + (uVar15 & 0xff) * iVar34 +
                   (uVar19 & 0xff) * iVar36) >> 0x10;
          }
          else if ((iVar34 == 0) || (iVar34 == 3)) {
            uVar38 = (int)(uVar1 - 1) >> 0x10;
            puVar13 = (undefined8 *)(ulong)uVar38;
            uVar40 = (int)(uVar2 - 1) >> 0x10;
            uVar14 = (ulong)uVar40;
            iVar34 = (int)puVar5[8];
            if (iVar34 == 0) {
              param_8 = (ulong *)0x1;
            }
            else {
              uVar15 = (uint)puVar5[0x14];
              if (iVar34 == 2) {
                uVar24 = uVar38;
                if ((int)(uVar15 - 1) <= (int)uVar38) {
                  uVar24 = uVar15 - 1;
                }
                uVar15 = 0;
                if (-1 < (int)uVar38) {
                  uVar15 = uVar24;
                }
                puVar13 = (undefined8 *)(ulong)uVar15;
                uVar15 = *(int *)((long)puVar5 + 0xa4) - 1;
                uVar38 = uVar40;
                if ((int)uVar15 <= (int)uVar40) {
                  uVar38 = uVar15;
                }
                uVar15 = 0;
                if (-1 < (int)uVar40) {
                  uVar15 = uVar38;
                }
                uVar14 = (ulong)uVar15;
              }
              else if (iVar34 == 1) {
                uVar38 = uVar15 + uVar38;
                iVar34 = -uVar38;
                do {
                  uVar38 = uVar38 - uVar15;
                  iVar34 = iVar34 + uVar15;
                } while ((int)uVar15 <= (int)uVar38);
                uVar24 = *(uint *)((long)puVar5 + 0xa4);
                uVar40 = uVar24 + uVar40;
                iVar36 = -uVar40;
                do {
                  uVar40 = uVar40 - uVar24;
                  iVar36 = iVar36 + uVar24;
                } while ((int)uVar24 <= (int)uVar40);
                uVar17 = uVar40 & ((int)uVar40 >> 0x1f ^ 0xffffffffU);
                uVar11 = uVar24;
                if (uVar24 < 2) {
                  uVar11 = 1;
                }
                uVar23 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
                uVar19 = 0;
                if (uVar11 != 0) {
                  uVar19 = ((uVar17 - (uVar17 != uVar40)) + iVar36) / uVar11;
                }
                if (uVar17 != uVar40) {
                  uVar19 = uVar19 + 1;
                }
                uVar17 = uVar15;
                if (uVar15 < 2) {
                  uVar17 = 1;
                }
                uVar11 = 0;
                if (uVar17 != 0) {
                  uVar11 = ((uVar23 - (uVar23 != uVar38)) + iVar34) / uVar17;
                }
                if (uVar23 != uVar38) {
                  uVar11 = uVar11 + 1;
                }
                puVar13 = (undefined8 *)(ulong)(uVar38 + uVar15 * uVar11);
                uVar14 = (ulong)(uVar40 + uVar24 * uVar19);
              }
              else {
                iVar34 = uVar15 * 2;
                if ((int)uVar38 < 0) {
                  iVar36 = 0;
                  if (iVar34 != 0) {
                    iVar36 = (int)~uVar38 / iVar34;
                  }
                  uVar38 = iVar34 + ~(~uVar38 - iVar36 * iVar34);
                }
                else {
                  iVar36 = 0;
                  if (iVar34 != 0) {
                    iVar36 = (int)uVar38 / iVar34;
                  }
                  uVar38 = uVar38 - iVar36 * iVar34;
                }
                if ((int)uVar15 <= (int)uVar38) {
                  uVar38 = iVar34 + ~uVar38;
                }
                puVar13 = (undefined8 *)(ulong)uVar38;
                iVar34 = *(int *)((long)puVar5 + 0xa4) * 2;
                iVar36 = 0;
                if (iVar34 != 0) {
                  iVar36 = (int)~uVar40 / iVar34;
                }
                iVar37 = 0;
                if (iVar34 != 0) {
                  iVar37 = (int)uVar40 / iVar34;
                }
                uVar38 = iVar34 + ~(~uVar40 - iVar36 * iVar34);
                if ((uVar40 & 0x80000000) == 0) {
                  uVar38 = uVar40 - iVar37 * iVar34;
                }
                if (*(int *)((long)puVar5 + 0xa4) <= (int)uVar38) {
                  uVar38 = iVar34 + ~uVar38;
                }
                uVar14 = (ulong)uVar38;
              }
              param_8 = (ulong *)0x0;
            }
            puVar12 = puVar5;
            param_9 = puVar28;
            (*(code *)0x109799908)();
          }
        }
        else {
          if (iVar34 == 4) goto LAB_1097984ac;
          if (iVar34 == 5) {
            piVar18 = (int *)puVar5[9];
            iVar36 = *piVar18 >> 0x10;
            iVar37 = piVar18[1] >> 0x10;
            iVar39 = (int)puVar5[8];
            uVar15 = (uint)puVar5[0x14];
            uVar24 = *(uint *)((long)puVar5 + 0xa4);
            uVar38 = (int)(uVar1 + (0xffff - *piVar18 >> 1)) >> 0x10;
            uVar40 = (int)(uVar2 + (0xffff - piVar18[1] >> 1)) >> 0x10;
            iVar34 = uVar40 + iVar37;
            if (iVar37 < 1) {
              uVar41 = 0;
              uVar38 = 0;
              uVar40 = 0;
            }
            else {
              piVar18 = piVar18 + 2;
              uVar11 = uVar15 - 1;
              iVar37 = uVar15 * 2;
              uVar17 = uVar15;
              if (uVar15 == 0 || uVar11 == 0) {
                uVar17 = 1;
              }
              uVar19 = uVar24 - 1;
              iVar7 = uVar24 * 2;
              uVar23 = uVar24;
              if (uVar24 == 0 || uVar19 == 0) {
                uVar23 = 1;
              }
              uStack_104 = uVar24 + uVar40;
              iStack_108 = -uStack_104;
              auVar42 = ZEXT216(0);
              do {
                if (0 < iVar36) {
                  uVar22 = uVar40;
                  if ((int)uVar19 <= (int)uVar40) {
                    uVar22 = uVar19;
                  }
                  uVar31 = 0;
                  if (-1 < (int)uVar40) {
                    uVar31 = uVar22;
                  }
                  uVar29 = uVar15 + uVar38;
                  iVar8 = -(uVar15 + uVar38);
                  uVar22 = uVar38;
                  do {
                    puVar33 = (undefined8 *)(ulong)uVar22;
                    iVar6 = *piVar18;
                    if (iVar6 != 0) {
                      iStack_f0 = auVar42._0_4_;
                      iStack_ec = auVar42._4_4_;
                      uVar14 = (ulong)uVar40;
                      if (iVar39 == 0) {
                        param_8 = (ulong *)0x1;
                      }
                      else {
                        if (iVar39 == 2) {
                          uVar16 = uVar22;
                          if ((int)uVar11 <= (int)uVar22) {
                            uVar16 = uVar11;
                          }
                          uVar20 = 0;
                          if (-1 < (int)uVar22) {
                            uVar20 = uVar16;
                          }
                          puVar33 = (undefined8 *)(ulong)uVar20;
                          uVar14 = (ulong)uVar31;
                        }
                        else {
                          uVar16 = uVar29;
                          iVar43 = iVar8;
                          if (iVar39 == 1) {
                            do {
                              uVar16 = uVar16 - uVar15;
                              iVar43 = iVar43 + uVar15;
                              iVar21 = iStack_108;
                              uVar20 = uStack_104;
                            } while ((int)uVar15 <= (int)uVar16);
                            do {
                              uVar20 = uVar20 - uVar24;
                              iVar21 = iVar21 + uVar24;
                            } while ((int)uVar24 <= (int)uVar20);
                            uVar3 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
                            uVar4 = uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU);
                            uVar9 = 0;
                            if (uVar23 != 0) {
                              uVar9 = ((uVar3 - (uVar3 != uVar20)) + iVar21) / uVar23;
                            }
                            if (uVar3 != uVar20) {
                              uVar9 = uVar9 + 1;
                            }
                            uVar3 = 0;
                            if (uVar17 != 0) {
                              uVar3 = ((uVar4 - (uVar4 != uVar16)) + iVar43) / uVar17;
                            }
                            if (uVar4 != uVar16) {
                              uVar3 = uVar3 + 1;
                            }
                            puVar33 = (undefined8 *)(ulong)(uVar16 + uVar15 * uVar3);
                            uVar14 = (ulong)(uVar20 + uVar24 * uVar9);
                          }
                          else {
                            iVar43 = 0;
                            if (iVar37 != 0) {
                              iVar43 = (int)uVar22 / iVar37;
                            }
                            iVar21 = 0;
                            if (iVar37 != 0) {
                              iVar21 = (int)~uVar22 / iVar37;
                            }
                            uVar16 = uVar22 - iVar43 * iVar37;
                            if ((uVar22 & 0x80000000) != 0) {
                              uVar16 = iVar37 + ~(~uVar22 - iVar21 * iVar37);
                            }
                            if ((int)uVar15 <= (int)uVar16) {
                              uVar16 = iVar37 + ~uVar16;
                            }
                            puVar33 = (undefined8 *)(ulong)uVar16;
                            if (iVar39 != 0) {
                              if ((int)uVar40 < 0) {
                                iVar43 = 0;
                                if (iVar7 != 0) {
                                  iVar43 = (int)~uVar40 / iVar7;
                                }
                                uVar16 = iVar7 + ~(~uVar40 - iVar43 * iVar7);
                              }
                              else {
                                iVar43 = 0;
                                if (iVar7 != 0) {
                                  iVar43 = (int)uVar40 / iVar7;
                                }
                                uVar16 = uVar40 - iVar43 * iVar7;
                              }
                              if ((int)uVar24 <= (int)uVar16) {
                                uVar16 = iVar7 + ~uVar16;
                              }
                              uVar14 = (ulong)uVar16;
                            }
                          }
                        }
                        param_8 = (ulong *)0x0;
                      }
                      param_9 = (ulong *)auStack_d0;
                      puVar12 = puVar5;
                      (*(code *)0x109799908)();
                      uVar41 = NEON_ushl(CONCAT44(auStack_d0[0],auStack_d0[0]),0xfffffff8fffffff0,4)
                      ;
                      param_3 = CONCAT44(iStack_ec + (uint)(byte)((ulong)uVar41 >> 0x20) * iVar6,
                                         iStack_f0 + (uint)(byte)uVar41 * iVar6);
                      iVar43 = auVar42._8_4_;
                      auVar42._12_4_ = auVar42._12_4_ + (auStack_d0[0] >> 0x18) * iVar6;
                      auVar42._8_4_ = iVar43 + (auStack_d0[0] & 0xff) * iVar6;
                      auVar42._0_8_ = param_3;
                      puVar13 = puVar33;
                    }
                    piVar18 = piVar18 + 1;
                    uVar22 = uVar22 + 1;
                    uVar29 = uVar29 + 1;
                    iVar8 = iVar8 + -1;
                  } while ((int)uVar22 < (int)(uVar38 + iVar36));
                }
                uVar40 = uVar40 + 1;
                uStack_104 = uStack_104 + 1;
                iStack_108 = iStack_108 + -1;
              } while ((int)uVar40 < iVar34);
              iVar34 = auVar42._0_4_ + 0x8000;
              iVar36 = auVar42._4_4_ + 0x8000;
              iVar37 = auVar42._8_4_ + 0x8000;
              iVar39 = auVar42._12_4_ + 0x8000;
              uVar41 = CONCAT44((int)(iVar36 + (-(uint)(iVar36 < 0) >> 0x10)) >> 0x10,
                                (int)(iVar34 + (-(uint)(iVar34 < 0) >> 0x10)) >> 0x10);
              uVar38 = (int)(iVar37 + (-(uint)(iVar37 < 0) >> 0x10)) >> 0x10;
              uVar40 = (int)(iVar39 + (-(uint)(iVar39 < 0) >> 0x10)) >> 0x10;
            }
            uVar40 = uVar40 & ((int)uVar40 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar40) {
              uVar40 = 0xff;
            }
            uVar38 = uVar38 & ((int)uVar38 >> 0x1f ^ 0xffffffffU);
            uVar41 = NEON_smax(uVar41,0,4);
            uVar41 = NEON_smin(uVar41,0xff000000ff,4);
            uVar41 = NEON_ushl(uVar41,0x800000010,4);
            if (0xfe < (int)uVar38) {
              uVar38 = 0xff;
            }
            uVar15 = CONCAT13((byte)((ulong)uVar41 >> 0x38) | (byte)((ulong)uVar41 >> 0x18),
                              CONCAT12((byte)((ulong)uVar41 >> 0x30) | (byte)((ulong)uVar41 >> 0x10)
                                       ,CONCAT11((byte)((ulong)uVar41 >> 0x28) |
                                                 (byte)((ulong)uVar41 >> 8),
                                                 (byte)((ulong)uVar41 >> 0x20) | (byte)uVar41)));
            uVar35 = (ulong)uVar15;
            *(uint *)puVar28 = uVar15 | uVar38 | uVar40 << 0x18;
          }
          else if (iVar34 == 6) {
            param_8 = (ulong *)0x109799908;
            puVar12 = puVar5;
            param_9 = puVar28;
            FUN_109799b1c();
            puVar13 = puVar33;
            uVar14 = uVar32;
          }
        }
      }
      uVar38 = (uint)param_3;
      uVar40 = (uint)uVar35;
      iVar36 = (int)uVar14;
      iVar34 = (int)puVar13;
      iVar37 = (int)param_8;
      uVar1 = uVar1 + iVar30;
      uVar2 = uVar2 + iVar25;
      puVar28 = (ulong *)((long)puVar28 + 4);
      uVar27 = uVar27 + 1;
    } while (uVar27 != (uint)uVar10);
    puVar28 = (ulong *)param_5[1];
  }
LAB_109799860:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    if ((iVar37 == 0) ||
       ((((-1 < iVar34 && (-1 < iVar36)) && (iVar34 < (int)puVar12[0x14])) &&
        (iVar36 < *(int *)((long)puVar12 + 0xa4))))) {
      (*(code *)puVar12[0x1d])();
      *(uint *)param_9 = uVar40;
      *(uint *)((long)param_9 + 4) = extraout_s1;
      *(uint *)(param_9 + 1) = uVar38;
      *(uint *)((long)param_9 + 0xc) = param_4;
    }
    else {
      *param_9 = 0;
      param_9[1] = 0;
    }
    return puVar12;
  }
  return puVar28;
}



/* Entry: 10979800c; end: 109798113;  */

void FUN_10979800c(long param_1,int param_2,ulong param_3,undefined8 param_4,uint param_5,
                  long param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0xa4))) {
    iVar2 = (int)param_3;
    if (iVar2 < 0) {
      uVar4 = param_5;
      if (param_5 + iVar2 != 0 && (int)(param_5 + iVar2) < 0 == SCARRY4(param_5,iVar2)) {
        uVar4 = -iVar2;
      }
      lVar1 = 2;
      if (param_2 != 0) {
        lVar1 = 4;
      }
      uVar3 = 0;
      if (param_2 != 0) {
        uVar3 = 2;
      }
      _bzero(param_6,(ulong)uVar4 << lVar1);
      param_5 = param_5 - uVar4;
      param_6 = param_6 + (ulong)(uVar4 << (ulong)uVar3) * 4;
      param_3 = (ulong)(uVar4 + iVar2);
    }
    uVar4 = *(int *)(param_1 + 0xa0) - (int)param_3;
    if (uVar4 != 0 && (int)param_3 <= *(int *)(param_1 + 0xa0)) {
      uVar3 = param_5;
      if ((int)uVar4 <= (int)param_5) {
        uVar3 = uVar4;
      }
      lVar1 = 200;
      if (param_2 != 0) {
        lVar1 = 0xe0;
      }
      uVar4 = 0;
      if (param_2 != 0) {
        uVar4 = 2;
      }
      (**(code **)(param_1 + lVar1))(param_1,param_3,param_4,uVar3,param_6,0);
      param_5 = param_5 - uVar3;
      param_6 = param_6 + (ulong)(uVar3 << (ulong)uVar4) * 4;
    }
  }
  lVar1 = 2;
  if (param_2 != 0) {
    lVar1 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_6,(long)(int)param_5 << lVar1);
  return;
}



/* Entry: 109798114; end: 109798273;  */

void FUN_109798114(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,int param_7,int param_8,int param_9,
                  undefined4 *param_10)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar9;
  undefined4 *puVar8;
  
  iVar5 = *(int *)(param_5 + 0xa4);
  for (; param_8 < 0; param_8 = param_8 + iVar5) {
  }
  param_8 = param_8 + iVar5;
  do {
    param_8 = param_8 - iVar5;
  } while (iVar5 <= param_8);
  iVar5 = (int)param_6;
  if (*(int *)(param_5 + 0xa0) == 1) {
    if (iVar5 == 0) {
      (**(code **)(param_5 + 0xd0))(param_5,param_6,param_8);
      if (0 < param_9) {
        puVar7 = param_10;
        do {
          puVar8 = puVar7 + 1;
          *puVar7 = (int)param_5;
          puVar7 = puVar8;
        } while (puVar8 < param_10 + param_9);
      }
    }
    else {
      (**(code **)(param_5 + 0xe8))(param_5,0,param_8);
      if (0 < param_9) {
        puVar7 = param_10 + (long)param_9 * 4;
        do {
          *param_10 = param_1;
          param_10[1] = param_2;
          param_10[2] = param_3;
          param_10[3] = param_4;
          param_10 = param_10 + 4;
        } while (param_10 < puVar7);
      }
    }
  }
  else if (param_9 != 0) {
    lVar2 = 200;
    if (iVar5 != 0) {
      lVar2 = 0xe0;
    }
    uVar6 = 0;
    if (iVar5 != 0) {
      uVar6 = 2;
    }
    do {
      iVar5 = *(int *)(param_5 + 0xa0);
      for (; param_7 < 0; param_7 = param_7 + iVar5) {
      }
      iVar9 = -param_7;
      do {
        iVar9 = iVar9 + iVar5;
        iVar4 = param_7 - iVar5;
        bVar1 = iVar5 <= param_7;
        param_7 = iVar4;
      } while (bVar1);
      iVar3 = param_9;
      if (-iVar4 <= param_9) {
        iVar3 = -iVar4;
      }
      (**(code **)(param_5 + lVar2))(param_5,iVar5 + iVar4,param_8,iVar3,param_10,0);
      param_10 = param_10 + (uint)(iVar3 << (ulong)uVar6);
      param_7 = param_9;
      if (iVar9 <= param_9) {
        param_7 = iVar9;
      }
      param_7 = iVar5 + iVar4 + param_7;
      param_9 = param_9 - iVar3;
    } while (param_9 != 0);
  }
  return;
}



/* Entry: 109798274; end: 1097998af;  */

float * FUN_109798274(undefined8 param_1,undefined8 param_2,ulong param_3,float param_4,
                     float *param_5,undefined8 *param_6,ulong param_7,code *param_8,float *param_9)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  float *pfVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float *pfVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  float *pfVar32;
  float fVar33;
  ulong uVar34;
  undefined8 *puVar35;
  uint uVar36;
  int iVar37;
  float fVar38;
  ulong uVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  undefined8 uVar43;
  int iVar44;
  uint uVar45;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float fVar46;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  int iVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  int iStack_10c;
  uint uStack_108;
  uint uStack_104;
  int iStack_f0;
  int iStack_ec;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar6 = *(float **)param_5;
  pfVar32 = *(float **)(param_5 + 2);
  lStack_c0 = 0;
  lStack_b8 = 0;
  pcVar3 = (code *)0x109799908;
  if ((int)param_6 != 0) {
    pcVar3 = FUN_1097998b0;
  }
  fVar5 = param_5[6];
  param_5[5] = (float)((int)param_5[5] + 1);
  uVar39 = CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) << 0x10,
                    (int)*(undefined8 *)(param_5 + 4) << 0x10) | 0x800000008000;
  fVar33 = 9.18355e-41;
  uStack_d8 = 0x10000;
  pfVar28 = *(float **)(pfVar6 + 0xe);
  fVar27 = 0.0;
  pfVar15 = param_5;
  puVar16 = param_6;
  uVar17 = param_7;
  uStack_e0 = uVar39;
  if (pfVar28 != (float *)0x0) {
    puVar16 = &uStack_e0;
    pfVar15 = pfVar28;
    FUN_1097bf628();
    fVar50 = (float)param_3;
    fVar55 = (float)uVar39;
    iVar40 = (int)uVar17;
    iVar37 = (int)puVar16;
    iVar41 = (int)param_8;
    if ((int)pfVar15 == 0) goto LAB_109799860;
    fVar33 = *pfVar28;
    fVar27 = pfVar28[3];
  }
  fVar50 = (float)param_3;
  fVar55 = (float)uVar39;
  iVar40 = (int)uVar17;
  iVar37 = (int)puVar16;
  iVar41 = (int)param_8;
  if (0 < (int)fVar5) {
    uVar29 = 0;
    lVar4 = 4;
    puVar31 = param_6;
    uVar12 = uStack_e0._4_4_;
    uVar13 = (uint)uStack_e0;
    if ((int)param_6 == 0) {
      lVar4 = 1;
    }
    do {
      fVar50 = (float)param_3;
      fVar55 = (float)uVar39;
      puVar35 = (undefined8 *)(ulong)uVar13;
      uVar34 = (ulong)uVar12;
      iVar37 = (int)puVar31;
      if (param_7 == 0) {
LAB_109798384:
        fVar56 = pfVar6[0x11];
        if ((int)fVar56 < 4) {
          if ((int)fVar56 - 1U < 2) {
LAB_1097984ac:
            fVar64 = pfVar6[0x10];
            fVar56 = pfVar6[0x28];
            fVar49 = pfVar6[0x29];
            uVar18 = uVar13 - 0x8000;
            uVar2 = uVar12 - 0x8000;
            uVar45 = (int)uVar18 >> 0x10;
            puVar35 = (undefined8 *)(ulong)uVar45;
            uVar42 = (int)uVar2 >> 0x10;
            uVar34 = (ulong)uVar42;
            if (iVar37 == 0) {
              uVar20 = uVar45 + 1;
              uVar25 = uVar42 + 1;
              if (fVar64 == 0.0) {
                param_8 = (code *)0x0;
                if ((int)uVar45 < 0) {
                  uVar36 = 0;
                  uVar26 = 0;
                  uVar21 = 0;
                  if (uVar45 != 0xffffffff) goto LAB_1097996f4;
                }
                else if (((-1 < (int)uVar42) && ((int)uVar45 < (int)fVar56)) &&
                        ((int)uVar42 < (int)fVar49)) {
                  param_8 = (code *)pfVar6;
                  (**(code **)(pfVar6 + 0x34))(pfVar6,puVar35,uVar34);
                  fVar56 = pfVar6[0x28];
                }
                uVar26 = 0;
                if (((int)uVar42 < 0) || ((int)fVar56 <= (int)uVar20)) {
LAB_10979936c:
                  uVar36 = uVar26;
                  if ((int)uVar45 < 0) goto LAB_1097997fc;
LAB_109799370:
                  uVar26 = uVar36;
                  uVar36 = 0;
                  if ((-2 < (int)uVar42) && ((int)uVar45 < (int)fVar56)) {
                    if ((int)pfVar6[0x29] <= (int)uVar25) goto LAB_1097997fc;
                    pfVar15 = pfVar6;
                    (**(code **)(pfVar6 + 0x34))(pfVar6,puVar35);
                    uVar36 = (uint)pfVar15;
                    fVar56 = pfVar6[0x28];
                  }
                }
                else {
                  if ((int)uVar42 < (int)pfVar6[0x29]) {
                    pfVar15 = pfVar6;
                    (**(code **)(pfVar6 + 0x34))(pfVar6,uVar20,uVar34);
                    uVar26 = (uint)pfVar15;
                    param_8 = (code *)((ulong)param_8 & 0xffffffff);
                    fVar56 = pfVar6[0x28];
                    goto LAB_10979936c;
                  }
                  uVar26 = 0;
                  uVar36 = 0;
                  if (-1 < (int)uVar45) goto LAB_109799370;
LAB_1097997fc:
                  uVar36 = 0;
                }
                uVar21 = 0;
                if ((-2 < (int)uVar42) && ((int)uVar20 < (int)fVar56)) {
                  if ((int)uVar25 < (int)pfVar6[0x29]) {
                    pfVar15 = pfVar6;
                    (**(code **)(pfVar6 + 0x34))();
                    uVar21 = (uint)pfVar15;
                  }
                  else {
                    uVar21 = 0;
                  }
                }
              }
              else {
                if (fVar64 == 2.8026e-45) {
                  uVar36 = (int)fVar56 - 1;
                  uVar26 = uVar45;
                  if ((int)uVar36 <= (int)uVar45) {
                    uVar26 = uVar36;
                  }
                  uVar21 = 0;
                  if (-1 < (int)uVar45) {
                    uVar21 = uVar26;
                  }
                  uVar22 = (int)fVar49 - 1;
                  uVar26 = uVar42;
                  if ((int)uVar22 <= (int)uVar42) {
                    uVar26 = uVar22;
                  }
                  uVar23 = 0;
                  if (-1 < (int)uVar42) {
                    uVar23 = uVar26;
                  }
                  uVar34 = (ulong)uVar23;
                  uVar26 = uVar20;
                  if ((int)uVar36 <= (int)uVar20) {
                    uVar26 = uVar36;
                  }
                  uVar20 = 0;
                  if (-2 < (int)uVar45) {
                    uVar20 = uVar26;
                  }
                  if ((int)uVar22 <= (int)uVar25) {
                    uVar25 = uVar22;
                  }
                  uVar22 = 0;
                  if (-2 < (int)uVar42) {
                    uVar22 = uVar25;
                  }
                }
                else if (fVar64 == 1.4013e-45) {
                  uVar21 = (int)fVar56 + uVar45;
                  iVar37 = -uVar21;
                  do {
                    uVar21 = uVar21 - (int)fVar56;
                    iVar37 = iVar37 + (int)fVar56;
                  } while ((int)fVar56 <= (int)uVar21);
                  uVar25 = (int)fVar49 + uVar42;
                  iVar40 = -uVar25;
                  do {
                    uVar25 = uVar25 - (int)fVar49;
                    iVar40 = iVar40 + (int)fVar49;
                  } while ((int)fVar49 <= (int)uVar25);
                  uVar20 = (int)fVar56 + uVar45 + 1;
                  uVar45 = ~((int)fVar56 + uVar45);
                  do {
                    uVar20 = uVar20 - (int)fVar56;
                    uVar45 = uVar45 + (int)fVar56;
                  } while ((int)fVar56 <= (int)uVar20);
                  uVar26 = (int)fVar49 + uVar42 + 1;
                  uVar42 = ~((int)fVar49 + uVar42);
                  do {
                    uVar26 = uVar26 - (int)fVar49;
                    uVar42 = uVar42 + (int)fVar49;
                  } while ((int)fVar49 <= (int)uVar26);
                  fVar55 = fVar49;
                  if ((uint)fVar49 < 2) {
                    fVar55 = 1.4013e-45;
                  }
                  uVar36 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
                  uVar22 = 0;
                  if (fVar55 != 0.0) {
                    uVar22 = ((uVar36 - (uVar36 != uVar26)) + uVar42) / (uint)fVar55;
                  }
                  if (uVar36 != uVar26) {
                    uVar22 = uVar22 + 1;
                  }
                  uVar42 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
                  fVar50 = fVar56;
                  if ((uint)fVar56 < 2) {
                    fVar50 = 1.4013e-45;
                  }
                  uVar36 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
                  uVar23 = 0;
                  if (fVar50 != 0.0) {
                    uVar23 = ((uVar42 - (uVar42 != uVar20)) + uVar45) / (uint)fVar50;
                  }
                  if (uVar42 != uVar20) {
                    uVar23 = uVar23 + 1;
                  }
                  uVar45 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
                  uVar42 = 0;
                  if (fVar55 != 0.0) {
                    uVar42 = ((uVar36 - (uVar36 != uVar25)) + iVar40) / (uint)fVar55;
                  }
                  if (uVar36 != uVar25) {
                    uVar42 = uVar42 + 1;
                  }
                  uVar36 = 0;
                  if (fVar50 != 0.0) {
                    uVar36 = ((uVar45 - (uVar45 != uVar21)) + iVar37) / (uint)fVar50;
                  }
                  if (uVar45 != uVar21) {
                    uVar36 = uVar36 + 1;
                  }
                  uVar21 = uVar21 + (int)fVar56 * uVar36;
                  uVar34 = (ulong)(uVar25 + (int)fVar49 * uVar42);
                  uVar20 = uVar20 + (int)fVar56 * uVar23;
                  uVar22 = uVar26 + (int)fVar49 * uVar22;
                }
                else {
                  iVar37 = (int)fVar56 * 2;
                  iVar40 = 0;
                  if (iVar37 != 0) {
                    iVar40 = (int)uVar45 / iVar37;
                  }
                  iVar41 = 0;
                  if (iVar37 != 0) {
                    iVar41 = (int)~uVar45 / iVar37;
                  }
                  uVar21 = uVar45 - iVar40 * iVar37;
                  if ((uVar45 & 0x80000000) != 0) {
                    uVar21 = iVar37 + ~(~uVar45 - iVar41 * iVar37);
                  }
                  if ((int)fVar56 <= (int)uVar21) {
                    uVar21 = iVar37 + ~uVar21;
                  }
                  uVar22 = uVar25;
                  if (fVar64 != 0.0) {
                    iVar40 = (int)fVar49 * 2;
                    if ((int)uVar42 < 0) {
                      iVar41 = 0;
                      if (iVar40 != 0) {
                        iVar41 = (int)~uVar42 / iVar40;
                      }
                      uVar26 = iVar40 + ~(~uVar42 - iVar41 * iVar40);
                    }
                    else {
                      iVar41 = 0;
                      if (iVar40 != 0) {
                        iVar41 = (int)uVar42 / iVar40;
                      }
                      uVar26 = uVar42 - iVar41 * iVar40;
                    }
                    if ((int)fVar49 <= (int)uVar26) {
                      uVar26 = iVar40 + ~uVar26;
                    }
                    uVar34 = (ulong)uVar26;
                    if ((int)uVar45 < -1) {
                      iVar41 = 0;
                      if (iVar37 != 0) {
                        iVar41 = (int)(-2 - uVar45) / iVar37;
                      }
                      uVar20 = iVar37 + ~((-2 - uVar45) - iVar41 * iVar37);
                    }
                    else {
                      iVar41 = 0;
                      if (iVar37 != 0) {
                        iVar41 = (int)uVar20 / iVar37;
                      }
                      uVar20 = uVar20 - iVar41 * iVar37;
                    }
                    if ((int)fVar56 <= (int)uVar20) {
                      uVar20 = iVar37 + ~uVar20;
                    }
                    iVar37 = 0;
                    if (iVar40 != 0) {
                      iVar37 = (int)(-2 - uVar42) / iVar40;
                    }
                    iVar41 = 0;
                    if (iVar40 != 0) {
                      iVar41 = (int)uVar25 / iVar40;
                    }
                    uVar22 = iVar40 + ~((-2 - uVar42) - iVar37 * iVar40);
                    if (-2 < (int)uVar42) {
                      uVar22 = uVar25 - iVar41 * iVar40;
                    }
                    if ((int)fVar49 <= (int)uVar22) {
                      uVar22 = iVar40 + ~uVar22;
                    }
                  }
                }
                param_8 = (code *)pfVar6;
                (**(code **)(pfVar6 + 0x34))(pfVar6,uVar21,uVar34);
                pfVar15 = pfVar6;
                (**(code **)(pfVar6 + 0x34))(pfVar6,uVar20,uVar34);
                uVar26 = (uint)pfVar15;
                pfVar15 = pfVar6;
                (**(code **)(pfVar6 + 0x34))(pfVar6,uVar21,uVar22);
                uVar36 = (uint)pfVar15;
                pfVar15 = pfVar6;
                (**(code **)(pfVar6 + 0x34))(pfVar6,uVar20,uVar22);
                uVar21 = (uint)pfVar15;
              }
LAB_1097996f4:
              uVar45 = uVar18 >> 9 & 0x7f;
              uVar42 = uVar2 >> 9 & 0x7f;
              iVar41 = uVar42 * uVar45;
              iVar40 = iVar41 * 4;
              iVar44 = uVar45 * 0x200 + iVar41 * -4;
              iVar37 = uVar42 * 0x200;
              iVar41 = iVar37 + iVar41 * -4;
              iVar37 = (iVar40 - (iVar37 + uVar45 * 0x200)) + 0x10000;
              uVar18 = (uint)param_8;
              uVar45 = (uVar36 >> 0x10 & 0xff) * iVar41;
              uVar17 = (ulong)uVar45;
              uVar42 = uVar21 >> 0x10 & 0xff;
              pfVar15 = (float *)(ulong)uVar42;
              uVar45 = uVar45 + (uVar26 >> 0x10 & 0xff) * iVar44;
              puVar16 = (undefined8 *)(ulong)uVar45;
              *pfVar32 = (float)((uVar36 >> 0x10 & 0xff00) * iVar41 +
                                 (uVar26 >> 0x10 & 0xff00) * iVar44 +
                                 (uVar18 >> 0x10 & 0xff00) * iVar37 +
                                 (uVar21 >> 0x10 & 0xff00) * iVar40 & 0xff000000 |
                                 uVar45 + (uVar18 >> 0x10 & 0xff) * iVar37 + uVar42 * iVar40 &
                                 0xff0000 |
                                ((uVar36 & 0xff00) * iVar41 + (uVar26 & 0xff00) * iVar44 +
                                 (uVar18 & 0xff00) * iVar37 + (uVar21 & 0xff00) * iVar40 &
                                 0xff000000 |
                                (uVar36 & 0xff) * iVar41 + (uVar26 & 0xff) * iVar44 +
                                (uVar18 & 0xff) * iVar37 + (uVar21 & 0xff) * iVar40) >> 0x10);
            }
            else {
              uVar20 = uVar45 + 1;
              puVar30 = (undefined8 *)(ulong)uVar20;
              uVar25 = uVar42 + 1;
              if (fVar64 == 0.0) {
                fVar64 = 0.0;
                if ((int)uVar45 < 0) {
                  fVar50 = 0.0;
                  fVar59 = 0.0;
                  fVar62 = 0.0;
                  fVar54 = 0.0;
                  fVar66 = 0.0;
                  fVar67 = 0.0;
                  fVar68 = 0.0;
                  fVar49 = 0.0;
                  fVar60 = 0.0;
                  fVar61 = 0.0;
                  fVar65 = 0.0;
                  fVar53 = 0.0;
                  fVar58 = 0.0;
                  fVar51 = 0.0;
                  fVar46 = 0.0;
                  fVar55 = 0.0;
                  fVar38 = 0.0;
                  fVar57 = 0.0;
                  fVar63 = 0.0;
                  if (uVar45 != 0xffffffff) goto LAB_109799294;
                }
                else {
                  fVar53 = param_4;
                  fVar58 = fVar50;
                  if (((int)uVar42 < 0) || ((int)fVar56 <= (int)uVar45)) {
                    fVar62 = 0.0;
                    fVar57 = 0.0;
                    fVar63 = 0.0;
                  }
                  else {
                    fVar62 = 0.0;
                    fVar64 = 0.0;
                    fVar57 = 0.0;
                    fVar63 = 0.0;
                    if ((int)uVar42 < (int)fVar49) {
                      pfVar15 = pfVar6;
                      puVar16 = puVar35;
                      uVar17 = uVar34;
                      fVar62 = fVar55;
                      (**(code **)(pfVar6 + 0x3a))();
                      fVar56 = pfVar6[0x28];
                      fVar53 = param_4;
                      fVar64 = param_4;
                      fVar57 = fVar50;
                      fVar55 = fVar62;
                      fVar58 = fVar50;
                      fVar63 = extraout_s1;
                    }
                  }
                }
                fVar59 = fVar63;
                fVar50 = fVar57;
                if (((int)uVar42 < 0) || ((int)fVar56 <= (int)uVar20)) {
                  fVar65 = 0.0;
                  fVar61 = 0.0;
                  fVar60 = 0.0;
                  fVar49 = 0.0;
                  fVar54 = 0.0;
                  fVar67 = 0.0;
                  fVar38 = 0.0;
                  if (-1 < (int)uVar45) goto LAB_1097994a4;
LAB_109799520:
                  fVar66 = 0.0;
                  fVar67 = 0.0;
                  fVar68 = 0.0;
                  fVar54 = 0.0;
                  fVar38 = fVar55;
                  fVar51 = fVar58;
                }
                else {
                  fVar65 = 0.0;
                  fVar61 = 0.0;
                  fVar60 = 0.0;
                  fVar49 = 0.0;
                  if ((int)uVar42 < (int)pfVar6[0x29]) {
                    pfVar15 = pfVar6;
                    puVar16 = puVar30;
                    fVar60 = fVar58;
                    fVar65 = fVar55;
                    (**(code **)(pfVar6 + 0x3a))();
                    fVar56 = pfVar6[0x28];
                    uVar17 = uVar34;
                    fVar49 = fVar53;
                    fVar55 = fVar65;
                    fVar58 = fVar60;
                    fVar61 = extraout_s1_04;
                  }
                  fVar54 = fVar61;
                  fVar67 = fVar60;
                  fVar38 = fVar65;
                  if ((int)uVar45 < 0) goto LAB_109799520;
LAB_1097994a4:
                  fVar65 = fVar38;
                  fVar60 = fVar67;
                  fVar61 = fVar54;
                  if (((int)uVar42 < -1) || ((int)fVar56 <= (int)uVar45)) goto LAB_109799520;
                  fVar66 = 0.0;
                  fVar67 = 0.0;
                  fVar68 = 0.0;
                  fVar54 = 0.0;
                  fVar38 = fVar55;
                  fVar51 = fVar58;
                  if ((int)uVar25 < (int)pfVar6[0x29]) {
                    uVar17 = (ulong)uVar25;
                    pfVar15 = pfVar6;
                    fVar68 = fVar55;
                    fVar66 = fVar58;
                    (**(code **)(pfVar6 + 0x3a))();
                    fVar56 = pfVar6[0x28];
                    puVar16 = puVar35;
                    fVar54 = fVar53;
                    fVar38 = fVar68;
                    fVar51 = fVar66;
                    fVar67 = extraout_s1_05;
                  }
                }
                fVar53 = 0.0;
                fVar55 = 0.0;
                if ((((int)uVar42 < -1) || ((int)fVar56 <= (int)uVar20)) ||
                   (uVar17 = (ulong)uVar25, (int)pfVar6[0x29] <= (int)uVar25)) {
                  fVar51 = 0.0;
                  fVar46 = 0.0;
                  fVar38 = 0.0;
                }
                else {
                  pfVar15 = pfVar6;
                  (**(code **)(pfVar6 + 0x3a))();
                  puVar16 = puVar30;
                  fVar53 = fVar55;
                  fVar46 = extraout_s1_06;
                }
              }
              else {
                if (fVar64 == 2.8026e-45) {
                  uVar36 = (int)fVar56 - 1;
                  uVar26 = uVar45;
                  if ((int)uVar36 <= (int)uVar45) {
                    uVar26 = uVar36;
                  }
                  uVar21 = 0;
                  if (-1 < (int)uVar45) {
                    uVar21 = uVar26;
                  }
                  uVar22 = (int)fVar49 - 1;
                  uVar26 = uVar42;
                  if ((int)uVar22 <= (int)uVar42) {
                    uVar26 = uVar22;
                  }
                  uVar23 = 0;
                  if (-1 < (int)uVar42) {
                    uVar23 = uVar26;
                  }
                  uVar34 = (ulong)uVar23;
                  if ((int)uVar36 <= (int)uVar20) {
                    uVar20 = uVar36;
                  }
                  uVar26 = 0;
                  if (-2 < (int)uVar45) {
                    uVar26 = uVar20;
                  }
                  puVar30 = (undefined8 *)(ulong)uVar26;
                  if ((int)uVar22 <= (int)uVar25) {
                    uVar25 = uVar22;
                  }
                  uVar45 = 0;
                  if (-2 < (int)uVar42) {
                    uVar45 = uVar25;
                  }
                  uVar17 = (ulong)uVar45;
                }
                else if (fVar64 == 1.4013e-45) {
                  uVar21 = (int)fVar56 + uVar45;
                  iVar37 = -uVar21;
                  do {
                    uVar21 = uVar21 - (int)fVar56;
                    iVar37 = iVar37 + (int)fVar56;
                  } while ((int)fVar56 <= (int)uVar21);
                  uVar20 = (int)fVar49 + uVar42;
                  iVar40 = -uVar20;
                  do {
                    uVar20 = uVar20 - (int)fVar49;
                    iVar40 = iVar40 + (int)fVar49;
                  } while ((int)fVar49 <= (int)uVar20);
                  uVar25 = (int)fVar56 + uVar45 + 1;
                  uVar45 = ~((int)fVar56 + uVar45);
                  do {
                    uVar25 = uVar25 - (int)fVar56;
                    uVar45 = uVar45 + (int)fVar56;
                  } while ((int)fVar56 <= (int)uVar25);
                  uVar26 = (int)fVar49 + uVar42 + 1;
                  uVar42 = ~((int)fVar49 + uVar42);
                  do {
                    uVar26 = uVar26 - (int)fVar49;
                    uVar42 = uVar42 + (int)fVar49;
                  } while ((int)fVar49 <= (int)uVar26);
                  fVar64 = fVar49;
                  if ((uint)fVar49 < 2) {
                    fVar64 = 1.4013e-45;
                  }
                  uVar36 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU);
                  uVar22 = 0;
                  if (fVar64 != 0.0) {
                    uVar22 = ((uVar36 - (uVar36 != uVar26)) + uVar42) / (uint)fVar64;
                  }
                  if (uVar36 != uVar26) {
                    uVar22 = uVar22 + 1;
                  }
                  uVar42 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
                  fVar53 = fVar56;
                  if ((uint)fVar56 < 2) {
                    fVar53 = 1.4013e-45;
                  }
                  uVar36 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
                  uVar23 = 0;
                  if (fVar53 != 0.0) {
                    uVar23 = ((uVar42 - (uVar42 != uVar25)) + uVar45) / (uint)fVar53;
                  }
                  if (uVar42 != uVar25) {
                    uVar23 = uVar23 + 1;
                  }
                  uVar9 = uVar36 - (uVar36 != uVar20);
                  param_8 = (code *)(ulong)uVar9;
                  uVar45 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
                  uVar42 = 0;
                  if (fVar64 != 0.0) {
                    uVar42 = (uVar9 + iVar40) / (uint)fVar64;
                  }
                  if (uVar36 != uVar20) {
                    uVar42 = uVar42 + 1;
                  }
                  uVar36 = 0;
                  if (fVar53 != 0.0) {
                    uVar36 = ((uVar45 - (uVar45 != uVar21)) + iVar37) / (uint)fVar53;
                  }
                  if (uVar45 != uVar21) {
                    uVar36 = uVar36 + 1;
                  }
                  uVar21 = uVar21 + (int)fVar56 * uVar36;
                  uVar34 = (ulong)(uVar20 + (int)fVar49 * uVar42);
                  puVar30 = (undefined8 *)(ulong)(uVar25 + (int)fVar56 * uVar23);
                  uVar17 = (ulong)(uVar26 + (int)fVar49 * uVar22);
                }
                else {
                  iVar37 = (int)fVar56 * 2;
                  iVar40 = 0;
                  if (iVar37 != 0) {
                    iVar40 = (int)uVar45 / iVar37;
                  }
                  iVar41 = 0;
                  if (iVar37 != 0) {
                    iVar41 = (int)~uVar45 / iVar37;
                  }
                  uVar21 = uVar45 - iVar40 * iVar37;
                  if ((uVar45 & 0x80000000) != 0) {
                    uVar21 = iVar37 + ~(~uVar45 - iVar41 * iVar37);
                  }
                  if ((int)fVar56 <= (int)uVar21) {
                    uVar21 = iVar37 + ~uVar21;
                  }
                  if (fVar64 == 0.0) {
                    uVar17 = (ulong)uVar25;
                  }
                  else {
                    iVar40 = (int)fVar49 * 2;
                    if ((int)uVar42 < 0) {
                      iVar41 = 0;
                      if (iVar40 != 0) {
                        iVar41 = (int)~uVar42 / iVar40;
                      }
                      uVar26 = iVar40 + ~(~uVar42 - iVar41 * iVar40);
                    }
                    else {
                      iVar41 = 0;
                      if (iVar40 != 0) {
                        iVar41 = (int)uVar42 / iVar40;
                      }
                      uVar26 = uVar42 - iVar41 * iVar40;
                    }
                    if ((int)fVar49 <= (int)uVar26) {
                      uVar26 = iVar40 + ~uVar26;
                    }
                    uVar34 = (ulong)uVar26;
                    if ((int)uVar45 < -1) {
                      iVar41 = 0;
                      if (iVar37 != 0) {
                        iVar41 = (int)(-2 - uVar45) / iVar37;
                      }
                      uVar20 = iVar37 + ~((-2 - uVar45) - iVar41 * iVar37);
                    }
                    else {
                      iVar41 = 0;
                      if (iVar37 != 0) {
                        iVar41 = (int)uVar20 / iVar37;
                      }
                      uVar20 = uVar20 - iVar41 * iVar37;
                    }
                    if ((int)fVar56 <= (int)uVar20) {
                      uVar20 = iVar37 + ~uVar20;
                    }
                    puVar30 = (undefined8 *)(ulong)uVar20;
                    if ((int)uVar42 < -1) {
                      iVar37 = 0;
                      if (iVar40 != 0) {
                        iVar37 = (int)(-2 - uVar42) / iVar40;
                      }
                      uVar25 = iVar40 + ~((-2 - uVar42) - iVar37 * iVar40);
                    }
                    else {
                      iVar37 = 0;
                      if (iVar40 != 0) {
                        iVar37 = (int)uVar25 / iVar40;
                      }
                      uVar25 = uVar25 - iVar37 * iVar40;
                    }
                    if ((int)fVar49 <= (int)uVar25) {
                      uVar25 = iVar40 + ~uVar25;
                    }
                    uVar17 = (ulong)uVar25;
                  }
                }
                fVar62 = fVar55;
                (**(code **)(pfVar6 + 0x3a))(pfVar6,uVar21,uVar34);
                fVar49 = param_4;
                fVar65 = fVar62;
                fVar60 = fVar50;
                (**(code **)(pfVar6 + 0x3a))(pfVar6,puVar30,uVar34);
                fVar54 = fVar49;
                fVar68 = fVar65;
                fVar66 = fVar60;
                (**(code **)(pfVar6 + 0x3a))(pfVar6,uVar21,uVar17);
                pfVar15 = pfVar6;
                fVar53 = fVar54;
                fVar38 = fVar68;
                fVar51 = fVar66;
                (**(code **)(pfVar6 + 0x3a))();
                puVar16 = puVar30;
                fVar64 = param_4;
                fVar61 = extraout_s1_01;
                fVar59 = extraout_s1_00;
                fVar67 = extraout_s1_02;
                fVar46 = extraout_s1_03;
              }
LAB_109799294:
              fVar55 = (float)(uVar2 & 0xffff) / 65536.0;
              fVar57 = (float)(uVar18 & 0xffff) / 65536.0;
              fVar58 = fVar55 * fVar57;
              fVar63 = fVar57 * (1.0 - fVar55);
              fVar56 = fVar55 * (1.0 - fVar57);
              fVar55 = (1.0 - fVar55) * (1.0 - fVar57);
              fVar50 = fVar63 * fVar60 + fVar55 * fVar50 + fVar56 * fVar66 + fVar58 * fVar51;
              param_3 = (ulong)(uint)fVar50;
              *pfVar32 = fVar63 * fVar65 + fVar55 * fVar62 + fVar56 * fVar68 + fVar58 * fVar38;
              pfVar32[1] = fVar63 * fVar61 + fVar55 * fVar59 + fVar56 * fVar67 + fVar58 * fVar46;
              fVar55 = fVar63 * fVar49 + fVar55 * fVar64 + fVar56 * fVar54 + fVar58 * fVar53;
              uVar39 = (ulong)(uint)fVar55;
              pfVar32[2] = fVar50;
              pfVar32[3] = fVar55;
              param_4 = fVar53;
            }
          }
          else if ((fVar56 == 0.0) || (fVar56 == 4.2039e-45)) {
            uVar42 = (int)(uVar13 - 1) >> 0x10;
            puVar16 = (undefined8 *)(ulong)uVar42;
            uVar45 = (int)(uVar12 - 1) >> 0x10;
            uVar17 = (ulong)uVar45;
            fVar55 = pfVar6[0x10];
            if (fVar55 == 0.0) {
              param_8 = (code *)0x1;
            }
            else {
              fVar50 = pfVar6[0x28];
              if (fVar55 == 2.8026e-45) {
                uVar18 = uVar42;
                if ((int)((int)fVar50 - 1U) <= (int)uVar42) {
                  uVar18 = (int)fVar50 - 1U;
                }
                uVar2 = 0;
                if (-1 < (int)uVar42) {
                  uVar2 = uVar18;
                }
                puVar16 = (undefined8 *)(ulong)uVar2;
                uVar42 = uVar45;
                if ((int)((int)pfVar6[0x29] - 1U) <= (int)uVar45) {
                  uVar42 = (int)pfVar6[0x29] - 1U;
                }
                uVar18 = 0;
                if (-1 < (int)uVar45) {
                  uVar18 = uVar42;
                }
                uVar17 = (ulong)uVar18;
              }
              else if (fVar55 == 1.4013e-45) {
                uVar42 = (int)fVar50 + uVar42;
                iVar37 = -uVar42;
                do {
                  uVar42 = uVar42 - (int)fVar50;
                  iVar37 = iVar37 + (int)fVar50;
                } while ((int)fVar50 <= (int)uVar42);
                fVar55 = pfVar6[0x29];
                uVar45 = (int)fVar55 + uVar45;
                iVar40 = -uVar45;
                do {
                  uVar45 = uVar45 - (int)fVar55;
                  iVar40 = iVar40 + (int)fVar55;
                } while ((int)fVar55 <= (int)uVar45);
                uVar18 = uVar45 & ((int)uVar45 >> 0x1f ^ 0xffffffffU);
                fVar56 = fVar55;
                if ((uint)fVar55 < 2) {
                  fVar56 = 1.4013e-45;
                }
                uVar2 = uVar42 & ((int)uVar42 >> 0x1f ^ 0xffffffffU);
                uVar20 = 0;
                if (fVar56 != 0.0) {
                  uVar20 = ((uVar18 - (uVar18 != uVar45)) + iVar40) / (uint)fVar56;
                }
                if (uVar18 != uVar45) {
                  uVar20 = uVar20 + 1;
                }
                fVar56 = fVar50;
                if ((uint)fVar50 < 2) {
                  fVar56 = 1.4013e-45;
                }
                uVar18 = 0;
                if (fVar56 != 0.0) {
                  uVar18 = ((uVar2 - (uVar2 != uVar42)) + iVar37) / (uint)fVar56;
                }
                if (uVar2 != uVar42) {
                  uVar18 = uVar18 + 1;
                }
                puVar16 = (undefined8 *)(ulong)(uVar42 + (int)fVar50 * uVar18);
                uVar17 = (ulong)(uVar45 + (int)fVar55 * uVar20);
              }
              else {
                iVar37 = (int)fVar50 * 2;
                if ((int)uVar42 < 0) {
                  iVar40 = 0;
                  if (iVar37 != 0) {
                    iVar40 = (int)~uVar42 / iVar37;
                  }
                  uVar42 = iVar37 + ~(~uVar42 - iVar40 * iVar37);
                }
                else {
                  iVar40 = 0;
                  if (iVar37 != 0) {
                    iVar40 = (int)uVar42 / iVar37;
                  }
                  uVar42 = uVar42 - iVar40 * iVar37;
                }
                if ((int)fVar50 <= (int)uVar42) {
                  uVar42 = iVar37 + ~uVar42;
                }
                puVar16 = (undefined8 *)(ulong)uVar42;
                iVar37 = (int)pfVar6[0x29] * 2;
                iVar40 = 0;
                if (iVar37 != 0) {
                  iVar40 = (int)~uVar45 / iVar37;
                }
                iVar41 = 0;
                if (iVar37 != 0) {
                  iVar41 = (int)uVar45 / iVar37;
                }
                uVar42 = iVar37 + ~(~uVar45 - iVar40 * iVar37);
                if ((uVar45 & 0x80000000) == 0) {
                  uVar42 = uVar45 - iVar41 * iVar37;
                }
                if ((int)pfVar6[0x29] <= (int)uVar42) {
                  uVar42 = iVar37 + ~uVar42;
                }
                uVar17 = (ulong)uVar42;
              }
              param_8 = (code *)0x0;
            }
            pfVar15 = pfVar6;
            param_9 = pfVar32;
            (*pcVar3)();
          }
        }
        else {
          if (fVar56 == 5.60519e-45) goto LAB_1097984ac;
          if (fVar56 == 7.00649e-45) {
            piVar19 = *(int **)(pfVar6 + 0x12);
            iVar40 = *piVar19 >> 0x10;
            iVar41 = piVar19[1] >> 0x10;
            fVar56 = pfVar6[0x10];
            fVar55 = pfVar6[0x28];
            fVar50 = pfVar6[0x29];
            uVar45 = (int)(uVar13 + (0xffff - *piVar19 >> 1)) >> 0x10;
            uVar42 = (int)(uVar12 + (0xffff - piVar19[1] >> 1)) >> 0x10;
            uVar34 = (ulong)uVar42;
            if (iVar37 == 0) {
              if (iVar41 < 1) {
                uVar47 = 0;
                uVar42 = 0;
                uVar45 = 0;
              }
              else {
                piVar19 = piVar19 + 2;
                uVar18 = (int)fVar55 - 1;
                iVar37 = (int)fVar55 * 2;
                fVar49 = fVar55;
                if (fVar55 == 0.0 || uVar18 == 0) {
                  fVar49 = 1.4013e-45;
                }
                uVar2 = (int)fVar50 - 1;
                iVar44 = (int)fVar50 * 2;
                fVar64 = fVar50;
                if (fVar50 == 0.0 || uVar2 == 0) {
                  fVar64 = 1.4013e-45;
                }
                uStack_104 = (int)fVar50 + uVar42;
                uStack_108 = -uStack_104;
                auVar48 = ZEXT216(0);
                do {
                  uVar20 = (uint)uVar34;
                  if (0 < iVar40) {
                    uVar25 = uVar20;
                    if ((int)uVar2 <= (int)uVar20) {
                      uVar25 = uVar2;
                    }
                    uVar26 = 0;
                    if (-1 < (int)uVar20) {
                      uVar26 = uVar25;
                    }
                    uVar36 = (int)fVar55 + uVar45;
                    iVar8 = -((int)fVar55 + uVar45);
                    uVar25 = uVar45;
                    do {
                      puVar31 = (undefined8 *)(ulong)uVar25;
                      iVar7 = *piVar19;
                      if (iVar7 != 0) {
                        iStack_f0 = auVar48._0_4_;
                        iStack_ec = auVar48._4_4_;
                        uVar17 = uVar34;
                        if (fVar56 == 0.0) {
                          param_8 = (code *)0x1;
                        }
                        else {
                          if (fVar56 == 2.8026e-45) {
                            uVar21 = uVar25;
                            if ((int)uVar18 <= (int)uVar25) {
                              uVar21 = uVar18;
                            }
                            uVar22 = 0;
                            if (-1 < (int)uVar25) {
                              uVar22 = uVar21;
                            }
                            puVar31 = (undefined8 *)(ulong)uVar22;
                            uVar17 = (ulong)uVar26;
                          }
                          else {
                            uVar21 = uVar36;
                            iVar52 = iVar8;
                            if (fVar56 == 1.4013e-45) {
                              do {
                                uVar21 = uVar21 - (int)fVar55;
                                iVar52 = iVar52 + (int)fVar55;
                                uVar22 = uStack_108;
                                uVar23 = uStack_104;
                              } while ((int)fVar55 <= (int)uVar21);
                              do {
                                uVar23 = uVar23 - (int)fVar50;
                                uVar22 = uVar22 + (int)fVar50;
                              } while ((int)fVar50 <= (int)uVar23);
                              uVar9 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
                              uVar10 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
                              uVar11 = 0;
                              if (fVar64 != 0.0) {
                                uVar11 = ((uVar9 - (uVar9 != uVar23)) + uVar22) / (uint)fVar64;
                              }
                              if (uVar9 != uVar23) {
                                uVar11 = uVar11 + 1;
                              }
                              uVar22 = 0;
                              if (fVar49 != 0.0) {
                                uVar22 = ((uVar10 - (uVar10 != uVar21)) + iVar52) / (uint)fVar49;
                              }
                              if (uVar10 != uVar21) {
                                uVar22 = uVar22 + 1;
                              }
                              puVar31 = (undefined8 *)(ulong)(uVar21 + (int)fVar55 * uVar22);
                              uVar17 = (ulong)(uVar23 + (int)fVar50 * uVar11);
                            }
                            else {
                              iVar52 = 0;
                              if (iVar37 != 0) {
                                iVar52 = (int)uVar25 / iVar37;
                              }
                              iVar24 = 0;
                              if (iVar37 != 0) {
                                iVar24 = (int)~uVar25 / iVar37;
                              }
                              uVar21 = uVar25 - iVar52 * iVar37;
                              if ((uVar25 & 0x80000000) != 0) {
                                uVar21 = iVar37 + ~(~uVar25 - iVar24 * iVar37);
                              }
                              if ((int)fVar55 <= (int)uVar21) {
                                uVar21 = iVar37 + ~uVar21;
                              }
                              puVar31 = (undefined8 *)(ulong)uVar21;
                              if (fVar56 != 0.0) {
                                if ((int)uVar20 < 0) {
                                  iVar52 = 0;
                                  if (iVar44 != 0) {
                                    iVar52 = (int)~uVar20 / iVar44;
                                  }
                                  uVar21 = iVar44 + ~(~uVar20 - iVar52 * iVar44);
                                }
                                else {
                                  iVar52 = 0;
                                  if (iVar44 != 0) {
                                    iVar52 = (int)uVar20 / iVar44;
                                  }
                                  uVar21 = uVar20 - iVar52 * iVar44;
                                }
                                if ((int)fVar50 <= (int)uVar21) {
                                  uVar21 = iVar44 + ~uVar21;
                                }
                                uVar17 = (ulong)uVar21;
                              }
                            }
                          }
                          param_8 = (code *)0x0;
                        }
                        param_9 = &fStack_d0;
                        pfVar15 = pfVar6;
                        (*pcVar3)();
                        uVar47 = NEON_ushl(CONCAT44(fStack_d0,fStack_d0),0xfffffff8fffffff0,4);
                        param_3 = CONCAT44(iStack_ec + (uint)(byte)((ulong)uVar47 >> 0x20) * iVar7,
                                           iStack_f0 + (uint)(byte)uVar47 * iVar7);
                        iVar52 = auVar48._8_4_;
                        auVar48._12_4_ = auVar48._12_4_ + ((uint)fStack_d0 >> 0x18) * iVar7;
                        auVar48._8_4_ = iVar52 + ((uint)fStack_d0 & 0xff) * iVar7;
                        auVar48._0_8_ = param_3;
                        puVar16 = puVar31;
                      }
                      piVar19 = piVar19 + 1;
                      uVar25 = uVar25 + 1;
                      uVar36 = uVar36 + 1;
                      iVar8 = iVar8 + -1;
                    } while ((int)uVar25 < (int)(uVar45 + iVar40));
                  }
                  uVar34 = (ulong)(uVar20 + 1);
                  uStack_104 = uStack_104 + 1;
                  uStack_108 = uStack_108 + -1;
                } while ((int)(uVar20 + 1) < (int)(uVar42 + iVar41));
                iVar37 = auVar48._0_4_ + 0x8000;
                iVar40 = auVar48._4_4_ + 0x8000;
                iVar41 = auVar48._8_4_ + 0x8000;
                iVar44 = auVar48._12_4_ + 0x8000;
                uVar47 = CONCAT44((int)(iVar40 + (-(uint)(iVar40 < 0) >> 0x10)) >> 0x10,
                                  (int)(iVar37 + (-(uint)(iVar37 < 0) >> 0x10)) >> 0x10);
                uVar42 = (int)(iVar41 + (-(uint)(iVar41 < 0) >> 0x10)) >> 0x10;
                uVar45 = (int)(iVar44 + (-(uint)(iVar44 < 0) >> 0x10)) >> 0x10;
                puVar31 = (undefined8 *)((ulong)param_6 & 0xffffffff);
              }
              uVar45 = uVar45 & ((int)uVar45 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar45) {
                uVar45 = 0xff;
              }
              uVar42 = uVar42 & ((int)uVar42 >> 0x1f ^ 0xffffffffU);
              uVar47 = NEON_smax(uVar47,0,4);
              uVar47 = NEON_smin(uVar47,0xff000000ff,4);
              uVar47 = NEON_ushl(uVar47,0x800000010,4);
              if (0xfe < (int)uVar42) {
                uVar42 = 0xff;
              }
              uVar18 = CONCAT13((byte)((ulong)uVar47 >> 0x38) | (byte)((ulong)uVar47 >> 0x18),
                                CONCAT12((byte)((ulong)uVar47 >> 0x30) |
                                         (byte)((ulong)uVar47 >> 0x10),
                                         CONCAT11((byte)((ulong)uVar47 >> 0x28) |
                                                  (byte)((ulong)uVar47 >> 8),
                                                  (byte)((ulong)uVar47 >> 0x20) | (byte)uVar47)));
              uVar39 = (ulong)uVar18;
              *pfVar32 = (float)(uVar18 | uVar42 | uVar45 << 0x18);
            }
            else {
              if (iVar41 < 1) {
                pfVar32[0] = 0.0;
                pfVar32[1] = 0.0;
                fVar55 = 0.0;
                pfVar32[2] = 0.0;
              }
              else {
                piVar19 = piVar19 + 2;
                uVar18 = (int)fVar55 - 1;
                iVar37 = (int)fVar55 * 2;
                fVar49 = fVar55;
                if (fVar55 == 0.0 || uVar18 == 0) {
                  fVar49 = 1.4013e-45;
                }
                uVar2 = (int)fVar50 - 1;
                iVar44 = (int)fVar50 * 2;
                fVar64 = fVar50;
                if (fVar50 == 0.0 || uVar2 == 0) {
                  fVar64 = 1.4013e-45;
                }
                uStack_108 = (int)fVar50 + uVar42;
                iStack_10c = -uStack_108;
                uVar47 = 0;
                uVar43 = 0;
                do {
                  uVar20 = (uint)uVar34;
                  if (0 < iVar40) {
                    uVar25 = uVar20;
                    if ((int)uVar2 <= (int)uVar20) {
                      uVar25 = uVar2;
                    }
                    uVar26 = 0;
                    if (-1 < (int)uVar20) {
                      uVar26 = uVar25;
                    }
                    uVar36 = (int)fVar55 + uVar45;
                    iVar8 = -((int)fVar55 + uVar45);
                    uVar25 = uVar45;
                    do {
                      puVar31 = (undefined8 *)(ulong)uVar25;
                      iVar7 = *piVar19;
                      if (iVar7 != 0) {
                        uVar17 = uVar34;
                        if (fVar56 == 0.0) {
                          param_8 = (code *)0x1;
                        }
                        else {
                          if (fVar56 == 2.8026e-45) {
                            uVar21 = uVar25;
                            if ((int)uVar18 <= (int)uVar25) {
                              uVar21 = uVar18;
                            }
                            uVar22 = 0;
                            if (-1 < (int)uVar25) {
                              uVar22 = uVar21;
                            }
                            puVar31 = (undefined8 *)(ulong)uVar22;
                            uVar17 = (ulong)uVar26;
                          }
                          else {
                            uVar21 = uVar36;
                            iVar52 = iVar8;
                            if (fVar56 == 1.4013e-45) {
                              do {
                                uVar21 = uVar21 - (int)fVar55;
                                iVar52 = iVar52 + (int)fVar55;
                                iVar24 = iStack_10c;
                                uVar22 = uStack_108;
                              } while ((int)fVar55 <= (int)uVar21);
                              do {
                                uVar22 = uVar22 - (int)fVar50;
                                iVar24 = iVar24 + (int)fVar50;
                              } while ((int)fVar50 <= (int)uVar22);
                              uVar23 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
                              uVar9 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
                              uVar10 = 0;
                              if (fVar64 != 0.0) {
                                uVar10 = ((uVar23 - (uVar23 != uVar22)) + iVar24) / (uint)fVar64;
                              }
                              if (uVar23 != uVar22) {
                                uVar10 = uVar10 + 1;
                              }
                              uVar23 = 0;
                              if (fVar49 != 0.0) {
                                uVar23 = ((uVar9 - (uVar9 != uVar21)) + iVar52) / (uint)fVar49;
                              }
                              if (uVar9 != uVar21) {
                                uVar23 = uVar23 + 1;
                              }
                              puVar31 = (undefined8 *)(ulong)(uVar21 + (int)fVar55 * uVar23);
                              uVar17 = (ulong)(uVar22 + (int)fVar50 * uVar10);
                            }
                            else {
                              iVar52 = 0;
                              if (iVar37 != 0) {
                                iVar52 = (int)uVar25 / iVar37;
                              }
                              iVar24 = 0;
                              if (iVar37 != 0) {
                                iVar24 = (int)~uVar25 / iVar37;
                              }
                              uVar21 = uVar25 - iVar52 * iVar37;
                              if ((uVar25 & 0x80000000) != 0) {
                                uVar21 = iVar37 + ~(~uVar25 - iVar24 * iVar37);
                              }
                              if ((int)fVar55 <= (int)uVar21) {
                                uVar21 = iVar37 + ~uVar21;
                              }
                              puVar31 = (undefined8 *)(ulong)uVar21;
                              if (fVar56 != 0.0) {
                                if ((int)uVar20 < 0) {
                                  iVar52 = 0;
                                  if (iVar44 != 0) {
                                    iVar52 = (int)~uVar20 / iVar44;
                                  }
                                  uVar21 = iVar44 + ~(~uVar20 - iVar52 * iVar44);
                                }
                                else {
                                  iVar52 = 0;
                                  if (iVar44 != 0) {
                                    iVar52 = (int)uVar20 / iVar44;
                                  }
                                  uVar21 = uVar20 - iVar52 * iVar44;
                                }
                                if ((int)fVar50 <= (int)uVar21) {
                                  uVar21 = iVar44 + ~uVar21;
                                }
                                uVar17 = (ulong)uVar21;
                              }
                            }
                          }
                          param_8 = (code *)0x0;
                        }
                        param_9 = &fStack_d0;
                        pfVar15 = pfVar6;
                        (*pcVar3)();
                        fVar53 = (float)iVar7;
                        auVar14._8_8_ = uVar43;
                        auVar14._0_8_ = uVar47;
                        auVar48 = NEON_ucvtf(auVar14,4);
                        uVar47 = CONCAT44((int)(auVar48._4_4_ + fStack_cc * fVar53),
                                          (int)(auVar48._0_4_ + fStack_d0 * fVar53));
                        uVar43 = CONCAT44((int)(auVar48._12_4_ +
                                               (float)((ulong)uStack_c8 >> 0x20) * fVar53),
                                          (int)(auVar48._8_4_ + (float)uStack_c8 * fVar53));
                        puVar16 = puVar31;
                      }
                      piVar19 = piVar19 + 1;
                      uVar25 = uVar25 + 1;
                      uVar36 = uVar36 + 1;
                      iVar8 = iVar8 + -1;
                    } while ((int)uVar25 < (int)(uVar45 + iVar40));
                  }
                  uVar34 = (ulong)(uVar20 + 1);
                  uStack_108 = uStack_108 + 1;
                  iStack_10c = iStack_10c + -1;
                } while ((int)(uVar20 + 1) < (int)(uVar42 + iVar41));
                fVar56 = (float)(int)uVar47 / 65536.0;
                fVar49 = (float)(int)((ulong)uVar47 >> 0x20) / 65536.0;
                param_4 = (float)(int)uVar43 / 65536.0;
                fVar50 = (float)(int)((ulong)uVar43 >> 0x20) / 65536.0;
                uVar39 = (ulong)(uint)fVar50;
                fVar55 = 1.0;
                if (fVar56 <= 1.0) {
                  fVar55 = fVar56;
                }
                fVar64 = 0.0;
                if (0.0 <= fVar56) {
                  fVar64 = fVar55;
                }
                fVar55 = 1.0;
                if (fVar49 <= 1.0) {
                  fVar55 = fVar49;
                }
                fVar56 = 0.0;
                if (0.0 <= fVar49) {
                  fVar56 = fVar55;
                }
                param_3 = (ulong)(uint)fVar56;
                *pfVar32 = fVar64;
                pfVar32[1] = fVar56;
                fVar55 = 1.0;
                if (param_4 <= 1.0) {
                  fVar55 = param_4;
                }
                fVar56 = 0.0;
                if (0.0 <= param_4) {
                  fVar56 = fVar55;
                }
                pfVar32[2] = fVar56;
                puVar31 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                fVar55 = 0.0;
                if ((0.0 <= fVar50) && (fVar55 = 1.0, fVar50 <= 1.0)) {
                  fVar55 = fVar50;
                }
              }
              pfVar32[3] = fVar55;
            }
          }
          else if (fVar56 == 8.40779e-45) {
            if (iVar37 == 0) {
              param_8 = (code *)0x109799908;
            }
            else {
              param_8 = FUN_1097998b0;
            }
            pfVar15 = pfVar6;
            param_9 = pfVar32;
            FUN_109799b1c();
            puVar16 = puVar35;
            uVar17 = uVar34;
          }
        }
      }
      else if (iVar37 == 0) {
        if (*(int *)(param_7 + uVar29 * 4) != 0) goto LAB_109798384;
      }
      else {
        plVar1 = (long *)(param_7 + uVar29 * 0x10);
        if (*plVar1 != lStack_c0 || plVar1[1] != lStack_b8) goto LAB_109798384;
      }
      fVar50 = (float)param_3;
      fVar55 = (float)uVar39;
      iVar40 = (int)uVar17;
      iVar37 = (int)puVar16;
      iVar41 = (int)param_8;
      pfVar32 = pfVar32 + lVar4;
      uVar29 = uVar29 + 1;
      uVar12 = uVar12 + (int)fVar27;
      uVar13 = uVar13 + (int)fVar33;
    } while (uVar29 != (uint)fVar5);
    pfVar32 = *(float **)(param_5 + 2);
  }
LAB_109799860:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return pfVar32;
  }
  ___stack_chk_fail();
  if ((iVar41 == 0) ||
     (((-1 < iVar37 && (-1 < iVar40)) &&
      ((iVar37 < (int)pfVar15[0x28] && (iVar40 < (int)pfVar15[0x29])))))) {
    (**(code **)(pfVar15 + 0x3a))();
    *param_9 = fVar55;
    param_9[1] = extraout_s1_07;
    param_9[2] = fVar50;
    param_9[3] = param_4;
  }
  else {
    param_9[0] = 0.0;
    param_9[1] = 0.0;
    param_9[2] = 0.0;
    param_9[3] = 0.0;
  }
  return pfVar15;
}



/* Entry: 1097998b0; end: 109799963;  */

void FUN_1097998b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,int param_6,int param_7,int param_8,undefined8 *param_9)

{
  if ((param_8 == 0) ||
     ((((-1 < param_6 && (-1 < param_7)) && (param_6 < *(int *)(param_5 + 0xa0))) &&
      (param_7 < *(int *)(param_5 + 0xa4))))) {
    (**(code **)(param_5 + 0xe8))();
    *(undefined4 *)param_9 = param_1;
    *(undefined4 *)((long)param_9 + 4) = param_2;
    *(undefined4 *)(param_9 + 1) = param_3;
    *(undefined4 *)((long)param_9 + 0xc) = param_4;
  }
  else {
    *param_9 = 0;
    param_9[1] = 0;
  }
  return;
}



/* Entry: 109799964; end: 109799b1b;  */

void FUN_109799964(int *param_1,int *param_2,int *param_3,int *param_4,float *param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)param_6;
  fVar2 = (float)NEON_ucvtf(*param_1);
  fVar3 = param_5[1];
  *param_1 = (int)(fVar2 + fVar1 * *param_5);
  fVar2 = (float)NEON_ucvtf(*param_2);
  *param_2 = (int)(fVar2 + fVar1 * fVar3);
  fVar2 = (float)NEON_ucvtf(*param_3);
  fVar3 = param_5[3];
  *param_3 = (int)(fVar2 + fVar1 * param_5[2]);
  fVar2 = (float)NEON_ucvtf(*param_4);
  *param_4 = (int)(fVar2 + fVar1 * fVar3);
  return;
}



/* Entry: 109799b1c; end: 109799e9f;  */

void FUN_109799b1c(long param_1,uint param_2,uint param_3,code *param_4,undefined8 param_5,
                  code *param_6,code *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  uint *puVar32;
  uint uVar33;
  uint *puVar34;
  int iStack_b0;
  uint uStack_ac;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar31 = *(uint **)(param_1 + 0x48);
  iVar14 = *(int *)(param_1 + 0x40);
  uVar12 = *(uint *)(param_1 + 0xa0);
  uVar13 = *(uint *)(param_1 + 0xa4);
  iVar4 = (int)puVar31[1] >> 0x10;
  uStack_78 = 0;
  uStack_70 = 0;
  if (iVar4 < 1) {
    uStack_78._4_4_ = 0;
    uVar26 = 0;
    uStack_70._4_4_ = 0;
    uVar25 = 0;
  }
  else {
    iVar5 = (int)*puVar31 >> 0x10;
    uVar19 = 0x10 - (int)*(short *)((long)puVar31 + 10);
    uVar1 = (-1 << (ulong)(uVar19 & 0x1f) & param_2) + ((1 << (ulong)(uVar19 & 0x1f)) >> 1);
    uVar20 = 0x10 - (int)*(short *)((long)puVar31 + 0xe);
    uVar2 = (-1 << (ulong)(uVar20 & 0x1f) & param_3) + ((1 << (ulong)(uVar20 & 0x1f)) >> 1);
    uVar6 = (int)(uVar1 + ((int)(0xfffe - (*puVar31 & 0xffff0000)) >> 1)) >> 0x10;
    uVar7 = (int)(uVar2 + ((int)(0xfffe - (puVar31[1] & 0xffff0000)) >> 1)) >> 0x10;
    uVar21 = uVar12 - 1;
    iVar16 = uVar12 * 2;
    uVar10 = uVar12;
    if (uVar12 == 0 || uVar21 == 0) {
      uVar10 = 1;
    }
    uVar22 = uVar13 - 1;
    iVar17 = uVar13 * 2;
    uVar11 = uVar13;
    if (uVar13 == 0 || uVar22 == 0) {
      uVar11 = 1;
    }
    uStack_ac = uVar13 + uVar7;
    iStack_b0 = -uStack_ac;
    iVar3 = uVar7 + iVar4;
    puVar32 = puVar31 + (long)(iVar5 << (ulong)((int)*(short *)((long)puVar31 + 10) & 0x1f)) +
                        (ulong)(((uVar2 & 0xffff) >> (ulong)(uVar20 & 0x1f)) * iVar4) + 4;
    do {
      uVar2 = *puVar32;
      if (uVar2 != 0 && 0 < iVar5) {
        uVar20 = uVar7;
        if ((int)uVar22 <= (int)uVar7) {
          uVar20 = uVar22;
        }
        uVar9 = 0;
        if (-1 < (int)uVar7) {
          uVar9 = uVar20;
        }
        puVar34 = puVar31 + (long)(int)(((uVar1 & 0xffff) >> (ulong)(uVar19 & 0x1f)) * iVar5) + 4;
        uVar33 = uVar12 + uVar6;
        iVar4 = -(uVar12 + uVar6);
        uVar20 = uVar6;
        do {
          uVar15 = *puVar34;
          if (uVar15 != 0) {
            uVar29 = uVar7;
            if (iVar14 == 0) {
              uVar27 = 1;
              uVar28 = uVar20;
            }
            else {
              if (iVar14 == 2) {
                uVar23 = uVar20;
                if ((int)uVar21 <= (int)uVar20) {
                  uVar23 = uVar21;
                }
                uVar29 = uVar9;
                uVar28 = 0;
                if (-1 < (int)uVar20) {
                  uVar28 = uVar23;
                }
              }
              else {
                uVar28 = uVar33;
                iVar30 = iVar4;
                if (iVar14 == 1) {
                  do {
                    uVar28 = uVar28 - uVar12;
                    iVar30 = iVar30 + uVar12;
                  } while ((int)uVar12 <= (int)uVar28);
                  uVar29 = uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU);
                  uVar23 = 0;
                  if (uVar10 != 0) {
                    uVar23 = ((uVar29 - (uVar29 != uVar28)) + iVar30) / uVar10;
                  }
                  if (uVar29 != uVar28) {
                    uVar23 = uVar23 + 1;
                  }
                  iVar30 = iStack_b0;
                  uVar29 = uStack_ac;
                  do {
                    uVar29 = uVar29 - uVar13;
                    iVar30 = iVar30 + uVar13;
                  } while ((int)uVar13 <= (int)uVar29);
                  uVar8 = uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU);
                  uVar24 = 0;
                  if (uVar11 != 0) {
                    uVar24 = ((uVar8 - (uVar8 != uVar29)) + iVar30) / uVar11;
                  }
                  if (uVar8 != uVar29) {
                    uVar24 = uVar24 + 1;
                  }
                  uVar29 = uVar29 + uVar13 * uVar24;
                  uVar28 = uVar28 + uVar12 * uVar23;
                }
                else {
                  iVar30 = 0;
                  if (iVar16 != 0) {
                    iVar30 = (int)uVar20 / iVar16;
                  }
                  iVar18 = 0;
                  if (iVar16 != 0) {
                    iVar18 = (int)~uVar20 / iVar16;
                  }
                  uVar28 = uVar20 - iVar30 * iVar16;
                  if ((uVar20 & 0x80000000) != 0) {
                    uVar28 = iVar16 + ~(~uVar20 - iVar18 * iVar16);
                  }
                  if ((int)uVar12 <= (int)uVar28) {
                    uVar28 = iVar16 + ~uVar28;
                  }
                  if (iVar14 != 0) {
                    if ((int)uVar7 < 0) {
                      iVar30 = 0;
                      if (iVar17 != 0) {
                        iVar30 = (int)~uVar7 / iVar17;
                      }
                      uVar29 = iVar17 + ~(~uVar7 - iVar30 * iVar17);
                    }
                    else {
                      iVar30 = 0;
                      if (iVar17 != 0) {
                        iVar30 = (int)uVar7 / iVar17;
                      }
                      uVar29 = uVar7 - iVar30 * iVar17;
                    }
                    if ((int)uVar13 <= (int)uVar29) {
                      uVar29 = iVar17 + ~uVar29;
                    }
                  }
                }
              }
              uVar27 = 0;
            }
            (*param_4)(param_1,uVar28,uVar29,uVar27,auStack_88);
            (*param_6)(&uStack_78,(long)&uStack_70 + 4,&uStack_70,(long)&uStack_78 + 4,auStack_88,
                       (long)(int)uVar15 * (long)(int)uVar2 + 0x8000U >> 0x10);
          }
          uVar20 = uVar20 + 1;
          uVar33 = uVar33 + 1;
          iVar4 = iVar4 + -1;
          puVar34 = puVar34 + 1;
        } while ((int)uVar20 < (int)(uVar6 + iVar5));
      }
      uVar7 = uVar7 + 1;
      uStack_ac = uStack_ac + 1;
      iStack_b0 = iStack_b0 + -1;
      puVar32 = puVar32 + 1;
    } while ((int)uVar7 < iVar3);
    uVar25 = uStack_78 & 0xffffffff;
    uVar26 = uStack_70 & 0xffffffff;
  }
  (*param_7)(uVar25,uStack_70._4_4_,uVar26,uStack_78._4_4_,param_5);
  return;
}



/* Entry: 109799ea0; end: 10979bd8b;  */

float * FUN_109799ea0(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                     float *param_5,undefined8 *param_6,ulong param_7,code *param_8,float *param_9)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  long lVar12;
  float *pfVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  float *pfVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  float *pfVar29;
  undefined8 *puVar30;
  long lVar31;
  undefined8 *puVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  long lVar36;
  float fVar37;
  int iVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  int iVar42;
  int iVar43;
  uint uVar44;
  undefined8 uVar45;
  int iVar46;
  uint uVar47;
  byte bVar48;
  float fVar49;
  float extraout_s1;
  byte bVar56;
  uint extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  uint uVar50;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  byte bVar54;
  byte bVar55;
  undefined8 extraout_d1;
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined8 extraout_var;
  undefined1 auVar53 [16];
  float fVar57;
  int iVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  long lStack_130;
  long lStack_128;
  int iStack_10c;
  uint uStack_108;
  uint uStack_104;
  float fStack_f0;
  int iStack_ec;
  undefined8 uStack_e0;
  int iStack_d8;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar6 = *(float **)param_5;
  pfVar29 = *(float **)(param_5 + 2);
  pcVar3 = FUN_10979be50;
  if ((int)param_6 != 0) {
    pcVar3 = FUN_10979bd8c;
  }
  lStack_c0 = 0;
  lStack_b8 = 0;
  fVar5 = param_5[6];
  param_5[5] = (float)((int)param_5[5] + 1);
  uVar16 = CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) << 0x10,
                    (int)*(undefined8 *)(param_5 + 4) << 0x10) | 0x800000008000;
  lVar31 = 0x10000;
  iStack_d8 = 0x10000;
  pfVar25 = *(float **)(pfVar6 + 0xe);
  uVar15 = param_7;
  uStack_e0 = uVar16;
  if (pfVar25 == (float *)0x0) {
    lVar36 = 0;
    lVar26 = 0;
    pfVar13 = param_5;
    puVar14 = param_6;
  }
  else {
    puVar14 = &uStack_e0;
    pfVar13 = pfVar25;
    FUN_1097bf628();
    fVar40 = (float)uVar16;
    fVar49 = (float)param_4;
    fVar37 = (float)param_3;
    iVar38 = (int)param_8;
    if ((int)pfVar13 == 0) goto LAB_10979bd3c;
    lVar31 = (long)(int)*pfVar25;
    lVar36 = (long)(int)pfVar25[3];
    lVar26 = (long)(int)pfVar25[6];
  }
  fVar40 = (float)uVar16;
  fVar49 = (float)param_4;
  fVar37 = (float)param_3;
  iVar38 = (int)param_8;
  if (0 < (int)fVar5) {
    uVar34 = 0;
    lVar4 = 4;
    if ((int)param_6 == 0) {
      lVar4 = 1;
    }
    lStack_128 = (long)uStack_e0._4_4_;
    uVar27 = (ulong)iStack_d8;
    lStack_130 = (long)(int)uStack_e0;
    puVar30 = param_6;
    do {
      fVar40 = (float)uVar16;
      fVar37 = (float)param_3;
      iVar38 = (int)puVar30;
      if (param_7 == 0) {
LAB_109799fd4:
        if (uVar27 == 0) {
          puVar14 = (undefined8 *)0x0;
          uVar15 = 0;
        }
        else {
          puVar14 = (undefined8 *)0x0;
          if (uVar27 != 0) {
            puVar14 = (undefined8 *)((ulong)(lStack_130 << 0x10) / uVar27);
          }
          uVar15 = 0;
          if (uVar27 != 0) {
            uVar15 = (ulong)(lStack_128 << 0x10) / uVar27;
          }
        }
        fVar49 = pfVar6[0x11];
        iVar42 = (int)puVar14;
        iVar43 = (int)uVar15;
        if ((int)fVar49 < 4) {
          if ((int)fVar49 - 1U < 2) {
LAB_10979a11c:
            fVar59 = pfVar6[0x10];
            fVar49 = pfVar6[0x28];
            fVar57 = pfVar6[0x29];
            uVar39 = iVar42 - 0x8000;
            uVar17 = iVar43 - 0x8000;
            uVar47 = (int)uVar39 >> 0x10;
            puVar35 = (undefined8 *)(ulong)uVar47;
            uVar44 = (int)uVar17 >> 0x10;
            uVar28 = (ulong)uVar44;
            if (iVar38 == 0) {
              uVar18 = uVar47 + 1;
              uVar24 = uVar44 + 1;
              if (fVar59 == 0.0) {
                param_8 = (code *)0x0;
                if ((int)uVar47 < 0) {
                  if (uVar47 == 0xffffffff) goto LAB_10979ba04;
                  uVar50 = 0;
                  param_9 = (float *)0x0;
                }
                else {
                  if (((-1 < (int)uVar44) && ((int)uVar47 < (int)fVar49)) &&
                     ((int)uVar44 < (int)fVar57)) {
                    param_8 = (code *)pfVar6;
                    (**(code **)(pfVar6 + 0x34))(pfVar6,puVar35,uVar28);
                    lVar12 = *(long *)(pfVar6 + 0x16);
                    if (lVar12 != 0) {
                      if ((int)(uVar47 - (int)pfVar6[0x18]) < 0) {
LAB_10979b9e8:
                        uVar50 = 0;
                      }
                      else {
                        uVar50 = 0;
                        if (((int)(uVar47 - (int)pfVar6[0x18]) < *(int *)(lVar12 + 0xa0)) &&
                           (-1 < (int)(uVar44 - (int)pfVar6[0x19]))) {
                          if (*(int *)(lVar12 + 0xa4) <= (int)(uVar44 - (int)pfVar6[0x19]))
                          goto LAB_10979b9e8;
                          (**(code **)(lVar12 + 0xd0))();
                          uVar50 = (uint)lVar12 & 0xff000000;
                        }
                      }
                      param_8 = (code *)(ulong)(uVar50 | (uint)param_8 & 0xffffff);
                    }
                    puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                  }
                  fVar49 = pfVar6[0x28];
LAB_10979ba04:
                  param_9 = (float *)0x0;
                  if ((-1 < (int)uVar44) && ((int)uVar18 < (int)fVar49)) {
                    if ((int)uVar44 < (int)pfVar6[0x29]) {
                      param_9 = pfVar6;
                      (**(code **)(pfVar6 + 0x34))(pfVar6,uVar18,uVar28);
                      lVar12 = *(long *)(pfVar6 + 0x16);
                      if (lVar12 == 0) {
                        puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                      }
                      else {
                        if ((int)(uVar18 - (int)pfVar6[0x18]) < 0) {
LAB_10979baf4:
                          uVar50 = 0;
                        }
                        else {
                          uVar50 = 0;
                          if (((int)(uVar18 - (int)pfVar6[0x18]) < *(int *)(lVar12 + 0xa0)) &&
                             (-1 < (int)(uVar44 - (int)pfVar6[0x19]))) {
                            if (*(int *)(lVar12 + 0xa4) <= (int)(uVar44 - (int)pfVar6[0x19]))
                            goto LAB_10979baf4;
                            (**(code **)(lVar12 + 0xd0))();
                            uVar50 = (uint)lVar12 & 0xff000000;
                          }
                        }
                        param_9 = (float *)(ulong)(uVar50 | (uint)param_9 & 0xffffff);
                        puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                      }
                    }
                    else {
                      param_9 = (float *)0x0;
                    }
                  }
                  if ((int)uVar47 < 0) {
LAB_10979bbc4:
                    uVar50 = 0;
                  }
                  else {
                    uVar50 = 0;
                    if ((-2 < (int)uVar44) && ((int)uVar47 < (int)pfVar6[0x28])) {
                      if ((int)pfVar6[0x29] <= (int)uVar24) goto LAB_10979bbc4;
                      pfVar25 = pfVar6;
                      (**(code **)(pfVar6 + 0x34))(pfVar6,puVar35);
                      uVar50 = (uint)pfVar25;
                      lVar12 = *(long *)(pfVar6 + 0x16);
                      if (lVar12 == 0) {
                        puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                      }
                      else {
                        uVar33 = 0;
                        if (((-1 < (int)(uVar47 - (int)pfVar6[0x18])) &&
                            ((int)(uVar47 - (int)pfVar6[0x18]) < *(int *)(lVar12 + 0xa0))) &&
                           (-1 < (int)(uVar24 - (int)pfVar6[0x19]))) {
                          if ((int)(uVar24 - (int)pfVar6[0x19]) < *(int *)(lVar12 + 0xa4)) {
                            (**(code **)(lVar12 + 0xd0))();
                            uVar33 = (uint)lVar12 & 0xff000000;
                          }
                          else {
                            uVar33 = 0;
                          }
                        }
                        uVar50 = uVar33 | uVar50 & 0xffffff;
                        puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                      }
                    }
                  }
                  uVar47 = 0;
                  if (-2 < (int)uVar44) {
                    if ((int)uVar18 < (int)pfVar6[0x28]) {
                      if ((int)uVar24 < (int)pfVar6[0x29]) {
                        pfVar25 = pfVar6;
                        (**(code **)(pfVar6 + 0x34))(pfVar6,uVar18);
                        uVar47 = (uint)pfVar25;
                        lVar12 = *(long *)(pfVar6 + 0x16);
                        if (lVar12 != 0) {
                          if (((int)(uVar18 - (int)pfVar6[0x18]) < 0) ||
                             (uVar44 = 0,
                             *(int *)(lVar12 + 0xa0) <= (int)(uVar18 - (int)pfVar6[0x18]))) {
                            uVar44 = 0;
                          }
                          else if (-1 < (int)(uVar24 - (int)pfVar6[0x19])) {
                            if ((int)(uVar24 - (int)pfVar6[0x19]) < *(int *)(lVar12 + 0xa4)) {
                              (**(code **)(lVar12 + 0xd0))();
                              uVar44 = (uint)lVar12 & 0xff000000;
                            }
                            else {
                              uVar44 = 0;
                            }
                          }
                          param_9 = (float *)((ulong)param_9 & 0xffffffff);
                          uVar47 = uVar44 | uVar47 & 0xffffff;
                          goto LAB_10979b5fc;
                        }
                        puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                        param_9 = (float *)((ulong)param_9 & 0xffffffff);
                      }
                      else {
                        uVar47 = 0;
                      }
                    }
                    goto LAB_10979b608;
                  }
                }
                uVar47 = 0;
              }
              else {
                if (fVar59 == 2.8026e-45) {
                  uVar33 = (int)fVar49 - 1;
                  uVar50 = uVar47;
                  if ((int)uVar33 <= (int)uVar47) {
                    uVar50 = uVar33;
                  }
                  uVar20 = 0;
                  if (-1 < (int)uVar47) {
                    uVar20 = uVar50;
                  }
                  uVar21 = (int)fVar57 - 1;
                  uVar50 = uVar44;
                  if ((int)uVar21 <= (int)uVar44) {
                    uVar50 = uVar21;
                  }
                  uVar22 = 0;
                  if (-1 < (int)uVar44) {
                    uVar22 = uVar50;
                  }
                  uVar28 = (ulong)uVar22;
                  uVar50 = uVar18;
                  if ((int)uVar33 <= (int)uVar18) {
                    uVar50 = uVar33;
                  }
                  uVar18 = 0;
                  if (-2 < (int)uVar47) {
                    uVar18 = uVar50;
                  }
                  uVar47 = uVar24;
                  if ((int)uVar21 <= (int)uVar24) {
                    uVar47 = uVar21;
                  }
                  uVar24 = 0;
                  if (-2 < (int)uVar44) {
                    uVar24 = uVar47;
                  }
                }
                else if (fVar59 == 1.4013e-45) {
                  uVar20 = (int)fVar49 + uVar47;
                  iVar38 = -uVar20;
                  do {
                    uVar20 = uVar20 - (int)fVar49;
                    iVar38 = iVar38 + (int)fVar49;
                  } while ((int)fVar49 <= (int)uVar20);
                  uVar24 = (int)fVar57 + uVar44;
                  iVar42 = -uVar24;
                  do {
                    uVar24 = uVar24 - (int)fVar57;
                    iVar42 = iVar42 + (int)fVar57;
                  } while ((int)fVar57 <= (int)uVar24);
                  uVar18 = (int)fVar49 + uVar47 + 1;
                  uVar47 = ~((int)fVar49 + uVar47);
                  do {
                    uVar18 = uVar18 - (int)fVar49;
                    uVar47 = uVar47 + (int)fVar49;
                  } while ((int)fVar49 <= (int)uVar18);
                  uVar50 = (int)fVar57 + uVar44 + 1;
                  uVar44 = ~((int)fVar57 + uVar44);
                  do {
                    uVar50 = uVar50 - (int)fVar57;
                    uVar44 = uVar44 + (int)fVar57;
                  } while ((int)fVar57 <= (int)uVar50);
                  fVar40 = fVar57;
                  if ((uint)fVar57 < 2) {
                    fVar40 = 1.4013e-45;
                  }
                  uVar33 = uVar50 & ((int)uVar50 >> 0x1f ^ 0xffffffffU);
                  uVar21 = 0;
                  if (fVar40 != 0.0) {
                    uVar21 = ((uVar33 - (uVar33 != uVar50)) + uVar44) / (uint)fVar40;
                  }
                  if (uVar33 != uVar50) {
                    uVar21 = uVar21 + 1;
                  }
                  uVar44 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
                  fVar37 = fVar49;
                  if ((uint)fVar49 < 2) {
                    fVar37 = 1.4013e-45;
                  }
                  uVar33 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
                  uVar22 = 0;
                  if (fVar37 != 0.0) {
                    uVar22 = ((uVar44 - (uVar44 != uVar18)) + uVar47) / (uint)fVar37;
                  }
                  if (uVar44 != uVar18) {
                    uVar22 = uVar22 + 1;
                  }
                  uVar47 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
                  uVar44 = 0;
                  if (fVar40 != 0.0) {
                    uVar44 = ((uVar33 - (uVar33 != uVar24)) + iVar42) / (uint)fVar40;
                  }
                  if (uVar33 != uVar24) {
                    uVar44 = uVar44 + 1;
                  }
                  uVar33 = 0;
                  if (fVar37 != 0.0) {
                    uVar33 = ((uVar47 - (uVar47 != uVar20)) + iVar38) / (uint)fVar37;
                  }
                  if (uVar47 != uVar20) {
                    uVar33 = uVar33 + 1;
                  }
                  uVar20 = uVar20 + (int)fVar49 * uVar33;
                  uVar28 = (ulong)(uVar24 + (int)fVar57 * uVar44);
                  uVar18 = uVar18 + (int)fVar49 * uVar22;
                  uVar24 = uVar50 + (int)fVar57 * uVar21;
                }
                else {
                  iVar38 = (int)fVar49 * 2;
                  iVar42 = 0;
                  if (iVar38 != 0) {
                    iVar42 = (int)uVar47 / iVar38;
                  }
                  iVar43 = 0;
                  if (iVar38 != 0) {
                    iVar43 = (int)~uVar47 / iVar38;
                  }
                  uVar20 = uVar47 - iVar42 * iVar38;
                  if ((uVar47 & 0x80000000) != 0) {
                    uVar20 = iVar38 + ~(~uVar47 - iVar43 * iVar38);
                  }
                  if ((int)fVar49 <= (int)uVar20) {
                    uVar20 = iVar38 + ~uVar20;
                  }
                  if (fVar59 != 0.0) {
                    iVar42 = (int)fVar57 * 2;
                    if ((int)uVar44 < 0) {
                      iVar43 = 0;
                      if (iVar42 != 0) {
                        iVar43 = (int)~uVar44 / iVar42;
                      }
                      uVar50 = iVar42 + ~(~uVar44 - iVar43 * iVar42);
                    }
                    else {
                      iVar43 = 0;
                      if (iVar42 != 0) {
                        iVar43 = (int)uVar44 / iVar42;
                      }
                      uVar50 = uVar44 - iVar43 * iVar42;
                    }
                    if ((int)fVar57 <= (int)uVar50) {
                      uVar50 = iVar42 + ~uVar50;
                    }
                    uVar28 = (ulong)uVar50;
                    if ((int)uVar47 < -1) {
                      iVar43 = 0;
                      if (iVar38 != 0) {
                        iVar43 = (int)(-2 - uVar47) / iVar38;
                      }
                      uVar18 = iVar38 + ~((-2 - uVar47) - iVar43 * iVar38);
                    }
                    else {
                      iVar43 = 0;
                      if (iVar38 != 0) {
                        iVar43 = (int)uVar18 / iVar38;
                      }
                      uVar18 = uVar18 - iVar43 * iVar38;
                    }
                    if ((int)fVar49 <= (int)uVar18) {
                      uVar18 = iVar38 + ~uVar18;
                    }
                    iVar38 = 0;
                    if (iVar42 != 0) {
                      iVar38 = (int)(-2 - uVar44) / iVar42;
                    }
                    iVar43 = 0;
                    if (iVar42 != 0) {
                      iVar43 = (int)uVar24 / iVar42;
                    }
                    uVar47 = iVar42 + ~((-2 - uVar44) - iVar38 * iVar42);
                    if (-2 < (int)uVar44) {
                      uVar47 = uVar24 - iVar43 * iVar42;
                    }
                    uVar24 = uVar47;
                    if ((int)fVar57 <= (int)uVar47) {
                      uVar24 = iVar42 + ~uVar47;
                    }
                  }
                }
                pfVar25 = pfVar6;
                (**(code **)(pfVar6 + 0x34))(pfVar6,uVar20,uVar28);
                fStack_f0 = SUB84(pfVar25,0);
                lVar12 = *(long *)(pfVar6 + 0x16);
                if (lVar12 != 0) {
                  if ((int)(uVar20 - (int)pfVar6[0x18]) < 0) {
LAB_10979b42c:
                    uVar47 = 0;
                  }
                  else {
                    uVar47 = 0;
                    if (((int)(uVar20 - (int)pfVar6[0x18]) < *(int *)(lVar12 + 0xa0)) &&
                       (iVar38 = (int)uVar28 - (int)pfVar6[0x19], -1 < iVar38)) {
                      if (*(int *)(lVar12 + 0xa4) <= iVar38) goto LAB_10979b42c;
                      (**(code **)(lVar12 + 0xd0))();
                      uVar47 = (uint)lVar12 & 0xff000000;
                    }
                  }
                  fStack_f0 = (float)(uVar47 | (uint)fStack_f0 & 0xffffff);
                }
                pfVar25 = pfVar6;
                (**(code **)(pfVar6 + 0x34))(pfVar6,uVar18,uVar28);
                uStack_108 = (uint)pfVar25;
                lVar12 = *(long *)(pfVar6 + 0x16);
                if (lVar12 != 0) {
                  if ((int)(uVar18 - (int)pfVar6[0x18]) < 0) {
LAB_10979b4b0:
                    uVar47 = 0;
                  }
                  else {
                    uVar47 = 0;
                    if (((int)(uVar18 - (int)pfVar6[0x18]) < *(int *)(lVar12 + 0xa0)) &&
                       (iVar38 = (int)uVar28 - (int)pfVar6[0x19], -1 < iVar38)) {
                      if (*(int *)(lVar12 + 0xa4) <= iVar38) goto LAB_10979b4b0;
                      (**(code **)(lVar12 + 0xd0))();
                      uVar47 = (uint)lVar12 & 0xff000000;
                    }
                  }
                  uStack_108 = uVar47 | uStack_108 & 0xffffff;
                }
                pfVar25 = pfVar6;
                (**(code **)(pfVar6 + 0x34))(pfVar6,uVar20,uVar24);
                uVar50 = (uint)pfVar25;
                lVar12 = *(long *)(pfVar6 + 0x16);
                if (lVar12 != 0) {
                  if ((int)(uVar20 - (int)pfVar6[0x18]) < 0) {
LAB_10979b534:
                    uVar47 = 0;
                  }
                  else {
                    uVar47 = 0;
                    if (((int)(uVar20 - (int)pfVar6[0x18]) < *(int *)(lVar12 + 0xa0)) &&
                       (-1 < (int)(uVar24 - (int)pfVar6[0x19]))) {
                      if (*(int *)(lVar12 + 0xa4) <= (int)(uVar24 - (int)pfVar6[0x19]))
                      goto LAB_10979b534;
                      (**(code **)(lVar12 + 0xd0))();
                      uVar47 = (uint)lVar12 & 0xff000000;
                    }
                  }
                  uVar50 = uVar47 | uVar50 & 0xffffff;
                }
                pfVar25 = pfVar6;
                (**(code **)(pfVar6 + 0x34))(pfVar6,uVar18,uVar24);
                uVar47 = (uint)pfVar25;
                lVar12 = *(long *)(pfVar6 + 0x16);
                if (lVar12 == 0) {
                  puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                  param_8 = (code *)(ulong)(uint)fStack_f0;
                  param_9 = (float *)(ulong)uStack_108;
                }
                else {
                  uVar44 = 0;
                  if (((-1 < (int)(uVar18 - (int)pfVar6[0x18])) &&
                      ((int)(uVar18 - (int)pfVar6[0x18]) < *(int *)(lVar12 + 0xa0))) &&
                     (-1 < (int)(uVar24 - (int)pfVar6[0x19]))) {
                    if ((int)(uVar24 - (int)pfVar6[0x19]) < *(int *)(lVar12 + 0xa4)) {
                      (**(code **)(lVar12 + 0xd0))();
                      uVar44 = (uint)lVar12 & 0xff000000;
                    }
                    else {
                      uVar44 = 0;
                    }
                  }
                  param_9 = (float *)(ulong)uStack_108;
                  param_8 = (code *)(ulong)(uint)fStack_f0;
                  uVar47 = uVar44 | uVar47 & 0xffffff;
LAB_10979b5fc:
                  puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                }
              }
LAB_10979b608:
              uVar44 = uVar39 >> 9 & 0x7f;
              uVar39 = uVar17 >> 9 & 0x7f;
              iVar43 = uVar44 * uVar39;
              iVar42 = iVar43 * 4;
              iVar38 = uVar44 * 0x200;
              iVar46 = iVar38 + iVar43 * -4;
              iVar43 = uVar39 * 0x200 + iVar43 * -4;
              iVar38 = (iVar42 - (iVar38 + uVar39 * 0x200)) + 0x10000;
              uVar17 = (uint)param_8;
              uVar18 = (uint)param_9;
              uVar44 = (uVar50 >> 0x10 & 0xff) * iVar43;
              puVar14 = (undefined8 *)(ulong)uVar44;
              uVar39 = uVar47 >> 0x10 & 0xff;
              uVar15 = (ulong)uVar39;
              uVar44 = uVar44 + (uVar18 >> 0x10 & 0xff) * iVar46;
              pfVar13 = (float *)(ulong)uVar44;
              *pfVar29 = (float)((uVar50 >> 0x10 & 0xff00) * iVar43 +
                                 (uVar18 >> 0x10 & 0xff00) * iVar46 +
                                 (uVar17 >> 0x10 & 0xff00) * iVar38 +
                                 (uVar47 >> 0x10 & 0xff00) * iVar42 & 0xff000000 |
                                 uVar44 + (uVar17 >> 0x10 & 0xff) * iVar38 + uVar39 * iVar42 &
                                 0xff0000 |
                                ((uVar50 & 0xff00) * iVar43 + (uVar18 & 0xff00) * iVar46 +
                                 (uVar17 & 0xff00) * iVar38 + (uVar47 & 0xff00) * iVar42 &
                                 0xff000000 |
                                (uVar50 & 0xff) * iVar43 + (uVar18 & 0xff) * iVar46 +
                                (uVar17 & 0xff) * iVar38 + (uVar47 & 0xff) * iVar42) >> 0x10);
            }
            else {
              uVar18 = uVar47 + 1;
              puVar32 = (undefined8 *)(ulong)uVar18;
              uVar24 = uVar44 + 1;
              if (fVar59 == 0.0) {
                if ((int)uVar47 < 0) {
                  param_4 = 0;
                  param_3 = 0;
                  auVar53 = ZEXT816(0);
                  fStack_f0 = 0.0;
                  fVar69 = 0.0;
                  fVar70 = 0.0;
                  fVar49 = 0.0;
                  fVar62 = 0.0;
                  fVar64 = 0.0;
                  fVar66 = 0.0;
                  fVar59 = 0.0;
                  fVar65 = 0.0;
                  fVar63 = 0.0;
                  fVar37 = 0.0;
                  fVar61 = 0.0;
                  fVar57 = 0.0;
                  fVar41 = 0.0;
                  if (uVar47 != 0xffffffff) goto LAB_10979b258;
                }
                else if ((((int)uVar44 < 0) || ((int)fVar49 <= (int)uVar47)) ||
                        ((int)fVar57 <= (int)uVar44)) {
                  param_4 = 0;
                  param_3 = 0;
                  auVar53 = ZEXT816(0);
                  fVar41 = 0.0;
                }
                else {
                  puVar14 = puVar35;
                  uVar15 = uVar28;
                  (**(code **)(pfVar6 + 0x3a))(pfVar6);
                  auVar53._8_8_ = extraout_var;
                  auVar53._0_8_ = extraout_d1;
                  lVar12 = *(long *)(pfVar6 + 0x16);
                  fVar41 = fVar40;
                  if (lVar12 != 0) {
                    uVar50 = uVar47 - (int)pfVar6[0x18];
                    puVar14 = (undefined8 *)(ulong)uVar50;
                    if ((int)uVar50 < 0) {
                      fVar41 = 0.0;
                    }
                    else {
                      fVar41 = 0.0;
                      if ((int)uVar50 < *(int *)(lVar12 + 0xa0)) {
                        uVar50 = uVar44 - (int)pfVar6[0x19];
                        uVar15 = (ulong)uVar50;
                        if ((-1 < (int)uVar50) && ((int)uVar50 < *(int *)(lVar12 + 0xa4))) {
                          uVar51 = extraout_var;
                          (**(code **)(lVar12 + 0xe8))();
                          auVar53._8_8_ = uVar51;
                          fVar41 = fVar40;
                        }
                      }
                    }
                  }
                }
                fStack_f0 = fVar41;
                fVar69 = (float)param_4;
                fVar70 = (float)param_3;
                fVar37 = 0.0;
                fVar63 = 0.0;
                fVar65 = 0.0;
                fVar61 = 0.0;
                if ((((int)uVar44 < 0) || ((int)pfVar6[0x28] <= (int)uVar18)) ||
                   ((int)pfVar6[0x29] <= (int)uVar44)) {
LAB_10979b728:
                  uVar28 = uVar15;
                  if ((int)uVar47 < 0) goto LAB_10979b870;
LAB_10979b72c:
                  fVar59 = 0.0;
                  uVar15 = uVar28;
                  if (((int)uVar44 < -1) || ((int)pfVar6[0x28] <= (int)uVar47)) goto LAB_10979b870;
                  uVar15 = (ulong)uVar24;
                  if ((int)uVar24 < (int)pfVar6[0x29]) {
                    uVar50 = auVar53._0_4_;
                    fVar64 = fVar70;
                    fVar62 = fVar69;
                    (**(code **)(pfVar6 + 0x3a))(pfVar6);
                    lVar12 = *(long *)(pfVar6 + 0x16);
                    fVar66 = extraout_s1_04;
                    if (lVar12 == 0) {
                      auVar53 = ZEXT416(uVar50);
                      puVar14 = puVar35;
                      fVar59 = fVar40;
                    }
                    else {
                      uVar47 = uVar47 - (int)pfVar6[0x18];
                      puVar14 = (undefined8 *)(ulong)uVar47;
                      auVar53 = ZEXT416(uVar50);
                      if ((int)uVar47 < 0) {
                        fVar59 = 0.0;
                      }
                      else {
                        fVar59 = 0.0;
                        if ((int)uVar47 < *(int *)(lVar12 + 0xa0)) {
                          uVar47 = uVar24 - (int)pfVar6[0x19];
                          uVar15 = (ulong)uVar47;
                          if ((-1 < (int)uVar47) && ((int)uVar47 < *(int *)(lVar12 + 0xa4))) {
                            fVar59 = fVar40;
                            (**(code **)(lVar12 + 0xe8))();
                            fVar40 = fVar59;
                          }
                        }
                        auVar53 = ZEXT416(uVar50);
                      }
                    }
                  }
                  else {
                    fVar62 = 0.0;
                    fVar64 = 0.0;
                    fVar66 = 0.0;
                  }
                }
                else {
                  uVar51 = auVar53._8_8_;
                  puVar14 = puVar32;
                  fVar63 = fVar70;
                  fVar65 = fVar69;
                  (**(code **)(pfVar6 + 0x3a))(pfVar6);
                  lVar12 = *(long *)(pfVar6 + 0x16);
                  fVar37 = extraout_s1;
                  if (lVar12 != 0) {
                    uVar50 = uVar18 - (int)pfVar6[0x18];
                    puVar14 = (undefined8 *)(ulong)uVar50;
                    if (((int)uVar50 < 0) || (*(int *)(lVar12 + 0xa0) <= (int)uVar50)) {
LAB_10979b710:
                      fVar61 = 0.0;
                    }
                    else {
                      uVar50 = uVar44 - (int)pfVar6[0x19];
                      uVar28 = (ulong)uVar50;
                      if (((int)uVar50 < 0) || (*(int *)(lVar12 + 0xa4) <= (int)uVar50))
                      goto LAB_10979b710;
                      (**(code **)(lVar12 + 0xe8))();
                      fVar61 = fVar40;
                    }
                    auVar53._8_8_ = uVar51;
                    puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                    uVar15 = uVar28;
                    goto LAB_10979b728;
                  }
                  puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                  auVar53._8_8_ = uVar51;
                  uVar15 = uVar28;
                  fVar61 = fVar40;
                  if (-1 < (int)uVar47) goto LAB_10979b72c;
LAB_10979b870:
                  fVar59 = 0.0;
                  fVar62 = 0.0;
                  fVar64 = 0.0;
                  fVar66 = 0.0;
                }
                uVar16 = (ulong)uVar24;
                fVar57 = 0.0;
                fVar49 = 0.0;
                if ((((int)uVar44 < -1) || ((int)pfVar6[0x28] <= (int)uVar18)) ||
                   ((int)pfVar6[0x29] <= (int)uVar24)) {
                  fVar69 = 0.0;
                  fVar70 = 0.0;
                  fVar49 = 0.0;
                }
                else {
                  uVar51 = auVar53._8_8_;
                  (**(code **)(pfVar6 + 0x3a))(pfVar6);
                  lVar12 = *(long *)(pfVar6 + 0x16);
                  fVar57 = fVar40;
                  if (lVar12 != 0) {
                    uVar18 = uVar18 - (int)pfVar6[0x18];
                    puVar32 = (undefined8 *)(ulong)uVar18;
                    fVar57 = fVar49;
                    if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)(lVar12 + 0xa0))) {
                      uVar24 = uVar24 - (int)pfVar6[0x19];
                      uVar16 = (ulong)uVar24;
                      if ((-1 < (int)uVar24) && ((int)uVar24 < *(int *)(lVar12 + 0xa4))) {
                        fVar57 = fVar40;
                        (**(code **)(lVar12 + 0xe8))();
                      }
                    }
                  }
                  auVar53._8_8_ = uVar51;
                  puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                  puVar14 = puVar32;
                  uVar15 = uVar16;
                  fVar49 = extraout_s1_05;
                }
              }
              else {
                if (fVar59 == 2.8026e-45) {
                  uVar33 = (int)fVar49 - 1;
                  uVar50 = uVar47;
                  if ((int)uVar33 <= (int)uVar47) {
                    uVar50 = uVar33;
                  }
                  uVar20 = 0;
                  if (-1 < (int)uVar47) {
                    uVar20 = uVar50;
                  }
                  uVar21 = (int)fVar57 - 1;
                  uVar50 = uVar44;
                  if ((int)uVar21 <= (int)uVar44) {
                    uVar50 = uVar21;
                  }
                  uVar22 = 0;
                  if (-1 < (int)uVar44) {
                    uVar22 = uVar50;
                  }
                  uVar28 = (ulong)uVar22;
                  if ((int)uVar33 <= (int)uVar18) {
                    uVar18 = uVar33;
                  }
                  uVar50 = 0;
                  if (-2 < (int)uVar47) {
                    uVar50 = uVar18;
                  }
                  puVar32 = (undefined8 *)(ulong)uVar50;
                  if ((int)uVar21 <= (int)uVar24) {
                    uVar24 = uVar21;
                  }
                  uVar47 = 0;
                  if (-2 < (int)uVar44) {
                    uVar47 = uVar24;
                  }
                  uVar15 = (ulong)uVar47;
                }
                else if (fVar59 == 1.4013e-45) {
                  uVar20 = (int)fVar49 + uVar47;
                  iVar38 = -uVar20;
                  do {
                    uVar20 = uVar20 - (int)fVar49;
                    iVar38 = iVar38 + (int)fVar49;
                  } while ((int)fVar49 <= (int)uVar20);
                  uVar18 = (int)fVar57 + uVar44;
                  iVar42 = -uVar18;
                  do {
                    uVar18 = uVar18 - (int)fVar57;
                    iVar42 = iVar42 + (int)fVar57;
                  } while ((int)fVar57 <= (int)uVar18);
                  uVar24 = (int)fVar49 + uVar47 + 1;
                  uVar47 = ~((int)fVar49 + uVar47);
                  do {
                    uVar24 = uVar24 - (int)fVar49;
                    uVar47 = uVar47 + (int)fVar49;
                  } while ((int)fVar49 <= (int)uVar24);
                  uVar50 = (int)fVar57 + uVar44 + 1;
                  uVar44 = ~((int)fVar57 + uVar44);
                  do {
                    uVar50 = uVar50 - (int)fVar57;
                    uVar44 = uVar44 + (int)fVar57;
                  } while ((int)fVar57 <= (int)uVar50);
                  fVar59 = fVar57;
                  if ((uint)fVar57 < 2) {
                    fVar59 = 1.4013e-45;
                  }
                  uVar33 = uVar50 & ((int)uVar50 >> 0x1f ^ 0xffffffffU);
                  uVar21 = 0;
                  if (fVar59 != 0.0) {
                    uVar21 = ((uVar33 - (uVar33 != uVar50)) + uVar44) / (uint)fVar59;
                  }
                  if (uVar33 != uVar50) {
                    uVar21 = uVar21 + 1;
                  }
                  uVar44 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
                  fVar41 = fVar49;
                  if ((uint)fVar49 < 2) {
                    fVar41 = 1.4013e-45;
                  }
                  uVar33 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
                  uVar22 = 0;
                  if (fVar41 != 0.0) {
                    uVar22 = ((uVar44 - (uVar44 != uVar24)) + uVar47) / (uint)fVar41;
                  }
                  if (uVar44 != uVar24) {
                    uVar22 = uVar22 + 1;
                  }
                  uVar8 = uVar33 - (uVar33 != uVar18);
                  param_8 = (code *)(ulong)uVar8;
                  uVar47 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
                  uVar44 = 0;
                  if (fVar59 != 0.0) {
                    uVar44 = (uVar8 + iVar42) / (uint)fVar59;
                  }
                  if (uVar33 != uVar18) {
                    uVar44 = uVar44 + 1;
                  }
                  uVar33 = 0;
                  if (fVar41 != 0.0) {
                    uVar33 = ((uVar47 - (uVar47 != uVar20)) + iVar38) / (uint)fVar41;
                  }
                  if (uVar47 != uVar20) {
                    uVar33 = uVar33 + 1;
                  }
                  uVar20 = uVar20 + (int)fVar49 * uVar33;
                  uVar28 = (ulong)(uVar18 + (int)fVar57 * uVar44);
                  puVar32 = (undefined8 *)(ulong)(uVar24 + (int)fVar49 * uVar22);
                  uVar15 = (ulong)(uVar50 + (int)fVar57 * uVar21);
                }
                else {
                  iVar38 = (int)fVar49 * 2;
                  iVar42 = 0;
                  if (iVar38 != 0) {
                    iVar42 = (int)uVar47 / iVar38;
                  }
                  iVar43 = 0;
                  if (iVar38 != 0) {
                    iVar43 = (int)~uVar47 / iVar38;
                  }
                  uVar20 = uVar47 - iVar42 * iVar38;
                  if ((uVar47 & 0x80000000) != 0) {
                    uVar20 = iVar38 + ~(~uVar47 - iVar43 * iVar38);
                  }
                  if ((int)fVar49 <= (int)uVar20) {
                    uVar20 = iVar38 + ~uVar20;
                  }
                  if (fVar59 == 0.0) {
                    uVar15 = (ulong)uVar24;
                  }
                  else {
                    iVar42 = (int)fVar57 * 2;
                    if ((int)uVar44 < 0) {
                      iVar43 = 0;
                      if (iVar42 != 0) {
                        iVar43 = (int)~uVar44 / iVar42;
                      }
                      uVar50 = iVar42 + ~(~uVar44 - iVar43 * iVar42);
                    }
                    else {
                      iVar43 = 0;
                      if (iVar42 != 0) {
                        iVar43 = (int)uVar44 / iVar42;
                      }
                      uVar50 = uVar44 - iVar43 * iVar42;
                    }
                    if ((int)fVar57 <= (int)uVar50) {
                      uVar50 = iVar42 + ~uVar50;
                    }
                    uVar28 = (ulong)uVar50;
                    if ((int)uVar47 < -1) {
                      iVar43 = 0;
                      if (iVar38 != 0) {
                        iVar43 = (int)(-2 - uVar47) / iVar38;
                      }
                      uVar18 = iVar38 + ~((-2 - uVar47) - iVar43 * iVar38);
                    }
                    else {
                      iVar43 = 0;
                      if (iVar38 != 0) {
                        iVar43 = (int)uVar18 / iVar38;
                      }
                      uVar18 = uVar18 - iVar43 * iVar38;
                    }
                    if ((int)fVar49 <= (int)uVar18) {
                      uVar18 = iVar38 + ~uVar18;
                    }
                    puVar32 = (undefined8 *)(ulong)uVar18;
                    if ((int)uVar44 < -1) {
                      iVar38 = 0;
                      if (iVar42 != 0) {
                        iVar38 = (int)(-2 - uVar44) / iVar42;
                      }
                      uVar24 = iVar42 + ~((-2 - uVar44) - iVar38 * iVar42);
                    }
                    else {
                      iVar38 = 0;
                      if (iVar42 != 0) {
                        iVar38 = (int)uVar24 / iVar42;
                      }
                      uVar24 = uVar24 - iVar38 * iVar42;
                    }
                    if ((int)fVar57 <= (int)uVar24) {
                      uVar24 = iVar42 + ~uVar24;
                    }
                    uVar15 = (ulong)uVar24;
                  }
                }
                fStack_f0 = fVar40;
                (**(code **)(pfVar6 + 0x3a))(pfVar6,uVar20,uVar28);
                fVar65 = (float)param_4;
                lVar12 = *(long *)(pfVar6 + 0x16);
                fVar63 = fVar37;
                if (lVar12 != 0) {
                  fStack_f0 = 0.0;
                  if (((-1 < (int)(uVar20 - (int)pfVar6[0x18])) &&
                      ((int)(uVar20 - (int)pfVar6[0x18]) < *(int *)(lVar12 + 0xa0))) &&
                     ((iVar38 = (int)uVar28 - (int)pfVar6[0x19], -1 < iVar38 &&
                      (iVar38 < *(int *)(lVar12 + 0xa4))))) {
                    fStack_f0 = 0.0;
                    (**(code **)(lVar12 + 0xe8))();
                  }
                }
                fVar61 = fStack_f0;
                (**(code **)(pfVar6 + 0x3a))(pfVar6,puVar32,uVar28);
                lVar12 = *(long *)(pfVar6 + 0x16);
                iVar38 = (int)puVar32;
                fVar64 = fVar63;
                fVar62 = fVar65;
                if (lVar12 != 0) {
                  iVar42 = iVar38 - (int)pfVar6[0x18];
                  fVar61 = 0.0;
                  if ((((-1 < iVar42) && (iVar42 < *(int *)(lVar12 + 0xa0))) &&
                      (iVar42 = (int)uVar28 - (int)pfVar6[0x19], -1 < iVar42)) &&
                     (iVar42 < *(int *)(lVar12 + 0xa4))) {
                    fVar61 = 0.0;
                    (**(code **)(lVar12 + 0xe8))();
                  }
                }
                fVar59 = fVar61;
                (**(code **)(pfVar6 + 0x3a))(pfVar6,uVar20,uVar15);
                lVar12 = *(long *)(pfVar6 + 0x16);
                iVar42 = (int)uVar15;
                fVar70 = fVar64;
                fVar69 = fVar62;
                if (lVar12 != 0) {
                  fVar49 = 0.0;
                  fVar40 = 0.0;
                  fVar59 = fVar49;
                  if (((-1 < (int)(uVar20 - (int)pfVar6[0x18])) &&
                      (fVar59 = fVar40, (int)(uVar20 - (int)pfVar6[0x18]) < *(int *)(lVar12 + 0xa0))
                      ) && ((iVar43 = iVar42 - (int)pfVar6[0x19], -1 < iVar43 &&
                            (iVar43 < *(int *)(lVar12 + 0xa4))))) {
                    (**(code **)(lVar12 + 0xe8))();
                    fVar59 = fVar49;
                  }
                }
                fVar40 = fVar59;
                (**(code **)(pfVar6 + 0x3a))(pfVar6);
                lVar12 = *(long *)(pfVar6 + 0x16);
                fVar57 = fVar40;
                if (lVar12 != 0) {
                  uVar47 = iVar38 - (int)pfVar6[0x18];
                  puVar32 = (undefined8 *)(ulong)uVar47;
                  fVar57 = 0.0;
                  if ((-1 < (int)uVar47) && ((int)uVar47 < *(int *)(lVar12 + 0xa0))) {
                    uVar47 = iVar42 - (int)pfVar6[0x19];
                    uVar15 = (ulong)uVar47;
                    if ((-1 < (int)uVar47) && (fVar57 = 0.0, (int)uVar47 < *(int *)(lVar12 + 0xa4)))
                    {
                      fVar57 = fVar40;
                      (**(code **)(lVar12 + 0xe8))();
                    }
                  }
                }
                param_3 = (ulong)(uint)fVar37;
                auVar53 = ZEXT416(extraout_s1_00);
                puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                puVar14 = puVar32;
                fVar37 = extraout_s1_01;
                fVar49 = extraout_s1_03;
                fVar66 = extraout_s1_02;
              }
LAB_10979b258:
              pfVar13 = (float *)(ulong)uVar17;
              fVar40 = (float)(uVar17 & 0xffff) / 65536.0;
              fVar68 = (float)(uVar39 & 0xffff) / 65536.0;
              fVar67 = fVar68 * fVar40;
              fVar60 = fVar68 * (1.0 - fVar40);
              fVar41 = (1.0 - fVar68) * fVar40;
              fVar68 = (1.0 - fVar68) * (1.0 - fVar40);
              *pfVar29 = fVar60 * fVar61 + fVar68 * fStack_f0 + fVar41 * fVar59 + fVar67 * fVar57;
              pfVar29[1] = fVar60 * fVar37 + fVar68 * auVar53._0_4_ + fVar41 * fVar66 +
                           fVar67 * fVar49;
              fVar40 = fVar60 * fVar65 + fVar68 * (float)param_4 + fVar41 * fVar62 + fVar67 * fVar69
              ;
              uVar16 = (ulong)(uint)fVar40;
              pfVar29[2] = fVar60 * fVar63 + fVar68 * (float)param_3 + fVar41 * fVar64 +
                           fVar67 * fVar70;
              pfVar29[3] = fVar40;
            }
          }
          else if ((fVar49 == 0.0) || (fVar49 == 4.2039e-45)) {
            uVar44 = iVar42 + -1 >> 0x10;
            puVar14 = (undefined8 *)(ulong)uVar44;
            uVar47 = iVar43 + -1 >> 0x10;
            uVar15 = (ulong)uVar47;
            fVar40 = pfVar6[0x10];
            if (fVar40 == 0.0) {
              param_8 = (code *)0x1;
            }
            else {
              fVar37 = pfVar6[0x28];
              if (fVar40 == 2.8026e-45) {
                uVar39 = uVar44;
                if ((int)((int)fVar37 - 1U) <= (int)uVar44) {
                  uVar39 = (int)fVar37 - 1U;
                }
                uVar17 = 0;
                if (-1 < (int)uVar44) {
                  uVar17 = uVar39;
                }
                puVar14 = (undefined8 *)(ulong)uVar17;
                uVar44 = uVar47;
                if ((int)((int)pfVar6[0x29] - 1U) <= (int)uVar47) {
                  uVar44 = (int)pfVar6[0x29] - 1U;
                }
                uVar39 = 0;
                if (-1 < (int)uVar47) {
                  uVar39 = uVar44;
                }
                uVar15 = (ulong)uVar39;
              }
              else if (fVar40 == 1.4013e-45) {
                uVar44 = (int)fVar37 + uVar44;
                iVar38 = -uVar44;
                do {
                  uVar44 = uVar44 - (int)fVar37;
                  iVar38 = iVar38 + (int)fVar37;
                } while ((int)fVar37 <= (int)uVar44);
                fVar40 = pfVar6[0x29];
                uVar47 = (int)fVar40 + uVar47;
                iVar42 = -uVar47;
                do {
                  uVar47 = uVar47 - (int)fVar40;
                  iVar42 = iVar42 + (int)fVar40;
                } while ((int)fVar40 <= (int)uVar47);
                uVar39 = uVar47 & ((int)uVar47 >> 0x1f ^ 0xffffffffU);
                fVar49 = fVar40;
                if ((uint)fVar40 < 2) {
                  fVar49 = 1.4013e-45;
                }
                uVar17 = uVar44 & ((int)uVar44 >> 0x1f ^ 0xffffffffU);
                uVar18 = 0;
                if (fVar49 != 0.0) {
                  uVar18 = ((uVar39 - (uVar39 != uVar47)) + iVar42) / (uint)fVar49;
                }
                if (uVar39 != uVar47) {
                  uVar18 = uVar18 + 1;
                }
                fVar49 = fVar37;
                if ((uint)fVar37 < 2) {
                  fVar49 = 1.4013e-45;
                }
                uVar39 = 0;
                if (fVar49 != 0.0) {
                  uVar39 = ((uVar17 - (uVar17 != uVar44)) + iVar38) / (uint)fVar49;
                }
                if (uVar17 != uVar44) {
                  uVar39 = uVar39 + 1;
                }
                puVar14 = (undefined8 *)(ulong)(uVar44 + (int)fVar37 * uVar39);
                uVar15 = (ulong)(uVar47 + (int)fVar40 * uVar18);
              }
              else {
                iVar38 = (int)fVar37 * 2;
                if ((int)uVar44 < 0) {
                  iVar42 = 0;
                  if (iVar38 != 0) {
                    iVar42 = (int)~uVar44 / iVar38;
                  }
                  uVar44 = iVar38 + ~(~uVar44 - iVar42 * iVar38);
                }
                else {
                  iVar42 = 0;
                  if (iVar38 != 0) {
                    iVar42 = (int)uVar44 / iVar38;
                  }
                  uVar44 = uVar44 - iVar42 * iVar38;
                }
                if ((int)fVar37 <= (int)uVar44) {
                  uVar44 = iVar38 + ~uVar44;
                }
                puVar14 = (undefined8 *)(ulong)uVar44;
                iVar38 = (int)pfVar6[0x29] * 2;
                iVar42 = 0;
                if (iVar38 != 0) {
                  iVar42 = (int)~uVar47 / iVar38;
                }
                iVar43 = 0;
                if (iVar38 != 0) {
                  iVar43 = (int)uVar47 / iVar38;
                }
                uVar44 = iVar38 + ~(~uVar47 - iVar42 * iVar38);
                if ((uVar47 & 0x80000000) == 0) {
                  uVar44 = uVar47 - iVar43 * iVar38;
                }
                if ((int)pfVar6[0x29] <= (int)uVar44) {
                  uVar44 = iVar38 + ~uVar44;
                }
                uVar15 = (ulong)uVar44;
              }
              param_8 = (code *)0x0;
            }
            pfVar13 = pfVar6;
            param_9 = pfVar29;
            (*pcVar3)();
          }
        }
        else {
          if (fVar49 == 5.60519e-45) goto LAB_10979a11c;
          if (fVar49 == 7.00649e-45) {
            piVar19 = *(int **)(pfVar6 + 0x12);
            iVar46 = *piVar19 >> 0x10;
            iVar2 = piVar19[1] >> 0x10;
            fVar49 = pfVar6[0x10];
            fVar40 = pfVar6[0x28];
            fVar37 = pfVar6[0x29];
            uVar47 = iVar42 + (0xffff - *piVar19 >> 1) >> 0x10;
            uVar44 = iVar43 + (0xffff - piVar19[1] >> 1) >> 0x10;
            uVar28 = (ulong)uVar44;
            if (iVar38 == 0) {
              if (iVar2 < 1) {
                uVar51 = 0;
                uVar44 = 0;
                uVar47 = 0;
              }
              else {
                piVar19 = piVar19 + 2;
                uVar39 = (int)fVar40 - 1;
                iVar38 = (int)fVar40 * 2;
                fVar57 = fVar40;
                if (fVar40 == 0.0 || uVar39 == 0) {
                  fVar57 = 1.4013e-45;
                }
                uVar17 = (int)fVar37 - 1;
                iVar42 = (int)fVar37 * 2;
                fVar59 = fVar37;
                if (fVar37 == 0.0 || uVar17 == 0) {
                  fVar59 = 1.4013e-45;
                }
                uStack_104 = (int)fVar37 + uVar44;
                uStack_108 = -uStack_104;
                auVar52 = ZEXT216(0);
                do {
                  uVar18 = (uint)uVar28;
                  if (0 < iVar46) {
                    uVar24 = uVar18;
                    if ((int)uVar17 <= (int)uVar18) {
                      uVar24 = uVar17;
                    }
                    uVar50 = 0;
                    if (-1 < (int)uVar18) {
                      uVar50 = uVar24;
                    }
                    uVar33 = (int)fVar40 + uVar47;
                    iVar43 = -((int)fVar40 + uVar47);
                    uVar24 = uVar47;
                    do {
                      puVar30 = (undefined8 *)(ulong)uVar24;
                      iVar7 = *piVar19;
                      if (iVar7 != 0) {
                        fStack_f0 = auVar52._0_4_;
                        iStack_ec = auVar52._4_4_;
                        uVar15 = uVar28;
                        if (fVar49 == 0.0) {
                          param_8 = (code *)0x1;
                        }
                        else {
                          if (fVar49 == 2.8026e-45) {
                            uVar20 = uVar24;
                            if ((int)uVar39 <= (int)uVar24) {
                              uVar20 = uVar39;
                            }
                            uVar21 = 0;
                            if (-1 < (int)uVar24) {
                              uVar21 = uVar20;
                            }
                            puVar30 = (undefined8 *)(ulong)uVar21;
                            uVar15 = (ulong)uVar50;
                          }
                          else {
                            uVar20 = uVar33;
                            iVar58 = iVar43;
                            if (fVar49 == 1.4013e-45) {
                              do {
                                uVar20 = uVar20 - (int)fVar40;
                                iVar58 = iVar58 + (int)fVar40;
                                uVar21 = uStack_108;
                                uVar22 = uStack_104;
                              } while ((int)fVar40 <= (int)uVar20);
                              do {
                                uVar22 = uVar22 - (int)fVar37;
                                uVar21 = uVar21 + (int)fVar37;
                              } while ((int)fVar37 <= (int)uVar22);
                              uVar8 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU);
                              uVar9 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
                              uVar10 = 0;
                              if (fVar59 != 0.0) {
                                uVar10 = ((uVar8 - (uVar8 != uVar22)) + uVar21) / (uint)fVar59;
                              }
                              if (uVar8 != uVar22) {
                                uVar10 = uVar10 + 1;
                              }
                              uVar21 = 0;
                              if (fVar57 != 0.0) {
                                uVar21 = ((uVar9 - (uVar9 != uVar20)) + iVar58) / (uint)fVar57;
                              }
                              if (uVar9 != uVar20) {
                                uVar21 = uVar21 + 1;
                              }
                              puVar30 = (undefined8 *)(ulong)(uVar20 + (int)fVar40 * uVar21);
                              uVar15 = (ulong)(uVar22 + (int)fVar37 * uVar10);
                            }
                            else {
                              iVar58 = 0;
                              if (iVar38 != 0) {
                                iVar58 = (int)uVar24 / iVar38;
                              }
                              iVar23 = 0;
                              if (iVar38 != 0) {
                                iVar23 = (int)~uVar24 / iVar38;
                              }
                              uVar20 = uVar24 - iVar58 * iVar38;
                              if ((uVar24 & 0x80000000) != 0) {
                                uVar20 = iVar38 + ~(~uVar24 - iVar23 * iVar38);
                              }
                              if ((int)fVar40 <= (int)uVar20) {
                                uVar20 = iVar38 + ~uVar20;
                              }
                              puVar30 = (undefined8 *)(ulong)uVar20;
                              if (fVar49 != 0.0) {
                                if ((int)uVar18 < 0) {
                                  iVar58 = 0;
                                  if (iVar42 != 0) {
                                    iVar58 = (int)~uVar18 / iVar42;
                                  }
                                  uVar20 = iVar42 + ~(~uVar18 - iVar58 * iVar42);
                                }
                                else {
                                  iVar58 = 0;
                                  if (iVar42 != 0) {
                                    iVar58 = (int)uVar18 / iVar42;
                                  }
                                  uVar20 = uVar18 - iVar58 * iVar42;
                                }
                                if ((int)fVar37 <= (int)uVar20) {
                                  uVar20 = iVar42 + ~uVar20;
                                }
                                uVar15 = (ulong)uVar20;
                              }
                            }
                          }
                          param_8 = (code *)0x0;
                        }
                        param_9 = &fStack_d0;
                        pfVar13 = pfVar6;
                        (*pcVar3)();
                        uVar51 = NEON_ushl(CONCAT44(fStack_d0,fStack_d0),0xfffffff8fffffff0,4);
                        param_3 = CONCAT44(iStack_ec + (uint)(byte)((ulong)uVar51 >> 0x20) * iVar7,
                                           (int)fStack_f0 + (uint)(byte)uVar51 * iVar7);
                        iVar58 = auVar52._8_4_;
                        auVar52._12_4_ = auVar52._12_4_ + ((uint)fStack_d0 >> 0x18) * iVar7;
                        auVar52._8_4_ = iVar58 + ((uint)fStack_d0 & 0xff) * iVar7;
                        auVar52._0_8_ = param_3;
                        puVar14 = puVar30;
                      }
                      piVar19 = piVar19 + 1;
                      uVar24 = uVar24 + 1;
                      uVar33 = uVar33 + 1;
                      iVar43 = iVar43 + -1;
                    } while ((int)uVar24 < (int)(uVar47 + iVar46));
                  }
                  uVar28 = (ulong)(uVar18 + 1);
                  uStack_104 = uStack_104 + 1;
                  uStack_108 = uStack_108 + -1;
                } while ((int)(uVar18 + 1) < (int)(uVar44 + iVar2));
                iVar38 = auVar52._0_4_ + 0x8000;
                iVar42 = auVar52._4_4_ + 0x8000;
                iVar43 = auVar52._8_4_ + 0x8000;
                iVar46 = auVar52._12_4_ + 0x8000;
                uVar51 = CONCAT44((int)(iVar42 + (-(uint)(iVar42 < 0) >> 0x10)) >> 0x10,
                                  (int)(iVar38 + (-(uint)(iVar38 < 0) >> 0x10)) >> 0x10);
                uVar44 = (int)(iVar43 + (-(uint)(iVar43 < 0) >> 0x10)) >> 0x10;
                uVar47 = (int)(iVar46 + (-(uint)(iVar46 < 0) >> 0x10)) >> 0x10;
                puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
              }
              uVar47 = uVar47 & ((int)uVar47 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar47) {
                uVar47 = 0xff;
              }
              uVar44 = uVar44 & ((int)uVar44 >> 0x1f ^ 0xffffffffU);
              uVar51 = NEON_smax(uVar51,0,4);
              uVar51 = NEON_smin(uVar51,0xff000000ff,4);
              uVar51 = NEON_ushl(uVar51,0x800000010,4);
              if (0xfe < (int)uVar44) {
                uVar44 = 0xff;
              }
              bVar48 = (byte)((ulong)uVar51 >> 0x20);
              bVar54 = (byte)((ulong)uVar51 >> 0x28);
              bVar55 = (byte)((ulong)uVar51 >> 0x30);
              bVar56 = (byte)((ulong)uVar51 >> 0x38);
              uVar39 = CONCAT13(bVar56 | (byte)((ulong)uVar51 >> 0x18),
                                CONCAT12(bVar55 | (byte)((ulong)uVar51 >> 0x10),
                                         CONCAT11(bVar54 | (byte)((ulong)uVar51 >> 8),
                                                  bVar48 | (byte)uVar51)));
              uVar16 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar54,CONCAT14(bVar48,uVar39))));
              *pfVar29 = (float)(uVar39 | uVar44 | uVar47 << 0x18);
            }
            else {
              if (iVar2 < 1) {
                pfVar29[0] = 0.0;
                pfVar29[1] = 0.0;
                fVar40 = 0.0;
                pfVar29[2] = 0.0;
              }
              else {
                piVar19 = piVar19 + 2;
                uVar39 = (int)fVar40 - 1;
                iVar38 = (int)fVar40 * 2;
                fVar57 = fVar40;
                if (fVar40 == 0.0 || uVar39 == 0) {
                  fVar57 = 1.4013e-45;
                }
                uVar17 = (int)fVar37 - 1;
                iVar42 = (int)fVar37 * 2;
                fVar59 = fVar37;
                if (fVar37 == 0.0 || uVar17 == 0) {
                  fVar59 = 1.4013e-45;
                }
                uStack_108 = (int)fVar37 + uVar44;
                iStack_10c = -uStack_108;
                uVar51 = 0;
                uVar45 = 0;
                do {
                  uVar18 = (uint)uVar28;
                  if (0 < iVar46) {
                    uVar24 = uVar18;
                    if ((int)uVar17 <= (int)uVar18) {
                      uVar24 = uVar17;
                    }
                    uVar50 = 0;
                    if (-1 < (int)uVar18) {
                      uVar50 = uVar24;
                    }
                    uVar33 = (int)fVar40 + uVar47;
                    iVar43 = -((int)fVar40 + uVar47);
                    uVar24 = uVar47;
                    do {
                      puVar30 = (undefined8 *)(ulong)uVar24;
                      iVar7 = *piVar19;
                      if (iVar7 != 0) {
                        uVar15 = uVar28;
                        if (fVar49 == 0.0) {
                          param_8 = (code *)0x1;
                        }
                        else {
                          if (fVar49 == 2.8026e-45) {
                            uVar20 = uVar24;
                            if ((int)uVar39 <= (int)uVar24) {
                              uVar20 = uVar39;
                            }
                            uVar21 = 0;
                            if (-1 < (int)uVar24) {
                              uVar21 = uVar20;
                            }
                            puVar30 = (undefined8 *)(ulong)uVar21;
                            uVar15 = (ulong)uVar50;
                          }
                          else {
                            uVar20 = uVar33;
                            iVar58 = iVar43;
                            if (fVar49 == 1.4013e-45) {
                              do {
                                uVar20 = uVar20 - (int)fVar40;
                                iVar58 = iVar58 + (int)fVar40;
                                iVar23 = iStack_10c;
                                uVar21 = uStack_108;
                              } while ((int)fVar40 <= (int)uVar20);
                              do {
                                uVar21 = uVar21 - (int)fVar37;
                                iVar23 = iVar23 + (int)fVar37;
                              } while ((int)fVar37 <= (int)uVar21);
                              uVar22 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
                              uVar8 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
                              uVar9 = 0;
                              if (fVar59 != 0.0) {
                                uVar9 = ((uVar22 - (uVar22 != uVar21)) + iVar23) / (uint)fVar59;
                              }
                              if (uVar22 != uVar21) {
                                uVar9 = uVar9 + 1;
                              }
                              uVar22 = 0;
                              if (fVar57 != 0.0) {
                                uVar22 = ((uVar8 - (uVar8 != uVar20)) + iVar58) / (uint)fVar57;
                              }
                              if (uVar8 != uVar20) {
                                uVar22 = uVar22 + 1;
                              }
                              puVar30 = (undefined8 *)(ulong)(uVar20 + (int)fVar40 * uVar22);
                              uVar15 = (ulong)(uVar21 + (int)fVar37 * uVar9);
                            }
                            else {
                              iVar58 = 0;
                              if (iVar38 != 0) {
                                iVar58 = (int)uVar24 / iVar38;
                              }
                              iVar23 = 0;
                              if (iVar38 != 0) {
                                iVar23 = (int)~uVar24 / iVar38;
                              }
                              uVar20 = uVar24 - iVar58 * iVar38;
                              if ((uVar24 & 0x80000000) != 0) {
                                uVar20 = iVar38 + ~(~uVar24 - iVar23 * iVar38);
                              }
                              if ((int)fVar40 <= (int)uVar20) {
                                uVar20 = iVar38 + ~uVar20;
                              }
                              puVar30 = (undefined8 *)(ulong)uVar20;
                              if (fVar49 != 0.0) {
                                if ((int)uVar18 < 0) {
                                  iVar58 = 0;
                                  if (iVar42 != 0) {
                                    iVar58 = (int)~uVar18 / iVar42;
                                  }
                                  uVar20 = iVar42 + ~(~uVar18 - iVar58 * iVar42);
                                }
                                else {
                                  iVar58 = 0;
                                  if (iVar42 != 0) {
                                    iVar58 = (int)uVar18 / iVar42;
                                  }
                                  uVar20 = uVar18 - iVar58 * iVar42;
                                }
                                if ((int)fVar37 <= (int)uVar20) {
                                  uVar20 = iVar42 + ~uVar20;
                                }
                                uVar15 = (ulong)uVar20;
                              }
                            }
                          }
                          param_8 = (code *)0x0;
                        }
                        param_9 = &fStack_d0;
                        pfVar13 = pfVar6;
                        (*pcVar3)();
                        fVar41 = (float)iVar7;
                        auVar11._8_8_ = uVar45;
                        auVar11._0_8_ = uVar51;
                        auVar52 = NEON_ucvtf(auVar11,4);
                        uVar51 = CONCAT44((int)(auVar52._4_4_ + fStack_cc * fVar41),
                                          (int)(auVar52._0_4_ + fStack_d0 * fVar41));
                        uVar45 = CONCAT44((int)(auVar52._12_4_ +
                                               (float)((ulong)uStack_c8 >> 0x20) * fVar41),
                                          (int)(auVar52._8_4_ + (float)uStack_c8 * fVar41));
                        puVar14 = puVar30;
                      }
                      piVar19 = piVar19 + 1;
                      uVar24 = uVar24 + 1;
                      uVar33 = uVar33 + 1;
                      iVar43 = iVar43 + -1;
                    } while ((int)uVar24 < (int)(uVar47 + iVar46));
                  }
                  uVar28 = (ulong)(uVar18 + 1);
                  uStack_108 = uStack_108 + 1;
                  iStack_10c = iStack_10c + -1;
                } while ((int)(uVar18 + 1) < (int)(uVar44 + iVar2));
                fVar49 = (float)(int)uVar51 / 65536.0;
                fVar57 = (float)(int)((ulong)uVar51 >> 0x20) / 65536.0;
                fVar59 = (float)(int)uVar45 / 65536.0;
                param_4 = (ulong)(uint)fVar59;
                fVar37 = (float)(int)((ulong)uVar45 >> 0x20) / 65536.0;
                uVar16 = (ulong)(uint)fVar37;
                fVar40 = 1.0;
                if (fVar49 <= 1.0) {
                  fVar40 = fVar49;
                }
                fVar41 = 0.0;
                if (0.0 <= fVar49) {
                  fVar41 = fVar40;
                }
                fVar40 = 1.0;
                if (fVar57 <= 1.0) {
                  fVar40 = fVar57;
                }
                fVar49 = 0.0;
                if (0.0 <= fVar57) {
                  fVar49 = fVar40;
                }
                param_3 = (ulong)(uint)fVar49;
                *pfVar29 = fVar41;
                pfVar29[1] = fVar49;
                fVar40 = 1.0;
                if (fVar59 <= 1.0) {
                  fVar40 = fVar59;
                }
                fVar49 = 0.0;
                if (0.0 <= fVar59) {
                  fVar49 = fVar40;
                }
                pfVar29[2] = fVar49;
                puVar30 = (undefined8 *)((ulong)param_6 & 0xffffffff);
                fVar40 = 0.0;
                if ((0.0 <= fVar37) && (fVar40 = 1.0, fVar37 <= 1.0)) {
                  fVar40 = fVar37;
                }
              }
              pfVar29[3] = fVar40;
            }
          }
          else if (fVar49 == 8.40779e-45) {
            if (iVar38 == 0) {
              param_8 = FUN_10979be50;
            }
            else {
              param_8 = FUN_10979bd8c;
            }
            pfVar13 = pfVar6;
            param_9 = pfVar29;
            FUN_109799b1c();
          }
        }
      }
      else if (iVar38 == 0) {
        if (*(int *)(param_7 + uVar34 * 4) != 0) goto LAB_109799fd4;
      }
      else {
        plVar1 = (long *)(param_7 + uVar34 * 0x10);
        if (*plVar1 != lStack_c0 || plVar1[1] != lStack_b8) goto LAB_109799fd4;
      }
      fVar40 = (float)uVar16;
      fVar49 = (float)param_4;
      fVar37 = (float)param_3;
      iVar38 = (int)param_8;
      lStack_130 = lStack_130 + lVar31;
      lStack_128 = lStack_128 + lVar36;
      uVar27 = uVar27 + lVar26;
      pfVar29 = pfVar29 + lVar4;
      uVar34 = uVar34 + 1;
    } while (uVar34 != (uint)fVar5);
    pfVar29 = *(float **)(param_5 + 2);
  }
LAB_10979bd3c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return pfVar29;
  }
  ___stack_chk_fail();
  iVar43 = (int)puVar14;
  iVar42 = (int)uVar15;
  if ((iVar38 == 0) ||
     ((((-1 < iVar43 && (-1 < iVar42)) && (iVar43 < (int)pfVar13[0x28])) &&
      (iVar42 < (int)pfVar13[0x29])))) {
    (**(code **)(pfVar13 + 0x3a))(pfVar13,puVar14,uVar15);
    *param_9 = fVar40;
    param_9[1] = extraout_s1_06;
    param_9[2] = fVar37;
    param_9[3] = fVar49;
    pfVar29 = *(float **)(pfVar13 + 0x16);
    if (pfVar29 != (float *)0x0) {
      if (((iVar43 - (int)pfVar13[0x18] < 0) || ((int)pfVar29[0x28] <= iVar43 - (int)pfVar13[0x18]))
         || ((iVar42 - (int)pfVar13[0x19] < 0 || ((int)pfVar29[0x29] <= iVar42 - (int)pfVar13[0x19])
             ))) {
        *param_9 = 0.0;
      }
      else {
        (**(code **)(pfVar29 + 0x3a))();
        *param_9 = fVar40;
      }
    }
  }
  else {
    param_9[0] = 0.0;
    param_9[1] = 0.0;
    param_9[2] = 0.0;
    param_9[3] = 0.0;
    pfVar29 = pfVar13;
  }
  return pfVar29;
}



/* Entry: 10979bd8c; end: 10979be4f;  */

void FUN_10979bd8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,int param_8,undefined8 *param_9
                  )

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_6;
  iVar2 = (int)param_7;
  if ((param_8 == 0) ||
     ((((-1 < iVar3 && (-1 < iVar2)) && (iVar3 < *(int *)(param_5 + 0xa0))) &&
      (iVar2 < *(int *)(param_5 + 0xa4))))) {
    (**(code **)(param_5 + 0xe8))(param_5,param_6,param_7);
    *(undefined4 *)param_9 = param_1;
    *(undefined4 *)((long)param_9 + 4) = param_2;
    *(undefined4 *)(param_9 + 1) = param_3;
    *(undefined4 *)((long)param_9 + 0xc) = param_4;
    lVar1 = *(long *)(param_5 + 0x58);
    if (lVar1 != 0) {
      iVar3 = iVar3 - *(int *)(param_5 + 0x60);
      if (((-1 < iVar3) && (iVar3 < *(int *)(lVar1 + 0xa0))) &&
         ((iVar2 = iVar2 - *(int *)(param_5 + 100), -1 < iVar2 && (iVar2 < *(int *)(lVar1 + 0xa4))))
         ) {
        (**(code **)(lVar1 + 0xe8))();
        *(undefined4 *)param_9 = param_1;
        return;
      }
      *(undefined4 *)param_9 = 0;
    }
  }
  else {
    *param_9 = 0;
    param_9[1] = 0;
  }
  return;
}



/* Entry: 10979be50; end: 10979bf2b;  */

void FUN_10979be50(long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  iVar4 = (int)param_3;
  if (param_4 != 0) {
    if (-1 < iVar5) {
      uVar3 = 0;
      if ((iVar4 < 0) || (*(int *)(param_1 + 0xa0) <= iVar5)) goto LAB_10979bf14;
      if (iVar4 < *(int *)(param_1 + 0xa4)) goto LAB_10979be9c;
    }
    uVar3 = 0;
    goto LAB_10979bf14;
  }
LAB_10979be9c:
  lVar1 = param_1;
  (**(code **)(param_1 + 0xd0))(param_1,param_2,param_3);
  uVar3 = (uint)lVar1;
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 == 0) goto LAB_10979bf14;
  iVar5 = iVar5 - *(int *)(param_1 + 0x60);
  if (iVar5 < 0) {
LAB_10979bf08:
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (iVar5 < *(int *)(lVar1 + 0xa0)) {
      iVar4 = iVar4 - *(int *)(param_1 + 100);
      if (-1 < iVar4) {
        if (*(int *)(lVar1 + 0xa4) <= iVar4) goto LAB_10979bf08;
        (**(code **)(lVar1 + 0xd0))();
        uVar2 = (uint)lVar1 & 0xff000000;
      }
    }
  }
  uVar3 = uVar2 | uVar3 & 0xffffff;
LAB_10979bf14:
  *param_5 = uVar3;
  return;
}



/* Entry: 10979bf2c; end: 1097a1c2f;  */

float FUN_10979bf2c(uint param_1,uint param_2)

{
  double dVar1;
  
  dVar1 = (double)NEON_ucvtf((ulong)*(ushort *)
                                     (&UNK_10dffa948 +
                                     (ulong)(param_1 & 0x3f | (param_2 & 0x3f) << 6) * 2));
  return (float)(dVar1 * 0.000244140625 + 0.0001220703125);
}



/* Entry: 1097a1c30; end: 1097a219f;  */

void FUN_1097a1c30(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  int param_6)

{
  ulong uVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  if (0 < param_6) {
    uVar1 = 0;
    pfVar2 = (float *)(param_4 + 8);
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      fVar11 = pfVar2[-2];
      fVar10 = pfVar2[-1];
      fVar5 = *pfVar2;
      if (param_5 != 0) {
        fVar4 = *(float *)(param_5 + uVar1 * 4);
        fVar11 = fVar11 * fVar4;
        fVar10 = fVar10 * fVar4;
        fVar5 = fVar4 * fVar5 * fVar4;
      }
      fVar6 = pfVar2[1];
      fVar12 = *(float *)(puVar3 + -1);
      fVar13 = *(float *)((long)puVar3 + -4);
      pfVar2 = pfVar2 + 4;
      fStack_8c = fVar12 * fVar10;
      fStack_88 = fVar12 * fVar5;
      fStack_84 = fVar6 * fVar12;
      fVar8 = (float)*puVar3;
      fVar4 = fVar13;
      if (fVar13 == fVar8 || fVar8 > fVar13) {
        fVar4 = fVar8;
      }
      fVar9 = (float)((ulong)*puVar3 >> 0x20);
      fVar7 = fVar13;
      if (fVar8 <= fVar13) {
        fVar7 = fVar8;
      }
      if (fVar4 <= fVar9) {
        fVar4 = fVar9;
      }
      if (fVar9 <= fVar7) {
        fVar7 = fVar9;
      }
      func_0x0001097a81d4((fVar4 - fVar7) * fVar11,&fStack_8c);
      func_0x0001097a82ac(fVar12 * fVar11,(fVar8 * 0.59 + fVar13 * 0.3 + fVar9 * 0.11) * fVar11,
                          &fStack_8c);
      fVar4 = 1.0 - fVar11;
      fVar7 = 1.0 - fVar12;
      *(float *)(puVar3 + -1) = (fVar12 + fVar11) - fVar12 * fVar11;
      *(float *)((long)puVar3 + -4) = fVar7 * fVar10 + fVar13 * fVar4 + fStack_8c;
      *puVar3 = CONCAT44(fVar6 * fVar7 + fVar9 * fVar4 + fStack_84,
                         fVar5 * fVar7 + fVar8 * fVar4 + fStack_88);
      uVar1 = uVar1 + 4;
      puVar3 = puVar3 + 2;
    } while (uVar1 < (uint)(param_6 << 2));
  }
  return;
}



/* Entry: 1097a21a0; end: 1097a8f9f;  */

void FUN_1097a21a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,float *param_4,
                  undefined8 *param_5,int param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_5 == (undefined8 *)0x0) {
    if (0 < param_6) {
      uVar3 = 0;
      auVar4 = NEON_fmov(0x3f800000,4);
      do {
        fVar9 = (float)*param_3 * 0.0 + *param_4 * 0.0;
        fVar10 = (float)((ulong)*param_3 >> 0x20) * 0.0 + param_4[1] * 0.0;
        fVar11 = (float)param_3[1] * 0.0 + param_4[2] * 0.0;
        fVar12 = (float)((ulong)param_3[1] >> 0x20) * 0.0 + param_4[3] * 0.0;
        auVar7._0_4_ = -(uint)(auVar4._0_4_ < fVar9);
        auVar7._4_4_ = -(uint)(auVar4._4_4_ < fVar10);
        auVar7._8_4_ = -(uint)(auVar4._8_4_ < fVar11);
        auVar7._12_4_ = -(uint)(auVar4._12_4_ < fVar12);
        auVar2._4_4_ = fVar10;
        auVar2._0_4_ = fVar9;
        auVar2._8_4_ = fVar11;
        auVar2._12_4_ = fVar12;
        auVar8._4_4_ = fVar10;
        auVar8._0_4_ = fVar9;
        auVar8._8_4_ = fVar11;
        auVar8._12_4_ = fVar12;
        auVar8 = auVar8 ^ (auVar2 ^ auVar4) & auVar7;
        param_3[1] = auVar8._8_8_;
        *param_3 = auVar8._0_8_;
        uVar3 = uVar3 + 4;
        param_3 = param_3 + 2;
        param_4 = param_4 + 4;
      } while (uVar3 < (uint)(param_6 << 2));
    }
  }
  else if (0 < param_6) {
    uVar3 = 0;
    auVar4 = NEON_fmov(0x3f800000,4);
    do {
      fVar9 = (float)*param_3 * 0.0 + *param_4 * (float)*param_5 * 0.0;
      fVar10 = (float)((ulong)*param_3 >> 0x20) * 0.0 +
               param_4[1] * (float)((ulong)*param_5 >> 0x20) * 0.0;
      fVar11 = (float)param_3[1] * 0.0 + param_4[2] * (float)param_5[1] * 0.0;
      fVar12 = (float)((ulong)param_3[1] >> 0x20) * 0.0 +
               param_4[3] * (float)((ulong)param_5[1] >> 0x20) * 0.0;
      auVar5._0_4_ = -(uint)(auVar4._0_4_ < fVar9);
      auVar5._4_4_ = -(uint)(auVar4._4_4_ < fVar10);
      auVar5._8_4_ = -(uint)(auVar4._8_4_ < fVar11);
      auVar5._12_4_ = -(uint)(auVar4._12_4_ < fVar12);
      auVar1._4_4_ = fVar10;
      auVar1._0_4_ = fVar9;
      auVar1._8_4_ = fVar11;
      auVar1._12_4_ = fVar12;
      auVar6._4_4_ = fVar10;
      auVar6._0_4_ = fVar9;
      auVar6._8_4_ = fVar11;
      auVar6._12_4_ = fVar12;
      auVar6 = auVar6 ^ (auVar1 ^ auVar4) & auVar5;
      param_3[1] = auVar6._8_8_;
      *param_3 = auVar6._0_8_;
      uVar3 = uVar3 + 4;
      param_3 = param_3 + 2;
      param_4 = param_4 + 4;
      param_5 = param_5 + 2;
    } while (uVar3 < (uint)(param_6 << 2));
  }
  return;
}



/* Entry: 1097a8fa0; end: 1097a912f;  */

void FUN_1097a8fa0(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  
  if (0 < (int)param_6) {
    uVar6 = (ulong)param_6;
    puVar5 = param_5;
    do {
      if (param_5 == (uint *)0x0) {
        uVar7 = *param_4;
      }
      else {
        uVar2 = *puVar5 >> 0x18;
        uVar7 = 0;
        if (uVar2 != 0) {
          uVar7 = (*param_4 & 0xff00ff) * uVar2 + 0x800080;
          uVar2 = (*param_4 >> 8 & 0xff00ff) * uVar2 + 0x800080;
          uVar7 = (uVar7 >> 8 & 0xff00ff) + uVar7 >> 8 & 0xff00ff |
                  (uVar2 >> 8 & 0xff00ff) + uVar2 & 0xff00ff00;
        }
      }
      uVar1 = *param_3;
      uVar2 = (~uVar1 >> 0x18) * (uVar7 & 0xff00ff) + 0x800080;
      uVar3 = (uVar1 & 0xff00ff) * (~uVar7 >> 0x18) + 0x800080;
      uVar2 = ((uVar2 >> 8 & 0xff00ff) + uVar2 >> 8 & 0xff00ff) +
              ((uVar3 >> 8 & 0xff00ff) + uVar3 >> 8 & 0xff00ff);
      uVar3 = (uVar7 >> 8 & 0xff00ff) * (~uVar1 >> 0x18) + 0x800080;
      uVar4 = (uVar1 >> 8 & 0xff00ff) * (~uVar7 >> 0x18) + 0x800080;
      uVar3 = ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff) +
              ((uVar3 >> 8 & 0xff00ff) + uVar3 >> 8 & 0xff00ff);
      uVar4 = (uVar1 & 0xff0000) * (uVar7 >> 0x10 & 0xff) + 0x800080 +
              (uVar1 & 0xff) * (uVar7 & 0xff);
      uVar1 = (uVar1 >> 8 & 0xff0000) * (uVar7 >> 0x18) + 0x800080 +
              (uVar1 >> 8 & 0xff) * (uVar7 >> 8 & 0xff);
      uVar7 = ((0x100 - (uVar2 >> 8 & 0x10001) | uVar2) & 0xff00ff) +
              ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff);
      uVar2 = ((0x100 - (uVar3 >> 8 & 0x10001) | uVar3) & 0xff00ff) +
              ((uVar1 >> 8 & 0xff00ff) + uVar1 >> 8 & 0xff00ff);
      *param_3 = ((0x100 - (uVar2 >> 8 & 0x10001) | uVar2) & 0xff00ff) << 8 |
                 (0x100 - (uVar7 >> 8 & 0x10001) | uVar7) & 0xff00ff;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
      param_3 = param_3 + 1;
    } while (uVar6 != 0);
  }
  return;
}



/* Entry: 1097a9130; end: 1097a9297;  */

void FUN_1097a9130(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  
  if (0 < (int)param_6) {
    uVar9 = (ulong)param_6;
    puVar8 = param_5;
    do {
      if (param_5 == (uint *)0x0) {
        uVar10 = *param_4;
      }
      else {
        uVar4 = *puVar8 >> 0x18;
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = (*param_4 & 0xff00ff) * uVar4 + 0x800080;
          uVar4 = (*param_4 >> 8 & 0xff00ff) * uVar4 + 0x800080;
          uVar10 = (uVar10 >> 8 & 0xff00ff) + uVar10 >> 8 & 0xff00ff |
                   (uVar4 >> 8 & 0xff00ff) + uVar4 & 0xff00ff00;
        }
      }
      uVar3 = *param_3;
      uVar5 = uVar10 >> 0x18;
      uVar2 = uVar5 ^ 0xff;
      uVar6 = uVar3 >> 0x18;
      uVar4 = (uVar6 + (uVar10 >> 0x18)) * 0xff - uVar6 * uVar5;
      iVar1 = (uVar6 ^ 0xff) + (uVar3 >> 0x18);
      uVar6 = ((uVar5 - (uVar10 >> 0x10 & 0xff)) + uVar2) * (uVar3 >> 0x10 & 0xff) +
              iVar1 * (uVar10 >> 0x10 & 0xff);
      uVar7 = ((uVar5 - (uVar10 >> 8 & 0xff)) + uVar2) * (uVar3 >> 8 & 0xff) +
              iVar1 * (uVar10 >> 8 & 0xff);
      uVar10 = ((uVar5 - (uVar10 & 0xff)) + uVar2) * (uVar3 & 0xff) + iVar1 * (uVar10 & 0xff);
      if (0xfe00 < uVar4) {
        uVar4 = 0xfe01;
      }
      if (0xfe00 < uVar6) {
        uVar6 = 0xfe01;
      }
      if (0xfe00 < uVar7) {
        uVar7 = 0xfe01;
      }
      if (0xfe00 < uVar10) {
        uVar10 = 0xfe01;
      }
      *param_3 = uVar6 * 0x101 + 0x8080 & 0x3ff0000 |
                 (uVar4 + 0x80 + (uVar4 + 0x80 >> 8) >> 8) << 0x18 |
                 uVar7 + 0x80 + (uVar7 + 0x80 >> 8) & 0x3ff00 |
                 uVar10 + 0x80 + (uVar10 + 0x80 >> 8) >> 8;
      param_4 = param_4 + 1;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
      param_3 = param_3 + 1;
    } while (uVar9 != 0);
  }
  return;
}



/* Entry: 1097a9298; end: 1097a9453;  */

void FUN_1097a9298(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  uint uVar16;
  
  if (0 < (int)param_6) {
    uVar15 = (ulong)param_6;
    puVar14 = param_5;
    do {
      if (param_5 == (uint *)0x0) {
        uVar16 = *param_4;
      }
      else {
        uVar5 = *puVar14 >> 0x18;
        uVar16 = 0;
        if (uVar5 != 0) {
          uVar16 = (*param_4 & 0xff00ff) * uVar5 + 0x800080;
          uVar5 = (*param_4 >> 8 & 0xff00ff) * uVar5 + 0x800080;
          uVar16 = (uVar16 >> 8 & 0xff00ff) + uVar16 >> 8 & 0xff00ff |
                   (uVar5 >> 8 & 0xff00ff) + uVar5 & 0xff00ff00;
        }
      }
      uVar4 = *param_3;
      uVar6 = uVar16 >> 0x18;
      uVar2 = uVar6 ^ 0xff;
      uVar7 = uVar4 >> 0x18;
      uVar3 = uVar7 ^ 0xff;
      iVar8 = uVar7 * uVar6;
      uVar9 = (uVar7 + (uVar16 >> 0x18)) * 0xff - iVar8;
      uVar10 = uVar4 >> 0x10 & 0xff;
      uVar11 = uVar16 >> 0x10 & 0xff;
      uVar12 = uVar4 >> 8 & 0xff;
      uVar13 = uVar16 >> 8 & 0xff;
      uVar5 = uVar4 & 0xff;
      uVar16 = uVar16 & 0xff;
      iVar1 = iVar8 + (uVar11 - uVar6) * (uVar7 - uVar10) * 2;
      if (uVar10 * 2 < uVar4 >> 0x18) {
        iVar1 = uVar10 * 2 * uVar11;
      }
      uVar4 = uVar3 * uVar11 + uVar10 * uVar2 + iVar1;
      iVar1 = iVar8 + (uVar13 - uVar6) * (uVar7 - uVar12) * 2;
      if (uVar12 * 2 < uVar7) {
        iVar1 = uVar12 * 2 * uVar13;
      }
      uVar10 = uVar3 * uVar13 + uVar12 * uVar2 + iVar1;
      iVar1 = iVar8 + (uVar16 - uVar6) * (uVar7 - uVar5) * 2;
      if (uVar5 * 2 < uVar7) {
        iVar1 = uVar5 * 2 * uVar16;
      }
      uVar16 = uVar2 * uVar5 + uVar3 * uVar16 + iVar1;
      if (0xfe00 < uVar9) {
        uVar9 = 0xfe01;
      }
      if (0xfe00 < uVar4) {
        uVar4 = 0xfe01;
      }
      if (0xfe00 < uVar10) {
        uVar10 = 0xfe01;
      }
      if (0xfe00 < uVar16) {
        uVar16 = 0xfe01;
      }
      *param_3 = uVar4 * 0x101 + 0x8080 & 0x3ff0000 |
                 (uVar9 + 0x80 + (uVar9 + 0x80 >> 8) >> 8) << 0x18 |
                 uVar10 + 0x80 + (uVar10 + 0x80 >> 8) & 0x3ff00 |
                 uVar16 + 0x80 + (uVar16 + 0x80 >> 8) >> 8;
      param_4 = param_4 + 1;
      puVar14 = puVar14 + 1;
      uVar15 = uVar15 - 1;
      param_3 = param_3 + 1;
    } while (uVar15 != 0);
  }
  return;
}



/* Entry: 1097a9454; end: 1097a9743;  */

void FUN_1097a9454(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  
  if (0 < (int)param_6) {
    uVar14 = (ulong)param_6;
    puVar13 = param_5;
    do {
      if (param_5 == (uint *)0x0) {
        uVar15 = *param_4;
      }
      else {
        uVar4 = *puVar13 >> 0x18;
        uVar15 = 0;
        if (uVar4 != 0) {
          uVar15 = (*param_4 & 0xff00ff) * uVar4 + 0x800080;
          uVar4 = (*param_4 >> 8 & 0xff00ff) * uVar4 + 0x800080;
          uVar15 = (uVar15 >> 8 & 0xff00ff) + uVar15 >> 8 & 0xff00ff |
                   (uVar4 >> 8 & 0xff00ff) + uVar4 & 0xff00ff00;
        }
      }
      uVar3 = *param_3;
      uVar5 = uVar15 >> 0x18;
      uVar1 = uVar5 ^ 0xff;
      uVar6 = uVar3 >> 0x18;
      uVar2 = uVar6 ^ 0xff;
      uVar7 = (uVar6 + (uVar15 >> 0x18)) * 0xff - uVar6 * uVar5;
      uVar9 = uVar3 >> 0x10 & 0xff;
      uVar10 = uVar15 >> 0x10 & 0xff;
      uVar11 = uVar3 >> 8 & 0xff;
      uVar12 = uVar15 >> 8 & 0xff;
      uVar4 = uVar10 * uVar6;
      uVar8 = uVar9 * uVar5;
      if (uVar8 <= uVar4) {
        uVar4 = uVar8;
      }
      uVar4 = uVar2 * uVar10 + uVar9 * uVar1 + uVar4;
      uVar8 = uVar12 * uVar6;
      uVar9 = uVar11 * uVar5;
      if (uVar9 <= uVar8) {
        uVar8 = uVar9;
      }
      uVar8 = uVar2 * uVar12 + uVar11 * uVar1 + uVar8;
      uVar6 = uVar6 * (uVar15 & 0xff);
      uVar5 = (uVar3 & 0xff) * uVar5;
      if (uVar5 <= uVar6) {
        uVar6 = uVar5;
      }
      uVar6 = uVar1 * (uVar3 & 0xff) + uVar2 * (uVar15 & 0xff) + uVar6;
      if (0xfe00 < uVar7) {
        uVar7 = 0xfe01;
      }
      if (0xfe00 < uVar4) {
        uVar4 = 0xfe01;
      }
      if (0xfe00 < uVar8) {
        uVar8 = 0xfe01;
      }
      if (0xfe00 < uVar6) {
        uVar6 = 0xfe01;
      }
      *param_3 = uVar4 * 0x101 + 0x8080 & 0x3ff0000 |
                 (uVar7 + 0x80 + (uVar7 + 0x80 >> 8) >> 8) << 0x18 |
                 uVar8 + 0x80 + (uVar8 + 0x80 >> 8) & 0x3ff00 |
                 uVar6 + 0x80 + (uVar6 + 0x80 >> 8) >> 8;
      param_4 = param_4 + 1;
      puVar13 = puVar13 + 1;
      uVar14 = uVar14 - 1;
      param_3 = param_3 + 1;
    } while (uVar14 != 0);
  }
  return;
}



/* Entry: 1097a9744; end: 1097a98ff;  */

void FUN_1097a9744(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ulong uVar15;
  uint uVar16;
  
  if (0 < (int)param_6) {
    uVar15 = (ulong)param_6;
    puVar14 = param_5;
    do {
      if (param_5 == (uint *)0x0) {
        uVar16 = *param_4;
      }
      else {
        uVar5 = *puVar14 >> 0x18;
        uVar16 = 0;
        if (uVar5 != 0) {
          uVar16 = (*param_4 & 0xff00ff) * uVar5 + 0x800080;
          uVar5 = (*param_4 >> 8 & 0xff00ff) * uVar5 + 0x800080;
          uVar16 = (uVar16 >> 8 & 0xff00ff) + uVar16 >> 8 & 0xff00ff |
                   (uVar5 >> 8 & 0xff00ff) + uVar5 & 0xff00ff00;
        }
      }
      uVar5 = *param_3;
      uVar6 = uVar16 >> 0x18;
      uVar3 = uVar6 ^ 0xff;
      uVar7 = uVar5 >> 0x18;
      uVar4 = uVar7 ^ 0xff;
      iVar8 = uVar7 * uVar6;
      uVar9 = (uVar7 + (uVar16 >> 0x18)) * 0xff - iVar8;
      uVar10 = uVar5 >> 0x10 & 0xff;
      uVar11 = uVar16 >> 0x10 & 0xff;
      uVar12 = uVar5 >> 8 & 0xff;
      uVar13 = uVar16 >> 8 & 0xff;
      uVar5 = uVar5 & 0xff;
      uVar1 = uVar16 & 0xff;
      iVar2 = iVar8 + (uVar11 - uVar6) * (uVar7 - uVar10) * 2;
      if (uVar11 * 2 < uVar16 >> 0x18) {
        iVar2 = uVar11 * 2 * uVar10;
      }
      uVar16 = uVar4 * uVar11 + uVar10 * uVar3 + iVar2;
      iVar2 = iVar8 + (uVar13 - uVar6) * (uVar7 - uVar12) * 2;
      if (uVar13 * 2 < uVar6) {
        iVar2 = uVar13 * 2 * uVar12;
      }
      uVar10 = uVar4 * uVar13 + uVar12 * uVar3 + iVar2;
      iVar2 = iVar8 + (uVar1 - uVar6) * (uVar7 - uVar5) * 2;
      if (uVar1 * 2 < uVar6) {
        iVar2 = uVar1 * 2 * uVar5;
      }
      uVar5 = uVar3 * uVar5 + uVar4 * uVar1 + iVar2;
      if (0xfe00 < uVar9) {
        uVar9 = 0xfe01;
      }
      if (0xfe00 < uVar16) {
        uVar16 = 0xfe01;
      }
      if (0xfe00 < uVar10) {
        uVar10 = 0xfe01;
      }
      if (0xfe00 < uVar5) {
        uVar5 = 0xfe01;
      }
      *param_3 = uVar16 * 0x101 + 0x8080 & 0x3ff0000 |
                 (uVar9 + 0x80 + (uVar9 + 0x80 >> 8) >> 8) << 0x18 |
                 uVar10 + 0x80 + (uVar10 + 0x80 >> 8) & 0x3ff00 |
                 uVar5 + 0x80 + (uVar5 + 0x80 >> 8) >> 8;
      param_4 = param_4 + 1;
      puVar14 = puVar14 + 1;
      uVar15 = uVar15 - 1;
      param_3 = param_3 + 1;
    } while (uVar15 != 0);
  }
  return;
}



/* Entry: 1097a9900; end: 1097a9a77;  */

void FUN_1097a9900(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  
  if (0 < (int)param_6) {
    uVar14 = (ulong)param_6;
    puVar13 = param_5;
    do {
      if (param_5 == (uint *)0x0) {
        uVar15 = *param_4;
      }
      else {
        uVar5 = *puVar13 >> 0x18;
        uVar15 = 0;
        if (uVar5 != 0) {
          uVar15 = (*param_4 & 0xff00ff) * uVar5 + 0x800080;
          uVar5 = (*param_4 >> 8 & 0xff00ff) * uVar5 + 0x800080;
          uVar15 = (uVar15 >> 8 & 0xff00ff) + uVar15 >> 8 & 0xff00ff |
                   (uVar5 >> 8 & 0xff00ff) + uVar5 & 0xff00ff00;
        }
      }
      uVar4 = *param_3;
      uVar6 = uVar15 >> 0x18;
      uVar2 = uVar6 ^ 0xff;
      uVar7 = uVar4 >> 0x18;
      uVar3 = uVar7 ^ 0xff;
      uVar5 = (uVar7 + (uVar15 >> 0x18)) * 0xff - uVar7 * uVar6;
      uVar9 = uVar4 >> 0x10 & 0xff;
      uVar10 = uVar15 >> 0x10 & 0xff;
      uVar11 = uVar4 >> 8 & 0xff;
      uVar12 = uVar15 >> 8 & 0xff;
      iVar8 = uVar10 * uVar7 - uVar9 * uVar6;
      iVar1 = -iVar8;
      if (-1 < iVar8) {
        iVar1 = iVar8;
      }
      uVar9 = uVar3 * uVar10 + uVar9 * uVar2 + iVar1;
      iVar8 = uVar12 * uVar7 - uVar11 * uVar6;
      iVar1 = -iVar8;
      if (-1 < iVar8) {
        iVar1 = iVar8;
      }
      uVar10 = uVar3 * uVar12 + uVar11 * uVar2 + iVar1;
      iVar8 = uVar7 * (uVar15 & 0xff) - (uVar4 & 0xff) * uVar6;
      iVar1 = -iVar8;
      if (-1 < iVar8) {
        iVar1 = iVar8;
      }
      uVar15 = uVar2 * (uVar4 & 0xff) + uVar3 * (uVar15 & 0xff) + iVar1;
      if (0xfe00 < uVar5) {
        uVar5 = 0xfe01;
      }
      if (0xfe00 < uVar9) {
        uVar9 = 0xfe01;
      }
      if (0xfe00 < uVar10) {
        uVar10 = 0xfe01;
      }
      if (0xfe00 < uVar15) {
        uVar15 = 0xfe01;
      }
      *param_3 = uVar9 * 0x101 + 0x8080 & 0x3ff0000 |
                 (uVar5 + 0x80 + (uVar5 + 0x80 >> 8) >> 8) << 0x18 |
                 uVar15 + 0x80 + (uVar15 + 0x80 >> 8) >> 8 |
                 uVar10 + 0x80 + (uVar10 + 0x80 >> 8) & 0x3ff00;
      param_4 = param_4 + 1;
      puVar13 = puVar13 + 1;
      uVar14 = uVar14 - 1;
      param_3 = param_3 + 1;
    } while (uVar14 != 0);
  }
  return;
}



/* Entry: 1097a9a78; end: 1097a9bdb;  */

void FUN_1097a9a78(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  
  if (0 < (int)param_6) {
    uVar9 = (ulong)param_6;
    puVar8 = param_5;
    do {
      if (param_5 == (uint *)0x0) {
        uVar10 = *param_4;
      }
      else {
        uVar4 = *puVar8 >> 0x18;
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = (*param_4 & 0xff00ff) * uVar4 + 0x800080;
          uVar4 = (*param_4 >> 8 & 0xff00ff) * uVar4 + 0x800080;
          uVar10 = (uVar10 >> 8 & 0xff00ff) + uVar10 >> 8 & 0xff00ff |
                   (uVar4 >> 8 & 0xff00ff) + uVar4 & 0xff00ff00;
        }
      }
      uVar3 = *param_3;
      uVar5 = uVar10 >> 0x18;
      uVar6 = uVar3 >> 0x18;
      uVar4 = (uVar6 + (uVar10 >> 0x18)) * 0xff - uVar6 * uVar5;
      iVar1 = (uVar5 ^ 0xff) + (uVar10 >> 0x18);
      iVar2 = (uVar6 ^ 0xff) + (uVar3 >> 0x18);
      uVar6 = iVar2 * (uVar10 >> 0x10 & 0xff) +
              (iVar1 + (uVar10 >> 0x10 & 0xff) * -2) * (uVar3 >> 0x10 & 0xff);
      uVar7 = iVar2 * (uVar10 >> 8 & 0xff) +
              (iVar1 + (uVar10 >> 8 & 0xff) * -2) * (uVar3 >> 8 & 0xff);
      uVar10 = iVar2 * (uVar10 & 0xff) +
               (uVar5 + (uVar10 & 0xff) * -2 + (uVar5 ^ 0xff)) * (uVar3 & 0xff);
      if (0xfe00 < uVar4) {
        uVar4 = 0xfe01;
      }
      if (0xfe00 < uVar6) {
        uVar6 = 0xfe01;
      }
      if (0xfe00 < uVar7) {
        uVar7 = 0xfe01;
      }
      if (0xfe00 < uVar10) {
        uVar10 = 0xfe01;
      }
      *param_3 = uVar6 * 0x101 + 0x8080 & 0x3ff0000 |
                 (uVar4 + 0x80 + (uVar4 + 0x80 >> 8) >> 8) << 0x18 |
                 uVar10 + 0x80 + (uVar10 + 0x80 >> 8) >> 8 |
                 uVar7 + 0x80 + (uVar7 + 0x80 >> 8) & 0x3ff00;
      param_4 = param_4 + 1;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
      param_3 = param_3 + 1;
    } while (uVar9 != 0);
  }
  return;
}



/* Entry: 1097a9bdc; end: 1097a9be7;  */

void FUN_1097a9bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)
            (param_3,-(param_6 >> 0x1f & 1) & 0xfffffffc00000000 | (param_6 & 0xffffffff) << 2);
  return;
}



/* Entry: 1097a9be8; end: 1097a9c4b;  */

void FUN_1097a9be8(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,uint param_6)

{
  ulong uVar1;
  undefined4 uStack_34;
  
  if (0 < (int)param_6) {
    uVar1 = (ulong)param_6;
    do {
      uStack_34 = *param_4;
      FUN_1097ab310(&uStack_34,*param_5);
      *param_3 = uStack_34;
      uVar1 = uVar1 - 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 1097a9c4c; end: 1097a9d73;  */

void FUN_1097a9c4c(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uStack_68;
  uint uStack_64;
  
  if (0 < (int)param_6) {
    uVar4 = (ulong)param_6;
    do {
      uStack_64 = *param_4;
      uStack_68 = *param_5;
      func_0x0001097ab398(&uStack_64,&uStack_68);
      if (uStack_68 != 0xffffffff) {
        uVar3 = ~uStack_68;
        uVar1 = *param_3;
        uVar2 = (uVar1 & 0xff0000) * (uVar3 >> 0x10 & 0xff) + 0x800080 +
                (uVar1 & 0xff) * ((uStack_68 ^ 0xffffffff) & 0xff);
        uVar2 = ((uVar2 >> 8 & 0xff00ff) + uVar2 >> 8 & 0xff00ff) + (uStack_64 & 0xff00ff);
        uVar1 = (uVar1 >> 8 & 0xff0000) * (uVar3 >> 0x18) + 0x800080 +
                (uVar1 >> 8 & 0xff) * (uVar3 >> 8 & 0xff);
        uVar1 = ((uVar1 >> 8 & 0xff00ff) + uVar1 >> 8 & 0xff00ff) + (uStack_64 >> 8 & 0xff00ff);
        uStack_64 = ((0x100 - (uVar1 >> 8 & 0x10001) | uVar1) & 0xff00ff) << 8 |
                    (0x100 - (uVar2 >> 8 & 0x10001) | uVar2) & 0xff00ff;
      }
      *param_3 = uStack_64;
      uVar4 = uVar4 - 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 != 0);
  }
  return;
}



/* Entry: 1097a9d74; end: 1097a9e6f;  */

void FUN_1097a9d74(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (0 < (int)param_6) {
    uVar5 = (ulong)param_6;
    do {
      uVar1 = *param_3;
      if (uVar1 >> 0x18 < 0xff) {
        uVar2 = *param_4;
        uVar3 = *param_5;
        uVar4 = (uVar3 & 0xff) * (uVar2 & 0xff) + 0x800080 +
                (uVar3 >> 0x10 & 0xff) * (uVar2 & 0xff0000);
        uVar3 = (uVar2 >> 8 & 0xff0000) * (uVar3 >> 0x18) + 0x800080 +
                (uVar3 >> 8 & 0xff) * (uVar2 >> 8 & 0xff);
        uVar2 = ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff) * (~uVar1 >> 0x18) + 0x800080;
        uVar2 = ((uVar2 >> 8 & 0xff00ff) + uVar2 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff);
        uVar3 = ((uVar3 >> 8 & 0xff00ff) + uVar3 >> 8 & 0xff00ff) * (~uVar1 >> 0x18) + 0x800080;
        uVar1 = ((uVar3 >> 8 & 0xff00ff) + uVar3 >> 8 & 0xff00ff) + (uVar1 >> 8 & 0xff00ff);
        *param_3 = ((0x100 - (uVar1 >> 8 & 0x10001) | uVar1) & 0xff00ff) << 8 |
                   (0x100 - (uVar2 >> 8 & 0x10001) | uVar2) & 0xff00ff;
      }
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 1097a9e70; end: 1097a9f3b;  */

void FUN_1097a9e70(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,
                  undefined4 *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uStack_54;
  
  if (0 < (int)param_6) {
    uVar3 = (ulong)param_6;
    do {
      uVar1 = *param_3 >> 0x18;
      if (uVar1 == 0) {
        uStack_54 = 0;
      }
      else {
        uStack_54 = *param_4;
        FUN_1097ab310(&uStack_54,*param_5);
        if (uVar1 != 0xff) {
          uVar2 = (uStack_54 & 0xff00ff) * uVar1 + 0x800080;
          uVar1 = (uStack_54 >> 8 & 0xff00ff) * uVar1 + 0x800080;
          uStack_54 = (uVar2 >> 8 & 0xff00ff) + uVar2 >> 8 & 0xff00ff |
                      (uVar1 >> 8 & 0xff00ff) + uVar1 & 0xff00ff00;
        }
      }
      *param_3 = uStack_54;
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 1097a9f3c; end: 1097aa013;  */

void FUN_1097a9f3c(undefined8 param_1,undefined8 param_2,uint *param_3,undefined4 *param_4,
                  uint *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uStack_44;
  
  if (0 < (int)param_6) {
    uVar3 = (ulong)param_6;
    do {
      uStack_44 = *param_5;
      func_0x0001097ab47c(*param_4,&uStack_44);
      if (uStack_44 != 0xffffffff) {
        uVar2 = 0;
        if (uStack_44 != 0) {
          uVar2 = *param_3;
          uVar1 = (uVar2 & 0xff0000) * (uStack_44 >> 0x10 & 0xff) + 0x800080 +
                  (uVar2 & 0xff) * (uStack_44 & 0xff);
          uVar2 = (uVar2 >> 8 & 0xff0000) * (uStack_44 >> 0x18) + 0x800080 +
                  (uVar2 >> 8 & 0xff) * (uStack_44 >> 8 & 0xff);
          uVar2 = (uVar1 >> 8 & 0xff00ff) + uVar1 >> 8 & 0xff00ff |
                  (uVar2 >> 8 & 0xff00ff) + uVar2 & 0xff00ff00;
        }
        *param_3 = uVar2;
      }
      param_3 = param_3 + 1;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 1097aa014; end: 1097aa1db;  */

void FUN_1097aa014(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,
                  undefined4 *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uStack_54;
  
  if (0 < (int)param_6) {
    uVar3 = (ulong)param_6;
    do {
      if (*param_3 >> 0x18 < 0xff) {
        uVar1 = ~*param_3 >> 0x18;
        uStack_54 = *param_4;
        FUN_1097ab310(&uStack_54,*param_5);
        if (uVar1 != 0xff) {
          uVar2 = (uStack_54 & 0xff00ff) * uVar1 + 0x800080;
          uVar1 = (uStack_54 >> 8 & 0xff00ff) * uVar1 + 0x800080;
          uStack_54 = (uVar2 >> 8 & 0xff00ff) + uVar2 >> 8 & 0xff00ff |
                      (uVar1 >> 8 & 0xff00ff) + uVar1 & 0xff00ff00;
        }
      }
      else {
        uStack_54 = 0;
      }
      *param_3 = uStack_54;
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 1097aa1dc; end: 1097aa5b3;  */

void FUN_1097aa1dc(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uStack_68;
  uint uStack_64;
  
  if (0 < (int)param_6) {
    uVar5 = (ulong)param_6;
    do {
      uStack_64 = *param_4;
      uVar1 = *param_3;
      uStack_68 = *param_5;
      func_0x0001097ab398(&uStack_64,&uStack_68);
      uVar4 = ~uStack_68;
      uVar2 = ((uStack_68 ^ 0xffffffff) & 0xff) * (uVar1 & 0xff) + 0x800080 +
              (uVar4 >> 0x10 & 0xff) * (uVar1 & 0xff0000);
      uVar3 = (uStack_64 & 0xff00ff) * (uVar1 >> 0x18) + 0x800080;
      uVar2 = ((uVar2 >> 8 & 0xff00ff) + uVar2 >> 8 & 0xff00ff) +
              ((uVar3 >> 8 & 0xff00ff) + uVar3 >> 8 & 0xff00ff);
      uVar3 = (uVar4 >> 0x18) * (uVar1 >> 8 & 0xff0000) + 0x800080 +
              (uVar4 >> 8 & 0xff) * (uVar1 >> 8 & 0xff);
      uVar1 = (uStack_64 >> 8 & 0xff00ff) * (uVar1 >> 0x18) + 0x800080;
      uVar1 = ((uVar1 >> 8 & 0xff00ff) + uVar1 >> 8 & 0xff00ff) +
              ((uVar3 >> 8 & 0xff00ff) + uVar3 >> 8 & 0xff00ff);
      *param_3 = ((0x100 - (uVar1 >> 8 & 0x10001) | uVar1) & 0xff00ff) << 8 |
                 (0x100 - (uVar2 >> 8 & 0x10001) | uVar2) & 0xff00ff;
      uVar5 = uVar5 - 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar5 != 0);
  }
  return;
}



/* Entry: 1097aa5b4; end: 1097aa677;  */

void FUN_1097aa5b4(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,
                  undefined4 *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uStack_54;
  
  if (0 < (int)param_6) {
    uVar3 = (ulong)param_6;
    do {
      uStack_54 = *param_4;
      uVar2 = *param_3;
      FUN_1097ab310(&uStack_54,*param_5);
      uVar1 = (uStack_54 & 0xff00ff) + (uVar2 & 0xff00ff);
      uVar2 = (uStack_54 >> 8 & 0xff00ff) + (uVar2 >> 8 & 0xff00ff);
      *param_3 = ((0x100 - (uVar2 >> 8 & 0x10001) | uVar2) & 0xff00ff) << 8 |
                 (0x100 - (uVar1 >> 8 & 0x10001) | uVar1) & 0xff00ff;
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 1097aa678; end: 1097ab30f;  */

void FUN_1097aa678(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uStack_68;
  uint uStack_64;
  
  if (0 < (int)param_6) {
    uVar8 = (ulong)param_6;
    do {
      uStack_64 = *param_5;
      uStack_68 = *param_4;
      uVar2 = *param_3;
      func_0x0001097ab398(&uStack_68,&uStack_64);
      uVar6 = ~uStack_64;
      uVar3 = (uStack_68 & 0xff00ff) * (~uVar2 >> 0x18) + 0x800080;
      uVar4 = ((uStack_64 ^ 0xffffffff) & 0xff) * (uVar2 & 0xff) + 0x800080 +
              (uVar6 >> 0x10 & 0xff) * (uVar2 & 0xff0000);
      uVar7 = uVar2 >> 8 & 0xff;
      uVar1 = uVar2 >> 8 & 0xff0000;
      uVar6 = (uVar6 >> 0x18) * uVar1 + 0x800080 + (uVar6 >> 8 & 0xff) * uVar7;
      uVar5 = (uStack_68 >> 8 & 0xff00ff) * (~uVar2 >> 0x18) + 0x800080;
      uVar3 = ((uVar4 >> 8 & 0xff00ff) + uVar4 >> 8 & 0xff00ff) +
              ((uVar3 >> 8 & 0xff00ff) + uVar3 >> 8 & 0xff00ff);
      uVar4 = ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff) +
              ((uVar6 >> 8 & 0xff00ff) + uVar6 >> 8 & 0xff00ff);
      uVar2 = (uStack_68 & 0xff) * (uVar2 & 0xff) + 0x800080 +
              (uStack_68 >> 0x10 & 0xff) * (uVar2 & 0xff0000);
      uVar1 = (uStack_68 >> 0x18) * uVar1 + 0x800080 + (uStack_68 >> 8 & 0xff) * uVar7;
      uVar3 = ((0x100 - (uVar3 >> 8 & 0x10001) | uVar3) & 0xff00ff) +
              ((uVar2 >> 8 & 0xff00ff) + uVar2 >> 8 & 0xff00ff);
      uVar4 = ((0x100 - (uVar4 >> 8 & 0x10001) | uVar4) & 0xff00ff) +
              ((uVar1 >> 8 & 0xff00ff) + uVar1 >> 8 & 0xff00ff);
      *param_3 = ((0x100 - (uVar4 >> 8 & 0x10001) | uVar4) & 0xff00ff) << 8 |
                 (0x100 - (uVar3 >> 8 & 0x10001) | uVar3) & 0xff00ff;
      uVar8 = uVar8 - 1;
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 1097ab310; end: 1097ab50b;  */

void FUN_1097ab310(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0xffffffff) {
    uVar2 = 0;
    if (param_2 != 0) {
      uVar1 = *param_1;
      uVar2 = ((uVar1 & 0xff0000) * (param_2 >> 0x10 & 0xff) | (uVar1 & 0xff) * (param_2 & 0xff)) +
              0x800080;
      uVar1 = ((uVar1 >> 8 & 0xff0000) * (param_2 >> 0x18) |
              (uVar1 >> 8 & 0xff) * (param_2 >> 8 & 0xff)) + 0x800080;
      uVar2 = (uVar2 >> 8 & 0xff00ff) + uVar2 >> 8 & 0xff00ff |
              (uVar1 >> 8 & 0xff00ff) + uVar1 & 0xff00ff00;
    }
    *param_1 = uVar2;
  }
  return;
}



/* Entry: 1097ab50c; end: 1097ab7bf;  */

ulong FUN_1097ab50c(long *param_1,int *param_2,ulong param_3,code *param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uStack_fc;
  uint uStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  
  lVar2 = *param_1;
  uVar6 = param_1[1];
  uVar8 = param_3 >> 2 & 0x3fffffff;
  iVar4 = (int)param_1[3] * (int)uVar8;
  uVar1 = uVar6 + (long)iVar4 * 4;
  uStack_b4 = *(undefined4 *)(lVar2 + 0x40);
  uStack_c0 = *(undefined8 *)(lVar2 + 0x98);
  uStack_b8 = *(undefined4 *)(lVar2 + 0x90);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0x10000;
  uStack_d0 = 0;
  uStack_b0 = 1;
  piVar7 = *(int **)(lVar2 + 0x38);
  if (piVar7 == (int *)0x0) {
    dVar11 = (double)(int)param_1[2] + 0.5;
    dVar10 = (double)*(int *)((long)param_1 + 0x14) + 0.5;
    dVar12 = 1.0;
    dVar13 = 0.0;
  }
  else {
    uStack_fc = (int)param_1[2] << 0x10 | 0x8000;
    uStack_f8 = *(int *)((long)param_1 + 0x14) << 0x10 | 0x8000;
    iStack_f4 = 0x10000;
    piVar5 = piVar7;
    FUN_1097bf628(piVar7,&uStack_fc);
    if ((int)piVar5 == 0) {
      return uVar6;
    }
    dVar12 = (double)*piVar7 / 65536.0;
    dVar13 = (double)piVar7[3] / 65536.0;
    iVar3 = piVar7[6];
    dVar11 = (double)(int)uStack_fc / 65536.0;
    dVar10 = (double)(int)uStack_f8 / 65536.0;
    if ((iVar3 != 0) || (iStack_f4 != 0x10000)) {
      if (0 < iVar4) {
        dVar15 = (double)iStack_f4 / 65536.0;
        do {
          piVar7 = param_2;
          if ((param_2 == (int *)0x0) || (piVar7 = param_2 + 1, *param_2 != 0)) {
            dVar16 = 0.0;
            if (dVar15 != 0.0) {
              dVar16 = dVar11 / dVar15;
            }
            dVar9 = 0.0;
            if (dVar15 != 0.0) {
              dVar9 = dVar10 / dVar15;
            }
            dVar9 = dVar9 - (double)*(int *)(lVar2 + 0xa4) / 65536.0;
            dVar14 = *(double *)(lVar2 + 0xa8);
            _atan2(dVar9,dVar16 - (double)*(int *)(lVar2 + 0xa0) / 65536.0);
            for (dVar14 = dVar14 + dVar9; dVar14 < 0.0; dVar14 = dVar14 + 6.283185307179586) {
            }
            for (; 6.283185307179586 <= dVar14; dVar14 = dVar14 + -6.283185307179586) {
            }
            (*param_4)(&uStack_f0,(long)(int)((dVar14 * -0.15915494309189535 + 1.0) * 65536.0),uVar6
                      );
          }
          uVar6 = uVar6 + uVar8 * 4;
          dVar11 = dVar12 + dVar11;
          dVar10 = dVar13 + dVar10;
          dVar15 = (double)iVar3 / 65536.0 + dVar15;
          param_2 = piVar7;
        } while (uVar6 < uVar1);
      }
      goto LAB_1097ab77c;
    }
  }
  if (0 < iVar4) {
    dVar10 = dVar10 - (double)*(int *)(lVar2 + 0xa4) / 65536.0;
    dVar11 = dVar11 - (double)*(int *)(lVar2 + 0xa0) / 65536.0;
    do {
      piVar7 = param_2;
      if ((param_2 == (int *)0x0) || (piVar7 = param_2 + 1, *param_2 != 0)) {
        dVar16 = *(double *)(lVar2 + 0xa8);
        dVar15 = dVar10;
        _atan2(dVar10,dVar11);
        for (dVar16 = dVar16 + dVar15; dVar16 < 0.0; dVar16 = dVar16 + 6.283185307179586) {
        }
        for (; 6.283185307179586 <= dVar16; dVar16 = dVar16 + -6.283185307179586) {
        }
        (*param_4)(&uStack_f0,(long)(int)((dVar16 * -0.15915494309189535 + 1.0) * 65536.0),uVar6);
      }
      uVar6 = uVar6 + uVar8 * 4;
      dVar11 = dVar12 + dVar11;
      dVar10 = dVar13 + dVar10;
      param_2 = piVar7;
    } while (uVar6 < uVar1);
  }
LAB_1097ab77c:
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  return param_1[1];
}



/* Entry: 1097ab7c0; end: 1097acc1b;  */

void FUN_1097ab7c0(long param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  int iStack_a4;
  ulong uStack_88;
  long lStack_78;
  long lStack_68;
  
  iVar3 = (*(uint *)(param_1 + 0x90) >> 0x18) << (ulong)(*(uint *)(param_1 + 0x90) >> 0x16 & 3);
  iVar16 = (int)param_4 >> 0x10;
  if (iVar3 == 8) {
    iStack_a4 = 0;
    iVar3 = *(int *)(param_1 + 0xb8);
    lStack_78 = *(long *)(param_1 + 0xa8) + (long)(iVar3 * iVar16) * 4;
    iVar16 = *(int *)(param_1 + 0xa0);
    uVar8 = 0xffffffff;
    do {
      uStack_88 = (ulong)uVar8;
      while( true ) {
        uVar12 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
        uVar13 = *param_3;
        if (iVar16 <= (int)*param_3 >> 0x10) {
          uVar13 = iVar16 * 0x10000 - 1;
        }
        if ((int)uVar12 < (int)uVar13) {
          uVar5 = uVar12 >> 0x10;
          uVar14 = (ulong)uVar5;
          uVar15 = (uVar13 & 0xffff) + 0x788;
          pcVar2 = *(code **)(param_1 + 0x100);
          lVar11 = lStack_78 + uVar14;
          (**(code **)(param_1 + 0xf8))(lVar11,1);
          uVar12 = ((uVar12 & 0xffff) + 0x788) / 0xf0f;
          if (uVar5 == uVar13 >> 0x10) {
            uVar12 = (uVar15 / 0xf0f - uVar12) + (int)lVar11;
            if (0xfe < (int)uVar12) {
              uVar12 = 0xff;
            }
            (*pcVar2)(lStack_78 + uVar14,uVar12 & 0xff,1);
          }
          else {
            uVar13 = uVar13 >> 0x10;
            uVar12 = ((int)lVar11 - uVar12) + 0x11;
            if (0xfe < (int)uVar12) {
              uVar12 = 0xff;
            }
            (*pcVar2)(lStack_78 + uVar14,uVar12 & 0xff,1);
            uVar12 = uVar5 + 1;
            uVar14 = (ulong)uVar12;
            lVar11 = lStack_78 + (ulong)uVar13;
            if ((int)(uVar13 - uVar12) < 5) {
              if (uVar13 != uVar12) {
                lVar10 = lStack_78 + (ulong)uVar12;
                iVar9 = uVar5 - uVar13;
                do {
                  iVar9 = iVar9 + 1;
                  pcVar2 = *(code **)(param_1 + 0x100);
                  lVar7 = lVar10;
                  (**(code **)(param_1 + 0xf8))(lVar10,1);
                  uVar12 = (int)lVar7 + 0x11;
                  if (0xfe < (int)uVar12) {
                    uVar12 = 0xff;
                  }
                  (*pcVar2)(lVar10,uVar12 & 0xff,1);
                  lVar10 = lVar10 + 1;
                } while (iVar9 != -1);
              }
            }
            else if ((int)(uint)uStack_88 < 0) {
              iStack_a4 = iStack_a4 + 1;
              uStack_88._0_4_ = uVar12;
              uVar8 = uVar13;
            }
            else if (((int)uVar12 < (int)uVar8) && ((uint)uStack_88 <= uVar13)) {
              if (uVar5 < (uint)uStack_88) {
                if (uVar12 < (uint)uStack_88) {
                  while ((uint)uStack_88 != uVar12) {
                    pcVar2 = *(code **)(param_1 + 0x100);
                    lVar10 = lStack_78 + uVar14;
                    (**(code **)(param_1 + 0xf8))(lVar10,1);
                    uVar12 = (int)lVar10 + 0x11;
                    if (0xfe < (int)uVar12) {
                      uVar12 = 0xff;
                    }
                    (*pcVar2)(lStack_78 + uVar14,uVar12 & 0xff,1);
                    uVar14 = uVar14 + 1;
                    uVar12 = (uint)uVar14;
                  }
                }
              }
              else {
                lVar10 = lStack_78 + uStack_88;
                iVar9 = ~uVar5 + (uint)uStack_88;
                do {
                  pcVar2 = *(code **)(param_1 + 0x100);
                  lVar7 = lVar10;
                  (**(code **)(param_1 + 0xf8))(lVar10,1);
                  uVar5 = (int)lVar7 + iStack_a4 * 0x11;
                  if (0xfe < (int)uVar5) {
                    uVar5 = 0xff;
                  }
                  (*pcVar2)(lVar10,uVar5 & 0xff,1);
                  lVar10 = lVar10 + 1;
                  bVar6 = iVar9 != -1;
                  iVar9 = iVar9 + 1;
                  uStack_88._0_4_ = uVar12;
                } while (bVar6);
              }
              iVar9 = uVar13 - uVar8;
              lVar10 = lVar11;
              if (uVar13 < uVar8) {
                do {
                  pcVar2 = *(code **)(param_1 + 0x100);
                  lVar7 = lVar10;
                  (**(code **)(param_1 + 0xf8))(lVar10,1);
                  uVar8 = (int)lVar7 + iStack_a4 * 0x11;
                  if (0xfe < (int)uVar8) {
                    uVar8 = 0xff;
                  }
                  (*pcVar2)(lVar10,uVar8 & 0xff,1);
                  bVar6 = iVar9 != -1;
                  iVar9 = iVar9 + 1;
                  lVar10 = lVar10 + 1;
                } while (bVar6);
              }
              else {
                bVar6 = uVar8 < uVar13;
                iVar9 = uVar8 - uVar13;
                uVar13 = uVar8;
                if (bVar6) {
                  lVar10 = lStack_78 + (ulong)uVar8;
                  do {
                    pcVar2 = *(code **)(param_1 + 0x100);
                    lVar7 = lVar10;
                    (**(code **)(param_1 + 0xf8))(lVar10,1);
                    uVar8 = (int)lVar7 + 0x11;
                    if (0xfe < (int)uVar8) {
                      uVar8 = 0xff;
                    }
                    (*pcVar2)(lVar10,uVar8 & 0xff,1);
                    lVar10 = lVar10 + 1;
                    bVar6 = iVar9 != -1;
                    iVar9 = iVar9 + 1;
                  } while (bVar6);
                }
              }
              iStack_a4 = iStack_a4 + 1;
              uVar8 = uVar13;
            }
            else if (uVar8 == (uint)uStack_88) {
              iStack_a4 = 1;
              uStack_88._0_4_ = uVar12;
              uVar8 = uVar13;
            }
            else {
              iVar9 = (uint)uStack_88 - uVar8;
              lVar10 = lStack_78 + uStack_88;
              do {
                pcVar2 = *(code **)(param_1 + 0x100);
                lVar7 = lVar10;
                (**(code **)(param_1 + 0xf8))(lVar10,1);
                uVar8 = (int)lVar7 + iStack_a4 * 0x11;
                if (0xfe < (int)uVar8) {
                  uVar8 = 0xff;
                }
                (*pcVar2)(lVar10,uVar8 & 0xff,1);
                lVar10 = lVar10 + 1;
                bVar6 = iVar9 != -1;
                iVar9 = iVar9 + 1;
              } while (bVar6);
              iStack_a4 = 1;
              uStack_88._0_4_ = uVar12;
              uVar8 = uVar13;
            }
            pcVar2 = *(code **)(param_1 + 0x100);
            lVar10 = lVar11;
            (**(code **)(param_1 + 0xf8))(lVar11,1);
            uVar12 = (int)lVar10 + uVar15 / 0xf0f;
            if (0xfe < (int)uVar12) {
              uVar12 = 0xff;
            }
            (*pcVar2)(lVar11,uVar12 & 0xff,1);
            uStack_88 = (ulong)(uint)uStack_88;
          }
        }
        if (param_4 == param_5) {
          iVar16 = (uint)uStack_88 - uVar8;
          if (iVar16 == 0) {
            return;
          }
          if (iStack_a4 == 0xf) {
            lVar11 = (long)(int)uVar8 - (long)(int)(uint)uStack_88;
            lStack_78 = lStack_78 + (int)(uint)uStack_88;
            do {
              (**(code **)(param_1 + 0x100))(lStack_78,0xff,1);
              lStack_78 = lStack_78 + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            return;
          }
          lStack_78 = lStack_78 + (int)(uint)uStack_88;
          do {
            pcVar2 = *(code **)(param_1 + 0x100);
            lVar11 = lStack_78;
            (**(code **)(param_1 + 0xf8))(lStack_78,1);
            uVar8 = (int)lVar11 + iStack_a4 * 0x11;
            if (0xfe < (int)uVar8) {
              uVar8 = 0xff;
            }
            (*pcVar2)(lStack_78,uVar8 & 0xff,1);
            lStack_78 = lStack_78 + 1;
            bVar6 = iVar16 != -1;
            iVar16 = iVar16 + 1;
          } while (bVar6);
          return;
        }
        if ((param_4 & 0xffff) == 0xf777) break;
        uVar12 = param_2[6] + *param_2;
        uVar13 = param_2[1] + param_2[8];
        *param_2 = uVar12;
        param_2[1] = uVar13;
        if (0 < (int)uVar13) {
          *param_2 = param_2[3] + uVar12;
          param_2[1] = uVar13 - param_2[4];
        }
        uVar13 = *param_3;
        uVar12 = param_3[1] + param_3[8];
        *param_3 = uVar13 + param_3[6];
        param_3[1] = uVar12;
        if (0 < (int)uVar12) {
          *param_3 = param_3[3] + uVar13 + param_3[6];
          param_3[1] = uVar12 - param_3[4];
        }
        param_4 = param_4 + 0x1111;
      }
      uVar12 = param_2[7] + *param_2;
      uVar13 = param_2[1] + param_2[9];
      *param_2 = uVar12;
      param_2[1] = uVar13;
      if (0 < (int)uVar13) {
        *param_2 = param_2[3] + uVar12;
        param_2[1] = uVar13 - param_2[4];
      }
      uVar13 = *param_3;
      uVar12 = param_3[1] + param_3[9];
      *param_3 = uVar13 + param_3[7];
      param_3[1] = uVar12;
      if (0 < (int)uVar12) {
        *param_3 = param_3[3] + uVar13 + param_3[7];
        param_3[1] = uVar12 - param_3[4];
      }
      iVar9 = (uint)uStack_88 - uVar8;
      if (iVar9 != 0) {
        lVar11 = lStack_78 + (int)(uint)uStack_88;
        if (iStack_a4 == 0xf) {
          lVar10 = (long)(int)uVar8 - (long)(int)(uint)uStack_88;
          do {
            (**(code **)(param_1 + 0x100))(lVar11,0xff,1);
            lVar11 = lVar11 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        else {
          do {
            pcVar2 = *(code **)(param_1 + 0x100);
            lVar10 = lVar11;
            (**(code **)(param_1 + 0xf8))(lVar11,1);
            uVar8 = (int)lVar10 + iStack_a4 * 0x11;
            if (0xfe < (int)uVar8) {
              uVar8 = 0xff;
            }
            (*pcVar2)(lVar11,uVar8 & 0xff,1);
            lVar11 = lVar11 + 1;
            bVar6 = iVar9 != -1;
            iVar9 = iVar9 + 1;
          } while (bVar6);
        }
        uVar8 = 0xffffffff;
        iStack_a4 = 0;
      }
      param_4 = param_4 + 0x1112;
      lStack_78 = lStack_78 + (long)iVar3 * 4;
    } while( true );
  }
  if (iVar3 == 4) {
    iVar9 = *(int *)(param_1 + 0xb8);
    iVar3 = *(int *)(param_1 + 0xa0);
    lStack_68 = *(long *)(param_1 + 0xa8) + (long)(iVar9 * iVar16) * 4;
    uVar8 = *param_3;
    while( true ) {
      uVar12 = *param_2 & ((int)*param_2 >> 0x1f ^ 0xffffffffU);
      if (iVar3 <= (int)uVar8 >> 0x10) {
        uVar8 = iVar3 * 0x10000 - 1;
      }
      if ((int)uVar12 < (int)uVar8) {
        uVar5 = uVar12 >> 0x10;
        lVar11 = lStack_68 + (ulong)(uVar12 >> 0x11);
        uVar15 = uVar12 >> 0x10 & 1;
        lVar10 = lVar11;
        (**(code **)(param_1 + 0xf8))(lVar11,1);
        uVar13 = ((uVar8 & 0xffff) + 0x199a) / 0x3333;
        uVar12 = ((uVar12 & 0xffff) + 0x199a) / 0x3333;
        if (uVar5 == uVar8 >> 0x10) {
          uVar5 = (uint)lVar10 & 0xff;
          uVar15 = uVar15 << 2;
          uVar8 = (uVar5 >> (ulong)uVar15 & 0xf) + (uVar13 - uVar12);
          (**(code **)(param_1 + 0x100))
                    (lVar11,((uVar8 | -(uVar8 >> 4)) & 0xf) << (ulong)uVar15 |
                            uVar5 & (0xf << (ulong)uVar15 ^ 0xffffffffU),1);
        }
        else {
          uVar1 = (uint)lVar10 & 0xff;
          uVar4 = uVar15 << 2;
          uVar12 = ((uVar1 >> (ulong)uVar4 & 0xf) - uVar12) + 5;
          (**(code **)(param_1 + 0x100))
                    (lVar11,((uVar12 | -(uVar12 >> 4)) & 0xf) << (ulong)uVar4 |
                            uVar1 & (0xf << (ulong)uVar4 ^ 0xffffffffU),1);
          lVar11 = lVar11 + (ulong)uVar15;
          uVar15 = uVar15 ^ 1;
          if (uVar5 + 1 < uVar8 >> 0x10) {
            iVar16 = ~uVar5 + (uVar8 >> 0x10);
            do {
              lVar10 = lVar11;
              (**(code **)(param_1 + 0xf8))(lVar11,1);
              uVar12 = (uint)lVar10 & 0xff;
              uVar5 = uVar15 << 2;
              uVar8 = (uVar12 >> (ulong)uVar5 & 0xf) + 5;
              (**(code **)(param_1 + 0x100))
                        (lVar11,((uVar8 | -(uVar8 >> 4)) & 0xf) << (ulong)uVar5 |
                                uVar12 & (0xf << (ulong)uVar5 ^ 0xffffffffU),1);
              lVar11 = lVar11 + (ulong)uVar15;
              uVar15 = uVar15 ^ 1;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
          }
          lVar10 = lVar11;
          (**(code **)(param_1 + 0xf8))(lVar11,1);
          uVar8 = (uint)lVar10 & 0xff;
          uVar15 = uVar15 << 2;
          uVar13 = (uVar8 >> (ulong)uVar15 & 0xf) + uVar13;
          (**(code **)(param_1 + 0x100))
                    (lVar11,((uVar13 | -(uVar13 >> 4)) & 0xf) << (ulong)uVar15 |
                            uVar8 & (0xf << (ulong)uVar15 ^ 0xffffffffU),1);
        }
      }
      if (param_4 == param_5) break;
      if ((param_4 & 0xffff) == 0xd555) {
        uVar8 = param_2[7] + *param_2;
        uVar12 = param_2[1] + param_2[9];
        *param_2 = uVar8;
        param_2[1] = uVar12;
        if (0 < (int)uVar12) {
          *param_2 = param_2[3] + uVar8;
          param_2[1] = uVar12 - param_2[4];
        }
        uVar8 = *param_3 + param_3[7];
        uVar12 = param_3[1] + param_3[9];
        *param_3 = uVar8;
        param_3[1] = uVar12;
        if (0 < (int)uVar12) {
          uVar8 = param_3[3] + uVar8;
          *param_3 = uVar8;
          param_3[1] = uVar12 - param_3[4];
        }
        param_4 = param_4 + 0x5556;
        lStack_68 = lStack_68 + (long)iVar9 * 4;
      }
      else {
        uVar8 = param_2[6] + *param_2;
        uVar12 = param_2[1] + param_2[8];
        *param_2 = uVar8;
        param_2[1] = uVar12;
        if (0 < (int)uVar12) {
          *param_2 = param_2[3] + uVar8;
          param_2[1] = uVar12 - param_2[4];
        }
        uVar8 = *param_3 + param_3[6];
        uVar12 = param_3[1] + param_3[8];
        *param_3 = uVar8;
        param_3[1] = uVar12;
        if (0 < (int)uVar12) {
          uVar8 = param_3[3] + uVar8;
          *param_3 = uVar8;
          param_3[1] = uVar12 - param_3[4];
        }
        param_4 = param_4 + 0x5555;
      }
    }
  }
  else if (iVar3 == 1) {
    iVar9 = *(int *)(param_1 + 0xb8);
    iVar3 = *(int *)(param_1 + 0xa0);
    lVar11 = *(long *)(param_1 + 0xa8) + (long)(iVar9 * iVar16) * 4;
    uVar8 = *param_3;
    do {
      uVar12 = *param_2;
      if ((int)uVar12 < -0x7ffe) {
        uVar12 = 0xffff8001;
      }
      uVar12 = uVar12 + 0x7fff;
      uVar13 = uVar8 + 0x7fff;
      if (iVar3 <= (int)(uVar8 + 0x7fff) >> 0x10) {
        uVar13 = iVar3 << 0x10;
      }
      if ((int)uVar12 < (int)uVar13) {
        uVar8 = (uVar13 >> 0x10) - (uVar12 >> 0x10);
        uVar15 = 0;
        if ((-(uVar13 >> 0x10) & 0x1f) != 0) {
          uVar15 = 0xffffffff >> (ulong)(-(uVar13 >> 0x10) & 0x1f);
        }
        lVar10 = lVar11 + (ulong)(uVar12 >> 0x15) * 4;
        if ((uVar12 >> 0x10 & 0x1f) == 0) {
          uVar12 = (int)uVar8 >> 5;
        }
        else {
          uVar13 = -1 << (ulong)(uVar12 >> 0x10 & 0x1f);
          uVar8 = uVar8 + (uVar12 >> 0x10 | 0xffffffe0);
          if ((int)uVar8 < 0) {
            uVar13 = uVar15 & uVar13;
            if (uVar13 == 0) goto LAB_1097ab974;
            uVar12 = 0;
            uVar8 = 0;
            uVar15 = 0;
          }
          else {
            uVar12 = uVar8 >> 5;
          }
          pcVar2 = *(code **)(param_1 + 0x100);
          lVar7 = lVar10;
          (**(code **)(param_1 + 0xf8))(lVar10,4);
          (*pcVar2)(lVar10,(uint)lVar7 | uVar13,4);
          lVar10 = lVar10 + 4;
        }
        if (0x1f < uVar8) {
          do {
            uVar12 = uVar12 - 1;
            lVar7 = lVar10 + 4;
            (**(code **)(param_1 + 0x100))(lVar10,0xffffffff,4);
            lVar10 = lVar7;
          } while (uVar12 != 0);
        }
        if (uVar15 != 0) {
          pcVar2 = *(code **)(param_1 + 0x100);
          lVar7 = lVar10;
          (**(code **)(param_1 + 0xf8))(lVar10,4);
          (*pcVar2)(lVar10,(uint)lVar7 | uVar15,4);
        }
      }
LAB_1097ab974:
      if (param_4 == param_5) {
        return;
      }
      uVar12 = *param_2;
      uVar8 = param_2[1] + param_2[9];
      *param_2 = uVar12 + param_2[7];
      param_2[1] = uVar8;
      if (0 < (int)uVar8) {
        *param_2 = param_2[3] + uVar12 + param_2[7];
        param_2[1] = uVar8 - param_2[4];
      }
      uVar8 = *param_3 + param_3[7];
      uVar12 = param_3[1] + param_3[9];
      *param_3 = uVar8;
      param_3[1] = uVar12;
      if (0 < (int)uVar12) {
        uVar8 = param_3[3] + uVar8;
        *param_3 = uVar8;
        param_3[1] = uVar12 - param_3[4];
      }
      param_4 = param_4 + 0x10000;
      lVar11 = lVar11 + (long)iVar9 * 4;
    } while( true );
  }
  return;
}



/* Entry: 1097acc1c; end: 1097acc7b;  */

void FUN_1097acc1c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x1;
  _calloc(1,0x810);
  if (plVar1 != (long *)0x0) {
    plVar1[1] = param_1;
    plVar1[2] = (long)&UNK_110b0eb90;
    plVar2 = plVar1;
    do {
      *plVar2 = (long)plVar1;
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
  }
  plVar1[5] = (long)FUN_1097acc7c;
  plVar1[3] = (long)&UNK_110b103c8;
  return;
}



/* Entry: 1097acc7c; end: 1097acfa3;  */

undefined8
FUN_1097acc7c(undefined8 param_1,long param_2,ulong param_3,int param_4,uint param_5,int param_6,
             uint param_7,int param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar2 = (uint)param_3;
  if (param_4 < 0x10) {
    if (param_4 == 1) {
      puVar6 = (uint *)(param_2 + (long)(int)(param_6 * uVar2) * 4 + (long)((int)param_5 >> 5) * 4);
      param_5 = param_5 & 0x1f;
      if ((param_9 & 1) == 0) {
        if (param_8 != 0) {
          do {
            puVar5 = puVar6;
            uVar2 = param_7;
            if (param_5 == 0) {
LAB_1097acde4:
              if (0x1f < (int)uVar2) {
                iVar1 = 0;
                if (0x3e < uVar2) {
                  iVar1 = uVar2 - 0x3f;
                }
                lVar3 = (ulong)(iVar1 + 0x1fU >> 3 & 0xffffffc) + 4;
                _bzero(puVar5,lVar3);
                puVar5 = (uint *)(lVar3 + (long)puVar5);
                uVar2 = (uVar2 - (iVar1 + 0x1fU & 0x7fffffe0)) - 0x20;
              }
              if (0 < (int)uVar2) {
                *puVar5 = *puVar5 & -1 << (ulong)(uVar2 & 0x1f);
              }
            }
            else {
              if ((int)(0x20 - param_5) < (int)param_7) {
                puVar5 = puVar6 + 1;
                *puVar6 = *puVar6 & ~(~(-1 << (ulong)(-param_5 & 0x1f)) << (ulong)param_5);
                uVar2 = param_7 - (0x20 - param_5);
                goto LAB_1097acde4;
              }
              *puVar6 = *puVar6 & ~(~(-1 << (ulong)(param_7 & 0x1f)) << (ulong)param_5);
            }
            puVar6 = (uint *)((long)puVar6 +
                             (-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 |
                             (param_3 & 0xffffffff) << 2));
            param_8 = param_8 + -1;
          } while (param_8 != 0);
        }
      }
      else if (param_8 != 0) {
        do {
          puVar5 = puVar6;
          uVar2 = param_7;
          if (param_5 == 0) {
LAB_1097acf08:
            if (0x1f < (int)uVar2) {
              iVar1 = 0;
              if (0x3e < uVar2) {
                iVar1 = uVar2 - 0x3f;
              }
              lVar3 = (ulong)(iVar1 + 0x1fU >> 3 & 0xffffffc) + 4;
              _memset(puVar5,0xff,lVar3);
              puVar5 = (uint *)(lVar3 + (long)puVar5);
              uVar2 = (uVar2 - (iVar1 + 0x1fU & 0x7fffffe0)) - 0x20;
            }
            if (0 < (int)uVar2) {
              *puVar5 = *puVar5 | -1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU;
            }
          }
          else {
            if ((int)(0x20 - param_5) < (int)param_7) {
              puVar5 = puVar6 + 1;
              *puVar6 = *puVar6 | ~(-1 << (ulong)(-param_5 & 0x1f)) << (ulong)param_5;
              uVar2 = param_7 - (0x20 - param_5);
              goto LAB_1097acf08;
            }
            *puVar6 = *puVar6 | ~(-1 << (ulong)(param_7 & 0x1f)) << (ulong)param_5;
          }
          puVar6 = (uint *)((long)puVar6 +
                           (-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 |
                           (param_3 & 0xffffffff) << 2));
          param_8 = param_8 + -1;
        } while (param_8 != 0);
      }
    }
    else {
      if (param_4 != 8) {
        return 0;
      }
      if (param_8 != 0) {
        lVar3 = param_2 + (int)(param_6 * uVar2 * 4) + (long)(int)param_5;
        do {
          if (0 < (int)param_7) {
            _memset(lVar3,param_9,param_7);
          }
          lVar3 = lVar3 + (int)(uVar2 * 4);
          param_8 = param_8 + -1;
        } while (param_8 != 0);
      }
    }
  }
  else if (param_4 == 0x10) {
    if (param_8 != 0) {
      lVar3 = param_2 + (long)(int)(param_6 * uVar2 * 2) * 2 + (long)(int)param_5 * 2;
      do {
        if (0 < (int)param_7) {
          lVar4 = 0;
          do {
            *(short *)(lVar3 + lVar4) = (short)param_9;
            lVar4 = lVar4 + 2;
          } while ((ulong)param_7 << 1 != lVar4);
        }
        lVar3 = lVar3 + (-(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                        (ulong)(uVar2 * 2) << 1);
        param_8 = param_8 + -1;
      } while (param_8 != 0);
    }
  }
  else {
    if (param_4 != 0x20) {
      return 0;
    }
    if (param_8 != 0) {
      lVar3 = param_2 + (long)(int)(param_6 * uVar2) * 4 + (long)(int)param_5 * 4;
      do {
        if (0 < (int)param_7) {
          lVar4 = 0;
          do {
            *(uint *)(lVar3 + lVar4) = param_9;
            lVar4 = lVar4 + 4;
          } while ((ulong)param_7 << 2 != lVar4);
        }
        lVar3 = lVar3 + (-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2);
        param_8 = param_8 + -1;
      } while (param_8 != 0);
    }
  }
  return 1;
}



/* Entry: 1097acfa4; end: 1097ad1e7;  */

void FUN_1097acfa4(uint param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  
  lVar17 = *(long *)(param_2 + 0x10);
  lVar19 = *(long *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x28);
  iVar6 = *(int *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar4 = *(int *)(param_2 + 0x34);
  iVar3 = *(int *)(param_2 + 0x38);
  iVar18 = *(int *)(param_2 + 0x3c);
  FUN_1097be490(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(lVar19 + 0x90));
  if (param_1 != 0 && iVar18 != 0) {
    lVar16 = (long)*(int *)(lVar17 + 0xb8) * 4;
    uVar7 = *(uint *)(lVar19 + 0xb8);
    uVar10 = uVar7 * 2;
    lVar19 = *(long *)(lVar19 + 0xa8) + (long)(int)(uVar10 * iVar4) * 2 + (long)iVar2 * 2;
    lVar17 = *(long *)(lVar17 + 0xa8) + lVar16 * iVar6 + (long)iVar5;
    uVar1 = param_1 >> 8 & 0xff00ff;
    do {
      if (iVar3 != 0) {
        lVar13 = 0;
        do {
          bVar8 = *(byte *)(lVar17 + lVar13);
          if (bVar8 != 0) {
            if (bVar8 == 0xff) {
              uVar14 = param_1;
              uVar15 = param_1;
              if (param_1 >> 0x18 < 0xff) {
                uVar9 = *(ushort *)(lVar19 + lVar13 * 2);
                uVar15 = ((uint)uVar9 << 3 & 0xf8 | uVar9 >> 2 & 7 |
                         (uint)uVar9 << 3 & 0x70000 | (uint)(uVar9 >> 0xb) << 0x13) *
                         (~param_1 >> 0x18) + 0x800080;
                uVar15 = ((uVar15 >> 8 & 0xff00ff) + uVar15 >> 8 & 0xff00ff) + (param_1 & 0xff00ff);
                uVar14 = (((uVar9 & 0x7e0) << 5 | uVar9 >> 1 & 0x3ff) >> 8) * (~param_1 >> 0x18) +
                         0x800080;
                uVar14 = ((uVar14 >> 8 & 0x7f00ff) + uVar14 >> 8 & 0x7f00ff) + uVar1;
                uVar14 = ((0x100 - (uVar14 >> 8 & 0x10001) | uVar14) & 0xff00ff) << 8 |
                         (0x100 - (uVar15 >> 8 & 0x10001) | uVar15) & 0xff00ff;
                uVar15 = uVar14;
              }
            }
            else {
              uVar9 = *(ushort *)(lVar19 + lVar13 * 2);
              uVar14 = (param_1 & 0xff00ff) * (uint)bVar8 + 0x800080;
              uVar15 = uVar1 * bVar8 + 0x800080;
              uVar15 = (uVar15 >> 8 & 0xff00ff) + uVar15;
              uVar11 = ~uVar15 >> 0x18;
              uVar12 = ((uint)uVar9 << 3 & 0xf8 | uVar9 >> 2 & 7 |
                       (uint)uVar9 << 3 & 0x70000 | (uint)(uVar9 >> 0xb) << 0x13) * uVar11 +
                       0x800080;
              uVar14 = ((uVar12 >> 8 & 0xff00ff) + uVar12 >> 8 & 0xff00ff) +
                       ((uVar14 >> 8 & 0xff00ff) + uVar14 >> 8 & 0xff00ff);
              uVar14 = 0x100 - (uVar14 >> 8 & 0x10001) | uVar14;
              uVar11 = (((uVar9 & 0x7e0) << 5 | uVar9 >> 1 & 0x3ff) >> 8) * uVar11 + 0x800080;
              uVar15 = ((uVar11 >> 8 & 0x7f00ff) + uVar11 >> 8 & 0x7f00ff) +
                       (uVar15 >> 8 & 0xff00ff);
              uVar15 = (0x100 - (uVar15 >> 8 & 0x10001) | uVar15) << 8;
            }
            uVar14 = uVar14 >> 3 & 0x1f001f;
            *(ushort *)(lVar19 + lVar13 * 2) =
                 (ushort)uVar14 | (ushort)((uVar14 | uVar15 & 0xfc00) >> 5);
          }
          lVar13 = lVar13 + 1;
        } while (iVar3 != (int)lVar13);
      }
      lVar17 = lVar17 + (int)lVar16;
      lVar19 = lVar19 + (-(ulong)((uVar7 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                        (ulong)uVar10 << 1);
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  return;
}



/* Entry: 1097ad1e8; end: 1097ad473;  */

void FUN_1097ad1e8(uint param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint3 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  undefined2 uVar22;
  uint uVar23;
  long lVar24;
  
  lVar17 = *(long *)(param_2 + 0x10);
  lVar24 = *(long *)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x28);
  iVar7 = *(int *)(param_2 + 0x2c);
  iVar3 = *(int *)(param_2 + 0x30);
  iVar5 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x38);
  iVar20 = *(int *)(param_2 + 0x3c);
  FUN_1097be490(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(lVar24 + 0x90));
  if (param_1 != 0 && iVar20 != 0) {
    lVar19 = (long)*(int *)(lVar17 + 0xb8) * 4;
    iVar9 = *(int *)(lVar24 + 0xb8) * 4;
    lVar24 = *(long *)(lVar24 + 0xa8) + (long)(iVar9 * iVar5);
    lVar17 = *(long *)(lVar17 + 0xa8) + lVar19 * iVar7 + (long)iVar6;
    lVar18 = (long)(iVar3 * 3);
    uVar2 = param_1 >> 8 & 0xff00ff;
    lVar16 = lVar24;
    do {
      if (iVar4 != 0) {
        lVar14 = 0;
        lVar15 = lVar16;
        lVar21 = lVar24;
        do {
          bVar8 = *(byte *)(lVar17 + lVar14);
          if (bVar8 != 0) {
            uVar1 = lVar18 + lVar15;
            if (bVar8 == 0xff) {
              uVar23 = param_1;
              if (param_1 >> 0x18 < 0xff) {
                if ((uVar1 & 1) == 0) {
                  uVar13 = *(uint3 *)(lVar21 + lVar18);
                }
                else {
                  uVar13 = *(uint3 *)(lVar21 + lVar18);
                }
                uVar12 = (uVar13 & 0xff00ff) * (~param_1 >> 0x18) + 0x800080;
                uVar12 = ((uVar12 >> 8 & 0xff00ff) + uVar12 >> 8 & 0xff00ff) + (param_1 & 0xff00ff);
                uVar23 = (uVar13 >> 8 & 0xff00ff) * (~param_1 >> 0x18) + 0x800080;
                uVar23 = ((uVar23 >> 8 & 0x7f00ff) + uVar23 >> 8 & 0x7f00ff) + uVar2;
                uVar23 = ((0x100 - (uVar23 >> 8 & 0x10001) | uVar23) & 0xff00ff) << 8 |
                         (0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff;
              }
              if ((uVar1 & 1) != 0) {
                *(char *)(lVar21 + lVar18) = (char)uVar23;
                uVar22 = (undefined2)(uVar23 >> 8);
LAB_1097ad42c:
                *(undefined2 *)(lVar21 + lVar18 + 1) = uVar22;
                goto LAB_1097ad430;
              }
              *(short *)(lVar21 + lVar18) = (short)uVar23;
            }
            else {
              if ((uVar1 & 1) == 0) {
                uVar13 = *(uint3 *)(lVar21 + lVar18);
              }
              else {
                uVar13 = *(uint3 *)(lVar21 + lVar18);
              }
              uVar23 = (param_1 & 0xff00ff) * (uint)bVar8 + 0x800080;
              uVar12 = uVar2 * bVar8 + 0x800080;
              uVar12 = (uVar12 >> 8 & 0xff00ff) + uVar12;
              uVar10 = ~uVar12 >> 0x18;
              uVar11 = (uVar13 & 0xff00ff) * uVar10 + 0x800080;
              uVar23 = ((uVar11 >> 8 & 0xff00ff) + uVar11 >> 8 & 0xff00ff) +
                       ((uVar23 >> 8 & 0xff00ff) + uVar23 >> 8 & 0xff00ff);
              uVar23 = 0x100 - (uVar23 >> 8 & 0x10001) | uVar23;
              uVar10 = (uVar13 >> 8 & 0xff00ff) * uVar10 + 0x800080;
              uVar12 = ((uVar10 >> 8 & 0x7f00ff) + uVar10 >> 8 & 0x7f00ff) +
                       (uVar12 >> 8 & 0xff00ff);
              uVar12 = ((0x100 - (uVar12 >> 8 & 0x10001) | uVar12) & 0xff00ff) << 8 |
                       uVar23 & 0xff00ff;
              if ((uVar1 & 1) != 0) {
                *(char *)(lVar21 + lVar18) = (char)uVar23;
                uVar22 = (undefined2)(uVar12 >> 8);
                goto LAB_1097ad42c;
              }
              *(short *)(lVar21 + lVar18) = (short)uVar12;
            }
            *(char *)(lVar21 + lVar18 + 2) = (char)(uVar23 >> 0x10);
          }
LAB_1097ad430:
          lVar14 = lVar14 + 1;
          lVar21 = lVar21 + 3;
          lVar15 = lVar15 + 3;
        } while (iVar4 != (int)lVar14);
      }
      lVar17 = lVar17 + (int)lVar19;
      lVar24 = lVar24 + iVar9;
      lVar16 = lVar16 + iVar9;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  return;
}



/* Entry: 1097ad474; end: 1097ada1f;  */

void FUN_1097ad474(uint param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  
  lVar16 = *(long *)(param_2 + 0x10);
  lVar18 = *(long *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x28);
  iVar6 = *(int *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar4 = *(int *)(param_2 + 0x34);
  iVar3 = *(int *)(param_2 + 0x38);
  iVar17 = *(int *)(param_2 + 0x3c);
  FUN_1097be490(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(lVar18 + 0x90));
  if (param_1 != 0 && iVar17 != 0) {
    lVar15 = (long)*(int *)(lVar16 + 0xb8) * 4;
    iVar9 = *(int *)(lVar18 + 0xb8);
    lVar18 = *(long *)(lVar18 + 0xa8) + (long)(iVar9 * iVar4) * 4 + (long)iVar2 * 4;
    lVar16 = *(long *)(lVar16 + 0xa8) + lVar15 * iVar6 + (long)iVar5;
    uVar1 = param_1 >> 8 & 0xff00ff;
    do {
      if (iVar3 != 0) {
        lVar12 = 0;
        do {
          bVar8 = *(byte *)(lVar16 + lVar12);
          if (bVar8 != 0) {
            if (bVar8 == 0xff) {
              uVar14 = param_1;
              if (param_1 >> 0x18 < 0xff) {
                uVar13 = *(uint *)(lVar18 + lVar12 * 4);
                uVar14 = (uVar13 & 0xff00ff) * (~param_1 >> 0x18) + 0x800080;
                uVar14 = ((uVar14 >> 8 & 0xff00ff) + uVar14 >> 8 & 0xff00ff) + (param_1 & 0xff00ff);
                uVar14 = 0x100 - (uVar14 >> 8 & 0x10001) | uVar14;
                uVar13 = (uVar13 >> 8 & 0xff00ff) * (~param_1 >> 0x18) + 0x800080;
                uVar13 = ((uVar13 >> 8 & 0xff00ff) + uVar13 >> 8 & 0xff00ff) + uVar1;
                goto LAB_1097ad5f0;
              }
            }
            else {
              uVar14 = (param_1 & 0xff00ff) * (uint)bVar8 + 0x800080;
              uVar13 = uVar1 * bVar8 + 0x800080;
              uVar13 = (uVar13 >> 8 & 0xff00ff) + uVar13;
              uVar7 = *(uint *)(lVar18 + lVar12 * 4);
              uVar10 = ~uVar13 >> 0x18;
              uVar11 = (uVar7 & 0xff00ff) * uVar10 + 0x800080;
              uVar14 = ((uVar11 >> 8 & 0xff00ff) + uVar11 >> 8 & 0xff00ff) +
                       ((uVar14 >> 8 & 0xff00ff) + uVar14 >> 8 & 0xff00ff);
              uVar14 = 0x100 - (uVar14 >> 8 & 0x10001) | uVar14;
              uVar7 = (uVar7 >> 8 & 0xff00ff) * uVar10 + 0x800080;
              uVar13 = ((uVar7 >> 8 & 0xff00ff) + uVar7 >> 8 & 0xff00ff) + (uVar13 >> 8 & 0xff00ff);
LAB_1097ad5f0:
              uVar14 = ((0x100 - (uVar13 >> 8 & 0x10001) | uVar13) & 0xff00ff) << 8 |
                       uVar14 & 0xff00ff;
            }
            *(uint *)(lVar18 + lVar12 * 4) = uVar14;
          }
          lVar12 = lVar12 + 1;
        } while (iVar3 != (int)lVar12);
      }
      lVar16 = lVar16 + (int)lVar15;
      lVar18 = lVar18 + (long)iVar9 * 4;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  return;
}



/* Entry: 1097ada20; end: 1097adf53;  */

void FUN_1097ada20(uint param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  
  lVar14 = *(long *)(param_2 + 0x10);
  lVar16 = *(long *)(param_2 + 0x18);
  iVar3 = *(int *)(param_2 + 0x28);
  iVar6 = *(int *)(param_2 + 0x2c);
  iVar4 = *(int *)(param_2 + 0x30);
  iVar7 = *(int *)(param_2 + 0x34);
  iVar5 = *(int *)(param_2 + 0x38);
  iVar15 = *(int *)(param_2 + 0x3c);
  FUN_1097be490(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(lVar16 + 0x90));
  if (param_1 != 0 && iVar15 != 0) {
    iVar10 = *(int *)(lVar14 + 0xb8);
    lVar14 = *(long *)(lVar14 + 0xa8) + (long)(iVar10 * iVar6) * 4 + (long)iVar3 * 4;
    iVar3 = *(int *)(lVar16 + 0xb8);
    lVar16 = *(long *)(lVar16 + 0xa8) + (long)(iVar3 * iVar7) * 4 + (long)iVar4 * 4;
    uVar11 = param_1 >> 0x18;
    do {
      if (iVar5 != 0) {
        lVar17 = 0;
        do {
          uVar18 = *(uint *)(lVar14 + lVar17 * 4);
          if (uVar18 != 0) {
            if (uVar18 == 0xffffffff) {
              uVar18 = param_1;
              if (uVar11 != 0xff) {
                uVar8 = *(uint *)(lVar16 + lVar17 * 4);
                uVar18 = (uVar8 & 0xff00ff) * (~param_1 >> 0x18) + 0x800080;
                uVar18 = ((uVar18 >> 8 & 0xff00ff) + uVar18 >> 8 & 0xff00ff) + (param_1 & 0xff00ff);
                uVar8 = (uVar8 >> 8 & 0xff00ff) * (~param_1 >> 0x18) + 0x800080;
                uVar8 = ((uVar8 >> 8 & 0xff00ff) + uVar8 >> 8 & 0xff00ff) +
                        (param_1 >> 8 & 0xff00ff);
                uVar18 = ((0x100 - (uVar8 >> 8 & 0x10001) | uVar8) & 0xff00ff) << 8 |
                         (0x100 - (uVar18 >> 8 & 0x10001) | uVar18) & 0xff00ff;
              }
            }
            else {
              uVar9 = *(uint *)(lVar16 + lVar17 * 4);
              uVar12 = (uVar18 & 0xff) * (param_1 & 0xff) + 0x800080 +
                       (uVar18 >> 0x10 & 0xff) * (param_1 & 0xff0000);
              uVar13 = (uVar18 >> 0x18) * (param_1 >> 8 & 0xff0000) + 0x800080 +
                       (uVar18 >> 8 & 0xff) * (param_1 >> 8 & 0xff);
              uVar8 = (uVar18 & 0xff00ff) * uVar11 + 0x800080;
              uVar8 = (uVar8 >> 8 & 0xff00ff) + uVar8 >> 8 & 0xff00ff;
              uVar18 = (uVar18 >> 8 & 0xff00ff) * uVar11 + 0x800080;
              uVar1 = (uVar18 >> 8 & 0xff00ff) + uVar18 & 0xff00ff00 ^ 0xffffffff;
              uVar2 = uVar8 ^ uVar1;
              uVar18 = (uVar9 & 0xff0000) * (uVar2 >> 0x10 & 0xff) + 0x800080 +
                       (uVar9 & 0xff) * ((uVar8 ^ 0xffffffff) & 0xff);
              uVar18 = ((uVar18 >> 8 & 0xff00ff) + uVar18 >> 8 & 0xff00ff) +
                       ((uVar12 >> 8 & 0xff00ff) + uVar12 >> 8 & 0xff00ff);
              uVar8 = (uVar9 >> 8 & 0xff0000) * (uVar1 >> 0x18) + 0x800080 +
                      (uVar9 >> 8 & 0xff) * (uVar2 >> 8 & 0xff);
              uVar8 = ((uVar8 >> 8 & 0xff00ff) + uVar8 >> 8 & 0xff00ff) +
                      ((uVar13 >> 8 & 0xff00ff) + uVar13 >> 8 & 0xff00ff);
              uVar18 = ((0x100 - (uVar8 >> 8 & 0x10001) | uVar8) & 0xff00ff) << 8 |
                       (0x100 - (uVar18 >> 8 & 0x10001) | uVar18) & 0xff00ff;
            }
            *(uint *)(lVar16 + lVar17 * 4) = uVar18;
          }
          lVar17 = lVar17 + 1;
        } while (iVar5 != (int)lVar17);
      }
      lVar16 = lVar16 + (long)iVar3 * 4;
      lVar14 = lVar14 + (long)iVar10 * 4;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



/* Entry: 1097adf54; end: 1097ae0af;  */

void FUN_1097adf54(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  iVar11 = *(int *)(param_2 + 0x3c);
  if (iVar11 != 0) {
    iVar5 = *(int *)(*(long *)(param_2 + 8) + 0xb8);
    lVar12 = *(long *)(*(long *)(param_2 + 8) + 0xa8) + (long)(*(int *)(param_2 + 0x24) * iVar5) * 4
             + (long)*(int *)(param_2 + 0x20) * 4;
    lVar15 = (long)*(int *)(*(long *)(param_2 + 0x10) + 0xb8) * 4;
    lVar13 = *(long *)(*(long *)(param_2 + 0x10) + 0xa8) + lVar15 * *(int *)(param_2 + 0x2c) +
             (long)*(int *)(param_2 + 0x28);
    iVar6 = *(int *)(*(long *)(param_2 + 0x18) + 0xb8);
    lVar14 = *(long *)(*(long *)(param_2 + 0x18) + 0xa8) +
             (long)(*(int *)(param_2 + 0x34) * iVar6) * 4 + (long)*(int *)(param_2 + 0x30) * 4;
    iVar1 = *(int *)(param_2 + 0x38);
    do {
      if (iVar1 != 0) {
        lVar9 = 0;
        do {
          bVar4 = *(byte *)(lVar13 + lVar9);
          if (bVar4 != 0) {
            uVar2 = *(uint *)(lVar12 + lVar9 * 4);
            uVar10 = uVar2 | 0xff000000;
            if (bVar4 != 0xff) {
              uVar10 = (uVar2 & 0xff00ff) * (uint)bVar4 + 0x800080;
              uVar2 = ((uVar2 & 0xff00ff00 | 0xff000000) >> 8) * (uint)bVar4 + 0x800080;
              uVar2 = (uVar2 >> 8 & 0xff00ff) + uVar2;
              uVar3 = *(uint *)(lVar14 + lVar9 * 4);
              uVar7 = ~uVar2 >> 0x18;
              uVar8 = (uVar3 & 0xff00ff) * uVar7 + 0x800080;
              uVar10 = ((uVar8 >> 8 & 0xff00ff) + uVar8 >> 8 & 0xff00ff) +
                       ((uVar10 >> 8 & 0xff00ff) + uVar10 >> 8 & 0xff00ff);
              uVar3 = (uVar3 >> 8 & 0xff00ff) * uVar7 + 0x800080;
              uVar2 = ((uVar3 >> 8 & 0xff00ff) + uVar3 >> 8 & 0xff00ff) + (uVar2 >> 8 & 0xff00ff);
              uVar10 = ((0x100 - (uVar2 >> 8 & 0x10001) | uVar2) & 0xff00ff) << 8 |
                       (0x100 - (uVar10 >> 8 & 0x10001) | uVar10) & 0xff00ff;
            }
            *(uint *)(lVar14 + lVar9 * 4) = uVar10;
          }
          lVar9 = lVar9 + 1;
        } while (iVar1 != (int)lVar9);
      }
      lVar13 = lVar13 + (int)lVar15;
      lVar12 = lVar12 + (long)iVar5 * 4;
      lVar14 = lVar14 + (long)iVar6 * 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



/* Entry: 1097ae0b0; end: 1097ae68f;  */

void FUN_1097ae0b0(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  iVar8 = *(int *)(param_2 + 0x3c);
  if (iVar8 != 0) {
    iVar3 = *(int *)(*(long *)(param_2 + 8) + 0xb8);
    lVar9 = *(long *)(*(long *)(param_2 + 8) + 0xa8) + (long)(*(int *)(param_2 + 0x24) * iVar3) * 4
            + (long)*(int *)(param_2 + 0x20) * 4;
    iVar4 = *(int *)(*(long *)(param_2 + 0x18) + 0xb8);
    lVar10 = *(long *)(*(long *)(param_2 + 0x18) + 0xa8) +
             (long)(*(int *)(param_2 + 0x34) * iVar4) * 4 + (long)*(int *)(param_2 + 0x30) * 4;
    iVar1 = *(int *)(param_2 + 0x38);
    do {
      if (iVar1 != 0) {
        lVar6 = 0;
        do {
          uVar7 = *(uint *)(lVar9 + lVar6 * 4);
          if (uVar7 >> 0x18 < 0xff) {
            if (uVar7 != 0) {
              uVar2 = *(uint *)(lVar10 + lVar6 * 4);
              uVar5 = (uVar2 & 0xff00ff) * (~uVar7 >> 0x18) + 0x800080;
              uVar5 = ((uVar5 >> 8 & 0xff00ff) + uVar5 >> 8 & 0xff00ff) + (uVar7 & 0xff00ff);
              uVar2 = (uVar2 >> 8 & 0xff00ff) * (~uVar7 >> 0x18) + 0x800080;
              uVar7 = ((uVar2 >> 8 & 0xff00ff) + uVar2 >> 8 & 0xff00ff) + (uVar7 >> 8 & 0xff00ff);
              uVar7 = ((0x100 - (uVar7 >> 8 & 0x10001) | uVar7) & 0xff00ff) << 8 |
                      (0x100 - (uVar5 >> 8 & 0x10001) | uVar5) & 0xff00ff;
              goto LAB_1097ae19c;
            }
          }
          else {
LAB_1097ae19c:
            *(uint *)(lVar10 + lVar6 * 4) = uVar7;
          }
          lVar6 = lVar6 + 1;
        } while (iVar1 != (int)lVar6);
      }
      lVar10 = lVar10 + (long)iVar4 * 4;
      lVar9 = lVar9 + (long)iVar3 * 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}



/* Entry: 1097ae690; end: 1097ae7eb;  */

void FUN_1097ae690(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  
  lVar12 = *(long *)(param_2 + 0x10);
  lVar14 = *(long *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x28);
  iVar4 = *(int *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar5 = *(int *)(param_2 + 0x34);
  iVar3 = *(int *)(param_2 + 0x38);
  iVar13 = *(int *)(param_2 + 0x3c);
  FUN_1097be490(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(lVar14 + 0x90));
  uVar10 = (uint)param_1;
  if (uVar10 != 0 && iVar13 != 0) {
    iVar8 = *(int *)(lVar12 + 0xb8);
    lVar12 = *(long *)(lVar12 + 0xa8) + (long)(iVar8 * iVar4) * 4 + (long)iVar1 * 4;
    iVar1 = *(int *)(lVar14 + 0xb8);
    lVar14 = *(long *)(lVar14 + 0xa8) + (long)(iVar1 * iVar5) * 4 + (long)iVar2 * 4;
    do {
      if (iVar3 != 0) {
        lVar11 = 0;
        do {
          uVar6 = *(uint *)(lVar12 + lVar11 * 4);
          if (uVar6 != 0) {
            uVar7 = *(uint *)(lVar14 + lVar11 * 4);
            uVar9 = (uVar6 & 0xff) * (uVar10 & 0xff) + 0x800080 +
                    (uVar6 >> 0x10 & 0xff) * (uVar10 & 0xff0000);
            uVar9 = (uVar7 & 0xff00ff) + ((uVar9 >> 8 & 0xff00ff) + uVar9 >> 8 & 0xff00ff);
            uVar6 = (uVar6 >> 0x18) * (uVar10 >> 8 & 0xff0000) + 0x800080 +
                    (uVar6 >> 8 & 0xff) * (uVar10 >> 8 & 0xff);
            uVar6 = (uVar7 >> 8 & 0xff00ff) + ((uVar6 >> 8 & 0xff00ff) + uVar6 >> 8 & 0xff00ff);
            *(uint *)(lVar14 + lVar11 * 4) =
                 ((0x100 - (uVar6 >> 8 & 0x10001) | uVar6) & 0xff00ff) << 8 |
                 (0x100 - (uVar9 >> 8 & 0x10001) | uVar9) & 0xff00ff;
          }
          lVar11 = lVar11 + 1;
        } while (iVar3 != (int)lVar11);
      }
      lVar14 = lVar14 + (long)iVar1 * 4;
      lVar12 = lVar12 + (long)iVar8 * 4;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  return;
}



/* Entry: 1097ae7ec; end: 1097ae8c3;  */

void FUN_1097ae7ec(uint param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = *(long *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x28);
  iVar4 = *(int *)(param_2 + 0x2c);
  iVar3 = *(int *)(param_2 + 0x30);
  iVar5 = *(int *)(param_2 + 0x34);
  iVar1 = *(int *)(param_2 + 0x38);
  iVar12 = *(int *)(param_2 + 0x3c);
  lVar13 = *(long *)(lVar9 + 0xa8);
  iVar6 = *(int *)(lVar9 + 0xb8);
  lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0xa8);
  iVar7 = *(int *)(*(long *)(param_2 + 0x10) + 0xb8);
  FUN_1097be490(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(lVar9 + 0x90));
  if (iVar12 != 0) {
    lVar10 = (long)iVar7 * 4;
    lVar9 = lVar14 + lVar10 * iVar4 + (long)iVar2;
    lVar14 = (long)iVar6 * 4;
    lVar13 = lVar13 + lVar14 * iVar5 + (long)iVar3;
    do {
      if (iVar1 != 0) {
        lVar11 = 0;
        do {
          uVar8 = (param_1 >> 0x18) * (uint)*(byte *)(lVar9 + lVar11) + 0x80;
          iVar2 = (uint)*(byte *)(lVar13 + lVar11) + (uVar8 + (uVar8 >> 8) >> 8);
          *(byte *)(lVar13 + lVar11) = (byte)iVar2 | -(char)((uint)iVar2 >> 8);
          lVar11 = lVar11 + 1;
        } while (iVar1 != (int)lVar11);
      }
      lVar13 = lVar13 + (int)lVar14;
      lVar9 = lVar9 + (int)lVar10;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  return;
}



/* Entry: 1097ae8c4; end: 1097ae997;  */

void FUN_1097ae8c4(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  FUN_1097be490(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(lVar12 + 0x90));
  uVar7 = *(uint *)(lVar12 + 0x90);
  uVar9 = (uint)param_1;
  uVar2 = ((uint)(param_1 >> 3) & 0x1f0000 | uVar9 & 0xfc00) >> 5 | uVar9 >> 3 & 0x1f;
  if (uVar7 != 0x10020565 && uVar7 != 0x10030565) {
    uVar2 = uVar9;
  }
  uVar1 = uVar9 >> 0x18;
  if (uVar7 != 0x8018000) {
    uVar1 = uVar9;
  }
  uVar9 = uVar9 >> 0x1f;
  if (uVar7 != 0x1011000) {
    uVar9 = uVar1;
  }
  if ((int)uVar7 < 0x10020565) {
    uVar2 = uVar9;
  }
  lVar10 = *(long *)(lVar12 + 0xa8);
  uVar8 = *(undefined4 *)(lVar12 + 0xb8);
  lVar12 = lRam000000011386a1d8;
  if (lRam000000011386a1d8 != 0) goto LAB_1097c38d0;
  lVar12 = lVar10;
  FUN_1097bea00();
  lRam000000011386a1d8 = lVar12;
  while( true ) {
    if (lVar12 == 0) {
      return;
    }
LAB_1097c38d0:
    if ((*(code **)(lVar12 + 0x28) != (code *)0x0) &&
       (lVar11 = lVar12,
       (**(code **)(lVar12 + 0x28))
                 (lVar12,lVar10,uVar8,(uVar7 >> 0x18) << (ulong)(uVar7 >> 0x16 & 3),uVar3,uVar5,
                  uVar4,uVar6,uVar2), (int)lVar11 != 0)) break;
    lVar12 = *(long *)(lVar12 + 8);
  }
  return;
}



/* Entry: 1097ae998; end: 1097aea1f;  */

void FUN_1097ae998(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar4 = *(int *)(param_2 + 0x3c);
  if (iVar4 != 0) {
    iVar2 = *(int *)(*(long *)(param_2 + 8) + 0xb8);
    lVar5 = *(long *)(*(long *)(param_2 + 8) + 0xa8) + (long)(*(int *)(param_2 + 0x24) * iVar2) * 4
            + (long)*(int *)(param_2 + 0x20) * 4;
    iVar3 = *(int *)(*(long *)(param_2 + 0x18) + 0xb8);
    lVar6 = *(long *)(*(long *)(param_2 + 0x18) + 0xa8) +
            (long)(*(int *)(param_2 + 0x34) * iVar3) * 4 + (long)*(int *)(param_2 + 0x30) * 4;
    iVar1 = *(int *)(param_2 + 0x38);
    do {
      if (iVar1 != 0) {
        lVar7 = 0;
        do {
          *(uint *)(lVar6 + lVar7 * 4) = *(uint *)(lVar5 + lVar7 * 4) | 0xff000000;
          lVar7 = lVar7 + 1;
        } while (iVar1 != (int)lVar7);
      }
      lVar6 = lVar6 + (long)iVar3 * 4;
      lVar5 = lVar5 + (long)iVar2 * 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



/* Entry: 1097aea20; end: 1097aeacb;  */

void FUN_1097aea20(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_2 + 0x3c);
  if (iVar7 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    lVar5 = (long)*(int *)(lVar3 + 0xb8) * 4;
    uVar2 = ((*(uint *)(lVar3 + 0x90) >> 0x18) << (ulong)(*(uint *)(lVar3 + 0x90) >> 0x16 & 3)) >> 3
    ;
    lVar3 = *(long *)(lVar3 + 0xa8) + lVar5 * *(int *)(param_2 + 0x34) +
            (long)(int)uVar2 * (long)*(int *)(param_2 + 0x30);
    lVar4 = (long)*(int *)(*(long *)(param_2 + 8) + 0xb8) * 4;
    lVar6 = *(long *)(*(long *)(param_2 + 8) + 0xa8) + lVar4 * *(int *)(param_2 + 0x24) +
            (long)*(int *)(param_2 + 0x20) * (long)(int)uVar2;
    iVar1 = *(int *)(param_2 + 0x38);
    do {
      iVar7 = iVar7 + -1;
      _memcpy(lVar3,lVar6,iVar1 * uVar2);
      lVar3 = lVar3 + (int)lVar5;
      lVar6 = lVar6 + (int)lVar4;
    } while (iVar7 != 0);
  }
  return;
}



/* Entry: 1097aeacc; end: 1097aeb67;  */

void FUN_1097aeacc(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  
  iVar4 = *(int *)(param_2 + 0x3c);
  if (iVar4 != 0) {
    lVar7 = (long)*(int *)(*(long *)(param_2 + 0x18) + 0xb8) * 4;
    lVar5 = *(long *)(*(long *)(param_2 + 0x18) + 0xa8) + lVar7 * *(int *)(param_2 + 0x34) +
            (long)*(int *)(param_2 + 0x30);
    lVar8 = (long)*(int *)(*(long *)(param_2 + 8) + 0xb8) * 4;
    lVar6 = *(long *)(*(long *)(param_2 + 8) + 0xa8) + lVar8 * *(int *)(param_2 + 0x24) +
            (long)*(int *)(param_2 + 0x20);
    iVar1 = *(int *)(param_2 + 0x38);
    do {
      if (iVar1 != 0) {
        lVar9 = 0;
        do {
          bVar2 = *(byte *)(lVar6 + lVar9);
          uVar10 = 0;
          if (bVar2 == 0) {
LAB_1097aeb44:
            *(undefined1 *)(lVar5 + lVar9) = uVar10;
          }
          else if (bVar2 != 0xff) {
            uVar3 = (uint)*(byte *)(lVar5 + lVar9) * (uint)bVar2 + 0x80;
            uVar10 = (undefined1)(uVar3 + (uVar3 >> 8) >> 8);
            goto LAB_1097aeb44;
          }
          lVar9 = lVar9 + 1;
        } while (iVar1 != (int)lVar9);
      }
      lVar5 = lVar5 + (int)lVar7;
      lVar6 = lVar6 + (int)lVar8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



/* Entry: 1097aeb68; end: 1097aecaf;  */

void FUN_1097aeb68(uint param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined1 uVar11;
  int iVar12;
  long lVar13;
  
  lVar6 = *(long *)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18);
  iVar7 = *(int *)(param_2 + 0x28);
  iVar2 = *(int *)(param_2 + 0x2c);
  iVar9 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x34);
  iVar1 = *(int *)(param_2 + 0x38);
  iVar12 = *(int *)(param_2 + 0x3c);
  FUN_1097be490(param_1,*(undefined8 *)(param_2 + 8),*(undefined4 *)(lVar13 + 0x90));
  lVar8 = (long)*(int *)(lVar13 + 0xb8) * 4;
  lVar13 = *(long *)(lVar13 + 0xa8) + lVar8 * iVar3 + (long)iVar9;
  lVar10 = (long)*(int *)(lVar6 + 0xb8) * 4;
  lVar6 = *(long *)(lVar6 + 0xa8) + lVar10 * iVar2 + (long)iVar7;
  iVar7 = (int)lVar8;
  iVar9 = (int)lVar10;
  if (param_1 >> 0x18 == 0xff) {
    if (iVar12 != 0) {
      do {
        if (iVar1 != 0) {
          lVar8 = 0;
          do {
            bVar4 = *(byte *)(lVar6 + lVar8);
            uVar11 = 0;
            if (bVar4 == 0) {
LAB_1097aec0c:
              *(undefined1 *)(lVar13 + lVar8) = uVar11;
            }
            else if (bVar4 != 0xff) {
              uVar5 = (uint)*(byte *)(lVar13 + lVar8) * (uint)bVar4 + 0x80;
              uVar11 = (undefined1)(uVar5 + (uVar5 >> 8) >> 8);
              goto LAB_1097aec0c;
            }
            lVar8 = lVar8 + 1;
          } while (iVar1 != (int)lVar8);
        }
        lVar13 = lVar13 + iVar7;
        lVar6 = lVar6 + iVar9;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  else if (iVar12 != 0) {
    do {
      if (iVar1 != 0) {
        lVar8 = 0;
        do {
          uVar5 = (param_1 >> 0x18) * (uint)*(byte *)(lVar6 + lVar8) + 0x80;
          uVar5 = uVar5 + (uVar5 >> 8);
          if (uVar5 < 0x100) {
            uVar11 = 0;
          }
          else {
            uVar5 = (uVar5 >> 8) * (uint)*(byte *)(lVar13 + lVar8) + 0x80;
            uVar11 = (undefined1)(uVar5 + (uVar5 >> 8) >> 8);
          }
          *(undefined1 *)(lVar13 + lVar8) = uVar11;
          lVar8 = lVar8 + 1;
        } while (iVar1 != (int)lVar8);
      }
      lVar13 = lVar13 + iVar7;
      lVar6 = lVar6 + iVar9;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  return;
}



/* Entry: 1097aecb0; end: 1097b3fc3;  */

void FUN_1097aecb0(undefined8 param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  int *piVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar18 = *(long *)(param_2 + 8);
  iVar14 = *(int *)(param_2 + 0x30);
  iVar13 = *(int *)(param_2 + 0x34);
  uVar2 = *(uint *)(param_2 + 0x38);
  uVar19 = *(uint *)(param_2 + 0x3c);
  iVar3 = *(int *)(lVar18 + 0xa0);
  lVar21 = *(long *)(*(long *)(param_2 + 0x18) + 0xa8);
  iVar8 = *(int *)(*(long *)(param_2 + 0x18) + 0xb8);
  lVar20 = *(long *)(lVar18 + 0xa8);
  iVar4 = *(int *)(lVar18 + 0xb8);
  uStack_70 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) << 0x10,
                       (int)*(undefined8 *)(param_2 + 0x20) << 0x10) | 0x800000008000;
  uStack_68 = 0x10000;
  piVar17 = *(int **)(lVar18 + 0x38);
  piVar10 = piVar17;
  FUN_1097bf628(piVar17,&uStack_70);
  if (((int)piVar10 != 0) && (0 < (int)uVar19)) {
    iVar5 = *piVar17;
    iVar6 = piVar17[4];
    uStack_70._4_4_ = uStack_70._4_4_ + -1;
    puVar12 = (undefined4 *)(lVar21 + (long)(iVar8 * iVar13) * 4 + (long)iVar14 * 4);
    uStack_70._0_4_ = (int)uStack_70 + ~(iVar3 << 0x10);
    do {
      lVar21 = lVar20 + (long)((uStack_70._4_4_ >> 0x10) * iVar4) * 4 +
               (long)*(int *)(lVar18 + 0xa0) * 4;
      puVar11 = puVar12;
      puVar16 = puVar12;
      uVar9 = uVar2;
      uVar15 = uVar2;
      iVar13 = (int)uStack_70;
      iVar14 = (int)uStack_70;
      if (1 < (int)uVar2) {
        do {
          uVar15 = uVar9 - 2;
          iVar14 = iVar13 + iVar5 * 2;
          uVar7 = *(undefined4 *)(lVar21 + (long)(iVar5 + iVar13 >> 0x10) * 4);
          puVar11 = puVar16 + 2;
          *puVar16 = *(undefined4 *)(lVar21 + (long)(iVar13 >> 0x10) * 4);
          puVar16[1] = uVar7;
          bVar1 = 3 < uVar9;
          puVar16 = puVar11;
          uVar9 = uVar15;
          iVar13 = iVar14;
        } while (bVar1);
      }
      if ((uVar15 & 1) != 0) {
        *puVar11 = *(undefined4 *)(lVar21 + (long)(iVar14 >> 0x10) * 4);
      }
      puVar12 = puVar12 + iVar8;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar6;
      bVar1 = 1 < uVar19;
      uVar19 = uVar19 - 1;
    } while (bVar1);
  }
  return;
}



/* Entry: 1097b3fc4; end: 1097b41d3;  */

void FUN_1097b3fc4(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  undefined4 *puVar20;
  
  lVar14 = *(long *)(param_2 + 8);
  iVar17 = *(int *)(param_2 + 0x38);
  uVar2 = *(uint *)(param_2 + 0x3c);
  uVar3 = (ulong)uVar2;
  iVar4 = *(int *)(*(long *)(param_2 + 0x18) + 0xb8);
  lVar12 = (long)iVar4;
  uVar13 = *(long *)(*(long *)(param_2 + 0x18) + 0xa8) +
           (long)(iVar4 * *(int *)(param_2 + 0x34)) * 4 + (long)*(int *)(param_2 + 0x30) * 4;
  iVar18 = (*(int *)(*(long *)(lVar14 + 0x38) + 8) + 0x7fff >> 0x10) -
           (uVar2 + *(int *)(param_2 + 0x24));
  iVar4 = *(int *)(lVar14 + 0xb8);
  lVar15 = (long)iVar4;
  iVar7 = (*(int *)(param_2 + 0x20) + (*(int *)(*(long *)(lVar14 + 0x38) + 0x14) + 0x7fff >> 0x10))
          * iVar4;
  lVar16 = *(long *)(lVar14 + 0xa8) + (long)iVar7 * 4 + (long)iVar18 * 4;
  if ((uVar13 & 0x3f) != 0) {
    iVar5 = 0x10 - (int)((uVar13 & 0x3f) >> 2);
    if (iVar17 <= iVar5) {
      iVar5 = iVar17;
    }
    if (0 < (int)uVar2) {
      uVar19 = 0;
      puVar20 = (undefined4 *)
                ((long)iVar7 * 4 + (long)iVar18 * 4 + uVar3 * 4 + *(long *)(lVar14 + 0xa8));
      do {
        puVar20 = puVar20 + -1;
        if (0 < iVar17) {
          puVar6 = (undefined4 *)(uVar13 + uVar19 * lVar12 * 4);
          puVar8 = puVar20;
          iVar7 = iVar5;
          do {
            *puVar6 = *puVar8;
            puVar8 = puVar8 + lVar15;
            iVar7 = iVar7 + -1;
            puVar6 = puVar6 + 1;
          } while (iVar7 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar3);
    }
    uVar13 = uVar13 + (long)iVar5 * 4;
    lVar16 = lVar16 + (long)(iVar5 * iVar4) * 4;
    iVar17 = iVar17 - iVar5;
  }
  uVar1 = (int)uVar13 + iVar17 * 4;
  iVar18 = (int)(((ulong)uVar1 & 0x3f) >> 2);
  iVar7 = iVar17;
  if (iVar18 <= iVar17) {
    iVar7 = iVar18;
  }
  iVar18 = 0;
  if ((uVar1 & 0x3f) != 0) {
    iVar18 = iVar7;
  }
  uVar1 = iVar17 - iVar18;
  if (0 < (int)uVar1) {
    uVar19 = 0;
    puVar20 = (undefined4 *)(lVar16 + uVar3 * 4 + -4);
    uVar9 = uVar13;
    do {
      if (0 < (int)uVar2) {
        uVar10 = 0;
        puVar8 = puVar20;
        uVar11 = uVar9;
        do {
          lVar14 = 0;
          puVar6 = puVar8;
          do {
            *(undefined4 *)(uVar11 + lVar14) = *puVar6;
            lVar14 = lVar14 + 4;
            puVar6 = puVar6 + lVar15;
          } while ((int)lVar14 != 0x40);
          uVar10 = uVar10 + 1;
          uVar11 = uVar11 + lVar12 * 4;
          puVar8 = puVar8 + -1;
        } while (uVar10 != uVar3);
      }
      uVar19 = uVar19 + 0x10;
      uVar9 = uVar9 + 0x40;
      puVar20 = puVar20 + lVar15 * 0x10;
    } while (uVar19 < uVar1);
  }
  if ((iVar18 != 0) && (0 < (int)uVar2)) {
    uVar19 = 0;
    puVar20 = (undefined4 *)(uVar3 * 4 + (long)(int)(uVar1 * iVar4) * 4 + lVar16);
    do {
      puVar20 = puVar20 + -1;
      if (0 < iVar18) {
        puVar6 = (undefined4 *)(uVar13 + (long)(int)uVar1 * 4 + uVar19 * lVar12 * 4);
        puVar8 = puVar20;
        iVar17 = iVar18;
        do {
          *puVar6 = *puVar8;
          puVar8 = puVar8 + lVar15;
          iVar17 = iVar17 + -1;
          puVar6 = puVar6 + 1;
        } while (iVar17 != 0);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar3);
  }
  return;
}



/* Entry: 1097b41d4; end: 1097b4407;  */

void FUN_1097b41d4(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  lVar14 = *(long *)(param_2 + 8);
  uVar16 = *(uint *)(param_2 + 0x38);
  uVar1 = *(uint *)(param_2 + 0x3c);
  uVar2 = (ulong)uVar1;
  iVar18 = *(int *)(*(long *)(param_2 + 0x18) + 0xb8);
  lVar12 = (long)iVar18;
  uVar13 = *(long *)(*(long *)(param_2 + 0x18) + 0xa8) +
           (long)(iVar18 * *(int *)(param_2 + 0x34)) * 4 + (long)*(int *)(param_2 + 0x30) * 4;
  iVar18 = *(int *)(param_2 + 0x24) + (*(int *)(*(long *)(lVar14 + 0x38) + 8) + 0x7fff >> 0x10);
  lVar6 = *(long *)(lVar14 + 0xa8);
  iVar3 = *(int *)(lVar14 + 0xb8);
  lVar15 = (long)iVar3;
  iVar4 = ((*(int *)(*(long *)(lVar14 + 0x38) + 0x14) + 0x7fff >> 0x10) -
          (uVar16 + *(int *)(param_2 + 0x20))) * iVar3;
  if ((uVar13 & 0x3f) != 0) {
    uVar5 = 0x10 - (int)((uVar13 & 0x3f) >> 2);
    if ((int)uVar16 <= (int)uVar5) {
      uVar5 = uVar16;
    }
    if (0 < (int)uVar1) {
      uVar21 = 0;
      puVar7 = (undefined4 *)
               (lVar6 + (long)iVar4 * 4 + (long)(int)((uVar16 - uVar5) * iVar3) * 4 +
                        (long)(int)((uVar5 - 1) * iVar3) * 4 + (long)iVar18 * 4);
      do {
        if (0 < (int)uVar16) {
          puVar8 = (undefined4 *)(uVar13 + uVar21 * lVar12 * 4);
          puVar9 = puVar7;
          uVar17 = uVar5;
          do {
            *puVar8 = *puVar9;
            puVar9 = puVar9 + -lVar15;
            uVar17 = uVar17 - 1;
            puVar8 = puVar8 + 1;
          } while (uVar17 != 0);
        }
        uVar21 = uVar21 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar21 != uVar2);
    }
    uVar13 = uVar13 + (long)(int)uVar5 * 4;
    uVar16 = uVar16 - uVar5;
  }
  lVar6 = lVar6 + (long)iVar4 * 4 + (long)iVar18 * 4;
  uVar5 = (int)uVar13 + uVar16 * 4;
  uVar21 = (ulong)uVar5 & 0x3f;
  if ((uVar5 & 0x3f) != 0) {
    uVar17 = (uint)(uVar21 >> 2);
    uVar5 = uVar16;
    if ((int)uVar17 <= (int)uVar16) {
      uVar5 = uVar17;
    }
    uVar21 = (ulong)uVar5;
    uVar16 = uVar16 - uVar5;
    lVar6 = lVar6 + (long)(int)(uVar5 * iVar3) * 4;
  }
  if (0 < (int)uVar16) {
    uVar19 = 0;
    iVar18 = iVar3 * (uVar16 - 0x10);
    uVar20 = uVar13;
    do {
      if (0 < (int)uVar1) {
        uVar10 = 0;
        puVar7 = (undefined4 *)(lVar6 + (long)(iVar3 * 0xf) * 4 + (long)iVar18 * 4);
        uVar11 = uVar20;
        do {
          lVar14 = 0;
          puVar9 = puVar7;
          do {
            *(undefined4 *)(uVar11 + lVar14) = *puVar9;
            lVar14 = lVar14 + 4;
            puVar9 = puVar9 + -lVar15;
          } while ((int)lVar14 != 0x40);
          uVar10 = uVar10 + 1;
          uVar11 = uVar11 + lVar12 * 4;
          puVar7 = puVar7 + 1;
        } while (uVar10 != uVar2);
      }
      uVar19 = uVar19 + 0x10;
      uVar20 = uVar20 + 0x40;
      iVar18 = iVar18 + iVar3 * -0x10;
    } while (uVar19 < uVar16);
  }
  iVar18 = (int)uVar21;
  if ((iVar18 != 0) && (0 < (int)uVar1)) {
    uVar19 = 0;
    puVar7 = (undefined4 *)(lVar6 + (long)(iVar18 * iVar3) * -4 + (long)((iVar18 + -1) * iVar3) * 4)
    ;
    do {
      if (0 < iVar18) {
        puVar8 = (undefined4 *)(uVar13 + (long)(int)uVar16 * 4 + uVar19 * lVar12 * 4);
        uVar20 = uVar21;
        puVar9 = puVar7;
        do {
          *puVar8 = *puVar9;
          puVar9 = puVar9 + -lVar15;
          uVar1 = (int)uVar20 - 1;
          uVar20 = (ulong)uVar1;
          puVar8 = puVar8 + 1;
        } while (uVar1 != 0);
      }
      uVar19 = uVar19 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar19 != uVar2);
  }
  return;
}



/* Entry: 1097b4408; end: 1097b4627;  */

void FUN_1097b4408(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined2 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  undefined2 *puVar22;
  
  lVar16 = *(long *)(param_2 + 8);
  iVar19 = *(int *)(param_2 + 0x38);
  uVar2 = *(uint *)(param_2 + 0x3c);
  uVar3 = (ulong)uVar2;
  uVar4 = *(uint *)(*(long *)(param_2 + 0x18) + 0xb8);
  uVar6 = uVar4 * 2;
  uVar15 = *(long *)(*(long *)(param_2 + 0x18) + 0xa8) +
           (long)(int)(uVar6 * *(int *)(param_2 + 0x34)) * 2 + (long)*(int *)(param_2 + 0x30) * 2;
  iVar20 = (*(int *)(*(long *)(lVar16 + 0x38) + 8) + 0x7fff >> 0x10) -
           (uVar2 + *(int *)(param_2 + 0x24));
  uVar5 = *(uint *)(lVar16 + 0xb8);
  uVar7 = uVar5 * 2;
  uVar17 = (ulong)uVar7;
  iVar10 = uVar7 * (*(int *)(param_2 + 0x20) +
                   (*(int *)(*(long *)(lVar16 + 0x38) + 0x14) + 0x7fff >> 0x10));
  lVar18 = *(long *)(lVar16 + 0xa8) + (long)iVar10 * 2 + (long)iVar20 * 2;
  if ((uVar15 & 0x3f) != 0) {
    iVar8 = 0x20 - (int)((uVar15 & 0x3f) >> 1);
    if (iVar19 <= iVar8) {
      iVar8 = iVar19;
    }
    if (0 < (int)uVar2) {
      uVar21 = 0;
      puVar22 = (undefined2 *)
                ((long)iVar10 * 2 + (long)iVar20 * 2 + uVar3 * 2 + *(long *)(lVar16 + 0xa8));
      do {
        puVar22 = puVar22 + -1;
        if (0 < iVar19) {
          puVar9 = (undefined2 *)(uVar15 + uVar21 * (long)(int)uVar6 * 2);
          puVar12 = puVar22;
          iVar10 = iVar8;
          do {
            *puVar9 = *puVar12;
            puVar12 = (undefined2 *)
                      ((long)puVar12 +
                      (-(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 | uVar17 << 1));
            iVar10 = iVar10 + -1;
            puVar9 = puVar9 + 1;
          } while (iVar10 != 0);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar3);
    }
    uVar15 = uVar15 + (long)iVar8 * 2;
    lVar18 = lVar18 + (long)(int)(iVar8 * uVar7) * 2;
    iVar19 = iVar19 - iVar8;
  }
  uVar1 = (int)uVar15 + iVar19 * 2;
  iVar20 = (int)(((ulong)uVar1 & 0x3f) >> 1);
  iVar10 = iVar19;
  if (iVar20 <= iVar19) {
    iVar10 = iVar20;
  }
  iVar20 = 0;
  if ((uVar1 & 0x3f) != 0) {
    iVar20 = iVar10;
  }
  uVar1 = iVar19 - iVar20;
  if (0 < (int)uVar1) {
    uVar21 = 0;
    puVar22 = (undefined2 *)(lVar18 + uVar3 * 2 + -2);
    uVar11 = uVar15;
    do {
      if (0 < (int)uVar2) {
        uVar13 = 0;
        puVar12 = puVar22;
        uVar14 = uVar11;
        do {
          lVar16 = 0;
          puVar9 = puVar12;
          do {
            *(undefined2 *)(uVar14 + lVar16) = *puVar9;
            lVar16 = lVar16 + 2;
            puVar9 = (undefined2 *)
                     ((long)puVar9 +
                     (-(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 | uVar17 << 1));
          } while ((int)lVar16 != 0x40);
          uVar13 = uVar13 + 1;
          uVar14 = uVar14 + (-(ulong)((uVar4 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                            (ulong)uVar6 << 1);
          puVar12 = puVar12 + -1;
        } while (uVar13 != uVar3);
      }
      uVar21 = uVar21 + 0x20;
      uVar11 = uVar11 + 0x40;
      puVar22 = (undefined2 *)
                ((long)puVar22 +
                (-(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xffffffc000000000 | uVar17 << 6));
    } while (uVar21 < uVar1);
  }
  if ((iVar20 != 0) && (0 < (int)uVar2)) {
    uVar21 = 0;
    puVar22 = (undefined2 *)(uVar3 * 2 + (long)(int)(uVar1 * uVar7) * 2 + lVar18);
    do {
      puVar22 = puVar22 + -1;
      if (0 < iVar20) {
        puVar9 = (undefined2 *)(uVar15 + (long)(int)uVar1 * 2 + uVar21 * (long)(int)uVar6 * 2);
        puVar12 = puVar22;
        iVar19 = iVar20;
        do {
          *puVar9 = *puVar12;
          puVar12 = (undefined2 *)
                    ((long)puVar12 +
                    (-(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 | uVar17 << 1));
          iVar19 = iVar19 + -1;
          puVar9 = puVar9 + 1;
        } while (iVar19 != 0);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar3);
  }
  return;
}



/* Entry: 1097b4628; end: 1097b486f;  */

void FUN_1097b4628(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  ulong uVar13;
  undefined2 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  
  lVar17 = *(long *)(param_2 + 8);
  uVar18 = *(uint *)(param_2 + 0x38);
  uVar1 = *(uint *)(param_2 + 0x3c);
  uVar2 = (ulong)uVar1;
  uVar3 = *(uint *)(*(long *)(param_2 + 0x18) + 0xb8);
  uVar5 = uVar3 * 2;
  uVar16 = *(long *)(*(long *)(param_2 + 0x18) + 0xa8) +
           (long)(int)(uVar5 * *(int *)(param_2 + 0x34)) * 2 + (long)*(int *)(param_2 + 0x30) * 2;
  iVar20 = *(int *)(param_2 + 0x24) + (*(int *)(*(long *)(lVar17 + 0x38) + 8) + 0x7fff >> 0x10);
  lVar10 = *(long *)(lVar17 + 0xa8);
  iVar4 = *(int *)(lVar17 + 0xb8);
  iVar6 = iVar4 * 2;
  iVar7 = iVar6 * ((*(int *)(*(long *)(lVar17 + 0x38) + 0x14) + 0x7fff >> 0x10) -
                  (uVar18 + *(int *)(param_2 + 0x20)));
  if ((uVar16 & 0x3f) != 0) {
    uVar8 = 0x20 - (int)((uVar16 & 0x3f) >> 1);
    if ((int)uVar18 <= (int)uVar8) {
      uVar8 = uVar18;
    }
    if (0 < (int)uVar1) {
      uVar9 = 0;
      puVar11 = (undefined2 *)
                (lVar10 + (long)iVar7 * 2 + (long)(int)((uVar18 - uVar8) * iVar6) * 2 +
                          (long)(int)((uVar8 - 1) * iVar6) * 2 + (long)iVar20 * 2);
      do {
        if (0 < (int)uVar18) {
          puVar12 = (undefined2 *)(uVar16 + uVar9 * (long)(int)uVar5 * 2);
          puVar14 = puVar11;
          uVar19 = uVar8;
          do {
            *puVar12 = *puVar14;
            puVar14 = puVar14 + -(long)iVar6;
            uVar19 = uVar19 - 1;
            puVar12 = puVar12 + 1;
          } while (uVar19 != 0);
        }
        uVar9 = uVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar9 != uVar2);
    }
    uVar16 = uVar16 + (long)(int)uVar8 * 2;
    uVar18 = uVar18 - uVar8;
  }
  lVar10 = lVar10 + (long)iVar7 * 2 + (long)iVar20 * 2;
  uVar8 = (int)uVar16 + uVar18 * 2;
  uVar9 = (ulong)uVar8 & 0x3f;
  if ((uVar8 & 0x3f) != 0) {
    uVar19 = (uint)(uVar9 >> 1);
    uVar8 = uVar18;
    if ((int)uVar19 <= (int)uVar18) {
      uVar8 = uVar19;
    }
    uVar9 = (ulong)uVar8;
    uVar18 = uVar18 - uVar8;
    lVar10 = lVar10 + (long)(int)(uVar8 * iVar6) * 2;
  }
  if (0 < (int)uVar18) {
    uVar21 = 0;
    iVar20 = iVar4 * (uVar18 - 0x20) * 2;
    uVar22 = uVar16;
    do {
      if (0 < (int)uVar1) {
        uVar13 = 0;
        puVar11 = (undefined2 *)(lVar10 + (long)(iVar4 * 0x3e) * 2 + (long)iVar20 * 2);
        uVar15 = uVar22;
        do {
          lVar17 = 0;
          puVar14 = puVar11;
          do {
            *(undefined2 *)(uVar15 + lVar17) = *puVar14;
            lVar17 = lVar17 + 2;
            puVar14 = puVar14 + -(long)iVar6;
          } while ((int)lVar17 != 0x40);
          uVar13 = uVar13 + 1;
          uVar15 = uVar15 + (-(ulong)((uVar3 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                            (ulong)uVar5 << 1);
          puVar11 = puVar11 + 1;
        } while (uVar13 != uVar2);
      }
      uVar21 = uVar21 + 0x20;
      uVar22 = uVar22 + 0x40;
      iVar20 = iVar20 + iVar4 * -0x40;
    } while (uVar21 < uVar18);
  }
  iVar20 = (int)uVar9;
  if ((iVar20 != 0) && (0 < (int)uVar1)) {
    uVar21 = 0;
    puVar11 = (undefined2 *)
              (lVar10 + (long)(iVar20 * iVar6) * -2 + (long)((iVar20 + -1) * iVar6) * 2);
    do {
      if (0 < iVar20) {
        puVar12 = (undefined2 *)(uVar16 + (long)(int)uVar18 * 2 + uVar21 * (long)(int)uVar5 * 2);
        uVar22 = uVar9;
        puVar14 = puVar11;
        do {
          *puVar12 = *puVar14;
          puVar14 = puVar14 + -(long)iVar6;
          uVar1 = (int)uVar22 - 1;
          uVar22 = (ulong)uVar1;
          puVar12 = puVar12 + 1;
        } while (uVar1 != 0);
      }
      uVar21 = uVar21 + 1;
      puVar11 = puVar11 + 1;
    } while (uVar21 != uVar2);
  }
  return;
}



/* Entry: 1097b4870; end: 1097b4c4b;  */

void FUN_1097b4870(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  
  lVar13 = *(long *)(param_2 + 8);
  uVar15 = *(uint *)(param_2 + 0x38);
  uVar1 = *(uint *)(param_2 + 0x3c);
  uVar2 = (ulong)uVar1;
  iVar3 = *(int *)(*(long *)(param_2 + 0x18) + 0xb8) << 2;
  uVar11 = *(long *)(*(long *)(param_2 + 0x18) + 0xa8) +
           (long)*(int *)(param_2 + 0x34) * (long)iVar3 + (long)*(int *)(param_2 + 0x30);
  lVar14 = (long)*(int *)(lVar13 + 0xb8) * 4;
  lVar13 = *(long *)(lVar13 + 0xa8) +
           lVar14 * ((long)*(int *)(param_2 + 0x20) +
                    (long)(*(int *)(*(long *)(lVar13 + 0x38) + 0x14) + 0x7fff >> 0x10)) +
           (long)(int)((*(int *)(*(long *)(lVar13 + 0x38) + 8) + 0x7fff >> 0x10) -
                      (uVar1 + *(int *)(param_2 + 0x24)));
  iVar12 = (int)lVar14;
  if ((uVar11 & 0x3f) != 0) {
    uVar4 = 0x40 - (int)(uVar11 & 0x3f);
    if ((int)uVar15 <= (int)uVar4) {
      uVar4 = uVar15;
    }
    if (0 < (int)uVar1) {
      uVar17 = 0;
      do {
        if (0 < (int)uVar15) {
          puVar7 = (undefined1 *)(lVar13 + uVar2 + ~uVar17);
          puVar5 = (undefined1 *)(uVar11 + uVar17 * (long)iVar3);
          uVar8 = uVar4;
          do {
            *puVar5 = *puVar7;
            puVar7 = puVar7 + iVar12;
            uVar8 = uVar8 - 1;
            puVar5 = puVar5 + 1;
          } while (uVar8 != 0);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar2);
    }
    uVar11 = uVar11 + (long)(int)uVar4;
    lVar13 = lVar13 + (long)(int)uVar4 * (long)iVar12;
    uVar15 = uVar15 - uVar4;
  }
  uVar4 = (int)uVar11 + uVar15;
  uVar16 = uVar4 & 0x3f;
  uVar8 = uVar15;
  if ((int)uVar16 <= (int)uVar15) {
    uVar8 = uVar16;
  }
  uVar16 = 0;
  if ((uVar4 & 0x3f) != 0) {
    uVar16 = uVar8;
  }
  uVar17 = (long)(int)uVar15 - (long)(int)uVar16;
  if (0 < (int)uVar17) {
    uVar18 = 0;
    uVar6 = uVar11;
    do {
      if (0 < (int)uVar1) {
        uVar9 = 0;
        uVar10 = uVar6;
        do {
          lVar14 = 0;
          puVar7 = (undefined1 *)(lVar13 + uVar2 + uVar18 * (long)iVar12 + ~uVar9);
          do {
            *(undefined1 *)(uVar10 + lVar14) = *puVar7;
            puVar7 = puVar7 + iVar12;
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 != 0x40);
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 + (long)iVar3;
        } while (uVar9 != uVar2);
      }
      uVar18 = uVar18 + 0x40;
      uVar6 = uVar6 + 0x40;
    } while (uVar18 < (uVar17 & 0xffffffff));
  }
  if ((uVar16 != 0) && (0 < (int)uVar1)) {
    uVar18 = 0;
    do {
      if (0 < (int)uVar16) {
        puVar7 = (undefined1 *)(lVar13 + (long)(int)uVar17 * (long)iVar12 + uVar2 + ~uVar18);
        puVar5 = (undefined1 *)(uVar11 + uVar17 + uVar18 * (long)iVar3);
        uVar15 = uVar16;
        do {
          *puVar5 = *puVar7;
          puVar7 = puVar7 + iVar12;
          uVar15 = uVar15 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar15 != 0);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar2);
  }
  return;
}



/* Entry: 1097b4c4c; end: 1097b50cf;  */

void FUN_1097b4c4c(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  uint *puVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined2 *puVar26;
  undefined1 *puVar27;
  undefined4 *puVar28;
  undefined2 *puVar29;
  undefined1 *puVar30;
  ulong uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long alStack_288 [3];
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  uint uStack_1f8;
  undefined8 uStack_1f0;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 *puStack_1e0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  long *plStack_178;
  undefined4 auStack_170 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2[1];
  uVar5 = *(uint *)(param_2 + 4);
  uVar33 = *(uint *)((long)param_2 + 0x24);
  iVar6 = *(int *)(param_2 + 7);
  iVar32 = *(int *)((long)param_2 + 0x3c);
  uStack_2c8 = param_2[3];
  uStack_2d0 = param_2[2];
  uStack_2b8 = param_2[5];
  uStack_2c0 = param_2[4];
  uStack_2a8 = param_2[7];
  uStack_2b0 = param_2[6];
  uStack_298 = param_2[9];
  uStack_2a0 = param_2[8];
  plStack_2d8 = (long *)param_2[1];
  uStack_2e0 = *param_2;
  if (param_2[2] == 0) {
    uVar18 = 0;
    uVar19 = 0x2000;
  }
  else {
    uVar18 = *(undefined4 *)(param_2[2] + 0x8c);
    uVar19 = *(undefined4 *)((long)param_2 + 0x44);
  }
  plVar16 = (long *)*param_1;
  plStack_178 = param_1;
  FUN_1097be5b0(plVar16,*(undefined4 *)param_2,*(undefined4 *)(lVar7 + 0x8c),
                *(uint *)(param_2 + 8) & 0xff7f7fe7 | 0x800000,uVar18,uVar19,
                *(undefined4 *)(param_2[3] + 0x8c),*(undefined4 *)(param_2 + 9),&plStack_178,
                &pcStack_180);
  uVar8 = *(uint *)(lVar7 + 0x90);
  uVar13 = (uVar8 >> 0x18) << (ulong)(uVar8 >> 0x16 & 3);
  iVar34 = *(int *)(lVar7 + 0xa0);
  if (iVar34 < 0x20) {
    bVar1 = true;
    if ((0x20 < uVar13) || ((1L << ((ulong)uVar13 & 0x3f) & 0x100010100U) == 0)) goto LAB_1097b4d60;
    if (*(long *)(lVar7 + 0x98) == 0) {
      iVar14 = 0;
      if (iVar34 != 0) {
        iVar14 = (int)uVar5 / iVar34;
      }
      iVar20 = 0;
      if (iVar34 != 0) {
        iVar20 = (int)~uVar5 / iVar34;
      }
      iVar14 = uVar5 - iVar14 * iVar34;
      if ((uVar5 & 0x80000000) != 0) {
        iVar14 = iVar34 + ~(~uVar5 - iVar20 * iVar34);
      }
      iVar9 = iVar34 * (uVar13 >> 3);
      iVar20 = 3 - iVar9;
      iVar21 = 0;
      do {
        iVar10 = iVar21 + iVar34;
        iVar20 = iVar20 + iVar9;
        if (0x1f < iVar21) break;
        bVar1 = iVar21 <= iVar14 + iVar6;
        iVar21 = iVar10;
      } while (bVar1);
      iStack_1d0 = iVar20 + 3;
      if (-1 < iVar20) {
        iStack_1d0 = iVar20;
      }
      alStack_288[1] = 0;
      alStack_288[2] = 0;
      puStack_270 = &UNK_10dffca88;
      iStack_1d0 = iStack_1d0 >> 2;
      uStack_250 = 0;
      uStack_248 = 0x300000000;
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_258 = 1;
      alStack_288[0] = 0x100000000;
      iVar34 = iVar10 - iVar34;
      uStack_1e4 = 1;
      puStack_1e0 = auStack_170;
      uStack_1d8 = 0;
      uStack_1c8 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_1cc = 0;
      uStack_1f0 = 0;
      pcStack_218 = FUN_109797e28;
      uStack_210 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      plVar16 = alStack_288;
      uStack_1f8 = uVar8;
      iStack_1e8 = iVar34;
      FUN_1097bde20();
      bVar1 = false;
      plStack_2d8 = alStack_288;
      goto LAB_1097b4d60;
    }
  }
  bVar1 = true;
LAB_1097b4d60:
  if (0 < iVar32) {
    iVar14 = 0;
    if (iVar34 != 0) {
      iVar14 = (int)~uVar5 / iVar34;
    }
    do {
      if ((int)uVar5 < 0) {
        iVar20 = iVar34 + ~(~uVar5 - iVar14 * iVar34);
      }
      else {
        iVar20 = 0;
        if (iVar34 != 0) {
          iVar20 = (int)uVar5 / iVar34;
        }
        iVar20 = uVar5 - iVar20 * iVar34;
      }
      iVar9 = *(int *)(lVar7 + 0xa4);
      if ((int)uVar33 < 0) {
        iVar21 = 0;
        if (iVar9 != 0) {
          iVar21 = (int)~uVar33 / iVar9;
        }
        iVar9 = iVar9 + ~(~uVar33 - iVar21 * iVar9);
      }
      else {
        iVar21 = 0;
        if (iVar9 != 0) {
          iVar21 = (int)uVar33 / iVar9;
        }
        iVar9 = uVar33 - iVar21 * iVar9;
      }
      iVar21 = iVar9;
      if (!bVar1) {
        if (uVar13 == 8) {
          if (0 < iVar34) {
            iVar21 = 0;
            lVar24 = *(long *)(lVar7 + 0xa8);
            iVar10 = *(int *)(lVar7 + 0xb8);
            uVar33 = *(uint *)(lVar7 + 0xa0);
            do {
              if (0 < (int)uVar33) {
                lVar3 = (long)iVar21;
                iVar21 = uVar33 + iVar21;
                puVar27 = (undefined1 *)((long)auStack_170 + lVar3);
                puVar30 = (undefined1 *)(lVar24 + iVar9 * iVar10 * 4);
                uVar31 = (ulong)uVar33;
                do {
                  *puVar27 = *puVar30;
                  uVar31 = uVar31 - 1;
                  puVar27 = puVar27 + 1;
                  puVar30 = puVar30 + 1;
                } while (uVar31 != 0);
              }
            } while (iVar21 < iVar34);
          }
        }
        else if (uVar13 == 0x10) {
          if (0 < iVar34) {
            iVar21 = 0;
            lVar24 = *(long *)(lVar7 + 0xa8);
            iVar10 = *(int *)(lVar7 + 0xb8);
            uVar33 = *(uint *)(lVar7 + 0xa0);
            do {
              if (0 < (int)uVar33) {
                lVar3 = (long)iVar21;
                iVar21 = uVar33 + iVar21;
                puVar26 = (undefined2 *)((long)auStack_170 + lVar3 * 2);
                puVar29 = (undefined2 *)(lVar24 + (long)(iVar9 * iVar10 * 2) * 2);
                uVar31 = (ulong)uVar33;
                do {
                  *puVar26 = *puVar29;
                  uVar31 = uVar31 - 1;
                  puVar26 = puVar26 + 1;
                  puVar29 = puVar29 + 1;
                } while (uVar31 != 0);
              }
            } while (iVar21 < iVar34);
          }
        }
        else if ((uVar13 == 0x20) && (0 < iVar34)) {
          iVar21 = 0;
          lVar24 = *(long *)(lVar7 + 0xa8);
          iVar10 = *(int *)(lVar7 + 0xb8);
          uVar33 = *(uint *)(lVar7 + 0xa0);
          do {
            if (0 < (int)uVar33) {
              lVar3 = (long)iVar21;
              iVar21 = uVar33 + iVar21;
              puVar25 = auStack_170 + lVar3;
              puVar28 = (undefined4 *)(lVar24 + (long)(iVar10 * iVar9) * 4);
              uVar31 = (ulong)uVar33;
              do {
                *puVar25 = *puVar28;
                uVar31 = uVar31 - 1;
                puVar25 = puVar25 + 1;
                puVar28 = puVar28 + 1;
              } while (uVar31 != 0);
            }
          } while (iVar21 < iVar34);
        }
        iVar21 = 0;
      }
      uStack_2c0 = CONCAT44(iVar21,(undefined4)uStack_2c0);
      iVar21 = iVar6;
      if (0 < iVar6) {
        do {
          iVar10 = iVar34 - iVar20;
          if (iVar21 <= iVar34 - iVar20) {
            iVar10 = iVar21;
          }
          uStack_2c0 = CONCAT44(uStack_2c0._4_4_,iVar20);
          uStack_2a8 = CONCAT44(1,iVar10);
          plVar16 = plStack_178;
          (*pcStack_180)(plStack_178,&uStack_2e0);
          iVar20 = 0;
          uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(int)uStack_2b8 + iVar10);
          uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(int)uStack_2b0 + iVar10);
          iVar15 = iVar21 - iVar10;
          bVar2 = iVar10 <= iVar21;
          iVar21 = iVar15;
        } while (iVar15 != 0 && bVar2);
      }
      uVar33 = iVar9 + 1;
      uStack_2b8 = CONCAT44(uStack_2b8._4_4_ + 1,*(undefined4 *)(param_2 + 5));
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_ + 1,*(undefined4 *)(param_2 + 6));
      bVar2 = 1 < iVar32;
      iVar32 = iVar32 + -1;
    } while (bVar2);
  }
  if (!bVar1) {
    plVar16 = alStack_288;
    FUN_1097bdccc();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar33 = *(uint *)(plVar16 + 3);
  puVar17 = (uint *)plVar16[1];
  puVar22 = (uint *)plVar16[9];
  plVar16[9] = (long)puVar22 + (long)(int)plVar16[10];
  if (0 < (int)uVar33 && ((ulong)puVar22 & 3) != 0) {
    uVar12 = (ushort)*puVar22;
    *puVar17 = (uVar12 & 0xe000) << 3 | (uint)(uVar12 >> 0xb) << 0x13 |
               uVar12 >> 2 & 7 | (uVar12 & 0x1f) << 3 | uVar12 >> 1 & 0x300 |
               (uVar12 >> 5 & 0x3f) << 10 | 0xff000000;
    puVar17 = puVar17 + 1;
    puVar22 = (uint *)((long)puVar22 + 2);
    uVar33 = uVar33 - 1;
  }
  puVar4 = puVar17;
  puVar23 = puVar22;
  uVar5 = uVar33;
  if (1 < (int)uVar33) {
    do {
      puVar23 = puVar22 + 1;
      uVar11 = *puVar22;
      uVar5 = uVar33 - 2;
      uVar13 = uVar11 >> 8 & 0xf800f8;
      uVar8 = uVar11 >> 3 & 0xfc00fc;
      uVar13 = uVar13 | uVar13 >> 5;
      uVar11 = (uVar11 & 0x1f001f) << 3 | (uVar11 & 0x1f001f) >> 2;
      uVar8 = uVar8 | uVar8 >> 6;
      puVar4 = puVar17 + 2;
      *puVar17 = uVar13 << 0x10 | (uVar8 & 0xff) << 8 | uVar11 & 0xff | 0xff000000;
      puVar17[1] = uVar13 & 0xff0000 | uVar11 >> 0x10 | uVar8 >> 8 & 0xff00 | 0xff000000;
      bVar1 = 3 < uVar33;
      puVar17 = puVar4;
      puVar22 = puVar23;
      uVar33 = uVar5;
    } while (bVar1);
  }
  if ((uVar5 & 1) != 0) {
    uVar12 = (ushort)*puVar23;
    *puVar4 = (uVar12 & 0xe000) << 3 | (uint)(uVar12 >> 0xb) << 0x13 |
              uVar12 >> 2 & 7 | (uVar12 & 0x1f) << 3 | uVar12 >> 1 & 0x300 |
              (uVar12 >> 5 & 0x3f) << 10 | 0xff000000;
  }
  return;
}



/* Entry: 1097b50d0; end: 1097b52df;  */

void FUN_1097b50d0(long param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  
  uVar11 = *(uint *)(param_1 + 0x18);
  puVar8 = *(uint **)(param_1 + 8);
  puVar9 = *(uint **)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = (long)puVar9 + (long)*(int *)(param_1 + 0x50);
  if (0 < (int)uVar11 && ((ulong)puVar9 & 3) != 0) {
    uVar6 = (ushort)*puVar9;
    *puVar8 = (uVar6 & 0xe000) << 3 | (uint)(uVar6 >> 0xb) << 0x13 |
              uVar6 >> 2 & 7 | (uVar6 & 0x1f) << 3 | uVar6 >> 1 & 0x300 | (uVar6 >> 5 & 0x3f) << 10
              | 0xff000000;
    puVar8 = puVar8 + 1;
    puVar9 = (uint *)((long)puVar9 + 2);
    uVar11 = uVar11 - 1;
  }
  puVar2 = puVar8;
  puVar10 = puVar9;
  uVar7 = uVar11;
  if (1 < (int)uVar11) {
    do {
      puVar10 = puVar9 + 1;
      uVar5 = *puVar9;
      uVar7 = uVar11 - 2;
      uVar4 = uVar5 >> 8 & 0xf800f8;
      uVar3 = uVar5 >> 3 & 0xfc00fc;
      uVar4 = uVar4 | uVar4 >> 5;
      uVar5 = (uVar5 & 0x1f001f) << 3 | (uVar5 & 0x1f001f) >> 2;
      uVar3 = uVar3 | uVar3 >> 6;
      puVar2 = puVar8 + 2;
      *puVar8 = uVar4 << 0x10 | (uVar3 & 0xff) << 8 | uVar5 & 0xff | 0xff000000;
      puVar8[1] = uVar4 & 0xff0000 | uVar5 >> 0x10 | uVar3 >> 8 & 0xff00 | 0xff000000;
      bVar1 = 3 < uVar11;
      puVar8 = puVar2;
      puVar9 = puVar10;
      uVar11 = uVar7;
    } while (bVar1);
  }
  if ((uVar7 & 1) != 0) {
    uVar6 = (ushort)*puVar10;
    *puVar2 = (uVar6 & 0xe000) << 3 | (uint)(uVar6 >> 0xb) << 0x13 |
              uVar6 >> 2 & 7 | (uVar6 & 0x1f) << 3 | uVar6 >> 1 & 0x300 | (uVar6 >> 5 & 0x3f) << 10
              | 0xff000000;
  }
  return;
}



/* Entry: 1097b52e0; end: 1097b540f;  */

void FUN_1097b52e0(long *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uStack_30;
  undefined4 uStack_28;
  
  lVar4 = param_1[3];
  uStack_30 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_28 = 0x10000;
  uVar1 = *(undefined8 *)(*param_1 + 0x38);
  FUN_1097bf628(uVar1,&uStack_30);
  if ((int)uVar1 != 0) {
    puVar2 = (undefined4 *)((long)(int)lVar4 * 0x10 + 0x28);
    _malloc();
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = NEON_rev64(CONCAT44((int)(uStack_30 >> 0x20) + -0x8000,(int)uStack_30 + -0x8000),4);
      *(undefined8 *)(puVar2 + 8) = uVar1;
      *puVar2 = 0xffffffff;
      *(undefined4 **)(puVar2 + 2) = puVar2 + 10;
      puVar2[4] = 0xffffffff;
      *(undefined4 **)(puVar2 + 6) = puVar2 + 10 + (long)(int)lVar4 * 2;
      param_1[5] = (long)FUN_1097bc498;
      pcVar3 = FUN_1097bc614;
      lVar4 = 0x40;
      lVar5 = 0x38;
      goto LAB_1097b53f8;
    }
  }
  if (iRam000000011382add8 < 10) {
    _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f5808c0);
    puVar2 = (undefined4 *)0x0;
    iRam000000011382add8 = iRam000000011382add8 + 1;
    pcVar3 = (code *)0x1097c2bf0;
    lVar4 = 0x38;
    lVar5 = 0x28;
  }
  else {
    puVar2 = (undefined4 *)0x0;
    lVar4 = 0x38;
    lVar5 = 0x28;
    pcVar3 = (code *)0x1097c2bf0;
  }
LAB_1097b53f8:
  *(code **)((long)param_1 + lVar5) = pcVar3;
  *(undefined4 **)((long)param_1 + lVar4) = puVar2;
  return;
}



/* Entry: 1097b5410; end: 1097b59b7;  */

uint * FUN_1097b5410(long *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  bool bVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  int *piVar24;
  int *piVar25;
  uint uVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 *puVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  ulong unaff_x19;
  ulong unaff_x20;
  int *piVar35;
  uint *puVar36;
  ulong unaff_x23;
  ulong uVar37;
  undefined8 *puVar38;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 *puStack_f0;
  ulong uStack_e8;
  uint *puStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  uint *puStack_b0;
  int *piStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  uint uStack_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = *param_1;
  puVar22 = (uint *)param_1[1];
  uStack_70 = 0;
  iStack_84 = 1;
  lVar19 = param_1[3];
  puVar38 = (undefined8 *)(long)(int)lVar19;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_80 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_78 = 0x10000;
  puVar36 = *(uint **)(lStack_a0 + 0x38);
  piVar25 = (int *)&uStack_80;
  puVar21 = puVar36;
  piStack_a8 = param_2;
  FUN_1097bf628();
  if ((int)puVar21 == 0) goto LAB_1097b5978;
  uVar11 = *puVar36;
  uVar28 = (int)uStack_80 - 0x8000;
  iVar2 = (int)(uStack_80._4_4_ - 0x8000U) >> 0x10;
  if (iVar2 < 0) {
    uVar29 = 0;
    uVar30 = 0;
    if (iVar2 == -1) {
      iVar33 = *(int *)(lStack_a0 + 0xa4);
      goto LAB_1097b5510;
    }
    puVar31 = &uStack_70;
LAB_1097b5544:
    uVar34 = 0;
    uVar32 = 0;
    puVar27 = &uStack_70;
  }
  else {
    iVar33 = *(int *)(lStack_a0 + 0xa4);
    if (iVar2 < iVar33) {
      puVar31 = (undefined8 *)
                (*(long *)(lStack_a0 + 0xa8) + (long)(*(int *)(lStack_a0 + 0xb8) * iVar2) * 4);
      uVar29 = uVar28;
      uVar30 = uVar11;
    }
    else {
LAB_1097b5510:
      uVar29 = 0;
      uVar30 = 0;
      puVar31 = &uStack_70;
    }
    if (iVar33 <= iVar2 + 1) goto LAB_1097b5544;
    puVar27 = (undefined8 *)
              (*(long *)(lStack_a0 + 0xa8) + (long)(*(int *)(lStack_a0 + 0xb8) * (iVar2 + 1)) * 4);
    uVar34 = uVar28;
    uVar32 = uVar11;
  }
  puVar1 = &uStack_70;
  if ((puVar31 == puVar1) && (puVar27 == puVar1)) {
    piVar25 = (int *)((long)puVar38 << 2);
    _bzero();
    puVar21 = puVar22;
    puVar22 = (uint *)param_1[1];
  }
  else {
    piVar24 = &iStack_84;
    if (piStack_a8 != (int *)0x0) {
      piVar24 = piStack_a8;
    }
    uVar26 = 0xff000000;
    uVar6 = 0;
    if (puVar27 != puVar1) {
      uVar6 = uVar26;
    }
    uVar5 = uVar26;
    if (puVar31 != puVar1) {
      uVar5 = uVar6;
    }
    uVar6 = 0;
    if (puVar31 != puVar1) {
      uVar6 = uVar26;
    }
    bVar20 = *(int *)(lStack_a0 + 0x90) != 0x20020888;
    if (bVar20) {
      uVar5 = 0;
    }
    piVar25 = (int *)(ulong)uVar5;
    if (bVar20) {
      uVar6 = 0;
    }
    puVar7 = puVar22 + (long)puVar38;
    puVar21 = puVar22;
    if ((0 < (int)lVar19) && ((int)uStack_80 < -0x8000)) {
      lVar19 = 0;
      puVar23 = puVar22;
      if (piStack_a8 != (int *)0x0) {
        lVar19 = 4;
      }
      do {
        puVar21 = puVar23 + 1;
        *puVar23 = 0;
        uVar28 = uVar28 + uVar11;
        uVar29 = uVar29 + uVar30;
        uVar34 = uVar34 + uVar32;
        piVar24 = (int *)((long)piVar24 + lVar19);
        if (puVar7 <= puVar21) break;
        puVar23 = puVar21;
      } while ((int)uVar28 < -0x10000);
    }
    uStack_88 = uStack_80._4_4_ - 0x8000U >> 9 & 0x7f;
    if ((puVar21 < puVar7) && ((int)uVar28 < 0)) {
      lVar19 = 0;
      puVar23 = puVar21;
      if (piStack_a8 != (int *)0x0) {
        lVar19 = 4;
      }
      do {
        uVar26 = *(uint *)((long)puVar31 + (long)((int)uVar29 >> 0x10) * 4 + 4);
        uVar12 = *(uint *)((long)puVar27 + (long)((int)uVar34 >> 0x10) * 4 + 4);
        uVar18 = uVar28 >> 9 & 0x7f;
        iVar33 = uVar18 * uStack_88 * 2;
        iVar2 = iVar33 * 2;
        iVar33 = uVar18 * 0x200 + iVar33 * -2;
        uVar14 = iVar2 * (uVar12 & 0xff00) + iVar33 * (uVar26 & 0xff00) & 0xff000000 |
                 iVar2 * (uVar12 & 0xff) + iVar33 * (uVar26 & 0xff);
        param_1 = (long *)(ulong)uVar14;
        uVar18 = iVar33 * (uVar26 >> 0x10 & 0xff) + (uVar12 >> 0x10 & 0xff) * iVar2;
        puVar36 = (uint *)(ulong)uVar18;
        uVar26 = iVar33 * ((uVar26 & 0xff000000 | uVar6) >> 0x10) +
                 ((uVar12 & 0xff000000 | uVar5) >> 0x10) * iVar2 & 0xff000000 | uVar18 & 0xff0000 |
                 uVar14 >> 0x10;
        puVar38 = (undefined8 *)(ulong)uVar26;
        puVar21 = puVar23 + 1;
        *puVar23 = uVar26;
        uVar28 = uVar28 + uVar11;
        uVar29 = uVar29 + uVar30;
        uVar34 = uVar34 + uVar32;
        piVar24 = (int *)((long)piVar24 + lVar19);
        if (puVar7 <= puVar21) break;
        puVar23 = puVar21;
      } while ((int)uVar28 < 0);
    }
    iVar2 = *(int *)(lStack_a0 + 0xa0) * 0x10000;
    if (puVar21 < puVar7 && (int)uVar28 < iVar2 + -0x10000) {
      lVar19 = 0;
      if (piStack_a8 != (int *)0x0) {
        lVar19 = 4;
      }
      do {
        uVar26 = 0;
        if (*piVar24 != 0) {
          puVar36 = (uint *)((long)puVar31 + (long)((int)uVar29 >> 0x10) * 4);
          uVar14 = *puVar36;
          uVar9 = puVar36[1];
          puVar36 = (uint *)((long)puVar27 + (long)((int)uVar34 >> 0x10) * 4);
          uVar8 = *puVar36;
          uVar10 = puVar36[1];
          uVar26 = uVar28 >> 9 & 0x7f;
          iVar33 = uVar26 * uStack_88 * 2;
          uVar13 = iVar33 * 2;
          unaff_x23 = (ulong)uVar13;
          iVar3 = uVar26 * 0x200 + iVar33 * -2;
          uVar17 = uStack_88 * 0x200 + iVar33 * -2;
          unaff_x19 = (ulong)uVar17;
          uVar12 = (uVar13 - (uStack_88 * 0x200 + uVar26 * 0x200)) + 0x10000;
          unaff_x20 = (ulong)uVar12;
          uVar26 = (uVar9 | uVar6) >> 0x10;
          puVar36 = (uint *)(ulong)((uVar8 | uVar5) >> 0x10);
          uVar18 = (uVar14 >> 0x10 & 0xff) * uVar12 + ((uVar9 & 0xff0000) >> 0x10) * iVar3 +
                   ((uVar8 & 0xff0000) >> 0x10) * uVar17 + (uVar10 >> 0x10 & 0xff) * uVar13 &
                   0xff0000 |
                   ((uVar14 & 0xff00) * uVar12 + (uVar9 & 0xff00) * iVar3 +
                    (uVar8 & 0xff00) * uVar17 + (uVar10 & 0xff00) * uVar13 & 0xff000000 |
                   (uVar14 & 0xff) * uVar12 + (uVar9 & 0xff) * iVar3 + (uVar8 & 0xff) * uVar17 +
                   (uVar10 & 0xff) * uVar13) >> 0x10;
          puVar38 = (undefined8 *)(ulong)uVar18;
          *puVar21 = uVar18 | ((uVar14 & 0xff000000 | uVar6) >> 0x10) * uVar12 +
                              ((uVar9 & 0xff000000 | uVar6) >> 0x10) * iVar3 +
                              ((uVar8 & 0xff000000 | uVar5) >> 0x10) * uVar17 +
                              ((uVar10 & 0xff000000 | uVar5) >> 0x10) * uVar13 & 0xff000000;
        }
        param_1 = (long *)(ulong)uVar26;
        puVar21 = puVar21 + 1;
        uVar28 = uVar28 + uVar11;
        uVar29 = uVar29 + uVar30;
        uVar34 = uVar34 + uVar32;
        piVar24 = (int *)((long)piVar24 + lVar19);
      } while ((puVar21 < puVar7) && ((int)uVar28 < iVar2 + -0x10000));
      iVar2 = *(int *)(lStack_a0 + 0xa0) << 0x10;
    }
    if ((puVar21 < puVar7) && ((int)uVar28 < iVar2)) {
      lVar19 = 0;
      if (piStack_a8 != (int *)0x0) {
        lVar19 = 4;
      }
      do {
        if (*piVar24 != 0) {
          uVar12 = *(uint *)((long)puVar31 + (long)((int)uVar29 >> 0x10) * 4);
          uVar18 = *(uint *)((long)puVar27 + (long)((int)uVar34 >> 0x10) * 4);
          uVar26 = uVar28 >> 9 & 0x7f;
          iVar33 = uVar26 * uStack_88 * 2;
          uVar14 = uStack_88 * 0x200 + iVar33 * -2;
          param_1 = (long *)(ulong)uVar14;
          uVar26 = iVar33 * 2 + (uVar26 + uStack_88) * -0x200 + 0x10000;
          unaff_x20 = (ulong)uVar26;
          unaff_x23 = (ulong)(uVar18 & 0xff);
          puVar36 = (uint *)(ulong)((uVar18 | uVar5) >> 0x10);
          uVar8 = (uVar18 & 0xff0000) >> 0x10;
          unaff_x19 = (ulong)uVar8;
          *puVar21 = (uVar12 >> 0x10 & 0xff) * uVar26 + uVar8 * uVar14 & 0xff0000 |
                     ((uVar12 & 0xff00) * uVar26 + (uVar18 & 0xff00) * uVar14 & 0xff000000 |
                     (uVar12 & 0xff) * uVar26 + (uVar18 & 0xff) * uVar14) >> 0x10 |
                     ((uVar12 & 0xff000000 | uVar6) >> 0x10) * uVar26 +
                     ((uVar18 & 0xff000000 | uVar5) >> 0x10) * uVar14 & 0xff000000;
        }
        puVar21 = puVar21 + 1;
        puVar38 = puVar31;
        if (puVar7 <= puVar21) break;
        uVar28 = uVar28 + uVar11;
        uVar29 = uVar29 + uVar30;
        uVar34 = uVar34 + uVar32;
        piVar24 = (int *)((long)piVar24 + lVar19);
      } while ((int)uVar28 < iVar2);
    }
    puStack_b0 = puVar22;
    puStack_98 = puVar27;
    puStack_90 = puVar31;
    if (puVar21 < puVar7) {
      if (puVar7 <= puVar21 + 1) {
        puVar7 = puVar21 + 1;
      }
      piVar25 = (int *)((((long)puVar21 - (long)puVar7 ^ 0xffffffffffffffffU) & 0xfffffffffffffffc)
                       + 4);
      _bzero();
    }
  }
LAB_1097b5978:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar22;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_1097b59b8;
  lVar19 = *(long *)puVar21;
  puVar22 = *(uint **)(puVar21 + 2);
  uVar28 = puVar21[6];
  uVar37 = (ulong)uVar28;
  puVar21[5] = puVar21[5] + 1;
  uStack_100 = CONCAT44((int)((ulong)*(undefined8 *)(puVar21 + 4) >> 0x20) << 0x10,
                        (int)*(undefined8 *)(puVar21 + 4) << 0x10) | 0x800000008000;
  uStack_f8 = 0x10000;
  piVar35 = *(int **)(lVar19 + 0x38);
  piVar24 = piVar35;
  puStack_f0 = puVar38;
  uStack_e8 = unaff_x23;
  puStack_e0 = puVar36;
  plStack_d8 = param_1;
  uStack_d0 = unaff_x20;
  uStack_c8 = unaff_x19;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_1097bf628(piVar35,&uStack_100);
  if (((int)piVar24 != 0) && (0 < (int)uVar28)) {
    iVar2 = *piVar35;
    iVar33 = piVar35[3];
    uStack_100._0_4_ = (int)uStack_100 + -1;
    uStack_100._4_4_ = uStack_100._4_4_ + -1;
    piVar24 = piVar25;
    puVar21 = puVar22;
    do {
      if ((piVar25 == (int *)0x0) || (*piVar24 != 0)) {
        iVar3 = (int)uStack_100 >> 0x10;
        iVar4 = uStack_100._4_4_ >> 0x10;
        iVar15 = *(int *)(lVar19 + 0xa0) + -1;
        iVar16 = iVar3;
        if (iVar15 <= iVar3) {
          iVar16 = iVar15;
        }
        iVar15 = 0;
        if (-1 < iVar3) {
          iVar15 = iVar16;
        }
        iVar16 = *(int *)(lVar19 + 0xa4) + -1;
        iVar3 = iVar4;
        if (iVar16 <= iVar4) {
          iVar3 = iVar16;
        }
        iVar16 = 0;
        if (-1 < iVar4) {
          iVar16 = iVar3;
        }
        *puVar21 = *(uint *)(*(long *)(lVar19 + 0xa8) + (long)(iVar16 * *(int *)(lVar19 + 0xb8)) * 4
                            + (long)iVar15 * 4);
      }
      puVar21 = puVar21 + 1;
      piVar24 = piVar24 + 1;
      uStack_100._0_4_ = (int)uStack_100 + iVar2;
      uStack_100._4_4_ = uStack_100._4_4_ + iVar33;
      uVar37 = uVar37 - 1;
    } while (uVar37 != 0);
  }
  return puVar22;
}



/* Entry: 1097b59b8; end: 1097b5ccf;  */

undefined4 * FUN_1097b59b8(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar4 = *param_1;
  puVar5 = (undefined4 *)param_1[1];
  uVar3 = *(uint *)(param_1 + 3);
  uVar13 = (ulong)uVar3;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar12 = *(int **)(lVar4 + 0x38);
  piVar10 = piVar12;
  FUN_1097bf628(piVar12,&uStack_50);
  if (((int)piVar10 != 0) && (0 < (int)uVar3)) {
    iVar6 = *piVar12;
    iVar7 = piVar12[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar10 = param_2;
    puVar11 = puVar5;
    do {
      if ((param_2 == (int *)0x0) || (*piVar10 != 0)) {
        iVar1 = (int)uStack_50 >> 0x10;
        iVar2 = uStack_50._4_4_ >> 0x10;
        iVar8 = *(int *)(lVar4 + 0xa0) + -1;
        iVar9 = iVar1;
        if (iVar8 <= iVar1) {
          iVar9 = iVar8;
        }
        iVar8 = 0;
        if (-1 < iVar1) {
          iVar8 = iVar9;
        }
        iVar9 = *(int *)(lVar4 + 0xa4) + -1;
        iVar1 = iVar2;
        if (iVar9 <= iVar2) {
          iVar1 = iVar9;
        }
        iVar9 = 0;
        if (-1 < iVar2) {
          iVar9 = iVar1;
        }
        *puVar11 = *(undefined4 *)
                    (*(long *)(lVar4 + 0xa8) + (long)(iVar9 * *(int *)(lVar4 + 0xb8)) * 4 +
                    (long)iVar8 * 4);
      }
      puVar11 = puVar11 + 1;
      piVar10 = piVar10 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar6;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar7;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return puVar5;
}



/* Entry: 1097b5cd0; end: 1097b5fb3;  */

long FUN_1097b5cd0(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  uint *puVar32;
  undefined8 uVar33;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar8 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar29 = *(uint **)(lVar10 + 0x48);
  uVar7 = *puVar29;
  uVar9 = puVar29[1];
  sVar14 = *(short *)((long)puVar29 + 10);
  sVar15 = *(short *)((long)puVar29 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar27 = *(int **)(lVar10 + 0x38);
  piVar20 = piVar27;
  FUN_1097bf628(piVar27,&uStack_70);
  if (((int)piVar20 != 0) && (0 < (int)uVar8)) {
    uVar22 = 0;
    iVar2 = (int)uVar7 >> 0x10;
    iVar3 = (int)uVar9 >> 0x10;
    uVar18 = 0x10 - (int)sVar14;
    iVar4 = (1 << (ulong)(uVar18 & 0x1f)) >> 1;
    uVar19 = 0x10 - (int)sVar15;
    iVar12 = *piVar27;
    iVar13 = piVar27[3];
    iVar5 = (1 << (ulong)(uVar19 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar22 * 4) != 0)) {
        if (iVar3 < 1) {
          uVar23 = 0;
          uVar24 = 0;
          uVar33 = 0;
        }
        else {
          iVar28 = 0;
          iVar26 = 0;
          uVar24 = (uint)uStack_70 & -1 << (ulong)(uVar18 & 0x1f);
          uVar23 = uStack_70._4_4_ & -1 << (ulong)(uVar19 & 0x1f);
          iVar6 = (int)(uVar24 + iVar4 + ((int)(0xfffe - (uVar7 & 0xffff0000)) >> 1)) >> 0x10;
          iVar31 = (int)(uVar23 + iVar5 + ((int)(0xfffe - (uVar9 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar3 + iVar31;
          uVar33 = 0;
          puVar32 = puVar29 + (long)(iVar2 << (ulong)((int)sVar14 & 0x1f)) +
                              (ulong)(((uVar23 + iVar5 & 0xffff) >> (ulong)(uVar19 & 0x1f)) * iVar3)
                              + 4;
          do {
            puVar25 = puVar29 + (long)(int)(((uVar24 + iVar4 & 0xffff) >> (ulong)(uVar18 & 0x1f)) *
                                           iVar2) + 4;
            iVar30 = iVar6;
            if (*puVar32 != 0 && 0 < iVar2) {
              do {
                if (*puVar25 != 0) {
                  iVar16 = *(int *)(lVar10 + 0xa0) + -1;
                  iVar21 = iVar30;
                  if (iVar16 <= iVar30) {
                    iVar21 = iVar16;
                  }
                  iVar16 = 0;
                  if (-1 < iVar30) {
                    iVar16 = iVar21;
                  }
                  iVar17 = *(int *)(lVar10 + 0xa4) + -1;
                  iVar21 = iVar31;
                  if (iVar17 <= iVar31) {
                    iVar21 = iVar17;
                  }
                  iVar17 = 0;
                  if (-1 < iVar31) {
                    iVar17 = iVar21;
                  }
                  uVar23 = *(uint *)(*(long *)(lVar10 + 0xa8) +
                                     (long)(iVar17 * *(int *)(lVar10 + 0xb8)) * 4 + (long)iVar16 * 4
                                    );
                  iVar21 = (int)((ulong)((long)(int)*puVar25 * (long)(int)*puVar32 + 0x8000) >> 0x10
                                );
                  iVar28 = iVar28 + (uVar23 >> 8 & 0xff) * iVar21;
                  iVar26 = iVar26 + (uVar23 & 0xff) * iVar21;
                  uVar33 = CONCAT44((int)((ulong)uVar33 >> 0x20) + (uVar23 >> 0x18) * iVar21,
                                    (int)uVar33 + (uVar23 >> 0x10 & 0xff) * iVar21);
                }
                iVar30 = iVar30 + 1;
                puVar25 = puVar25 + 1;
              } while (iVar30 < iVar2 + iVar6);
            }
            iVar31 = iVar31 + 1;
            puVar32 = puVar32 + 1;
          } while (iVar31 < iVar1);
          uVar33 = CONCAT44((int)((ulong)uVar33 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar33 + 0x8000 >> 0x10);
          uVar24 = iVar28 + 0x8000 >> 0x10;
          uVar23 = iVar26 + 0x8000 >> 0x10;
        }
        uVar33 = NEON_smax(uVar33,0,4);
        uVar24 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar24) {
          uVar24 = 0xff;
        }
        uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar23) {
          uVar23 = 0xff;
        }
        uVar33 = NEON_smin(uVar33,0xff000000ff,4);
        uVar33 = NEON_ushl(uVar33,0x1800000010,4);
        *(uint *)(lVar11 + uVar22 * 4) =
             uVar23 | uVar24 << 8 | (uint)uVar33 | (uint)((ulong)uVar33 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar12;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar13;
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar8);
  }
  return lVar11;
}



/* Entry: 1097b5fb4; end: 1097b62ff;  */

undefined4 * FUN_1097b5fb4(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar3 = *param_1;
  puVar4 = (undefined4 *)param_1[1];
  uVar2 = *(uint *)(param_1 + 3);
  uVar11 = (ulong)uVar2;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar10 = *(int **)(lVar3 + 0x38);
  piVar7 = piVar10;
  FUN_1097bf628(piVar10,&uStack_50);
  if (((int)piVar7 != 0) && (0 < (int)uVar2)) {
    iVar5 = *piVar10;
    iVar6 = piVar10[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar7 = param_2;
    puVar8 = puVar4;
    do {
      if ((param_2 == (int *)0x0) || (*piVar7 != 0)) {
        uVar9 = 0;
        iVar1 = uStack_50._4_4_ >> 0x10;
        if ((-1 < iVar1) &&
           (((iVar1 < *(int *)(lVar3 + 0xa4) && (uVar2 = (int)uStack_50 >> 0x10, -1 < (int)uVar2))
            && ((int)uVar2 < *(int *)(lVar3 + 0xa0))))) {
          uVar9 = *(undefined4 *)
                   (*(long *)(lVar3 + 0xa8) + (long)(*(int *)(lVar3 + 0xb8) * iVar1) * 4 +
                   (ulong)uVar2 * 4);
        }
        *puVar8 = uVar9;
      }
      puVar8 = puVar8 + 1;
      piVar7 = piVar7 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar5;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar6;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return puVar4;
}



/* Entry: 1097b6300; end: 1097b65db;  */

long FUN_1097b6300(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar8 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar26 = *(uint **)(lVar10 + 0x48);
  uVar7 = *puVar26;
  uVar9 = puVar26[1];
  sVar14 = *(short *)((long)puVar26 + 10);
  sVar15 = *(short *)((long)puVar26 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar24 = *(int **)(lVar10 + 0x38);
  piVar18 = piVar24;
  FUN_1097bf628(piVar24,&uStack_70);
  if (((int)piVar18 != 0) && (0 < (int)uVar8)) {
    uVar20 = 0;
    iVar3 = (int)uVar7 >> 0x10;
    iVar4 = (int)uVar9 >> 0x10;
    uVar16 = 0x10 - (int)sVar14;
    iVar5 = (1 << (ulong)(uVar16 & 0x1f)) >> 1;
    uVar17 = 0x10 - (int)sVar15;
    iVar12 = *piVar24;
    iVar13 = piVar24[3];
    iVar6 = (1 << (ulong)(uVar17 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar20 * 4) != 0)) {
        if (iVar4 < 1) {
          uVar21 = 0;
          uVar27 = 0;
          uVar31 = 0;
        }
        else {
          iVar25 = 0;
          iVar23 = 0;
          uVar19 = uStack_70._4_4_ & -1 << (ulong)(uVar17 & 0x1f);
          uVar27 = (int)(uVar19 + iVar6 + ((int)(0xfffe - (uVar9 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar4 + uVar27;
          uVar2 = (uint)uStack_70 & -1 << (ulong)(uVar16 & 0x1f);
          uVar21 = uVar2 + iVar5 + ((int)(0xfffe - (uVar7 & 0xffff0000)) >> 1);
          uVar31 = 0;
          puVar28 = puVar26 + (long)(iVar3 << (ulong)((int)sVar14 & 0x1f)) +
                              (ulong)(((uVar19 + iVar6 & 0xffff) >> (ulong)(uVar17 & 0x1f)) * iVar4)
                              + 4;
          do {
            puVar29 = puVar26 + (long)(int)(((uVar2 + iVar5 & 0xffff) >> (ulong)(uVar16 & 0x1f)) *
                                           iVar3) + 4;
            lVar30 = (long)((ulong)uVar21 << 0x20) >> 0x30;
            if (*puVar28 != 0 && 0 < iVar3) {
              do {
                if (*puVar29 != 0) {
                  if ((((int)(uVar27 | (uint)lVar30) < 0) || (*(int *)(lVar10 + 0xa0) <= lVar30)) ||
                     (*(int *)(lVar10 + 0xa4) <= (int)uVar27)) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = *(uint *)(*(long *)(lVar10 + 0xa8) +
                                       (long)(int)(uVar27 * *(int *)(lVar10 + 0xb8)) * 4 +
                                      lVar30 * 4);
                  }
                  iVar22 = (int)((ulong)((long)(int)*puVar29 * (long)(int)*puVar28 + 0x8000) >> 0x10
                                );
                  iVar25 = iVar25 + (uVar19 >> 8 & 0xff) * iVar22;
                  iVar23 = iVar23 + (uVar19 & 0xff) * iVar22;
                  uVar31 = CONCAT44((int)((ulong)uVar31 >> 0x20) + (uVar19 >> 0x18) * iVar22,
                                    (int)uVar31 + (uVar19 >> 0x10 & 0xff) * iVar22);
                }
                lVar30 = lVar30 + 1;
                puVar29 = puVar29 + 1;
              } while (lVar30 < iVar3 + ((int)uVar21 >> 0x10));
            }
            uVar27 = uVar27 + 1;
            puVar28 = puVar28 + 1;
          } while ((int)uVar27 < iVar1);
          uVar31 = CONCAT44((int)((ulong)uVar31 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar31 + 0x8000 >> 0x10);
          uVar27 = iVar25 + 0x8000 >> 0x10;
          uVar21 = iVar23 + 0x8000 >> 0x10;
        }
        uVar31 = NEON_smax(uVar31,0,4);
        uVar27 = uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar27) {
          uVar27 = 0xff;
        }
        uVar21 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar21) {
          uVar21 = 0xff;
        }
        uVar31 = NEON_smin(uVar31,0xff000000ff,4);
        uVar31 = NEON_ushl(uVar31,0x1800000010,4);
        *(uint *)(lVar11 + uVar20 * 4) =
             uVar21 | uVar27 << 8 | (uint)uVar31 | (uint)((ulong)uVar31 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar12;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar13;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar8);
  }
  return lVar11;
}



/* Entry: 1097b65dc; end: 1097b69d7;  */

undefined4 * FUN_1097b65dc(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar3 = *param_1;
  puVar4 = (undefined4 *)param_1[1];
  uVar12 = *(uint *)(param_1 + 3);
  uVar14 = (ulong)uVar12;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar13 = *(int **)(lVar3 + 0x38);
  piVar10 = piVar13;
  FUN_1097bf628(piVar13,&uStack_50);
  if (((int)piVar10 != 0) && (0 < (int)uVar12)) {
    iVar5 = *piVar13;
    iVar6 = piVar13[3];
    uStack_50._0_4_ = (int)uStack_50 + -1;
    uStack_50._4_4_ = uStack_50._4_4_ + -1;
    piVar10 = param_2;
    puVar11 = puVar4;
    do {
      if ((param_2 == (int *)0x0) || (*piVar10 != 0)) {
        uVar12 = (int)uStack_50 >> 0x10;
        iVar7 = *(int *)(lVar3 + 0xa0) * 2;
        if ((int)uVar12 < 0) {
          iVar8 = 0;
          if (iVar7 != 0) {
            iVar8 = (int)~uVar12 / iVar7;
          }
          uVar12 = iVar7 + ~(~uVar12 - iVar8 * iVar7);
        }
        else {
          iVar8 = 0;
          if (iVar7 != 0) {
            iVar8 = (int)uVar12 / iVar7;
          }
          uVar12 = uVar12 - iVar8 * iVar7;
        }
        uVar1 = uStack_50._4_4_ >> 0x10;
        if (*(int *)(lVar3 + 0xa0) <= (int)uVar12) {
          uVar12 = iVar7 + ~uVar12;
        }
        iVar7 = *(int *)(lVar3 + 0xa4) * 2;
        iVar8 = 0;
        if (iVar7 != 0) {
          iVar8 = (int)uVar1 / iVar7;
        }
        iVar9 = 0;
        if (iVar7 != 0) {
          iVar9 = (int)~uVar1 / iVar7;
        }
        uVar2 = uVar1 - iVar8 * iVar7;
        if ((uVar1 & 0x80000000) != 0) {
          uVar2 = iVar7 + ~(~uVar1 - iVar9 * iVar7);
        }
        if (*(int *)(lVar3 + 0xa4) <= (int)uVar2) {
          uVar2 = iVar7 + ~uVar2;
        }
        *puVar11 = *(undefined4 *)
                    (*(long *)(lVar3 + 0xa8) + (long)(int)(*(int *)(lVar3 + 0xb8) * uVar2) * 4 +
                    (long)(int)uVar12 * 4);
      }
      puVar11 = puVar11 + 1;
      piVar10 = piVar10 + 1;
      uStack_50._0_4_ = (int)uStack_50 + iVar5;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar6;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return puVar4;
}



/* Entry: 1097b69d8; end: 1097b6d23;  */

long FUN_1097b69d8(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  int *piVar29;
  int iVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  uint *puVar34;
  undefined8 uVar35;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar8 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar31 = *(uint **)(lVar10 + 0x48);
  uVar7 = *puVar31;
  uVar9 = puVar31[1];
  sVar15 = *(short *)((long)puVar31 + 10);
  sVar16 = *(short *)((long)puVar31 + 0xe);
  uStack_70 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_68 = 0x10000;
  piVar29 = *(int **)(lVar10 + 0x38);
  piVar21 = piVar29;
  FUN_1097bf628(piVar29,&uStack_70);
  if (((int)piVar21 != 0) && (0 < (int)uVar8)) {
    uVar24 = 0;
    iVar2 = (int)uVar7 >> 0x10;
    iVar3 = (int)uVar9 >> 0x10;
    uVar19 = 0x10 - (int)sVar15;
    iVar4 = (1 << (ulong)(uVar19 & 0x1f)) >> 1;
    uVar20 = 0x10 - (int)sVar16;
    iVar12 = *piVar29;
    iVar13 = piVar29[3];
    iVar5 = (1 << (ulong)(uVar20 & 0x1f)) >> 1;
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar24 * 4) != 0)) {
        if (iVar3 < 1) {
          uVar25 = 0;
          uVar33 = 0;
          uVar35 = 0;
        }
        else {
          iVar30 = 0;
          iVar28 = 0;
          uVar25 = (uint)uStack_70 & -1 << (ulong)(uVar19 & 0x1f);
          uVar32 = uStack_70._4_4_ & -1 << (ulong)(uVar20 & 0x1f);
          uVar6 = (int)(uVar25 + iVar4 + ((int)(0xfffe - (uVar7 & 0xffff0000)) >> 1)) >> 0x10;
          uVar33 = (int)(uVar32 + iVar5 + ((int)(0xfffe - (uVar9 & 0xffff0000)) >> 1)) >> 0x10;
          iVar1 = iVar3 + uVar33;
          uVar35 = 0;
          puVar34 = puVar31 + (long)(iVar2 << (ulong)((int)sVar15 & 0x1f)) +
                              (ulong)(((uVar32 + iVar5 & 0xffff) >> (ulong)(uVar20 & 0x1f)) * iVar3)
                              + 4;
          do {
            if (*puVar34 != 0 && 0 < iVar2) {
              puVar26 = puVar31 + (long)(int)(((uVar25 + iVar4 & 0xffff) >> (ulong)(uVar19 & 0x1f))
                                             * iVar2) + 4;
              uVar32 = uVar6;
              uVar22 = ~uVar6;
              do {
                if (*puVar26 != 0) {
                  iVar27 = *(int *)(lVar10 + 0xa0) * 2;
                  iVar17 = 0;
                  if (iVar27 != 0) {
                    iVar17 = (int)uVar32 / iVar27;
                  }
                  iVar18 = 0;
                  if (iVar27 != 0) {
                    iVar18 = (int)uVar22 / iVar27;
                  }
                  uVar14 = uVar32 - iVar17 * iVar27;
                  if ((uVar32 & 0x80000000) != 0) {
                    uVar14 = iVar27 + ~(uVar22 - iVar18 * iVar27);
                  }
                  if (*(int *)(lVar10 + 0xa0) <= (int)uVar14) {
                    uVar14 = iVar27 + ~uVar14;
                  }
                  iVar27 = *(int *)(lVar10 + 0xa4) * 2;
                  if ((int)uVar33 < 0) {
                    iVar17 = 0;
                    if (iVar27 != 0) {
                      iVar17 = (int)~uVar33 / iVar27;
                    }
                    uVar23 = iVar27 + ~(~uVar33 - iVar17 * iVar27);
                  }
                  else {
                    iVar17 = 0;
                    if (iVar27 != 0) {
                      iVar17 = (int)uVar33 / iVar27;
                    }
                    uVar23 = uVar33 - iVar17 * iVar27;
                  }
                  if (*(int *)(lVar10 + 0xa4) <= (int)uVar23) {
                    uVar23 = iVar27 + ~uVar23;
                  }
                  uVar14 = *(uint *)(*(long *)(lVar10 + 0xa8) +
                                     (long)(int)(*(int *)(lVar10 + 0xb8) * uVar23) * 4 +
                                    (long)(int)uVar14 * 4);
                  iVar27 = (int)((ulong)((long)(int)*puVar26 * (long)(int)*puVar34 + 0x8000) >> 0x10
                                );
                  iVar30 = iVar30 + (uVar14 >> 8 & 0xff) * iVar27;
                  iVar28 = iVar28 + (uVar14 & 0xff) * iVar27;
                  uVar35 = CONCAT44((int)((ulong)uVar35 >> 0x20) + (uVar14 >> 0x18) * iVar27,
                                    (int)uVar35 + (uVar14 >> 0x10 & 0xff) * iVar27);
                }
                uVar32 = uVar32 + 1;
                uVar22 = uVar22 - 1;
                puVar26 = puVar26 + 1;
              } while ((int)uVar32 < (int)(iVar2 + uVar6));
            }
            uVar33 = uVar33 + 1;
            puVar34 = puVar34 + 1;
          } while ((int)uVar33 < iVar1);
          uVar35 = CONCAT44((int)((ulong)uVar35 >> 0x20) + 0x8000 >> 0x10,
                            (int)uVar35 + 0x8000 >> 0x10);
          uVar33 = iVar30 + 0x8000 >> 0x10;
          uVar25 = iVar28 + 0x8000 >> 0x10;
        }
        uVar35 = NEON_smax(uVar35,0,4);
        uVar33 = uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar33) {
          uVar33 = 0xff;
        }
        uVar25 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar25) {
          uVar25 = 0xff;
        }
        uVar35 = NEON_smin(uVar35,0xff000000ff,4);
        uVar35 = NEON_ushl(uVar35,0x1800000010,4);
        *(uint *)(lVar11 + uVar24 * 4) =
             uVar25 | uVar33 << 8 | (uint)uVar35 | (uint)((ulong)uVar35 >> 0x20);
      }
      uStack_70._0_4_ = (uint)uStack_70 + iVar12;
      uStack_70._4_4_ = uStack_70._4_4_ + iVar13;
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar8);
  }
  return lVar11;
}



/* Entry: 1097b6d24; end: 1097b6e7b;  */

long FUN_1097b6d24(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar7 = *param_1;
  lVar8 = param_1[1];
  uVar5 = *(uint *)(param_1 + 3);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  uStack_50 = CONCAT44((int)((ulong)param_1[2] >> 0x20) << 0x10,(int)param_1[2] << 0x10) |
              0x800000008000;
  uStack_48 = 0x10000;
  piVar18 = *(int **)(lVar7 + 0x38);
  piVar13 = piVar18;
  FUN_1097bf628(piVar18,&uStack_50);
  if (((int)piVar13 != 0) && (0 < (int)uVar5)) {
    uVar14 = 0;
    iVar9 = *piVar18;
    iVar10 = piVar18[3];
    do {
      if ((param_2 == 0) || (*(int *)(param_2 + uVar14 * 4) != 0)) {
        uVar4 = *(uint *)(lVar7 + 0xa0);
        uVar6 = *(uint *)(lVar7 + 0xa4);
        uVar15 = uVar4 + ((int)uStack_50 + -1 >> 0x10);
        iVar16 = -uVar15;
        do {
          uVar15 = uVar15 - uVar4;
          iVar16 = iVar16 + uVar4;
        } while ((int)uVar4 <= (int)uVar15);
        uVar17 = uVar6 + (uStack_50._4_4_ + -1 >> 0x10);
        iVar12 = -uVar17;
        do {
          uVar17 = uVar17 - uVar6;
          iVar12 = iVar12 + uVar6;
        } while ((int)uVar6 <= (int)uVar17);
        uVar1 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
        uVar3 = uVar6;
        if (uVar6 < 2) {
          uVar3 = 1;
        }
        uVar2 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
        uVar11 = 0;
        if (uVar3 != 0) {
          uVar11 = ((uVar1 - (uVar1 != uVar17)) + iVar12) / uVar3;
        }
        if (uVar1 != uVar17) {
          uVar11 = uVar11 + 1;
        }
        uVar1 = uVar4;
        if (uVar4 < 2) {
          uVar1 = 1;
        }
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = ((uVar2 - (uVar2 != uVar15)) + iVar16) / uVar1;
        }
        if (uVar2 != uVar15) {
          uVar3 = uVar3 + 1;
        }
        *(undefined4 *)(lVar8 + uVar14 * 4) =
             *(undefined4 *)
              (*(long *)(lVar7 + 0xa8) +
               (long)(int)((uVar17 + uVar6 * uVar11) * *(int *)(lVar7 + 0xb8)) * 4 +
              (ulong)(uVar15 + uVar4 * uVar3) * 4);
      }
      uStack_50._0_4_ = (int)uStack_50 + iVar9;
      uStack_50._4_4_ = uStack_50._4_4_ + iVar10;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar5);
  }
  return lVar8;
}


