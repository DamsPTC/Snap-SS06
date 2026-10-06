/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10351e80c; end: 10351e847;  */

void FUN_10351e80c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75e30;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75e30,&UNK_10dbd4738);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10351e848; end: 10351e953;  */

void FUN_10351e848(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [304];
  
  func_0x000107c610b4(auStack_160);
  func_0x000107c6068c(auStack_1a8,0);
  func_0x000107c5fa50(auStack_1a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10351e954; end: 10351e9a7;  */

uint FUN_10351e954(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_280 [304];
  undefined1 auStack_150 [304];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_280,param_1,0x130);
  func_0x000107c610b4(auStack_150,param_2,0x130);
  FUN_10351efa0(auStack_280,auStack_150);
  return uVar1 & 1;
}



/* Entry: 10351e9a8; end: 10351ea83;  */

uint FUN_10351e9a8(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_3d0 [304];
  undefined1 auStack_2a0 [304];
  undefined1 auStack_170 [304];
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      do {
        lVar2 = lVar2 + -1;
        func_0x000107c610b4(auStack_2a0,param_1,0x130);
        func_0x000107c610b4(auStack_170,param_2,0x130);
        func_0x000103521900(auStack_2a0,auStack_3d0);
        func_0x000103521900(auStack_170,auStack_3d0);
        puVar1 = auStack_2a0;
        FUN_10351efa0(puVar1,auStack_170);
        uVar3 = (uint)puVar1;
        func_0x000103521934(auStack_170);
        func_0x000103521934(auStack_2a0);
        if (((ulong)puVar1 & 1) == 0) break;
        param_2 = param_2 + 0x130;
        param_1 = param_1 + 0x130;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 10351ea84; end: 10351ebb3;  */

uint FUN_10351ea84(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [200];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_138 = puVar4[0x15];
        uStack_140 = puVar4[0x14];
        uStack_128 = puVar4[0x17];
        uStack_130 = puVar4[0x16];
        uStack_120 = puVar4[0x18];
        uStack_178 = puVar4[0xd];
        uStack_180 = puVar4[0xc];
        uStack_168 = puVar4[0xf];
        uStack_170 = puVar4[0xe];
        uStack_158 = puVar4[0x11];
        uStack_160 = puVar4[0x10];
        uStack_148 = puVar4[0x13];
        uStack_150 = puVar4[0x12];
        uStack_1b8 = puVar4[5];
        uStack_1c0 = puVar4[4];
        uStack_1a8 = puVar4[7];
        uStack_1b0 = puVar4[6];
        uStack_198 = puVar4[9];
        uStack_1a0 = puVar4[8];
        uStack_188 = puVar4[0xb];
        uStack_190 = puVar4[10];
        uStack_1d8 = puVar4[1];
        uStack_1e0 = *puVar4;
        uStack_1c8 = puVar4[3];
        uStack_1d0 = puVar4[2];
        uStack_68 = puVar5[0x15];
        uStack_70 = puVar5[0x14];
        uStack_58 = puVar5[0x17];
        uStack_60 = puVar5[0x16];
        uStack_50 = puVar5[0x18];
        uStack_a8 = puVar5[0xd];
        uStack_b0 = puVar5[0xc];
        uStack_98 = puVar5[0xf];
        uStack_a0 = puVar5[0xe];
        uStack_88 = puVar5[0x11];
        uStack_90 = puVar5[0x10];
        uStack_78 = puVar5[0x13];
        uStack_80 = puVar5[0x12];
        uStack_e8 = puVar5[5];
        uStack_f0 = puVar5[4];
        uStack_d8 = puVar5[7];
        uStack_e0 = puVar5[6];
        uStack_c8 = puVar5[9];
        uStack_d0 = puVar5[8];
        uStack_b8 = puVar5[0xb];
        uStack_c0 = puVar5[10];
        uStack_108 = puVar5[1];
        uStack_110 = *puVar5;
        uStack_f8 = puVar5[3];
        uStack_100 = puVar5[2];
        func_0x000103521890(&uStack_1e0,auStack_2a8);
        func_0x000103521890(&uStack_110,auStack_2a8);
        puVar1 = &uStack_1e0;
        FUN_103522e4c(puVar1,&uStack_110);
        uVar3 = (uint)puVar1;
        func_0x0001035218cc(&uStack_110);
        func_0x0001035218cc(&uStack_1e0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x19;
        puVar4 = puVar4 + 0x19;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 10351ebb4; end: 10351ebbf;  */

void FUN_10351ebb4(void)

{
  return;
}



/* Entry: 10351ebc0; end: 10351ec07;  */

undefined8 FUN_10351ebc0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10351ec08; end: 10351ec2f;  */

int FUN_10351ec08(int *param_1)

{
  if ((char)param_1[0x30] != '\0') {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10351ec30; end: 10351ec63;  */

undefined8 FUN_10351ec30(undefined8 param_1,undefined8 param_2)

{
  FUN_103521394(param_2,param_1,&UNK_110660830);
  return param_2;
}



/* Entry: 10351ec64; end: 10351ef1f;  */

uint FUN_10351ec64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  
  iVar2 = (int)&uStack_340;
  puVar6 = &uStack_340;
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  iVar3 = (int)&uStack_1c0;
  func_0x00010351ec24();
  puVar5 = &uStack_1c0;
  func_0x000100d55140();
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      uVar7 = *puVar5;
      uVar1 = puVar5[1];
      uVar8 = puVar5[2];
      uStack_78 = param_2[0x11];
      uStack_80 = param_2[0x10];
      uStack_68 = param_2[0x13];
      uStack_70 = param_2[0x12];
      uStack_58 = param_2[0x15];
      uStack_60 = param_2[0x14];
      uStack_48 = param_2[0x17];
      uStack_50 = param_2[0x16];
      uStack_b8 = param_2[9];
      uStack_c0 = param_2[8];
      uStack_a8 = param_2[0xb];
      uStack_b0 = param_2[10];
      uStack_98 = param_2[0xd];
      uStack_a0 = param_2[0xc];
      uStack_88 = param_2[0xf];
      uStack_90 = param_2[0xe];
      uStack_f8 = param_2[1];
      uStack_100 = *param_2;
      uStack_e8 = param_2[3];
      uStack_f0 = param_2[2];
      uStack_d8 = param_2[5];
      uStack_e0 = param_2[4];
      uStack_c8 = param_2[7];
      uStack_d0 = param_2[6];
      iVar3 = (int)&uStack_100;
      func_0x00010351ec24();
      if (iVar3 == 0) {
        puVar5 = &uStack_100;
        func_0x000100d55140();
        FUN_1035c9484(uVar7,uVar1,uVar8,*puVar5,puVar5[1],puVar5[2]);
        uVar4 = (uint)uVar7;
        goto LAB_10351ef04;
      }
    }
    else {
      uVar7 = *puVar5;
      uVar1 = puVar5[1];
      uVar8 = puVar5[2];
      uStack_78 = param_2[0x11];
      uStack_80 = param_2[0x10];
      uStack_68 = param_2[0x13];
      uStack_70 = param_2[0x12];
      uStack_58 = param_2[0x15];
      uStack_60 = param_2[0x14];
      uStack_48 = param_2[0x17];
      uStack_50 = param_2[0x16];
      uStack_b8 = param_2[9];
      uStack_c0 = param_2[8];
      uStack_a8 = param_2[0xb];
      uStack_b0 = param_2[10];
      uStack_98 = param_2[0xd];
      uStack_a0 = param_2[0xc];
      uStack_88 = param_2[0xf];
      uStack_90 = param_2[0xe];
      uStack_f8 = param_2[1];
      uStack_100 = *param_2;
      uStack_e8 = param_2[3];
      uStack_f0 = param_2[2];
      uStack_d8 = param_2[5];
      uStack_e0 = param_2[4];
      uStack_c8 = param_2[7];
      uStack_d0 = param_2[6];
      iVar3 = (int)&uStack_100;
      func_0x00010351ec24();
      if (iVar3 == 1) {
        puVar5 = &uStack_100;
        func_0x000100d55140();
        FUN_10358180c(uVar7,uVar1,uVar8,*puVar5,puVar5[1],puVar5[2]);
        uVar4 = (uint)uVar7;
        goto LAB_10351ef04;
      }
    }
  }
  else if (iVar3 == 2) {
    uStack_78 = puVar5[0x11];
    uStack_80 = puVar5[0x10];
    uStack_68 = puVar5[0x13];
    uStack_70 = puVar5[0x12];
    uStack_58 = puVar5[0x15];
    uStack_60 = puVar5[0x14];
    uStack_48 = puVar5[0x17];
    uStack_50 = puVar5[0x16];
    uStack_b8 = puVar5[9];
    uStack_c0 = puVar5[8];
    uStack_a8 = puVar5[0xb];
    uStack_b0 = puVar5[10];
    uStack_98 = puVar5[0xd];
    uStack_a0 = puVar5[0xc];
    uStack_88 = puVar5[0xf];
    uStack_90 = puVar5[0xe];
    uStack_f8 = puVar5[1];
    uStack_100 = *puVar5;
    uStack_e8 = puVar5[3];
    uStack_f0 = puVar5[2];
    uStack_d8 = puVar5[5];
    uStack_e0 = puVar5[4];
    uStack_c8 = puVar5[7];
    uStack_d0 = puVar5[6];
    uStack_318 = param_2[5];
    uStack_320 = param_2[4];
    uStack_308 = param_2[7];
    uStack_310 = param_2[6];
    uStack_338 = param_2[1];
    uStack_340 = *param_2;
    uStack_328 = param_2[3];
    uStack_330 = param_2[2];
    uStack_2d8 = param_2[0xd];
    uStack_2e0 = param_2[0xc];
    uStack_2c8 = param_2[0xf];
    uStack_2d0 = param_2[0xe];
    uStack_2f8 = param_2[9];
    uStack_300 = param_2[8];
    uStack_2e8 = param_2[0xb];
    uStack_2f0 = param_2[10];
    uStack_298 = param_2[0x15];
    uStack_2a0 = param_2[0x14];
    uStack_288 = param_2[0x17];
    uStack_290 = param_2[0x16];
    uStack_2b8 = param_2[0x11];
    uStack_2c0 = param_2[0x10];
    uStack_2a8 = param_2[0x13];
    uStack_2b0 = param_2[0x12];
    func_0x00010351ec24();
    if (iVar2 == 2) {
      func_0x000100d55140();
      uStack_1f8 = puVar6[0x11];
      uStack_200 = puVar6[0x10];
      uStack_1e8 = puVar6[0x13];
      uStack_1f0 = puVar6[0x12];
      uStack_1d8 = puVar6[0x15];
      uStack_1e0 = puVar6[0x14];
      uStack_1c8 = puVar6[0x17];
      uStack_1d0 = puVar6[0x16];
      uStack_238 = puVar6[9];
      uStack_240 = puVar6[8];
      uStack_228 = puVar6[0xb];
      uStack_230 = puVar6[10];
      uStack_218 = puVar6[0xd];
      uStack_220 = puVar6[0xc];
      uStack_208 = puVar6[0xf];
      uStack_210 = puVar6[0xe];
      uStack_278 = puVar6[1];
      uStack_280 = *puVar6;
      uStack_268 = puVar6[3];
      uStack_270 = puVar6[2];
      uStack_258 = puVar6[5];
      uStack_260 = puVar6[4];
      uStack_248 = puVar6[7];
      uStack_250 = puVar6[6];
      puVar5 = &uStack_100;
      FUN_1035a4934(puVar5,&uStack_280);
      uVar4 = (uint)puVar5;
      goto LAB_10351ef04;
    }
  }
  else {
    uVar7 = *puVar5;
    uVar1 = puVar5[1];
    uVar8 = puVar5[2];
    uStack_78 = param_2[0x11];
    uStack_80 = param_2[0x10];
    uStack_68 = param_2[0x13];
    uStack_70 = param_2[0x12];
    uStack_58 = param_2[0x15];
    uStack_60 = param_2[0x14];
    uStack_48 = param_2[0x17];
    uStack_50 = param_2[0x16];
    uStack_b8 = param_2[9];
    uStack_c0 = param_2[8];
    uStack_a8 = param_2[0xb];
    uStack_b0 = param_2[10];
    uStack_98 = param_2[0xd];
    uStack_a0 = param_2[0xc];
    uStack_88 = param_2[0xf];
    uStack_90 = param_2[0xe];
    uStack_f8 = param_2[1];
    uStack_100 = *param_2;
    uStack_e8 = param_2[3];
    uStack_f0 = param_2[2];
    uStack_d8 = param_2[5];
    uStack_e0 = param_2[4];
    uStack_c8 = param_2[7];
    uStack_d0 = param_2[6];
    iVar3 = (int)&uStack_100;
    func_0x00010351ec24();
    if (iVar3 == 3) {
      puVar5 = &uStack_100;
      func_0x000100d55140();
      FUN_103598e38(uVar7,uVar1,uVar8,*puVar5,puVar5[1],puVar5[2]);
      uVar4 = (uint)uVar7;
      goto LAB_10351ef04;
    }
  }
  uVar4 = 0;
LAB_10351ef04:
  return uVar4 & 1;
}



/* Entry: 10351ef20; end: 10351ef9f;  */

void FUN_10351ef20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd4560;
  func_0x000107c61520(&DAT_10dbd4560,&UNK_110660788);
  puRam0000000112f75db8 = puVar1;
  return;
}



/* Entry: 10351efa0; end: 10351fb93;  */

uint FUN_10351efa0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  long lVar33;
  undefined1 auStack_7f8 [200];
  long lStack_730;
  long lStack_728;
  long lStack_720;
  long lStack_718;
  long lStack_710;
  long lStack_708;
  long lStack_700;
  long lStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  undefined1 uStack_670;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  undefined1 uStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  undefined1 uStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  undefined1 uStack_350;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  undefined1 uStack_280;
  long lStack_270;
  ulong uStack_268;
  ulong uStack_260;
  long lStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_230;
  long lStack_228;
  ulong uStack_220;
  long lStack_218;
  ulong uStack_210;
  long lStack_208;
  ulong uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar27 = param_1[0x20];
  uVar31 = param_1[0x1f];
  lVar25 = param_1[0x22];
  uVar29 = param_1[0x21];
  lVar28 = param_2[0x20];
  uVar30 = param_2[0x1f];
  lVar33 = param_2[0x22];
  uVar32 = param_2[0x21];
  uStack_230 = uVar30;
  lStack_228 = lVar28;
  uStack_220 = uVar32;
  lStack_218 = lVar33;
  uStack_210 = uVar31;
  lStack_208 = lVar27;
  uStack_200 = uVar29;
  lStack_1f8 = lVar25;
  if (lVar27 == 0) {
    if (lVar28 != 0) goto LAB_10351f0bc;
    FUN_10351ebc0(&uStack_210,&lStack_5a0,0x112db6f40,&UNK_10d9681d0);
    FUN_10351ebc0(&uStack_230,&lStack_5a0,0x112db6f40,&UNK_10d9681d0);
LAB_10351f158:
    func_0x000101597ae4(uVar31,lVar27,uVar29,lVar25);
    uVar31 = param_1[0x24];
    lVar27 = param_1[0x23];
    uVar29 = param_1[0x25];
    uVar32 = param_2[0x24];
    lVar25 = param_2[0x23];
    uVar30 = param_2[0x25];
    lStack_270 = lVar25;
    uStack_268 = uVar32;
    uStack_260 = uVar30;
    lStack_250 = lVar27;
    uStack_248 = uVar31;
    uStack_240 = uVar29;
    if (uVar29 >> 0x3c < 0xf) {
      if (0xe < uVar30 >> 0x3c) goto LAB_10351f418;
      if ((int)lVar27 == (int)lVar25) {
        FUN_10351ebc0(&lStack_250,&lStack_5a0,0x112db80f8,&UNK_10d9671e0);
        FUN_10351ebc0(&lStack_270,&lStack_5a0,0x112db80f8,&UNK_10d9671e0);
        uVar24 = uVar31;
        func_0x000100e25fcc(uVar31,uVar29,uVar32,uVar30);
        func_0x000100d55124(lVar25,uVar32,uVar30);
        if ((uVar24 & 1) != 0) goto LAB_10351f1f8;
      }
      else {
        FUN_10351ebc0(&lStack_250,&lStack_5a0,0x112db80f8,&UNK_10d9671e0);
        FUN_10351ebc0(&lStack_270,&lStack_5a0,0x112db80f8,&UNK_10d9671e0);
        func_0x000100d55124(lVar25,uVar32,uVar30);
      }
    }
    else {
      if (0xe < uVar30 >> 0x3c) {
        FUN_10351ebc0(&lStack_250,&lStack_5a0,0x112db80f8,&UNK_10d9671e0);
        FUN_10351ebc0(&lStack_270,&lStack_5a0,0x112db80f8,&UNK_10d9671e0);
LAB_10351f1f8:
        func_0x000100d55124(lVar27,uVar31,uVar29);
        lVar25 = *param_1;
        lVar28 = *param_2;
        lVar27 = param_2[1];
        func_0x000103559d2c(lVar25,(char)param_1[1]);
        func_0x000103559d2c(lVar28,(char)lVar27);
        if (lVar25 == lVar28) {
          lStack_508 = param_1[0x15];
          lStack_510 = param_1[0x14];
          lStack_298 = param_1[0x17];
          lStack_2a0 = param_1[0x16];
          lStack_4f8 = param_1[0x17];
          lStack_500 = param_1[0x16];
          lStack_288 = param_1[0x19];
          lStack_290 = param_1[0x18];
          lStack_548 = param_1[0xd];
          lStack_550 = param_1[0xc];
          lStack_2d8 = param_1[0xf];
          lStack_2e0 = param_1[0xe];
          lStack_538 = param_1[0xf];
          lStack_540 = param_1[0xe];
          lStack_2c8 = param_1[0x11];
          lStack_2d0 = param_1[0x10];
          lStack_528 = param_1[0x11];
          lStack_530 = param_1[0x10];
          lStack_2b8 = param_1[0x13];
          lStack_2c0 = param_1[0x12];
          lStack_518 = param_1[0x13];
          lStack_520 = param_1[0x12];
          lStack_2a8 = param_1[0x15];
          lStack_2b0 = param_1[0x14];
          lStack_588 = param_1[5];
          lStack_590 = param_1[4];
          lStack_318 = param_1[7];
          lStack_320 = param_1[6];
          lStack_578 = param_1[7];
          lStack_580 = param_1[6];
          lStack_308 = param_1[9];
          lStack_310 = param_1[8];
          lStack_568 = param_1[9];
          lStack_570 = param_1[8];
          lStack_2f8 = param_1[0xb];
          lStack_300 = param_1[10];
          lStack_558 = param_1[0xb];
          lStack_560 = param_1[10];
          lStack_2e8 = param_1[0xd];
          lStack_2f0 = param_1[0xc];
          lStack_338 = param_1[3];
          lStack_340 = param_1[2];
          lStack_328 = param_1[5];
          lStack_330 = param_1[4];
          lStack_598 = param_1[3];
          lStack_5a0 = param_1[2];
          lStack_440 = param_2[0x15];
          lStack_448 = param_2[0x14];
          lStack_368 = param_2[0x17];
          lStack_370 = param_2[0x16];
          lStack_430 = param_2[0x17];
          lStack_438 = param_2[0x16];
          lStack_358 = param_2[0x19];
          lStack_360 = param_2[0x18];
          lStack_480 = param_2[0xd];
          lStack_488 = param_2[0xc];
          lStack_3a8 = param_2[0xf];
          lStack_3b0 = param_2[0xe];
          lStack_470 = param_2[0xf];
          lStack_478 = param_2[0xe];
          lStack_398 = param_2[0x11];
          lStack_3a0 = param_2[0x10];
          lStack_460 = param_2[0x11];
          lStack_468 = param_2[0x10];
          lStack_388 = param_2[0x13];
          lStack_390 = param_2[0x12];
          lStack_450 = param_2[0x13];
          lStack_458 = param_2[0x12];
          lStack_378 = param_2[0x15];
          lStack_380 = param_2[0x14];
          lStack_4c0 = param_2[5];
          lStack_4c8 = param_2[4];
          lStack_3e8 = param_2[7];
          lStack_3f0 = param_2[6];
          lStack_4b0 = param_2[7];
          lStack_4b8 = param_2[6];
          lStack_3d8 = param_2[9];
          lStack_3e0 = param_2[8];
          lStack_490 = param_2[0xb];
          lStack_498 = param_2[10];
          lStack_3b8 = param_2[0xd];
          lStack_3c0 = param_2[0xc];
          lStack_4a0 = param_2[9];
          lStack_4a8 = param_2[8];
          lStack_3c8 = param_2[0xb];
          lStack_3d0 = param_2[10];
          lStack_408 = param_2[3];
          lStack_410 = param_2[2];
          lStack_3f8 = param_2[5];
          lStack_400 = param_2[4];
          lStack_4d8 = param_2[2];
          lStack_4d0 = param_2[3];
          lStack_4e8 = param_1[0x19];
          lStack_4f0 = param_1[0x18];
          iVar22 = (int)&lStack_4d8;
          lStack_420 = param_2[0x19];
          lStack_428 = param_2[0x18];
          uStack_280 = (undefined1)param_1[0x1a];
          uStack_350 = (undefined1)param_2[0x1a];
          uStack_4e0 = (undefined1)param_1[0x1a];
          uStack_418 = (undefined1)param_2[0x1a];
          iVar21 = (int)&lStack_5a0;
          FUN_10351ec08();
          lVar20 = lStack_4e8;
          lVar19 = lStack_4f0;
          lVar18 = lStack_4f8;
          lVar17 = lStack_500;
          lVar16 = lStack_508;
          lVar15 = lStack_510;
          lVar14 = lStack_518;
          lVar13 = lStack_520;
          lVar12 = lStack_528;
          lVar11 = lStack_530;
          lVar10 = lStack_538;
          lVar9 = lStack_540;
          lVar8 = lStack_548;
          lVar7 = lStack_550;
          lVar6 = lStack_558;
          lVar5 = lStack_560;
          lVar4 = lStack_568;
          lVar3 = lStack_570;
          lVar2 = lStack_578;
          lVar1 = lStack_580;
          lVar33 = lStack_588;
          lVar28 = lStack_590;
          lVar25 = lStack_598;
          lVar27 = lStack_5a0;
          if (iVar21 == 1) {
            FUN_10351ec08();
            if (iVar22 == 1) {
              lStack_688 = lStack_4f8;
              lStack_690 = lStack_500;
              lStack_678 = lStack_4e8;
              lStack_680 = lStack_4f0;
              uStack_670 = uStack_4e0;
              lStack_6c8 = lStack_538;
              lStack_6d0 = lStack_540;
              lStack_6b8 = lStack_528;
              lStack_6c0 = lStack_530;
              lStack_6a8 = lStack_518;
              lStack_6b0 = lStack_520;
              lStack_698 = lStack_508;
              lStack_6a0 = lStack_510;
              lStack_708 = lStack_578;
              lStack_710 = lStack_580;
              lStack_6f8 = lStack_568;
              lStack_700 = lStack_570;
              lStack_6e8 = lStack_558;
              lStack_6f0 = lStack_560;
              lStack_6d8 = lStack_548;
              lStack_6e0 = lStack_550;
              lStack_728 = lStack_598;
              lStack_730 = lStack_5a0;
              lStack_718 = lStack_588;
              lStack_720 = lStack_590;
              FUN_10351ebc0(&lStack_340,auStack_7f8,0x112f730d0,&UNK_10dbce2e0);
              FUN_10351ebc0(&lStack_410,auStack_7f8,0x112f730d0,&UNK_10dbce2e0);
              FUN_10352180c(&lStack_730,0x112f730d0,&UNK_10dbce2e0);
LAB_10351f788:
              lVar27 = param_1[0x1b];
              lVar25 = param_2[0x1b];
              if ((char)param_2[0x1c] != '\x01') {
                if (lVar27 == lVar25) goto LAB_10351f7b8;
                goto LAB_10351f57c;
              }
              if (lVar25 < 2) {
                if (lVar25 == 0) {
                  if (lVar27 == 0) {
LAB_10351f7b8:
                    lVar27 = param_1[0x1d];
                    func_0x000100e25fcc(lVar27,param_1[0x1e],param_2[0x1d],param_2[0x1e]);
                    uVar23 = (uint)lVar27;
                    goto LAB_10351f580;
                  }
                }
                else if (lVar27 == 1) goto LAB_10351f7b8;
              }
              else if (lVar25 == 2) {
                if (lVar27 == 2) goto LAB_10351f7b8;
              }
              else if (lVar27 == 3) goto LAB_10351f7b8;
            }
            else {
LAB_10351f5ec:
              func_0x000107c610b4(&lStack_730,&lStack_5a0,0x189);
              FUN_10351ebc0(&lStack_340,auStack_7f8,0x112f730d0,&UNK_10dbce2e0);
              FUN_10351ebc0(&lStack_410,auStack_7f8,0x112f730d0,&UNK_10dbce2e0);
              FUN_10352180c(&lStack_730,0x112f75e50,&UNK_10dbd4748);
            }
          }
          else {
            FUN_10351ec08();
            if (iVar22 == 1) goto LAB_10351f5ec;
            lStack_688 = lStack_430;
            lStack_690 = lStack_438;
            lStack_678 = lStack_420;
            lStack_680 = lStack_428;
            lStack_6c8 = lStack_470;
            lStack_6d0 = lStack_478;
            lStack_6b8 = lStack_460;
            lStack_6c0 = lStack_468;
            lStack_6a8 = lStack_450;
            lStack_6b0 = lStack_458;
            lStack_698 = lStack_440;
            lStack_6a0 = lStack_448;
            lStack_708 = lStack_4b0;
            lStack_710 = lStack_4b8;
            lStack_6f8 = lStack_4a0;
            lStack_700 = lStack_4a8;
            lStack_6e8 = lStack_490;
            lStack_6f0 = lStack_498;
            lStack_6d8 = lStack_480;
            lStack_6e0 = lStack_488;
            lStack_728 = lStack_4d0;
            lStack_730 = lStack_4d8;
            lStack_718 = lStack_4c0;
            lStack_720 = lStack_4c8;
            lStack_a8 = lStack_450;
            lStack_b0 = lStack_458;
            lStack_98 = lStack_440;
            lStack_a0 = lStack_448;
            lStack_88 = lStack_430;
            lStack_90 = lStack_438;
            lStack_78 = lStack_420;
            lStack_80 = lStack_428;
            lStack_e8 = lStack_490;
            lStack_f0 = lStack_498;
            lStack_d8 = lStack_480;
            lStack_e0 = lStack_488;
            lStack_c8 = lStack_470;
            lStack_d0 = lStack_478;
            lStack_b8 = lStack_460;
            lStack_c0 = lStack_468;
            lStack_128 = lStack_4d0;
            lStack_130 = lStack_4d8;
            lStack_118 = lStack_4c0;
            lStack_120 = lStack_4c8;
            uStack_670 = uStack_418;
            lStack_108 = lStack_4b0;
            lStack_110 = lStack_4b8;
            lStack_f8 = lStack_4a0;
            lStack_100 = lStack_4a8;
            lStack_168 = lVar14;
            lStack_170 = lVar13;
            lStack_158 = lVar16;
            lStack_160 = lVar15;
            lStack_148 = lVar18;
            lStack_150 = lVar17;
            lStack_138 = lVar20;
            lStack_140 = lVar19;
            lStack_1a8 = lVar6;
            lStack_1b0 = lVar5;
            lStack_198 = lVar8;
            lStack_1a0 = lVar7;
            lStack_188 = lVar10;
            lStack_190 = lVar9;
            lStack_178 = lVar12;
            lStack_180 = lVar11;
            lStack_1e8 = lVar25;
            lStack_1f0 = lVar27;
            lStack_1d8 = lVar33;
            lStack_1e0 = lVar28;
            lStack_1c8 = lVar2;
            lStack_1d0 = lVar1;
            lStack_1b8 = lVar4;
            lStack_1c0 = lVar3;
            FUN_10351ebc0(&lStack_340,auStack_7f8,0x112f730d0,&UNK_10dbce2e0);
            FUN_10351ebc0(&lStack_410,auStack_7f8,0x112f730d0,&UNK_10dbce2e0);
            plVar26 = &lStack_1f0;
            FUN_10351ec64(plVar26,&lStack_130);
            FUN_10352180c(&lStack_730,0x112f730d0,&UNK_10dbce2e0);
            FUN_10352180c(&lStack_5a0,0x112f730d0,&UNK_10dbce2e0);
            if (((ulong)plVar26 & 1) != 0) goto LAB_10351f788;
          }
        }
        goto LAB_10351f57c;
      }
LAB_10351f418:
      FUN_10351ebc0(&lStack_250,&lStack_5a0,0x112db80f8,&UNK_10d9671e0);
      FUN_10351ebc0(&lStack_270,&lStack_5a0,0x112db80f8,&UNK_10d9671e0);
      func_0x000100d55124(lVar27,uVar31,uVar29);
      lVar27 = lVar25;
      uVar31 = uVar32;
      uVar29 = uVar30;
    }
    func_0x000100d55124(lVar27,uVar31,uVar29);
  }
  else {
    if (lVar28 == 0) {
LAB_10351f0bc:
      FUN_10351ebc0(&uStack_210,&lStack_5a0,0x112db6f40,&UNK_10d9681d0);
      FUN_10351ebc0(&uStack_230,&lStack_5a0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar31,lVar27,uVar29,lVar25);
      uVar31 = uVar30;
      lVar27 = lVar28;
      uVar29 = uVar32;
      lVar25 = lVar33;
    }
    else if (((uVar31 == uVar30) && (lVar27 == lVar28)) ||
            (uVar24 = uVar31, func_0x000107c605b8(uVar31,lVar27,uVar30,lVar28,0), (uVar24 & 1) != 0)
            ) {
      FUN_10351ebc0(&uStack_210,&lStack_5a0,0x112db6f40,&UNK_10d9681d0);
      FUN_10351ebc0(&uStack_230,&lStack_5a0,0x112db6f40,&UNK_10d9681d0);
      uVar24 = uVar29;
      func_0x000100e25fcc(uVar29,lVar25,uVar32,lVar33);
      func_0x000101597ae4(uVar30,lVar28,uVar32,lVar33);
      if ((uVar24 & 1) != 0) goto LAB_10351f158;
    }
    else {
      FUN_10351ebc0(&uStack_210,&lStack_5a0,0x112db6f40,&UNK_10d9681d0);
      FUN_10351ebc0(&uStack_230,&lStack_5a0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar30,lVar28,uVar32,lVar33);
    }
    func_0x000101597ae4(uVar31,lVar27,uVar29,lVar25);
  }
LAB_10351f57c:
  uVar23 = 0;
LAB_10351f580:
  return uVar23 & 1;
}



/* Entry: 10351fb94; end: 10351fc53;  */

void FUN_10351fb94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd44f8;
  func_0x000107c61520(&UNK_10dbd44f8,&UNK_1106606f8);
  puRam0000000112f75dc8 = puVar1;
  return;
}



/* Entry: 10351fc54; end: 10351fc67;  */

void FUN_10351fc54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10351fc68();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10351fca8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10351fc68; end: 10351fce7;  */

void FUN_10351fc68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75de8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd43e8;
  func_0x000107c61520(&UNK_10dbd43e8,&UNK_110660680);
  puRam0000000112f75de8 = puVar1;
  return;
}



