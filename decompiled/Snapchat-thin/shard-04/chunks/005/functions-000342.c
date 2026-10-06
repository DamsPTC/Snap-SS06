/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035a3b98; end: 1035a3b9b;  */

void FUN_1035a3b98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7afb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0818;
  func_0x000107c61520(&UNK_10dbe0818,&UNK_110668a98);
  puRam0000000112f7afb0 = puVar1;
  return;
}



/* Entry: 1035a3b9c; end: 1035a3bdb;  */

void FUN_1035a3b9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7afb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0818;
  func_0x000107c61520(&UNK_10dbe0818,&UNK_110668a98);
  puRam0000000112f7afb0 = puVar1;
  return;
}



/* Entry: 1035a3bdc; end: 1035a3c7b;  */

long FUN_1035a3bdc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035a3c7c; end: 1035a3d77;  */

undefined8 * FUN_1035a3c7c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  lVar1 = param_2[4];
  if (lVar1 == 0) {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
  }
  else {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = lVar1;
    func_0x000107c6157c(lVar1);
  }
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar3 = param_2[6];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[6] = uVar3;
    param_1[7] = uVar2;
    lVar1 = param_2[9];
  }
  else {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
    lVar1 = param_2[9];
  }
  if (lVar1 == 0) {
    uVar3 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    uVar3 = param_2[10];
    uVar4 = param_2[0xb];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
  }
  return param_1;
}



/* Entry: 1035a3d78; end: 1035a40b7;  */

undefined8 * FUN_1035a3d78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  uVar5 = param_2[1];
  func_0x00010006c00c(uVar2,uVar5);
  uVar4 = *param_1;
  uVar1 = param_1[1];
  *param_1 = uVar2;
  param_1[1] = uVar5;
  func_0x00010006c090(uVar4,uVar1);
  if (param_1[4] == 0) {
    if (param_2[4] == 0) {
      uVar4 = param_2[3];
      uVar2 = param_2[2];
      param_1[4] = param_2[4];
      param_1[3] = uVar4;
      param_1[2] = uVar2;
    }
    else {
      uVar2 = param_2[2];
      uVar4 = param_2[3];
      func_0x00010006c00c(uVar2,uVar4);
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      param_1[4] = param_2[4];
      func_0x000107c6157c();
    }
  }
  else if (param_2[4] == 0) {
    FUN_103510d9c(param_1 + 2);
    uVar2 = param_2[4];
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[4] = uVar2;
  }
  else {
    uVar2 = param_2[2];
    uVar5 = param_2[3];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[2];
    uVar1 = param_1[3];
    param_1[2] = uVar2;
    param_1[3] = uVar5;
    func_0x00010006c090(uVar4,uVar1);
    uVar2 = param_1[4];
    param_1[4] = param_2[4];
    func_0x000107c6157c();
    func_0x000107c61574(uVar2);
  }
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    if ((ulong)param_2[7] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
      uVar2 = param_2[6];
      uVar5 = param_2[7];
      func_0x00010006c00c(uVar2,uVar5);
      uVar4 = param_1[6];
      uVar1 = param_1[7];
      param_1[6] = uVar2;
      param_1[7] = uVar5;
      func_0x00010006c090(uVar4,uVar1);
    }
    else {
      func_0x0001015d4290(param_1 + 5);
      uVar2 = param_2[7];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      param_1[7] = uVar2;
    }
  }
  else if ((ulong)param_2[7] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    uVar4 = param_2[7];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[6] = uVar2;
    param_1[7] = uVar4;
  }
  else {
    uVar4 = param_2[6];
    uVar2 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar4;
    param_1[5] = uVar2;
  }
  lVar3 = param_1[9];
  if (lVar3 == 0) {
    if (param_2[9] == 0) {
      uVar2 = param_2[8];
      uVar5 = param_2[0xb];
      uVar4 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar2;
      param_1[0xb] = uVar5;
      param_1[10] = uVar4;
    }
    else {
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      uVar2 = param_2[10];
      uVar4 = param_2[0xb];
      func_0x000107c61434();
      func_0x00010006c00c(uVar2,uVar4);
      param_1[10] = uVar2;
      param_1[0xb] = uVar4;
    }
  }
  else if (param_2[9] == 0) {
    func_0x00010159d63c(param_1 + 8);
    uVar5 = param_2[8];
    uVar4 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar5;
    param_1[0xb] = uVar4;
    param_1[10] = uVar2;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    func_0x000107c61434();
    func_0x000107c6142c(lVar3);
    uVar2 = param_2[10];
    uVar5 = param_2[0xb];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[10];
    uVar1 = param_1[0xb];
    param_1[10] = uVar2;
    param_1[0xb] = uVar5;
    func_0x00010006c090(uVar4,uVar1);
  }
  return param_1;
}



/* Entry: 1035a40b8; end: 1035a418f;  */

int FUN_1035a40b8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035a4190; end: 1035a41cf;  */

void FUN_1035a4190(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7afc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe0784;
  func_0x000107c61520(&DAT_10dbe0784,&UNK_110668a98);
  puRam0000000112f7afc0 = puVar1;
  return;
}



/* Entry: 1035a41d0; end: 1035a4223;  */

void FUN_1035a41d0(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf000000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0xf000000000000000;
  param_1[0xf] = 2;
  param_1[0xe] = 0xf000000000000000;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0xf000000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xf000000000000000;
  return;
}



/* Entry: 1035a4224; end: 1035a426b;  */

void FUN_1035a4224(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe0a50,0xb1,2);
  uRam0000000113808f18 = uStack_38;
  uRam0000000113808f10 = uStack_40;
  uRam0000000113808f28 = uStack_28;
  uRam0000000113808f20 = uStack_30;
  uRam0000000113808f38 = uStack_18;
  uRam0000000113808f30 = uStack_20;
  return;
}



/* Entry: 1035a426c; end: 1035a4443;  */

/* WARNING: Removing unreachable block (ram,0x0001035a4440) */

void FUN_1035a426c(undefined8 param_1,long param_2,long param_3)

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
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x00010157193c();
          }
          else {
            if (lVar1 != 4) goto LAB_1035a4430;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015d5420();
          }
          goto LAB_1035a441c;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103510fbc();
          goto LAB_1035a441c;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          goto LAB_1035a441c;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar4 = *(code **)(param_3 + 0x1a0);
            FUN_1035a4f50();
          }
          else {
            if (lVar1 != 6) goto LAB_1035a4430;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015fdfec();
          }
        }
        else if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
        }
        else {
          if (lVar1 != 8) goto LAB_1035a4430;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
        }
LAB_1035a441c:
        (*pcVar4)();
      }
LAB_1035a4430:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035a4444; end: 1035a4583;  */

void FUN_1035a4444(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  FUN_1035a4584();
  if (unaff_x21 == 0) {
    FUN_1035a4604();
    FUN_1035a468c();
    plVar1 = unaff_x20;
    FUN_1035a4714();
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_1035a4f50();
      (*pcVar3)(lVar2,5,&UNK_110668fc0,plVar1,param_2,param_3);
    }
    FUN_1035a479c();
    FUN_1035a4824();
    FUN_1035a48ac();
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1035a4584; end: 1035a4603;  */

void FUN_1035a4584(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x28);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar1)(&uStack_60,1,&UNK_11066abb0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a4604; end: 1035a468b;  */

void FUN_1035a4604(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a468c; end: 1035a4713;  */

void FUN_1035a468c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x58);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,3,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a4714; end: 1035a479b;  */

void FUN_1035a4714(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x70);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,4,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a479c; end: 1035a4823;  */

void FUN_1035a479c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x78);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,6,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a4824; end: 1035a48ab;  */

