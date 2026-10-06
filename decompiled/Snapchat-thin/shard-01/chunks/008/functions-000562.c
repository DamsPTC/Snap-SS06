/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015789e0; end: 101578ae7;  */

/* WARNING: Removing unreachable block (ram,0x000101578ae4) */

void FUN_1015789e0(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x00010157b9dc();
LAB_101578ad0:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x60))(unaff_x20 + 0x10,param_2,param_3);
      }
      else if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x00010157b99c();
        goto LAB_101578ad0;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101578ae8; end: 101578beb;  */

void FUN_101578ae8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar3 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x00010157b99c();
    (*pcVar3)(&lStack_50,1,&UNK_1103df378,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar2 = unaff_x20[2];
  if ((lVar2 == 0) || ((**(code **)(param_3 + 0x20))(lVar2,2,param_2,param_3), unaff_x21 == 0)) {
    if (unaff_x20[3] != 0) {
      uStack_48 = (undefined1)unaff_x20[4];
      pcVar3 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[3];
      func_0x00010157b9dc();
      (*pcVar3)(&lStack_50,3,&UNK_1103df408,lVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 101578bec; end: 101578c4b;  */

void FUN_101578bec(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  return;
}



/* Entry: 101578c4c; end: 101578c73;  */

void FUN_101578c4c(void)

{
  FUN_1015789e0();
  return;
}



/* Entry: 101578c74; end: 101578cab;  */

uint FUN_101578c74(long param_1,long param_2)

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
  FUN_10157f530();
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



/* Entry: 101578cac; end: 101578d03;  */

uint FUN_101578cac(undefined8 *param_1)

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
  func_0x000101579648(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101578d04; end: 101578da3;  */

/* WARNING: Possible PIC construction at 0x000101578d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101578d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101578d54) */
/* WARNING: Removing unreachable block (ram,0x000101578d64) */

void FUN_101578d04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db57a0 != -1) {
    func_0x000107c61568(0x112db57a0,FUN_101578998);
  }
  uVar5 = uRam00000001137ffc20;
  uVar4 = uRam00000001137ffc18;
  uVar3 = uRam00000001137ffc10;
  uVar2 = uRam00000001137ffc08;
  uVar1 = uRam00000001137ffc00;
  *param_1 = uRam00000001137ffbf8;
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



/* Entry: 101578da4; end: 101578db7;  */

void FUN_101578da4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db5a78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db5a78,&UNK_10d961530);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101578db8; end: 101578deb;  */

void FUN_101578db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 101578dec; end: 101578f1f;  */

void FUN_101578dec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = *(undefined1 *)(unaff_x20 + 1);
  uStack_48 = *(undefined1 *)(unaff_x20 + 4);
  uStack_50 = unaff_x20[3];
  uStack_58 = unaff_x20[2];
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101578f20; end: 101578fbf;  */

uint FUN_101578f20(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000101579648(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101578fc0; end: 10157905f;  */

/* WARNING: Possible PIC construction at 0x00010157900c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010157901c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101579010) */
/* WARNING: Removing unreachable block (ram,0x000101579020) */

void FUN_101578fc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db57c0 != -1) {
    func_0x000107c61568(0x112db57c0,0x101578f78);
  }
  uVar5 = uRam00000001137ffc50;
  uVar4 = uRam00000001137ffc48;
  uVar3 = uRam00000001137ffc40;
  uVar2 = uRam00000001137ffc38;
  uVar1 = uRam00000001137ffc30;
  *param_1 = uRam00000001137ffc28;
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



/* Entry: 101579060; end: 1015790a7;  */

void FUN_101579060(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9615a0,0x48,2);
  uRam00000001137ffc60 = uStack_38;
  uRam00000001137ffc58 = uStack_40;
  uRam00000001137ffc70 = uStack_28;
  uRam00000001137ffc68 = uStack_30;
  uRam00000001137ffc80 = uStack_18;
  uRam00000001137ffc78 = uStack_20;
  return;
}



/* Entry: 1015790a8; end: 101579147;  */

/* WARNING: Possible PIC construction at 0x0001015790f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101579104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015790f8) */
/* WARNING: Removing unreachable block (ram,0x000101579108) */

void FUN_1015790a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db57c8 != -1) {
    func_0x000107c61568(0x112db57c8,FUN_101579060);
  }
  uVar5 = uRam00000001137ffc80;
  uVar4 = uRam00000001137ffc78;
  uVar3 = uRam00000001137ffc70;
  uVar2 = uRam00000001137ffc68;
  uVar1 = uRam00000001137ffc60;
  *param_1 = uRam00000001137ffc58;
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



/* Entry: 101579148; end: 10157933f;  */

uint FUN_101579148(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_250 [176];
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
        uStack_118 = puVar4[0x11];
        uStack_120 = puVar4[0x10];
        uStack_108 = puVar4[0x13];
        uStack_110 = puVar4[0x12];
        uStack_f8 = puVar4[0x15];
        uStack_100 = puVar4[0x14];
        uStack_158 = puVar4[9];
        uStack_160 = puVar4[8];
        uStack_148 = puVar4[0xb];
        uStack_150 = puVar4[10];
        uStack_138 = puVar4[0xd];
        uStack_140 = puVar4[0xc];
        uStack_128 = puVar4[0xf];
        uStack_130 = puVar4[0xe];
        uStack_198 = puVar4[1];
        uStack_1a0 = *puVar4;
        uStack_188 = puVar4[3];
        uStack_190 = puVar4[2];
        uStack_178 = puVar4[5];
        uStack_180 = puVar4[4];
        uStack_168 = puVar4[7];
        uStack_170 = puVar4[6];
        uStack_68 = puVar5[0x11];
        uStack_70 = puVar5[0x10];
        uStack_58 = puVar5[0x13];
        uStack_60 = puVar5[0x12];
        uStack_48 = puVar5[0x15];
        uStack_50 = puVar5[0x14];
        uStack_a8 = puVar5[9];
        uStack_b0 = puVar5[8];
        uStack_98 = puVar5[0xb];
        uStack_a0 = puVar5[10];
        uStack_88 = puVar5[0xd];
        uStack_90 = puVar5[0xc];
        uStack_78 = puVar5[0xf];
        uStack_80 = puVar5[0xe];
        uStack_e8 = puVar5[1];
        uStack_f0 = *puVar5;
        uStack_d8 = puVar5[3];
        uStack_e0 = puVar5[2];
        uStack_c8 = puVar5[5];
        uStack_d0 = puVar5[4];
        uStack_b8 = puVar5[7];
        uStack_c0 = puVar5[6];
        func_0x00010157f8d0(&uStack_1a0,auStack_250);
        func_0x00010157f8d0(&uStack_f0,auStack_250);
        puVar1 = &uStack_1a0;
        func_0x00010157a8e0(puVar1,&uStack_f0);
        uVar3 = (uint)puVar1;
        func_0x00010157f904(&uStack_f0);
        func_0x00010157f904(&uStack_1a0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x16;
        puVar4 = puVar4 + 0x16;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 101579340; end: 1015793df;  */

undefined8 FUN_101579340(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar1 != 0) && (param_1 != param_2)) {
    pcVar3 = (char *)(param_2 + 0x28);
    plVar2 = (long *)(param_1 + 0x20);
    do {
      lVar4 = *plVar2;
      lVar5 = *(long *)(pcVar3 + -8);
      if (*pcVar3 == '\x01') {
        if (lVar5 == 0) {
          if (lVar4 != 0) {
            return 0;
          }
        }
        else if (lVar5 == 1) {
          if (lVar4 != 1) {
            return 0;
          }
        }
        else if (lVar4 != 2) {
          return 0;
        }
      }
      else if (lVar4 != lVar5) {
        return 0;
      }
      pcVar3 = pcVar3 + 0x10;
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar1 != 0);
  }
  return 1;
}



/* Entry: 1015793e0; end: 10157940b;  */

void FUN_1015793e0(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10157940c; end: 10157947f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10157940c(long *param_1,long *param_2)

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
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
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
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  if (param_1[2] != param_2[2]) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[3];
  pbVar26 = (byte *)param_1[4];
  lVar19 = param_2[3];
  uVar16 = param_2[4];
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
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar23 == 0) {
        uVar24 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar19 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar19)) goto LAB_100e26094;
LAB_100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar23 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
        if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar21 != uVar24) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
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
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto LAB_100e26260;
          }
          lVar22 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar25 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar19 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar19,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar19 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar19 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar19);
          func_0x000107c61174();
          pbVar10 = pbVar25;
          func_0x000107c60118();
          func_0x000107c61170(pbVar25);
          func_0x000107c61170(lVar19);
          pbVar25 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar25 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar22 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar19 = *(long *)(pbVar13 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar19 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar19 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar22 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar13 + 0x20);
        lVar19 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar19;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar22;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar13 + 0x20);
      lVar19 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar19;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar22;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
      lVar19 = CONCAT17(bVar34 | auVar43[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar19 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar22 = *(long *)pbVar13;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar22,uVar11);
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



/* Entry: 101579480; end: 10157962b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101579480(void)

{
  long in_x3;
  ulong in_x5;
  ulong in_x6;
  uint uVar1;
  
  if (in_x3 == 0) {
    return;
  }
  func_0x000107c6142c(in_x3);
  uVar1 = (uint)(in_x6 >> 0x3e);
  if (uVar1 == 1) {
    in_x5 = in_x6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x5);
  return;
}



/* Entry: 10157962c; end: 1015798df;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10157962c(void)

{
  ulong in_x5;
  ulong in_x6;
  uint uVar1;
  
  if (0xe < in_x6 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(in_x6 >> 0x3e);
  if (uVar1 == 1) {
    in_x5 = in_x6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x5);
  return;
}



/* Entry: 1015798e0; end: 101579927;  */

undefined8 FUN_1015798e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101579928; end: 101579963;  */

undefined1  [16] FUN_101579928(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if ((param_1 < 0x14) && ((0xc7805U >> (ulong)((uint)param_1 & 0x1f) & 1) != 0)) {
    param_1 = *(ulong *)(&UNK_10d961c38 + param_1 * 8);
    uVar1 = 1;
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 101579964; end: 1015799e3;  */

void FUN_101579964(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db55e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d960908;
  func_0x000107c61520(&DAT_10d960908,&UNK_1103deab0);
  puRam0000000112db55e0 = puVar1;
  return;
}



/* Entry: 1015799e4; end: 10157ade7;  */

long * FUN_1015799e4(long *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  long alStack_310 [4];
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  long lStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  ulong uStack_248;
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
  ulong uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_128;
  undefined1 uStack_120;
  long lStack_118;
  undefined1 uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined1 uStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined1 uStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000101579a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10d95fd41)[*param_2] * 4 + 0x101579a10))();
    return param_1;
  }
  if (*param_1 != *param_2) {
    return (long *)0x0;
  }
  uVar16 = param_1[5];
  uVar5 = param_1[4];
  uVar19 = param_1[7];
  uVar21 = param_1[6];
  uVar17 = param_2[5];
  uVar7 = param_2[4];
  uVar26 = param_2[7];
  uVar23 = param_2[6];
  uVar6 = uVar19;
  uVar10 = uVar21;
  uVar22 = uVar16;
  uVar15 = uVar5;
  uStack_170 = uVar7;
  uStack_168 = uVar17;
  uStack_160 = uVar23;
  uStack_158 = uVar26;
  uStack_150 = uVar5;
  uStack_148 = uVar16;
  uStack_140 = uVar21;
  uStack_138 = uVar19;
  if (uVar19 >> 0x3c < 0xf) {
    if (0xe < uVar26 >> 0x3c) goto LAB_101579c30;
    if ((uVar17 & 0xff) == 1) {
      if (uVar7 == 0) {
        if (uVar5 == 0) goto LAB_101579f08;
        uVar8 = 0x112db5388;
        puVar9 = &UNK_10d95fd98;
        FUN_1015798e0(&uStack_150,&lStack_98,0x112db5388,&UNK_10d95fd98);
        puVar4 = &uStack_170;
LAB_10157a240:
        plVar3 = &lStack_98;
LAB_10157a244:
        FUN_1015798e0(puVar4,plVar3,uVar8,puVar9);
        uVar7 = 0;
        uVar19 = uVar6;
        uVar21 = uVar10;
        uVar16 = uVar22;
        uVar5 = uVar15;
      }
      else if (uVar7 == 1) {
        if (uVar5 == 1) {
LAB_101579f08:
          FUN_1015798e0(&uStack_150,&lStack_98,0x112db5388,&UNK_10d95fd98);
          FUN_1015798e0(&uStack_170,&lStack_98,0x112db5388,&UNK_10d95fd98);
          uVar6 = uVar21;
          FUN_100e25fcc(uVar21,uVar19,uVar23,uVar26);
          func_0x000100cb542c(uVar7,uVar17,uVar23,uVar26);
          if ((uVar6 & 1) != 0) goto LAB_101579acc;
          goto LAB_10157a278;
        }
        uVar8 = 0x112db5388;
        puVar9 = &UNK_10d95fd98;
        FUN_1015798e0(&uStack_150,&lStack_98,0x112db5388,&UNK_10d95fd98);
        puVar4 = &uStack_170;
LAB_101579e28:
        plVar3 = &lStack_98;
LAB_101579e2c:
        FUN_1015798e0(puVar4,plVar3,uVar8,puVar9);
        uVar7 = 1;
        uVar19 = uVar6;
        uVar21 = uVar10;
        uVar16 = uVar22;
        uVar5 = uVar15;
      }
      else {
        if (uVar5 == 2) goto LAB_101579f08;
        FUN_1015798e0(&uStack_150,&lStack_98,0x112db5388,&UNK_10d95fd98);
        FUN_1015798e0(&uStack_170,&lStack_98,0x112db5388,&UNK_10d95fd98);
        uVar7 = 2;
      }
    }
    else {
      if (uVar5 == uVar7) goto LAB_101579f08;
      uVar8 = 0x112db5388;
      puVar9 = &UNK_10d95fd98;
      FUN_1015798e0(&uStack_150,&lStack_98,0x112db5388,&UNK_10d95fd98);
      puVar4 = &uStack_170;
LAB_101579fac:
      plVar3 = &lStack_98;
LAB_101579fb0:
      FUN_1015798e0(puVar4,plVar3,uVar8,puVar9);
      uVar19 = uVar6;
      uVar21 = uVar10;
      uVar16 = uVar22;
      uVar5 = uVar15;
    }
    func_0x000100cb542c(uVar7,uVar17,uVar23,uVar26);
LAB_10157a278:
    func_0x000100cb542c(uVar5,uVar16,uVar21,uVar19);
  }
  else {
    if (uVar26 >> 0x3c < 0xf) {
LAB_101579c30:
      uVar8 = 0x112db5388;
      puVar9 = &UNK_10d95fd98;
      FUN_1015798e0(&uStack_150,&lStack_98,0x112db5388,&UNK_10d95fd98);
      puVar4 = &uStack_170;
      uVar19 = uVar26;
      uVar21 = uVar23;
      uVar16 = uVar17;
      uVar5 = uVar7;
LAB_101579cd8:
      plVar3 = &lStack_98;
LAB_101579cdc:
      FUN_1015798e0(puVar4,plVar3,uVar8,puVar9);
      func_0x000100cb542c(uVar15,uVar22,uVar10,uVar6);
      goto LAB_10157a278;
    }
    FUN_1015798e0(&uStack_150,&lStack_98,0x112db5388,&UNK_10d95fd98);
    FUN_1015798e0(&uStack_170,&lStack_98,0x112db5388,&UNK_10d95fd98);
LAB_101579acc:
    func_0x000100cb542c(uVar5,uVar16,uVar21,uVar19);
    uVar16 = param_1[9];
    uVar5 = param_1[8];
    uVar19 = param_1[0xb];
    uVar21 = param_1[10];
    uVar17 = param_2[9];
    uVar7 = param_2[8];
    uVar26 = param_2[0xb];
    uVar23 = param_2[10];
    uVar6 = uVar19;
    uVar10 = uVar21;
    uVar22 = uVar16;
    uVar15 = uVar5;
    uStack_1b0 = uVar7;
    uStack_1a8 = uVar17;
    uStack_1a0 = uVar23;
    uStack_198 = uVar26;
    uStack_190 = uVar5;
    uStack_188 = uVar16;
    uStack_180 = uVar21;
    uStack_178 = uVar19;
    if (uVar19 >> 0x3c < 0xf) {
      if (uVar26 >> 0x3c < 0xf) {
        uVar1 = (ulong)(uVar5 != 0);
        if ((uVar16 & 0xff) != 1) {
          uVar1 = uVar5;
        }
        if ((uVar17 & 0xff) == 1) {
          if (uVar7 == 0) {
            if (uVar1 != 0) {
              uVar8 = 0x112db5390;
              puVar9 = &UNK_10d95fda0;
              FUN_1015798e0(&uStack_190,&lStack_98,0x112db5390,&UNK_10d95fda0);
              puVar4 = &uStack_1b0;
              goto LAB_10157a240;
            }
          }
          else if (uVar1 != 1) {
            uVar8 = 0x112db5390;
            puVar9 = &UNK_10d95fda0;
            FUN_1015798e0(&uStack_190,&lStack_98,0x112db5390,&UNK_10d95fda0);
            puVar4 = &uStack_1b0;
            goto LAB_101579e28;
          }
        }
        else if (uVar1 != uVar7) {
          uVar8 = 0x112db5390;
          puVar9 = &UNK_10d95fda0;
          FUN_1015798e0(&uStack_190,&lStack_98,0x112db5390,&UNK_10d95fda0);
          puVar4 = &uStack_1b0;
          goto LAB_101579fac;
        }
        FUN_1015798e0(&uStack_190,&lStack_98,0x112db5390,&UNK_10d95fda0);
        FUN_1015798e0(&uStack_1b0,&lStack_98,0x112db5390,&UNK_10d95fda0);
        uVar6 = uVar21;
        FUN_100e25fcc(uVar21,uVar19,uVar23,uVar26);
        func_0x000100cb542c(uVar7,uVar17,uVar23,uVar26);
        if ((uVar6 & 1) != 0) goto LAB_101579b58;
        goto LAB_10157a278;
      }
LAB_101579cb0:
      uVar8 = 0x112db5390;
      puVar9 = &UNK_10d95fda0;
      FUN_1015798e0(&uStack_190,&lStack_98,0x112db5390,&UNK_10d95fda0);
      puVar4 = &uStack_1b0;
      uVar19 = uVar26;
      uVar21 = uVar23;
      uVar16 = uVar17;
      uVar5 = uVar7;
      goto LAB_101579cd8;
    }
    if (uVar26 >> 0x3c < 0xf) goto LAB_101579cb0;
    FUN_1015798e0(&uStack_190,&lStack_98,0x112db5390,&UNK_10d95fda0);
    FUN_1015798e0(&uStack_1b0,&lStack_98,0x112db5390,&UNK_10d95fda0);
LAB_101579b58:
    func_0x000100cb542c(uVar5,uVar16,uVar21,uVar19);
    lVar18 = param_1[0xd];
    lVar11 = param_1[0xc];
    lVar27 = param_1[0xf];
    lVar24 = param_1[0xe];
    uVar19 = param_1[0x11];
    lVar12 = param_1[0x10];
    lVar20 = param_2[0xd];
    lVar13 = param_2[0xc];
    lVar28 = param_2[0xf];
    lVar25 = param_2[0xe];
    uVar21 = param_2[0x11];
    lVar14 = param_2[0x10];
    lStack_210 = lVar13;
    lStack_208 = lVar20;
    lStack_200 = lVar25;
    lStack_1f8 = lVar28;
    lStack_1f0 = lVar14;
    uStack_1e8 = uVar21;
    lStack_1e0 = lVar11;
    lStack_1d8 = lVar18;
    lStack_1d0 = lVar24;
    lStack_1c8 = lVar27;
    lStack_1c0 = lVar12;
    uStack_1b8 = uVar19;
    if (0xe < uVar19 >> 0x3c) {
      if (uVar21 >> 0x3c < 0xf) goto LAB_101579e4c;
      FUN_1015798e0(&lStack_1e0,&lStack_98,0x112db5398,&UNK_10d95fda8);
      FUN_1015798e0(&lStack_210,&lStack_98,0x112db5398,&UNK_10d95fda8);
      func_0x000100cb5448(lVar11,lVar18,lVar24,lVar27,lVar12,uVar19);
LAB_10157a094:
      lVar18 = param_1[0x13];
      lVar11 = param_1[0x12];
      lVar27 = param_1[0x15];
      lVar24 = param_1[0x14];
      uVar19 = param_1[0x17];
      lVar12 = param_1[0x16];
      lVar20 = param_2[0x13];
      lVar13 = param_2[0x12];
      lVar28 = param_2[0x15];
      lVar25 = param_2[0x14];
      uVar21 = param_2[0x17];
      lVar14 = param_2[0x16];
      lStack_270 = lVar13;
      lStack_268 = lVar20;
      lStack_260 = lVar25;
      lStack_258 = lVar28;
      lStack_250 = lVar14;
      uStack_248 = uVar21;
      lStack_240 = lVar11;
      lStack_238 = lVar18;
      lStack_230 = lVar24;
      lStack_228 = lVar27;
      lStack_220 = lVar12;
      uStack_218 = uVar19;
      if (uVar19 >> 0x3c < 0xf) {
        if (0xe < uVar21 >> 0x3c) goto LAB_10157a194;
        uStack_f0 = (undefined1)lVar20;
        uStack_e0 = (undefined1)lVar28;
        uStack_120 = (undefined1)lVar18;
        uStack_110 = (undefined1)lVar27;
        lStack_128 = lVar11;
        lStack_118 = lVar24;
        lStack_108 = lVar12;
        uStack_100 = uVar19;
        lStack_f8 = lVar13;
        lStack_e8 = lVar25;
        lStack_d8 = lVar14;
        uStack_d0 = uVar21;
        FUN_1015798e0(&lStack_240,&lStack_340,0x112db53a0,&UNK_10d95fdb0);
        FUN_1015798e0(&lStack_270,&lStack_340,0x112db53a0,&UNK_10d95fdb0);
        plVar3 = &lStack_128;
        func_0x0001015797bc(plVar3,&lStack_f8);
        func_0x000100cb5448(lVar13,lVar20,lVar25,lVar28,lVar14,uVar21);
        func_0x000100cb5448(lVar11,lVar18,lVar24,lVar27,lVar12,uVar19);
        if (((ulong)plVar3 & 1) == 0) goto LAB_10157a27c;
      }
      else {
        if (uVar21 >> 0x3c < 0xf) {
LAB_10157a194:
          FUN_1015798e0(&lStack_240,&lStack_f8,0x112db53a0,&UNK_10d95fdb0);
          FUN_1015798e0(&lStack_270,&lStack_f8,0x112db53a0,&UNK_10d95fdb0);
          func_0x000100cb5448(lVar11,lVar18,lVar24,lVar27,lVar12,uVar19);
          func_0x000100cb5448(lVar13,lVar20,lVar25,lVar28,lVar14,uVar21);
          goto LAB_10157a27c;
        }
        FUN_1015798e0(&lStack_240,&lStack_f8,0x112db53a0,&UNK_10d95fdb0);
        FUN_1015798e0(&lStack_270,&lStack_f8,0x112db53a0,&UNK_10d95fdb0);
        func_0x000100cb5448(lVar11,lVar18,lVar24,lVar27,lVar12,uVar19);
      }
      uVar19 = param_1[0x19];
      lVar11 = param_1[0x18];
      uVar16 = param_1[0x1b];
      uVar21 = param_1[0x1a];
      uVar5 = param_1[0x1c];
      uVar10 = param_2[0x19];
      lVar12 = param_2[0x18];
      uVar15 = param_2[0x1b];
      uVar22 = param_2[0x1a];
      uVar6 = param_2[0x1c];
      lStack_340 = lVar11;
      uStack_338 = uVar19;
      uStack_330 = uVar21;
      uStack_328 = uVar16;
      uStack_320 = uVar5;
      lStack_2a0 = lVar12;
      uStack_298 = uVar10;
      uStack_290 = uVar22;
      uStack_288 = uVar15;
      uStack_280 = uVar6;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10157a534;
        if ((int)lVar11 == (int)lVar12) {
          uVar26 = (ulong)(uVar19 != 0);
          if ((uVar21 & 0xff) != 1) {
            uVar26 = uVar19;
          }
          if ((uVar22 & 0xff) != 1) {
            if (uVar26 == uVar10) goto LAB_10157a79c;
            goto LAB_10157a6b4;
          }
          if (uVar10 == 0) {
            if (uVar26 == 0) goto LAB_10157a79c;
            FUN_1015798e0(&lStack_340,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
            FUN_1015798e0(&lStack_2a0,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
            uVar10 = 0;
          }
          else {
            if (uVar26 == 1) {
LAB_10157a79c:
              FUN_1015798e0(&lStack_340,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
              FUN_1015798e0(&lStack_2a0,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
              uVar26 = uVar16;
              FUN_100e25fcc(uVar16,uVar5,uVar15,uVar6);
              func_0x000100cb5410(lVar12,uVar10,uVar22,uVar15,uVar6);
              func_0x000100cb5410(lVar11,uVar19,uVar21,uVar16,uVar5);
              if ((uVar26 & 1) == 0) goto LAB_10157a27c;
              goto LAB_10157a488;
            }
            FUN_1015798e0(&lStack_340,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
            FUN_1015798e0(&lStack_2a0,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
            uVar10 = 1;
          }
        }
        else {
LAB_10157a6b4:
          FUN_1015798e0(&lStack_340,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
          FUN_1015798e0(&lStack_2a0,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
        }
        func_0x000100cb5410(lVar12,uVar10,uVar22,uVar15,uVar6);
LAB_10157a718:
        func_0x000100cb5410(lVar11,uVar19,uVar21,uVar16,uVar5);
        goto LAB_10157a27c;
      }
      if (uVar6 >> 0x3c < 0xf) {
LAB_10157a534:
        FUN_1015798e0(&lStack_340,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
        FUN_1015798e0(&lStack_2a0,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
        func_0x000100cb5410(lVar11,uVar19,uVar21,uVar16,uVar5);
        lVar11 = lVar12;
        uVar19 = uVar10;
        uVar21 = uVar22;
        uVar16 = uVar15;
        uVar5 = uVar6;
        goto LAB_10157a718;
      }
      FUN_1015798e0(&lStack_340,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
      FUN_1015798e0(&lStack_2a0,&uStack_2f0,0x112db53a8,&UNK_10d95fdb8);
      func_0x000100cb5410(lVar11,uVar19,uVar21,uVar16,uVar5);
LAB_10157a488:
      uVar22 = param_1[0x1e];
      uVar15 = param_1[0x1d];
      uVar6 = param_1[0x20];
      uVar10 = param_1[0x1f];
      uVar17 = param_2[0x1e];
      uVar7 = param_2[0x1d];
      uVar26 = param_2[0x20];
      uVar23 = param_2[0x1f];
      uStack_2f0 = uVar15;
      uStack_2e8 = uVar22;
      uStack_2e0 = uVar10;
      uStack_2d8 = uVar6;
      uStack_2c0 = uVar7;
      uStack_2b8 = uVar17;
      uStack_2b0 = uVar23;
      uStack_2a8 = uVar26;
      if (uVar6 >> 0x3c < 0xf) {
        if (uVar26 >> 0x3c < 0xf) {
          uVar19 = (ulong)(uVar15 != 0);
          if ((uVar22 & 0xff) != 1) {
            uVar19 = uVar15;
          }
          if ((uVar17 & 0xff) == 1) {
            if (uVar7 == 0) {
              if (uVar19 != 0) {
                uVar8 = 0x112db53b0;
                puVar9 = &UNK_10d95fdc0;
                FUN_1015798e0(&uStack_2f0,alStack_310,0x112db53b0,&UNK_10d95fdc0);
                puVar4 = &uStack_2c0;
                plVar3 = alStack_310;
                goto LAB_10157a244;
              }
            }
            else if (uVar19 != 1) {
              uVar8 = 0x112db53b0;
              puVar9 = &UNK_10d95fdc0;
              FUN_1015798e0(&uStack_2f0,alStack_310,0x112db53b0,&UNK_10d95fdc0);
              puVar4 = &uStack_2c0;
              plVar3 = alStack_310;
              goto LAB_101579e2c;
            }
          }
          else if (uVar19 != uVar7) {
            uVar8 = 0x112db53b0;
            puVar9 = &UNK_10d95fdc0;
            FUN_1015798e0(&uStack_2f0,alStack_310,0x112db53b0,&UNK_10d95fdc0);
            puVar4 = &uStack_2c0;
            plVar3 = alStack_310;
            goto LAB_101579fb0;
          }
          FUN_1015798e0(&uStack_2f0,alStack_310,0x112db53b0,&UNK_10d95fdc0);
          FUN_1015798e0(&uStack_2c0,alStack_310,0x112db53b0,&UNK_10d95fdc0);
          uVar19 = uVar10;
          FUN_100e25fcc(uVar10,uVar6,uVar23,uVar26);
          func_0x000100cb542c(uVar7,uVar17,uVar23,uVar26);
          func_0x000100cb542c(uVar15,uVar22,uVar10,uVar6);
          if ((uVar19 & 1) == 0) goto LAB_10157a27c;
          goto LAB_10157a518;
        }
      }
      else if (0xe < uVar26 >> 0x3c) {
        FUN_1015798e0(&uStack_2f0,alStack_310,0x112db53b0,&UNK_10d95fdc0);
        FUN_1015798e0(&uStack_2c0,alStack_310,0x112db53b0,&UNK_10d95fdc0);
        func_0x000100cb542c(uVar15,uVar22,uVar10,uVar6);
LAB_10157a518:
        lVar11 = param_1[2];
        FUN_100e25fcc(lVar11,param_1[3],param_2[2],param_2[3]);
        uVar2 = (uint)lVar11;
        goto LAB_10157a280;
      }
      uVar8 = 0x112db53b0;
      puVar9 = &UNK_10d95fdc0;
      FUN_1015798e0(&uStack_2f0,alStack_310,0x112db53b0,&UNK_10d95fdc0);
      puVar4 = &uStack_2c0;
      plVar3 = alStack_310;
      uVar19 = uVar26;
      uVar21 = uVar23;
      uVar16 = uVar17;
      uVar5 = uVar7;
      goto LAB_101579cdc;
    }
    if (uVar21 >> 0x3c < 0xf) {
      uStack_90 = (undefined1)lVar20;
      uStack_80 = (undefined1)lVar28;
      uStack_c0 = (undefined1)lVar18;
      uStack_b0 = (undefined1)lVar27;
      lStack_c8 = lVar11;
      lStack_b8 = lVar24;
      lStack_a8 = lVar12;
      uStack_a0 = uVar19;
      lStack_98 = lVar13;
      lStack_88 = lVar25;
      lStack_78 = lVar14;
      uStack_70 = uVar21;
      FUN_1015798e0(&lStack_1e0,&lStack_f8,0x112db5398,&UNK_10d95fda8);
      FUN_1015798e0(&lStack_210,&lStack_f8,0x112db5398,&UNK_10d95fda8);
      plVar3 = &lStack_c8;
      func_0x000101579714(plVar3,&lStack_98);
      func_0x000100cb5448(lVar13,lVar20,lVar25,lVar28,lVar14,uVar21);
      func_0x000100cb5448(lVar11,lVar18,lVar24,lVar27,lVar12,uVar19);
      if (((ulong)plVar3 & 1) != 0) goto LAB_10157a094;
    }
    else {
LAB_101579e4c:
      FUN_1015798e0(&lStack_1e0,&lStack_98,0x112db5398,&UNK_10d95fda8);
      FUN_1015798e0(&lStack_210,&lStack_98,0x112db5398,&UNK_10d95fda8);
      func_0x000100cb5448(lVar11,lVar18,lVar24,lVar27,lVar12,uVar19);
      func_0x000100cb5448(lVar13,lVar20,lVar25,lVar28,lVar14,uVar21);
    }
  }
LAB_10157a27c:
  uVar2 = 0;
LAB_10157a280:
  return (long *)(ulong)(uVar2 & 1);
}



/* Entry: 10157ade8; end: 10157aeaf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10157ade8(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
                    char param_6,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
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
  undefined1 auVar39 [16];
  
  if (param_6 == '\x01') {
    if (param_5 == 0) {
      if (param_1 == 0) goto FUN_100e25fcc;
    }
    else if (param_5 == 1) {
      if (param_1 == 1) {
FUN_100e25fcc:
        do {
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)param_4 >> 0x20);
          uVar15 = uVar4 >> 0x1e;
          uVar5 = (uint)(param_8 >> 0x20);
          uVar18 = uVar5 >> 0x1e;
          iVar7 = (int)param_3;
          pbVar11 = param_4;
          if ((ulong)param_4 >> 0x3e == 3) {
            uVar17 = 0;
            if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
                (param_8 >> 0x3e < 3)) ||
               ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
LAB_100e26128:
            pbVar8 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar17 = (ulong)param_4 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)((ulong)param_3 >> 0x20);
              if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar17 = (ulong)(iVar16 - iVar7);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
            if (uVar18 == 0) {
              uVar19 = param_8 >> 0x30 & 0xff;
              goto LAB_100e2608c;
            }
            iVar16 = (int)((ulong)param_7 >> 0x20);
            if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar17 == (long)(iVar16 - (int)param_7)) goto LAB_100e26094;
LAB_100e26154:
            pbVar8 = (byte *)0x0;
          }
          else {
            if (uVar15 == 2) {
              uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
              if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar17 = 0;
            if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
            if (uVar18 == 2) {
              uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
              if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
LAB_100e2608c:
              if (uVar17 != uVar19) goto LAB_100e26154;
LAB_100e26094:
              if ((long)uVar17 < 1) goto LAB_100e26128;
              if (uVar15 < 2) {
                if (uVar15 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
                  pbVar11 = (byte *)((long)register0x00000008 +
                                    (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
                  unaff_x21 = 0;
                  FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto LAB_100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar7;
                unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
                if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = param_4;
                if (param_3 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  param_3 = (byte *)0x0;
                }
                else {
                  pbVar11 = param_3;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
                  func_0x000107c5ec38();
                  unaff_x19 = param_3;
                  if (param_3 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar11) {
                      pbVar11 = unaff_x23;
                    }
                    pbVar11 = pbVar11 + (long)param_3;
                    goto LAB_100e262a4;
                  }
                }
                pbVar11 = (byte *)0x0;
              }
              else {
                if (uVar15 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                  goto LAB_100e26260;
                }
                lVar21 = *(long *)(param_3 + 0x10);
                unaff_x24 = *(byte **)(param_3 + 0x18);
                func_0x000107c5ec30();
                pbVar11 = param_3;
                if (param_3 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + (lVar21 - (long)pbVar11);
                }
                unaff_x23 = unaff_x24 + -lVar21;
                if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = param_3;
                unaff_x25 = param_4;
                if (param_3 == (byte *)0x0) {
                  pbVar11 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar11) {
                    pbVar11 = unaff_x23;
                  }
                  pbVar11 = pbVar11 + (long)param_3;
                }
              }
LAB_100e262a4:
              unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,param_7
                            ,param_8);
              pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = param_8;
            }
            else {
              pbVar8 = (byte *)(ulong)(uVar17 == 0);
            }
          }
LAB_100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            return pbVar8;
          }
          func_0x000107c60e78();
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
          pbVar10 = *(byte **)pbVar8;
          param_3 = *(byte **)(pbVar8 + 8);
          pbVar20 = *(byte **)(pbVar8 + 0x18);
          bVar23 = pbVar8[0x28];
          param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
          pbVar12 = param_3;
          if (bVar23 < 3) {
            if (bVar23 == 0) {
              if (pbVar11[0x28] == 0) {
                lVar21 = *(long *)pbVar11;
                uVar9 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar10,lVar21,uVar9);
                return (byte *)(ulong)((uint)pbVar10 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar23 == 1) {
              if (pbVar11[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar14 = *(byte **)(pbVar11 + 0x10);
              lVar21 = *(long *)pbVar11;
              uVar9 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar21,uVar9);
              if (((ulong)pbVar10 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar11[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              lVar21 = *(long *)(pbVar11 + 0x18);
              if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
                if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar21 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar21);
                func_0x000107c61174();
                pbVar11 = pbVar20;
                func_0x000107c60118();
                func_0x000107c61170(pbVar20);
                func_0x000107c61170(lVar21);
                pbVar20 = pbVar11;
joined_r0x000100e266a4:
                if (((ulong)pbVar20 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
            }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar10,pbVar12,pbVar13,pbVar14,0);
            return pbVar10;
          }
          lVar22 = *(long *)(pbVar8 + 0x20);
          if (bVar23 < 5) {
            if (bVar23 != 3) {
              if (pbVar11[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
                 (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
                 pbVar14 = *(byte **)(pbVar11 + 0x18),
                 param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar11[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar11 + 0x10);
            lVar21 = *(long *)(pbVar11 + 0x20);
            if (param_4 == (byte *)0x0) {
              if (pbVar14 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar14 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar21 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar21 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar23 != 5) {
            if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
                lVar22 == 0) && param_4 == (byte *)0x0) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar11 + 0x20);
              lVar21 = *(long *)(pbVar11 + 0x18);
              bVar23 = pbVar11[8] | (byte)lVar21;
              bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
              bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
              bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
              bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
              bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
              bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
              bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
              bVar31 = pbVar11[0x10] | (byte)lVar22;
              bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar39[1] = bVar24;
              auVar39[0] = bVar23;
              auVar39[2] = bVar25;
              auVar39[3] = bVar26;
              auVar39[4] = bVar27;
              auVar39[5] = bVar28;
              auVar39[6] = bVar29;
              auVar39[7] = bVar30;
              auVar39[8] = bVar31;
              auVar39[9] = bVar32;
              auVar39[10] = bVar33;
              auVar39[0xb] = bVar34;
              auVar39[0xc] = bVar35;
              auVar39[0xd] = bVar36;
              auVar39[0xe] = bVar37;
              auVar39[0xf] = bVar38;
              auVar3[1] = bVar24;
              auVar3[0] = bVar23;
              auVar3[2] = bVar25;
              auVar3[3] = bVar26;
              auVar3[4] = bVar27;
              auVar3[5] = bVar28;
              auVar3[6] = bVar29;
              auVar3[7] = bVar30;
              auVar3[8] = bVar31;
              auVar3[9] = bVar32;
              auVar3[10] = bVar33;
              auVar3[0xb] = bVar34;
              auVar3[0xc] = bVar35;
              auVar3[0xd] = bVar36;
              auVar3[0xe] = bVar37;
              auVar3[0xf] = bVar38;
              auVar39 = NEON_ext(auVar39,auVar3,8,1);
              if (CONCAT17(bVar30 | auVar39[7],
                           CONCAT16(bVar29 | auVar39[6],
                                    CONCAT15(bVar28 | auVar39[5],
                                             CONCAT14(bVar27 | auVar39[4],
                                                      CONCAT13(bVar26 | auVar39[3],
                                                               CONCAT12(bVar25 | auVar39[2],
                                                                        CONCAT11(bVar24 | auVar39[1]
                                                                                 ,bVar23 | auVar39[0
                                                  ]))))))) == 0 && *(long *)pbVar11 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar10 == (byte *)0x1) &&
               (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar11 + 0x20);
            lVar21 = *(long *)(pbVar11 + 0x18);
            bVar23 = pbVar11[8] | (byte)lVar21;
            bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
            bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
            bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
            bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
            bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
            bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
            bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
            bVar31 = pbVar11[0x10] | (byte)lVar22;
            bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar24;
            auVar1[0] = bVar23;
            auVar1[2] = bVar25;
            auVar1[3] = bVar26;
            auVar1[4] = bVar27;
            auVar1[5] = bVar28;
            auVar1[6] = bVar29;
            auVar1[7] = bVar30;
            auVar1[8] = bVar31;
            auVar1[9] = bVar32;
            auVar1[10] = bVar33;
            auVar1[0xb] = bVar34;
            auVar1[0xc] = bVar35;
            auVar1[0xd] = bVar36;
            auVar1[0xe] = bVar37;
            auVar1[0xf] = bVar38;
            auVar2[1] = bVar24;
            auVar2[0] = bVar23;
            auVar2[2] = bVar25;
            auVar2[3] = bVar26;
            auVar2[4] = bVar27;
            auVar2[5] = bVar28;
            auVar2[6] = bVar29;
            auVar2[7] = bVar30;
            auVar2[8] = bVar31;
            auVar2[9] = bVar32;
            auVar2[10] = bVar33;
            auVar2[0xb] = bVar34;
            auVar2[0xc] = bVar35;
            auVar2[0xd] = bVar36;
            auVar2[0xe] = bVar37;
            auVar2[0xf] = bVar38;
            auVar39 = NEON_ext(auVar1,auVar2,8,1);
            lVar21 = CONCAT17(bVar30 | auVar39[7],
                              CONCAT16(bVar29 | auVar39[6],
                                       CONCAT15(bVar28 | auVar39[5],
                                                CONCAT14(bVar27 | auVar39[4],
                                                         CONCAT13(bVar26 | auVar39[3],
                                                                  CONCAT12(bVar25 | auVar39[2],
                                                                           CONCAT11(bVar24 | auVar39
                                                  [1],bVar23 | auVar39[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar11[0x28] != 5) {
            return (byte *)0x0;
          }
          param_7 = *(long *)(pbVar11 + 8);
          param_8 = *(ulong *)(pbVar11 + 0x10);
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          if (((ulong)pbVar10 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
          unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
          unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
          unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
          unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
          unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
          unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
        } while( true );
      }
    }
    else if (param_1 == 2) goto FUN_100e25fcc;
  }
  else if (param_1 == param_5) goto FUN_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 10157aeb0; end: 10157b27f;  */

uint FUN_10157aeb0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_188 [40];
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar7 = param_1[7];
    uVar5 = param_1[6];
    uVar2 = param_1[8];
    uVar8 = param_2[7];
    uVar6 = param_2[6];
    uVar4 = param_2[8];
    uStack_100 = uVar6;
    uStack_f8 = uVar8;
    uStack_f0 = uVar4;
    uStack_e0 = uVar5;
    uStack_d8 = uVar7;
    uStack_d0 = uVar2;
    if (uVar2 == 0) {
      if (uVar4 != 0) goto LAB_10157afb4;
      FUN_1015798e0(&uStack_e0,&uStack_98,0x112db5308,&UNK_10d95fd70);
      FUN_1015798e0(&uStack_100,&uStack_98,0x112db5308,&UNK_10d95fd70);
      FUN_1015793e0(uVar5,uVar7,0);
LAB_10157b058:
      uVar7 = param_1[10];
      uVar5 = param_1[9];
      uVar11 = param_1[0xc];
      uVar9 = param_1[0xb];
      uVar2 = param_1[0xd];
      uVar8 = param_2[10];
      uVar6 = param_2[9];
      uVar12 = param_2[0xc];
      uVar10 = param_2[0xb];
      uVar4 = param_2[0xd];
      uStack_160 = uVar6;
      uStack_158 = uVar8;
      uStack_150 = uVar10;
      uStack_148 = uVar12;
      uStack_140 = uVar4;
      uStack_130 = uVar5;
      uStack_128 = uVar7;
      uStack_120 = uVar9;
      uStack_118 = uVar11;
      uStack_110 = uVar2;
      if (uVar2 >> 0x3c < 0xf) {
        if (0xe < uVar4 >> 0x3c) goto LAB_10157b108;
        uStack_90 = (undefined1)uVar8;
        uStack_b8 = (undefined1)uVar7;
        uStack_c0 = uVar5;
        uStack_b0 = uVar9;
        uStack_a8 = uVar11;
        uStack_a0 = uVar2;
        uStack_98 = uVar6;
        uStack_88 = uVar10;
        uStack_80 = uVar12;
        uStack_78 = uVar4;
        FUN_1015798e0(&uStack_130,auStack_188,0x112db5310,&UNK_10d95fd78);
        FUN_1015798e0(&uStack_160,auStack_188,0x112db5310,&UNK_10d95fd78);
        puVar3 = &uStack_c0;
        FUN_10157940c(puVar3,&uStack_98);
        func_0x000100cb5410(uVar6,uVar8,uVar10,uVar12,uVar4);
        func_0x000100cb5410(uVar5,uVar7,uVar9,uVar11,uVar2);
        if (((ulong)puVar3 & 1) == 0) goto LAB_10157b258;
      }
      else {
        if (uVar4 >> 0x3c < 0xf) {
LAB_10157b108:
          FUN_1015798e0(&uStack_130,&uStack_98,0x112db5310,&UNK_10d95fd78);
          FUN_1015798e0(&uStack_160,&uStack_98,0x112db5310,&UNK_10d95fd78);
          func_0x000100cb5410(uVar5,uVar7,uVar9,uVar11,uVar2);
          func_0x000100cb5410(uVar6,uVar8,uVar10,uVar12,uVar4);
          goto LAB_10157b258;
        }
        FUN_1015798e0(&uStack_130,&uStack_98,0x112db5310,&UNK_10d95fd78);
        FUN_1015798e0(&uStack_160,&uStack_98,0x112db5310,&UNK_10d95fd78);
        func_0x000100cb5410(uVar5,uVar7,uVar9,uVar11,uVar2);
      }
      uVar2 = param_1[2];
      func_0x000101579264(uVar2,param_2[2]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[3];
        func_0x000101579148(uVar2,param_2[3]);
        if ((uVar2 & 1) != 0) {
          uVar2 = param_1[4];
          FUN_100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
          uVar1 = (uint)uVar2;
          goto LAB_10157b25c;
        }
      }
    }
    else if (uVar4 == 0) {
LAB_10157afb4:
      FUN_1015798e0(&uStack_e0,&uStack_98,0x112db5308,&UNK_10d95fd70);
      FUN_1015798e0(&uStack_100,&uStack_98,0x112db5308,&UNK_10d95fd70);
      FUN_1015793e0(uVar5,uVar7,uVar2);
      FUN_1015793e0(uVar6,uVar8,uVar4);
    }
    else {
      FUN_1015798e0(&uStack_e0,&uStack_98,0x112db5308,&UNK_10d95fd70);
      FUN_1015798e0(&uStack_100,&uStack_98,0x112db5308,&UNK_10d95fd70);
      uVar9 = uVar5;
      FUN_101584410(uVar5,uVar7,uVar2,uVar6,uVar8,uVar4);
      FUN_1015793e0(uVar6,uVar8,uVar4);
      FUN_1015793e0(uVar5,uVar7,uVar2);
      if ((uVar9 & 1) != 0) goto LAB_10157b058;
    }
  }
LAB_10157b258:
  uVar1 = 0;
LAB_10157b25c:
  return uVar1 & 1;
}



/* Entry: 10157b280; end: 10157b3db;  */

uint FUN_10157b280(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_1a0 [112];
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
  undefined8 uVar4;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if ((uVar2 == *(ulong *)(param_2 + 2) && *(long *)(param_1 + 4) == *(long *)(param_2 + 4)) ||
     (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
    lVar6 = *(long *)(param_1 + 6);
    lVar5 = *(long *)(param_2 + 6);
    lVar7 = *(long *)(lVar6 + 0x10);
    if (lVar7 == *(long *)(lVar5 + 0x10)) {
      if (lVar7 != 0 && lVar6 != lVar5) {
        puVar8 = (undefined8 *)(lVar6 + 0x20);
        puVar9 = (undefined8 *)(lVar5 + 0x20);
        do {
          uStack_128 = puVar8[1];
          uStack_130 = *puVar8;
          uStack_118 = puVar8[3];
          uStack_120 = puVar8[2];
          uStack_108 = puVar8[5];
          uStack_110 = puVar8[4];
          uStack_f8 = puVar8[7];
          uStack_100 = puVar8[6];
          uStack_e8 = puVar8[9];
          uStack_f0 = puVar8[8];
          uStack_d8 = puVar8[0xb];
          uStack_e0 = puVar8[10];
          uStack_c8 = puVar8[0xd];
          uStack_d0 = puVar8[0xc];
          uStack_68 = puVar9[0xb];
          uStack_70 = puVar9[10];
          uStack_58 = puVar9[0xd];
          uStack_60 = puVar9[0xc];
          uStack_88 = puVar9[7];
          uStack_90 = puVar9[6];
          uStack_78 = puVar9[9];
          uStack_80 = puVar9[8];
          uStack_b8 = puVar9[1];
          uStack_c0 = *puVar9;
          uStack_a8 = puVar9[3];
          uStack_b0 = puVar9[2];
          uStack_98 = puVar9[5];
          uStack_a0 = puVar9[4];
          FUN_10157f970(&uStack_130,auStack_1a0);
          FUN_10157f970(&uStack_c0,auStack_1a0);
          puVar3 = &uStack_130;
          FUN_10157aeb0(puVar3,&uStack_c0);
          func_0x00010157f9a4(&uStack_c0);
          func_0x00010157f9a4(&uStack_130);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10157b3b8;
          puVar9 = puVar9 + 0xe;
          puVar8 = puVar8 + 0xe;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar2 = *(ulong *)(param_1 + 8);
      FUN_101579148(uVar2,*(undefined8 *)(param_2 + 8));
      if ((uVar2 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 10);
        FUN_100e25fcc(uVar4,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_2 + 10),
                      *(undefined8 *)(param_2 + 0xc));
        uVar1 = (uint)uVar4;
        goto LAB_10157b3bc;
      }
    }
  }
LAB_10157b3b8:
  uVar1 = 0;
LAB_10157b3bc:
  return uVar1 & 1;
}



/* Entry: 10157b3dc; end: 10157ba5b;  */

void FUN_10157b3dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db55f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960860;
  func_0x000107c61520(&UNK_10d960860,&UNK_1103de7e0);
  puRam0000000112db55f0 = puVar1;
  return;
}



/* Entry: 10157ba5c; end: 10157ba6f;  */

void FUN_10157ba5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157ba70();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157bab0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157ba70; end: 10157bb1b;  */

void FUN_10157ba70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db57d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95fe88;
  func_0x000107c61520(&UNK_10d95fe88,&UNK_1103de888);
  puRam0000000112db57d0 = puVar1;
  return;
}



/* Entry: 10157bb1c; end: 10157bb1f;  */

void FUN_10157bb1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db57f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95fec8;
  func_0x000107c61520(&UNK_10d95fec8,&UNK_1103de888);
  puRam0000000112db57f0 = puVar1;
  return;
}



/* Entry: 10157bb20; end: 10157bb5f;  */

void FUN_10157bb20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db57f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95fec8;
  func_0x000107c61520(&UNK_10d95fec8,&UNK_1103de888);
  puRam0000000112db57f0 = puVar1;
  return;
}



/* Entry: 10157bb60; end: 10157bb73;  */

void FUN_10157bb60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157bb74();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157bbb4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157bb74; end: 10157bc1f;  */

void FUN_10157bb74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db57f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95ff88;
  func_0x000107c61520(&UNK_10d95ff88,&UNK_1103de918);
  puRam0000000112db57f8 = puVar1;
  return;
}



/* Entry: 10157bc20; end: 10157bc23;  */

void FUN_10157bc20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95ffc8;
  func_0x000107c61520(&UNK_10d95ffc8,&UNK_1103de918);
  puRam0000000112db5818 = puVar1;
  return;
}



/* Entry: 10157bc24; end: 10157bc63;  */

void FUN_10157bc24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95ffc8;
  func_0x000107c61520(&UNK_10d95ffc8,&UNK_1103de918);
  puRam0000000112db5818 = puVar1;
  return;
}



/* Entry: 10157bc64; end: 10157bc77;  */

void FUN_10157bc64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157bc78();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157bcb8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157bc78; end: 10157bd23;  */

void FUN_10157bc78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960088;
  func_0x000107c61520(&UNK_10d960088,&UNK_1103de9a8);
  puRam0000000112db5820 = puVar1;
  return;
}



/* Entry: 10157bd24; end: 10157bd27;  */

void FUN_10157bd24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9600c8;
  func_0x000107c61520(&UNK_10d9600c8,&UNK_1103de9a8);
  puRam0000000112db5840 = puVar1;
  return;
}



