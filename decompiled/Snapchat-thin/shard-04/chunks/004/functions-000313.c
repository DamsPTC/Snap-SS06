/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103517df4; end: 103517e43;  */

void FUN_103517df4(void)

{
  FUN_1035179b0();
  return;
}



/* Entry: 103517e44; end: 103517e47;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103517e44(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103517e48; end: 103517e7f;  */

uint FUN_103517e48(long param_1,long param_2)

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
  FUN_10351bf4c();
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



/* Entry: 103517e80; end: 103517eff;  */

uint FUN_103517e80(undefined8 *param_1)

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
  FUN_1035183f4(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103517f00; end: 103517f9f;  */

/* WARNING: Possible PIC construction at 0x000103517f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103517f5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103517f50) */
/* WARNING: Removing unreachable block (ram,0x000103517f60) */

void FUN_103517f00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75cb0 != -1) {
    func_0x000107c61568(0x112f75cb0,FUN_103517038);
  }
  uVar5 = uRam0000000113807a68;
  uVar4 = uRam0000000113807a60;
  uVar3 = uRam0000000113807a58;
  uVar2 = uRam0000000113807a50;
  uVar1 = uRam0000000113807a48;
  *param_1 = uRam0000000113807a40;
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



/* Entry: 103517fa0; end: 103517fdb;  */

void FUN_103517fa0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75cf8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75cf8,&UNK_10dbd41c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103517fdc; end: 103518117;  */

void FUN_103517fdc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103518118; end: 103518197;  */

