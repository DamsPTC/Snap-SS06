/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082d5218; end: 1082d52ef;  */

void FUN_1082d5218(float *param_1,float *param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  float fVar10;
  undefined1 auStack_180 [48];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined4 uStack_41;
  undefined8 uStack_28;
  
  puVar4 = auStack_180;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = (int)param_2 == 1 && (int)param_3 == 0xf;
  if ((bool)uVar3) {
    if (param_1[0xc] == 0.0) {
      fVar2 = ABS(param_1[3] - *param_1);
      fVar10 = ABS(param_1[7] - param_1[4]);
      uVar6 = SUB41(fVar10,0);
      uVar7 = (undefined1)((uint)fVar10 >> 8);
      uVar8 = (undefined1)((uint)fVar10 >> 0x10);
      uVar9 = (undefined1)((uint)fVar10 >> 0x18);
      if (fVar2 <= fVar10) {
        uVar6 = SUB41(fVar2,0);
        uVar7 = (undefined1)((uint)fVar2 >> 8);
        uVar8 = (undefined1)((uint)fVar2 >> 0x10);
        uVar9 = (undefined1)((uint)fVar2 >> 0x18);
      }
      bVar1 = NAN((float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))));
      uVar3 = !bVar1 && (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) == 1.0;
      puVar4 = (undefined1 *)
               (ulong)(!bVar1 && (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) < 1.0)
      ;
    }
    else {
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_41 = 0;
      uStack_50 = 0;
      param_3 = 0;
      FUN_1082d52f0(auStack_180);
      func_0x0001082d5358();
      param_2 = param_1;
    }
  }
  else {
    puVar4 = (undefined1 *)0x0;
  }
  func_0x0001082d7680(uStack_28);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  *(float *)(puVar4 + 0xe0) = param_2[0xc];
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x30);
  }
  *(undefined4 *)(puVar4 + 0xe4) = uVar5;
  *(undefined2 *)(puVar4 + 0x141) = 0;
  FUN_1082d4908(puVar4);
  FUN_1082d53b4(puVar4 + 0x70,puVar4,puVar4 + 0x10,puVar4 + 0x20,*(undefined4 *)(puVar4 + 0xe0));
  puVar4[0x140] = 1;
  return;
}



/* Entry: 1082d52f0; end: 1082d53b3;  */

void FUN_1082d52f0(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x30);
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x30);
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined2 *)(param_1 + 0x141) = 0;
  FUN_1082d4908(param_1);
  FUN_1082d53b4(param_1 + 0x70,param_1,param_1 + 0x10,param_1 + 0x20,*(undefined4 *)(param_1 + 0xe0)
               );
  *(undefined1 *)(param_1 + 0x140) = 1;
  return;
}



/* Entry: 1082d53b4; end: 1082d5597;  */

void FUN_1082d53b4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,int param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_10 == 3) {
    FUN_1082d40d8(0x3f800000,param_9);
    func_0x0001082d75e8();
    uVar4 = param_5;
    func_0x0001082d40d0(*param_7,param_5);
    func_0x0001082d7784();
    uVar3 = (undefined4)*param_8;
    func_0x0001082d40d0();
    *(undefined4 *)(param_6 + 2) = uVar3;
    *(int *)((long)param_6 + 0x14) = (int)param_5;
    *(undefined4 *)(param_6 + 3) = param_3;
    *(undefined4 *)((long)param_6 + 0x1c) = param_4;
    param_5 = uVar4;
  }
  else {
    uVar4 = *param_7;
    param_6[1] = param_7[1];
    *param_6 = uVar4;
    uVar4 = *param_8;
    param_6[3] = param_8[1];
    param_6[2] = uVar4;
  }
  uVar7 = (undefined4)*param_6;
  uVar3 = uVar7;
  func_0x0001082d7490();
  func_0x0001082d7618();
  func_0x0001082d4098();
  puVar1 = param_6 + 4;
  *(undefined4 *)puVar1 = uVar3;
  *(undefined4 *)((long)param_6 + 0x24) = uVar7;
  *(undefined4 *)(param_6 + 5) = param_3;
  *(undefined4 *)((long)param_6 + 0x2c) = param_4;
  uVar7 = (undefined4)param_6[2];
  uVar3 = uVar7;
  func_0x0001082d7490();
  func_0x0001082d7618();
  func_0x0001082d4098();
  puVar2 = param_6 + 6;
  *(undefined4 *)puVar2 = uVar3;
  *(undefined4 *)((long)param_6 + 0x34) = uVar7;
  *(undefined4 *)(param_6 + 7) = param_3;
  *(undefined4 *)((long)param_6 + 0x3c) = param_4;
  FUN_1082d75fc(*puVar1,*puVar1);
  uVar6 = param_6[7];
  uVar5 = *puVar2;
  uVar4 = uVar5;
  FUN_1082d75fc();
  uVar7 = (undefined4)uVar4;
  func_0x0001082d788c();
  uStack_60 = uVar5;
  uStack_58 = uVar6;
  FUN_1082d5598(&uStack_60);
  uVar3 = (undefined4)uVar5;
  uVar8 = 0x3f800000;
  uStack_50 = uVar3;
  uStack_4c = uVar7;
  uStack_48 = param_3;
  uStack_44 = param_4;
  func_0x0001082d7814();
  *(undefined4 *)(param_6 + 8) = uVar3;
  *(undefined4 *)((long)param_6 + 0x44) = uVar7;
  *(undefined4 *)(param_6 + 9) = param_3;
  *(undefined4 *)((long)param_6 + 0x4c) = param_4;
  FUN_1082d55a8(param_6[8],puVar1);
  FUN_1082d55a8(param_6[8],puVar2);
  if (param_10 < 2) {
    param_6[10] = 0;
    param_6[0xb] = 0;
    *(undefined4 *)(param_6 + 0xc) = 0x3f800000;
    param_3 = 0x3f800000;
    param_4 = 0x3f800000;
  }
  else {
    uVar4 = param_6[4];
    func_0x0001082d74a4();
    func_0x0001082d75e8();
    FUN_1082d75fc(uVar4,param_5);
    uVar5 = param_6[7];
    uVar4 = param_6[6];
    func_0x0001082d74a4();
    func_0x0001082d75e8();
    FUN_1082d75fc(uVar4,param_5);
    uVar8 = (undefined4)param_5;
    func_0x0001082d788c();
    param_6[0xb] = uVar5;
    param_6[10] = uVar4;
    func_0x0001082d40d0();
    func_0x0001082d75e8();
    uVar3 = 0x3f800000;
    func_0x0001082d4090();
    uStack_60 = CONCAT44(uVar8,uVar3);
    uStack_58 = CONCAT44(param_4,param_3);
    FUN_1082d5598(&uStack_60);
    uStack_50 = uVar3;
    uStack_4c = uVar8;
    uStack_48 = param_3;
    uStack_44 = param_4;
    func_0x0001082d7814();
    *(undefined4 *)(param_6 + 0xc) = uVar3;
  }
  *(undefined4 *)((long)param_6 + 100) = uVar8;
  *(undefined4 *)(param_6 + 0xd) = param_3;
  *(undefined4 *)((long)param_6 + 0x6c) = param_4;
  return;
}



/* Entry: 1082d5598; end: 1082d55a7;  */

ulong FUN_1082d5598(uint *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR__sqrtf_11034cb48;
  uVar2 = (ulong)*param_1;
  (*(code *)PTR__sqrtf_11034cb48)(uVar2);
  (*(code *)puVar1)(param_1[1]);
  (*(code *)puVar1)(param_1[2]);
  (*(code *)puVar1)(param_1[3]);
  return uVar2;
}



/* Entry: 1082d55a8; end: 1082d5767;  */

undefined8 * FUN_1082d55a8(undefined8 param_1,undefined8 *param_2)

{
  func_0x0001082d40d0(*param_2,param_1);
  func_0x0001082d7784();
  return param_2;
}



/* Entry: 1082d5768; end: 1082d5787;  */

float FUN_1082d5768(float param_1)

{
  return -param_1;
}



/* Entry: 1082d5788; end: 1082d57af;  */

void FUN_1082d5788(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auVar1 = NEON_fmov(0x3f800000,4);
  uStack_18 = auVar1._8_8_;
  uStack_20 = auVar1._0_8_;
  FUN_1082d5888(&uStack_20,param_1);
  return;
}



/* Entry: 1082d57b0; end: 1082d5887;  */

bool FUN_1082d57b0(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3)

{
  int extraout_w8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar5 [16];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  uVar3 = *param_2;
  uVar1 = FUN_1082d75fc();
  uVar4 = *param_3;
  uVar2 = FUN_1082d75fc();
  fStack_28 = (float)*(undefined8 *)(param_1[2] + 4);
  fStack_30 = fStack_28 + (float)uVar1 + (float)uVar2;
  fStack_24 = (float)((ulong)*(undefined8 *)(param_1[2] + 4) >> 0x20);
  fStack_2c = fStack_24 + (float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar2 >> 0x20);
  fStack_28 = fStack_28 + (float)extraout_var + (float)extraout_var_00;
  fStack_24 = fStack_24 +
              (float)((ulong)extraout_var >> 0x20) + (float)((ulong)extraout_var_00 >> 0x20);
  NEON_ext(*param_1,*param_1,4,1);
  uVar3 = FUN_1082d75fc(uVar3);
  NEON_ext(param_1[1],param_1[1],4,1);
  uVar4 = FUN_1082d75fc(uVar4);
  fStack_50 = (float)uVar3;
  fStack_4c = (float)((ulong)uVar3 >> 0x20);
  fStack_48 = (float)extraout_var_01;
  fStack_44 = (float)((ulong)extraout_var_01 >> 0x20);
  auVar5 = NEON_ext(param_1[2],param_1[2],4,1);
  fStack_40 = auVar5._8_4_ + fStack_50 + (float)uVar4;
  fStack_3c = auVar5._8_4_ + fStack_4c + (float)((ulong)uVar4 >> 0x20);
  fStack_38 = auVar5._12_4_ + fStack_48 + (float)extraout_var_02;
  fStack_34 = auVar5._12_4_ + fStack_44 + (float)((ulong)extraout_var_02 >> 0x20);
  FUN_1082d5888(&fStack_30,&fStack_40);
  FUN_1082d7618();
  NEON_fmov(0x3f800000,4);
  func_0x0001082d786c();
  return extraout_w8 != 0;
}



/* Entry: 1082d5888; end: 1082d58b3;  */

uint FUN_1082d5888(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar2;
  byte bVar3;
  int iVar1;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_1;
  iVar1 = -(uint)((float)*param_2 < (float)uVar5);
  uVar6 = *param_2;
  bVar2 = (byte)((uint)iVar1 >> 8);
  bVar3 = (byte)((uint)iVar1 >> 0x10);
  bVar4 = (byte)((uint)iVar1 >> 0x18);
  return CONCAT13(bVar4 & (byte)((ulong)uVar6 >> 0x18),
                  CONCAT12(bVar3 & (byte)((ulong)uVar6 >> 0x10),
                           CONCAT11(bVar2 & (byte)((ulong)uVar6 >> 8),(byte)iVar1 & (byte)uVar6))) |
         CONCAT13((byte)((ulong)uVar5 >> 0x18) & ~bVar4,
                  CONCAT12((byte)((ulong)uVar5 >> 0x10) & ~bVar3,
                           CONCAT11((byte)((ulong)uVar5 >> 8) & ~bVar2,(byte)uVar5 & ~(byte)iVar1)))
  ;
}



/* Entry: 1082d58b4; end: 1082d5cbf;  */

void FUN_1082d58b4(undefined8 *param_1,long param_2,int param_3,float *param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = *(undefined8 *)param_4;
  param_1[1] = *(undefined8 *)(param_4 + 2);
  *param_1 = uVar3;
  if (param_3 < 2) {
    *(undefined1 *)((long)param_1 + 0x11) = 0;
    if ((*param_4 + param_4[3] <= 0.0) ||
       (*(float *)(param_2 + 0x44) <= 1.0 / (*param_4 + param_4[3]))) {
      if (param_4[1] + param_4[2] <= 0.0) {
        bVar2 = false;
      }
      else {
        bVar2 = 1.0 / (param_4[1] + param_4[2]) < *(float *)(param_2 + 0x40);
      }
    }
    else {
      bVar2 = true;
    }
LAB_1082d5a74:
    *(bool *)(param_1 + 2) = bVar2;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar3 = CONCAT44(-(uint)(100.0 <= (float)((ulong)uVar3 >> 0x20)),-(uint)(100.0 <= (float)uVar3))
    ;
    func_0x0001082d7778(uVar3);
    if (extraout_w8 == 0) {
      func_0x0001082d58a4(param_2 + 0x50);
      func_0x0001082d7618();
      func_0x0001082d7778(CONCAT44(-(uint)(0.9 <= (float)((ulong)uVar3 >> 0x20)),
                                   -(uint)(0.9 <= (float)uVar3)));
      if (extraout_w8_00 == 0) {
        uVar3 = *(undefined8 *)(param_2 + 0x50);
        FUN_1082d5768(uVar3);
        fVar9 = (float)uVar3;
        func_0x0001082d7618();
        fVar8 = (float)*(undefined8 *)(param_2 + 0x60);
        func_0x0001082d40d0();
        func_0x0001082d7628();
        uVar5 = *(undefined8 *)(param_4 + 2);
        uVar3 = *(undefined8 *)param_4;
        FUN_1082d75fc(uVar3,fVar9 + fVar8);
        func_0x0001082d7490();
        func_0x0001082d7618();
        func_0x0001082d7490();
        func_0x0001082d7618();
        func_0x0001082d74a4();
        func_0x0001082d7618();
        FUN_1082d75fc();
        func_0x0001082d788c();
        FUN_1082d40d8(0x3f800000,(undefined8 *)(param_2 + 0x40));
        func_0x0001082d75e8();
        uVar4 = 0x3dcccccd;
        uVar6 = 0;
        func_0x0001082d4090(0x3dcccccd,fVar9);
        func_0x0001082d7618();
        fVar9 = (float)((ulong)uVar3 >> 0x20);
        auVar1._4_4_ = -(uint)(fVar9 < (float)((ulong)uVar4 >> 0x20));
        auVar1._0_4_ = -(uint)((float)uVar3 < (float)uVar4);
        auVar1._8_4_ = -(uint)((float)uVar5 < (float)uVar6);
        auVar1._12_4_ = -(uint)((float)((ulong)uVar5 >> 0x20) < (float)((ulong)uVar6 >> 0x20));
        cVar7 = NEON_umaxv(auVar1,1);
        *(bool *)((long)param_1 + 0x11) = cVar7 != '\0';
        FUN_1082d5768();
        func_0x0001082d7618();
        func_0x0001082d7778(CONCAT44(-(uint)((float)((ulong)uVar4 >> 0x20) < fVar9),
                                     -(uint)((float)uVar4 < (float)uVar3)));
        bVar2 = extraout_w8_01 != 0;
        goto LAB_1082d5a74;
      }
    }
    *(undefined2 *)(param_1 + 2) = 0x101;
  }
  return;
}



/* Entry: 1082d5cc0; end: 1082d5ceb;  */

undefined8 * FUN_1082d5cc0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1082d40c8(*param_2,param_1);
  func_0x0001082d7784();
  return param_2;
}



/* Entry: 1082d5cec; end: 1082d658f;  */

void FUN_1082d5cec(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 (*param_4) [16]
                  )

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 uVar12;
  float *pfVar13;
  float *pfVar14;
  char cVar15;
  char cVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar17;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float extraout_var;
  undefined1 auVar23 [16];
  int iVar25;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  float extraout_var_09;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined1 auVar24 [16];
  undefined8 extraout_var_08;
  char cVar26;
  int iVar27;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  undefined8 extraout_var_10;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 extraout_var_11;
  float fVar30;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  undefined8 extraout_d16;
  undefined8 uStack_1e0;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b0;
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
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auVar31 [16];
  
  fVar33 = (float)*(undefined8 *)(param_1 + 2);
  fStack_124 = (float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  fVar17 = *param_1;
  fVar35 = param_1[1];
  uVar22 = *(undefined8 *)param_1;
  fVar34 = param_1[2];
  fVar30 = fVar33 - fVar17;
  fVar32 = fStack_124 - fVar35;
  auVar31._0_8_ = CONCAT44(fVar32,fVar30);
  auVar31._8_4_ = fVar33 - fVar17;
  auVar31._12_4_ = fStack_124 - fVar35;
  pfVar13 = param_1 + 4;
  uVar21 = *(undefined8 *)pfVar13;
  fStack_e8 = (float)*(undefined8 *)(param_1 + 6);
  fStack_e4 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  fStack_f0 = fStack_e8 - *pfVar13;
  fStack_ec = fStack_e4 - param_1[5];
  fStack_e8 = fStack_e8 - *pfVar13;
  fStack_e4 = fStack_e4 - param_1[5];
  pfVar14 = param_1 + 8;
  fVar33 = *pfVar14;
  fStack_bc = param_1[9];
  uVar11 = *(undefined8 *)pfVar14;
  uVar12 = *(undefined8 *)pfVar14;
  uVar20 = *(undefined8 *)pfVar14;
  uVar19 = *(undefined8 *)pfVar14;
  fVar36 = param_1[10];
  fVar41 = (float)*(undefined8 *)(param_1 + 10);
  fVar42 = (float)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  fVar37 = fVar41 - fVar33;
  fVar39 = fVar42 - fStack_bc;
  uVar18 = 0x38d1b71738d1b717;
  auVar23._0_4_ = -(uint)(fVar30 * fVar30 + fStack_f0 * fStack_f0 < 0.0001);
  auVar23._4_4_ = -(uint)(fVar32 * fVar32 + fStack_ec * fStack_ec < 0.0001);
  auVar23._8_4_ = -(uint)(auVar31._8_4_ * auVar31._8_4_ + fStack_e8 * fStack_e8 < 0.0001);
  auVar23._12_4_ = -(uint)(auVar31._12_4_ * auVar31._12_4_ + fStack_e4 * fStack_e4 < 0.0001);
  cVar15 = NEON_umaxv(auVar23,1);
  uStack_118 = auVar31._8_8_;
  fVar30 = fVar37;
  fVar32 = fVar39;
  uStack_120 = auVar31._0_8_;
  if (cVar15 != '\0') {
    auVar23 = NEON_rev64(auVar31,4);
    auVar23 = NEON_ext(auVar23,auVar23,8,1);
    FUN_1082d5768(auVar23._0_8_);
    func_0x0001082d75e8();
    auVar23 = func_0x0001082d77b0();
    func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,auVar31._0_8_);
    uStack_120 = func_0x0001082d7618();
    auVar5._4_4_ = fStack_ec;
    auVar5._0_4_ = fStack_f0;
    auVar5._8_4_ = fStack_e8;
    auVar5._12_4_ = fStack_e4;
    auVar23 = NEON_rev64(auVar5,4);
    auVar23 = NEON_ext(auVar23,auVar23,8,1);
    FUN_1082d5768(auVar23._0_8_);
    func_0x0001082d75e8();
    auVar23 = func_0x0001082d77b0();
    func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,CONCAT44(fStack_ec,fStack_f0));
    uVar18 = func_0x0001082d7618();
    fStack_e8 = (float)extraout_var_01;
    fStack_e4 = (float)((ulong)extraout_var_01 >> 0x20);
    fStack_f0 = (float)uVar18;
    fStack_ec = (float)((ulong)uVar18 >> 0x20);
    auVar7._4_4_ = fVar39;
    auVar7._0_4_ = fVar37;
    auVar7._8_4_ = fVar41 - fVar33;
    auVar7._12_4_ = fVar42 - fStack_bc;
    auVar23 = NEON_rev64(auVar7,4);
    auVar23 = NEON_ext(auVar23,auVar23,8,1);
    FUN_1082d5768(auVar23._0_8_);
    func_0x0001082d75e8();
    auVar23 = func_0x0001082d77b0();
    func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,CONCAT44(fVar39,fVar37));
    uVar18 = 0x38d1b71738d1b717;
    func_0x0001082d75e8();
    uStack_118 = extraout_var_00;
  }
  fVar33 = fVar35 - fVar17;
  fVar35 = fVar35 - fVar17;
  fStack_128 = fStack_124 - fVar34;
  fStack_124 = fStack_124 - fVar34;
  auVar23 = func_0x0001082d7878();
  fStack_100 = auVar23._8_4_ - auVar23._0_4_;
  fStack_fc = auVar23._12_4_ - auVar23._4_4_;
  fStack_f8 = (float)extraout_var_10 - (float)extraout_var_02;
  fStack_f4 = (float)((ulong)extraout_var_10 >> 0x20) - (float)((ulong)extraout_var_02 >> 0x20);
  fStack_c0 = fStack_bc - (float)uVar20;
  fStack_bc = fStack_bc - (float)uVar19;
  auVar28._0_4_ = -(uint)(fStack_100 * fStack_100 + fVar33 * fVar33 < (float)extraout_d16);
  auVar28._4_4_ =
       -(uint)(fStack_fc * fStack_fc + fVar35 * fVar35 < (float)((ulong)extraout_d16 >> 0x20));
  auVar28._8_4_ = -(uint)(fStack_f8 * fStack_f8 + fStack_128 * fStack_128 < (float)uVar18);
  auVar28._12_4_ =
       -(uint)(fStack_f4 * fStack_f4 + fStack_124 * fStack_124 < (float)((ulong)uVar18 >> 0x20));
  cVar16 = NEON_umaxv(auVar28,1);
  uStack_130 = CONCAT44(fVar35,fVar33);
  fVar17 = fVar30;
  fVar34 = fVar32;
  if (cVar16 != '\0') {
    auVar1._4_4_ = fVar35;
    auVar1._0_4_ = fVar33;
    auVar1._8_4_ = fStack_128;
    auVar1._12_4_ = fStack_124;
    auVar23 = NEON_rev64(auVar1,4);
    auVar23 = NEON_ext(auVar23,auVar23,8,1);
    FUN_1082d5768(auVar23._0_8_);
    func_0x0001082d75e8();
    auVar23 = func_0x0001082d7798();
    func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,uStack_130);
    uStack_130 = func_0x0001082d7618();
    auVar3._4_4_ = fStack_fc;
    auVar3._0_4_ = fStack_100;
    auVar3._8_4_ = fStack_f8;
    auVar3._12_4_ = fStack_f4;
    auVar23 = NEON_rev64(auVar3,4);
    auVar23 = NEON_ext(auVar23,auVar23,8,1);
    FUN_1082d5768(auVar23._0_8_);
    func_0x0001082d75e8();
    auVar23 = func_0x0001082d7798();
    func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,CONCAT44(fStack_fc,fStack_100));
    uVar19 = func_0x0001082d7618();
    fStack_f8 = (float)extraout_var_03;
    fStack_f4 = (float)((ulong)extraout_var_03 >> 0x20);
    fStack_100 = (float)uVar19;
    fStack_fc = (float)((ulong)uVar19 >> 0x20);
    auVar9._4_4_ = fStack_bc;
    auVar9._0_4_ = fStack_c0;
    auVar9._8_4_ = fVar42 - fVar36;
    auVar9._12_4_ = fVar42 - fVar36;
    auVar23 = NEON_rev64(auVar9,4);
    auVar23 = NEON_ext(auVar23,auVar23,8,1);
    FUN_1082d5768(auVar23._0_8_);
    func_0x0001082d75e8();
    auVar23 = func_0x0001082d7798();
    func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,CONCAT44(fStack_bc,fStack_c0));
    uVar19 = func_0x0001082d7618();
    fStack_c0 = (float)uVar19;
    fStack_bc = (float)((ulong)uVar19 >> 0x20);
    fStack_128 = extraout_var;
    fStack_124 = extraout_var_09;
  }
  uVar19 = *param_2;
  uVar20 = FUN_1082d75fc(CONCAT44(fVar34,fVar17));
  uStack_120._0_4_ = (float)uVar20 - (float)uStack_120;
  uStack_120._4_4_ = (float)((ulong)uVar20 >> 0x20) - uStack_120._4_4_;
  uStack_118._0_4_ = (float)extraout_var_04 - (float)uStack_118;
  uStack_118._4_4_ = (float)((ulong)extraout_var_04 >> 0x20) - uStack_118._4_4_;
  uVar20 = *param_3;
  fStack_70 = (float)uStack_120;
  fStack_6c = uStack_120._4_4_;
  fStack_68 = (float)uStack_118;
  fStack_64 = uStack_118._4_4_;
  uVar18 = FUN_1082d75fc(CONCAT44(fVar32,fVar30));
  fStack_f0 = (float)uVar18 - fStack_f0;
  fStack_ec = (float)((ulong)uVar18 >> 0x20) - fStack_ec;
  fStack_e8 = (float)extraout_var_05 - fStack_e8;
  fStack_e4 = (float)((ulong)extraout_var_05 >> 0x20) - fStack_e4;
  fStack_80 = fStack_f0;
  fStack_7c = fStack_ec;
  fStack_78 = fStack_e8;
  fStack_74 = fStack_e4;
  uVar18 = FUN_1082d75fc(CONCAT44(fStack_bc,fStack_c0),uVar19);
  uStack_130._0_4_ = (float)uVar18 - (float)uStack_130;
  uStack_130._4_4_ = (float)((ulong)uVar18 >> 0x20) - uStack_130._4_4_;
  fStack_128 = (float)extraout_var_06 - fStack_128;
  fStack_124 = (float)((ulong)extraout_var_06 >> 0x20) - fStack_124;
  uStack_190 = CONCAT44(uStack_130._4_4_,(float)uStack_130);
  fStack_90 = (float)uStack_130;
  fStack_8c = uStack_130._4_4_;
  fStack_88 = fStack_128;
  fStack_84 = fStack_124;
  uVar18 = FUN_1082d75fc(CONCAT44(fStack_bc,fStack_c0),uVar20);
  fStack_100 = (float)uVar18 - fStack_100;
  fStack_fc = (float)((ulong)uVar18 >> 0x20) - fStack_fc;
  fStack_f8 = (float)extraout_var_07 - fStack_f8;
  fStack_f4 = (float)((ulong)extraout_var_07 >> 0x20) - fStack_f4;
  uStack_1a0 = CONCAT44(fStack_fc,fStack_100);
  fStack_a0 = fStack_100;
  fStack_9c = fStack_fc;
  fStack_98 = fStack_f8;
  fStack_94 = fStack_f4;
  uVar19 = FUN_1082d75fc(uVar12,uVar19);
  func_0x0001082d4098(uVar19,uVar22);
  uVar19 = func_0x0001082d7618();
  fStack_160 = (float)uVar19;
  fStack_15c = (float)((ulong)uVar19 >> 0x20);
  uVar19 = FUN_1082d75fc(uVar11,uVar20);
  func_0x0001082d4098(uVar19,uVar21);
  uVar21 = func_0x0001082d7618();
  uStack_b0 = 0;
  uStack_a8 = 0;
  auVar23 = *param_4;
  iVar27 = NEON_uminv(auVar23,4);
  fVar17 = (float)uVar21;
  fVar35 = (float)((ulong)uVar21 >> 0x20);
  if (iVar27 == 0) {
    uVar19 = CONCAT44(auVar23._0_4_,auVar23._0_4_);
    uVar12 = CONCAT44(auVar23._4_4_,auVar23._8_4_);
    func_0x0001082d58a4(&fStack_70);
    uVar20 = func_0x0001082d7618();
    func_0x0001082d58a4(&fStack_80);
    uVar22 = func_0x0001082d7618();
    iVar27 = -(uint)((float)uVar22 < (float)uVar20);
    iVar25 = -(uint)((float)((ulong)uVar22 >> 0x20) < (float)((ulong)uVar20 >> 0x20));
    func_0x0001082d58a4(&fStack_90);
    uVar20 = func_0x0001082d7618();
    func_0x0001082d58a4(&fStack_a0);
    uVar22 = func_0x0001082d7618();
    fStack_1d0 = (float)uVar20;
    fStack_1cc = (float)((ulong)uVar20 >> 0x20);
    iVar38 = -(uint)((float)uVar22 < fStack_1d0);
    iVar40 = -(uint)((float)((ulong)uVar22 >> 0x20) < fStack_1cc);
    fVar34 = (float)uStack_130 * fStack_f0;
    uStack_1e0 = CONCAT44(uStack_120._4_4_ * fStack_fc - uStack_130._4_4_ * fStack_ec,
                          (float)uStack_120 * fStack_100 - fVar34);
    uVar20 = CONCAT44(iVar40,iVar38);
    FUN_1082d75ac(CONCAT44(iVar25,iVar27));
    func_0x0001082d76a0(uVar12,uStack_1e0);
    uVar22 = func_0x0001082d7618();
    FUN_1082d75ac(uVar20,uStack_190,uStack_1a0);
    auVar23 = NEON_fmov(0x3f800000,4);
    FUN_1082d75ac(uVar12,CONCAT44(iVar40,iVar38),auVar23._0_8_);
    func_0x0001082d76a0(uVar19,uVar22);
    uStack_1e0 = CONCAT44(fVar35 * uStack_130._4_4_ - fStack_15c * fStack_fc,
                          fVar17 * (float)uStack_130 - fStack_160 * fStack_100);
    uStack_b0._0_4_ = extraout_s0;
    uStack_b0._4_4_ = extraout_s1;
    uStack_a8._0_4_ = extraout_s2;
    uStack_a8._4_4_ = fVar34;
    FUN_1082d5768();
    uVar22 = func_0x0001082d7618();
    FUN_1082d5768(uVar21);
    func_0x0001082d75e8();
    uVar21 = CONCAT44(iVar40,iVar38);
    FUN_1082d75ac(CONCAT44(iVar25,iVar27),uVar22,CONCAT44(iVar40,iVar38));
    FUN_1082d75ac(uVar12,uStack_1e0,CONCAT44(iVar40,iVar38));
    func_0x0001082d771c(uVar19);
    fVar34 = (float)func_0x0001082d7618();
    fVar34 = fVar34 / (float)uStack_b0;
    FUN_1082d75ac(uVar20,uVar22,uVar21);
    FUN_1082d75ac(uVar19,CONCAT44(fStack_15c * fStack_ec - fVar35 * uStack_120._4_4_,
                                  fStack_160 * fStack_f0 - fVar17 * (float)uStack_120),
                  CONCAT44(iVar40,iVar38));
    func_0x0001082d771c(uVar12);
    func_0x0001082d7618();
  }
  else {
    uStack_b0._0_4_ = (float)uStack_120 * fStack_100 - (float)uStack_130 * fStack_f0;
    uStack_b0._4_4_ = uStack_120._4_4_ * fStack_fc - uStack_130._4_4_ * fStack_ec;
    uStack_a8._0_4_ = (float)uStack_118 * fStack_f8 - fStack_128 * fStack_e8;
    uStack_a8._4_4_ = uStack_118._4_4_ * fStack_f4 - fStack_124 * fStack_e4;
    fVar34 = (fVar17 * (float)uStack_130 - fStack_160 * fStack_100) / (float)uStack_b0;
  }
  FUN_1082d5cc0(param_1);
  func_0x0001082d7758();
  func_0x0001082d774c();
  auVar24._0_4_ = -(uint)(param_1[8] < 0.0);
  auVar24._4_4_ = -(uint)(param_1[9] < 0.0);
  auVar24._8_4_ = -(uint)(param_1[10] < 0.0);
  auVar24._12_4_ = -(uint)(param_1[0xb] < 0.0);
  cVar26 = NEON_umaxv(auVar24,1);
  if (cVar26 != '\0') {
    NEON_fmov(0xbf800000,4);
    NEON_fmov(0x3f800000,4);
    func_0x0001082d4088();
    uVar21 = func_0x0001082d7618();
    FUN_1082d55a8(param_1);
    FUN_1082d55a8(uVar21,pfVar13);
    FUN_1082d55a8(uVar21,pfVar14);
  }
  func_0x0001082d58a4(&uStack_b0);
  func_0x0001082d7618();
  func_0x0001082d76c4();
  if (extraout_w8 != 0) {
    func_0x0001082d7490();
    func_0x0001082d75cc();
    func_0x0001082d7784();
    func_0x0001082d7490();
    func_0x0001082d75cc();
    param_1[4] = extraout_s0_00;
    param_1[5] = extraout_s1_00;
    param_1[6] = extraout_s2_00;
    param_1[7] = fVar34;
    func_0x0001082d7490();
    func_0x0001082d75cc();
    param_1[8] = extraout_s0_01;
    param_1[9] = extraout_s1_01;
    param_1[10] = extraout_s2_01;
    param_1[0xb] = fVar34;
  }
  if (0 < (int)param_1[0x18]) {
    fVar36 = (float)*(undefined8 *)(param_1 + 0x16);
    fVar33 = (float)*(undefined8 *)(param_1 + 0x14);
    fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
    fVar30 = (float)*(undefined8 *)(param_1 + 0xe);
    fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
    fVar17 = SUB164(*(undefined1 (*) [16])(param_1 + 0xc),0);
    fVar35 = SUB164(*(undefined1 (*) [16])(param_1 + 0xc),4);
    auVar29._0_8_ = CONCAT44(fVar32 - fVar35,fVar30 - fVar17);
    auVar29._8_4_ = fVar30 - fVar17;
    auVar29._12_4_ = fVar32 - fVar35;
    uVar19 = *(undefined8 *)(param_1 + 0x12);
    uVar21 = *(undefined8 *)(param_1 + 0x10);
    fVar35 = (float)uVar21;
    fVar30 = (float)((ulong)uVar21 >> 0x20);
    fVar39 = (float)*(undefined8 *)(param_1 + 0x12);
    fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20);
    fVar42 = fVar39 - fVar35;
    fVar32 = (float)*(undefined8 *)(param_1 + 0x16);
    fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x16) >> 0x20);
    fVar17 = fVar32 - fVar33;
    if (cVar15 != '\0') {
      auVar23 = NEON_rev64(auVar29,4);
      auVar23 = NEON_ext(auVar23,auVar23,8,1);
      FUN_1082d5768(auVar23._0_8_);
      func_0x0001082d75e8();
      auVar23 = func_0x0001082d77b0();
      func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,auVar29._0_8_);
      func_0x0001082d7618();
      auVar10._4_4_ = fVar41 - fVar30;
      auVar10._0_4_ = fVar42;
      auVar10._8_4_ = fVar39 - fVar35;
      auVar10._12_4_ = fVar41 - fVar30;
      auVar23 = NEON_rev64(auVar10,4);
      auVar23 = NEON_ext(auVar23,auVar23,8,1);
      FUN_1082d5768(auVar23._0_8_);
      func_0x0001082d75e8();
      auVar23 = func_0x0001082d77b0();
      func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,CONCAT44(fVar41 - fVar30,fVar42));
      func_0x0001082d7618();
      auVar6._4_4_ = fVar37 - fVar34;
      auVar6._0_4_ = fVar17;
      auVar6._8_4_ = fVar32 - fVar33;
      auVar6._12_4_ = fVar37 - fVar34;
      auVar23 = NEON_rev64(auVar6,4);
      auVar23 = NEON_ext(auVar23,auVar23,8,1);
      FUN_1082d5768(auVar23._0_8_);
      func_0x0001082d75e8();
      auVar23 = func_0x0001082d77b0();
      func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,CONCAT44(fVar37 - fVar34,fVar17));
    }
    fVar32 = (float)uVar19;
    auVar23 = func_0x0001082d7878();
    fVar39 = auVar23._8_4_ - auVar23._0_4_;
    fVar42 = auVar23._12_4_ - auVar23._4_4_;
    fVar17 = fVar34 - fVar33;
    fVar34 = fVar34 - fVar33;
    if (cVar16 != '\0') {
      auVar2._4_4_ = fVar42;
      auVar2._0_4_ = fVar39;
      auVar2._8_4_ = (float)extraout_var_11 - (float)extraout_var_08;
      auVar2._12_4_ =
           (float)((ulong)extraout_var_11 >> 0x20) - (float)((ulong)extraout_var_08 >> 0x20);
      auVar23 = NEON_rev64(auVar2,4);
      auVar23 = NEON_ext(auVar23,auVar23,8,1);
      FUN_1082d5768(auVar23._0_8_);
      func_0x0001082d75e8();
      auVar23 = func_0x0001082d7798();
      func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,CONCAT44(fVar42,fVar39));
      func_0x0001082d7618();
      auVar8._4_4_ = fVar30 - fVar35;
      auVar8._0_4_ = fVar30 - fVar35;
      auVar8._8_4_ = fVar41 - fVar32;
      auVar8._12_4_ = fVar41 - fVar32;
      auVar23 = NEON_rev64(auVar8,4);
      auVar23 = NEON_ext(auVar23,auVar23,8,1);
      FUN_1082d5768(auVar23._0_8_);
      func_0x0001082d75e8();
      auVar23 = func_0x0001082d7798();
      func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,CONCAT44(fVar30 - fVar35,fVar30 - fVar35));
      func_0x0001082d7618();
      auVar4._4_4_ = fVar34;
      auVar4._0_4_ = fVar17;
      auVar4._8_4_ = fVar37 - fVar36;
      auVar4._12_4_ = fVar37 - fVar36;
      auVar23 = NEON_rev64(auVar4,4);
      auVar23 = NEON_ext(auVar23,auVar23,8,1);
      FUN_1082d5768(auVar23._0_8_);
      func_0x0001082d75e8();
      auVar23 = func_0x0001082d7798();
      func_0x0001082d4088(auVar23._0_8_,auVar23._8_8_,CONCAT44(fVar34,fVar17));
      func_0x0001082d7618();
    }
    func_0x0001082d774c();
    FUN_1082d5cc0(param_1 + 0x10);
    if (param_1[0x18] == 4.2039e-45) {
      func_0x0001082d7758();
      func_0x0001082d58a4(&uStack_b0);
      func_0x0001082d7618();
      func_0x0001082d76c4();
      if (extraout_w8_00 != 0) {
        func_0x0001082d7490();
        func_0x0001082d75cc();
        param_1[0xc] = extraout_s0_02;
        param_1[0xd] = extraout_s1_02;
        param_1[0xe] = extraout_s2_02;
        param_1[0xf] = fVar33;
        func_0x0001082d7490();
        func_0x0001082d75cc();
        param_1[0x10] = extraout_s0_03;
        param_1[0x11] = extraout_s1_03;
        param_1[0x12] = extraout_s2_03;
        param_1[0x13] = fVar33;
        func_0x0001082d7490();
        func_0x0001082d75cc();
        param_1[0x14] = extraout_s0_04;
        param_1[0x15] = extraout_s1_04;
        param_1[0x16] = extraout_s2_04;
        param_1[0x17] = fVar33;
      }
    }
    else {
      func_0x0001082d58a4(&uStack_b0);
      func_0x0001082d7618();
      func_0x0001082d76c4();
      if (extraout_w8_01 != 0) {
        func_0x0001082d7490();
        func_0x0001082d75cc();
        param_1[0xc] = extraout_s0_05;
        param_1[0xd] = extraout_s1_05;
        param_1[0xe] = extraout_s2_05;
        param_1[0xf] = fVar33;
        func_0x0001082d7490();
        func_0x0001082d75cc();
        param_1[0x10] = extraout_s0_06;
        param_1[0x11] = extraout_s1_06;
        param_1[0x12] = extraout_s2_06;
        param_1[0x13] = fVar33;
      }
    }
  }
  return;
}



