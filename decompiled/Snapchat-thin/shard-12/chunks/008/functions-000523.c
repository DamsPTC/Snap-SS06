/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098157f0; end: 1098157f7;  */

undefined8 FUN_1098157f0(void)

{
  return 6;
}



/* Entry: 1098157f8; end: 10981587f;  */

void FUN_1098157f8(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  float fVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [2];
  
  (**(code **)(*param_1 + 0x100))(param_1,auStack_40,param_4);
  fVar1 = *(float *)((ulong)auStack_40 | 8);
  param_2[1] = (ulong)(uint)fVar1;
  *param_2 = auStack_40[0];
  uStack_60 = CONCAT44(-(float)((ulong)auStack_40[0] >> 0x20),-(float)auStack_40[0]);
  uStack_58 = CONCAT44(0x80000000,-fVar1);
  (**(code **)(*param_1 + 0x80))(&uStack_50,param_1,&uStack_60);
  param_3[1] = uStack_48;
  *param_3 = uStack_50;
  return;
}



/* Entry: 109815880; end: 10981594b;  */

bool FUN_109815880(float param_1,long param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)*(undefined8 *)(param_2 + 0x30);
  if ((*param_3 <= param_1 + fVar1) && (-fVar1 - param_1 <= *param_3)) {
    fVar1 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    if ((param_3[1] <= param_1 + fVar1) && (-fVar1 - param_1 <= param_3[1])) {
      fVar1 = (float)*(undefined8 *)(param_2 + 0x38);
      if (param_3[2] <= param_1 + fVar1) {
        return -fVar1 - param_1 <= param_3[2];
      }
    }
  }
  return false;
}



/* Entry: 10981594c; end: 109815b53;  */

void FUN_10981594c(float *param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  fVar2 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  auVar10._0_4_ = fVar2 * fVar2;
  auVar10._4_4_ = fVar4 * fVar4;
  auVar10._8_4_ = fVar5 * fVar5;
  auVar10._12_4_ = fVar6 * fVar6;
  auVar9 = NEON_ext(auVar10,auVar10,8,1);
  fVar7 = auVar10._0_4_ + auVar10._4_4_ + auVar9._0_4_;
  if (0.0001 <= fVar7) {
    fVar7 = 1.0 / SQRT(fVar7);
    fVar2 = fVar2 * fVar7;
    fVar4 = fVar4 * fVar7;
    fVar5 = fVar5 * fVar7;
    fVar6 = fVar6 * fVar7;
  }
  else {
    fVar2 = 1.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  lVar1 = (long)*(int *)(param_2 + 0x48);
  uStack_10 = 0;
  uStack_8 = 0;
  fVar8 = *(float *)(param_2 + lVar1 * 4 + 0x30);
  *(float *)((long)&uStack_10 + lVar1 * 4) = fVar8;
  auVar9._0_4_ = fVar2 * (float)uStack_10;
  auVar9._4_4_ = fVar4 * (float)((ulong)uStack_10 >> 0x20);
  auVar9._8_4_ = fVar5 * (float)uStack_8;
  auVar9._12_4_ = fVar6 * (float)((ulong)uStack_8 >> 0x20);
  auVar10 = NEON_ext(auVar9,auVar9,8,1);
  fVar11 = auVar9._0_4_ + auVar9._4_4_ + auVar10._0_4_;
  fVar7 = -1e+18;
  if (-1e+18 < fVar11) {
    *(undefined8 *)(param_1 + 2) = uStack_8;
    *(undefined8 *)param_1 = uStack_10;
    fVar7 = fVar11;
  }
  uStack_10 = 0;
  uStack_8 = 0;
  *(float *)((long)&uStack_10 + lVar1 * 4) = -fVar8;
  auVar3._0_4_ = fVar2 * (float)uStack_10;
  auVar3._4_4_ = fVar4 * uStack_10._4_4_;
  auVar3._8_4_ = fVar5 * (float)uStack_8;
  auVar3._12_4_ = fVar6 * uStack_8._4_4_;
  auVar10 = NEON_ext(auVar3,auVar3,8,1);
  if (fVar7 < auVar3._0_4_ + auVar3._4_4_ + auVar10._0_4_) {
    param_1[2] = (float)uStack_8;
    param_1[3] = uStack_8._4_4_;
    *param_1 = (float)uStack_10;
    param_1[1] = uStack_10._4_4_;
  }
  return;
}



/* Entry: 109815b54; end: 109815b57;  */

void FUN_109815b54(void)

{
  return;
}



/* Entry: 109815b58; end: 109815b73;  */

void FUN_109815b58(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 109815b74; end: 109815c3b;  */

void FUN_109815b74(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  float afStack_10 [2];
  ulong uStack_8;
  
  iVar1 = *(int *)(param_1 + 0x48);
  afStack_10[0] = *(float *)(param_1 + 0x30 + (long)((iVar1 + 2) % 3) * 4);
  uStack_8 = (ulong)(uint)afStack_10[0];
  afStack_10[1] = afStack_10[0];
  afStack_10[iVar1] = afStack_10[0] + *(float *)(param_1 + 0x30 + (long)iVar1 * 4);
  uVar29 = param_2[7];
  auVar24._0_8_ = param_2[4] & 0x7fffffff7fffffff;
  auVar24[8] = *(undefined1 *)(param_2 + 5);
  auVar24[9] = *(undefined1 *)((long)param_2 + 0x29);
  auVar24[10] = *(undefined1 *)((long)param_2 + 0x2a);
  auVar24[0xb] = *(byte *)((long)param_2 + 0x2b) & 0x7f;
  auVar16._0_8_ = param_2[2] & 0x7fffffff7fffffff;
  auVar16[8] = *(undefined1 *)(param_2 + 3);
  auVar16[9] = *(undefined1 *)((long)param_2 + 0x19);
  auVar16[10] = *(undefined1 *)((long)param_2 + 0x1a);
  auVar16[0xb] = *(byte *)((long)param_2 + 0x1b) & 0x7f;
  fVar2 = afStack_10[0] * ABS((float)*param_2);
  fVar3 = afStack_10[1] * ABS((float)((ulong)*param_2 >> 0x20));
  uVar7 = (undefined1)((uint)fVar3 >> 8);
  uVar8 = (undefined1)((uint)fVar3 >> 0x10);
  uVar9 = (undefined1)((uint)fVar3 >> 0x18);
  fVar26 = (float)uStack_8;
  fVar27 = fVar26 * ABS((float)param_2[1]);
  uVar10 = (undefined1)((uint)fVar27 >> 8);
  uVar11 = (undefined1)((uint)fVar27 >> 0x10);
  uVar12 = (undefined1)((uint)fVar27 >> 0x18);
  fVar28 = (float)(uStack_8 >> 0x20);
  fVar6 = fVar28 * 0.0;
  uVar13 = (undefined1)((uint)fVar6 >> 8);
  uVar14 = (undefined1)((uint)fVar6 >> 0x10);
  uVar15 = (undefined1)((uint)fVar6 >> 0x18);
  auVar17._0_4_ = afStack_10[0] * ABS(*(float *)(param_2 + 2));
  auVar17._4_4_ = afStack_10[1] * (float)(auVar16._0_8_ >> 0x20);
  auVar17._8_4_ = fVar26 * auVar16._8_4_;
  auVar17._12_4_ = fVar28 * 0.0;
  afStack_10[0] = afStack_10[0] * ABS(*(float *)(param_2 + 4));
  afStack_10[1] = afStack_10[1] * (float)(auVar24._0_8_ >> 0x20);
  uVar18 = (undefined1)((uint)afStack_10[1] >> 8);
  uVar19 = (undefined1)((uint)afStack_10[1] >> 0x10);
  uVar20 = (undefined1)((uint)afStack_10[1] >> 0x18);
  fVar26 = fVar26 * auVar24._8_4_;
  uVar21 = (undefined1)((uint)fVar26 >> 8);
  uVar22 = (undefined1)((uint)fVar26 >> 0x10);
  uVar23 = (undefined1)((uint)fVar26 >> 0x18);
  auVar25[4] = SUB41(fVar3,0);
  auVar25._0_4_ = fVar2;
  auVar25[5] = uVar7;
  auVar25[6] = uVar8;
  auVar25[7] = uVar9;
  auVar25[8] = SUB41(fVar27,0);
  auVar25[9] = uVar10;
  auVar25[10] = uVar11;
  auVar25[0xb] = uVar12;
  auVar25[0xc] = SUB41(fVar6,0);
  auVar25[0xd] = uVar13;
  auVar25[0xe] = uVar14;
  auVar25[0xf] = uVar15;
  auVar30[4] = SUB41(fVar3,0);
  auVar30._0_4_ = fVar2;
  auVar30[5] = uVar7;
  auVar30[6] = uVar8;
  auVar30[7] = uVar9;
  auVar30[8] = SUB41(fVar27,0);
  auVar30[9] = uVar10;
  auVar30[10] = uVar11;
  auVar30[0xb] = uVar12;
  auVar30[0xc] = SUB41(fVar6,0);
  auVar30[0xd] = uVar13;
  auVar30[0xe] = uVar14;
  auVar30[0xf] = uVar15;
  auVar25 = NEON_ext(auVar25,auVar30,8,1);
  auVar30 = NEON_ext(auVar17,auVar17,8,1);
  fVar2 = fVar2 + fVar3 + auVar25._0_4_;
  fVar3 = auVar17._0_4_ + auVar17._4_4_ + auVar30._0_4_;
  auVar4[4] = SUB41(afStack_10[1],0);
  auVar4._0_4_ = afStack_10[0];
  auVar4[5] = uVar18;
  auVar4[6] = uVar19;
  auVar4[7] = uVar20;
  auVar4[8] = SUB41(fVar26,0);
  auVar4[9] = uVar21;
  auVar4[10] = uVar22;
  auVar4[0xb] = uVar23;
  auVar4._12_4_ = 0;
  auVar5[4] = SUB41(afStack_10[1],0);
  auVar5._0_4_ = afStack_10[0];
  auVar5[5] = uVar18;
  auVar5[6] = uVar19;
  auVar5[7] = uVar20;
  auVar5[8] = SUB41(fVar26,0);
  auVar5[9] = uVar21;
  auVar5[10] = uVar22;
  auVar5[0xb] = uVar23;
  auVar5._12_4_ = 0;
  auVar25 = NEON_ext(auVar4,auVar5,8,1);
  fVar6 = afStack_10[0] + afStack_10[1] + auVar25._0_4_ + auVar25._4_4_;
  fVar26 = (float)param_2[6];
  fVar27 = (float)((ulong)param_2[6] >> 0x20);
  fVar28 = (float)uVar29;
  param_3[1] = (ulong)(uint)(fVar28 - fVar6);
  *param_3 = CONCAT44(fVar27 - fVar3,fVar26 - fVar2);
  fVar27 = fVar27 + fVar3;
  fVar3 = (float)((ulong)uVar29 >> 0x20) + 0.0;
  param_4[1] = CONCAT17((char)((uint)fVar3 >> 0x18),
                        CONCAT16((char)((uint)fVar3 >> 0x10),
                                 CONCAT15((char)((uint)fVar3 >> 8),
                                          CONCAT14(SUB41(fVar3,0),fVar28 + fVar6))));
  *param_4 = CONCAT17((char)((uint)fVar27 >> 0x18),
                      CONCAT16((char)((uint)fVar27 >> 0x10),
                               CONCAT15((char)((uint)fVar27 >> 8),
                                        CONCAT14(SUB41(fVar27,0),fVar26 + fVar2))));
  return;
}



/* Entry: 109815c3c; end: 109815cd3;  */

void FUN_109815c3c(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = (undefined8 *)(param_1 + 0x30);
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x20);
  auVar6 = NEON_frecpe(auVar5,4);
  auVar8 = NEON_frecps(auVar5,auVar6,4);
  auVar7._0_4_ = auVar6._0_4_ * auVar8._0_4_;
  auVar7._4_4_ = auVar6._4_4_ * auVar8._4_4_;
  auVar7._8_4_ = auVar6._8_4_ * auVar8._8_4_;
  auVar7._12_4_ = auVar6._12_4_ * auVar8._12_4_;
  auVar5 = NEON_frecps(auVar5,auVar7,4);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x28) = ABS(param_2[2]);
  *(float *)(param_1 + 0x2c) = ABS(fVar3);
  *(float *)(param_1 + 0x20) = ABS(fVar1);
  *(float *)(param_1 + 0x24) = ABS(fVar2);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  *(ulong *)(param_1 + 0x38) =
       CONCAT44(auVar5._12_4_ *
                (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) * auVar7._12_4_ * param_2[3]
                ,auVar5._8_4_ * (float)*(undefined8 *)(param_1 + 0x38) * auVar7._8_4_ * param_2[2]);
  *puVar4 = CONCAT44(auVar5._4_4_ * (float)((ulong)*puVar4 >> 0x20) * auVar7._4_4_ * fVar2,
                     auVar5._0_4_ * (float)*puVar4 * auVar7._0_4_ * fVar1);
  *(undefined4 *)(param_1 + 0x40) =
       *(undefined4 *)((long)puVar4 + (long)((*(int *)(param_1 + 0x48) + 2) % 3) * 4);
  return;
}



/* Entry: 109815cd4; end: 109815d53;  */

undefined * FUN_109815cd4(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_109816008();
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x20 + lVar2) = *(undefined4 *)(param_1 + 0x30 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x10 + lVar2) = *(undefined4 *)(param_1 + 0x20 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return &UNK_10f580a92;
}



/* Entry: 109815d54; end: 109815d63;  */

undefined8 FUN_109815d54(void)

{
  return 0;
}



/* Entry: 109815d64; end: 109815d7f;  */

void FUN_109815d64(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 109815d80; end: 109815d8f;  */

undefined * FUN_109815d80(void)

{
  return &UNK_10f580aa5;
}



/* Entry: 109815d90; end: 109815dab;  */

void FUN_109815d90(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 109815dac; end: 109815db7;  */

undefined * FUN_109815dac(void)

{
  return &UNK_10f580aae;
}



/* Entry: 109815db8; end: 109815e5b;  */

void FUN_109815db8(long *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar4;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_80 [8];
  float fStack_78;
  undefined1 auStack_70 [8];
  float fStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  uStack_48 = 0;
  uStack_50 = 0x3f80000000000000;
  uStack_38 = 0x3f800000;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&uStack_60,auStack_70,auStack_80);
  fVar1 = auStack_80._0_4_ - auStack_70._0_4_;
  fVar4 = auStack_80._4_4_ - auStack_70._4_4_;
  auVar2._0_4_ = fVar1 * fVar1;
  auVar2._4_4_ = fVar4 * fVar4;
  auVar2._8_4_ = (fStack_78 - fStack_68) * (fStack_78 - fStack_68);
  auVar2._12_4_ = 0;
  auVar3 = NEON_ext(auVar2,auVar2,8,1);
  *param_3 = SQRT(auVar2._0_4_ + auVar2._4_4_ + auVar3._0_4_) * 0.5;
  param_2[1] = (ulong)(uint)((fStack_78 + fStack_68) * 0.5);
  *param_2 = CONCAT44((auStack_80._4_4_ + auStack_70._4_4_) * 0.5,
                      (auStack_80._0_4_ + auStack_70._0_4_) * 0.5);
  return;
}



/* Entry: 109815e5c; end: 109815e87;  */

float FUN_109815e5c(float param_1,long *param_2)

{
  float fVar1;
  
  fVar1 = param_1;
  (**(code **)(*param_2 + 0x20))();
  return param_1 * fVar1;
}



/* Entry: 109815e88; end: 109815ed3;  */

void FUN_109815e88(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auStack_24 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x18))(param_1,&fStack_20,auStack_24);
  auVar1._0_4_ = fStack_20 * fStack_20;
  auVar1._4_4_ = fStack_1c * fStack_1c;
  auVar1._8_4_ = fStack_18 * fStack_18;
  auVar1._12_4_ = fStack_14 * fStack_14;
  NEON_ext(auVar1,auVar1,8,1);
  return;
}



/* Entry: 109815ed4; end: 109816007;  */

void FUN_109815ed4(float param_1,long *param_2,undefined8 param_3,undefined8 *param_4,float *param_5
                  ,ulong *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  
  (**(code **)(*param_2 + 0x10))(param_2,param_3,param_6,param_7);
  fVar7 = (float)*param_4 * param_1;
  fVar8 = (float)((ulong)*param_4 >> 0x20) * param_1;
  fVar9 = (float)param_4[1] * param_1;
  uVar10 = *param_6;
  uVar11 = *(ulong *)param_7;
  fVar2 = param_7[2] + fVar9;
  if (fVar9 <= 0.0) {
    fVar2 = param_7[2];
  }
  fVar1 = *(float *)(param_6 + 1);
  if (fVar9 <= 0.0) {
    fVar1 = *(float *)(param_6 + 1) + fVar9;
  }
  auVar3._0_4_ = *param_5 * *param_5;
  auVar3._4_4_ = param_5[1] * param_5[1];
  auVar3._8_4_ = param_5[2] * param_5[2];
  auVar3._12_4_ = param_5[3] * param_5[3];
  auVar4 = NEON_ext(auVar3,auVar3,8,1);
  fVar9 = (float)(**(code **)(*param_2 + 0x20))(param_2);
  param_1 = param_1 * fVar9 * SQRT(auVar3._0_4_ + auVar3._4_4_ + auVar4._0_4_);
  param_6[1] = (ulong)(uint)fVar1;
  *param_6 = uVar10 ^ (uVar10 ^ CONCAT44((float)(uVar10 >> 0x20) + fVar8,(float)uVar10 + fVar7)) &
                      ~CONCAT44(-(uint)(0.0 < fVar8),-(uint)(0.0 < fVar7));
  *(ulong *)(param_7 + 2) = (ulong)(uint)fVar2;
  *(ulong *)param_7 =
       uVar11 ^ (uVar11 ^ CONCAT44((float)(uVar11 >> 0x20) + fVar8,(float)uVar11 + fVar7)) &
                CONCAT44(-(uint)(0.0 < fVar8),-(uint)(0.0 < fVar7));
  param_6[1] = CONCAT44((float)(param_6[1] >> 0x20) - 0.0,(float)param_6[1] - param_1);
  *param_6 = CONCAT44((float)(*param_6 >> 0x20) - param_1,(float)*param_6 - param_1);
  uVar6 = *(undefined8 *)(param_7 + 2);
  uVar5 = *(undefined8 *)param_7;
  param_7[2] = (float)uVar6 + param_1;
  param_7[3] = (float)((ulong)uVar6 >> 0x20) + 0.0;
  *param_7 = (float)uVar5 + param_1;
  param_7[1] = (float)((ulong)uVar5 >> 0x20) + param_1;
  return;
}



/* Entry: 109816008; end: 109816113;  */

undefined * FUN_109816008(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x50))(param_3,param_1);
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x38))(param_3,plVar1);
  *param_2 = (long)plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*param_3 + 0x60))(param_3,plVar1);
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((long)param_2 + 0xc) = 0;
  return &UNK_10f580ab7;
}



/* Entry: 109816114; end: 10981611b;  */

undefined8 FUN_109816114(void)

{
  return 0x10;
}



/* Entry: 10981611c; end: 1098162ab;  */

undefined8 * FUN_10981611c(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_110b13430;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[9] = 0x5d5e0b6b;
  param_1[8] = 0x5d5e0b6b5d5e0b6b;
  param_1[0xb] = 0xdd5e0b6b;
  param_1[10] = 0xdd5e0b6bdd5e0b6b;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  *(undefined8 *)((long)param_1 + 0x74) = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3f80000000000000;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 1) = 0x1f;
  if (param_2 != 0) {
    puVar3 = (undefined8 *)0x40;
    FUN_1098256f4(0x40,0x10);
    *(undefined1 *)(puVar3 + 7) = 1;
    puVar3[6] = 0;
    *(undefined4 *)((long)puVar3 + 0x24) = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0xffffffff;
    *(undefined4 *)(puVar3 + 3) = 0;
    param_1[0xc] = puVar3;
    iVar5 = *(int *)(param_1 + 5);
  }
  if (iVar5 < param_3) {
    if (param_3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)param_3 * 0x60;
      FUN_1098256f4(lVar4,0x10);
    }
    uVar2 = *(uint *)((long)param_1 + 0x24);
    if (0 < (int)uVar2) {
      lVar6 = 0;
      do {
        puVar3 = (undefined8 *)(lVar4 + lVar6);
        puVar1 = (undefined8 *)(param_1[6] + lVar6);
        uVar7 = *puVar1;
        puVar3[1] = puVar1[1];
        *puVar3 = uVar7;
        uVar7 = puVar1[2];
        puVar3[3] = puVar1[3];
        puVar3[2] = uVar7;
        uVar7 = puVar1[4];
        puVar3[5] = puVar1[5];
        puVar3[4] = uVar7;
        uVar7 = puVar1[6];
        puVar3[7] = puVar1[7];
        puVar3[6] = uVar7;
        uVar8 = puVar1[9];
        uVar7 = puVar1[8];
        puVar3[10] = puVar1[10];
        puVar3[9] = uVar8;
        puVar3[8] = uVar7;
        lVar6 = lVar6 + 0x60;
      } while ((ulong)uVar2 * 0x60 - lVar6 != 0);
    }
    if (param_1[6] != 0) {
      if (*(char *)(param_1 + 7) == '\x01') {
        FUN_109825740();
      }
      param_1[6] = 0;
    }
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = lVar4;
    *(int *)(param_1 + 5) = param_3;
  }
  return param_1;
}



/* Entry: 1098162ac; end: 1098162fb;  */

undefined8 * FUN_1098162ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b13430;
  if (param_1[0xc] != 0) {
    FUN_109801c08();
    if (param_1[0xc] != 0) {
      FUN_109825740();
    }
  }
  FUN_109816f20(param_1 + 4);
  return param_1;
}



/* Entry: 1098162fc; end: 1098162ff;  */

undefined8 * FUN_1098162fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b13430;
  if (param_1[0xc] != 0) {
    FUN_109801c08();
    if (param_1[0xc] != 0) {
      FUN_109825740();
    }
  }
  FUN_109816f20(param_1 + 4);
  return param_1;
}



/* Entry: 109816300; end: 10981631f;  */

void FUN_109816300(long param_1)

{
  FUN_1098162ac();
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 109816320; end: 109816527;  */

void FUN_109816320(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  uVar18 = param_2[1];
  uVar16 = *param_2;
  uVar13 = param_2[3];
  uVar9 = param_2[2];
  uVar19 = param_2[5];
  uVar17 = param_2[4];
  uVar14 = param_2[7];
  uVar10 = param_2[6];
  lVar3 = param_3[1];
  uVar11 = uVar10;
  (**(code **)(*param_3 + 0x60))(param_3);
  (**(code **)(*param_3 + 0x10))(param_3,param_2,&uStack_60,&uStack_70);
  lVar6 = 0;
  do {
    lVar4 = param_1 + lVar6;
    if (*(float *)((long)&uStack_60 + lVar6) < *(float *)(lVar4 + 0x40)) {
      *(float *)(lVar4 + 0x40) = *(float *)((long)&uStack_60 + lVar6);
    }
    if (*(float *)(lVar4 + 0x50) < *(float *)((long)&uStack_70 + lVar6)) {
      *(float *)(lVar4 + 0x50) = *(float *)((long)&uStack_70 + lVar6);
    }
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0xc);
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_68;
    uStack_80 = uStack_70;
    func_0x000109801e68(lVar6,&uStack_90,(long)*(int *)(param_1 + 0x24));
  }
  uVar5 = *(uint *)(param_1 + 0x24);
  if (uVar5 == *(uint *)(param_1 + 0x28)) {
    iVar2 = uVar5 << 1;
    if (uVar5 == 0) {
      iVar2 = 1;
    }
    if ((int)uVar5 < iVar2) {
      if (iVar2 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (long)iVar2 * 0x60;
        FUN_1098256f4(lVar4,0x10);
        uVar5 = *(uint *)(param_1 + 0x24);
      }
      if (0 < (int)uVar5) {
        lVar8 = 0;
        do {
          puVar7 = (undefined8 *)(lVar4 + lVar8);
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar8);
          uVar12 = *puVar1;
          puVar7[1] = puVar1[1];
          *puVar7 = uVar12;
          uVar12 = puVar1[2];
          puVar7[3] = puVar1[3];
          puVar7[2] = uVar12;
          uVar12 = puVar1[4];
          puVar7[5] = puVar1[5];
          puVar7[4] = uVar12;
          uVar12 = puVar1[6];
          puVar7[7] = puVar1[7];
          puVar7[6] = uVar12;
          uVar15 = puVar1[9];
          uVar12 = puVar1[8];
          puVar7[10] = puVar1[10];
          puVar7[9] = uVar15;
          puVar7[8] = uVar12;
          lVar8 = lVar8 + 0x60;
        } while ((ulong)uVar5 * 0x60 - lVar8 != 0);
      }
      if ((*(long *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x38) = 1;
      *(long *)(param_1 + 0x30) = lVar4;
      *(int *)(param_1 + 0x28) = iVar2;
      uVar5 = *(uint *)(param_1 + 0x24);
    }
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)(int)uVar5 * 0x60);
  puVar7[1] = uVar18;
  *puVar7 = uVar16;
  puVar7[3] = uVar13;
  puVar7[2] = uVar9;
  puVar7[5] = uVar19;
  puVar7[4] = uVar17;
  puVar7[7] = uVar14;
  puVar7[6] = uVar10;
  puVar7[8] = param_3;
  *(int *)(puVar7 + 9) = (int)lVar3;
  *(int *)((long)puVar7 + 0x4c) = (int)uVar11;
  puVar7[10] = lVar6;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}



/* Entry: 109816528; end: 10981667b;  */

