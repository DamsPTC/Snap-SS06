/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10364bc24; end: 10364bc27;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10364bc24(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10364bc28; end: 10364bc5f;  */

uint FUN_10364bc28(long param_1,long param_2)

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
  FUN_10364d090();
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



/* Entry: 10364bc60; end: 10364bcdf;  */

uint FUN_10364bc60(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_28 = param_1[0x13];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_c8 = unaff_x20[0x13];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_10364bf78(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 10364bce0; end: 10364bd7f;  */

/* WARNING: Possible PIC construction at 0x00010364bd2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010364bd3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010364bd30) */
/* WARNING: Removing unreachable block (ram,0x00010364bd40) */

void FUN_10364bce0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f818e8 != -1) {
    func_0x000107c61568(0x112f818e8,FUN_10364b544);
  }
  uVar5 = uRam000000011380b038;
  uVar4 = uRam000000011380b030;
  uVar3 = uRam000000011380b028;
  uVar2 = uRam000000011380b020;
  uVar1 = uRam000000011380b018;
  *param_1 = uRam000000011380b010;
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



/* Entry: 10364bd80; end: 10364bdbb;  */

void FUN_10364bd80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f81908;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f81908,&UNK_10dbf2270);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10364bdbc; end: 10364bef7;  */

void FUN_10364bdbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
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
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_38 = unaff_x20[0x13];
  uStack_40 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  func_0x000107c6068c(auStack_118,0);
  func_0x000107c5fa50(auStack_118,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10364bef8; end: 10364bf77;  */

uint FUN_10364bef8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_10364bf78(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 10364bf78; end: 10364c5c7;  */

uint FUN_10364bf78(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_208 [3];
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar8;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_10364c008;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10364c074;
    }
    else {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10364c57c:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
LAB_10364c074:
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_f0 = uVar10;
      uStack_e8 = uVar12;
      uStack_e0 = uVar8;
      uStack_d0 = uVar9;
      uStack_c8 = uVar11;
      uStack_c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364c0e8;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_10364c57c;
        }
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        func_0x00010161ef18(&uStack_f0,&uStack_110);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364c59c;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364c0e8:
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364c4c8;
        }
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        func_0x00010161ef18(&uStack_f0,&uStack_110);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[9];
      uVar9 = param_1[8];
      uVar5 = param_1[10];
      uVar12 = param_2[9];
      uVar10 = param_2[8];
      uVar8 = param_2[10];
      uStack_130 = uVar10;
      uStack_128 = uVar12;
      uStack_120 = uVar8;
      uStack_110 = uVar9;
      uStack_108 = uVar11;
      uStack_100 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364c1d8;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_10364c57c;
        }
        func_0x00010161ef18(&uStack_110,&uStack_150);
        func_0x00010161ef18(&uStack_130,&uStack_150);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364c59c;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364c1d8:
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364c4c8;
        }
        func_0x00010161ef18(&uStack_110,&uStack_150);
        func_0x00010161ef18(&uStack_130,&uStack_150);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xc];
      uVar9 = param_1[0xb];
      uVar5 = param_1[0xd];
      uVar12 = param_2[0xc];
      uVar10 = param_2[0xb];
      uVar8 = param_2[0xd];
      uStack_170 = uVar10;
      uStack_168 = uVar12;
      uStack_160 = uVar8;
      uStack_150 = uVar9;
      uStack_148 = uVar11;
      uStack_140 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364c2cc;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_150,&uStack_190);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          goto LAB_10364c57c;
        }
        func_0x00010161ef18(&uStack_150,&uStack_190);
        func_0x00010161ef18(&uStack_170,&uStack_190);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364c59c;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364c2cc:
          func_0x00010161ef18(&uStack_150,&uStack_190);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364c4c8;
        }
        func_0x00010161ef18(&uStack_150,&uStack_190);
        func_0x00010161ef18(&uStack_170,&uStack_190);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xf];
      uVar9 = param_1[0xe];
      uVar5 = param_1[0x10];
      uVar12 = param_2[0xf];
      uVar10 = param_2[0xe];
      uVar8 = param_2[0x10];
      uStack_1b0 = uVar10;
      uStack_1a8 = uVar12;
      uStack_1a0 = uVar8;
      uStack_190 = uVar9;
      uStack_188 = uVar11;
      uStack_180 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364c3c0;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_190,&uStack_1d0);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          goto LAB_10364c57c;
        }
        func_0x00010161ef18(&uStack_190,&uStack_1d0);
        func_0x00010161ef18(&uStack_1b0,&uStack_1d0);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364c59c;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364c3c0:
          func_0x00010161ef18(&uStack_190,&uStack_1d0);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364c4c8;
        }
        func_0x00010161ef18(&uStack_190,&uStack_1d0);
        func_0x00010161ef18(&uStack_1b0,&uStack_1d0);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0x12];
      uVar9 = param_1[0x11];
      uVar5 = param_1[0x13];
      uVar12 = param_2[0x12];
      uVar10 = param_2[0x11];
      uVar8 = param_2[0x13];
      uStack_1f0 = uVar10;
      uStack_1e8 = uVar12;
      uStack_1e0 = uVar8;
      uStack_1d0 = uVar9;
      uStack_1c8 = uVar11;
      uStack_1c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364c4b4;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_1d0,auStack_208);
          puVar3 = &uStack_1f0;
          puVar4 = auStack_208;
          goto LAB_10364c57c;
        }
        func_0x00010161ef18(&uStack_1d0,auStack_208);
        func_0x00010161ef18(&uStack_1f0,auStack_208);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364c59c;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364c4b4:
          func_0x00010161ef18(&uStack_1d0,auStack_208);
          puVar3 = &uStack_1f0;
          puVar4 = auStack_208;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364c4c8;
        }
        func_0x00010161ef18(&uStack_1d0,auStack_208);
        func_0x00010161ef18(&uStack_1f0,auStack_208);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_10364c5a4;
    }
LAB_10364c008:
    func_0x00010161ef18(&uStack_90,&uStack_d0);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_10364c4c8:
    func_0x00010161ef18(puVar3,puVar4);
    func_0x000101553ccc(uVar7,uVar6,uVar2);
  }
LAB_10364c59c:
  func_0x000101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_10364c5a4:
  return uVar1 & 1;
}



/* Entry: 10364c5c8; end: 10364c607;  */

void FUN_10364c5c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f818f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf21b8;
  func_0x000107c61520(&UNK_10dbf21b8,&UNK_110675188);
  puRam0000000112f818f0 = puVar1;
  return;
}



/* Entry: 10364c608; end: 10364c62b;  */

void FUN_10364c608(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10364c62c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10364c62c; end: 10364c66b;  */

void FUN_10364c62c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f818f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2190;
  func_0x000107c61520(&UNK_10dbf2190,&UNK_110675188);
  puRam0000000112f818f8 = puVar1;
  return;
}



/* Entry: 10364c66c; end: 10364c697;  */

void FUN_10364c66c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10364c5c8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e11f8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10364c698; end: 10364c69b;  */

void FUN_10364c698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf21f8;
  func_0x000107c61520(&UNK_10dbf21f8,&UNK_110675188);
  puRam0000000112f81900 = puVar1;
  return;
}



/* Entry: 10364c69c; end: 10364c6db;  */

void FUN_10364c69c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf21f8;
  func_0x000107c61520(&UNK_10dbf21f8,&UNK_110675188);
  puRam0000000112f81900 = puVar1;
  return;
}



/* Entry: 10364c6dc; end: 10364c7c7;  */

long FUN_10364c6dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10364c7c8; end: 10364cfb3;  */

undefined8 * FUN_10364c7c8(undefined8 *param_1,undefined8 *param_2)

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
  uVar3 = param_2[7];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[6] = uVar2;
    param_1[7] = uVar3;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  uVar3 = param_2[10];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar2 = param_2[9];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
  }
  else {
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[10] = param_2[10];
  }
  uVar3 = param_2[0xd];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar2 = param_2[0xc];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
  }
  else {
    uVar2 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[0xd] = param_2[0xd];
  }
  uVar3 = param_2[0x10];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar2 = param_2[0xf];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xf] = uVar2;
    param_1[0x10] = uVar3;
  }
  else {
    uVar2 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x10] = param_2[0x10];
  }
  uVar3 = param_2[0x13];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    uVar2 = param_2[0x12];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
  }
  else {
    uVar2 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar2;
    param_1[0x13] = param_2[0x13];
  }
  return param_1;
}



/* Entry: 10364cfb4; end: 10364d08f;  */

int FUN_10364cfb4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10364d090; end: 10364d117;  */

void FUN_10364d090(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf2164;
  func_0x000107c61520(&DAT_10dbf2164,&UNK_110675188);
  puRam0000000112f81910 = puVar1;
  return;
}



/* Entry: 10364d118; end: 10364d1e7;  */

