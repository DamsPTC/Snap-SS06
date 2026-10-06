/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10363e344; end: 10363e37f;  */

void FUN_10363e344(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f813a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f813a0,&UNK_10dbf0ab8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10363e380; end: 10363e48b;  */

void FUN_10363e380(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1d0 [72];
  undefined1 auStack_188 [344];
  
  func_0x000107c610b4(auStack_188);
  func_0x000107c6068c(auStack_1d0,0);
  func_0x000107c5fa50(auStack_1d0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10363e48c; end: 10363e4df;  */

uint FUN_10363e48c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2d0 [344];
  undefined1 auStack_178 [344];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2d0,param_1,0x158);
  func_0x000107c610b4(auStack_178,param_2,0x158);
  FUN_10363e614(auStack_2d0,auStack_178);
  return uVar1 & 1;
}



/* Entry: 10363e4e0; end: 10363e527;  */

void FUN_10363e4e0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf0ac0,0x272,2);
  uRam000000011380add8 = uStack_38;
  uRam000000011380add0 = uStack_40;
  uRam000000011380ade8 = uStack_28;
  uRam000000011380ade0 = uStack_30;
  uRam000000011380adf8 = uStack_18;
  uRam000000011380adf0 = uStack_20;
  return;
}



/* Entry: 10363e528; end: 10363e5c7;  */

/* WARNING: Possible PIC construction at 0x00010363e574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010363e584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010363e578) */
/* WARNING: Removing unreachable block (ram,0x00010363e588) */

void FUN_10363e528(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81360 != -1) {
    func_0x000107c61568(0x112f81360,FUN_10363e4e0);
  }
  uVar5 = uRam000000011380adf8;
  uVar4 = uRam000000011380adf0;
  uVar3 = uRam000000011380ade8;
  uVar2 = uRam000000011380ade0;
  uVar1 = uRam000000011380add8;
  *param_1 = uRam000000011380add0;
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



/* Entry: 10363e5c8; end: 10363e5d3;  */

void FUN_10363e5c8(void)

{
  return;
}



/* Entry: 10363e5d4; end: 10363e613;  */

void FUN_10363e5d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf0860;
  func_0x000107c61520(&DAT_10dbf0860,&UNK_110674038);
  puRam0000000112f81350 = puVar1;
  return;
}



/* Entry: 10363e614; end: 10363f337;  */

uint FUN_10363e614(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong auStack_3c8 [3];
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar11 = param_1[5];
  uVar9 = param_1[4];
  uVar5 = param_1[6];
  uVar12 = param_2[5];
  uVar10 = param_2[4];
  uVar6 = param_2[6];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar6;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_10363e6ac;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_10363e718;
    }
    else {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10363f2ec:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
    }
LAB_10363f30c:
    func_0x000101553ccc(uVar9,uVar11,uVar5);
  }
  else {
    if (uVar6 >> 0x3c < 0xf) {
LAB_10363e6ac:
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
      uVar2 = uVar5;
      uVar7 = uVar11;
      uVar8 = uVar9;
      uVar5 = uVar6;
      uVar11 = uVar12;
      uVar9 = uVar10;
LAB_10363f220:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar8,uVar7,uVar2);
      goto LAB_10363f30c;
    }
    func_0x00010161ef18(&uStack_90,&uStack_d0);
    func_0x00010161ef18(&uStack_b0,&uStack_d0);