/* Entry: 10157bd28; end: 10157bd67;  */

void FUN_10157bd28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9600c8;
  func_0x000107c61520(&UNK_10d9600c8,&UNK_1103de9a8);
  puRam0000000112db5840 = puVar1;
  return;
}



/* Entry: 10157bd68; end: 10157bd7b;  */

void FUN_10157bd68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157bd7c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157bdbc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157bd7c; end: 10157be27;  */

void FUN_10157bd7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960188;
  func_0x000107c61520(&UNK_10d960188,&UNK_1103dea38);
  puRam0000000112db5848 = puVar1;
  return;
}



/* Entry: 10157be28; end: 10157be2b;  */

void FUN_10157be28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9601c8;
  func_0x000107c61520(&UNK_10d9601c8,&UNK_1103dea38);
  puRam0000000112db5868 = puVar1;
  return;
}



/* Entry: 10157be2c; end: 10157be6b;  */

void FUN_10157be2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9601c8;
  func_0x000107c61520(&UNK_10d9601c8,&UNK_1103dea38);
  puRam0000000112db5868 = puVar1;
  return;
}



/* Entry: 10157be6c; end: 10157be7f;  */

void FUN_10157be6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157be80();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157bec0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157be80; end: 10157bf2b;  */

void FUN_10157be80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960288;
  func_0x000107c61520(&UNK_10d960288,&UNK_1103debe0);
  puRam0000000112db5870 = puVar1;
  return;
}



