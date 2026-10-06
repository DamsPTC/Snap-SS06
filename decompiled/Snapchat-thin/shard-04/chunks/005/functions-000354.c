/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035e97c8; end: 1035e9823;  */

void FUN_1035e97c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035e9824();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035e9824; end: 1035e98a7;  */

void FUN_1035e9824(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x18);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,1,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e98a8; end: 1035e98e3;  */

void FUN_1035e98a8(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 1035e98e4; end: 1035e9913;  */

undefined1  [16] FUN_1035e98e4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035e9914; end: 1035e9947;  */

void FUN_1035e9914(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035e9948; end: 1035e995b;  */

undefined8 FUN_1035e9948(void)

{
  return 0x1035e9958;
}



/* Entry: 1035e995c; end: 1035e996f;  */

void FUN_1035e995c(void)

{
  FUN_1035e9714();
  return;
}



/* Entry: 1035e9970; end: 1035e99a7;  */

void FUN_1035e9970(void)

{
  FUN_1035e97c8();
  return;
}



/* Entry: 1035e99a8; end: 1035e99ab;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035e99a8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035e99ac; end: 1035e99e3;  */

uint FUN_1035e99ac(long param_1,long param_2)

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
  func_0x0001035ecaec();
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



/* Entry: 1035e99e4; end: 1035e9a2b;  */

uint FUN_1035e99e4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_1035eb55c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1035e9a2c; end: 1035e9acb;  */

/* WARNING: Possible PIC construction at 0x0001035e9a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035e9a88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035e9a7c) */
/* WARNING: Removing unreachable block (ram,0x0001035e9a8c) */

void FUN_1035e9a2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d0c0 != -1) {
    func_0x000107c61568(0x112f7d0c0,FUN_1035e96cc);
  }
  uVar5 = uRam0000000113809518;
  uVar4 = uRam0000000113809510;
  uVar3 = uRam0000000113809508;
  uVar2 = uRam0000000113809500;
  uVar1 = uRam00000001138094f8;
  *param_1 = uRam00000001138094f0;
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



/* Entry: 1035e9acc; end: 1035e9b07;  */

void FUN_1035e9acc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7d118;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7d118,&UNK_10dbe5390);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035e9b08; end: 1035e9c0b;  */

void FUN_1035e9b08(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035e9c0c; end: 1035e9c97;  */

uint FUN_1035e9c0c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_1035eb55c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1035e9c98; end: 1035e9df7;  */

void FUN_1035e9c98(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          goto LAB_1035e9d20;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          goto LAB_1035e9d20;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001035ecb2c();
        }
        else if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x0001035eb7f8();
        }
        else {
          if (lVar1 != 5) goto LAB_1035e9d34;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
        }
LAB_1035e9d20:
        (*pcVar4)();
      }
LAB_1035e9d34:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035e9df8; end: 1035e9eef;  */

void FUN_1035e9df8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  FUN_1035e9ef0();
  if (unaff_x21 == 0) {
    FUN_1035e9f78();
    plVar1 = unaff_x20;
    FUN_1035ea000();
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001035eb7f8();
      (*pcVar3)(lVar2,4,&UNK_11066b998,plVar1,param_2,param_3);
    }
    FUN_1035ea088();
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1035e9ef0; end: 1035e9f77;  */

void FUN_1035e9ef0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x18);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,1,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035e9f78; end: 1035e9fff;  */

void FUN_1035e9f78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035ea000; end: 1035ea087;  */

