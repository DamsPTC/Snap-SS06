/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035a0298; end: 1035a02bf;  */

void FUN_1035a0298(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1035a02c0; end: 1035a036b;  */

void FUN_1035a02c0(void)

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



/* Entry: 1035a036c; end: 1035a037f;  */

bool FUN_1035a036c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035a0380; end: 1035a03c7;  */

void FUN_1035a0380(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe03d0,0x3a,2);
  uRam0000000113808e58 = uStack_38;
  uRam0000000113808e50 = uStack_40;
  uRam0000000113808e68 = uStack_28;
  uRam0000000113808e60 = uStack_30;
  uRam0000000113808e78 = uStack_18;
  uRam0000000113808e70 = uStack_20;
  return;
}



/* Entry: 1035a03c8; end: 1035a03f3;  */

void FUN_1035a03c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a03f4();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035a0434();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035a03f4; end: 1035a0473;  */

void FUN_1035a03f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0300;
  func_0x000107c61520(&UNK_10dbe0300,&UNK_110668568);
  puRam0000000112f7af10 = puVar1;
  return;
}



/* Entry: 1035a0474; end: 1035a0477;  */

void FUN_1035a0474(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7af20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7af28;
  func_0x00010002969c(0x112f7af28,&UNK_10dbe0288);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7af20 = puVar2;
  return;
}



/* Entry: 1035a0478; end: 1035a04c7;  */

void FUN_1035a0478(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7af20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7af28;
  func_0x00010002969c(0x112f7af28,&UNK_10dbe0288);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7af20 = puVar2;
  return;
}



/* Entry: 1035a04c8; end: 1035a04cb;  */

void FUN_1035a04c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0340;
  func_0x000107c61520(&UNK_10dbe0340,&UNK_110668568);
  puRam0000000112f7af30 = puVar1;
  return;
}



/* Entry: 1035a04cc; end: 1035a050b;  */

void FUN_1035a04cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0340;
  func_0x000107c61520(&UNK_10dbe0340,&UNK_110668568);
  puRam0000000112f7af30 = puVar1;
  return;
}



/* Entry: 1035a050c; end: 1035a05ab;  */

/* WARNING: Possible PIC construction at 0x0001035a0558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035a0568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035a055c) */
/* WARNING: Removing unreachable block (ram,0x0001035a056c) */

void FUN_1035a050c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7af08 != -1) {
    func_0x000107c61568(0x112f7af08,FUN_1035a0380);
  }
  uVar5 = uRam0000000113808e78;
  uVar4 = uRam0000000113808e70;
  uVar3 = uRam0000000113808e68;
  uVar2 = uRam0000000113808e60;
  uVar1 = uRam0000000113808e58;
  *param_1 = uRam0000000113808e50;
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



/* Entry: 1035a05ac; end: 1035a064b;  */

int FUN_1035a05ac(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1035a064c; end: 1035a0693;  */

undefined8 FUN_1035a064c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035a0694; end: 1035a06db;  */

void FUN_1035a0694(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe0560,0x50,2);
  uRam0000000113808e88 = uStack_38;
  uRam0000000113808e80 = uStack_40;
  uRam0000000113808e98 = uStack_28;
  uRam0000000113808e90 = uStack_30;
  uRam0000000113808ea8 = uStack_18;
  uRam0000000113808ea0 = uStack_20;
  return;
}



/* Entry: 1035a06dc; end: 1035a0807;  */

void FUN_1035a06dc(undefined8 param_1,long param_2,long param_3)

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
      puVar3 = &UNK_110790b00;
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x000103510fbc();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_11066abb0;
          goto LAB_1035a0764;
        }
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_1035a0764;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          lVar2 = unaff_x20 + 0x40;
        }
        else {
          if (lVar1 != 4) goto LAB_1035a0778;
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          lVar2 = unaff_x20 + 0x58;
        }
LAB_1035a0764:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1035a0778:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035a0808; end: 1035a08ab;  */