/* Entry: 10157bf2c; end: 10157bf2f;  */

void FUN_10157bf2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9602c8;
  func_0x000107c61520(&UNK_10d9602c8,&UNK_1103debe0);
  puRam0000000112db5890 = puVar1;
  return;
}



/* Entry: 10157bf30; end: 10157bf6f;  */

void FUN_10157bf30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9602c8;
  func_0x000107c61520(&UNK_10d9602c8,&UNK_1103debe0);
  puRam0000000112db5890 = puVar1;
  return;
}



/* Entry: 10157bf70; end: 10157bf83;  */

void FUN_10157bf70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157bf84();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157bfc4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157bf84; end: 10157c02f;  */

void FUN_10157bf84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960388;
  func_0x000107c61520(&UNK_10d960388,&UNK_1103df030);
  puRam0000000112db5898 = puVar1;
  return;
}



/* Entry: 10157c030; end: 10157c033;  */

void FUN_10157c030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db58b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9603c8;
  func_0x000107c61520(&UNK_10d9603c8,&UNK_1103df030);
  puRam0000000112db58b8 = puVar1;
  return;
}



/* Entry: 10157c034; end: 10157c073;  */

void FUN_10157c034(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db58b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9603c8;
  func_0x000107c61520(&UNK_10d9603c8,&UNK_1103df030);
  puRam0000000112db58b8 = puVar1;
  return;
}