LAB_10363e718:
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[8];
    uVar9 = param_1[7];
    uVar5 = param_1[9];
    uVar12 = param_2[8];
    uVar10 = param_2[7];
    uVar6 = param_2[9];
    uStack_f0 = uVar10;
    uStack_e8 = uVar12;
    uStack_e0 = uVar6;
    uStack_d0 = uVar9;
    uStack_c8 = uVar11;
    uStack_c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363e78c;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_d0,&uStack_110);
      func_0x00010161ef18(&uStack_f0,&uStack_110);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363e78c:
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_d0,&uStack_110);
      func_0x00010161ef18(&uStack_f0,&uStack_110);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0xb];
    uVar9 = param_1[10];
    uVar5 = param_1[0xc];
    uVar12 = param_2[0xb];
    uVar10 = param_2[10];
    uVar6 = param_2[0xc];
    uStack_130 = uVar10;
    uStack_128 = uVar12;
    uStack_120 = uVar6;
    uStack_110 = uVar9;
    uStack_108 = uVar11;
    uStack_100 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363e880;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_110,&uStack_150);
        puVar3 = &uStack_130;
        puVar4 = &uStack_150;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_110,&uStack_150);
      func_0x00010161ef18(&uStack_130,&uStack_150);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363e880:
        func_0x00010161ef18(&uStack_110,&uStack_150);
        puVar3 = &uStack_130;
        puVar4 = &uStack_150;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_110,&uStack_150);
      func_0x00010161ef18(&uStack_130,&uStack_150);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0xe];
    uVar9 = param_1[0xd];
    uVar5 = param_1[0xf];
    uVar12 = param_2[0xe];
    uVar10 = param_2[0xd];
    uVar6 = param_2[0xf];
    uStack_170 = uVar10;
    uStack_168 = uVar12;
    uStack_160 = uVar6;
    uStack_150 = uVar9;
    uStack_148 = uVar11;
    uStack_140 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363e978;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_150,&uStack_190);
        puVar3 = &uStack_170;
        puVar4 = &uStack_190;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_150,&uStack_190);
      func_0x00010161ef18(&uStack_170,&uStack_190);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363e978:
        func_0x00010161ef18(&uStack_150,&uStack_190);
        puVar3 = &uStack_170;
        puVar4 = &uStack_190;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_150,&uStack_190);
      func_0x00010161ef18(&uStack_170,&uStack_190);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x11];
    uVar9 = param_1[0x10];
    uVar5 = param_1[0x12];
    uVar12 = param_2[0x11];
    uVar10 = param_2[0x10];
    uVar6 = param_2[0x12];
    uStack_1b0 = uVar10;
    uStack_1a8 = uVar12;
    uStack_1a0 = uVar6;
    uStack_190 = uVar9;
    uStack_188 = uVar11;
    uStack_180 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363ea70;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_190,&uStack_1d0);
        puVar3 = &uStack_1b0;
        puVar4 = &uStack_1d0;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_190,&uStack_1d0);
      func_0x00010161ef18(&uStack_1b0,&uStack_1d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363ea70:
        func_0x00010161ef18(&uStack_190,&uStack_1d0);
        puVar3 = &uStack_1b0;
        puVar4 = &uStack_1d0;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_190,&uStack_1d0);
      func_0x00010161ef18(&uStack_1b0,&uStack_1d0);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x14];
    uVar9 = param_1[0x13];
    uVar5 = param_1[0x15];
    uVar12 = param_2[0x14];
    uVar10 = param_2[0x13];
    uVar6 = param_2[0x15];
    uStack_1f0 = uVar10;
    uStack_1e8 = uVar12;
    uStack_1e0 = uVar6;
    uStack_1d0 = uVar9;
    uStack_1c8 = uVar11;
    uStack_1c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363eb64;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_1d0,&uStack_210);
        puVar3 = &uStack_1f0;
        puVar4 = &uStack_210;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_1d0,&uStack_210);
      func_0x00010161ef18(&uStack_1f0,&uStack_210);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363eb64:
        func_0x00010161ef18(&uStack_1d0,&uStack_210);
        puVar3 = &uStack_1f0;
        puVar4 = &uStack_210;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_1d0,&uStack_210);
      func_0x00010161ef18(&uStack_1f0,&uStack_210);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x17];
    uVar9 = param_1[0x16];
    uVar5 = param_1[0x18];
    uVar12 = param_2[0x17];
    uVar10 = param_2[0x16];
    uVar6 = param_2[0x18];
    uStack_230 = uVar10;
    uStack_228 = uVar12;
    uStack_220 = uVar6;
    uStack_210 = uVar9;
    uStack_208 = uVar11;
    uStack_200 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363ec54;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_210,&uStack_250);
        puVar3 = &uStack_230;
        puVar4 = &uStack_250;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_210,&uStack_250);
      func_0x00010161ef18(&uStack_230,&uStack_250);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363ec54:
        func_0x00010161ef18(&uStack_210,&uStack_250);
        puVar3 = &uStack_230;
        puVar4 = &uStack_250;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_210,&uStack_250);
      func_0x00010161ef18(&uStack_230,&uStack_250);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x1a];
    uVar9 = param_1[0x19];
    uVar5 = param_1[0x1b];
    uVar12 = param_2[0x1a];
    uVar10 = param_2[0x19];
    uVar6 = param_2[0x1b];
    uStack_270 = uVar10;
    uStack_268 = uVar12;
    uStack_260 = uVar6;
    uStack_250 = uVar9;
    uStack_248 = uVar11;
    uStack_240 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363ed44;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_250,&uStack_290);
        puVar3 = &uStack_270;
        puVar4 = &uStack_290;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_250,&uStack_290);
      func_0x00010161ef18(&uStack_270,&uStack_290);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363ed44:
        func_0x00010161ef18(&uStack_250,&uStack_290);
        puVar3 = &uStack_270;
        puVar4 = &uStack_290;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_250,&uStack_290);
      func_0x00010161ef18(&uStack_270,&uStack_290);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x1d];
    uVar9 = param_1[0x1c];
    uVar5 = param_1[0x1e];
    uVar12 = param_2[0x1d];
    uVar10 = param_2[0x1c];
    uVar6 = param_2[0x1e];
    uStack_2b0 = uVar10;
    uStack_2a8 = uVar12;
    uStack_2a0 = uVar6;
    uStack_290 = uVar9;
    uStack_288 = uVar11;
    uStack_280 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363ee34;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_290,&uStack_2d0);
        puVar3 = &uStack_2b0;
        puVar4 = &uStack_2d0;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_290,&uStack_2d0);
      func_0x00010161ef18(&uStack_2b0,&uStack_2d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363ee34:
        func_0x00010161ef18(&uStack_290,&uStack_2d0);
        puVar3 = &uStack_2b0;
        puVar4 = &uStack_2d0;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_290,&uStack_2d0);
      func_0x00010161ef18(&uStack_2b0,&uStack_2d0);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x20];
    uVar9 = param_1[0x1f];
    uVar5 = param_1[0x21];
    uVar12 = param_2[0x20];
    uVar10 = param_2[0x1f];
    uVar6 = param_2[0x21];
    uStack_2f0 = uVar10;
    uStack_2e8 = uVar12;
    uStack_2e0 = uVar6;
    uStack_2d0 = uVar9;
    uStack_2c8 = uVar11;
    uStack_2c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363ef28;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_2d0,&uStack_310);
        puVar3 = &uStack_2f0;
        puVar4 = &uStack_310;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_2d0,&uStack_310);
      func_0x00010161ef18(&uStack_2f0,&uStack_310);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363ef28:
        func_0x00010161ef18(&uStack_2d0,&uStack_310);
        puVar3 = &uStack_2f0;
        puVar4 = &uStack_310;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_2d0,&uStack_310);
      func_0x00010161ef18(&uStack_2f0,&uStack_310);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x23];
    uVar9 = param_1[0x22];
    uVar5 = param_1[0x24];
    uVar12 = param_2[0x23];
    uVar10 = param_2[0x22];
    uVar6 = param_2[0x24];
    uStack_330 = uVar10;
    uStack_328 = uVar12;
    uStack_320 = uVar6;
    uStack_310 = uVar9;
    uStack_308 = uVar11;
    uStack_300 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363f01c;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_310,&uStack_350);
        puVar3 = &uStack_330;
        puVar4 = &uStack_350;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_310,&uStack_350);
      func_0x00010161ef18(&uStack_330,&uStack_350);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363f01c:
        func_0x00010161ef18(&uStack_310,&uStack_350);
        puVar3 = &uStack_330;
        puVar4 = &uStack_350;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_310,&uStack_350);
      func_0x00010161ef18(&uStack_330,&uStack_350);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x26];
    uVar9 = param_1[0x25];
    uVar5 = param_1[0x27];
    uVar12 = param_2[0x26];
    uVar10 = param_2[0x25];
    uVar6 = param_2[0x27];
    uStack_370 = uVar10;
    uStack_368 = uVar12;
    uStack_360 = uVar6;
    uStack_350 = uVar9;
    uStack_348 = uVar11;
    uStack_340 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363f118;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_350,&uStack_390);
        puVar3 = &uStack_370;
        puVar4 = &uStack_390;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_350,&uStack_390);
      func_0x00010161ef18(&uStack_370,&uStack_390);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363f118:
        func_0x00010161ef18(&uStack_350,&uStack_390);
        puVar3 = &uStack_370;
        puVar4 = &uStack_390;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_350,&uStack_390);
      func_0x00010161ef18(&uStack_370,&uStack_390);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[0x29];
    uVar9 = param_1[0x28];
    uVar5 = param_1[0x2a];
    uVar12 = param_2[0x29];
    uVar10 = param_2[0x28];
    uVar6 = param_2[0x2a];
    uStack_3b0 = uVar10;
    uStack_3a8 = uVar12;
    uStack_3a0 = uVar6;
    uStack_390 = uVar9;
    uStack_388 = uVar11;
    uStack_380 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10363f20c;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010161ef18(&uStack_390,auStack_3c8);
        puVar3 = &uStack_3b0;
        puVar4 = auStack_3c8;
        goto LAB_10363f2ec;
      }
      func_0x00010161ef18(&uStack_390,auStack_3c8);
      func_0x00010161ef18(&uStack_3b0,auStack_3c8);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar6);
      func_0x000101553ccc(uVar10,uVar12,uVar6);
      if ((uVar2 & 1) == 0) goto LAB_10363f30c;
    }
    else {
      if (uVar6 >> 0x3c < 0xf) {
LAB_10363f20c:
        func_0x00010161ef18(&uStack_390,auStack_3c8);
        puVar3 = &uStack_3b0;
        puVar4 = auStack_3c8;
        uVar2 = uVar5;
        uVar7 = uVar11;
        uVar8 = uVar9;
        uVar5 = uVar6;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_10363f220;
      }
      func_0x00010161ef18(&uStack_390,auStack_3c8);
      func_0x00010161ef18(&uStack_3b0,auStack_3c8);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar5 = *param_1;
    FUN_10363d50c(uVar5,(char)param_1[1],*param_2,*(undefined1 *)(param_2 + 1));
    if ((uVar5 & 1) != 0) {
      uVar5 = param_1[2];
      func_0x000100e25fcc(uVar5,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar5;
      goto LAB_10363f314;
    }
  }
  uVar1 = 0;
LAB_10363f314:
  return uVar1 & 1;
}



/* Entry: 10363f338; end: 10363f377;  */

void FUN_10363f338(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf09d0;
  func_0x000107c61520(&UNK_10dbf09d0,&UNK_110673f68);
  puRam0000000112f81358 = puVar1;
  return;
}



/* Entry: 10363f378; end: 10363f38b;  */

void FUN_10363f378(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363f38c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10363f3cc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10363f38c; end: 10363f40b;  */

void FUN_10363f38c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf08f8;
  func_0x000107c61520(&UNK_10dbf08f8,&UNK_110674038);
  puRam0000000112f81368 = puVar1;
  return;
}



/* Entry: 10363f40c; end: 10363f40f;  */

void FUN_10363f40c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f81378 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f81380;
  func_0x00010002969c(0x112f81380,&UNK_10dbf0880);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f81378 = puVar2;
  return;
}



/* Entry: 10363f410; end: 10363f45f;  */

void FUN_10363f410(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f81378 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f81380;
  func_0x00010002969c(0x112f81380,&UNK_10dbf0880);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f81378 = puVar2;
  return;
}



/* Entry: 10363f460; end: 10363f463;  */

void FUN_10363f460(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0938;
  func_0x000107c61520(&UNK_10dbf0938,&UNK_110674038);
  puRam0000000112f81388 = puVar1;
  return;
}



/* Entry: 10363f464; end: 10363f4a3;  */

void FUN_10363f464(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0938;
  func_0x000107c61520(&UNK_10dbf0938,&UNK_110674038);
  puRam0000000112f81388 = puVar1;
  return;
}