void FUN_109816528(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
  uVar4 = (ulong)*(uint *)((long)param_1 + 0x24);
  if (0 < (int)*(uint *)((long)param_1 + 0x24)) {
    lVar9 = uVar4 << 0x20;
    lVar10 = uVar4 * 0x60 + -0x20;
    uVar11 = uVar4;
    do {
      lVar9 = lVar9 + -0x100000000;
      iVar3 = (int)uVar4;
      lVar5 = param_1[6];
      if (*(long *)(lVar5 + lVar10) == param_2) {
        *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
        iVar12 = (int)((ulong)lVar9 >> 0x20);
        if (param_1[0xc] != 0) {
          FUN_109802408(param_1[0xc],*(undefined8 *)(lVar5 + (long)iVar12 * 0x60 + 0x50));
          iVar3 = *(int *)((long)param_1 + 0x24);
          lVar5 = param_1[6];
        }
        puVar7 = (undefined8 *)(lVar5 + (long)iVar12 * 0x60);
        uVar14 = puVar7[1];
        uVar13 = *puVar7;
        uVar16 = puVar7[3];
        uVar15 = puVar7[2];
        uVar18 = puVar7[5];
        uVar17 = puVar7[4];
        uVar20 = puVar7[7];
        uVar19 = puVar7[6];
        uVar23 = puVar7[9];
        uVar21 = puVar7[8];
        uVar8 = puVar7[10];
        puVar6 = (undefined8 *)(lVar5 + (long)(iVar3 + -1) * 0x60);
        uVar22 = *puVar6;
        uVar25 = puVar6[3];
        uVar24 = puVar6[2];
        puVar7[1] = puVar6[1];
        *puVar7 = uVar22;
        puVar7[3] = uVar25;
        puVar7[2] = uVar24;
        uVar22 = puVar6[4];
        uVar25 = puVar6[7];
        uVar24 = puVar6[6];
        puVar7[5] = puVar6[5];
        puVar7[4] = uVar22;
        puVar7[7] = uVar25;
        puVar7[6] = uVar24;
        uVar24 = puVar6[9];
        uVar22 = puVar6[8];
        puVar7[10] = puVar6[10];
        puVar7[9] = uVar24;
        puVar7[8] = uVar22;
        puVar6 = (undefined8 *)(param_1[6] + (long)(iVar3 + -1) * 0x60);
        puVar6[1] = uVar14;
        *puVar6 = uVar13;
        puVar6[3] = uVar16;
        puVar6[2] = uVar15;
        puVar6[5] = uVar18;
        puVar6[4] = uVar17;
        puVar6[7] = uVar20;
        puVar6[6] = uVar19;
        puVar6[9] = uVar23;
        puVar6[8] = uVar21;
        puVar6[10] = uVar8;
        if (param_1[0xc] != 0) {
          *(int *)(*(long *)(param_1[6] + (long)iVar12 * 0x60 + 0x50) + 0x28) = (int)(uVar11 - 1);
        }
        uVar2 = *(int *)((long)param_1 + 0x24) - 1;
        uVar4 = (ulong)uVar2;
        *(uint *)((long)param_1 + 0x24) = uVar2;
      }
      lVar10 = lVar10 + -0x60;
      bVar1 = 1 < uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000109816678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1);
  return;
}



/* Entry: 10981667c; end: 10981674b;  */

void FUN_10981667c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float afStack_60 [4];
  float afStack_50 [4];
  
  *(undefined8 *)(param_1 + 0x48) = 0x5d5e0b6b;
  *(undefined8 *)(param_1 + 0x40) = 0x5d5e0b6b5d5e0b6b;
  *(undefined8 *)(param_1 + 0x58) = 0xdd5e0b6b;
  *(undefined8 *)(param_1 + 0x50) = 0xdd5e0b6bdd5e0b6b;
  if (0 < *(int *)(param_1 + 0x24)) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x30) + lVar4 * 0x60;
      plVar2 = *(long **)(lVar3 + 0x40);
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar3,afStack_50,afStack_60);
      lVar3 = 0;
      do {
        lVar1 = param_1 + lVar3;
        if (*(float *)((long)afStack_50 + lVar3) < *(float *)(lVar1 + 0x40)) {
          *(float *)(lVar1 + 0x40) = *(float *)((long)afStack_50 + lVar3);
        }
        if (*(float *)(lVar1 + 0x50) < *(float *)((long)afStack_60 + lVar3)) {
          *(float *)(lVar1 + 0x50) = *(float *)((long)afStack_60 + lVar3);
        }
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0xc);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x24));
  }
  return;
}



/* Entry: 10981674c; end: 1098168b7;  */

void FUN_10981674c(long *param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  float fVar25;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined8 uVar39;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auVar26 [12];
  
  lVar2 = param_1[9];
  lVar1 = param_1[8];
  lVar5 = param_1[0xb];
  lVar4 = param_1[10];
  fVar8 = *(float *)((long)param_1 + 0x24);
  fVar9 = fVar8;
  (**(code **)(*param_1 + 0x60))();
  fVar10 = fVar9;
  (**(code **)(*param_1 + 0x60))(param_1);
  fVar11 = fVar10;
  (**(code **)(*param_1 + 0x60))(param_1);
  iVar3 = -(uint)(fVar8 == 0.0);
  bVar12 = (byte)iVar3;
  bVar13 = (byte)((uint)iVar3 >> 8);
  bVar14 = (byte)((uint)iVar3 >> 0x10);
  bVar15 = (byte)((uint)iVar3 >> 0x18);
  fStack_60 = (float)lVar4;
  fStack_5c = (float)((ulong)lVar4 >> 0x20);
  fStack_58 = (float)lVar5;
  fVar38 = (float)lVar1;
  fVar7 = (float)((ulong)lVar1 >> 0x20);
  fVar8 = (fStack_60 + fVar38) * 0.5;
  fVar29 = (fStack_5c + fVar7) * 0.5;
  fVar30 = (fStack_58 + (float)lVar2) * 0.5;
  auVar35 = *param_2;
  auVar37 = param_2[1];
  fVar25 = (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & ~bVar15,
                           CONCAT12((byte)((uint)fVar8 >> 0x10) & ~bVar14,
                                    CONCAT11((byte)((uint)fVar8 >> 8) & ~bVar13,
                                             SUB41(fVar8,0) & ~bVar12)));
  auVar26._0_8_ =
       CONCAT17((byte)((uint)fVar29 >> 0x18) & ~bVar15,
                CONCAT16((byte)((uint)fVar29 >> 0x10) & ~bVar14,
                         CONCAT15((byte)((uint)fVar29 >> 8) & ~bVar13,
                                  CONCAT14(SUB41(fVar29,0) & ~bVar12,fVar25))));
  auVar26[8] = SUB41(fVar30,0) & ~bVar12;
  auVar26[9] = (byte)((uint)fVar30 >> 8) & ~bVar13;
  auVar26[10] = (byte)((uint)fVar30 >> 0x10) & ~bVar14;
  auVar26[0xb] = (byte)((uint)fVar30 >> 0x18) & ~bVar15;
  fVar8 = (fStack_60 - fVar38) * 0.5;
  fVar29 = (fStack_5c - fVar7) * 0.5;
  fVar30 = (fStack_58 - (float)lVar2) * 0.5;
  auVar6 = param_2[2];
  uVar39 = *(undefined8 *)(param_2[3] + 8);
  fVar9 = (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & ~bVar15,
                          CONCAT12((byte)((uint)fVar8 >> 0x10) & ~bVar14,
                                   CONCAT11((byte)((uint)fVar8 >> 8) & ~bVar13,
                                            SUB41(fVar8,0) & ~bVar12))) + fVar9;
  fVar10 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~bVar15,
                           CONCAT12((byte)((uint)fVar29 >> 0x10) & ~bVar14,
                                    CONCAT11((byte)((uint)fVar29 >> 8) & ~bVar13,
                                             SUB41(fVar29,0) & ~bVar12))) + fVar10;
  fVar11 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~bVar15,
                           CONCAT12((byte)((uint)fVar30 >> 0x10) & ~bVar14,
                                    CONCAT11((byte)((uint)fVar30 >> 8) & ~bVar13,
                                             SUB41(fVar30,0) & ~bVar12))) + fVar11;
  fVar8 = fVar25 * auVar35._0_4_;
  fVar7 = (float)((ulong)auVar26._0_8_ >> 0x20);
  fVar29 = fVar7 * auVar35._4_4_;
  uVar16 = (undefined1)((uint)fVar29 >> 8);
  uVar17 = (undefined1)((uint)fVar29 >> 0x10);
  uVar18 = (undefined1)((uint)fVar29 >> 0x18);
  fVar31 = auVar26._8_4_;
  fVar30 = fVar31 * auVar35._8_4_;
  uVar19 = (undefined1)((uint)fVar30 >> 8);
  uVar20 = (undefined1)((uint)fVar30 >> 0x10);
  uVar21 = (undefined1)((uint)fVar30 >> 0x18);
  fVar38 = auVar35._12_4_ * 0.0;
  uVar22 = (undefined1)((uint)fVar38 >> 8);
  uVar23 = (undefined1)((uint)fVar38 >> 0x10);
  uVar24 = (undefined1)((uint)fVar38 >> 0x18);
  auVar32._0_4_ = fVar25 * auVar37._0_4_;
  auVar32._4_4_ = fVar7 * auVar37._4_4_;
  auVar32._8_4_ = fVar31 * auVar37._8_4_;
  auVar32._12_4_ = auVar37._12_4_ * 0.0;
  auVar27._0_4_ = fVar25 * auVar6._0_4_;
  auVar27._4_4_ = fVar7 * auVar6._4_4_;
  auVar27._8_4_ = fVar31 * auVar6._8_4_;
  auVar33[4] = SUB41(fVar29,0);
  auVar33._0_4_ = fVar8;
  auVar33[5] = uVar16;
  auVar33[6] = uVar17;
  auVar33[7] = uVar18;
  auVar33[8] = SUB41(fVar30,0);
  auVar33[9] = uVar19;
  auVar33[10] = uVar20;
  auVar33[0xb] = uVar21;
  auVar33[0xc] = SUB41(fVar38,0);
  auVar33[0xd] = uVar22;
  auVar33[0xe] = uVar23;
  auVar33[0xf] = uVar24;
  auVar34[4] = SUB41(fVar29,0);
  auVar34._0_4_ = fVar8;
  auVar34[5] = uVar16;
  auVar34[6] = uVar17;
  auVar34[7] = uVar18;
  auVar34[8] = SUB41(fVar30,0);
  auVar34[9] = uVar19;
  auVar34[10] = uVar20;
  auVar34[0xb] = uVar21;
  auVar34[0xc] = SUB41(fVar38,0);
  auVar34[0xd] = uVar22;
  auVar34[0xe] = uVar23;
  auVar34[0xf] = uVar24;
  auVar34 = NEON_ext(auVar33,auVar34,8,1);
  auVar36 = NEON_ext(auVar32,auVar32,8,1);
  auVar27._12_4_ = 0;
  auVar33 = NEON_ext(auVar27,auVar27,8,1);
  fVar8 = (float)*(undefined8 *)param_2[3] + fVar8 + fVar29 + auVar34._0_4_;
  fVar29 = (float)((ulong)*(undefined8 *)param_2[3] >> 0x20) +
           auVar32._0_4_ + auVar32._4_4_ + auVar36._0_4_;
  fVar30 = (float)uVar39 + auVar27._0_4_ + auVar27._4_4_ + auVar33._0_4_ + auVar33._4_4_;
  fVar38 = fVar9 * ABS(auVar35._0_4_);
  fVar25 = fVar10 * ABS(auVar35._4_4_);
  uVar16 = (undefined1)((uint)fVar25 >> 8);
  uVar17 = (undefined1)((uint)fVar25 >> 0x10);
  uVar18 = (undefined1)((uint)fVar25 >> 0x18);
  fVar7 = fVar11 * ABS(auVar35._8_4_);
  uVar19 = (undefined1)((uint)fVar7 >> 8);
  uVar20 = (undefined1)((uint)fVar7 >> 0x10);
  uVar21 = (undefined1)((uint)fVar7 >> 0x18);
  auVar28._0_4_ = fVar9 * ABS(auVar37._0_4_);
  auVar28._4_4_ = fVar10 * ABS(auVar37._4_4_);
  auVar28._8_4_ = fVar11 * ABS(auVar37._8_4_);
  auVar28._12_4_ = 0;
  fVar9 = fVar9 * ABS(auVar6._0_4_);
  fVar10 = fVar10 * ABS(auVar6._4_4_);
  fVar11 = fVar11 * ABS(auVar6._8_4_);
  auVar6[4] = SUB41(fVar25,0);
  auVar6._0_4_ = fVar38;
  auVar6[5] = uVar16;
  auVar6[6] = uVar17;
  auVar6[7] = uVar18;
  auVar6[8] = SUB41(fVar7,0);
  auVar6[9] = uVar19;
  auVar6[10] = uVar20;
  auVar6[0xb] = uVar21;
  auVar6._12_4_ = 0;
  auVar36[4] = SUB41(fVar25,0);
  auVar36._0_4_ = fVar38;
  auVar36[5] = uVar16;
  auVar36[6] = uVar17;
  auVar36[7] = uVar18;
  auVar36[8] = SUB41(fVar7,0);
  auVar36[9] = uVar19;
  auVar36[10] = uVar20;
  auVar36[0xb] = uVar21;
  auVar36._12_4_ = 0;
  auVar35 = NEON_ext(auVar6,auVar36,8,1);
  auVar37 = NEON_ext(auVar28,auVar28,8,1);
  fVar38 = auVar35._0_4_ + fVar38 + fVar25;
  fVar25 = auVar37._0_4_ + auVar28._0_4_ + auVar28._4_4_;
  auVar35._4_4_ = fVar10;
  auVar35._0_4_ = fVar9;
  auVar35._8_4_ = fVar11;
  auVar35._12_4_ = 0;
  auVar37._4_4_ = fVar10;
  auVar37._0_4_ = fVar9;
  auVar37._8_4_ = fVar11;
  auVar37._12_4_ = 0;
  auVar35 = NEON_ext(auVar35,auVar37,8,1);
  fVar7 = fVar9 + fVar10 + auVar35._0_4_ + auVar35._4_4_;
  param_3[1] = (ulong)(uint)(fVar30 - fVar7);
  *param_3 = CONCAT44(fVar29 - fVar25,fVar8 - fVar38);
  param_4[1] = CONCAT44((float)((ulong)uVar39 >> 0x20) + 0.0 + 0.0,fVar30 + fVar7);
  *param_4 = CONCAT44(fVar29 + fVar25,fVar8 + fVar38);
  return;
}



/* Entry: 1098168b8; end: 109816973;  */

void FUN_1098168b8(float param_1,long *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  float fStack_88;
  undefined1 auStack_80 [8];
  float fStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = 0;
  uStack_70 = 0x3f800000;
  uStack_58 = 0;
  uStack_60 = 0x3f80000000000000;
  uStack_48 = 0x3f800000;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(*param_2 + 0x10))(param_2,&uStack_70,auStack_80,auStack_90);
  fVar1 = (auStack_90._0_4_ - auStack_80._0_4_) * 0.5;
  fVar2 = (auStack_90._4_4_ - auStack_80._4_4_) * 0.5;
  fVar3 = (fStack_88 - fStack_78) * 0.5;
  fVar3 = fVar3 + fVar3;
  param_1 = param_1 / 12.0;
  fVar3 = fVar3 * fVar3;
  fVar1 = fVar1 + fVar1;
  fVar2 = fVar2 + fVar2;
  uVar4 = NEON_rev64(CONCAT44(fVar3 + fVar2 * fVar2,fVar3 + fVar1 * fVar1),4);
  *param_3 = CONCAT44((float)((ulong)uVar4 >> 0x20) * param_1,(float)uVar4 * param_1);
  *(float *)(param_3 + 1) = param_1 * (fVar2 * fVar2 + fVar1 * fVar1);
  return;
}



/* Entry: 109816974; end: 109816b3f;  */

void FUN_109816974(float param_1,float *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  param_3[1] = 0;
  *param_3 = 0x3f800000;
  param_3[3] = 0;
  param_3[2] = 0x3f80000000000000;
  param_3[5] = 0x3f800000;
  param_3[4] = 0;
  if (0 < param_4) {
    do {
      fVar6 = ABS(param_2[1]);
      fVar7 = ABS(param_2[2]);
      lVar2 = 2;
      fVar8 = fVar6;
      if (fVar6 < fVar7) {
        lVar2 = 1;
        fVar8 = fVar7;
      }
      lVar3 = 2;
      if (fVar7 <= fVar6) {
        lVar3 = 1;
      }
      fVar7 = ABS(param_2[6]);
      fVar6 = fVar8;
      if (fVar8 < fVar7) {
        lVar2 = 0;
        lVar3 = 2;
        fVar6 = fVar7;
      }
      uVar4 = (ulong)(fVar8 < fVar7);
      fVar8 = param_1 * (ABS(*param_2) + ABS(param_2[5]) + ABS(param_2[10]));
      iVar1 = param_4;
      if (fVar6 <= fVar8) {
        if (fVar6 <= fVar8 * 1.1920929e-07) {
          return;
        }
        iVar1 = 1;
      }
      fVar7 = param_2[uVar4 * 4 + lVar3];
      fVar10 = param_2[lVar3 * 5];
      fVar11 = param_2[uVar4 * 5];
      fVar8 = (fVar10 - fVar11) / (fVar7 + fVar7);
      fVar6 = fVar8 * fVar8;
      if (8.388608e+07 <= fVar6 * fVar6) {
        fVar6 = 1.0 / (fVar8 * (0.5 / fVar6 + 2.0));
        fVar8 = fVar6 * fVar6 * -0.5 + 1.0;
      }
      else {
        fVar9 = -SQRT(fVar6 + 1.0);
        if (0.0 <= fVar8) {
          fVar9 = SQRT(fVar6 + 1.0);
        }
        fVar6 = 1.0 / (fVar8 + fVar9);
        fVar8 = 1.0 / SQRT(fVar6 * fVar6 + 1.0);
      }
      fVar9 = fVar6 * fVar8;
      lVar5 = 0;
      param_2[lVar3 * 4 + uVar4] = 0.0;
      param_2[uVar4 * 4 + lVar3] = 0.0;
      param_2[uVar4 * 5] = fVar11 - fVar7 * fVar6;
      param_2[lVar3 * 5] = fVar10 + fVar7 * fVar6;
      fVar6 = param_2[lVar2 * 4 + uVar4];
      fVar7 = param_2[lVar2 * 4 + lVar3];
      fVar10 = -(fVar9 * fVar7) + fVar6 * fVar8;
      param_2[uVar4 * 4 + lVar2] = fVar10;
      param_2[lVar2 * 4 + uVar4] = fVar10;
      fVar6 = fVar9 * fVar6 + fVar7 * fVar8;
      param_2[lVar3 * 4 + lVar2] = fVar6;
      param_2[lVar2 * 4 + lVar3] = fVar6;
      do {
        fVar6 = *(float *)((long)param_3 + lVar5 + uVar4 * 4);
        fVar7 = *(float *)((long)param_3 + lVar5 + lVar3 * 4);
        *(float *)((long)param_3 + lVar5 + uVar4 * 4) = fVar7 * -fVar9 + fVar6 * fVar8;
        *(float *)((long)param_3 + lVar5 + lVar3 * 4) = fVar9 * fVar6 + fVar7 * fVar8;
        lVar5 = lVar5 + 0x10;
      } while (lVar5 != 0x30);
      param_4 = iVar1 + -1;
    } while (param_4 != 0 && 0 < iVar1);
  }
  return;
}



/* Entry: 109816b40; end: 109816ccf;  */

void FUN_109816b40(long *param_1,float *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  
  if (0 < *(int *)((long)param_1 + 0x24)) {
    lVar3 = 0;
    lVar4 = 0x30;
    do {
      puVar1 = (undefined8 *)(param_1[6] + lVar4);
      uStack_a8 = puVar1[-5];
      uStack_b0 = puVar1[-6];
      uStack_98 = puVar1[-3];
      uStack_a0 = puVar1[-4];
      uStack_88 = puVar1[-1];
      uStack_90 = puVar1[-2];
      uStack_78 = puVar1[1];
      uStack_80 = *puVar1;
      plVar2 = (long *)puVar1[2];
      (**(code **)(*plVar2 + 0x38))();
      auVar5 = *(undefined1 (*) [16])(param_1 + 0xe);
      auVar6 = NEON_frecpe(auVar5,4);
      auVar7 = NEON_frecps(auVar5,auVar6,4);
      auVar8._0_4_ = auVar6._0_4_ * auVar7._0_4_;
      auVar8._4_4_ = auVar6._4_4_ * auVar7._4_4_;
      auVar8._8_4_ = auVar6._8_4_ * auVar7._8_4_;
      auVar8._12_4_ = auVar6._12_4_ * auVar7._12_4_;
      auVar5 = NEON_frecps(auVar5,auVar8,4);
      uStack_c0 = CONCAT44(auVar5._4_4_ *
                           (float)((ulong)*plVar2 >> 0x20) * param_2[1] * auVar8._4_4_,
                           auVar5._0_4_ * (float)*plVar2 * *param_2 * auVar8._0_4_);
      uStack_b8 = CONCAT44(auVar5._12_4_ *
                           (float)((ulong)plVar2[1] >> 0x20) * param_2[3] * auVar8._12_4_,
                           auVar5._8_4_ * (float)plVar2[1] * param_2[2] * auVar8._8_4_);
      plVar2 = *(long **)(param_1[6] + lVar4 + 0x10);
      (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_c0);
      auVar5 = *(undefined1 (*) [16])(param_1 + 0xe);
      auVar6 = NEON_frecpe(auVar5,4);
      auVar8 = NEON_frecps(auVar5,auVar6,4);
      auVar7._0_4_ = auVar6._0_4_ * auVar8._0_4_;
      auVar7._4_4_ = auVar6._4_4_ * auVar8._4_4_;
      auVar7._8_4_ = auVar6._8_4_ * auVar8._8_4_;
      auVar7._12_4_ = auVar6._12_4_ * auVar8._12_4_;
      auVar5 = NEON_frecps(auVar5,auVar7,4);
      uStack_80 = CONCAT44(auVar5._4_4_ *
                           uStack_80._4_4_ * (float)((ulong)*(undefined8 *)param_2 >> 0x20) *
                           auVar7._4_4_,
                           auVar5._0_4_ *
                           (float)uStack_80 * (float)*(undefined8 *)param_2 * auVar7._0_4_);
      uStack_78 = CONCAT44(auVar5._12_4_ *
                           uStack_78._4_4_ * (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) *
                           auVar7._12_4_,
                           auVar5._8_4_ *
                           (float)uStack_78 * (float)*(undefined8 *)(param_2 + 2) * auVar7._8_4_);
      puVar1 = (undefined8 *)(param_1[6] + lVar4);
      puVar1[-5] = uStack_a8;
      puVar1[-6] = uStack_b0;
      puVar1[-3] = uStack_98;
      puVar1[-4] = uStack_a0;
      puVar1[-1] = uStack_88;
      puVar1[-2] = uStack_90;
      puVar1[1] = uStack_78;
      *puVar1 = uStack_80;
      if (param_1[0xc] != 0) {
        plVar2 = *(long **)(param_1[6] + lVar4 + 0x10);
        (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_b0,&uStack_40,&uStack_50);
        uStack_68 = uStack_38;
        uStack_70 = uStack_40;
        uStack_58 = uStack_48;
        uStack_60 = uStack_50;
        func_0x000109802284(param_1[0xc],*(undefined8 *)(param_1[6] + lVar4 + 0x20),&uStack_70);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x60;
    } while (lVar3 < *(int *)((long)param_1 + 0x24));
  }
  lVar3 = *(long *)param_2;
  param_1[0xf] = *(long *)(param_2 + 2);
  param_1[0xe] = lVar3;
  (**(code **)(*param_1 + 0x88))(param_1);
  return;
}



/* Entry: 109816cd0; end: 109816ef3;  */

undefined * FUN_109816cd0(long param_1,long param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  FUN_109816008();
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x6c);
  iVar1 = *(int *)(param_1 + 0x24);
  *(int *)(param_2 + 0x18) = iVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (iVar1 != 0) {
    plVar2 = param_3;
    (**(code **)(*param_3 + 0x20))(param_3,0x50);
    lVar10 = plVar2[1];
    plVar3 = param_3;
    (**(code **)(*param_3 + 0x38))(param_3,lVar10);
    *(long **)(param_2 + 0x10) = plVar3;
    if (0 < *(int *)(param_2 + 0x18)) {
      lVar11 = 0;
      lVar12 = 0;
      lVar5 = *(long *)(param_1 + 0x30);
      do {
        lVar5 = lVar5 + lVar12 * 0x60;
        *(undefined4 *)(lVar10 + 0x4c) = *(undefined4 *)(lVar5 + 0x4c);
        plVar3 = param_3;
        (**(code **)(*param_3 + 0x38))(param_3,*(undefined8 *)(lVar5 + 0x40));
        *(long **)(lVar10 + 0x40) = plVar3;
        plVar3 = param_3;
        (**(code **)(*param_3 + 0x30))
                  (param_3,*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar12 * 0x60 + 0x40));
        if (plVar3 == (long *)0x0) {
          plVar4 = *(long **)(*(long *)(param_1 + 0x30) + lVar12 * 0x60 + 0x40);
          (**(code **)(*plVar4 + 0x68))();
          plVar3 = param_3;
          (**(code **)(*param_3 + 0x20))(param_3,(long)(int)plVar4,1);
          plVar4 = *(long **)(*(long *)(param_1 + 0x30) + lVar12 * 0x60 + 0x40);
          (**(code **)(*plVar4 + 0x70))(plVar4,plVar3[1],param_3);
          (**(code **)(*param_3 + 0x28))
                    (param_3,plVar3,plVar4,0x50414853,
                     *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar12 * 0x60 + 0x40));
        }
        lVar6 = 0;
        lVar5 = *(long *)(param_1 + 0x30);
        *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(lVar5 + lVar12 * 0x60 + 0x48);
        lVar7 = lVar5 + lVar11;
        lVar8 = lVar10;
        do {
          lVar9 = 0;
          do {
            *(undefined4 *)(lVar8 + lVar9) = *(undefined4 *)(lVar7 + lVar9);
            lVar9 = lVar9 + 4;
          } while (lVar9 != 0x10);
          lVar6 = lVar6 + 1;
          lVar8 = lVar8 + 0x10;
          lVar7 = lVar7 + 0x10;
        } while (lVar6 != 3);
        lVar6 = 0x30;
        do {
          *(undefined4 *)(lVar10 + lVar6) = *(undefined4 *)(lVar5 + lVar11 + lVar6);
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0x40);
        lVar12 = lVar12 + 1;
        lVar10 = lVar10 + 0x50;
        lVar11 = lVar11 + 0x60;
      } while (lVar12 < *(int *)(param_2 + 0x18));
    }
    (**(code **)(*param_3 + 0x28))(param_3,plVar2,&UNK_10f580acc,0x59415241,plVar2[1]);
  }
  return &UNK_10f580ae5;
}



/* Entry: 109816ef4; end: 109816f1f;  */

long FUN_109816ef4(long param_1)

{
  return param_1 + 0x70;
}



/* Entry: 109816f20; end: 109816f6b;  */