/* Entry: 10157c074; end: 10157c087;  */

void FUN_10157c074(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c088();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157c0c8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157c088; end: 10157c133;  */

void FUN_10157c088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db58c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960488;
  func_0x000107c61520(&UNK_10d960488,&UNK_1103df148);
  puRam0000000112db58c0 = puVar1;
  return;
}



/* Entry: 10157c134; end: 10157c137;  */

void FUN_10157c134(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db58e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9604c8;
  func_0x000107c61520(&UNK_10d9604c8,&UNK_1103df148);
  puRam0000000112db58e0 = puVar1;
  return;
}



/* Entry: 10157c138; end: 10157c177;  */

void FUN_10157c138(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db58e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9604c8;
  func_0x000107c61520(&UNK_10d9604c8,&UNK_1103df148);
  puRam0000000112db58e0 = puVar1;
  return;
}



/* Entry: 10157c178; end: 10157c18b;  */

void FUN_10157c178(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c18c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157c1cc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157c18c; end: 10157c237;  */

void FUN_10157c18c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db58e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960588;
  func_0x000107c61520(&UNK_10d960588,&UNK_1103df260);
  puRam0000000112db58e8 = puVar1;
  return;
}



/* Entry: 10157c238; end: 10157c23b;  */

void FUN_10157c238(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9605c8;
  func_0x000107c61520(&UNK_10d9605c8,&UNK_1103df260);
  puRam0000000112db5908 = puVar1;
  return;
}