/* Entry: 10351fce8; end: 10351fceb;  */

void FUN_10351fce8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f75df8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f75e00;
  func_0x00010002969c(0x112f75e00,&UNK_10dbd4370);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f75df8 = puVar2;
  return;
}



/* Entry: 10351fcec; end: 10351fd3b;  */

void FUN_10351fcec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f75df8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f75e00;
  func_0x00010002969c(0x112f75e00,&UNK_10dbd4370);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f75df8 = puVar2;
  return;
}



/* Entry: 10351fd3c; end: 10351fd3f;  */

void FUN_10351fd3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4428;
  func_0x000107c61520(&UNK_10dbd4428,&UNK_110660680);
  puRam0000000112f75e08 = puVar1;
  return;
}



/* Entry: 10351fd40; end: 10351fd7f;  */

void FUN_10351fd40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4428;
  func_0x000107c61520(&UNK_10dbd4428,&UNK_110660680);
  puRam0000000112f75e08 = puVar1;
  return;
}



/* Entry: 10351fd80; end: 10351fda3;  */

void FUN_10351fd80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10351fda4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10351fda4; end: 10351fde3;  */

void FUN_10351fda4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd44d0;
  func_0x000107c61520(&UNK_10dbd44d0,&UNK_1106606f8);
  puRam0000000112f75e10 = puVar1;
  return;
}