void FUN_1035ea000(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001035ecb2c();
    (*pcVar1)(&uStack_60,3,&UNK_110790a80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035ea088; end: 1035ea10f;  */

void FUN_1035ea088(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x60);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,5,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035ea110; end: 1035ea17f;  */

uint FUN_1035ea110(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_188 [3];
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
  
  uVar13 = param_1[4];
  uVar11 = param_1[3];
  uVar7 = param_1[5];
  uVar14 = param_2[4];
  uVar12 = param_2[3];
  uVar10 = param_2[5];
  uStack_b0 = uVar12;
  uStack_a8 = uVar14;
  uStack_a0 = uVar10;
  uStack_90 = uVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar7;
  if ((uVar11 & 0xff) == 2) {
    if ((uVar12 & 0xff) != 2) {
LAB_1035ebaac:
      FUN_1035eb514(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      puVar2 = &uStack_b0;
      puVar4 = &uStack_d0;
      uVar3 = uVar7;
      uVar8 = uVar13;
      uVar9 = uVar11;
      uVar7 = uVar10;
      uVar13 = uVar14;
      uVar11 = uVar12;
LAB_1035ebad8:
      FUN_1035eb514(puVar2,puVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar9,uVar8,uVar3);
      goto LAB_1035ebc04;
    }
    FUN_1035eb514(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
    FUN_1035eb514(&uStack_b0,&uStack_d0,0x112db94f0,&UNK_10d96af00);
LAB_1035eb8dc:
    func_0x000101556278(uVar11,uVar13,uVar7);
    uVar13 = param_1[7];
    uVar11 = param_1[6];
    uVar7 = param_1[8];
    uVar14 = param_2[7];
    uVar12 = param_2[6];
    uVar10 = param_2[8];
    uStack_f0 = uVar12;
    uStack_e8 = uVar14;
    uStack_e0 = uVar10;
    uStack_d0 = uVar11;
    uStack_c8 = uVar13;
    uStack_c0 = uVar7;
    if (uVar7 >> 0x3c < 0xf) {
      if (0xe < uVar10 >> 0x3c) goto LAB_1035ebb64;
      if (uVar11 == uVar12) {
        FUN_1035eb514(&uStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        FUN_1035eb514(&uStack_f0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        uVar12 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d56340(uVar11,uVar14,uVar10);
        if ((uVar12 & 1) != 0) goto LAB_1035eb964;
      }
      else {
        uVar5 = 0x112db6f48;
        puVar6 = &UNK_10d969b40;
        FUN_1035eb514(&uStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        puVar2 = &uStack_f0;
        puVar4 = &uStack_110;
LAB_1035ebdac:
        FUN_1035eb514(puVar2,puVar4,uVar5,puVar6);
        func_0x000100d56340(uVar12,uVar14,uVar10);
      }
LAB_1035ebdd4:
      func_0x000100d56340(uVar11,uVar13,uVar7);
    }
    else {
      if (uVar10 >> 0x3c < 0xf) {
LAB_1035ebb64:
        uVar5 = 0x112db6f48;
        puVar6 = &UNK_10d969b40;
        FUN_1035eb514(&uStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        puVar2 = &uStack_f0;
        puVar4 = &uStack_110;
        uVar3 = uVar7;
        uVar8 = uVar13;
        uVar9 = uVar11;
        uVar7 = uVar10;
        uVar13 = uVar14;
        uVar11 = uVar12;
LAB_1035ebcb4:
        FUN_1035eb514(puVar2,puVar4,uVar5,puVar6);
        func_0x000100d56340(uVar9,uVar8,uVar3);
        goto LAB_1035ebdd4;
      }
      FUN_1035eb514(&uStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
      FUN_1035eb514(&uStack_f0,&uStack_110,0x112db6f48,&UNK_10d969b40);
LAB_1035eb964:
      func_0x000100d56340(uVar11,uVar13,uVar7);
      uVar13 = param_1[10];
      uVar11 = param_1[9];
      uVar7 = param_1[0xb];
      uVar14 = param_2[10];
      uVar12 = param_2[9];
      uVar10 = param_2[0xb];
      uStack_130 = uVar12;
      uStack_128 = uVar14;
      uStack_120 = uVar10;
      uStack_110 = uVar11;
      uStack_108 = uVar13;
      uStack_100 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035ebc88;
        if (uVar11 != uVar12) {
          uVar5 = 0x112f7d0b8;
          puVar6 = &UNK_10dbe5138;
          FUN_1035eb514(&uStack_110,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
          puVar2 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_1035ebdac;
        }
        FUN_1035eb514(&uStack_110,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
        FUN_1035eb514(&uStack_130,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
        uVar12 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d56340(uVar11,uVar14,uVar10);
        if ((uVar12 & 1) == 0) goto LAB_1035ebdd4;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035ebc88:
          uVar5 = 0x112f7d0b8;
          puVar6 = &UNK_10dbe5138;
          FUN_1035eb514(&uStack_110,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
          puVar2 = &uStack_130;
          puVar4 = &uStack_150;
          uVar3 = uVar7;
          uVar8 = uVar13;
          uVar9 = uVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_1035ebcb4;
        }
        FUN_1035eb514(&uStack_110,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
        FUN_1035eb514(&uStack_130,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
      }
      func_0x000100d56340(uVar11,uVar13,uVar7);
      uVar7 = *param_1;
      FUN_1035ea5b0(uVar7,*param_2);
      if ((uVar7 & 1) != 0) {
        uVar13 = param_1[0xd];
        uVar11 = param_1[0xc];
        uVar7 = param_1[0xe];
        uVar14 = param_2[0xd];
        uVar12 = param_2[0xc];
        uVar10 = param_2[0xe];
        uStack_170 = uVar12;
        uStack_168 = uVar14;
        uStack_160 = uVar10;
        uStack_150 = uVar11;
        uStack_148 = uVar13;
        uStack_140 = uVar7;
        if ((uVar11 & 0xff) == 2) {
          if ((uVar12 & 0xff) != 2) {
LAB_1035ebe08:
            FUN_1035eb514(&uStack_150,auStack_188,0x112db94f0,&UNK_10d96af00);
            puVar2 = &uStack_170;
            puVar4 = auStack_188;
            uVar3 = uVar7;
            uVar8 = uVar13;
            uVar9 = uVar11;
            uVar7 = uVar10;
            uVar13 = uVar14;
            uVar11 = uVar12;
            goto LAB_1035ebad8;
          }
          FUN_1035eb514(&uStack_150,auStack_188,0x112db94f0,&UNK_10d96af00);
          FUN_1035eb514(&uStack_170,auStack_188,0x112db94f0,&UNK_10d96af00);
        }
        else {
          if ((uVar12 & 0xff) == 2) goto LAB_1035ebe08;
          if ((((uint)uVar12 ^ (uint)uVar11) & 1) != 0) {
            FUN_1035eb514(&uStack_150,auStack_188,0x112db94f0,&UNK_10d96af00);
            puVar2 = &uStack_170;
            puVar4 = auStack_188;
            goto LAB_1035ebb38;
          }
          FUN_1035eb514(&uStack_150,auStack_188,0x112db94f0,&UNK_10d96af00);
          FUN_1035eb514(&uStack_170,auStack_188,0x112db94f0,&UNK_10d96af00);
          uVar3 = uVar13;
          func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
          func_0x000101556278(uVar12,uVar14,uVar10);
          if ((uVar3 & 1) == 0) goto LAB_1035ebc04;
        }
        func_0x000101556278(uVar11,uVar13,uVar7);
        uVar7 = param_1[1];
        func_0x000100e25fcc(uVar7,param_1[2],param_2[1],param_2[2]);
        uVar1 = (uint)uVar7;
        goto LAB_1035ebddc;
      }
    }
  }
  else {
    if ((uVar12 & 0xff) == 2) goto LAB_1035ebaac;
    if ((((uint)uVar12 ^ (uint)uVar11) & 1) == 0) {
      FUN_1035eb514(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_1035eb514(&uStack_b0,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      uVar3 = uVar13;
      func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
      func_0x000101556278(uVar12,uVar14,uVar10);
      if ((uVar3 & 1) != 0) goto LAB_1035eb8dc;
    }
    else {
      FUN_1035eb514(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      puVar2 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_1035ebb38:
      FUN_1035eb514(puVar2,puVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar12,uVar14,uVar10);
    }
LAB_1035ebc04:
    func_0x000101556278(uVar11,uVar13,uVar7);
  }
  uVar1 = 0;
LAB_1035ebddc:
  return uVar1 & 1;
}



/* Entry: 1035ea180; end: 1035ea1af;  */

undefined1  [16] FUN_1035ea180(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1035ea1b0; end: 1035ea1e3;  */

void FUN_1035ea1b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1035ea1e4; end: 1035ea1f7;  */

undefined1  [16] FUN_1035ea1e4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1035ea1f4;
  return auVar1;
}



/* Entry: 1035ea1f8; end: 1035ea20b;  */

void FUN_1035ea1f8(void)

{
  FUN_1035e9c98();
  return;
}



/* Entry: 1035ea20c; end: 1035ea25b;  */

void FUN_1035ea20c(void)

{
  FUN_1035e9df8();
  return;
}



/* Entry: 1035ea25c; end: 1035ea25f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035ea25c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035ea260; end: 1035ea297;  */

uint FUN_1035ea260(long param_1,long param_2)

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
  FUN_1035ecaac();
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



/* Entry: 1035ea298; end: 1035ea317;  */

uint FUN_1035ea298(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_b0 = unaff_x20[0xe];
  FUN_1035eb838(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1035ea318; end: 1035ea3b7;  */

/* WARNING: Possible PIC construction at 0x0001035ea364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035ea374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035ea368) */
/* WARNING: Removing unreachable block (ram,0x0001035ea378) */

void FUN_1035ea318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d0d0 != -1) {
    func_0x000107c61568(0x112f7d0d0,0x1035e9c50);
  }
  uVar5 = uRam0000000113809548;
  uVar4 = uRam0000000113809540;
  uVar3 = uRam0000000113809538;
  uVar2 = uRam0000000113809530;
  uVar1 = uRam0000000113809528;
  *param_1 = uRam0000000113809520;
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



/* Entry: 1035ea3b8; end: 1035ea3f3;  */

void FUN_1035ea3b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7d108;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7d108,&UNK_10dbe5388);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035ea3f4; end: 1035ea52f;  */

void FUN_1035ea3f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_f8 [72];
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
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  func_0x000107c6068c(auStack_f8,0);
  func_0x000107c5fa50(auStack_f8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035ea530; end: 1035ea5af;  */

uint FUN_1035ea530(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  FUN_1035eb838(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1035ea5b0; end: 1035eb513;  */

ulong FUN_1035ea5b0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong *puStack_b8;
  ulong *puStack_b0;
  byte bStack_89;
  byte abStack_88 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *(long *)(param_1 + 0x10);
  if (lVar24 == *(long *)(param_2 + 0x10)) {
    if ((lVar24 != 0) && (param_1 != param_2)) {
      puStack_b8 = (ulong *)(param_1 + 0x48);
      puStack_b0 = (ulong *)(param_2 + 0x28);
      do {
        uVar11 = puStack_b8[-5];
        uVar14 = puStack_b8[-4];
        uVar1 = puStack_b8[-3];
        param_2 = puStack_b8[-2];
        param_3 = puStack_b8[-1];
        param_4 = *puStack_b8;
        uVar2 = puStack_b0[-1];
        uVar4 = *puStack_b0;
        uVar12 = puStack_b0[1];
        uVar5 = puStack_b0[2];
        uVar3 = puStack_b0[3];
        uVar6 = puStack_b0[4];
        if (param_2 != 0) {
          if (uVar5 == 0) goto LAB_1035eb23c;
          if (((uVar1 != uVar12) || (param_2 != uVar5)) &&
             (uVar18 = uVar1, func_0x000107c605b8(uVar1,param_2,uVar12,uVar5,0), (uVar18 & 1) == 0))
          {
            func_0x00010006c00c(uVar11);
            func_0x000101597350(uVar1,param_2,param_3,param_4);
            func_0x00010006c00c(uVar2,uVar4);
            func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
            func_0x000101597350(uVar1,param_2,param_3,param_4);
            func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
            func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
            func_0x000101597ae4(uVar1,param_2,param_3,param_4);
            func_0x00010006c090(uVar2,uVar4);
            func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
            func_0x00010006c090(uVar11,uVar14);
            uVar12 = uVar1;
            goto LAB_1035eb490;
          }
          uVar7 = (uint)(param_4 >> 0x20);
          uVar16 = uVar7 >> 0x1e;
          uVar8 = (uint)(uVar6 >> 0x20);
          uVar20 = uVar8 >> 0x1e;
          iVar22 = (int)param_3;
          if (param_4 >> 0x3e == 3) {
            uVar18 = 0;
            if (((param_3 == 0) && (param_4 == 0xc000000000000000)) &&
               ((2 < uVar6 >> 0x3e && ((uVar18 = 0, uVar3 == 0 && (uVar6 == 0xc000000000000000))))))
            {
              func_0x00010006c00c(uVar11);
              func_0x000101597350(uVar1,param_2,0,0xc000000000000000);
              func_0x00010006c00c(uVar2,uVar4);
              func_0x000101597350(uVar12,uVar5,0,0xc000000000000000);
              func_0x000101597350(uVar1,param_2,0,0xc000000000000000);
              func_0x000101597350(uVar12,uVar5,0,0xc000000000000000);
              func_0x000101597ae4(uVar12,uVar5,0,0xc000000000000000);
              goto LAB_1035eae5c;
            }
joined_r0x0001035eaba4:
            if (uVar20 < 2) goto LAB_1035ea89c;
LAB_1035ea860:
            if (uVar20 == 2) {
              uVar19 = *(long *)(uVar3 + 0x18) - *(long *)(uVar3 + 0x10);
              if (SBORROW8(*(long *)(uVar3 + 0x18),*(long *)(uVar3 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4e0);
                (*pcVar10)();
              }
              goto LAB_1035ea8c4;
            }
            if (uVar18 == 0) goto LAB_1035eaa08;
LAB_1035eb2d4:
            func_0x00010006c00c(uVar11);
            func_0x000101597350(uVar1,param_2,param_3,param_4);
            func_0x00010006c00c(uVar2,uVar4);
            func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
            func_0x000101597350(uVar1,param_2,param_3,param_4);
            func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
            func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
          }
          else {
            if (1 < uVar7 >> 0x1e) {
              if (uVar16 == 2) {
                uVar18 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
                if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4f4);
                  (*pcVar10)();
                }
              }
              else {
                uVar18 = 0;
              }
              goto joined_r0x0001035eaba4;
            }
            if (uVar16 != 0) {
              iVar17 = (int)(param_3 >> 0x20);
              if (SBORROW4(iVar17,iVar22)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4f8);
                (*pcVar10)();
              }
              uVar18 = (ulong)(iVar17 - iVar22);
              goto joined_r0x0001035eaba4;
            }
            uVar18 = param_4 >> 0x30 & 0xff;
            if (1 < uVar8 >> 0x1e) goto LAB_1035ea860;
LAB_1035ea89c:
            if (uVar20 == 0) {
              uVar19 = uVar6 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(uVar3 >> 0x20);
              if (SBORROW4(iVar17,(int)uVar3)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4dc);
                (*pcVar10)();
              }
              uVar19 = (ulong)(iVar17 - (int)uVar3);
            }
LAB_1035ea8c4:
            if (uVar18 != uVar19) goto LAB_1035eb2d4;
            if ((long)uVar18 < 1) {
LAB_1035eaa08:
              func_0x00010006c00c(uVar11);
              func_0x000101597350(uVar1,param_2,param_3,param_4);
              func_0x00010006c00c(uVar2,uVar4);
              func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
              func_0x000101597350(uVar1,param_2,param_3,param_4);
              func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
              func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
              goto LAB_1035eae5c;
            }
            if (uVar16 < 2) {
              if (uVar16 == 0) {
                abStack_88[0] = (byte)param_3;
                abStack_88[1] = (byte)(param_3 >> 8);
                abStack_88[2] = (byte)(param_3 >> 0x10);
                abStack_88[3] = (byte)(param_3 >> 0x18);
                abStack_88[4] = (byte)(param_3 >> 0x20);
                abStack_88[5] = (byte)(param_3 >> 0x28);
                abStack_88[6] = (byte)(param_3 >> 0x30);
                abStack_88[7] = (byte)(param_3 >> 0x38);
                abStack_88[8] = (byte)param_4;
                abStack_88[9] = (byte)(param_4 >> 8);
                abStack_88[10] = (byte)(param_4 >> 0x10);
                abStack_88[0xb] = (byte)(param_4 >> 0x18);
                abStack_88[0xc] = (byte)(param_4 >> 0x20);
                abStack_88[0xd] = (byte)(param_4 >> 0x28);
                func_0x00010006c00c(uVar11);
                func_0x000101597350(uVar1,param_2,param_3,param_4);
                func_0x00010006c00c(uVar2,uVar4);
                func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
                func_0x000101597350(uVar1,param_2,param_3,param_4);
                func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
                func_0x000100e25bdc(&bStack_89,abStack_88,abStack_88 + (param_4 >> 0x30 & 0xff),
                                    uVar3,uVar6);
                goto LAB_1035ead58;
              }
              lVar25 = (long)iVar22;
              uVar18 = ((long)param_3 >> 0x20) - lVar25;
              if ((long)param_3 >> 0x20 < lVar25) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4fc);
                (*pcVar10)();
              }
              func_0x00010006c00c(uVar11);
              func_0x000101597350(uVar1,param_2,param_3,param_4);
              func_0x00010006c00c(uVar2,uVar4);
              func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
              func_0x000101597350(uVar1,param_2,param_3,param_4);
              uVar19 = uVar12;
              func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
              func_0x000107c5ec30();
              if (uVar19 == 0) {
                func_0x000107c5ec38();
                lVar25 = 0;
                lVar13 = 0;
              }
              else {
                uVar21 = uVar19;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,uVar21)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb510);
                  (*pcVar10)();
                }
                lVar23 = (lVar25 - uVar21) + uVar19;
                func_0x000107c5ec38();
                if ((long)uVar18 <= (long)uVar21) {
                  uVar21 = uVar18;
                }
                lVar25 = 0;
                if (lVar23 != 0) {
                  lVar25 = lVar23;
                }
                lVar13 = 0;
                if (lVar23 != 0) {
                  lVar13 = uVar21 + lVar23;
                }
              }
              func_0x000100e25bdc(abStack_88,lVar25,lVar13,uVar3,uVar6);
              func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
              bVar9 = abStack_88[0];
            }
            else if (uVar16 == 2) {
              lVar25 = *(long *)(param_3 + 0x10);
              lVar13 = *(long *)(param_3 + 0x18);
              func_0x00010006c00c(uVar11);
              func_0x000101597350(uVar1,param_2,param_3,param_4);
              func_0x00010006c00c(uVar2,uVar4);
              func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
              func_0x000101597350(uVar1,param_2,param_3,param_4);
              uVar18 = uVar12;
              func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
              func_0x000107c5ec30();
              if (uVar18 == 0) {
                lVar23 = 0;
              }
              else {
                uVar19 = uVar18;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,uVar19)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb50c);
                  (*pcVar10)();
                }
                lVar23 = (lVar25 - uVar19) + uVar18;
                uVar18 = uVar19;
              }
              uVar19 = lVar13 - lVar25;
              if (SBORROW8(lVar13,lVar25)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb500);
                (*pcVar10)();
              }
              func_0x000107c5ec38(param_4);
              if (lVar23 == 0) {
                lVar25 = 0;
              }
              else {
                if ((long)uVar19 <= (long)uVar18) {
                  uVar18 = uVar19;
                }
                lVar25 = uVar18 + lVar23;
              }
              func_0x000100e25bdc(abStack_88,lVar23,lVar25,uVar3,uVar6);
              func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
              bVar9 = abStack_88[0];
            }
            else {
              abStack_88[8] = 0;
              abStack_88[9] = 0;
              abStack_88[10] = 0;
              abStack_88[0xb] = 0;
              abStack_88[0xc] = 0;
              abStack_88[0xd] = 0;
              abStack_88[0] = 0;
              abStack_88[1] = 0;
              abStack_88[2] = 0;
              abStack_88[3] = 0;
              abStack_88[4] = 0;
              abStack_88[5] = 0;
              abStack_88[6] = 0;
              abStack_88[7] = 0;
              func_0x00010006c00c(uVar11);
              func_0x000101597350(uVar1,param_2,param_3,param_4);
              func_0x00010006c00c(uVar2,uVar4);
              func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
              func_0x000101597350(uVar1,param_2,param_3,param_4);
              func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
              func_0x000100e25bdc(&bStack_89,abStack_88,abStack_88,uVar3,uVar6);
LAB_1035ead58:
              func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
              bVar9 = bStack_89;
            }
            if ((bVar9 & 1) != 0) goto LAB_1035eae5c;
          }
          func_0x000101597ae4(uVar1,param_2,param_3,param_4);
          func_0x00010006c090(uVar2,uVar4);
          func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
          func_0x00010006c090(uVar11,uVar14);
          uVar12 = uVar1;
LAB_1035eb490:
          func_0x000101597ae4(uVar12,param_2,param_3,param_4);
          goto LAB_1035eb494;
        }
        if (uVar5 != 0) {
LAB_1035eb23c:
          func_0x000101597350(uVar1,param_2,param_3,param_4);
          func_0x000101597350(uVar12,uVar5,uVar3,uVar6);
          func_0x000101597ae4(uVar1,param_2,param_3,param_4);
          param_2 = uVar5;
          param_3 = uVar3;
          param_4 = uVar6;
          goto LAB_1035eb490;
        }
        func_0x00010006c00c(uVar11);
        func_0x000101597350(uVar1,0,param_3,param_4);
        func_0x00010006c00c(uVar2,uVar4);
        func_0x000101597350(uVar12,0,uVar3,uVar6);
        func_0x000101597350(uVar1,0,param_3,param_4);
        func_0x000101597350(uVar12,0,uVar3,uVar6);
LAB_1035eae5c:
        uVar18 = uVar1;
        func_0x000101597ae4(uVar1,param_2,param_3,param_4);
        uVar7 = (uint)(uVar14 >> 0x20);
        uVar16 = uVar7 >> 0x1e;
        uVar8 = (uint)(uVar4 >> 0x20);
        uVar20 = uVar8 >> 0x1e;
        iVar22 = (int)uVar11;
        if (uVar14 >> 0x3e == 3) {
          uVar19 = 0;
          if ((((uVar11 != 0) || (uVar14 != 0xc000000000000000)) || (uVar4 >> 0x3e < 3)) ||
             ((uVar19 = 0, uVar2 != 0 || (uVar4 != 0xc000000000000000)))) {
joined_r0x0001035eb050:
            if (1 < uVar20) goto LAB_1035eaef4;
LAB_1035eaf28:
            if (uVar20 == 0) {
              uVar21 = uVar4 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar17,(int)uVar2)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4d4);
                (*pcVar10)();
              }
              uVar21 = (ulong)(iVar17 - (int)uVar2);
            }
            goto LAB_1035eaf44;
          }
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
          uVar11 = 0;
          uVar14 = 0xc000000000000000;
LAB_1035ea63c:
          func_0x00010006c090(uVar11,uVar14);
          func_0x000101597ae4(uVar1,param_2,param_3,param_4);
        }
        else {
          if (1 < uVar7 >> 0x1e) {
            if (uVar16 == 2) {
              uVar19 = *(long *)(uVar11 + 0x18) - *(long *)(uVar11 + 0x10);
              if (SBORROW8(*(long *)(uVar11 + 0x18),*(long *)(uVar11 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4e8);
                (*pcVar10)();
              }
            }
            else {
              uVar19 = 0;
            }
            goto joined_r0x0001035eb050;
          }
          if (uVar16 == 0) {
            uVar19 = uVar14 >> 0x30 & 0xff;
          }
          else {
            iVar17 = (int)(uVar11 >> 0x20);
            if (SBORROW4(iVar17,iVar22)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4e4);
              (*pcVar10)();
            }
            uVar19 = (ulong)(iVar17 - iVar22);
          }
          if (uVar8 >> 0x1e < 2) goto LAB_1035eaf28;
LAB_1035eaef4:
          if (uVar20 != 2) {
            if (uVar19 != 0) {
LAB_1035eb298:
              func_0x00010006c090(uVar2,uVar4);
              func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
              func_0x00010006c090(uVar11,uVar14);
              uVar12 = uVar1;
              goto LAB_1035eb490;
            }
LAB_1035ea614:
            func_0x00010006c090(uVar2,uVar4);
            func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
            goto LAB_1035ea63c;
          }
          uVar21 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
          if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4d8);
            (*pcVar10)();
          }
LAB_1035eaf44:
          if (uVar19 != uVar21) goto LAB_1035eb298;
          if ((long)uVar19 < 1) goto LAB_1035ea614;
          if (uVar16 < 2) {
            if (uVar16 != 0) {
              lVar25 = (long)iVar22;
              uVar19 = ((long)uVar11 >> 0x20) - lVar25;
              if ((long)uVar11 >> 0x20 < lVar25) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4ec);
                (*pcVar10)();
              }
              func_0x000107c5ec30();
              if (uVar18 == 0) {
                func_0x000107c5ec38();
                lVar25 = 0;
                lVar13 = 0;
              }
              else {
                uVar21 = uVar18;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,uVar21)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb508);
                  (*pcVar10)();
                }
                lVar23 = (lVar25 - uVar21) + uVar18;
                func_0x000107c5ec38();
                if ((long)uVar19 <= (long)uVar21) {
                  uVar21 = uVar19;
                }
                lVar25 = 0;
                if (lVar23 != 0) {
                  lVar25 = lVar23;
                }
                lVar13 = 0;
                if (lVar23 != 0) {
                  lVar13 = uVar21 + lVar23;
                }
              }
              func_0x000100e25bdc(abStack_88,lVar25,lVar13,uVar2,uVar4);
              func_0x00010006c090(uVar2,uVar4);
              func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
              goto LAB_1035eb214;
            }
            abStack_88[0] = (byte)uVar11;
            abStack_88[1] = (byte)(uVar11 >> 8);
            abStack_88[2] = (byte)(uVar11 >> 0x10);
            abStack_88[3] = (byte)(uVar11 >> 0x18);
            abStack_88[4] = (byte)(uVar11 >> 0x20);
            abStack_88[5] = (byte)(uVar11 >> 0x28);
            abStack_88[6] = (byte)(uVar11 >> 0x30);
            abStack_88[7] = (byte)(uVar11 >> 0x38);
            abStack_88[8] = (byte)uVar14;
            abStack_88[9] = (byte)(uVar14 >> 8);
            abStack_88[10] = (byte)(uVar14 >> 0x10);
            abStack_88[0xb] = (byte)(uVar14 >> 0x18);
            abStack_88[0xc] = (byte)(uVar14 >> 0x20);
            abStack_88[0xd] = (byte)(uVar14 >> 0x28);
            pbVar15 = abStack_88 + (uVar14 >> 0x30 & 0xff);
LAB_1035eb0d0:
            func_0x000100e25bdc(&bStack_89,abStack_88,pbVar15,uVar2,uVar4);
            func_0x00010006c090(uVar2,uVar4);
            func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
            func_0x00010006c090(uVar11,uVar14);
            func_0x000101597ae4(uVar1,param_2,param_3,param_4);
            bVar9 = bStack_89;
          }
          else {
            if (uVar16 != 2) {
              abStack_88[8] = 0;
              abStack_88[9] = 0;
              abStack_88[10] = 0;
              abStack_88[0xb] = 0;
              abStack_88[0xc] = 0;
              abStack_88[0xd] = 0;
              abStack_88[0] = 0;
              abStack_88[1] = 0;
              abStack_88[2] = 0;
              abStack_88[3] = 0;
              abStack_88[4] = 0;
              abStack_88[5] = 0;
              abStack_88[6] = 0;
              abStack_88[7] = 0;
              pbVar15 = abStack_88;
              goto LAB_1035eb0d0;
            }
            lVar25 = *(long *)(uVar11 + 0x10);
            lVar13 = *(long *)(uVar11 + 0x18);
            func_0x000107c5ec30();
            uVar19 = uVar18;
            if (uVar18 == 0) {
              lVar23 = 0;
            }
            else {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar25,uVar19)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb504);
                (*pcVar10)();
              }
              lVar23 = (lVar25 - uVar19) + uVar18;
            }
            if (SBORROW8(lVar13,lVar25)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x1035eb4f0);
              (*pcVar10)();
            }
            uVar18 = lVar13 - lVar25;
            func_0x000107c5ec38();
            if (lVar23 == 0) {
              lVar25 = 0;
            }
            else {
              if ((long)uVar18 <= (long)uVar19) {
                uVar19 = uVar18;
              }
              lVar25 = uVar19 + lVar23;
            }
            func_0x000100e25bdc(abStack_88,lVar23,lVar25,uVar2,uVar4);
            func_0x00010006c090(uVar2,uVar4);
            func_0x000101597ae4(uVar12,uVar5,uVar3,uVar6);