uint FUN_103518118(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1035183f4(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103518198; end: 1035182d3;  */

uint FUN_103518198(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_310 [240];
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
        uStack_158 = puVar4[0x19];
        uStack_160 = puVar4[0x18];
        uStack_148 = puVar4[0x1b];
        uStack_150 = puVar4[0x1a];
        uStack_138 = puVar4[0x1d];
        uStack_140 = puVar4[0x1c];
        uStack_198 = puVar4[0x11];
        uStack_1a0 = puVar4[0x10];
        uStack_188 = puVar4[0x13];
        uStack_190 = puVar4[0x12];
        uStack_178 = puVar4[0x15];
        uStack_180 = puVar4[0x14];
        uStack_168 = puVar4[0x17];
        uStack_170 = puVar4[0x16];
        uStack_1d8 = puVar4[9];
        uStack_1e0 = puVar4[8];
        uStack_1c8 = puVar4[0xb];
        uStack_1d0 = puVar4[10];
        uStack_1b8 = puVar4[0xd];
        uStack_1c0 = puVar4[0xc];
        uStack_1a8 = puVar4[0xf];
        uStack_1b0 = puVar4[0xe];
        uStack_218 = puVar4[1];
        uStack_220 = *puVar4;
        uStack_208 = puVar4[3];
        uStack_210 = puVar4[2];
        uStack_1f8 = puVar4[5];
        uStack_200 = puVar4[4];
        uStack_1e8 = puVar4[7];
        uStack_1f0 = puVar4[6];
        uStack_68 = puVar5[0x19];
        uStack_70 = puVar5[0x18];
        uStack_58 = puVar5[0x1b];
        uStack_60 = puVar5[0x1a];
        uStack_48 = puVar5[0x1d];
        uStack_50 = puVar5[0x1c];
        uStack_a8 = puVar5[0x11];
        uStack_b0 = puVar5[0x10];
        uStack_98 = puVar5[0x13];
        uStack_a0 = puVar5[0x12];
        uStack_88 = puVar5[0x15];
        uStack_90 = puVar5[0x14];
        uStack_78 = puVar5[0x17];
        uStack_80 = puVar5[0x16];
        uStack_e8 = puVar5[9];
        uStack_f0 = puVar5[8];
        uStack_d8 = puVar5[0xb];
        uStack_e0 = puVar5[10];
        uStack_c8 = puVar5[0xd];
        uStack_d0 = puVar5[0xc];
        uStack_b8 = puVar5[0xf];
        uStack_c0 = puVar5[0xe];
        uStack_128 = puVar5[1];
        uStack_130 = *puVar5;
        uStack_118 = puVar5[3];
        uStack_120 = puVar5[2];
        uStack_108 = puVar5[5];
        uStack_110 = puVar5[4];
        uStack_f8 = puVar5[7];
        uStack_100 = puVar5[6];
        func_0x0001034aa1e4(&uStack_220,auStack_310);
        func_0x0001034aa1e4(&uStack_130,auStack_310);
        puVar1 = &uStack_220;
        FUN_103518840(puVar1,&uStack_130);
        uVar3 = (uint)puVar1;
        func_0x0001034aa254(&uStack_130);
        func_0x0001034aa254(&uStack_220);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x1e;
        puVar4 = puVar4 + 0x1e;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 1035182d4; end: 1035183f3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035182d4(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  code *pcVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte **ppbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  undefined1 auVar44 [16];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  pbVar10 = (byte *)*param_1;
  pbVar26 = (byte *)param_1[1];
  uVar21 = param_1[2];
  uVar24 = (uint)((ulong)param_1[3] >> 0x3c) & 3;
  if (uVar24 < 2) {
    if (uVar24 == 0) {
      uStack_58 = param_1[3] & 0xcfffffffffffffff;
      uStack_b8 = param_2[3];
      if ((uStack_b8 & 0x3000000000000000) == 0) {
        lStack_c0 = param_2[2];
        lStack_c8 = param_2[1];
        lStack_d0 = *param_2;
        lStack_a8 = param_2[5];
        lStack_b0 = param_2[4];
        lStack_a0 = param_2[6];
        lStack_98 = param_2[7];
        lStack_88 = param_2[9];
        lStack_90 = param_2[8];
        lStack_80 = param_2[10];
        lStack_78 = param_2[0xb];
        ppbVar11 = &pbStack_70;
        pbStack_70 = pbVar10;
        pbStack_68 = pbVar26;
        uStack_60 = uVar21;
        FUN_10351c754(ppbVar11,&lStack_d0);
        uVar24 = (uint)ppbVar11;
        goto LAB_1035183e4;
      }
    }
    else if ((param_2[3] & 0x3000000000000000U) == 0x1000000000000000) {
      uVar16 = param_2[1];
      uVar23 = param_2[2];
      lVar17 = *param_2;
      if (uVar21 != uVar23) {
        func_0x000107c6157c(uVar21);
        func_0x000107c6157c(uVar23);
        uVar12 = uVar21;
        FUN_103598ee8(uVar21,uVar23);
        func_0x000107c61574(uVar23);
        func_0x000107c61574(uVar21);
        if ((uVar12 & 1) == 0) {
          return (byte *)0x0;
        }
      }
      goto SUB_100e25fcc;
    }
  }
  else if (uVar24 == 2) {
    if ((param_2[3] & 0x3000000000000000U) == 0x2000000000000000) {
      uVar16 = param_2[1];
      uVar23 = param_2[2];
      lVar17 = *param_2;
      if (uVar21 != uVar23) {
        func_0x000107c6157c(uVar21);
        func_0x000107c6157c(uVar23);
        uVar12 = uVar21;
        FUN_1035c9534(uVar21,uVar23);
        func_0x000107c61574(uVar23);
        func_0x000107c61574(uVar21);
        if ((uVar12 & 1) == 0) {
          return (byte *)0x0;
        }
      }
SUB_100e25fcc:
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
        uVar24 = (uint)((ulong)pbVar26 >> 0x20);
        uVar19 = uVar24 >> 0x1e;
        uVar4 = (uint)(uVar16 >> 0x20);
        uVar22 = uVar4 >> 0x1e;
        iVar6 = (int)pbVar10;
        pbVar13 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar17 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar7 = (byte *)0x1;
        }
        else if (uVar24 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar6)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar5)();
            }
            uVar21 = (ulong)(iVar20 - iVar6);
          }
joined_r0x000100e26170:
          if (1 < uVar4 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar22 == 0) {
            uVar23 = uVar16 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar17 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar17)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar5)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar17)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar7 = (byte *)0x0;
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar5)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar22 == 2) {
            uVar23 = *(long *)(lVar17 + 0x18) - *(long *)(lVar17 + 0x10);
            if (SBORROW8(*(long *)(lVar17 + 0x18),*(long *)(lVar17 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar5)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar19 < 2) {
              if (uVar19 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar26;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar26 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar26 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar26 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar26 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar26 >> 0x28);
                pbVar13 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                    (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar7 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar6;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar5)();
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
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar5)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar19 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar13 = (byte *)((long)register0x00000008 + -0x70);
                goto code_r0x000100e26260;
              }
              lVar27 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar27,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar5)();
                }
                pbVar10 = pbVar10 + (lVar27 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar27;
              if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar5)();
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
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,
                                lVar17,uVar16);
            pbVar7 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar16;
          }
          else {
            pbVar7 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          return pbVar7;
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
        pbVar9 = *(byte **)pbVar7;
        pbVar10 = *(byte **)(pbVar7 + 8);
        pbVar25 = *(byte **)(pbVar7 + 0x18);
        bVar28 = pbVar7[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar7 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar7 + 0x15) << 0x28 | (ulong)pbVar7[0x10]);
        pbVar14 = pbVar10;
        if (bVar28 < 3) {
          if (bVar28 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar17 = *(long *)pbVar13;
              uVar8 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar9,lVar17,uVar8);
              return (byte *)(ulong)((uint)pbVar9 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar28 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar18 = *(byte **)(pbVar13 + 0x10);
            lVar17 = *(long *)pbVar13;
            uVar8 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar9,lVar17,uVar8);
            if (((ulong)pbVar9 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar9 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 == pbVar15) && (pbVar26 == pbVar18)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar18 = *(byte **)(pbVar13 + 8);
            lVar17 = *(long *)(pbVar13 + 0x18);
            if ((pbVar9 == pbVar15) && (pbVar10 == pbVar18)) {
              if (((pbVar7[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar17 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar17);
              func_0x000107c61174();
              pbVar10 = pbVar25;
              func_0x000107c60118();
              func_0x000107c61170(pbVar25);
              func_0x000107c61170(lVar17);
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
          )(pbVar9,pbVar14,pbVar15,pbVar18,0);
          return pbVar9;
        }
        lVar27 = *(long *)(pbVar7 + 0x20);
        if (bVar28 < 5) {
          if (bVar28 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar18 = *(byte **)(pbVar13 + 8);
            if (((pbVar9 == pbVar15) && (pbVar10 == pbVar18)) &&
               (pbVar9 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar18 = *(byte **)(pbVar13 + 0x18),
               pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar9 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar13 + 0x10);
          lVar17 = *(long *)(pbVar13 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar18 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar18 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar9 = pbVar10;
            pbVar14 = pbVar26;
            if ((pbVar10 != pbVar15) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
          }
          if (lVar27 != 0) {
            if (lVar17 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar27 == lVar17)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar27,*(byte **)(pbVar13 + 0x18),lVar17,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar17 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar28 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar9 == (byte *)0x0) &&
              lVar27 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar27 = *(long *)(pbVar13 + 0x20);
            lVar17 = *(long *)(pbVar13 + 0x18);
            bVar28 = pbVar13[8] | (byte)lVar17;
            bVar29 = pbVar13[9] | (byte)((ulong)lVar17 >> 8);
            bVar30 = pbVar13[10] | (byte)((ulong)lVar17 >> 0x10);
            bVar31 = pbVar13[0xb] | (byte)((ulong)lVar17 >> 0x18);
            bVar32 = pbVar13[0xc] | (byte)((ulong)lVar17 >> 0x20);
            bVar33 = pbVar13[0xd] | (byte)((ulong)lVar17 >> 0x28);
            bVar34 = pbVar13[0xe] | (byte)((ulong)lVar17 >> 0x30);
            bVar35 = pbVar13[0xf] | (byte)((ulong)lVar17 >> 0x38);
            bVar36 = pbVar13[0x10] | (byte)lVar27;
            bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
            bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
            bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
            bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
            bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
            bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
            bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
            auVar44[1] = bVar29;
            auVar44[0] = bVar28;
            auVar44[2] = bVar30;
            auVar44[3] = bVar31;
            auVar44[4] = bVar32;
            auVar44[5] = bVar33;
            auVar44[6] = bVar34;
            auVar44[7] = bVar35;
            auVar44[8] = bVar36;
            auVar44[9] = bVar37;
            auVar44[10] = bVar38;
            auVar44[0xb] = bVar39;
            auVar44[0xc] = bVar40;
            auVar44[0xd] = bVar41;
            auVar44[0xe] = bVar42;
            auVar44[0xf] = bVar43;
            auVar3[1] = bVar29;
            auVar3[0] = bVar28;
            auVar3[2] = bVar30;
            auVar3[3] = bVar31;
            auVar3[4] = bVar32;
            auVar3[5] = bVar33;
            auVar3[6] = bVar34;
            auVar3[7] = bVar35;
            auVar3[8] = bVar36;
            auVar3[9] = bVar37;
            auVar3[10] = bVar38;
            auVar3[0xb] = bVar39;
            auVar3[0xc] = bVar40;
            auVar3[0xd] = bVar41;
            auVar3[0xe] = bVar42;
            auVar3[0xf] = bVar43;
            auVar44 = NEON_ext(auVar44,auVar3,8,1);
            if (CONCAT17(bVar35 | auVar44[7],
                         CONCAT16(bVar34 | auVar44[6],
                                  CONCAT15(bVar33 | auVar44[5],
                                           CONCAT14(bVar32 | auVar44[4],
                                                    CONCAT13(bVar31 | auVar44[3],
                                                             CONCAT12(bVar30 | auVar44[2],
                                                                      CONCAT11(bVar29 | auVar44[1],
                                                                               bVar28 | auVar44[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar9 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar27 == 0)) {
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
          lVar27 = *(long *)(pbVar13 + 0x20);
          lVar17 = *(long *)(pbVar13 + 0x18);
          bVar28 = pbVar13[8] | (byte)lVar17;
          bVar29 = pbVar13[9] | (byte)((ulong)lVar17 >> 8);
          bVar30 = pbVar13[10] | (byte)((ulong)lVar17 >> 0x10);
          bVar31 = pbVar13[0xb] | (byte)((ulong)lVar17 >> 0x18);
          bVar32 = pbVar13[0xc] | (byte)((ulong)lVar17 >> 0x20);
          bVar33 = pbVar13[0xd] | (byte)((ulong)lVar17 >> 0x28);
          bVar34 = pbVar13[0xe] | (byte)((ulong)lVar17 >> 0x30);
          bVar35 = pbVar13[0xf] | (byte)((ulong)lVar17 >> 0x38);
          bVar36 = pbVar13[0x10] | (byte)lVar27;
          bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
          bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
          bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
          bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
          bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
          bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
          bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
          auVar1[1] = bVar29;
          auVar1[0] = bVar28;
          auVar1[2] = bVar30;
          auVar1[3] = bVar31;
          auVar1[4] = bVar32;
          auVar1[5] = bVar33;
          auVar1[6] = bVar34;
          auVar1[7] = bVar35;
          auVar1[8] = bVar36;
          auVar1[9] = bVar37;
          auVar1[10] = bVar38;
          auVar1[0xb] = bVar39;
          auVar1[0xc] = bVar40;
          auVar1[0xd] = bVar41;
          auVar1[0xe] = bVar42;
          auVar1[0xf] = bVar43;
          auVar2[1] = bVar29;
          auVar2[0] = bVar28;
          auVar2[2] = bVar30;
          auVar2[3] = bVar31;
          auVar2[4] = bVar32;
          auVar2[5] = bVar33;
          auVar2[6] = bVar34;
          auVar2[7] = bVar35;
          auVar2[8] = bVar36;
          auVar2[9] = bVar37;
          auVar2[10] = bVar38;
          auVar2[0xb] = bVar39;
          auVar2[0xc] = bVar40;
          auVar2[0xd] = bVar41;
          auVar2[0xe] = bVar42;
          auVar2[0xf] = bVar43;
          auVar44 = NEON_ext(auVar1,auVar2,8,1);
          lVar17 = CONCAT17(bVar35 | auVar44[7],
                            CONCAT16(bVar34 | auVar44[6],
                                     CONCAT15(bVar33 | auVar44[5],
                                              CONCAT14(bVar32 | auVar44[4],
                                                       CONCAT13(bVar31 | auVar44[3],
                                                                CONCAT12(bVar30 | auVar44[2],
                                                                         CONCAT11(bVar29 | auVar44[1
                                                  ],bVar28 | auVar44[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar17 = *(long *)(pbVar13 + 8);
        uVar16 = *(ulong *)(pbVar13 + 0x10);
        lVar27 = *(long *)pbVar13;
        uVar8 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar9,lVar27,uVar8);
        if (((ulong)pbVar9 & 1) == 0) {
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
  else if (((param_2[3] ^ 0xffffffffffffffffU) & 0x3000000000000000) == 0) {
    uVar16 = param_2[1];
    uVar23 = param_2[2];
    lVar17 = *param_2;
    if (uVar21 != uVar23) {
      func_0x000107c6157c(uVar21);
      func_0x000107c6157c(uVar23);
      uVar12 = uVar21;
      FUN_1035818bc(uVar21,uVar23);
      func_0x000107c61574(uVar23);
      func_0x000107c61574(uVar21);
      if ((uVar12 & 1) == 0) {
        return (byte *)0x0;
      }
    }
    goto SUB_100e25fcc;
  }
  uVar24 = 0;
LAB_1035183e4:
  return (byte *)(ulong)(uVar24 & 1);
}



/* Entry: 1035183f4; end: 10351869f;  */

uint FUN_1035183f4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_3e8 [104];
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
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined1 uStack_2c0;
  undefined8 uStack_2bf;
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
  char cStack_250;
  undefined7 uStack_24f;
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
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  char cStack_1e8;
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
  undefined1 uStack_180;
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
  undefined1 uStack_110;
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
  
  uStack_278 = param_1[7];
  uStack_280 = param_1[6];
  uStack_128 = param_1[9];
  uStack_130 = param_1[8];
  uStack_268 = param_1[9];
  uStack_270 = param_1[8];
  uStack_118 = param_1[0xb];
  uStack_120 = param_1[10];
  uStack_168 = param_1[1];
  uStack_170 = *param_1;
  uStack_158 = param_1[3];
  uStack_160 = param_1[2];
  uStack_148 = param_1[5];
  uStack_150 = param_1[4];
  uStack_138 = param_1[7];
  uStack_140 = param_1[6];
  uStack_2a8 = param_1[1];
  uStack_2b0 = *param_1;
  uStack_298 = param_1[3];
  uStack_2a0 = param_1[2];
  uStack_288 = param_1[5];
  uStack_290 = param_1[4];
  uStack_1d8 = param_2[1];
  uStack_1e0 = *param_2;
  uStack_1c8 = param_2[3];
  uStack_1d0 = param_2[2];
  uStack_2e0 = param_2[7];
  uStack_2e8 = param_2[6];
  uStack_198 = param_2[9];
  uStack_1a0 = param_2[8];
  uStack_2d0 = param_2[9];
  uStack_2d8 = param_2[8];
  uStack_188 = param_2[0xb];
  uStack_190 = param_2[10];
  uStack_1b8 = param_2[5];
  uStack_1c0 = param_2[4];
  uStack_1a8 = param_2[7];
  uStack_1b0 = param_2[6];
  uStack_310 = param_2[1];
  uStack_318 = *param_2;
  uStack_300 = param_2[3];
  uStack_308 = param_2[2];
  uStack_2f0 = param_2[5];
  uStack_2f8 = param_2[4];
  uStack_258 = param_1[0xb];
  uStack_260 = param_1[10];
  uStack_110 = *(undefined1 *)(param_1 + 0xc);
  uStack_180 = *(undefined1 *)(param_2 + 0xc);
  cStack_250 = *(char *)(param_1 + 0xc);
  cStack_1e8 = *(char *)(param_2 + 0xc);
  uStack_1f0 = (undefined1)param_2[0xb];
  uStack_1ef = (undefined7)((ulong)param_2[0xb] >> 8);
  uStack_1f8 = (undefined1)param_2[10];
  uStack_1f7 = (undefined7)((ulong)param_2[10] >> 8);
  uStack_248 = uStack_318;
  uStack_240 = uStack_310;
  uStack_238 = uStack_308;
  uStack_230 = uStack_300;
  uStack_228 = uStack_2f8;
  uStack_220 = uStack_2f0;
  uStack_218 = uStack_2e8;
  uStack_210 = uStack_2e0;
  uStack_208 = uStack_2d8;
  uStack_200 = uStack_2d0;
  if (cStack_250 == '\x01') {
    if (cStack_1e8 == '\x01') {
      uStack_338 = param_1[9];
      uStack_340 = param_1[8];
      uStack_328 = param_1[0xb];
      uStack_330 = param_1[10];
      uStack_320 = CONCAT71(uStack_320._1_7_,*(undefined1 *)(param_1 + 0xc));
      uStack_378 = param_1[1];
      uStack_380 = *param_1;
      uStack_368 = param_1[3];
      uStack_370 = param_1[2];
      uStack_358 = param_1[5];
      uStack_360 = param_1[4];
      uStack_348 = param_1[7];
      uStack_350 = param_1[6];
      FUN_1035186a0(&uStack_170,auStack_3e8,0x112f730f8,&UNK_10dbce300);
      FUN_1035186a0(&uStack_1e0,auStack_3e8,0x112f730f8,&UNK_10dbce300);
      func_0x00010351c038(&uStack_380,0x112f730f8,&UNK_10dbce300);
LAB_103518678:
      uVar3 = param_1[0xd];
      func_0x000100e25fcc(uVar3,param_1[0xe],param_2[0xd],param_2[0xe]);
      uVar1 = (uint)uVar3;
      goto LAB_103518684;
    }
LAB_103518538:
    uStack_2bf = CONCAT17(cStack_1e8,uStack_1ef);
    uStack_2c7 = uStack_1f7;
    uStack_2c0 = uStack_1f0;
    uStack_320 = CONCAT71(uStack_24f,cStack_250);
    uStack_380 = uStack_2b0;
    uStack_378 = uStack_2a8;
    uStack_370 = uStack_2a0;
    uStack_368 = uStack_298;
    uStack_360 = uStack_290;
    uStack_358 = uStack_288;
    uStack_350 = uStack_280;
    uStack_348 = uStack_278;
    uStack_340 = uStack_270;
    uStack_338 = uStack_268;
    uStack_330 = uStack_260;
    uStack_328 = uStack_258;
    uStack_2c8 = uStack_1f8;
    FUN_1035186a0(&uStack_170,auStack_3e8,0x112f730f8,&UNK_10dbce300);
    FUN_1035186a0(&uStack_1e0,auStack_3e8,0x112f730f8,&UNK_10dbce300);
    func_0x00010351c038(&uStack_380,0x112f75d28,&UNK_10dbd4320);
  }
  else {
    if (cStack_1e8 == '\x01') goto LAB_103518538;
    uStack_338 = param_2[9];
    uStack_340 = param_2[8];
    uStack_328 = param_2[0xb];
    uStack_330 = param_2[10];
    uStack_320 = CONCAT71(uStack_320._1_7_,*(undefined1 *)(param_2 + 0xc));
    uStack_378 = param_2[1];
    uStack_380 = *param_2;
    uStack_368 = param_2[3];
    uStack_370 = param_2[2];
    uStack_358 = param_2[5];
    uStack_360 = param_2[4];
    uStack_348 = param_2[7];
    uStack_350 = param_2[6];
    uStack_d8 = param_1[5];
    uStack_e0 = param_1[4];
    uStack_c8 = param_1[7];
    uStack_d0 = param_1[6];
    uStack_b8 = param_1[9];
    uStack_c0 = param_1[8];
    uStack_a8 = param_1[0xb];
    uStack_b0 = param_1[10];
    uStack_f8 = param_1[1];
    uStack_100 = *param_1;
    uStack_e8 = param_1[3];
    uStack_f0 = param_1[2];
    uStack_a0 = uStack_380;
    uStack_98 = uStack_378;
    uStack_90 = uStack_370;
    uStack_88 = uStack_368;
    uStack_80 = uStack_360;
    uStack_78 = uStack_358;
    uStack_70 = uStack_350;
    uStack_68 = uStack_348;
    uStack_60 = uStack_340;
    uStack_58 = uStack_338;
    uStack_50 = uStack_330;
    uStack_48 = uStack_328;
    FUN_1035186a0(&uStack_170,auStack_3e8,0x112f730f8,&UNK_10dbce300);
    FUN_1035186a0(&uStack_1e0,auStack_3e8,0x112f730f8,&UNK_10dbce300);
    puVar2 = &uStack_100;
    FUN_1035182d4(puVar2,&uStack_a0);
    func_0x00010351c038(&uStack_380,0x112f730f8,&UNK_10dbce300);
    func_0x00010351c038(&uStack_2b0,0x112f730f8,&UNK_10dbce300);
    if (((ulong)puVar2 & 1) != 0) goto LAB_103518678;
  }
  uVar1 = 0;
LAB_103518684:
  return uVar1 & 1;
}



/* Entry: 1035186a0; end: 10351871b;  */

undefined8 FUN_1035186a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10351871c; end: 1035187ff;  */

/* WARNING: Possible PIC construction at 0x00010351878c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035009d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035187d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035009d8) */
/* WARNING: Removing unreachable block (ram,0x000100d54cb4) */
/* WARNING: Removing unreachable block (ram,0x000100d54cc4) */
/* WARNING: Removing unreachable block (ram,0x000100d54cc0) */
/* WARNING: Removing unreachable block (ram,0x000103518790) */
/* WARNING: Removing unreachable block (ram,0x0001035009a8) */
/* WARNING: Removing unreachable block (ram,0x0001035009b8) */
/* WARNING: Removing unreachable block (ram,0x0001035009b4) */
/* WARNING: Removing unreachable block (ram,0x0001035187dc) */

void FUN_10351871c(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_4 >> 0x3c) & 3;
  if ((uVar1 < 2) && (uVar1 == 0)) {
    func_0x000107c61434();
    func_0x000107c61434(param_2);
    param_1 = param_3;
    param_2 = param_4;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c6157c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103518800; end: 10351883f;  */

void FUN_103518800(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd3f30;
  func_0x000107c61520(&DAT_10dbd3f30,&UNK_1106602c8);
  puRam0000000112f75c88 = puVar1;
  return;
}



/* Entry: 103518840; end: 103519b9b;  */

uint FUN_103518840(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_588 [120];
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
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
  ulong uStack_420;
  long lStack_418;
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
  ulong uStack_3a8;
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
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  ulong uStack_330;
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
  ulong uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
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
  
  uVar10 = param_1[7];
  lVar9 = param_1[6];
  uVar5 = param_1[8];
  uVar11 = param_2[7];
  lVar2 = param_2[6];
  uVar8 = param_2[8];
  lStack_130 = lVar2;
  uStack_128 = uVar11;
  uStack_120 = uVar8;
  lStack_110 = lVar9;
  uStack_108 = uVar10;
  uStack_100 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_103518bf8;
    if ((int)lVar9 == (int)lVar2) {
      FUN_1035186a0(&lStack_110,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035186a0(&lStack_130,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
      uVar3 = uVar10;
      func_0x000100e25fcc(uVar10,uVar5,uVar11,uVar8);
      func_0x000100d550c0(lVar2,uVar11,uVar8);
      if ((uVar3 & 1) != 0) goto LAB_1035188e8;
    }
    else {
      FUN_1035186a0(&lStack_110,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
      plVar4 = &lStack_130;
LAB_103518dc4:
      FUN_1035186a0(plVar4,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
      func_0x000100d550c0(lVar2,uVar11,uVar8);
    }
LAB_103518df0:
    func_0x000100d550c0(lVar9,uVar10,uVar5);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_103518bf8:
      FUN_1035186a0(&lStack_110,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
      plVar4 = &lStack_130;
      uVar3 = uVar5;
      uVar7 = uVar10;
      lVar6 = lVar9;
      uVar5 = uVar8;
      uVar10 = uVar11;
      lVar9 = lVar2;
LAB_103518ccc:
      FUN_1035186a0(plVar4,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
      func_0x000100d550c0(lVar6,uVar7,uVar3);
      goto LAB_103518df0;
    }
    FUN_1035186a0(&lStack_110,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
    FUN_1035186a0(&lStack_130,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
LAB_1035188e8:
    func_0x000100d550c0(lVar9,uVar10,uVar5);
    uVar10 = param_1[10];
    lVar9 = param_1[9];
    uVar5 = param_1[0xb];
    uVar11 = param_2[10];
    lVar2 = param_2[9];
    uVar8 = param_2[0xb];
    lStack_170 = lVar2;
    uStack_168 = uVar11;
    uStack_160 = uVar8;
    lStack_150 = lVar9;
    uStack_148 = uVar10;
    uStack_140 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_103518ca4;
      if ((int)lVar9 != (int)lVar2) {
        FUN_1035186a0(&lStack_150,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
        plVar4 = &lStack_170;
        goto LAB_103518dc4;
      }
      FUN_1035186a0(&lStack_150,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035186a0(&lStack_170,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
      uVar3 = uVar10;
      func_0x000100e25fcc(uVar10,uVar5,uVar11,uVar8);
      func_0x000100d550c0(lVar2,uVar11,uVar8);
      if ((uVar3 & 1) == 0) goto LAB_103518df0;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_103518ca4:
        FUN_1035186a0(&lStack_150,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
        plVar4 = &lStack_170;
        uVar3 = uVar5;
        uVar7 = uVar10;
        lVar6 = lVar9;
        uVar5 = uVar8;
        uVar10 = uVar11;
        lVar9 = lVar2;
        goto LAB_103518ccc;
      }
      FUN_1035186a0(&lStack_150,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
      FUN_1035186a0(&lStack_170,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
    }
    func_0x000100d550c0(lVar9,uVar10,uVar5);
    lVar2 = *param_1;
    lVar6 = *param_2;
    lVar9 = param_2[1];
    func_0x00010355a214(lVar2,(char)param_1[1]);
    func_0x00010355a214(lVar6,(char)lVar9);
    if (lVar2 == lVar6) {
      lVar2 = param_1[2];
      lVar6 = param_2[2];
      lVar9 = param_2[3];
      func_0x000103559d2c(lVar2,(char)param_1[3]);
      func_0x000103559d2c(lVar6,(char)lVar9);
      if (lVar2 == lVar6) {
        uVar10 = param_1[0xd];
        lVar9 = param_1[0xc];
        uVar5 = param_1[0xe];
        uVar11 = param_2[0xd];
        lVar2 = param_2[0xc];
        uVar8 = param_2[0xe];
        lStack_1b0 = lVar2;
        uStack_1a8 = uVar11;
        uStack_1a0 = uVar8;
        lStack_190 = lVar9;
        uStack_188 = uVar10;
        uStack_180 = uVar5;
        if (uVar5 >> 0x3c < 0xf) {
          if (0xe < uVar8 >> 0x3c) goto LAB_103518e28;
          if ((int)lVar9 != (int)lVar2) {
            FUN_1035186a0(&lStack_190,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
            plVar4 = &lStack_1b0;
            goto LAB_103518dc4;
          }
          FUN_1035186a0(&lStack_190,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
          FUN_1035186a0(&lStack_1b0,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
          uVar3 = uVar10;
          func_0x000100e25fcc(uVar10,uVar5,uVar11,uVar8);
          func_0x000100d550c0(lVar2,uVar11,uVar8);
          if ((uVar3 & 1) == 0) goto LAB_103518df0;
        }
        else {
          if (uVar8 >> 0x3c < 0xf) {
LAB_103518e28:
            FUN_1035186a0(&lStack_190,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
            plVar4 = &lStack_1b0;
            uVar3 = uVar5;
            uVar7 = uVar10;
            lVar6 = lVar9;
            uVar5 = uVar8;
            uVar10 = uVar11;
            lVar9 = lVar2;
            goto LAB_103518ccc;
          }
          FUN_1035186a0(&lStack_190,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
          FUN_1035186a0(&lStack_1b0,&lStack_3a0,0x112db80f8,&UNK_10d9671e0);
        }
        func_0x000100d550c0(lVar9,uVar10,uVar5);
        lStack_1e8 = param_1[0x18];
        lStack_1f0 = param_1[0x17];
        lStack_1d8 = param_1[0x1a];
        lStack_1e0 = param_1[0x19];
        lStack_1c8 = param_1[0x1c];
        lStack_1d0 = param_1[0x1b];
        lStack_1c0 = param_1[0x1d];
        lStack_228 = param_1[0x10];
        lStack_230 = param_1[0xf];
        lStack_218 = param_1[0x12];
        lStack_220 = param_1[0x11];
        lStack_208 = param_1[0x14];
        lStack_210 = param_1[0x13];
        lStack_1f8 = param_1[0x16];
        lStack_200 = param_1[0x15];
        lStack_2a8 = param_2[0x10];
        lStack_2b0 = param_2[0xf];
        lStack_298 = param_2[0x12];
        lStack_2a0 = param_2[0x11];
        lStack_288 = param_2[0x14];
        lStack_290 = param_2[0x13];
        lStack_278 = param_2[0x16];
        lStack_280 = param_2[0x15];
        lStack_268 = param_2[0x18];
        lStack_270 = param_2[0x17];
        lStack_258 = param_2[0x1a];
        lStack_260 = param_2[0x19];
        lStack_248 = param_2[0x1c];
        lStack_250 = param_2[0x1b];
        lStack_240 = param_2[0x1d];
        lStack_358 = param_1[0x18];
        lStack_360 = param_1[0x17];
        lStack_348 = param_1[0x1a];
        lStack_350 = param_1[0x19];
        lStack_338 = param_1[0x1c];
        lStack_340 = param_1[0x1b];
        uStack_330 = param_1[0x1d];
        lStack_398 = param_1[0x10];
        lStack_3a0 = param_1[0xf];
        lStack_388 = param_1[0x12];
        lStack_390 = param_1[0x11];
        lStack_378 = param_1[0x14];
        lStack_380 = param_1[0x13];
        lStack_368 = param_1[0x16];
        lStack_370 = param_1[0x15];
        lStack_410 = param_2[0x10];
        lStack_418 = param_2[0xf];
        lStack_400 = param_2[0x12];
        lStack_408 = param_2[0x11];
        lStack_3f0 = param_2[0x14];
        lStack_3f8 = param_2[0x13];
        lStack_3e0 = param_2[0x16];
        lStack_3e8 = param_2[0x15];
        lStack_3d0 = param_2[0x18];
        lStack_3d8 = param_2[0x17];
        lStack_3c0 = param_2[0x1a];
        lStack_3c8 = param_2[0x19];
        lStack_3b0 = param_2[0x1c];
        lStack_3b8 = param_2[0x1b];
        uStack_3a8 = param_2[0x1d];
        lStack_328 = lStack_418;
        lStack_320 = lStack_410;
        lStack_318 = lStack_408;
        lStack_310 = lStack_400;
        lStack_308 = lStack_3f8;
        lStack_300 = lStack_3f0;
        lStack_2f8 = lStack_3e8;
        lStack_2f0 = lStack_3e0;
        lStack_2e8 = lStack_3d8;
        lStack_2e0 = lStack_3d0;
        lStack_2d8 = lStack_3c8;
        lStack_2d0 = lStack_3c0;
        lStack_2c8 = lStack_3b8;
        lStack_2c0 = lStack_3b0;
        uStack_2b8 = uStack_3a8;
        if (uStack_330 >> 0x3c < 0xf) {
          if (uStack_3a8 >> 0x3c < 0xf) {
            lStack_4c8 = param_2[0x18];
            lStack_4d0 = param_2[0x17];
            lStack_4b8 = param_2[0x1a];
            lStack_4c0 = param_2[0x19];
            lStack_4a8 = param_2[0x1c];
            lStack_4b0 = param_2[0x1b];
            lStack_4a0 = param_2[0x1d];
            lStack_508 = param_2[0x10];
            lStack_510 = param_2[0xf];
            lStack_4f8 = param_2[0x12];
            lStack_500 = param_2[0x11];
            lStack_4e8 = param_2[0x14];
            lStack_4f0 = param_2[0x13];
            lStack_4d8 = param_2[0x16];
            lStack_4e0 = param_2[0x15];
            lStack_a8 = param_1[0x18];
            lStack_b0 = param_1[0x17];
            lStack_98 = param_1[0x1a];
            lStack_a0 = param_1[0x19];
            lStack_88 = param_1[0x1c];
            lStack_90 = param_1[0x1b];
            lStack_80 = param_1[0x1d];
            lStack_e8 = param_1[0x10];
            lStack_f0 = param_1[0xf];
            lStack_d8 = param_1[0x12];
            lStack_e0 = param_1[0x11];
            lStack_c8 = param_1[0x14];
            lStack_d0 = param_1[0x13];
            lStack_b8 = param_1[0x16];
            lStack_c0 = param_1[0x15];
            lStack_490 = lStack_510;
            lStack_488 = lStack_508;
            lStack_480 = lStack_500;
            lStack_478 = lStack_4f8;
            lStack_470 = lStack_4f0;
            lStack_468 = lStack_4e8;
            lStack_460 = lStack_4e0;
            lStack_458 = lStack_4d8;
            lStack_450 = lStack_4d0;
            lStack_448 = lStack_4c8;
            lStack_440 = lStack_4c0;
            lStack_438 = lStack_4b8;
            lStack_430 = lStack_4b0;
            lStack_428 = lStack_4a8;
            uStack_420 = lStack_4a0;
            FUN_1035186a0(&lStack_230,auStack_588,0x112f730f0,&UNK_10dbce2f8);
            FUN_1035186a0(&lStack_2b0,auStack_588,0x112f730f0,&UNK_10dbce2f8);
            plVar4 = &lStack_f0;
            FUN_1035183f4(plVar4,&lStack_490);
            func_0x00010351c038(&lStack_510,0x112f730f0,&UNK_10dbce2f8);
            func_0x00010351c038(&lStack_3a0,0x112f730f0,&UNK_10dbce2f8);
            if (((ulong)plVar4 & 1) != 0) goto LAB_103519078;
            goto LAB_103518df4;
          }
        }
        else if (0xe < uStack_3a8 >> 0x3c) {
          lStack_448 = param_1[0x18];
          lStack_450 = param_1[0x17];
          lStack_438 = param_1[0x1a];
          lStack_440 = param_1[0x19];
          lStack_428 = param_1[0x1c];
          lStack_430 = param_1[0x1b];
          uStack_420 = param_1[0x1d];
          lStack_488 = param_1[0x10];
          lStack_490 = param_1[0xf];
          lStack_478 = param_1[0x12];
          lStack_480 = param_1[0x11];
          lStack_468 = param_1[0x14];
          lStack_470 = param_1[0x13];
          lStack_458 = param_1[0x16];
          lStack_460 = param_1[0x15];
          FUN_1035186a0(&lStack_230,&lStack_f0,0x112f730f0,&UNK_10dbce2f8);
          FUN_1035186a0(&lStack_2b0,&lStack_f0,0x112f730f0,&UNK_10dbce2f8);
          func_0x00010351c038(&lStack_490,0x112f730f0,&UNK_10dbce2f8);
LAB_103519078:
          lVar9 = param_1[4];
          func_0x000100e25fcc(lVar9,param_1[5],param_2[4],param_2[5]);
          uVar1 = (uint)lVar9;
          goto LAB_103518df8;
        }
        lStack_490 = lStack_3a0;
        lStack_488 = lStack_398;
        lStack_480 = lStack_390;
        lStack_478 = lStack_388;
        lStack_470 = lStack_380;
        lStack_468 = lStack_378;
        lStack_460 = lStack_370;
        lStack_458 = lStack_368;
        lStack_450 = lStack_360;
        lStack_448 = lStack_358;
        lStack_440 = lStack_350;
        lStack_438 = lStack_348;
        lStack_430 = lStack_340;
        lStack_428 = lStack_338;
        uStack_420 = uStack_330;
        FUN_1035186a0(&lStack_230,&lStack_f0,0x112f730f0,&UNK_10dbce2f8);
        FUN_1035186a0(&lStack_2b0,&lStack_f0,0x112f730f0,&UNK_10dbce2f8);
        func_0x00010351c038(&lStack_490,0x112f75c78,&UNK_10dbd3e20);
      }
    }
  }
LAB_103518df4:
  uVar1 = 0;
LAB_103518df8:
  return uVar1 & 1;
}



/* Entry: 103519b9c; end: 103519c5b;  */

void FUN_103519b9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3ec8;
  func_0x000107c61520(&UNK_10dbd3ec8,&UNK_110660228);
  puRam0000000112f75c90 = puVar1;
  return;
}



/* Entry: 103519c5c; end: 103519c7f;  */

void FUN_103519c5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103519c80();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103519c80; end: 103519cbf;  */

void FUN_103519c80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3ea0;
  func_0x000107c61520(&UNK_10dbd3ea0,&UNK_110660228);
  puRam0000000112f75cc0 = puVar1;
  return;
}



/* Entry: 103519cc0; end: 103519cd7;  */

void FUN_103519cc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103519b9c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103502e14)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103519cd8; end: 103519d17;  */

void FUN_103519cd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3f08;
  func_0x000107c61520(&UNK_10dbd3f08,&UNK_110660228);
  puRam0000000112f75cc8 = puVar1;
  return;
}



/* Entry: 103519d18; end: 103519d3b;  */

void FUN_103519d18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103519d3c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103519d3c; end: 103519d7b;  */

void FUN_103519d3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3f78;
  func_0x000107c61520(&UNK_10dbd3f78,&UNK_1106602c8);
  puRam0000000112f75cd0 = puVar1;
  return;
}



/* Entry: 103519d7c; end: 103519d93;  */

void FUN_103519d7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103519bdc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103518800();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103519d94; end: 103519dd3;  */

void FUN_103519d94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd3fe0;
  func_0x000107c61520(&UNK_10dbd3fe0,&UNK_1106602c8);
  puRam0000000112f75cd8 = puVar1;
  return;
}



/* Entry: 103519dd4; end: 103519df7;  */

void FUN_103519dd4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103519df8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103519df8; end: 103519e37;  */

void FUN_103519df8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4050;
  func_0x000107c61520(&UNK_10dbd4050,&UNK_110660360);
  puRam0000000112f75ce0 = puVar1;
  return;
}



/* Entry: 103519e38; end: 103519e4b;  */

void FUN_103519e38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103519c1c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103519e7c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103519e4c; end: 103519e7b;  */

void FUN_103519e4c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103519e7c; end: 103519ebb;  */

void FUN_103519e7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd4008;
  func_0x000107c61520(&DAT_10dbd4008,&UNK_110660360);
  puRam0000000112f75ce8 = puVar1;
  return;
}



/* Entry: 103519ebc; end: 103519ebf;  */

void FUN_103519ebc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd40b8;
  func_0x000107c61520(&UNK_10dbd40b8,&UNK_110660360);
  puRam0000000112f75cf0 = puVar1;
  return;
}



/* Entry: 103519ec0; end: 103519eff;  */

void FUN_103519ec0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd40b8;
  func_0x000107c61520(&UNK_10dbd40b8,&UNK_110660360);
  puRam0000000112f75cf0 = puVar1;
  return;
}



/* Entry: 103519f00; end: 103519fd7;  */

/* WARNING: Possible PIC construction at 0x000103519f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103519f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103519f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103519fac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103519f20) */
/* WARNING: Removing unreachable block (ram,0x000103519f30) */
/* WARNING: Removing unreachable block (ram,0x000103519f38) */
/* WARNING: Removing unreachable block (ram,0x000103519f50) */
/* WARNING: Removing unreachable block (ram,0x000103519f60) */
/* WARNING: Removing unreachable block (ram,0x000103519f68) */
/* WARNING: Removing unreachable block (ram,0x000103519f80) */
/* WARNING: Removing unreachable block (ram,0x000103519f90) */
/* WARNING: Removing unreachable block (ram,0x000103519f98) */
/* WARNING: Removing unreachable block (ram,0x000103519fb0) */
/* WARNING: Removing unreachable block (ram,0x000103519fc8) */
/* WARNING: Removing unreachable block (ram,0x000103519fbc) */
/* WARNING: Removing unreachable block (ram,0x000103519fa8) */
/* WARNING: Removing unreachable block (ram,0x000103519f78) */
/* WARNING: Removing unreachable block (ram,0x000103519f48) */

void FUN_103519f00(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103519fd8; end: 10351a943;  */

undefined8 * FUN_103519fd8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  uVar3 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar4,uVar3);
  param_1[3] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar4 = param_2[6];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[6] = uVar4;
    param_1[7] = uVar2;
  }
  else {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    param_1[7] = param_2[7];
  }
  uVar2 = param_2[10];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar4 = param_2[9];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[9] = uVar4;
    param_1[10] = uVar2;
  }
  else {
    uVar4 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[10] = param_2[10];
  }
  uVar2 = param_2[0xd];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar4 = param_2[0xc];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0xc] = uVar4;
    param_1[0xd] = uVar2;
  }
  else {
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
    param_1[0xd] = param_2[0xd];
  }
  uVar2 = param_2[0x10];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar4 = param_2[0xf];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0xf] = uVar4;
    param_1[0x10] = uVar2;
  }
  else {
    uVar4 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar4;
    param_1[0x10] = param_2[0x10];
  }
  uVar2 = param_2[0x13];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    uVar4 = param_2[0x12];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0x12] = uVar4;
    param_1[0x13] = uVar2;
  }
  else {
    uVar4 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar4;
    param_1[0x13] = param_2[0x13];
  }
  uVar2 = param_2[0x16];
  if (uVar2 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar4 = param_2[0x15];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0x15] = uVar4;
    param_1[0x16] = uVar2;
  }
  else {
    uVar4 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar4;
    param_1[0x16] = param_2[0x16];
  }
  cVar1 = *(char *)(param_2 + 0x17);
  if (cVar1 == '\x02') {
    uVar4 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar4;
    param_1[0x19] = param_2[0x19];
  }
  else {
    *(char *)(param_1 + 0x17) = cVar1;
    uVar4 = param_2[0x18];
    uVar3 = param_2[0x19];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x18] = uVar4;
    param_1[0x19] = uVar3;
  }
  return param_1;
}



/* Entry: 10351a944; end: 10351aa0f;  */

int FUN_10351a944(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x34] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10351aa10; end: 10351aadb;  */

/* WARNING: Possible PIC construction at 0x00010351aa2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010351aa5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010351aa30) */
/* WARNING: Removing unreachable block (ram,0x00010351aa40) */
/* WARNING: Removing unreachable block (ram,0x00010351aa48) */
/* WARNING: Removing unreachable block (ram,0x00010351aa60) */
/* WARNING: Removing unreachable block (ram,0x00010351aa70) */
/* WARNING: Removing unreachable block (ram,0x00010351aa78) */
/* WARNING: Removing unreachable block (ram,0x00010351aa98) */
/* WARNING: Removing unreachable block (ram,0x00010351aaa0) */
/* WARNING: Removing unreachable block (ram,0x00010351aac4) */
/* WARNING: Removing unreachable block (ram,0x00010351aa88) */
/* WARNING: Removing unreachable block (ram,0x00010351aa58) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10351aa10(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10351aadc; end: 10351b3b3;  */

/* WARNING: Possible PIC construction at 0x00010351ab4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101618360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010351ab98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101618364) */
/* WARNING: Removing unreachable block (ram,0x000100cb6b04) */
/* WARNING: Removing unreachable block (ram,0x000100cb6b14) */
/* WARNING: Removing unreachable block (ram,0x000100cb6b10) */
/* WARNING: Removing unreachable block (ram,0x00010351ab50) */
/* WARNING: Removing unreachable block (ram,0x000101618334) */
/* WARNING: Removing unreachable block (ram,0x000101618344) */
/* WARNING: Removing unreachable block (ram,0x000101618340) */
/* WARNING: Removing unreachable block (ram,0x00010351ab9c) */

void FUN_10351aadc(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_4 >> 0x3c) & 3;
  if ((uVar1 < 2) && (uVar1 == 0)) {
    func_0x000107c6142c();
    func_0x000107c6142c(param_2);
    param_1 = param_3;
    param_2 = param_4;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    func_0x000107c61574(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10351b3b4; end: 10351b3df;  */

undefined8 FUN_10351b3b4(undefined8 param_1)

{
  FUN_10351bc6c(param_1,&UNK_1106603f8);
  return param_1;
}



/* Entry: 10351b3e0; end: 10351b6a3;  */

undefined8 * FUN_10351b3e0(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar8 = param_1[4];
  uVar9 = param_1[5];
  uVar11 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  func_0x00010006c090(uVar8,uVar9);
  if ((ulong)param_1[8] >> 0x3c < 0xf) {
    uVar10 = param_2[8];
    if (0xe < uVar10 >> 0x3c) {
      func_0x0001015d4290(param_1 + 6);
      goto LAB_10351b458;
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    uVar8 = param_1[7];
    param_1[7] = param_2[7];
    param_1[8] = uVar10;
    func_0x00010006c090(uVar8);
  }
  else {
LAB_10351b458:
    uVar8 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar8;
    param_1[8] = param_2[8];
  }
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    uVar10 = param_2[0xb];
    if (0xe < uVar10 >> 0x3c) {
      func_0x0001015d4290(param_1 + 9);
      goto LAB_10351b4ac;
    }
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    uVar8 = param_1[10];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar10;
    func_0x00010006c090(uVar8);
  }
  else {
LAB_10351b4ac:
    uVar8 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar8;
    param_1[0xb] = param_2[0xb];
  }
  if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
    uVar10 = param_2[0xe];
    if (0xe < uVar10 >> 0x3c) {
      func_0x0001015d4290(param_1 + 0xc);
      goto LAB_10351b500;
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar8 = param_1[0xd];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar10;
    func_0x00010006c090(uVar8);
  }
  else {
LAB_10351b500:
    uVar8 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar8;
    param_1[0xe] = param_2[0xe];
  }
  if (0xe < (ulong)param_1[0x1d] >> 0x3c) {
LAB_10351b554:
    uVar8 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar8;
    uVar8 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar8;
    uVar8 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar8;
    param_1[0x1d] = param_2[0x1d];
    uVar8 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar8;
    uVar8 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar8;
    uVar8 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar8;
    uVar8 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar8;
    return param_1;
  }
  uVar10 = param_2[0x1d];
  if (0xe < uVar10 >> 0x3c) {
    func_0x0001034aa220(param_1 + 0xf);
    goto LAB_10351b554;
  }
  if (*(char *)(param_1 + 0x1b) == '\0') {
    if (*(char *)(param_2 + 0x1b) == '\0') {
      uVar8 = param_1[0xf];
      uVar3 = param_1[0x10];
      uVar9 = param_1[0x11];
      uVar4 = param_1[0x12];
      uVar11 = param_1[0x13];
      uVar5 = param_1[0x14];
      uVar1 = param_1[0x15];
      uVar6 = param_1[0x16];
      uVar13 = param_1[0x18];
      uVar12 = param_1[0x17];
      uVar2 = param_1[0x19];
      uVar7 = param_1[0x1a];
      uVar14 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar14;
      uVar14 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar14;
      uVar14 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar14;
      uVar14 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar14;
      uVar14 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar14;
      uVar14 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar14;
      FUN_10351aadc(uVar8,uVar3,uVar9,uVar4,uVar11,uVar5,uVar1,uVar6,uVar12,uVar13,uVar2,uVar7);
      goto LAB_10351b624;
    }
    FUN_10351b3b4(param_1 + 0xf);
  }
  else if (*(char *)(param_2 + 0x1b) == '\0') {
    uVar8 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar8;
    uVar8 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar8;
    uVar8 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar8;
    uVar8 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar8;
    uVar8 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar8;
    uVar8 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar8;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    goto LAB_10351b624;
  }
  uVar8 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar8;
  uVar8 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar8;
  uVar8 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar8;
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  uVar8 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar8;
  uVar8 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar8;
  uVar8 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar8;
LAB_10351b624:
  uVar8 = param_1[0x1c];
  uVar9 = param_1[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar10;
  func_0x00010006c090(uVar8,uVar9);
  return param_1;
}



/* Entry: 10351b6a4; end: 10351b793;  */

int FUN_10351b6a4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x3c] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10351b794; end: 10351b7e7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10351b794(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_10351aadc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb]);
  }
  uVar1 = param_1[0xd];
  uVar2 = (uint)((ulong)param_1[0xe] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[0xe] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10351b7e8; end: 10351bac3;  */

undefined8 * FUN_10351b7e8(undefined8 *param_1,undefined8 *param_2)

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
  
  if (*(char *)(param_2 + 0xc) == '\0') {
    uVar10 = *param_2;
    uVar4 = param_2[1];
    uVar11 = param_2[2];
    uVar5 = param_2[3];
    uVar12 = param_2[4];
    uVar6 = param_2[5];
    uVar1 = param_2[6];
    uVar7 = param_2[7];
    uVar2 = param_2[8];
    uVar8 = param_2[9];
    uVar3 = param_2[10];
    uVar9 = param_2[0xb];
    FUN_10351871c(uVar10,uVar4,uVar11,uVar5,uVar12,uVar6,uVar1,uVar7,uVar2,uVar8,uVar3,uVar9);
    *param_1 = uVar10;
    param_1[1] = uVar4;
    param_1[2] = uVar11;
    param_1[3] = uVar5;
    param_1[4] = uVar12;
    param_1[5] = uVar6;
    param_1[6] = uVar1;
    param_1[7] = uVar7;
    param_1[8] = uVar2;
    param_1[9] = uVar8;
    param_1[10] = uVar3;
    param_1[0xb] = uVar9;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else {
    uVar10 = param_2[8];
    uVar12 = param_2[0xb];
    uVar11 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar10;
    param_1[0xb] = uVar12;
    param_1[10] = uVar11;
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    uVar12 = param_2[4];
    uVar11 = param_2[7];
    uVar10 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar12;
    param_1[7] = uVar11;
    param_1[6] = uVar10;
  }
  uVar10 = param_2[0xd];
  uVar11 = param_2[0xe];
  func_0x00010006c00c(uVar10,uVar11);
  param_1[0xd] = uVar10;
  param_1[0xe] = uVar11;
  return param_1;
}



/* Entry: 10351bac4; end: 10351bb9b;  */

undefined8 * FUN_10351bac4(undefined8 *param_1,undefined8 *param_2)

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
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (*(char *)(param_2 + 0xc) == '\0') {
      uVar8 = *param_1;
      uVar3 = param_1[1];
      uVar11 = param_1[2];
      uVar4 = param_1[3];
      uVar9 = param_1[4];
      uVar5 = param_1[5];
      uVar1 = param_1[6];
      uVar6 = param_1[7];
      uVar12 = param_1[9];
      uVar10 = param_1[8];
      uVar2 = param_1[10];
      uVar7 = param_1[0xb];
      uVar13 = *param_2;
      uVar15 = param_2[3];
      uVar14 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar13;
      param_1[3] = uVar15;
      param_1[2] = uVar14;
      uVar13 = param_2[4];
      uVar15 = param_2[7];
      uVar14 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar13;
      param_1[7] = uVar15;
      param_1[6] = uVar14;
      uVar13 = param_2[8];
      uVar15 = param_2[0xb];
      uVar14 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar13;
      param_1[0xb] = uVar15;
      param_1[10] = uVar14;
      FUN_10351aadc(uVar8,uVar3,uVar11,uVar4,uVar9,uVar5,uVar1,uVar6,uVar10,uVar12,uVar2,uVar7);
      goto LAB_10351bb38;
    }
    FUN_10351b3b4(param_1);
  }
  else if (*(char *)(param_2 + 0xc) == '\0') {
    uVar8 = param_2[4];
    uVar9 = param_2[7];
    uVar11 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[7] = uVar9;
    param_1[6] = uVar11;
    uVar8 = param_2[8];
    uVar9 = param_2[0xb];
    uVar11 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar8;
    param_1[0xb] = uVar9;
    param_1[10] = uVar11;
    uVar8 = *param_2;
    uVar9 = param_2[3];
    uVar11 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    param_1[3] = uVar9;
    param_1[2] = uVar11;
    *(undefined1 *)(param_1 + 0xc) = 0;
    goto LAB_10351bb38;
  }
  uVar8 = param_2[8];
  uVar9 = param_2[0xb];
  uVar11 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar8;
  param_1[0xb] = uVar9;
  param_1[10] = uVar11;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar8 = *param_2;
  uVar9 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar9;
  param_1[2] = uVar11;
  uVar9 = param_2[4];
  uVar11 = param_2[7];
  uVar8 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[7] = uVar11;
  param_1[6] = uVar8;
LAB_10351bb38:
  uVar8 = param_1[0xd];
  uVar11 = param_1[0xe];
  uVar9 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar9;
  func_0x00010006c090(uVar8,uVar11);
  return param_1;
}



/* Entry: 10351bb9c; end: 10351bc6b;  */

int FUN_10351bb9c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10351bc6c; end: 10351bcab;  */

void FUN_10351bc6c(undefined8 *param_1)

{
  FUN_10351aadc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb]);
  return;
}



/* Entry: 10351bcac; end: 10351be3b;  */

undefined8 * FUN_10351bcac(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  uVar4 = param_2[6];
  uVar10 = param_2[7];
  uVar5 = param_2[8];
  uVar11 = param_2[9];
  uVar6 = param_2[10];
  uVar12 = param_2[0xb];
  FUN_10351871c(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,uVar4,uVar10,uVar5,uVar11,uVar6,uVar12);
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  param_1[6] = uVar4;
  param_1[7] = uVar10;
  param_1[8] = uVar5;
  param_1[9] = uVar11;
  param_1[10] = uVar6;
  param_1[0xb] = uVar12;
  return param_1;
}



/* Entry: 10351be3c; end: 10351bea7;  */

undefined8 * FUN_10351be3c(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_1[10];
  uVar8 = param_1[0xb];
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  uVar13 = param_2[8];
  uVar15 = param_2[0xb];
  uVar14 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar13;
  param_1[0xb] = uVar15;
  param_1[10] = uVar14;
  FUN_10351aadc(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar4,uVar8);
  return param_1;
}



/* Entry: 10351bea8; end: 10351bf4b;  */

int FUN_10351bea8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10351bf4c; end: 10351c00b;  */

void FUN_10351bf4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f75d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd4024;
  func_0x000107c61520(&DAT_10dbd4024,&UNK_110660360);
  puRam0000000112f75d00 = puVar1;
  return;
}



/* Entry: 10351c00c; end: 10351c077;  */

void FUN_10351c00c(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10351c078; end: 10351c097;  */

long FUN_10351c078(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10351c098; end: 10351c0c7;  */

void FUN_10351c098(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10351ebb4();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10351c0c8; end: 10351c0cf;  */

undefined8 FUN_10351c0c8(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 10351c0d0; end: 10351c143;  */

void FUN_10351c0d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f75d98;
  func_0x0001000285a8(0x112f75d98,&UNK_10dbd4330);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10351c144; end: 10351c14f;  */

void FUN_10351c144(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10351c150; end: 10351c1fb;  */

void FUN_10351c150(void)

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



/* Entry: 10351c1fc; end: 10351c23f;  */

bool FUN_10351c1fc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10351c240; end: 10351c2cf;  */

uint FUN_10351c240(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10351ec64(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 10351c2d0; end: 10351c317;  */

void FUN_10351c2d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd4840,0x34,2);
  uRam0000000113807a78 = uStack_38;
  uRam0000000113807a70 = uStack_40;
  uRam0000000113807a88 = uStack_28;
  uRam0000000113807a80 = uStack_30;
  uRam0000000113807a98 = uStack_18;
  uRam0000000113807a90 = uStack_20;
  return;
}



/* Entry: 10351c318; end: 10351c3b7;  */

/* WARNING: Possible PIC construction at 0x00010351c364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010351c374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010351c368) */
/* WARNING: Removing unreachable block (ram,0x00010351c378) */

void FUN_10351c318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75da8 != -1) {
    func_0x000107c61568(0x112f75da8,FUN_10351c2d0);
  }
  uVar5 = uRam0000000113807a98;
  uVar4 = uRam0000000113807a90;
  uVar3 = uRam0000000113807a88;
  uVar2 = uRam0000000113807a80;
  uVar1 = uRam0000000113807a78;
  *param_1 = uRam0000000113807a70;
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



/* Entry: 10351c3b8; end: 10351c3ff;  */

void FUN_10351c3b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd47d0,100,2);
  uRam0000000113807aa8 = uStack_38;
  uRam0000000113807aa0 = uStack_40;
  uRam0000000113807ab8 = uStack_28;
  uRam0000000113807ab0 = uStack_30;
  uRam0000000113807ac8 = uStack_18;
  uRam0000000113807ac0 = uStack_20;
  return;
}



/* Entry: 10351c400; end: 10351c53b;  */

void FUN_10351c400(undefined8 param_1,long param_2,long param_3)

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
          func_0x000103510fbc();
          goto LAB_10351c488;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          FUN_10351ef20();
          goto LAB_10351c488;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x00010351ef60();
        }
        else {
          if (lVar1 != 4) goto LAB_10351c49c;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101618278();
        }
LAB_10351c488:
        (*pcVar4)();
      }
LAB_10351c49c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10351c53c; end: 10351c643;  */

void FUN_10351c53c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  
  plVar1 = unaff_x20;
  FUN_10351c644();
  if (unaff_x21 == 0) {
    plVar2 = (long *)*unaff_x20;
    if (plVar2[2] != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      FUN_10351ef20();
      (*pcVar4)(plVar2,2,&UNK_110660788,plVar1,param_2,param_3);
      plVar1 = plVar2;
    }
    lVar3 = unaff_x20[1];
    if (*(long *)(lVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x00010351ef60();
      (*pcVar4)(lVar3,3,&UNK_110660c00,plVar1,param_2,param_3);
    }
    FUN_10351c6c4();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 10351c644; end: 10351c6c3;  */

void FUN_10351c644(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x30);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103510fbc();
    (*pcVar1)(&uStack_60,1,&UNK_11066abb0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10351c6c4; end: 10351c753;  */

void FUN_10351c6c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = *(ulong *)(param_1 + 0x40);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_48 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101618278();
    (*pcVar1)(&uStack_68,4,&UNK_110660a18,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10351c754; end: 10351c7ab;  */

uint FUN_10351c754(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_188 [40];
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar7 = param_1[5];
  uVar6 = param_1[4];
  uVar3 = param_1[6];
  uVar8 = param_2[5];
  uVar5 = param_2[4];
  lVar4 = param_2[6];
  uStack_100 = uVar5;
  uStack_f8 = uVar8;
  lStack_f0 = lVar4;
  uStack_e0 = uVar6;
  uStack_d8 = uVar7;
  uStack_d0 = uVar3;
  if (uVar3 == 0) {
    if (lVar4 != 0) goto LAB_10351f8d4;
    FUN_10351ebc0(&uStack_e0,&uStack_98,0x112f759a0,&UNK_10dbd33f0);
    FUN_10351ebc0(&uStack_100,&uStack_98,0x112f759a0,&UNK_10dbd33f0);
    FUN_103521864(uVar6,uVar7,0);
LAB_10351f978:
    uVar3 = *param_1;
    FUN_10351e9a8(uVar3,*param_2);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[1];
      FUN_10351ea84(uVar3,param_2[1]);
      if ((uVar3 & 1) != 0) {
        uVar7 = param_1[8];
        uVar6 = param_1[7];
        uVar12 = param_1[10];
        uVar10 = param_1[9];
        uVar3 = param_1[0xb];
        uVar9 = param_2[8];
        uVar8 = param_2[7];
        uVar13 = param_2[10];
        uVar11 = param_2[9];
        uVar5 = param_2[0xb];
        uStack_160 = uVar8;
        uStack_158 = uVar9;
        uStack_150 = uVar11;
        uStack_148 = uVar13;
        uStack_140 = uVar5;
        uStack_130 = uVar6;
        uStack_128 = uVar7;
        uStack_120 = uVar10;
        uStack_118 = uVar12;
        uStack_110 = uVar3;
        if (uVar7 >> 0x3c < 0xf) {
          if (uVar9 >> 0x3c < 0xf) {
            uStack_c0 = uVar6;
            uStack_b8 = uVar7;
            uStack_b0 = uVar10;
            uStack_a8 = uVar12;
            uStack_a0 = uVar3;
            uStack_98 = uVar8;
            uStack_90 = uVar9;
            uStack_88 = uVar11;
            uStack_80 = uVar13;
            uStack_78 = uVar5;
            FUN_10351ebc0(&uStack_130,auStack_188,0x112f75da0,&UNK_10dbd4340);
            FUN_10351ebc0(&uStack_160,auStack_188,0x112f75da0,&UNK_10dbd4340);
            puVar2 = &uStack_c0;
            FUN_103521bdc(puVar2,&uStack_98);
            func_0x000101618334(uVar8,uVar9,uVar11,uVar13,uVar5);
            func_0x000101618334(uVar6,uVar7,uVar10,uVar12,uVar3);
            if (((ulong)puVar2 & 1) != 0) goto LAB_10351fb84;
            goto LAB_10351fac0;
          }
        }
        else if (0xe < uVar9 >> 0x3c) {
          FUN_10351ebc0(&uStack_130,&uStack_98,0x112f75da0,&UNK_10dbd4340);
          FUN_10351ebc0(&uStack_160,&uStack_98,0x112f75da0,&UNK_10dbd4340);
          func_0x000101618334(uVar6,uVar7,uVar10,uVar12,uVar3);
LAB_10351fb84:
          uVar3 = param_1[2];
          func_0x000100e25fcc(uVar3,param_1[3],param_2[2],param_2[3]);
          uVar1 = (uint)uVar3;
          goto LAB_10351fac4;
        }
        FUN_10351ebc0(&uStack_130,&uStack_98,0x112f75da0,&UNK_10dbd4340);
        FUN_10351ebc0(&uStack_160,&uStack_98,0x112f75da0,&UNK_10dbd4340);
        func_0x000101618334(uVar6,uVar7,uVar10,uVar12,uVar3);
        func_0x000101618334(uVar8,uVar9,uVar11,uVar13,uVar5);
      }
    }
  }
  else {
    if (lVar4 != 0) {
      FUN_10351ebc0(&uStack_e0,&uStack_98,0x112f759a0,&UNK_10dbd33f0);
      FUN_10351ebc0(&uStack_100,&uStack_98,0x112f759a0,&UNK_10dbd33f0);
      uVar9 = uVar6;
      FUN_1035d8f6c(uVar6,uVar7,uVar3,uVar5,uVar8,lVar4);
      FUN_103521864(uVar5,uVar8,lVar4);
      FUN_103521864(uVar6,uVar7,uVar3);
      if ((uVar9 & 1) != 0) goto LAB_10351f978;
      goto LAB_10351fac0;
    }
LAB_10351f8d4:
    FUN_10351ebc0(&uStack_e0,&uStack_98,0x112f759a0,&UNK_10dbd33f0);
    FUN_10351ebc0(&uStack_100,&uStack_98,0x112f759a0,&UNK_10dbd33f0);
    FUN_103521864(uVar6,uVar7,uVar3);
    FUN_103521864(uVar5,uVar8,lVar4);
  }
LAB_10351fac0:
  uVar1 = 0;
LAB_10351fac4:
  return uVar1 & 1;
}



/* Entry: 10351c7ac; end: 10351c7db;  */

undefined1  [16] FUN_10351c7ac(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10351c7dc; end: 10351c80f;  */

void FUN_10351c7dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10351c810; end: 10351c823;  */

undefined1  [16] FUN_10351c810(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10351c820;
  return auVar1;
}



/* Entry: 10351c824; end: 10351c837;  */

void FUN_10351c824(void)

{
  FUN_10351c400();
  return;
}



/* Entry: 10351c838; end: 10351c877;  */

void FUN_10351c838(void)

{
  FUN_10351c53c();
  return;
}



/* Entry: 10351c878; end: 10351c87b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10351c878(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10351c87c; end: 10351c8b3;  */

uint FUN_10351c87c(long param_1,long param_2)

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
  func_0x0001035217cc();
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



/* Entry: 10351c8b4; end: 10351c90b;  */

uint FUN_10351c8b4(undefined8 *param_1)

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
  func_0x00010351f7f4(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10351c90c; end: 10351c9ab;  */

/* WARNING: Possible PIC construction at 0x00010351c958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010351c968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010351c95c) */
/* WARNING: Removing unreachable block (ram,0x00010351c96c) */

void FUN_10351c90c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75db0 != -1) {
    func_0x000107c61568(0x112f75db0,FUN_10351c3b8);
  }
  uVar5 = uRam0000000113807ac8;
  uVar4 = uRam0000000113807ac0;
  uVar3 = uRam0000000113807ab8;
  uVar2 = uRam0000000113807ab0;
  uVar1 = uRam0000000113807aa8;
  *param_1 = uRam0000000113807aa0;
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



/* Entry: 10351c9ac; end: 10351c9e7;  */

void FUN_10351c9ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f75e40;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f75e40,&UNK_10dbd4740);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10351c9e8; end: 10351cb03;  */

void FUN_10351c9e8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10351cb04; end: 10351cba3;  */

uint FUN_10351cb04(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010351f7f4(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10351cba4; end: 10351cd7f;  */

/* WARNING: Removing unreachable block (ram,0x00010351ccd0) */
/* WARNING: Removing unreachable block (ram,0x00010351cd44) */
/* WARNING: Removing unreachable block (ram,0x00010351ccfc) */
/* WARNING: Removing unreachable block (ram,0x00010351cd7c) */

void FUN_10351cba4(undefined8 param_1,long param_2,long param_3)

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
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x000101568c04();
          }
          else {
            if (lVar1 != 2) goto LAB_10351cc44;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015d5420();
          }
        }
        else {
          if (lVar1 != 3) {
            if (lVar1 == 4) {
              FUN_10351cd80();
            }
            goto LAB_10351cc44;
          }
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000101568cc4();
        }
LAB_10351cc30:
        (*pcVar4)();
      }
      else if (lVar1 < 7) {
        if (lVar1 == 5) {
          FUN_10351d0c0();
        }
        else if (lVar1 == 6) {
          FUN_10351d404();
        }
      }
      else if (lVar1 == 7) {
        FUN_10351d9c8();
      }
      else if (lVar1 == 8) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x00010351fbd4();
        goto LAB_10351cc30;
      }
LAB_10351cc44:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10351cd80; end: 10351d0bf;  */

/* WARNING: Removing unreachable block (ram,0x00010351cfc0) */

void FUN_10351cd80(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
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
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
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
  undefined1 uStack_2f0;
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
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
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
  undefined1 uStack_140;
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
  undefined1 uStack_70;
  
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = *(undefined8 *)(param_1 + 0xb8);
  uStack_160 = *(undefined8 *)(param_1 + 0xb0);
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x78);
  uStack_d0 = *(undefined8 *)(param_1 + 0x70);
  uStack_188 = *(undefined8 *)(param_1 + 0x88);
  uStack_190 = *(undefined8 *)(param_1 + 0x80);
  uStack_b8 = *(undefined8 *)(param_1 + 0x88);
  uStack_c0 = *(undefined8 *)(param_1 + 0x80);
  uStack_178 = *(undefined8 *)(param_1 + 0x98);
  uStack_180 = *(undefined8 *)(param_1 + 0x90);
  uStack_a8 = *(undefined8 *)(param_1 + 0x98);
  uStack_b0 = *(undefined8 *)(param_1 + 0x90);
  uStack_168 = *(undefined8 *)(param_1 + 0xa8);
  uStack_170 = *(undefined8 *)(param_1 + 0xa0);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x18);
  uStack_200 = *(undefined8 *)(param_1 + 0x10);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_128 = *(undefined8 *)(param_1 + 0x18);
  uStack_130 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_210 = 0;
  uStack_218 = 0;
  lStack_208 = 0;
  uStack_140 = *(undefined1 *)(param_1 + 0xd0);
  uStack_70 = *(undefined1 *)(param_1 + 0xd0);
  puVar2 = &uStack_200;
  FUN_10351ec08();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_328 = uStack_a8;
    uStack_330 = uStack_b0;
    uStack_318 = uStack_98;
    uStack_320 = uStack_a0;
    uStack_308 = uStack_88;
    uStack_310 = uStack_90;
    uStack_2f8 = uStack_78;
    uStack_300 = uStack_80;
    uStack_368 = uStack_e8;
    uStack_370 = uStack_f0;
    uStack_358 = uStack_d8;
    uStack_360 = uStack_e0;
    uStack_348 = uStack_c8;
    uStack_350 = uStack_d0;
    uStack_338 = uStack_b8;
    uStack_340 = uStack_c0;
    uStack_3a8 = uStack_128;
    uStack_3b0 = uStack_130;
    uStack_398 = uStack_118;
    lStack_3a0 = uStack_120;
    uStack_388 = uStack_108;
    uStack_390 = uStack_110;
    uStack_378 = uStack_f8;
    uStack_380 = uStack_100;
    puVar2 = &uStack_130;
    func_0x00010351ec24();
    if ((int)puVar2 == 0) {
      puVar2 = &uStack_3b0;
      func_0x000100d55140();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar3 = puVar2[2];
      uStack_2b8 = uStack_1d8;
      uStack_2c0 = uStack_1e0;
      uStack_2a8 = uStack_1c8;
      uStack_2b0 = uStack_1d0;
      uStack_278 = uStack_198;
      uStack_280 = uStack_1a0;
      uStack_268 = uStack_188;
      uStack_270 = uStack_190;
      uStack_298 = uStack_1b8;
      uStack_2a0 = uStack_1c0;
      uStack_288 = uStack_1a8;
      uStack_290 = uStack_1b0;
      uStack_220 = uStack_140;
      uStack_238 = uStack_158;
      uStack_240 = uStack_160;
      uStack_228 = uStack_148;
      uStack_230 = uStack_150;
      uStack_258 = uStack_178;
      uStack_260 = uStack_180;
      uStack_248 = uStack_168;
      uStack_250 = uStack_170;
      uStack_2d8 = uStack_1f8;
      uStack_2e0 = uStack_200;
      uStack_2c8 = uStack_1e8;
      uStack_2d0 = uStack_1f0;
      FUN_10351ec30(&uStack_2e0,&uStack_470);
      puVar2 = (undefined8 *)0x0;
      FUN_103521864(0,0,0);
      uStack_218 = uVar5;
      uStack_210 = uVar6;
      lStack_208 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000103502854();
  (*pcVar4)(&uStack_218,&UNK_11066a9c0,puVar2,param_3,param_4);
  lVar3 = lStack_208;
  uVar6 = uStack_210;
  uVar5 = uStack_218;
  if (unaff_x21 == 0) {
    if (lStack_208 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
        (*pcVar4)(param_3,param_4);
      }
      FUN_103521864(uStack_218,uStack_210,lStack_208);
      uStack_470 = uVar5;
      uStack_468 = uVar6;
      lStack_460 = lVar3;
      func_0x0001034a6794(&uStack_470);
      uStack_328 = uStack_3e8;
      uStack_330 = uStack_3f0;
      uStack_318 = uStack_3d8;
      uStack_320 = uStack_3e0;
      uStack_308 = uStack_3c8;
      uStack_310 = uStack_3d0;
      uStack_2f8 = uStack_3b8;
      uStack_300 = uStack_3c0;
      uStack_368 = uStack_428;
      uStack_370 = uStack_430;
      uStack_358 = uStack_418;
      uStack_360 = uStack_420;
      uStack_348 = uStack_408;
      uStack_350 = uStack_410;
      uStack_338 = uStack_3f8;
      uStack_340 = uStack_400;
      uStack_3a8 = uStack_468;
      uStack_3b0 = uStack_470;
      uStack_398 = uStack_458;
      lStack_3a0 = lStack_460;
      uStack_388 = uStack_448;
      uStack_390 = uStack_450;
      uStack_378 = uStack_438;
      uStack_380 = uStack_440;
      func_0x0001034a6768(&uStack_3b0);
      uStack_238 = *(undefined8 *)(param_1 + 0xb8);
      uStack_240 = *(undefined8 *)(param_1 + 0xb0);
      uStack_228 = *(undefined8 *)(param_1 + 200);
      uStack_230 = *(undefined8 *)(param_1 + 0xc0);
      uStack_220 = *(undefined1 *)(param_1 + 0xd0);
      uStack_278 = *(undefined8 *)(param_1 + 0x78);
      uStack_280 = *(undefined8 *)(param_1 + 0x70);
      uStack_268 = *(undefined8 *)(param_1 + 0x88);
      uStack_270 = *(undefined8 *)(param_1 + 0x80);
      uStack_258 = *(undefined8 *)(param_1 + 0x98);
      uStack_260 = *(undefined8 *)(param_1 + 0x90);
      uStack_248 = *(undefined8 *)(param_1 + 0xa8);
      uStack_250 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2b8 = *(undefined8 *)(param_1 + 0x38);
      uStack_2c0 = *(undefined8 *)(param_1 + 0x30);
      uStack_2a8 = *(undefined8 *)(param_1 + 0x48);
      uStack_2b0 = *(undefined8 *)(param_1 + 0x40);
      uStack_298 = *(undefined8 *)(param_1 + 0x58);
      uStack_2a0 = *(undefined8 *)(param_1 + 0x50);
      uStack_288 = *(undefined8 *)(param_1 + 0x68);
      uStack_290 = *(undefined8 *)(param_1 + 0x60);
      uStack_2d8 = *(undefined8 *)(param_1 + 0x18);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x10);
      uStack_2c8 = *(undefined8 *)(param_1 + 0x28);
      uStack_2d0 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0xb8) = uStack_308;
      *(undefined8 *)(param_1 + 0xb0) = uStack_310;
      *(undefined8 *)(param_1 + 200) = uStack_2f8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_300;
      *(undefined1 *)(param_1 + 0xd0) = uStack_2f0;
      *(undefined8 *)(param_1 + 0x78) = uStack_348;
      *(undefined8 *)(param_1 + 0x70) = uStack_350;
      *(undefined8 *)(param_1 + 0x88) = uStack_338;
      *(undefined8 *)(param_1 + 0x80) = uStack_340;
      *(undefined8 *)(param_1 + 0x98) = uStack_328;
      *(undefined8 *)(param_1 + 0x90) = uStack_330;
      *(undefined8 *)(param_1 + 0xa8) = uStack_318;
      *(undefined8 *)(param_1 + 0xa0) = uStack_320;
      *(undefined8 *)(param_1 + 0x38) = uStack_388;
      *(undefined8 *)(param_1 + 0x30) = uStack_390;
      *(undefined8 *)(param_1 + 0x48) = uStack_378;
      *(undefined8 *)(param_1 + 0x40) = uStack_380;
      *(undefined8 *)(param_1 + 0x58) = uStack_368;
      *(undefined8 *)(param_1 + 0x50) = uStack_370;
      *(undefined8 *)(param_1 + 0x68) = uStack_358;
      *(undefined8 *)(param_1 + 0x60) = uStack_360;
      *(undefined8 *)(param_1 + 0x18) = uStack_3a8;
      *(undefined8 *)(param_1 + 0x10) = uStack_3b0;
      *(undefined8 *)(param_1 + 0x28) = uStack_398;
      *(long *)(param_1 + 0x20) = lStack_3a0;
      FUN_10352180c(&uStack_2e0,0x112f730d0,&UNK_10dbce2e0);
      return;
    }
    lVar3 = 0;
  }
  FUN_103521864(uStack_218,uStack_210,lVar3);
  return;
}



/* Entry: 10351d0c0; end: 10351d403;  */

/* WARNING: Removing unreachable block (ram,0x00010351d304) */

void FUN_10351d0c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
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
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
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
  undefined1 uStack_2f0;
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
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
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
  undefined1 uStack_140;
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
  undefined1 uStack_70;
  
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = *(undefined8 *)(param_1 + 0xb8);
  uStack_160 = *(undefined8 *)(param_1 + 0xb0);
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x78);
  uStack_d0 = *(undefined8 *)(param_1 + 0x70);
  uStack_188 = *(undefined8 *)(param_1 + 0x88);
  uStack_190 = *(undefined8 *)(param_1 + 0x80);
  uStack_b8 = *(undefined8 *)(param_1 + 0x88);
  uStack_c0 = *(undefined8 *)(param_1 + 0x80);
  uStack_178 = *(undefined8 *)(param_1 + 0x98);
  uStack_180 = *(undefined8 *)(param_1 + 0x90);
  uStack_a8 = *(undefined8 *)(param_1 + 0x98);
  uStack_b0 = *(undefined8 *)(param_1 + 0x90);
  uStack_168 = *(undefined8 *)(param_1 + 0xa8);
  uStack_170 = *(undefined8 *)(param_1 + 0xa0);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x18);
  uStack_200 = *(undefined8 *)(param_1 + 0x10);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_128 = *(undefined8 *)(param_1 + 0x18);
  uStack_130 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_210 = 0;
  uStack_218 = 0;
  lStack_208 = 0;
  uStack_140 = *(undefined1 *)(param_1 + 0xd0);
  uStack_70 = *(undefined1 *)(param_1 + 0xd0);
  puVar2 = &uStack_200;
  FUN_10351ec08();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_328 = uStack_a8;
    uStack_330 = uStack_b0;
    uStack_318 = uStack_98;
    uStack_320 = uStack_a0;
    uStack_308 = uStack_88;
    uStack_310 = uStack_90;
    uStack_2f8 = uStack_78;
    uStack_300 = uStack_80;
    uStack_368 = uStack_e8;
    uStack_370 = uStack_f0;
    uStack_358 = uStack_d8;
    uStack_360 = uStack_e0;
    uStack_348 = uStack_c8;
    uStack_350 = uStack_d0;
    uStack_338 = uStack_b8;
    uStack_340 = uStack_c0;
    uStack_3a8 = uStack_128;
    uStack_3b0 = uStack_130;
    uStack_398 = uStack_118;
    lStack_3a0 = uStack_120;
    uStack_388 = uStack_108;
    uStack_390 = uStack_110;
    uStack_378 = uStack_f8;
    uStack_380 = uStack_100;
    puVar2 = &uStack_130;
    func_0x00010351ec24();
    if ((int)puVar2 == 1) {
      puVar2 = &uStack_3b0;
      func_0x000100d55140();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar3 = puVar2[2];
      uStack_2b8 = uStack_1d8;
      uStack_2c0 = uStack_1e0;
      uStack_2a8 = uStack_1c8;
      uStack_2b0 = uStack_1d0;
      uStack_278 = uStack_198;
      uStack_280 = uStack_1a0;
      uStack_268 = uStack_188;
      uStack_270 = uStack_190;
      uStack_298 = uStack_1b8;
      uStack_2a0 = uStack_1c0;
      uStack_288 = uStack_1a8;
      uStack_290 = uStack_1b0;
      uStack_220 = uStack_140;
      uStack_238 = uStack_158;
      uStack_240 = uStack_160;
      uStack_228 = uStack_148;
      uStack_230 = uStack_150;
      uStack_258 = uStack_178;
      uStack_260 = uStack_180;
      uStack_248 = uStack_168;
      uStack_250 = uStack_170;
      uStack_2d8 = uStack_1f8;
      uStack_2e0 = uStack_200;
      uStack_2c8 = uStack_1e8;
      uStack_2d0 = uStack_1f0;
      FUN_10351ec30(&uStack_2e0,&uStack_470);
      puVar2 = (undefined8 *)0x0;
      FUN_103521864(0,0,0);
      uStack_218 = uVar5;
      uStack_210 = uVar6;
      lStack_208 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000103502994();
  (*pcVar4)(&uStack_218,&UNK_110666c90,puVar2,param_3,param_4);
  lVar3 = lStack_208;
  uVar6 = uStack_210;
  uVar5 = uStack_218;
  if (unaff_x21 == 0) {
    if (lStack_208 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
        (*pcVar4)(param_3,param_4);
      }
      FUN_103521864(uStack_218,uStack_210,lStack_208);
      uStack_470 = uVar5;
      uStack_468 = uVar6;
      lStack_460 = lVar3;
      func_0x0001034a6780(&uStack_470);
      uStack_328 = uStack_3e8;
      uStack_330 = uStack_3f0;
      uStack_318 = uStack_3d8;
      uStack_320 = uStack_3e0;
      uStack_308 = uStack_3c8;
      uStack_310 = uStack_3d0;
      uStack_2f8 = uStack_3b8;
      uStack_300 = uStack_3c0;
      uStack_368 = uStack_428;
      uStack_370 = uStack_430;
      uStack_358 = uStack_418;
      uStack_360 = uStack_420;
      uStack_348 = uStack_408;
      uStack_350 = uStack_410;
      uStack_338 = uStack_3f8;
      uStack_340 = uStack_400;
      uStack_3a8 = uStack_468;
      uStack_3b0 = uStack_470;
      uStack_398 = uStack_458;
      lStack_3a0 = lStack_460;
      uStack_388 = uStack_448;
      uStack_390 = uStack_450;
      uStack_378 = uStack_438;
      uStack_380 = uStack_440;
      func_0x0001034a6768(&uStack_3b0);
      uStack_238 = *(undefined8 *)(param_1 + 0xb8);
      uStack_240 = *(undefined8 *)(param_1 + 0xb0);
      uStack_228 = *(undefined8 *)(param_1 + 200);
      uStack_230 = *(undefined8 *)(param_1 + 0xc0);
      uStack_220 = *(undefined1 *)(param_1 + 0xd0);
      uStack_278 = *(undefined8 *)(param_1 + 0x78);
      uStack_280 = *(undefined8 *)(param_1 + 0x70);
      uStack_268 = *(undefined8 *)(param_1 + 0x88);
      uStack_270 = *(undefined8 *)(param_1 + 0x80);
      uStack_258 = *(undefined8 *)(param_1 + 0x98);
      uStack_260 = *(undefined8 *)(param_1 + 0x90);
      uStack_248 = *(undefined8 *)(param_1 + 0xa8);
      uStack_250 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2b8 = *(undefined8 *)(param_1 + 0x38);
      uStack_2c0 = *(undefined8 *)(param_1 + 0x30);
      uStack_2a8 = *(undefined8 *)(param_1 + 0x48);
      uStack_2b0 = *(undefined8 *)(param_1 + 0x40);
      uStack_298 = *(undefined8 *)(param_1 + 0x58);
      uStack_2a0 = *(undefined8 *)(param_1 + 0x50);
      uStack_288 = *(undefined8 *)(param_1 + 0x68);
      uStack_290 = *(undefined8 *)(param_1 + 0x60);
      uStack_2d8 = *(undefined8 *)(param_1 + 0x18);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x10);
      uStack_2c8 = *(undefined8 *)(param_1 + 0x28);
      uStack_2d0 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0xb8) = uStack_308;
      *(undefined8 *)(param_1 + 0xb0) = uStack_310;
      *(undefined8 *)(param_1 + 200) = uStack_2f8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_300;
      *(undefined1 *)(param_1 + 0xd0) = uStack_2f0;
      *(undefined8 *)(param_1 + 0x78) = uStack_348;
      *(undefined8 *)(param_1 + 0x70) = uStack_350;
      *(undefined8 *)(param_1 + 0x88) = uStack_338;
      *(undefined8 *)(param_1 + 0x80) = uStack_340;
      *(undefined8 *)(param_1 + 0x98) = uStack_328;
      *(undefined8 *)(param_1 + 0x90) = uStack_330;
      *(undefined8 *)(param_1 + 0xa8) = uStack_318;
      *(undefined8 *)(param_1 + 0xa0) = uStack_320;
      *(undefined8 *)(param_1 + 0x38) = uStack_388;
      *(undefined8 *)(param_1 + 0x30) = uStack_390;
      *(undefined8 *)(param_1 + 0x48) = uStack_378;
      *(undefined8 *)(param_1 + 0x40) = uStack_380;
      *(undefined8 *)(param_1 + 0x58) = uStack_368;
      *(undefined8 *)(param_1 + 0x50) = uStack_370;
      *(undefined8 *)(param_1 + 0x68) = uStack_358;
      *(undefined8 *)(param_1 + 0x60) = uStack_360;
      *(undefined8 *)(param_1 + 0x18) = uStack_3a8;
      *(undefined8 *)(param_1 + 0x10) = uStack_3b0;
      *(undefined8 *)(param_1 + 0x28) = uStack_398;
      *(long *)(param_1 + 0x20) = lStack_3a0;
      FUN_10352180c(&uStack_2e0,0x112f730d0,&UNK_10dbce2e0);
      return;
    }
    lVar3 = 0;
  }
  FUN_103521864(uStack_218,uStack_210,lVar3);
  return;
}



/* Entry: 10351d404; end: 10351d9c7;  */

/* WARNING: Removing unreachable block (ram,0x00010351d888) */

void FUN_10351d404(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
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
  undefined8 uStack_6f8;
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
  undefined8 uStack_668;
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
  undefined8 uStack_5d8;
  undefined1 uStack_5d0;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
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
  undefined8 uStack_508;
  undefined1 uStack_500;
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
  undefined8 uStack_3b8;
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
  undefined1 uStack_130;
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
  undefined1 uStack_60;
  
  func_0x00010350311c(&uStack_2b0);
  uStack_2e8 = uStack_228;
  uStack_2f0 = uStack_230;
  uStack_2d8 = uStack_218;
  uStack_2e0 = uStack_220;
  uStack_2c8 = uStack_208;
  uStack_2d0 = uStack_210;
  uStack_2b8 = uStack_1f8;
  uStack_2c0 = uStack_200;
  uStack_328 = uStack_268;
  uStack_330 = uStack_270;
  uStack_318 = uStack_258;
  uStack_320 = uStack_260;
  uStack_308 = uStack_248;
  uStack_310 = uStack_250;
  uStack_2f8 = uStack_238;
  uStack_300 = uStack_240;
  uStack_368 = uStack_2a8;
  uStack_370 = uStack_2b0;
  uStack_358 = uStack_298;
  uStack_360 = uStack_2a0;
  uStack_348 = uStack_288;
  uStack_350 = uStack_290;
  uStack_338 = uStack_278;
  uStack_340 = uStack_280;
  uStack_88 = *(undefined8 *)(param_1 + 0xa8);
  uStack_90 = *(undefined8 *)(param_1 + 0xa0);
  uStack_148 = *(undefined8 *)(param_1 + 0xb8);
  uStack_150 = *(undefined8 *)(param_1 + 0xb0);
  uStack_78 = *(undefined8 *)(param_1 + 0xb8);
  uStack_80 = *(undefined8 *)(param_1 + 0xb0);
  uStack_138 = *(undefined8 *)(param_1 + 200);
  uStack_140 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c8 = *(undefined8 *)(param_1 + 0x68);
  uStack_d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_188 = *(undefined8 *)(param_1 + 0x78);
  uStack_190 = *(undefined8 *)(param_1 + 0x70);
  uStack_b8 = *(undefined8 *)(param_1 + 0x78);
  uStack_c0 = *(undefined8 *)(param_1 + 0x70);
  uStack_178 = *(undefined8 *)(param_1 + 0x88);
  uStack_180 = *(undefined8 *)(param_1 + 0x80);
  uStack_a8 = *(undefined8 *)(param_1 + 0x88);
  uStack_b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_168 = *(undefined8 *)(param_1 + 0x98);
  uStack_170 = *(undefined8 *)(param_1 + 0x90);
  uStack_98 = *(undefined8 *)(param_1 + 0x98);
  uStack_a0 = *(undefined8 *)(param_1 + 0x90);
  uStack_158 = *(undefined8 *)(param_1 + 0xa8);
  uStack_160 = *(undefined8 *)(param_1 + 0xa0);
  uStack_108 = *(undefined8 *)(param_1 + 0x28);
  uStack_110 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x30);
  uStack_f8 = *(undefined8 *)(param_1 + 0x38);
  uStack_100 = *(undefined8 *)(param_1 + 0x30);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x40);
  uStack_e8 = *(undefined8 *)(param_1 + 0x48);
  uStack_f0 = *(undefined8 *)(param_1 + 0x40);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x50);
  uStack_d8 = *(undefined8 *)(param_1 + 0x58);
  uStack_e0 = *(undefined8 *)(param_1 + 0x50);
  uStack_198 = *(undefined8 *)(param_1 + 0x68);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x60);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x18);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x10);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x20);
  uStack_118 = *(undefined8 *)(param_1 + 0x18);
  uStack_120 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = *(undefined8 *)(param_1 + 200);
  uStack_70 = *(undefined8 *)(param_1 + 0xc0);
  uStack_130 = *(undefined1 *)(param_1 + 0xd0);
  uStack_60 = *(undefined1 *)(param_1 + 0xd0);
  puVar3 = &uStack_1f0;
  FUN_10351ec08();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    uStack_608 = uStack_98;
    uStack_610 = uStack_a0;
    uStack_5f8 = uStack_88;
    uStack_600 = uStack_90;
    uStack_5e8 = uStack_78;
    uStack_5f0 = uStack_80;
    uStack_5d8 = uStack_68;
    uStack_5e0 = uStack_70;
    uStack_648 = uStack_d8;
    uStack_650 = uStack_e0;
    uStack_638 = uStack_c8;
    uStack_640 = uStack_d0;
    uStack_628 = uStack_b8;
    uStack_630 = uStack_c0;
    uStack_618 = uStack_a8;
    uStack_620 = uStack_b0;
    uStack_688 = uStack_118;
    uStack_690 = uStack_120;
    uStack_678 = uStack_108;
    uStack_680 = uStack_110;
    uStack_668 = uStack_f8;
    uStack_670 = uStack_100;
    uStack_658 = uStack_e8;
    uStack_660 = uStack_f0;
    puVar3 = &uStack_120;
    func_0x00010351ec24();
    if ((int)puVar3 == 2) {
      puVar3 = &uStack_690;
      func_0x000100d55140();
      uStack_468 = uStack_2e8;
      uStack_470 = uStack_2f0;
      uStack_458 = uStack_2d8;
      uStack_460 = uStack_2e0;
      uStack_448 = uStack_2c8;
      uStack_450 = uStack_2d0;
      uStack_438 = uStack_2b8;
      uStack_440 = uStack_2c0;
      uStack_4a8 = uStack_328;
      uStack_4b0 = uStack_330;
      uStack_498 = uStack_318;
      uStack_4a0 = uStack_320;
      uStack_488 = uStack_308;
      uStack_490 = uStack_310;
      uStack_478 = uStack_2f8;
      uStack_480 = uStack_300;
      uStack_4e8 = uStack_368;
      uStack_4f0 = uStack_370;
      uStack_4d8 = uStack_358;
      uStack_4e0 = uStack_360;
      uStack_4c8 = uStack_348;
      uStack_4d0 = uStack_350;
      uStack_4b8 = uStack_338;
      uStack_4c0 = uStack_340;
      uStack_518 = uStack_148;
      uStack_520 = uStack_150;
      uStack_508 = uStack_138;
      uStack_510 = uStack_140;
      uStack_500 = uStack_130;
      uStack_558 = uStack_188;
      uStack_560 = uStack_190;
      uStack_548 = uStack_178;
      uStack_550 = uStack_180;
      uStack_538 = uStack_168;
      uStack_540 = uStack_170;
      uStack_528 = uStack_158;
      uStack_530 = uStack_160;
      uStack_598 = uStack_1c8;
      uStack_5a0 = uStack_1d0;
      uStack_588 = uStack_1b8;
      uStack_590 = uStack_1c0;
      uStack_578 = uStack_1a8;
      uStack_580 = uStack_1b0;
      uStack_568 = uStack_198;
      uStack_570 = uStack_1a0;
      uStack_5b8 = uStack_1e8;
      uStack_5c0 = uStack_1f0;
      uStack_5a8 = uStack_1d8;
      uStack_5b0 = uStack_1e0;
      FUN_10351ec30(&uStack_5c0,&uStack_430);
      FUN_10352180c(&uStack_4f0,0x112f74d30,&UNK_10dbd4750);
      uStack_408 = puVar3[5];
      uStack_410 = puVar3[4];
      uStack_3f8 = puVar3[7];
      uStack_400 = puVar3[6];
      uStack_428 = puVar3[1];
      uStack_430 = *puVar3;
      uStack_418 = puVar3[3];
      uStack_420 = puVar3[2];
      uStack_3c8 = puVar3[0xd];
      uStack_3d0 = puVar3[0xc];
      uStack_3b8 = puVar3[0xf];
      uStack_3c0 = puVar3[0xe];
      uStack_3e8 = puVar3[9];
      uStack_3f0 = puVar3[8];
      uStack_3d8 = puVar3[0xb];
      uStack_3e0 = puVar3[10];
      uStack_388 = puVar3[0x15];
      uStack_390 = puVar3[0x14];
      uStack_378 = puVar3[0x17];
      uStack_380 = puVar3[0x16];
      uStack_3a8 = puVar3[0x11];
      uStack_3b0 = puVar3[0x10];
      uStack_398 = puVar3[0x13];
      uStack_3a0 = puVar3[0x12];
      puVar3 = &uStack_430;
      func_0x00010350313c(puVar3);
      uStack_2e8 = uStack_3a8;
      uStack_2f0 = uStack_3b0;
      uStack_2d8 = uStack_398;
      uStack_2e0 = uStack_3a0;
      uStack_2c8 = uStack_388;
      uStack_2d0 = uStack_390;
      uStack_2b8 = uStack_378;
      uStack_2c0 = uStack_380;
      uStack_328 = uStack_3e8;
      uStack_330 = uStack_3f0;
      uStack_318 = uStack_3d8;
      uStack_320 = uStack_3e0;
      uStack_308 = uStack_3c8;
      uStack_310 = uStack_3d0;
      uStack_2f8 = uStack_3b8;
      uStack_300 = uStack_3c0;
      uStack_368 = uStack_428;
      uStack_370 = uStack_430;
      uStack_358 = uStack_418;
      uStack_360 = uStack_420;
      uStack_348 = uStack_408;
      uStack_350 = uStack_410;
      uStack_338 = uStack_3f8;
      uStack_340 = uStack_400;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103502c14();
  (*pcVar6)(&uStack_370,&UNK_110668c48,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_468 = uStack_2e8;
    uStack_470 = uStack_2f0;
    uStack_458 = uStack_2d8;
    uStack_460 = uStack_2e0;
    uStack_448 = uStack_2c8;
    uStack_450 = uStack_2d0;
    uStack_438 = uStack_2b8;
    uStack_440 = uStack_2c0;
    uStack_4a8 = uStack_328;
    uStack_4b0 = uStack_330;
    uStack_498 = uStack_318;
    uStack_4a0 = uStack_320;
    uStack_488 = uStack_308;
    uStack_490 = uStack_310;
    uStack_478 = uStack_2f8;
    uStack_480 = uStack_300;
    uStack_4e8 = uStack_368;
    uStack_4f0 = uStack_370;
    uStack_4d8 = uStack_358;
    uStack_4e0 = uStack_360;
    uStack_4c8 = uStack_348;
    uStack_4d0 = uStack_350;
    uStack_4b8 = uStack_338;
    uStack_4c0 = uStack_340;
    uStack_3a8 = uStack_2e8;
    uStack_3b0 = uStack_2f0;
    uStack_398 = uStack_2d8;
    uStack_3a0 = uStack_2e0;
    uStack_388 = uStack_2c8;
    uStack_390 = uStack_2d0;
    uStack_378 = uStack_2b8;
    uStack_380 = uStack_2c0;
    uStack_3e8 = uStack_328;
    uStack_3f0 = uStack_330;
    uStack_3d8 = uStack_318;
    uStack_3e0 = uStack_320;
    uStack_3c8 = uStack_308;
    uStack_3d0 = uStack_310;
    uStack_3b8 = uStack_2f8;
    uStack_3c0 = uStack_300;
    uStack_428 = uStack_368;
    uStack_430 = uStack_370;
    uStack_418 = uStack_358;
    uStack_420 = uStack_360;
    uStack_408 = uStack_348;
    uStack_410 = uStack_350;
    uStack_3f8 = uStack_338;
    uStack_400 = uStack_340;
    iVar2 = (int)&uStack_4f0;
    FUN_10352184c();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        uStack_538 = uStack_468;
        uStack_540 = uStack_470;
        uStack_528 = uStack_458;
        uStack_530 = uStack_460;
        uStack_518 = uStack_448;
        uStack_520 = uStack_450;
        uStack_508 = uStack_438;
        uStack_510 = uStack_440;
        uStack_578 = uStack_4a8;
        uStack_580 = uStack_4b0;
        uStack_568 = uStack_498;
        uStack_570 = uStack_4a0;
        uStack_558 = uStack_488;
        uStack_560 = uStack_490;
        uStack_548 = uStack_478;
        uStack_550 = uStack_480;
        uStack_5b8 = uStack_4e8;
        uStack_5c0 = uStack_4f0;
        uStack_5a8 = uStack_4d8;
        uStack_5b0 = uStack_4e0;
        uStack_598 = uStack_4c8;
        uStack_5a0 = uStack_4d0;
        uStack_588 = uStack_4b8;
        uStack_590 = uStack_4c0;
        func_0x0001034a6864(&uStack_5c0,&uStack_690);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_538 = uStack_468;
        uStack_540 = uStack_470;
        uStack_528 = uStack_458;
        uStack_530 = uStack_460;
        uStack_518 = uStack_448;
        uStack_520 = uStack_450;
        uStack_508 = uStack_438;
        uStack_510 = uStack_440;
        uStack_578 = uStack_4a8;
        uStack_580 = uStack_4b0;
        uStack_568 = uStack_498;
        uStack_570 = uStack_4a0;
        uStack_558 = uStack_488;
        uStack_560 = uStack_490;
        uStack_548 = uStack_478;
        uStack_550 = uStack_480;
        uStack_5b8 = uStack_4e8;
        uStack_5c0 = uStack_4f0;
        uStack_5a8 = uStack_4d8;
        uStack_5b0 = uStack_4e0;
        uStack_598 = uStack_4c8;
        uStack_5a0 = uStack_4d0;
        uStack_588 = uStack_4b8;
        uStack_590 = uStack_4c0;
        func_0x0001034a6864(&uStack_5c0,&uStack_690);
        (*pcVar6)(param_3,param_4);
      }
      FUN_10352180c(&uStack_370,0x112f74d30,&UNK_10dbd4750);
      uStack_6c8 = uStack_3a8;
      uStack_6d0 = uStack_3b0;
      uStack_6b8 = uStack_398;
      uStack_6c0 = uStack_3a0;
      uStack_6a8 = uStack_388;
      uStack_6b0 = uStack_390;
      uStack_698 = uStack_378;
      uStack_6a0 = uStack_380;
      uStack_708 = uStack_3e8;
      uStack_710 = uStack_3f0;
      uStack_6f8 = uStack_3d8;
      uStack_700 = uStack_3e0;
      uStack_6e8 = uStack_3c8;
      uStack_6f0 = uStack_3d0;
      uStack_6d8 = uStack_3b8;
      uStack_6e0 = uStack_3c0;
      uStack_748 = uStack_428;
      uStack_750 = uStack_430;
      uStack_738 = uStack_418;
      uStack_740 = uStack_420;
      uStack_728 = uStack_408;
      uStack_730 = uStack_410;
      uStack_718 = uStack_3f8;
      uStack_720 = uStack_400;
      FUN_1034a6754(&uStack_750);
      uStack_608 = uStack_6c8;
      uStack_610 = uStack_6d0;
      uStack_5f8 = uStack_6b8;
      uStack_600 = uStack_6c0;
      uStack_5e8 = uStack_6a8;
      uStack_5f0 = uStack_6b0;
      uStack_5d8 = uStack_698;
      uStack_5e0 = uStack_6a0;
      uStack_648 = uStack_708;
      uStack_650 = uStack_710;
      uStack_638 = uStack_6f8;
      uStack_640 = uStack_700;
      uStack_628 = uStack_6e8;
      uStack_630 = uStack_6f0;
      uStack_618 = uStack_6d8;
      uStack_620 = uStack_6e0;
      uStack_688 = uStack_748;
      uStack_690 = uStack_750;
      uStack_678 = uStack_738;
      uStack_680 = uStack_740;
      uStack_668 = uStack_728;
      uStack_670 = uStack_730;
      uStack_658 = uStack_718;
      uStack_660 = uStack_720;
      func_0x0001034a6768(&uStack_690);
      uStack_518 = *(undefined8 *)(param_1 + 0xb8);
      uStack_520 = *(undefined8 *)(param_1 + 0xb0);
      uStack_508 = *(undefined8 *)(param_1 + 200);
      uStack_510 = *(undefined8 *)(param_1 + 0xc0);
      uStack_500 = *(undefined1 *)(param_1 + 0xd0);
      uStack_558 = *(undefined8 *)(param_1 + 0x78);
      uStack_560 = *(undefined8 *)(param_1 + 0x70);
      uStack_548 = *(undefined8 *)(param_1 + 0x88);
      uStack_550 = *(undefined8 *)(param_1 + 0x80);
      uStack_538 = *(undefined8 *)(param_1 + 0x98);
      uStack_540 = *(undefined8 *)(param_1 + 0x90);
      uStack_528 = *(undefined8 *)(param_1 + 0xa8);
      uStack_530 = *(undefined8 *)(param_1 + 0xa0);
      uStack_598 = *(undefined8 *)(param_1 + 0x38);
      uStack_5a0 = *(undefined8 *)(param_1 + 0x30);
      uStack_588 = *(undefined8 *)(param_1 + 0x48);
      uStack_590 = *(undefined8 *)(param_1 + 0x40);
      uStack_578 = *(undefined8 *)(param_1 + 0x58);
      uStack_580 = *(undefined8 *)(param_1 + 0x50);
      uStack_568 = *(undefined8 *)(param_1 + 0x68);
      uStack_570 = *(undefined8 *)(param_1 + 0x60);
      uStack_5b8 = *(undefined8 *)(param_1 + 0x18);
      uStack_5c0 = *(undefined8 *)(param_1 + 0x10);
      uStack_5a8 = *(undefined8 *)(param_1 + 0x28);
      uStack_5b0 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0xb8) = uStack_5e8;
      *(undefined8 *)(param_1 + 0xb0) = uStack_5f0;
      *(undefined8 *)(param_1 + 200) = uStack_5d8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_5e0;
      *(undefined1 *)(param_1 + 0xd0) = uStack_5d0;
      *(undefined8 *)(param_1 + 0x78) = uStack_628;
      *(undefined8 *)(param_1 + 0x70) = uStack_630;
      *(undefined8 *)(param_1 + 0x88) = uStack_618;
      *(undefined8 *)(param_1 + 0x80) = uStack_620;
      *(undefined8 *)(param_1 + 0x98) = uStack_608;
      *(undefined8 *)(param_1 + 0x90) = uStack_610;
      *(undefined8 *)(param_1 + 0xa8) = uStack_5f8;
      *(undefined8 *)(param_1 + 0xa0) = uStack_600;
      *(undefined8 *)(param_1 + 0x38) = uStack_668;
      *(undefined8 *)(param_1 + 0x30) = uStack_670;
      *(undefined8 *)(param_1 + 0x48) = uStack_658;
      *(undefined8 *)(param_1 + 0x40) = uStack_660;
      *(undefined8 *)(param_1 + 0x58) = uStack_648;
      *(undefined8 *)(param_1 + 0x50) = uStack_650;
      *(undefined8 *)(param_1 + 0x68) = uStack_638;
      *(undefined8 *)(param_1 + 0x60) = uStack_640;
      *(undefined8 *)(param_1 + 0x18) = uStack_688;
      *(undefined8 *)(param_1 + 0x10) = uStack_690;
      *(undefined8 *)(param_1 + 0x28) = uStack_678;
      *(undefined8 *)(param_1 + 0x20) = uStack_680;
      uVar4 = 0x112f730d0;
      puVar5 = &UNK_10dbce2e0;
      puVar3 = &uStack_5c0;
      goto LAB_10351d7c4;
    }
  }
  uVar4 = 0x112f74d30;
  puVar5 = &UNK_10dbd4750;
  puVar3 = &uStack_370;