void FUN_10364d118(undefined8 param_1,long param_2,long param_3)

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
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x10;
LAB_10364d18c:
        (*pcVar4)(lVar2,&UNK_110790b00,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x28;
        goto LAB_10364d18c;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10364d1e8; end: 10364d25b;  */

void FUN_10364d1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10364d25c();
  if (unaff_x21 == 0) {
    FUN_10364d2e4();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10364d25c; end: 10364d2e3;  */

void FUN_10364d25c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,1,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364d2e4; end: 10364d36b;  */

void FUN_10364d2e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,2,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364d36c; end: 10364d3b3;  */

uint FUN_10364d36c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar8;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  uStack_70 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_10364d838;
    if ((int)uVar9 == (int)uVar10) {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      func_0x000101626ba0(&uStack_a0,&uStack_c0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x0001015dc5d0(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10364d7a4;
    }
    else {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      puVar3 = &uStack_a0;
      puVar4 = &uStack_c0;
LAB_10364d950:
      func_0x000101626ba0(puVar3,puVar4);
      func_0x0001015dc5d0(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      func_0x000101626ba0(&uStack_a0,&uStack_c0);
LAB_10364d7a4:
      func_0x0001015dc5d0(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_e0 = uVar10;
      uStack_d8 = uVar12;
      uStack_d0 = uVar8;
      uStack_c0 = uVar9;
      uStack_b8 = uVar11;
      uStack_b0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364d8ac;
        if ((int)uVar9 != (int)uVar10) {
          func_0x000101626ba0(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          goto LAB_10364d950;
        }
        func_0x000101626ba0(&uStack_c0,auStack_f8);
        func_0x000101626ba0(&uStack_e0,auStack_f8);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x0001015dc5d0(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364d970;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364d8ac:
          func_0x000101626ba0(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364d8c0;
        }
        func_0x000101626ba0(&uStack_c0,auStack_f8);
        func_0x000101626ba0(&uStack_e0,auStack_f8);
      }
      func_0x0001015dc5d0(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_10364d978;
    }
LAB_10364d838:
    func_0x000101626ba0(&uStack_80,&uStack_c0);
    puVar3 = &uStack_a0;
    puVar4 = &uStack_c0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_10364d8c0:
    func_0x000101626ba0(puVar3,puVar4);
    func_0x0001015dc5d0(uVar7,uVar6,uVar2);
  }
LAB_10364d970:
  func_0x0001015dc5d0(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_10364d978:
  return uVar1 & 1;
}



/* Entry: 10364d3b4; end: 10364d3e3;  */

undefined1  [16] FUN_10364d3b4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10364d3e4; end: 10364d417;  */

void FUN_10364d3e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10364d418; end: 10364d42b;  */

undefined8 FUN_10364d418(void)

{
  return 0x10364d428;
}



/* Entry: 10364d42c; end: 10364d43f;  */

void FUN_10364d42c(void)

{
  FUN_10364d118();
  return;
}



/* Entry: 10364d440; end: 10364d477;  */

void FUN_10364d440(void)

{
  FUN_10364d1e8();
  return;
}



/* Entry: 10364d478; end: 10364d47b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10364d478(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10364d47c; end: 10364d4b3;  */

uint FUN_10364d47c(long param_1,long param_2)

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
  FUN_10364df2c();
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



/* Entry: 10364d4b4; end: 10364d4fb;  */

uint FUN_10364d4b4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_10364d724(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10364d4fc; end: 10364d59b;  */

/* WARNING: Possible PIC construction at 0x00010364d548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010364d558: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010364d54c) */
/* WARNING: Removing unreachable block (ram,0x00010364d55c) */

void FUN_10364d4fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81918 != -1) {
    func_0x000107c61568(0x112f81918,0x10364d0d0);
  }
  uVar5 = uRam000000011380b068;
  uVar4 = uRam000000011380b060;
  uVar3 = uRam000000011380b058;
  uVar2 = uRam000000011380b050;
  uVar1 = uRam000000011380b048;
  *param_1 = uRam000000011380b040;
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



/* Entry: 10364d59c; end: 10364d5d7;  */

void FUN_10364d59c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f81938;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f81938,&UNK_10dbf24a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10364d5d8; end: 10364d6db;  */

void FUN_10364d5d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10364d6dc; end: 10364d723;  */

uint FUN_10364d6dc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_10364d724(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10364d724; end: 10364d99b;  */

uint FUN_10364d724(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_f8 [3];
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar8;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  uStack_70 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_10364d838;
    if ((int)uVar9 == (int)uVar10) {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      func_0x000101626ba0(&uStack_a0,&uStack_c0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x0001015dc5d0(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10364d7a4;
    }
    else {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      puVar3 = &uStack_a0;
      puVar4 = &uStack_c0;
LAB_10364d950:
      func_0x000101626ba0(puVar3,puVar4);
      func_0x0001015dc5d0(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      func_0x000101626ba0(&uStack_a0,&uStack_c0);
LAB_10364d7a4:
      func_0x0001015dc5d0(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_e0 = uVar10;
      uStack_d8 = uVar12;
      uStack_d0 = uVar8;
      uStack_c0 = uVar9;
      uStack_b8 = uVar11;
      uStack_b0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_10364d8ac;
        if ((int)uVar9 != (int)uVar10) {
          func_0x000101626ba0(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          goto LAB_10364d950;
        }
        func_0x000101626ba0(&uStack_c0,auStack_f8);
        func_0x000101626ba0(&uStack_e0,auStack_f8);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x0001015dc5d0(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364d970;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_10364d8ac:
          func_0x000101626ba0(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364d8c0;
        }
        func_0x000101626ba0(&uStack_c0,auStack_f8);
        func_0x000101626ba0(&uStack_e0,auStack_f8);
      }
      func_0x0001015dc5d0(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_10364d978;
    }
LAB_10364d838:
    func_0x000101626ba0(&uStack_80,&uStack_c0);
    puVar3 = &uStack_a0;
    puVar4 = &uStack_c0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_10364d8c0:
    func_0x000101626ba0(puVar3,puVar4);
    func_0x0001015dc5d0(uVar7,uVar6,uVar2);
  }
LAB_10364d970:
  func_0x0001015dc5d0(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_10364d978:
  return uVar1 & 1;
}



/* Entry: 10364d99c; end: 10364d9db;  */

void FUN_10364d99c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf23d8;
  func_0x000107c61520(&UNK_10dbf23d8,&UNK_110675348);
  puRam0000000112f81920 = puVar1;
  return;
}



/* Entry: 10364d9dc; end: 10364d9ff;  */

void FUN_10364d9dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10364da00();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10364da00; end: 10364da3f;  */

void FUN_10364da00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf23b0;
  func_0x000107c61520(&UNK_10dbf23b0,&UNK_110675348);
  puRam0000000112f81928 = puVar1;
  return;
}



/* Entry: 10364da40; end: 10364da6b;  */

void FUN_10364da40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10364d99c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e0ef8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10364da6c; end: 10364da6f;  */

void FUN_10364da6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2418;
  func_0x000107c61520(&UNK_10dbf2418,&UNK_110675348);
  puRam0000000112f81930 = puVar1;
  return;
}



/* Entry: 10364da70; end: 10364daaf;  */

void FUN_10364da70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2418;
  func_0x000107c61520(&UNK_10dbf2418,&UNK_110675348);
  puRam0000000112f81930 = puVar1;
  return;
}



/* Entry: 10364dab0; end: 10364db3b;  */

long FUN_10364dab0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10364db3c; end: 10364de67;  */

undefined8 * FUN_10364db3c(undefined8 *param_1,undefined8 *param_2)

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
  uVar3 = param_2[7];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[6] = uVar2;
    param_1[7] = uVar3;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  return param_1;
}



/* Entry: 10364de68; end: 10364df2b;  */

int FUN_10364de68(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10364df2c; end: 10364dfb3;  */

void FUN_10364df2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf2384;
  func_0x000107c61520(&DAT_10dbf2384,&UNK_110675348);
  puRam0000000112f81940 = puVar1;
  return;
}



/* Entry: 10364dfb4; end: 10364e097;  */

void FUN_10364dfb4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_1036501a0();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_1106756a0;
LAB_10364e03c:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_1036502cc();
        lVar2 = unaff_x20 + 0x98;
        puVar3 = &UNK_110675730;
        goto LAB_10364e03c;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10364e098; end: 10364e10b;  */

void FUN_10364e098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10364e10c();
  if (unaff_x21 == 0) {
    FUN_10364e1e0();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10364e10c; end: 10364e1df;  */

void FUN_10364e10c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  
  uStack_68 = *(undefined8 *)(param_1 + 0x78);
  uStack_70 = *(undefined8 *)(param_1 + 0x70);
  uStack_58 = *(undefined8 *)(param_1 + 0x88);
  uStack_60 = *(undefined8 *)(param_1 + 0x80);
  uStack_50 = *(undefined8 *)(param_1 + 0x90);
  uStack_a8 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = *(undefined8 *)(param_1 + 0x48);
  uStack_a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = *(undefined8 *)(param_1 + 0x58);
  uStack_90 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = *(undefined8 *)(param_1 + 0x68);
  uStack_80 = *(undefined8 *)(param_1 + 0x60);
  uStack_c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_d0 = *(undefined8 *)(param_1 + 0x10);
  uStack_b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_c0 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = &uStack_d0;
  FUN_10364f0d4();
  if ((int)puVar1 != 1) {
    uStack_f8 = uStack_68;
    uStack_100 = uStack_70;
    uStack_e8 = uStack_58;
    uStack_f0 = uStack_60;
    uStack_e0 = uStack_50;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1036501a0();
    (*pcVar2)(&uStack_160,1,&UNK_1106756a0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10364e1e0; end: 10364e2c7;  */

void FUN_10364e1e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0xf0);
  uStack_80 = *(undefined8 *)(param_1 + 0xe8);
  uStack_68 = *(undefined8 *)(param_1 + 0x100);
  uStack_70 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined8 *)(param_1 + 0x118);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_98 = *(undefined8 *)(param_1 + 0xd0);
  uStack_a0 = *(undefined8 *)(param_1 + 200);
  uStack_88 = *(undefined8 *)(param_1 + 0xe0);
  uStack_90 = *(undefined8 *)(param_1 + 0xd8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_58 = *(undefined8 *)(param_1 + 0x110);
  uStack_60 = *(undefined8 *)(param_1 + 0x108);
  puVar1 = &uStack_d0;
  FUN_10364f0d4();
  if ((int)puVar1 != 1) {
    uStack_f8 = uStack_68;
    uStack_100 = uStack_70;
    uStack_e8 = uStack_58;
    uStack_f0 = uStack_60;
    uStack_e0 = uStack_50;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1036502cc();
    (*pcVar2)(&uStack_160,2,&UNK_110675730,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10364e2c8; end: 10364e2cb;  */

uint FUN_10364e2c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar5;
  undefined1 auStack_808 [136];
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_660;
  undefined8 uStack_658;
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
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
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
  undefined8 uVar4;
  
  uStack_4f8 = param_1[0xd];
  uStack_500 = param_1[0xc];
  uStack_228 = param_1[0xf];
  uStack_230 = param_1[0xe];
  uStack_4e8 = param_1[0xf];
  uStack_4f0 = param_1[0xe];
  uStack_218 = param_1[0x11];
  uStack_220 = param_1[0x10];
  uStack_538 = param_1[5];
  uStack_540 = param_1[4];
  uStack_268 = param_1[7];
  uStack_270 = param_1[6];
  uStack_528 = param_1[7];
  uStack_530 = param_1[6];
  uStack_258 = param_1[9];
  uStack_260 = param_1[8];
  uStack_518 = param_1[9];
  uStack_520 = param_1[8];
  uStack_248 = param_1[0xb];
  uStack_250 = param_1[10];
  uStack_508 = param_1[0xb];
  uStack_510 = param_1[10];
  uStack_238 = param_1[0xd];
  uStack_240 = param_1[0xc];
  uStack_288 = param_1[3];
  uStack_290 = param_1[2];
  uStack_278 = param_1[5];
  uStack_280 = param_1[4];
  uStack_548 = param_1[3];
  uStack_550 = param_1[2];
  uStack_470 = param_2[0xd];
  uStack_478 = param_2[0xc];
  uStack_2b8 = param_2[0xf];
  uStack_2c0 = param_2[0xe];
  uStack_460 = param_2[0xf];
  uStack_468 = param_2[0xe];
  uStack_2a8 = param_2[0x11];
  uStack_2b0 = param_2[0x10];
  uStack_4b0 = param_2[5];
  uStack_4b8 = param_2[4];
  uStack_2f8 = param_2[7];
  uStack_300 = param_2[6];
  uStack_4a0 = param_2[7];
  uStack_4a8 = param_2[6];
  uStack_2e8 = param_2[9];
  uStack_2f0 = param_2[8];
  uStack_490 = param_2[9];
  uStack_498 = param_2[8];
  uStack_2d8 = param_2[0xb];
  uStack_2e0 = param_2[10];
  uStack_480 = param_2[0xb];
  uStack_488 = param_2[10];
  uStack_2c8 = param_2[0xd];
  uStack_2d0 = param_2[0xc];
  uStack_318 = param_2[3];
  uStack_320 = param_2[2];
  uStack_308 = param_2[5];
  uStack_310 = param_2[4];
  uStack_4c0 = param_2[3];
  uStack_4c8 = param_2[2];
  uStack_4d8 = param_1[0x11];
  uStack_4e0 = param_1[0x10];
  uStack_450 = param_2[0x11];
  uStack_458 = param_2[0x10];
  uStack_210 = param_1[0x12];
  uStack_2a0 = param_2[0x12];
  uStack_4d0 = param_1[0x12];
  uStack_448 = param_2[0x12];
  iVar1 = (int)&uStack_550;
  FUN_10364f0d4();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_4c8;
    FUN_10364f0d4();
    if (iVar1 == 1) {
      uStack_5f8 = uStack_4e8;
      uStack_600 = uStack_4f0;
      uStack_5e8 = uStack_4d8;
      uStack_5f0 = uStack_4e0;
      uStack_5e0 = uStack_4d0;
      uStack_638 = uStack_528;
      uStack_640 = uStack_530;
      uStack_628 = uStack_518;
      uStack_630 = uStack_520;
      uStack_618 = uStack_508;
      uStack_620 = uStack_510;
      uStack_608 = uStack_4f8;
      uStack_610 = uStack_500;
      uStack_658 = uStack_548;
      uStack_660 = uStack_550;
      uStack_648 = uStack_538;
      uStack_650 = uStack_540;
      FUN_10364f8d8(&uStack_290,&uStack_e0,0x112f73120,&UNK_10dbf24f0);
      FUN_10364f8d8(&uStack_320,&uStack_e0,0x112f73120,&UNK_10dbf24f0);
      FUN_10364f104(&uStack_660,0x112f73120,&UNK_10dbf24f0);
LAB_10364fc4c:
      uStack_358 = param_1[0x1e];
      uStack_360 = param_1[0x1d];
      uStack_348 = param_1[0x20];
      uStack_350 = param_1[0x1f];
      uStack_330 = param_1[0x23];
      uStack_398 = param_1[0x16];
      uStack_3a0 = param_1[0x15];
      uStack_388 = param_1[0x18];
      uStack_390 = param_1[0x17];
      uStack_378 = param_1[0x1a];
      uStack_380 = param_1[0x19];
      uStack_368 = param_1[0x1c];
      uStack_370 = param_1[0x1b];
      uStack_3a8 = param_1[0x14];
      uStack_3b0 = param_1[0x13];
      uStack_338 = param_1[0x22];
      uStack_340 = param_1[0x21];
      uStack_3e8 = param_2[0x1e];
      uStack_3f0 = param_2[0x1d];
      uStack_3d8 = param_2[0x20];
      uStack_3e0 = param_2[0x1f];
      uStack_3c8 = param_2[0x22];
      uStack_3d0 = param_2[0x21];
      uStack_3c0 = param_2[0x23];
      uStack_428 = param_2[0x16];
      uStack_430 = param_2[0x15];
      uStack_418 = param_2[0x18];
      uStack_420 = param_2[0x17];
      uStack_408 = param_2[0x1a];
      uStack_410 = param_2[0x19];
      uStack_3f8 = param_2[0x1c];
      uStack_400 = param_2[0x1b];
      uStack_438 = param_2[0x14];
      uStack_440 = param_2[0x13];
      uStack_4f8 = param_1[0x1e];
      uStack_500 = param_1[0x1d];
      uStack_4e8 = param_1[0x20];
      uStack_4f0 = param_1[0x1f];
      uStack_4d8 = param_1[0x22];
      uStack_4e0 = param_1[0x21];
      uStack_4d0 = param_1[0x23];
      uStack_538 = param_1[0x16];
      uStack_540 = param_1[0x15];
      uStack_528 = param_1[0x18];
      uStack_530 = param_1[0x17];
      uStack_518 = param_1[0x1a];
      uStack_520 = param_1[0x19];
      uStack_508 = param_1[0x1c];
      uStack_510 = param_1[0x1b];
      uStack_548 = param_1[0x14];
      uStack_550 = param_1[0x13];
      uStack_470 = param_2[0x1e];
      uStack_478 = param_2[0x1d];
      uStack_460 = param_2[0x20];
      uStack_468 = param_2[0x1f];
      uStack_450 = param_2[0x22];
      uStack_458 = param_2[0x21];
      uStack_448 = param_2[0x23];
      uStack_4b0 = param_2[0x16];
      uStack_4b8 = param_2[0x15];
      uStack_4a0 = param_2[0x18];
      uStack_4a8 = param_2[0x17];
      uStack_490 = param_2[0x1a];
      uStack_498 = param_2[0x19];
      uStack_480 = param_2[0x1c];
      uStack_488 = param_2[0x1b];
      uStack_4c0 = param_2[0x14];
      uStack_4c8 = param_2[0x13];
      iVar1 = (int)&uStack_550;
      FUN_10364f0d4();
      if (iVar1 == 1) {
        iVar1 = (int)&uStack_4c8;
        FUN_10364f0d4();
        if (iVar1 != 1) {
LAB_10364fe14:
          func_0x000107c610b4(&uStack_660,&uStack_550,0x110);
          FUN_10364f8d8(&uStack_3b0,&uStack_200,0x112f73128,&UNK_10dbf2500);
          FUN_10364f8d8(&uStack_440,&uStack_200,0x112f73128,&UNK_10dbf2500);
          uVar4 = 0x112f81950;
          puVar5 = &UNK_10dbf2508;
          goto LAB_10364fe6c;
        }
        uStack_5f8 = uStack_4e8;
        uStack_600 = uStack_4f0;
        uStack_5e8 = uStack_4d8;
        uStack_5f0 = uStack_4e0;
        uStack_5e0 = uStack_4d0;
        uStack_638 = uStack_528;
        uStack_640 = uStack_530;
        uStack_628 = uStack_518;
        uStack_630 = uStack_520;
        uStack_618 = uStack_508;
        uStack_620 = uStack_510;
        uStack_608 = uStack_4f8;
        uStack_610 = uStack_500;
        uStack_658 = uStack_548;
        uStack_660 = uStack_550;
        uStack_648 = uStack_538;
        uStack_650 = uStack_540;
        FUN_10364f8d8(&uStack_3b0,&uStack_200,0x112f73128,&UNK_10dbf2500);
        FUN_10364f8d8(&uStack_440,&uStack_200,0x112f73128,&UNK_10dbf2500);
        FUN_10364f104(&uStack_660,0x112f73128,&UNK_10dbf2500);
      }
      else {
        uStack_688 = uStack_4e8;
        uStack_690 = uStack_4f0;
        uStack_678 = uStack_4d8;
        uStack_680 = uStack_4e0;
        uStack_670 = uStack_4d0;
        uStack_6c8 = uStack_528;
        uStack_6d0 = uStack_530;
        uStack_6b8 = uStack_518;
        uStack_6c0 = uStack_520;
        uStack_6a8 = uStack_508;
        uStack_6b0 = uStack_510;
        uStack_698 = uStack_4f8;
        uStack_6a0 = uStack_500;
        uStack_6e8 = uStack_548;
        uStack_6f0 = uStack_550;
        uStack_6d8 = uStack_538;
        uStack_6e0 = uStack_540;
        iVar1 = (int)&uStack_4c8;
        FUN_10364f0d4();
        if (iVar1 == 1) goto LAB_10364fe14;
        uStack_718 = uStack_460;
        uStack_720 = uStack_468;
        uStack_708 = uStack_450;
        uStack_710 = uStack_458;
        uStack_700 = uStack_448;
        uStack_758 = uStack_4a0;
        uStack_760 = uStack_4a8;
        uStack_748 = uStack_490;
        uStack_750 = uStack_498;
        uStack_738 = uStack_480;
        uStack_740 = uStack_488;
        uStack_728 = uStack_470;
        uStack_730 = uStack_478;
        uStack_778 = uStack_4c0;
        uStack_780 = uStack_4c8;
        uStack_768 = uStack_4b0;
        uStack_770 = uStack_4b8;
        uStack_5f8 = uStack_460;
        uStack_600 = uStack_468;
        uStack_5e8 = uStack_450;
        uStack_5f0 = uStack_458;
        uStack_5e0 = uStack_448;
        uStack_638 = uStack_4a0;
        uStack_640 = uStack_4a8;
        uStack_628 = uStack_490;
        uStack_630 = uStack_498;
        uStack_618 = uStack_480;
        uStack_620 = uStack_488;
        uStack_608 = uStack_470;
        uStack_610 = uStack_478;
        uStack_658 = uStack_4c0;
        uStack_660 = uStack_4c8;
        uStack_648 = uStack_4b0;
        uStack_650 = uStack_4b8;
        uStack_198 = uStack_688;
        uStack_1a0 = uStack_690;
        uStack_188 = uStack_678;
        uStack_190 = uStack_680;
        uStack_180 = uStack_670;
        uStack_1d8 = uStack_6c8;
        uStack_1e0 = uStack_6d0;
        uStack_1c8 = uStack_6b8;
        uStack_1d0 = uStack_6c0;
        uStack_1b8 = uStack_6a8;
        uStack_1c0 = uStack_6b0;
        uStack_1a8 = uStack_698;
        uStack_1b0 = uStack_6a0;
        uStack_1f8 = uStack_6e8;
        uStack_200 = uStack_6f0;
        uStack_1e8 = uStack_6d8;
        uStack_1f0 = uStack_6e0;
        FUN_10364f8d8(&uStack_3b0,auStack_808,0x112f73128,&UNK_10dbf2500);
        FUN_10364f8d8(&uStack_440,auStack_808,0x112f73128,&UNK_10dbf2500);
        puVar3 = &uStack_200;
        FUN_10364f144(puVar3,&uStack_660);
        FUN_10364f104(&uStack_780,0x112f73128,&UNK_10dbf2500);
        FUN_10364f104(&uStack_550,0x112f73128,&UNK_10dbf2500);
        if (((ulong)puVar3 & 1) == 0) goto LAB_10364fe74;
      }
      uVar4 = *param_1;
      func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
      uVar2 = (uint)uVar4;
      goto LAB_10364fe78;
    }
LAB_10364fad0:
    func_0x000107c610b4(&uStack_660,&uStack_550,0x110);
    FUN_10364f8d8(&uStack_290,&uStack_e0,0x112f73120,&UNK_10dbf24f0);
    FUN_10364f8d8(&uStack_320,&uStack_e0,0x112f73120,&UNK_10dbf24f0);
    uVar4 = 0x112f81948;
    puVar5 = &UNK_10dbf24f8;
LAB_10364fe6c:
    FUN_10364f104(&uStack_660,uVar4,puVar5);
  }
  else {
    uStack_5f8 = uStack_4e8;
    uStack_600 = uStack_4f0;
    uStack_5e8 = uStack_4d8;
    uStack_5f0 = uStack_4e0;
    uStack_5e0 = uStack_4d0;
    uStack_638 = uStack_528;
    uStack_640 = uStack_530;
    uStack_628 = uStack_518;
    uStack_630 = uStack_520;
    uStack_618 = uStack_508;
    uStack_620 = uStack_510;
    uStack_608 = uStack_4f8;
    uStack_610 = uStack_500;
    uStack_658 = uStack_548;
    uStack_660 = uStack_550;
    uStack_648 = uStack_538;
    uStack_650 = uStack_540;
    iVar1 = (int)&uStack_4c8;
    FUN_10364f0d4();
    if (iVar1 == 1) goto LAB_10364fad0;
    uStack_198 = uStack_460;
    uStack_1a0 = uStack_468;
    uStack_188 = uStack_450;
    uStack_190 = uStack_458;
    uStack_1d8 = uStack_4a0;
    uStack_1e0 = uStack_4a8;
    uStack_1c8 = uStack_490;
    uStack_1d0 = uStack_498;
    uStack_1b8 = uStack_480;
    uStack_1c0 = uStack_488;
    uStack_1a8 = uStack_470;
    uStack_1b0 = uStack_478;
    uStack_1f8 = uStack_4c0;
    uStack_200 = uStack_4c8;
    uStack_1e8 = uStack_4b0;
    uStack_1f0 = uStack_4b8;
    uStack_88 = uStack_470;
    uStack_90 = uStack_478;
    uStack_78 = uStack_460;
    uStack_80 = uStack_468;
    uStack_68 = uStack_450;
    uStack_70 = uStack_458;
    uStack_c8 = uStack_4b0;
    uStack_d0 = uStack_4b8;
    uStack_b8 = uStack_4a0;
    uStack_c0 = uStack_4a8;
    uStack_a8 = uStack_490;
    uStack_b0 = uStack_498;
    uStack_98 = uStack_480;
    uStack_a0 = uStack_488;
    uStack_d8 = uStack_4c0;
    uStack_e0 = uStack_4c8;
    uStack_118 = uStack_608;
    uStack_120 = uStack_610;
    uStack_108 = uStack_5f8;
    uStack_110 = uStack_600;
    uStack_f8 = uStack_5e8;
    uStack_100 = uStack_5f0;
    uStack_180 = uStack_448;
    uStack_60 = uStack_448;
    uStack_f0 = uStack_5e0;
    uStack_138 = uStack_628;
    uStack_140 = uStack_630;
    uStack_128 = uStack_618;
    uStack_130 = uStack_620;
    uStack_158 = uStack_648;
    uStack_160 = uStack_650;
    uStack_148 = uStack_638;
    uStack_150 = uStack_640;
    uStack_168 = uStack_658;
    uStack_170 = uStack_660;
    FUN_10364f8d8(&uStack_290,&uStack_3b0,0x112f73120,&UNK_10dbf24f0);
    FUN_10364f8d8(&uStack_320,&uStack_3b0,0x112f73120,&UNK_10dbf24f0);
    puVar3 = &uStack_170;
    FUN_10364f144(puVar3,&uStack_e0);
    FUN_10364f104(&uStack_200,0x112f73120,&UNK_10dbf24f0);
    FUN_10364f104(&uStack_550,0x112f73120,&UNK_10dbf24f0);
    if (((ulong)puVar3 & 1) != 0) goto LAB_10364fc4c;
  }
LAB_10364fe74:
  uVar2 = 0;
LAB_10364fe78:
  return uVar2 & 1;
}



/* Entry: 10364e2cc; end: 10364e3a3;  */

void FUN_10364e2cc(undefined8 *param_1)

{
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
  undefined8 uStack_40;
  
  func_0x000100d57194(&uStack_1d0);
  uStack_58 = uStack_168;
  uStack_60 = uStack_170;
  uStack_48 = uStack_158;
  uStack_50 = uStack_160;
  uStack_40 = uStack_150;
  uStack_98 = uStack_1a8;
  uStack_a0 = uStack_1b0;
  uStack_88 = uStack_198;
  uStack_90 = uStack_1a0;
  uStack_78 = uStack_188;
  uStack_80 = uStack_190;
  uStack_68 = uStack_178;
  uStack_70 = uStack_180;
  uStack_b8 = uStack_1c8;
  uStack_c0 = uStack_1d0;
  uStack_a8 = uStack_1b8;
  uStack_b0 = uStack_1c0;
  func_0x000100d57194(&uStack_148);
  param_1[0xd] = uStack_68;
  param_1[0xc] = uStack_70;
  param_1[0xf] = uStack_58;
  param_1[0xe] = uStack_60;
  param_1[0x11] = uStack_48;
  param_1[0x10] = uStack_50;
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[9] = uStack_88;
  param_1[8] = uStack_90;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  param_1[0x1e] = uStack_f0;
  param_1[0x1d] = uStack_f8;
  param_1[0x20] = uStack_e0;
  param_1[0x1f] = uStack_e8;
  param_1[0x22] = uStack_d0;
  param_1[0x21] = uStack_d8;
  param_1[0x16] = uStack_130;
  param_1[0x15] = uStack_138;
  param_1[0x18] = uStack_120;
  param_1[0x17] = uStack_128;
  param_1[0x1a] = uStack_110;
  param_1[0x19] = uStack_118;
  param_1[0x1c] = uStack_100;
  param_1[0x1b] = uStack_108;
  param_1[0x12] = uStack_40;
  param_1[0x23] = uStack_c8;
  param_1[0x14] = uStack_140;
  param_1[0x13] = uStack_148;
  return;
}



/* Entry: 10364e3a4; end: 10364e3c7;  */

undefined1  [16] FUN_10364e3a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156c60;
  auVar1._0_8_ = 0xd000000000000024;
  return auVar1;
}



/* Entry: 10364e3c8; end: 10364e3f7;  */

undefined1  [16] FUN_10364e3c8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10364e3f8; end: 10364e42b;  */

void FUN_10364e3f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10364e42c; end: 10364e43f;  */

undefined8 FUN_10364e42c(void)

{
  return 0x10364e43c;
}



/* Entry: 10364e440; end: 10364e453;  */

void FUN_10364e440(void)

{
  FUN_10364dfb4();
  return;
}



/* Entry: 10364e454; end: 10364e4bb;  */

void FUN_10364e454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_160 [288];
  
  func_0x000107c610b4(auStack_160);
  FUN_10364e098(param_1,param_2,param_3);
  return;
}



/* Entry: 10364e4bc; end: 10364e4bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10364e4bc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10364e4c0; end: 10364e4f7;  */

uint FUN_10364e4c0(long param_1,long param_2)

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
  func_0x000103651f60();
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



/* Entry: 10364e4f8; end: 10364e547;  */

uint FUN_10364e4f8(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_260 [288];
  undefined1 auStack_140 [288];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_140,param_1,0x120);
  func_0x000107c610b4(auStack_260);
  FUN_10364f920(auStack_260,auStack_140);
  return uVar1 & 1;
}



/* Entry: 10364e548; end: 10364e5e7;  */

/* WARNING: Possible PIC construction at 0x00010364e594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010364e5a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010364e598) */
/* WARNING: Removing unreachable block (ram,0x00010364e5a8) */

void FUN_10364e548(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81958 != -1) {
    func_0x000107c61568(0x112f81958,0x10364df6c);
  }
  uVar5 = uRam000000011380b098;
  uVar4 = uRam000000011380b090;
  uVar3 = uRam000000011380b088;
  uVar2 = uRam000000011380b080;
  uVar1 = uRam000000011380b078;
  *param_1 = uRam000000011380b070;
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



/* Entry: 10364e5e8; end: 10364e623;  */

void FUN_10364e5e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f819e8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f819e8,&UNK_10dbf2880);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10364e624; end: 10364e72f;  */

void FUN_10364e624(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_198 [72];
  undefined1 auStack_150 [288];
  
  func_0x000107c610b4(auStack_150);
  func_0x000107c6068c(auStack_198,0);
  func_0x000107c5fa50(auStack_198,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10364e730; end: 10364e783;  */

uint FUN_10364e730(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_260 [288];
  undefined1 auStack_140 [288];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_260,param_1,0x120);
  func_0x000107c610b4(auStack_140,param_2,0x120);
  FUN_10364f920(auStack_260,auStack_140);
  return uVar1 & 1;
}



/* Entry: 10364e784; end: 10364e7cb;  */

void FUN_10364e784(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf2890,0x6e,2);
  uRam000000011380b0a8 = uStack_38;
  uRam000000011380b0a0 = uStack_40;
  uRam000000011380b0b8 = uStack_28;
  uRam000000011380b0b0 = uStack_30;
  uRam000000011380b0c8 = uStack_18;
  uRam000000011380b0c0 = uStack_20;
  return;
}



/* Entry: 10364e7cc; end: 10364e803;  */

undefined1  [16] FUN_10364e7cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156c90;
  auVar1._0_8_ = 0xd000000000000037;
  return auVar1;
}



/* Entry: 10364e804; end: 10364e83b;  */

uint FUN_10364e804(long param_1,long param_2)

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
  func_0x000103651f20();
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



/* Entry: 10364e83c; end: 10364e8db;  */

/* WARNING: Possible PIC construction at 0x00010364e888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010364e898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010364e88c) */
/* WARNING: Removing unreachable block (ram,0x00010364e89c) */

void FUN_10364e83c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81968 != -1) {
    func_0x000107c61568(0x112f81968,FUN_10364e784);
  }
  uVar5 = uRam000000011380b0c8;
  uVar4 = uRam000000011380b0c0;
  uVar3 = uRam000000011380b0b8;
  uVar2 = uRam000000011380b0b0;
  uVar1 = uRam000000011380b0a8;
  *param_1 = uRam000000011380b0a0;
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



/* Entry: 10364e8dc; end: 10364e8ef;  */

void FUN_10364e8dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f819d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f819d8,&UNK_10dbf2878);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10364e8f0; end: 10364e927;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10364e8f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_1036501a0();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 10364e928; end: 10364e96f;  */

void FUN_10364e928(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf2890,0x6e,2);
  uRam000000011380b0d8 = uStack_38;
  uRam000000011380b0d0 = uStack_40;
  uRam000000011380b0e8 = uStack_28;
  uRam000000011380b0e0 = uStack_30;
  uRam000000011380b0f8 = uStack_18;
  uRam000000011380b0f0 = uStack_20;
  return;
}



/* Entry: 10364e970; end: 10364eaa7;  */

void FUN_10364e970(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_10364e9e4;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_10364e9e4;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x40;
        }
        else if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x58;
        }
        else {
          if (lVar1 != 5) goto LAB_10364e9fc;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x70;
        }
LAB_10364e9e4:
        (*pcVar4)(lVar2,&UNK_110790c00,lVar1,param_2,param_3);
      }
LAB_10364e9fc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10364eaa8; end: 10364eb63;  */

void FUN_10364eaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10364eb64();
  if (unaff_x21 == 0) {
    FUN_10364ebec();
    FUN_10364ec74();
    FUN_10364ecfc();
    FUN_10364ed84();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10364eb64; end: 10364ebeb;  */

void FUN_10364eb64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x10);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,1,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364ebec; end: 10364ec73;  */

void FUN_10364ebec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x28);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,2,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364ec74; end: 10364ecfb;  */