LAB_1035eb214:
            func_0x00010006c090(uVar11,uVar14);
            func_0x000101597ae4(uVar1,param_2,param_3,param_4);
            bVar9 = abStack_88[0];
          }
          if ((bVar9 & 1) == 0) goto LAB_1035eb494;
        }
        puStack_b8 = puStack_b8 + 6;
        puStack_b0 = puStack_b0 + 6;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    uVar11 = 1;
  }
  else {
LAB_1035eb494:
    uVar11 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78(uVar11);
    func_0x0001000285a8(param_3,param_4);
    (**(code **)(*(long *)(param_3 - 8) + 0x10))(param_2,uVar11,param_3);
    return param_2;
  }
  return uVar11;
}



/* Entry: 1035eb514; end: 1035eb55b;  */

undefined8 FUN_1035eb514(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035eb55c; end: 1035eb7b7;  */

uint FUN_1035eb55c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar5 = param_1[3];
  uVar3 = param_1[2];
  uVar9 = param_1[5];
  uVar7 = param_1[4];
  lVar6 = param_2[3];
  uVar4 = param_2[2];
  uVar10 = param_2[5];
  uVar8 = param_2[4];
  uStack_a0 = uVar4;
  lStack_98 = lVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar3;
  lStack_78 = lVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (lVar5 == 0) {
    if (lVar6 == 0) {
      FUN_1035eb514(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1035eb514(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
LAB_1035eb70c:
      func_0x000101597ae4(uVar3,lVar5,uVar7,uVar9);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_1035eb72c;
    }
LAB_1035eb660:
    FUN_1035eb514(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    FUN_1035eb514(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    func_0x000101597ae4(uVar3,lVar5,uVar7,uVar9);
    uVar3 = uVar4;
    lVar5 = lVar6;
    uVar7 = uVar8;
    uVar9 = uVar10;
  }
  else {
    if (lVar6 == 0) goto LAB_1035eb660;
    if (((uVar3 == uVar4) && (lVar5 == lVar6)) ||
       (uVar2 = uVar3, func_0x000107c605b8(uVar3,lVar5,uVar4,lVar6,0), (uVar2 & 1) != 0)) {
      FUN_1035eb514(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1035eb514(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
      func_0x000101597ae4(uVar4,lVar6,uVar8,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_1035eb70c;
    }
    else {
      FUN_1035eb514(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1035eb514(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar4,lVar6,uVar8,uVar10);
    }
  }
  func_0x000101597ae4(uVar3,lVar5,uVar7,uVar9);
  uVar1 = 0;
LAB_1035eb72c:
  return uVar1 & 1;
}



/* Entry: 1035eb7b8; end: 1035eb837;  */

void FUN_1035eb7b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d0c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe51b0;
  func_0x000107c61520(&UNK_10dbe51b0,&UNK_11066b998);
  puRam0000000112f7d0c8 = puVar1;
  return;
}



/* Entry: 1035eb838; end: 1035ebed7;  */

uint FUN_1035eb838(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_188 [3];
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
  
  uVar13 = param_1[4];
  uVar11 = param_1[3];
  uVar7 = param_1[5];
  uVar14 = param_2[4];
  uVar12 = param_2[3];
  uVar10 = param_2[5];
  uStack_b0 = uVar12;
  uStack_a8 = uVar14;
  uStack_a0 = uVar10;
  uStack_90 = uVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar7;
  if ((uVar11 & 0xff) == 2) {
    if ((uVar12 & 0xff) != 2) {
LAB_1035ebaac:
      FUN_1035eb514(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      puVar2 = &uStack_b0;
      puVar4 = &uStack_d0;
      uVar3 = uVar7;
      uVar8 = uVar13;
      uVar9 = uVar11;
      uVar7 = uVar10;
      uVar13 = uVar14;
      uVar11 = uVar12;
LAB_1035ebad8:
      FUN_1035eb514(puVar2,puVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar9,uVar8,uVar3);
      goto LAB_1035ebc04;
    }
    FUN_1035eb514(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
    FUN_1035eb514(&uStack_b0,&uStack_d0,0x112db94f0,&UNK_10d96af00);
LAB_1035eb8dc:
    func_0x000101556278(uVar11,uVar13,uVar7);
    uVar13 = param_1[7];
    uVar11 = param_1[6];
    uVar7 = param_1[8];
    uVar14 = param_2[7];
    uVar12 = param_2[6];
    uVar10 = param_2[8];
    uStack_f0 = uVar12;
    uStack_e8 = uVar14;
    uStack_e0 = uVar10;
    uStack_d0 = uVar11;
    uStack_c8 = uVar13;
    uStack_c0 = uVar7;
    if (uVar7 >> 0x3c < 0xf) {
      if (0xe < uVar10 >> 0x3c) goto LAB_1035ebb64;
      if (uVar11 == uVar12) {
        FUN_1035eb514(&uStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        FUN_1035eb514(&uStack_f0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        uVar12 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d56340(uVar11,uVar14,uVar10);
        if ((uVar12 & 1) != 0) goto LAB_1035eb964;
      }
      else {
        uVar5 = 0x112db6f48;
        puVar6 = &UNK_10d969b40;
        FUN_1035eb514(&uStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        puVar2 = &uStack_f0;
        puVar4 = &uStack_110;
LAB_1035ebdac:
        FUN_1035eb514(puVar2,puVar4,uVar5,puVar6);
        func_0x000100d56340(uVar12,uVar14,uVar10);
      }
LAB_1035ebdd4:
      func_0x000100d56340(uVar11,uVar13,uVar7);
    }
    else {
      if (uVar10 >> 0x3c < 0xf) {
LAB_1035ebb64:
        uVar5 = 0x112db6f48;
        puVar6 = &UNK_10d969b40;
        FUN_1035eb514(&uStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
        puVar2 = &uStack_f0;
        puVar4 = &uStack_110;
        uVar3 = uVar7;
        uVar8 = uVar13;
        uVar9 = uVar11;
        uVar7 = uVar10;
        uVar13 = uVar14;
        uVar11 = uVar12;
LAB_1035ebcb4:
        FUN_1035eb514(puVar2,puVar4,uVar5,puVar6);
        func_0x000100d56340(uVar9,uVar8,uVar3);
        goto LAB_1035ebdd4;
      }
      FUN_1035eb514(&uStack_d0,&uStack_110,0x112db6f48,&UNK_10d969b40);
      FUN_1035eb514(&uStack_f0,&uStack_110,0x112db6f48,&UNK_10d969b40);
LAB_1035eb964:
      func_0x000100d56340(uVar11,uVar13,uVar7);
      uVar13 = param_1[10];
      uVar11 = param_1[9];
      uVar7 = param_1[0xb];
      uVar14 = param_2[10];
      uVar12 = param_2[9];
      uVar10 = param_2[0xb];
      uStack_130 = uVar12;
      uStack_128 = uVar14;
      uStack_120 = uVar10;
      uStack_110 = uVar11;
      uStack_108 = uVar13;
      uStack_100 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1035ebc88;
        if (uVar11 != uVar12) {
          uVar5 = 0x112f7d0b8;
          puVar6 = &UNK_10dbe5138;
          FUN_1035eb514(&uStack_110,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
          puVar2 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_1035ebdac;
        }
        FUN_1035eb514(&uStack_110,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
        FUN_1035eb514(&uStack_130,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
        uVar12 = uVar13;
        func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
        func_0x000100d56340(uVar11,uVar14,uVar10);
        if ((uVar12 & 1) == 0) goto LAB_1035ebdd4;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1035ebc88:
          uVar5 = 0x112f7d0b8;
          puVar6 = &UNK_10dbe5138;
          FUN_1035eb514(&uStack_110,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
          puVar2 = &uStack_130;
          puVar4 = &uStack_150;
          uVar3 = uVar7;
          uVar8 = uVar13;
          uVar9 = uVar11;
          uVar7 = uVar10;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_1035ebcb4;
        }
        FUN_1035eb514(&uStack_110,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
        FUN_1035eb514(&uStack_130,&uStack_150,0x112f7d0b8,&UNK_10dbe5138);
      }
      func_0x000100d56340(uVar11,uVar13,uVar7);
      uVar7 = *param_1;
      FUN_1035ea5b0(uVar7,*param_2);
      if ((uVar7 & 1) != 0) {
        uVar13 = param_1[0xd];
        uVar11 = param_1[0xc];
        uVar7 = param_1[0xe];
        uVar14 = param_2[0xd];
        uVar12 = param_2[0xc];
        uVar10 = param_2[0xe];
        uStack_170 = uVar12;
        uStack_168 = uVar14;
        uStack_160 = uVar10;
        uStack_150 = uVar11;
        uStack_148 = uVar13;
        uStack_140 = uVar7;
        if ((uVar11 & 0xff) == 2) {
          if ((uVar12 & 0xff) != 2) {
LAB_1035ebe08:
            FUN_1035eb514(&uStack_150,auStack_188,0x112db94f0,&UNK_10d96af00);
            puVar2 = &uStack_170;
            puVar4 = auStack_188;
            uVar3 = uVar7;
            uVar8 = uVar13;
            uVar9 = uVar11;
            uVar7 = uVar10;
            uVar13 = uVar14;
            uVar11 = uVar12;
            goto LAB_1035ebad8;
          }
          FUN_1035eb514(&uStack_150,auStack_188,0x112db94f0,&UNK_10d96af00);
          FUN_1035eb514(&uStack_170,auStack_188,0x112db94f0,&UNK_10d96af00);
        }
        else {
          if ((uVar12 & 0xff) == 2) goto LAB_1035ebe08;
          if ((((uint)uVar12 ^ (uint)uVar11) & 1) != 0) {
            FUN_1035eb514(&uStack_150,auStack_188,0x112db94f0,&UNK_10d96af00);
            puVar2 = &uStack_170;
            puVar4 = auStack_188;
            goto LAB_1035ebb38;
          }
          FUN_1035eb514(&uStack_150,auStack_188,0x112db94f0,&UNK_10d96af00);
          FUN_1035eb514(&uStack_170,auStack_188,0x112db94f0,&UNK_10d96af00);
          uVar3 = uVar13;
          func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
          func_0x000101556278(uVar12,uVar14,uVar10);
          if ((uVar3 & 1) == 0) goto LAB_1035ebc04;
        }
        func_0x000101556278(uVar11,uVar13,uVar7);
        uVar7 = param_1[1];
        func_0x000100e25fcc(uVar7,param_1[2],param_2[1],param_2[2]);
        uVar1 = (uint)uVar7;
        goto LAB_1035ebddc;
      }
    }
  }
  else {
    if ((uVar12 & 0xff) == 2) goto LAB_1035ebaac;
    if ((((uint)uVar12 ^ (uint)uVar11) & 1) == 0) {
      FUN_1035eb514(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_1035eb514(&uStack_b0,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      uVar3 = uVar13;
      func_0x000100e25fcc(uVar13,uVar7,uVar14,uVar10);
      func_0x000101556278(uVar12,uVar14,uVar10);
      if ((uVar3 & 1) != 0) goto LAB_1035eb8dc;
    }
    else {
      FUN_1035eb514(&uStack_90,&uStack_d0,0x112db94f0,&UNK_10d96af00);
      puVar2 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_1035ebb38:
      FUN_1035eb514(puVar2,puVar4,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar12,uVar14,uVar10);
    }
LAB_1035ebc04:
    func_0x000101556278(uVar11,uVar13,uVar7);
  }
  uVar1 = 0;
LAB_1035ebddc:
  return uVar1 & 1;
}



/* Entry: 1035ebed8; end: 1035ebf17;  */

void FUN_1035ebed8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d0e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5288;
  func_0x000107c61520(&UNK_10dbe5288,&UNK_11066ba18);
  puRam0000000112f7d0e0 = puVar1;
  return;
}



/* Entry: 1035ebf18; end: 1035ebf3b;  */

void FUN_1035ebf18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035ebf3c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035ebf3c; end: 1035ebf7b;  */

void FUN_1035ebf3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d0e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5188;
  func_0x000107c61520(&UNK_10dbe5188,&UNK_11066b998);
  puRam0000000112f7d0e8 = puVar1;
  return;
}



/* Entry: 1035ebf7c; end: 1035ebf93;  */

void FUN_1035ebf7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035eb7b8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035eb7f8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035ebf94; end: 1035ebfd3;  */

void FUN_1035ebf94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d0f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe51f0;
  func_0x000107c61520(&UNK_10dbe51f0,&UNK_11066b998);
  puRam0000000112f7d0f0 = puVar1;
  return;
}



/* Entry: 1035ebfd4; end: 1035ebff7;  */

void FUN_1035ebfd4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035ebff8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035ebff8; end: 1035ec037;  */

void FUN_1035ebff8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5260;
  func_0x000107c61520(&UNK_10dbe5260,&UNK_11066ba18);
  puRam0000000112f7d0f8 = puVar1;
  return;
}



/* Entry: 1035ec038; end: 1035ec04b;  */

void FUN_1035ec038(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035ebed8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e10b8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035ec04c; end: 1035ec07b;  */

void FUN_1035ec04c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035ec07c; end: 1035ec07f;  */

void FUN_1035ec07c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe52c8;
  func_0x000107c61520(&UNK_10dbe52c8,&UNK_11066ba18);
  puRam0000000112f7d100 = puVar1;
  return;
}



/* Entry: 1035ec080; end: 1035ec0bf;  */

void FUN_1035ec080(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe52c8;
  func_0x000107c61520(&UNK_10dbe52c8,&UNK_11066ba18);
  puRam0000000112f7d100 = puVar1;
  return;
}



/* Entry: 1035ec0c0; end: 1035ec103;  */

/* WARNING: Possible PIC construction at 0x0001035ec0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035ec0dc) */
/* WARNING: Removing unreachable block (ram,0x0001035ec0f8) */
/* WARNING: Removing unreachable block (ram,0x0001035ec0e4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035ec0c0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1035ec104; end: 1035ec2db;  */

undefined8 * FUN_1035ec104(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar3);
    param_1[4] = uVar2;
    param_1[5] = uVar3;
  }
  return param_1;
}



/* Entry: 1035ec2dc; end: 1035ec3a7;  */

int FUN_1035ec2dc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035ec3a8; end: 1035ec433;  */

/* WARNING: Possible PIC construction at 0x0001035ec3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035ec3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035ec3c8) */
/* WARNING: Removing unreachable block (ram,0x0001035ec3d4) */
/* WARNING: Removing unreachable block (ram,0x0001035ec3dc) */
/* WARNING: Removing unreachable block (ram,0x0001035ec3f4) */
/* WARNING: Removing unreachable block (ram,0x0001035ec404) */
/* WARNING: Removing unreachable block (ram,0x0001035ec40c) */
/* WARNING: Removing unreachable block (ram,0x0001035ec424) */
/* WARNING: Removing unreachable block (ram,0x0001035ec418) */
/* WARNING: Removing unreachable block (ram,0x0001035ec3ec) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035ec3a8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1035ec434; end: 1035ec837;  */

undefined8 * FUN_1035ec434(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  uVar3 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar4,uVar3);
  param_1[1] = uVar4;
  param_1[2] = uVar3;
  cVar1 = *(char *)(param_2 + 3);
  if (cVar1 == '\x02') {
    uVar4 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar4;
    param_1[5] = param_2[5];
  }
  else {
    *(char *)(param_1 + 3) = cVar1;
    uVar4 = param_2[4];
    uVar3 = param_2[5];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[4] = uVar4;
    param_1[5] = uVar3;
  }
  uVar2 = param_2[8];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[7];
    param_1[6] = param_2[6];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[7] = uVar4;
    param_1[8] = uVar2;
  }
  else {
    uVar4 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar4;
    param_1[8] = param_2[8];
  }
  uVar2 = param_2[0xb];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[10] = uVar4;
    param_1[0xb] = uVar2;
  }
  else {
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
    param_1[0xb] = param_2[0xb];
  }
  cVar1 = *(char *)(param_2 + 0xc);
  if (cVar1 == '\x02') {
    uVar4 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar4;
    param_1[0xe] = param_2[0xe];
  }
  else {
    *(char *)(param_1 + 0xc) = cVar1;
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xe];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0xd] = uVar4;
    param_1[0xe] = uVar3;
  }
  return param_1;
}



/* Entry: 1035ec838; end: 1035ec86b;  */

undefined8 FUN_1035ec838(undefined8 param_1)

{
  (*(code *)&DAT_10461f9a4)();
  return param_1;
}



/* Entry: 1035ec86c; end: 1035ec9f7;  */

undefined8 * FUN_1035ec86c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  func_0x00010006c090(uVar1,uVar5);
  pcVar3 = (char *)(param_1 + 3);
  if (*pcVar3 == '\x02') {
LAB_1035ec8c8:
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    *(undefined8 *)pcVar3 = uVar1;
    param_1[5] = param_2[5];
  }
  else {
    if (*(byte *)(param_2 + 3) == 2) {
      func_0x0001015fd618(pcVar3);
      goto LAB_1035ec8c8;
    }
    *(byte *)(param_1 + 3) = *(byte *)(param_2 + 3) & 1;
    uVar1 = param_1[4];
    uVar5 = param_1[5];
    uVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    func_0x00010006c090(uVar1,uVar5);
  }
  if ((ulong)param_1[8] >> 0x3c < 0xf) {
    uVar2 = param_2[8];
    if (0xe < uVar2 >> 0x3c) {
      func_0x00010159d670(param_1 + 6);
      goto LAB_1035ec91c;
    }
    uVar1 = param_1[7];
    uVar5 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar5;
    param_1[8] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_1035ec91c:
    uVar1 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    param_1[8] = param_2[8];
  }
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    uVar2 = param_2[0xb];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[10];
      uVar5 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar5;
      param_1[0xb] = uVar2;
      func_0x00010006c090(uVar1);
      goto LAB_1035ec994;
    }
    FUN_1035ec838(param_1 + 9);
  }
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
LAB_1035ec994:
  pcVar3 = (char *)(param_1 + 0xc);
  if (*pcVar3 != '\x02') {
    if (*(byte *)(param_2 + 0xc) != 2) {
      *(byte *)(param_1 + 0xc) = *(byte *)(param_2 + 0xc) & 1;
      uVar1 = param_1[0xd];
      uVar5 = param_1[0xe];
      uVar4 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar4;
      func_0x00010006c090(uVar1,uVar5);
      return param_1;
    }
    func_0x0001015fd618(pcVar3);
  }
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined8 *)pcVar3 = uVar1;
  param_1[0xe] = param_2[0xe];
  return param_1;
}



/* Entry: 1035ec9f8; end: 1035ecaab;  */

int FUN_1035ec9f8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xf] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035ecaac; end: 1035ecb6b;  */

void FUN_1035ecaac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe5234;
  func_0x000107c61520(&DAT_10dbe5234,&UNK_11066ba18);
  puRam0000000112f7d110 = puVar1;
  return;
}



/* Entry: 1035ecb6c; end: 1035ecb73;  */

long FUN_1035ecb6c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035ecb74; end: 1035ecc2f;  */

undefined8 FUN_1035ecb74(undefined8 param_1)

{
  (*(code *)(undefined *)0x103647020)();
  return param_1;
}



/* Entry: 1035ecc30; end: 1035ecc77;  */

void FUN_1035ecc30(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe55a0,0x32,2);
  uRam0000000113809558 = uStack_38;
  uRam0000000113809550 = uStack_40;
  uRam0000000113809568 = uStack_28;
  uRam0000000113809560 = uStack_30;
  uRam0000000113809578 = uStack_18;
  uRam0000000113809570 = uStack_20;
  return;
}