LAB_10351d7c4:
  FUN_10352180c(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 10351d9c8; end: 10351dd0b;  */

/* WARNING: Removing unreachable block (ram,0x00010351dc0c) */

void FUN_10351d9c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
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
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
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
  undefined1 uStack_2f0;
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
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
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
  undefined1 uStack_140;
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
  undefined1 uStack_70;
  
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_158 = *(undefined8 *)(param_1 + 0xb8);
  uStack_160 = *(undefined8 *)(param_1 + 0xb0);
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_148 = *(undefined8 *)(param_1 + 200);
  uStack_150 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x78);
  uStack_d0 = *(undefined8 *)(param_1 + 0x70);
  uStack_188 = *(undefined8 *)(param_1 + 0x88);
  uStack_190 = *(undefined8 *)(param_1 + 0x80);
  uStack_b8 = *(undefined8 *)(param_1 + 0x88);
  uStack_c0 = *(undefined8 *)(param_1 + 0x80);
  uStack_178 = *(undefined8 *)(param_1 + 0x98);
  uStack_180 = *(undefined8 *)(param_1 + 0x90);
  uStack_a8 = *(undefined8 *)(param_1 + 0x98);
  uStack_b0 = *(undefined8 *)(param_1 + 0x90);
  uStack_168 = *(undefined8 *)(param_1 + 0xa8);
  uStack_170 = *(undefined8 *)(param_1 + 0xa0);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x40);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x18);
  uStack_200 = *(undefined8 *)(param_1 + 0x10);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_128 = *(undefined8 *)(param_1 + 0x18);
  uStack_130 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_210 = 0;
  uStack_218 = 0;
  lStack_208 = 0;
  uStack_140 = *(undefined1 *)(param_1 + 0xd0);
  uStack_70 = *(undefined1 *)(param_1 + 0xd0);
  puVar2 = &uStack_200;
  FUN_10351ec08();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_328 = uStack_a8;
    uStack_330 = uStack_b0;
    uStack_318 = uStack_98;
    uStack_320 = uStack_a0;
    uStack_308 = uStack_88;
    uStack_310 = uStack_90;
    uStack_2f8 = uStack_78;
    uStack_300 = uStack_80;
    uStack_368 = uStack_e8;
    uStack_370 = uStack_f0;
    uStack_358 = uStack_d8;
    uStack_360 = uStack_e0;
    uStack_348 = uStack_c8;
    uStack_350 = uStack_d0;
    uStack_338 = uStack_b8;
    uStack_340 = uStack_c0;
    uStack_3a8 = uStack_128;
    uStack_3b0 = uStack_130;
    uStack_398 = uStack_118;
    lStack_3a0 = uStack_120;
    uStack_388 = uStack_108;
    uStack_390 = uStack_110;
    uStack_378 = uStack_f8;
    uStack_380 = uStack_100;
    puVar2 = &uStack_130;
    func_0x00010351ec24();
    if ((int)puVar2 == 3) {
      puVar2 = &uStack_3b0;
      func_0x000100d55140();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar3 = puVar2[2];
      uStack_2b8 = uStack_1d8;
      uStack_2c0 = uStack_1e0;
      uStack_2a8 = uStack_1c8;
      uStack_2b0 = uStack_1d0;
      uStack_278 = uStack_198;
      uStack_280 = uStack_1a0;
      uStack_268 = uStack_188;
      uStack_270 = uStack_190;
      uStack_298 = uStack_1b8;
      uStack_2a0 = uStack_1c0;
      uStack_288 = uStack_1a8;
      uStack_290 = uStack_1b0;
      uStack_220 = uStack_140;
      uStack_238 = uStack_158;
      uStack_240 = uStack_160;
      uStack_228 = uStack_148;
      uStack_230 = uStack_150;
      uStack_258 = uStack_178;
      uStack_260 = uStack_180;
      uStack_248 = uStack_168;
      uStack_250 = uStack_170;
      uStack_2d8 = uStack_1f8;
      uStack_2e0 = uStack_200;
      uStack_2c8 = uStack_1e8;
      uStack_2d0 = uStack_1f0;
      FUN_10351ec30(&uStack_2e0,&uStack_470);
      puVar2 = (undefined8 *)0x0;
      FUN_103521864(0,0,0);
      uStack_218 = uVar5;
      uStack_210 = uVar6;
      lStack_208 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x0001035027d4();
  (*pcVar4)(&uStack_218,&UNK_110667f00,puVar2,param_3,param_4);
  lVar3 = lStack_208;
  uVar6 = uStack_210;
  uVar5 = uStack_218;
  if (unaff_x21 == 0) {
    if (lStack_208 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
        (*pcVar4)(param_3,param_4);
      }
      FUN_103521864(uStack_218,uStack_210,lStack_208);
      uStack_470 = uVar5;
      uStack_468 = uVar6;
      lStack_460 = lVar3;
      func_0x0001034a6770(&uStack_470);
      uStack_328 = uStack_3e8;
      uStack_330 = uStack_3f0;
      uStack_318 = uStack_3d8;
      uStack_320 = uStack_3e0;
      uStack_308 = uStack_3c8;
      uStack_310 = uStack_3d0;
      uStack_2f8 = uStack_3b8;
      uStack_300 = uStack_3c0;
      uStack_368 = uStack_428;
      uStack_370 = uStack_430;
      uStack_358 = uStack_418;
      uStack_360 = uStack_420;
      uStack_348 = uStack_408;
      uStack_350 = uStack_410;
      uStack_338 = uStack_3f8;
      uStack_340 = uStack_400;
      uStack_3a8 = uStack_468;
      uStack_3b0 = uStack_470;
      uStack_398 = uStack_458;
      lStack_3a0 = lStack_460;
      uStack_388 = uStack_448;
      uStack_390 = uStack_450;
      uStack_378 = uStack_438;
      uStack_380 = uStack_440;
      func_0x0001034a6768(&uStack_3b0);
      uStack_238 = *(undefined8 *)(param_1 + 0xb8);
      uStack_240 = *(undefined8 *)(param_1 + 0xb0);
      uStack_228 = *(undefined8 *)(param_1 + 200);
      uStack_230 = *(undefined8 *)(param_1 + 0xc0);
      uStack_220 = *(undefined1 *)(param_1 + 0xd0);
      uStack_278 = *(undefined8 *)(param_1 + 0x78);
      uStack_280 = *(undefined8 *)(param_1 + 0x70);
      uStack_268 = *(undefined8 *)(param_1 + 0x88);
      uStack_270 = *(undefined8 *)(param_1 + 0x80);
      uStack_258 = *(undefined8 *)(param_1 + 0x98);
      uStack_260 = *(undefined8 *)(param_1 + 0x90);
      uStack_248 = *(undefined8 *)(param_1 + 0xa8);
      uStack_250 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2b8 = *(undefined8 *)(param_1 + 0x38);
      uStack_2c0 = *(undefined8 *)(param_1 + 0x30);
      uStack_2a8 = *(undefined8 *)(param_1 + 0x48);
      uStack_2b0 = *(undefined8 *)(param_1 + 0x40);
      uStack_298 = *(undefined8 *)(param_1 + 0x58);
      uStack_2a0 = *(undefined8 *)(param_1 + 0x50);
      uStack_288 = *(undefined8 *)(param_1 + 0x68);
      uStack_290 = *(undefined8 *)(param_1 + 0x60);
      uStack_2d8 = *(undefined8 *)(param_1 + 0x18);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x10);
      uStack_2c8 = *(undefined8 *)(param_1 + 0x28);
      uStack_2d0 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0xb8) = uStack_308;
      *(undefined8 *)(param_1 + 0xb0) = uStack_310;
      *(undefined8 *)(param_1 + 200) = uStack_2f8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_300;
      *(undefined1 *)(param_1 + 0xd0) = uStack_2f0;
      *(undefined8 *)(param_1 + 0x78) = uStack_348;
      *(undefined8 *)(param_1 + 0x70) = uStack_350;
      *(undefined8 *)(param_1 + 0x88) = uStack_338;
      *(undefined8 *)(param_1 + 0x80) = uStack_340;
      *(undefined8 *)(param_1 + 0x98) = uStack_328;
      *(undefined8 *)(param_1 + 0x90) = uStack_330;
      *(undefined8 *)(param_1 + 0xa8) = uStack_318;
      *(undefined8 *)(param_1 + 0xa0) = uStack_320;
      *(undefined8 *)(param_1 + 0x38) = uStack_388;
      *(undefined8 *)(param_1 + 0x30) = uStack_390;
      *(undefined8 *)(param_1 + 0x48) = uStack_378;
      *(undefined8 *)(param_1 + 0x40) = uStack_380;
      *(undefined8 *)(param_1 + 0x58) = uStack_368;
      *(undefined8 *)(param_1 + 0x50) = uStack_370;
      *(undefined8 *)(param_1 + 0x68) = uStack_358;
      *(undefined8 *)(param_1 + 0x60) = uStack_360;
      *(undefined8 *)(param_1 + 0x18) = uStack_3a8;
      *(undefined8 *)(param_1 + 0x10) = uStack_3b0;
      *(undefined8 *)(param_1 + 0x28) = uStack_398;
      *(long *)(param_1 + 0x20) = lStack_3a0;
      FUN_10352180c(&uStack_2e0,0x112f730d0,&UNK_10dbce2e0);
      return;
    }
    lVar3 = 0;
  }
  FUN_103521864(uStack_218,uStack_210,lVar3);
  return;
}