void FUN_10364ec74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x40);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,3,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364ecfc; end: 10364ed83;  */

void FUN_10364ecfc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x58);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,4,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364ed84; end: 10364ee0b;  */

void FUN_10364ed84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x70);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,5,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10364ee0c; end: 10364ee77;  */

void FUN_10364ee0c(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 2;
  return;
}



/* Entry: 10364ee78; end: 10364eeaf;  */

uint FUN_10364ee78(long param_1,long param_2)

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
  FUN_103651ee0();
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



/* Entry: 10364eeb0; end: 10364ef4f;  */

/* WARNING: Possible PIC construction at 0x00010364eefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010364ef0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010364ef00) */
/* WARNING: Removing unreachable block (ram,0x00010364ef10) */

void FUN_10364eeb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81978 != -1) {
    func_0x000107c61568(0x112f81978,FUN_10364e928);
  }
  uVar5 = uRam000000011380b0f8;
  uVar4 = uRam000000011380b0f0;
  uVar3 = uRam000000011380b0e8;
  uVar2 = uRam000000011380b0e0;
  uVar1 = uRam000000011380b0d8;
  *param_1 = uRam000000011380b0d0;
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



/* Entry: 10364ef50; end: 10364ef63;  */

void FUN_10364ef50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f819c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f819c8,&UNK_10dbf2870);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10364ef64; end: 10364ef97;  */

