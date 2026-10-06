/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035932b0; end: 10359334f;  */

uint FUN_1035932b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_1035933b4(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 103593350; end: 10359336b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103593350(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 10359336c; end: 1035933b3;  */

undefined8 FUN_10359336c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035933b4; end: 1035938ab;  */

uint FUN_1035933b4(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[0x11];
  uVar5 = param_1[0x10];
  uVar3 = param_1[0x12];
  uVar8 = param_2[0x11];
  uVar6 = param_2[0x10];
  uVar4 = param_2[0x12];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_103593460;
    if ((float)uVar5 == (float)uVar6) {
      FUN_10359336c(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_10359336c(&uStack_a0,&uStack_c0,0x112db6358,&UNK_10d961e20);
      uVar9 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
      if ((uVar9 & 1) != 0) goto LAB_10359352c;
    }
    else {
      FUN_10359336c(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_10359336c(&uStack_a0,&uStack_c0,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar6,uVar8,uVar4);
    }
LAB_103593790:
    func_0x000101553ccc(uVar5,uVar7,uVar3);
  }
  else {
    if (uVar4 >> 0x3c < 0xf) {
LAB_103593460:
      FUN_10359336c(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
      FUN_10359336c(&uStack_a0,&uStack_c0,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar5,uVar7,uVar3);
      uVar5 = uVar6;
      uVar7 = uVar8;
      uVar3 = uVar4;
      goto LAB_103593790;
    }
    FUN_10359336c(&uStack_80,&uStack_c0,0x112db6358,&UNK_10d961e20);
    FUN_10359336c(&uStack_a0,&uStack_c0,0x112db6358,&UNK_10d961e20);
LAB_10359352c:
    func_0x000101553ccc(uVar5,uVar7,uVar3);
    uVar5 = *param_1;
    if (((uVar5 == *param_2) && (param_1[1] == param_2[1])) ||
       (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
      uVar7 = param_1[0x14];
      uVar5 = param_1[0x13];
      uVar4 = param_1[0x16];
      uVar3 = param_1[0x15];
      uVar8 = param_2[0x14];
      uVar6 = param_2[0x13];
      uVar10 = param_2[0x16];
      uVar9 = param_2[0x15];
      uStack_e0 = uVar6;
      uStack_d8 = uVar8;
      uStack_d0 = uVar9;
      uStack_c8 = uVar10;
      uStack_c0 = uVar5;
      uStack_b8 = uVar7;
      uStack_b0 = uVar3;
      uStack_a8 = uVar4;
      if (uVar4 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035936dc;
        if ((((int)uVar5 == (int)uVar6) && ((uVar6 ^ uVar5) >> 0x20 == 0)) &&
           ((int)uVar7 == (int)uVar8)) {
          FUN_10359336c(&uStack_c0,auStack_100,0x112db7158,&UNK_10d964998);
          FUN_10359336c(&uStack_e0,auStack_100,0x112db7158,&UNK_10d964998);
          uVar2 = uVar3;
          func_0x000100e25fcc(uVar3,uVar4,uVar9,uVar10);
          func_0x000101553d58(uVar6,uVar8,uVar9,uVar10);
          if ((uVar2 & 1) != 0) goto LAB_1035935d8;
        }
        else {
          FUN_10359336c(&uStack_c0,auStack_100,0x112db7158,&UNK_10d964998);
          FUN_10359336c(&uStack_e0,auStack_100,0x112db7158,&UNK_10d964998);
          func_0x000101553d58(uVar6,uVar8,uVar9,uVar10);
        }
      }
      else {
        if (0xe < uVar10 >> 0x3c) {
          FUN_10359336c(&uStack_c0,auStack_100,0x112db7158,&UNK_10d964998);
          FUN_10359336c(&uStack_e0,auStack_100,0x112db7158,&UNK_10d964998);
LAB_1035935d8:
          func_0x000101553d58(uVar5,uVar7,uVar3,uVar4);
          uVar5 = param_1[2];
          if (((uVar5 == param_2[2]) && (param_1[3] == param_2[3])) ||
             (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
            uVar5 = param_1[4];
            if (((uVar5 == param_2[4]) && (param_1[5] == param_2[5])) ||
               (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
              uVar5 = param_1[6];
              if (((uVar5 == param_2[6]) && (param_1[7] == param_2[7])) ||
                 (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
                uVar5 = param_1[8];
                if (((uVar5 == param_2[8]) && (param_1[9] == param_2[9])) ||
                   (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
                  uVar5 = param_1[10];
                  if ((((uVar5 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
                      (func_0x000107c605b8(), (uVar5 & 1) != 0)) &&
                     ((param_1[0xc] == param_2[0xc] && (param_1[0xd] == param_2[0xd])))) {
                    uVar5 = param_1[0xe];
                    func_0x000100e25fcc(uVar5,param_1[0xf],param_2[0xe],param_2[0xf]);
                    uVar1 = (uint)uVar5;
                    goto LAB_103593888;
                  }
                }
              }
            }
          }
          goto LAB_103593884;
        }
LAB_1035936dc:
        FUN_10359336c(&uStack_c0,auStack_100,0x112db7158,&UNK_10d964998);
        FUN_10359336c(&uStack_e0,auStack_100,0x112db7158,&UNK_10d964998);
        func_0x000101553d58(uVar5,uVar7,uVar3,uVar4);
        uVar5 = uVar6;
        uVar7 = uVar8;
        uVar3 = uVar9;
        uVar4 = uVar10;
      }
      func_0x000101553d58(uVar5,uVar7,uVar3,uVar4);
    }
  }
LAB_103593884:
  uVar1 = 0;
LAB_103593888:
  return uVar1 & 1;
}



/* Entry: 1035938ac; end: 1035938eb;  */

void FUN_1035938ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a7b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf440;
  func_0x000107c61520(&UNK_10dbdf440,&UNK_1106679c0);
  puRam0000000112f7a7b8 = puVar1;
  return;
}



/* Entry: 1035938ec; end: 10359390f;  */

void FUN_1035938ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103593910();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103593910; end: 10359394f;  */

void FUN_103593910(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a7c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf418;
  func_0x000107c61520(&UNK_10dbdf418,&UNK_1106679c0);
  puRam0000000112f7a7c0 = puVar1;
  return;
}



/* Entry: 103593950; end: 10359397b;  */

void FUN_103593950(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035938ac();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103589d3c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10359397c; end: 10359397f;  */

void FUN_10359397c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a7c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf480;
  func_0x000107c61520(&UNK_10dbdf480,&UNK_1106679c0);
  puRam0000000112f7a7c8 = puVar1;
  return;
}



/* Entry: 103593980; end: 1035939bf;  */

void FUN_103593980(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a7c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf480;
  func_0x000107c61520(&UNK_10dbdf480,&UNK_1106679c0);
  puRam0000000112f7a7c8 = puVar1;
  return;
}



/* Entry: 1035939c0; end: 103593a77;  */

long FUN_1035939c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103593a78; end: 103593bbb;  */

undefined8 * FUN_103593a78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  uVar7 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar7;
  uVar7 = param_2[0xe];
  uVar6 = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x00010006c00c(uVar7,uVar6);
  param_1[0xe] = uVar7;
  param_1[0xf] = uVar6;
  uVar8 = param_2[0x12];
  if (uVar8 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar7 = param_2[0x11];
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x11] = uVar7;
    param_1[0x12] = uVar8;
  }
  else {
    uVar7 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar7;
    param_1[0x12] = param_2[0x12];
  }
  uVar8 = param_2[0x16];
  if (uVar8 >> 0x3c < 0xf) {
    param_1[0x13] = param_2[0x13];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar7 = param_2[0x15];
    func_0x00010006c00c(uVar7,uVar8);
    param_1[0x15] = uVar7;
    param_1[0x16] = uVar8;
  }
  else {
    uVar7 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar7;
    uVar7 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar7;
  }
  return param_1;
}



/* Entry: 103593bbc; end: 103593e2b;  */

undefined8 * FUN_103593bbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[8] = param_2[8];
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[10] = param_2[10];
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar4 = param_2[0xf];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[0xe];
  uVar1 = param_1[0xf];
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x12] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      uVar2 = param_2[0x11];
      uVar4 = param_2[0x12];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0x11];
      uVar1 = param_1[0x12];
      param_1[0x11] = uVar2;
      param_1[0x12] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      func_0x000101599dcc(param_1 + 0x10);
      uVar2 = param_2[0x12];
      uVar3 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar3;
      param_1[0x12] = uVar2;
    }
  }
  else if ((ulong)param_2[0x12] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar2 = param_2[0x11];
    uVar3 = param_2[0x12];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar3;
  }
  else {
    uVar3 = param_2[0x11];
    uVar2 = param_2[0x10];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
    param_1[0x10] = uVar2;
  }
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
      *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)((long)param_2 + 0x9c);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      uVar2 = param_2[0x15];
      uVar4 = param_2[0x16];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0x15];
      uVar1 = param_1[0x16];
      param_1[0x15] = uVar2;
      param_1[0x16] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      func_0x0001015c0210(param_1 + 0x13);
      uVar3 = param_2[0x16];
      uVar2 = param_2[0x15];
      uVar4 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar4;
      param_1[0x16] = uVar3;
      param_1[0x15] = uVar2;
    }
  }
  else if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)((long)param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar2 = param_2[0x15];
    uVar3 = param_2[0x16];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x15] = uVar2;
    param_1[0x16] = uVar3;
  }
  else {
    uVar3 = param_2[0x14];
    uVar2 = param_2[0x13];
    uVar4 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar3;
    param_1[0x13] = uVar2;
  }
  return param_1;
}



