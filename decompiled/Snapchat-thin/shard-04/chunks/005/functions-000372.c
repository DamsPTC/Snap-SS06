/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10362f6dc; end: 10362f75f;  */

long FUN_10362f6dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10362f760; end: 10362f9a3;  */

undefined8 * FUN_10362f760(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
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
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    lVar1 = param_2[9];
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    lVar1 = param_2[9];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[8];
    uVar4 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    uVar2 = param_2[10];
    uVar3 = param_2[0xb];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
  }
  return param_1;
}



/* Entry: 10362f9a4; end: 10362fa73;  */

undefined8 * FUN_10362f9a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[5] != 0) {
    lVar3 = param_2[5];
    if (lVar3 != 0) {
      param_1[4] = param_2[4];
      param_1[5] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[6];
      uVar2 = param_1[7];
      uVar4 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      lVar3 = param_1[9];
      goto joined_r0x00010362fa28;
    }
    func_0x00010159d63c(param_1 + 4);
  }
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar2;
  lVar3 = param_1[9];
joined_r0x00010362fa28:
  if (lVar3 != 0) {
    lVar3 = param_2[9];
    if (lVar3 != 0) {
      param_1[8] = param_2[8];
      param_1[9] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[10];
      uVar2 = param_1[0xb];
      uVar4 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    func_0x00010159d63c(param_1 + 8);
  }
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar2;
  return param_1;
}



/* Entry: 10362fa74; end: 10362fbeb;  */

int FUN_10362fa74(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10362fbec; end: 10362fc73;  */

void FUN_10362fbec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbef91c;
  func_0x000107c61520(&DAT_10dbef91c,&UNK_110672f88);
  puRam0000000112f80f18 = puVar1;
  return;
}



/* Entry: 10362fc74; end: 10362fd8b;  */

void FUN_10362fc74(undefined8 param_1,long param_2,long param_3)

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
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_10362fce8;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_10362fce8;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x40;
        }
        else {
          if (lVar1 != 4) goto LAB_10362fd00;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x58;
        }
LAB_10362fce8:
        (*pcVar4)(lVar2,&UNK_110790980,lVar1,param_2,param_3);
      }
LAB_10362fd00:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10362fd8c; end: 10362fe2f;  */

void FUN_10362fd8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10362fe30();
  if (unaff_x21 == 0) {
    FUN_10362feb8();
    FUN_10362ff40();
    FUN_10362ffc8();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10362fe30; end: 10362feb7;  */

void FUN_10362fe30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 10362feb8; end: 10362ff3f;  */

void FUN_10362feb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10362ff40; end: 10362ffc7;  */

void FUN_10362ff40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,3,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10362ffc8; end: 10363004f;  */

void FUN_10362ffc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x68);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103630050; end: 1036300a3;  */

uint FUN_103630050(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 auStack_188 [3];
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
    if (0xe < uVar8 >> 0x3c) goto LAB_103630518;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103630584;
    }
    else {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_1036308ac:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
LAB_103630584:
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
        if (0xe < uVar8 >> 0x3c) goto LAB_1036305fc;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_1036308ac;
        }
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        func_0x00010161ef18(&uStack_f0,&uStack_110);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036308cc;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036305fc:
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1036307f8;
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
        if (0xe < uVar8 >> 0x3c) goto LAB_1036306f0;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_1036308ac;
        }
        func_0x00010161ef18(&uStack_110,&uStack_150);
        func_0x00010161ef18(&uStack_130,&uStack_150);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036308cc;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036306f0:
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1036307f8;
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
        if (0xe < uVar8 >> 0x3c) goto LAB_1036307e4;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_150,auStack_188);
          puVar3 = &uStack_170;
          puVar4 = auStack_188;
          goto LAB_1036308ac;
        }
        func_0x00010161ef18(&uStack_150,auStack_188);
        func_0x00010161ef18(&uStack_170,auStack_188);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036308cc;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036307e4:
          func_0x00010161ef18(&uStack_150,auStack_188);
          puVar3 = &uStack_170;
          puVar4 = auStack_188;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1036307f8;
        }
        func_0x00010161ef18(&uStack_150,auStack_188);
        func_0x00010161ef18(&uStack_170,auStack_188);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_1036308d4;
    }
LAB_103630518:
    func_0x00010161ef18(&uStack_90,&uStack_d0);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_1036307f8:
    func_0x00010161ef18(puVar3,puVar4);
    func_0x000101553ccc(uVar7,uVar6,uVar2);
  }
LAB_1036308cc:
  func_0x000101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_1036308d4:
  return uVar1 & 1;
}



/* Entry: 1036300a4; end: 1036300d3;  */

undefined1  [16] FUN_1036300a4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1036300d4; end: 103630107;  */

void FUN_1036300d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103630108; end: 10363011b;  */

undefined8 FUN_103630108(void)

{
  return 0x103630118;
}



/* Entry: 10363011c; end: 10363012f;  */

void FUN_10363011c(void)

{
  FUN_10362fc74();
  return;
}



/* Entry: 103630130; end: 103630177;  */

void FUN_103630130(void)

{
  FUN_10362fd8c();
  return;
}



/* Entry: 103630178; end: 10363017b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103630178(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10363017c; end: 1036301b3;  */

uint FUN_10363017c(long param_1,long param_2)

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
  FUN_103631124();
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



/* Entry: 1036301b4; end: 10363021b;  */

uint FUN_1036301b4(undefined8 *param_1)

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
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
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
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_103630488(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 10363021c; end: 1036302bb;  */

/* WARNING: Possible PIC construction at 0x000103630268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103630278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010363026c) */
/* WARNING: Removing unreachable block (ram,0x00010363027c) */

void FUN_10363021c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f80f20 != -1) {
    func_0x000107c61568(0x112f80f20,0x10362fc2c);
  }
  uVar5 = uRam000000011380ac38;
  uVar4 = uRam000000011380ac30;
  uVar3 = uRam000000011380ac28;
  uVar2 = uRam000000011380ac20;
  uVar1 = uRam000000011380ac18;
  *param_1 = uRam000000011380ac10;
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



/* Entry: 1036302bc; end: 1036302f7;  */

void FUN_1036302bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80f40;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80f40,&UNK_10dbefc38);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1036302f8; end: 103630423;  */