/* Entry: 10351fde4; end: 10351fdfb;  */

void FUN_10351fde4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10351fb94();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103502ad4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10351fdfc; end: 10351fe3b;  */

void FUN_10351fdfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4538;
  func_0x000107c61520(&UNK_10dbd4538,&UNK_1106606f8);
  puRam0000000112f75e18 = puVar1;
  return;
}



/* Entry: 10351fe3c; end: 10351fe5f;  */

void FUN_10351fe3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10351fe60();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10351fe60; end: 10351fe9f;  */

void FUN_10351fe60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd45a8;
  func_0x000107c61520(&UNK_10dbd45a8,&UNK_110660788);
  puRam0000000112f75e20 = puVar1;
  return;
}



/* Entry: 10351fea0; end: 10351feb3;  */

void FUN_10351fea0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10351fc14)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10351ef20();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10351feb4; end: 10351fee3;  */

void FUN_10351feb4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10351fee4; end: 10351fee7;  */

void FUN_10351fee4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4610;
  func_0x000107c61520(&UNK_10dbd4610,&UNK_110660788);
  puRam0000000112f75e28 = puVar1;
  return;
}



/* Entry: 10351fee8; end: 10351ff27;  */

void FUN_10351fee8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4610;
  func_0x000107c61520(&UNK_10dbd4610,&UNK_110660788);
  puRam0000000112f75e28 = puVar1;
  return;
}