/* Entry: 103593e2c; end: 103593f6f;  */

undefined8 * FUN_103593e2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0xe];
  uVar1 = param_1[0xf];
  uVar4 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar4;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar3 = param_2[0x12];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      uVar2 = param_1[0x11];
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = uVar3;
      func_0x00010006c090(uVar2);
      goto LAB_103593f04;
    }
    func_0x000101599dcc(param_1 + 0x10);
  }
  uVar2 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  param_1[0x12] = param_2[0x12];
LAB_103593f04:
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    uVar3 = param_2[0x16];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[0x13] = param_2[0x13];
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      uVar2 = param_1[0x15];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x0001015c0210(param_1 + 0x13);
  }
  uVar2 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  uVar2 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar2;
  return param_1;
}



/* Entry: 103593f70; end: 103594033;  */

int FUN_103593f70(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103594034; end: 1035940bb;  */

void FUN_103594034(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a7d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdf3ec;
  func_0x000107c61520(&DAT_10dbdf3ec,&UNK_1106679c0);
  puRam0000000112f7a7d8 = puVar1;
  return;
}



/* Entry: 1035940bc; end: 103594167;  */

void FUN_1035940bc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x48);
      goto LAB_1035940f8;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_1035940f8:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_1035940f8;
}



/* Entry: 103594168; end: 10359422b;  */

void FUN_103594168(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (((int)unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x18))((int)unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)))) {
    uVar2 = unaff_x20[4];
    uVar1 = unaff_x20[3] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[3],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
    }
  }
  return;
}



/* Entry: 10359422c; end: 10359426f;  */

void FUN_10359422c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  return;
}



/* Entry: 103594270; end: 10359429f;  */

undefined1  [16] FUN_103594270(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 1035942a0; end: 1035942d3;  */

void FUN_1035942a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1035942d4; end: 1035942e7;  */

undefined1  [16] FUN_1035942d4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1035942e4;
  return auVar1;
}



/* Entry: 1035942e8; end: 10359430f;  */

void FUN_1035942e8(void)

{
  FUN_1035940bc();
  return;
}



/* Entry: 103594310; end: 103594313;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103594310(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103594314; end: 10359434b;  */

uint FUN_103594314(long param_1,long param_2)

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
  FUN_1035949e8();
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



/* Entry: 10359434c; end: 1035943a3;  */

uint FUN_10359434c(undefined8 *param_1)

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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_1035945fc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035943a4; end: 103594443;  */

/* WARNING: Possible PIC construction at 0x0001035943f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103594400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035943f4) */
/* WARNING: Removing unreachable block (ram,0x000103594404) */

void FUN_1035943a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7a7e0 != -1) {
    func_0x000107c61568(0x112f7a7e0,0x103594074);
  }
  uVar5 = uRam0000000113808cf8;
  uVar4 = uRam0000000113808cf0;
  uVar3 = uRam0000000113808ce8;
  uVar2 = uRam0000000113808ce0;
  uVar1 = uRam0000000113808cd8;
  *param_1 = uRam0000000113808cd0;
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



/* Entry: 103594444; end: 10359447f;  */

void FUN_103594444(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7a800;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7a800,&UNK_10dbdf690);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103594480; end: 1035945a3;  */

void FUN_103594480(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = unaff_x20[1];
  uStack_58 = *(undefined4 *)(unaff_x20 + 2);
  uStack_50 = unaff_x20[3];
  uStack_48 = unaff_x20[4];
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035945a4; end: 1035945fb;  */

uint FUN_1035945a4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_1035945fc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035945fc; end: 103594687;  */

/* WARNING: Possible PIC construction at 0x00010359462c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103594630) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035945fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  if ((*(int *)(param_1 + 2) != *(int *)(param_2 + 2)) ||
     ((uVar13 = param_1[3], uVar13 != param_2[3] || param_1[4] != param_2[4] &&
      (func_0x000107c605b8(), (uVar13 & 1) == 0)))) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[5];
  pbVar25 = (byte *)param_1[6];
  lVar24 = param_2[5];
  uVar13 = param_2[6];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103594688; end: 1035946c7;  */

void FUN_103594688(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a7e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf5d0;
  func_0x000107c61520(&UNK_10dbdf5d0,&UNK_110667b90);
  puRam0000000112f7a7e8 = puVar1;
  return;
}



/* Entry: 1035946c8; end: 1035946eb;  */

void FUN_1035946c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035946ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035946ec; end: 10359472b;  */

void FUN_1035946ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a7f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf5a8;
  func_0x000107c61520(&UNK_10dbdf5a8,&UNK_110667b90);
  puRam0000000112f7a7f0 = puVar1;
  return;
}