/* Entry: 1035ecc78; end: 1035ecd5b;  */

void FUN_1035ecc78(undefined8 param_1,long param_2,long param_3)

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
        func_0x0001035eeb64();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_110674b48;
LAB_1035ecd00:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001035e0db8();
        lVar2 = unaff_x20 + 0x80;
        puVar3 = &UNK_110673210;
        goto LAB_1035ecd00;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035ecd5c; end: 1035ecdcf;  */

void FUN_1035ecd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1035ecdd0();
  if (unaff_x21 == 0) {
    FUN_1035ece6c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1035ecdd0; end: 1035ece6b;  */

void FUN_1035ecdd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  uStack_a8 = *(ulong *)(param_1 + 0x18);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    uStack_68 = *(undefined8 *)(param_1 + 0x58);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uStack_48 = *(undefined8 *)(param_1 + 0x78);
    uStack_50 = *(undefined8 *)(param_1 + 0x70);
    uStack_98 = *(undefined8 *)(param_1 + 0x28);
    uStack_a0 = *(undefined8 *)(param_1 + 0x20);
    uStack_88 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035eeb64();
    (*pcVar1)(&uStack_b0,1,&UNK_110674b48,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035ece6c; end: 1035ecf07;  */

void FUN_1035ece6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  uStack_a8 = *(ulong *)(param_1 + 0x88);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x80);
    uStack_78 = *(undefined8 *)(param_1 + 0xb8);
    uStack_80 = *(undefined8 *)(param_1 + 0xb0);
    uStack_68 = *(undefined8 *)(param_1 + 200);
    uStack_70 = *(undefined8 *)(param_1 + 0xc0);
    uStack_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_60 = *(undefined8 *)(param_1 + 0xd0);
    uStack_48 = *(undefined8 *)(param_1 + 0xe8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    uStack_98 = *(undefined8 *)(param_1 + 0x98);
    uStack_a0 = *(undefined8 *)(param_1 + 0x90);
    uStack_88 = *(undefined8 *)(param_1 + 0xa8);
    uStack_90 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035e0db8();
    (*pcVar1)(&uStack_b0,2,&UNK_110673210,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035ecf08; end: 1035ecf6b;  */

uint FUN_1035ecf08(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar4;
  undefined1 auStack_5f0 [112];
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  ulong uStack_508;
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
  ulong uStack_498;
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
  ulong uStack_428;
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
  ulong uStack_3b8;
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
  undefined8 uVar3;
  
  uStack_3f8 = param_1[9];
  uStack_400 = param_1[8];
  uStack_1b8 = param_1[0xb];
  uStack_1c0 = param_1[10];
  uStack_3e8 = param_1[0xb];
  uStack_3f0 = param_1[10];
  uStack_1a8 = param_1[0xd];
  uStack_1b0 = param_1[0xc];
  uStack_3d8 = param_1[0xd];
  uStack_3e0 = param_1[0xc];
  uStack_198 = param_1[0xf];
  uStack_1a0 = param_1[0xe];
  uStack_1f8 = param_1[3];
  uStack_200 = param_1[2];
  uStack_1e8 = param_1[5];
  uStack_1f0 = param_1[4];
  uStack_1d8 = param_1[7];
  uStack_1e0 = param_1[6];
  uStack_1c8 = param_1[9];
  uStack_1d0 = param_1[8];
  uStack_428 = param_1[3];
  uStack_430 = param_1[2];
  uStack_418 = param_1[5];
  uStack_420 = param_1[4];
  uStack_408 = param_1[7];
  uStack_410 = param_1[6];
  uStack_268 = param_2[3];
  uStack_270 = param_2[2];
  uStack_258 = param_2[5];
  uStack_260 = param_2[4];
  uStack_448 = param_2[0xd];
  uStack_450 = param_2[0xc];
  uStack_208 = param_2[0xf];
  uStack_210 = param_2[0xe];
  uStack_468 = param_2[9];
  uStack_470 = param_2[8];
  uStack_228 = param_2[0xb];
  uStack_230 = param_2[10];
  uStack_458 = param_2[0xb];
  uStack_460 = param_2[10];
  uStack_218 = param_2[0xd];
  uStack_220 = param_2[0xc];
  uStack_248 = param_2[7];
  uStack_250 = param_2[6];
  uStack_238 = param_2[9];
  uStack_240 = param_2[8];
  uStack_498 = param_2[3];
  uStack_4a0 = param_2[2];
  uStack_488 = param_2[5];
  uStack_490 = param_2[4];
  uStack_478 = param_2[7];
  uStack_480 = param_2[6];
  uStack_3c8 = param_1[0xf];
  uStack_3d0 = param_1[0xe];
  uStack_438 = param_2[0xf];
  uStack_440 = param_2[0xe];
  uStack_3c0 = uStack_4a0;
  uStack_3b8 = uStack_498;
  uStack_3b0 = uStack_490;
  uStack_3a8 = uStack_488;
  uStack_3a0 = uStack_480;
  uStack_398 = uStack_478;
  uStack_390 = uStack_470;
  uStack_388 = uStack_468;
  uStack_380 = uStack_460;
  uStack_378 = uStack_458;
  uStack_370 = uStack_450;
  uStack_368 = uStack_448;
  uStack_360 = uStack_440;
  uStack_358 = uStack_438;
  if (uStack_428 >> 0x3c < 0xf) {
    if (0xe < uStack_498 >> 0x3c) goto LAB_1035ed57c;
    uStack_4c8 = param_2[0xb];
    uStack_4d0 = param_2[10];
    uStack_4b8 = param_2[0xd];
    uStack_4c0 = param_2[0xc];
    uStack_4a8 = param_2[0xf];
    uStack_4b0 = param_2[0xe];
    uStack_508 = param_2[3];
    uStack_510 = param_2[2];
    uStack_4f8 = param_2[5];
    uStack_500 = param_2[4];
    uStack_4e8 = param_2[7];
    uStack_4f0 = param_2[6];
    uStack_4d8 = param_2[9];
    uStack_4e0 = param_2[8];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    uStack_c8 = param_1[0xd];
    uStack_d0 = param_1[0xc];
    uStack_b8 = param_1[0xf];
    uStack_c0 = param_1[0xe];
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    uStack_108 = param_1[5];
    uStack_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uStack_b0 = uStack_510;
    uStack_a8 = uStack_508;
    uStack_a0 = uStack_500;
    uStack_98 = uStack_4f8;
    uStack_90 = uStack_4f0;
    uStack_88 = uStack_4e8;
    uStack_80 = uStack_4e0;
    uStack_78 = uStack_4d8;
    uStack_70 = uStack_4d0;
    uStack_68 = uStack_4c8;
    uStack_60 = uStack_4c0;
    uStack_58 = uStack_4b8;
    uStack_50 = uStack_4b0;
    uStack_48 = uStack_4a8;
    func_0x0001035ecba8(&uStack_200,&uStack_190,0x112f73200,&UNK_10dbe5440);
    func_0x0001035ecba8(&uStack_270,&uStack_190,0x112f73200,&UNK_10dbe5440);
    puVar2 = &uStack_120;
    FUN_103646638(puVar2,&uStack_b0);
    func_0x0001035ecbf0(&uStack_510,0x112f73200,&UNK_10dbe5440);
    func_0x0001035ecbf0(&uStack_430,0x112f73200,&UNK_10dbe5440);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1035ed6c8;
  }
  else {
    if (0xe < uStack_498 >> 0x3c) {
      uStack_4c8 = param_1[0xb];
      uStack_4d0 = param_1[10];
      uStack_4b8 = param_1[0xd];
      uStack_4c0 = param_1[0xc];
      uStack_4a8 = param_1[0xf];
      uStack_4b0 = param_1[0xe];
      uStack_508 = param_1[3];
      uStack_510 = param_1[2];
      uStack_4f8 = param_1[5];
      uStack_500 = param_1[4];
      uStack_4e8 = param_1[7];
      uStack_4f0 = param_1[6];
      uStack_4d8 = param_1[9];
      uStack_4e0 = param_1[8];
      func_0x0001035ecba8(&uStack_200,&uStack_b0,0x112f73200,&UNK_10dbe5440);
      func_0x0001035ecba8(&uStack_270,&uStack_b0,0x112f73200,&UNK_10dbe5440);
      func_0x0001035ecbf0(&uStack_510,0x112f73200,&UNK_10dbe5440);
LAB_1035ed6c8:
      uStack_3f8 = param_1[0x17];
      uStack_400 = param_1[0x16];
      uStack_298 = param_1[0x19];
      uStack_2a0 = param_1[0x18];
      uStack_3e8 = param_1[0x19];
      uStack_3f0 = param_1[0x18];
      uStack_288 = param_1[0x1b];
      uStack_290 = param_1[0x1a];
      uStack_3d8 = param_1[0x1b];
      uStack_3e0 = param_1[0x1a];
      uStack_278 = param_1[0x1d];
      uStack_280 = param_1[0x1c];
      uStack_2d8 = param_1[0x11];
      uStack_2e0 = param_1[0x10];
      uStack_2c8 = param_1[0x13];
      uStack_2d0 = param_1[0x12];
      uStack_2b8 = param_1[0x15];
      uStack_2c0 = param_1[0x14];
      uStack_2a8 = param_1[0x17];
      uStack_2b0 = param_1[0x16];
      uStack_428 = param_1[0x11];
      uStack_430 = param_1[0x10];
      uStack_418 = param_1[0x13];
      uStack_420 = param_1[0x12];
      uStack_408 = param_1[0x15];
      uStack_410 = param_1[0x14];
      uStack_348 = param_2[0x11];
      uStack_350 = param_2[0x10];
      uStack_338 = param_2[0x13];
      uStack_340 = param_2[0x12];
      uStack_448 = param_2[0x1b];
      uStack_450 = param_2[0x1a];
      uStack_2e8 = param_2[0x1d];
      uStack_2f0 = param_2[0x1c];
      uStack_468 = param_2[0x17];
      uStack_470 = param_2[0x16];
      uStack_308 = param_2[0x19];
      uStack_310 = param_2[0x18];
      uStack_458 = param_2[0x19];
      uStack_460 = param_2[0x18];
      uStack_2f8 = param_2[0x1b];
      uStack_300 = param_2[0x1a];
      uStack_328 = param_2[0x15];
      uStack_330 = param_2[0x14];
      uStack_318 = param_2[0x17];
      uStack_320 = param_2[0x16];
      uStack_498 = param_2[0x11];
      uStack_4a0 = param_2[0x10];
      uStack_488 = param_2[0x13];
      uStack_490 = param_2[0x12];
      uStack_478 = param_2[0x15];
      uStack_480 = param_2[0x14];
      uStack_3c8 = param_1[0x1d];
      uStack_3d0 = param_1[0x1c];
      uStack_438 = param_2[0x1d];
      uStack_440 = param_2[0x1c];
      uStack_3c0 = uStack_4a0;
      uStack_3b8 = uStack_498;
      uStack_3b0 = uStack_490;
      uStack_3a8 = uStack_488;
      uStack_3a0 = uStack_480;
      uStack_398 = uStack_478;
      uStack_390 = uStack_470;
      uStack_388 = uStack_468;
      uStack_380 = uStack_460;
      uStack_378 = uStack_458;
      uStack_370 = uStack_450;
      uStack_368 = uStack_448;
      uStack_360 = uStack_440;
      uStack_358 = uStack_438;
      if (uStack_428 >> 0x3c < 0xf) {
        if (0xe < uStack_498 >> 0x3c) goto LAB_1035ed7d8;
        uStack_538 = param_2[0x19];
        uStack_540 = param_2[0x18];
        uStack_528 = param_2[0x1b];
        uStack_530 = param_2[0x1a];
        uStack_518 = param_2[0x1d];
        uStack_520 = param_2[0x1c];
        uStack_578 = param_2[0x11];
        uStack_580 = param_2[0x10];
        uStack_568 = param_2[0x13];
        uStack_570 = param_2[0x12];
        uStack_558 = param_2[0x15];
        uStack_560 = param_2[0x14];
        uStack_548 = param_2[0x17];
        uStack_550 = param_2[0x16];
        uStack_148 = param_1[0x19];
        uStack_150 = param_1[0x18];
        uStack_138 = param_1[0x1b];
        uStack_140 = param_1[0x1a];
        uStack_128 = param_1[0x1d];
        uStack_130 = param_1[0x1c];
        uStack_188 = param_1[0x11];
        uStack_190 = param_1[0x10];
        uStack_178 = param_1[0x13];
        uStack_180 = param_1[0x12];
        uStack_168 = param_1[0x15];
        uStack_170 = param_1[0x14];
        uStack_158 = param_1[0x17];
        uStack_160 = param_1[0x16];
        uStack_510 = uStack_580;
        uStack_508 = uStack_578;
        uStack_500 = uStack_570;
        uStack_4f8 = uStack_568;
        uStack_4f0 = uStack_560;
        uStack_4e8 = uStack_558;
        uStack_4e0 = uStack_550;
        uStack_4d8 = uStack_548;
        uStack_4d0 = uStack_540;
        uStack_4c8 = uStack_538;
        uStack_4c0 = uStack_530;
        uStack_4b8 = uStack_528;
        uStack_4b0 = uStack_520;
        uStack_4a8 = uStack_518;
        func_0x0001035ecba8(&uStack_2e0,auStack_5f0,0x112f73208,&UNK_10dbce5b0);
        func_0x0001035ecba8(&uStack_350,auStack_5f0,0x112f73208,&UNK_10dbce5b0);
        puVar2 = &uStack_190;
        FUN_103630050(puVar2,&uStack_510);
        func_0x0001035ecbf0(&uStack_580,0x112f73208,&UNK_10dbce5b0);
        func_0x0001035ecbf0(&uStack_430,0x112f73208,&UNK_10dbce5b0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_1035ed860;
      }
      else {
        if (uStack_498 >> 0x3c < 0xf) {
LAB_1035ed7d8:
          uStack_510 = uStack_430;
          uStack_508 = uStack_428;
          uStack_500 = uStack_420;
          uStack_4f8 = uStack_418;
          uStack_4f0 = uStack_410;
          uStack_4e8 = uStack_408;
          uStack_4e0 = uStack_400;
          uStack_4d8 = uStack_3f8;
          uStack_4d0 = uStack_3f0;
          uStack_4c8 = uStack_3e8;
          uStack_4c0 = uStack_3e0;
          uStack_4b8 = uStack_3d8;
          uStack_4b0 = uStack_3d0;
          uStack_4a8 = uStack_3c8;
          func_0x0001035ecba8(&uStack_2e0,&uStack_190,0x112f73208,&UNK_10dbce5b0);
          func_0x0001035ecba8(&uStack_350,&uStack_190,0x112f73208,&UNK_10dbce5b0);
          uVar3 = 0x112f7c088;
          puVar4 = &UNK_10dbe3408;
          goto LAB_1035ed858;
        }
        uStack_4c8 = param_1[0x19];
        uStack_4d0 = param_1[0x18];
        uStack_4b8 = param_1[0x1b];
        uStack_4c0 = param_1[0x1a];
        uStack_4a8 = param_1[0x1d];
        uStack_4b0 = param_1[0x1c];
        uStack_508 = param_1[0x11];
        uStack_510 = param_1[0x10];
        uStack_4f8 = param_1[0x13];
        uStack_500 = param_1[0x12];
        uStack_4e8 = param_1[0x15];
        uStack_4f0 = param_1[0x14];
        uStack_4d8 = param_1[0x17];
        uStack_4e0 = param_1[0x16];
        func_0x0001035ecba8(&uStack_2e0,&uStack_190,0x112f73208,&UNK_10dbce5b0);
        func_0x0001035ecba8(&uStack_350,&uStack_190,0x112f73208,&UNK_10dbce5b0);
        func_0x0001035ecbf0(&uStack_510,0x112f73208,&UNK_10dbce5b0);
      }
      uVar3 = *param_1;
      func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_1035ed864;
    }
LAB_1035ed57c:
    uStack_510 = uStack_430;
    uStack_508 = uStack_428;
    uStack_500 = uStack_420;
    uStack_4f8 = uStack_418;
    uStack_4f0 = uStack_410;
    uStack_4e8 = uStack_408;
    uStack_4e0 = uStack_400;
    uStack_4d8 = uStack_3f8;
    uStack_4d0 = uStack_3f0;
    uStack_4c8 = uStack_3e8;
    uStack_4c0 = uStack_3e0;
    uStack_4b8 = uStack_3d8;
    uStack_4b0 = uStack_3d0;
    uStack_4a8 = uStack_3c8;
    func_0x0001035ecba8(&uStack_200,&uStack_b0,0x112f73200,&UNK_10dbe5440);
    func_0x0001035ecba8(&uStack_270,&uStack_b0,0x112f73200,&UNK_10dbe5440);
    uVar3 = 0x112f7d130;
    puVar4 = &UNK_10dbe5a80;
LAB_1035ed858:
    func_0x0001035ecbf0(&uStack_510,uVar3,puVar4);
  }
LAB_1035ed860:
  uVar1 = 0;
LAB_1035ed864:
  return uVar1 & 1;
}



/* Entry: 1035ecf6c; end: 1035ecf9b;  */

undefined1  [16] FUN_1035ecf6c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1035ecf9c; end: 1035ecfcf;  */

void FUN_1035ecf9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1035ecfd0; end: 1035ecfe3;  */

undefined8 FUN_1035ecfd0(void)

{
  return 0x1035ecfe0;
}



/* Entry: 1035ecfe4; end: 1035ecff7;  */

void FUN_1035ecfe4(void)

{
  FUN_1035ecc78();
  return;
}



/* Entry: 1035ecff8; end: 1035ed05f;  */

void FUN_1035ecff8(void)

{
  FUN_1035ecd5c();
  return;
}



/* Entry: 1035ed060; end: 1035ed063;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035ed060(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035ed064; end: 1035ed09b;  */

uint FUN_1035ed064(long param_1,long param_2)

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
  FUN_1035eeb24();
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



/* Entry: 1035ed09c; end: 1035ed14b;  */

uint FUN_1035ed09c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_48 = param_1[0x19];
  uStack_50 = param_1[0x18];
  uStack_38 = param_1[0x1b];
  uStack_40 = param_1[0x1a];
  uStack_28 = param_1[0x1d];
  uStack_30 = param_1[0x1c];
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_68 = param_1[0x15];
  uStack_70 = param_1[0x14];
  uStack_58 = param_1[0x17];
  uStack_60 = param_1[0x16];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_138 = unaff_x20[0x19];
  uStack_140 = unaff_x20[0x18];
  uStack_128 = unaff_x20[0x1b];
  uStack_130 = unaff_x20[0x1a];
  uStack_118 = unaff_x20[0x1d];
  uStack_120 = unaff_x20[0x1c];
  uStack_178 = unaff_x20[0x11];
  uStack_180 = unaff_x20[0x10];
  uStack_168 = unaff_x20[0x13];
  uStack_170 = unaff_x20[0x12];
  uStack_158 = unaff_x20[0x15];
  uStack_160 = unaff_x20[0x14];
  uStack_148 = unaff_x20[0x17];
  uStack_150 = unaff_x20[0x16];
  uStack_1b8 = unaff_x20[9];
  uStack_1c0 = unaff_x20[8];
  uStack_1a8 = unaff_x20[0xb];
  uStack_1b0 = unaff_x20[10];
  uStack_198 = unaff_x20[0xd];
  uStack_1a0 = unaff_x20[0xc];
  uStack_188 = unaff_x20[0xf];
  uStack_190 = unaff_x20[0xe];
  uStack_1f8 = unaff_x20[1];
  uStack_200 = *unaff_x20;
  uStack_1e8 = unaff_x20[3];
  uStack_1f0 = unaff_x20[2];
  uStack_1d8 = unaff_x20[5];
  uStack_1e0 = unaff_x20[4];
  uStack_1c8 = unaff_x20[7];
  uStack_1d0 = unaff_x20[6];
  FUN_1035ed444(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 1035ed14c; end: 1035ed1eb;  */

/* WARNING: Possible PIC construction at 0x0001035ed198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035ed1a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035ed19c) */
/* WARNING: Removing unreachable block (ram,0x0001035ed1ac) */

void FUN_1035ed14c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d138 != -1) {
    func_0x000107c61568(0x112f7d138,FUN_1035ecc30);
  }
  uVar5 = uRam0000000113809578;
  uVar4 = uRam0000000113809570;
  uVar3 = uRam0000000113809568;
  uVar2 = uRam0000000113809560;
  uVar1 = uRam0000000113809558;
  *param_1 = uRam0000000113809550;
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



/* Entry: 1035ed1ec; end: 1035ed227;  */

void FUN_1035ed1ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7d158;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7d158,&UNK_10dbe5598);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035ed228; end: 1035ed393;  */

void FUN_1035ed228(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_168 [72];
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
  
  uStack_58 = unaff_x20[0x19];
  uStack_60 = unaff_x20[0x18];
  uStack_48 = unaff_x20[0x1b];
  uStack_50 = unaff_x20[0x1a];
  uStack_38 = unaff_x20[0x1d];
  uStack_40 = unaff_x20[0x1c];
  uStack_98 = unaff_x20[0x11];
  uStack_a0 = unaff_x20[0x10];
  uStack_88 = unaff_x20[0x13];
  uStack_90 = unaff_x20[0x12];
  uStack_78 = unaff_x20[0x15];
  uStack_80 = unaff_x20[0x14];
  uStack_68 = unaff_x20[0x17];
  uStack_70 = unaff_x20[0x16];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  func_0x000107c6068c(auStack_168,0);
  func_0x000107c5fa50(auStack_168,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035ed394; end: 1035ed443;  */

uint FUN_1035ed394(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_118 = param_1[0x1d];
  uStack_120 = param_1[0x1c];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_48 = param_2[0x19];
  uStack_50 = param_2[0x18];
  uStack_38 = param_2[0x1b];
  uStack_40 = param_2[0x1a];
  uStack_28 = param_2[0x1d];
  uStack_30 = param_2[0x1c];
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_78 = param_2[0x13];
  uStack_80 = param_2[0x12];
  uStack_68 = param_2[0x15];
  uStack_70 = param_2[0x14];
  uStack_58 = param_2[0x17];
  uStack_60 = param_2[0x16];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  FUN_1035ed444(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 1035ed444; end: 1035ed953;  */

uint FUN_1035ed444(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar4;
  undefined1 auStack_5f0 [112];
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  ulong uStack_508;
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
  ulong uStack_498;
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
  ulong uStack_428;
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
  ulong uStack_3b8;
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
  undefined8 uVar3;
  
  uStack_3f8 = param_1[9];
  uStack_400 = param_1[8];
  uStack_1b8 = param_1[0xb];
  uStack_1c0 = param_1[10];
  uStack_3e8 = param_1[0xb];
  uStack_3f0 = param_1[10];
  uStack_1a8 = param_1[0xd];
  uStack_1b0 = param_1[0xc];
  uStack_3d8 = param_1[0xd];
  uStack_3e0 = param_1[0xc];
  uStack_198 = param_1[0xf];
  uStack_1a0 = param_1[0xe];
  uStack_1f8 = param_1[3];
  uStack_200 = param_1[2];
  uStack_1e8 = param_1[5];
  uStack_1f0 = param_1[4];
  uStack_1d8 = param_1[7];
  uStack_1e0 = param_1[6];
  uStack_1c8 = param_1[9];
  uStack_1d0 = param_1[8];
  uStack_428 = param_1[3];
  uStack_430 = param_1[2];
  uStack_418 = param_1[5];
  uStack_420 = param_1[4];
  uStack_408 = param_1[7];
  uStack_410 = param_1[6];
  uStack_268 = param_2[3];
  uStack_270 = param_2[2];
  uStack_258 = param_2[5];
  uStack_260 = param_2[4];
  uStack_448 = param_2[0xd];
  uStack_450 = param_2[0xc];
  uStack_208 = param_2[0xf];
  uStack_210 = param_2[0xe];
  uStack_468 = param_2[9];
  uStack_470 = param_2[8];
  uStack_228 = param_2[0xb];
  uStack_230 = param_2[10];
  uStack_458 = param_2[0xb];
  uStack_460 = param_2[10];
  uStack_218 = param_2[0xd];
  uStack_220 = param_2[0xc];
  uStack_248 = param_2[7];
  uStack_250 = param_2[6];
  uStack_238 = param_2[9];
  uStack_240 = param_2[8];
  uStack_498 = param_2[3];
  uStack_4a0 = param_2[2];
  uStack_488 = param_2[5];
  uStack_490 = param_2[4];
  uStack_478 = param_2[7];
  uStack_480 = param_2[6];
  uStack_3c8 = param_1[0xf];
  uStack_3d0 = param_1[0xe];
  uStack_438 = param_2[0xf];
  uStack_440 = param_2[0xe];
  uStack_3c0 = uStack_4a0;
  uStack_3b8 = uStack_498;
  uStack_3b0 = uStack_490;
  uStack_3a8 = uStack_488;
  uStack_3a0 = uStack_480;
  uStack_398 = uStack_478;
  uStack_390 = uStack_470;
  uStack_388 = uStack_468;
  uStack_380 = uStack_460;
  uStack_378 = uStack_458;
  uStack_370 = uStack_450;
  uStack_368 = uStack_448;
  uStack_360 = uStack_440;
  uStack_358 = uStack_438;
  if (uStack_428 >> 0x3c < 0xf) {
    if (0xe < uStack_498 >> 0x3c) goto LAB_1035ed57c;
    uStack_4c8 = param_2[0xb];
    uStack_4d0 = param_2[10];
    uStack_4b8 = param_2[0xd];
    uStack_4c0 = param_2[0xc];
    uStack_4a8 = param_2[0xf];
    uStack_4b0 = param_2[0xe];
    uStack_508 = param_2[3];
    uStack_510 = param_2[2];
    uStack_4f8 = param_2[5];
    uStack_500 = param_2[4];
    uStack_4e8 = param_2[7];
    uStack_4f0 = param_2[6];
    uStack_4d8 = param_2[9];
    uStack_4e0 = param_2[8];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    uStack_c8 = param_1[0xd];
    uStack_d0 = param_1[0xc];
    uStack_b8 = param_1[0xf];
    uStack_c0 = param_1[0xe];
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    uStack_108 = param_1[5];
    uStack_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uStack_b0 = uStack_510;
    uStack_a8 = uStack_508;
    uStack_a0 = uStack_500;
    uStack_98 = uStack_4f8;
    uStack_90 = uStack_4f0;
    uStack_88 = uStack_4e8;
    uStack_80 = uStack_4e0;
    uStack_78 = uStack_4d8;
    uStack_70 = uStack_4d0;
    uStack_68 = uStack_4c8;
    uStack_60 = uStack_4c0;
    uStack_58 = uStack_4b8;
    uStack_50 = uStack_4b0;
    uStack_48 = uStack_4a8;
    func_0x0001035ecba8(&uStack_200,&uStack_190,0x112f73200,&UNK_10dbe5440);
    func_0x0001035ecba8(&uStack_270,&uStack_190,0x112f73200,&UNK_10dbe5440);
    puVar2 = &uStack_120;
    FUN_103646638(puVar2,&uStack_b0);
    func_0x0001035ecbf0(&uStack_510,0x112f73200,&UNK_10dbe5440);
    func_0x0001035ecbf0(&uStack_430,0x112f73200,&UNK_10dbe5440);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1035ed6c8;
  }
  else {
    if (0xe < uStack_498 >> 0x3c) {
      uStack_4c8 = param_1[0xb];
      uStack_4d0 = param_1[10];
      uStack_4b8 = param_1[0xd];
      uStack_4c0 = param_1[0xc];
      uStack_4a8 = param_1[0xf];
      uStack_4b0 = param_1[0xe];
      uStack_508 = param_1[3];
      uStack_510 = param_1[2];
      uStack_4f8 = param_1[5];
      uStack_500 = param_1[4];
      uStack_4e8 = param_1[7];
      uStack_4f0 = param_1[6];
      uStack_4d8 = param_1[9];
      uStack_4e0 = param_1[8];
      func_0x0001035ecba8(&uStack_200,&uStack_b0,0x112f73200,&UNK_10dbe5440);
      func_0x0001035ecba8(&uStack_270,&uStack_b0,0x112f73200,&UNK_10dbe5440);
      func_0x0001035ecbf0(&uStack_510,0x112f73200,&UNK_10dbe5440);
LAB_1035ed6c8:
      uStack_3f8 = param_1[0x17];
      uStack_400 = param_1[0x16];
      uStack_298 = param_1[0x19];
      uStack_2a0 = param_1[0x18];
      uStack_3e8 = param_1[0x19];
      uStack_3f0 = param_1[0x18];
      uStack_288 = param_1[0x1b];
      uStack_290 = param_1[0x1a];
      uStack_3d8 = param_1[0x1b];
      uStack_3e0 = param_1[0x1a];
      uStack_278 = param_1[0x1d];
      uStack_280 = param_1[0x1c];
      uStack_2d8 = param_1[0x11];
      uStack_2e0 = param_1[0x10];
      uStack_2c8 = param_1[0x13];
      uStack_2d0 = param_1[0x12];
      uStack_2b8 = param_1[0x15];
      uStack_2c0 = param_1[0x14];
      uStack_2a8 = param_1[0x17];
      uStack_2b0 = param_1[0x16];
      uStack_428 = param_1[0x11];
      uStack_430 = param_1[0x10];
      uStack_418 = param_1[0x13];
      uStack_420 = param_1[0x12];
      uStack_408 = param_1[0x15];
      uStack_410 = param_1[0x14];
      uStack_348 = param_2[0x11];
      uStack_350 = param_2[0x10];
      uStack_338 = param_2[0x13];
      uStack_340 = param_2[0x12];
      uStack_448 = param_2[0x1b];
      uStack_450 = param_2[0x1a];
      uStack_2e8 = param_2[0x1d];
      uStack_2f0 = param_2[0x1c];
      uStack_468 = param_2[0x17];
      uStack_470 = param_2[0x16];
      uStack_308 = param_2[0x19];
      uStack_310 = param_2[0x18];
      uStack_458 = param_2[0x19];
      uStack_460 = param_2[0x18];
      uStack_2f8 = param_2[0x1b];
      uStack_300 = param_2[0x1a];
      uStack_328 = param_2[0x15];
      uStack_330 = param_2[0x14];
      uStack_318 = param_2[0x17];
      uStack_320 = param_2[0x16];
      uStack_498 = param_2[0x11];
      uStack_4a0 = param_2[0x10];
      uStack_488 = param_2[0x13];
      uStack_490 = param_2[0x12];
      uStack_478 = param_2[0x15];
      uStack_480 = param_2[0x14];
      uStack_3c8 = param_1[0x1d];
      uStack_3d0 = param_1[0x1c];
      uStack_438 = param_2[0x1d];
      uStack_440 = param_2[0x1c];
      uStack_3c0 = uStack_4a0;
      uStack_3b8 = uStack_498;
      uStack_3b0 = uStack_490;
      uStack_3a8 = uStack_488;
      uStack_3a0 = uStack_480;
      uStack_398 = uStack_478;
      uStack_390 = uStack_470;
      uStack_388 = uStack_468;
      uStack_380 = uStack_460;
      uStack_378 = uStack_458;
      uStack_370 = uStack_450;
      uStack_368 = uStack_448;
      uStack_360 = uStack_440;
      uStack_358 = uStack_438;
      if (uStack_428 >> 0x3c < 0xf) {
        if (0xe < uStack_498 >> 0x3c) goto LAB_1035ed7d8;
        uStack_538 = param_2[0x19];
        uStack_540 = param_2[0x18];
        uStack_528 = param_2[0x1b];
        uStack_530 = param_2[0x1a];
        uStack_518 = param_2[0x1d];
        uStack_520 = param_2[0x1c];
        uStack_578 = param_2[0x11];
        uStack_580 = param_2[0x10];
        uStack_568 = param_2[0x13];
        uStack_570 = param_2[0x12];
        uStack_558 = param_2[0x15];
        uStack_560 = param_2[0x14];
        uStack_548 = param_2[0x17];
        uStack_550 = param_2[0x16];
        uStack_148 = param_1[0x19];
        uStack_150 = param_1[0x18];
        uStack_138 = param_1[0x1b];
        uStack_140 = param_1[0x1a];
        uStack_128 = param_1[0x1d];
        uStack_130 = param_1[0x1c];
        uStack_188 = param_1[0x11];
        uStack_190 = param_1[0x10];
        uStack_178 = param_1[0x13];
        uStack_180 = param_1[0x12];
        uStack_168 = param_1[0x15];
        uStack_170 = param_1[0x14];
        uStack_158 = param_1[0x17];
        uStack_160 = param_1[0x16];
        uStack_510 = uStack_580;
        uStack_508 = uStack_578;
        uStack_500 = uStack_570;
        uStack_4f8 = uStack_568;
        uStack_4f0 = uStack_560;
        uStack_4e8 = uStack_558;
        uStack_4e0 = uStack_550;
        uStack_4d8 = uStack_548;
        uStack_4d0 = uStack_540;
        uStack_4c8 = uStack_538;
        uStack_4c0 = uStack_530;
        uStack_4b8 = uStack_528;
        uStack_4b0 = uStack_520;
        uStack_4a8 = uStack_518;
        func_0x0001035ecba8(&uStack_2e0,auStack_5f0,0x112f73208,&UNK_10dbce5b0);
        func_0x0001035ecba8(&uStack_350,auStack_5f0,0x112f73208,&UNK_10dbce5b0);
        puVar2 = &uStack_190;
        FUN_103630050(puVar2,&uStack_510);
        func_0x0001035ecbf0(&uStack_580,0x112f73208,&UNK_10dbce5b0);
        func_0x0001035ecbf0(&uStack_430,0x112f73208,&UNK_10dbce5b0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_1035ed860;
      }
      else {
        if (uStack_498 >> 0x3c < 0xf) {
LAB_1035ed7d8:
          uStack_510 = uStack_430;
          uStack_508 = uStack_428;
          uStack_500 = uStack_420;
          uStack_4f8 = uStack_418;
          uStack_4f0 = uStack_410;
          uStack_4e8 = uStack_408;
          uStack_4e0 = uStack_400;
          uStack_4d8 = uStack_3f8;
          uStack_4d0 = uStack_3f0;
          uStack_4c8 = uStack_3e8;
          uStack_4c0 = uStack_3e0;
          uStack_4b8 = uStack_3d8;
          uStack_4b0 = uStack_3d0;
          uStack_4a8 = uStack_3c8;
          func_0x0001035ecba8(&uStack_2e0,&uStack_190,0x112f73208,&UNK_10dbce5b0);
          func_0x0001035ecba8(&uStack_350,&uStack_190,0x112f73208,&UNK_10dbce5b0);
          uVar3 = 0x112f7c088;
          puVar4 = &UNK_10dbe3408;
          goto LAB_1035ed858;
        }
        uStack_4c8 = param_1[0x19];
        uStack_4d0 = param_1[0x18];
        uStack_4b8 = param_1[0x1b];
        uStack_4c0 = param_1[0x1a];
        uStack_4a8 = param_1[0x1d];
        uStack_4b0 = param_1[0x1c];
        uStack_508 = param_1[0x11];
        uStack_510 = param_1[0x10];
        uStack_4f8 = param_1[0x13];
        uStack_500 = param_1[0x12];
        uStack_4e8 = param_1[0x15];
        uStack_4f0 = param_1[0x14];
        uStack_4d8 = param_1[0x17];
        uStack_4e0 = param_1[0x16];
        func_0x0001035ecba8(&uStack_2e0,&uStack_190,0x112f73208,&UNK_10dbce5b0);
        func_0x0001035ecba8(&uStack_350,&uStack_190,0x112f73208,&UNK_10dbce5b0);
        func_0x0001035ecbf0(&uStack_510,0x112f73208,&UNK_10dbce5b0);
      }
      uVar3 = *param_1;
      func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_1035ed864;
    }
LAB_1035ed57c:
    uStack_510 = uStack_430;
    uStack_508 = uStack_428;
    uStack_500 = uStack_420;
    uStack_4f8 = uStack_418;
    uStack_4f0 = uStack_410;
    uStack_4e8 = uStack_408;
    uStack_4e0 = uStack_400;
    uStack_4d8 = uStack_3f8;
    uStack_4d0 = uStack_3f0;
    uStack_4c8 = uStack_3e8;
    uStack_4c0 = uStack_3e0;
    uStack_4b8 = uStack_3d8;
    uStack_4b0 = uStack_3d0;
    uStack_4a8 = uStack_3c8;
    func_0x0001035ecba8(&uStack_200,&uStack_b0,0x112f73200,&UNK_10dbe5440);
    func_0x0001035ecba8(&uStack_270,&uStack_b0,0x112f73200,&UNK_10dbe5440);
    uVar3 = 0x112f7d130;
    puVar4 = &UNK_10dbe5a80;
LAB_1035ed858:
    func_0x0001035ecbf0(&uStack_510,uVar3,puVar4);
  }
LAB_1035ed860:
  uVar1 = 0;
LAB_1035ed864:
  return uVar1 & 1;
}



/* Entry: 1035ed954; end: 1035ed993;  */

void FUN_1035ed954(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe54c0;
  func_0x000107c61520(&UNK_10dbe54c0,&UNK_11066bbd0);
  puRam0000000112f7d140 = puVar1;
  return;
}



/* Entry: 1035ed994; end: 1035ed9b7;  */

void FUN_1035ed994(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035ed9b8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035ed9b8; end: 1035ed9f7;  */

void FUN_1035ed9b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5498;
  func_0x000107c61520(&UNK_10dbe5498,&UNK_11066bbd0);
  puRam0000000112f7d148 = puVar1;
  return;
}



/* Entry: 1035ed9f8; end: 1035eda23;  */

void FUN_1035ed9f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035ed954();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e0fb8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035eda24; end: 1035eda27;  */

void FUN_1035eda24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5500;
  func_0x000107c61520(&UNK_10dbe5500,&UNK_11066bbd0);
  puRam0000000112f7d150 = puVar1;
  return;
}



/* Entry: 1035eda28; end: 1035eda67;  */

void FUN_1035eda28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5500;
  func_0x000107c61520(&UNK_10dbe5500,&UNK_11066bbd0);
  puRam0000000112f7d150 = puVar1;
  return;
}



/* Entry: 1035eda68; end: 1035edbb3;  */

long FUN_1035eda68(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1035edbb4; end: 1035eea33;  */

undefined8 * FUN_1035edbb4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar1 = param_2[3];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[2];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    uVar1 = param_2[6];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      uVar2 = param_2[5];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[5] = uVar2;
      param_1[6] = uVar1;
    }
    else {
      uVar2 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar2;
      param_1[6] = param_2[6];
    }
    uVar1 = param_2[9];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
      uVar2 = param_2[8];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[8] = uVar2;
      param_1[9] = uVar1;
    }
    else {
      uVar2 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar2;
      param_1[9] = param_2[9];
    }
    uVar1 = param_2[0xc];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      uVar2 = param_2[0xb];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xb] = uVar2;
      param_1[0xc] = uVar1;
    }
    else {
      uVar2 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar2;
      param_1[0xc] = param_2[0xc];
    }
    uVar1 = param_2[0xf];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
      uVar2 = param_2[0xe];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xe] = uVar2;
      param_1[0xf] = uVar1;
    }
    else {
      uVar2 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar2;
      param_1[0xf] = param_2[0xf];
    }
  }
  else {
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    uVar2 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    uVar4 = param_2[6];
    uVar3 = param_2[9];
    uVar2 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar4;
    param_1[9] = uVar3;
    param_1[8] = uVar2;
  }
  uVar1 = param_2[0x11];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x10];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x10] = uVar2;
    param_1[0x11] = uVar1;
    uVar1 = param_2[0x14];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      uVar2 = param_2[0x13];
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
    uVar1 = param_2[0x17];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
      uVar2 = param_2[0x16];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x16] = uVar2;
      param_1[0x17] = uVar1;
    }
    else {
      uVar2 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar2;
      param_1[0x17] = param_2[0x17];
    }
    uVar1 = param_2[0x1a];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      uVar2 = param_2[0x19];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x19] = uVar2;
      param_1[0x1a] = uVar1;
    }
    else {
      uVar2 = param_2[0x18];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar2;
      param_1[0x1a] = param_2[0x1a];
    }
    uVar1 = param_2[0x1d];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
      uVar2 = param_2[0x1c];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x1c] = uVar2;
      param_1[0x1d] = uVar1;
    }
    else {
      uVar2 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar2;
      param_1[0x1d] = param_2[0x1d];
    }
  }
  else {
    uVar2 = param_2[0x18];
    uVar4 = param_2[0x1b];
    uVar3 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar2;
    param_1[0x1b] = uVar4;
    param_1[0x1a] = uVar3;
    uVar2 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    uVar2 = param_2[0x10];
    uVar4 = param_2[0x13];
    uVar3 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0x13] = uVar4;
    param_1[0x12] = uVar3;
    uVar4 = param_2[0x14];
    uVar3 = param_2[0x17];
    uVar2 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar4;
    param_1[0x17] = uVar3;
    param_1[0x16] = uVar2;
  }
  return param_1;
}



