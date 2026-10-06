/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103522f38; end: 103522f4b;  */

void FUN_103522f38(void)

{
  FUN_103522784();
  return;
}



/* Entry: 103522f4c; end: 103522fab;  */

void FUN_103522f4c(void)

{
  FUN_103522950();
  return;
}



/* Entry: 103522fac; end: 103522faf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103522fac(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103522fb0; end: 103522fe7;  */

uint FUN_103522fb0(long param_1,long param_2)

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
  FUN_103524e34();
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



/* Entry: 103522fe8; end: 103523087;  */

uint FUN_103522fe8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_38 = param_1[0x17];
  uStack_40 = param_1[0x16];
  uStack_30 = param_1[0x18];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_118 = unaff_x20[0x15];
  uStack_120 = unaff_x20[0x14];
  uStack_108 = unaff_x20[0x17];
  uStack_110 = unaff_x20[0x16];
  uStack_100 = unaff_x20[0x18];
  uStack_158 = unaff_x20[0xd];
  uStack_160 = unaff_x20[0xc];
  uStack_148 = unaff_x20[0xf];
  uStack_150 = unaff_x20[0xe];
  uStack_138 = unaff_x20[0x11];
  uStack_140 = unaff_x20[0x10];
  uStack_128 = unaff_x20[0x13];
  uStack_130 = unaff_x20[0x12];
  uStack_198 = unaff_x20[5];
  uStack_1a0 = unaff_x20[4];
  uStack_188 = unaff_x20[7];
  uStack_190 = unaff_x20[6];
  uStack_178 = unaff_x20[9];
  uStack_180 = unaff_x20[8];
  uStack_168 = unaff_x20[0xb];
  uStack_170 = unaff_x20[10];
  uStack_1b8 = unaff_x20[1];
  uStack_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  FUN_1035234dc(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 103523088; end: 103523127;  */

/* WARNING: Possible PIC construction at 0x0001035230d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035230e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035230d8) */
/* WARNING: Removing unreachable block (ram,0x0001035230e8) */

void FUN_103523088(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75f20 != -1) {
    func_0x000107c61568(0x112f75f20,FUN_10352273c);
  }
  uVar5 = uRam0000000113807b58;
  uVar4 = uRam0000000113807b50;
  uVar3 = uRam0000000113807b48;
  uVar2 = uRam0000000113807b40;
  uVar1 = uRam0000000113807b38;
  *param_1 = uRam0000000113807b30;
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



/* Entry: 103523128; end: 103523163;  */

void FUN_103523128(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75f78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75f78,&UNK_10dbd4c60);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103523164; end: 1035232bf;  */

void FUN_103523164(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_148 [72];
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
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_40 = unaff_x20[0x18];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  func_0x000107c6068c(auStack_148,0);
  func_0x000107c5fa50(auStack_148,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035232c0; end: 10352335f;  */

uint FUN_1035232c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_1035234dc(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 103523360; end: 1035233a7;  */

void FUN_103523360(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd4c70,0x3c,2);
  uRam0000000113807b68 = uStack_38;
  uRam0000000113807b60 = uStack_40;
  uRam0000000113807b78 = uStack_28;
  uRam0000000113807b70 = uStack_30;
  uRam0000000113807b88 = uStack_18;
  uRam0000000113807b80 = uStack_20;
  return;
}



/* Entry: 1035233a8; end: 103523447;  */

/* WARNING: Possible PIC construction at 0x0001035233f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103523404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035233f8) */
/* WARNING: Removing unreachable block (ram,0x000103523408) */

void FUN_1035233a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75f38 != -1) {
    func_0x000107c61568(0x112f75f38,FUN_103523360);
  }
  uVar5 = uRam0000000113807b88;
  uVar4 = uRam0000000113807b80;
  uVar3 = uRam0000000113807b78;
  uVar2 = uRam0000000113807b70;
  uVar1 = uRam0000000113807b68;
  *param_1 = uRam0000000113807b60;
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



/* Entry: 103523448; end: 10352348f;  */

undefined8 FUN_103523448(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103523490; end: 10352349b;  */

void FUN_103523490(void)

{
  return;
}



/* Entry: 10352349c; end: 1035234db;  */

void FUN_10352349c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd49e0;
  func_0x000107c61520(&DAT_10dbd49e0,&UNK_110660cb8);
  puRam0000000112f75f28 = puVar1;
  return;
}



/* Entry: 1035234dc; end: 103523fef;  */

uint FUN_1035234dc(long *param_1,long *param_2)

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



/* Entry: 103523ff0; end: 10352402f;  */

void FUN_103523ff0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4b50;
  func_0x000107c61520(&UNK_10dbd4b50,&UNK_110660c00);
  puRam0000000112f75f30 = puVar1;
  return;
}



/* Entry: 103524030; end: 103524043;  */

void FUN_103524030(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103524044();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103524084)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103524044; end: 1035240c3;  */

void FUN_103524044(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4a78;
  func_0x000107c61520(&UNK_10dbd4a78,&UNK_110660cb8);
  puRam0000000112f75f40 = puVar1;
  return;
}



/* Entry: 1035240c4; end: 1035240c7;  */

void FUN_1035240c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f75f50 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f75f58;
  func_0x00010002969c(0x112f75f58,&UNK_10dbd4a00);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f75f50 = puVar2;
  return;
}



/* Entry: 1035240c8; end: 103524117;  */

void FUN_1035240c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f75f50 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f75f58;
  func_0x00010002969c(0x112f75f58,&UNK_10dbd4a00);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f75f50 = puVar2;
  return;
}



/* Entry: 103524118; end: 10352411b;  */

void FUN_103524118(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4ab8;
  func_0x000107c61520(&UNK_10dbd4ab8,&UNK_110660cb8);
  puRam0000000112f75f60 = puVar1;
  return;
}



/* Entry: 10352411c; end: 10352415b;  */

void FUN_10352411c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4ab8;
  func_0x000107c61520(&UNK_10dbd4ab8,&UNK_110660cb8);
  puRam0000000112f75f60 = puVar1;
  return;
}



/* Entry: 10352415c; end: 10352417f;  */

void FUN_10352415c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103524180();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103524180; end: 1035241bf;  */

void FUN_103524180(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4b28;
  func_0x000107c61520(&UNK_10dbd4b28,&UNK_110660c00);
  puRam0000000112f75f68 = puVar1;
  return;
}



/* Entry: 1035241c0; end: 1035241d3;  */

void FUN_1035241c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103523ff0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10351ef60)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035241d4; end: 103524203;  */

void FUN_1035241d4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103524204; end: 103524207;  */

void FUN_103524204(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4b90;
  func_0x000107c61520(&UNK_10dbd4b90,&UNK_110660c00);
  puRam0000000112f75f70 = puVar1;
  return;
}



/* Entry: 103524208; end: 103524247;  */

void FUN_103524208(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4b90;
  func_0x000107c61520(&UNK_10dbd4b90,&UNK_110660c00);
  puRam0000000112f75f70 = puVar1;
  return;
}



/* Entry: 103524248; end: 10352434b;  */