/* Entry: 10359472c; end: 103594757;  */

void FUN_10359472c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103594688();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103589dbc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103594758; end: 10359475b;  */

void FUN_103594758(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf610;
  func_0x000107c61520(&UNK_10dbdf610,&UNK_110667b90);
  puRam0000000112f7a7f8 = puVar1;
  return;
}



/* Entry: 10359475c; end: 10359479b;  */

void FUN_10359475c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a7f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf610;
  func_0x000107c61520(&UNK_10dbdf610,&UNK_110667b90);
  puRam0000000112f7a7f8 = puVar1;
  return;
}



/* Entry: 10359479c; end: 1035947f7;  */

long FUN_10359479c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035947f8; end: 1035948e7;  */

undefined8 * FUN_1035947f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 1035948e8; end: 103594943;  */

undefined8 * FUN_1035948e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103594944; end: 1035949e7;  */

int FUN_103594944(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035949e8; end: 103594a27;  */

void FUN_1035949e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdf57c;
  func_0x000107c61520(&DAT_10dbdf57c,&UNK_110667b90);
  puRam0000000112f7a808 = puVar1;
  return;
}



/* Entry: 103594a28; end: 103594ae7;  */

bool FUN_103594a28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  lStack_60 = lVar5;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  if (lVar5 == 0) {
    FUN_103594b88(&uStack_70,auStack_98,0x112db8098,&UNK_10d966ff0);
  }
  else {
    FUN_103594b88(&uStack_70,auStack_98,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar1,uVar2,lVar5,uVar3,uVar4);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  func_0x000101553bdc(uVar1,uVar2,0,uVar3,uVar4);
  return lVar5 != 0;
}



/* Entry: 103594ae8; end: 103594b87;  */

bool FUN_103594ae8(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(ulong *)(unaff_x20 + 0x60);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_103594b88(&uStack_50,auStack_68,0x112db6f48,&UNK_10d969b40);
    func_0x00010159fa64(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_103594b88(&uStack_50,auStack_68,0x112db6f48,&UNK_10d969b40);
  }
  func_0x00010159fa64(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 103594b88; end: 103594bcf;  */

undefined8 FUN_103594b88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103594bd0; end: 103594c17;  */

void FUN_103594bd0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdf800,0x8e,2);
  uRam0000000113808d08 = uStack_38;
  uRam0000000113808d00 = uStack_40;
  uRam0000000113808d18 = uStack_28;
  uRam0000000113808d10 = uStack_30;
  uRam0000000113808d28 = uStack_18;
  uRam0000000113808d20 = uStack_20;
  return;
}



/* Entry: 103594c18; end: 103594d7f;  */

/* WARNING: Removing unreachable block (ram,0x000103594d70) */

void FUN_103594c18(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 != 1) {
          if (lVar1 == 2) {
            pcVar4 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 3) goto LAB_103594ca0;
            pcVar4 = *(code **)(param_3 + 0x138);
          }
          goto LAB_103594c90;
        }
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015cabb8();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110679698;
LAB_103594d5c:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 < 6) {
          if (lVar1 == 4) {
            pcVar4 = *(code **)(param_3 + 0x138);
          }
          else {
            if (lVar1 != 5) goto LAB_103594ca0;
            pcVar4 = *(code **)(param_3 + 0x138);
          }
        }
        else {
          if (lVar1 == 6) {
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
            lVar2 = unaff_x20 + 0x50;
            puVar3 = &UNK_110790a00;
            goto LAB_103594d5c;
          }
          if (lVar1 != 7) goto LAB_103594ca0;
          pcVar4 = *(code **)(param_3 + 0x138);
        }
LAB_103594c90:
        (*pcVar4)();
      }
LAB_103594ca0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103594d80; end: 103594ec7;  */