/* Entry: 10157c23c; end: 10157c27b;  */

void FUN_10157c23c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9605c8;
  func_0x000107c61520(&UNK_10d9605c8,&UNK_1103df260);
  puRam0000000112db5908 = puVar1;
  return;
}



/* Entry: 10157c27c; end: 10157c28f;  */

void FUN_10157c27c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c290();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157c2d0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157c290; end: 10157c33b;  */

void FUN_10157c290(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960688;
  func_0x000107c61520(&UNK_10d960688,&UNK_1103df378);
  puRam0000000112db5910 = puVar1;
  return;
}



/* Entry: 10157c33c; end: 10157c33f;  */

void FUN_10157c33c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9606c8;
  func_0x000107c61520(&UNK_10d9606c8,&UNK_1103df378);
  puRam0000000112db5930 = puVar1;
  return;
}



/* Entry: 10157c340; end: 10157c37f;  */

void FUN_10157c340(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9606c8;
  func_0x000107c61520(&UNK_10d9606c8,&UNK_1103df378);
  puRam0000000112db5930 = puVar1;
  return;
}



/* Entry: 10157c380; end: 10157c393;  */

void FUN_10157c380(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c394();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157c3d4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157c394; end: 10157c43f;  */

void FUN_10157c394(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960788;
  func_0x000107c61520(&UNK_10d960788,&UNK_1103df408);
  puRam0000000112db5938 = puVar1;
  return;
}



/* Entry: 10157c440; end: 10157c483;  */

void FUN_10157c440(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10157c484; end: 10157c487;  */

void FUN_10157c484(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9607c8;
  func_0x000107c61520(&UNK_10d9607c8,&UNK_1103df408);
  puRam0000000112db5958 = puVar1;
  return;
}



/* Entry: 10157c488; end: 10157c4c7;  */

void FUN_10157c488(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9607c8;
  func_0x000107c61520(&UNK_10d9607c8,&UNK_1103df408);
  puRam0000000112db5958 = puVar1;
  return;
}



/* Entry: 10157c4c8; end: 10157c4eb;  */

void FUN_10157c4c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c4ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10157c4ec; end: 10157c52b;  */

void FUN_10157c4ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960838;
  func_0x000107c61520(&UNK_10d960838,&UNK_1103de7e0);
  puRam0000000112db5960 = puVar1;
  return;
}



/* Entry: 10157c52c; end: 10157c543;  */

void FUN_10157c52c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157b3dc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101573190)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157c544; end: 10157c583;  */