long FUN_103524248(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10352434c; end: 1035249ef;  */

undefined8 * FUN_10352434c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar3 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar3,uVar1);
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  uVar2 = param_2[6];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    param_1[4] = param_2[4];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[5] = uVar3;
    param_1[6] = uVar2;
  }
  else {
    uVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[6] = param_2[6];
  }
  uVar2 = param_2[9];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    uVar3 = param_2[8];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[8] = uVar3;
    param_1[9] = uVar2;
  }
  else {
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    param_1[9] = param_2[9];
  }
  uVar2 = param_2[0xc];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar3 = param_2[0xb];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar2;
  }
  else {
    uVar3 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xc] = param_2[0xc];
  }
  uVar2 = param_2[0xf];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    uVar3 = param_2[0xe];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar2;
  }
  else {
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    param_1[0xf] = param_2[0xf];
  }
  uVar2 = param_2[0x12];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar3 = param_2[0x11];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar2;
  }
  else {
    uVar3 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar3;
    param_1[0x12] = param_2[0x12];
  }
  uVar2 = param_2[0x15];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    uVar3 = param_2[0x14];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x14] = uVar3;
    param_1[0x15] = uVar2;
  }
  else {
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x15] = param_2[0x15];
  }
  uVar2 = param_2[0x18];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x17] = uVar3;
    param_1[0x18] = uVar2;
  }
  else {
    uVar3 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x18] = param_2[0x18];
  }
  return param_1;
}



/* Entry: 1035249f0; end: 103524caf;  */

undefined8 FUN_1035249f0(undefined8 param_1)

{
  (*(code *)&DAT_10461f9ac)();
  return param_1;
}



/* Entry: 103524cb0; end: 103524e33;  */

int FUN_103524cb0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x32] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103524e34; end: 103524eb3;  */

void FUN_103524e34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd4afc;
  func_0x000107c61520(&DAT_10dbd4afc,&UNK_110660c00);
  puRam0000000112f75f80 = puVar1;
  return;
}



/* Entry: 103524eb4; end: 103524f27;  */

void FUN_103524eb4(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 103524f28; end: 103524f6f;  */

void FUN_103524f28(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd4ec0,0x3e,2);
  uRam0000000113807b98 = uStack_38;
  uRam0000000113807b90 = uStack_40;
  uRam0000000113807ba8 = uStack_28;
  uRam0000000113807ba0 = uStack_30;
  uRam0000000113807bb8 = uStack_18;
  uRam0000000113807bb0 = uStack_20;
  return;
}



/* Entry: 103524f70; end: 10352507b;  */

void FUN_103524f70(undefined8 param_1,long param_2,long param_3)

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
        FUN_1034c7384();
        lVar2 = unaff_x20 + 0x40;
        puVar3 = &UNK_1106613a0;
LAB_103524ff8:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103526240();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_1106624d0;
          goto LAB_103524ff8;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103510fbc();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_11066abb0;
          goto LAB_103524ff8;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10352507c; end: 103525107;  */