/* Entry: 10363f4a4; end: 10363f4c7;  */

void FUN_10363f4a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363f4c8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10363f4c8; end: 10363f507;  */

void FUN_10363f4c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf09a8;
  func_0x000107c61520(&UNK_10dbf09a8,&UNK_110673f68);
  puRam0000000112f81390 = puVar1;
  return;
}



/* Entry: 10363f508; end: 10363f51b;  */

void FUN_10363f508(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363f338();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e1178)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10363f51c; end: 10363f54b;  */

void FUN_10363f51c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10363f54c; end: 10363f54f;  */

void FUN_10363f54c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0a10;
  func_0x000107c61520(&UNK_10dbf0a10,&UNK_110673f68);
  puRam0000000112f81398 = puVar1;
  return;
}



/* Entry: 10363f550; end: 10363f58f;  */

void FUN_10363f550(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0a10;
  func_0x000107c61520(&UNK_10dbf0a10,&UNK_110673f68);
  puRam0000000112f81398 = puVar1;
  return;
}



/* Entry: 10363f590; end: 10363f723;  */

long FUN_10363f590(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10363f724; end: 103640307;  */

undefined8 * FUN_10363f724(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  uVar3 = param_2[6];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    uVar2 = param_2[5];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
  }
  else {
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[6] = param_2[6];
  }
  uVar3 = param_2[9];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    uVar2 = param_2[8];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
  }
  else {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    param_1[9] = param_2[9];
  }
  uVar3 = param_2[0xc];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = param_2[0xb];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
  }
  else {
    uVar2 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xc] = param_2[0xc];
  }
  uVar3 = param_2[0xf];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    uVar2 = param_2[0xe];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
  }
  else {
    uVar2 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar2;
    param_1[0xf] = param_2[0xf];
  }
  uVar3 = param_2[0x12];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar2 = param_2[0x11];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar3;
  }
  else {
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0x12] = param_2[0x12];
  }
  uVar3 = param_2[0x15];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    uVar2 = param_2[0x14];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar3;
  }
  else {
    uVar2 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar2;
    param_1[0x15] = param_2[0x15];
  }
  uVar3 = param_2[0x18];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar2 = param_2[0x17];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x17] = uVar2;
    param_1[0x18] = uVar3;
  }
  else {
    uVar2 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar2;
    param_1[0x18] = param_2[0x18];
  }
  uVar3 = param_2[0x1b];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    uVar2 = param_2[0x1a];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x1a] = uVar2;
    param_1[0x1b] = uVar3;
  }
  else {
    uVar2 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar2;
    param_1[0x1b] = param_2[0x1b];
  }
  uVar3 = param_2[0x1e];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    uVar2 = param_2[0x1d];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x1d] = uVar2;
    param_1[0x1e] = uVar3;
  }
  else {
    uVar2 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    param_1[0x1e] = param_2[0x1e];
  }
  uVar3 = param_2[0x21];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
    uVar2 = param_2[0x20];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x20] = uVar2;
    param_1[0x21] = uVar3;
  }
  else {
    uVar2 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar2;
    param_1[0x21] = param_2[0x21];
  }
  uVar3 = param_2[0x24];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
    uVar2 = param_2[0x23];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x23] = uVar2;
    param_1[0x24] = uVar3;
  }
  else {
    uVar2 = param_2[0x22];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar2;
    param_1[0x24] = param_2[0x24];
  }
  uVar3 = param_2[0x27];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
    uVar2 = param_2[0x26];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x26] = uVar2;
    param_1[0x27] = uVar3;
  }
  else {
    uVar2 = param_2[0x25];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar2;
    param_1[0x27] = param_2[0x27];
  }
  uVar3 = param_2[0x2a];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    uVar2 = param_2[0x29];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x29] = uVar2;
    param_1[0x2a] = uVar3;
  }
  else {
    uVar2 = param_2[0x28];
    param_1[0x29] = param_2[0x29];
    param_1[0x28] = uVar2;
    param_1[0x2a] = param_2[0x2a];
  }
  return param_1;
}



/* Entry: 103640308; end: 10364030f;  */

void FUN_103640308(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x158);
  return;
}



/* Entry: 103640310; end: 1036407ab;  */

undefined8 * FUN_103640310(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 4);
      goto LAB_103640374;
    }
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    uVar1 = param_1[5];
    param_1[5] = param_2[5];
    param_1[6] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103640374:
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[6] = param_2[6];
  }
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    uVar3 = param_2[9];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 7);
      goto LAB_1036403c8;
    }
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    uVar1 = param_1[8];
    param_1[8] = param_2[8];
    param_1[9] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1036403c8:
    uVar1 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar1;
    param_1[9] = param_2[9];
  }
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    uVar3 = param_2[0xc];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 10);
      goto LAB_10364041c;
    }
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar1 = param_1[0xb];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10364041c:
    uVar1 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar1;
    param_1[0xc] = param_2[0xc];
  }
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    uVar3 = param_2[0xf];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0xd);
      goto LAB_103640470;
    }
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    uVar1 = param_1[0xe];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103640470:
    uVar1 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar1;
    param_1[0xf] = param_2[0xf];
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar3 = param_2[0x12];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x10);
      goto LAB_1036404c4;
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar1 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1036404c4:
    uVar1 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar1;
    param_1[0x12] = param_2[0x12];
  }
  if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
    uVar3 = param_2[0x15];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x13);
      goto LAB_103640518;
    }
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    uVar1 = param_1[0x14];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103640518:
    uVar1 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar1;
    param_1[0x15] = param_2[0x15];
  }
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    uVar3 = param_2[0x18];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x16);
      goto LAB_10364056c;
    }
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar1 = param_1[0x17];
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_10364056c:
    uVar1 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar1;
    param_1[0x18] = param_2[0x18];
  }
  if ((ulong)param_1[0x1b] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1b];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x19);
      goto LAB_1036405c0;
    }
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    uVar1 = param_1[0x1a];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1036405c0:
    uVar1 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar1;
    param_1[0x1b] = param_2[0x1b];
  }
  if ((ulong)param_1[0x1e] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1e];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x1c);
      goto LAB_103640614;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    uVar1 = param_1[0x1d];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103640614:
    uVar1 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar1;
    param_1[0x1e] = param_2[0x1e];
  }
  if ((ulong)param_1[0x21] >> 0x3c < 0xf) {
    uVar3 = param_2[0x21];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x1f);
      goto LAB_103640668;
    }
    *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
    uVar1 = param_1[0x20];
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103640668:
    uVar1 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar1;
    param_1[0x21] = param_2[0x21];
  }
  if ((ulong)param_1[0x24] >> 0x3c < 0xf) {
    uVar3 = param_2[0x24];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x22);
      goto LAB_1036406bc;
    }
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
    uVar1 = param_1[0x23];
    param_1[0x23] = param_2[0x23];
    param_1[0x24] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1036406bc:
    uVar1 = param_2[0x22];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar1;
    param_1[0x24] = param_2[0x24];
  }
  if ((ulong)param_1[0x27] >> 0x3c < 0xf) {
    uVar3 = param_2[0x27];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
      uVar1 = param_1[0x26];
      param_1[0x26] = param_2[0x26];
      param_1[0x27] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_103640744;
    }
    func_0x000101599dcc(param_1 + 0x25);
  }
  uVar1 = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x25] = uVar1;
  param_1[0x27] = param_2[0x27];
LAB_103640744:
  if ((ulong)param_1[0x2a] >> 0x3c < 0xf) {
    uVar3 = param_2[0x2a];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      uVar1 = param_1[0x29];
      param_1[0x29] = param_2[0x29];
      param_1[0x2a] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x000101599dcc(param_1 + 0x28);
  }
  uVar1 = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x28] = uVar1;
  param_1[0x2a] = param_2[0x2a];
  return param_1;
}



/* Entry: 1036407ac; end: 103640957;  */

int FUN_1036407ac(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x56] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103640958; end: 1036409df;  */

void FUN_103640958(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f813a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf097c;
  func_0x000107c61520(&DAT_10dbf097c,&UNK_110673f68);
  puRam0000000112f813a8 = puVar1;
  return;
}