/* Entry: 1082d6590; end: 1082d67a7;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001082d6640 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 * FUN_1082d6590(undefined4 *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int extraout_w8;
  undefined8 extraout_x8;
  uint uVar15;
  undefined1 in_b0;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 in_register_00005001;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 in_register_00005002;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 in_register_00005003;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 in_register_00005004;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 in_register_00005005;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 in_register_00005006;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 in_register_00005007;
  undefined1 uVar69;
  undefined1 uVar70;
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
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar95;
  undefined1 auVar96 [16];
  undefined4 uVar97;
  undefined8 uVar98;
  undefined4 in_s3;
  float fStack_12c;
  float fStack_124;
  undefined8 uStack_100;
  float fStack_ec;
  float fStack_e4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_48;
  
  func_0x0001082d77cc();
  uStack_48 = extraout_x8;
  _memcpy(&fStack_c0,param_1,0x70);
  puVar13 = param_1;
  FUN_1082d67a8();
  uVar12 = *(char *)(puVar13 + 4) == '\x01';
  if ((bool)uVar12) {
    FUN_1082d5768();
    func_0x0001082d77e8();
    FUN_1082d6804();
    puVar14 = puVar13;
    func_0x0001082d7764();
    uVar15 = (uint)puVar13;
    uVar12 = uVar15 == 3;
    puVar13 = puVar14;
    if (2 < uVar15) goto LAB_1082d6770;
    FUN_1082d71d8();
    fVar1 = (float)((ulong)uStack_a0 >> 0x20);
    fVar6 = (float)((ulong)uStack_b0 >> 0x20) / fVar1;
    uStack_100 = CONCAT44(fStack_bc / fVar1,fStack_c0 / (float)uStack_a0);
    uVar95 = CONCAT17((char)((uint)fVar6 >> 0x18),
                      CONCAT16((char)((uint)fVar6 >> 0x10),
                               CONCAT15((char)((uint)fVar6 >> 8),
                                        CONCAT14(SUB41(fVar6,0),(float)uStack_b0 / (float)uStack_a0)
                                       )));
    uVar97 = *param_1;
    uVar16 = (undefined1)uVar97;
    uVar23 = (undefined1)((uint)uVar97 >> 8);
    uVar30 = (undefined1)((uint)uVar97 >> 0x10);
    uVar37 = (undefined1)((uint)uVar97 >> 0x18);
    uVar44 = 0;
    uVar52 = 0;
    uVar61 = 0;
    uVar69 = 0;
    uVar77 = 0;
    uVar51 = 0;
    uVar79 = 0;
    uVar60 = 0;
    uVar83 = 0;
    uVar85 = 0;
    uVar87 = 0;
    uVar90 = 0;
    FUN_1082d4a58();
    func_0x0001082d7618();
    fVar6 = (float)CONCAT13(uVar60,CONCAT12(uVar79,CONCAT11(uVar51,uVar77)));
    fVar1 = (float)CONCAT13(uVar37,CONCAT12(uVar30,CONCAT11(uVar23,uVar16)));
    uVar97 = param_1[4];
    uVar82 = 0;
    uVar78 = 0;
    uVar80 = 0;
    uVar81 = 0;
    uVar84 = 0;
    uVar86 = 0;
    uVar88 = 0;
    uVar91 = 0;
    uVar16 = (char)uVar97;
    uVar23 = (char)((uint)uVar97 >> 8);
    uVar30 = (char)((uint)uVar97 >> 0x10);
    uVar37 = (char)((uint)uVar97 >> 0x18);
    uVar77 = 0;
    uVar51 = 0;
    uVar79 = 0;
    uVar60 = 0;
    FUN_1082d4a58(CONCAT17(uVar70,CONCAT16(uVar62,CONCAT15(uVar53,CONCAT14(uVar45,CONCAT13(uVar38,
                                                  CONCAT12(uVar31,CONCAT11(uVar24,uVar17))))))),
                  uVar95);
    uVar70 = uVar60;
    uVar62 = uVar79;
    uVar53 = uVar51;
    uVar45 = uVar77;
    uVar38 = uVar37;
    uVar31 = uVar30;
    uVar24 = uVar23;
    uVar17 = uVar16;
    uVar16 = uVar17;
    uVar23 = uVar24;
    uVar30 = uVar31;
    uVar37 = uVar38;
    uVar77 = uVar45;
    uVar51 = uVar53;
    uVar79 = uVar62;
    uVar60 = uVar70;
    func_0x0001082d7618();
    func_0x0001082d5770();
    func_0x0001082d7618();
    fVar4 = fVar1 + (float)CONCAT13(uVar37,CONCAT12(uVar30,CONCAT11(uVar23,uVar16)));
    fVar7 = (float)(CONCAT17(uVar69,CONCAT16(uVar61,CONCAT15(uVar52,CONCAT14(uVar44,fVar1)))) >>
                   0x20) + (float)CONCAT13(uVar60,CONCAT12(uVar79,CONCAT11(uVar51,uVar77)));
    uVar54 = (undefined1)((uint)fVar7 >> 8);
    uVar63 = (undefined1)((uint)fVar7 >> 0x10);
    uVar71 = (undefined1)((uint)fVar7 >> 0x18);
    fVar8 = fVar6 + (float)CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar78,uVar82)));
    fVar11 = (float)(CONCAT17(uVar90,CONCAT16(uVar87,CONCAT15(uVar85,CONCAT14(uVar83,fVar6)))) >>
                    0x20) + (float)CONCAT13(uVar91,CONCAT12(uVar88,CONCAT11(uVar86,uVar84)));
    FUN_1082d4a58(CONCAT17(uVar71,CONCAT16(uVar63,CONCAT15(uVar54,CONCAT14(SUB41(fVar7,0),
                                                                           CONCAT13(uVar37,CONCAT12(
                                                  uVar30,CONCAT11(uVar23,uVar16))))))),uStack_100);
    func_0x0001082d7618();
    uVar97 = param_1[5];
    uVar52 = 0;
    uVar69 = 0;
    uVar82 = 0;
    uVar78 = 0;
    uVar83 = 0;
    uVar86 = 0;
    uVar90 = 0;
    uVar92 = 0;
    uVar16 = (char)uVar97;
    uVar23 = (char)((uint)uVar97 >> 8);
    uVar30 = (char)((uint)uVar97 >> 0x10);
    uVar37 = (char)((uint)uVar97 >> 0x18);
    uVar77 = 0;
    uVar51 = 0;
    uVar79 = 0;
    uVar60 = 0;
    FUN_1082d4a58(CONCAT17(uVar72,CONCAT16(uVar64,CONCAT15(uVar55,CONCAT14(uVar46,CONCAT13(uVar39,
                                                  CONCAT12(uVar32,CONCAT11(uVar25,uVar18))))))),
                  uVar95);
    uVar72 = uVar60;
    uVar64 = uVar79;
    uVar55 = uVar51;
    uVar46 = uVar77;
    uVar39 = uVar37;
    uVar32 = uVar30;
    uVar25 = uVar23;
    uVar18 = uVar16;
    uVar16 = uVar18;
    uVar23 = uVar25;
    uVar30 = uVar32;
    uVar37 = uVar39;
    uVar77 = uVar46;
    uVar79 = uVar55;
    uVar44 = uVar64;
    uVar61 = uVar72;
    func_0x0001082d7618();
    func_0x0001082d5770();
    func_0x0001082d7618();
    func_0x0001082d788c();
    fVar3 = (float)CONCAT13(uVar78,CONCAT12(uVar82,CONCAT11(uVar69,uVar52)));
    fVar1 = (float)CONCAT13(uVar37,CONCAT12(uVar30,CONCAT11(uVar23,uVar16)));
    uVar97 = param_1[2];
    uVar82 = 0;
    uVar78 = 0;
    uVar80 = 0;
    uVar81 = 0;
    uVar84 = 0;
    uVar85 = 0;
    uVar87 = 0;
    uVar88 = 0;
    uVar16 = (char)uVar97;
    uVar23 = (char)((uint)uVar97 >> 8);
    uVar30 = (char)((uint)uVar97 >> 0x10);
    uVar37 = (char)((uint)uVar97 >> 0x18);
    uVar51 = 0;
    uVar60 = 0;
    uVar52 = 0;
    uVar69 = 0;
    FUN_1082d4a58(CONCAT17(uVar73,CONCAT16(uVar65,CONCAT15(uVar56,CONCAT14(uVar47,CONCAT13(uVar40,
                                                  CONCAT12(uVar33,CONCAT11(uVar26,uVar19))))))),
                  uStack_100);
    uVar73 = uVar69;
    uVar65 = uVar52;
    uVar56 = uVar60;
    uVar47 = uVar51;
    uVar40 = uVar37;
    uVar33 = uVar30;
    uVar26 = uVar23;
    uVar19 = uVar16;
    uVar16 = uVar19;
    uVar23 = uVar26;
    uVar30 = uVar33;
    uVar37 = uVar40;
    uVar51 = uVar47;
    uVar60 = uVar56;
    uVar52 = uVar65;
    uVar69 = uVar73;
    func_0x0001082d7618();
    fVar9 = (float)CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar78,uVar82)));
    fStack_124 = (float)(CONCAT17(uVar88,CONCAT16(uVar87,CONCAT15(uVar85,CONCAT14(uVar84,fVar9))))
                        >> 0x20);
    fVar6 = (float)CONCAT13(uVar37,CONCAT12(uVar30,CONCAT11(uVar23,uVar16)));
    fStack_12c = (float)(CONCAT17(uVar69,CONCAT16(uVar52,CONCAT15(uVar60,CONCAT14(uVar51,fVar6))))
                        >> 0x20);
    uVar97 = param_1[6];
    uVar82 = 0;
    uVar78 = 0;
    uVar80 = 0;
    uVar81 = 0;
    uVar84 = 0;
    uVar85 = 0;
    uVar87 = 0;
    uVar88 = 0;
    uVar16 = (char)uVar97;
    uVar23 = (char)((uint)uVar97 >> 8);
    uVar30 = (char)((uint)uVar97 >> 0x10);
    uVar37 = (char)((uint)uVar97 >> 0x18);
    uVar51 = 0;
    uVar60 = 0;
    uVar52 = 0;
    uVar69 = 0;
    FUN_1082d4a58(CONCAT17(uVar74,CONCAT16(uVar66,CONCAT15(uVar57,CONCAT14(uVar48,CONCAT13(uVar41,
                                                  CONCAT12(uVar34,CONCAT11(uVar27,uVar20))))))),
                  uVar95);
    uVar74 = uVar69;
    uVar66 = uVar52;
    uVar57 = uVar60;
    uVar48 = uVar51;
    uVar41 = uVar37;
    uVar34 = uVar30;
    uVar27 = uVar23;
    uVar20 = uVar16;
    uVar16 = uVar20;
    uVar23 = uVar27;
    uVar30 = uVar34;
    uVar37 = uVar41;
    uVar51 = uVar48;
    uVar60 = uVar57;
    uVar52 = uVar66;
    uVar69 = uVar74;
    func_0x0001082d7618();
    func_0x0001082d5770();
    func_0x0001082d7618();
    fVar6 = fVar6 + (float)CONCAT13(uVar37,CONCAT12(uVar30,CONCAT11(uVar23,uVar16)));
    fStack_12c = fStack_12c + (float)CONCAT13(uVar69,CONCAT12(uVar52,CONCAT11(uVar60,uVar51)));
    fVar9 = fVar9 + (float)CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar78,uVar82)));
    fStack_124 = fStack_124 + (float)CONCAT13(uVar88,CONCAT12(uVar87,CONCAT11(uVar85,uVar84)));
    fStack_124 = (float)(CONCAT17((char)((uint)fStack_124 >> 0x18),
                                  CONCAT16((char)((uint)fStack_124 >> 0x10),
                                           CONCAT15((char)((uint)fStack_124 >> 8),
                                                    CONCAT14(SUB41(fStack_124,0),fVar9)))) >> 0x20);
    fStack_12c = (float)(CONCAT17((char)((uint)fStack_12c >> 0x18),
                                  CONCAT16((char)((uint)fStack_12c >> 0x10),
                                           CONCAT15((char)((uint)fStack_12c >> 8),
                                                    CONCAT14(SUB41(fStack_12c,0),fVar6)))) >> 0x20);
    uVar97 = param_1[3];
    uVar82 = 0;
    uVar78 = 0;
    uVar80 = 0;
    uVar81 = 0;
    uVar84 = 0;
    uVar87 = 0;
    uVar91 = 0;
    uVar93 = 0;
    uVar16 = (char)uVar97;
    uVar23 = (char)((uint)uVar97 >> 8);
    uVar30 = (char)((uint)uVar97 >> 0x10);
    uVar37 = (char)((uint)uVar97 >> 0x18);
    uVar51 = 0;
    uVar60 = 0;
    uVar52 = 0;
    uVar69 = 0;
    FUN_1082d4a58(CONCAT17(uVar75,CONCAT16(uVar67,CONCAT15(uVar58,CONCAT14(uVar49,CONCAT13(uVar42,
                                                  CONCAT12(uVar35,CONCAT11(uVar28,uVar21))))))),
                  uStack_100);
    uVar75 = uVar69;
    uVar67 = uVar52;
    uVar58 = uVar60;
    uVar49 = uVar51;
    uVar42 = uVar37;
    uVar35 = uVar30;
    uVar28 = uVar23;
    uVar21 = uVar16;
    uVar16 = uVar21;
    uVar23 = uVar28;
    uVar30 = uVar35;
    uVar37 = uVar42;
    uVar51 = uVar49;
    uVar60 = uVar58;
    uVar52 = uVar67;
    uVar69 = uVar75;
    func_0x0001082d7618();
    fVar10 = (float)CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar78,uVar82)));
    fVar5 = (float)CONCAT13(uVar37,CONCAT12(uVar30,CONCAT11(uVar23,uVar16)));
    uVar98 = CONCAT17(uVar69,CONCAT16(uVar52,CONCAT15(uVar60,CONCAT14(uVar51,fVar5))));
    uVar97 = param_1[7];
    uVar82 = 0;
    uVar78 = 0;
    uVar80 = 0;
    uVar81 = 0;
    uVar85 = 0;
    uVar88 = 0;
    uVar89 = 0;
    uVar94 = 0;
    uVar16 = (char)uVar97;
    uVar23 = (char)((uint)uVar97 >> 8);
    uVar30 = (char)((uint)uVar97 >> 0x10);
    uVar37 = (char)((uint)uVar97 >> 0x18);
    uVar51 = 0;
    uVar60 = 0;
    uVar52 = 0;
    uVar69 = 0;
    FUN_1082d4a58(CONCAT17(uVar76,CONCAT16(uVar68,CONCAT15(uVar59,CONCAT14(uVar50,CONCAT13(uVar43,
                                                  CONCAT12(uVar36,CONCAT11(uVar29,uVar22))))))),
                  uVar95);
    uVar76 = uVar69;
    uVar68 = uVar52;
    uVar59 = uVar60;
    uVar50 = uVar51;
    uVar43 = uVar37;
    uVar36 = uVar30;
    uVar29 = uVar23;
    uVar22 = uVar16;
    uVar16 = uVar22;
    uVar23 = uVar29;
    uVar30 = uVar36;
    uVar37 = uVar43;
    uVar51 = uVar50;
    uVar60 = uVar59;
    uVar52 = uVar68;
    uVar69 = uVar76;
    func_0x0001082d7618();
    func_0x0001082d5770();
    func_0x0001082d7618();
    fVar5 = fVar4 + fVar5 + (float)CONCAT13(uVar37,CONCAT12(uVar30,CONCAT11(uVar23,uVar16)));
    uVar16 = SUB41(fVar5,0);
    uVar23 = (undefined1)((uint)fVar5 >> 8);
    uVar30 = (undefined1)((uint)fVar5 >> 0x10);
    uVar37 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)(CONCAT17(uVar71,CONCAT16(uVar63,CONCAT15(uVar54,CONCAT14(SUB41(fVar7,0),fVar4)))
                            ) >> 0x20) +
            (float)((ulong)uVar98 >> 0x20) +
            (float)CONCAT13(uVar69,CONCAT12(uVar52,CONCAT11(uVar60,uVar51)));
    uVar51 = SUB41(fVar5,0);
    uVar60 = (undefined1)((uint)fVar5 >> 8);
    uVar52 = (undefined1)((uint)fVar5 >> 0x10);
    uVar69 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = fVar8 + fVar10 + (float)CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar78,uVar82)));
    uVar54 = SUB41(fVar5,0);
    uVar63 = (undefined1)((uint)fVar5 >> 8);
    uVar71 = (undefined1)((uint)fVar5 >> 0x10);
    uVar82 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)(CONCAT17((char)((uint)fVar11 >> 0x18),
                             CONCAT16((char)((uint)fVar11 >> 0x10),
                                      CONCAT15((char)((uint)fVar11 >> 8),
                                               CONCAT14(SUB41(fVar11,0),fVar8)))) >> 0x20) +
            (float)(CONCAT17(uVar93,CONCAT16(uVar91,CONCAT15(uVar87,CONCAT14(uVar84,fVar10)))) >>
                   0x20) + (float)CONCAT13(uVar94,CONCAT12(uVar89,CONCAT11(uVar88,uVar85)));
    uVar78 = SUB41(fVar5,0);
    uVar80 = (undefined1)((uint)fVar5 >> 8);
    uVar81 = (undefined1)((uint)fVar5 >> 0x10);
    uVar84 = (undefined1)((uint)fVar5 >> 0x18);
    func_0x0001082d7828();
    uStack_d0 = CONCAT13(uVar37,CONCAT12(uVar30,CONCAT11(uVar23,uVar16)));
    uStack_c8 = (undefined4)uVar98;
    uStack_cc = extraout_s1;
    uStack_c4 = in_s3;
    uVar97 = uStack_c8;
    func_0x0001082d5778(&uStack_d0);
    func_0x0001082d7618();
    fVar10 = (float)CONCAT13(uVar82,CONCAT12(uVar71,CONCAT11(uVar63,uVar54)));
    fVar5 = (float)CONCAT13(uVar37,CONCAT12(uVar30,CONCAT11(uVar23,uVar16)));
    fVar6 = fVar1 + fVar6;
    in_b0 = SUB41(fVar6,0);
    in_register_00005001 = (undefined1)((uint)fVar6 >> 8);
    in_register_00005002 = (undefined1)((uint)fVar6 >> 0x10);
    in_register_00005003 = (undefined1)((uint)fVar6 >> 0x18);
    fStack_12c = (float)(CONCAT17(uVar61,CONCAT16(uVar44,CONCAT15(uVar79,CONCAT14(uVar77,fVar1))))
                        >> 0x20) + fStack_12c;
    uVar16 = SUB41(fStack_12c,0);
    uVar23 = (undefined1)((uint)fStack_12c >> 8);
    uVar30 = (undefined1)((uint)fStack_12c >> 0x10);
    uVar37 = (undefined1)((uint)fStack_12c >> 0x18);
    fVar9 = fVar3 + fVar9;
    uVar77 = SUB41(fVar9,0);
    uVar79 = (undefined1)((uint)fVar9 >> 8);
    uVar44 = (undefined1)((uint)fVar9 >> 0x10);
    uVar61 = (undefined1)((uint)fVar9 >> 0x18);
    fStack_124 = (float)(CONCAT17(uVar92,CONCAT16(uVar90,CONCAT15(uVar86,CONCAT14(uVar83,fVar3))))
                        >> 0x20) + fStack_124;
    uVar54 = SUB41(fStack_124,0);
    uVar63 = (undefined1)((uint)fStack_124 >> 8);
    uVar71 = (undefined1)((uint)fStack_124 >> 0x10);
    uVar82 = (undefined1)((uint)fStack_124 >> 0x18);
    func_0x0001082d7828();
    uStack_c8 = uVar97;
    uStack_d0 = CONCAT13(in_register_00005003,
                         CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
    puVar13 = &uStack_d0;
    uStack_cc = extraout_s1_00;
    uStack_c4 = in_s3;
    func_0x0001082d5778();
    func_0x0001082d7618();
    fStack_ec = (float)(CONCAT17(uVar69,CONCAT16(uVar52,CONCAT15(uVar60,CONCAT14(uVar51,fVar5)))) >>
                       0x20);
    fStack_e4 = (float)(CONCAT17(uVar84,CONCAT16(uVar81,CONCAT15(uVar80,CONCAT14(uVar78,fVar10))))
                       >> 0x20);
    fVar5 = fVar5 * (float)CONCAT13(in_register_00005003,
                                    CONCAT12(in_register_00005002,
                                             CONCAT11(in_register_00005001,in_b0)));
    fStack_ec = fStack_ec * (float)CONCAT13(uVar37,CONCAT12(uVar30,CONCAT11(uVar23,uVar16)));
    in_register_00005004 = SUB41(fStack_ec,0);
    in_register_00005005 = (undefined1)((uint)fStack_ec >> 8);
    in_register_00005006 = (undefined1)((uint)fStack_ec >> 0x10);
    in_register_00005007 = (undefined1)((uint)fStack_ec >> 0x18);
    fVar10 = fVar10 * (float)CONCAT13(uVar61,CONCAT12(uVar44,CONCAT11(uVar79,uVar77)));
    uVar16 = (undefined1)((uint)fVar10 >> 8);
    uVar23 = (undefined1)((uint)fVar10 >> 0x10);
    uVar30 = (undefined1)((uint)fVar10 >> 0x18);
    fStack_e4 = fStack_e4 * (float)CONCAT13(uVar82,CONCAT12(uVar71,CONCAT11(uVar63,uVar54)));
    uVar37 = (undefined1)((uint)fStack_e4 >> 8);
    uVar77 = (undefined1)((uint)fStack_e4 >> 0x10);
    uVar51 = (undefined1)((uint)fStack_e4 >> 0x18);
    auVar96[4] = in_register_00005004;
    auVar96._0_4_ = fVar5;
    auVar96[5] = in_register_00005005;
    auVar96[6] = in_register_00005006;
    auVar96[7] = in_register_00005007;
    auVar96[8] = SUB41(fVar10,0);
    auVar96[9] = uVar16;
    auVar96[10] = uVar23;
    auVar96[0xb] = uVar30;
    auVar96[0xc] = SUB41(fStack_e4,0);
    auVar96[0xd] = uVar37;
    auVar96[0xe] = uVar77;
    auVar96[0xf] = uVar51;
    auVar2[4] = in_register_00005004;
    auVar2._0_4_ = fVar5;
    auVar2[5] = in_register_00005005;
    auVar2[6] = in_register_00005006;
    auVar2[7] = in_register_00005007;
    auVar2[8] = SUB41(fVar10,0);
    auVar2[9] = uVar16;
    auVar2[10] = uVar23;
    auVar2[0xb] = uVar30;
    auVar2[0xc] = SUB41(fStack_e4,0);
    auVar2[0xd] = uVar37;
    auVar2[0xe] = uVar77;
    auVar2[0xf] = uVar51;
    auVar96 = NEON_ext(auVar96,auVar2,4,1);
    uVar95 = auVar96._0_8_;
  }
  else {
    FUN_1082d5768();
    func_0x0001082d77e8();
    FUN_1082d70ec();
    func_0x0001082d7764();
LAB_1082d6770:
    uVar95 = NEON_fmov(0x3f800000,4);
  }
  func_0x0001082d7680(uStack_48,
                      CONCAT17(in_register_00005007,
                               CONCAT16(in_register_00005006,
                                        CONCAT15(in_register_00005005,
                                                 CONCAT14(in_register_00005004,
                                                          CONCAT13(in_register_00005003,
                                                                   CONCAT12(in_register_00005002,
                                                                            CONCAT11(
                                                  in_register_00005001,in_b0))))))),uVar95);
  if ((bool)uVar12) {
    return puVar13;
  }
  ___stack_chk_fail();
  if (*(char *)((long)puVar13 + 0x141) == '\x01') {
    func_0x0001082d7778();
    if (extraout_w8 == 0) goto LAB_1082d67f8;
  }
  FUN_1082d58b4(puVar13 + 0x3c,puVar13 + 0x1c,puVar13[0x38]);
  *(undefined1 *)((long)puVar13 + 0x141) = 1;
LAB_1082d67f8:
  return puVar13 + 0x3c;
}



/* Entry: 1082d67a8; end: 1082d6803;  */

long FUN_1082d67a8(long param_1,undefined8 *param_2)

{
  int extraout_w8;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x141) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0xf0);
    iVar1 = -(uint)((float)*param_2 == (float)uVar3);
    iVar2 = -(uint)((float)((ulong)*param_2 >> 0x20) == (float)((ulong)uVar3 >> 0x20));
    func_0x0001082d7778(CONCAT17(~(byte)((uint)iVar2 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar2 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar2 >> 8),
                                                   CONCAT14(~(byte)iVar2,
                                                            CONCAT13(~(byte)((uint)iVar1 >> 0x18),
                                                                     CONCAT12(~(byte)((uint)iVar1 >>
                                                                                     0x10),
                                                                              CONCAT11(~(byte)((uint
                                                  )iVar1 >> 8),~(byte)iVar1))))))),uVar3);
    if (extraout_w8 == 0) goto LAB_1082d67f8;
  }
  FUN_1082d58b4(param_1 + 0xf0,param_1 + 0x70,*(undefined4 *)(param_1 + 0xe0));
  *(undefined1 *)(param_1 + 0x141) = 1;
LAB_1082d67f8:
  return param_1 + 0xf0;
}