void FUN_1035a0808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035a08ac();
  if (unaff_x21 == 0) {
    FUN_1035a092c();
    FUN_1035a09b4();
    FUN_1035a0a3c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035a08ac; end: 1035a092b;  */

void FUN_1035a08ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035a092c; end: 1035a09b3;  */

void FUN_1035a092c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035a09b4; end: 1035a0a3b;  */

void FUN_1035a09b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,3,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a0a3c; end: 1035a0ac3;  */

void FUN_1035a0a3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,4,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a0ac4; end: 1035a0b17;  */

uint FUN_1035a0ac4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
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
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar11 = param_1[3];
  uVar5 = param_1[2];
  lVar7 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  lVar8 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  lStack_a0 = lVar8;
  uStack_90 = uVar5;
  uStack_88 = uVar11;
  lStack_80 = lVar7;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_1035a0fe0;
    FUN_1035a064c(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a064c(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar5,uVar11,0);
LAB_1035a1084:
    uVar13 = param_1[6];
    uVar10 = param_1[5];
    uVar5 = param_1[7];
    uVar14 = param_2[6];
    uVar11 = param_2[5];
    uVar9 = param_2[7];
    uStack_f0 = uVar11;
    uStack_e8 = uVar14;
    uStack_e0 = uVar9;
    uStack_d0 = uVar10;
    uStack_c8 = uVar13;
    uStack_c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_1035a1238;
      if ((int)uVar10 == (int)uVar11) {
        FUN_1035a064c(&uStack_d0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
        FUN_1035a064c(&uStack_f0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar9);
        func_0x0001015dc5d0(uVar11,uVar14,uVar9);
        if ((uVar2 & 1) != 0) goto LAB_1035a10fc;
      }
      else {
        FUN_1035a064c(&uStack_d0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
LAB_1035a14fc:
        FUN_1035a064c(puVar3,puVar4,0x112db80f8,&UNK_10d9671e0);
        func_0x0001015dc5d0(uVar11,uVar14,uVar9);
      }
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        FUN_1035a064c(&uStack_d0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
        FUN_1035a064c(&uStack_f0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
LAB_1035a10fc:
        func_0x0001015dc5d0(uVar10,uVar13,uVar5);
        uVar13 = param_1[9];
        uVar10 = param_1[8];
        uVar5 = param_1[10];
        uVar14 = param_2[9];
        uVar11 = param_2[8];
        uVar9 = param_2[10];
        uStack_130 = uVar11;
        uStack_128 = uVar14;
        uStack_120 = uVar9;
        uStack_110 = uVar10;
        uStack_108 = uVar13;
        uStack_100 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar9 >> 0x3c) goto LAB_1035a12ec;
          if ((int)uVar10 != (int)uVar11) {
            FUN_1035a064c(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_130;
            puVar4 = &uStack_150;
            goto LAB_1035a14fc;
          }
          FUN_1035a064c(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a064c(&uStack_130,&uStack_150,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar9);
          func_0x0001015dc5d0(uVar11,uVar14,uVar9);
          if ((uVar2 & 1) == 0) goto LAB_1035a1524;
        }
        else {
          if (uVar9 >> 0x3c < 0xf) {
LAB_1035a12ec:
            FUN_1035a064c(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_130;
            puVar4 = &uStack_150;
            uVar2 = uVar5;
            uVar6 = uVar13;
            uVar12 = uVar10;
            uVar5 = uVar9;
            uVar13 = uVar14;
            uVar10 = uVar11;
            goto LAB_1035a13fc;
          }
          FUN_1035a064c(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a064c(&uStack_130,&uStack_150,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x0001015dc5d0(uVar10,uVar13,uVar5);
        uVar13 = param_1[0xc];
        uVar10 = param_1[0xb];
        uVar5 = param_1[0xd];
        uVar14 = param_2[0xc];
        uVar11 = param_2[0xb];
        uVar9 = param_2[0xd];
        uStack_170 = uVar11;
        uStack_168 = uVar14;
        uStack_160 = uVar9;
        uStack_150 = uVar10;
        uStack_148 = uVar13;
        uStack_140 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar9 >> 0x3c) goto LAB_1035a13d0;
          if ((int)uVar10 != (int)uVar11) {
            FUN_1035a064c(&uStack_150,auStack_188,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_170;
            puVar4 = auStack_188;
            goto LAB_1035a14fc;
          }
          FUN_1035a064c(&uStack_150,auStack_188,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a064c(&uStack_170,auStack_188,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar9);
          func_0x0001015dc5d0(uVar11,uVar14,uVar9);
          if ((uVar2 & 1) == 0) goto LAB_1035a1524;
        }
        else {
          if (uVar9 >> 0x3c < 0xf) {
LAB_1035a13d0:
            FUN_1035a064c(&uStack_150,auStack_188,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_170;
            puVar4 = auStack_188;
            uVar2 = uVar5;
            uVar6 = uVar13;
            uVar12 = uVar10;
            uVar5 = uVar9;
            uVar13 = uVar14;
            uVar10 = uVar11;
            goto LAB_1035a13fc;
          }
          FUN_1035a064c(&uStack_150,auStack_188,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a064c(&uStack_170,auStack_188,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x0001015dc5d0(uVar10,uVar13,uVar5);
        uVar10 = *param_1;
        func_0x000100e25fcc(uVar10,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar10;
        goto LAB_1035a152c;
      }
LAB_1035a1238:
      FUN_1035a064c(&uStack_d0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
      puVar3 = &uStack_f0;
      puVar4 = &uStack_110;
      uVar2 = uVar5;
      uVar6 = uVar13;
      uVar12 = uVar10;
      uVar5 = uVar9;
      uVar13 = uVar14;
      uVar10 = uVar11;
LAB_1035a13fc:
      FUN_1035a064c(puVar3,puVar4,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(uVar12,uVar6,uVar2);
    }
LAB_1035a1524:
    func_0x0001015dc5d0(uVar10,uVar13,uVar5);
  }
  else if (lVar8 == 0) {
LAB_1035a0fe0:
    FUN_1035a064c(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a064c(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar5,uVar11,lVar7);
    func_0x00010349f458(uVar10,uVar12,lVar8);
  }
  else {
    FUN_1035a064c(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a064c(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    uVar13 = uVar5;
    FUN_1035d8f6c(uVar5,uVar11,lVar7,uVar10,uVar12,lVar8);
    func_0x00010349f458(uVar10,uVar12,lVar8);
    func_0x00010349f458(uVar5,uVar11,lVar7);
    if ((uVar13 & 1) != 0) goto LAB_1035a1084;
  }
  uVar1 = 0;
LAB_1035a152c:
  return uVar1 & 1;
}



/* Entry: 1035a0b18; end: 1035a0b47;  */

undefined1  [16] FUN_1035a0b18(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035a0b48; end: 1035a0b7b;  */

void FUN_1035a0b48(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035a0b7c; end: 1035a0b8f;  */

undefined8 FUN_1035a0b7c(void)

{
  return 0x1035a0b8c;
}



/* Entry: 1035a0b90; end: 1035a0ba3;  */

void FUN_1035a0b90(void)

{
  FUN_1035a06dc();
  return;
}



/* Entry: 1035a0ba4; end: 1035a0beb;  */

void FUN_1035a0ba4(void)

{
  FUN_1035a0808();
  return;
}



/* Entry: 1035a0bec; end: 1035a0bef;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035a0bec(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035a0bf0; end: 1035a0c27;  */

uint FUN_1035a0bf0(long param_1,long param_2)

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
  FUN_1035a1d80();
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



/* Entry: 1035a0c28; end: 1035a0c8f;  */

uint FUN_1035a0c28(undefined8 *param_1)

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
  FUN_1035a0efc(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1035a0c90; end: 1035a0d2f;  */

/* WARNING: Possible PIC construction at 0x0001035a0cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035a0cec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035a0ce0) */
/* WARNING: Removing unreachable block (ram,0x0001035a0cf0) */

void FUN_1035a0c90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7af38 != -1) {
    func_0x000107c61568(0x112f7af38,FUN_1035a0694);
  }
  uVar5 = uRam0000000113808ea8;
  uVar4 = uRam0000000113808ea0;
  uVar3 = uRam0000000113808e98;
  uVar2 = uRam0000000113808e90;
  uVar1 = uRam0000000113808e88;
  *param_1 = uRam0000000113808e80;
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



/* Entry: 1035a0d30; end: 1035a0d6b;  */

void FUN_1035a0d30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7af58;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7af58,&UNK_10dbe0558);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035a0d6c; end: 1035a0e97;  */

void FUN_1035a0d6c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1035a0e98; end: 1035a0efb;  */

uint FUN_1035a0e98(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1035a0efc(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1035a0efc; end: 1035a154f;  */

uint FUN_1035a0efc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
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
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar11 = param_1[3];
  uVar5 = param_1[2];
  lVar7 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  lVar8 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  lStack_a0 = lVar8;
  uStack_90 = uVar5;
  uStack_88 = uVar11;
  lStack_80 = lVar7;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_1035a0fe0;
    FUN_1035a064c(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a064c(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar5,uVar11,0);
LAB_1035a1084:
    uVar13 = param_1[6];
    uVar10 = param_1[5];
    uVar5 = param_1[7];
    uVar14 = param_2[6];
    uVar11 = param_2[5];
    uVar9 = param_2[7];
    uStack_f0 = uVar11;
    uStack_e8 = uVar14;
    uStack_e0 = uVar9;
    uStack_d0 = uVar10;
    uStack_c8 = uVar13;
    uStack_c0 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_1035a1238;
      if ((int)uVar10 == (int)uVar11) {
        FUN_1035a064c(&uStack_d0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
        FUN_1035a064c(&uStack_f0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar9);
        func_0x0001015dc5d0(uVar11,uVar14,uVar9);
        if ((uVar2 & 1) != 0) goto LAB_1035a10fc;
      }
      else {
        FUN_1035a064c(&uStack_d0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
LAB_1035a14fc:
        FUN_1035a064c(puVar3,puVar4,0x112db80f8,&UNK_10d9671e0);
        func_0x0001015dc5d0(uVar11,uVar14,uVar9);
      }
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        FUN_1035a064c(&uStack_d0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
        FUN_1035a064c(&uStack_f0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
LAB_1035a10fc:
        func_0x0001015dc5d0(uVar10,uVar13,uVar5);
        uVar13 = param_1[9];
        uVar10 = param_1[8];
        uVar5 = param_1[10];
        uVar14 = param_2[9];
        uVar11 = param_2[8];
        uVar9 = param_2[10];
        uStack_130 = uVar11;
        uStack_128 = uVar14;
        uStack_120 = uVar9;
        uStack_110 = uVar10;
        uStack_108 = uVar13;
        uStack_100 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar9 >> 0x3c) goto LAB_1035a12ec;
          if ((int)uVar10 != (int)uVar11) {
            FUN_1035a064c(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_130;
            puVar4 = &uStack_150;
            goto LAB_1035a14fc;
          }
          FUN_1035a064c(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a064c(&uStack_130,&uStack_150,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar9);
          func_0x0001015dc5d0(uVar11,uVar14,uVar9);
          if ((uVar2 & 1) == 0) goto LAB_1035a1524;
        }
        else {
          if (uVar9 >> 0x3c < 0xf) {
LAB_1035a12ec:
            FUN_1035a064c(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_130;
            puVar4 = &uStack_150;
            uVar2 = uVar5;
            uVar6 = uVar13;
            uVar12 = uVar10;
            uVar5 = uVar9;
            uVar13 = uVar14;
            uVar10 = uVar11;
            goto LAB_1035a13fc;
          }
          FUN_1035a064c(&uStack_110,&uStack_150,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a064c(&uStack_130,&uStack_150,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x0001015dc5d0(uVar10,uVar13,uVar5);
        uVar13 = param_1[0xc];
        uVar10 = param_1[0xb];
        uVar5 = param_1[0xd];
        uVar14 = param_2[0xc];
        uVar11 = param_2[0xb];
        uVar9 = param_2[0xd];
        uStack_170 = uVar11;
        uStack_168 = uVar14;
        uStack_160 = uVar9;
        uStack_150 = uVar10;
        uStack_148 = uVar13;
        uStack_140 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar9 >> 0x3c) goto LAB_1035a13d0;
          if ((int)uVar10 != (int)uVar11) {
            FUN_1035a064c(&uStack_150,auStack_188,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_170;
            puVar4 = auStack_188;
            goto LAB_1035a14fc;
          }
          FUN_1035a064c(&uStack_150,auStack_188,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a064c(&uStack_170,auStack_188,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar9);
          func_0x0001015dc5d0(uVar11,uVar14,uVar9);
          if ((uVar2 & 1) == 0) goto LAB_1035a1524;
        }
        else {
          if (uVar9 >> 0x3c < 0xf) {
LAB_1035a13d0:
            FUN_1035a064c(&uStack_150,auStack_188,0x112db80f8,&UNK_10d9671e0);
            puVar3 = &uStack_170;
            puVar4 = auStack_188;
            uVar2 = uVar5;
            uVar6 = uVar13;
            uVar12 = uVar10;
            uVar5 = uVar9;
            uVar13 = uVar14;
            uVar10 = uVar11;
            goto LAB_1035a13fc;
          }
          FUN_1035a064c(&uStack_150,auStack_188,0x112db80f8,&UNK_10d9671e0);
          FUN_1035a064c(&uStack_170,auStack_188,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x0001015dc5d0(uVar10,uVar13,uVar5);
        uVar10 = *param_1;
        func_0x000100e25fcc(uVar10,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar10;
        goto LAB_1035a152c;
      }
LAB_1035a1238:
      FUN_1035a064c(&uStack_d0,&uStack_110,0x112db80f8,&UNK_10d9671e0);
      puVar3 = &uStack_f0;
      puVar4 = &uStack_110;
      uVar2 = uVar5;
      uVar6 = uVar13;
      uVar12 = uVar10;
      uVar5 = uVar9;
      uVar13 = uVar14;
      uVar10 = uVar11;
LAB_1035a13fc:
      FUN_1035a064c(puVar3,puVar4,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(uVar12,uVar6,uVar2);
    }
LAB_1035a1524:
    func_0x0001015dc5d0(uVar10,uVar13,uVar5);
  }
  else if (lVar8 == 0) {
LAB_1035a0fe0:
    FUN_1035a064c(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a064c(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar5,uVar11,lVar7);
    func_0x00010349f458(uVar10,uVar12,lVar8);
  }
  else {
    FUN_1035a064c(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a064c(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    uVar13 = uVar5;
    FUN_1035d8f6c(uVar5,uVar11,lVar7,uVar10,uVar12,lVar8);
    func_0x00010349f458(uVar10,uVar12,lVar8);
    func_0x00010349f458(uVar5,uVar11,lVar7);
    if ((uVar13 & 1) != 0) goto LAB_1035a1084;
  }
  uVar1 = 0;
LAB_1035a152c:
  return uVar1 & 1;
}



/* Entry: 1035a1550; end: 1035a158f;  */

void FUN_1035a1550(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0480;
  func_0x000107c61520(&UNK_10dbe0480,&UNK_110668730);
  puRam0000000112f7af40 = puVar1;
  return;
}



/* Entry: 1035a1590; end: 1035a15b3;  */

void FUN_1035a1590(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a15b4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035a15b4; end: 1035a15f3;  */

void FUN_1035a15b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0458;
  func_0x000107c61520(&UNK_10dbe0458,&UNK_110668730);
  puRam0000000112f7af48 = puVar1;
  return;
}



/* Entry: 1035a15f4; end: 1035a161f;  */

void FUN_1035a15f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a1550();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502894();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035a1620; end: 1035a1623;  */

void FUN_1035a1620(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe04c0;
  func_0x000107c61520(&UNK_10dbe04c0,&UNK_110668730);
  puRam0000000112f7af50 = puVar1;
  return;
}



/* Entry: 1035a1624; end: 1035a1663;  */

void FUN_1035a1624(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe04c0;
  func_0x000107c61520(&UNK_10dbe04c0,&UNK_110668730);
  puRam0000000112f7af50 = puVar1;
  return;
}



/* Entry: 1035a1664; end: 1035a171f;  */

long FUN_1035a1664(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035a1720; end: 1035a1863;  */

undefined8 * FUN_1035a1720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  lVar3 = param_2[4];
  if (lVar3 == 0) {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  else {
    uVar2 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    param_1[4] = lVar3;
    func_0x000107c6157c(lVar3);
  }
  uVar4 = param_2[7];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[6] = uVar2;
    param_1[7] = uVar4;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  uVar4 = param_2[10];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar2 = param_2[9];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[9] = uVar2;
    param_1[10] = uVar4;
  }
  else {
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[10] = param_2[10];
  }
  uVar4 = param_2[0xd];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar2 = param_2[0xc];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar4;
  }
  else {
    uVar2 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[0xd] = param_2[0xd];
  }
  return param_1;
}



/* Entry: 1035a1864; end: 1035a1ca3;  */

undefined8 * FUN_1035a1864(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  uVar4 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar3;
  param_1[1] = uVar1;
  func_0x00010006c090(uVar4,uVar2);
  if (param_1[4] == 0) {
    if (param_2[4] == 0) {
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      param_1[4] = param_2[4];
      param_1[3] = uVar4;
      param_1[2] = uVar3;
    }
    else {
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      param_1[4] = param_2[4];
      func_0x000107c6157c();
    }
  }
  else if (param_2[4] == 0) {
    FUN_103510d9c(param_1 + 2);
    uVar3 = param_2[4];
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar3,uVar1);
    uVar4 = param_1[2];
    uVar2 = param_1[3];
    param_1[2] = uVar3;
    param_1[3] = uVar1;
    func_0x00010006c090(uVar4,uVar2);
    uVar3 = param_1[4];
    param_1[4] = param_2[4];
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
  }
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    if ((ulong)param_2[7] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
      uVar3 = param_2[6];
      uVar1 = param_2[7];
      func_0x00010006c00c(uVar3,uVar1);
      uVar4 = param_1[6];
      uVar2 = param_1[7];
      param_1[6] = uVar3;
      param_1[7] = uVar1;
      func_0x00010006c090(uVar4,uVar2);
    }
    else {
      func_0x0001015d4290(param_1 + 5);
      uVar3 = param_2[7];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      param_1[7] = uVar3;
    }
  }
  else if ((ulong)param_2[7] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[6] = uVar3;
    param_1[7] = uVar4;
  }
  else {
    uVar4 = param_2[6];
    uVar3 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar4;
    param_1[5] = uVar3;
  }
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    if ((ulong)param_2[10] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      uVar3 = param_2[9];
      uVar1 = param_2[10];
      func_0x00010006c00c(uVar3,uVar1);
      uVar4 = param_1[9];
      uVar2 = param_1[10];
      param_1[9] = uVar3;
      param_1[10] = uVar1;
      func_0x00010006c090(uVar4,uVar2);
    }
    else {
      func_0x0001015d4290(param_1 + 8);
      uVar3 = param_2[10];
      uVar4 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      param_1[10] = uVar3;
    }
  }
  else if ((ulong)param_2[10] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar3 = param_2[9];
    uVar4 = param_2[10];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[9] = uVar3;
    param_1[10] = uVar4;
  }
  else {
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  if ((ulong)param_1[0xd] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xd] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
      uVar3 = param_2[0xc];
      uVar1 = param_2[0xd];
      func_0x00010006c00c(uVar3,uVar1);
      uVar4 = param_1[0xc];
      uVar2 = param_1[0xd];
      param_1[0xc] = uVar3;
      param_1[0xd] = uVar1;
      func_0x00010006c090(uVar4,uVar2);
    }
    else {
      func_0x0001015d4290(param_1 + 0xb);
      uVar3 = param_2[0xd];
      uVar4 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar4;
      param_1[0xd] = uVar3;
    }
  }
  else if ((ulong)param_2[0xd] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar3 = param_2[0xc];
    uVar4 = param_2[0xd];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar4;
  }
  else {
    uVar4 = param_2[0xc];
    uVar3 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    param_1[0xb] = uVar3;
  }
  return param_1;
}



/* Entry: 1035a1ca4; end: 1035a1d7f;  */

int FUN_1035a1ca4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x1c] != '\0')) {
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



/* Entry: 1035a1d80; end: 1035a1dbf;  */

void FUN_1035a1d80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe042c;
  func_0x000107c61520(&DAT_10dbe042c,&UNK_110668730);
  puRam0000000112f7af60 = puVar1;
  return;
}



/* Entry: 1035a1dc0; end: 1035a1e07;  */

undefined8 FUN_1035a1dc0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035a1e08; end: 1035a1e4f;  */

void FUN_1035a1e08(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe0720,0x3d,2);
  uRam0000000113808eb8 = uStack_38;
  uRam0000000113808eb0 = uStack_40;
  uRam0000000113808ec8 = uStack_28;
  uRam0000000113808ec0 = uStack_30;
  uRam0000000113808ed8 = uStack_18;
  uRam0000000113808ed0 = uStack_20;
  return;
}



/* Entry: 1035a1e50; end: 1035a1f33;  */

void FUN_1035a1e50(undefined8 param_1,long param_2,long param_3)

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
LAB_1035a1ed8:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x28;
        puVar3 = &UNK_110790980;
        goto LAB_1035a1ed8;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035a1f34; end: 1035a1fa7;  */

void FUN_1035a1f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035a1fa8();
  if (unaff_x21 == 0) {
    FUN_1035a2028();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035a1fa8; end: 1035a2027;  */

void FUN_1035a1fa8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035a2028; end: 1035a20af;  */

void FUN_1035a2028(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035a20b0; end: 1035a20f7;  */

uint FUN_1035a20b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar9 = param_1[3];
  uVar7 = param_1[2];
  lVar4 = param_1[4];
  uVar10 = param_2[3];
  uVar8 = param_2[2];
  lVar5 = param_2[4];
  uStack_a0 = uVar8;
  uStack_98 = uVar10;
  lStack_90 = lVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  lStack_70 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_1035a2544;
    FUN_1035a1dc0(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a1dc0(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar9,0);
LAB_1035a25e8:
    uVar7 = param_1[6];
    uVar8 = param_1[5];
    uVar3 = param_1[7];
    uVar11 = param_2[6];
    uVar9 = param_2[5];
    uVar6 = param_2[7];
    uStack_e0 = uVar9;
    uStack_d8 = uVar11;
    uStack_d0 = uVar6;
    uStack_c0 = uVar8;
    uStack_b8 = uVar7;
    uStack_b0 = uVar3;
    if (uVar3 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_1035a2670;
      if ((float)uVar8 == (float)uVar9) {
        FUN_1035a1dc0(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
        FUN_1035a1dc0(&uStack_e0,auStack_f8,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar7;
        func_0x000100e25fcc(uVar7,uVar3,uVar11,uVar6);
        func_0x000101553ccc(uVar9,uVar11,uVar6);
        if ((uVar2 & 1) != 0) goto LAB_1035a273c;
      }
      else {
        FUN_1035a1dc0(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
        FUN_1035a1dc0(&uStack_e0,auStack_f8,0x112db6358,&UNK_10d961e20);
        func_0x000101553ccc(uVar9,uVar11,uVar6);
      }
    }
    else {
      if (0xe < uVar6 >> 0x3c) {
        FUN_1035a1dc0(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
        FUN_1035a1dc0(&uStack_e0,auStack_f8,0x112db6358,&UNK_10d961e20);
LAB_1035a273c:
        func_0x000101553ccc(uVar8,uVar7,uVar3);
        uVar8 = *param_1;
        func_0x000100e25fcc(uVar8,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar8;
        goto LAB_1035a27b8;
      }
LAB_1035a2670:
      FUN_1035a1dc0(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
      FUN_1035a1dc0(&uStack_e0,auStack_f8,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar8,uVar7,uVar3);
      uVar8 = uVar9;
      uVar7 = uVar11;
      uVar3 = uVar6;
    }
    func_0x000101553ccc(uVar8,uVar7,uVar3);
  }
  else if (lVar5 == 0) {
LAB_1035a2544:
    FUN_1035a1dc0(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a1dc0(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar9,lVar4);
    func_0x00010349f458(uVar8,uVar10,lVar5);
  }
  else {
    FUN_1035a1dc0(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a1dc0(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    uVar3 = uVar7;
    FUN_1035d8f6c(uVar7,uVar9,lVar4,uVar8,uVar10,lVar5);
    func_0x00010349f458(uVar8,uVar10,lVar5);
    func_0x00010349f458(uVar7,uVar9,lVar4);
    if ((uVar3 & 1) != 0) goto LAB_1035a25e8;
  }
  uVar1 = 0;
LAB_1035a27b8:
  return uVar1 & 1;
}



/* Entry: 1035a20f8; end: 1035a2127;  */

undefined1  [16] FUN_1035a20f8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035a2128; end: 1035a215b;  */

void FUN_1035a2128(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035a215c; end: 1035a216f;  */

undefined8 FUN_1035a215c(void)

{
  return 0x1035a216c;
}



/* Entry: 1035a2170; end: 1035a2183;  */

void FUN_1035a2170(void)

{
  FUN_1035a1e50();
  return;
}



/* Entry: 1035a2184; end: 1035a21bb;  */

void FUN_1035a2184(void)

{
  FUN_1035a1f34();
  return;
}



/* Entry: 1035a21bc; end: 1035a21bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035a21bc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035a21c0; end: 1035a21f7;  */

uint FUN_1035a21c0(long param_1,long param_2)

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
  FUN_1035a2d70();
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



/* Entry: 1035a21f8; end: 1035a223f;  */

uint FUN_1035a21f8(undefined8 *param_1)

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
  FUN_1035a2468(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035a2240; end: 1035a22df;  */

/* WARNING: Possible PIC construction at 0x0001035a228c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035a229c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035a2290) */
/* WARNING: Removing unreachable block (ram,0x0001035a22a0) */

void FUN_1035a2240(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7af68 != -1) {
    func_0x000107c61568(0x112f7af68,FUN_1035a1e08);
  }
  uVar5 = uRam0000000113808ed8;
  uVar4 = uRam0000000113808ed0;
  uVar3 = uRam0000000113808ec8;
  uVar2 = uRam0000000113808ec0;
  uVar1 = uRam0000000113808eb8;
  *param_1 = uRam0000000113808eb0;
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



/* Entry: 1035a22e0; end: 1035a231b;  */

void FUN_1035a22e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7af88;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7af88,&UNK_10dbe0710);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035a231c; end: 1035a241f;  */

void FUN_1035a231c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1035a2420; end: 1035a2467;  */

uint FUN_1035a2420(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1035a2468(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035a2468; end: 1035a27db;  */

uint FUN_1035a2468(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar9 = param_1[3];
  uVar7 = param_1[2];
  lVar4 = param_1[4];
  uVar10 = param_2[3];
  uVar8 = param_2[2];
  lVar5 = param_2[4];
  uStack_a0 = uVar8;
  uStack_98 = uVar10;
  lStack_90 = lVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  lStack_70 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_1035a2544;
    FUN_1035a1dc0(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a1dc0(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar9,0);
LAB_1035a25e8:
    uVar7 = param_1[6];
    uVar8 = param_1[5];
    uVar3 = param_1[7];
    uVar11 = param_2[6];
    uVar9 = param_2[5];
    uVar6 = param_2[7];
    uStack_e0 = uVar9;
    uStack_d8 = uVar11;
    uStack_d0 = uVar6;
    uStack_c0 = uVar8;
    uStack_b8 = uVar7;
    uStack_b0 = uVar3;
    if (uVar3 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_1035a2670;
      if ((float)uVar8 == (float)uVar9) {
        FUN_1035a1dc0(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
        FUN_1035a1dc0(&uStack_e0,auStack_f8,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar7;
        func_0x000100e25fcc(uVar7,uVar3,uVar11,uVar6);
        func_0x000101553ccc(uVar9,uVar11,uVar6);
        if ((uVar2 & 1) != 0) goto LAB_1035a273c;
      }
      else {
        FUN_1035a1dc0(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
        FUN_1035a1dc0(&uStack_e0,auStack_f8,0x112db6358,&UNK_10d961e20);
        func_0x000101553ccc(uVar9,uVar11,uVar6);
      }
    }
    else {
      if (0xe < uVar6 >> 0x3c) {
        FUN_1035a1dc0(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
        FUN_1035a1dc0(&uStack_e0,auStack_f8,0x112db6358,&UNK_10d961e20);
LAB_1035a273c:
        func_0x000101553ccc(uVar8,uVar7,uVar3);
        uVar8 = *param_1;
        func_0x000100e25fcc(uVar8,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar8;
        goto LAB_1035a27b8;
      }
LAB_1035a2670:
      FUN_1035a1dc0(&uStack_c0,auStack_f8,0x112db6358,&UNK_10d961e20);
      FUN_1035a1dc0(&uStack_e0,auStack_f8,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar8,uVar7,uVar3);
      uVar8 = uVar9;
      uVar7 = uVar11;
      uVar3 = uVar6;
    }
    func_0x000101553ccc(uVar8,uVar7,uVar3);
  }
  else if (lVar5 == 0) {
LAB_1035a2544:
    FUN_1035a1dc0(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a1dc0(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar9,lVar4);
    func_0x00010349f458(uVar8,uVar10,lVar5);
  }
  else {
    FUN_1035a1dc0(&uStack_80,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a1dc0(&uStack_a0,&uStack_c0,0x112f759a0,&UNK_10dbd33f0);
    uVar3 = uVar7;
    FUN_1035d8f6c(uVar7,uVar9,lVar4,uVar8,uVar10,lVar5);
    func_0x00010349f458(uVar8,uVar10,lVar5);
    func_0x00010349f458(uVar7,uVar9,lVar4);
    if ((uVar3 & 1) != 0) goto LAB_1035a25e8;
  }
  uVar1 = 0;
LAB_1035a27b8:
  return uVar1 & 1;
}



/* Entry: 1035a27dc; end: 1035a281b;  */

void FUN_1035a27dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0630;
  func_0x000107c61520(&UNK_10dbe0630,&UNK_1106688e8);
  puRam0000000112f7af70 = puVar1;
  return;
}



/* Entry: 1035a281c; end: 1035a283f;  */

void FUN_1035a281c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a2840();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035a2840; end: 1035a287f;  */

void FUN_1035a2840(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0608;
  func_0x000107c61520(&UNK_10dbe0608,&UNK_1106688e8);
  puRam0000000112f7af78 = puVar1;
  return;
}



/* Entry: 1035a2880; end: 1035a28ab;  */

void FUN_1035a2880(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a27dc();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502814();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035a28ac; end: 1035a28af;  */

void FUN_1035a28ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0670;
  func_0x000107c61520(&UNK_10dbe0670,&UNK_1106688e8);
  puRam0000000112f7af80 = puVar1;
  return;
}



/* Entry: 1035a28b0; end: 1035a28ef;  */

void FUN_1035a28b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe0670;
  func_0x000107c61520(&UNK_10dbe0670,&UNK_1106688e8);
  puRam0000000112f7af80 = puVar1;
  return;
}



/* Entry: 1035a28f0; end: 1035a297b;  */

long FUN_1035a28f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035a297c; end: 1035a2a3f;  */

undefined8 * FUN_1035a297c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  lVar3 = param_2[4];
  if (lVar3 == 0) {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  else {
    uVar2 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    param_1[4] = lVar3;
    func_0x000107c6157c(lVar3);
  }
  uVar4 = param_2[7];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[6] = uVar2;
    param_1[7] = uVar4;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  return param_1;
}



/* Entry: 1035a2a40; end: 1035a2c9f;  */

undefined8 * FUN_1035a2a40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  uVar4 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar3;
  param_1[1] = uVar1;
  func_0x00010006c090(uVar4,uVar2);
  if (param_1[4] == 0) {
    if (param_2[4] == 0) {
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      param_1[4] = param_2[4];
      param_1[3] = uVar4;
      param_1[2] = uVar3;
    }
    else {
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      param_1[4] = param_2[4];
      func_0x000107c6157c();
    }
  }
  else if (param_2[4] == 0) {
    FUN_103510d9c(param_1 + 2);
    uVar3 = param_2[4];
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar3,uVar1);
    uVar4 = param_1[2];
    uVar2 = param_1[3];
    param_1[2] = uVar3;
    param_1[3] = uVar1;
    func_0x00010006c090(uVar4,uVar2);
    uVar3 = param_1[4];
    param_1[4] = param_2[4];
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
  }
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    if ((ulong)param_2[7] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
      uVar3 = param_2[6];
      uVar1 = param_2[7];
      func_0x00010006c00c(uVar3,uVar1);
      uVar4 = param_1[6];
      uVar2 = param_1[7];
      param_1[6] = uVar3;
      param_1[7] = uVar1;
      func_0x00010006c090(uVar4,uVar2);
    }
    else {
      func_0x000101599dcc(param_1 + 5);
      uVar3 = param_2[7];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      param_1[7] = uVar3;
    }
  }
  else if ((ulong)param_2[7] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[6] = uVar3;
    param_1[7] = uVar4;
  }
  else {
    uVar4 = param_2[6];
    uVar3 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar4;
    param_1[5] = uVar3;
  }
  return param_1;
}



/* Entry: 1035a2ca0; end: 1035a2d6f;  */

int FUN_1035a2ca0(int *param_1,uint param_2)

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



/* Entry: 1035a2d70; end: 1035a2df7;  */

void FUN_1035a2d70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7af90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe05dc;
  func_0x000107c61520(&DAT_10dbe05dc,&UNK_1106688e8);
  puRam0000000112f7af90 = puVar1;
  return;
}



/* Entry: 1035a2df8; end: 1035a2f03;  */

void FUN_1035a2df8(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x40;
        puVar3 = &UNK_110790c80;
LAB_1035a2e80:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_110790b00;
          goto LAB_1035a2e80;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103510fbc();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_11066abb0;
          goto LAB_1035a2e80;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1035a2f04; end: 1035a2f8f;  */

void FUN_1035a2f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035a2f90();
  if (unaff_x21 == 0) {
    FUN_1035a3010();
    FUN_1035a3098();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035a2f90; end: 1035a300f;  */

void FUN_1035a2f90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035a3010; end: 1035a3097;  */

void FUN_1035a3010(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1035a3098; end: 1035a311b;  */

void FUN_1035a3098(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x48);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_48 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035a311c; end: 1035a3167;  */

uint FUN_1035a311c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auStack_140 [32];
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar9 = param_1[3];
  uVar7 = param_1[2];
  lVar4 = param_1[4];
  uVar10 = param_2[3];
  uVar8 = param_2[2];
  lVar5 = param_2[4];
  uStack_a0 = uVar8;
  uStack_98 = uVar10;
  lStack_90 = lVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  lStack_70 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_1035a3640;
    FUN_1035a3518(&uStack_80,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a3518(&uStack_a0,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar9,0);
  }
  else {
    if (lVar5 == 0) {
LAB_1035a3640:
      FUN_1035a3518(&uStack_80,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
      FUN_1035a3518(&uStack_a0,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
      func_0x00010349f458(uVar7,uVar9,lVar4);
      func_0x00010349f458(uVar8,uVar10,lVar5);
      uVar1 = 0;
      goto LAB_1035a3a44;
    }
    FUN_1035a3518(&uStack_80,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a3518(&uStack_a0,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
    uVar3 = uVar7;
    FUN_1035d8f6c(uVar7,uVar9,lVar4,uVar8,uVar10,lVar5);
    func_0x00010349f458(uVar8,uVar10,lVar5);
    func_0x00010349f458(uVar7,uVar9,lVar4);
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
      goto LAB_1035a3a44;
    }
  }
  uVar7 = param_1[6];
  uVar8 = param_1[5];
  uVar3 = param_1[7];
  uVar11 = param_2[6];
  uVar9 = param_2[5];
  uVar6 = param_2[7];
  uStack_e0 = uVar9;
  uStack_d8 = uVar11;
  uStack_d0 = uVar6;
  uStack_c0 = uVar8;
  uStack_b8 = uVar7;
  uStack_b0 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_1035a3854;
    if ((int)uVar8 == (int)uVar9) {
      FUN_1035a3518(&uStack_c0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a3518(&uStack_e0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar11,uVar6);
      func_0x0001015dc5d0(uVar9,uVar11,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_1035a3760;
    }
    else {
      FUN_1035a3518(&uStack_c0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a3518(&uStack_e0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(uVar9,uVar11,uVar6);
    }
  }
  else {
    if (0xe < uVar6 >> 0x3c) {
      FUN_1035a3518(&uStack_c0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a3518(&uStack_e0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
LAB_1035a3760:
      func_0x0001015dc5d0(uVar8,uVar7,uVar3);
      lVar4 = param_1[9];
      uVar7 = param_1[8];
      uVar8 = param_1[0xb];
      uVar3 = param_1[10];
      lVar5 = param_2[9];
      uVar6 = param_2[8];
      uVar9 = param_2[0xb];
      uVar11 = param_2[10];
      uStack_120 = uVar6;
      lStack_118 = lVar5;
      uStack_110 = uVar11;
      uStack_108 = uVar9;
      uStack_100 = uVar7;
      lStack_f8 = lVar4;
      uStack_f0 = uVar3;
      uStack_e8 = uVar8;
      if (lVar4 == 0) {
        if (lVar5 == 0) {
          FUN_1035a3518(&uStack_100,auStack_140,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a3518(&uStack_120,auStack_140,0x112db6f40,&UNK_10d9681d0);
LAB_1035a3a24:
          func_0x000101597ae4(uVar7,lVar4,uVar3,uVar8);
          uVar8 = *param_1;
          func_0x000100e25fcc(uVar8,param_1[1],*param_2,param_2[1]);
          uVar1 = (uint)uVar8;
          goto LAB_1035a3a44;
        }
LAB_1035a3980:
        FUN_1035a3518(&uStack_100,auStack_140,0x112db6f40,&UNK_10d9681d0);
        FUN_1035a3518(&uStack_120,auStack_140,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar7,lVar4,uVar3,uVar8);
        uVar7 = uVar6;
        lVar4 = lVar5;
        uVar3 = uVar11;
        uVar8 = uVar9;
      }
      else {
        if (lVar5 == 0) goto LAB_1035a3980;
        if (((uVar7 == uVar6) && (lVar4 == lVar5)) ||
           (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar4,uVar6,lVar5,0), (uVar2 & 1) != 0)) {
          FUN_1035a3518(&uStack_100,auStack_140,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a3518(&uStack_120,auStack_140,0x112db6f40,&UNK_10d9681d0);
          uVar2 = uVar3;
          func_0x000100e25fcc(uVar3,uVar8,uVar11,uVar9);
          func_0x000101597ae4(uVar6,lVar5,uVar11,uVar9);
          if ((uVar2 & 1) != 0) goto LAB_1035a3a24;
        }
        else {
          FUN_1035a3518(&uStack_100,auStack_140,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a3518(&uStack_120,auStack_140,0x112db6f40,&UNK_10d9681d0);
          func_0x000101597ae4(uVar6,lVar5,uVar11,uVar9);
        }
      }
      func_0x000101597ae4(uVar7,lVar4,uVar3,uVar8);
      uVar1 = 0;
      goto LAB_1035a3a44;
    }
LAB_1035a3854:
    FUN_1035a3518(&uStack_c0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
    FUN_1035a3518(&uStack_e0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
    func_0x0001015dc5d0(uVar8,uVar7,uVar3);
    uVar8 = uVar9;
    uVar7 = uVar11;
    uVar3 = uVar6;
  }
  func_0x0001015dc5d0(uVar8,uVar7,uVar3);
  uVar1 = 0;
LAB_1035a3a44:
  return uVar1 & 1;
}



/* Entry: 1035a3168; end: 1035a3197;  */

undefined1  [16] FUN_1035a3168(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035a3198; end: 1035a31cb;  */

void FUN_1035a3198(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035a31cc; end: 1035a31df;  */

undefined8 FUN_1035a31cc(void)

{
  return 0x1035a31dc;
}



/* Entry: 1035a31e0; end: 1035a31f3;  */

void FUN_1035a31e0(void)

{
  FUN_1035a2df8();
  return;
}



/* Entry: 1035a31f4; end: 1035a3233;  */

void FUN_1035a31f4(void)

{
  FUN_1035a2f04();
  return;
}



/* Entry: 1035a3234; end: 1035a3237;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035a3234(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035a3238; end: 1035a326f;  */

uint FUN_1035a3238(long param_1,long param_2)

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
  FUN_1035a4190();
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



/* Entry: 1035a3270; end: 1035a32c7;  */

uint FUN_1035a3270(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
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
  FUN_1035a3560(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1035a32c8; end: 1035a3367;  */

/* WARNING: Possible PIC construction at 0x0001035a3314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035a3324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035a3318) */
/* WARNING: Removing unreachable block (ram,0x0001035a3328) */

void FUN_1035a32c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7af98 != -1) {
    func_0x000107c61568(0x112f7af98,0x1035a2db0);
  }
  uVar5 = uRam0000000113808f08;
  uVar4 = uRam0000000113808f00;
  uVar3 = uRam0000000113808ef8;
  uVar2 = uRam0000000113808ef0;
  uVar1 = uRam0000000113808ee8;
  *param_1 = uRam0000000113808ee0;
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



/* Entry: 1035a3368; end: 1035a33a3;  */

void FUN_1035a3368(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7afb8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7afb8,&UNK_10dbe08a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035a33a4; end: 1035a34bf;  */

void FUN_1035a33a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035a34c0; end: 1035a3517;  */

uint FUN_1035a34c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_1035a3560(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1035a3518; end: 1035a355f;  */

undefined8 FUN_1035a3518(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035a3560; end: 1035a3ac7;  */

uint FUN_1035a3560(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auStack_140 [32];
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar9 = param_1[3];
  uVar7 = param_1[2];
  lVar4 = param_1[4];
  uVar10 = param_2[3];
  uVar8 = param_2[2];
  lVar5 = param_2[4];
  uStack_a0 = uVar8;
  uStack_98 = uVar10;
  lStack_90 = lVar5;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  lStack_70 = lVar4;
  if (lVar4 == 0) {
    if (lVar5 != 0) goto LAB_1035a3640;
    FUN_1035a3518(&uStack_80,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a3518(&uStack_a0,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
    func_0x00010349f458(uVar7,uVar9,0);
  }
  else {
    if (lVar5 == 0) {
LAB_1035a3640:
      FUN_1035a3518(&uStack_80,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
      FUN_1035a3518(&uStack_a0,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
      func_0x00010349f458(uVar7,uVar9,lVar4);
      func_0x00010349f458(uVar8,uVar10,lVar5);
      uVar1 = 0;
      goto LAB_1035a3a44;
    }
    FUN_1035a3518(&uStack_80,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
    FUN_1035a3518(&uStack_a0,&uStack_100,0x112f759a0,&UNK_10dbd33f0);
    uVar3 = uVar7;
    FUN_1035d8f6c(uVar7,uVar9,lVar4,uVar8,uVar10,lVar5);
    func_0x00010349f458(uVar8,uVar10,lVar5);
    func_0x00010349f458(uVar7,uVar9,lVar4);
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
      goto LAB_1035a3a44;
    }
  }
  uVar7 = param_1[6];
  uVar8 = param_1[5];
  uVar3 = param_1[7];
  uVar11 = param_2[6];
  uVar9 = param_2[5];
  uVar6 = param_2[7];
  uStack_e0 = uVar9;
  uStack_d8 = uVar11;
  uStack_d0 = uVar6;
  uStack_c0 = uVar8;
  uStack_b8 = uVar7;
  uStack_b0 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_1035a3854;
    if ((int)uVar8 == (int)uVar9) {
      FUN_1035a3518(&uStack_c0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a3518(&uStack_e0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar3,uVar11,uVar6);
      func_0x0001015dc5d0(uVar9,uVar11,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_1035a3760;
    }
    else {
      FUN_1035a3518(&uStack_c0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a3518(&uStack_e0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
      func_0x0001015dc5d0(uVar9,uVar11,uVar6);
    }
  }
  else {
    if (0xe < uVar6 >> 0x3c) {
      FUN_1035a3518(&uStack_c0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
      FUN_1035a3518(&uStack_e0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
LAB_1035a3760:
      func_0x0001015dc5d0(uVar8,uVar7,uVar3);
      lVar4 = param_1[9];
      uVar7 = param_1[8];
      uVar8 = param_1[0xb];
      uVar3 = param_1[10];
      lVar5 = param_2[9];
      uVar6 = param_2[8];
      uVar9 = param_2[0xb];
      uVar11 = param_2[10];
      uStack_120 = uVar6;
      lStack_118 = lVar5;
      uStack_110 = uVar11;
      uStack_108 = uVar9;
      uStack_100 = uVar7;
      lStack_f8 = lVar4;
      uStack_f0 = uVar3;
      uStack_e8 = uVar8;
      if (lVar4 == 0) {
        if (lVar5 == 0) {
          FUN_1035a3518(&uStack_100,auStack_140,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a3518(&uStack_120,auStack_140,0x112db6f40,&UNK_10d9681d0);
LAB_1035a3a24:
          func_0x000101597ae4(uVar7,lVar4,uVar3,uVar8);
          uVar8 = *param_1;
          func_0x000100e25fcc(uVar8,param_1[1],*param_2,param_2[1]);
          uVar1 = (uint)uVar8;
          goto LAB_1035a3a44;
        }
LAB_1035a3980:
        FUN_1035a3518(&uStack_100,auStack_140,0x112db6f40,&UNK_10d9681d0);
        FUN_1035a3518(&uStack_120,auStack_140,0x112db6f40,&UNK_10d9681d0);
        func_0x000101597ae4(uVar7,lVar4,uVar3,uVar8);
        uVar7 = uVar6;
        lVar4 = lVar5;
        uVar3 = uVar11;
        uVar8 = uVar9;
      }
      else {
        if (lVar5 == 0) goto LAB_1035a3980;
        if (((uVar7 == uVar6) && (lVar4 == lVar5)) ||
           (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar4,uVar6,lVar5,0), (uVar2 & 1) != 0)) {
          FUN_1035a3518(&uStack_100,auStack_140,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a3518(&uStack_120,auStack_140,0x112db6f40,&UNK_10d9681d0);
          uVar2 = uVar3;
          func_0x000100e25fcc(uVar3,uVar8,uVar11,uVar9);
          func_0x000101597ae4(uVar6,lVar5,uVar11,uVar9);
          if ((uVar2 & 1) != 0) goto LAB_1035a3a24;
        }
        else {
          FUN_1035a3518(&uStack_100,auStack_140,0x112db6f40,&UNK_10d9681d0);
          FUN_1035a3518(&uStack_120,auStack_140,0x112db6f40,&UNK_10d9681d0);
          func_0x000101597ae4(uVar6,lVar5,uVar11,uVar9);
        }
      }
      func_0x000101597ae4(uVar7,lVar4,uVar3,uVar8);
      uVar1 = 0;
      goto LAB_1035a3a44;
    }
LAB_1035a3854:
    FUN_1035a3518(&uStack_c0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
    FUN_1035a3518(&uStack_e0,&uStack_100,0x112db80f8,&UNK_10d9671e0);
    func_0x0001015dc5d0(uVar8,uVar7,uVar3);
    uVar8 = uVar9;
    uVar7 = uVar11;
    uVar3 = uVar6;
  }
  func_0x0001015dc5d0(uVar8,uVar7,uVar3);
  uVar1 = 0;
LAB_1035a3a44:
  return uVar1 & 1;
}



/* Entry: 1035a3ac8; end: 1035a3b07;  */

void FUN_1035a3ac8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7afa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe07d8;
  func_0x000107c61520(&UNK_10dbe07d8,&UNK_110668a98);
  puRam0000000112f7afa0 = puVar1;
  return;
}



/* Entry: 1035a3b08; end: 1035a3b2b;  */

void FUN_1035a3b08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a3b2c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035a3b2c; end: 1035a3b6b;  */

void FUN_1035a3b2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7afa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe07b0;
  func_0x000107c61520(&UNK_10dbe07b0,&UNK_110668a98);
  puRam0000000112f7afa8 = puVar1;
  return;
}



/* Entry: 1035a3b6c; end: 1035a3b97;  */

void FUN_1035a3b6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035a3ac8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502c94();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