long FUN_109816f20(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109816f6c; end: 1098170ab;  */

void FUN_109816f6c(undefined4 param_1,long param_2,float *param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long *plVar10;
  long *plVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar44;
  undefined1 auVar40 [12];
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar51;
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  undefined4 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined4 uStack_30;
  long lStack_18;
  undefined1 auVar41 [16];
  
  uVar15 = (undefined4)((ulong)param_6 >> 0x20);
  uVar14 = (undefined4)param_6;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar39 = *param_3;
  fVar44 = param_3[1];
  fVar45 = param_3[2];
  fVar19 = (float)*(undefined8 *)(param_2 + 0x50) * fVar39;
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) * fVar44;
  uVar20 = (undefined1)((uint)fVar3 >> 8);
  uVar21 = (undefined1)((uint)fVar3 >> 0x10);
  uVar22 = (undefined1)((uint)fVar3 >> 0x18);
  fVar46 = (float)*(undefined8 *)(param_2 + 0x58) * fVar45;
  uVar23 = (undefined1)((uint)fVar46 >> 8);
  uVar24 = (undefined1)((uint)fVar46 >> 0x10);
  uVar25 = (undefined1)((uint)fVar46 >> 0x18);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20) * param_3[3];
  uVar26 = (undefined1)((uint)fVar5 >> 8);
  uVar27 = (undefined1)((uint)fVar5 >> 0x10);
  uVar28 = (undefined1)((uint)fVar5 >> 0x18);
  auVar53._0_4_ = fVar39 * *(float *)(param_2 + 0x60);
  auVar53._4_4_ = fVar44 * *(float *)(param_2 + 100);
  auVar53._8_4_ = fVar45 * *(float *)(param_2 + 0x68);
  auVar53._12_4_ = param_3[3] * *(float *)(param_2 + 0x6c);
  auVar50._0_4_ = fVar39 * *(float *)(param_2 + 0x70);
  auVar50._4_4_ = fVar44 * *(float *)(param_2 + 0x74);
  auVar50._8_4_ = fVar45 * *(float *)(param_2 + 0x78);
  auVar32[4] = SUB41(fVar3,0);
  auVar32._0_4_ = fVar19;
  auVar32[5] = uVar20;
  auVar32[6] = uVar21;
  auVar32[7] = uVar22;
  auVar32[8] = SUB41(fVar46,0);
  auVar32[9] = uVar23;
  auVar32[10] = uVar24;
  auVar32[0xb] = uVar25;
  auVar32[0xc] = SUB41(fVar5,0);
  auVar32[0xd] = uVar26;
  auVar32[0xe] = uVar27;
  auVar32[0xf] = uVar28;
  auVar29[4] = SUB41(fVar3,0);
  auVar29._0_4_ = fVar19;
  auVar29[5] = uVar20;
  auVar29[6] = uVar21;
  auVar29[7] = uVar22;
  auVar29[8] = SUB41(fVar46,0);
  auVar29[9] = uVar23;
  auVar29[10] = uVar24;
  auVar29[0xb] = uVar25;
  auVar29[0xc] = SUB41(fVar5,0);
  auVar29[0xd] = uVar26;
  auVar29[0xe] = uVar27;
  auVar29[0xf] = uVar28;
  auVar29 = NEON_ext(auVar32,auVar29,8,1);
  auVar32 = NEON_ext(auVar53,auVar53,8,1);
  auVar50._12_4_ = 0;
  fVar46 = auVar53._0_4_ + auVar53._4_4_ + auVar32._0_4_;
  auVar32 = NEON_ext(auVar50,auVar50,8,1);
  puStack_48 = &uStack_58;
  plVar10 = *(long **)(param_2 + 0x38);
  uStack_50 = *(undefined8 *)(param_2 + 0x40);
  uStack_38 = (ulong)(uint)(auVar50._0_4_ + auVar50._4_4_ + auVar32._0_4_ + auVar32._4_4_);
  uStack_40 = CONCAT17((char)((uint)fVar46 >> 0x18),
                       CONCAT16((char)((uint)fVar46 >> 0x10),
                                CONCAT15((char)((uint)fVar46 >> 8),
                                         CONCAT14(SUB41(fVar46,0),fVar19 + fVar3 + auVar29._0_4_))))
  ;
  pfVar12 = (float *)&uStack_50;
  pfVar13 = (float *)0x1;
  uStack_58 = param_4;
  uStack_54 = param_5;
  uStack_30 = param_1;
  uStack_c8 = param_5;
  (**(code **)(*plVar10 + 0x18))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  fVar19 = (float)___stack_chk_fail();
  uStack_68 = 0x109817020;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)plVar10[0x1c];
  uStack_c4 = uVar14;
  puStack_70 = &stack0xfffffffffffffff0;
  if (fVar19 <= *(float *)(plVar11 + 1)) {
    lStack_c0 = plVar10[0x1d];
    puStack_b8 = &uStack_c8;
    uStack_b0 = *(undefined8 *)pfVar12;
    uStack_a8 = *(undefined8 *)(pfVar12 + 2);
    uStack_98 = *(undefined8 *)(pfVar13 + 2);
    uStack_a0 = *(undefined8 *)pfVar13;
    pfVar12 = (float *)&lStack_c0;
    pfVar13 = (float *)0x1;
    fStack_90 = fVar19;
    (**(code **)(*plVar11 + 0x18))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar1 = (float *)CONCAT44(uVar15,uVar14);
  fVar19 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar46 = pfVar1[4];
  fVar5 = pfVar1[5];
  lVar2 = CONCAT44(uVar15,uVar14);
  auVar32 = *(undefined1 (*) [16])(lVar2 + 0x20);
  uVar4 = *(undefined8 *)(lVar2 + 0x38);
  fVar18 = auVar32._4_4_;
  auVar29 = NEON_ext(auVar32,auVar32,8,1);
  auVar6._4_4_ = fVar46;
  auVar6._0_4_ = fVar19;
  auVar6._8_4_ = pfVar1[2];
  auVar6._12_4_ = pfVar1[6];
  auVar7._4_4_ = fVar46;
  auVar7._0_4_ = fVar19;
  auVar7._8_4_ = pfVar1[2];
  auVar7._12_4_ = pfVar1[6];
  auVar50 = NEON_ext(auVar6,auVar7,8,1);
  fVar47 = auVar32._0_4_;
  auVar40._0_8_ = *(ulong *)(lVar2 + 0x30) ^ 0x8000000080000000;
  auVar40[8] = (char)uVar4;
  auVar40[9] = (char)((ulong)uVar4 >> 8);
  auVar40[10] = (char)((ulong)uVar4 >> 0x10);
  auVar40[0xb] = (byte)((ulong)uVar4 >> 0x18) ^ 0x80;
  auVar41[0xc] = (char)((ulong)uVar4 >> 0x20);
  auVar41._0_12_ = auVar40;
  auVar41[0xd] = (char)((ulong)uVar4 >> 0x28);
  auVar41[0xe] = (char)((ulong)uVar4 >> 0x30);
  auVar41[0xf] = (byte)((ulong)uVar4 >> 0x38) ^ 0x80;
  fVar39 = (float)auVar40._0_8_;
  auVar52._0_4_ = fVar19 * fVar39;
  fVar44 = (float)(auVar40._0_8_ >> 0x20);
  auVar52._4_4_ = fVar46 * fVar44;
  fVar45 = auVar40._8_4_;
  auVar52._8_4_ = fVar47 * fVar45;
  auVar52._12_4_ = auVar41._12_4_ * 0.0;
  auVar33._0_4_ = fVar3 * fVar39;
  auVar33._4_4_ = fVar5 * fVar44;
  auVar33._8_4_ = fVar18 * fVar45;
  auVar33._12_4_ = auVar41._12_4_ * 0.0;
  auVar53 = NEON_ext(auVar52,auVar52,8,1);
  auVar32 = NEON_ext(auVar33,auVar33,8,1);
  fVar35 = auVar29._0_4_;
  fVar31 = auVar52._0_4_ + auVar52._4_4_ + auVar53._0_4_;
  fVar34 = auVar33._0_4_ + auVar33._4_4_ + auVar32._0_4_;
  fVar49 = auVar50._0_4_;
  auVar36._0_4_ = fVar49 * fVar39;
  fVar51 = auVar50._4_4_;
  auVar36._4_4_ = fVar51 * fVar44;
  auVar36._8_4_ = fVar35 * fVar45;
  auVar36._12_4_ = 0;
  auVar32 = NEON_ext(auVar36,auVar36,8,1);
  fVar17 = auVar36._0_4_ + auVar36._4_4_ + auVar32._0_4_ + auVar32._4_4_;
  fVar39 = *pfVar12;
  fVar44 = pfVar12[1];
  fVar45 = pfVar12[2];
  auVar42._0_4_ = fVar19 * fVar39;
  auVar42._4_4_ = fVar46 * fVar44;
  auVar42._8_4_ = fVar47 * fVar45;
  auVar42._12_4_ = pfVar12[3] * 0.0;
  auVar54._0_4_ = fVar3 * fVar39;
  auVar54._4_4_ = fVar5 * fVar44;
  auVar54._8_4_ = fVar18 * fVar45;
  auVar54._12_4_ = pfVar12[3] * 0.0;
  auVar37._0_4_ = fVar49 * fVar39;
  auVar37._4_4_ = fVar51 * fVar44;
  auVar37._8_4_ = fVar35 * fVar45;
  auVar29 = NEON_ext(auVar42,auVar42,8,1);
  auVar50 = NEON_ext(auVar54,auVar54,8,1);
  auVar37._12_4_ = 0;
  auVar32 = NEON_ext(auVar37,auVar37,8,1);
  auVar38._0_4_ = fVar31 + auVar42._0_4_ + auVar42._4_4_ + auVar29._0_4_;
  auVar38._4_4_ = fVar34 + auVar54._0_4_ + auVar54._4_4_ + auVar50._0_4_;
  auVar38._8_4_ = fVar17 + auVar37._0_4_ + auVar37._4_4_ + auVar32._0_4_ + auVar32._4_4_;
  auVar38._12_4_ = 0;
  fVar39 = *pfVar13;
  fVar44 = pfVar13[1];
  fVar45 = pfVar13[2];
  fVar19 = fVar19 * fVar39;
  fVar46 = fVar46 * fVar44;
  fVar48 = pfVar13[3] * 0.0;
  auVar55._0_4_ = fVar3 * fVar39;
  auVar55._4_4_ = fVar5 * fVar44;
  auVar55._8_4_ = fVar18 * fVar45;
  auVar55._12_4_ = pfVar13[3] * 0.0;
  auVar43._0_4_ = fVar49 * fVar39;
  auVar43._4_4_ = fVar51 * fVar44;
  auVar43._8_4_ = fVar35 * fVar45;
  auVar8._4_4_ = fVar46;
  auVar8._0_4_ = fVar19;
  auVar8._8_4_ = fVar47 * fVar45;
  auVar8._12_4_ = fVar48;
  auVar9._4_4_ = fVar46;
  auVar9._0_4_ = fVar19;
  auVar9._8_4_ = fVar47 * fVar45;
  auVar9._12_4_ = fVar48;
  auVar32 = NEON_ext(auVar8,auVar9,8,1);
  auVar50 = NEON_ext(auVar55,auVar55,8,1);
  auVar43._12_4_ = 0;
  auVar29 = NEON_ext(auVar43,auVar43,8,1);
  auVar30._0_4_ = fVar31 + fVar19 + fVar46 + auVar32._0_4_;
  auVar30._4_4_ = fVar34 + auVar55._0_4_ + auVar55._4_4_ + auVar50._0_4_;
  auVar30._8_4_ = fVar17 + auVar43._0_4_ + auVar43._4_4_ + auVar29._0_4_ + auVar29._4_4_;
  auVar30._12_4_ = 0;
  NEON_fmin(auVar38,auVar30,4);
  NEON_fmax(auVar38,auVar30,4);
  (**(code **)(*plVar11 + 0x80))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return;
}



/* Entry: 1098170ac; end: 10981722f;  */

void FUN_1098170ac(long *param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5,
                  long param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar20;
  undefined1 auVar16 [12];
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar28;
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **appuStack_b0 [2];
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  undefined8 uStack_70;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  undefined1 auVar17 [16];
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fStack_60 = *param_5;
  fStack_5c = param_5[1];
  fStack_58 = param_5[2];
  fStack_54 = param_5[3];
  fStack_50 = param_5[4];
  fStack_4c = param_5[5];
  fStack_48 = param_5[6];
  fStack_44 = param_5[7];
  pauVar1 = (undefined1 (*) [16])(param_5 + 8);
  uStack_38 = *(undefined8 *)(param_5 + 10);
  uStack_40 = *(undefined8 *)*pauVar1;
  uStack_28 = *(undefined8 *)(param_5 + 0xe);
  uStack_30 = *(ulong *)(param_5 + 0xc);
  fVar5 = (float)((ulong)uStack_40 >> 0x20);
  auVar11 = NEON_ext(*pauVar1,*pauVar1,8,1);
  auVar27._4_4_ = fStack_50;
  auVar27._0_4_ = fStack_60;
  auVar27._8_4_ = fStack_58;
  auVar27._12_4_ = fStack_48;
  auVar30._4_4_ = fStack_50;
  auVar30._0_4_ = fStack_60;
  auVar30._8_4_ = fStack_58;
  auVar30._12_4_ = fStack_48;
  auVar27 = NEON_ext(auVar27,auVar30,8,1);
  fVar24 = (float)uStack_40;
  auVar16._0_8_ = uStack_30 ^ 0x8000000080000000;
  auVar16[8] = (char)uStack_28;
  auVar16[9] = (char)((ulong)uStack_28 >> 8);
  auVar16[10] = (char)((ulong)uStack_28 >> 0x10);
  auVar16[0xb] = (byte)((ulong)uStack_28 >> 0x18) ^ 0x80;
  auVar17[0xc] = (char)((ulong)uStack_28 >> 0x20);
  auVar17._0_12_ = auVar16;
  auVar17[0xd] = (char)((ulong)uStack_28 >> 0x28);
  auVar17[0xe] = (char)((ulong)uStack_28 >> 0x30);
  auVar17[0xf] = (byte)((ulong)uStack_28 >> 0x38) ^ 0x80;
  fVar15 = (float)auVar16._0_8_;
  auVar29._0_4_ = fStack_60 * fVar15;
  fVar20 = (float)(auVar16._0_8_ >> 0x20);
  auVar29._4_4_ = fStack_50 * fVar20;
  fVar21 = auVar16._8_4_;
  auVar29._8_4_ = fVar24 * fVar21;
  auVar29._12_4_ = auVar17._12_4_ * 0.0;
  auVar7._0_4_ = fStack_5c * fVar15;
  auVar7._4_4_ = fStack_4c * fVar20;
  auVar7._8_4_ = fVar5 * fVar21;
  auVar7._12_4_ = auVar17._12_4_ * 0.0;
  auVar30 = NEON_ext(auVar29,auVar29,8,1);
  auVar8 = NEON_ext(auVar7,auVar7,8,1);
  fVar10 = auVar11._0_4_;
  fVar6 = auVar29._0_4_ + auVar29._4_4_ + auVar30._0_4_;
  fVar9 = auVar7._0_4_ + auVar7._4_4_ + auVar8._0_4_;
  fVar26 = auVar27._0_4_;
  auVar12._0_4_ = fVar26 * fVar15;
  fVar28 = auVar27._4_4_;
  auVar12._4_4_ = fVar28 * fVar20;
  auVar12._8_4_ = fVar10 * fVar21;
  auVar12._12_4_ = 0;
  auVar8 = NEON_ext(auVar12,auVar12,8,1);
  fVar4 = auVar12._0_4_ + auVar12._4_4_ + auVar8._0_4_ + auVar8._4_4_;
  fVar15 = *param_2;
  fVar20 = param_2[1];
  fVar21 = param_2[2];
  auVar18._0_4_ = fStack_60 * fVar15;
  auVar18._4_4_ = fStack_50 * fVar20;
  auVar18._8_4_ = fVar24 * fVar21;
  auVar18._12_4_ = param_2[3] * 0.0;
  auVar31._0_4_ = fStack_5c * fVar15;
  auVar31._4_4_ = fStack_4c * fVar20;
  auVar31._8_4_ = fVar5 * fVar21;
  auVar31._12_4_ = param_2[3] * 0.0;
  auVar13._0_4_ = fVar26 * fVar15;
  auVar13._4_4_ = fVar28 * fVar20;
  auVar13._8_4_ = fVar10 * fVar21;
  auVar11 = NEON_ext(auVar18,auVar18,8,1);
  auVar27 = NEON_ext(auVar31,auVar31,8,1);
  auVar13._12_4_ = 0;
  auVar8 = NEON_ext(auVar13,auVar13,8,1);
  auVar14._0_8_ =
       CONCAT44(fVar9 + auVar31._0_4_ + auVar31._4_4_ + auVar27._0_4_,
                fVar6 + auVar18._0_4_ + auVar18._4_4_ + auVar11._0_4_);
  auVar14._8_4_ = fVar4 + auVar13._0_4_ + auVar13._4_4_ + auVar8._0_4_ + auVar8._4_4_;
  auVar14._12_4_ = 0;
  fVar15 = *param_3;
  fVar20 = param_3[1];
  fVar21 = param_3[2];
  fVar22 = fStack_60 * fVar15;
  fVar23 = fStack_50 * fVar20;
  fVar25 = param_3[3] * 0.0;
  auVar32._0_4_ = fStack_5c * fVar15;
  auVar32._4_4_ = fStack_4c * fVar20;
  auVar32._8_4_ = fVar5 * fVar21;
  auVar32._12_4_ = param_3[3] * 0.0;
  auVar19._0_4_ = fVar26 * fVar15;
  auVar19._4_4_ = fVar28 * fVar20;
  auVar19._8_4_ = fVar10 * fVar21;
  auVar2._4_4_ = fVar23;
  auVar2._0_4_ = fVar22;
  auVar2._8_4_ = fVar24 * fVar21;
  auVar2._12_4_ = fVar25;
  auVar3._4_4_ = fVar23;
  auVar3._0_4_ = fVar22;
  auVar3._8_4_ = fVar24 * fVar21;
  auVar3._12_4_ = fVar25;
  auVar8 = NEON_ext(auVar2,auVar3,8,1);
  auVar27 = NEON_ext(auVar32,auVar32,8,1);
  auVar19._12_4_ = 0;
  auVar11 = NEON_ext(auVar19,auVar19,8,1);
  fVar6 = fVar6 + fVar22 + fVar23 + auVar8._0_4_;
  fVar9 = fVar9 + auVar32._0_4_ + auVar32._4_4_ + auVar27._0_4_;
  fVar4 = fVar4 + auVar19._0_4_ + auVar19._4_4_ + auVar11._0_4_ + auVar11._4_4_;
  uStack_80 = *(undefined4 *)(param_6 + 0x20);
  uStack_98 = (ulong)(uint)auVar14._8_4_;
  uStack_88 = (ulong)(uint)fVar4;
  uStack_90 = CONCAT44(fVar9,fVar6);
  appuStack_b0[0] = &PTR_FUN_110b134e8;
  uStack_7c = *(undefined4 *)(param_6 + 8);
  auVar8._4_4_ = fVar9;
  auVar8._0_4_ = fVar6;
  auVar8._8_4_ = fVar4;
  auVar8._12_4_ = 0;
  auVar27 = NEON_fmin(auVar14,auVar8,4);
  auVar11._4_4_ = fVar9;
  auVar11._0_4_ = fVar6;
  auVar11._8_4_ = fVar4;
  auVar11._12_4_ = 0;
  auVar8 = NEON_fmax(auVar14,auVar11,4);
  uStack_c8 = auVar8._8_8_;
  uStack_d0 = auVar8._0_8_;
  uStack_b8 = auVar27._8_8_;
  uStack_c0 = auVar27._0_8_;
  uStack_a0 = auVar14._0_8_;
  lStack_78 = param_6;
  uStack_70 = param_4;
  (**(code **)(*param_1 + 0x80))(param_1,appuStack_b0,&uStack_c0,&uStack_d0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return;
}



/* Entry: 109817230; end: 109817233;  */

void FUN_109817230(void)

{
  return;
}



/* Entry: 109817234; end: 10981748f;  */

void FUN_109817234(undefined4 param_1,long *param_2,long *param_3,undefined8 *param_4,float *param_5
                  ,undefined8 param_6,undefined1 (*param_7) [16],long param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined8 extraout_d3;
  undefined8 extraout_var;
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  undefined1 auVar20 [16];
  float fVar22;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  float fVar34;
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  float fVar43;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined **ppuStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar11 = param_7[2];
  uVar1 = *(ulong *)param_7[3];
  uVar2 = *(undefined8 *)(param_7[3] + 8);
  auVar9 = NEON_ext(auVar11,auVar11,8,1);
  fVar8 = auVar9._0_4_;
  auVar9 = *param_7;
  auVar30 = param_7[1];
  uVar3 = param_4[6];
  uVar4 = param_4[7];
  fVar7 = *param_5;
  fVar10 = param_5[1];
  fVar12 = param_5[2];
  fVar19 = param_5[4];
  fVar21 = param_5[5];
  fVar37 = param_5[6];
  fVar40 = param_5[8];
  fVar42 = param_5[9];
  fVar43 = param_5[10];
  uVar5 = *(undefined8 *)(param_5 + 0xc);
  uVar6 = *(undefined8 *)(param_5 + 0xe);
  fVar34 = auVar9._4_4_;
  fVar35 = auVar9._8_4_;
  fVar39 = auVar30._4_4_;
  fVar41 = auVar30._8_4_;
  fVar26 = auVar11._4_4_;
  fStack_90 = fVar7 * fVar34 + fVar19 * fVar39 + fVar40 * fVar26;
  fStack_8c = fVar10 * fVar34 + fVar21 * fVar39 + fVar42 * fVar26;
  fStack_88 = fVar12 * fVar34 + fVar37 * fVar39 + fVar43 * fVar26;
  fStack_84 = fVar34 * 0.0 + fVar39 * 0.0 + fVar26 * 0.0;
  fVar28 = auVar9._0_4_;
  fVar36 = auVar30._0_4_;
  fVar22 = auVar11._0_4_;
  fStack_a0 = fVar7 * fVar28 + fVar19 * fVar36 + fVar40 * fVar22;
  fStack_9c = fVar10 * fVar28 + fVar21 * fVar36 + fVar42 * fVar22;
  fStack_98 = fVar12 * fVar28 + fVar37 * fVar36 + fVar43 * fVar22;
  fStack_94 = fVar28 * 0.0 + fVar36 * 0.0 + fVar22 * 0.0;
  fVar27 = auVar11._8_4_;
  fStack_80 = fVar7 * fVar35 + fVar19 * fVar41 + fVar40 * fVar27;
  fStack_7c = fVar10 * fVar35 + fVar21 * fVar41 + fVar42 * fVar27;
  fStack_78 = fVar12 * fVar35 + fVar37 * fVar41 + fVar43 * fVar27;
  fStack_74 = fVar35 * 0.0 + fVar41 * 0.0 + fVar27 * 0.0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_bc = (**(code **)(*param_2 + 0x60))();
  uStack_180 = *param_4;
  uStack_178 = param_4[1];
  uStack_170 = param_4[2];
  uStack_168 = param_4[3];
  uStack_160 = param_4[4];
  uStack_158 = param_4[5];
  uStack_150 = param_4[6];
  uStack_148 = param_4[7];
  uStack_140 = *(undefined8 *)param_5;
  uStack_138 = *(undefined8 *)(param_5 + 2);
  uStack_130 = *(undefined8 *)(param_5 + 4);
  uStack_128 = *(undefined8 *)(param_5 + 6);
  uStack_120 = *(undefined8 *)(param_5 + 8);
  uStack_118 = *(undefined8 *)(param_5 + 10);
  uStack_110 = *(undefined8 *)(param_5 + 0xc);
  uStack_108 = *(undefined8 *)(param_5 + 0xe);
  uStack_100 = *(undefined8 *)*param_7;
  uStack_f8 = *(undefined8 *)(*param_7 + 8);
  uStack_f0 = *(undefined8 *)param_7[1];
  uStack_e8 = *(undefined8 *)(param_7[1] + 8);
  uStack_e0 = *(undefined8 *)param_7[2];
  uStack_d8 = *(undefined8 *)(param_7[2] + 8);
  uStack_d0 = *(undefined8 *)param_7[3];
  uStack_c8 = *(undefined8 *)(param_7[3] + 8);
  ppuStack_190 = &PTR_FUN_110b13518;
  uStack_c0 = *(undefined4 *)(param_8 + 8);
  plStack_188 = param_3;
  uStack_b8 = param_1;
  lStack_b0 = param_8;
  uStack_a8 = param_6;
  (**(code **)(*param_3 + 0x10))(param_3,&fStack_a0,auStack_1a0,auStack_1b0);
  auVar32._8_8_ = extraout_var;
  auVar32._0_8_ = extraout_d3;
  auVar15._4_12_ = auVar32._4_12_;
  auVar15._0_4_ = fVar28;
  auVar17._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
  auVar17._0_8_ = auVar15._0_8_;
  auVar17._8_4_ = fVar35;
  auVar16._8_8_ = auVar17._8_8_;
  auVar16._4_4_ = fVar36;
  auVar16._0_4_ = fVar28;
  auVar38._0_12_ = auVar16._0_12_;
  auVar38._12_4_ = fVar41;
  auVar11 = NEON_ext(auVar38,auVar38,8,1);
  auVar13._0_8_ = uVar1 ^ 0x8000000080000000;
  auVar13[8] = (undefined1)uVar2;
  auVar13[9] = (undefined1)((ulong)uVar2 >> 8);
  auVar13[10] = (undefined1)((ulong)uVar2 >> 0x10);
  auVar13[0xb] = (byte)((ulong)uVar2 >> 0x18) ^ 0x80;
  auVar24[0xc] = (undefined1)((ulong)uVar2 >> 0x20);
  auVar24._0_12_ = auVar13;
  auVar24[0xd] = (undefined1)((ulong)uVar2 >> 0x28);
  auVar24[0xe] = (undefined1)((ulong)uVar2 >> 0x30);
  auVar24[0xf] = (byte)((ulong)uVar2 >> 0x38) ^ 0x80;
  fVar7 = (float)auVar13._0_8_;
  auVar20._0_4_ = fVar28 * fVar7;
  fVar19 = (float)(auVar13._0_8_ >> 0x20);
  auVar20._4_4_ = fVar36 * fVar19;
  fVar21 = auVar13._8_4_;
  auVar20._8_4_ = fVar22 * fVar21;
  auVar20._12_4_ = auVar24._12_4_ * 0.0;
  auVar29._0_4_ = fVar34 * fVar7;
  auVar29._4_4_ = fVar39 * fVar19;
  auVar29._8_4_ = fVar26 * fVar21;
  auVar29._12_4_ = auVar24._12_4_ * 0.0;
  auVar9 = NEON_ext(auVar20,auVar20,8,1);
  auVar30 = NEON_ext(auVar29,auVar29,8,1);
  fVar10 = auVar11._0_4_;
  auVar25._0_4_ = fVar10 * fVar7;
  fVar12 = auVar11._4_4_;
  auVar25._4_4_ = fVar12 * fVar19;
  auVar25._8_4_ = fVar8 * fVar21;
  auVar25._12_4_ = 0;
  fVar19 = auVar9._0_4_ + auVar20._0_4_ + auVar20._4_4_;
  fVar21 = auVar30._0_4_ + auVar29._0_4_ + auVar29._4_4_;
  auVar11 = NEON_ext(auVar25,auVar25,8,1);
  fVar7 = auVar25._0_4_ + auVar25._4_4_ + auVar11._0_4_ + auVar11._4_4_;
  fVar37 = (float)uVar5;
  auVar14._0_4_ = fVar28 * fVar37;
  fVar40 = (float)((ulong)uVar5 >> 0x20);
  auVar14._4_4_ = fVar36 * fVar40;
  fVar42 = (float)uVar6;
  auVar14._8_4_ = fVar22 * fVar42;
  fVar43 = (float)((ulong)uVar6 >> 0x20);
  auVar14._12_4_ = fVar43 * 0.0;
  auVar31._0_4_ = fVar34 * fVar37;
  auVar31._4_4_ = fVar39 * fVar40;
  auVar31._8_4_ = fVar26 * fVar42;
  auVar31._12_4_ = fVar43 * 0.0;
  auVar11 = NEON_ext(auVar14,auVar14,8,1);
  auVar32 = NEON_ext(auVar31,auVar31,8,1);
  auVar33._0_4_ = fVar37 * fVar10;
  auVar33._4_4_ = fVar40 * fVar12;
  auVar33._8_4_ = fVar42 * fVar8;
  auVar33._12_4_ = 0;
  auVar38 = NEON_ext(auVar33,auVar33,8,1);
  fVar37 = (float)uVar3;
  auVar18._0_4_ = fVar37 * fVar28;
  fVar40 = (float)((ulong)uVar3 >> 0x20);
  auVar18._4_4_ = fVar40 * fVar36;
  fVar42 = (float)uVar4;
  auVar18._8_4_ = fVar42 * fVar22;
  fVar43 = (float)((ulong)uVar4 >> 0x20);
  auVar18._12_4_ = fVar43 * 0.0;
  auVar23._0_4_ = fVar37 * fVar34;
  auVar23._4_4_ = fVar40 * fVar39;
  auVar23._8_4_ = fVar42 * fVar26;
  auVar23._12_4_ = fVar43 * 0.0;
  auVar30 = NEON_ext(auVar18,auVar18,8,1);
  auVar24 = NEON_ext(auVar23,auVar23,8,1);
  auVar9._0_4_ = fVar37 * fVar10;
  auVar9._4_4_ = fVar40 * fVar12;
  auVar9._8_4_ = fVar42 * fVar8;
  auVar9._12_4_ = 0;
  auVar25 = NEON_ext(auVar9,auVar9,8,1);
  auVar11._0_4_ = fVar19 + auVar11._0_4_ + auVar14._0_4_ + auVar14._4_4_;
  auVar11._4_4_ = fVar21 + auVar32._0_4_ + auVar31._0_4_ + auVar31._4_4_;
  auVar11._8_4_ = fVar7 + auVar33._0_4_ + auVar33._4_4_ + auVar38._0_4_ + auVar38._4_4_;
  auVar11._12_4_ = 0;
  auVar30._0_4_ = fVar19 + auVar30._0_4_ + auVar18._0_4_ + auVar18._4_4_;
  auVar30._4_4_ = fVar21 + auVar24._0_4_ + auVar23._0_4_ + auVar23._4_4_;
  auVar30._8_4_ = fVar7 + auVar9._0_4_ + auVar9._4_4_ + auVar25._0_4_ + auVar25._4_4_;
  auVar30._12_4_ = 0;
  auVar9 = NEON_fmin(auVar30,auVar11,4);
  auVar11 = NEON_fmax(auVar30,auVar11,4);
  fStack_1c0 = auVar9._0_4_ + auStack_1a0._0_4_;
  fStack_1bc = auVar9._4_4_ + auStack_1a0._4_4_;
  fStack_1b8 = auVar9._8_4_ + auStack_1a0._8_4_;
  fStack_1b4 = auVar9._12_4_ + auStack_1a0._12_4_;
  fStack_1d0 = auVar11._0_4_ + auStack_1b0._0_4_;
  fStack_1cc = auVar11._4_4_ + auStack_1b0._4_4_;
  fStack_1c8 = auVar11._8_4_ + auStack_1b0._8_4_;
  fStack_1c4 = auVar11._12_4_ + auStack_1b0._12_4_;
  (**(code **)(*param_2 + 0x80))(param_2,&ppuStack_190,&fStack_1c0,&fStack_1d0);
  return;
}



/* Entry: 109817490; end: 109817567;  */

void FUN_109817490(void)

{
  return;
}



/* Entry: 109817568; end: 1098176a3;  */

void FUN_109817568(undefined8 param_1,long param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (0 < (int)param_4) {
    uVar1 = (ulong)param_4;
    do {
      func_0x0001098174ac(&uStack_40,param_1,param_2);
      param_3[1] = uStack_38;
      *param_3 = uStack_40;
      param_2 = param_2 + 0x10;
      uVar1 = uVar1 - 1;
      param_3 = param_3 + 2;
    } while (uVar1 != 0);
  }
  return;
}



/* Entry: 1098176a4; end: 109817717;  */

void FUN_1098176a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  
  lVar1 = param_1 + 0x20;
  fVar2 = *(float *)(param_1 + 0x50) *
          (*(float *)((long)param_2 + (long)*(int *)(param_1 + 0x58) * 4) /
          *(float *)(lVar1 + (long)*(int *)(param_1 + 0x58) * 4));
  *(float *)(param_1 + 0x50) = fVar2;
  fVar4 = *(float *)(param_1 + 0x4c) *
          (*(float *)((long)param_2 + (long)*(int *)(param_1 + 0x54) * 4) /
           *(float *)(lVar1 + (long)*(int *)(param_1 + 0x54) * 4) +
          *(float *)((long)param_2 + (long)*(int *)(param_1 + 0x5c) * 4) /
          *(float *)(lVar1 + (long)*(int *)(param_1 + 0x5c) * 4)) * 0.5;
  *(float *)(param_1 + 0x48) = fVar4 / SQRT(fVar2 * fVar2 + fVar4 * fVar4);
  *(float *)(param_1 + 0x4c) = fVar4;
  uVar3 = *param_2;
  *(ulong *)(param_1 + 0x28) =
       CONCAT44(ABS((float)((ulong)param_2[1] >> 0x20)),ABS((float)param_2[1]));
  *(ulong *)(param_1 + 0x20) = CONCAT44(ABS((float)((ulong)uVar3 >> 0x20)),ABS((float)uVar3));
  return;
}