/* Entry: 1082d6804; end: 1082d70eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1082d6804(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  int iVar9;
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [13];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  bool bVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  float *pfVar27;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  ulong uVar28;
  ulong uVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float fVar33;
  byte bVar34;
  byte bVar47;
  byte bVar49;
  int iVar35;
  float fVar36;
  uint uVar37;
  uint7 uVar38;
  byte bVar51;
  byte bVar53;
  byte bVar56;
  int iVar54;
  byte bVar58;
  byte bVar60;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined4 uVar55;
  byte bVar62;
  byte bVar65;
  byte bVar67;
  int iVar64;
  byte bVar69;
  byte bVar71;
  byte bVar74;
  byte bVar76;
  int iVar73;
  byte bVar78;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  char cVar80;
  float fVar82;
  undefined1 in_b2;
  undefined1 uVar83;
  undefined1 in_register_00005041;
  undefined1 uVar84;
  undefined1 in_register_00005042;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 in_register_00005043;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  float in_s3;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined8 in_d4;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  undefined1 uVar119;
  byte bVar120;
  undefined1 uVar121;
  byte bVar122;
  undefined1 uVar123;
  byte bVar124;
  undefined1 uVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  undefined1 auVar137 [12];
  undefined8 uVar138;
  undefined8 uVar139;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_160;
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
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 auVar46 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  byte bVar48;
  byte bVar50;
  byte bVar52;
  byte bVar57;
  byte bVar59;
  byte bVar61;
  byte bVar63;
  byte bVar66;
  byte bVar68;
  byte bVar70;
  byte bVar72;
  byte bVar75;
  byte bVar77;
  byte bVar79;
  float fVar81;
  
  fVar82 = (float)((ulong)in_d4 >> 0x20);
  fVar36 = (float)in_d4;
  if (*(int *)param_1[0xe] < 2) {
    func_0x0001082d74a4(*(undefined8 *)param_1[0xb]);
    func_0x0001082d77dc();
    FUN_1082d40d8(&fStack_c0);
    func_0x0001082d75e8();
    uStack_160 = CONCAT44(-(uint)((float)((ulong)*(undefined8 *)*param_2 >> 0x20) < fVar82),
                          -(uint)((float)*(undefined8 *)*param_2 < fVar36));
    func_0x0001082d771c();
    func_0x0001082d77dc();
    func_0x0001082d5a8c(param_3,param_1 + 7,&fStack_c0);
    func_0x0001082d786c(uStack_160);
    if (extraout_w8 != 0) {
      return 1;
    }
    return 2;
  }
  uStack_130 = *(undefined8 *)param_1[7];
  uStack_128 = *(undefined8 *)(param_1[7] + 8);
  uStack_140 = *(undefined8 *)param_1[8];
  uStack_138 = *(undefined8 *)(param_1[8] + 8);
  FUN_1082d71d8();
  uVar138 = uStack_130;
  uVar40 = uStack_140;
  for (iVar35 = 0; iVar35 != 4; iVar35 = iVar35 + 1) {
    func_0x0001082d589c(uVar138);
    func_0x0001082d7618();
    func_0x0001082d589c(uVar40);
    func_0x0001082d7618();
    func_0x0001082d5770();
    func_0x0001082d77dc();
    func_0x0001082d58a4(&fStack_c0);
    func_0x0001082d7618();
    func_0x0001082d786c();
    if (extraout_w8_00 != 0) {
      uStack_150 = 0;
      uStack_148 = 0;
      uVar138 = uStack_140;
      uVar139 = uStack_138;
      uVar40 = uStack_130;
      uVar99 = uStack_128;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,(float)uStack_e0);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(float)uStack_d0);
      goto LAB_1082d6c38;
    }
  }
  auVar43 = *param_2;
  iVar35 = -(uint)(auVar43._0_4_ == 0.0);
  iVar54 = -(uint)(auVar43._4_4_ == 0.0);
  iVar64 = -(uint)(auVar43._8_4_ == 0.0);
  iVar73 = -(uint)(auVar43._12_4_ == 0.0);
  bVar34 = ~(byte)iVar35;
  bVar48 = (byte)((uint)iVar35 >> 8);
  bVar47 = ~bVar48;
  bVar50 = (byte)((uint)iVar35 >> 0x10);
  bVar49 = ~bVar50;
  bVar52 = (byte)((uint)iVar35 >> 0x18);
  bVar51 = ~bVar52;
  bVar53 = ~(byte)iVar54;
  bVar57 = (byte)((uint)iVar54 >> 8);
  bVar56 = ~bVar57;
  bVar59 = (byte)((uint)iVar54 >> 0x10);
  bVar58 = ~bVar59;
  bVar61 = (byte)((uint)iVar54 >> 0x18);
  bVar60 = ~bVar61;
  bVar63 = (byte)iVar64;
  bVar62 = ~bVar63;
  bVar66 = (byte)((uint)iVar64 >> 8);
  bVar65 = ~bVar66;
  bVar68 = (byte)((uint)iVar64 >> 0x10);
  bVar67 = ~bVar68;
  bVar70 = (byte)((uint)iVar64 >> 0x18);
  bVar69 = ~bVar70;
  bVar72 = (byte)iVar73;
  bVar71 = ~bVar72;
  bVar75 = (byte)((uint)iVar73 >> 8);
  bVar74 = ~bVar75;
  bVar77 = (byte)((uint)iVar73 >> 0x10);
  bVar79 = (byte)((uint)iVar73 >> 0x18);
  bVar76 = ~bVar77;
  bVar78 = ~bVar79;
  uStack_148 = CONCAT17(bVar78,CONCAT16(bVar76,CONCAT15(bVar74,CONCAT14(bVar71,CONCAT13(bVar69,
                                                  CONCAT12(bVar67,CONCAT11(bVar65,bVar62)))))));
  uStack_150 = CONCAT17(bVar60,CONCAT16(bVar58,CONCAT15(bVar56,CONCAT14(bVar53,CONCAT13(bVar51,
                                                  CONCAT12(bVar49,CONCAT11(bVar47,bVar34)))))));
  auVar137 = FUN_1082d40c8(*(undefined8 *)param_1[2]);
  fVar81 = auVar137._8_4_;
  uVar98 = auVar137._0_8_;
  fVar82 = (float)CONCAT13(in_register_00005043,
                           CONCAT12(in_register_00005042,CONCAT11(in_register_00005041,in_b2)));
  fVar91 = in_s3;
  uVar139 = extraout_var;
  func_0x0001082d7628();
  uVar40 = *(undefined8 *)param_1[1];
  uVar99 = uVar98;
  uVar103 = uVar139;
  func_0x0001082d74a4();
  func_0x0001082d75e8();
  uVar138 = *(undefined8 *)*param_1;
  uVar100 = uVar99;
  uVar104 = uVar103;
  uVar39 = FUN_1082d75fc(uVar138,uVar99);
  fStack_1c8 = (float)extraout_var_00;
  fStack_1c4 = (float)((ulong)extraout_var_00 >> 0x20);
  fStack_1d0 = (float)uVar39;
  fStack_1cc = (float)((ulong)uVar39 >> 0x20);
  func_0x0001082d74a4(uVar138);
  func_0x0001082d75e8();
  uVar39 = FUN_1082d75fc(uVar40,uVar100);
  fStack_1d0 = fStack_1d0 - (float)uVar39;
  fStack_1cc = fStack_1cc - (float)((ulong)uVar39 >> 0x20);
  fStack_1c8 = fStack_1c8 - (float)extraout_var_01;
  fStack_1c4 = fStack_1c4 - (float)((ulong)extraout_var_01 >> 0x20);
  fVar36 = auVar137._0_4_;
  fStack_c0 = fStack_1d0;
  fStack_bc = fStack_1cc;
  fStack_b8 = fStack_1c8;
  fStack_b4 = fStack_1c4;
  uVar40 = FUN_1082d75fc(uVar40);
  fStack_1f0 = (float)uVar99;
  fStack_1ec = (float)((ulong)uVar99 >> 0x20);
  fStack_1e8 = (float)uVar103;
  fStack_1e4 = (float)((ulong)uVar103 >> 0x20);
  fVar8 = (float)((ulong)uVar98 >> 0x20);
  fVar94 = (float)((ulong)uVar139 >> 0x20);
  uStack_d0._0_4_ = ((float)uVar40 - (float)uVar98 * fStack_1f0) / fStack_1d0;
  uStack_d0._4_4_ = ((float)((ulong)uVar40 >> 0x20) - fVar8 * fStack_1ec) / fStack_1cc;
  fStack_c8 = ((float)extraout_var_02 - (float)uVar139 * fStack_1e8) / fStack_1c8;
  fStack_c4 = ((float)((ulong)extraout_var_02 >> 0x20) - fVar94 * fStack_1e4) / fStack_1c4;
  fStack_200 = (float)uVar100;
  fStack_1fc = (float)((ulong)uVar100 >> 0x20);
  fStack_1f8 = (float)uVar104;
  fStack_1f4 = (float)((ulong)uVar104 >> 0x20);
  uVar40 = FUN_1082d75fc(uVar138,CONCAT44(fVar36,fVar82));
  uStack_e0._0_4_ = ((float)uVar98 * fStack_200 - (float)uVar40) / fStack_1d0;
  uStack_e0._4_4_ = (fVar8 * fStack_1fc - (float)((ulong)uVar40 >> 0x20)) / fStack_1cc;
  fStack_d8 = ((float)uVar139 * fStack_1f8 - (float)extraout_var_03) / fStack_1c8;
  fStack_d4 = (fVar94 * fStack_1f4 - (float)((ulong)extraout_var_03 >> 0x20)) / fStack_1c4;
  func_0x0001082d58a4(&fStack_c0);
  uVar40 = func_0x0001082d7618();
  uVar138 = CONCAT44(uStack_e0._4_4_,(float)uStack_e0);
  auVar43._0_8_ =
       CONCAT44(-(uint)((float)((ulong)uVar40 >> 0x20) < 1e-09),-(uint)((float)uVar40 < 1e-09));
  auVar43._8_4_ = -(uint)((float)extraout_var_04 < 1e-09);
  auVar43._12_4_ = -(uint)((float)((ulong)extraout_var_04 >> 0x20) < 1e-09);
  cVar80 = NEON_umaxv(auVar43,1);
  uVar40 = CONCAT44(uStack_d0._4_4_,(float)uStack_d0);
  if (cVar80 != '\0') {
    auVar41._4_4_ = uStack_d0._4_4_;
    auVar41._0_4_ = (float)uStack_d0;
    auVar41[8] = fStack_c8._0_1_;
    uVar83 = SUB41((float)uStack_d0,0);
    uVar84 = (undefined1)((uint)(float)uStack_d0 >> 8);
    uVar85 = (undefined1)((uint)(float)uStack_d0 >> 0x10);
    uVar88 = (undefined1)((uint)(float)uStack_d0 >> 0x18);
    auVar41[9] = (char)((uint)fStack_c8 >> 8);
    auVar41[10] = (char)((uint)fStack_c8 >> 0x10);
    auVar41[0xb] = (char)((uint)fStack_c8 >> 0x18);
    auVar41[0xc] = SUB41(fStack_c4,0);
    auVar41[0xd] = (char)((uint)fStack_c4 >> 8);
    auVar41[0xe] = (char)((uint)fStack_c4 >> 0x10);
    auVar41[0xf] = (char)((uint)fStack_c4 >> 0x18);
    NEON_rev64(auVar41,4);
    uStack_d0 = func_0x0001082d4088();
    fStack_c8 = (float)CONCAT13(uVar88,CONCAT12(uVar85,CONCAT11(uVar84,uVar83)));
    auVar101._4_4_ = uStack_e0._4_4_;
    auVar101._0_4_ = (float)uStack_e0;
    auVar101[8] = fStack_d8._0_1_;
    uVar83 = SUB41((float)uStack_e0,0);
    uVar84 = (undefined1)((uint)(float)uStack_e0 >> 8);
    uVar85 = (undefined1)((uint)(float)uStack_e0 >> 0x10);
    uVar88 = (undefined1)((uint)(float)uStack_e0 >> 0x18);
    auVar101[9] = (char)((uint)fStack_d8 >> 8);
    auVar101[10] = (char)((uint)fStack_d8 >> 0x10);
    auVar101[0xb] = (char)((uint)fStack_d8 >> 0x18);
    auVar101[0xc] = SUB41(fStack_d4,0);
    auVar101[0xd] = (char)((uint)fStack_d4 >> 8);
    auVar101[0xe] = (char)((uint)fStack_d4 >> 0x10);
    auVar101[0xf] = (char)((uint)fStack_d4 >> 0x18);
    NEON_rev64(auVar101,4);
    fStack_c4 = fVar91;
    uVar138 = func_0x0001082d4088(auVar43._0_8_);
    fStack_d8 = (float)CONCAT13(uVar88,CONCAT12(uVar85,CONCAT11(uVar84,uVar83)));
    fStack_d4 = fVar91;
    uVar40 = uStack_d0;
  }
  fVar91 = fStack_d8;
  uStack_e0._4_4_ = (float)((ulong)uVar138 >> 0x20);
  uStack_e0._0_4_ = (float)uVar138;
  fVar94 = (float)uStack_e0;
  uStack_d0._4_4_ = (float)((ulong)uVar40 >> 0x20);
  uStack_d0._0_4_ = (float)uVar40;
  auVar43 = *param_1;
  pauVar3 = param_1 + 1;
  uVar139 = *(undefined8 *)(param_1[1] + 8);
  uVar83 = (undefined1)((ulong)uVar139 >> 8);
  uVar84 = (undefined1)((ulong)uVar139 >> 0x10);
  uVar85 = (undefined1)((ulong)uVar139 >> 0x18);
  uVar88 = (undefined1)((ulong)uVar139 >> 0x20);
  uVar86 = (undefined1)((ulong)uVar139 >> 0x28);
  uVar87 = (undefined1)((ulong)uVar139 >> 0x30);
  uVar89 = (undefined1)((ulong)uVar139 >> 0x38);
  auVar41 = NEON_ext(auVar43,auVar43,4,1);
  auVar19._8_4_ = fStack_c8;
  auVar19._0_8_ = uVar40;
  auVar19._12_4_ = fStack_c4;
  auVar4[9] = uVar83;
  auVar4._0_9_ = *(unkbyte9 *)*pauVar3;
  auVar4[10] = uVar84;
  auVar4[0xb] = uVar85;
  auVar4[0xc] = uVar88;
  auVar4[0xd] = uVar86;
  auVar4[0xe] = uVar87;
  auVar4[0xf] = uVar89;
  auVar5[9] = uVar83;
  auVar5._0_9_ = *(unkbyte9 *)*pauVar3;
  auVar5[10] = uVar84;
  auVar5[0xb] = uVar85;
  auVar5[0xc] = uVar88;
  auVar5[0xd] = uVar86;
  auVar5[0xe] = uVar87;
  auVar5[0xf] = uVar89;
  auVar101 = NEON_ext(auVar4,auVar5,4,1);
  fVar92 = in_s3 + (float)uStack_d0 * auVar41._8_4_ + (float)uStack_e0 * auVar101._8_4_;
  fVar95 = in_s3 + uStack_d0._4_4_ * auVar41._8_4_ + uStack_e0._4_4_ * auVar101._8_4_;
  fVar96 = fVar36 + fStack_c8 * auVar41._12_4_ + fStack_d8 * auVar101._12_4_;
  fVar97 = fVar36 + fStack_c4 * auVar41._12_4_ + fStack_d4 * auVar101._12_4_;
  fVar33 = auVar43._4_4_;
  fVar8 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  fStack_100 = fVar81 + (float)uStack_d0 * fVar33 + (float)uStack_e0 * fVar8;
  fStack_fc = fVar82 + uStack_d0._4_4_ * auVar43._8_4_ +
                       uStack_e0._4_4_ *
                       (float)CONCAT13(uVar85,CONCAT12(uVar84,(short)(CONCAT12(uVar83,CONCAT11((char
                                                  )uVar139,uVar85)) >> 8)));
  fStack_f8 = fVar81 + fStack_c8 * fVar33 + fStack_d8 * fVar8;
  fStack_f4 = fVar82 + fStack_c4 * auVar43._8_4_ +
                       fStack_d4 *
                       (float)CONCAT13(uVar85,CONCAT12(uVar84,(short)(CONCAT12(uVar83,CONCAT11((char
                                                  )uVar139,uVar85)) >> 8)));
  uStack_e8 = CONCAT44(fVar97,fVar96);
  uStack_f0 = CONCAT44(fVar95,fVar92);
  iVar64 = -(uint)(fVar92 < 0.01);
  bVar105 = (byte)((uint)iVar64 >> 8);
  bVar106 = (byte)((uint)iVar64 >> 0x10);
  bVar107 = (byte)((uint)iVar64 >> 0x18);
  iVar73 = -(uint)(fVar95 < 0.01);
  bVar108 = (byte)iVar73;
  bVar109 = (byte)((uint)iVar73 >> 8);
  bVar110 = (byte)((uint)iVar73 >> 0x10);
  bVar111 = (byte)((uint)iVar73 >> 0x18);
  iVar73 = -(uint)(fVar96 < 0.01);
  bVar112 = (byte)((uint)iVar73 >> 8);
  bVar113 = (byte)((uint)iVar73 >> 0x10);
  bVar114 = (byte)((uint)iVar73 >> 0x18);
  iVar9 = -(uint)(fVar97 < 0.01);
  bVar115 = (byte)iVar9;
  bVar116 = (byte)((uint)iVar9 >> 8);
  bVar117 = (byte)((uint)iVar9 >> 0x10);
  bVar118 = (byte)((uint)iVar9 >> 0x18);
  uStack_108 = CONCAT17(bVar118,CONCAT16(bVar117,CONCAT15(bVar116,CONCAT14(bVar115,iVar73))));
  uStack_110 = CONCAT17(bVar111,CONCAT16(bVar110,CONCAT15(bVar109,CONCAT14(bVar108,iVar64))));
  iVar9 = -(uint)(fStack_100 < 0.01);
  bVar120 = (byte)((uint)iVar9 >> 8);
  bVar122 = (byte)((uint)iVar9 >> 0x10);
  bVar124 = (byte)((uint)iVar9 >> 0x18);
  iVar11 = -(uint)(fStack_fc < 0.01);
  bVar126 = (byte)iVar11;
  bVar127 = (byte)((uint)iVar11 >> 8);
  bVar128 = (byte)((uint)iVar11 >> 0x10);
  bVar129 = (byte)((uint)iVar11 >> 0x18);
  iVar11 = -(uint)(fStack_f8 < 0.01);
  bVar130 = (byte)((uint)iVar11 >> 8);
  bVar131 = (byte)((uint)iVar11 >> 0x10);
  bVar132 = (byte)((uint)iVar11 >> 0x18);
  iVar12 = -(uint)(fStack_f4 < 0.01);
  bVar133 = (byte)iVar12;
  bVar134 = (byte)((uint)iVar12 >> 8);
  bVar135 = (byte)((uint)iVar12 >> 0x10);
  bVar136 = (byte)((uint)iVar12 >> 0x18);
  uStack_118 = CONCAT17(bVar136,CONCAT16(bVar135,CONCAT15(bVar134,CONCAT14(bVar133,iVar11))));
  uStack_120 = CONCAT17(bVar129,CONCAT16(bVar128,CONCAT15(bVar127,CONCAT14(bVar126,iVar9))));
  auVar102._0_8_ =
       CONCAT17(bVar129 | bVar111,
                CONCAT16(bVar128 | bVar110,
                         CONCAT15(bVar127 | bVar109,
                                  CONCAT14(bVar126 | bVar108,
                                           CONCAT13(bVar124 | bVar107,
                                                    CONCAT12(bVar122 | bVar106,
                                                             CONCAT11(bVar120 | bVar105,
                                                                      (byte)iVar9 | (byte)iVar64))))
                                 )));
  auVar102[8] = (byte)iVar11 | (byte)iVar73;
  auVar102[9] = bVar130 | bVar112;
  auVar102[10] = bVar131 | bVar113;
  auVar102[0xb] = bVar132 | bVar114;
  auVar102[0xc] = bVar133 | bVar115;
  auVar102[0xd] = bVar134 | bVar116;
  auVar102[0xe] = bVar135 | bVar117;
  auVar102[0xf] = bVar136 | bVar118;
  uVar29 = auVar102._8_8_;
  auVar13._8_8_ = uVar29;
  auVar13._0_8_ = auVar102._0_8_;
  cVar80 = NEON_umaxv(auVar13,1);
  uVar139 = CONCAT44(fStack_d4,fStack_d8);
  uVar99 = auVar19._8_8_;
  uStack_e0 = uVar138;
  uStack_d0 = uVar40;
  if (cVar80 == '\0') {
LAB_1082d6c38:
    uStack_128 = uVar99;
    uStack_130 = uVar40;
    uStack_138 = uVar139;
    uStack_140 = uVar138;
    uVar55 = 4;
    goto LAB_1082d6c40;
  }
  auVar10[1] = bVar120 & bVar105;
  auVar10[0] = (byte)iVar9 & (byte)iVar64;
  auVar10[2] = bVar122 & bVar106;
  auVar10[3] = bVar124 & bVar107;
  auVar10[4] = bVar126 & bVar108;
  auVar10[5] = bVar127 & bVar109;
  auVar10[6] = bVar128 & bVar110;
  auVar10[7] = bVar129 & bVar111;
  auVar10[8] = (byte)iVar11 & (byte)iVar73;
  auVar10[9] = bVar130 & bVar112;
  auVar10[10] = bVar131 & bVar113;
  auVar10[0xb] = bVar132 & bVar114;
  auVar10[0xc] = bVar133 & bVar115;
  auVar10[0xd] = bVar134 & bVar116;
  auVar10[0xe] = bVar135 & bVar117;
  auVar10[0xf] = bVar136 & bVar118;
  cVar80 = NEON_umaxv(auVar10,1);
  if (cVar80 != '\0') {
    fVar36 = ((float)uStack_130 + uStack_130._4_4_ + (float)uStack_128 + uStack_128._4_4_) * 0.25;
    fVar82 = ((float)uStack_140 + uStack_140._4_4_ + (float)uStack_138 + uStack_138._4_4_) * 0.25;
    uStack_138 = CONCAT44(fVar82,fVar82);
    uStack_140 = CONCAT44(fVar82,fVar82);
    uStack_128 = CONCAT44(fVar36,fVar36);
    uStack_130 = CONCAT44(fVar36,fVar36);
    func_0x0001082d7778(uStack_150);
    bVar22 = extraout_w8_01 != 0;
    uStack_150 = CONCAT26(0,(uint6)CONCAT14(bVar22,(uint)CONCAT12(bVar22,(ushort)bVar22)) &
                            0xffff0000ffff);
    auVar16[8] = bVar22;
    auVar16._0_8_ = uStack_150;
    auVar16._9_3_ = 0;
    auVar16[0xc] = bVar22;
    uStack_148 = (ulong)auVar16._8_5_;
    uVar55 = 1;
    goto LAB_1082d6c40;
  }
  auVar14._8_8_ = uVar29;
  auVar14._0_8_ = auVar102._0_8_;
  iVar64 = NEON_uminv(auVar14,4);
  if (iVar64 == 0) {
    pfVar30 = (float *)((ulong)&uStack_e0 | 4);
    pfVar31 = (float *)((ulong)&uStack_e0 | 8);
    pfVar32 = (float *)((ulong)&uStack_e0 | 0xc);
    auVar6[9] = uVar83;
    auVar6._0_9_ = *(unkbyte9 *)*pauVar3;
    auVar6[10] = uVar84;
    auVar6[0xb] = uVar85;
    auVar6[0xc] = uVar88;
    auVar6[0xd] = uVar86;
    auVar6[0xe] = uVar87;
    auVar6[0xf] = uVar89;
    auVar7[9] = uVar83;
    auVar7._0_9_ = *(unkbyte9 *)*pauVar3;
    auVar7[10] = uVar84;
    auVar7[0xb] = uVar85;
    auVar7[0xc] = uVar88;
    auVar7[0xd] = uVar86;
    auVar7[0xe] = uVar87;
    auVar7[0xf] = uVar89;
    auVar41 = NEON_ext(auVar6,auVar7,8,1);
    uVar40 = NEON_rev64(auVar41._0_8_,4);
    fVar93 = (float)((ulong)uVar40 >> 0x20);
    auVar41 = NEON_ext(auVar43,auVar43,8,1);
    fVar92 = (float)*(undefined8 *)*pauVar3;
    fVar97 = (float)*(undefined8 *)(*param_1 + 0xc);
    fVar95 = auVar43._0_4_ * (float)uVar40 - fVar92 * fVar97;
    fVar96 = fVar33 * fVar93 - fVar8 * auVar41._0_4_;
    fVar92 = (in_s3 * fVar92 - fVar36 * (float)uVar40) / fVar95;
    fVar8 = (fVar82 * fVar8 - fVar81 * fVar93) / fVar96;
    uVar83 = SUB41(fStack_c8,0);
    uVar85 = (undefined1)((uint)fStack_c8 >> 8);
    uVar86 = (undefined1)((uint)fStack_c8 >> 0x10);
    uVar89 = (undefined1)((uint)fStack_c8 >> 0x18);
    fVar93 = fStack_c8;
    uVar138 = func_0x0001082d7724();
    uVar84 = SUB41(fVar91,0);
    uVar88 = (undefined1)((uint)fVar91 >> 8);
    uVar87 = (undefined1)((uint)fVar91 >> 0x10);
    uVar90 = (undefined1)((uint)fVar91 >> 0x18);
    uVar139 = func_0x0001082d7664();
    uVar37 = 0;
    puVar23 = &uStack_d0;
    puVar25 = &uStack_e0;
    uVar40 = uStack_d0;
    while( true ) {
      uStack_d0._4_4_ = (float)((ulong)uVar40 >> 0x20);
      uStack_d0._0_4_ = (float)uVar40;
      if (uVar37 == 4) break;
      uVar28 = 0;
      if (uVar37 != 0) {
        uVar28 = 4;
      }
      uVar1 = 8;
      if (uVar37 != 2) {
        uVar1 = 0xc;
      }
      if (1 < uVar37) {
        uVar28 = uVar1;
      }
      if ((-0.01 <= *(float *)((ulong)&uStack_f0 | uVar28)) || (ABS(fVar95) <= 1e-09)) {
        uVar28 = 0;
        if (uVar37 != 0) {
          uVar28 = 4;
        }
        uVar1 = 8;
        if (uVar37 != 2) {
          uVar1 = 0xc;
        }
        if (1 < uVar37) {
          uVar28 = uVar1;
        }
        if (*(int *)((ulong)&uStack_110 | uVar28) == 0) {
          uVar1 = 0;
          if (uVar37 != 0) {
            uVar1 = 4;
          }
          uVar2 = 8;
          if (uVar37 != 2) {
            uVar2 = 0xc;
          }
          if (1 < uVar37) {
            uVar1 = uVar2;
          }
          if ((-0.01 <= *(float *)((ulong)&fStack_100 | uVar1)) || (ABS(fVar96) <= 1e-09)) {
            if (*(int *)((ulong)&uStack_120 | uVar28) != 0) {
              uVar28 = 0;
              if (uVar37 != 0) {
                uVar28 = 4;
              }
              bVar22 = 1 < uVar37;
              uVar119 = uVar83;
              uVar121 = uVar85;
              uVar123 = uVar86;
              uVar125 = uVar89;
              if (bVar22) {
                uVar119 = SUB41(fVar93,0);
                uVar121 = (undefined1)((uint)fVar93 >> 8);
                uVar123 = (undefined1)((uint)fVar93 >> 0x10);
                uVar125 = (undefined1)((uint)fVar93 >> 0x18);
              }
              uVar1 = 8;
              if (uVar37 != 2) {
                uVar1 = 0xc;
              }
              if (bVar22) {
                uVar28 = uVar1;
              }
              *(uint *)((ulong)puVar23 | uVar28) =
                   CONCAT13(uVar125,CONCAT12(uVar123,CONCAT11(uVar121,uVar119)));
              uVar119 = uVar84;
              uVar121 = uVar88;
              uVar123 = uVar87;
              uVar125 = uVar90;
              if (bVar22) {
                uVar119 = SUB41(fVar94,0);
                uVar121 = (undefined1)((uint)fVar94 >> 8);
                uVar123 = (undefined1)((uint)fVar94 >> 0x10);
                uVar125 = (undefined1)((uint)fVar94 >> 0x18);
              }
              goto LAB_1082d6ee4;
            }
          }
          else {
            fVar91 = uStack_d0._4_4_;
            fVar21 = fStack_c4;
            if (uVar37 < 2) {
              pfVar27 = pfVar30;
              fVar91 = fVar8;
              if (uVar37 == 0) {
                pfVar27 = (float *)&uStack_e0;
                uStack_d0._0_4_ = fVar8;
                fVar91 = uStack_d0._4_4_;
              }
            }
            else {
              pfVar27 = pfVar32;
              fVar21 = fVar8;
              if (uVar37 == 2) {
                pfVar27 = pfVar31;
                fStack_c8 = fVar8;
                fVar21 = fStack_c4;
              }
            }
            fStack_c4 = fVar21;
            uStack_d0._4_4_ = fVar91;
            *pfVar27 = (fVar81 * auVar41._0_4_ - fVar82 * fVar33) / fVar96;
            uVar40 = CONCAT44(uStack_d0._4_4_,(float)uStack_d0);
          }
        }
        else {
          uVar28 = 0;
          if (uVar37 != 0) {
            uVar28 = 4;
          }
          uVar1 = 8;
          if (uVar37 != 2) {
            uVar1 = 0xc;
          }
          if (1 < uVar37) {
            uVar28 = uVar1;
          }
          bVar22 = (uVar37 & 1) != 0;
          uVar119 = (undefined1)uVar138;
          uVar121 = (undefined1)((ulong)uVar138 >> 8);
          uVar123 = (undefined1)((ulong)uVar138 >> 0x10);
          uVar125 = (undefined1)((ulong)uVar138 >> 0x18);
          if (bVar22) {
            uVar119 = (undefined1)((ulong)uVar138 >> 0x20);
            uVar121 = (undefined1)((ulong)uVar138 >> 0x28);
            uVar123 = (undefined1)((ulong)uVar138 >> 0x30);
            uVar125 = (undefined1)((ulong)uVar138 >> 0x38);
          }
          *(uint *)((ulong)puVar23 | uVar28) =
               CONCAT13(uVar125,CONCAT12(uVar123,CONCAT11(uVar121,uVar119)));
          uVar119 = (char)uVar139;
          uVar121 = (char)((ulong)uVar139 >> 8);
          uVar123 = (char)((ulong)uVar139 >> 0x10);
          uVar125 = (char)((ulong)uVar139 >> 0x18);
          if (bVar22) {
            uVar119 = (char)((ulong)uVar139 >> 0x20);
            uVar121 = (char)((ulong)uVar139 >> 0x28);
            uVar123 = (char)((ulong)uVar139 >> 0x30);
            uVar125 = (char)((ulong)uVar139 >> 0x38);
          }
LAB_1082d6ee4:
          *(uint *)((ulong)puVar25 | uVar28) =
               CONCAT13(uVar125,CONCAT12(uVar123,CONCAT11(uVar121,uVar119)));
        }
      }
      else {
        fVar91 = uStack_d0._4_4_;
        fVar21 = fStack_c4;
        if (uVar37 < 2) {
          pfVar27 = pfVar30;
          fVar91 = fVar92;
          if (uVar37 == 0) {
            pfVar27 = (float *)&uStack_e0;
            uStack_d0._0_4_ = fVar92;
            fVar91 = uStack_d0._4_4_;
          }
        }
        else {
          pfVar27 = pfVar32;
          fVar21 = fVar92;
          if (uVar37 == 2) {
            pfVar27 = pfVar31;
            fStack_c8 = fVar92;
            fVar21 = fStack_c4;
          }
        }
        fStack_c4 = fVar21;
        uStack_d0._4_4_ = fVar91;
        *pfVar27 = (fVar36 * fVar97 - in_s3 * auVar43._0_4_) / fVar95;
        uVar40 = CONCAT44(uStack_d0._4_4_,(float)uStack_d0);
      }
      uVar37 = uVar37 + 1;
    }
    uVar55 = CONCAT13(bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar34)));
    auVar18[4] = bVar53;
    auVar18._0_4_ = uVar55;
    auVar18[5] = bVar56;
    auVar18[6] = bVar58;
    auVar18[7] = bVar60;
    auVar18[8] = bVar62;
    auVar18[9] = bVar65;
    auVar18[10] = bVar67;
    auVar18[0xb] = bVar69;
    auVar17[0xc] = bVar71;
    auVar17._0_12_ = auVar18;
    auVar17[0xd] = bVar74;
    auVar17[0xe] = bVar76;
    auVar17[0xf] = bVar78;
    auVar43 = NEON_ext(auVar17,auVar17,8,1);
    auVar44._0_8_ = auVar43._4_8_ << 0x20;
    auVar44._12_4_ = auVar43._12_4_;
    auVar44._8_4_ = auVar17._12_4_;
    auVar137._4_8_ = auVar44._8_8_;
    auVar137._0_4_ = auVar43._8_4_;
    auVar45._0_12_ = auVar137 << 0x20;
    auVar45._12_4_ = auVar44._12_4_;
    uVar29 = uVar29 & auVar45._8_8_;
    uVar28 = auVar102._0_8_ & CONCAT44(uVar55,auVar18._8_4_);
    uVar38 = CONCAT16((byte)(uVar28 >> 0x30) | bVar58,
                      CONCAT15((byte)(uVar28 >> 0x28) | bVar56,
                               CONCAT14((byte)(uVar28 >> 0x20) | bVar53,
                                        CONCAT13((byte)(uVar28 >> 0x18) | bVar51,
                                                 CONCAT12((byte)(uVar28 >> 0x10) | bVar49,
                                                          CONCAT11((byte)(uVar28 >> 8) | bVar47,
                                                                   (byte)uVar28 | bVar34))))));
    auVar46._0_8_ = CONCAT17((byte)(uVar28 >> 0x38) | bVar60,uVar38);
    auVar46[8] = (byte)uVar29 | bVar62;
    auVar46[9] = (byte)(uVar29 >> 8) | bVar65;
    auVar46[10] = (byte)(uVar29 >> 0x10) | bVar67;
    auVar46[0xb] = (byte)(uVar29 >> 0x18) | bVar69;
    auVar46[0xc] = (byte)(uVar29 >> 0x20) | bVar71;
    auVar46[0xd] = (byte)(uVar29 >> 0x28) | bVar74;
    auVar46[0xe] = (byte)(uVar29 >> 0x30) | bVar76;
    auVar46[0xf] = (byte)(uVar29 >> 0x38) | bVar78;
    uStack_d0 = uVar40;
    func_0x0001082d7594(auVar102._0_8_);
    puVar24 = puVar23;
    puVar26 = puVar25;
    func_0x0001082d7594(CONCAT17(bVar60,CONCAT16(bVar58,CONCAT15(bVar56,CONCAT14(bVar53,CONCAT13(
                                                  bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar34)))))
                                                )));
    uStack_150 = CONCAT44((uint)(((ulong)puVar24 & (ulong)puVar23) >> 0x20) |
                          (uint)((ulong)auVar46._0_8_ >> 0x20),
                          (int)((ulong)puVar24 & (ulong)puVar23)) | (ulong)uVar38 & 0xffffffff;
    uStack_148 = (ulong)puVar26 & (ulong)puVar25 | auVar46._8_8_;
    uStack_140 = uStack_e0;
    uStack_138 = CONCAT44(fStack_d4,fStack_d8);
    uStack_130 = uStack_d0;
    uStack_128 = CONCAT44(fStack_c4,fStack_c8);
    uVar55 = 3;
    goto LAB_1082d6c40;
  }
  uVar83 = SUB41(fVar96,0);
  uVar84 = (undefined1)((uint)fVar96 >> 8);
  uVar85 = (undefined1)((uint)fVar96 >> 0x10);
  uVar88 = (undefined1)((uint)fVar96 >> 0x18);
  if (0.01 <= fVar96) {
LAB_1082d7080:
    uStack_130 = func_0x0001082d7724();
    uStack_128 = CONCAT44(fVar92,CONCAT13(uVar88,CONCAT12(uVar85,CONCAT11(uVar84,uVar83))));
    uStack_140 = func_0x0001082d7664();
    uStack_138 = CONCAT44(fVar92,CONCAT13(uVar88,CONCAT12(uVar85,CONCAT11(uVar84,uVar83))));
    uVar37 = CONCAT13(bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar34)));
    auVar15._1_11_ = UNK_10df16430._5_11_;
    auVar15[0] = UNK_10df16430._4_1_ | ~(byte)iVar54;
    auVar42._0_8_ =
         CONCAT17(UNK_10df16430._7_1_ | ~bVar61,
                  CONCAT16(UNK_10df16430._6_1_ | ~bVar59,
                           CONCAT15(UNK_10df16430._5_1_ | ~bVar57,auVar15._0_5_ << 0x20)));
    auVar42[8] = UNK_10df16430._8_1_ | ~bVar63;
    auVar42[9] = UNK_10df16430._9_1_ | ~bVar66;
    auVar42[10] = UNK_10df16430._10_1_ | ~bVar68;
    auVar42[0xb] = UNK_10df16430._11_1_ | ~bVar70;
    auVar42[0xc] = UNK_10df16430._12_1_ | ~bVar72;
    auVar42[0xd] = UNK_10df16430._13_1_ | ~bVar75;
    auVar42[0xe] = UNK_10df16430._14_1_ | ~bVar77;
    auVar42[0xf] = UNK_10df16430._15_1_ | ~bVar79;
    uVar55 = (undefined4)((ulong)auVar42._0_8_ >> 0x20);
  }
  else {
    uVar83 = SUB41(fVar97,0);
    uVar84 = (undefined1)((uint)fVar97 >> 8);
    uVar85 = (undefined1)((uint)fVar97 >> 0x10);
    uVar88 = (undefined1)((uint)fVar97 >> 0x18);
    if (0.01 <= fVar97) goto LAB_1082d7080;
    uVar83 = (undefined1)uVar40;
    uVar84 = (undefined1)((ulong)uVar40 >> 8);
    uVar85 = (undefined1)((ulong)uVar40 >> 0x10);
    uVar88 = (undefined1)((ulong)uVar40 >> 0x18);
    fVar36 = fStack_c8;
    uStack_130 = func_0x0001082d7724();
    uStack_128 = CONCAT44(fVar36,CONCAT13(uVar88,CONCAT12(uVar85,CONCAT11(uVar84,uVar83))));
    uStack_140 = func_0x0001082d7664(uVar138);
    uStack_138 = CONCAT44(fVar36,CONCAT13(uVar88,CONCAT12(uVar85,CONCAT11(uVar84,uVar83))));
    uVar55 = CONCAT13(bVar60,CONCAT12(bVar58,CONCAT11(bVar56,bVar53)));
    uVar37 = CONCAT13(~bVar52,CONCAT12(~bVar50,CONCAT11(~bVar48,~(byte)iVar35))) | 1;
    auVar20[8] = ~bVar79;
    auVar20._0_8_ =
         CONCAT17(~bVar77,CONCAT16(~bVar75,CONCAT15(~bVar72,CONCAT14(~bVar70,CONCAT13(~bVar68,
                                                  CONCAT12(~bVar66,CONCAT11(~bVar63,~bVar61))))))) |
         0x10000000000;
    auVar20._9_7_ = 0;
    auVar42 = auVar20 << 0x38;
  }
  uStack_150 = CONCAT44(uVar55,uVar37);
  *(long *)((ulong)&uStack_150 | 8) = auVar42._8_8_;
  uVar55 = 2;
LAB_1082d6c40:
  FUN_1082d5cec(param_3,&uStack_130,&uStack_140,&uStack_150);
                    /* WARNING: Read-only address (ram,0x00010df16430) is written */
  return uVar55;
}