/* Entry: 10351dd0c; end: 10351df47;  */

/* WARNING: Removing unreachable block (ram,0x00010351ddf8) */

void FUN_10351dd0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  code *pcVar7;
  long lStack_200;
  undefined1 uStack_1f8;
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
  undefined1 uStack_130;
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
  
  FUN_10351df48();
  if (unaff_x21 == 0) {
    FUN_10351dfd0();
    lVar6 = *unaff_x20;
    lVar1 = unaff_x20[1];
    lVar3 = lVar6;
    func_0x000103559d2c(lVar6,(char)lVar1);
    lVar4 = 0;
    func_0x000103559d2c(0,1);
    if (lVar3 != lVar4) {
      pcVar7 = *(code **)(param_3 + 0x80);
      lStack_200 = lVar6;
      uStack_1f8 = (char)lVar1;
      func_0x000101568cc4();
      (*pcVar7)(&lStack_200,3,&UNK_110664c98,lVar4,param_2,param_3);
    }
    lStack_148 = unaff_x20[0x17];
    lStack_150 = unaff_x20[0x16];
    lStack_138 = unaff_x20[0x19];
    lStack_140 = unaff_x20[0x18];
    uStack_130 = (undefined1)unaff_x20[0x1a];
    lStack_188 = unaff_x20[0xf];
    lStack_190 = unaff_x20[0xe];
    lStack_178 = unaff_x20[0x11];
    lStack_180 = unaff_x20[0x10];
    lStack_168 = unaff_x20[0x13];
    lStack_170 = unaff_x20[0x12];
    lStack_158 = unaff_x20[0x15];
    lStack_160 = unaff_x20[0x14];
    lStack_1c8 = unaff_x20[7];
    lStack_1d0 = unaff_x20[6];
    lStack_1b8 = unaff_x20[9];
    lStack_1c0 = unaff_x20[8];
    lStack_1a8 = unaff_x20[0xb];
    lStack_1b0 = unaff_x20[10];
    lStack_198 = unaff_x20[0xd];
    lStack_1a0 = unaff_x20[0xc];
    lStack_1e8 = unaff_x20[3];
    lStack_1f0 = unaff_x20[2];
    lStack_1d8 = unaff_x20[5];
    lStack_1e0 = unaff_x20[4];
    plVar5 = &lStack_1f0;
    FUN_10351ec08();
    if ((int)plVar5 != 1) {
      lStack_98 = lStack_168;
      lStack_a0 = lStack_170;
      lStack_88 = lStack_158;
      lStack_90 = lStack_160;
      lStack_78 = lStack_148;
      lStack_80 = lStack_150;
      lStack_68 = lStack_138;
      lStack_70 = lStack_140;
      lStack_d8 = lStack_1a8;
      lStack_e0 = lStack_1b0;
      lStack_c8 = lStack_198;
      lStack_d0 = lStack_1a0;
      lStack_b8 = lStack_188;
      lStack_c0 = lStack_190;
      lStack_a8 = lStack_178;
      lStack_b0 = lStack_180;
      lStack_118 = lStack_1e8;
      lStack_120 = lStack_1f0;
      lStack_108 = lStack_1d8;
      lStack_110 = lStack_1e0;
      lStack_f8 = lStack_1c8;
      lStack_100 = lStack_1d0;
      lStack_e8 = lStack_1b8;
      lStack_f0 = lStack_1c0;
      iVar2 = (int)&lStack_120;
      func_0x00010351ec24();
      func_0x000100d55140(&lStack_120);
      plVar5 = unaff_x20;
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          FUN_10351e05c();
        }
        else {
          FUN_10351e168();
        }
      }
      else if (iVar2 == 2) {
        FUN_10351e278();
      }
      else {
        FUN_10351e3a8();
      }
    }
    if (unaff_x20[0x1b] != 0) {
      uStack_1f8 = (undefined1)unaff_x20[0x1c];
      pcVar7 = *(code **)(param_3 + 0x80);
      lStack_200 = unaff_x20[0x1b];
      func_0x00010351fbd4();
      (*pcVar7)(&lStack_200,8,&UNK_110660680,plVar5,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[0x1d],unaff_x20[0x1e],param_2,param_3);
  }
  return;
}