/* Entry: 10351ff28; end: 10351ffc7;  */

int FUN_10351ff28(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10351ffc8; end: 10352004b;  */

/* WARNING: Possible PIC construction at 0x00010351ffec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103520004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010351fff0) */
/* WARNING: Removing unreachable block (ram,0x000103520008) */
/* WARNING: Removing unreachable block (ram,0x000103520018) */
/* WARNING: Removing unreachable block (ram,0x00010352003c) */
/* WARNING: Removing unreachable block (ram,0x000103520030) */
/* WARNING: Removing unreachable block (ram,0x00010351fff8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10351ffc8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = (uint)((ulong)param_1[3] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[3] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10352004c; end: 103520153;  */

undefined8 * FUN_10352004c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar5 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar5,uVar2);
  param_1[2] = uVar5;
  param_1[3] = uVar2;
  lVar3 = param_2[6];
  if (lVar3 == 0) {
    uVar5 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    param_1[6] = param_2[6];
  }
  else {
    uVar5 = param_2[4];
    uVar1 = param_2[5];
    func_0x00010006c00c(uVar5,uVar1);
    param_1[4] = uVar5;
    param_1[5] = uVar1;
    param_1[6] = lVar3;
    func_0x000107c6157c(lVar3);
  }
  uVar4 = param_2[8];
  if (uVar4 >> 0x3c < 0xf) {
    uVar5 = param_2[7];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[7] = uVar5;
    param_1[8] = uVar4;
    uVar4 = param_2[0xb];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      uVar5 = param_2[10];
      func_0x00010006c00c(uVar5,uVar4);
      param_1[10] = uVar5;
      param_1[0xb] = uVar4;
      return param_1;
    }
  }
  else {
    uVar5 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar5;
  }
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  param_1[0xb] = param_2[0xb];
  return param_1;
}



/* Entry: 103520154; end: 1035204df;  */