void FUN_10352507c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103525108();
  if (unaff_x21 == 0) {
    FUN_103525188();
    FUN_103525208();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103525108; end: 103525187;  */

void FUN_103525108(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 103525188; end: 103525207;  */

void FUN_103525188(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x38);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103526240();
    (*pcVar1)(&uStack_60,2,&UNK_1106624d0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103525208; end: 103525287;  */

void FUN_103525208(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x50);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1034c7384();
    (*pcVar1)(&uStack_60,3,&UNK_1106613a0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103525288; end: 1035252cf;  */

uint FUN_103525288(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong auStack_148 [3];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  ulong uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  lVar7 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  lVar8 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  lStack_a0 = lVar8;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  lStack_80 = lVar7;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_103525790;
    func_0x000103524ee0(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x000103524ee0(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x000103524eb4(uVar9,uVar11,0);
LAB_103525808:
    uVar11 = param_1[6];
    uVar9 = param_1[5];
    lVar7 = param_1[7];
    uVar12 = param_2[6];
    uVar10 = param_2[5];
    lVar8 = param_2[7];
    uStack_f0 = uVar10;
    uStack_e8 = uVar12;
    lStack_e0 = lVar8;
    uStack_d0 = uVar9;
    uStack_c8 = uVar11;
    lStack_c0 = lVar7;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_1035258bc;
      func_0x000103524ee0(&uStack_d0,&uStack_110,0x112f75f90,&UNK_10dbd4d58);
      func_0x000103524ee0(&uStack_f0,&uStack_110,0x112f75f90,&UNK_10dbd4d58);
      func_0x000103524eb4(uVar9,uVar11,0);
    }
    else {
      if (lVar8 == 0) {
LAB_1035258bc:
        uVar5 = 0x112f75f90;
        puVar6 = &UNK_10dbd4d58;
        func_0x000103524ee0(&uStack_d0,&uStack_110,0x112f75f90,&UNK_10dbd4d58);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
        goto LAB_103525a14;
      }
      func_0x000103524ee0(&uStack_d0,&uStack_110,0x112f75f90,&UNK_10dbd4d58);
      func_0x000103524ee0(&uStack_f0,&uStack_110,0x112f75f90,&UNK_10dbd4d58);
      uVar2 = uVar9;
      FUN_1035315d4(uVar9,uVar11,lVar7,uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar9,uVar11,lVar7);
      if ((uVar2 & 1) == 0) goto LAB_103525a40;
    }
    uVar11 = param_1[9];
    uVar9 = param_1[8];
    lVar7 = param_1[10];
    uVar12 = param_2[9];
    uVar10 = param_2[8];
    lVar8 = param_2[10];
    uStack_130 = uVar10;
    uStack_128 = uVar12;
    lStack_120 = lVar8;
    uStack_110 = uVar9;
    uStack_108 = uVar11;
    lStack_100 = lVar7;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_1035259e8;
      func_0x000103524ee0(&uStack_110,auStack_148,0x112f75f98,&UNK_10dbd4d60);
      func_0x000103524ee0(&uStack_130,auStack_148,0x112f75f98,&UNK_10dbd4d60);
      func_0x000103524eb4(uVar9,uVar11,0);
    }
    else {
      if (lVar8 == 0) {
LAB_1035259e8:
        uVar5 = 0x112f75f98;
        puVar6 = &UNK_10dbd4d60;
        func_0x000103524ee0(&uStack_110,auStack_148,0x112f75f98,&UNK_10dbd4d60);
        puVar3 = &uStack_130;
        puVar4 = auStack_148;
        goto LAB_103525a14;
      }
      func_0x000103524ee0(&uStack_110,auStack_148,0x112f75f98,&UNK_10dbd4d60);
      func_0x000103524ee0(&uStack_130,auStack_148,0x112f75f98,&UNK_10dbd4d60);
      uVar2 = uVar9;
      FUN_103527a0c(uVar9,uVar11,lVar7,uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar9,uVar11,lVar7);
      if ((uVar2 & 1) == 0) goto LAB_103525a40;
    }
    uVar11 = *param_1;
    func_0x000100e25fcc(uVar11,param_1[1],*param_2,param_2[1]);
    uVar1 = (uint)uVar11;
  }
  else {
    if (lVar8 == 0) {
LAB_103525790:
      uVar5 = 0x112f759a0;
      puVar6 = &UNK_10dbd33f0;
      func_0x000103524ee0(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_103525a14:
      func_0x000103524ee0(puVar3,puVar4,uVar5,puVar6);
      func_0x000103524eb4(uVar9,uVar11,lVar7);
      func_0x000103524eb4(uVar10,uVar12,lVar8);
    }
    else {
      func_0x000103524ee0(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
      func_0x000103524ee0(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
      uVar2 = uVar9;
      FUN_1035d8f6c(uVar9,uVar11,lVar7,uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar9,uVar11,lVar7);
      if ((uVar2 & 1) != 0) goto LAB_103525808;
    }
LAB_103525a40:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 1035252d0; end: 1035252ff;  */

undefined1  [16] FUN_1035252d0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103525300; end: 103525333;  */

void FUN_103525300(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103525334; end: 103525347;  */

undefined8 FUN_103525334(void)

{
  return 0x103525344;
}



/* Entry: 103525348; end: 10352535b;  */

void FUN_103525348(void)

{
  FUN_103524f70();
  return;
}



/* Entry: 10352535c; end: 1035253a3;  */

void FUN_10352535c(void)

{
  FUN_10352507c();
  return;
}



/* Entry: 1035253a4; end: 1035253a7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035253a4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035253a8; end: 1035253df;  */

uint FUN_1035253a8(long param_1,long param_2)

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
  FUN_103526200();
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



/* Entry: 1035253e0; end: 103525447;  */

uint FUN_1035253e0(undefined8 *param_1)

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
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
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
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_1035256b0(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103525448; end: 1035254e7;  */

/* WARNING: Possible PIC construction at 0x000103525494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035254a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103525498) */
/* WARNING: Removing unreachable block (ram,0x0001035254a8) */

void FUN_103525448(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75fa0 != -1) {
    func_0x000107c61568(0x112f75fa0,FUN_103524f28);
  }
  uVar5 = uRam0000000113807bb8;
  uVar4 = uRam0000000113807bb0;
  uVar3 = uRam0000000113807ba8;
  uVar2 = uRam0000000113807ba0;
  uVar1 = uRam0000000113807b98;
  *param_1 = uRam0000000113807b90;
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



/* Entry: 1035254e8; end: 103525523;  */

void FUN_1035254e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75fc0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75fc0,&UNK_10dbd4eb0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103525524; end: 103525647;  */

void FUN_103525524(undefined8 param_1,undefined8 param_2)

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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
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



/* Entry: 103525648; end: 1035256af;  */

uint FUN_103525648(undefined8 *param_1,undefined8 *param_2)

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
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
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
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_1035256b0(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1035256b0; end: 103525abf;  */

uint FUN_1035256b0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong auStack_148 [3];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  ulong uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  lVar7 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  lVar8 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  lStack_a0 = lVar8;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  lStack_80 = lVar7;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_103525790;
    func_0x000103524ee0(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x000103524ee0(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
    func_0x000103524eb4(uVar9,uVar11,0);
LAB_103525808:
    uVar11 = param_1[6];
    uVar9 = param_1[5];
    lVar7 = param_1[7];
    uVar12 = param_2[6];
    uVar10 = param_2[5];
    lVar8 = param_2[7];
    uStack_f0 = uVar10;
    uStack_e8 = uVar12;
    lStack_e0 = lVar8;
    uStack_d0 = uVar9;
    uStack_c8 = uVar11;
    lStack_c0 = lVar7;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_1035258bc;
      func_0x000103524ee0(&uStack_d0,&uStack_110,0x112f75f90,&UNK_10dbd4d58);
      func_0x000103524ee0(&uStack_f0,&uStack_110,0x112f75f90,&UNK_10dbd4d58);
      func_0x000103524eb4(uVar9,uVar11,0);
    }
    else {
      if (lVar8 == 0) {
LAB_1035258bc:
        uVar5 = 0x112f75f90;
        puVar6 = &UNK_10dbd4d58;
        func_0x000103524ee0(&uStack_d0,&uStack_110,0x112f75f90,&UNK_10dbd4d58);
        puVar3 = &uStack_f0;
        puVar4 = &uStack_110;
        goto LAB_103525a14;
      }
      func_0x000103524ee0(&uStack_d0,&uStack_110,0x112f75f90,&UNK_10dbd4d58);
      func_0x000103524ee0(&uStack_f0,&uStack_110,0x112f75f90,&UNK_10dbd4d58);
      uVar2 = uVar9;
      FUN_1035315d4(uVar9,uVar11,lVar7,uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar9,uVar11,lVar7);
      if ((uVar2 & 1) == 0) goto LAB_103525a40;
    }
    uVar11 = param_1[9];
    uVar9 = param_1[8];
    lVar7 = param_1[10];
    uVar12 = param_2[9];
    uVar10 = param_2[8];
    lVar8 = param_2[10];
    uStack_130 = uVar10;
    uStack_128 = uVar12;
    lStack_120 = lVar8;
    uStack_110 = uVar9;
    uStack_108 = uVar11;
    lStack_100 = lVar7;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_1035259e8;
      func_0x000103524ee0(&uStack_110,auStack_148,0x112f75f98,&UNK_10dbd4d60);
      func_0x000103524ee0(&uStack_130,auStack_148,0x112f75f98,&UNK_10dbd4d60);
      func_0x000103524eb4(uVar9,uVar11,0);
    }
    else {
      if (lVar8 == 0) {
LAB_1035259e8:
        uVar5 = 0x112f75f98;
        puVar6 = &UNK_10dbd4d60;
        func_0x000103524ee0(&uStack_110,auStack_148,0x112f75f98,&UNK_10dbd4d60);
        puVar3 = &uStack_130;
        puVar4 = auStack_148;
        goto LAB_103525a14;
      }
      func_0x000103524ee0(&uStack_110,auStack_148,0x112f75f98,&UNK_10dbd4d60);
      func_0x000103524ee0(&uStack_130,auStack_148,0x112f75f98,&UNK_10dbd4d60);
      uVar2 = uVar9;
      FUN_103527a0c(uVar9,uVar11,lVar7,uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar9,uVar11,lVar7);
      if ((uVar2 & 1) == 0) goto LAB_103525a40;
    }
    uVar11 = *param_1;
    func_0x000100e25fcc(uVar11,param_1[1],*param_2,param_2[1]);
    uVar1 = (uint)uVar11;
  }
  else {
    if (lVar8 == 0) {
LAB_103525790:
      uVar5 = 0x112f759a0;
      puVar6 = &UNK_10dbd33f0;
      func_0x000103524ee0(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_103525a14:
      func_0x000103524ee0(puVar3,puVar4,uVar5,puVar6);
      func_0x000103524eb4(uVar9,uVar11,lVar7);
      func_0x000103524eb4(uVar10,uVar12,lVar8);
    }
    else {
      func_0x000103524ee0(&uStack_90,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
      func_0x000103524ee0(&uStack_b0,&uStack_d0,0x112f759a0,&UNK_10dbd33f0);
      uVar2 = uVar9;
      FUN_1035d8f6c(uVar9,uVar11,lVar7,uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar10,uVar12,lVar8);
      func_0x000103524eb4(uVar9,uVar11,lVar7);
      if ((uVar2 & 1) != 0) goto LAB_103525808;
    }
LAB_103525a40:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 103525ac0; end: 103525aff;  */

void FUN_103525ac0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75fa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4dd8;
  func_0x000107c61520(&UNK_10dbd4dd8,&UNK_110660ea0);
  puRam0000000112f75fa8 = puVar1;
  return;
}



/* Entry: 103525b00; end: 103525b23;  */

void FUN_103525b00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103525b24();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103525b24; end: 103525b63;  */

void FUN_103525b24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4db0;
  func_0x000107c61520(&UNK_10dbd4db0,&UNK_110660ea0);
  puRam0000000112f75fb0 = puVar1;
  return;
}



/* Entry: 103525b64; end: 103525b8f;  */

void FUN_103525b64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103525ac0();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103502ed4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103525b90; end: 103525b93;  */

void FUN_103525b90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4e18;
  func_0x000107c61520(&UNK_10dbd4e18,&UNK_110660ea0);
  puRam0000000112f75fb8 = puVar1;
  return;
}



/* Entry: 103525b94; end: 103525bd3;  */

void FUN_103525b94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4e18;
  func_0x000107c61520(&UNK_10dbd4e18,&UNK_110660ea0);
  puRam0000000112f75fb8 = puVar1;
  return;
}



/* Entry: 103525bd4; end: 103525c77;  */

long FUN_103525bd4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103525c78; end: 103525d7b;  */

undefined8 * FUN_103525c78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar3,uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  lVar2 = param_2[4];
  if (lVar2 == 0) {
    uVar3 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[4] = param_2[4];
    lVar2 = param_2[7];
  }
  else {
    uVar3 = param_2[2];
    uVar1 = param_2[3];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[2] = uVar3;
    param_1[3] = uVar1;
    param_1[4] = lVar2;
    func_0x000107c6157c(lVar2);
    lVar2 = param_2[7];
  }
  if (lVar2 == 0) {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[7] = param_2[7];
    lVar2 = param_2[10];
  }
  else {
    uVar3 = param_2[5];
    uVar1 = param_2[6];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[5] = uVar3;
    param_1[6] = uVar1;
    param_1[7] = lVar2;
    func_0x000107c6157c(lVar2);
    lVar2 = param_2[10];
  }
  if (lVar2 == 0) {
    uVar3 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[10] = param_2[10];
  }
  else {
    uVar3 = param_2[8];
    uVar1 = param_2[9];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[8] = uVar3;
    param_1[9] = uVar1;
    param_1[10] = lVar2;
    func_0x000107c6157c(lVar2);
  }
  return param_1;
}



/* Entry: 103525d7c; end: 103525f97;  */

undefined8 * FUN_103525d7c(undefined8 *param_1,undefined8 *param_2)

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
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar4 = param_2[6];
      uVar3 = param_2[5];
      param_1[7] = param_2[7];
      param_1[6] = uVar4;
      param_1[5] = uVar3;
    }
    else {
      uVar3 = param_2[5];
      uVar4 = param_2[6];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[5] = uVar3;
      param_1[6] = uVar4;
      param_1[7] = param_2[7];
      func_0x000107c6157c();
    }
  }
  else if (param_2[7] == 0) {
    func_0x000103525f98(param_1 + 5);
    uVar3 = param_2[7];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[7] = uVar3;
  }
  else {
    uVar3 = param_2[5];
    uVar1 = param_2[6];
    func_0x00010006c00c(uVar3,uVar1);
    uVar4 = param_1[5];
    uVar2 = param_1[6];
    param_1[5] = uVar3;
    param_1[6] = uVar1;
    func_0x00010006c090(uVar4,uVar2);
    uVar3 = param_1[7];
    param_1[7] = param_2[7];
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
  }
  if (param_1[10] == 0) {
    if (param_2[10] == 0) {
      uVar4 = param_2[9];
      uVar3 = param_2[8];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      param_1[8] = uVar3;
    }
    else {
      uVar3 = param_2[8];
      uVar4 = param_2[9];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[8] = uVar3;
      param_1[9] = uVar4;
      param_1[10] = param_2[10];
      func_0x000107c6157c();
    }
  }
  else if (param_2[10] == 0) {
    func_0x000103525fcc(param_1 + 8);
    uVar3 = param_2[10];
    uVar4 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[10] = uVar3;
  }
  else {
    uVar3 = param_2[8];
    uVar1 = param_2[9];
    func_0x00010006c00c(uVar3,uVar1);
    uVar4 = param_1[8];
    uVar2 = param_1[9];
    param_1[8] = uVar3;
    param_1[9] = uVar1;
    func_0x00010006c090(uVar4,uVar2);
    uVar3 = param_1[10];
    param_1[10] = param_2[10];
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
  }
  return param_1;
}



/* Entry: 103525f98; end: 103525fff;  */

undefined8 FUN_103525f98(undefined8 param_1)

{
  FUN_103538870();
  return param_1;
}



/* Entry: 103526000; end: 10352612b;  */

undefined8 * FUN_103526000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[4] == 0) {
LAB_103526070:
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[4] = param_2[4];
    lVar3 = param_1[7];
  }
  else {
    lVar3 = param_2[4];
    if (lVar3 == 0) {
      FUN_103510d9c(param_1 + 2);
      goto LAB_103526070;
    }
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    uVar4 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    func_0x00010006c090(uVar1,uVar2);
    uVar1 = param_1[4];
    param_1[4] = lVar3;
    func_0x000107c61574(uVar1);
    lVar3 = param_1[7];
  }
  if (lVar3 != 0) {
    lVar3 = param_2[7];
    if (lVar3 != 0) {
      uVar1 = param_1[5];
      uVar2 = param_1[6];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[7];
      param_1[7] = lVar3;
      func_0x000107c61574(uVar1);
      lVar3 = param_1[10];
      goto joined_r0x0001035260b0;
    }
    func_0x000103525f98(param_1 + 5);
  }
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  lVar3 = param_1[10];
joined_r0x0001035260b0:
  if (lVar3 != 0) {
    lVar3 = param_2[10];
    if (lVar3 != 0) {
      uVar1 = param_1[8];
      uVar2 = param_1[9];
      uVar4 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[10];
      param_1[10] = lVar3;
      func_0x000107c61574(uVar1);
      return param_1;
    }
    func_0x000103525fcc(param_1 + 8);
  }
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 10352612c; end: 1035261ff;  */

int FUN_10352612c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x16] != '\0')) {
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



/* Entry: 103526200; end: 10352627f;  */

void FUN_103526200(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75fc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd4d84;
  func_0x000107c61520(&DAT_10dbd4d84,&UNK_110660ea0);
  puRam0000000112f75fc8 = puVar1;
  return;
}



/* Entry: 103526280; end: 10352628b;  */

void FUN_103526280(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x10352db34)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10352628c; end: 1035262cb;  */

void FUN_10352628c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f76040;
  func_0x0001000285a8(0x112f76040,&UNK_10dbd4f38);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035262cc; end: 1035262e3;  */

void FUN_1035262cc(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x10352db34)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035262e4; end: 103526353;  */

void FUN_1035262e4(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103526354; end: 10352635f;  */

void FUN_103526354(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x10352db30)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103526360; end: 103526473;  */

void FUN_103526360(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103526474; end: 1035264bb;  */

void FUN_103526474(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd5ac0,0x6e,2);
  uRam0000000113807bc8 = uStack_38;
  uRam0000000113807bc0 = uStack_40;
  uRam0000000113807bd8 = uStack_28;
  uRam0000000113807bd0 = uStack_30;
  uRam0000000113807be8 = uStack_18;
  uRam0000000113807be0 = uStack_20;
  return;
}



/* Entry: 1035264bc; end: 10352655b;  */

/* WARNING: Possible PIC construction at 0x000103526508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103526518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352650c) */
/* WARNING: Removing unreachable block (ram,0x00010352651c) */

void FUN_1035264bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f760c8 != -1) {
    func_0x000107c61568(0x112f760c8,FUN_103526474);
  }
  uVar5 = uRam0000000113807be8;
  uVar4 = uRam0000000113807be0;
  uVar3 = uRam0000000113807bd8;
  uVar2 = uRam0000000113807bd0;
  uVar1 = uRam0000000113807bc8;
  *param_1 = uRam0000000113807bc0;
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



/* Entry: 10352655c; end: 1035265a3;  */

void FUN_10352655c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd5a40,0x76,2);
  uRam0000000113807bf8 = uStack_38;
  uRam0000000113807bf0 = uStack_40;
  uRam0000000113807c08 = uStack_28;
  uRam0000000113807c00 = uStack_30;
  uRam0000000113807c18 = uStack_18;
  uRam0000000113807c10 = uStack_20;
  return;
}