/* Entry: 109817718; end: 109817733;  */

void FUN_109817718(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 109817734; end: 10981773f;  */

void FUN_109817734(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010981773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}



/* Entry: 109817740; end: 109817827;  */

void FUN_109817740(float param_1,long *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_90 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uVar6;
  
  uStack_68 = 0;
  uStack_70 = 0x3f800000;
  uStack_58 = 0;
  uStack_60 = 0x3f80000000000000;
  uStack_48 = 0x3f800000;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(*param_2 + 0x10))(param_2,&uStack_70,&fStack_80,auStack_90);
  fVar4 = ((float)auStack_90._0_8_ - fStack_80) * 0.5;
  uVar6 = CONCAT44((SUB84(auStack_90._0_8_,4) - fStack_7c) * 0.5,fVar4);
  uVar9 = CONCAT44((SUB84(auStack_90._8_8_,4) - fStack_74) * 0.5,
                   ((float)auStack_90._8_8_ - fStack_78) * 0.5);
  uVar7 = uVar6;
  (**(code **)(*param_2 + 0x60))(param_2);
  auVar3._8_8_ = uVar9;
  auVar3._0_8_ = uVar6;
  auVar2._8_8_ = uVar9;
  auVar2._0_8_ = uVar6;
  auVar1._8_8_ = uVar9;
  auVar1._0_8_ = uVar6;
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar6;
  auVar11 = NEON_ext(auVar11,auVar1,8,1);
  fVar8 = (float)uVar7;
  fVar10 = auVar11._0_4_ + fVar8;
  fVar4 = fVar4 + fVar8;
  fVar10 = fVar10 + fVar10;
  fVar4 = fVar4 + fVar4;
  fVar4 = fVar4 * fVar4;
  auVar11 = NEON_ext(auVar2,auVar3,4,1);
  fVar5 = auVar11._0_4_ + fVar8;
  fVar8 = auVar11._4_4_ + fVar8;
  fVar5 = fVar5 + fVar5;
  fVar8 = fVar8 + fVar8;
  fVar5 = fVar5 * fVar5;
  param_1 = param_1 * 0.08333333;
  param_3[1] = (ulong)(uint)((fVar4 + fVar5) * param_1);
  *param_3 = CONCAT44((fVar4 + fVar8 * fVar8) * param_1,(fVar10 * fVar10 + fVar5) * param_1);
  return;
}



/* Entry: 109817828; end: 10981784b;  */

undefined * FUN_109817828(void)

{
  return &UNK_10f580b02;
}



/* Entry: 10981784c; end: 1098178cb;  */

undefined * FUN_10981784c(long param_1,long param_2)

{
  long lVar1;
  
  FUN_109816008();
  lVar1 = 0;
  do {
    *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_1 + 0x30 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  lVar1 = 0;
  do {
    *(undefined4 *)(param_2 + 0x10 + lVar1) = *(undefined4 *)(param_1 + 0x20 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x10);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return &UNK_10f580b07;
}



/* Entry: 1098178cc; end: 1098178cf;  */

void FUN_1098178cc(void)

{
  return;
}



/* Entry: 1098178d0; end: 1098178eb;  */

void FUN_1098178d0(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 1098178ec; end: 10981790b;  */

undefined * FUN_1098178ec(void)

{
  return &UNK_10f580b17;
}



/* Entry: 10981790c; end: 109817927;  */

void FUN_10981790c(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 109817928; end: 109817943;  */

undefined * FUN_109817928(void)

{
  return &UNK_10f580b1d;
}



/* Entry: 109817944; end: 109817aab;  */

undefined8 * FUN_109817944(undefined8 *param_1,long param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  param_1[5] = 0x3f800000;
  param_1[4] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 8) = 0x3d23d70a;
  param_1[9] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[10] = 0x3f8000003f800000;
  param_1[0xd] = 0xbf800000;
  param_1[0xc] = 0xbf800000bf800000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_110b13830;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 1) = 4;
  if ((int)param_3 < 1) {
    *(uint *)((long)param_1 + 0x7c) = param_3;
  }
  else {
    lVar2 = (ulong)param_3 << 4;
    FUN_1098256f4(lVar2,0x10);
    uVar7 = *(uint *)((long)param_1 + 0x7c);
    if (0 < (int)uVar7) {
      lVar3 = 0;
      do {
        uVar6 = *(undefined8 *)(param_1[0x11] + lVar3);
        ((undefined8 *)(lVar2 + lVar3))[1] = ((undefined8 *)(param_1[0x11] + lVar3))[1];
        *(undefined8 *)(lVar2 + lVar3) = uVar6;
        lVar3 = lVar3 + 0x10;
      } while ((ulong)uVar7 * 0x10 - lVar3 != 0);
    }
    if (param_1[0x11] != 0) {
      if (*(char *)(param_1 + 0x12) == '\x01') {
        FUN_109825740();
      }
      param_1[0x11] = 0;
    }
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
    param_1[0x11] = lVar2;
    *(uint *)((long)param_1 + 0x7c) = param_3;
    *(uint *)(param_1 + 0x10) = param_3;
    puVar5 = (uint *)(param_2 + 8);
    do {
      uVar6 = *(undefined8 *)(puVar5 + -2);
      uVar7 = *puVar5;
      puVar5 = (uint *)((long)puVar5 + (long)param_4);
      puVar1 = (undefined8 *)(param_1[0x11] + uVar4 * 0x10);
      puVar1[1] = (ulong)uVar7;
      *puVar1 = uVar6;
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  FUN_10981cad0(param_1);
  return param_1;
}



/* Entry: 109817aac; end: 109817ab7;  */

void FUN_109817aac(long *param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  int iVar8;
  long *plVar9;
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  float fVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  float afStack_90 [26];
  long lStack_28;
  
  lVar14 = *param_2;
  param_1[5] = param_2[1];
  param_1[4] = lVar14;
  pfVar11 = afStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  if ((bRam000000011382b1d0 & 1) == 0) {
    iVar8 = 0x1382b1d0;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      uRam000000011382b170 = 0x3f800000;
      uRam000000011382b17c = 0;
      uRam000000011382b174 = 0;
      uRam000000011382b184 = 0x3f800000;
      uRam000000011382b188 = 0;
      uRam000000011382b190 = 0;
      uRam000000011382b198 = 0x3f800000;
      uRam000000011382b1a0 = 0xbf800000;
      uRam000000011382b1ac = 0;
      uRam000000011382b1a4 = 0;
      uRam000000011382b1b4 = 0xbf800000;
      uRam000000011382b1b8 = 0;
      uRam000000011382b1c0 = 0;
      uRam000000011382b1c8 = 0xbf800000;
      ___cxa_guard_release(0x11382b1d0);
    }
  }
  afStack_90[0x12] = 0.0;
  afStack_90[0x13] = 0.0;
  afStack_90[0x10] = 0.0;
  afStack_90[0x11] = 0.0;
  afStack_90[0x16] = 0.0;
  afStack_90[0x17] = 0.0;
  afStack_90[0x14] = 0.0;
  afStack_90[0x15] = 0.0;
  afStack_90[10] = 0.0;
  afStack_90[0xb] = 0.0;
  afStack_90[8] = 0.0;
  afStack_90[9] = 0.0;
  afStack_90[0xe] = 0.0;
  afStack_90[0xf] = 0.0;
  afStack_90[0xc] = 0.0;
  afStack_90[0xd] = 0.0;
  afStack_90[2] = 0.0;
  afStack_90[3] = 0.0;
  afStack_90[0] = 0.0;
  afStack_90[1] = 0.0;
  afStack_90[6] = 0.0;
  afStack_90[7] = 0.0;
  afStack_90[4] = 0.0;
  afStack_90[5] = 0.0;
  pauVar10 = (undefined1 (*) [16])0x11382b170;
  puVar12 = (undefined8 *)0x6;
  plVar9 = param_1;
  (**(code **)(*param_1 + 0x98))();
  lVar13 = 0;
  lVar14 = 0;
  fVar1 = *(float *)(param_1 + 8);
  pfVar15 = (float *)(param_1 + 0xc);
  do {
    *pfVar15 = fVar1 + *(float *)((long)afStack_90 + lVar13);
    pfVar15[-4] = *(float *)((long)afStack_90 + lVar13 + 0x30) - fVar1;
    lVar14 = lVar14 + 0x10;
    pfVar15 = pfVar15 + 1;
    lVar13 = lVar13 + 0x14;
  } while (lVar14 != 0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  auVar33 = *pauVar10;
  auVar34 = pauVar10[1];
  auVar6 = pauVar10[2];
  fVar7 = *(float *)(pauVar10[3] + 0xc);
  auVar30._0_8_ = auVar33._0_8_ & 0x7fffffff7fffffff;
  auVar30[8] = auVar33[8];
  auVar30[9] = auVar33[9];
  auVar30[10] = auVar33[10];
  auVar30[0xb] = auVar33[0xb] & 0x7f;
  fVar1 = (float)plVar9[0xc];
  fVar3 = (float)plVar9[10];
  fVar16 = (float)((ulong)plVar9[0xc] >> 0x20);
  fVar2 = (float)((ulong)plVar9[10] >> 0x20);
  fVar35 = (fVar1 + fVar3) * 0.5;
  fVar37 = (fVar16 + fVar2) * 0.5;
  fVar38 = ((float)plVar9[0xd] + (float)plVar9[0xb]) * 0.5;
  auVar32._0_4_ = auVar6._0_4_ * fVar35;
  auVar32._4_4_ = auVar6._4_4_ * fVar37;
  auVar32._8_4_ = auVar6._8_4_ * fVar38;
  fVar1 = (fVar1 - fVar3) * 0.5 + 0.0;
  fVar16 = (fVar16 - fVar2) * 0.5 + 0.0;
  fVar2 = ((float)plVar9[0xd] - (float)plVar9[0xb]) * 0.5 + 0.0;
  fVar3 = auVar33._0_4_ * fVar35;
  fVar4 = auVar33._4_4_ * fVar37;
  uVar17 = (undefined1)((uint)fVar4 >> 8);
  uVar18 = (undefined1)((uint)fVar4 >> 0x10);
  uVar19 = (undefined1)((uint)fVar4 >> 0x18);
  fVar5 = auVar33._8_4_ * fVar38;
  uVar20 = (undefined1)((uint)fVar5 >> 8);
  uVar21 = (undefined1)((uint)fVar5 >> 0x10);
  uVar22 = (undefined1)((uint)fVar5 >> 0x18);
  fVar26 = auVar33._12_4_ * 0.0;
  uVar23 = (undefined1)((uint)fVar26 >> 8);
  uVar24 = (undefined1)((uint)fVar26 >> 0x10);
  uVar25 = (undefined1)((uint)fVar26 >> 0x18);
  auVar27._0_4_ = auVar34._0_4_ * fVar35;
  auVar27._4_4_ = auVar34._4_4_ * fVar37;
  auVar27._8_4_ = auVar34._8_4_ * fVar38;
  auVar27._12_4_ = auVar34._12_4_ * 0.0;
  auVar28[4] = SUB41(fVar4,0);
  auVar28._0_4_ = fVar3;
  auVar28[5] = uVar17;
  auVar28[6] = uVar18;
  auVar28[7] = uVar19;
  auVar28[8] = SUB41(fVar5,0);
  auVar28[9] = uVar20;
  auVar28[10] = uVar21;
  auVar28[0xb] = uVar22;
  auVar28[0xc] = SUB41(fVar26,0);
  auVar28[0xd] = uVar23;
  auVar28[0xe] = uVar24;
  auVar28[0xf] = uVar25;
  auVar29[4] = SUB41(fVar4,0);
  auVar29._0_4_ = fVar3;
  auVar29[5] = uVar17;
  auVar29[6] = uVar18;
  auVar29[7] = uVar19;
  auVar29[8] = SUB41(fVar5,0);
  auVar29[9] = uVar20;
  auVar29[10] = uVar21;
  auVar29[0xb] = uVar22;
  auVar29[0xc] = SUB41(fVar26,0);
  auVar29[0xd] = uVar23;
  auVar29[0xe] = uVar24;
  auVar29[0xf] = uVar25;
  auVar29 = NEON_ext(auVar28,auVar29,8,1);
  auVar36 = NEON_ext(auVar27,auVar27,8,1);
  auVar32._12_4_ = 0;
  auVar28 = NEON_ext(auVar32,auVar32,8,1);
  fVar4 = *(float *)pauVar10[3] + fVar3 + fVar4 + auVar29._0_4_;
  fVar3 = *(float *)(pauVar10[3] + 4) + auVar27._0_4_ + auVar27._4_4_ + auVar36._0_4_;
  fVar5 = *(float *)(pauVar10[3] + 8) +
          auVar32._0_4_ + auVar32._4_4_ + auVar28._0_4_ + auVar28._4_4_;
  auVar36._0_4_ = fVar1 * ABS(auVar33._0_4_);
  auVar36._4_4_ = fVar16 * (float)(auVar30._0_8_ >> 0x20);
  auVar36._8_4_ = fVar2 * auVar30._8_4_;
  auVar36._12_4_ = 0;
  auVar31._0_4_ = fVar1 * ABS(auVar34._0_4_);
  auVar31._4_4_ = fVar16 * ABS(auVar34._4_4_);
  auVar31._8_4_ = fVar2 * ABS(auVar34._8_4_);
  auVar31._12_4_ = 0;
  fVar1 = fVar1 * ABS(auVar6._0_4_);
  fVar16 = fVar16 * ABS(auVar6._4_4_);
  uVar17 = (undefined1)((uint)fVar16 >> 8);
  uVar18 = (undefined1)((uint)fVar16 >> 0x10);
  uVar19 = (undefined1)((uint)fVar16 >> 0x18);
  fVar2 = fVar2 * ABS(auVar6._8_4_);
  uVar20 = (undefined1)((uint)fVar2 >> 8);
  uVar21 = (undefined1)((uint)fVar2 >> 0x10);
  uVar22 = (undefined1)((uint)fVar2 >> 0x18);
  auVar33 = NEON_ext(auVar36,auVar36,8,1);
  auVar34 = NEON_ext(auVar31,auVar31,8,1);
  fVar26 = auVar36._0_4_ + auVar36._4_4_ + auVar33._0_4_;
  fVar35 = auVar31._0_4_ + auVar31._4_4_ + auVar34._0_4_;
  auVar33[4] = SUB41(fVar16,0);
  auVar33._0_4_ = fVar1;
  auVar33[5] = uVar17;
  auVar33[6] = uVar18;
  auVar33[7] = uVar19;
  auVar33[8] = SUB41(fVar2,0);
  auVar33[9] = uVar20;
  auVar33[10] = uVar21;
  auVar33[0xb] = uVar22;
  auVar33._12_4_ = 0;
  auVar34[4] = SUB41(fVar16,0);
  auVar34._0_4_ = fVar1;
  auVar34[5] = uVar17;
  auVar34[6] = uVar18;
  auVar34[7] = uVar19;
  auVar34[8] = SUB41(fVar2,0);
  auVar34[9] = uVar20;
  auVar34[10] = uVar21;
  auVar34[0xb] = uVar22;
  auVar34._12_4_ = 0;
  auVar33 = NEON_ext(auVar33,auVar34,8,1);
  fVar16 = fVar1 + fVar16 + auVar33._0_4_ + auVar33._4_4_;
  fVar1 = fVar3 - fVar35;
  *(ulong *)((long)pfVar11 + 8) = (ulong)(uint)(fVar5 - fVar16);
  *(ulong *)pfVar11 =
       CONCAT17((char)((uint)fVar1 >> 0x18),
                CONCAT16((char)((uint)fVar1 >> 0x10),
                         CONCAT15((char)((uint)fVar1 >> 8),CONCAT14(SUB41(fVar1,0),fVar4 - fVar26)))
               );
  fVar3 = fVar3 + fVar35;
  fVar1 = fVar7 + 0.0 + 0.0;
  puVar12[1] = CONCAT17((char)((uint)fVar1 >> 0x18),
                        CONCAT16((char)((uint)fVar1 >> 0x10),
                                 CONCAT15((char)((uint)fVar1 >> 8),
                                          CONCAT14(SUB41(fVar1,0),fVar5 + fVar16))));
  *puVar12 = CONCAT17((char)((uint)fVar3 >> 0x18),
                      CONCAT16((char)((uint)fVar3 >> 0x10),
                               CONCAT15((char)((uint)fVar3 >> 8),
                                        CONCAT14(SUB41(fVar3,0),fVar4 + fVar26))));
  return;
}



/* Entry: 109817ab8; end: 109817b87;  */

void FUN_109817ab8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  uStack_24 = 0xdd5e0b6b;
  uVar1 = *(uint *)(param_2 + 0x7c);
  if ((int)uVar1 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    fVar11 = (float)*param_3 * (float)uVar9;
    fVar13 = (float)((ulong)*param_3 >> 0x20) * (float)((ulong)uVar9 >> 0x20);
    uStack_40 = CONCAT44(fVar13,fVar11);
    fVar14 = (float)param_3[1] * (float)uVar10;
    fVar16 = (float)((ulong)param_3[1] >> 0x20) * (float)((ulong)uVar10 >> 0x20);
    uStack_38 = CONCAT44(fVar16,fVar14);
    lVar4 = *(long *)(param_2 + 0x88);
    if (uVar1 < 4) {
      uVar7 = 0;
      fVar8 = -3.4028235e+38;
      iVar5 = -1;
      do {
        pfVar3 = (float *)(lVar4 + uVar7 * 0x10);
        auVar18._0_4_ = fVar11 * *pfVar3;
        auVar18._4_4_ = fVar13 * pfVar3[1];
        auVar18._8_4_ = fVar14 * pfVar3[2];
        auVar18._12_4_ = fVar16 * pfVar3[3];
        auVar19 = NEON_ext(auVar18,auVar18,8,1);
        fVar17 = auVar18._0_4_ + auVar18._4_4_ + auVar19._0_4_;
        iVar6 = (int)uVar7;
        if (fVar17 <= fVar8) {
          iVar6 = iVar5;
          fVar17 = fVar8;
        }
        fVar8 = fVar17;
        uVar7 = uVar7 + 1;
        iVar5 = iVar6;
      } while (uVar1 != uVar7);
    }
    else {
      (*(code *)PTR_FUN_1132e04a0)(lVar4,&uStack_40,(ulong)uVar1,&uStack_24);
      iVar6 = (int)lVar4;
      lVar4 = *(long *)(param_2 + 0x88);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      uVar9 = *(undefined8 *)(param_2 + 0x20);
    }
    puVar2 = (undefined8 *)(lVar4 + (long)iVar6 * 0x10);
    uVar15 = puVar2[1];
    uVar12 = *puVar2;
    param_1[1] = CONCAT44((float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar15 >> 0x20),
                          (float)uVar10 * (float)uVar15);
    *param_1 = CONCAT44((float)((ulong)uVar9 >> 0x20) * (float)((ulong)uVar12 >> 0x20),
                        (float)uVar9 * (float)uVar12);
  }
  return;
}



/* Entry: 109817b88; end: 109817cbf;  */

void FUN_109817b88(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  float fStack_54;
  
  if (0 < (int)param_4) {
    puVar7 = (undefined4 *)(param_3 + 0xc);
    uVar9 = (ulong)param_4;
    do {
      *puVar7 = 0xdd5e0b6b;
      uVar9 = uVar9 - 1;
      puVar7 = puVar7 + 4;
    } while (uVar9 != 0);
    uVar9 = 0;
    do {
      puVar2 = (undefined8 *)(param_2 + uVar9 * 0x10);
      uVar16 = puVar2[1];
      uVar13 = *puVar2;
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      fVar12 = (float)uVar13 * (float)uVar10;
      fVar14 = (float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar10 >> 0x20);
      uStack_70 = CONCAT44(fVar14,fVar12);
      fVar15 = (float)uVar16 * (float)uVar11;
      fVar17 = (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar11 >> 0x20);
      uStack_68 = CONCAT44(fVar17,fVar15);
      uVar1 = *(uint *)(param_1 + 0x7c);
      if ((int)uVar1 < 1) {
        ((undefined4 *)(param_3 + 0xc))[uVar9 * 4] = 0xdd5e0b6b;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x88);
        if (uVar1 < 4) {
          uVar8 = 0;
          fStack_54 = -3.4028235e+38;
          iVar5 = -1;
          do {
            pfVar3 = (float *)(lVar4 + uVar8 * 0x10);
            auVar19._0_4_ = fVar12 * *pfVar3;
            auVar19._4_4_ = fVar14 * pfVar3[1];
            auVar19._8_4_ = fVar15 * pfVar3[2];
            auVar19._12_4_ = fVar17 * pfVar3[3];
            auVar20 = NEON_ext(auVar19,auVar19,8,1);
            fVar18 = auVar19._0_4_ + auVar19._4_4_ + auVar20._0_4_;
            iVar6 = (int)uVar8;
            if (fVar18 <= fStack_54) {
              iVar6 = iVar5;
              fVar18 = fStack_54;
            }
            fStack_54 = fVar18;
            uVar8 = uVar8 + 1;
            iVar5 = iVar6;
          } while (uVar1 != uVar8);
        }
        else {
          (*(code *)PTR_FUN_1132e04a0)(lVar4,&uStack_70,(ulong)uVar1,&fStack_54);
          iVar6 = (int)lVar4;
          lVar4 = *(long *)(param_1 + 0x88);
          uVar11 = *(undefined8 *)(param_1 + 0x28);
          uVar10 = *(undefined8 *)(param_1 + 0x20);
        }
        puVar2 = (undefined8 *)(lVar4 + (long)iVar6 * 0x10);
        uVar16 = puVar2[1];
        uVar13 = *puVar2;
        puVar2 = (undefined8 *)(param_3 + uVar9 * 0x10);
        puVar2[1] = CONCAT44((float)((ulong)uVar11 >> 0x20) * (float)((ulong)uVar16 >> 0x20),
                             (float)uVar11 * (float)uVar16);
        *puVar2 = CONCAT44((float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar13 >> 0x20),
                           (float)uVar10 * (float)uVar13);
        *(float *)((long)puVar2 + 0xc) = fStack_54;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_4);
  }
  return;
}



/* Entry: 109817cc0; end: 109817d97;  */

void FUN_109817cc0(float *param_1,long *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  (**(code **)(*param_2 + 0x88))(param_1);
  fVar1 = (float)(**(code **)(*param_2 + 0x60))(param_2);
  if (fVar1 != 0.0) {
    fVar1 = *param_3;
    fVar3 = param_3[1];
    fVar4 = param_3[2];
    fVar2 = param_3[3];
    auVar8._0_4_ = fVar1 * fVar1;
    auVar8._4_4_ = fVar3 * fVar3;
    auVar8._8_4_ = fVar4 * fVar4;
    auVar8._12_4_ = fVar2 * fVar2;
    auVar7 = NEON_ext(auVar8,auVar8,8,1);
    uVar5 = -(uint)(auVar8._0_4_ + auVar8._4_4_ + auVar7._0_4_ < 1.4210855e-14);
    fVar1 = (float)((uint)fVar1 ^ ((uint)fVar1 ^ 0xbf800000) & uVar5);
    fVar3 = (float)((uint)fVar3 ^ ((uint)fVar3 ^ 0xbf800000) & uVar5);
    fVar4 = (float)((uint)fVar4 ^ ((uint)fVar4 ^ 0xbf800000) & uVar5);
    fVar2 = (float)((uint)fVar2 ^ (uint)fVar2 & uVar5);
    auVar7._0_4_ = fVar1 * fVar1;
    auVar7._4_4_ = fVar3 * fVar3;
    auVar7._8_4_ = fVar4 * fVar4;
    auVar7._12_4_ = fVar2 * fVar2;
    auVar8 = NEON_ext(auVar7,auVar7,8,1);
    fVar6 = 1.0 / SQRT(auVar7._0_4_ + auVar7._4_4_ + auVar8._0_4_);
    fVar2 = (float)(**(code **)(*param_2 + 0x60))(param_2);
    param_1[2] = param_1[2] + fVar4 * fVar6 * fVar2;
    param_1[3] = param_1[3] + 0.0;
    *param_1 = *param_1 + fVar1 * fVar6 * fVar2;
    param_1[1] = param_1[1] + fVar3 * fVar6 * fVar2;
  }
  return;
}



/* Entry: 109817d98; end: 109817dcf;  */

long FUN_109817d98(long param_1)

{
  FUN_10980501c(param_1 + 0x60);
  FUN_1098180f8(param_1 + 0x40);
  FUN_10980501c(param_1 + 0x20);
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109817dd0; end: 109817e4f;  */

undefined4 FUN_109817dd0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



/* Entry: 109817e50; end: 109817f83;  */

undefined * FUN_109817e50(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  FUN_109816008();
  lVar3 = 0;
  do {
    *(undefined4 *)(param_2 + 0x20 + lVar3) = *(undefined4 *)(param_1 + 0x30 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_1 + 0x20 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x34) = 0;
  uVar1 = *(uint *)(param_1 + 0x7c);
  *(uint *)(param_2 + 0x48) = uVar1;
  if (uVar1 == 0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  else {
    plVar2 = param_3;
    (**(code **)(*param_3 + 0x38))(param_3,*(undefined8 *)(param_1 + 0x88));
    *(long **)(param_2 + 0x38) = plVar2;
    *(undefined8 *)(param_2 + 0x40) = 0;
    plVar2 = param_3;
    (**(code **)(*param_3 + 0x20))(param_3,0x10,(ulong)uVar1);
    lVar3 = *(long *)(param_1 + 0x88);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      lVar5 = plVar2[1];
      do {
        lVar6 = 0;
        do {
          *(undefined4 *)(lVar5 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0x10);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x10;
        lVar3 = lVar3 + 0x10;
      } while (uVar4 != uVar1);
    }
    (**(code **)(*param_3 + 0x28))(param_3,plVar2,&UNK_10f580b23,0x59415241);
  }
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return &UNK_10f580b36;
}



/* Entry: 109817f84; end: 109818077;  */

void FUN_109817f84(long param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  *param_4 = 3.4028235e+38;
  *param_5 = -3.4028235e+38;
  uVar1 = *(uint *)(param_1 + 0x7c);
  if ((int)uVar1 < 1) {
    fVar8 = -3.4028235e+38;
  }
  else {
    lVar5 = 0;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x88) + lVar5);
      uVar6 = puVar2[1];
      uVar4 = *puVar2;
      fVar8 = (float)uVar4 * *(float *)(param_1 + 0x20);
      fVar9 = (float)((ulong)uVar4 >> 0x20) * *(float *)(param_1 + 0x24);
      fVar10 = (float)uVar6 * *(float *)(param_1 + 0x28);
      fVar11 = (float)((ulong)uVar6 >> 0x20) * *(float *)(param_1 + 0x2c);
      auVar13._0_4_ = *param_2 * fVar8;
      auVar13._4_4_ = param_2[1] * fVar9;
      auVar13._8_4_ = param_2[2] * fVar10;
      auVar13._12_4_ = param_2[3] * fVar11;
      auVar14._0_4_ = fVar8 * param_2[4];
      auVar14._4_4_ = fVar9 * param_2[5];
      auVar14._8_4_ = fVar10 * param_2[6];
      auVar14._12_4_ = fVar11 * param_2[7];
      fVar8 = fVar8 * param_2[8];
      fVar9 = fVar9 * param_2[9];
      auVar16 = NEON_ext(auVar13,auVar13,8,1);
      auVar17 = NEON_ext(auVar14,auVar14,8,1);
      auVar15._4_4_ = fVar9;
      auVar15._0_4_ = fVar8;
      auVar15._8_4_ = fVar10 * param_2[10];
      auVar15._12_4_ = 0;
      auVar3._4_4_ = fVar9;
      auVar3._0_4_ = fVar8;
      auVar3._8_4_ = fVar10 * param_2[10];
      auVar3._12_4_ = 0;
      auVar15 = NEON_ext(auVar15,auVar3,8,1);
      fVar10 = auVar13._0_4_ + auVar13._4_4_ + auVar16._0_4_ + (float)*(undefined8 *)(param_2 + 0xc)
      ;
      fVar11 = auVar14._0_4_ + auVar14._4_4_ + auVar17._0_4_ +
               (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
      fVar8 = fVar8 + fVar9 + auVar15._0_4_ + auVar15._4_4_ + (float)*(undefined8 *)(param_2 + 0xe);
      fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20) + 0.0;
      auVar16._0_4_ = fVar10 * *param_3;
      auVar16._4_4_ = fVar11 * param_3[1];
      auVar16._8_4_ = fVar8 * param_3[2];
      auVar16._12_4_ = fVar9 * param_3[3];
      auVar15 = NEON_ext(auVar16,auVar16,8,1);
      fVar12 = auVar16._0_4_ + auVar16._4_4_ + auVar15._0_4_;
      if (fVar12 < *param_4) {
        *param_4 = fVar12;
        param_6[1] = CONCAT44(fVar9,fVar8);
        *param_6 = CONCAT44(fVar11,fVar10);
      }
      if (*param_5 < fVar12) {
        *param_5 = fVar12;
        param_7[1] = CONCAT44(fVar9,fVar8);
        *param_7 = CONCAT44(fVar11,fVar10);
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar5 != 0);
    fVar8 = *param_5;
  }
  fVar10 = *param_4;
  if (fVar8 < fVar10) {
    *param_4 = fVar8;
    *param_5 = fVar10;
    uVar7 = param_6[1];
    uVar6 = *param_6;
    uVar4 = *param_7;
    param_6[1] = param_7[1];
    *param_6 = uVar4;
    param_7[1] = uVar7;
    *param_7 = uVar6;
  }
  return;
}



/* Entry: 109818078; end: 1098180a7;  */

undefined8 * FUN_109818078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b13830;
  FUN_10980eb0c(param_1 + 0xf);
  *param_1 = &PTR_DAT_110b13e28;
  if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[9])();
    if (param_1[9] != 0) {
      FUN_109825740();
    }
  }
  return param_1;
}



/* Entry: 1098180a8; end: 1098180e3;  */

void FUN_1098180a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b13830;
  FUN_10980eb0c(param_1 + 0xf);
  FUN_10981b858(param_1);
  FUN_109825740();
  return;
}