/* Entry: 1036409e0; end: 103640aaf;  */

void FUN_1036409e0(undefined8 param_1,long param_2,long param_3)

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
LAB_103640a54:
        (*pcVar4)(lVar2,&UNK_110790b00,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x28;
        goto LAB_103640a54;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103640ab0; end: 103640b23;  */

void FUN_103640ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103640b24();
  if (unaff_x21 == 0) {
    FUN_103640bac();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103640b24; end: 103640bab;  */

void FUN_103640b24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 103640bac; end: 103640c33;  */

void FUN_103640bac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 103640c34; end: 103640c7b;  */

uint FUN_103640c34(undefined8 *param_1,undefined8 *param_2)

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
    if (0xe < uVar8 >> 0x3c) goto LAB_103641100;
    if ((int)uVar9 == (int)uVar10) {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      func_0x000101626ba0(&uStack_a0,&uStack_c0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x0001015dc5d0(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10364106c;
    }
    else {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      puVar3 = &uStack_a0;
      puVar4 = &uStack_c0;
LAB_103641218:
      func_0x000101626ba0(puVar3,puVar4);
      func_0x0001015dc5d0(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      func_0x000101626ba0(&uStack_a0,&uStack_c0);
LAB_10364106c:
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
        if (0xe < uVar8 >> 0x3c) goto LAB_103641174;
        if ((int)uVar9 != (int)uVar10) {
          func_0x000101626ba0(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          goto LAB_103641218;
        }
        func_0x000101626ba0(&uStack_c0,auStack_f8);
        func_0x000101626ba0(&uStack_e0,auStack_f8);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x0001015dc5d0(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_103641238;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_103641174:
          func_0x000101626ba0(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_103641188;
        }
        func_0x000101626ba0(&uStack_c0,auStack_f8);
        func_0x000101626ba0(&uStack_e0,auStack_f8);
      }
      func_0x0001015dc5d0(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_103641240;
    }
LAB_103641100:
    func_0x000101626ba0(&uStack_80,&uStack_c0);
    puVar3 = &uStack_a0;
    puVar4 = &uStack_c0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_103641188:
    func_0x000101626ba0(puVar3,puVar4);
    func_0x0001015dc5d0(uVar7,uVar6,uVar2);
  }
LAB_103641238:
  func_0x0001015dc5d0(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_103641240:
  return uVar1 & 1;
}



/* Entry: 103640c7c; end: 103640cab;  */

undefined1  [16] FUN_103640c7c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103640cac; end: 103640cdf;  */

void FUN_103640cac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103640ce0; end: 103640cf3;  */

undefined8 FUN_103640ce0(void)

{
  return 0x103640cf0;
}



/* Entry: 103640cf4; end: 103640d07;  */

void FUN_103640cf4(void)

{
  FUN_1036409e0();
  return;
}



/* Entry: 103640d08; end: 103640d3f;  */

void FUN_103640d08(void)

{
  FUN_103640ab0();
  return;
}



/* Entry: 103640d40; end: 103640d43;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103640d40(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103640d44; end: 103640d7b;  */

uint FUN_103640d44(long param_1,long param_2)

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
  FUN_1036417f4();
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



/* Entry: 103640d7c; end: 103640dc3;  */

uint FUN_103640d7c(undefined8 *param_1)

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
  FUN_103640fec(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103640dc4; end: 103640e63;  */

/* WARNING: Possible PIC construction at 0x000103640e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103640e20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103640e14) */
/* WARNING: Removing unreachable block (ram,0x000103640e24) */

void FUN_103640dc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f813b0 != -1) {
    func_0x000107c61568(0x112f813b0,0x103640998);
  }
  uVar5 = uRam000000011380ae28;
  uVar4 = uRam000000011380ae20;
  uVar3 = uRam000000011380ae18;
  uVar2 = uRam000000011380ae10;
  uVar1 = uRam000000011380ae08;
  *param_1 = uRam000000011380ae00;
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



/* Entry: 103640e64; end: 103640e9f;  */

void FUN_103640e64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f813d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f813d0,&UNK_10dbf1038);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103640ea0; end: 103640fa3;  */

void FUN_103640ea0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103640fa4; end: 103640feb;  */

uint FUN_103640fa4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103640fec(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103640fec; end: 103641263;  */

uint FUN_103640fec(undefined8 *param_1,undefined8 *param_2)

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
    if (0xe < uVar8 >> 0x3c) goto LAB_103641100;
    if ((int)uVar9 == (int)uVar10) {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      func_0x000101626ba0(&uStack_a0,&uStack_c0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x0001015dc5d0(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_10364106c;
    }
    else {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      puVar3 = &uStack_a0;
      puVar4 = &uStack_c0;
LAB_103641218:
      func_0x000101626ba0(puVar3,puVar4);
      func_0x0001015dc5d0(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x000101626ba0(&uStack_80,&uStack_c0);
      func_0x000101626ba0(&uStack_a0,&uStack_c0);
LAB_10364106c:
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
        if (0xe < uVar8 >> 0x3c) goto LAB_103641174;
        if ((int)uVar9 != (int)uVar10) {
          func_0x000101626ba0(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          goto LAB_103641218;
        }
        func_0x000101626ba0(&uStack_c0,auStack_f8);
        func_0x000101626ba0(&uStack_e0,auStack_f8);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x0001015dc5d0(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_103641238;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_103641174:
          func_0x000101626ba0(&uStack_c0,auStack_f8);
          puVar3 = &uStack_e0;
          puVar4 = auStack_f8;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_103641188;
        }
        func_0x000101626ba0(&uStack_c0,auStack_f8);
        func_0x000101626ba0(&uStack_e0,auStack_f8);
      }
      func_0x0001015dc5d0(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_103641240;
    }
LAB_103641100:
    func_0x000101626ba0(&uStack_80,&uStack_c0);
    puVar3 = &uStack_a0;
    puVar4 = &uStack_c0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_103641188:
    func_0x000101626ba0(puVar3,puVar4);
    func_0x0001015dc5d0(uVar7,uVar6,uVar2);
  }
LAB_103641238:
  func_0x0001015dc5d0(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_103641240:
  return uVar1 & 1;
}



/* Entry: 103641264; end: 1036412a3;  */

void FUN_103641264(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f813b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0f68;
  func_0x000107c61520(&UNK_10dbf0f68,&UNK_110674220);
  puRam0000000112f813b8 = puVar1;
  return;
}



/* Entry: 1036412a4; end: 1036412c7;  */

void FUN_1036412a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036412c8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1036412c8; end: 103641307;  */

void FUN_1036412c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f813c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0f40;
  func_0x000107c61520(&UNK_10dbf0f40,&UNK_110674220);
  puRam0000000112f813c0 = puVar1;
  return;
}



/* Entry: 103641308; end: 103641333;  */

void FUN_103641308(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103641264();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e0df8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103641334; end: 103641337;  */

void FUN_103641334(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f813c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0fa8;
  func_0x000107c61520(&UNK_10dbf0fa8,&UNK_110674220);
  puRam0000000112f813c8 = puVar1;
  return;
}



/* Entry: 103641338; end: 103641377;  */

void FUN_103641338(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f813c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0fa8;
  func_0x000107c61520(&UNK_10dbf0fa8,&UNK_110674220);
  puRam0000000112f813c8 = puVar1;
  return;
}



/* Entry: 103641378; end: 103641403;  */

long FUN_103641378(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103641404; end: 10364172f;  */

undefined8 * FUN_103641404(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103641730; end: 1036417f3;  */

int FUN_103641730(int *param_1,uint param_2)

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



/* Entry: 1036417f4; end: 103641833;  */

void FUN_1036417f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f813d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf0f14;
  func_0x000107c61520(&DAT_10dbf0f14,&UNK_110674220);
  puRam0000000112f813d8 = puVar1;
  return;
}



/* Entry: 103641834; end: 1036418bb;  */

undefined8 FUN_103641834(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1036418bc; end: 1036418eb;  */

void FUN_1036418bc(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1036418ec; end: 10364192b;  */

void FUN_1036418ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f81438;
  func_0x0001000285a8(0x112f81438,&UNK_10dbf1068);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10364192c; end: 103641953;  */

void FUN_10364192c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 103641954; end: 1036419ff;  */

void FUN_103641954(void)

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



/* Entry: 103641a00; end: 103641a13;  */

bool FUN_103641a00(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103641a14; end: 103641a5b;  */

void FUN_103641a14(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf1330,0x1f,2);
  uRam000000011380ae38 = uStack_38;
  uRam000000011380ae30 = uStack_40;
  uRam000000011380ae48 = uStack_28;
  uRam000000011380ae40 = uStack_30;
  uRam000000011380ae58 = uStack_18;
  uRam000000011380ae50 = uStack_20;
  return;
}



/* Entry: 103641a5c; end: 103641b67;  */

void FUN_103641a5c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x180);
        FUN_103642310();
LAB_103641ae4:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          goto LAB_103641ae4;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x0001035eeb64();
          goto LAB_103641ae4;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103641b68; end: 103641c33;  */

void FUN_103641b68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  FUN_103641c34();
  if (unaff_x21 == 0) {
    plVar1 = unaff_x20;
    FUN_103641cd0();
    if (*unaff_x20 != 0) {
      uStack_48 = (undefined1)unaff_x20[1];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *unaff_x20;
      FUN_103642310();
      (*pcVar2)(&lStack_50,3,&UNK_1106744b0,plVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103641c34; end: 103641ccf;  */

void FUN_103641c34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_b0;
  ulong uStack_a8;
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
  
  uStack_a8 = *(ulong *)(param_1 + 0x28);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x20);
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    uStack_98 = *(undefined8 *)(param_1 + 0x38);
    uStack_a0 = *(undefined8 *)(param_1 + 0x30);
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    uStack_90 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035eeb64();
    (*pcVar1)(&uStack_b0,1,&UNK_110674b48,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103641cd0; end: 103641d57;  */

void FUN_103641cd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x98);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103641d58; end: 103641dbf;  */

uint FUN_103641d58(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_450 [112];
  long lStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
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
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  ulong uStack_2f8;
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
  ulong uStack_288;
  ulong uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
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
  long lStack_70;
  long lStack_68;
  
  lStack_258 = param_1[0xb];
  lStack_260 = param_1[10];
  lStack_f8 = param_1[0xd];
  lStack_100 = param_1[0xc];
  lStack_248 = param_1[0xd];
  lStack_250 = param_1[0xc];
  lStack_e8 = param_1[0xf];
  lStack_f0 = param_1[0xe];
  lStack_238 = param_1[0xf];
  lStack_240 = param_1[0xe];
  lStack_d8 = param_1[0x11];
  lStack_e0 = param_1[0x10];
  lStack_138 = param_1[5];
  lStack_140 = param_1[4];
  lStack_128 = param_1[7];
  lStack_130 = param_1[6];
  lStack_118 = param_1[9];
  lStack_120 = param_1[8];
  lStack_108 = param_1[0xb];
  lStack_110 = param_1[10];
  uStack_288 = param_1[5];
  lStack_290 = param_1[4];
  lStack_278 = param_1[7];
  uStack_280 = param_1[6];
  lStack_268 = param_1[9];
  lStack_270 = param_1[8];
  lStack_1a8 = param_2[5];
  lStack_1b0 = param_2[4];
  lStack_198 = param_2[7];
  lStack_1a0 = param_2[6];
  lStack_2a8 = param_2[0xf];
  lStack_2b0 = param_2[0xe];
  lStack_148 = param_2[0x11];
  lStack_150 = param_2[0x10];
  lStack_2c8 = param_2[0xb];
  lStack_2d0 = param_2[10];
  lStack_168 = param_2[0xd];
  lStack_170 = param_2[0xc];
  lStack_2b8 = param_2[0xd];
  lStack_2c0 = param_2[0xc];
  lStack_158 = param_2[0xf];
  lStack_160 = param_2[0xe];
  lStack_188 = param_2[9];
  lStack_190 = param_2[8];
  lStack_178 = param_2[0xb];
  lStack_180 = param_2[10];
  uStack_2f8 = param_2[5];
  lStack_300 = param_2[4];
  lStack_2e8 = param_2[7];
  lStack_2f0 = param_2[6];
  lStack_2d8 = param_2[9];
  lStack_2e0 = param_2[8];
  lStack_228 = param_1[0x11];
  lStack_230 = param_1[0x10];
  lStack_298 = param_2[0x11];
  lStack_2a0 = param_2[0x10];
  lStack_220 = lStack_300;
  uStack_218 = uStack_2f8;
  lStack_210 = lStack_2f0;
  lStack_208 = lStack_2e8;
  lStack_200 = lStack_2e0;
  lStack_1f8 = lStack_2d8;
  lStack_1f0 = lStack_2d0;
  lStack_1e8 = lStack_2c8;
  lStack_1e0 = lStack_2c0;
  lStack_1d8 = lStack_2b8;
  lStack_1d0 = lStack_2b0;
  lStack_1c8 = lStack_2a8;
  lStack_1c0 = lStack_2a0;
  lStack_1b8 = lStack_298;
  if (uStack_288 >> 0x3c < 0xf) {
    if (uStack_2f8 >> 0x3c < 0xf) {
      lStack_398 = param_2[0xd];
      lStack_3a0 = param_2[0xc];
      lStack_388 = param_2[0xf];
      lStack_390 = param_2[0xe];
      lStack_378 = param_2[0x11];
      lStack_380 = param_2[0x10];
      uStack_3d8 = param_2[5];
      lStack_3e0 = param_2[4];
      lStack_3c8 = param_2[7];
      uStack_3d0 = param_2[6];
      lStack_3b8 = param_2[9];
      lStack_3c0 = param_2[8];
      lStack_3a8 = param_2[0xb];
      lStack_3b0 = param_2[10];
      lStack_88 = param_1[0xd];
      lStack_90 = param_1[0xc];
      lStack_78 = param_1[0xf];
      lStack_80 = param_1[0xe];
      lStack_68 = param_1[0x11];
      lStack_70 = param_1[0x10];
      lStack_c8 = param_1[5];
      lStack_d0 = param_1[4];
      lStack_b8 = param_1[7];
      lStack_c0 = param_1[6];
      lStack_a8 = param_1[9];
      lStack_b0 = param_1[8];
      lStack_98 = param_1[0xb];
      lStack_a0 = param_1[10];
      lStack_370 = lStack_3e0;
      uStack_368 = uStack_3d8;
      lStack_360 = uStack_3d0;
      lStack_358 = lStack_3c8;
      lStack_350 = lStack_3c0;
      lStack_348 = lStack_3b8;
      lStack_340 = lStack_3b0;
      lStack_338 = lStack_3a8;
      lStack_330 = lStack_3a0;
      lStack_328 = lStack_398;
      lStack_320 = lStack_390;
      lStack_318 = lStack_388;
      lStack_310 = lStack_380;
      lStack_308 = lStack_378;
      func_0x000103641874(&lStack_140,auStack_450,0x112f73200,&UNK_10dbe5440);
      func_0x000103641874(&lStack_1b0,auStack_450,0x112f73200,&UNK_10dbe5440);
      plVar2 = &lStack_d0;
      FUN_103646638(plVar2,&lStack_370);
      func_0x000103641834(&lStack_3e0,0x112f73200,&UNK_10dbe5440);
      func_0x000103641834(&lStack_290,0x112f73200,&UNK_10dbe5440);
      if (((ulong)plVar2 & 1) != 0) goto LAB_1036425cc;
      goto LAB_1036427b8;
    }
LAB_103642488:
    lStack_370 = lStack_290;
    uStack_368 = uStack_288;
    lStack_360 = uStack_280;
    lStack_358 = lStack_278;
    lStack_350 = lStack_270;
    lStack_348 = lStack_268;
    lStack_340 = lStack_260;
    lStack_338 = lStack_258;
    lStack_330 = lStack_250;
    lStack_328 = lStack_248;
    lStack_320 = lStack_240;
    lStack_318 = lStack_238;
    lStack_310 = lStack_230;
    lStack_308 = lStack_228;
    func_0x000103641874(&lStack_140,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    func_0x000103641874(&lStack_1b0,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    func_0x000103641834(&lStack_370,0x112f7d130,&UNK_10dbe5a80);
  }
  else {
    if (uStack_2f8 >> 0x3c < 0xf) goto LAB_103642488;
    lStack_328 = param_1[0xd];
    lStack_330 = param_1[0xc];
    lStack_318 = param_1[0xf];
    lStack_320 = param_1[0xe];
    lStack_308 = param_1[0x11];
    lStack_310 = param_1[0x10];
    uStack_368 = param_1[5];
    lStack_370 = param_1[4];
    lStack_358 = param_1[7];
    lStack_360 = param_1[6];
    lStack_348 = param_1[9];
    lStack_350 = param_1[8];
    lStack_338 = param_1[0xb];
    lStack_340 = param_1[10];
    func_0x000103641874(&lStack_140,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    func_0x000103641874(&lStack_1b0,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    func_0x000103641834(&lStack_370,0x112f73200,&UNK_10dbe5440);
LAB_1036425cc:
    uVar8 = param_1[0x13];
    lVar4 = param_1[0x12];
    uVar6 = param_1[0x14];
    uVar9 = param_2[0x13];
    lVar5 = param_2[0x12];
    uVar7 = param_2[0x14];
    lStack_3e0 = lVar5;
    uStack_3d8 = uVar9;
    uStack_3d0 = uVar7;
    lStack_290 = lVar4;
    uStack_288 = uVar8;
    uStack_280 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar7 >> 0x3c) goto LAB_10364268c;
      if (lVar4 == lVar5) {
        func_0x000103641874(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x000103641874(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
        uVar3 = uVar8;
        func_0x000100e25fcc(uVar8,uVar6,uVar9,uVar7);
        func_0x00010159fa64(lVar4,uVar9,uVar7);
        if ((uVar3 & 1) != 0) goto LAB_103642644;
      }
      else {
        func_0x000103641874(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x000103641874(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x00010159fa64(lVar5,uVar9,uVar7);
      }
LAB_1036427b4:
      func_0x00010159fa64(lVar4,uVar8,uVar6);
    }
    else {
      if (uVar7 >> 0x3c < 0xf) {
LAB_10364268c:
        func_0x000103641874(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x000103641874(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x00010159fa64(lVar4,uVar8,uVar6);
        lVar4 = lVar5;
        uVar8 = uVar9;
        uVar6 = uVar7;
        goto LAB_1036427b4;
      }
      func_0x000103641874(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
      func_0x000103641874(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
LAB_103642644:
      func_0x00010159fa64(lVar4,uVar8,uVar6);
      lVar4 = *param_1;
      lVar5 = *param_2;
      if ((char)param_2[1] == '\x01') {
        if (lVar5 == 0) {
          if (lVar4 == 0) goto LAB_1036427f0;
        }
        else if (lVar5 == 1) {
          if (lVar4 == 1) {
LAB_1036427f0:
            lVar4 = param_1[2];
            func_0x000100e25fcc(lVar4,param_1[3],param_2[2],param_2[3]);
            uVar1 = (uint)lVar4;
            goto LAB_1036427bc;
          }
        }
        else if (lVar4 == 2) goto LAB_1036427f0;
      }
      else if (lVar4 == lVar5) goto LAB_1036427f0;
    }
  }
LAB_1036427b8:
  uVar1 = 0;
LAB_1036427bc:
  return uVar1 & 1;
}



/* Entry: 103641dc0; end: 103641def;  */

undefined1  [16] FUN_103641dc0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103641df0; end: 103641e23;  */

void FUN_103641df0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103641e24; end: 103641e37;  */

undefined1  [16] FUN_103641e24(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103641e34;
  return auVar1;
}



/* Entry: 103641e38; end: 103641e4b;  */

void FUN_103641e38(void)

{
  FUN_103641a5c();
  return;
}



/* Entry: 103641e4c; end: 103641ea3;  */

void FUN_103641e4c(void)

{
  FUN_103641b68();
  return;
}



/* Entry: 103641ea4; end: 103641ea7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103641ea4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103641ea8; end: 103641edf;  */

uint FUN_103641ea8(long param_1,long param_2)

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
  FUN_1036435b0();
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



/* Entry: 103641ee0; end: 103641f6f;  */

uint FUN_103641ee0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
  uStack_30 = param_1[0x14];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_f8 = unaff_x20[0x11];
  uStack_100 = unaff_x20[0x10];
  uStack_e8 = unaff_x20[0x13];
  uStack_f0 = unaff_x20[0x12];
  uStack_e0 = unaff_x20[0x14];
  uStack_138 = unaff_x20[9];
  uStack_140 = unaff_x20[8];
  uStack_128 = unaff_x20[0xb];
  uStack_130 = unaff_x20[10];
  uStack_118 = unaff_x20[0xd];
  uStack_120 = unaff_x20[0xc];
  uStack_108 = unaff_x20[0xf];
  uStack_110 = unaff_x20[0xe];
  uStack_178 = unaff_x20[1];
  uStack_180 = *unaff_x20;
  uStack_168 = unaff_x20[3];
  uStack_170 = unaff_x20[2];
  uStack_158 = unaff_x20[5];
  uStack_160 = unaff_x20[4];
  uStack_148 = unaff_x20[7];
  uStack_150 = unaff_x20[6];
  FUN_103642350(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 103641f70; end: 10364200f;  */

/* WARNING: Possible PIC construction at 0x000103641fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103641fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103641fc0) */
/* WARNING: Removing unreachable block (ram,0x000103641fd0) */

void FUN_103641f70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81440 != -1) {
    func_0x000107c61568(0x112f81440,FUN_103641a14);
  }
  uVar5 = uRam000000011380ae58;
  uVar4 = uRam000000011380ae50;
  uVar3 = uRam000000011380ae48;
  uVar2 = uRam000000011380ae40;
  uVar1 = uRam000000011380ae38;
  *param_1 = uRam000000011380ae30;
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



/* Entry: 103642010; end: 10364204b;  */

void FUN_103642010(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f81498;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f81498,&UNK_10dbf12e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10364204c; end: 103642197;  */

void FUN_10364204c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_128 [72];
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
  
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_48 = unaff_x20[0x13];
  uStack_50 = unaff_x20[0x12];
  uStack_40 = unaff_x20[0x14];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  func_0x000107c6068c(auStack_128,0);
  func_0x000107c5fa50(auStack_128,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103642198; end: 103642227;  */

uint FUN_103642198(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_e0 = param_1[0x14];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_30 = param_2[0x14];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  FUN_103642350(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 103642228; end: 10364226f;  */

void FUN_103642228(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf12f0,0x3e,2);
  uRam000000011380ae68 = uStack_38;
  uRam000000011380ae60 = uStack_40;
  uRam000000011380ae78 = uStack_28;
  uRam000000011380ae70 = uStack_30;
  uRam000000011380ae88 = uStack_18;
  uRam000000011380ae80 = uStack_20;
  return;
}



/* Entry: 103642270; end: 10364230f;  */

/* WARNING: Possible PIC construction at 0x0001036422bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036422cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036422c0) */
/* WARNING: Removing unreachable block (ram,0x0001036422d0) */

void FUN_103642270(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81458 != -1) {
    func_0x000107c61568(0x112f81458,FUN_103642228);
  }
  uVar5 = uRam000000011380ae88;
  uVar4 = uRam000000011380ae80;
  uVar3 = uRam000000011380ae78;
  uVar2 = uRam000000011380ae70;
  uVar1 = uRam000000011380ae68;
  *param_1 = uRam000000011380ae60;
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



/* Entry: 103642310; end: 10364234f;  */

void FUN_103642310(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf1070;
  func_0x000107c61520(&DAT_10dbf1070,&UNK_1106744b0);
  puRam0000000112f81448 = puVar1;
  return;
}



/* Entry: 103642350; end: 1036427ff;  */

uint FUN_103642350(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_450 [112];
  long lStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
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
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  ulong uStack_2f8;
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
  ulong uStack_288;
  ulong uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
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
  long lStack_70;
  long lStack_68;
  
  lStack_258 = param_1[0xb];
  lStack_260 = param_1[10];
  lStack_f8 = param_1[0xd];
  lStack_100 = param_1[0xc];
  lStack_248 = param_1[0xd];
  lStack_250 = param_1[0xc];
  lStack_e8 = param_1[0xf];
  lStack_f0 = param_1[0xe];
  lStack_238 = param_1[0xf];
  lStack_240 = param_1[0xe];
  lStack_d8 = param_1[0x11];
  lStack_e0 = param_1[0x10];
  lStack_138 = param_1[5];
  lStack_140 = param_1[4];
  lStack_128 = param_1[7];
  lStack_130 = param_1[6];
  lStack_118 = param_1[9];
  lStack_120 = param_1[8];
  lStack_108 = param_1[0xb];
  lStack_110 = param_1[10];
  uStack_288 = param_1[5];
  lStack_290 = param_1[4];
  lStack_278 = param_1[7];
  uStack_280 = param_1[6];
  lStack_268 = param_1[9];
  lStack_270 = param_1[8];
  lStack_1a8 = param_2[5];
  lStack_1b0 = param_2[4];
  lStack_198 = param_2[7];
  lStack_1a0 = param_2[6];
  lStack_2a8 = param_2[0xf];
  lStack_2b0 = param_2[0xe];
  lStack_148 = param_2[0x11];
  lStack_150 = param_2[0x10];
  lStack_2c8 = param_2[0xb];
  lStack_2d0 = param_2[10];
  lStack_168 = param_2[0xd];
  lStack_170 = param_2[0xc];
  lStack_2b8 = param_2[0xd];
  lStack_2c0 = param_2[0xc];
  lStack_158 = param_2[0xf];
  lStack_160 = param_2[0xe];
  lStack_188 = param_2[9];
  lStack_190 = param_2[8];
  lStack_178 = param_2[0xb];
  lStack_180 = param_2[10];
  uStack_2f8 = param_2[5];
  lStack_300 = param_2[4];
  lStack_2e8 = param_2[7];
  lStack_2f0 = param_2[6];
  lStack_2d8 = param_2[9];
  lStack_2e0 = param_2[8];
  lStack_228 = param_1[0x11];
  lStack_230 = param_1[0x10];
  lStack_298 = param_2[0x11];
  lStack_2a0 = param_2[0x10];
  lStack_220 = lStack_300;
  uStack_218 = uStack_2f8;
  lStack_210 = lStack_2f0;
  lStack_208 = lStack_2e8;
  lStack_200 = lStack_2e0;
  lStack_1f8 = lStack_2d8;
  lStack_1f0 = lStack_2d0;
  lStack_1e8 = lStack_2c8;
  lStack_1e0 = lStack_2c0;
  lStack_1d8 = lStack_2b8;
  lStack_1d0 = lStack_2b0;
  lStack_1c8 = lStack_2a8;
  lStack_1c0 = lStack_2a0;
  lStack_1b8 = lStack_298;
  if (uStack_288 >> 0x3c < 0xf) {
    if (uStack_2f8 >> 0x3c < 0xf) {
      lStack_398 = param_2[0xd];
      lStack_3a0 = param_2[0xc];
      lStack_388 = param_2[0xf];
      lStack_390 = param_2[0xe];
      lStack_378 = param_2[0x11];
      lStack_380 = param_2[0x10];
      uStack_3d8 = param_2[5];
      lStack_3e0 = param_2[4];
      lStack_3c8 = param_2[7];
      uStack_3d0 = param_2[6];
      lStack_3b8 = param_2[9];
      lStack_3c0 = param_2[8];
      lStack_3a8 = param_2[0xb];
      lStack_3b0 = param_2[10];
      lStack_88 = param_1[0xd];
      lStack_90 = param_1[0xc];
      lStack_78 = param_1[0xf];
      lStack_80 = param_1[0xe];
      lStack_68 = param_1[0x11];
      lStack_70 = param_1[0x10];
      lStack_c8 = param_1[5];
      lStack_d0 = param_1[4];
      lStack_b8 = param_1[7];
      lStack_c0 = param_1[6];
      lStack_a8 = param_1[9];
      lStack_b0 = param_1[8];
      lStack_98 = param_1[0xb];
      lStack_a0 = param_1[10];
      lStack_370 = lStack_3e0;
      uStack_368 = uStack_3d8;
      lStack_360 = uStack_3d0;
      lStack_358 = lStack_3c8;
      lStack_350 = lStack_3c0;
      lStack_348 = lStack_3b8;
      lStack_340 = lStack_3b0;
      lStack_338 = lStack_3a8;
      lStack_330 = lStack_3a0;
      lStack_328 = lStack_398;
      lStack_320 = lStack_390;
      lStack_318 = lStack_388;
      lStack_310 = lStack_380;
      lStack_308 = lStack_378;
      func_0x000103641874(&lStack_140,auStack_450,0x112f73200,&UNK_10dbe5440);
      func_0x000103641874(&lStack_1b0,auStack_450,0x112f73200,&UNK_10dbe5440);
      plVar2 = &lStack_d0;
      FUN_103646638(plVar2,&lStack_370);
      func_0x000103641834(&lStack_3e0,0x112f73200,&UNK_10dbe5440);
      func_0x000103641834(&lStack_290,0x112f73200,&UNK_10dbe5440);
      if (((ulong)plVar2 & 1) != 0) goto LAB_1036425cc;
      goto LAB_1036427b8;
    }
LAB_103642488:
    lStack_370 = lStack_290;
    uStack_368 = uStack_288;
    lStack_360 = uStack_280;
    lStack_358 = lStack_278;
    lStack_350 = lStack_270;
    lStack_348 = lStack_268;
    lStack_340 = lStack_260;
    lStack_338 = lStack_258;
    lStack_330 = lStack_250;
    lStack_328 = lStack_248;
    lStack_320 = lStack_240;
    lStack_318 = lStack_238;
    lStack_310 = lStack_230;
    lStack_308 = lStack_228;
    func_0x000103641874(&lStack_140,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    func_0x000103641874(&lStack_1b0,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    func_0x000103641834(&lStack_370,0x112f7d130,&UNK_10dbe5a80);
  }
  else {
    if (uStack_2f8 >> 0x3c < 0xf) goto LAB_103642488;
    lStack_328 = param_1[0xd];
    lStack_330 = param_1[0xc];
    lStack_318 = param_1[0xf];
    lStack_320 = param_1[0xe];
    lStack_308 = param_1[0x11];
    lStack_310 = param_1[0x10];
    uStack_368 = param_1[5];
    lStack_370 = param_1[4];
    lStack_358 = param_1[7];
    lStack_360 = param_1[6];
    lStack_348 = param_1[9];
    lStack_350 = param_1[8];
    lStack_338 = param_1[0xb];
    lStack_340 = param_1[10];
    func_0x000103641874(&lStack_140,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    func_0x000103641874(&lStack_1b0,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    func_0x000103641834(&lStack_370,0x112f73200,&UNK_10dbe5440);
LAB_1036425cc:
    uVar8 = param_1[0x13];
    lVar4 = param_1[0x12];
    uVar6 = param_1[0x14];
    uVar9 = param_2[0x13];
    lVar5 = param_2[0x12];
    uVar7 = param_2[0x14];
    lStack_3e0 = lVar5;
    uStack_3d8 = uVar9;
    uStack_3d0 = uVar7;
    lStack_290 = lVar4;
    uStack_288 = uVar8;
    uStack_280 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar7 >> 0x3c) goto LAB_10364268c;
      if (lVar4 == lVar5) {
        func_0x000103641874(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x000103641874(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
        uVar3 = uVar8;
        func_0x000100e25fcc(uVar8,uVar6,uVar9,uVar7);
        func_0x00010159fa64(lVar4,uVar9,uVar7);
        if ((uVar3 & 1) != 0) goto LAB_103642644;
      }
      else {
        func_0x000103641874(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x000103641874(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x00010159fa64(lVar5,uVar9,uVar7);
      }
LAB_1036427b4:
      func_0x00010159fa64(lVar4,uVar8,uVar6);
    }
    else {
      if (uVar7 >> 0x3c < 0xf) {
LAB_10364268c:
        func_0x000103641874(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x000103641874(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x00010159fa64(lVar4,uVar8,uVar6);
        lVar4 = lVar5;
        uVar8 = uVar9;
        uVar6 = uVar7;
        goto LAB_1036427b4;
      }
      func_0x000103641874(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
      func_0x000103641874(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
LAB_103642644:
      func_0x00010159fa64(lVar4,uVar8,uVar6);
      lVar4 = *param_1;
      lVar5 = *param_2;
      if ((char)param_2[1] == '\x01') {
        if (lVar5 == 0) {
          if (lVar4 == 0) goto LAB_1036427f0;
        }
        else if (lVar5 == 1) {
          if (lVar4 == 1) {
LAB_1036427f0:
            lVar4 = param_1[2];
            func_0x000100e25fcc(lVar4,param_1[3],param_2[2],param_2[3]);
            uVar1 = (uint)lVar4;
            goto LAB_1036427bc;
          }
        }
        else if (lVar4 == 2) goto LAB_1036427f0;
      }
      else if (lVar4 == lVar5) goto LAB_1036427f0;
    }
  }
LAB_1036427b8:
  uVar1 = 0;
LAB_1036427bc:
  return uVar1 & 1;
}



/* Entry: 103642800; end: 10364283f;  */

void FUN_103642800(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf11e0;
  func_0x000107c61520(&UNK_10dbf11e0,&UNK_110674410);
  puRam0000000112f81450 = puVar1;
  return;
}



/* Entry: 103642840; end: 103642853;  */

void FUN_103642840(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103642854();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103642894)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103642854; end: 1036428d3;  */

void FUN_103642854(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1108;
  func_0x000107c61520(&UNK_10dbf1108,&UNK_1106744b0);
  puRam0000000112f81460 = puVar1;
  return;
}



/* Entry: 1036428d4; end: 1036428d7;  */

void FUN_1036428d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f81470 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f81478;
  func_0x00010002969c(0x112f81478,&UNK_10dbf1090);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f81470 = puVar2;
  return;
}



/* Entry: 1036428d8; end: 103642927;  */

void FUN_1036428d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f81470 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f81478;
  func_0x00010002969c(0x112f81478,&UNK_10dbf1090);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f81470 = puVar2;
  return;
}



/* Entry: 103642928; end: 10364292b;  */

void FUN_103642928(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1148;
  func_0x000107c61520(&UNK_10dbf1148,&UNK_1106744b0);
  puRam0000000112f81480 = puVar1;
  return;
}



/* Entry: 10364292c; end: 10364296b;  */

void FUN_10364292c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1148;
  func_0x000107c61520(&UNK_10dbf1148,&UNK_1106744b0);
  puRam0000000112f81480 = puVar1;
  return;
}



/* Entry: 10364296c; end: 10364298f;  */

void FUN_10364296c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103642990();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103642990; end: 1036429cf;  */

void FUN_103642990(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf11b8;
  func_0x000107c61520(&UNK_10dbf11b8,&UNK_110674410);
  puRam0000000112f81488 = puVar1;
  return;
}



/* Entry: 1036429d0; end: 1036429e3;  */

void FUN_1036429d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103642800();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e0bf8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036429e4; end: 103642a13;  */

void FUN_1036429e4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103642a14; end: 103642a17;  */

void FUN_103642a14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1220;
  func_0x000107c61520(&UNK_10dbf1220,&UNK_110674410);
  puRam0000000112f81490 = puVar1;
  return;
}



/* Entry: 103642a18; end: 103642a57;  */

void FUN_103642a18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1220;
  func_0x000107c61520(&UNK_10dbf1220,&UNK_110674410);
  puRam0000000112f81490 = puVar1;
  return;
}



/* Entry: 103642a58; end: 103642b43;  */

long FUN_103642a58(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103642b44; end: 1036431ef;  */

undefined8 * FUN_103642b44(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  func_0x00010006c00c(uVar2,uVar3);
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[4];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[4] = uVar2;
    param_1[5] = uVar1;
    uVar1 = param_2[8];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      uVar2 = param_2[7];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[7] = uVar2;
      param_1[8] = uVar1;
    }
    else {
      uVar2 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar2;
      param_1[8] = param_2[8];
    }
    uVar1 = param_2[0xb];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      uVar2 = param_2[10];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[10] = uVar2;
      param_1[0xb] = uVar1;
    }
    else {
      uVar2 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar2;
      param_1[0xb] = param_2[0xb];
    }
    uVar1 = param_2[0xe];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      uVar2 = param_2[0xd];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xd] = uVar2;
      param_1[0xe] = uVar1;
    }
    else {
      uVar2 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar2;
      param_1[0xe] = param_2[0xe];
    }
    uVar1 = param_2[0x11];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
      uVar2 = param_2[0x10];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x10] = uVar2;
      param_1[0x11] = uVar1;
    }
    else {
      uVar2 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar2;
      param_1[0x11] = param_2[0x11];
    }
  }
  else {
    uVar2 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    uVar4 = param_2[8];
    uVar3 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar3;
    param_1[10] = uVar2;
  }
  uVar1 = param_2[0x14];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x13] = uVar2;
    param_1[0x14] = uVar1;
  }
  else {
    uVar2 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x14] = param_2[0x14];
  }
  return param_1;
}



/* Entry: 1036431f0; end: 103643433;  */

undefined8 * FUN_1036431f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[4];
      param_1[4] = param_2[4];
      param_1[5] = uVar3;
      func_0x00010006c090(uVar1);
      if ((ulong)param_1[8] >> 0x3c < 0xf) {
        uVar3 = param_2[8];
        if (0xe < uVar3 >> 0x3c) {
          func_0x000101599dcc(param_1 + 6);
          goto LAB_1036432e4;
        }
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
        uVar1 = param_1[7];
        param_1[7] = param_2[7];
        param_1[8] = uVar3;
        func_0x00010006c090(uVar1);
      }
      else {
LAB_1036432e4:
        uVar1 = param_2[6];
        param_1[7] = param_2[7];
        param_1[6] = uVar1;
        param_1[8] = param_2[8];
      }
      if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
        uVar3 = param_2[0xb];
        if (0xe < uVar3 >> 0x3c) {
          func_0x000101599dcc(param_1 + 9);
          goto LAB_10364335c;
        }
        *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
        uVar1 = param_1[10];
        param_1[10] = param_2[10];
        param_1[0xb] = uVar3;
        func_0x00010006c090(uVar1);
      }
      else {
LAB_10364335c:
        uVar1 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = uVar1;
        param_1[0xb] = param_2[0xb];
      }
      if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
        uVar3 = param_2[0xe];
        if (0xe < uVar3 >> 0x3c) {
          func_0x000101599dcc(param_1 + 0xc);
          goto LAB_1036433b0;
        }
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        uVar1 = param_1[0xd];
        param_1[0xd] = param_2[0xd];
        param_1[0xe] = uVar3;
        func_0x00010006c090(uVar1);
      }
      else {
LAB_1036433b0:
        uVar1 = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        param_1[0xc] = uVar1;
        param_1[0xe] = param_2[0xe];
      }
      if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
        uVar3 = param_2[0x11];
        if (uVar3 >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
          uVar1 = param_1[0x10];
          param_1[0x10] = param_2[0x10];
          param_1[0x11] = uVar3;
          func_0x00010006c090(uVar1);
          goto LAB_103643270;
        }
        func_0x000101599dcc(param_1 + 0xf);
      }
      uVar1 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar1;
      param_1[0x11] = param_2[0x11];
      goto LAB_103643270;
    }
    FUN_1035ecb74(param_1 + 4);
  }
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar2;
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar2;
  uVar4 = param_2[8];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
LAB_103643270:
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    uVar3 = param_2[0x14];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[0x13];
      uVar2 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar2;
      param_1[0x14] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x00010159d670(param_1 + 0x12);
  }
  uVar1 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar1;
  param_1[0x14] = param_2[0x14];
  return param_1;
}



/* Entry: 103643434; end: 1036435af;  */

int FUN_103643434(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}