/* Entry: 1035eea34; end: 1035eeb23;  */

int FUN_1035eea34(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x3c] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035eeb24; end: 1035eeba3;  */

void FUN_1035eeb24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe546c;
  func_0x000107c61520(&DAT_10dbe546c,&UNK_11066bbd0);
  puRam0000000112f7d160 = puVar1;
  return;
}



/* Entry: 1035eeba4; end: 1035eebd3;  */

void FUN_1035eeba4(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  return;
}



/* Entry: 1035eebd4; end: 1035eec07;  */

undefined8 FUN_1035eebd4(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d563b8(param_2,param_1,&UNK_11066bee8);
  return param_2;
}



/* Entry: 1035eec08; end: 1035eec7f;  */

uint FUN_1035eec08(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_90 = *param_1;
  uStack_88 = param_1[1];
  uStack_80 = *(undefined1 *)(param_1 + 2);
  uStack_58 = param_1[7];
  uStack_50 = *param_2;
  uStack_48 = param_2[1];
  uStack_40 = *(undefined1 *)(param_2 + 2);
  uStack_18 = param_2[7];
  uStack_70 = param_1[4];
  uStack_78 = param_1[3];
  uStack_60 = param_1[6];
  uStack_68 = param_1[5];
  uStack_30 = param_2[4];
  uStack_38 = param_2[3];
  uStack_20 = param_2[6];
  uStack_28 = param_2[5];
  FUN_1035efd5c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1035eec80; end: 1035eecaf;  */

void FUN_1035eec80(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1035eecb0; end: 1035eecef;  */

void FUN_1035eecb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7d1c8;
  func_0x0001000285a8(0x112f7d1c8,&UNK_10dbe55e0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035eecf0; end: 1035eed17;  */

void FUN_1035eecf0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1035eed18; end: 1035eedc3;  */

void FUN_1035eed18(void)

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



/* Entry: 1035eedc4; end: 1035eedd7;  */

bool FUN_1035eedc4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035eedd8; end: 1035eee1f;  */

void FUN_1035eedd8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe5a60,0xe,2);
  uRam0000000113809588 = uStack_38;
  uRam0000000113809580 = uStack_40;
  uRam0000000113809598 = uStack_28;
  uRam0000000113809590 = uStack_30;
  uRam00000001138095a8 = uStack_18;
  uRam00000001138095a0 = uStack_20;
  return;
}



/* Entry: 1035eee20; end: 1035eeea3;  */

void FUN_1035eee20(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      FUN_1035eeea4();
    }
  }
  return;
}