/* Entry: 1098180e4; end: 1098180f7;  */

undefined * FUN_1098180e4(void)

{
  return &UNK_10f580b4c;
}



/* Entry: 1098180f8; end: 109818143;  */

long FUN_1098180f8(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109818144; end: 109818153;  */

void FUN_109818144(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(ulong *)(param_1 + 0x28) =
       CONCAT44(ABS((float)((ulong)param_2[1] >> 0x20)),ABS((float)param_2[1]));
  *(ulong *)(param_1 + 0x20) = CONCAT44(ABS((float)((ulong)uVar1 >> 0x20)),ABS((float)uVar1));
  return;
}



/* Entry: 109818154; end: 109818323;  */

void FUN_109818154(float param_1,long *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  float afStack_80 [4];
  
  (**(code **)(*param_2 + 0x60))();
  lVar4 = 0;
  do {
    afStack_80[0] = 0.0;
    afStack_80[1] = 0.0;
    afStack_80[2] = 0.0;
    afStack_80[3] = 0.0;
    *(undefined4 *)((long)afStack_80 + lVar4) = 0x3f800000;
    uStack_98 = CONCAT44(afStack_80[0] * 0.0 + afStack_80[1] * 0.0 + afStack_80[2] * 0.0,
                         (float)param_3[1] * afStack_80[0] + (float)param_3[3] * afStack_80[1] +
                         *(float *)(param_3 + 5) * afStack_80[2]);
    uStack_a0 = CONCAT44((float)((ulong)*param_3 >> 0x20) * afStack_80[0] +
                         (float)((ulong)param_3[2] >> 0x20) * afStack_80[1] +
                         *(float *)((long)param_3 + 0x24) * afStack_80[2],
                         (float)*param_3 * afStack_80[0] + (float)param_3[2] * afStack_80[1] +
                         *(float *)(param_3 + 4) * afStack_80[2]);
    (**(code **)(*param_2 + 0x80))(auStack_90,param_2,&uStack_a0);
    fVar7 = (float)auStack_90._8_8_;
    fVar5 = (float)auStack_90._0_8_;
    fVar6 = SUB84(auStack_90._0_8_,4);
    fVar8 = (float)*param_3 * fVar5;
    fVar9 = (float)((ulong)*param_3 >> 0x20) * fVar6;
    fVar10 = (float)param_3[1] * fVar7;
    fVar11 = (float)((ulong)param_3[1] >> 0x20) * SUB84(auStack_90._8_8_,4);
    auVar12._0_4_ = fVar5 * *(float *)(param_3 + 2);
    auVar12._4_4_ = fVar6 * *(float *)((long)param_3 + 0x14);
    auVar12._8_4_ = fVar7 * *(float *)(param_3 + 3);
    auVar12._12_4_ = SUB84(auStack_90._8_8_,4) * *(float *)((long)param_3 + 0x1c);
    fVar5 = fVar5 * *(float *)(param_3 + 4);
    fVar6 = fVar6 * *(float *)((long)param_3 + 0x24);
    auVar18._4_4_ = fVar9;
    auVar18._0_4_ = fVar8;
    auVar18._8_4_ = fVar10;
    auVar18._12_4_ = fVar11;
    auVar1._4_4_ = fVar9;
    auVar1._0_4_ = fVar8;
    auVar1._8_4_ = fVar10;
    auVar1._12_4_ = fVar11;
    auVar15 = NEON_ext(auVar18,auVar1,8,1);
    auVar17 = NEON_ext(auVar12,auVar12,8,1);
    auVar13._4_4_ = fVar6;
    auVar13._0_4_ = fVar5;
    auVar13._8_4_ = fVar7 * *(float *)(param_3 + 5);
    auVar13._12_4_ = 0;
    auVar16._4_4_ = fVar6;
    auVar16._0_4_ = fVar5;
    auVar16._8_4_ = fVar7 * *(float *)(param_3 + 5);
    auVar16._12_4_ = 0;
    auVar13 = NEON_ext(auVar13,auVar16,8,1);
    uStack_98 = CONCAT44((float)((ulong)param_3[7] >> 0x20) + 0.0,
                         fVar5 + fVar6 + auVar13._0_4_ + auVar13._4_4_ + (float)param_3[7]);
    uStack_a0 = CONCAT44(auVar12._0_4_ + auVar12._4_4_ + auVar17._0_4_ +
                         (float)((ulong)param_3[6] >> 0x20),
                         fVar8 + fVar9 + auVar15._0_4_ + (float)param_3[6]);
    *(float *)(param_5 + lVar4) = param_1 + *(float *)((long)&uStack_a0 + lVar4);
    *(undefined4 *)((long)afStack_80 + lVar4) = 0xbf800000;
    uStack_b8 = CONCAT44(afStack_80[0] * 0.0 + afStack_80[1] * 0.0 + afStack_80[2] * 0.0,
                         (float)param_3[1] * afStack_80[0] + (float)param_3[3] * afStack_80[1] +
                         *(float *)(param_3 + 5) * afStack_80[2]);
    uStack_c0 = CONCAT44((float)((ulong)*param_3 >> 0x20) * afStack_80[0] +
                         (float)((ulong)param_3[2] >> 0x20) * afStack_80[1] +
                         *(float *)((long)param_3 + 0x24) * afStack_80[2],
                         (float)*param_3 * afStack_80[0] + (float)param_3[2] * afStack_80[1] +
                         *(float *)(param_3 + 4) * afStack_80[2]);
    (**(code **)(*param_2 + 0x80))(auStack_b0,param_2,&uStack_c0);
    fVar7 = (float)auStack_b0._8_8_;
    fVar5 = (float)auStack_b0._0_8_;
    fVar6 = SUB84(auStack_b0._0_8_,4);
    fVar8 = (float)*param_3 * fVar5;
    fVar9 = (float)((ulong)*param_3 >> 0x20) * fVar6;
    fVar10 = (float)param_3[1] * fVar7;
    fVar11 = (float)((ulong)param_3[1] >> 0x20) * SUB84(auStack_b0._8_8_,4);
    auVar14._0_4_ = fVar5 * *(float *)(param_3 + 2);
    auVar14._4_4_ = fVar6 * *(float *)((long)param_3 + 0x14);
    auVar14._8_4_ = fVar7 * *(float *)(param_3 + 3);
    auVar14._12_4_ = SUB84(auStack_b0._8_8_,4) * *(float *)((long)param_3 + 0x1c);
    fVar5 = fVar5 * *(float *)(param_3 + 4);
    fVar6 = fVar6 * *(float *)((long)param_3 + 0x24);
    auVar2._4_4_ = fVar9;
    auVar2._0_4_ = fVar8;
    auVar2._8_4_ = fVar10;
    auVar2._12_4_ = fVar11;
    auVar3._4_4_ = fVar9;
    auVar3._0_4_ = fVar8;
    auVar3._8_4_ = fVar10;
    auVar3._12_4_ = fVar11;
    auVar16 = NEON_ext(auVar2,auVar3,8,1);
    auVar18 = NEON_ext(auVar14,auVar14,8,1);
    auVar15._4_4_ = fVar6;
    auVar15._0_4_ = fVar5;
    auVar15._8_4_ = fVar7 * *(float *)(param_3 + 5);
    auVar15._12_4_ = 0;
    auVar17._4_4_ = fVar6;
    auVar17._0_4_ = fVar5;
    auVar17._8_4_ = fVar7 * *(float *)(param_3 + 5);
    auVar17._12_4_ = 0;
    auVar13 = NEON_ext(auVar15,auVar17,8,1);
    uStack_98 = CONCAT44((float)((ulong)param_3[7] >> 0x20) + 0.0,
                         fVar5 + fVar6 + auVar13._0_4_ + auVar13._4_4_ + (float)param_3[7]);
    uStack_a0 = CONCAT44(auVar14._0_4_ + auVar14._4_4_ + auVar18._0_4_ +
                         (float)((ulong)param_3[6] >> 0x20),
                         fVar8 + fVar9 + auVar16._0_4_ + (float)param_3[6]);
    *(float *)(param_4 + lVar4) = *(float *)((long)&uStack_a0 + lVar4) - param_1;
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  return;
}



/* Entry: 109818324; end: 1098183fb;  */

void FUN_109818324(float *param_1,long *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  (**(code **)(*param_2 + 0x88))(param_1);
  fVar1 = (float)(**(code **)(*param_2 + 0x60))(param_2);
  if (fVar1 != 0.0) {
    fVar1 = *param_3;
    fVar3 = param_3[1];
    fVar4 = param_3[2];
    fVar2 = param_3[3];
    auVar8._0_4_ = fVar1 * fVar1;
    auVar8._4_4_ = fVar3 * fVar3;
    auVar8._8_4_ = fVar4 * fVar4;
    auVar8._12_4_ = fVar2 * fVar2;
    auVar7 = NEON_ext(auVar8,auVar8,8,1);
    uVar5 = -(uint)(auVar8._0_4_ + auVar8._4_4_ + auVar7._0_4_ < 1.4210855e-14);
    fVar1 = (float)((uint)fVar1 ^ ((uint)fVar1 ^ 0xbf800000) & uVar5);
    fVar3 = (float)((uint)fVar3 ^ ((uint)fVar3 ^ 0xbf800000) & uVar5);
    fVar4 = (float)((uint)fVar4 ^ ((uint)fVar4 ^ 0xbf800000) & uVar5);
    fVar2 = (float)((uint)fVar2 ^ (uint)fVar2 & uVar5);
    auVar7._0_4_ = fVar1 * fVar1;
    auVar7._4_4_ = fVar3 * fVar3;
    auVar7._8_4_ = fVar4 * fVar4;
    auVar7._12_4_ = fVar2 * fVar2;
    auVar8 = NEON_ext(auVar7,auVar7,8,1);
    fVar6 = 1.0 / SQRT(auVar7._0_4_ + auVar7._4_4_ + auVar8._0_4_);
    fVar2 = (float)(**(code **)(*param_2 + 0x60))(param_2);
    param_1[2] = param_1[2] + fVar4 * fVar6 * fVar2;
    param_1[3] = param_1[3] + 0.0;
    *param_1 = *param_1 + fVar1 * fVar6 * fVar2;
    param_1[1] = param_1[1] + fVar3 * fVar6 * fVar2;
  }
  return;
}



/* Entry: 1098183fc; end: 1098184d7;  */

void FUN_1098183fc(long param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  
  fVar9 = (float)*(undefined8 *)(param_1 + 0x68);
  fVar6 = (float)*(undefined8 *)(param_1 + 0x60);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  auVar25 = *param_2;
  auVar26 = param_2[1];
  auVar4 = param_2[2];
  fVar5 = *(float *)(param_2[3] + 0xc);
  auVar22._0_8_ = auVar25._0_8_ & 0x7fffffff7fffffff;
  auVar22[8] = auVar25[8];
  auVar22[9] = auVar25[9];
  auVar22[10] = auVar25[10];
  auVar22[0xb] = auVar25[0xb] & 0x7f;
  fVar1 = (float)*(undefined8 *)(param_1 + 0x50);
  fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  fVar3 = (float)*(undefined8 *)(param_1 + 0x58);
  fVar27 = (fVar6 + fVar1) * 0.5;
  fVar29 = (fVar8 + fVar2) * 0.5;
  fVar30 = (fVar9 + fVar3) * 0.5;
  auVar24._0_4_ = auVar4._0_4_ * fVar27;
  auVar24._4_4_ = auVar4._4_4_ * fVar29;
  auVar24._8_4_ = auVar4._8_4_ * fVar30;
  fVar7 = (fVar6 - fVar1) * 0.5 + 0.0;
  fVar8 = (fVar8 - fVar2) * 0.5 + 0.0;
  fVar9 = (fVar9 - fVar3) * 0.5 + 0.0;
  fVar1 = auVar25._0_4_ * fVar27;
  fVar2 = auVar25._4_4_ * fVar29;
  uVar10 = (undefined1)((uint)fVar2 >> 8);
  uVar11 = (undefined1)((uint)fVar2 >> 0x10);
  uVar12 = (undefined1)((uint)fVar2 >> 0x18);
  fVar3 = auVar25._8_4_ * fVar30;
  uVar13 = (undefined1)((uint)fVar3 >> 8);
  uVar14 = (undefined1)((uint)fVar3 >> 0x10);
  uVar15 = (undefined1)((uint)fVar3 >> 0x18);
  fVar6 = auVar25._12_4_ * 0.0;
  uVar16 = (undefined1)((uint)fVar6 >> 8);
  uVar17 = (undefined1)((uint)fVar6 >> 0x10);
  uVar18 = (undefined1)((uint)fVar6 >> 0x18);
  auVar19._0_4_ = auVar26._0_4_ * fVar27;
  auVar19._4_4_ = auVar26._4_4_ * fVar29;
  auVar19._8_4_ = auVar26._8_4_ * fVar30;
  auVar19._12_4_ = auVar26._12_4_ * 0.0;
  auVar20[4] = SUB41(fVar2,0);
  auVar20._0_4_ = fVar1;
  auVar20[5] = uVar10;
  auVar20[6] = uVar11;
  auVar20[7] = uVar12;
  auVar20[8] = SUB41(fVar3,0);
  auVar20[9] = uVar13;
  auVar20[10] = uVar14;
  auVar20[0xb] = uVar15;
  auVar20[0xc] = SUB41(fVar6,0);
  auVar20[0xd] = uVar16;
  auVar20[0xe] = uVar17;
  auVar20[0xf] = uVar18;
  auVar21[4] = SUB41(fVar2,0);
  auVar21._0_4_ = fVar1;
  auVar21[5] = uVar10;
  auVar21[6] = uVar11;
  auVar21[7] = uVar12;
  auVar21[8] = SUB41(fVar3,0);
  auVar21[9] = uVar13;
  auVar21[10] = uVar14;
  auVar21[0xb] = uVar15;
  auVar21[0xc] = SUB41(fVar6,0);
  auVar21[0xd] = uVar16;
  auVar21[0xe] = uVar17;
  auVar21[0xf] = uVar18;
  auVar21 = NEON_ext(auVar20,auVar21,8,1);
  auVar28 = NEON_ext(auVar19,auVar19,8,1);
  auVar24._12_4_ = 0;
  auVar20 = NEON_ext(auVar24,auVar24,8,1);
  fVar1 = *(float *)param_2[3] + fVar1 + fVar2 + auVar21._0_4_;
  fVar2 = *(float *)(param_2[3] + 4) + auVar19._0_4_ + auVar19._4_4_ + auVar28._0_4_;
  fVar3 = *(float *)(param_2[3] + 8) + auVar24._0_4_ + auVar24._4_4_ + auVar20._0_4_ + auVar20._4_4_
  ;
  auVar28._0_4_ = fVar7 * ABS(auVar25._0_4_);
  auVar28._4_4_ = fVar8 * (float)(auVar22._0_8_ >> 0x20);
  auVar28._8_4_ = fVar9 * auVar22._8_4_;
  auVar28._12_4_ = 0;
  auVar23._0_4_ = fVar7 * ABS(auVar26._0_4_);
  auVar23._4_4_ = fVar8 * ABS(auVar26._4_4_);
  auVar23._8_4_ = fVar9 * ABS(auVar26._8_4_);
  auVar23._12_4_ = 0;
  fVar7 = fVar7 * ABS(auVar4._0_4_);
  fVar8 = fVar8 * ABS(auVar4._4_4_);
  fVar9 = fVar9 * ABS(auVar4._8_4_);
  auVar25 = NEON_ext(auVar28,auVar28,8,1);
  auVar26 = NEON_ext(auVar23,auVar23,8,1);
  fVar27 = auVar28._0_4_ + auVar28._4_4_ + auVar25._0_4_;
  fVar29 = auVar23._0_4_ + auVar23._4_4_ + auVar26._0_4_;
  auVar25._4_4_ = fVar8;
  auVar25._0_4_ = fVar7;
  auVar25._8_4_ = fVar9;
  auVar25._12_4_ = 0;
  auVar26._4_4_ = fVar8;
  auVar26._0_4_ = fVar7;
  auVar26._8_4_ = fVar9;
  auVar26._12_4_ = 0;
  auVar25 = NEON_ext(auVar25,auVar26,8,1);
  fVar6 = fVar7 + fVar8 + auVar25._0_4_ + auVar25._4_4_;
  param_3[1] = (ulong)(uint)(fVar3 - fVar6);
  *param_3 = CONCAT44(fVar2 - fVar29,fVar1 - fVar27);
  param_4[1] = CONCAT44(fVar5 + 0.0 + 0.0,fVar3 + fVar6);
  *param_4 = CONCAT44(fVar2 + fVar29,fVar1 + fVar27);
  return;
}



/* Entry: 1098184d8; end: 109818627;  */

long * FUN_1098184d8(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float afStack_90 [26];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  if ((bRam000000011382b160 & 1) == 0) {
    iVar1 = 0x1382b160;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011382b100 = 0x3f800000;
      uRam000000011382b10c = 0;
      uRam000000011382b104 = 0;
      uRam000000011382b114 = 0x3f800000;
      uRam000000011382b118 = 0;
      uRam000000011382b120 = 0;
      uRam000000011382b128 = 0x3f800000;
      uRam000000011382b130 = 0xbf800000;
      uRam000000011382b13c = 0;
      uRam000000011382b134 = 0;
      uRam000000011382b144 = 0xbf800000;
      uRam000000011382b148 = 0;
      uRam000000011382b150 = 0;
      uRam000000011382b158 = 0xbf800000;
      ___cxa_guard_release(0x11382b160);
    }
  }
  afStack_90[0x12] = 0.0;
  afStack_90[0x13] = 0.0;
  afStack_90[0x10] = 0.0;
  afStack_90[0x11] = 0.0;
  afStack_90[0x16] = 0.0;
  afStack_90[0x17] = 0.0;
  afStack_90[0x14] = 0.0;
  afStack_90[0x15] = 0.0;
  afStack_90[10] = 0.0;
  afStack_90[0xb] = 0.0;
  afStack_90[8] = 0.0;
  afStack_90[9] = 0.0;
  afStack_90[0xe] = 0.0;
  afStack_90[0xf] = 0.0;
  afStack_90[0xc] = 0.0;
  afStack_90[0xd] = 0.0;
  afStack_90[2] = 0.0;
  afStack_90[3] = 0.0;
  afStack_90[0] = 0.0;
  afStack_90[1] = 0.0;
  afStack_90[6] = 0.0;
  afStack_90[7] = 0.0;
  afStack_90[4] = 0.0;
  afStack_90[5] = 0.0;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x98))(param_1,0x11382b100,afStack_90,6);
  lVar3 = 0;
  lVar4 = 0;
  fVar6 = *(float *)(param_1 + 8);
  pfVar5 = (float *)(param_1 + 0xc);
  do {
    *pfVar5 = fVar6 + *(float *)((long)afStack_90 + lVar3);
    pfVar5[-4] = *(float *)((long)afStack_90 + lVar3 + 0x30) - fVar6;
    lVar4 = lVar4 + 0x10;
    pfVar5 = pfVar5 + 1;
    lVar3 = lVar3 + 0x14;
  } while (lVar4 != 0x30);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *plVar2 = (long)&PTR_FUN_110b13988;
  FUN_10980eb0c(plVar2 + 9);
  FUN_1098193a4(plVar2 + 5);
  FUN_10980eb0c(plVar2 + 1);
  return plVar2;
}