void FUN_103594d80(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  FUN_103594ec8();
  if (unaff_x21 == 0) {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,2,param_2,param_3);
    }
    if ((char)unaff_x20[2] == '\x01') {
      (**(code **)(param_3 + 0x68))(1,3,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x11) == '\x01') {
      (**(code **)(param_3 + 0x68))(1,4,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x12) == '\x01') {
      (**(code **)(param_3 + 0x68))(1,5,param_2,param_3);
    }
    FUN_103594f50();
    if (*(char *)((long)unaff_x20 + 0x13) == '\x01') {
      (**(code **)(param_3 + 0x68))(1,7,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 103594ec8; end: 103594f4f;  */

void FUN_103594ec8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x38);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015cabb8();
    (*pcVar1)(&uStack_70,1,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103594f50; end: 103594fd7;  */

void FUN_103594f50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,6,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103594fd8; end: 103595033;  */

uint FUN_103594fd8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined1 auStack_148 [24];
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[6];
  uVar4 = param_1[5];
  uVar11 = param_1[8];
  uVar9 = param_1[7];
  uVar3 = param_1[9];
  uVar8 = param_2[6];
  uVar5 = param_2[5];
  uVar12 = param_2[8];
  uVar10 = param_2[7];
  uVar6 = param_2[9];
  uStack_110 = uVar5;
  uStack_108 = uVar8;
  uStack_100 = uVar10;
  uStack_f8 = uVar12;
  uStack_f0 = uVar6;
  uStack_e0 = uVar4;
  uStack_d8 = uVar7;
  uStack_d0 = uVar9;
  uStack_c8 = uVar11;
  uStack_c0 = uVar3;
  if (uVar9 == 0) {
    if (uVar10 != 0) goto LAB_103595524;
    FUN_103594b88(&uStack_e0,&uStack_90,0x112db8098,&UNK_10d966ff0);
    FUN_103594b88(&uStack_110,&uStack_90,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar4,uVar7,0,uVar11,uVar3);
LAB_1035955e4:
    uVar3 = *param_1;
    if ((((uVar3 == *param_2) && (param_1[1] == param_2[1])) ||
        (func_0x000107c605b8(), (uVar3 & 1) != 0)) &&
       ((((((byte)param_1[2] ^ (byte)param_2[2]) & 1) == 0 &&
         (((*(byte *)((long)param_1 + 0x11) ^ *(byte *)((long)param_2 + 0x11)) & 1) == 0)) &&
        (((*(byte *)((long)param_1 + 0x12) ^ *(byte *)((long)param_2 + 0x12)) & 1) == 0)))) {
      uVar6 = param_1[0xb];
      uVar3 = param_1[10];
      uVar4 = param_1[0xc];
      uVar8 = param_2[0xb];
      uVar7 = param_2[10];
      uVar5 = param_2[0xc];
      uStack_170 = uVar3;
      uStack_168 = uVar6;
      uStack_160 = uVar4;
      uStack_130 = uVar7;
      uStack_128 = uVar8;
      uStack_120 = uVar5;
      if (uVar4 >> 0x3c < 0xf) {
        if (0xe < uVar5 >> 0x3c) goto LAB_1035956f0;
        if (uVar3 == uVar7) {
          FUN_103594b88(&uStack_170,auStack_148,0x112db6f48,&UNK_10d969b40);
          FUN_103594b88(&uStack_130,auStack_148,0x112db6f48,&UNK_10d969b40);
          uVar7 = uVar6;
          func_0x000100e25fcc(uVar6,uVar4,uVar8,uVar5);
          func_0x00010159fa64(uVar3,uVar8,uVar5);
          if ((uVar7 & 1) != 0) goto LAB_1035956b4;
        }
        else {
          FUN_103594b88(&uStack_170,auStack_148,0x112db6f48,&UNK_10d969b40);
          FUN_103594b88(&uStack_130,auStack_148,0x112db6f48,&UNK_10d969b40);
          func_0x00010159fa64(uVar7,uVar8,uVar5);
        }
      }
      else {
        if (0xe < uVar5 >> 0x3c) {
          FUN_103594b88(&uStack_170,auStack_148,0x112db6f48,&UNK_10d969b40);
          FUN_103594b88(&uStack_130,auStack_148,0x112db6f48,&UNK_10d969b40);
LAB_1035956b4:
          func_0x00010159fa64(uVar3,uVar6,uVar4);
          if (((*(byte *)((long)param_1 + 0x13) ^ *(byte *)((long)param_2 + 0x13)) & 1) == 0) {
            uVar3 = param_1[3];
            func_0x000100e25fcc(uVar3,param_1[4],param_2[3],param_2[4]);
            uVar1 = (uint)uVar3;
            goto LAB_103595814;
          }
          goto LAB_103595810;
        }
LAB_1035956f0:
        FUN_103594b88(&uStack_170,auStack_148,0x112db6f48,&UNK_10d969b40);
        FUN_103594b88(&uStack_130,auStack_148,0x112db6f48,&UNK_10d969b40);
        func_0x00010159fa64(uVar3,uVar6,uVar4);
        uVar3 = uVar7;
        uVar6 = uVar8;
        uVar4 = uVar5;
      }
      func_0x00010159fa64(uVar3,uVar6,uVar4);
    }
  }
  else {
    if (uVar10 != 0) {
      uStack_88 = (undefined1)uVar8;
      uStack_b0 = (undefined1)uVar7;
      uStack_b8 = uVar4;
      uStack_a8 = uVar9;
      uStack_a0 = uVar11;
      uStack_98 = uVar3;
      uStack_90 = uVar5;
      uStack_80 = uVar10;
      uStack_78 = uVar12;
      uStack_70 = uVar6;
      FUN_103594b88(&uStack_e0,&uStack_170,0x112db8098,&UNK_10d966ff0);
      FUN_103594b88(&uStack_110,&uStack_170,0x112db8098,&UNK_10d966ff0);
      puVar2 = &uStack_b8;
      FUN_10368c758(puVar2,&uStack_90);
      func_0x000101553bdc(uVar5,uVar8,uVar10,uVar12,uVar6);
      func_0x000101553bdc(uVar4,uVar7,uVar9,uVar11,uVar3);
      if (((ulong)puVar2 & 1) != 0) goto LAB_1035955e4;
      goto LAB_103595810;
    }
LAB_103595524:
    FUN_103594b88(&uStack_e0,&uStack_90,0x112db8098,&UNK_10d966ff0);
    FUN_103594b88(&uStack_110,&uStack_90,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar4,uVar7,uVar9,uVar11,uVar3);
    func_0x000101553bdc(uVar5,uVar8,uVar10,uVar12,uVar6);
  }
LAB_103595810:
  uVar1 = 0;
LAB_103595814:
  return uVar1 & 1;
}



/* Entry: 103595034; end: 103595063;  */

undefined1  [16] FUN_103595034(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 103595064; end: 103595097;  */

void FUN_103595064(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103595098; end: 1035950ab;  */

undefined1  [16] FUN_103595098(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1035950a8;
  return auVar1;
}



/* Entry: 1035950ac; end: 1035950bf;  */

void FUN_1035950ac(void)

{
  FUN_103594c18();
  return;
}



/* Entry: 1035950c0; end: 103595107;  */

void FUN_1035950c0(void)

{
  FUN_103594d80();
  return;
}



/* Entry: 103595108; end: 10359510b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103595108(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10359510c; end: 103595143;  */

uint FUN_10359510c(long param_1,long param_2)

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
  FUN_103595e64();
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



/* Entry: 103595144; end: 1035951ab;  */

uint FUN_103595144(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_90 = unaff_x20[0xc];
  FUN_10359541c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1035951ac; end: 10359524b;  */

/* WARNING: Possible PIC construction at 0x0001035951f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103595208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035951fc) */
/* WARNING: Removing unreachable block (ram,0x00010359520c) */

void FUN_1035951ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7a810 != -1) {
    func_0x000107c61568(0x112f7a810,FUN_103594bd0);
  }
  uVar5 = uRam0000000113808d28;
  uVar4 = uRam0000000113808d20;
  uVar3 = uRam0000000113808d18;
  uVar2 = uRam0000000113808d10;
  uVar1 = uRam0000000113808d08;
  *param_1 = uRam0000000113808d00;
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



/* Entry: 10359524c; end: 103595287;  */

void FUN_10359524c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7a830;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7a830,&UNK_10dbdf7f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103595288; end: 1035953b3;  */

void FUN_103595288(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035953b4; end: 10359541b;  */

uint FUN_1035953b4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  FUN_10359541c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10359541c; end: 103595837;  */

uint FUN_10359541c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined1 auStack_148 [24];
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar7 = param_1[6];
  uVar4 = param_1[5];
  uVar11 = param_1[8];
  uVar9 = param_1[7];
  uVar3 = param_1[9];
  uVar8 = param_2[6];
  uVar5 = param_2[5];
  uVar12 = param_2[8];
  uVar10 = param_2[7];
  uVar6 = param_2[9];
  uStack_110 = uVar5;
  uStack_108 = uVar8;
  uStack_100 = uVar10;
  uStack_f8 = uVar12;
  uStack_f0 = uVar6;
  uStack_e0 = uVar4;
  uStack_d8 = uVar7;
  uStack_d0 = uVar9;
  uStack_c8 = uVar11;
  uStack_c0 = uVar3;
  if (uVar9 == 0) {
    if (uVar10 != 0) goto LAB_103595524;
    FUN_103594b88(&uStack_e0,&uStack_90,0x112db8098,&UNK_10d966ff0);
    FUN_103594b88(&uStack_110,&uStack_90,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar4,uVar7,0,uVar11,uVar3);
LAB_1035955e4:
    uVar3 = *param_1;
    if ((((uVar3 == *param_2) && (param_1[1] == param_2[1])) ||
        (func_0x000107c605b8(), (uVar3 & 1) != 0)) &&
       ((((((byte)param_1[2] ^ (byte)param_2[2]) & 1) == 0 &&
         (((*(byte *)((long)param_1 + 0x11) ^ *(byte *)((long)param_2 + 0x11)) & 1) == 0)) &&
        (((*(byte *)((long)param_1 + 0x12) ^ *(byte *)((long)param_2 + 0x12)) & 1) == 0)))) {
      uVar6 = param_1[0xb];
      uVar3 = param_1[10];
      uVar4 = param_1[0xc];
      uVar8 = param_2[0xb];
      uVar7 = param_2[10];
      uVar5 = param_2[0xc];
      uStack_170 = uVar3;
      uStack_168 = uVar6;
      uStack_160 = uVar4;
      uStack_130 = uVar7;
      uStack_128 = uVar8;
      uStack_120 = uVar5;
      if (uVar4 >> 0x3c < 0xf) {
        if (0xe < uVar5 >> 0x3c) goto LAB_1035956f0;
        if (uVar3 == uVar7) {
          FUN_103594b88(&uStack_170,auStack_148,0x112db6f48,&UNK_10d969b40);
          FUN_103594b88(&uStack_130,auStack_148,0x112db6f48,&UNK_10d969b40);
          uVar7 = uVar6;
          func_0x000100e25fcc(uVar6,uVar4,uVar8,uVar5);
          func_0x00010159fa64(uVar3,uVar8,uVar5);
          if ((uVar7 & 1) != 0) goto LAB_1035956b4;
        }
        else {
          FUN_103594b88(&uStack_170,auStack_148,0x112db6f48,&UNK_10d969b40);
          FUN_103594b88(&uStack_130,auStack_148,0x112db6f48,&UNK_10d969b40);
          func_0x00010159fa64(uVar7,uVar8,uVar5);
        }
      }
      else {
        if (0xe < uVar5 >> 0x3c) {
          FUN_103594b88(&uStack_170,auStack_148,0x112db6f48,&UNK_10d969b40);
          FUN_103594b88(&uStack_130,auStack_148,0x112db6f48,&UNK_10d969b40);
LAB_1035956b4:
          func_0x00010159fa64(uVar3,uVar6,uVar4);
          if (((*(byte *)((long)param_1 + 0x13) ^ *(byte *)((long)param_2 + 0x13)) & 1) == 0) {
            uVar3 = param_1[3];
            func_0x000100e25fcc(uVar3,param_1[4],param_2[3],param_2[4]);
            uVar1 = (uint)uVar3;
            goto LAB_103595814;
          }
          goto LAB_103595810;
        }
LAB_1035956f0:
        FUN_103594b88(&uStack_170,auStack_148,0x112db6f48,&UNK_10d969b40);
        FUN_103594b88(&uStack_130,auStack_148,0x112db6f48,&UNK_10d969b40);
        func_0x00010159fa64(uVar3,uVar6,uVar4);
        uVar3 = uVar7;
        uVar6 = uVar8;
        uVar4 = uVar5;
      }
      func_0x00010159fa64(uVar3,uVar6,uVar4);
    }
  }
  else {
    if (uVar10 != 0) {
      uStack_88 = (undefined1)uVar8;
      uStack_b0 = (undefined1)uVar7;
      uStack_b8 = uVar4;
      uStack_a8 = uVar9;
      uStack_a0 = uVar11;
      uStack_98 = uVar3;
      uStack_90 = uVar5;
      uStack_80 = uVar10;
      uStack_78 = uVar12;
      uStack_70 = uVar6;
      FUN_103594b88(&uStack_e0,&uStack_170,0x112db8098,&UNK_10d966ff0);
      FUN_103594b88(&uStack_110,&uStack_170,0x112db8098,&UNK_10d966ff0);
      puVar2 = &uStack_b8;
      FUN_10368c758(puVar2,&uStack_90);
      func_0x000101553bdc(uVar5,uVar8,uVar10,uVar12,uVar6);
      func_0x000101553bdc(uVar4,uVar7,uVar9,uVar11,uVar3);
      if (((ulong)puVar2 & 1) != 0) goto LAB_1035955e4;
      goto LAB_103595810;
    }
LAB_103595524:
    FUN_103594b88(&uStack_e0,&uStack_90,0x112db8098,&UNK_10d966ff0);
    FUN_103594b88(&uStack_110,&uStack_90,0x112db8098,&UNK_10d966ff0);
    func_0x000101553bdc(uVar4,uVar7,uVar9,uVar11,uVar3);
    func_0x000101553bdc(uVar5,uVar8,uVar10,uVar12,uVar6);
  }
LAB_103595810:
  uVar1 = 0;
LAB_103595814:
  return uVar1 & 1;
}



/* Entry: 103595838; end: 103595877;  */

void FUN_103595838(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf730;
  func_0x000107c61520(&UNK_10dbdf730,&UNK_110667d40);
  puRam0000000112f7a818 = puVar1;
  return;
}



/* Entry: 103595878; end: 10359589b;  */

void FUN_103595878(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10359589c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10359589c; end: 1035958db;  */

void FUN_10359589c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf708;
  func_0x000107c61520(&UNK_10dbdf708,&UNK_110667d40);
  puRam0000000112f7a820 = puVar1;
  return;
}



/* Entry: 1035958dc; end: 103595907;  */

void FUN_1035958dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103595838();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103589ebc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103595908; end: 10359590b;  */

void FUN_103595908(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf770;
  func_0x000107c61520(&UNK_10dbdf770,&UNK_110667d40);
  puRam0000000112f7a828 = puVar1;
  return;
}



/* Entry: 10359590c; end: 10359594b;  */

void FUN_10359590c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdf770;
  func_0x000107c61520(&UNK_10dbdf770,&UNK_110667d40);
  puRam0000000112f7a828 = puVar1;
  return;
}



/* Entry: 10359594c; end: 1035959d7;  */

long FUN_10359594c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035959d8; end: 103595ca3;  */

undefined8 * FUN_1035959d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar4 = param_2[3];
  uVar1 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar4,uVar1);
  param_1[3] = uVar4;
  param_1[4] = uVar1;
  lVar2 = param_2[7];
  if (lVar2 == 0) {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    param_1[9] = param_2[9];
  }
  else {
    param_1[5] = param_2[5];
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    param_1[7] = lVar2;
    uVar4 = param_2[8];
    uVar1 = param_2[9];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar1);
    param_1[8] = uVar4;
    param_1[9] = uVar1;
  }
  uVar3 = param_2[0xc];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0xb];
    param_1[10] = param_2[10];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar3;
  }
  else {
    uVar4 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xc] = param_2[0xc];
  }
  return param_1;
}