/* Entry: 10351df48; end: 10351dfcf;  */

void FUN_10351df48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x100);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0xf8);
    uStack_48 = *(undefined8 *)(param_1 + 0x110);
    uStack_50 = *(undefined8 *)(param_1 + 0x108);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,1,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10351dfd0; end: 10351e05b;  */

void FUN_10351dfd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x128);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x120);
    uStack_60 = *(undefined8 *)(param_1 + 0x118);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,2,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10351e05c; end: 10351e167;  */

void FUN_10351e05c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
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
  undefined1 uStack_110;
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
  
  uStack_128 = *(undefined8 *)(param_1 + 0xb8);
  uStack_130 = *(undefined8 *)(param_1 + 0xb0);
  uStack_118 = *(undefined8 *)(param_1 + 200);
  uStack_120 = *(undefined8 *)(param_1 + 0xc0);
  uStack_110 = *(undefined1 *)(param_1 + 0xd0);
  uStack_168 = *(undefined8 *)(param_1 + 0x78);
  uStack_170 = *(undefined8 *)(param_1 + 0x70);
  uStack_158 = *(undefined8 *)(param_1 + 0x88);
  uStack_160 = *(undefined8 *)(param_1 + 0x80);
  uStack_148 = *(undefined8 *)(param_1 + 0x98);
  uStack_150 = *(undefined8 *)(param_1 + 0x90);
  uStack_138 = *(undefined8 *)(param_1 + 0xa8);
  uStack_140 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_198 = *(undefined8 *)(param_1 + 0x48);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_188 = *(undefined8 *)(param_1 + 0x58);
  uStack_190 = *(undefined8 *)(param_1 + 0x50);
  uStack_178 = *(undefined8 *)(param_1 + 0x68);
  uStack_180 = *(undefined8 *)(param_1 + 0x60);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = (int)&uStack_1d0;
  FUN_10351ec08();
  if (iVar1 != 1) {
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_48 = uStack_118;
    uStack_50 = uStack_120;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    iVar1 = (int)&uStack_100;
    func_0x00010351ec24();
    if (iVar1 == 0) {
      puVar2 = &uStack_100;
      func_0x000100d55140();
      uStack_1e8 = puVar2[1];
      uStack_1f0 = *puVar2;
      uStack_1e0 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502854();
      (*pcVar3)(&uStack_1f0,4,&UNK_11066a9c0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10351e168);
  (*pcVar3)();
}



/* Entry: 10351e168; end: 10351e277;  */

void FUN_10351e168(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
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
  undefined1 uStack_110;
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
  
  uStack_128 = *(undefined8 *)(param_1 + 0xb8);
  uStack_130 = *(undefined8 *)(param_1 + 0xb0);
  uStack_118 = *(undefined8 *)(param_1 + 200);
  uStack_120 = *(undefined8 *)(param_1 + 0xc0);
  uStack_110 = *(undefined1 *)(param_1 + 0xd0);
  uStack_168 = *(undefined8 *)(param_1 + 0x78);
  uStack_170 = *(undefined8 *)(param_1 + 0x70);
  uStack_158 = *(undefined8 *)(param_1 + 0x88);
  uStack_160 = *(undefined8 *)(param_1 + 0x80);
  uStack_148 = *(undefined8 *)(param_1 + 0x98);
  uStack_150 = *(undefined8 *)(param_1 + 0x90);
  uStack_138 = *(undefined8 *)(param_1 + 0xa8);
  uStack_140 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_198 = *(undefined8 *)(param_1 + 0x48);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_188 = *(undefined8 *)(param_1 + 0x58);
  uStack_190 = *(undefined8 *)(param_1 + 0x50);
  uStack_178 = *(undefined8 *)(param_1 + 0x68);
  uStack_180 = *(undefined8 *)(param_1 + 0x60);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = (int)&uStack_1d0;
  FUN_10351ec08();
  if (iVar1 != 1) {
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_48 = uStack_118;
    uStack_50 = uStack_120;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    iVar1 = (int)&uStack_100;
    func_0x00010351ec24();
    if (iVar1 == 1) {
      puVar2 = &uStack_100;
      func_0x000100d55140();
      uStack_1e8 = puVar2[1];
      uStack_1f0 = *puVar2;
      uStack_1e0 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502994();
      (*pcVar3)(&uStack_1f0,5,&UNK_110666c90,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10351e278);
  (*pcVar3)();
}



/* Entry: 10351e278; end: 10351e3a7;  */

void FUN_10351e278(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_110;
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
  
  uStack_128 = *(undefined8 *)(param_1 + 0xb8);
  uStack_130 = *(undefined8 *)(param_1 + 0xb0);
  uStack_118 = *(undefined8 *)(param_1 + 200);
  uStack_120 = *(undefined8 *)(param_1 + 0xc0);
  uStack_110 = *(undefined1 *)(param_1 + 0xd0);
  uStack_168 = *(undefined8 *)(param_1 + 0x78);
  uStack_170 = *(undefined8 *)(param_1 + 0x70);
  uStack_158 = *(undefined8 *)(param_1 + 0x88);
  uStack_160 = *(undefined8 *)(param_1 + 0x80);
  uStack_148 = *(undefined8 *)(param_1 + 0x98);
  uStack_150 = *(undefined8 *)(param_1 + 0x90);
  uStack_138 = *(undefined8 *)(param_1 + 0xa8);
  uStack_140 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_198 = *(undefined8 *)(param_1 + 0x48);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_188 = *(undefined8 *)(param_1 + 0x58);
  uStack_190 = *(undefined8 *)(param_1 + 0x50);
  uStack_178 = *(undefined8 *)(param_1 + 0x68);
  uStack_180 = *(undefined8 *)(param_1 + 0x60);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = (int)&uStack_1d0;
  FUN_10351ec08();
  if (iVar1 != 1) {
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_48 = uStack_118;
    uStack_50 = uStack_120;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    iVar1 = (int)&uStack_100;
    func_0x00010351ec24();
    if (iVar1 == 2) {
      puVar2 = &uStack_100;
      func_0x000100d55140();
      uStack_288 = puVar2[1];
      uStack_290 = *puVar2;
      uStack_278 = puVar2[3];
      uStack_280 = puVar2[2];
      uStack_268 = puVar2[5];
      uStack_270 = puVar2[4];
      uStack_258 = puVar2[7];
      uStack_260 = puVar2[6];
      uStack_248 = puVar2[9];
      uStack_250 = puVar2[8];
      uStack_238 = puVar2[0xb];
      uStack_240 = puVar2[10];
      uStack_228 = puVar2[0xd];
      uStack_230 = puVar2[0xc];
      uStack_218 = puVar2[0xf];
      uStack_220 = puVar2[0xe];
      uStack_208 = puVar2[0x11];
      uStack_210 = puVar2[0x10];
      uStack_1f8 = puVar2[0x13];
      uStack_200 = puVar2[0x12];
      uStack_1e8 = puVar2[0x15];
      uStack_1f0 = puVar2[0x14];
      uStack_1d8 = puVar2[0x17];
      uStack_1e0 = puVar2[0x16];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103502c14();
      (*pcVar3)(&uStack_290,6,&UNK_110668c48,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10351e3a8);
  (*pcVar3)();
}



/* Entry: 10351e3a8; end: 10351e4b7;  */

void FUN_10351e3a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
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
  undefined1 uStack_110;
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
  
  uStack_128 = *(undefined8 *)(param_1 + 0xb8);
  uStack_130 = *(undefined8 *)(param_1 + 0xb0);
  uStack_118 = *(undefined8 *)(param_1 + 200);
  uStack_120 = *(undefined8 *)(param_1 + 0xc0);
  uStack_110 = *(undefined1 *)(param_1 + 0xd0);
  uStack_168 = *(undefined8 *)(param_1 + 0x78);
  uStack_170 = *(undefined8 *)(param_1 + 0x70);
  uStack_158 = *(undefined8 *)(param_1 + 0x88);
  uStack_160 = *(undefined8 *)(param_1 + 0x80);
  uStack_148 = *(undefined8 *)(param_1 + 0x98);
  uStack_150 = *(undefined8 *)(param_1 + 0x90);
  uStack_138 = *(undefined8 *)(param_1 + 0xa8);
  uStack_140 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x38);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_198 = *(undefined8 *)(param_1 + 0x48);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_188 = *(undefined8 *)(param_1 + 0x58);
  uStack_190 = *(undefined8 *)(param_1 + 0x50);
  uStack_178 = *(undefined8 *)(param_1 + 0x68);
  uStack_180 = *(undefined8 *)(param_1 + 0x60);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x18);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x28);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = (int)&uStack_1d0;
  FUN_10351ec08();
  if (iVar1 != 1) {
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_48 = uStack_118;
    uStack_50 = uStack_120;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    iVar1 = (int)&uStack_100;
    func_0x00010351ec24();
    if (iVar1 == 3) {
      puVar2 = &uStack_100;
      func_0x000100d55140();
      uStack_1e8 = puVar2[1];
      uStack_1f0 = *puVar2;
      uStack_1e0 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x0001035027d4();
      (*pcVar3)(&uStack_1f0,7,&UNK_110667f00,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10351e4b8);
  (*pcVar3)();
}



/* Entry: 10351e4b8; end: 10351e5c7;  */

void FUN_10351e4b8(undefined8 *param_1)

{
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined1 uStack_149;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined1 auStack_f8 [192];
  undefined1 uStack_38;
  
  FUN_1034a56a4(auStack_f8);
  uStack_121 = (undefined1)auStack_f8._152_8_;
  uStack_120 = SUB87(auStack_f8._152_8_,1);
  uStack_129 = (undefined1)auStack_f8._144_8_;
  uStack_128 = SUB87(auStack_f8._144_8_,1);
  uStack_111 = (undefined1)auStack_f8._168_8_;
  uStack_110 = SUB87(auStack_f8._168_8_,1);
  uStack_119 = (undefined1)auStack_f8._160_8_;
  uStack_118 = SUB87(auStack_f8._160_8_,1);
  uStack_101 = (undefined1)auStack_f8._184_8_;
  uStack_100 = SUB87(auStack_f8._184_8_,1);
  uStack_109 = (undefined1)auStack_f8._176_8_;
  uStack_108 = SUB87(auStack_f8._176_8_,1);
  uStack_161 = (undefined1)auStack_f8._88_8_;
  uStack_160 = SUB87(auStack_f8._88_8_,1);
  uStack_169 = (undefined1)auStack_f8._80_8_;
  uStack_168 = SUB87(auStack_f8._80_8_,1);
  uStack_151 = (undefined1)auStack_f8._104_8_;
  uStack_150 = SUB87(auStack_f8._104_8_,1);
  uStack_159 = (undefined1)auStack_f8._96_8_;
  uStack_158 = SUB87(auStack_f8._96_8_,1);
  uStack_141 = (undefined1)auStack_f8._120_8_;
  uStack_140 = SUB87(auStack_f8._120_8_,1);
  uStack_149 = (undefined1)auStack_f8._112_8_;
  uStack_148 = SUB87(auStack_f8._112_8_,1);
  uStack_131 = (undefined1)auStack_f8._136_8_;
  uStack_130 = SUB87(auStack_f8._136_8_,1);
  uStack_139 = (undefined1)auStack_f8._128_8_;
  uStack_138 = SUB87(auStack_f8._128_8_,1);
  uStack_1a1 = (undefined1)auStack_f8._24_8_;
  uStack_1a0 = SUB87(auStack_f8._24_8_,1);
  uStack_1a9 = (undefined1)auStack_f8._16_8_;
  uStack_1a8 = SUB87(auStack_f8._16_8_,1);
  uStack_191 = (undefined1)auStack_f8._40_8_;
  uStack_190 = SUB87(auStack_f8._40_8_,1);
  uStack_199 = (undefined1)auStack_f8._32_8_;
  uStack_198 = SUB87(auStack_f8._32_8_,1);
  uStack_181 = (undefined1)auStack_f8._56_8_;
  uStack_180 = SUB87(auStack_f8._56_8_,1);
  uStack_189 = (undefined1)auStack_f8._48_8_;
  uStack_188 = SUB87(auStack_f8._48_8_,1);
  uStack_171 = (undefined1)auStack_f8._72_8_;
  uStack_170 = SUB87(auStack_f8._72_8_,1);
  uStack_179 = (undefined1)auStack_f8._64_8_;
  uStack_178 = SUB87(auStack_f8._64_8_,1);
  uStack_1b1 = (undefined1)auStack_f8._8_8_;
  uStack_1b0 = SUB87(auStack_f8._8_8_,1);
  uStack_1b9 = (undefined1)auStack_f8._0_8_;
  uStack_1b8 = SUB87(auStack_f8._0_8_,1);
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_121,uStack_128);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_129,uStack_130);
  *(ulong *)((long)param_1 + 0xb1) = CONCAT17(uStack_111,uStack_118);
  *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_119,uStack_120);
  *(ulong *)((long)param_1 + 0xc1) = CONCAT17(uStack_101,uStack_108);
  *(ulong *)((long)param_1 + 0xb9) = CONCAT17(uStack_109,uStack_110);
  *(ulong *)((long)param_1 + 0x61) = CONCAT17(uStack_161,uStack_168);
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_169,uStack_170);
  *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_151,uStack_158);
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_159,uStack_160);
  *(ulong *)((long)param_1 + 0x81) = CONCAT17(uStack_141,uStack_148);
  *(ulong *)((long)param_1 + 0x79) = CONCAT17(uStack_149,uStack_150);
  *(ulong *)((long)param_1 + 0x91) = CONCAT17(uStack_131,uStack_138);
  *(ulong *)((long)param_1 + 0x89) = CONCAT17(uStack_139,uStack_140);
  *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_1a1,uStack_1a8);
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_1a9,uStack_1b0);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_191,uStack_198);
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_199,uStack_1a0);
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_181,uStack_188);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_189,uStack_190);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_38,uStack_100);
  *(ulong *)((long)param_1 + 0x51) = CONCAT17(uStack_171,uStack_178);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_179,uStack_180);
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_1b1,uStack_1b8);
  *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_1b9,uStack_1c0);
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  param_1[0x1e] = 0xc000000000000000;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0xf000000000000000;
  return;
}