/* Entry: 109818628; end: 10981866f;  */

undefined8 * FUN_109818628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b13988;
  FUN_10980eb0c(param_1 + 9);
  FUN_1098193a4(param_1 + 5);
  FUN_10980eb0c(param_1 + 1);
  return param_1;
}



/* Entry: 109818670; end: 109818673;  */

undefined8 * FUN_109818670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b13988;
  FUN_10980eb0c(param_1 + 9);
  FUN_1098193a4(param_1 + 5);
  FUN_10980eb0c(param_1 + 1);
  return param_1;
}



/* Entry: 109818674; end: 109818693;  */

void FUN_109818674(long param_1)

{
  FUN_109818628();
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 109818694; end: 1098187bf;  */

bool FUN_109818694(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  
  bVar3 = false;
  uVar4 = 0;
  do {
    if ((int)uVar4 < 4) {
      if ((int)uVar4 < 2) {
        if (uVar4 != 0) {
          fVar8 = *(float *)(param_1 + 0x84);
          fVar11 = -*(float *)(param_1 + 0x88);
          fVar7 = *(float *)(param_1 + 0x80);
          goto LAB_109818740;
        }
        fVar7 = *(float *)(param_1 + 0x80);
        fVar8 = *(float *)(param_1 + 0x84);
      }
      else {
        if (uVar4 != 2) {
          fVar7 = *(float *)(param_1 + 0x80);
          fVar8 = *(float *)(param_1 + 0x84);
          goto LAB_109818734;
        }
        fVar7 = *(float *)(param_1 + 0x80);
        fVar8 = *(float *)(param_1 + 0x84);
LAB_1098186fc:
        fVar8 = -fVar8;
      }
LAB_109818700:
      fVar11 = *(float *)(param_1 + 0x88);
    }
    else {
      if ((int)uVar4 < 6) {
        if (uVar4 == 4) {
          fVar8 = *(float *)(param_1 + 0x84);
          fVar7 = -*(float *)(param_1 + 0x80);
          goto LAB_109818700;
        }
        fVar8 = *(float *)(param_1 + 0x84);
        fVar7 = -*(float *)(param_1 + 0x80);
      }
      else {
        if (uVar4 == 6) {
          fVar8 = *(float *)(param_1 + 0x84);
          fVar7 = -*(float *)(param_1 + 0x80);
          goto LAB_1098186fc;
        }
        fVar8 = *(float *)(param_1 + 0x84);
        fVar7 = -*(float *)(param_1 + 0x80);
LAB_109818734:
        fVar8 = -fVar8;
      }
      fVar11 = -*(float *)(param_1 + 0x88);
    }
LAB_109818740:
    if (0 < (int)*(uint *)(param_1 + 0x2c)) {
      pfVar5 = (float *)(*(long *)(param_1 + 0x38) + 0x2c);
      uVar6 = (ulong)*(uint *)(param_1 + 0x2c);
      do {
        auVar2 = *(undefined1 (*) [12])(pfVar5 + -3);
        auVar9._0_4_ = ((float)*(undefined8 *)(param_1 + 0x70) + fVar7) *
                       (float)*(undefined8 *)*(undefined1 (*) [12])(pfVar5 + -3);
        auVar9._4_4_ = ((float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) + fVar8) *
                       auVar2._4_4_;
        auVar9._8_4_ = ((float)*(undefined8 *)(param_1 + 0x78) + fVar11) * auVar2._8_4_;
        auVar9._12_4_ = ((float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) + 0.0) * 0.0;
        auVar10 = NEON_ext(auVar9,auVar9,8,1);
        if (0.0 < *pfVar5 + auVar9._0_4_ + auVar9._4_4_ + auVar10._0_4_) {
          return bVar3;
        }
        uVar6 = uVar6 - 1;
        pfVar5 = pfVar5 + 0xc;
      } while (uVar6 != 0);
    }
    uVar1 = uVar4 + 1;
    bVar3 = 6 < uVar4;
    uVar4 = uVar1;
    if (uVar1 == 8) {
      return true;
    }
  } while( true );
}



/* Entry: 1098187c0; end: 109818eab;  */

void FUN_1098187c0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  ushort *puVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 *puStack_110;
  undefined1 auStack_f8 [4];
  undefined8 uStack_f4;
  undefined4 *puStack_e8;
  byte bStack_e0;
  undefined1 auStack_d8 [4];
  undefined8 uStack_d4;
  undefined4 *puStack_c8;
  char cStack_c0;
  undefined1 auStack_b8 [4];
  undefined8 uStack_b4;
  ulong uStack_a8;
  byte bStack_a0;
  undefined1 auStack_98 [4];
  undefined8 uStack_94;
  ulong uStack_88;
  byte bStack_80;
  
  bStack_e0 = 1;
  puStack_e8 = (undefined4 *)0x0;
  uStack_f4 = 0;
  cStack_c0 = '\x01';
  puStack_c8 = (undefined4 *)0x0;
  uStack_d4 = 0;
  bStack_a0 = 1;
  uStack_a8 = 0;
  uStack_b4 = 0;
  bStack_80 = 1;
  uStack_88 = 0;
  uStack_94 = 0;
  iVar16 = *(int *)(param_1 + 0x2c);
  if (0 < iVar16) {
    lVar24 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x38) + lVar24 * 0x30 + 4);
      if (0 < (int)uVar4) {
        uVar9 = (uint)lVar24 | 0xffff0000;
        uVar25 = 0;
        do {
          uVar1 = uVar25 + 1;
          lVar18 = *(long *)(*(long *)(param_1 + 0x38) + lVar24 * 0x30 + 0x10);
          sVar5 = *(short *)(lVar18 + uVar25 * 4);
          lVar20 = 0;
          if (uVar1 != uVar4) {
            lVar20 = uVar25 + 1;
          }
          sVar6 = *(short *)(lVar18 + lVar20 * 4);
          uVar2 = (int)sVar6;
          if (sVar6 <= sVar5) {
            uVar2 = (int)sVar5;
          }
          uVar3 = (int)sVar6;
          if (sVar5 <= sVar6) {
            uVar3 = (int)sVar5;
          }
          puVar11 = auStack_f8;
          FUN_109819428(puVar11,uVar2,uVar3);
          uVar25 = uStack_a8;
          puVar19 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar3 * 0x10);
          uVar28 = *puVar19;
          pfVar10 = (float *)(*(long *)(param_1 + 0x18) + (long)(int)uVar2 * 0x10);
          fVar26 = (float)uVar28 - *pfVar10;
          fVar29 = (float)((ulong)uVar28 >> 0x20) - pfVar10[1];
          fVar31 = (float)puVar19[1] - pfVar10[2];
          auVar33._0_4_ = fVar26 * fVar26;
          auVar33._4_4_ = fVar29 * fVar29;
          auVar33._8_4_ = fVar31 * fVar31;
          auVar33._12_4_ = 0;
          auVar34 = NEON_ext(auVar33,auVar33,8,1);
          fVar32 = 1.0 / SQRT(auVar33._0_4_ + auVar33._4_4_ + auVar34._0_4_);
          fVar26 = fVar26 * fVar32;
          fVar29 = fVar29 * fVar32;
          fVar31 = fVar31 * fVar32;
          uVar14 = *(uint *)(param_1 + 0x4c);
          uVar17 = (ulong)uVar14;
          if (0 < (int)uVar14) {
            puVar19 = *(undefined8 **)(param_1 + 0x58);
            uVar12 = uVar17;
            do {
              fVar27 = (float)*puVar19;
              fVar30 = (float)((ulong)*puVar19 >> 0x20);
              if (((ABS(fVar27 - fVar26) <= 1e-06) && (ABS(fVar30 - fVar29) <= 1e-06)) &&
                 (ABS((float)puVar19[1] - fVar31) <= 1e-06)) goto LAB_109818a38;
              if (((ABS(fVar26 + fVar27) <= 1e-06) && (ABS(fVar29 + fVar30) <= 1e-06)) &&
                 (ABS(fVar31 + (float)puVar19[1]) <= 1e-06)) goto LAB_109818a38;
              uVar12 = uVar12 - 1;
              puVar19 = puVar19 + 2;
            } while (uVar12 != 0);
          }
          if (uVar14 == *(uint *)(param_1 + 0x50)) {
            uVar7 = uVar14 << 1;
            if (uVar14 == 0) {
              uVar7 = 1;
            }
            if ((int)uVar14 < (int)uVar7) {
              if (uVar7 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar7 << 4;
                FUN_1098256f4(uVar12,0x10);
                uVar17 = (ulong)*(uint *)(param_1 + 0x4c);
              }
              if (0 < (int)uVar17) {
                lVar20 = 0;
                do {
                  puVar19 = (undefined8 *)(*(long *)(param_1 + 0x58) + lVar20);
                  uVar28 = *puVar19;
                  ((undefined8 *)(uVar12 + lVar20))[1] = puVar19[1];
                  *(undefined8 *)(uVar12 + lVar20) = uVar28;
                  lVar20 = lVar20 + 0x10;
                } while (uVar17 << 4 != lVar20);
              }
              if (*(long *)(param_1 + 0x58) != 0) {
                if (*(char *)(param_1 + 0x60) == '\x01') {
                  FUN_109825740();
                }
                *(undefined8 *)(param_1 + 0x58) = 0;
              }
              *(undefined1 *)(param_1 + 0x60) = 1;
              *(ulong *)(param_1 + 0x58) = uVar12;
              *(uint *)(param_1 + 0x50) = uVar7;
              uVar14 = *(uint *)(param_1 + 0x4c);
            }
          }
          puVar19 = (undefined8 *)(*(long *)(param_1 + 0x58) + (long)(int)uVar14 * 0x10);
          puVar19[1] = CONCAT44(fVar32 * 0.0,fVar31);
          *puVar19 = CONCAT44(fVar29,fVar26);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
LAB_109818a38:
          if (((int)puVar11 == -1) || (uVar25 == 0)) {
            uVar14 = uStack_b4._4_4_;
            uVar25 = (ulong)uStack_b4._4_4_;
            puVar11 = auStack_f8;
            FUN_109819428(puVar11,uVar2,uVar3);
            if ((int)puVar11 == -1) {
              uVar7 = (uint)uStack_b4;
              uVar15 = (uint)uStack_b4;
              if ((uint)uStack_b4 == uVar14) {
                uVar8 = uVar14 << 1;
                if (uVar14 == 0) {
                  uVar8 = 1;
                }
                uVar15 = uVar14;
                if ((int)uVar14 < (int)uVar8) {
                  if (uVar8 == 0) {
                    uVar17 = 0;
                  }
                  else {
                    uVar17 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
                    FUN_1098256f4(uVar17,0x10);
                    uVar25 = uStack_b4 & 0xffffffff;
                  }
                  if (0 < (int)uVar25) {
                    lVar20 = 0;
                    do {
                      *(undefined4 *)(uVar17 + lVar20) = *(undefined4 *)(uStack_a8 + lVar20);
                      lVar20 = lVar20 + 4;
                    } while (uVar25 << 2 != lVar20);
                  }
                  if ((uStack_a8 != 0) && ((bStack_a0 & 1) != 0)) {
                    FUN_109825740();
                  }
                  bStack_a0 = 1;
                  uStack_b4 = CONCAT44(uVar8,(uint)uStack_b4);
                  uVar15 = (uint)uStack_b4;
                  uStack_a8 = uVar17;
                }
              }
              *(uint *)(uStack_a8 + (long)(int)uVar15 * 4) = uVar9;
              uStack_b4 = CONCAT44(uStack_b4._4_4_,(uint)uStack_b4 + 1);
              iVar16 = (int)uStack_94;
              if ((int)uStack_94 == uStack_94._4_4_) {
                uVar15 = (int)uStack_94 << 1;
                if ((int)uStack_94 == 0) {
                  uVar15 = 1;
                }
                if ((int)uStack_94 < (int)uVar15) {
                  if (uVar15 == 0) {
                    uVar25 = 0;
                  }
                  else {
                    uVar25 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2;
                    FUN_1098256f4(uVar25,0x10);
                  }
                  if (0 < (int)uStack_94) {
                    lVar20 = 0;
                    do {
                      *(undefined4 *)(uVar25 + lVar20) = *(undefined4 *)(uStack_88 + lVar20);
                      lVar20 = lVar20 + 4;
                    } while ((uStack_94 & 0xffffffff) << 2 != lVar20);
                  }
                  if ((uStack_88 != 0) && ((bStack_80 & 1) != 0)) {
                    FUN_109825740();
                  }
                  bStack_80 = 1;
                  uStack_94 = CONCAT44(uVar15,(int)uStack_94);
                  iVar16 = (int)uStack_94;
                  uStack_88 = uVar25;
                }
              }
              *(uint *)(uStack_88 + (long)iVar16 * 4) = uVar2 & 0xffff | uVar3 << 0x10;
              uVar15 = uStack_b4._4_4_;
              uVar25 = (ulong)uStack_b4._4_4_;
              uStack_94 = CONCAT44(uStack_94._4_4_,(int)uStack_94 + 1);
              if ((int)uVar14 < (int)uStack_b4._4_4_) {
                uVar14 = (uint)uStack_f4;
                uVar17 = uStack_f4 & 0xffffffff;
                if ((int)(uint)uStack_f4 < (int)uStack_b4._4_4_) {
                  lVar20 = (long)(int)uStack_b4._4_4_;
                  if (uStack_f4._4_4_ < (int)uStack_b4._4_4_) {
                    if (uStack_b4._4_4_ == 0) {
                      puVar13 = (undefined4 *)0x0;
                    }
                    else {
                      puVar13 = (undefined4 *)(lVar20 << 2);
                      FUN_1098256f4(puVar13,0x10);
                    }
                    if ((int)(uint)uStack_f4 < 1) {
                      if ((puStack_e8 != (undefined4 *)0x0) && ((bStack_e0 & 1) != 0))
                      goto LAB_109818c7c;
                    }
                    else {
                      uVar12 = (ulong)(uint)uStack_f4;
                      puVar21 = puVar13;
                      puVar22 = puStack_e8;
                      do {
                        *puVar21 = *puVar22;
                        uVar12 = uVar12 - 1;
                        puVar21 = puVar21 + 1;
                        puVar22 = puVar22 + 1;
                      } while (uVar12 != 0);
                      if (bStack_e0 == 1) {
LAB_109818c7c:
                        FUN_109825740();
                      }
                    }
                    bStack_e0 = 1;
                    uStack_f4 = CONCAT44(uVar15,(uint)uStack_f4);
                    puStack_e8 = puVar13;
                  }
                  _bzero(puStack_e8 + (int)uVar14,(ulong)(uVar15 + ~uVar14) * 4 + 4);
                  uStack_f4 = CONCAT44(uStack_f4._4_4_,uVar15);
                  uVar8 = (uint)uStack_d4;
                  if ((int)(uint)uStack_d4 < (int)uVar15) {
                    if (uStack_d4._4_4_ < (int)uVar15) {
                      if (uVar15 == 0) {
                        puStack_110 = (undefined4 *)0x0;
                      }
                      else {
                        puStack_110 = (undefined4 *)(lVar20 << 2);
                        FUN_1098256f4(puStack_110,0x10);
                      }
                      if ((int)(uint)uStack_d4 < 1) {
                        if (puStack_c8 != (undefined4 *)0x0) goto LAB_109818d28;
                      }
                      else {
                        uVar12 = (ulong)(uint)uStack_d4;
                        puVar13 = puStack_110;
                        puVar21 = puStack_c8;
                        do {
                          *puVar13 = *puVar21;
                          uVar12 = uVar12 - 1;
                          puVar13 = puVar13 + 1;
                          puVar21 = puVar21 + 1;
                        } while (uVar12 != 0);
LAB_109818d28:
                        if (cStack_c0 == '\x01') {
                          FUN_109825740();
                        }
                      }
                      cStack_c0 = '\x01';
                      puStack_c8 = puStack_110;
                      uStack_d4 = CONCAT44(uVar15,(uint)uStack_d4);
                    }
                    _bzero(puStack_c8 + (int)uVar8,(ulong)(uVar15 + ~uVar8) * 4 + 4);
                  }
                  uStack_d4 = CONCAT44(uStack_d4._4_4_,uVar15);
                  if (0 < (int)uVar15) {
                    _memset(puStack_e8,0xff,uVar25 << 2);
                    _memset(puStack_c8,0xff,uVar25 << 2);
                  }
                  if (0 < (int)uVar14) {
                    uVar25 = 0;
                    puVar23 = (ushort *)(uStack_88 + 2);
                    do {
                      uVar14 = (int)(short)puVar23[-1] + (uint)*puVar23 * 0x10000 &
                               uStack_b4._4_4_ - 1;
                      puStack_c8[uVar25] = puStack_e8[(int)uVar14];
                      puStack_e8[(int)uVar14] = (int)uVar25;
                      uVar25 = uVar25 + 1;
                      puVar23 = puVar23 + 2;
                    } while (uVar17 != uVar25);
                  }
                }
                uVar14 = uStack_b4._4_4_;
              }
              uVar2 = uVar14 - 1 & uVar3 * 0x10000 + (int)(short)uVar2;
              puStack_c8[(int)uVar7] = puStack_e8[(int)uVar2];
              puStack_e8[(int)uVar2] = uVar7;
            }
            else {
              *(uint *)(uStack_a8 + (long)(int)puVar11 * 4) = uVar9;
            }
          }
          else {
            *(short *)(uVar25 + (long)(int)puVar11 * 4 + 2) = (short)lVar24;
          }
          uVar25 = uVar1;
        } while (uVar1 != uVar4);
        iVar16 = *(int *)(param_1 + 0x2c);
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < iVar16);
  }
  FUN_109818eac(param_1);
  FUN_109819358(auStack_98);
  FUN_10981930c(auStack_b8);
  FUN_10980501c(auStack_d8);
  FUN_10980501c(auStack_f8);
  return;
}



/* Entry: 109818eac; end: 10981921f;  */