/* Entry: 1035265a4; end: 103526643;  */

/* WARNING: Possible PIC construction at 0x0001035265f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103526600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035265f4) */
/* WARNING: Removing unreachable block (ram,0x000103526604) */

void FUN_1035265a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f760d0 != -1) {
    func_0x000107c61568(0x112f760d0,FUN_10352655c);
  }
  uVar5 = uRam0000000113807c18;
  uVar4 = uRam0000000113807c10;
  uVar3 = uRam0000000113807c08;
  uVar2 = uRam0000000113807c00;
  uVar1 = uRam0000000113807bf8;
  *param_1 = uRam0000000113807bf0;
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



/* Entry: 103526644; end: 1035267a3;  */

void FUN_103526644(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd58d0,0x164,2);
  uRam0000000113807c28 = uStack_38;
  uRam0000000113807c20 = uStack_40;
  uRam0000000113807c38 = uStack_28;
  uRam0000000113807c30 = uStack_30;
  uRam0000000113807c48 = uStack_18;
  uRam0000000113807c40 = uStack_20;
  return;
}



/* Entry: 1035267a4; end: 103526847;  */

void FUN_1035267a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar2;
  if ((uVar1 & 1) == 0) {
    FUN_10352abf8(0);
    func_0x000107c613fc();
    FUN_10352ac18();
    func_0x000107c61574(uVar2);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  }
  FUN_103526848(uVar3,param_1,param_2,param_3);
  return;
}