/* Entry: 1082d70ec; end: 1082d71d7;  */

/* WARNING: Possible PIC construction at 0x0001082d718c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082d7190) */
/* WARNING: Removing unreachable block (ram,0x0001082d71c0) */

undefined8 * FUN_1082d70ec(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar4;
  undefined8 uVar5;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  undefined8 extraout_var_09;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_d3;
  undefined8 in_register_00005068;
  undefined8 in_d4;
  undefined1 auStack_c0 [16];
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
  undefined4 uStack_50;
  long lStack_38;
  
  uVar13 = (undefined4)((ulong)in_d3 >> 0x20);
  uVar12 = (undefined4)in_d3;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0xe0) < 3) {
    puVar2 = param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      if ((*(byte *)(param_1 + 0x142) & 1) == 0) {
        func_0x0001082d55d4(param_1 + 0x110,param_1 + 0x70);
        *(undefined1 *)(param_1 + 0x142) = 1;
      }
      return (undefined8 *)(param_1 + 0x110);
    }
  }
  else {
    unaff_x21 = &uStack_b0;
    uStack_b0 = *(undefined8 *)(param_1 + 0x70);
    uStack_a8 = *(undefined8 *)(param_1 + 0x78);
    uStack_98 = *(undefined8 *)(param_1 + 0x88);
    uStack_a0 = *(undefined8 *)(param_1 + 0x80);
    auVar6 = NEON_fmov(0x3f800000,4);
    uStack_88 = auVar6._8_8_;
    uStack_90 = auVar6._0_8_;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0;
    puVar2 = &uStack_b0;
    unaff_x30 = 0x1082d7190;
    register0x00000008 = (BADSPACEBASE *)auStack_c0;
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)((long)register0x00000008 + -0x38) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar5;
  FUN_1082d5768();
  uVar5 = FUN_1082d7618();
  *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_var;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)((long)register0x00000008 + -0x58) = param_2[1];
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar5;
  func_0x0001082d74a4();
  uVar5 = FUN_1082d7618();
  uVar11 = *(undefined8 *)((long)register0x00000008 + -0x48);
  uVar10 = *(undefined8 *)((long)register0x00000008 + -0x50);
  *(float *)((long)register0x00000008 + -0x48) = (float)uVar11 * (float)extraout_var_00;
  *(float *)((long)register0x00000008 + -0x44) =
       (float)((ulong)uVar11 >> 0x20) * (float)((ulong)extraout_var_00 >> 0x20);
  *(float *)((long)register0x00000008 + -0x50) = (float)uVar10 * (float)uVar5;
  *(float *)((long)register0x00000008 + -0x4c) =
       (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar5 >> 0x20);
  uVar5 = FUN_1082d75fc(*(undefined8 *)((long)register0x00000008 + -0x40),
                        *(undefined8 *)((long)register0x00000008 + -0x60));
  *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_var_01;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar5;
  func_0x0001082d74a4();
  uVar5 = FUN_1082d7618();
  *(float *)((long)register0x00000008 + -0x58) =
       (float)*(undefined8 *)((long)register0x00000008 + -0x38) * (float)extraout_var_02;
  *(float *)((long)register0x00000008 + -0x54) =
       (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x38) >> 0x20) *
       (float)((ulong)extraout_var_02 >> 0x20);
  *(float *)((long)register0x00000008 + -0x60) =
       (float)*(undefined8 *)((long)register0x00000008 + -0x40) * (float)uVar5;
  *(float *)((long)register0x00000008 + -0x5c) =
       (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x40) >> 0x20) *
       (float)((ulong)uVar5 >> 0x20);
  FUN_1082d75fc(*(undefined8 *)((long)register0x00000008 + -0x50),
                *(undefined8 *)((long)register0x00000008 + -0x70));
  FUN_1082d5cc0(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar5;
  func_0x0001082d74a4();
  uVar5 = FUN_1082d7618();
  *(float *)((long)register0x00000008 + -0x58) =
       (float)*(undefined8 *)((long)register0x00000008 + -0x38) * (float)extraout_var_03;
  *(float *)((long)register0x00000008 + -0x54) =
       (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x38) >> 0x20) *
       (float)((ulong)extraout_var_03 >> 0x20);
  *(float *)((long)register0x00000008 + -0x60) =
       (float)*(undefined8 *)((long)register0x00000008 + -0x40) * (float)uVar5;
  *(float *)((long)register0x00000008 + -0x5c) =
       (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x40) >> 0x20) *
       (float)((ulong)uVar5 >> 0x20);
  FUN_1082d75fc(*(undefined8 *)((long)register0x00000008 + -0x50),
                *(undefined8 *)((long)register0x00000008 + -0x70));
  puVar3 = puVar2 + 2;
  FUN_1082d5cc0(puVar3);
  if (0 < *(int *)(puVar2 + 0xc)) {
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar5;
    uVar5 = FUN_1082d75fc(*(undefined8 *)((long)register0x00000008 + -0x50));
    *(undefined8 *)((long)register0x00000008 + -0x48) = extraout_var_04;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar5;
    func_0x0001082d74a4(*(undefined8 *)((long)register0x00000008 + -0x60));
    func_0x0001082d75e8();
    uVar5 = FUN_1082d75fc(*(undefined8 *)((long)register0x00000008 + -0x40),in_d4);
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_var_05;
    *(undefined8 *)((long)register0x00000008 + -0x40) = uVar5;
    uVar5 = puVar2[6];
    *(undefined8 *)((long)register0x00000008 + -0x58) = puVar2[7];
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar5;
    func_0x0001082d7490();
    FUN_1082d7618();
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0x58);
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0x60);
    uVar5 = func_0x0001082d4098();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_var_06;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar5;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x98) = in_register_00005068;
    *(ulong *)((long)register0x00000008 + -0xa0) = CONCAT44(uVar13,uVar12);
    *(undefined8 *)((long)register0x00000008 + -0x88) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar10;
    uVar5 = FUN_1082d7618();
    *(undefined8 *)((long)register0x00000008 + -0x78) = extraout_var_07;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar5;
    uVar5 = puVar2[8];
    *(undefined8 *)((long)register0x00000008 + -0xa8) = puVar2[9];
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar5;
    func_0x0001082d7490();
    FUN_1082d7618();
    uVar8 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    uVar7 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    uVar5 = func_0x0001082d4098();
    *(undefined8 *)((long)register0x00000008 + -0xb8) = extraout_var_08;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar5;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar8;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = in_register_00005068;
    *(ulong *)((long)register0x00000008 + -0xf0) = CONCAT44(uVar13,uVar12);
    *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar10;
    uVar5 = FUN_1082d7618();
    *(undefined8 *)((long)register0x00000008 + -200) = extraout_var_09;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar5;
    func_0x0001082d7758();
    fVar9 = (float)*(undefined8 *)((long)register0x00000008 + -0xd0);
    func_0x0001082d774c();
    if (*(int *)(puVar2 + 0xc) == 3) {
      puVar3 = puVar2 + 10;
      uVar5 = *puVar3;
      *(undefined8 *)((long)register0x00000008 + -0x58) = puVar2[0xb];
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar5;
      func_0x0001082d7490();
      uVar5 = FUN_1082d7618();
      uVar5 = func_0x0001082d4098(uVar5,*(undefined8 *)((long)register0x00000008 + -0x60));
      fVar4 = (float)func_0x0001082d7628();
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      FUN_1082d40c8(*puVar3,CONCAT44(*(float *)((long)register0x00000008 + -0x3c) * fVar4 +
                                     (float)((ulong)*(undefined8 *)
                                                     ((long)register0x00000008 + -0x50) >> 0x20) *
                                     (float)((ulong)uVar5 >> 0x20),
                                     *(float *)((long)register0x00000008 + -0x40) * fVar9 +
                                     (float)*(undefined8 *)((long)register0x00000008 + -0x50) *
                                     (float)uVar5));
      func_0x0001082d7784();
      return puVar3;
    }
  }
  return puVar3;
}



/* Entry: 1082d71d8; end: 1082d720f;  */

long FUN_1082d71d8(long param_1)

{
  if ((*(byte *)(param_1 + 0x142) & 1) == 0) {
    func_0x0001082d55d4(param_1 + 0x110,param_1 + 0x70);
    *(undefined1 *)(param_1 + 0x142) = 1;
  }
  return param_1 + 0x110;
}



/* Entry: 1082d7210; end: 1082d72b3;  */

void FUN_1082d7210(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [120];
  undefined8 uStack_38;
  
  puVar3 = auStack_b0;
  func_0x0001082d77cc();
  uStack_38 = extraout_x8;
  _memcpy(auStack_b0,param_1,0x70);
  lVar2 = param_1;
  FUN_1082d67a8(param_1,param_2);
  uVar1 = *(char *)(lVar2 + 0x11) == '\x01';
  if ((bool)uVar1) {
    FUN_1082d6804();
  }
  else {
    FUN_1082d70ec(param_1,lVar2,auStack_b0);
  }
  FUN_1082d49c0(auStack_b0,param_3,*(undefined4 *)(param_1 + 0xe0),param_4,
                *(undefined4 *)(param_1 + 0xe4));
  func_0x0001082d7680(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_1082d72b4;
  uStack_c8 = 0x3f8000003f800000;
  uStack_d0 = 0x3f8000003f800000;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x0001082d4078(&uStack_d0,puVar3 + 0xb0);
  return;
}



/* Entry: 1082d72b4; end: 1082d72bf;  */

void FUN_1082d72b4(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x3f8000003f800000;
  uStack_20 = 0x3f8000003f800000;
  func_0x0001082d4078(&uStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 1082d72c0; end: 1082d7403;  */

undefined8
FUN_1082d72c0(float *param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,long param_6,
             long param_7,long param_8)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = (ulong)param_2;
  fVar2 = *(float *)(param_6 + (ulong)param_2 * 4);
  if (ABS(fVar2 - *(float *)(param_6 + (ulong)param_3 * 4)) <= 0.00024414062) {
    fVar3 = *param_1;
    if ((fVar3 <= fVar2) || (fVar4 = *(float *)(param_6 + (ulong)param_4 * 4), fVar4 < fVar3)) {
      fVar3 = param_1[2];
      if (fVar2 <= fVar3) {
        return 0;
      }
      fVar4 = *(float *)(param_6 + (ulong)param_4 * 4);
      if (fVar3 < fVar4) {
        return 0;
      }
      if (param_8 != 0) {
        func_0x0001082d7638(fVar2 - fVar4,fVar3 - fVar4);
        fVar3 = param_1[2];
      }
      *(float *)(param_6 + uVar1 * 4) = fVar3;
      fVar2 = param_1[2];
    }
    else {
      if (param_8 != 0) {
        func_0x0001082d7638(fVar4 - fVar2,fVar4 - fVar3);
        fVar3 = *param_1;
      }
      *(float *)(param_6 + uVar1 * 4) = fVar3;
      fVar2 = *param_1;
    }
    *(float *)(param_6 + (ulong)param_3 * 4) = fVar2;
  }
  else {
    fVar2 = *(float *)(param_7 + uVar1 * 4);
    fVar3 = param_1[1];
    if ((fVar3 <= fVar2) || (fVar4 = *(float *)(param_7 + (ulong)param_4 * 4), fVar4 < fVar3)) {
      fVar3 = param_1[3];
      if ((fVar2 <= fVar3) || (fVar4 = *(float *)(param_7 + (ulong)param_4 * 4), fVar3 < fVar4)) {
        return 0;
      }
      if (param_8 != 0) {
        func_0x0001082d7638(fVar2 - fVar4,fVar3 - fVar4);
        fVar3 = param_1[3];
      }
      *(float *)(param_7 + uVar1 * 4) = fVar3;
      fVar2 = param_1[3];
    }
    else {
      if (param_8 != 0) {
        func_0x0001082d7638(fVar4 - fVar2,fVar4 - fVar3);
        fVar3 = param_1[1];
      }
      *(float *)(param_7 + uVar1 * 4) = fVar3;
      fVar2 = param_1[1];
    }
    *(float *)(param_7 + (ulong)param_3 * 4) = fVar2;
  }
  return 1;
}



/* Entry: 1082d7404; end: 1082d74b7;  */

void FUN_1082d7404(float param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6,
                  long param_7,long param_8)

{
  float fVar1;
  
  fVar1 = 1.0 - param_1;
  *(float *)(param_6 + (ulong)param_2 * 4) =
       fVar1 * *(float *)(param_6 + (ulong)param_4 * 4) +
       *(float *)(param_6 + (ulong)param_2 * 4) * param_1;
  *(float *)(param_7 + (ulong)param_2 * 4) =
       fVar1 * *(float *)(param_7 + (ulong)param_4 * 4) +
       *(float *)(param_7 + (ulong)param_2 * 4) * param_1;
  *(float *)(param_8 + (ulong)param_2 * 4) =
       fVar1 * *(float *)(param_8 + (ulong)param_4 * 4) +
       *(float *)(param_8 + (ulong)param_2 * 4) * param_1;
  *(float *)(param_6 + (ulong)param_3 * 4) =
       fVar1 * *(float *)(param_6 + (ulong)param_5 * 4) +
       *(float *)(param_6 + (ulong)param_3 * 4) * param_1;
  *(float *)(param_7 + (ulong)param_3 * 4) =
       fVar1 * *(float *)(param_7 + (ulong)param_5 * 4) +
       *(float *)(param_7 + (ulong)param_3 * 4) * param_1;
  *(float *)(param_8 + (ulong)param_3 * 4) =
       fVar1 * *(float *)(param_8 + (ulong)param_5 * 4) +
       *(float *)(param_8 + (ulong)param_3 * 4) * param_1;
  return;
}



/* Entry: 1082d74b8; end: 1082d7523;  */

ulong FUN_1082d74b8(code *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  (*param_1)(uVar1);
  (*param_1)(param_2[1]);
  (*param_1)(param_2[2]);
  (*param_1)(param_2[3]);
  return uVar1;
}



/* Entry: 1082d7524; end: 1082d75ab;  */

uint FUN_1082d7524(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  bVar1 = (byte)((uint)param_1 >> 8);
  bVar2 = (byte)((uint)param_1 >> 0x10);
  bVar3 = (byte)((uint)param_1 >> 0x18);
  return CONCAT13(bVar3 & (byte)((ulong)uVar4 >> 0x18),
                  CONCAT12(bVar2 & (byte)((ulong)uVar4 >> 0x10),
                           CONCAT11(bVar1 & (byte)((ulong)uVar4 >> 8),(byte)param_1 & (byte)uVar4)))
         | CONCAT13((byte)((uint)param_2 >> 0x18) & ~bVar3,
                    CONCAT12((byte)((uint)param_2 >> 0x10) & ~bVar2,
                             CONCAT11((byte)((uint)param_2 >> 8) & ~bVar1,
                                      (byte)param_2 & ~(byte)param_1)));
}



/* Entry: 1082d75ac; end: 1082d75cb;  */

void FUN_1082d75ac(void)

{
  func_0x0001082d4088();
  return;
}



/* Entry: 1082d75cc; end: 1082d75fb;  */

void FUN_1082d75cc(void)

{
  return;
}



/* Entry: 1082d75fc; end: 1082d7617;  */

void FUN_1082d75fc(void)

{
  func_0x0001082d40d0();
  return;
}



/* Entry: 1082d7618; end: 1082d7897;  */

void FUN_1082d7618(void)

{
  return;
}



/* Entry: 1082d7898; end: 1082d79bf;  */

long FUN_1082d7898(long param_1,long param_2)

{
  switch(*(undefined1 *)(param_2 + 0x38)) {
  case 0:
    FUN_108276bc0(param_1);
    break;
  case 1:
    func_0x0001082d87a0();
    func_0x0001082d7940();
    break;
  case 2:
    func_0x0001082d87a0();
    func_0x000108277374();
    break;
  case 3:
    func_0x0001082d87a0();
    func_0x00010827739c();
    break;
  case 4:
    func_0x0001082d87a0();
    func_0x00010827ee00();
    break;
  case 5:
    func_0x0001082d87a0();
    func_0x0001082d7968();
    break;
  case 6:
    func_0x0001082d87a0();
    func_0x0001082d7998();
  }
  *(undefined2 *)(param_1 + 0x39) = *(undefined2 *)(param_2 + 0x39);
  *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)(param_2 + 0x3b);
  return param_1;
}



/* Entry: 1082d79c0; end: 1082d79f3;  */

uint FUN_1082d79c0(long param_1)

{
  uint uVar1;
  
  if (*(byte *)(param_1 + 0x38) == 4) {
    uVar1 = *(byte *)(param_1 + 0xe) & 3;
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 0x3b);
  }
  return uVar1 | (uint)*(byte *)(param_1 + 0x38) << 2 | (uint)*(byte *)(param_1 + 0x39) << 5 |
         (uint)*(byte *)(param_1 + 0x3a) << 8;
}



/* Entry: 1082d79f4; end: 1082d7c43;  */

/* WARNING: Possible PIC construction at 0x0001082d7bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082d7bc4) */
/* WARNING: Removing unreachable block (ram,0x0001082d805c) */

void FUN_1082d79f4(uint *param_1,undefined1 (*param_2) [16],float *param_3,uint *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  uint *puVar3;
  undefined1 (*pauVar4) [16];
  char cVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined1 (*unaff_x19) [16];
  undefined8 *****pppppuVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 ****ppppuStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [4];
  float afStack_cc [13];
  uint uStack_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  float afStack_58 [4];
  undefined1 auStack_48 [8];
  float afStack_40 [2];
  long lStack_38;
  
  puVar1 = auStack_d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  afStack_58[0] = 0.0;
  afStack_58[1] = 0.0;
  afStack_58[2] = 0.0;
  afStack_58[3] = 0.0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(*(long *)param_1 + 0x48) == 0) {
    func_0x0001082d87fc();
    pauVar6 = param_2;
  }
  else {
    puVar3 = param_1;
    func_0x000108377358(param_1,auStack_48);
    unaff_x19 = param_2;
    if ((int)puVar3 == 0) {
      puVar3 = param_1;
      FUN_1082d7c44(param_1,&uStack_90,&uStack_94,&uStack_98);
      if ((int)puVar3 == 0) {
        puVar3 = param_1;
        FUN_1082d7d0c(param_1,afStack_58,&uStack_94,&uStack_98);
        if ((int)puVar3 != 0) {
          FUN_1081779a8(afStack_cc,afStack_58);
          uStack_98 = uStack_98 << 1;
          pauVar6 = (undefined1 (*) [16])afStack_cc;
          goto LAB_1082d7ac4;
        }
        uVar7 = (uint)param_2;
        pauVar6 = (undefined1 (*) [16])(ulong)(uVar7 & 1);
        param_3 = afStack_58;
        param_4 = &uStack_94;
        puVar3 = param_1;
        FUN_10837b26c();
        if ((int)puVar3 == 0) {
          if ((uVar7 >> 1 & 1) != 0) {
            pauVar6 = (undefined1 (*) [16])afStack_58;
            param_3 = afStack_cc;
            param_4 = (uint *)0x0;
            puVar3 = param_1;
            FUN_1083773e8();
            if (((int)puVar3 != 0) && (((uVar7 | afStack_cc[0]._0_1_) & 1) != 0)) {
              param_3 = (float *)0x0;
              param_4 = (uint *)0x0;
              goto LAB_1082d7b28;
            }
          }
          goto LAB_1082d7a68;
        }
        param_4 = (uint *)(ulong)uStack_98;
        param_3 = (float *)(ulong)uStack_94;
LAB_1082d7b28:
        pauVar6 = (undefined1 (*) [16])afStack_58;
        FUN_1082d7d3c(param_1);
      }
      else {
        pauVar6 = (undefined1 (*) [16])&uStack_90;
LAB_1082d7ac4:
        param_3 = (float *)(ulong)uStack_94;
        param_4 = (uint *)(ulong)uStack_98;
        FUN_1082d7c74(param_1);
      }
      pauVar4 = (undefined1 (*) [16])0x1;
      goto LAB_1082d7ad4;
    }
    pauVar6 = (undefined1 (*) [16])auStack_48;
    param_3 = afStack_40;
    func_0x0001082d8808();
  }
LAB_1082d7a68:
  pauVar4 = (undefined1 (*) [16])0x0;
  param_2 = unaff_x19;
LAB_1082d7ad4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  uStack_d8 = 0x1082d7b74;
  ppppuStack_e0 = (undefined8 ****)&stack0xfffffffffffffff0;
  if (((ulong)param_4 & 1) == 0) {
    bVar2 = false;
    if ((*(float *)*pauVar6 == *param_3) &&
       (bVar2 = false, !NAN(*(float *)(*pauVar6 + 4)) && !NAN(param_3[1]))) {
      bVar2 = *(float *)(*pauVar6 + 4) == param_3[1];
    }
    if (bVar2) {
      uStack_d8 = 0x1082d7b74;
      if (pauVar4[3][8] != '\x01') {
        func_0x00010827a038(pauVar4,1);
        *(undefined8 *)*pauVar4 = *(undefined8 *)*pauVar6;
      }
      return;
    }
    if (pauVar4[3][8] == '\x06') {
      if ((((uint)param_4 >> 2 & 1) != 0) &&
         ((*(float *)(*pauVar4 + 0xc) < *(float *)(*pauVar4 + 4) ||
          ((*(float *)(*pauVar4 + 0xc) == *(float *)(*pauVar4 + 4) &&
           (*(float *)(*pauVar4 + 8) < *(float *)*pauVar4)))))) {
        auVar10 = NEON_ext(*pauVar4,*pauVar4,8,1);
        *(long *)(*pauVar4 + 8) = auVar10._8_8_;
        *(long *)*pauVar4 = auVar10._0_8_;
      }
      return;
    }
    cVar5 = '\x06';
    puVar1 = &stack0xffffffffffffff00;
    param_2 = pauVar4;
    param_1 = param_4;
    pppppuVar8 = &ppppuStack_e0;
    uVar9 = 0x1082d7bc4;
  }
  else {
    cVar5 = '\0';
    pppppuVar8 = (undefined8 *****)&stack0xfffffffffffffff0;
    uVar9 = uStack_d8;
  }
  *(uint **)(puVar1 + -0x20) = param_1;
  *(undefined1 (**) [16])(puVar1 + -0x18) = param_2;
  *(undefined8 ******)(puVar1 + -0x10) = pppppuVar8;
  *(undefined8 *)(puVar1 + -8) = uVar9;
  if (cVar5 != '\x04' && pauVar4[3][8] == '\x04') {
    pauVar4[3][0xb] = (byte)(*pauVar4)[0xe] >> 1 & 1;
    FUN_10837ca38();
  }
  pauVar4[3][8] = cVar5;
  return;
}



/* Entry: 1082d7c44; end: 1082d7c73;  */

void FUN_1082d7c44(int param_1)

{
  uint *unaff_x19;
  undefined1 uStack_21;
  
  func_0x0001082d8814();
  FUN_10837ebec();
  if ((unaff_x19 != (uint *)0x0) && (param_1 != 0)) {
    *unaff_x19 = (uint)uStack_21;
  }
  return;
}



/* Entry: 1082d7c74; end: 1082d7d0b;  */

/* WARNING: Possible PIC construction at 0x0001082d7da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001082d7cd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082d7da8) */
/* WARNING: Removing unreachable block (ram,0x0001082d7cdc) */

void FUN_1082d7c74(float *param_1,float *param_2,ulong param_3,float *param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  ulong unaff_x19;
  float *unaff_x20;
  undefined1 *puVar4;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
  puVar4 = &stack0xfffffffffffffff0;
  if ((uint)param_2[0xc] < 2) {
    fVar5 = *param_2;
    fVar6 = param_2[2] - fVar5;
    if ((fVar6 == 0.0) || (param_2[3] - param_2[1] == 0.0)) {
      if ((param_5 & 1) == 0) {
        fVar7 = param_2[1];
        if ((fVar6 == 0.0) == (param_2[3] - fVar7 == 0.0)) {
          uStack_48 = CONCAT44(fVar7,fVar5);
          FUN_1082d801c(param_1,&uStack_48,param_5);
        }
        else {
          uStack_48 = CONCAT44(fVar7,fVar5);
          uStack_50 = CONCAT44(param_2[3],param_2[2]);
          uVar1 = uStack_50;
          if ((1 < ((int)param_4 + 1U >> 1 & 3)) && (((uint)param_5 >> 1 & 1) == 0)) {
            uStack_50 = uStack_48;
            uStack_48 = uVar1;
          }
          func_0x0001082d8808(param_1,&uStack_48,&uStack_50);
        }
        return;
      }
      cVar3 = '\0';
      puVar2 = (undefined8 *)register0x00000008;
      param_4 = unaff_x20;
      puVar4 = unaff_x29;
    }
    else {
      if (*(char *)(param_1 + 0xe) == '\x02') {
        if (((uint)param_5 >> 2 & 1) == 0) {
          return;
        }
        fVar5 = *param_1;
        if (param_1[2] < fVar5) {
          *param_1 = param_1[2];
          param_1[2] = fVar5;
        }
        fVar5 = param_1[1];
        if (param_1[3] < fVar5) {
          param_1[1] = param_1[3];
          param_1[3] = fVar5;
        }
        return;
      }
      cVar3 = '\x02';
      unaff_x30 = 0x1082d7da8;
      puVar2 = &uStack_50;
      unaff_x19 = param_5;
      param_4 = param_1;
      puVar4 = &stack0xfffffffffffffff0;
    }
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\x03') {
      return;
    }
    cVar3 = '\x03';
    unaff_x30 = 0x1082d7cdc;
    unaff_x19 = param_3;
  }
  *(float **)((long)puVar2 + -0x20) = param_4;
  *(ulong *)((long)puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)((long)puVar2 + -0x10) = puVar4;
  *(undefined8 *)((long)puVar2 + -8) = unaff_x30;
  if (cVar3 != '\x04' && *(char *)(param_1 + 0xe) == '\x04') {
    *(byte *)((long)param_1 + 0x3b) = *(byte *)((long)param_1 + 0xe) >> 1 & 1;
    FUN_10837ca38(param_1,cVar3,param_3);
  }
  *(char *)(param_1 + 0xe) = cVar3;
  return;
}



/* Entry: 1082d7d0c; end: 1082d7d3b;  */

void FUN_1082d7d0c(int param_1)

{
  uint *unaff_x19;
  undefined1 uStack_21;
  
  func_0x0001082d8814();
  FUN_1082d86c0();
  if ((unaff_x19 != (uint *)0x0) && (param_1 != 0)) {
    *unaff_x19 = (uint)uStack_21;
  }
  return;
}



/* Entry: 1082d7d3c; end: 1082d7e7f;  */

/* WARNING: Possible PIC construction at 0x0001082d7da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082d7da8) */

void FUN_1082d7d3c(float *param_1,float *param_2,undefined8 param_3,uint param_4,ulong param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulong unaff_x19;
  float *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = &stack0xfffffffffffffff0;
  fVar4 = *param_2;
  fVar5 = param_2[2] - fVar4;
  if ((fVar5 == 0.0) || (param_2[3] - param_2[1] == 0.0)) {
    if ((param_5 & 1) == 0) {
      fVar6 = param_2[1];
      if ((fVar5 == 0.0) == (param_2[3] - fVar6 == 0.0)) {
        uStack_48 = CONCAT44(fVar6,fVar4);
        FUN_1082d801c(param_1,&uStack_48,param_5);
      }
      else {
        uStack_48 = CONCAT44(fVar6,fVar4);
        uStack_50 = CONCAT44(param_2[3],param_2[2]);
        uVar2 = uStack_50;
        if ((1 < param_4) && (((uint)param_5 >> 1 & 1) == 0)) {
          uStack_50 = uStack_48;
          uStack_48 = uVar2;
        }
        func_0x0001082d8808(param_1,&uStack_48,&uStack_50);
      }
      return;
    }
    cVar3 = '\0';
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\x02') {
      if (((uint)param_5 >> 2 & 1) == 0) {
        return;
      }
      fVar4 = *param_1;
      if (param_1[2] < fVar4) {
        *param_1 = param_1[2];
        param_1[2] = fVar4;
      }
      fVar4 = param_1[1];
      if (param_1[3] < fVar4) {
        param_1[1] = param_1[3];
        param_1[3] = fVar4;
      }
      return;
    }
    cVar3 = '\x02';
    unaff_x30 = 0x1082d7da8;
    register0x00000008 = (BADSPACEBASE *)&uStack_50;
    unaff_x19 = param_5;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (cVar3 != '\x04' && *(char *)(param_1 + 0xe) == '\x04') {
    *(byte *)((long)param_1 + 0x3b) = *(byte *)((long)param_1 + 0xe) >> 1 & 1;
    FUN_10837ca38();
  }
  *(char *)(param_1 + 0xe) = cVar3;
  return;
}



/* Entry: 1082d7e80; end: 1082d801b;  */