void FUN_109818eac(ulong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [12];
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  ulong uVar22;
  float fVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar7 = (ulong)*(uint *)(param_1 + 0x2c);
  if ((int)*(uint *)(param_1 + 0x2c) < 1) {
    *(undefined8 *)(param_1 + 0x78) = 0x7fc000007fc00000;
    *(undefined8 *)(param_1 + 0x70) = 0x7fc000007fc00000;
    fVar17 = 3.4028235e+38;
    *(undefined4 *)(param_1 + 0x90) = 0x7f7fffff;
  }
  else {
    uVar9 = 0;
    lVar8 = *(long *)(param_1 + 0x38);
    lVar10 = *(long *)(param_1 + 0x18);
    fVar15 = 0.0;
    auVar33 = ZEXT216(0);
    do {
      lVar12 = lVar8 + uVar9 * 0x30;
      iVar14 = *(int *)(lVar12 + 4);
      if (2 < iVar14) {
        lVar11 = 0;
        iVar2 = **(int **)(lVar12 + 0x10);
        auVar21 = auVar33;
        do {
          lVar12 = *(long *)(lVar8 + uVar9 * 0x30 + 0x10) + lVar11;
          puVar3 = (undefined8 *)(lVar10 + (long)iVar2 * 0x10);
          uVar24 = *puVar3;
          puVar4 = (undefined8 *)(lVar10 + (long)*(int *)(lVar12 + 4) * 0x10);
          uVar26 = *puVar4;
          fVar17 = (float)uVar24;
          fVar19 = (float)uVar26;
          auVar28._0_4_ = fVar17 - fVar19;
          fVar16 = (float)((ulong)uVar24 >> 0x20);
          fVar20 = (float)((ulong)uVar26 >> 0x20);
          auVar28._4_4_ = fVar16 - fVar20;
          fVar18 = (float)puVar3[1];
          fVar23 = (float)puVar4[1];
          auVar28._8_4_ = fVar18 - fVar23;
          auVar28._12_4_ = 0;
          puVar3 = (undefined8 *)(lVar10 + (long)*(int *)(lVar12 + 8) * 0x10);
          uVar24 = *puVar3;
          fVar29 = (float)uVar24;
          auVar32._0_4_ = fVar17 - fVar29;
          fVar30 = (float)((ulong)uVar24 >> 0x20);
          auVar32._4_4_ = fVar16 - fVar30;
          fVar31 = (float)puVar3[1];
          auVar32._8_4_ = fVar18 - fVar31;
          auVar32._12_4_ = 0;
          auVar33 = NEON_ext(auVar28,auVar28,0xc,1);
          auVar33 = NEON_ext(auVar33,auVar28,8,1);
          auVar34 = NEON_ext(auVar32,auVar32,0xc,1);
          auVar35 = NEON_ext(auVar34,auVar32,8,1);
          auVar34._0_4_ = auVar35._0_4_ * auVar28._0_4_ - auVar33._0_4_ * auVar32._0_4_;
          auVar34._4_4_ = auVar35._4_4_ * auVar28._4_4_ - auVar33._4_4_ * auVar32._4_4_;
          auVar34._8_4_ = auVar35._8_4_ * auVar28._8_4_ - auVar33._8_4_ * auVar32._8_4_;
          auVar34._12_4_ = auVar35._12_4_ * 0.0 - auVar33._12_4_ * 0.0;
          auVar33 = NEON_ext(auVar34,auVar34,0xc,1);
          auVar33 = NEON_ext(auVar33,auVar34,8,1);
          auVar35._0_4_ = auVar33._0_4_ * auVar33._0_4_;
          auVar35._4_4_ = auVar33._4_4_ * auVar33._4_4_;
          auVar35._8_4_ = auVar33._8_4_ * auVar33._8_4_;
          auVar35._12_4_ = 0;
          auVar33 = NEON_ext(auVar35,auVar35,8,1);
          fVar27 = SQRT(auVar35._0_4_ + auVar35._4_4_ + auVar33._0_4_) * 0.5;
          auVar33._0_8_ =
               CONCAT44(auVar21._4_4_ + (fVar16 + fVar20 + fVar30) * 0.33333334 * fVar27,
                        auVar21._0_4_ + (fVar17 + fVar19 + fVar29) * 0.33333334 * fVar27);
          auVar33._8_4_ = auVar21._8_4_ + (fVar18 + fVar23 + fVar31) * 0.33333334 * fVar27;
          auVar33._12_4_ = auVar21._12_4_ + 0.0;
          *(long *)(param_1 + 0x78) = auVar33._8_8_;
          *(undefined8 *)(param_1 + 0x70) = auVar33._0_8_;
          fVar15 = fVar15 + fVar27;
          lVar11 = lVar11 + 4;
          auVar21 = auVar33;
        } while ((ulong)(iVar14 - 1) * 4 + -4 != lVar11);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar7);
    fVar15 = 1.0 / fVar15;
    fVar16 = auVar33._0_4_ * fVar15;
    fVar18 = auVar33._4_4_ * fVar15;
    fVar19 = auVar33._8_4_ * fVar15;
    fVar15 = auVar33._12_4_ * fVar15;
    *(ulong *)(param_1 + 0x78) = CONCAT44(fVar15,fVar19);
    *(ulong *)(param_1 + 0x70) = CONCAT44(fVar18,fVar16);
    *(undefined4 *)(param_1 + 0x90) = 0x7f7fffff;
    pfVar13 = (float *)(lVar8 + 0x2c);
    fVar17 = 3.4028235e+38;
    do {
      auVar5 = *(undefined1 (*) [12])(pfVar13 + -3);
      auVar21._0_4_ = fVar16 * (float)*(undefined8 *)*(undefined1 (*) [12])(pfVar13 + -3);
      auVar21._4_4_ = fVar18 * auVar5._4_4_;
      auVar21._8_4_ = fVar19 * auVar5._8_4_;
      auVar21._12_4_ = fVar15 * 0.0;
      auVar33 = NEON_ext(auVar21,auVar21,8,1);
      fVar20 = ABS(*pfVar13 + auVar21._0_4_ + auVar21._4_4_ + auVar33._0_4_);
      if (fVar20 < fVar17) {
        *(float *)(param_1 + 0x90) = fVar20;
        fVar17 = fVar20;
      }
      pfVar13 = pfVar13 + 0xc;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0xc);
  if ((int)*(uint *)(param_1 + 0xc) < 1) {
    uVar9 = 0xff7fffffff7fffff;
    uVar22 = 0x7f7fffff7f7fffff;
    fVar16 = 3.4028235e+38;
    fVar15 = -3.4028235e+38;
  }
  else {
    uVar9 = 0xff7fffffff7fffff;
    uVar22 = 0x7f7fffff7f7fffff;
    fVar15 = -3.4028235e+38;
    pfVar13 = (float *)(*(long *)(param_1 + 0x18) + 8);
    fVar18 = 3.4028235e+38;
    do {
      uVar25 = *(ulong *)(pfVar13 + -2);
      fVar16 = (float)(uVar25 >> 0x20);
      uVar22 = uVar22 ^ (uVar22 ^ uVar25) &
                        CONCAT44(-(uint)(fVar16 < (float)(uVar22 >> 0x20)),
                                 -(uint)((float)uVar25 < (float)uVar22));
      uVar9 = uVar9 ^ (uVar9 ^ uVar25) &
                      CONCAT44(-(uint)((float)(uVar9 >> 0x20) < fVar16),
                               -(uint)((float)uVar9 < (float)uVar25));
      fVar19 = *pfVar13;
      fVar16 = fVar19;
      if (fVar18 <= fVar19) {
        fVar16 = fVar18;
      }
      if (fVar19 <= fVar15) {
        fVar19 = fVar15;
      }
      fVar15 = fVar19;
      uVar7 = uVar7 - 1;
      pfVar13 = pfVar13 + 4;
      fVar18 = fVar16;
    } while (uVar7 != 0);
  }
  fVar19 = (float)(uVar9 >> 0x20);
  fVar23 = (float)(uVar22 >> 0x20);
  fVar18 = (float)uVar9 - (float)uVar22;
  fVar20 = fVar19 - fVar23;
  *(undefined8 *)(param_1 + 0xb0) = CONCAT44(fVar20,fVar18);
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar19 + fVar23,(float)uVar9 + (float)uVar22);
  *(float *)(param_1 + 0xa8) = fVar15 + fVar16;
  *(undefined4 *)(param_1 + 0xac) = 0;
  fVar15 = fVar15 - fVar16;
  *(float *)(param_1 + 0xb8) = fVar15;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  fVar16 = fVar17 / 1.7320508;
  uVar6 = 2;
  uVar1 = uVar6;
  if (fVar15 <= fVar20) {
    uVar1 = 1;
  }
  if (fVar15 <= fVar18) {
    uVar6 = 0;
  }
  if (fVar20 <= fVar18) {
    uVar1 = uVar6;
  }
  uVar7 = (ulong)uVar1;
  fVar15 = *(float *)((long)(param_1 + 0xb0) + uVar7 * 4);
  *(float *)(param_1 + 0x84) = fVar16;
  *(float *)(param_1 + 0x88) = fVar16;
  pfVar13 = (float *)(param_1 + 0x80);
  *pfVar13 = fVar16;
  fVar18 = fVar15 * 0.5;
  pfVar13[uVar7] = fVar18;
  iVar14 = 0x400;
  do {
    uVar9 = param_1;
    FUN_109818694();
    if ((uVar9 & 1) != 0) {
      uVar6 = 1 << uVar7 & 3;
      uVar9 = (ulong)uVar6;
      uVar1 = 1 << uVar9 & 3;
      fVar18 = pfVar13[uVar1];
      fVar15 = (fVar17 - fVar16) * 0.0009765625;
      fVar16 = pfVar13[uVar6];
      pfVar13[uVar9] = fVar15 + fVar16;
      fVar17 = pfVar13[uVar1];
      pfVar13[uVar1] = fVar15 + fVar17;
      uVar7 = param_1;
      FUN_109818694();
      if ((int)uVar7 != 0) {
        iVar14 = 0x400;
        fVar17 = fVar15 + fVar17;
        do {
          fVar18 = fVar17;
          iVar14 = iVar14 + -1;
          if (iVar14 == 0) {
            return;
          }
          fVar16 = pfVar13[uVar9];
          pfVar13[uVar9] = fVar15 + fVar16;
          fVar17 = pfVar13[uVar1];
          pfVar13[uVar1] = fVar15 + fVar17;
          uVar7 = param_1;
          FUN_109818694();
          fVar17 = fVar15 + fVar17;
        } while ((uVar7 & 1) != 0);
      }
      pfVar13[uVar9] = fVar16;
      pfVar13[uVar1] = fVar18;
      return;
    }
    fVar18 = fVar18 - (fVar15 * 0.5 - fVar16) * 0.0009765625;
    pfVar13[uVar7] = fVar18;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  *(float *)(param_1 + 0x84) = fVar16;
  *(float *)(param_1 + 0x88) = fVar16;
  *(float *)(param_1 + 0x80) = fVar16;
  return;
}



/* Entry: 109819220; end: 10981930b;  */

void FUN_109819220(long param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  *param_4 = 3.4028235e+38;
  *param_5 = -3.4028235e+38;
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < 1) {
    fVar8 = -3.4028235e+38;
  }
  else {
    lVar5 = 0;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar5);
      uVar4 = puVar2[1];
      fVar9 = (float)uVar4;
      fVar11 = (float)((ulong)uVar4 >> 0x20);
      uVar4 = *puVar2;
      fVar8 = (float)uVar4;
      fVar10 = (float)((ulong)uVar4 >> 0x20);
      auVar13._0_4_ = *param_2 * fVar8;
      auVar13._4_4_ = param_2[1] * fVar10;
      auVar13._8_4_ = param_2[2] * fVar9;
      auVar13._12_4_ = param_2[3] * fVar11;
      auVar14._0_4_ = fVar8 * param_2[4];
      auVar14._4_4_ = fVar10 * param_2[5];
      auVar14._8_4_ = fVar9 * param_2[6];
      auVar14._12_4_ = fVar11 * param_2[7];
      fVar8 = fVar8 * param_2[8];
      fVar10 = fVar10 * param_2[9];
      auVar16 = NEON_ext(auVar13,auVar13,8,1);
      auVar17 = NEON_ext(auVar14,auVar14,8,1);
      auVar15._4_4_ = fVar10;
      auVar15._0_4_ = fVar8;
      auVar15._8_4_ = fVar9 * param_2[10];
      auVar15._12_4_ = 0;
      auVar3._4_4_ = fVar10;
      auVar3._0_4_ = fVar8;
      auVar3._8_4_ = fVar9 * param_2[10];
      auVar3._12_4_ = 0;
      auVar15 = NEON_ext(auVar15,auVar3,8,1);
      fVar9 = auVar13._0_4_ + auVar13._4_4_ + auVar16._0_4_ + (float)*(undefined8 *)(param_2 + 0xc);
      fVar11 = auVar14._0_4_ + auVar14._4_4_ + auVar17._0_4_ +
               (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
      fVar8 = fVar8 + fVar10 + auVar15._0_4_ + auVar15._4_4_ + (float)*(undefined8 *)(param_2 + 0xe)
      ;
      fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20) + 0.0;
      auVar16._0_4_ = fVar9 * *param_3;
      auVar16._4_4_ = fVar11 * param_3[1];
      auVar16._8_4_ = fVar8 * param_3[2];
      auVar16._12_4_ = fVar10 * param_3[3];
      auVar15 = NEON_ext(auVar16,auVar16,8,1);
      fVar12 = auVar16._0_4_ + auVar16._4_4_ + auVar15._0_4_;
      if (fVar12 < *param_4) {
        *param_4 = fVar12;
        param_6[1] = CONCAT44(fVar10,fVar8);
        *param_6 = CONCAT44(fVar11,fVar9);
      }
      if (*param_5 < fVar12) {
        *param_5 = fVar12;
        param_7[1] = CONCAT44(fVar10,fVar8);
        *param_7 = CONCAT44(fVar11,fVar9);
      }
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar5 != 0);
    fVar8 = *param_5;
  }
  fVar9 = *param_4;
  if (fVar8 < fVar9) {
    *param_4 = fVar8;
    *param_5 = fVar9;
    uVar7 = param_6[1];
    uVar6 = *param_6;
    uVar4 = *param_7;
    param_6[1] = param_7[1];
    *param_6 = uVar4;
    param_7[1] = uVar7;
    *param_7 = uVar6;
  }
  return;
}



/* Entry: 10981930c; end: 109819357;  */

long FUN_10981930c(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109819358; end: 1098193a3;  */

long FUN_109819358(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 1098193a4; end: 109819427;  */

long FUN_1098193a4(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      FUN_10980501c(*(long *)(param_1 + 0x10) + lVar2);
      lVar2 = lVar2 + 0x30;
    } while ((ulong)uVar1 * 0x30 - lVar2 != 0);
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109819428; end: 109819497;  */

int FUN_109819428(long param_1,short param_2,uint param_3)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(param_1 + 0x48) - 1U & param_3 * 0x10000 + (int)param_2;
  if (*(uint *)(param_1 + 4) <= uVar2) {
    return -1;
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x10) + (long)(int)uVar2 * 4);
  if (iVar3 != -1) {
    do {
      psVar1 = (short *)(*(long *)(param_1 + 0x70) + (long)iVar3 * 4);
      if ((*psVar1 == param_2) && ((uint)(ushort)psVar1[1] == (param_3 & 0xffff))) {
        return iVar3;
      }
      iVar3 = *(int *)(*(long *)(param_1 + 0x30) + (long)iVar3 * 4);
    } while (iVar3 != -1);
  }
  return iVar3;
}



/* Entry: 109819498; end: 109819647;  */

void FUN_109819498(long *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  ulong uStack_68;
  
  fVar3 = *param_3;
  fVar2 = param_3[1];
  fVar11 = param_3[2];
  fVar1 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar3 + param_2[5] * fVar2 +
          param_2[9] * fVar11;
  fVar4 = fVar3 * 0.0 + fVar2 * 0.0 + fVar11 * 0.0;
  uStack_68 = CONCAT17((char)((uint)fVar4 >> 0x18),
                       CONCAT16((char)((uint)fVar4 >> 0x10),
                                CONCAT15((char)((uint)fVar4 >> 8),
                                         CONCAT14(SUB41(fVar4,0),
                                                  (float)*(undefined8 *)(param_2 + 2) * fVar3 +
                                                  param_2[6] * fVar2 + param_2[10] * fVar11))));
  uStack_70 = CONCAT17((char)((uint)fVar1 >> 0x18),
                       CONCAT16((char)((uint)fVar1 >> 0x10),
                                CONCAT15((char)((uint)fVar1 >> 8),
                                         CONCAT14(SUB41(fVar1,0),
                                                  (float)*(undefined8 *)param_2 * fVar3 +
                                                  param_2[4] * fVar2 + param_2[8] * fVar11))));
  (**(code **)(*param_1 + 0x80))(auStack_80,param_1,&uStack_70);
  fVar1 = (float)auStack_80._0_8_;
  auVar25._0_4_ = *param_2 * fVar1;
  fVar4 = SUB84(auStack_80._0_8_,4);
  auVar25._4_4_ = param_2[1] * fVar4;
  fVar3 = (float)auStack_80._8_8_;
  auVar25._8_4_ = param_2[2] * fVar3;
  auVar25._12_4_ = param_2[3] * SUB84(auStack_80._8_8_,4);
  auVar15._0_4_ = fVar1 * param_2[4];
  auVar15._4_4_ = fVar4 * param_2[5];
  auVar15._8_4_ = fVar3 * param_2[6];
  auVar15._12_4_ = SUB84(auStack_80._8_8_,4) * param_2[7];
  fVar1 = fVar1 * param_2[8];
  fVar4 = fVar4 * param_2[9];
  uVar5 = (undefined1)((uint)fVar4 >> 8);
  uVar6 = (undefined1)((uint)fVar4 >> 0x10);
  uVar7 = (undefined1)((uint)fVar4 >> 0x18);
  fVar3 = fVar3 * param_2[10];
  uVar8 = (undefined1)((uint)fVar3 >> 8);
  uVar9 = (undefined1)((uint)fVar3 >> 0x10);
  uVar10 = (undefined1)((uint)fVar3 >> 0x18);
  auVar19 = NEON_ext(auVar25,auVar25,8,1);
  auVar24 = NEON_ext(auVar15,auVar15,8,1);
  auVar16[4] = SUB41(fVar4,0);
  auVar16._0_4_ = fVar1;
  auVar16[5] = uVar5;
  auVar16[6] = uVar6;
  auVar16[7] = uVar7;
  auVar16[8] = SUB41(fVar3,0);
  auVar16[9] = uVar8;
  auVar16[10] = uVar9;
  auVar16[0xb] = uVar10;
  auVar16._12_4_ = 0;
  auVar20[4] = SUB41(fVar4,0);
  auVar20._0_4_ = fVar1;
  auVar20[5] = uVar5;
  auVar20[6] = uVar6;
  auVar20[7] = uVar7;
  auVar20[8] = SUB41(fVar3,0);
  auVar20[9] = uVar8;
  auVar20[10] = uVar9;
  auVar20[0xb] = uVar10;
  auVar20._12_4_ = 0;
  auVar16 = NEON_ext(auVar16,auVar20,8,1);
  fVar18 = auVar25._0_4_ + auVar25._4_4_ + auVar19._0_4_ + (float)*(undefined8 *)(param_2 + 0xc);
  fVar21 = auVar15._0_4_ + auVar15._4_4_ + auVar24._0_4_ +
           (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  fVar22 = fVar1 + fVar4 + auVar16._0_4_ + auVar16._4_4_ + (float)*(undefined8 *)(param_2 + 0xe);
  fVar23 = (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20) + 0.0;
  uStack_88 = uStack_68 ^ 0x8000000080000000;
  uStack_90 = uStack_70 ^ 0x8000000080000000;
  (**(code **)(*param_1 + 0x80))(auStack_80,param_1,&uStack_90);
  fVar1 = (float)auStack_80._0_8_;
  auVar12._0_4_ = *param_2 * fVar1;
  fVar4 = SUB84(auStack_80._0_8_,4);
  auVar12._4_4_ = param_2[1] * fVar4;
  fVar3 = (float)auStack_80._8_8_;
  auVar12._8_4_ = param_2[2] * fVar3;
  auVar12._12_4_ = param_2[3] * SUB84(auStack_80._8_8_,4);
  auVar17._0_4_ = fVar1 * param_2[4];
  auVar17._4_4_ = fVar4 * param_2[5];
  auVar17._8_4_ = fVar3 * param_2[6];
  auVar17._12_4_ = SUB84(auStack_80._8_8_,4) * param_2[7];
  fVar1 = fVar1 * param_2[8];
  fVar4 = fVar4 * param_2[9];
  uVar5 = (undefined1)((uint)fVar4 >> 8);
  uVar6 = (undefined1)((uint)fVar4 >> 0x10);
  uVar7 = (undefined1)((uint)fVar4 >> 0x18);
  fVar3 = fVar3 * param_2[10];
  uVar8 = (undefined1)((uint)fVar3 >> 8);
  uVar9 = (undefined1)((uint)fVar3 >> 0x10);
  uVar10 = (undefined1)((uint)fVar3 >> 0x18);
  auVar20 = NEON_ext(auVar12,auVar12,8,1);
  auVar25 = NEON_ext(auVar17,auVar17,8,1);
  auVar19[4] = SUB41(fVar4,0);
  auVar19._0_4_ = fVar1;
  auVar19[5] = uVar5;
  auVar19[6] = uVar6;
  auVar19[7] = uVar7;
  auVar19[8] = SUB41(fVar3,0);
  auVar19[9] = uVar8;
  auVar19[10] = uVar9;
  auVar19[0xb] = uVar10;
  auVar19._12_4_ = 0;
  auVar24[4] = SUB41(fVar4,0);
  auVar24._0_4_ = fVar1;
  auVar24[5] = uVar5;
  auVar24[6] = uVar6;
  auVar24[7] = uVar7;
  auVar24[8] = SUB41(fVar3,0);
  auVar24[9] = uVar8;
  auVar24[10] = uVar9;
  auVar24[0xb] = uVar10;
  auVar24._12_4_ = 0;
  auVar16 = NEON_ext(auVar19,auVar24,8,1);
  fVar3 = auVar12._0_4_ + auVar12._4_4_ + auVar20._0_4_ + (float)*(undefined8 *)(param_2 + 0xc);
  fVar2 = auVar17._0_4_ + auVar17._4_4_ + auVar25._0_4_ +
          (float)((ulong)*(undefined8 *)(param_2 + 0xc) >> 0x20);
  uVar5 = (undefined1)((uint)fVar2 >> 8);
  uVar6 = (undefined1)((uint)fVar2 >> 0x10);
  uVar7 = (undefined1)((uint)fVar2 >> 0x18);
  fVar1 = fVar1 + fVar4 + auVar16._0_4_ + auVar16._4_4_ + (float)*(undefined8 *)(param_2 + 0xe);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20) + 0.0;
  uVar8 = (undefined1)((uint)fVar4 >> 8);
  uVar9 = (undefined1)((uint)fVar4 >> 0x10);
  uVar10 = (undefined1)((uint)fVar4 >> 0x18);
  auVar13._0_4_ = fVar18 * *param_3;
  auVar13._4_4_ = fVar21 * param_3[1];
  auVar13._8_4_ = fVar22 * param_3[2];
  auVar13._12_4_ = fVar23 * param_3[3];
  auVar16 = NEON_ext(auVar13,auVar13,8,1);
  *param_4 = auVar13._0_4_ + auVar13._4_4_ + auVar16._0_4_;
  auVar14._0_4_ = fVar3 * *param_3;
  auVar14._4_4_ = fVar2 * param_3[1];
  auVar14._8_4_ = fVar1 * param_3[2];
  auVar14._12_4_ = fVar4 * param_3[3];
  auVar16 = NEON_ext(auVar14,auVar14,8,1);
  *param_5 = auVar14._0_4_ + auVar14._4_4_ + auVar16._0_4_;
  *(ulong *)(param_7 + 2) =
       CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(SUB41(fVar4,0),fVar1))));
  *(ulong *)param_7 = CONCAT17(uVar7,CONCAT16(uVar6,CONCAT15(uVar5,CONCAT14(SUB41(fVar2,0),fVar3))))
  ;
  param_6[2] = fVar22;
  param_6[3] = fVar23;
  *param_6 = fVar18;
  param_6[1] = fVar21;
  fVar11 = *param_4;
  if (*param_5 < fVar11) {
    *param_4 = *param_5;
    *param_5 = fVar11;
    param_7[2] = fVar22;
    param_7[3] = fVar23;
    *param_7 = fVar18;
    param_7[1] = fVar21;
    *(ulong *)(param_6 + 2) =
         CONCAT17(uVar10,CONCAT16(uVar9,CONCAT15(uVar8,CONCAT14(SUB41(fVar4,0),fVar1))));
    *(ulong *)param_6 =
         CONCAT17(uVar7,CONCAT16(uVar6,CONCAT15(uVar5,CONCAT14(SUB41(fVar2,0),fVar3))));
  }
  return;
}



/* Entry: 109819648; end: 10981997f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109819648(float *param_1,long *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  byte bVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  undefined1 auVar26 [16];
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  undefined1 auVar31 [12];
  float fVar32;
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar39;
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  byte bVar46;
  byte bVar48;
  byte bVar49;
  int iVar47;
  byte bVar50;
  float afStack_58 [4];
  float afStack_48 [3];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  long lStack_30;
  long lStack_28;
  
  iVar47 = (int)param_2[1];
  if (iVar47 < 5) {
    if (iVar47 == 0) {
      bVar46 = *(byte *)((long)param_3 + 0xb);
      bVar48 = *(byte *)((long)param_3 + 0xf);
      uVar29 = CONCAT17(*(undefined1 *)((long)param_3 + 7),
                        (uint7)(*(byte *)((long)param_3 + 3) & 0x80) << 0x18) & 0x80ffffffffffffff;
      lVar30 = param_2[6];
      uVar5 = *(undefined1 *)((long)param_2 + 0x31);
      uVar6 = *(undefined1 *)((long)param_2 + 0x32);
      bVar49 = *(byte *)((long)param_2 + 0x33);
      uVar7 = *(undefined1 *)((long)param_2 + 0x34);
      uVar8 = *(undefined1 *)((long)param_2 + 0x35);
      uVar9 = *(undefined1 *)((long)param_2 + 0x36);
      bVar50 = *(byte *)((long)param_2 + 0x37);
      uVar10 = *(undefined1 *)((long)param_2 + 0x39);
      uVar11 = *(undefined1 *)((long)param_2 + 0x3a);
      bVar12 = *(byte *)((long)param_2 + 0x3b);
      uVar13 = *(undefined1 *)((long)param_2 + 0x3c);
      uVar14 = *(undefined1 *)((long)param_2 + 0x3d);
      uVar15 = *(undefined1 *)((long)param_2 + 0x3e);
      bVar16 = *(byte *)((long)param_2 + 0x3f);
      *(char *)(param_1 + 2) = (char)param_2[7];
      *(undefined1 *)((long)param_1 + 9) = uVar10;
      *(undefined1 *)((long)param_1 + 10) = uVar11;
      *(byte *)((long)param_1 + 0xb) = bVar46 & 0x80 ^ bVar12;
      *(undefined1 *)(param_1 + 3) = uVar13;
      *(undefined1 *)((long)param_1 + 0xd) = uVar14;
      *(undefined1 *)((long)param_1 + 0xe) = uVar15;
      *(byte *)((long)param_1 + 0xf) = bVar48 & 0x80 ^ bVar16;
      *(char *)param_1 = (char)lVar30;
      *(undefined1 *)((long)param_1 + 1) = uVar5;
      *(undefined1 *)((long)param_1 + 2) = uVar6;
      *(byte *)((long)param_1 + 3) = (byte)(uVar29 >> 0x18) ^ bVar49;
      *(undefined1 *)(param_1 + 1) = uVar7;
      *(undefined1 *)((long)param_1 + 5) = uVar8;
      *(undefined1 *)((long)param_1 + 6) = uVar9;
      *(byte *)((long)param_1 + 7) = (byte)(uVar29 >> 0x38) ^ bVar50;
      return;
    }
    if (iVar47 == 1) {
      fVar32 = *param_3;
      fVar40 = param_3[1];
      fVar35 = param_3[2];
      auVar41._0_4_ = fVar32 * *(float *)(param_2 + 0xe);
      auVar41._4_4_ = fVar40 * *(float *)((long)param_2 + 0x74);
      auVar41._8_4_ = fVar35 * *(float *)(param_2 + 0xf);
      auVar43._0_4_ = *(float *)(param_2 + 10) * fVar32;
      auVar43._4_4_ = *(float *)((long)param_2 + 0x54) * fVar40;
      auVar43._8_4_ = *(float *)(param_2 + 0xb) * fVar35;
      auVar43._12_4_ = *(float *)((long)param_2 + 0x5c) * 0.0;
      auVar36._0_4_ = fVar32 * *(float *)(param_2 + 0xc);
      auVar36._4_4_ = fVar40 * *(float *)((long)param_2 + 100);
      auVar36._8_4_ = fVar35 * *(float *)(param_2 + 0xd);
      auVar36._12_4_ = *(float *)((long)param_2 + 0x6c) * 0.0;
      auVar37 = NEON_ext(auVar43,auVar43,8,1);
      auVar45 = NEON_ext(auVar36,auVar36,8,1);
      auVar41._12_4_ = 0;
      fVar40 = auVar43._0_4_ + auVar43._4_4_ + auVar37._0_4_;
      fVar35 = auVar36._0_4_ + auVar36._4_4_ + auVar45._0_4_;
      auVar36 = NEON_ext(auVar41,auVar41,8,1);
      fVar32 = auVar41._0_4_ + auVar41._4_4_ + auVar36._0_4_ + auVar36._4_4_;
      lVar30 = 2;
      if (fVar32 <= fVar35) {
        lVar30 = 1;
      }
      lVar3 = 2;
      if (fVar32 <= fVar40) {
        lVar3 = 0;
      }
      if (fVar35 <= fVar40) {
        lVar30 = lVar3;
      }
      auVar31 = SUB1612(*(undefined1 (*) [16])((long)(param_2 + 10) + lVar30 * 4 * 4),0);
LAB_10981992c:
      *(long *)param_1 = auVar31._0_8_;
      param_1[2] = auVar31._8_4_;
      param_1[3] = 0.0;
      return;
    }
    if (iVar47 == 4) {
      uVar29 = param_2[0x11];
      uVar27 = *(uint *)((long)param_2 + 0x7c);
      goto LAB_1098197d4;
    }
  }
  else if (iVar47 < 10) {
    if (iVar47 == 5) {
      uVar29 = param_2[0xf];
      uVar27 = *(uint *)(param_2 + 0x10);
LAB_1098197d4:
      auVar36 = *(undefined1 (*) [16])(param_2 + 4);
      afStack_48[2] = *param_3 * auVar36._0_4_;
      fStack_3c = param_3[1] * auVar36._4_4_;
      fStack_38 = param_3[2] * auVar36._8_4_;
      fStack_34 = param_3[3] * auVar36._12_4_;
      if ((int)uVar27 < 4) {
        if ((int)uVar27 < 1) {
          uVar28 = 0xffffffffffffffff;
        }
        else {
          uVar28 = 0;
          fVar32 = -3.4028235e+38;
          iVar47 = -1;
          do {
            pfVar4 = (float *)(uVar29 + uVar28 * 0x10);
            auVar37._0_4_ = afStack_48[2] * *pfVar4;
            auVar37._4_4_ = fStack_3c * pfVar4[1];
            auVar37._8_4_ = fStack_38 * pfVar4[2];
            auVar37._12_4_ = fStack_34 * pfVar4[3];
            auVar43 = NEON_ext(auVar37,auVar37,8,1);
            fVar40 = auVar37._0_4_ + auVar37._4_4_ + auVar43._0_4_;
            iVar1 = (int)uVar28;
            if (fVar40 <= fVar32) {
              iVar1 = iVar47;
              fVar40 = fVar32;
            }
            fVar32 = fVar40;
            uVar28 = uVar28 + 1;
            iVar47 = iVar1;
          } while (uVar27 != uVar28);
          uVar28 = (ulong)iVar1;
        }
      }
      else {
        uVar28 = uVar29;
        (*(code *)PTR_FUN_1132e04a0)(uVar29,afStack_48 + 2,uVar27,afStack_48 + 1);
        auVar36 = *(undefined1 (*) [16])(param_2 + 4);
      }
      pfVar4 = (float *)(uVar29 + (uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU)) * 0x10);
      fVar32 = *pfVar4;
      fVar40 = pfVar4[1];
      fVar35 = pfVar4[3];
      param_1[2] = auVar36._8_4_ * pfVar4[2];
      param_1[3] = auVar36._12_4_ * fVar35;
      *param_1 = auVar36._0_4_ * fVar32;
      param_1[1] = auVar36._4_4_ * fVar40;
      return;
    }
    if (iVar47 == 8) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      return;
    }
  }
  else {
    if (iVar47 == 10) {
      fVar32 = *param_3;
      fVar40 = param_3[1];
      fVar35 = param_3[2];
      lVar30 = (long)(int)param_2[9];
      fVar38 = *(float *)((long)param_2 + lVar30 * 4 + 0x30);
      auVar45._0_4_ = fVar32 * fVar32;
      auVar45._4_4_ = fVar40 * fVar40;
      auVar45._8_4_ = fVar35 * fVar35;
      auVar45._12_4_ = 0;
      auVar36 = NEON_ext(auVar45,auVar45,8,1);
      fVar44 = auVar45._0_4_ + auVar45._4_4_ + auVar36._0_4_;
      if (1.4210855e-14 <= fVar44) {
        fVar44 = 1.0 / SQRT(fVar44);
        fVar32 = fVar32 * fVar44;
        fVar40 = fVar40 * fVar44;
        fVar35 = fVar35 * fVar44;
        fVar44 = fVar44 * 0.0;
      }
      else {
        fVar32 = 1.0;
        fVar40 = 0.0;
        fVar35 = 0.0;
        fVar44 = 0.0;
      }
      lStack_30 = 0;
      lStack_28 = 0;
      *(float *)((long)&lStack_30 + lVar30 * 4) = fVar38;
      auVar42._0_4_ = fVar32 * (float)lStack_30;
      auVar42._4_4_ = fVar40 * (float)((ulong)lStack_30 >> 0x20);
      auVar42._8_4_ = fVar35 * (float)lStack_28;
      auVar42._12_4_ = fVar44 * (float)((ulong)lStack_28 >> 0x20);
      auVar36 = NEON_ext(auVar42,auVar42,8,1);
      fVar39 = auVar42._0_4_ + auVar42._4_4_ + auVar36._0_4_;
      iVar47 = -(uint)(-1e+18 < fVar39);
      bVar46 = (byte)iVar47;
      auVar31[0] = bVar46 & (byte)lStack_30;
      bVar48 = (byte)((uint)iVar47 >> 8);
      auVar31[1] = bVar48 & (byte)((ulong)lStack_30 >> 8);
      bVar49 = (byte)((uint)iVar47 >> 0x10);
      auVar31[2] = bVar49 & (byte)((ulong)lStack_30 >> 0x10);
      bVar50 = (byte)((uint)iVar47 >> 0x18);
      auVar31[3] = bVar50 & (byte)((ulong)lStack_30 >> 0x18);
      auVar31[4] = bVar46 & (byte)((ulong)lStack_30 >> 0x20);
      auVar31[5] = bVar48 & (byte)((ulong)lStack_30 >> 0x28);
      auVar31[6] = bVar49 & (byte)((ulong)lStack_30 >> 0x30);
      auVar31[7] = bVar50 & (byte)((ulong)lStack_30 >> 0x38);
      auVar31[8] = bVar46 & (byte)lStack_28;
      auVar31[9] = bVar48 & (byte)((ulong)lStack_28 >> 8);
      auVar31[10] = bVar49 & (byte)((ulong)lStack_28 >> 0x10);
      auVar31[0xb] = bVar50 & (byte)((ulong)lStack_28 >> 0x18);
      if (fVar39 <= -1e+18) {
        fVar39 = -1e+18;
      }
      lStack_30 = 0;
      lStack_28 = 0;
      *(float *)((long)&lStack_30 + lVar30 * 4) = -fVar38;
      auVar26._8_8_ = lStack_28;
      auVar26._0_8_ = lStack_30;
      auVar34._0_4_ = fVar32 * (float)lStack_30;
      auVar34._4_4_ = fVar40 * (float)((ulong)lStack_30 >> 0x20);
      auVar34._8_4_ = fVar35 * (float)lStack_28;
      auVar34._12_4_ = fVar44 * (float)((ulong)lStack_28 >> 0x20);
      auVar36 = NEON_ext(auVar34,auVar34,8,1);
      auVar33._0_4_ = -(uint)(fVar39 < auVar34._0_4_ + auVar34._4_4_ + auVar36._0_4_);
      auVar33._4_4_ = auVar33._0_4_;
      auVar33._8_4_ = auVar33._0_4_;
      auVar31 = auVar26._0_12_ ^ (auVar26._0_12_ ^ auVar31) & ~auVar33;
      goto LAB_10981992c;
    }
    if (iVar47 == 0xd) {
      lStack_28 = param_2[7];
      lStack_30 = param_2[6];
      afStack_48[1] = param_3[1];
      afStack_48[2] = *param_3;
      afStack_48[0] = param_3[2];
      iVar47 = (int)param_2[9];
      pfVar4 = (float *)((ulong)&lStack_30 | 4);
      pfVar17 = afStack_48 + 1;
      pfVar18 = afStack_58 + 1;
      pfVar19 = afStack_48 + 2;
      pfVar20 = afStack_58 + 2;
      if (iVar47 == 1) {
        pfVar4 = (float *)&lStack_30;
        pfVar17 = afStack_48 + 2;
        pfVar18 = afStack_58 + 2;
        pfVar19 = afStack_48 + 1;
        pfVar20 = afStack_58 + 1;
      }
      pfVar2 = (float *)&lStack_30;
      pfVar21 = afStack_48 + 2;
      pfVar22 = afStack_58 + 2;
      pfVar23 = afStack_48;
      pfVar24 = afStack_58;
      pfVar25 = afStack_58 + 1;
      fVar32 = param_3[1];
      if (iVar47 != 2) {
        pfVar2 = pfVar4;
        pfVar21 = pfVar17;
        pfVar22 = pfVar18;
        pfVar23 = pfVar19;
        pfVar24 = pfVar20;
        pfVar25 = afStack_58;
        fVar32 = param_3[2];
      }
      fVar40 = *pfVar2;
      fVar35 = *(float *)((long)&lStack_30 + (long)iVar47 * 4);
      fVar38 = *pfVar21;
      fVar44 = fVar32 * fVar32 + fVar38 * fVar38;
      if (fVar44 == 0.0) {
        fVar38 = -fVar35;
        if (0.0 <= *pfVar23) {
          fVar38 = fVar35;
        }
        fVar32 = 0.0;
      }
      else {
        fVar44 = fVar40 / SQRT(fVar44);
        fVar40 = fVar38 * fVar44;
        fVar38 = -fVar35;
        if (0.0 <= *pfVar23) {
          fVar38 = fVar35;
        }
        fVar32 = fVar32 * fVar44;
      }
      *pfVar22 = fVar40;
      *pfVar24 = fVar38;
      *pfVar25 = fVar32;
      *param_1 = afStack_58[2];
      param_1[1] = afStack_58[1];
      *(ulong *)(param_1 + 2) = (ulong)(uint)afStack_58[0];
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001098197c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))();
  return;
}



/* Entry: 109819980; end: 109819a4f;  */