void FUN_10157c544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9608a0;
  func_0x000107c61520(&UNK_10d9608a0,&UNK_1103de7e0);
  puRam0000000112db5968 = puVar1;
  return;
}



/* Entry: 10157c584; end: 10157c5a7;  */

void FUN_10157c584(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c5a8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10157c5a8; end: 10157c5e7;  */

void FUN_10157c5a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960950;
  func_0x000107c61520(&UNK_10d960950,&UNK_1103deab0);
  puRam0000000112db5970 = puVar1;
  return;
}



/* Entry: 10157c5e8; end: 10157c5ff;  */

void FUN_10157c5e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10157b45c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101579964();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157c600; end: 10157c63f;  */

void FUN_10157c600(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9609b8;
  func_0x000107c61520(&UNK_10d9609b8,&UNK_1103deab0);
  puRam0000000112db5978 = puVar1;
  return;
}



/* Entry: 10157c640; end: 10157c663;  */

void FUN_10157c640(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c664();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10157c664; end: 10157c6a3;  */

void FUN_10157c664(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960a28;
  func_0x000107c61520(&UNK_10d960a28,&UNK_1103deb40);
  puRam0000000112db5980 = puVar1;
  return;
}



/* Entry: 10157c6a4; end: 10157c6b7;  */

void FUN_10157c6a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10157b4dc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10157c6b8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157c6b8; end: 10157c6f7;  */

void FUN_10157c6b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9609e0;
  func_0x000107c61520(&DAT_10d9609e0,&UNK_1103deb40);
  puRam0000000112db5988 = puVar1;
  return;
}