void FUN_1036302f8(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
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



/* Entry: 103630424; end: 103630487;  */

uint FUN_103630424(undefined8 *param_1,undefined8 *param_2)

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
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
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
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_103630488(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103630488; end: 1036308f7;  */

uint FUN_103630488(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 auStack_188 [3];
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
    if (0xe < uVar8 >> 0x3c) goto LAB_103630518;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103630584;
    }
    else {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_1036308ac:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
LAB_103630584:
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
        if (0xe < uVar8 >> 0x3c) goto LAB_1036305fc;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_1036308ac;
        }
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        func_0x00010161ef18(&uStack_f0,&uStack_110);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036308cc;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036305fc:
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1036307f8;
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
        if (0xe < uVar8 >> 0x3c) goto LAB_1036306f0;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_1036308ac;
        }
        func_0x00010161ef18(&uStack_110,&uStack_150);
        func_0x00010161ef18(&uStack_130,&uStack_150);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036308cc;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036306f0:
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1036307f8;
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
        if (0xe < uVar8 >> 0x3c) goto LAB_1036307e4;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_150,auStack_188);
          puVar3 = &uStack_170;
          puVar4 = auStack_188;
          goto LAB_1036308ac;
        }
        func_0x00010161ef18(&uStack_150,auStack_188);
        func_0x00010161ef18(&uStack_170,auStack_188);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_1036308cc;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036307e4:
          func_0x00010161ef18(&uStack_150,auStack_188);
          puVar3 = &uStack_170;
          puVar4 = auStack_188;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_1036307f8;
        }
        func_0x00010161ef18(&uStack_150,auStack_188);
        func_0x00010161ef18(&uStack_170,auStack_188);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_1036308d4;
    }
LAB_103630518:
    func_0x00010161ef18(&uStack_90,&uStack_d0);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_1036307f8:
    func_0x00010161ef18(puVar3,puVar4);
    func_0x000101553ccc(uVar7,uVar6,uVar2);
  }
LAB_1036308cc:
  func_0x000101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_1036308d4:
  return uVar1 & 1;
}



/* Entry: 1036308f8; end: 103630937;  */

void FUN_1036308f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbefb68;
  func_0x000107c61520(&UNK_10dbefb68,&UNK_110673210);
  puRam0000000112f80f28 = puVar1;
  return;
}



/* Entry: 103630938; end: 10363095b;  */

void FUN_103630938(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363095c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10363095c; end: 10363099b;  */

void FUN_10363095c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbefb40;
  func_0x000107c61520(&UNK_10dbefb40,&UNK_110673210);
  puRam0000000112f80f30 = puVar1;
  return;
}



/* Entry: 10363099c; end: 1036309c7;  */

void FUN_10363099c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036308f8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e0db8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036309c8; end: 1036309cb;  */

void FUN_1036309c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbefba8;
  func_0x000107c61520(&UNK_10dbefba8,&UNK_110673210);
  puRam0000000112f80f38 = puVar1;
  return;
}



/* Entry: 1036309cc; end: 103630a0b;  */

void FUN_1036309cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbefba8;
  func_0x000107c61520(&UNK_10dbefba8,&UNK_110673210);
  puRam0000000112f80f38 = puVar1;
  return;
}



/* Entry: 103630a0c; end: 103630ac7;  */

long FUN_103630a0c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103630ac8; end: 103631053;  */