void FUN_109819980(undefined8 param_1,undefined8 *param_2,ulong param_3,uint param_4,
                  undefined8 *param_5)

{
  int iVar1;
  float *pfVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  float fVar10;
  undefined8 in_register_00005008;
  float fVar12;
  undefined8 uVar11;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_44 [4];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar14 = param_5[1];
  uVar13 = *param_5;
  fVar7 = (float)param_1 * (float)uVar13;
  fVar9 = (float)((ulong)param_1 >> 0x20) * (float)((ulong)uVar13 >> 0x20);
  uStack_40 = CONCAT44(fVar9,fVar7);
  fVar10 = (float)in_register_00005008 * (float)uVar14;
  fVar12 = (float)((ulong)in_register_00005008 >> 0x20) * (float)((ulong)uVar14 >> 0x20);
  uStack_38 = CONCAT44(fVar12,fVar10);
  if ((int)param_4 < 4) {
    if ((int)param_4 < 1) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar4 = 0;
      fVar6 = -3.4028235e+38;
      iVar5 = -1;
      do {
        pfVar2 = (float *)(param_3 + uVar4 * 0x10);
        auVar16._0_4_ = fVar7 * *pfVar2;
        auVar16._4_4_ = fVar9 * pfVar2[1];
        auVar16._8_4_ = fVar10 * pfVar2[2];
        auVar16._12_4_ = fVar12 * pfVar2[3];
        auVar17 = NEON_ext(auVar16,auVar16,8,1);
        fVar15 = auVar16._0_4_ + auVar16._4_4_ + auVar17._0_4_;
        iVar1 = (int)uVar4;
        if (fVar15 <= fVar6) {
          iVar1 = iVar5;
          fVar15 = fVar6;
        }
        fVar6 = fVar15;
        uVar4 = uVar4 + 1;
        iVar5 = iVar1;
      } while (param_4 != uVar4);
      uVar4 = (ulong)iVar1;
    }
  }
  else {
    uVar4 = param_3;
    (*(code *)PTR_FUN_1132e04a0)(param_3,&uStack_40,param_4,auStack_44);
    uVar14 = param_5[1];
    uVar13 = *param_5;
  }
  puVar3 = (undefined8 *)(param_3 + (uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU)) * 0x10);
  uVar11 = puVar3[1];
  uVar8 = *puVar3;
  param_2[1] = CONCAT44((float)((ulong)uVar14 >> 0x20) * (float)((ulong)uVar11 >> 0x20),
                        (float)uVar14 * (float)uVar11);
  *param_2 = CONCAT44((float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar8 >> 0x20),
                      (float)uVar13 * (float)uVar8);
  return;
}



/* Entry: 109819a50; end: 109819af7;  */

void FUN_109819a50(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined8 uStack_28;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  auVar5._0_4_ = (float)uVar1 * (float)uVar1;
  fVar3 = (float)((ulong)uVar1 >> 0x20);
  auVar5._4_4_ = fVar3 * fVar3;
  auVar5._8_4_ = (float)uVar2 * (float)uVar2;
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  auVar5._12_4_ = fVar3 * fVar3;
  auVar6 = NEON_ext(auVar5,auVar5,8,1);
  fVar3 = auVar5._0_4_ + auVar5._4_4_ + auVar6._0_4_;
  if (fVar3 < 1.4210855e-14) {
    uVar2 = 0xbf800000;
    uVar1 = 0xbf800000bf800000;
    uVar4 = NEON_fmov(0x3f800000,4);
    fVar3 = (float)uVar4 + (float)((ulong)uVar4 >> 0x20) + 1.0;
  }
  fVar3 = 1.0 / SQRT(fVar3);
  fStack_30 = (float)uVar1 * fVar3;
  fStack_2c = (float)((ulong)uVar1 >> 0x20) * fVar3;
  uStack_28 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar3,(float)uVar2 * fVar3);
  fVar3 = fStack_30;
  FUN_109819648(&fStack_40,param_2,&fStack_30);
  FUN_109819af8(param_2);
  param_1[1] = CONCAT44(fStack_34 + 0.0,fStack_38 + (float)uStack_28 * fVar3);
  *param_1 = CONCAT44(fStack_3c + fStack_2c * fVar3,fStack_40 + fStack_30 * fVar3);
  return;
}



/* Entry: 109819af8; end: 109819b6f;  */

ulong FUN_109819af8(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  iVar1 = (int)param_2[1];
  if (iVar1 < 8) {
    if (((iVar1 - 4U < 2) || (iVar1 == 0)) || (iVar1 == 1)) goto LAB_109819b4c;
  }
  else if (iVar1 < 0xb) {
    if (iVar1 == 8) {
      return (ulong)(uint)(*(float *)(param_2 + 6) * *(float *)(param_2 + 4));
    }
    if (iVar1 == 10) {
LAB_109819b4c:
      return (ulong)*(uint *)(param_2 + 8);
    }
  }
  else if ((iVar1 == 0xb) || (iVar1 == 0xd)) goto LAB_109819b4c;
                    /* WARNING: Could not recover jumptable at 0x000109819b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))();
  return CONCAT44(uVar3,uVar2);
}



/* Entry: 109819b70; end: 109819c23;  */

void FUN_109819b70(float param_1,long *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  
  (**(code **)(*param_2 + 0x60))();
  uVar24 = *(undefined8 *)(param_3 + 0xe);
  auVar21._0_8_ = *(ulong *)(param_3 + 8) & 0x7fffffff7fffffff;
  auVar21[8] = *(undefined1 *)(param_3 + 10);
  auVar21[9] = *(undefined1 *)((long)param_3 + 0x29);
  auVar21[10] = *(undefined1 *)((long)param_3 + 0x2a);
  auVar21[0xb] = *(byte *)((long)param_3 + 0x2b) & 0x7f;
  auVar19._0_8_ = *(ulong *)(param_3 + 4) & 0x7fffffff7fffffff;
  auVar19[8] = *(undefined1 *)(param_3 + 6);
  auVar19[9] = *(undefined1 *)((long)param_3 + 0x19);
  auVar19[10] = *(undefined1 *)((long)param_3 + 0x1a);
  auVar19[0xb] = *(byte *)((long)param_3 + 0x1b) & 0x7f;
  fVar6 = *(float *)(param_2 + 6) + param_1;
  fVar7 = *(float *)((long)param_2 + 0x34) + param_1;
  param_1 = *(float *)(param_2 + 7) + param_1;
  fVar8 = *(float *)((long)param_2 + 0x3c) + 0.0;
  fVar3 = fVar6 * ABS(*param_3);
  fVar4 = fVar7 * ABS(param_3[1]);
  uVar9 = (undefined1)((uint)fVar4 >> 8);
  uVar10 = (undefined1)((uint)fVar4 >> 0x10);
  uVar11 = (undefined1)((uint)fVar4 >> 0x18);
  fVar5 = param_1 * ABS(param_3[2]);
  uVar12 = (undefined1)((uint)fVar5 >> 8);
  uVar13 = (undefined1)((uint)fVar5 >> 0x10);
  uVar14 = (undefined1)((uint)fVar5 >> 0x18);
  fVar23 = fVar8 * 0.0;
  uVar15 = (undefined1)((uint)fVar23 >> 8);
  uVar16 = (undefined1)((uint)fVar23 >> 0x10);
  uVar17 = (undefined1)((uint)fVar23 >> 0x18);
  auVar18._0_4_ = fVar6 * ABS(param_3[4]);
  auVar18._4_4_ = fVar7 * (float)(auVar19._0_8_ >> 0x20);
  auVar18._8_4_ = param_1 * auVar19._8_4_;
  auVar18._12_4_ = fVar8 * 0.0;
  fVar6 = fVar6 * ABS(param_3[8]);
  fVar7 = fVar7 * (float)(auVar21._0_8_ >> 0x20);
  param_1 = param_1 * auVar21._8_4_;
  auVar1[4] = SUB41(fVar4,0);
  auVar1._0_4_ = fVar3;
  auVar1[5] = uVar9;
  auVar1[6] = uVar10;
  auVar1[7] = uVar11;
  auVar1[8] = SUB41(fVar5,0);
  auVar1[9] = uVar12;
  auVar1[10] = uVar13;
  auVar1[0xb] = uVar14;
  auVar1[0xc] = SUB41(fVar23,0);
  auVar1[0xd] = uVar15;
  auVar1[0xe] = uVar16;
  auVar1[0xf] = uVar17;
  auVar2[4] = SUB41(fVar4,0);
  auVar2._0_4_ = fVar3;
  auVar2[5] = uVar9;
  auVar2[6] = uVar10;
  auVar2[7] = uVar11;
  auVar2[8] = SUB41(fVar5,0);
  auVar2[9] = uVar12;
  auVar2[10] = uVar13;
  auVar2[0xb] = uVar14;
  auVar2[0xc] = SUB41(fVar23,0);
  auVar2[0xd] = uVar15;
  auVar2[0xe] = uVar16;
  auVar2[0xf] = uVar17;
  auVar20 = NEON_ext(auVar1,auVar2,8,1);
  auVar22 = NEON_ext(auVar18,auVar18,8,1);
  fVar3 = fVar3 + fVar4 + auVar20._0_4_;
  fVar4 = auVar18._0_4_ + auVar18._4_4_ + auVar22._0_4_;
  auVar20._4_4_ = fVar7;
  auVar20._0_4_ = fVar6;
  auVar20._8_4_ = param_1;
  auVar20._12_4_ = 0;
  auVar22._4_4_ = fVar7;
  auVar22._0_4_ = fVar6;
  auVar22._8_4_ = param_1;
  auVar22._12_4_ = 0;
  auVar20 = NEON_ext(auVar20,auVar22,8,1);
  fVar5 = fVar6 + fVar7 + auVar20._0_4_ + auVar20._4_4_;
  fVar23 = (float)*(undefined8 *)(param_3 + 0xc);
  fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
  fVar7 = (float)uVar24;
  param_4[1] = (ulong)(uint)(fVar7 - fVar5);
  *param_4 = CONCAT44(fVar6 - fVar4,fVar23 - fVar3);
  param_5[1] = CONCAT44((float)((ulong)uVar24 >> 0x20) + 0.0,fVar7 + fVar5);
  *param_5 = CONCAT44(fVar6 + fVar4,fVar23 + fVar3);
  return;
}



/* Entry: 109819c24; end: 109819d3b;  */

void FUN_109819c24(float param_1,long *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar7 = param_2[7];
  lVar3 = param_2[6];
  lVar4 = lVar3;
  (**(code **)(*param_2 + 0x60))();
  fVar5 = fVar8;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar6 = fVar5;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar8 = (float)lVar4;
  fVar2 = (float)lVar3 + fVar8;
  fVar5 = (float)((ulong)lVar3 >> 0x20) + fVar5;
  fVar6 = (float)lVar7 + fVar6;
  fVar9 = param_1 / 12.0;
  fVar10 = param_1 * 0.25;
  param_1 = param_1 * 0.5;
  iVar1 = (int)param_2[9];
  fVar11 = fVar2 * fVar2;
  fVar12 = fVar10 * fVar11 + fVar6 * 4.0 * fVar6 * fVar9;
  fVar13 = fVar10 * fVar11 + fVar5 * fVar5 * 4.0 * fVar9;
  fVar9 = fVar10 * fVar5 * fVar5 + fVar2 * 4.0 * fVar2 * fVar9;
  fVar6 = param_1 * fVar11;
  fVar2 = fVar13;
  if (iVar1 == 0) {
    fVar13 = fVar9;
    fVar6 = fVar9;
    fVar2 = param_1 * fVar5 * fVar5;
  }
  fVar5 = fVar12;
  if (iVar1 != 2) {
    fVar12 = fVar6;
    fVar5 = fVar2;
  }
  *param_3 = fVar5;
  param_3[1] = fVar12;
  fVar6 = param_1 * fVar11;
  if (iVar1 != 2) {
    fVar6 = fVar13;
  }
  param_3[2] = fVar6;
  param_3[3] = 0.0;
  return;
}



/* Entry: 109819d3c; end: 109819feb;  */

void FUN_109819d3c(float *param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar5;
  ulong uVar4;
  float fVar6;
  
  fVar2 = *(float *)(param_2 + 0x30);
  fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar3 = (float)*(undefined8 *)(param_3 + 1);
  fVar6 = fVar5 * fVar5 + fVar3 * fVar3;
  if (fVar6 == 0.0) {
    fVar6 = -fVar2;
    if (0.0 <= *param_3) {
      fVar6 = fVar2;
    }
    uVar4 = (ulong)(uint)*(float *)(param_2 + 0x34);
  }
  else {
    fVar1 = *(float *)(param_2 + 0x34) / SQRT(fVar6);
    fVar6 = -fVar2;
    if (0.0 <= *param_3) {
      fVar6 = fVar2;
    }
    uVar4 = CONCAT44(fVar5 * fVar1,fVar3 * fVar1);
  }
  *param_1 = fVar6;
  *(ulong *)(param_1 + 1) = uVar4;
  return;
}



/* Entry: 109819fec; end: 10981a007;  */

void FUN_109819fec(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10981a008; end: 10981a0af;  */

void FUN_10981a008(float param_1,long *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  (**(code **)(*param_2 + 0x60))();
  fVar5 = param_1;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar6 = fVar5;
  (**(code **)(*param_2 + 0x60))(param_2);
  auVar7 = *(undefined1 (*) [16])(param_2 + 4);
  auVar8 = NEON_frecpe(auVar7,4);
  auVar10 = NEON_frecps(auVar7,auVar8,4);
  auVar9._0_4_ = auVar8._0_4_ * auVar10._0_4_;
  auVar9._4_4_ = auVar8._4_4_ * auVar10._4_4_;
  auVar9._8_4_ = auVar8._8_4_ * auVar10._8_4_;
  auVar9._12_4_ = auVar8._12_4_ * auVar10._12_4_;
  auVar7 = NEON_frecps(auVar7,auVar9,4);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  *(float *)(param_2 + 5) = ABS(fVar3);
  *(float *)((long)param_2 + 0x2c) = ABS(fVar4);
  *(float *)(param_2 + 4) = ABS(fVar1);
  *(float *)((long)param_2 + 0x24) = ABS(fVar2);
  param_2[7] = (ulong)(uint)(auVar7._8_4_ * ((float)param_2[7] + fVar6) * auVar9._8_4_ * ABS(fVar3)
                            - fVar6);
  param_2[6] = CONCAT44(auVar7._4_4_ * ((float)((ulong)param_2[6] >> 0x20) + fVar5) * auVar9._4_4_ *
                        ABS(fVar2) - fVar5,
                        auVar7._0_4_ * ((float)param_2[6] + param_1) * auVar9._0_4_ * ABS(fVar1) -
                        param_1);
  return;
}



/* Entry: 10981a0b0; end: 10981a0cf;  */

undefined * FUN_10981a0b0(void)

{
  return &UNK_10f580b53;
}



/* Entry: 10981a0d0; end: 10981a1b3;  */

void FUN_10981a0d0(float param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  long lVar8;
  
  fVar3 = param_1;
  (**(code **)(*param_2 + 0x60))();
  fVar1 = fVar3;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar2 = fVar1;
  (**(code **)(*param_2 + 0x60))(param_2);
  lVar8 = param_2[7];
  lVar7 = param_2[6];
  fVar3 = (float)lVar7 + fVar3;
  *(float *)(param_2 + 8) = param_1;
  fVar4 = fVar3;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar5 = fVar4;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar6 = fVar5;
  (**(code **)(*param_2 + 0x60))(param_2);
  param_2[7] = (ulong)(uint)(((float)lVar8 + fVar2) - fVar6);
  param_2[6] = CONCAT44(((float)((ulong)lVar7 >> 0x20) + fVar1) - fVar5,fVar3 - fVar4);
  return;
}



/* Entry: 10981a1b4; end: 10981a1bb;  */

undefined8 FUN_10981a1b4(void)

{
  return 0x40;
}



/* Entry: 10981a1bc; end: 10981a23b;  */

undefined * FUN_10981a1bc(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_109816008();
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x20 + lVar2) = *(undefined4 *)(param_1 + 0x30 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  do {
    *(undefined4 *)(param_2 + 0x10 + lVar2) = *(undefined4 *)(param_1 + 0x20 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return &UNK_10f580b5d;
}



/* Entry: 10981a23c; end: 10981a31b;  */

void FUN_10981a23c(float *param_1,long *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (**(code **)(*param_2 + 0x88))(&uStack_40);
  *(undefined8 *)(param_1 + 2) = uStack_38;
  *(undefined8 *)param_1 = uStack_40;
  fVar1 = (float)(**(code **)(*param_2 + 0x60))(param_2);
  if (fVar1 != 0.0) {
    fVar1 = *param_3;
    fVar3 = param_3[1];
    fVar4 = param_3[2];
    fVar2 = param_3[3];
    auVar8._0_4_ = fVar1 * fVar1;
    auVar8._4_4_ = fVar3 * fVar3;
    auVar8._8_4_ = fVar4 * fVar4;
    auVar8._12_4_ = fVar2 * fVar2;
    auVar7 = NEON_ext(auVar8,auVar8,8,1);
    uVar5 = -(uint)(auVar8._0_4_ + auVar8._4_4_ + auVar7._0_4_ < 1.4210855e-14);
    fVar1 = (float)((uint)fVar1 ^ ((uint)fVar1 ^ 0xbf800000) & uVar5);
    fVar3 = (float)((uint)fVar3 ^ ((uint)fVar3 ^ 0xbf800000) & uVar5);
    fVar4 = (float)((uint)fVar4 ^ ((uint)fVar4 ^ 0xbf800000) & uVar5);
    fVar2 = (float)((uint)fVar2 ^ (uint)fVar2 & uVar5);
    auVar7._0_4_ = fVar1 * fVar1;
    auVar7._4_4_ = fVar3 * fVar3;
    auVar7._8_4_ = fVar4 * fVar4;
    auVar7._12_4_ = fVar2 * fVar2;
    auVar8 = NEON_ext(auVar7,auVar7,8,1);
    fVar6 = 1.0 / SQRT(auVar7._0_4_ + auVar7._4_4_ + auVar8._0_4_);
    fVar2 = (float)(**(code **)(*param_2 + 0x60))(param_2);
    fStack_50 = (float)uStack_40;
    fStack_4c = (float)((ulong)uStack_40 >> 0x20);
    fStack_48 = (float)uStack_38;
    fStack_44 = (float)((ulong)uStack_38 >> 0x20);
    param_1[2] = fStack_48 + fVar4 * fVar6 * fVar2;
    param_1[3] = fStack_44 + 0.0;
    *param_1 = fStack_50 + fVar1 * fVar6 * fVar2;
    param_1[1] = fStack_4c + fVar3 * fVar6 * fVar2;
  }
  return;
}



/* Entry: 10981a31c; end: 10981a377;  */

float FUN_10981a31c(float param_1,long *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 6);
  (**(code **)(*param_2 + 0x60))();
  (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*param_2 + 0x60))(param_2);
  return fVar1 + param_1;
}



/* Entry: 10981a378; end: 10981a37b;  */

void FUN_10981a378(void)

{
  return;
}



/* Entry: 10981a37c; end: 10981a397;  */

void FUN_10981a37c(long param_1)

{
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 10981a398; end: 10981a3a3;  */

undefined * FUN_10981a398(void)

{
  return &UNK_10f580b71;
}



/* Entry: 10981a3a4; end: 10981a3ff;  */

float FUN_10981a3a4(float param_1,long *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)((long)param_2 + 0x34);
  (**(code **)(*param_2 + 0x60))();
  (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*param_2 + 0x60))(param_2);
  return fVar1 + param_1;
}