/* Entry: 10157c6f8; end: 10157c6fb;  */

void FUN_10157c6f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960a90;
  func_0x000107c61520(&UNK_10d960a90,&UNK_1103deb40);
  puRam0000000112db5990 = puVar1;
  return;
}



/* Entry: 10157c6fc; end: 10157c73b;  */

void FUN_10157c6fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960a90;
  func_0x000107c61520(&UNK_10d960a90,&UNK_1103deb40);
  puRam0000000112db5990 = puVar1;
  return;
}



/* Entry: 10157c73c; end: 10157c75f;  */

void FUN_10157c73c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c760();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10157c760; end: 10157c79f;  */

void FUN_10157c760(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db5998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960b10;
  func_0x000107c61520(&UNK_10d960b10,&UNK_1103dec58);
  puRam0000000112db5998 = puVar1;
  return;
}



/* Entry: 10157c7a0; end: 10157c7b7;  */

void FUN_10157c7a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10157b55c)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015799a4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157c7b8; end: 10157c7f7;  */

void FUN_10157c7b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db59a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960b78;
  func_0x000107c61520(&UNK_10d960b78,&UNK_1103dec58);
  puRam0000000112db59a0 = puVar1;
  return;
}



/* Entry: 10157c7f8; end: 10157c81b;  */