/* Entry: 103526848; end: 103526b13;  */

/* WARNING: Removing unreachable block (ram,0x000103526a3c) */
/* WARNING: Removing unreachable block (ram,0x000103526a98) */
/* WARNING: Removing unreachable block (ram,0x000103526a58) */
/* WARNING: Removing unreachable block (ram,0x00010352698c) */
/* WARNING: Removing unreachable block (ram,0x000103526ab4) */
/* WARNING: Removing unreachable block (ram,0x0001035269c4) */
/* WARNING: Removing unreachable block (ram,0x000103526aec) */
/* WARNING: Removing unreachable block (ram,0x000103526ad0) */
/* WARNING: Removing unreachable block (ram,0x0001035269a8) */
/* WARNING: Removing unreachable block (ram,0x000103526a04) */
/* WARNING: Removing unreachable block (ram,0x000103526a20) */

void FUN_103526848(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x10;
        goto code_r0x0001035268d0;
      case 2:
        func_0x000107c61428(param_1 + 0x20,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x20;
        goto code_r0x0001035268d0;
      case 3:
        FUN_103526b14(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_103526ba8(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_103526c3c(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_103526cd0(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_103526d64(param_2,param_1,param_3,param_4);
        break;
      case 8:
        FUN_103526df8(param_2,param_1,param_3,param_4);
        break;
      case 9:
        func_0x000107c61428(param_1 + 0x88,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x88;
        goto code_r0x0001035268d0;
      case 10:
        func_0x000107c61428(param_1 + 0x8c,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0x8c;
        goto code_r0x0001035268d0;
      case 0xb:
        FUN_103526e8c(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_103526f20(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_103526fb4(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_103527048(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        func_0x000107c61428(param_1 + 0xf0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x48);
        lVar2 = param_1 + 0xf0;
        goto code_r0x0001035268d0;
      case 0x10:
        FUN_1035270dc(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        func_0x000107c61428(param_1 + 0x101,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x101;
code_r0x0001035268d0:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103526b14; end: 103526ba7;  */

void FUN_103526b14(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x28,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103526ba8; end: 103526c3b;  */

void FUN_103526ba8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x40,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103526c3c; end: 103526ccf;  */

void FUN_103526c3c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x58,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103526cd0; end: 103526d63;  */

void FUN_103526cd0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_10352c5cc();
  (*pcVar2)(param_2 + 0x70,&UNK_110661420,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103526d64; end: 103526df7;  */

void FUN_103526d64(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x78;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_10352c6c8();
  (*pcVar2)(param_2 + 0x78,&UNK_1106614a8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103526df8; end: 103526e8b;  */

void FUN_103526df8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x80;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_10352c7f4();
  (*pcVar2)(param_2 + 0x80,&UNK_110661558,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103526e8c; end: 103526f1f;  */

void FUN_103526e8c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x90;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0x90,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103526f20; end: 103526fb3;  */

void FUN_103526f20(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x00010352b380();
  (*pcVar2)(param_2 + 0xb0,&UNK_110661e38,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103526fb4; end: 103527047;  */

void FUN_103526fb4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xc0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x00010352b340();
  (*pcVar2)(param_2 + 0xc0,&UNK_110661ec8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103527048; end: 1035270db;  */

void FUN_103527048(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101568c04();
  (*pcVar2)(param_2 + 0xd0,&UNK_110790c80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035270dc; end: 10352716f;  */

void FUN_1035270dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xf8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001015e9a3c();
  (*pcVar2)(param_2 + 0xf8,&UNK_110661f58,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103527170; end: 1035271db;  */

void FUN_103527170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_1035271dc(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 1035271dc; end: 1035276cb;  */

void FUN_1035271dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  long lStack_170;
  undefined1 uStack_168;
  undefined1 auStack_158 [24];
  long lStack_140;
  undefined1 uStack_138;
  long lStack_128;
  undefined1 uStack_120;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar3);
    (*pcVar5)(uVar2,uVar3,1,param_3,param_4);
    if (unaff_x21 != 0) {
      func_0x000107c6142c(uVar3);
      return;
    }
    func_0x000107c6142c(uVar3);
  }
  func_0x000107c61428(param_1 + 0x20,auStack_80,0,0);
  if (((*(char *)(param_1 + 0x20) != '\x01') ||
      ((**(code **)(param_4 + 0x68))(1,2,param_3,param_4), unaff_x21 == 0)) &&
     (FUN_1035276cc(param_1,param_2,param_3,param_4), unaff_x21 == 0)) {
    FUN_103527774(param_1,param_2,param_3,param_4);
    FUN_10352781c(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x70,auStack_98,0,0);
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(long *)(lVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_4 + 0x118);
      FUN_10352c5cc();
      func_0x000107c61434(lVar4);
      (*pcVar5)();
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c61428(param_1 + 0x78,auStack_b0,0,0);
    lVar4 = *(long *)(param_1 + 0x78);
    if (*(long *)(lVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_4 + 0x118);
      FUN_10352c6c8();
      func_0x000107c61434(lVar4);
      (*pcVar5)();
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c61428(param_1 + 0x80,auStack_c8,0,0);
    lVar4 = *(long *)(param_1 + 0x80);
    if (*(long *)(lVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_4 + 0x118);
      FUN_10352c7f4();
      func_0x000107c61434(lVar4);
      (*pcVar5)();
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c61428(param_1 + 0x88,auStack_e0,0,0);
    if (*(int *)(param_1 + 0x88) != 0) {
      (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x88),9,param_3,param_4);
    }
    func_0x000107c61428(param_1 + 0x8c,auStack_f8,0,0);
    if (*(int *)(param_1 + 0x8c) != 0) {
      (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x8c),10,param_3,param_4);
    }
    FUN_1035278c4(param_1,param_2,param_3,param_4);
    lVar4 = param_1 + 0xb0;
    func_0x000107c61428(lVar4,auStack_110,0,0);
    if (*(long *)(param_1 + 0xb0) != 0) {
      uStack_120 = *(undefined1 *)(param_1 + 0xb8);
      pcVar5 = *(code **)(param_4 + 0x80);
      lStack_128 = *(long *)(param_1 + 0xb0);
      func_0x00010352b380();
      (*pcVar5)(&lStack_128,0xc,&UNK_110661e38,lVar4,param_3,param_4);
    }
    lVar4 = param_1 + 0xc0;
    func_0x000107c61428(lVar4,&lStack_128,0,0);
    if (*(long *)(param_1 + 0xc0) != 0) {
      uStack_138 = *(undefined1 *)(param_1 + 200);
      pcVar5 = *(code **)(param_4 + 0x80);
      lStack_140 = *(long *)(param_1 + 0xc0);
      func_0x00010352b340();
      (*pcVar5)(&lStack_140,0xd,&UNK_110661ec8,lVar4,param_3,param_4);
    }
    FUN_103527968(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0xf0,&lStack_140,0,0);
    if (*(int *)(param_1 + 0xf0) != 0) {
      (**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0xf0),0xf,param_3,param_4);
    }
    lVar4 = param_1 + 0xf8;
    func_0x000107c61428(lVar4,auStack_158,0,0);
    if (*(long *)(param_1 + 0xf8) != 0) {
      uStack_168 = *(undefined1 *)(param_1 + 0x100);
      pcVar5 = *(code **)(param_4 + 0x80);
      lStack_170 = *(long *)(param_1 + 0xf8);
      func_0x0001015e9a3c();
      (*pcVar5)(&lStack_170,0x10,&UNK_110661f58,lVar4,param_3,param_4);
    }
    func_0x000107c61428(param_1 + 0x101,&lStack_170,0,0);
    if (*(char *)(param_1 + 0x101) == '\x01') {
      (**(code **)(param_4 + 0x68))(1,0x11,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1035276cc; end: 103527773;  */

void FUN_1035276cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x38);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,3,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103527774; end: 10352781b;  */

void FUN_103527774(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x50);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,4,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 10352781c; end: 1035278c3;  */

void FUN_10352781c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x68);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,5,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1035278c4; end: 103527967;  */

void FUN_1035278c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x90;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x98);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x90);
    uStack_60 = *(undefined8 *)(param_1 + 0xa8);
    uStack_68 = *(undefined8 *)(param_1 + 0xa0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0xb,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103527968; end: 103527a0b;  */

void FUN_103527968(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xd0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0xd8);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0xd0);
    uStack_60 = *(undefined8 *)(param_1 + 0xe8);
    uStack_68 = *(undefined8 *)(param_1 + 0xe0);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0xe,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103527a0c; end: 103527abb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103527a0c(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

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
  
  if (param_3 != param_6) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar17 = param_3;
    FUN_103527abc(param_3,param_6);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_3);
    if ((uVar17 & 1) == 0) {
      return (byte *)0x0;
    }
  }
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
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
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
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
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
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
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
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
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
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
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
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
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
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 103527abc; end: 1035285b3;  */

ulong FUN_103527abc(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  ulong uStack_2a0;
  long lStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  func_0x000107c61428(param_2 + 0x10,&uStack_2a0,0x20,0);
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 == *(ulong *)(param_2 + 0x10) && *(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18))
  {
    func_0x000107c614a8(&uStack_2a0);
LAB_103527b44:
    func_0x000107c61428(param_1 + 0x20,auStack_98,0,0);
    cVar2 = *(char *)(param_1 + 0x20);
    func_0x000107c61428(param_2 + 0x20,auStack_b0,0,0);
    if (cVar2 == *(char *)(param_2 + 0x20)) {
      func_0x000107c61428(param_1 + 0x28,auStack_c8,0,0);
      func_0x000107c61428(param_2 + 0x28,auStack_e0,0,0);
      lVar7 = *(long *)(param_1 + 0x28);
      uVar4 = *(ulong *)(param_1 + 0x30);
      uVar8 = *(ulong *)(param_1 + 0x38);
      lVar11 = *(long *)(param_2 + 0x28);
      uVar9 = *(ulong *)(param_2 + 0x30);
      uVar15 = *(ulong *)(param_2 + 0x38);
      uVar5 = uVar8;
      uVar13 = uVar4;
      lVar14 = lVar7;
      if (uVar8 >> 0x3c < 0xf) {
        if (0xe < uVar15 >> 0x3c) goto LAB_10352802c;
        func_0x000100d5520c(lVar7,uVar4,uVar8);
        if (lVar7 == lVar11) {
          func_0x000100d5520c(lVar7,uVar9,uVar15);
          uVar5 = uVar4;
          func_0x000100e25fcc(uVar4,uVar8,uVar9,uVar15);
          func_0x000100d55228(lVar7,uVar9,uVar15);
          if ((uVar5 & 1) != 0) goto LAB_103527bec;
        }
        else {
LAB_1035280c4:
          func_0x000100d5520c(lVar11,uVar9,uVar15);
          func_0x000100d55228(lVar11,uVar9,uVar15);
        }
      }
      else {
        if (0xe < uVar15 >> 0x3c) {
          func_0x000100d5520c(lVar7,uVar4,uVar8);
          func_0x000100d5520c(lVar11,uVar9,uVar15);
LAB_103527bec:
          func_0x000100d55228(lVar7,uVar4,uVar8);
          func_0x000107c61428(param_1 + 0x40,auStack_f8,0,0);
          func_0x000107c61428(param_2 + 0x40,auStack_110,0,0);
          lVar7 = *(long *)(param_1 + 0x40);
          uVar4 = *(ulong *)(param_1 + 0x48);
          uVar8 = *(ulong *)(param_1 + 0x50);
          lVar11 = *(long *)(param_2 + 0x40);
          uVar9 = *(ulong *)(param_2 + 0x48);
          uVar15 = *(ulong *)(param_2 + 0x50);
          uVar5 = uVar8;
          uVar13 = uVar4;
          lVar14 = lVar7;
          if (uVar8 >> 0x3c < 0xf) {
            if (uVar15 >> 0x3c < 0xf) {
              func_0x000100d5520c(lVar7,uVar4,uVar8);
              if (lVar7 != lVar11) goto LAB_1035280c4;
              func_0x000100d5520c(lVar7,uVar9,uVar15);
              uVar5 = uVar4;
              func_0x000100e25fcc(uVar4,uVar8,uVar9,uVar15);
              func_0x000100d55228(lVar7,uVar9,uVar15);
              if ((uVar5 & 1) == 0) goto LAB_1035280f0;
              goto LAB_103527c6c;
            }
          }
          else if (0xe < uVar15 >> 0x3c) {
            func_0x000100d5520c(lVar7,uVar4,uVar8);
            func_0x000100d5520c(lVar11,uVar9,uVar15);
LAB_103527c6c:
            func_0x000100d55228(lVar7,uVar4,uVar8);
            func_0x000107c61428(param_1 + 0x58,auStack_128,0,0);
            func_0x000107c61428(param_2 + 0x58,auStack_140,0,0);
            lVar7 = *(long *)(param_1 + 0x58);
            uVar4 = *(ulong *)(param_1 + 0x60);
            uVar8 = *(ulong *)(param_1 + 0x68);
            lVar11 = *(long *)(param_2 + 0x58);
            uVar9 = *(ulong *)(param_2 + 0x60);
            uVar15 = *(ulong *)(param_2 + 0x68);
            uVar5 = uVar8;
            uVar13 = uVar4;
            lVar14 = lVar7;
            if (uVar8 >> 0x3c < 0xf) {
              if (uVar15 >> 0x3c < 0xf) {
                func_0x000100d5520c(lVar7,uVar4,uVar8);
                if (lVar7 != lVar11) goto LAB_1035280c4;
                func_0x000100d5520c(lVar7,uVar9,uVar15);
                uVar5 = uVar4;
                func_0x000100e25fcc(uVar4,uVar8,uVar9,uVar15);
                func_0x000100d55228(lVar7,uVar9,uVar15);
                if ((uVar5 & 1) == 0) goto LAB_1035280f0;
                goto LAB_103527cec;
              }
            }
            else if (0xe < uVar15 >> 0x3c) {
              func_0x000100d5520c(lVar7,uVar4,uVar8);
              func_0x000100d5520c(lVar11,uVar9,uVar15);
LAB_103527cec:
              func_0x000100d55228(lVar7,uVar4,uVar8);
              func_0x000107c61428(param_1 + 0x70,auStack_158,0,0);
              uVar9 = *(ulong *)(param_1 + 0x70);
              func_0x000107c61428(param_2 + 0x70,auStack_170,0,0);
              uVar12 = *(undefined8 *)(param_2 + 0x70);
              func_0x000107c61434(uVar9);
              func_0x000107c61434(uVar12);
              uVar4 = uVar9;
              FUN_10352a454(uVar9,uVar12);
              func_0x000107c6142c(uVar9);
              func_0x000107c6142c(uVar12);
              if ((uVar4 & 1) != 0) {
                func_0x000107c61428(param_1 + 0x78,auStack_188,0,0);
                uVar9 = *(ulong *)(param_1 + 0x78);
                func_0x000107c61428(param_2 + 0x78,auStack_1a0,0,0);
                uVar12 = *(undefined8 *)(param_2 + 0x78);
                func_0x000107c61434(uVar9);
                func_0x000107c61434(uVar12);
                uVar4 = uVar9;
                FUN_10352a9e4(uVar9,uVar12);
                func_0x000107c6142c(uVar9);
                func_0x000107c6142c(uVar12);
                if ((uVar4 & 1) != 0) {
                  func_0x000107c61428(param_1 + 0x80,auStack_1b8,0,0);
                  uVar9 = *(ulong *)(param_1 + 0x80);
                  func_0x000107c61428(param_2 + 0x80,auStack_1d0,0,0);
                  uVar12 = *(undefined8 *)(param_2 + 0x80);
                  func_0x000107c61434(uVar9);
                  func_0x000107c61434(uVar12);
                  uVar4 = uVar9;
                  FUN_10352ab14(uVar9,uVar12);
                  func_0x000107c6142c(uVar9);
                  func_0x000107c6142c(uVar12);
                  if ((uVar4 & 1) != 0) {
                    func_0x000107c61428(param_1 + 0x88,auStack_1e8,0,0);
                    iVar1 = *(int *)(param_1 + 0x88);
                    func_0x000107c61428(param_2 + 0x88,auStack_200,0,0);
                    if (iVar1 == *(int *)(param_2 + 0x88)) {
                      func_0x000107c61428(param_1 + 0x8c,auStack_218,0,0);
                      iVar1 = *(int *)(param_1 + 0x8c);
                      func_0x000107c61428(param_2 + 0x8c,auStack_230,0,0);
                      if (iVar1 == *(int *)(param_2 + 0x8c)) {
                        func_0x000107c61428(param_1 + 0x90,auStack_248,0,0);
                        func_0x000107c61428(param_2 + 0x90,auStack_260,0,0);
                        uVar4 = *(ulong *)(param_1 + 0x90);
                        lVar7 = *(long *)(param_1 + 0x98);
                        uVar9 = *(ulong *)(param_1 + 0xa0);
                        uVar10 = *(undefined8 *)(param_1 + 0xa8);
                        uVar15 = *(ulong *)(param_2 + 0x90);
                        lVar11 = *(long *)(param_2 + 0x98);
                        uVar12 = *(undefined8 *)(param_2 + 0xa0);
                        uVar16 = *(undefined8 *)(param_2 + 0xa8);
                        if (lVar7 == 0) {
                          if (lVar11 != 0) goto LAB_103528120;
                          func_0x000101597350(uVar4,0,uVar9,uVar10);
                          func_0x000101597350(uVar15,0,uVar12,uVar16);
LAB_10352818c:
                          func_0x000101597ae4(uVar4,lVar7,uVar9,uVar10);
                          func_0x000107c61428(param_1 + 0xb0,auStack_2b8,0,0);
                          lVar11 = *(long *)(param_1 + 0xb0);
                          func_0x000107c61428(param_2 + 0xb0,auStack_2d0,0,0);
                          lVar7 = *(long *)(param_2 + 0xb0);
                          if (*(char *)(param_2 + 0xb8) != '\x01') {
                            if (lVar11 == lVar7) goto LAB_103528200;
                            goto LAB_1035280f4;
                          }
                          if (3 < lVar7) {
                            if (lVar7 < 6) {
                              if (lVar7 == 4) {
                                if (lVar11 == 4) goto LAB_103528200;
                              }
                              else if (lVar11 == 5) goto LAB_103528200;
                            }
                            else if (lVar7 == 6) {
                              if (lVar11 == 6) goto LAB_103528200;
                            }
                            else if (lVar11 == 7) goto LAB_103528200;
                            goto LAB_1035280f4;
                          }
                          if (lVar7 < 2) {
                            if (lVar7 == 0) {
                              if (lVar11 == 0) {
LAB_103528200:
                                func_0x000107c61428(param_1 + 0xc0,auStack_2e8,0,0);
                                lVar7 = *(long *)(param_1 + 0xc0);
                                uVar4 = param_2 + 0xc0;
                                func_0x000107c61428(uVar4,auStack_300,0,0);
                                if (*(char *)(param_2 + 200) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103528250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                  (*(code *)((ulong)(byte)(&UNK_10dbd4f11)
                                                          [*(long *)(param_2 + 0xc0)] * 4 +
                                            0x103528254))();
                                  return uVar4;
                                }
                                if (lVar7 == *(long *)(param_2 + 0xc0)) {
                                  func_0x000107c61428(param_1 + 0xd0,auStack_318,0,0);
                                  func_0x000107c61428(param_2 + 0xd0,auStack_330,0,0);
                                  uVar4 = *(ulong *)(param_1 + 0xd0);
                                  lVar7 = *(long *)(param_1 + 0xd8);
                                  uVar9 = *(ulong *)(param_1 + 0xe0);
                                  uVar10 = *(undefined8 *)(param_1 + 0xe8);
                                  uVar15 = *(ulong *)(param_2 + 0xd0);
                                  lVar11 = *(long *)(param_2 + 0xd8);
                                  uVar12 = *(undefined8 *)(param_2 + 0xe0);
                                  uVar16 = *(undefined8 *)(param_2 + 0xe8);
                                  if (lVar7 == 0) {
                                    if (lVar11 != 0) goto LAB_103528120;
                                    func_0x000101597350(uVar4,0,uVar9,uVar10);
                                    func_0x000101597350(uVar15,0,uVar12,uVar16);
                                  }
                                  else {
                                    if (lVar11 == 0) goto LAB_103528120;
                                    if (((uVar4 != uVar15) || (lVar7 != lVar11)) &&
                                       (uVar5 = uVar4,
                                       func_0x000107c605b8(uVar4,lVar7,uVar15,lVar11,0),
                                       (uVar5 & 1) == 0)) goto LAB_10352834c;
                                    func_0x000101597350(uVar4,lVar7,uVar9,uVar10);
                                    func_0x000101597350(uVar15,lVar11,uVar12,uVar16);
                                    uVar5 = uVar9;
                                    func_0x000100e25fcc(uVar9,uVar10,uVar12,uVar16);
                                    func_0x000101597ae4(uVar15,lVar11,uVar12,uVar16);
                                    if ((uVar5 & 1) == 0) goto LAB_103528388;
                                  }
                                  func_0x000101597ae4(uVar4,lVar7,uVar9,uVar10);
                                  func_0x000107c61428(param_1 + 0xf0,&uStack_2a0,0,0);
                                  iVar1 = *(int *)(param_1 + 0xf0);
                                  func_0x000107c61428(param_2 + 0xf0,auStack_348,0,0);
                                  if (iVar1 == *(int *)(param_2 + 0xf0)) {
                                    func_0x000107c61428(param_1 + 0xf8,auStack_360,0,0);
                                    lVar11 = *(long *)(param_1 + 0xf8);
                                    func_0x000107c61428(param_2 + 0xf8,auStack_378,0,0);
                                    lVar7 = *(long *)(param_2 + 0xf8);
                                    if (*(char *)(param_2 + 0x100) == '\x01') {
                                      if (lVar7 < 2) {
                                        if (lVar7 == 0) {
                                          if (lVar11 == 0) {
LAB_10352854c:
                                            func_0x000107c61428(param_1 + 0x101,auStack_390,0,0);
                                            bVar3 = *(byte *)(param_1 + 0x101);
                                            func_0x000107c61428(param_2 + 0x101,auStack_3a8,0,0);
                                            uVar6 = (bVar3 ^ *(byte *)(param_2 + 0x101)) ^ 1;
                                            goto LAB_1035280f8;
                                          }
                                        }
                                        else if (lVar11 == 1) goto LAB_10352854c;
                                      }
                                      else if (lVar7 == 2) {
                                        if (lVar11 == 2) goto LAB_10352854c;
                                      }
                                      else if (lVar11 == 3) goto LAB_10352854c;
                                    }
                                    else if (lVar11 == lVar7) goto LAB_10352854c;
                                  }
                                }
                              }
                            }
                            else if (lVar11 == 1) goto LAB_103528200;
                          }
                          else if (lVar7 == 2) {
                            if (lVar11 == 2) goto LAB_103528200;
                          }
                          else if (lVar11 == 3) goto LAB_103528200;
                        }
                        else if (lVar11 == 0) {
LAB_103528120:
                          uStack_2a0 = uVar4;
                          lStack_298 = lVar7;
                          uStack_290 = uVar9;
                          uStack_288 = uVar10;
                          uStack_280 = uVar15;
                          lStack_278 = lVar11;
                          uStack_270 = uVar12;
                          uStack_268 = uVar16;
                          func_0x000101597350(uVar4,lVar7,uVar9,uVar10);
                          func_0x000101597350(uVar15,lVar11,uVar12,uVar16);
                          func_0x000101628968(&uStack_2a0);
                        }
                        else {
                          if (((uVar4 == uVar15) && (lVar7 == lVar11)) ||
                             (uVar5 = uVar4, func_0x000107c605b8(uVar4,lVar7,uVar15,lVar11,0),
                             (uVar5 & 1) != 0)) {
                            func_0x000101597350(uVar4,lVar7,uVar9,uVar10);
                            func_0x000101597350(uVar15,lVar11,uVar12,uVar16);
                            uVar5 = uVar9;
                            func_0x000100e25fcc(uVar9,uVar10,uVar12,uVar16);
                            func_0x000101597ae4(uVar15,lVar11,uVar12,uVar16);
                            if ((uVar5 & 1) != 0) goto LAB_10352818c;
                          }
                          else {
LAB_10352834c:
                            func_0x000101597350(uVar4,lVar7,uVar9,uVar10);
                            func_0x000101597350(uVar15,lVar11,uVar12,uVar16);
                            func_0x000101597ae4(uVar15,lVar11,uVar12,uVar16);
                          }
LAB_103528388:
                          func_0x000101597ae4(uVar4,lVar7,uVar9,uVar10);
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_1035280f4;
            }
          }
        }
LAB_10352802c:
        lVar7 = lVar11;
        uVar4 = uVar9;
        uVar8 = uVar15;
        func_0x000100d5520c(lVar14,uVar13,uVar5);
        func_0x000100d5520c(lVar7,uVar4,uVar8);
        func_0x000100d55228(lVar14,uVar13,uVar5);
      }
LAB_1035280f0:
      func_0x000100d55228(lVar7,uVar4,uVar8);
    }
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_2a0);
    if ((uVar4 & 1) != 0) goto LAB_103527b44;
  }
LAB_1035280f4:
  uVar6 = 0;
LAB_1035280f8:
  return (ulong)(uVar6 & 1);
}