byte FUN_1082d7e80(float *param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  float extraout_s1;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 auStack_80 [7];
  undefined8 uStack_48;
  
  bVar3 = *(byte *)(param_1 + 6);
  fVar6 = *param_1;
  fVar8 = param_1[2];
  if (((fVar8 <= fVar6) || (param_1[3] <= param_1[1])) || (fVar4 = param_1[5], fVar4 == 0.0)) {
    if (((param_2 & 1) == 0) && (param_1[5] == 0.0)) {
      fVar7 = param_1[1];
      fVar9 = param_1[3];
      auVar5 = NEON_fmov(0x3fe0000000000000,8);
      fVar10 = (float)(((double)fVar6 + (double)fVar8) * auVar5._0_8_);
      fVar11 = (float)(((double)fVar7 + (double)fVar9) * auVar5._8_8_);
      auStack_80[0] = CONCAT44(fVar11,fVar10);
      fVar4 = param_1[4] * 0.017453292;
      ___sincosf_stret();
      uStack_48 = CONCAT44(fVar11 + fVar4 * (fVar9 - fVar7) * 0.5,
                           fVar10 + extraout_s1 * (fVar8 - fVar6) * 0.5);
      if (bVar3 == 0) {
        FUN_1082d801c(param_1,&uStack_48,param_2);
      }
      else {
        func_0x0001082d7b74(param_1,auStack_80,&uStack_48,param_2);
      }
    }
    else {
      func_0x0001082d87fc();
    }
  }
  else if ((((param_2 & 1) == 0) && ((((uint)param_2 >> 1 & 1) == 0 || ((bVar3 & 1) != 0)))) ||
          (ABS(fVar4) < 360.0)) {
    if (((uint)param_2 >> 2 & 1) != 0) {
      fVar6 = param_1[4];
      if (fVar4 < 0.0) {
        fVar6 = fVar4 + fVar6;
        param_1[4] = fVar6;
        param_1[5] = -fVar4;
      }
      bVar1 = false;
      bVar2 = false;
      if (0.0 <= fVar6) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar6)) {
          bVar1 = fVar6 < 360.0;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        _fmodf();
        param_1[4] = fVar6;
      }
    }
  }
  else {
    FUN_1081779a8(auStack_80,param_1);
    FUN_1082d7c74(param_1,auStack_80,0,0,param_2);
    bVar3 = 1;
  }
  return bVar3;
}



/* Entry: 1082d801c; end: 1082d806f;  */

/* WARNING: Possible PIC construction at 0x0001082d8048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082d804c) */

void FUN_1082d801c(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  char cVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((param_3 & 1) == 0) {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      return;
    }
    cVar2 = '\x01';
    unaff_x30 = 0x1082d804c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  else {
    cVar2 = '\0';
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (cVar2 != '\x04' && *(char *)(param_1 + 0x38) == '\x04') {
    *(byte *)(param_1 + 0x3b) = *(byte *)(param_1 + 0xe) >> 1 & 1;
    FUN_10837ca38();
  }
  *(char *)(param_1 + 0x38) = cVar2;
  return;
}



/* Entry: 1082d8070; end: 1082d80a3;  */

void FUN_1082d8070(float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (param_1[2] < fVar1) {
    *param_1 = param_1[2];
    param_1[2] = fVar1;
  }
  fVar1 = param_1[1];
  if (param_1[3] < fVar1) {
    param_1[1] = param_1[3];
    param_1[3] = fVar1;
  }
  return;
}



/* Entry: 1082d80a4; end: 1082d817b;  */

void FUN_1082d80a4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  switch(*(undefined1 *)(param_1 + 0x38)) {
  case 1:
    FUN_1082d801c(param_1,param_1,param_2);
    break;
  case 2:
    func_0x0001082d87c0(0);
    FUN_1082d7d3c();
    break;
  case 3:
    func_0x0001082d87c0(0);
    FUN_1082d7c74();
    break;
  case 4:
    func_0x0001082d79f4(param_1,param_2);
    break;
  case 5:
    FUN_1082d7e80(param_1,param_2);
  case 0:
    break;
  case 6:
    func_0x0001082d7b74(param_1,param_1,param_1 + 8,param_2);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082d817c);
    (*pcVar1)();
  }
  if ((((uint)param_2 >> 1 & 1) != 0) || ((*(byte *)(param_1 + 0x38) & 0xfe) != 2)) {
    *(undefined2 *)(param_1 + 0x39) = 0x100;
  }
  return;
}



/* Entry: 1082d817c; end: 1082d8287;  */

void FUN_1082d817c(long param_1)

{
  code *pcVar1;
  long extraout_x8;
  
  if (*(byte *)(param_1 + 0x38) < 7) {
    func_0x0001082d87dc();
                    /* WARNING: Could not recover jumptable at 0x0001082d81b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df16466)[extraout_x8] * 4 + 0x1082d81bc))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082d8274);
  (*pcVar1)();
}



/* Entry: 1082d8288; end: 1082d83b7;  */

float * FUN_1082d8288(float *param_1,float *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float *unaff_x19;
  long unaff_x20;
  int iVar15;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  long lStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  long lStack_f8;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  int iStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined8 uStack_c4;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 in_stack_ffffffffffffff98;
  
  func_0x0001082d87dc();
  if (*(char *)(param_1 + 0xe) == '\x04') {
LAB_1082d8340:
    func_0x0001082d87a0();
    if (param_1 != param_2) {
      piVar7 = *(int **)param_2;
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_108376bdc(param_1);
      func_0x00010837cd88();
      FUN_108376b50();
    }
    return param_1;
  }
  if (*(char *)(param_1 + 0xe) != '\x05') {
    param_1 = unaff_x19;
    FUN_108376d4c();
    bVar1 = *(byte *)((long)unaff_x19 + 0xe);
    *(byte *)((long)unaff_x19 + 0xe) = bVar1 & 0xfc | 1;
    if (*(char *)(unaff_x20 + 0x3b) == '\x01') {
      *(byte *)((long)unaff_x19 + 0xe) = bVar1 | 3;
    }
    switch(*(undefined1 *)(unaff_x20 + 0x38)) {
    case 0:
      return param_1;
    case 1:
      func_0x0001082d87a0();
      FUN_10817abbc();
      func_0x0001082d87a0();
      break;
    case 2:
      uVar10 = (uint)*(byte *)(unaff_x20 + 0x39);
      uVar9 = *(byte *)(unaff_x20 + 0x3a) ^ 1;
      func_0x0001082d87a0();
      uVar8 = (undefined1)uVar9;
      if (*(char *)(*(long *)param_1 + 0xc3) != '\0') {
        uVar8 = 2;
      }
      *(undefined1 *)((long)param_1 + 0xd) = uVar8;
      uVar8 = *(undefined1 *)((long)param_1 + 0xd);
      FUN_10837bf90(&stack0xffffffffffffffa0,param_1,param_2);
      FUN_10837ded0(&stack0xffffffffffffff98,param_1,5,4,0);
      iVar11 = 3;
      if (uVar9 == 0) {
        iVar11 = 1;
      }
      lStack_90 = *(long *)param_2;
      lStack_80 = *(long *)(param_2 + 2);
      uStack_88 = CONCAT44((int)((ulong)lStack_90 >> 0x20),(int)lStack_80);
      uStack_78 = CONCAT44((int)((ulong)lStack_80 >> 0x20),(int)lStack_90);
      func_0x00010837cd20();
      func_0x00010837cd94(0,in_stack_ffffffffffffff98);
      func_0x00010837cf18(uVar10 & 3);
      func_0x00010837cb94();
      func_0x00010837cf18(iVar11 + uVar10 & 3);
      func_0x00010837cb94();
      uVar9 = iVar11 + uVar10 + iVar11;
      func_0x00010837cf18(uVar9 & 3);
      func_0x00010837cb94();
      func_0x00010837cf18(uVar9 + iVar11 & 3);
      func_0x00010837cc30();
      func_0x00010837cb1c();
      FUN_10837c078(&stack0xffffffffffffffa0);
      *(undefined1 *)((long)param_1 + 0xd) = uVar8;
      return param_1;
    case 3:
      uVar10 = (uint)*(byte *)(unaff_x20 + 0x39);
      uVar9 = *(byte *)(unaff_x20 + 0x3a) ^ 1;
      func_0x0001082d87a0();
      if ((uint)param_2[0xc] < 2) {
        func_0x00010837cf80();
        FUN_108377f20();
      }
      else if (param_2[0xc] == 2.8026e-45) {
        func_0x00010837cf80();
        FUN_108378418();
      }
      else {
        cVar3 = *(char *)(*(long *)param_1 + 0xc3);
        uVar12 = uVar9;
        if (cVar3 != '\0') {
          uVar12 = 2;
        }
        *(char *)((long)param_1 + 0xd) = (char)uVar12;
        func_0x00010837cde8(auStack_98);
        uVar12 = uVar9 == 0 ^ uVar10;
        bVar5 = (uVar12 & 1) != 0;
        uVar13 = 9;
        if (bVar5) {
          uVar13 = 10;
        }
        uVar14 = 0xc;
        if (bVar5) {
          uVar14 = 0xd;
        }
        FUN_108377c50(param_1,uVar14,uVar13,4);
        uStack_a0 = uVar10 & 7;
        bVar5 = uVar9 == 0;
        uStack_9c = 7;
        if (bVar5) {
          uStack_9c = 1;
        }
        fStack_108 = *param_2;
        fStack_104 = param_2[1];
        lStack_f8 = *(long *)(param_2 + 2);
        fStack_100 = (float)lStack_f8;
        fStack_d8 = fStack_100 - param_2[6];
        fStack_ec = (float)((ulong)lStack_f8 >> 0x20);
        uStack_c4 = NEON_rev64(CONCAT44(fStack_ec - (float)((ulong)*(long *)(param_2 + 8) >> 0x20),
                                        fStack_100 - (float)*(long *)(param_2 + 8)),4);
        fStack_ac = fStack_ec - param_2[0xb];
        fStack_e0 = fStack_108 + param_2[4];
        fStack_cc = fStack_104 + param_2[7];
        fStack_b8 = fStack_108 + param_2[10];
        fStack_a4 = fStack_104 + param_2[5];
        uVar2 = uVar10 >> 1;
        if (!bVar5) {
          uVar2 = uVar2 + 1;
        }
        iVar11 = 3;
        if (bVar5) {
          iVar11 = 1;
        }
        fStack_fc = fStack_104;
        fStack_f0 = fStack_108;
        uStack_e8 = uVar2 & 3;
        iStack_e4 = iVar11;
        fStack_dc = fStack_104;
        fStack_d4 = fStack_104;
        fStack_d0 = fStack_100;
        fStack_c8 = fStack_100;
        fStack_bc = fStack_ec;
        fStack_b4 = fStack_ec;
        fStack_b0 = fStack_108;
        fStack_a8 = fStack_108;
        func_0x00010837ccdc();
        if ((uVar12 & 1) == 0) {
          iVar15 = 3;
          uStack_e8 = uVar2 & 3;
          while( true ) {
            uStack_e8 = iVar11 + uStack_e8 & 3;
            func_0x00010837cb5c();
            if (iVar15 == 0) break;
            func_0x00010837cba4();
            func_0x00010837cb5c();
            func_0x00010837cc60();
            iVar15 = iVar15 + -1;
            iVar11 = iStack_e4;
          }
          func_0x00010837cba4();
        }
        else {
          iVar11 = 4;
          do {
            func_0x00010837cb5c();
            func_0x00010837cc60();
            uStack_e8 = iStack_e4 + uStack_e8 & 3;
            func_0x00010837cb5c();
            func_0x00010837cba4();
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        func_0x00010837cc30();
        if (cVar3 == '\0') {
          func_0x00010837ca9c(&lStack_110);
          *(undefined1 *)(lStack_110 + 0xc0) = 2;
          *(bool *)(lStack_110 + 0xc6) = uVar9 == 1;
          *(byte *)(lStack_110 + 0xc2) = (byte)uVar10 & 7;
        }
        func_0x00010837cdf4();
      }
      return param_1;
    case 4:
      goto LAB_1082d8340;
    case 5:
      goto code_r0x0001082d82b4;
    case 6:
      func_0x0001082d87a0();
      FUN_10817abbc();
      param_2 = (float *)(unaff_x20 + 8);
      param_1 = unaff_x19;
      break;
    default:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1082d83b8);
      (*pcVar4)();
    }
    func_0x00010837cf24(*param_2,param_2[1]);
    FUN_108377cd4();
    puVar6 = (undefined4 *)&stack0xffffffffffffffc8;
    func_0x00010837ca9c();
    func_0x00010837cee4();
    FUN_10837e8b4();
    *puVar6 = unaff_s9;
    puVar6[1] = unaff_s8;
    func_0x00010837cb1c();
    return param_1;
  }
code_r0x0001082d82b4:
  func_0x0001082d87a0();
  FUN_10837b4c0();
  if (*(char *)(unaff_x20 + 0x3b) != '\x01') {
    return param_1;
  }
  *(byte *)((long)unaff_x19 + 0xe) = *(byte *)((long)unaff_x19 + 0xe) ^ 2;
  return param_1;
}



/* Entry: 1082d83b8; end: 1082d83fb;  */

float * FUN_1082d83b8(float *param_1,float *param_2)

{
  bool bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  ulong *puVar15;
  undefined8 extraout_x8;
  float *extraout_x8_00;
  long lVar16;
  float *extraout_x8_01;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  ulong unaff_d8;
  float unaff_s9;
  uint uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float *pfStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined2 uStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float afStack_118 [2];
  undefined8 uStack_110;
  float afStack_108 [4];
  float fStack_f8;
  float afStack_f4 [15];
  undefined8 uStack_b8;
  
  uVar10 = *(char *)(param_1 + 0xe) == '\x06';
  switch(*(char *)(param_1 + 0xe)) {
  case '\0':
  case '\x01':
  case '\x05':
  case '\x06':
    return (float *)0x0;
  case '\x02':
    if (((*param_1 <= *param_2) && (*param_2 < param_1[2])) && (param_1[1] <= param_2[1])) {
      return (float *)(ulong)(param_2[1] < param_1[3]);
    }
    return (float *)0x0;
  case '\x03':
    pfVar13 = param_1;
    FUN_108188ea8(*param_2,param_2[1]);
    if ((int)pfVar13 == 0) {
      return pfVar13;
    }
    fVar24 = *param_2;
    fVar31 = param_2[1];
    fVar36 = *param_1;
    if (param_1[0xc] == 2.8026e-45) {
      lVar17 = 0;
      fVar32 = (fVar36 + param_1[2]) * 0.5;
      fVar34 = (param_1[1] + param_1[3]) * 0.5;
    }
    else {
      fVar32 = fVar36 + param_1[4];
      if ((fVar32 <= fVar24) || (fVar34 = param_1[1] + param_1[5], fVar34 <= fVar31)) {
        fVar32 = fVar36 + param_1[10];
        if ((fVar32 <= fVar24) || (fVar34 = param_1[3] - param_1[0xb], fVar31 <= fVar34)) {
          fVar32 = param_1[2] - param_1[6];
          if ((fVar24 <= fVar32) || (fVar34 = param_1[1] + param_1[7], fVar34 <= fVar31)) {
            fVar32 = param_1[2] - param_1[8];
            if ((fVar24 <= fVar32) || (fVar34 = param_1[3] - param_1[9], fVar31 <= fVar34)) {
              return (float *)0x1;
            }
            lVar17 = 2;
          }
          else {
            lVar17 = 1;
          }
        }
        else {
          lVar17 = 3;
        }
      }
      else {
        lVar17 = 0;
      }
    }
    fVar33 = param_1[lVar17 * 2 + 4];
    fVar36 = param_1[lVar17 * 2 + 5];
    return (float *)(ulong)((fVar31 - fVar34) * (fVar31 - fVar34) * fVar33 * fVar33 +
                            fVar36 * fVar36 * (fVar24 - fVar32) * (fVar24 - fVar32) <=
                           fVar36 * fVar33 * fVar36 * fVar33);
  case '\x04':
    goto code_r0x0001082d83e8;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1082d83fc);
    (*pcVar3)();
  }
code_r0x00010837aa54:
  if ((*(byte *)((long)param_1 + 0xe) & 1) != 0) {
    uVar18 = uVar18 & 1;
  }
  if (uVar18 == 0) {
    uVar10 = uStack_19c == 1;
    if ((int)uStack_19c < 2) {
      uVar10 = uStack_19c == 0;
      uVar18 = (uint)!(bool)uVar10;
    }
    else {
      uVar18 = uStack_19c;
      if (((uStack_19c & 1) == 0) &&
         (uVar10 = (*(byte *)((long)param_1 + 0xe) & 3 | 2) == 3, !(bool)uVar10)) {
        uStack_198 = *(undefined8 *)(*(long *)param_1 + 0x28);
        uStack_190 = *(undefined8 *)(*(long *)param_1 + 0x40);
        func_0x00010837cb00();
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 1;
        uStack_160 = CONCAT44(uStack_160._4_4_,8);
        lStack_158 = 0;
        uStack_150 = 0;
        pfStack_180 = extraout_x8_01;
        do {
          iVar21 = uStack_150._4_4_;
          func_0x00010837ce08();
          fVar32 = fStack_128;
          fVar36 = fStack_130;
          fVar31 = fStack_138;
          bVar4 = false;
          switch((int)pfVar13) {
          case 1:
            if (((fStack_134 - fVar24) * (fStack_12c - fVar24) <= 0.0) &&
               ((fStack_138 - unaff_s9) * (fStack_130 - unaff_s9) <= 0.0)) {
              if (ABS((fStack_12c - fStack_134) * (unaff_s9 - fStack_138) -
                      (fVar24 - fStack_134) * (fStack_130 - fStack_138)) <= 0.00024414062) {
                uStack_110 = CONCAT44(fStack_12c - fStack_134,fStack_130 - fStack_138);
                pfVar13 = (float *)&uStack_160;
                FUN_1082d2254(pfVar13,&uStack_110);
              }
            }
            break;
          case 2:
            if ((((fStack_134 - fVar24) * (fStack_12c - fVar24) <= 0.0) ||
                ((fStack_12c - fVar24) * (fStack_124 - fVar24) <= 0.0)) &&
               (((fStack_138 - unaff_s9) * (fStack_130 - unaff_s9) <= 0.0 ||
                ((fStack_130 - unaff_s9) * (fStack_128 - unaff_s9) <= 0.0)))) {
              pfVar13 = (float *)&uStack_110;
              FUN_108351300(fStack_134 + fStack_12c * -2.0 + fStack_124,
                            (fStack_12c - fStack_134) + (fStack_12c - fStack_134));
              uVar18 = (uint)pfVar13;
              for (lVar17 = 0; (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)) << 2 != lVar17;
                  lVar17 = lVar17 + 4) {
                fVar34 = *(float *)((long)afStack_108 + lVar17 + -8);
                fVar33 = ABS(unaff_s9 -
                             (fVar31 + fVar34 * ((fVar36 - fVar31) + (fVar36 - fVar31) +
                                                fVar34 * (fVar31 + fVar32 + fVar36 * -2.0))));
                if (fVar33 <= 0.00024414062) {
                  pfVar13 = &fStack_138;
                  func_0x0001083514d0();
                  afStack_118[1] = fVar33;
                  afStack_118[0] = fVar34;
                  func_0x00010837cdc8();
                }
              }
            }
            break;
          case 3:
            fVar34 = *pfStack_180;
            if ((((fStack_134 - fVar24) * (fStack_12c - fVar24) <= 0.0) ||
                ((fStack_12c - fVar24) * (fStack_124 - fVar24) <= 0.0)) &&
               (((fStack_138 - unaff_s9) * (fStack_130 - unaff_s9) <= 0.0 ||
                ((fStack_130 - unaff_s9) * (fStack_128 - unaff_s9) <= 0.0)))) {
              fVar35 = fVar24 + -(fVar34 * fVar24) + fVar34 * fStack_12c;
              fVar33 = fVar35 - fStack_134;
              pfVar13 = afStack_118;
              FUN_108351300(fStack_134 + fVar35 * -2.0 + fStack_124,fVar33 + fVar33);
              lVar17 = 0;
              fVar33 = fVar34 + -1.0 + fVar34 + -1.0;
              bVar4 = false;
              bVar5 = true;
              bVar6 = false;
              if (!NAN(fVar34 - fVar34)) {
                bVar4 = false;
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar34)) {
                  bVar4 = fVar34 < 0.0;
                  bVar5 = fVar34 == 0.0;
                  bVar6 = false;
                }
              }
              fVar35 = fVar34;
              if (bVar5 || bVar4 != bVar6) {
                fVar35 = 1.0;
              }
              uVar18 = (uint)pfVar13;
              fVar25 = fVar34 * fVar36 - fVar31;
              for (; (ulong)(uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU)) << 2 != lVar17;
                  lVar17 = lVar17 + 4) {
                fVar26 = *(float *)((long)afStack_118 + lVar17);
                if (ABS(unaff_s9 -
                        (fVar31 + fVar26 * (fVar25 + fVar25 +
                                           fVar26 * (fVar31 + fVar32 + fVar34 * fVar36 * -2.0))) /
                        (fVar26 * (fVar33 + fVar26 * -fVar33) + 1.0)) <= 0.00024414062) {
                  uVar30 = CONCAT44(fStack_134,fStack_138);
                  uStack_110 = uVar30;
                  fStack_f8 = fVar35;
                  FUN_108352dd0(&uStack_110);
                  fStack_140 = fVar26;
                  uStack_13c = (undefined4)uVar30;
                  pfVar13 = (float *)&uStack_160;
                  FUN_1082d2254(pfVar13,&fStack_140);
                }
              }
            }
            break;
          case 4:
            if (((((fStack_134 - fVar24) * (fStack_12c - fVar24) <= 0.0) ||
                 ((fStack_12c - fVar24) * (fStack_124 - fVar24) <= 0.0)) ||
                ((fStack_124 - fVar24) * (fStack_11c - fVar24) <= 0.0)) &&
               ((((fStack_138 - unaff_s9) * (fStack_130 - unaff_s9) <= 0.0 ||
                 ((fStack_130 - unaff_s9) * (fStack_128 - unaff_s9) <= 0.0)) ||
                ((fStack_128 - unaff_s9) * (fStack_120 - unaff_s9) <= 0.0)))) {
              pfVar14 = (float *)&uStack_110;
              func_0x00010837cd9c();
              iVar12 = (int)pfVar13;
              for (lVar17 = 0; lVar17 <= iVar12; lVar17 = lVar17 + 1) {
                func_0x00010837cbb0();
                FUN_108346090();
                fVar31 = fStack_140;
                if ((int)pfVar13 != 0) {
                  fVar36 = *pfVar14;
                  FUN_10837c450(fVar36,pfVar14[2],pfVar14[4],pfVar14[6],fStack_140);
                  if (ABS(unaff_s9 - fVar36) <= 0.00024414062) {
                    pfVar13 = pfVar14;
                    FUN_1083518ac(fVar31,pfVar14,0,afStack_118,0);
                    func_0x00010837cdc8();
                  }
                }
                pfVar14 = pfVar14 + 6;
              }
            }
            break;
          default:
            goto code_r0x00010837ae9c;
          case 6:
            bVar4 = true;
            goto code_r0x00010837ae9c;
          }
          bVar4 = false;
code_r0x00010837ae9c:
          if (iVar21 < uStack_150._4_4_) {
            if (uStack_150._4_4_ < 1) goto code_r0x00010837afe8;
            pfVar14 = (float *)(lStack_158 + (ulong)(uStack_150._4_4_ - 1) * 8);
            fVar31 = *pfVar14;
            fVar36 = pfVar14[1];
            if (ABS(fVar36 * fVar36 + fVar31 * fVar31) <= 0.00024414062) {
              func_0x00010837cdbc();
            }
            else {
              pfVar14 = (float *)(lStack_158 + 4);
              for (uVar19 = 0; uStack_150._4_4_ - 1 != uVar19; uVar19 = uVar19 + 1) {
                if (((ABS(*pfVar14 * -fVar31 + fVar36 * pfVar14[-1]) <= 0.00024414062) &&
                    (fVar31 * pfVar14[-1] <= 0.0)) && (fVar36 * *pfVar14 <= 0.0)) {
                  func_0x00010837cdbc();
                  pfVar13 = (float *)&uStack_160;
                  FUN_10840f328(pfVar13,uVar19);
                  break;
                }
                pfVar14 = pfVar14 + 2;
              }
            }
          }
        } while (!bVar4);
        uVar10 = uStack_150._4_4_ == 0;
        uVar18 = (uint)!(bool)uVar10 ^ (bVar2 & 2) >> 1;
        _free(lStack_158);
        goto LAB_10837aab8;
      }
    }
    uVar18 = uVar18 ^ (bVar2 & 2) >> 1;
  }
  else {
    uVar10 = (bVar2 & 2) == 0;
    uVar18 = (uint)(byte)uVar10;
  }
  goto LAB_10837aab8;
code_r0x0001082d83e8:
  func_0x00010837caf0(*param_2,param_2[1]);
  bVar2 = *(byte *)((long)param_1 + 0xe);
  uVar18 = bVar2 >> 1 & 1;
  uStack_b8 = extraout_x8;
  if (*(int *)(*(long *)param_1 + 0x48) != 0) {
    func_0x00010837cf24();
    pfVar13 = param_1;
    func_0x0001083773e0();
    fVar31 = pfVar13[1];
    fVar24 = pfVar13[2];
    uVar19 = (ulong)(uint)*pfVar13;
    bVar4 = false;
    bVar5 = true;
    if (*pfVar13 <= unaff_s9) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(unaff_s9) && !NAN(fVar24)) {
        bVar4 = unaff_s9 == fVar24;
        bVar5 = fVar24 <= unaff_s9;
      }
    }
    uVar10 = false;
    bVar6 = true;
    fVar24 = (float)unaff_d8;
    if (!bVar5 || bVar4) {
      uVar10 = false;
      bVar6 = true;
      if (!NAN(fVar31) && !NAN(fVar24)) {
        uVar10 = fVar31 == fVar24;
        bVar6 = fVar24 <= fVar31;
      }
    }
    if (!bVar6 || (bool)uVar10) {
      fVar31 = pfVar13[3];
      uVar27 = (ulong)(uint)fVar31;
      uVar10 = fVar24 == fVar31;
      if (fVar24 <= fVar31) {
        uVar18 = 0;
        uStack_198 = *(undefined8 *)(*(long *)param_1 + 0x28);
        uStack_190 = *(undefined8 *)(*(long *)param_1 + 0x40);
        func_0x00010837cb00();
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_168 = 1;
        uStack_19c = 0;
        pfStack_180 = extraout_x8_00;
        do {
          func_0x00010837ce08();
          iVar12 = (int)pfVar13 + -1;
          cVar8 = SBORROW4(iVar12,5);
          cVar9 = (int)pfVar13 + -6 < 0;
          bVar4 = iVar12 == 5;
          iVar21 = -1;
          switch(iVar12) {
          case 0:
            func_0x00010837cd10();
            fVar34 = (float)uVar19;
            fVar32 = (float)uVar27;
            fVar31 = fVar34;
            fVar36 = fVar32;
            if (bVar4 || cVar9 != cVar8) {
              iVar21 = 1;
              fVar31 = fVar32;
              fVar36 = fVar34;
            }
            bVar4 = false;
            bVar5 = false;
            bVar6 = false;
            if (fVar36 <= fVar24) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar24) && !NAN(fVar31)) {
                bVar4 = fVar24 < fVar31;
                bVar5 = fVar24 == fVar31;
                bVar6 = false;
              }
            }
            if (!bVar5 && bVar4 == bVar6) goto code_r0x00010837a9a4;
            if (fVar34 == fVar32) {
              bVar4 = true;
              if (((fStack_138 - unaff_s9) * (fStack_130 - unaff_s9) <= 0.0) &&
                 (bVar4 = false, !NAN(unaff_s9) && !NAN(fStack_130))) {
                bVar4 = unaff_s9 == fStack_130;
              }
              if (!bVar4) goto code_r0x00010837aa20;
code_r0x00010837a99c:
              if (fVar24 == fVar31) {
code_r0x00010837a9a4:
                iVar12 = 0;
              }
              else {
                fVar31 = -((unaff_s9 - fStack_138) * (fVar32 - fVar34)) +
                         (fVar24 - fVar34) * (fStack_130 - fStack_138);
                if (fVar31 == 0.0) {
                  bVar4 = false;
                  if ((unaff_s9 == fStack_130) && (bVar4 = false, !NAN(fVar24) && !NAN(fVar32))) {
                    bVar4 = fVar24 == fVar32;
                  }
                  if (!bVar4) goto code_r0x00010837aa20;
                  goto code_r0x00010837a9a4;
                }
                bVar4 = false;
                bVar5 = true;
                bVar6 = false;
                if (fVar34 <= fVar32) {
                  bVar4 = false;
                  bVar5 = false;
                  bVar6 = true;
                  if (!NAN(fVar31)) {
                    bVar4 = fVar31 < 0.0;
                    bVar5 = fVar31 == 0.0;
                    bVar6 = false;
                  }
                }
                bVar1 = fVar32 < fVar34;
                if (0.0 <= fVar31) {
                  bVar1 = !bVar5 && bVar4 == bVar6;
                }
                iVar12 = 0;
                if (!bVar1) {
                  iVar12 = iVar21;
                }
              }
            }
            else {
              bVar4 = false;
              if ((unaff_s9 == fStack_138) && (bVar4 = false, !NAN(fVar24) && !NAN(fVar34))) {
                bVar4 = fVar24 == fVar34;
              }
              if (!bVar4) goto code_r0x00010837a99c;
code_r0x00010837aa20:
              uStack_19c = uStack_19c + 1;
              iVar12 = 0;
            }
            uVar18 = iVar12 + uVar18;
            break;
          case 1:
            func_0x00010837cd10();
            if (bVar4) {
code_r0x00010837a900:
              iVar21 = 0;
              pfVar13 = &fStack_138;
              pfVar14 = &fStack_128;
            }
            else {
              uVar19 = (ulong)(uint)fStack_124;
              if (!(bool)cVar9) {
                if ((float)uVar27 < fStack_124) goto code_r0x00010837a9b4;
                goto code_r0x00010837a900;
              }
              if ((float)uVar27 <= fStack_124) goto code_r0x00010837a900;
code_r0x00010837a9b4:
              pfVar13 = (float *)&uStack_110;
              pfVar14 = &fStack_138;
              FUN_1083516a8(pfVar14,&uStack_110);
              iVar21 = (int)pfVar14;
              pfVar14 = afStack_108 + 2;
            }
            func_0x00010837cc84(pfVar13,&uStack_19c);
            FUN_10837c1a8();
            iVar12 = (int)pfVar13;
            if (iVar21 != 0) {
              func_0x00010837cc84(pfVar14,&uStack_19c);
              FUN_10837c1a8();
              iVar12 = (int)pfVar14 + iVar12;
              pfVar13 = pfVar14;
            }
            uVar18 = iVar12 + uVar18;
            break;
          case 2:
            fVar31 = *pfStack_180;
            lStack_158 = CONCAT44(fStack_12c,fStack_130);
            uVar19 = CONCAT44(fStack_134,fStack_138);
            uStack_150 = CONCAT44(fStack_124,fStack_128);
            uStack_160 = uVar19;
            func_0x00010837ce74();
            bVar4 = false;
            bVar5 = true;
            bVar6 = false;
            if (!(bool)cVar8) {
              bVar4 = false;
              bVar5 = false;
              bVar6 = true;
              if (!NAN(fVar31)) {
                bVar4 = fVar31 < 0.0;
                bVar5 = fVar31 == 0.0;
                bVar6 = false;
              }
            }
            fStack_148 = fVar31;
            if (bVar5 || bVar4 != bVar6) {
              fStack_148 = 1.0;
            }
            uVar27 = (ulong)(uint)fStack_148;
            func_0x00010837cd10();
            if (bVar5) {
code_r0x00010837a76c:
              uVar22 = 1;
              pfVar13 = (float *)&uStack_160;
            }
            else {
              uVar19 = (ulong)(uint)fStack_124;
              if (!bVar4) {
                if ((float)uVar27 < fStack_124) goto code_r0x00010837a970;
                goto code_r0x00010837a76c;
              }
              if ((float)uVar27 <= fStack_124) goto code_r0x00010837a76c;
code_r0x00010837a970:
              puVar15 = &uStack_160;
              FUN_1083533a0(puVar15,&uStack_110);
              uVar22 = (uint)puVar15 ^ 1;
              pfVar13 = (float *)&uStack_110;
              if ((uint)puVar15 == 0) {
                pfVar13 = (float *)&uStack_160;
              }
            }
            func_0x00010837cc84(pfVar13,&uStack_19c);
            FUN_10837c2e0();
            iVar21 = (int)pfVar13;
            if ((uVar22 & 1) == 0) {
              pfVar13 = afStack_108 + 5;
              func_0x00010837cc84(pfVar13,&uStack_19c);
              FUN_10837c2e0();
              iVar21 = (int)pfVar13 + iVar21;
            }
            uVar18 = iVar21 + uVar18;
            break;
          case 3:
            puVar20 = &uStack_110;
            func_0x00010837cd9c();
            iVar12 = 0;
            iVar11 = (int)pfVar13;
            uVar22 = uStack_19c;
            for (lVar17 = 0; lVar17 <= iVar11; lVar17 = lVar17 + 1) {
              pfVar14 = (float *)((long)&uStack_110 + lVar17 * 6 * 4);
              fVar36 = afStack_108[lVar17 * 6 + -1];
              uVar19 = (ulong)(uint)fVar36;
              fVar32 = afStack_108[lVar17 * 6 + 5];
              fVar31 = fVar36;
              if (fVar36 <= fVar32) {
                fVar31 = fVar32;
              }
              uVar27 = (ulong)(uint)fVar31;
              iVar23 = iVar21;
              fVar34 = fVar32;
              if (fVar36 <= fVar32) {
                iVar23 = 1;
                fVar34 = fVar36;
              }
              bVar4 = false;
              bVar5 = false;
              bVar6 = false;
              if (fVar34 <= fVar24) {
                bVar4 = false;
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar24) && !NAN(fVar31)) {
                  bVar4 = fVar24 < fVar31;
                  bVar5 = fVar24 == fVar31;
                  bVar6 = false;
                }
              }
              if (!bVar5 && bVar4 == bVar6) goto code_r0x00010837a868;
              fVar33 = *pfVar14;
              uVar28 = (ulong)(uint)fVar33;
              fVar34 = afStack_108[lVar17 * 6 + 4];
              if (fVar36 == fVar32) {
                fVar36 = (fVar33 - unaff_s9) * (fVar34 - unaff_s9);
                uVar19 = (ulong)(uint)fVar36;
                bVar4 = true;
                if ((fVar36 <= 0.0) && (bVar4 = false, !NAN(unaff_s9) && !NAN(fVar34))) {
                  bVar4 = unaff_s9 == fVar34;
                }
                if (!bVar4) goto code_r0x00010837a8bc;
code_r0x00010837a828:
                if (fVar24 == fVar31) {
code_r0x00010837a868:
                  iVar23 = 0;
                }
                else {
                  lVar16 = 8;
                  uVar27 = uVar28;
                  uVar19 = uVar28;
                  while( true ) {
                    fVar31 = (float)uVar27;
                    if (lVar16 == 0x20) break;
                    fVar36 = *(float *)((long)puVar20 + lVar16);
                    uVar29 = (ulong)(uint)fVar36;
                    if ((float)uVar19 <= fVar36) {
                      uVar29 = uVar19;
                    }
                    uVar19 = (ulong)(uint)fVar36;
                    if (fVar36 <= fVar31) {
                      uVar19 = uVar27;
                    }
                    lVar16 = lVar16 + 8;
                    uVar27 = uVar19;
                    uVar19 = uVar29;
                  }
                  if (unaff_s9 < (float)uVar19) goto code_r0x00010837a868;
                  uVar7 = fVar31 <= unaff_s9;
                  uVar10 = unaff_s9 == fVar31;
                  if (unaff_s9 <= fVar31) {
                    uVar27 = unaff_d8;
                    FUN_108346090(pfVar14,&uStack_160);
                    pfVar13 = pfVar14;
                    if ((int)pfVar14 == 0) goto code_r0x00010837a868;
                    FUN_10837c450(uVar28,afStack_108[lVar17 * 6],afStack_108[lVar17 * 6 + 2],fVar34,
                                  uStack_160 & 0xffffffff);
                    uVar19 = (ulong)(uint)ABS((float)uVar28 - unaff_s9);
                    func_0x00010837ccf0();
                    pfVar13 = pfVar14;
                    uVar27 = uVar28;
                    if (!(bool)uVar7 || (bool)uVar10) {
                      bVar4 = false;
                      if ((fVar24 == fVar32) && (bVar4 = false, !NAN(unaff_s9) && !NAN(fVar34))) {
                        bVar4 = unaff_s9 == fVar34;
                      }
                      if (!bVar4) goto code_r0x00010837a8bc;
                    }
                    if (unaff_s9 <= (float)uVar28) {
                      iVar23 = 0;
                    }
                  }
                }
              }
              else {
                bVar4 = false;
                if ((fVar24 == fVar36) && (bVar4 = false, !NAN(unaff_s9) && !NAN(fVar33))) {
                  bVar4 = unaff_s9 == fVar33;
                }
                if (!bVar4) goto code_r0x00010837a828;
code_r0x00010837a8bc:
                iVar23 = 0;
                uVar22 = uVar22 + 1;
              }
              iVar12 = iVar23 + iVar12;
              puVar20 = puVar20 + 3;
            }
            uVar18 = iVar12 + uVar18;
            uStack_19c = uVar22;
            break;
          case 5:
            goto code_r0x00010837aa54;
          }
        } while( true );
      }
    }
  }