void FUN_10364ef64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10364ef98; end: 10364f0d3;  */

void FUN_10364ef98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10364f0d4; end: 10364f103;  */

int FUN_10364f0d4(long param_1)

{
  uint uVar1;
  
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0x10)) {
    uVar1 = (*(byte *)(param_1 + 0x10) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10364f104; end: 10364f143;  */

undefined8 FUN_10364f104(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10364f144; end: 10364f8d7;  */

uint FUN_10364f144(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong auStack_1c8 [3];
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar8;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar5;
  if ((uVar9 & 0xff) == 2) {
    if ((uVar10 & 0xff) == 2) {
      FUN_10364f8d8(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_10364f8d8(&uStack_b0,&uStack_d0,0x112db94f0,&UNK_10d96af00);
LAB_10364f1e8:
      func_0x000101556278(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_f0 = uVar10;
      uStack_e8 = uVar12;
      uStack_e0 = uVar8;
      uStack_d0 = uVar9;
      uStack_c8 = uVar11;
      uStack_c0 = uVar5;
      if ((uVar9 & 0xff) == 2) {
        if ((uVar10 & 0xff) != 2) {
LAB_10364f4a0:
          FUN_10364f8d8(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar6 = uVar5;
          uVar2 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364f754;
        }
        FUN_10364f8d8(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        FUN_10364f8d8(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
      }
      else {
        if ((uVar10 & 0xff) == 2) goto LAB_10364f4a0;
        if ((((uint)uVar10 ^ (uint)uVar9) & 1) != 0) {
          FUN_10364f8d8(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_10364f81c;
        }
        FUN_10364f8d8(&uStack_d0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        FUN_10364f8d8(&uStack_f0,&uStack_110,0x112db94f0,&UNK_10d96af00);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101556278(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364f844;
      }
      func_0x000101556278(uVar9,uVar11,uVar5);
      uVar11 = param_1[9];
      uVar9 = param_1[8];
      uVar5 = param_1[10];
      uVar12 = param_2[9];
      uVar10 = param_2[8];
      uVar8 = param_2[10];
      uStack_130 = uVar10;
      uStack_128 = uVar12;
      uStack_120 = uVar8;
      uStack_110 = uVar9;
      uStack_108 = uVar11;
      uStack_100 = uVar5;
      if ((uVar9 & 0xff) == 2) {
        if ((uVar10 & 0xff) != 2) {
LAB_10364f578:
          FUN_10364f8d8(&uStack_110,&uStack_150,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar6 = uVar5;
          uVar2 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364f754;
        }
        FUN_10364f8d8(&uStack_110,&uStack_150,0x112db94f0,&UNK_10d96af00);
        FUN_10364f8d8(&uStack_130,&uStack_150,0x112db94f0,&UNK_10d96af00);
      }
      else {
        if ((uVar10 & 0xff) == 2) goto LAB_10364f578;
        if ((((uint)uVar10 ^ (uint)uVar9) & 1) != 0) {
          FUN_10364f8d8(&uStack_110,&uStack_150,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_10364f81c;
        }
        FUN_10364f8d8(&uStack_110,&uStack_150,0x112db94f0,&UNK_10d96af00);
        FUN_10364f8d8(&uStack_130,&uStack_150,0x112db94f0,&UNK_10d96af00);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101556278(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364f844;
      }
      func_0x000101556278(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xc];
      uVar9 = param_1[0xb];
      uVar5 = param_1[0xd];
      uVar12 = param_2[0xc];
      uVar10 = param_2[0xb];
      uVar8 = param_2[0xd];
      uStack_170 = uVar10;
      uStack_168 = uVar12;
      uStack_160 = uVar8;
      uStack_150 = uVar9;
      uStack_148 = uVar11;
      uStack_140 = uVar5;
      if ((uVar9 & 0xff) == 2) {
        if ((uVar10 & 0xff) != 2) {
LAB_10364f650:
          FUN_10364f8d8(&uStack_150,&uStack_190,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          uVar6 = uVar5;
          uVar2 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364f754;
        }
        FUN_10364f8d8(&uStack_150,&uStack_190,0x112db94f0,&UNK_10d96af00);
        FUN_10364f8d8(&uStack_170,&uStack_190,0x112db94f0,&UNK_10d96af00);
      }
      else {
        if ((uVar10 & 0xff) == 2) goto LAB_10364f650;
        if ((((uint)uVar10 ^ (uint)uVar9) & 1) != 0) {
          FUN_10364f8d8(&uStack_150,&uStack_190,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          goto LAB_10364f81c;
        }
        FUN_10364f8d8(&uStack_150,&uStack_190,0x112db94f0,&UNK_10d96af00);
        FUN_10364f8d8(&uStack_170,&uStack_190,0x112db94f0,&UNK_10d96af00);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101556278(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364f844;
      }
      func_0x000101556278(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xf];
      uVar9 = param_1[0xe];
      uVar5 = param_1[0x10];
      uVar12 = param_2[0xf];
      uVar10 = param_2[0xe];
      uVar8 = param_2[0x10];
      uStack_1b0 = uVar10;
      uStack_1a8 = uVar12;
      uStack_1a0 = uVar8;
      uStack_190 = uVar9;
      uStack_188 = uVar11;
      uStack_180 = uVar5;
      if ((uVar9 & 0xff) == 2) {
        if ((uVar10 & 0xff) != 2) {
LAB_10364f728:
          FUN_10364f8d8(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_1b0;
          puVar4 = auStack_1c8;
          uVar6 = uVar5;
          uVar2 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_10364f754;
        }
        FUN_10364f8d8(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
        FUN_10364f8d8(&uStack_1b0,auStack_1c8,0x112db94f0,&UNK_10d96af00);
      }
      else {
        if ((uVar10 & 0xff) == 2) goto LAB_10364f728;
        if ((((uint)uVar10 ^ (uint)uVar9) & 1) != 0) {
          FUN_10364f8d8(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          puVar3 = &uStack_1b0;
          puVar4 = auStack_1c8;
          goto LAB_10364f81c;
        }
        FUN_10364f8d8(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
        FUN_10364f8d8(&uStack_1b0,auStack_1c8,0x112db94f0,&UNK_10d96af00);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101556278(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_10364f844;
      }
      func_0x000101556278(uVar9,uVar11,uVar5);
      uVar5 = *param_1;
      func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar5;
      goto LAB_10364f84c;
    }
LAB_10364f430:
    FUN_10364f8d8(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar6 = uVar5;
    uVar2 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_10364f754:
    FUN_10364f8d8(puVar3,puVar4,0x112db94f0,&UNK_10d96af00);
    func_0x000101556278(uVar7,uVar2,uVar6);
  }
  else {
    if ((uVar10 & 0xff) == 2) goto LAB_10364f430;
    if ((((uint)uVar10 ^ (uint)uVar9) & 1) == 0) {
      FUN_10364f8d8(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_10364f8d8(&uStack_b0,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101556278(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10364f1e8;
    }
    else {
      FUN_10364f8d8(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10364f81c:
      FUN_10364f8d8(puVar3,puVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar10,uVar12,uVar8);
    }
  }
LAB_10364f844:
  func_0x000101556278(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_10364f84c:
  return uVar1 & 1;
}



/* Entry: 10364f8d8; end: 10364f91f;  */

undefined8 FUN_10364f8d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10364f920; end: 10364ffab;  */

uint FUN_10364f920(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar5;
  undefined1 auStack_808 [136];
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_660;
  undefined8 uStack_658;
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
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
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
  undefined8 uVar4;
  
  uStack_4f8 = param_1[0xd];
  uStack_500 = param_1[0xc];
  uStack_228 = param_1[0xf];
  uStack_230 = param_1[0xe];
  uStack_4e8 = param_1[0xf];
  uStack_4f0 = param_1[0xe];
  uStack_218 = param_1[0x11];
  uStack_220 = param_1[0x10];
  uStack_538 = param_1[5];
  uStack_540 = param_1[4];
  uStack_268 = param_1[7];
  uStack_270 = param_1[6];
  uStack_528 = param_1[7];
  uStack_530 = param_1[6];
  uStack_258 = param_1[9];
  uStack_260 = param_1[8];
  uStack_518 = param_1[9];
  uStack_520 = param_1[8];
  uStack_248 = param_1[0xb];
  uStack_250 = param_1[10];
  uStack_508 = param_1[0xb];
  uStack_510 = param_1[10];
  uStack_238 = param_1[0xd];
  uStack_240 = param_1[0xc];
  uStack_288 = param_1[3];
  uStack_290 = param_1[2];
  uStack_278 = param_1[5];
  uStack_280 = param_1[4];
  uStack_548 = param_1[3];
  uStack_550 = param_1[2];
  uStack_470 = param_2[0xd];
  uStack_478 = param_2[0xc];
  uStack_2b8 = param_2[0xf];
  uStack_2c0 = param_2[0xe];
  uStack_460 = param_2[0xf];
  uStack_468 = param_2[0xe];
  uStack_2a8 = param_2[0x11];
  uStack_2b0 = param_2[0x10];
  uStack_4b0 = param_2[5];
  uStack_4b8 = param_2[4];
  uStack_2f8 = param_2[7];
  uStack_300 = param_2[6];
  uStack_4a0 = param_2[7];
  uStack_4a8 = param_2[6];
  uStack_2e8 = param_2[9];
  uStack_2f0 = param_2[8];
  uStack_490 = param_2[9];
  uStack_498 = param_2[8];
  uStack_2d8 = param_2[0xb];
  uStack_2e0 = param_2[10];
  uStack_480 = param_2[0xb];
  uStack_488 = param_2[10];
  uStack_2c8 = param_2[0xd];
  uStack_2d0 = param_2[0xc];
  uStack_318 = param_2[3];
  uStack_320 = param_2[2];
  uStack_308 = param_2[5];
  uStack_310 = param_2[4];
  uStack_4c0 = param_2[3];
  uStack_4c8 = param_2[2];
  uStack_4d8 = param_1[0x11];
  uStack_4e0 = param_1[0x10];
  uStack_450 = param_2[0x11];
  uStack_458 = param_2[0x10];
  uStack_210 = param_1[0x12];
  uStack_2a0 = param_2[0x12];
  uStack_4d0 = param_1[0x12];
  uStack_448 = param_2[0x12];
  iVar1 = (int)&uStack_550;
  FUN_10364f0d4();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_4c8;
    FUN_10364f0d4();
    if (iVar1 == 1) {
      uStack_5f8 = uStack_4e8;
      uStack_600 = uStack_4f0;
      uStack_5e8 = uStack_4d8;
      uStack_5f0 = uStack_4e0;
      uStack_5e0 = uStack_4d0;
      uStack_638 = uStack_528;
      uStack_640 = uStack_530;
      uStack_628 = uStack_518;
      uStack_630 = uStack_520;
      uStack_618 = uStack_508;
      uStack_620 = uStack_510;
      uStack_608 = uStack_4f8;
      uStack_610 = uStack_500;
      uStack_658 = uStack_548;
      uStack_660 = uStack_550;
      uStack_648 = uStack_538;
      uStack_650 = uStack_540;
      FUN_10364f8d8(&uStack_290,&uStack_e0,0x112f73120,&UNK_10dbf24f0);
      FUN_10364f8d8(&uStack_320,&uStack_e0,0x112f73120,&UNK_10dbf24f0);
      FUN_10364f104(&uStack_660,0x112f73120,&UNK_10dbf24f0);
LAB_10364fc4c:
      uStack_358 = param_1[0x1e];
      uStack_360 = param_1[0x1d];
      uStack_348 = param_1[0x20];
      uStack_350 = param_1[0x1f];
      uStack_330 = param_1[0x23];
      uStack_398 = param_1[0x16];
      uStack_3a0 = param_1[0x15];
      uStack_388 = param_1[0x18];
      uStack_390 = param_1[0x17];
      uStack_378 = param_1[0x1a];
      uStack_380 = param_1[0x19];
      uStack_368 = param_1[0x1c];
      uStack_370 = param_1[0x1b];
      uStack_3a8 = param_1[0x14];
      uStack_3b0 = param_1[0x13];
      uStack_338 = param_1[0x22];
      uStack_340 = param_1[0x21];
      uStack_3e8 = param_2[0x1e];
      uStack_3f0 = param_2[0x1d];
      uStack_3d8 = param_2[0x20];
      uStack_3e0 = param_2[0x1f];
      uStack_3c8 = param_2[0x22];
      uStack_3d0 = param_2[0x21];
      uStack_3c0 = param_2[0x23];
      uStack_428 = param_2[0x16];
      uStack_430 = param_2[0x15];
      uStack_418 = param_2[0x18];
      uStack_420 = param_2[0x17];
      uStack_408 = param_2[0x1a];
      uStack_410 = param_2[0x19];
      uStack_3f8 = param_2[0x1c];
      uStack_400 = param_2[0x1b];
      uStack_438 = param_2[0x14];
      uStack_440 = param_2[0x13];
      uStack_4f8 = param_1[0x1e];
      uStack_500 = param_1[0x1d];
      uStack_4e8 = param_1[0x20];
      uStack_4f0 = param_1[0x1f];
      uStack_4d8 = param_1[0x22];
      uStack_4e0 = param_1[0x21];
      uStack_4d0 = param_1[0x23];
      uStack_538 = param_1[0x16];
      uStack_540 = param_1[0x15];
      uStack_528 = param_1[0x18];
      uStack_530 = param_1[0x17];
      uStack_518 = param_1[0x1a];
      uStack_520 = param_1[0x19];
      uStack_508 = param_1[0x1c];
      uStack_510 = param_1[0x1b];
      uStack_548 = param_1[0x14];
      uStack_550 = param_1[0x13];
      uStack_470 = param_2[0x1e];
      uStack_478 = param_2[0x1d];
      uStack_460 = param_2[0x20];
      uStack_468 = param_2[0x1f];
      uStack_450 = param_2[0x22];
      uStack_458 = param_2[0x21];
      uStack_448 = param_2[0x23];
      uStack_4b0 = param_2[0x16];
      uStack_4b8 = param_2[0x15];
      uStack_4a0 = param_2[0x18];
      uStack_4a8 = param_2[0x17];
      uStack_490 = param_2[0x1a];
      uStack_498 = param_2[0x19];
      uStack_480 = param_2[0x1c];
      uStack_488 = param_2[0x1b];
      uStack_4c0 = param_2[0x14];
      uStack_4c8 = param_2[0x13];
      iVar1 = (int)&uStack_550;
      FUN_10364f0d4();
      if (iVar1 == 1) {
        iVar1 = (int)&uStack_4c8;
        FUN_10364f0d4();
        if (iVar1 != 1) {
LAB_10364fe14:
          func_0x000107c610b4(&uStack_660,&uStack_550,0x110);
          FUN_10364f8d8(&uStack_3b0,&uStack_200,0x112f73128,&UNK_10dbf2500);
          FUN_10364f8d8(&uStack_440,&uStack_200,0x112f73128,&UNK_10dbf2500);
          uVar4 = 0x112f81950;
          puVar5 = &UNK_10dbf2508;
          goto LAB_10364fe6c;
        }
        uStack_5f8 = uStack_4e8;
        uStack_600 = uStack_4f0;
        uStack_5e8 = uStack_4d8;
        uStack_5f0 = uStack_4e0;
        uStack_5e0 = uStack_4d0;
        uStack_638 = uStack_528;
        uStack_640 = uStack_530;
        uStack_628 = uStack_518;
        uStack_630 = uStack_520;
        uStack_618 = uStack_508;
        uStack_620 = uStack_510;
        uStack_608 = uStack_4f8;
        uStack_610 = uStack_500;
        uStack_658 = uStack_548;
        uStack_660 = uStack_550;
        uStack_648 = uStack_538;
        uStack_650 = uStack_540;
        FUN_10364f8d8(&uStack_3b0,&uStack_200,0x112f73128,&UNK_10dbf2500);
        FUN_10364f8d8(&uStack_440,&uStack_200,0x112f73128,&UNK_10dbf2500);
        FUN_10364f104(&uStack_660,0x112f73128,&UNK_10dbf2500);
      }
      else {
        uStack_688 = uStack_4e8;
        uStack_690 = uStack_4f0;
        uStack_678 = uStack_4d8;
        uStack_680 = uStack_4e0;
        uStack_670 = uStack_4d0;
        uStack_6c8 = uStack_528;
        uStack_6d0 = uStack_530;
        uStack_6b8 = uStack_518;
        uStack_6c0 = uStack_520;
        uStack_6a8 = uStack_508;
        uStack_6b0 = uStack_510;
        uStack_698 = uStack_4f8;
        uStack_6a0 = uStack_500;
        uStack_6e8 = uStack_548;
        uStack_6f0 = uStack_550;
        uStack_6d8 = uStack_538;
        uStack_6e0 = uStack_540;
        iVar1 = (int)&uStack_4c8;
        FUN_10364f0d4();
        if (iVar1 == 1) goto LAB_10364fe14;
        uStack_718 = uStack_460;
        uStack_720 = uStack_468;
        uStack_708 = uStack_450;
        uStack_710 = uStack_458;
        uStack_700 = uStack_448;
        uStack_758 = uStack_4a0;
        uStack_760 = uStack_4a8;
        uStack_748 = uStack_490;
        uStack_750 = uStack_498;
        uStack_738 = uStack_480;
        uStack_740 = uStack_488;
        uStack_728 = uStack_470;
        uStack_730 = uStack_478;
        uStack_778 = uStack_4c0;
        uStack_780 = uStack_4c8;
        uStack_768 = uStack_4b0;
        uStack_770 = uStack_4b8;
        uStack_5f8 = uStack_460;
        uStack_600 = uStack_468;
        uStack_5e8 = uStack_450;
        uStack_5f0 = uStack_458;
        uStack_5e0 = uStack_448;
        uStack_638 = uStack_4a0;
        uStack_640 = uStack_4a8;
        uStack_628 = uStack_490;
        uStack_630 = uStack_498;
        uStack_618 = uStack_480;
        uStack_620 = uStack_488;
        uStack_608 = uStack_470;
        uStack_610 = uStack_478;
        uStack_658 = uStack_4c0;
        uStack_660 = uStack_4c8;
        uStack_648 = uStack_4b0;
        uStack_650 = uStack_4b8;
        uStack_198 = uStack_688;
        uStack_1a0 = uStack_690;
        uStack_188 = uStack_678;
        uStack_190 = uStack_680;
        uStack_180 = uStack_670;
        uStack_1d8 = uStack_6c8;
        uStack_1e0 = uStack_6d0;
        uStack_1c8 = uStack_6b8;
        uStack_1d0 = uStack_6c0;
        uStack_1b8 = uStack_6a8;
        uStack_1c0 = uStack_6b0;
        uStack_1a8 = uStack_698;
        uStack_1b0 = uStack_6a0;
        uStack_1f8 = uStack_6e8;
        uStack_200 = uStack_6f0;
        uStack_1e8 = uStack_6d8;
        uStack_1f0 = uStack_6e0;
        FUN_10364f8d8(&uStack_3b0,auStack_808,0x112f73128,&UNK_10dbf2500);
        FUN_10364f8d8(&uStack_440,auStack_808,0x112f73128,&UNK_10dbf2500);
        puVar3 = &uStack_200;
        FUN_10364f144(puVar3,&uStack_660);
        FUN_10364f104(&uStack_780,0x112f73128,&UNK_10dbf2500);
        FUN_10364f104(&uStack_550,0x112f73128,&UNK_10dbf2500);
        if (((ulong)puVar3 & 1) == 0) goto LAB_10364fe74;
      }
      uVar4 = *param_1;
      func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
      uVar2 = (uint)uVar4;
      goto LAB_10364fe78;
    }
LAB_10364fad0:
    func_0x000107c610b4(&uStack_660,&uStack_550,0x110);
    FUN_10364f8d8(&uStack_290,&uStack_e0,0x112f73120,&UNK_10dbf24f0);
    FUN_10364f8d8(&uStack_320,&uStack_e0,0x112f73120,&UNK_10dbf24f0);
    uVar4 = 0x112f81948;
    puVar5 = &UNK_10dbf24f8;
LAB_10364fe6c:
    FUN_10364f104(&uStack_660,uVar4,puVar5);
  }
  else {
    uStack_5f8 = uStack_4e8;
    uStack_600 = uStack_4f0;
    uStack_5e8 = uStack_4d8;
    uStack_5f0 = uStack_4e0;
    uStack_5e0 = uStack_4d0;
    uStack_638 = uStack_528;
    uStack_640 = uStack_530;
    uStack_628 = uStack_518;
    uStack_630 = uStack_520;
    uStack_618 = uStack_508;
    uStack_620 = uStack_510;
    uStack_608 = uStack_4f8;
    uStack_610 = uStack_500;
    uStack_658 = uStack_548;
    uStack_660 = uStack_550;
    uStack_648 = uStack_538;
    uStack_650 = uStack_540;
    iVar1 = (int)&uStack_4c8;
    FUN_10364f0d4();
    if (iVar1 == 1) goto LAB_10364fad0;
    uStack_198 = uStack_460;
    uStack_1a0 = uStack_468;
    uStack_188 = uStack_450;
    uStack_190 = uStack_458;
    uStack_1d8 = uStack_4a0;
    uStack_1e0 = uStack_4a8;
    uStack_1c8 = uStack_490;
    uStack_1d0 = uStack_498;
    uStack_1b8 = uStack_480;
    uStack_1c0 = uStack_488;
    uStack_1a8 = uStack_470;
    uStack_1b0 = uStack_478;
    uStack_1f8 = uStack_4c0;
    uStack_200 = uStack_4c8;
    uStack_1e8 = uStack_4b0;
    uStack_1f0 = uStack_4b8;
    uStack_88 = uStack_470;
    uStack_90 = uStack_478;
    uStack_78 = uStack_460;
    uStack_80 = uStack_468;
    uStack_68 = uStack_450;
    uStack_70 = uStack_458;
    uStack_c8 = uStack_4b0;
    uStack_d0 = uStack_4b8;
    uStack_b8 = uStack_4a0;
    uStack_c0 = uStack_4a8;
    uStack_a8 = uStack_490;
    uStack_b0 = uStack_498;
    uStack_98 = uStack_480;
    uStack_a0 = uStack_488;
    uStack_d8 = uStack_4c0;
    uStack_e0 = uStack_4c8;
    uStack_118 = uStack_608;
    uStack_120 = uStack_610;
    uStack_108 = uStack_5f8;
    uStack_110 = uStack_600;
    uStack_f8 = uStack_5e8;
    uStack_100 = uStack_5f0;
    uStack_180 = uStack_448;
    uStack_60 = uStack_448;
    uStack_f0 = uStack_5e0;
    uStack_138 = uStack_628;
    uStack_140 = uStack_630;
    uStack_128 = uStack_618;
    uStack_130 = uStack_620;
    uStack_158 = uStack_648;
    uStack_160 = uStack_650;
    uStack_148 = uStack_638;
    uStack_150 = uStack_640;
    uStack_168 = uStack_658;
    uStack_170 = uStack_660;
    FUN_10364f8d8(&uStack_290,&uStack_3b0,0x112f73120,&UNK_10dbf24f0);
    FUN_10364f8d8(&uStack_320,&uStack_3b0,0x112f73120,&UNK_10dbf24f0);
    puVar3 = &uStack_170;
    FUN_10364f144(puVar3,&uStack_e0);
    FUN_10364f104(&uStack_200,0x112f73120,&UNK_10dbf24f0);
    FUN_10364f104(&uStack_550,0x112f73120,&UNK_10dbf24f0);
    if (((ulong)puVar3 & 1) != 0) goto LAB_10364fc4c;
  }
LAB_10364fe74:
  uVar2 = 0;
LAB_10364fe78:
  return uVar2 & 1;
}



/* Entry: 10364ffac; end: 10365006b;  */

void FUN_10364ffac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2588;
  func_0x000107c61520(&UNK_10dbf2588,&UNK_110675618);
  puRam0000000112f81960 = puVar1;
  return;
}



/* Entry: 10365006c; end: 10365008f;  */

void FUN_10365006c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103650090();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103650090; end: 1036500cf;  */

void FUN_103650090(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2560;
  func_0x000107c61520(&UNK_10dbf2560,&UNK_110675618);
  puRam0000000112f81988 = puVar1;
  return;
}



/* Entry: 1036500d0; end: 1036500e7;  */

void FUN_1036500d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10364ffac();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035cb27c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036500e8; end: 103650127;  */

void FUN_1036500e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf25c8;
  func_0x000107c61520(&UNK_10dbf25c8,&UNK_110675618);
  puRam0000000112f81990 = puVar1;
  return;
}



/* Entry: 103650128; end: 10365014b;  */

void FUN_103650128(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10365014c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10365014c; end: 10365018b;  */

void FUN_10365014c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf2638;
  func_0x000107c61520(&UNK_10dbf2638,&UNK_1106756a0);
  puRam0000000112f81998 = puVar1;
  return;
}



/* Entry: 10365018c; end: 10365019f;  */

void FUN_10365018c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10364ffec)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1036501a0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036501a0; end: 1036501df;  */

void FUN_1036501a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f819a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf25f0;
  func_0x000107c61520(&DAT_10dbf25f0,&UNK_1106756a0);
  puRam0000000112f819a0 = puVar1;
  return;
}



/* Entry: 1036501e0; end: 1036501e3;  */

void FUN_1036501e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f819a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf26a0;
  func_0x000107c61520(&UNK_10dbf26a0,&UNK_1106756a0);
  puRam0000000112f819a8 = puVar1;
  return;
}