void FUN_10157c7f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c81c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10157c81c; end: 10157c85b;  */

void FUN_10157c81c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db59a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960be8;
  func_0x000107c61520(&UNK_10d960be8,&UNK_1103decf0);
  puRam0000000112db59a8 = puVar1;
  return;
}



/* Entry: 10157c85c; end: 10157c86f;  */

void FUN_10157c85c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10157b5dc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10157c870();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157c870; end: 10157c8af;  */

void FUN_10157c870(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db59b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d960ba0;
  func_0x000107c61520(&DAT_10d960ba0,&UNK_1103decf0);
  puRam0000000112db59b0 = puVar1;
  return;
}



/* Entry: 10157c8b0; end: 10157c8b3;  */

void FUN_10157c8b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db59b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960c50;
  func_0x000107c61520(&UNK_10d960c50,&UNK_1103decf0);
  puRam0000000112db59b8 = puVar1;
  return;
}



/* Entry: 10157c8b4; end: 10157c8f3;  */

void FUN_10157c8b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db59b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960c50;
  func_0x000107c61520(&UNK_10d960c50,&UNK_1103decf0);
  puRam0000000112db59b8 = puVar1;
  return;
}



/* Entry: 10157c8f4; end: 10157c917;  */

void FUN_10157c8f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c918();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10157c918; end: 10157c957;  */

void FUN_10157c918(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db59c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960cc0;
  func_0x000107c61520(&UNK_10d960cc0,&UNK_1103ded78);
  puRam0000000112db59c0 = puVar1;
  return;
}



/* Entry: 10157c958; end: 10157c96f;  */

void FUN_10157c958(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10157b65c)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10157b41c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10157c970; end: 10157c9af;  */

void FUN_10157c970(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db59c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960d28;
  func_0x000107c61520(&UNK_10d960d28,&UNK_1103ded78);
  puRam0000000112db59c8 = puVar1;
  return;
}



/* Entry: 10157c9b0; end: 10157c9d3;  */

void FUN_10157c9b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10157c9d4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10157c9d4; end: 10157ca13;  */

void FUN_10157c9d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db59d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d960d98;
  func_0x000107c61520(&UNK_10d960d98,&UNK_1103dee10);
  puRam0000000112db59d0 = puVar1;
  return;
}



/* Entry: 10157ca14; end: 10157ca27;  */

void FUN_10157ca14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10157b6dc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10157ca28();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