/* Entry: 103595ca4; end: 103595db3;  */

undefined8 * FUN_103595ca4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)param_2 + 0x13);
  uVar2 = param_1[3];
  uVar1 = param_1[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  func_0x00010006c090(uVar2,uVar1);
  if (param_1[7] != 0) {
    lVar3 = param_2[7];
    if (lVar3 != 0) {
      param_1[5] = param_2[5];
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
      param_1[7] = lVar3;
      func_0x000107c6142c();
      uVar2 = param_1[8];
      uVar1 = param_1[9];
      uVar5 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar5;
      func_0x00010006c090(uVar2,uVar1);
      goto LAB_103595d54;
    }
    func_0x000101553ad0(param_1 + 5);
  }
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[9] = param_2[9];
LAB_103595d54:
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    uVar4 = param_2[0xc];
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_1[0xb];
      uVar1 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar1;
      param_1[0xc] = uVar4;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    func_0x00010159d670(param_1 + 10);
  }
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xc] = param_2[0xc];
  return param_1;
}



/* Entry: 103595db4; end: 103595e63;  */

int FUN_103595db4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103595e64; end: 103595ea3;  */

void FUN_103595e64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7a838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdf6dc;
  func_0x000107c61520(&DAT_10dbdf6dc,&UNK_110667d40);
  puRam0000000112f7a838 = puVar1;
  return;
}