undefined8 * FUN_103520154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  func_0x00010006c00c(uVar1,uVar3);
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x00010006c090(uVar4,uVar5);
  if (param_1[6] == 0) {
    if (param_2[6] == 0) {
      uVar4 = param_2[5];
      uVar1 = param_2[4];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      param_1[4] = uVar1;
    }
    else {
      uVar1 = param_2[4];
      uVar4 = param_2[5];
      func_0x00010006c00c(uVar1,uVar4);
      param_1[4] = uVar1;
      param_1[5] = uVar4;
      param_1[6] = param_2[6];
      func_0x000107c6157c();
    }
  }
  else if (param_2[6] == 0) {
    FUN_103510d9c(param_1 + 4);
    uVar1 = param_2[6];
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[6] = uVar1;
  }
  else {
    uVar1 = param_2[4];
    uVar3 = param_2[5];
    func_0x00010006c00c(uVar1,uVar3);
    uVar4 = param_1[4];
    uVar5 = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = uVar3;
    func_0x00010006c090(uVar4,uVar5);
    uVar1 = param_1[6];
    param_1[6] = param_2[6];
    func_0x000107c6157c();
    func_0x000107c61574(uVar1);
  }
  uVar2 = param_2[8];
  if ((ulong)param_1[8] >> 0x3c < 0xf) {
    if (uVar2 >> 0x3c < 0xf) {
      uVar3 = param_2[7];
      func_0x00010006c00c(uVar3,uVar2);
      uVar1 = param_1[7];
      uVar4 = param_1[8];
      param_1[7] = uVar3;
      param_1[8] = uVar2;
      func_0x00010006c090(uVar1,uVar4);
      uVar2 = (ulong)param_2[0xb] >> 0x3c;
      if (0xe < (ulong)param_1[0xb] >> 0x3c) goto LAB_103520314;
      if (uVar2 < 0xf) {
        *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
        uVar1 = param_2[10];
        uVar3 = param_2[0xb];
        func_0x00010006c00c(uVar1,uVar3);
        uVar4 = param_1[10];
        uVar5 = param_1[0xb];
        param_1[10] = uVar1;
        param_1[0xb] = uVar3;
        func_0x00010006c090(uVar4,uVar5);
        return param_1;
      }
      func_0x000101599dcc(param_1 + 9);
      uVar1 = param_2[0xb];
      uVar3 = param_2[10];
      uVar4 = param_2[9];
    }
    else {
      func_0x00010155b964(param_1 + 7);
      uVar1 = param_2[0xb];
      uVar3 = param_2[10];
      uVar4 = param_2[9];
      uVar5 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar5;
    }
    param_1[10] = uVar3;
    param_1[9] = uVar4;
    param_1[0xb] = uVar1;
  }
  else {
    if (0xe < uVar2 >> 0x3c) {
      uVar4 = param_2[8];
      uVar1 = param_2[7];
      uVar5 = param_2[10];
      uVar3 = param_2[9];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar5;
      param_1[9] = uVar3;
      param_1[8] = uVar4;
      param_1[7] = uVar1;
      return param_1;
    }
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[7] = uVar1;
    param_1[8] = uVar2;
    uVar2 = (ulong)param_2[0xb] >> 0x3c;
LAB_103520314:
    if (uVar2 < 0xf) {
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      uVar1 = param_2[10];
      uVar4 = param_2[0xb];
      func_0x00010006c00c(uVar1,uVar4);
      param_1[10] = uVar1;
      param_1[0xb] = uVar4;
    }
    else {
      uVar4 = param_2[10];
      uVar1 = param_2[9];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      param_1[9] = uVar1;
    }
  }
  return param_1;
}



/* Entry: 1035204e0; end: 10352058f;  */

int FUN_1035204e0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103520590; end: 103520713;  */

/* WARNING: Possible PIC construction at 0x0001035205c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352066c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352068c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035206a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035206c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035206ac) */
/* WARNING: Removing unreachable block (ram,0x000103520690) */
/* WARNING: Removing unreachable block (ram,0x000103520670) */
/* WARNING: Removing unreachable block (ram,0x0001035205c8) */
/* WARNING: Removing unreachable block (ram,0x0001035206c4) */
/* WARNING: Removing unreachable block (ram,0x000100d55108) */
/* WARNING: Removing unreachable block (ram,0x000100d55118) */
/* WARNING: Removing unreachable block (ram,0x000100d55114) */

void FUN_103520590(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
LAB_1035206ec:
      func_0x00010006c00c();
      param_3 = param_3 & 0xcfffffffffffffff;
      goto code_r0x000107c6157c;
    }
  }
  else {
    if (uVar1 != 2) goto LAB_1035206ec;
    func_0x000107c61434();
    param_1 = param_2;
    param_2 = param_3 & 0xcfffffffffffffff;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c6157c(param_1);
  }
  param_3 = param_2 & 0x3fffffffffffffff;
code_r0x000107c6157c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 103520714; end: 1035207bb;  */

/* WARNING: Possible PIC construction at 0x000103520770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103520784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103520774) */
/* WARNING: Removing unreachable block (ram,0x000103520788) */
/* WARNING: Removing unreachable block (ram,0x0001035207a8) */
/* WARNING: Removing unreachable block (ram,0x000103520798) */
/* WARNING: Removing unreachable block (ram,0x00010352077c) */

void FUN_103520714(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    FUN_1035207bc(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                  *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                  *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                  *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                  *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                  *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                  *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                  *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                  *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                  *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200));
  }
  uVar1 = *(ulong *)(param_1 + 0xf0);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0xe8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1035207bc; end: 103520feb;  */

/* WARNING: Possible PIC construction at 0x0001035207f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103520898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035208b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035208d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035208ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035208d8) */
/* WARNING: Removing unreachable block (ram,0x0001035208bc) */
/* WARNING: Removing unreachable block (ram,0x00010352089c) */
/* WARNING: Removing unreachable block (ram,0x0001035207f4) */
/* WARNING: Removing unreachable block (ram,0x0001035208f0) */
/* WARNING: Removing unreachable block (ram,0x000100d55124) */
/* WARNING: Removing unreachable block (ram,0x000100d55134) */
/* WARNING: Removing unreachable block (ram,0x000100d55130) */

void FUN_1035207bc(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
LAB_103520918:
      func_0x00010006c090();
      param_3 = param_3 & 0xcfffffffffffffff;
      goto code_r0x000107c61574;
    }
  }
  else {
    if (uVar1 != 2) goto LAB_103520918;
    func_0x000107c6142c();
    param_1 = param_2;
    param_2 = param_3 & 0xcfffffffffffffff;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574(param_1);
  }
  param_3 = param_2 & 0x3fffffffffffffff;
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 103520fec; end: 103521017;  */

undefined8 FUN_103520fec(undefined8 param_1)

{
  FUN_10352133c(param_1,&UNK_110660830);
  return param_1;
}



/* Entry: 103521018; end: 10352101f;  */

void FUN_103521018(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x130);
  return;
}



/* Entry: 103521020; end: 10352122b;  */