LAB_10837aab8:
  func_0x00010837cab0(uStack_b8);
  if ((bool)uVar10) {
    return (float *)(ulong)(uVar18 & 1);
  }
  ___stack_chk_fail();
code_r0x00010837afe8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10837afec);
  (*pcVar3)();
}



/* Entry: 1082d83fc; end: 1082d8437;  */

float * FUN_1082d83fc(float *param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar1 = param_1;
  FUN_108188ea8(*param_2,param_2[1]);
  if ((int)pfVar1 == 0) {
    return pfVar1;
  }
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar8 = *param_1;
  if (param_1[0xc] == 2.8026e-45) {
    lVar2 = 0;
    fVar5 = (fVar8 + param_1[2]) * 0.5;
    fVar7 = (param_1[1] + param_1[3]) * 0.5;
  }
  else {
    fVar5 = fVar8 + param_1[4];
    if ((fVar5 <= fVar3) || (fVar7 = param_1[1] + param_1[5], fVar7 <= fVar4)) {
      fVar5 = fVar8 + param_1[10];
      if ((fVar5 <= fVar3) || (fVar7 = param_1[3] - param_1[0xb], fVar4 <= fVar7)) {
        fVar5 = param_1[2] - param_1[6];
        if ((fVar3 <= fVar5) || (fVar7 = param_1[1] + param_1[7], fVar7 <= fVar4)) {
          fVar5 = param_1[2] - param_1[8];
          if ((fVar3 <= fVar5) || (fVar7 = param_1[3] - param_1[9], fVar4 <= fVar7)) {
            return (float *)0x1;
          }
          lVar2 = 2;
        }
        else {
          lVar2 = 1;
        }
      }
      else {
        lVar2 = 3;
      }
    }
    else {
      lVar2 = 0;
    }
  }
  fVar6 = param_1[lVar2 * 2 + 4];
  fVar8 = param_1[lVar2 * 2 + 5];
  return (float *)(ulong)((fVar4 - fVar7) * (fVar4 - fVar7) * fVar6 * fVar6 +
                          fVar8 * fVar8 * (fVar3 - fVar5) * (fVar3 - fVar5) <=
                         fVar8 * fVar6 * fVar8 * fVar6);
}



/* Entry: 1082d8438; end: 1082d84db;  */

bool FUN_1082d8438(long *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  char *pcVar4;
  ulong uVar5;
  uint uVar6;
  
  bVar3 = 1;
  switch((char)param_1[7]) {
  case '\0':
  case '\x02':
  case '\x03':
    break;
  case '\x01':
  case '\x06':
    bVar3 = 0;
    break;
  case '\x04':
    uVar6 = *(uint *)(*param_1 + 0x48);
    if (uVar6 != 0) {
      bVar1 = false;
      pcVar4 = *(char **)(*param_1 + 0x40);
      for (uVar5 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)); uVar5 != 0;
          uVar5 = uVar5 - 1) {
        uVar6 = uVar6 - 1;
        if (*pcVar4 == '\0') {
          if (bVar1) {
            return false;
          }
          bVar1 = true;
        }
        else if (*pcVar4 == '\x05') {
          return uVar6 == 0;
        }
        pcVar4 = pcVar4 + 1;
      }
    }
    return false;
  case '\x05':
    bVar3 = *(byte *)(param_1 + 3);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1082d847c);
    (*pcVar2)();
  }
  return (bool)(bVar3 & 1);
}



/* Entry: 1082d84dc; end: 1082d8587;  */

ulong FUN_1082d84dc(ulong param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  float fVar3;
  
  uVar2 = 1;
  switch(*(undefined1 *)(param_1 + 0x38)) {
  case 0:
  case 2:
  case 3:
    break;
  case 1:
  case 6:
    uVar2 = 0;
    break;
  case 4:
    if (((param_2 & 1) != 0) || (uVar2 = param_1, FUN_108377324(), (int)uVar2 != 0)) {
      FUN_1083773cc(param_1);
      return (ulong)((int)param_1 == 0);
    }
    break;
  case 5:
    if ((param_2 == 0) || (ABS(*(float *)(param_1 + 0x14)) < 360.0)) {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        fVar3 = 180.0;
      }
      else {
        fVar3 = 360.0;
      }
      uVar2 = (ulong)(ABS(*(float *)(param_1 + 0x14)) <= fVar3);
    }
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082d8588);
    (*pcVar1)();
  }
  return uVar2;
}



/* Entry: 1082d8588; end: 1082d8623;  */

void FUN_1082d8588(long param_1)

{
  code *pcVar1;
  
  switch(*(undefined1 *)(param_1 + 0x38)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    FUN_1082d8624();
    break;
  case 4:
    func_0x0001083773e0(0x3f800000,0x3f800000,0xbf800000,0xbf800000);
  case 3:
  case 5:
    break;
  case 6:
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082d8624);
    (*pcVar1)();
  }
  return;
}



/* Entry: 1082d8624; end: 1082d86bf;  */

float FUN_1082d8624(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[2];
  if (*param_1 <= param_1[2]) {
    fVar1 = *param_1;
  }
  return fVar1;
}



/* Entry: 1082d86c0; end: 1082d8733;  */

bool FUN_1082d86c0(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3,uint *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (param_2 != (undefined8 *)0x0) {
      puVar1 = param_1;
      FUN_1082d8734();
      uVar2 = *puVar1;
      param_2[1] = puVar1[1];
      *param_2 = uVar2;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *(undefined1 *)((long)param_1 + 0xc6);
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)*(byte *)((long)param_1 + 0xc2);
    }
  }
  return *(char *)(param_1 + 0x18) == '\x01';
}



/* Entry: 1082d8734; end: 1082d878f;  */

long FUN_1082d8734(long param_1)

{
  if (*(char *)(param_1 + 0xc1) != '\0') {
    func_0x0001082d8764(param_1);
  }
  return param_1 + 0x68;
}



/* Entry: 1082d8790; end: 1082d8827;  */

undefined8 FUN_1082d8790(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 in_d3;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_60;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float fVar15;
  float fVar16;
  
  puVar6 = *(undefined8 **)(param_2 + 0x28);
  uVar1 = *(uint *)(param_2 + 0x30);
  if ((int)uVar1 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar10 = *puVar6;
    if ((uVar1 & 1) == 0) {
      iVar8 = -2;
      lVar7 = 0x10;
      uVar9 = puVar6[1];
    }
    else {
      iVar8 = -1;
      lVar7 = 8;
      uVar9 = uVar10;
    }
    uStack_78 = 0;
    uStack_74 = 0;
    fStack_48 = (float)uVar9;
    fStack_44 = (float)((ulong)uVar9 >> 0x20);
    uStack_60 = FUN_10838ecd0();
    puVar6 = (undefined8 *)((long)puVar6 + lVar7);
    uVar9 = uVar10;
    fVar18 = fStack_48;
    fVar19 = fStack_44;
    for (iVar8 = iVar8 + uVar1; iVar8 != 0; iVar8 = iVar8 + -2) {
      uStack_38 = puVar6[1];
      uStack_78 = (undefined4)uStack_38;
      uStack_74 = (undefined4)((ulong)uStack_38 >> 0x20);
      uStack_40 = *puVar6;
      fVar18 = (float)uStack_40;
      uStack_60._4_4_ = (float)((ulong)uStack_60 >> 0x20);
      uStack_60 = CONCAT44(uStack_60._4_4_ * (float)((ulong)uStack_40 >> 0x20),
                           (float)uStack_60 * fVar18);
      FUN_10838f44c(&uStack_40);
      uVar9 = func_0x00010838f4bc();
      fStack_48 = (float)extraout_var;
      fStack_44 = (float)((ulong)extraout_var >> 0x20);
      FUN_10838f44c(&uStack_40);
      uVar10 = func_0x00010838f4e8();
      fVar19 = (float)in_d3;
      puVar6 = puVar6 + 2;
    }
    auVar17._4_4_ = fVar19;
    auVar17._0_4_ = fVar18;
    FUN_10838ecd0(uStack_60);
    uVar11 = func_0x00010838f4bc();
    auVar12._0_4_ = -(uint)((float)uVar11 == 0.0);
    auVar12._4_4_ = -(uint)((float)((ulong)uVar11 >> 0x20) == 0.0);
    auVar12._8_4_ = -(uint)((float)extraout_var_00 == 0.0);
    auVar12._12_4_ = -(uint)((float)((ulong)extraout_var_00 >> 0x20) == 0.0);
    iVar8 = NEON_uminv(auVar12,4);
    if (iVar8 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return 0;
    }
    auVar4._8_4_ = fStack_48;
    auVar4._0_8_ = uVar9;
    auVar3._8_4_ = fStack_48;
    auVar3._0_8_ = uVar9;
    auVar2._8_4_ = fStack_48;
    auVar2._0_8_ = uVar9;
    auVar2._12_4_ = fStack_44;
    auVar3._12_4_ = fStack_44;
    auVar12 = NEON_ext(auVar2,auVar3,8,1);
    auVar17._8_4_ = uStack_78;
    auVar13._0_4_ = -(uint)(auVar12._0_4_ < (float)uVar9);
    auVar13._4_4_ = -(uint)(auVar12._4_4_ < (float)((ulong)uVar9 >> 0x20));
    fVar15 = (float)uVar10;
    fVar16 = (float)((ulong)uVar10 >> 0x20);
    auVar13._8_4_ = -(uint)(fVar15 < fVar18);
    auVar13._12_4_ = -(uint)(fVar16 < fVar19);
    auVar4._12_4_ = fStack_44;
    auVar17._12_4_ = uStack_74;
    auVar17 = NEON_ext(auVar4,auVar17,8,1);
    auVar5._8_4_ = fVar15;
    auVar5._0_8_ = uVar9;
    auVar5._12_4_ = fVar16;
    auVar14._8_4_ = fVar15;
    auVar14._0_8_ = uVar9;
    auVar14._12_4_ = fVar16;
    auVar14 = auVar14 ^ (auVar5 ^ auVar17) & auVar13;
    param_1[1] = auVar14._8_8_;
    *param_1 = auVar14._0_8_;
  }
  return 1;
}



/* Entry: 1082d8828; end: 1082d88eb;  */

long FUN_1082d8828(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1082d7898();
  func_0x0001082d88ac(lVar1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x8d) = *(undefined1 *)(param_2 + 0x8d);
  FUN_10827f130(param_1 + 0xa8,*(undefined4 *)(param_2 + 0xd8));
  if (*(int *)(param_1 + 0xd8) != 0) {
    _memcpy(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_2 + 0xa8),
            (long)*(int *)(param_1 + 0xd8) << 2);
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1081a06c8(param_1 + 0x90,param_2 + 0x90);
  }
  else {
    FUN_1082d9d64(param_1 + 0x90);
  }
  return param_1;
}



/* Entry: 1082d88ec; end: 1082d8a17;  */

void FUN_1082d88ec(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [16];
  
  func_0x0001082d9e10(auStack_30);
  uVar2 = param_1 + 0x40;
  FUN_10828786c();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
      if ((*(char *)(param_1 + 0x38) == '\x05') && (*(short *)(param_1 + 0x4c) != 0)) {
        uVar3 = 4;
      }
      else {
        uVar3 = 6;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 7;
  }
  cVar1 = *(char *)(param_1 + 0x38);
  uVar2 = param_1;
  FUN_1082d80a4(param_1,uVar3);
  *(char *)(param_1 + 0x8c) = (char)uVar2;
  *(bool *)(param_1 + 0x8d) = cVar1 != *(char *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x38) == '\x04') {
    if ((*(int *)(param_1 + 0xd8) == 0) && ((*(byte *)(param_1 + 0xe) >> 2 & 1) == 0)) {
      uVar2 = param_1;
      func_0x0001083772e0();
    }
    else {
      uVar2 = 0;
    }
    *(int *)(param_1 + 0x88) = (int)uVar2;
    if (((*(long *)(param_1 + 0x50) == 0) || (*(int *)(param_1 + 0x58) == 1)) &&
       ((func_0x0001082d9e08(), (uVar2 & 1) == 0 ||
        (uVar2 = param_1, FUN_108376fcc(), (int)uVar2 != 0)))) {
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfc | 1;
    }
  }
  else {
    FUN_10827f130(param_1 + 0xa8,0);
    FUN_1082d9d64(param_1 + 0x90);
    FUN_1082d97b8(param_1);
  }
  FUN_1082d9d38(auStack_30);
  return;
}



/* Entry: 1082d8a18; end: 1082d8aa7;  */

undefined4
FUN_1082d8a18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_5 + 0x38) == '\0') {
    param_4 = 0;
    if (*(long *)(param_5 + 0x50) == 0) {
      return 0;
    }
    param_3 = 0;
    param_2 = 0;
    param_1 = 0;
    if (*(int *)(param_5 + 0x58) == 1) {
      return 0;
    }
  }
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1082d8588(param_5);
  uStack_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  FUN_1082d8aa8(param_5 + 0x40,&uStack_30,&uStack_40);
  return (undefined4)uStack_30;
}



/* Entry: 1082d8aa8; end: 1082d8b0f;  */

void FUN_1082d8aa8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  float fVar2;
  undefined8 uVar3;
  
  uVar3 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar3;
  plVar1 = *(long **)(param_1 + 0x10);
  if ((plVar1 != (long *)0x0) &&
     ((**(code **)(*plVar1 + 0x58))(plVar1,param_2), ((ulong)plVar1 & 1) == 0)) {
    uVar3 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar3;
  }
  fVar2 = (float)uVar3;
  func_0x0001083a6448(param_1);
  param_2[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) - -fVar2,(float)param_2[1] - -fVar2);
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) + -fVar2,(float)*param_2 + -fVar2);
  return;
}



/* Entry: 1082d8b10; end: 1082d8ba3;  */

int FUN_1082d8b10(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xd8) == 0) {
    switch(*(undefined1 *)(param_1 + 0x38)) {
    case 1:
      return 3;
    case 2:
    case 6:
      return 5;
    case 3:
      return 0xd;
    case 4:
      goto code_r0x0001082d8b70;
    case 5:
      return 8;
    default:
      return 1;
    }
  }
  return *(int *)(param_1 + 0xd8);
code_r0x0001082d8b70:
  if (*(int *)(param_1 + 0x88) == 0) {
    return -1;
  }
  FUN_1082d8ba4();
  iVar1 = 2;
  if (-1 < (int)param_1) {
    iVar1 = (int)param_1 + 1;
  }
  return iVar1;
}



/* Entry: 1082d8ba4; end: 1082d8bdb;  */

int FUN_1082d8ba4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (10 < *(int *)(lVar1 + 0x48)) {
    return -1;
  }
  return (*(int *)(lVar1 + 0x48) + 3 >> 2) + *(int *)(lVar1 + 0x30) * 2 + *(int *)(lVar1 + 0x60) + 1
  ;
}



/* Entry: 1082d8bdc; end: 1082d8d3b;  */

void FUN_1082d8bdc(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  iVar4 = (int)param_1[0x1b];
  if (iVar4 != 0) {
    lVar6 = param_1[0x15];
code_r0x0001082d8c0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_2,lVar6,(long)iVar4 << 2);
    return;
  }
  plVar5 = param_1;
  FUN_1082d79c0();
  plVar7 = (long *)(param_2 + 1);
  *param_2 = (int)plVar5;
  switch((char)param_1[7]) {
  case '\x01':
    *plVar7 = *param_1;
    break;
  case '\x02':
  case '\x06':
    lVar8 = param_1[1];
    lVar6 = *param_1;
    goto code_r0x0001082d8cfc;
  case '\x03':
    lVar8 = param_1[1];
    lVar6 = *param_1;
    lVar9 = param_1[2];
    lVar11 = param_1[5];
    lVar10 = param_1[4];
    *(long *)(param_2 + 7) = param_1[3];
    *(long *)(param_2 + 5) = lVar9;
    *(long *)(param_2 + 0xb) = lVar11;
    *(long *)(param_2 + 9) = lVar10;
code_r0x0001082d8cfc:
    *(long *)(param_2 + 3) = lVar8;
    *plVar7 = lVar6;
    break;
  case '\x04':
    plVar5 = param_1;
    FUN_1082d8ba4();
    if ((int)plVar5 < 0) {
      *(int *)plVar7 = (int)param_1[0x11];
    }
    else {
      lVar6 = *param_1;
      iVar2 = *(int *)(lVar6 + 0x48);
      iVar3 = *(int *)(lVar6 + 0x30);
      iVar4 = *(int *)(lVar6 + 0x60);
      puVar1 = param_2 + 2;
      param_2[1] = iVar2;
      _memcpy(puVar1,*(undefined8 *)(lVar6 + 0x40),(long)iVar2);
      _memset((long)puVar1 + (long)iVar2,0xde,(long)(int)((iVar2 + 3U & 0xfffffffc) - iVar2));
      _memcpy(puVar1 + ((int)(iVar2 + 3U) >> 2),*(undefined8 *)(*param_1 + 0x28),(long)iVar3 << 3);
      if (iVar4 != 0) {
        lVar6 = *(long *)(*param_1 + 0x58);
        param_2 = puVar1 + ((int)(iVar2 + 3U) >> 2) + (long)iVar3 * 2;
        goto code_r0x0001082d8c0c;
      }
    }
    break;
  case '\x05':
    lVar8 = param_1[1];
    lVar6 = *param_1;
    *(long *)(param_2 + 5) = param_1[2];
    *(long *)(param_2 + 3) = lVar8;
    *plVar7 = lVar6;
    param_2[7] = (uint)*(byte *)(param_1 + 3);
  }
  return;
}



/* Entry: 1082d8d3c; end: 1082d8e3f;  */

void FUN_1082d8d3c(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  
  if (*(char *)(param_2 + 0x38) != '\x04') {
    return;
  }
  iVar3 = *(int *)(param_3 + 0xd8);
  iVar7 = iVar3;
  if (iVar3 == 0) {
    lVar8 = param_3;
    FUN_1082d8b10();
    iVar7 = (int)lVar8;
    if (iVar7 < 0) goto LAB_1082d8de8;
  }
  lVar8 = param_3;
  FUN_1082d8438();
  uVar6 = (uint)lVar8 | 2;
  if (*(char *)(param_3 + 0x38) != '\x06') {
    uVar6 = (uint)lVar8;
  }
  lVar8 = param_3 + 0x40;
  FUN_1082b118c(lVar8,param_4,uVar6);
  if ((int)lVar8 < 0) {
LAB_1082d8de8:
    *(undefined4 *)(param_2 + 0x88) = 0;
    return;
  }
  FUN_10827f130(param_2 + 0xa8,(int)lVar8 + iVar7);
  if (iVar3 == 0) {
    FUN_1082d8bdc(param_3,*(undefined8 *)(param_2 + 0xa8));
  }
  else {
    _memcpy(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_3 + 0xa8),(long)iVar7 << 2);
  }
  puVar1 = (undefined4 *)(*(long *)(param_2 + 0xa8) + (long)iVar7 * 4);
  uVar5 = (int)param_3 + 0x40;
  if (*(int *)(param_3 + 0x58) == 1) {
    uVar9 = *(undefined4 *)(param_3 + 0x5c);
    *puVar1 = param_1;
    puVar1[1] = uVar9;
    iVar3 = *(int *)(param_3 + 0x80);
    _memcpy(puVar1 + 2,*(undefined8 *)(param_3 + 0x60),(long)(iVar3 << 2));
    lVar8 = (long)iVar3 + 2;
  }
  else {
    lVar8 = 0;
  }
  if ((int)param_4 != 1) {
    return;
  }
  uVar4 = uVar5;
  FUN_1082b11ec();
  if (uVar4 == 0) {
    return;
  }
  puVar1 = puVar1 + lVar8;
  *puVar1 = param_1;
  uVar2 = *(uint *)(param_3 + 0x4c);
  uVar4 = 0;
  if ((uVar6 & *(long *)(param_3 + 0x50) == 0) == 0) {
    uVar4 = (uVar2 & 0xffff) << 4;
  }
  if ((uVar6 >> 1 & 1) != 0) {
    uVar6 = 0;
    uVar9 = 0xbf800000;
    if ((*(long *)(param_3 + 0x50) == 0) || (uVar9 = 0xbf800000, *(int *)(param_3 + 0x58) == 1))
    goto LAB_1082b12dc;
  }
  if ((uVar2 & 0xff0000) == 0) {
    uVar6 = 0;
    uVar9 = *(undefined4 *)(param_3 + 0x48);
  }
  else {
    uVar6 = uVar2 >> 0x10;
    uVar9 = 0xbf800000;
  }
LAB_1082b12dc:
  func_0x0001083a630c();
  puVar1[1] = uVar5 | (uVar6 & 0xff) << 2 | uVar4;
  puVar1[2] = uVar9;
  puVar1[3] = *(undefined4 *)(param_3 + 0x44);
  return;
}



/* Entry: 1082d8e40; end: 1082d8ecb;  */

bool FUN_1082d8e40(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)(param_1 + 7);
  if (cVar1 == '\x06') {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *param_1;
      param_2[1] = param_1[1];
    }
    if (param_3 != (byte *)0x0) {
      if (*(char *)(param_1 + 7) == '\x04') {
        bVar2 = *(byte *)((long)param_1 + 0xe) >> 1 & 1;
      }
      else {
        bVar2 = *(byte *)((long)param_1 + 0x3b);
      }
      *param_3 = bVar2 & 1;
    }
  }
  return cVar1 == '\x06';
}



/* Entry: 1082d8ecc; end: 1082d8f13;  */

void FUN_1082d8ecc(long param_1,undefined8 *param_2)

{
  func_0x0001082d8e94();
  if (param_1 != 0) {
    *param_2 = 0;
    FUN_1082d8f14();
    func_0x0001082d9dc8();
  }
  return;
}



/* Entry: 1082d8f14; end: 1082d8f53;  */

void FUN_1082d8f14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  uStack_28 = *param_2;
  *param_2 = 0;
  FUN_10837e9a0(uVar1,&uStack_28);
  func_0x0001082d9dc8();
  return;
}



/* Entry: 1082d8f54; end: 1082d8fef;  */

void FUN_1082d8f54(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7,int param_8)

{
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined1 uStack_34;
  
  func_0x000108281ad4(param_1);
  FUN_1082d8624(param_6);
  uStack_34 = *(undefined1 *)(param_6 + 0x18);
  uStack_3c = *(undefined8 *)(param_6 + 0x10);
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  uStack_40 = param_5;
  func_0x0001082d7968(param_1,&uStack_4c);
  func_0x0001082d88ac(param_1 + 0x40,param_7);
  if (param_8 != 0) {
    FUN_1082d88ec(param_1);
  }
  return;
}



/* Entry: 1082d8ff0; end: 1082d90c7;  */

long FUN_1082d8ff0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = param_1;
  FUN_10827a000();
  FUN_10827f020(lVar3 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  uVar2 = *(undefined1 *)(param_2 + 0x8d);
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x8d) = uVar2;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  puVar4 = (undefined8 *)(param_1 + 0xa8);
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  FUN_10827f130(puVar4,*(undefined4 *)(param_2 + 0xd8));
  if (*(int *)(param_1 + 0xd8) != 0) {
    _memcpy(*puVar4,*(undefined8 *)(param_2 + 0xa8),(long)*(int *)(param_1 + 0xd8) << 2);
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1081a06c8((undefined1 *)(param_1 + 0x90),param_2 + 0x90);
  }
  return param_1;
}



/* Entry: 1082d90c8; end: 1082d956f;  */