/* Entry: 103595ea4; end: 103595fd7;  */

long FUN_103595ea4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar3 = param_3 + 0x10;
  func_0x000107c61428(lVar3,auStack_58,0,0);
  lVar1 = *(long *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar5 = lVar1;
  if (lVar4 == 0) {
    FUN_1035ced54();
    lVar5 = lVar3;
  }
  FUN_10359a684(lVar1,uVar2,lVar4);
  return lVar5;
}



/* Entry: 103595fd8; end: 103595ff7;  */

void FUN_103595fd8(void)

{
  func_0x000107c61168(&PTR_PTR_112f7a8b0);
  return;
}



/* Entry: 103595ff8; end: 103596123;  */

bool FUN_103595ff8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = *(long *)(param_3 + 0x20);
  if (lVar3 == 0) {
    FUN_10359a684(uVar1,uVar2,0);
  }
  else {
    FUN_10359a684(uVar1,uVar2,lVar3);
    func_0x00010359a6b0(uVar1,uVar2,lVar3);
    uVar1 = 0;
    uVar2 = 0;
  }
  func_0x00010359a6b0(uVar1,uVar2,0);
  return lVar3 != 0;
}



/* Entry: 103596124; end: 103596273;  */

void FUN_103596124(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_103595fd8(0);
    func_0x000107c613fc();
    FUN_103596974(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x28,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  uVar1 = *(undefined8 *)(lVar5 + 0x30);
  uVar4 = *(undefined8 *)(lVar5 + 0x38);
  *(ulong *)(lVar5 + 0x28) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x30) = param_2;
  *(undefined8 *)(lVar5 + 0x38) = param_3;
  func_0x000101556278(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 103596274; end: 10359631b;  */

void FUN_103596274(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_103595fd8(0);
    func_0x000107c613fc();
    FUN_103596974(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x58,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  uVar1 = *(undefined8 *)(lVar5 + 0x60);
  uVar4 = *(undefined8 *)(lVar5 + 0x68);
  *(ulong *)(lVar5 + 0x58) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x60) = param_2;
  *(undefined8 *)(lVar5 + 0x68) = param_3;
  func_0x000100d56038(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10359631c; end: 1035963c3;  */

void FUN_10359631c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_103595fd8(0);
    func_0x000107c613fc();
    FUN_103596974(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x88,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x88);
  uVar1 = *(undefined8 *)(lVar5 + 0x90);
  uVar4 = *(undefined8 *)(lVar5 + 0x98);
  *(ulong *)(lVar5 + 0x88) = param_1 & 1;
  *(undefined8 *)(lVar5 + 0x90) = param_2;
  *(undefined8 *)(lVar5 + 0x98) = param_3;
  func_0x000101556278(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 1035963c4; end: 10359644f;  */

void FUN_1035963c4(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103595fd8(0);
    func_0x000107c613fc();
    FUN_103596974(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0xa0,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0xa0) = param_1;
  *(undefined1 *)(lVar3 + 0xa8) = param_2;
  return;
}



/* Entry: 103596450; end: 10359663b;  */

void FUN_103596450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_103595fd8(0);
    func_0x000107c613fc();
    FUN_103596974(lVar5,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x100,auStack_58,1,0);
  uVar3 = *(undefined8 *)(lVar5 + 0x100);
  uVar1 = *(undefined8 *)(lVar5 + 0x108);
  uVar4 = *(undefined8 *)(lVar5 + 0x110);
  *(undefined8 *)(lVar5 + 0x100) = param_1;
  *(undefined8 *)(lVar5 + 0x108) = param_2;
  *(undefined8 *)(lVar5 + 0x110) = param_3;
  func_0x00010359a6b0(uVar3,uVar1,uVar4);
  return;
}



/* Entry: 10359663c; end: 10359670f;  */

void FUN_10359663c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_103595fd8(0);
    func_0x000107c613fc();
    FUN_103596974();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c610b4(auStack_2c0,param_1,0x140);
  func_0x000101618330(auStack_2c0);
  func_0x000107c61428(lVar2 + 0x160,auStack_2d8,1,0);
  func_0x000107c610b4(auStack_180,lVar2 + 0x160,0x140);
  func_0x000107c610b4(lVar2 + 0x160,auStack_2c0,0x140);
  func_0x00010359a6dc(auStack_180,0x112dba328,&UNK_10d96ce10);
  return;
}



/* Entry: 103596710; end: 1035967bf;  */

void FUN_103596710(uint param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103595fd8(0);
    func_0x000107c613fc();
    FUN_103596974(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x2d0,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x2d0);
  uVar3 = *(undefined8 *)(lVar5 + 0x2d8);
  uVar4 = *(undefined8 *)(lVar5 + 0x2e0);
  *(ulong *)(lVar5 + 0x2d0) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x2d8) = param_2;
  *(undefined8 *)(lVar5 + 0x2e0) = param_3;
  func_0x000100d56038(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035967c0; end: 10359681b;  */

undefined8 FUN_1035967c0(void)

{
  if (lRam0000000112f7a840 != -1) {
    func_0x000107c61568(0x112f7a840,FUN_103596864);
  }
  func_0x000107c6157c(uRam0000000112f7a848);
  return 0;
}



/* Entry: 10359681c; end: 103596863;  */

void FUN_10359681c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdfa90,0x1c4,2);
  uRam0000000113808d38 = uStack_38;
  uRam0000000113808d30 = uStack_40;
  uRam0000000113808d48 = uStack_28;
  uRam0000000113808d40 = uStack_30;
  uRam0000000113808d58 = uStack_18;
  uRam0000000113808d50 = uStack_20;
  return;
}



/* Entry: 103596864; end: 10359689f;  */

void FUN_103596864(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103595fd8();
  func_0x000107c613fc();
  FUN_1035968a0();
  uRam0000000112f7a848 = uVar1;
  return;
}



/* Entry: 1035968a0; end: 103596973;  */

void FUN_1035968a0(void)

{
  long unaff_x20;
  undefined1 auStack_170 [320];
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 2;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 2;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 2;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 2;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined1 *)(unaff_x20 + 0xa8) = 1;
  *(undefined8 *)(unaff_x20 + 0xb0) = 2;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 2;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0xf000000000000000;
  func_0x0001016182b8(auStack_170);
  func_0x000107c610b4(unaff_x20 + 0x160,auStack_170,0x140);
  *(undefined8 *)(unaff_x20 + 0x2a0) = 2;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 2;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0xf000000000000000;
  return;
}



/* Entry: 103596974; end: 1035971bf;  */

void FUN_103596974(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 auStack_8b0 [24];
  undefined1 auStack_898 [24];
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  undefined1 auStack_850 [24];
  undefined1 auStack_838 [320];
  undefined1 auStack_6f8 [24];
  undefined1 auStack_6e0 [24];
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [24];
  undefined1 auStack_680 [24];
  undefined1 auStack_668 [24];
  undefined1 auStack_650 [24];
  undefined1 auStack_638 [24];
  undefined1 auStack_620 [24];
  undefined1 auStack_608 [24];
  undefined1 auStack_5f0 [24];
  undefined1 auStack_5d8 [24];
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [320];
  undefined1 auStack_2e8 [320];
  undefined1 auStack_1a8 [328];
  
  puVar8 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar8 = 0;
  puVar16 = (undefined8 *)(unaff_x20 + 0x28);
  *puVar16 = 2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar2 = 2;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *puVar3 = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 2;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x88);
  *puVar4 = 2;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined1 *)(unaff_x20 + 0xa8) = 1;
  puVar5 = (undefined8 *)(unaff_x20 + 0xb0);
  *puVar5 = 2;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  puVar6 = (undefined8 *)(unaff_x20 + 200);
  *puVar6 = 2;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *puVar7 = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0xf000000000000000;
  func_0x0001016182b8(auStack_428);
  func_0x000107c610b4(unaff_x20 + 0x160,auStack_428,0x140);
  *(undefined8 *)(unaff_x20 + 0x2a0) = 2;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 2;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0xf000000000000000;
  func_0x000107c61428(param_1 + 0x10,auStack_440,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar8,auStack_458,1,0);
  uVar14 = *puVar8;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  *puVar8 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar12;
  FUN_10359a684(uVar9,uVar11,uVar12);
  func_0x00010359a6b0(uVar14,uVar10,uVar13);
  func_0x000107c61428(param_1 + 0x28,auStack_470,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar16,auStack_488,1,0);
  uVar14 = *puVar16;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar16 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar12;
  func_0x000101541464(uVar9,uVar11,uVar12);
  func_0x000101556278(uVar14,uVar10,uVar13);
  func_0x000107c61428(param_1 + 0x40,auStack_4a0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61428(puVar2,auStack_4b8,1,0);
  uVar14 = *puVar2;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
  *puVar2 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar12;
  func_0x000101541464(uVar9,uVar11,uVar12);
  func_0x000101556278(uVar14,uVar10,uVar13);
  func_0x000107c61428(param_1 + 0x58,auStack_4d0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  uVar12 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar3,auStack_4e8,1,0);
  uVar14 = *puVar3;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar3 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar12;
  func_0x000100d5601c(uVar9,uVar11,uVar12);
  func_0x000100d56038(uVar14,uVar10,uVar13);
  func_0x000107c61428(param_1 + 0x70,auStack_500,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  uVar12 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_518,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar12;
  func_0x000101541464(uVar9,uVar11,uVar12);
  func_0x000101556278(uVar10,uVar13,uVar14);
  func_0x000107c61428(param_1 + 0x88,auStack_530,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  uVar12 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61428(puVar4,auStack_548,1,0);
  uVar14 = *puVar4;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x98);
  *puVar4 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar12;
  func_0x000101541464(uVar9,uVar11,uVar12);
  func_0x000101556278(uVar14,uVar10,uVar13);
  func_0x000107c61428(param_1 + 0xa0,auStack_560,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0xa0);
  uVar1 = *(undefined1 *)(param_1 + 0xa8);
  func_0x000107c61428(unaff_x20 + 0xa0,auStack_578,1,0);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar9;
  *(undefined1 *)(unaff_x20 + 0xa8) = uVar1;
  func_0x000107c61428(param_1 + 0xb0,auStack_590,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0xb0);
  uVar11 = *(undefined8 *)(param_1 + 0xb8);
  uVar12 = *(undefined8 *)(param_1 + 0xc0);
  func_0x000107c61428(puVar5,auStack_5a8,1,0);
  uVar14 = *puVar5;
  uVar10 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xc0);
  *puVar5 = uVar9;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar11;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar12;
  func_0x000101541464(uVar9,uVar11,uVar12);
  func_0x000101556278(uVar14,uVar10,uVar13);
  func_0x000107c61428(param_1 + 200,auStack_5c0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 200);
  uVar11 = *(undefined8 *)(param_1 + 0xd0);
  uVar12 = *(undefined8 *)(param_1 + 0xd8);
  func_0x000107c61428(puVar6,auStack_5d8,1,0);
  uVar14 = *puVar6;
  uVar10 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xd8);
  *puVar6 = uVar9;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar11;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar12;
  func_0x000101541464(uVar9,uVar11,uVar12);
  func_0x000101556278(uVar14,uVar10,uVar13);
  func_0x000107c61428(param_1 + 0xe0,auStack_5f0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0xe0);
  uVar13 = *(undefined8 *)(param_1 + 0xe8);
  uVar10 = *(undefined8 *)(param_1 + 0xf0);
  uVar12 = *(undefined8 *)(param_1 + 0xf8);
  func_0x000107c61428(puVar7,auStack_608,1,0);
  uVar15 = *puVar7;
  uVar11 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xf8);
  *puVar7 = uVar9;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar12;
  func_0x000101597350(uVar9,uVar13,uVar10,uVar12);
  func_0x000101597ae4(uVar15,uVar11,uVar14,uVar17);
  func_0x000107c61428(param_1 + 0x100,auStack_620,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x100);
  uVar11 = *(undefined8 *)(param_1 + 0x108);
  uVar12 = *(undefined8 *)(param_1 + 0x110);
  func_0x000107c61428(unaff_x20 + 0x100,auStack_638,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x100) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x110) = uVar12;
  FUN_10359a684(uVar9,uVar11,uVar12);
  func_0x00010359a6b0(uVar10,uVar13,uVar14);
  func_0x000107c61428(param_1 + 0x118,auStack_650,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x118);
  uVar11 = *(undefined8 *)(param_1 + 0x120);
  uVar12 = *(undefined8 *)(param_1 + 0x128);
  func_0x000107c61428(unaff_x20 + 0x118,auStack_668,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x118) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar12;
  func_0x000100d5601c(uVar9,uVar11,uVar12);
  func_0x000100d56038(uVar10,uVar13,uVar14);
  func_0x000107c61428(param_1 + 0x130,auStack_680,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x130);
  uVar11 = *(undefined8 *)(param_1 + 0x138);
  uVar12 = *(undefined8 *)(param_1 + 0x140);
  func_0x000107c61428(unaff_x20 + 0x130,auStack_698,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x20 + 0x130) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x140) = uVar12;
  func_0x000100d5601c(uVar9,uVar11,uVar12);
  func_0x000100d56038(uVar10,uVar13,uVar14);
  func_0x000107c61428(param_1 + 0x148,auStack_6b0,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x148);
  uVar11 = *(undefined8 *)(param_1 + 0x150);
  uVar12 = *(undefined8 *)(param_1 + 0x158);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x148),auStack_6c8,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x158);
  *(undefined8 *)(unaff_x20 + 0x148) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x150) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x158) = uVar12;
  func_0x000100d5601c(uVar9,uVar11,uVar12);
  func_0x000100d56038(uVar10,uVar13,uVar14);
  func_0x000107c61428(param_1 + 0x160,auStack_6e0,0,0);
  func_0x000107c610b4(auStack_2e8,param_1 + 0x160,0x140);
  func_0x000107c61428(unaff_x20 + 0x160,auStack_6f8,1,0);
  func_0x000107c610b4(auStack_1a8,unaff_x20 + 0x160,0x140);
  func_0x000107c610b4(unaff_x20 + 0x160,auStack_2e8,0x140);
  func_0x000103582db8(auStack_2e8,auStack_838);
  func_0x00010359a6dc(auStack_1a8,0x112dba328,&UNK_10d96ce10);
  func_0x000107c61428(param_1 + 0x2a0,auStack_838,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x2a0);
  uVar10 = *(undefined8 *)(param_1 + 0x2a8);
  uVar11 = *(undefined8 *)(param_1 + 0x2b0);
  func_0x000107c61428(unaff_x20 + 0x2a0,auStack_850,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x2b0);
  *(undefined8 *)(unaff_x20 + 0x2a0) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uVar11;
  func_0x000101541464(uVar9,uVar10,uVar11);
  func_0x000101556278(uVar13,uVar12,uVar14);
  func_0x000107c61428(param_1 + 0x2b8,auStack_868,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x2b8);
  uVar10 = *(undefined8 *)(param_1 + 0x2c0);
  uVar11 = *(undefined8 *)(param_1 + 0x2c8);
  func_0x000107c61428(unaff_x20 + 0x2b8,auStack_880,1,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x2c8);
  *(undefined8 *)(unaff_x20 + 0x2b8) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uVar11;
  func_0x000101541464(uVar9,uVar10,uVar11);
  func_0x000101556278(uVar13,uVar12,uVar14);
  func_0x000107c61428(param_1 + 0x2d0,auStack_898,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x2d0);
  uVar12 = *(undefined8 *)(param_1 + 0x2d8);
  uVar14 = *(undefined8 *)(param_1 + 0x2e0);
  func_0x000100d5601c(uVar13,uVar12,uVar14);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x2d0,auStack_8b0,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x2d8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x2e0);
  *(undefined8 *)(unaff_x20 + 0x2d0) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uVar12;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uVar14;
  func_0x000100d56038(uVar9,uVar10,uVar11);
  return;
}