undefined8 * FUN_103521020(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  if (*(char *)(param_1 + 0x1a) == '\0') {
    if (*(char *)(param_2 + 0x1a) != '\0') {
      FUN_103520fec(param_1 + 2);
      goto LAB_1035210a0;
    }
    uVar8 = param_1[2];
    uVar3 = param_1[3];
    uVar13 = param_1[4];
    uVar4 = param_1[5];
    uVar11 = param_1[6];
    uVar5 = param_1[7];
    uVar1 = param_1[8];
    uVar6 = param_1[9];
    uVar14 = param_1[0xb];
    uVar12 = param_1[10];
    uVar16 = param_1[0xd];
    uVar15 = param_1[0xc];
    uVar18 = param_1[0xf];
    uVar17 = param_1[0xe];
    uVar20 = param_1[0x11];
    uVar19 = param_1[0x10];
    uVar22 = param_1[0x13];
    uVar21 = param_1[0x12];
    uVar24 = param_1[0x15];
    uVar23 = param_1[0x14];
    uVar26 = param_1[0x17];
    uVar25 = param_1[0x16];
    uVar2 = param_1[0x18];
    uVar7 = param_1[0x19];
    uVar27 = param_2[2];
    uVar29 = param_2[5];
    uVar28 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar27;
    param_1[5] = uVar29;
    param_1[4] = uVar28;
    uVar27 = param_2[6];
    uVar29 = param_2[9];
    uVar28 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar27;
    param_1[9] = uVar29;
    param_1[8] = uVar28;
    uVar27 = param_2[10];
    uVar29 = param_2[0xd];
    uVar28 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar27;
    param_1[0xd] = uVar29;
    param_1[0xc] = uVar28;
    uVar27 = param_2[0xe];
    uVar29 = param_2[0x11];
    uVar28 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar27;
    param_1[0x11] = uVar29;
    param_1[0x10] = uVar28;
    uVar27 = param_2[0x12];
    uVar29 = param_2[0x15];
    uVar28 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar27;
    param_1[0x15] = uVar29;
    param_1[0x14] = uVar28;
    uVar27 = param_2[0x16];
    uVar29 = param_2[0x19];
    uVar28 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar27;
    param_1[0x19] = uVar29;
    param_1[0x18] = uVar28;
    FUN_1035207bc(uVar8,uVar3,uVar13,uVar4,uVar11,uVar5,uVar1,uVar6,uVar12,uVar14,uVar15,uVar16,
                  uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar2,uVar7)
    ;
  }
  else if (*(char *)(param_2 + 0x1a) == '\0') {
    uVar8 = param_2[0x12];
    uVar11 = param_2[0x15];
    uVar13 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar8;
    param_1[0x15] = uVar11;
    param_1[0x14] = uVar13;
    uVar8 = param_2[0x16];
    uVar11 = param_2[0x19];
    uVar13 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar8;
    param_1[0x19] = uVar11;
    param_1[0x18] = uVar13;
    uVar8 = param_2[10];
    uVar11 = param_2[0xd];
    uVar13 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar8;
    param_1[0xd] = uVar11;
    param_1[0xc] = uVar13;
    uVar8 = param_2[0xe];
    uVar11 = param_2[0x11];
    uVar13 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar8;
    param_1[0x11] = uVar11;
    param_1[0x10] = uVar13;
    uVar8 = param_2[2];
    uVar11 = param_2[5];
    uVar13 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar8;
    param_1[5] = uVar11;
    param_1[4] = uVar13;
    uVar8 = param_2[6];
    uVar11 = param_2[9];
    uVar13 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar8;
    param_1[9] = uVar11;
    param_1[8] = uVar13;
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  else {
LAB_1035210a0:
    uVar8 = param_2[0x16];
    uVar11 = param_2[0x19];
    uVar13 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar8;
    param_1[0x19] = uVar11;
    param_1[0x18] = uVar13;
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
    uVar8 = param_2[0xe];
    uVar11 = param_2[0x11];
    uVar13 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar8;
    param_1[0x11] = uVar11;
    param_1[0x10] = uVar13;
    uVar11 = param_2[0x12];
    uVar13 = param_2[0x15];
    uVar8 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar11;
    param_1[0x15] = uVar13;
    param_1[0x14] = uVar8;
    uVar8 = param_2[6];
    uVar11 = param_2[9];
    uVar13 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar8;
    param_1[9] = uVar11;
    param_1[8] = uVar13;
    uVar11 = param_2[10];
    uVar13 = param_2[0xd];
    uVar8 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar11;
    param_1[0xd] = uVar13;
    param_1[0xc] = uVar8;
    uVar11 = param_2[2];
    uVar13 = param_2[5];
    uVar8 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar11;
    param_1[5] = uVar13;
    param_1[4] = uVar8;
  }
  param_1[0x1b] = param_2[0x1b];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  uVar8 = param_1[0x1d];
  uVar13 = param_1[0x1e];
  uVar11 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar11;
  func_0x00010006c090(uVar8,uVar13);
  if (param_1[0x20] != 0) {
    lVar9 = param_2[0x20];
    if (lVar9 != 0) {
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = lVar9;
      func_0x000107c6142c();
      uVar8 = param_1[0x21];
      uVar13 = param_1[0x22];
      uVar11 = param_2[0x21];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar11;
      func_0x00010006c090(uVar8,uVar13);
      goto LAB_103521148;
    }
    func_0x00010159d63c(param_1 + 0x1f);
  }
  uVar8 = param_2[0x1f];
  uVar11 = param_2[0x22];
  uVar13 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar8;
  param_1[0x22] = uVar11;
  param_1[0x21] = uVar13;
LAB_103521148:
  if ((ulong)param_1[0x25] >> 0x3c < 0xf) {
    uVar10 = param_2[0x25];
    if (uVar10 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
      uVar8 = param_1[0x24];
      param_1[0x24] = param_2[0x24];
      param_1[0x25] = uVar10;
      func_0x00010006c090(uVar8);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 0x23);
  }
  uVar8 = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x23] = uVar8;
  param_1[0x25] = param_2[0x25];
  return param_1;
}



/* Entry: 10352122c; end: 10352133b;  */

int FUN_10352122c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x4c] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x40);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10352133c; end: 103521393;  */

void FUN_10352133c(undefined8 *param_1)

{
  FUN_1035207bc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],
                param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17]);
  return;
}



/* Entry: 103521394; end: 103521633;  */

undefined8 * FUN_103521394(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar1 = *param_2;
  uVar13 = param_2[1];
  uVar2 = param_2[2];
  uVar14 = param_2[3];
  uVar3 = param_2[4];
  uVar15 = param_2[5];
  uVar4 = param_2[6];
  uVar16 = param_2[7];
  uVar5 = param_2[8];
  uVar17 = param_2[9];
  uVar6 = param_2[10];
  uVar18 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar19 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar20 = param_2[0xf];
  uVar9 = param_2[0x10];
  uVar21 = param_2[0x11];
  uVar10 = param_2[0x12];
  uVar22 = param_2[0x13];
  uVar11 = param_2[0x14];
  uVar23 = param_2[0x15];
  uVar12 = param_2[0x16];
  uVar24 = param_2[0x17];
  FUN_103520590(uVar1,uVar13);
  *param_1 = uVar1;
  param_1[1] = uVar13;
  param_1[2] = uVar2;
  param_1[3] = uVar14;
  param_1[4] = uVar3;
  param_1[5] = uVar15;
  param_1[6] = uVar4;
  param_1[7] = uVar16;
  param_1[8] = uVar5;
  param_1[9] = uVar17;
  param_1[10] = uVar6;
  param_1[0xb] = uVar18;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar19;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar20;
  param_1[0x10] = uVar9;
  param_1[0x11] = uVar21;
  param_1[0x12] = uVar10;
  param_1[0x13] = uVar22;
  param_1[0x14] = uVar11;
  param_1[0x15] = uVar23;
  param_1[0x16] = uVar12;
  param_1[0x17] = uVar24;
  return param_1;
}



/* Entry: 103521634; end: 1035216cf;  */

undefined8 * FUN_103521634(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar26;
  undefined8 uVar27;
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar10 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar16 = param_1[0xd];
  uVar15 = param_1[0xc];
  uVar18 = param_1[0xf];
  uVar17 = param_1[0xe];
  uVar20 = param_1[0x11];
  uVar19 = param_1[0x10];
  uVar22 = param_1[0x13];
  uVar21 = param_1[0x12];
  uVar24 = param_1[0x15];
  uVar23 = param_1[0x14];
  uVar4 = param_1[0x16];
  uVar8 = param_1[0x17];
  uVar25 = *param_2;
  uVar27 = param_2[3];
  uVar26 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar25;
  param_1[3] = uVar27;
  param_1[2] = uVar26;
  uVar25 = param_2[4];
  uVar27 = param_2[7];
  uVar26 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar25;
  param_1[7] = uVar27;
  param_1[6] = uVar26;
  uVar25 = param_2[8];
  uVar27 = param_2[0xb];
  uVar26 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar25;
  param_1[0xb] = uVar27;
  param_1[10] = uVar26;
  uVar25 = param_2[0xc];
  uVar27 = param_2[0xf];
  uVar26 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar25;
  param_1[0xf] = uVar27;
  param_1[0xe] = uVar26;
  uVar25 = param_2[0x10];
  uVar27 = param_2[0x13];
  uVar26 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar25;
  param_1[0x13] = uVar27;
  param_1[0x12] = uVar26;
  uVar25 = param_2[0x14];
  uVar27 = param_2[0x17];
  uVar26 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar25;
  param_1[0x17] = uVar27;
  param_1[0x16] = uVar26;
  FUN_1035207bc(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar4,uVar8);
  return param_1;
}



/* Entry: 1035216d0; end: 10352178b;  */

int FUN_1035216d0(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x30] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10352178c; end: 10352180b;  */

void FUN_10352178c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd457c;
  func_0x000107c61520(&DAT_10dbd457c,&UNK_110660788);
  puRam0000000112f75e38 = puVar1;
  return;
}



/* Entry: 10352180c; end: 10352184b;  */

undefined8 FUN_10352180c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10352184c; end: 103521863;  */