long FUN_1082d90c8(undefined8 param_1,long param_2,undefined1 *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  undefined8 extraout_x8;
  double *pdVar7;
  long lVar8;
  double dVar9;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_248 [16];
  byte bStack_238;
  uint uStack_230;
  undefined4 uStack_22c;
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [160];
  byte bStack_70;
  undefined8 uStack_68;
  
  lVar3 = param_2;
  puVar5 = param_3;
  func_0x0001082d9df8();
  dVar9 = (double)NEON_fmov(0x3f800000,4);
  pdVar7 = (double *)(lVar3 + 0x40);
  *pdVar7 = -dVar9;
  *(undefined1 *)(lVar3 + 0x38) = 0;
  *(undefined4 *)(lVar3 + 0x48) = 0x40800000;
  *(undefined4 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x4c) = 0;
  *(undefined8 *)(lVar3 + 0x5c) = 0;
  *(undefined8 *)(lVar3 + 0x54) = 0;
  *(undefined4 *)(lVar3 + 100) = 0;
  *(undefined4 *)(lVar3 + 0x88) = 0;
  *(undefined1 *)(lVar3 + 0x90) = 0;
  *(undefined2 *)(lVar3 + 0x8c) = 0;
  *(undefined1 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(undefined4 *)(lVar3 + 0xd8) = 0;
  iVar2 = (int)puVar5 + 0x40;
  uStack_68 = extraout_x8;
  FUN_10828769c();
  if (iVar2 == 0) {
LAB_1082d9168:
    FUN_1082d8828(param_2,param_3);
LAB_1082d93bc:
    func_0x0001082d9e44(uStack_68);
    if ((bool)in_ZR) {
      return param_2;
    }
    ___stack_chk_fail();
  }
  else {
    lVar8 = *(long *)(param_3 + 0x50);
    if (((int)param_4 == 0) && (lVar8 == 0)) goto LAB_1082d9168;
    auStack_248[0] = 0;
    bStack_238 = 0;
    auStack_150[0] = 0;
    bStack_70 = 0;
    FUN_108376ad8(&uStack_230);
    func_0x00010827ee00(param_2,&uStack_230);
    FUN_10837ca5c(CONCAT44(uStack_22c,uStack_230));
    puVar5 = param_3;
    if (lVar8 == 0) {
      if (param_3[0x38] != '\x04') {
        func_0x0001082d9e30();
        if ((bStack_238 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1082d94ac;
        }
        func_0x0001082d9de8();
      }
      FUN_1082b14f4(param_1,param_3 + 0x40,param_2,&uStack_230,param_3);
      func_0x0001082d95a0(pdVar7,uStack_230);
LAB_1082d935c:
      in_ZR = param_3[0xa0] == '\x01';
      if ((bool)in_ZR) {
        param_3 = param_3 + 0x90;
LAB_1082d936c:
        FUN_1081a06c8((undefined1 *)(lVar3 + 0x90),param_3);
      }
      else {
        in_ZR = param_3[0x38] == '\x04';
        if (((bool)in_ZR) && (((byte)param_3[0xe] >> 2 & 1) == 0)) goto LAB_1082d936c;
      }
      FUN_1082d88ec(param_2);
      FUN_1082d8d3c(param_1,param_2,puVar5,param_4);
LAB_1082d93ac:
      FUN_108287eec(auStack_150);
      func_0x00010819e850(auStack_248);
      goto LAB_1082d93bc;
    }
    in_ZR = param_3[0x38] == '\x04';
    if ((bool)in_ZR) {
LAB_1082d91c8:
      uStack_258 = *(undefined8 *)(param_3 + 0x48);
      uStack_260 = *(undefined8 *)(param_3 + 0x40);
      puVar4 = param_3 + 0x40;
      FUN_1082b14c0(param_1,puVar4,param_2,&uStack_260,param_3);
      if (((ulong)puVar4 & 1) != 0) {
        if ((int)param_4 == 1) {
          iVar2 = (int)&uStack_260;
          FUN_1082b11ec();
          if (iVar2 != 0) {
            uStack_270 = 0;
            FUN_1082d9c78(&uStack_230,&uStack_260,&uStack_270);
            func_0x000108287848(auStack_150);
            FUN_10827f320(auStack_150,param_2,&uStack_230,1);
            bStack_70 = 1;
            func_0x0001082d9dc0();
            func_0x000108115b70(&uStack_270);
            if (bStack_70 == 1) {
              FUN_1082d8d3c(param_1,auStack_150,param_3,0);
              if ((bStack_238 & 1) == 0) {
                func_0x0001082d9e30();
                bVar6 = bStack_238;
              }
              else {
                bVar6 = 1;
              }
              if ((bStack_70 == 1) && ((bVar6 & 1) != 0)) {
                FUN_108287e50(auStack_150,auStack_248);
                if (bStack_70 == 1) {
                  iVar2 = (int)auStack_110;
                  FUN_10828769c();
                  if (iVar2 == 0) {
                    if (bStack_70 != 0) {
                      puVar5 = auStack_110;
                      FUN_10828786c(puVar5);
                      goto LAB_1082d946c;
                    }
                  }
                  else if ((bStack_70 != 0) && ((bStack_238 & 1) != 0)) {
                    FUN_1082b14f4(param_1,auStack_110,param_2,&uStack_230,auStack_248);
                    puVar5 = (undefined1 *)(ulong)uStack_230;
LAB_1082d946c:
                    func_0x0001082d95a0(pdVar7,puVar5);
                    if ((bStack_70 & 1) != 0) {
                      puVar5 = auStack_150;
                      goto LAB_1082d935c;
                    }
                  }
                }
                func_0x000104bdc2c8();
                goto LAB_1082d94ac;
              }
            }
            func_0x000104bdc2c8();
            goto LAB_1082d94ac;
          }
        }
        uStack_278 = 0;
        FUN_1082d9c78(&uStack_230,&uStack_260,&uStack_278);
        func_0x0001082d88ac(pdVar7,&uStack_230);
        func_0x0001082d9dc0();
        func_0x0001082d9dd0();
        goto LAB_1082d935c;
      }
      uStack_268 = 0;
      FUN_1082d9c78(&uStack_230,&uStack_260,&uStack_268);
      func_0x000108287848(auStack_150);
      FUN_10827f320(auStack_150,param_3,&uStack_230,1);
      bStack_70 = 1;
      func_0x0001082d9dc0();
      func_0x000108115b70(&uStack_268);
      if ((bStack_70 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1082d94ac;
      }
      FUN_1082d90c8(param_1,&uStack_230,auStack_150,param_4);
      FUN_1082d8828(param_2,&uStack_230);
      func_0x00010827f18c(&uStack_230);
      goto LAB_1082d93ac;
    }
    func_0x0001082d9e30();
    if ((bStack_238 & 1) != 0) {
      func_0x0001082d9de8();
      goto LAB_1082d91c8;
    }
  }
  func_0x000104bdc2c8();
LAB_1082d94ac:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082d94b0);
  (*pcVar1)();
}



/* Entry: 1082d9570; end: 1082d95fb;  */

void FUN_1082d9570(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1082d9d64();
  puVar1 = param_1;
  FUN_108376ad8();
  *(undefined1 *)(param_1 + 2) = 1;
  if ((*(byte *)(puVar1 + 2) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)((long)puVar1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x0001081919cc();
  *puVar1 = &PTR_FUN_110a2e290;
  *(undefined4 *)(puVar1 + 0x61) = 0;
  puVar1[0x62] = 0x1138270b0;
  *(undefined1 *)(puVar1 + 99) = 0;
  *(undefined1 *)(puVar1 + 100) = 0;
  *(undefined1 *)((long)puVar1 + 0x324) = 0;
  *(undefined1 *)((long)puVar1 + 0x32c) = 0;
  *(undefined1 *)(puVar1 + 0x66) = 0;
  *(undefined1 *)(puVar1 + 0x67) = 0;
  *(undefined1 *)((long)puVar1 + 0x33c) = 0;
  *(undefined1 *)((long)puVar1 + 0x344) = 0;
  *(undefined1 *)(puVar1 + 0x69) = 0;
  *(undefined1 *)(puVar1 + 0x6e) = 0;
  return;
}



/* Entry: 1082d95fc; end: 1082d96bf;  */

undefined8 FUN_1082d95fc(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (*(char *)(param_1 + 7) == '\x03') {
    if (param_2 == (undefined8 *)0x0) goto LAB_1082d9678;
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    uStack_48 = param_1[5];
    uStack_50 = param_1[4];
    uStack_40 = *(undefined4 *)(param_1 + 6);
  }
  else {
    if (*(char *)(param_1 + 7) != '\x02') {
      return 0;
    }
    if (param_2 == (undefined8 *)0x0) goto LAB_1082d9678;
    func_0x000108277358(&uStack_70,param_1);
  }
  param_2[1] = uStack_68;
  *param_2 = uStack_70;
  param_2[3] = uStack_58;
  param_2[2] = uStack_60;
  param_2[5] = uStack_48;
  param_2[4] = uStack_50;
  *(undefined4 *)(param_2 + 6) = uStack_40;
LAB_1082d9678:
  if (param_3 != (byte *)0x0) {
    if (*(char *)(param_1 + 7) == '\x04') {
      bVar1 = *(byte *)((long)param_1 + 0xe) >> 1 & 1;
    }
    else {
      bVar1 = *(byte *)((long)param_1 + 0x3b);
    }
    *param_3 = bVar1 & 1;
  }
  return 1;
}



/* Entry: 1082d96c0; end: 1082d97b7;  */

float * FUN_1082d96c0(ulong param_1,float param_2,float *param_3,float *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  long extraout_x8;
  float *pfVar11;
  undefined8 extraout_x8_00;
  uint uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float afStack_f0 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  float afStack_c0 [4];
  float afStack_b0 [18];
  undefined8 uStack_68;
  int iStack_30;
  int iStack_2c;
  
  func_0x0001082d9df8();
  pfVar5 = param_3;
  pfVar7 = param_4;
  if ((((*(char *)(param_3 + 0xe) == '\x04') && ((*(byte *)((long)param_3 + 0xe) >> 1 & 1) == 0)) &&
      (FUN_10837be7c(), (int)pfVar5 != 0)) &&
     (((*(byte *)((long)param_3 + 0xe) & 3) != 0 || (iStack_30 != iStack_2c)))) {
    fVar14 = ABS(*param_4 - param_4[4]);
    param_1 = (ulong)(uint)fVar14;
    param_2 = 1.0;
    uVar10 = (uint)(1.0 <= fVar14);
    uVar12 = 1;
    lVar13 = 3;
    pfVar11 = param_4 + 5;
    do {
      uVar10 = 1.0 <= ABS(pfVar11[-4] - *pfVar11) & uVar10;
      uVar12 = ABS(fVar14 - ABS(pfVar11[-4] - *pfVar11)) <= 0.00024414062 & uVar12;
      lVar13 = lVar13 + -1;
      pfVar11 = pfVar11 + 1;
    } while (lVar13 != 0);
    pfVar11 = (float *)(ulong)(uVar12 | uVar10);
  }
  else {
    pfVar11 = (float *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == extraout_x8) {
    return pfVar11;
  }
  ___stack_chk_fail();
  pfVar11 = afStack_f0;
  func_0x0001082d9df8();
  iVar4 = (int)afStack_c0;
  uStack_68 = extraout_x8_00;
  func_0x0001082d9e10();
  fVar14 = (float)param_1;
  cVar8 = *(char *)(pfVar5 + 0xe);
  if (*(long *)(pfVar5 + 0x14) == 0 && cVar8 == '\x02') {
    func_0x0001082d9e08();
    uVar2 = iVar4 == 3;
    if (!(bool)uVar2) goto LAB_1082d9b84;
    uVar2 = 1;
    if (*(char *)((long)pfVar5 + 0x4e) == '\x02') goto LAB_1082d9b84;
    if (*(char *)((long)pfVar5 + 0x4e) == '\0') {
      fVar14 = pfVar5[0x12];
      param_2 = 1.4142135;
      uVar2 = fVar14 == 1.4142135;
      if (fVar14 < 1.4142135) goto LAB_1082d9b84;
    }
    func_0x0001082d9e38();
    fVar14 = fVar14 * param_2;
    pfVar6 = pfVar5;
    func_0x00010816882c(fVar14,fVar14);
    uVar2 = *(char *)((long)pfVar5 + 0x4e) == '\x01';
    if ((bool)uVar2) {
      pfVar6 = pfVar5;
      FUN_10817af74(afStack_b0,fVar14,fVar14);
      func_0x0001082d9da0();
    }
    FUN_10827e874();
    func_0x0001082d88ac(pfVar5 + 0x10);
LAB_1082d9b7c:
    bVar9 = 1;
    pfVar7 = pfVar6;
  }
  else {
    uVar2 = cVar8 == '\x06' || cVar8 == '\x01';
    if ((cVar8 != '\x06' && cVar8 != '\x01') ||
       ((*(long *)(pfVar5 + 0x14) != 0 && (uVar2 = pfVar5[0x16] == 1.4013e-45, !(bool)uVar2))))
    goto LAB_1082d9b84;
    pfVar6 = pfVar5 + 0x10;
    FUN_10828782c();
    fVar14 = (float)param_1;
    if (((ulong)pfVar6 & 1) != 0) goto LAB_1082d9b84;
    fVar15 = pfVar5[0x16];
    uVar2 = 0;
    if (fVar15 == 1.4013e-45) {
      fVar18 = pfVar5[0x20];
      if (*(char *)(pfVar5 + 0xe) != '\x01') {
        lVar13 = 1;
        do {
          fVar14 = (float)param_1;
          uVar2 = lVar13 == (int)fVar18;
          if ((int)fVar18 <= lVar13) goto LAB_1082d9854;
          fVar14 = *(float *)(*(long *)(pfVar5 + 0x18) + lVar13 * 4);
          param_1 = (ulong)(uint)fVar14;
          lVar13 = lVar13 + 2;
        } while (fVar14 == 0.0);
        uVar2 = 0;
        goto LAB_1082d9b84;
      }
      uVar2 = fVar18 == 0.0;
      if ((int)fVar18 < 1) goto LAB_1082d9b84;
      fVar14 = **(float **)(pfVar5 + 0x18);
      uVar2 = fVar14 == 0.0;
      if ((bool)uVar2) goto LAB_1082d9b84;
LAB_1082d9854:
      uStack_c8 = 0;
      pfVar7 = pfVar5 + 0x10;
      FUN_1082d9c78(afStack_b0,pfVar7,&uStack_c8);
      func_0x0001082d9d88();
      func_0x0001082d9db8();
      func_0x000108115b70(&uStack_c8);
      *(undefined1 *)(pfVar5 + 0x23) = 0;
    }
    pfVar6 = pfVar5 + 0x10;
    FUN_10828786c();
    if ((int)pfVar6 != 0) {
      func_0x0001082d9e28();
      pfVar6 = pfVar7;
      goto LAB_1082d9b7c;
    }
    func_0x0001082d9e08();
    bVar3 = (int)pfVar6 == 3;
    if (bVar3) {
      fVar14 = pfVar5[0x11];
      uStack_e0._0_4_ = (float)*(undefined8 *)(pfVar5 + 0x10);
      uStack_e0 = CONCAT44(fVar14,(float)uStack_e0);
      uStack_d8 = *(ulong *)(pfVar5 + 0x12) & 0x7fffffffffffffff;
      uStack_e8 = 0;
      pfVar6 = afStack_b0;
      pfVar7 = (float *)&uStack_e0;
      FUN_1082d9c78(pfVar6,pfVar7,&uStack_e8);
      func_0x0001082d9d88();
      func_0x0001082d9db8();
      func_0x0001082d9dd0();
    }
    bVar3 = bVar3 || fVar15 == 1.4013e-45;
    cVar8 = *(char *)(pfVar5 + 0xe);
    if (*(char *)(pfVar5 + 0x23) == '\x01') {
      if ((cVar8 == '\x06') && (((uint)pfVar5[0x13] & 0xff0000) == 0x10000)) {
        uVar10 = 1;
      }
      else {
        if (((uint)pfVar5[0x13] & 0xffffff) == 0) goto LAB_1082d9a0c;
        uVar10 = 0;
      }
      uStack_e0 = *(ulong *)(pfVar5 + 0x10);
      fVar14 = pfVar5[0x12];
      uStack_d8._4_4_ = (float)((ulong)*(undefined8 *)(pfVar5 + 0x12) >> 0x20);
      uStack_d8 = CONCAT44((uint)uStack_d8._4_4_ & 0x80000000 | uVar10,fVar14);
      afStack_f0[0] = 0.0;
      afStack_f0[1] = 0.0;
      pfVar7 = (float *)&uStack_e0;
      FUN_1082d9c78(afStack_b0,pfVar7,afStack_f0);
      func_0x0001082d9d88();
      func_0x0001082d9db8();
      func_0x000108115b70();
      cVar8 = *(char *)(pfVar5 + 0xe);
      bVar3 = true;
      pfVar6 = pfVar11;
    }
LAB_1082d9a0c:
    uVar2 = cVar8 == '\x01';
    if ((bool)uVar2) {
      if (*(short *)(pfVar5 + 0x13) == 0) {
        func_0x0001082d9e28();
      }
      else {
        func_0x0001082d9e38();
        uStack_e0 = *(ulong *)pfVar5;
        pfVar6 = (float *)&uStack_e0;
        uStack_d8 = uStack_e0;
        func_0x00010816882c(fVar14 * param_2,fVar14 * param_2);
        uVar2 = *(short *)(pfVar5 + 0x13) == 1;
        if ((bool)uVar2) {
          pfVar6 = (float *)&uStack_e0;
          FUN_1081779a8(afStack_b0);
          func_0x0001082d9da0();
        }
        else {
          func_0x0001082d9e1c();
        }
      }
LAB_1082d9b6c:
      FUN_10827e874();
      func_0x0001082d88ac(pfVar5 + 0x10);
      goto LAB_1082d9b7c;
    }
    uStack_e0 = 0;
    uStack_d8 = 0;
    fVar14 = pfVar5[1];
    fVar15 = pfVar5[3];
    if (fVar14 == fVar15) {
      fVar15 = pfVar5[2];
      fVar16 = *pfVar5;
      fVar18 = fVar15;
      if (fVar16 <= fVar15) {
        fVar18 = fVar16;
      }
      if (fVar15 <= fVar16) {
        fVar15 = fVar16;
      }
      uStack_d8 = CONCAT44(fVar14,fVar15);
      uStack_e0 = CONCAT44(fVar14,fVar18);
      func_0x0001082d9e38();
      fVar14 = fVar14 * fVar15;
      fVar18 = 0.0;
      if (*(short *)(pfVar5 + 0x13) != 0) {
        fVar18 = fVar14;
      }
LAB_1082d9af4:
      pfVar6 = (float *)&uStack_e0;
      func_0x00010816882c(fVar18,fVar14);
      uVar2 = (float)uStack_e0 == (float)uStack_d8;
      if ((float)uStack_e0 < (float)uStack_d8) {
        uVar2 = uStack_e0._4_4_ == uStack_d8._4_4_;
        if (uStack_e0._4_4_ < uStack_d8._4_4_) {
          uVar2 = *(short *)(pfVar5 + 0x13) == 1;
          if ((bool)uVar2) {
            pfVar6 = (float *)&uStack_e0;
            FUN_10817af74(afStack_b0,fVar18,fVar14);
            func_0x0001082d9da0();
          }
          else {
            func_0x0001082d9e1c();
          }
          goto LAB_1082d9b6c;
        }
      }
      func_0x0001082d9e28();
      goto LAB_1082d9b6c;
    }
    fVar16 = *pfVar5;
    if (fVar16 == pfVar5[2]) {
      fVar17 = fVar15;
      if (fVar14 <= fVar15) {
        fVar17 = fVar14;
      }
      fVar18 = fVar15;
      if (fVar15 <= fVar14) {
        fVar18 = fVar14;
      }
      uStack_d8 = CONCAT44(fVar18,fVar16);
      uStack_e0 = CONCAT44(fVar17,fVar16);
      func_0x0001082d9e38();
      fVar18 = fVar18 * fVar15;
      fVar14 = 0.0;
      if (*(short *)(pfVar5 + 0x13) != 0) {
        fVar14 = fVar18;
      }
      goto LAB_1082d9af4;
    }
    bVar9 = *(byte *)((long)pfVar5 + 0x8d) | bVar3;
    uVar2 = 0;
  }
  *(byte *)((long)pfVar5 + 0x8d) = bVar9;
LAB_1082d9b84:
  pfVar5 = afStack_c0;
  FUN_1082d9d38();
  func_0x0001082d9e44(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    pfVar5 = afStack_c0;
    FUN_1082d9d38();
    func_0x0001082d9de0();
    if (pfVar5 != pfVar7) {
      if (*(long *)pfVar7 != 0) {
        piVar1 = (int *)(*(long *)pfVar7 + 8);
        do {
          cVar8 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      FUN_1082b15a4(pfVar5);
    }
    return pfVar5;
  }
  return pfVar5;
}



/* Entry: 1082d97b8; end: 1082d9c2f;  */

float * FUN_1082d97b8(ulong param_1,float param_2,float *param_3,float *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined8 extraout_x8;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float afStack_c0 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  float afStack_90 [4];
  float afStack_80 [18];
  undefined8 uStack_38;
  
  pfVar6 = afStack_c0;
  func_0x0001082d9df8();
  iVar4 = (int)afStack_90;
  uStack_38 = extraout_x8;
  func_0x0001082d9e10();
  fVar11 = (float)param_1;
  cVar7 = *(char *)(param_3 + 0xe);
  if (*(long *)(param_3 + 0x14) == 0 && cVar7 == '\x02') {
    func_0x0001082d9e08();
    uVar2 = iVar4 == 3;
    if (!(bool)uVar2) goto LAB_1082d9b84;
    uVar2 = 1;
    if (*(char *)((long)param_3 + 0x4e) == '\x02') goto LAB_1082d9b84;
    if (*(char *)((long)param_3 + 0x4e) == '\0') {
      fVar11 = param_3[0x12];
      param_2 = 1.4142135;
      uVar2 = fVar11 == 1.4142135;
      if (fVar11 < 1.4142135) goto LAB_1082d9b84;
    }
    func_0x0001082d9e38();
    fVar11 = fVar11 * param_2;
    pfVar5 = param_3;
    func_0x00010816882c(fVar11,fVar11);
    uVar2 = *(char *)((long)param_3 + 0x4e) == '\x01';
    if ((bool)uVar2) {
      pfVar5 = param_3;
      FUN_10817af74(afStack_80,fVar11,fVar11);
      func_0x0001082d9da0();
    }
    FUN_10827e874();
    func_0x0001082d88ac(param_3 + 0x10);
LAB_1082d9b7c:
    bVar8 = 1;
    param_4 = pfVar5;
  }
  else {
    uVar2 = cVar7 == '\x06' || cVar7 == '\x01';
    if ((cVar7 != '\x06' && cVar7 != '\x01') ||
       ((*(long *)(param_3 + 0x14) != 0 && (uVar2 = param_3[0x16] == 1.4013e-45, !(bool)uVar2))))
    goto LAB_1082d9b84;
    pfVar5 = param_3 + 0x10;
    FUN_10828782c();
    fVar11 = (float)param_1;
    if (((ulong)pfVar5 & 1) != 0) goto LAB_1082d9b84;
    fVar12 = param_3[0x16];
    uVar2 = 0;
    if (fVar12 == 1.4013e-45) {
      fVar15 = param_3[0x20];
      if (*(char *)(param_3 + 0xe) != '\x01') {
        lVar10 = 1;
        do {
          fVar11 = (float)param_1;
          uVar2 = lVar10 == (int)fVar15;
          if ((int)fVar15 <= lVar10) goto LAB_1082d9854;
          fVar11 = *(float *)(*(long *)(param_3 + 0x18) + lVar10 * 4);
          param_1 = (ulong)(uint)fVar11;
          lVar10 = lVar10 + 2;
        } while (fVar11 == 0.0);
        uVar2 = 0;
        goto LAB_1082d9b84;
      }
      uVar2 = fVar15 == 0.0;
      if ((int)fVar15 < 1) goto LAB_1082d9b84;
      fVar11 = **(float **)(param_3 + 0x18);
      uVar2 = fVar11 == 0.0;
      if ((bool)uVar2) goto LAB_1082d9b84;
LAB_1082d9854:
      uStack_98 = 0;
      param_4 = param_3 + 0x10;
      FUN_1082d9c78(afStack_80,param_4,&uStack_98);
      func_0x0001082d9d88();
      func_0x0001082d9db8();
      func_0x000108115b70(&uStack_98);
      *(undefined1 *)(param_3 + 0x23) = 0;
    }
    pfVar5 = param_3 + 0x10;
    FUN_10828786c();
    if ((int)pfVar5 != 0) {
      func_0x0001082d9e28();
      pfVar5 = param_4;
      goto LAB_1082d9b7c;
    }
    func_0x0001082d9e08();
    bVar3 = (int)pfVar5 == 3;
    if (bVar3) {
      fVar11 = param_3[0x11];
      uStack_b0._0_4_ = (float)*(undefined8 *)(param_3 + 0x10);
      uStack_b0 = CONCAT44(fVar11,(float)uStack_b0);
      uStack_a8 = *(ulong *)(param_3 + 0x12) & 0x7fffffffffffffff;
      uStack_b8 = 0;
      pfVar5 = afStack_80;
      param_4 = (float *)&uStack_b0;
      FUN_1082d9c78(pfVar5,param_4,&uStack_b8);
      func_0x0001082d9d88();
      func_0x0001082d9db8();
      func_0x0001082d9dd0();
    }
    bVar3 = bVar3 || fVar12 == 1.4013e-45;
    cVar7 = *(char *)(param_3 + 0xe);
    if (*(char *)(param_3 + 0x23) == '\x01') {
      if ((cVar7 == '\x06') && (((uint)param_3[0x13] & 0xff0000) == 0x10000)) {
        uVar9 = 1;
      }
      else {
        if (((uint)param_3[0x13] & 0xffffff) == 0) goto LAB_1082d9a0c;
        uVar9 = 0;
      }
      uStack_b0 = *(ulong *)(param_3 + 0x10);
      fVar11 = param_3[0x12];
      uStack_a8._4_4_ = (float)((ulong)*(undefined8 *)(param_3 + 0x12) >> 0x20);
      uStack_a8 = CONCAT44((uint)uStack_a8._4_4_ & 0x80000000 | uVar9,fVar11);
      afStack_c0[0] = 0.0;
      afStack_c0[1] = 0.0;
      param_4 = (float *)&uStack_b0;
      FUN_1082d9c78(afStack_80,param_4,afStack_c0);
      func_0x0001082d9d88();
      func_0x0001082d9db8();
      func_0x000108115b70();
      cVar7 = *(char *)(param_3 + 0xe);
      bVar3 = true;
      pfVar5 = pfVar6;
    }
LAB_1082d9a0c:
    uVar2 = cVar7 == '\x01';
    if ((bool)uVar2) {
      if (*(short *)(param_3 + 0x13) == 0) {
        func_0x0001082d9e28();
      }
      else {
        func_0x0001082d9e38();
        uStack_b0 = *(ulong *)param_3;
        pfVar5 = (float *)&uStack_b0;
        uStack_a8 = uStack_b0;
        func_0x00010816882c(fVar11 * param_2,fVar11 * param_2);
        uVar2 = *(short *)(param_3 + 0x13) == 1;
        if ((bool)uVar2) {
          pfVar5 = (float *)&uStack_b0;
          FUN_1081779a8(afStack_80);
          func_0x0001082d9da0();
        }
        else {
          func_0x0001082d9e1c();
        }
      }
LAB_1082d9b6c:
      FUN_10827e874();
      func_0x0001082d88ac(param_3 + 0x10);
      goto LAB_1082d9b7c;
    }
    uStack_b0 = 0;
    uStack_a8 = 0;
    fVar11 = param_3[1];
    fVar12 = param_3[3];
    if (fVar11 == fVar12) {
      fVar12 = param_3[2];
      fVar13 = *param_3;
      fVar15 = fVar12;
      if (fVar13 <= fVar12) {
        fVar15 = fVar13;
      }
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      uStack_a8 = CONCAT44(fVar11,fVar12);
      uStack_b0 = CONCAT44(fVar11,fVar15);
      func_0x0001082d9e38();
      fVar11 = fVar11 * fVar12;
      fVar15 = 0.0;
      if (*(short *)(param_3 + 0x13) != 0) {
        fVar15 = fVar11;
      }
LAB_1082d9af4:
      pfVar5 = (float *)&uStack_b0;
      func_0x00010816882c(fVar15,fVar11);
      uVar2 = (float)uStack_b0 == (float)uStack_a8;
      if ((float)uStack_b0 < (float)uStack_a8) {
        uVar2 = uStack_b0._4_4_ == uStack_a8._4_4_;
        if (uStack_b0._4_4_ < uStack_a8._4_4_) {
          uVar2 = *(short *)(param_3 + 0x13) == 1;
          if ((bool)uVar2) {
            pfVar5 = (float *)&uStack_b0;
            FUN_10817af74(afStack_80,fVar15,fVar11);
            func_0x0001082d9da0();
          }
          else {
            func_0x0001082d9e1c();
          }
          goto LAB_1082d9b6c;
        }
      }
      func_0x0001082d9e28();
      goto LAB_1082d9b6c;
    }
    fVar13 = *param_3;
    if (fVar13 == param_3[2]) {
      fVar14 = fVar12;
      if (fVar11 <= fVar12) {
        fVar14 = fVar11;
      }
      fVar15 = fVar12;
      if (fVar12 <= fVar11) {
        fVar15 = fVar11;
      }
      uStack_a8 = CONCAT44(fVar15,fVar13);
      uStack_b0 = CONCAT44(fVar14,fVar13);
      func_0x0001082d9e38();
      fVar15 = fVar15 * fVar12;
      fVar11 = 0.0;
      if (*(short *)(param_3 + 0x13) != 0) {
        fVar11 = fVar15;
      }
      goto LAB_1082d9af4;
    }
    bVar8 = *(byte *)((long)param_3 + 0x8d) | bVar3;
    uVar2 = 0;
  }
  *(byte *)((long)param_3 + 0x8d) = bVar8;
LAB_1082d9b84:
  pfVar6 = afStack_90;
  FUN_1082d9d38();
  func_0x0001082d9e44(uStack_38);
  if ((bool)uVar2) {
    return pfVar6;
  }
  ___stack_chk_fail();
  pfVar6 = afStack_90;
  FUN_1082d9d38();
  func_0x0001082d9de0();
  if (pfVar6 != param_4) {
    if (*(long *)param_4 != 0) {
      piVar1 = (int *)(*(long *)param_4 + 8);
      do {
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    FUN_1082b15a4(pfVar6);
  }
  return pfVar6;
}



/* Entry: 1082d9c30; end: 1082d9c77;  */

long * FUN_1082d9c30(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_1082b15a4(param_1);
  }
  return param_1;
}



/* Entry: 1082d9c78; end: 1082d9cf7;  */

undefined8 * FUN_1082d9c78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uStack_38 = *param_3;
  *param_3 = 0;
  FUN_1082b1318(param_1,&uStack_38);
  func_0x0001082d9dd0();
  return param_1;
}



/* Entry: 1082d9cf8; end: 1082d9d37;  */

void FUN_1082d9cf8(long *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  *param_1 = param_2;
  if (*(int *)(param_3 + 0x18) == 1) {
    bVar1 = 0;
  }
  else if (*(char *)(param_2 + 0x38) == '\x04') {
    bVar1 = *(byte *)(param_2 + 0xe) >> 1 & 1;
  }
  else {
    bVar1 = *(byte *)(param_2 + 0x3b);
  }
  *(byte *)(param_1 + 1) = bVar1 & 1;
  return;
}



/* Entry: 1082d9d38; end: 1082d9d63;  */

undefined8 * FUN_1082d9d38(undefined8 *param_1)

{
  FUN_1082771a4(*param_1,*(undefined1 *)(param_1 + 1));
  return param_1;
}



/* Entry: 1082d9d64; end: 1082d9d87;  */

void FUN_1082d9d64(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10837ca38();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 1082d9d88; end: 1082d9e57;  */

undefined8 * FUN_1082d9d88(void)

{
  long unaff_x19;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_1082d9c30(unaff_x19 + 0x50,&stack0x00000050);
  FUN_10827f0b8(unaff_x19 + 0x58,&stack0x00000058);
  *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000040;
  return (undefined8 *)(unaff_x19 + 0x40);
}



/* Entry: 1082d9e58; end: 1082d9f0f;  */

void FUN_1082d9e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_10831fbe8(auStack_58,param_7);
  if (lStack_48 == 0) {
    puVar1 = &UNK_10f486ab7;
  }
  else {
    func_0x00010828bb5c(param_3,param_2,2,(int)(char)((char)lStack_48 + '\x13'),&UNK_10f486ac2,
                        auStack_60);
    *param_4 = (int)param_3;
    puVar1 = &UNK_10f486ac8;
  }
  FUN_1083d4028(param_1,puVar1);
  return;
}



/* Entry: 1082d9f10; end: 1082d9f3b;  */

ulong FUN_1082d9f10(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 - 3;
  if ((uVar1 < 0x1a) && ((0x3c271ffU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    param_1 = (ulong)*(uint *)(&UNK_10df164a8 + (ulong)uVar1 * 4);
  }
  return param_1;
}



/* Entry: 1082d9f3c; end: 1082da02f;  */

void FUN_1082d9f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 auStack_38 [8];
  undefined4 *puStack_30;
  undefined8 uStack_28;
  
  FUN_10831fbe8(auStack_38,param_3);
  switch(uStack_28) {
  case 1:
    FUN_1082da030(*puStack_30);
                    /* WARNING: Could not recover jumptable at 0x0001082d9fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8 + 0x20))(param_1);
    return;
  case 2:
    FUN_1082da030(*puStack_30,puStack_30[1]);
                    /* WARNING: Could not recover jumptable at 0x0001082da01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8_02 + 0x40))(param_1);
    return;
  case 3:
    FUN_1082da030(*puStack_30,puStack_30[1],puStack_30[2]);
                    /* WARNING: Could not recover jumptable at 0x0001082d9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8_00 + 0x60))(param_1);
    return;
  case 4:
    FUN_1082da030(*puStack_30,puStack_30[1],puStack_30[2],puStack_30[3]);
                    /* WARNING: Could not recover jumptable at 0x0001082d9ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8_01 + 0x80))(param_1);
    return;
  default:
    return;
  }
}



/* Entry: 1082da030; end: 1082da03b;  */

void FUN_1082da030(void)

{
  return;
}



/* Entry: 1082da03c; end: 1082da10b;  */

undefined8 * FUN_1082da03c(undefined8 *param_1)

{
  FUN_1082dc42c(param_1 + 4);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_DAT_110a38a28;
  param_1[4] = &PTR_DAT_110a38ac0;
  param_1[2] = &PTR_DAT_110a38a78;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return param_1;
}



/* Entry: 1082da10c; end: 1082da1a7;  */

undefined * FUN_1082da10c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_1082da56c();
  lVar2 = *(long *)(lVar2 + 0x10);
  puVar1 = &UNK_10df16510;
  if (*(char *)(lVar2 + 10) == '\x01') {
    func_0x0001082da590();
    FUN_1082dd114(param_1 + extraout_x8,8,*(undefined8 *)(lVar2 + 0x80));
    if (*(char *)(lVar2 + 0xb) == '\x01') {
      *(undefined1 *)(param_1 + 0x18) = 1;
      func_0x0001082da590();
      FUN_10828bae8(param_1 + extraout_x8_00,&UNK_10f486ae8);
    }
    else {
      puVar1 = &UNK_10f486ad7;
    }
  }
  return puVar1;
}



/* Entry: 1082da1a8; end: 1082da1af;  */

undefined * FUN_1082da1a8(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1 + -0x10;
  lVar3 = lVar1;
  FUN_1082da56c();
  lVar3 = *(long *)(lVar3 + 0x10);
  puVar2 = &UNK_10df16510;
  if (*(char *)(lVar3 + 10) == '\x01') {
    func_0x0001082da590();
    FUN_1082dd114(lVar1 + extraout_x8,8,*(undefined8 *)(lVar3 + 0x80));
    if (*(char *)(lVar3 + 0xb) == '\x01') {
      *(undefined1 *)(param_1 + 8) = 1;
      func_0x0001082da590();
      FUN_10828bae8(lVar1 + extraout_x8_00,&UNK_10f486ae8);
    }
    else {
      puVar2 = &UNK_10f486ad7;
    }
  }
  return puVar2;
}



/* Entry: 1082da1b0; end: 1082da217;  */

long * FUN_1082da1b0(long *param_1)

{
  long *plVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_1082da56c();
  if (1 < *(int *)(plVar1[2] + 0x58)) {
    func_0x0001082da590();
    FUN_1082dd114((long)param_1 + extraout_x8,2,&DAT_10f486af7);
    func_0x0001082da590();
    param_1 = (long *)((long)param_1 + extraout_x8_00 + 0x1c0);
    FUN_1082dbd2c();
    FUN_1083a3348(&lStack_28,&DAT_10f486b16);
    lVar2 = *param_1;
    if (lVar2 != lStack_28) {
      *param_1 = lStack_28;
      lStack_28 = lVar2;
    }
    FUN_1083a3ca0(lStack_28);
    return param_1;
  }
  return plVar1;
}



/* Entry: 1082da218; end: 1082da21f;  */

long * FUN_1082da218(long param_1)

{
  long *plVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long lStack_28;
  
  plVar2 = (long *)(param_1 + -0x10);
  plVar1 = plVar2;
  FUN_1082da56c();
  if (1 < *(int *)(plVar1[2] + 0x58)) {
    func_0x0001082da590();
    FUN_1082dd114((long)plVar2 + extraout_x8,2,&DAT_10f486af7);
    func_0x0001082da590();
    plVar2 = (long *)((long)plVar2 + extraout_x8_00 + 0x1c0);
    FUN_1082dbd2c();
    FUN_1083a3348(&lStack_28,&DAT_10f486b16);
    lVar3 = *plVar2;
    if (lVar3 != lStack_28) {
      *plVar2 = lStack_28;
      lStack_28 = lVar3;
    }
    FUN_1083a3ca0(lStack_28);
    return plVar2;
  }
  return plVar1;
}



/* Entry: 1082da220; end: 1082da2d3;  */

void FUN_1082da220(long param_1)

{
  long *plVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  int *piVar3;
  undefined4 uStack_30;
  undefined1 uStack_29;
  undefined *puStack_28;
  
  *(undefined1 *)(param_1 + 0x1a) = 1;
  lVar2 = param_1;
  FUN_1082da56c();
  piVar3 = *(int **)(lVar2 + 0x10);
  if (*(long *)(piVar3 + 0x1a) != 0) {
    func_0x0001082da590();
    FUN_1082dd114(param_1 + extraout_x8,4);
  }
  if (0 < *piVar3) {
    func_0x0001082da590();
    puStack_28 = &UNK_10f486b55;
    uStack_29 = 0x17;
    uStack_30 = 1;
    FUN_1082da2d4(param_1 + extraout_x8_00 + 0x140,&puStack_28,&uStack_29,&uStack_30);
    func_0x0001082da590();
    plVar1 = *(long **)(param_1 + extraout_x8_01 + 8);
    lVar2 = *(long *)(param_1 + extraout_x8_01 + 0x140);
    (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + *(int *)(lVar2 + 0x18));
  }
  return;
}



/* Entry: 1082da2d4; end: 1082da30f;  */

undefined8 FUN_1082da2d4(undefined8 param_1,undefined8 *param_2,char *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uStack_38;
  
  func_0x0001082da520();
  cVar2 = *param_3;
  uVar1 = *param_4;
  FUN_1083a3348(&uStack_38,*param_2);
  FUN_10828e934(param_1,&uStack_38,(long)cVar2,uVar1);
  FUN_1083a3ca0(uStack_38);
  return param_1;
}



/* Entry: 1082da310; end: 1082da3db;  */

undefined * FUN_1082da310(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long extraout_x8;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x20))();
  if ((int)plVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x0001082da590();
    plVar1 = *(long **)((long)param_1 + extraout_x8 + 8);
    (**(code **)(*plVar1 + 0x10))();
    puVar2 = &UNK_10f486b55;
    if (*(int *)plVar1[2] < 1) {
      puVar2 = &UNK_10f486b32;
    }
  }
  return puVar2;
}



/* Entry: 1082da3dc; end: 1082da3f7;  */

void FUN_1082da3dc(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long alStack_68 [2];
  int iStack_58;
  long alStack_50 [2];
  int iStack_40;
  long *plStack_38;
  
  param_1 = (long *)((long)param_1 + *(long *)(*param_1 + -0x20));
  plVar5 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 8);
  (**(code **)(*plVar5 + 0x28))();
  func_0x0001082da590();
  iVar3 = *(int *)((long)param_1 + extraout_x8 + 0xa8);
  if ((5 < iVar3) && (iVar3 != 6)) {
    lVar2 = *(long *)((long)param_1 + extraout_x8 + 0xa0) + 0x30;
    FUN_1082dddf8();
    plStack_38 = plVar5 + 0x2b;
    FUN_1082dd240(alStack_50,&plStack_38);
    func_0x0001082dd4e4(alStack_68,0,0);
    while ((alStack_68[0] != alStack_50[0] || ((alStack_68[0] != 0 && (iStack_58 != iStack_40))))) {
      lVar1 = alStack_50[0] + iStack_40;
      lVar6 = plVar5[0x36];
      func_0x0001082ddfd8();
      FUN_1082b07dc(lVar1,*(undefined8 *)(lVar6 + 0x10),lVar2);
      FUN_10818f348(lVar2,&UNK_10f487032);
      FUN_1082dd250(alStack_50);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1082da3dc);
  (*pcVar4)();
}



/* Entry: 1082da3f8; end: 1082da433;  */

void FUN_1082da3f8(void)

{
  func_0x0001082da59c();
  return;
}



/* Entry: 1082da434; end: 1082da47f;  */

undefined1 FUN_1082da434(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 1082da480; end: 1082da4b3;  */

undefined8 * FUN_1082da480(undefined8 *param_1)

{
  FUN_1082da4b4();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 1082da4b4; end: 1082da56b;  */

void FUN_1082da4b4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      func_0x0001082da4ec();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 1082da56c; end: 1082da5a7;  */

void FUN_1082da56c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082da584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 8) + 0x10))();
  return;
}



/* Entry: 1082da5a8; end: 1082da67b;  */

undefined8 * FUN_1082da5a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110a38ba8;
  FUN_1082dbcb8(param_1 + 1,param_1);
  FUN_1082da03c(param_1 + 0x3d,param_1);
  param_1[0x7d] = param_2;
  param_1[0x7e] = param_3;
  param_1[0x7f] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  param_1[0x85] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined8 *)((long)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0x1138270b0;
  param_1[0x90] = 0x1138270b0;
  param_1[0x91] = 0x1138270b0;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  param_1[0x93] = 0;
  param_1[0x94] = 0x100000000;
  return param_1;
}



/* Entry: 1082da67c; end: 1082da6e7;  */

undefined8 * FUN_1082da67c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a38ba8;
  FUN_1081f8340(param_1 + 0x93);
  func_0x00010827024c(param_1 + 0x8d);
  func_0x00010829e8f8(param_1 + 0x88);
  FUN_10826dbfc(param_1 + 0x83);
  func_0x00010826de94(param_1 + 0x82);
  func_0x00010826de70(param_1 + 0x81);
  func_0x0001082da088(param_1 + 0x41);
  func_0x0001082da088(param_1 + 1);
  return param_1;
}



/* Entry: 1082da6e8; end: 1082da7af;  */

long * FUN_1082da6e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0x1138270b0;
  uStack_28 = 0x1138270b0;
  plVar1 = param_1;
  FUN_1082da7b0(param_1,&uStack_28,&uStack_30);
  if (((((ulong)plVar1 & 1) == 0) || (plVar1 = param_1, FUN_1082daaf4(), (int)plVar1 == 0)) ||
     (plVar1 = param_1, FUN_1082dad34(param_1,&uStack_28,&uStack_30), (int)plVar1 == 0)) {
    param_1 = (long *)0x0;
  }
  else {
    plVar1 = param_1;
    FUN_1082db10c(param_1,&uStack_28,&uStack_30);
    lVar2 = param_1[0x81];
    func_0x0001082dc190(*(undefined8 *)(*param_1 + 0x18));
    FUN_10829d478(lVar2,param_1 + 1,plVar1);
    FUN_1082db30c(param_1);
  }
  FUN_1083a3ca0(uStack_30);
  func_0x0001082dc228();
  return param_1;
}



/* Entry: 1082da7b0; end: 1082daaf3;  */

bool FUN_1082da7b0(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long lVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  int extraout_w10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined8 uStack_170;
  undefined2 uStack_162;
  long *plStack_160;
  long *plStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [40];
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long alStack_90 [4];
  int iStack_70;
  undefined8 uStack_68;
  
  plVar12 = param_1;
  func_0x0001082dc240();
  plVar12 = *(long **)(plVar12[0x7e] + 0x98);
  uStack_68 = extraout_x8;
  FUN_1082db348();
  FUN_1082db368(param_1,param_2,&UNK_10f486b69);
  plVar13 = param_1;
  FUN_1082db368(param_1,param_3,&UNK_10f486b75);
  func_0x0001082dc180();
  func_0x00010828bb5c();
  *(int *)(param_1 + 0x7f) = (int)plVar13;
  func_0x0001082dc2ac();
  func_0x0001082dc190();
  (**(code **)(*plVar12 + 0x20))(&lStack_128,plVar12,plVar13[2]);
  lVar9 = lStack_128;
  lStack_128 = 0;
  lVar6 = param_1[0x81];
  param_1[0x81] = lVar9;
  if (lVar6 != 0) {
    func_0x0001082dc174();
    lVar9 = lStack_128;
    lStack_128 = 0;
    if (lVar9 != 0) {
      func_0x0001082dc174();
    }
  }
  alStack_90[0] = 0;
  iStack_70 = 0;
  plVar13 = alStack_90;
  func_0x0001082dbd88(plVar13,(int)plVar12[8]);
  lVar9 = 0;
  while (lVar6 = lVar9, lVar14 = (long)(int)plVar12[8], lVar6 < lVar14) {
    lStack_128 = 0x1138270b0;
    lStack_130 = lVar6;
    FUN_1083a394c(&lStack_128,&UNK_10f486b84);
    plVar7 = plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12,lVar6);
    plVar13 = param_1;
    FUN_1082db3cc(param_1,plVar7 + 2,*plVar7,plVar7[1],plVar7 + 0x10,lStack_128 + 8);
    if (iStack_70 <= lVar6) {
LAB_1082daaac:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1082daab0);
      (*pcVar3)();
    }
    iVar5 = (int)plVar13;
    *(int *)(alStack_90[0] + lVar6 * 4) = iVar5;
    if (iStack_70 <= lVar6) goto LAB_1082daaac;
    func_0x0001082dc228();
    lVar9 = lVar6 + 1;
    if (iVar5 == -1) goto LAB_1082daa6c;
  }
  func_0x0001082dc190(*(undefined8 *)(*param_1 + 0x28));
  plVar7 = plVar13;
  func_0x0001082dc190(*(undefined8 *)(*param_1 + 0x18));
  plVar8 = plVar7;
  func_0x0001082dc2ac();
  func_0x0001082dc190();
  plStack_d0 = param_1 + 0x3d;
  lStack_b8 = plVar8[2];
  lStack_a8 = *param_2 + 8;
  lStack_a0 = *param_3 + 8;
  lStack_98 = alStack_90[0];
  plStack_d8 = param_1 + 1;
  plStack_c8 = plVar13;
  plStack_c0 = plVar7;
  plStack_b0 = plVar12;
  FUN_10829c85c(&lStack_128,param_1[0x81],&plStack_d8,*(undefined8 *)(param_1[0x7e] + 0x88));
  plVar12 = param_1 + 0x88;
  if (param_1[0x8b] != 0) {
    func_0x00010829e920(plVar12,param_1[0x8a]);
    param_1[0x8a] = 0;
    lVar10 = param_1[0x89];
    for (lVar9 = 0; lVar10 != lVar9; lVar9 = lVar9 + 1) {
      *(undefined8 *)(*plVar12 + lVar9 * 8) = 0;
    }
    param_1[0x8b] = 0;
  }
  lVar9 = lStack_128;
  lStack_128 = 0;
  FUN_10829e61c(plVar12,lVar9);
  uVar2 = uStack_120;
  param_1[0x89] = uStack_120;
  uStack_120 = 0;
  param_1[0x8b] = lStack_110;
  *(undefined4 *)(param_1 + 0x8c) = uStack_108;
  param_1[0x8a] = lStack_118;
  if (lStack_110 != 0) {
    uVar11 = *(ulong *)(lStack_118 + 8);
    if ((uVar2 & uVar2 - 1) == 0) {
      uVar11 = uVar11 & uVar2 - 1;
    }
    else if (uVar2 <= uVar11) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar11 / uVar2;
      }
      uVar11 = uVar11 - uVar1 * uVar2;
    }
    *(long **)(*plVar12 + uVar11 * 8) = param_1 + 0x8a;
    lStack_118 = 0;
    lStack_110 = 0;
  }
  FUN_10827535c(param_1 + 0x8d,auStack_100);
  FUN_1082dbd04(&lStack_128);