undefined8 * FUN_103630ac8(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103631054; end: 103631123;  */

int FUN_103631054(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103631124; end: 1036311ab;  */

void FUN_103631124(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbefb14;
  func_0x000107c61520(&DAT_10dbefb14,&UNK_110673210);
  puRam0000000112f80f48 = puVar1;
  return;
}



/* Entry: 1036311ac; end: 103631323;  */

/* WARNING: Removing unreachable block (ram,0x0001036312e8) */

void FUN_1036311ac(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      puVar3 = &UNK_110790a00;
      if (lVar1 < 4) {
        if (lVar1 != 1) {
          if (lVar1 == 2) {
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
            lVar2 = unaff_x20 + 0x18;
          }
          else {
            if (lVar1 != 3) goto LAB_103631248;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
            lVar2 = unaff_x20 + 0x30;
          }
          goto LAB_103631234;
        }
        (**(code **)(param_3 + 0x60))();
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x48;
          puVar3 = &UNK_110790c80;
        }
        else if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x68;
        }
        else {
          if (lVar1 != 6) goto LAB_103631248;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x80;
          puVar3 = &UNK_110790c00;
        }
LAB_103631234:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_103631248:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103631324; end: 1036313ff;  */

void FUN_103631324(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((*unaff_x20 == 0) ||
      ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_103631400(), unaff_x21 == 0)) {
    FUN_103631488();
    FUN_103631510();
    FUN_103631594();
    FUN_10363161c();
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 103631400; end: 103631487;  */

void FUN_103631400(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x28);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103631488; end: 10363150f;  */

void FUN_103631488(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x40);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,3,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103631510; end: 103631593;  */

void FUN_103631510(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x50);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    uStack_48 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,4,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103631594; end: 10363161b;  */

void FUN_103631594(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,5,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363161c; end: 1036316a3;  */

void FUN_10363161c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x80);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x90);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,6,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036316a4; end: 10363170b;  */

uint FUN_1036316a4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_1c8 [24];
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  long lStack_180;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
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
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar10 = param_1[4];
  lVar6 = param_1[3];
  uVar5 = param_1[5];
  uVar11 = param_2[4];
  lVar9 = param_2[3];
  uVar8 = param_2[5];
  lStack_b0 = lVar9;
  uStack_a8 = uVar11;
  uStack_a0 = uVar8;
  lStack_90 = lVar6;
  uStack_88 = uVar10;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_103631de4;
    if (lVar6 == lVar9) {
      FUN_103631b74(&lStack_90,&uStack_110,0x112db6f48,&UNK_10d969b40);
      FUN_103631b74(&lStack_b0,&uStack_110,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,uVar5,uVar11,uVar8);
      func_0x00010159fa64(lVar6,uVar11,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103631c70;
    }
    else {
      FUN_103631b74(&lStack_90,&uStack_110,0x112db6f48,&UNK_10d969b40);
      lVar12 = -0xa0;
LAB_103631fac:
      plVar3 = (long *)(&stack0xfffffffffffffff0 + lVar12);
      puVar4 = &uStack_110;
LAB_103631fb0:
      FUN_103631b74(plVar3,puVar4,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(lVar9,uVar11,uVar8);
    }
LAB_103631fd8:
    func_0x00010159fa64(lVar6,uVar10,uVar5);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_103631de4:
      FUN_103631b74(&lStack_90,&uStack_110,0x112db6f48,&UNK_10d969b40);
      lVar12 = -0xa0;
      uVar2 = uVar5;
      uVar7 = uVar10;
      lVar13 = lVar6;
      uVar5 = uVar8;
      uVar10 = uVar11;
      lVar6 = lVar9;
LAB_103631eb8:
      plVar3 = (long *)(&stack0xfffffffffffffff0 + lVar12);
      puVar4 = &uStack_110;
LAB_103631ebc:
      FUN_103631b74(plVar3,puVar4,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(lVar13,uVar7,uVar2);
      goto LAB_103631fd8;
    }
    FUN_103631b74(&lStack_90,&uStack_110,0x112db6f48,&UNK_10d969b40);
    FUN_103631b74(&lStack_b0,&uStack_110,0x112db6f48,&UNK_10d969b40);
LAB_103631c70:
    func_0x00010159fa64(lVar6,uVar10,uVar5);
    uVar10 = param_1[7];
    lVar6 = param_1[6];
    uVar5 = param_1[8];
    uVar11 = param_2[7];
    lVar9 = param_2[6];
    uVar8 = param_2[8];
    lStack_f0 = lVar9;
    uStack_e8 = uVar11;
    uStack_e0 = uVar8;
    lStack_d0 = lVar6;
    uStack_c8 = uVar10;
    uStack_c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103631e90;
      if (lVar6 != lVar9) {
        FUN_103631b74(&lStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        lVar12 = -0xe0;
        goto LAB_103631fac;
      }
      FUN_103631b74(&lStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
      FUN_103631b74(&lStack_f0,&uStack_110,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,uVar5,uVar11,uVar8);
      func_0x00010159fa64(lVar6,uVar11,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_103631fd8;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103631e90:
        FUN_103631b74(&lStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        lVar12 = -0xe0;
        uVar2 = uVar5;
        uVar7 = uVar10;
        lVar13 = lVar6;
        uVar5 = uVar8;
        uVar10 = uVar11;
        lVar6 = lVar9;
        goto LAB_103631eb8;
      }
      FUN_103631b74(&lStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
      FUN_103631b74(&lStack_f0,&uStack_110,0x112db6f48,&UNK_10d969b40);
    }
    func_0x00010159fa64(lVar6,uVar10,uVar5);
    lVar6 = param_1[10];
    uVar5 = param_1[9];
    lVar9 = param_1[0xc];
    uVar10 = param_1[0xb];
    lVar12 = param_2[10];
    uVar8 = param_2[9];
    lVar13 = param_2[0xc];
    uVar11 = param_2[0xb];
    uStack_130 = uVar8;
    lStack_128 = lVar12;
    uStack_120 = uVar11;
    lStack_118 = lVar13;
    uStack_110 = uVar5;
    lStack_108 = lVar6;
    uStack_100 = uVar10;
    lStack_f8 = lVar9;
    if (lVar6 == 0) {
      if (lVar12 != 0) goto LAB_103632008;
      FUN_103631b74(&uStack_110,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
      FUN_103631b74(&uStack_130,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
LAB_1036320a4:
      func_0x000101597ae4(uVar5,lVar6,uVar10,lVar9);
      uVar10 = param_1[0xe];
      lVar6 = param_1[0xd];
      uVar5 = param_1[0xf];
      uVar11 = param_2[0xe];
      lVar9 = param_2[0xd];
      uVar8 = param_2[0xf];
      lStack_1b0 = lVar6;
      uStack_1a8 = uVar10;
      uStack_1a0 = uVar5;
      lStack_150 = lVar9;
      uStack_148 = uVar11;
      uStack_140 = uVar8;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1036321f0;
        if (lVar6 != lVar9) {
          FUN_103631b74(&lStack_1b0,&uStack_170,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_150;
          puVar4 = &uStack_170;
          goto LAB_103631fb0;
        }
        FUN_103631b74(&lStack_1b0,&uStack_170,0x112db6f48,&UNK_10d969b40);
        FUN_103631b74(&lStack_150,&uStack_170,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar5,uVar11,uVar8);
        func_0x00010159fa64(lVar6,uVar11,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_103631fd8;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036321f0:
          FUN_103631b74(&lStack_1b0,&uStack_170,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_150;
          puVar4 = &uStack_170;
          uVar2 = uVar5;
          uVar7 = uVar10;
          lVar13 = lVar6;
          uVar5 = uVar8;
          uVar10 = uVar11;
          lVar6 = lVar9;
          goto LAB_103631ebc;
        }
        FUN_103631b74(&lStack_1b0,&uStack_170,0x112db6f48,&UNK_10d969b40);
        FUN_103631b74(&lStack_150,&uStack_170,0x112db6f48,&UNK_10d969b40);
      }
      func_0x00010159fa64(lVar6,uVar10,uVar5);
      uVar10 = param_1[0x11];
      uVar5 = param_1[0x10];
      lVar6 = param_1[0x12];
      uVar11 = param_2[0x11];
      uVar8 = param_2[0x10];
      lVar9 = param_2[0x12];
      uStack_190 = uVar8;
      uStack_188 = uVar11;
      lStack_180 = lVar9;
      uStack_170 = uVar5;
      uStack_168 = uVar10;
      lStack_160 = lVar6;
      if ((uVar5 & 0xff) == 2) {
        if ((uVar8 & 0xff) == 2) {
          FUN_103631b74(&uStack_170,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          FUN_103631b74(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
LAB_1036321c4:
          func_0x000101556278(uVar5,uVar10,lVar6);
          lVar6 = param_1[1];
          func_0x000100e25fcc(lVar6,param_1[2],param_2[1],param_2[2]);
          uVar1 = (uint)lVar6;
          goto LAB_103631fe0;
        }
LAB_1036322fc:
        FUN_103631b74(&uStack_170,auStack_1c8,0x112db94f0,&UNK_10d96af00);
        FUN_103631b74(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar5,uVar10,lVar6);
        uVar5 = uVar8;
        uVar10 = uVar11;
        lVar6 = lVar9;
      }
      else {
        if ((uVar8 & 0xff) == 2) goto LAB_1036322fc;
        if ((((uint)uVar8 ^ (uint)uVar5) & 1) == 0) {
          FUN_103631b74(&uStack_170,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          FUN_103631b74(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          uVar2 = uVar10;
          func_0x000100e25fcc(uVar10,lVar6,uVar11,lVar9);
          func_0x000101556278(uVar8,uVar11,lVar9);
          if ((uVar2 & 1) != 0) goto LAB_1036321c4;
        }
        else {
          FUN_103631b74(&uStack_170,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          FUN_103631b74(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar8,uVar11,lVar9);
        }
      }
      func_0x000101556278(uVar5,uVar10,lVar6);
    }
    else {
      if (lVar12 == 0) {
LAB_103632008:
        FUN_103631b74(&uStack_110,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        FUN_103631b74(&uStack_130,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar5,lVar6,uVar10,lVar9);
        uVar5 = uVar8;
        lVar6 = lVar12;
        uVar10 = uVar11;
        lVar9 = lVar13;
      }
      else if (((uVar5 == uVar8) && (lVar6 == lVar12)) ||
              (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar6,uVar8,lVar12,0), (uVar2 & 1) != 0)) {
        FUN_103631b74(&uStack_110,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        FUN_103631b74(&uStack_130,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,lVar9,uVar11,lVar13);
        func_0x000101597ae4(uVar8,lVar12,uVar11,lVar13);
        if ((uVar2 & 1) != 0) goto LAB_1036320a4;
      }
      else {
        FUN_103631b74(&uStack_110,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        FUN_103631b74(&uStack_130,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar8,lVar12,uVar11,lVar13);
      }
      func_0x000101597ae4(uVar5,lVar6,uVar10,lVar9);
    }
  }
  uVar1 = 0;
LAB_103631fe0:
  return uVar1 & 1;
}



/* Entry: 10363170c; end: 10363173b;  */

undefined1  [16] FUN_10363170c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10363173c; end: 10363176f;  */

void FUN_10363173c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 103631770; end: 103631783;  */

undefined1  [16] FUN_103631770(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x103631780;
  return auVar1;
}



/* Entry: 103631784; end: 103631797;  */

void FUN_103631784(void)

{
  FUN_1036311ac();
  return;
}



/* Entry: 103631798; end: 1036317ef;  */

void FUN_103631798(void)

{
  FUN_103631324();
  return;
}



/* Entry: 1036317f0; end: 1036317f3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1036317f0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1036317f4; end: 10363182b;  */

uint FUN_1036317f4(long param_1,long param_2)

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
  FUN_103632dd0();
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



/* Entry: 10363182c; end: 1036318bb;  */

uint FUN_10363182c(undefined8 *param_1)

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
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
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
  FUN_103631bbc(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 1036318bc; end: 10363195b;  */

/* WARNING: Possible PIC construction at 0x000103631908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103631918: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010363190c) */
/* WARNING: Removing unreachable block (ram,0x00010363191c) */

void FUN_1036318bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f80f50 != -1) {
    func_0x000107c61568(0x112f80f50,0x103631164);
  }
  uVar5 = uRam000000011380ac68;
  uVar4 = uRam000000011380ac60;
  uVar3 = uRam000000011380ac58;
  uVar2 = uRam000000011380ac50;
  uVar1 = uRam000000011380ac48;
  *param_1 = uRam000000011380ac40;
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



/* Entry: 10363195c; end: 103631997;  */

void FUN_10363195c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80f70;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80f70,&UNK_10dbefdd0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103631998; end: 103631ae3;  */

void FUN_103631998(undefined8 param_1,undefined8 param_2)

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
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
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



/* Entry: 103631ae4; end: 103631b73;  */

uint FUN_103631ae4(undefined8 *param_1,undefined8 *param_2)

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
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
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
  FUN_103631bbc(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103631b74; end: 103631bbb;  */

undefined8 FUN_103631b74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103631bbc; end: 103632457;  */

uint FUN_103631bbc(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_1c8 [24];
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  long lStack_180;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
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
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar10 = param_1[4];
  lVar6 = param_1[3];
  uVar5 = param_1[5];
  uVar11 = param_2[4];
  lVar9 = param_2[3];
  uVar8 = param_2[5];
  lStack_b0 = lVar9;
  uStack_a8 = uVar11;
  uStack_a0 = uVar8;
  lStack_90 = lVar6;
  uStack_88 = uVar10;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_103631de4;
    if (lVar6 == lVar9) {
      FUN_103631b74(&lStack_90,&uStack_110,0x112db6f48,&UNK_10d969b40);
      FUN_103631b74(&lStack_b0,&uStack_110,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,uVar5,uVar11,uVar8);
      func_0x00010159fa64(lVar6,uVar11,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103631c70;
    }
    else {
      FUN_103631b74(&lStack_90,&uStack_110,0x112db6f48,&UNK_10d969b40);
      lVar12 = -0xa0;
LAB_103631fac:
      plVar3 = (long *)(&stack0xfffffffffffffff0 + lVar12);
      puVar4 = &uStack_110;
LAB_103631fb0:
      FUN_103631b74(plVar3,puVar4,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(lVar9,uVar11,uVar8);
    }
LAB_103631fd8:
    func_0x00010159fa64(lVar6,uVar10,uVar5);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_103631de4:
      FUN_103631b74(&lStack_90,&uStack_110,0x112db6f48,&UNK_10d969b40);
      lVar12 = -0xa0;
      uVar2 = uVar5;
      uVar7 = uVar10;
      lVar13 = lVar6;
      uVar5 = uVar8;
      uVar10 = uVar11;
      lVar6 = lVar9;
LAB_103631eb8:
      plVar3 = (long *)(&stack0xfffffffffffffff0 + lVar12);
      puVar4 = &uStack_110;
LAB_103631ebc:
      FUN_103631b74(plVar3,puVar4,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(lVar13,uVar7,uVar2);
      goto LAB_103631fd8;
    }
    FUN_103631b74(&lStack_90,&uStack_110,0x112db6f48,&UNK_10d969b40);
    FUN_103631b74(&lStack_b0,&uStack_110,0x112db6f48,&UNK_10d969b40);
LAB_103631c70:
    func_0x00010159fa64(lVar6,uVar10,uVar5);
    uVar10 = param_1[7];
    lVar6 = param_1[6];
    uVar5 = param_1[8];
    uVar11 = param_2[7];
    lVar9 = param_2[6];
    uVar8 = param_2[8];
    lStack_f0 = lVar9;
    uStack_e8 = uVar11;
    uStack_e0 = uVar8;
    lStack_d0 = lVar6;
    uStack_c8 = uVar10;
    uStack_c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103631e90;
      if (lVar6 != lVar9) {
        FUN_103631b74(&lStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        lVar12 = -0xe0;
        goto LAB_103631fac;
      }
      FUN_103631b74(&lStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
      FUN_103631b74(&lStack_f0,&uStack_110,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar10;
      func_0x000100e25fcc(uVar10,uVar5,uVar11,uVar8);
      func_0x00010159fa64(lVar6,uVar11,uVar8);
      if ((uVar2 & 1) == 0) goto LAB_103631fd8;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103631e90:
        FUN_103631b74(&lStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        lVar12 = -0xe0;
        uVar2 = uVar5;
        uVar7 = uVar10;
        lVar13 = lVar6;
        uVar5 = uVar8;
        uVar10 = uVar11;
        lVar6 = lVar9;
        goto LAB_103631eb8;
      }
      FUN_103631b74(&lStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
      FUN_103631b74(&lStack_f0,&uStack_110,0x112db6f48,&UNK_10d969b40);
    }
    func_0x00010159fa64(lVar6,uVar10,uVar5);
    lVar6 = param_1[10];
    uVar5 = param_1[9];
    lVar9 = param_1[0xc];
    uVar10 = param_1[0xb];
    lVar12 = param_2[10];
    uVar8 = param_2[9];
    lVar13 = param_2[0xc];
    uVar11 = param_2[0xb];
    uStack_130 = uVar8;
    lStack_128 = lVar12;
    uStack_120 = uVar11;
    lStack_118 = lVar13;
    uStack_110 = uVar5;
    lStack_108 = lVar6;
    uStack_100 = uVar10;
    lStack_f8 = lVar9;
    if (lVar6 == 0) {
      if (lVar12 != 0) goto LAB_103632008;
      FUN_103631b74(&uStack_110,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
      FUN_103631b74(&uStack_130,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
LAB_1036320a4:
      func_0x000101597ae4(uVar5,lVar6,uVar10,lVar9);
      uVar10 = param_1[0xe];
      lVar6 = param_1[0xd];
      uVar5 = param_1[0xf];
      uVar11 = param_2[0xe];
      lVar9 = param_2[0xd];
      uVar8 = param_2[0xf];
      lStack_1b0 = lVar6;
      uStack_1a8 = uVar10;
      uStack_1a0 = uVar5;
      lStack_150 = lVar9;
      uStack_148 = uVar11;
      uStack_140 = uVar8;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_1036321f0;
        if (lVar6 != lVar9) {
          FUN_103631b74(&lStack_1b0,&uStack_170,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_150;
          puVar4 = &uStack_170;
          goto LAB_103631fb0;
        }
        FUN_103631b74(&lStack_1b0,&uStack_170,0x112db6f48,&UNK_10d969b40);
        FUN_103631b74(&lStack_150,&uStack_170,0x112db6f48,&UNK_10d969b40);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar5,uVar11,uVar8);
        func_0x00010159fa64(lVar6,uVar11,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_103631fd8;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_1036321f0:
          FUN_103631b74(&lStack_1b0,&uStack_170,0x112db6f48,&UNK_10d969b40);
          plVar3 = &lStack_150;
          puVar4 = &uStack_170;
          uVar2 = uVar5;
          uVar7 = uVar10;
          lVar13 = lVar6;
          uVar5 = uVar8;
          uVar10 = uVar11;
          lVar6 = lVar9;
          goto LAB_103631ebc;
        }
        FUN_103631b74(&lStack_1b0,&uStack_170,0x112db6f48,&UNK_10d969b40);
        FUN_103631b74(&lStack_150,&uStack_170,0x112db6f48,&UNK_10d969b40);
      }
      func_0x00010159fa64(lVar6,uVar10,uVar5);
      uVar10 = param_1[0x11];
      uVar5 = param_1[0x10];
      lVar6 = param_1[0x12];
      uVar11 = param_2[0x11];
      uVar8 = param_2[0x10];
      lVar9 = param_2[0x12];
      uStack_190 = uVar8;
      uStack_188 = uVar11;
      lStack_180 = lVar9;
      uStack_170 = uVar5;
      uStack_168 = uVar10;
      lStack_160 = lVar6;
      if ((uVar5 & 0xff) == 2) {
        if ((uVar8 & 0xff) == 2) {
          FUN_103631b74(&uStack_170,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          FUN_103631b74(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
LAB_1036321c4:
          func_0x000101556278(uVar5,uVar10,lVar6);
          lVar6 = param_1[1];
          func_0x000100e25fcc(lVar6,param_1[2],param_2[1],param_2[2]);
          uVar1 = (uint)lVar6;
          goto LAB_103631fe0;
        }
LAB_1036322fc:
        FUN_103631b74(&uStack_170,auStack_1c8,0x112db94f0,&UNK_10d96af00);
        FUN_103631b74(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar5,uVar10,lVar6);
        uVar5 = uVar8;
        uVar10 = uVar11;
        lVar6 = lVar9;
      }
      else {
        if ((uVar8 & 0xff) == 2) goto LAB_1036322fc;
        if ((((uint)uVar8 ^ (uint)uVar5) & 1) == 0) {
          FUN_103631b74(&uStack_170,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          FUN_103631b74(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          uVar2 = uVar10;
          func_0x000100e25fcc(uVar10,lVar6,uVar11,lVar9);
          func_0x000101556278(uVar8,uVar11,lVar9);
          if ((uVar2 & 1) != 0) goto LAB_1036321c4;
        }
        else {
          FUN_103631b74(&uStack_170,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          FUN_103631b74(&uStack_190,auStack_1c8,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar8,uVar11,lVar9);
        }
      }
      func_0x000101556278(uVar5,uVar10,lVar6);
    }
    else {
      if (lVar12 == 0) {
LAB_103632008:
        FUN_103631b74(&uStack_110,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        FUN_103631b74(&uStack_130,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar5,lVar6,uVar10,lVar9);
        uVar5 = uVar8;
        lVar6 = lVar12;
        uVar10 = uVar11;
        lVar9 = lVar13;
      }
      else if (((uVar5 == uVar8) && (lVar6 == lVar12)) ||
              (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar6,uVar8,lVar12,0), (uVar2 & 1) != 0)) {
        FUN_103631b74(&uStack_110,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        FUN_103631b74(&uStack_130,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,lVar9,uVar11,lVar13);
        func_0x000101597ae4(uVar8,lVar12,uVar11,lVar13);
        if ((uVar2 & 1) != 0) goto LAB_1036320a4;
      }
      else {
        FUN_103631b74(&uStack_110,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        FUN_103631b74(&uStack_130,&lStack_1b0,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar8,lVar12,uVar11,lVar13);
      }
      func_0x000101597ae4(uVar5,lVar6,uVar10,lVar9);
    }
  }
  uVar1 = 0;
LAB_103631fe0:
  return uVar1 & 1;
}



/* Entry: 103632458; end: 103632497;  */

void FUN_103632458(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbefd08;
  func_0x000107c61520(&UNK_10dbefd08,&UNK_1106733c8);
  puRam0000000112f80f58 = puVar1;
  return;
}



/* Entry: 103632498; end: 1036324bb;  */

void FUN_103632498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036324bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1036324bc; end: 1036324fb;  */

void FUN_1036324bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbefce0;
  func_0x000107c61520(&UNK_10dbefce0,&UNK_1106733c8);
  puRam0000000112f80f60 = puVar1;
  return;
}



/* Entry: 1036324fc; end: 103632527;  */

void FUN_1036324fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103632458();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e0e38();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103632528; end: 10363252b;  */

void FUN_103632528(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbefd48;
  func_0x000107c61520(&UNK_10dbefd48,&UNK_1106733c8);
  puRam0000000112f80f68 = puVar1;
  return;
}



/* Entry: 10363252c; end: 10363256b;  */

void FUN_10363252c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbefd48;
  func_0x000107c61520(&UNK_10dbefd48,&UNK_1106733c8);
  puRam0000000112f80f68 = puVar1;
  return;
}



/* Entry: 10363256c; end: 103632637;  */

long FUN_10363256c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103632638; end: 103632ceb;  */

undefined8 * FUN_103632638(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  uVar4 = param_2[2];
  func_0x00010006c00c(uVar5,uVar4);
  param_1[1] = uVar5;
  param_1[2] = uVar4;
  uVar3 = param_2[5];
  if (uVar3 >> 0x3c < 0xf) {
    uVar5 = param_2[4];
    param_1[3] = param_2[3];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[4] = uVar5;
    param_1[5] = uVar3;
  }
  else {
    uVar5 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar5;
    param_1[5] = param_2[5];
  }
  uVar3 = param_2[8];
  if (uVar3 >> 0x3c < 0xf) {
    uVar5 = param_2[7];
    param_1[6] = param_2[6];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[7] = uVar5;
    param_1[8] = uVar3;
    lVar2 = param_2[10];
  }
  else {
    uVar5 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
    param_1[8] = param_2[8];
    lVar2 = param_2[10];
  }
  if (lVar2 == 0) {
    uVar5 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar5;
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
  }
  else {
    param_1[9] = param_2[9];
    param_1[10] = lVar2;
    uVar5 = param_2[0xb];
    uVar4 = param_2[0xc];
    func_0x000107c61434();
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0xb] = uVar5;
    param_1[0xc] = uVar4;
  }
  uVar3 = param_2[0xf];
  if (uVar3 >> 0x3c < 0xf) {
    uVar5 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    func_0x00010006c00c(uVar5,uVar3);
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar3;
  }
  else {
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    param_1[0xf] = param_2[0xf];
  }
  cVar1 = *(char *)(param_2 + 0x10);
  if (cVar1 == '\x02') {
    uVar5 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar5;
    param_1[0x12] = param_2[0x12];
  }
  else {
    *(char *)(param_1 + 0x10) = cVar1;
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x12];
    func_0x00010006c00c(uVar5,uVar4);
    param_1[0x11] = uVar5;
    param_1[0x12] = uVar4;
  }
  return param_1;
}



/* Entry: 103632cec; end: 103632dcf;  */

int FUN_103632cec(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x14);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103632dd0; end: 103632e0f;  */

void FUN_103632dd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbefcb4;
  func_0x000107c61520(&DAT_10dbefcb4,&UNK_1106733c8);
  puRam0000000112f80f78 = puVar1;
  return;
}



/* Entry: 103632e10; end: 103632e97;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103632e74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x000103632e78) */
/* WARNING: Removing unreachable block (ram,0x00010159fa60) */
/* WARNING: Removing unreachable block (ram,0x000100cb5b80) */
/* WARNING: Removing unreachable block (ram,0x000100cb5b90) */
/* WARNING: Removing unreachable block (ram,0x000100cb5b8c) */

void FUN_103632e10(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,char param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *puVar3;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xffffffffffffffc0;
  puVar3 = &stack0xfffffffffffffff0;
  if (param_7 == '\x01') {
    func_0x000107c61434(param_2);
    puVar1 = (undefined1 *)register0x00000008;
    param_2 = param_3;
    param_3 = param_4;
    param_4 = unaff_x19;
    param_6 = unaff_x20;
    puVar3 = unaff_x29;
  }
  else {
    func_0x000107c61434();
    unaff_x30 = 0x103632e78;
  }
  uVar2 = (uint)(param_3 >> 0x3e);
  if (uVar2 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    *(undefined8 *)(puVar1 + -0x20) = param_6;
    *(ulong *)(puVar1 + -0x18) = param_4;
    *(undefined1 **)(puVar1 + -0x10) = puVar3;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103632e98; end: 103632ec7;  */

int FUN_103632e98(long param_1)

{
  uint uVar1;
  
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0x68)) {
    uVar1 = (*(byte *)(param_1 + 0x68) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103632ec8; end: 103632f43;  */

undefined8 FUN_103632ec8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103632f44; end: 103632fe3;  */

uint FUN_103632f44(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  func_0x00010363404c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103632fe4; end: 1036330db;  */

/* WARNING: Removing unreachable block (ram,0x0001036330bc) */
/* WARNING: Removing unreachable block (ram,0x0001036330d8) */

void FUN_103632fe4(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        FUN_103633308();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_10363683c();
        (*pcVar4)(unaff_x20 + 0x48,&UNK_1106738d8,lVar1,param_2,param_3);
      }
      else if (lVar1 == 1) {
        FUN_1036330dc();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1036330dc; end: 103633307;  */

/* WARNING: Removing unreachable block (ram,0x000103633280) */

void FUN_1036330dc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  char cVar12;
  long *plVar13;
  long lVar14;
  long unaff_x21;
  code *pcVar15;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  cVar12 = (char)param_1[6];
  plVar13 = param_1;
  if ((cVar12 != '\x01') && (cVar12 != -1)) {
    lVar14 = param_1[4];
    lVar6 = param_1[5];
    lVar1 = param_1[2];
    lVar7 = param_1[3];
    lVar2 = *param_1;
    lVar8 = param_1[1];
    FUN_103632e10(lVar2,lVar8,lVar1,lVar7,lVar14,lVar6,cVar12);
    plVar13 = (long *)0x0;
    FUN_1034c74c8(0,0,0,0,0,0);
    lStack_90 = lVar2;
    lStack_88 = lVar8;
    lStack_80 = lVar1;
    lStack_78 = lVar7;
    lStack_70 = lVar14;
    lStack_68 = lVar6;
  }
  pcVar15 = *(code **)(param_4 + 0x198);
  func_0x0001035a99e8();
  (*pcVar15)(&lStack_90,&UNK_110673ce8,plVar13,param_3,param_4);
  lVar8 = lStack_68;
  lVar7 = lStack_70;
  lVar6 = lStack_78;
  lVar2 = lStack_80;
  lVar1 = lStack_88;
  lVar14 = lStack_90;
  if (unaff_x21 == 0) {
    if (lStack_90 != 0) {
      if (cVar12 == -1) {
        func_0x000107c61434(lStack_90);
        func_0x00010006c00c(lVar1,lVar2);
        func_0x00010159fa60(lVar6,lVar7,lVar8);
      }
      else {
        pcVar15 = *(code **)(param_4 + 8);
        func_0x000107c61434(lStack_90);
        func_0x00010006c00c(lVar1,lVar2);
        func_0x00010159fa60(lVar6,lVar7,lVar8);
        (*pcVar15)(param_3,param_4);
      }
      FUN_1034c74c8(lStack_90,lStack_88,lStack_80,lStack_78,lStack_70,lStack_68);
      lVar3 = *param_1;
      lVar9 = param_1[1];
      lVar4 = param_1[2];
      lVar10 = param_1[3];
      lVar5 = param_1[4];
      lVar11 = param_1[5];
      *param_1 = lVar14;
      param_1[1] = lVar1;
      param_1[2] = lVar2;
      param_1[3] = lVar6;
      param_1[4] = lVar7;
      param_1[5] = lVar8;
      lVar14 = param_1[6];
      *(undefined1 *)(param_1 + 6) = 0;
      func_0x0001034bb624(lVar3,lVar9,lVar4,lVar10,lVar5,lVar11,(char)lVar14);
      return;
    }
    lVar14 = 0;
  }
  FUN_1034c74c8(lVar14,lStack_88,lStack_80,lStack_78,lStack_70,lStack_68);
  return;
}



/* Entry: 103633308; end: 1036334bb;  */

/* WARNING: Removing unreachable block (ram,0x000103633468) */

void FUN_103633308(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  long unaff_x21;
  code *pcVar14;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  cVar11 = *(char *)(param_1 + 6);
  puVar13 = param_1;
  if (cVar11 == '\x01') {
    uVar1 = param_1[2];
    uVar6 = param_1[3];
    uVar2 = *param_1;
    lVar7 = param_1[1];
    FUN_103632e10(uVar2,lVar7,uVar1,uVar6,param_1[4],param_1[5],1);
    puVar13 = (undefined8 *)0x0;
    FUN_10363687c(0,0,0,0);
    uStack_80 = uVar2;
    lStack_78 = lVar7;
    uStack_70 = uVar1;
    uStack_68 = uVar6;
  }
  pcVar14 = *(code **)(param_4 + 0x198);
  FUN_103634960();
  (*pcVar14)(&uStack_80,&UNK_110673730,puVar13,param_3,param_4);
  uVar6 = uStack_68;
  uVar2 = uStack_70;
  lVar7 = lStack_78;
  uVar1 = uStack_80;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if (cVar11 == -1) {
      func_0x000107c61434(lStack_78);
      func_0x00010006c00c(uVar2,uVar6);
    }
    else {
      pcVar14 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_78);
      func_0x00010006c00c(uVar2,uVar6);
      (*pcVar14)(param_3,param_4);
    }
    FUN_10363687c(uStack_80,lStack_78,uStack_70,uStack_68);
    uVar3 = *param_1;
    uVar8 = param_1[1];
    uVar4 = param_1[2];
    uVar9 = param_1[3];
    uVar5 = param_1[4];
    uVar10 = param_1[5];
    *param_1 = uVar1;
    param_1[1] = lVar7;
    param_1[2] = uVar2;
    param_1[3] = uVar6;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar12 = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x0001034bb624(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar12);
  }
  else {
    FUN_10363687c(uStack_80,lStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 1036334bc; end: 103633587;  */

void FUN_1036334bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_103633588();
  if (unaff_x21 == 0) {
    puVar1 = unaff_x20;
    FUN_103633618();
    if (*(char *)(unaff_x20 + 6) == '\x01') {
      uStack_58 = unaff_x20[1];
      uStack_60 = *unaff_x20;
      uStack_48 = unaff_x20[3];
      uStack_50 = unaff_x20[2];
      pcVar2 = *(code **)(param_3 + 0x88);
      FUN_103634960();
      (*pcVar2)(&uStack_60,3,&UNK_110673730,puVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
  }
  return;
}



/* Entry: 103633588; end: 103633617;  */

void FUN_103633588(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(char *)(param_1 + 6) != '\x01') && (*(char *)(param_1 + 6) != -1)) {
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    uStack_48 = param_1[5];
    uStack_50 = param_1[4];
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035a99e8();
    (*pcVar1)(&uStack_70,1,&UNK_110673ce8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103633618; end: 1036336bf;  */

void FUN_103633618(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_2c0 [320];
  undefined1 auStack_180 [320];
  
  puVar2 = auStack_2c0;
  func_0x000107c610b4(auStack_180,param_1 + 0x48,0x140);
  iVar1 = (int)auStack_180;
  FUN_103632e98();
  if (iVar1 != 1) {
    func_0x000107c610b4(auStack_2c0,auStack_180,0x140);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_10363683c();
    (*pcVar3)(auStack_2c0,2,&UNK_1106738d8,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 1036336c0; end: 1036336c3;  */

uint FUN_1036336c0(ulong *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  char cVar7;
  undefined8 uVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auStack_dc0 [320];
  undefined1 auStack_c80 [320];
  undefined1 auStack_b40 [320];
  ulong auStack_a00 [80];
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  char cStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  char cStack_718;
  undefined1 auStack_640 [320];
  undefined1 auStack_500 [320];
  undefined1 auStack_3c0 [320];
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  char cStack_250;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  char cStack_210;
  undefined1 auStack_208 [320];
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar14 = param_1[1];
  uVar10 = *param_1;
  uVar20 = param_1[3];
  uVar18 = param_1[2];
  uVar15 = param_1[5];
  uVar11 = param_1[4];
  cVar7 = (char)param_1[6];
  uVar16 = param_2[1];
  uVar12 = *param_2;
  uVar21 = param_2[3];
  uVar19 = param_2[2];
  uVar17 = param_2[5];
  uVar13 = param_2[4];
  cVar9 = (char)param_2[6];
  uStack_280 = uVar12;
  uStack_278 = uVar16;
  uStack_270 = uVar19;
  uStack_268 = uVar21;
  uStack_260 = uVar13;
  uStack_258 = uVar17;
  cStack_250 = cVar9;
  uStack_240 = uVar10;
  uStack_238 = uVar14;
  uStack_230 = uVar18;
  uStack_228 = uVar20;
  uStack_220 = uVar11;
  uStack_218 = uVar15;
  cStack_210 = cVar7;
  if (cVar7 == -1) {
    if (cVar9 != -1) goto LAB_10363429c;
    FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
    FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
    uVar8 = 0xff;
LAB_1036343d0:
    func_0x0001034bb624(uVar10,uVar14,uVar18,uVar20,uVar11,uVar15,uVar8);
LAB_1036344f8:
    func_0x000107c610b4(auStack_3c0,param_1 + 9,0x140);
    func_0x000107c610b4(auStack_500,param_2 + 9,0x140);
    func_0x000107c610b4(&uStack_780,param_1 + 9,0x140);
    func_0x000107c610b4(auStack_640,param_2 + 9,0x140);
    iVar1 = (int)&uStack_780;
    FUN_103632e98();
    if (iVar1 == 1) {
      iVar1 = (int)auStack_640;
      FUN_103632e98();
      if (iVar1 != 1) {
LAB_1036345d8:
        func_0x000107c610b4(auStack_a00,&uStack_780,0x280);
        FUN_103632ec8(auStack_3c0,auStack_208,0x112f732c8,&UNK_10dbce9a8);
        FUN_103632ec8(auStack_500,auStack_208,0x112f732c8,&UNK_10dbce9a8);
        uVar8 = 0x112f80f88;
        puVar6 = &UNK_10dbefe70;
        puVar4 = auStack_a00;
        goto LAB_103634320;
      }
      func_0x000107c610b4(auStack_a00,&uStack_780,0x140);
      FUN_103632ec8(auStack_3c0,auStack_208,0x112f732c8,&UNK_10dbce9a8);
      FUN_103632ec8(auStack_500,auStack_208,0x112f732c8,&UNK_10dbce9a8);
      FUN_1036367fc(auStack_a00,0x112f732c8,&UNK_10dbce9a8);
    }
    else {
      func_0x000107c610b4(auStack_b40,&uStack_780,0x140);
      iVar1 = (int)auStack_640;
      FUN_103632e98();
      if (iVar1 == 1) goto LAB_1036345d8;
      func_0x000107c610b4(auStack_c80,auStack_640,0x140);
      func_0x000107c610b4(auStack_a00,auStack_640,0x140);
      func_0x000107c610b4(auStack_208,auStack_b40,0x140);
      FUN_103632ec8(auStack_3c0,auStack_dc0,0x112f732c8,&UNK_10dbce9a8);
      FUN_103632ec8(auStack_500,auStack_dc0,0x112f732c8,&UNK_10dbce9a8);
      puVar5 = auStack_208;
      FUN_103637188(puVar5,auStack_a00);
      FUN_1036367fc(auStack_c80,0x112f732c8,&UNK_10dbce9a8);
      FUN_1036367fc(&uStack_780,0x112f732c8,&UNK_10dbce9a8);
      if (((ulong)puVar5 & 1) == 0) goto LAB_103634754;
    }
    uVar10 = param_1[7];
    func_0x000100e25fcc(uVar10,param_1[8],param_2[7],param_2[8]);
    uVar2 = (uint)uVar10;
  }
  else {
    if (cVar9 == -1) {
LAB_10363429c:
      uStack_780 = uVar10;
      uStack_778 = uVar14;
      uStack_770 = uVar18;
      uStack_768 = uVar20;
      uStack_760 = uVar11;
      uStack_758 = uVar15;
      cStack_750 = cVar7;
      uStack_748 = uVar12;
      uStack_740 = uVar16;
      uStack_738 = uVar19;
      uStack_730 = uVar21;
      uStack_728 = uVar13;
      uStack_720 = uVar17;
      cStack_718 = cVar9;
      FUN_103632ec8(&uStack_240,auStack_a00,0x112f80f80,&UNK_10dbefe60);
      FUN_103632ec8(&uStack_280,auStack_a00,0x112f80f80,&UNK_10dbefe60);
      uVar8 = 0x112f80ff8;
      puVar6 = &UNK_10dbf0128;
      puVar4 = &uStack_780;
LAB_103634320:
      FUN_1036367fc(puVar4,uVar8,puVar6);
    }
    else if (cVar7 == '\x01') {
      if (cVar9 == '\x01') {
        if (((uVar10 == uVar12) && (uVar14 == uVar16)) ||
           (uVar3 = uVar10, func_0x000107c605b8(uVar10,uVar14,uVar12,uVar16,0), (uVar3 & 1) != 0)) {
          FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
          FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
          uVar3 = uVar18;
          func_0x000100e25fcc(uVar18,uVar20,uVar19,uVar21);
          uVar8 = 1;
          func_0x0001034bb624(uVar12,uVar16,uVar19,uVar21,uVar13,uVar17,1);
          if ((uVar3 & 1) != 0) goto LAB_1036343d0;
        }
        else {
          FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
          FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
          func_0x0001034bb624(uVar12,uVar16,uVar19,uVar21,uVar13,uVar17,1);
        }
        cVar7 = '\x01';
      }
      else {
        FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
        FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
LAB_10363442c:
        func_0x0001034bb624(uVar12,uVar16,uVar19,uVar21,uVar13,uVar17,cVar9);
      }
      func_0x0001034bb624(uVar10,uVar14,uVar18,uVar20,uVar11,uVar15,cVar7);
    }
    else {
      uStack_c8 = uVar10;
      uStack_c0 = uVar14;
      uStack_b8 = uVar18;
      uStack_b0 = uVar20;
      uStack_a8 = uVar11;
      uStack_a0 = uVar15;
      if (cVar9 == '\x01') {
        FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
        FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
        cVar9 = '\x01';
        goto LAB_10363442c;
      }
      uStack_98 = uVar12;
      uStack_90 = uVar16;
      uStack_88 = uVar19;
      uStack_80 = uVar21;
      uStack_78 = uVar13;
      uStack_70 = uVar17;
      FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
      FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
      puVar4 = &uStack_c8;
      FUN_10363b3fc(puVar4,&uStack_98);
      func_0x0001034bb624(uVar12,uVar16,uVar19,uVar21,uVar13,uVar17,cVar9);
      func_0x0001034bb624(uVar10,uVar14,uVar18,uVar20,uVar11,uVar15,cVar7);
      if (((ulong)puVar4 & 1) != 0) goto LAB_1036344f8;
    }
LAB_103634754:
    uVar2 = 0;
  }
  return uVar2 & 1;
}



/* Entry: 1036336c4; end: 10363371f;  */

void FUN_1036336c4(undefined8 *param_1)

{
  undefined1 auStack_160 [320];
  
  FUN_1034bb5ec(auStack_160);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0xff;
  param_1[8] = 0xc000000000000000;
  param_1[7] = 0;
  func_0x000107c610b4(param_1 + 9,auStack_160,0x140);
  return;
}



/* Entry: 103633720; end: 103633743;  */

undefined1  [16] FUN_103633720(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156960;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103633744; end: 103633773;  */

undefined1  [16] FUN_103633744(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 103633774; end: 1036337a7;  */

void FUN_103633774(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 1036337a8; end: 1036337bb;  */

undefined1  [16] FUN_1036337a8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x1036337b8;
  return auVar1;
}



/* Entry: 1036337bc; end: 1036337cf;  */

void FUN_1036337bc(void)

{
  FUN_103632fe4();
  return;
}



/* Entry: 1036337d0; end: 103633837;  */

void FUN_1036337d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_1c8 [392];
  
  func_0x000107c610b4(auStack_1c8);
  FUN_1036334bc(param_1,param_2,param_3);
  return;
}



/* Entry: 103633838; end: 10363383b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103633838(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10363383c; end: 103633873;  */

uint FUN_10363383c(long param_1,long param_2)

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
  func_0x0001036367bc();
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



/* Entry: 103633874; end: 1036338c3;  */

uint FUN_103633874(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_330 [392];
  undefined1 auStack_1a8 [392];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_1a8,param_1,0x188);
  func_0x000107c610b4(auStack_330);
  FUN_103634124(auStack_330,auStack_1a8);
  return uVar1 & 1;
}



/* Entry: 1036338c4; end: 103633963;  */

/* WARNING: Possible PIC construction at 0x000103633910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103633920: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103633914) */
/* WARNING: Removing unreachable block (ram,0x000103633924) */

void FUN_1036338c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f80f90 != -1) {
    func_0x000107c61568(0x112f80f90,0x103632f9c);
  }
  uVar5 = uRam000000011380ac98;
  uVar4 = uRam000000011380ac90;
  uVar3 = uRam000000011380ac88;
  uVar2 = uRam000000011380ac80;
  uVar1 = uRam000000011380ac78;
  *param_1 = uRam000000011380ac70;
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



/* Entry: 103633964; end: 10363399f;  */

void FUN_103633964(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80fe8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80fe8,&UNK_10dbf0100);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1036339a0; end: 103633aab;  */

void FUN_1036339a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_200 [72];
  undefined1 auStack_1b8 [392];
  
  func_0x000107c610b4(auStack_1b8);
  func_0x000107c6068c(auStack_200,0);
  func_0x000107c5fa50(auStack_200,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103633aac; end: 103633aff;  */

uint FUN_103633aac(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_330 [392];
  undefined1 auStack_1a8 [392];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_330,param_1,0x188);
  func_0x000107c610b4(auStack_1a8,param_2,0x188);
  FUN_103634124(auStack_330,auStack_1a8);
  return uVar1 & 1;
}



/* Entry: 103633b00; end: 103633b47;  */

void FUN_103633b00(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf0110,0x16,2);
  uRam000000011380aca8 = uStack_38;
  uRam000000011380aca0 = uStack_40;
  uRam000000011380acb8 = uStack_28;
  uRam000000011380acb0 = uStack_30;
  uRam000000011380acc8 = uStack_18;
  uRam000000011380acc0 = uStack_20;
  return;
}



/* Entry: 103633b48; end: 103633bcb;  */

void FUN_103633b48(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 103633bcc; end: 103633c53;  */

void FUN_103633bcc(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 103633c54; end: 103633c8f;  */

void FUN_103633c54(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 103633c90; end: 103633cbf;  */

undefined1  [16] FUN_103633c90(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103633cc0; end: 103633cf3;  */

void FUN_103633cc0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103633cf4; end: 103633d07;  */

undefined1  [16] FUN_103633cf4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103633d04;
  return auVar1;
}



/* Entry: 103633d08; end: 103633d3f;  */

void FUN_103633d08(void)

{
  FUN_103633b48();
  return;
}