void FUN_1035a4824(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,7,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a48ac; end: 1035a4933;  */

void FUN_1035a48ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xb8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xb0);
    uStack_60 = *(undefined8 *)(param_1 + 0xa8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,8,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a4934; end: 1035a49af;  */

uint FUN_1035a4934(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong auStack_248 [3];
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar9 = param_1[4];
  uVar13 = param_1[3];
  uVar5 = param_1[5];
  uVar15 = param_2[4];
  uVar7 = param_2[3];
  lVar6 = param_2[5];
  uStack_b0 = uVar7;
  uStack_a8 = uVar15;
  lStack_a0 = lVar6;
  uStack_90 = uVar13;
  uStack_88 = uVar9;
  uStack_80 = uVar5;
  if (uVar5 == 0) {
    if (lVar6 != 0) goto LAB_1035a507c;
    FUN_1035a4f08(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a4f08(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar13,uVar9,0);
LAB_1035a5120:
    uVar13 = param_1[7];
    uVar9 = param_1[6];
    uVar5 = param_1[8];
    uVar16 = param_2[7];
    uVar14 = param_2[6];
    uVar12 = param_2[8];
    uStack_f0 = uVar14;
    uStack_e8 = uVar16;
    uStack_e0 = uVar12;
    uStack_d0 = uVar9;
    uStack_c8 = uVar13;
    uStack_c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar12 >> 0x3c) goto LAB_1035a51a4;
      if ((float)uVar9 == (float)uVar14) {
        FUN_1035a4f08(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        FUN_1035a4f08(&uStack_f0,&uStack_110,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar16,uVar12);
        func_0x000100d56174(uVar14,uVar16,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_1035a524c;
      }
      else {
        uVar7 = 0x112db6358;
        puVar8 = &UNK_10d961e20;
        FUN_1035a4f08(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
LAB_1035a5694:
        FUN_1035a4f08(puVar3,puVar4,uVar7,puVar8);
        func_0x000100d56174(uVar14,uVar16,uVar12);
      }
    }
    else {
      if (0xe < uVar12 >> 0x3c) {
        FUN_1035a4f08(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        FUN_1035a4f08(&uStack_f0,&uStack_110,0x112db6358,&UNK_10d961e20);
LAB_1035a524c:
        func_0x000100d56174(uVar9,uVar13,uVar5);
        uVar13 = param_1[10];
        uVar9 = param_1[9];
        uVar5 = param_1[0xb];
        uVar16 = param_2[10];
        uVar14 = param_2[9];
        uVar12 = param_2[0xb];
        uStack_130 = uVar14;
        uStack_128 = uVar16;
        uStack_120 = uVar12;
        uStack_110 = uVar9;
        uStack_108 = uVar13;
        uStack_100 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar12 >> 0x3c) goto LAB_1035a52e0;
          if ((float)uVar9 != (float)uVar14) {
            uVar7 = 0x112db6358;
            puVar8 = &UNK_10d961e20;
            FUN_1035a4f08(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
            puVar3 = &uStack_130;
            puVar4 = &uStack_150;
            goto LAB_1035a5694;
          }
          FUN_1035a4f08(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
          FUN_1035a4f08(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar5,uVar16,uVar12);
          func_0x000100d56174(uVar14,uVar16,uVar12);
          if ((uVar2 & 1) == 0) goto LAB_1035a56bc;
        }
        else {
          if (uVar12 >> 0x3c < 0xf) {
LAB_1035a52e0:
            uVar7 = 0x112db6358;
            puVar8 = &UNK_10d961e20;
            FUN_1035a4f08(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
            puVar3 = &uStack_130;
            puVar4 = &uStack_150;
            uVar2 = uVar5;
            uVar10 = uVar13;
            uVar11 = uVar9;
            uVar5 = uVar12;
            uVar13 = uVar16;
            uVar9 = uVar14;
            goto LAB_1035a5598;
          }
          FUN_1035a4f08(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
          FUN_1035a4f08(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
        }
        func_0x000100d56174(uVar9,uVar13,uVar5);
        uVar13 = param_1[0xd];
        uVar9 = param_1[0xc];
        uVar5 = param_1[0xe];
        uVar16 = param_2[0xd];
        uVar14 = param_2[0xc];
        uVar12 = param_2[0xe];
        uStack_170 = uVar14;
        uStack_168 = uVar16;
        uStack_160 = uVar12;
        uStack_150 = uVar9;
        uStack_148 = uVar13;
        uStack_140 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar12 >> 0x3c) goto LAB_1035a556c;
          if ((int)uVar9 != (int)uVar14) {
            uVar7 = 0x112db80f8;
            puVar8 = &UNK_10d9671e0;
            FUN_1035a4f08(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_170;
            puVar4 = &uStack_190;
            goto LAB_1035a5694;
          }
          FUN_1035a4f08(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a4f08(&uStack_170,&uStack_190,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar5,uVar16,uVar12);
          func_0x000100d56174(uVar14,uVar16,uVar12);
          if ((uVar2 & 1) == 0) goto LAB_1035a56bc;
        }
        else {
          if (uVar12 >> 0x3c < 0xf) {
LAB_1035a556c:
            uVar7 = 0x112db80f8;
            puVar8 = &UNK_10d9671e0;
            FUN_1035a4f08(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_170;
            puVar4 = &uStack_190;
            uVar2 = uVar5;
            uVar10 = uVar13;
            uVar11 = uVar9;
            uVar5 = uVar12;
            uVar13 = uVar16;
            uVar9 = uVar14;
            goto LAB_1035a5598;
          }
          FUN_1035a4f08(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a4f08(&uStack_170,&uStack_190,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x000100d56174(uVar9,uVar13,uVar5);
        uVar5 = *param_1;
        FUN_1035a4e18(uVar5,*param_2);
        if ((uVar5 & 1) == 0) goto LAB_1035a56c0;
        uVar13 = param_1[0x10];
        uVar5 = param_1[0xf];
        uVar9 = param_1[0x11];
        uVar14 = param_2[0x10];
        uVar16 = param_2[0xf];
        uVar12 = param_2[0x11];
        uStack_1b0 = uVar16;
        uStack_1a8 = uVar14;
        uStack_1a0 = uVar12;
        uStack_190 = uVar5;
        uStack_188 = uVar13;
        uStack_180 = uVar9;
        if ((uVar5 & 0xff) == 2) {
          if ((uVar16 & 0xff) == 2) {
            FUN_1035a4f08(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
            FUN_1035a4f08(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
LAB_1035a54d8:
            func_0x000101556278(uVar5,uVar13,uVar9);
            uVar13 = param_1[0x13];
            uVar9 = param_1[0x12];
            uVar5 = param_1[0x14];
            uVar16 = param_2[0x13];
            uVar14 = param_2[0x12];
            uVar12 = param_2[0x14];
            uStack_1f0 = uVar14;
            uStack_1e8 = uVar16;
            uStack_1e0 = uVar12;
            uStack_1d0 = uVar9;
            uStack_1c8 = uVar13;
            uStack_1c0 = uVar5;
            if (uVar5 >> 0x3c < 0xf) {
              if (0xe < uVar12 >> 0x3c) goto LAB_1035a57a8;
              if ((float)uVar9 != (float)uVar14) {
                uVar7 = 0x112db6358;
                puVar8 = &UNK_10d961e20;
                FUN_1035a4f08(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
                puVar3 = &uStack_1f0;
                puVar4 = &uStack_210;
                goto LAB_1035a5694;
              }
              FUN_1035a4f08(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
              FUN_1035a4f08(&uStack_1f0,&uStack_210,0x112db6358,&UNK_10d961e20);
              uVar2 = uVar13;
              func_0x000100e25fcc(uVar13,uVar5,uVar16,uVar12);
              func_0x000100d56174(uVar14,uVar16,uVar12);
              if ((uVar2 & 1) == 0) goto LAB_1035a56bc;
            }
            else {
              if (uVar12 >> 0x3c < 0xf) {
LAB_1035a57a8:
                uVar7 = 0x112db6358;
                puVar8 = &UNK_10d961e20;
                FUN_1035a4f08(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
                puVar3 = &uStack_1f0;
                puVar4 = &uStack_210;
                uVar2 = uVar5;
                uVar10 = uVar13;
                uVar11 = uVar9;
                uVar5 = uVar12;
                uVar13 = uVar16;
                uVar9 = uVar14;
                goto LAB_1035a5598;
              }
              FUN_1035a4f08(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
              FUN_1035a4f08(&uStack_1f0,&uStack_210,0x112db6358,&UNK_10d961e20);
            }
            func_0x000100d56174(uVar9,uVar13,uVar5);
            uVar13 = param_1[0x16];
            uVar9 = param_1[0x15];
            uVar5 = param_1[0x17];
            uVar16 = param_2[0x16];
            uVar14 = param_2[0x15];
            uVar12 = param_2[0x17];
            uStack_230 = uVar14;
            uStack_228 = uVar16;
            uStack_220 = uVar12;
            uStack_210 = uVar9;
            uStack_208 = uVar13;
            uStack_200 = uVar5;
            if (uVar5 >> 0x3c < 0xf) {
              if (0xe < uVar12 >> 0x3c) goto LAB_1035a5978;
              if ((int)uVar9 != (int)uVar14) {
                uVar7 = 0x112db80f8;
                puVar8 = &UNK_10d9671e0;
                FUN_1035a4f08(&uStack_210,auStack_248,0x112db80f8,&UNK_10d9671e0);
                puVar3 = &uStack_230;
                puVar4 = auStack_248;
                goto LAB_1035a5694;
              }
              FUN_1035a4f08(&uStack_210,auStack_248,0x112db80f8,&UNK_10d9671e0);
              FUN_1035a4f08(&uStack_230,auStack_248,0x112db80f8,&UNK_10d9671e0);
              uVar2 = uVar13;
              func_0x000100e25fcc(uVar13,uVar5,uVar16,uVar12);
              func_0x000100d56174(uVar14,uVar16,uVar12);
              if ((uVar2 & 1) == 0) goto LAB_1035a56bc;
            }
            else {
              if (uVar12 >> 0x3c < 0xf) {
LAB_1035a5978:
                uVar7 = 0x112db80f8;
                puVar8 = &UNK_10d9671e0;
                FUN_1035a4f08(&uStack_210,auStack_248,0x112db80f8,&UNK_10d9671e0);
                puVar3 = &uStack_230;
                puVar4 = auStack_248;
                uVar2 = uVar5;
                uVar10 = uVar13;
                uVar11 = uVar9;
                uVar5 = uVar12;
                uVar13 = uVar16;
                uVar9 = uVar14;
                goto LAB_1035a5598;
              }
              FUN_1035a4f08(&uStack_210,auStack_248,0x112db80f8,&UNK_10d9671e0);
              FUN_1035a4f08(&uStack_230,auStack_248,0x112db80f8,&UNK_10d9671e0);
            }
            func_0x000100d56174(uVar9,uVar13,uVar5);
            uVar5 = param_1[1];
            func_0x000100e25fcc(uVar5,param_1[2],param_2[1],param_2[2]);
            uVar1 = (uint)uVar5;
            goto LAB_1035a56c4;
          }
LAB_1035a56f0:
          FUN_1035a4f08(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
          FUN_1035a4f08(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar5,uVar13,uVar9);
          uVar5 = uVar16;
          uVar13 = uVar14;
          uVar9 = uVar12;
        }
        else {
          if ((uVar16 & 0xff) == 2) goto LAB_1035a56f0;
          if ((((uint)uVar16 ^ (uint)uVar5) & 1) == 0) {
            FUN_1035a4f08(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
            FUN_1035a4f08(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
            uVar2 = uVar13;
            func_0x000100e25fcc(uVar13,uVar9,uVar14,uVar12);
            func_0x000101556278(uVar16,uVar14,uVar12);
            if ((uVar2 & 1) != 0) goto LAB_1035a54d8;
          }
          else {
            FUN_1035a4f08(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
            FUN_1035a4f08(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
            func_0x000101556278(uVar16,uVar14,uVar12);
          }
        }
        func_0x000101556278(uVar5,uVar13,uVar9);
        goto LAB_1035a56c0;
      }
LAB_1035a51a4:
      uVar7 = 0x112db6358;
      puVar8 = &UNK_10d961e20;
      FUN_1035a4f08(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
      puVar3 = &uStack_f0;
      puVar4 = &uStack_110;
      uVar2 = uVar5;
      uVar10 = uVar13;
      uVar11 = uVar9;
      uVar5 = uVar12;
      uVar13 = uVar16;
      uVar9 = uVar14;
LAB_1035a5598:
      FUN_1035a4f08(puVar3,puVar4,uVar7,puVar8);
      func_0x000100d56174(uVar11,uVar10,uVar2);
    }
LAB_1035a56bc:
    func_0x000100d56174(uVar9,uVar13,uVar5);
  }
  else if (lVar6 == 0) {
LAB_1035a507c:
    FUN_1035a4f08(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a4f08(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar13,uVar9,uVar5);
    func_0x00010349f458(uVar7,uVar15,lVar6);
  }
  else {
    FUN_1035a4f08(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a4f08(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    uVar12 = uVar13;
    FUN_1035d8f6c(uVar13,uVar9,uVar5,uVar7,uVar15,lVar6);
    func_0x00010349f458(uVar7,uVar15,lVar6);
    func_0x00010349f458(uVar13,uVar9,uVar5);
    if ((uVar12 & 1) != 0) goto LAB_1035a5120;
  }
LAB_1035a56c0:
  uVar1 = 0;
LAB_1035a56c4:
  return uVar1 & 1;
}



/* Entry: 1035a49b0; end: 1035a49df;  */

undefined1  [16] FUN_1035a49b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1035a49e0; end: 1035a4a13;  */

void FUN_1035a49e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1035a4a14; end: 1035a4a27;  */

undefined1  [16] FUN_1035a4a14(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1035a4a24;
  return auVar1;
}



/* Entry: 1035a4a28; end: 1035a4a3b;  */

void FUN_1035a4a28(void)

{
  FUN_1035a426c();
  return;
}



/* Entry: 1035a4a3c; end: 1035a4a93;  */

void FUN_1035a4a3c(void)

{
  FUN_1035a4444();
  return;
}



/* Entry: 1035a4a94; end: 1035a4a97;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035a4a94(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035a4a98; end: 1035a4acf;  */

uint FUN_1035a4a98(long param_1,long param_2)

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
  FUN_1035a668c();
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



/* Entry: 1035a4ad0; end: 1035a4b5f;  */

uint FUN_1035a4ad0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_28 = param_1[0x17];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_e8 = unaff_x20[0x17];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  FUN_1035a4f90(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1035a4b60; end: 1035a4bff;  */

/* WARNING: Possible PIC construction at 0x0001035a4bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035a4bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035a4bb0) */
/* WARNING: Removing unreachable block (ram,0x0001035a4bc0) */

void FUN_1035a4b60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7afc8 != -1) {
    func_0x000107c61568(0x112f7afc8,FUN_1035a4224);
  }
  uVar5 = uRam0000000113808f38;
  uVar4 = uRam0000000113808f30;
  uVar3 = uRam0000000113808f28;
  uVar2 = uRam0000000113808f20;
  uVar1 = uRam0000000113808f18;
  *param_1 = uRam0000000113808f10;
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



/* Entry: 1035a4c00; end: 1035a4c3b;  */

void FUN_1035a4c00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7aff0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7aff0,&UNK_10dbe0a48);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035a4c3c; end: 1035a4d87;  */

void FUN_1035a4c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
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
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_38 = unaff_x20[0x17];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035a4d88; end: 1035a4e17;  */

uint FUN_1035a4d88(undefined8 *param_1,undefined8 *param_2)

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
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_e8 = param_1[0x17];
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
  uStack_28 = param_2[0x17];
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
  FUN_1035a4f90(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 1035a4e18; end: 1035a4f07;  */

uint FUN_1035a4e18(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
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
        uStack_b8 = puVar4[5];
        uStack_c0 = puVar4[4];
        uStack_a8 = puVar4[7];
        uStack_b0 = puVar4[6];
        uStack_a0 = puVar4[8];
        uStack_d8 = puVar4[1];
        uStack_e0 = *puVar4;
        uStack_c8 = puVar4[3];
        uStack_d0 = puVar4[2];
        uStack_68 = puVar5[5];
        uStack_70 = puVar5[4];
        uStack_58 = puVar5[7];
        uStack_60 = puVar5[6];
        uStack_50 = puVar5[8];
        uStack_88 = puVar5[1];
        uStack_90 = *puVar5;
        uStack_78 = puVar5[3];
        uStack_80 = puVar5[2];
        FUN_1035a66cc(&uStack_e0,auStack_128);
        FUN_1035a66cc(&uStack_90,auStack_128);
        puVar1 = &uStack_e0;
        FUN_1035a79bc(puVar1,&uStack_90);
        uVar3 = (uint)puVar1;
        func_0x0001035a6708(&uStack_90);
        func_0x0001035a6708(&uStack_e0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 9;
        puVar4 = puVar4 + 9;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 1035a4f08; end: 1035a4f4f;  */

undefined8 FUN_1035a4f08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035a4f50; end: 1035a4f8f;  */

void FUN_1035a4f50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7afd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe0ca0;
  func_0x000107c61520(&DAT_10dbe0ca0,&UNK_110668fc0);
  puRam0000000112f7afd0 = puVar1;
  return;
}



/* Entry: 1035a4f90; end: 1035a5a77;  */

uint FUN_1035a4f90(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong auStack_248 [3];
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar9 = param_1[4];
  uVar13 = param_1[3];
  uVar5 = param_1[5];
  uVar15 = param_2[4];
  uVar7 = param_2[3];
  lVar6 = param_2[5];
  uStack_b0 = uVar7;
  uStack_a8 = uVar15;
  lStack_a0 = lVar6;
  uStack_90 = uVar13;
  uStack_88 = uVar9;
  uStack_80 = uVar5;
  if (uVar5 == 0) {
    if (lVar6 != 0) goto LAB_1035a507c;
    FUN_1035a4f08(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a4f08(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar13,uVar9,0);
LAB_1035a5120:
    uVar13 = param_1[7];
    uVar9 = param_1[6];
    uVar5 = param_1[8];
    uVar16 = param_2[7];
    uVar14 = param_2[6];
    uVar12 = param_2[8];
    uStack_f0 = uVar14;
    uStack_e8 = uVar16;
    uStack_e0 = uVar12;
    uStack_d0 = uVar9;
    uStack_c8 = uVar13;
    uStack_c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar12 >> 0x3c) goto LAB_1035a51a4;
      if ((float)uVar9 == (float)uVar14) {
        FUN_1035a4f08(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        FUN_1035a4f08(&uStack_f0,&uStack_110,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar16,uVar12);
        func_0x000100d56174(uVar14,uVar16,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_1035a524c;
      }
      else {
        uVar7 = 0x112db6358;
        puVar8 = &UNK_10d961e20;
        FUN_1035a4f08(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
LAB_1035a5694:
        FUN_1035a4f08(puVar3,puVar4,uVar7,puVar8);
        func_0x000100d56174(uVar14,uVar16,uVar12);
      }
    }
    else {
      if (0xe < uVar12 >> 0x3c) {
        FUN_1035a4f08(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        FUN_1035a4f08(&uStack_f0,&uStack_110,0x112db6358,&UNK_10d961e20);
LAB_1035a524c:
        func_0x000100d56174(uVar9,uVar13,uVar5);
        uVar13 = param_1[10];
        uVar9 = param_1[9];
        uVar5 = param_1[0xb];
        uVar16 = param_2[10];
        uVar14 = param_2[9];
        uVar12 = param_2[0xb];
        uStack_130 = uVar14;
        uStack_128 = uVar16;
        uStack_120 = uVar12;
        uStack_110 = uVar9;
        uStack_108 = uVar13;
        uStack_100 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar12 >> 0x3c) goto LAB_1035a52e0;
          if ((float)uVar9 != (float)uVar14) {
            uVar7 = 0x112db6358;
            puVar8 = &UNK_10d961e20;
            FUN_1035a4f08(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
            puVar3 = &uStack_130;
            puVar4 = &uStack_150;
            goto LAB_1035a5694;
          }
          FUN_1035a4f08(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
          FUN_1035a4f08(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar5,uVar16,uVar12);
          func_0x000100d56174(uVar14,uVar16,uVar12);
          if ((uVar2 & 1) == 0) goto LAB_1035a56bc;
        }
        else {
          if (uVar12 >> 0x3c < 0xf) {
LAB_1035a52e0:
            uVar7 = 0x112db6358;
            puVar8 = &UNK_10d961e20;
            FUN_1035a4f08(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
            puVar3 = &uStack_130;
            puVar4 = &uStack_150;
            uVar2 = uVar5;
            uVar10 = uVar13;
            uVar11 = uVar9;
            uVar5 = uVar12;
            uVar13 = uVar16;
            uVar9 = uVar14;
            goto LAB_1035a5598;
          }
          FUN_1035a4f08(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
          FUN_1035a4f08(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
        }
        func_0x000100d56174(uVar9,uVar13,uVar5);
        uVar13 = param_1[0xd];
        uVar9 = param_1[0xc];
        uVar5 = param_1[0xe];
        uVar16 = param_2[0xd];
        uVar14 = param_2[0xc];
        uVar12 = param_2[0xe];
        uStack_170 = uVar14;
        uStack_168 = uVar16;
        uStack_160 = uVar12;
        uStack_150 = uVar9;
        uStack_148 = uVar13;
        uStack_140 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar12 >> 0x3c) goto LAB_1035a556c;
          if ((int)uVar9 != (int)uVar14) {
            uVar7 = 0x112db80f8;
            puVar8 = &UNK_10d9671e0;
            FUN_1035a4f08(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_170;
            puVar4 = &uStack_190;
            goto LAB_1035a5694;
          }
          FUN_1035a4f08(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a4f08(&uStack_170,&uStack_190,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar5,uVar16,uVar12);
          func_0x000100d56174(uVar14,uVar16,uVar12);
          if ((uVar2 & 1) == 0) goto LAB_1035a56bc;
        }
        else {
          if (uVar12 >> 0x3c < 0xf) {
LAB_1035a556c:
            uVar7 = 0x112db80f8;
            puVar8 = &UNK_10d9671e0;
            FUN_1035a4f08(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_170;
            puVar4 = &uStack_190;
            uVar2 = uVar5;
            uVar10 = uVar13;
            uVar11 = uVar9;
            uVar5 = uVar12;
            uVar13 = uVar16;
            uVar9 = uVar14;
            goto LAB_1035a5598;
          }
          FUN_1035a4f08(&uStack_150,&uStack_190,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a4f08(&uStack_170,&uStack_190,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x000100d56174(uVar9,uVar13,uVar5);
        uVar5 = *param_1;
        FUN_1035a4e18(uVar5,*param_2);
        if ((uVar5 & 1) == 0) goto LAB_1035a56c0;
        uVar13 = param_1[0x10];
        uVar5 = param_1[0xf];
        uVar9 = param_1[0x11];
        uVar14 = param_2[0x10];
        uVar16 = param_2[0xf];
        uVar12 = param_2[0x11];
        uStack_1b0 = uVar16;
        uStack_1a8 = uVar14;
        uStack_1a0 = uVar12;
        uStack_190 = uVar5;
        uStack_188 = uVar13;
        uStack_180 = uVar9;
        if ((uVar5 & 0xff) == 2) {
          if ((uVar16 & 0xff) == 2) {
            FUN_1035a4f08(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
            FUN_1035a4f08(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
LAB_1035a54d8:
            func_0x000101556278(uVar5,uVar13,uVar9);
            uVar13 = param_1[0x13];
            uVar9 = param_1[0x12];
            uVar5 = param_1[0x14];
            uVar16 = param_2[0x13];
            uVar14 = param_2[0x12];
            uVar12 = param_2[0x14];
            uStack_1f0 = uVar14;
            uStack_1e8 = uVar16;
            uStack_1e0 = uVar12;
            uStack_1d0 = uVar9;
            uStack_1c8 = uVar13;
            uStack_1c0 = uVar5;
            if (uVar5 >> 0x3c < 0xf) {
              if (0xe < uVar12 >> 0x3c) goto LAB_1035a57a8;
              if ((float)uVar9 != (float)uVar14) {
                uVar7 = 0x112db6358;
                puVar8 = &UNK_10d961e20;
                FUN_1035a4f08(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
                puVar3 = &uStack_1f0;
                puVar4 = &uStack_210;
                goto LAB_1035a5694;
              }
              FUN_1035a4f08(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
              FUN_1035a4f08(&uStack_1f0,&uStack_210,0x112db6358,&UNK_10d961e20);
              uVar2 = uVar13;
              func_0x000100e25fcc(uVar13,uVar5,uVar16,uVar12);
              func_0x000100d56174(uVar14,uVar16,uVar12);
              if ((uVar2 & 1) == 0) goto LAB_1035a56bc;
            }
            else {
              if (uVar12 >> 0x3c < 0xf) {
LAB_1035a57a8:
                uVar7 = 0x112db6358;
                puVar8 = &UNK_10d961e20;
                FUN_1035a4f08(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
                puVar3 = &uStack_1f0;
                puVar4 = &uStack_210;
                uVar2 = uVar5;
                uVar10 = uVar13;
                uVar11 = uVar9;
                uVar5 = uVar12;
                uVar13 = uVar16;
                uVar9 = uVar14;
                goto LAB_1035a5598;
              }
              FUN_1035a4f08(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
              FUN_1035a4f08(&uStack_1f0,&uStack_210,0x112db6358,&UNK_10d961e20);
            }
            func_0x000100d56174(uVar9,uVar13,uVar5);
            uVar13 = param_1[0x16];
            uVar9 = param_1[0x15];
            uVar5 = param_1[0x17];
            uVar16 = param_2[0x16];
            uVar14 = param_2[0x15];
            uVar12 = param_2[0x17];
            uStack_230 = uVar14;
            uStack_228 = uVar16;
            uStack_220 = uVar12;
            uStack_210 = uVar9;
            uStack_208 = uVar13;
            uStack_200 = uVar5;
            if (uVar5 >> 0x3c < 0xf) {
              if (0xe < uVar12 >> 0x3c) goto LAB_1035a5978;
              if ((int)uVar9 != (int)uVar14) {
                uVar7 = 0x112db80f8;
                puVar8 = &UNK_10d9671e0;
                FUN_1035a4f08(&uStack_210,auStack_248,0x112db80f8,&UNK_10d9671e0);
                puVar3 = &uStack_230;
                puVar4 = auStack_248;
                goto LAB_1035a5694;
              }
              FUN_1035a4f08(&uStack_210,auStack_248,0x112db80f8,&UNK_10d9671e0);
              FUN_1035a4f08(&uStack_230,auStack_248,0x112db80f8,&UNK_10d9671e0);
              uVar2 = uVar13;
              func_0x000100e25fcc(uVar13,uVar5,uVar16,uVar12);
              func_0x000100d56174(uVar14,uVar16,uVar12);
              if ((uVar2 & 1) == 0) goto LAB_1035a56bc;
            }
            else {
              if (uVar12 >> 0x3c < 0xf) {
LAB_1035a5978:
                uVar7 = 0x112db80f8;
                puVar8 = &UNK_10d9671e0;
                FUN_1035a4f08(&uStack_210,auStack_248,0x112db80f8,&UNK_10d9671e0);
                puVar3 = &uStack_230;
                puVar4 = auStack_248;
                uVar2 = uVar5;
                uVar10 = uVar13;
                uVar11 = uVar9;
                uVar5 = uVar12;
                uVar13 = uVar16;
                uVar9 = uVar14;
                goto LAB_1035a5598;
              }
              FUN_1035a4f08(&uStack_210,auStack_248,0x112db80f8,&UNK_10d9671e0);
              FUN_1035a4f08(&uStack_230,auStack_248,0x112db80f8,&UNK_10d9671e0);
            }
            func_0x000100d56174(uVar9,uVar13,uVar5);
            uVar5 = param_1[1];
            func_0x000100e25fcc(uVar5,param_1[2],param_2[1],param_2[2]);
            uVar1 = (uint)uVar5;
            goto LAB_1035a56c4;
          }
LAB_1035a56f0:
          FUN_1035a4f08(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
          FUN_1035a4f08(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar5,uVar13,uVar9);
          uVar5 = uVar16;
          uVar13 = uVar14;
          uVar9 = uVar12;
        }
        else {
          if ((uVar16 & 0xff) == 2) goto LAB_1035a56f0;
          if ((((uint)uVar16 ^ (uint)uVar5) & 1) == 0) {
            FUN_1035a4f08(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
            FUN_1035a4f08(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
            uVar2 = uVar13;
            func_0x000100e25fcc(uVar13,uVar9,uVar14,uVar12);
            func_0x000101556278(uVar16,uVar14,uVar12);
            if ((uVar2 & 1) != 0) goto LAB_1035a54d8;
          }
          else {
            FUN_1035a4f08(&uStack_190,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
            FUN_1035a4f08(&uStack_1b0,&uStack_1d0,0x112db94f0,&UNK_10d96af00);
            func_0x000101556278(uVar16,uVar14,uVar12);
          }
        }
        func_0x000101556278(uVar5,uVar13,uVar9);
        goto LAB_1035a56c0;
      }
LAB_1035a51a4:
      uVar7 = 0x112db6358;
      puVar8 = &UNK_10d961e20;
      FUN_1035a4f08(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
      puVar3 = &uStack_f0;
      puVar4 = &uStack_110;
      uVar2 = uVar5;
      uVar10 = uVar13;
      uVar11 = uVar9;
      uVar5 = uVar12;
      uVar13 = uVar16;
      uVar9 = uVar14;
LAB_1035a5598:
      FUN_1035a4f08(puVar3,puVar4,uVar7,puVar8);
      func_0x000100d56174(uVar11,uVar10,uVar2);
    }
LAB_1035a56bc:
    func_0x000100d56174(uVar9,uVar13,uVar5);
  }
  else if (lVar6 == 0) {
LAB_1035a507c:
    FUN_1035a4f08(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a4f08(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar13,uVar9,uVar5);
    func_0x00010349f458(uVar7,uVar15,lVar6);
  }
  else {
    FUN_1035a4f08(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a4f08(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    uVar12 = uVar13;
    FUN_1035d8f6c(uVar13,uVar9,uVar5,uVar7,uVar15,lVar6);
    func_0x00010349f458(uVar7,uVar15,lVar6);
    func_0x00010349f458(uVar13,uVar9,uVar5);
    if ((uVar12 & 1) != 0) goto LAB_1035a5120;
  }
LAB_1035a56c0:
  uVar1 = 0;
LAB_1035a56c4:
  return uVar1 & 1;
}



/* Entry: 1035a5a78; end: 1035a5ab7;  */

void FUN_1035a5a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7afd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0970;
  func_0x000107c61520(&UNK_10dbe0970,&UNK_110668c48);
  puRam0000000112f7afd8 = puVar1;
  return;
}



/* Entry: 1035a5ab8; end: 1035a5adb;  */

void FUN_1035a5ab8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a5adc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035a5adc; end: 1035a5b1b;  */

void FUN_1035a5adc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7afe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0948;
  func_0x000107c61520(&UNK_10dbe0948,&UNK_110668c48);
  puRam0000000112f7afe0 = puVar1;
  return;
}



/* Entry: 1035a5b1c; end: 1035a5b47;  */

void FUN_1035a5b1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a5a78();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502c14();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035a5b48; end: 1035a5b4b;  */

void FUN_1035a5b48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7afe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe09b0;
  func_0x000107c61520(&UNK_10dbe09b0,&UNK_110668c48);
  puRam0000000112f7afe8 = puVar1;
  return;
}



/* Entry: 1035a5b4c; end: 1035a5b8b;  */

void FUN_1035a5b4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7afe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe09b0;
  func_0x000107c61520(&UNK_10dbe09b0,&UNK_110668c48);
  puRam0000000112f7afe8 = puVar1;
  return;
}



/* Entry: 1035a5b8c; end: 1035a5c8f;  */

long FUN_1035a5b8c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035a5c90; end: 1035a5e9b;  */

undefined8 * FUN_1035a5c90(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  uVar5 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar5);
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  lVar3 = param_2[5];
  if (lVar3 == 0) {
    uVar2 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[5] = param_2[5];
  }
  else {
    uVar2 = param_2[3];
    uVar5 = param_2[4];
    func_0x00010006c00c(uVar2,uVar5);
    param_1[3] = uVar2;
    param_1[4] = uVar5;
    param_1[5] = lVar3;
    func_0x000107c6157c(lVar3);
  }
  uVar4 = param_2[8];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    uVar2 = param_2[7];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[7] = uVar2;
    param_1[8] = uVar4;
  }
  else {
    uVar2 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[8] = param_2[8];
  }
  uVar4 = param_2[0xb];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    uVar2 = param_2[10];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[10] = uVar2;
    param_1[0xb] = uVar4;
  }
  else {
    uVar2 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    param_1[0xb] = param_2[0xb];
  }
  uVar4 = param_2[0xe];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar2 = param_2[0xd];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar4;
  }
  else {
    uVar2 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xe] = param_2[0xe];
  }
  cVar1 = *(char *)(param_2 + 0xf);
  if (cVar1 == '\x02') {
    uVar2 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar2;
    param_1[0x11] = param_2[0x11];
  }
  else {
    *(char *)(param_1 + 0xf) = cVar1;
    uVar2 = param_2[0x10];
    uVar5 = param_2[0x11];
    func_0x00010006c00c(uVar2,uVar5);
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar5;
  }
  uVar4 = param_2[0x14];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar2 = param_2[0x13];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[0x13] = uVar2;
    param_1[0x14] = uVar4;
  }
  else {
    uVar2 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x14] = param_2[0x14];
  }
  uVar4 = param_2[0x17];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
    uVar2 = param_2[0x16];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[0x16] = uVar2;
    param_1[0x17] = uVar4;
  }
  else {
    uVar2 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar2;
    param_1[0x17] = param_2[0x17];
  }
  return param_1;
}



/* Entry: 1035a5e9c; end: 1035a65c3;  */

undefined8 * FUN_1035a5e9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  func_0x00010006c00c(uVar4,uVar1);
  uVar7 = param_1[1];
  uVar2 = param_1[2];
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  func_0x00010006c090(uVar7,uVar2);
  if (param_1[5] == 0) {
    if (param_2[5] == 0) {
      uVar7 = param_2[4];
      uVar4 = param_2[3];
      param_1[5] = param_2[5];
      param_1[4] = uVar7;
      param_1[3] = uVar4;
    }
    else {
      uVar4 = param_2[3];
      uVar7 = param_2[4];
      func_0x00010006c00c(uVar4,uVar7);
      param_1[3] = uVar4;
      param_1[4] = uVar7;
      param_1[5] = param_2[5];
      func_0x000107c6157c();
    }
  }
  else if (param_2[5] == 0) {
    FUN_103510d9c(param_1 + 3);
    uVar4 = param_2[5];
    uVar7 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar7;
    param_1[5] = uVar4;
  }
  else {
    uVar4 = param_2[3];
    uVar1 = param_2[4];
    func_0x00010006c00c(uVar4,uVar1);
    uVar7 = param_1[3];
    uVar2 = param_1[4];
    param_1[3] = uVar4;
    param_1[4] = uVar1;
    func_0x00010006c090(uVar7,uVar2);
    uVar4 = param_1[5];
    param_1[5] = param_2[5];
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
  }
  if ((ulong)param_1[8] >> 0x3c < 0xf) {
    if ((ulong)param_2[8] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      uVar4 = param_2[7];
      uVar1 = param_2[8];
      func_0x00010006c00c(uVar4,uVar1);
      uVar7 = param_1[7];
      uVar2 = param_1[8];
      param_1[7] = uVar4;
      param_1[8] = uVar1;
      func_0x00010006c090(uVar7,uVar2);
    }
    else {
      func_0x000101599dcc(param_1 + 6);
      uVar4 = param_2[8];
      uVar7 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar7;
      param_1[8] = uVar4;
    }
  }
  else if ((ulong)param_2[8] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    uVar4 = param_2[7];
    uVar7 = param_2[8];
    func_0x00010006c00c(uVar4,uVar7);
    param_1[7] = uVar4;
    param_1[8] = uVar7;
  }
  else {
    uVar7 = param_2[7];
    uVar4 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar7;
    param_1[6] = uVar4;
  }
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xb] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      uVar4 = param_2[10];
      uVar1 = param_2[0xb];
      func_0x00010006c00c(uVar4,uVar1);
      uVar7 = param_1[10];
      uVar2 = param_1[0xb];
      param_1[10] = uVar4;
      param_1[0xb] = uVar1;
      func_0x00010006c090(uVar7,uVar2);
    }
    else {
      func_0x000101599dcc(param_1 + 9);
      uVar4 = param_2[0xb];
      uVar7 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar7;
      param_1[0xb] = uVar4;
    }
  }
  else if ((ulong)param_2[0xb] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    uVar4 = param_2[10];
    uVar7 = param_2[0xb];
    func_0x00010006c00c(uVar4,uVar7);
    param_1[10] = uVar4;
    param_1[0xb] = uVar7;
  }
  else {
    uVar7 = param_2[10];
    uVar4 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar7;
    param_1[9] = uVar4;
  }
  if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xe] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      uVar4 = param_2[0xd];
      uVar1 = param_2[0xe];
      func_0x00010006c00c(uVar4,uVar1);
      uVar7 = param_1[0xd];
      uVar2 = param_1[0xe];
      param_1[0xd] = uVar4;
      param_1[0xe] = uVar1;
      func_0x00010006c090(uVar7,uVar2);
    }
    else {
      func_0x0001015d4290(param_1 + 0xc);
      uVar4 = param_2[0xe];
      uVar7 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar7;
      param_1[0xe] = uVar4;
    }
  }
  else if ((ulong)param_2[0xe] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar4 = param_2[0xd];
    uVar7 = param_2[0xe];
    func_0x00010006c00c(uVar4,uVar7);
    param_1[0xd] = uVar4;
    param_1[0xe] = uVar7;
  }
  else {
    uVar7 = param_2[0xd];
    uVar4 = param_2[0xc];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar7;
    param_1[0xc] = uVar4;
  }
  pcVar5 = (char *)(param_1 + 0xf);
  pbVar6 = (byte *)(param_2 + 0xf);
  bVar3 = *pbVar6;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar7 = param_2[0x10];
      uVar4 = *(undefined8 *)pbVar6;
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar7;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 0xf) = bVar3;
      uVar4 = param_2[0x10];
      uVar7 = param_2[0x11];
      func_0x00010006c00c(uVar4,uVar7);
      param_1[0x10] = uVar4;
      param_1[0x11] = uVar7;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[0x11];
    uVar7 = *(undefined8 *)pbVar6;
    param_1[0x10] = param_2[0x10];
    *(undefined8 *)pcVar5 = uVar7;
    param_1[0x11] = uVar4;
  }
  else {
    *(byte *)(param_1 + 0xf) = bVar3 & 1;
    uVar4 = param_2[0x10];
    uVar1 = param_2[0x11];
    func_0x00010006c00c(uVar4,uVar1);
    uVar7 = param_1[0x10];
    uVar2 = param_1[0x11];
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar1;
    func_0x00010006c090(uVar7,uVar2);
  }
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x14] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      uVar4 = param_2[0x13];
      uVar1 = param_2[0x14];
      func_0x00010006c00c(uVar4,uVar1);
      uVar7 = param_1[0x13];
      uVar2 = param_1[0x14];
      param_1[0x13] = uVar4;
      param_1[0x14] = uVar1;
      func_0x00010006c090(uVar7,uVar2);
    }
    else {
      func_0x000101599dcc(param_1 + 0x12);
      uVar4 = param_2[0x14];
      uVar7 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar7;
      param_1[0x14] = uVar4;
    }
  }
  else if ((ulong)param_2[0x14] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar4 = param_2[0x13];
    uVar7 = param_2[0x14];
    func_0x00010006c00c(uVar4,uVar7);
    param_1[0x13] = uVar4;
    param_1[0x14] = uVar7;
  }
  else {
    uVar7 = param_2[0x13];
    uVar4 = param_2[0x12];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar7;
    param_1[0x12] = uVar4;
  }
  if ((ulong)param_1[0x17] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x17] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
      uVar4 = param_2[0x16];
      uVar1 = param_2[0x17];
      func_0x00010006c00c(uVar4,uVar1);
      uVar7 = param_1[0x16];
      uVar2 = param_1[0x17];
      param_1[0x16] = uVar4;
      param_1[0x17] = uVar1;
      func_0x00010006c090(uVar7,uVar2);
    }
    else {
      func_0x0001015d4290(param_1 + 0x15);
      uVar4 = param_2[0x17];
      uVar7 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar7;
      param_1[0x17] = uVar4;
    }
  }
  else if ((ulong)param_2[0x17] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
    uVar4 = param_2[0x16];
    uVar7 = param_2[0x17];
    func_0x00010006c00c(uVar4,uVar7);
    param_1[0x16] = uVar4;
    param_1[0x17] = uVar7;
  }
  else {
    uVar7 = param_2[0x16];
    uVar4 = param_2[0x15];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar7;
    param_1[0x15] = uVar4;
  }
  return param_1;
}



/* Entry: 1035a65c4; end: 1035a668b;  */

int FUN_1035a65c4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035a668c; end: 1035a66cb;  */

void FUN_1035a668c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7aff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe091c;
  func_0x000107c61520(&DAT_10dbe091c,&UNK_110668c48);
  puRam0000000112f7aff8 = puVar1;
  return;
}



/* Entry: 1035a66cc; end: 1035a6783;  */

undefined8 FUN_1035a66cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1035a83a8(param_2,param_1);
  return param_2;
}



/* Entry: 1035a6784; end: 1035a67cb;  */

void FUN_1035a6784(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe0c60,0x3b,2);
  uRam0000000113808f48 = uStack_38;
  uRam0000000113808f40 = uStack_40;
  uRam0000000113808f58 = uStack_28;
  uRam0000000113808f50 = uStack_30;
  uRam0000000113808f68 = uStack_18;
  uRam0000000113808f60 = uStack_20;
  return;
}



/* Entry: 1035a67cc; end: 1035a68af;  */

void FUN_1035a67cc(undefined8 param_1,long param_2,long param_3)

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
        func_0x000103510fbc();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_11066abb0;
LAB_1035a6854:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110790c00;
        goto LAB_1035a6854;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035a68b0; end: 1035a6923;  */

void FUN_1035a68b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035a6924();
  if (unaff_x21 == 0) {
    FUN_1035a69a4();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035a6924; end: 1035a69a3;  */

void FUN_1035a6924(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x20);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar1)(&uStack_60,1,&UNK_11066abb0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a69a4; end: 1035a6a2b;  */

void FUN_1035a69a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035a6a2c; end: 1035a6a73;  */

uint FUN_1035a6a2c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_f8 [24];
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar6 = param_1[3];
  uVar7 = param_1[2];
  lVar4 = param_1[4];
  uVar9 = param_2[3];
  uVar3 = param_2[2];
  lVar5 = param_2[4];
  uStack_a0 = uVar3;
  uStack_98 = uVar9;
  lStack_90 = lVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar6;
  lStack_70 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_1035a6ec0;
    func_0x0001035a673c(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x0001035a673c(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,0);
LAB_1035a6f64:
    uVar10 = param_1[6];
    uVar7 = param_1[5];
    uVar3 = param_1[7];
    uVar11 = param_2[6];
    uVar8 = param_2[5];
    uVar6 = param_2[7];
    uStack_e0 = uVar8;
    uStack_d8 = uVar11;
    uStack_d0 = uVar6;
    uStack_c0 = uVar7;
    uStack_b8 = uVar10;
    uStack_b0 = uVar3;
    if ((uVar7 & 0xff) == 2) {
      if ((uVar8 & 0xff) == 2) {
        func_0x0001035a673c(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x0001035a673c(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
LAB_1035a6fdc:
        func_0x000101556278(uVar7,uVar10,uVar3);
        uVar3 = *param_1;
        func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar3;
        goto LAB_1035a7128;
      }
LAB_1035a7004:
      func_0x0001035a673c(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      func_0x0001035a673c(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar7,uVar10,uVar3);
      uVar7 = uVar8;
      uVar10 = uVar11;
      uVar3 = uVar6;
    }
    else {
      if ((uVar8 & 0xff) == 2) goto LAB_1035a7004;
      if ((((uint)uVar8 ^ (uint)uVar7) & 1) == 0) {
        func_0x0001035a673c(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x0001035a673c(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar3,uVar11,uVar6);
        func_0x000101556278(uVar8,uVar11,uVar6);
        if ((uVar2 & 1) != 0) goto LAB_1035a6fdc;
      }
      else {
        func_0x0001035a673c(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x0001035a673c(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar8,uVar11,uVar6);
      }
    }
    func_0x000101556278(uVar7,uVar10,uVar3);
  }
  else if (lVar5 == 0) {
LAB_1035a6ec0:
    func_0x0001035a673c(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x0001035a673c(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    func_0x00010349f458(uVar3,uVar9,lVar5);
  }
  else {
    func_0x0001035a673c(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x0001035a673c(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    uVar10 = uVar7;
    FUN_1035d8f6c(uVar7,uVar6,lVar4,uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    if ((uVar10 & 1) != 0) goto LAB_1035a6f64;
  }
  uVar1 = 0;
LAB_1035a7128:
  return uVar1 & 1;
}



/* Entry: 1035a6a74; end: 1035a6aa3;  */

undefined1  [16] FUN_1035a6a74(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035a6aa4; end: 1035a6ad7;  */

void FUN_1035a6aa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035a6ad8; end: 1035a6aeb;  */

undefined8 FUN_1035a6ad8(void)

{
  return 0x1035a6ae8;
}



/* Entry: 1035a6aec; end: 1035a6aff;  */

void FUN_1035a6aec(void)

{
  FUN_1035a67cc();
  return;
}



/* Entry: 1035a6b00; end: 1035a6b37;  */

void FUN_1035a6b00(void)

{
  FUN_1035a68b0();
  return;
}



/* Entry: 1035a6b38; end: 1035a6b3b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035a6b38(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035a6b3c; end: 1035a6b73;  */

uint FUN_1035a6b3c(long param_1,long param_2)

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
  FUN_1035a76d0();
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



/* Entry: 1035a6b74; end: 1035a6bbb;  */

uint FUN_1035a6b74(undefined8 *param_1)

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
  FUN_1035a6de4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035a6bbc; end: 1035a6c5b;  */

/* WARNING: Possible PIC construction at 0x0001035a6c08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035a6c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035a6c0c) */
/* WARNING: Removing unreachable block (ram,0x0001035a6c1c) */

void FUN_1035a6bbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b000 != -1) {
    func_0x000107c61568(0x112f7b000,FUN_1035a6784);
  }
  uVar5 = uRam0000000113808f68;
  uVar4 = uRam0000000113808f60;
  uVar3 = uRam0000000113808f58;
  uVar2 = uRam0000000113808f50;
  uVar1 = uRam0000000113808f48;
  *param_1 = uRam0000000113808f40;
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



/* Entry: 1035a6c5c; end: 1035a6c97;  */

void FUN_1035a6c5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7b020;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7b020,&UNK_10dbe0c58);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035a6c98; end: 1035a6d9b;  */

void FUN_1035a6c98(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1035a6d9c; end: 1035a6de3;  */

uint FUN_1035a6d9c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1035a6de4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035a6de4; end: 1035a714b;  */

uint FUN_1035a6de4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_f8 [24];
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar6 = param_1[3];
  uVar7 = param_1[2];
  lVar4 = param_1[4];
  uVar9 = param_2[3];
  uVar3 = param_2[2];
  lVar5 = param_2[4];
  uStack_a0 = uVar3;
  uStack_98 = uVar9;
  lStack_90 = lVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar6;
  lStack_70 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_1035a6ec0;
    func_0x0001035a673c(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x0001035a673c(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,0);
LAB_1035a6f64:
    uVar10 = param_1[6];
    uVar7 = param_1[5];
    uVar3 = param_1[7];
    uVar11 = param_2[6];
    uVar8 = param_2[5];
    uVar6 = param_2[7];
    uStack_e0 = uVar8;
    uStack_d8 = uVar11;
    uStack_d0 = uVar6;
    uStack_c0 = uVar7;
    uStack_b8 = uVar10;
    uStack_b0 = uVar3;
    if ((uVar7 & 0xff) == 2) {
      if ((uVar8 & 0xff) == 2) {
        func_0x0001035a673c(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x0001035a673c(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
LAB_1035a6fdc:
        func_0x000101556278(uVar7,uVar10,uVar3);
        uVar3 = *param_1;
        func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar3;
        goto LAB_1035a7128;
      }
LAB_1035a7004:
      func_0x0001035a673c(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      func_0x0001035a673c(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar7,uVar10,uVar3);
      uVar7 = uVar8;
      uVar10 = uVar11;
      uVar3 = uVar6;
    }
    else {
      if ((uVar8 & 0xff) == 2) goto LAB_1035a7004;
      if ((((uint)uVar8 ^ (uint)uVar7) & 1) == 0) {
        func_0x0001035a673c(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x0001035a673c(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        uVar2 = uVar10;
        func_0x000100e25fcc(uVar10,uVar3,uVar11,uVar6);
        func_0x000101556278(uVar8,uVar11,uVar6);
        if ((uVar2 & 1) != 0) goto LAB_1035a6fdc;
      }
      else {
        func_0x0001035a673c(&uStack_c0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x0001035a673c(&uStack_e0,auStack_f8,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar8,uVar11,uVar6);
      }
    }
    func_0x000101556278(uVar7,uVar10,uVar3);
  }
  else if (lVar5 == 0) {
LAB_1035a6ec0:
    func_0x0001035a673c(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x0001035a673c(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    func_0x00010349f458(uVar3,uVar9,lVar5);
  }
  else {
    func_0x0001035a673c(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x0001035a673c(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    uVar10 = uVar7;
    FUN_1035d8f6c(uVar7,uVar6,lVar4,uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar3,uVar9,lVar5);
    func_0x00010349f458(uVar7,uVar6,lVar4);
    if ((uVar10 & 1) != 0) goto LAB_1035a6f64;
  }
  uVar1 = 0;
LAB_1035a7128:
  return uVar1 & 1;
}



/* Entry: 1035a714c; end: 1035a718b;  */

void FUN_1035a714c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0b80;
  func_0x000107c61520(&UNK_10dbe0b80,&UNK_110668e10);
  puRam0000000112f7b008 = puVar1;
  return;
}



/* Entry: 1035a718c; end: 1035a71af;  */

void FUN_1035a718c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a71b0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035a71b0; end: 1035a71ef;  */

void FUN_1035a71b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0b58;
  func_0x000107c61520(&UNK_10dbe0b58,&UNK_110668e10);
  puRam0000000112f7b010 = puVar1;
  return;
}



/* Entry: 1035a71f0; end: 1035a721b;  */

void FUN_1035a71f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a714c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502a54();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035a721c; end: 1035a721f;  */

void FUN_1035a721c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0bc0;
  func_0x000107c61520(&UNK_10dbe0bc0,&UNK_110668e10);
  puRam0000000112f7b018 = puVar1;
  return;
}



/* Entry: 1035a7220; end: 1035a725f;  */

void FUN_1035a7220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0bc0;
  func_0x000107c61520(&UNK_10dbe0bc0,&UNK_110668e10);
  puRam0000000112f7b018 = puVar1;
  return;
}



/* Entry: 1035a7260; end: 1035a72e7;  */

long FUN_1035a7260(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035a72e8; end: 1035a73a7;  */

undefined8 * FUN_1035a72e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar4,uVar1);
  *param_1 = uVar4;
  param_1[1] = uVar1;
  lVar3 = param_2[4];
  if (lVar3 == 0) {
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[4] = param_2[4];
  }
  else {
    uVar4 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    param_1[4] = lVar3;
    func_0x000107c6157c(lVar3);
  }
  cVar2 = *(char *)(param_2 + 5);
  if (cVar2 == '\x02') {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[7] = param_2[7];
  }
  else {
    *(char *)(param_1 + 5) = cVar2;
    uVar4 = param_2[6];
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[6] = uVar4;
    param_1[7] = uVar1;
  }
  return param_1;
}



/* Entry: 1035a73a8; end: 1035a75ff;  */

undefined8 * FUN_1035a73a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined8 uVar7;
  
  uVar4 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar4,uVar1);
  uVar7 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar1;
  func_0x00010006c090(uVar7,uVar2);
  if (param_1[4] == 0) {
    if (param_2[4] == 0) {
      uVar7 = param_2[3];
      uVar4 = param_2[2];
      param_1[4] = param_2[4];
      param_1[3] = uVar7;
      param_1[2] = uVar4;
    }
    else {
      uVar4 = param_2[2];
      uVar7 = param_2[3];
      func_0x00010006c00c(uVar4,uVar7);
      param_1[2] = uVar4;
      param_1[3] = uVar7;
      param_1[4] = param_2[4];
      func_0x000107c6157c();
    }
  }
  else if (param_2[4] == 0) {
    FUN_103510d9c(param_1 + 2);
    uVar4 = param_2[4];
    uVar7 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar7;
    param_1[4] = uVar4;
  }
  else {
    uVar4 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar4,uVar1);
    uVar7 = param_1[2];
    uVar2 = param_1[3];
    param_1[2] = uVar4;
    param_1[3] = uVar1;
    func_0x00010006c090(uVar7,uVar2);
    uVar4 = param_1[4];
    param_1[4] = param_2[4];
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
  }
  pcVar5 = (char *)(param_1 + 5);
  pbVar6 = (byte *)(param_2 + 5);
  bVar3 = *pbVar6;
  if (*pcVar5 == '\x02') {
    if (bVar3 == 2) {
      uVar7 = param_2[6];
      uVar4 = *(undefined8 *)pbVar6;
      param_1[7] = param_2[7];
      param_1[6] = uVar7;
      *(undefined8 *)pcVar5 = uVar4;
    }
    else {
      *(byte *)(param_1 + 5) = bVar3;
      uVar4 = param_2[6];
      uVar7 = param_2[7];
      func_0x00010006c00c(uVar4,uVar7);
      param_1[6] = uVar4;
      param_1[7] = uVar7;
    }
  }
  else if (bVar3 == 2) {
    func_0x0001015fd618(pcVar5);
    uVar4 = param_2[7];
    uVar7 = *(undefined8 *)pbVar6;
    param_1[6] = param_2[6];
    *(undefined8 *)pcVar5 = uVar7;
    param_1[7] = uVar4;
  }
  else {
    *(byte *)(param_1 + 5) = bVar3 & 1;
    uVar4 = param_2[6];
    uVar1 = param_2[7];
    func_0x00010006c00c(uVar4,uVar1);
    uVar7 = param_1[6];
    uVar2 = param_1[7];
    param_1[6] = uVar4;
    param_1[7] = uVar1;
    func_0x00010006c090(uVar7,uVar2);
  }
  return param_1;
}



/* Entry: 1035a7600; end: 1035a76cf;  */

int FUN_1035a7600(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035a76d0; end: 1035a7757;  */

void FUN_1035a76d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe0b2c;
  func_0x000107c61520(&DAT_10dbe0b2c,&UNK_110668e10);
  puRam0000000112f7b028 = puVar1;
  return;
}



/* Entry: 1035a7758; end: 1035a783b;  */

void FUN_1035a7758(undefined8 param_1,long param_2,long param_3)

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
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_110790b00;
LAB_1035a77e0:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110790c80;
        goto LAB_1035a77e0;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035a783c; end: 1035a78af;  */

void FUN_1035a783c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035a78b0();
  if (unaff_x21 == 0) {
    FUN_1035a7938();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035a78b0; end: 1035a7937;  */

void FUN_1035a78b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035a7938; end: 1035a79bb;  */

void FUN_1035a7938(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x30);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a79bc; end: 1035a7a0b;  */

uint FUN_1035a79bc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
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
    if (0xe < uVar4 >> 0x3c) goto LAB_1035a7f98;
    if ((int)uVar5 == (int)uVar6) {
      FUN_1035a7db4(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a7db4(&uStack_a0,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x0001015dc5d0(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_1035a7e9c;
    }
    else {
      FUN_1035a7db4(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a7db4(&uStack_a0,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      FUN_1035a7db4(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a7db4(&uStack_a0,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
LAB_1035a7e9c:
      func_0x0001015dc5d0(uVar5,uVar7,uVar3);
      lVar9 = param_1[6];
      uVar7 = param_1[5];
      uVar5 = param_1[8];
      uVar3 = param_1[7];
      lVar10 = param_2[6];
      uVar4 = param_2[5];
      uVar6 = param_2[8];
      uVar8 = param_2[7];
      uStack_e0 = uVar4;
      lStack_d8 = lVar10;
      uStack_d0 = uVar8;
      uStack_c8 = uVar6;
      uStack_c0 = uVar7;
      lStack_b8 = lVar9;
      uStack_b0 = uVar3;
      uStack_a8 = uVar5;
      if (lVar9 == 0) {
        if (lVar10 == 0) {
          FUN_1035a7db4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a7db4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
LAB_1035a8168:
          func_0x000101597ae4(uVar7,lVar9,uVar3,uVar5);
          uVar5 = *param_1;
          func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
          uVar1 = (uint)uVar5;
          goto LAB_1035a8188;
        }
LAB_1035a80c4:
        FUN_1035a7db4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
        FUN_1035a7db4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar7,lVar9,uVar3,uVar5);
        uVar7 = uVar4;
        lVar9 = lVar10;
        uVar3 = uVar8;
        uVar5 = uVar6;
      }
      else {
        if (lVar10 == 0) goto LAB_1035a80c4;
        if (((uVar7 == uVar4) && (lVar9 == lVar10)) ||
           (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar9,uVar4,lVar10,0), (uVar2 & 1) != 0)) {
          FUN_1035a7db4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a7db4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          uVar2 = uVar3;
          func_0x000100e25fcc(uVar3,uVar5,uVar8,uVar6);
          func_0x000101597ae4(uVar4,lVar10,uVar8,uVar6);
          if ((uVar2 & 1) != 0) goto LAB_1035a8168;
        }
        else {
          FUN_1035a7db4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a7db4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          func_0x000101597ae4(uVar4,lVar10,uVar8,uVar6);
        }
      }
      func_0x000101597ae4(uVar7,lVar9,uVar3,uVar5);
      uVar1 = 0;
      goto LAB_1035a8188;
    }
LAB_1035a7f98:
    FUN_1035a7db4(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
    FUN_1035a7db4(&uStack_a0,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
    func_0x0001015dc5d0(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x0001015dc5d0(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_1035a8188:
  return uVar1 & 1;
}



/* Entry: 1035a7a0c; end: 1035a7a3b;  */

undefined1  [16] FUN_1035a7a0c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035a7a3c; end: 1035a7a6f;  */

void FUN_1035a7a3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035a7a70; end: 1035a7a83;  */

undefined8 FUN_1035a7a70(void)

{
  return 0x1035a7a80;
}



/* Entry: 1035a7a84; end: 1035a7a97;  */

void FUN_1035a7a84(void)

{
  FUN_1035a7758();
  return;
}



/* Entry: 1035a7a98; end: 1035a7ad7;  */

void FUN_1035a7a98(void)

{
  FUN_1035a783c();
  return;
}



/* Entry: 1035a7ad8; end: 1035a7adb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035a7ad8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035a7adc; end: 1035a7b13;  */

uint FUN_1035a7adc(long param_1,long param_2)

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
  FUN_1035a87ac();
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



/* Entry: 1035a7b14; end: 1035a7b6b;  */

uint FUN_1035a7b14(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_1035a7dfc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1035a7b6c; end: 1035a7c0b;  */

/* WARNING: Possible PIC construction at 0x0001035a7bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035a7bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035a7bbc) */
/* WARNING: Removing unreachable block (ram,0x0001035a7bcc) */

void FUN_1035a7b6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7b030 != -1) {
    func_0x000107c61568(0x112f7b030,0x1035a7710);
  }
  uVar5 = uRam0000000113808f98;
  uVar4 = uRam0000000113808f90;
  uVar3 = uRam0000000113808f88;
  uVar2 = uRam0000000113808f80;
  uVar1 = uRam0000000113808f78;
  *param_1 = uRam0000000113808f70;
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



/* Entry: 1035a7c0c; end: 1035a7c47;  */

void FUN_1035a7c0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7b050;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7b050,&UNK_10dbe0de8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035a7c48; end: 1035a7d5b;  */

void FUN_1035a7c48(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035a7d5c; end: 1035a7db3;  */

uint FUN_1035a7d5c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1035a7dfc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1035a7db4; end: 1035a7dfb;  */

undefined8 FUN_1035a7db4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035a7dfc; end: 1035a820b;  */

uint FUN_1035a7dfc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_100 [32];
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
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
    if (0xe < uVar4 >> 0x3c) goto LAB_1035a7f98;
    if ((int)uVar5 == (int)uVar6) {
      FUN_1035a7db4(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a7db4(&uStack_a0,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x0001015dc5d0(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_1035a7e9c;
    }
    else {
      FUN_1035a7db4(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a7db4(&uStack_a0,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      FUN_1035a7db4(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a7db4(&uStack_a0,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
LAB_1035a7e9c:
      func_0x0001015dc5d0(uVar5,uVar7,uVar3);
      lVar9 = param_1[6];
      uVar7 = param_1[5];
      uVar5 = param_1[8];
      uVar3 = param_1[7];
      lVar10 = param_2[6];
      uVar4 = param_2[5];
      uVar6 = param_2[8];
      uVar8 = param_2[7];
      uStack_e0 = uVar4;
      lStack_d8 = lVar10;
      uStack_d0 = uVar8;
      uStack_c8 = uVar6;
      uStack_c0 = uVar7;
      lStack_b8 = lVar9;
      uStack_b0 = uVar3;
      uStack_a8 = uVar5;
      if (lVar9 == 0) {
        if (lVar10 == 0) {
          FUN_1035a7db4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a7db4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
LAB_1035a8168:
          func_0x000101597ae4(uVar7,lVar9,uVar3,uVar5);
          uVar5 = *param_1;
          func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
          uVar1 = (uint)uVar5;
          goto LAB_1035a8188;
        }
LAB_1035a80c4:
        FUN_1035a7db4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
        FUN_1035a7db4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar7,lVar9,uVar3,uVar5);
        uVar7 = uVar4;
        lVar9 = lVar10;
        uVar3 = uVar8;
        uVar5 = uVar6;
      }
      else {
        if (lVar10 == 0) goto LAB_1035a80c4;
        if (((uVar7 == uVar4) && (lVar9 == lVar10)) ||
           (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar9,uVar4,lVar10,0), (uVar2 & 1) != 0)) {
          FUN_1035a7db4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a7db4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          uVar2 = uVar3;
          func_0x000100e25fcc(uVar3,uVar5,uVar8,uVar6);
          func_0x000101597ae4(uVar4,lVar10,uVar8,uVar6);
          if ((uVar2 & 1) != 0) goto LAB_1035a8168;
        }
        else {
          FUN_1035a7db4(&uStack_c0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a7db4(&uStack_e0,auStack_100,0x112db6f40,&UNK_10d9681d0);
          func_0x000101597ae4(uVar4,lVar10,uVar8,uVar6);
        }
      }
      func_0x000101597ae4(uVar7,lVar9,uVar3,uVar5);
      uVar1 = 0;
      goto LAB_1035a8188;
    }
LAB_1035a7f98:
    FUN_1035a7db4(&uStack_80,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
    FUN_1035a7db4(&uStack_a0,&uStack_c0,0x112db80f8,&UNK_10d9671e0);
    func_0x0001015dc5d0(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x0001015dc5d0(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_1035a8188:
  return uVar1 & 1;
}



/* Entry: 1035a820c; end: 1035a824b;  */

void FUN_1035a820c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0d10;
  func_0x000107c61520(&UNK_10dbe0d10,&UNK_110668fc0);
  puRam0000000112f7b038 = puVar1;
  return;
}



/* Entry: 1035a824c; end: 1035a826f;  */

void FUN_1035a824c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a8270();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035a8270; end: 1035a82af;  */

void FUN_1035a8270(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7b040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0ce8;
  func_0x000107c61520(&UNK_10dbe0ce8,&UNK_110668fc0);
  puRam0000000112f7b040 = puVar1;
  return;
}



/* Entry: 1035a82b0; end: 1035a82db;  */

void FUN_1035a82b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a820c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035a4f50();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