/* Entry: 1035971c0; end: 1035972d3;  */

void FUN_1035971c0(void)

{
  long unaff_x20;
  
  func_0x00010359a6b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  func_0x000100d56038(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000101597ae4(*(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x00010359a6b0(*(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110));
  func_0x000100d56038(*(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128));
  func_0x000100d56038(*(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140));
  func_0x000100d56038(*(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158));
  func_0x00010359a6dc(unaff_x20 + 0x160,0x112dba328,&UNK_10d96ce10);
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x2a0),*(undefined8 *)(unaff_x20 + 0x2a8),
                      *(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x2b8),*(undefined8 *)(unaff_x20 + 0x2c0),
                      *(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000100d56038(*(undefined8 *)(unaff_x20 + 0x2d0),*(undefined8 *)(unaff_x20 + 0x2d8),
                      *(undefined8 *)(unaff_x20 + 0x2e0));
  return;
}



/* Entry: 1035972d4; end: 103597363;  */

void FUN_1035972d4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_103595fd8(0);
    func_0x000107c613fc();
    FUN_103596974(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_103597364();
  return;
}



/* Entry: 103597364; end: 1035975e7;  */

/* WARNING: Removing unreachable block (ram,0x000103597424) */
/* WARNING: Removing unreachable block (ram,0x0001035974cc) */
/* WARNING: Removing unreachable block (ram,0x000103597478) */
/* WARNING: Removing unreachable block (ram,0x0001035975ac) */
/* WARNING: Removing unreachable block (ram,0x0001035975e4) */
/* WARNING: Removing unreachable block (ram,0x0001035975c8) */
/* WARNING: Removing unreachable block (ram,0x000103597494) */
/* WARNING: Removing unreachable block (ram,0x000103597440) */
/* WARNING: Removing unreachable block (ram,0x0001035974e8) */
/* WARNING: Removing unreachable block (ram,0x000103597590) */
/* WARNING: Removing unreachable block (ram,0x00010359745c) */
/* WARNING: Removing unreachable block (ram,0x0001035974b0) */
/* WARNING: Removing unreachable block (ram,0x000103597520) */
/* WARNING: Removing unreachable block (ram,0x000103597574) */
/* WARNING: Removing unreachable block (ram,0x000103597504) */
/* WARNING: Removing unreachable block (ram,0x00010359753c) */
/* WARNING: Removing unreachable block (ram,0x000103597558) */

void FUN_103597364(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1035975e8(param_2,param_1,param_3,param_4);
        break;
      case 2:
        FUN_10359767c(param_2,param_1,param_3,param_4);
        break;
      case 3:
        FUN_103597710(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_1035977a4(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_103597838(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_1035978cc(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_103597960(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_1035979f4(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_103597a88(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_103597b1c(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_103597bb0(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_103597c44(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_103597cd8(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_103597d6c(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_103597e00(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_103597e94(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_103597f28(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_103597fbc(param_2,param_1,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035975e8; end: 10359767b;  */

void FUN_1035975e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103510fbc();
  (*pcVar2)(param_2 + 0x10,&UNK_11066abb0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10359767c; end: 10359770f;  */

void FUN_10359767c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x28,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103597710; end: 1035977a3;  */

void FUN_103597710(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x40,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035977a4; end: 103597837;  */

void FUN_1035977a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x58,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103597838; end: 1035978cb;  */

void FUN_103597838(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x70,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035978cc; end: 10359795f;  */

void FUN_1035978cc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x88,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103597960; end: 1035979f3;  */

void FUN_103597960(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xa0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035831d4();
  (*pcVar2)(param_2 + 0xa0,&UNK_110668568,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}