int FUN_10352184c(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103521864; end: 10352195f;  */

void FUN_103521864(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 103521960; end: 10352196b;  */

long FUN_103521960(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10352196c; end: 1035219fb;  */

bool FUN_10352196c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    func_0x00010161ef18(&uStack_50,auStack_68);
    func_0x000101553ccc(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    func_0x00010161ef18(&uStack_50,auStack_68);
  }
  func_0x000101553ccc(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 1035219fc; end: 103521a43;  */

void FUN_1035219fc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd49b0,0x1a,2);
  uRam0000000113807b08 = uStack_38;
  uRam0000000113807b00 = uStack_40;
  uRam0000000113807b18 = uStack_28;
  uRam0000000113807b10 = uStack_30;
  uRam0000000113807b28 = uStack_18;
  uRam0000000113807b20 = uStack_20;
  return;
}



/* Entry: 103521a44; end: 103521af7;  */

/* WARNING: Removing unreachable block (ram,0x000103521af4) */

void FUN_103521a44(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_110790980,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103521af8; end: 103521b53;  */

void FUN_103521af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103521b54();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103521b54; end: 103521bdb;  */

void FUN_103521b54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103521bdc; end: 103521c1f;  */

uint FUN_103521bdc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar3 = param_1[4];
  uVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar4 = param_2[4];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_103522020;
    if ((float)uVar5 == (float)uVar6) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_1035220b4;
    }
    else {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
LAB_1035220b4:
      func_0x000101553ccc(uVar5,uVar7,uVar3);
      uVar5 = *param_1;
      func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar5;
      goto LAB_103522110;
    }
LAB_103522020:
    func_0x00010161ef18(&uStack_80,auStack_b8);
    func_0x00010161ef18(&uStack_a0,auStack_b8);
    func_0x000101553ccc(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x000101553ccc(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_103522110:
  return uVar1 & 1;
}



/* Entry: 103521c20; end: 103521c4f;  */

undefined1  [16] FUN_103521c20(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103521c50; end: 103521c83;  */

void FUN_103521c50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103521c84; end: 103521c97;  */

undefined8 FUN_103521c84(void)

{
  return 0x103521c94;
}



/* Entry: 103521c98; end: 103521cab;  */

void FUN_103521c98(void)

{
  FUN_103521a44();
  return;
}



/* Entry: 103521cac; end: 103521ce3;  */

void FUN_103521cac(void)

{
  FUN_103521af8();
  return;
}



/* Entry: 103521ce4; end: 103521ce7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103521ce4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103521ce8; end: 103521d1f;  */

uint FUN_103521ce8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_103522574();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103521d20; end: 103521d67;  */

uint FUN_103521d20(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_103521f90(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103521d68; end: 103521e07;  */

/* WARNING: Possible PIC construction at 0x000103521db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103521dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103521db8) */
/* WARNING: Removing unreachable block (ram,0x000103521dc8) */

void FUN_103521d68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75e58 != -1) {
    func_0x000107c61568(0x112f75e58,FUN_1035219fc);
  }
  uVar5 = uRam0000000113807b28;
  uVar4 = uRam0000000113807b20;
  uVar3 = uRam0000000113807b18;
  uVar2 = uRam0000000113807b10;
  uVar1 = uRam0000000113807b08;
  *param_1 = uRam0000000113807b00;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103521e08; end: 103521e43;  */

void FUN_103521e08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75e78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75e78,&UNK_10dbd49a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103521e44; end: 103521f47;  */

void FUN_103521e44(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103521f48; end: 103521f8f;  */

uint FUN_103521f48(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_103521f90(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103521f90; end: 103522133;  */

uint FUN_103521f90(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar3 = param_1[4];
  uVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar4 = param_2[4];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_103522020;
    if ((float)uVar5 == (float)uVar6) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_1035220b4;
    }
    else {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      func_0x00010161ef18(&uStack_80,auStack_b8);
      func_0x00010161ef18(&uStack_a0,auStack_b8);
LAB_1035220b4:
      func_0x000101553ccc(uVar5,uVar7,uVar3);
      uVar5 = *param_1;
      func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar5;
      goto LAB_103522110;
    }
LAB_103522020:
    func_0x00010161ef18(&uStack_80,auStack_b8);
    func_0x00010161ef18(&uStack_a0,auStack_b8);
    func_0x000101553ccc(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x000101553ccc(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_103522110:
  return uVar1 & 1;
}



/* Entry: 103522134; end: 103522173;  */

void FUN_103522134(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd48e8;
  func_0x000107c61520(&UNK_10dbd48e8,&UNK_110660a18);
  puRam0000000112f75e60 = puVar1;
  return;
}



/* Entry: 103522174; end: 103522197;  */

void FUN_103522174(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103522198();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103522198; end: 1035221d7;  */

void FUN_103522198(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd48c0;
  func_0x000107c61520(&UNK_10dbd48c0,&UNK_110660a18);
  puRam0000000112f75e68 = puVar1;
  return;
}



/* Entry: 1035221d8; end: 103522203;  */

void FUN_1035221d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103522134();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101618278();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103522204; end: 103522207;  */

void FUN_103522204(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4928;
  func_0x000107c61520(&UNK_10dbd4928,&UNK_110660a18);
  puRam0000000112f75e70 = puVar1;
  return;
}



/* Entry: 103522208; end: 103522247;  */

void FUN_103522208(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4928;
  func_0x000107c61520(&UNK_10dbd4928,&UNK_110660a18);
  puRam0000000112f75e70 = puVar1;
  return;
}



/* Entry: 103522248; end: 1035222bb;  */

long FUN_103522248(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035222bc; end: 1035224b7;  */

undefined8 * FUN_1035222bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar3 = param_2[4];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar2 = param_2[3];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[3] = uVar2;
    param_1[4] = uVar3;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  return param_1;
}



/* Entry: 1035224b8; end: 103522573;  */

int FUN_1035224b8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103522574; end: 1035225b3;  */

void FUN_103522574(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd4894;
  func_0x000107c61520(&DAT_10dbd4894,&UNK_110660a18);
  puRam0000000112f75e80 = puVar1;
  return;
}



/* Entry: 1035225b4; end: 1035225c3;  */

void FUN_1035225b4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1035225c4; end: 1035225f3;  */

void FUN_1035225c4(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103523490();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035225f4; end: 1035225fb;  */

undefined8 FUN_1035225f4(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035225fc; end: 10352266f;  */

void FUN_1035225fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f75f18;
  func_0x0001000285a8(0x112f75f18,&UNK_10dbd49d8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103522670; end: 10352267b;  */

void FUN_103522670(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10352267c; end: 103522727;  */

void FUN_10352267c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103522728; end: 10352273b;  */

bool FUN_103522728(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10352273c; end: 103522783;  */

void FUN_10352273c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd4cb0,0xa7,2);
  uRam0000000113807b38 = uStack_38;
  uRam0000000113807b30 = uStack_40;
  uRam0000000113807b48 = uStack_28;
  uRam0000000113807b40 = uStack_30;
  uRam0000000113807b58 = uStack_18;
  uRam0000000113807b50 = uStack_20;
  return;
}



/* Entry: 103522784; end: 10352294f;  */

/* WARNING: Removing unreachable block (ram,0x00010352294c) */

void FUN_103522784(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar4 = *(code **)(param_3 + 0x180);
            FUN_10352349c();
          }
          else {
            if (lVar1 != 2) goto LAB_10352293c;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
          }
          goto LAB_103522928;
        }
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103524e74();
          goto LAB_103522928;
        }
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          goto LAB_103522928;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x00010157193c();
          }
          else {
            if (lVar1 != 6) goto LAB_10352293c;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x00010157193c();
          }
        }
        else if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
        }
        else {
          if (lVar1 != 8) goto LAB_10352293c;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
        }
LAB_103522928:
        (*pcVar4)();
      }
LAB_10352293c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103522950; end: 103522a93;  */

void FUN_103522950(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    FUN_10352349c();
    (*pcVar2)(&lStack_50,1,&UNK_110660cb8,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_103522a94();
  if (unaff_x21 == 0) {
    FUN_103522b1c();
    FUN_103522ba4();
    FUN_103522c2c();
    FUN_103522cb4();
    FUN_103522d3c();
    FUN_103522dc4();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103522a94; end: 103522b1b;  */

void FUN_103522a94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x30);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103522b1c; end: 103522ba3;  */

void FUN_103522b1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x48);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103524e74();
    (*pcVar1)(&uStack_60,3,&UNK_110790b80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103522ba4; end: 103522c2b;  */

void FUN_103522ba4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x60);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103522c2c; end: 103522cb3;  */

void FUN_103522c2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x78);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,5,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103522cb4; end: 103522d3b;  */

void FUN_103522cb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x90);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,6,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103522d3c; end: 103522dc3;  */

void FUN_103522d3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,7,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103522dc4; end: 103522e4b;  */

void FUN_103522dc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xc0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xb8);
    uStack_60 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,8,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103522e4c; end: 103522ebf;  */

uint FUN_103522e4c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_248 [3];
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  long lStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 < 3) {
      if (lVar6 == 0) {
        if (lVar5 != 0) {
          return 0;
        }
      }
      else if (lVar6 == 1) {
        if (lVar5 != 1) {
          return 0;
        }
      }
      else if (lVar5 != 2) {
        return 0;
      }
    }
    else if (lVar6 == 3) {
      if (lVar5 != 3) {
        return 0;
      }
    }
    else if (lVar6 == 4) {
      if (lVar5 != 4) {
        return 0;
      }
    }
    else if (lVar5 != 5) {
      return 0;
    }
  }
  else if (lVar5 != lVar6) {
    return 0;
  }
  uVar13 = param_1[5];
  lVar5 = param_1[4];
  uVar7 = param_1[6];
  uVar14 = param_2[5];
  lVar6 = param_2[4];
  uVar10 = param_2[6];
  lStack_b0 = lVar6;
  uStack_a8 = uVar14;
  uStack_a0 = uVar10;
  lStack_90 = lVar5;
  uStack_88 = uVar13;
  uStack_80 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_103523700;
    if (lVar5 == lVar6) {
      FUN_103523448(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      FUN_103523448(&lStack_b0,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
      func_0x000100d5517c(lVar5,uVar14,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_1035235bc;
    }
    else {
      uVar11 = 0x112db6f48;
      puVar12 = &UNK_10d969b40;
      FUN_103523448(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      plVar3 = &lStack_b0;
      plVar4 = &lStack_d0;
LAB_10352391c:
      FUN_103523448(plVar3,plVar4,uVar11,puVar12);
      func_0x000100d5517c(lVar6,uVar14,uVar10);
    }
  }
  else {
    if (0xe < uVar10 >> 0x3c) {
      FUN_103523448(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
      FUN_103523448(&lStack_b0,&lStack_d0,0x112db6f48,&UNK_10d969b40);
LAB_1035235bc:
      func_0x000100d5517c(lVar5,uVar13,uVar7);
      uVar13 = param_1[8];
      lVar5 = param_1[7];
      uVar7 = param_1[9];
      uVar14 = param_2[8];
      lVar6 = param_2[7];
      uVar10 = param_2[9];
      lStack_f0 = lVar6;
      uStack_e8 = uVar14;
      uStack_e0 = uVar10;
      lStack_d0 = lVar5;
      uStack_c8 = uVar13;
      uStack_c0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035237e0;
        if ((int)lVar5 != (int)lVar6) {
          uVar11 = 0x112f75e88;
          puVar12 = &UNK_10dbe41c0;
          FUN_103523448(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
          plVar3 = &lStack_f0;
          plVar4 = &lStack_110;
          goto LAB_10352391c;
        }
        FUN_103523448(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
        FUN_103523448(&lStack_f0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d5517c(lVar6,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_103523f10;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035237e0:
          uVar11 = 0x112f75e88;
          puVar12 = &UNK_10dbe41c0;
          FUN_103523448(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
          plVar3 = &lStack_f0;
          plVar4 = &lStack_110;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar5;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar5 = lVar6;
          goto LAB_103523ee8;
        }
        FUN_103523448(&lStack_d0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
        FUN_103523448(&lStack_f0,&lStack_110,0x112f75e88,&UNK_10dbe41c0);
      }
      func_0x000100d5517c(lVar5,uVar13,uVar7);
      uVar13 = param_1[0xb];
      lVar5 = param_1[10];
      uVar7 = param_1[0xc];
      uVar14 = param_2[0xb];
      lVar6 = param_2[10];
      uVar10 = param_2[0xc];
      lStack_130 = lVar6;
      uStack_128 = uVar14;
      uStack_120 = uVar10;
      lStack_110 = lVar5;
      uStack_108 = uVar13;
      uStack_100 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035238c0;
        uVar11 = 0x112db6358;
        if ((float)lVar5 != (float)lVar6) {
          puVar12 = &UNK_10d961e20;
          FUN_103523448(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_130;
          plVar4 = &lStack_150;
          goto LAB_10352391c;
        }
        FUN_103523448(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
        FUN_103523448(&lStack_130,&lStack_150,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d5517c(lVar6,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_103523f10;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035238c0:
          uVar11 = 0x112db6358;
          puVar12 = &UNK_10d961e20;
          FUN_103523448(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_130;
          plVar4 = &lStack_150;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar5;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar5 = lVar6;
          goto LAB_103523ee8;
        }
        FUN_103523448(&lStack_110,&lStack_150,0x112db6358,&UNK_10d961e20);
        FUN_103523448(&lStack_130,&lStack_150,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d5517c(lVar5,uVar13,uVar7);
      uVar13 = param_1[0xe];
      lVar5 = param_1[0xd];
      uVar7 = param_1[0xf];
      uVar14 = param_2[0xe];
      lVar6 = param_2[0xd];
      uVar10 = param_2[0xf];
      lStack_170 = lVar6;
      uStack_168 = uVar14;
      uStack_160 = uVar10;
      lStack_150 = lVar5;
      uStack_148 = uVar13;
      uStack_140 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_103523a50;
        uVar11 = 0x112db6358;
        if ((float)lVar5 != (float)lVar6) {
          puVar12 = &UNK_10d961e20;
          FUN_103523448(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_170;
          plVar4 = &lStack_190;
          goto LAB_10352391c;
        }
        FUN_103523448(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
        FUN_103523448(&lStack_170,&lStack_190,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d5517c(lVar6,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_103523f10;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_103523a50:
          uVar11 = 0x112db6358;
          puVar12 = &UNK_10d961e20;
          FUN_103523448(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_170;
          plVar4 = &lStack_190;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar5;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar5 = lVar6;
          goto LAB_103523ee8;
        }
        FUN_103523448(&lStack_150,&lStack_190,0x112db6358,&UNK_10d961e20);
        FUN_103523448(&lStack_170,&lStack_190,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d5517c(lVar5,uVar13,uVar7);
      uVar13 = param_1[0x11];
      lVar5 = param_1[0x10];
      uVar7 = param_1[0x12];
      uVar14 = param_2[0x11];
      lVar6 = param_2[0x10];
      uVar10 = param_2[0x12];
      lStack_1b0 = lVar6;
      uStack_1a8 = uVar14;
      uStack_1a0 = uVar10;
      lStack_190 = lVar5;
      uStack_188 = uVar13;
      uStack_180 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_103523bc0;
        if ((float)lVar5 != (float)lVar6) {
          uVar11 = 0x112db6358;
          puVar12 = &UNK_10d961e20;
          FUN_103523448(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_1b0;
          plVar4 = &lStack_1d0;
          goto LAB_10352391c;
        }
        FUN_103523448(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
        FUN_103523448(&lStack_1b0,&lStack_1d0,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d5517c(lVar6,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_103523f10;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_103523bc0:
          uVar11 = 0x112db6358;
          puVar12 = &UNK_10d961e20;
          FUN_103523448(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_1b0;
          plVar4 = &lStack_1d0;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar5;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar5 = lVar6;
          goto LAB_103523ee8;
        }
        FUN_103523448(&lStack_190,&lStack_1d0,0x112db6358,&UNK_10d961e20);
        FUN_103523448(&lStack_1b0,&lStack_1d0,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d5517c(lVar5,uVar13,uVar7);
      uVar13 = param_1[0x14];
      lVar5 = param_1[0x13];
      uVar7 = param_1[0x15];
      uVar14 = param_2[0x14];
      lVar6 = param_2[0x13];
      uVar10 = param_2[0x15];
      lStack_1f0 = lVar6;
      uStack_1e8 = uVar14;
      uStack_1e0 = uVar10;
      lStack_1d0 = lVar5;
      uStack_1c8 = uVar13;
      uStack_1c0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_103523d2c;
        uVar11 = 0x112db6358;
        puVar12 = &UNK_10d961e20;
        if ((float)lVar5 != (float)lVar6) {
          FUN_103523448(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_1f0;
          plVar4 = &lStack_210;
          goto LAB_10352391c;
        }
        FUN_103523448(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
        FUN_103523448(&lStack_1f0,&lStack_210,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d5517c(lVar6,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_103523f10;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_103523d2c:
          uVar11 = 0x112db6358;
          puVar12 = &UNK_10d961e20;
          FUN_103523448(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
          plVar3 = &lStack_1f0;
          plVar4 = &lStack_210;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar5;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar5 = lVar6;
          goto LAB_103523ee8;
        }
        FUN_103523448(&lStack_1d0,&lStack_210,0x112db6358,&UNK_10d961e20);
        FUN_103523448(&lStack_1f0,&lStack_210,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d5517c(lVar5,uVar13,uVar7);
      uVar13 = param_1[0x17];
      lVar5 = param_1[0x16];
      uVar7 = param_1[0x18];
      uVar14 = param_2[0x17];
      lVar6 = param_2[0x16];
      uVar10 = param_2[0x18];
      lStack_230 = lVar6;
      uStack_228 = uVar14;
      uStack_220 = uVar10;
      lStack_210 = lVar5;
      uStack_208 = uVar13;
      uStack_200 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_103523ebc;
        if (lVar5 != lVar6) {
          uVar11 = 0x112db6f48;
          puVar12 = &UNK_10d969b40;
          FUN_103523448(&lStack_210,alStack_248,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_230;
          plVar4 = alStack_248;
          goto LAB_10352391c;
        }
        FUN_103523448(&lStack_210,alStack_248,0x112db6f48,&UNK_10d969b40);
        FUN_103523448(&lStack_230,alStack_248,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d5517c(lVar5,uVar14,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_103523f10;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_103523ebc:
          uVar11 = 0x112db6f48;
          puVar12 = &UNK_10d969b40;
          FUN_103523448(&lStack_210,alStack_248,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_230;
          plVar4 = alStack_248;
          uVar2 = uVar7;
          uVar8 = uVar13;
          lVar9 = lVar5;
          uVar7 = uVar10;
          uVar13 = uVar14;
          lVar5 = lVar6;
          goto LAB_103523ee8;
        }
        FUN_103523448(&lStack_210,alStack_248,0x112db6f48,&UNK_10d969b40);
        FUN_103523448(&lStack_230,alStack_248,0x112db6f48,&UNK_10d969b40);
      }
      func_0x000100d5517c(lVar5,uVar13,uVar7);
      lVar5 = param_1[2];
      func_0x000100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)lVar5;
      goto LAB_103523f18;
    }
LAB_103523700:
    uVar11 = 0x112db6f48;
    puVar12 = &UNK_10d969b40;
    FUN_103523448(&lStack_90,&lStack_d0,0x112db6f48,&UNK_10d969b40);
    plVar3 = &lStack_b0;
    plVar4 = &lStack_d0;
    uVar2 = uVar7;
    uVar8 = uVar13;
    lVar9 = lVar5;
    uVar7 = uVar10;
    uVar13 = uVar14;
    lVar5 = lVar6;
LAB_103523ee8:
    FUN_103523448(plVar3,plVar4,uVar11,puVar12);
    func_0x000100d5517c(lVar9,uVar8,uVar2);
  }
LAB_103523f10:
  func_0x000100d5517c(lVar5,uVar13,uVar7);
  uVar1 = 0;
LAB_103523f18:
  return uVar1 & 1;
}



/* Entry: 103522ec0; end: 103522eef;  */

undefined1  [16] FUN_103522ec0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103522ef0; end: 103522f23;  */

void FUN_103522ef0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103522f24; end: 103522f37;  */

undefined1  [16] FUN_103522f24(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103522f34;
  return auVar1;
}