/* Entry: 10351e5c8; end: 10351e5eb;  */

undefined1  [16] FUN_10351e5c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155020;
  auVar1._0_8_ = 0xd000000000000039;
  return auVar1;
}



/* Entry: 10351e5ec; end: 10351e61b;  */

undefined1  [16] FUN_10351e5ec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xe8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0));
  return auVar1;
}



/* Entry: 10351e61c; end: 10351e64f;  */

void FUN_10351e61c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0));
  *(undefined8 *)(unaff_x20 + 0xe8) = param_1;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_2;
  return;
}



/* Entry: 10351e650; end: 10351e663;  */

undefined1  [16] FUN_10351e650(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xe8;
  auVar1._0_8_ = 0x10351e660;
  return auVar1;
}



/* Entry: 10351e664; end: 10351e677;  */

void FUN_10351e664(void)

{
  FUN_10351cba4();
  return;
}



/* Entry: 10351e678; end: 10351e6df;  */

void FUN_10351e678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_170 [304];
  
  func_0x000107c610b4(auStack_170);
  FUN_10351dd0c(param_1,param_2,param_3);
  return;
}



/* Entry: 10351e6e0; end: 10351e6e3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10351e6e0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10351e6e4; end: 10351e71b;  */

uint FUN_10351e6e4(long param_1,long param_2)

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
  FUN_10352178c();
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



/* Entry: 10351e71c; end: 10351e76b;  */

uint FUN_10351e71c(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_280 [304];
  undefined1 auStack_150 [304];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_150,param_1,0x130);
  func_0x000107c610b4(auStack_280);
  FUN_10351efa0(auStack_280,auStack_150);
  return uVar1 & 1;
}



/* Entry: 10351e76c; end: 10351e80b;  */

/* WARNING: Possible PIC construction at 0x00010351e7b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010351e7c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010351e7bc) */
/* WARNING: Removing unreachable block (ram,0x00010351e7cc) */

void FUN_10351e76c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f75dd0 != -1) {
    func_0x000107c61568(0x112f75dd0,0x10351cb5c);
  }
  uVar5 = uRam0000000113807af8;
  uVar4 = uRam0000000113807af0;
  uVar3 = uRam0000000113807ae8;
  uVar2 = uRam0000000113807ae0;
  uVar1 = uRam0000000113807ad8;
  *param_1 = uRam0000000113807ad0;
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