LAB_1082daa6c:
  uVar4 = lVar6 == lVar14;
  plVar13 = alStack_90;
  FUN_1082dbe04();
  func_0x0001082dc1c4(uStack_68);
  if ((bool)uVar4) {
    return lVar14 <= lVar6;
  }
  ___stack_chk_fail();
  FUN_1082dbd04(&lStack_128);
  plVar7 = alStack_90;
  FUN_1082dbe04();
  func_0x0001082dc198();
  pcStack_138 = FUN_1082daaf4;
  plStack_160 = param_3;
  plStack_158 = plVar12;
  lStack_150 = lVar6;
  plStack_148 = plVar13;
  puStack_140 = &stack0xfffffffffffffff0;
  *(undefined4 *)((long)plVar7 + 0x434) = 0;
  plVar13 = *(long **)(plVar7[0x7e] + 0x88);
  plVar12 = (long *)*plVar13;
  if (plVar12 == (long *)0x0) {
    if ((*(uint *)(plVar13 + 3) >> 1 & 1) == 0) {
      return true;
    }
  }
  else if ((*(uint *)(plVar13 + 3) >> 1 & 1) == 0) {
    func_0x0001082dc1b8();
    uStack_162 = *(undefined2 *)((long)plVar13 + 0xc);
    plVar8 = plVar7;
    FUN_1082db3cc(plVar7,(long)plVar12 + *(long *)(*plVar12 + -0x18) + 0x20,0,0x100000000,
                  &uStack_162,&UNK_10f486beb);
    iVar5 = (int)plVar8;
    *(int *)(plVar7 + 0x86) = iVar5;
    if (iVar5 == -1) {
      return false;
    }
    *(int *)((long)plVar7 + 0x434) = (int)plVar13[1];
    func_0x0001082dc180();
    func_0x00010828bb5c();
    *(int *)(plVar7 + 0x80) = iVar5;
    func_0x0001082dc1e0();
    plVar12 = plVar7 + 0x3d;
    func_0x0001082dc250();
    if (extraout_w10 == 1) {
      func_0x0001082dc200();
      if (*(int *)((long)plVar7 + 0x434) == 1) {
        func_0x0001082dc1e0();
        FUN_10829dbfc((long)plVar12 + extraout_x8_00,&UNK_10f486c48);
      }
    }
    else {
      func_0x0001082dc200();
      if (*(int *)((long)plVar7 + 0x434) == 1) {
        func_0x0001082dc1e0();
        func_0x0001082dc200();
      }
    }
    FUN_1082da10c(plVar12);
    func_0x0001082dc2b8();
    FUN_1083a3c34(&uStack_178);
    func_0x0001082dc1e0();
    func_0x0001082dc294();
    func_0x0001082dc1e0();
    func_0x0001082dc1ec();
    func_0x0001082dc250();
    FUN_1082dc98c((long)plVar12 + extraout_x8_02,(int)plVar7[0x86],&UNK_10f486ccf,0);
    func_0x0001082dc1e0();
    func_0x0001082dc230();
    uStack_170 = CONCAT62(uStack_176,uStack_178);
    goto LAB_1082dacfc;
  }
  uStack_178 = *(undefined2 *)((long)plVar13 + 0xc);
  func_0x0001082dc180();
  (**(code **)(*plVar12 + 0x60))();
  *(int *)(plVar7 + 0x86) = (int)plVar12;
  if ((int)plVar12 == -1) {
    return false;
  }
  FUN_1082da10c(plVar7 + 0x3d);
  func_0x0001082dc2b8();
  FUN_1083a3c34(&uStack_170);
  func_0x0001082dc250();
  func_0x0001082dc294();
  func_0x0001082dc1e0();
  func_0x0001082dc1ec();
  func_0x0001082dc250();
  FUN_1082dcad4((long)(plVar7 + 0x3d) + extraout_x8_01,(int)plVar7[0x86]);
  func_0x0001082dc1e0();
  func_0x0001082dc230();
LAB_1082dacfc:
  FUN_1083a3ca0(uStack_170);
  return true;
}



/* Entry: 1082daaf4; end: 1082dad33;  */

undefined8 FUN_1082daaf4(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long *plVar4;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined8 uStack_40;
  undefined2 uStack_32;
  
  *(undefined4 *)(param_1 + 0x434) = 0;
  plVar4 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x88);
  plVar2 = (long *)*plVar4;
  if (plVar2 == (long *)0x0) {
    if ((*(uint *)(plVar4 + 3) >> 1 & 1) == 0) {
      return 1;
    }
  }
  else if ((*(uint *)(plVar4 + 3) >> 1 & 1) == 0) {
    func_0x0001082dc1b8();
    uStack_32 = *(undefined2 *)((long)plVar4 + 0xc);
    lVar3 = param_1;
    FUN_1082db3cc(param_1,(long)plVar2 + *(long *)(*plVar2 + -0x18) + 0x20,0,0x100000000,&uStack_32,
                  &UNK_10f486beb);
    iVar1 = (int)lVar3;
    *(int *)(param_1 + 0x430) = iVar1;
    if (iVar1 == -1) {
      return 0;
    }
    *(int *)(param_1 + 0x434) = (int)plVar4[1];
    func_0x0001082dc180();
    func_0x00010828bb5c();
    *(int *)(param_1 + 0x400) = iVar1;
    func_0x0001082dc1e0();
    lVar3 = param_1 + 0x1e8;
    func_0x0001082dc250();
    if (extraout_w10 == 1) {
      func_0x0001082dc200();
      if (*(int *)(param_1 + 0x434) == 1) {
        func_0x0001082dc1e0();
        FUN_10829dbfc(lVar3 + extraout_x8,&UNK_10f486c48);
      }
    }
    else {
      func_0x0001082dc200();
      if (*(int *)(param_1 + 0x434) == 1) {
        func_0x0001082dc1e0();
        func_0x0001082dc200();
      }
    }
    FUN_1082da10c(lVar3);
    func_0x0001082dc2b8();
    FUN_1083a3c34(&uStack_48);
    func_0x0001082dc1e0();
    func_0x0001082dc294();
    func_0x0001082dc1e0();
    func_0x0001082dc1ec();
    func_0x0001082dc250();
    FUN_1082dc98c(lVar3 + extraout_x8_01,*(undefined4 *)(param_1 + 0x430),&UNK_10f486ccf,0);
    func_0x0001082dc1e0();
    func_0x0001082dc230();
    uStack_40 = CONCAT62(uStack_46,uStack_48);
    goto LAB_1082dacfc;
  }
  uStack_48 = *(undefined2 *)((long)plVar4 + 0xc);
  func_0x0001082dc180();
  (**(code **)(*plVar2 + 0x60))();
  *(int *)(param_1 + 0x430) = (int)plVar2;
  if ((int)plVar2 == -1) {
    return 0;
  }
  FUN_1082da10c(param_1 + 0x1e8);
  func_0x0001082dc2b8();
  FUN_1083a3c34(&uStack_40);
  func_0x0001082dc250();
  func_0x0001082dc294();
  func_0x0001082dc1e0();
  func_0x0001082dc1ec();
  func_0x0001082dc250();
  FUN_1082dcad4(param_1 + 0x1e8 + extraout_x8_00,*(undefined4 *)(param_1 + 0x430));
  func_0x0001082dc1e0();
  func_0x0001082dc230();
LAB_1082dacfc:
  FUN_1083a3ca0(uStack_40);
  return 1;
}



/* Entry: 1082dad34; end: 1082db10b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *****
FUN_1082dad34(undefined8 *****param_1,undefined8 *******param_2,undefined8 ******param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined8 *******pppppppuVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *****pppppuVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 extraout_x8;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  ulong uVar18;
  undefined8 *****pppppuVar19;
  long extraout_x8_00;
  undefined8 ****ppppuVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 ******ppppppuVar23;
  undefined8 ***unaff_x21;
  undefined8 ******unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******unaff_x25;
  undefined8 *****unaff_x26;
  undefined8 ****ppppuVar24;
  undefined8 ******ppppppuVar25;
  undefined8 ******ppppppuVar26;
  long *plStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined8 *****pppppuStack_190;
  long *plStack_188;
  undefined8 ******ppppppuStack_180;
  undefined8 *****pppppuStack_178;
  undefined *puStack_170;
  long *plStack_168;
  long lStack_160;
  undefined2 uStack_158;
  undefined8 ******ppppppuStack_150;
  long lStack_148;
  undefined8 *****pppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 uStack_130;
  undefined8 ******ppppppuStack_128;
  undefined8 *****pppppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ******ppppppuStack_110;
  undefined8 *****pppppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 *******pppppppuStack_e8;
  undefined8 ******ppppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined4 uStack_a0;
  byte bStack_99;
  undefined8 ****ppppuStack_98;
  undefined8 *******pppppppuStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 ******ppppppuStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 uStack_68;
  
  pppppuVar10 = param_1;
  pppppppuStack_c8 = param_2;
  ppppppuStack_c0 = param_3;
  func_0x0001082dc240();
  uStack_68 = extraout_x8;
  uVar4 = *(uint *)(pppppuVar10[0x7e][0x11] + 0xf);
  ppppppuVar23 = (undefined8 ******)(long)(int)uVar4;
  pppppuStack_b8 = pppppuVar10 + 0x83;
  pppppuStack_d0 = pppppuVar10 + 0x85;
  ppppuVar16 = pppppuVar10[0x83];
  if ((undefined8 ******)((long)pppppuVar10[0x85] - (long)ppppuVar16 >> 3) < ppppppuVar23) {
    if ((int)uVar4 < 0) goto LAB_1082db0a8;
    ppppuVar20 = param_1[0x84];
    ppppppuVar26 = ppppppuVar23;
    pppppuStack_70 = pppppuVar10 + 0x85;
    FUN_1082dbec0();
    plStack_88 = (long *)((long)ppppppuVar26 + ((long)ppppuVar20 - (long)ppppuVar16));
    ppppppuStack_78 = ppppppuVar26 + (long)param_2;
    plStack_80 = plStack_88;
    func_0x0001082dc280();
    func_0x0001082dbef4(&pppppppuStack_90);
  }
  ppppppuStack_d8 = ppppppuVar23;
  unaff_x25 = (undefined8 ******)(ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
  unaff_x26 = param_1 + 0x3d;
  unaff_x24 = 0x1138270b0;
  for (ppppppuVar26 = (undefined8 ******)0x0; ppppppuVar9 = unaff_x25, unaff_x25 != ppppppuVar26;
      ppppppuVar26 = (undefined8 ******)((long)ppppppuVar26 + 1)) {
    pppuVar17 = param_1[0x7e][0x11];
    pppppppuVar6 = &pppppppuStack_c8;
    if ((long)*(int *)(pppuVar17 + 0x10) <= (long)ppppppuVar26) {
      pppppppuVar6 = &ppppppuStack_c0;
    }
    ppppppuVar23 = *pppppppuVar6;
    if ((long)*(int *)(pppuVar17 + 0xf) <= (long)ppppppuVar26) {
LAB_1082db0a0:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1082db0a4);
      (*pcVar7)();
    }
    puVar22 = pppuVar17[10][(long)ppppppuVar26];
    FUN_108296180(&ppppuStack_98,puVar22);
    ppppuVar16 = ppppuStack_98;
    ppppuVar20 = param_1[0x84];
    if (ppppuVar20 < param_1[0x85]) {
      ppppuStack_98 = (undefined8 ****)0x0;
      ppppuVar24 = ppppuVar20 + 1;
      *ppppuVar20 = ppppuVar16;
    }
    else {
      lVar13 = (long)ppppuVar20 - (long)*pppppuStack_b8;
      uVar1 = (lVar13 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        FUN_1082dbe2c();
        goto LAB_1082db0a0;
      }
      uVar18 = (long)param_1[0x85] - (long)*pppppuStack_b8;
      uVar21 = (long)uVar18 >> 2;
      if (uVar21 <= uVar1) {
        uVar21 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar18) {
        uVar21 = 0x1fffffffffffffff;
      }
      pppppuStack_70 = pppppuStack_d0;
      if (uVar21 == 0) {
        param_2 = (undefined8 *******)0x0;
      }
      else {
        FUN_1082dbec0();
      }
      ppppuVar16 = ppppuStack_98;
      plStack_88 = (long *)(uVar21 + lVar13);
      ppppppuStack_78 = (undefined8 ******)(uVar21 + (long)param_2 * 8);
      ppppuStack_98 = (undefined8 ****)0x0;
      plStack_80 = plStack_88 + 1;
      *plStack_88 = (long)ppppuVar16;
      func_0x0001082dc280();
      ppppuVar24 = param_1[0x84];
      func_0x0001082dbef4(&pppppppuStack_90);
    }
    ppppuVar16 = ppppuStack_98;
    param_1[0x84] = ppppuVar24;
    ppppuStack_98 = (undefined8 ****)0x0;
    if (ppppuVar16 != (undefined8 ****)0x0) {
      func_0x0001082dc174();
      ppppuVar24 = param_1[0x84];
    }
    ppppppuVar25 = (undefined8 ******)ppppuVar24[-1];
    ppppppuStack_b0 = (undefined8 ******)0x1138270b0;
    FUN_1082db348(param_1);
    FUN_1082db368(param_1,&ppppppuStack_b0,&DAT_10f3b93c3);
    ppppppuStack_f0 = ppppppuStack_b0 + 1;
    FUN_10828bae8((long)unaff_x26 + (long)(*unaff_x26)[-3],&UNK_10f481e19);
    uStack_a0 = 0;
    ppppuStack_98 = (undefined8 ****)&uStack_a0;
    bStack_99 = 1;
    ppppppuVar9 = (undefined8 ******)0x20;
    __Znwm();
    *ppppppuVar9 = (undefined8 *****)&PTR_FUN_110a38c28;
    ppppppuVar9[1] = &ppppuStack_98;
    ppppppuVar9[2] = param_1;
    ppppppuVar9[3] = (undefined8 *****)&bStack_99;
    param_2 = &pppppppuStack_90;
    param_3 = ppppppuVar25;
    ppppppuStack_78 = ppppppuVar9;
    func_0x00010829610c(puVar22);
    FUN_10826df70(&pppppppuStack_90);
    if ((bStack_99 & 1) == 0) {
      pppppuStack_a8 = (undefined8 *****)0x1138270b0;
    }
    else {
      FUN_1082db548(param_1,puVar22,ppppppuVar25);
      unaff_x23 = ppppppuStack_b0;
      unaff_x21 = param_1[0x3d][-3];
      FUN_1082db45c(&pppppppuStack_90,param_1,puVar22,ppppppuVar25,*ppppppuVar23 + 1,&UNK_10f4850dd,
                    param_1[0x8f] + 1);
      ppppppuStack_f0 = unaff_x23 + 1;
      pppppppuStack_e8 = pppppppuStack_90;
      if (-1 < (long)plStack_80) {
        pppppppuStack_e8 = &pppppppuStack_90;
      }
      FUN_10828bae8((long)unaff_x26 + (long)unaff_x21,&UNK_10f481e56);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_90);
      param_2 = &ppppppuStack_b0;
      FUN_1083a33c4(&pppppuStack_a8);
      param_3 = ppppppuVar25;
    }
    pppppuVar10 = pppppuStack_a8;
    FUN_1083a3ca0(0x1138270b0);
    FUN_1083a3ca0(ppppppuStack_b0);
    if (*(int *)pppppuVar10 == 0) {
      FUN_1083a3ca0(pppppuVar10);
      ppppppuVar9 = ppppppuVar26;
      break;
    }
    pppppuVar19 = *ppppppuVar23;
    if (pppppuVar19 != pppppuVar10) {
      *ppppppuVar23 = pppppuVar10;
      pppppuVar10 = pppppuVar19;
    }
    FUN_1083a3ca0(pppppuVar10);
  }
  bVar8 = ppppppuVar9 == ppppppuStack_d8;
  pppppuVar10 = (undefined8 *****)(ulong)((long)ppppppuStack_d8 <= (long)ppppppuVar9);
  func_0x0001082dc1c4(uStack_68);
  if (bVar8) {
    return pppppuVar10;
  }
  ___stack_chk_fail();
LAB_1082db0a8:
  FUN_1082dbe2c();
  ppppuVar16 = ppppuStack_98;
  ppppuStack_98 = (undefined8 ****)0x0;
  if (ppppuVar16 != (undefined8 ****)0x0) {
    func_0x0001082dc174();
  }
  plVar11 = (long *)0x1138270b0;
  FUN_1083a3ca0();
  func_0x0001082dc198();
  pcStack_f8 = FUN_1082db10c;
  pppppuStack_140 = unaff_x26;
  ppppppuStack_138 = unaff_x25;
  uStack_130 = unaff_x24;
  ppppppuStack_128 = unaff_x23;
  pppppuStack_120 = param_1;
  pppuStack_118 = unaff_x21;
  ppppppuStack_110 = ppppppuVar23;
  pppppuStack_108 = pppppuVar10;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_1082db348();
  plVar12 = *(long **)(plVar11[0x7e] + 0x88);
  FUN_10826c364();
  (**(code **)(*plVar12 + 0x18))(&plStack_1a0);
  plVar14 = plStack_1a0;
  plStack_1a0 = (long *)0x0;
  lVar13 = plVar11[0x82];
  plVar11[0x82] = (long)plVar14;
  if (lVar13 != 0) {
    func_0x0001082dc174();
    plVar14 = plStack_1a0;
    plStack_1a0 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      func_0x0001082dc174();
    }
  }
  if (((*(byte *)(plVar12 + 2) & 1) == 0) &&
     (plVar14 = plVar12, (**(code **)(*plVar12 + 0x30))(), (int)plVar14 != 0)) {
    FUN_1082da220(plVar11 + 0x3d);
  }
  lStack_148 = 0x1138270b0;
  FUN_1083a394c(&lStack_148,&DAT_10f38bea1);
  plVar14 = plVar11 + 0x3d;
  func_0x0001082dc250();
  ppppppuVar23 = (undefined8 ******)((long)plVar14 + extraout_x8_00);
  FUN_10829dbfc(ppppppuVar23,lStack_148 + 8);
  ppppppuVar26 = *param_2;
  if (*(int *)ppppppuVar26 == 0) {
    ppppppuVar23 = &ppppppuStack_150;
    FUN_1083a3348(ppppppuVar23,&UNK_10f486cec);
  }
  else {
    ppppppuStack_150 = ppppppuVar26;
    if (ppppppuVar26 != (undefined8 ******)0x1138270b0) {
      piVar2 = (int *)((long)ppppppuVar26 + 4);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar8) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  func_0x0001082dc190(*(undefined8 *)(*plVar11 + 0x18));
  ppppppuVar9 = ppppppuVar23;
  func_0x0001082dc2ac();
  func_0x0001082dc190();
  ppppppuVar26 = ppppppuStack_150;
  pppppuVar19 = ppppppuVar9[2];
  pppppuVar10 = *param_3;
  iVar3 = *(int *)pppppuVar10;
  plVar15 = plVar14;
  FUN_1082da310();
  plStack_1a0 = plVar11 + 0x3f;
  pppppuStack_178 = (undefined8 *****)&UNK_10f486cec;
  if (iVar3 != 0) {
    pppppuStack_178 = pppppuVar10 + 1;
  }
  ppppppuStack_180 = ppppppuVar26 + 1;
  puStack_170 = &UNK_10f486b48;
  lStack_160 = plVar11[0x86];
  uStack_158 = *(undefined2 *)(*(long *)(plVar11[0x7e] + 0x88) + 0x84);
  ppppppuStack_198 = ppppppuVar23;
  pppppuStack_190 = pppppuVar19;
  plStack_188 = plVar12;
  plStack_168 = plVar15;
  FUN_1082b706c(plVar11[0x82],&plStack_1a0);
  FUN_10829dbfc((long)plVar14 + *(long *)(*plVar14 + -0x18),&DAT_10f2da10d);
  FUN_1083a3ca0(ppppppuStack_150);
  FUN_1083a3ca0(lStack_148);
  return (undefined8 *****)0x1;
}



/* Entry: 1082db10c; end: 1082db30b;  */

undefined8 FUN_1082db10c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int **ppiVar7;
  int **ppiVar8;
  long *plVar9;
  long extraout_x8;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  long *plStack_b0;
  int **ppiStack_a8;
  int *piStack_a0;
  long *plStack_98;
  int *piStack_90;
  int *piStack_88;
  undefined *puStack_80;
  long *plStack_78;
  long lStack_70;
  undefined2 uStack_68;
  int *piStack_60;
  long lStack_58;
  
  FUN_1082db348();
  plVar4 = *(long **)(param_1[0x7e] + 0x88);
  FUN_10826c364();
  (**(code **)(*plVar4 + 0x18))(&plStack_b0);
  plVar6 = plStack_b0;
  plStack_b0 = (long *)0x0;
  lVar5 = param_1[0x82];
  param_1[0x82] = (long)plVar6;
  if (lVar5 != 0) {
    FUN_1082dc174();
    plVar6 = plStack_b0;
    plStack_b0 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      FUN_1082dc174();
    }
  }
  if (((*(byte *)(plVar4 + 2) & 1) == 0) &&
     (plVar6 = plVar4, (**(code **)(*plVar4 + 0x30))(), (int)plVar6 != 0)) {
    FUN_1082da220(param_1 + 0x3d);
  }
  lStack_58 = 0x1138270b0;
  FUN_1083a394c(&lStack_58,&DAT_10f38bea1);
  plVar6 = param_1 + 0x3d;
  func_0x0001082dc250();
  ppiVar7 = (int **)((long)plVar6 + extraout_x8);
  FUN_10829dbfc(ppiVar7,lStack_58 + 8);
  piVar10 = (int *)*param_2;
  if (*piVar10 == 0) {
    ppiVar7 = &piStack_60;
    FUN_1083a3348(ppiVar7,&UNK_10f486cec);
  }
  else {
    piStack_60 = piVar10;
    if (piVar10 != (int *)0x1138270b0) {
      piVar10 = piVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  func_0x0001082dc190(*(undefined8 *)(*param_1 + 0x18));
  ppiVar8 = ppiVar7;
  func_0x0001082dc2ac();
  func_0x0001082dc190();
  piVar10 = piStack_60;
  piVar12 = ppiVar8[2];
  piVar11 = (int *)*param_3;
  iVar1 = *piVar11;
  plVar9 = plVar6;
  FUN_1082da310();
  plStack_b0 = param_1 + 0x3f;
  piStack_88 = (int *)&UNK_10f486cec;
  if (iVar1 != 0) {
    piStack_88 = piVar11 + 2;
  }
  piStack_90 = piVar10 + 2;
  puStack_80 = &UNK_10f486b48;
  lStack_70 = param_1[0x86];
  uStack_68 = *(undefined2 *)(*(long *)(param_1[0x7e] + 0x88) + 0x84);
  ppiStack_a8 = ppiVar7;
  piStack_a0 = piVar12;
  plStack_98 = plVar4;
  plStack_78 = plVar9;
  FUN_1082b706c(param_1[0x82],&plStack_b0);
  FUN_10829dbfc((long)plVar6 + *(long *)(*plVar6 + -0x18),&DAT_10f2da10d);
  FUN_1083a3ca0(piStack_60);
  FUN_1083a3ca0(lStack_58);
  return 1;
}



/* Entry: 1082db30c; end: 1082db347;  */

bool FUN_1082db30c(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x10))();
  return (int)param_1[0x87] <= *(int *)(plVar1[2] + 0x88);
}



/* Entry: 1082db348; end: 1082db367;  */

void FUN_1082db348(long param_1)

{
  long lVar1;
  
  *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
  lVar1 = param_1 + 0x1e8 + *(long *)(*(long *)(param_1 + 0x1e8) + -0x18);
  FUN_1082dbd2c(lVar1 + 0xa0);
  *(int *)(lVar1 + 0x1d0) = *(int *)(lVar1 + 0x1d0) + 1;
  return;
}


